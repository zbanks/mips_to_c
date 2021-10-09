struct _mips2c_stack_EffectSsStick_Draw {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x10];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EffectSsStick_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0x10];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EffectSsStick_Update {};       /* size 0x0 */

extern ? D_801C0850;

s32 EffectSsStick_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    ? sp20;

    this->regs[0] = Object_GetIndex(&globalCtx->objectCtx, 1);
    sp20.unk_0 = (f32) initParamsx->unk_0;
    sp20.unk_4 = (f32) initParamsx->unk_4;
    sp20.unk_8 = (f32) initParamsx->unk_8;
    this->pos.x = sp20.unk_0;
    this->pos.y = sp20.unk_4;
    this->pos.z = sp20.unk_8;
    this->vec.x = sp20.unk_0;
    this->vec.y = sp20.unk_4;
    this->vec.z = sp20.unk_8;
    this->regs[1] = initParamsx->unk_C;
    this->velocity.x = Math_SinS(initParamsx->unk_C) * 6.0f;
    this->velocity.z = Math_CosS(initParamsx->unk_C) * 6.0f;
    this->life = 0x14;
    this->draw = EffectSsStick_Draw;
    this->update = EffectSsStick_Update;
    this->velocity.y = 26.0f;
    this->accel.y = -4.0f;
    return 1;
}

void EffectSsStick_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_s0;

    temp_s0 = globalCtx->state.gfxCtx;
    SysMatrix_InsertTranslation(this->pos.x, this->pos.y, this->pos.z, 0);
    Matrix_Scale(0.01f, 0.0025f, 0.01f, 1);
    SysMatrix_InsertRotation(0, this->regs[1], 0, 1);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_v0;
    sp24->words.w1 = Matrix_NewMtx(temp_s0);
    func_8012C28C(temp_s0);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060018;
    temp_v0_2->words.w1 = (u32) globalCtx->objectCtx.status[this->regs[0]].segment;
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) &D_801C0850;
    temp_v0_3->words.w0 = 0xDB060030;
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_4->words.w1 = (u32) &D_040032B0;
}

void EffectSsStick_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {

}
