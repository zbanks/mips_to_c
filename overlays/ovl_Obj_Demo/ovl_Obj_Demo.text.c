typedef struct ObjDemo {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(ObjDemo *, GlobalContext *);
    /* 0x148 */ s32 unk_148;                        /* inferred */
    /* 0x14C */ f32 unk_14C;                        /* inferred */
    /* 0x150 */ f32 unk_150;                        /* inferred */
} ObjDemo;                                          /* size = 0x154 */

struct _mips2c_stack_ObjDemo_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjDemo_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80983634 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80983678 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80983704 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

void func_80983634(GlobalContext *arg0);            /* static */

void ObjDemo_Init(Actor *thisx, GlobalContext *globalCtx) {
    f32 temp_f6;
    s16 temp_a1;
    s16 temp_a3;
    s16 temp_v0;
    ObjDemo *this = (ObjDemo *) thisx;

    this->actor.params &= 0xFF;
    temp_a3 = this->actor.params;
    temp_a1 = temp_a3;
    if ((temp_a3 != 0xFF) && (this = this, (Flags_GetSwitch(globalCtx, (s32) temp_a1) != 0))) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if ((s32) this->actor.shape.rot.x < 0) {
        this->unk_148 = 1;
        this->actor.shape.rot.x = (s16) -(s32) this->actor.shape.rot.x;
    }
    if (this->actor.shape.rot.x == 0) {
        this->unk_14C = 80.0f;
    } else {
        this->actor.shape.rot.x = 0;
        this->actor.world.rot.x = 0;
        this->unk_14C = (f32) this->actor.shape.rot.x * 4.0f;
    }
    temp_v0 = this->actor.shape.rot.z;
    if (temp_v0 == 0) {
        this->unk_150 = 60.0f;
    } else {
        temp_f6 = (f32) temp_v0;
        this->actor.shape.rot.z = 0;
        this->actor.world.rot.z = 0;
        this->unk_150 = temp_f6 * 4.0f;
    }
    this = this;
    func_80983634(globalCtx);
    this->actionFunc = func_80983678;
}

void func_80983634(GlobalContext *arg0) {
    if ((arg0->sceneNum == 0x1D) && (func_801A8A50(0) == 0x6F)) {
        func_801A89A8(0x100100FF);
    }
}

void func_80983678(ObjDemo *this, GlobalContext *globalCtx) {
    func_80983634(globalCtx);
    if ((this->actor.xzDistToPlayer < this->unk_14C) && (fabsf(this->actor.yDistToPlayer) < this->unk_150)) {
        if (this->unk_148 == 1) {
            ActorCutscene_Stop(0x7D);
        }
        ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        this->actionFunc = func_80983704;
    }
}

void func_80983704(ObjDemo *this, GlobalContext *globalCtx) {
    s16 temp_a1;

    if ((this->unk_148 == 1) && (ActorCutscene_GetCurrentIndex() == 0x7D)) {
        ActorCutscene_Stop(0x7D);
        ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        return;
    }
    if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
        if (this->unk_148 == 1) {
            ActorCutscene_Start((s16) this->actor.cutscene, (Actor *) this);
            func_800E0348(globalCtx->cameraPtrs[0]);
        } else {
            ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
        }
        if (globalCtx->sceneNum == 0x1D) {
            func_801A89A8(0x806F);
        }
        this->actor.cutscene = ActorCutscene_GetAdditionalCutscene((s16) this->actor.cutscene);
        if (this->actor.cutscene == -1) {
            temp_a1 = this->actor.params;
            if (temp_a1 != 0xFF) {
                Actor_SetSwitchFlag(globalCtx, (s32) temp_a1);
            }
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
    func_80983634(globalCtx);
}

void ObjDemo_Update(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_a1;
    s16 temp_a3;
    ObjDemo *this = (ObjDemo *) thisx;

    temp_a3 = this->actor.params;
    temp_a1 = temp_a3;
    if ((temp_a3 != 0xFF) && (this = this, (Flags_GetSwitch(globalCtx, (s32) temp_a1) != 0))) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->actionFunc(this, globalCtx, this);
}
