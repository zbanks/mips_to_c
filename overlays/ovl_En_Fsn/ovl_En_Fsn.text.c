void EnFsn_Blink(EnFsn *arg0);                      /* static */
void EnFsn_CursorLeftRight(EnFsn *arg0);            /* static */
void EnFsn_DrawCursor(EnFsn *arg0, GraphicsContext **arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5); /* static */
void EnFsn_DrawStickDirectionPrompts(EnFsn *arg0, GraphicsContext **arg1); /* static */
void EnFsn_DrawTextRec(GraphicsContext **arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8, s32 arg9, f32 argA, f32 argB); /* static */
void EnFsn_EndInteraction(Actor *arg0, GlobalContext *arg1); /* static */
s32 EnFsn_FacingShopkeeperDialogResult(Actor *arg0, GlobalContext *arg1); /* static */
void EnFsn_GetCutscenes(EnFsn *arg0);               /* static */
void EnFsn_GetShopItemIds(EnFsn *arg0);             /* static */
s16 EnFsn_GetStolenItemId(u32 arg0, EnFsn *);       /* static */
s16 EnFsn_GetThirdDayItemId(EnFsn *);               /* static */
u16 EnFsn_GetWelcome(GlobalContext *arg0);          /* static */
void EnFsn_HandleCanPlayerBuyItem(Actor *arg0, GlobalContext *arg1); /* static */
void EnFsn_HandleConversationBackroom(Actor *arg0, GlobalContext *arg1, EnFsn *); /* static */
void EnFsn_HandleLookToShopkeeperBuyingCutscene(Actor *arg0); /* static */
void EnFsn_HandleSetupResumeInteraction(Actor *arg0, GlobalContext *arg1); /* static */
s32 EnFsn_HasItemsToSell();                         /* static */
s32 EnFsn_HasPlayerSelectedItem(Actor *arg0, GlobalContext *arg1, Input *); /* static */
void EnFsn_IdleBackroom(Actor *arg0, GlobalContext *arg1); /* static */
void EnFsn_InitShop(EnFsn *arg0, GlobalContext *arg1); /* static */
void EnFsn_LookToShelf(Actor *arg0, GlobalContext *arg1); /* static */
s32 EnFsn_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void EnFsn_PositionSelectedItem(EnFsn *arg0);       /* static */
void EnFsn_PostLimbDraw(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
s32 EnFsn_ReturnItemToShelf(EnFsn *arg0);           /* static */
s32 EnFsn_SetCursorIndexFromNeutral(EnFsn *arg0);   /* static */
void EnFsn_SpawnShopItems(EnFsn *arg0, GlobalContext *arg1); /* static */
s32 EnFsn_TakeItemOffShelf(EnFsn *arg0);            /* static */
s32 EnFsn_TestCancelOption(EnFsn *arg0, GlobalContext *arg1, Input *arg2); /* static */
s32 EnFsn_TestEndInteraction(Actor *arg0, GlobalContext *arg1, Input *arg2); /* static */
s32 EnFsn_TestItemSelected(GlobalContext *arg0);    /* static */
void EnFsn_UpdateCollider(EnFsn *arg0, GlobalContext *arg1); /* static */
void EnFsn_UpdateCursorAnim(EnFsn *arg0);           /* static */
void EnFsn_UpdateCursorPos(Actor *arg0, GlobalContext *arg1); /* static */
void EnFsn_UpdateItemSelectedProperty(EnFsn *arg0); /* static */
void EnFsn_UpdateJoystickInputState(EnFsn *arg0, GlobalContext *arg1); /* static */
void EnFsn_UpdateStickDirectionPromptAnim(EnFsn *arg0); /* static */
extern ? D_0600F180;
extern ? D_0600F218;
extern AnimationHeader D_06012C34;
extern FlexSkeletonHeader D_06013320;
static ColliderCylinderInit D_80AE5BF0 = {
    {0xA, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x12, 0x40, 0, {0, 0, 0}},
};
static ? D_80AE5C40;                                /* unable to generate initializer */
static ActorAnimationEntryS sAnimations = {
    {(AnimationHeader *)0x6012C34, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60131FC, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600C58C, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600C58C, -1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600E3EC, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600F00C, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600CB3C, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600D354, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60138B0, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x601430C, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600B9D8, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600C26C, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600DE34, 1.0f, 0, 0xFFFF, 2, 0},
};
static ? sEyeTextures;                              /* unable to generate initializer */
static ? sShopItemPositions;                        /* unable to generate initializer */



s32 EnFsn_TestItemSelected(GlobalContext *arg0) {
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

u16 EnFsn_GetWelcome(GlobalContext *arg0) {
    u32 temp_v0;

    temp_v0 = Player_GetMask(arg0);
    switch (temp_v0) {
    case 0:
        return 0x29CCU;
    case 24:
        return 0x29FCU;
    case 22:
    case 23:
        return 0x29FDU;
    case 2:
        return 0x2364U;
    default:
        return 0x29FEU;
    }
}

void EnFsn_HandleConversationBackroom(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;
    u16 temp_a3;
    u16 temp_t4;
    u16 temp_t8;
    u16 temp_t8_2;
    u16 temp_v0;
    u16 phi_a3;
    u16 phi_v0;

    temp_a2 = arg0;
    temp_a3 = temp_a2->unk376;
    phi_a3 = temp_a3;
    if ((s32) temp_a3 > 0) {
        switch (temp_a3) {
        case 10720:
            if (gSaveContext.inventory.items[gItemSlots[0x3A]] == 0x3A) {
                temp_a2->unk37C = 0xA1;
                temp_t8 = temp_a2->unk44E | 2;
                temp_a2->unk44E = temp_t8;
                temp_a2->unk44E = (u16) (temp_t8 | 8);
                gSaveContext.weekEventReg[80] |= 0x10;
                temp_a2->unk376 = 0x29F1U;
                phi_a3 = 0x29F1U & 0xFFFF;
            } else {
                temp_a2->unk376 = 0x29E1U;
                phi_a3 = 0x29E1U & 0xFFFF;
            }
            break;
        case 10721:
            temp_a2->unk376 = 0x29E2U;
            phi_a3 = 0x29E2U & 0xFFFF;
            break;
        case 10722:
            temp_t8_2 = temp_a2->unk44E | 2;
            temp_a2->unk44E = temp_t8_2;
            temp_a2->unk44E = (u16) (temp_t8_2 | 4);
            temp_a2->unk37C = 0x80;
            temp_a2->unk376 = 0x29E3U;
            phi_a3 = 0x29E3U & 0xFFFF;
            break;
        case 10723:
            temp_t4 = temp_a2->unk44E | 2;
            temp_a2->unk44E = temp_t4;
            temp_a2->unk44E = (u16) (temp_t4 | 8);
            temp_a2->unk37C = 0xA1;
            gSaveContext.weekEventReg[80] |= 0x10;
            temp_a2->unk376 = 0x29F1U;
            phi_a3 = 0x29F1U & 0xFFFF;
            break;
        case 10737:
            temp_a2->unk376 = 0x29E4U;
            temp_a2->unk44E = (u16) (temp_a2->unk44E | 1);
            phi_a3 = 0x29E4U & 0xFFFF;
            break;
        }
    } else if (temp_a3 == 0) {
        phi_a3 = 0x29E0U & 0xFFFF;
        if ((gSaveContext.weekEventReg[80] & 0x10) == 0) {
            temp_a2->unk376 = 0x29E0U;
        } else {
            temp_a2->unk376 = 0x29E4U;
            temp_a2->unk44E = (u16) (temp_a2->unk44E | 1);
            phi_a3 = 0x29E4U & 0xFFFF;
        }
    }
    arg0 = temp_a2;
    func_801518B0(arg1, phi_a3 & 0xFFFF, temp_a2);
    temp_v0 = arg0->unk44E;
    phi_v0 = temp_v0;
    if ((temp_v0 & 1) != 0) {
        if ((temp_v0 & 8) != 0) {
            arg0->unk44E = (u16) (temp_v0 & 0xFFF7);
            arg0 = arg0;
            func_80151BB4(arg1, 0x22U);
            phi_v0 = arg0->unk44E;
        }
        if ((phi_v0 & 4) != 0) {
            arg0->unk44E = (s16) (phi_v0 & 0xFFFB);
            func_80151BB4(arg1, 0x21U);
        }
        func_80151BB4(arg1, 3U);
    }
}

void EnFsn_HandleSetupResumeInteraction(Actor *arg0, GlobalContext *arg1) {
    if ((func_80152498(arg1 + 0x4908) == 6) && (func_80147624(arg1) != 0) && (arg0->unk368 == 0)) {
        func_800B84D0(arg0, arg1);
        func_800B85E0(arg0, arg1, 400.0f, -1);
        if ((arg0->params & 1) == 0) {
            arg0->textId = 0;
        }
        arg0->unk1D4 = EnFsn_ResumeInteraction;
    }
}

void EnFsn_UpdateCollider(EnFsn *arg0, GlobalContext *arg1) {
    arg0->collider.dim.pos.x = (s16) (s32) arg0->actor.world.pos.x;
    arg0->collider.dim.pos.y = (s16) (s32) arg0->actor.world.pos.y;
    arg0->collider.dim.pos.z = (s16) (s32) arg0->actor.world.pos.z;
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, arg0 + 0x1DC);
}

void EnFsn_HandleLookToShopkeeperBuyingCutscene(Actor *arg0) {
    s16 temp_a0;
    s16 temp_v0;

    temp_v0 = arg0->unk368;
    if ((temp_v0 == 2) && (temp_a0 = arg0->unk36A, (temp_a0 != arg0->unk372)) && (arg0->textId == 0x29CE)) {
        ActorCutscene_Stop(temp_a0);
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        arg0->unk36A = (s16) arg0->unk372;
        ActorCutscene_SetIntentToPlay(arg0->unk36A);
        arg0->unk368 = 1;
        return;
    }
    if (temp_v0 == 1) {
        if (ActorCutscene_GetCanPlayNext(arg0->unk36A) != 0) {
            ActorCutscene_Start(arg0->unk36A, arg0);
            arg0->unk368 = 2;
            return;
        }
        ActorCutscene_SetIntentToPlay(arg0->unk36A);
        // Duplicate return node #10. Try simplifying control flow for better match
    }
}

s32 EnFsn_SetCursorIndexFromNeutral(EnFsn *arg0) {
    if (arg0->itemIds[0] != -1) {
        return 0;
    }
    if (arg0->itemIds[1] != -1) {
        return 1;
    }
    if (arg0->itemIds[2] != -1) {
        return 2;
    }
    return 0xFF;
}

void EnFsn_CursorLeftRight(EnFsn *arg0) {
    u8 sp1F;
    s32 temp_a1;
    s32 temp_v1;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 phi_v0;
    u8 phi_v0_2;
    u8 phi_v0_3;

    temp_v1 = arg0->stickAccumX;
    temp_v0 = arg0->cursorIdx;
    phi_v0 = temp_v0;
    phi_v0_2 = temp_v0;
    phi_v0_3 = temp_v0;
    if (temp_v1 > 0) {
        temp_a1 = arg0->totalSellingItems - 1;
        if (temp_a1 != temp_v0) {
            if (temp_a1 != temp_v0) {
loop_3:
                temp_v0_2 = (phi_v0 + 1) & 0xFF;
                phi_v0 = temp_v0_2;
                phi_v0_3 = temp_v0_2;
                if ((arg0 + (temp_v0_2 * 2))->unk384 != -1) {
                    goto block_19;
                }
                if (temp_a1 == temp_v0_2) {
                    return;
                }
                goto loop_3;
            }
            // Duplicate return node #20. Try simplifying control flow for better match
            return;
        }
        if ((arg0 + (temp_v0 * 2))->unk384 != -1) {
            goto block_19;
        }
        // Duplicate return node #20. Try simplifying control flow for better match
        return;
    }
    if (temp_v1 < 0) {
        if (temp_v0 != 0) {
            if (temp_v0 != 0) {
loop_12:
                temp_v0_3 = (phi_v0_2 - 1) & 0xFF;
                phi_v0_2 = temp_v0_3;
                phi_v0_3 = temp_v0_3;
                if ((arg0 + (temp_v0_3 * 2))->unk384 != -1) {
                    goto block_19;
                }
                if (temp_v0_3 == 0) {
                    arg0 = arg0;
                    play_sound(0x4809U);
                    arg0->drawCursor = 0;
                    arg0->actionFunc = EnFsn_LookToShopkeeperFromShelf;
                    return;
                }
                if (temp_v0_3 == 0) {
                    return;
                }
                goto loop_12;
            }
            // Duplicate return node #20. Try simplifying control flow for better match
            return;
        }
        sp1F = temp_v0;
        arg0 = arg0;
        play_sound(0x4809U);
        arg0->drawCursor = 0;
        arg0->actionFunc = EnFsn_LookToShopkeeperFromShelf;
        phi_v0_3 = temp_v0;
        if ((arg0 + (temp_v0 * 2))->unk384 != -1) {
block_19:
            arg0->cursorIdx = phi_v0_3;
        }
        // Duplicate return node #20. Try simplifying control flow for better match
    }
}

s16 EnFsn_GetThirdDayItemId(void) {
    u8 temp_v0;

    temp_v0 = gSaveContext.weekEventReg[33];
    if (((temp_v0 & 4) == 0) && (((s32) gSaveContext.day % 5) == 3)) {
        if (((temp_v0 & 8) == 0) && ((gSaveContext.weekEventReg[79] & 0x40) == 0)) {
            return 0x15;
        }
        return 0x13;
    }
    return 0;
}

s16 EnFsn_GetStolenItemId(u32 arg0) {
    if (arg0 != 0x10) {
        if (arg0 != 0x12) {
            if (arg0 != 0x4D) {
                if (arg0 != 0x4E) {
                    if (arg0 != 0x4F) {
                        return 0;
                    }
                    return 0x28;
                }
                return 0x27;
            }
            return 0x26;
        }
        return 0x24;
    }
    return 0x25;
}

s32 EnFsn_HasItemsToSell(void) {
    u32 temp_v0;
    u32 temp_v0_2;

    if (((s32) gSaveContext.day % 5) != 3) {
        temp_v0 = gSaveContext.roomInf[126][5];
        if ((((u32) (temp_v0 & 0xFF000000) >> 0x18) != 0) || (((u32) (temp_v0 & 0xFF0000) >> 0x10) != 0)) {
            return 1;
        }
        return 0;
    }
    temp_v0_2 = gSaveContext.roomInf[126][5];
    if ((((u32) (temp_v0_2 & 0xFF000000) >> 0x18) != 0) || (((u32) (temp_v0_2 & 0xFF0000) >> 0x10) != 0) || ((gSaveContext.weekEventReg[33] & 4) == 0)) {
        return 1;
    }
    return 0;
}

void EnFsn_GetShopItemIds(EnFsn *arg0) {
    u32 sp1C;
    u32 sp18;
    EnFsn *temp_a1;
    EnFsn *temp_a1_2;
    EnFsn *temp_a1_3;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v1;
    u32 temp_v0;

    temp_a1 = arg0;
    temp_v0 = gSaveContext.roomInf[126][5];
    sp1C = (u32) (temp_v0 & 0xFF000000) >> 0x18;
    sp18 = (u32) (temp_v0 & 0xFF0000) >> 0x10;
    temp_a1->itemIds[2] = 0;
    temp_v1 = temp_a1->itemIds[2];
    temp_a1->stolenItem2 = 0;
    temp_a1->itemIds[1] = temp_v1;
    temp_a1->itemIds[0] = temp_v1;
    temp_a1->stolenItem1 = temp_a1->stolenItem2;
    arg0 = temp_a1;
    temp_v0_2 = EnFsn_GetThirdDayItemId(temp_a1);
    temp_a1_2 = arg0;
    (temp_a1_2 + (temp_a1_2->totalSellingItems * 2))->unk384 = temp_v0_2;
    if (temp_v0_2 != 0) {
        temp_a1_2->totalSellingItems += 1;
    }
    arg0 = temp_a1_2;
    temp_v0_3 = EnFsn_GetStolenItemId(sp1C, temp_a1_2);
    temp_a1_3 = arg0;
    (temp_a1_3 + (temp_a1_3->totalSellingItems * 2))->unk384 = temp_v0_3;
    if (temp_v0_3 != 0) {
        temp_v0_4 = temp_a1_3->totalSellingItems;
        temp_a1_3->totalSellingItems = temp_v0_4 + 1;
        temp_a1_3->stolenItem1 = temp_v0_4;
    }
    arg0 = temp_a1_3;
    temp_v0_5 = EnFsn_GetStolenItemId(sp18, temp_a1_3);
    (arg0 + (arg0->totalSellingItems * 2))->unk384 = temp_v0_5;
    if (temp_v0_5 != 0) {
        temp_v0_6 = arg0->totalSellingItems;
        arg0->totalSellingItems = temp_v0_6 + 1;
        arg0->stolenItem2 = temp_v0_6;
    }
    arg0->numSellingItems = arg0->totalSellingItems;
}

void EnFsn_SpawnShopItems(EnFsn *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    s32 temp_s0;
    void *temp_v0;
    EnFsn *phi_s2;
    EnFsn *phi_s1;
    s32 phi_s0;

    EnFsn_GetShopItemIds(arg0);
    phi_s2 = arg0;
    phi_s1 = arg0;
    phi_s0 = 0;
    if ((s32) arg0->totalSellingItems > 0) {
        do {
            temp_v1 = phi_s2->itemIds[0];
            if ((s32) temp_v1 < 0) {
                phi_s1->items[0] = NULL;
            } else {
                temp_v0 = &sShopItemPositions + (phi_s0 * 0xC);
                phi_s1->items[0] = Actor_Spawn(arg1 + 0x1CA0, arg1, 2, temp_v0->unk0, temp_v0->unk4, temp_v0->unk8, (s16) 0, (s16) 0, (s16) 0, (s16) (s32) temp_v1);
            }
            temp_s0 = phi_s0 + 1;
            phi_s2 += 2;
            phi_s1 += 4;
            phi_s0 = temp_s0;
        } while (temp_s0 < (s32) arg0->totalSellingItems);
    }
}

void EnFsn_EndInteraction(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk368 == 2) {
        ActorCutscene_Stop(arg0->unk36A);
        arg0->unk368 = 0;
    }
    func_800B84D0(arg0, arg1);
    arg1->msgCtx.unk11F22 = 0x43;
    arg1->msgCtx.unk12023 = 4;
    Interface_ChangeAlpha(0x32U);
    arg0->unk3C9 = 0;
    arg0->unk400 = 0;
    arg0->unk438 = 0;
    arg1->interfaceCtx.unk_222 = 0;
    arg1->interfaceCtx.unk_224 = 0;
    arg0->textId = 0;
    arg0->unk1D4 = EnFsn_Idle;
}

