void EnOssan_CheckValidSpawn(Actor *arg0);          /* static */
void EnOssan_ContinueShopping(EnOssan *arg0, GlobalContext *arg1); /* static */
s32 EnOssan_CursorLeft(EnOssan *arg0, u8 arg1, s32 arg2); /* static */
s32 EnOssan_CursorRight(EnOssan *arg0, u8 arg1, s32 arg2); /* static */
void EnOssan_CursorUpDown(EnOssan *arg0);           /* static */
void EnOssan_DrawCursor(GraphicsContext **arg0, EnOssan *arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5); /* static */
void EnOssan_DrawStickDirectionPrompts(GraphicsContext **arg0, EnOssan *arg1); /* static */
void EnOssan_DrawTextRec(GraphicsContext **arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8, s32 arg9, f32 argA, f32 argB); /* static */
void EnOssan_EndInteraction(GlobalContext *arg0, Actor *arg1, GlobalContext *); /* static */
s32 EnOssan_FacingShopkeeperDialogResult(Actor *arg0, GlobalContext *arg1); /* static */
void EnOssan_HandleCanBuyItem(GlobalContext *arg0, Actor *arg1); /* static */
s32 EnOssan_HasPlayerSelectedItem(GlobalContext *arg0, Actor *arg1, Input *); /* static */
s32 EnOssan_OverrideLimbDrawCuriosityShopMan(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
s32 EnOssan_OverrideLimbDrawPartTimeWorker(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void EnOssan_PositionSelectedItem(EnOssan *arg0);   /* static */
void EnOssan_PostLimbDrawCuriosityShopMan(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void EnOssan_PostLimbDrawPartTimeWorker(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void EnOssan_RotateHead(EnOssan *arg0, GlobalContext *arg1); /* static */
s32 EnOssan_SetCursorIndexFromNeutral(EnOssan *arg0, s32 arg1); /* static */
void EnOssan_SetupAction(EnOssan *arg0, void (*arg1)(EnOssan *, GlobalContext *), EnOssan *); /* static */
void EnOssan_SetupBuy(GlobalContext *arg0, EnOssan *arg1, u16 arg2); /* static */
void EnOssan_SetupBuyItemWithFanfare(GlobalContext *arg0, Actor *arg1); /* static */
void EnOssan_SetupCannotBuy(GlobalContext *arg0, EnOssan *arg1, u16 arg2); /* static */
void EnOssan_SetupLookToShopkeeperFromShelf(GlobalContext *arg0, EnOssan *arg1); /* static */
void EnOssan_SetupStartShopping(GlobalContext *arg0, EnOssan *arg1, u8 arg2); /* static */
void EnOssan_SpawnShopItems(EnOssan *arg0, GlobalContext *arg1, void *arg2); /* static */
s32 EnOssan_TestCancelOption(EnOssan *arg0, GlobalContext *arg1, Input *arg2); /* static */
s32 EnOssan_TestEndInteraction(Actor *arg0, GlobalContext *arg1, Input *arg2); /* static */
s32 EnOssan_TestItemSelected(GlobalContext *arg0);  /* static */
void EnOssan_UpdateCursorAnim(EnOssan *arg0);       /* static */
void EnOssan_UpdateCursorPos(GlobalContext *arg0, EnOssan *arg1); /* static */
void EnOssan_UpdateItemSelectedProperty(EnOssan *arg0); /* static */
void EnOssan_UpdateJoystickInputState(GlobalContext *arg0, EnOssan *arg1); /* static */
void EnOssan_UpdateStickDirectionPromptAnim(EnOssan *arg0); /* static */
void EnOssan_WaitForBlink(EnOssan *this);           /* static */
extern FlexSkeletonHeader D_060028A0;
extern AnimationHeader D_06009D34;
extern AnimationHeader D_06012C34;
extern FlexSkeletonHeader D_06013320;
static ? D_808AC1D4;                                /* unable to generate initializer */
static u16 D_808AC256 = 0x6C1;
static u16 D_808AC25E = 0x6C2;
static u16 D_808AC262 = 0x6C4;
static u16 D_808AC266 = 0x6C6;
static u16 D_808AC26A = 0x6C3;
static u16 D_808AC26E = 0x6C5;
static u16 D_808AC272 = 0x6C7;
static ? sAnimations;                               /* unable to generate initializer */
static ? sBuySuccessTextIds;                        /* unable to generate initializer */
static ? sCannotGetNowTextIds;                      /* unable to generate initializer */
static ? sCuriosityShopManEyeTextures;              /* unable to generate initializer */
static InitChainEntry sInitChain;                   /* unable to generate initializer */
static ? sInitFuncs;                                /* unable to generate initializer */
static ? sNeedEmptyBottleTextIds;                   /* unable to generate initializer */
static ? sNeedRupeesTextIds;                        /* unable to generate initializer */
static ? sNoRoomTextIds;                            /* unable to generate initializer */
static ? sObjectIds;                                /* unable to generate initializer */
static ? sPartTimeWorkerEyeTextures;                /* unable to generate initializer */
static Vec3f sPartTimeWorkerFocusOffset = {800.0f, 500.0f, 0.0f};
static ? sSelectedItemPosition;                     /* unable to generate initializer */
static ? sShops;                                    /* unable to generate initializer */
static ? sTalkOptionTextIds;                        /* unable to generate initializer */
static u16 sWelcomeDekuFirstTimeTextIds = 0x6A9;
static u16 sWelcomeDekuTextIds = 0x6AA;
static u16 sWelcomeGoronFirstTimeTextIds = 0x6A5;
static u16 sWelcomeGoronTextIds = 0x6A6;
static u16 sWelcomeHumanTextIds = 0x6A4;
static u16 sWelcomeZoraFirstTimeTextIds = 0x6A7;
static u16 sWelcomeZoraTextIds = 0x6A8;



void EnOssan_SetupAction(EnOssan *arg0, void (*arg1)(EnOssan *, GlobalContext *)) {
    arg0->actionFunc = arg1;
}

s32 EnOssan_TestItemSelected(GlobalContext *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_v1;
    s32 phi_v0;

    if ((arg0->msgCtx.unk12020 == 0x10) || (arg0->msgCtx.unk12020 == 0x11)) {
        return ~(arg0->state.input[0].press.button | 0xFFFF7FFF) == 0;
    }
    temp_v1 = arg0->state.input[0].press.button;
    temp_v0 = ~(temp_v1 | 0xFFFF7FFF) == 0;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        temp_v0_2 = ~(temp_v1 | ~0x4000) == 0;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            phi_v0 = ~(temp_v1 | ~8) == 0;
        }
    }
    return phi_v0;
}

void EnOssan_CheckValidSpawn(Actor *arg0) {
    s32 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;

    temp_v0 = gSaveContext.day;
    if ((temp_v0 != 1) && (temp_v0 != 2)) {
        if (temp_v0 != 3) {
            return;
        }
        if (arg0->params == 0) {
            Actor_MarkForDeath(arg0);
        }
        temp_v0_2 = gSaveContext.time;
        if ((((s32) temp_v0_2 >= 0xEAAB) || ((s32) temp_v0_2 < 0x4000)) && (arg0->params != 0)) {
            Actor_MarkForDeath(arg0);
        }
        // Duplicate return node #16. Try simplifying control flow for better match
        return;
    }
    temp_v0_3 = gSaveContext.time;
    if (((s32) temp_v0_3 < 0xE556) && ((s32) temp_v0_3 >= 0x4001)) {
        if (arg0->params != 0) {
            Actor_MarkForDeath(arg0);
            return;
        }
        // Duplicate return node #16. Try simplifying control flow for better match
        return;
    }
    if (arg0->params == 0) {
        Actor_MarkForDeath(arg0);
    }
}

void EnOssan_RotateHead(EnOssan *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    s32 phi_v1;

    if (arg0->actor.params == 1) {
        if (arg1->actorCtx.actorList[2].first->unk14B == 2) {
            Math_SmoothStepToS(arg0 + 0x406, arg0->headRot.y, 3, 0x7D0, (s16) 0);
            return;
        }
        if ((arg0->flags & 1) != 0) {
            Math_SmoothStepToS(arg0 + 0x406, 0x1F40, 3, 0x7D0, (s16) 0);
            return;
        }
        Math_SmoothStepToS(arg0 + 0x406, arg0->headRot.y, 3, 0x7D0, (s16) 0);
        temp_v0 = arg0->headRotPartTimeWorker.y - arg0->headRot.y;
        phi_v1 = temp_v0;
        if (temp_v0 < 0) {
            phi_v1 = -temp_v0;
        }
        if (phi_v1 < 0x10) {
            arg0->flags |= 1;
        }
        // Duplicate return node #9. Try simplifying control flow for better match
    }
}

void EnOssan_SpawnShopItems(EnOssan *arg0, GlobalContext *arg1, void *arg2) {
    s16 temp_v0;
    s32 temp_s2;
    void *phi_s0;
    EnOssan *phi_s1;
    s32 phi_s2;

    phi_s0 = arg2;
    phi_s1 = arg0;
    phi_s2 = 0;
    do {
        temp_v0 = phi_s0->unk0;
        if ((s32) temp_v0 < 0) {
            phi_s1->items[0] = NULL;
        } else {
            phi_s1->items[0] = Actor_Spawn(arg1 + 0x1CA0, arg1, 2, (f32) phi_s0->unk2, (f32) phi_s0->unk4, (f32) phi_s0->unk6, (s16) 0, (s16) 0, (s16) 0, (s16) (s32) temp_v0);
        }
        temp_s2 = phi_s2 + 4;
        phi_s0 += 8;
        phi_s1 += 4;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x20);
}

void EnOssan_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnOssan *this = (EnOssan *) thisx;
    s16 temp_v0;

    temp_v0 = this->actor.params;
    if (((s32) temp_v0 >= 2) && ((s32) temp_v0 < 0)) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->objIndex = Object_GetIndex(&globalCtx->objectCtx, *(&sObjectIds + (temp_v0 * 2)));
    if ((s32) this->objIndex < 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    EnOssan_CheckValidSpawn(&this->actor);
    Actor_ProcessInitChain(&this->actor, &sInitChain);
    EnOssan_SetupAction(this, EnOssan_InitShop);
}

void EnOssan_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnOssan *this = (EnOssan *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnOssan_UpdateCursorPos(GlobalContext *arg0, EnOssan *arg1) {
    s16 sp1E;
    s16 sp1C;

    func_800B8898(arg0, (arg1 + (arg1->cursorIdx * 4))->unk1E8, &sp1E, &sp1C);
    arg1->cursorPos.x = (f32) sp1E;
    arg1->cursorPos.y = (f32) sp1C;
}

void EnOssan_EndInteraction(GlobalContext *arg0, Actor *arg1) {
    void *sp24;
    GlobalContext *temp_a1;
    void *temp_t6;

    temp_a1 = arg0;
    temp_t6 = temp_a1->actorCtx.actorList[2].first;
    arg0 = temp_a1;
    sp24 = temp_t6;
    func_800B84D0(arg1, temp_a1);
    arg0->msgCtx.unk11F22 = 0x43;
    arg0->msgCtx.unk12023 = 4;
    Interface_ChangeAlpha(0x32U);
    arg1->unk235 = 0;
    arg1->unk26C = 0;
    arg1->unk2A4 = 0;
    sp24->unkA70 = (s32) (sp24->unkA70 & 0xDFFFFFFF);
    arg0->interfaceCtx.unk_222 = 0;
    arg0->interfaceCtx.unk_224 = 0;
    if (arg1->unk2C2 == 2) {
        ActorCutscene_Stop(arg1->unk2C0);
        arg1->unk2C2 = 0;
    }
    if (arg1->params == 0) {
        EnOssan_SetupAction((EnOssan *) arg1, EnOssan_BeginInteraction);
        return;
    }
    EnOssan_SetupAction((EnOssan *) arg1, EnOssan_Idle);
}

s32 EnOssan_TestEndInteraction(Actor *arg0, GlobalContext *arg1, Input *arg2) {
    s32 phi_v0;

    phi_v0 = 0;
    if (~(arg2->press.button | ~0x4000) == 0) {
        EnOssan_EndInteraction(arg1, arg0, arg1);
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 EnOssan_TestCancelOption(EnOssan *arg0, GlobalContext *arg1, Input *arg2) {
    s32 phi_v0;

    phi_v0 = 0;
    if (~(arg2->press.button | ~0x4000) == 0) {
        arg0->actionFunc = arg0->tmpActionFunc;
        func_80151938(arg1, (arg0 + (arg0->cursorIdx * 4))->unk1E8->unk116);
        phi_v0 = 1;
    }
    return phi_v0;
}

void EnOssan_SetupStartShopping(GlobalContext *arg0, EnOssan *arg1, u8 arg2) {
    func_8011552C(arg0, 0x10);
    if (arg2 == 0) {
        EnOssan_SetupAction(arg1, EnOssan_Hello, arg1);
        return;
    }
    EnOssan_StartShopping(arg0, arg1);
}

void EnOssan_StartShopping(GlobalContext *globalCtx, EnOssan *this) {
    EnOssan *self = (EnOssan *) globalCtx;
    EnOssan_SetupAction(this, EnOssan_FaceShopkeeper);
    func_80151938((GlobalContext *) self, 0x640U);
    func_8011552C((GlobalContext *) self, 6);
    this->stickRightPrompt.isEnabled = 1;
    this->stickLeftPrompt.isEnabled = 1;
}

void EnOssan_SetupLookToShopkeeperFromShelf(GlobalContext *arg0, EnOssan *arg1) {
    play_sound(0x4809U);
    arg1->drawCursor = 0;
    EnOssan_SetupAction(arg1, EnOssan_LookToShopkeeperFromShelf);
}

void EnOssan_Idle(EnOssan *this, GlobalContext *globalCtx) {
    EnOssan *self = (EnOssan *) this;
    Actor *sp2C;
    Actor *temp_v1;
    f32 temp_f0;
    f32 temp_f0_2;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    sp2C = temp_v1;
    func_8013D9C8(globalCtx, self->limbRotTableY, self->limbRotTableZ, 0x13);
    if (func_800B84D0(&self->actor, globalCtx) != 0) {
        temp_v1->unkA70 = (s32) (temp_v1->unkA70 | 0x20000000);
        EnOssan_SetupAction(self, EnOssan_BeginInteraction);
        if (self->cutsceneState == 0) {
            if (ActorCutscene_GetCurrentIndex() == 0x7C) {
                ActorCutscene_Stop(0x7C);
            }
            self->cutscene = self->lookToShopkeeperCutscene;
            ActorCutscene_SetIntentToPlay(self->cutscene);
            self->cutsceneState = 1;
            return;
        }
        // Duplicate return node #13. Try simplifying control flow for better match
        return;
    }
    if (self->actor.xzDistToPlayer < 100.0f) {
        temp_f0 = temp_v1->world.pos.x;
        if ((temp_f0 >= -40.0f) && (temp_f0 <= 40.0f)) {
            temp_f0_2 = temp_v1->world.pos.z;
            if ((temp_f0_2 >= -91.0f) && (temp_f0_2 <= -60.0f)) {
                func_800B8614(&self->actor, globalCtx, 100.0f);
            }
        }
    }
    if (self->actor.params == 1) {
        Math_SmoothStepToS(&self->headRotPartTimeWorker.y, 0x1F40, 3, 0x7D0, (s16) 0);
    }
}

void EnOssan_BeginInteraction(EnOssan *this, GlobalContext *globalCtx) {
    EnOssan *self = (EnOssan *) this;
    ActorAnimationEntryS *sp24;
    s16 sp22;
    s16 sp20;
    ActorAnimationEntryS **temp_a3;
    ActorAnimationEntryS *temp_a3_2;
    s16 temp_v0;
    u16 temp_v0_2;
    ActorAnimationEntryS *phi_a3;

    temp_a3 = &sAnimations + (self->actor.params * 4);
    temp_a3_2 = *temp_a3;
    sp22 = (s16) (s32) self->skelAnime.animCurrentFrame;
    sp24 = temp_a3_2;
    sp20 = SkelAnime_GetFrameCount(*(temp_a3_2 + (self->animationIdx * 0x10)));
    phi_a3 = temp_a3_2;
    if (self->animationIdx == 3) {
        sp20 = 0;
    }
    if (self->cutsceneState == 1) {
        sp24 = temp_a3_2;
        if (ActorCutscene_GetCanPlayNext(self->cutscene) != 0) {
            sp24 = temp_a3_2;
            ActorCutscene_StartAndSetFlag(self->cutscene, &self->actor);
            self->cutsceneState = 2;
        } else {
            sp24 = temp_a3_2;
            ActorCutscene_SetIntentToPlay(self->cutscene);
        }
        phi_a3 = *temp_a3;
    }
    if (self->actor.params == 0) {
        if (sp22 == sp20) {
            temp_v0 = self->animationIdx;
            switch (temp_v0) {
            case 1:
                self->animationIdx = 2;
                func_8013BC6C(&self->skelAnime, phi_a3, 2);
                return;
            case 2:
                sp24 = phi_a3;
                EnOssan_SetHaveMet(self);
                self->textId = EnOssan_GetWelcomeCuriosityShopMan(self, globalCtx);
                func_8013BC6C(&self->skelAnime, sp24, (s32) self->animationIdx);
                return;
            case 4:
            case 6:
            case 8:
            case 10:
                self->animationIdx = temp_v0 + 1;
                func_8013BC6C(&self->skelAnime, phi_a3, (s32) self->animationIdx);
                func_801518B0(globalCtx, self->textId, &self->actor);
                EnOssan_SetupStartShopping(globalCtx, self, 0U);
                return;
            case 5:
            case 7:
            case 9:
            case 11:
                self->animationIdx = 3;
                func_8013BC6C(&self->skelAnime, phi_a3, 3);
                return;
            case 3:
                self->animationIdx = 1;
                func_8013BC6C(&self->skelAnime, phi_a3, (s32) 1);
                EnOssan_SetupAction(self, EnOssan_Idle);
                return;
            default:
                self->animationIdx = 1;
                func_8013BC6C(&self->skelAnime, phi_a3, (s32) 1);
                EnOssan_SetupAction(self, EnOssan_Idle);
                return;
            }
        } else {
            // Duplicate return node #18. Try simplifying control flow for better match
        }
    } else {
        EnOssan_SetHaveMet(self);
        temp_v0_2 = EnOssan_GetWelcomePartTimeWorker(self, globalCtx);
        self->textId = temp_v0_2;
        func_801518B0(globalCtx, temp_v0_2 & 0xFFFF, &self->actor);
        EnOssan_SetupStartShopping(globalCtx, self, 0U);
    }
}

void EnOssan_UpdateJoystickInputState(GlobalContext *arg0, EnOssan *arg1) {
    s32 temp_a2;
    s32 temp_t0;
    s32 temp_t6;
    s32 temp_v0_2;
    s8 temp_v0;
    s8 temp_v1;

    temp_a2 = arg1->stickAccumX;
    temp_v0 = arg0->state.input[0].rel.stick_x;
    temp_v1 = arg0->state.input[0].rel.stick_y;
    arg1->moveHorizontal = 0;
    arg1->moveVertical = 0;
    if (temp_a2 == 0) {
        if (((s32) temp_v0 >= 0x1F) || ((s32) temp_v0 < -0x1E)) {
            arg1->stickAccumX = (s32) temp_v0;
            arg1->moveHorizontal = 1;
        }
    } else if (((s32) temp_v0 < 0x1F) && ((s32) temp_v0 >= -0x1E)) {
        arg1->stickAccumX = 0;
    } else {
        temp_t0 = temp_a2 + temp_v0;
        if ((temp_a2 * temp_v0) < 0) {
            arg1->stickAccumX = (s32) temp_v0;
            arg1->moveHorizontal = 1;
        } else {
            arg1->stickAccumX = temp_t0;
            if (temp_t0 >= 0x7D1) {
                arg1->stickAccumX = 0x7D0;
            } else if (temp_t0 < -0x7D0) {
                arg1->stickAccumX = -0x7D0;
            }
        }
    }
    temp_v0_2 = arg1->stickAccumY;
    if (temp_v0_2 == 0) {
        if (((s32) temp_v1 >= 0x1F) || ((s32) temp_v1 < -0x1E)) {
            arg1->stickAccumY = (s32) temp_v1;
            arg1->moveVertical = 1;
            return;
        }
        // Duplicate return node #26. Try simplifying control flow for better match
        return;
    }
    if (((s32) temp_v1 < 0x1F) && ((s32) temp_v1 >= -0x1E)) {
        arg1->stickAccumY = 0;
        return;
    }
    temp_t6 = temp_v0_2 + temp_v1;
    if ((temp_v0_2 * temp_v1) < 0) {
        arg1->stickAccumY = (s32) temp_v1;
        arg1->moveVertical = 1;
        return;
    }
    arg1->stickAccumY = temp_t6;
    if (temp_t6 >= 0x7D1) {
        arg1->stickAccumY = 0x7D0;
        return;
    }
    if (temp_t6 < -0x7D0) {
        arg1->stickAccumY = -0x7D0;
    }
}

s32 EnOssan_SetCursorIndexFromNeutral(EnOssan *arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s32 phi_v1_4;

    temp_a1 = arg1 & 0xFF;
    temp_a3 = temp_a1 + 4;
    phi_v1_3 = temp_a1 & 0xFF;
    if ((arg0->cursorIdx & 1) != 0) {
        temp_a2 = temp_a1 + 1;
        temp_a3_2 = temp_a1 + 4;
        phi_v1 = temp_a2 & 0xFF;
        if ((temp_a2 & 0xFF) < temp_a3_2) {
loop_2:
            if ((arg0 + (phi_v1 * 4))->unk1E8 != 0) {
                return phi_v1;
            }
            temp_v1 = (phi_v1 + 2) & 0xFF;
            phi_v1 = temp_v1;
            if (temp_v1 >= temp_a3_2) {
                goto block_5;
            }
            goto loop_2;
        }
block_5:
        phi_v1_2 = temp_a1 & 0xFF;
        if (temp_a1 < temp_a3_2) {
loop_6:
            if ((arg0 + (phi_v1_2 * 4))->unk1E8 != 0) {
                return phi_v1_2;
            }
            temp_v1_2 = (phi_v1_2 + 2) & 0xFF;
            phi_v1_2 = temp_v1_2;
            if (temp_v1_2 >= temp_a3_2) {
                // Duplicate return node #18. Try simplifying control flow for better match
                return 0xFF;
            }
            goto loop_6;
        }
        // Duplicate return node #18. Try simplifying control flow for better match
        return 0xFF;
    }
    if (temp_a1 < temp_a3) {
loop_11:
        if ((arg0 + (phi_v1_3 * 4))->unk1E8 != 0) {
            return phi_v1_3;
        }
        temp_v1_3 = (phi_v1_3 + 2) & 0xFF;
        phi_v1_3 = temp_v1_3;
        if (temp_v1_3 >= temp_a3) {
            goto block_14;
        }
        goto loop_11;
    }
block_14:
    temp_a2_2 = temp_a1 + 1;
    phi_v1_4 = temp_a2_2 & 0xFF;
    if ((temp_a2_2 & 0xFF) < temp_a3) {
loop_15:
        if ((arg0 + (phi_v1_4 * 4))->unk1E8 != 0) {
            return phi_v1_4;
        }
        temp_v1_4 = (phi_v1_4 + 2) & 0xFF;
        phi_v1_4 = temp_v1_4;
        if (temp_v1_4 >= temp_a3) {
            // Duplicate return node #18. Try simplifying control flow for better match
            return 0xFF;
        }
        goto loop_15;
    }
    return 0xFF;
}

s32 EnOssan_CursorRight(EnOssan *arg0, u8 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 phi_t0;

    temp_a2 = arg2 & 0xFF;
    temp_a1_2 = arg1 & 0xFF;
    temp_a3 = temp_a2 + 4;
    phi_t0 = temp_a1_2;
    if ((temp_a1_2 >= temp_a2) && (temp_a2_2 = temp_a3 & 0xFF, ((temp_a1_2 < temp_a2_2) != 0))) {
loop_2:
        temp_a1 = (phi_t0 - 2) & 0xFF;
        phi_t0 = temp_a1;
        if ((temp_a1 >= temp_a2) && (temp_a1 < temp_a2_2) && ((arg0 + (temp_a1 * 4))->unk1E8 != 0)) {
            return temp_a1;
        }
        if ((temp_a1 < temp_a2) || (temp_a1 >= (temp_a3 & 0xFF))) {
            // Duplicate return node #8. Try simplifying control flow for better match
            return 0xFF;
        }
        goto loop_2;
    }
    return 0xFF;
}

s32 EnOssan_CursorLeft(EnOssan *arg0, u8 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 phi_v0;

    temp_a2 = arg2 & 0xFF;
    temp_a1_2 = arg1 & 0xFF;
    phi_v0 = temp_a1_2;
    if (temp_a1_2 < temp_a2) {
loop_1:
        temp_a1 = (phi_v0 + 2) & 0xFF;
        phi_v0 = temp_a1;
        if ((temp_a1 < temp_a2) && ((arg0 + (temp_a1 * 4))->unk1E8 != 0)) {
            return temp_a1;
        }
        if (temp_a1 >= temp_a2) {
            // Duplicate return node #5. Try simplifying control flow for better match
            return 0xFF;
        }
        goto loop_1;
    }
    return 0xFF;
}

void EnOssan_Hello(EnOssan *this, GlobalContext *globalCtx) {
    EnOssan *self = (EnOssan *) this;
    ActorAnimationEntryS *sp34;
    u8 sp33;
    Actor *sp28;
    s32 sp24;
    u16 temp_v0;

    sp34 = *(&sAnimations + (self->actor.params * 4));
    sp33 = func_80152498(&globalCtx->msgCtx);
    sp28 = globalCtx->actorCtx.actorList[2].first;
    EnOssan_RotateHead(self, globalCtx);
    sp24 = (s32) sp33;
    if ((sp33 == 5) && (func_80147624(globalCtx) != 0)) {
        if ((self->animationIdx == 9) && (self->actor.params == 1)) {
            self->animationIdx = 1;
            func_8013BC6C(&self->skelAnime, sp34, 1);
        }
        self->flags &= 0xFFFE;
        if (sp28->unk14B == 3) {
            EnOssan_EndInteraction(globalCtx, &self->actor);
            goto block_11;
        }
        temp_v0 = self->flags;
        if ((temp_v0 & 2) != 0) {
            self->flags = temp_v0 & 0xFFFD;
            EnOssan_EndInteraction(globalCtx, &self->actor);
            goto block_11;
        }
        if (EnOssan_TestEndInteraction(&self->actor, globalCtx, globalCtx->state.input) == 0) {
            EnOssan_StartShopping(globalCtx, self);
            goto block_11;
        }
    } else {
block_11:
        if ((sp24 == 0xA) && (self->actor.params == 1) && (sp28->unk14B == 2) && (func_80147624(globalCtx) != 0)) {
            self->animationIdx = 9;
            func_8013BC6C(&self->skelAnime, sp34, 9);
        }
        if ((self->animationIdx == 0xB) && (func_801378B8(&self->skelAnime, 18.0f) != 0)) {
            Audio_PlayActorSound2(&self->actor, 0x2993U);
        }
    }
}

s32 EnOssan_FacingShopkeeperDialogResult(Actor *arg0, GlobalContext *arg1) {
    ActorAnimationEntryS *sp24;
    void *sp20;
    ActorAnimationEntryS *temp_a3;
    u8 temp_v0;
    void *temp_v1;

    temp_v0 = arg1->msgCtx.choiceIndex;
    temp_a3 = *(&sAnimations + (arg0->params * 4));
    temp_v1 = arg1->actorCtx.actorList[2].first;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            return 0;
        }
        func_8019F230();
        EnOssan_EndInteraction(arg1, arg0);
        return 1;
    }
    sp20 = temp_v1;
    sp24 = temp_a3;
    func_8019F208();
    if ((arg0->params == 1) && (temp_v1->unk14B == 2)) {
        arg0->unk402 = 9;
        func_8013BC6C((SkelAnime *) (arg0 + 0x144), temp_a3, 9);
    }
    EnOssan_SetupAction((EnOssan *) arg0, EnOssan_TalkToShopkeeper);
    func_80151938(arg1, *(&sTalkOptionTextIds + (arg0->params * 2)));
    func_8011552C(arg1, 6);
    arg0->unk26C = 0;
    arg0->unk2A4 = 0;
    return 1;
}

void EnOssan_FaceShopkeeper(EnOssan *this, GlobalContext *globalCtx) {
    EnOssan *self = (EnOssan *) this;
    Actor *sp2C;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    u8 temp_v0;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    sp2C = globalCtx->actorCtx.actorList[2].first;
    if (self->cutsceneState == 0) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        self->cutscene = self->lookToShopkeeperCutscene;
        ActorCutscene_SetIntentToPlay(self->cutscene);
        self->cutsceneState = 1;
        return;
    }
    if (temp_v0 == 4) {
        func_8011552C(globalCtx, 6);
        if ((EnOssan_TestEndInteraction(&self->actor, globalCtx, globalCtx->state.input) == 0) && ((func_80147624(globalCtx) == 0) || (EnOssan_FacingShopkeeperDialogResult(&self->actor, globalCtx) == 0))) {
            temp_v0_2 = self->stickAccumX;
            if (temp_v0_2 < 0) {
                temp_v0_3 = EnOssan_SetCursorIndexFromNeutral(self, 4);
                if (temp_v0_3 != 0xFF) {
                    self->cursorIdx = temp_v0_3 & 0xFF;
                    EnOssan_SetupAction(self, EnOssan_LookToLeftShelf);
                    func_8011552C(globalCtx, 6);
                    self->stickLeftPrompt.isEnabled = 0;
                    play_sound(0x4809U);
                }
            } else if (temp_v0_2 > 0) {
                temp_v0_4 = EnOssan_SetCursorIndexFromNeutral(self, 0);
                if (temp_v0_4 != 0xFF) {
                    self->cursorIdx = temp_v0_4 & 0xFF;
                    EnOssan_SetupAction(self, EnOssan_LookToRightShelf);
                    func_8011552C(globalCtx, 6);
                    self->stickRightPrompt.isEnabled = 0;
                    play_sound(0x4809U);
                }
            }
            goto block_14;
        }
    } else {
block_14:
        if ((self->actor.params == 1) && (sp2C->unk14B != 2)) {
            Math_SmoothStepToS(&self->headRotPartTimeWorker.y, 0x1F40, 3, 0x7D0, (s16) 0);
        }
    }
}

void EnOssan_TalkToShopkeeper(EnOssan *this, GlobalContext *globalCtx) {
    EnOssan *self = (EnOssan *) this;
    ActorAnimationEntryS *sp24;

    sp24 = *(&sAnimations + (self->actor.params * 4));
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        if ((self->animationIdx == 9) && (self->actor.params == 1)) {
            self->animationIdx = 1;
            func_8013BC6C(&self->skelAnime, sp24, (s32) 1);
        }
        EnOssan_StartShopping(globalCtx, self);
    }
}

void EnOssan_LookToLeftShelf(EnOssan *this, GlobalContext *globalCtx) {
    EnOssan *self = (EnOssan *) this;
    if (self->cutsceneState == 2) {
        ActorCutscene_Stop(self->cutscene);
        self->cutsceneState = 0;
    }
    if (self->cutsceneState == 0) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        self->cutscene = self->lookToLeftShelfCutscene;
        ActorCutscene_SetIntentToPlay(self->cutscene);
        self->cutsceneState = 1;
        return;
    }
    if (self->cutsceneState == 1) {
        if (ActorCutscene_GetCanPlayNext(self->cutscene) != 0) {
            ActorCutscene_StartAndSetFlag(self->cutscene, &self->actor);
            self->cutsceneState = 2;
            EnOssan_UpdateCursorPos(globalCtx, self);
            EnOssan_SetupAction(self, EnOssan_BrowseLeftShelf);
            func_80151938(globalCtx, self->items[self->cursorIdx]->actor.textId);
        } else {
            ActorCutscene_SetIntentToPlay(self->cutscene);
        }
    }
    self->stickAccumX = 0;
}

