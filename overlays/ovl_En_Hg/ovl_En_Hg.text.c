struct _mips2c_stack_EnHg_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnHg_Draw {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnHg_Init {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnHg_OverrideLimbDraw {};      /* size 0x0 */

struct _mips2c_stack_EnHg_PostLimbDraw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnHg_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BCF354 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BCF398 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BCF468 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BCF4AC {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ Actor *sp34;                         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BCF5F0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BCF634 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BCF68C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BCF6D0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BCF710 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BCF778 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BCF7D8 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ CollisionCheckContext *sp20;         /* inferred */
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BCF88C {};              /* size 0x0 */

struct _mips2c_stack_func_80BCF8A0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BCF93C {};              /* size 0x0 */

struct _mips2c_stack_func_80BCF95C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ u32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BCFC0C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_80BCF710(Actor *arg0, GlobalContext *arg1, Actor *); /* static */
void func_80BCF778(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BCF7D8(EnHg *arg0, GlobalContext *arg1); /* static */
void func_80BCF88C(Actor *arg0, GlobalContext *, Actor *); /* static */
void func_80BCFC0C(Actor *arg0, GlobalContext *arg1); /* static */
extern AnimationHeader D_0600260C;
extern ? D_06005E28;
extern FlexSkeletonHeader D_06008580;
static ColliderCylinderInit D_80BCFFB0 = {
    {0, 0, 9, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x12, 0x2E, 0, {0, 0, 0}},
};
static DamageTable D_80BCFFDC = {
    {
        0x10,
        0xD1,
        0,
        0xF1,
        0xC3,
        0xC3,
        0xF2,
        0x10,
        0xF2,
        0xF1,
        0xF1,
        0x23,
        0x33,
        0x41,
        0xF2,
        0x10,
        0xD1,
        0xF2,
        0x10,
        0,
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
static CollisionCheckInfoInit2 D_80BCFFFC = {0, 0, 0, 0, 0x80};
static ActorAnimationEntry D_80BD0008[8] = {
    {(AnimationHeader *)0x600260C, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6009D44, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x600A164, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6000370, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x6001138, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x60015D4, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x6001960, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600AE1C, 1.0f, 0.0f, 0.0f, 0, 0.0f},
};
static s32 D_80BD00C8 = 0;

void EnHg_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *temp_s2;
    s32 temp_s0;
    s8 temp_s1;
    u16 phi_s1;
    s32 phi_s0;
    EnHg *this = (EnHg *) thisx;

    temp_s1 = this->actor.cutscene;
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 36.0f);
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06008580, &D_0600260C, this->limbDrawTbl, this->transitionDrawTbl, 0x13);
    temp_s2 = &this->collider;
    Collider_InitCylinder(globalCtx, temp_s2);
    Collider_SetCylinder(globalCtx, temp_s2, (Actor *) this, &D_80BCFFB0);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80BCFFDC, &D_80BCFFFC);
    if (((gSaveContext.weekEventReg[75] & 0x20) != 0) || ((gSaveContext.weekEventReg[52] & 0x20) != 0)) {
        Actor_MarkForDeath((Actor *) this);
    }
    this->actor.targetMode = 1;
    this->actor.colChkInfo.health = 0;
    this->actor.gravity = -1.0f;
    phi_s1 = (u16) temp_s1;
    phi_s0 = 0;
loop_4:
    if (phi_s1 != -1) {
        this->cutscenes[phi_s0] = phi_s1;
        temp_s0 = phi_s0 + 1;
        phi_s1 = (u16) ActorCutscene_GetAdditionalCutscene((s16) phi_s1);
        phi_s0 = temp_s0;
        if (temp_s0 != 4) {
            goto loop_4;
        }
    }
    func_80BCF354(this);
}

void EnHg_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnHg *this = (EnHg *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void func_80BCF354(EnHg *this) {
    func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) D_80BD0008, 0);
    this->actionFunc = func_80BCF398;
}

void func_80BCF398(EnHg *this, GlobalContext *globalCtx) {
    EnHg *temp_a0;
    u16 temp_v0;

    if (this->actor.colChkInfo.health == 1) {
        if ((this->actor.xzDistToPlayer < 200.0f) && (this->actor.yDistToPlayer < 40.0f)) {
            this = this;
            if (func_800EE29C(globalCtx, 0x1E3U) == 0) {
                temp_a0 = this;
                this = this;
                func_80BCF468(temp_a0);
            }
        }
        if ((gSaveContext.sceneSetupIndex == 0) && (globalCtx->csCtx.unk_12 == 0) && ((temp_v0 = globalCtx->csCtx.frames, (temp_v0 == 0x14)) || (temp_v0 == 0x3C))) {
            Audio_PlayActorSound2((Actor *) this, 0x3AB8U);
        }
    }
}

void func_80BCF468(EnHg *this) {
    func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) D_80BD0008, 1);
    this->actionFunc = func_80BCF4AC;
}

