struct _mips2c_stack_func_800AE2A0 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800AE434 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ GraphicsContext *sp1C;               /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800AE5A0 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ GraphicsContext *sp18;               /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800AE5E4 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800AE778 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ GraphicsContext *sp1C;               /* inferred */
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800AE8EC {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ GraphicsContext *sp18;               /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

void func_800AE2A0(void **arg0, void *arg1, s16 arg2, s16 arg3); /* static */
void func_800AE5E4(void **arg0, void *arg1, s16 arg2, s16 arg3); /* static */

void func_800AE2A0(void **arg0, void *arg1, s16 arg2, s16 arg3) {
    void *sp20;
    void *sp18;
    f32 temp_f0;
    s32 temp_a0;
    void *temp_t0;
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;

    temp_t0 = *arg0;
    temp_v0 = temp_t0->unk_2B0;
    sp18 = temp_t0;
    sp20 = temp_v0;
    temp_f0 = fabsf(Math_CosS((s16) ((0x8000 / (s32) arg3) * arg2)));
    temp_v0->unk_0 = 0xE7000000;
    temp_v0->unk_4 = 0;
    temp_v0_2 = temp_v0 + 8;
    if (arg1 == 0) {
        temp_v0_2->unk_4 = 0xFF000000;
        temp_v0_2->unk_0 = 0xF8000000;
        phi_v0 = temp_v0_2 + 8;
    } else {
        temp_v0_2->unk_0 = 0xF8000000;
        temp_v0_2->unk_4 = (s32) ((arg1->unk_0 << 0x18) | (arg1->unk_1 << 0x10) | (arg1->unk_2 << 8) | arg1->unk_3);
        phi_v0 = temp_v0_2 + 8;
    }
    phi_v0->unk_0 = 0xDB080000;
    temp_a0 = (0x1F400 / (s32) ((s16) (s32) (temp_f0 * 3000.0f) + 0x5DC)) & 0xFFFF;
    phi_v0->unk_4 = (s32) ((temp_a0 << 0x10) | temp_a0);
    temp_t0->unk_2B0 = (void *) (phi_v0 + 8);
}

void func_800AE434(GlobalContext *globalCtx, Color_RGBA8 *color, s16 sParm3, s16 sParm4) {
    GraphicsContext *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_t0;
    f32 temp_f2;
    f32 temp_f6;
    s32 temp_a0;

    temp_t0 = globalCtx->state.gfxCtx;
    sp1C = temp_t0;
    temp_f2 = Math_CosS((s16) ((0x4000 / (s32) sParm4) * sParm3));
    temp_v0 = temp_t0->polyOpa.p;
    temp_v0->words.w0 = 0xE7000000;
    temp_v0->words.w1 = 0;
    temp_v0_2 = &temp_v0[1];
    temp_v0_2->words.w0 = 0xF8000000;
    temp_v0_2->words.w1 = (color->r << 0x18) | (color->g << 0x10) | (color->b << 8) | color->a;
    temp_v0_3 = &temp_v0_2[1];
    temp_f6 = fabsf(temp_f2) * 2800.0f;
    temp_v0_3->words.w0 = 0xDB080000;
    temp_a0 = (0x1F400 / (s32) ((s16) (s32) temp_f6 + 0x6A4)) & 0xFFFF;
    temp_v0_3->words.w1 = temp_a0 | (temp_a0 << 0x10);
    temp_t0->polyOpa.p = &temp_v0_3[1];
}

void func_800AE5A0(GlobalContext *globalCtx) {
    GraphicsContext *sp18;
    Gfx *temp_v1;
    GraphicsContext *temp_a2;

    temp_a2 = globalCtx->state.gfxCtx;
    temp_v1 = temp_a2->polyOpa.p;
    temp_a2->polyOpa.p = &temp_v1[1];
    temp_v1->words.w1 = 0;
    temp_v1->words.w0 = 0xE7000000;
    sp18 = temp_a2;
    temp_a2->polyOpa.p = func_801660B8(globalCtx, temp_a2->polyOpa.p);
}

void func_800AE5E4(void **arg0, void *arg1, s16 arg2, s16 arg3) {
    void *sp20;
    void *sp18;
    f32 temp_f0;
    s32 temp_a0;
    void *temp_t0;
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;

    temp_t0 = *arg0;
    temp_v0 = temp_t0->unk_2C0;
    sp18 = temp_t0;
    sp20 = temp_v0;
    temp_f0 = fabsf(Math_CosS((s16) ((0x8000 / (s32) arg3) * arg2)));
    temp_v0->unk_0 = 0xE7000000;
    temp_v0->unk_4 = 0;
    temp_v0_2 = temp_v0 + 8;
    if (arg1 == 0) {
        temp_v0_2->unk_4 = 0xFF000000;
        temp_v0_2->unk_0 = 0xF8000000;
        phi_v0 = temp_v0_2 + 8;
    } else {
        temp_v0_2->unk_0 = 0xF8000000;
        temp_v0_2->unk_4 = (s32) ((arg1->unk_0 << 0x18) | (arg1->unk_1 << 0x10) | (arg1->unk_2 << 8) | arg1->unk_3);
        phi_v0 = temp_v0_2 + 8;
    }
    phi_v0->unk_0 = 0xDB080000;
    temp_a0 = (0x1F400 / (s32) ((s16) (s32) (temp_f0 * 3000.0f) + 0x5DC)) & 0xFFFF;
    phi_v0->unk_4 = (s32) ((temp_a0 << 0x10) | temp_a0);
    temp_t0->unk_2C0 = (void *) (phi_v0 + 8);
}

void func_800AE778(GlobalContext *globalCtx, Color_RGBA8 *color, s16 param_3, s16 param_4) {
    Gfx *sp20;
    GraphicsContext *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_t0;
    f32 temp_f2;
    f32 temp_f6;
    s32 temp_a0;

    temp_t0 = globalCtx->state.gfxCtx;
    temp_v0 = temp_t0->polyXlu.p;
    sp1C = temp_t0;
    sp20 = temp_v0;
    temp_f2 = Math_CosS((s16) ((0x4000 / (s32) param_4) * param_3));
    temp_v0->words.w0 = 0xE7000000;
    temp_v0->words.w1 = 0;
    temp_v0_2 = &temp_v0[1];
    temp_v0_2->words.w0 = 0xF8000000;
    temp_v0_2->words.w1 = (color->r << 0x18) | (color->g << 0x10) | (color->b << 8) | color->a;
    temp_v0_3 = &temp_v0_2[1];
    temp_f6 = fabsf(temp_f2) * 2800.0f;
    temp_v0_3->words.w0 = 0xDB080000;
    temp_a0 = (0x1F400 / (s32) ((s16) (s32) temp_f6 + 0x6A4)) & 0xFFFF;
    temp_v0_3->words.w1 = temp_a0 | (temp_a0 << 0x10);
    temp_t0->polyXlu.p = &temp_v0_3[1];
}

void func_800AE8EC(GlobalContext *globalCtx) {
    GraphicsContext *sp18;
    Gfx *temp_v1;
    GraphicsContext *temp_a2;

    temp_a2 = globalCtx->state.gfxCtx;
    temp_v1 = temp_a2->polyXlu.p;
    temp_a2->polyXlu.p = &temp_v1[1];
    temp_v1->words.w1 = 0;
    temp_v1->words.w0 = 0xE7000000;
    sp18 = temp_a2;
    temp_a2->polyXlu.p = func_801660B8(globalCtx, temp_a2->polyXlu.p);
}
