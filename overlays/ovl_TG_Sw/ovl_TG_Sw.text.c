void TGSw_ActionDecider(TGSw *this, GlobalContext *globalCtx); /* static */



void TGSw_ActionDecider(TGSw *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s16 temp_v0_2;
    u8 temp_v0_3;
    s16 phi_v1;
    s16 phi_v1_2;

    if (arg1->actorCtx.unk1F5 != 0) {
        temp_v0 = arg0->actor.world.rot.y;
        phi_v1_2 = temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1_2 = (s16) -(s32) temp_v0;
        }
        temp_v0_2 = arg0->actor.world.rot.z;
        phi_v1 = temp_v0_2;
        if ((s32) temp_v0_2 < 0) {
            phi_v1 = (s16) -(s32) temp_v0_2;
        }
        if (!(((f32) phi_v1 * 4.0f) < arg0->actor.xzDistToPlayer) && !(((f32) phi_v1_2 * 4.0f) < arg0->actor.yDistToPlayer) && ((temp_v0_3 = arg1->actorCtx.unk1F4, (temp_v0_3 == 2)) || (temp_v0_3 == 0))) {
            arg0->actionFunc = TGSw_ActionExecuteOneShot;
        }
    }
}

void TGSw_ActionExecuteOneShot(TGSw *this, GlobalContext *globalCtx) {
    TGSw *self = (TGSw *) this;
    Actor *temp_s0;
    Actor *temp_s0_2;
    Actor *temp_v0;
    Actor *temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    Actor *phi_s0;
    Actor *phi_s0_2;

    phi_s0 = NULL;
    phi_s0_2 = NULL;
loop_1:
    temp_v0 = func_ActorCategoryIterateById(globalCtx, phi_s0, 5, 0x50);
    if (temp_v0 != 0) {
        if ((((s32) (temp_v0->params & 0xFC) >> 2) & 0xFF) == (((s32) (self->actor.params & 0xFC) >> 2) & 0xFF)) {
            temp_v0->parent = &self->actor;
            temp_v1 = self->actor.world.rot.x;
            if ((s32) temp_v1 < 0) {
                temp_v0->speedXZ = (f32) -(s32) temp_v1;
            } else {
                temp_v0->speedXZ = (f32) temp_v1;
            }
        } else {
            temp_s0 = temp_v0->next;
            phi_s0 = temp_s0;
            if (temp_s0 != 0) {
                goto loop_1;
            }
        }
    }
loop_8:
    temp_v0_2 = func_ActorCategoryIterateById(globalCtx, phi_s0_2, 4, 0x50);
    if (temp_v0_2 != 0) {
        if ((((s32) (temp_v0_2->params & 0xFC) >> 2) & 0xFF) == (((s32) (self->actor.params & 0xFC) >> 2) & 0xFF)) {
            temp_v0_2->parent = &self->actor;
            temp_v1_2 = self->actor.world.rot.x;
            if ((s32) temp_v1_2 < 0) {
                temp_v0_2->speedXZ = (f32) -(s32) temp_v1_2;
            } else {
                temp_v0_2->speedXZ = (f32) temp_v1_2;
            }
        } else {
            temp_s0_2 = temp_v0_2->next;
            phi_s0_2 = temp_s0_2;
            if (temp_s0_2 != 0) {
                goto loop_8;
            }
        }
    }
    Actor_MarkForDeath(&self->actor);
}

void TGSw_Init(Actor *thisx, GlobalContext *globalCtx) {
    TGSw *this = (TGSw *) thisx;
    this->actionFunc = TGSw_ActionDecider;
    this->actor.cutscene = (s8) this->actor.world.rot.z;
}

void TGSw_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    TGSw *this = (TGSw *) thisx;

}

void TGSw_Update(Actor *thisx, GlobalContext *globalCtx) {
    TGSw *this = (TGSw *) thisx;
    this->actionFunc(this, globalCtx);
}

void TGSw_Draw(Actor *thisx, GlobalContext *globalCtx) {
    TGSw *this = (TGSw *) thisx;
    s32 sp4C;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 phi_v1;
    s16 phi_v1_2;

    if (gGameInfo->data[1536] != 0) {
        temp_v0 = this->actor.world.rot.z;
        phi_v1_2 = temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1_2 = (s16) -(s32) temp_v0;
        }
        temp_v0_2 = this->actor.world.rot.y;
        phi_v1 = (s32) temp_v0_2;
        if ((s32) temp_v0_2 < 0) {
            phi_v1 = -(s32) temp_v0_2;
        }
        sp4C = phi_v1;
        DebugDisplay_AddObject(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0, (s16) (s32) this->actor.shape.rot.y, (s16) 0, 0.1f, 0.1f, (f32) phi_v1_2 * 0.2f, (u8) 0xA0, (u8) 0xA0, (u8) 0xA0, (u8) 0xFF, (s16) 6, globalCtx->state.gfxCtx);
        DebugDisplay_AddObject(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0, (s16) 0, (s16) 0, 0.1f, (f32) phi_v1 * 0.2f, 0.1f, (u8) 0xA0, (u8) 0xA0, (u8) 0xA0, (u8) 0xFF, (s16) 6, globalCtx->state.gfxCtx);
        this->actor.shape.rot.y += 0x1000;
    }
}

