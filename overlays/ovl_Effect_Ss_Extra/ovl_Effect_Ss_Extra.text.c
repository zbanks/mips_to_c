struct _mips2c_stack_EffectSsExtra_Draw {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
    /* 0x30 */ char pad30[0x10];                    /* maybe part of sp2C[5]? */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EffectSsExtra_Init {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ ObjectContext *sp1C;                 /* inferred */
    /* 0x20 */ char pad20[0x4];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EffectSsExtra_Update {};       /* size 0x0 */

extern ? D_06000DC0;
static ? D_809808E0;                                /* unable to generate initializer */
static ? D_809808F0;                                /* unable to generate initializer */

s32 EffectSsExtra_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    s32 sp24;
    ObjectContext *sp1C;
    ObjectContext *temp_a0;
    s32 temp_v0;
    void *temp_v1;

    temp_a0 = &globalCtx->objectCtx;
    sp1C = temp_a0;
    temp_v0 = Object_GetIndex(temp_a0, 0xE7);
    if ((temp_v0 >= 0) && (sp24 = temp_v0, this = this, initParamsx = initParamsx, (Object_IsLoaded(temp_a0, temp_v0) != 0))) {
        temp_v1 = gSegments->unk18;
        gSegments->unk18 = (void *) (globalCtx->objectCtx.status[sp24].segment + 0x80000000);
        this->pos.x = initParamsx->unk0;
        this->pos.y = initParamsx->unk4;
        this->pos.z = initParamsx->unk8;
        this->velocity.x = initParamsx->unkC;
        this->velocity.y = initParamsx->unk10;
        this->velocity.z = initParamsx->unk14;
        this->accel.x = initParamsx->unk18;
        this->accel.y = initParamsx->unk1C;
        this->draw = EffectSsExtra_Draw;
        this->update = EffectSsExtra_Update;
        this->life = 0x32;
        this->accel.z = initParamsx->unk20;
        this->regs[2] = initParamsx->unk26;
        this->regs[1] = 5;
        this->regs[0] = (s16) sp24;
        this->regs[3] = initParamsx->unk24;
        gSegments->unk18 = temp_v1;
        return 1;
    }
    return 0;
}

void EffectSsExtra_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    f32 sp40;
    Gfx *sp2C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_s0;
    void *temp_a1;

    sp40 = (f32) this->regs[3] / 100.0f;
    temp_a1 = globalCtx->objectCtx.status[this->regs[0]].segment;
    temp_s0 = globalCtx->state.gfxCtx;
    *(gSegments + 0x18) = (u32) (temp_a1 + 0x80000000);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w1 = (u32) temp_a1;
    temp_v0->words.w0 = 0xDB060018;
    SysMatrix_InsertTranslation(this->pos.x, this->pos.y, this->pos.z, 0);
    Matrix_Scale(sp40, sp40, sp40, 1);
    func_8012C2DC(globalCtx->state.gfxCtx);
    SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp2C = temp_v0_2;
    sp2C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060020;
    temp_v0_3->words.w1 = Lib_SegmentedToVirtual(*(&D_809808F0 + (this->regs[2] * 4)));
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_4->words.w1 = (u32) &D_06000DC0;
}

void EffectSsExtra_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    s16 temp_v0;

    temp_v0 = this->regs[1];
    if (temp_v0 != 0) {
        this->regs[1] = temp_v0 - 1;
    } else {
        this->velocity.y = 0.0f;
    }
    if (this->regs[1] == 1) {
        globalCtx->interfaceCtx.unk_25C = (u16) *(&D_809808E0 + (this->regs[2] * 2));
    }
}
