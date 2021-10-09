extern Gfx D_06000208;
extern ? D_06004BF0;
extern Gfx D_060071B8;
static InitChainEntry D_80A1A3B0;                   /* unable to generate initializer */
static ? D_80A1A3C4;                                /* unable to generate initializer */
static ? sColHeaders;                               /* unable to generate initializer */



void ObjRaillift_UpdatePosition(ObjRaillift *this, s32 arg1) {
    ObjRaillift *self = (ObjRaillift *) this;
    Math_Vec3s_ToVec3f(&self->dyna.actor.world.pos, &self->points[arg1]);
}

void ObjRaillift_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjRaillift *this = (ObjRaillift *) thisx;
    s32 sp48;
    s32 sp44;
    CollisionHeader **sp40;
    CollisionHeader **temp_v0;
    Path *temp_v1;
    f32 temp_f0;
    s16 temp_v0_2;

    sp44 = 0;
    sp48 = ((s32) this->dyna.actor.params >> 0xF) & 1;
    Actor_ProcessInitChain(&this->dyna.actor, &D_80A1A3B0);
    this->dyna.actor.shape.rot.x = 0;
    this->dyna.actor.world.rot.x = 0;
    this->dyna.actor.shape.rot.z = 0;
    this->dyna.actor.world.rot.z = 0;
    BcCheck3_BgActorInit(&this->dyna, 1);
    temp_v0 = (sp48 * 4) + &sColHeaders;
    sp40 = temp_v0;
    BgCheck3_LoadMesh(globalCtx, &this->dyna, *temp_v0);
    this->speed = (f32) this->dyna.actor.home.rot.z * 0.1f;
    temp_f0 = this->speed;
    if (temp_f0 < 0.0f) {
        this->speed = -temp_f0;
        sp44 = 1;
    }
    if (temp_v0 == &D_80A1A3C4) {
        Actor_SpawnAsChild(&globalCtx->actorCtx, &this->dyna.actor, globalCtx, 0x183, this->dyna.actor.world.pos.x, this->dyna.actor.world.pos.y, this->dyna.actor.world.pos.z, (s16) (s32) this->dyna.actor.shape.rot.x, (s16) (s32) this->dyna.actor.shape.rot.y, (s16) (s32) this->dyna.actor.shape.rot.z, 0);
        if (sp44 != 0) {
            this->dyna.actor.draw = ObjRaillift_DrawDekuFlowerPlatformColorful;
        } else {
            this->dyna.actor.draw = ObjRaillift_DrawDekuFlowerPlatform;
        }
    }
    if (this->speed < 0.01f) {
        this->actionFunc = ObjRaillift_DoNothing;
        return;
    }
    temp_v0_2 = this->dyna.actor.params;
    this->curPoint = ((s32) temp_v0_2 >> 7) & 0x1F;
    temp_v1 = &globalCtx->setupPathList[temp_v0_2 & 0x7F];
    this->direction = 1;
    this->endPoint = temp_v1->count - 1;
    this->points = Lib_SegmentedToVirtual((void *) temp_v1->points);
    ObjRaillift_UpdatePosition(this, this->curPoint);
    if (((((s32) this->dyna.actor.params >> 0xD) & 1) != 0) && (Flags_GetSwitch(globalCtx, this->dyna.actor.home.rot.x & 0x7F) == 0)) {
        this->actionFunc = ObjRaillift_Idle;
        return;
    }
    this->actionFunc = ObjRaillift_Move;
}