void EnOssan_LookToRightShelf(EnOssan *this, GlobalContext *globalCtx) {
    EnOssan *self = (EnOssan *) this;
    if (self->cutsceneState == 2) {
        ActorCutscene_Stop(self->cutscene);
        self->cutsceneState = 0;
    }
    if (self->cutsceneState == 0) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        self->cutscene = self->lookToRightShelfCutscene;
        ActorCutscene_SetIntentToPlay(self->cutscene);
        self->cutsceneState = 1;
        return;
    }
    if (self->cutsceneState == 1) {
        if (ActorCutscene_GetCanPlayNext(self->cutscene) != 0) {
            ActorCutscene_StartAndSetFlag(self->cutscene, &self->actor);
            self->cutsceneState = 2;
            EnOssan_UpdateCursorPos(globalCtx, self);
            EnOssan_SetupAction(self, EnOssan_BrowseRightShelf);
            func_80151938(globalCtx, self->items[self->cursorIdx]->actor.textId);
        } else {
            ActorCutscene_SetIntentToPlay(self->cutscene);
        }
    }
    self->stickAccumX = 0;
}

void EnOssan_CursorUpDown(EnOssan *arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v1;
    u8 temp_v0;
    u8 phi_v0;
    u8 phi_v0_2;
    u8 phi_a1;
    u8 phi_a1_2;
    u8 phi_v0_3;
    u8 phi_v0_4;
    u8 phi_a1_3;
    u8 phi_a1_4;
    u8 phi_v0_5;
    u8 phi_v0_6;
    u8 phi_a1_5;
    u8 phi_a1_6;
    u8 phi_v0_7;
    u8 phi_v0_8;
    u8 phi_a1_7;
    u8 phi_a1_8;

    temp_v1 = arg0->stickAccumY;
    temp_v0 = arg0->cursorIdx;
    if (temp_v1 < 0) {
        temp_v0_2 = temp_v0 & 0xFE & 0xFF;
        if ((arg0 + (temp_v0_2 * 4))->unk1E8 != 0) {
            arg0->cursorIdx = (u8) temp_v0_2;
            return;
        }
        if (temp_v0_2 < 4) {
            temp_a1 = temp_v0_2 + 2;
            phi_v0 = temp_a1 & 0xFF;
            if ((temp_a1 & 0xFF) >= 4) {
                phi_v0 = 0U;
            }
            phi_v0_2 = phi_v0;
            phi_a1 = phi_v0;
            if (temp_v0_2 != phi_v0) {
loop_7:
                if ((arg0 + (phi_v0_2 * 4))->unk1E8 != 0) {
                    arg0->cursorIdx = phi_v0_2;
                    return;
                }
                temp_v0_3 = (phi_a1 + 2) & 0xFF;
                phi_a1_2 = (u8) temp_v0_3;
                phi_v0_2 = (u8) temp_v0_3;
                if (temp_v0_3 >= 4) {
                    phi_a1_2 = 0U;
                    phi_v0_2 = 0U;
                }
                phi_a1 = phi_a1_2;
                if (temp_v0_2 == phi_a1_2) {
                    return;
                }
                goto loop_7;
            }
            // Duplicate return node #43. Try simplifying control flow for better match
            return;
        }
        temp_a1_2 = temp_v0_2 + 2;
        phi_v0_3 = temp_a1_2 & 0xFF;
        if ((temp_a1_2 & 0xFF) >= 8) {
            phi_v0_3 = 4U;
        }
        phi_v0_4 = phi_v0_3;
        phi_a1_3 = phi_v0_3;
        if (temp_v0_2 != phi_v0_3) {
loop_16:
            if ((arg0 + (phi_v0_4 * 4))->unk1E8 != 0) {
                arg0->cursorIdx = phi_v0_4;
                return;
            }
            temp_v0_4 = (phi_a1_3 + 2) & 0xFF;
            phi_a1_4 = (u8) temp_v0_4;
            phi_v0_4 = (u8) temp_v0_4;
            if (temp_v0_4 >= 8) {
                phi_a1_4 = 4U;
                phi_v0_4 = 4U;
            }
            phi_a1_3 = phi_a1_4;
            if (temp_v0_2 == phi_a1_4) {
                return;
            }
            goto loop_16;
        }
        // Duplicate return node #43. Try simplifying control flow for better match
        return;
    }
    if (temp_v1 > 0) {
        temp_v0_5 = (temp_v0 | 1) & 0xFF;
        if ((arg0 + (temp_v0_5 * 4))->unk1E8 != 0) {
            arg0->cursorIdx = (u8) temp_v0_5;
            return;
        }
        if (temp_v0_5 < 4) {
            temp_a1_3 = temp_v0_5 + 2;
            phi_v0_5 = temp_a1_3 & 0xFF;
            if ((temp_a1_3 & 0xFF) >= 4) {
                phi_v0_5 = 1U;
            }
            phi_v0_6 = phi_v0_5;
            phi_a1_5 = phi_v0_5;
            if (temp_v0_5 != phi_v0_5) {
loop_29:
                if ((arg0 + (phi_v0_6 * 4))->unk1E8 != 0) {
                    arg0->cursorIdx = phi_v0_6;
                    return;
                }
                temp_v0_6 = (phi_a1_5 + 2) & 0xFF;
                phi_a1_6 = (u8) temp_v0_6;
                phi_v0_6 = (u8) temp_v0_6;
                if (temp_v0_6 >= 4) {
                    phi_a1_6 = 1U;
                    phi_v0_6 = 1U;
                }
                phi_a1_5 = phi_a1_6;
                if (temp_v0_5 == phi_a1_6) {
                    return;
                }
                goto loop_29;
            }
            // Duplicate return node #43. Try simplifying control flow for better match
            return;
        }
        temp_a1_4 = temp_v0_5 + 2;
        phi_v0_7 = temp_a1_4 & 0xFF;
        if ((temp_a1_4 & 0xFF) >= 8) {
            phi_v0_7 = 5U;
        }
        phi_v0_8 = phi_v0_7;
        phi_a1_7 = phi_v0_7;
        if (temp_v0_5 != phi_v0_7) {
loop_38:
            if ((arg0 + (phi_v0_8 * 4))->unk1E8 != 0) {
                arg0->cursorIdx = phi_v0_8;
                return;
            }
            temp_v0_7 = (phi_a1_7 + 2) & 0xFF;
            phi_a1_8 = (u8) temp_v0_7;
            phi_v0_8 = (u8) temp_v0_7;
            if (temp_v0_7 >= 8) {
                phi_a1_8 = 5U;
                phi_v0_8 = 5U;
            }
            phi_a1_7 = phi_a1_8;
            if (temp_v0_5 == phi_a1_8) {
                // Duplicate return node #43. Try simplifying control flow for better match
                return;
            }
            goto loop_38;
        }
        // Duplicate return node #43. Try simplifying control flow for better match
    }
}

