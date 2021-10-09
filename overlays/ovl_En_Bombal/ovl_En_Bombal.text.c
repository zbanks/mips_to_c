typedef struct EnBombal {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(EnBombal *, GlobalContext *);
    /* 0x0148 */ s16 unk_148;                       /* inferred */
    /* 0x014A */ s16 unk_14A;                       /* inferred */
    /* 0x014C */ s16 unk_14C;                       /* inferred */
    /* 0x014E */ char pad_14E[0x2];
    /* 0x0150 */ f32 unk_150;                       /* inferred */
    /* 0x0154 */ f32 unk_154;                       /* inferred */
    /* 0x0158 */ ColliderCylinder unk_158;          /* inferred */
    /* 0x01A4 */ char pad_1A4[0x28A0];              /* maybe part of unk_158[137]? */
} EnBombal;                                         /* size = 0x2A44 */

struct _mips2c_stack_EnBombal_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnBombal_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnBombal_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnBombal_Update {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C05B24 {};              /* size 0x0 */

struct _mips2c_stack_func_80C05B3C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C05C44 {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x8];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80C05DE8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C05F90 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C060B8 {};              /* size 0x0 */

struct _mips2c_stack_func_80C06208 {
    /* 0x00 */ char pad_0[0x50];
};                                                  /* size = 0x50 */

void func_80C05B24(EnBombal *arg0);                 /* static */
void func_80C05F90(EnBombal *arg0, f32 *arg1, s16 arg2); /* static */
void func_80C060B8(EnBombal *arg0, GlobalContext *arg1); /* static */
void func_80C06208(EnBombal *arg0, GlobalContext *arg1); /* static */
extern Gfx D_06000A00;
extern Gfx D_06000D78;
static ColliderCylinderInit D_80C06460 = {
    {0xA, 0, 9, 0, 0x20, 1},
    {0, {0, 0, 0}, {0x4138B0, 0, 0}, 0, 1, 0},
    {0x3C, 0x5A, 0xFFCE, {0, 0, 0}},
};

void EnBombal_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnBombal *this = (EnBombal *) thisx;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 25.0f);
    this->actor.colChkInfo.mass = 0;
    Collider_InitAndSetCylinder(globalCtx, &this->unk_158, (Actor *) this, &D_80C06460);
    this->actor.targetMode = 6;
    this->actor.colChkInfo.health = 1;
    this->unk_150 = 0.1f;
    this->unk_14C = (s16) this->actor.cutscene;
    func_80C05B24(this);
}

void EnBombal_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBombal *this = (EnBombal *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_158);
}

void func_80C05B24(EnBombal *arg0) {
    arg0->unk_14A = 0;
    arg0->actionFunc = func_80C05B3C;
}

void func_80C05B3C(EnBombal *this, GlobalContext *globalCtx) {
    Actor *temp_v1;
    u8 temp_v0;

    this->unk_154 += 1500.0f;
    this->actor.velocity.y = Math_SinS((s16) (s32) this->unk_154);
    Math_ApproachF(&this->unk_150, 0.1f, 0.3f, 0.01f);
    if (globalCtx->msgCtx.unk11F10 == 0) {
        temp_v0 = this->unk_158.base.acFlags;
        if ((temp_v0 & 2) != 0) {
            temp_v1 = globalCtx->actorCtx.actorList[2].first;
            this->unk_158.base.acFlags = temp_v0 & 0xFFFD;
            if (((gSaveContext.weekEventReg[75] & 0x40) == 0) && ((gSaveContext.weekEventReg[73] & 0x10) == 0) && ((gSaveContext.weekEventReg[85] & 2) == 0)) {
                temp_v1->unk_A6C = (s32) (temp_v1->unk_A6C | 0x20);
                this->actor.flags |= 0x100000;
            }
            this->actionFunc = func_80C05C44;
        }
    }
}

void func_80C05C44(EnBombal *this, GlobalContext *globalCtx) {
    f32 sp48;
    f32 sp44;
    f32 temp_f0;
    s32 temp_s0;
    s32 phi_s0;
    s32 phi_s0_2;

    phi_s0 = 0;
    phi_s0_2 = 0;
    if (((gSaveContext.weekEventReg[75] & 0x40) == 0) && ((gSaveContext.weekEventReg[73] & 0x10) == 0) && ((gSaveContext.weekEventReg[85] & 2) == 0)) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay(this->unk_14C);
            return;
        }
        if (ActorCutscene_GetCanPlayNext(this->unk_14C) == 0) {
            ActorCutscene_SetIntentToPlay(this->unk_14C);
        } else {
            ActorCutscene_StartAndSetUnkLinkFields(this->unk_14C, (Actor *) this);
            phi_s0 = 1;
        }
        goto block_9;
    }
    phi_s0 = 1;
