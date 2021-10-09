struct _mips2c_stack_EffDust_Destroy {};            /* size 0x0 */

struct _mips2c_stack_EffDust_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EffDust_Init {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ u32 sp18;                            /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EffDust_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80918B40 {};              /* size 0x0 */

struct _mips2c_stack_func_80918D64 {
    /* 0x00 */ char pad0[0x68];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80918FE4 {
    /* 0x00 */ char pad0[0x70];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80919230 {
    /* 0x00 */ char pad0[0x60];
    /* 0x60 */ f32 *sp60;                           /* inferred */
    /* 0x64 */ char pad64[0xC];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80919768 {
    /* 0x00 */ char pad0[0x84];
    /* 0x84 */ ? sp84;                              /* inferred */
    /* 0x84 */ char pad84[0xE];
    /* 0x92 */ s16 sp92;                            /* inferred */
    /* 0x94 */ char pad94[0x1C];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_809199FC {
    /* 0x00 */ char pad0[0x68];
    /* 0x68 */ Actor *sp68;                         /* inferred */
    /* 0x6C */ char pad6C[0x1C];
};                                                  /* size = 0x88 */

void func_80918B40(void *arg0);                     /* static */
static ? D_80919DB0;                                /* unable to generate initializer */

void func_80918B40(void *arg0) {
    s32 temp_v0;
    void *phi_v1;
    void *phi_a1;
    s32 phi_v0;

    phi_v1 = arg0;
    phi_a1 = arg0;
    phi_v0 = 0;
    do {
        phi_v1->unk24C = 0.0f;
        phi_v1->unk248 = 0.0f;
        phi_v1->unk244 = 0.0f;
        phi_a1->unk144 = 1.0f;
        phi_v1->unk250 = 0.0f;
        phi_v1->unk254 = 0.0f;
        phi_v1->unk258 = 0.0f;
        phi_a1->unk148 = 1.0f;
        phi_v1->unk25C = 0.0f;
        phi_v1->unk260 = 0.0f;
        phi_v1->unk264 = 0.0f;
        phi_a1->unk14C = 1.0f;
        phi_v1->unk268 = 0.0f;
        phi_v1->unk26C = 0.0f;
        phi_v1->unk270 = 0.0f;
        temp_v0 = phi_v0 + 4;
        phi_a1->unk150 = 1.0f;
        phi_v1 += 0x30;
        phi_a1 += 0x10;
        phi_v0 = temp_v0;
    } while (temp_v0 != 0x40);
    arg0->unk544 = 0;
}

void EffDust_Init(EffDust *this, GlobalContext *globalCtx) {
    u32 sp18;
    EffDust *temp_a0;
    EffDust *phi_a0;
    EffDust *this = (EffDust *) thisx;

    sp18 = (u32) this->actor.params;
    func_80918B40();
    temp_a0 = this;
    phi_a0 = temp_a0;
    switch (sp18) {
    case 0:
        temp_a0->actionFunc = func_80918D64;
        temp_a0->actor.draw = func_80919768;
        temp_a0->dx = 1.0f;
        temp_a0->dy = 1.0f;
        temp_a0->dz = 1.0f;
        temp_a0->scalingFactor = 0.2f;
        break;
    case 1:
        temp_a0->actionFunc = func_80918FE4;
        temp_a0->actor.draw = func_80919768;
        temp_a0->dy = 1.0f;
        temp_a0->dx = 0.8f;
        temp_a0->dz = 0.8f;
        temp_a0->scalingFactor = 0.5f;
        break;
    case 2:
    case 3:
        temp_a0->actionFunc = func_80919230;
        temp_a0->actor.draw = func_809199FC;
        temp_a0->actor.room = -1;
        temp_a0->dx = 0.5f;
        temp_a0->scalingFactor = 15.0f;
        break;
    case 4:
        temp_a0->actionFunc = func_80919230;
        temp_a0->actor.draw = func_809199FC;
        temp_a0->actor.room = -1;
        temp_a0->dx = 0.5f;
        temp_a0->scalingFactor = 10.0f;
        break;
    case 5:
        temp_a0->actionFunc = func_80919230;
        temp_a0->actor.draw = func_809199FC;
        temp_a0->actor.room = -1;
        temp_a0->dx = 0.5f;
        temp_a0->scalingFactor = 20.0f;
        break;
    default:
        this = temp_a0;
        SystemArena_Free((void *) temp_a0);
        phi_a0 = this;
        break;
    }
    phi_a0->life = 0xA;
}

void EffDust_Destroy(EffDust *this, GlobalContext *globalCtx) {
    EffDust *this = (EffDust *) thisx;

}

void func_80918D64(EffDust *this, GlobalContext *globalCtx) {
    f32 *temp_v0_3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f20;
    f32 temp_f20_2;
    s16 temp_s0;
    s16 temp_s2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s6;
    void *temp_s5;
    void *temp_v0;
    void *temp_v0_2;
    f32 *phi_v0;
    s32 phi_s3;
    s32 phi_s6;

    phi_v0 = this->distanceTraveled;
    phi_s3 = 0;
    do {
        temp_f0 = phi_v0->unk0;
        temp_s3 = phi_s3 + 4;
        phi_s3 = temp_s3;
        if (temp_f0 < 1.0f) {
            phi_v0->unk0 = temp_f0 + 0.05f;
        }
        temp_f0_2 = phi_v0->unk4;
        temp_v0 = phi_v0 + 4;
        if (temp_f0_2 < 1.0f) {
            temp_v0->unk0 = (f32) (temp_f0_2 + 0.05f);
        }
        temp_f0_3 = temp_v0->unk4;
        temp_v0_2 = temp_v0 + 4;
        if (temp_f0_3 < 1.0f) {
            temp_v0_2->unk0 = (f32) (temp_f0_3 + 0.05f);
        }
        temp_f0_4 = temp_v0_2->unk4;
        temp_v0_3 = temp_v0_2 + 4;
        if (temp_f0_4 < 1.0f) {
            *temp_v0_3 = temp_f0_4 + 0.05f;
        }
        phi_v0 = temp_v0_3 + 4;
    } while (temp_s3 != 0x40);
    phi_s6 = 0;
    if (this->actor.home.rot.z != 0) {
        do {
            temp_s3_2 = this->index & 0x3F;
            temp_s5 = this + (temp_s3_2 * 4);
            if (this->distanceTraveled[temp_s3_2] >= 1.0f) {
                temp_s2 = (s16) (s32) randPlusMinusPoint5Scaled(65536.0f);
                temp_s0 = (s16) (s32) Rand_ZeroFloat(4096.0f);
                temp_f20 = Math_CosS(temp_s2);
                this->initialPositions[temp_s3_2].x = Math_CosS(temp_s0) * (-(f32) this->actor.home.rot.z * temp_f20);
                temp_f20_2 = Math_SinS(temp_s2);
                this->initialPositions[temp_s3_2].y = Math_CosS(temp_s0) * (-(f32) this->actor.home.rot.z * temp_f20_2);
                this->initialPositions[temp_s3_2].z = Math_SinS(temp_s0) * -(f32) this->actor.home.rot.z;
                temp_s5->unk144 = 0.0f;
                this->index += 1;
            }
            temp_s6 = phi_s6 + 1;
            phi_s6 = temp_s6;
        } while (temp_s6 != 3);
    }
}

void func_80918FE4(EffDust *this, GlobalContext *globalCtx) {
    f32 *temp_v0_3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f20;
    f32 temp_f20_2;
    s16 temp_s0;
    s16 temp_s2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s5;
    void *temp_s4;
    void *temp_v0;
    void *temp_v0_2;
    f32 *phi_v0;
    s32 phi_s3;
    s32 phi_s5;

    phi_v0 = this->distanceTraveled;
    phi_s3 = 0;
    do {
        temp_f0 = phi_v0->unk0;
        temp_s3 = phi_s3 + 4;
        phi_s3 = temp_s3;
        if (temp_f0 < 1.0f) {
            phi_v0->unk0 = temp_f0 + 0.03f;
        }
        temp_f0_2 = phi_v0->unk4;
        temp_v0 = phi_v0 + 4;
        if (temp_f0_2 < 1.0f) {
            temp_v0->unk0 = (f32) (temp_f0_2 + 0.03f);
        }
        temp_f0_3 = temp_v0->unk4;
        temp_v0_2 = temp_v0 + 4;
        if (temp_f0_3 < 1.0f) {
            temp_v0_2->unk0 = (f32) (temp_f0_3 + 0.03f);
        }
        temp_f0_4 = temp_v0_2->unk4;
        temp_v0_3 = temp_v0_2 + 4;
        if (temp_f0_4 < 1.0f) {
            *temp_v0_3 = temp_f0_4 + 0.03f;
        }
        phi_v0 = temp_v0_3 + 4;
    } while (temp_s3 != 0x40);
    phi_s5 = 0;
    do {
        temp_s3_2 = this->index & 0x3F;
        temp_s4 = this + (temp_s3_2 * 4);
        if (this->distanceTraveled[temp_s3_2] >= 1.0f) {
            temp_s2 = (s16) (s32) randPlusMinusPoint5Scaled(65536.0f);
            temp_s0 = (s16) (s32) Rand_ZeroFloat(8192.0f);
            temp_f20 = Math_CosS(temp_s2);
            this->initialPositions[temp_s3_2].x = Math_CosS(temp_s0) * (400.0f * temp_f20);
            this->initialPositions[temp_s3_2].y = Math_SinS(temp_s0) * 400.0f;
            temp_f20_2 = Math_SinS(temp_s2);
            this->initialPositions[temp_s3_2].z = Math_CosS(temp_s0) * (400.0f * temp_f20_2);
            temp_s4->unk144 = 0.0f;
            this->index += 1;
        }
        temp_s5 = phi_s5 + 1;
        phi_s5 = temp_s5;
    } while (temp_s5 != 2);
}

void func_80919230(EffDust *this, GlobalContext *globalCtx) {
    f32 *sp60;
    Actor *temp_a2;
    f32 *temp_v0;
    f32 *temp_v0_4;
    f32 *temp_v0_8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f20_5;
    f32 temp_f20_6;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s16 temp_s1;
    s16 temp_v0_5;
    s32 temp_cond;
    s32 temp_cond_2;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s2_3;
    s32 temp_s6;
    u8 temp_v1;
    void *temp_s4;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_6;
    void *temp_v0_7;
    f32 *phi_v0;
    s32 phi_s2;
    f32 phi_f6;
    void *phi_s0;
    s32 phi_s6;
    f32 *phi_v0_2;
    s32 phi_s2_2;

    temp_a2 = this->actor.parent;
    temp_v0 = this->distanceTraveled;
    phi_v0 = temp_v0;
    if ((temp_a2 == 0) || (temp_a2->update == 0) || (phi_s2 = 0, ((globalCtx->actorCtx.actorList[2].first->unkA6C & 0x1000) == 0))) {
        temp_v1 = this->life;
        if (temp_v1 != 0) {
            this->life = temp_v1 - 1;
        } else {
            sp60 = temp_v0;
            Actor_MarkForDeath((Actor *) this);
        }
        phi_v0_2 = this->distanceTraveled;
        phi_s2_2 = 0;
        do {
            temp_f0_5 = phi_v0_2->unk0;
            temp_s2_3 = phi_s2_2 + 4;
            phi_s2_2 = temp_s2_3;
            if (temp_f0_5 < 1.0f) {
                phi_v0_2->unk0 = temp_f0_5 + 0.2f;
            }
            temp_f0_6 = phi_v0_2->unk4;
            temp_v0_6 = phi_v0_2 + 4;
            if (temp_f0_6 < 1.0f) {
                temp_v0_6->unk0 = (f32) (temp_f0_6 + 0.2f);
            }
            temp_f0_7 = temp_v0_6->unk4;
            temp_v0_7 = temp_v0_6 + 4;
            if (temp_f0_7 < 1.0f) {
                temp_v0_7->unk0 = (f32) (temp_f0_7 + 0.2f);
            }
            temp_f0_8 = temp_v0_7->unk4;
            temp_v0_8 = temp_v0_7 + 4;
            if (temp_f0_8 < 1.0f) {
                *temp_v0_8 = temp_f0_8 + 0.2f;
            }
            phi_v0_2 = temp_v0_8 + 4;
        } while (temp_s2_3 != 0x40);
        return;
    }
    do {
        temp_f0 = phi_v0->unk0;
        temp_s2 = phi_s2 + 4;
        phi_s2 = temp_s2;
        if (temp_f0 < 1.0f) {
            phi_v0->unk0 = temp_f0 + 0.1f;
        }
        temp_f0_2 = phi_v0->unk4;
        temp_v0_2 = phi_v0 + 4;
        if (temp_f0_2 < 1.0f) {
            temp_v0_2->unk0 = (f32) (temp_f0_2 + 0.1f);
        }
        temp_f0_3 = temp_v0_2->unk4;
        temp_v0_3 = temp_v0_2 + 4;
        if (temp_f0_3 < 1.0f) {
            temp_v0_3->unk0 = (f32) (temp_f0_3 + 0.1f);
        }
        temp_f0_4 = temp_v0_3->unk4;
        temp_v0_4 = temp_v0_3 + 4;
        if (temp_f0_4 < 1.0f) {
            *temp_v0_4 = temp_f0_4 + 0.1f;
        }
        phi_v0 = temp_v0_4 + 4;
    } while (temp_s2 != 0x40);
    this->actor.world.pos.x = temp_a2->world.pos.x;
    this->actor.world.pos.y = temp_a2->world.pos.y;
    this->actor.world.pos.z = temp_a2->world.pos.z;
    phi_s6 = 0;
    do {
        temp_s2_2 = this->index & 0x3F;
        temp_s4 = this + (temp_s2_2 * 4);
        if (this->distanceTraveled[temp_s2_2] >= 1.0f) {
            temp_v0_5 = this->actor.params;
            temp_s1 = (s16) (s32) randPlusMinusPoint5Scaled(65536.0f);
            if (temp_v0_5 != 2) {
                if (temp_v0_5 != 3) {
                    if (temp_v0_5 != 4) {

                    } else {
                        temp_f2 = (Rand_ZeroOne() * 8500.0f) + 1700.0f;
                        this->initialPositions[temp_s2_2].x = temp_f2;
                        phi_s0 = this + (temp_s2_2 * 0xC);
                        if (temp_f2 > 5000.0f) {
                            temp_f20 = Rand_ZeroOne();
                            this->initialPositions[temp_s2_2].y = Math_SinS(temp_s1) * (4000.0f * temp_f20);
                            temp_f20_2 = Rand_ZeroOne();
                            this->initialPositions[temp_s2_2].z = Math_CosS(temp_s1) * (4000.0f * temp_f20_2);
                        } else {
                            this->initialPositions[temp_s2_2].y = Math_SinS(temp_s1) * 4000.0f;
                            phi_f6 = Math_CosS(temp_s1) * 4000.0f;
                            goto block_42;
                        }
                    }
                } else {
                    temp_f2_2 = (Rand_ZeroOne() * 2500.0f) + 700.0f;
                    temp_cond = temp_f2_2 > 2000.0f;
                    this->initialPositions[temp_s2_2].x = temp_f2_2;
                    phi_s0 = this + (temp_s2_2 * 0xC);
                    if (temp_cond) {
                        temp_f20_3 = Rand_ZeroOne();
                        this->initialPositions[temp_s2_2].y = Math_SinS(temp_s1) * (2000.0f * temp_f20_3);
                        temp_f20_4 = Rand_ZeroOne();
                        phi_f6 = Math_CosS(temp_s1) * (2000.0f * temp_f20_4);
block_42:
                        phi_s0->unk24C = phi_f6;
                    } else {
                        this->initialPositions[temp_s2_2].y = Math_SinS(temp_s1) * 2000.0f;
                        this->initialPositions[temp_s2_2].z = Math_CosS(temp_s1) * 2000.0f;
                    }
                }
            } else {
                temp_f2_3 = (Rand_ZeroOne() * 4500.0f) + 700.0f;
                temp_cond_2 = temp_f2_3 > 3000.0f;
                this->initialPositions[temp_s2_2].x = temp_f2_3;
                if (temp_cond_2) {
                    temp_f20_5 = Rand_ZeroOne();
                    this->initialPositions[temp_s2_2].y = Math_SinS(temp_s1) * (3000.0f * temp_f20_5);
                    temp_f20_6 = Rand_ZeroOne();
                    this->initialPositions[temp_s2_2].z = Math_CosS(temp_s1) * (3000.0f * temp_f20_6);
                } else {
                    this->initialPositions[temp_s2_2].y = Math_SinS(temp_s1) * 3000.0f;
                    this->initialPositions[temp_s2_2].z = Math_CosS(temp_s1) * 3000.0f;
                }
            }
            temp_s4->unk144 = 0.0f;
            this->index += 1;
        }
        temp_s6 = phi_s6 + 1;
        phi_s6 = temp_s6;
    } while (temp_s6 != 3);
}

void EffDust_Update(EffDust *this, GlobalContext *globalCtx) {
    EffDust *this = (EffDust *) thisx;
    this->actionFunc(this, globalCtx);
}

void func_80919768(Actor *thisx, GlobalContext *globalCtx) {
    s16 sp92;
    ? sp84;
    Camera *temp_t9;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_s1;
    MtxF *temp_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f2;
    s32 temp_s4;
    Actor *phi_s6;
    void *phi_s3;
    s32 phi_s4;

    temp_s1 = globalCtx->state.gfxCtx;
    temp_t9 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    sp84.unk0 = (f32) temp_t9->eye.x;
    sp84.unk4 = (f32) temp_t9->eye.y;
    sp84.unk8 = (f32) temp_t9->eye.z;
    sp92 = Math_Vec3f_Yaw((Vec3f *) &sp84, (Vec3f *) &thisx->world);
    func_8012C28C(temp_s1);
    temp_v0 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    temp_v0_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = -1;
    temp_v0_2->words.w0 = 0xFA000000;
    temp_v0_3 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xFB000000;
    temp_v0_3->words.w1 = 0xFF00FF00;
    temp_v0_4 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDB060020;
    temp_v0_4->words.w1 = (u32) &D_80919DB0;
    phi_s6 = thisx + 0x144;
    phi_s3 = thisx + 0x244;
    phi_s4 = 0;
    do {
        temp_f0 = *phi_s6;
        if (temp_f0 < 1.0f) {
            temp_s0 = &globalCtx->mf_187FC;
            temp_f20 = 1.0f - (temp_f0 * temp_f0);
            SysMatrix_InsertTranslation(thisx->world.pos.x, thisx->world.pos.y, thisx->world.pos.z, 0);
            Matrix_RotateY(sp92, 1U);
            temp_f0_2 = thisx->unk548;
            temp_f2 = thisx->unk54C;
            temp_f16 = thisx->unk550;
            SysMatrix_InsertTranslation(phi_s3->unk0 * ((temp_f0_2 * temp_f20) + (1.0f - temp_f0_2)), phi_s3->unk4 * ((temp_f2 * temp_f20) + (1.0f - temp_f2)), phi_s3->unk8 * ((temp_f16 * temp_f20) + (1.0f - temp_f16)), 1);
            temp_f12 = thisx->unk554;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            SysMatrix_NormalizeXYZ(temp_s0);
            temp_v0_5 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDA380003;
            temp_v0_5->words.w1 = Matrix_NewMtx(temp_s1);
            temp_v0_6 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w1 = 0;
            temp_v0_6->words.w0 = 0xD9FCFFFF;
            temp_v0_7 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w1 = (u32) D_04054A90;
            temp_v0_7->words.w0 = 0xDE000000;
            temp_v0_8 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_8 + 8;
            temp_v0_8->words.w1 = 0x30000;
            temp_v0_8->words.w0 = 0xD9FFFFFF;
        }
        temp_s4 = phi_s4 + 1;
        phi_s6 += 4;
        phi_s3 += 0xC;
        phi_s4 = temp_s4;
    } while (temp_s4 != 0x40);
}

void func_809199FC(Actor *thisx, GlobalContext *globalCtx) {
    Actor *sp68;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    Gfx *temp_v1;
    GraphicsContext *temp_s1;
    MtxF *temp_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f2;
    s32 temp_s4;
    Actor *phi_s2;
    void *phi_s3;
    s32 phi_s4;

    temp_s1 = globalCtx->state.gfxCtx;
    sp68 = globalCtx->actorCtx.actorList[2].first;
    func_8012C28C(temp_s1);
    temp_v0 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    temp_v0_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = -1;
    temp_v0_2->words.w0 = 0xFA000000;
    phi_s2 = thisx + 0x144;
    phi_s3 = thisx + 0x244;
    phi_s4 = 0;
    if (sp68->unkB08 >= 0.85f) {
        temp_v0_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = 0xFF000000;
        temp_v0_3->words.w0 = 0xFB000000;
    } else {
        temp_v0_4 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = 0xFF00;
        temp_v0_4->words.w0 = 0xFB000000;
    }
    temp_v0_5 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) &D_80919DB0;
    temp_v0_5->words.w0 = 0xDB060020;
    do {
        if (*phi_s2 < 1.0f) {
            temp_s0 = &globalCtx->mf_187FC;
            temp_v1 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v1 + 8;
            temp_v1->words.w0 = 0xFA000000;
            temp_v1->words.w1 = ((u32) (*phi_s2 * 255.0f) & 0xFF) | ~0xFF;
            temp_f0 = *phi_s2;
            temp_f20 = 1.0f - (temp_f0 * temp_f0);
            SysMatrix_InsertMatrix(sp68 + 0xCC4, 0);
            temp_f2 = thisx->unk548;
            temp_f0_2 = 1.0f - *phi_s2;
            SysMatrix_InsertTranslation(phi_s3->unk0 * ((temp_f2 * temp_f20) + (1.0f - temp_f2)), (temp_f0_2 * phi_s3->unk4) + 320.0f, (temp_f0_2 * phi_s3->unk8) + -20.0f, 1);
            temp_f12 = *phi_s2 * thisx->unk554;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            SysMatrix_NormalizeXYZ(temp_s0);
            temp_v0_6 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xDA380003;
            temp_v0_6->words.w1 = Matrix_NewMtx(temp_s1);
            temp_v0_7 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w1 = 0;
            temp_v0_7->words.w0 = 0xD9FCFFFF;
            temp_v0_8 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_8 + 8;
            temp_v0_8->words.w1 = (u32) D_04054A90;
            temp_v0_8->words.w0 = 0xDE000000;
            temp_v0_9 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_9 + 8;
            temp_v0_9->words.w1 = 0x30000;
            temp_v0_9->words.w0 = 0xD9FFFFFF;
        }
        temp_s4 = phi_s4 + 1;
        phi_s2 += 4;
        phi_s3 += 0xC;
        phi_s4 = temp_s4;
    } while (temp_s4 != 0x40);
}

void EffDust_Draw(EffDust *this, GlobalContext *globalCtx) {
    EffDust *this = (EffDust *) thisx;
    this->drawFunc((Actor *) this, globalCtx);
}
