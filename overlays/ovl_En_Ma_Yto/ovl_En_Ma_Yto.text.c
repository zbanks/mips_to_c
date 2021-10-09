s32 EnMaYto_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void EnMaYto_PostLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
s32 EnMaYto_SearchRomani(void *arg0, void *arg1);   /* static */
void EnMaYto_UpdateCollision(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B90C78(Actor *arg0, GlobalContext *arg1); /* static */
extern ? D_06001FD0;
extern ? D_06003D54;
extern ? D_06005430;
extern ? D_060070EC;
extern ? D_06007E28;
extern ? D_0600A174;
extern ? D_0600AF7C;
extern FlexSkeletonHeader D_06015C28;
static ColliderCylinderInit D_80B91410 = {
    {0xA, 0, 0, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0x12, 0x2E, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80B9143C = {0, 0, 0, 0, 0xFF};
static ? D_80B91448;                                /* unable to generate initializer */
static ? D_80B915C8;                                /* unable to generate initializer */
static ? D_80B915D8;                                /* unable to generate initializer */
static u16 D_80B915F0 = 0x63;



void EnMaYto_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnMaYto *this = (EnMaYto *) thisx;
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a1;

    this->actor.targetMode = 0;
    this->unk200 = 0;
    this->unk310 = 0;
    this->unk320 = 0;
    this->eyeTexIndex = 0;
    if ((((s32) gSaveContext.day % 5) == 1) || ((gSaveContext.weekEventReg[22] & 1) != 0)) {
        EnMaYto_SetFaceExpression(this, 0, 1);
    } else {
        EnMaYto_SetFaceExpression(this, 5, 2);
    }
    this->unk31E = 0;
    this->blinkTimer = 0x64;
    this->type = (s32) (this->actor.params & 0xF000) >> 0xC;
    if (EnMaYto_CheckValidSpawn(this, globalCtx) == 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 18.0f);
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06015C28, NULL, this->limbDrawTbl, this->transitionDrawTbl, 0x16);
    EnMaYto_InitAnimation(this, globalCtx);
    temp_a1 = &this->collider;
    sp30 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &D_80B91410);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80B9143C);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 4U);
    if (EnMaYto_TryFindRomani(this, globalCtx) == 1) {
        EnMaYto_SetupKeepLookingForRomani(this);
        return;
    }
    EnMaYto_ChooseAction(this, globalCtx);
}

s32 EnMaYto_CheckValidSpawn(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    s32 temp_t6;
    u8 temp_v0;

    temp_t6 = self->type;
    switch (temp_t6) {
    case 0:
        if ((((s32) gSaveContext.day % 5) == 3) && ((gSaveContext.weekEventReg[22] & 1) == 0)) {
            return 0;
        }
    default:
        return 1;
    case 2:
        if ((((s32) gSaveContext.day % 5) != 1) && ((gSaveContext.weekEventReg[22] & 1) != 0)) {
            return 0;
        }
        // Duplicate return node #20. Try simplifying control flow for better match
        return 1;
    case 1:
        if ((gSaveContext.weekEventReg[22] & 1) != 0) {
            if (((s32) (self->actor.params & 0xF00) >> 8) != 0) {
                return 0;
            }
            goto block_13;
        }
        if (((s32) (self->actor.params & 0xF00) >> 8) == 0) {
            return 0;
        }
block_13:
        if (((s32) gSaveContext.time >= 0xD555) && (((s32) gSaveContext.day % 5) == 3)) {
            return 0;
        }
        // Duplicate return node #20. Try simplifying control flow for better match
        return 1;
    case 3:
        temp_v0 = gSaveContext.weekEventReg[52];
        if ((((temp_v0 & 1) == 0) && ((temp_v0 & 2) == 0)) || ((gSaveContext.weekEventReg[14] & 1) != 0)) {
            return 0;
        }
        // Duplicate return node #20. Try simplifying control flow for better match
        return 1;
    }
}

void EnMaYto_InitAnimation(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    s32 temp_t6;

    temp_t6 = self->type;
    switch (temp_t6) {
    case 0:
        EnMaYto_ChangeAnim(self, 0xA);
        return;
    case 2:
        if (((s32) gSaveContext.day % 5) == 1) {
            EnMaYto_ChangeAnim(self, 0xE);
            return;
        }
        EnMaYto_ChangeAnim(self, 0x10);
        return;
    case 1:
        if ((gSaveContext.weekEventReg[22] & 1) != 0) {
            EnMaYto_ChangeAnim(self, 0xC);
            return;
        }
        EnMaYto_ChangeAnim(self, 8);
        return;
    case 3:
        EnMaYto_ChangeAnim(self, 0);
        return;
    case 4:
        EnMaYto_ChangeAnim(self, 0);
        return;
    default:
        EnMaYto_ChangeAnim(self, 0);
        return;
    }
}

void EnMaYto_ChooseAction(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    s32 temp_t6;

    temp_t6 = self->type;
    switch (temp_t6) {
    case 0:
        EnMaYto_SetupDefaultWait(self);
        return;
    case 2:
        self->actor.targetMode = 6;
        EnMaYto_SetupDinnerWait(self);
        return;
    case 1:
        EnMaYto_SetupBarnWait(self);
        return;
    case 3:
        self->unk310 = 0;
        if ((gSaveContext.inventory.items[gItemSlots[0x3C]] == 0x3C) && ((gSaveContext.weekEventReg[52] & 1) != 0) && ((Rand_Next() & 0x80) != 0)) {
            EnMaYto_SetupBeginWarmFuzzyFeelingCs(self);
            return;
        }
        EnMaYto_SetupAfterMilkRunInit(self);
        return;
    case 4:
        self->actor.flags |= 0x10;
        EnMaYto_SetupWarmFuzzyFeelingCs(self);
        return;
    default:
        EnMaYto_SetupDefaultWait(self);
        return;
    }
}

s32 EnMaYto_SearchRomani(void *arg0, void *arg1) {
    s32 temp_a1;
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *phi_v1;

    temp_v1 = arg1->unk1CE4;
    phi_v1 = temp_v1;
    if (temp_v1 != 0) {
loop_1:
        if (phi_v1->unk0 == 0x21F) {
            temp_a1 = arg0->unk204;
            temp_v0 = (s32) (phi_v1->unk1C & 0xF000) >> 0xC;
            if (((temp_a1 == 2) && ((s16) temp_v0 == 1)) || ((temp_a1 == 1) && ((s16) temp_v0 == 0))) {
                arg0->unk124 = phi_v1;
                phi_v1->unk120 = arg0;
                return 1;
            }
            goto block_8;
        }
block_8:
        temp_v1_2 = phi_v1->unk12C;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 == 0) {
            // Duplicate return node #9. Try simplifying control flow for better match
            return 0;
        }
        goto loop_1;
    }
    return 0;
}

