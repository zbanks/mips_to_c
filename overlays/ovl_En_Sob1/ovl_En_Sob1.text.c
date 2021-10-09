s32 EnSob1_AreObjectsLoaded(EnSob1 *arg0, GlobalContext *arg1); /* static */
void EnSob1_ChangeAnim(SkelAnime *arg0, ? *arg1, s32 arg2); /* static */
void EnSob1_ChangeObject(EnSob1 *arg0, GlobalContext *arg1); /* static */
void EnSob1_CursorLeftRight(GlobalContext *arg1, EnSob1 *); /* static */
void EnSob1_DrawCursor(GraphicsContext **arg0, EnSob1 *arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5); /* static */
void EnSob1_DrawStickDirectionPrompt(GraphicsContext **arg0, EnSob1 *arg1); /* static */
void EnSob1_DrawTextRec(GraphicsContext **arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8, s32 arg9, f32 argA, f32 argB); /* static */
Gfx *EnSob1_EndDList(GraphicsContext *arg0);        /* static */
void EnSob1_EndInteraction(GlobalContext *arg0, Actor *arg1, Actor *, Actor *); /* static */
void EnSob1_EndInteractionBombShop(Actor *arg0, GlobalContext *arg1, Actor *, Actor *); /* static */
void EnSob1_EndWalk(Actor *arg0, GlobalContext *arg1); /* static */
s32 EnSob1_FacingShopkeeperDialogResult(Actor *arg0, GlobalContext *arg1); /* static */
void EnSob1_GetCutscenes(EnSob1 *arg0, s16);        /* static */
s16 EnSob1_GetGoodbye(Actor *arg0, Actor *);        /* static */
s32 EnSob1_GetObjIndices(EnSob1 *arg0, GlobalContext *arg1, s16 *arg2); /* static */
s16 EnSob1_GetTalkOption(Actor *arg0, GlobalContext *arg1); /* static */
u16 EnSob1_GetWelcome(EnSob1 *arg0, GlobalContext *arg1); /* static */
void EnSob1_HandleCanBuyItem(GlobalContext *arg0, Actor *arg1); /* static */
s32 EnSob1_HasPlayerSelectedItem(GlobalContext *arg0, Actor *arg1, Input *); /* static */
void EnSob1_ItemPurchased(Actor *arg0, GlobalContext *arg1); /* static */
s32 EnSob1_OverrideLimbDrawBombShopkeeper(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
s32 EnSob1_OverrideLimbDrawZoraShopkeeper(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, s16 *arg4, Actor *arg5); /* static */
void EnSob1_PositionSelectedItem(EnSob1 *arg0);     /* static */
void EnSob1_PostLimbDrawBombShopkeeper(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3); /* static */
s32 EnSob1_SetCursorIndexFromNeutral(EnSob1 *arg0, s32 arg1); /* static */
void EnSob1_SetupAction(Actor *arg0, void (*arg1)(EnSob1 *, GlobalContext *), Actor *); /* static */
void EnSob1_SetupBuyItemWithFanfare(GlobalContext *arg0, Actor *arg1); /* static */
void EnSob1_SetupCanBuy(GlobalContext *arg0, Actor *arg1, u16 arg2); /* static */
void EnSob1_SetupCannotBuy(GlobalContext *arg0, Actor *arg1, u16 arg2); /* static */
void EnSob1_SetupLookToShopkeeperFromShelf(s32 arg0, Actor *arg1); /* static */
void EnSob1_SetupStartShopping(GlobalContext *arg0, Actor *arg1, u8 arg2); /* static */
void EnSob1_SetupWalk(EnSob1 *arg1, GlobalContext *globalCtx); /* static */
void EnSob1_SpawnShopItems(EnSob1 *arg0, GlobalContext *arg1, s16 *arg2); /* static */
void EnSob1_TalkToShopkeeper(GlobalContext *arg0, Actor *arg1); /* static */
s32 EnSob1_TestCancelOption(EnSob1 *arg0, GlobalContext *arg1, Input *arg2); /* static */
s32 EnSob1_TestEndInteraction(Actor *arg0, GlobalContext *arg1, Input *arg2); /* static */
s32 EnSob1_TestItemSelected(GlobalContext *arg0);   /* static */
void EnSob1_UpdateCursorAnim(EnSob1 *arg0);         /* static */
void EnSob1_UpdateCursorPos(GlobalContext *arg0, EnSob1 *arg1); /* static */
void EnSob1_UpdateItemSelectedProperty(EnSob1 *arg0); /* static */
void EnSob1_UpdateJoystickInputState(GlobalContext *arg0, EnSob1 *arg1); /* static */
void EnSob1_UpdateStickDirectionPromptAnim(EnSob1 *arg0); /* static */
void EnSob1_WaitForBlink(EnSob1 *this);             /* static */
extern AnimationHeaderCommon D_060000FC;
extern AnimationHeaderCommon D_0600078C;
extern ? D_06000970;
extern void D_06005458;
extern AnimationHeaderCommon D_06008268;
extern AnimationHeaderCommon D_06009120;
extern FlexSkeletonHeader D_06009220;
extern FlexSkeletonHeader D_0600D208;
extern FlexSkeletonHeader D_06011AC8;
static InitChainEntry D_80A109E8;                   /* unable to generate initializer */
static ? sActorScales;                              /* unable to generate initializer */
static ? sAnimationsBombShopkeeper;                 /* unable to generate initializer */
static ? sBuySuccessTextIds;                        /* unable to generate initializer */
static ? sCannotGetNow2TextIds;                     /* unable to generate initializer */
static ? sCannotGetNowTextIds;                      /* unable to generate initializer */
static ? sFacingShopkeeperTextIds;                  /* unable to generate initializer */
static ? sGoronShopkeeperEyeTextures;               /* unable to generate initializer */
static ? sInitFuncs;                                /* unable to generate initializer */
static ? sNeedEmptyBottleTextIds;                   /* unable to generate initializer */
static ? sNeedRupeesTextIds;                        /* unable to generate initializer */
static ? sNoRoom2TextIds;                           /* unable to generate initializer */
static ? sNoRoomTextIds;                            /* unable to generate initializer */
static ? sObjectIds;                                /* unable to generate initializer */
static ? sPosOffset;                                /* unable to generate initializer */
static ? sPosXZRanges;                              /* unable to generate initializer */
static ? sSelectedItemPositions;                    /* unable to generate initializer */
static ? sShops;                                    /* unable to generate initializer */
static ? sZoraShopkeeperEyeTextures;                /* unable to generate initializer */



void EnSob1_ChangeAnim(SkelAnime *arg0, ? *arg1, s32 arg2) {
    s16 temp_v0;
    void *temp_s0;
    f32 phi_f0;

    temp_s0 = arg1 + (arg2 * 0x10);
    temp_v0 = temp_s0->unkA;
    if ((s32) temp_v0 < 0) {
        phi_f0 = (f32) SkelAnime_GetFrameCount(temp_s0->unk0);
    } else {
        phi_f0 = (f32) temp_v0;
    }
    SkelAnime_ChangeAnim(arg0, (AnimationHeader *) temp_s0->unk0, temp_s0->unk4, (f32) temp_s0->unk8, phi_f0, (u8) (s32) temp_s0->unkC, (f32) temp_s0->unkE);
}

void EnSob1_SetupAction(Actor *arg0, void (*arg1)(EnSob1 *, GlobalContext *)) {
    arg0->unk188 = arg1;
}

s32 EnSob1_TestItemSelected(GlobalContext *arg0) {
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

s16 EnSob1_GetTalkOption(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    u8 temp_v1_2;
    void *temp_v0;

    temp_v1 = arg0->unk3CC;
    temp_v0 = arg1->actorCtx.actorList[2].first;
    if (temp_v1 == 2) {
        if ((gSaveContext.day == 1) && ((s32) gSaveContext.time >= 0x4000)) {
            return 0x648;
        }
        if ((gSaveContext.weekEventReg[33] & 8) != 0) {
            return 0x649;
        }
        return 0x64A;
    }
    if (temp_v1 == 0) {
        temp_v1_2 = temp_v0->unk14B;
        if (temp_v1_2 != 1) {
            if (temp_v1_2 != 2) {
                if (temp_v1_2 == 3) {
                    return 0x12D8;
                }
                return 0x12D7;
            }
            return 0x12DA;
        }
        return 0x12D9;
    }
    if (temp_v1 == 1) {
        if (temp_v0->unk14B != 1) {
            return 0xBC1;
        }
        return 0xBC2;
    }
    if (temp_v1 == 3) {
        if (temp_v0->unk14B != 1) {
            return 0xBC3;
        }
        return 0xBC4;
    }
    return 0;
}

u16 EnSob1_GetWelcome(EnSob1 *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    u32 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_5;
    u8 temp_v1_6;
    u8 temp_v1_7;
    u8 temp_v1_8;
    u8 temp_v1_9;
    void *temp_v1;

    temp_v0 = arg0->shopType;
    temp_v1 = arg1->actorCtx.actorList[2].first;
    if (temp_v0 == 2) {
        temp_v0_2 = Player_GetMask(arg1);
        switch (temp_v0_2) {
        case 0:
        case 4:
        case 9:
            return 0x644U;
        case 22:
        case 23:
        case 24:
            return 0x64BU;
        case 1:
        case 3:
        case 5:
        case 7:
        case 11:
        case 13:
        case 14:
        case 17:
        case 19:
            return 0x685U;
        case 6:
        case 8:
        case 12:
        case 15:
            return 0x686U;
        case 10:
            return 0x687U;
        case 16:
            return 0x688U;
        case 18:
            return 0x689U;
        case 2:
            return 0x68AU;
        }
    } else {
        if (temp_v0 == 0) {
            temp_v0_3 = temp_v1->unk14B;
            if (temp_v0_3 != 1) {
                if (temp_v0_3 != 2) {
                    if (temp_v0_3 != 3) {
                        if (temp_v0_3 == 4) {
                            temp_v1_2 = gSaveContext.weekEventReg[57];
                            if ((temp_v1_2 & 0x10) != 0) {
                                return 0x12CFU;
                            }
                            gSaveContext.weekEventReg[57] = temp_v1_2 | 0x10;
                            return 0x12CEU;
                        }
                        return 0x12CEU;
                    }
                    temp_v1_3 = gSaveContext.weekEventReg[57];
                    if ((temp_v1_3 & 0x20) != 0) {
                        return 0x12D1U;
                    }
                    gSaveContext.weekEventReg[57] = temp_v1_3 | 0x20;
                    return 0x12D0U;
                }
                temp_v1_4 = gSaveContext.weekEventReg[57];
                if ((temp_v1_4 & 0x80) != 0) {
                    return 0x12D5U;
                }
                gSaveContext.weekEventReg[57] = temp_v1_4 | 0x80;
                return 0x12D4U;
            }
            temp_v1_5 = gSaveContext.weekEventReg[57];
            if ((temp_v1_5 & 0x40) != 0) {
                return 0x12D3U;
            }
            gSaveContext.weekEventReg[57] = temp_v1_5 | 0x40;
            return 0x12D2U;
        }
        if (temp_v0 == 1) {
            if (temp_v1->unk14B != 1) {
                temp_v1_6 = gSaveContext.weekEventReg[58];
                if ((temp_v1_6 & 4) != 0) {
                    return 0xBB9U;
                }
                gSaveContext.weekEventReg[58] = temp_v1_6 | 4;
                return 0xBB8U;
            }
            temp_v1_7 = gSaveContext.weekEventReg[58];
            if ((temp_v1_7 & 8) != 0) {
                return 0xBBBU;
            }
            gSaveContext.weekEventReg[58] = temp_v1_7 | 8;
            return 0xBBAU;
        }
        if (temp_v0 == 3) {
            if (temp_v1->unk14B != 1) {
                temp_v1_8 = gSaveContext.weekEventReg[58];
                if ((temp_v1_8 & 0x10) != 0) {
                    return 0xBBDU;
                }
                gSaveContext.weekEventReg[58] = temp_v1_8 | 0x10;
                return 0xBBCU;
            }
            temp_v1_9 = gSaveContext.weekEventReg[58];
            if ((temp_v1_9 & 0x20) != 0) {
                return 0xBBFU;
            }
            gSaveContext.weekEventReg[58] = temp_v1_9 | 0x20;
            return 0xBBEU;
        }
    default:
        return 0U;
    }
}

s16 EnSob1_GetGoodbye(Actor *arg0) {
    s32 temp_v0;

    if (arg0->unk3CC == 2) {
        temp_v0 = gSaveContext.day;
        if (temp_v0 == 1) {
            return 0x64C;
        }
        if (temp_v0 == 2) {
            return 0x64D;
        }
        if (gSaveContext.isNight == 0) {
            return 0x64E;
        }
        return 0x64F;
    }
    return 0x64C;
}

void EnSob1_EndInteractionBombShop(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;
    s16 temp_v0;
    u16 temp_a1;

    temp_a2 = arg0;
    temp_a2->unk321 = 0;
    temp_a2->unk358 = 0;
    temp_a2->unk390 = 0;
    arg0 = temp_a2;
    temp_v0 = EnSob1_GetGoodbye(temp_a2, temp_a2);
    temp_a1 = temp_v0 & 0xFFFF;
    arg0->unk3B8 = temp_v0;
    func_801518B0(arg1, temp_a1, arg0);
    EnSob1_SetupAction(arg0, EnSob1_EndingInteraction);
}

void EnSob1_SpawnShopItems(EnSob1 *arg0, GlobalContext *arg1, s16 *arg2) {
    s16 temp_v0;
    s32 temp_s2;
    s16 *phi_s0;
    EnSob1 *phi_s1;
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
    } while (temp_s2 != 0xC);
}

s32 EnSob1_GetObjIndices(EnSob1 *arg0, GlobalContext *arg1, s16 *arg2) {
    s32 sp1C;
    s16 temp_a1;
    s16 temp_t6;

    temp_t6 = arg2->unk2;
    sp1C = (s32) temp_t6;
    if (temp_t6 != 0x283) {
        arg0 = arg0;
        arg0->objIndices[1] = Object_GetIndex(arg1 + 0x17D88, sp1E);
        if ((s32) arg0->objIndices[1] < 0) {
            return 0;
        }
        goto block_4;
    }
    arg0->objIndices[1] = -1;
block_4:
    temp_a1 = arg2->unk4;
    if (temp_a1 != 0x283) {
        arg0 = arg0;
        arg0->objIndices[2] = Object_GetIndex(arg1 + 0x17D88, temp_a1);
        if ((s32) arg0->objIndices[2] < 0) {
            return 0;
        }
        goto block_8;
    }
    arg0->objIndices[2] = -1;
block_8:
    return 1;
}

void EnSob1_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnSob1 *this = (EnSob1 *) thisx;
    s16 *sp24;
    s16 *temp_a2;
    s32 temp_v0;

    temp_v0 = this->actor.params & 0x1F;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                Actor_MarkForDeath(&this->actor);
                return;
            }
            this->shopType = 2;
            goto block_10;
        }
        if ((gSaveContext.weekEventReg[33] & 0x80) != 0) {
            this->shopType = 3;
        } else {
            this->shopType = 1;
        }
        goto block_10;
    }
    this->shopType = 0;