s32 EnFsn_TestEndInteraction(Actor *arg0, GlobalContext *arg1, Input *arg2) {
    Actor *temp_a2;
    u16 temp_a1;
    s32 phi_v0;

    phi_v0 = 0;
    if (~(arg2->press.button | ~0x4000) == 0) {
        temp_a2 = arg0;
        if (((s32) gSaveContext.day % 5) == 3) {
            arg0->textId = 0x29DF;
        } else {
            arg0->textId = 0x29D1;
        }
        temp_a1 = arg0->textId;
        arg0 = arg0;
        func_801518B0(arg1, temp_a1, temp_a2);
        func_80151BB4(arg1, 3U);
        arg0->unk1D4 = EnFsn_SetupEndInteraction;
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 EnFsn_TestCancelOption(EnFsn *arg0, GlobalContext *arg1, Input *arg2) {
    s32 phi_v0;

    phi_v0 = 0;
    if (~(arg2->press.button | ~0x4000) == 0) {
        arg0->actionFunc = arg0->tmpActionFunc;
        func_80151938(arg1, (arg0 + (arg0->cursorIdx * 4))->unk390->unk116);
        phi_v0 = 1;
    }
    return phi_v0;
}

void EnFsn_UpdateCursorPos(Actor *arg0, GlobalContext *arg1) {
    s16 sp2E;
    s16 sp2C;

    func_800B8898(arg1, (arg0 + (arg0->unk379 * 4))->unk390, &sp2E, &sp2C);
    arg0->unk3A8 = (f32) ((f32) sp2E + 0.0f);
    arg0->unk3AC = (f32) ((f32) sp2C + 17.0f);
    arg0->unk3B0 = 1.2f;
}

s32 EnFsn_FacingShopkeeperDialogResult(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;
    u16 temp_a1;
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = arg1->msgCtx.choiceIndex;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            return 0;
        }
        arg0 = arg0;
        func_8019F230();
        temp_a2 = arg0;
        if (((s32) gSaveContext.day % 5) == 3) {
            temp_a2->textId = 0x29DF;
        } else {
            temp_a2->textId = 0x29D1;
        }
        temp_a1 = temp_a2->textId;
        arg0 = temp_a2;
        func_801518B0(arg1, temp_a1, temp_a2);
        func_80151BB4(arg1, 3U);
        arg0->unk1D4 = EnFsn_SetupEndInteraction;
        return 1;
    }
    arg0 = arg0;
    func_8019F208();
    if (((s32) gSaveContext.day % 5) != 3) {
        arg0->textId = 0x29FB;
    } else {
        temp_v0_2 = gSaveContext.weekEventReg[33];
        if ((temp_v0_2 & 4) != 0) {
            arg0->textId = 0x29FF;
        } else if (((temp_v0_2 & 8) == 0) && ((gSaveContext.weekEventReg[79] & 0x40) == 0)) {
            arg0->textId = 0x29D7;
        } else {
            arg0->textId = 0x29D8;
        }
    }
    func_801518B0(arg1, arg0->textId, arg0);
    return 1;
}

