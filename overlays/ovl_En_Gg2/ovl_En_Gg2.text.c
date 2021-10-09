typedef struct EnGg2 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char pad_144[0x4C];
    /* 0x190 */ SkelAnime unk_190;                  /* inferred */
    /* 0x1D4 */ void (*actionFunc)(EnGg2 *, GlobalContext *);
    /* 0x1D8 */ Path *unk_1D8;                      /* inferred */
    /* 0x1DC */ char pad_1DC[0x4];
    /* 0x1E0 */ Vec3s unk_1E0;                      /* inferred */
    /* 0x1E6 */ Vec3s unk_1E6;                      /* inferred */
    /* 0x1EC */ Vec3s unk_1EC;                      /* inferred */
    /* 0x1F2 */ char pad_1F2[0x72];                 /* maybe part of unk_1EC[20]? */
    /* 0x264 */ Vec3s unk_264;                      /* inferred */
    /* 0x26A */ char pad_26A[0x7A];                 /* maybe part of unk_264[21]? */
    /* 0x2E4 */ s16 unk_2E4;                        /* inferred */
    /* 0x2E6 */ char pad_2E6[0x4];                  /* maybe part of unk_2E4[3]? */
    /* 0x2EA */ s16 unk_2EA;                        /* inferred */
    /* 0x2EC */ s16 unk_2EC;                        /* inferred */
    /* 0x2EE */ s16 unk_2EE;                        /* inferred */
    /* 0x2F0 */ u8 unk_2F0;                         /* inferred */
    /* 0x2F1 */ s8 unk_2F1;                         /* inferred */
    /* 0x2F2 */ s16 unk_2F2;                        /* inferred */
    /* 0x2F4 */ s16 unk_2F4;                        /* inferred */
    /* 0x2F6 */ s16 unk_2F6;                        /* inferred */
    /* 0x2F8 */ char pad_2F8[0x18];                 /* maybe part of unk_2F6[13]? */
} EnGg2;                                            /* size = 0x310 */

struct _mips2c_stack_EnGg2_Destroy {};              /* size 0x0 */