block_10:
    temp_a2 = (this->shopType * 6) + &sObjectIds;
    sp24 = temp_a2;
    this->objIndices[0] = Object_GetIndex(&globalCtx->objectCtx, *temp_a2);
    if ((s32) this->objIndices[0] < 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    if (EnSob1_GetObjIndices(this, globalCtx, temp_a2) == 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    Actor_ProcessInitChain(&this->actor, &D_80A109E8);
    EnSob1_SetupAction(&this->actor, EnSob1_InitShop);
}

void EnSob1_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnSob1 *this = (EnSob1 *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnSob1_UpdateCursorPos(GlobalContext *arg0, EnSob1 *arg1) {
    s16 sp2E;
    s16 sp2C;

    func_800B8898(arg0, (arg1 + (arg1->cursorIdx * 4))->unk2EC, &sp2E, &sp2C);
    arg1->cursorPos.x = (f32) sp2E + 0.0f;
    arg1->cursorPos.y = (f32) sp2C + 17.0f;
    arg1->cursorPos.z = 1.2f;
}

void EnSob1_EndInteraction(GlobalContext *arg0, Actor *arg1) {
    void *sp24;

    sp24 = arg0->actorCtx.actorList[2].first;
    if (arg1->unk39E == 2) {
        ActorCutscene_Stop(arg1->unk3A0);
        arg1->unk39E = 0;
    }
    func_800B84D0(arg1, arg0);
    arg0->msgCtx.unk11F22 = 0x43;
    arg0->msgCtx.unk12023 = 4;
    Interface_ChangeAlpha(0x32U);
    arg1->unk321 = 0;
    arg1->unk358 = 0;
    arg1->unk390 = 0;
    sp24->unkA70 = (s32) (sp24->unkA70 & 0xDFFFFFFF);
    arg0->interfaceCtx.unk_222 = 0;
    arg0->interfaceCtx.unk_224 = 0;
    EnSob1_SetupAction(arg1, EnSob1_Idle);
}

s32 EnSob1_TestEndInteraction(Actor *arg0, GlobalContext *arg1, Input *arg2) {
    s32 phi_v0;

    phi_v0 = 0;
    if (~(arg2->press.button | ~0x4000) == 0) {
        if (arg0->unk3CC == 2) {
            EnSob1_EndInteractionBombShop(arg0, arg1, arg0);
            return 1;
        }
        EnSob1_EndInteraction(arg1, arg0, arg0);
        phi_v0 = 1;
        // Duplicate return node #4. Try simplifying control flow for better match
        return phi_v0;
    }
    return phi_v0;
}

s32 EnSob1_TestCancelOption(EnSob1 *arg0, GlobalContext *arg1, Input *arg2) {
    s32 phi_v0;

    phi_v0 = 0;
    if (~(arg2->press.button | ~0x4000) == 0) {
        arg0->actionFunc = arg0->tmpActionFunc;
        func_80151938(arg1, (arg0 + (arg0->cursorIdx * 4))->unk2EC->unk116);
        phi_v0 = 1;
    }
    return phi_v0;
}

void EnSob1_SetupStartShopping(GlobalContext *arg0, Actor *arg1, u8 arg2) {
    func_8011552C(arg0, 0x10);
    if (arg2 == 0) {
        EnSob1_SetupAction(arg1, EnSob1_Hello, arg1);
        return;
    }
    EnSob1_StartShopping(arg0, (EnSob1 *) arg1);
}

void EnSob1_StartShopping(GlobalContext *globalCtx, EnSob1 *this) {
    EnSob1 *self = (EnSob1 *) globalCtx;
    EnSob1_SetupAction(&this->actor, EnSob1_FaceShopkeeper);
    func_80151938((GlobalContext *) self, *(&sFacingShopkeeperTextIds + (this->shopType * 2)));
    func_8011552C((GlobalContext *) self, 6);
    this->stickLeftPrompt.isEnabled = 0;
    this->stickRightPrompt.isEnabled = 1;
}

void EnSob1_TalkToShopkeeper(GlobalContext *arg0, Actor *arg1) {
    s16 temp_v0;

    EnSob1_SetupAction(arg1, EnSob1_TalkingToShopkeeper);
    temp_v0 = EnSob1_GetTalkOption(arg1, arg0);
    arg1->unk3B6 = temp_v0;
    func_80151938(arg0, temp_v0 & 0xFFFF);
    func_8011552C(arg0, 6);
    arg1->unk358 = 0;
    arg1->unk390 = 0;
}

void EnSob1_SetupLookToShopkeeperFromShelf(s32 arg0, Actor *arg1) {
    play_sound(0x4809U);
    arg1->unk321 = 0;
    EnSob1_SetupAction(arg1, EnSob1_LookToShopkeeperFromShelf);
}

void EnSob1_EndingInteraction(EnSob1 *this, GlobalContext *globalCtx) {
    EnSob1 *self = (EnSob1 *) this;
    if ((func_80152498(&globalCtx->msgCtx) == 6) && (func_80147624(globalCtx) != 0)) {
        EnSob1_EndInteraction(globalCtx, &self->actor);
    }
}

void EnSob1_SetupWalk(EnSob1 *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    void *temp_v0;

    temp_v0 = arg1->unk1CCC;
    temp_f0 = temp_v0->unk24;
    if ((temp_f0 >= 0.0f) && (temp_f0 <= 390.0f)) {
        temp_f0_2 = temp_v0->unk2C;
        if ((temp_f0_2 >= 72.0f) && (temp_f0_2 <= 365.0f)) {
            EnSob1_SetupAction((Actor *) EnSob1_Walk);
        }
    }
}

void EnSob1_Idle(EnSob1 *this, GlobalContext *globalCtx) {
    EnSob1 *self = (EnSob1 *) this;
    Actor *sp24;
    f32 temp_f0;
    f32 temp_f0_2;
    u16 temp_v0;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    self->headRotTarget = self->actor.yawTowardsPlayer - self->actor.shape.rot.y;
    if (func_800B84D0(&self->actor, globalCtx) != 0) {
        if (self->cutsceneState == 0) {
            if (ActorCutscene_GetCurrentIndex() == 0x7C) {
                ActorCutscene_Stop(0x7C);
            }
            self->cutscene = self->lookFowardCutscene;
            ActorCutscene_SetIntentToPlay(self->cutscene);
            self->cutsceneState = 1;
        }
        sp24->unkA70 = (s32) (sp24->unkA70 | 0x20000000);
        temp_v0 = EnSob1_GetWelcome(self, globalCtx);
        self->welcomeTextId = temp_v0;
        func_801518B0(globalCtx, temp_v0 & 0xFFFF, &self->actor);
        if ((self->actor.params & 0x1F) == 2) {
            self->headRotTarget = -0x2000;
        }
        EnSob1_SetupStartShopping(globalCtx, &self->actor, 0U);
        return;
    }
    temp_f0 = sp24->world.pos.x;
    if ((self->posXZRange.xMin <= temp_f0) && (temp_f0 <= self->posXZRange.xMax)) {
        temp_f0_2 = sp24->world.pos.z;
        if ((self->posXZRange.zMin <= temp_f0_2) && (temp_f0_2 <= self->posXZRange.zMax)) {
            func_800B8614(&self->actor, globalCtx, 400.0f);
        }
    }
    if (self->wasTalkedToWhileWalking == 1) {
        self->wasTalkedToWhileWalking = 0;
        EnSob1_SetupStartShopping(globalCtx, &self->actor, 0U);
    }
}

void EnSob1_UpdateJoystickInputState(GlobalContext *arg0, EnSob1 *arg1) {
    s32 temp_a2;
    s32 temp_t1;
    s32 temp_t7;
    s32 temp_v0_2;
    s8 temp_v0;
    s8 temp_v1;

    temp_a2 = arg1->stickAccumX;
    temp_v0 = arg0->state.input[0].rel.stick_x;
    temp_v1 = arg0->state.input[0].rel.stick_y;
    if (temp_a2 == 0) {
        if (((s32) temp_v0 >= 0x1F) || ((s32) temp_v0 < -0x1E)) {
            arg1->stickAccumX = (s32) temp_v0;
        }
    } else if (((s32) temp_v0 < 0x1F) && ((s32) temp_v0 >= -0x1E)) {
        arg1->stickAccumX = 0;
    } else {
        temp_t7 = temp_a2 + temp_v0;
        if ((temp_a2 * temp_v0) < 0) {
            arg1->stickAccumX = (s32) temp_v0;
        } else {
            arg1->stickAccumX = temp_t7;
            if (temp_t7 >= 0x7D1) {
                arg1->stickAccumX = 0x7D0;
            } else if (temp_t7 < -0x7D0) {
                arg1->stickAccumX = -0x7D0;
            }
        }
    }
    temp_v0_2 = arg1->stickAccumY;
    if (temp_v0_2 == 0) {
        if (((s32) temp_v1 >= 0x1F) || ((s32) temp_v1 < -0x1E)) {
            arg1->stickAccumY = (s32) temp_v1;
            return;
        }
        // Duplicate return node #26. Try simplifying control flow for better match
        return;
    }
    if (((s32) temp_v1 < 0x1F) && ((s32) temp_v1 >= -0x1E)) {
        arg1->stickAccumY = 0;
        return;
    }
    temp_t1 = temp_v0_2 + temp_v1;
    if ((temp_v0_2 * temp_v1) < 0) {
        arg1->stickAccumY = (s32) temp_v1;
        return;
    }
    arg1->stickAccumY = temp_t1;
    if (temp_t1 >= 0x7D1) {
        arg1->stickAccumY = 0x7D0;
        return;
    }
    if (temp_t1 < -0x7D0) {
        arg1->stickAccumY = -0x7D0;
    }
}

s32 EnSob1_SetCursorIndexFromNeutral(EnSob1 *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg1 & 0xFF;
    if ((arg0 + (temp_a1 * 4))->unk2EC != 0) {
        return temp_a1;
    }
    return 0xFF;
}

void EnSob1_Hello(EnSob1 *this, GlobalContext *globalCtx) {
    EnSob1 *self = (EnSob1 *) this;
    u8 sp27;

    sp27 = func_80152498(&globalCtx->msgCtx);
    if (self->cutsceneState == 1) {
        if (ActorCutscene_GetCanPlayNext(self->cutscene) != 0) {
            ActorCutscene_StartAndSetFlag(self->cutscene, &self->actor);
            self->cutsceneState = 2;
        } else {
            ActorCutscene_SetIntentToPlay(self->cutscene);
        }
    }
    if ((sp27 == 5) && (func_80147624(globalCtx) != 0) && (EnSob1_TestEndInteraction(&self->actor, globalCtx, globalCtx->state.input) == 0)) {
        if (self->welcomeTextId == 0x68A) {
            EnSob1_EndInteraction(globalCtx, &self->actor);
            return;
        }
        EnSob1_StartShopping(globalCtx, self);
        // Duplicate return node #10. Try simplifying control flow for better match
    }
}

s32 EnSob1_FacingShopkeeperDialogResult(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    temp_v0 = arg1->msgCtx.choiceIndex;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            return 0;
        }
        arg1 = arg1;
        arg0 = arg0;
        func_8019F230();
        if (arg0->unk3CC == 2) {
            EnSob1_EndInteractionBombShop(arg0, arg1, (Actor *) arg1, arg0);
            return 1;
        }
        EnSob1_EndInteraction(arg1, arg0, (Actor *) arg1, arg0);
        return 1;
    }
    arg1 = arg1;
    arg0 = arg0;
    func_8019F208();
    EnSob1_TalkToShopkeeper(arg1, arg0);
    return 1;
}

