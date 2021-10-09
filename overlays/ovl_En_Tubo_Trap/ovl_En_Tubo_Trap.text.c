struct _mips2c_stack_EnTuboTrap_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTuboTrap_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTuboTrap_DropCollectible {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTuboTrap_FlyAtPlayer {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnTuboTrap_HandleImpact {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ PosRot *sp24;                        /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnTuboTrap_Idle {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Actor *sp1C;                         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTuboTrap_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnTuboTrap_Levitate {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnTuboTrap_SpawnEffectsInWater {
    /* 0x00 */ char pad_0[0xBC];
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ char pad_D4[0xC];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_EnTuboTrap_SpawnEffectsOnLand {
    /* 0x00 */ char pad_0[0xBC];
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ char pad_D4[0xC];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_EnTuboTrap_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ CollisionCheckContext *sp2C;         /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

void EnTuboTrap_DropCollectible(Actor *arg0, GlobalContext *arg1); /* static */
void EnTuboTrap_HandleImpact(Actor *arg0, GlobalContext *arg1); /* static */
void EnTuboTrap_SpawnEffectsInWater(Actor *arg0, GlobalContext *arg1, s32); /* static */
void EnTuboTrap_SpawnEffectsOnLand(Actor *arg0, GlobalContext *arg1, s32); /* static */
static ColliderCylinderInit D_80931410 = {
    {0xA, 0x11, 9, 0, 0x20, 1},
    {0, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 0},
    {0xB, 0x1C, 0, {0, 0, 0}},
};
static InitChainEntry D_8093145C[4];                /* unable to generate initializer */
static ? D_8093146C;                                /* unable to generate initializer */

void EnTuboTrap_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    EnTuboTrap *this = (EnTuboTrap *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_8093145C);
    this->actor.shape.rot.z = 0;
    this->actor.world.rot.z = 0;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 1.8f);
    temp_a1 = &this->collider;
    sp20 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80931410);
    this->actionFunc = EnTuboTrap_Idle;
}

void EnTuboTrap_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTuboTrap *this = (EnTuboTrap *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnTuboTrap_DropCollectible(Actor *arg0, GlobalContext *arg1) {
    s16 temp_a0;
    s32 temp_v0;

    temp_a0 = arg0->params;
    arg0 = arg0;
    temp_v0 = func_800A8150(((s32) temp_a0 >> 8) & 0x3F);
    if (temp_v0 >= 0) {
        Item_DropCollectible(arg1, arg0 + 0x24, ((arg0->params & 0x7F) << 8) | temp_v0);
    }
}

void EnTuboTrap_SpawnEffectsOnLand(Actor *arg0, GlobalContext *arg1) {
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    Vec3f *temp_s1;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f6;
    f32 temp_f8;
    s32 temp_s3;
    s16 phi_s2;
    s32 phi_s0;
    s32 phi_s3;

    temp_s1 = arg0 + 0x24;
    temp_s5 = &spBC;
    temp_s4 = &spC8;
    phi_s2 = 0;
    phi_s3 = 0;
    do {
        temp_f20 = Math_SinS(phi_s2);
        temp_f22 = Math_CosS(phi_s2);
        spC8 = temp_f20 * 8.0f;
        temp_f8 = (Rand_ZeroOne() * 5.0f) + 2.0f;
        spD0 = temp_f22 * 8.0f;
        spCC = temp_f8;
        spBC = spC8 * 0.23f;
        temp_f6 = (Rand_ZeroOne() * 5.0f) + 2.0f;
        spC4 = spD0 * 0.23f;
        spC0 = temp_f6;
        spC8 += temp_s1->x;
        spCC += temp_s1->y;
        spD0 += temp_s1->z;
        temp_f0 = Rand_ZeroOne();
        if (temp_f0 < 0.2f) {
            phi_s0 = 0x60;
        } else {
            phi_s0 = 0x20;
            if (temp_f0 < 0.6f) {
                phi_s0 = 0x40;
            }
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s4, (Vec3f *) temp_s5, temp_s1, (s16) -0xF0, (s16) phi_s0, (s16) 0x14, (s16) 0, (s16) 0, (s16) (s32) ((Rand_ZeroOne() * 85.0f) + 15.0f), (s16) 0, (s16) 0, 0x3C, (s16) -1, (s16) 3, D_05018090);
        temp_s3 = phi_s3 + 1;
        phi_s2 = (s16) (phi_s2 + 0x4E20);
        phi_s3 = temp_s3;
    } while (temp_s3 != 0xF);
    func_800BBFB0(arg1, temp_s1, 30.0f, 4, (s16) 0x14, (s16) 0x32, (u8) 0);
}

void EnTuboTrap_SpawnEffectsInWater(Actor *arg0, GlobalContext *arg1) {
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    Vec3f *temp_s1;
    f32 *temp_s5;
    f32 *temp_s6;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f4;
    s32 temp_s3;
    s16 phi_s2;
    s32 phi_s0;
    s32 phi_s3;

    temp_s5 = &spC8;
    temp_s1 = arg0 + 0x24;
    temp_s5->unk_0 = temp_s1->x;
    temp_s5->unk_4 = (f32) temp_s1->y;
    temp_s5->unk_8 = (f32) temp_s1->z;
    spCC += arg0->yDistToWater;
    EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s5, NULL, NULL, (s16) 0, (s16) 0x190);
    temp_s6 = &spBC;
    phi_s2 = 0;
    phi_s3 = 0;
    do {
        temp_f20 = Math_SinS(phi_s2);
        temp_f22 = Math_CosS(phi_s2);
        spC8 = temp_f20 * 8.0f;
        temp_f4 = temp_f22 * 8.0f;
        temp_f18 = (Rand_ZeroOne() * 5.0f) + 2.0f;
        spD0 = temp_f4;
        spCC = temp_f18;
        spBC = spC8 * 0.2f;
        spC0 = (Rand_ZeroOne() * 4.0f) + 2.0f;
        spC4 = temp_f4 * 0.2f;
        spC8 += temp_s1->x;
        spCC = temp_f18 + temp_s1->y;
        spD0 = temp_f4 + temp_s1->z;
        phi_s0 = 0x20;
        if (Rand_ZeroOne() < 0.2f) {
            phi_s0 = 0x40;
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s5, (Vec3f *) temp_s6, temp_s1, (s16) -0xAA, (s16) phi_s0, (s16) 0x32, (s16) 5, (s16) 0, (s16) (s32) ((Rand_ZeroOne() * 85.0f) + 15.0f), (s16) 0, (s16) 0, 0x46, (s16) -1, (s16) 3, D_05018090);
        temp_s3 = phi_s3 + 1;
        phi_s2 = (s16) (phi_s2 + 0x4E20);
        phi_s3 = temp_s3;
    } while (temp_s3 != 0xF);
}

void EnTuboTrap_HandleImpact(Actor *arg0, GlobalContext *arg1) {
    s32 sp28;
    PosRot *sp24;
    PosRot *temp_a1;
    PosRot *temp_a1_2;
    s32 temp_a2;
    u16 temp_v0_2;
    u8 temp_v0;
    u8 temp_v1;

    temp_a2 = arg1->actorCtx.actorList[2].first;
    sp28 = temp_a2;
    if (((arg0->bgCheckFlags & 0x20) != 0) && (arg0->yDistToWater > 15.0f)) {
        EnTuboTrap_SpawnEffectsInWater(arg0, arg1, temp_a2);
        Audio_PlaySoundAtPosition(arg1, arg0 + 0x24, 0x28, 0x2817U);
        EnTuboTrap_DropCollectible(arg0, arg1);
        Actor_MarkForDeath(arg0);
        return;
    }
    temp_v0 = arg0->unk_168;
    if ((temp_v0 & 4) != 0) {
        arg0->unk_168 = (u8) (temp_v0 & 0xFFFB);
        EnTuboTrap_SpawnEffectsOnLand(arg0, arg1, temp_a2);
        temp_a1 = &arg0->world;
        sp24 = temp_a1;
        Audio_PlaySoundAtPosition(arg1, (Vec3f *) temp_a1, 0x28, 0x1808U);
        Audio_PlaySoundAtPosition(arg1, (Vec3f *) temp_a1, 0x28, 0x2887U);
        EnTuboTrap_DropCollectible(arg0, arg1);
        Actor_MarkForDeath(arg0);
        return;
    }
    temp_v1 = arg0->unk_169;
    if ((temp_v1 & 2) != 0) {
        arg0->unk_169 = (u8) (temp_v1 & 0xFFFD);
        EnTuboTrap_SpawnEffectsOnLand(arg0, arg1, temp_a2);
        temp_a1_2 = &arg0->world;
        sp24 = temp_a1_2;
        Audio_PlaySoundAtPosition(arg1, (Vec3f *) temp_a1_2, 0x28, 0x2802U);
        Audio_PlaySoundAtPosition(arg1, (Vec3f *) temp_a1_2, 0x28, 0x2887U);
        EnTuboTrap_DropCollectible(arg0, arg1);
        Actor_MarkForDeath(arg0);
        return;
    }
    if (((temp_v0 & 2) != 0) && (arg0->unk_168 = (u8) (temp_v0 & 0xFFFD), (temp_a2 == arg0->unk_15C))) {
        EnTuboTrap_SpawnEffectsOnLand(arg0, arg1, temp_a2);
        Audio_PlaySoundAtPosition(arg1, (Vec3f *) &arg0->world, 0x28, 0x2887U);
        Audio_PlaySoundAtPosition(arg1, sp28 + 0x24, 0x28, 0x83EU);
        EnTuboTrap_DropCollectible(arg0, arg1);
        Actor_MarkForDeath(arg0);
        return;
    }
    temp_v0_2 = arg0->bgCheckFlags;
    if (((temp_v0_2 & 8) != 0) || ((temp_v0_2 & 1) != 0)) {
        EnTuboTrap_SpawnEffectsOnLand(arg0, arg1, temp_a2);
        Audio_PlaySoundAtPosition(arg1, (Vec3f *) &arg0->world, 0x28, 0x2887U);
        EnTuboTrap_DropCollectible(arg0, arg1);
        Actor_MarkForDeath(arg0);
    }
}

void EnTuboTrap_Idle(EnTuboTrap *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    Actor *temp_v1;
    EnTuboTrap *temp_a0;
    EnTuboTrap *temp_a2;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0;

    temp_a2 = this;
    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if ((temp_a2->actor.xzDistToPlayer < 200.0f) && (temp_a2->actor.world.pos.y <= temp_v1->world.pos.y) && ((temp_v0 = temp_a2->actor.home.rot.z, (temp_v0 == 0)) || (temp_a2->actor.yDistToPlayer <= ((f32) temp_v0 * 10.0f)))) {
        sp1C = temp_v1;
        this = temp_a2;
        func_800BC154(globalCtx, &globalCtx->actorCtx, (Actor *) temp_a2, 5U);
        temp_f0 = this->actor.world.pos.y;
        this->actor.flags |= 0x11;
        temp_f2 = (f32) *(&D_8093146C + temp_v1->unk_14B);
        this->targetHeight = temp_v1->world.pos.y + temp_f2;
        if (this->targetHeight < temp_f0) {
            this->targetHeight = temp_f0 + temp_f2;
        }
        temp_a0 = this;
        this->originPos.x = this->actor.world.pos.x;
        this->originPos.y = this->actor.world.pos.y;
        this->originPos.z = this->actor.world.pos.z;
        this = this;
        Audio_PlayActorSound2((Actor *) temp_a0, 0x28C4U);
        this->actionFunc = EnTuboTrap_Levitate;
    }
}

void EnTuboTrap_Levitate(EnTuboTrap *this, GlobalContext *globalCtx) {
    this->actor.shape.rot.y += 0x1388;
    Math_ApproachF(&this->actor.world.pos.y, this->targetHeight, 0.8f, 3.0f);
    if (fabsf(this->actor.world.pos.y - this->targetHeight) < 10.0f) {
        this->actor.speedXZ = 10.0f;
        this->actionFunc = EnTuboTrap_FlyAtPlayer;
        this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    }
}

void EnTuboTrap_FlyAtPlayer(EnTuboTrap *this, GlobalContext *globalCtx) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;

    sp2C = this->originPos.x - this->actor.world.pos.x;
    sp28 = this->originPos.y - this->actor.world.pos.y;
    sp24 = this->originPos.z - this->actor.world.pos.z;
    Audio_PlayActorSound2((Actor *) this, 0x3037U);
    if (((sp2C * sp2C) + (sp28 * sp28) + (sp24 * sp24)) > 57600.0f) {
        Math_ApproachF(&this->actor.gravity, -3.0f, 0.2f, 0.5f);
    }
    this->actor.shape.rot.y += 0x1388;
    EnTuboTrap_HandleImpact((Actor *) this, globalCtx);
}

void EnTuboTrap_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp2C;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    f32 temp_f0;
    EnTuboTrap *this = (EnTuboTrap *) thisx;

    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 12.0f, 10.0f, 20.0f, 0x1FU);
    Actor_SetHeight((Actor *) this, 0.0f);
    temp_f0 = this->actor.projectedPos.z;
    temp_a1 = &this->collider;
    if (temp_f0 < 811.0f) {
        if (temp_f0 > 300.0f) {
            this->actor.shape.shadowDraw = func_800B3FC0;
            this->actor.shape.shadowAlpha = (u8) ((s32) (0x32B - (s32) temp_f0) >> 1);
        } else if (temp_f0 > -10.0f) {
            this->actor.shape.shadowAlpha = 0xFF;
            this->actor.shape.shadowDraw = func_800B3FC0;
        } else {
            goto block_6;
        }
    } else {
block_6:
        this->actor.shape.shadowDraw = NULL;
    }
    sp28 = temp_a1;
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    temp_a1_2 = &globalCtx->colChkCtx;
    sp2C = temp_a1_2;
    CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) sp28);
    CollisionCheck_SetAT(globalCtx, temp_a1_2, (Collider *) sp28);
}

void EnTuboTrap_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnTuboTrap *this = (EnTuboTrap *) thisx;
    func_800BDFC0(globalCtx, D_05017EA0);
}
