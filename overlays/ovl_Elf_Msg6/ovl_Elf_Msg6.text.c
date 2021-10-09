struct _mips2c_stack_ElfMsg6_Destroy {};            /* size 0x0 */

struct _mips2c_stack_ElfMsg6_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ElfMsg6_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA15A0 {};              /* size 0x0 */

struct _mips2c_stack_func_80BA165C {};              /* size 0x0 */

struct _mips2c_stack_func_80BA16F4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA1C00 {};              /* size 0x0 */

struct _mips2c_stack_func_80BA1C88 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BA1CF8 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BA1E30 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BA1F80 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BA2038 {};              /* size 0x0 */

struct _mips2c_stack_func_80BA2048 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BA215C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA21C4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

s32 func_80BA15A0(SaveContext *);                   /* static */
void func_80BA165C();                               /* static */
s32 func_80BA16F4(ElfMsg6 *arg0, GlobalContext *arg1, ElfMsg6 *, GlobalContext *); /* static */
s32 func_80BA1C00(ElfMsg6 *arg0);                   /* static */
void func_80BA1C88(ElfMsg6 *arg0, GlobalContext *arg1, s16 arg2); /* static */
static InitChainEntry D_80BA2300[4];                /* unable to generate initializer */

s32 func_80BA15A0(void) {
    u32 temp_v0;

    temp_v0 = gSaveContext.inventory.questItems;
    if (((gBitFlags->unk_0 & temp_v0) != 0) && ((gSaveContext.weekEventReg[87] & 0x10) == 0)) {
        return 1;
    }
    if (((gBitFlags->unk_4 & temp_v0) != 0) && ((gSaveContext.weekEventReg[87] & 0x20) == 0)) {
        return 1;
    }
    if (((gBitFlags->unk_8 & temp_v0) != 0) && ((gSaveContext.weekEventReg[87] & 0x40) == 0)) {
        return 1;
    }
    if (((gBitFlags->unk_C & temp_v0) != 0) && ((gSaveContext.weekEventReg[87] & 0x80) == 0)) {
        return 1;
    }
    return 0;
}

void func_80BA165C(void) {
    u32 phi_v0;
    u32 phi_v0_2;

    if ((gBitFlags->unk_0 & gSaveContext.inventory.questItems) != 0) {
        gSaveContext.weekEventReg[87] |= 0x10;
    }
    phi_v0 = gSaveContext.inventory.questItems;
    if ((gBitFlags->unk_4 & gSaveContext.inventory.questItems) != 0) {
        gSaveContext.weekEventReg[87] |= 0x20;
        phi_v0 = gSaveContext.inventory.questItems;
    }
    phi_v0_2 = phi_v0;
    if ((gBitFlags->unk_8 & phi_v0) != 0) {
        gSaveContext.weekEventReg[87] |= 0x40;
        phi_v0_2 = gSaveContext.inventory.questItems;
    }
    if ((gBitFlags->unk_C & phi_v0_2) != 0) {
        gSaveContext.weekEventReg[87] |= 0x80;
    }
}

s32 func_80BA16F4(ElfMsg6 *arg0, GlobalContext *arg1) {
    u32 temp_v0;
    s32 phi_v0;

    if (((gSaveContext.weekEventReg[31] & 4) == 0) && (gSaveContext.inventory.items[gItemSlots[0x32]] == 0x32)) {
        arg0->actor.textId = 0x216;
        return 0;
    }
    if (func_80BA15A0(&gSaveContext) == 0) {
        return 1;
    }
    temp_v0 = gSaveContext.inventory.questItems;
    if ((gBitFlags->unk_0 & temp_v0) == 0) {
        arg0->actor.textId = 0x256;
        return 0;
    }
    if ((gBitFlags->unk_4 & temp_v0) == 0) {
        if ((gSaveContext.weekEventReg[31] & 1) != 0) {
            arg0->actor.textId = 0x257;
            return 0;
        }
        arg0->actor.textId = 0x231;
        return 0;
    }
    if ((gBitFlags->unk_8 & temp_v0) == 0) {
        if ((gSaveContext.weekEventReg[31] & 2) != 0) {
            arg0->actor.textId = 0x258;
            return 0;
        }
        arg0->actor.textId = 0x232;
        return 0;
    }
    phi_v0 = 1;
    if ((gBitFlags->unk_C & temp_v0) == 0) {
        phi_v0 = 0;
        if ((gSaveContext.weekEventReg[80] & 4) != 0) {
            arg0->actor.textId = 0x259;
            return 0;
        }
        arg0->actor.textId = 0x233;
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return phi_v0;
    }
    return phi_v0;
}

