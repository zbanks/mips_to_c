

void EnFr_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnFr *this = (EnFr *) thisx;
    s16 temp_a1;

    temp_a1 = this->actor.params;
    this = this;
    if (Flags_GetSwitch(globalCtx, temp_a1 & 0x7F) != 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->actor.targetMode = ((s32) this->actor.params >> 7) & 0xF;
}

void EnFr_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnFr *this = (EnFr *) thisx;

}

void EnFr_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnFr *this = (EnFr *) thisx;
    s16 temp_a1;
    s16 temp_v0;

    temp_a1 = this->actor.params;
    this = this;
    if (Flags_GetSwitch(globalCtx, temp_a1 & 0x7F) != 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    temp_v0 = gGameInfo->data[893];
    if (this->actor.xyzDistToPlayerSq < (f32) (temp_v0 * temp_v0)) {
        this->actor.flags &= 0xBFFFFFFF;
        return;
    }
    this->actor.flags |= 0x40000000;
}

