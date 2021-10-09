typedef struct EnJgameTsn {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ SkelAnime unk_190;                  /* inferred */
    /* 0x1D4 */ void (*actionFunc)(EnJgameTsn *, GlobalContext *);
    /* 0x1D8 */ char pad_1D8[0x44];                 /* maybe part of actionFunc[18]? */
    /* 0x21C */ s32 unk_21C;                        /* inferred */
    /* 0x220 */ Vec3s unk_220;                      /* inferred */
    /* 0x226 */ char pad_226[0x60];                 /* maybe part of unk_220[17]? */
    /* 0x286 */ Vec3s unk_286;                      /* inferred */
    /* 0x28C */ char pad_28C[0x6C];                 /* maybe part of unk_286[19]? */
    /* 0x2F8 */ s16 unk_2F8;                        /* inferred */
    /* 0x2FA */ s16 unk_2FA;                        /* inferred */
    /* 0x2FC */ char pad_2FC[0x2];
    /* 0x2FE */ s16 unk_2FE;                        /* inferred */
    /* 0x300 */ char pad_300[0x4];                  /* maybe part of unk_2FE[3]? */
} EnJgameTsn;                                       /* size = 0x304 */

struct _mips2c_stack_EnJgameTsn_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnJgameTsn_Draw {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ GraphicsContext *sp40;               /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnJgameTsn_Init {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ColliderCylinder *sp34;              /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnJgameTsn_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C13A2C {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C13B74 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C13BB8 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C13E6C {};              /* size 0x0 */

struct _mips2c_stack_func_80C13E90 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C13F88 {};              /* size 0x0 */

struct _mips2c_stack_func_80C13F9C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C14030 {};              /* size 0x0 */

struct _mips2c_stack_func_80C14044 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C1410C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C1418C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C141DC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C14230 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C144E4 {};              /* size 0x0 */

struct _mips2c_stack_func_80C144F8 {};              /* size 0x0 */

struct _mips2c_stack_func_80C14540 {};              /* size 0x0 */

struct _mips2c_stack_func_80C14554 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C145FC {};              /* size 0x0 */

struct _mips2c_stack_func_80C14610 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C14684 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C1476C {};              /* size 0x0 */

struct _mips2c_stack_func_80C147B4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C14960 {};              /* size 0x0 */

struct _mips2c_stack_func_80C149B0 {
    /* 0x00 */ char pad_0[0x50];
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0xC];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_80C14BCC {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C14D14 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ColliderCylinder *sp1C;              /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C14D58 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C14E64 {};              /* size 0x0 */

struct _mips2c_stack_func_80C14EE4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_80C13A2C(EnJgameTsn *arg0, GlobalContext *arg1); /* static */
void func_80C13B74(EnJgameTsn *arg0);               /* static */
void func_80C13BB8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C13E6C(Actor *arg0);                    /* static */
void func_80C13E90(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C13F88(Actor *arg0);                    /* static */
void func_80C13F9C(Actor *arg0, ? arg1);            /* static */
void func_80C14030(Actor *arg0, s8);                /* static */
void func_80C14044(EnJgameTsn *arg0, GlobalContext *arg1); /* static */
void func_80C1410C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C1418C(void *arg1);                     /* static */
void func_80C141DC(void *arg0);                     /* static */
void func_80C14230(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C144E4(Actor *arg0);                    /* static */
void func_80C144F8(s32 arg0, void *arg1);           /* static */
void func_80C14540(Actor *arg0);                    /* static */
void func_80C14554(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C145FC(Actor *arg0, GlobalContext *);   /* static */
void func_80C14610(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C14684(EnJgameTsn *arg0, GlobalContext *arg1); /* static */
void func_80C1476C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C147B4(EnJgameTsn *arg0, GlobalContext *arg1); /* static */
s32 func_80C14960(s32 arg0, f32 arg1, f32 arg2, f32 arg3); /* static */
s32 func_80C149B0(GlobalContext *arg0, void *arg1); /* static */
s32 func_80C14BCC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C14D14(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C14D58(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80C14E64(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80C14EE4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern FlexSkeletonHeader D_06008AB8;
extern AnimationHeader D_060092FC;
static ActorAnimationEntry D_80C15030[3] = {
    {(AnimationHeader *)0x60092FC, 1.0f, 0.0f, 0.0f, 0, -6.0f},
    {(AnimationHeader *)0x6000964, 1.0f, 0.0f, 0.0f, 0, -6.0f},
    {(AnimationHeader *)0x6001198, 1.0f, 0.0f, 0.0f, 0, -6.0f},
};
static ColliderCylinderInit D_80C15078 = {
    {0xA, 0, 0x11, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x1E, 0x28, 0, {0, 0, 0}},
};
static ? D_80C150A4;                                /* unable to generate initializer */

void EnJgameTsn_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp34;
    ColliderCylinder *temp_a1;
    EnJgameTsn *this = (EnJgameTsn *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 36.0f);
    SkelAnime_InitSV(globalCtx, &this->unk_190, &D_06008AB8, &D_060092FC, &this->unk_220, &this->unk_286, 0x11);
    temp_a1 = &this->unk_144;
    sp34 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80C15078);
    this->actor.targetMode = 6;
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.velocity.y = 0.0f;
    if (gSaveContext.entranceIndex == 0x68D0) {
        this->actor.flags |= 0x10000;
    }
    this->unk_2F8 = 0;
    this->unk_2FA = 0;
    this->unk_21C = 0;
    this->unk_2FE = 0;
    func_80C13A2C(this, globalCtx);
    func_80C13B74(this);
}

void func_80C13A2C(Actor *arg0, GlobalContext *arg1) {
    s32 temp_s2;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *phi_s1;
    Actor *phi_s0;
    s32 phi_s2;

    temp_s1 = arg1->setupPathList + ((arg0->params & 0xFF) * 8);
    phi_s1 = temp_s1;
    if (temp_s1 == 0) {
        Actor_MarkForDeath(arg0);
    }
    phi_s0 = arg0;
    phi_s2 = 0;
    do {
        phi_s0->unk_1D8 = Lib_SegmentedToVirtual(phi_s1->unk_4);
        phi_s0->unk_1DC = (s32) phi_s1->unk_0;
        temp_s1_2 = arg1->setupPathList + (phi_s1->unk_1 * 8);
        phi_s1 = temp_s1_2;
        if (temp_s1_2 == 0) {
            Actor_MarkForDeath(arg0);
        }
        temp_s2 = phi_s2 + 8;
        phi_s0 += 8;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x20);
    arg0->unk_1F8 = Lib_SegmentedToVirtual(temp_s1_2->unk_4);
    arg0->unk_1FC = (s32) temp_s1_2->unk_0;
    temp_s1_3 = arg1->setupPathList + (temp_s1_2->unk_1 * 8);
    if (temp_s1_3 == 0) {
        Actor_MarkForDeath(arg0);
    }
    arg0->unk_200 = Lib_SegmentedToVirtual(temp_s1_3->unk_4);
    arg0->unk_204 = (s32) temp_s1_3->unk_0;
}

void EnJgameTsn_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnJgameTsn *this = (EnJgameTsn *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_144);
    gSaveContext.weekEventReg[90] &= 0xDF;
}

void func_80C13B74(EnJgameTsn *arg0) {
    func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80C15030, 0);
    arg0->actionFunc = func_80C13BB8;
}

void func_80C13BB8(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    u16 temp_v0_2;
    u32 temp_v0;

    sp2C = arg1->actorCtx.actorList[2].first;
    if (func_800B84D0(arg0, arg1) != 0) {
        temp_v0 = arg0->flags;
        if (temp_v0 & 0x10000) {
            arg0->flags = temp_v0 & 0xFFFEFFFF;
            if ((gSaveContext.unk_3E00 != 0) || (gSaveContext.unk_3E04 != 0)) {
                func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80C15030, 1);
                func_801518B0(arg1, 0x10A2U, arg0);
                arg0->unk_300 = 0x10A2;
            } else if ((s32) gSaveContext.minigameScore < 0x14) {
                func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80C15030, 1);
                func_801518B0(arg1, 0x10A2U, arg0);
                arg0->unk_300 = 0x10A2;
            } else {
                func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80C15030, 2);
                func_801518B0(arg1, 0x10A3U, arg0);
                arg0->unk_300 = 0x10A3;
            }
        } else {
            temp_v0_2 = gSaveContext.time;
            if ((((s32) temp_v0_2 >= 0x2AAB) && ((s32) temp_v0_2 < 0x4AAA)) || (((s32) temp_v0_2 >= 0xAAAB) && ((s32) temp_v0_2 < 0xCAAA))) {
                func_801518B0(arg1, 0x1094U, arg0);
                arg0->unk_300 = 0x1094;
            } else if (arg0->unk_2F8 == 0) {
                arg0->unk_2F8 = 1;
                func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80C15030, 1);
                func_801518B0(arg1, 0x1095U, arg0);
                arg0->unk_300 = 0x1095;
            } else {
                func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80C15030, 1);
                func_801518B0(arg1, 0x1096U, arg0);
                arg0->unk_300 = 0x1096;
            }
        }
        func_80C14030(arg0);
    } else if (arg0->flags & 0x10000) {
        func_800B8614(arg0, arg1, 200.0f);
    } else {
        func_800B8614(arg0, arg1, 80.0f);
    }
    if (((sp2C->bgCheckFlags & 1) != 0) && ((sp2C->unk_A6C & 0x2000) == 0) && (arg0->unk_2FE == 0) && (gSaveContext.playerForm == 4) && (func_80C149B0(arg1, arg0 + 0x1F8) != 0)) {
        arg0->unk_2FE = 1;
        func_80C13E6C(arg0);
    } else if ((sp2C->bgCheckFlags & 1) == 0) {
        arg0->unk_2FE = 0;
    }
    Math_SmoothStepToS(&arg0->shape.rot.y, arg0->home.rot.y, 5, 0x71C, (s16) 0xB6);
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_80C13E6C(Actor *arg0) {
    arg0->flags |= 0x10000;
    arg0->unk_1D4 = func_80C13E90;
}

void func_80C13E90(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->flags &= 0xFFFEFFFF;
        temp_v0 = gSaveContext.time;
        if ((((s32) temp_v0 >= 0x2AAB) && ((s32) temp_v0 < 0x4AAA)) || (((s32) temp_v0 >= 0xAAAB) && ((s32) temp_v0 < 0xCAAA))) {
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80C15030, 2);
            func_801518B0(arg1, 0x1094U, arg0);
            arg0->unk_300 = 0x1094;
        } else {
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80C15030, 1);
            func_801518B0(arg1, 0x1098U, arg0);
            arg0->unk_300 = 0x1098;
        }
        func_80C14030(arg0);
        return;
    }
    func_800B8614(arg0, arg1, 1000.0f);
}