void ElfMsg6_Init(Actor *thisx, GlobalContext *globalCtx) {
    ElfMsg6 *temp_a0;
    ElfMsg6 *temp_a2;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v0_3;
    u32 temp_t6;
    s16 phi_v0;
    s16 phi_v0_2;
    Actor *phi_a2;
    Actor *phi_a2_2;
    ElfMsg6 *phi_a2_3;
    Actor *phi_a2_4;
    ElfMsg6 *this = (ElfMsg6 *) thisx;

    temp_a0 = this;
    this = this;
    globalCtx = globalCtx;
    Actor_ProcessInitChain((Actor *) temp_a0, D_80BA2300);
    temp_a2 = this;
    temp_v1 = temp_a2->actor.home.rot.x;
    phi_v0 = temp_v1;
    phi_a2 = (Actor *) temp_a2;
    phi_a2_2 = (Actor *) temp_a2;
    phi_a2_3 = temp_a2;
    if ((s32) temp_v1 < 0) {
        phi_v0 = (s16) -(s32) temp_v1;
    }
    if (phi_v0 == 0) {
        temp_a2->actor.scale.z = 0.4f;
        temp_a2->actor.scale.x = 0.4f;
    } else {
        phi_v0_2 = temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_v0_2 = (s16) -(s32) temp_v1;
        }
        temp_f0 = (f32) phi_v0_2 * 0.04f;
        temp_a2->actor.scale.z = temp_f0;
        temp_a2->actor.scale.x = temp_f0;
    }
    temp_v0 = temp_a2->actor.home.rot.z;
    if (temp_v0 == 0) {
        temp_a2->actor.scale.y = 0.4f;
    } else {
        temp_a2->actor.scale.y = (f32) temp_v0 * 0.04f;
    }
    temp_v1_2 = temp_a2->actor.params;
    temp_a2->actor.shape.rot.z = 0;
    temp_v0_2 = temp_a2->actor.shape.rot.z;
    temp_t6 = temp_v1_2 & 0xF;
    temp_a2->actor.shape.rot.y = temp_v0_2;
    temp_a2->actor.shape.rot.x = temp_v0_2;
    switch (temp_t6) {
    case 0:
        temp_a2->actionFunc = func_80BA1E30;
        this = temp_a2;
        if (func_80BA16F4(temp_a2, globalCtx, temp_a2, globalCtx) != 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        return;
    case 1:
        temp_a2->actionFunc = func_80BA1F80;
        if ((temp_a2->actor.cutscene == -1) || ((temp_a1 = (s32) (temp_a2->actor.params & 0xFE00) >> 9, (temp_a1 != 0x7F)) && (this = temp_a2, phi_a2 = (Actor *) this, phi_a2_2 = (Actor *) this, (Flags_GetSwitch(globalCtx, temp_a1) != 0)))) {
            Actor_MarkForDeath(phi_a2_2);
            return;
        }
        temp_v0_3 = (s32) (phi_a2->params & 0xF0) >> 4;
        if (temp_v0_3 != 0) {
            if (temp_v0_3 != 1) {
                return;
            }
            if ((gSaveContext.weekEventReg[83] & 2) != 0) {
                Actor_MarkForDeath(phi_a2);
                return;
            }
            /* Duplicate return node #47. Try simplifying control flow for better match */
            return;
        }
        if (gSaveContext.inventory.items[15] != 0xF) {
            Actor_MarkForDeath(phi_a2);
            return;
        }
        /* Duplicate return node #47. Try simplifying control flow for better match */
        return;
    case 2:
        if (gSaveContext.inventory.items[*gItemSlots] == 0) {
            Actor_MarkForDeath((Actor *) temp_a2);
            return;
        }
        if ((gSaveContext.weekEventReg[8] & 0x40) != 0) {
            if ((gSaveContext.weekEventReg[88] & 0x20) != 0) {
                Actor_MarkForDeath((Actor *) temp_a2);
                return;
            }
            temp_a2->actor.textId = 0x25B;
            goto block_35;
        }
        if (((gSaveContext.weekEventReg[74] & 0x20) == 0) || ((gSaveContext.weekEventReg[79] & 0x10) != 0)) {
            Actor_MarkForDeath((Actor *) temp_a2);
            return;
        }
        temp_a2->actor.textId = 0x224;
block_35:
        temp_a2->actionFunc = func_80BA1CF8;
        return;
    case 3:
        temp_a1_2 = (s32) (temp_v1_2 & 0xFE00) >> 9;
        if (((temp_a1_2 != 0x7F) && (this = temp_a2, phi_a2_3 = this, phi_a2_4 = (Actor *) this, (Flags_GetSwitch(globalCtx, temp_a1_2) != 0))) || (phi_a2_4 = (Actor *) phi_a2_3, ((gSaveContext.weekEventReg[88] & 0x10) != 0)) || ((gSaveContext.weekEventReg[91] & 1) != 0) || (gSaveContext.inventory.items[gItemSlots[0x34]] == 0x34)) {
            Actor_MarkForDeath(phi_a2_4);
            return;
        }
        phi_a2_3->actionFunc = func_80BA2048;
        phi_a2_3->actor.textId = 0x24D;
        return;
    case 4:
        temp_a2->actionFunc = func_80BA215C;
        temp_a2->actor.textId = 0x255;
        return;
    case 5:
        temp_a2->actionFunc = func_80BA21C4;
        temp_a2->actor.textId = 0x25E;
        return;
    case 6:
        temp_a2->actionFunc = func_80BA21C4;
        temp_a2->actor.textId = 0x25F;
        return;
    default:
        temp_a2->actionFunc = func_80BA2038;
        /* Duplicate return node #47. Try simplifying control flow for better match */
        return;
    }
}

