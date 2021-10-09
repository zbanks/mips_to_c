extern CollisionHeader D_060001D8;
extern CollisionHeader D_06000408;
extern CollisionHeader D_06000638;
extern CollisionHeader D_06000868;
static InitChainEntry D_80A4DE40;                   /* unable to generate initializer */
static ? D_80A4DE44;                                /* unable to generate initializer */



void BgLadder_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgLadder *this = (BgLadder *) thisx;
    s16 temp_v0;

    Actor_ProcessInitChain(&this->dyna.actor, &D_80A4DE40);
    this->switchFlag = ((s32) this->dyna.actor.params >> 8) & 0xFF;
    this->dyna.actor.params &= 0xFF;
    BcCheck3_BgActorInit(&this->dyna, 0);
    temp_v0 = this->dyna.actor.params;
    if (temp_v0 == 0) {
        BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_060001D8);
        goto block_9;
    }
    if (temp_v0 == 1) {
        BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_06000408);
        goto block_9;
    }
    if (temp_v0 == 2) {
        BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_06000638);
        goto block_9;
    }
    if (temp_v0 == 3) {
        BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_06000868);
block_9:
        if (Flags_GetSwitch(globalCtx, (s32) this->switchFlag) != 0) {
            this->alpha = 0xFF;
            this->dyna.actor.flags &= -0x11;
            this->action = BgLadder_ActionIdle;
            return;
        }
        this->alpha = 5;
        func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
        this->dyna.actor.draw = NULL;
        this->action = BgLadder_ActionWait;
        return;
    }
    Actor_MarkForDeath(&this->dyna.actor);
}

void BgLadder_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgLadder *this = (BgLadder *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void BgLadder_ActionWait(BgLadder *this, GlobalContext *globalCtx) {
    BgLadder *self = (BgLadder *) this;
    if (Flags_GetSwitch(globalCtx, (s32) self->switchFlag) != 0) {
        ActorCutscene_SetIntentToPlay((s16) self->dyna.actor.cutscene);
        self->action = BgLadder_ActionStartCutscene;
    }
}

void BgLadder_ActionStartCutscene(BgLadder *this, GlobalContext *globalCtx) {
    BgLadder *self = (BgLadder *) this;
    if (ActorCutscene_GetCanPlayNext((s16) self->dyna.actor.cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) self->dyna.actor.cutscene, &self->dyna.actor);
        self->dyna.actor.draw = BgLadder_Draw;
        Audio_PlayActorSound2(&self->dyna.actor, 0x2997U);
        self->action = BgLadder_ActionFadeIn;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) self->dyna.actor.cutscene);
}

void BgLadder_ActionFadeIn(BgLadder *this, GlobalContext *globalCtx) {
    BgLadder *self = (BgLadder *) this;
    s8 temp_a0;

    self->alpha += 5;
    if ((s32) self->alpha >= 0xFF) {
        self->alpha = 0xFF;
        temp_a0 = self->dyna.actor.cutscene;
        self = self;
        ActorCutscene_Stop((s16) temp_a0);
        func_800C6314(globalCtx, &globalCtx->colCtx.dyna, self->dyna.bgId);
        self->action = BgLadder_ActionIdle;
        self->dyna.actor.flags &= -0x11;
    }
}

void BgLadder_ActionIdle(BgLadder *this, GlobalContext *globalCtx) {
    BgLadder *self = (BgLadder *) this;

}

void BgLadder_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgLadder *this = (BgLadder *) thisx;
    this->action(this, globalCtx);
}

void BgLadder_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgLadder *this = (BgLadder *) thisx;
    Gfx *sp1C;
    GraphicsContext *sp18;
    GraphicsContext *temp_a3;
    Gfx *phi_v1;

    temp_a3 = globalCtx->state.gfxCtx;
    if (this->alpha == 0xFF) {
        sp18 = temp_a3;
        Scene_SetRenderModeXlu(globalCtx, 0, 1U);
        phi_v1 = temp_a3->polyOpa.p;
    } else {
        sp18 = temp_a3;
        Scene_SetRenderModeXlu(globalCtx, 1, 2U);
        phi_v1 = temp_a3->polyXlu.p;
    }
    phi_v1->words.w0 = 0xDE000000;
    phi_v1->words.w1 = sSetupDL + 0x4B0;
    phi_v1->unk8 = 0xFB000000;
    phi_v1->unkC = (s32) ((this->alpha & 0xFF) | ~0xFF);
    phi_v1->unk10 = 0xDA380003;
    sp18 = globalCtx->state.gfxCtx;
    sp1C = phi_v1;
    phi_v1->unk14 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    phi_v1->unk18 = 0xDE000000;
    phi_v1->unk1C = (s32) *(&D_80A4DE44 + (this->dyna.actor.params * 4));
    if (this->alpha == 0xFF) {
        globalCtx->state.gfxCtx->polyOpa.p = phi_v1 + 0x20;
        return;
    }
    globalCtx->state.gfxCtx->polyXlu.p = phi_v1 + 0x20;
}

