static ? gEnHollCentralPlaneDL;                     /* unable to generate initializer */
static ? sActionFuncs;                              /* unable to generate initializer */
static f32 sActivationPlaneDistance = 200.0f;
static InitChainEntry sInitChain;                   /* unable to generate initializer */
static EnHoll *sInstancePlayingSound = NULL;
static f32 sLoadingPlaneDistance = 150.0f;
static f32 sTranslucencyPlaneDistance = 100.0f;
static f32 sTransparencyPlaneDistance = 50.0f;



void EnHoll_SetupAction(EnHoll *this) {
    EnHoll *self = (EnHoll *) this;
    s8 temp_v0;

    self->type = ((s32) self->actor.params >> 7) & 7;
    temp_v0 = self->type;
    self->actionFunc = *(&sActionFuncs + (temp_v0 * 4));
    if ((temp_v0 == 0) || (temp_v0 == 4)) {
        self->alpha = 0xFF;
        return;
    }
    self->actor.draw = NULL;
}

void EnHoll_SetPlayerSide(GlobalContext *globalCtx, EnHoll *this, Vec3f *transformedPlayerPos) {
    EnHoll *self = (EnHoll *) globalCtx;
    EnHoll *temp_a0;

    temp_a0 = this;
    this = this;
    Actor_CalcOffsetOrientedToDrawRotation(&temp_a0->actor, transformedPlayerPos, self->unk1CCC + 0x24);
    if (transformedPlayerPos->z < 0.0f) {
        this->playerSide = 0;
        return;
    }
    this->playerSide = 1;
}

void EnHoll_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnHoll *this = (EnHoll *) thisx;
    Vec3f sp1C;
    EnHoll *temp_a0;

    temp_a0 = this;
    this = this;
    Actor_ProcessInitChain(&temp_a0->actor, &sInitChain);
    EnHoll_SetupAction(this);
    this->bgCoverAlphaActive = 0;
    this->alpha = 0xFF;
    EnHoll_SetPlayerSide(globalCtx, this, &sp1C);
}

void EnHoll_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnHoll *this = (EnHoll *) thisx;
    TransitionActorEntry *temp_v1;

    if (this->type != 4) {
        temp_v1 = &globalCtx->doorCtx.transitionActorList[(s32) (u16) this->actor.params >> 0xA];
        temp_v1->id = (s16) -(s32) temp_v1->id;
        if (this == sInstancePlayingSound) {
            sInstancePlayingSound = NULL;
        }
    }
}

void EnHoll_ChangeRooms(GlobalContext *globalCtx) {
    EnHoll *self = (EnHoll *) globalCtx;
    ? sp4;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = self + 0x186E0;
    sp4.unk0 = (s32) temp_v0->unk0;
    temp_v1 = self + 0x186F4;
    sp4.unk4 = (s32) temp_v0->unk4;
    sp4.unk8 = (s32) temp_v0->unk8;
    sp4.unkC = (s32) temp_v0->unkC;
    sp4.unk10 = (s32) temp_v0->unk10;
    temp_v0->unk0 = (s32) temp_v1->unk0;
    temp_v0->unk4 = (s32) temp_v1->unk4;
    temp_v0->unk8 = (s32) temp_v1->unk8;
    temp_v0->unkC = (s32) temp_v1->unkC;
    temp_v0->unk10 = (s32) temp_v1->unk10;
    temp_v1->unk0 = (s32) sp4.unk0;
    temp_v1->unk4 = (s32) sp4.unk4;
    temp_v1->unk8 = (s32) sp4.unk8;
    temp_v1->unkC = (s32) sp4.unkC;
    temp_v1->unk10 = (s32) sp4.unk10;
    self->unk18710 = (s8) (self->unk18710 ^ 1);
}

