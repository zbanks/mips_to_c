struct _mips2c_stack_ElfMsg2_Destroy {};            /* size 0x0 */

struct _mips2c_stack_ElfMsg2_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ElfMsg2_SetupAction {};        /* size 0x0 */

struct _mips2c_stack_ElfMsg2_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8096EC4C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8096EE50 {};              /* size 0x0 */

struct _mips2c_stack_func_8096EE64 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8096EF98 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8096EFD0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

s32 func_8096EC4C(Actor *arg0, GlobalContext *arg1); /* static */
u16 func_8096EE50(ElfMsg2 *arg0);                   /* static */
void func_8096EE64(Actor *arg0, GlobalContext *arg1); /* static */
void func_8096EF98(ElfMsg2 *this, GlobalContext *globalCtx); /* static */
static InitChainEntry D_8096F0B0[4];                /* unable to generate initializer */

void ElfMsg2_SetupAction(ElfMsg2 *this, void (*actionFunc)(ElfMsg2 *, GlobalContext *)) {
    this->actionFunc = actionFunc;
}

s32 func_8096EC4C(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0;
    s16 temp_v0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    Actor *phi_a2;
    GlobalContext *phi_a3;

    temp_v0 = arg0->home.rot.y;
    if (((s32) temp_v0 > 0) && (temp_a0 = arg1, (((s32) temp_v0 < 0x81) != 0)) && (arg0 = arg0, arg1 = arg1, (Flags_GetSwitch(temp_a0, temp_v0 - 1) != 0))) {
        temp_a1 = ((s32) arg0->params >> 8) & 0x7F;
        if (temp_a1 != 0x7F) {
            arg0 = arg0;
            Actor_SetSwitchFlag(arg1, temp_a1);
        }
        Actor_MarkForDeath(arg0);
        return 1;
    }
    phi_a2 = arg0;
    phi_a3 = arg1;
    if ((arg0->home.rot.y == 0x81) && (arg1 = arg1, arg0 = arg0, phi_a2 = arg0, phi_a3 = arg1, (Actor_GetRoomCleared(arg1, (u32) arg0->room) != 0))) {
        temp_a1_2 = ((s32) arg0->params >> 8) & 0x7F;
        if (temp_a1_2 != 0x7F) {
            arg0 = arg0;
            Actor_SetSwitchFlag(arg1, temp_a1_2);
        }
        Actor_MarkForDeath(arg0);
        return 1;
    }
    temp_a1_3 = ((s32) phi_a2->params >> 8) & 0x7F;
    if (temp_a1_3 == 0x7F) {
        goto block_15;
    }
    arg0 = phi_a2;
    if (Flags_GetSwitch(phi_a3, temp_a1_3) != 0) {
        Actor_MarkForDeath(arg0);
        return 1;
    }
block_15:
    return 0;
}

void ElfMsg2_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    ElfMsg2 *this = (ElfMsg2 *) thisx;

    if (func_8096EC4C((Actor *) this) == 0) {
        temp_v0 = this->actor.home.rot.x;
        if (((s32) temp_v0 > 0) && ((s32) temp_v0 < 8)) {
            this->actor.targetMode = temp_v0 - 1;
        }
        Actor_ProcessInitChain((Actor *) this, D_8096F0B0);
        if ((s32) this->actor.home.rot.y < 0) {
            ElfMsg2_SetupAction(this, func_8096EFD0);
        } else {
            ElfMsg2_SetupAction(this, func_8096EF98);
            this->actor.flags |= 0x40001;
            this->actor.textId = func_8096EE50(this);
        }
        this->actor.shape.rot.z = 0;
        temp_v0_2 = this->actor.shape.rot.z;
        this->actor.shape.rot.y = temp_v0_2;
        this->actor.shape.rot.x = temp_v0_2;
    }
}

void ElfMsg2_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ElfMsg2 *this = (ElfMsg2 *) thisx;

}

u16 func_8096EE50(ElfMsg2 *arg0) {
    return (arg0->actor.params & 0xFF) + 0x200;
}

void func_8096EE64(Actor *arg0, GlobalContext *arg1) {
    s32 temp_a1;
    s8 temp_a0;

    if (func_800B867C(arg0, arg1) != 0) {
        if (arg0->cutscene != -1) {
            temp_a0 = arg0->cutscene;
            if (ActorCutscene_GetCurrentIndex() == temp_a0) {
                ActorCutscene_Stop((s16) temp_a0);
            }
        }
        if (arg0->home.rot.z != 1) {
            Actor_MarkForDeath(arg0);
            temp_a1 = ((s32) arg0->params >> 8) & 0x7F;
            if (temp_a1 != 0x7F) {
                Actor_SetSwitchFlag(arg1, temp_a1);
                return;
            }
            /* Duplicate return node #15. Try simplifying control flow for better match */
            return;
        }
        ElfMsg2_SetupAction((ElfMsg2 *) arg0, func_8096EF98);
        return;
    }
    if ((arg0->cutscene != -1) && (ActorCutscene_GetCurrentIndex() != arg0->cutscene)) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
            return;
        }
        if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
            ActorCutscene_Start((s16) arg0->cutscene, arg0);
            return;
        }
        ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
        /* Duplicate return node #15. Try simplifying control flow for better match */
    }
}

void func_8096EF98(ElfMsg2 *this, GlobalContext *globalCtx) {
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        ElfMsg2_SetupAction(this, (void (*)(ElfMsg2 *, GlobalContext *)) func_8096EE64);
    }
}

void func_8096EFD0(ElfMsg2 *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->actor.home.rot.y;
    if (((s32) temp_v0 < 0) && ((s32) temp_v0 >= -0x80) && (Flags_GetSwitch(globalCtx, -1 - temp_v0) != 0)) {
        ElfMsg2_SetupAction(this, func_8096EF98);
        this->actor.flags |= 0x40001;
        this->actor.textId = func_8096EE50(this);
    }
}

void ElfMsg2_Update(Actor *thisx, GlobalContext *globalCtx) {
    ElfMsg2 *this = (ElfMsg2 *) thisx;
    if (func_8096EC4C((Actor *) globalCtx) == 0) {
        this->actionFunc(this, globalCtx);
    }
}
