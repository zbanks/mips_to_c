static ColliderCylinderInit D_809861F0 = {
    {0xA, 0x11, 9, 0x39, 0x20, 1},
    {0, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 0x11, 1, 1},
    {0xD, 0xD, 0, {0, 0, 0}},
};



void EnNutsball_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnNutsball *this = (EnNutsball *) thisx;
    ActorShape_Init(&this->actor.shape, 400.0f, func_800B3FC0, 13.0f);
    Collider_InitAndSetCylinder(globalCtx, &this->collider, &this->actor, &D_809861F0);
    this->actor.shape.rot.y = 0;
    this->actor.speedXZ = 10.0f;
    if (this->actor.params == 2) {
        this->timer = 1;
        this->timerThreshold = 0;
        this->actor.gravity = -1.0f;
    } else {
        this->timer = 0x14;
        this->timerThreshold = 0x13;
        this->actor.gravity = -0.5f;
    }
    this->actor.world.rot.x = (s16) -(s32) this->actor.shape.rot.x;
    this->actor.shape.rot.x = 0;
    if (this->actor.params == 1) {
        EnNutsball_InitColliderParams(this);
    }
}

void EnNutsball_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnNutsball *this = (EnNutsball *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnNutsball_InitColliderParams(EnNutsball *this) {
    EnNutsball *self = (EnNutsball *) this;
    u8 temp_t8;

    temp_t8 = self->collider.base.atFlags & 0xFFE9;
    self->collider.base.atFlags = temp_t8;
    self->collider.base.atFlags = temp_t8 | 8;
    self->collider.info.toucher.dmgFlags = 0x400000;
    self->collider.info.toucher.damage = 2;
}

void EnNutsball_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnNutsball *this = (EnNutsball *) thisx;
    Actor *sp6C;
    Vec3f sp60;
    Vec3s sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    u32 sp44;
    CollisionPoly *sp40;
    PosRot *sp3C;
    CollisionContext *sp38;
    Actor *temp_v1;
    ColliderCylinder *temp_a1_2;
    CollisionCheckContext *temp_a1_3;
    CollisionContext *temp_a0;
    f32 *temp_a1;
    f32 temp_f16;
    f32 temp_f2;
    u16 temp_v0;
    u8 temp_v0_2;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if ((temp_v1->unkA6C & 0x300000C0) == 0) {
        this->timer += -1;
        if ((s32) this->timer < 0) {
            temp_f2 = this->actor.velocity.x;
            temp_f16 = this->actor.velocity.z;
            this->actor.velocity.y += this->actor.gravity;
            sp6C = temp_v1;
            this->actor.world.rot.x = Math_FAtan2F(sqrtf((temp_f2 * temp_f2) + (temp_f16 * temp_f16)), this->actor.velocity.y);
        }
        temp_v0 = this->actor.bgCheckFlags;
        this->actor.home.rot.z += 0x2AA8;
        if (((temp_v0 & 8) != 0) || ((temp_v0 & 1) != 0) || ((temp_v0 & 0x10) != 0) || ((this->collider.base.atFlags & 2) != 0) || ((this->collider.base.acFlags & 2) != 0) || ((this->collider.base.ocFlags1 & 2) != 0)) {
            temp_a1 = &sp4C;
            if ((globalCtx->actorCtx.actorList[2].first->unk144 == 1) && (temp_v0_2 = this->collider.base.atFlags, ((temp_v0_2 & 2) != 0)) && ((temp_v0_2 & 0x10) != 0) && ((temp_v0_2 & 4) != 0)) {
                sp6C = globalCtx->actorCtx.actorList[2].first;
                EnNutsball_InitColliderParams(this);
                func_8018219C(globalCtx->actorCtx.actorList[2].first + 0xD04, &sp58, 0);
                this->actor.world.rot.y = sp58.y + 0x8000;
                this->timer = 0x14;
            } else {
                sp4C = this->actor.world.pos.x;
                sp50 = this->actor.world.pos.y + 4.0f;
                sp54 = this->actor.world.pos.z;
                EffectSsHahen_SpawnBurst(globalCtx, (Vec3f *) temp_a1, 6.0f, 0, (s16) 7, (s16) 3, (s16) 0xF, (s16) -1, (s16) 0xA, NULL);
                if (this->actor.params == 1) {
                    Audio_PlaySoundAtPosition(globalCtx, &this->actor.world.pos, 0x14, 0x28F4U);
                } else {
                    Audio_PlaySoundAtPosition(globalCtx, &this->actor.world.pos, 0x14, 0x38C0U);
                }
                Actor_MarkForDeath(&this->actor);
            }
        } else if (this->timer == -0x12C) {
            Actor_MarkForDeath(&this->actor);
        }
        sp3C = &this->actor.world;
        Actor_SetVelocityAndMoveXYRotation(&this->actor);
        Math_Vec3f_Copy(&sp60, &sp3C->pos);
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 10.0f, 5.0f, 10.0f, 7U);
        temp_a0 = &globalCtx->colCtx;
        if ((this->actor.bgCheckFlags & 8) != 0) {
            sp38 = temp_a0;
            if ((func_800C9A4C(temp_a0, this->actor.wallPoly, (s32) this->actor.wallBgId) & 0x30) != 0) {
                this->actor.bgCheckFlags &= 0xFFF7;
                if (func_800C55C4(sp38, &this->actor.prevPos, &sp60, &sp3C->pos, &sp40, 1U, 0U, 0U, 1U, &sp44) != 0) {
                    if ((func_800C9A4C(sp38, sp40, (s32) sp44) & 0x30) != 0) {
                        this->actor.world.pos.x += this->actor.velocity.x * 0.01f;
                        this->actor.world.pos.z += this->actor.velocity.z * 0.01f;
                    } else {
                        this->actor.bgCheckFlags |= 8;
                    }
                } else {
                    Math_Vec3f_Copy(&sp3C->pos, &sp60);
                }
            }
        }
        temp_a1_2 = &this->collider;
        sp38 = (CollisionContext *) temp_a1_2;
        Collider_UpdateCylinder(&this->actor, temp_a1_2);
        this->actor.flags |= 0x1000000;
        temp_a1_3 = &globalCtx->colChkCtx;
        sp3C = (PosRot *) temp_a1_3;
        CollisionCheck_SetAT(globalCtx, temp_a1_3, (Collider *) sp38);
        CollisionCheck_SetAC(globalCtx, temp_a1_3, (Collider *) sp38);
        if ((s32) this->timer < (s32) this->timerThreshold) {
            CollisionCheck_SetOC(globalCtx, temp_a1_3, (Collider *) sp38);
        }
    }
}

void EnNutsball_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnNutsball *this = (EnNutsball *) thisx;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    SysMatrix_InsertMatrix(&globalCtx->mf_187FC, 1);
    SysMatrix_InsertZRotation_s(this->actor.home.rot.z, 1);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp20 = temp_v0;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) D_04058BA0;
    temp_v0_2->words.w0 = 0xDE000000;
}

