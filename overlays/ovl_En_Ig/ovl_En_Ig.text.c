CRASHED

typedef struct EnIg {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ void (*actionFunc)(EnIg *, GlobalContext *);
    /* 0x18C */ char pad_18C[0x4];
    /* 0x190 */ MtxF unk_190;                       /* inferred */
    /* 0x1D0 */ ColliderCylinder unk_1D0;           /* inferred */
    /* 0x21C */ ColliderSphere unk_21C;             /* inferred */
    /* 0x274 */ char pad_274[0x24];
    /* 0x298 */ u8 unk_298;                         /* inferred */
    /* 0x299 */ char pad_299[0x3];                  /* maybe part of unk_298[4]? */
    /* 0x29C */ s32 *unk_29C;                       /* inferred */
    /* 0x2A0 */ s32 unk_2A0;                        /* inferred */
    /* 0x2A4 */ char pad_2A4[0x4];
    /* 0x2A8 */ Actor *unk_2A8;                     /* inferred */
    /* 0x2AC */ char pad_2AC[0x40];                 /* maybe part of unk_2A8[17]? */
    /* 0x2EC */ Vec3s unk_2EC;                      /* inferred */
    /* 0x2F2 */ char pad_2F2[0x6C];                 /* maybe part of unk_2EC[19]? */
    /* 0x35E */ Vec3s unk_35E;                      /* inferred */
    /* 0x364 */ char pad_364[0x6C];                 /* maybe part of unk_35E[19]? */
    /* 0x3D0 */ u16 unk_3D0;                        /* inferred */
    /* 0x3D2 */ char pad_3D2[0x1A];                 /* maybe part of unk_3D0[14]? */
    /* 0x3EC */ s16 unk_3EC;                        /* inferred */
    /* 0x3EE */ s16 unk_3EE;                        /* inferred */
    /* 0x3F0 */ char pad_3F0[0x2];
    /* 0x3F2 */ s16 unk_3F2;                        /* inferred */
    /* 0x3F4 */ char pad_3F4[0x4];                  /* maybe part of unk_3F2[3]? */
    /* 0x3F8 */ void *unk_3F8;                      /* inferred */
    /* 0x3FC */ s32 unk_3FC;                        /* inferred */
    /* 0x400 */ char pad_400[0xC];                  /* maybe part of unk_3FC[4]? */
} EnIg;                                             /* size = 0x40C */

struct _mips2c_stack_EnIg_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnIg_Draw {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad_48[0x10];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnIg_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnIg_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BF1150 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BF1200 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BF1258 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BF1284 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BF1354 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ CollisionCheckContext *sp18;         /* inferred */
    /* 0x1C */ ColliderCylinder *sp1C;              /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BF13E4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BF146C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BF14B0 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80BF15EC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BF16C8 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BF1744 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BF17BC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x2];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BF1920 {};              /* size 0x0 */

struct _mips2c_stack_func_80BF19A0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BF1A60 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BF1AE0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BF1C44 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0xC];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0xC];
    /* 0x48 */ void *sp48;                          /* inferred */
    /* 0x4C */ char pad_4C[0x3];
    /* 0x4F */ u8 sp4F;                             /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80BF1D78 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BF1DF4 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0xC];
    /* 0x4C */ void *sp4C;                          /* inferred */
    /* 0x50 */ void *sp50;                          /* inferred */
    /* 0x54 */ char pad_54[0x1];
    /* 0x55 */ u8 sp55;                             /* inferred */
    /* 0x56 */ u16 sp56;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80BF1FA8 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x7];                    /* maybe part of sp20[2]? */
    /* 0x2B */ u8 sp2B;                             /* inferred */
    /* 0x2C */ char pad_2C[0x2];                    /* maybe part of sp2B[3]? */
    /* 0x2E */ u16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BF219C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ void *sp30;                          /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0xF];
    /* 0x4F */ u8 sp4F;                             /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80BF2368 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BF2400 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0xC];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BF2470 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ char pad_2C[0xC];                    /* maybe part of sp28[4]? */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ void *sp44;                          /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80BF25E8 {
    /* 0x000 */ char pad_0[0x3C];
    /* 0x03C */ Vec3f *sp3C;                        /* inferred */
    /* 0x040 */ s32 *sp40;                          /* inferred */
    /* 0x044 */ s32 *sp44;                          /* inferred */
    /* 0x048 */ void *sp48;                         /* inferred */
    /* 0x04C */ char pad_4C[0x4];
    /* 0x050 */ s32 sp50;                           /* inferred */
    /* 0x054 */ s32 sp54;                           /* inferred */
    /* 0x058 */ f32 sp58;                           /* inferred */
    /* 0x05C */ f32 sp5C;                           /* inferred */
    /* 0x060 */ f32 sp60;                           /* inferred */
    /* 0x064 */ ? sp64;                             /* inferred */
    /* 0x064 */ char pad_64[0xC];
    /* 0x070 */ ? sp70;                             /* inferred */
    /* 0x070 */ char pad_70[0xC];
    /* 0x07C */ ? sp7C;                             /* inferred */
    /* 0x07C */ char pad_7C[0x424];
};                                                  /* size = 0x4A0 */

struct _mips2c_stack_func_80BF2890 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BF293C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BF2A50 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BF2AF8 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ u8 sp20;                             /* inferred */
    /* 0x21 */ char pad_21[0xF];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BF2BD4 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0xC];
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0x10];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80BF2EDC {};              /* size 0x0 */

struct _mips2c_stack_func_80BF2EFC {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x14];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BF302C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

