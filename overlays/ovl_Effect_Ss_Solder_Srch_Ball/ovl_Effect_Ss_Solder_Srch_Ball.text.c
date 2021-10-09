struct _mips2c_stack_EffectSsSolderSrchBall_Draw {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x10];                   /* maybe part of sp24[5]? */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EffectSsSolderSrchBall_Init {}; /* size 0x0 */

struct _mips2c_stack_EffectSsSolderSrchBall_Update {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Actor *sp1C;                         /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

s32 func_800C5A64(f32, f32, CollisionContext *, EffectSs *, ?, GlobalContext *); /* extern */

s32 EffectSsSolderSrchBall_Init(GlobalContext *globalCtx, u32 index, EffectSs *this, void *initParamsx) {
    this->pos.x = initParamsx->unk_0;
    this->pos.y = initParamsx->unk_4;
    this->pos.z = initParamsx->unk_8;
    this->velocity.x = initParamsx->unk_C;
    this->velocity.y = initParamsx->unk_10;
    this->velocity.z = initParamsx->unk_14;
    this->accel.x = initParamsx->unk_18;
    this->accel.y = initParamsx->unk_1C;
    this->update = EffectSsSolderSrchBall_Update;
    this->accel.z = initParamsx->unk_20;
    if ((initParamsx->unk_2C & 1) == 0) {
        this->draw = EffectSsSolderSrchBall_Draw;
    }
    this->life = 0xA;
    this->regs[1] = initParamsx->unk_24;
    this->regs[0] = initParamsx->unk_2C;
    this->actor = initParamsx->unk_28;
    return 1;
}

void EffectSsSolderSrchBall_Draw(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    f32 sp44;
    Gfx *sp38;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_s0;
    f32 temp_f18;
    f32 temp_f6;
    u32 temp_t3;
    f32 phi_f18;

    temp_f6 = (f32) this->regs[1];
    temp_s0 = globalCtx->state.gfxCtx;
    this = this;
    sp44 = temp_f6 / 100.0f;
    func_8012C28C(temp_s0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    SysMatrix_InsertTranslation(this->pos.x, this->pos.y, this->pos.z, 0);
    Matrix_Scale(sp44, sp44, sp44, 1);
    temp_s0->polyXlu.p = Gfx_CallSetupDL(temp_s0->polyXlu.p, 0x14U);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp38 = temp_v0;
    sp38->words.w1 = Lib_SegmentedToVirtual((void *) &D_04079B10);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) D_0407AB10;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0;
    temp_v0_3->words.w0 = 0xE7000000;
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = -1;
    temp_v0_4->words.w0 = 0xFA000000;
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = 0xFAB4FFFF;
    temp_v0_5->words.w0 = 0xFB000000;
    SysMatrix_InsertMatrix(&globalCtx->mf_187FC, 1);
    temp_t3 = globalCtx->state.frames;
    temp_f18 = (f32) temp_t3;
    phi_f18 = temp_f18;
    if ((s32) temp_t3 < 0) {
        phi_f18 = temp_f18 + 4294967296.0f;
    }
    SysMatrix_InsertZRotation_f(phi_f18 * 20.0f * 0.017453292f, 1);
    temp_v0_6 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xDA380003;
    sp24 = temp_v0_6;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_7 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = (u32) D_0407AB58;
    temp_v0_7->words.w0 = 0xDE000000;
}

void EffectSsSolderSrchBall_Update(GlobalContext *globalCtx, u32 index, EffectSs *this) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    Actor *sp1C;
    Actor *temp_v0;
    Actor *temp_v1;
    EffectSs *temp_a1;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;

    temp_a1 = this;
    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    temp_f2 = temp_v0->world.pos.x - temp_a1->pos.x;
    temp_v1 = temp_a1->actor;
    temp_f14 = temp_v0->world.pos.y - temp_a1->pos.y;
    temp_f12 = temp_v0->world.pos.z - temp_a1->pos.z;
    if ((s32) temp_a1->regs[0] >= 2) {
        if ((sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < 10.0f) && (sqrtf(temp_f14 * temp_f14) < 10.0f)) {
            temp_v1->id = 1;
            return;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return;
    }
    sp1C = temp_v1;
    this = temp_a1;
    sp28 = temp_f2;
    sp20 = temp_f12;
    sp24 = temp_f14;
    if (func_800C5A64(temp_f12, temp_f14, &globalCtx->colCtx, temp_a1, 0x41F00000, globalCtx) == 0) {
        if ((sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < 40.0f) && (sqrtf(temp_f14 * temp_f14) < 80.0f)) {
            temp_v1->id = 1;
            return;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return;
    }
    if ((s32) this->life >= 2) {
        this->life = 1;
    }
}