struct _mips2c_stack_EnGg2_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnGg2_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnGg2_Update {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B3AC50 {};              /* size 0x0 */

struct _mips2c_stack_func_80B3AC94 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80B3ADD8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B3AE60 {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B3AFB0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B3B05C {};              /* size 0x0 */

struct _mips2c_stack_func_80B3B0A0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B3B120 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ u8 *sp2C;                            /* inferred */
    /* 0x30 */ s16 sp30;                            /* inferred */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B3B21C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B3B294 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s16 sp30;                            /* inferred */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B3B4B0 {
    /* 0x00 */ char pad_0[0x5C];
    /* 0x5C */ s32 sp5C;                            /* inferred */
    /* 0x60 */ s32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80B3B5D4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B3B648 {
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

struct _mips2c_stack_func_80B3B7E4 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B3B8A4 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B3BD44 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B3BDC0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_80B3AC50(EnGg2 *arg0);                    /* static */
? func_80B3AC94(EnGg2 *arg0, GlobalContext *arg1);  /* static */
void func_80B3ADD8(EnGg2 *arg0);                    /* static */
void func_80B3AE60(void *arg0, ? arg1);             /* static */
void func_80B3AFB0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B3B05C(EnGg2 *arg0, GlobalContext *arg1); /* static */
void func_80B3B0A0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B3B120(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B3B21C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B3B294(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B3B4B0(EnGg2 *arg0, GlobalContext *arg1); /* static */
void func_80B3B5D4(Actor *arg0, ? arg1);            /* static */
s32 func_80B3B648(Actor *arg0, u8 *arg1, s32 arg2); /* static */
f32 func_80B3B7E4(u8 *arg0, s32 arg1, Vec3f *arg2, s16 *arg3); /* static */
void func_80B3B8A4(EnGg2 *arg0);                    /* static */
s32 func_80B3BD44(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor, Gfx **gfx); /* static */
void func_80B3BDC0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **gfx); /* static */
extern AnimationHeader D_0600F578;
extern FlexSkeletonHeader D_0600F6C0;
static ActorAnimationEntry D_80B3BF00[16] = {
    {(AnimationHeader *)0x600F578, 1.0f, 0.0f, 0.0f, 0, -10.0f},
    {(AnimationHeader *)0x600D528, 1.0f, 0.0f, 0.0f, 2, -10.0f},
    {(AnimationHeader *)0x600D174, 1.0f, 0.0f, 0.0f, 2, -10.0f},
    {(AnimationHeader *)0x600ECC0, 1.0f, 0.0f, 0.0f, 2, -10.0f},
    {(AnimationHeader *)0x600BAF0, 1.0f, 0.0f, 0.0f, 0, -10.0f},
    {(AnimationHeader *)0x600AF40, 1.0f, 0.0f, 0.0f, 0, -10.0f},
    {(AnimationHeader *)0x600F578, 1.0f, 0.0f, 0.0f, 0, -10.0f},
    {(AnimationHeader *)0x600AF40, 1.0f, 0.0f, 0.0f, 0, -10.0f},
    {(AnimationHeader *)0x600F578, 1.0f, 0.0f, 0.0f, 0, -10.0f},
    {(AnimationHeader *)0x60100C8, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600CDA0, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600B560, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600A4B4, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x600E86C, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x600D99C, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x600E2A4, 1.0f, 0.0f, 0.0f, 0, 0.0f},
};
static s32 D_80B3C080 = 0xFFFFFFFF;
static s32 D_80B3C084 = 0xFF9600FF;
static Vec3f D_80B3C088 = {0.0f, 0.0f, 0.0f};
static Vec3f D_80B3C094 = {0.0f, 0.0f, 0.0f};
static Vec3f D_80B3C0A0 = {1000.0f, 0.0f, 0.0f};
static ? D_80B3C0AC;                                /* unable to generate initializer */

void func_80B3AC50(EnGg2 *arg0) {
    arg0->actor.focus.pos.y = arg0->actor.world.pos.y + 80.0f;
    arg0->actor.focus.pos.x = arg0->actor.world.pos.x;
    arg0->actor.focus.pos.z = arg0->actor.world.pos.z;
    arg0->actor.focus.rot.x = arg0->actor.world.rot.x;
    arg0->actor.focus.rot.y = arg0->actor.world.rot.y;
    arg0->actor.focus.rot.z = arg0->actor.world.rot.z;
}

? func_80B3AC94(EnGg2 *arg0, GlobalContext *arg1) {
    f32 sp44;
    ? sp40;
    f32 sp38;
    ? sp34;
    f32 temp_f0;
    s16 temp_v0_2;
    void *temp_v0;
    s16 phi_v1;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    sp40.unk_0 = (s32) temp_v0->world.pos.x;
    sp40.unk_4 = (s32) temp_v0->world.pos.y;
    sp40.unk_8 = (s32) temp_v0->world.pos.z;
    sp44 = temp_v0->unk_C44 + 3.0f;
    sp34.unk_0 = (s32) arg0->actor.world.pos.x;
    sp34.unk_4 = (s32) arg0->actor.world.pos.y;
    sp34.unk_8 = (s32) arg0->actor.world.pos.z;
    sp38 += 70.0f;
    temp_f0 = arg0->actor.xzDistToPlayer;
    if ((temp_f0 < 250.0f) && (temp_f0 > 50.0f) && ((arg0->actor.flags & 0x80) == 0x80)) {
        Math_SmoothStepToS(arg0 + 0x2F4, Math_Vec3f_Pitch((Vec3f *) &sp34, (Vec3f *) &sp40), 4, 0x2AA8, (s16) 1);
    } else {
        Math_SmoothStepToS(arg0 + 0x2F4, 0, 4, 0x2AA8, (s16) 1);
    }
    temp_v0_2 = arg0->unk_2F4;
    if ((s32) temp_v0_2 < 0) {
        arg0->unk_2F4 = 0;
    } else {
        phi_v1 = temp_v0_2;
        if ((s32) temp_v0_2 >= 0x1C71) {
            phi_v1 = 0x1C70;
        }
        arg0->unk_2F4 = phi_v1;
    }
    return 1;
}

void func_80B3ADD8(EnGg2 *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->unk_2EC - 1;
    if ((s32) temp_v0 >= 3) {
        arg0->unk_2EA = 0;
        goto block_5;
    }
    if (temp_v0 == 0) {
        arg0->unk_2EA = 2;
        arg0->unk_2EC = (s32) (Rand_ZeroOne() * 60.0f) + 0x14;
        return;
    }
    arg0->unk_2EA = 1;
block_5:
    arg0->unk_2EC = temp_v0;
}

void func_80B3AE60(void *arg0, ? arg1) {
    s16 sp26;
    u16 temp_t2;

    sp26 = (s16) (s32) arg0->unk_1A8;
    if (sp26 == SkelAnime_GetFrameCount(*(D_80B3BF00 + (arg0->unk_2EE * 0x18)))) {
        temp_t2 = (u16) arg0->unk_2EE;
        switch (temp_t2) {
        case 0:
            arg0->unk_2EE = 1;
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B3BF00, 1);
            arg0->unk_1D4 = func_80B3B0A0;
            return;
        case 1:
        case 8:
            arg0->unk_2EE = 5;
            arg0->unk_4 = (s32) (arg0->unk_4 & ~1);
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B3BF00, 5);
            arg0->unk_1D4 = func_80B3B120;
            return;
        case 5:
            arg0->unk_2EE = 6;
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B3BF00, 0);
            arg0->unk_1D4 = func_80B3B21C;
            return;
        case 6:
            arg0->unk_2EE = 7;
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B3BF00, 5);
            arg0->unk_1D4 = func_80B3B294;
            return;
        default:
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B3BF00, 0);
            arg0->unk_1D4 = func_80B3AFB0;
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return;
        }
    }
}

