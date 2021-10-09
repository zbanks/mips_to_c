static ColliderCylinderInit D_80B93220 = {
    {9, 0, 0xD, 0x39, 0x20, 1},
    {2, {0x100000, 0, 0}, {0x1000202, 0, 0}, 0, 5, 1},
    {0x14, 0x3C, 0, {0, 0, 0}},
};
static InitChainEntry D_80B9324C;                   /* unable to generate initializer */
static ? D_80B93250;                                /* unable to generate initializer */



void ObjWarpstone_SetupAction(ObjWarpstone *this, s32 (*actionFunc)(ObjWarpstone *, GlobalContext *)) {
    ObjWarpstone *self = (ObjWarpstone *) this;
    self->actionFunc = actionFunc;
}

void ObjWarpstone_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjWarpstone *this = (ObjWarpstone *) thisx;
    Actor_ProcessInitChain(&this->dyna.actor, &D_80B9324C);
    Collider_InitAndSetCylinder(globalCtx, &this->collider, &this->dyna.actor, &D_80B93220);
    Actor_SetHeight(&this->dyna.actor, 40.0f);
    if ((*(gBitFlags + 2 + ((this->dyna.actor.params & 0xF) * 4)) & gSaveContext.owlActivationFlags) == 0) {
        ObjWarpstone_SetupAction(this, ObjWarpstone_ClosedIdle);
        return;
    }
    ObjWarpstone_SetupAction(this, ObjWarpstone_OpenedIdle);
    this->modelIndex = 1;
}

void ObjWarpstone_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjWarpstone *this = (ObjWarpstone *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

s32 ObjWarpstone_ClosedIdle(ObjWarpstone *this, GlobalContext *globalCtx) {
    ObjWarpstone *self = (ObjWarpstone *) this;
    if ((self->collider.base.acFlags & 2) != 0) {
        ObjWarpstone_SetupAction(self, ObjWarpstone_BeginOpeningCutscene);
        return 1;
    }
    self->dyna.actor.textId = 0xC00;
    return 0;
}

s32 ObjWarpstone_BeginOpeningCutscene(ObjWarpstone *this, GlobalContext *globalCtx) {
    ObjWarpstone *self = (ObjWarpstone *) this;
    s8 temp_a2;

    temp_a2 = self->dyna.actor.cutscene;
    if ((s32) temp_a2 >= 0) {
        if (ActorCutscene_GetCanPlayNext((s16) temp_a2) != 0) {
            goto block_3;
        }
        ActorCutscene_SetIntentToPlay((s16) self->dyna.actor.cutscene);
    } else {
block_3:
        ActorCutscene_StartAndSetUnkLinkFields((s16) self->dyna.actor.cutscene, &self->dyna.actor);
        ObjWarpstone_SetupAction(self, ObjWarpstone_PlayOpeningCutscene);
        Audio_PlayActorSound2(&self->dyna.actor, 0x2967U);
    }
    return 1;
}

s32 ObjWarpstone_PlayOpeningCutscene(ObjWarpstone *this, GlobalContext *globalCtx) {
    ObjWarpstone *self = (ObjWarpstone *) this;
    u8 temp_v0;

    temp_v0 = self->openingCSTimer;
    self->openingCSTimer = temp_v0 + 1;
    if ((((s32) temp_v0 < 0x42) ^ 1) != 0) {
        ActorCutscene_Stop((s16) self->dyna.actor.cutscene);
        func_80143A10(self->dyna.actor.params & 0xF & 0xFF);
        ObjWarpstone_SetupAction(self, ObjWarpstone_OpenedIdle);
    } else if ((s32) self->openingCSTimer < 0x19) {
        Math_StepToF(&self->dyna.actor.velocity.x, 0.01f, 0.001f);
        Math_StepToS(&self->dyna.actor.home.rot.x, 0xFF, 0x12);
    } else {
        Math_StepToF(&self->dyna.actor.velocity.x, 20.0f, 0.01f);
        if (self->dyna.actor.velocity.x > 0.2f) {
            self->modelIndex = 1;
            Math_StepToS(&self->dyna.actor.home.rot.x, 0, 0x14);
        }
    }
    return 1;
}

s32 ObjWarpstone_OpenedIdle(ObjWarpstone *this, GlobalContext *globalCtx) {
    ObjWarpstone *self = (ObjWarpstone *) this;
    self->dyna.actor.textId = 0xC01;
    return 0;
}

void ObjWarpstone_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjWarpstone *this = (ObjWarpstone *) thisx;
    CollisionCheckContext *sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;

    if (this->isTalking != 0) {
        if (func_800B867C(&this->dyna.actor, globalCtx) != 0) {
            this->isTalking = 0;
        } else if ((func_80152498(&globalCtx->msgCtx) == 4) && (func_80147624(globalCtx) != 0)) {
            if (globalCtx->msgCtx.choiceIndex != 0) {
                func_8019F208();
                globalCtx->msgCtx.unk11F22 = 0x4D;
                globalCtx->msgCtx.unk120D6 = 0;
                globalCtx->msgCtx.unk120D4 = 0;
                gSaveContext.owlSaveLocation = this->dyna.actor.params & 0xF;
            } else {
                func_801477B4(globalCtx);
            }
        }
    } else if (func_800B84D0(&this->dyna.actor, globalCtx) != 0) {
        this->isTalking = 1;
    } else if (this->actionFunc(this, globalCtx) == 0) {
        func_800B863C(&this->dyna.actor, globalCtx);
    }
    temp_a1 = &this->collider;
    sp20 = temp_a1;
    Collider_ResetCylinderAC(globalCtx, &temp_a1->base);
    Collider_UpdateCylinder(&this->dyna.actor, temp_a1);
    temp_a1_2 = &globalCtx->colChkCtx;
    sp24 = temp_a1_2;
    CollisionCheck_SetOC(globalCtx, temp_a1_2, &sp20->base);
    CollisionCheck_SetAC(globalCtx, temp_a1_2, &sp20->base);
}