void EnSob1_FaceShopkeeper(EnSob1 *this, GlobalContext *globalCtx) {
    EnSob1 *self = (EnSob1 *) this;
    u8 sp27;
    s32 temp_v0;

    sp27 = func_80152498(&globalCtx->msgCtx);
    if (self->cutsceneState == 1) {
        if (ActorCutscene_GetCanPlayNext(self->cutscene) != 0) {
            ActorCutscene_StartAndSetFlag(self->cutscene, &self->actor);
            self->cutsceneState = 2;
        } else {
            ActorCutscene_SetIntentToPlay(self->cutscene);
        }
    }
    if (self->cutsceneState == 0) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        self->cutscene = self->lookFowardCutscene;
        ActorCutscene_SetIntentToPlay(self->cutscene);
        self->cutsceneState = 1;
        return;
    }
    if (sp27 == 4) {
        func_8011552C(globalCtx, 6);
        if ((EnSob1_TestEndInteraction(&self->actor, globalCtx, globalCtx->state.input) == 0) && ((func_80147624(globalCtx) == 0) || (EnSob1_FacingShopkeeperDialogResult(&self->actor, globalCtx) == 0)) && (self->stickAccumX > 0)) {
            temp_v0 = EnSob1_SetCursorIndexFromNeutral(self, 2);
            if (temp_v0 != 0xFF) {
                self->cursorIdx = temp_v0 & 0xFF;
                EnSob1_SetupAction(&self->actor, EnSob1_LookToShelf);
                func_8011552C(globalCtx, 6);
                self->stickRightPrompt.isEnabled = 0;
                play_sound(0x4809U);
            }
        }
    }
}

void EnSob1_TalkingToShopkeeper(EnSob1 *this, GlobalContext *globalCtx) {
    EnSob1 *self = (EnSob1 *) this;
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        EnSob1_StartShopping(globalCtx, self);
    }
}

