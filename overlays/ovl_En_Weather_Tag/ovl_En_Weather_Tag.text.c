void EnWeatherTag_SetupAction(EnWeatherTag *arg0, void (*arg1)(EnWeatherTag *, GlobalContext *), EnWeatherTag *); /* static */
u8 func_80966608(Actor *arg0, GlobalContext *arg1, ? arg2, s32 arg3, u8 arg4, u8 arg5, u16 arg6, u8 arg7); /* static */
u8 func_80966758(Actor *arg0, GlobalContext *arg1, ? arg2, ? arg3, u8 arg4, u8 arg5, u16 arg6); /* static */
void func_8096689C(Actor *arg0, GlobalContext *arg1); /* static */
extern u8 D_801BDBB0;
extern u8 D_801BDBB4;
extern u8 D_801BDBB8;
extern s8 D_801F4E30;
extern f32 D_801F4E74;
extern s16 D_801F4E7A;



void EnWeatherTag_SetupAction(EnWeatherTag *arg0, void (*arg1)(EnWeatherTag *, GlobalContext *)) {
    arg0->actionFunc = arg1;
}

void EnWeatherTag_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnWeatherTag *this = (EnWeatherTag *) thisx;

}

void EnWeatherTag_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnWeatherTag *this = (EnWeatherTag *) thisx;
    Path *sp1C;
    EnWeatherTag *temp_a0;
    EnWeatherTag *temp_a2;
    Path *temp_a3;
    s16 temp_v1;
    u32 temp_t8;
    EnWeatherTag *phi_a2;

    temp_a2 = this;
    temp_v1 = temp_a2->actor.params;
    temp_t8 = temp_v1 & 0xF;
    temp_a2->actor.flags &= -2;
    phi_a2 = temp_a2;
    switch (temp_t8) {
    case 0:
        temp_a2->unk154 = 0;
        temp_a2->fadeDistance = (u16) temp_a2->actor.world.rot.x;
        temp_a2->unk158 = (u16) temp_a2->actor.world.rot.y;
        EnWeatherTag_SetupAction(temp_a2, func_80966A08, temp_a2);
        return;
    case 1:
        temp_a0 = temp_a2;
        if ((gSaveContext.weekEventReg[52] & 0x20) != 0) {
            this = temp_a2;
            Actor_MarkForDeath(&temp_a0->actor);
            phi_a2 = this;
        }
        EnWeatherTag_SetupAction(phi_a2, func_80966B08, phi_a2);
        return;
    case 2:
        EnWeatherTag_SetupAction(temp_a2, func_80966E0C, temp_a2);
        return;
    case 3:
        EnWeatherTag_SetupAction(temp_a2, func_80966EF0, temp_a2);
        return;
    case 4:
        EnWeatherTag_SetupAction(temp_a2, func_80966FEC, temp_a2);
        return;
    case 5:
        this = temp_a2;
        func_800BC154(globalCtx, &globalCtx->actorCtx, &temp_a2->actor, 7U);
        globalCtx->skyboxId = 3;
        globalCtx->envCtx.unk_1F = 5;
        globalCtx->envCtx.unk_20 = 5;
        D_801F4E74 = 1.0f;
        EnWeatherTag_SetupAction(this, func_80966BF4);
        return;
    case 6:
        temp_a3 = &globalCtx->setupPathList[((s32) temp_v1 >> 4) & 0xF];
        sp1C = temp_a3;
        this = temp_a2;
        this->pathPoints = Lib_SegmentedToVirtual((void *) temp_a3->points);
        this->pathCount = temp_a3->count;
        EnWeatherTag_SetupAction(this, func_809672DC);
        return;
    case 7:
        EnWeatherTag_SetupAction(temp_a2, func_809674C8, temp_a2);
        // fallthrough
    default:
        return;
    }
}

