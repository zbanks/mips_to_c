typedef struct BgIkanaDharma {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ ColliderCylinder unk_15C;           /* inferred */
    /* 0x1A8 */ void (*actionFunc)(BgIkanaDharma *, GlobalContext *);
    /* 0x1AC */ char pad_1AC[0x4];
} BgIkanaDharma;                                    /* size = 0x1B0 */

struct _mips2c_stack_BgIkanaDharma_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgIkanaDharma_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgIkanaDharma_Init {
    /* 0x00 */ char pad_0[0x68];
};                                                  /* size = 0x68 */

struct _mips2c_stack_BgIkanaDharma_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x2];
    /* 0x2E */ s16 sp2E;                            /* inferred */
    /* 0x30 */ char pad_30[0x10];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BEC240 {
    /* 0x00 */ char pad_0[0x7C];
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ char pad_80[0x8];                    /* maybe part of sp7C[3]? */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ char pad_AC[0x4];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_80BEC5C4 {};              /* size 0x0 */

struct _mips2c_stack_func_80BEC5E0 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s16 *sp18;                           /* inferred */
    /* 0x1C */ char pad_1C[0xC];                    /* maybe part of sp18[4]? */
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BEC758 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BEC790 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BEC7EC {};              /* size 0x0 */

struct _mips2c_stack_func_80BEC808 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_80BEC240(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEC5C4(BgIkanaDharma *arg0);            /* static */
void func_80BEC5E0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEC758(Actor *arg0);                    /* static */
void func_80BEC790(Actor *arg0, ? arg1);            /* static */
void func_80BEC7EC(Actor *arg0);                    /* static */
void func_80BEC808(Actor *arg0, GlobalContext *arg1); /* static */
extern Gfx D_060008C8;
extern CollisionHeader D_06000C50;
static ColliderCylinderInit D_80BECAD0 = {
    {0xA, 0, 9, 0, 0, 1},
    {0, {0, 0, 0}, {0x100, 0, 0}, 0, 1, 0},
    {0x62, 0xA, 0x19, {0, 0, 0}},
};
static InitChainEntry D_80BECAFC[5];                /* unable to generate initializer */
static Actor *D_80BECBD0;

void func_80BEC240(Actor *arg0, GlobalContext *arg1) {
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp7C;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 *temp_s6;
    f32 temp_f0;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f4;
    s16 temp_s0;
    s32 temp_s2;
    s32 phi_s2;

    temp_f26 = arg0->scale.x * 200.0f;
    temp_s6 = &sp88;
    temp_s5 = &sp94;
    sp7C = arg0->scale.y * 50.0f;
    temp_s4 = &spA0;
    phi_s2 = 0;
    do {
        temp_f20 = (Rand_ZeroOne() * 5.0f) + 5.0f;
        temp_s0 = (Rand_Next() >> 0x12) + arg0->world.rot.y + 0x6000;
        temp_f22 = Math_SinS(temp_s0);
        temp_f0 = Math_CosS(temp_s0);
        temp_f24 = temp_f0;
        temp_f4 = temp_f0 * temp_f26;
        spA0 = (temp_f22 * temp_f26) + arg0->world.pos.x;
        spA4 = arg0->world.pos.y + sp7C;
        sp94 = temp_f20 * temp_f22;
        spA8 = temp_f4 + arg0->world.pos.z;
        temp_f2 = temp_f20 * temp_f24;
        temp_f18 = Rand_ZeroOne() + 0.5f;
        sp9C = temp_f2;
        sp98 = temp_f18;
        sp88 = sp94 * -0.05f;
        sp90 = temp_f2 * -0.05f;
        sp8C = -0.15f;
        EffectSsKiraKira_SpawnSmallYellow(arg1, (Vec3f *) temp_s4, (Vec3f *) temp_s5, (Vec3f *) temp_s6);
        temp_s2 = phi_s2 + 1;
        phi_s2 = temp_s2;
    } while (temp_s2 != 4);
}

void BgIkanaDharma_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *temp_s1;
    f32 temp_f20;
    s16 temp_v0;
    s32 temp_s1_2;
    s32 temp_s3;
    f32 phi_f20;
    s32 phi_s1;
    BgIkanaDharma *this = (BgIkanaDharma *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80BECAFC);
    this->actor.scale.x = 0.3f;
    this->actor.scale.z = 0.3f;
    this->actor.scale.y = 0.1f;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06000C50);
    temp_s1 = &this->unk_15C;
    Collider_InitCylinder(globalCtx, temp_s1);
    Collider_SetCylinder(globalCtx, temp_s1, (Actor *) this, &D_80BECAD0);
    temp_v0 = this->actor.params;
    temp_s3 = temp_v0 & 0xF;
    phi_s1 = 0;
    if ((((s32) temp_v0 >> 5) & 1) == 0) {
        phi_f20 = this->actor.world.pos.y;
        if (temp_s3 > 0) {
            do {
                temp_f20 = phi_f20 + 60.0f;
                Actor_SpawnAsChildAndCutscene(&globalCtx->actorCtx, globalCtx, 0x273, this->actor.world.pos.x, temp_f20, this->actor.world.pos.z, (s16) (s32) this->actor.shape.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) (s32) this->actor.shape.rot.z, 0x20, (u32) this->actor.cutscene, (s32) this->actor.unk20, NULL);
                temp_s1_2 = phi_s1 + 1;
                phi_f20 = temp_f20;
                phi_s1 = temp_s1_2;
            } while (temp_s1_2 != temp_s3);
        }
        this->actor.bgCheckFlags |= 1;
    }
    func_80BEC5C4(this);
}

