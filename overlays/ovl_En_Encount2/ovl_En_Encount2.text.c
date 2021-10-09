extern Gfx D_06000A00;
extern Gfx D_06000D78;
extern CollisionHeader D_06002420;
static ColliderJntSphElementInit D_808E1EF0 = {{0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1}, {1, {{0, 0, 0}, 0}, 1}};
static ColliderJntSphInit D_808E1F14 = {{0xC, 0, 9, 0x39, 0x10, 0}, 1, &D_808E1EF0};
static DamageTable D_808E1F24 = {
    {
        0xF0,
        0xF0,
        0,
        0xF0,
        0xE1,
        0xE1,
        0,
        0xE1,
        0xF0,
        0xF0,
        0xF0,
        0xE1,
        0xE1,
        0xE1,
        0xF0,
        0xF0,
        0xE1,
        0xF0,
        0xF0,
        0xF0,
        0,
        0,
        0xE1,
        0xF0,
        0xF0,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF0,
    },
};



void EnEncount2_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnEncount2 *this = (EnEncount2 *) thisx;
    CollisionHeader *sp2C;

    sp2C = NULL;
    BcCheck3_BgActorInit(&this->dyna, 0);
    BgCheck_RelocateMeshHeader(&D_06002420, &sp2C);
    this->dyna.bgId = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, &this->dyna, sp2C);
    ActorShape_Init(&this->dyna.actor.shape, 0.0f, func_800B3FC0, 25.0f);
    this->dyna.actor.colChkInfo.mass = 0xFF;
    Collider_InitAndSetJntSph(globalCtx, &this->collider, &this->dyna.actor, &D_808E1F14, &this->colElement);
    this->dyna.actor.targetMode = 6;
    this->dyna.actor.colChkInfo.health = 1;
    this->switchFlag = this->dyna.actor.params & 0x7F;
    this->scale = 0.1f;
    if (this->switchFlag == 0x7F) {
        this->switchFlag = -1;
    }
    if (((s32) this->switchFlag >= 0) && (Flags_GetSwitch(globalCtx, (s32) this->switchFlag) != 0)) {
        Actor_MarkForDeath(&this->dyna.actor);
        return;
    }
    this->collider.elements->dim.modelSphere.radius = 0x39;
    this->collider.elements->dim.scale = 1.0f;
    this->collider.elements->dim.modelSphere.center.x = 0;
    this->collider.elements->dim.modelSphere.center.y = -4;
    this->collider.elements->dim.modelSphere.center.z = 0;
    this->dyna.actor.colChkInfo.damageTable = &D_808E1F24;
    EnEncount2_SetIdle(this);
}

void EnEncount2_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnEncount2 *this = (EnEncount2 *) thisx;
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->dyna.bgId);
    Collider_DestroyJntSph(globalCtx, &this->collider);
}

void EnEncount2_SetIdle(EnEncount2 *this) {
    EnEncount2 *self = (EnEncount2 *) this;
    self->isPopped = 0;
    self->actionFunc = EnEncount2_Idle;
}

void EnEncount2_Idle(EnEncount2 *this, GlobalContext *globalCtx) {
    EnEncount2 *self = (EnEncount2 *) this;
    self->oscillationAngle += 1500.0f;
    self->dyna.actor.velocity.y = Math_SinS((s16) (s32) self->oscillationAngle);
    Math_ApproachF(&self->scale, 0.1f, 0.3f, 0.01f);
    if (((self->collider.base.acFlags & 2) != 0) && (self->dyna.actor.colChkInfo.damageEffect == 0xE)) {
        self->dyna.actor.colChkInfo.health = 0;
        self->isPopped = 1;
        self->actionFunc = EnEncount2_Popped;
    }
}

void EnEncount2_Popped(EnEncount2 *this, GlobalContext *globalCtx) {
    EnEncount2 *self = (EnEncount2 *) this;
    Vec3f sp40;
    f32 temp_f0;
    s32 temp_s0;
    s32 phi_s0;

    Math_Vec3f_Copy(&sp40, &self->dyna.actor.world.pos);
    temp_f0 = sp40.y + 60.0f;
    sp40.y = temp_f0;
    Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xA2, sp40.x, temp_f0, sp40.z, (s16) 0xFF, (s16) 0xFF, (s16) 0xC8, (s16) 1);
    phi_s0 = 0;
    do {
        EnEncount2_InitParticles(self, &sp40, 0xA);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x64);
    Audio_PlayActorSound2(&self->dyna.actor, 0x2949U);
    self->deathTimer = 0x1E;
    self->actionFunc = EnEncount2_Die;
}

