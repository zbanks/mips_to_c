struct _mips2c_stack_EnTalk_Destroy {};             /* size 0x0 */

struct _mips2c_stack_EnTalk_Init {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTalk_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BDE058 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BDE090 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void EnTalk_Init(EnTalk *this, GlobalContext *globalCtx) {
    s8 temp_v0;
    EnTalk *this = (EnTalk *) thisx;

    temp_v0 = this->actor.home.rot.x - 1;
    if (((s32) temp_v0 >= 0) && ((s32) temp_v0 < 7)) {
        this->actor.targetMode = temp_v0;
    }
    Actor_SetScale((Actor *) this, 1.0f);
    this->actionFunc = func_80BDE090;
    this->actor.textId = (this->actor.params & 0x3F) + 0x1C00;
}

void EnTalk_Destroy(EnTalk *this, GlobalContext *globalCtx) {
    EnTalk *this = (EnTalk *) thisx;

}

void func_80BDE058(EnTalk *this, GlobalContext *globalCtx) {
    if (func_800B867C((Actor *) this, globalCtx) != 0) {
        this->actionFunc = func_80BDE090;
    }
}

void func_80BDE090(EnTalk *this, GlobalContext *globalCtx) {
    EnTalk *temp_a0;
    EnTalk *phi_a0;
    Actor *phi_a0_2;

    temp_a0 = this;
    phi_a0 = temp_a0;
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        temp_a0->actionFunc = func_80BDE058;
        return;
    }
    if (((temp_a0->actor.xzDistToPlayer < 40.0f) && (this = temp_a0, phi_a0 = this, phi_a0_2 = (Actor *) this, (Actor_IsLinkFacingActor((Actor *) temp_a0, 0x3000, globalCtx) != 0))) || (phi_a0_2 = (Actor *) phi_a0, (phi_a0->actor.isTargeted != 0))) {
        func_800B8614(phi_a0_2, globalCtx, 120.0f);
    }
}

void EnTalk_Update(EnTalk *this, GlobalContext *globalCtx) {
    EnTalk *this = (EnTalk *) thisx;
    this->actionFunc(this, globalCtx);
}