void func_80C13F88(Actor *arg0) {
    arg0->unk_1D4 = func_80C13F9C;
}

void func_80C13F9C(Actor *arg0, ? arg1) {
    s8 temp_a1;

    temp_a1 = arg0->cutscene;
    if (temp_a1 != -1) {
        if (ActorCutscene_GetCanPlayNext((s16) temp_a1) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
            func_80C14030(arg0);
            return;
        }
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
        return;
    }
    func_80C14030(arg0, temp_a1);
}

void func_80C14030(Actor *arg0) {
    arg0->unk_1D4 = func_80C14044;
}

void func_80C14044(EnJgameTsn *arg0, GlobalContext *arg1) {
    s8 temp_a0;
    u32 temp_v0;

    temp_v0 = func_80152498(arg1 + 0x4908);
    switch (temp_v0) {
    case 4:
        func_80C14684(arg0, arg1);
        break;
    case 5:
        func_80C147B4(arg0, arg1);
        break;
    case 6:
        if (func_80147624(arg1) != 0) {
            temp_a0 = arg0->actor.cutscene;
            if (ActorCutscene_GetCurrentIndex() == temp_a0) {
                ActorCutscene_Stop((s16) temp_a0);
            }
            func_80C13B74(arg0);
        }
        break;
    }
    Math_SmoothStepToS(&arg0->actor.shape.rot.y, arg0->actor.yawTowardsPlayer, 5, 0x71C, (s16) 0xB6);
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
}

