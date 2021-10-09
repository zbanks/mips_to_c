typedef struct ObjRoomtimer {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(ObjRoomtimer *, GlobalContext *);
    /* 0x148 */ s32 unk_148;                        /* inferred */
} ObjRoomtimer;                                     /* size = 0x14C */

struct _mips2c_stack_ObjRoomtimer_Destroy {};       /* size 0x0 */

struct _mips2c_stack_ObjRoomtimer_Init {};          /* size 0x0 */

struct _mips2c_stack_ObjRoomtimer_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80973CD8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80973D3C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80973DE0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

void ObjRoomtimer_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    ObjRoomtimer *this = (ObjRoomtimer *) thisx;

    temp_v0 = this->actor.params;
    this->actor.params = temp_v0 & 0x1FF;
    temp_v0_2 = this->actor.params;
    this->unk_148 = ((s32) temp_v0 >> 9) & 0x7F;
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
    func_800BC154(globalCtx, &globalCtx->actorCtx, (Actor *) this, 6U);
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
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_80973DE0(ObjRoomtimer *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
        Actor_SetRoomCleared(globalCtx, (u32) this->actor.room);
        Actor_SetSwitchFlag(globalCtx, this->unk_148);
        if (ActorCutscene_GetLength((s16) this->actor.cutscene) != -1) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
}

void ObjRoomtimer_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjRoomtimer *this = (ObjRoomtimer *) thisx;
    this->actionFunc(this, globalCtx);
}
