extern ? D_06000390;
static ColliderSphereInit D_80B9E210 = {
    {0xA, 0, 9, 0x39, 0x10, 4},
    {0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0, {{0, 0, 0}, 0xF}, 0x64},
};
static DamageTable D_80B9E23C = {
    {
        1,
        1,
        1,
        1,
        1,
        0xF1,
        1,
        1,
        1,
        1,
        1,
        0xF1,
        0xF1,
        0xF1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
    },
};
static Vec3f D_80B9E25C = {0.0f, -2500.0f, 0.0f};



s32 EnJcMato_CheckForHit(EnJcMato *this, GlobalContext *globalCtx) {
    EnJcMato *self = (EnJcMato *) this;
    CollisionCheckContext *sp1C;
    ColliderSphere *sp18;
    ColliderSphere *temp_a2;
    CollisionCheckContext *temp_a1;
    EnJcMato *temp_a0;
    u8 temp_v0;

    temp_v0 = self->collider.base.acFlags;
    temp_a2 = &self->collider;
    self->collider.dim.worldSphere.center.x = (s16) (s32) self->pos.x;
    self->collider.dim.worldSphere.center.y = (s16) (s32) self->pos.y;
    self->collider.dim.worldSphere.center.z = (s16) (s32) self->pos.z;
    if (((temp_v0 & 2) != 0) && (self->hitFlag == 0) && (temp_a0 = self, (self->actor.colChkInfo.damageEffect == 0xF))) {
        self->collider.base.acFlags = temp_v0 & 0xFFFD;
        self = self;
        Audio_PlayActorSound2(&temp_a0->actor, 0x4807U);
        globalCtx->interfaceCtx.unk_25C = 1;
        self->hitFlag = 1;
        return 1;
    }
    temp_a1 = &globalCtx->colChkCtx;
    sp1C = temp_a1;
    sp18 = temp_a2;
    CollisionCheck_SetOC(globalCtx, temp_a1, &temp_a2->base);
    CollisionCheck_SetAC(globalCtx, temp_a1, &temp_a2->base);
    return 0;
}

void EnJcMato_SetupIdle(EnJcMato *this) {
    EnJcMato *self = (EnJcMato *) this;
    self->actionFunc = EnJcMato_Idle;
}

void EnJcMato_Idle(EnJcMato *this, GlobalContext *globalCtx) {
    EnJcMato *self = (EnJcMato *) this;
    s16 temp_v0;
    s16 phi_v1;

    if (self->hitFlag != 0) {
        temp_v0 = self->despawnTimer;
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            self->despawnTimer = temp_v0 - 1;
            phi_v1 = self->despawnTimer;
        }
        if (phi_v1 == 0) {
            Actor_MarkForDeath(&self->actor);
        }
    }
}

void EnJcMato_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnJcMato *this = (EnJcMato *) thisx;
    ColliderSphere *sp20;
    ColliderSphere *temp_a1;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 24.0f);
    temp_a1 = &this->collider;
    sp20 = temp_a1;
    Collider_InitSphere(globalCtx, temp_a1);
    Collider_SetSphere(globalCtx, temp_a1, &this->actor, &D_80B9E210);
    this->collider.dim.worldSphere.radius = 0xF;
    this->actor.colChkInfo.damageTable = &D_80B9E23C;
    Actor_SetScale(&this->actor, 0.008f);
    this->hitFlag = 0;
    this->despawnTimer = 0x19;
    EnJcMato_SetupIdle(this);
}

void EnJcMato_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnJcMato *this = (EnJcMato *) thisx;
    Collider_DestroySphere(globalCtx, &this->collider);
}

void EnJcMato_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnJcMato *this = (EnJcMato *) thisx;
    this->actionFunc(this, globalCtx);
    if ((gSaveContext.eventInf[4] & 1) == 0) {
        EnJcMato_CheckForHit(this, globalCtx);
    }
}

void EnJcMato_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnJcMato *this = (EnJcMato *) thisx;
    GraphicsContext *sp20;
    Gfx *sp18;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    temp_a0 = globalCtx->state.gfxCtx;
    sp20 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp20->polyOpa.p;
    sp20->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp20 = sp20;
    sp18 = temp_v0;
    sp18->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = sp20->polyOpa.p;
    sp20->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06000390;
    temp_v0_2->words.w0 = 0xDE000000;
    SysMatrix_MultiplyVector3fByState(&D_80B9E25C, &this->pos);
}