void EnSob1_LookToShopkeeperFromShelf(EnSob1 *this, GlobalContext *globalCtx) {
    EnSob1 *self = (EnSob1 *) this;
    if (self->cutsceneState == 2) {
        ActorCutscene_Stop(self->cutscene);
        self->cutsceneState = 0;
    }
    if (self->cutsceneState == 0) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        self->cutscene = self->lookToShopkeeperCutscene;
        ActorCutscene_SetIntentToPlay(self->cutscene);
        self->cutsceneState = 1;
        return;
    }
    if (self->cutsceneState == 1) {
        if (ActorCutscene_GetCanPlayNext(self->cutscene) != 0) {
            ActorCutscene_StartAndSetFlag(self->cutscene, &self->actor);
            self->cutsceneState = 2;
            EnSob1_StartShopping(globalCtx, self);
            return;
        }
        ActorCutscene_SetIntentToPlay(self->cutscene);
        // Duplicate return node #10. Try simplifying control flow for better match
    }
}

void EnSob1_EndWalk(Actor *arg0, GlobalContext *arg1) {
    f32 sp30;
    s16 sp2E;
    s16 sp2C;

    sp2E = (s16) (s32) (arg0->unk15C / arg0->unk160);
    sp2C = (s16) (SkelAnime_GetFrameCount(&D_06009120) / (s32) (s16) (s32) arg0->unk160);
    Math_SmoothStepToS(arg0 + 0x32, EnSob1_GetXZAngleAndDistanceSqToPoint(arg0->unk1E0, arg0->unk1E4 - 1, arg0 + 0x24, &sp30), 4, 0x3E8, (s16) 1);
    arg0->shape.rot.y = arg0->world.rot.y;
    Math_ApproachF(arg0 + 0x70, 0.5f, 0.2f, 1.0f);
    if (sp30 < 12.0f) {
        arg0->speedXZ = 0.0f;
        if (sp2C == sp2E) {
            EnSob1_ChangeAnim(arg0 + 0x144, &sAnimationsBombShopkeeper, 1);
            EnSob1_SetupAction(arg0, EnSob1_SetupIdle);
        }
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
}

void EnSob1_SetupIdle(EnSob1 *this, GlobalContext *globalCtx) {
    EnSob1 *self = (EnSob1 *) this;
    s16 sp1E;

    sp1E = (s16) (s32) self->skelAnime.animCurrentFrame;
    if (SkelAnime_GetFrameCount(&D_06008268) == sp1E) {
        EnSob1_ChangeAnim(&self->skelAnime, &sAnimationsBombShopkeeper, 2);
        EnSob1_SetupAction(&self->actor, EnSob1_Idle);
    }
    EnSob1_Walking(self, globalCtx);
}

void EnSob1_Walk(EnSob1 *this, GlobalContext *globalCtx) {
    EnSob1 *self = (EnSob1 *) this;
    f32 sp30;
    Path *temp_a0;
    s32 temp_t1;

    if (self->cutsceneState == 1) {
        if (ActorCutscene_GetCanPlayNext(self->cutscene) != 0) {
            ActorCutscene_StartAndSetFlag(self->cutscene, &self->actor);
            self->cutsceneState = 2;
        } else {
            ActorCutscene_SetIntentToPlay(self->cutscene);
        }
    }
    temp_a0 = self->path;
    if (temp_a0 != 0) {
        Math_SmoothStepToS(&self->actor.world.rot.y, EnSob1_GetXZAngleAndDistanceSqToPoint(temp_a0, self->pathPointsIdx, &self->actor.world.pos, &sp30), 4, 0x3E8, (s16) 1);
        self->actor.shape.rot.y = self->actor.world.rot.y;
        self->actor.speedXZ = 2.0f;
        if (sp30 < 25.0f) {
            temp_t1 = self->pathPointsIdx + 1;
            self->pathPointsIdx = temp_t1;
            if ((self->path->count - 1) < temp_t1) {
                self->actor.speedXZ = 0.0f;
                EnSob1_SetupAction(&self->actor, (void (*)(EnSob1 *, GlobalContext *)) EnSob1_EndWalk);
            }
        }
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(&self->actor);
    EnSob1_Walking(self, globalCtx);
}

void EnSob1_Walking(EnSob1 *this, GlobalContext *globalCtx) {
    EnSob1 *self = (EnSob1 *) this;
    Actor *sp24;
    f32 temp_f0;
    f32 temp_f0_2;
    u16 temp_v0;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    if (self->cutsceneState == 1) {
        if (ActorCutscene_GetCanPlayNext(self->cutscene) != 0) {
            ActorCutscene_StartAndSetFlag(self->cutscene, &self->actor);
            self->cutsceneState = 2;
        } else {
            ActorCutscene_SetIntentToPlay(self->cutscene);
        }
    }
    if (func_800B84D0(&self->actor, globalCtx) != 0) {
        if (self->cutsceneState == 0) {
            if (ActorCutscene_GetCurrentIndex() == 0x7C) {
                ActorCutscene_Stop(0x7C);
            }
            self->cutscene = self->lookFowardCutscene;
            ActorCutscene_SetIntentToPlay(self->cutscene);
            self->cutsceneState = 1;
        }
        sp24->unkA70 = (s32) (sp24->unkA70 | 0x20000000);
        temp_v0 = EnSob1_GetWelcome(self, globalCtx);
        self->welcomeTextId = temp_v0;
        func_801518B0(globalCtx, temp_v0 & 0xFFFF, &self->actor);
        self->wasTalkedToWhileWalking = 1;
        return;
    }
    temp_f0 = sp24->world.pos.x;
    if ((self->posXZRange.xMin <= temp_f0) && (temp_f0 <= self->posXZRange.xMax)) {
        temp_f0_2 = sp24->world.pos.z;
        if ((self->posXZRange.zMin <= temp_f0_2) && (temp_f0_2 <= self->posXZRange.zMax)) {
            func_800B8614(&self->actor, globalCtx, 400.0f);
        }
    }
}

void EnSob1_ItemPurchased(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    if (arg0->unk39E == 0) {
        sp24 = temp_v1;
        if (ActorCutscene_GetCanPlayNext(arg0->unk3A0) != 0) {
            sp24 = temp_v1;
            ActorCutscene_StartAndSetFlag(arg0->unk3A0, arg0);
            temp_v1->unkA70 = (s32) (temp_v1->unkA70 | 0x20000000);
            EnSob1_SetupAction(arg0, EnSob1_ContinueShopping);
            arg0->unk39E = 2;
        } else {
            if (ActorCutscene_GetCurrentIndex() == 0x7C) {
                ActorCutscene_Stop(0x7C);
            }
            arg0->unk3A0 = (s16) arg0->unk3A6;
            ActorCutscene_SetIntentToPlay(arg0->unk3A0);
        }
    }
    if (func_800B84D0(arg0, arg1) != 0) {
        func_80151938(arg1, 0x647U);
        return;
    }
    func_800B85E0(arg0, arg1, 400.0f, -1);
}

void EnSob1_LookToShelf(EnSob1 *this, GlobalContext *globalCtx) {
    EnSob1 *self = (EnSob1 *) this;
    if (self->cutsceneState == 2) {
        ActorCutscene_Stop(self->cutscene);
        self->cutsceneState = 0;
    }
    if (self->cutsceneState == 0) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        self->cutscene = self->lookToShelfCutscene;
        ActorCutscene_SetIntentToPlay(self->cutscene);
        self->cutsceneState = 1;
        return;
    }
    if (self->cutsceneState == 1) {
        if (ActorCutscene_GetCanPlayNext(self->cutscene) != 0) {
            ActorCutscene_StartAndSetFlag(self->cutscene, &self->actor);
            self->cutsceneState = 2;
            EnSob1_UpdateCursorPos(globalCtx, self);
            EnSob1_SetupAction(&self->actor, EnSob1_BrowseShelf);
            func_80151938(globalCtx, self->items[self->cursorIdx]->actor.textId);
            return;
        }
        ActorCutscene_SetIntentToPlay(self->cutscene);
        // Duplicate return node #10. Try simplifying control flow for better match
    }
}

void EnSob1_CursorLeftRight(GlobalContext *arg1) {
    u8 sp1F;
    s32 temp_v1;
    u8 temp_v0;
    u8 phi_v0;
    u8 phi_v0_2;
    u8 phi_v0_3;
    GlobalContext *phi_a1;

    temp_v1 = arg1->mainCamera.xzSpeed;
    temp_v0 = arg1->unk322;
    phi_v0_2 = temp_v0;
    phi_a1 = arg1;
    if (temp_v1 < 0) {
        if (temp_v0 != 2) {
            phi_v0 = (temp_v0 + 1) & 0xFF;
        } else {
            sp1F = temp_v0;
            EnSob1_SetupLookToShopkeeperFromShelf();
            phi_v0 = temp_v0;
        }
        phi_v0_3 = phi_v0;
        phi_a1 = arg1;
        if ((arg1 + (phi_v0 * 4))->unk2EC != 0) {
            goto block_10;
        }
    } else if (temp_v1 > 0) {
        if (temp_v0 != 0) {
            phi_v0_2 = (temp_v0 - 1) & 0xFF;
        }
        phi_v0_3 = phi_v0_2;
        if ((arg1 + (phi_v0_2 * 4))->unk2EC != 0) {
block_10:
            phi_a1->unk322 = phi_v0_3;
        }
    }
}

s32 EnSob1_HasPlayerSelectedItem(GlobalContext *arg0, Actor *arg1) {
    void *sp24;

    sp24 = (arg1 + (arg1->unk322 * 4))->unk2EC;
    if (EnSob1_TestEndInteraction(arg1, arg0) != 0) {
        return 1;
    }
    if (EnSob1_TestItemSelected(arg0) != 0) {
        if (sp24->unk1A0 == 0) {
            arg1->unk18C = (s32) arg1->unk188;
            func_80151938(arg0, (arg1 + (arg1->unk322 * 4))->unk2EC->unk198);
            play_sound(0x4808U);
            arg1->unk358 = 0;
            arg1->unk390 = 0;
            arg1->unk321 = 0;
            EnSob1_SetupAction(arg1, EnSob1_SelectItem);
            return 1;
        }
        play_sound(0x4806U);
        return 1;
    }
    return 0;
}

void EnSob1_BrowseShelf(EnSob1 *this, GlobalContext *globalCtx) {
    EnSob1 *self = (EnSob1 *) this;
    u8 sp2F;
    u8 sp27;
    s16 temp_v0;
    u8 temp_v0_2;

    sp2F = func_80152498(&globalCtx->msgCtx);
    sp27 = self->cursorIdx;
    if (EnSob1_ReturnItemToShelf(self) == 0) {
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
    EnSob1_UpdateCursorPos(globalCtx, self);
    if (sp2F == 5) {
        func_8011552C(globalCtx, 6);
        if (EnSob1_HasPlayerSelectedItem(globalCtx, &self->actor, globalCtx->state.input) == 0) {
            EnSob1_CursorLeftRight(globalCtx, self);
            temp_v0_2 = self->cursorIdx;
            if (sp27 != temp_v0_2) {
                func_80151938(globalCtx, self->items[temp_v0_2]->actor.textId);
                play_sound(0x4809U);
            }
        }
    }
}

void EnSob1_SetupBuyItemWithFanfare(GlobalContext *arg0, Actor *arg1) {
    void *sp2C;
    GlobalContext *temp_a1;
    void *temp_v0;

    temp_a1 = arg0;
    temp_v0 = temp_a1->actorCtx.actorList[2].first;
    arg0 = temp_a1;
    sp2C = temp_v0;
    func_800B8A1C(arg1, temp_a1, (arg1 + (arg1->unk322 * 4))->unk2EC->unk19C, 300.0f, 300.0f);
    arg0->msgCtx.unk11F22 = 0x43;
    arg0->msgCtx.unk12023 = 4;
    temp_v0->unkA70 = (s32) (temp_v0->unkA70 & 0xDFFFFFFF);
    Interface_ChangeAlpha(0x32U);
    arg1->unk321 = 0;
    EnSob1_SetupAction(arg1, EnSob1_BuyItemWithFanfare);
}

void EnSob1_SetupCannotBuy(GlobalContext *arg0, Actor *arg1, u16 arg2) {
    func_80151938(arg0, arg2 & 0xFFFF & 0xFFFF);
    EnSob1_SetupAction(arg1, EnSob1_CannotBuy);
}

void EnSob1_SetupCanBuy(GlobalContext *arg0, Actor *arg1, u16 arg2) {
    func_80151938(arg0, arg2 & 0xFFFF & 0xFFFF);
    EnSob1_SetupAction(arg1, EnSob1_CanBuy);
}

void EnSob1_HandleCanBuyItem(GlobalContext *arg0, Actor *arg1) {
    void *sp24;
    s16 temp_v0_2;
    u32 temp_v0;
    void *temp_a1;
    void *temp_a1_2;

    temp_a1 = (arg1 + (arg1->unk322 * 4))->unk2EC;
    sp24 = temp_a1;
    temp_v0 = temp_a1->unk1B4(arg0, temp_a1);
    switch (temp_v0) {
    case 0:
        if (arg1->unk39E == 2) {
            ActorCutscene_Stop(arg1->unk3A0);
            arg1->unk39E = 0;
        }
        func_8019F208();
        temp_a1_2 = (arg1 + (arg1->unk322 * 4))->unk2EC;
        temp_a1_2->unk1BC(arg0, temp_a1_2);
        EnSob1_SetupBuyItemWithFanfare(arg0, arg1);
        arg1->unk321 = 0;
        arg1->unk3AC = 0.0f;
        sp24->unk1A4(arg0, sp24);
        return;
    case 1:
        func_8019F208();
        sp24->unk1B8(arg0, sp24);
        temp_v0_2 = arg1->unk3CC;
        if ((temp_v0_2 == 1) && (sp24->unk1C == 0x20)) {
            EnSob1_SetupCanBuy(arg0, arg1, 0xBD7U);
        } else if ((temp_v0_2 == 0) && (sp24->unk1C == 0x1D)) {
            EnSob1_SetupCanBuy(arg0, arg1, 0x12E7U);
        } else if ((temp_v0_2 == 3) && (sp24->unk1C == 0x23)) {
            EnSob1_SetupCanBuy(arg0, arg1, 0xBD7U);
        } else {
            EnSob1_SetupCanBuy(arg0, arg1, *(&sBuySuccessTextIds + (temp_v0_2 * 2)));
        }
        arg1->unk321 = 0;
        arg1->unk3AC = 0.0f;
        sp24->unk1A4(arg0, sp24);
        return;
    case 2:
        play_sound(0x4806U);
        EnSob1_SetupCannotBuy(arg0, arg1, *(&sNoRoomTextIds + (arg1->unk3CC * 2)));
        return;
    case 3:
        play_sound(0x4806U);
        EnSob1_SetupCannotBuy(arg0, arg1, *(&sNeedEmptyBottleTextIds + (arg1->unk3CC * 2)));
        return;
    case 4:
        play_sound(0x4806U);
        EnSob1_SetupCannotBuy(arg0, arg1, *(&sNeedRupeesTextIds + (arg1->unk3CC * 2)));
        return;
    case 5:
        play_sound(0x4806U);
        EnSob1_SetupCannotBuy(arg0, arg1, *(&sCannotGetNowTextIds + (arg1->unk3CC * 2)));
        return;
    case 6:
        play_sound(0x4806U);
        EnSob1_SetupCannotBuy(arg0, arg1, *(&sCannotGetNow2TextIds + (arg1->unk3CC * 2)));
        return;
    case 7:
        play_sound(0x4806U);
        EnSob1_SetupCannotBuy(arg0, arg1, *(&sNoRoom2TextIds + (arg1->unk3CC * 2)));
        return;
    case 8:
        play_sound(0x4806U);
        EnSob1_SetupCannotBuy(arg0, arg1, 0x658U);
        return;
    case 9:
        play_sound(0x4806U);
        EnSob1_SetupCannotBuy(arg0, arg1, 0x659U);
        // fallthrough
    default:
        return;
    }
}

void EnSob1_SelectItem(EnSob1 *this, GlobalContext *globalCtx) {
    EnSob1 *self = (EnSob1 *) this;
    u8 sp27;
    u8 temp_v0;

    sp27 = func_80152498(&globalCtx->msgCtx);
    if ((EnSob1_TakeItemOffShelf(self) != 0) && (sp27 == 4) && (func_8011552C(globalCtx, 6), (EnSob1_TestCancelOption(self, globalCtx, globalCtx->state.input) == 0)) && (func_80147624(globalCtx) != 0)) {
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
        EnSob1_HandleCanBuyItem(globalCtx, &self->actor);
    }
}

void EnSob1_CannotBuy(EnSob1 *this, GlobalContext *globalCtx) {
    EnSob1 *self = (EnSob1 *) this;
    self = self;
    if (func_80152498(&globalCtx->msgCtx) == 5) {
        self = self;
        if (func_80147624(globalCtx) != 0) {
            self->actionFunc = self->tmpActionFunc;
            func_80151938(globalCtx, self->items[self->cursorIdx]->actor.textId);
        }
    }
}

void EnSob1_CanBuy(EnSob1 *this, GlobalContext *globalCtx) {
    EnSob1 *self = (EnSob1 *) this;
    EnGirlA *temp_a1;

    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        self->shopItemSelectedTween = 0.0f;
        EnSob1_ResetItemPosition(self);
        temp_a1 = self->items[self->cursorIdx];
        temp_a1->restockFunc(globalCtx, temp_a1);
        self->actionFunc = self->tmpActionFunc;
        func_80151938(globalCtx, self->items[self->cursorIdx]->actor.textId);
    }
}

void EnSob1_BuyItemWithFanfare(EnSob1 *this, GlobalContext *globalCtx) {
    EnSob1 *self = (EnSob1 *) this;
    if (Actor_HasParent(&self->actor, globalCtx) != 0) {
        self->actor.parent = NULL;
        EnSob1_SetupAction(&self->actor, EnSob1_SetupItemPurchased);
        return;
    }
    func_800B8A1C(&self->actor, globalCtx, self->items[self->cursorIdx]->getItemId, 300.0f, 300.0f);
}

void EnSob1_SetupItemPurchased(EnSob1 *this, GlobalContext *globalCtx) {
    EnSob1 *self = (EnSob1 *) this;
    if ((func_80152498(&globalCtx->msgCtx) == 6) && (func_80147624(globalCtx) != 0)) {
        globalCtx->msgCtx.unk11F22 = 0x43;
        globalCtx->msgCtx.unk12023 = 4;
        EnSob1_SetupAction(&self->actor, (void (*)(EnSob1 *, GlobalContext *)) EnSob1_ItemPurchased);
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

void EnSob1_ContinueShopping(EnSob1 *this, GlobalContext *globalCtx) {
    EnSob1 *self = (EnSob1 *) this;
    Actor *temp_s2;
    EnGirlA *temp_a1;

    temp_s2 = globalCtx->actorCtx.actorList[2].first;
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        EnSob1_ResetItemPosition(self);
        temp_a1 = self->items[self->cursorIdx];
        temp_a1->restockFunc(globalCtx, temp_a1);
        temp_s2->shape.rot.y += 0x8000;
        temp_s2->unkA70 = (s32) (temp_s2->unkA70 | 0x20000000);
        func_801518B0(globalCtx, self->welcomeTextId, &self->actor);
        EnSob1_SetupStartShopping(globalCtx, &self->actor, 1U);
        func_800B85E0(&self->actor, globalCtx, 200.0f, -1);
    }
}

void EnSob1_PositionSelectedItem(EnSob1 *arg0) {
    f32 sp1C;
    f32 sp0;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    u8 temp_v0;
    void *temp_a1;
    void *temp_t0;
    void *temp_v1;

    temp_t0 = (arg0->shopType * 0xC) + &sSelectedItemPositions;
    sp1C.unk0 = temp_t0->unk0;
    sp1C.unk4 = (s32) temp_t0->unk4;
    sp1C.unk8 = (s32) temp_t0->unk8;
    temp_v0 = arg0->cursorIdx;
    temp_v1 = (arg0->shopType * 0x18) + (temp_v0 * 8) + &sShops;
    temp_f12 = arg0->shopItemSelectedTween;
    temp_f2 = (f32) temp_v1->unk2;
    temp_a1 = (arg0 + (temp_v0 * 4))->unk2EC;
    temp_f16 = (f32) temp_v1->unk4;
    sp0 = (f32) temp_v1->unk6;
    temp_a1->unk24 = (f32) (temp_f2 + ((sp1C - temp_f2) * temp_f12));
    temp_a1->unk28 = (f32) (temp_f16 + ((sp20 - temp_f16) * temp_f12));
    temp_a1->unk2C = (f32) (sp0 + ((sp24 - sp0) * temp_f12));
}

void EnSob1_ResetItemPosition(EnSob1 *this) {
    EnSob1 *self = (EnSob1 *) this;
    self->shopItemSelectedTween = 0.0f;
    EnSob1_PositionSelectedItem();
}

s32 EnSob1_TakeItemOffShelf(EnSob1 *this) {
    EnSob1 *self = (EnSob1 *) this;
    s32 phi_v0;

    Math_ApproachF(&self->shopItemSelectedTween, 1.0f, 1.0f, 0.15f);
    if (self->shopItemSelectedTween >= 0.85f) {
        self->shopItemSelectedTween = 1.0f;
    }
    EnSob1_PositionSelectedItem(self);
    phi_v0 = 0;
    if (self->shopItemSelectedTween == 1.0f) {
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 EnSob1_ReturnItemToShelf(EnSob1 *this) {
    EnSob1 *self = (EnSob1 *) this;
    s32 phi_v0;

    Math_ApproachF(&self->shopItemSelectedTween, 0.0f, 1.0f, 0.15f);
    if (self->shopItemSelectedTween <= 0.15f) {
        self->shopItemSelectedTween = 0.0f;
    }
    EnSob1_PositionSelectedItem(self);
    phi_v0 = 0;
    if (self->shopItemSelectedTween == 0.0f) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void EnSob1_UpdateItemSelectedProperty(EnSob1 *arg0) {
    s32 temp_a2;
    s32 temp_v1;
    void *temp_a1;
    void **phi_v0;
    s32 phi_v1;

    phi_v0 = arg0 + 0x2EC;
    phi_v1 = 0;
    do {
        temp_a1 = *phi_v0;
        if (temp_a1 != 0) {
            temp_a2 = arg0->actionFunc;
            if ((EnSob1_SelectItem != temp_a2) && (EnSob1_CannotBuy != temp_a2) && (arg0->drawCursor == 0)) {
                goto block_8;
            }
            if (phi_v1 == arg0->cursorIdx) {
                temp_a1->unk1AC = 1;
            } else {
block_8:
                temp_a1->unk1AC = 0;
            }
        }
        temp_v1 = phi_v1 + 1;
        phi_v0 += 4;
        phi_v1 = temp_v1;
    } while (temp_v1 != 3);
}

void EnSob1_UpdateCursorAnim(EnSob1 *arg0) {
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

void EnSob1_UpdateStickDirectionPromptAnim(EnSob1 *arg0) {
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

s16 EnSob1_GetXZAngleAndDistanceSqToPoint(Path *path, s32 pointIdx, Vec3f *pos, f32 *distSq) {
    EnSob1 *self = (EnSob1 *) path;
    void *temp_v1;
    f32 phi_f14;
    f32 phi_f12;

    if (self != 0) {
        temp_v1 = (pointIdx * 6) + Lib_SegmentedToVirtual((void *) self->actor.flags);
        phi_f14 = (f32) temp_v1->unk0 - pos->x;
        phi_f12 = (f32) temp_v1->unk4 - pos->z;
    } else {
        phi_f14 = 0.0f;
        phi_f12 = 0.0f;
    }
    *distSq = (phi_f14 * phi_f14) + (phi_f12 * phi_f12);
    return (s16) (s32) (Math_Acot2F(phi_f12, phi_f14) * 10430.378f);
}

void EnSob1_GetCutscenes(EnSob1 *arg0) {
    s16 temp_a0;

    arg0->lookFowardCutscene = (s16) arg0->actor.cutscene;
    temp_a0 = arg0->lookFowardCutscene;
    arg0 = arg0;
    arg0->lookToShelfCutscene = ActorCutscene_GetAdditionalCutscene(temp_a0);
    arg0->lookToShopkeeperCutscene = ActorCutscene_GetAdditionalCutscene(arg0->lookToShelfCutscene);
}

void EnSob1_WaitForBlink(EnSob1 *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->blinkTimer - 1;
    if (temp_v0 != 0) {
        arg0->blinkTimer = temp_v0;
        return;
    }
    arg0->blinkFunc = EnSob1_Blink;
}

void EnSob1_Blink(EnSob1 *this) {
    EnSob1 *self = (EnSob1 *) this;
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
        self->blinkFunc = EnSob1_WaitForBlink;
        self->blinkTimer = (s32) temp_f6 + 0x14;
        return;
    }
    self->eyeTexIndex = temp_v0_2;
    self->blinkTimer = 1;
}

void EnSob1_ChangeObject(EnSob1 *arg0, GlobalContext *arg1) {
    *(gSegments + 0x18) = (arg1 + (arg0->objIndices[2] * 0x44))->unk17D98 + 0x80000000;
}

s32 EnSob1_AreObjectsLoaded(EnSob1 *arg0, GlobalContext *arg1) {
    ObjectContext *sp1C;
    ObjectContext *temp_a0;
    s8 temp_a1;
    s8 temp_a1_2;

    temp_a0 = arg1 + 0x17D88;
    sp1C = temp_a0;
    if (Object_IsLoaded(temp_a0, (s32) arg0->objIndices[0]) != 0) {
        temp_a1 = arg0->objIndices[1];
        if (((s32) temp_a1 >= 0) && (Object_IsLoaded(sp1C, (s32) temp_a1) == 0)) {
            goto block_8;
        }
        temp_a1_2 = arg0->objIndices[2];
        if (((s32) temp_a1_2 >= 0) && (Object_IsLoaded(sp1C, (s32) temp_a1_2) == 0)) {
            goto block_8;
        }
        return 1;
    }
block_8:
    return 0;
}

void EnSob1_InitZoraShopkeeper(EnSob1 *this, GlobalContext *globalCtx) {
    EnSob1 *self = (EnSob1 *) this;
    SkelAnime *sp30;
    SkelAnime *temp_a1;

    temp_a1 = &self->skelAnime;
    sp30 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_0600D208, NULL, self->limbDrawTable, self->transitionDrawTable, 0x14);
    *(gSegments + 0x18) = (u32) (globalCtx->objectCtx.status[self->objIndices[2]].segment + 0x80000000);
    SkelAnime_ChangeAnim(sp30, (AnimationHeader *) &D_0600078C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_0600078C), (u8) 0, 0.0f);
    self->actor.draw = EnSob1_DrawZoraShopkeeper;
    self->changeObjectFunc = EnSob1_ChangeObject;
}

void EnSob1_InitGoronShopkeeper(EnSob1 *this, GlobalContext *globalCtx) {
    EnSob1 *self = (EnSob1 *) this;
    SkelAnime *sp30;
    SkelAnime *temp_a1;

    temp_a1 = &self->skelAnime;
    sp30 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06011AC8, NULL, self->limbDrawTable, self->transitionDrawTable, 0x12);
    *(gSegments + 0x18) = (u32) (globalCtx->objectCtx.status[self->objIndices[2]].segment + 0x80000000);
    SkelAnime_ChangeAnim(sp30, (AnimationHeader *) &D_060000FC, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_060000FC), (u8) 0, 0.0f);
    self->actor.draw = EnSob1_DrawGoronShopkeeper;
    self->changeObjectFunc = EnSob1_ChangeObject;
}

void EnSob1_InitBombShopkeeper(EnSob1 *this, GlobalContext *globalCtx) {
    EnSob1 *self = (EnSob1 *) this;
    SkelAnime_InitSV(globalCtx, &self->skelAnime, &D_06009220, (AnimationHeader *) &D_06009120, self->limbDrawTable, self->transitionDrawTable, 0x10);
    self->actor.draw = EnSob1_DrawBombShopkeeper;
    self->changeObjectFunc = NULL;
    self->skelAnime.animPlaybackSpeed = 2.0f;
}

void EnSob1_InitShop(EnSob1 *this, GlobalContext *globalCtx) {
    EnSob1 *self = (EnSob1 *) this;
    s16 *sp24;
    s16 *temp_a0;
    s16 temp_v1;
    void *temp_t4;
    void *temp_v0;

    if (EnSob1_AreObjectsLoaded(self, globalCtx) != 0) {
        self->actor.flags &= -0x11;
        self->actor.objBankIndex = self->objIndices[0];
        Actor_SetObjectSegment(globalCtx, &self->actor);
        temp_v1 = self->shopType;
        temp_v0 = (temp_v1 * 0xC) + &sPosOffset;
        self->actor.world.pos.x += temp_v0->unk0;
        self->actor.world.pos.y += temp_v0->unk4;
        temp_a0 = (temp_v1 * 0x18) + &sShops;
        self->actor.world.pos.z += temp_v0->unk8;
        sp24 = temp_a0;
        if ((temp_v1 == 2) && ((gSaveContext.weekEventReg[33] & 8) != 0)) {
            *temp_a0 = 0x18;
        }
        self->cutsceneState = 0;
        EnSob1_GetCutscenes(self, 0x18);
        self->cutscene = self->lookFowardCutscene;
        ActorShape_Init(&self->actor.shape, 0.0f, func_800B3FC0, 20.0f);
        *(&sInitFuncs + (self->shopType * 4))(self, globalCtx);
        self->actor.colChkInfo.mass = 0xFF;
        self->actor.colChkInfo.cylRadius = 0x32;
        self->wasTalkedToWhileWalking = 0;
        self->pathPointsIdx = 0;
        if (self->shopType == 2) {
            self->path = func_8013D648(globalCtx, (s16) ((s32) (self->actor.params & 0x3E0) >> 5), 0x1F);
        }
        if (self->shopType == 2) {
            EnSob1_SetupAction(&self->actor, EnSob1_SetupWalk);
        } else {
            EnSob1_SetupAction(&self->actor, EnSob1_Idle);
        }
        self->stickAccumY = 0;
        self->stickAccumX = 0;
        self->cursorIdx = 0;
        self->cursorPos.x = 100.0f;
        self->cursorPos.y = 100.0f;
        self->cursorColor.r = 0;
        self->cursorColor.g = 0x50;
        self->cursorColor.b = 0xFF;
        self->cursorColor.a = 0xFF;
        self->cursorAnimState = 0;
        self->drawCursor = 0;
        self->stickLeftPrompt.stickColor.r = 0xC8;
        self->stickLeftPrompt.stickColor.g = 0xC8;
        self->stickLeftPrompt.stickColor.b = 0xC8;
        self->stickLeftPrompt.stickColor.a = 0xB4;
        self->stickLeftPrompt.arrowColor.r = 0xFF;
        self->stickLeftPrompt.arrowColor.g = 0xFF;
        self->stickLeftPrompt.arrowColor.b = 0;
        self->stickLeftPrompt.arrowColor.a = 0xC8;
        self->stickLeftPrompt.isEnabled = 0;
        self->stickRightPrompt.stickColor.r = 0xC8;
        self->stickRightPrompt.stickColor.g = 0xC8;
        self->stickRightPrompt.stickColor.b = 0xC8;
        self->stickRightPrompt.stickColor.a = 0xB4;
        self->stickRightPrompt.arrowColor.r = 0xFF;
        self->stickRightPrompt.arrowColor.g = 0;
        self->stickRightPrompt.arrowColor.b = 0;
        self->stickRightPrompt.arrowColor.a = 0xC8;
        self->stickRightPrompt.isEnabled = 0;
        self->arrowAnimState = 0;
        self->stickAnimState = 0;
        temp_t4 = (self->shopType * 0x10) + &sPosXZRanges;
        self->stickLeftPrompt.stickTexY = 95.0f;
        self->stickRightPrompt.stickTexY = 95.0f;
        self->cursorPos.z = 1.2f;
        self->stickLeftPrompt.stickTexX = 49.0f;
        self->stickLeftPrompt.arrowTexY = 91.0f;
        self->stickRightPrompt.arrowTexY = 91.0f;
        self->stickLeftPrompt.texZ = 1.0f;
        self->stickRightPrompt.texZ = 1.0f;
        self->cursorAnimTween = 0.0f;
        self->arrowAnimTween = 0.0f;
        self->stickAnimTween = 0.0f;
        self->shopItemSelectedTween = 0.0f;
        self->actor.gravity = 0.0f;
        self->stickLeftPrompt.arrowTexX = 33.0f;
        self->stickRightPrompt.stickTexX = 274.0f;
        self->stickRightPrompt.arrowTexX = 290.0f;
        self->posXZRange.xMin = temp_t4->unk0;
        self->posXZRange.xMax = temp_t4->unk4;
        self->posXZRange.zMin = temp_t4->unk8;
        self->posXZRange.zMax = temp_t4->unkC;
        Actor_SetScale(&self->actor, *(&sActorScales + (self->shopType * 4)));
        EnSob1_SpawnShopItems(self, globalCtx, sp24);
        self->headRotTarget = 0;
        self->blinkTimer = 0x14;
        self->eyeTexIndex = 0;
        self->blinkFunc = EnSob1_WaitForBlink;
        self->actor.flags &= -2;
        self->headRot = self->headRotTarget;
    }
}

void EnSob1_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnSob1 *this = (EnSob1 *) thisx;
    void (*temp_v0)(EnSob1 *, GlobalContext *);
    void (*temp_v0_2)(EnSob1 *, GlobalContext *);

    temp_v0 = this->actionFunc;
    if (EnSob1_InitShop != temp_v0) {
        this->blinkFunc(this);
        EnSob1_UpdateJoystickInputState(globalCtx, this);
        EnSob1_UpdateItemSelectedProperty(this);
        EnSob1_UpdateStickDirectionPromptAnim(this);
        EnSob1_UpdateCursorAnim(this);
        Math_StepToS(&this->headRot, this->headRotTarget, 0x190);
        this->actionFunc(this, globalCtx);
        Actor_SetHeight(&this->actor, 90.0f);
        temp_v0_2 = this->changeObjectFunc;
        if (temp_v0_2 != 0) {
            temp_v0_2(this, globalCtx);
        }
        SkelAnime_FrameUpdateMatrix(&this->skelAnime);
        return;
    }
    temp_v0(this, globalCtx);
}

void EnSob1_DrawCursor(GraphicsContext **arg0, EnSob1 *arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5) {
    GraphicsContext *sp18;
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
        sp18 = temp_a2;
        func_8012C654(temp_a2);
        temp_v0 = sp18->overlay.p;
        sp18->overlay.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xFA000000;
        temp_v0->words.w1 = (arg1->cursorColor.r << 0x18) | ((arg1->cursorColor.g & 0xFF) << 0x10) | ((arg1->cursorColor.b & 0xFF) << 8) | (arg1->cursorColor.a & 0xFF);
        temp_v0_2 = sp18->overlay.p;
        sp18->overlay.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFD700000;
        temp_v0_2->words.w1 = (u32) &D_0401F740;
        temp_v0_3 = sp18->overlay.p;
        sp18->overlay.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xF5700000;
        temp_v0_3->words.w1 = 0x7050140;
        temp_v0_4 = sp18->overlay.p;
        sp18->overlay.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = 0;
        temp_v0_4->words.w0 = 0xE6000000;
        temp_v0_5 = sp18->overlay.p;
        sp18->overlay.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = 0x703F800;
        temp_v0_5->words.w0 = 0xF3000000;
        temp_v0_6 = sp18->overlay.p;
        sp18->overlay.p = temp_v0_6 + 8;
        temp_v0_6->words.w1 = 0;
        temp_v0_6->words.w0 = 0xE7000000;
        temp_v0_7 = sp18->overlay.p;
        sp18->overlay.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xF5600200;
        temp_v0_7->words.w1 = 0x50140;
        temp_v0_8 = sp18->overlay.p;
        sp18->overlay.p = temp_v0_8 + 8;
        temp_v0_8->words.w0 = 0xF2000000;
        temp_v0_8->words.w1 = 0x3C03C;
        temp_v0_9 = sp18->overlay.p;
        temp_f0 = 16.0f * arg4;
        sp18->overlay.p = temp_v0_9 + 8;
        temp_v0_9->words.w0 = (((s32) ((arg2 + temp_f0) * 4.0f) & 0xFFF) << 0xC) | 0xE4000000 | ((s32) ((arg3 + temp_f0 + -12.0f) * 4.0f) & 0xFFF);
        temp_v0_9->words.w1 = (((s32) ((arg2 - temp_f0) * 4.0f) & 0xFFF) << 0xC) | ((s32) (((arg3 - temp_f0) + -12.0f) * 4.0f) & 0xFFF);
        temp_v0_10 = sp18->overlay.p;
        sp18->overlay.p = temp_v0_10 + 8;
        temp_v0_10->words.w1 = 0;
        temp_v0_10->words.w0 = 0xE1000000;
        temp_v0_11 = sp18->overlay.p;
        sp18->overlay.p = temp_v0_11 + 8;
        temp_a1 = (s32) ((1.0f / arg4) * 1024.0f) & 0xFFFF;
        temp_v0_11->words.w1 = (temp_a1 << 0x10) | temp_a1;
        temp_v0_11->words.w0 = 0xF1000000;
    }
}

