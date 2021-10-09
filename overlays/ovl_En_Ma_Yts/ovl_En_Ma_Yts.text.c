void EnMaYts_ChangeAnim(EnMaYts *arg0, s32 arg1, s16, GlobalContext *); /* static */
s32 EnMaYts_CheckValidSpawn(EnMaYts *arg0, GlobalContext *arg1); /* static */
void EnMaYts_InitAnimation(EnMaYts *arg0, GlobalContext *arg1); /* static */
s32 EnMaYts_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void EnMaYts_PostLimbDraw(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void EnMaYts_UpdateEyes(EnMaYts *arg0);             /* static */
void func_80B8D12C(Actor *arg0, GlobalContext *arg1); /* static */
extern ? D_060003B0;
extern ? D_060043A0;
extern ? D_06007D98;
extern ? D_06009E58;
extern FlexSkeletonHeader D_06013928;
static ColliderCylinderInit D_80B8E170 = {
    {0xA, 0, 0, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0x12, 0x2E, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80B8E19C = {0, 0, 0, 0, 0xFF};
static ? D_80B8E1A8;                                /* unable to generate initializer */
static ? D_80B8E308;                                /* unable to generate initializer */
static ? D_80B8E318;                                /* unable to generate initializer */
static u16 D_80B8E32C = 0x63;



void EnMaYts_UpdateEyes(EnMaYts *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v1;

    temp_v0 = arg0->overrideEyeTexIndex;
    if (temp_v0 != 0) {
        arg0->eyeTexIndex = temp_v0;
        return;
    }
    temp_v0_2 = arg0->blinkTimer;
    if (temp_v0_2 == 0) {
        phi_v1 = 0;
    } else {
        arg0->blinkTimer = temp_v0_2 - 1;
        phi_v1 = arg0->blinkTimer;
    }
    if (phi_v1 == 0) {
        arg0->eyeTexIndex += 1;
        if ((s32) arg0->eyeTexIndex >= 3) {
            arg0 = arg0;
            arg0->blinkTimer = Rand_S16Offset(0x1E, 0x1E);
            arg0->eyeTexIndex = 0;
        }
    }
}

void EnMaYts_ChangeAnim(EnMaYts *arg0, s32 arg1) {
    void *sp28;
    void *temp_v1;

    temp_v1 = (arg1 * 0x10) + &D_80B8E1A8;
    sp28 = temp_v1;
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) temp_v1->unk0, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(temp_v1->unk0), (u8) (s32) temp_v1->unk8, temp_v1->unkC);
}

void func_80B8D12C(Actor *arg0, GlobalContext *arg1) {
    s16 sp22;
    s16 temp_v0;
    s32 temp_v0_2;
    void *temp_v1;
    s16 phi_a3;

    temp_v0 = arg0->unk32C;
    temp_v1 = arg1->actorCtx.actorList[2].first;
    phi_a3 = 0;
    if (temp_v0 == 2) {
        phi_a3 = 1;
    }
    if ((temp_v0 == 0) || (temp_v0_2 = arg0->parent, (temp_v0_2 == 0))) {
        arg0->unk1F0 = (s32) temp_v1->world.pos.x;
        arg0->unk1F4 = (f32) temp_v1->world.pos.y;
        arg0->unk1F8 = (s32) temp_v1->world.pos.z;
        arg0->unk1F4 = (f32) (arg0->unk1F4 - -10.0f);
    } else {
        sp22 = phi_a3;
        Math_Vec3f_StepTo(arg0 + 0x1F0, temp_v0_2 + 0x24, 8.0f);
        arg0->unk1F4 = (f32) (arg0->unk1F4 - -10.0f);
    }
    func_800BD888(arg0, arg0 + 0x1D8, 0, phi_a3);
}

void EnMaYts_InitAnimation(EnMaYts *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->type;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {
                    EnMaYts_ChangeAnim(NULL);
                    return;
                }
                arg0->actor.targetMode = 0;
                EnMaYts_ChangeAnim(NULL);
                return;
            }
            arg0->actor.targetMode = 0;
            arg0->actor.draw = EnMaYts_DrawSleeping;
            EnMaYts_ChangeAnim(NULL);
            return;
        }
        arg0->actor.targetMode = 6;
        if ((((s32) gSaveContext.day % 5) == 1) || ((gSaveContext.weekEventReg[22] & 1) != 0)) {
            EnMaYts_ChangeAnim((EnMaYts *)0xE);
            return;
        }
        EnMaYts_ChangeAnim((EnMaYts *)0x12);
        return;
    }
    arg0->actor.targetMode = 0;
    EnMaYts_ChangeAnim(NULL);
}

