typedef struct EnBombf {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ ColliderJntSph unk_190;             /* inferred */
    /* 0x1B0 */ ColliderJntSphElement unk_1B0;      /* inferred */
    /* 0x1F0 */ s16 timer;
    /* 0x1F2 */ char pad_1F2[0x2];
    /* 0x1F4 */ void (*actionFunc)(EnBombf *, GlobalContext *);
    /* 0x1F8 */ s32 unk_1F8;                        /* inferred */
    /* 0x1FC */ u8 unk_1FC;                         /* inferred */
    /* 0x1FD */ char pad_1FD[0x1];
    /* 0x1FE */ s16 unk_1FE;                        /* inferred */
    /* 0x200 */ f32 unk_200;                        /* inferred */
    /* 0x204 */ f32 unk_204;                        /* inferred */
} EnBombf;                                          /* size = 0x208 */

struct _mips2c_stack_EnBombf_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnBombf_Draw {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
    /* 0x30 */ char pad_30[0x14];                   /* maybe part of sp2C[6]? */
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad_48[0x10];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnBombf_Init {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ ColliderJntSph *sp30;                /* inferred */
    /* 0x34 */ char pad_34[0x8];                    /* maybe part of sp30[3]? */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnBombf_SetupAction {};        /* size 0x0 */

struct _mips2c_stack_EnBombf_Update {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ ColliderCylinder *sp3C;              /* inferred */
    /* 0x40 */ PosRot *sp40;                        /* inferred */
    /* 0x44 */ char pad_44[0x14];                   /* maybe part of sp40[6]? */
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad_5C[0x4];
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ ? sp74;                              /* inferred */
    /* 0x74 */ char pad_74[0xC];
    /* 0x80 */ ? sp80;                              /* inferred */
    /* 0x80 */ char pad_80[0xC];
    /* 0x8C */ ? sp8C;                              /* inferred */
    /* 0x8C */ char pad_8C[0xC];
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_808AEAB8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808AEAE0 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ PosRot *sp38;                        /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ Actor *sp40;                         /* inferred */
    /* 0x44 */ char pad_44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_808AEE3C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808AEF68 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808AEFD4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808AF86C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ s32 *sp24;                           /* inferred */
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

? EffectSsGSpk_SpawnFuse(GlobalContext *, EnBombf *, f32 *, ? *, ? *); /* extern */
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
    this->actionFunc = actionFunc;
}

void EnBombf_Init(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp3C;
    ColliderJntSph *sp30;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a1;
    ColliderJntSph *temp_a1_2;
    EnBombf *this = (EnBombf *) thisx;

    sp3C = 0.0f;
    Actor_SetScale((Actor *) this, 0.01f);
    this->unk_1F8 = 1;
    temp_a1 = &this->unk_144;
    sp2C = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    temp_a1_2 = &this->unk_190;
    sp30 = temp_a1_2;
    Collider_InitJntSph(globalCtx, temp_a1_2);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_808AFB20);
    Collider_SetJntSph(globalCtx, temp_a1_2, (Actor *) this, &D_808AFB70, &this->unk_1B0);
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
        this->unk_1FE = 0xF;
        this->actor.gravity = -1.5f;
        func_800BC154(globalCtx, &globalCtx->actorCtx, (Actor *) this, 3U);
        this->actor.colChkInfo.mass = 0xC8;
        this->actor.flags &= -2;
        EnBombf_SetupAction(this, func_808AEE3C);
    } else {
        this->actor.colChkInfo.mass = 0xFF;
        this->unk_1FC = 1;
        this->unk_204 = 1.0f;
        func_808AEAB8(this, this->actor.params);
    }
    this->actor.uncullZoneScale += 31000.0f;
    this->actor.uncullZoneForward += 31000.0f;
}