u8 func_80966608(Actor *arg0, GlobalContext *arg1, ? arg2, s32 arg3, u8 arg4, u8 arg5, u16 arg6, u8 arg7) {
    u8 sp1B;
    Actor *temp_a0;
    f32 temp_f6;
    s32 temp_t1;
    f32 phi_f6;
    u8 phi_v1;

    temp_a0 = arg1->actorCtx.actorList[2].first;
    arg1 = arg1;
    sp1B = 0;
    temp_t1 = ((s32) arg0->params >> 8) & 0xFF;
    temp_f6 = (f32) temp_t1;
    phi_f6 = temp_f6;
    phi_v1 = sp1B;
    if (temp_t1 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    if ((Actor_XZDistanceBetweenActors(temp_a0, arg0) < (phi_f6 * 100.0f)) && (arg1->envCtx.unk_20 == arg1->envCtx.unk_1F) && ((D_801BDBB8 = 1, (arg1->envCtx.unk_1E != 0)) || ((arg1->envCtx.unk_1F != 1) && (arg1->envCtx.unk_21 == 0)))) {
        D_801BDBB8 = 0;
        if (arg7 != D_801BDBB0) {
            D_801BDBB0 = arg7;
            arg1->envCtx.unk_21 = 1;
            arg1->envCtx.unk_1F = arg4;
            arg1->envCtx.unk_20 = arg5;
            D_801BDBB4 = arg5;
            arg1->envCtx.unk_24 = arg6;
            arg1->envCtx.unk_22 = arg1->envCtx.unk_24;
        }
        phi_v1 = 1U;
    }
    return phi_v1;
}

u8 func_80966758(Actor *arg0, GlobalContext *arg1, ? arg2, ? arg3, u8 arg4, u8 arg5, u16 arg6) {
    u8 sp1B;
    Actor *temp_a0;
    f32 temp_f6;
    s32 temp_t0;
    f32 phi_f6;
    u8 phi_v1;

    temp_a0 = arg1->actorCtx.actorList[2].first;
    arg1 = arg1;
    sp1B = 0;
    temp_t0 = ((s32) arg0->params >> 8) & 0xFF;
    temp_f6 = (f32) temp_t0;
    phi_f6 = temp_f6;
    phi_v1 = sp1B;
    if (temp_t0 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    if (((phi_f6 * 100.0f) < Actor_XZDistanceBetweenActors(temp_a0, arg0)) && (arg1->envCtx.unk_20 == arg1->envCtx.unk_1F) && ((D_801BDBB8 = 1, (arg1->envCtx.unk_1E != 0)) || ((arg1->envCtx.unk_1F != 1) && (arg1->envCtx.unk_21 == 0)))) {
        D_801BDBB8 = 0;
        D_801BDBB0 = 0;
        arg1->envCtx.unk_21 = 1;
        arg1->envCtx.unk_1F = arg4;
        arg1->envCtx.unk_20 = arg5;
        D_801BDBB4 = arg5;
        arg1->envCtx.unk_24 = arg6;
        arg1->envCtx.unk_22 = arg1->envCtx.unk_24;
        phi_v1 = 1U & 0xFF;
    }
    return phi_v1;
}

void func_8096689C(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f6;
    u16 temp_t8;
    u16 temp_v0;
    f32 phi_f2;
    f32 phi_f6;
    f32 phi_f12;
    f32 phi_f2_2;

    temp_a1 = arg0;
    temp_a0 = arg1->actorCtx.actorList[2].first;
    arg1 = arg1;
    arg0 = temp_a1;
    temp_f0 = Actor_XZDistanceBetweenActors(temp_a0, temp_a1);
    temp_v0 = arg0->unk156;
    temp_f2 = (f32) temp_v0;
    phi_f2 = temp_f2;
    phi_f12 = temp_f0;
    if ((s32) temp_v0 < 0) {
        phi_f2 = temp_f2 + 4294967296.0f;
    }
    phi_f2_2 = phi_f2;
    if (phi_f2 < temp_f0) {
        phi_f12 = phi_f2;
    }
    if (temp_v0 == 0) {
        arg0->unk156 = 1U;
        phi_f2_2 = (f32) (1U & 0xFFFF);
    }
    temp_t8 = arg0->unk154;
    temp_f6 = (f32) temp_t8;
    phi_f6 = temp_f6;
    if ((s32) temp_t8 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_f0_2 = (phi_f6 / 32768.0f) * (1.0f - (phi_f12 / phi_f2_2));
    arg1->envCtx.windSpeed = ((f32) arg0->world.rot.z * temp_f0_2) + 30.0f;
    if (temp_f0_2 > 0.01f) {
        arg1->envCtx.unk_EA = 8;
        D_801F4E30 = 0x9B;
        return;
    }
    if (arg1->envCtx.unk_EA == 8) {
        D_801F4E30 = 0;
        arg1->envCtx.unk_EA = 9;
    }
}

void func_80966A08(EnWeatherTag *this, GlobalContext *globalCtx) {
    u16 temp_t8;

    temp_t8 = this->unk154 + this->unk158;
    this->unk154 = temp_t8;
    if ((temp_t8 & 0xFFFF) >= 0x8001) {
        this->unk154 = 0x8000;
        EnWeatherTag_SetupAction((EnWeatherTag *) func_80966A68);
    }
    func_8096689C(&this->actor, globalCtx);
}

void func_80966A68(EnWeatherTag *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    u16 temp_t9;
    s16 phi_v0;

    temp_t9 = this->unk154 - ((s32) this->unk158 >> 1);
    temp_v0 = temp_t9 & 0xFFFF;
    this->unk154 = temp_t9;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        this->unk154 = 1;
        phi_v0 = 1U & 0xFFFF;
    }
    if ((s32) phi_v0 < 0) {
        this->unk154 = 0;
        Actor_MarkForDeath(&this->actor);
        EnWeatherTag_SetupAction(this, EnWeatherTag_Die);
    }
    func_8096689C(&this->actor, globalCtx);
}

void EnWeatherTag_Die(EnWeatherTag *this, GlobalContext *globalCtx) {
    EnWeatherTag *self = (EnWeatherTag *) this;
    Actor_MarkForDeath(&self->actor);
}

void func_80966B08(EnWeatherTag *this, GlobalContext *globalCtx) {
    if ((func_80966608(&this->actor, NULL, 0, (s32) globalCtx->envCtx.unk_1F, (u8) 5, (u8) 0x64, (u16) 2) != 0) || (D_801BDBB0 == 2)) {
        globalCtx->skyboxId = 3;
        EnWeatherTag_SetupAction(this, func_80966D20);
        return;
    }
    if (D_801F4E74 <= 0.01f) {
        globalCtx->skyboxId = 1;
        return;
    }
    Math_SmoothStepToF(&D_801F4E74, 0.0f, 0.2f, 0.02f, 0.001f);
}

void func_80966BF4(EnWeatherTag *this, GlobalContext *globalCtx) {
    u8 sp2F;
    CsCmdActorAction *temp_v1;
    s32 temp_v0;
    u8 phi_v0;

    if (func_800EE29C(globalCtx, 0x237U) != 0) {
        temp_v1 = globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x237U)];
        if (((s32) globalCtx->csCtx.frames >= (s32) temp_v1->startFrame) && ((s32) temp_v1->unk0 >= 2)) {
            temp_v0 = gSaveContext.day;
            if ((temp_v0 != 0) && (temp_v0 != 1)) {
                if (temp_v0 != 2) {
                    if (temp_v0 != 3) {
                        goto block_7;
                    }
                    phi_v0 = 4U;
                } else {
                    phi_v0 = 3U;
                }
            } else {
block_7:
                phi_v0 = 0U;
            }
            sp2F = phi_v0;
            Math_SmoothStepToF(&D_801F4E74, 0.0f, 0.2f, 0.02f, 0.001f);
            if (phi_v0 != globalCtx->envCtx.unk_20) {
                globalCtx->envCtx.unk_21 = 1;
                globalCtx->envCtx.unk_20 = phi_v0;
                globalCtx->envCtx.unk_24 = 0x64;
                globalCtx->envCtx.unk_22 = globalCtx->envCtx.unk_24;
            }
        }
    }
}

