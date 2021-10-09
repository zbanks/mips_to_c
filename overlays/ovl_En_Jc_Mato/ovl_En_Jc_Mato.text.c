struct _mips2c_stack_EnJcMato_CheckForHit {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ColliderSphere *sp18;                /* inferred */
    /* 0x1C */ CollisionCheckContext *sp1C;         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnJcMato_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnJcMato_Draw {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Gfx *sp18;                           /* inferred */
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ GraphicsContext *sp20;               /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnJcMato_Idle {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnJcMato_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderSphere *sp20;                /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnJcMato_SetupIdle {};         /* size 0x0 */

struct _mips2c_stack_EnJcMato_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

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
    CollisionCheckContext *sp1C;
    ColliderSphere *sp18;
    ColliderSphere *temp_a2;
    CollisionCheckContext *temp_a1;
    EnJcMato *temp_a0;
    u8 temp_v0;

    temp_v0 = this->collider.base.acFlags;
    temp_a2 = &this->collider;
    this->collider.dim.worldSphere.center.x = (s16) (s32) this->pos.x;
    this->collider.dim.worldSphere.center.y = (s16) (s32) this->pos.y;
    this->collider.dim.worldSphere.center.z = (s16) (s32) this->pos.z;
    if (((temp_v0 & 2) != 0) && (this->hitFlag == 0) && (temp_a0 = this, (this->actor.colChkInfo.damageEffect == 0xF))) {
        this->collider.base.acFlags = temp_v0 & 0xFFFD;
        this = this;
        Audio_PlayActorSound2((Actor *) temp_a0, 0x4807U);
        globalCtx->interfaceCtx.unk_25C = 1;
        this->hitFlag = 1;
        return 1;
    }
    temp_a1 = &globalCtx->colChkCtx;
    sp1C = temp_a1;
    sp18 = temp_a2;
    CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_a2);
    CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2);
    return 0;
}

void EnJcMato_SetupIdle(EnJcMato *this) {
    this->actionFunc = EnJcMato_Idle;
}

void EnJcMato_Idle(EnJcMato *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 phi_v1;

    if (this->hitFlag != 0) {
        temp_v0 = this->despawnTimer;
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            this->despawnTimer = temp_v0 - 1;
            phi_v1 = this->despawnTimer;
        }
        if (phi_v1 == 0) {
            Actor_MarkForDeath((Actor *) this);
        }
    }
}

void EnJcMato_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderSphere *sp20;
    ColliderSphere *temp_a1;
    EnJcMato *this = (EnJcMato *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 24.0f);
    temp_a1 = &this->collider;
    sp20 = temp_a1;
    Collider_InitSphere(globalCtx, temp_a1);
    Collider_SetSphere(globalCtx, temp_a1, (Actor *) this, &D_80B9E210);
    this->collider.dim.worldSphere.radius = 0xF;
    this->actor.colChkInfo.damageTable = &D_80B9E23C;
    Actor_SetScale((Actor *) this, 0.008f);
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
    GraphicsContext *sp20;
    Gfx *sp18;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    EnJcMato *this = (EnJcMato *) thisx;

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