? func_800E0308(Camera *, Actor *);                 /* extern */
? func_8013A7C0(?);                                 /* extern */
? func_8013AD9C(s16, s16, void *, void *, s32, s32); /* extern */
Actor *func_80BF1150(Actor *arg0, GlobalContext *arg1, u8 arg2, s16 arg3); /* static */
void func_80BF1200(GlobalContext *arg1, u8);        /* static */
void func_80BF1258(EnIg *arg0);                     /* static */
s32 func_80BF1284(Actor *arg0, s32 arg1, s16, s16); /* static */
void func_80BF1354(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BF13E4(EnIg *arg0);                     /* static */
Actor *func_80BF146C(EnIg *arg0, GlobalContext *arg1); /* static */
void func_80BF14B0(void *arg0);                     /* static */
void func_80BF15EC(EnIg *arg0);                     /* static */
s32 func_80BF16C8(Actor *arg0, s16 arg1);           /* static */
s8 func_80BF1744(Actor *arg0, s32 arg1);            /* static */
s32 func_80BF17BC(Actor *arg0, GlobalContext *arg1); /* static */
? *func_80BF1920(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BF19A0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BF1A60(Actor *arg0, ? arg1);            /* static */
? func_80BF1AE0(void *arg0, ? arg1);                /* static */
? func_80BF1B40(EnIg *, GlobalContext *);           /* static */
s32 func_80BF1C44(Actor *arg0, GlobalContext *arg1, u8 *arg2, u8 arg3, s16 arg4); /* static */
s32 func_80BF1D78(Actor *arg0);                     /* static */
s32 func_80BF1DF4(Actor *arg0, GlobalContext *arg1, void *arg2); /* static */
s32 func_80BF1FA8(Actor *arg0, GlobalContext *arg1, void *arg2); /* static */
s32 func_80BF219C(Actor *arg0, GlobalContext *arg1, u8 *arg2); /* static */
s32 func_80BF2368(EnIg *arg0, u8 *arg2, u8 *);      /* static */
? func_80BF2400(Actor *arg0, ? arg1);               /* static */
? func_80BF2470(Actor *arg0, GlobalContext *arg1);  /* static */
? func_80BF25E8(Actor *arg0, GlobalContext *arg1);  /* static */
? func_80BF2890(Actor *arg0, ? arg1);               /* static */
? func_80BF293C(Actor *arg0, ? arg1);               /* static */
void func_80BF2A50(Actor *arg0, GlobalContext *);   /* static */
? func_80BF2EDC(s32 arg0, s32 arg1, s32 *arg2, ? arg3); /* static */
void func_80BF2EFC(s32 arg0, s32 arg1, ? arg2, ? arg3, s32 arg4, void **arg5); /* static */
void func_80BF302C(s32 arg0, s32 arg1, void *arg2, ? arg3); /* static */
extern ? D_06008710;
extern ? D_060087B8;
extern ? D_060089D8;
extern ? D_06008B00;
extern ? D_0600C538;
extern FlexSkeletonHeader D_060130D0;
static void D_80BF3260;                             /* unable to generate initializer */
static ? D_80BF3318;                                /* unable to generate initializer */
static ? D_80BF3354;                                /* unable to generate initializer */
static ? D_80BF335C;                                /* unable to generate initializer */
static ? D_80BF33E0;                                /* unable to generate initializer */
static ? D_80BF33E8;                                /* unable to generate initializer */
static ? D_80BF33F0;                                /* unable to generate initializer */
static ColliderCylinderInit D_80BF3418 = {
    {1, 0, 0, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0x1C, 0x3E, 0, {0, 0, 0}},
};
static ColliderSphereInit D_80BF3444 = {
    {0xA, 0, 0, 0x39, 0x10, 4},
    {0, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0, {{0, 0, 0}, 0x14}, 0x64},
};
static CollisionCheckInfoInit2 D_80BF3470 = {0, 0, 0, 0, 0xFF};
static ActorAnimationEntryS D_80BF347C[10] = {
    {(AnimationHeader *)0x60048B4, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60048B4, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6005100, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6005100, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60010F8, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6001E44, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60014BC, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6003CAC, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x60040E0, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60040E0, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
};
static Vec3f D_80BF351C = {1800.0f, -2000.0f, 0.0f};
static Vec3f D_80BF3528 = {0.0f, 0.0f, 0.0f};
static ? D_80BF3534;                                /* unable to generate initializer */

Actor *func_80BF1150(Actor *arg0, GlobalContext *arg1, u8 arg2, s16 arg3) {
    Actor *temp_v0;
    Actor *temp_v1;
    Actor *phi_s0;
    Actor *phi_s0_2;

    phi_s0 = NULL;
    phi_s0_2 = NULL;
loop_1:
    temp_v0 = func_ActorCategoryIterateById(arg1, phi_s0, arg2 & 0xFF & 0xFF, (s32) arg3);
    phi_s0_2 = temp_v0;
    if ((temp_v0 != 0) && ((temp_v0 == arg0) || (temp_v0->update == 0))) {
        temp_v1 = temp_v0->next;
        if (temp_v1 == 0) {

        } else {
            phi_s0 = temp_v1;
            goto loop_1;
        }
    }
    return phi_s0_2;
}

void func_80BF1200(GlobalContext *arg1) {
    ? phi_a1;

    phi_a1 = -1;
    switch (arg1) {
    case 5:
    case 6:
    case 7:
    case 9:
        phi_a1 = 0xB;
        break;
    case 8:
        phi_a1 = 0xF;
        break;
    }
    func_8013A7C0(phi_a1);
}

void func_80BF1258(EnIg *arg0) {
    arg0->unk_144.animPlaybackSpeed = arg0->unk_3D4;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
}

s32 func_80BF1284(Actor *arg0, s32 arg1) {
    SkelAnime *temp_a0;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v1;
    s32 phi_t0;

    phi_v1 = 0;
    phi_t0 = 0;
    if ((arg1 != 0) && (arg1 != 1)) {
        if ((arg1 != 2) && (arg1 != 3)) {
            if (arg1 != arg0->unk_3FC) {
                goto block_12;
            }
        } else {
            temp_v0 = arg0->unk_3FC;
            if ((temp_v0 != 2) && (temp_v0 != 3)) {
                goto block_12;
            }
        }
    } else {
        temp_v0_2 = arg0->unk_3FC;
        if ((temp_v0_2 != 0) && (temp_v0_2 != 1)) {
block_12:
            phi_v1 = 1;
        }
    }
    temp_a0 = arg0 + 0x144;
    if (phi_v1 != 0) {
        arg0->unk_3FC = arg1;
        arg0 = arg0;
        temp_t0 = func_8013BC6C(temp_a0, D_80BF347C, arg1);
        arg0->unk_3D4 = (f32) arg0->unk_160;
        phi_t0 = temp_t0;
    }
    return phi_t0;
}

void func_80BF1354(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    CollisionCheckContext *sp18;
    Actor *temp_a0;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_a2;
    CollisionCheckContext *temp_a1_2;

    temp_a2 = arg0 + 0x1D0;
    temp_a1 = temp_a2;
    sp1C = temp_a2;
    temp_a0 = arg0;
    arg0 = arg0;
    Collider_UpdateCylinder(temp_a0, temp_a1);
    temp_a1_2 = arg1 + 0x18884;
    sp18 = temp_a1_2;
    CollisionCheck_SetOC(arg1, temp_a1_2, (Collider *) temp_a2);
    arg0->unk_26A = (s16) (s32) ((f32) arg0->unk_262 * arg0->unk_26C);
    CollisionCheck_SetOC(arg1, temp_a1_2, arg0 + 0x21C);
}

void func_80BF13E4(EnIg *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    if ((arg0->unk_3D0 & 0x100) != 0) {
        temp_v0 = arg0->unk_3F0;
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk_3F0 = temp_v0 - 1;
            phi_v1 = arg0->unk_3F0;
        }
        if (phi_v1 == 0) {
            arg0->unk_3F2 += 1;
            if ((s32) arg0->unk_3F2 >= 4) {
                arg0 = arg0;
                arg0->unk_3F0 = Rand_S16Offset(0x1E, 0x1E);
                arg0->unk_3F2 = 0;
            }
        }
    }
}

Actor *func_80BF146C(EnIg *arg0, GlobalContext *arg1) {
    Actor *phi_v1;

    if (arg0->unk_298 == 3) {
        phi_v1 = func_80BF1150((Actor *)4, (GlobalContext *)0x202);
    } else {
        phi_v1 = arg1->actorCtx.actorList[2].first;
    }
    return phi_v1;
}

void func_80BF14B0(void *arg0) {
    f32 sp44;
    ? sp40;
    ? sp34;
    s16 temp_v0;
    s16 temp_v0_3;
    void *temp_v0_2;
    s16 phi_v1;
    s16 phi_v1_2;

    Math_Vec3f_Copy((Vec3f *) &sp40, arg0->unk_2A8 + 0x24);
    Math_Vec3f_Copy((Vec3f *) &sp34, arg0 + 0x24);
    Math_ApproachS(arg0 + 0x3EA, (s16) (Math_Vec3f_Yaw((Vec3f *) &sp34, (Vec3f *) &sp40) - arg0->unk_BE), 4, 0x2AA8);
    temp_v0 = arg0->unk_3EA;
    if ((s32) temp_v0 < -0x1C70) {
        arg0->unk_3EA = -0x1C70;
    } else {
        phi_v1 = temp_v0;
        if ((s32) temp_v0 >= 0x1C71) {
            phi_v1 = 0x1C70;
        }
        arg0->unk_3EA = phi_v1;
    }
    Math_Vec3f_Copy((Vec3f *) &sp34, arg0 + 0x3C);
    temp_v0_2 = arg0->unk_2A8;
    if (temp_v0_2->unk_0 == 0) {
        sp44 = temp_v0_2->unk_C44 + 3.0f;
    } else {
        Math_Vec3f_Copy((Vec3f *) &sp40, temp_v0_2 + 0x3C);
    }
    Math_ApproachS(arg0 + 0x3E8, Math_Vec3f_Pitch((Vec3f *) &sp34, (Vec3f *) &sp40), 4, 0x2AA8);
    temp_v0_3 = arg0->unk_3E8;
    if ((s32) temp_v0_3 < -0xE38) {
        arg0->unk_3E8 = -0xE38;
        return;
    }
    phi_v1_2 = temp_v0_3;
    if ((s32) temp_v0_3 >= 0xE39) {
        phi_v1_2 = 0xE38;
    }
    arg0->unk_3E8 = phi_v1_2;
}

void func_80BF15EC(EnIg *arg0) {
    s16 temp_v0;
    s16 temp_v0_3;
    u16 temp_t2;
    u16 temp_t3;
    u16 temp_v0_2;
    s16 phi_v1;
    s16 phi_v1_2;

    if (((arg0->unk_3D0 & 0x20) != 0) && (arg0->unk_2A8 != 0)) {
        temp_v0 = arg0->unk_3EE;
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk_3EE = temp_v0 - 1;
            phi_v1 = arg0->unk_3EE;
        }
        if (phi_v1 == 0) {
            func_80BF14B0();
            temp_t2 = arg0->unk_3D0 & 0xFDFF;
            temp_t3 = temp_t2 | 0x80;
            arg0->unk_3D0 = temp_t2;
            arg0->unk_3D0 = temp_t3;
            return;
        }
        goto block_7;
    }
block_7:
    temp_v0_2 = arg0->unk_3D0;
    if ((temp_v0_2 & 0x80) != 0) {
        arg0->unk_3D0 = temp_v0_2 & 0xFF7F;
        arg0->unk_3E4 = 0;
        arg0->unk_3E6 = 0;
        arg0->unk_3E8 = 0;
        arg0->unk_3EA = 0;
        arg0->unk_3EE = 0x14;
        return;
    }
    temp_v0_3 = arg0->unk_3EE;
    if (temp_v0_3 == 0) {
        phi_v1_2 = 0;
    } else {
        arg0->unk_3EE = temp_v0_3 - 1;
        phi_v1_2 = arg0->unk_3EE;
    }
    if (phi_v1_2 == 0) {
        arg0->unk_3D0 |= 0x200;
    }
}

s32 func_80BF16C8(Actor *arg0, s16 arg1) {
    s32 sp1C;

    sp1C = 0;
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
        ActorCutscene_SetIntentToPlay(arg1);
    } else if (ActorCutscene_GetCanPlayNext(arg1) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields(arg1, arg0);
        sp1C = 1;
    } else {
        ActorCutscene_SetIntentToPlay(arg1);
    }
    return sp1C;
}

