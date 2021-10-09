struct _mips2c_stack_BgKeikokuSpr_Destroy {};       /* size 0x0 */

struct _mips2c_stack_BgKeikokuSpr_Draw {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_BgKeikokuSpr_Init {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgKeikokuSpr_Update {};        /* size 0x0 */

extern ? D_06000100;
extern void D_060001F8;
extern ? D_06000300;
extern void D_060003F8;
extern ? D_06000500;
extern void D_060005F8;
static InitChainEntry D_808C3BC0[4];                /* unable to generate initializer */

void BgKeikokuSpr_Init(BgKeikokuSpr *this, GlobalContext *globalCtx) {
    BgKeikokuSpr *this = (BgKeikokuSpr *) thisx;
    Actor_ProcessInitChain((Actor *) this, D_808C3BC0);
}

void BgKeikokuSpr_Destroy(BgKeikokuSpr *this, GlobalContext *globalCtx) {
    BgKeikokuSpr *this = (BgKeikokuSpr *) thisx;

}

void BgKeikokuSpr_Update(BgKeikokuSpr *this, GlobalContext *globalCtx) {
    BgKeikokuSpr *this = (BgKeikokuSpr *) thisx;

}

void BgKeikokuSpr_Draw(BgKeikokuSpr *this, GlobalContext *globalCtx) {
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_s0;
    BgKeikokuSpr *this = (BgKeikokuSpr *) thisx;

    temp_s0 = globalCtx->state.gfxCtx;
    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_060001F8));
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp20 = temp_v0;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06000100;
    temp_v0_2->words.w0 = 0xDE000000;
    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_060003F8));
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_3->words.w1 = (u32) &D_06000300;
    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_060005F8));
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_4->words.w1 = (u32) &D_06000500;
}