s32 EnOssan_HasPlayerSelectedItem(GlobalContext *arg0, Actor *arg1) {
    void *sp24;

    sp24 = (arg1 + (arg1->unk236 * 4))->unk1E8;
    if (EnOssan_TestEndInteraction(arg1, arg0) != 0) {
        return 1;
    }
    if (EnOssan_TestItemSelected(arg0) != 0) {
        if (sp24->unk1A0 == 0) {
            arg1->unk18C = (s32) arg1->unk188;
            func_80151938(arg0, (arg1 + (arg1->unk236 * 4))->unk1E8->unk198);
            arg1->unk26C = 0;
            arg1->unk2A4 = 0;
            play_sound(0x4808U);
            arg1->unk235 = 0;
            EnOssan_SetupAction((EnOssan *) arg1, EnOssan_SelectItem);
            return 1;
        }
        play_sound(0x4806U);
        return 1;
    }
    return 0;
}

void EnOssan_BrowseLeftShelf(EnOssan *this, GlobalContext *globalCtx) {
    EnOssan *self = (EnOssan *) this;
    u8 sp2F;
    u8 sp27;
    s16 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    u8 temp_v0_8;
    u8 phi_v0;

    sp2F = func_80152498(&globalCtx->msgCtx);
    sp27 = self->cursorIdx;
    if (EnOssan_ReturnItemToShelf(self) == 0) {
        self->delayTimer = 3;
        return;
    }
    temp_v0 = self->delayTimer;
    if (temp_v0 != 0) {
        self->delayTimer = temp_v0 - 1;
        return;
    }
    self->drawCursor = 0xFF;
    self->stickRightPrompt.isEnabled = 1;
    EnOssan_UpdateCursorPos(globalCtx, self);
    if ((sp2F == 5) && (func_8011552C(globalCtx, 6), (EnOssan_HasPlayerSelectedItem(globalCtx, &self->actor, globalCtx->state.input) == 0))) {
        if (self->moveHorizontal != 0) {
            temp_v0_2 = self->stickAccumX;
            if (temp_v0_2 > 0) {
                temp_v0_3 = EnOssan_CursorRight(self, self->cursorIdx, 4);
                phi_v0 = (u8) temp_v0_3;
                if (temp_v0_3 != 0xFF) {
                    goto block_22;
                }
                EnOssan_SetupLookToShopkeeperFromShelf(globalCtx, self);
                return;
            }
            if (temp_v0_2 < 0) {
                temp_v0_4 = EnOssan_CursorLeft(self, self->cursorIdx, 8);
                phi_v0 = (u8) temp_v0_4;
                if (temp_v0_4 != 0xFF) {
                    goto block_22;
                }
            }
            goto block_23;
        }
        temp_v0_5 = self->stickAccumX;
        if ((temp_v0_5 > 0) && (temp_v0_5 >= 0x1F5)) {
            temp_v0_6 = EnOssan_CursorRight(self, self->cursorIdx, 4);
            phi_v0 = (u8) temp_v0_6;
            if (temp_v0_6 != 0xFF) {
                goto block_22;
            }
            EnOssan_SetupLookToShopkeeperFromShelf(globalCtx, self);
            return;
        }
        if ((temp_v0_5 < 0) && (temp_v0_5 < -0x1F4)) {
            temp_v0_7 = EnOssan_CursorLeft(self, self->cursorIdx, 8);
            phi_v0 = (u8) temp_v0_7;
            if (temp_v0_7 != 0xFF) {
block_22:
                self->cursorIdx = phi_v0;
            }
        }
block_23:
        EnOssan_CursorUpDown(self);
        temp_v0_8 = self->cursorIdx;
        if (sp27 != temp_v0_8) {
            func_80151938(globalCtx, self->items[temp_v0_8]->actor.textId);
            play_sound(0x4809U);
        }
        // Duplicate return node #25. Try simplifying control flow for better match
    }
}