void ObjWarpstone_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjWarpstone *this = (ObjWarpstone *) thisx;
    Gfx *sp38;
    Gfx *sp30;
    Gfx *sp28;
    void *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    f32 temp_f16;
    s32 temp_t6;
    f32 phi_f16;

    func_800BDFC0(globalCtx, *(&D_80B93250 + (this->modelIndex * 4)));
    if (this->dyna.actor.home.rot.x != 0) {
        temp_a0 = globalCtx->state.gfxCtx;
        temp_s0 = temp_a0;
        func_8012C2DC(temp_a0);
        SysMatrix_InsertTranslation(this->dyna.actor.world.pos.x, this->dyna.actor.world.pos.y + 34.0f, this->dyna.actor.world.pos.z, 0);
        SysMatrix_InsertMatrix(&globalCtx->mf_187FC, 1);
        SysMatrix_InsertTranslation(0.0f, 0.0f, 30.0f, 1);
        temp_f12 = this->dyna.actor.velocity.x;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        SysMatrix_StatePush();
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w1 = 0;
        temp_v0->words.w0 = 0xE7000000;
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFA008080;
        temp_v0_2->words.w1 = (this->dyna.actor.home.rot.x & 0xFF) | ~0x37FF;
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = 0x64C800FF;
        temp_v0_3->words.w0 = 0xFB000000;
        sp24 = globalCtx + 0x18000;
        SysMatrix_InsertZRotation_f(((f32) ((globalCtx->gameplayFrames * 0x5DC) & 0xFFFF) * 3.1415927f) / 32768.0f, 1);
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDA380003;
        sp38 = temp_v0_4;
        sp38->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = (u32) D_04023210;
        temp_v0_5->words.w0 = 0xDE000000;
        sp28 = D_04023210;
        SysMatrix_StatePop();
        temp_t6 = ~((sp24->unk840 * 0x4B0) & 0xFFFF);
        temp_f16 = (f32) temp_t6;
        phi_f16 = temp_f16;
        if (temp_t6 < 0) {
            phi_f16 = temp_f16 + 4294967296.0f;
        }
        SysMatrix_InsertZRotation_f((phi_f16 * 3.1415927f) / 32768.0f, 1);
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xDA380003;
        sp30 = temp_v0_6;
        sp30->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_7 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xDE000000;
        temp_v0_7->words.w1 = (u32) sp28;
    }
}