s8 func_80BF1744(Actor *arg0, s32 arg1) {
    s16 temp_v0_2;
    s32 temp_s0;
    s8 temp_s1;
    void *temp_v0;
    s16 phi_s1;
    s32 phi_s0;
    s8 phi_s1_2;

    temp_v0 = arg0->child;
    phi_s1_2 = -1;
    if (temp_v0 != 0) {
        phi_s0 = 0;
        if (temp_v0->update != 0) {
            temp_s1 = temp_v0->cutscene;
            phi_s1 = (s16) temp_s1;
            phi_s1_2 = temp_s1;
            if (arg1 > 0) {
                do {
                    temp_v0_2 = ActorCutscene_GetAdditionalCutscene(phi_s1);
                    temp_s0 = phi_s0 + 1;
                    phi_s1 = temp_v0_2;
                    phi_s0 = temp_s0;
                    phi_s1_2 = (s8) temp_v0_2;
                } while (temp_s0 != arg1);
            }
        }
    }
    return phi_s1_2;
}

s32 func_80BF17BC(Actor *arg0, GlobalContext *arg1) {
    s16 sp2A;
    s32 sp24;
    Actor *temp_v0;
    s16 temp_a0;
    s16 temp_a1;
    s32 phi_v1;

    temp_a0 = arg0->unk_3F6;
    temp_a1 = func_80BF1744(arg0, 0);
    phi_v1 = 0;
    switch (temp_a0) {
    case 0:
        sp24 = 0;
        sp2A = temp_a1;
        if (func_80BF16C8(arg0, temp_a1) != 0) {
        case 2:
        case 4:
            temp_v0 = arg0->child;
            if ((temp_v0 != 0) && (temp_v0->update != 0)) {
                func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(temp_a1)), arg0->child);
            }
            arg0->unk_3F6 = (s16) (arg0->unk_3F6 + 1);
            phi_v1 = 1;
        }
        break;
    case 1:
    case 3:
        if (((gSaveContext.weekEventReg[75] & 0x10) == 0) && (temp_a0 == 3)) {
            ActorCutscene_Stop(temp_a1);
            arg0->unk_3F6 = 5;
        } else {
            func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(temp_a1)), arg0);
        }
        arg0->unk_3F6 = (s16) (arg0->unk_3F6 + 1);
        phi_v1 = 1;
        break;
    case 5:
        ActorCutscene_Stop(temp_a1);
        arg0->unk_3F6 = (s16) (arg0->unk_3F6 + 1);
        phi_v1 = 1;
        break;
    }
    return phi_v1;
}

