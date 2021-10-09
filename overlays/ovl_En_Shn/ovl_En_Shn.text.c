typedef struct EnShn {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnShn *, GlobalContext *);
    /* 0x148 */ SkelAnime unk148;                   /* inferred */
    /* 0x18C */ char pad18C[0x4C];                  /* maybe part of unk148[2]? */
    /* 0x1D8 */ u16 unk1D8;                         /* inferred */
    /* 0x1DA */ char pad1DA[0x2];
    /* 0x1DC */ s32 *unk1DC;                        /* inferred */
    /* 0x1E0 */ s32 unk1E0;                         /* inferred */
    /* 0x1E4 */ s32 unk1E4;                         /* inferred */
    /* 0x1E8 */ char pad1E8[0x12];                  /* maybe part of unk1E4[5]? */
    /* 0x1FA */ Vec3s unk1FA;                       /* inferred */
    /* 0x200 */ char pad200[0x5A];                  /* maybe part of unk1FA[16]? */
    /* 0x25A */ Vec3s unk25A;                       /* inferred */
    /* 0x260 */ char pad260[0x5E];                  /* maybe part of unk25A[16]? */
    /* 0x2BE */ s16 unk2BE;                         /* inferred */
    /* 0x2C0 */ char pad2C0[0xA];                   /* maybe part of unk2BE[6]? */
    /* 0x2CA */ s16 unk2CA;                         /* inferred */
    /* 0x2CC */ char pad2CC[0xC];                   /* maybe part of unk2CA[7]? */
    /* 0x2D8 */ void *unk2D8;                       /* inferred */
    /* 0x2DC */ char pad2DC[0x4];
    /* 0x2E0 */ s32 unk2E0;                         /* inferred */
    /* 0x2E4 */ char pad2E4[0x4];
    /* 0x2E8 */ s32 unk2E8;                         /* inferred */
    /* 0x2EC */ char pad2EC[0x4];
} EnShn;                                            /* size = 0x2F0 */

struct _mips2c_stack_EnShn_Destroy {};              /* size 0x0 */

