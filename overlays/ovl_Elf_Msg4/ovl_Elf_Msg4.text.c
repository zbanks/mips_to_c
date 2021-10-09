s32 func_80AFD380(Actor *arg0, GlobalContext *arg1); /* static */
s16 func_80AFD5B4(ElfMsg4 *arg0);                   /* static */
s32 func_80AFD5E0(ElfMsg4 *arg0);                   /* static */
static InitChainEntry D_80AFD8F0;                   /* unable to generate initializer */

typedef struct ElfMsg4 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ Actor *unk144;                     /* inferred */
    /* 0x0148 */ void (*actionFunc)(ElfMsg4 *, GlobalContext *);
} ElfMsg4;                                          /* size 0x14C */

s32 func_80AFD380(Actor *arg0, GlobalContext *arg1) {
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

void ElfMsg4_Init(Actor *thisx, GlobalContext *globalCtx) {
    ElfMsg4 *this = (ElfMsg4 *) thisx;
    ElfMsg4 *temp_a0;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 phi_v1;
    s16 phi_v1_2;

    temp_a0 = this;
    if (func_80AFD380() == 0) {
        this = temp_a0;
        Actor_ProcessInitChain(&temp_a0->actor, &D_80AFD8F0);
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
        this->actor.shape.rot.z = 0;
        temp_v0_3 = this->actor.shape.rot.z;
        this->actionFunc = func_80AFD770;
        this->unk144 = NULL;
        this->actor.shape.rot.y = temp_v0_3;
        this->actor.shape.rot.x = temp_v0_3;
    }
}

void ElfMsg4_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ElfMsg4 *this = (ElfMsg4 *) thisx;

}

s16 func_80AFD5B4(ElfMsg4 *arg0) {
    s16 temp_v1;

    temp_v1 = arg0->actor.params;
    if ((temp_v1 & 0x8000) != 0) {
        return (temp_v1 & 0xFF) + 0x200;
    }
    return -0x200 - (temp_v1 & 0xFF);
}

s32 func_80AFD5E0(ElfMsg4 *arg0) {
    f32 temp_f0;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;

    phi_v0 = 0;
    phi_v0_2 = 0;
    phi_v0_3 = 0;
    if (arg0->actor.xzDistToPlayer < (100.0f * arg0->actor.scale.x)) {
        phi_v0 = 1;
    }
    phi_v0_3 = phi_v0;
    if (phi_v0 != 0) {
        temp_f0 = arg0->actor.yDistToPlayer;
        if (temp_f0 >= 0.0f) {
            phi_v0_2 = 1;
        }
        phi_v0_3 = phi_v0_2;
        if ((phi_v0_2 != 0) && (temp_f0 < (100.0f * arg0->actor.scale.y))) {
            phi_v0_3 = 1;
        }
    }
    return phi_v0_3;
}

void func_80AFD668(ElfMsg4 *this, GlobalContext *globalCtx) {
    Actor *sp24;
    void *sp20;
    Actor *temp_v1;
    void *temp_v0;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = temp_v1->unkA80;
    sp20 = temp_v0;
    if ((temp_v0 != 0) && (sp24 = temp_v1, (func_80AFD5E0(this) != 0))) {
        sp24->unkA84 = func_80AFD5B4(this);
        ActorCutscene_SetIntentToPlay(0x7C);
        sp20->unk230 = (Actor *) this->unk144;
        if (this->actor.cutscene == -1) {
            this->actor.cutscene = 0x7C;
        }
        if (((s32) sp24->unkA84 < 0) && ((s32) this->actor.home.rot.x < 0)) {
            if (ActorCutscene_GetCurrentIndex() == 0x7D) {
                ActorCutscene_Stop(0x7D);
                ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
                return;
            }
            if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
                ActorCutscene_Start((s16) this->actor.cutscene, &this->actor);
                func_800E0348(globalCtx->cameraPtrs[0]);
                return;
            }
            ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
            // Duplicate return node #11. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #11. Try simplifying control flow for better match
    }
}

void func_80AFD770(ElfMsg4 *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    Actor *temp_v0_2;
    Actor *phi_v0;

    temp_v0 = globalCtx->actorCtx.actorList[1].first;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        do {
            if ((phi_v0->id != 0x1D8) || ((phi_v0->params & 0xFF) != (this->actor.params & 0xFF)) || (phi_v0->cutscene != this->actor.cutscene)) {

            } else {
                this->unk144 = phi_v0;
                this->actionFunc = func_80AFD668;
            }
            temp_v0_2 = phi_v0->next;
            phi_v0 = temp_v0_2;
        } while (temp_v0_2 != 0);
    }
}

void ElfMsg4_Update(Actor *thisx, GlobalContext *globalCtx) {
    ElfMsg4 *this = (ElfMsg4 *) thisx;
    Actor *temp_a0;
    s16 temp_v0;
    s32 temp_a1;

    if (func_80AFD380(&this->actor, globalCtx) == 0) {
        temp_a0 = this->unk144;
        if ((temp_a0 != 0) && (temp_a0->update == 0)) {
            Actor_MarkForDeath(&this->actor);
            return;
        }
        if ((temp_a0 != 0) && (func_800B84D0(temp_a0, globalCtx) != 0)) {
            temp_a1 = (s32) (this->actor.params & 0x7F00) >> 8;
            if (temp_a1 != 0x7F) {
                Actor_SetSwitchFlag(globalCtx, temp_a1);
            }
            Actor_MarkForDeath(&this->actor);
            return;
        }
        temp_v0 = this->actor.home.rot.y;
        if (((s32) temp_v0 >= 0) || ((s32) temp_v0 < -0x80) || (Flags_GetSwitch(globalCtx, -1 - temp_v0) != 0)) {
            this->actionFunc(this, globalCtx);
        }
        // Duplicate return node #13. Try simplifying control flow for better match
    }
}

