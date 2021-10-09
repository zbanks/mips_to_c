void ObjKibako_SetShadow(ObjKibako *arg0);          /* static */
void func_80926394(ObjKibako *arg0, GlobalContext *arg1); /* static */
static s16 D_80927380 = 0;
static s16 D_80927384 = 0;
static s16 D_80927388 = 0;
static s16 D_8092738C = 0;
static ColliderCylinderInit D_809273B0 = {
    {0xA, 9, 9, 0x39, 0x20, 1},
    {0, {0x400000, 0, 2}, {0x58BC79C, 0, 0}, 0x19, 1, 1},
    {0xF, 0x1E, 0, {0, 0, 0}},
};
static ? D_809273DC;                                /* unable to generate initializer */
static ? D_809273E0;                                /* unable to generate initializer */
static ? D_809273E8;                                /* unable to generate initializer */
static InitChainEntry D_809273F0;                   /* unable to generate initializer */



void ObjKibako_SpawnCollectible(ObjKibako *this, GlobalContext *globalCtx) {
    ObjKibako *self = (ObjKibako *) this;
    ObjKibako *temp_a3;
    s16 temp_a0;
    s16 temp_t7;
    s32 temp_v0;

    if (self->isDropCollected == 0) {
        temp_a0 = self->actor.params;
        self = self;
        temp_v0 = func_800A8150(temp_a0 & 0x3F);
        temp_a3 = self;
        if (temp_v0 >= 0) {
            temp_t7 = temp_a3->actor.params;
            self = temp_a3;
            Item_DropCollectible(globalCtx, &temp_a3->actor.world.pos, ((((s32) temp_t7 >> 8) & 0x7F) << 8) | temp_v0);
            self->isDropCollected = 1;
        }
    }
}

void ObjKibako_SetShadow(ObjKibako *arg0) {
    f32 temp_f0;

    temp_f0 = arg0->actor.projectedPos.z;
    if ((temp_f0 < 370.0f) && (temp_f0 > -10.0f)) {
        arg0->actor.shape.shadowDraw = func_800B4024;
        arg0->actor.shape.shadowScale = 1.4f;
        if (temp_f0 < 200.0f) {
            arg0->actor.shape.shadowAlpha = 0x64;
            return;
        }
        arg0->actor.shape.shadowAlpha = (u8) ((s32) (0x190 - (s32) temp_f0) >> 1);
        return;
    }
    arg0->actor.shape.shadowDraw = NULL;
}

void func_809262BC(ObjKibako *this) {
    s16 *temp_a0;
    s16 temp_a1;
    s16 temp_v0;

    temp_v0 = this->actor.world.rot.y;
    temp_a0 = &this->actor.world.rot.y;
    if ((temp_v0 & 0x3FFF) != 0) {
        temp_a1 = (s16) (temp_v0 + 0x2000) & 0xC000;
        this = this;
        Math_ScaledStepToS(temp_a0, temp_a1, 0x640);
        this->actor.shape.rot.y = this->actor.world.rot.y;
    }
}

void func_80926318(ObjKibako *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s32 phi_v1;

    if (this->actor.xzDistToPlayer < 100.0f) {
        temp_v0 = this->actor.yawTowardsPlayer - globalCtx->actorCtx.actorList[2].first->world.rot.y;
        phi_v1 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = -(s32) temp_v0;
        }
        if (phi_v1 >= 0x5556) {
            func_800B8A1C(&this->actor, globalCtx, 0, 36.0f, 30.0f);
        }
    }
}

void func_80926394(ObjKibako *arg0, GlobalContext *arg1) {
    if ((arg0->isDropCollected == 0) && (arg0->unk199 != arg1->roomCtx.currRoom.num)) {
        arg0->isDropCollected = 1;
    }
}