struct _mips2c_stack_EnShn_Draw {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnShn_Init {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnShn_Update {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AE6130 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AE615C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AE61C0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AE625C {};              /* size 0x0 */

struct _mips2c_stack_func_80AE626C {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80AE63A8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AE6488 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AE65F4 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[0x2];
    /* 0x2A */ u16 sp2A;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AE6704 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AE6880 {};              /* size 0x0 */

struct _mips2c_stack_func_80AE68F0 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AE69E8 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AE6A64 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad2C[0xC];
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad38[0x10];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80AE6CF0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AE6D40 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AE6D90 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

? func_8013AD9C(s16, s16, void *, void *, s32, s32); /* extern */
void func_80AE6130(EnShn *arg0);                    /* static */
s32 func_80AE615C(EnShn *arg0, s32 arg1, u16);      /* static */
void func_80AE61C0(Actor *arg0);                    /* static */
s32 func_80AE625C(s32 arg0, void *arg1);            /* static */
void func_80AE626C(EnShn *arg0);                    /* static */
void func_80AE63A8(EnShn *arg0, GlobalContext *);   /* static */
void *func_80AE6488(Vec3s *arg0, GlobalContext *arg1, GlobalContext *); /* static */
? func_80AE65F4(EnShn *arg0, GlobalContext *arg1);  /* static */
s32 func_80AE6704(Actor *arg0, GlobalContext *arg1); /* static */
? *func_80AE6880(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80AE68F0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80AE6CF0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80AE6D40(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80AE6D90(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern Gfx D_0600B738;
extern FlexSkeletonHeader D_0600E7D0;
static ? D_80AE6F00;                                /* unable to generate initializer */
static ? D_80AE70B0;                                /* unable to generate initializer */
static ? D_80AE70B8;                                /* unable to generate initializer */
static ? D_80AE71C4;                                /* unable to generate initializer */
static ActorAnimationEntryS D_80AE7218[4] = {
    {(AnimationHeader *)0x600D9D0, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600D9D0, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x600E6C4, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600E6C4, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
};
static ? D_80AE7258;                                /* unable to generate initializer */
static Vec3f D_80AE7270 = {1200.0f, 0.0f, 0.0f};

void func_80AE6130(EnShn *arg0) {
    arg0->unk148.animPlaybackSpeed = arg0->unk2CC;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
}

s32 func_80AE615C(EnShn *arg0, s32 arg1) {
    SkelAnime *temp_a0;
    s32 temp_v1;
    s32 phi_v0;
    s32 phi_v1;

    temp_a0 = arg0 + 0x148;
    phi_v0 = 0;
    phi_v1 = 0;
    if (arg1 != arg0->unk2E8) {
        phi_v0 = 1;
    }
    if (phi_v0 != 0) {
        arg0->unk2E8 = arg1;
        arg0 = arg0;
        temp_v1 = func_8013BC6C(temp_a0, D_80AE7218, arg1);
        arg0->unk2CC = arg0->unk148.animPlaybackSpeed;
        phi_v1 = temp_v1;
    }
    return phi_v1;
}

void func_80AE61C0(Actor *arg0) {
    s16 temp_v0;
    s16 phi_v1;
    f32 phi_f0;

    temp_v0 = arg0->unk2C8;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk2C8 = (s16) (temp_v0 - 1);
        phi_v1 = arg0->unk2C8;
    }
    if (phi_v1 == 0) {
        arg0->unk2EC = (s32) (arg0->unk2EC ^ 1);
        arg0 = arg0;
        arg0->unk2C8 = Rand_S16Offset(0x1E, 0x1E);
    }
    if (arg0->unk2EC != 0) {
        phi_f0 = 120.0f;
    } else {
        phi_f0 = 80.0f;
    }
    Actor_IsActorFacingLinkAndWithinRange(arg0, phi_f0, 0x238C);
}

s32 func_80AE625C(s32 arg0, void *arg1) {
    return arg1->unk1CCC;
}

void func_80AE626C(EnShn *arg0) {
    f32 sp44;
    ? sp40;
    ? sp34;
    s16 temp_v0;
    s16 temp_v0_3;
    void *temp_v0_2;
    s16 phi_v1;
    s16 phi_v1_2;

    Math_Vec3f_Copy((Vec3f *) &sp40, arg0->unk1E4 + 0x24);
    Math_Vec3f_Copy((Vec3f *) &sp34, arg0 + 0x24);
    Math_ApproachS(arg0 + 0x2BC, (s16) (Math_Vec3f_Yaw((Vec3f *) &sp34, (Vec3f *) &sp40) - arg0->actor.shape.rot.y), 4, 0x2AA8);
    temp_v0 = arg0->unk2BC;
    if ((s32) temp_v0 < -0x1FFE) {
        arg0->unk2BC = -0x1FFE;
    } else {
        phi_v1 = temp_v0;
        if ((s32) temp_v0 >= 0x1FFF) {
            phi_v1 = 0x1FFE;
        }
        arg0->unk2BC = phi_v1;
    }
    Math_Vec3f_Copy((Vec3f *) &sp34, arg0 + 0x3C);
    temp_v0_2 = arg0->unk1E4;
    if (temp_v0_2->unk0 == 0) {
        sp44 = temp_v0_2->unkC44 + 3.0f;
    } else {
        Math_Vec3f_Copy((Vec3f *) &sp40, temp_v0_2 + 0x3C);
    }
    Math_ApproachS(arg0 + 0x2BA, Math_Vec3f_Pitch((Vec3f *) &sp34, (Vec3f *) &sp40), 4, 0x2AA8);
    temp_v0_3 = arg0->unk2BA;
    if ((s32) temp_v0_3 < -0x1554) {
        arg0->unk2BA = -0x1554;
        return;
    }
    phi_v1_2 = temp_v0_3;
    if ((s32) temp_v0_3 >= 0x1555) {
        phi_v1_2 = 0x1554;
    }
    arg0->unk2BA = phi_v1_2;
}

void func_80AE63A8(EnShn *arg0) {
    EnShn *temp_a0;
    s16 temp_v0_2;
    s16 temp_v0_4;
    s32 temp_v0;
    u16 temp_t2;
    u16 temp_t3;
    u16 temp_v0_3;
    s16 phi_v1;
    s16 phi_v1_2;

    temp_v0 = func_80AE625C();
    temp_a0 = arg0;
    temp_a0->unk1E4 = temp_v0;
    if (((temp_a0->unk1D8 & 8) != 0) && (temp_v0 != 0)) {
        temp_v0_2 = temp_a0->unk2CA;
        if (temp_v0_2 == 0) {
            phi_v1 = 0;
        } else {
            temp_a0->unk2CA = temp_v0_2 - 1;
            phi_v1 = temp_a0->unk2CA;
        }
        if (phi_v1 == 0) {
            arg0 = temp_a0;
            func_80AE626C(temp_a0);
            temp_t2 = arg0->unk1D8 & 0xFFDF;
            temp_t3 = temp_t2 | 0x10;
            arg0->unk1D8 = temp_t2;
            arg0->unk1D8 = temp_t3;
            return;
        }
        goto block_7;
    }
block_7:
    temp_v0_3 = temp_a0->unk1D8;
    if ((temp_v0_3 & 0x10) != 0) {
        temp_a0->unk1D8 = temp_v0_3 & 0xFFEF;
        temp_a0->unk2BA = 0;
        temp_a0->unk2BC = 0;
        temp_a0->unk2CA = 0x14;
        return;
    }
    temp_v0_4 = temp_a0->unk2CA;
    if (temp_v0_4 == 0) {
        phi_v1_2 = 0;
    } else {
        temp_a0->unk2CA = temp_v0_4 - 1;
        phi_v1_2 = temp_a0->unk2CA;
    }
    if (phi_v1_2 == 0) {
        temp_a0->unk1D8 |= 0x20;
    }
}

void *func_80AE6488(Vec3s *arg0, GlobalContext *arg1) {
    void *sp24;
    s32 sp20;
    f32 temp_f2;
    u16 temp_v0;
    u8 temp_v1;
    f32 phi_f0;
    f32 phi_f0_2;
    void *phi_v0;

    sp24 = arg1->actorCtx.actorList[2].first;
    temp_v1 = func_80152498(arg1 + 0x4908);
    if (arg0->unk2D0 != 0.0f) {
        phi_f0 = 40.0f;
    } else {
        phi_f0 = -40.0f;
    }
    arg0->unk2D4 = (f32) (arg0->unk2D4 + phi_f0);
    temp_f2 = arg0->unk2D4;
    if (temp_f2 < 0.0f) {
        arg0->unk2D4 = 0.0f;
    } else {
        if (temp_f2 > 80.0f) {
            phi_f0_2 = 80.0f;
        } else {
            phi_f0_2 = temp_f2;
        }
        arg0->unk2D4 = phi_f0_2;
    }
    arg1 = arg1;
    sp20 = (s32) temp_v1;
    SysMatrix_InsertTranslation(arg0->unk2D4, 0.0f, 0.0f, 1);
    phi_v0 = arg1 + 0x10000;
    if ((arg0 == sp24->unkA88) && ((temp_v0 = arg1->msgCtx.unk11F04, (((s32) temp_v0 < 0xFF) != 0)) || (phi_v0 = (void *)3, (((s32) temp_v0 < 0x201) == 0))) && (phi_v0 = (void *)3, phi_v0 = (void *)3, (temp_v1 == (void *)3)) && (phi_v0 = (void *)3, (arg0->unk2DC == (void *)3))) {
        if ((arg1->state.frames & 1) == 0) {
            if (arg0->unk2D0 != 0.0f) {
                phi_v0 = (void *)3;
                goto block_18;
            }
            arg0->unk2D0 = 1.0f;
        }
    } else {
block_18:
        arg0->unk2D0 = 0.0f;
    }
    arg0->unk2DC = (s32) temp_v1;
    return phi_v0;
}

? func_80AE65F4(EnShn *arg0, GlobalContext *arg1) {
    u16 sp2A;
    s32 sp24;
    u16 temp_a2;
    u16 temp_v0;
    u16 phi_a2;

    temp_a2 = arg1->msgCtx.unk11F04;
    phi_a2 = temp_a2;
    if ((arg1->actorCtx.actorList[2].first->unkA6C & 0x40) != 0) {
        if (temp_a2 != arg0->unk1DA) {
            temp_v0 = arg0->unk1D8;
            if (((temp_v0 & 0x80) != 0) || ((temp_v0 & 0x100) != 0)) {
                arg0->unk1D8 = temp_v0 | 8;
                sp2A = temp_a2;
                sp24 = (s32) temp_a2;
                func_80AE615C(arg0, 1, temp_a2);
            }
            phi_a2 = arg1->msgCtx.unk11F04;
            if (arg1->msgCtx.unk11F04 == 0x9C5) {
                arg0->unk1D8 |= 8;
                sp2A = arg1->msgCtx.unk11F04;
                func_80AE615C(arg0, 1, arg1->msgCtx.unk11F04);
                phi_a2 = arg1->msgCtx.unk11F04;
            }
        }
        arg0->unk1DA = phi_a2;
        arg0->unk1D8 |= 0x40;
    } else if ((arg0->unk1D8 & 0x40) != 0) {
        if ((gSaveContext.weekEventReg[23] & 8) == 0) {
            func_80AE615C(arg0, 3, temp_a2);
        }
        arg0->unk1DA = 0;
        arg0->unk1D8 &= 0xFFBF;
    }
    return 0;
}

s32 func_80AE6704(Actor *arg0, GlobalContext *arg1) {
    s32 sp18;
    Actor *temp_a1;
    s16 temp_a2;
    s32 phi_t0;

    temp_a2 = arg0->unk2C6;
    phi_t0 = 0;
    switch (temp_a2) {
    case 0:
        if ((*(gBitFlags + 0x64) & gSaveContext.inventory.questItems) == 0) {
            arg0->unk2C6 = 6;
            phi_t0 = 1;
        } else {
            arg0->unk2C6 = (s16) (temp_a2 + 1);
        }
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        arg0 = arg0;
        sp18 = 0;
        if (func_8013A4C4(*(&D_80AE7258 + (temp_a2 * 4))) != 0) {
            arg0->unk2C6 = 6;
            gSaveContext.inventory.questItems &= -1 - *(gBitFlags + 0x64);
            phi_t0 = 1;
        } else {
            arg0->unk2C6 = (s16) (arg0->unk2C6 + 1);
        }
        break;
    case 6:
        temp_a1 = arg0;
        gSaveContext.weekEventReg[90] &= 0xBF;
        arg0 = arg0;
        sp18 = 0;
        func_800B7298(arg1, temp_a1, 7U);
        arg1->nextEntranceIndex = 0x8460;
        gSaveContext.nextCutsceneIndex = 0;
        arg1->sceneLoadFlag = 0x14;
        arg1->unk_1887F = 3;
        gSaveContext.nextTransition = 7;
        arg0->unk2C6 = (s16) (arg0->unk2C6 + 1);
        break;
    }
    return phi_t0;
}

? *func_80AE6880(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    if (arg0->unk2BE != 0) {
        return &D_80AE70B0;
    }
    temp_v0 = arg0->unk1D8;
    if ((temp_v0 & 0x80) != 0) {
        arg0->unk2D8 = func_80AE6704;
        return &D_80AE70B8;
    }
    if ((temp_v0 & 0x100) != 0) {
        return &D_80AE71C4;
    }
    arg0->unk2D8 = func_80AE6704;
    return &D_80AE6F00;
}

s32 func_80AE68F0(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    s32 sp20;
    s8 temp_v0;
    u16 temp_t9;
    void *temp_a2;
    s32 phi_v1;

    temp_a2 = arg1->actorCtx.actorList[2].first;
    phi_v1 = 0;
    if ((arg0->unk1D8 & 7) != 0) {
        sp20 = 0;
        sp24 = temp_a2;
        phi_v1 = sp20;
        if (func_800B84D0(arg0, arg1) != 0) {
            temp_t9 = arg0->unk1D8 & ~0x180;
            arg0->unk1D8 = temp_t9;
            temp_v0 = temp_a2->unkA87;
            if (temp_v0 == 0x13) {
                arg0->unk1D8 = (u16) (temp_t9 | 0x80);
                arg0->unk2E4 = (s32) temp_a2->unkA87;
            } else if (temp_v0 != 0) {
                arg0->unk1D8 = (u16) (arg0->unk1D8 | 0x100);
                arg0->unk2E4 = (s32) temp_a2->unkA87;
            }
            func_8013AED4(arg0 + 0x1D8, 0U, 7U);
            arg0->unk1DC = func_80AE6880(arg0, arg1);
            arg0->unk2C6 = 0;
            phi_v1 = 1;
            if ((gSaveContext.weekEventReg[23] & 8) != 0) {
                arg0->unk1D8 = (u16) (arg0->unk1D8 | 8);
            }
            arg0->unk144 = func_80AE6A64;
        }
    }
    return phi_v1;
}

void func_80AE69E8(EnShn *this, GlobalContext *globalCtx) {
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.world.rot.y, 3, 0x2AA8);
    if (((gSaveContext.weekEventReg[23] & 8) != 0) && (func_80AE61C0((Actor *) this) != 0)) {
        this->unk1D8 |= 8;
        return;
    }
    this->unk1D8 &= 0xFFF7;
}

void func_80AE6A64(EnShn *this, GlobalContext *globalCtx) {
    ? sp38;
    ? sp2C;
    u16 temp_t9;
    void *temp_v0;

    if (func_8010BF58((Actor *) this, globalCtx, this->unk1DC, this->unk2D8, &this->unk1E0) != 0) {
        func_8013AED4(&this->unk1D8, 3U, 7U);
        temp_t9 = this->unk1D8 & 0xFFF7;
        this->unk1D8 = temp_t9;
        this->unk1D8 = temp_t9 | 0x20;
        this->unk2CA = 0x14;
        this->unk1E0 = 0;
        this->unk2BE = 0;
        this->actionFunc = func_80AE69E8;
        return;
    }
    temp_v0 = this->unk1E4;
    if (temp_v0 != 0) {
        Math_Vec3f_Copy((Vec3f *) &sp38, temp_v0 + 0x24);
        Math_Vec3f_Copy((Vec3f *) &sp2C, (Vec3f *) &this->actor.world);
        Math_ApproachS(&this->actor.shape.rot.y, Math_Vec3f_Yaw((Vec3f *) &sp2C, (Vec3f *) &sp38), 4, 0x2AA8);
    }
}

void EnShn_Init(EnShn *this, GlobalContext *globalCtx) {
    EnShn *this = (EnShn *) thisx;
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    SkelAnime_InitSV(globalCtx, &this->unk148, &D_0600E7D0, NULL, &this->unk1FA, &this->unk25A, 0x10);
    this->unk2E8 = -1;
    if ((gSaveContext.weekEventReg[23] & 8) != 0) {
        func_80AE615C(this, 0);
    } else {
        func_80AE615C(this, 2);
    }
    this->actor.targetMode = 6;
    Actor_SetScale((Actor *) this, 0.01f);
    this->unk2E0 = 0;
    this->unk2D8 = NULL;
    this->unk1D8 = 0;
    if (gSaveContext.entranceIndex != 0xA820) {
        func_8013AED4(&this->unk1D8, 3U, 7U);
        this->unk2BE = 0;
    } else {
        func_8013AED4(&this->unk1D8, 4U, 7U);
        this->unk2BE = 1;
    }
    this->actionFunc = func_80AE69E8;
}

void EnShn_Destroy(EnShn *this, GlobalContext *globalCtx) {
    EnShn *this = (EnShn *) thisx;

}

void EnShn_Update(EnShn *this, GlobalContext *globalCtx) {
    EnShn *this = (EnShn *) thisx;
    func_80AE68F0((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    func_80AE65F4(this, globalCtx);
    func_80AE6130(this);
    func_80AE63A8(this, globalCtx);
    this->unk2E0 = 0;
    func_8013C964((Actor *) this, globalCtx, 120.0f, 40.0f, 0, (s16) (this->unk1D8 & 7));
}

s32 func_80AE6CF0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg1 == 0xF) {
        func_80AE6488(arg5, arg0, arg0);
        *arg2 = &D_0600B738;
    }
    return 0;
}

void func_80AE6D40(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 0xF) {
        SysMatrix_MultiplyVector3fByState(&D_80AE7270, arg4 + 0x3C);
        Math_Vec3s_Copy(arg4 + 0x48, arg4 + 0x30);
    }
}

void func_80AE6D90(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    u16 temp_v0;
    s32 phi_v0;
    s32 phi_v1;

    temp_v0 = arg2->unk1D8;
    phi_v1 = 0;
    if ((temp_v0 & 0x20) == 0) {
        if ((temp_v0 & 0x10) != 0) {
            phi_v0 = 1;
            phi_v1 = 1;
        } else {
            phi_v0 = 1;
        }
    } else {
        phi_v0 = 0;
    }
    if (arg1 == 0xF) {
        func_8013AD9C((s16) (arg2->unk2BA + 0x4000), (s16) (arg2->unk2BC + arg2->shape.rot.y + 0x4000), arg2 + 0x1E8, arg2 + 0x1F4, phi_v0, phi_v1);
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(arg2->unk1E8, arg2->unk1EC, arg2->unk1F0, 0);
        Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
        Matrix_RotateY(arg2->unk1F6, 1U);
        SysMatrix_InsertXRotation_s(arg2->unk1F4, 1);
        SysMatrix_InsertZRotation_s(arg2->unk1F8, 1);
        SysMatrix_StatePush();
    }
}

void EnShn_Draw(EnShn *this, GlobalContext *globalCtx) {
    EnShn *this = (EnShn *) thisx;
    func_8012C5B0(globalCtx->state.gfxCtx);
    func_801343C0(globalCtx, this->unk148.skeleton, this->unk148.limbDrawTbl, (s32) this->unk148.dListCount, func_80AE6CF0, func_80AE6D40, func_80AE6D90, (Actor *) this);
}