s32 EnMaYts_CheckValidSpawn(EnMaYts *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s32 temp_hi;

    temp_v0 = arg0->type;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {

                }
                // Duplicate return node #20. Try simplifying control flow for better match
                return 1;
            }
            if ((gSaveContext.weekEventReg[22] & 1) != 0) {
                return 0;
            }
            // Duplicate return node #20. Try simplifying control flow for better match
            return 1;
        }
        temp_hi = (s32) gSaveContext.day % 5;
        if (temp_hi != 1) {
            if (temp_hi != 2) {
                if (temp_hi != 3) {
                    // Duplicate return node #20. Try simplifying control flow for better match
                    return 1;
                }
                if ((gSaveContext.weekEventReg[22] & 1) != 0) {
                    return 0;
                }
                // Duplicate return node #20. Try simplifying control flow for better match
                return 1;
            }
            if ((gSaveContext.weekEventReg[22] & 1) == 0) {
                return 0;
            }
            // Duplicate return node #20. Try simplifying control flow for better match
            return 1;
        }
        // Duplicate return node #20. Try simplifying control flow for better match
        return 1;
    }
    if ((gSaveContext.weekEventReg[22] & 1) == 0) {
        return 0;
    }
    if (((s32) gSaveContext.time >= 0xD555) && (((s32) gSaveContext.day % 5) == 3)) {
        return 0;
    }
    return 1;
}

void EnMaYts_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnMaYts *this = (EnMaYts *) thisx;
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a1;

    this->type = (s16) ((s32) (this->actor.params & 0xF000) >> 0xC);
    if (EnMaYts_CheckValidSpawn(this, globalCtx) == 0) {
        Actor_MarkForDeath(&this->actor);
    }
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 18.0f);
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06013928, NULL, this->limbDrawTbl, this->transitionDrawTbl, 0x17);
    EnMaYts_InitAnimation(this, globalCtx);
    temp_a1 = &this->collider;
    sp30 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &D_80B8E170);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80B8E19C);
    if (this->type == 2) {
        this->collider.dim.radius = 0x28;
    }
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 4U);
    Actor_SetScale(&this->actor, 0.01f);
    this->unk_1D8.unk_00 = 0;
    this->unk_200 = 0;
    this->blinkTimer = 0;
    if (this->type == 3) {
        this->hasBow = 1;
    } else {
        this->hasBow = 0;
    }
    if ((((s32) gSaveContext.day % 5) == 1) || ((gSaveContext.weekEventReg[22] & 1) != 0)) {
        this->overrideEyeTexIndex = 0;
        this->eyeTexIndex = 0;
        this->mouthTexIndex = 0;
        this->unk_32C = 0;
    } else {
        this->overrideEyeTexIndex = 1;
        this->eyeTexIndex = 1;
        this->mouthTexIndex = 2;
        this->unk_32C = 2;
    }
    if (this->type == 3) {
        this->overrideEyeTexIndex = 0;
        this->eyeTexIndex = 0;
        this->mouthTexIndex = 0;
        this->unk_32C = 2;
        EnMaYts_SetupEndCreditsHandler(this);
        return;
    }
    if ((((s32) gSaveContext.day % 5) == 2) && (gSaveContext.isNight == 1) && ((gSaveContext.weekEventReg[22] & 1) != 0)) {
        EnMaYts_SetupStartDialogue(this);
        return;
    }
    EnMaYts_SetupDoNothing(this);
}

