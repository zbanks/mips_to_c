? EffectSsGSpk_SpawnFuse(GlobalContext *, EnBombf *, Vec3f *, Vec3f *, ? *); /* extern */
? func_800B8C20(EnBombf *, Actor *, GlobalContext *); /* extern */
? func_800B8EF4(GlobalContext *, EnBombf *);        /* extern */
? func_800DFD04(Camera *, ?, ?, ?);                 /* extern */
s32 func_80123F48(GlobalContext *, PosRot *, ?, ?); /* extern */
void func_808AEAB8(EnBombf *arg0, s16 arg1);        /* static */
void func_808AEAE0(EnBombf *this, GlobalContext *globalCtx); /* static */
s32 *func_808AF86C(GraphicsContext *arg0, GlobalContext *arg1); /* static */
extern ? D_06000340;
extern ? D_06000408;
extern ? D_06000530;
static ColliderCylinderInit D_808AFB20 = {
    {0xA, 0, 0x29, 0x39, 0x20, 1},
    {2, {0, 0, 0}, {0x13A28, 0, 0}, 0, 1, 1},
    {9, 0x12, 0xA, {0, 0, 0}},
};
static ColliderJntSphElementInit D_808AFB4C = {{0, {8, 0, 8}, {0, 0, 0}, 0x19, 0, 0}, {0, {{0, 0, 0}, 0}, 0x64}};
static ColliderJntSphInit D_808AFB70 = {{0xA, 0x39, 0, 0, 0, 0}, 1, &D_808AFB4C};
static ? D_808AFB80;                                /* unable to generate initializer */
static ? D_808AFB8C;                                /* unable to generate initializer */
static ? D_808AFB98;                                /* unable to generate initializer */
static ? D_808AFBA4;                                /* unable to generate initializer */
static s32 D_808AFBB0 = 0xFFFFFFFF;



void EnBombf_SetupAction(EnBombf *this, void (*actionFunc)(EnBombf *, GlobalContext *)) {
    EnBombf *self = (EnBombf *) this;
    self->actionFunc = actionFunc;
}

void EnBombf_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnBombf *this = (EnBombf *) thisx;
    f32 sp3C;
    s8 *sp30;
    s8 *sp2C;
    s8 *temp_a1;
    s8 *temp_a1_2;

    sp3C = 0.0f;
    Actor_SetScale(&this->actor, 0.01f);
    this->unk1F8 = 1;
    temp_a1 = this->unk_144;
    sp2C = temp_a1;
    Collider_InitCylinder(globalCtx, (ColliderCylinder *) temp_a1);
    temp_a1_2 = &this->unk_144[76];
    sp30 = temp_a1_2;
    Collider_InitJntSph(globalCtx, (ColliderJntSph *) temp_a1_2);
    Collider_SetCylinder(globalCtx, (ColliderCylinder *) temp_a1, &this->actor, &D_808AFB20);
    Collider_SetJntSph(globalCtx, (ColliderJntSph *) temp_a1_2, &this->actor, &D_808AFB70, (ColliderJntSphElement *) &this->unk_144[108]);
    if (this->actor.params == 0) {
        sp3C = 1000.0f;
    }
    ActorShape_Init(&this->actor.shape, sp3C, func_800B3FC0, 12.0f);
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->actor.colChkInfo.cylRadius = 0xA;
    this->actor.colChkInfo.cylHeight = 0xA;
    this->actor.targetMode = 0;
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    if (this->actor.params == 0) {
        this->timer = 0x8C;
        this->unk1FE = 0xF;
        this->actor.gravity = -1.5f;
        func_800BC154(globalCtx, &globalCtx->actorCtx, &this->actor, 3U);
        this->actor.colChkInfo.mass = 0xC8;
        this->actor.flags &= -2;
        EnBombf_SetupAction(this, func_808AEE3C);
    } else {
        this->actor.colChkInfo.mass = 0xFF;
        this->unk_1F8[4] = 1;
        this->unk204 = 1.0f;
        func_808AEAB8(this, this->actor.params);
    }
    this->actor.uncullZoneScale += 31000.0f;
    this->actor.uncullZoneForward += 31000.0f;
}

