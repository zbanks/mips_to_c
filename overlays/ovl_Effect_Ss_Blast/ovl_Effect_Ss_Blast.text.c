struct _mips2c_stack_EffectSsBlast_Draw {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad_2C[0x10];                   /* maybe part of sp28[5]? */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0x44];
};                                                  /* size = 0x88 */

struct _mips2c_stack_EffectSsBlast_Init {};         /* size 0x0 */

struct _mips2c_stack_EffectSsBlast_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

? func_801691F0(GlobalContext *, ? *, EffectSs *);  /* extern */

s32 EffectSsBlast_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    this->pos.x = initParamsx->unk_0;
    this->pos.y = initParamsx->unk_4;
    this->pos.z = initParamsx->unk_8;
    this->pos.y += 5.0f;
    this->velocity.x = initParamsx->unk_C;
    this->velocity.y = initParamsx->unk_10;
    this->velocity.z = initParamsx->unk_14;
    this->accel.x = initParamsx->unk_18;
    this->accel.y = initParamsx->unk_1C;
    this->gfx = (void *) D_04030100;
    this->accel.z = initParamsx->unk_20;
    this->draw = EffectSsBlast_Draw;
    this->update = EffectSsBlast_Update;
    this->life = initParamsx->unk_32;
    this->regs[0] = (s16) initParamsx->unk_24;
    this->regs[1] = (s16) initParamsx->unk_25;
    this->regs[2] = (s16) initParamsx->unk_26;
    this->regs[3] = (s16) initParamsx->unk_27;
    this->regs[4] = (s16) initParamsx->unk_28;
    this->regs[5] = (s16) initParamsx->unk_29;
    this->regs[6] = (s16) initParamsx->unk_2A;
    this->regs[7] = (s16) initParamsx->unk_2B;
    this->regs[8] = (s16) ((s32) initParamsx->unk_27 / (s32) initParamsx->unk_32);
    this->regs[9] = initParamsx->unk_2C;
    this->regs[10] = initParamsx->unk_2E;
    this->regs[11] = initParamsx->unk_30;
    return 1;
}

void EffectSsBlast_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    ? sp44;
    f32 sp3C;
    Gfx *sp28;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    sp3C = (f32) this->regs[9] * 0.0025f;
    func_8012C2DC(temp_a0);
    temp_v0 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xFB000000;
    temp_v0->words.w1 = (this->regs[7] & 0xFF) | (this->regs[4] << 0x18) | ((this->regs[5] & 0xFF) << 0x10) | ((this->regs[6] & 0xFF) << 8);
    func_801691F0(globalCtx, &sp44, this);
    temp_v0_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFA000000;
    temp_v0_2->words.w1 = (this->regs[3] & 0xFF) | (this->regs[0] << 0x18) | ((this->regs[1] & 0xFF) << 0x10) | ((this->regs[2] & 0xFF) << 8);
    SysMatrix_SetCurrentState((MtxF *) &sp44);
    Matrix_Scale(sp3C, sp3C, sp3C, 1);
    temp_v0_3 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDA380003;
    sp28 = temp_v0_3;
    sp28->words.w1 = Matrix_NewMtx(temp_s1);
    temp_v0_4 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_4->words.w1 = (u32) this->gfx;
}

void EffectSsBlast_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    EffectSs *temp_a3;
    s16 temp_a2;
    s16 temp_v0;

    temp_a3 = this;
    temp_a2 = temp_a3->regs[8];
    this = temp_a3;
    Math_StepToS(&temp_a3->regs[3], 0, temp_a2);
    temp_v0 = this->regs[10];
    this->regs[9] += temp_v0;
    if (temp_v0 != 0) {
        this->regs[10] = temp_v0 - this->regs[11];
    }
}
