void func_80A9A774(EnEstone *arg0, PosRot *arg1, f32 *arg2, f32 *arg3, f32 arg4, s32 arg5); /* static */
void func_80A9A870(EnEstone *arg0, GlobalContext *arg1); /* static */
void func_80A9A9C0(EnEstone *arg0, GlobalContext *arg1); /* static */
extern ? D_06010240;
static ColliderCylinderInit D_80A9AB70 = {
    {0xC, 0x11, 9, 0, 0x20, 1},
    {0, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 0},
    {0x1E, 0x1E, 0xFFF6, {0, 0, 0}},
};

typedef struct EnEstone {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(EnEstone *, GlobalContext *);
    /* 0x0148 */ f32 unk148;                        /* inferred */
    /* 0x014C */ f32 unk14C;                        /* inferred */
    /* 0x0150 */ f32 unk150;                        /* inferred */
    /* 0x0154 */ f32 unk154;                        /* inferred */
    /* 0x0158 */ f32 unk158;                        /* inferred */
    /* 0x015C */ f32 unk15C;                        /* inferred */
    /* 0x0160 */ f32 unk160;                        /* inferred */
    /* 0x0164 */ s16 unk164;                        /* inferred */
    /* 0x0166 */ s16 unk166;                        /* inferred */
    /* 0x0168 */ ColliderCylinder unk168;           /* inferred */
    /* 0x01B4 */ char pad1B4[0x2BC0];
} EnEstone;                                         /* size 0x2D74 */

void EnEstone_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnEstone *this = (EnEstone *) thisx;
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

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 15.0f);
    temp_f2 = randPlusMinusPoint5Scaled(1.0f) * 20.0f;
    this->unk160 = temp_f2;
    this->unk15C = temp_f2;
    this->unk158 = temp_f2;
    Collider_InitAndSetCylinder(globalCtx, &this->unk168, &this->actor, &D_80A9AB70);
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.world.rot.y += (s32) randPlusMinusPoint5Scaled(10000.0f);
    this->actor.shape.rot.y = this->actor.world.rot.y;
    if (this->actor.params == 0) {
        this->actor.speedXZ = Rand_ZeroFloat(5.0f) + 2.0f;
        this->unk148 = (Rand_ZeroFloat(1.0f) * 0.005f) + 0.005f;
        this->actor.velocity.y = Rand_ZeroFloat(10.0f) + 15.0f;
        this->actor.gravity = -2.0f;
    } else {
        this->actor.speedXZ = Rand_ZeroFloat(3.0f) + 1.0f;
        this->unk148 = (Rand_ZeroFloat(1.0f) * 0.003f) + 0.003f;
        temp_f4 = Rand_ZeroFloat(5.0f) + 7.0f;
        this->actor.gravity = -1.0f;
        this->actor.velocity.y = temp_f4;
    }
    temp_f0 = this->unk148;
    temp_s2 = &this->actor.world;
    temp_s4 = &sp98;
    temp_s3 = &sp8C;
    temp_f10 = (s32) (temp_f0 * 3000.0f);
    this->unk168.dim.radius = (s16) temp_f10;
    this->unk168.dim.height = (s16) temp_f10;
    this->unk168.dim.yShift = (s16) (s32) (temp_f0 * -1300.0f);
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
    this->unk164 = 5;
    this->unk166 = 0;
    Actor_SetScale(&this->actor, 1.0f);
    this->actionFunc = func_80A9A1DC;
}

void EnEstone_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnEstone *this = (EnEstone *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk168);
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
        Actor_MarkForDeath(&this->actor);
        return;
    }
    if ((((this->actor.bgCheckFlags & 1) != 0) && (this->actor.velocity.y < 0.0f)) || ((this->unk168.base.atFlags & 4) != 0)) {
        this->unk168.base.atFlags &= 0xFFFB;
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
        Math_Vec3f_Copy((Vec3f *) &sp8C, &this->actor.world.pos);
        sp90 = this->actor.floorHeight;
        func_800BBDAC(globalCtx, &this->actor, (Vec3f *) &sp8C, 0.0f, 0xA, 6.0f, (s16) 0x32, (s16) 0x1E, (u8) 1);
        this->actor.gravity = 0.0f;
        this->actor.velocity.y = 0.0f;
        this->unk166 = 1;
        this->unk164 = 0x32;
        this->actor.shape.shadowScale = 0.0f;
        this->actor.speedXZ *= 0.3f;
        Audio_PlayActorSound2(&this->actor, 0x2810U);
        this->actionFunc = func_80A9A4B0;
        return;
    }
    temp_f0 = this->unk148;
    this->actor.shape.shadowScale = temp_f0 * 4500.0f;
    Actor_SetScale(&this->actor, temp_f0);
}

void func_80A9A4B0(EnEstone *this, GlobalContext *globalCtx) {
    if (this->unk164 == 0) {
        Actor_MarkForDeath(&this->actor);
    }
}