void ElfMsg6_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ElfMsg6 *this = (ElfMsg6 *) thisx;

}

s32 func_80BA1C00(ElfMsg6 *arg0) {
    f32 temp_f0;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;

    phi_v0 = 0;
    phi_v0_2 = 0;
    phi_v0_3 = 0;
    if (arg0->actor.xzDistToPlayer < (100.0f * arg0->actor.scale.x)) {
        phi_v0 = 1;
    }
    phi_v0_3 = phi_v0;
    if (phi_v0 != 0) {
        temp_f0 = arg0->actor.yDistToPlayer;
        if (temp_f0 >= 0.0f) {
            phi_v0_2 = 1;
        }
        phi_v0_3 = phi_v0_2;
        if ((phi_v0_2 != 0) && (temp_f0 < (100.0f * arg0->actor.scale.y))) {
            phi_v0_3 = 1;
        }
    }
    return phi_v0_3;
}

void func_80BA1C88(ElfMsg6 *arg0, GlobalContext *arg1, s16 arg2) {
    void *sp18;
    void *temp_v0;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    temp_v0 = temp_v1->unk_A80;
    if (temp_v0 != 0) {
        temp_v1->unk_A84 = arg2;
        sp18 = temp_v0;
        arg0 = arg0;
        ActorCutscene_SetIntentToPlay(0x7C);
        sp18->unk_230 = arg0;
        if (arg0->actor.cutscene == -1) {
            arg0->actor.cutscene = 0x7C;
        }
    }
}