void func_80C1410C(Actor *arg0, GlobalContext *arg1) {
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_v0->unk_A6C = (s32) (temp_v0->unk_A6C | 0x20);
    func_801A2BB8(0x25);
    arg1->interfaceCtx.unk_280 = 1;
    func_80112AFC(arg1);
    gSaveContext.weekEventReg[90] |= 0x20;
    func_8010E9F0(4, 0x78);
    arg0->unk_1D4 = func_80C1418C;
}

void func_80C1418C(void *arg1) {
    void *sp1C;
    void *temp_v0;

    temp_v0 = arg1->unk_1CCC;
    if (arg1->unk_16C68 == 8) {
        sp1C = temp_v0;
        func_80C141DC();
        temp_v0->unk_A6C = (s32) (temp_v0->unk_A6C & ~0x20);
    }
}

void func_80C141DC(void *arg0) {
    s32 temp_t6;
    s32 temp_v1;
    u8 *temp_a0;

    arg0 = arg0;
    temp_v1 = Rand_Next() & 3;
    temp_t6 = temp_v1 * 4;
    arg0->unk_218 = temp_v1;
    arg0->unk_2FC = 0;
    temp_a0 = (arg0 + temp_t6)->unk_208;
    *temp_a0 |= 1;
    arg0->unk_1D4 = func_80C14230;
}

