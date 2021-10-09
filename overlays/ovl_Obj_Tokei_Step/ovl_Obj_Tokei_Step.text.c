void ObjTokeiStep_AddQuake(Actor *arg0, GlobalContext *arg1); /* static */
void ObjTokeiStep_InitSteps(ObjTokeiStep *arg0);    /* static */
void ObjTokeiStep_InitStepsOpen(ObjTokeiStep *arg0); /* static */
void ObjTokeiStep_InitTimers(ObjTokeiStep *arg0);   /* static */
s32 ObjTokeiStep_OpenProcess(Actor *arg0, GlobalContext *arg1); /* static */
void ObjTokeiStep_SetSysMatrix(ObjTokeiStepPanel *arg0); /* static */
void ObjTokeiStep_SpawnDust(Actor *arg0, void *arg1, GlobalContext *arg2); /* static */
extern Gfx D_06000088;
extern CollisionHeader D_06000968;
static f32 D_80AD6620 = {-105.0f, -90.0f, -75.0f, -60.0f, -45.0f, -30.0f, -15.0f};
static f32 D_80AD663C = {-60.0f, -40.0f, -20.0f, 0.0f, 20.0f, 40.0f, 60.0f};
static Vec3f D_80AD6658 = {0.0f, 0.3f, 0.0f};
static InitChainEntry D_80AD6664;                   /* unable to generate initializer */



void ObjTokeiStep_SetSysMatrix(ObjTokeiStepPanel *arg0) {
    MtxF *temp_v0;

    temp_v0 = SysMatrix_GetCurrentState();
    temp_v0->mf[3][0] = arg0->pos.x;
    temp_v0->mf[3][1] = arg0->pos.y;
    temp_v0->mf[3][2] = arg0->pos.z;
}

void ObjTokeiStep_AddQuake(Actor *arg0, GlobalContext *arg1) {
    s16 sp26;
    s16 temp_v0;
    s32 temp_a0;

    temp_v0 = Quake_Add((arg1 + (arg1->activeCamera * 4))->unk800, 3U);
    temp_a0 = temp_v0 << 0x10;
    sp26 = temp_v0;
    Quake_SetSpeed((s16) (temp_a0 >> 0x10), 0x4E20);
    Quake_SetQuakeValues(sp26, 1, 0, 0, (s16) 0);
    Quake_SetCountdown(sp26, 7);
    func_8013ECE0(arg0->xyzDistToPlayerSq, 0x78U, 0x14U, 0xAU);
}

void ObjTokeiStep_SpawnDust(Actor *arg0, void *arg1, GlobalContext *arg2) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    Vec3f sp78;
    Vec3f *temp_s2;
    f32 *temp_a0;
    f32 *temp_s0;
    f32 temp_f20;
    f32 *phi_s0;

    Matrix_RotateY(arg0->shape.rot.y, 0U);
    temp_s2 = &sp78;
    sp88 = 115.0f;
    sp8C = -10.0f;
    phi_s0 = &D_80AD663C;
    do {
        temp_a0 = &sp84;
        sp84 = *phi_s0;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, temp_s2);
        sp78.x += arg1->unk0;
        sp78.y += arg1->unk4;
        sp78.z += arg1->unk8;
        temp_f20 = Rand_ZeroOne();
        func_800B1210(arg2, temp_s2, &D_801D15B0, &D_80AD6658, (s16) (s32) ((temp_f20 * 40.0f) + 80.0f), (s16) (s32) ((Rand_ZeroOne() * 20.0f) + 50.0f));
        temp_s0 = phi_s0 + 4;
        phi_s0 = temp_s0;
    } while (temp_s0 != &D_80AD6658);
}

void ObjTokeiStep_InitSteps(ObjTokeiStep *arg0) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 *temp_s3;
    s32 temp_s0;
    s32 phi_s0;
    Vec3f *phi_s1;

    SysMatrix_SetStateRotationAndTranslation(arg0->dyna.actor.world.pos.x, arg0->dyna.actor.world.pos.y, arg0->dyna.actor.world.pos.z, arg0 + 0xBC);
    temp_s3 = &sp4C;
    sp4C = 0.0f;
    sp50 = 0.0f;
    phi_s0 = 0;
    phi_s1 = arg0 + 0x160;
    do {
        sp54 = (f32) phi_s0 * -20.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_s3, phi_s1);
        temp_s0 = phi_s0 + 1;
        phi_s1->unkC = 0.0f;
        phi_s1->unk12 = 0;
        phi_s0 = temp_s0;
        phi_s1 += 0x14;
    } while (temp_s0 != 7);
}

