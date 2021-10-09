void BgIcicle_Break(BgIcicle *arg0, GlobalContext *arg1, f32 arg2); /* static */
void BgIcicle_UpdateAttacked(BgIcicle *arg0, GlobalContext *arg1); /* static */
extern Gfx D_060000D0;
extern CollisionHeader D_06000294;
static ColliderCylinderInit D_809CA2B0 = {
    {0xA, 0x11, 9, 0, 0x20, 1},
    {0, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 0},
    {0xD, 0x78, 0, {0, 0, 0}},
};
static InitChainEntry D_809CA2FC;                   /* unable to generate initializer */
static Vec3f D_809CA30C = {0.0f, -1.0f, 0.0f};
static Color_RGBA8 D_809CA318 = {0xAA, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_809CA31C = {0, 0x32, 0x64, 0xFF};



void BgIcicle_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgIcicle *this = (BgIcicle *) thisx;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_v1;
    u8 temp_a0;

    Actor_ProcessInitChain(&this->dyna.actor, &D_809CA2FC);
    BcCheck3_BgActorInit(&this->dyna, 0);
    BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_06000294);
    temp_a1 = &this->collider;
    sp24 = temp_a1;
    Collider_InitAndSetCylinder(globalCtx, temp_a1, &this->dyna.actor, &D_809CA2B0);
    Collider_UpdateCylinder(&this->dyna.actor, temp_a1);
    temp_v0 = this->dyna.actor.params;
    temp_v1 = (s32) temp_v0 >> 8;
    this->dyna.actor.params &= 3;
    temp_v0_2 = this->dyna.actor.params;
    temp_a0 = temp_v1 & 0xFF;
    this->unk_161 = temp_a0;
    if ((temp_v0_2 == 0) || (temp_v0_2 == 3)) {
        if (temp_v0_2 == 0) {
            this->unk_160 = temp_a0;
        } else {
            this->unk_160 = ((s32) temp_v0 >> 2) & 0x3F;
        }
        this->actionFunc = BgIcicle_DoNothing;
        return;
    }
    this->dyna.actor.shape.rot.x = -0x8000;
    this->actionFunc = BgIcicle_Wait;
    this->dyna.actor.shape.yOffset = 1200.0f;
}

void BgIcicle_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgIcicle *this = (BgIcicle *) thisx;
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->dyna.bgId);
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void BgIcicle_Break(BgIcicle *arg0, GlobalContext *arg1, f32 arg2) {
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    s32 sp88;
    f32 *temp_s2;
    f32 *temp_s3;
    s32 temp_s0;
    s32 temp_t8;
    s32 phi_s0;

    Audio_PlaySoundAtPosition(arg1, arg0 + 0x24, 0x1E, 0x28CBU);
    sp88 = 0;
    temp_s3 = &sp9C;
    temp_s2 = &sp90;
    do {
        phi_s0 = 0;
loop_2:
        sp90 = randPlusMinusPoint5Scaled(8.0f) + arg0->dyna.actor.world.pos.x;
        sp94 = (Rand_ZeroOne() * arg2) + arg0->dyna.actor.world.pos.y + ((f32) sp88 * arg2);
        sp98 = randPlusMinusPoint5Scaled(8.0f) + arg0->dyna.actor.world.pos.z;
        sp9C = randPlusMinusPoint5Scaled(7.0f);
        spA4 = randPlusMinusPoint5Scaled(7.0f);
        spA0 = (Rand_ZeroOne() * 4.0f) + 8.0f;
        EffectSsEnIce_Spawn(arg1, (Vec3f *) temp_s2, (Rand_ZeroOne() * 0.2f) + 0.1f, (Vec3f *) temp_s3, &D_809CA30C, &D_809CA318, &D_809CA31C, 0x1E);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
        if (temp_s0 != 0xA) {
            goto loop_2;
        }
        temp_t8 = sp88 + 1;
        sp88 = temp_t8;
    } while (temp_t8 != 2);
}

void BgIcicle_DoNothing(BgIcicle *this, GlobalContext *globalCtx) {
    BgIcicle *self = (BgIcicle *) this;

}

void BgIcicle_Wait(BgIcicle *this, GlobalContext *globalCtx) {
    BgIcicle *self = (BgIcicle *) this;
    if (self->dyna.actor.xzDistToPlayer < 60.0f) {
        self->shiverTimer = 0xA;
        self->actionFunc = BgIcicle_Shiver;
    }
}