s32 EnMaYto_TryFindRomani(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    s32 temp_t6;

    temp_t6 = self->type;
    switch (temp_t6) {
    case 0:
        return 0;
    case 2:
        if (((gSaveContext.weekEventReg[22] & 1) == 0) && (((s32) gSaveContext.day % 5) == 2)) {
            return 0;
        }
        if (EnMaYto_SearchRomani() != 0) {
            return 2;
        }
        return 1;
    case 1:
        if ((gSaveContext.weekEventReg[22] & 1) != 0) {
            if (EnMaYto_SearchRomani() != 0) {
                return 2;
            }
            return 1;
        }
        return 0;
    case 3:
        return 0;
    case 4:
        // fallthrough
    default:
        return 0;
    }
}

void EnMaYto_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnMaYto *this = (EnMaYto *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnMaYto_SetupKeepLookingForRomani(EnMaYto *this) {
    EnMaYto *self = (EnMaYto *) this;
    self->actionFunc = EnMaYto_KeepLookingForRomani;
}

void EnMaYto_KeepLookingForRomani(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    if (EnMaYto_TryFindRomani(self, globalCtx) == 2) {
        EnMaYto_ChooseAction(self, globalCtx);
    }
}

void EnMaYto_SetupDefaultWait(EnMaYto *this) {
    EnMaYto *self = (EnMaYto *) this;
    if (self->actor.home.rot.y == self->actor.shape.rot.y) {
        self->currentAnim = 0xB;
        EnMaYto_ChangeAnim(self, 0xB);
    } else {
        self->currentAnim = 1;
        EnMaYto_ChangeAnim(self, 1);
    }
    EnMaYto_InitFaceExpression(self);
    self->unk31E = 2;
    self->actionFunc = EnMaYto_DefaultWait;
}

void EnMaYto_DefaultWait(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    s16 sp2C;
    s16 temp_a1;
    s32 phi_v0;

    temp_a1 = self->actor.home.rot.y;
    sp2C = (s16) (temp_a1 - 0x8000) - self->actor.yawTowardsPlayer;
    if ((Math_SmoothStepToS(&self->actor.shape.rot.y, temp_a1, 5, 0x3000, (s16) 0x100) == 0) && (self->currentAnim == 1)) {
        self->currentAnim = 0xB;
        EnMaYto_ChangeAnim(self, 0xB);
    }
    if (func_800B84D0(&self->actor, globalCtx) != 0) {
        EnMaYto_DefaultStartDialogue(self, globalCtx);
        EnMaYto_SetupDefaultDialogueHandler(self);
        return;
    }
    phi_v0 = (s32) sp2C;
    if ((s32) sp2C < 0) {
        phi_v0 = -(s32) sp2C;
    }
    if (phi_v0 < 0x1555) {
        func_800B8614(&self->actor, globalCtx, 100.0f);
    }
}

void EnMaYto_SetupDefaultDialogueHandler(EnMaYto *this) {
    EnMaYto *self = (EnMaYto *) this;
    EnMaYto_ChangeAnim(self, 1);
    self->unk31E = 2;
    self->actionFunc = EnMaYto_DefaultDialogueHandler;
}

void EnMaYto_DefaultDialogueHandler(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    u32 temp_v0;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    switch (temp_v0) {
    case 4:
        EnMaYto_DefaultHandlePlayerChoice(self, globalCtx);
        break;
    case 5:
        EnMaYto_DefaultChooseNextDialogue(self, globalCtx);
        break;
    case 6:
        if (func_80147624(globalCtx) != 0) {
            self->unk31E = 0;
            EnMaYto_SetupDefaultWait(self);
        }
        break;
    }
    Math_SmoothStepToS(&self->actor.shape.rot.y, self->actor.yawTowardsPlayer, 5, 0x3000, (s16) 0x100);
    if ((self->textId == 0x3395) && (&D_0600AF7C == self->skelAnime.animCurrentSeg) && (func_801378B8(&self->skelAnime, self->skelAnime.animFrameCount) != 0)) {
        EnMaYto_ChangeAnim(self, 4);
    }
}

void EnMaYto_DefaultHandlePlayerChoice(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    if (func_80147624(globalCtx) != 0) {
        if (globalCtx->msgCtx.choiceIndex == 0) {
            func_8019F208();
            EnMaYto_SetFaceExpression(self, 0, 3);
            func_801518B0(globalCtx, 0x3392U, &self->actor);
            self->textId = 0x3392;
            return;
        }
        func_8019F230();
        func_801518B0(globalCtx, 0x3391U, &self->actor);
        self->textId = 0x3391;
        // Duplicate return node #4. Try simplifying control flow for better match
    }
}

void EnMaYto_DefaultChooseNextDialogue(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    u16 temp_v0;

    if (func_80147624(globalCtx) != 0) {
        temp_v0 = self->textId;
        if (temp_v0 != 0x3391) {
            if (temp_v0 != 0x3392) {
                if (temp_v0 != 0x3394) {
                    if (temp_v0 != 0x3395) {
                        return;
                    }
                    EnMaYto_ChangeAnim(self, 1);
                    func_801518B0(globalCtx, 0x3396U, &self->actor);
                    self->textId = 0x3396;
                    func_80151BB4(globalCtx, 6U);
                    // Duplicate return node #10. Try simplifying control flow for better match
                    return;
                }
                EnMaYto_ChangeAnim(self, 2);
                func_801518B0(globalCtx, 0x3395U, &self->actor);
                self->textId = 0x3395;
                return;
            }
            EnMaYto_SetFaceExpression(self, 3, 1);
            func_801518B0(globalCtx, 0x3393U, &self->actor);
            self->textId = 0x3393;
            func_80151BB4(globalCtx, 6U);
            return;
        }
        EnMaYto_SetFaceExpression(self, 0, 3);
        func_801518B0(globalCtx, 0x3392U, &self->actor);
        self->textId = 0x3392;
    }
}

void EnMaYto_SetupDinnerWait(EnMaYto *this) {
    EnMaYto *self = (EnMaYto *) this;
    if ((((s32) gSaveContext.day % 5) == 1) || ((gSaveContext.weekEventReg[22] & 1) != 0)) {
        func_80B90E50(self, 0);
        self->unk31E = 0;
    } else {
        func_80B90E50(self, 2);
        self->unk31E = 2;
    }
    EnMaYto_InitFaceExpression(self);
    self->actionFunc = EnMaYto_DinnerWait;
}

void EnMaYto_DinnerWait(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    s16 sp26;
    Actor *temp_a0;
    Actor *temp_a0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 phi_v0;
    s32 phi_v0_2;

    temp_v1 = self->actor.shape.rot.y - self->actor.yawTowardsPlayer;
    sp26 = temp_v1;
    if (func_800B84D0(&self->actor, globalCtx) != 0) {
        EnMaYto_DinnerStartDialogue(self, globalCtx);
        EnMaYto_SetupDinnerDialogueHandler(self);
        return;
    }
    temp_a0 = self->actor.child;
    if ((temp_a0 != 0) && (sp26 = temp_v1, (func_800B84D0(temp_a0, globalCtx) != 0))) {
        func_800B86C8(&self->actor, globalCtx, &self->actor);
        EnMaYto_DinnerStartDialogue(self, globalCtx);
        EnMaYto_SetupDinnerDialogueHandler(self);
        return;
    }
    phi_v0 = (s32) temp_v1;
    if ((s32) temp_v1 < 0) {
        phi_v0 = -(s32) temp_v1;
    }
    if (phi_v0 < 0x4000) {
        func_800B8614(&self->actor, globalCtx, 120.0f);
        temp_a0_2 = self->actor.child;
        if ((temp_a0_2 != 0) && (((s32) gSaveContext.day % 5) != 2)) {
            temp_v1_2 = temp_a0_2->shape.rot.y - temp_a0_2->yawTowardsPlayer;
            phi_v0_2 = (s32) temp_v1_2;
            if ((s32) temp_v1_2 < 0) {
                phi_v0_2 = -(s32) temp_v1_2;
            }
            if (phi_v0_2 < 0x4000) {
                func_800B8614(temp_a0_2, globalCtx, 120.0f);
            }
        }
    }
}

void EnMaYto_SetupDinnerDialogueHandler(EnMaYto *this) {
    EnMaYto *self = (EnMaYto *) this;
    if ((((s32) gSaveContext.day % 5) == 1) || ((gSaveContext.weekEventReg[22] & 1) != 0)) {
        func_80B90E50(self, 1);
    } else {
        func_80B90E50(self, 2);
    }
    self->unk31E = 0;
    self->actionFunc = EnMaYto_DinnerDialogueHandler;
}

void EnMaYto_DinnerDialogueHandler(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    u32 temp_v0;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    switch (temp_v0) {
    case 4:
        EnMaYto_DinnerHandlePlayerChoice(self, globalCtx);
        return;
    case 5:
        EnMaYto_DinnerChooseNextDialogue(self, globalCtx);
        return;
    case 6:
        if (func_80147624(globalCtx) != 0) {
            EnMaYto_SetupDinnerWait(self);
        }
        // fallthrough
    default:
        return;
    }
}

void EnMaYto_DinnerHandlePlayerChoice(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    if (func_80147624(globalCtx) != 0) {
        if (globalCtx->msgCtx.choiceIndex == 0) {
            func_8019F208();
            EnMaYto_SetFaceExpression(self, 0, 3);
            func_801518B0(globalCtx, 0x3399U, &self->actor);
            self->textId = 0x3399;
            return;
        }
        func_8019F230();
        func_801518B0(globalCtx, 0x3398U, &self->actor);
        self->textId = 0x3398;
        // Duplicate return node #4. Try simplifying control flow for better match
    }
}

void EnMaYto_DinnerChooseNextDialogue(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    u16 temp_t6;

    if (func_80147624(globalCtx) != 0) {
        temp_t6 = self->textId;
        switch (temp_t6) {
        case 13208:
            EnMaYto_SetFaceExpression(self, 0, 3);
            func_801518B0(globalCtx, 0x3399U, &self->actor);
            self->textId = 0x3399;
            return;
        case 13209:
            EnMaYto_SetFaceExpression(self, 3, 1);
            func_801518B0(globalCtx, 0x339AU, &self->actor);
            self->textId = 0x339A;
            return;
        case 13210:
            self->unk31E = 1;
            EnMaYto_SetFaceExpression(self, 0, 1);
            func_801518B0(globalCtx, 0x339BU, &self->actor);
            self->textId = 0x339B;
            return;
        case 13211:
            func_800B86C8(&self->actor, globalCtx, self->actor.child);
            func_80B90E50(self, 0);
            EnMaYto_SetRomaniFaceExpression(self, 3, 3);
            func_801518B0(globalCtx, 0x339CU, &self->actor);
            self->textId = 0x339C;
            return;
        case 13212:
            self->unk31E = 1;
            func_800B86C8(&self->actor, globalCtx, &self->actor);
            EnMaYto_SetFaceExpression(self, 0, 2);
            func_801518B0(globalCtx, 0x339DU, &self->actor);
            self->textId = 0x339D;
            return;
        case 13213:
            func_80B90E50(self, 1);
            func_800B86C8(&self->actor, globalCtx, self->actor.child);
            EnMaYto_SetRomaniFaceExpression(self, 0, 1);
            func_801518B0(globalCtx, 0x339EU, &self->actor);
            self->textId = 0x339E;
            func_80151BB4(globalCtx, 6U);
            func_80151BB4(globalCtx, 5U);
            return;
        case 13215:
            self->unk31E = 0;
            func_801518B0(globalCtx, 0x33A0U, &self->actor);
            self->textId = 0x33A0;
            return;
        case 13216:
            func_801518B0(globalCtx, 0x33A1U, &self->actor);
            self->textId = 0x33A1;
            return;
        case 13217:
            func_80B90E50(self, 1);
            func_800B86C8(&self->actor, globalCtx, self->actor.child);
            EnMaYto_SetRomaniFaceExpression(self, 0, 2);
            func_801518B0(globalCtx, 0x33A2U, &self->actor);
            self->textId = 0x33A2;
            return;
        case 13218:
            self->unk31E = 1;
            func_800B86C8(&self->actor, globalCtx, &self->actor);
            EnMaYto_SetFaceExpression(self, 4, 3);
            func_801518B0(globalCtx, 0x33A3U, &self->actor);
            self->textId = 0x33A3;
            return;
        case 13219:
            self->unk31E = 0;
            EnMaYto_SetFaceExpression(self, 3, 3);
            func_801518B0(globalCtx, 0x33A4U, &self->actor);
            self->textId = 0x33A4;
            func_80151BB4(globalCtx, 6U);
            func_80151BB4(globalCtx, 5U);
            return;
        case 13221:
            func_801518B0(globalCtx, 0x33A6U, &self->actor);
            self->textId = 0x33A6;
            func_80151BB4(globalCtx, 6U);
            return;
        case 13223:
            func_801518B0(globalCtx, 0x33A8U, &self->actor);
            self->textId = 0x33A8;
            func_80151BB4(globalCtx, 6U);
            // Duplicate return node #16. Try simplifying control flow for better match
            return;
        }
    } else {
    default:
    }
}

void EnMaYto_SetupBarnWait(EnMaYto *this) {
    EnMaYto *self = (EnMaYto *) this;
    if ((((s32) gSaveContext.day % 5) == 1) || ((gSaveContext.weekEventReg[22] & 1) != 0)) {
        EnMaYto_ChangeAnim(self, 0xD);
        func_80B90E50(self, 0);
        self->unk31E = 0;
    } else {
        self->unk320 = 0;
        EnMaYto_ChangeAnim(self, 9);
        func_80B90E50(self, 2);
        self->unk31E = 2;
    }
    EnMaYto_InitFaceExpression(self);
    self->actionFunc = EnMaYto_BarnWait;
}

void EnMaYto_BarnWait(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    s16 sp26;
    Actor *temp_a0;
    Actor *temp_a0_2;
    s16 temp_v1;
    s32 phi_v0;

    temp_v1 = (s16) (self->actor.shape.rot.y + 0x471C) - self->actor.yawTowardsPlayer;
    sp26 = temp_v1;
    if (func_800B84D0(&self->actor, globalCtx) != 0) {
        EnMaYto_BarnStartDialogue(self, globalCtx);
        EnMaYto_SetupBarnDialogueHandler(self);
        return;
    }
    temp_a0 = self->actor.child;
    if ((temp_a0 != 0) && (sp26 = temp_v1, (func_800B84D0(temp_a0, globalCtx) != 0))) {
        func_800B86C8(&self->actor, globalCtx, &self->actor);
        EnMaYto_BarnStartDialogue(self, globalCtx);
        EnMaYto_SetupBarnDialogueHandler(self);
        return;
    }
    if ((gSaveContext.weekEventReg[22] & 1) != 0) {
        phi_v0 = (s32) temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_v0 = -(s32) temp_v1;
        }
        if (phi_v0 < 0x2000) {
            goto block_9;
        }
    } else {
block_9:
        func_800B8614(&self->actor, globalCtx, 100.0f);
        temp_a0_2 = self->actor.child;
        if (temp_a0_2 != 0) {
            func_800B8614(temp_a0_2, globalCtx, 100.0f);
        }
    }
}

