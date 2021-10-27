typedef struct EnEstone {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(EnEstone *, GlobalContext *);
    /* 0x0148 */ f32 unk_148;                       /* inferred */
    /* 0x014C */ f32 unk_14C;                       /* inferred */
    /* 0x0150 */ f32 unk_150;                       /* inferred */
    /* 0x0154 */ f32 unk_154;                       /* inferred */
    /* 0x0158 */ f32 unk_158;                       /* inferred */
    /* 0x015C */ f32 unk_15C;                       /* inferred */
    /* 0x0160 */ f32 unk_160;                       /* inferred */
    /* 0x0164 */ s16 unk_164;                       /* inferred */
    /* 0x0166 */ s16 unk_166;                       /* inferred */
    /* 0x0168 */ ColliderCylinder unk_168;          /* inferred */
    /* 0x01B4 */ char pad_1B4[0x2BC0];              /* maybe part of unk_168[148]? */
} EnEstone;                                         /* size = 0x2D74 */

struct _mips2c_stack_EnEstone_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnEstone_Draw {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x18];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnEstone_Init {
    /* 0x00 */ char pad_0[0x8C];
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ char pad_A4[0x4];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_EnEstone_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ CollisionCheckContext *sp2C;         /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A9A1DC {
    /* 0x00 */ char pad_0[0x8C];
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ char pad_A4[0x4];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_80A9A4B0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A9A774 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A9A870 {
    /* 0x00 */ char pad_0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80A9A9C0 {
    /* 0x00 */ char pad_0[0x48];
};                                                  /* size = 0x48 */

void func_80A9A774(EnEstone *arg0, PosRot *arg1, f32 *arg2, f32 *arg3, f32 arg4, s32 arg5); /* static */
void func_80A9A870(EnEstone *arg0, GlobalContext *arg1); /* static */
void func_80A9A9C0(EnEstone *arg0, GlobalContext *arg1); /* static */
extern ? D_06010240;
static ColliderCylinderInit D_80A9AB70 = {
    {0xC, 0x11, 9, 0, 0x20, 1},
    {0, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 0},
    {0x1E, 0x1E, 0xFFF6, {0, 0, 0}},
};

void EnEstone_Init(Actor *thisx, GlobalContext *globalCtx) {
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    PosRot *temp_s2;
    f32 *temp_s3;
    f32 *temp_s4;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    s32 temp_f10;
    s32 temp_s0;
    s32 phi_s0;
    EnEstone *this = (EnEstone *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 15.0f);
    temp_f2 = randPlusMinusPoint5Scaled(1.0f) * 20.0f;
    this->unk_160 = temp_f2;
    this->unk_15C = temp_f2;
    this->unk_158 = temp_f2;
    Collider_InitAndSetCylinder(globalCtx, &this->unk_168, (Actor *) this, &D_80A9AB70);
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.world.rot.y += (s32) randPlusMinusPoint5Scaled(10000.0f);
    this->actor.shape.rot.y = this->actor.world.rot.y;
    if (this->actor.params == 0) {
        this->actor.speedXZ = Rand_ZeroFloat(5.0f) + 2.0f;
        this->unk_148 = (Rand_ZeroFloat(1.0f) * 0.005f) + 0.005f;
        this->actor.velocity.y = Rand_ZeroFloat(10.0f) + 15.0f;
        this->actor.gravity = -2.0f;
    } else {
        this->actor.speedXZ = Rand_ZeroFloat(3.0f) + 1.0f;
        this->unk_148 = (Rand_ZeroFloat(1.0f) * 0.003f) + 0.003f;
        temp_f4 = Rand_ZeroFloat(5.0f) + 7.0f;
        this->actor.gravity = -1.0f;
        this->actor.velocity.y = temp_f4;
    }
    temp_f0 = this->unk_148;
    temp_s2 = &this->actor.world;
    temp_s4 = &sp98;
    temp_s3 = &sp8C;
    temp_f10 = (s32) (temp_f0 * 3000.0f);
    this->unk_168.dim.radius = (s16) temp_f10;
    this->unk_168.dim.height = (s16) temp_f10;
    this->unk_168.dim.yShift = (s16) (s32) (temp_f0 * -1300.0f);
    phi_s0 = 0;
    do {
        temp_f6 = Rand_ZeroOne() - 0.5f;
        sp9C = -1.0f;
        sp98 = temp_f6 * 0.5f;
        spA0 = (Rand_ZeroOne() - 0.5f) * 0.5f;
        sp8C = 2.0f * (Rand_ZeroOne() - 0.5f);
        sp90 = (Rand_ZeroOne() * 10.0f) + 8.0f;
        sp94 = 2.0f * (Rand_ZeroOne() - 0.5f);
        func_80A9A774(this, temp_s2, temp_s3, temp_s4, (Rand_ZeroFloat(1.0f) * 0.001f) + 0.001f, 0x46);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 7);
    this->unk_164 = 5;
    this->unk_166 = 0;
    Actor_SetScale((Actor *) this, 1.0f);
    this->actionFunc = func_80A9A1DC;
}

void EnEstone_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnEstone *this = (EnEstone *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_168);
}

void func_80A9A1DC(EnEstone *this, GlobalContext *globalCtx) {
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    PosRot *temp_s2;
    f32 *temp_s3;
    f32 *temp_s5;
    f32 temp_f0;
    f32 temp_f20;
    s32 temp_s0;
    s32 phi_s0;

    if ((this->actor.floorHeight == -10000.0f) || (this->actor.world.pos.y < (globalCtx->actorCtx.actorList[2].first->world.pos.y - 200.0f))) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if ((((this->actor.bgCheckFlags & 1) != 0) && (this->actor.velocity.y < 0.0f)) || ((this->unk_168.base.atFlags & 4) != 0)) {
        this->unk_168.base.atFlags &= 0xFFFB;
        phi_s0 = 0;
        if (this->actor.params == 0) {
            temp_s2 = &this->actor.world;
            temp_s5 = &sp8C;
            temp_s3 = &sp98;
            do {
                temp_f20 = Rand_ZeroOne() - 0.5f;
                sp9C = -1.0f;
                sp98 = 2.0f * temp_f20;
                spA0 = 2.0f * (Rand_ZeroOne() - 0.5f);
                sp8C = (Rand_ZeroOne() - 0.5f) * 3.0f;
                sp90 = (Rand_ZeroOne() * 10.0f) + 5.0f;
                sp94 = (Rand_ZeroOne() - 0.5f) * 3.0f;
                func_80A9A774(this, temp_s2, temp_s5, temp_s3, (Rand_ZeroFloat(1.0f) * 0.002f) + 0.003f, 0x14);
                temp_s0 = phi_s0 + 1;
                phi_s0 = temp_s0;
            } while (temp_s0 != 2);
        }
        Math_Vec3f_Copy((Vec3f *) &sp8C, (Vec3f *) &this->actor.world);
        sp90 = this->actor.floorHeight;
        func_800BBDAC(globalCtx, (Actor *) this, (Vec3f *) &sp8C, 0.0f, 0xA, 6.0f, (s16) 0x32, (s16) 0x1E, (u8) 1);
        this->actor.gravity = 0.0f;
        this->actor.velocity.y = 0.0f;
        this->unk_166 = 1;
        this->unk_164 = 0x32;
        this->actor.shape.shadowScale = 0.0f;
        this->actor.speedXZ *= 0.3f;
        Audio_PlayActorSound2((Actor *) this, 0x2810U);
        this->actionFunc = func_80A9A4B0;
        return;
    }
    temp_f0 = this->unk_148;
    this->actor.shape.shadowScale = temp_f0 * 4500.0f;
    Actor_SetScale((Actor *) this, temp_f0);
}

void func_80A9A4B0(EnEstone *this, GlobalContext *globalCtx) {
    if (this->unk_164 == 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void EnEstone_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp2C;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    s16 temp_v0;
    EnEstone *this = (EnEstone *) thisx;

    temp_v0 = this->unk_164;
    if (temp_v0 != 0) {
        this->unk_164 = temp_v0 - 1;
    }
    this->actionFunc(this, globalCtx);
    this->unk_14C -= this->unk_158;
    this->unk_150 -= this->unk_15C;
    this->unk_154 -= this->unk_160;
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    if ((this->unk_164 == 0) && (this->unk_166 == 0)) {
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 50.0f, 50.0f, 100.0f, 0x1CU);
    }
    temp_a1 = &this->unk_168;
    if (this->unk_166 == 0) {
        sp28 = temp_a1;
        Collider_UpdateCylinder((Actor *) this, temp_a1);
        temp_a1_2 = &globalCtx->colChkCtx;
        sp2C = temp_a1_2;
        CollisionCheck_SetAT(globalCtx, temp_a1_2, (Collider *) sp28);
        CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) sp28);
    }
    func_80A9A870(this, globalCtx);
}