void ObjRaillift_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjRaillift *this = (ObjRaillift *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void ObjRaillift_DoNothing(ObjRaillift *this, GlobalContext *globalCtx) {
    ObjRaillift *self = (ObjRaillift *) this;

}

void ObjRaillift_Move(ObjRaillift *this, GlobalContext *globalCtx) {
    ObjRaillift *self = (ObjRaillift *) this;
    Vec3f sp48;
    f32 sp44;
    Vec3f *sp28;
    Vec3f *temp_a2;
    Vec3s *temp_v0;
    Vec3s *temp_v1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s32 temp_a0;
    s32 temp_v1;
    f32 phi_f0;
    f32 phi_f12;
    s32 phi_a2;

    if ((((s32) self->dyna.actor.params >> 0xD) & 1) != 0) {
        if (Flags_GetSwitch(globalCtx, self->dyna.actor.home.rot.x & 0x7F) == 0) {
            self->actionFunc = ObjRaillift_Idle;
            return;
        }
        if ((((s32) self->dyna.actor.params >> 0xF) & 1) == 1) {
            func_800B9010(&self->dyna.actor, 0x2103U);
        }
        goto block_5;
    }
block_5:
    Math_Vec3s_ToVec3f(&sp48, &(&self->points[self->curPoint])[self->direction]);
    temp_a2 = &self->dyna.actor.velocity;
    sp28 = temp_a2;
    Math_Vec3f_Diff(&sp48, &self->dyna.actor.world.pos, temp_a2);
    temp_f0 = Math3D_Vec3fMagnitude(sp28);
    temp_f2 = self->speed;
    if ((temp_f0 < (temp_f2 * 8.0f)) && (temp_f2 > 2.0f)) {
        phi_f0 = ((temp_f2 - 2.0f) * 0.1f) + 2.0f;
        phi_f12 = temp_f2 * 0.03f;
    } else {
        phi_f0 = temp_f2;
        phi_f12 = temp_f2 * 0.16f;
    }
    sp44 = temp_f0;
    Math_StepToF(&self->dyna.actor.speedXZ, phi_f0, phi_f12);
    temp_f0_2 = self->dyna.actor.speedXZ;
    if ((temp_f0_2 + 0.05f) < temp_f0) {
        Math_Vec3f_Scale(sp28, temp_f0_2 / temp_f0);
        self->dyna.actor.world.pos.x += self->dyna.actor.velocity.x;
        self->dyna.actor.world.pos.y += self->dyna.actor.velocity.y;
        self->dyna.actor.world.pos.z += self->dyna.actor.velocity.z;
        return;
    }
    temp_v1 = self->curPoint + self->direction;
    self->curPoint = temp_v1;
    temp_a0 = self->endPoint;
    self->dyna.actor.speedXZ *= 0.4f;
    phi_a2 = 1;
    if (((temp_v1 >= temp_a0) && (self->direction > 0)) || ((temp_v1 <= 0) && (self->direction < 0))) {
        if ((((s32) self->dyna.actor.params >> 0xC) & 1) == 0) {
            self->direction = -self->direction;
            self->waitTimer = 0xA;
            self->actionFunc = ObjRaillift_Wait;
        } else {
            temp_v1_2 = &self->points[temp_a0];
            if (self->direction > 0) {
                self->curPoint = 0;
            } else {
                self->curPoint = temp_a0;
            }
            temp_v0 = self->points;
            if ((temp_v1_2->x != temp_v0->x) || (temp_v1_2->y != temp_v0->y) || (temp_v1_2->z != temp_v0->z)) {
                self->actionFunc = ObjRaillift_Teleport;
                func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, self->dyna.bgId);
                phi_a2 = 0;
            }
        }
    }
    if (phi_a2 != 0) {
        ObjRaillift_UpdatePosition(self, self->curPoint);
    }
}

void ObjRaillift_Teleport(ObjRaillift *this, GlobalContext *globalCtx) {
    ObjRaillift *self = (ObjRaillift *) this;
    if (func_800CAF70(&self->dyna) == 0) {
        ObjRaillift_UpdatePosition(self, self->curPoint);
        func_800C6314(globalCtx, &globalCtx->colCtx.dyna, self->dyna.bgId);
        self->actionFunc = ObjRaillift_Move;
    }
}

void ObjRaillift_Wait(ObjRaillift *this, GlobalContext *globalCtx) {
    ObjRaillift *self = (ObjRaillift *) this;
    self->waitTimer += -1;
    if ((s32) self->waitTimer <= 0) {
        self->actionFunc = ObjRaillift_Move;
        self->dyna.actor.speedXZ = 0.0f;
    }
}

void ObjRaillift_Idle(ObjRaillift *this, GlobalContext *globalCtx) {
    ObjRaillift *self = (ObjRaillift *) this;
    if (Flags_GetSwitch(globalCtx, self->dyna.actor.home.rot.x & 0x7F) != 0) {
        self->dyna.actor.speedXZ = 0.0f;
        ActorCutscene_SetIntentToPlay((s16) self->dyna.actor.cutscene);
        self->actionFunc = ObjRaillift_StartCutscene;
    }
}