void func_80B3AFB0(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    f32 temp_f0;

    temp_a0 = arg0;
    if (func_800B84D0(arg0, arg1) != 0) {
        temp_a0->unk_2F0 = 1;
        temp_a0->unk_1D4 = func_80B3AE60;
        return;
    }
    temp_f0 = temp_a0->xzDistToPlayer;
    if ((temp_f0 < 100.0f) && (temp_f0 > 50.0f) && ((temp_a0->flags & 0x80) == 0x80)) {
        arg0 = temp_a0;
        func_800B863C(temp_a0, arg1);
        arg0->textId = 0xCE4;
    }
}

void func_80B3B05C(EnGg2 *arg0, GlobalContext *arg1) {
    if ((arg0->actor.xzDistToPlayer < 100.0f) && ((arg0->actor.flags & 0x80) == 0x80)) {
        arg0->actionFunc = func_80B3B5D4;
    }
}

void func_80B3B0A0(Actor *arg0, GlobalContext *arg1) {
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        arg1->msgCtx.unk11F22 = 0x43;
        arg1->msgCtx.unk12023 = 4;
        arg0->unk_2F0 = 0;
        arg0->unk_1D4 = func_80B3B5D4;
    }
}

void func_80B3B120(Actor *arg0, GlobalContext *arg1) {
    s16 sp30;
    u8 *sp2C;
    s32 temp_v0;
    u8 *temp_t6;

    temp_t6 = arg0->unk_1D8;
    sp2C = temp_t6;
    if (temp_t6 != 0) {
        func_80B3B7E4(temp_t6, arg0->unk_1DC, arg0 + 0x24, &sp30);
        Math_SmoothStepToS(arg0 + 0x32, sp32, 4, 0x3E8, (s16) 1);
        arg0->shape.rot.y = arg0->world.rot.y;
        Math_SmoothStepToS(arg0 + 0xBC, sp30, 4, 0x3E8, (s16) 1);
        arg0->world.rot.x = (s16) -(s32) arg0->shape.rot.x;
        if (func_80B3B648(arg0, arg0->unk_1D8, arg0->unk_1DC) != 0) {
            temp_v0 = arg0->unk_1DC;
            if (temp_v0 >= (*arg0->unk_1D8 - 2)) {
                arg0->unk_1D4 = func_80B3AE60;
                arg0->speedXZ = 0.0f;
            } else {
                arg0->unk_1DC = (s32) (temp_v0 + 1);
            }
        }
        Math_ApproachF(arg0 + 0x70, 5.0f, 0.2f, 1.0f);
    }
}

void func_80B3B21C(Actor *arg0, GlobalContext *arg1) {
    s16 temp_a0;

    arg0->speedXZ = 0.0f;
    if ((arg0->xzDistToPlayer < 100.0f) && ((arg0->flags & 0x80) == 0x80)) {
        temp_a0 = arg0->unk_2E4;
        arg0 = arg0;
        arg0->unk_2E4 = ActorCutscene_GetAdditionalCutscene(temp_a0);
        arg0->unk_1D4 = func_80B3B5D4;
    }
}

