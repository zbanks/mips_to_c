struct _mips2c_stack_EffectEnIceBlock_Draw {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EffectEnIceBlock_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EffectEnIceBlock_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A22D40 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ObjectContext *sp18;                 /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

s32 func_80A22D40(EffectSs *arg0, GlobalContext *arg1); /* static */
extern ? D_06000A38;

s32 func_80A22D40(EffectSs *arg0, GlobalContext *arg1) {
    ObjectContext *sp18;
    ObjectContext *temp_a0;
    s16 temp_v0;

    temp_a0 = arg1 + 0x17D88;
    sp18 = temp_a0;
    temp_v0 = Object_GetIndex(temp_a0, 0x167);
    arg0->regs[0] = temp_v0;
    if (((s32) temp_v0 < 0) || (Object_IsLoaded(temp_a0, (s32) arg0->regs[0]) == 0)) {
        arg0->life = -1;
        arg0->draw = NULL;
        return 0;
    }
    return 1;
}

s32 EffectEnIceBlock_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    f32 temp_f16;

    Math_Vec3f_Copy((Vec3f *) this, initParamsx + 4);
    Math_Vec3f_Copy(&this->velocity, initParamsx + 0x10);
    Math_Vec3f_Copy(&this->accel, initParamsx + 0x1C);
    this->regs[1] = initParamsx->unk_28;
    this->regs[2] = (s16) (s32) (Rand_ZeroOne() * 65535.0f);
    temp_f16 = Rand_ZeroOne() * 512.0f;
    this->life = 0x28;
    this->draw = EffectEnIceBlock_Draw;
    this->update = EffectEnIceBlock_Update;
    this->regs[3] = (s32) temp_f16 + 0x400;
    func_80A22D40(this, globalCtx);
    return 1;
}

void EffectEnIceBlock_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    f32 sp2C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_s2;

    temp_s2 = globalCtx->state.gfxCtx;
    if (func_80A22D40(this, globalCtx) != 0) {
        sp2C = (f32) this->regs[1] * 0.1f * 0.01f;
        temp_v0 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDB060018;
        temp_v0->words.w1 = (u32) globalCtx->objectCtx.status[this->regs[0]].segment;
        func_8012C2DC(globalCtx->state.gfxCtx);
        SysMatrix_InsertTranslation(this->pos.x, this->pos.y, this->pos.z, 0);
        Matrix_Scale(sp2C, sp2C, sp2C, 1);
        SysMatrix_InsertMatrix(&globalCtx->mf_187FC, 1);
        SysMatrix_InsertZRotation_s(this->regs[2], 1);
        temp_v0_2 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = &temp_v0_2[1];
        temp_v0_2->words.w0 = 0xDA380003;
        temp_v0_2->words.w1 = Matrix_NewMtx(temp_s2);
        temp_v0_3 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xDE000000;
        temp_v0_3->words.w1 = (u32) &D_06000A38;
    }
}

void EffectEnIceBlock_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    this->regs[2] += this->regs[3];
    func_80A22D40(this, globalCtx);
}
