struct _mips2c_stack_EffectSsEnIce_Draw {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ Gfx *sp48;                           /* inferred */
    /* 0x4C */ char pad4C[0x8];                     /* maybe part of sp48[3]? */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ u32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ char pad60[0x8];
};                                                  /* size = 0x68 */

struct _mips2c_stack_EffectSsEnIce_Init {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8097F62C {
    /* 0x00 */ char pad0[0x2E];
    /* 0x2E */ s16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8097F7EC {};              /* size 0x0 */

extern ? D_040506E0;

s32 EffectSsEnIce_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    Vec3f *sp20;
    Actor *temp_v0_2;
    Vec3f *temp_a1;
    Vec3f *temp_a1_2;
    s16 temp_v0;

    temp_v0 = initParamsx->unk38;
    temp_a1 = initParamsx + 4;
    if (temp_v0 == 0) {
        sp20 = temp_a1;
        Math_Vec3f_Copy((Vec3f *) this, temp_a1);
        temp_v0_2 = initParamsx->unk0;
        if (temp_v0_2 != 0) {
            Math_Vec3f_Diff((Vec3f *) this, temp_v0_2 + 0x24, &this->vec);
        } else {
            Math_Vec3f_Copy(&this->vec, temp_a1);
        }
        Math_Vec3f_Copy(&this->velocity, &D_801D15B0);
        Math_Vec3f_Copy(&this->accel, &D_801D15B0);
        this->life = 0xA;
        this->draw = EffectSsEnIce_Draw;
        this->update = func_8097F62C;
        this->actor = initParamsx->unk0;
        this->regs[12] = (s16) (s32) (initParamsx->unk10 * 100.0f);
        this->regs[4] = (s16) initParamsx->unk2C;
        this->regs[5] = (s16) initParamsx->unk2D;
        this->regs[6] = (s16) initParamsx->unk2E;
        this->regs[7] = (s16) initParamsx->unk2F;
        this->regs[8] = (s16) initParamsx->unk30;
        this->regs[9] = (s16) initParamsx->unk31;
        this->regs[11] = 1;
        this->regs[10] = (s16) initParamsx->unk32;
        this->regs[2] = (s16) (s32) randPlusMinusPoint5Scaled(65536.0f);
        goto block_8;
    }
    if (temp_v0 == 1) {
        temp_a1_2 = initParamsx + 4;
        sp20 = temp_a1_2;
        Math_Vec3f_Copy((Vec3f *) this, temp_a1_2);
        Math_Vec3f_Copy(&this->vec, temp_a1_2);
        Math_Vec3f_Copy(&this->velocity, initParamsx + 0x14);
        Math_Vec3f_Copy(&this->accel, initParamsx + 0x20);
        this->draw = EffectSsEnIce_Draw;
        this->update = func_8097F7EC;
        this->life = (s16) initParamsx->unk34;
        this->regs[0] = (s16) initParamsx->unk34;
        this->regs[12] = (s16) (s32) (initParamsx->unk10 * 100.0f);
        this->regs[1] = Math_FAtan2F(initParamsx->unk1C, initParamsx->unk14);
        this->regs[2] = 0;
        this->regs[4] = (s16) initParamsx->unk2C;
        this->regs[5] = (s16) initParamsx->unk2D;
        this->regs[6] = (s16) initParamsx->unk2E;
        this->regs[7] = (s16) initParamsx->unk2F;
        this->regs[8] = (s16) initParamsx->unk30;
        this->regs[9] = (s16) initParamsx->unk31;
        this->regs[11] = 0;
        this->regs[10] = (s16) initParamsx->unk32;
block_8:
        return 1;
    }
    return 0;
}

void EffectSsEnIce_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    f32 sp5C;
    u32 sp58;
    f32 sp54;
    Gfx *sp48;
    Gfx *sp44;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v1_2;
    GraphicsContext *temp_s1;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_f16;
    f32 phi_f6;
    s32 phi_t8;

