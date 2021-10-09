typedef struct EnJa {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x188 */ void (*actionFunc)(EnJa *, GlobalContext *);
    /* 0x18C */ ColliderCylinder unk18C;            /* inferred */
    /* 0x1D8 */ u8 unk1D8;                          /* inferred */
    /* 0x1D9 */ char pad1D9[0x3];                   /* maybe part of unk1D8[4]? */
    /* 0x1DC */ s32 unk1DC;                         /* inferred */
    /* 0x1E0 */ char pad1E0[0xA0];                  /* maybe part of unk1DC[41]? */
    /* 0x280 */ Vec3s unk280;                       /* inferred */
    /* 0x286 */ char pad286[0x5A];                  /* maybe part of unk280[16]? */
    /* 0x2E0 */ Vec3s unk2E0;                       /* inferred */
    /* 0x2E6 */ char pad2E6[0x5A];                  /* maybe part of unk2E0[16]? */
    /* 0x340 */ u16 unk340;                         /* inferred */
    /* 0x342 */ char pad342[0x1A];                  /* maybe part of unk340[14]? */
    /* 0x35C */ s16 unk35C;                         /* inferred */
    /* 0x35E */ char pad35E[0x4];                   /* maybe part of unk35C[3]? */
    /* 0x362 */ s16 unk362;                         /* inferred */
    /* 0x364 */ char pad364[0x4];                   /* maybe part of unk362[3]? */
    /* 0x368 */ void *unk368;                       /* inferred */
    /* 0x36C */ s32 unk36C;                         /* inferred */
    /* 0x370 */ char pad370[0x8];                   /* maybe part of unk36C[3]? */
} EnJa;                                             /* size = 0x378 */