void EnEstone_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    EnEstone *this = (EnEstone *) thisx;

    if (this->unk_166 != 1) {
        SysMatrix_StatePush();
        temp_s0 = globalCtx->state.gfxCtx;
        SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
        SysMatrix_RotateStateAroundXAxis(this->unk_14C * 0.017453292f);
        SysMatrix_InsertYRotation_f(this->unk_150 * 0.017453292f, 1);
        SysMatrix_InsertZRotation_f(this->unk_154 * 0.017453292f, 1);
        temp_f12 = this->unk_148;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        SysMatrix_InsertTranslation(0.0f, 0.0f, 0.0f, 1);
        temp_v0 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = &temp_v0[1];
        temp_v0->words.w1 = -1;
        temp_v0->words.w0 = 0xFA000080;
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = &temp_v0_2[1];
        temp_v0_2->words.w1 = -1;
        temp_v0_2->words.w0 = 0xFB000000;
        temp_v0_3 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xDA380003;
        sp24 = temp_v0_3;
        sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_4 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = &temp_v0_4[1];
        temp_v0_4->words.w1 = (u32) &D_06010240;
        temp_v0_4->words.w0 = 0xDE000000;
        SysMatrix_StatePop();
    }
    func_80A9A9C0(this, globalCtx);
}