void BgIkanaDharma_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;
    BgIkanaDharma *this = (BgIkanaDharma *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk_144);
    Collider_DestroyCylinder(globalCtx, &this->unk_15C);
    if (this == D_80BECBD0) {
        D_80BECBD0 = NULL;
    }
}

void func_80BEC5C4(BgIkanaDharma *arg0) {
    arg0->actionFunc = func_80BEC5E0;
    arg0->actor.speedXZ = 0.0f;
}

void func_80BEC5E0(Actor *arg0, GlobalContext *arg1) {
    void *sp28;
    s16 *sp18;
    s16 *temp_a3_2;
    s16 temp_a1;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_v0;
    u8 temp_v1;
    void *temp_a3;
    s32 phi_v0;

    temp_v1 = arg0->unk_16D;
    temp_v0 = (temp_v1 & 2) != 0;
    temp_a3 = arg1->actorCtx.actorList[2].first;
    if (temp_v0 != 0) {
        arg0->unk_16D = (u8) (temp_v1 & 0xFFFD);
    }
    if ((temp_v0 != 0) && (D_80BECBD0 == 0)) {
        D_80BECBD0 = arg0;
        temp_a1 = arg0->params;
        sp28 = temp_a3;
        arg0 = arg0;
        Actor_SetSwitchFlag(arg1, ((s32) temp_a1 >> 8) & 0x7F);
        temp_v0_2 = arg0->yawTowardsPlayer + 0x8000;
        arg0->world.rot.y = temp_v0_2 + ((s32) (s16) (temp_a3->shape.rot.y - temp_v0_2) >> 1) + 0xF000;
        arg0->speedXZ = 20.0f;
        Audio_PlayActorSound2(arg0, 0x29BDU);
        func_80BEC758(arg0);
        return;
    }
    if (((arg0->flags & 0x40) == 0x40) && (D_80BECBD0 == 0) && (arg0->xzDistToPlayer < 420.0f)) {
        temp_a3_2 = &arg0[1].home.rot.z;
        temp_v0_3 = arg0->yawTowardsPlayer - temp_a3->shape.rot.y;
        phi_v0 = (s32) temp_v0_3;
        if ((s32) temp_v0_3 < 0) {
            phi_v0 = -(s32) temp_v0_3;
        }
        if (phi_v0 >= 0x4001) {
            sp18 = temp_a3_2;
            Collider_UpdateCylinder(arg0, (ColliderCylinder *) temp_a3_2);
            CollisionCheck_SetAC(arg1, &arg1->colChkCtx, (Collider *) sp18);
        }
    }
}