void EnOssan_BrowseRightShelf(EnOssan *this, GlobalContext *globalCtx) {
    EnOssan *self = (EnOssan *) this;
    u8 sp2F;
    u8 sp27;
    s16 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    u8 temp_v0_8;
    u8 phi_v0;

    sp2F = func_80152498(&globalCtx->msgCtx);
    sp27 = self->cursorIdx;
    if (EnOssan_ReturnItemToShelf(self) == 0) {
        self->delayTimer = 3;
        return;
    }
    temp_v0 = self->delayTimer;
    if (temp_v0 != 0) {
        self->delayTimer = temp_v0 - 1;
        return;
    }
    self->drawCursor = 0xFF;
    self->stickLeftPrompt.isEnabled = 1;
    EnOssan_UpdateCursorPos(globalCtx, self);
    if ((sp2F == 5) && (func_8011552C(globalCtx, 6), (EnOssan_HasPlayerSelectedItem(globalCtx, &self->actor, globalCtx->state.input) == 0))) {
        if (self->moveHorizontal != 0) {
            temp_v0_2 = self->stickAccumX;
            if (temp_v0_2 < 0) {
                temp_v0_3 = EnOssan_CursorRight(self, self->cursorIdx, 0);
                phi_v0 = (u8) temp_v0_3;
                if (temp_v0_3 != 0xFF) {
                    goto block_22;
                }
                EnOssan_SetupLookToShopkeeperFromShelf(globalCtx, self);
                return;
            }
            if (temp_v0_2 > 0) {
                temp_v0_4 = EnOssan_CursorLeft(self, self->cursorIdx, 4);
                phi_v0 = (u8) temp_v0_4;
                if (temp_v0_4 != 0xFF) {
                    goto block_22;
                }
            }
            goto block_23;
        }
        temp_v0_5 = self->stickAccumX;
        if ((temp_v0_5 < 0) && (temp_v0_5 < -0x1F4)) {
            temp_v0_6 = EnOssan_CursorRight(self, self->cursorIdx, 0);
            phi_v0 = (u8) temp_v0_6;
            if (temp_v0_6 != 0xFF) {
                goto block_22;
            }
            EnOssan_SetupLookToShopkeeperFromShelf(globalCtx, self);
            return;
        }
        if ((temp_v0_5 > 0) && (temp_v0_5 >= 0x1F5)) {
            temp_v0_7 = EnOssan_CursorLeft(self, self->cursorIdx, 4);
            phi_v0 = (u8) temp_v0_7;
            if (temp_v0_7 != 0xFF) {
block_22:
                self->cursorIdx = phi_v0;
            }
        }
block_23:
        EnOssan_CursorUpDown(self);
        temp_v0_8 = self->cursorIdx;
        if (sp27 != temp_v0_8) {
            func_80151938(globalCtx, self->items[temp_v0_8]->actor.textId);
            play_sound(0x4809U);
        }
        // Duplicate return node #25. Try simplifying control flow for better match
    }
}

