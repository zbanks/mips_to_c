

void ObjMuPict_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjMuPict *this = (ObjMuPict *) thisx;
    if (((gSaveContext.weekEventReg[75] & 0x20) == 0) && ((gSaveContext.weekEventReg[52] & 0x20) == 0)) {
        Actor_MarkForDeath(&this->actor);
    }
    this = this;
    func_80C06D90(this, globalCtx);
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->unk14A = (s16) ((s32) (this->actor.params & 0xF000) >> 0xC);
    this->actor.targetMode = 6;
    this->actor.focus.pos.y += 30.0f;
    this->unk148 = 0;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    func_80C06B5C(this);
}

void ObjMuPict_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjMuPict *this = (ObjMuPict *) thisx;

}

void func_80C06B5C(ObjMuPict *this) {
    this->actionFunc = func_80C06B70;
}

void func_80C06B70(ObjMuPict *this, GlobalContext *globalCtx) {
    s16 sp26;
    s16 temp_v1;
    s32 phi_v0;

    temp_v1 = this->actor.yawTowardsPlayer - this->actor.world.rot.y;
    sp26 = temp_v1;
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        if ((s32) this->actor.cutscene < 0) {
            func_80C06DC8(this, globalCtx);
            func_80C06CC4(this);
            return;
        }
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        func_80C06DC8(this, globalCtx);
        func_80C06C54(this);
        return;
    }
    phi_v0 = (s32) temp_v1;
    if ((s32) temp_v1 < 0) {
        phi_v0 = -(s32) temp_v1;
    }
    if (phi_v0 < 0x2AAA) {
        func_800B8614(&this->actor, globalCtx, 80.0f);
    }
}

void func_80C06C54(ObjMuPict *this) {
    this->actionFunc = func_80C06C68;
}

void func_80C06C68(ObjMuPict *this, GlobalContext *globalCtx) {
    ObjMuPict *temp_a1;
    s8 temp_a0;
    s8 temp_a0_2;

    temp_a0 = this->actor.cutscene;
    this = this;
    temp_a1 = this;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        temp_a0_2 = temp_a1->actor.cutscene;
        this = temp_a1;
        ActorCutscene_Start((s16) temp_a0_2, &temp_a1->actor);
        func_80C06CC4(this);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a1->actor.cutscene);
}

void func_80C06CC4(ObjMuPict *this) {
    this->actionFunc = func_80C06CD8;
}

void func_80C06CD8(ObjMuPict *this, GlobalContext *globalCtx) {
    Actor *temp_v1;
    Actor *temp_v1_2;
    s8 temp_a0;
    u32 temp_v0;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    switch (temp_v0) {
    case 5:
        func_80C06E88(this, globalCtx);
        break;
    case 6:
        if (func_80147624(globalCtx) != 0) {
            func_80C06B5C(this);
            temp_a0 = this->actor.cutscene;
            if ((s32) temp_a0 >= 0) {
                ActorCutscene_Stop((s16) temp_a0);
            }
        }
        break;
    }
    temp_v1 = this->actor.parent;
    Math_SmoothStepToS(&temp_v1->world.rot.y, temp_v1->yawTowardsPlayer, 0xA, 0x71C, (s16) 0xB6);
    temp_v1_2 = this->actor.parent;
    temp_v1_2->shape.rot.y = temp_v1_2->world.rot.y;
}

void func_80C06D90(ObjMuPict *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    Actor *temp_v0_2;
    Actor *phi_v0;

    temp_v0 = globalCtx->actorCtx.actorList[4].first;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
loop_1:
        if (phi_v0->id == 0x251) {
            this->actor.parent = phi_v0;
            return;
        }
        temp_v0_2 = phi_v0->next;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            // Duplicate return node #4. Try simplifying control flow for better match
            return;
        }
        goto loop_1;
    }
}

void func_80C06DC8(ObjMuPict *this, GlobalContext *globalCtx) {
    if (this->unk14A == 0) {
        if (this->unk148 == 0) {
            this->unk148 = 1;
            func_801518B0(globalCtx, 0x159AU, &this->actor);
            this->textId = 0x159A;
            return;
        }
        func_801518B0(globalCtx, 0x159DU, &this->actor);
        this->textId = 0x159D;
        return;
    }
    if (this->unk148 == 0) {
        this->unk148 = 1;
        func_801518B0(globalCtx, 0x15A0U, &this->actor);
        this->textId = 0x15A0;
        return;
    }
    func_801518B0(globalCtx, 0x15A3U, &this->actor);
    this->textId = 0x15A3;
}

void func_80C06E88(ObjMuPict *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a0;
    u16 temp_t6;

    temp_a0 = globalCtx;
    globalCtx = globalCtx;
    if (func_80147624(temp_a0) != 0) {
        temp_t6 = this->textId;
        switch (temp_t6) {
        case 5530:
            func_801518B0(globalCtx, 0x159BU, &this->actor);
            this->textId = 0x159B;
            return;
        case 5531:
            func_801518B0(globalCtx, 0x159CU, &this->actor);
            this->textId = 0x159C;
            return;
        case 5533:
            func_801518B0(globalCtx, 0x159EU, &this->actor);
            this->textId = 0x159E;
            return;
        case 5534:
            func_801518B0(globalCtx, 0x159FU, &this->actor);
            this->textId = 0x159F;
            return;
        case 5536:
            func_801518B0(globalCtx, 0x15A1U, &this->actor);
            this->textId = 0x15A1;
            return;
        case 5537:
            func_801518B0(globalCtx, 0x15A2U, &this->actor);
            this->textId = 0x15A2;
            return;
        case 5539:
            func_801518B0(globalCtx, 0x15A4U, &this->actor);
            this->textId = 0x15A4;
            // Duplicate return node #10. Try simplifying control flow for better match
            return;
        }
    } else {
    default:
    }
}

void ObjMuPict_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjMuPict *this = (ObjMuPict *) thisx;
    this->actionFunc(this, globalCtx);
}

void ObjMuPict_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjMuPict *this = (ObjMuPict *) thisx;

}