block_9:
    if (phi_s0 != 0) {
        Math_Vec3f_Copy((Vec3f *) &sp44, (Vec3f *) &this->actor.world);
        temp_f0 = sp48 + 60.0f;
        sp48 = temp_f0;
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xA2, sp44, temp_f0, sp4C, (s16) 0xFF, (s16) 0xFF, (s16) 0xC8, (s16) 1);
        do {
            func_80C05F90(this, &sp44, 0xA);
            temp_s0 = phi_s0_2 + 1;
            phi_s0_2 = temp_s0;
        } while (temp_s0 != 0x64);
        gSaveContext.weekEventReg[83] = gSaveContext.weekEventReg[83] | 4;
        Audio_PlayActorSound2((Actor *) this, 0x2949U);
        this->unk_148 = 0x1E;
        this->unk_14A = 1;
        this->actionFunc = func_80C05DE8;
    }
}

void func_80C05DE8(EnBombal *this, GlobalContext *globalCtx) {
    s16 temp_a0;
    s16 temp_v0;

    temp_v0 = this->unk_148;
    if (temp_v0 == 0) {
        if (((gSaveContext.weekEventReg[75] & 0x40) == 0) && ((gSaveContext.weekEventReg[73] & 0x10) == 0) && ((gSaveContext.weekEventReg[85] & 2) == 0)) {
            temp_a0 = this->unk_14C;
            this = this;
            ActorCutscene_Stop(temp_a0);
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if ((s32) temp_v0 < 0xA) {
        this->actor.colChkInfo.health = 0;
    }
}

void EnBombal_Update(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a2;
    s16 temp_v0;
    EnBombal *this = (EnBombal *) thisx;

    temp_v0 = this->unk_148;
    if (temp_v0 != 0) {
        this->unk_148 = temp_v0 - 1;
    }
    this->actor.shape.rot.y = this->actor.world.rot.y;
    Actor_SetHeight((Actor *) this, 30.0f);
    Actor_SetScale((Actor *) this, this->unk_150);
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    func_80C060B8(this, globalCtx);
    temp_a2 = &this->unk_158;
    if (this->unk_14A == 0) {
        sp24 = temp_a2;
        Collider_UpdateCylinder((Actor *) this, temp_a2);
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    }
}

void EnBombal_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnBombal *this = (EnBombal *) thisx;
    if (this->unk_14A != 1) {
        func_800BDFC0(globalCtx, &D_06000A00);
        func_800BDFC0(globalCtx, &D_06000D78);
    }
    func_80C06208(this, globalCtx);
}

void func_80C05F90(EnBombal *arg0, f32 *arg1, s16 arg2) {
    s16 temp_v0;
    void *phi_s0;
    s16 phi_v0;

    phi_s0 = arg0 + 0x1A4;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_s0->unk_0 == 0) {
        phi_s0->unk_0 = 1U;
        phi_s0->unk_4 = (s32) arg1->unk_0;
        phi_s0->unk_8 = (s32) arg1->unk_4;
        phi_s0->unk_16 = arg2;
        phi_s0->unk_14 = 0xFF;
        phi_s0->unk_C = (s32) arg1->unk_8;
        phi_s0->unk_24 = (f32) ((Rand_ZeroOne() - 0.5f) * 10.0f);
        phi_s0->unk_28 = (f32) ((Rand_ZeroOne() - 0.5f) * 10.0f);
        phi_s0->unk_2C = (f32) ((Rand_ZeroOne() - 0.5f) * 10.0f);
        phi_s0->unk_18 = (f32) (Rand_ZeroOne() - 0.5f);
        phi_s0->unk_1C = (f32) (Rand_ZeroOne() - 0.5f);
        phi_s0->unk_20 = (f32) (Rand_ZeroOne() - 0.5f);
        phi_s0->unk_30 = (f32) ((Rand_ZeroFloat(1.0f) * 0.5f) + 2.0f);
        return;
    }
    phi_s0 += 0x34;
    if ((s32) temp_v0 >= 0xC8) {
        return;
    }
    goto loop_1;
}

