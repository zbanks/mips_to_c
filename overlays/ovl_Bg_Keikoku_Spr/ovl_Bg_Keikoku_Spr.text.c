extern ? D_06000100;
extern void D_060001F8;
extern ? D_06000300;
extern void D_060003F8;
extern ? D_06000500;
extern void D_060005F8;
static InitChainEntry D_808C3BC0;                   /* unable to generate initializer */



void BgKeikokuSpr_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgKeikokuSpr *this = (BgKeikokuSpr *) thisx;
    Actor_ProcessInitChain(&this->actor, &D_808C3BC0);
}

void BgKeikokuSpr_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgKeikokuSpr *this = (BgKeikokuSpr *) thisx;

}

void BgKeikokuSpr_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgKeikokuSpr *this = (BgKeikokuSpr *) thisx;

}

void BgKeikokuSpr_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgKeikokuSpr *this = (BgKeikokuSpr *) thisx;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_s0;

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

