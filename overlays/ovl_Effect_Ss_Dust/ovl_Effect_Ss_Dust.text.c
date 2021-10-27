struct _mips2c_stack_EffectSsDust_Draw {
    /* 0x000 */ char pad_0[0x50];
    /* 0x050 */ Gfx *sp50;                          /* inferred */
    /* 0x054 */ char pad_54[0x14];                  /* maybe part of sp50[6]? */
    /* 0x068 */ f32 sp68;                           /* inferred */
    /* 0x06C */ char pad_6C[0x8];                   /* maybe part of sp68[3]? */
    /* 0x074 */ ? sp74;                             /* inferred */
    /* 0x074 */ char pad_74[0x40];
    /* 0x0B4 */ ? spB4;                             /* inferred */
    /* 0x0B4 */ char pad_B4[0x40];
    /* 0x0F4 */ ? spF4;                             /* inferred */
    /* 0x0F4 */ char pad_F4[0x40];
    /* 0x134 */ ? sp134;                            /* inferred */
    /* 0x134 */ char pad_134[0x44];
};                                                  /* size = 0x178 */

struct _mips2c_stack_EffectSsDust_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809776BC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809777B4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

static ? effectDustTextureAddrs;                    /* unable to generate initializer */
static ? effectDustUpdateFuncs;                     /* unable to generate initializer */

s32 EffectSsDust_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    s32 temp_v0;

    Math_Vec3f_Copy((Vec3f *) this, (Vec3f *) initParamsx);
    Math_Vec3f_Copy(&this->velocity, initParamsx + 0xC);
    Math_Vec3f_Copy(&this->accel, initParamsx + 0x18);
    this->gfx = (void *) &D_04023130;
    this->life = initParamsx->unk_30;
    this->draw = EffectSsDust_Draw;
    this->update = *(&effectDustUpdateFuncs + (initParamsx->unk_34 * 4));
    if ((initParamsx->unk_32 & 4) != 0) {
        temp_v0 = (s32) ((Rand_ZeroOne() * 20.0f) - 10.0f);
        this->regs[0] = initParamsx->unk_24 + temp_v0;
        this->regs[1] = initParamsx->unk_25 + temp_v0;
        this->regs[2] = initParamsx->unk_26 + temp_v0;
        this->regs[4] = initParamsx->unk_28 + temp_v0;
        this->regs[5] = initParamsx->unk_29 + temp_v0;
        this->regs[6] = initParamsx->unk_2A + temp_v0;
    } else {
        this->regs[0] = (s16) initParamsx->unk_24;
        this->regs[1] = (s16) initParamsx->unk_25;
        this->regs[2] = (s16) initParamsx->unk_26;
        this->regs[4] = (s16) initParamsx->unk_28;
        this->regs[5] = (s16) initParamsx->unk_29;
        this->regs[6] = (s16) initParamsx->unk_2A;
    }
    this->regs[3] = (s16) initParamsx->unk_27;
    this->regs[8] = 0;
    this->regs[7] = (s16) initParamsx->unk_2B;
    this->regs[9] = initParamsx->unk_2C;
    this->regs[10] = initParamsx->unk_2E;
    this->regs[12] = initParamsx->unk_30;
    this->regs[11] = (s16) initParamsx->unk_32;
    return 1;
}