struct _mips2c_stack_EnJa_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnJa_Draw {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ Gfx *sp3C;                           /* inferred */
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad44[0x8];                     /* maybe part of sp40[3]? */
    /* 0x4C */ s32 sp4C;                            /* inferred */
    /* 0x50 */ char pad50[0x8];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnJa_Init {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnJa_Update {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BC1900 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC192C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC1984 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ ColliderCylinder *sp1C;              /* inferred */
    /* 0x20 */ char pad20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BC19FC {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BC1A68 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC1AE0 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad24[0xC];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad30[0x10];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BC1B50 {};              /* size 0x0 */

struct _mips2c_stack_func_80BC1B60 {
    /* 0x00 */ char pad0[0x32];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80BC1D70 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC1E40 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BC1FC8 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BC203C {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BC20D0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC213C {};              /* size 0x0 */

struct _mips2c_stack_func_80BC2150 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC21A8 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ u8 sp18;                             /* inferred */
    /* 0x19 */ char pad19[0xF];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BC2274 {};              /* size 0x0 */

struct _mips2c_stack_func_80BC22F4 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BC25E0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC2620 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ Gfx *sp18;                           /* inferred */
    /* 0x1C */ char pad1C[0x1C];                    /* maybe part of sp18[8]? */
    /* 0x38 */ GraphicsContext *sp38;               /* inferred */
    /* 0x3C */ char pad3C[0x4];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad44[0x1C];                    /* maybe part of sp40[8]? */
    /* 0x60 */ GraphicsContext *sp60;               /* inferred */
    /* 0x64 */ char pad64[0x4];
    /* 0x68 */ Gfx *sp68;                           /* inferred */
    /* 0x6C */ char pad6C[0x4];
    /* 0x70 */ GraphicsContext *sp70;               /* inferred */
    /* 0x74 */ char pad74[0xC];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80BC2B30 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BC2EA4 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad28[0x14];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80BC3154 {};              /* size 0x0 */

struct _mips2c_stack_func_80BC32D8 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BC33C0 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad20[0x18];                    /* maybe part of sp1C[7]? */
    /* 0x38 */ GraphicsContext *sp38;               /* inferred */
    /* 0x3C */ char pad3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BC3594 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

? func_8013AD9C(s16, s16, void *, void *, s32, s32); /* extern */
void func_80BC1900(EnJa *arg0);                     /* static */
s32 func_80BC192C(Actor *arg0, s32 arg1);           /* static */
void func_80BC1984(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BC19FC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BC1A68(EnJa *arg0);                     /* static */
Actor *func_80BC1AE0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BC1B50(GlobalContext *arg0, void *arg1); /* static */
? func_80BC1B60(EnJa *arg0, GlobalContext *arg1);   /* static */
? func_80BC1D70(EnJa *arg0, GlobalContext *arg1);   /* static */
void func_80BC1E40(Vec3s *arg0, GlobalContext *arg1, GlobalContext *); /* static */
s32 func_80BC1FC8(Actor *arg0, ? arg2);             /* static */
s32 func_80BC203C(Actor *arg0, ? arg2);             /* static */
s32 func_80BC20D0(EnJa *arg0, u8 *arg2, u8 *, EnJa *); /* static */
? func_80BC213C(EnJa *arg0, ? arg1);                /* static */
void func_80BC2150(EnJa *arg0, GlobalContext *);    /* static */
s32 *func_80BC2274(EnJa *arg0, GlobalContext *arg1); /* static */
s32 func_80BC25E0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80BC2620(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80BC2B30(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
void func_80BC2EA4(Actor *arg0);                    /* static */
void func_80BC3154(EnJa *arg0, void *arg1);         /* static */
void func_80BC32D8(EnJa *arg0, GlobalContext *arg1); /* static */
void func_80BC33C0(void *arg0, GraphicsContext **arg1); /* static */
void func_80BC3594(EnJa *arg0, GlobalContext *arg1); /* static */
extern ? D_0600BA30;
extern ? D_0600BCC8;
extern FlexSkeletonHeader D_0600C240;
static void D_80BC35F0;                             /* unable to generate initializer */
static s32 D_80BC360C[8] = {
    0xE29370C,
    0x170E2938,
    0xC180E29,
    0x390C170E,
    0x293A0C09,
    0x180E,
    0x293B0C09,
    0x1000,
};
static s32 D_80BC362C[8] = {
    0xE29400C,
    0x170E2941,
    0xC180E29,
    0x420C170E,
    0x29430C09,
    0x180E,
    0x293B0C09,
    0x1000,
};
static s32 D_80BC364C[8] = {
    0xE293C0C,
    0x170E293D,
    0xC180E29,
    0x3E0C170E,
    0x293F0C09,
    0x180E,
    0x293B0C09,
    0x1000,
};
static s32 D_80BC366C[8] = {
    0xE29440C,
    0x170E2945,
    0xC180E29,
    0x460C170E,
    0x29470C09,
    0x180E,
    0x293B0C09,
    0x1000,
};
static ? D_80BC36AC;                                /* unable to generate initializer */
static ? D_80BC36B8;                                /* unable to generate initializer */
static ? D_80BC36C4;                                /* unable to generate initializer */
static ? D_80BC36D0;                                /* unable to generate initializer */
static ColliderCylinderInit D_80BC36DC = {
    {1, 0, 0, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0xC, 0x40, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80BC3708 = {0, 0, 0, 0, 0xFF};
static ActorAnimationEntryS D_80BC3714[6] = {
    {(AnimationHeader *)0x6002734, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60033B0, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6002734, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60033B0, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6004078, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6005CE4, 1.0f, 0, 0xFFFF, 0, 0},
};
static Vec3f D_80BC3774 = {-87.0f, 444.0f, -49.0f};
static Vec3f D_80BC3780 = {600.0f, 0.0f, 0.0f};
static f32 D_80BC378C = 400.0f;
static f32 D_80BC3790 = 0.0f;
static f32 D_80BC3794 = -400.0f;
static f32 D_80BC379C = 0.0f;
static f32 D_80BC37A0 = 400.0f;
static Vec3s D_80BC37A4 = {0x7770, 0xFB44, 0xDAE4};
static ? D_80BC37AC;                                /* unable to generate initializer */
static ? D_80BC37B4;                                /* unable to generate initializer */
static ? D_80BC37BC;                                /* unable to generate initializer */

void func_80BC1900(EnJa *arg0) {
    arg0->unk144.animPlaybackSpeed = arg0->unk344;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
}

s32 func_80BC192C(Actor *arg0, s32 arg1) {
    SkelAnime *temp_a0;
    s32 temp_v1;
    s32 phi_v1;

    temp_a0 = arg0 + 0x144;
    phi_v1 = 0;
    if (arg1 != arg0->unk36C) {
        arg0->unk36C = arg1;
        arg0 = arg0;
        temp_v1 = func_8013BC6C(temp_a0, D_80BC3714, arg1);
        arg0->unk344 = (f32) arg0->unk160;
        phi_v1 = temp_v1;
    }
    return phi_v1;
}

void func_80BC1984(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    Actor *temp_a0;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x18C;
    temp_a1 = temp_a2;
    sp1C = temp_a2;
    temp_a0 = arg0;
    arg0 = arg0;
    Collider_UpdateCylinder(temp_a0, temp_a1);
    arg0->unk1CE = (s16) ((s32) fabsf(arg0->focus.pos.y - arg0->world.pos.y) + 5);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, (Collider *) temp_a2);
}

s32 func_80BC19FC(Actor *arg0, GlobalContext *arg1) {
    s32 sp1C;
    s32 phi_v1;

    phi_v1 = 0;
    if ((arg0->unk340 & 7) != 0) {
        sp1C = 0;
        phi_v1 = sp1C;
        if (func_800B84D0(arg0, arg1) != 0) {
            func_8013AED4(arg0 + 0x340, 0U, 7U);
            arg0->unk188 = func_80BC22F4;
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

void func_80BC1A68(EnJa *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk360;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk360 = temp_v0 - 1;
        phi_v1 = arg0->unk360;
    }
    if (phi_v1 == 0) {
        arg0->unk362 += 1;
        if ((s32) arg0->unk362 >= 4) {
            arg0 = arg0;
            arg0->unk360 = Rand_S16Offset(0x1E, 0x1E);
            arg0->unk362 = 0;
        }
    }
}

Actor *func_80BC1AE0(Actor *arg0, GlobalContext *arg1) {
    ? sp30;
    ? sp24;
    Actor *temp_v0;

    temp_v0 = func_8013BB7C(arg0, arg1, 4, 0x244);
    if (temp_v0 != 0) {
        arg0->child = temp_v0;
        Math_Vec3f_Copy((Vec3f *) &sp24, (Vec3f *) &temp_v0->world);
        Math_Vec3f_Copy((Vec3f *) &sp30, (Vec3f *) &arg0->world);
        arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp30, (Vec3f *) &sp24);
    } else {
        arg0->child = NULL;
    }
    return arg0->child;
}

s32 func_80BC1B50(GlobalContext *arg0, void *arg1) {
    return arg1->unk1CCC;
}

? func_80BC1B60(EnJa *arg0, GlobalContext *arg1) {
    f32 sp44;
    ? sp40;
    ? sp34;
    s16 sp32;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    void *temp_v0_2;
    s16 phi_v0;
    s16 phi_v0_2;
    s16 phi_v0_3;
    s16 phi_v0_4;

    Math_Vec3f_Copy((Vec3f *) &sp40, arg0->unk1E0 + 0x24);
    Math_Vec3f_Copy((Vec3f *) &sp34, arg0 + 0x24);
    temp_v0 = Math_Vec3f_Yaw((Vec3f *) &sp34, (Vec3f *) &sp40);
    sp32 = temp_v0;
    Math_ApproachS(arg0 + 0x356, (s16) ((temp_v0 - arg0->unk35A) - arg0->actor.shape.rot.y), 4, 0x2AA8);
    temp_v1 = arg0->unk356;
    if ((s32) temp_v1 < -0x1FFE) {
        arg0->unk356 = -0x1FFE;
    } else {
        phi_v0 = temp_v1;
        if ((s32) temp_v1 >= 0x1FFF) {
            phi_v0 = 0x1FFE;
        }
        arg0->unk356 = phi_v0;
    }
    Math_ApproachS(arg0 + 0x35A, (s16) ((sp32 - arg0->unk356) - arg0->actor.shape.rot.y), 4, 0x2AA8);
    temp_v1_2 = arg0->unk35A;
    if ((s32) temp_v1_2 < -0x1C70) {
        arg0->unk35A = -0x1C70;
    } else {
        phi_v0_2 = temp_v1_2;
        if ((s32) temp_v1_2 >= 0x1C71) {
            phi_v0_2 = 0x1C70;
        }
        arg0->unk35A = phi_v0_2;
    }
    temp_v0_2 = arg0->unk1E0;
    if (temp_v0_2->unk0 == 0) {
        sp44 = temp_v0_2->unkC44 + 3.0f;
    } else {
        Math_Vec3f_Copy((Vec3f *) &sp40, temp_v0_2 + 0x3C);
    }
    Math_Vec3f_Copy((Vec3f *) &sp34, arg0 + 0x3C);
    Math_ApproachS(arg0 + 0x354, (s16) (Math_Vec3f_Pitch((Vec3f *) &sp34, (Vec3f *) &sp40) - arg0->unk358), 4, 0x2AA8);
    temp_v1_3 = arg0->unk354;
    if ((s32) temp_v1_3 < -0x1C70) {
        arg0->unk354 = -0x1C70;
    } else {
        phi_v0_3 = temp_v1_3;
        if ((s32) temp_v1_3 >= 0x1C71) {
            phi_v0_3 = 0x1C70;
        }
        arg0->unk354 = phi_v0_3;
    }
    Math_ApproachS(arg0 + 0x358, (s16) (Math_Vec3f_Pitch((Vec3f *) &sp34, (Vec3f *) &sp40) - arg0->unk354), 4, 0x2AA8);
    temp_v1_4 = arg0->unk358;
    if ((s32) temp_v1_4 < -0x1C70) {
        arg0->unk358 = -0x1C70;
    } else {
        phi_v0_4 = temp_v1_4;
        if ((s32) temp_v1_4 >= 0x1C71) {
            phi_v0_4 = 0x1C70;
        }
        arg0->unk358 = phi_v0_4;
    }
    return 1;
}

? func_80BC1D70(EnJa *arg0, GlobalContext *arg1) {
    EnJa *temp_a0;
    s16 temp_v0_3;
    s32 temp_v0_2;
    u16 temp_t9;
    u16 temp_v0;
    EnJa *phi_a0;
    s16 phi_v1;

    temp_v0 = arg0->unk340;
    if ((temp_v0 & 8) != 0) {
        temp_v0_2 = func_80BC1B50(arg1);
        temp_a0 = arg0;
        temp_a0->unk1E0 = temp_v0_2;
        phi_a0 = temp_a0;
        if (temp_v0_2 != 0) {
            arg0 = temp_a0;
            func_80BC1B60(temp_a0, arg1);
            phi_a0 = arg0;
        }
        temp_t9 = phi_a0->unk340 & 0xFFEF;
        phi_a0->unk340 = temp_t9;
        phi_a0->unk340 = temp_t9 | 0x20;
    } else if ((temp_v0 & 0x20) != 0) {
        arg0->unk340 = temp_v0 & 0xFFDF;
        arg0->unk354 = 0;
        arg0->unk356 = 0;
        arg0->unk358 = 0;
        arg0->unk35A = 0;
        arg0->unk35E = 0x14;
    } else {
        temp_v0_3 = arg0->unk35E;
        if (temp_v0_3 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk35E = temp_v0_3 - 1;
            phi_v1 = arg0->unk35E;
        }
        if (phi_v1 == 0) {
            arg0->unk35E = 0x14;
            arg0->unk340 |= 0x10;
        }
    }
    return 1;
}

void func_80BC1E40(Vec3s *arg0, GlobalContext *arg1) {
    void *sp24;
    s32 sp20;
    f32 temp_f2;
    u16 temp_a0;
    u8 temp_t0;
    u8 temp_v0;
    f32 phi_f0;
    f32 phi_f0_2;

    sp24 = arg1->actorCtx.actorList[2].first;
    temp_v0 = func_80152498(arg1 + 0x4908);
    temp_a0 = arg1->msgCtx.unk11F04;
    temp_t0 = temp_v0;
    if ((((s32) temp_a0 < 0xFF) || ((s32) temp_a0 >= 0x201)) && (temp_v0 == 3) && (arg0->unk374 == 3) && (arg0 == sp24->unkA88)) {
        if ((arg1->state.frames & 1) == 0) {
            if (arg0->unk348 != 0.0f) {
                arg0->unk348 = 0.0f;
            } else {
                arg0->unk348 = 1.0f;
                goto block_9;
            }
        } else {
block_9:
        }
    } else {
        arg0->unk348 = 0.0f;
    }
    if (arg0->unk348 != 0.0f) {
        phi_f0 = 60.0f;
    } else {
        phi_f0 = -60.0f;
    }
    arg0->unk34C = (f32) (arg0->unk34C + phi_f0);
    temp_f2 = arg0->unk34C;
    if (temp_f2 < 0.0f) {
        arg0->unk34C = 0.0f;
    } else {
        if (temp_f2 > 120.0f) {
            phi_f0_2 = 120.0f;
        } else {
            phi_f0_2 = temp_f2;
        }
        arg0->unk34C = phi_f0_2;
    }
    sp20 = (s32) temp_t0;
    SysMatrix_InsertTranslation(arg0->unk34C, 0.0f, 0.0f, 1);
    arg0->unk374 = (s32) temp_t0;
}

s32 func_80BC1FC8(Actor *arg0, ? arg2) {
    s32 sp24;
    s32 phi_v1;

    sp24 = 0;
    phi_v1 = sp24;
    if (func_80BC1AE0(arg0) != 0) {
        func_8013AED4(arg0 + 0x340, 3U, 7U);
        arg0->unk340 = (u16) (arg0->unk340 | 0x10);
        func_80BC192C(arg0, 5);
        func_80BC2EA4(arg0);
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80BC203C(Actor *arg0, ? arg2) {
    s32 sp24;
    s32 phi_v1;

    sp24 = 0;
    phi_v1 = sp24;
    if (func_80BC1AE0(arg0) != 0) {
        if ((arg0->params & 3) == 0) {
            func_80BC192C(arg0, 1);
        } else {
            func_80BC192C(arg0, 4);
        }
        func_8013AED4(arg0 + 0x340, 3U, 7U);
        arg0->shape.shadowDraw = NULL;
        arg0->unk340 = (u16) (arg0->unk340 | 0x50);
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80BC20D0(EnJa *arg0, u8 *arg2) {
    s32 temp_v0_2;
    u8 temp_v0;
    s32 phi_v1;

    arg0->unk340 = 0;
    temp_v0 = *arg2;
    phi_v1 = 0;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {

        } else {
            phi_v1 = func_80BC203C();
        }
    } else {
        temp_v0_2 = func_80BC1FC8();
        phi_v1 = temp_v0_2;
        if (temp_v0_2 == 1) {

        }
    }
    return phi_v1;
}

? func_80BC213C(EnJa *arg0, ? arg1) {
    return 1;
}

void func_80BC2150(EnJa *arg0) {
    u8 temp_v0;

    temp_v0 = arg0->unk1D8;
    if ((temp_v0 == 1) || (temp_v0 == 2)) {
        func_80BC213C(arg0);
    }
    Math_ApproachS(arg0 + 0xBE, arg0->actor.world.rot.y, 4, 0x1554);
}

void func_80BC21A8(EnJa *this, GlobalContext *globalCtx) {
    u8 sp18;
    EnJa *temp_a0;
    EnJa *temp_a3;
    EnJa *phi_a3;
    EnJa *phi_a3_2;
    EnJa *phi_a3_3;

    this->unk35C = gSaveContext.unk_14 + gGameInfo->data[15];
    this = this;
    temp_a3 = this;
    phi_a3 = temp_a3;
    phi_a3_2 = temp_a3;
    if ((func_80133038(globalCtx, &D_80BC35F0, (struct_80133038_arg2 *) &sp18) == 0) || ((temp_a0 = temp_a3, (sp18 != temp_a3->unk1D8)) && (this = temp_a3, phi_a3 = this, phi_a3_2 = this, (func_80BC20D0(temp_a0, (u8 *) globalCtx, &sp18, temp_a3) == 0)))) {
        phi_a3_2->actor.shape.shadowDraw = NULL;
        phi_a3_2->actor.flags &= -2;
        sp18 = 0;
        phi_a3_3 = phi_a3_2;
    } else {
        phi_a3->actor.shape.shadowDraw = func_800B3FC0;
        phi_a3->actor.flags |= 1;
        phi_a3_3 = phi_a3;
    }
    phi_a3_3->unk1D8 = sp18;
    func_80BC2150(phi_a3_3, globalCtx);
}

s32 *func_80BC2274(EnJa *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    temp_v0 = arg0->unk1D8;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            return D_80BC360C;
        }
        if ((arg0->actor.params & 3) == 0) {
            return D_80BC362C;
        }
        return D_80BC366C;
    }
    if ((arg0->actor.params & 3) == 0) {
        return D_80BC360C;
    }
    return D_80BC364C;
}

void func_80BC22F4(EnJa *this, GlobalContext *globalCtx) {
    if (func_8010BF58((Actor *) this, globalCtx, func_80BC2274(this, globalCtx), this->unk368, &this->unk1DC) != 0) {
        this->unk340 &= 0xFFF7;
        func_8013AED4(&this->unk340, 3U, 7U);
        this->unk1DC = 0;
        this->unk340 |= 0x10;
        this->actionFunc = func_80BC21A8;
        this->actor.shape.rot.y = this->actor.world.rot.y;
    }
}

void EnJa_Init(EnJa *this, GlobalContext *globalCtx) {
    EnJa *this = (EnJa *) thisx;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 18.0f);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_0600C240, NULL, &this->unk280, &this->unk2E0, 0x10);
    this->unk36C = -1;
    func_80BC192C((Actor *) this, 0);
    Collider_InitAndSetCylinder(globalCtx, &this->unk18C, (Actor *) this, &D_80BC36DC);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80BC3708);
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.targetMode = 0;
    this->actor.uncullZoneForward = 800.0f;
    this->actor.gravity = 0.0f;
    func_8013AED4(&this->unk340, 0U, 7U);
    this->unk340 |= 0x10;
    this->unk1D8 = 0;
    this->unk368 = NULL;
    this->actionFunc = func_80BC21A8;
}

void EnJa_Destroy(EnJa *this, GlobalContext *globalCtx) {
    EnJa *this = (EnJa *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk18C);
}

void EnJa_Update(EnJa *this, GlobalContext *globalCtx) {
    EnJa *this = (EnJa *) thisx;
    func_80BC19FC((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    if (this->unk1D8 != 0) {
        func_80BC1900(this);
        func_80BC1A68(this);
        func_80BC1D70(this, globalCtx);
        func_8013C964((Actor *) this, globalCtx, (f32) (this->unk18C.dim.radius + 0x1E), (f32) (this->unk18C.dim.height + 0xA), 0, (s16) (this->unk340 & 7));
        if (this->unk1D8 != 2) {
            Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
            Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 12.0f, 0.0f, 4U);
        }
        func_80BC1984((Actor *) this, globalCtx);
    }
    if (this->unk1D8 == 1) {
        func_80BC32D8(this, globalCtx);
    }
}

s32 func_80BC25E0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg1 == 0xF) {
        func_80BC1E40(arg5, arg0, arg0);
    }
    return 0;
}

void func_80BC2620(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    GraphicsContext *sp70;
    Gfx *sp68;
    GraphicsContext *sp60;
    Gfx *sp40;
    GraphicsContext *sp38;
    Gfx *sp18;
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
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a1;
    GraphicsContext *temp_a1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_v0_13;
    s16 temp_v0_4;

    if (arg1 == 0xF) {
        SysMatrix_MultiplyVector3fByState(&D_80BC3780, arg4 + 0x3C);
        Math_Vec3s_Copy(arg4 + 0x48, arg4 + 0x30);
    } else if (((arg4->unk340 & 0x40) != 0) && (arg1 == 0xB)) {
        sp70 = *arg0;
        SysMatrix_StatePush();
        SysMatrix_RotateAndTranslateState(&D_80BC3774, &D_80BC37A4);
        temp_v0 = sp70->polyOpa.p;
        sp70->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp68 = temp_v0;
        sp68->words.w1 = Matrix_NewMtx(*arg0);
        temp_v0_2 = sp70->polyOpa.p;
        sp70->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = (u32) &D_0600BA30;
        temp_v0_2->words.w0 = 0xDE000000;
        SysMatrix_StatePop();
    }
    if (arg4->unk1D8 == 1) {
        if ((arg1 == 0xB) && (((temp_f0 = arg4->unk15C, (temp_f0 >= 0.0f)) && (temp_f0 <= 6.0f)) || ((temp_f0 >= 35.0f) && (temp_f0 <= 47.0f)))) {
            temp_a1 = *arg0;
            sp60 = temp_a1;
            SysMatrix_StatePush();
            SysMatrix_InsertTranslation(D_80BC378C, D_80BC3790, D_80BC3794, 1);
            SysMatrix_NormalizeXYZ(arg0 + 0x187FC);
            temp_v0_3 = temp_a1->polyOpa.p;
            temp_a1->polyOpa.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = 0;
            temp_v0_3->words.w0 = 0xE7000000;
            temp_v0_4 = arg4->unk364;
            if (temp_v0_4 != 0) {
                if (temp_v0_4 != 1) {
                    if (temp_v0_4 != 2) {
                        if (temp_v0_4 != 3) {
                            temp_v0_5 = temp_a1->polyOpa.p;
                            temp_a1->polyOpa.p = temp_v0_5 + 8;
                            temp_v0_5->words.w1 = -1;
                            temp_v0_5->words.w0 = 0xFA000000;
                        } else {
                            temp_v0_6 = temp_a1->polyOpa.p;
                            temp_a1->polyOpa.p = temp_v0_6 + 8;
                            temp_v0_6->words.w1 = 0xFFFF00FF;
                            temp_v0_6->words.w0 = 0xFA000000;
                        }
                    } else {
                        temp_v0_7 = temp_a1->polyOpa.p;
                        temp_a1->polyOpa.p = temp_v0_7 + 8;
                        temp_v0_7->words.w1 = 0xFFFF;
                        temp_v0_7->words.w0 = 0xFA000000;
                    }
                } else {
                    temp_v0_8 = temp_a1->polyOpa.p;
                    temp_a1->polyOpa.p = temp_v0_8 + 8;
                    temp_v0_8->words.w1 = 0xFF0000FF;
                    temp_v0_8->words.w0 = 0xFA000000;
                }
            } else {
                temp_v0_9 = temp_a1->polyOpa.p;
                temp_a1->polyOpa.p = temp_v0_9 + 8;
                temp_v0_9->words.w1 = 0xFFFF;
                temp_v0_9->words.w0 = 0xFA000000;
            }
            temp_v0_10 = temp_a1->polyOpa.p;
            temp_a1->polyOpa.p = temp_v0_10 + 8;
            temp_v0_10->words.w0 = 0xDA380003;
            sp60 = temp_a1;
            sp40 = temp_v0_10;
            sp40->words.w1 = Matrix_NewMtx(*arg0);
            temp_v0_11 = temp_a1->polyOpa.p;
            temp_a1->polyOpa.p = temp_v0_11 + 8;
            temp_v0_11->words.w1 = (u32) &D_0600BCC8;
            temp_v0_11->words.w0 = 0xDE000000;
            SysMatrix_StatePop();
            return;
        }
        if (arg1 == 0xE) {
            temp_f0_2 = arg4->unk15C;
            if ((temp_f0_2 >= 0.0f) && (temp_f0_2 <= 18.0f)) {
                temp_a1_2 = *arg0;
                sp38 = temp_a1_2;
                SysMatrix_StatePush();
                SysMatrix_InsertTranslation(D_80BC379C, D_80BC379C, D_80BC37A0, 1);
                SysMatrix_NormalizeXYZ(arg0 + 0x187FC);
                temp_v0_12 = temp_a1_2->polyOpa.p;
                temp_a1_2->polyOpa.p = temp_v0_12 + 8;
                temp_v0_12->words.w1 = 0;
                temp_v0_12->words.w0 = 0xE7000000;
                temp_v0_13 = arg4->unk366;
                if (temp_v0_13 != 0) {
                    if (temp_v0_13 != 1) {
                        if (temp_v0_13 != 2) {
                            if (temp_v0_13 != 3) {
                                temp_v0_14 = temp_a1_2->polyOpa.p;
                                temp_a1_2->polyOpa.p = temp_v0_14 + 8;
                                temp_v0_14->words.w1 = -1;
                                temp_v0_14->words.w0 = 0xFA000000;
                            } else {
                                temp_v0_15 = temp_a1_2->polyOpa.p;
                                temp_a1_2->polyOpa.p = temp_v0_15 + 8;
                                temp_v0_15->words.w1 = 0xFFFF00FF;
                                temp_v0_15->words.w0 = 0xFA000000;
                            }
                        } else {
                            temp_v0_16 = temp_a1_2->polyOpa.p;
                            temp_a1_2->polyOpa.p = temp_v0_16 + 8;
                            temp_v0_16->words.w1 = 0xFFFF;
                            temp_v0_16->words.w0 = 0xFA000000;
                        }
                    } else {
                        temp_v0_17 = temp_a1_2->polyOpa.p;
                        temp_a1_2->polyOpa.p = temp_v0_17 + 8;
                        temp_v0_17->words.w1 = 0xFF0000FF;
                        temp_v0_17->words.w0 = 0xFA000000;
                    }
                } else {
                    temp_v0_18 = temp_a1_2->polyOpa.p;
                    temp_a1_2->polyOpa.p = temp_v0_18 + 8;
                    temp_v0_18->words.w1 = 0xFFFF;
                    temp_v0_18->words.w0 = 0xFA000000;
                }
                temp_v0_19 = temp_a1_2->polyOpa.p;
                temp_a1_2->polyOpa.p = temp_v0_19 + 8;
                temp_v0_19->words.w0 = 0xDA380003;
                sp38 = temp_a1_2;
                sp18 = temp_v0_19;
                sp18->words.w1 = Matrix_NewMtx(*arg0);
                temp_v0_20 = temp_a1_2->polyOpa.p;
                temp_a1_2->polyOpa.p = temp_v0_20 + 8;
                temp_v0_20->words.w1 = (u32) &D_0600BCC8;
                temp_v0_20->words.w0 = 0xDE000000;
                SysMatrix_StatePop();
            }
        }
        /* Duplicate return node #36. Try simplifying control flow for better match */
    }
}

void func_80BC2B30(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    u16 temp_v0;
    s32 phi_v1;
    s32 phi_v0;

    temp_v0 = arg2->unk340;
    phi_v1 = 1;
    if ((temp_v0 & 0x10) != 0) {
        phi_v1 = 0;
    }
    phi_v0 = 0;
    phi_v0 = 0;
    if ((temp_v0 & 0x20) != 0) {
        phi_v0 = 1;
    }
    if (phi_v1 == 0) {

    }
    if (arg1 != 8) {
        if (arg1 == 0xF) {
            func_8013AD9C((s16) (arg2->unk354 + arg2->unk358 + 0x4000), (s16) (arg2->unk356 + arg2->unk35A + arg2->shape.rot.y + 0x4000), arg2 + 0x1EC, arg2 + 0x274, phi_v1, phi_v0);
            SysMatrix_StatePop();
            SysMatrix_InsertTranslation(arg2->unk1EC, arg2->unk1F0, arg2->unk1F4, 0);
            Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
            Matrix_RotateY(arg2->unk276, 1U);
            SysMatrix_InsertXRotation_s(arg2->unk274, 1);
            SysMatrix_InsertZRotation_s(arg2->unk278, 1);
            SysMatrix_StatePush();
            return;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return;
    }
    func_8013AD9C((s16) (arg2->unk358 + 0x4000), (s16) (arg2->unk35A + arg2->shape.rot.y + 0x4000), arg2 + 0x1F8, arg2 + 0x27A, phi_v1, phi_v0);
    SysMatrix_StatePop();
    SysMatrix_InsertTranslation(arg2->unk1F8, arg2->unk1FC, arg2->unk200, 0);
    Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
    Matrix_RotateY(arg2->unk27C, 1U);
    SysMatrix_InsertXRotation_s(arg2->unk27A, 1);
    SysMatrix_InsertZRotation_s(arg2->unk27E, 1);
    SysMatrix_StatePush();
}

void EnJa_Draw(EnJa *this, GlobalContext *globalCtx) {
    s32 sp4C;
    Gfx *sp40;
    Gfx *sp3C;
    Gfx *sp38;
    s32 sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s32 temp_t1;
    void *temp_v1;
    void *temp_v1_2;
    s32 phi_t2;
    EnJa *this = (EnJa *) thisx;

    phi_t2 = 1;
    if ((this->actor.params & 3) == 0) {
        phi_t2 = 0;
    }
    if (this->unk1D8 != 0) {
        temp_a0 = globalCtx->state.gfxCtx;
        sp4C = phi_t2;
        temp_s0 = temp_a0;
        func_8012C28C(temp_a0);
        temp_v0 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060020;
        temp_t1 = phi_t2 * 4;
        temp_v1 = temp_t1 + &D_80BC37AC;
        sp30 = temp_t1;
        sp40 = temp_v0;
        sp40->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, (s32) temp_v1->unk0, (s32) temp_v1->unk1, (s32) temp_v1->unk2, (s32) temp_v1->unk3);
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDB060024;
        temp_v1_2 = temp_t1 + &D_80BC37B4;
        sp3C = temp_v0_2;
        sp3C->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, (s32) temp_v1_2->unk0, (s32) temp_v1_2->unk1, (s32) temp_v1_2->unk2, (s32) temp_v1_2->unk3);
        temp_v0_3 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDB060028;
        sp38 = temp_v0_3;
        sp38->words.w1 = Lib_SegmentedToVirtual(*(&D_80BC37BC + (this->unk362 * 4)));
        temp_v0_4 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = 0;
        temp_v0_4->words.w0 = 0xE7000000;
        func_801343C0(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80BC25E0, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80BC2620, func_80BC2B30, (Actor *) this);
    }
    if (this->unk1D8 == 1) {
        func_80BC3594(this, globalCtx);
    }
}

void func_80BC2EA4(Actor *arg0) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    ? sp28;
    f32 temp_f0;
    void *temp_t9;

    sp44 = Math_SinS(arg0->shape.rot.y);
    sp40 = Math_CosS(arg0->shape.rot.y);
    sp3C = Math_SinS(arg0->child->unkBE);
    temp_f0 = Math_CosS(arg0->child->shape.rot.y);
    arg0->unk270 = 3;
    arg0->unk272 = 0x90;
    arg0->unk262 = 0x60;
    arg0->unk250 = 1;
    arg0->unk252 = 0x30;
    arg0->unk260 = 2;
    arg0->unk242 = 0;
    arg0->unk240 = 0;
    sp28.unk0 = (f32) arg0->world.pos.x;
    sp28.unk4 = (f32) arg0->world.pos.y;
    sp28.unk8 = (f32) arg0->world.pos.z;
    arg0->unk210 = (f32) sp28.unk0;
    temp_t9 = arg0->child;
    arg0->unk214 = (f32) sp28.unk4;
    arg0->unk218 = (f32) sp28.unk8;
    arg0->unk204 = (f32) sp28.unk0;
    arg0->unk208 = (f32) sp28.unk4;
    arg0->unk20C = (f32) sp28.unk8;
    sp28.unk0 = (f32) temp_t9->world.pos.x;
    sp28.unk4 = (f32) temp_t9->world.pos.y;
    sp28.unk8 = (f32) temp_t9->world.pos.z;
    arg0->unk228 = (f32) sp28.unk0;
    arg0->unk22C = (f32) sp28.unk4;
    arg0->unk230 = (f32) sp28.unk8;
    arg0->unk21C = (f32) sp28.unk0;
    arg0->unk220 = (f32) sp28.unk4;
    arg0->unk224 = (f32) sp28.unk8;
    arg0->unk204 = (f32) (arg0->unk204 + ((D_80BC36AC.unk8 * sp44) + (D_80BC36AC.unk0 * sp40)));
    arg0->unk208 = (f32) (arg0->unk208 + D_80BC36AC.unk4);
    arg0->unk20C = (f32) (arg0->unk20C + ((D_80BC36AC.unk8 * sp40) - (D_80BC36AC.unk0 * sp44)));
    arg0->unk210 = (f32) (arg0->unk210 + ((D_80BC36B8.unk8 * sp44) + (D_80BC36B8.unk0 * sp40)));
    arg0->unk214 = (f32) (arg0->unk214 + D_80BC36B8.unk4);
    arg0->unk218 = (f32) (arg0->unk218 + ((D_80BC36B8.unk8 * sp40) - (D_80BC36B8.unk0 * sp44)));
    arg0->unk21C = (f32) (arg0->unk21C + ((D_80BC36C4.unk8 * sp3C) + (D_80BC36C4.unk0 * temp_f0)));
    arg0->unk220 = (f32) (arg0->unk220 + D_80BC36C4.unk4);
    arg0->unk224 = (f32) (arg0->unk224 + ((D_80BC36C4.unk8 * temp_f0) - (D_80BC36C4.unk0 * sp3C)));
    arg0->unk228 = (f32) (arg0->unk228 + ((D_80BC36D0.unk8 * sp3C) + (D_80BC36D0.unk0 * temp_f0)));
    arg0->unk22C = (f32) (arg0->unk22C + D_80BC36D0.unk4);
    arg0->unk364 = 2;
    arg0->unk366 = 0;
    arg0->unk230 = (f32) (arg0->unk230 + ((D_80BC36D0.unk8 * temp_f0) - (D_80BC36D0.unk0 * sp3C)));
}

void func_80BC3154(EnJa *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0;

    temp_v0 = arg1->unkE;
    if (((s32) temp_v0 >= 0x12) && ((s32) temp_v0 < 0x53)) {
        temp_f0 = (f32) (temp_v0 - 0x12);
        temp_f2 = 65.0f - temp_f0;
        arg1->unk0 = (f32) (((temp_f2 * arg0->unk204) + (temp_f0 * arg0->unk228)) / 65.0f);
        arg1->unk4 = (f32) (((temp_f2 * arg0->unk208) + (temp_f0 * arg0->unk22C)) / 65.0f);
        temp_f0_2 = temp_f0 - 32.5f;
        arg1->unk8 = (f32) (((temp_f2 * arg0->unk20C) + (temp_f0 * arg0->unk230)) / 65.0f);
        arg1->unk4 = (f32) (arg1->unk4 + ((-0.11360947f * (temp_f0_2 * temp_f0_2)) + 120.0f));
        return;
    }
    if (((s32) temp_v0 >= 0x66) && ((s32) temp_v0 < 0xBF)) {
        temp_f0_3 = (f32) (temp_v0 - 0x66);
        temp_f2_2 = 89.0f - temp_f0_3;
        arg1->unk0 = (f32) (((temp_f2_2 * arg0->unk21C) + (temp_f0_3 * arg0->unk210)) / 89.0f);
        arg1->unk4 = (f32) (((temp_f2_2 * arg0->unk220) + (temp_f0_3 * arg0->unk214)) / 89.0f);
        temp_f0_4 = temp_f0_3 - 44.5f;
        arg1->unk8 = (f32) (((temp_f2_2 * arg0->unk224) + (temp_f0_3 * arg0->unk218)) / 89.0f);
        arg1->unk4 = (f32) (arg1->unk4 + ((-0.08079788f * (temp_f0_4 * temp_f0_4)) + 160.0f));
    }
}

void func_80BC32D8(EnJa *arg0, GlobalContext *arg1) {
    SkelAnime *temp_s0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_s1;
    void *phi_s0;
    s32 phi_s1;

    phi_s0 = arg0 + 0x234;
    phi_s1 = 0;
    do {
        func_80BC3154(arg0, phi_s0);
        temp_v0 = phi_s0->unkE;
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
        if (temp_v0 != 0xBF) {
            phi_s0->unkE = (s16) (temp_v0 + 1);
        } else {
            phi_s0->unkE = 0;
        }
        phi_s0 += 0x10;
    } while (temp_s1 != 4);
    temp_s0 = arg0 + 0x144;
    if (func_801378B8(temp_s0, arg0->unk144.animFrameCount) != 0) {
        temp_v0_2 = arg0->unk366;
        if ((s32) temp_v0_2 > 0) {
            arg0->unk366 = temp_v0_2 - 1;
            return;
        }
        arg0->unk366 = 3;
        return;
    }
    if (func_801378B8(temp_s0, 34.0f) != 0) {
        temp_v0_3 = arg0->unk364;
        if ((s32) temp_v0_3 > 0) {
            arg0->unk364 = temp_v0_3 - 1;
            return;
        }
        arg0->unk364 = 3;
        /* Duplicate return node #13. Try simplifying control flow for better match */
    }
}

void func_80BC33C0(void *arg0, GraphicsContext **arg1) {
    GraphicsContext *sp38;
    Gfx *sp1C;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_t0;
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = arg0->unkE;
    if ((((s32) temp_v0 < 0) || ((s32) temp_v0 >= 0x13)) && (((s32) temp_v0 < 0x53) || ((s32) temp_v0 >= 0x67))) {
        temp_t0 = *arg1;
        sp38 = temp_t0;
        SysMatrix_InsertTranslation(arg0->unk0, arg0->unk4, arg0->unk8, 0);
        SysMatrix_InsertMatrix(arg1 + 0x187FC, 1);
        Matrix_Scale(0.01f, 0.01f, 0.01f, 1);
        temp_v0_2 = arg0->unkC;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 != 1) {
                if (temp_v0_2 != 2) {
                    if (temp_v0_2 != 3) {
                        temp_v0_3 = temp_t0->polyOpa.p;
                        temp_t0->polyOpa.p = temp_v0_3 + 8;
                        temp_v0_3->words.w1 = -1;
                        temp_v0_3->words.w0 = 0xFA000000;
                    } else {
                        temp_v0_4 = temp_t0->polyOpa.p;
                        temp_t0->polyOpa.p = temp_v0_4 + 8;
                        temp_v0_4->words.w1 = 0xFFFF00FF;
                        temp_v0_4->words.w0 = 0xFA000000;
                    }
                } else {
                    temp_v0_5 = temp_t0->polyOpa.p;
                    temp_t0->polyOpa.p = temp_v0_5 + 8;
                    temp_v0_5->words.w1 = 0xFFFF;
                    temp_v0_5->words.w0 = 0xFA000000;
                }
            } else {
                temp_v0_6 = temp_t0->polyOpa.p;
                temp_t0->polyOpa.p = temp_v0_6 + 8;
                temp_v0_6->words.w1 = 0xFF0000FF;
                temp_v0_6->words.w0 = 0xFA000000;
            }
        } else {
            temp_v0_7 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = temp_v0_7 + 8;
            temp_v0_7->words.w1 = 0xFFFF;
            temp_v0_7->words.w0 = 0xFA000000;
        }
        temp_v0_8 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_8 + 8;
        temp_v0_8->words.w0 = 0xDA380003;
        sp38 = temp_t0;
        sp1C = temp_v0_8;
        sp1C->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_9 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_9 + 8;
        temp_v0_9->words.w1 = (u32) &D_0600BCC8;
        temp_v0_9->words.w0 = 0xDE000000;
    }
}

void func_80BC3594(EnJa *arg0, GraphicsContext **arg1) {
    s32 temp_s1;
    void *phi_s0;
    s32 phi_s1;

    phi_s0 = arg0 + 0x234;
    phi_s1 = 0;
    do {
        func_80BC33C0(phi_s0, arg1);
        temp_s1 = phi_s1 + 1;
        phi_s0 += 0x10;
        phi_s1 = temp_s1;
    } while (temp_s1 != 4);
}