void EnMaYto_SetupBarnDialogueHandler(EnMaYto *this) {
    EnMaYto *self = (EnMaYto *) this;
    if ((((s32) gSaveContext.day % 5) == 1) || ((gSaveContext.weekEventReg[22] & 1) != 0)) {
        func_80B90E50(self, 1);
    } else {
        func_80B90E50(self, 2);
    }
    self->actionFunc = EnMaYto_BarnDialogueHandler;
}

void EnMaYto_BarnDialogueHandler(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    u32 temp_v0;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    switch (temp_v0) {
    case 5:
        EnMaYto_BarnChooseNextDialogue(self, globalCtx);
        return;
    case 6:
        if (func_80147624(globalCtx) != 0) {
            self->unk31E = 0;
            EnMaYto_SetupBarnWait(self);
        }
        // fallthrough
    default:
        return;
    }
}

void EnMaYto_BarnChooseNextDialogue(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    u16 temp_t6;

    if (func_80147624(globalCtx) != 0) {
        temp_t6 = self->textId;
        switch (temp_t6) {
        case 13225:
            func_80B90E50(self, 0);
            func_800B86C8(&self->actor, globalCtx, self->actor.child);
            EnMaYto_SetRomaniFaceExpression(self, 0, 3);
            func_801518B0(globalCtx, 0x33AAU, &self->actor);
            self->textId = 0x33AA;
            return;
        case 13226:
            func_800B86C8(&self->actor, globalCtx, &self->actor);
            self->unk31E = 1;
            func_801518B0(globalCtx, 0x33ABU, &self->actor);
            self->textId = 0x33AB;
            return;
        case 13227:
            func_80B90E50(self, 1);
            func_800B86C8(&self->actor, globalCtx, self->actor.child);
            EnMaYto_SetRomaniFaceExpression(self, 0, 1);
            func_801518B0(globalCtx, 0x33ACU, &self->actor);
            self->textId = 0x33AC;
            return;
        case 13228:
            self->unk31E = 0;
            func_800B86C8(&self->actor, globalCtx, &self->actor);
            func_801518B0(globalCtx, 0x33ADU, &self->actor);
            self->textId = 0x33AD;
            func_80151BB4(globalCtx, 6U);
            func_80151BB4(globalCtx, 5U);
            return;
        case 13230:
            func_80B90E50(self, 1);
            func_800B86C8(&self->actor, globalCtx, self->actor.child);
            EnMaYto_SetRomaniFaceExpression(self, 4, 2);
            func_801518B0(globalCtx, 0x33AFU, &self->actor);
            self->textId = 0x33AF;
            return;
        case 13231:
            self->unk31E = 1;
            func_800B86C8(&self->actor, globalCtx, &self->actor);
            EnMaYto_SetFaceExpression(self, 4, 2);
            func_801518B0(globalCtx, 0x33B0U, &self->actor);
            self->textId = 0x33B0;
            func_80151BB4(globalCtx, 6U);
            func_80151BB4(globalCtx, 5U);
            return;
        case 13233:
            self->unk31E = 2;
            EnMaYto_SetFaceExpression(self, 5, 3);
            func_801518B0(globalCtx, 0x33B2U, &self->actor);
            self->textId = 0x33B2;
            func_80151BB4(globalCtx, 6U);
            return;
        case 13254:
            func_800B86C8(&self->actor, globalCtx, self->actor.child);
            self->unk31E = 0;
            EnMaYto_SetFaceExpression(self, 0, 1);
            func_801518B0(globalCtx, 0x33C7U, &self->actor);
            self->textId = 0x33C7;
            return;
        case 13255:
            func_800B86C8(&self->actor, globalCtx, &self->actor);
            self->unk31E = 1;
            EnMaYto_SetFaceExpression(self, 0, 1);
            func_801518B0(globalCtx, 0x33C8U, &self->actor);
            self->textId = 0x33C8;
            return;
        case 13256:
            func_800B86C8(&self->actor, globalCtx, self->actor.child);
            func_80B90E50(self, 1);
            EnMaYto_SetRomaniFaceExpression(self, 0, 2);
            func_801518B0(globalCtx, 0x33C9U, &self->actor);
            self->textId = 0x33C9;
            return;
        case 13257:
            func_800B86C8(&self->actor, globalCtx, &self->actor);
            self->unk31E = 1;
            EnMaYto_SetFaceExpression(self, 3, 1);
            func_801518B0(globalCtx, 0x33CAU, &self->actor);
            self->textId = 0x33CA;
            return;
        case 13258:
            self->unk31E = 1;
            func_801518B0(globalCtx, 0x33CBU, &self->actor);
            self->textId = 0x33CB;
            return;
        case 13259:
            func_800B86C8(&self->actor, globalCtx, self->actor.child);
            func_80B90E50(self, 1);
            EnMaYto_SetRomaniFaceExpression(self, 3, 3);
            func_801518B0(globalCtx, 0x33CCU, &self->actor);
            self->textId = 0x33CC;
            func_80151BB4(globalCtx, 6U);
            func_80151BB4(globalCtx, 5U);
            // Duplicate return node #16. Try simplifying control flow for better match
            return;
        }
    } else {
    default:
    }
}

