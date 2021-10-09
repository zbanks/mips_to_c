extern Gfx D_060003B8;
extern CollisionHeader D_060011B0;
static InitChainEntry D_80BDAF80;                   /* unable to generate initializer */
static Vec3f iceSmokeAccel = {0.0f, 0.0f, 0.0f};



void ObjHsStump_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjHsStump *this = (ObjHsStump *) thisx;
    u8 temp_v0;

    Actor_ProcessInitChain(&this->dyna.actor, &D_80BDAF80);
    this->isHidden = ((s32) this->dyna.actor.params >> 0xC) & 0xF;
    this->switchFlag = this->dyna.actor.params & 0x7F;
    BcCheck3_BgActorInit(&this->dyna, 1);
    BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_060011B0);
    temp_v0 = this->isHidden;
    if (temp_v0 != 0) {
        if (temp_v0 == 1) {
            if (Flags_GetSwitch(globalCtx, (s32) this->switchFlag) != 0) {
                this->isHidden = 0;
            } else {
                this->dyna.actor.draw = NULL;
                Actor_SetScale(&this->dyna.actor, 0.0f);
                func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
            }
            goto block_5;
        }
    } else {
block_5:
        ObjHsStump_SetupIdle(this, globalCtx);
    }
}

void ObjHsStump_SetupIdle(ObjHsStump *this, GlobalContext *globalCtx) {
    ObjHsStump *self = (ObjHsStump *) this;
    self->actionFunc = ObjHsStump_Idle;
}

void ObjHsStump_Idle(ObjHsStump *this, GlobalContext *globalCtx) {
    ObjHsStump *self = (ObjHsStump *) this;
    s16 temp_a1;

    if (self->isHidden == 1) {
        temp_a1 = self->switchFlag;
        self = self;
        if (Flags_GetSwitch(globalCtx, (s32) temp_a1) != 0) {
            ObjHsStump_SetupAppear(self, globalCtx);
        }
    }
}

void ObjHsStump_SetupAppear(ObjHsStump *this, GlobalContext *globalCtx) {
    ObjHsStump *self = (ObjHsStump *) this;
    self->dyna.actor.draw = ObjHsStump_Draw;
    self->framesAppeared = 0;
    self->rotAngle = 0;
    self->rotFactor = 3640.0f;
    self = self;
    func_8019F128(0x3A86U);
    self->actionFunc = ObjHsStump_Appear;
}

void ObjHsStump_Appear(ObjHsStump *this, GlobalContext *globalCtx) {
    ObjHsStump *self = (ObjHsStump *) this;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    Vec3f sp6C;
    Vec3f sp5C;
    s16 temp_v0;
    s32 temp_f4;
    s32 temp_s0;
    s32 phi_v0;
    s32 phi_s0;
    s32 phi_v0_2;

    temp_v0 = self->framesAppeared;
    phi_v0 = (s32) temp_v0;
    if ((s32) temp_v0 >= 0) {
        Math_SmoothStepToF(&self->rotFactor, 0.0f, 1.0f, (f32) temp_v0 + 18.0f, 0.01f);
        self->dyna.actor.shape.rot.x = (s16) (s32) ((Math_SinS(self->rotAngle) * self->rotFactor) + (f32) self->dyna.actor.home.rot.x);
        self->dyna.actor.shape.rot.z = (s16) (s32) ((Math_SinS((s16) (self->rotAngle * 2)) * self->rotFactor) + (f32) self->dyna.actor.home.rot.z);
        self->rotAngle += 0x2000;
        phi_v0 = (s32) self->framesAppeared;
    }
    phi_v0_2 = phi_v0;
    if ((phi_v0 < 0xB) && (phi_v0 == 0)) {
        sp90 = 0.0f;
        sp84 = 0.0f;
        sp88 = 1.0f;
        sp8C = 0.5f;
        sp7C = 1.0f;
        sp80 = 0.5f;
        phi_s0 = 0;
        do {
            temp_f4 = (s32) ((f32) phi_s0 * (f32) (s32) ((360.0f / (f32) 4) * 182.04445f));
            Lib_Vec3f_TranslateAndRotateY(&self->dyna.actor.world.pos, (s16) temp_f4, (Vec3f *) &sp88, &sp5C);
            Lib_Vec3f_TranslateAndRotateY(&D_801D15B0, (s16) temp_f4, (Vec3f *) &sp7C, &sp6C);
            EffectSsIceSmoke_Spawn(globalCtx, &sp5C, &sp6C, &iceSmokeAccel, (s16) 0x64);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 < 4);
        phi_v0_2 = (s32) self->framesAppeared;
    }
    if (phi_v0_2 >= 0xA) {
        Math_SmoothStepToF(&self->dyna.actor.scale.x, 0.17999999f, 1.0f, 0.01f, 0.001f);
        Actor_SetScale(&self->dyna.actor, self->dyna.actor.scale.x);
    }
    if (self->dyna.actor.scale.x == 0.17999999f) {
        self->isHidden = 0;
        func_800C6314(globalCtx, &globalCtx->colCtx.dyna, self->dyna.bgId);
        ObjHsStump_SetupIdle(self, globalCtx);
    }
    self->framesAppeared += 1;
}

void ObjHsStump_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjHsStump *this = (ObjHsStump *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void ObjHsStump_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjHsStump *this = (ObjHsStump *) thisx;
    this->actionFunc(this, globalCtx);
}

void ObjHsStump_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjHsStump *this = (ObjHsStump *) thisx;
    func_800BDFC0(globalCtx, &D_060003B8);
}