void EnSob1_DrawTextRec(GraphicsContext **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8, s32 arg9, f32 argA, f32 argB) {
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

void EnSob1_DrawStickDirectionPrompt(GraphicsContext **arg0, EnSob1 *arg1) {
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
            EnSob1_DrawTextRec(arg0, arg1->stickLeftPrompt.arrowColor.r, arg1->stickLeftPrompt.arrowColor.g, arg1->stickLeftPrompt.arrowColor.b, arg1->stickLeftPrompt.arrowColor.a, arg1->stickLeftPrompt.arrowTexX, arg1->stickLeftPrompt.arrowTexY, arg1->stickLeftPrompt.texZ, 0, 0, -1.0f, 1.0f);
        }
        if (sp48 != 0) {
            sp4C = arg1->stickLeftPrompt.isEnabled;
            sp44 = *arg0;
            EnSob1_DrawTextRec(arg0, arg1->stickRightPrompt.arrowColor.r, arg1->stickRightPrompt.arrowColor.g, arg1->stickRightPrompt.arrowColor.b, arg1->stickRightPrompt.arrowColor.a, arg1->stickRightPrompt.arrowTexX, arg1->stickRightPrompt.arrowTexY, arg1->stickRightPrompt.texZ, 0, 0, 1.0f, 1.0f);
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
            EnSob1_DrawTextRec(arg0, arg1->stickLeftPrompt.stickColor.r, arg1->stickLeftPrompt.stickColor.g, arg1->stickLeftPrompt.stickColor.b, arg1->stickLeftPrompt.stickColor.a, arg1->stickLeftPrompt.stickTexX, arg1->stickLeftPrompt.stickTexY, arg1->stickLeftPrompt.texZ, 0, 0, -1.0f, 1.0f);
        }
        if (sp48 != 0) {
            EnSob1_DrawTextRec(arg0, arg1->stickRightPrompt.stickColor.r, arg1->stickRightPrompt.stickColor.g, arg1->stickRightPrompt.stickColor.b, arg1->stickRightPrompt.stickColor.a, arg1->stickRightPrompt.stickTexX, arg1->stickRightPrompt.stickTexY, arg1->stickRightPrompt.texZ, 0, 0, 1.0f, 1.0f);
        }
    }
}