void func_80BCF4AC(EnHg *this, GlobalContext *globalCtx) {
    Actor *sp34;
    PosRot *sp2C;
    Actor *temp_v0;
    PosRot *temp_a1;
    f32 temp_f0;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    this->actor.speedXZ = 1.6f;
    if ((temp_v0->unk_A70 * 0x10) >= 0) {
        sp34 = temp_v0;
        if (func_80152498(&globalCtx->msgCtx) == 0) {
            temp_f0 = this->skelAnime.animCurrentFrame;
            if (((temp_f0 > 9.0f) && (temp_f0 < 16.0f)) || ((temp_f0 > 44.0f) && (temp_f0 < 51.0f))) {
                Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
                Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 5, 0x3E8, (s16) 0x14);
                this->actor.world.rot.y = this->actor.shape.rot.y;
            }
            temp_a1 = &this->actor.home;
            sp2C = temp_a1;
            if ((Math_Vec3f_DistXZ((Vec3f *) &this->actor.world, (Vec3f *) temp_a1) > 200.0f) && (Math_Vec3f_DistXZ((Vec3f *) &sp34->world, (Vec3f *) temp_a1) > 200.0f)) {
                func_80BCF5F0(this);
            }
        }
    }
}

void func_80BCF5F0(EnHg *this) {
    func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) D_80BD0008, 0);
    this->actionFunc = func_80BCF634;
}

void func_80BCF634(EnHg *this, GlobalContext *globalCtx) {
    if (Math_Vec3f_DistXZ((Vec3f *) &globalCtx->actorCtx.actorList[2].first->world, (Vec3f *) &this->actor.home) < 200.0f) {
        func_80BCF468(this);
    }
}

void func_80BCF68C(EnHg *this) {
    func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) D_80BD0008, 2);
    this->actionFunc = func_80BCF6D0;
}

void func_80BCF6D0(EnHg *this, GlobalContext *globalCtx) {
    EnHg *temp_a2;
    f32 temp_a1;

    temp_a2 = this;
    temp_a1 = temp_a2->skelAnime.animFrameCount;
    this = temp_a2;
    if (func_801378B8(&temp_a2->skelAnime, temp_a1) != 0) {
        func_80BCF5F0(this);
    }
}

void func_80BCF710(Actor *arg0, GlobalContext *arg1) {
    if (func_80152498(arg1 + 0x4908) == 0) {
        if (func_800B84D0(arg0, arg1) != 0) {
            func_801518B0(arg1, 0x24FU, arg0);
            return;
        }
        func_800B8614(arg0, arg1, 80.0f);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80BCF778(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    if ((arg0->colChkInfo.health == 1) && ((temp_v0 = arg0->unk_1D4, (func_80BCF4AC == temp_v0)) || (func_80BCF6D0 == temp_v0) || (func_80BCF634 == temp_v0))) {
        func_800B9010(arg0, 0x32B7U);
    }
}

void func_80BCF7D8(EnHg *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp24;
    CollisionCheckContext *sp20;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    u8 temp_v0;
    void (*temp_v0_2)(EnHg *, GlobalContext *);

    if (arg0->actor.colChkInfo.health != 0) {
        temp_v0 = arg0->collider.base.acFlags;
        if ((temp_v0 & 2) != 0) {
            arg0->collider.base.acFlags = temp_v0 & 0xFFFD;
            func_80BCF68C(arg0);
        }
        temp_a1 = &arg0->collider;
        sp24 = temp_a1;
        Collider_UpdateCylinder((Actor *) arg0, temp_a1);
        temp_a1_2 = arg1 + 0x18884;
        sp20 = temp_a1_2;
        CollisionCheck_SetOC(arg1, temp_a1_2, (Collider *) sp24);
        temp_v0_2 = arg0->actionFunc;
        if ((func_80BCF6D0 != temp_v0_2) && (func_80BCF8A0 != temp_v0_2) && (func_80BCF95C != temp_v0_2)) {
            CollisionCheck_SetAC(arg1, temp_a1_2, (Collider *) sp24);
        }
    }
}

void func_80BCF88C(Actor *arg0) {
    arg0->unk_1D4 = func_80BCF8A0;
}

void func_80BCF8A0(EnHg *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCanPlayNext((s16) this->cutscenes[this->unk218]) != 0) {
        ActorCutscene_Start((s16) this->cutscenes[this->unk218], (Actor *) this);
        func_80BCF93C(this);
        return;
    }
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
    }
    ActorCutscene_SetIntentToPlay((s16) this->cutscenes[this->unk218]);
}