    temp_s1 = globalCtx->state.gfxCtx;
    sp5C = (f32) this->regs[12] * 0.01f;
    sp58 = globalCtx->gameplayFrames;
    if (this->regs[11] != 0) {
        phi_f6 = (f32) this->life * 12.0f;
        goto block_6;
    }
    temp_v0 = this->regs[0];
    if (((s32) temp_v0 > 0) && (temp_v1 = this->life, (((s32) temp_v1 < ((s32) temp_v0 >> 1)) != 0))) {
        sp54 = ((2.0f * (f32) temp_v1) / (f32) temp_v0) * 255.0f;
    } else {
        phi_f6 = 255.0f;
block_6:
        sp54 = phi_f6;
    }
    SysMatrix_InsertTranslation(this->pos.x, this->pos.y, this->pos.z, 0);
    Matrix_Scale(sp5C, sp5C, sp5C, 1);
    Matrix_RotateY(this->regs[1], 1U);
    SysMatrix_InsertXRotation_s(this->regs[2], 1);
    temp_v0_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp48 = temp_v0_2;
    sp48->words.w1 = Matrix_NewMtx(temp_s1);
    func_8012C2DC(globalCtx->state.gfxCtx);
    func_800BCC68((Vec3f *) this, globalCtx);
    temp_v0_3 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060020;
    sp44 = temp_v0_3;
    sp44->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, sp58 & 0xFF, 0x20, 0x10, 1, 0U, (sp58 * 2) & 0xFF, 0x40, 0x20);
    temp_v0_4 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xFA000080;
    temp_v0_4->words.w1 = (this->regs[7] & 0xFF) | (this->regs[4] << 0x18) | ((this->regs[5] & 0xFF) << 0x10) | ((this->regs[6] & 0xFF) << 8);
    temp_v1_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v1_2 + 8;
    temp_v1_2->words.w0 = 0xFB000000;
    temp_f16 = (s32) sp54;
    if ((MIPS2C_ERROR(cfc1) & 0x78) != 0) {
        if ((MIPS2C_ERROR(cfc1) & 0x78) == 0) {
            phi_t8 = (s32) (sp54 - 2.1474836e9f) | 0x80000000;
        } else {
            goto block_10;
        }
    } else {
        phi_t8 = temp_f16;
        if (temp_f16 < 0) {
block_10:
            phi_t8 = -1;
        }
    }
    temp_v1_2->words.w1 = ((this->regs[10] & 0xFF) << 8) | (this->regs[8] << 0x18) | ((this->regs[9] & 0xFF) << 0x10) | (phi_t8 & 0xFF);
    temp_v0_5 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) &D_04050648;
    temp_v0_5->words.w0 = 0xDE000000;
    temp_v0_6 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w1 = (u32) &D_040506E0;
    temp_v0_6->words.w0 = 0xDE000000;
}

void func_8097F62C(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    s16 sp2E;
    Actor *temp_v0;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f8_2;
    s16 temp_a0;
    s16 temp_v1;
    s32 temp_f8;

    temp_v0 = this->actor;
    if ((temp_v0 != 0) && (temp_v0->update != 0)) {
        temp_v1 = this->life;
        if (((s32) temp_v1 >= 9) && (temp_v0->colorFilterTimer != 0) && ((temp_v0->colorFilterParams & 0xC000) == 0)) {
            Math_Vec3f_Sum((Vec3f *) &temp_v0->world, &this->vec, (Vec3f *) this);
            this->life += 1;
            return;
        }
        if (temp_v1 == 9) {
            temp_f20 = Math_SinS(Math_Vec3f_Yaw((Vec3f *) &temp_v0->world, (Vec3f *) this));
            this->accel.x = (Rand_ZeroOne() + 1.0f) * temp_f20;
            temp_f20_2 = Math_CosS(Math_Vec3f_Yaw((Vec3f *) &this->actor->world, (Vec3f *) this));
            temp_f16 = Rand_ZeroOne() + 1.0f;
            this->accel.y = -1.5f;
            this->velocity.y = 5.0f;
            this->accel.z = temp_f16 * temp_f20_2;
            return;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return;
    }
    this->actor = NULL;
    if ((s32) this->life >= 9) {
        temp_f8 = (s32) randPlusMinusPoint5Scaled(65535.0f);
        temp_a0 = (s16) temp_f8;
        sp2E = (s16) temp_f8;
        temp_f20_3 = Math_SinS(temp_a0);
        this->accel.x = (Rand_ZeroOne() + 1.0f) * temp_f20_3;
        temp_f20_4 = Math_CosS(sp2E);
        temp_f8_2 = (Rand_ZeroOne() + 1.0f) * temp_f20_4;
        this->life = 8;
        this->accel.y = -1.5f;
        this->velocity.y = 5.0f;
        this->accel.z = temp_f8_2;
    }
}

void func_8097F7EC(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    this->regs[2] += this->regs[3];
}
