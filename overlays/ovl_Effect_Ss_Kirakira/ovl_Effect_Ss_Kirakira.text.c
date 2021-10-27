struct _mips2c_stack_EffectSsKirakira_Draw {
    /* 0x000 */ char pad_0[0x4C];
    /* 0x04C */ ? sp4C;                             /* inferred */
    /* 0x04C */ char pad_4C[0x40];
    /* 0x08C */ ? sp8C;                             /* inferred */
    /* 0x08C */ char pad_8C[0x40];
    /* 0x0CC */ ? spCC;                             /* inferred */
    /* 0x0CC */ char pad_CC[0x40];
    /* 0x10C */ ? sp10C;                            /* inferred */
    /* 0x10C */ char pad_10C[0x40];
    /* 0x14C */ ? sp14C;                            /* inferred */
    /* 0x14C */ char pad_14C[0x40];
    /* 0x18C */ ? sp18C;                            /* inferred */
    /* 0x18C */ char pad_18C[0x44];
    /* 0x1D0 */ f32 sp1D0;                          /* inferred */
    /* 0x1D4 */ char pad_1D4[0x4];
};                                                  /* size = 0x1D8 */

struct _mips2c_stack_EffectSsKirakira_Init {};      /* size 0x0 */

struct _mips2c_stack_func_80977DB4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80977E6C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80977F28 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

extern void D_0406A800;

s32 EffectSsKirakira_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    s16 temp_v0;
    s16 temp_v0_2;

    this->pos.x = initParamsx->unk_0;
    this->pos.y = initParamsx->unk_4;
    this->pos.z = initParamsx->unk_8;
    this->velocity.x = initParamsx->unk_C;
    this->velocity.y = initParamsx->unk_10;
    this->velocity.z = initParamsx->unk_14;
    this->accel.x = initParamsx->unk_18;
    this->accel.y = initParamsx->unk_1C;
    this->accel.z = initParamsx->unk_20;
    temp_v0 = initParamsx->unk_32;
    this->life = temp_v0;
    if ((s32) temp_v0 < 0) {
        this->gfx = (void *) D_04054A90;
        this->update = func_80977F28;
        this->life = (s16) -(s32) this->life;
        this->regs[11] = 0;
        this->regs[9] = initParamsx->unk_2E;
    } else {
        this->gfx = (void *) D_04054A90;
        if (initParamsx->unk_38 == 0) {
            this->update = func_80977DB4;
        } else {
            this->update = func_80977E6C;
        }
        this->regs[9] = (s16) initParamsx->unk_2B;
        this->regs[11] = initParamsx->unk_2E;
        temp_v0_2 = this->regs[11];
        if ((s32) temp_v0_2 < 0) {
            this->gfx = &D_0406A800;
            this->regs[11] = (s16) -(s32) temp_v0_2;
        }
    }
    this->draw = EffectSsKirakira_Draw;
    this->regs[0] = initParamsx->unk_34;
    this->regs[1] = initParamsx->unk_36;
    this->regs[2] = (s16) initParamsx->unk_24;
    this->regs[3] = (s16) initParamsx->unk_25;
    this->regs[4] = (s16) initParamsx->unk_26;
    this->regs[5] = (s16) initParamsx->unk_27;
    this->regs[6] = (s16) initParamsx->unk_28;
    this->regs[7] = (s16) initParamsx->unk_29;
    this->regs[8] = (s16) initParamsx->unk_2A;
    this->regs[10] = initParamsx->unk_2C;
    this->regs[12] = (s16) initParamsx->unk_30;
    return 1;
}