void EnOssan_LookToShopkeeperFromShelf(EnOssan *this, GlobalContext *globalCtx) {
    EnOssan *self = (EnOssan *) this;
    if (self->cutsceneState == 2) {
        ActorCutscene_Stop(self->cutscene);
        self->cutsceneState = 0;
    }
    if (self->cutsceneState == 0) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        self->cutscene = self->lookToShopKeeperFromShelfCutscene;
        ActorCutscene_SetIntentToPlay(self->cutscene);
        self->cutsceneState = 1;
        return;
    }
    if (self->cutsceneState == 1) {
        if (ActorCutscene_GetCanPlayNext(self->cutscene) != 0) {
            ActorCutscene_StartAndSetFlag(self->cutscene, &self->actor);
            self->cutsceneState = 2;
            EnOssan_UpdateCursorPos(globalCtx, self);
            EnOssan_StartShopping(globalCtx, self);
            return;
        }
        ActorCutscene_SetIntentToPlay(self->cutscene);
        // Duplicate return node #10. Try simplifying control flow for better match
    }
}

void EnOssan_SetupBuyItemWithFanfare(GlobalContext *arg0, Actor *arg1) {
    void *sp2C;
    GlobalContext *temp_a1;
    void *temp_v0;

    temp_a1 = arg0;
    temp_v0 = temp_a1->actorCtx.actorList[2].first;
    arg0 = temp_a1;
    sp2C = temp_v0;
    func_800B8A1C(arg1, temp_a1, (arg1 + (arg1->unk236 * 4))->unk1E8->unk19C, 300.0f, 300.0f);
    arg0->msgCtx.unk11F22 = 0x43;
    arg0->msgCtx.unk12023 = 4;
    temp_v0->unkA70 = (s32) (temp_v0->unkA70 & 0xDFFFFFFF);
    Interface_ChangeAlpha(0x32U);
    arg1->unk235 = 0;
    EnOssan_SetupAction((EnOssan *) arg1, EnOssan_BuyItemWithFanfare);
}

void EnOssan_SetupCannotBuy(GlobalContext *arg0, EnOssan *arg1, u16 arg2) {
    func_80151938(arg0, arg2 & 0xFFFF & 0xFFFF);
    EnOssan_SetupAction(arg1, EnOssan_CannotBuy);
}

void EnOssan_SetupBuy(GlobalContext *arg0, EnOssan *arg1, u16 arg2) {
    func_80151938(arg0, arg2 & 0xFFFF & 0xFFFF);
    EnOssan_SetupAction(arg1, EnOssan_CanBuy);
}

void EnOssan_HandleCanBuyItem(GlobalContext *arg0, Actor *arg1) {
    u32 temp_v0;
    void *temp_s1;

    temp_s1 = (arg1 + (arg1->unk236 * 4))->unk1E8;
    temp_v0 = temp_s1->unk1B4(arg0, temp_s1);
    switch (temp_v0) {
    case 0:
        if (arg1->unk2C2 == 2) {
            ActorCutscene_Stop(arg1->unk2C0);
            arg1->unk2C2 = 0;
        }
        func_8019F208();
        temp_s1->unk1BC(arg0, temp_s1);
        EnOssan_SetupBuyItemWithFanfare(arg0, arg1);
        arg1->unk235 = 0;
        arg1->unk2B4 = 0.0f;
        temp_s1->unk1A4(arg0, temp_s1);
        return;
    case 1:
        func_8019F208();
        temp_s1->unk1B8(arg0, temp_s1);
        EnOssan_SetupBuy(arg0, (EnOssan *) arg1, *(&sBuySuccessTextIds + (arg1->params * 2)));
        arg1->unk235 = 0;
        arg1->unk2B4 = 0.0f;
        temp_s1->unk1A4(arg0, temp_s1);
        return;
    case 2:
    case 7:
        play_sound(0x4806U);
        EnOssan_SetupCannotBuy(arg0, (EnOssan *) arg1, *(&sNoRoomTextIds + (arg1->params * 2)));
        return;
    case 3:
        play_sound(0x4806U);
        EnOssan_SetupCannotBuy(arg0, (EnOssan *) arg1, *(&sNeedEmptyBottleTextIds + (arg1->params * 2)));
        return;
    case 4:
        play_sound(0x4806U);
        EnOssan_SetupCannotBuy(arg0, (EnOssan *) arg1, *(&sNeedRupeesTextIds + (arg1->params * 2)));
        return;
    case 6:
        play_sound(0x4806U);
        EnOssan_SetupCannotBuy(arg0, (EnOssan *) arg1, *(&sCannotGetNowTextIds + (arg1->params * 2)));
        return;
    case 5:
        play_sound(0x4806U);
        EnOssan_SetupCannotBuy(arg0, (EnOssan *) arg1, *(&sNoRoomTextIds + (arg1->params * 2)));
        // fallthrough
    default:
        return;
    }
}

void EnOssan_SelectItem(EnOssan *this, GlobalContext *globalCtx) {
    EnOssan *self = (EnOssan *) this;
    u8 sp27;
    u8 temp_v0;

    sp27 = func_80152498(&globalCtx->msgCtx);
    if ((EnOssan_TakeItemOffShelf(self) != 0) && (sp27 == 4) && (func_8011552C(globalCtx, 6), (EnOssan_TestCancelOption(self, globalCtx, globalCtx->state.input) == 0)) && (func_80147624(globalCtx) != 0)) {
        temp_v0 = globalCtx->msgCtx.choiceIndex;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {
                return;
            }
            func_8019F230();
            self->actionFunc = self->tmpActionFunc;
            func_80151938(globalCtx, self->items[self->cursorIdx]->actor.textId);
            // Duplicate return node #9. Try simplifying control flow for better match
            return;
        }
        EnOssan_HandleCanBuyItem(globalCtx, &self->actor);
    }
}

void EnOssan_CannotBuy(EnOssan *this, GlobalContext *globalCtx) {
    EnOssan *self = (EnOssan *) this;
    self = self;
    if (func_80152498(&globalCtx->msgCtx) == 5) {
        self = self;
        if (func_80147624(globalCtx) != 0) {
            self->actionFunc = self->tmpActionFunc;
            func_80151938(globalCtx, self->items[self->cursorIdx]->actor.textId);
        }
    }
}

void EnOssan_CanBuy(EnOssan *this, GlobalContext *globalCtx) {
    EnOssan *self = (EnOssan *) this;
    EnGirlA *temp_a1;

    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        self->shopItemSelectedTween = 0.0f;
        EnOssan_ResetItemPosition(self);
        temp_a1 = self->items[self->cursorIdx];
        temp_a1->restockFunc(globalCtx, temp_a1);
        self->actionFunc = self->tmpActionFunc;
        func_80151938(globalCtx, self->items[self->cursorIdx]->actor.textId);
    }
}

void EnOssan_BuyItemWithFanfare(EnOssan *this, GlobalContext *globalCtx) {
    EnOssan *self = (EnOssan *) this;
    if (Actor_HasParent(&self->actor, globalCtx) != 0) {
        self->actor.parent = NULL;
        EnOssan_SetupAction(self, EnOssan_SetupItemPurchased);
        return;
    }
    func_800B8A1C(&self->actor, globalCtx, self->items[self->cursorIdx]->getItemId, 300.0f, 300.0f);
}

void EnOssan_SetupItemPurchased(EnOssan *this, GlobalContext *globalCtx) {
    EnOssan *self = (EnOssan *) this;
    if ((func_80152498(&globalCtx->msgCtx) == 6) && (func_80147624(globalCtx) != 0)) {
        globalCtx->msgCtx.unk11F22 = 0x43;
        globalCtx->msgCtx.unk12023 = 4;
        EnOssan_SetupAction(self, EnOssan_ItemPurchased);
        if (self->cutsceneState == 0) {
            if (ActorCutscene_GetCurrentIndex() == 0x7C) {
                ActorCutscene_Stop(0x7C);
            }
            self->cutscene = self->lookToShopkeeperCutscene;
            ActorCutscene_SetIntentToPlay(self->cutscene);
        }
        func_800B85E0(&self->actor, globalCtx, 400.0f, -1);
    }
}

void EnOssan_ContinueShopping(EnOssan *arg0, GlobalContext *arg1) {
    EnGirlA *temp_a1;
    EnGirlA *temp_a1_2;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_s2;

    temp_v0 = func_80152498(arg1 + 0x4908);
    temp_s2 = arg1->actorCtx.actorList[2].first;
    if (temp_v0 == 4) {
        func_8011552C(arg1, 6);
        if ((func_80147624(arg1) != 0) && (EnOssan_ResetItemPosition(arg0), temp_a1 = arg0->items[arg0->cursorIdx], temp_a1->restockFunc(arg1, temp_a1), (EnOssan_TestEndInteraction(&arg0->actor, arg1, arg1->state.input) == 0))) {
            temp_v0_2 = arg1->msgCtx.choiceIndex;
            if (temp_v0_2 != 0) {
                if (temp_v0_2 != 1) {

                }
                func_8019F230();
                EnOssan_EndInteraction(arg1, &arg0->actor);
                return;
            }
            func_8019F208();
            temp_s2->shape.rot.y += 0x8000;
            temp_s2->unkA70 = (s32) (temp_s2->unkA70 | 0x20000000);
            func_801518B0(arg1, arg0->textId, &arg0->actor);
            EnOssan_SetupStartShopping(arg1, arg0, 1U);
            func_800B85E0(&arg0->actor, arg1, 100.0f, -1);
            return;
        }
        // Duplicate return node #11. Try simplifying control flow for better match
        return;
    }
    if ((temp_v0 == 5) && (func_80147624(arg1) != 0)) {
        EnOssan_ResetItemPosition(arg0);
        temp_a1_2 = arg0->items[arg0->cursorIdx];
        temp_a1_2->restockFunc(arg1, temp_a1_2);
        temp_s2->shape.rot.y += 0x8000;
        temp_s2->unkA70 = (s32) (temp_s2->unkA70 | 0x20000000);
        func_801518B0(arg1, arg0->textId, &arg0->actor);
        EnOssan_SetupStartShopping(arg1, arg0, 1U);
        func_800B85E0(&arg0->actor, arg1, 100.0f, -1);
    }
}

void EnOssan_ItemPurchased(EnOssan *this, GlobalContext *globalCtx) {
    EnOssan *self = (EnOssan *) this;
    Actor *sp24;
    Actor *temp_v1;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if (self->cutsceneState == 0) {
        sp24 = temp_v1;
        if (ActorCutscene_GetCanPlayNext(self->cutscene) != 0) {
            sp24 = temp_v1;
            ActorCutscene_StartAndSetFlag(self->cutscene, &self->actor);
            temp_v1->unkA70 = (s32) (temp_v1->unkA70 | 0x20000000);
            EnOssan_SetupAction(self, EnOssan_ContinueShopping);
            self->cutsceneState = 2;
        } else {
            if (ActorCutscene_GetCurrentIndex() == 0x7C) {
                ActorCutscene_Stop(0x7C);
            }
            self->cutscene = self->lookToShopkeeperCutscene;
            ActorCutscene_SetIntentToPlay(self->cutscene);
        }
    }
    if (func_800B84D0(&self->actor, globalCtx) != 0) {
        func_80151938(globalCtx, 0x642U);
        return;
    }
    func_800B85E0(&self->actor, globalCtx, 400.0f, -1);
}