void BgIcicle_Shiver(BgIcicle *this, GlobalContext *globalCtx) {
    BgIcicle *self = (BgIcicle *) this;
    f32 sp20;
    s16 temp_v0;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;

    temp_v0 = self->shiverTimer;
    if (temp_v0 != 0) {
        self->shiverTimer = temp_v0 - 1;
    }
    phi_v0 = (s32) self->shiverTimer;
    if (((s32) self->shiverTimer % 4) == 0) {
        globalCtx = globalCtx;
        Audio_PlayActorSound2(&self->dyna.actor, 0x28D4U);
        phi_v0 = (s32) self->shiverTimer;
    }
    if (phi_v0 == 0) {
        self->dyna.actor.world.pos.x = self->dyna.actor.home.pos.x;
        self->dyna.actor.world.pos.z = self->dyna.actor.home.pos.z;
        globalCtx = globalCtx;
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &self->collider.base);
        func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, self->dyna.bgId);
        self->actionFunc = BgIcicle_Fall;
        return;
    }
    sp20 = Rand_ZeroOne();
    phi_v0_2 = 1;
    phi_v0_3 = 1;
    if (Rand_ZeroOne() < 0.5f) {
        phi_v0_2 = -1;
    }
    self->dyna.actor.world.pos.x = ((f32) phi_v0_2 * ((0.5f * sp20) + 0.5f)) + self->dyna.actor.home.pos.x;
    sp20 = Rand_ZeroOne();
    if (Rand_ZeroOne() < 0.5f) {
        phi_v0_3 = -1;
    }
    self->dyna.actor.world.pos.z = ((f32) phi_v0_3 * ((0.5f * sp20) + 0.5f)) + self->dyna.actor.home.pos.z;
}

void BgIcicle_Fall(BgIcicle *this, GlobalContext *globalCtx) {
    BgIcicle *self = (BgIcicle *) this;
    f32 temp_f0;
    u8 temp_v0;

    temp_v0 = self->collider.base.atFlags;
    if (((temp_v0 & 2) != 0) || ((self->dyna.actor.bgCheckFlags & 1) != 0)) {
        temp_f0 = self->dyna.actor.floorHeight;
        self->collider.base.atFlags = temp_v0 & 0xFFFD;
        self->dyna.actor.bgCheckFlags &= 0xFFFE;
        if (self->dyna.actor.world.pos.y < temp_f0) {
            self->dyna.actor.world.pos.y = temp_f0;
        }
        BgIcicle_Break(self, globalCtx, 40.0f);
        if (self->dyna.actor.params == 2) {
            self->dyna.actor.world.pos.y = self->dyna.actor.home.pos.y + 120.0f;
            func_800C6314(globalCtx, &globalCtx->colCtx.dyna, self->dyna.bgId);
            self->actionFunc = BgIcicle_Regrow;
            return;
        }
        Actor_MarkForDeath(&self->dyna.actor);
        return;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(&self->dyna.actor);
    self->dyna.actor.world.pos.y += 40.0f;
    Actor_UpdateBgCheckInfo(globalCtx, &self->dyna.actor, 0.0f, 0.0f, 0.0f, 4U);
    self->dyna.actor.world.pos.y -= 40.0f;
    CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &self->collider.base);
}

void BgIcicle_Regrow(BgIcicle *this, GlobalContext *globalCtx) {
    BgIcicle *self = (BgIcicle *) this;
    BgIcicle *temp_a3;
    f32 temp_a1;

    temp_a3 = self;
    temp_a1 = temp_a3->dyna.actor.home.pos.y;
    self = temp_a3;
    if (Math_StepToF(&temp_a3->dyna.actor.world.pos.y, temp_a1, 1.0f) != 0) {
        self->actionFunc = BgIcicle_Wait;
        self->dyna.actor.velocity.y = 0.0f;
    }
}

void BgIcicle_UpdateAttacked(BgIcicle *arg0, GlobalContext *arg1) {
    s32 sp24;
    s16 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;

    temp_v1 = arg0->collider.base.acFlags;
    if ((temp_v1 & 2) != 0) {
        temp_v0 = arg0->dyna.actor.params;
        arg0->collider.base.acFlags = temp_v1 & 0xFFFD;
        if (temp_v0 == 0) {
            BgIcicle_Break(arg0, arg1, 50.0f);
            temp_v0_2 = arg0->unk_160;
            if (temp_v0_2 != 0xFF) {
                Item_DropCollectibleRandom(arg1, NULL, &arg0->dyna.actor.world.pos, (s16) ((s32) (temp_v0_2 << 0x14) >> 0x10));
            }
            goto block_9;
        }
        if (temp_v0 == 3) {
            sp24 = func_800A8150((s32) arg0->unk_160);
            BgIcicle_Break(arg0, arg1, 50.0f);
            Item_DropCollectible(arg1, &arg0->dyna.actor.world.pos, (arg0->unk_161 << 8) | sp24);
            goto block_9;
        }
        if (temp_v0 == 2) {
            BgIcicle_Break(arg0, arg1, 40.0f);
            arg0->dyna.actor.world.pos.y = arg0->dyna.actor.home.pos.y + 120.0f;
            func_800C6314(arg1, &arg1->colCtx.dyna, arg0->dyna.bgId);
            arg0->actionFunc = BgIcicle_Regrow;
            return;
        }
        BgIcicle_Break(arg0, arg1, 40.0f);
block_9:
        Actor_MarkForDeath(&arg0->dyna.actor);
        // Duplicate return node #10. Try simplifying control flow for better match
    }
}

void BgIcicle_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgIcicle *this = (BgIcicle *) thisx;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a2;

    BgIcicle_UpdateAttacked(this, globalCtx);
    this->actionFunc(this, globalCtx);
    if (BgIcicle_Regrow != this->actionFunc) {
        temp_a2 = &this->collider;
        sp24 = temp_a2;
        Collider_UpdateCylinder(&this->dyna.actor, temp_a2);
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
    }
}

void BgIcicle_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgIcicle *this = (BgIcicle *) thisx;
    func_800BDFC0(globalCtx, &D_060000D0);
}