void func_80BA1CF8(ElfMsg6 *this, GlobalContext *globalCtx) {
    Actor *sp24;
    void *sp20;
    Actor *temp_v1;
    u16 temp_v0_2;
    void *temp_v0;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = temp_v1->unk_A80;
    sp20 = temp_v0;
    if (temp_v0 != 0) {
        sp24 = temp_v1;
        if (func_800B84D0((Actor *) this, globalCtx) != 0) {
            temp_v0_2 = this->actor.textId;
            if (temp_v0_2 != 0x224) {
                if (temp_v0_2 != 0x25B) {

                } else {
                    gSaveContext.weekEventReg[88] |= 0x20;
                }
            } else {
                gSaveContext.weekEventReg[79] |= 0x10;
            }
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        if ((this->actor.textId == 0x224) && ((gSaveContext.weekEventReg[8] & 0x40) != 0)) {
            this->actor.textId = 0x25B;
            return;
        }
        sp24 = temp_v1;
        if ((func_80BA1C00(this) != 0) && (temp_v1->speedXZ > 1.0f)) {
            temp_v1->unk_A84 = (s16) -(s32) this->actor.textId;
            ActorCutscene_SetIntentToPlay(0x7C);
            sp20->unk_230 = this;
            if (this->actor.cutscene == -1) {
                this->actor.cutscene = 0x7C;
            }
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
    }
}

void func_80BA1E30(ElfMsg6 *this, GlobalContext *globalCtx) {
    Actor *sp24;
    void *sp20;
    Actor *temp_v1;
    u16 temp_v0_2;
    void *temp_v0;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = temp_v1->unk_A80;
    sp20 = temp_v0;
    if (temp_v0 != 0) {
        sp24 = temp_v1;
        if (func_800B84D0((Actor *) this, globalCtx) != 0) {
            temp_v0_2 = this->actor.textId;
            if (temp_v0_2 != 0x216) {
                if (temp_v0_2 != 0x231) {
                    if (temp_v0_2 != 0x232) {
                        if (temp_v0_2 != 0x233) {

                        } else {
                            gSaveContext.weekEventReg[80] |= 4;
                        }
                    } else {
                        gSaveContext.weekEventReg[31] |= 2;
                    }
                } else {
                    gSaveContext.weekEventReg[31] |= 1;
                }
            } else {
                gSaveContext.weekEventReg[31] |= 4;
            }
            func_80BA165C();
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        sp24 = temp_v1;
        if ((func_80BA1C00(this) != 0) && (temp_v1->speedXZ > 1.0f)) {
            temp_v1->unk_A84 = (s16) -(s32) this->actor.textId;
            ActorCutscene_SetIntentToPlay(0x7C);
            sp20->unk_230 = this;
            if (this->actor.cutscene == -1) {
                this->actor.cutscene = 0x7C;
            }
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
    }
}

void func_80BA1F80(ElfMsg6 *this, GlobalContext *globalCtx) {
    if ((((s32) (this->actor.params & 0xF0) >> 4) == 1) && ((gSaveContext.weekEventReg[83] & 2) != 0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (func_80BA1C00(this) != 0) {
        if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, NULL);
            Actor_SetSwitchFlag(globalCtx, (s32) (this->actor.params & 0xFE00) >> 9);
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_80BA2038(ElfMsg6 *this, GlobalContext *globalCtx) {

}

void func_80BA2048(ElfMsg6 *this, GlobalContext *globalCtx) {
    s32 temp_a1;
    s32 temp_a1_2;
    void *temp_v0;

    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        temp_v0 = globalCtx->actorCtx.actorList[2].first->unk_A80;
        temp_v0->unk_264 = (u16) (temp_v0->unk_264 | 0x20);
        temp_a1 = (s32) (this->actor.params & 0xFE00) >> 9;
        if (temp_a1 != 0x7F) {
            Actor_SetSwitchFlag(globalCtx, temp_a1);
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_a1_2 = (s32) (this->actor.params & 0xFE00) >> 9;
    if (((temp_a1_2 != 0x7F) && (Flags_GetSwitch(globalCtx, temp_a1_2) != 0)) || ((gSaveContext.weekEventReg[88] & 0x10) != 0) || ((gSaveContext.weekEventReg[91] & 1) != 0) || (gSaveContext.inventory.items[gItemSlots[0x34]] == 0x34)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (func_80BA1C00(this) != 0) {
        func_80BA1C88(this, globalCtx, 0x24D);
    }
}

void func_80BA215C(ElfMsg6 *this, GlobalContext *globalCtx) {
    ElfMsg6 *temp_a0;

    temp_a0 = this;
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        Actor_MarkForDeath((Actor *) temp_a0);
        return;
    }
    this = temp_a0;
    if (func_80BA1C00(temp_a0) != 0) {
        func_80BA1C88(this, globalCtx, (s16) ((s32) this->actor.textId * -1));
    }
}

void func_80BA21C4(ElfMsg6 *this, GlobalContext *globalCtx) {
    s32 temp_a1;
    s32 temp_a1_2;
    void *temp_v0;

    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        temp_v0 = globalCtx->actorCtx.actorList[2].first->unk_A80;
        temp_v0->unk_264 = (u16) (temp_v0->unk_264 | 0x20);
        temp_a1 = (s32) (this->actor.params & 0xFE00) >> 9;
        if (temp_a1 != 0x7F) {
            Actor_SetSwitchFlag(globalCtx, temp_a1);
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_a1_2 = (s32) (this->actor.params & 0xFE00) >> 9;
    if (((temp_a1_2 != 0x7F) && (Flags_GetSwitch(globalCtx, temp_a1_2) != 0)) || ((*(gBitFlags + 0x38) & gSaveContext.inventory.questItems) != 0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (func_80BA1C00(this) != 0) {
        func_80BA1C88(this, globalCtx, (s16) this->actor.textId);
    }
}

void ElfMsg6_Update(Actor *thisx, GlobalContext *globalCtx) {
    ElfMsg6 *this = (ElfMsg6 *) thisx;
    this->actionFunc(this, globalCtx);
}