void EnBombf_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBombf *this = (EnBombf *) thisx;
    Collider_DestroyCylinder(globalCtx, (ColliderCylinder *) this->unk_144);
    Collider_DestroyJntSph(globalCtx, (ColliderJntSph *) &this->unk_144[76]);
}

void func_808AEAB8(EnBombf *arg0, s16 arg1) {
    EnBombf_SetupAction(arg0, func_808AEAE0);
}

void func_808AEAE0(EnBombf *this, GlobalContext *globalCtx) {
    Actor *sp40;
    PosRot *sp38;
    Actor *temp_v0;
    Actor *temp_v0_3;
    Actor *temp_v0_4;
    Actor *temp_v1;
    PosRot *temp_a1;
    f32 temp_f0;
    s32 temp_v0_2;
    u8 temp_a0;

    temp_f0 = this->unk204;
    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if (temp_f0 >= 1.0f) {
        sp40 = temp_v1;
        if (Actor_HasParent(&this->actor, globalCtx) != 0) {
            sp40 = temp_v1;
            temp_v0 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x2F, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
            if (temp_v0 != 0) {
                func_800B8C20(this, temp_v0, globalCtx);
                this->timer = 0xB4;
                this->unk204 = 0.0f;
                Audio_PlayActorSound2(&this->actor, 0x86AU);
                this->actor.flags &= -2;
                return;
            }
            temp_v1->child = NULL;
            temp_v1->unk34C = 0;
            temp_v1->unk388 = 0;
            this->actor.parent = NULL;
            temp_v1->unkA6C = (s32) (temp_v1->unkA6C & ~0x800);
            return;
        }
        temp_a0 = (u8) this->unk_144[17];
        temp_a1 = &this->actor.world;
        if (((temp_a0 & 2) != 0) && ((temp_v0_2 = *this->unk180, ((temp_v0_2 & 0x13828) != 0)) || (((temp_v0_2 & 0x200) != 0) && (temp_v1->unk14B == 1) && (temp_v1->speedXZ > 15.0f)))) {
            this->unk_144[17] = temp_a0 & 0xFFFD;
            if ((this->unk14C->unk2 != 9) && (temp_v0_3 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x2F, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0), (temp_v0_3 != 0))) {
                temp_v0_3->unk1F8 = 1;
                temp_v0_3->unk1F0 = 0;
                this->timer = 0xB4;
                this->actor.flags &= -2;
                this->unk204 = 0.0f;
                return;
            }
            // Duplicate return node #24. Try simplifying control flow for better match
            return;
        }
        sp40 = temp_v1;
        sp38 = temp_a1;
        if (func_80123F48(globalCtx, temp_a1, 0x41F00000, 0x42480000) != 0) {
            temp_v0_4 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x2F, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
            if (temp_v0_4 != 0) {
                temp_v0_4->unk1F0 = 0x64;
                this->timer = 0xB4;
                this->actor.flags &= -2;
                this->unk204 = 0.0f;
                return;
            }
            // Duplicate return node #24. Try simplifying control flow for better match
            return;
        }
        sp40 = temp_v1;
        if (Actor_HasParent(&this->actor, globalCtx) == 0) {
            func_800B8BB0(&this->actor, globalCtx);
            return;
        }
        temp_v1->child = NULL;
        temp_v1->unk34C = 0;
        temp_v1->unk388 = 0;
        this->actor.parent = NULL;
        temp_v1->unkA6C = (s32) (temp_v1->unkA6C & ~0x800);
        sp38->pos.x = this->actor.home.pos.x;
        sp38->pos.y = this->actor.home.pos.y;
        sp38->pos.z = this->actor.home.pos.z;
        return;
    }
    if (this->timer == 0) {
        this->unk204 = (f32) (temp_f0 + 0.05f);
        if (this->unk204 >= 1.0f) {
            this->actor.flags |= 1;
        }
    }
    sp40 = temp_v1;
    if (Actor_HasParent(&this->actor, globalCtx) != 0) {
        temp_v1->child = NULL;
        temp_v1->unk34C = 0;
        temp_v1->unk388 = 0;
        this->actor.parent = NULL;
        temp_v1->unkA6C = (s32) (temp_v1->unkA6C & ~0x800);
        this->actor.world.pos.x = this->actor.home.pos.x;
        this->actor.world.pos.y = this->actor.home.pos.y;
        this->actor.world.pos.z = this->actor.home.pos.z;
    }
}

