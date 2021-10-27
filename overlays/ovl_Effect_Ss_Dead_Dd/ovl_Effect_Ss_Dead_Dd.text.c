struct _mips2c_stack_EffectSsDeadDd_Draw {
    /* 0x000 */ char pad_0[0x44];
    /* 0x044 */ f32 sp44;                           /* inferred */
    /* 0x048 */ Mtx *sp48;                          /* inferred */
    /* 0x04C */ ? sp4C;                             /* inferred */
    /* 0x04C */ char pad_4C[0x40];
    /* 0x08C */ ? sp8C;                             /* inferred */
    /* 0x08C */ char pad_8C[0x40];
    /* 0x0CC */ ? spCC;                             /* inferred */
    /* 0x0CC */ char pad_CC[0x44];
};                                                  /* size = 0x110 */

struct _mips2c_stack_EffectSsDeadDd_Init {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EffectSsDeadDd_Update {};      /* size 0x0 */

extern ? D_01000000;

s32 EffectSsDeadDd_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    s16 temp_v0_2;
    s32 temp_s2;
    s32 temp_s2_2;
    u8 temp_v0;
    s32 phi_s2;

    temp_v0 = initParamsx->unk_40;
    if (temp_v0 == 0) {
        this->pos.x = initParamsx->unk_0;
        this->pos.y = initParamsx->unk_4;
        this->pos.z = initParamsx->unk_8;
        this->velocity.x = initParamsx->unk_C;
        this->velocity.y = initParamsx->unk_10;
        this->velocity.z = initParamsx->unk_14;
        this->accel.x = initParamsx->unk_18;
        this->accel.y = initParamsx->unk_1C;
        this->accel.z = initParamsx->unk_20;
        this->life = (s16) initParamsx->unk_34;
        this->regs[9] = initParamsx->unk_26;
        this->regs[11] = initParamsx->unk_30;
        temp_v0_2 = initParamsx->unk_30;
        if (temp_v0_2 != 0) {
            this->regs[10] = temp_v0_2;
        } else {
            this->regs[10] = (s16) ((s32) initParamsx->unk_2B / (s32) initParamsx->unk_34);
        }
        this->draw = EffectSsDeadDd_Draw;
        this->update = EffectSsDeadDd_Update;
        this->regs[0] = initParamsx->unk_24;
        this->regs[2] = (s16) initParamsx->unk_28;
        this->regs[3] = (s16) initParamsx->unk_29;
        this->regs[4] = (s16) initParamsx->unk_2A;
        this->regs[5] = (s16) initParamsx->unk_2B;
        this->regs[6] = (s16) initParamsx->unk_2C;
        this->regs[7] = (s16) initParamsx->unk_2D;
        this->regs[8] = (s16) initParamsx->unk_2E;
        goto block_11;
    }
    if (temp_v0 == 1) {
        this->life = (s16) initParamsx->unk_34;
        this->regs[11] = 0;
        this->regs[9] = initParamsx->unk_26;
        this->regs[10] = (s16) (0x9B / (s32) initParamsx->unk_34);
        this->regs[2] = 0xFF;
        this->regs[3] = 0xFF;
        this->regs[4] = (s16) 0x9B;
        this->regs[5] = (s16) 0x9B;
        this->regs[6] = 0xFA;
        this->regs[7] = 0xB4;
        this->regs[8] = 0;
        this->draw = EffectSsDeadDd_Draw;
        this->update = EffectSsDeadDd_Update;
        this->regs[0] = initParamsx->unk_24;
        temp_s2 = initParamsx->unk_3C;
        phi_s2 = temp_s2;
        if (temp_s2 > 0) {
            do {
                this->pos.x = ((Rand_ZeroOne() - 0.5f) * initParamsx->unk_38) + initParamsx->unk_0;
                this->pos.y = ((Rand_ZeroOne() - 0.5f) * initParamsx->unk_38) + initParamsx->unk_4;
                this->pos.z = ((Rand_ZeroOne() - 0.5f) * initParamsx->unk_38) + initParamsx->unk_8;
                temp_f22 = 2.0f * (Rand_ZeroOne() - 0.5f);
                this->velocity.x = temp_f22;
                this->accel.x = temp_f22;
                temp_f22_2 = 2.0f * (Rand_ZeroOne() - 0.5f);
                this->velocity.y = temp_f22_2;
                this->accel.y = temp_f22_2;
                temp_s2_2 = phi_s2 - 1;
                temp_f22_3 = 2.0f * (Rand_ZeroOne() - 0.5f);
                this->velocity.z = temp_f22_3;
                this->accel.z = temp_f22_3;
                phi_s2 = temp_s2_2;
            } while (temp_s2_2 > 0);
        }
block_11:
        return 1;
    }
    return 0;
}

void EffectSsDeadDd_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    ? spCC;
    ? sp8C;
    ? sp4C;
    Mtx *sp48;
    f32 sp44;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_s1;
    Mtx *temp_v0;
    f32 temp_f0;

    temp_s1 = globalCtx->state.gfxCtx;
    temp_f0 = (f32) this->regs[0] * 0.01f;
    sp44 = temp_f0;
    SkinMatrix_SetTranslate((MtxF *) &spCC, this->pos.x, this->pos.y, this->pos.z);
    SkinMatrix_SetScale((MtxF *) &sp8C, temp_f0, temp_f0, temp_f0);
    SkinMatrix_MtxFMtxFMult((MtxF *) &spCC, (MtxF *) &sp8C, (MtxF *) &sp4C);
    temp_v0 = SkinMatrix_MtxFToNewMtx(temp_s1, (MtxF *) &sp4C);
    if (temp_v0 != 0) {
        sp48 = temp_v0;
        func_8012C974(temp_s1);
        temp_v0_2 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_2[1];
        temp_v0_2->words.w0 = 0xFA000000;
        temp_v0_2->words.w1 = (this->regs[5] & 0xFF) | (this->regs[2] << 0x18) | ((this->regs[3] & 0xFF) << 0x10) | ((this->regs[4] & 0xFF) << 8);
        temp_v0_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xFB000000;
        temp_v0_3->words.w1 = (this->regs[5] & 0xFF) | (this->regs[6] << 0x18) | ((this->regs[7] & 0xFF) << 0x10) | ((this->regs[8] & 0xFF) << 8);
        temp_v0_4 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_4[1];
        temp_v0_4->words.w1 = (u32) sp48;
        temp_v0_4->words.w0 = 0xDA380003;
        temp_v0_5 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xDA380001;
        temp_v0_5->words.w1 = (u32) &D_01000000;
        temp_v0_6 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_6[1];
        temp_v0_6->words.w0 = 0xFCFF97FF;
        temp_v0_6->words.w1 = 0xFF2DFEFF;
        temp_v0_7 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_7[1];
        temp_v0_7->words.w0 = 0xDE000000;
        temp_v0_7->words.w1 = (u32) &D_04054940;
    }
}

void EffectSsDeadDd_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    s16 temp_v0;
    s16 temp_v1;

    this->regs[0] += this->regs[9];
    if ((s32) this->regs[0] < 0) {
        this->regs[0] = 0;
    }
    if (this->regs[11] != 0) {
        this->regs[5] += this->regs[10];
        if ((s32) this->regs[5] >= 0x100) {
            this->regs[5] = 0xFF;
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    temp_v0 = this->regs[5];
    temp_v1 = this->regs[10];
    if ((s32) temp_v0 < (s32) temp_v1) {
        this->regs[5] = 0;
        return;
    }
    this->regs[5] = temp_v0 - temp_v1;
}
