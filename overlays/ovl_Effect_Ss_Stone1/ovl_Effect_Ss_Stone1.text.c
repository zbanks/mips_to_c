static ? D_8097C3D8;                                /* unable to generate initializer */



s32 EffectSsStone1_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    sp->unk0 = (f32) initParamsx->unk0;
    sp->unk4 = (f32) initParamsx->unk4;
    sp->unk8 = (f32) initParamsx->unk8;
    this->pos.x = sp->unk0;
    this->pos.y = sp->unk4;
    this->pos.z = sp->unk8;
    this->vec.x = sp->unk0;
    this->vec.y = sp->unk4;
    this->life = 8;
    this->vec.z = sp->unk8;
    this->draw = EffectSsStone1_Draw;
    this->update = EffectSsStone1_Update;
    this->regs[0] = (s16) initParamsx->unkC;
    return 1;
}

void EffectSsStone1_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    Vec3f sp44;
    f32 sp40;
    f32 sp3C;
    Gfx *sp30;
    Gfx *sp2C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_s0;
    void *temp_s1;

    temp_s0 = globalCtx->state.gfxCtx;
    temp_s1 = (this->life * 0xC) + &D_8097C3D8;
    SkinMatrix_Vec3fMtxFMultXYZW(&globalCtx->projectionMatrix, &this->pos, &sp44, &sp40);
    if (sp40 < 1500.0f) {
        sp3C = 3.0f;
    } else {
        sp3C = (sp40 / 1500.0f) * 3.0f;
    }
    SysMatrix_InsertTranslation(this->pos.x, this->pos.y, this->pos.z, 0);
    Matrix_Scale(sp3C, sp3C, sp3C, 1);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp30 = temp_v0;
    sp30->words.w1 = Matrix_NewMtx(temp_s0);
    func_8012C9BC(temp_s0);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060020;
    sp2C = temp_v0_2;
    sp2C->words.w1 = Lib_SegmentedToVirtual(temp_s1->unk0);
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xFA000000;
    temp_v0_3->words.w1 = (temp_s1->unk4 << 0x18) | (temp_s1->unk5 << 0x10) | (temp_s1->unk6 << 8) | 0xFF;
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xFB000000;
    temp_v0_4->words.w1 = (temp_s1->unk8 << 0x18) | (temp_s1->unk9 << 0x10) | (temp_s1->unkA << 8) | 0xFF;
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xDE000000;
    temp_v0_5->words.w1 = (u32) &D_0403C190;
}

void EffectSsStone1_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    if ((this->life == 6) && (this->regs[0] != 0)) {
        gGameInfo->data[1682] = 0;
    }
}