s32 EnSob1_OverrideLimbDrawZoraShopkeeper(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, s16 *arg4, Actor *arg5) {
    if (arg1 == 0xF) {
        *arg4 += arg5->unk1EE;
    }
    return 0;
}

s32 EnSob1_OverrideLimbDrawBombShopkeeper(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg1 == 0xF) {
        SysMatrix_InsertXRotation_s(arg5->unk1EE, 1);
    }
    return 0;
}

void EnSob1_PostLimbDrawBombShopkeeper(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3) {
    void *temp_a0;
    void *temp_v0;

    temp_v0 = *arg0;
    if (arg1 == 0xB) {
        temp_a0 = temp_v0->unk2B0;
        temp_v0->unk2B0 = (void *) (temp_a0 + 8);
        temp_a0->unk0 = 0xDE000000;
        temp_a0->unk4 = &D_06000970;
    }
}

void *EnSob1_EndDList(GraphicsContext *arg0) {
    void *temp_v1;

    temp_v1 = arg0->polyOpa.d - 0x10;
    arg0->polyOpa.d = temp_v1;
    temp_v1->words.w0 = 0xDF000000;
    temp_v1->words.w1 = 0;
    return temp_v1;
}

void EnSob1_DrawZoraShopkeeper(Actor *thisx, GlobalContext *globalCtx) {
    EnSob1 *this = (EnSob1 *) thisx;
    GraphicsContext *sp40;
    Gfx *sp34;
    Gfx *sp30;
    EnGirlA *temp_t6;
    EnGirlA *temp_t6_2;
    EnSob1 *temp_v0_4;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    s32 temp_v1;
    EnGirlA *phi_t6;
    EnSob1 *phi_v0;
    s32 phi_v1;
    EnGirlA *phi_t6_2;
    EnSob1 *phi_v0_2;

    temp_a0 = globalCtx->state.gfxCtx;
    sp40 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp40->polyOpa.p;
    sp40->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w1 = 0xFF;
    temp_v0->words.w0 = 0xFB000000;
    temp_v0_2 = sp40->polyOpa.p;
    sp40->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060030;
    sp40 = sp40;
    sp34 = temp_v0_2;
    sp34->words.w1 = EnSob1_EndDList(globalCtx->state.gfxCtx);
    temp_v0_3 = sp40->polyOpa.p;
    sp40->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060020;
    sp30 = temp_v0_3;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&sZoraShopkeeperEyeTextures + (this->eyeTexIndex * 4)));
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, (s32 (*)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *)) EnSob1_OverrideLimbDrawZoraShopkeeper, NULL, &this->actor);
    temp_t6 = this->items[0];
    phi_t6 = temp_t6;
    phi_v0 = this;
    phi_v1 = 1;
    phi_t6_2 = temp_t6;
    phi_v0_2 = this;
    if (1 != 3) {
        do {
            phi_t6->actor.scale.x = 0.2f;
            temp_v1 = phi_v1 + 1;
            temp_v0_4 = phi_v0 + 4;
            phi_v0->items[0]->unk5C = 0.2f;
            temp_v0_4->blinkFunc->unk60 = 0.2f;
            temp_t6_2 = temp_v0_4->items[0];
            phi_t6 = temp_t6_2;
            phi_v0 = temp_v0_4;
            phi_v1 = temp_v1;
            phi_t6_2 = temp_t6_2;
            phi_v0_2 = temp_v0_4;
        } while (temp_v1 != 3);
    }
    phi_t6_2->actor.scale.x = 0.2f;
    phi_v0_2->items[0]->unk5C = 0.2f;
    (phi_v0_2 + 4)->unk2E8->unk60 = 0.2f;
    EnSob1_DrawCursor(&globalCtx->state.gfxCtx, this, this->cursorPos.x, this->cursorPos.y, this->cursorPos.z, (u8) (s32) this->drawCursor);
    EnSob1_DrawStickDirectionPrompt(&globalCtx->state.gfxCtx, this);
}