void ObjRaillift_StartCutscene(ObjRaillift *this, GlobalContext *globalCtx) {
    ObjRaillift *self = (ObjRaillift *) this;
    ObjRaillift *temp_a1;
    s8 temp_a0;
    s8 temp_a0_2;

    temp_a0 = self->dyna.actor.cutscene;
    self = self;
    temp_a1 = self;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        temp_a0_2 = temp_a1->dyna.actor.cutscene;
        self = temp_a1;
        ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a0_2, &temp_a1->dyna.actor);
        self->cutsceneTimer = 0x32;
        self->actionFunc = ObjRaillift_Move;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a1->dyna.actor.cutscene);
}

void ObjRaillift_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjRaillift *this = (ObjRaillift *) thisx;
    Actor *temp_v0_2;
    s16 temp_v0;
    f32 phi_f0;
    f32 phi_f2;

    this->actionFunc(this, globalCtx);
    Actor_SetHeight(&this->dyna.actor, 10.0f);
    temp_v0 = this->cutsceneTimer;
    if ((s32) temp_v0 > 0) {
        this->cutsceneTimer = temp_v0 - 1;
        if (this->cutsceneTimer == 0) {
            ActorCutscene_Stop((s16) this->dyna.actor.cutscene);
        }
    }
    if ((((s32) this->dyna.actor.params >> 0xE) & 1) != 0) {
        this->isWeightOnPrev = this->isWeightOn;
        if (func_800CAF70(&this->dyna) != 0) {
            this->isWeightOn = 1;
        } else {
            this->isWeightOn = 0;
        }
        if ((this->isWeightOnPrev != this->isWeightOn) && (this->maxHeight < 1.0f)) {
            this->cycle = -0x8000;
            this->maxHeight = 6.0f;
        }
        this->cycle += 0xCE4;
        Math_StepToF(&this->maxHeight, 0.0f, 0.12f);
        if (this->isWeightOn != 0) {
            phi_f2 = Math_CosS((s16) (s32) (fabsf(this->cycleSpeed) * 2048.0f)) + 0.02f;
        } else {
            phi_f2 = Math_SinS((s16) (s32) (fabsf(this->cycleSpeed) * 2048.0f)) + 0.02f;
        }
        if (this->isWeightOn != 0) {
            phi_f0 = -8.0f;
        } else {
            phi_f0 = 0.0f;
        }
        Math_StepToF(&this->cycleSpeed, phi_f0, phi_f2);
        this->dyna.actor.shape.yOffset = ((Math_SinS(this->cycle) * this->maxHeight) + this->cycleSpeed) * 10.0f;
    }
    if (((((s32) this->dyna.actor.params >> 0xF) & 1) == 1) && (temp_v0_2 = this->dyna.actor.child, (temp_v0_2 != 0))) {
        if (temp_v0_2->update == 0) {
            this->dyna.actor.child = NULL;
            return;
        }
        temp_v0_2->world.pos.x = this->dyna.actor.world.pos.x;
        this->dyna.actor.child->world.pos.y = this->dyna.actor.world.pos.y + (this->dyna.actor.shape.yOffset * this->dyna.actor.scale.y);
        this->dyna.actor.child->world.pos.z = this->dyna.actor.world.pos.z;
        // Duplicate return node #22. Try simplifying control flow for better match
    }
}

void ObjRaillift_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjRaillift *this = (ObjRaillift *) thisx;
    Gfx *sp58;
    Gfx *sp54;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp58 = temp_v0;
    sp58->words.w1 = Gfx_TwoTexScrollEnvColor(globalCtx->state.gfxCtx, 0, globalCtx->gameplayFrames, 0U, 0x20, 0x20, 1, 0U, 0U, 0x20, 0x20, 0, 0, 0, 0xA0);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp54 = temp_v0_2;
    sp54->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) &D_06004BF0;
    temp_v0_3->words.w0 = 0xDE000000;
}

void ObjRaillift_DrawDekuFlowerPlatform(Actor *thisx, GlobalContext *globalCtx) {
    ObjRaillift *this = (ObjRaillift *) thisx;
    func_800BDFC0(globalCtx, &D_06000208);
}

void ObjRaillift_DrawDekuFlowerPlatformColorful(Actor *thisx, GlobalContext *globalCtx) {
    ObjRaillift *this = (ObjRaillift *) thisx;
    func_800BDFC0(globalCtx, &D_060071B8);
}

