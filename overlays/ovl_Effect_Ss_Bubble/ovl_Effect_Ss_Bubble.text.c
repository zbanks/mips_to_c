? func_800C4058(GlobalContext *, CollisionContext *, CollisionPoly **, EffectSs *); /* extern */
static ? D_80979AB4;                                /* unable to generate initializer */



s32 EffectSsBubble_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    f32 temp_f4;
    s32 phi_v0;

    phi_v0 = (s32) &D_04091CE0;
    if (Rand_ZeroOne() < 0.5f) {
        phi_v0 = (s32) &D_04091BE0;
    }
    this->gfx = gSegments[(u32) (phi_v0 * 0x10) >> 0x1C] + (phi_v0 & 0xFFFFFF);
    this->pos.x = ((Rand_ZeroOne() - 0.5f) * initParamsx->unk14) + initParamsx->unk0;
    this->pos.y = ((Rand_ZeroOne() - 0.5f) * initParamsx->unk10) + initParamsx->unkC + initParamsx->unk4;
    this->pos.z = ((Rand_ZeroOne() - 0.5f) * initParamsx->unk14) + initParamsx->unk8;
    Math_Vec3f_Copy(&this->vec, &this->pos);
    this->life = 1;
    temp_f4 = (Rand_ZeroOne() * 0.5f) + 1.0f;
    this->draw = EffectSsBubble_Draw;
    this->update = EffectSsBubble_Update;
    this->regs[0] = (s16) (s32) (temp_f4 * initParamsx->unk18 * 100.0f);
    return 1;
}

void EffectSsBubble_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    f32 sp30;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_s0;

    temp_s0 = globalCtx->state.gfxCtx;
    sp30 = (f32) this->regs[0] / 100.0f;
    SysMatrix_InsertTranslation(this->pos.x, this->pos.y, this->pos.z, 0);
    Matrix_Scale(sp30, sp30, sp30, 1);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_v0;
    sp24->words.w1 = Matrix_NewMtx(temp_s0);
    func_8012C28C(temp_s0);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = -1;
    temp_v0_2->words.w0 = 0xFA000000;
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xFB000000;
    temp_v0_3->words.w1 = 0x96969600;
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDB060020;
    temp_v0_4->words.w1 = (u32) this->gfx;
    temp_v0_5 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) &D_040301B0;
    temp_v0_5->words.w0 = 0xDE000000;
}

void EffectSsBubble_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    WaterBox *sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    CollisionPoly *sp3C;
    u32 sp38;
    f32 sp30;
    CollisionContext *sp2C;
    CollisionContext *temp_a1;
    f32 *temp_a1_2;
    f32 *temp_t6;
    f32 temp_f6;
    s16 temp_a0;
    s16 temp_s1;
    s16 temp_v1;
    u32 temp_v0;

    temp_a1 = &globalCtx->colCtx;
    temp_t6 = &sp50;
    sp50 = this->pos.y;
    sp2C = temp_a1;
    if (func_800CA1AC(globalCtx, temp_a1, this->pos.x, this->pos.z, temp_t6, &sp54) == 0) {
        this->life = -1;
        return;
    }
    temp_a1_2 = &sp44;
    if (sp50 < this->pos.y) {
        sp48 = sp50;
        sp44 = this->pos.x;
        sp4C = this->pos.z;
        EffectSsGRipple_Spawn(globalCtx, (Vec3f *) temp_a1_2, 0, 0x50, (s16) 0);
        this->life = -1;
        return;
    }
    if (((globalCtx->gameplayFrames + index) & 7) == 0) {
        func_800C4058(globalCtx, sp2C, &sp3C, this);
        temp_v0 = func_800C9E18(sp2C, sp3C, 0x32);
        sp38 = temp_v0;
        if ((temp_v0 != 0) && (func_800C9D8C(sp2C, sp3C, 0x32) == 0)) {
            temp_v1 = func_800C9E40(sp2C, sp3C, 0x32) << 0xA;
            temp_s1 = temp_v1;
            temp_a0 = temp_v1;
            sp30 = *(&D_80979AB4 + (sp38 * 4));
            this->regs[1] = (s16) (s32) (Math_SinS(temp_a0) * sp30);
            this->regs[2] = (s16) (s32) (Math_CosS(temp_s1) * sp30);
        }
    }
    this->vec.x += (f32) this->regs[1] / 100.0f;
    this->vec.z += (f32) this->regs[2] / 100.0f;
    this->pos.x = ((Rand_ZeroOne() * 0.5f) - 0.25f) + this->vec.x;
    this->accel.y = (Rand_ZeroOne() - 0.3f) * 0.2f;
    temp_f6 = Rand_ZeroOne() * 0.5f;
    this->life += 1;
    this->pos.z = (temp_f6 - 0.25f) + this->vec.z;
}

