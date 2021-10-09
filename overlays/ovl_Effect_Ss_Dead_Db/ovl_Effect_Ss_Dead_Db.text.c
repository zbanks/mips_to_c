struct _mips2c_stack_EffectSsDeadDb_Draw {
    /* 0x000 */ char pad_0[0x24];
    /* 0x024 */ Gfx *sp24;                          /* inferred */
    /* 0x028 */ char pad_28[0x14];                  /* maybe part of sp24[6]? */
    /* 0x03C */ f32 sp3C;                           /* inferred */
    /* 0x040 */ char pad_40[0x4];
    /* 0x044 */ ? sp44;                             /* inferred */
    /* 0x044 */ char pad_44[0x40];
    /* 0x084 */ ? sp84;                             /* inferred */
    /* 0x084 */ char pad_84[0x40];
    /* 0x0C4 */ ? spC4;                             /* inferred */
    /* 0x0C4 */ char pad_C4[0x44];
};                                                  /* size = 0x108 */

struct _mips2c_stack_EffectSsDeadDb_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EffectSsDeadDb_Update {};      /* size 0x0 */

static ? D_80980CD8;                                /* unable to generate initializer */

s32 EffectSsDeadDb_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    Math_Vec3f_Copy((Vec3f *) this, (Vec3f *) initParamsx);
    Math_Vec3f_Copy(&this->velocity, initParamsx + 0xC);
    Math_Vec3f_Copy(&this->accel, initParamsx + 0x18);
    this->gfx = (void *) &D_04044300;
    this->flags = 4;
    this->life = (s16) initParamsx->unk_30;
    this->regs[9] = initParamsx->unk_26;
    this->draw = EffectSsDeadDb_Draw;
    this->update = EffectSsDeadDb_Update;
    this->regs[11] = (s16) initParamsx->unk_30;
    this->regs[1] = 0;
    this->regs[0] = initParamsx->unk_24;
    this->regs[2] = (s16) initParamsx->unk_28;
    this->regs[3] = (s16) initParamsx->unk_29;
    this->regs[4] = (s16) initParamsx->unk_2A;
    this->regs[5] = (s16) initParamsx->unk_2B;
    this->regs[6] = (s16) initParamsx->unk_2C;
    this->regs[7] = (s16) initParamsx->unk_2D;
    this->regs[8] = (s16) initParamsx->unk_2E;
    return 1;
}

void EffectSsDeadDb_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    ? spC4;
    ? sp84;
    ? sp44;
    f32 sp3C;
    Gfx *sp24;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    GraphicsContext *temp_s0;
    Mtx *temp_v0;
    f32 temp_f0;

    temp_s0 = globalCtx->state.gfxCtx;
    temp_f0 = (f32) this->regs[0] * 0.01f;
    sp3C = temp_f0;
    SkinMatrix_SetTranslate((MtxF *) &spC4, this->pos.x, this->pos.y, this->pos.z);
    SkinMatrix_SetScale((MtxF *) &sp84, temp_f0, temp_f0, temp_f0);
    SkinMatrix_MtxFMtxFMult((MtxF *) &spC4, (MtxF *) &sp84, (MtxF *) &sp44);
    temp_v0 = SkinMatrix_MtxFToNewMtx(temp_s0, (MtxF *) &sp44);
    if (temp_v0 != 0) {
        temp_v1 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v1 + 8;
        temp_v1->words.w1 = (u32) temp_v0;
        temp_v1->words.w0 = 0xDA380003;
        func_8012C974(temp_s0);
        temp_v1_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v1_2 + 8;
        temp_v1_2->words.w0 = 0xFB000000;
        temp_v1_2->words.w1 = ((this->regs[8] & 0xFF) << 8) | (this->regs[6] << 0x18) | ((this->regs[7] & 0xFF) << 0x10);
        temp_v1_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v1_3 + 8;
        temp_v1_3->words.w0 = 0xFA000000;
        temp_v1_3->words.w1 = (this->regs[5] & 0xFF) | (this->regs[2] << 0x18) | ((this->regs[3] & 0xFF) << 0x10) | ((this->regs[4] & 0xFF) << 8);
        temp_v1_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v1_4 + 8;
        temp_v1_4->words.w0 = 0xDB060020;
        sp24 = temp_v1_4;
        sp24->words.w1 = Lib_SegmentedToVirtual(*(&D_80980CD8 + (this->regs[1] * 4)));
        temp_v1_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v1_5 + 8;
        temp_v1_5->words.w0 = 0xDE000000;
        temp_v1_5->words.w1 = (u32) this->gfx;
    }
}

void EffectSsDeadDb_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    s16 temp_v0;

    temp_v0 = this->regs[11];
    this->regs[2] += -0xA;
    this->regs[0] += this->regs[9];
    this->regs[1] = (s16) (s32) ((f32) ((temp_v0 - this->life) * 9) / (f32) temp_v0);
    if ((s32) this->regs[2] < 0) {
        this->regs[2] = 0;
    }
    this->regs[3] += -0xA;
    if ((s32) this->regs[3] < 0) {
        this->regs[3] = 0;
    }
    this->regs[4] += -0xA;
    if ((s32) this->regs[4] < 0) {
        this->regs[4] = 0;
    }
    this->regs[6] += -0xA;
    if ((s32) this->regs[6] < 0) {
        this->regs[6] = 0;
    }
    this->regs[7] += -0xA;
    if ((s32) this->regs[7] < 0) {
        this->regs[7] = 0;
    }
    this->regs[8] += -0xA;
    if ((s32) this->regs[8] < 0) {
        this->regs[8] = 0;
    }
}
