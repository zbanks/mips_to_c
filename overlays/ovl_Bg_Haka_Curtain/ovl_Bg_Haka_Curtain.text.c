void func_80B6DD80(BgHakaCurtain *arg0);            /* static */
extern Gfx D_06001410;
extern CollisionHeader D_06001588;
static InitChainEntry D_80B6DFA0;                   /* unable to generate initializer */



void BgHakaCurtain_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgHakaCurtain *this = (BgHakaCurtain *) thisx;
    Actor_ProcessInitChain(&this->dyna.actor, &D_80B6DFA0);
    BcCheck3_BgActorInit(&this->dyna, 1);
    BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_06001588);
    if (Actor_GetRoomCleared(globalCtx, (u32) this->dyna.actor.room) != 0) {
        func_80B6DE80(this);
        return;
    }
    func_80B6DC98(this);
}

void BgHakaCurtain_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgHakaCurtain *this = (BgHakaCurtain *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void func_80B6DC98(BgHakaCurtain *this) {
    this->actionFunc = func_80B6DCAC;
}

void func_80B6DCAC(BgHakaCurtain *this, GlobalContext *globalCtx) {
    if (Actor_GetRoomCleared(globalCtx, (u32) this->dyna.actor.room) != 0) {
        func_80B6DCEC(this);
    }
}

void func_80B6DCEC(BgHakaCurtain *this) {
    this->actionFunc = func_80B6DD00;
}

void func_80B6DD00(BgHakaCurtain *this, GlobalContext *globalCtx) {
    BgHakaCurtain *temp_a1;
    s8 temp_a0;
    s8 temp_a0_2;

    temp_a0 = this->dyna.actor.cutscene;
    this = this;
    temp_a1 = this;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        temp_a0_2 = temp_a1->dyna.actor.cutscene;
        this = temp_a1;
        ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a0_2, &temp_a1->dyna.actor);
        func_80B6DD5C(this);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a1->dyna.actor.cutscene);
}

void func_80B6DD5C(BgHakaCurtain *this) {
    this->actionFunc = func_80B6DD70;
}

void func_80B6DD70(BgHakaCurtain *this, GlobalContext *globalCtx) {

}

void func_80B6DD80(BgHakaCurtain *arg0) {
    arg0->actionFunc = func_80B6DD9C;
    arg0->dyna.actor.velocity.y = 0.0f;
}

void func_80B6DD9C(BgHakaCurtain *this, GlobalContext *globalCtx) {
    f32 *temp_a0;
    f32 *temp_a0_2;

    temp_a0 = &this->dyna.actor.velocity.y;
    if (this->dyna.actor.world.pos.y < ((this->dyna.actor.home.pos.y + 150.0f) - 30.0f)) {
        temp_a0_2 = &this->dyna.actor.velocity.y;
        this = this;
        Math_StepToF(temp_a0_2, 1.6f, 0.12f);
    } else {
        this = this;
        Math_StepToF(temp_a0, 0.8f, 0.05f);
    }
    this->dyna.actor.world.pos.y += this->dyna.actor.velocity.y;
    if ((this->dyna.actor.home.pos.y + 150.0f) < this->dyna.actor.world.pos.y) {
        func_80B6DE80(this);
        return;
    }
    func_800B9010(&this->dyna.actor, 0x218DU);
}

void func_80B6DE80(BgHakaCurtain *this) {
    this->actionFunc = func_80B6DEA8;
    this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y + 150.0f;
}

void func_80B6DEA8(BgHakaCurtain *this, GlobalContext *globalCtx) {

}

void BgHakaCurtain_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgHakaCurtain *this = (BgHakaCurtain *) thisx;
    CsCmdActorAction *temp_v1;

    if (func_800EE29C(globalCtx, 0x1D5U) != 0) {
        temp_v1 = globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x1D5U)];
        if ((globalCtx->csCtx.frames == temp_v1->startFrame) && (temp_v1->unk0 == 2)) {
            func_80B6DD80(this);
        }
    }
    this->actionFunc(this, globalCtx);
}

void BgHakaCurtain_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgHakaCurtain *this = (BgHakaCurtain *) thisx;
    func_800BDFC0(globalCtx, &D_06001410);
}

