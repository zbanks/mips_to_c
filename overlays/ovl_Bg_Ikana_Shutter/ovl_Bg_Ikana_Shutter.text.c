struct _mips2c_stack_BgIkanaShutter_AllSwitchesPressed {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgIkanaShutter_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgIkanaShutter_DoNothing {};   /* size 0x0 */

struct _mips2c_stack_BgIkanaShutter_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgIkanaShutter_Init {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_BgIkanaShutter_SetupDoNothing {}; /* size 0x0 */

struct _mips2c_stack_BgIkanaShutter_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD5828 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD5844 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD5878 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD5894 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD58F0 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD5910 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BD599C {};              /* size 0x0 */

struct _mips2c_stack_func_80BD59C4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD59F8 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD5A18 {
    /* 0x00 */ char pad0[0x2E];
    /* 0x2E */ s16 sp2E;                            /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BD5AE8 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD5B04 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD5B44 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD5B60 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BD5BC4 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD5BD8 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

s32 BgIkanaShutter_AllSwitchesPressed(BgIkanaShutter *arg0, GlobalContext *arg1); /* static */
extern Gfx D_06000CE8;
extern CollisionHeader D_06000F28;
static InitChainEntry D_80BD5D10[4];                /* unable to generate initializer */

s32 BgIkanaShutter_AllSwitchesPressed(BgIkanaShutter *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 phi_v0;

    temp_v0 = Flags_GetSwitch(arg1, arg0->dyna.actor.params & 0x7F) != 0;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        temp_v0_2 = Flags_GetSwitch(arg1, (arg0->dyna.actor.params & 0x7F) + 1) != 0;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 != 0) {
            temp_v0_3 = Flags_GetSwitch(arg1, (arg0->dyna.actor.params & 0x7F) + 2) != 0;
            phi_v0 = temp_v0_3;
            if (temp_v0_3 != 0) {
                phi_v0 = Flags_GetSwitch(arg1, (arg0->dyna.actor.params & 0x7F) + 3) != 0;
            }
        }
    }
    return phi_v0;
}

void BgIkanaShutter_Init(BgIkanaShutter *this, GlobalContext *globalCtx) {
    BgIkanaShutter *this = (BgIkanaShutter *) thisx;
    Actor_ProcessInitChain((Actor *) this, D_80BD5D10);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06000F28);
    if ((((s32) this->dyna.actor.params >> 8) & 1) == 0) {
        if (BgIkanaShutter_AllSwitchesPressed(this, globalCtx) != 0) {
            func_80BD599C(this);
            return;
        }
        func_80BD5828(this);
        return;
    }
    if (Actor_GetRoomCleared(globalCtx, (u32) this->dyna.actor.room) != 0) {
        BgIkanaShutter_SetupDoNothing(this);
        return;
    }
    func_80BD5AE8(this);
}

void BgIkanaShutter_Destroy(BgIkanaShutter *this, GlobalContext *globalCtx) {
    BgIkanaShutter *this = (BgIkanaShutter *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void func_80BD5828(BgIkanaShutter *this) {
    this->actionFunc = func_80BD5844;
    this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y;
}

void func_80BD5844(BgIkanaShutter *this, GlobalContext *globalCtx) {
    if (BgIkanaShutter_AllSwitchesPressed(this) != 0) {
        func_80BD5878(this);
    }
}

void func_80BD5878(BgIkanaShutter *this) {
    this->actionFunc = func_80BD5894;
    this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y;
}

void func_80BD5894(BgIkanaShutter *this, GlobalContext *globalCtx) {
    BgIkanaShutter *temp_a1;
    s8 temp_a0;
    s8 temp_a0_2;

    temp_a0 = this->dyna.actor.cutscene;
    this = this;
    temp_a1 = this;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        temp_a0_2 = temp_a1->dyna.actor.cutscene;
        this = temp_a1;
        ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a0_2, (Actor *) temp_a1);
        func_80BD58F0(this);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a1->dyna.actor.cutscene);
}

void func_80BD58F0(BgIkanaShutter *this) {
    this->actionFunc = func_80BD5910;
    this->dyna.actor.velocity.y = 0.6f;
}