void func_808AEE3C(EnBombf *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    if (Actor_HasParent(&this->actor, globalCtx) != 0) {
        this->unk204 = 0.0f;
        EnBombf_SetupAction(this, func_808AEF68);
        this->actor.room = -1;
        return;
    }
    this->unk204 = 1.0f;
    if ((this->actor.bgCheckFlags & 1) == 0) {
        Math_SmoothStepToF(&this->actor.speedXZ, 0.0f, 1.0f, 0.025f, 0.0f);
        return;
    }
    Math_SmoothStepToF(&this->actor.speedXZ, 0.0f, 1.0f, 1.5f, 0.0f);
    if ((this->actor.bgCheckFlags & 2) != 0) {
        func_800B8EF4(globalCtx, this);
        temp_f0 = this->actor.velocity.y;
        if (temp_f0 < -6.0f) {
            this->actor.bgCheckFlags &= 0xFFFE;
            this->actor.velocity.y = temp_f0 * -0.3f;
            return;
        }
        // Duplicate return node #9. Try simplifying control flow for better match
        return;
    }
    if ((s32) this->timer >= 4) {
        func_800B8BB0(&this->actor, globalCtx);
    }
}

void func_808AEF68(EnBombf *this, GlobalContext *globalCtx) {
    EnBombf *temp_a0;

    temp_a0 = this;
    if (Actor_HasNoParent(&this->actor, globalCtx) != 0) {
        this = temp_a0;
        EnBombf_SetupAction(temp_a0, func_808AEE3C);
        this->actor.bgCheckFlags &= 0xFFFE;
        func_808AEE3C(this, globalCtx);
        return;
    }
    temp_a0->actor.velocity.y = 0.0f;
}

void func_808AEFD4(EnBombf *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s16 temp_v1_6;
    s32 temp_v1_7;

    if (this->unk1AC->unk2E == 0) {
        this->actor.flags |= 0x20;
        func_8013ECE0(this->actor.xzDistToPlayer, 0xFFU, 0x14U, 0x96U);
    }
    this->unk1AC->unk2E = 0x64;
    this->unk1AC->unk36 = 0x64;
    if (this->actor.params == 1) {
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_144[76]);
    }
    temp_v1 = globalCtx->envCtx.unk_8C.diffuseColor1[0];
    if (temp_v1 != 0) {
        globalCtx->envCtx.unk_8C.diffuseColor1[0] = temp_v1 - 0x19;
    }
    temp_v1_2 = globalCtx->envCtx.unk_8C.diffuseColor1[1];
    if (temp_v1_2 != 0) {
        globalCtx->envCtx.unk_8C.diffuseColor1[1] = temp_v1_2 - 0x19;
    }
    temp_v1_3 = globalCtx->envCtx.unk_8C.diffuseColor1[2];
    if (temp_v1_3 != 0) {
        globalCtx->envCtx.unk_8C.diffuseColor1[2] = temp_v1_3 - 0x19;
    }
    temp_v1_4 = globalCtx->envCtx.unk_8C.ambientColor[0];
    if (temp_v1_4 != 0) {
        globalCtx->envCtx.unk_8C.ambientColor[0] = temp_v1_4 - 0x19;
    }
    temp_v1_5 = globalCtx->envCtx.unk_8C.ambientColor[1];
    if (temp_v1_5 != 0) {
        globalCtx->envCtx.unk_8C.ambientColor[1] = temp_v1_5 - 0x19;
    }
    temp_v1_6 = globalCtx->envCtx.unk_8C.ambientColor[2];
    if (temp_v1_6 != 0) {
        globalCtx->envCtx.unk_8C.ambientColor[2] = temp_v1_6 - 0x19;
    }
    if (this->timer == 0) {
        temp_v0 = globalCtx->actorCtx.actorList[2].first;
        temp_v1_7 = temp_v0->unkA6C;
        if (((temp_v1_7 & 0x800) != 0) && (this == temp_v0->unk34C)) {
            temp_v0->child = NULL;
            temp_v0->unk34C = 0;
            temp_v0->unk388 = 0;
            temp_v0->unkA6C = (s32) (temp_v1_7 & ~0x800);
        }
        Actor_MarkForDeath(&this->actor);
    }
}

