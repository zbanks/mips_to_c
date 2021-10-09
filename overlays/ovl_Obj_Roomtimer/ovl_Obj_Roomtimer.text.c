typedef struct ObjRoomtimer {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(ObjRoomtimer *, GlobalContext *);
    /* 0x0148 */ s32 unk148;                        /* inferred */
} ObjRoomtimer;                                     /* size 0x14C */

void ObjRoomtimer_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjRoomtimer *this = (ObjRoomtimer *) thisx;
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = this->actor.params;
    this->actor.params = temp_v0 & 0x1FF;
    temp_v0_2 = this->actor.params;
    this->unk148 = ((s32) temp_v0 >> 9) & 0x7F;
    if (temp_v0_2 != 0x1FF) {
        if ((s32) temp_v0_2 >= 0x1F5) {
            this->actor.params = 0x1F4;
        } else {
            this->actor.params = temp_v0_2;
        }
    }
    this->actionFunc = func_80973CD8;
}

void ObjRoomtimer_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjRoomtimer *this = (ObjRoomtimer *) thisx;
    if ((this->actor.params != 0x1FF) && ((s32) gSaveContext.unk_3DD0[4] > 0)) {
        gSaveContext.unk_3DD0[4] = 5;
    }
}

void func_80973CD8(ObjRoomtimer *this, GlobalContext *globalCtx) {
    s16 temp_a2;

    temp_a2 = this->actor.params;
    if (temp_a2 != 0x1FF) {
        func_8010E9F0(4, temp_a2);
    }
    func_800BC154(globalCtx, &globalCtx->actorCtx, &this->actor, 6U);
    this->actionFunc = func_80973D3C;
}

void func_80973D3C(ObjRoomtimer *this, GlobalContext *globalCtx) {
    if (Actor_GetRoomClearedTemp(globalCtx, (u32) this->actor.room) != 0) {
        if (this->actor.params != 0x1FF) {
            gSaveContext.unk_3DD0[4] = 5;
        }
        ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        this->actionFunc = func_80973DE0;
        return;
    }
    if ((this->actor.params != 0x1FF) && (gSaveContext.unk_3DD0[4] == 0)) {
        play_sound(0x5801U);
        func_80169EFC(globalCtx);
        Actor_MarkForDeath(&this->actor);
    }
}

void func_80973DE0(ObjRoomtimer *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
        Actor_SetRoomCleared(globalCtx, (u32) this->actor.room);
        Actor_SetSwitchFlag(globalCtx, this->unk148);
        if (ActorCutscene_GetLength((s16) this->actor.cutscene) != -1) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, &this->actor);
        }
        Actor_MarkForDeath(&this->actor);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
}

void ObjRoomtimer_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjRoomtimer *this = (ObjRoomtimer *) thisx;
    this->actionFunc(this, globalCtx);
}

