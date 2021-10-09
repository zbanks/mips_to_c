static ? D_80979138;                                /* unable to generate initializer */



s32 EffectSsGSpk_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    Math_Vec3f_Copy(&this->pos, initParamsx + 4);
    Math_Vec3f_Copy(&this->velocity, initParamsx + 0x10);
    Math_Vec3f_Copy(&this->accel, initParamsx + 0x1C);
    this->gfx = (void *) &D_04037850;
    if (initParamsx->unk34 == 0) {
        this->life = 0xA;
        this->vec.x = initParamsx->unk4 - initParamsx->unk0->world.pos.x;
        this->vec.y = initParamsx->unk8 - initParamsx->unk0->world.pos.y;
        this->update = func_80978F40;
        this->vec.z = initParamsx->unkC - initParamsx->unk0->world.pos.z;
    } else {
        this->life = 5;
        this->update = func_80979068;
    }
    this->draw = EffectSsGSpk_Draw;
    this->regs[0] = (s16) initParamsx->unk28;
    this->regs[1] = (s16) initParamsx->unk29;
    this->regs[2] = (s16) initParamsx->unk2A;
    this->regs[3] = (s16) initParamsx->unk2B;
    this->regs[4] = (s16) initParamsx->unk2C;
    this->regs[5] = (s16) initParamsx->unk2D;
    this->regs[6] = (s16) initParamsx->unk2E;
    this->regs[8] = 0;
    this->regs[7] = (s16) initParamsx->unk2F;
    this->regs[9] = initParamsx->unk30;
    this->regs[10] = initParamsx->unk32;
    this->actor = initParamsx->unk0;
    return 1;
}

void EffectSsGSpk_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    MtxF sp10C;
    MtxF spCC;
    MtxF sp8C;
    MtxF sp4C;
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
    SkinMatrix_SetTranslate(&sp10C, this->pos.x, this->pos.y, this->pos.z);
    SkinMatrix_SetScale(&spCC, temp_f0, temp_f0, 1.0f);
    SkinMatrix_MtxFMtxFMult(&sp10C, &globalCtx->mf_187FC, &sp4C);
    SkinMatrix_MtxFMtxFMult(&sp4C, &spCC, &sp8C);
    temp_v0 = SkinMatrix_MtxFToNewMtx(temp_s0, &sp8C);
    if (temp_v0 != 0) {
        temp_v1 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v1 + 8;
        temp_v1->words.w1 = (u32) temp_v0;
        temp_v1->words.w0 = 0xDA380003;
        temp_v1_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v1_2 + 8;
        temp_v1_2->words.w0 = 0xDB060020;
        sp30 = temp_v1_2;
        sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80979138 + (this->regs[8] * 4)));
        func_8012C974(temp_s0);
        temp_v1_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v1_3 + 8;
        temp_v1_3->words.w0 = 0xFA000000;
        temp_v1_3->words.w1 = ((this->regs[2] & 0xFF) << 8) | (this->regs[0] << 0x18) | ((this->regs[1] & 0xFF) << 0x10) | 0xFF;
        temp_v1_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v1_4 + 8;
        temp_v1_4->words.w0 = 0xFB000000;
        temp_v1_4->words.w1 = (this->regs[7] & 0xFF) | (this->regs[4] << 0x18) | ((this->regs[5] & 0xFF) << 0x10) | ((this->regs[6] & 0xFF) << 8);
        temp_v1_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v1_5 + 8;
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

