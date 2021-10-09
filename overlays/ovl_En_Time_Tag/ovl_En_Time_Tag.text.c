void func_80ACA208(EnTimeTag *this, GlobalContext *globalCtx); /* static */



void EnTimeTag_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnTimeTag *this = (EnTimeTag *) thisx;
    s32 temp_v0;

    temp_v0 = (s32) (this->actor.params & 0xE000) >> 0xD;
    this->actionFunc = func_80ACA840;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                if (temp_v0 == 4) {
                    if (((gSaveContext.weekEventReg[8] & 0x40) != 0) || (((s32) gSaveContext.day % 5) != 3)) {
                        Actor_MarkForDeath(&this->actor);
                        return;
                    }
                    this->actor.home.rot.x = 0;
                    this->actor.home.rot.y = 0;
                    return;
                }
                // Duplicate return node #13. Try simplifying control flow for better match
                return;
            }
            this->actionFunc = func_80ACA5F8;
            this->actor.textId = 0;
            this->actor.home.rot.x = 0;
            return;
        }
        this->actionFunc = func_80ACA0A8;
        this->actor.flags |= 0x2000000;
        return;
    }
    this->actionFunc = func_80ACA268;
    this->actor.flags |= 0x2000000;
    if ((*(gBitFlags + 0x3C) & gSaveContext.inventory.questItems) != 0) {
        this->actor.textId = 0xC02;
        return;
    }
    this->actor.textId = 0;
}

void EnTimeTag_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTimeTag *this = (EnTimeTag *) thisx;

}

void func_80AC9FD4(EnTimeTag *this, GlobalContext *globalCtx) {

}

void func_80AC9FE4(EnTimeTag *this, GlobalContext *globalCtx) {
    EnTimeTag *temp_a1;
    s8 temp_a0;
    s8 temp_a0_2;
    u32 temp_v1;

    temp_a0 = this->actor.cutscene;
    this = this;
    temp_a1 = this;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        temp_a0_2 = temp_a1->actor.cutscene;
        this = temp_a1;
        ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a0_2, &temp_a1->actor);
        this->actionFunc = func_80AC9FD4;
        temp_v1 = gSaveContext.inventory.questItems;
        gSaveContext.unk_3DD0[3] = 0;
        if (((gBitFlags->unk0 & temp_v1) != 0) && ((gBitFlags->unk4 & temp_v1) != 0) && ((gBitFlags->unk8 & temp_v1) != 0) && ((gBitFlags->unkC & temp_v1) != 0)) {
            gSaveContext.weekEventReg[25] |= 2;
            return;
        }
        // Duplicate return node #7. Try simplifying control flow for better match
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a1->actor.cutscene);
}

void func_80ACA0A8(EnTimeTag *this, GlobalContext *globalCtx) {
    if ((globalCtx->msgCtx.unk1202A == 3) && (globalCtx->msgCtx.unk1202E == 4)) {
        if (this->actor.cutscene != -1) {
            this->actionFunc = func_80AC9FE4;
            ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
            gSaveContext.unk_3DD0[3] = 0;
        }
        globalCtx->msgCtx.unk1202A = 4;
    }
}

void func_80ACA12C(EnTimeTag *this, GlobalContext *globalCtx) {
    this = this;
    if (ActorCutscene_GetCurrentIndex() != this->actor.cutscene) {
        this->actionFunc = func_80ACA268;
        this->actor.textId = 0xC02;
        Item_Give(globalCtx, 0x6AU);
    }
}

void func_80ACA184(EnTimeTag *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
        ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        return;
    }
    if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
        ActorCutscene_Start((s16) this->actor.cutscene, &this->actor);
        this->actionFunc = func_80ACA12C;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
}

void func_80ACA208(EnTimeTag *arg0, GlobalContext *arg1) {
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        func_801477B4(arg1);
        arg0->actionFunc = func_80ACA268;
    }
}

