void func_80ACB2B0(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_06001A60;
extern ? D_06001B40;
extern void D_06002CE0;
static InitChainEntry D_80ACB3B0;                   /* unable to generate initializer */

typedef struct BgOpenSpot {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void *unk144;                      /* inferred */
} BgOpenSpot;                                       /* size 0x148 */

void BgOpenSpot_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgOpenSpot *this = (BgOpenSpot *) thisx;
    Actor_ProcessInitChain(&this->actor, &D_80ACB3B0);
    this->unk144 = Lib_SegmentedToVirtual(&D_06002CE0);
}

void BgOpenSpot_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgOpenSpot *this = (BgOpenSpot *) thisx;

}

void BgOpenSpot_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgOpenSpot *this = (BgOpenSpot *) thisx;
    u16 temp_v1;

    if (func_800EE29C(globalCtx, 0x7DU) != 0) {
        temp_v1 = globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x7DU)]->unk0;
        if (temp_v1 == 1) {
            this->actor.draw = NULL;
            return;
        }
        if (temp_v1 == 2) {
            this->actor.draw = func_80ACB2B0;
        }
        // Duplicate return node #5. Try simplifying control flow for better match
    }
}

void func_80ACB2B0(Actor *this, GlobalContext *globalCtx) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;

    AnimatedMat_Draw(globalCtx, this->unk144);
    temp_a0 = globalCtx->state.gfxCtx;
    sp24 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = sp24->polyXlu.p;
    sp24->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = sp24;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = sp24->polyXlu.p;
    sp24->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0x40;
    temp_v0_2->words.w0 = 0xE3001801;
    temp_v0_3 = sp24->polyXlu.p;
    sp24->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) &D_06001A60;
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_4 = sp24->polyXlu.p;
    sp24->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) &D_06001B40;
    temp_v0_4->words.w0 = 0xDE000000;
}

