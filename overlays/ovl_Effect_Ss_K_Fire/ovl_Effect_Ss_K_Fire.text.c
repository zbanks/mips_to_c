struct _mips2c_stack_EffectSsKFire_Draw {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad48[0x8];                     /* maybe part of sp44[3]? */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad58[0x8];
};                                                  /* size = 0x60 */

struct _mips2c_stack_EffectSsKFire_Init {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EffectSsKFire_Update {};       /* size 0x0 */

s32 EffectSsKFire_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    this->pos.x = initParamsx->unk0;
    this->pos.y = initParamsx->unk4;
    this->pos.z = initParamsx->unk8;
    this->velocity.x = initParamsx->unkC;
    this->velocity.y = initParamsx->unk10;
    this->velocity.z = initParamsx->unk14;
    this->accel.x = initParamsx->unk18;
    this->accel.y = initParamsx->unk1C;
    this->life = 0x64;
    this->accel.z = initParamsx->unk20;
    this->regs[0] = 0xFF;
    this->regs[6] = initParamsx->unk24;
    this->regs[2] = (s16) (s32) (Rand_ZeroFloat(5.0f) - 25.0f);
    this->draw = EffectSsKFire_Draw;
    this->update = EffectSsKFire_Update;
    this->regs[3] = (s16) initParamsx->unk26;
    return 1;
}

void EffectSsKFire_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    f32 sp54;
    f32 sp50;
    Gfx *sp44;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_s1;

    temp_s1 = globalCtx->state.gfxCtx;
    sp54 = (f32) this->regs[5] / 10000.0f;
    sp50 = (f32) this->regs[4] / 10000.0f;
    SysMatrix_InsertTranslation(this->pos.x, this->pos.y, this->pos.z, 0);
    Matrix_Scale(sp54, sp50, sp54, 1);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp44 = temp_v0;
    sp44->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, this->regs[2] * globalCtx->state.frames, 0x20, 0x80);
    if ((s32) this->regs[3] >= 0x64) {
        temp_v0_2 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFA008080;
        temp_v0_2->words.w1 = (this->regs[0] & 0xFF) | 0xFFFF0000;
        temp_v0_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = 0xFF0A0000;
        temp_v0_3->words.w0 = 0xFB000000;
    } else {
        temp_v0_4 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xFA008080;
        temp_v0_4->words.w1 = (this->regs[0] & 0xFF) | ~0xFF;
        temp_v0_5 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = 0xFFFF00;
        temp_v0_5->words.w0 = 0xFB000000;
    }
    temp_v0_6 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w1 = 0;
    temp_v0_6->words.w0 = 0xE7000000;
    SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
    if ((index & 1) != 0) {
        SysMatrix_InsertYRotation_f(3.1415927f, 1);
    }
    temp_v0_7 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w0 = 0xDA380003;
    temp_v0_7->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_8 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v0_8 + 8;
    temp_v0_8->words.w0 = 0xDE000000;
    temp_v0_8->words.w1 = (u32) D_0407D590;
}

void EffectSsKFire_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;

    temp_v0 = this->regs[5];
    temp_v1 = this->regs[6];
    if ((s32) temp_v0 < (s32) temp_v1) {
        this->regs[5] = temp_v0 + 4;
        this->regs[4] += 4;
        if ((s32) temp_v1 < (s32) this->regs[5]) {
            this->regs[5] = temp_v1;
            if (this->regs[3] != 3) {
                this->regs[4] = temp_v1;
            }
        }
    } else {
        temp_v0_2 = this->regs[0];
        if ((s32) temp_v0_2 > 0) {
            this->regs[0] = temp_v0_2 - 0xA;
            if ((s32) this->regs[0] <= 0) {
                this->regs[0] = 0;
                this->life = 0;
            }
        }
    }
    if (this->regs[3] == 3) {
        this->regs[4] += 1;
    }
}