void EnMaYto_SetupAfterMilkRunInit(EnMaYto *this) {
    EnMaYto *self = (EnMaYto *) this;
    if ((gSaveContext.weekEventReg[52] & 1) != 0) {
        EnMaYto_SetFaceExpression(self, 3, 1);
    } else {
        func_801A3098(9U);
        EnMaYto_SetFaceExpression(self, 5, 2);
    }
    self->actionFunc = EnMaYto_AfterMilkRunInit;
}

void EnMaYto_AfterMilkRunInit(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    self->actor.flags |= 0x10000;
    if (func_800B84D0(&self->actor, globalCtx) != 0) {
        self->actor.flags &= 0xFFFEFFFF;
        if ((gSaveContext.weekEventReg[52] & 1) != 0) {
            func_801518B0(globalCtx, 0x33C1U, &self->actor);
            self->textId = 0x33C1;
            EnMaYto_SetupAfterMilkRunDialogueHandler(self);
            return;
        }
        EnMaYto_SetFaceExpression(self, 5, 2);
        func_801518B0(globalCtx, 0x33C0U, &self->actor);
        self->textId = 0x33C0;
        gSaveContext.weekEventReg[14] |= 1;
        self->unk310 = 4;
        EnMaYto_SetupPostMilkRunWaitDialogueEnd(self);
        func_80151BB4(globalCtx, 6U);
        return;
    }
    func_800B8614(&self->actor, globalCtx, 200.0f);
}