void func_80966D20(EnWeatherTag *this, GlobalContext *globalCtx) {
    u8 sp2F;
    s32 temp_v0;
    u8 phi_v0;

    temp_v0 = gSaveContext.day;
    if ((temp_v0 != 0) && (temp_v0 != 1)) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                goto block_4;
            }
            phi_v0 = 4U;
        } else {
            phi_v0 = 3U;
        }
    } else {
block_4:
        phi_v0 = 0U;
    }
    sp2F = phi_v0;
    Math_SmoothStepToF(&D_801F4E74, 1.0f, 0.2f, 0.02f, 0.001f);
    if (func_80966758(&this->actor, globalCtx, 1, 0, (u8) 5, (u8) (s32) phi_v0, (u16) 0x64) != 0) {
        EnWeatherTag_SetupAction(this, func_80966B08);
    }
    if (D_801BDBB0 != 2) {
        EnWeatherTag_SetupAction(this, func_80966B08);
    }
}

void func_80966E0C(EnWeatherTag *this, GlobalContext *globalCtx) {
    if (func_80966608(&this->actor, globalCtx, 0, 1, (u8) 0, (u8) 2, (u16) 0x3C, (u8) 3) != 0) {
        globalCtx->envCtx.unk_F2[3] = 0x80;
        EnWeatherTag_SetupAction(this, func_80966E84);
    }
}

void func_80966E84(EnWeatherTag *this, GlobalContext *globalCtx) {
    if (func_80966758(&this->actor, globalCtx, 1, 0, (u8) 2, (u8) 0, (u16) 0x3C) != 0) {
        globalCtx->envCtx.unk_F2[3] = 0;
        EnWeatherTag_SetupAction(this, func_80966E0C);
    }
}