void EnEstone_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnEstone *this = (EnEstone *) thisx;
    CollisionCheckContext *sp2C;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    s16 temp_v0;

    temp_v0 = this->unk164;
    if (temp_v0 != 0) {
        this->unk164 = temp_v0 - 1;
    }
    this->actionFunc(this, globalCtx);
    this->unk14C -= this->unk158;
    this->unk150 -= this->unk15C;
    this->unk154 -= this->unk160;
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    if ((this->unk164 == 0) && (this->unk166 == 0)) {
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 50.0f, 50.0f, 100.0f, 0x1CU);
    }
    temp_a1 = &this->unk168;
    if (this->unk166 == 0) {
        sp28 = temp_a1;
        Collider_UpdateCylinder(&this->actor, temp_a1);
        temp_a1_2 = &globalCtx->colChkCtx;
        sp2C = temp_a1_2;
        CollisionCheck_SetAT(globalCtx, temp_a1_2, &sp28->base);
        CollisionCheck_SetAC(globalCtx, temp_a1_2, &sp28->base);
    }
    func_80A9A870(this, globalCtx);
}

void EnEstone_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnEstone *this = (EnEstone *) thisx;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_s0;
    f32 temp_f12;

    if (this->unk166 != 1) {
        SysMatrix_StatePush();
        temp_s0 = globalCtx->state.gfxCtx;
        SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
        SysMatrix_RotateStateAroundXAxis(this->unk14C * 0.017453292f);
        SysMatrix_InsertYRotation_f(this->unk150 * 0.017453292f, 1);
        SysMatrix_InsertZRotation_f(this->unk154 * 0.017453292f, 1);
        temp_f12 = this->unk148;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        SysMatrix_InsertTranslation(0.0f, 0.0f, 0.0f, 1);
        temp_v0 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w1 = -1;
        temp_v0->words.w0 = 0xFA000080;
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = -1;
        temp_v0_2->words.w0 = 0xFB000000;
        temp_v0_3 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDA380003;
        sp24 = temp_v0_3;
        sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_4 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_4 + 8;
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
    if (phi_s0->unk0 == 0) {
        phi_s0->unk0 = 1U;
        phi_s0->unk4 = (s32) arg1->pos.x;
        phi_s0->unk8 = (s32) arg1->pos.y;
        phi_s0->unkC = (s32) arg1->pos.z;
        phi_s0->unk10 = (s32) arg2->unk0;
        phi_s0->unk14 = (s32) arg2->unk4;
        phi_s0->unk18 = (s32) arg2->unk8;
        phi_s0->unk1C = (s32) arg3->unk0;
        phi_s0->unk20 = (s32) arg3->unk4;
        phi_s0->unk24 = (s32) arg3->unk8;
        phi_s0->unk30 = arg4;
        phi_s0->unk34 = arg5;
        phi_s0->unk28 = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        phi_s0->unk2A = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        phi_s0->unk2C = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
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
        if (phi_s0->unk0 != 0) {
            temp_f0 = phi_s0->unk14;
            phi_s0->unk4 = (f32) (phi_s0->unk4 + phi_s0->unk10);
            phi_s0->unk8 = (f32) (phi_s0->unk8 + temp_f0);
            phi_s0->unk28 = (s16) (phi_s0->unk28 + 0x100);
            phi_s0->unk2C = (s16) (phi_s0->unk2C + 0x130);
            phi_s0->unkC = (f32) (phi_s0->unkC + phi_s0->unk18);
            phi_s0->unk14 = (f32) (temp_f0 + phi_s0->unk20);
            if ((phi_s0->unk8 < arg0->floorHeight) && (phi_s0->unk14 < 0.0f)) {
                phi_s0->unk34 = 0;
                func_800BBDAC(arg1, arg0, phi_s0 + 4, 0.0f, 5, 3.0f, (s16) 0x1E, (s16) 0xF, (u8) 1);
            }
            temp_v0 = phi_s0->unk34;
            if (temp_v0 != 0) {
                phi_s0->unk34 = (s16) (temp_v0 - 1);
            } else {
                phi_s0->unk0 = 0U;
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
        if (phi_s0->unk0 != 0) {
            SysMatrix_InsertTranslation(phi_s0->unk4, phi_s0->unk8, phi_s0->unkC, 0);
            SysMatrix_InsertXRotation_s(phi_s0->unk28, 1);
            Matrix_RotateY(phi_s0->unk2A, 1U);
            SysMatrix_InsertZRotation_s(phi_s0->unk2C, 1);
            temp_f12 = phi_s0->unk30;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            SysMatrix_InsertTranslation(0.0f, 0.0f, 0.0f, 1);
            temp_v0 = temp_s1->polyOpa.p;
            temp_s1->polyOpa.p = temp_v0 + 8;
            temp_v0->words.w0 = 0xDA380003;
            temp_v0->words.w1 = Matrix_NewMtx(temp_s1);
            temp_v0_2 = temp_s1->polyOpa.p;
            temp_s1->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w1 = -1;
            temp_v0_2->words.w0 = 0xFA000080;
            temp_v0_3 = temp_s1->polyOpa.p;
            temp_s1->polyOpa.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = -1;
            temp_v0_3->words.w0 = 0xFB000000;
            temp_v0_4 = temp_s1->polyOpa.p;
            temp_s1->polyOpa.p = temp_v0_4 + 8;
            temp_v0_4->words.w1 = (u32) &D_0406AB30;
            temp_v0_4->words.w0 = 0xDE000000;
        }
        temp_s3 = phi_s3 + 1;
        phi_s0 += 0x38;
        phi_s3 = temp_s3;
    } while ((s32) temp_s3 < 0xC8);
}