void EnMaYto_SetupAfterMilkRunDialogueHandler(EnMaYto *this) {
    EnMaYto *self = (EnMaYto *) this;
    self->actionFunc = EnMaYto_AfterMilkRunDialogueHandler;
}

void EnMaYto_AfterMilkRunDialogueHandler(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    u32 temp_v0;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    switch (temp_v0) {
    case 5:
        EnMaYto_AfterMilkRunChooseNextDialogue(self, globalCtx);
        break;
    }
    Math_SmoothStepToS(&self->actor.shape.rot.y, self->actor.yawTowardsPlayer, 5, 0x71C, (s16) 0xB6);
}

void EnMaYto_AfterMilkRunChooseNextDialogue(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    u16 temp_v0;

    if (func_80147624(globalCtx) != 0) {
        temp_v0 = self->textId;
        if (temp_v0 != 0x33C1) {
            if (temp_v0 != 0x33C2) {
                return;
            }
            func_801477B4(globalCtx);
            EnMaYto_SetupPostMilkRunGiveReward(self);
            EnMaYto_PostMilkRunGiveReward(self, globalCtx);
            // Duplicate return node #6. Try simplifying control flow for better match
            return;
        }
        EnMaYto_SetFaceExpression(self, 3, 1);
        func_801518B0(globalCtx, 0x33C2U, &self->actor);
        self->textId = 0x33C2;
    }
}

void EnMaYto_SetupPostMilkRunGiveReward(EnMaYto *this) {
    EnMaYto *self = (EnMaYto *) this;
    self->actionFunc = EnMaYto_PostMilkRunGiveReward;
}

void EnMaYto_PostMilkRunGiveReward(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    if (Actor_HasParent(&self->actor, globalCtx) != 0) {
        EnMaYto_SetupPostMilkRunExplainReward(self);
        return;
    }
    if (gSaveContext.inventory.items[gItemSlots[0x3C]] == 0x3C) {
        func_800B8A1C(&self->actor, globalCtx, 7, 500.0f, 100.0f);
        self->unk310 = 2;
        return;
    }
    func_800B8A1C(&self->actor, globalCtx, 0x82, 500.0f, 100.0f);
    self->unk310 = 1;
}

void EnMaYto_SetupPostMilkRunExplainReward(EnMaYto *this) {
    EnMaYto *self = (EnMaYto *) this;
    self->actionFunc = EnMaYto_PostMilkRunExplainReward;
}

void EnMaYto_PostMilkRunExplainReward(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    if (func_800B84D0(&self->actor, globalCtx) != 0) {
        if (self->unk310 == 1) {
            EnMaYto_SetFaceExpression(self, 0, 1);
            func_801518B0(globalCtx, 0x33C3U, &self->actor);
            self->textId = 0x33C3;
            gSaveContext.weekEventReg[14] |= 1;
            self->unk310 = 3;
            func_80151BB4(globalCtx, 0x20U);
            func_80151BB4(globalCtx, 0x1FU);
            func_80151BB4(globalCtx, 6U);
            EnMaYto_SetupPostMilkRunWaitDialogueEnd(self);
            return;
        }
        EnMaYto_SetFaceExpression(self, 0, 1);
        func_801518B0(globalCtx, 0x33D0U, &self->actor);
        self->textId = 0x33D0;
        gSaveContext.weekEventReg[14] |= 1;
        self->unk310 = 3;
        func_80151BB4(globalCtx, 6U);
        EnMaYto_SetupPostMilkRunWaitDialogueEnd(self);
        return;
    }
    func_800B85E0(&self->actor, globalCtx, 200.0f, -1);
}

void EnMaYto_SetupBeginWarmFuzzyFeelingCs(EnMaYto *this) {
    EnMaYto *self = (EnMaYto *) this;
    self->actionFunc = EnMaYto_BeginWarmFuzzyFeelingCs;
}

void EnMaYto_BeginWarmFuzzyFeelingCs(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    if (ActorCutscene_GetCanPlayNext((s16) self->actor.cutscene) != 0) {
        ActorCutscene_Start((s16) self->actor.cutscene, &self->actor);
        EnMaYto_SetupWarmFuzzyFeelingCs(self);
        return;
    }
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
    }
    ActorCutscene_SetIntentToPlay((s16) self->actor.cutscene);
}

