struct _mips2c_stack_EffectSsGSpk_Draw {
    /* 0x000 */ char pad_0[0x30];
    /* 0x030 */ Gfx *sp30;                          /* inferred */
    /* 0x034 */ char pad_34[0x10];                  /* maybe part of sp30[5]? */
    /* 0x044 */ f32 sp44;                           /* inferred */
    /* 0x048 */ char pad_48[0x4];
    /* 0x04C */ ? sp4C;                             /* inferred */
    /* 0x04C */ char pad_4C[0x40];
    /* 0x08C */ ? sp8C;                             /* inferred */
    /* 0x08C */ char pad_8C[0x40];
    /* 0x0CC */ ? spCC;                             /* inferred */
    /* 0x0CC */ char pad_CC[0x40];
    /* 0x10C */ ? sp10C;                            /* inferred */
    /* 0x10C */ char pad_10C[0x44];
};                                                  /* size = 0x150 */

struct _mips2c_stack_EffectSsGSpk_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80978F40 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80979068 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

static ? D_80979138;                                /* unable to generate initializer */

s32 EffectSsGSpk_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    Math_Vec3f_Copy((Vec3f *) this, initParamsx + 4);
    Math_Vec3f_Copy(&this->velocity, initParamsx + 0x10);
    Math_Vec3f_Copy(&this->accel, initParamsx + 0x1C);
    this->gfx = (void *) &D_04037850;
    if (initParamsx->unk_34 == 0) {
        this->life = 0xA;
        this->vec.x = initParamsx->unk_4 - initParamsx->unk_0->world.pos.x;
        this->vec.y = initParamsx->unk_8 - initParamsx->unk_0->world.pos.y;
        this->update = func_80978F40;
        this->vec.z = initParamsx->unk_C - initParamsx->unk_0->world.pos.z;
    } else {
        this->life = 5;
        this->update = func_80979068;
    }
    this->draw = EffectSsGSpk_Draw;
    this->regs[0] = (s16) initParamsx->unk_28;
    this->regs[1] = (s16) initParamsx->unk_29;
    this->regs[2] = (s16) initParamsx->unk_2A;
    this->regs[3] = (s16) initParamsx->unk_2B;
    this->regs[4] = (s16) initParamsx->unk_2C;
    this->regs[5] = (s16) initParamsx->unk_2D;
    this->regs[6] = (s16) initParamsx->unk_2E;
    this->regs[8] = 0;
    this->regs[7] = (s16) initParamsx->unk_2F;
    this->regs[9] = initParamsx->unk_30;
    this->regs[10] = initParamsx->unk_32;
    this->actor = initParamsx->unk_0;
    return 1;
}

void EffectSsGSpk_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    ? sp10C;
    ? spCC;
    ? sp8C;
    ? sp4C;
    f32 sp44;
    Gfx *sp30;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    GraphicsContext *temp_s0;
    Mtx *temp_v0;
    f32 temp_f0;

    temp_s0 = globalCtx->state.gfxCtx;
    temp_f0 = (f32) this->regs[9] * 0.0025f;
    sp44 = temp_f0;
    SkinMatrix_SetTranslate((MtxF *) &sp10C, this->pos.x, this->pos.y, this->pos.z);
    SkinMatrix_SetScale((MtxF *) &spCC, temp_f0, temp_f0, 1.0f);
    SkinMatrix_MtxFMtxFMult((MtxF *) &sp10C, &globalCtx->mf_187FC, (MtxF *) &sp4C);
    SkinMatrix_MtxFMtxFMult((MtxF *) &sp4C, (MtxF *) &spCC, (MtxF *) &sp8C);
    temp_v0 = SkinMatrix_MtxFToNewMtx(temp_s0, (MtxF *) &sp8C);
    if (temp_v0 != 0) {
        temp_v1 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v1[1];
        temp_v1->words.w1 = (u32) temp_v0;
        temp_v1->words.w0 = 0xDA380003;
        temp_v1_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v1_2[1];
        temp_v1_2->words.w0 = 0xDB060020;
        sp30 = temp_v1_2;
        sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80979138 + (this->regs[8] * 4)));
        func_8012C974(temp_s0);
        temp_v1_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v1_3[1];
        temp_v1_3->words.w0 = 0xFA000000;
        temp_v1_3->words.w1 = ((this->regs[2] & 0xFF) << 8) | (this->regs[0] << 0x18) | ((this->regs[1] & 0xFF) << 0x10) | 0xFF;
        temp_v1_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v1_4[1];
        temp_v1_4->words.w0 = 0xFB000000;
        temp_v1_4->words.w1 = (this->regs[7] & 0xFF) | (this->regs[4] << 0x18) | ((this->regs[5] & 0xFF) << 0x10) | ((this->regs[6] & 0xFF) << 8);
        temp_v1_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v1_5[1];
        temp_v1_5->words.w0 = 0xDE000000;
        temp_v1_5->words.w1 = (u32) this->gfx;
    }
}

void func_80978F40(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    Actor *temp_v0;

    this->accel.x = (Rand_ZeroOne() - 0.5f) * 3.0f;
    temp_v0 = this->actor;
    this->accel.z = (Rand_ZeroOne() - 0.5f) * 3.0f;
    if ((temp_v0 != 0) && (temp_v0->category == 3) && (temp_v0->update != 0)) {
        this->pos.x = temp_v0->world.pos.x + this->vec.x;
        this->pos.y = temp_v0->world.pos.y + this->vec.y;
        this->pos.z = temp_v0->world.pos.z + this->vec.z;
        if (temp_v0->yDistToWater >= 20.0f) {
            this->life = 0;
        }
    }
    this->regs[8] += 1;
    this->vec.x += this->accel.x;
    this->vec.z += this->accel.z;
    this->regs[8] &= 3;
    this->regs[9] += this->regs[10];
}

void func_80979068(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    Actor *temp_v0;
    Actor *temp_v0_2;

    temp_v0 = this->actor;
    if ((temp_v0 != 0) && (temp_v0->category == 3) && (temp_v0->update != 0)) {
        temp_v0_2 = this->actor;
        this->pos.x += Math_SinS(temp_v0->world.rot.y) * temp_v0_2->speedXZ;
        this->pos.z += Math_CosS(temp_v0_2->world.rot.y) * this->actor->speedXZ;
    }
    this->regs[8] += 1;
    this->regs[9] += this->regs[10];
    this->regs[8] &= 3;
}