void func_80ACA268(EnTimeTag *this, GlobalContext *globalCtx) {
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        if (this->actor.textId == 0) {
            this->actionFunc = func_80ACA184;
            return;
        }
        this->actionFunc = func_80ACA208;
        return;
    }
    if ((this->actor.xzDistToPlayer < 100.0f) && (Actor_IsLinkFacingActor(&this->actor, 0x3000, globalCtx) != 0) && ((Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) || ((*(gBitFlags + 0x3C) & gSaveContext.inventory.questItems) != 0))) {
        this->actor.flags |= 1;
        func_800B8614(&this->actor, globalCtx, 110.0f);
    }
}

void func_80ACA348(EnTimeTag *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->actor.home.rot.x;
    if ((s32) temp_v0 > 0) {
        this->actor.home.rot.x = temp_v0 - 1;
        return;
    }
    if (this->actor.home.rot.z != 0) {
        this = this;
        func_80151938(globalCtx, 0x1230U);
    } else {
        this = this;
        func_80151938(globalCtx, 0x122DU);
    }
    this->actionFunc = func_80ACA418;
}

void func_80ACA3C0(EnTimeTag *this, GlobalContext *globalCtx) {
    if ((globalCtx->unk16808->unk1 == 0) && (globalCtx->msgCtx.unk11F22 == 0x1B)) {
        this->actor.home.rot.x = 5;
        this->actionFunc = func_80ACA348;
        globalCtx->msgCtx.unk11F10 = 0;
        globalCtx->msgCtx.unk11F22 = 0;
    }
}

void func_80ACA418(EnTimeTag *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a0_2;
    MessageContext *temp_a0;
    s8 temp_a0_3;
    u16 temp_v1;
    u8 temp_v0;

    temp_a0 = &globalCtx->msgCtx;
    globalCtx = globalCtx;
    temp_v0 = func_80152498(temp_a0);
    if (temp_v0 != 2) {
        temp_a0_2 = globalCtx;
        if (temp_v0 == 5) {
            globalCtx = globalCtx;
            if (func_80147624(temp_a0_2) != 0) {
                temp_v1 = globalCtx->msgCtx.unk11F04;
                if ((s32) temp_v1 >= 0x101F) {
                    if ((s32) temp_v1 >= 0x1020) {
                        switch (temp_v1) {
                        case 4651:
                            func_80152434(globalCtx, 0x3FU);
                            this->actionFunc = func_80ACA3C0;
                            this->actor.home.rot.z = 0;
                            break;
                        case 4654:
                            func_80152434(globalCtx, 0x40U);
                            this->actionFunc = func_80ACA3C0;
                            this->actor.home.rot.z = 1;
                            break;
                        }
                    } else if (temp_v1 != 0x101F) {

                    } else {
                    case 4650:
                    case 4656:
                        func_801477B4(globalCtx);
                        this->actionFunc = func_80ACA5F8;
                        temp_a0_3 = this->actor.cutscene;
                        if (ActorCutscene_GetCurrentIndex() == temp_a0_3) {
                            ActorCutscene_Stop((s16) temp_a0_3);
                        }
                    }
                } else if ((temp_v1 == 0x101C) || (temp_v1 == 0x101D) || (temp_v1 == 0x101E)) {
                case 4653:
                    func_80151938(globalCtx, (temp_v1 + 1) & 0xFFFF);
                }
            }
        }
    } else {
        this->actionFunc = func_80ACA5F8;
    }
    if (this->actor.home.rot.x != 0) {
        if (this->actor.cutscene == -1) {
            this->actor.home.rot.x = 0;
            return;
        }
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
            return;
        }
        if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
            ActorCutscene_Start((s16) this->actor.cutscene, &this->actor);
            this->actor.home.rot.x = 0;
            return;
        }
        ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        // Duplicate return node #26. Try simplifying control flow for better match
    }
}