void EnMaYto_SetupWarmFuzzyFeelingCs(EnMaYto *this) {
    EnMaYto *self = (EnMaYto *) this;
    EnMaYto_SetFaceExpression(self, 0, 1);
    self->actionFunc = EnMaYto_WarmFuzzyFeelingCs;
}

void EnMaYto_WarmFuzzyFeelingCs(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    u32 sp24;
    s32 temp_t6;
    u16 temp_a0;
    u32 temp_v0;
    void *temp_v1;

    if (func_800EE29C(globalCtx, 0x22CU) != 0) {
        temp_v0 = func_800EE200(globalCtx, 0x22CU);
        temp_t6 = temp_v0 * 4;
        sp24 = temp_v0;
        temp_v1 = (globalCtx + temp_t6)->unk1F4C;
        if (globalCtx->csCtx.frames == temp_v1->unk2) {
            temp_a0 = temp_v1->unk0;
            if (D_80B915F0 != temp_a0) {
                D_80B915F0 = temp_a0;
                if (temp_a0 != 1) {
                    if (temp_a0 != 2) {
                        if (temp_a0 != 3) {

                        } else {
                            EnMaYto_ChangeAnim(self, 0x16);
                            goto block_10;
                        }
                    } else {
                        gSaveContext.weekEventReg[14] |= 1;
                        EnMaYto_ChangeAnim(self, 0x12);
                        goto block_10;
                    }
                } else {
                    EnMaYto_ChangeAnim(self, 0);
block_10:
                }
            }
        }
        func_800EDF24(&self->actor, globalCtx, sp24);
        if ((D_80B915F0 == 2) && (&D_06001FD0 == self->skelAnime.animCurrentSeg) && (func_801378B8(&self->skelAnime, self->skelAnime.animFrameCount) != 0)) {
            EnMaYto_ChangeAnim(self, 0x14);
            return;
        }
        // Duplicate return node #16. Try simplifying control flow for better match
        return;
    }
    D_80B915F0 = 0x63;
}

void EnMaYto_SetupPostMilkRunWaitDialogueEnd(EnMaYto *this) {
    EnMaYto *self = (EnMaYto *) this;
    self->actionFunc = EnMaYto_PostMilkRunWaitDialogueEnd;
}

void EnMaYto_PostMilkRunWaitDialogueEnd(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    MessageContext *temp_s0;

    temp_s0 = &globalCtx->msgCtx;
    if (((func_80152498(temp_s0) == 6) || (func_80152498(temp_s0) == 5)) && (func_80147624(globalCtx) != 0) && (func_80152498(temp_s0) == 5)) {
        func_800B7298(globalCtx, &self->actor, 7U);
        func_801477B4(globalCtx);
    }
    if ((func_80152498(temp_s0) == 0) && (globalCtx->msgCtx.unk120B1 == 0)) {
        EnMaYto_SetupPostMilkRunEnd(self);
    }
}

void EnMaYto_SetupPostMilkRunEnd(EnMaYto *this) {
    EnMaYto *self = (EnMaYto *) this;
    self->actionFunc = EnMaYto_PostMilkRunEnd;
}

void EnMaYto_PostMilkRunEnd(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    if (self->unk310 == 3) {
        globalCtx->nextEntranceIndex = 0x54D0;
    } else {
        globalCtx->nextEntranceIndex = 0x6480;
    }
    gSaveContext.nextCutsceneIndex = 0;
    globalCtx->sceneLoadFlag = 0x14;
    globalCtx->unk_1887F = 0x50;
    gSaveContext.nextTransition = 3;
}

void EnMaYto_DefaultStartDialogue(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    s32 temp_hi;
    u8 temp_v0;

    temp_hi = (s32) gSaveContext.day % 5;
    if (temp_hi == 1) {
        if ((Player_GetMask(globalCtx) != 0) && (gSaveContext.playerForm == 4)) {
            temp_v0 = Player_GetMask(globalCtx);
            if (temp_v0 != 2) {
                if (temp_v0 != 7) {
                    if (temp_v0 != 8) {
                        if (temp_v0 != 0xA) {
                            func_801518B0(globalCtx, 0x2361U, &self->actor);
                            self->textId = 0x2361;
                            return;
                        }
                        func_801518B0(globalCtx, 0x2360U, &self->actor);
                        self->textId = 0x2360;
                        return;
                    }
                    EnMaYto_SetFaceExpression(self, 1, 3);
                    func_801518B0(globalCtx, 0x235EU, &self->actor);
                    self->textId = 0x235E;
                    return;
                }
                func_801518B0(globalCtx, 0x235DU, &self->actor);
                self->textId = 0x235D;
                return;
            }
            EnMaYto_SetFaceExpression(self, 1, 2);
            func_801518B0(globalCtx, 0x235FU, &self->actor);
            self->textId = 0x235F;
            return;
        }
        if (EnMaYto_HasSpokeToPlayer() != 0) {
            func_801518B0(globalCtx, 0x3394U, &self->actor);
            self->textId = 0x3394;
            return;
        }
        EnMaYto_SetTalkedFlag();
        func_801518B0(globalCtx, 0x3390U, &self->actor);
        self->textId = 0x3390;
        return;
    }
    if (temp_hi == 3) {
        if (EnMaYto_HasSpokeToPlayerToday() != 0) {
            EnMaYto_SetFaceExpression(self, 0, 3);
            func_801518B0(globalCtx, 0x33C5U, &self->actor);
            self->textId = 0x33C5;
            func_80151BB4(globalCtx, 6U);
            return;
        }
        EnMaYto_SetTalkedFlag();
        EnMaYto_SetFaceExpression(self, 0, 3);
        func_801518B0(globalCtx, 0x33C4U, &self->actor);
        self->textId = 0x33C4;
        func_80151BB4(globalCtx, 6U);
        // Duplicate return node #20. Try simplifying control flow for better match
    }
}