void EnEncount2_Die(EnEncount2 *this, GlobalContext *globalCtx) {
    EnEncount2 *self = (EnEncount2 *) this;
    s16 temp_a1;

    if (self->deathTimer == 0) {
        temp_a1 = self->switchFlag;
        if ((s32) temp_a1 >= 0) {
            self = self;
            Actor_SetSwitchFlag(globalCtx, (s32) temp_a1);
        }
        Actor_MarkForDeath(&self->dyna.actor);
    }
}

void EnEncount2_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnEncount2 *this = (EnEncount2 *) thisx;
    CollisionCheckContext *sp24;
    ColliderJntSph *sp20;
    ColliderJntSph *temp_a0;
    CollisionCheckContext *temp_a1;
    s16 temp_v0;

    temp_v0 = this->deathTimer;
    if (temp_v0 != 0) {
        this->deathTimer = temp_v0 - 1;
    }
    this->dyna.actor.shape.rot.y = this->dyna.actor.world.rot.y;
    Actor_SetHeight(&this->dyna.actor, 30.0f);
    Actor_SetScale(&this->dyna.actor, this->scale);
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->dyna.actor);
    EnEncount2_UpdateParticles(this, globalCtx);
    temp_a0 = &this->collider;
    if (this->isPopped == 0) {
        sp20 = temp_a0;
        Collider_UpdateSpheresElement(temp_a0, 0, &this->dyna.actor);
        temp_a1 = &globalCtx->colChkCtx;
        sp24 = temp_a1;
        CollisionCheck_SetAC(globalCtx, temp_a1, &sp20->base);
        CollisionCheck_SetOC(globalCtx, temp_a1, &sp20->base);
    }
}

void EnEncount2_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnEncount2 *this = (EnEncount2 *) thisx;
    if (this->isPopped != 1) {
        func_800BDFC0(globalCtx, &D_06000A00);
        func_800BDFC0(globalCtx, &D_06000D78);
    }
    EnEncount2_DrawParticles(this, globalCtx);
}

void EnEncount2_InitParticles(EnEncount2 *this, Vec3f *pos, s16 fadeDelay) {
    EnEncount2 *self = (EnEncount2 *) this;
    s16 temp_v0;
    EnEncount2Particle *phi_s0;
    s16 phi_v0;

    phi_s0 = self->particles;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_s0->enabled == 0) {
        phi_s0->enabled = 1;
        phi_s0->pos.x = pos->x;
        phi_s0->pos.y = pos->y;
        phi_s0->alphaFadeDelay = fadeDelay;
        phi_s0->alpha = 0xFF;
        phi_s0->pos.z = pos->z;
        phi_s0->accel.x = (Rand_ZeroOne() - 0.5f) * 10.0f;
        phi_s0->accel.y = (Rand_ZeroOne() - 0.5f) * 10.0f;
        phi_s0->accel.z = (Rand_ZeroOne() - 0.5f) * 10.0f;
        phi_s0->vel.x = Rand_ZeroOne() - 0.5f;
        phi_s0->vel.y = Rand_ZeroOne() - 0.5f;
        phi_s0->vel.z = Rand_ZeroOne() - 0.5f;
        phi_s0->scale = (Rand_ZeroFloat(1.0f) * 0.5f) + 2.0f;
        return;
    }
    phi_s0 += 0x34;
    if ((s32) temp_v0 >= 0xC8) {
        return;
    }
    goto loop_1;
}