void EnOssan_PositionSelectedItem(EnOssan *arg0) {
    f32 sp0;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    u8 temp_v0;
    void *temp_a1;
    void *temp_a2;
    void *temp_v1;

    temp_v0 = arg0->cursorIdx;
    temp_v1 = (arg0->actor.params << 6) + (temp_v0 * 8) + &D_808AC1D4;
    temp_f2 = (f32) temp_v1->unk2;
    temp_a2 = ((((s32) temp_v0 >> 2) & 0xFF) * 0xC) + &sSelectedItemPosition;
    temp_f12 = arg0->shopItemSelectedTween;
    temp_f16 = (f32) temp_v1->unk4;
    temp_a1 = (arg0 + (temp_v0 * 4))->unk1E8;
    sp0 = (f32) temp_v1->unk6;
    temp_a1->unk24 = (f32) (((temp_a2->unk0 - temp_f2) * temp_f12) + temp_f2);
    temp_a1->unk28 = (f32) (((temp_a2->unk4 - temp_f16) * temp_f12) + temp_f16);
    temp_a1->unk2C = (f32) (((temp_a2->unk8 - sp0) * temp_f12) + sp0);
}

void EnOssan_ResetItemPosition(EnOssan *this) {
    EnOssan *self = (EnOssan *) this;
    self->shopItemSelectedTween = 0.0f;
    EnOssan_PositionSelectedItem();
}