void EnSob1_DrawGoronShopkeeper(Actor *thisx, GlobalContext *globalCtx) {
    EnSob1 *this = (EnSob1 *) thisx;
    GraphicsContext *sp38;
    Gfx *sp30;
    EnGirlA *temp_t1;
    EnGirlA *temp_t1_2;
    EnSob1 *temp_v0_2;
    Gfx *temp_v0;
    GraphicsContext *temp_a0;
    s32 temp_v1;
    EnGirlA *phi_t1;
    EnSob1 *phi_v0;
    s32 phi_v1;
    EnGirlA *phi_t1_2;
    EnSob1 *phi_v0_2;

    temp_a0 = globalCtx->state.gfxCtx;
    sp38 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp38->polyOpa.p;
    sp38->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp30 = temp_v0;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&sGoronShopkeeperEyeTextures + (this->eyeTexIndex * 4)));
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, NULL, NULL, &this->actor);
    temp_t1 = this->items[0];
    phi_t1 = temp_t1;
    phi_v0 = this;
    phi_v1 = 1;
    phi_t1_2 = temp_t1;
    phi_v0_2 = this;
    if (1 != 3) {
        do {
            phi_t1->actor.scale.x = 0.2f;
            temp_v1 = phi_v1 + 1;
            temp_v0_2 = phi_v0 + 4;
            phi_v0->items[0]->unk5C = 0.2f;
            temp_v0_2->blinkFunc->unk60 = 0.2f;
            temp_t1_2 = temp_v0_2->items[0];
            phi_t1 = temp_t1_2;
            phi_v0 = temp_v0_2;
            phi_v1 = temp_v1;
            phi_t1_2 = temp_t1_2;
            phi_v0_2 = temp_v0_2;
        } while (temp_v1 != 3);
    }
    phi_t1_2->actor.scale.x = 0.2f;
    phi_v0_2->items[0]->unk5C = 0.2f;
    (phi_v0_2 + 4)->unk2E8->unk60 = 0.2f;
    EnSob1_DrawCursor(&globalCtx->state.gfxCtx, this, this->cursorPos.x, this->cursorPos.y, this->cursorPos.z, (u8) (s32) this->drawCursor);
    EnSob1_DrawStickDirectionPrompt(&globalCtx->state.gfxCtx, this);
}

