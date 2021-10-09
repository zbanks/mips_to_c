struct _mips2c_stack_EnTorch2_Destroy {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnTorch2_Draw {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ GraphicsContext *sp18;               /* inferred */
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnTorch2_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTorch2_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ char pad_30[0x10];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnTorch2_UpdateDeath {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTorch2_UpdateIdle {};        /* size 0x0 */

static ColliderCylinderInit D_808A35D0 = {
    {9, 0, 0xD, 0x39, 0x20, 1},
    {2, {0x100000, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 5, 1},
    {0x14, 0x3C, 0, {0, 0, 0}},
};
static InitChainEntry D_808A35FC;                   /* unable to generate initializer */
static ? D_808A3600;                                /* unable to generate initializer */

void EnTorch2_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnTorch2 *temp_a0;
    s16 temp_v0;
    u32 temp_t7;
    EnTorch2 *this = (EnTorch2 *) thisx;

    temp_a0 = this;
    this = this;
    Actor_ProcessInitChain((Actor *) temp_a0, &D_808A35FC);
    Collider_InitAndSetCylinder(globalCtx, &this->collider, (Actor *) this, &D_808A35D0);
    temp_v0 = this->actor.params;
    if (temp_v0 != 3) {
        temp_t7 = this->actor.flags | 0x4000000;
        this->actor.flags = temp_t7;
        if (temp_v0 == 1) {
            this->actor.flags = temp_t7 | 0x20000;
        }
    }
    this->framesUntilNextState = 0x14;
}

void EnTorch2_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTorch2 *this = (EnTorch2 *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
    func_80169DCC(globalCtx, this->actor.params + 3, 0xFFU, 0, 0xBFF, (Vec3f *) &this->actor.world, (s16) (s32) this->actor.shape.rot.y);
    globalCtx->actorCtx.unk254[this->actor.params] = 0;
}

void EnTorch2_Update(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    u8 temp_t9;
    u8 temp_v0;
    u8 temp_v1;
    s32 phi_v0;
    s16 phi_v0_2;
    EnTorch2 *this = (EnTorch2 *) thisx;

    if (this->state == 3) {
        this->actor.update = EnTorch2_UpdateIdle;
        return;
    }
    this->actor.gravity = -1.0f;
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 20.0f, 70.0f, 5U);
    temp_v1 = this->framesUntilNextState;
    temp_t9 = temp_v1 - 1;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        this->framesUntilNextState = temp_t9;
        phi_v0 = temp_t9 & 0xFF;
    }
    if (phi_v0 == 0) {
        temp_v0 = this->state;
        if (temp_v0 == 0) {
            if (this->alpha == 0) {
                Math_Vec3f_Copy((Vec3f *) &this->actor.world, (Vec3f *) &this->actor.home);
                this->state = 1;
                this->actor.shape.rot.y = this->actor.home.rot.y;
            }
            phi_v0_2 = 0;
        } else if (temp_v0 == 1) {
            if ((this->actor.xzDistToPlayer > 32.0f) || (fabsf(this->actor.yDistToPlayer) > 70.0f)) {
                this->state = 2;
            }
            phi_v0_2 = 0x3C;
        } else {
            temp_a2 = &this->collider;
            sp2C = temp_a2;
            Collider_UpdateCylinder((Actor *) this, temp_a2);
            CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
            phi_v0_2 = 0xFF;
        }
        Math_StepToS(&this->alpha, phi_v0_2, 8);
    }
}

void EnTorch2_UpdateIdle(Actor *thisx, GlobalContext *globalCtx) {
    EnTorch2 *this = (EnTorch2 *) thisx;
    if (this->state == 4) {
        this->actor.update = EnTorch2_UpdateDeath;
        this->actor.velocity.y = 0.0f;
    }
}

void EnTorch2_UpdateDeath(Actor *thisx, GlobalContext *globalCtx) {
    s16 *temp_a0;
    EnTorch2 *this = (EnTorch2 *) thisx;

    temp_a0 = &this->alpha;
    this = this;
    if (Math_StepToS(temp_a0, 0, 8) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->actor.gravity = -1.0f;
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

void EnTorch2_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp1C;
    GraphicsContext *sp18;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    GraphicsContext *temp_t0;
    EnTorch2 *this = (EnTorch2 *) thisx;

    temp_a0 = globalCtx;
    sp1C = *(&D_808A3600 + (this->actor.params * 4));
    temp_t0 = globalCtx->state.gfxCtx;
    if (this->alpha == 0xFF) {
        temp_a0_2 = globalCtx;
        globalCtx = globalCtx;
        sp18 = temp_t0;
        Scene_SetRenderModeXlu(temp_a0_2, 0, 1U);
        temp_v1 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v1 + 8;
        temp_v1->words.w1 = -1;
        temp_v1->words.w0 = 0xFB000000;
        func_800BDFC0(globalCtx, sp1C);
        return;
    }
    globalCtx = globalCtx;
    sp18 = temp_t0;
    Scene_SetRenderModeXlu(temp_a0, 1, 2U);
    temp_v1_2 = temp_t0->polyXlu.p;
    temp_t0->polyXlu.p = temp_v1_2 + 8;
    temp_v1_2->words.w0 = 0xFB000000;
    temp_v1_2->words.w1 = (this->alpha & 0xFF) | ~0xFF;
    func_800BE03C(globalCtx, sp1C);
}