s32 EnOssan_TakeItemOffShelf(EnOssan *this) {
    EnOssan *self = (EnOssan *) this;
    s32 phi_v0;

    Math_ApproachF(&self->shopItemSelectedTween, 1.0f, 1.0f, 0.15f);
    if (self->shopItemSelectedTween >= 0.85f) {
        self->shopItemSelectedTween = 1.0f;
    }
    EnOssan_PositionSelectedItem(self);
    phi_v0 = 0;
    if (self->shopItemSelectedTween == 1.0f) {
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 EnOssan_ReturnItemToShelf(EnOssan *this) {
    EnOssan *self = (EnOssan *) this;
    s32 phi_v0;

    Math_ApproachF(&self->shopItemSelectedTween, 0.0f, 1.0f, 0.15f);
    if (self->shopItemSelectedTween <= 0.15f) {
        self->shopItemSelectedTween = 0.0f;
    }
    EnOssan_PositionSelectedItem(self);
    phi_v0 = 0;
    if (self->shopItemSelectedTween == 0.0f) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void EnOssan_UpdateItemSelectedProperty(EnOssan *arg0) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_v1;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;
    s32 phi_v1;

    phi_v0 = arg0 + 0x1E8;
    phi_v1 = 0;
    do {
        temp_a1 = phi_v0->unk0;
        if (temp_a1 != 0) {
            temp_a2 = arg0->actionFunc;
            if ((EnOssan_SelectItem != temp_a2) && (EnOssan_CannotBuy != temp_a2) && (arg0->drawCursor == 0)) {
                goto block_8;
            }
            if (phi_v1 == arg0->cursorIdx) {
                temp_a1->unk1AC = 1;
            } else {
block_8:
                temp_a1->unk1AC = 0;
            }
        }
        temp_a1_2 = phi_v0->unk4;
        temp_v0 = phi_v0 + 4;
        if (temp_a1_2 != 0) {
            temp_a2_2 = arg0->actionFunc;
            if ((EnOssan_SelectItem != temp_a2_2) && (EnOssan_CannotBuy != temp_a2_2) && (arg0->drawCursor == 0)) {
                goto block_16;
            }
            if ((phi_v1 + 1) == arg0->cursorIdx) {
                temp_a1_2->unk1AC = 1;
            } else {
block_16:
                temp_a1_2->unk1AC = 0;
            }
        }
        temp_a1_3 = temp_v0->unk4;
        temp_v0_2 = temp_v0 + 4;
        if (temp_a1_3 != 0) {
            temp_a2_3 = arg0->actionFunc;
            if ((EnOssan_SelectItem != temp_a2_3) && (EnOssan_CannotBuy != temp_a2_3) && (arg0->drawCursor == 0)) {
                goto block_24;
            }
            if ((phi_v1 + 2) == arg0->cursorIdx) {
                temp_a1_3->unk1AC = 1;
            } else {
block_24:
                temp_a1_3->unk1AC = 0;
            }
        }
        temp_a1_4 = temp_v0_2->unk4;
        if (temp_a1_4 != 0) {
            temp_a2_4 = arg0->actionFunc;
            if ((EnOssan_SelectItem != temp_a2_4) && (EnOssan_CannotBuy != temp_a2_4) && (arg0->drawCursor == 0)) {
                goto block_32;
            }
            if ((phi_v1 + 3) == arg0->cursorIdx) {
                temp_a1_4->unk1AC = 1;
            } else {
block_32:
                temp_a1_4->unk1AC = 0;
            }
        }
        temp_v1 = phi_v1 + 4;
        phi_v0 = temp_v0_2 + 4 + 4;
        phi_v1 = temp_v1;
    } while (temp_v1 != 8);
}

void EnOssan_UpdateCursorAnim(EnOssan *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    s32 temp_f8;
    s32 temp_v1;
    f32 phi_f0;

    temp_f0 = arg0->cursorAnimTween;
    if (arg0->cursorAnimState == 0) {
        temp_f0_2 = temp_f0 + 0.05f;
        phi_f0 = temp_f0_2;
        if (temp_f0_2 >= 1.0f) {
            arg0->cursorAnimState = 1;
            phi_f0 = 1.0f;
        }
    } else {
        temp_f0_3 = temp_f0 - 0.05f;
        phi_f0 = temp_f0_3;
        if (temp_f0_3 <= 0.0f) {
            arg0->cursorAnimState = 0;
            phi_f0 = 0.0f;
        }
    }
    temp_f8 = (s32) 0.0f;
    arg0->cursorAnimTween = phi_f0;
    temp_v1 = (0xFF - temp_f8) & 0xFF;
    arg0->cursorColor.r = -temp_f8 & 0xFF;
    arg0->cursorColor.b = temp_v1;
    arg0->cursorColor.a = temp_v1;
    arg0->cursorColor.g = (0x50 - (s32) (80.0f * phi_f0)) & 0xFF;
}

void EnOssan_UpdateStickDirectionPromptAnim(EnOssan *arg0) {
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_f18;
    s32 temp_v1;
    f32 phi_f2;
    f32 phi_f0;

    temp_f2 = arg0->arrowAnimTween;
    if (arg0->arrowAnimState == 0) {
        temp_f2_2 = temp_f2 + 0.05f;
        phi_f2 = temp_f2_2;
        if (temp_f2_2 > 1.0f) {
            arg0->arrowAnimState = 1;
            phi_f2 = 1.0f;
        }
    } else {
        temp_f2_3 = temp_f2 - 0.05f;
        phi_f2 = temp_f2_3;
        if (temp_f2_3 < 0.0f) {
            arg0->arrowAnimState = 0;
            phi_f2 = 0.0f;
        }
    }
    arg0->arrowAnimTween = phi_f2;
    if (arg0->stickAnimState == 0) {
        temp_f0 = arg0->stickAnimTween + 0.1f;
        phi_f0 = temp_f0;
        if (temp_f0 > 1.0f) {
            arg0->stickAnimState = 1;
            phi_f0 = 1.0f;
        }
    } else {
        arg0->stickAnimState = 0;
        phi_f0 = 0.0f;
    }
    temp_f18 = (s32) (155.0f * phi_f2);
    arg0->stickRightPrompt.arrowTexX = 290.0f;
    temp_f2_4 = 8.0f * phi_f0;
    arg0->stickLeftPrompt.arrowColor.r = (0xFF - temp_f18) & 0xFF;
    temp_v1 = (0xFF - temp_f18) & 0xFF;
    temp_a1 = -(s32) (-100.0f * phi_f2) & 0xFF;
    temp_a2 = (0xC8 - (s32) (50.0f * phi_f2)) & 0xFF;
    arg0->stickAnimTween = phi_f0;
    arg0->stickLeftPrompt.arrowColor.g = temp_v1;
    arg0->stickLeftPrompt.arrowColor.b = temp_a1;
    arg0->stickLeftPrompt.arrowColor.a = temp_a2;
    arg0->stickRightPrompt.arrowColor.r = temp_v1;
    arg0->stickRightPrompt.arrowColor.g = temp_v1;
    arg0->stickRightPrompt.arrowColor.b = temp_a1;
    arg0->stickRightPrompt.arrowColor.a = temp_a2;
    arg0->stickRightPrompt.stickTexX = 274.0f + temp_f2_4;
    arg0->stickLeftPrompt.stickTexX = 49.0f - temp_f2_4;
    arg0->stickRightPrompt.arrowTexY = 91.0f;
    arg0->stickLeftPrompt.arrowTexY = 91.0f;
    arg0->stickRightPrompt.stickTexY = 95.0f;
    arg0->stickLeftPrompt.stickTexY = 95.0f;
    arg0->stickLeftPrompt.arrowTexX = 33.0f;
}

void EnOssan_WaitForBlink(EnOssan *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->blinkTimer - 1;
    if (temp_v0 != 0) {
        arg0->blinkTimer = temp_v0;
        return;
    }
    arg0->blinkFunc = EnOssan_Blink;
}

void EnOssan_Blink(EnOssan *this) {
    EnOssan *self = (EnOssan *) this;
    f32 temp_f6;
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = self->blinkTimer - 1;
    if (temp_v0 != 0) {
        self->blinkTimer = temp_v0;
        return;
    }
    temp_v0_2 = self->eyeTexIndex + 1;
    if ((s32) temp_v0_2 >= 3) {
        self->eyeTexIndex = 0;
        temp_f6 = Rand_ZeroOne() * 60.0f;
        self->blinkFunc = EnOssan_WaitForBlink;
        self->blinkTimer = (s32) temp_f6 + 0x14;
        return;
    }
    self->eyeTexIndex = temp_v0_2;
    self->blinkTimer = 1;
}

void EnOssan_InitCuriosityShopMan(EnOssan *this, GlobalContext *globalCtx) {
    EnOssan *self = (EnOssan *) this;
    SkelAnime_InitSV(globalCtx, &self->skelAnime, &D_06013320, &D_06012C34, self->limbDrawTbl, self->transitionDrawTbl, 0x13);
    self->actor.draw = EnOssan_DrawCuriosityShopMan;
}

void EnOssan_InitPartTimeWorker(EnOssan *this, GlobalContext *globalCtx) {
    EnOssan *self = (EnOssan *) this;
    SkelAnime_InitSV(globalCtx, &self->skelAnime, &D_060028A0, &D_06009D34, self->limbDrawTbl, self->transitionDrawTbl, 0x10);
    self->actor.draw = EnOssan_DrawPartTimeWorker;
}

u16 EnOssan_GetWelcomeCuriosityShopMan(EnOssan *this, GlobalContext *globalCtx) {
    EnOssan *self = (EnOssan *) this;
    Actor *sp1C;
    u16 temp_v0;
    u16 temp_v1;
    u8 temp_v0_2;

    self = self;
    sp1C = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = Text_GetFaceReaction(globalCtx, 0x2FU);
    temp_v1 = temp_v0 & 0xFFFF;
    if (temp_v0 != 0) {
        self->animationIdx = 4;
        self->flags |= 2;
        return temp_v1;
    }
    temp_v0_2 = sp1C->unk14B;
    if (temp_v0_2 != 1) {
        if (temp_v0_2 != 2) {
            if (temp_v0_2 == 3) {
                self->animationIdx = 0xA;
                if ((gSaveContext.weekEventReg[18] & 0x10) != 0) {
                    return sWelcomeDekuTextIds;
                }
                return sWelcomeDekuFirstTimeTextIds;
            }
            self->animationIdx = 4;
            return sWelcomeHumanTextIds;
        }
        self->animationIdx = 8;
        if ((gSaveContext.weekEventReg[18] & 8) != 0) {
            return sWelcomeZoraTextIds;
        }
        return sWelcomeZoraFirstTimeTextIds;
    }
    self->animationIdx = 6;
    if ((gSaveContext.weekEventReg[18] & 4) != 0) {
        return sWelcomeGoronTextIds;
    }
    return sWelcomeGoronFirstTimeTextIds;
}

u16 EnOssan_GetWelcomePartTimeWorker(EnOssan *this, GlobalContext *globalCtx) {
    EnOssan *self = (EnOssan *) this;
    Actor *sp1C;
    u16 temp_v0;
    u16 temp_v0_2;
    u8 temp_v0_3;

    sp1C = globalCtx->actorCtx.actorList[2].first;
    temp_v0_2 = Text_GetFaceReaction(globalCtx, 0x36U);
    if (temp_v0_2 != 0) {
        temp_v0 = temp_v0_2 & 0xFFFF;
        self->flags |= 2;
        return temp_v0;
    }
    temp_v0_3 = sp1C->unk14B;
    if (temp_v0_3 != 1) {
        if (temp_v0_3 != 2) {
            if (temp_v0_3 == 3) {
                if ((gSaveContext.weekEventReg[55] & 0x10) != 0) {
                    return D_808AC272;
                }
                return D_808AC266;
            }
            return D_808AC256;
        }
        if ((gSaveContext.weekEventReg[55] & 8) != 0) {
            return D_808AC26E;
        }
        return D_808AC262;
    }
    if ((gSaveContext.weekEventReg[55] & 4) != 0) {
        return D_808AC26A;
    }
    return D_808AC25E;
}

void EnOssan_SetHaveMet(EnOssan *this) {
    EnOssan *self = (EnOssan *) this;
    u16 temp_t6;

    temp_t6 = self->textId;
    switch (temp_t6) {
    case 1705:
        gSaveContext.weekEventReg[18] |= 0x10;
        return;
    case 1734:
        gSaveContext.weekEventReg[55] |= 0x10;
        return;
    case 1703:
        gSaveContext.weekEventReg[18] |= 8;
        return;
    case 1732:
        gSaveContext.weekEventReg[55] |= 8;
        return;
    case 1701:
        gSaveContext.weekEventReg[18] |= 4;
        return;
    case 1730:
        gSaveContext.weekEventReg[55] |= 4;
        // fallthrough
    default:
        return;
    }
}

void EnOssan_InitShop(EnOssan *arg0, GlobalContext *arg1) {
    EnOssan *self = (EnOssan *) arg0;
    void *sp24;

    if (Object_IsLoaded(&arg1->objectCtx, (s32) self->objIndex) != 0) {
        self->actor.flags &= -0x11;
        self->actor.objBankIndex = self->objIndex;
        Actor_SetObjectSegment(arg1, &self->actor);
        sp24 = (self->actor.params << 6) + &D_808AC1D4;
        ActorShape_Init(&self->actor.shape, 0.0f, func_800B3FC0, 20.0f);
        *(&sInitFuncs + (self->actor.params * 4))(self, arg1);
        self->textId = (&sWelcomeHumanTextIds)[self->actor.params];
        EnOssan_GetCutscenes(self, arg1);
        self->cursorPos.x = 100.0f;
        self->cursorPos.y = 100.0f;
        self->cutsceneState = 0;
        self->actor.colChkInfo.mass = 0xFF;
        self->actor.colChkInfo.cylRadius = 0x32;
        self->stickAccumY = 0;
        self->stickAccumX = 0;
        self->cursorIdx = 0;
        self->cursorColor.r = 0;
        self->cursorColor.g = 0x50;
        self->cursorColor.b = (u32) 0xFFU;
        self->cursorColor.a = (u32) 0xFFU;
        self->cursorAnimState = 0;
        self->drawCursor = 0;
        self->stickLeftPrompt.stickColor.r = 0xC8;
        self->stickLeftPrompt.stickColor.g = 0xC8;
        self->stickLeftPrompt.stickColor.b = 0xC8;
        self->stickLeftPrompt.stickColor.a = 0xB4;
        self->stickLeftPrompt.arrowColor.r = (u32) 0xFFU;
        self->stickLeftPrompt.arrowColor.g = (u32) 0xFFU;
        self->stickLeftPrompt.arrowColor.b = 0;
        self->stickLeftPrompt.arrowColor.a = 0xC8;
        self->stickLeftPrompt.isEnabled = 0;
        self->stickRightPrompt.stickColor.r = 0xC8;
        self->stickRightPrompt.stickColor.g = 0xC8;
        self->stickRightPrompt.stickColor.b = 0xC8;
        self->stickRightPrompt.stickColor.a = 0xB4;
        self->stickRightPrompt.arrowColor.r = (u32) 0xFFU;
        self->stickRightPrompt.arrowColor.g = (u32) 0xFFU;
        self->stickRightPrompt.arrowColor.b = 0;
        self->stickRightPrompt.arrowColor.a = 0xC8;
        self->stickRightPrompt.isEnabled = 0;
        self->arrowAnimState = 0;
        self->stickAnimState = 0;
        self->cursorPos.z = 1.5f;
        self->stickLeftPrompt.stickTexY = 95.0f;
        self->stickRightPrompt.stickTexY = 95.0f;
        self->stickLeftPrompt.arrowTexY = 91.0f;
        self->stickRightPrompt.arrowTexY = 91.0f;
        self->stickLeftPrompt.texZ = 1.0f;
        self->stickRightPrompt.texZ = 1.0f;
        self->stickLeftPrompt.stickTexX = 49.0f;
        self->stickLeftPrompt.arrowTexX = 33.0f;
        self->cursorAnimTween = 0.0f;
        self->arrowAnimTween = 0.0f;
        self->stickAnimTween = 0.0f;
        self->shopItemSelectedTween = 0.0f;
        self->stickRightPrompt.stickTexX = 274.0f;
        self->cutscene = self->lookToShopkeeperCutscene;
        self->stickRightPrompt.arrowTexX = 290.0f;
        Actor_SetScale(&self->actor, *(&sShops + (self->actor.params * 4)));
        self->animationIdx = 1;
        func_8013BC6C(&self->skelAnime, *(&sAnimations + (self->actor.params * 4)), 1);
        EnOssan_SpawnShopItems(self, arg1, sp24);
        self->blinkTimer = 0x14;
        self->eyeTexIndex = 0;
        self->blinkFunc = EnOssan_WaitForBlink;
        self->actor.flags &= -2;
        EnOssan_SetupAction(self, EnOssan_Idle);
    }
}

void EnOssan_GetCutscenes(EnOssan *this, GlobalContext *globalCtx) {
    EnOssan *self = (EnOssan *) this;
    self->lookToShopkeeperCutscene = (s16) self->actor.cutscene;
    self->lookToLeftShelfCutscene = ActorCutscene_GetAdditionalCutscene(self->lookToShopkeeperCutscene);
    self->lookToRightShelfCutscene = ActorCutscene_GetAdditionalCutscene(self->lookToLeftShelfCutscene);
    self->lookToShopKeeperFromShelfCutscene = ActorCutscene_GetAdditionalCutscene(self->lookToRightShelfCutscene);
}

void EnOssan_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnOssan *this = (EnOssan *) thisx;
    void (*temp_v0)(EnOssan *, GlobalContext *);

    temp_v0 = this->actionFunc;
    if (EnOssan_InitShop != temp_v0) {
        this->blinkFunc(this);
        EnOssan_UpdateJoystickInputState(globalCtx, this);
        EnOssan_UpdateItemSelectedProperty(this);
        EnOssan_UpdateStickDirectionPromptAnim(this);
        EnOssan_UpdateCursorAnim(this);
        func_800E9250(globalCtx, &this->actor, &this->headRot, &this->unk2CC, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
        this->actionFunc(this, globalCtx);
        Actor_SetHeight(&this->actor, 90.0f);
        SkelAnime_FrameUpdateMatrix(&this->skelAnime);
        return;
    }
    temp_v0(this, globalCtx);
}

void EnOssan_DrawCursor(GraphicsContext **arg0, EnOssan *arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5) {
    GraphicsContext *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a2;
    f32 temp_f0;
    s32 temp_a1;

    temp_a2 = *arg0;
    if (arg5 != 0) {
        sp1C = temp_a2;
        arg2 = arg2;
        func_8012C654(temp_a2);
        temp_v0 = sp1C->overlay.p;
        sp1C->overlay.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xFA000000;
        temp_v0->words.w1 = (arg1->cursorColor.r << 0x18) | ((arg1->cursorColor.g & 0xFF) << 0x10) | ((arg1->cursorColor.b & 0xFF) << 8) | (arg1->cursorColor.a & 0xFF);
        temp_v0_2 = sp1C->overlay.p;
        sp1C->overlay.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFD700000;
        temp_v0_2->words.w1 = (u32) &D_0401F740;
        temp_v0_3 = sp1C->overlay.p;
        sp1C->overlay.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xF5700000;
        temp_v0_3->words.w1 = 0x7050140;
        temp_v0_4 = sp1C->overlay.p;
        sp1C->overlay.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = 0;
        temp_v0_4->words.w0 = 0xE6000000;
        temp_v0_5 = sp1C->overlay.p;
        sp1C->overlay.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = 0x703F800;
        temp_v0_5->words.w0 = 0xF3000000;
        temp_v0_6 = sp1C->overlay.p;
        sp1C->overlay.p = temp_v0_6 + 8;
        temp_v0_6->words.w1 = 0;
        temp_v0_6->words.w0 = 0xE7000000;
        temp_v0_7 = sp1C->overlay.p;
        sp1C->overlay.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xF5600200;
        temp_v0_7->words.w1 = 0x50140;
        temp_v0_8 = sp1C->overlay.p;
        sp1C->overlay.p = temp_v0_8 + 8;
        temp_v0_8->words.w0 = 0xF2000000;
        temp_v0_8->words.w1 = 0x3C03C;
        temp_v0_9 = sp1C->overlay.p;
        temp_f0 = 16.0f * arg4;
        sp1C->overlay.p = temp_v0_9 + 8;
        temp_v0_9->words.w0 = (((s32) ((arg2 + temp_f0) * 4.0f) & 0xFFF) << 0xC) | 0xE4000000 | ((s32) ((arg3 + temp_f0) * 4.0f) & 0xFFF);
        temp_v0_9->words.w1 = (((s32) ((arg2 - temp_f0) * 4.0f) & 0xFFF) << 0xC) | ((s32) ((arg3 - temp_f0) * 4.0f) & 0xFFF);
        temp_v0_10 = sp1C->overlay.p;
        sp1C->overlay.p = temp_v0_10 + 8;
        temp_v0_10->words.w1 = 0;
        temp_v0_10->words.w0 = 0xE1000000;
        temp_v0_11 = sp1C->overlay.p;
        sp1C->overlay.p = temp_v0_11 + 8;
        temp_a1 = (s32) ((1.0f / arg4) * 1024.0f) & 0xFFFF;
        temp_v0_11->words.w1 = (temp_a1 << 0x10) | temp_a1;
        temp_v0_11->words.w0 = 0xF1000000;
    }
}

void EnOssan_DrawTextRec(GraphicsContext **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8, s32 arg9, f32 argA, f32 argB) {
    GraphicsContext *temp_v0;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;

    temp_v0 = *arg0;
    temp_a0 = temp_v0->overlay.p;
    temp_v0->overlay.p = temp_a0 + 8;
    temp_a0->words.w1 = 0;
    temp_a0->words.w0 = 0xE7000000;
    temp_a0_2 = temp_v0->overlay.p;
    temp_v0->overlay.p = temp_a0_2 + 8;
    temp_a0_2->words.w0 = 0xFA000000;
    temp_a0_2->words.w1 = (arg1 << 0x18) | ((arg2 & 0xFF) << 0x10) | ((arg3 & 0xFF) << 8) | (arg4 & 0xFF);
    temp_f2 = 8.0f * arg7;
    temp_a0_3 = temp_v0->overlay.p;
    temp_f14 = 12.0f * arg7;
    temp_v0->overlay.p = temp_a0_3 + 8;
    temp_a0_3->words.w0 = (((s32) ((arg5 + temp_f2) * 4.0f) & 0xFFF) << 0xC) | 0xE4000000 | ((s32) ((arg6 + temp_f14) * 4.0f) & 0xFFF);
    temp_a0_3->words.w1 = (((s32) ((arg5 - temp_f2) * 4.0f) & 0xFFF) << 0xC) | ((s32) ((arg6 - temp_f14) * 4.0f) & 0xFFF);
    temp_a0_4 = temp_v0->overlay.p;
    temp_v0->overlay.p = temp_a0_4 + 8;
    temp_a0_4->words.w0 = 0xE1000000;
    temp_a0_4->words.w1 = (arg8 << 0x10) | (arg9 & 0xFFFF);
    temp_a0_5 = temp_v0->overlay.p;
    temp_f2_2 = (1.0f / arg7) * 1024.0f;
    temp_v0->overlay.p = temp_a0_5 + 8;
    temp_a0_5->words.w0 = 0xF1000000;
    temp_a0_5->words.w1 = ((s32) (temp_f2_2 * argA) << 0x10) | ((s32) (argB * temp_f2_2) & 0xFFFF);
}

void EnOssan_DrawStickDirectionPrompts(GraphicsContext **arg0, EnOssan *arg1) {
    s32 sp4C;
    s32 sp48;
    GraphicsContext *sp44;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a2;
    s32 temp_t1;
    s32 temp_v0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_15;
    void *temp_v0_16;

    temp_t1 = arg1->stickLeftPrompt.isEnabled;
    temp_v0 = arg1->stickRightPrompt.isEnabled;
    temp_a2 = *arg0;
    if ((temp_t1 != 0) || (temp_v0 != 0)) {
        sp48 = temp_v0;
        sp44 = temp_a2;
        sp4C = temp_t1;
        func_8012C654(temp_a2);
        temp_v0_2 = temp_a2->overlay.p;
        temp_a2->overlay.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFC119623;
        temp_v0_2->words.w1 = 0xFF2FFFFF;
        temp_v0_3 = temp_a2->overlay.p;
        temp_a2->overlay.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFD700000;
        temp_v0_3->words.w1 = (u32) &D_0401F8C0;
        temp_v0_4 = temp_a2->overlay.p;
        temp_a2->overlay.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xF5700000;
        temp_v0_4->words.w1 = 0x7000040;
        temp_v0_5 = temp_a2->overlay.p;
        temp_a2->overlay.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = 0;
        temp_v0_5->words.w0 = 0xE6000000;
        temp_v0_6 = temp_a2->overlay.p;
        temp_a2->overlay.p = temp_v0_6 + 8;
        temp_v0_6->words.w1 = 0x70BF400;
        temp_v0_6->words.w0 = 0xF3000000;
        temp_v0_7 = temp_a2->overlay.p;
        temp_a2->overlay.p = temp_v0_7 + 8;
        temp_v0_7->words.w1 = 0;
        temp_v0_7->words.w0 = 0xE7000000;
        temp_v0_8 = temp_a2->overlay.p;
        temp_a2->overlay.p = temp_v0_8 + 8;
        temp_v0_8->words.w1 = 0x40;
        temp_v0_8->words.w0 = 0xF5680400;
        temp_v0_9 = temp_a2->overlay.p;
        temp_a2->overlay.p = temp_v0_9 + 8;
        temp_v0_9->words.w0 = 0xF2000000;
        temp_v0_9->words.w1 = 0x3C05C;
        if (temp_t1 != 0) {
            sp4C = temp_t1;
            sp44 = temp_a2;
            EnOssan_DrawTextRec(arg0, arg1->stickLeftPrompt.arrowColor.r, arg1->stickLeftPrompt.arrowColor.g, arg1->stickLeftPrompt.arrowColor.b, arg1->stickLeftPrompt.arrowColor.a, arg1->stickLeftPrompt.arrowTexX, arg1->stickLeftPrompt.arrowTexY, arg1->stickLeftPrompt.texZ, 0, 0, -1.0f, 1.0f);
        }
        if (sp48 != 0) {
            sp4C = arg1->stickLeftPrompt.isEnabled;
            sp44 = *arg0;
            EnOssan_DrawTextRec(arg0, arg1->stickRightPrompt.arrowColor.r, arg1->stickRightPrompt.arrowColor.g, arg1->stickRightPrompt.arrowColor.b, arg1->stickRightPrompt.arrowColor.a, arg1->stickRightPrompt.arrowTexX, arg1->stickRightPrompt.arrowTexY, arg1->stickRightPrompt.texZ, 0, 0, 1.0f, 1.0f);
        }
        temp_v0_10 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_10 + 8;
        temp_v0_10->words.w0 = 0xFD700000;
        temp_v0_10->words.w1 = &D_0401F7C0;
        temp_v0_11 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_11 + 8;
        temp_v0_11->words.w0 = 0xF5700000;
        temp_v0_11->words.w1 = 0x7000040;
        temp_v0_12 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_12 + 8;
        temp_v0_12->words.w1 = 0;
        temp_v0_12->words.w0 = 0xE6000000;
        temp_v0_13 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_13 + 8;
        temp_v0_13->words.w1 = 0x707F400;
        temp_v0_13->words.w0 = 0xF3000000;
        temp_v0_14 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_14 + 8;
        temp_v0_14->words.w1 = 0;
        temp_v0_14->words.w0 = 0xE7000000;
        temp_v0_15 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_15 + 8;
        temp_v0_15->words.w1 = 0x40;
        temp_v0_15->words.w0 = 0xF5680400;
        temp_v0_16 = (*arg0)->overlay.p;
        (*arg0)->overlay.p = temp_v0_16 + 8;
        temp_v0_16->words.w0 = 0xF2000000;
        temp_v0_16->words.w1 = 0x3C03C;
        if (arg1->stickLeftPrompt.isEnabled != 0) {
            EnOssan_DrawTextRec(arg0, arg1->stickLeftPrompt.stickColor.r, arg1->stickLeftPrompt.stickColor.g, arg1->stickLeftPrompt.stickColor.b, arg1->stickLeftPrompt.stickColor.a, arg1->stickLeftPrompt.stickTexX, arg1->stickLeftPrompt.stickTexY, arg1->stickLeftPrompt.texZ, 0, 0, -1.0f, 1.0f);
        }
        if (sp48 != 0) {
            EnOssan_DrawTextRec(arg0, arg1->stickRightPrompt.stickColor.r, arg1->stickRightPrompt.stickColor.g, arg1->stickRightPrompt.stickColor.b, arg1->stickRightPrompt.stickColor.a, arg1->stickRightPrompt.stickTexX, arg1->stickRightPrompt.stickTexY, arg1->stickRightPrompt.texZ, 0, 0, 1.0f, 1.0f);
        }
    }
}

s32 EnOssan_OverrideLimbDrawCuriosityShopMan(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg1 == 0x10) {
        SysMatrix_InsertXRotation_s(arg5->unk2C8, 1);
    }
    return 0;
}

s32 EnOssan_OverrideLimbDrawPartTimeWorker(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg1 == 0xF) {
        SysMatrix_InsertXRotation_s(arg5->unk406, 1);
        SysMatrix_InsertZRotation_s(arg5->unk404, 1);
    }
    return 0;
}