void EnMaYts_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnMaYts *this = (EnMaYts *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnMaYts_SetupDoNothing(EnMaYts *this) {
    EnMaYts *self = (EnMaYts *) this;
    self->actionFunc = EnMaYts_DoNothing;
}

void EnMaYts_DoNothing(EnMaYts *this, GlobalContext *globalCtx) {
    EnMaYts *self = (EnMaYts *) this;

}

void EnMaYts_SetupStartDialogue(EnMaYts *this) {
    EnMaYts *self = (EnMaYts *) this;
    EnMaYts_SetFaceExpression(self, 0, 0);
    self->actionFunc = EnMaYts_StartDialogue;
}

void EnMaYts_StartDialogue(EnMaYts *this, GlobalContext *globalCtx) {
    EnMaYts *self = (EnMaYts *) this;
    s16 sp26;
    s16 temp_v1;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    s32 phi_v0;

    temp_v1 = self->actor.shape.rot.y - self->actor.yawTowardsPlayer;
    sp26 = temp_v1;
    if (func_800B84D0(&self->actor, globalCtx) != 0) {
        if (gSaveContext.playerForm != 4) {
            temp_v0 = gSaveContext.weekEventReg[65];
            if ((temp_v0 & 0x80) == 0) {
                gSaveContext.weekEventReg[65] = temp_v0 | 0x80;
                EnMaYts_SetFaceExpression(self, 0, 0);
                func_801518B0(globalCtx, 0x335FU, &self->actor);
                self->textId = 0x335F;
            } else {
                EnMaYts_SetFaceExpression(self, 4, 3);
                func_801518B0(globalCtx, 0x3362U, &self->actor);
                self->textId = 0x3362;
                func_80151BB4(globalCtx, 5U);
            }
        } else if (Player_GetMask(globalCtx) != 0) {
            temp_v0_2 = gSaveContext.weekEventReg[65];
            if ((temp_v0_2 & 0x40) == 0) {
                gSaveContext.weekEventReg[65] = temp_v0_2 | 0x40;
                EnMaYts_SetFaceExpression(self, 0, 0);
                func_801518B0(globalCtx, 0x3363U, &self->actor);
                self->textId = 0x3363;
            } else {
                EnMaYts_SetFaceExpression(self, 4, 2);
                func_801518B0(globalCtx, 0x3366U, &self->actor);
                self->textId = 0x3366;
                func_80151BB4(globalCtx, 5U);
            }
        } else if ((gSaveContext.weekEventReg[21] & 0x20) == 0) {
            EnMaYts_SetFaceExpression(self, 0, 0);
            func_801518B0(globalCtx, 0x3367U, &self->actor);
            self->textId = 0x3367;
        } else {
            temp_v0_3 = gSaveContext.weekEventReg[65];
            if ((temp_v0_3 & 0x20) == 0) {
                gSaveContext.weekEventReg[65] = temp_v0_3 | 0x20;
                EnMaYts_SetFaceExpression(self, 4, 2);
                func_801518B0(globalCtx, 0x3369U, &self->actor);
                self->textId = 0x3369;
            } else {
                EnMaYts_SetFaceExpression(self, 0, 0);
                func_801518B0(globalCtx, 0x336CU, &self->actor);
                self->textId = 0x336C;
                func_80151BB4(globalCtx, 5U);
            }
        }
        EnMaYts_SetupDialogueHandler(self);
        return;
    }
    phi_v0 = (s32) temp_v1;
    if ((s32) temp_v1 < 0) {
        phi_v0 = -(s32) temp_v1;
    }
    if (phi_v0 < 0x4000) {
        func_800B8614(&self->actor, globalCtx, 120.0f);
    }
}

void EnMaYts_SetupDialogueHandler(EnMaYts *this) {
    EnMaYts *self = (EnMaYts *) this;
    self->actionFunc = EnMaYts_DialogueHandler;
}

void EnMaYts_DialogueHandler(EnMaYts *this, GlobalContext *globalCtx) {
    EnMaYts *self = (EnMaYts *) this;
    u32 temp_v0;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    switch (temp_v0) {
    case 5:
        EnMaYts_ChooseNextDialogue(self, globalCtx);
        return;
    case 6:
        if (func_80147624(globalCtx) != 0) {
            EnMaYts_SetupStartDialogue(self);
        }
        // fallthrough
    default:
        return;
    }
}

void EnMaYts_SetupEndCreditsHandler(EnMaYts *this) {
    EnMaYts *self = (EnMaYts *) this;
    self->actor.flags |= 0x10;
    EnMaYts_SetFaceExpression(self, 0, 0);
    self->actionFunc = EnMaYts_EndCreditsHandler;
}

void EnMaYts_EndCreditsHandler(EnMaYts *this, GlobalContext *globalCtx) {
    EnMaYts *self = (EnMaYts *) this;
    u32 sp24;
    s32 temp_t6;
    u16 temp_a1;
    u16 temp_v1_2;
    u32 temp_v0;
    void *temp_a0;
    void *temp_v1;

    if (func_800EE29C(globalCtx, 0x78U) != 0) {
        temp_v0 = func_800EE200(globalCtx, 0x78U);
        temp_t6 = temp_v0 * 4;
        sp24 = temp_v0;
        temp_a0 = globalCtx + temp_t6;
        temp_v1 = temp_a0->unk1F4C;
        if (globalCtx->csCtx.frames == temp_v1->unk2) {
            temp_a1 = temp_v1->unk0;
            if (D_80B8E32C != temp_a1) {
                D_80B8E32C = temp_a1;
                self->endCreditsFlag = 0;
                temp_v1_2 = temp_a0->unk1F4C->unk0;
                if (temp_v1_2 != 1) {
                    if (temp_v1_2 != 2) {
                        if (temp_v1_2 != 3) {
                            if (temp_v1_2 != 4) {

                            } else {
                                self->hasBow = 1;
                                EnMaYts_ChangeAnim(self, 0x14, 1, globalCtx);
                                goto block_12;
                            }
                        } else {
                            self->hasBow = 1;
                            EnMaYts_ChangeAnim(self, 0xC, 1, globalCtx);
                            goto block_12;
                        }
                    } else {
                        self->hasBow = 0;
                        EnMaYts_ChangeAnim(self, 2, 1, globalCtx);
                        goto block_12;
                    }
                } else {
                    self->hasBow = 1;
                    EnMaYts_ChangeAnim(self, 0, 1, globalCtx);
block_12:
                }
            }
        }
        func_800EDF24(&self->actor, globalCtx, sp24);
        if ((D_80B8E32C == 2) && (self->endCreditsFlag == 0) && (func_801378B8(&self->skelAnime, self->skelAnime.animFrameCount) != 0)) {
            self->endCreditsFlag += 1;
            EnMaYts_ChangeAnim(self, 5);
            return;
        }
        // Duplicate return node #18. Try simplifying control flow for better match
        return;
    }
    D_80B8E32C = 0x63;
    self->hasBow = 1;
}

void EnMaYts_ChooseNextDialogue(EnMaYts *this, GlobalContext *globalCtx) {
    EnMaYts *self = (EnMaYts *) this;
    u16 temp_t6;

    if (func_80147624(globalCtx) != 0) {
        temp_t6 = self->textId;
        switch (temp_t6) {
        case 13151:
            EnMaYts_SetFaceExpression(self, 0, 2);
            func_801518B0(globalCtx, 0x3360U, &self->actor);
            self->textId = 0x3360;
            return;
        case 13152:
            EnMaYts_SetFaceExpression(self, 4, 3);
            func_801518B0(globalCtx, 0x3361U, &self->actor);
            self->textId = 0x3361;
            func_80151BB4(globalCtx, 5U);
            return;
        case 13155:
            EnMaYts_SetFaceExpression(self, 1, 1);
            func_801518B0(globalCtx, 0x3364U, &self->actor);
            self->textId = 0x3364;
            return;
        case 13156:
            EnMaYts_SetFaceExpression(self, 4, 2);
            func_801518B0(globalCtx, 0x3365U, &self->actor);
            self->textId = 0x3365;
            func_80151BB4(globalCtx, 5U);
            return;
        case 13159:
            EnMaYts_SetFaceExpression(self, 4, 3);
            func_801518B0(globalCtx, 0x3368U, &self->actor);
            self->textId = 0x3368;
            func_80151BB4(globalCtx, 5U);
            return;
        case 13161:
            EnMaYts_SetFaceExpression(self, 0, 0);
            func_801518B0(globalCtx, 0x336AU, &self->actor);
            self->textId = 0x336A;
            return;
        case 13162:
            EnMaYts_SetFaceExpression(self, 3, 3);
            func_801518B0(globalCtx, 0x336BU, &self->actor);
            self->textId = 0x336B;
            func_80151BB4(globalCtx, 5U);
            // Duplicate return node #10. Try simplifying control flow for better match
            return;
        }
    } else {
    default:
    }
}

void EnMaYts_SetFaceExpression(EnMaYts *this, s16 overrideEyeTexIndex, s16 mouthTexIndex) {
    EnMaYts *self = (EnMaYts *) this;
    self->overrideEyeTexIndex = overrideEyeTexIndex;
    self->mouthTexIndex = mouthTexIndex;
    if (self->overrideEyeTexIndex == 0) {
        self->eyeTexIndex = 0;
    }
}

void EnMaYts_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnMaYts *this = (EnMaYts *) thisx;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a2;

    this->actionFunc(this, globalCtx);
    temp_a2 = &this->collider;
    sp24 = temp_a2;
    Collider_UpdateCylinder(&this->actor, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    EnMaYts_UpdateEyes(this);
    func_80B8D12C(&this->actor, globalCtx);
}

s32 EnMaYts_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    s16 sp4;
    s32 temp_a0;

    if (arg1 == 0xE) {
        sp4.unk0 = (s32) (unaligned s32) arg5->unk1E0;
        sp4.unk4 = (u16) arg5->unk1E4;
        arg4->x += sp6;
        temp_a0 = arg5->unk14C;
        if ((&D_06009E58 == temp_a0) || (&D_06007D98 == temp_a0)) {
            arg4->z += sp4;
        }
    } else if (arg1 == 0xD) {
        sp4.unk0 = (s32) (unaligned s32) arg5->unk1E6;
        sp4.unk4 = (u16) arg5->unk1EA;
        arg4->x += sp6;
        arg4->z += sp4;
    }
    return 0;
}

