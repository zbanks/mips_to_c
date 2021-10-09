void EnOkarinaEffect_SetupAction(EnOkarinaEffect *arg0, void (*arg1)(EnOkarinaEffect *, GlobalContext *), EnOkarinaEffect *); /* static */



void EnOkarinaEffect_SetupAction(EnOkarinaEffect *arg0, void (*arg1)(EnOkarinaEffect *, GlobalContext *)) {
    arg0->actionFunc = arg1;
}

void EnOkarinaEffect_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnOkarinaEffect *this = (EnOkarinaEffect *) thisx;

}

void EnOkarinaEffect_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnOkarinaEffect *this = (EnOkarinaEffect *) thisx;
    if (globalCtx->envCtx.unk_F2[1] != 0) {
        Actor_MarkForDeath(&this->actor);
    }
    EnOkarinaEffect_SetupAction(this, func_8096B104);
}

void func_8096B104(EnOkarinaEffect *this, GlobalContext *globalCtx) {
    this->unk144 = 0x50;
    globalCtx->envCtx.unk_F2[4] = 0x3C;
    D_801F4E70 = 501.0f;
    globalCtx->envCtx.unk_E3 = 2;
    func_800FD78C(globalCtx);
    EnOkarinaEffect_SetupAction(this, func_8096B174);
}

void func_8096B174(EnOkarinaEffect *this, GlobalContext *globalCtx) {
    u16 temp_v0;

    temp_v0 = this->unk144;
    if (temp_v0 != 0) {
        this->unk144 = temp_v0 - 1;
    }
    if ((globalCtx->pauseCtx.state == 0) && (globalCtx->gameOverCtx.state == 0) && (globalCtx->msgCtx.unk11F10 == 0)) {
        this = this;
        if ((FrameAdvance_IsEnabled(globalCtx) == 0) && (this->unk144 == 0)) {
            EnOkarinaEffect_SetupAction(this, func_8096B1FC, this);
        }
    }
}

void func_8096B1FC(EnOkarinaEffect *this, GlobalContext *globalCtx) {
    u8 temp_t8;
    u8 temp_v1;

    temp_v1 = globalCtx->envCtx.unk_F2[4];
    if (temp_v1 != 0) {
        temp_t8 = temp_v1 - 1;
        if (((globalCtx->state.frames & 3) == 0) && (globalCtx->envCtx.unk_F2[4] = temp_t8, ((temp_t8 & 0xFF) == 8))) {
            func_800FD858(globalCtx);
            return;
        }
        // Duplicate return node #5. Try simplifying control flow for better match
        return;
    }
    Actor_MarkForDeath(&this->actor);
}

void EnOkarinaEffect_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnOkarinaEffect *this = (EnOkarinaEffect *) thisx;
    this->actionFunc(this, globalCtx);
}