void func_80966EF0(EnWeatherTag *this, GlobalContext *globalCtx) {
    if (func_80966608(&this->actor, globalCtx, 0, 1, (u8) 0, (u8) 2, (u16) 0x64, (u8) 4) != 0) {
        func_800FD78C(globalCtx);
        globalCtx->envCtx.unk_F2[0] = 0x3C;
        EnWeatherTag_SetupAction(this, func_80966F74);
    }
}

void func_80966F74(EnWeatherTag *this, GlobalContext *globalCtx) {
    if (func_80966758(&this->actor, globalCtx, 1, 0, (u8) 2, (u8) 0, (u16) 0x64) != 0) {
        func_800FD858(globalCtx);
        globalCtx->envCtx.unk_F2[0] = 0;
        EnWeatherTag_SetupAction(this, func_80966EF0);
    }
}

void func_80966FEC(EnWeatherTag *this, GlobalContext *globalCtx) {
    s32 temp_v0;

    temp_v0 = (((s32) this->actor.params >> 8) & 0xFF) * 0x64;
    if (temp_v0 > 0) {
        D_801F4E7A = (s16) temp_v0;
    }
    if ((globalCtx->sceneNum == 0x14) && ((globalCtx->actorCtx.unk5 & 2) != 0)) {
        EnWeatherTag_SetupAction((EnWeatherTag *) func_80967060);
    }
}

void func_80967060(EnWeatherTag *this, GlobalContext *globalCtx) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    Vec3f sp18;
    f32 *temp_a1;

    temp_a1 = &sp24;
    sp24 = 1055.0f;
    sp28 = -145.0f;
    sp2C = 181.0f;
    func_80169474(globalCtx, (Vec3f *) temp_a1, &sp18);
    if ((globalCtx->view.fovy < 25.0f) && (sp18.x >= 70.0f) && (sp18.x < 250.0f) && (sp18.y >= 30.0f) && (sp18.y < 210.0f)) {
        EnWeatherTag_SetupAction(this, func_80967148);
    }
}

void func_80967148(EnWeatherTag *this, GlobalContext *globalCtx) {
    s16 sp1E;
    s8 temp_a0;

    temp_a0 = this->actor.cutscene;
    sp1E = (s16) temp_a0;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        ActorCutscene_Start((s16) temp_a0, &this->actor);
        EnWeatherTag_SetupAction(this, EnWeatherTag_DoNothing);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a0);
}

void EnWeatherTag_DoNothing(EnWeatherTag *this, GlobalContext *globalCtx) {
    EnWeatherTag *self = (EnWeatherTag *) this;

}

void EnWeatherTag_Unused_809671B8(EnWeatherTag *this, GlobalContext *globalCtx) {
    EnWeatherTag *self = (EnWeatherTag *) this;
    if (func_80966608(&self->actor, globalCtx, 0, 1, (u8) 0, (u8) 4, (u16) 0x64, (u8) 5) != 0) {
        func_800FD78C(globalCtx);
        globalCtx->envCtx.unk_E3 = 1;
        globalCtx->envCtx.unk_F2[0] = 0x3C;
        EnWeatherTag_SetupAction(self, EnWeatherTag_Unused_80967250);
    }
}

void EnWeatherTag_Unused_80967250(EnWeatherTag *this, GlobalContext *globalCtx) {
    EnWeatherTag *self = (EnWeatherTag *) this;
    if (func_80966758(&self->actor, globalCtx, 1, 0, (u8) 4, (u8) 0, (u16) 0x64) != 0) {
        func_800FD858(globalCtx);
        globalCtx->envCtx.unk_E3 = 2;
        globalCtx->envCtx.unk_F2[0] = 0;
        EnWeatherTag_SetupAction(self, EnWeatherTag_Unused_809671B8);
    }
}