void func_80B3B294(Actor *arg0, GlobalContext *arg1) {
    s16 sp30;
    s16 temp_v0;
    s16 temp_v0_3;
    s32 temp_v0_2;
    u8 *temp_a0;
    u8 temp_t0;
    u8 temp_t1;
    u8 temp_t1_2;
    u8 temp_t2;
    u8 temp_t2_2;
    u8 temp_t3;
    u8 temp_t4;
    u8 temp_t5;
    u8 temp_t6;
    u8 temp_t7;
    u8 temp_t8;
    u8 temp_t9;

    if (arg0->unk_2F1 == 0) {
        temp_v0 = arg1->sceneNum;
        if (temp_v0 == 0x4D) {
            temp_t0 = gSaveContext.weekEventReg[20] | 4;
            temp_t2 = temp_t0 & 0xF7;
            gSaveContext.weekEventReg[20] = temp_t0;
            gSaveContext.weekEventReg[20] = temp_t2;
            gSaveContext.weekEventReg[20] = temp_t2 & 0xEF;
        } else if (temp_v0 == 0x5D) {
            temp_t6 = gSaveContext.weekEventReg[20] & 0xFB;
            temp_t8 = temp_t6 | 8;
            gSaveContext.weekEventReg[20] = temp_t6;
            gSaveContext.weekEventReg[20] = temp_t8;
            gSaveContext.weekEventReg[20] = temp_t8 & 0xEF;
        } else if (temp_v0 == 0x50) {
            temp_t2_2 = gSaveContext.weekEventReg[20] & 0xFB;
            temp_t4 = temp_t2_2 & 0xF7;
            gSaveContext.weekEventReg[20] = temp_t2_2;
            gSaveContext.weekEventReg[20] = temp_t4;
            gSaveContext.weekEventReg[20] = temp_t4 | 0x10;
        }
        temp_a0 = arg0->unk_1D8;
        if (temp_a0 != 0) {
            func_80B3B7E4(temp_a0, arg0->unk_1DC, arg0 + 0x24, &sp30);
            Math_SmoothStepToS(arg0 + 0x32, sp32, 4, 0x3E8, (s16) 1);
            arg0->shape.rot.y = arg0->world.rot.y;
            Math_SmoothStepToS(arg0 + 0xBC, sp30, 4, 0x3E8, (s16) 1);
            arg0->world.rot.x = (s16) -(s32) arg0->shape.rot.x;
            if (func_80B3B648(arg0, arg0->unk_1D8, arg0->unk_1DC) != 0) {
                temp_v0_2 = arg0->unk_1DC;
                if (temp_v0_2 < (*arg0->unk_1D8 - 1)) {
                    arg0->unk_1DC = (s32) (temp_v0_2 + 1);
                } else {
                    arg0->unk_2F1 = 1U;
                    temp_v0_3 = arg1->sceneNum;
                    if (temp_v0_3 == 0x4D) {
                        temp_t9 = gSaveContext.weekEventReg[20] | 4;
                        temp_t1 = temp_t9 & 0xF7;
                        gSaveContext.weekEventReg[20] = temp_t9;
                        gSaveContext.weekEventReg[20] = temp_t1;
                        gSaveContext.weekEventReg[20] = temp_t1 & 0xEF;
                    } else if (temp_v0_3 == 0x5D) {
                        temp_t5 = gSaveContext.weekEventReg[20] & 0xFB;
                        temp_t7 = temp_t5 | 8;
                        gSaveContext.weekEventReg[20] = temp_t5;
                        gSaveContext.weekEventReg[20] = temp_t7;
                        gSaveContext.weekEventReg[20] = temp_t7 & 0xEF;
                    } else if (temp_v0_3 == 0x50) {
                        temp_t1_2 = gSaveContext.weekEventReg[20] & 0xFB;
                        temp_t3 = temp_t1_2 & 0xF7;
                        gSaveContext.weekEventReg[20] = temp_t1_2;
                        gSaveContext.weekEventReg[20] = temp_t3;
                        gSaveContext.weekEventReg[20] = temp_t3 | 0x10;
                    }
                }
            }
        }
    }
    Math_ApproachF(&arg0->speedXZ, 5.0f, 0.2f, 1.0f);
}

void func_80B3B4B0(EnGg2 *arg0, GlobalContext *arg1) {
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    s32 sp60;
    s32 sp5C;
    f32 *temp_s5;
    s32 temp_s0;
    s32 phi_s0;

    sp60 = D_80B3C080;
    temp_s5 = &sp64;
    sp5C = D_80B3C084;
    phi_s0 = 0;
    do {
        sp64 = (Rand_Centered() * 50.0f) + arg0->unk_304;
        sp68 = arg0->unk_308;
        sp6C = (Rand_Centered() * 50.0f) + arg0->unk_30C;
        EffectSsKiraKira_SpawnDispersed(arg1, (Vec3f *) temp_s5, &D_80B3C088, &D_80B3C094, (Color_RGBA8 *) &sp60, (Color_RGBA8 *) &sp5C, (s16) 0xBB8, 0x28);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 5);
}

