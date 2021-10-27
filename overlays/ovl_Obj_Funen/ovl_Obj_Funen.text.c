struct _mips2c_stack_ObjFunen_Draw {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ Gfx *sp48;                           /* inferred */
    /* 0x4C */ char pad_4C[0x14];
};                                                  /* size = 0x60 */

struct _mips2c_stack_ObjFunen_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

extern ? D_060000D0;
static ? D_80A198D0;                                /* unable to generate initializer */

void ObjFunen_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjFunen *this = (ObjFunen *) thisx;
    Actor_SetScale((Actor *) this, *(&D_80A198D0 + ((this->actor.params & 1) * 4)));
}

void ObjFunen_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp48;
    Gfx *sp44;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    u32 temp_a3;
    ObjFunen *this = (ObjFunen *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C2DC(temp_a0);
    Matrix_RotateY((s16) (func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) - 0x8000), 1U);
    temp_v0 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp48 = temp_v0;
    sp48->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_a3 = -(s32) (globalCtx->gameplayFrames & 0x7FFFFFFF) & 0x7F;
    temp_v0_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xDB060020;
    sp44 = temp_v0_2;
    sp44->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, temp_a3, 0x20, 0x20, 1, 0U, temp_a3, 0x20, 0x20);
    temp_v0_3 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_3[1];
    temp_v0_3->words.w1 = (u32) &D_060000D0;
    temp_v0_3->words.w0 = 0xDE000000;
}
