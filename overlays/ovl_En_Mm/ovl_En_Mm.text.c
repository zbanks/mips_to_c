typedef struct EnMm {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ s16 unk_190;                        /* inferred */
    /* 0x192 */ char pad_192[0x2];
    /* 0x194 */ void (*actionFunc)(EnMm *, GlobalContext *);
} EnMm;                                             /* size = 0x198 */

struct _mips2c_stack_EnMm_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnMm_Draw {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x2];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnMm_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnMm_SetupAction {};           /* size 0x0 */

struct _mips2c_stack_EnMm_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80965BBC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80965D3C {
    /* 0x00 */ char pad_0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80965DB4 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ ColliderCylinder *sp30;              /* inferred */
    /* 0x34 */ char pad_34[0xC];                    /* maybe part of sp30[4]? */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x2];
    /* 0x4E */ s16 sp4E;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x4];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_8096611C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

void func_80965BBC(EnMm *arg0);                     /* static */
static ColliderCylinderInit D_80966340 = {
    {9, 0, 0, 0x39, 0x20, 1},
    {2, {0x100000, 0, 0}, {0x1000202, 0, 0}, 0, 0, 1},
    {6, 0x1E, 0, {0, 0, 0}},
};
static InitChainEntry D_8096636C[5];                /* unable to generate initializer */

void EnMm_SetupAction(EnMm *this, void (*actionFunc)(EnMm *, GlobalContext *)) {
    this->actionFunc = actionFunc;
}

void func_80965BBC(EnMm *arg0) {
    EnMm_SetupAction(arg0, func_8096611C);
    arg0->actor.room = -1;
    if (arg0->actor.parent->id == 0) {
        gSaveContext.unk_1014 = 1;
    }
}

void EnMm_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    u8 temp_v0;
    void (*phi_a1)(EnMm *, GlobalContext *);
    EnMm *this = (EnMm *) thisx;

    if (((s32) this->actor.params >= 0) && ((temp_v0 = gSaveContext.weekEventReg[37], ((temp_v0 & 0x10) == 0)) || ((temp_v0 & 8) != 0) || (gSaveContext.unk_1014 != 0))) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    Actor_ProcessInitChain((Actor *) this, D_8096636C);
    ActorShape_Init(&this->actor.shape, 50.0f, func_800B3FC0, 1.2f);
    temp_a1 = &this->unk_144;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80966340);
    if (this->actor.parent != 0) {
        func_80965BBC(this);
        return;
    }
    phi_a1 = func_80965DB4;
    if ((s32) this->actor.cutscene >= 0) {
        phi_a1 = func_80965D3C;
    }
    EnMm_SetupAction(this, phi_a1);
}

void EnMm_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnMm *this = (EnMm *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_144);
}

void func_80965D3C(EnMm *this, GlobalContext *globalCtx) {
    s16 sp1E;
    s16 temp_a0;
    s16 temp_v0;

    temp_v0 = ActorCutscene_GetAdditionalCutscene((s16) this->actor.cutscene);
    temp_a0 = temp_v0;
    sp1E = temp_v0;
    if (ActorCutscene_GetCanPlayNext(temp_a0) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields(sp1E, (Actor *) this);
        EnMm_SetupAction(this, func_80965DB4);
        return;
    }
    ActorCutscene_SetIntentToPlay(sp1E);
}

