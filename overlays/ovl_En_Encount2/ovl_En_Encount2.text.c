struct _mips2c_stack_EnEncount2_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnEncount2_Die {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnEncount2_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnEncount2_DrawParticles {
    /* 0x00 */ char pad0[0x50];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EnEncount2_Idle {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnEncount2_Init {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ CollisionHeader *sp2C;               /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnEncount2_InitParticles {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnEncount2_Popped {
    /* 0x00 */ char pad0[0x40];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EnEncount2_SetIdle {};         /* size 0x0 */

struct _mips2c_stack_EnEncount2_Update {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ ColliderJntSph *sp20;                /* inferred */
    /* 0x24 */ CollisionCheckContext *sp24;         /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnEncount2_UpdateParticles {}; /* size 0x0 */

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

void EnEncount2_Init(EnEncount2 *this, GlobalContext *globalCtx) {
    CollisionHeader *sp2C;
    EnEncount2 *this = (EnEncount2 *) thisx;

    sp2C = NULL;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck_RelocateMeshHeader(&D_06002420, &sp2C);
    this->dyna.bgId = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp2C);
    ActorShape_Init(&this->dyna.actor.shape, 0.0f, func_800B3FC0, 25.0f);
    this->dyna.actor.colChkInfo.mass = 0xFF;
    Collider_InitAndSetJntSph(globalCtx, &this->collider, (Actor *) this, &D_808E1F14, &this->colElement);
    this->dyna.actor.targetMode = 6;
    this->dyna.actor.colChkInfo.health = 1;
    this->switchFlag = this->dyna.actor.params & 0x7F;
    this->scale = 0.1f;
    if (this->switchFlag == 0x7F) {
        this->switchFlag = -1;
    }
    if (((s32) this->switchFlag >= 0) && (Flags_GetSwitch(globalCtx, (s32) this->switchFlag) != 0)) {
        Actor_MarkForDeath((Actor *) this);
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

void EnEncount2_Destroy(EnEncount2 *this, GlobalContext *globalCtx) {
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;
    EnEncount2 *this = (EnEncount2 *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->dyna.bgId);
    Collider_DestroyJntSph(globalCtx, &this->collider);
}

void EnEncount2_SetIdle(EnEncount2 *this) {
    this->isPopped = 0;
    this->actionFunc = EnEncount2_Idle;
}

void EnEncount2_Idle(EnEncount2 *this, GlobalContext *globalCtx) {
    this->oscillationAngle += 1500.0f;
    this->dyna.actor.velocity.y = Math_SinS((s16) (s32) this->oscillationAngle);
    Math_ApproachF(&this->scale, 0.1f, 0.3f, 0.01f);
    if (((this->collider.base.acFlags & 2) != 0) && (this->dyna.actor.colChkInfo.damageEffect == 0xE)) {
        this->dyna.actor.colChkInfo.health = 0;
        this->isPopped = 1;
        this->actionFunc = EnEncount2_Popped;
    }
}

void EnEncount2_Popped(EnEncount2 *this, GlobalContext *globalCtx) {
    f32 sp44;
    f32 sp40;
    f32 temp_f0;
    s32 temp_s0;
    s32 phi_s0;

    Math_Vec3f_Copy((Vec3f *) &sp40, (Vec3f *) &this->dyna.actor.world);
    temp_f0 = sp44 + 60.0f;
    sp44 = temp_f0;
    Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xA2, sp40, temp_f0, sp48, (s16) 0xFF, (s16) 0xFF, (s16) 0xC8, (s16) 1);
    phi_s0 = 0;
    do {
        EnEncount2_InitParticles(this, (Vec3f *) &sp40, 0xA);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x64);
    Audio_PlayActorSound2((Actor *) this, 0x2949U);
    this->deathTimer = 0x1E;
    this->actionFunc = EnEncount2_Die;
}

void EnEncount2_Die(EnEncount2 *this, GlobalContext *globalCtx) {
    s16 temp_a1;

    if (this->deathTimer == 0) {
        temp_a1 = this->switchFlag;
        if ((s32) temp_a1 >= 0) {
            this = this;
            Actor_SetSwitchFlag(globalCtx, (s32) temp_a1);
        }
        Actor_MarkForDeath((Actor *) this);
    }
}

void EnEncount2_Update(EnEncount2 *this, GlobalContext *globalCtx) {
    CollisionCheckContext *sp24;
    ColliderJntSph *sp20;
    ColliderJntSph *temp_a0;
    CollisionCheckContext *temp_a1;
    s16 temp_v0;
    EnEncount2 *this = (EnEncount2 *) thisx;

    temp_v0 = this->deathTimer;
    if (temp_v0 != 0) {
        this->deathTimer = temp_v0 - 1;
    }
    this->dyna.actor.shape.rot.y = this->dyna.actor.world.rot.y;
    Actor_SetHeight((Actor *) this, 30.0f);
    Actor_SetScale((Actor *) this, this->scale);
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    EnEncount2_UpdateParticles(this, globalCtx);
    temp_a0 = &this->collider;
    if (this->isPopped == 0) {
        sp20 = temp_a0;
        Collider_UpdateSpheresElement(temp_a0, 0, (Actor *) this);
        temp_a1 = &globalCtx->colChkCtx;
        sp24 = temp_a1;
        CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) sp20);
        CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) sp20);
    }
}

void EnEncount2_Draw(EnEncount2 *this, GlobalContext *globalCtx) {
    EnEncount2 *this = (EnEncount2 *) thisx;
    if (this->isPopped != 1) {
        func_800BDFC0(globalCtx, &D_06000A00);
        func_800BDFC0(globalCtx, &D_06000D78);
    }
    EnEncount2_DrawParticles(this, globalCtx);
}

void EnEncount2_InitParticles(EnEncount2 *this, Vec3f *pos, s16 fadeDelay) {
    s16 temp_v0;
    EnEncount2Particle *phi_s0;
    s16 phi_v0;

    phi_s0 = this->particles;
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

    phi_v0 = this->particles;
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
    temp_s2 = this->particles;
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