void ObjTokeiStep_InitStepsOpen(ObjTokeiStep *arg0) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 *temp_s3;
    s32 temp_s0;
    f32 *phi_s2;
    s32 phi_s0;
    Vec3f *phi_s1;

    SysMatrix_SetStateRotationAndTranslation(arg0->dyna.actor.world.pos.x, arg0->dyna.actor.world.pos.y, arg0->dyna.actor.world.pos.z, arg0 + 0xBC);
    temp_s3 = &sp44;
    sp44 = 0.0f;
    phi_s2 = &D_80AD6620;
    phi_s0 = 0;
    phi_s1 = arg0 + 0x160;
    do {
        sp48 = *phi_s2;
        sp4C = (f32) phi_s0 * -20.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_s3, phi_s1);
        temp_s0 = phi_s0 + 1;
        phi_s2 += 4;
        phi_s0 = temp_s0;
        phi_s1 += 0x14;
    } while (temp_s0 != 7);
}

void ObjTokeiStep_InitTimers(ObjTokeiStep *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    arg0->panels[0].startFallingTimer = 0;
    temp_v1 = arg0 + 0x14;
    temp_v1->unk170 = 0xA;
    temp_v1->unk184 = 0xA;
    temp_v1_2 = arg0 + (3 * 0x14);
    temp_v1_2->unk184 = 0xA;
    temp_v1_2->unk198 = 0xA;
    temp_v1_2->unk1AC = 0xA;
    temp_v1_2->unk170 = 0xA;
}

s32 ObjTokeiStep_OpenProcess(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f20;
    f32 temp_f2;
    s16 temp_v0;
    s32 temp_s2;
    s32 phi_v1;
    void *phi_s0;
    s32 phi_s2;
    s32 phi_s3;

    phi_v1 = 1;
    phi_s0 = arg0 + 0x160;
    phi_s2 = 0;
    phi_s3 = 1;
    do {
        if (phi_v1 != 0) {
            temp_v0 = phi_s0->unk10;
            if ((s32) temp_v0 > 0) {
                phi_s0->unk10 = (s16) (temp_v0 - 1);
                phi_s3 = 0;
            }
        }
        if ((phi_v1 != 0) && ((s32) phi_s0->unk12 < 3) && ((s32) phi_s0->unk10 <= 0)) {
            temp_f20 = (&D_80AD6620)[phi_s2] + arg0->world.pos.y;
            phi_s3 = 0;
            if (phi_s0->unk13 == 0) {
                Audio_PlayActorSound2(arg0, 0x2945U);
                phi_s0->unk13 = 1;
            }
            phi_s0->unkC = (f32) (phi_s0->unkC + -2.5f);
            phi_s0->unkC = (f32) (phi_s0->unkC * 0.83f);
            phi_s0->unk4 = (f32) (phi_s0->unk4 + phi_s0->unkC);
            if (phi_s0->unk4 < temp_f20) {
                phi_s0->unk12 = (s8) (phi_s0->unk12 + 1);
                if ((s32) phi_s0->unk12 >= 3) {
                    phi_s0->unk4 = temp_f20;
                } else {
                    phi_s0->unkC = (f32) (phi_s0->unkC * -0.4f);
                    if (phi_s0->unkC > 4.0f) {
                        phi_s0->unkC = 4.0f;
                    }
                    phi_s0->unk4 = (f32) ((phi_s0->unk4 - temp_f20) * -0.4f);
                    temp_f2 = phi_s0->unk4;
                    if (phi_s0->unkC < temp_f2) {
                        phi_s0->unk4 = (f32) (phi_s0->unkC + temp_f20);
                    } else {
                        phi_s0->unk4 = (f32) (temp_f2 + temp_f20);
                    }
                    if (phi_s0->unk12 == 1) {
                        ObjTokeiStep_SpawnDust(arg0, phi_s0, arg1);
                        ObjTokeiStep_AddQuake(arg0, arg1);
                    }
                }
            }
        }
        temp_s2 = phi_s2 + 1;
        phi_v1 = (s32) phi_s0->unk12 > 0;
        phi_s0 += 0x14;
        phi_s2 = temp_s2;
    } while (temp_s2 != 7);
    return phi_s3;
}

void ObjTokeiStep_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjTokeiStep *this = (ObjTokeiStep *) thisx;
    s32 temp_v0;

    globalCtx = globalCtx;
    Actor_ProcessInitChain(&this->dyna.actor, &D_80AD6664);
    BcCheck3_BgActorInit(&this->dyna, 0);
    if ((globalCtx->sceneNum == 0x6F) && (gSaveContext.sceneSetupIndex == 2) && (globalCtx->csCtx.unk_12 == 0)) {
        BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_06000968);
        ObjTokeiStep_InitSteps(this);
        ObjTokeiStep_SetupBeginOpen(this);
        return;
    }
    temp_v0 = gSaveContext.day;
    if ((((temp_v0 % 5) == 3) && ((s32) gSaveContext.time < 0x4000)) || (temp_v0 >= 4)) {
        this->dyna.actor.draw = ObjTokeiStep_DrawOpen;
        ObjTokeiStep_InitStepsOpen(this);
        ObjTokeiStep_SetupDoNothingOpen(this);
        return;
    }
    BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_06000968);
    ObjTokeiStep_InitSteps(this);
    ObjTokeiStep_SetupDoNothing(this);
}