void func_80B3B5D4(Actor *arg0, GlobalContext *arg1) {
    if (ActorCutscene_GetCanPlayNext(arg0->unk_2E4) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields(arg0->unk_2E4, arg0);
        arg0->unk_1D4 = func_80B3AE60;
        return;
    }
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
    }
    ActorCutscene_SetIntentToPlay(arg0->unk_2E4);
}

s32 func_80B3B648(Actor *arg0, u8 *arg1, s32 arg2) {
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

f32 func_80B3B7E4(u8 *arg0, s32 arg1, Vec3f *arg2, s16 *arg3) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    s16 *temp_v1;

    if (arg0 != 0) {
        temp_v1 = (arg1 * 6) + Lib_SegmentedToVirtual(arg0->unk_4);
        sp20 = (f32) temp_v1->unk_0;
        sp24 = (f32) temp_v1->unk_2;
        sp28 = (f32) temp_v1->unk_4;
    }
    arg3->unk_2 = Math_Vec3f_Yaw(arg2, (Vec3f *) &sp20);
    arg3->unk_0 = Math_Vec3f_Pitch(arg2, (Vec3f *) &sp20);
    return sp24 - arg2->y;
}

void func_80B3B8A4(EnGg2 *arg0) {
    f32 sp1C;
    f32 temp_f10;
    s16 temp_a0;
    s16 temp_v0;
    f32 phi_f2;

    temp_v0 = arg0->unk_2EE;
    if ((temp_v0 != 5) && (temp_v0 != 7)) {
        arg0->unk_2F2 += 0x62C;
        phi_f2 = 1100.0f;
    } else {
        arg0->unk_2F2 += 0x7BC;
        phi_f2 = 950.0f;
    }
    temp_a0 = arg0->unk_2F2;
    sp1C = phi_f2;
    arg0 = arg0;
    arg0->actor.shape.yOffset = Math_SinS(temp_a0) * phi_f2;
    temp_f10 = Math_SinS(arg0->unk_2F2) * 5.0f;
    arg0->unk_2F6 = arg0->actor.yawTowardsPlayer - arg0->actor.shape.rot.y;
    arg0->actor.shape.shadowScale = 30.0f - temp_f10;
}

