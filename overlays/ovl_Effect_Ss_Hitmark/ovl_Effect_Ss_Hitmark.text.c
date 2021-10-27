struct _mips2c_stack_EffectSsHitmark_Draw {
    /* 0x000 */ char pad_0[0x30];
    /* 0x030 */ Gfx *sp30;                          /* inferred */
    /* 0x034 */ char pad_34[0x20];                  /* maybe part of sp30[9]? */
    /* 0x054 */ ? sp54;                             /* inferred */
    /* 0x054 */ char pad_54[0x40];
    /* 0x094 */ ? sp94;                             /* inferred */
    /* 0x094 */ char pad_94[0x40];
    /* 0x0D4 */ ? spD4;                             /* inferred */
    /* 0x0D4 */ char pad_D4[0x40];
    /* 0x114 */ ? sp114;                            /* inferred */
    /* 0x114 */ char pad_114[0x44];
};                                                  /* size = 0x158 */

struct _mips2c_stack_EffectSsHitmark_Init {};       /* size 0x0 */

struct _mips2c_stack_EffectSsHitmark_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

static ? D_8097C880;                                /* unable to generate initializer */
static ? D_8097C8B0;                                /* unable to generate initializer */

s32 EffectSsHitmark_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    void *temp_v1;

    this->pos.x = initParamsx->unk_8;
    this->pos.y = initParamsx->unk_C;
    this->gfx = (void *) &D_04035710;
    this->pos.z = initParamsx->unk_10;
    if (initParamsx->unk_0 == 1) {
        this->life = 0x10;
    } else {
        this->life = 8;
    }
    this->draw = EffectSsHitmark_Draw;
    this->update = EffectSsHitmark_Update;
    this->regs[0] = 0;
    temp_v1 = (initParamsx->unk_0 * 0xC) + &D_8097C880;
    this->regs[1] = (s16) initParamsx->unk_0;
    this->regs[2] = (s16) temp_v1->unk_0;
    this->regs[3] = (s16) temp_v1->unk_1;
    this->regs[4] = (s16) temp_v1->unk_2;
    this->regs[5] = (s16) temp_v1->unk_3;
    this->regs[6] = (s16) temp_v1->unk_4;
    this->regs[7] = (s16) temp_v1->unk_5;
    this->regs[8] = initParamsx->unk_4;
    return 1;
}

void EffectSsHitmark_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    ? sp114;
    ? spD4;
    ? sp94;
    ? sp54;
    Gfx *sp30;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    GraphicsContext *temp_s0;
    Mtx *temp_v0;
    f32 temp_f0;

    temp_s0 = globalCtx->state.gfxCtx;
    SkinMatrix_SetTranslate((MtxF *) &sp114, this->pos.x, this->pos.y, this->pos.z);
    temp_f0 = (f32) this->regs[8] / 100.0f;
    SkinMatrix_SetScale((MtxF *) &spD4, temp_f0, temp_f0, 1.0f);
    SkinMatrix_MtxFMtxFMult((MtxF *) &sp114, &globalCtx->mf_187FC, (MtxF *) &sp54);
    SkinMatrix_MtxFMtxFMult((MtxF *) &sp54, (MtxF *) &spD4, (MtxF *) &sp94);
    temp_v1 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v1[1];
    temp_v1->words.w0 = 0xDA380003;
    temp_v1->words.w1 = (u32) &D_801D1DE0;
    temp_v0 = SkinMatrix_MtxFToNewMtx(temp_s0, (MtxF *) &sp94);
    if (temp_v0 != 0) {
        temp_v1_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v1_2[1];
        temp_v1_2->words.w1 = (u32) temp_v0;
        temp_v1_2->words.w0 = 0xDA380003;
        temp_v1_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v1_3[1];
        temp_v1_3->words.w0 = 0xDB060020;
        sp30 = temp_v1_3;
        sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_8097C8B0 + ((this->regs[0] * 4) + (this->regs[1] << 5))));
        func_8012C9BC(temp_s0);
        temp_v1_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v1_4[1];
        temp_v1_4->words.w0 = 0xFA000000;
        temp_v1_4->words.w1 = ((this->regs[4] & 0xFF) << 8) | (this->regs[2] << 0x18) | ((this->regs[3] & 0xFF) << 0x10) | 0xFF;
        temp_v1_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v1_5[1];
        temp_v1_5->words.w0 = 0xFB000000;
        temp_v1_5->words.w1 = ((this->regs[7] & 0xFF) << 8) | (this->regs[5] << 0x18) | ((this->regs[6] & 0xFF) << 0x10);
        temp_v1_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v1_6[1];
        temp_v1_6->words.w0 = 0xDE000000;
        temp_v1_6->words.w1 = (u32) this->gfx;
    }
}

void EffectSsHitmark_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    u8 *temp_s1;

    if (this->regs[1] == 1) {
        this->regs[0] = (s16) ((s32) (0xF - this->life) / 2);
    } else {
        this->regs[0] = 7 - this->life;
    }
    if (this->regs[0] != 0) {
        temp_s1 = (((this->regs[1] * 4) + 2) * 3) + &D_8097C880;
        this->regs[2] = func_800B096C(this->regs[2], (s16) temp_s1->unk_0, this->life + 1);
        this->regs[3] = func_800B096C(this->regs[3], (s16) temp_s1[1], this->life + 1);
        this->regs[4] = func_800B096C(this->regs[4], (s16) temp_s1[2], this->life + 1);
        this->regs[5] = func_800B096C(this->regs[5], (s16) temp_s1[3], this->life + 1);
        this->regs[6] = func_800B096C(this->regs[6], (s16) temp_s1[4], this->life + 1);
        this->regs[7] = func_800B096C(this->regs[7], (s16) temp_s1[5], this->life + 1);
    }
}
