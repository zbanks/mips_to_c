struct _mips2c_stack_EffectSsFhgFlash_Draw {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad28[0x1C];                    /* maybe part of sp24[8]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EffectSsFhgFlash_Init {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad20[0x10];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EffectSsFhgFlash_Update {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ char pad28[0x8];                     /* maybe part of sp24[3]? */
    /* 0x30 */ void *sp30;                          /* inferred */
    /* 0x34 */ char pad34[0x4];
    /* 0x38 */ Actor *sp38;                         /* inferred */
    /* 0x3C */ char pad3C[0x2];
    /* 0x3E */ s16 sp3E;                            /* inferred */
};                                                  /* size = 0x40 */

static ? D_8097CEC8;                                /* unable to generate initializer */
static void D_8097CF20;                             /* unable to generate initializer */

s32 EffectSsFhgFlash_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    ? sp20;

    sp20.unk0 = (f32) D_8097CEC8.unk0;
    sp20.unk4 = (f32) D_8097CEC8.unk4;
    sp20.unk8 = (f32) D_8097CEC8.unk8;
    this->actor = initParamsx->unk28;
    Math_Vec3f_Copy(&this->velocity, &D_801D15B0);
    Math_Vec3f_Copy(&this->accel, &D_801D15B0);
    this->life = (s32) (Rand_ZeroOne() * 10.0f) + 0x6F;
    this->regs[8] = (s32) Rand_ZeroFloat((f32) initParamsx->unk24) + initParamsx->unk24;
    this->regs[0] = 0xFF;
    this->draw = EffectSsFhgFlash_Draw;
    this->update = EffectSsFhgFlash_Update;
    this->regs[4] = (s16) initParamsx->unk26;
    if (initParamsx->unk26 != 0) {
        this->pos.x = sp20.unk0;
        this->pos.y = sp20.unk4;
        this->gfx = &D_8097CF20;
        this->pos.z = sp20.unk8;
        return 1;
    }
    this->pos.x = initParamsx->unk0;
    this->pos.y = initParamsx->unk4;
    this->gfx = &D_8097CF20;
    this->pos.z = initParamsx->unk8;
    return 1;
}

void EffectSsFhgFlash_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    f32 sp44;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_s0;

    temp_s0 = globalCtx->state.gfxCtx;
    sp44 = (f32) this->regs[8] / 100.0f;
    SysMatrix_InsertTranslation(this->pos.x, this->pos.y, this->pos.z, 0);
    Matrix_Scale(sp44, sp44, sp44, 1);
    if (this->regs[4] != 0) {
        func_8012C448(globalCtx->state.gfxCtx);
        SysMatrix_InsertXRotation_s(this->regs[3], 1);
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xE200001C;
        temp_v0->words.w1 = 0xC184DD8;
    } else {
        func_8012C2DC(globalCtx->state.gfxCtx);
        SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xE200001C;
        temp_v0_2->words.w1 = 0xC1849D8;
    }
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0;
    temp_v0_3->words.w0 = 0xE7000000;
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xFA000000;
    temp_v0_4->words.w1 = (this->regs[0] & 0xFF) | ~0xFF;
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = 0xFF9B00;
    temp_v0_5->words.w0 = 0xFB000000;
    SysMatrix_InsertZRotation_s(this->regs[3], 1);
    temp_v0_6 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xDA380003;
    sp24 = temp_v0_6;
    sp24->words.w1 = Matrix_NewMtx(temp_s0);
    temp_v0_7 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w0 = 0xDE000000;
    temp_v0_7->words.w1 = (u32) this->gfx;
}

void EffectSsFhgFlash_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    s16 sp3E;
    Actor *sp38;
    void *sp30;
    void *sp24;
    Actor *temp_v1;
    s16 temp_v0;
    s32 temp_a0;
    void *temp_v0_2;

    temp_v0 = this->regs[4];
    this->regs[3] = this->regs[3] + (s32) (Rand_ZeroOne() * 20000.0f) + 0x4000;
    if (temp_v0 == 1) {
        sp38 = globalCtx->actorCtx.actorList[2].first;
        sp3E = (s16) (s32) Rand_ZeroFloat(17.9f);
        temp_v0_2 = sp38 + (sp3E * 0xC);
        this->pos.x = randPlusMinusPoint5Scaled(10.0f) + temp_v0_2->unkBEC;
        sp24 = temp_v0_2;
        this->pos.y = randPlusMinusPoint5Scaled(15.0f) + sp24->unkBF0;
        this->pos.z = randPlusMinusPoint5Scaled(10.0f) + sp24->unkBF4;
    } else if (((s32) temp_v0 >= 2) && ((s32) temp_v0 < 7)) {
        temp_v1 = this->actor;
        temp_a0 = temp_v1->unk191 - 3;
        if (temp_a0 < 0) {
            sp30 = temp_v1 + (temp_v0 * 0x12C) + 0x2FF0;
        } else {
            sp30 = temp_v1 + (temp_v0 * 0x12C) + (temp_a0 * 0x14) + 0x2F00;
        }
        this->pos.x = randPlusMinusPoint5Scaled(70.0f) + sp30->unk0;
        this->pos.y = randPlusMinusPoint5Scaled(70.0f) + sp30->unk4;
        this->pos.z = randPlusMinusPoint5Scaled(70.0f) + sp30->unk8;
    }
    if ((s32) this->life < 0x64) {
        this->regs[0] += -0x32;
        if ((s32) this->regs[0] < 0) {
            this->regs[0] = 0;
            this->life = 0;
        }
    }
}