void EnSob1_DrawBombShopkeeper(Actor *thisx, GlobalContext *globalCtx) {
    EnSob1 *this = (EnSob1 *) thisx;
    u32 sp5C;
    Gfx *sp4C;
    EnGirlA *temp_t0;
    EnGirlA *temp_t0_2;
    EnSob1 *temp_v0_2;
    Gfx *temp_v0;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    s32 temp_v1;
    EnGirlA *phi_t0;
    EnSob1 *phi_v0;
    s32 phi_v1;
    EnGirlA *phi_t0_2;
    EnSob1 *phi_v0_2;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp4C = temp_v0;
    sp4C->words.w1 = Lib_SegmentedToVirtual(&D_06005458);
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, EnSob1_OverrideLimbDrawBombShopkeeper, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) EnSob1_PostLimbDrawBombShopkeeper, &this->actor);
    temp_t0 = this->items[0];
    phi_t0 = temp_t0;
    phi_v0 = this;
    phi_v1 = 1;
    phi_t0_2 = temp_t0;
    phi_v0_2 = this;
    if (1 != 3) {
        do {
            phi_t0->actor.scale.x = 0.2f;
            temp_v1 = phi_v1 + 1;
            temp_v0_2 = phi_v0 + 4;
            phi_v0->items[0]->unk5C = 0.2f;
            temp_v0_2->blinkFunc->unk60 = 0.2f;
            temp_t0_2 = temp_v0_2->items[0];
            phi_t0 = temp_t0_2;
            phi_v0 = temp_v0_2;
            phi_v1 = temp_v1;
            phi_t0_2 = temp_t0_2;
            phi_v0_2 = temp_v0_2;
        } while (temp_v1 != 3);
    }
    phi_t0_2->actor.scale.x = 0.2f;
    phi_v0_2->items[0]->unk5C = 0.2f;
    (phi_v0_2 + 4)->unk2E8->unk60 = 0.2f;
    EnSob1_DrawCursor(&globalCtx->state.gfxCtx, this, this->cursorPos.x, this->cursorPos.y, this->cursorPos.z, (u8) (s32) this->drawCursor);
    EnSob1_DrawStickDirectionPrompt(&globalCtx->state.gfxCtx, this);
    sp5C = globalCtx->gameplayFrames;
    func_8012C2DC(globalCtx->state.gfxCtx);
    SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
    Matrix_Scale(1.0f, 1.0f, 1.0f, 1);
    temp_v0_3 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDA380003;
    temp_v0_3->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_4 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDB060020;
    temp_v0_4->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, (s32) sp5C * -0x14, 0x20, 0x80);
    temp_v0_5 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xFA008080;
    temp_v0_5->words.w1 = 0xFFFF00FF;
    temp_v0_6 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w1 = 0xFF000000;
    temp_v0_6->words.w0 = 0xFB000000;
}