void func_80BD5910(BgIkanaShutter *this, GlobalContext *globalCtx) {
    Math_StepToF(&this->dyna.actor.velocity.y, 4.0f, 0.5f);
    if (Math_SmoothStepToF(&this->dyna.actor.world.pos.y, this->dyna.actor.home.pos.y + 220.0f, 0.5f, this->dyna.actor.velocity.y, 1.0f) < 0.5f) {
        func_80BD599C(this);
    }
}

void func_80BD599C(BgIkanaShutter *this) {
    this->actionFunc = func_80BD59C4;
    this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y + 220.0f;
}

void func_80BD59C4(BgIkanaShutter *this, GlobalContext *globalCtx) {
    if (BgIkanaShutter_AllSwitchesPressed(this) == 0) {
        func_80BD59F8(this);
    }
}

void func_80BD59F8(BgIkanaShutter *this) {
    this->actionFunc = func_80BD5A18;
    this->dyna.actor.velocity.y = -23.0f;
}

void func_80BD5A18(BgIkanaShutter *this, GlobalContext *globalCtx) {
    s16 sp2E;
    s16 temp_v0;
    s32 temp_a0;

    this->dyna.actor.velocity.y += -5.0f;
    this->dyna.actor.velocity.y *= 0.978f;
    this->dyna.actor.world.pos.y += this->dyna.actor.velocity.y;
    if (this->dyna.actor.world.pos.y <= this->dyna.actor.home.pos.y) {
        temp_v0 = Quake_Add(globalCtx->cameraPtrs[globalCtx->activeCamera], 3U);
        temp_a0 = temp_v0 << 0x10;
        sp2E = temp_v0;
        Quake_SetSpeed((s16) (temp_a0 >> 0x10), 0x5420);
        Quake_SetQuakeValues(sp2E, 4, 0, 0, (s16) 0);
        Quake_SetCountdown(sp2E, 0xC);
        func_80BD5828(this);
    }
}

void func_80BD5AE8(BgIkanaShutter *this) {
    this->actionFunc = func_80BD5B04;
    this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y;
}

void func_80BD5B04(BgIkanaShutter *this, GlobalContext *globalCtx) {
    if (Actor_GetRoomClearedTemp(globalCtx, (u32) this->dyna.actor.room) != 0) {
        func_80BD5B44(this);
    }
}

void func_80BD5B44(BgIkanaShutter *this) {
    this->actionFunc = func_80BD5B60;
    this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y;
}

void func_80BD5B60(BgIkanaShutter *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCanPlayNext((s16) this->dyna.actor.cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) this->dyna.actor.cutscene, (Actor *) this);
        Actor_SetRoomCleared(globalCtx, (u32) this->dyna.actor.room);
        func_80BD5BC4(this);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) this->dyna.actor.cutscene);
}

void func_80BD5BC4(BgIkanaShutter *this) {
    this->actionFunc = func_80BD5BD8;
}

void func_80BD5BD8(BgIkanaShutter *this, GlobalContext *globalCtx) {
    Math_StepToF(&this->dyna.actor.velocity.y, 4.0f, 0.5f);
    if (Math_SmoothStepToF(&this->dyna.actor.world.pos.y, this->dyna.actor.home.pos.y + -220.0f, 0.5f, this->dyna.actor.velocity.y, 1.0f) < 0.5f) {
        BgIkanaShutter_SetupDoNothing(this);
    }
}

void BgIkanaShutter_SetupDoNothing(BgIkanaShutter *this) {
    this->actionFunc = BgIkanaShutter_DoNothing;
    this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y + -220.0f;
}

void BgIkanaShutter_DoNothing(BgIkanaShutter *this, GlobalContext *globalCtx) {

}

void BgIkanaShutter_Update(BgIkanaShutter *this, GlobalContext *globalCtx) {
    BgIkanaShutter *this = (BgIkanaShutter *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgIkanaShutter_Draw(BgIkanaShutter *this, GlobalContext *globalCtx) {
    BgIkanaShutter *this = (BgIkanaShutter *) thisx;
    func_800BDFC0(globalCtx, &D_06000CE8);
}
