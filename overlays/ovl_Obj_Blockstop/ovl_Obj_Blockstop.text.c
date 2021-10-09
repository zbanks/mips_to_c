void func_809467E8(ObjBlockstop *this, GlobalContext *globalCtx); /* static */



void ObjBlockstop_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjBlockstop *this = (ObjBlockstop *) thisx;
    if (Flags_GetSwitch(globalCtx, (s32) this->actor.params) != 0) {
        Actor_MarkForDeath(&this->actor);
    }
    this->actionFunc = func_809466F0;
}

void func_809466F0(ObjBlockstop *this, GlobalContext *globalCtx) {
    Actor *temp_s0;
    Actor *temp_s0_2;
    Actor *phi_s0;

    temp_s0 = globalCtx->actorCtx.actorList[6].first;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
        do {
            if ((phi_s0->id == 0x7A) && (fabsf(phi_s0->world.pos.x - this->actor.world.pos.x) < 20.0f) && (fabsf(phi_s0->world.pos.z - this->actor.world.pos.z) < 20.0f) && (fabsf(phi_s0->world.pos.y - this->actor.world.pos.y) < 20.0f) && ((phi_s0->params & 0xF) < 3)) {
                ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
                this->actionFunc = func_809467E8;
            }
            temp_s0_2 = phi_s0->next;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 0);
    }
}

void func_809467E8(ObjBlockstop *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
        Actor_SetSwitchFlag(globalCtx, (s32) this->actor.params);
        if (ActorCutscene_GetLength((s16) this->actor.cutscene) != -1) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, &this->actor);
        }
        Actor_MarkForDeath(&this->actor);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
}

void ObjBlockstop_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjBlockstop *this = (ObjBlockstop *) thisx;
    this->actionFunc(this, globalCtx);
}

