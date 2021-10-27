typedef struct {
    /* 0x00 */ Vec3s rot;
    /* 0x06 */ s16 face;
    /* 0x08 */ f32 yOffset;
    /* 0x0C */ void (*shadowDraw)(Actor *, Lights *, GlobalContext *);
    /* 0x10 */ f32 shadowScale;
    /* 0x14 */ u8 shadowAlpha;
    /* 0x15 */ u8 feetFloorFlags;
    /* 0x16 */ s16 unk_16;                          /* inferred */
    /* 0x18 */ Vec3f feetPos[2];
} ActorShape;                                       /* size = 0x30 */

typedef struct EnScopenuts {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0xA2];                 /* maybe part of unk_188[28]? */
    /* 0x230 */ Vec3s unk_230;                      /* inferred */
    /* 0x236 */ char pad_236[0xA2];                 /* maybe part of unk_230[28]? */
    /* 0x2D8 */ void (*actionFunc)(EnScopenuts *, GlobalContext *);
    /* 0x2DC */ ColliderCylinder unk_2DC;           /* inferred */
    /* 0x328 */ u16 unk_328;                        /* inferred */
    /* 0x32A */ char pad_32A[0x6];                  /* maybe part of unk_328[4]? */
    /* 0x330 */ Path *unk_330;                      /* inferred */
    /* 0x334 */ char pad_334[0x4];
    /* 0x338 */ s16 unk_338;                        /* inferred */
    /* 0x33A */ char pad_33A[0x2];
    /* 0x33C */ s16 unk_33C;                        /* inferred */
    /* 0x33E */ char pad_33E[0xA];                  /* maybe part of unk_33C[6]? */
    /* 0x348 */ s32 unk_348;                        /* inferred */
    /* 0x34C */ char pad_34C[0x4];
    /* 0x350 */ f32 unk_350;                        /* inferred */
    /* 0x354 */ char pad_354[0x4];
    /* 0x358 */ s16 unk_358;                        /* inferred */
    /* 0x35A */ s16 unk_35A;                        /* inferred */
    /* 0x35C */ char pad_35C[0x18];                 /* maybe part of unk_35A[13]? */
} EnScopenuts;                                      /* size = 0x374 */

struct _mips2c_stack_EnScopenuts_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnScopenuts_Draw {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnScopenuts_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ ColliderCylinder *sp30;              /* inferred */
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnScopenuts_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BCABF0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ? sp1C;                              /* inferred */
    /* 0x1C */ char pad_1C[0xC];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0xC];
    /* 0x34 */ void *sp34;                          /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BCAC40 {
    /* 0x00 */ char pad_0[0x54];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad_60[0x4];
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x8];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80BCAD64 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BCAE78 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BCAF0C {};              /* size 0x0 */

struct _mips2c_stack_func_80BCAFA8 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BCB078 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ u8 *sp2C;                            /* inferred */
    /* 0x30 */ s16 sp30;                            /* inferred */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BCB1C8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BCB230 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s16 sp24;                            /* inferred */
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BCB4DC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BCB52C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BCB6D0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BCB90C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BCB980 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BCBA00 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s16 sp24;                            /* inferred */
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BCBC60 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BCBD28 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ s16 sp38;                            /* inferred */
    /* 0x3A */ char pad_3A[0x6];                    /* maybe part of sp38[4]? */
    /* 0x40 */ s16 sp40;                            /* inferred */
    /* 0x42 */ s16 sp42;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80BCBF0C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BCBFFC {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ u8 *sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x2];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ s16 sp38;                            /* inferred */
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BCC288 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BCC2AC {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0xC];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];                    /* maybe part of sp44[3]? */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ void *sp5C;                          /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80BCC448 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BCC828 {};              /* size 0x0 */

struct _mips2c_stack_func_80BCC9CC {};              /* size 0x0 */

struct _mips2c_stack_func_80BCC9E4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