? *func_80BF1920(Actor *arg0, GlobalContext *arg1) {
    u8 temp_t6;

    temp_t6 = arg0->unk_298;
    switch (temp_t6) {
    case 3:
        arg0->unk_3F8 = func_80BF17BC;
        return &D_80BF335C;
    case 4:
        return &D_80BF33F0;
    case 2:
    case 11:
    case 14:
        return &D_80BF33E0;
    case 10:
    case 12:
        return &D_80BF3354;
    case 13:
        return &D_80BF33E8;
    default:
        return NULL;
    }
}

s32 func_80BF19A0(Actor *arg0, GlobalContext *arg1) {
    s32 sp24;
    u8 temp_v1;
    s32 phi_v1;

    phi_v1 = 0;
    if ((arg0->unk_3D0 & 7) != 0) {
        sp24 = 0;
        phi_v1 = sp24;
        if (func_800B84D0(arg0, arg1) != 0) {
            func_8013AED4(arg0 + 0x3D0, 0U, 7U);
            arg0->unk_3F6 = 0;
            arg0->unk_3F8 = 0;
            arg0->child = arg0->unk_2A8;
            temp_v1 = arg0->unk_298;
            arg0->unk_29C = func_80BF1920(arg0, arg1);
            if ((temp_v1 != 2) && (temp_v1 != 3) && (temp_v1 != 4)) {
                arg0->unk_3D0 = (u16) (arg0->unk_3D0 | 0x20);
            }
            arg0->unk_188 = func_80BF2BD4;
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

void func_80BF1A60(Actor *arg0, ? arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk_3F4;
    if (temp_v0 == 0) {
        func_80BF1284(arg0, 4);
        arg0->unk_3F4 = (s16) (arg0->unk_3F4 + 1);
        return;
    }
    if ((temp_v0 == 1) && (func_801378B8(arg0 + 0x144, arg0->unk_154) != 0)) {
        func_80BF1284(arg0, 5);
        arg0->unk_3F4 = (s16) (arg0->unk_3F4 + 1);
    }
}

? func_80BF1AE0(void *arg0, ? arg1) {
    u8 temp_t6;

    temp_t6 = arg0->unk_298;
    switch (temp_t6) {
    case 3:
        func_80BF1284(NULL);
        break;
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
        func_80BF1284((Actor *)2);
        break;
    }
    return 1;
}

/*
Failed to decompile function func_80BF1B40:

Label L80BF1BD8 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

s32 func_80BF1C44(Actor *arg0, GlobalContext *arg1, u8 *arg2, u8 arg3, s16 arg4) {
    u8 sp4F;
    void *sp48;
    ? sp3C;
    ? sp30;
    Actor *sp2C;
    s32 sp24;
    Actor *temp_v0;
    Path *temp_v0_2;
    s32 temp_a2;
    void *temp_v0_3;
    Actor *phi_v1;

    sp24 = 0;
    sp4F = (u8) arg0->params;
    temp_v0 = func_80BF1150(arg0, arg1, arg3, arg4);
    arg0->unk_274 = NULL;
    temp_a2 = *(&D_80BF3318 + (*arg2 * 4));
    phi_v1 = temp_v0;
    if (temp_a2 >= 0) {
        sp2C = temp_v0;
        arg0->unk_274 = func_8013BB34(arg1, sp4F, temp_a2);
        phi_v1 = sp2C;
    }
    if ((phi_v1 != 0) && (phi_v1->update != 0)) {
        temp_v0_2 = arg0->unk_274;
        if (temp_v0_2 != 0) {
            temp_v0_3 = Lib_SegmentedToVirtual((void *) temp_v0_2->points);
            sp48 = temp_v0_3;
            Math_Vec3s_ToVec3f((Vec3f *) &sp3C, ((arg0->unk_274->count * 6) + temp_v0_3) - 0xC);
            Math_Vec3s_ToVec3f((Vec3f *) &sp30, ((arg0->unk_274->count * 6) + sp48) - 6);
            arg0->shape.shadowDraw = NULL;
            arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp3C, (Vec3f *) &sp30);
            Math_Vec3f_Copy(arg0 + 0x24, (Vec3f *) &sp30);
            sp24 = 1;
        }
    }
    return sp24;
}

s32 func_80BF1D78(Actor *arg0) {
    s32 sp2C;
    u16 temp_t9;
    s32 phi_v1;

    sp2C = 0;
    phi_v1 = sp2C;
    if (func_80BF1C44(arg0, (GlobalContext *)4, (u8 *)0x202) != 0) {
        func_80BF1284(arg0, 0);
        func_8013AED4(arg0 + 0x3D0, 3U, 7U);
        temp_t9 = arg0->unk_3D0 | 0x20;
        arg0->unk_3D0 = temp_t9;
        arg0->unk_3D0 = (u16) (temp_t9 | 0x100);
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80BF1DF4(Actor *arg0, GlobalContext *arg1, void *arg2) {
    u16 sp56;
    u8 sp55;
    void *sp50;
    void *sp4C;
    ? sp40;
    ? sp34;
    s32 sp2C;
    Path *temp_v0;
    s16 temp_v0_3;
    s32 temp_a2;
    void *temp_v0_2;
    s32 phi_v1;

    sp56 = gSaveContext.time - 0x3FFC;
    sp2C = 0;
    sp55 = (u8) arg0->params;
    arg0->unk_274 = NULL;
    sp50 = func_80BF1200(arg1, arg2->unk_0);
    temp_a2 = *(&D_80BF3318 + (arg2->unk_0 * 4));
    if (temp_a2 >= 0) {
        arg0->unk_274 = func_8013BB34(arg1, sp55, temp_a2);
    }
    if ((sp50 != 0) && (sp50->unk_138 != 0)) {
        temp_v0 = arg0->unk_274;
        if (temp_v0 != 0) {
            temp_v0_2 = Lib_SegmentedToVirtual((void *) temp_v0->points);
            sp4C = temp_v0_2;
            Math_Vec3s_ToVec3f((Vec3f *) &sp40, (Vec3s *) temp_v0_2);
            Math_Vec3s_ToVec3f((Vec3f *) &sp34, sp4C + 6);
            Math_Vec3f_Copy(arg0 + 0x2B0, (Vec3f *) &sp40);
            Math_Vec3f_Copy(arg0 + 0x2BC, (Vec3f *) &sp34);
            arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp40, (Vec3f *) &sp34);
            Math_Vec3f_Copy(arg0 + 0x24, (Vec3f *) &sp40);
            temp_v0_3 = arg0->world.rot.y - sp50->unk_BE;
            phi_v1 = (s32) temp_v0_3;
            if ((s32) temp_v0_3 < 0) {
                phi_v1 = -(s32) temp_v0_3;
            }
            if (phi_v1 < 0x4001) {
                arg0->unk_2A4 = -0x4B;
            } else {
                arg0->unk_2A4 = 0x4B;
            }
            arg0->unk_3E0 = (s16) (arg2->unk_8 - arg2->unk_4);
            arg0->flags &= -2;
            arg0->unk_3E2 = (s16) (sp56 - arg2->unk_4);
            arg0->unk_3D0 = (u16) (arg0->unk_3D0 | 0x100);
            func_80BF1284(arg0, 3);
            arg0->gravity = 0.0f;
            sp2C = 1;
        }
    }
    return sp2C;
}

s32 func_80BF1FA8(Actor *arg0, GlobalContext *arg1, void *arg2) {
    u16 sp2E;
    u8 sp2B;
    s32 sp20;
    Path *temp_v0;
    s32 temp_a3;
    s32 temp_lo;
    s32 temp_t0;
    s32 temp_v0_3;
    u16 temp_t8;
    u8 temp_v0_2;
    Path *phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;

    sp2B = arg0->params & 0xFF;
    arg0->unk_274 = NULL;
    temp_t0 = gSaveContext.time - 0x3FFC;
    temp_a3 = *(&D_80BF3318 + (arg2->unk_0 * 4));
    if (temp_a3 >= 0) {
        sp20 = 0;
        sp2E = temp_t0 & 0xFFFF;
        arg0->unk_274 = func_8013BB34(arg1, sp2B, temp_a3);
    }
    temp_v0 = arg0->unk_274;
    phi_v0 = temp_v0;
    phi_v1_2 = 0;
    if ((temp_v0 != 0) && ((s32) temp_v0->count < 3)) {
        arg0->unk_274 = NULL;
        phi_v0 = NULL;
    }
    if (phi_v0 != 0) {
        temp_v0_2 = arg0->unk_298;
        if (((s32) temp_v0_2 < 0xA) && (temp_v0_2 != 0) && ((s32) arg0->unk_3EC >= 0)) {
            phi_v1 = temp_t0 & 0xFFFF & 0xFFFF;
        } else {
            phi_v1 = (s32) arg2->unk_6;
        }
        temp_v0_3 = arg2->unk_8;
        if (temp_v0_3 < phi_v1) {
            arg0->unk_288 = (s32) ((phi_v1 - temp_v0_3) + 0xFFFF);
        } else {
            arg0->unk_288 = (s32) (temp_v0_3 - phi_v1);
        }
        arg0->unk_294 = (s32) ((temp_t0 & 0xFFFF) - phi_v1);
        temp_lo = (s32) arg0->unk_288 / (s32) ((arg0->unk_274->count - 2) & 0xFFFF);
        temp_t8 = arg0->unk_3D0 & 0xFFF7;
        arg0->unk_3D0 = temp_t8;
        arg0->unk_28C = temp_lo;
        arg0->unk_290 = (s32) (((s32) arg0->unk_294 / temp_lo) + 2);
        arg0->unk_3D0 = (u16) (temp_t8 & 0xFFEF);
        func_8013AED4(arg0 + 0x3D0, 3U, 7U);
        arg0->unk_3D0 = (u16) (arg0->unk_3D0 | 0x100);
        func_80BF1284(arg0, 2);
        arg0->gravity = -1.0f;
        phi_v1_2 = 1;
    }
    return phi_v1_2;
}

s32 func_80BF219C(Actor *arg0, GlobalContext *arg1, u8 *arg2) {
    u8 sp4F;
    ? sp40;
    ? sp34;
    void *sp30;
    s32 sp28;
    Path *temp_v0;
    s32 temp_a3;
    u8 temp_v0_3;
    void *temp_v0_2;
    s32 phi_v1;

    sp4F = (u8) arg0->params;
    arg0->unk_274 = NULL;
    temp_a3 = *(&D_80BF3318 + (*arg2 * 4));
    phi_v1 = 0;
    if (temp_a3 >= 0) {
        sp28 = 0;
        arg0->unk_274 = func_8013BB34(arg1, sp4F, temp_a3);
        phi_v1 = sp28;
    }
    temp_v0 = arg0->unk_274;
    if ((temp_v0 != 0) && ((s32) temp_v0->count >= 2)) {
        temp_v0_2 = Lib_SegmentedToVirtual((void *) temp_v0->points);
        sp30 = temp_v0_2;
        Math_Vec3s_ToVec3f((Vec3f *) &sp40, ((arg0->unk_274->count * 6) + temp_v0_2) - 6);
        Math_Vec3s_ToVec3f((Vec3f *) &sp34, ((arg0->unk_274->count * 6) + sp30) - 0xC);
        arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp34, (Vec3f *) &sp40);
        Math_Vec3s_Copy(arg0 + 0xBC, arg0 + 0x30);
        Math_Vec3f_Copy(arg0 + 0x24, (Vec3f *) &sp40);
        Math_Vec3f_Copy(arg0 + 0x108, (Vec3f *) &sp40);
        temp_v0_3 = *arg2;
        if (temp_v0_3 != 2) {
            if (temp_v0_3 != 4) {

            } else {
                arg0->world.rot.y += 0x8000;
                arg0->shape.rot.y = arg0->world.rot.y;
                func_8013AED4(arg0 + 0x3D0, 3U, 7U);
                arg0->unk_3D0 = (u16) (arg0->unk_3D0 | 0x100);
                func_80BF1284(arg0, 8);
            }
        } else {
            arg0->home.rot.y = arg0->world.rot.y;
            arg0->home.rot.y += 0x8000;
            func_8013AED4(arg0 + 0x3D0, 3U, 7U);
            arg0->unk_3D0 = (u16) (arg0->unk_3D0 | 0x100);
            func_80BF1284(arg0, 1);
        }
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80BF2368(EnIg *arg0, u8 *arg2) {
    u8 temp_t8;
    s32 phi_v1;
    s32 phi_v0;

    arg0->actor.targetMode = 0;
    arg0->unk_3D0 = 0;
    arg0->actor.flags |= 1;
    temp_t8 = *arg2;
    phi_v1 = 0;
    switch (temp_t8) {
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        phi_v0 = func_80BF1DF4();
block_6:
        phi_v1 = phi_v0;
        break;
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
        phi_v0 = func_80BF1FA8();
        goto block_6;
    case 2:
    case 4:
        phi_v0 = func_80BF219C();
        goto block_6;
    case 3:
        phi_v0 = func_80BF1D78();
        goto block_6;
    }
    return phi_v1;
}

? func_80BF2400(Actor *arg0, ? arg1) {
    ? sp2C;
    ? sp20;
    void *temp_v0;

    temp_v0 = arg0->unk_2A8;
    if ((temp_v0 != 0) && (temp_v0->unk_138 != 0)) {
        Math_Vec3f_Copy((Vec3f *) &sp2C, temp_v0 + 0x24);
        Math_Vec3f_Copy((Vec3f *) &sp20, arg0 + 0x24);
        arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp20, (Vec3f *) &sp2C);
    }
    return 1;
}

? func_80BF2470(Actor *arg0, GlobalContext *arg1) {
    void *sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    Vec3f *sp28;
    Vec3f *temp_a0;
    Vec3f *temp_a0_2;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v1;
    s16 phi_a0;

    sp44 = func_80BF1200(arg1, arg0->unk_298);
    if ((func_8013AD6C(arg1) == 0) && (arg0->unk_3EC != 0)) {
        if ((sp44 != 0) && (sp44->unk_138 != 0)) {
            if (((f32) arg0->unk_3E2 / (f32) arg0->unk_3E0) <= 0.9f) {
                sp44->unk_1A7 = (s8) arg0->unk_2A4;
            } else {
                sp44->unk_1A7 = 0;
            }
        }
        temp_v0 = arg0->unk_3E2;
        if ((s32) temp_v0 < 0) {
            arg0->unk_3E2 = 0;
        } else {
            temp_v1 = arg0->unk_3E0;
            phi_a0 = temp_v0;
            if ((s32) temp_v1 < (s32) temp_v0) {
                phi_a0 = temp_v1;
            }
            arg0->unk_3E2 = phi_a0;
        }
        temp_a0 = arg0 + 0x2B0;
        sp28 = temp_a0;
        temp_f0 = Math_Vec3f_DistXZ(temp_a0, arg0 + 0x2BC);
        sp38 = 0.0f;
        sp3C = 0.0f;
        sp40 = (f32) arg0->unk_3E2 * (temp_f0 / (f32) arg0->unk_3E0);
        Lib_Vec3f_TranslateAndRotateY(temp_a0, arg0->world.rot.y, (Vec3f *) &sp38, arg0 + 0x24);
        temp_a0_2 = arg0 + 0x144;
        arg0->unk_3E2 = (s16) (arg0->unk_3E2 + arg0->unk_3EC);
        sp28 = temp_a0_2;
        if ((func_801378B8((SkelAnime *) temp_a0_2, 0.0f) != 0) || (func_801378B8((SkelAnime *) temp_a0_2, 13.0f) != 0)) {
            Audio_PlayActorSound2(arg0, 0x2971U);
        }
    }
    return 0;
}

? func_80BF25E8(Actor *arg0, GlobalContext *arg1) {
    ? sp7C;
    ? sp70;
    ? sp64;
    f32 sp58;
    s32 sp54;
    s32 sp50;
    void *sp48;
    s32 *sp44;
    s32 *sp40;
    Vec3f *sp3C;
    Vec3f *temp_v1;
    s32 *temp_a2;
    s32 *temp_v0;
    void *temp_a0;
    void *temp_a1;
    Vec3f *phi_v1;

    sp54 = 0;
    sp50 = 0;
    func_8013AF00((void *) &sp7C, 3, arg0->unk_274->count + 3);
    temp_v1 = arg0 + 0x278;
    phi_v1 = temp_v1;
    if ((arg0->unk_3D0 & 8) == 0) {
        temp_v0 = arg0 + 0x290;
        sp58.unk_0 = D_801D15B0.x;
        temp_a1 = arg0 + 0x284;
        sp58.unk_4 = (f32) D_801D15B0.y;
        temp_a2 = arg0 + 0x294;
        sp58.unk_8 = (f32) D_801D15B0.z;
        sp44 = temp_a2;
        sp48 = temp_a1;
        sp40 = temp_v0;
        func_8013B6B0(arg0->unk_274, temp_a1, temp_a2, arg0->unk_28C, arg0->unk_288, temp_v0, (void *) &sp7C, (Vec3f *) &sp58, (s16) (s32) arg0->unk_3EC);
        func_8013B878(arg1, arg0->unk_274, arg0->unk_290, (Vec3f *) &sp58);
        arg0->unk_3D0 = (u16) (arg0->unk_3D0 | 8);
        arg0->world.pos.y = sp5C;
        phi_v1 = arg0 + 0x278;
    } else {
        sp58.unk_0 = temp_v1->x;
        sp58.unk_4 = (f32) temp_v1->y;
        sp58.unk_8 = (f32) temp_v1->z;
        sp40 = arg0 + 0x290;
        sp44 = arg0 + 0x294;
        sp48 = arg0 + 0x284;
    }
    arg0->world.pos.x = sp58;
    arg0->world.pos.z = sp60;
    sp3C = phi_v1;
    if (func_8013AD6C(arg1) != 0) {
        sp54 = arg0->unk_294;
        sp50 = arg0->unk_290;
        sp58.unk_0 = arg0->world.pos.x;
        sp58.unk_4 = (f32) arg0->world.pos.y;
        sp58.unk_8 = (f32) arg0->world.pos.z;
    }
    phi_v1->x = D_801D15B0.x;
    phi_v1->y = D_801D15B0.y;
    phi_v1->z = D_801D15B0.z;
    sp3C = phi_v1;
    if (func_8013B6B0(arg0->unk_274, sp48, sp44, arg0->unk_28C, arg0->unk_288, sp40, (void *) &sp7C, phi_v1, (s16) (s32) arg0->unk_3EC) != 0) {
        arg0->unk_3D0 = (u16) (arg0->unk_3D0 | 0x10);
    } else {
        sp70.unk_0 = (f32) arg0->world.pos.x;
        sp70.unk_4 = (f32) arg0->world.pos.y;
        sp70.unk_8 = (f32) arg0->world.pos.z;
        sp64.unk_0 = (f32) phi_v1->x;
        sp64.unk_4 = (f32) phi_v1->y;
        sp64.unk_8 = (f32) phi_v1->z;
        sp3C = phi_v1;
        arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp70, (Vec3f *) &sp64);
    }
    sp3C = phi_v1;
    if (func_8013AD6C(arg1) != 0) {
        arg0->unk_294 = sp54;
        arg0->unk_290 = sp50;
        phi_v1->x = sp58.unk_0;
        phi_v1->y = sp58.unk_4;
        phi_v1->z = sp58.unk_8;
    } else {
        temp_a0 = arg0 + 0x144;
        sp48 = temp_a0;
        if ((func_801378B8((SkelAnime *) temp_a0, 0.0f) != 0) || (func_801378B8((SkelAnime *) temp_a0, 13.0f) != 0)) {
            Audio_PlayActorSound2(arg0, 0x2971U);
        }
    }
    return 0;
}

? func_80BF2890(Actor *arg0, ? arg1) {
    s32 temp_v0;
    u16 temp_v0_2;
    u16 temp_v1;
    s32 phi_v0;

    temp_v1 = arg0->unk_3D0;
    temp_v0 = temp_v1 & 0x100;
    phi_v0 = temp_v0;
    if ((temp_v0 != 0) && (arg0->unk_3F2 == 2)) {
        temp_v0_2 = temp_v1 & 0xFEFF;
        arg0->unk_3D0 = temp_v0_2;
        phi_v0 = temp_v0_2 & 0x100;
    }
    if ((phi_v0 == 0) && (func_801378B8(arg0 + 0x144, arg0->unk_154) != 0)) {
        if (arg0->unk_408 != 0) {
            Audio_PlayActorSound2(arg0, 0x3A1AU);
        } else {
            Audio_PlayActorSound2(arg0, 0x3A1BU);
        }
        arg0->unk_408 = (s32) (arg0->unk_408 ^ 1);
    }
    return 1;
}

? func_80BF293C(Actor *arg0, ? arg1) {
    s16 temp_s1;
    s16 temp_v0;

    temp_s1 = arg0->home.rot.y;
    temp_v0 = arg0->world.rot.y;
    if (temp_s1 != temp_v0) {
        if (((s32) temp_s1 / 0xB6) != ((s32) temp_v0 / 0xB6)) {
            Math_ApproachS(arg0 + 0x32, temp_s1, 3, 0x2AA8);
        } else {
            arg0->world.rot.y = temp_s1;
            func_80BF1284(arg0, 7, 3, 0x2AA8);
        }
    } else if ((arg0->unk_3FC == 7) && (func_801378B8(arg0 + 0x144, arg0->unk_154) != 0)) {
        func_8013AED4(arg0 + 0x3D0, 3U, 7U);
        func_80BF1284(arg0, 9);
    }
    return 1;
}

void func_80BF2A50(Actor *arg0) {
    u8 temp_t6;

    temp_t6 = arg0->unk_298;
    switch (temp_t6) {
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
        func_80BF25E8(arg0);
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        func_80BF2470(arg0);
        break;
    case 2:
        func_80BF293C(arg0);
        break;
    case 3:
        func_80BF2400(arg0);
        break;
    case 4:
        func_80BF2890(arg0);
        break;
    }
    Math_ApproachS(&arg0->shape.rot.y, arg0->world.rot.y, 3, 0x2AA8);
}

void func_80BF2AF8(EnIg *this, GlobalContext *globalCtx) {
    u8 sp20;

    this->unk_3EC = gSaveContext.unk_14 + gGameInfo->data[15];
    if ((func_80133038(globalCtx, &D_80BF3260, (struct_80133038_arg2 *) &sp20) == 0) || ((sp20 != this->unk_298) && (func_80BF2368(this, (u8 *) globalCtx, &sp20) == 0))) {
        this->actor.shape.shadowDraw = NULL;
        this->actor.flags &= -2;
        sp20 = 0;
    } else {
        this->actor.shape.shadowDraw = func_800B3FC0;
        this->actor.flags |= 1;
    }
    this->unk_2A8 = func_80BF146C(this, globalCtx);
    this->unk_298 = sp20;
    func_80BF2A50((Actor *) this, globalCtx);
}

void func_80BF2BD4(EnIg *this, GlobalContext *globalCtx) {
    ? sp38;
    ? sp2C;
    Actor *temp_v0_2;
    u16 temp_t9;
    u8 temp_v0;

    if (func_8010BF58((Actor *) this, globalCtx, this->unk_29C, this->unk_3F8, &this->unk_2A0) != 0) {
        func_8013AED4(&this->unk_3D0, 3U, 7U);
        temp_t9 = this->unk_3D0 & 0xFFDF;
        this->unk_3D0 = temp_t9;
        this->unk_3D0 = temp_t9 | 0x200;
        this->unk_3EE = 0x14;
        this->unk_2A0 = 0;
        this->actionFunc = func_80BF2AF8;
        return;
    }
    temp_v0 = this->unk_298;
    if ((temp_v0 != 2) && (temp_v0 != 4)) {
        temp_v0_2 = this->unk_2A8;
        if ((temp_v0_2 != 0) && (temp_v0_2->update != 0)) {
            Math_Vec3f_Copy((Vec3f *) &sp38, (Vec3f *) &temp_v0_2->world);
            Math_Vec3f_Copy((Vec3f *) &sp2C, (Vec3f *) &this->actor.world);
            Math_ApproachS(&this->actor.shape.rot.y, Math_Vec3f_Yaw((Vec3f *) &sp2C, (Vec3f *) &sp38), 4, 0x2AA8);
        }
    }
}

void EnIg_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnIg *this = (EnIg *) thisx;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 28.0f);
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_060130D0, NULL, &this->unk_2EC, &this->unk_35E, 0x13);
    this->unk_3FC = -1;
    func_80BF1284((Actor *) this, 0);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_1D0, (Actor *) this, &D_80BF3418);
    Collider_InitAndSetSphere(globalCtx, &this->unk_21C, (Actor *) this, &D_80BF3444);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80BF3470);
    Actor_SetScale((Actor *) this, 0.01f);
    this->unk_298 = 0;
    this->actionFunc = func_80BF2AF8;
    this->actor.gravity = 0.0f;
    func_80BF2AF8(this, globalCtx);
}

void EnIg_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnIg *this = (EnIg *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_1D0);
    Collider_DestroySphere(globalCtx, &this->unk_21C);
}

void EnIg_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnIg *this = (EnIg *) thisx;
    func_80BF19A0((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    func_80BF1B40(this, globalCtx);
    if (this->unk_298 != 0) {
        func_80BF1258(this);
        func_80BF13E4(this);
        func_80BF15EC(this);
        func_8013C964((Actor *) this, globalCtx, 60.0f, 30.0f, 0, (s16) (this->unk_3D0 & 7));
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 12.0f, 0.0f, 4U);
        func_80BF1354((Actor *) this, globalCtx);
    }
}

? func_80BF2EDC(s32 arg0, s32 arg1, s32 *arg2, ? arg3) {
    if (arg1 == 0xA) {
        *arg2 = 0;
    }
    return 0;
}

void func_80BF2EFC(s32 arg0, s32 arg1, ? arg2, ? arg3, s32 arg4, void **arg5) {
    ? sp2C;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    if (arg1 == 0xB) {
        SysMatrix_MultiplyVector3fByState(&D_80BF3528, arg4 + 0x3C);
        Math_Vec3s_Copy(arg4 + 0x48, arg4 + 0x30);
        temp_v0 = *arg5;
        *arg5 = temp_v0 + 8;
        temp_v0->unk_4 = &D_06008710;
        temp_v0->unk_0 = 0xDE000000;
        temp_v0_2 = *arg5;
        *arg5 = temp_v0_2 + 8;
        temp_v0_2->unk_4 = &D_060087B8;
        temp_v0_2->unk_0 = 0xDE000000;
    }
    if (arg1 == 0xC) {
        temp_v0_3 = *arg5;
        *arg5 = temp_v0_3 + 8;
        temp_v0_3->unk_4 = &D_060089D8;
        temp_v0_3->unk_0 = 0xDE000000;
    }
    if (arg1 == 9) {
        temp_v0_4 = *arg5;
        *arg5 = temp_v0_4 + 8;
        temp_v0_4->unk_4 = &D_06008B00;
        temp_v0_4->unk_0 = 0xDE000000;
        SysMatrix_MultiplyVector3fByState(&D_80BF351C, (Vec3f *) &sp2C);
        Math_Vec3f_ToVec3s(arg4 + 0x264, (Vec3f *) &sp2C);
    }
    if (arg1 == 0xA) {
        SysMatrix_CopyCurrentState(arg4 + 0x190);
    }
}

void func_80BF302C(s32 arg0, s32 arg1, void *arg2, ? arg3) {
    u16 temp_v0;
    s32 phi_v0;
    s32 phi_v1;

    temp_v0 = arg2->unk_3D0;
    phi_v1 = 0;
    if ((temp_v0 & 0x200) == 0) {
        if ((temp_v0 & 0x80) != 0) {
            phi_v0 = 1;
            phi_v1 = 1;
        } else {
            phi_v0 = 1;
        }
    } else {
        phi_v0 = 0;
    }
    if (arg1 == 9) {
        func_8013AD9C((s16) (arg2->unk_3E8 + 0x4000), (s16) (arg2->unk_3EA + arg2->unk_BE + 0x4000), arg2 + 0x2D4, arg2 + 0x2E6, phi_v0, phi_v1);
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(arg2->unk_2D4, arg2->unk_2D8, arg2->unk_2DC, 0);
        Matrix_Scale(arg2->unk_58, arg2->unk_5C, arg2->unk_60, 1);
        Matrix_RotateY(arg2->unk_2E8, 1U);
        SysMatrix_InsertXRotation_s(arg2->unk_2E6, 1);
        SysMatrix_InsertZRotation_s(arg2->unk_2EA, 1);
        SysMatrix_StatePush();
    }
}

void EnIg_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp44;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_s1;
    EnIg *this = (EnIg *) thisx;

    if (this->unk_298 != 0) {
        func_8012C28C(globalCtx->state.gfxCtx);
        temp_s1 = globalCtx->state.gfxCtx;
        Scene_SetRenderModeXlu(globalCtx, 0, 1U);
        temp_v0 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060020;
        sp44 = temp_v0;
        sp44->words.w1 = Lib_SegmentedToVirtual(*(&D_80BF3534 + (this->unk_3F2 * 4)));
        temp_s1->polyOpa.p = func_8013AB00(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, (void *) func_80BF2EDC, (void *) func_80BF2EFC, (void *) func_80BF302C, (Actor *) this, temp_s1->polyOpa.p);
        SysMatrix_SetCurrentState(&this->unk_190);
        temp_v0_2 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDA380003;
        temp_v0_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_3 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDE000000;
        temp_v0_3->words.w1 = (u32) &D_0600C538;
    }
}