void EnOssan_PostLimbDrawCuriosityShopMan(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    void *sp1C;
    void *temp_v0;

    if ((arg1 == 1) || (arg1 == 9) || (arg1 == 0xC)) {
        temp_v0 = arg4 + (arg1 * 2);
        sp1C = temp_v0;
        arg3->y += (s32) Math_SinS(temp_v0->unk2D2) * 0xC8;
        arg3->z += (s32) Math_CosS(temp_v0->unk2F8) * 0xC8;
    }
}

void EnOssan_PostLimbDrawPartTimeWorker(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 0xF) {
        SysMatrix_MultiplyVector3fByState(&sPartTimeWorkerFocusOffset, arg4 + 0x3C);
    }
}

void EnOssan_DrawCuriosityShopMan(Actor *thisx, GlobalContext *globalCtx) {
    EnOssan *this = (EnOssan *) thisx;
    GraphicsContext *sp3C;
    Gfx *sp34;
    Gfx *temp_v0;
    GraphicsContext *temp_a0;

    temp_a0 = globalCtx->state.gfxCtx;
    sp3C = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp3C->polyOpa.p;
    sp3C->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp34 = temp_v0;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&sCuriosityShopManEyeTextures + (this->eyeTexIndex * 4)));
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, EnOssan_OverrideLimbDrawCuriosityShopMan, EnOssan_PostLimbDrawCuriosityShopMan, &this->actor);
    EnOssan_DrawCursor(&globalCtx->state.gfxCtx, this, this->cursorPos.x, this->cursorPos.y, this->cursorPos.z, (u8) (s32) this->drawCursor);
    EnOssan_DrawStickDirectionPrompts(&globalCtx->state.gfxCtx, this);
}

void EnOssan_DrawPartTimeWorker(Actor *thisx, GlobalContext *globalCtx) {
    EnOssan *this = (EnOssan *) thisx;
    GraphicsContext *sp3C;
    Gfx *sp34;
    Gfx *temp_v0;
    GraphicsContext *temp_a0;

    temp_a0 = globalCtx->state.gfxCtx;
    sp3C = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp3C->polyOpa.p;
    sp3C->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp34 = temp_v0;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&sPartTimeWorkerEyeTextures + (this->eyeTexIndex * 4)));
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, EnOssan_OverrideLimbDrawPartTimeWorker, EnOssan_PostLimbDrawPartTimeWorker, &this->actor);
    EnOssan_DrawCursor(&globalCtx->state.gfxCtx, this, this->cursorPos.x, this->cursorPos.y, this->cursorPos.z, (u8) (s32) this->drawCursor);
    EnOssan_DrawStickDirectionPrompts(&globalCtx->state.gfxCtx, this);
}