void EnGg2_Init(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    s16 temp_a0;
    u8 temp_t1;
    u8 temp_t2;
    u8 temp_t3;
    u8 temp_t4;
    u8 temp_v0;
    u8 temp_v0_2;
    EnGg2 *this = (EnGg2 *) thisx;

    if (gSaveContext.inventory.items[gItemSlots[0x33]] == 0x33) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if ((gSaveContext.weekEventReg[91] & 0x10) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 30.0f);
    temp_a1 = &this->unk_190;
    this->actor.bgCheckFlags |= 0x400;
    sp30 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_0600F6C0, &D_0600F578, &this->unk_1EC, &this->unk_264, 0x14);
    this->unk_1D8 = func_8013D648(globalCtx, (s16) ((s32) (this->actor.params & 0xFC00) >> 0xA), 0x3F);
    this->actor.flags &= -0x81;
    this->unk_2F0 = 0;
    this->unk_2F1 = 0;
    this->unk_2F2 = 0;
    this->unk_2F4 = 0;
    this->unk_2F6 = 0;
    this->unk_2EC = 0x14;
    this->unk_2EA = 0;
    this->unk_2E4 = (s16) this->actor.cutscene;
    temp_a0 = globalCtx->sceneNum;
    if (temp_a0 == 0x4D) {
        temp_t2 = gSaveContext.weekEventReg[20] & 0xFB;
        temp_t4 = temp_t2 & 0xF7;
        gSaveContext.weekEventReg[20] = temp_t2;
        gSaveContext.weekEventReg[20] = temp_t4;
        gSaveContext.weekEventReg[20] = temp_t4 & 0xEF;
        this->unk_2EE = 0;
        func_800BDC5C(sp30, (ActorAnimationEntry []) D_80B3BF00, 0);
        this->actionFunc = (void (*)(EnGg2 *, GlobalContext *)) func_80B3AFB0;
        return;
    }
    if (temp_a0 == 0x5D) {
        temp_v0 = gSaveContext.weekEventReg[20];
        if (((temp_v0 & 4) != 0) && ((temp_v0 & 8) == 0) && ((temp_v0 & 0x10) == 0)) {
            gSaveContext.weekEventReg[20] = temp_v0 & 0xFB;
            this->unk_2EE = 8;
            func_800BDC5C(sp30, (ActorAnimationEntry []) D_80B3BF00, 0);
            this->actionFunc = func_80B3B05C;
            return;
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (temp_a0 == 0x50) {
        temp_v0_2 = gSaveContext.weekEventReg[20];
        if (((temp_v0_2 & 4) == 0) && ((temp_v0_2 & 8) != 0) && ((temp_v0_2 & 0x10) == 0)) {
            gSaveContext.weekEventReg[20] = temp_v0_2 & 0xF7;
            this->unk_2EE = 8;
            func_800BDC5C(sp30, (ActorAnimationEntry []) D_80B3BF00, 0);
            this->actionFunc = func_80B3B05C;
            return;
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_t1 = gSaveContext.weekEventReg[20] & 0xFB;
    temp_t3 = temp_t1 & 0xF7;
    gSaveContext.weekEventReg[20] = temp_t1;
    gSaveContext.weekEventReg[20] = temp_t3;
    gSaveContext.weekEventReg[20] = temp_t3 & 0xEF;
    Actor_MarkForDeath((Actor *) this);
}

void EnGg2_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnGg2 *this = (EnGg2 *) thisx;

}

void EnGg2_Update(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    u32 temp_t0;
    u32 temp_t4;
    u32 temp_t8;
    EnGg2 *this = (EnGg2 *) thisx;

    if (globalCtx->actorCtx.unk4 == 0x64) {
        temp_v0 = this->unk_2EE;
        temp_t8 = this->actor.flags | 0x80;
        this->actor.flags = temp_t8;
        temp_t0 = temp_t8 | 1;
        this->actor.flags = temp_t0;
        if ((temp_v0 == 5) && (temp_v0 == 7)) {
            this->actor.flags = temp_t0 & ~1;
        }
    } else {
        temp_t4 = this->actor.flags & ~0x80;
        this->actor.flags = temp_t4;
        this->actor.flags = temp_t4 & ~1;
    }
    this->actionFunc(this, globalCtx);
    func_80B3AC50(this);
    func_80B3AC94(this, globalCtx);
    Actor_SetVelocityAndMoveXYRotation((Actor *) this);
    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    func_80B3B8A4(this);
    func_800E9250(globalCtx, (Actor *) this, &this->unk_1E0, &this->unk_1E6, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
    temp_v0_2 = this->unk_2EE;
    if ((temp_v0_2 == 5) || (temp_v0_2 == 7)) {
        func_800B9010((Actor *) this, 0x3260U);
        if ((globalCtx->actorCtx.unk4 == 0x64) && ((globalCtx->state.frames & 3) == 0)) {
            func_80B3B4B0(this, globalCtx);
        }
    }
    func_80B3ADD8(this);
}

s32 func_80B3BD44(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    s16 temp_v0;

    temp_v0 = arg5->unk_2EE;
    if ((temp_v0 != 5) && (temp_v0 != 7)) {
        if (arg1 == 1) {
            arg1 = arg1;
            Matrix_RotateY(arg5->unk_2F6, 1U);
        }
        if (arg1 == 2) {
            SysMatrix_InsertZRotation_s(arg5->unk_2F4, 1);
        }
    }
    return 0;
}

void func_80B3BDC0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 4) {
        SysMatrix_MultiplyVector3fByState(&D_80B3C0A0, arg4 + 0x304);
    }
}

void EnGg2_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp30;
    Gfx *temp_v0;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    EnGg2 *this = (EnGg2 *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C2DC(temp_a0);
    if (((this->actor.flags & 0x80) == 0x80) || (this->unk_2F0 == 1)) {
        temp_v0 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060020;
        sp30 = temp_v0;
        sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80B3C0AC + (this->unk_2EA * 4)));
        temp_s1->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk_190.skeleton, this->unk_190.limbDrawTbl, (s32) this->unk_190.dListCount, func_80B3BD44, func_80B3BDC0, (Actor *) this, temp_s1->polyXlu.p);
    }
}