s32 EnFsn_HasPlayerSelectedItem(Actor *arg0, GlobalContext *arg1) {
    void *temp_v0;

    if (EnFsn_TestEndInteraction(arg0, arg1) != 0) {
        return 1;
    }
    if (EnFsn_TestItemSelected(arg1) != 0) {
        temp_v0 = arg0 + (arg0->unk379 * 4);
        if (temp_v0->unk390->unk1A0 == 0) {
            arg0->unk1D8 = arg0->unk1D4;
            func_80151938(arg1, temp_v0->unk390->unk198);
            play_sound(0x4808U);
            arg0->unk400 = 0;
            arg0->unk438 = 0;
            arg0->unk3C9 = 0;
            arg0->unk1D4 = EnFsn_SelectItem;
            return 1;
        }
        play_sound(0x4806U);
        return 1;
    }
    return 0;
}

void EnFsn_UpdateJoystickInputState(EnFsn *arg0, GlobalContext *arg1) {
    s32 temp_a2;
    s32 temp_t1;
    s32 temp_t7;
    s32 temp_v0_2;
    s8 temp_v0;
    s8 temp_v1;

    temp_a2 = arg0->stickAccumX;
    temp_v0 = arg1->state.input[0].rel.stick_x;
    temp_v1 = arg1->state.input[0].rel.stick_y;
    if (temp_a2 == 0) {
        if (((s32) temp_v0 >= 0x1F) || ((s32) temp_v0 < -0x1E)) {
            arg0->stickAccumX = (s32) temp_v0;
        }
    } else if (((s32) temp_v0 < 0x1F) && ((s32) temp_v0 >= -0x1E)) {
        arg0->stickAccumX = 0;
    } else {
        temp_t7 = temp_a2 + temp_v0;
        if ((temp_a2 * temp_v0) < 0) {
            arg0->stickAccumX = (s32) temp_v0;
        } else {
            arg0->stickAccumX = temp_t7;
            if (temp_t7 >= 0x7D1) {
                arg0->stickAccumX = 0x7D0;
            } else if (temp_t7 < -0x7D0) {
                arg0->stickAccumX = -0x7D0;
            }
        }
    }
    temp_v0_2 = arg0->stickAccumY;
    if (temp_v0_2 == 0) {
        if (((s32) temp_v1 >= 0x1F) || ((s32) temp_v1 < -0x1E)) {
            arg0->stickAccumY = (s32) temp_v1;
            return;
        }
        // Duplicate return node #26. Try simplifying control flow for better match
        return;
    }
    if (((s32) temp_v1 < 0x1F) && ((s32) temp_v1 >= -0x1E)) {
        arg0->stickAccumY = 0;
        return;
    }
    temp_t1 = temp_v0_2 + temp_v1;
    if ((temp_v0_2 * temp_v1) < 0) {
        arg0->stickAccumY = (s32) temp_v1;
        return;
    }
    arg0->stickAccumY = temp_t1;
    if (temp_t1 >= 0x7D1) {
        arg0->stickAccumY = 0x7D0;
        return;
    }
    if (temp_t1 < -0x7D0) {
        arg0->stickAccumY = -0x7D0;
    }
}

void EnFsn_PositionSelectedItem(EnFsn *arg0) {
    f32 sp1C;
    f32 sp4;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    u8 temp_v0;
    void *temp_a1;
    void *temp_v1;

    sp1C.unk0 = D_80AE5C40.unk0;
    sp1C.unk4 = (s32) D_80AE5C40.unk4;
    sp1C.unk8 = (s32) D_80AE5C40.unk8;
    temp_v0 = arg0->cursorIdx;
    temp_a1 = (temp_v0 * 0xC) + &sShopItemPositions;
    temp_f2 = temp_a1->unk0;
    temp_f12 = arg0->shopItemSelectedTween;
    temp_f16 = temp_a1->unk4;
    temp_v1 = (arg0 + (temp_v0 * 4))->unk390;
    sp4 = temp_a1->unk8;
    temp_v1->unk24 = (f32) (((sp1C - temp_f2) * temp_f12) + temp_f2);
    temp_v1->unk28 = (f32) (((sp20 - temp_f16) * temp_f12) + temp_f16);
    temp_v1->unk2C = (f32) (((sp24 - sp4) * temp_f12) + sp4);
}