void func_80ACA5F8(EnTimeTag *this, GlobalContext *globalCtx) {
    Actor *temp_v0;

    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        if (gSaveContext.playerForm == 2) {
            if ((this->actor.params & 0x7F) == 1) {
                func_801518B0(globalCtx, 0x101CU, &this->actor);
            } else {
                func_801518B0(globalCtx, 0x122BU, &this->actor);
            }
            this->actor.home.rot.x = 1;
        } else {
            func_801518B0(globalCtx, 0x122AU, &this->actor);
            temp_v0 = globalCtx->actorCtx.actorList[2].first->unkA80;
            temp_v0->unk264 = (u16) (temp_v0->unk264 | 4);
            func_800B86C8(&this->actor, globalCtx, globalCtx->actorCtx.actorList[2].first->unkA80);
            this->actor.home.rot.x = 0;
        }
        this->actionFunc = func_80ACA418;
        return;
    }
    if ((this->actor.xzDistToPlayer < 100.0f) && (Actor_IsLinkFacingActor(&this->actor, 0x3000, globalCtx) != 0)) {
        func_800B8614(&this->actor, globalCtx, 110.0f);
    }
}

void func_80ACA714(EnTimeTag *this, GlobalContext *globalCtx) {

}

void func_80ACA724(EnTimeTag *this, GlobalContext *globalCtx) {
    if (func_80152498(&globalCtx->msgCtx) == 5) {
        globalCtx->nextEntranceIndex = globalCtx->setupExitList[this->actor.params & 0x1F];
        globalCtx->sceneLoadFlag = 0x14;
        if (((s32) (this->actor.params & 0xE000) >> 0xD) == 0) {
            Audio_PlayActorSound2(&this->actor, 0x5802U);
        }
        this->actionFunc = func_80ACA714;
    }
}

void func_80ACA7C4(EnTimeTag *this, GlobalContext *globalCtx) {
    u8 temp_v0;

    temp_v0 = gSaveContext.weekEventReg[63];
    if (((temp_v0 & 1) == 0) && ((temp_v0 & 2) == 0)) {
        func_800B7298(globalCtx, &this->actor, 7U);
        func_801518B0(globalCtx, (((s32) (this->actor.params & 0x1FE0) >> 5) + 0x1883) & 0xFFFF, NULL);
        this->actionFunc = func_80ACA724;
    }
}

void func_80ACA840(EnTimeTag *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a0;
    f32 temp_f0;
    s32 temp_f16;
    s32 temp_hi;
    u16 temp_t0;
    u8 temp_v0;
    f32 phi_f0;

    if ((globalCtx->sceneNum != 0x61) || (gSaveContext.inventory.items[gItemSlots[0x2D]] != 0x2D)) {
        temp_t0 = gSaveContext.time;
        temp_f0 = (f32) temp_t0;
        phi_f0 = temp_f0;
        if ((s32) temp_t0 < 0) {
            phi_f0 = temp_f0 + 4294967296.0f;
        }
        temp_v0 = gSaveContext.weekEventReg[63];
        temp_f16 = (s32) (phi_f0 * 0.00036621094f);
        temp_hi = (s32) (phi_f0 * 0.021972656f) % 0x3C;
        if ((temp_v0 & 1) != 0) {
            if ((temp_v0 & 2) != 0) {
                this->actionFunc = func_80ACA7C4;
                return;
            }
            if (((s16) temp_f16 == this->actor.home.rot.x) && ((s16) temp_hi == this->actor.home.rot.y)) {
                gSaveContext.weekEventReg[63] = temp_v0 | 2;
                return;
            }
            // Duplicate return node #14. Try simplifying control flow for better match
            return;
        }
        if ((s16) temp_f16 == this->actor.home.rot.x) {
            temp_a0 = globalCtx;
            if ((s16) temp_hi == this->actor.home.rot.y) {
                globalCtx = globalCtx;
                if (func_801690CC(temp_a0) == 0) {
                    func_800B7298(globalCtx, &this->actor, 7U);
                    func_801518B0(globalCtx, (((s32) (this->actor.params & 0x1FE0) >> 5) + 0x1883) & 0xFFFF, NULL);
                    this->actionFunc = func_80ACA724;
                }
            }
        }
        // Duplicate return node #14. Try simplifying control flow for better match
    }
}

void EnTimeTag_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnTimeTag *this = (EnTimeTag *) thisx;
    this->actionFunc(this, globalCtx);
}