void ObjKibako_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjKibako *this = (ObjKibako *) thisx;
    s32 sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;

    sp24 = ((s32) this->actor.params >> 0xF) & 1;
    Actor_ProcessInitChain(&this->actor, &D_809273F0);
    Actor_SetScale(&this->actor, 0.15f);
    temp_a1 = &this->collider;
    if (sp24 == 0) {
        this->actor.uncullZoneForward = 4000.0f;
    } else {
        this->actor.uncullZoneForward = 800.0f;
    }
    sp20 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &D_809273B0);
    Collider_UpdateCylinder(&this->actor, temp_a1);
    this->actor.colChkInfo.mass = 0xFF;
    this->bankIndex = Object_GetIndex(&globalCtx->objectCtx, *(&D_809273DC + (sp24 * 2)));
    if ((s32) this->bankIndex < 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->unk199 = this->actor.room;
    func_80926B40(this);
}

void ObjKibako_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjKibako *this = (ObjKibako *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void ObjKibako_AirBreak(ObjKibako *this, GlobalContext *globalCtx) {
    ObjKibako *self = (ObjKibako *) this;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    PosRot *temp_s1;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f8;
    s32 temp_s3;
    s32 temp_v0;
    s16 phi_s2;
    s32 phi_s0;
    s32 phi_s3;

    temp_s5 = &spBC;
    temp_s4 = &spC8;
    temp_s1 = &self->actor.world;
    phi_s2 = 0;
    phi_s3 = 0;
    do {
        temp_f20 = Math_SinS(phi_s2);
        temp_f22 = Math_CosS(phi_s2);
        spC8 = temp_f20 * 16.0f;
        temp_f10 = temp_f22 * 16.0f;
        temp_f8 = (Rand_ZeroOne() * 5.0f) + 2.0f;
        spD0 = temp_f10;
        spCC = temp_f8;
        spBC = spC8 * 0.2f;
        spC0 = (Rand_ZeroOne() * 6.0f) + 2.0f;
        spC4 = temp_f10 * 0.2f;
        spC8 += temp_s1->pos.x;
        spCC = temp_f8 + temp_s1->pos.y;
        spD0 = temp_f10 + temp_s1->pos.z;
        temp_f0 = Rand_ZeroOne();
        if (temp_f0 < 0.1f) {
            phi_s0 = 0x60;
        } else {
            phi_s0 = 0x20;
            if (temp_f0 < 0.7f) {
                phi_s0 = 0x40;
            }
        }
        temp_v0 = ((s32) self->actor.params >> 0xF) & 1;
        EffectSsKakera_Spawn(globalCtx, (Vec3f *) temp_s4, (Vec3f *) temp_s5, &temp_s1->pos, (s16) -0xC8, (s16) phi_s0, (s16) 0x14, (s16) 0, (s16) 0, (s16) (s32) ((Rand_ZeroOne() * 38.0f) + 10.0f), (s16) 0, (s16) 0, 0x3C, (s16) -1, (s16) (s32) *(&D_809273DC + (temp_v0 * 2)), *(&D_809273E0 + (temp_v0 * 4)));
        temp_s3 = phi_s3 + 1;
        phi_s2 = (s16) (phi_s2 + 0x4E20);
        phi_s3 = temp_s3;
    } while (temp_s3 != 0xC);
    func_800BBFB0(globalCtx, &temp_s1->pos, 40.0f, 3, (s16) 0x32, (s16) 0x8C, (u8) 1);
    func_800BBFB0(globalCtx, &temp_s1->pos, 40.0f, 2, (s16) 0x14, (s16) 0x50, (u8) 1);
}

void ObjKibako_WaterBreak(ObjKibako *this, GlobalContext *globalCtx) {
    ObjKibako *self = (ObjKibako *) this;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    PosRot *temp_s2;
    f32 *temp_s5;
    f32 *temp_s6;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f4;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_v0;
    s16 phi_s1;
    s32 phi_s3;
    s16 phi_s1_2;
    s32 phi_s0;
    s32 phi_s3_2;

    spCC = self->actor.world.pos.y + self->actor.yDistToWater;
    temp_s2 = &self->actor.world;
    temp_s5 = &spC8;
    phi_s1 = 0;
    phi_s3 = 0;
    phi_s1_2 = 0;
    phi_s3_2 = 0;
    do {
        spC8 = (Math_SinS((s16) ((s32) (Rand_ZeroOne() * 6000.0f) + phi_s1)) * 15.0f) + temp_s2->pos.x;
        spD0 = (Math_CosS((s16) ((s32) (Rand_ZeroOne() * 6000.0f) + phi_s1)) * 15.0f) + temp_s2->pos.z;
        EffectSsGSplash_Spawn(globalCtx, (Vec3f *) temp_s5, NULL, NULL, (s16) 0, (s16) 0x15E);
        temp_s3 = phi_s3 + 1;
        phi_s1 = (s16) (phi_s1 + 0x3333);
        phi_s3 = temp_s3;
    } while (temp_s3 < 5);
    spC8 = temp_s2->pos.x;
    spD0 = temp_s2->pos.z;
    EffectSsGRipple_Spawn(globalCtx, (Vec3f *) temp_s5, 0xC8, 0x258, (s16) 0);
    temp_s6 = &spBC;
    do {
        temp_f20 = Math_SinS(phi_s1_2);
        temp_f22 = Math_CosS(phi_s1_2);
        spC8 = temp_f20 * 16.0f;
        temp_f4 = temp_f22 * 16.0f;
        temp_f18 = (Rand_ZeroOne() * 5.0f) + 2.0f;
        spD0 = temp_f4;
        spCC = temp_f18;
        spBC = spC8 * 0.18f;
        spC0 = (Rand_ZeroOne() * 4.0f) + 2.0f;
        spC4 = temp_f4 * 0.18f;
        spC8 += temp_s2->pos.x;
        spCC = temp_f18 + temp_s2->pos.y;
        spD0 = temp_f4 + temp_s2->pos.z;
        phi_s0 = 0x20;
        if (Rand_ZeroOne() < 0.2f) {
            phi_s0 = 0x40;
        }
        temp_v0 = ((s32) self->actor.params >> 0xF) & 1;
        EffectSsKakera_Spawn(globalCtx, (Vec3f *) temp_s5, (Vec3f *) temp_s6, &temp_s2->pos, (s16) -0xB4, (s16) phi_s0, (s16) 0x32, (s16) 5, (s16) 0, (s16) (s32) ((Rand_ZeroOne() * 35.0f) + 10.0f), (s16) 0, (s16) 0, 0x46, (s16) -1, (s16) (s32) *(&D_809273DC + (temp_v0 * 2)), *(&D_809273E0 + (temp_v0 * 4)));
        temp_s3_2 = phi_s3_2 + 1;
        phi_s1_2 = (s16) (phi_s1_2 + 0x4E20);
        phi_s3_2 = temp_s3_2;
    } while (temp_s3_2 != 0xC);
}

void func_80926B40(ObjKibako *this) {
    this->actionFunc = func_80926B54;
}

void func_80926B54(ObjKibako *this, GlobalContext *globalCtx) {
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 18.0f, 15.0f, 0.0f, 0x45U);
    if (Object_IsLoaded(&globalCtx->objectCtx, (s32) this->bankIndex) != 0) {
        this->actor.draw = ObjKibako_Draw;
        this->actor.objBankIndex = (s8) this->bankIndex;
        ObjKibako_SetupIdle(this);
    }
}

