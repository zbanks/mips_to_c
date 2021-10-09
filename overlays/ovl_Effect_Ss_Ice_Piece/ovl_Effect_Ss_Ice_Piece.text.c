

s32 EffectSsIcePiece_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    f32 sp20;
    f32 sp1C;

    this->pos.x = initParamsx->unk0;
    this->pos.y = initParamsx->unk4;
    this->pos.z = initParamsx->unk8;
    this->vec.x = initParamsx->unk0;
    this->vec.y = initParamsx->unk4;
    this->vec.z = initParamsx->unk8;
    this->velocity.x = initParamsx->unk10;
    this->velocity.y = initParamsx->unk14;
    this->velocity.z = initParamsx->unk18;
    this->accel.x = initParamsx->unk1C;
    this->accel.y = initParamsx->unk20;
    this->accel.z = initParamsx->unk24;
    this->draw = EffectSsIcePiece_Draw;
    this->update = EffectSsIcePiece_Update;
    this->life = (s16) initParamsx->unk28;
    this->regs[0] = (s16) initParamsx->unk28;
    this->regs[4] = (s16) (s32) (initParamsx->unkC * 100.0f);
    this->regs[1] = Math_FAtan2F(initParamsx->unk18, initParamsx->unk10);
    this->regs[2] = 0;
    sp1C = fabsf(initParamsx->unk14);
    sp20 = fabsf(initParamsx->unk10);
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
    func_800BCC68(&this->pos, globalCtx);
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