void EffectSsKirakira_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    f32 sp1D0;
    ? sp18C;
    ? sp14C;
    ? sp10C;
    ? spCC;
    ? sp8C;
    ? sp4C;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    GraphicsContext *temp_s1;
    Mtx *temp_v0;

    sp1D0 = (f32) this->regs[11] / 10000.0f;
    temp_s1 = globalCtx->state.gfxCtx;
    SkinMatrix_SetTranslate((MtxF *) &sp18C, this->pos.x, this->pos.y, this->pos.z);
    SkinMatrix_SetRotateRPY((MtxF *) &sp14C, 0, 0, this->regs[1]);
    SkinMatrix_SetScale((MtxF *) &sp10C, sp1D0, sp1D0, 1.0f);
    SkinMatrix_MtxFMtxFMult((MtxF *) &sp18C, &globalCtx->mf_187FC, (MtxF *) &spCC);
    SkinMatrix_MtxFMtxFMult((MtxF *) &spCC, (MtxF *) &sp14C, (MtxF *) &sp8C);
    SkinMatrix_MtxFMtxFMult((MtxF *) &sp8C, (MtxF *) &sp10C, (MtxF *) &sp4C);
    temp_v1 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v1[1];
    temp_v1->words.w0 = 0xDA380003;
    temp_v1->words.w1 = (u32) &D_801D1DE0;
    temp_v0 = SkinMatrix_MtxFToNewMtx(temp_s1, (MtxF *) &sp4C);
    if (temp_v0 != 0) {
        temp_v1_2 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v1_2[1];
        temp_v1_2->words.w1 = (u32) temp_v0;
        temp_v1_2->words.w0 = 0xDA380003;
        func_8012C2DC(temp_s1);
        temp_v1_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v1_3[1];
        temp_v1_3->words.w0 = 0xFA008080;
        temp_v1_3->words.w1 = (((s32) ((55.0f / (f32) this->regs[12]) * (f32) this->life) + 0xC8) & 0xFF) | (this->regs[2] << 0x18) | ((this->regs[3] & 0xFF) << 0x10) | ((this->regs[4] & 0xFF) << 8);
        temp_v1_4 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v1_4[1];
        temp_v1_4->words.w0 = 0xFB000000;
        temp_v1_4->words.w1 = (this->regs[9] & 0xFF) | (this->regs[6] << 0x18) | ((this->regs[7] & 0xFF) << 0x10) | ((this->regs[8] & 0xFF) << 8);
        temp_v1_5 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v1_5[1];
        temp_v1_5->words.w1 = 0;
        temp_v1_5->words.w0 = 0xD9FCFFFF;
        temp_v1_6 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v1_6[1];
        temp_v1_6->words.w0 = 0xDE000000;
        temp_v1_6->words.w1 = (u32) this->gfx;
        temp_v1_7 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v1_7[1];
        temp_v1_7->words.w1 = 0x30000;
        temp_v1_7->words.w0 = 0xD9FFFFFF;
    }
}

void func_80977DB4(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    f32 temp_f18;
    s16 temp_v0;
    s16 temp_v1;

    this->accel.x = (Rand_ZeroOne() * 0.4f) - 0.2f;
    temp_f18 = Rand_ZeroOne() * 0.4f;
    temp_v0 = this->regs[10];
    this->regs[9] += temp_v0;
    temp_v1 = this->regs[9];
    this->accel.z = temp_f18 - 0.2f;
    if ((s32) temp_v1 < 0) {
        this->regs[9] = 0;
        this->regs[10] = (s16) -(s32) temp_v0;
    } else if ((s32) temp_v1 >= 0x100) {
        this->regs[9] = 0xFF;
        this->regs[10] = (s16) -(s32) temp_v0;
    }
    this->regs[1] += this->regs[0];
}

void func_80977E6C(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    s16 temp_v0;
    s16 temp_v1;

    this->velocity.x *= 0.95f;
    this->velocity.z *= 0.95f;
    this->accel.x = randPlusMinusPoint5Scaled(0.2f);
    temp_v0 = this->regs[10];
    this->accel.z = randPlusMinusPoint5Scaled(0.2f);
    this->regs[9] += temp_v0;
    temp_v1 = this->regs[9];
    if ((s32) temp_v1 < 0) {
        this->regs[9] = 0;
        this->regs[10] = (s16) -(s32) temp_v0;
    } else if ((s32) temp_v1 >= 0x100) {
        this->regs[9] = 0xFF;
        this->regs[10] = (s16) -(s32) temp_v0;
    }
    this->regs[1] += this->regs[0];
}

void func_80977F28(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    this->regs[11] = (s16) (s32) (Math_SinS((s16) (s32) ((32768.0f / (f32) this->regs[12]) * (f32) this->life)) * (f32) this->regs[9]);
}
