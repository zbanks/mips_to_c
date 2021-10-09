struct _mips2c_stack_EnFr_Destroy {};               /* size 0x0 */

struct _mips2c_stack_EnFr_Init {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnFr_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void EnFr_Init(EnFr *this, GlobalContext *globalCtx) {
    s16 temp_a1;
    EnFr *this = (EnFr *) thisx;

    temp_a1 = this->actor.params;
    this = this;
    if (Flags_GetSwitch(globalCtx, temp_a1 & 0x7F) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->actor.targetMode = ((s32) this->actor.params >> 7) & 0xF;
}

void EnFr_Destroy(EnFr *this, GlobalContext *globalCtx) {
    EnFr *this = (EnFr *) thisx;

}

void EnFr_Update(EnFr *this, GlobalContext *globalCtx) {
    s16 temp_a1;
    s16 temp_v0;
    EnFr *this = (EnFr *) thisx;

    temp_a1 = this->actor.params;
    this = this;
    if (Flags_GetSwitch(globalCtx, temp_a1 & 0x7F) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_v0 = gGameInfo->data[893];
    if (this->actor.xyzDistToPlayerSq < (f32) (temp_v0 * temp_v0)) {
        this->actor.flags &= 0xBFFFFFFF;
        return;
    }
    this->actor.flags |= 0x40000000;
}