void func_80C14230(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    s32 temp_a0;
    u16 temp_v0_8;
    u32 temp_v1;
    u8 *temp_v0;
    u8 *temp_v0_10;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v0_5;
    u8 *temp_v0_6;
    u8 *temp_v0_7;
    u8 *temp_v0_9;
    s32 phi_a0;
    Actor *phi_v1;

    sp24 = arg1->actorCtx.actorList[2].first;
    if (((s32) arg0->unk_2FC >= 0x65) || (func_80C14BCC(arg0, arg1) != 0)) {
        temp_v1 = Rand_Next() % 3U;
        arg0->unk_2FC = 0;
        phi_a0 = 0;
        if ((s32) temp_v1 < arg0->unk_218) {
            arg0->unk_218 = (s32) temp_v1;
        } else {
            arg0->unk_218 = (s32) (temp_v1 + 1);
        }
        phi_v1 = arg0;
        do {
            if (phi_a0 == arg0->unk_218) {
                temp_v0 = phi_v1->unk_208;
                *temp_v0 |= 1;
                temp_v0_2 = phi_v1->unk_208;
                *temp_v0_2 &= -9;
            } else {
                temp_v0_3 = phi_v1->unk_208;
                *temp_v0_3 |= 8;
            }
            temp_a0 = phi_a0 + 2;
            phi_a0 = temp_a0;
            if ((phi_a0 + 1) == arg0->unk_218) {
                temp_v0_4 = phi_v1->unk_20C;
                *temp_v0_4 |= 1;
                temp_v0_5 = phi_v1->unk_20C;
                *temp_v0_5 &= -9;
            } else {
                temp_v0_6 = phi_v1->unk_20C;
                *temp_v0_6 |= 8;
            }
            phi_v1 += 8;
        } while (temp_a0 != 4);
    }
    arg0->unk_2FC = (s16) (arg0->unk_2FC + 1);
    if (((sp24->bgCheckFlags & 2) != 0) && (func_80C149B0(arg1, arg0 + 0x200) != 0)) {
        func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80C15030, 2);
        func_801518B0(arg1, 0x109FU, arg0);
        arg0->unk_300 = 0x109F;
        sp24->unk_A6C = (s32) (sp24->unk_A6C | 0x20);
        temp_v0_7 = (arg0 + (arg0->unk_218 * 4))->unk_208;
        *temp_v0_7 &= 0xFFFE;
        func_801A2C20();
        func_80C14030(arg0);
    } else {
        temp_v0_8 = sp24->bgCheckFlags;
        if (((temp_v0_8 & 0x40) != 0) || ((temp_v0_8 & 0x20) != 0)) {
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80C15030, 2);
            func_801518B0(arg1, 0x10A0U, arg0);
            arg0->unk_300 = 0x10A0;
            sp24->unk_A6C = (s32) (sp24->unk_A6C | 0x20);
            temp_v0_9 = (arg0 + (arg0->unk_218 * 4))->unk_208;
            *temp_v0_9 &= 0xFFFE;
            func_801A2C20();
            func_80C14030(arg0);
        }
    }
    if ((gSaveContext.unk_3DE0[4] == 0) && (*(&gSaveContext + 0x3E04) == 0)) {
        func_801518B0(arg1, 0x10A1U, arg0);
        arg0->unk_300 = 0x10A1;
        sp24->unk_A6C = (s32) (sp24->unk_A6C | 0x20);
        temp_v0_10 = (arg0 + (arg0->unk_218 * 4))->unk_208;
        *temp_v0_10 &= 0xFFFE;
        func_801A2C20();
        func_80C14030(arg0);
    }
}