void func_80A9A774(EnEstone *arg0, PosRot *arg1, f32 *arg2, f32 *arg3, f32 arg4, s16 arg5) {
    s16 temp_v0;
    void *phi_s0;
    s16 phi_v0;

    phi_s0 = arg0 + 0x1B4;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_s0->unk_0 == 0) {
        phi_s0->unk_0 = 1U;
        phi_s0->unk_4 = (s32) arg1->pos.x;
        phi_s0->unk_8 = (s32) arg1->pos.y;
        phi_s0->unk_C = (s32) arg1->pos.z;
        phi_s0->unk_10 = (s32) arg2->unk_0;
        phi_s0->unk_14 = (s32) arg2[1];
        phi_s0->unk_18 = (s32) arg2[2];
        phi_s0->unk_1C = (s32) arg3->unk_0;
        phi_s0->unk_20 = (s32) arg3[1];
        phi_s0->unk_24 = (s32) arg3[2];
        phi_s0->unk_30 = arg4;
        phi_s0->unk_34 = arg5;
        phi_s0->unk_28 = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        phi_s0->unk_2A = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        phi_s0->unk_2C = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        return;
    }
    phi_s0 += 0x38;
    if ((s32) temp_v0 >= 0xC8) {
        return;
    }
    goto loop_1;
}

void func_80A9A870(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    s16 temp_v0;
    s32 temp_s1;
    void *phi_s0;
    s32 phi_s1;

    phi_s0 = arg0 + 0x1B4;
    phi_s1 = 0;
    do {
        if (phi_s0->unk_0 != 0) {
            temp_f0 = phi_s0->unk_14;
            phi_s0->unk_4 = (f32) (phi_s0->unk_4 + phi_s0->unk_10);
            phi_s0->unk_8 = (f32) (phi_s0->unk_8 + temp_f0);
            phi_s0->unk_28 = (s16) (phi_s0->unk_28 + 0x100);
            phi_s0->unk_2C = (s16) (phi_s0->unk_2C + 0x130);
            phi_s0->unk_C = (f32) (phi_s0->unk_C + phi_s0->unk_18);
            phi_s0->unk_14 = (f32) (temp_f0 + phi_s0->unk_20);
            if ((phi_s0->unk_8 < arg0->floorHeight) && (phi_s0->unk_14 < 0.0f)) {
                phi_s0->unk_34 = 0;
                func_800BBDAC(arg1, arg0, phi_s0 + 4, 0.0f, 5, 3.0f, (s16) 0x1E, (s16) 0xF, (u8) 1);
            }
            temp_v0 = phi_s0->unk_34;
            if (temp_v0 != 0) {
                phi_s0->unk_34 = (s16) (temp_v0 - 1);
            } else {
                phi_s0->unk_0 = 0U;
            }
        }
        temp_s1 = phi_s1 + 1;
        phi_s0 += 0x38;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0xC8);
}

void func_80A9A9C0(EnEstone *arg0, GlobalContext *arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    f32 temp_f12;
    s16 temp_s3;
    void *phi_s0;
    s16 phi_s3;

    temp_a0 = arg1->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    phi_s0 = arg0 + 0x1B4;
    phi_s3 = 0;
    do {
        if (phi_s0->unk_0 != 0) {
            SysMatrix_InsertTranslation(phi_s0->unk_4, phi_s0->unk_8, phi_s0->unk_C, 0);
            SysMatrix_InsertXRotation_s(phi_s0->unk_28, 1);
            Matrix_RotateY(phi_s0->unk_2A, 1U);
            SysMatrix_InsertZRotation_s(phi_s0->unk_2C, 1);
            temp_f12 = phi_s0->unk_30;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            SysMatrix_InsertTranslation(0.0f, 0.0f, 0.0f, 1);
            temp_v0 = temp_s1->polyOpa.p;
            temp_s1->polyOpa.p = &temp_v0[1];
            temp_v0->words.w0 = 0xDA380003;
            temp_v0->words.w1 = Matrix_NewMtx(temp_s1);
            temp_v0_2 = temp_s1->polyOpa.p;
            temp_s1->polyOpa.p = &temp_v0_2[1];
            temp_v0_2->words.w1 = -1;
            temp_v0_2->words.w0 = 0xFA000080;
            temp_v0_3 = temp_s1->polyOpa.p;
            temp_s1->polyOpa.p = &temp_v0_3[1];
            temp_v0_3->words.w1 = -1;
            temp_v0_3->words.w0 = 0xFB000000;
            temp_v0_4 = temp_s1->polyOpa.p;
            temp_s1->polyOpa.p = &temp_v0_4[1];
            temp_v0_4->words.w1 = (u32) &D_0406AB30;
            temp_v0_4->words.w0 = 0xDE000000;
        }
        temp_s3 = phi_s3 + 1;
        phi_s0 += 0x38;
        phi_s3 = temp_s3;
    } while ((s32) temp_s3 < 0xC8);
}