s32 EnFsn_TakeItemOffShelf(EnFsn *arg0) {
    s32 phi_v0;

    Math_ApproachF(arg0 + 0x448, 1.0f, 1.0f, 0.15f);
    if (arg0->shopItemSelectedTween >= 0.85f) {
        arg0->shopItemSelectedTween = 1.0f;
    }
    EnFsn_PositionSelectedItem(arg0);
    phi_v0 = 0;
    if (arg0->shopItemSelectedTween == 1.0f) {
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 EnFsn_ReturnItemToShelf(EnFsn *arg0) {
    s32 phi_v0;

    Math_ApproachF(arg0 + 0x448, 0.0f, 1.0f, 0.15f);
    if (arg0->shopItemSelectedTween <= 0.15f) {
        arg0->shopItemSelectedTween = 0.0f;
    }
    EnFsn_PositionSelectedItem(arg0);
    phi_v0 = 0;
    if (arg0->shopItemSelectedTween == 0.0f) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void EnFsn_UpdateItemSelectedProperty(EnFsn *arg0) {
    s32 temp_a2;
    s32 temp_v1;
    void **phi_v0;
    s32 phi_v1;

    phi_v0 = arg0 + 0x390;
    phi_v1 = 0;
    if ((s32) arg0->totalSellingItems > 0) {
        do {
            temp_a2 = arg0->actionFunc;
            if ((EnFsn_SelectItem != temp_a2) && (EnFsn_PlayerCannotBuy != temp_a2) && (arg0->drawCursor == 0)) {
                (*phi_v0)->unk1AC = 0;
            } else if (phi_v1 == arg0->cursorIdx) {
                (*phi_v0)->unk1AC = 1;
            } else {
                (*phi_v0)->unk1AC = 0;
            }
            temp_v1 = phi_v1 + 1;
            phi_v0 += 4;
            phi_v1 = temp_v1;
        } while (temp_v1 < (s32) arg0->totalSellingItems);
    }
}

void EnFsn_UpdateCursorAnim(EnFsn *arg0) {
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

void EnFsn_UpdateStickDirectionPromptAnim(EnFsn *arg0) {
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

void EnFsn_InitShop(EnFsn *arg0, GlobalContext *arg1) {
    if (EnFsn_HasItemsToSell() != 0) {
        EnFsn_SpawnShopItems(arg0, arg1);
        arg0->stickAccumY = 0;
        arg0->stickAccumX = 0;
        arg0->cursorPos.x = 100.0f;
        arg0->cursorPos.y = 100.0f;
        arg0->cursorColor.r = 0;
        arg0->cursorColor.g = 0x50;
        arg0->cursorColor.b = 0xFF;
        arg0->cursorColor.a = 0xFF;
        arg0->cursorAnimState = 0;
        arg0->drawCursor = 0;
        arg0->stickLeftPrompt.stickColor.r = 0xC8;
        arg0->stickLeftPrompt.stickColor.g = 0xC8;
        arg0->stickLeftPrompt.stickColor.b = 0xC8;
        arg0->stickLeftPrompt.stickColor.a = 0xB4;
        arg0->stickLeftPrompt.arrowColor.r = 0xFF;
        arg0->stickLeftPrompt.arrowColor.g = 0xFF;
        arg0->stickLeftPrompt.arrowColor.b = 0;
        arg0->stickLeftPrompt.arrowColor.a = 0xC8;
        arg0->stickLeftPrompt.isEnabled = 0;
        arg0->stickRightPrompt.stickColor.r = 0xC8;
        arg0->stickRightPrompt.stickColor.g = 0xC8;
        arg0->stickRightPrompt.stickColor.b = 0xC8;
        arg0->stickRightPrompt.stickColor.a = 0xB4;
        arg0->stickRightPrompt.arrowColor.r = 0xFF;
        arg0->stickRightPrompt.arrowColor.g = 0;
        arg0->stickRightPrompt.arrowColor.b = 0;
        arg0->stickRightPrompt.arrowColor.a = 0xC8;
        arg0->stickRightPrompt.isEnabled = 0;
        arg0->arrowAnimState = 0;
        arg0->stickAnimState = 0;
        arg0->stickLeftPrompt.stickTexY = 95.0f;
        arg0->stickRightPrompt.stickTexY = 95.0f;
        arg0->cursorPos.z = 1.2f;
        arg0->stickLeftPrompt.stickTexX = 49.0f;
        arg0->stickLeftPrompt.arrowTexY = 91.0f;
        arg0->stickRightPrompt.arrowTexY = 91.0f;
        arg0->stickLeftPrompt.texZ = 1.0f;
        arg0->stickRightPrompt.texZ = 1.0f;
        arg0->stickLeftPrompt.arrowTexX = 33.0f;
        arg0->cursorAnimTween = 0.0f;
        arg0->arrowAnimTween = 0.0f;
        arg0->stickAnimTween = 0.0f;
        arg0->stickRightPrompt.stickTexX = 274.0f;
        arg0->stickRightPrompt.arrowTexX = 290.0f;
    }
    arg0->animationIdx = 4;
    arg0->blinkTimer = 0x14;
    arg0->eyeTextureIdx = 0;
    func_8013BC6C(arg0 + 0x190, &sAnimations, (s32) arg0->animationIdx);
    arg0->actionFunc = EnFsn_Idle;
}

void EnFsn_Idle(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    Actor *sp24;
    s16 sp22;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_v0;
    u16 temp_v0_2;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = self->animationIdx;
    if (temp_v0 == 4) {
        sp22 = (s16) (s32) self->skelAnime.animCurrentFrame;
        if (sp22 == SkelAnime_GetFrameCount(&(&sAnimations)[temp_v0].animationSeg->common)) {
            self->animationIdx = 5;
            func_8013BC6C(&self->skelAnime, &sAnimations, (s32) self->animationIdx);
            return;
        }
        // Duplicate return node #17. Try simplifying control flow for better match
        return;
    }
    if ((self->flags & 0x80) != 0) {
        self->actionFunc = EnFsn_Haggle;
        return;
    }
    if (func_800B84D0(&self->actor, globalCtx) != 0) {
        if (self->cutsceneState == 0) {
            if (ActorCutscene_GetCurrentIndex() == 0x7C) {
                ActorCutscene_Stop(0x7C);
            }
            self->cutscene = self->lookToShopkeeperCutscene;
            ActorCutscene_SetIntentToPlay(self->cutscene);
            self->cutsceneState = 1;
        }
        temp_v0_2 = EnFsn_GetWelcome(globalCtx);
        self->actor.textId = temp_v0_2;
        func_801518B0(globalCtx, temp_v0_2 & 0xFFFF, &self->actor);
        sp24->world.pos.x = 1.0f;
        sp24->world.pos.z = -34.0f;
        self->actionFunc = EnFsn_BeginInteraction;
        return;
    }
    temp_f0 = sp24->world.pos.x;
    if ((temp_f0 >= -50.0f) && (temp_f0 <= 15.0f) && (sp24->world.pos.y > 0.0f)) {
        temp_f0_2 = sp24->world.pos.z;
        if ((temp_f0_2 >= -35.0f) && (temp_f0_2 <= -20.0f)) {
            func_800B8614(&self->actor, globalCtx, 400.0f);
        }
    }
}

void EnFsn_Haggle(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    s16 sp26;
    s16 sp24;
    SkelAnime *temp_a0;
    u16 temp_v1;
    u16 temp_v1_2;

    sp26 = (s16) (s32) self->skelAnime.animCurrentFrame;
    sp24 = SkelAnime_GetFrameCount(&(&sAnimations)[self->animationIdx].animationSeg->common);
    temp_v1 = self->flags;
    if ((temp_v1 & 0x100) != 0) {
        self->animationIdx = 0xB;
        self->flags = temp_v1 & 0xFEFF;
        func_8013BC6C(&self->skelAnime, &sAnimations, (s32) self->animationIdx);
        return;
    }
    if ((self->animationIdx == 0xB) && (func_801378B8(&self->skelAnime, 18.0f) != 0)) {
        Audio_PlayActorSound2(&self->actor, 0x2993U);
    }
    temp_v1_2 = self->flags;
    if ((temp_v1_2 & 0x200) != 0) {
        self->animationIdx = 5;
        self->flags = temp_v1_2 & 0xFDFF;
        func_8013BC6C(&self->skelAnime, &sAnimations, (s32) self->animationIdx);
        return;
    }
    if ((temp_v1_2 & 0x40) != 0) {
        self->animationIdx = 0xC;
        self->flags = temp_v1_2 & 0xFFBF;
        func_8013BC6C(&self->skelAnime, &sAnimations, (s32) self->animationIdx);
        return;
    }
    if (self->animationIdx == 0xC) {
        temp_a0 = &self->skelAnime;
        if (sp26 == sp24) {
            self->animationIdx = 5;
            func_8013BC6C(temp_a0, &sAnimations, (s32) self->animationIdx);
            goto block_14;
        }
        if (func_801378B8(temp_a0, 28.0f) != 0) {
            Audio_PlayActorSound2(&self->actor, 0x2993U);
            return;
        }
        // Duplicate return node #16. Try simplifying control flow for better match
        return;
    }
block_14:
    if ((self->flags & 0x80) == 0) {
        self->actionFunc = EnFsn_Idle;
    }
}

void EnFsn_BeginInteraction(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    if (self->cutsceneState == 1) {
        if (ActorCutscene_GetCanPlayNext(self->cutscene) != 0) {
            ActorCutscene_StartAndSetFlag(self->cutscene, &self->actor);
            self->cutsceneState = 2;
            if (Player_GetMask(globalCtx) == 0) {
                func_8011552C(globalCtx, 0x10);
                if (EnFsn_HasItemsToSell() != 0) {
                    self->actionFunc = EnFsn_AskBuyOrSell;
                    return;
                }
                self->isSelling = 0;
                self->actionFunc = EnFsn_StartBuying;
                return;
            }
            self->actionFunc = EnFsn_SetupEndInteractionImmediately;
            return;
        }
        ActorCutscene_SetIntentToPlay(self->cutscene);
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void EnFsn_StartBuying(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    u8 sp27;
    Actor *sp20;
    u16 temp_v0;

    sp27 = func_80152498(&globalCtx->msgCtx);
    sp20 = globalCtx->actorCtx.actorList[2].first;
    EnFsn_HandleLookToShopkeeperBuyingCutscene(&self->actor);
    if ((sp27 == 5) && (func_80147624(globalCtx) != 0)) {
        temp_v0 = self->actor.textId;
        if (temp_v0 != 0x29CC) {
            if (temp_v0 != 0x29CD) {
                if (temp_v0 != 0x29CE) {
                    if (temp_v0 != 0x29CF) {
                        return;
                    }
                    sp20->unkA87 = 0;
                    self->actionFunc = EnFsn_SetupDeterminePrice;
                    // Duplicate return node #11. Try simplifying control flow for better match
                    return;
                }
                self->actor.textId = 0xFF;
                func_801518B0(globalCtx, 0xFFU & 0xFFFF, &self->actor);
                self->actionFunc = EnFsn_DeterminePrice;
                return;
            }
            self->actor.textId = 0x29CE;
            EnFsn_HandleLookToShopkeeperBuyingCutscene(&self->actor);
            func_801518B0(globalCtx, self->actor.textId, &self->actor);
            return;
        }
        self->actor.textId = 0x29CD;
        func_801518B0(globalCtx, 0x29CDU & 0xFFFF, &self->actor);
    }
}

void EnFsn_AskBuyOrSell(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    u16 temp_v0_2;
    u8 temp_v0;
    u8 temp_v0_3;
    u8 temp_v0_4;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (temp_v0 == 5) {
        if (func_80147624(globalCtx) != 0) {
            temp_v0_2 = self->actor.textId;
            if (temp_v0_2 != 0x29CC) {
                if (temp_v0_2 != 0x29D2) {
                    if ((temp_v0_2 != 0x29D3) && (temp_v0_2 != 0x29D4) && (temp_v0_2 != 0x29FA) && (temp_v0_2 != 0x2A01)) {
                        return;
                    }
                    self->actor.textId = 0x29D5;
                    func_801518B0(globalCtx, 0x29D5U & 0xFFFF, &self->actor);
                    return;
                }
                temp_v0_3 = gSaveContext.weekEventReg[33];
                if ((temp_v0_3 & 4) != 0) {
                    self->actor.textId = 0x2A01;
                } else if (((temp_v0_3 & 8) == 0) && ((gSaveContext.weekEventReg[79] & 0x40) == 0)) {
                    self->actor.textId = 0x29D3;
                } else {
                    self->actor.textId = 0x29D4;
                }
                func_801518B0(globalCtx, self->actor.textId, &self->actor);
                return;
            }
            if (((s32) gSaveContext.day % 5) != 3) {
                self->actor.textId = 0x29FA;
            } else {
                self->actor.textId = 0x29D2;
            }
            func_801518B0(globalCtx, self->actor.textId, &self->actor);
            return;
        }
        // Duplicate return node #29. Try simplifying control flow for better match
        return;
    }
    if ((temp_v0 == 4) && (func_8011552C(globalCtx, 6), (EnFsn_TestEndInteraction(&self->actor, globalCtx, globalCtx->state.input) == 0)) && (func_80147624(globalCtx) != 0)) {
        temp_v0_4 = globalCtx->msgCtx.choiceIndex;
        if (temp_v0_4 != 0) {
            if (temp_v0_4 != 1) {
                return;
            }
            func_8019F208();
            self->isSelling = 0;
            self->actor.textId = 0x29CE;
            EnFsn_HandleLookToShopkeeperBuyingCutscene(&self->actor);
            func_801518B0(globalCtx, self->actor.textId, &self->actor);
            self->actionFunc = EnFsn_StartBuying;
            // Duplicate return node #29. Try simplifying control flow for better match
            return;
        }
        func_8019F208();
        self->isSelling = 1;
        self->stickLeftPrompt.isEnabled = 0;
        self->stickRightPrompt.isEnabled = (s32) 1U;
        self->actor.textId = 0x29D6;
        func_801518B0(globalCtx, 0x29D6U & 0xFFFF, &self->actor);
        self->actionFunc = EnFsn_FaceShopkeeperSelling;
    }
}

void EnFsn_SetupDeterminePrice(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    EnFsn *temp_a0;
    EnFsn *temp_a2;

    temp_a0 = self;
    self = self;
    temp_a2 = self;
    if (func_800B84D0(&temp_a0->actor, globalCtx) != 0) {
        temp_a2->actor.textId = 0xFF;
        self = temp_a2;
        func_801518B0(globalCtx, 0xFFU & 0xFFFF, &temp_a2->actor);
        self->actionFunc = EnFsn_DeterminePrice;
    }
}

void EnFsn_DeterminePrice(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    Actor *sp1C;
    Actor *temp_a3;
    EnFsn *temp_a2;
    s32 temp_v0;
    s8 temp_a0;
    u16 temp_a1;
    u8 temp_v0_2;
    s32 phi_v0;
    u8 phi_v1;

    temp_a3 = globalCtx->actorCtx.actorList[2].first;
    self = self;
    sp1C = temp_a3;
    if (func_80152498(&globalCtx->msgCtx) == 0x10) {
        self = self;
        sp1C = temp_a3;
        temp_v0 = func_80123810(globalCtx);
        temp_a2 = self;
        if (temp_v0 > 0) {
            temp_a0 = temp_a3->unk146;
            if (temp_a0 == 0) {
                temp_v0_2 = gSaveContext.playerForm;
                phi_v1 = temp_v0_2;
                if (temp_v0_2 == 4) {
                    phi_v1 = 0U;
                }
                phi_v0 = (s32) (&gSaveContext + (phi_v1 * 4) + temp_a0)->unk4C;
            } else {
                phi_v0 = (s32) gSaveContext.equips.buttonItems[0][temp_a0];
            }
            if (phi_v0 < 0x28) {
                temp_a2->price = gItemPrices[phi_v0];
            } else {
                temp_a2->price = 0;
            }
            if ((s32) temp_a2->price > 0) {
                temp_a3->textId = 0x29EF;
                temp_a3->unkA87 = (s8) phi_v0;
                temp_a2->actionFunc = EnFsn_MakeOffer;
            } else {
                temp_a3->textId = 0x29CF;
                temp_a2->actionFunc = EnFsn_StartBuying;
            }
            temp_a2->actor.textId = temp_a3->textId;
            func_801477B4(globalCtx);
            return;
        }
        if (temp_v0 < 0) {
            if (((s32) gSaveContext.day % 5) == 3) {
                temp_a2->actor.textId = 0x29DF;
            } else {
                temp_a2->actor.textId = 0x29D1;
            }
            temp_a1 = temp_a2->actor.textId;
            self = temp_a2;
            func_801518B0(globalCtx, temp_a1, &temp_a2->actor);
            func_80151BB4(globalCtx, 3U);
            self->actionFunc = EnFsn_SetupEndInteraction;
        }
        // Duplicate return node #19. Try simplifying control flow for better match
    }
}

void EnFsn_MakeOffer(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    Actor *sp20;
    GlobalContext *temp_a0;
    s16 temp_v0_2;
    u8 temp_v0;

    temp_a0 = globalCtx;
    sp20 = globalCtx->actorCtx.actorList[2].first;
    if ((func_80152498(&globalCtx->msgCtx) == 4) && (globalCtx = globalCtx, (func_80147624(temp_a0) != 0))) {
        temp_v0 = globalCtx->msgCtx.choiceIndex;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {
                return;
            }
            func_8019F230();
            sp20->unkA87 = 0;
            self->actionFunc = EnFsn_SetupDeterminePrice;
            // Duplicate return node #20. Try simplifying control flow for better match
            return;
        }
        globalCtx = globalCtx;
        func_8019F208();
        globalCtx->msgCtx.unk11F22 = 0x43;
        globalCtx->msgCtx.unk12023 = 4;
        if (self->cutsceneState == 2) {
            ActorCutscene_Stop(self->cutscene);
            self->cutsceneState = 0;
        }
        temp_v0_2 = self->price;
        if (temp_v0_2 != 5) {
            if (temp_v0_2 != 0xA) {
                if (temp_v0_2 != 0x14) {
                    if (temp_v0_2 != 0x32) {
                        if (temp_v0_2 != 0xC8) {

                        } else {
                            self->getItemId = 7;
                        }
                    } else {
                        self->getItemId = 5;
                    }
                } else {
                    self->getItemId = 4;
                }
            } else {
                self->getItemId = 3;
            }
        } else {
            self->getItemId = 2;
        }
        self->actionFunc = EnFsn_GiveItem;
    }
}

void EnFsn_GiveItem(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    if (Actor_HasParent(&self->actor, globalCtx) != 0) {
        if ((self->isSelling == 1) && (self->items[self->cursorIdx]->getItemId == 0x7E)) {
            func_80151BB4(globalCtx, 0x2DU);
            func_80151BB4(globalCtx, 3U);
        }
        self->actor.parent = NULL;
        if (((self->actor.params & 1) == 0) && (self->isSelling == 0)) {
            func_80123D50(globalCtx, (Player *) globalCtx->actorCtx.actorList[2].first, 0x12, 0x15);
        }
        self->actionFunc = EnFsn_SetupResumeInteraction;
        return;
    }
    if (self->isSelling == 1) {
        func_800B8A1C(&self->actor, globalCtx, self->items[self->cursorIdx]->getItemId, 300.0f, 300.0f);
        return;
    }
    func_800B8A1C(&self->actor, globalCtx, self->getItemId, 300.0f, 300.0f);
}

void EnFsn_SetupResumeInteraction(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    if ((*(gBitFlags + 0x48) & gSaveContext.inventory.questItems) != 0) {
        if (globalCtx->msgCtx.unk120B1 == 0) {
            EnFsn_HandleSetupResumeInteraction();
            return;
        }
        // Duplicate return node #4. Try simplifying control flow for better match
        return;
    }
    EnFsn_HandleSetupResumeInteraction();
}

void EnFsn_ResumeInteraction(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    if (func_800B84D0(&self->actor, globalCtx) != 0) {
        if ((self->actor.params & 1) == 0) {
            if (self->isSelling == 0) {
                self->actor.textId = 0x29D0;
                self->cutscene = self->lookToShopkeeperBuyingCutscene;
            } else {
                self->cutscene = self->lookToShopkeeperCutscene;
                if ((s32) self->numSellingItems <= 0) {
                    self->actor.textId = 0x29DE;
                } else {
                    self->actor.textId = 0x29D6;
                }
            }
            func_801518B0(globalCtx, self->actor.textId, &self->actor);
            if (ActorCutscene_GetCurrentIndex() == 0x7C) {
                ActorCutscene_Stop(0x7C);
            }
            ActorCutscene_SetIntentToPlay(self->cutscene);
            self->actionFunc = EnFsn_ResumeShoppingInteraction;
            return;
        }
        EnFsn_HandleConversationBackroom(&self->actor, globalCtx, self);
        self->actionFunc = EnFsn_ConverseBackroom;
        return;
    }
    func_800B85E0(&self->actor, globalCtx, 400.0f, -1);
}

void EnFsn_ResumeShoppingInteraction(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    if (self->cutsceneState == 0) {
        if (ActorCutscene_GetCanPlayNext(self->cutscene) != 0) {
            ActorCutscene_StartAndSetFlag(self->cutscene, &self->actor);
            self->cutsceneState = 2;
            if (self->isSelling == 0) {
                self->actionFunc = EnFsn_AskCanBuyMore;
                return;
            }
            if (self->actor.textId != 0x29D6) {
                self->actionFunc = EnFsn_AskCanBuyAterRunningOutOfItems;
                return;
            }
            func_8011552C(globalCtx, 6);
            self->stickLeftPrompt.isEnabled = 0;
            self->stickRightPrompt.isEnabled = 1;
            self->actionFunc = EnFsn_FaceShopkeeperSelling;
            return;
        }
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        if (self->isSelling == 0) {
            self->cutscene = self->lookToShopkeeperBuyingCutscene;
        } else {
            self->cutscene = self->lookToShopkeeperCutscene;
        }
        ActorCutscene_SetIntentToPlay(self->cutscene);
        // Duplicate return node #13. Try simplifying control flow for better match
    }
}

void EnFsn_LookToShelf(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk368;
    if (temp_v0 == 2) {
        ActorCutscene_Stop(arg0->unk36A);
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        arg0->unk36A = (s16) arg0->unk36E;
        ActorCutscene_SetIntentToPlay(arg0->unk36A);
        arg0->unk368 = 1;
        return;
    }
    if (temp_v0 == 1) {
        if (ActorCutscene_GetCanPlayNext(arg0->unk36A) != 0) {
            ActorCutscene_StartAndSetFlag(arg0->unk36A, arg0);
            arg0->unk368 = 2;
            EnFsn_UpdateCursorPos(arg0, arg1);
            arg0->unk1D4 = EnFsn_BrowseShelf;
            func_80151938(arg1, (arg0 + (arg0->unk379 * 4))->unk390->unk116);
            return;
        }
        ActorCutscene_SetIntentToPlay(arg0->unk36A);
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void EnFsn_BrowseShelf(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    u8 sp2F;
    u8 sp27;
    s16 temp_v0;

    sp2F = func_80152498(&globalCtx->msgCtx);
    sp27 = self->cursorIdx;
    if (EnFsn_ReturnItemToShelf(self) == 0) {
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
    EnFsn_UpdateCursorPos(&self->actor, globalCtx);
    if (sp2F == 5) {
        func_8011552C(globalCtx, 6);
        if (EnFsn_HasPlayerSelectedItem(&self->actor, globalCtx, globalCtx->state.input) == 0) {
            EnFsn_CursorLeftRight(self);
            if (sp27 != self->cursorIdx) {
                play_sound(0x4809U);
                func_80151938(globalCtx, self->items[self->cursorIdx]->actor.textId);
            }
        }
    }
}

void EnFsn_LookToShopkeeperFromShelf(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    s16 temp_v0;

    temp_v0 = self->cutsceneState;
    if (temp_v0 == 2) {
        ActorCutscene_Stop(self->cutscene);
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        self->cutscene = self->lookToShopkeeperFromShelfCutscene;
        ActorCutscene_SetIntentToPlay(self->cutscene);
        self->cutsceneState = 1;
        return;
    }
    if (temp_v0 == 1) {
        if (ActorCutscene_GetCanPlayNext(self->cutscene) != 0) {
            ActorCutscene_StartAndSetFlag(self->cutscene, &self->actor);
            self->cutsceneState = 2;
            self->stickLeftPrompt.isEnabled = 0;
            self->stickRightPrompt.isEnabled = 1;
            self->actor.textId = 0x29D6;
            func_80151938(globalCtx, 0x29D6U & 0xFFFF);
            self->actionFunc = EnFsn_FaceShopkeeperSelling;
            return;
        }
        ActorCutscene_SetIntentToPlay(self->cutscene);
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void EnFsn_HandleCanPlayerBuyItem(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    u8 temp_v0_2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;

    temp_a1 = (arg0 + (arg0->unk379 * 4))->unk390;
    temp_v0 = temp_a1->unk1B4(arg1, temp_a1);
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 4) {
                if (temp_v0 != 5) {
                    return;
                }
                play_sound(0x4806U);
                func_80151938(arg1, 0x29DDU);
                arg0->unk1D4 = EnFsn_PlayerCannotBuy;
                return;
            }
            play_sound(0x4806U);
            func_80151938(arg1, 0x29F0U);
            arg0->unk1D4 = EnFsn_PlayerCannotBuy;
            return;
        }
        func_8019F208();
        gSaveContext.weekEventReg[33] = gSaveContext.weekEventReg[33] | 4;
        goto block_6;
    }
block_6:
    if (arg0->unk368 == 2) {
        ActorCutscene_Stop(arg0->unk36A);
        arg0->unk368 = 0;
    }
    func_8019F208();
    temp_a1_2 = (arg0 + (arg0->unk379 * 4))->unk390;
    temp_a1_2->unk1BC(arg1, temp_a1_2);
    func_800B8A1C(arg0, arg1, (arg0 + (arg0->unk379 * 4))->unk390->unk19C, 300.0f, 300.0f);
    arg1->msgCtx.unk11F22 = 0x43;
    arg1->msgCtx.unk12023 = 4;
    Interface_ChangeAlpha(0x32U);
    arg0->unk3C9 = 0;
    arg0->unk448 = 0.0f;
    temp_a1_3 = (arg0 + (arg0->unk379 * 4))->unk390;
    temp_a1_3->unk1A4(arg1, temp_a1_3);
    temp_v0_2 = arg0->unk379;
    if (temp_v0_2 == arg0->unk380) {
        gSaveContext.roomInf[126][5] &= 0xFFFFFF;
        goto block_12;
    }
    if (temp_v0_2 == arg0->unk382) {
        gSaveContext.roomInf[126][5] = gSaveContext.roomInf[126][5] & 0xFF00FFFF;
block_12:
    }
    arg0->unk38C = (s16) (arg0->unk38C - 1);
    (arg0 + (arg0->unk379 * 2))->unk384 = -1;
    arg0->unk1D4 = EnFsn_GiveItem;
}

void EnFsn_SetupEndInteraction(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    GlobalContext *temp_a0;
    u8 temp_v0;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (((temp_v0 == 5) || (temp_v0 == 6)) && (temp_a0 = globalCtx, globalCtx = globalCtx, (func_80147624(temp_a0) != 0))) {
        if ((*(gBitFlags + 0x48) & gSaveContext.inventory.questItems) != 0) {
            if (globalCtx->msgCtx.unk120B1 == 0) {
                EnFsn_EndInteraction(&self->actor, globalCtx);
                return;
            }
            globalCtx->msgCtx.unk11F22 = 0x43;
            globalCtx->msgCtx.unk12023 = 4;
            return;
        }
        EnFsn_EndInteraction(&self->actor, globalCtx);
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void EnFsn_SelectItem(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    u8 sp27;
    u8 temp_v0;

    sp27 = func_80152498(&globalCtx->msgCtx);
    if ((EnFsn_TakeItemOffShelf(self) != 0) && (sp27 == 4) && (func_8011552C(globalCtx, 6), (EnFsn_TestCancelOption(self, globalCtx, globalCtx->state.input) == 0)) && (func_80147624(globalCtx) != 0)) {
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
        EnFsn_HandleCanPlayerBuyItem(&self->actor, globalCtx);
    }
}

void EnFsn_PlayerCannotBuy(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    self = self;
    if (func_80152498(&globalCtx->msgCtx) == 5) {
        self = self;
        if (func_80147624(globalCtx) != 0) {
            self->actionFunc = self->tmpActionFunc;
            func_80151938(globalCtx, self->items[self->cursorIdx]->actor.textId);
        }
    }
}

void EnFsn_AskCanBuyMore(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    u8 sp27;
    u8 temp_v0;

    sp27 = func_80152498(&globalCtx->msgCtx);
    if (self->cutsceneState == 0) {
        if (ActorCutscene_GetCanPlayNext(self->cutscene) != 0) {
            ActorCutscene_StartAndSetFlag(self->cutscene, &self->actor);
            self->cutsceneState = 2;
        } else {
            if (ActorCutscene_GetCurrentIndex() == 0x7C) {
                ActorCutscene_Stop(0x7C);
            }
            self->cutscene = self->lookToShopkeeperCutscene;
            ActorCutscene_SetIntentToPlay(self->cutscene);
        }
    }
    if (sp27 == 4) {
        if (func_80147624(globalCtx) != 0) {
            temp_v0 = globalCtx->msgCtx.choiceIndex;
            if (temp_v0 != 0) {
                if (temp_v0 != 1) {
                    return;
                }
                func_8019F230();
                if (((s32) gSaveContext.day % 5) == 3) {
                    self->actor.textId = 0x29DF;
                } else {
                    self->actor.textId = 0x29D1;
                }
                func_801518B0(globalCtx, self->actor.textId, &self->actor);
                func_80151BB4(globalCtx, 3U);
                return;
            }
            func_8019F208();
            self->actor.textId = 0xFF;
            func_801518B0(globalCtx, 0xFFU & 0xFFFF, &self->actor);
            self->actionFunc = EnFsn_DeterminePrice;
            return;
        }
        // Duplicate return node #24. Try simplifying control flow for better match
        return;
    }
    if (((sp27 == 5) || (sp27 == 6)) && (func_80147624(globalCtx) != 0)) {
        if ((*(gBitFlags + 0x48) & gSaveContext.inventory.questItems) != 0) {
            if (globalCtx->msgCtx.unk120B1 == 0) {
                EnFsn_EndInteraction(&self->actor, globalCtx);
                return;
            }
            globalCtx->msgCtx.unk11F22 = 0x43;
            globalCtx->msgCtx.unk12023 = 4;
            return;
        }
        EnFsn_EndInteraction(&self->actor, globalCtx);
        // Duplicate return node #24. Try simplifying control flow for better match
    }
}

void EnFsn_AskCanBuyAterRunningOutOfItems(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    u8 sp27;
    u8 temp_v0;

    sp27 = func_80152498(&globalCtx->msgCtx);
    if (self->cutsceneState == 0) {
        if (ActorCutscene_GetCanPlayNext(self->cutscene) != 0) {
            ActorCutscene_StartAndSetFlag(self->cutscene, &self->actor);
            self->cutsceneState = 2;
        } else {
            if (ActorCutscene_GetCurrentIndex() == 0x7C) {
                ActorCutscene_Stop(0x7C);
            }
            self->cutscene = self->lookToShopkeeperCutscene;
            ActorCutscene_SetIntentToPlay(self->cutscene);
        }
    }
    if (sp27 == 4) {
        if (func_80147624(globalCtx) != 0) {
            temp_v0 = globalCtx->msgCtx.choiceIndex;
            if (temp_v0 != 0) {
                if (temp_v0 != 1) {
                    return;
                }
                func_8019F230();
                if (((s32) gSaveContext.day % 5) == 3) {
                    self->actor.textId = 0x29DF;
                } else {
                    self->actor.textId = 0x29D1;
                }
                func_801518B0(globalCtx, self->actor.textId, &self->actor);
                func_80151BB4(globalCtx, 3U);
                return;
            }
            func_8019F208();
            self->isSelling = 0;
            self->actor.textId = 0x29CE;
            func_801518B0(globalCtx, 0x29CEU & 0xFFFF, &self->actor);
            self->actionFunc = EnFsn_StartBuying;
            return;
        }
        // Duplicate return node #24. Try simplifying control flow for better match
        return;
    }
    if (((sp27 == 5) || (sp27 == 6)) && (func_80147624(globalCtx) != 0)) {
        if ((*(gBitFlags + 0x48) & gSaveContext.inventory.questItems) != 0) {
            if (globalCtx->msgCtx.unk120B1 == 0) {
                EnFsn_EndInteraction(&self->actor, globalCtx);
                return;
            }
            globalCtx->msgCtx.unk11F22 = 0x43;
            globalCtx->msgCtx.unk12023 = 4;
            return;
        }
        EnFsn_EndInteraction(&self->actor, globalCtx);
        // Duplicate return node #24. Try simplifying control flow for better match
    }
}

void EnFsn_FaceShopkeeperSelling(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    s32 temp_v0_2;
    u8 temp_v0;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (temp_v0 == 4) {
        func_8011552C(globalCtx, 6);
        if ((EnFsn_TestEndInteraction(&self->actor, globalCtx, globalCtx->state.input) == 0) && ((func_80147624(globalCtx) == 0) || (EnFsn_FacingShopkeeperDialogResult(&self->actor, globalCtx) == 0)) && (self->stickAccumX > 0) && (temp_v0_2 = EnFsn_SetCursorIndexFromNeutral(self), (temp_v0_2 != 0xFF))) {
            self->cursorIdx = temp_v0_2 & 0xFF;
            self->actionFunc = (void (*)(EnFsn *, GlobalContext *)) EnFsn_LookToShelf;
            func_8011552C(globalCtx, 6);
            self->stickRightPrompt.isEnabled = 0;
            play_sound(0x4809U);
            return;
        }
        // Duplicate return node #10. Try simplifying control flow for better match
        return;
    }
    if ((temp_v0 == 5) && (func_80147624(globalCtx) != 0)) {
        self->actor.textId = 0x29D6;
        func_801518B0(globalCtx, 0x29D6U & 0xFFFF, &self->actor);
    }
}

void EnFsn_SetupEndInteractionImmediately(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        EnFsn_EndInteraction(&self->actor, globalCtx);
    }
}

void EnFsn_IdleBackroom(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;

    temp_a0 = arg0;
    if (func_800B84D0(arg0, arg1) != 0) {
        temp_a0->unk376 = 0;
        arg0 = temp_a0;
        EnFsn_HandleConversationBackroom(temp_a0, arg1);
        arg0->unk1D4 = EnFsn_ConverseBackroom;
        return;
    }
    if ((temp_a0->xzDistToPlayer < 100.0f) || (temp_a0->isTargeted != 0)) {
        func_800B8614(temp_a0, arg1, 100.0f);
    }
}

void EnFsn_ConverseBackroom(EnFsn *this, GlobalContext *globalCtx) {
    EnFsn *self = (EnFsn *) this;
    GlobalContext *temp_a0;
    u16 temp_v0;

    self = self;
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (temp_a0 = globalCtx, globalCtx = globalCtx, self = self, (func_80147624(temp_a0) != 0))) {
        temp_v0 = self->flags;
        if ((temp_v0 & 1) != 0) {
            self->flags = temp_v0 & 0xFFFE;
            globalCtx->msgCtx.unk11F22 = 0x43;
            globalCtx->msgCtx.unk12023 = 4;
            self->actionFunc = (void (*)(EnFsn *, GlobalContext *)) EnFsn_IdleBackroom;
            return;
        }
        if ((temp_v0 & 2) != 0) {
            self->flags = temp_v0 & 0xFFFD;
            globalCtx->msgCtx.unk11F22 = 0x43;
            globalCtx->msgCtx.unk12023 = 4;
            self->actionFunc = EnFsn_GiveItem;
            return;
        }
        EnFsn_HandleConversationBackroom(&self->actor, globalCtx, self);
        // Duplicate return node #7. Try simplifying control flow for better match
    }
}

void EnFsn_GetCutscenes(EnFsn *arg0) {
    arg0->lookToShopkeeperCutscene = (s16) arg0->actor.cutscene;
    arg0->lookToShelfCutscene = ActorCutscene_GetAdditionalCutscene(arg0->lookToShopkeeperCutscene);
    arg0->lookToShopkeeperFromShelfCutscene = ActorCutscene_GetAdditionalCutscene(arg0->lookToShelfCutscene);
    arg0->lookToShopkeeperBuyingCutscene = ActorCutscene_GetAdditionalCutscene(arg0->lookToShopkeeperFromShelfCutscene);
}

void EnFsn_Blink(EnFsn *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->blinkTimer - 1;
    if ((s32) temp_v0 >= 3) {
        arg0->eyeTextureIdx = 0;
        goto block_5;
    }
    if (temp_v0 == 0) {
        arg0->eyeTextureIdx = 2;
        arg0->blinkTimer = (s32) (Rand_ZeroOne() * 60.0f) + 0x14;
        return;
    }
    arg0->eyeTextureIdx = 1;
block_5:
    arg0->blinkTimer = temp_v0;
}

void EnFsn_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnFsn *this = (EnFsn *) thisx;
    SkelAnime *sp34;
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a1_2;
    SkelAnime *temp_a1;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    temp_a1 = &this->skelAnime;
    sp34 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06013320, &D_06012C34, this->limbDrawTable, this->transitionDrawTable, 0x13);
    if ((this->actor.params & 1) == 0) {
        this->actor.shape.rot.y += 0x8000;
        this->actor.flags &= -2;
        EnFsn_GetCutscenes(this);
        EnFsn_InitShop(this, globalCtx);
        return;
    }
    if (((gSaveContext.weekEventReg[33] & 8) != 0) || (temp_a1_2 = &this->collider, ((gSaveContext.weekEventReg[79] & 0x40) != 0))) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    sp30 = temp_a1_2;
    Collider_InitCylinder(globalCtx, temp_a1_2);
    Collider_InitAndSetCylinder(globalCtx, temp_a1_2, &this->actor, &D_80AE5BF0);
    this->blinkTimer = 0x14;
    this->eyeTextureIdx = 0;
    this->actor.flags |= 1;
    this->actor.targetMode = 0;
    this->animationIdx = 0;
    func_8013BC6C(sp34, &sAnimations, (s32) this->animationIdx);
    this->actionFunc = (void (*)(EnFsn *, GlobalContext *)) EnFsn_IdleBackroom;
}

void EnFsn_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnFsn *this = (EnFsn *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnFsn_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnFsn *this = (EnFsn *) thisx;
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    func_800E9250(globalCtx, &this->actor, &this->headRot, &this->unk27A, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
    func_8013D9C8(globalCtx, this->limbRotYTable, this->limbRotZTable, 0x13);
    EnFsn_Blink(this);
    if (((this->actor.params & 1) == 0) && (EnFsn_HasItemsToSell() != 0)) {
        EnFsn_UpdateJoystickInputState(this, globalCtx);
        EnFsn_UpdateItemSelectedProperty(this);
        EnFsn_UpdateStickDirectionPromptAnim(this);
        EnFsn_UpdateCursorAnim(this);
    }
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    if ((this->actor.params & 1) != 0) {
        EnFsn_UpdateCollider(this, globalCtx);
    }
}

void EnFsn_DrawCursor(EnFsn *arg0, GraphicsContext **arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5) {
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
    GraphicsContext *temp_a3;
    f32 temp_f0;
    s32 temp_a1;

    temp_a3 = *arg1;
    if (arg5 != 0) {
        sp18 = temp_a3;
        arg0 = arg0;
        func_8012C654(temp_a3);
        temp_v0 = sp18->overlay.p;
        sp18->overlay.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xFA000000;
        temp_v0->words.w1 = (arg0->cursorColor.r << 0x18) | ((arg0->cursorColor.g & 0xFF) << 0x10) | ((arg0->cursorColor.b & 0xFF) << 8) | (arg0->cursorColor.a & 0xFF);
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

void EnFsn_DrawTextRec(GraphicsContext **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8, s32 arg9, f32 argA, f32 argB) {
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

void EnFsn_DrawStickDirectionPrompts(EnFsn *arg0, GraphicsContext **arg1) {
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

    temp_t1 = arg0->stickLeftPrompt.isEnabled;
    temp_v0 = arg0->stickRightPrompt.isEnabled;
    temp_a2 = *arg1;
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
            EnFsn_DrawTextRec(arg1, arg0->stickLeftPrompt.arrowColor.r, arg0->stickLeftPrompt.arrowColor.g, arg0->stickLeftPrompt.arrowColor.b, arg0->stickLeftPrompt.arrowColor.a, arg0->stickLeftPrompt.arrowTexX, arg0->stickLeftPrompt.arrowTexY, arg0->stickLeftPrompt.texZ, 0, 0, -1.0f, 1.0f);
        }
        if (sp48 != 0) {
            sp4C = arg0->stickLeftPrompt.isEnabled;
            sp44 = *arg1;
            EnFsn_DrawTextRec(arg1, arg0->stickRightPrompt.arrowColor.r, arg0->stickRightPrompt.arrowColor.g, arg0->stickRightPrompt.arrowColor.b, arg0->stickRightPrompt.arrowColor.a, arg0->stickRightPrompt.arrowTexX, arg0->stickRightPrompt.arrowTexY, arg0->stickRightPrompt.texZ, 0, 0, 1.0f, 1.0f);
        }
        temp_v0_10 = (*arg1)->overlay.p;
        (*arg1)->overlay.p = temp_v0_10 + 8;
        temp_v0_10->words.w0 = 0xFD700000;
        temp_v0_10->words.w1 = &D_0401F7C0;
        temp_v0_11 = (*arg1)->overlay.p;
        (*arg1)->overlay.p = temp_v0_11 + 8;
        temp_v0_11->words.w0 = 0xF5700000;
        temp_v0_11->words.w1 = 0x7000040;
        temp_v0_12 = (*arg1)->overlay.p;
        (*arg1)->overlay.p = temp_v0_12 + 8;
        temp_v0_12->words.w1 = 0;
        temp_v0_12->words.w0 = 0xE6000000;
        temp_v0_13 = (*arg1)->overlay.p;
        (*arg1)->overlay.p = temp_v0_13 + 8;
        temp_v0_13->words.w1 = 0x707F400;
        temp_v0_13->words.w0 = 0xF3000000;
        temp_v0_14 = (*arg1)->overlay.p;
        (*arg1)->overlay.p = temp_v0_14 + 8;
        temp_v0_14->words.w1 = 0;
        temp_v0_14->words.w0 = 0xE7000000;
        temp_v0_15 = (*arg1)->overlay.p;
        (*arg1)->overlay.p = temp_v0_15 + 8;
        temp_v0_15->words.w1 = 0x40;
        temp_v0_15->words.w0 = 0xF5680400;
        temp_v0_16 = (*arg1)->overlay.p;
        (*arg1)->overlay.p = temp_v0_16 + 8;
        temp_v0_16->words.w0 = 0xF2000000;
        temp_v0_16->words.w1 = 0x3C03C;
        if (arg0->stickLeftPrompt.isEnabled != 0) {
            EnFsn_DrawTextRec(arg1, arg0->stickLeftPrompt.stickColor.r, arg0->stickLeftPrompt.stickColor.g, arg0->stickLeftPrompt.stickColor.b, arg0->stickLeftPrompt.stickColor.a, arg0->stickLeftPrompt.stickTexX, arg0->stickLeftPrompt.stickTexY, arg0->stickLeftPrompt.texZ, 0, 0, -1.0f, 1.0f);
        }
        if (sp48 != 0) {
            EnFsn_DrawTextRec(arg1, arg0->stickRightPrompt.stickColor.r, arg0->stickRightPrompt.stickColor.g, arg0->stickRightPrompt.stickColor.b, arg0->stickRightPrompt.stickColor.a, arg0->stickRightPrompt.stickTexX, arg0->stickRightPrompt.stickTexY, arg0->stickRightPrompt.texZ, 0, 0, 1.0f, 1.0f);
        }
    }
}

s32 EnFsn_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    void *sp1C;
    void *temp_v1;
    s32 phi_v0;
    s32 phi_a3;

    if (arg1 == 0x10) {
        arg1 = arg1;
        SysMatrix_InsertXRotation_s(arg5->unk276, 1);
    }
    phi_a3 = arg1;
    if ((arg5->params & 1) != 0) {
        if (arg1 != 8) {
            if (arg1 != 0xB) {
                phi_v0 = 2;
                if (arg1 != 0x10) {
                    phi_v0 = 9;
                }
            } else {
                phi_v0 = 1;
            }
        } else {
            phi_v0 = 0;
        }
        if (phi_v0 < 9) {
            temp_v1 = arg5 + (phi_v0 * 2);
            arg1 = arg1;
            sp1C = temp_v1;
            arg4->y += (s32) (Math_SinS(temp_v1->unk228) * 200.0f);
            arg4->z += (s32) (Math_CosS(temp_v1->unk24E) * 200.0f);
            phi_a3 = arg1;
        }
    }
    if (phi_a3 == 0x11) {
        *arg2 = NULL;
    }
    return 0;
}

void EnFsn_PostLimbDraw(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v1;

    if (arg1 == 0x10) {
        arg4->focus.pos.x = arg4->world.pos.x;
        arg4->focus.pos.z = arg4->world.pos.z;
        arg4->focus.pos.y = arg4->world.pos.y + 60.0f;
        temp_v1 = *arg0;
        temp_a0 = temp_v1->unk2B0;
        temp_v1->unk2B0 = (void *) (temp_a0 + 8);
        temp_a0->unk4 = &D_0600F180;
        temp_a0->unk0 = 0xDE000000;
        temp_a0_2 = temp_v1->unk2B0;
        temp_v1->unk2B0 = (void *) (temp_a0_2 + 8);
        temp_a0_2->unk4 = &D_0600F218;
        temp_a0_2->unk0 = 0xDE000000;
    }
}

void EnFsn_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnFsn *this = (EnFsn *) thisx;
    GraphicsContext *sp40;
    Gfx *sp38;
    Gfx *sp34;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    s16 temp_v1;
    s16 phi_v1;

    temp_a0 = globalCtx->state.gfxCtx;
    sp40 = temp_a0;
    func_8012C5B0(temp_a0);
    temp_v0 = sp40->polyOpa.p;
    sp40->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp40 = sp40;
    sp38 = temp_v0;
    sp38->words.w1 = Lib_SegmentedToVirtual(*(&sEyeTextures + (this->eyeTextureIdx * 4)));
    temp_v0_2 = sp40->polyOpa.p;
    sp40->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp34 = temp_v0_2;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&sEyeTextures + (this->eyeTextureIdx * 4)));
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, EnFsn_OverrideLimbDraw, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) EnFsn_PostLimbDraw, &this->actor);
    phi_v1 = 0;
    if ((s32) this->totalSellingItems > 0) {
        do {
            temp_v1 = phi_v1 + 1;
            this->items[phi_v1]->actor.scale.x = 0.2f;
            this->items[phi_v1]->actor.scale.y = 0.2f;
            this->items[phi_v1]->actor.scale.z = 0.2f;
            phi_v1 = temp_v1;
        } while ((s32) temp_v1 < (s32) this->totalSellingItems);
    }
    EnFsn_DrawCursor(this, &globalCtx->state.gfxCtx, this->cursorPos.x, this->cursorPos.y, this->cursorPos.z, (u8) (s32) this->drawCursor);
    EnFsn_DrawStickDirectionPrompts(this, &globalCtx->state.gfxCtx);
}