void func_80BCF93C(EnHg *this) {
    this->cutscenes[3] = 0x63;
    this->cutscenes[2] = 0;
    this->actionFunc = func_80BCF95C;
}

void func_80BCF95C(EnHg *this, GlobalContext *globalCtx) {
    u32 sp2C;
    SkelAnime *sp24;
    SkelAnime *temp_a0_2;
    s32 temp_t1_2;
    s32 temp_t7;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    u16 temp_a0;
    u16 temp_t1;
    u32 temp_v0;
    void *temp_v1;

    if (func_800EE29C(globalCtx, 0x1E4U) != 0) {
        temp_v0 = func_800EE200(globalCtx, 0x1E4U);
        temp_t7 = temp_v0 * 4;
        sp2C = temp_v0;
        temp_v1 = globalCtx + temp_t7;
        temp_a0 = *temp_v1->unk_1F4C;
        if (this->cutscenes[3] != temp_a0) {
            this->cutscenes[3] = temp_a0;
            temp_t1 = *temp_v1->unk_1F4C;
            switch (temp_t1) {                      /* switch 1 */
            case 1:                                 /* switch 1 */
                this->currentAnimation = 0;
                func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) D_80BD0008, 0);
                break;
            case 2:                                 /* switch 1 */
                this->cutscenes[2] = 0;
                this->currentAnimation = 3;
                func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) D_80BD0008, 3);
                break;
            case 3:                                 /* switch 1 */
                this->cutscenes[2] = 0;
                this->currentAnimation = 5;
                func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) D_80BD0008, 5);
                break;
            case 4:                                 /* switch 1 */
                temp_v0_2 = this->unk218;
                this->cutscenes[2] = 0;
                this->currentAnimation = 7;
                if ((temp_v0_2 == 1) || (temp_v0_2 == 3)) {
                    func_8019F128(0x3ABAU);
                }
                func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) D_80BD0008, 7);
                break;
            case 5:                                 /* switch 1 */
                this->currentAnimation = 1;
                func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) D_80BD0008, 1);
                break;
            case 6:                                 /* switch 1 */
                gSaveContext.weekEventReg[75] |= 0x20;
                Actor_MarkForDeath((Actor *) this);
                break;
            }
        } else {
            temp_a0_2 = &this->skelAnime;
            sp24 = temp_a0_2;
            if (func_801378B8(temp_a0_2, this->skelAnime.animFrameCount) != 0) {
                temp_v0_3 = this->currentAnimation;
                if (temp_v0_3 != 3) {
                    if (temp_v0_3 != 5) {

                    } else {
                        this->currentAnimation = 6;
                        func_800BDC5C(temp_a0_2, (ActorAnimationEntry []) D_80BD0008, 6);
                    }
                } else {
                    this->currentAnimation = 4;
                    func_800BDC5C(temp_a0_2, (ActorAnimationEntry []) D_80BD0008, 4);
                }
            }
        }
        temp_t1_2 = this->currentAnimation;
        switch (temp_t1_2) {                        /* switch 2 */
        case 3:                                     /* switch 2 */
        case 4:                                     /* switch 2 */
            func_800B9010((Actor *) this, 0x32B7U);
            break;
        case 5:                                     /* switch 2 */
        case 6:                                     /* switch 2 */
            func_800B9010((Actor *) this, 0x32B9U);
            break;
        case 7:                                     /* switch 2 */
            temp_v0_4 = this->unk218;
            if ((temp_v0_4 == 0) || (temp_v0_4 == 2)) {
                func_800B9010((Actor *) this, 0x32B9U);
            }
            break;
        }
        func_800EDF24((Actor *) this, globalCtx, sp2C);
        return;
    }
    if (globalCtx->csCtx.state == 0) {
        func_80BCF354(this);
    }
    this->cutscenes[3] = 0x63;
}