void ObjKibako_SetupIdle(ObjKibako *this) {
    ObjKibako *self = (ObjKibako *) this;
    self->actionFunc = ObjKibako_Idle;
}

void ObjKibako_Idle(ObjKibako *this, GlobalContext *globalCtx) {
    ObjKibako *self = (ObjKibako *) this;
    PosRot *sp2C;
    CollisionCheckContext *sp28;
    ColliderCylinder *temp_a1_2;
    ColliderCylinder *temp_a1_4;
    CollisionCheckContext *temp_a1_3;
    CollisionCheckContext *temp_a1_5;
    PosRot *temp_a1;
    u8 temp_v0;

    if (Actor_HasParent(&self->actor, globalCtx) != 0) {
        ObjKibako_SetupHeld(self);
        self->actor.room = -1;
        self->actor.colChkInfo.mass = 0x78;
        if (func_800A817C(self->actor.params & 0x3F) != 0) {
            ObjKibako_SpawnCollectible(self, globalCtx);
        }
        func_800B8E58(&self->actor, 0x878U);
        return;
    }
    if (((self->actor.bgCheckFlags & 0x20) != 0) && (self->actor.yDistToWater > 19.0f)) {
        ObjKibako_WaterBreak(self, globalCtx);
        ObjKibako_SpawnCollectible(self, globalCtx);
        temp_a1 = &self->actor.world;
        sp2C = temp_a1;
        Audio_PlaySoundAtPosition(globalCtx, &temp_a1->pos, 0x14, 0x28AAU);
        Audio_PlaySoundAtPosition(globalCtx, &temp_a1->pos, 0x28, 0x28C5U);
        Actor_MarkForDeath(&self->actor);
        return;
    }
    if ((self->collider.base.acFlags & 2) != 0) {
        ObjKibako_AirBreak(self, globalCtx);
        ObjKibako_SpawnCollectible(self, globalCtx);
        Audio_PlaySoundAtPosition(globalCtx, &self->actor.world.pos, 0x14, 0x28AAU);
        Actor_MarkForDeath(&self->actor);
        return;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(&self->actor);
    func_809262BC(self);
    Actor_UpdateBgCheckInfo(globalCtx, &self->actor, 18.0f, 15.0f, 0.0f, 0x45U);
    temp_v0 = self->collider.base.ocFlags1;
    if (((temp_v0 & 8) == 0) && (self->actor.xzDistToPlayer > 28.0f)) {
        self->collider.base.ocFlags1 = temp_v0 | 8;
    }
    if ((self->actor.colChkInfo.mass != 0xFF) && (Math3D_DistanceSquared(&self->actor.world.pos, &self->actor.prevPos) < 0.01f)) {
        self->actor.colChkInfo.mass = 0xFF;
    }
    self->collider.base.acFlags &= 0xFFFD;
    if ((((s32) self->actor.params >> 7) & 1) != 0) {
        temp_a1_2 = &self->collider;
        sp2C = (PosRot *) temp_a1_2;
        Collider_UpdateCylinder(&self->actor, temp_a1_2);
        temp_a1_3 = &globalCtx->colChkCtx;
        sp28 = temp_a1_3;
        CollisionCheck_SetOC(globalCtx, temp_a1_3, (Collider *) sp2C);
        if (self->actor.xzDistToPlayer < 800.0f) {
            CollisionCheck_SetAC(globalCtx, temp_a1_3, (Collider *) sp2C);
            func_80926318(self, globalCtx);
            return;
        }
        // Duplicate return node #21. Try simplifying control flow for better match
        return;
    }
    temp_a1_4 = &self->collider;
    if (self->actor.xzDistToPlayer < 800.0f) {
        sp2C = (PosRot *) temp_a1_4;
        Collider_UpdateCylinder(&self->actor, temp_a1_4);
        temp_a1_5 = &globalCtx->colChkCtx;
        sp28 = temp_a1_5;
        CollisionCheck_SetAC(globalCtx, temp_a1_5, (Collider *) sp2C);
        if (self->actor.xzDistToPlayer < 180.0f) {
            CollisionCheck_SetOC(globalCtx, temp_a1_5, (Collider *) sp2C);
            func_80926318(self, globalCtx);
        }
    }
}

void ObjKibako_SetupHeld(ObjKibako *this) {
    ObjKibako *self = (ObjKibako *) this;
    self->actionFunc = ObjKibako_Held;
}

void ObjKibako_Held(ObjKibako *this, GlobalContext *globalCtx) {
    ObjKibako *self = (ObjKibako *) this;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s32 sp2C;

    func_80926394(self, globalCtx);
    if (Actor_HasNoParent(&self->actor, globalCtx) != 0) {
        self->actor.room = globalCtx->roomCtx.currRoom.num;
        if (fabsf(self->actor.speedXZ) < 0.1f) {
            ObjKibako_SetupIdle(self);
            self->collider.base.ocFlags1 &= 0xFFF7;
            Audio_PlayActorSound2(&self->actor, 0x28ABU);
        } else {
            Actor_SetVelocityAndMoveYRotationAndGravity(&self->actor);
            ObjKibako_SetupThrown(self);
            self->actor.flags &= 0xFBFFFFFF;
        }
        Actor_UpdateBgCheckInfo(globalCtx, &self->actor, 18.0f, 15.0f, 0.0f, 0x45U);
        return;
    }
    sp30 = self->actor.world.pos.x;
    sp34 = self->actor.world.pos.y + 20.0f;
    sp38 = self->actor.world.pos.z;
    self->actor.floorHeight = func_800C411C(&globalCtx->colCtx, &self->actor.floorPoly, &sp2C, &self->actor, (Vec3f *) &sp30);
}

void ObjKibako_SetupThrown(ObjKibako *this) {
    ObjKibako *self = (ObjKibako *) this;
    f32 sp1C;
    f32 temp_f2;
    s32 temp_f10;

    D_80927380 = 0;
    temp_f2 = (Rand_ZeroOne() - 0.5f) * 1000.0f;
    temp_f10 = (s32) temp_f2;
    sp1C = temp_f2;
    D_80927388 = (s16) temp_f10;
    D_80927384 = (s16) (s32) ((Rand_ZeroOne() - 2.0f) * 1500.0f);
    D_8092738C = (s16) (s32) (sp1C * 3.0f);
    self->timer = 0x50;
    self->actionFunc = ObjKibako_Thrown;
}

void ObjKibako_Thrown(ObjKibako *this, GlobalContext *globalCtx) {
    ObjKibako *self = (ObjKibako *) this;
    s32 sp2C;
    PosRot *sp28;
    ColliderCylinder *temp_a1_2;
    CollisionCheckContext *temp_s0;
    PosRot *temp_a1;
    s16 temp_v0_2;
    s32 temp_v1;
    u16 temp_v0_3;
    u8 temp_v0;

    temp_v0 = self->collider.base.atFlags;
    temp_v1 = (temp_v0 & 2) != 0;
    if (temp_v1 != 0) {
        self->collider.base.atFlags = temp_v0 & 0xFFFD;
    }
    sp2C = temp_v1;
    func_80926394(self, globalCtx);
    temp_v0_2 = self->timer;
    if ((s32) temp_v0_2 > 0) {
        self->timer = temp_v0_2 - 1;
    }
    temp_v0_3 = self->actor.bgCheckFlags;
    if (((temp_v0_3 & 0xB) != 0) || (temp_v1 != 0) || ((s32) self->timer <= 0)) {
        ObjKibako_AirBreak(self, globalCtx);
        ObjKibako_SpawnCollectible(self, globalCtx);
        Audio_PlaySoundAtPosition(globalCtx, &self->actor.world.pos, 0x14, 0x28AAU);
        Actor_MarkForDeath(&self->actor);
        return;
    }
    if ((temp_v0_3 & 0x40) != 0) {
        ObjKibako_WaterBreak(self, globalCtx);
        ObjKibako_SpawnCollectible(self, globalCtx);
        temp_a1 = &self->actor.world;
        sp28 = temp_a1;
        Audio_PlaySoundAtPosition(globalCtx, &temp_a1->pos, 0x14, 0x28AAU);
        Audio_PlaySoundAtPosition(globalCtx, &temp_a1->pos, 0x28, 0x28C5U);
        Actor_MarkForDeath(&self->actor);
        return;
    }
    if (self->actor.velocity.y < -0.05f) {
        self->actor.gravity = -2.3f;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(&self->actor);
    Math_StepToS(&D_80927384, D_80927380, 0xA0);
    Math_StepToS(&D_8092738C, D_80927388, 0xA0);
    self->actor.shape.rot.x += D_80927384;
    self->actor.shape.rot.y += D_8092738C;
    Actor_UpdateBgCheckInfo(globalCtx, &self->actor, 18.0f, 15.0f, 0.0f, 0x45U);
    temp_a1_2 = &self->collider;
    sp28 = (PosRot *) temp_a1_2;
    Collider_UpdateCylinder(&self->actor, temp_a1_2);
    temp_s0 = &globalCtx->colChkCtx;
    CollisionCheck_SetOC(globalCtx, temp_s0, (Collider *) sp28);
    CollisionCheck_SetAT(globalCtx, temp_s0, (Collider *) sp28);
}

void ObjKibako_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjKibako *this = (ObjKibako *) thisx;
    this->actionFunc(this, globalCtx);
    ObjKibako_SetShadow(this);
}

void ObjKibako_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjKibako *this = (ObjKibako *) thisx;
    func_800BDFC0(globalCtx, *(&D_809273E8 + ((((s32) this->actor.params >> 0xF) & 1) * 4)));
}