void func_80965DB4(EnMm *this, GlobalContext *globalCtx) {
    f32 sp50;
    s16 sp4E;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f2;
    f32 temp_f6;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    u16 temp_v0_3;
    s32 phi_v0;
    s16 phi_a1;

    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        func_80965BBC(this);
        Audio_PlayActorSound2((Actor *) this, 0x86AU);
    } else {
        if ((this->actor.velocity.y > 0.0f) && ((this->actor.bgCheckFlags & 0x10) != 0)) {
            this->actor.velocity.y = 0.0f;
        }
        temp_f0 = this->actor.speedXZ;
        if ((temp_f0 != 0.0f) && ((this->actor.bgCheckFlags & 8) != 0)) {
            temp_v0 = this->actor.world.rot.y;
            this->actor.world.rot.y = temp_v0 + (0x8000 - ((s16) (temp_v0 - (this->actor.wallYaw + 0x8000)) * 2));
            this->actor.speedXZ = temp_f0 * 0.5f;
            CollisionCheck_SpawnShieldParticles(globalCtx, (Vec3f *) &this->actor.world);
            Audio_PlayActorSound2((Actor *) this, 0x2896U);
        }
        if ((this->actor.bgCheckFlags & 1) == 0) {
            Math_StepToF(&this->actor.speedXZ, 0.0f, 0.08f);
        } else {
            temp_f14 = Math_SinS(this->actor.world.rot.y) * this->actor.speedXZ;
            sp48 = temp_f14;
            temp_f12 = Math_CosS(this->actor.world.rot.y) * this->actor.speedXZ;
            sp44 = temp_f12;
            func_800B75A0(this->actor.floorPoly, (Vec3f *) &sp50, &sp4E);
            temp_f6 = 3.0f * sp50;
            temp_f10 = 3.0f * sp58;
            temp_f14_2 = temp_f14 + temp_f6;
            temp_f12_2 = temp_f12 + temp_f10;
            temp_f2 = sqrtf((temp_f14_2 * temp_f14_2) + (temp_f12_2 * temp_f12_2));
            if ((temp_f2 < this->actor.speedXZ) || (sp48 = temp_f14_2, sp44 = temp_f12_2, sp40 = temp_f2, (func_800C9C74(&globalCtx->colCtx, this->actor.floorPoly, (s32) this->actor.floorBgId) == 1))) {
                if (temp_f2 > 16.0f) {
                    this->actor.speedXZ = 16.0f;
                } else {
                    this->actor.speedXZ = temp_f2;
                }
                this->actor.world.rot.y = Math_FAtan2F(temp_f12 + temp_f10, temp_f14 + temp_f6);
            }
            if (Math_StepToF(&this->actor.speedXZ, 0.0f, 1.0f) == 0) {
                temp_v0_2 = this->actor.world.rot.y;
                temp_v1 = temp_v0_2 - this->actor.shape.rot.y;
                phi_a1 = temp_v0_2;
                if ((s32) temp_v1 < 0) {
                    phi_v0 = -(s32) temp_v1;
                } else {
                    phi_v0 = (s32) temp_v1;
                }
                if (phi_v0 >= 0x4001) {
                    phi_a1 = (s16) (temp_v0_2 + 0x8000);
                }
                Math_ScaledStepToS(&this->actor.shape.rot.y, phi_a1, (s16) (s32) (this->actor.speedXZ * 100.0f));
                this->unk_190 += (s32) (this->actor.speedXZ * 800.0f);
            }
            temp_v0_3 = this->actor.bgCheckFlags;
            if ((temp_v0_3 & 2) != 0) {
                temp_f0_2 = this->actor.velocity.y;
                if (temp_f0_2 < -6.0f) {
                    this->actor.bgCheckFlags = temp_v0_3 & 0xFFFE;
                    this->actor.velocity.y = temp_f0_2 * -0.3f;
                }
                Audio_PlayActorSound2((Actor *) this, 0x2896U);
            } else {
                func_800B8A1C((Actor *) this, globalCtx, 0, 50.0f, 30.0f);
            }
        }
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    }
    temp_a2 = &this->unk_144;
    sp30 = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
}

void func_8096611C(EnMm *this, GlobalContext *globalCtx) {
    if (Actor_HasNoParent((Actor *) this, globalCtx) != 0) {
        EnMm_SetupAction(this, func_80965DB4);
        this->actor.bgCheckFlags &= 0xFFFE;
        this->actor.room = globalCtx->roomCtx.currRoom.num;
        Math_Vec3s_ToVec3f(&this->actor.prevPos, &this->actor.home.rot);
        gSaveContext.unk_1014 = 0;
    } else {
        Math_Vec3f_ToVec3s(&this->actor.home.rot, (Vec3f *) &this->actor.parent->world);
    }
    Math_ScaledStepToS(&this->unk_190, 0, 0x7D0);
}

void EnMm_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnMm *this = (EnMm *) thisx;
    Collider_ResetCylinderAC(globalCtx, (Collider *) &this->unk_144);
    this->actionFunc(this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 10.0f, 20.0f, 0x1FU);
    Actor_SetHeight((Actor *) this, 20.0f);
}

void EnMm_Draw(Actor *thisx, GlobalContext *globalCtx) {
    s16 sp2A;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s16 temp_a0_2;
    EnMm *this = (EnMm *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    if (this->unk_190 != 0) {
        temp_a0_2 = this->actor.world.rot.y - this->actor.shape.rot.y;
        sp2A = temp_a0_2;
        Matrix_RotateY(temp_a0_2, 1U);
        SysMatrix_InsertXRotation_s(this->unk_190, 1);
        Matrix_RotateY((s16) ((s32) temp_a0_2 * -1), 1U);
    }
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_v0;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = (u32) &D_04055628;
    temp_v0_2->words.w0 = 0xDE000000;
}