void func_80BCABF0(void *arg0);                     /* static */
void func_80BCAC40(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BCAD64(Actor *arg0, s16 arg1);          /* static */
void func_80BCAE78(Actor *arg0, GlobalContext *arg1); /* static */
s16 func_80BCAF0C(Actor *arg0);                     /* static */
void func_80BCAFA8(EnScopenuts *arg0, GlobalContext *arg1); /* static */
void func_80BCB078(Actor *arg0, ? arg1);            /* static */
void func_80BCB1C8(Actor *arg0, ? arg1);            /* static */
void func_80BCB230(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BCB4DC(void *arg0, ? arg1);             /* static */
void func_80BCB52C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BCB6D0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BCB90C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BCB980(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BCBA00(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BCBC60(void *arg0, GlobalContext *arg1); /* static */
void func_80BCBD28(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BCBF0C(void *arg0, ? arg1);             /* static */
void func_80BCBFFC(Actor *arg0, ? arg1);            /* static */
void func_80BCC288(Actor *arg0, ? arg1);            /* static */
s32 func_80BCC2AC(Actor *arg0, u8 *arg1, s32 arg2); /* static */
f32 func_80BCC448(u8 *arg0, s32 arg1, Vec3f *arg2, s16 *arg3); /* static */
s32 func_80BCC828(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80BCC9CC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *actor); /* static */
void func_80BCC9E4(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern Gfx D_06001420;
extern AnimationHeader D_06005488;
extern Gfx D_06008290;
extern FlexSkeletonHeader D_0600AC70;
static ColliderCylinderInitType1 D_80BCCB40 = {
    {0xA, 0, 9, 0x39, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x1B, 0x20, 0, {0, 0, 0}},
};
static ActorAnimationEntryS D_80BCCB6C[23] = {
    {(AnimationHeader *)0x6005488, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600B0B4, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6004AA0, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6004E38, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x60029E8, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6005CA8, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x60038CC, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6003CC0, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60012F4, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6004700, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6001BC8, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6003438, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6001E2C, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6000994, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6002268, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6002F08, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600577C, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60029E8, 1.0f, 8, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x60029E8, 1.0f, 4, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x60029E8, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6001BC8, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60012F4, -1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6002670, 1.0f, 0, 0xFFFF, 2, 0},
};
static ? D_80BCCCDC;                                /* unable to generate initializer */
static Vec3f D_80BCCCE4 = {0.0f, -0.5f, 0.0f};
static InitChainEntry D_80BCCCF0[4];                /* unable to generate initializer */

void func_80BCABF0(void *arg0) {
    void *sp34;
    ? sp28;
    ? sp1C;
    void *temp_v0;

    temp_v0 = Lib_SegmentedToVirtual(arg0->unk_4);
    sp34 = temp_v0;
    Math_Vec3s_ToVec3f((Vec3f *) &sp28, (Vec3s *) temp_v0);
    Math_Vec3s_ToVec3f((Vec3f *) &sp1C, sp34 + 6);
    Math_Vec3f_Yaw((Vec3f *) &sp28, (Vec3f *) &sp1C);
}

void func_80BCAC40(Actor *arg0, GlobalContext *arg1) {
    f32 sp64;
    ? sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 *temp_s1;
    s16 temp_s0;
    s16 phi_s0;

    sp60.unk_0 = (s32) arg0->world.pos.x;
    sp60.unk_4 = (s32) arg0->world.pos.y;
    sp60.unk_8 = (s32) arg0->world.pos.z;
    temp_s1 = &sp54;
    sp64 += 100.0f;
    phi_s0 = 0;
    do {
        sp54 = Rand_Centered() * 10.0f;
        sp58 = 2.0f * Rand_Centered();
        sp5C = Rand_Centered() * 10.0f;
        EffectSsHahen_Spawn(arg1, (Vec3f *) &sp60, (Vec3f *) temp_s1, &D_80BCCCE4, (s16) 0, (s16) 0x96, (s16) 1, (s16) 0x10, *(&D_80BCCCDC + ((phi_s0 & 1) * 4)));
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while ((s32) temp_s0 < 0x24);
}

void func_80BCAD64(Actor *arg0, s16 arg1) {
    f32 sp24;
    f32 temp_f2;
    f32 temp_f8;
    f32 phi_f16;

    arg1 = arg1;
    temp_f2 = arg0->speedXZ;
    sp24 = Math_CosS(arg0->world.rot.x) * temp_f2;
    if (arg1 != 1) {
        if (arg1 != 2) {
            if (arg1 != 3) {
                arg0->velocity.x = Math_SinS(arg0->world.rot.y) * sp24;
                arg0->velocity.y = Math_SinS(arg0->world.rot.x) * arg0->speedXZ;
                phi_f16 = Math_CosS(arg0->world.rot.y) * sp24;
                goto block_8;
            }
            arg0->velocity.x = 0.0f;
            arg0->velocity.y = 0.0f;
            arg0->velocity.z = 0.0f;
        } else {
            temp_f8 = Math_SinS(arg0->world.rot.y) * arg0->speedXZ;
            arg0->velocity.y = 0.0f;
            arg0->velocity.x = temp_f8;
            phi_f16 = Math_CosS(arg0->world.rot.y) * arg0->speedXZ;
block_8:
            arg0->velocity.z = phi_f16;
        }
    } else {
        arg0->velocity.y = temp_f2;
        arg0->velocity.x = 0.0f;
        arg0->velocity.z = 0.0f;
    }
    Actor_ApplyMovement(arg0);
}

void func_80BCAE78(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x2DC;
    if ((arg0->unk_328 & 4) != 0) {
        sp2C = temp_a2;
        Collider_UpdateCylinder(arg0, temp_a2);
        CollisionCheck_SetOC(arg1, arg1 + 0x18884, (Collider *) temp_a2);
    }
    if ((arg0->unk_328 & 2) != 0) {
        Actor_UpdateBgCheckInfo(arg1, arg0, 20.0f, 20.0f, 20.0f, 5U);
    }
}

s16 func_80BCAF0C(Actor *arg0) {
    u16 temp_v0;

    temp_v0 = arg0[2].colChkInfo.cylYShift;
    if (temp_v0 != 0) {
        if (temp_v0 != 0x162F) {
            if (temp_v0 != 0x1630) {
                if (temp_v0 != 0x1631) {
                    if (temp_v0 != 0x1633) {
                        return 0;
                    }
                    arg0->unk_358 = 0x64;
                    return 0x1634;
                }
                arg0->unk_358 = 0x96;
                return 0x1632;
            }
            return 0x1631;
        }
        return 0x1630;
    }
    if ((gSaveContext.weekEventReg[53] & 2) != 0) {
        arg0->unk_328 = (u16) (arg0->unk_328 | 1);
        return 0x1638;
    }
    return 0x162F;
}

void func_80BCAFA8(EnScopenuts *arg0, GlobalContext *arg1) {
    f32 sp1C;
    SkelAnime *temp_a0;
    Vec3f *temp_a1;

    temp_a1 = arg0 + 0x24;
    arg0 = arg0;
    func_80169474(arg1, temp_a1, (Vec3f *) &sp1C);
    if ((sp1C >= 130.0f) && (sp1C < 190.0f) && (sp20 >= 90.0f)) {
        temp_a0 = arg0 + 0x144;
        if (sp20 < 150.0f) {
            arg0->actor.draw = EnScopenuts_Draw;
            arg0->unk_348 = 0xA;
            arg0 = arg0;
            func_8013BC6C(temp_a0, D_80BCCB6C, 0xA);
            arg0->actionFunc = func_80BCB078;
        }
    }
}

void func_80BCB078(Actor *arg0, GlobalContext *arg1) {
    s16 sp32;
    s16 sp30;
    u8 *sp2C;
    s32 temp_v0;
    u8 *temp_t6;

    temp_t6 = arg0[2].colChkInfo.displacement.y;
    sp2C = temp_t6;
    if (temp_t6 != 0) {
        func_80BCC448(temp_t6, arg0[2].colChkInfo.displacement.z, arg0 + 0x24, &sp30);
        if ((arg0->bgCheckFlags & 8) != 0) {
            sp32 = arg0->wallYaw;
        }
        Math_SmoothStepToS(arg0 + 0x32, sp32, 0xA, 0x12C, (s16) 0);
        arg0->unk_33E = 0x1000;
        arg0->unk_340 = (s16) (arg0->unk_340 + 0x1C71);
        arg0->shape.rot.y = arg0->world.rot.y;
        arg0->world.rot.x = (s16) -(s32) sp30;
        if (func_80BCC2AC(arg0, arg0[2].colChkInfo.displacement.y, arg0[2].colChkInfo.displacement.z) != 0) {
            temp_v0 = arg0[2].colChkInfo.displacement.z;
            if (temp_v0 >= (*arg0[2].colChkInfo.displacement.y - 1)) {
                arg0->unk_2D8 = func_80BCB1C8;
                arg0->speedXZ = 0.0f;
                arg0->gravity = -1.0f;
                return;
            }
            arg0[2].colChkInfo.displacement.z = temp_v0 + 1;
            goto block_7;
        }
        goto block_7;
    }
block_7:
    if (arg0[2].colChkInfo.displacement.z >= (*arg0[2].colChkInfo.displacement.y - 2)) {
        Math_ApproachF(arg0 + 0x70, 1.5f, 0.2f, 1.0f);
    } else {
        Math_ApproachF(arg0 + 0x70, 5.0f, 0.2f, 1.0f);
    }
    Actor_SetVelocityAndMoveXYRotation(arg0);
}

void func_80BCB1C8(Actor *arg0, ? arg1) {
    arg0[2].shape.shadowDraw *= 0.92f;
    Actor_SetScale(arg0, arg0[2].shape.shadowDraw);
    if ((arg0->bgCheckFlags & 1) != 0) {
        gSaveContext.weekEventReg[52] |= 0x40;
        Actor_MarkForDeath(arg0);
    }
}

void func_80BCB230(Actor *arg0, GlobalContext *arg1) {
    s16 sp26;
    s16 sp24;
    f32 temp_f0;
    f32 temp_f6;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_v0;
    s16 phi_v0;
    s16 phi_v0_2;
    s16 phi_v0_3;
    s16 phi_v0_4;

    sp26 = (s16) (s32) arg0->unk_15C;
    sp24 = SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_80BCCB6C[arg0->unk_348].animationSeg);
    Math_ApproachS(arg0 + 0xBE, arg0->yawTowardsPlayer, 2, 0xE38);
    temp_f0 = arg0->yDistToPlayer;
    phi_v0 = 0;
    phi_v0_2 = 0;
    phi_v0_3 = 0;
    phi_v0_4 = 0;
    if ((temp_f0 < 50.0f) && (temp_f0 > -50.0f)) {
        phi_v0 = 1;
    }
    if (phi_v0 != 0) {
        if (arg0->xzDistToPlayer < 200.0f) {
            phi_v0_2 = 1;
        }
        if (phi_v0_2 != 0) {
            Audio_PlayActorSound2(arg0, 0x3987U);
            arg0->unk_2D8 = func_80BCB4DC;
            arg0->unk_348 = 3;
            arg0->unk_31E = 0x40;
            func_80BCAC40(arg0, arg1);
            func_8013BC6C((SkelAnime *) &arg0[1], D_80BCCB6C, 3);
            return;
        }
        goto block_8;
    }
block_8:
    if (sp26 == sp24) {
        temp_v0 = arg0->unk_348;
        if ((temp_v0 == 4) || (temp_v0 == 0x12)) {
            arg0->unk_348 = 0x11;
            arg0->unk_31E = 0;
            Audio_PlayActorSound2(arg0, 0x387DU);
            func_8013BC6C((SkelAnime *) &arg0[1], D_80BCCB6C, 0x11);
            return;
        }
        if (temp_v0 == 2) {
            arg0->unk_348 = 0x10;
            arg0->unk_31E = 0x20;
            Audio_PlayActorSound2(arg0, 0x387CU);
            func_8013BC6C((SkelAnime *) &arg0[1], D_80BCCB6C, 0x10);
            return;
        }
        if (temp_v0 == 0x11) {
            temp_v1 = arg0->unk_34E;
            if (temp_v1 == 0) {

            } else {
                arg0->unk_34E = (s16) (temp_v1 - 1);
                phi_v0_3 = arg0->unk_34E;
            }
            if (phi_v0_3 == 0) {
                temp_f6 = Rand_ZeroOne() * 10.0f;
                arg0->unk_348 = 2;
                arg0->unk_31E = 0x20;
                arg0->unk_34E = (s16) (s32) temp_f6;
                func_8013BC6C((SkelAnime *) &arg0[1], D_80BCCB6C, 2);
                return;
            }
            /* Duplicate return node #26. Try simplifying control flow for better match */
            return;
        }
        if (temp_v0 == 0x10) {
            temp_v1_2 = arg0->unk_34E;
            if (temp_v1_2 == 0) {

            } else {
                arg0->unk_34E = (s16) (temp_v1_2 - 1);
                phi_v0_4 = arg0->unk_34E;
            }
            if (phi_v0_4 == 0) {
                arg0->unk_34E = Rand_S16Offset(0x28, 0x28);
                arg0->unk_348 = 0x12;
                arg0->unk_31E = 0x20;
                func_8013BC6C((SkelAnime *) &arg0[1], D_80BCCB6C, 0x12);
            }
        }
        /* Duplicate return node #26. Try simplifying control flow for better match */
    }
}

void func_80BCB4DC(void *arg0, ? arg1) {
    if (arg0->unk_154 == arg0->unk_15C) {
        arg0->unk_2D8 = func_80BCB52C;
        func_8013BC6C(arg0 + 0x144, D_80BCCB6C, 0);
    }
}

void func_80BCB52C(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s16 temp_v0;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;

    Math_SmoothStepToS(arg0 + 0xBE, arg0->yawTowardsPlayer, 3, 0x7D0, (s16) 0);
    arg0->world.rot.y = arg0->shape.rot.y;
    if (func_800B84D0(arg0, arg1) != 0) {
        temp_v0 = func_80BCAF0C(arg0);
        arg0[2].colChkInfo.cylYShift = temp_v0;
        func_801518B0(arg1, temp_v0 & 0xFFFF, arg0);
        arg0->unk_2D8 = func_80BCB6D0;
        return;
    }
    temp_f2 = arg0->xzDistToPlayer;
    if (temp_f2 < 100.0f) {
        temp_f0 = arg0->yDistToPlayer;
        phi_v0 = 0;
        if ((temp_f0 < 50.0f) && (temp_f0 > -50.0f)) {
            phi_v0 = 1;
        }
        if (phi_v0 == 0) {
            goto block_7;
        }
        goto block_8;
    }
block_7:
    if (arg0->isTargeted != 0) {
block_8:
        func_800B8614(arg0, arg1, 100.0f);
        return;
    }
    temp_f0_2 = arg0->yDistToPlayer;
    phi_v0_2 = 0;
    phi_v0_3 = 0;
    if ((temp_f0_2 < 50.0f) && (temp_f0_2 > -50.0f)) {
        phi_v0_2 = 1;
    }
    if (phi_v0_2 != 0) {
        if (temp_f2 < 200.0f) {
            phi_v0_3 = 1;
        }
        if (phi_v0_3 == 0) {
            goto block_16;
        }
    } else {
block_16:
        arg0->unk_348 = 4;
        func_8013BC6C((SkelAnime *) &arg0[1], D_80BCCB6C, 4);
        arg0->unk_2D8 = func_80BCB230;
    }
}

void func_80BCB6D0(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0_3;
    u16 temp_v0_2;
    u8 temp_v0;
    u8 temp_v0_4;

    temp_v0 = func_80152498(arg1 + 0x4908);
    if (temp_v0 == 5) {
        if (func_80147624(arg1) != 0) {
            temp_v0_2 = arg0->unk_328;
            if ((temp_v0_2 & 1) != 0) {
                arg0->unk_328 = (u16) (temp_v0_2 & 0xFFFE);
                arg1->msgCtx.unk11F22 = 0x43;
                arg1->msgCtx.unk12023 = 4;
                arg0->flags &= -2;
                arg0->unk_328 = (u16) (arg0->unk_328 & 0xFFFB);
                arg0->unk_348 = 8;
                func_8013BC6C(arg0 + 0x144, D_80BCCB6C, 8);
                arg0->unk_2D8 = func_80BCBA00;
                return;
            }
            temp_v0_3 = func_80BCAF0C(arg0);
            arg0[2].colChkInfo.cylYShift = temp_v0_3;
            func_801518B0(arg1, temp_v0_3 & 0xFFFF, arg0);
            return;
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return;
    }
    if (temp_v0 == 4) {
        if (func_80147624(arg1) != 0) {
            temp_v0_4 = arg1->msgCtx.choiceIndex;
            if (temp_v0_4 != 0) {
                if (temp_v0_4 != 1) {
                    return;
                }
                func_8019F230();
                if (arg0->unk_358 == 0x96) {
                    arg0[2].colChkInfo.cylYShift = 0x1633;
                } else {
                    arg0[2].colChkInfo.cylYShift = 0x1635;
                    arg0->unk_328 = (u16) (arg0->unk_328 | 1);
                }
                func_801518B0(arg1, (u16) arg0[2].colChkInfo.cylYShift, arg0);
                return;
            }
            if ((s32) gSaveContext.rupees < (s32) arg0->unk_358) {
                play_sound(0x4806U);
                arg0[2].colChkInfo.cylYShift = 0x1636;
                arg0->unk_328 = (u16) (arg0->unk_328 | 1);
                func_801518B0(arg1, 0x1636 & 0xFFFF, arg0);
                return;
            }
            func_8019F208();
            arg1->msgCtx.unk11F22 = 0x43;
            arg1->msgCtx.unk12023 = 4;
            func_801159EC((s16) ((s32) arg0->unk_358 * -1));
            arg0->unk_2D8 = func_80BCB90C;
            return;
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return;
    }
    if (temp_v0 == 6) {
        func_800B85E0(arg0, arg1, 400.0f, -1);
        arg0->unk_2D8 = func_80BCB980;
    }
}

void func_80BCB90C(Actor *arg0, GlobalContext *arg1) {
    if (Actor_HasParent(arg0, arg1) != 0) {
        arg0->parent = NULL;
        gSaveContext.weekEventReg[53] |= 2;
        arg0->unk_2D8 = func_80BCB6D0;
        return;
    }
    func_800B8A1C(arg0, arg1, 0xC, 300.0f, 300.0f);
}

void func_80BCB980(Actor *arg0, GlobalContext *arg1) {
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0[2].colChkInfo.cylYShift = 0x1637;
        arg0->unk_328 = (u16) (arg0->unk_328 | 1);
        func_801518B0(arg1, 0x1637 & 0xFFFF, arg0);
        arg0->unk_2D8 = func_80BCB6D0;
        return;
    }
    func_800B85E0(arg0, arg1, 400.0f, -1);
}

void func_80BCBA00(Actor *arg0, GlobalContext *arg1) {
    s16 sp26;
    s16 sp24;
    u16 temp_t3;

    sp26 = (s16) (s32) arg0->unk_15C;
    sp24 = SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_80BCCB6C[arg0->unk_348].animationSeg);
    switch (sp26) {
    case 10:
        arg0[2].shape.unk_16 = 1;
        arg0[2].shape.feetPos[0].x = 0.1f;
        arg0[2].shape.feetPos[0].y = 0.1f;
        arg0[2].shape.feetPos[0].z = 0.1f;
        break;
    case 11:
    case 12:
        arg0[2].shape.feetPos[0].x += 0.15f;
        arg0[2].shape.feetPos[0].z += 0.15f;
        arg0[2].shape.feetPos[0].y += 0.32f;
        break;
    case 13:
        arg0[2].shape.feetPos[0].x = 0.55f;
        arg0[2].shape.feetPos[0].z = 0.55f;
        arg0[2].shape.feetPos[0].y = 1.05f;
        break;
    case 14:
        arg0[2].shape.feetPos[0].x = 1.0f;
        arg0[2].shape.feetPos[0].z = 1.0f;
        arg0[2].shape.feetPos[0].y = 2.0f;
        break;
    case 15:
    case 16:
        arg0[2].shape.feetPos[0].y -= 0.33f;
        break;
    case 17:
block_12:
        arg0[2].shape.feetPos[0].y = 1.0f;
        break;
    case 18:
    case 19:
        arg0[2].shape.feetPos[0].y += 0.27f;
        break;
    case 20:
        arg0[2].shape.unk_16 = 2;
        arg0[2].shape.feetPos[0].y = 1.8f;
        break;
    case 21:
    case 22:
    case 23:
        arg0[2].shape.feetPos[0].y -= 0.2f;
        break;
    case 24:
        goto block_12;
    }
    if (arg0->unk_36C == 0) {
        if (ActorCutscene_GetCanPlayNext(arg0[2].colChkInfo.cylRadius) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields(arg0[2].colChkInfo.cylRadius, arg0);
            arg0->unk_36C = 1;
            goto block_19;
        }
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        ActorCutscene_SetIntentToPlay(arg0[2].colChkInfo.cylRadius);
        return;
    }
block_19:
    if (sp26 == sp24) {
        arg0[2].shape.unk_16 = 3;
        arg0->unk_348 = 0x13;
        func_8013BC6C((SkelAnime *) &arg0[1], D_80BCCB6C, 0x13);
        Audio_PlayActorSound2(arg0, 0x387DU);
        temp_t3 = arg0->unk_328 & 0xFFFD;
        arg0->unk_328 = temp_t3;
        arg0->unk_34E = 0x32;
        arg0->unk_328 = (u16) (temp_t3 | 8);
        arg0->unk_2D8 = func_80BCBC60;
        arg0[2].colChkInfo.displacement.x = arg0->world.pos.y;
    }
}

void func_80BCBC60(void *arg0, GlobalContext *arg1) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 temp_f16;
    f32 temp_f4;
    f32 temp_f6;

    temp_f4 = arg0->unk_32C;
    temp_f6 = arg0->unk_28;
    arg0->unk_340 = (s16) (arg0->unk_340 + arg0->unk_34C);
    if ((arg0->unk_370 & 3) == 0) {
        sp18 = arg0->unk_24;
        sp1C = arg0->unk_32C;
        temp_f16 = arg0->unk_2C;
        sp24 = temp_f4 - temp_f6;
        arg0 = arg0;
        sp20 = temp_f16;
        func_800B14D4(arg1, 20.0f, (Vec3f *) &sp18);
    }
    if ((temp_f4 - temp_f6) > 5.0f) {
        arg0->unk_68 = 0.0f;
        arg0->unk_74 = 0.0f;
        arg0 = arg0;
        arg0->unk_372 = func_80BCABF0(arg0->unk_330);
        arg0->unk_2D8 = func_80BCBD28;
    }
}

void func_80BCBD28(Actor *arg0, GlobalContext *arg1) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    s16 sp42;
    s16 sp40;
    s16 sp38;
    Vec3f *sp30;
    Vec3f *temp_a2;
    f32 *temp_a2_2;
    s16 temp_v1;
    s16 phi_v0;

    sp42 = (s16) (s32) arg0->unk_15C;
    sp40 = SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_80BCCB6C[arg0->unk_348].animationSeg);
    temp_a2 = arg0 + 0x24;
    sp30 = temp_a2;
    func_80BCC448(arg0[2].colChkInfo.displacement.y, arg0[2].colChkInfo.displacement.z, temp_a2, &sp38);
    if (sp42 == sp40) {
        Math_SmoothStepToS(arg0 + 0x34C, 0x1C71, 3, 0x100, (s16) 0);
        arg0->unk_340 = (s16) (arg0->unk_340 + arg0->unk_34C);
        arg0->shape.yOffset = 1500.0f;
    }
    Math_SmoothStepToS(arg0 + 0xBE, arg0->unk_372, 3, 0x7D0, (s16) 0);
    temp_v1 = arg0->unk_34E;
    arg0->world.rot.y = arg0->shape.rot.y;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        arg0->unk_34E = (s16) (temp_v1 - 1);
        phi_v0 = arg0->unk_34E;
    }
    if (phi_v0 == 0) {
        if ((arg0->unk_370 & 3) == 0) {
            sp44.unk_0 = sp30->x;
            (&sp44)[1] = sp30->y;
            (&sp44)[2] = sp30->z;
            func_800B14D4(arg1, 20.0f, (Vec3f *) &sp44);
        }
        arg0->velocity.y = 5.0f;
    } else if ((arg0->unk_370 & 3) == 0) {
        temp_a2_2 = &sp44;
        sp44 = arg0->world.pos.x;
        sp48 = arg0[2].colChkInfo.displacement.x;
        sp4C = arg0->world.pos.z;
        func_800B14D4(arg1, 20.0f, (Vec3f *) temp_a2_2);
    }
    if ((arg0->home.pos.y + 22.5f) < arg0->world.pos.y) {
        arg0->unk_348 = 9;
        arg0[2].shape.feetPos[1].x = 0.3f;
        func_8013BC6C(arg0 + 0x144, D_80BCCB6C, 9);
        Audio_PlayActorSound2(arg0, 0x3987U);
        func_80BCAC40(arg0, arg1);
        arg0->unk_2D8 = func_80BCBF0C;
    }
}

void func_80BCBF0C(void *arg0, ? arg1) {
    f32 temp_f0;

    temp_f0 = arg0->unk_368;
    arg0->unk_340 = (s16) (arg0->unk_340 + arg0->unk_34C);
    if (temp_f0 >= 1.0f) {
        arg0->unk_368 = 1.0f;
        arg0->unk_68 = 5.0f;
    } else {
        arg0->unk_68 = 5.0f;
        arg0->unk_368 = (f32) (temp_f0 + 0.1f);
    }
    if ((arg0->unk_C + 50.0f) < arg0->unk_28) {
        Math_ApproachF(arg0 + 0x68, 0.0f, 0.2f, 1.0f);
        arg0->unk_348 = 0xA;
        func_8013BC6C(arg0 + 0x144, D_80BCCB6C, 0xA);
        arg0->unk_328 = (u16) (arg0->unk_328 | 2);
        arg0->unk_36E = 0;
        arg0->unk_2D8 = func_80BCBFFC;
    }
}

void func_80BCBFFC(Actor *arg0, ? arg1) {
    s16 sp3A;
    s16 sp38;
    f32 sp34;
    s16 sp32;
    u8 *sp2C;
    f32 temp_v0;
    s16 temp_v0_2;
    u8 *temp_t6;

    sp32 = 0;
    temp_t6 = arg0[2].colChkInfo.displacement.y;
    arg0->velocity.y = 0.0f;
    arg0->gravity = 0.0f;
    sp2C = temp_t6;
    if (temp_t6 != 0) {
        sp34 = func_80BCC448(temp_t6, arg0[2].colChkInfo.displacement.z, arg0 + 0x24, &sp38);
        if ((arg0->bgCheckFlags & 8) != 0) {
            sp3A = arg0->wallYaw;
        }
        if (arg0[2].colChkInfo.displacement.z < 6) {
            Math_SmoothStepToS(arg0 + 0x32, sp3A, 0xA, 0x12C, (s16) 0);
        } else {
            Math_SmoothStepToS(arg0 + 0x32, sp3A, 0xA, 0x5DC, (s16) 0);
        }
        arg0->unk_33E = 0x1000;
        arg0->unk_340 = (s16) (arg0->unk_340 + arg0->unk_34C);
        arg0->shape.rot.y = arg0->world.rot.y;
        arg0->world.rot.x = (s16) -(s32) sp38;
        if (func_80BCC2AC(arg0, arg0[2].colChkInfo.displacement.y, arg0[2].colChkInfo.displacement.z) != 0) {
            sp32 = 1;
        }
        if (sp34 < 10.0f) {
            if (sp32 == 1) {
                sp32 = 3;
            } else {
                sp32 = 2;
            }
        }
        if (sp32 == 3) {
            temp_v0 = arg0[2].colChkInfo.displacement.z;
            if ((bitwise s32) temp_v0 >= (*arg0[2].colChkInfo.displacement.y - 1)) {
                ActorCutscene_Stop(arg0[2].colChkInfo.cylRadius);
                gSaveContext.weekEventReg[52] &= 0xBF;
                arg0->unk_2D8 = func_80BCC288;
            } else {
                arg0[2].colChkInfo.displacement.z = (bitwise f32) ((bitwise s32) temp_v0 + 1);
            }
        }
    } else if (arg0->yDistToPlayer > 500.0f) {
        ActorCutscene_Stop(arg0[2].colChkInfo.cylRadius);
        arg0->unk_2D8 = func_80BCC288;
    }
    Math_ApproachF(&arg0->speedXZ, 1.0f, 0.2f, 1.0f);
    func_80BCAD64(arg0, sp32);
    temp_v0_2 = arg0->unk_36C;
    if (temp_v0_2 == 2) {
        if (ActorCutscene_GetCanPlayNext(arg0[2].colChkInfo.cylRadius) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields(arg0[2].colChkInfo.cylRadius, arg0);
            arg0->unk_36C = 3;
            goto block_25;
        }
        ActorCutscene_SetIntentToPlay(arg0[2].colChkInfo.cylRadius);
        return;
    }
    if ((temp_v0_2 == 1) && (arg0->unk_36E == 0x14)) {
        ActorCutscene_Stop(arg0[2].colChkInfo.cylRadius);
        arg0[2].colChkInfo.cylRadius = ActorCutscene_GetAdditionalCutscene(arg0[2].colChkInfo.cylRadius);
        ActorCutscene_SetIntentToPlay(arg0[2].colChkInfo.cylRadius);
        arg0->unk_36C = 2;
    }
block_25:
    arg0->unk_36E = (s16) (arg0->unk_36E + 1);
}

void func_80BCC288(Actor *arg0, ? arg1) {
    Actor_MarkForDeath(arg0);
}

s32 func_80BCC2AC(Actor *arg0, u8 *arg1, s32 arg2) {
    void *sp5C;
    s32 sp58;
    s32 sp50;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    ? sp30;
    s32 sp28;
    s32 temp_a3;
    u8 temp_a2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    f32 phi_f12;
    f32 phi_f14;

    temp_v0 = Lib_SegmentedToVirtual(arg1->unk_4);
    temp_a2 = arg1->unk_0;
    temp_a3 = arg2 * 6;
    sp50 = 0;
    sp28 = temp_a3;
    sp5C = temp_v0;
    sp58 = (s32) temp_a2;
    Math_Vec3s_ToVec3f((Vec3f *) &sp30, temp_a3 + temp_v0);
    if (arg2 == 0) {
        phi_f12 = (f32) (sp5C->unk_6 - sp5C->unk_0);
        phi_f14 = (f32) (sp5C->unk_A - sp5C->unk_4);
    } else {
        temp_v0_2 = sp5C + temp_a3;
        if (temp_a2 == (arg2 + 1)) {
            temp_v0_3 = sp5C + (temp_a2 * 6);
            phi_f12 = (f32) (temp_v0_3->unk_-6 - temp_v0_3->unk_-C);
            phi_f14 = (f32) (temp_v0_3->unk_-2 - temp_v0_3->unk_-8);
        } else {
            phi_f12 = (f32) (temp_v0_2->unk_6 - temp_v0_2->unk_-6);
            phi_f14 = (f32) (temp_v0_2->unk_A - temp_v0_2->unk_-2);
        }
    }
    func_8017B7F8((Vec3f *) &sp30, (s16) (s32) (func_80086B30(phi_f12, phi_f14) * 10430.378f), &sp44, &sp40, &sp3C);
    if (((arg0->world.pos.x * sp44) + (sp40 * arg0->world.pos.z) + sp3C) > 0.0f) {
        sp50 = 1;
    }
    return sp50;
}

f32 func_80BCC448(u8 *arg0, s32 arg1, Vec3f *arg2, s16 *arg3) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    s16 *temp_v1;

    if (arg0 != 0) {
        temp_v1 = (arg1 * 6) + Lib_SegmentedToVirtual(arg0->unk_4);
        sp20 = (f32) temp_v1->unk_0;
        sp24 = (f32) temp_v1[1];
        sp28 = (f32) temp_v1[2];
    }
    arg3[1] = Math_Vec3f_Yaw(arg2, (Vec3f *) &sp20);
    arg3->unk_0 = Math_Vec3f_Pitch(arg2, (Vec3f *) &sp20);
    return sp24 - arg2->y;
}

void EnScopenuts_Init(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a1_2;
    Path *temp_v0_2;
    SkelAnime *temp_a1;
    s16 temp_v1;
    s32 temp_v0;
    u16 temp_t5;
    EnScopenuts *this = (EnScopenuts *) thisx;

    if (((gSaveContext.weekEventReg[74] & 0x40) == 0) && (gSaveContext.inventory.items[0] == 0xFF)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    Actor_ProcessInitChain((Actor *) this, D_80BCCCF0);
    temp_a1 = &this->unk_144;
    sp34 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_0600AC70, &D_06005488, &this->unk_188, &this->unk_230, 0x1C);
    temp_a1_2 = &this->unk_2DC;
    sp30 = temp_a1_2;
    Collider_InitCylinder(globalCtx, temp_a1_2);
    Collider_SetCylinderType1(globalCtx, temp_a1_2, (Actor *) this, &D_80BCCB40);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 35.0f);
    this->unk_350 = 0.01f;
    Actor_SetScale((Actor *) this, 0.01f);
    temp_v1 = this->actor.params;
    temp_t5 = this->unk_328 | 2;
    this->unk_328 = temp_t5;
    temp_v0 = (s32) (temp_v1 & 0x3E0) >> 5;
    this->actor.colChkInfo.cylRadius = 0;
    this->actor.colChkInfo.mass = 0xFF;
    this->unk_328 = temp_t5 | 4;
    this->actor.speedXZ = 0.0f;
    if (temp_v0 == 0) {
        if ((gSaveContext.weekEventReg[52] & 0x40) != 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        if ((globalCtx->actorCtx.unk5 & 2) != 0) {
            this->unk_330 = func_8013D648(globalCtx, (s16) ((s32) (temp_v1 & 0xFC00) >> 0xA), 0x3F);
            this->actor.draw = NULL;
            this->actionFunc = func_80BCAFA8;
            this->actor.gravity = 0.0f;
            return;
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (temp_v0 == 1) {
        if ((gSaveContext.weekEventReg[52] & 0x40) != 0) {
            temp_v0_2 = func_8013D648(globalCtx, (s16) ((s32) (temp_v1 & 0xFC00) >> 0xA), 0x3F);
            this->unk_330 = temp_v0_2;
            if (temp_v0_2 == 0) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            this->actor.draw = EnScopenuts_Draw;
            this->unk_33C = 0;
            this->unk_358 = 0x96;
            this->unk_348 = 4;
            this->unk_35A = 0;
            this->actor.gravity = -1.0f;
            this->unk_338 = (s16) this->actor.cutscene;
            func_8013BC6C(sp34, D_80BCCB6C, 4);
            this->actionFunc = (void (*)(EnScopenuts *, GlobalContext *)) func_80BCB230;
            return;
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    Actor_MarkForDeath((Actor *) this);
}

void EnScopenuts_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnScopenuts *this = (EnScopenuts *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_2DC);
}

void EnScopenuts_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnScopenuts *this = (EnScopenuts *) thisx;
    Actor_SetHeight((Actor *) this, 60.0f);
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    this->actionFunc(this, globalCtx);
    if ((this->unk_328 & 8) != 0) {
        func_800B9010((Actor *) this, 0x3285U);
    }
    func_80BCAE78((Actor *) this, globalCtx);
}

s32 func_80BCC828(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    s16 temp_v0_2;
    s32 temp_v0;
    u16 temp_v0_3;

    temp_v0 = arg5->unk_348;
    if (((temp_v0 == 4) && (arg5[143].x == 0)) || ((temp_v0 == 8) && (arg5[143].x == 0)) || (temp_v0 == 0x12) || (temp_v0 == 2) || (temp_v0 == 3) || (temp_v0 == 0x11) || (temp_v0 == 0x10)) {
        if ((arg1 == 0x10) || (arg1 == 0x15) || (arg1 == 0x1B) || (arg1 == 0x17) || (arg1 == 0x18) || (arg1 == 0xF)) {
            goto block_37;
        }
    } else if ((temp_v0 == 8) || (temp_v0 == 0x13)) {
        temp_v0_2 = arg5[143].x;
        if (temp_v0_2 != 1) {
            if ((temp_v0_2 != 2) && (temp_v0_2 != 3)) {

            } else if ((arg1 == 0x10) || (arg1 == 0x15) || (arg1 == 0x1B) || (arg1 == 0xF) || (arg1 == 0x19)) {
                goto block_37;
            }
        } else if ((arg1 == 0x10) || (arg1 == 0x15) || (arg1 == 0x1B) || (arg1 == 0x19)) {
            goto block_37;
        }
    } else if (((temp_v0 == 9) || (temp_v0 == 0xA)) && ((arg1 == 0xF) || (arg1 == 0x19))) {
block_37:
        *arg2 = NULL;
    }
    if (arg1 == 0x1A) {
        temp_v0_3 = arg5[138].x;
        if ((temp_v0_3 == 0x162F) || (temp_v0_3 == 0x1630)) {
            *arg2 = &D_06001420;
        } else {
            *arg2 = &D_06008290;
        }
    }
    return 0;
}

void func_80BCC9CC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3) {

}

void func_80BCC9E4(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    f32 temp_f12;
    s16 temp_v0;
    s32 phi_a1;

    temp_v0 = arg2[2].shape.unk_16;
    if (((temp_v0 == 1) || (temp_v0 == 2)) && ((arg1 == 0x17) || (arg1 == 0x18))) {
        Matrix_Scale(arg2[2].shape.feetPos[0].x, arg2[2].shape.feetPos[0].y, arg2[2].shape.feetPos[0].z, 1);
    }
    phi_a1 = arg1;
    if ((arg2->unk_348 == 9) && ((arg1 == 0x10) || (arg1 == 0x15) || (arg1 == 0x1B))) {
        temp_f12 = arg2[2].shape.feetPos[1].x;
        arg1 = arg1;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        phi_a1 = arg1;
    }
    if (phi_a1 == 0x18) {
        Matrix_RotateY(arg2->unk_340, 1U);
    }
}

void EnScopenuts_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnScopenuts *this = (EnScopenuts *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    func_801343C0(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80BCC828, func_80BCC9CC, func_80BCC9E4, (Actor *) this);
}
