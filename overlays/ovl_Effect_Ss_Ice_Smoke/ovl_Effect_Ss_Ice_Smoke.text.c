struct _mips2c_stack_EffectSsIceSmoke_Draw {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad48[0x18];
};                                                  /* size = 0x60 */

struct _mips2c_stack_EffectSsIceSmoke_Init {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EffectSsIceSmoke_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

s32 EffectSsIceSmoke_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    s16 temp_v0;

    Math_Vec3f_Copy((Vec3f *) this, (Vec3f *) initParamsx);
    Math_Vec3f_Copy(&this->velocity, initParamsx + 0xC);
    Math_Vec3f_Copy(&this->accel, initParamsx + 0x18);
    this->regs[0] = 0;
    temp_v0 = initParamsx->unk24;
    if ((s32) temp_v0 < 0) {
        this->regs[1] = (s16) -(s32) temp_v0;
    } else {
        this->regs[1] = temp_v0;
    }
    if ((s32) initParamsx->unk24 < 0) {
        this->regs[2] = 1;
        this->regs[3] = 2;
    } else {
        this->regs[2] = 3;
        this->regs[3] = 0xF;
    }
    this->life = 0x32;
    this->draw = EffectSsIceSmoke_Draw;
    this->update = EffectSsIceSmoke_Update;
    return 1;
}

void EffectSsIceSmoke_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    Gfx *sp44;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    Mtx *temp_v0_2;
    f32 temp_f12;
    s16 temp_v0;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v1 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xFA000000;
    temp_v1->words.w1 = (this->regs[0] & 0xFF) | 0xC3EBEB00;
    temp_v1_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v1_2 + 8;
    temp_v1_2->words.w0 = 0xDB060020;
    temp_v0 = this->life;
    sp44 = temp_v1_2;
    sp44->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, this->regs[2] * temp_v0, this->regs[3] * temp_v0, 0x20, 0x40, 1, 0U, 0U, 0x20, 0x20);
    SysMatrix_InsertTranslation(this->pos.x, this->pos.y, this->pos.z, 0);
    SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
    temp_f12 = (f32) this->regs[1] * 0.0001f;
    Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
    temp_v0_2 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    if (temp_v0_2 != 0) {
        temp_v1_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v1_3 + 8;
        temp_v1_3->words.w1 = (u32) temp_v0_2;
        temp_v1_3->words.w0 = 0xDA380003;
        temp_v1_4 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v1_4 + 8;
        temp_v1_4->words.w1 = (u32) &D_040510B0;
        temp_v1_4->words.w0 = 0xDE000000;
    }
}

void EffectSsIceSmoke_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    s16 temp_v0;

    if ((s32) this->life < 0xA) {
        Math_StepToS(this->regs, 0, 0xA);
        return;
    }
    temp_v0 = this->regs[0];
    if ((s32) temp_v0 < 0x64) {
        this->regs[0] = temp_v0 + 0xA;
    }
}