void EnBombf_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBombf *this = (EnBombf *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_144);
    Collider_DestroyJntSph(globalCtx, &this->unk_190);
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
    u32 temp_v0_2;
    u8 temp_a0;

    temp_f0 = this->unk_204;
    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if (temp_f0 >= 1.0f) {
        sp40 = temp_v1;
        if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
            sp40 = temp_v1;
            temp_v0 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x2F, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
            if (temp_v0 != 0) {
                func_800B8C20(this, temp_v0, globalCtx);
                this->timer = 0xB4;
                this->unk_204 = 0.0f;
                Audio_PlayActorSound2((Actor *) this, 0x86AU);
                this->actor.flags &= -2;
                return;
            }
            temp_v1->child = NULL;
            temp_v1->unk_34C = 0;
            temp_v1->unk_388 = 0;
            this->actor.parent = NULL;
            temp_v1->unk_A6C = (s32) (temp_v1->unk_A6C & ~0x800);
            return;
        }
        temp_a0 = this->unk_144.base.acFlags;
        temp_a1 = &this->actor.world;
        if (((temp_a0 & 2) != 0) && ((temp_v0_2 = this->unk_144.info.acHitInfo->toucher.dmgFlags, ((temp_v0_2 & 0x13828) != 0)) || (((temp_v0_2 & 0x200) != 0) && (temp_v1->unk_14B == 1) && (temp_v1->speedXZ > 15.0f)))) {
            this->unk_144.base.acFlags = temp_a0 & 0xFFFD;
            if ((this->unk_144.base.ac->category != 9) && (temp_v0_3 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x2F, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0), (temp_v0_3 != 0))) {
                temp_v0_3->unk_1F8 = 1;
                temp_v0_3->unk_1F0 = 0;
                this->timer = 0xB4;
                this->actor.flags &= -2;
                this->unk_204 = 0.0f;
                return;
            }
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return;
        }
        sp40 = temp_v1;
        sp38 = temp_a1;
        if (func_80123F48(globalCtx, temp_a1, 0x41F00000, 0x42480000) != 0) {
            temp_v0_4 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x2F, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
            if (temp_v0_4 != 0) {
                temp_v0_4->unk_1F0 = 0x64;
                this->timer = 0xB4;
                this->actor.flags &= -2;
                this->unk_204 = 0.0f;
                return;
            }
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return;
        }
        sp40 = temp_v1;
        if (Actor_HasParent((Actor *) this, globalCtx) == 0) {
            func_800B8BB0((Actor *) this, globalCtx);
            return;
        }
        temp_v1->child = NULL;
        temp_v1->unk_34C = 0;
        temp_v1->unk_388 = 0;
        this->actor.parent = NULL;
        temp_v1->unk_A6C = (s32) (temp_v1->unk_A6C & ~0x800);
        sp38->pos.x = this->actor.home.pos.x;
        sp38->pos.y = this->actor.home.pos.y;
        sp38->pos.z = this->actor.home.pos.z;
        return;
    }
    if (this->timer == 0) {
        this->unk_204 = temp_f0 + 0.05f;
        if (this->unk_204 >= 1.0f) {
            this->actor.flags |= 1;
        }
    }
    sp40 = temp_v1;
    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        temp_v1->child = NULL;
        temp_v1->unk_34C = 0;
        temp_v1->unk_388 = 0;
        this->actor.parent = NULL;
        temp_v1->unk_A6C = (s32) (temp_v1->unk_A6C & ~0x800);
        this->actor.world.pos.x = this->actor.home.pos.x;
        this->actor.world.pos.y = this->actor.home.pos.y;
        this->actor.world.pos.z = this->actor.home.pos.z;
    }
}

void func_808AEE3C(EnBombf *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        this->unk_204 = 0.0f;
        EnBombf_SetupAction(this, func_808AEF68);
        this->actor.room = -1;
        return;
    }
    this->unk_204 = 1.0f;
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
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return;
    }
    if ((s32) this->timer >= 4) {
        func_800B8BB0((Actor *) this, globalCtx);
    }
}

