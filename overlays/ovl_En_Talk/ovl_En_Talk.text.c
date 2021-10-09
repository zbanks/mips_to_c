

void EnTalk_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnTalk *this = (EnTalk *) thisx;
    s8 temp_v0;

    temp_v0 = this->actor.home.rot.x - 1;
    if (((s32) temp_v0 >= 0) && ((s32) temp_v0 < 7)) {
        this->actor.targetMode = temp_v0;
    }
    Actor_SetScale(&this->actor, 1.0f);
    this->actionFunc = func_80BDE090;
    this->actor.textId = (this->actor.params & 0x3F) + 0x1C00;
}

void EnTalk_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTalk *this = (EnTalk *) thisx;

}

void func_80BDE058(EnTalk *this, GlobalContext *globalCtx) {
    if (func_800B867C(&this->actor, globalCtx) != 0) {
        this->actionFunc = func_80BDE090;
    }
}

void func_80BDE090(EnTalk *this, GlobalContext *globalCtx) {
    EnTalk *temp_a0;
    EnTalk *phi_a0;
    Actor *phi_a0_2;

    temp_a0 = this;
    phi_a0 = temp_a0;
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        temp_a0->actionFunc = func_80BDE058;
        return;
    }
    if (((temp_a0->actor.xzDistToPlayer < 40.0f) && (this = temp_a0, phi_a0 = this, phi_a0_2 = &this->actor, (Actor_IsLinkFacingActor(&temp_a0->actor, 0x3000, globalCtx) != 0))) || (phi_a0_2 = &phi_a0->actor, (phi_a0->actor.isTargeted != 0))) {
        func_800B8614(phi_a0_2, globalCtx, 120.0f);
    }
}

void EnTalk_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnTalk *this = (EnTalk *) thisx;
    this->actionFunc(this, globalCtx);
}