void EffectSsDust_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    ? sp134;
    ? spF4;
    ? spB4;
    ? sp74;
    f32 sp68;
    Gfx *sp50;
    Gfx *temp_v1;
    Gfx *temp_v1_10;
    Gfx *temp_v1_11;
    Gfx *temp_v1_12;
    Gfx *temp_v1_13;
    Gfx *temp_v1_14;
    Gfx *temp_v1_15;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    Gfx *temp_v1_8;
    Gfx *temp_v1_9;
    GraphicsContext *temp_s0;
    Mtx *temp_v0;
    f32 temp_f0;
    s16 temp_v0_2;

    temp_s0 = globalCtx->state.gfxCtx;
    temp_f0 = (f32) this->regs[9] * 0.0025f;
    sp68 = temp_f0;
    SkinMatrix_SetTranslate((MtxF *) &sp134, this->pos.x, this->pos.y, this->pos.z);
    SkinMatrix_SetScale((MtxF *) &spF4, temp_f0, temp_f0, 1.0f);
    SkinMatrix_MtxFMtxFMult((MtxF *) &sp134, &globalCtx->mf_187FC, (MtxF *) &sp74);
    SkinMatrix_MtxFMtxFMult((MtxF *) &sp74, (MtxF *) &spF4, (MtxF *) &spB4);
    temp_v1 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v1[1];
    temp_v1->words.w0 = 0xDA380003;
    temp_v1->words.w1 = (u32) &D_801D1DE0;
    temp_v0 = SkinMatrix_MtxFToNewMtx(temp_s0, (MtxF *) &spB4);
    if (temp_v0 != 0) {
        temp_v1_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v1_2[1];
        temp_v1_2->words.w1 = (u32) temp_v0;
        temp_v1_2->words.w0 = 0xDA380003;
        temp_v1_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v1_3[1];
        temp_v1_3->words.w1 = 0;
        temp_v1_3->words.w0 = 0xE7000000;
        temp_v1_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v1_4[1];
        temp_v1_4->words.w0 = 0xDB060020;
        sp50 = temp_v1_4;
        sp50->words.w1 = Lib_SegmentedToVirtual(*(&effectDustTextureAddrs + (this->regs[8] * 4)));
        temp_s0->polyXlu.p = Gfx_CallSetupDL(temp_s0->polyXlu.p, 0U);
        temp_v1_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v1_5[1];
        temp_v1_5->words.w1 = 0;
        temp_v1_5->words.w0 = 0xE7000000;
        temp_v0_2 = this->regs[11];
        if ((temp_v0_2 & 1) != 0) {
            temp_v1_6 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v1_6[1];
            temp_v1_6->words.w1 = 0x5FFEFFF8;
            temp_v1_6->words.w0 = 0xFC30B204;
            temp_v1_7 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v1_7[1];
            temp_v1_7->words.w1 = 0xC8104B50;
            temp_v1_7->words.w0 = 0xE200001C;
            temp_v1_8 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v1_8[1];
            temp_v1_8->words.w1 = 0x30000;
            temp_v1_8->words.w0 = 0xD9FFFFFF;
        } else if ((temp_v0_2 & 2) != 0) {
            temp_v1_9 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v1_9[1];
            temp_v1_9->words.w0 = 0xE200001C;
            temp_v1_9->words.w1 = 0xC184B50;
            temp_v1_10 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v1_10[1];
            temp_v1_10->words.w1 = 0;
            temp_v1_10->words.w0 = 0xD9FCFFFF;
        } else {
            temp_v1_11 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v1_11[1];
            temp_v1_11->words.w1 = 0;
            temp_v1_11->words.w0 = 0xD9FDFFFF;
        }
        temp_v1_12 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v1_12[1];
        temp_v1_12->words.w1 = 0;
        temp_v1_12->words.w0 = 0xE7000000;
        temp_v1_13 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v1_13[1];
        temp_v1_13->words.w0 = 0xFA000000;
        temp_v1_13->words.w1 = ((this->regs[2] & 0xFF) << 8) | (this->regs[0] << 0x18) | ((this->regs[1] & 0xFF) << 0x10) | 0xFF;
        temp_v1_14 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v1_14[1];
        temp_v1_14->words.w0 = 0xFB000000;
        temp_v1_14->words.w1 = (this->regs[7] & 0xFF) | (this->regs[4] << 0x18) | ((this->regs[5] & 0xFF) << 0x10) | ((this->regs[6] & 0xFF) << 8);
        temp_v1_15 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v1_15[1];
        temp_v1_15->words.w0 = 0xDE000000;
        temp_v1_15->words.w1 = (u32) this->gfx;
    }
}

void func_809776BC(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    s16 temp_v0;
    s16 temp_v1;

    this->accel.x = (Rand_ZeroOne() * 0.4f) - 0.2f;
    temp_v0 = this->regs[12];
    temp_v1 = this->life;
    this->accel.z = (Rand_ZeroOne() * 0.4f) - 0.2f;
    if (((s32) temp_v0 >= (s32) temp_v1) && ((s32) temp_v1 >= (temp_v0 - 7))) {
        if ((s32) temp_v0 >= 5) {
            this->regs[8] = temp_v0 - temp_v1;
        } else {
            this->regs[8] = (8 / (s32) temp_v0) * (temp_v0 - temp_v1);
        }
    } else {
        this->regs[8] = 7;
    }
    this->regs[9] += this->regs[10];
}

void func_809777B4(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    s16 temp_v0;
    s16 temp_v1;

    this->accel.x = (Rand_ZeroOne() * 0.4f) - 0.2f;
    temp_v1 = this->regs[8];
    this->accel.z = (Rand_ZeroOne() * 0.4f) - 0.2f;
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {
            if (temp_v1 != 2) {
                if (temp_v1 != 3) {

                } else {
                    this->regs[6] = 0;
                    temp_v0 = this->regs[6];
                    this->regs[0] = 0x32;
                    this->regs[2] = temp_v0;
                    this->regs[5] = temp_v0;
                    this->regs[1] = temp_v0;
                    this->regs[4] = temp_v0;
                }
            } else {
                this->regs[0] = 0x32;
                this->regs[1] = 0;
                this->regs[2] = 0;
                this->regs[4] = 0;
                this->regs[5] = 0;
                this->regs[6] = 0;
            }
        } else {
            this->regs[0] = 0xC8;
            this->regs[1] = 0x32;
            this->regs[2] = 0;
            this->regs[4] = 0x64;
            this->regs[5] = 0;
            this->regs[6] = 0;
        }
    } else {
        this->regs[0] = 0xFF;
        this->regs[1] = 0x96;
        this->regs[2] = 0;
        this->regs[4] = 0x96;
        this->regs[5] = 0x32;
        this->regs[6] = 0;
    }
    if ((s32) this->regs[8] < 7) {
        this->regs[8] = (s32) this->regs[8] + 1;
    }
    this->regs[9] += this->regs[10];
}
