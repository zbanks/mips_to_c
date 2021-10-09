struct _mips2c_stack_EffectSsIcePiece_Draw {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad_44[0x8];                    /* maybe part of sp40[3]? */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ u32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x8];
};                                                  /* size = 0x60 */

struct _mips2c_stack_EffectSsIcePiece_Init {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EffectSsIcePiece_Update {};    /* size 0x0 */

s32 EffectSsIcePiece_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    f32 sp20;
    f32 sp1C;

    this->pos.x = initParamsx->unk_0;
    this->pos.y = initParamsx->unk_4;
    this->pos.z = initParamsx->unk_8;
    this->vec.x = initParamsx->unk_0;
    this->vec.y = initParamsx->unk_4;
    this->vec.z = initParamsx->unk_8;
    this->velocity.x = initParamsx->unk_10;
    this->velocity.y = initParamsx->unk_14;
    this->velocity.z = initParamsx->unk_18;
    this->accel.x = initParamsx->unk_1C;
    this->accel.y = initParamsx->unk_20;
    this->accel.z = initParamsx->unk_24;
    this->draw = EffectSsIcePiece_Draw;
    this->update = EffectSsIcePiece_Update;
    this->life = (s16) initParamsx->unk_28;
    this->regs[0] = (s16) initParamsx->unk_28;
    this->regs[4] = (s16) (s32) (initParamsx->unk_C * 100.0f);
    this->regs[1] = Math_FAtan2F(initParamsx->unk_18, initParamsx->unk_10);
    this->regs[2] = 0;
    sp1C = fabsf(initParamsx->unk_14);
    sp20 = fabsf(initParamsx->unk_10);
    this->regs[3] = (s16) (s32) ((Rand_ZeroFloat(1.0f) + 0.5f) * ((sp20 + sp1C) * 100.0f));
    return 1;
}

void EffectSsIcePiece_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    f32 sp54;
    u32 sp50;
    f32 sp4C;
    Gfx *sp40;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_s1;
    s16 temp_v0;
    s16 temp_v1;

    temp_s1 = globalCtx->state.gfxCtx;
    sp54 = (f32) this->regs[4] * 0.01f;
    sp50 = globalCtx->state.frames;
    temp_v0 = this->regs[0];
    if (((s32) temp_v0 > 0) && (temp_v1 = this->life, (((s32) temp_v1 < ((s32) temp_v0 >> 1)) != 0))) {
        sp4C = ((2.0f * (f32) temp_v1) / (f32) temp_v0) * 255.0f;
    } else {
        sp4C = 255.0f;
    }
    SysMatrix_InsertTranslation(this->pos.x, this->pos.y, this->pos.z, 0);
    Matrix_Scale(sp54, sp54, sp54, 1);
    Matrix_RotateY(this->regs[1], 1U);
    SysMatrix_InsertXRotation_s(this->regs[2], 1);
    temp_v0_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp40 = temp_v0_2;
    sp40->words.w1 = Matrix_NewMtx(temp_s1);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0_3 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xFB000000;
    temp_v0_3->words.w1 = ((s32) sp4C & 0xFF) | 0x326400;
    func_800BCC68((Vec3f *) this, globalCtx);
    temp_v0_4 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDB060020;
    temp_v0_4->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, sp50 & 0xFF, 0x20, 0x10, 1, 0U, (sp50 * 2) & 0xFF, 0x40, 0x20);
    temp_v0_5 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xDE000000;
    temp_v0_5->words.w1 = (u32) &D_04050550;
}

void EffectSsIcePiece_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    this->regs[2] += this->regs[3];
    this->velocity.x *= 0.85f;
    this->velocity.y *= 0.85f;
    this->velocity.z *= 0.85f;
}