void EnMaYto_DinnerStartDialogue(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    s32 temp_hi;
    u8 temp_v0;
    u16 phi_t7;

    temp_hi = (s32) gSaveContext.day % 5;
    if (temp_hi != 1) {
        if (temp_hi != 2) {
            if (temp_hi != 3) {
                return;
            }
            if (EnMaYto_HasSpokeToPlayer() != 0) {
                func_801518B0(globalCtx, 0x33A8U, &self->actor);
                self->textId = 0x33A8;
                func_80151BB4(globalCtx, 6U);
                return;
            }
            EnMaYto_SetTalkedFlag();
            func_801518B0(globalCtx, 0x33A7U, &self->actor);
            phi_t7 = 0x33A7U;
            goto block_25;
        }
        if (EnMaYto_HasSpokeToPlayer() != 0) {
            func_801518B0(globalCtx, 0x33A6U, &self->actor);
            self->textId = 0x33A6;
            func_80151BB4(globalCtx, 6U);
            return;
        }
        EnMaYto_SetTalkedFlag();
        func_801518B0(globalCtx, 0x33A5U, &self->actor);
        self->textId = 0x33A5;
        return;
    }
    if ((Player_GetMask(globalCtx) != 0) && (gSaveContext.playerForm == 4)) {
        temp_v0 = Player_GetMask(globalCtx);
        if (temp_v0 != 2) {
            if (temp_v0 != 7) {
                if (temp_v0 != 8) {
                    if (temp_v0 != 0xA) {
                        func_801518B0(globalCtx, 0x2361U, &self->actor);
                        self->textId = 0x2361;
                        return;
                    }
                    func_801518B0(globalCtx, 0x2360U, &self->actor);
                    self->textId = 0x2360;
                    return;
                }
                func_801518B0(globalCtx, 0x235EU, &self->actor);
                self->textId = 0x235E;
                return;
            }
            func_801518B0(globalCtx, 0x235DU, &self->actor);
            phi_t7 = 0x235DU;
block_25:
            self->textId = phi_t7;
            return;
        }
        func_801518B0(globalCtx, 0x235FU, &self->actor);
        self->textId = 0x235F;
        return;
    }
    if (EnMaYto_HasSpokeToPlayer() != 0) {
        func_801518B0(globalCtx, 0x339FU, &self->actor);
        self->textId = 0x339F;
        return;
    }
    EnMaYto_SetTalkedFlag();
    func_801518B0(globalCtx, 0x3397U, &self->actor);
    self->textId = 0x3397;
}

void EnMaYto_BarnStartDialogue(EnMaYto *this, GlobalContext *globalCtx) {
    EnMaYto *self = (EnMaYto *) this;
    s32 temp_hi;

    if ((gSaveContext.weekEventReg[22] & 1) != 0) {
        temp_hi = (s32) gSaveContext.day % 5;
        if (temp_hi == 2) {
            if (self->unk310 == 1) {
                func_801518B0(globalCtx, 0x33AEU, &self->actor);
                self->textId = 0x33AE;
                return;
            }
            self->unk310 = 1;
            EnMaYto_SetTalkedFlag();
            func_801518B0(globalCtx, 0x33A9U, &self->actor);
            self->textId = 0x33A9;
            return;
        }
        if (temp_hi == 3) {
            if (self->unk310 == 1) {
                func_801518B0(globalCtx, 0x33CBU, &self->actor);
                self->textId = 0x33CB;
                return;
            }
            self->unk310 = 1;
            EnMaYto_SetTalkedFlag();
            EnMaYto_SetFaceExpression(self, 0, 1);
            func_801518B0(globalCtx, 0x33C6U, &self->actor);
            self->textId = 0x33C6;
            return;
        }
        // Duplicate return node #12. Try simplifying control flow for better match
        return;
    }
    if (EnMaYto_HasSpokeToPlayer() != 0) {
        self->unk31E = 2;
        EnMaYto_SetFaceExpression(self, 5, 3);
        func_801518B0(globalCtx, 0x33B3U, &self->actor);
        self->textId = 0x33B3;
        func_80151BB4(globalCtx, 6U);
        return;
    }
    EnMaYto_SetTalkedFlag();
    EnMaYto_SetFaceExpression(self, 5, 3);
    func_801518B0(globalCtx, 0x33B1U, &self->actor);
    self->textId = 0x33B1;
}

void EnMaYto_ChangeAnim(EnMaYto *this, s32 index) {
    EnMaYto *self = (EnMaYto *) this;
    void *sp28;
    void *temp_v1;

    temp_v1 = (index * 0x10) + &D_80B91448;
    sp28 = temp_v1;
    SkelAnime_ChangeAnim(&self->skelAnime, (AnimationHeader *) temp_v1->unk0, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(temp_v1->unk0), (u8) (s32) temp_v1->unk8, temp_v1->unkC);
}

void func_80B90C78(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    s16 sp2A;
    s16 temp_v0;
    s16 phi_a3;

    sp2C = arg1->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    temp_v0 = arg0->unk31E;
    phi_a3 = 0;
    if (temp_v0 == 2) {
        phi_a3 = 1;
    }
    if (temp_v0 == 0) {
        arg0->unk1F0 = (s32) sp2C->world.pos.x;
        arg0->unk1F4 = (s32) sp2C->world.pos.y;
        arg0->unk1EC = 0.0f;
        arg0->unk1F8 = (s32) sp2C->world.pos.z;
    } else if (temp_v0 == 1) {
        sp2A = phi_a3;
        Math_Vec3f_StepTo(arg0 + 0x1F0, arg0->child + 0x24, 8.0f);
        arg0->unk1EC = 0.0f;
    }
    if (arg0->unk320 == 0) {
        if (EnMaYto_WarmFuzzyFeelingCs == arg0->unk188) {
            arg0->unk1E2 = 0;
            arg0->unk1E0 = 0;
        } else {
            func_800BD888(arg0, arg0 + 0x1D8, 0xD, phi_a3);
        }
    } else {
        Math_SmoothStepToS(arg0 + 0x1E2, 0, 3, 0x71C, (s16) 0xB6);
        Math_SmoothStepToS(arg0 + 0x1E0, 0x18E3, 5, 0x71C, (s16) 0xB6);
    }
    EnMaYto_UpdateEyes((EnMaYto *) arg0);
}

void EnMaYto_UpdateCollision(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x18C;
    if (EnMaYto_WarmFuzzyFeelingCs != arg0->unk188) {
        sp1C = temp_a2;
        arg1 = arg1;
        Collider_UpdateCylinder(arg0, temp_a2);
        CollisionCheck_SetOC(arg1, arg1 + 0x18884, &temp_a2->base);
    }
}

void EnMaYto_UpdateEyes(EnMaYto *this) {
    EnMaYto *self = (EnMaYto *) this;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;

    temp_v0 = self->overrideEyeTexIndex;
    if (temp_v0 != 0) {
        self->eyeTexIndex = temp_v0;
        return;
    }
    temp_v0_2 = self->blinkTimer;
    if (temp_v0_2 == 0x64) {
        temp_v0_3 = self->eyeTexIndex;
        if (temp_v0_3 == 0) {
            self->blinkTimer = 0;
            return;
        }
        self->eyeTexIndex = temp_v0_3 - 1;
        return;
    }
    self->blinkTimer = temp_v0_2 + 1;
    if (self->blinkTimer == 0x64) {
        self->eyeTexIndex = 2;
    }
}