void func_80C144E4(Actor *arg0) {
    arg0->unk_1D4 = func_80C144F8;
}

void func_80C144F8(s32 arg0, void *arg1) {
    arg1->unk_1887A = 0x68D0;
    arg1->unk_18875 = 0x14;
    arg1->unk_1887F = 0x50;
    gSaveContext.nextTransition = 3;
}

void func_80C14540(Actor *arg0) {
    arg0->unk_1D4 = func_80C14554;
}

void func_80C14554(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    if (Actor_HasParent(arg0, arg1) != 0) {
        temp_v0 = gSaveContext.weekEventReg[82];
        if ((temp_v0 & 0x10) == 0) {
            gSaveContext.weekEventReg[82] = temp_v0 | 0x10;
        }
        func_80C145FC(arg0, arg1);
        return;
    }
    if ((gSaveContext.weekEventReg[82] & 0x10) != 0) {
        func_800B8A1C(arg0, arg1, 5, 500.0f, 100.0f);
        return;
    }
    func_800B8A1C(arg0, arg1, 0xC, 500.0f, 100.0f);
}

void func_80C145FC(Actor *arg0) {
    arg0->unk_1D4 = func_80C14610;
}

void func_80C14610(Actor *arg0, GlobalContext *arg1) {
    if (func_800B84D0(arg0, arg1) != 0) {
        func_801518B0(arg1, 0x10A4U, arg0);
        arg0->unk_300 = 0x10A4;
        func_80C14030(arg0);
        return;
    }
    func_800B85E0(arg0, arg1, 200.0f, -1);
}

void func_80C14684(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0;

    temp_a0 = arg1;
    arg1 = arg1;
    if (func_80147624(temp_a0) != 0) {
        if (arg1->msgCtx.choiceIndex == 0) {
            if ((s32) gSaveContext.rupees >= 0x14) {
                func_801518B0(arg1, 0x109EU, arg0);
                arg0->unk_300 = 0x109E;
                func_801159EC(-0x14);
                return;
            }
            arg1 = arg1;
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80C15030, 2);
            func_801518B0(arg1, 0x109DU, arg0);
            arg0->unk_300 = 0x109D;
            return;
        }
        arg1 = arg1;
        func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80C15030, 2);
        func_801518B0(arg1, 0x109CU, arg0);
        arg0->unk_300 = 0x109C;
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_80C1476C(Actor *arg0, GlobalContext *arg1) {
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;

    temp_v0 = arg1->actorCtx.actorList[6].first;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        do {
            if (phi_v0->id == 0x293) {
                (arg0 + ((phi_v0->params & 0x7F) * 4))->unk_208 = (void *) (phi_v0 + 0xB7);
            }
            temp_v0_2 = phi_v0->next;
            phi_v0 = temp_v0_2;
        } while (temp_v0_2 != 0);
    }
}