void EnBombf_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnBombf *this = (EnBombf *) thisx;
    Vec3f sp8C;
    ? sp80;
    ? sp74;
    f32 sp6C;
    Vec3f sp68;
    f32 sp60;
    Vec3f sp5C;
    s32 sp58;
    PosRot *sp40;
    s8 *sp3C;
    PosRot *temp_t3;
    PosRot *temp_t8;
    f32 temp_f0;
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s8 *temp_a1_2;
    u16 temp_v0_2;
    s32 phi_v1;
    s32 phi_v0;

    sp8C.x = D_808AFB80.unk0;
    sp8C.y = D_808AFB80.unk4;
    sp8C.z = D_808AFB80.unk8;
    sp80.unk0 = (s32) D_808AFB8C.unk0;
    sp80.unk4 = (s32) D_808AFB8C.unk4;
    sp80.unk8 = (s32) D_808AFB8C.unk8;
    sp74.unk0 = (s32) D_808AFB98.unk0;
    sp74.unk4 = (s32) D_808AFB98.unk4;
    sp74.unk8 = (s32) D_808AFB98.unk8;
    sp5C.x = D_808AFBA4.unk0;
    sp5C.y = D_808AFBA4.unk4;
    sp5C.z = D_808AFBA4.unk8;
    sp58 = D_808AFBB0;
    if (this->unk1F8 != 0) {
        temp_v0 = this->timer;
        if (temp_v0 != 0) {
            this->timer = temp_v0 - 1;
        }
    }
    if (((u8) this->unk_1F8[4] == 0) && (Actor_HasParent(&this->actor, globalCtx) == 0) && ((this->actor.xzDistToPlayer >= 20.0f) || (fabsf(this->actor.yDistToPlayer) >= 80.0f))) {
        this->unk_1F8[4] = 1;
    }
    this->actionFunc(this, globalCtx);
    if (this->actor.params == 0) {
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    }
    if (this->actor.gravity != 0.0f) {
        gGameInfo->data[678] = 1;
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 5.0f, 10.0f, 0.0f, 0x1FU);
        gGameInfo->data[678] = 0;
    }
    if (this->actor.params == 0) {
        temp_f0 = this->actor.velocity.y;
        if ((temp_f0 > 0.0f) && ((this->actor.bgCheckFlags & 0x10) != 0)) {
            this->actor.velocity.y = -temp_f0;
        }
        if ((this->actor.speedXZ != 0.0f) && ((this->actor.bgCheckFlags & 8) != 0)) {
            temp_a0 = this->actor.wallYaw;
            temp_a1 = temp_a0 - this->actor.world.rot.y;
            phi_v1 = (s32) temp_a1;
            if ((s32) temp_a1 < 0) {
                phi_v1 = -(s32) temp_a1;
            }
            if (phi_v1 >= 0x4001) {
                this->actor.world.rot.y = (temp_a1 + temp_a0) - 0x8000;
            }
            Audio_PlayActorSound2(&this->actor, 0x282FU);
            Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
            gGameInfo->data[678] = 1;
            Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 5.0f, 10.0f, 0.0f, 0x1FU);
            gGameInfo->data[678] = 0;
            this->actor.bgCheckFlags &= 0xFFF7;
            this->actor.speedXZ *= 0.7f;
        }
        if ((((u8) this->unk_144[17] & 2) != 0) || ((((u8) this->unk_144[18] & 2) != 0) && (this->unk150->unk2 == 5))) {
            this->unk1F8 = 1;
            this->timer = 0;
        } else if (((s32) this->timer >= 0x65) && (func_80123F48(globalCtx, &this->actor.world, 0x41F00000, 0x42480000) != 0)) {
            this->timer = 0x64;
        }
        if (this->unk1F8 != 0) {
            temp_t3 = &this->actor.world;
            sp40 = temp_t3;
            sp60 = 0.2f;
            sp68.x = temp_t3->pos.x;
            sp68.y = temp_t3->pos.y;
            sp68.z = temp_t3->pos.z;
            sp6C += 25.0f;
            if ((s32) this->timer < 0x7F) {
                if ((globalCtx->gameplayFrames & 1) == 0) {
                    EffectSsGSpk_SpawnFuse(globalCtx, this, &sp68, &sp8C, &sp74);
                }
                Audio_PlayActorSound2(&this->actor, 0x100DU);
                sp6C += 3.0f;
                func_800B0DE0(globalCtx, &sp68, &sp8C, &sp5C, (Color_RGBA8 *) &sp58, (Color_RGBA8 *) &sp58, (s16) 0x32, (s16) 5);
            }
            phi_v0 = (s32) this->timer;
            if ((this->timer == 3) || (this->timer == 0x1E) || (this->timer == 0x32) || (this->timer == 0x46)) {
                this->unk1FE = (s16) ((s32) this->unk1FE >> 1);
                phi_v0 = (s32) this->timer;
            }
            if ((phi_v0 < 0x64) && (temp_v1 = this->unk1FE, ((phi_v0 & (temp_v1 + 1)) != 0))) {
                Math_SmoothStepToF((f32 *) &this->unk_1F8[8], 150.0f, 1.0f, 150.0f / (f32) temp_v1, 0.0f);
            } else {
                Math_SmoothStepToF((f32 *) &this->unk_1F8[8], 0.0f, 1.0f, 150.0f / (f32) this->unk1FE, 0.0f);
            }
            if ((s32) this->timer < 3) {
                Actor_SetScale(&this->actor, this->actor.scale.x + 0.002f);
            }
            if (this->timer == 0) {
                sp68.x = sp40->pos.x;
                sp68.y = sp40->pos.y;
                sp68.z = sp40->pos.z;
                sp68.y += 10.0f;
                if (Actor_HasParent(&this->actor, globalCtx) != 0) {
                    sp68.y += 30.0f;
                }
                Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xA2, sp68.x, sp68.y, sp68.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
                Audio_PlayActorSound2(&this->actor, 0x180EU);
                globalCtx->envCtx.unk_8C.diffuseColor1[2] = 0xFA;
                temp_v1_2 = globalCtx->envCtx.unk_8C.diffuseColor1[2];
                globalCtx->envCtx.unk_8C.ambientColor[2] = 0xFA;
                globalCtx->envCtx.unk_8C.diffuseColor1[1] = temp_v1_2;
                globalCtx->envCtx.unk_8C.diffuseColor1[0] = temp_v1_2;
                temp_v1_3 = globalCtx->envCtx.unk_8C.ambientColor[2];
                globalCtx->envCtx.unk_8C.ambientColor[1] = temp_v1_3;
                globalCtx->envCtx.unk_8C.ambientColor[0] = temp_v1_3;
                func_800DFD04(&globalCtx->mainCamera, 2, 0xB, 8);
                this->actor.params = 1;
                this->timer = 0xA;
                this->actor.flags |= 0x20;
                EnBombf_SetupAction(this, func_808AEFD4);
            }
        }
    }
    temp_t8 = &this->actor.world;
    sp40 = temp_t8;
    this->actor.focus.pos.x = temp_t8->pos.x;
    this->actor.focus.pos.y = temp_t8->pos.y;
    temp_a1_2 = this->unk_144;
    this->actor.focus.pos.z = temp_t8->pos.z;
    this->actor.focus.pos.y += 10.0f;
    if ((s32) this->actor.params <= 0) {
        sp3C = temp_a1_2;
        Collider_UpdateCylinder(&this->actor, (ColliderCylinder *) temp_a1_2);
        if ((this->unk204 >= 1.0f) && ((u8) this->unk_1F8[4] != 0)) {
            CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp3C);
        }
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp3C);
    }
    if ((this->actor.scale.x >= 0.01f) && (this->actor.params != 1)) {
        if (this->actor.yDistToWater >= 20.0f) {
            Audio_PlaySoundAtPosition(globalCtx, &sp40->pos, 0x1E, 0x180FU);
            Actor_MarkForDeath(&this->actor);
            return;
        }
        temp_v0_2 = this->actor.bgCheckFlags;
        if ((temp_v0_2 & 0x40) != 0) {
            this->actor.bgCheckFlags = temp_v0_2 & 0xFFBF;
            Audio_PlayActorSound2(&this->actor, 0x2817U);
        }
        // Duplicate return node #61. Try simplifying control flow for better match
    }
}

