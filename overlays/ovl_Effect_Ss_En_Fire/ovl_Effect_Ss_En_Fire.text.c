

s32 EffectSsEnFire_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    Vec3f *temp_s2;
    f32 temp_f6;

    temp_s2 = initParamsx + 4;
    Math_Vec3f_Copy(&this->pos, temp_s2);
    Math_Vec3f_Copy(&this->velocity, &D_801D15B0);
    Math_Vec3f_Copy(&this->accel, &D_801D15B0);
    this->life = 0x14;
    this->regs[2] = this->life;
    this->actor = initParamsx->unk0;
    temp_f6 = Rand_ZeroOne() * 20.0f;
    this->draw = EffectSsEnFire_Draw;
    this->update = EffectSsEnFire_Update;
    this->regs[3] = -0xF;
    this->regs[9] = (s16) (s32) temp_f6;
    if ((s32) initParamsx->unk16 < 0) {
        this->regs[5] = Math_Vec3f_Yaw(&initParamsx->unk0->world.pos, temp_s2) - initParamsx->unk0->shape.rot.y;
        this->regs[4] = Math_Vec3f_Pitch(&initParamsx->unk0->world.pos, temp_s2) - initParamsx->unk0->shape.rot.x;
        this->vec.z = Math_Vec3f_DistXYZ(temp_s2, &initParamsx->unk0->world.pos);
    }
    this->regs[0] = initParamsx->unk10;
    if ((initParamsx->unk12 & 0x8000) != 0) {
        this->regs[1] = initParamsx->unk10;
    } else {
        this->regs[1] = 0;
    }
    this->regs[6] = initParamsx->unk12 & 0x7FFF;
    this->regs[7] = initParamsx->unk16;
    this->regs[8] = initParamsx->unk14;
    return 1;
}

void EffectSsEnFire_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    s16 sp5E;
    Gfx *sp50;
    Gfx *sp44;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v1;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    s16 temp_a1;
    s32 temp_a0;
    u32 temp_a2;
    s16 phi_a1;

    temp_s0 = globalCtx->state.gfxCtx;
    SysMatrix_InsertTranslation(this->pos.x, this->pos.y, this->pos.z, 0);
    Matrix_RotateY((s16) (func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x8000), 1U);
    temp_f12 = (f32) this->regs[1] * 0.00005f * Math_SinS((s16) (this->life * 0x333));
    Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp50 = temp_v0;
    sp50->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_a1 = this->life - 5;
    phi_a1 = temp_a1;
    if ((s32) temp_a1 < 0) {
        phi_a1 = 0;
    }
    sp5E = phi_a1;
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v1 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xFB000000;
    temp_a0 = (u32) ((f32) phi_a1 * 12.7f) & 0xFF;
    temp_a2 = temp_a0 << 0x18;
    temp_v1->words.w1 = temp_a2;
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = temp_a2 | (temp_a0 << 0x10) | 0xFF;
    temp_v0_2->words.w0 = 0xFA000080;
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060020;
    sp44 = temp_v0_3;
    sp44->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((s32) this->regs[9] * -0x14) & 0x1FF, 0x20, 0x80);
    if (((this->regs[8] & 0x7FFF) != 0) || ((s32) this->life < 0x12)) {
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = (u32) &D_0407D650;
        temp_v0_5->words.w0 = 0xDE000000;
        return;
    }
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) D_0407D590;
    temp_v0_4->words.w0 = 0xDE000000;
}

void EffectSsEnFire_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    Actor *temp_v0;
    Actor *temp_v0_2;
    s16 temp_a1;
    s16 temp_v1;
    void *temp_v0_3;
    void *temp_v0_4;

    temp_v0 = this->actor;
    this->regs[9] += 1;
    if (temp_v0 != 0) {
        if ((s32) temp_v0->colorFilterTimer >= 0x16) {
            this->life += 1;
        }
        if (this->actor->update != 0) {
            temp_a1 = this->regs[0];
            Math_SmoothStepToS(&this->regs[1], temp_a1, 1, (s16) ((s32) temp_a1 >> 3), (s16) 0);
            temp_v1 = this->regs[7];
            if ((s32) temp_v1 < 0) {
                temp_v0_2 = this->actor;
                SysMatrix_InsertTranslation(temp_v0_2->world.pos.x, temp_v0_2->world.pos.y, temp_v0_2->world.pos.z, 0);
                Matrix_RotateY((s16) (this->regs[5] + this->actor->shape.rot.y), 1U);
                SysMatrix_InsertXRotation_s((s16) (this->regs[4] + this->actor->shape.rot.x), 1);
                SysMatrix_MultiplyVector3fByState(&this->vec, &this->pos);
                return;
            }
            if ((this->regs[8] & 0x8000) != 0) {
                temp_v0_3 = this->actor + (temp_v1 * 6);
                this->pos.x = (f32) temp_v0_3->unk144;
                this->pos.y = (f32) temp_v0_3->unk146;
                this->pos.z = (f32) temp_v0_3->unk148;
                return;
            }
            temp_v0_4 = this->actor + (temp_v1 * 0xC);
            this->pos.x = temp_v0_4->unk144;
            this->pos.y = temp_v0_4->unk148;
            this->pos.z = temp_v0_4->unk14C;
            return;
        }
        if (this->regs[6] != 0) {
            this->life = 0;
            return;
        }
        this->actor = NULL;
        // Duplicate return node #12. Try simplifying control flow for better match
    }
}

