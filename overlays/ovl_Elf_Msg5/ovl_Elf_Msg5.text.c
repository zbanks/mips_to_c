s32 func_80AFD990(Actor *arg0, GlobalContext *arg1); /* static */
static InitChainEntry D_80AFDBD0;                   /* unable to generate initializer */



s32 func_80AFD990(Actor *arg0, GlobalContext *arg1) {
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

void ElfMsg5_Init(Actor *thisx, GlobalContext *globalCtx) {
    ElfMsg5 *this = (ElfMsg5 *) thisx;
    ElfMsg5 *temp_a0;
    s16 temp_v0;

    temp_a0 = this;
    if (func_80AFD990() == 0) {
        this = temp_a0;
        Actor_ProcessInitChain(&temp_a0->actor, &D_80AFDBD0);
        this->actor.shape.rot.z = 0;
        temp_v0 = this->actor.shape.rot.z;
        this->actionFunc = func_80AFDB38;
        this->actor.home.rot.x = -0x961;
        this->actor.shape.rot.y = temp_v0;
        this->actor.shape.rot.x = temp_v0;
    }
}

void ElfMsg5_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ElfMsg5 *this = (ElfMsg5 *) thisx;

}

void func_80AFDB38(ElfMsg5 *this, GlobalContext *globalCtx) {

}

void ElfMsg5_Update(Actor *thisx, GlobalContext *globalCtx) {
    ElfMsg5 *this = (ElfMsg5 *) thisx;
    s16 temp_v0;

    temp_v0 = this->actor.home.rot.y;
    if (((s32) temp_v0 >= 0) || ((s32) temp_v0 < -0x80) || (this = this, (Flags_GetSwitch(globalCtx, -1 - temp_v0) != 0))) {
        this->actionFunc(this, globalCtx, this);
    }
}