void EnEncount2_UpdateParticles(EnEncount2 *this, GlobalContext *globalCtx) {
    EnEncount2 *self = (EnEncount2 *) this;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_a0;
    s16 temp_a0_2;
    s32 temp_v1;
    void *temp_v0;
    EnEncount2Particle *phi_v0;
    s32 phi_v1;

    phi_v0 = self->particles;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 2;
        phi_v1 = temp_v1;
        if (phi_v0->enabled != 0) {
            temp_f0 = phi_v0->vel.x;
            temp_f2 = phi_v0->vel.y;
            temp_f12 = phi_v0->vel.z;
            temp_a0 = phi_v0->alphaFadeDelay;
            phi_v0->pos.x += temp_f0;
            phi_v0->pos.y += temp_f2;
            phi_v0->pos.z += temp_f12;
            phi_v0->vel.x = temp_f0 + phi_v0->accel.x;
            phi_v0->vel.y = temp_f2 + phi_v0->accel.y;
            phi_v0->vel.z = temp_f12 + phi_v0->accel.z;
            if (temp_a0 != 0) {
                phi_v0->alphaFadeDelay = temp_a0 - 1;
            } else {
                phi_v0->alpha += -0xA;
                if ((s32) phi_v0->alpha < 0xA) {
                    phi_v0->enabled = 0;
                }
            }
        }
        temp_v0 = phi_v0 + 0x34;
        if (phi_v0->unk34 != 0) {
            temp_f0_2 = temp_v0->unk18;
            temp_f2_2 = temp_v0->unk1C;
            temp_f12_2 = temp_v0->unk20;
            temp_a0_2 = temp_v0->unk16;
            temp_v0->unk4 = (f32) (temp_v0->unk4 + temp_f0_2);
            temp_v0->unk8 = (f32) (temp_v0->unk8 + temp_f2_2);
            temp_v0->unkC = (f32) (temp_v0->unkC + temp_f12_2);
            temp_v0->unk18 = (f32) (temp_f0_2 + temp_v0->unk24);
            temp_v0->unk1C = (f32) (temp_f2_2 + temp_v0->unk28);
            temp_v0->unk20 = (f32) (temp_f12_2 + temp_v0->unk2C);
            if (temp_a0_2 != 0) {
                temp_v0->unk16 = (s16) (temp_a0_2 - 1);
            } else {
                temp_v0->unk14 = (s16) (temp_v0->unk14 - 0xA);
                if ((s32) temp_v0->unk14 < 0xA) {
                    temp_v0->unk0 = 0;
                }
            }
        }
        phi_v0 = temp_v0 + 0x34;
    } while (temp_v1 != 0xC8);
}

void EnEncount2_DrawParticles(EnEncount2 *this, GlobalContext *globalCtx) {
    EnEncount2 *self = (EnEncount2 *) this;
    EnEncount2Particle *temp_s2;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_s0;
    MtxF *temp_s6;
    f32 temp_f12;
    f32 temp_f6;
    s16 temp_s4;
    u32 temp_t0;
    EnEncount2Particle *phi_s2;
    f32 phi_f6;
    s16 phi_s4;

    temp_s0 = globalCtx->state.gfxCtx;
    temp_s2 = self->particles;
    func_8012C28C(temp_s0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    phi_s2 = temp_s2;
    phi_s4 = 0;
    do {
        if (phi_s2->enabled != 0) {
            temp_s6 = &globalCtx->mf_187FC;
            SysMatrix_InsertTranslation(phi_s2->pos.x, phi_s2->pos.y, phi_s2->pos.z, 0);
            temp_f12 = phi_s2->scale;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            temp_s0->polyXlu.p = Gfx_CallSetupDL(temp_s0->polyXlu.p, 0x14U);
            temp_v0 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0 + 8;
            temp_v0->words.w0 = 0xDB060020;
            temp_v0->words.w1 = Lib_SegmentedToVirtual((void *) &D_04079B10);
            temp_v0_2 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_2 + 8;
            temp_v0_2->words.w1 = (u32) D_0407AB10;
            temp_v0_2->words.w0 = 0xDE000000;
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = 0;
            temp_v0_3->words.w0 = 0xE7000000;
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w1 = -1;
            temp_v0_4->words.w0 = 0xFA000000;
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xFB000000;
            temp_v0_5->words.w1 = (phi_s2->alpha & 0xFF) | 0xFAB4FF00;
            SysMatrix_InsertMatrix(temp_s6, 1);
            temp_t0 = globalCtx->state.frames;
            temp_f6 = (f32) temp_t0;
            phi_f6 = temp_f6;
            if ((s32) temp_t0 < 0) {
                phi_f6 = temp_f6 + 4294967296.0f;
            }
            SysMatrix_InsertZRotation_f(phi_f6 * 20.0f * 0.017453292f, 1);
            temp_v0_6 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xDA380003;
            temp_v0_6->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_7 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w1 = (u32) D_0407AB58;
            temp_v0_7->words.w0 = 0xDE000000;
        }
        temp_s4 = phi_s4 + 1;
        phi_s2 += 0x34;
        phi_s4 = temp_s4;
    } while ((s32) temp_s4 < 0xC8);
}