void func_80BCFC0C(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    u8 temp_v0_2;
    GlobalContext *phi_a1;
    Actor *phi_a2;

    phi_a1 = arg1;
    phi_a2 = arg0;
    if ((arg0->colChkInfo.health == 1) && !(fabsf(arg0->yDistToPlayer) >= 80.0f)) {
        if ((arg1->actorCtx.actorList[2].first->unk_A70 * 0x10) < 0) {
            if (D_80BD00C8 == 0) {
                arg0 = arg0;
                play_sound(0x4807U);
            }
            D_80BD00C8 = 1;
            phi_a1 = arg1;
            phi_a2 = arg0;
        } else {
            D_80BD00C8 = 0;
        }
        if (phi_a1->msgCtx.unk1202A == 3) {
            if ((phi_a1->msgCtx.unk1202E == 7) && (gSaveContext.playerForm == 4)) {
                if (gSaveContext.inventory.items[gItemSlots[65]] == 0x41) {
                    phi_a2[1].shape.feetPos[0].x = 3;
                } else {
                    phi_a2[1].shape.feetPos[0].x = 1;
                }
                func_80BCF88C(phi_a2, phi_a1, phi_a2);
                return;
            }
            /* Duplicate return node #23. Try simplifying control flow for better match */
            return;
        }
        if ((phi_a2->xzDistToPlayer < 60.0f) && (fabsf(phi_a2->yDistToPlayer) < 40.0f) && (temp_v0 = phi_a2->unk_1D4, (func_80BCF8A0 != temp_v0)) && (func_80BCF95C != temp_v0)) {
            temp_v0_2 = gSaveContext.weekEventReg[61];
            if ((temp_v0_2 & 2) == 0) {
                gSaveContext.weekEventReg[61] = temp_v0_2 | 2;
                phi_a2[1].shape.feetPos[0].x = 0;
            } else {
                phi_a2[1].shape.feetPos[0].x = 2;
            }
            func_80BCF88C(phi_a2, phi_a1, phi_a2);
            return;
        }
        func_80BCF710(phi_a2, phi_a1, phi_a2);
        /* Duplicate return node #23. Try simplifying control flow for better match */
    }
}

void EnHg_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnHg *this = (EnHg *) thisx;
    this->actionFunc(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    func_80BCF7D8(this, globalCtx);
    func_80BCFC0C((Actor *) this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 25.0f, 0.0f, 5U);
    func_80BCF778((Actor *) this, globalCtx);
}

s32 EnHg_OverrideLimbDraw(GlobalContext *globalCtx, s32 limbIndex, Gfx **dList, Vec3f *pos, Vec3s *rot, Actor *thisx) {
    return 0;
}

void EnHg_PostLimbDraw(GlobalContext *globalCtx, s32 limbIndex, Gfx **dList, Vec3s *rot, Actor *thisx) {
    if (limbIndex == 0xA) {
        SysMatrix_CopyCurrentState((MtxF *) &thisx[1].xyzDistToPlayerSq);
        return;
    }
    if (limbIndex == 0xB) {
        SysMatrix_GetStateTranslation((Vec3f *) &thisx->focus);
    }
}

void EnHg_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    EnHg *this = (EnHg *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, EnHg_OverrideLimbDraw, EnHg_PostLimbDraw, (Actor *) this);
    SysMatrix_SetCurrentState(&this->unk1D8);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    temp_v0->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = (u32) &D_06005E28;
}