void EnHoll_VisibleIdle(EnHoll *this, GlobalContext *globalCtx) {
    EnHoll *self = (EnHoll *) this;
    Vec3f sp40;
    f32 sp30;
    f32 sp2C;
    void *sp18;
    EnHoll *temp_a0;
    f32 temp_f0;
    f32 temp_f14;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_a0_2;
    s32 temp_f16;
    s8 temp_a2;
    void *temp_v1;
    f32 phi_f2;
    f32 phi_f12;
    u8 phi_a0;

    if (self->type == 0) {
        temp_v0 = globalCtx->actorCtx.unkC;
        if (((((s32) (temp_v0 & 0x2AA) >> 1) | (temp_v0 & 0x155)) & D_801AED48[self->actor.params & 7]) == 0) {
            Actor_MarkForDeath(&self->actor);
            return;
        }
        temp_a0 = self;
        if (self == sInstancePlayingSound) {
            self = self;
            func_800B9010(&temp_a0->actor, 0x211DU);
        }
        goto block_5;
    }
block_5:
    temp_v1 = globalCtx + 0x18000;
    if ((globalCtx->sceneLoadFlag != 0) || (globalCtx->unk_18B4A != 0)) {
        self->alpha = 0xFF;
        return;
    }
    sp18 = temp_v1;
    self = self;
    sp30 = -50.0f;
    sp2C = 150.0f;
    EnHoll_SetPlayerSide(globalCtx, self, &sp40);
    temp_v0_2 = globalCtx->sceneNum;
    temp_f14 = fabsf(sp40.z);
    phi_f2 = -50.0f;
    phi_f12 = 150.0f;
    if (temp_v0_2 == 0x13) {
        phi_f2 = -90.0f;
        phi_f12 = 280.0f;
    }
    if ((phi_f2 < sp40.y) && (sp40.y < 200.0f) && (fabsf(sp40.x) < phi_f12) && (temp_f14 < sActivationPlaneDistance)) {
        temp_v0_3 = self->actor.params;
        temp_a0_2 = (s32) (temp_v0_3 & 0xFFFF) >> 0xA;
        if (sLoadingPlaneDistance < temp_f14) {
            if (((s32) globalCtx->roomCtx.prevRoom.num >= 0) && (globalCtx->roomCtx.unk31 == 0)) {
                self->actor.room = globalCtx->doorCtx.transitionActorList[temp_a0_2].sides[self->playerSide].room;
                if (self->actor.room == globalCtx->roomCtx.prevRoom.num) {
                    EnHoll_ChangeRooms(globalCtx);
                }
                func_8012EBF8(globalCtx, &globalCtx->roomCtx);
                return;
            }
            // Duplicate return node #36. Try simplifying control flow for better match
            return;
        }
        if (self->type == 4) {
            globalCtx->nextEntranceIndex = globalCtx->setupExitList[temp_v0_3 & 0x7F];
            gSaveContext.unk_3DBB = 1;
            sp18 = temp_v1;
            Scene_SetExitFade(globalCtx);
            globalCtx->sceneLoadFlag = 0x14;
            globalCtx->unk_1878C(globalCtx);
            return;
        }
        self->actor.room = globalCtx->doorCtx.transitionActorList[temp_a0_2].sides[self->playerSide ^ 1].room;
        if ((s32) globalCtx->roomCtx.prevRoom.num < 0) {
            temp_a2 = self->actor.room;
            self = self;
            Room_StartRoomTransition(globalCtx, &globalCtx->roomCtx, (s32) temp_a2);
            if (self == sInstancePlayingSound) {
                sInstancePlayingSound = NULL;
                return;
            }
            // Duplicate return node #36. Try simplifying control flow for better match
            return;
        }
        temp_f0 = sTransparencyPlaneDistance;
        temp_f16 = (s32) ((temp_f14 - temp_f0) * (255.0f / (sTranslucencyPlaneDistance - temp_f0)));
        if (temp_f16 < 0) {
            self->alpha = 0;
        } else {
            phi_a0 = (u8) temp_f16;
            if (temp_f16 >= 0x100) {
                phi_a0 = 0xFFU;
            }
            self->alpha = phi_a0;
        }
        if (self->actor.room != globalCtx->roomCtx.currRoom.num) {
            EnHoll_ChangeRooms(globalCtx);
            return;
        }
        // Duplicate return node #36. Try simplifying control flow for better match
        return;
    }
    if ((self->type == 0) && (temp_v0_2 == 0x64) && (sInstancePlayingSound == 0)) {
        sInstancePlayingSound = self;
    }
}

