struct _mips2c_stack_EffectSsDtBubble_Draw {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad28[0x8];                     /* maybe part of sp24[3]? */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EffectSsDtBubble_Init {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EffectSsDtBubble_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

static ? D_8097B1E0;                                /* unable to generate initializer */
static ? D_8097B1F0;                                /* unable to generate initializer */

s32 EffectSsDtBubble_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    s32 phi_v0;

    phi_v0 = (s32) &D_04091CE0;
    if (Rand_ZeroOne() < 0.5f) {
        phi_v0 = (s32) &D_04091BE0;
    }
    this->gfx = gSegments[(u32) (phi_v0 * 0x10) >> 0x1C] + (phi_v0 & 0xFFFFFF);
    Math_Vec3f_Copy((Vec3f *) this, (Vec3f *) initParamsx);
    Math_Vec3f_Copy(&this->velocity, initParamsx + 0xC);
    Math_Vec3f_Copy(&this->accel, initParamsx + 0x18);
    this->life = initParamsx->unk2E;
    if (initParamsx->unk34 == 0) {
        this->regs[0] = (s16) *(&D_8097B1E0 + (initParamsx->unk30 * 4));
        this->regs[1] = (s16) (&D_8097B1E0 + (initParamsx->unk30 * 4))->unk1;
        this->regs[2] = (s16) (&D_8097B1E0 + (initParamsx->unk30 * 4))->unk2;
        this->regs[3] = (s16) (&D_8097B1E0 + (initParamsx->unk30 * 4))->unk3;
        this->regs[4] = (s16) *(&D_8097B1F0 + (initParamsx->unk30 * 4));
        this->regs[5] = (s16) (&D_8097B1F0 + (initParamsx->unk30 * 4))->unk1;
        this->regs[6] = (s16) (&D_8097B1F0 + (initParamsx->unk30 * 4))->unk2;
        this->regs[7] = (s16) (&D_8097B1F0 + (initParamsx->unk30 * 4))->unk3;
    } else {
        this->regs[0] = (s16) initParamsx->unk24;
        this->regs[1] = (s16) initParamsx->unk25;
        this->regs[2] = (s16) initParamsx->unk26;
        this->regs[3] = (s16) initParamsx->unk27;
        this->regs[4] = (s16) initParamsx->unk28;
        this->regs[5] = (s16) initParamsx->unk29;
        this->regs[6] = (s16) initParamsx->unk2A;
        this->regs[7] = (s16) initParamsx->unk2B;
    }
    this->regs[8] = initParamsx->unk32;
    this->regs[9] = initParamsx->unk2C;
    this->draw = EffectSsDtBubble_Draw;
    this->update = EffectSsDtBubble_Update;
    this->regs[10] = initParamsx->unk2E;
    return 1;
}

void EffectSsDtBubble_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    f32 sp30;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_s1;

    temp_s1 = globalCtx->state.gfxCtx;
    sp30 = (f32) this->regs[9] * 0.004f;
    SysMatrix_InsertTranslation(this->pos.x, this->pos.y, this->pos.z, 0);
    Matrix_Scale(sp30, sp30, sp30, 1);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_v0;
    sp24->words.w1 = Matrix_NewMtx(temp_s1);
    func_8012C28C(temp_s1);
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFA000000;
    temp_v0_2->words.w1 = (((s32) (this->regs[3] * this->life) / (s32) this->regs[10]) & 0xFF) | (this->regs[0] << 0x18) | ((this->regs[1] & 0xFF) << 0x10) | ((this->regs[2] & 0xFF) << 8);
    temp_v0_3 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xFB000000;
    temp_v0_3->words.w1 = (((s32) (this->regs[7] * this->life) / (s32) this->regs[10]) & 0xFF) | (this->regs[4] << 0x18) | ((this->regs[5] & 0xFF) << 0x10) | ((this->regs[6] & 0xFF) << 8);
    temp_v0_4 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDB060020;
    temp_v0_4->words.w1 = (u32) this->gfx;
    temp_v0_5 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) &D_040301B0;
    temp_v0_5->words.w0 = 0xDE000000;
}

void EffectSsDtBubble_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    if (this->regs[8] == 1) {
        this->pos.x += (2.0f * Rand_ZeroOne()) - 1.0f;
        this->pos.z += (2.0f * Rand_ZeroOne()) - 1.0f;
    }
}