void func_809672DC(EnWeatherTag *this, GlobalContext *globalCtx) {
    Actor *sp3C;
    f32 sp2C;
    Actor *temp_v0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f6;
    s32 temp_t9;
    f32 phi_f6;
    f32 phi_f12;
    f32 phi_f12_2;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    sp3C = temp_v0;
    sp2C = 0.0f;
    func_800BCCDC(this->pathPoints, this->pathCount, &temp_v0->world.pos, &this->actor.world.pos, 0);
    temp_f0 = Actor_XZDistanceBetweenActors(sp3C, &this->actor);
    temp_t9 = ((s32) this->actor.params >> 8) & 0xFF;
    temp_f6 = (f32) temp_t9;
    phi_f6 = temp_f6;
    phi_f12_2 = 0.0f;
    if (temp_t9 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_f14 = phi_f6 * 100.0f;
    if (temp_f0 < temp_f14) {
        temp_f18 = temp_f0 / temp_f14;
        globalCtx->envCtx.unk_EA = 6;
        temp_f12 = 1.0f - temp_f18;
        phi_f12 = temp_f12;
        if (temp_f12 > 0.8f) {
            phi_f12 = 1.0f;
        }
        D_801F4E30 = (s8) (u32) (200.0f * phi_f12);
        phi_f12_2 = phi_f12;
    } else if (globalCtx->envCtx.unk_EA == 6) {
        D_801F4E30 = 0;
        globalCtx->envCtx.unk_EA = 7;
    }
    Math_SmoothStepToS(&globalCtx->envCtx.unk_8C.fogNear, (s16) (s32) (-40.0f * phi_f12_2), 1, 1, (s16) 1);
}

void func_809674C8(EnWeatherTag *this, GlobalContext *globalCtx) {
    void *sp18;
    Actor *temp_a0;
    f32 temp_f6;
    s32 temp_t0;
    u16 temp_v0;
    u8 temp_t8;
    u8 temp_v1;
    f32 phi_f6;

    temp_a0 = globalCtx->actorCtx.actorList[2].first;
    globalCtx = globalCtx;
    temp_t0 = ((s32) this->actor.params >> 8) & 0xFF;
    temp_f6 = (f32) temp_t0;
    phi_f6 = temp_f6;
    if (temp_t0 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    if (Actor_XZDistanceBetweenActors(temp_a0, &this->actor) < (phi_f6 * 100.0f)) {
        if ((((s32) gSaveContext.day % 5) == 2) && (temp_v0 = gSaveContext.time, (((s32) temp_v0 < 0x4AAA) == 0)) && ((s32) temp_v0 < 0xBAAA) && (globalCtx->envCtx.unk_F2[2] == 0)) {
            D_801BDBB0 = 1;
            sp18 = globalCtx + 0x10000;
            func_800FD78C(globalCtx);
            globalCtx->envCtx.unk_F2[4] = 0x20;
            EnWeatherTag_SetupAction(this, func_80967608);
            return;
        }
        // Duplicate return node #12. Try simplifying control flow for better match
        return;
    }
    temp_v1 = globalCtx->envCtx.unk_F2[4];
    if (temp_v1 != 0) {
        temp_t8 = temp_v1 - 1;
        if ((globalCtx->state.frames & 3) == 0) {
            globalCtx->envCtx.unk_F2[4] = temp_t8;
            if ((temp_t8 & 0xFF) == 8) {
                func_800FD858(globalCtx);
            }
        }
    }
}

void func_80967608(EnWeatherTag *this, GlobalContext *globalCtx) {
    EnWeatherTag *temp_a2;
    f32 temp_f6;
    s32 temp_t9;
    f32 phi_f6;

    temp_a2 = this;
    this = temp_a2;
    temp_t9 = ((s32) this->actor.params >> 8) & 0xFF;
    temp_f6 = (f32) temp_t9;
    phi_f6 = temp_f6;
    if (temp_t9 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    if (((phi_f6 * 100.0f) + 10.0f) < Actor_XZDistanceBetweenActors(globalCtx->actorCtx.actorList[2].first, &temp_a2->actor)) {
        D_801BDBB0 = 0;
        EnWeatherTag_SetupAction(this, func_809674C8, this);
    }
}

void EnWeatherTag_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnWeatherTag *this = (EnWeatherTag *) thisx;
    GameInfo *temp_v0;
    u16 temp_t4;

    this->actionFunc(this, globalCtx);
    if (((globalCtx->actorCtx.unk5 & 2) != 0) && (globalCtx->msgCtx.unk11F22 != 0) && (globalCtx->msgCtx.unk11F04 == 0x5E6) && (FrameAdvance_IsEnabled(globalCtx) == 0) && (globalCtx->sceneLoadFlag == 0) && (ActorCutscene_GetCurrentIndex() == -1) && (globalCtx->csCtx.state == 0)) {
        temp_v0 = gGameInfo;
        temp_t4 = (u16) temp_v0->data[15] + gSaveContext.time;
        gSaveContext.time = temp_t4;
        if (temp_v0->data[15] != 0) {
            gSaveContext.time = gSaveContext.unk16 + temp_t4;
        }
    }
}

void EnWeatherTag_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnWeatherTag *this = (EnWeatherTag *) thisx;

}