void func_80C147B4(Actor *arg0, GlobalContext *arg1) {
    s8 temp_a0;
    u16 temp_t6;

    if (func_80147624(arg1) != 0) {
        temp_t6 = arg0->unk_300;
        switch (temp_t6) {
        case 4245:
            func_801518B0(arg1, 0x1096U, arg0);
            arg0->unk_300 = 0x1096U;
            return;
        case 4246:
            func_801518B0(arg1, 0x1097U, arg0);
            arg0->unk_300 = 0x1097U;
            return;
        case 4248:
            func_801518B0(arg1, 0x1099U, arg0);
            arg0->unk_300 = 0x1099U;
            func_80C13F88(arg0);
            return;
        case 4249:
            func_801518B0(arg1, 0x109AU, arg0);
            arg0->unk_300 = 0x109AU;
            return;
        case 4250:
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80C15030, 0);
            func_801518B0(arg1, 0x109BU, arg0);
            arg0->unk_300 = 0x109BU;
            return;
        case 4254:
            temp_a0 = arg0->cutscene;
            if (ActorCutscene_GetCurrentIndex() == temp_a0) {
                ActorCutscene_Stop((s16) temp_a0);
            }
            func_801477B4(arg1);
            func_80C1476C(arg0, arg1);
            func_80C1410C(arg0, arg1);
            return;
        case 4255:
        case 4256:
        case 4257:
            func_801477B4(arg1);
            gSaveContext.minigameState = 3;
            gSaveContext.unk_3DD0[4] = 5;
            gSaveContext.weekEventReg[90] &= 0xDF;
            func_80C144E4(arg0);
            return;
        case 4259:
            func_801477B4(arg1);
            func_80C14540(arg0);
            func_80C14554(arg0, arg1);
            /* Duplicate return node #13. Try simplifying control flow for better match */
            return;
        }
    } else {
    default:
    }
}

s32 func_80C14960(s32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    s32 phi_v1;

    phi_v1 = -1;
    if ((arg2 * arg1) < ((bitwise f32) arg0 * arg3)) {
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80C149B0(GlobalContext *arg0, void *arg1) {
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    s32 sp58;
    s32 sp50;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 temp_f20;
    f32 temp_f22;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s3;
    void *temp_v0;
    s32 phi_s0;
    s32 phi_s2;
    s32 phi_v0;
    s32 phi_s0_2;

    temp_s4 = &sp64;
    temp_s5 = &sp5C;
    temp_v0 = arg0->actorCtx.actorList[2].first;
    sp58 = 1;
    sp50 = 0;
    temp_f20 = temp_v0->world.pos.z;
    temp_f22 = temp_v0->world.pos.x;
    sp64 = (f32) arg1->unk_0->unk_4 - temp_f20;
    sp68 = (f32) arg1->unk_0->unk_0 - temp_f22;
    sp5C = (f32) arg1->unk_0->unk_A - temp_f20;
    sp60 = (f32) arg1->unk_0->unk_6 - temp_f22;
    temp_s3 = func_80C14960((bitwise s32) temp_s4->unk_0, temp_s4->unk_4, temp_s5->unk_0, temp_s5->unk_4);
    phi_s0 = 1;
    phi_s2 = sp50 * 6;
loop_1:
    temp_s2 = phi_s2 + 6;
    temp_s0 = phi_s0 + 1;
    phi_s2 = temp_s2;
    phi_v0 = 0;
    phi_s0_2 = temp_s0;
    if (phi_s0 < (arg1->unk_4 - 1)) {
        phi_v0 = temp_s0 * 6;
    } else {
        phi_s0_2 = 0;
    }
    sp64 = (f32) (arg1->unk_0 + temp_s2)->unk_4 - temp_f20;
    sp68 = (f32) *(arg1->unk_0 + temp_s2) - temp_f22;
    sp5C = (f32) (arg1->unk_0 + phi_v0)->unk_4 - temp_f20;
    sp60 = (f32) *(arg1->unk_0 + phi_v0) - temp_f22;
    phi_s0 = phi_s0_2;
    if (func_80C14960((bitwise s32) temp_s4->unk_0, temp_s4->unk_4, temp_s5->unk_0, temp_s5->unk_4) != temp_s3) {
        sp58 = 0;
    } else if (phi_s0_2 != 0) {
        goto loop_1;
    }
    return sp58;
}

s32 func_80C14BCC(Actor *arg0, GlobalContext *arg1) {
    s32 temp_s0;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *temp_v1_3;
    u8 temp_v0;
    void *temp_s0_2;
    void *phi_s1;
    s32 phi_s0;
    s32 phi_s3;

    phi_s1 = arg0 + 0x1D8;
    phi_s0 = 0;
    phi_s3 = -1;
    if ((arg1->actorCtx.actorList[2].first->unk_90 & 2) != 0) {
        do {
            if (func_80C149B0(arg1, phi_s1) != 0) {
                phi_s3 = phi_s0;
            }
            temp_s0 = phi_s0 + 1;
            phi_s1 += 8;
            phi_s0 = temp_s0;
        } while (temp_s0 != 4);
        if (phi_s3 == -1) {
            goto block_11;
        }
        temp_s0_2 = arg0 + (phi_s3 * 4);
        if (phi_s3 == arg0->unk_218) {
            Audio_PlayActorSound2(arg0, 0x4807U);
            temp_v1 = (arg0 + (phi_s3 * 4))->unk_208;
            *temp_v1 |= 2;
            arg1->interfaceCtx.unk_25C = 1;
            return 1;
        }
        temp_v1_2 = temp_s0_2->unk_208;
        temp_v0 = *temp_v1_2;
        if ((temp_v0 & 1) != 0) {
            Audio_PlayActorSound2(arg0, 0x4807U);
            temp_v1_3 = temp_s0_2->unk_208;
            *temp_v1_3 |= 2;
            arg1->interfaceCtx.unk_25C = 1;
        } else {
            *temp_v1_2 = temp_v0 | 4;
            Audio_PlayActorSound2(arg0, 0x4806U);
        }
        goto block_11;
    }
block_11:
    return 0;
}

void func_80C14D14(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x144;
    sp1C = temp_a2;
    Collider_UpdateCylinder(arg0, temp_a2);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, (Collider *) temp_a2);
}

void func_80C14D58(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    s16 phi_v0;
    s16 phi_v1;

    func_800E9250(arg1, arg0, arg0 + 0x2EC, arg0 + 0x2F2, (Vec3f) arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z);
    temp_v1 = arg0->unk_2FA;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        arg0->unk_2FA = (s16) (temp_v1 - 1);
        phi_v0 = arg0->unk_2FA;
    }
    phi_v1 = arg0->unk_2FA;
    if (phi_v0 == 0) {
        arg0->unk_2FA = Rand_S16Offset(0x3C, 0x3C);
        phi_v1 = arg0->unk_2FA;
    }
    if ((phi_v1 == 1) || (phi_v1 == 3)) {
        arg0->unk_21C = 1;
        return;
    }
    arg0->unk_21C = 0;
}

