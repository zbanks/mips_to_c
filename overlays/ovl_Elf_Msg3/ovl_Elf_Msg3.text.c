struct _mips2c_stack_ElfMsg3_Destroy {};            /* size 0x0 */

struct _mips2c_stack_ElfMsg3_Init {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ElfMsg3_SetupAction {};        /* size 0x0 */

struct _mips2c_stack_ElfMsg3_Update {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A2CD1C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2CF50 {};              /* size 0x0 */

struct _mips2c_stack_func_80A2CF7C {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

s32 func_80A2CD1C(Actor *arg0, GlobalContext *arg1); /* static */
s16 func_80A2CF50(void *arg0, ElfMsg3 *);           /* static */
void func_80A2CF7C(ElfMsg3 *, GlobalContext *);     /* static */
static InitChainEntry D_80A2D1E0[4];                /* unable to generate initializer */

void ElfMsg3_SetupAction(ElfMsg3 *this, void (*actionFunc)(ElfMsg3 *, GlobalContext *)) {
    this->actionFunc = actionFunc;
}

s32 func_80A2CD1C(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0;
    s16 temp_v0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    Actor *phi_a2;
    GlobalContext *phi_a3;

    temp_v0 = arg0->home.rot.y;
    if (((s32) temp_v0 > 0) && (temp_a0 = arg1, (((s32) temp_v0 < 0x81) != 0)) && (arg0 = arg0, arg1 = arg1, (Flags_GetSwitch(temp_a0, temp_v0 - 1) != 0))) {
        temp_a1 = (s32) (arg0->params & 0x7F00) >> 8;
        if (temp_a1 != 0x7F) {
            arg0 = arg0;
            Actor_SetSwitchFlag(arg1, temp_a1);
        }
        Actor_MarkForDeath(arg0);
        return 1;
    }
    phi_a2 = arg0;
    phi_a3 = arg1;
    if ((arg0->home.rot.y == 0x81) && (arg1 = arg1, arg0 = arg0, phi_a2 = arg0, phi_a3 = arg1, (Actor_GetRoomCleared(arg1, (u32) arg0->room) != 0))) {
        temp_a1_2 = (s32) (arg0->params & 0x7F00) >> 8;
        if (temp_a1_2 != 0x7F) {
            arg0 = arg0;
            Actor_SetSwitchFlag(arg1, temp_a1_2);
        }
        Actor_MarkForDeath(arg0);
        return 1;
    }
    temp_a1_3 = (s32) (phi_a2->params & 0x7F00) >> 8;
    if (temp_a1_3 == 0x7F) {
        goto block_15;
    }
    arg0 = phi_a2;
    if (Flags_GetSwitch(phi_a3, temp_a1_3) != 0) {
        Actor_MarkForDeath(arg0);
        return 1;
    }
block_15:
    return 0;
}

void ElfMsg3_Init(ElfMsg3 *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 phi_v1;
    s16 phi_v1_2;
    ElfMsg3 *this = (ElfMsg3 *) thisx;

    if (func_80A2CD1C((Actor *) this) == 0) {
        Actor_ProcessInitChain((Actor *) this, D_80A2D1E0);
        temp_v0 = this->actor.home.rot.x;
        phi_v1 = temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = (s16) -(s32) temp_v0;
        }
        if (phi_v1 == 0) {
            this->actor.scale.z = 0.4f;
            this->actor.scale.x = 0.4f;
        } else {
            phi_v1_2 = temp_v0;
            if ((s32) temp_v0 < 0) {
                phi_v1_2 = (s16) -(s32) temp_v0;
            }
            temp_f0 = (f32) phi_v1_2 * 0.04f;
            this->actor.scale.z = temp_f0;
            this->actor.scale.x = temp_f0;
        }
        temp_v0_2 = this->actor.home.rot.z;
        if (temp_v0_2 == 0) {
            this->actor.scale.y = 0.4f;
        } else {
            this->actor.scale.y = (f32) temp_v0_2 * 0.04f;
        }
        ElfMsg3_SetupAction(this, func_80A2CF7C);
        this->actor.shape.rot.z = 0;
        temp_v0_3 = this->actor.shape.rot.z;
        this->actor.shape.rot.y = temp_v0_3;
        this->actor.shape.rot.x = temp_v0_3;
    }
}

void ElfMsg3_Destroy(ElfMsg3 *this, GlobalContext *globalCtx) {
    ElfMsg3 *this = (ElfMsg3 *) thisx;

}

s16 func_80A2CF50(void *arg0) {
    s16 temp_v1;

    temp_v1 = arg0->unk1C;
    if ((temp_v1 & 0x8000) != 0) {
        return (temp_v1 & 0xFF) + 0x200;
    }
    return -0x200 - (temp_v1 & 0xFF);
}

void func_80A2CF7C(ElfMsg3 *arg0, GlobalContext *arg1) {
    Actor *sp24;
    void *sp20;
    Actor *temp_v1;
    f32 temp_f0;
    f32 temp_f2;
    void *temp_v0;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    temp_v0 = temp_v1->unkA80;
    sp20 = temp_v0;
    if ((temp_v0 != 0) && (fabsf(temp_v1->world.pos.x - arg0->actor.world.pos.x) < (100.0f * arg0->actor.scale.x)) && (temp_f0 = temp_v1->world.pos.y, temp_f2 = arg0->actor.world.pos.y, (temp_f2 <= temp_f0)) && ((temp_f0 - temp_f2) < (100.0f * arg0->actor.scale.y)) && (fabsf(temp_v1->world.pos.z - arg0->actor.world.pos.z) < (100.0f * arg0->actor.scale.z))) {
        sp24 = temp_v1;
        temp_v1->unkA84 = func_80A2CF50((bitwise void *) 100.0f, arg0);
        ActorCutscene_SetIntentToPlay(0x7C);
        sp20->unk230 = arg0;
        if (arg0->actor.cutscene == -1) {
            arg0->actor.cutscene = 0x7C;
        }
        if (((s32) temp_v1->unkA84 < 0) && ((s32) arg0->actor.home.rot.x < 0)) {
            if (ActorCutscene_GetCurrentIndex() == 0x7D) {
                ActorCutscene_Stop(0x7D);
                ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
                return;
            }
            if (ActorCutscene_GetCanPlayNext((s16) arg0->actor.cutscene) != 0) {
                ActorCutscene_Start((s16) arg0->actor.cutscene, (Actor *) arg0);
                func_800E0348(arg1->cameraPtrs[0]);
                return;
            }
            ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
    }
}

void ElfMsg3_Update(ElfMsg3 *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s32 temp_a1;
    ElfMsg3 *this = (ElfMsg3 *) thisx;

    if (func_80A2CD1C((Actor *) this, globalCtx) == 0) {
        if (func_800B84D0((Actor *) this, globalCtx) != 0) {
            temp_a1 = (s32) (this->actor.params & 0x7F00) >> 8;
            if (temp_a1 != 0x7F) {
                Actor_SetSwitchFlag(globalCtx, temp_a1);
            }
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        temp_v0 = this->actor.home.rot.y;
        if (((s32) temp_v0 >= 0) || ((s32) temp_v0 < -0x80) || (Flags_GetSwitch(globalCtx, -1 - temp_v0) != 0)) {
            this->actionFunc(this, globalCtx);
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}
