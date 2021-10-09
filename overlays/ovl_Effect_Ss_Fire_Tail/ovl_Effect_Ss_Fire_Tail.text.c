

s32 EffectSsFireTail_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    this->pos.x = initParamsx->unk4;
    this->pos.y = initParamsx->unk8;
    this->pos.z = initParamsx->unkC;
    this->vec.x = initParamsx->unk14;
    this->vec.y = initParamsx->unk18;
    this->velocity.x = 0.0f;
    this->velocity.y = 0.0f;
    this->velocity.z = 0.0f;
    this->accel.x = 0.0f;
    this->accel.y = 0.0f;
    this->accel.z = 0.0f;
    this->vec.z = initParamsx->unk1C;
    this->life = (s16) initParamsx->unk30;
    this->draw = EffectSsFireTail_Draw;
    this->update = EffectSsFireTail_Update;
    this->actor = initParamsx->unk0;
    this->regs[0] = (s16) (s32) (initParamsx->unk10 * 1000.0f);
    this->regs[2] = -0xA;
    this->regs[3] = -0xF;
    this->regs[1] = (s16) initParamsx->unk30;
    if (initParamsx->unk20 == 0) {
        initParamsx->unk20 = 1;
    }
    this->regs[10] = initParamsx->unk20;
    this->regs[4] = (s16) initParamsx->unk22;
    this->regs[5] = (s16) initParamsx->unk23;
    this->regs[6] = (s16) initParamsx->unk24;
    this->regs[7] = (s16) initParamsx->unk26;
    this->regs[8] = (s16) initParamsx->unk27;
    this->regs[9] = (s16) initParamsx->unk28;
    this->regs[11] = initParamsx->unk2C;
    this->regs[12] = initParamsx->unk2A;
    return 1;
}

void EffectSsFireTail_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    s16 sp9E;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    Actor *sp78;
    s16 sp76;
    Gfx *sp70;
    Gfx *sp64;
    s16 sp5A;
    void *sp50;
    Vec3f *sp4C;
    Actor *temp_v0;
    Actor *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_s2;
    Vec3f *temp_t6;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v1;
    s16 temp_v1_3;
    s32 temp_a0;
    s32 temp_cond;
    void *temp_v1_2;

    temp_s2 = globalCtx->state.gfxCtx;
    sp98 = 0.0f;
    sp94 = 0.0f;
    sp90 = 0.0f;
    temp_v0 = this->actor;
    temp_t6 = &this->vec;
    if (temp_v0 != 0) {
        sp4C = temp_t6;
        temp_t6->x = temp_v0->velocity.x;
        temp_t6->y = temp_v0->velocity.y;
        temp_t6->z = temp_v0->velocity.z;
        temp_v1 = this->regs[11];
        if ((s32) temp_v1 < 0) {
            temp_v0_2 = this->actor;
            SysMatrix_InsertTranslation(this->pos.x + temp_v0_2->world.pos.x, this->pos.y + temp_v0_2->world.pos.y, this->pos.z + temp_v0_2->world.pos.z, 0);
        } else {
            sp76 = temp_v1;
            sp78 = globalCtx->actorCtx.actorList[2].first;
            temp_v1_2 = sp78 + (sp76 * 0xC);
            this->pos.x = temp_v1_2->unkBEC - (Math_SinS(func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera])) * 5.0f);
            this->pos.y = temp_v1_2->unkBF0;
            sp50 = temp_v1_2;
            this->pos.z = temp_v1_2->unkBF4 - (Math_CosS(func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera])) * 5.0f);
            SysMatrix_InsertTranslation(this->pos.x, this->pos.y, this->pos.z, 0);
        }
    } else {
        SysMatrix_InsertTranslation(this->pos.x, this->pos.y, this->pos.z, 0);
        sp4C = &this->vec;
    }
    sp5A = Math_Vec3f_Yaw((Vec3f *) &sp90, sp4C);
    temp_v1_3 = sp5A - func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]);
    temp_a0 = temp_v1_3 << 0x10;
    sp9E = temp_v1_3;
    sp8C = fabsf(Math_CosS((s16) (temp_a0 >> 0x10)));
    sp88 = Math_SinS(sp9E);
    sp84 = Math_Vec3f_DistXZ((Vec3f *) &sp90, sp4C) / ((f32) this->regs[10] * 0.1f);
    Matrix_RotateY((s16) (func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x8000), 1U);
    SysMatrix_InsertZRotation_f((f32) this->regs[2] * sp88 * sp84 * 0.017453292f, 1);
    temp_f2 = 1.0f - ((f32) (this->life + 1) / (f32) this->regs[1]);
    temp_f14 = (f32) this->regs[0] * 0.000010000001f * (1.0f - (temp_f2 * temp_f2));
    sp98 = temp_f14;
    sp94 = temp_f14;
    sp90 = temp_f14;
    Matrix_Scale(temp_f14, temp_f14, temp_f14, 1);
    temp_f2_2 = ((f32) this->regs[3] * 0.01f * sp8C * sp84) + 1.0f;
    temp_cond = temp_f2_2 < 0.1f;
    sp8C = temp_f2_2;
    if (temp_cond) {
        sp8C = 0.1f;
    }
    Matrix_Scale(1.0f, sp8C, 1.0f / sp8C, 1);
    temp_v0_3 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDA380003;
    sp70 = temp_v0_3;
    sp70->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0_4 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xFA000080;
    temp_v0_4->words.w1 = ((this->regs[6] & 0xFF) << 8) | (this->regs[4] << 0x18) | ((this->regs[5] & 0xFF) << 0x10) | 0xFF;
    temp_v0_5 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xFB000000;
    temp_v0_5->words.w1 = ((this->regs[9] & 0xFF) << 8) | (this->regs[7] << 0x18) | ((this->regs[8] & 0xFF) << 0x10);
    temp_v0_6 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xDB060020;
    sp64 = temp_v0_6;
    sp64->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((s32) globalCtx->state.frames * -0x14) & 0x1FF, 0x20, 0x80);
    if (this->regs[12] != 0) {
        temp_v0_7 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0_7 + 8;
        temp_v0_7->words.w1 = (u32) &D_0407D650;
        temp_v0_7->words.w0 = 0xDE000000;
        return;
    }
    temp_v0_8 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0_8 + 8;
    temp_v0_8->words.w1 = (u32) D_0407D590;
    temp_v0_8->words.w0 = 0xDE000000;
}

void EffectSsFireTail_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    this->regs[0] = (s16) (s32) ((f32) this->regs[0] * 0.9f);
}