void EnJgameTsn_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnJgameTsn *this = (EnJgameTsn *) thisx;
    this->actionFunc(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    func_80C14D14((Actor *) this, globalCtx);
    func_80C14D58((Actor *) this, globalCtx);
}

s32 func_80C14E64(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    s32 temp_v0;

    temp_v0 = (s32) arg5->unk_2EC >> 1;
    if (arg1 == 0xF) {
        arg4->x += arg5->unk_2EE;
        arg4->z += (s16) temp_v0;
    } else if (arg1 == 8) {
        arg4->x += arg5->unk_2F4;
        arg4->z += (s16) temp_v0;
    }
    return 0;
}

void func_80C14EE4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 0xF) {
        SysMatrix_GetStateTranslation(arg4 + 0x3C);
    }
}

void EnJgameTsn_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp40;
    Gfx *sp38;
    Gfx *sp34;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    EnJgameTsn *this = (EnJgameTsn *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp40 = temp_a0;
    func_8012C5B0(temp_a0);
    temp_v0 = sp40->polyOpa.p;
    sp40->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp40 = sp40;
    sp38 = temp_v0;
    sp38->words.w1 = Lib_SegmentedToVirtual(*(&D_80C150A4 + (this->unk_21C * 4)));
    temp_v0_2 = sp40->polyOpa.p;
    sp40->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp34 = temp_v0_2;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_80C150A4 + (this->unk_21C * 4)));
    SkelAnime_DrawSV(globalCtx, this->unk_190.skeleton, this->unk_190.limbDrawTbl, (s32) this->unk_190.dListCount, func_80C14E64, func_80C14EE4, (Actor *) this);
}