void ObjTokeiStep_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjTokeiStep *this = (ObjTokeiStep *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void ObjTokeiStep_SetupBeginOpen(ObjTokeiStep *this) {
    ObjTokeiStep *self = (ObjTokeiStep *) this;
    self->actionFunc = ObjTokeiStep_BeginOpen;
}

void ObjTokeiStep_BeginOpen(ObjTokeiStep *this, GlobalContext *globalCtx) {
    ObjTokeiStep *self = (ObjTokeiStep *) this;
    CsCmdActorAction *temp_v1;

    if (func_800EE29C(globalCtx, 0x86U) != 0) {
        temp_v1 = globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x86U)];
        if ((globalCtx->csCtx.frames == temp_v1->startFrame) && (temp_v1->unk0 != 0)) {
            self->dyna.actor.draw = ObjTokeiStep_DrawOpen;
            ObjTokeiStep_SetupOpen(self);
        }
    }
}

void ObjTokeiStep_SetupDoNothing(ObjTokeiStep *this) {
    ObjTokeiStep *self = (ObjTokeiStep *) this;
    self->actionFunc = ObjTokeiStep_DoNothing;
}

void ObjTokeiStep_DoNothing(ObjTokeiStep *this, GlobalContext *globalCtx) {
    ObjTokeiStep *self = (ObjTokeiStep *) this;

}

void ObjTokeiStep_SetupOpen(ObjTokeiStep *this) {
    ObjTokeiStep *self = (ObjTokeiStep *) this;
    ObjTokeiStep_InitTimers(self);
    self->actionFunc = ObjTokeiStep_Open;
}

void ObjTokeiStep_Open(ObjTokeiStep *this, GlobalContext *globalCtx) {
    ObjTokeiStep *self = (ObjTokeiStep *) this;
    GlobalContext *temp_a1;

    temp_a1 = globalCtx;
    globalCtx = globalCtx;
    if (ObjTokeiStep_OpenProcess(&self->dyna.actor, temp_a1) != 0) {
        func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, self->dyna.bgId);
        ObjTokeiStep_SetupDoNothingOpen(self);
    }
}

void ObjTokeiStep_SetupDoNothingOpen(ObjTokeiStep *this) {
    ObjTokeiStep *self = (ObjTokeiStep *) this;
    self->dyna.actor.flags &= -0x11;
    self->actionFunc = ObjTokeiStep_DoNothingOpen;
}

void ObjTokeiStep_DoNothingOpen(ObjTokeiStep *this, GlobalContext *globalCtx) {
    ObjTokeiStep *self = (ObjTokeiStep *) this;

}

void ObjTokeiStep_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjTokeiStep *this = (ObjTokeiStep *) thisx;
    this->actionFunc(this, globalCtx);
}

void ObjTokeiStep_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjTokeiStep *this = (ObjTokeiStep *) thisx;
    func_800BDFC0(globalCtx, &D_06000088);
}

void ObjTokeiStep_DrawOpen(Actor *thisx, GlobalContext *globalCtx) {
    ObjTokeiStep *this = (ObjTokeiStep *) thisx;
    GraphicsContext *sp44;
    Gfx *temp_s0;
    Gfx *temp_s0_3;
    GraphicsContext *temp_v1;
    s32 temp_s2;
    void *temp_s0_2;
    ObjTokeiStepPanel *phi_s3;
    Gfx *phi_s0;
    s32 phi_s2;

    temp_v1 = globalCtx->state.gfxCtx;
    temp_s0 = temp_v1->polyOpa.p;
    temp_s0->words.w0 = 0xDE000000;
    temp_s0->words.w1 = (u32) (sSetupDL + 0x4B0);
    sp44 = temp_v1;
    phi_s3 = this->panels;
    phi_s0 = temp_s0 + 8;
    phi_s2 = 0;
    do {
        ObjTokeiStep_SetSysMatrix(phi_s3);
        phi_s0->words.w0 = 0xDA380003;
        temp_s0_2 = phi_s0 + 8;
        phi_s0->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_s0_2->unk0 = 0xDE000000U;
        temp_s0_2->unk4 = &D_06000088;
        temp_s0_3 = temp_s0_2 + 8;
        temp_s2 = phi_s2 + 0x14;
        phi_s3 += 0x14;
        phi_s0 = temp_s0_3;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x8C);
    sp44->polyOpa.p = temp_s0_3;
}