void func_808AEF68(EnBombf *this, GlobalContext *globalCtx) {
    EnBombf *temp_a0;

    temp_a0 = this;
    if (Actor_HasNoParent((Actor *) this, globalCtx) != 0) {
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

    if (this->unk_190.elements->dim.modelSphere.radius == 0) {
        this->actor.flags |= 0x20;
        func_8013ECE0(this->actor.xzDistToPlayer, 0xFFU, 0x14U, 0x96U);
    }
    this->unk_190.elements->dim.modelSphere.radius = 0x64;
    this->unk_190.elements->dim.worldSphere.radius = 0x64;
    if (this->actor.params == 1) {
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_190);
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
        temp_v1_7 = temp_v0->unk_A6C;
        if (((temp_v1_7 & 0x800) != 0) && (this == temp_v0->unk_34C)) {
            temp_v0->child = NULL;
            temp_v0->unk_34C = 0;
            temp_v0->unk_388 = 0;
            temp_v0->unk_A6C = (s32) (temp_v1_7 & ~0x800);
        }
        Actor_MarkForDeath((Actor *) this);
    }
}

void EnBombf_Update(Actor *thisx, GlobalContext *globalCtx) {
    ? sp8C;
    ? sp80;
    ? sp74;
    f32 sp6C;
    f32 sp68;
    f32 sp60;
    ? sp5C;
    s32 sp58;
    PosRot *sp40;
    ColliderCylinder *sp3C;
    ColliderCylinder *temp_a1_2;
    PosRot *temp_t3;
    PosRot *temp_t8;
    f32 temp_f0;
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    u16 temp_v0_2;
    s32 phi_v1;
    s32 phi_v0;
    EnBombf *this = (EnBombf *) thisx;

    sp8C.unk_0 = (s32) D_808AFB80.unk_0;
    sp8C.unk_4 = (s32) D_808AFB80.unk_4;
    sp8C.unk_8 = (s32) D_808AFB80.unk_8;
    sp80.unk_0 = (s32) D_808AFB8C.unk_0;
    sp80.unk_4 = (s32) D_808AFB8C.unk_4;
    sp80.unk_8 = (s32) D_808AFB8C.unk_8;
    sp74.unk_0 = (s32) D_808AFB98.unk_0;
    sp74.unk_4 = (s32) D_808AFB98.unk_4;
    sp74.unk_8 = (s32) D_808AFB98.unk_8;
    sp5C.unk_0 = (s32) D_808AFBA4.unk_0;
    sp5C.unk_4 = (s32) D_808AFBA4.unk_4;
    sp5C.unk_8 = (s32) D_808AFBA4.unk_8;
    sp58 = D_808AFBB0;
    if (this->unk_1F8 != 0) {
        temp_v0 = this->timer;
        if (temp_v0 != 0) {
            this->timer = temp_v0 - 1;
        }
    }
    if ((this->unk_1FC == 0) && (Actor_HasParent((Actor *) this, globalCtx) == 0) && ((this->actor.xzDistToPlayer >= 20.0f) || (fabsf(this->actor.yDistToPlayer) >= 80.0f))) {
        this->unk_1FC = 1;
    }
    this->actionFunc(this, globalCtx);
    if (this->actor.params == 0) {
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    }
    if (this->actor.gravity != 0.0f) {
        gGameInfo->data[678] = 1;
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 5.0f, 10.0f, 0.0f, 0x1FU);
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
            Audio_PlayActorSound2((Actor *) this, 0x282FU);
            Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
            gGameInfo->data[678] = 1;
            Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 5.0f, 10.0f, 0.0f, 0x1FU);
            gGameInfo->data[678] = 0;
            this->actor.bgCheckFlags &= 0xFFF7;
            this->actor.speedXZ *= 0.7f;
        }
        if (((this->unk_144.base.acFlags & 2) != 0) || (((this->unk_144.base.ocFlags1 & 2) != 0) && (this->unk_144.base.oc->category == 5))) {
            this->unk_1F8 = 1;
            this->timer = 0;
        } else if (((s32) this->timer >= 0x65) && (func_80123F48(globalCtx, &this->actor.world, 0x41F00000, 0x42480000) != 0)) {
            this->timer = 0x64;
        }
        if (this->unk_1F8 != 0) {
            temp_t3 = &this->actor.world;
            sp40 = temp_t3;
            sp60 = 0.2f;
            sp68.unk_0 = temp_t3->pos.x;
            sp68.unk_4 = (f32) temp_t3->pos.y;
            sp68.unk_8 = (f32) temp_t3->pos.z;
            sp6C += 25.0f;
            if ((s32) this->timer < 0x7F) {
                if ((globalCtx->gameplayFrames & 1) == 0) {
                    EffectSsGSpk_SpawnFuse(globalCtx, this, &sp68, &sp8C, &sp74);
                }
                Audio_PlayActorSound2((Actor *) this, 0x100DU);
                sp6C += 3.0f;
                func_800B0DE0(globalCtx, (Vec3f *) &sp68, (Vec3f *) &sp8C, (Vec3f *) &sp5C, (Color_RGBA8 *) &sp58, (Color_RGBA8 *) &sp58, (s16) 0x32, (s16) 5);
            }
            phi_v0 = (s32) this->timer;
            if ((this->timer == 3) || (this->timer == 0x1E) || (this->timer == 0x32) || (this->timer == 0x46)) {
                this->unk_1FE = (s16) ((s32) this->unk_1FE >> 1);
                phi_v0 = (s32) this->timer;
            }
            if ((phi_v0 < 0x64) && (temp_v1 = this->unk_1FE, ((phi_v0 & (temp_v1 + 1)) != 0))) {
                Math_SmoothStepToF(&this->unk_200, 150.0f, 1.0f, 150.0f / (f32) temp_v1, 0.0f);
            } else {
                Math_SmoothStepToF(&this->unk_200, 0.0f, 1.0f, 150.0f / (f32) this->unk_1FE, 0.0f);
            }
            if ((s32) this->timer < 3) {
                Actor_SetScale((Actor *) this, this->actor.scale.x + 0.002f);
            }
            if (this->timer == 0) {
                sp68.unk_0 = sp40->pos.x;
                sp68.unk_4 = (f32) sp40->pos.y;
                sp68.unk_8 = (f32) sp40->pos.z;
                sp6C += 10.0f;
                if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
                    sp6C += 30.0f;
                }
                Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xA2, sp68, sp6C, sp70, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
                Audio_PlayActorSound2((Actor *) this, 0x180EU);
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
    temp_a1_2 = &this->unk_144;
    this->actor.focus.pos.z = temp_t8->pos.z;
    this->actor.focus.pos.y += 10.0f;
    if ((s32) this->actor.params <= 0) {
        sp3C = temp_a1_2;
        Collider_UpdateCylinder((Actor *) this, temp_a1_2);
        if ((this->unk_204 >= 1.0f) && (this->unk_1FC != 0)) {
            CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp3C);
        }
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp3C);
    }
    if ((this->actor.scale.x >= 0.01f) && (this->actor.params != 1)) {
        if (this->actor.yDistToWater >= 20.0f) {
            Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) sp40, 0x1E, 0x180FU);
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        temp_v0_2 = this->actor.bgCheckFlags;
        if ((temp_v0_2 & 0x40) != 0) {
            this->actor.bgCheckFlags = temp_v0_2 & 0xFFBF;
            Audio_PlayActorSound2((Actor *) this, 0x2817U);
        }
        /* Duplicate return node #61. Try simplifying control flow for better match */
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
    sp24->unk_4 = Matrix_NewMtx(arg0);
    sp28->unk_0 = 0xDF000000;
    sp28->unk_4 = 0;
    return temp_v1;
}

void EnBombf_Draw(Actor *thisx, GlobalContext *globalCtx) {
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
    EnBombf *this = (EnBombf *) thisx;

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
            temp_f12 = this->unk_204;
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
        temp_v0_6->words.w1 = ((s32) this->unk_200 << 0x18) | 0x140000 | 0xA00;
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
    Collider_UpdateSpheres(0, &this->unk_190);
}