s32 *func_808AF86C(GraphicsContext *arg0, GlobalContext *arg1) {
    void *sp28;
    s32 *sp24;
    s32 *sp1C;
    s32 *temp_v1;

    temp_v1 = arg0->polyOpa.d - 0x30;
    arg0->polyOpa.d = temp_v1;
    arg0 = arg0;
    sp1C = temp_v1;
    SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
    sp28 = temp_v1 + 8;
    *temp_v1 = 0xDA380003;
    sp24 = temp_v1;
    sp1C = temp_v1;
    sp24->unk4 = Matrix_NewMtx(arg0);
    sp28->unk0 = 0xDF000000;
    sp28->unk4 = 0;
    return temp_v1;
}

void EnBombf_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnBombf *this = (EnBombf *) thisx;
    Gfx *sp44;
    Gfx *sp2C;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a2;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    s32 *temp_a0;

    temp_a2 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a2;
    if ((s32) this->actor.params <= 0) {
        this = this;
        func_8012C28C(temp_a2);
        if (this->actor.params != 0) {
            temp_v0 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0 + 8;
            temp_v0->words.w0 = 0xDA380003;
            sp44 = temp_v0;
            sp44->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_2 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w1 = (u32) &D_06000340;
            temp_v0_2->words.w0 = 0xDE000000;
            temp_v0_3 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = (u32) &D_06000530;
            temp_v0_3->words.w0 = 0xDE000000;
            SysMatrix_InsertTranslation(0.0f, 1000.0f, 0.0f, 1);
            temp_f12 = this->unk204;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        }
        temp_v0_4 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xFA000000;
        temp_v0_4->words.w1 = 0xC8FFC8FF;
        temp_v0_5 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = 0;
        temp_v0_5->words.w0 = 0xE7000000;
        temp_v0_6 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xFB000000;
        temp_v0_6->words.w1 = ((s32) this->unk200 << 0x18) | 0x140000 | 0xA00;
        temp_v0_7 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xDA380003;
        sp2C = temp_v0_7;
        sp2C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_a0 = func_808AF86C(globalCtx->state.gfxCtx, globalCtx);
        temp_v0_8 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_8 + 8;
        temp_v0_8->words.w0 = 0xDB060020;
        sp24 = temp_v0_8;
        sp24->words.w1 = Lib_SegmentedToVirtual((void *) temp_a0);
        temp_v0_9 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_9 + 8;
        temp_v0_9->words.w1 = (u32) &D_06000408;
        temp_v0_9->words.w0 = 0xDE000000;
        return;
    }
    Collider_UpdateSpheres(0, (ColliderJntSph *) &this->unk_144[76]);
}