void func_80B90E50(EnMaYto *this, s16 arg1) {
    Actor *temp_v0;

    temp_v0 = this->actor.child;
    if ((temp_v0 != 0) && (temp_v0->id == 0x21F)) {
        temp_v0->unk32C = arg1;
    }
}

void EnMaYto_SetRomaniFaceExpression(EnMaYto *this, s16 overrideEyeTexIndex, s16 mouthTexIndex) {
    EnMaYto *self = (EnMaYto *) this;
    Actor *temp_v0;

    temp_v0 = self->actor.child;
    if ((temp_v0 != 0) && (temp_v0->id == 0x21F)) {
        temp_v0->unk328 = overrideEyeTexIndex;
        temp_v0->unk32E = mouthTexIndex;
    }
}

void EnMaYto_SetFaceExpression(EnMaYto *this, s16 overrideEyeTexIndex, s16 mouthIndex) {
    EnMaYto *self = (EnMaYto *) this;
    self->overrideEyeTexIndex = overrideEyeTexIndex;
    self->mouthTexIndex = mouthIndex;
}

void EnMaYto_InitFaceExpression(EnMaYto *this) {
    EnMaYto *self = (EnMaYto *) this;
    if ((((s32) gSaveContext.day % 5) == 1) || ((gSaveContext.weekEventReg[22] & 1) != 0)) {
        EnMaYto_SetFaceExpression(self, 0, 1);
        EnMaYto_SetRomaniFaceExpression(self, 0, 0);
        return;
    }
    EnMaYto_SetFaceExpression(self, 5, 2);
    EnMaYto_SetRomaniFaceExpression(self, 1, 2);
}

s32 EnMaYto_HasSpokeToPlayerToday(void) {
    s32 temp_hi;

    temp_hi = (s32) gSaveContext.day % 5;
    if (temp_hi != 1) {
        if (temp_hi != 2) {
            if (temp_hi != 3) {
                // Duplicate return node #10. Try simplifying control flow for better match
                return 0;
            }
            if ((gSaveContext.weekEventReg[13] & 0x10) != 0) {
                return 1;
            }
            // Duplicate return node #10. Try simplifying control flow for better match
            return 0;
        }
        if ((gSaveContext.weekEventReg[13] & 8) != 0) {
            return 1;
        }
        // Duplicate return node #10. Try simplifying control flow for better match
        return 0;
    }
    if ((gSaveContext.weekEventReg[13] & 4) != 0) {
        return 1;
    }
    return 0;
}

s32 EnMaYto_HasSpokeToPlayer(void) {
    s32 temp_hi;

    temp_hi = (s32) gSaveContext.day % 5;
    if (temp_hi != 1) {
        if (temp_hi != 2) {
            if (temp_hi == 3) {
                if ((gSaveContext.weekEventReg[13] & 0x10) != 0) {
                    return 1;
                }
                goto block_5;
            }
            // Duplicate return node #9. Try simplifying control flow for better match
            return 0;
        }
block_5:
        if ((gSaveContext.weekEventReg[13] & 8) != 0) {
            return 1;
        }
        goto block_7;
    }
block_7:
    if ((gSaveContext.weekEventReg[13] & 4) != 0) {
        return 1;
    }
    return 0;
}

void EnMaYto_SetTalkedFlag(void) {
    s32 temp_hi;

    temp_hi = (s32) gSaveContext.day % 5;
    if (temp_hi != 1) {
        if (temp_hi != 2) {
            if (temp_hi != 3) {
                return;
            }
            gSaveContext.weekEventReg[13] |= 0x10;
            return;
        }
        gSaveContext.weekEventReg[13] |= 8;
        return;
    }
    gSaveContext.weekEventReg[13] |= 4;
}

void EnMaYto_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnMaYto *this = (EnMaYto *) thisx;
    this->actionFunc(this, globalCtx);
    EnMaYto_UpdateCollision(&this->actor, globalCtx);
    func_80B90C78(&this->actor, globalCtx);
}

s32 EnMaYto_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    s16 sp4;
    s32 temp_a0;
    s32 temp_a0_2;

    if (arg1 == 9) {
        sp4.unk0 = (s32) (unaligned s32) arg5->unk1E0;
        sp4.unk4 = (u16) arg5->unk1E4;
        arg4->x += sp6;
        arg4->z += sp4;
    } else if (arg1 == 2) {
        temp_a0 = arg5->unk14C;
        if ((&D_06007E28 != temp_a0) && (&D_06003D54 != temp_a0) && ((sp4.unk0 = (s32) (unaligned s32) arg5->unk1E6, sp4.unk4 = (u16) arg5->unk1EA, arg4->x += sp6, temp_a0_2 = arg5->unk14C, (&D_0600A174 == temp_a0_2)) || (&D_060070EC == temp_a0_2) || (&D_06003D54 == temp_a0_2))) {
            arg4->z += sp4;
        }
    }
    return 0;
}

void EnMaYto_PostLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 9) {
        SysMatrix_GetStateTranslation(arg4 + 0x3C);
    }
}

void EnMaYto_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnMaYto *this = (EnMaYto *) thisx;
    Gfx *sp3C;
    Gfx *sp34;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a2;
    GraphicsContext *phi_a2;

    temp_a2 = globalCtx->state.gfxCtx;
    phi_a2 = temp_a2;
    if ((this->type == 1) && ((gSaveContext.weekEventReg[22] & 1) != 0)) {
        temp_v0 = temp_a2->polyOpa.p;
        temp_a2->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp3C = temp_v0;
        sp3C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_a2->polyOpa.p;
        temp_a2->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = (u32) &D_06005430;
        temp_v0_2->words.w0 = 0xDE000000;
        phi_a2 = globalCtx->state.gfxCtx;
    }
    func_8012C28C(phi_a2);
    temp_v0_3 = temp_a2->polyOpa.p;
    temp_a2->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060024;
    sp34 = temp_v0_3;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_80B915C8 + (this->mouthTexIndex * 4)));
    temp_v0_4 = temp_a2->polyOpa.p;
    temp_a2->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDB060020;
    sp30 = temp_v0_4;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80B915D8 + (this->eyeTexIndex * 4)));
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, EnMaYto_OverrideLimbDraw, EnMaYto_PostLimbDraw, &this->actor);
}