void func_80BEC758(Actor *arg0) {
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
    arg0[1].velocity.x = func_80BEC790;
}

void func_80BEC790(Actor *arg0, ? arg1) {
    Actor *temp_a1;
    s8 temp_a0;
    s8 temp_a0_2;

    temp_a0 = arg0->cutscene;
    arg0 = arg0;
    temp_a1 = arg0;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        temp_a0_2 = temp_a1->cutscene;
        arg0 = temp_a1;
        ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a0_2, temp_a1);
        func_80BEC7EC(arg0);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a1->cutscene);
}

void func_80BEC7EC(Actor *arg0) {
    arg0->unk_1AC = 0xA;
    arg0[1].velocity.x = func_80BEC808;
}

void func_80BEC808(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    s8 temp_a0;
    s8 temp_v0;

    temp_v0 = arg0->unk_1AC;
    if ((s32) temp_v0 > 0) {
        arg0->unk_1AC = (s8) (temp_v0 - 1);
        if (arg0->unk_1AC == 0) {
            if (arg0 == D_80BECBD0) {
                D_80BECBD0 = NULL;
            }
            temp_a0 = arg0->cutscene;
            arg0 = arg0;
            ActorCutscene_Stop((s16) temp_a0);
        }
    }
    arg0 = arg0;
    if (Math_StepToF(arg0 + 0x5C, 0.0f, 0.0033333334f) != 0) {
        Actor_MarkForDeath(arg0);
        return;
    }
    temp_f0 = arg0->scale.y * 3.0f;
    arg0->scale.x = temp_f0;
    arg0->scale.z = temp_f0;
    func_80BEC240(arg0, arg1);
}

void BgIkanaDharma_Update(Actor *thisx, GlobalContext *globalCtx) {
    s16 sp2E;
    f32 sp28;
    DynaPolyActor *temp_v0;
    f32 temp_f0;
    s16 temp_v0_2;
    s32 temp_a0;
    f32 phi_f0;
    BgIkanaDharma *this = (BgIkanaDharma *) thisx;

    this->actionFunc(this, globalCtx);
    if (func_80BEC5E0 == this->actionFunc) {
        func_800B4AEC(globalCtx, (Actor *) this, 30.0f);
        temp_v0 = BgCheck_GetActorOfMesh(&globalCtx->colCtx, (s32) this->actor.floorBgId);
        if (temp_v0 == 0) {
            Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
            Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
            if ((this->actor.bgCheckFlags & 2) != 0) {
                temp_v0_2 = Quake_Add(globalCtx->cameraPtrs[globalCtx->activeCamera], 3U);
                temp_a0 = temp_v0_2 << 0x10;
                sp2E = temp_v0_2;
                Quake_SetSpeed((s16) (temp_a0 >> 0x10), 0x5420);
                Quake_SetQuakeValues(sp2E, 4, 0, 0, (s16) 0);
                Quake_SetCountdown(sp2E, 0xC);
                Audio_PlayActorSound2((Actor *) this, 0x2835U);
            }
        } else {
            if (temp_v0->actor.id == 0x273) {
                this->actor.world.pos.y = temp_v0->actor.world.pos.y + 60.0f;
            } else {
                this->actor.world.pos.y = this->actor.floorHeight;
            }
            this->actor.velocity.y = 0.0f;
        }
    } else {
        temp_f0 = this->actor.scale.x * 300.0f;
        phi_f0 = temp_f0;
        if (temp_f0 < 2.0f) {
            phi_f0 = 2.0f;
        }
        sp28 = phi_f0;
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, phi_f0, 0.0f, 5U);
    }
    Actor_SetHeight((Actor *) this, 40.0f);
}

void BgIkanaDharma_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgIkanaDharma *this = (BgIkanaDharma *) thisx;
    func_800BDFC0(globalCtx, &D_060008C8);
}
