typedef struct {
    /* 0x00 */ s8 num;
    /* 0x01 */ u8 unk1;
    /* 0x02 */ u8 unk2;
    /* 0x03 */ u8 unk3;
    /* 0x04 */ s8 echo;
    /* 0x05 */ u8 unk5;
    /* 0x06 */ u8 enablePosLights;
    /* 0x07 */ char pad_7[0x1];
    /* 0x08 */ RoomMesh *mesh;
    /* 0x0C */ void *segment;
    /* 0x10 */ s32 unk_10;                          /* inferred */
} Room;                                             /* size = 0x14 */

struct _mips2c_stack_EnHoll_ChangeRooms {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ ? sp4;                               /* inferred */
    /* 0x04 */ char pad_4[0x14];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnHoll_Destroy {};             /* size 0x0 */

struct _mips2c_stack_EnHoll_Draw {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Gfx *sp18;                           /* inferred */
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ GraphicsContext *sp20;               /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnHoll_Init {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ? sp1C;                              /* inferred */
    /* 0x1C */ char pad_1C[0x14];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnHoll_RoomTransitionIdle {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnHoll_SetPlayerSide {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnHoll_SetupAction {};         /* size 0x0 */

struct _mips2c_stack_EnHoll_TransparentIdle {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EnHoll_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnHoll_VerticalBgCoverIdle {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnHoll_VerticalIdle {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnHoll_VisibleIdle {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x10];                   /* maybe part of sp18[5]? */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0xC];                    /* maybe part of sp30[4]? */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];
};                                                  /* size = 0x50 */

static ? gEnHollCentralPlaneDL;                     /* unable to generate initializer */
static ? sActionFuncs;                              /* unable to generate initializer */
static f32 sActivationPlaneDistance = 200.0f;
static InitChainEntry sInitChain[3];                /* unable to generate initializer */
static EnHoll *sInstancePlayingSound = NULL;
static f32 sLoadingPlaneDistance = 150.0f;
static f32 sTranslucencyPlaneDistance = 100.0f;
static f32 sTransparencyPlaneDistance = 50.0f;

void EnHoll_SetupAction(EnHoll *this) {
    s8 temp_v0;

    this->type = ((s32) this->actor.params >> 7) & 7;
    temp_v0 = this->type;
    this->actionFunc = *(&sActionFuncs + (temp_v0 * 4));
    if ((temp_v0 == 0) || (temp_v0 == 4)) {
        this->alpha = 0xFF;
        return;
    }
    this->actor.draw = NULL;
}

void EnHoll_SetPlayerSide(GlobalContext *globalCtx, EnHoll *this, Vec3f *transformedPlayerPos) {
    EnHoll *temp_a0;

    temp_a0 = this;
    this = this;
    Actor_CalcOffsetOrientedToDrawRotation((Actor *) temp_a0, transformedPlayerPos, (Vec3f *) &globalCtx->actorCtx.actorList[2].first->world);
    if (transformedPlayerPos->z < 0.0f) {
        this->playerSide = 0;
        return;
    }
    this->playerSide = 1;
}

void EnHoll_Init(Actor *thisx, GlobalContext *globalCtx) {
    ? sp1C;
    EnHoll *temp_a0;
    EnHoll *this = (EnHoll *) thisx;

    temp_a0 = this;
    this = this;
    Actor_ProcessInitChain((Actor *) temp_a0, sInitChain);
    EnHoll_SetupAction(this);
    this->bgCoverAlphaActive = 0;
    this->alpha = 0xFF;
    EnHoll_SetPlayerSide(globalCtx, this, (Vec3f *) &sp1C);
}

void EnHoll_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    TransitionActorEntry *temp_v1;
    EnHoll *this = (EnHoll *) thisx;

    if (this->type != 4) {
        temp_v1 = &globalCtx->doorCtx.transitionActorList[(s32) (u16) this->actor.params >> 0xA];
        temp_v1->id = (s16) -(s32) temp_v1->id;
        if (this == sInstancePlayingSound) {
            sInstancePlayingSound = NULL;
        }
    }
}

void EnHoll_ChangeRooms(GlobalContext *globalCtx) {
    ? sp4;
    Room *temp_v1;
    RoomContext *temp_v0;

    temp_v0 = &globalCtx->roomCtx;
    sp4.unk_0 = (s32) temp_v0->unk_0;
    temp_v1 = &globalCtx->roomCtx.prevRoom;
    sp4.unk_4 = (s32) temp_v0->unk_4;
    sp4.unk_8 = (RoomMesh *) temp_v0->currRoom.mesh;
    sp4.unk_C = (void *) temp_v0->currRoom.segment;
    sp4.unk_10 = (s32) temp_v0->currRoom.unk_10;
    temp_v0->unk_0 = (s32) temp_v1->unk_0;
    temp_v0->unk_4 = (s32) temp_v1->unk_4;
    temp_v0->currRoom.mesh = temp_v1->mesh;
    temp_v0->currRoom.segment = temp_v1->segment;
    temp_v0->currRoom.unk_10 = temp_v1->unk_10;
    temp_v1->unk_0 = (s32) sp4.unk_0;
    temp_v1->unk_4 = (s32) sp4.unk_4;
    temp_v1->mesh = sp4.unk_8;
    temp_v1->segment = sp4.unk_C;
    temp_v1->unk_10 = sp4.unk_10;
    globalCtx->roomCtx.activeMemPage ^= 1;
}

void EnHoll_VisibleIdle(EnHoll *this, GlobalContext *globalCtx) {
    f32 sp40;
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

    if (this->type == 0) {
        temp_v0 = globalCtx->actorCtx.unkC;
        if (((((s32) (temp_v0 & 0x2AA) >> 1) | (temp_v0 & 0x155)) & D_801AED48[this->actor.params & 7]) == 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        temp_a0 = this;
        if (this == sInstancePlayingSound) {
            this = this;
            func_800B9010((Actor *) temp_a0, 0x211DU);
        }
        goto block_5;
    }
block_5:
    temp_v1 = globalCtx + 0x18000;
    if ((globalCtx->sceneLoadFlag != 0) || (globalCtx->unk_18B4A != 0)) {
        this->alpha = 0xFF;
        return;
    }
    sp18 = temp_v1;
    this = this;
    sp30 = -50.0f;
    sp2C = 150.0f;
    EnHoll_SetPlayerSide(globalCtx, this, (Vec3f *) &sp40);
    temp_v0_2 = globalCtx->sceneNum;
    temp_f14 = fabsf(sp48);
    phi_f2 = -50.0f;
    phi_f12 = 150.0f;
    if (temp_v0_2 == 0x13) {
        phi_f2 = -90.0f;
        phi_f12 = 280.0f;
    }
    if ((phi_f2 < sp44) && (sp44 < 200.0f) && (fabsf(sp40) < phi_f12) && (temp_f14 < sActivationPlaneDistance)) {
        temp_v0_3 = this->actor.params;
        temp_a0_2 = (s32) (temp_v0_3 & 0xFFFF) >> 0xA;
        if (sLoadingPlaneDistance < temp_f14) {
            if (((s32) globalCtx->roomCtx.prevRoom.num >= 0) && (globalCtx->roomCtx.unk31 == 0)) {
                this->actor.room = globalCtx->doorCtx.transitionActorList[temp_a0_2].sides[this->playerSide].room;
                if (this->actor.room == globalCtx->roomCtx.prevRoom.num) {
                    EnHoll_ChangeRooms(globalCtx);
                }
                func_8012EBF8(globalCtx, &globalCtx->roomCtx);
                return;
            }
            /* Duplicate return node #36. Try simplifying control flow for better match */
            return;
        }
        if (this->type == 4) {
            globalCtx->nextEntranceIndex = globalCtx->setupExitList[temp_v0_3 & 0x7F];
            gSaveContext.unk_3DBB = 1;
            sp18 = temp_v1;
            Scene_SetExitFade(globalCtx);
            globalCtx->sceneLoadFlag = 0x14;
            globalCtx->unk_1878C(globalCtx);
            return;
        }
        this->actor.room = globalCtx->doorCtx.transitionActorList[temp_a0_2].sides[this->playerSide ^ 1].room;
        if ((s32) globalCtx->roomCtx.prevRoom.num < 0) {
            temp_a2 = this->actor.room;
            this = this;
            Room_StartRoomTransition(globalCtx, &globalCtx->roomCtx, (s32) temp_a2);
            if (this == sInstancePlayingSound) {
                sInstancePlayingSound = NULL;
                return;
            }
            /* Duplicate return node #36. Try simplifying control flow for better match */
            return;
        }
        temp_f0 = sTransparencyPlaneDistance;
        temp_f16 = (s32) ((temp_f14 - temp_f0) * (255.0f / (sTranslucencyPlaneDistance - temp_f0)));
        if (temp_f16 < 0) {
            this->alpha = 0;
        } else {
            phi_a0 = (u8) temp_f16;
            if (temp_f16 >= 0x100) {
                phi_a0 = 0xFFU;
            }
            this->alpha = phi_a0;
        }
        if (this->actor.room != globalCtx->roomCtx.currRoom.num) {
            EnHoll_ChangeRooms(globalCtx);
            return;
        }
        /* Duplicate return node #36. Try simplifying control flow for better match */
        return;
    }
    if ((this->type == 0) && (temp_v0_2 == 0x64) && (sInstancePlayingSound == 0)) {
        sInstancePlayingSound = this;
    }
}

void EnHoll_TransparentIdle(EnHoll *this, GlobalContext *globalCtx) {
    f32 sp3C;
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
        phi_a2_2 = (Vec3f *) &globalCtx->actorCtx.actorList[2].first->world;
    }
    globalCtx = globalCtx;
    Actor_CalcOffsetOrientedToDrawRotation((Actor *) this, (Vec3f *) &sp3C, phi_a2_2);
    if (globalCtx->sceneNum == 0x23) {
        phi_f0 = 280.0f;
    } else {
        phi_f0 = 200.0f;
    }
    if ((sp40 > -50.0f) && (sp40 < phi_f0) && (fabsf(sp3C) < 200.0f)) {
        temp_f0 = fabsf(sp44);
        if ((temp_f0 < 100.0f) && (temp_f0 > 50.0f)) {
            phi_a1 = 1;
            if (sp44 < 0.0f) {
                phi_a1 = 0;
            }
            this->actor.room = globalCtx->doorCtx.transitionActorList[(s32) (u16) this->actor.params >> 0xA].sides[phi_a1].room;
            temp_a2_2 = this->actor.room;
            if ((globalCtx->roomCtx.currRoom.num != temp_a2_2) && (Room_StartRoomTransition(globalCtx, &globalCtx->roomCtx, (s32) temp_a2_2) != 0)) {
                this->actionFunc = EnHoll_RoomTransitionIdle;
            }
        }
    }
}

void EnHoll_VerticalBgCoverIdle(EnHoll *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    s8 temp_a2;
    s32 phi_v1;

    if ((this->actor.xzDistToPlayer < 120.0f) && (temp_f0 = fabsf(this->actor.yDistToPlayer), (temp_f0 < 200.0f))) {
        if (temp_f0 < 50.0f) {
            globalCtx->bgCoverAlpha = 0xFF;
        } else {
            globalCtx->bgCoverAlpha = (s16) (s32) ((200.0f - temp_f0) * 1.7f);
        }
        if (temp_f0 > 50.0f) {
            phi_v1 = 1;
            if (this->actor.yDistToPlayer > 0.0f) {
                phi_v1 = 0;
            }
            this->actor.room = globalCtx->doorCtx.transitionActorList[(s32) (u16) this->actor.params >> 0xA].sides[phi_v1].room;
            temp_a2 = this->actor.room;
            if ((globalCtx->roomCtx.currRoom.num != temp_a2) && (this = this, (Room_StartRoomTransition(globalCtx, &globalCtx->roomCtx, (s32) temp_a2) != 0))) {
                this->actionFunc = EnHoll_RoomTransitionIdle;
                this->bgCoverAlphaActive = 1;
                return;
            }
            /* Duplicate return node #13. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return;
    }
    if (this->bgCoverAlphaActive != 0) {
        this->bgCoverAlphaActive = 0;
        globalCtx->bgCoverAlpha = 0;
    }
}

void EnHoll_VerticalIdle(EnHoll *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f2;
    s8 temp_a2;
    s32 phi_v1;

    if (this->actor.xzDistToPlayer < 120.0f) {
        temp_f2 = this->actor.yDistToPlayer;
        temp_f0 = fabsf(temp_f2);
        if ((temp_f0 < 200.0f) && (temp_f0 > 50.0f)) {
            phi_v1 = 1;
            if (temp_f2 > 0.0f) {
                phi_v1 = 0;
            }
            this->actor.room = globalCtx->doorCtx.transitionActorList[(s32) (u16) this->actor.params >> 0xA].sides[phi_v1].room;
            temp_a2 = this->actor.room;
            if (globalCtx->roomCtx.currRoom.num != temp_a2) {
                this = this;
                if (Room_StartRoomTransition(globalCtx, &globalCtx->roomCtx, (s32) temp_a2) != 0) {
                    this->actionFunc = EnHoll_RoomTransitionIdle;
                }
            }
        }
    }
}

void EnHoll_RoomTransitionIdle(EnHoll *this, GlobalContext *globalCtx) {
    void *sp1C;

    if (globalCtx->roomCtx.unk31 == 0) {
        sp1C = globalCtx + 0x18000;
        this = this;
        func_8012EBF8(globalCtx, &globalCtx->roomCtx);
        if (globalCtx->bgCoverAlpha == 0) {
            this->bgCoverAlphaActive = 0;
        }
        EnHoll_SetupAction(this);
    }
}

void EnHoll_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnHoll *this = (EnHoll *) thisx;
    if ((globalCtx->sceneLoadFlag == 0) && (globalCtx->unk_18B4A == 0) && ((globalCtx->actorCtx.actorList[2].first->unk_A6C & 0x200) == 0)) {
        this->actionFunc(this, globalCtx);
    }
}

void EnHoll_Draw(Actor *thisx, GlobalContext *globalCtx) {
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
    EnHoll *this = (EnHoll *) thisx;

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
        temp_a2_2 = &temp_a2[1];
        temp_a2->words.w1 = (u32) this->alpha;
        temp_a2_2->words.w1 = (u32) &gEnHollCentralPlaneDL;
        temp_a2_2->words.w0 = 0xDE000000;
        temp_a2_3 = &temp_a2_2[1];
        if (this->alpha == 0xFF) {
            globalCtx->state.gfxCtx->polyOpa.p = temp_a2_3;
            return;
        }
        globalCtx->state.gfxCtx->polyXlu.p = temp_a2_3;
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}
