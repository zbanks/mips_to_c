struct _mips2c_stack_EnMinifrog_BeginChoirCutscene {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnMinifrog_CheckChoirSuccess {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnMinifrog_ContinueChoirCutscene {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnMinifrog_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnMinifrog_Draw {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ GraphicsContext *sp34;               /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnMinifrog_EndChoir {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnMinifrog_GetFrog {};         /* size 0x0 */

struct _mips2c_stack_EnMinifrog_GetFrogHP {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnMinifrog_Idle {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnMinifrog_Init {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnMinifrog_Jump {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnMinifrog_JumpTimer {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnMinifrog_NextFrogMissing {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnMinifrog_NextFrogReturned {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnMinifrog_OverrideLimbDraw {}; /* size 0x0 */

struct _mips2c_stack_EnMinifrog_PostLimbDraw {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Gfx *sp18;                           /* inferred */
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ GraphicsContext *sp20;               /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnMinifrog_ReturnFrogCutscene {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnMinifrog_SetCamera {
    /* 0x00 */ char pad_0[0x88];
    /* 0x88 */ ? sp88;                              /* inferred */
    /* 0x88 */ char pad_88[0x10];
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ char pad_B0[0xC];                    /* maybe part of spAC[4]? */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
};                                                  /* size = 0xC8 */

struct _mips2c_stack_EnMinifrog_SetJumpState {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnMinifrog_SetupNextFrogChoir {
    /* 0x00 */ char pad_0[0x27];
    /* 0x27 */ u8 sp27;                             /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnMinifrog_SetupNextFrogInit {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnMinifrog_SetupYellowFrogDialog {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnMinifrog_SpawnGrowAndShrink {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnMinifrog_TurnToMissingFrog {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnMinifrog_TurnToPlayer {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnMinifrog_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnMinifrog_UpdateMissingFrog {}; /* size 0x0 */

struct _mips2c_stack_EnMinifrog_YellowFrogDialog {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

void EnMinifrog_BeginChoirCutscene(Actor *arg0, GlobalContext *arg1); /* static */
void EnMinifrog_CheckChoirSuccess(Actor *arg0, GlobalContext *arg1); /* static */
void EnMinifrog_ContinueChoirCutscene(Actor *arg0, GlobalContext *arg1); /* static */
void EnMinifrog_EndChoir(Actor *arg0, GlobalContext *arg1); /* static */
void EnMinifrog_GetFrogHP(Actor *arg0, GlobalContext *arg1); /* static */
void EnMinifrog_Jump(Actor *arg0, Actor *);         /* static */
void EnMinifrog_JumpTimer(Actor *arg0);             /* static */
void EnMinifrog_NextFrogMissing(Actor *arg0, void *arg1); /* static */
void EnMinifrog_NextFrogReturned(Actor *arg0, void *arg1); /* static */
s32 EnMinifrog_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void EnMinifrog_PostLimbDraw(GraphicsContext **arg0, s32 arg1, u32 *arg2, Vec3s *arg3, Actor *arg4); /* static */
void EnMinifrog_ReturnFrogCutscene(Actor *arg0, GlobalContext *arg1); /* static */
void EnMinifrog_SetCamera(Actor *arg0, GlobalContext *arg1); /* static */
void EnMinifrog_SetJumpState(Actor *arg0, u8);      /* static */
void EnMinifrog_SetupNextFrogChoir(Actor *arg0, void *arg1); /* static */
void EnMinifrog_TurnToMissingFrog(EnMinifrog *arg0); /* static */
void EnMinifrog_TurnToPlayer(Actor *arg0, EnMinifrog *); /* static */
extern AnimationHeader D_060007BC;
extern AnimationHeader D_06001534;
extern FlexSkeletonHeader D_0600B538;
static ColliderCylinderInit D_808A4D40 = {
    {0xA, 0, 0, 0x39, 0x10, 1},
    {1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1},
    {0xC, 0xE, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit D_808A4D6C = {1, 0xC, 0xE, 0xFF};
static void *D_808A4D74[2] = {(void *)0x60059A0, (void *)0x6005BA0};
static ? D_808A4D7C;                                /* unable to generate initializer */
static s32 D_808A4D88 = 0;
static InitChainEntry D_808A4D8C;                   /* unable to generate initializer */
static Color_RGBA8 D_808A4D90 = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_808A4D94 = {0x50, 0x50, 0x50, 0xFF};
static ? D_808A4D98;                                /* unable to generate initializer */

void EnMinifrog_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    u16 temp_v1;
    u16 temp_v1_2;
    void **temp_s0;
    void **phi_s0;
    EnMinifrog *this = (EnMinifrog *) thisx;

    Actor_ProcessInitChain((Actor *) this, &D_808A4D8C);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 15.0f);
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_0600B538, &D_06001534, this->limbDrawTable, this->transitionDrawTable, 0x18);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, NULL, &D_808A4D6C);
    Collider_InitAndSetCylinder(globalCtx, &this->collider, (Actor *) this, &D_808A4D40);
    phi_s0 = D_808A4D74;
    if (D_808A4D88 == 0) {
        do {
            temp_s0 = phi_s0 + 4;
            temp_s0->unk_-4 = Lib_SegmentedToVirtual(*phi_s0);
            phi_s0 = temp_s0;
        } while (temp_s0 != &D_808A4D7C);
        D_808A4D88 = 1;
    }
    this->frogIndex = this->actor.params & 0xF;
    if ((s32) this->frogIndex >= 5) {
        this->frogIndex = 0;
    }
    this->actor.speedXZ = 0.0f;
    this->actionFunc = EnMinifrog_Idle;
    this->jumpState = 2;
    this->flags = 0;
    this->timer = 0;
    if (((s32) (this->actor.params & 0xF0) >> 4) == 0) {
        temp_v0 = this->frogIndex;
        if ((temp_v0 == 0) || (temp_v1 = *(&D_808A4D7C + (temp_v0 * 2)), ((temp_v1 & 0xFF & gSaveContext.weekEventReg[(s32) temp_v1 >> 8]) != 0))) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->timer = 0x1E;
        this->actionFunc = EnMinifrog_SpawnGrowAndShrink;
        this->actor.textId = 0xD81;
        this->actor.colChkInfo.mass = 0x1E;
        return;
    }
    if (this->frogIndex == 0) {
        this->actor.textId = 0;
        this->actionFunc = EnMinifrog_SetupYellowFrogDialog;
        if ((gSaveContext.weekEventReg[34] & 1) == 0) {
            this->actor.flags |= 0x10000;
        }
        this->actor.home.rot.z = 0;
        this->frog = NULL;
        this->actor.home.rot.x = this->actor.home.rot.z;
        return;
    }
    this->frog = EnMinifrog_GetFrog(globalCtx);
    this->actor.flags &= -2;
    temp_v1_2 = *(&D_808A4D7C + (this->frogIndex * 2));
    if ((temp_v1_2 & 0xFF & gSaveContext.weekEventReg[(s32) temp_v1_2 >> 8]) != 0) {
        this->actionFunc = EnMinifrog_SetupNextFrogInit;
        return;
    }
    this->actor.draw = NULL;
    this->actor.update = EnMinifrog_UpdateMissingFrog;
}

void EnMinifrog_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnMinifrog *this = (EnMinifrog *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
    if ((this->flags & 0x100) != 0) {
        func_801A1F88();
    }
}

EnMinifrog *EnMinifrog_GetFrog(GlobalContext *globalCtx) {
    Actor *temp_v1;
    EnMinifrog *temp_v1_2;
    EnMinifrog *phi_v1;

    temp_v1 = globalCtx->actorCtx.actorList[4].first;
    phi_v1 = (EnMinifrog *) temp_v1;
    if (temp_v1 != 0) {
loop_1:
        if ((phi_v1->actor.id != 0x22) || ((phi_v1->actor.params & 0xF) != 0)) {
            temp_v1_2 = phi_v1->actor.next;
            phi_v1 = temp_v1_2;
            if (temp_v1_2 == 0) {
                /* Duplicate return node #6. Try simplifying control flow for better match */
                return NULL;
            }
            goto loop_1;
        }
        return phi_v1;
    }
    return NULL;
}

void EnMinifrog_SetJumpState(Actor *arg0) {
    if (arg0->unk_2B2 == 2) {
        arg0->unk_2B2 = 0;
        SkelAnime_ChangeAnim(arg0 + 0x144, &D_060007BC, 1.0f, 0.0f, 7.0f, (u8) 2, -5.0f);
    }
}

void EnMinifrog_JumpTimer(Actor *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->unk_2B4;
    if ((s32) temp_v0 > 0) {
        arg0->unk_2B4 = (s16) (temp_v0 - 1);
        return;
    }
    arg0->unk_2B4 = (s16) ((s32) Rand_ZeroFloat(40.0f) + 0x3C);
    EnMinifrog_SetJumpState(arg0);
}

void EnMinifrog_Jump(Actor *arg0) {
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    s16 temp_v1;

    temp_a0 = arg0 + 0x144;
    sp20 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v1 = arg0->unk_2B2;
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {
            return;
        }
        if ((arg0->bgCheckFlags & 1) != 0) {
            arg0->unk_2B2 = 2;
            sp20 = temp_a0;
            SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06001534, -2.5f);
            SkelAnime_FrameUpdateMatrix(temp_a0);
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    if (func_801378B8(temp_a0, 4.0f) != 0) {
        arg0->bgCheckFlags &= 0xFFFE;
        arg0->velocity.y = 6.0f;
        Audio_PlayActorSound2(arg0, 0x28B1U);
        arg0->unk_2B2 = 1;
    }
}

void EnMinifrog_TurnToPlayer(Actor *arg0) {
    Actor *temp_a3;
    s16 temp_a1;

    temp_a3 = arg0;
    temp_a1 = temp_a3->yawTowardsPlayer;
    arg0 = temp_a3;
    Math_ScaledStepToS(temp_a3 + 0xBE, temp_a1, 0x400);
    arg0->world.rot.y = arg0->shape.rot.y;
}

void EnMinifrog_TurnToMissingFrog(EnMinifrog *arg0) {
    EnMinifrog *temp_a3;
    s16 temp_a1;

    temp_a3 = arg0;
    temp_a1 = temp_a3->actor.home.rot.y;
    arg0 = temp_a3;
    Math_ScaledStepToS(temp_a3 + 0xBE, temp_a1, 0x400);
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
}

void EnMinifrog_SetCamera(Actor *arg0, GlobalContext *arg1) {
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    ? sp88;
    Vec3f *temp_s0;
    f32 *temp_s1_2;
    f32 *temp_s2;
    f32 *temp_s3;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f4;
    s16 temp_s0_2;
    s16 temp_s1;
    s32 temp_s0_3;
    void *temp_t9;
    s32 phi_s0;

    temp_s0 = arg0 + 0x24;
    temp_t9 = (arg1 + (arg1->activeCamera * 4))->unk_800;
    sp88.unk_0 = (s32) temp_t9->unk_5C;
    sp88.unk_4 = (s32) temp_t9->unk_60;
    sp88.unk_8 = (s32) temp_t9->unk_64;
    temp_s1 = Math_Vec3f_Yaw((Vec3f *) &sp88, temp_s0);
    temp_s0_2 = Math_Vec3f_Pitch((Vec3f *) &sp88, temp_s0) * -1;
    temp_f20 = Math_SinS(temp_s1);
    temp_f24 = arg0->world.pos.x - (Math_CosS(temp_s0_2) * (5.0f * temp_f20));
    temp_f26 = arg0->world.pos.y - (Math_SinS(temp_s0_2) * 5.0f);
    temp_f20_2 = Math_CosS(temp_s1);
    temp_s2 = &spA4;
    temp_s3 = &sp98;
    temp_s1_2 = &spBC;
    temp_f28 = arg0->world.pos.z - (Math_CosS(temp_s0_2) * (5.0f * temp_f20_2));
    phi_s0 = 0;
    do {
        spA4 = randPlusMinusPoint5Scaled(4.0f);
        spA8 = randPlusMinusPoint5Scaled(4.0f);
        temp_f0 = randPlusMinusPoint5Scaled(4.0f);
        temp_f16 = temp_f28 + temp_f0;
        temp_f4 = -temp_f0 * 0.1f;
        sp98 = -spA4 * 0.1f;
        spAC = temp_f0;
        sp9C = -spA8 * 0.1f;
        spBC = temp_f24 + spA4;
        spA0 = temp_f4;
        spC0 = temp_f26 + spA8;
        spC4 = temp_f16;
        func_800B0F80(arg1, (Vec3f *) temp_s1_2, (Vec3f *) temp_s2, (Vec3f *) temp_s3, &D_808A4D90, &D_808A4D94, (s16) 0x12C, (s16) 0x1E, (s16) 0xA);
        temp_s0_3 = phi_s0 + 1;
        phi_s0 = temp_s0_3;
    } while (temp_s0_3 != 5);
}

void EnMinifrog_ReturnFrogCutscene(Actor *arg0, GlobalContext *arg1) {
    s32 temp_t1;
    s8 temp_a0;
    u16 temp_t3;
    u16 temp_v0;

    EnMinifrog_TurnToPlayer(arg0);
    EnMinifrog_Jump(arg0);
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        EnMinifrog_SetJumpState(arg0);
        temp_v0 = arg1->msgCtx.unk11F04;
        switch (temp_v0) {
        case 3457:
        case 3459:
        case 3460:
        case 3462:
        case 3463:
            func_80151938(arg1, (temp_v0 + 1) & 0xFFFF);
            goto block_13;
        case 3458:
            if ((gSaveContext.weekEventReg[33] & 0x80) != 0) {
                func_80151938(arg1, 0xD83U);
            } else {
                func_80151938(arg1, 0xD86U);
            }
            temp_t3 = *(&D_808A4D7C + (arg0->unk_2B0 * 2));
            temp_t1 = (s32) temp_t3 >> 8;
            gSaveContext.weekEventReg[temp_t1] |= temp_t3;
            goto block_13;
        default:
            func_801477B4(arg1);
            EnMinifrog_SetCamera(arg0, arg1);
            Audio_PlaySoundAtPosition(arg1, (Vec3f *) &arg0->world, 0x1E, 0x3A87U);
            if (arg0->cutscene != -1) {
                temp_a0 = arg0->cutscene;
                if (ActorCutscene_GetCurrentIndex() == temp_a0) {
                    ActorCutscene_Stop((s16) temp_a0);
                }
            }
            Actor_MarkForDeath(arg0);
            return;
        }
    } else {
block_13:
        if ((arg0->unk_2B6 & 1) != 0) {
            if (ActorCutscene_GetCurrentIndex() == 0x7C) {
                ActorCutscene_Stop(0x7C);
                ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
                return;
            }
            if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
                ActorCutscene_Start((s16) arg0->cutscene, arg0);
                arg0->unk_2B6 = (u16) (arg0->unk_2B6 & 0xFFFE);
                return;
            }
            ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
            /* Duplicate return node #19. Try simplifying control flow for better match */
        }
    }
}

void EnMinifrog_SpawnGrowAndShrink(EnMinifrog *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    EnMinifrog_Jump((Actor *) this);
    temp_v0 = this->timer;
    if ((s32) temp_v0 > 0) {
        Actor_SetScale((Actor *) this, (Math_SinS((s16) ((temp_v0 & 7) << 0xC)) * (0.0003f * (f32) this->timer)) + 0.01f);
        this->timer += -1;
        return;
    }
    Actor_SetScale((Actor *) this, 0.01f);
    this->actionFunc = EnMinifrog_Idle;
}

void EnMinifrog_Idle(EnMinifrog *this, GlobalContext *globalCtx) {
    EnMinifrog_TurnToPlayer((Actor *) this);
    EnMinifrog_Jump((Actor *) this);
    EnMinifrog_JumpTimer((Actor *) this);
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->actionFunc = (void (*)(EnMinifrog *, GlobalContext *)) EnMinifrog_ReturnFrogCutscene;
        if (this->actor.cutscene != -1) {
            this->flags |= 1;
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    if ((this->actor.xzDistToPlayer < 100.0f) && (Actor_IsLinkFacingActor((Actor *) this, 0x3000, globalCtx) != 0) && (Player_GetMask(globalCtx) == 0xD)) {
        func_800B8614((Actor *) this, globalCtx, 110.0f);
    }
}

void EnMinifrog_SetupNextFrogInit(EnMinifrog *this, GlobalContext *globalCtx) {
    EnMinifrog *temp_a1;
    EnMinifrog *temp_v1;

    EnMinifrog_Jump((Actor *) this);
    temp_v1 = this->frog;
    if (temp_v1 != 0) {
        temp_a1 = temp_v1->frog;
        if (temp_a1 != 0) {
            this->actor.home.rot.y = Actor_YawBetweenActors((Actor *) this, (Actor *) temp_a1);
            EnMinifrog_TurnToMissingFrog(this);
        } else {
            EnMinifrog_TurnToPlayer((Actor *) this, temp_a1);
        }
        if ((this->actor.params & 0xF) == this->frog->actor.home.rot.z) {
            EnMinifrog_SetJumpState((Actor *) this);
            this->frog->actor.home.rot.z = 0;
        }
    }
}

void EnMinifrog_CheckChoirSuccess(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;

    arg0->unk_2A8 = EnMinifrog_YellowFrogDialog;
    if (arg0[2].world.pos.x != 0) {
        arg0 = arg0;
        func_80151938(arg1, 0xD78U);
    } else {
        arg0 = arg0;
        func_80151938(arg1, 0xD7CU);
    }
    temp_a0 = arg0;
    arg0 = arg0;
    EnMinifrog_SetJumpState(temp_a0);
    arg0[2].world.pos.x = 0.0f;
    arg0->home.rot.z = 0;
}

void EnMinifrog_ContinueChoirCutscene(Actor *arg0, GlobalContext *arg1) {
    s8 temp_a0;

    EnMinifrog_Jump(arg0);
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        EnMinifrog_CheckChoirSuccess(arg0, arg1);
        return;
    }
    if (ActorCutscene_GetCanPlayNext(0x7C) != 0) {
        ActorCutscene_Start(0x7C, NULL);
        EnMinifrog_CheckChoirSuccess(arg0, arg1);
        return;
    }
    if ((arg0->cutscene != -1) && (temp_a0 = arg0->cutscene, (ActorCutscene_GetCurrentIndex() == temp_a0))) {
        ActorCutscene_Stop((s16) temp_a0);
        ActorCutscene_SetIntentToPlay(0x7C);
        return;
    }
    ActorCutscene_SetIntentToPlay(0x7C);
}

void EnMinifrog_NextFrogMissing(Actor *arg0, void *arg1) {
    s16 temp_v0;

    EnMinifrog_TurnToMissingFrog();
    EnMinifrog_Jump(arg0);
    temp_v0 = arg0->unk_2B4;
    if ((s32) temp_v0 > 0) {
        arg0->unk_2B4 = (s16) (temp_v0 - 1);
        return;
    }
    arg0->unk_2A8 = EnMinifrog_ContinueChoirCutscene;
}

void EnMinifrog_NextFrogReturned(Actor *arg0, void *arg1) {
    Actor *temp_a0;
    Actor *temp_a3;
    s16 temp_v0;

    temp_a3 = arg0;
    temp_a0 = temp_a3;
    arg0 = temp_a3;
    EnMinifrog_Jump(temp_a0, temp_a3);
    temp_v0 = arg0->unk_2B4;
    if ((s32) temp_v0 > 0) {
        arg0->unk_2B4 = (s16) (temp_v0 - 1);
        return;
    }
    arg0->unk_2A8 = EnMinifrog_ContinueChoirCutscene;
    arg0->unk_2B6 = (u16) (arg0->unk_2B6 & 0xFFC1);
    arg1->unk_18798(arg1, &D_0400DEA8, 0, arg0);
}

void EnMinifrog_SetupNextFrogChoir(Actor *arg0, void *arg1) {
    u8 sp27;
    f32 temp_a1_2;
    s32 temp_v1;
    u16 temp_t5;
    u16 temp_v0_2;
    u8 temp_a1;
    u8 temp_v0;

    EnMinifrog_Jump(arg0);
    temp_v0 = func_801A39F8();
    temp_a1 = temp_v0 & 0xFF;
    if (temp_v0 != 0xFF) {
        if (temp_v0 == 0) {
            sp27 = temp_a1;
            EnMinifrog_SetJumpState(arg0, temp_a1);
        } else {
            arg0->home.rot.z = (s16) temp_v0;
        }
        temp_v0_2 = arg0->unk_2B6;
        temp_v1 = 2 << (temp_v0 & 0xFF);
        if ((temp_v0_2 & temp_v1) == 0) {
            arg0->unk_2B6 = (u16) (temp_v0_2 | temp_v1);
            arg0->unk_2B4 = (s16) (arg0->unk_2B4 - 1);
        }
    }
    temp_a1_2 = arg0[2].world.pos.x;
    if ((bitwise s32) temp_a1_2 != 0) {
        arg0->home.rot.z = 0;
        arg0->unk_2A8 = EnMinifrog_NextFrogMissing;
        arg0->unk_2B4 = 0x3C;
        arg0->home.rot.y = Actor_YawBetweenActors(arg0, (bitwise Actor *) temp_a1_2);
        func_801A1F88();
        temp_t5 = arg0->unk_2B6 & 0xFEFF;
        arg0->unk_2B6 = temp_t5;
        arg0->unk_2B6 = (u16) (temp_t5 & 0xFFC1);
        arg1->unk_18798(arg1, &D_0400DEA8, 0);
        return;
    }
    if ((s32) arg0->unk_2B4 <= 0) {
        arg0->unk_2A8 = EnMinifrog_NextFrogReturned;
        arg0->unk_2B4 = 0x1E;
    }
}

void EnMinifrog_BeginChoirCutscene(Actor *arg0, GlobalContext *arg1) {
    EnMinifrog_Jump(arg0);
    if (arg0->cutscene == -1) {
        arg0->unk_2A8 = EnMinifrog_SetupNextFrogChoir;
        return;
    }
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
        ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
        return;
    }
    if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
        ActorCutscene_Start((s16) arg0->cutscene, arg0);
        arg0->unk_2A8 = EnMinifrog_SetupNextFrogChoir;
        arg0->unk_2B4 = 5;
        func_801A1F00(3, 0x5A);
        arg0->unk_2B6 = (u16) (arg0->unk_2B6 | 0x100);
        arg1->setPlayerTalkAnim(arg1, &D_0400E2A8, 0);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
}

void EnMinifrog_EndChoir(Actor *arg0, GlobalContext *arg1) {
    EnMinifrog_TurnToPlayer(arg0);
    EnMinifrog_Jump(arg0);
    if (func_800B84D0(arg0, arg1) != 0) {
        func_801518B0(arg1, 0xD7EU, arg0);
        arg0->unk_2A8 = EnMinifrog_YellowFrogDialog;
        return;
    }
    func_800B8500(arg0, arg1, 1000.0f, 1000.0f, -1);
}

void EnMinifrog_GetFrogHP(Actor *arg0, GlobalContext *arg1) {
    EnMinifrog_TurnToPlayer(arg0);
    EnMinifrog_Jump(arg0);
    if (Actor_HasParent(arg0, arg1) != 0) {
        arg0->parent = NULL;
        arg0->unk_2A8 = EnMinifrog_EndChoir;
        arg0->flags |= 0x10000;
        func_800B8500(arg0, arg1, 1000.0f, 1000.0f, 0);
        return;
    }
    func_800B8A1C(arg0, arg1, 0xC, 10000.0f, 50.0f);
}

void EnMinifrog_YellowFrogDialog(EnMinifrog *this, GlobalContext *globalCtx) {
    u16 temp_v0_2;
    u8 temp_v0;
    u8 temp_v0_3;

    EnMinifrog_TurnToPlayer((Actor *) this);
    EnMinifrog_Jump((Actor *) this);
    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (temp_v0 != 4) {
        if (temp_v0 != 5) {
            return;
        }
        if (func_80147624(globalCtx) != 0) {
            EnMinifrog_SetJumpState((Actor *) this);
            temp_v0_2 = globalCtx->msgCtx.unk11F04;
            switch (temp_v0_2) {
            case 3446:
                func_80151938(globalCtx, (temp_v0_2 + 1) & 0xFFFF);
                this->actor.flags &= 0xFFFEFFFF;
                gSaveContext.weekEventReg[34] |= 1;
                return;
            case 3448:
            case 3449:
            case 3450:
            case 3455:
                func_80151938(globalCtx, (temp_v0_2 + 1) & 0xFFFF);
                return;
            case 3447:
                this->actionFunc = (void (*)(EnMinifrog *, GlobalContext *)) EnMinifrog_BeginChoirCutscene;
                globalCtx->msgCtx.unk11F10 = 0;
                return;
            case 3452:
                if ((gSaveContext.weekEventReg[35] & 0x80) != 0) {
                    func_80151938(globalCtx, 0xD7EU);
                    return;
                }
                func_80151938(globalCtx, 0xD7DU);
                gSaveContext.weekEventReg[35] |= 0x80;
                return;
            case 3453:
                func_801477B4(globalCtx);
                this->actionFunc = (void (*)(EnMinifrog *, GlobalContext *)) EnMinifrog_GetFrogHP;
                EnMinifrog_GetFrogHP((Actor *) this, globalCtx);
                return;
            default:
                func_801477B4(globalCtx);
                this->actionFunc = EnMinifrog_SetupYellowFrogDialog;
                this->actor.flags &= 0xFFFEFFFF;
                /* Duplicate return node #20. Try simplifying control flow for better match */
                return;
            }
        } else {
            /* Duplicate return node #20. Try simplifying control flow for better match */
        }
    } else if (func_80147624(globalCtx) != 0) {
        temp_v0_3 = globalCtx->msgCtx.choiceIndex;
        if (temp_v0_3 != 0) {
            if (temp_v0_3 != 1) {
                return;
            }
            func_8019F230();
            func_80151938(globalCtx, 0xD7EU);
            return;
        }
        func_8019F208();
        this->actionFunc = (void (*)(EnMinifrog *, GlobalContext *)) EnMinifrog_BeginChoirCutscene;
        globalCtx->msgCtx.unk11F10 = 0;
    }
}

void EnMinifrog_SetupYellowFrogDialog(EnMinifrog *this, GlobalContext *globalCtx) {
    Math_ScaledStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0x180);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    EnMinifrog_TurnToPlayer((Actor *) this);
    EnMinifrog_Jump((Actor *) this);
    EnMinifrog_JumpTimer((Actor *) this);
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->actionFunc = EnMinifrog_YellowFrogDialog;
        if ((gSaveContext.weekEventReg[34] & 1) == 0) {
            func_801518B0(globalCtx, 0xD76U, (Actor *) this);
            return;
        }
        func_801518B0(globalCtx, 0xD7FU, (Actor *) this);
        return;
    }
    if ((this->actor.xzDistToPlayer < 150.0f) && ((Actor_IsLinkFacingActor((Actor *) this, 0x3000, globalCtx) != 0) || ((this->actor.flags & 0x10000) == 0x10000)) && (Player_GetMask(globalCtx) == 0xD)) {
        func_800B8614((Actor *) this, globalCtx, 160.0f);
    }
}

void EnMinifrog_Update(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    EnMinifrog *this = (EnMinifrog *) thisx;

    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 25.0f, 12.0f, 0.0f, 0x1DU);
    temp_a2 = &this->collider;
    sp2C = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    this->actor.focus.rot.y = this->actor.shape.rot.y;
}

void EnMinifrog_UpdateMissingFrog(Actor *thisx, GlobalContext *globalCtx) {
    EnMinifrog *temp_v0;
    EnMinifrog *this = (EnMinifrog *) thisx;

    temp_v0 = this->frog;
    if ((temp_v0 != 0) && ((this->actor.params & 0xF) == temp_v0->actor.home.rot.z)) {
        temp_v0->frog = this;
    }
}

s32 EnMinifrog_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    if (arg1 == 1) {
        arg3->z -= 500.0f;
    }
    if ((arg1 == 7) || (arg1 == 8)) {
        *arg2 = NULL;
    }
    return 0;
}

void EnMinifrog_PostLimbDraw(GraphicsContext **arg0, s32 arg1, u32 *arg2, Vec3s *arg3, Actor *arg4) {
    GraphicsContext *sp20;
    Gfx *sp18;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a1;
    MtxF *temp_a0;

    if ((arg1 == 7) || (arg1 == 8)) {
        temp_a1 = *arg0;
        temp_a0 = arg0 + 0x187FC;
        arg0 = arg0;
        sp20 = temp_a1;
        SysMatrix_NormalizeXYZ(temp_a0);
        temp_v0 = temp_a1->polyOpa.p;
        temp_a1->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp20 = temp_a1;
        sp18 = temp_v0;
        sp18->words.w1 = Matrix_NewMtx(*arg0);
        temp_v0_2 = temp_a1->polyOpa.p;
        temp_a1->polyOpa.p = &temp_v0_2[1];
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->words.w1 = *arg2;
    }
    if (arg1 == 4) {
        SysMatrix_GetStateTranslation(arg4 + 0x3C);
    }
}

void EnMinifrog_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp34;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    void *temp_a0_2;
    EnMinifrog *this = (EnMinifrog *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp34 = temp_a0;
    func_8012C28C(temp_a0);
    temp_a0_2 = (this->frogIndex * 4) + &D_808A4D98;
    temp_v0 = sp34->polyOpa.p;
    sp34->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDB060020;
    temp_v0->words.w1 = (u32) *D_808A4D74;
    temp_v0_2 = sp34->polyOpa.p;
    sp34->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xDB060024;
    temp_v0_2->words.w1 = (u32) *D_808A4D74;
    temp_v0_3 = sp34->polyOpa.p;
    sp34->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xFB000000;
    temp_v0_3->words.w1 = (temp_a0_2->unk_0 << 0x18) | (temp_a0_2->unk_1 << 0x10) | (temp_a0_2->unk_2 << 8) | temp_a0_2->unk_3;
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, EnMinifrog_OverrideLimbDraw, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) EnMinifrog_PostLimbDraw, (Actor *) this);
}
