struct _mips2c_stack_EffectSsSibuki_Draw {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x8];                    /* maybe part of sp24[3]? */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EffectSsSibuki_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EffectSsSibuki_Update {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

static f32 D_8097C098[3] = {0.1f, 0.01f, 0.01f};    /* const */

s32 EffectSsSibuki_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    GameInfo *temp_v1;
    s32 phi_v0;

    this->pos.x = initParamsx->unk_0;
    this->pos.y = initParamsx->unk_4;
    this->pos.z = initParamsx->unk_8;
    this->velocity.x = initParamsx->unk_C;
    this->velocity.y = initParamsx->unk_10;
    this->velocity.z = initParamsx->unk_14;
    this->accel.x = initParamsx->unk_18;
    this->accel.y = initParamsx->unk_1C;
    this->accel.z = initParamsx->unk_20;
    phi_v0 = (s32) &D_04091BE0;
    if (gGameInfo->data[1250] != 0) {
        phi_v0 = (s32) &D_04091CE0;
    }
    this->gfx = gSegments[(u32) (phi_v0 * 0x10) >> 0x1C] + (phi_v0 & 0xFFFFFF);
    temp_v1 = gGameInfo;
    this->life = temp_v1->data[1313] + (s32) (Rand_ZeroOne() * (500.0f + (f32) temp_v1->data[1312]) * 0.01f) + 0xA;
    this->draw = EffectSsSibuki_Draw;
    this->update = EffectSsSibuki_Update;
    this->regs[8] = initParamsx->unk_24 + 1;
    this->regs[9] = initParamsx->unk_26;
    this->regs[0] = 0x64;
    this->regs[1] = 0x64;
    this->regs[2] = 0x64;
    this->regs[3] = 0x64;
    this->regs[4] = 0xFF;
    this->regs[5] = 0xFF;
    this->regs[6] = 0xFF;
    this->regs[7] = 0xFF;
    this->regs[10] = initParamsx->unk_28;
    return 1;
}

void EffectSsSibuki_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    f32 sp30;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_s1;

    temp_s1 = globalCtx->state.gfxCtx;
    sp30 = (f32) this->regs[10] / 100.0f;
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
    temp_v0_2->words.w1 = (this->regs[3] & 0xFF) | (this->regs[0] << 0x18) | ((this->regs[1] & 0xFF) << 0x10) | ((this->regs[2] & 0xFF) << 8);
    temp_v0_3 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xFB000000;
    temp_v0_3->words.w1 = (this->regs[7] & 0xFF) | (this->regs[4] << 0x18) | ((this->regs[5] & 0xFF) << 0x10) | ((this->regs[6] & 0xFF) << 8);
    temp_v0_4 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDB060020;
    temp_v0_4->words.w1 = (u32) this->gfx;
    temp_v0_5 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) &D_040301B0;
    temp_v0_5->words.w0 = 0xDE000000;
}

void EffectSsSibuki_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    f32 sp28;
    s16 sp26;
    GameInfo *temp_v0_2;
    GameInfo *temp_v0_3;
    GameInfo *temp_v0_4;
    f32 temp_f2;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_5;
    f32 phi_f2;

    if (this->pos.y <= globalCtx->actorCtx.actorList[2].first->floorHeight) {
        this->life = 0;
    }
    temp_v0 = this->regs[8];
    if (temp_v0 != 0) {
        this->regs[8] = temp_v0 - 1;
        if (this->regs[8] == 0) {
            sp26 = func_800DFC68(Play_GetCamera(globalCtx, 0));
            temp_v0_2 = gGameInfo;
            temp_f2 = (((f32) temp_v0_2->data[1271] + 20.0f) * (0.1f * Rand_ZeroOne())) + ((200.0f + (f32) temp_v0_2->data[1268]) * 0.01f);
            phi_f2 = temp_f2;
            if (this->regs[9] != 0) {
                phi_f2 = temp_f2 * -1.0f;
            }
            sp28 = phi_f2;
            this->velocity.x = Math_CosS(sp26) * phi_f2;
            this->velocity.z = -Math_SinS(sp26) * phi_f2;
            temp_v0_3 = gGameInfo;
            this->velocity.y = (((f32) temp_v0_3->data[1272] + 20.0f) * (0.1f * Rand_ZeroOne())) + ((700.0f + (f32) temp_v0_3->data[1269]) * 0.01f);
            temp_v0_4 = gGameInfo;
            this->accel.y = ((f32) temp_v0_4->data[1273] * (0.1f * Rand_ZeroOne())) + ((-100.0f + (f32) temp_v0_4->data[1270]) * 0.01f);
            temp_a0 = gGameInfo->data[1251];
            if (temp_a0 != 0) {
                this->velocity.x *= (f32) temp_a0 * 0.01f;
                this->velocity.y *= (f32) gGameInfo->data[1251] * 0.01f;
                this->velocity.z *= (f32) gGameInfo->data[1251] * 0.01f;
                this->accel.y *= (f32) gGameInfo->data[1252] * 0.01f;
                return;
            }
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return;
    }
    temp_v0_5 = this->regs[10];
    if (temp_v0_5 != 0) {
        this->regs[10] = (temp_v0_5 - gGameInfo->data[1274]) - 3;
    }
}