void EnHoll_TransparentIdle(EnHoll *this, GlobalContext *globalCtx) {
    EnHoll *self = (EnHoll *) this;
    Vec3f sp3C;
    f32 temp_f0;
    s32 temp_a2;
    s8 temp_a2_2;
    s32 phi_a2;
    Vec3f *phi_a2_2;
    f32 phi_f0;
    s32 phi_a1;

    temp_a2 = D_801D0D50 != 0;
    phi_a2 = temp_a2;
    if (temp_a2 == 0) {
        phi_a2 = globalCtx->csCtx.state != 0;
    }
    if (phi_a2 != 0) {
        phi_a2_2 = &globalCtx->view.eye;
    } else {
        phi_a2_2 = &globalCtx->actorCtx.actorList[2].first->world.pos;
    }
    globalCtx = globalCtx;
    Actor_CalcOffsetOrientedToDrawRotation(&self->actor, &sp3C, phi_a2_2);
    if (globalCtx->sceneNum == 0x23) {
        phi_f0 = 280.0f;
    } else {
        phi_f0 = 200.0f;
    }
    if ((sp3C.y > -50.0f) && (sp3C.y < phi_f0) && (fabsf(sp3C.x) < 200.0f)) {
        temp_f0 = fabsf(sp3C.z);
        if ((temp_f0 < 100.0f) && (temp_f0 > 50.0f)) {
            phi_a1 = 1;
            if (sp3C.z < 0.0f) {
                phi_a1 = 0;
            }
            self->actor.room = globalCtx->doorCtx.transitionActorList[(s32) (u16) self->actor.params >> 0xA].sides[phi_a1].room;
            temp_a2_2 = self->actor.room;
            if ((globalCtx->roomCtx.currRoom.num != temp_a2_2) && (Room_StartRoomTransition(globalCtx, &globalCtx->roomCtx, (s32) temp_a2_2) != 0)) {
                self->actionFunc = EnHoll_RoomTransitionIdle;
            }
        }
    }
}

void EnHoll_VerticalBgCoverIdle(EnHoll *this, GlobalContext *globalCtx) {
    EnHoll *self = (EnHoll *) this;
    f32 temp_f0;
    s8 temp_a2;
    s32 phi_v1;

    if ((self->actor.xzDistToPlayer < 120.0f) && (temp_f0 = fabsf(self->actor.yDistToPlayer), (temp_f0 < 200.0f))) {
        if (temp_f0 < 50.0f) {
            globalCtx->bgCoverAlpha = 0xFF;
        } else {
            globalCtx->bgCoverAlpha = (s16) (s32) ((200.0f - temp_f0) * 1.7f);
        }
        if (temp_f0 > 50.0f) {
            phi_v1 = 1;
            if (self->actor.yDistToPlayer > 0.0f) {
                phi_v1 = 0;
            }
            self->actor.room = globalCtx->doorCtx.transitionActorList[(s32) (u16) self->actor.params >> 0xA].sides[phi_v1].room;
            temp_a2 = self->actor.room;
            if ((globalCtx->roomCtx.currRoom.num != temp_a2) && (self = self, (Room_StartRoomTransition(globalCtx, &globalCtx->roomCtx, (s32) temp_a2) != 0))) {
                self->actionFunc = EnHoll_RoomTransitionIdle;
                self->bgCoverAlphaActive = 1;
                return;
            }
            // Duplicate return node #13. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #13. Try simplifying control flow for better match
        return;
    }
    if (self->bgCoverAlphaActive != 0) {
        self->bgCoverAlphaActive = 0;
        globalCtx->bgCoverAlpha = 0;
    }
}

void EnHoll_VerticalIdle(EnHoll *this, GlobalContext *globalCtx) {
    EnHoll *self = (EnHoll *) this;
    f32 temp_f0;
    f32 temp_f2;
    s8 temp_a2;
    s32 phi_v1;

    if (self->actor.xzDistToPlayer < 120.0f) {
        temp_f2 = self->actor.yDistToPlayer;
        temp_f0 = fabsf(temp_f2);
        if ((temp_f0 < 200.0f) && (temp_f0 > 50.0f)) {
            phi_v1 = 1;
            if (temp_f2 > 0.0f) {
                phi_v1 = 0;
            }
            self->actor.room = globalCtx->doorCtx.transitionActorList[(s32) (u16) self->actor.params >> 0xA].sides[phi_v1].room;
            temp_a2 = self->actor.room;
            if (globalCtx->roomCtx.currRoom.num != temp_a2) {
                self = self;
                if (Room_StartRoomTransition(globalCtx, &globalCtx->roomCtx, (s32) temp_a2) != 0) {
                    self->actionFunc = EnHoll_RoomTransitionIdle;
                }
            }
        }
    }
}

void EnHoll_RoomTransitionIdle(EnHoll *this, GlobalContext *globalCtx) {
    EnHoll *self = (EnHoll *) this;
    void *sp1C;

    if (globalCtx->roomCtx.unk31 == 0) {
        sp1C = globalCtx + 0x18000;
        self = self;
        func_8012EBF8(globalCtx, &globalCtx->roomCtx);
        if (globalCtx->bgCoverAlpha == 0) {
            self->bgCoverAlphaActive = 0;
        }
        EnHoll_SetupAction(self);
    }
}

void EnHoll_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnHoll *this = (EnHoll *) thisx;
    if ((globalCtx->sceneLoadFlag == 0) && (globalCtx->unk_18B4A == 0) && ((globalCtx->actorCtx.actorList[2].first->unkA6C & 0x200) == 0)) {
        this->actionFunc(this, globalCtx);
    }
}