void func_80C060B8(EnBombal *arg0, GlobalContext *arg1) {
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
    void *phi_v0;
    s32 phi_v1;

    phi_v0 = arg0 + 0x1A4;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 2;
        phi_v1 = temp_v1;
        if (phi_v0->unk_0 != 0) {
            temp_f0 = phi_v0->unk_18;
            temp_f2 = phi_v0->unk_1C;
            temp_f12 = phi_v0->unk_20;
            temp_a0 = phi_v0->unk_16;
            phi_v0->unk_4 = (f32) (phi_v0->unk_4 + temp_f0);
            phi_v0->unk_8 = (f32) (phi_v0->unk_8 + temp_f2);
            phi_v0->unk_C = (f32) (phi_v0->unk_C + temp_f12);
            phi_v0->unk_18 = (f32) (temp_f0 + phi_v0->unk_24);
            phi_v0->unk_1C = (f32) (temp_f2 + phi_v0->unk_28);
            phi_v0->unk_20 = (f32) (temp_f12 + phi_v0->unk_2C);
            if (temp_a0 != 0) {
                phi_v0->unk_16 = (s16) (temp_a0 - 1);
            } else {
                phi_v0->unk_14 = (s16) (phi_v0->unk_14 - 0xA);
                if ((s32) phi_v0->unk_14 < 0xA) {
                    phi_v0->unk_0 = 0U;
                }
            }
        }
        temp_v0 = phi_v0 + 0x34;
        if (phi_v0->unk_34 != 0) {
            temp_f0_2 = temp_v0->unk_18;
            temp_f2_2 = temp_v0->unk_1C;
            temp_f12_2 = temp_v0->unk_20;
            temp_a0_2 = temp_v0->unk_16;
            temp_v0->unk_4 = (f32) (temp_v0->unk_4 + temp_f0_2);
            temp_v0->unk_8 = (f32) (temp_v0->unk_8 + temp_f2_2);
            temp_v0->unk_C = (f32) (temp_v0->unk_C + temp_f12_2);
            temp_v0->unk_18 = (f32) (temp_f0_2 + temp_v0->unk_24);
            temp_v0->unk_1C = (f32) (temp_f2_2 + temp_v0->unk_28);
            temp_v0->unk_20 = (f32) (temp_f12_2 + temp_v0->unk_2C);
            if (temp_a0_2 != 0) {
                temp_v0->unk_16 = (s16) (temp_a0_2 - 1);
            } else {
                temp_v0->unk_14 = (s16) (temp_v0->unk_14 - 0xA);
                if ((s32) temp_v0->unk_14 < 0xA) {
                    temp_v0->unk_0 = 0;
                }
            }
        }
        phi_v0 = temp_v0 + 0x34;
    } while (temp_v1 != 0xC8);
}

void func_80C06208(EnBombal *arg0, GlobalContext *arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    f32 temp_f6;
    s16 temp_s4;
    s32 temp_t0;
    void *phi_s2;
    f32 phi_f6;
    s16 phi_s4;

    temp_s0 = arg1->state.gfxCtx;
    func_8012C28C(temp_s0);
    func_8012C2DC(arg1->state.gfxCtx);
    phi_s2 = arg0 + 0x1A4;
    phi_s4 = 0;
    do {
        if (phi_s2->unk_0 != 0) {
            SysMatrix_InsertTranslation(phi_s2->unk_4, phi_s2->unk_8, phi_s2->unk_C, 0);
            temp_f12 = phi_s2->unk_30;
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
            temp_v0_5->words.w1 = (phi_s2->unk_14 & 0xFF) | 0xFAB4FF00;
            SysMatrix_InsertMatrix(arg1 + 0x187FC, 1);
            temp_t0 = arg1->state.frames;
            temp_f6 = (f32) temp_t0;
            phi_f6 = temp_f6;
            if (temp_t0 < 0) {
                phi_f6 = temp_f6 + 4294967296.0f;
            }
            SysMatrix_InsertZRotation_f(phi_f6 * 20.0f * 0.017453292f, 1);
            temp_v0_6 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xDA380003;
            temp_v0_6->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
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
