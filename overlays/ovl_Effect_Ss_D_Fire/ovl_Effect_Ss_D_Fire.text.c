struct _mips2c_stack_EffectSsDFire_Draw {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0xC];                    /* maybe part of sp20[4]? */
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0xC];                    /* maybe part of sp30[4]? */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EffectSsDFire_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EffectSsDFire_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809791B0 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ObjectContext *sp18;                 /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

s32 func_809791B0(EffectSs *arg0, GlobalContext *arg1); /* static */
extern void D_060098A0;
static ? D_80979568;                                /* unable to generate initializer */

s32 func_809791B0(EffectSs *arg0, GlobalContext *arg1) {
    ObjectContext *sp18;
    ObjectContext *temp_a0;
    s16 temp_v0;

    temp_a0 = arg1 + 0x17D88;
    sp18 = temp_a0;
    temp_v0 = Object_GetIndex(temp_a0, 0xA);
    arg0->regs[9] = temp_v0;
    if (((s32) temp_v0 < 0) || (Object_IsLoaded(temp_a0, (s32) arg0->regs[9]) == 0)) {
        arg0->life = -1;
        arg0->draw = NULL;
        return 0;
    }
    return 1;
}

s32 EffectSsDFire_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    if (func_809791B0(this, globalCtx) != 0) {
        Math_Vec3f_Copy((Vec3f *) this, (Vec3f *) initParamsx);
        Math_Vec3f_Copy(&this->velocity, initParamsx + 0xC);
        Math_Vec3f_Copy(&this->accel, initParamsx + 0x18);
        this->gfx = &D_060098A0;
        this->life = (s16) initParamsx->unk_30;
        this->regs[0] = initParamsx->unk_24;
        this->draw = EffectSsDFire_Draw;
        this->update = EffectSsDFire_Update;
        this->regs[8] = initParamsx->unk_26;
        this->regs[1] = (globalCtx->state.frames & 3) ^ 3;
        this->regs[5] = initParamsx->unk_28;
        this->regs[7] = this->life - initParamsx->unk_2C;
        this->regs[6] = initParamsx->unk_2A;
        return 1;
    }
    return 0;
}

void EffectSsDFire_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    f32 sp40;
    Gfx *sp30;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GlobalContext *temp_a1;
    GraphicsContext *temp_s0;
    void *temp_a0;

    temp_a1 = globalCtx;
    temp_s0 = temp_a1->state.gfxCtx;
    globalCtx = temp_a1;
    if (func_809791B0(this, temp_a1) != 0) {
        temp_a0 = globalCtx->objectCtx.status[this->regs[9]].segment;
        *(gSegments + 0x18) = (u32) (temp_a0 + 0x80000000);
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w1 = (u32) temp_a0;
        temp_v0->words.w0 = 0xDB060018;
        sp40 = (f32) this->regs[0] / 100.0f;
        SysMatrix_InsertTranslation(this->pos.x, this->pos.y, this->pos.z, 0);
        Matrix_Scale(sp40, sp40, sp40, 1);
        SysMatrix_InsertMatrix(&globalCtx->mf_187FC, 1);
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDA380003;
        sp30 = temp_v0_2;
        sp30->words.w1 = Matrix_NewMtx(temp_s0);
        func_8012C974(temp_s0);
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = 0xFF000000;
        temp_v0_3->words.w0 = 0xFB000000;
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xFA000000;
        temp_v0_4->words.w1 = (this->regs[5] & 0xFF) | 0xFFFF3200;
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDB060020;
        sp20 = temp_v0_5;
        sp20->words.w1 = Lib_SegmentedToVirtual(*(&D_80979568 + (this->regs[1] * 4)));
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xDE000000;
        temp_v0_6->words.w1 = (u32) this->gfx;
    }
}

void EffectSsDFire_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    this->regs[1] += 1;
    this->regs[1] &= 3;
    this->regs[0] += this->regs[8];
    if ((s32) this->life < (s32) this->regs[7]) {
        this->regs[5] -= this->regs[6];
        if ((s32) this->regs[5] < 0) {
            this->regs[5] = 0;
            this->life = -1;
        }
    }
    func_809791B0(this, globalCtx);
}