void EnMaYts_PostLimbDraw(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    void *temp_a0;
    void *temp_v1;

    if (arg1 == 0xE) {
        SysMatrix_GetStateTranslation(arg4 + 0x3C);
        return;
    }
    if ((arg1 == 0x13) && (arg4->unk336 == 1)) {
        temp_a0 = *arg0;
        temp_v1 = temp_a0->unk2B0;
        temp_a0->unk2B0 = (void *) (temp_v1 + 8);
        temp_v1->unk4 = &D_060003B0;
        temp_v1->unk0 = 0xDE000000;
    }
}

void EnMaYts_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnMaYts *this = (EnMaYts *) thisx;
    GraphicsContext *sp30;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;

    temp_a0 = globalCtx->state.gfxCtx;
    sp30 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v1 = sp30->polyOpa.p;
    sp30->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDB060024;
    temp_a0_2 = *(&D_80B8E308 + (this->mouthTexIndex * 4));
    temp_v1->words.w1 = (temp_a0_2 & 0xFFFFFF) + gSegments[(u32) (temp_a0_2 * 0x10) >> 0x1C] + 0x80000000;
    temp_v1_2 = sp30->polyOpa.p;
    sp30->polyOpa.p = temp_v1_2 + 8;
    temp_v1_2->words.w0 = 0xDB060020;
    temp_a0_3 = *(&D_80B8E318 + (this->eyeTexIndex * 4));
    temp_v1_2->words.w1 = (temp_a0_3 & 0xFFFFFF) + gSegments[(u32) (temp_a0_3 * 0x10) >> 0x1C] + 0x80000000;
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, EnMaYts_OverrideLimbDraw, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) EnMaYts_PostLimbDraw, &this->actor);
}

void EnMaYts_DrawSleeping(Actor *thisx, GlobalContext *globalCtx) {
    EnMaYts *this = (EnMaYts *) thisx;
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    temp_a0 = globalCtx->state.gfxCtx;
    sp24 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp24->polyOpa.p;
    sp24->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = sp24;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = sp24->polyOpa.p;
    sp24->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_060043A0;
    temp_v0_2->words.w0 = 0xDE000000;
}