void EnHoll_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnHoll *this = (EnHoll *) thisx;
    Gfx *sp28;
    GraphicsContext *sp20;
    Gfx *sp18;
    Gfx *temp_a2;
    Gfx *temp_a2_2;
    Gfx *temp_a2_3;
    Gfx *temp_v0_2;
    GraphicsContext *temp_t0;
    u8 temp_v0;
    Gfx *phi_a2;
    u32 phi_a1;
    Gfx *phi_a2_2;

    temp_v0 = this->alpha;
    if (temp_v0 != 0) {
        temp_t0 = globalCtx->state.gfxCtx;
        if (temp_v0 == 0xFF) {
            phi_a2 = temp_t0->polyOpa.p;
            phi_a1 = 0x25U;
        } else {
            phi_a2 = temp_t0->polyXlu.p;
            phi_a1 = 0U;
        }
        this = this;
        sp20 = temp_t0;
        temp_v0_2 = Gfx_CallSetupDL(phi_a2, phi_a1);
        phi_a2_2 = temp_v0_2;
        if (this->playerSide == 0) {
            sp28 = temp_v0_2;
            this = this;
            sp20 = temp_t0;
            SysMatrix_InsertYRotation_f(3.1415927f, 1);
            phi_a2_2 = sp28;
        }
        phi_a2_2->words.w0 = 0xDA380003;
        temp_a2 = phi_a2_2 + 8;
        sp20 = globalCtx->state.gfxCtx;
        this = this;
        sp28 = temp_a2;
        sp18 = phi_a2_2;
        phi_a2_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_a2->words.w0 = 0xFA000000;
        temp_a2_2 = temp_a2 + 8;
        temp_a2->words.w1 = (u32) this->alpha;
        temp_a2_2->words.w1 = (u32) &gEnHollCentralPlaneDL;
        temp_a2_2->words.w0 = 0xDE000000;
        temp_a2_3 = temp_a2_2 + 8;
        if (this->alpha == 0xFF) {
            globalCtx->state.gfxCtx->polyOpa.p = temp_a2_3;
            return;
        }
        globalCtx->state.gfxCtx->polyXlu.p = temp_a2_3;
        // Duplicate return node #9. Try simplifying control flow for better match
    }
}

