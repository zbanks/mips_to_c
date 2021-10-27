typedef struct BgOpenSpot {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void *unk_144;                      /* inferred */
} BgOpenSpot;                                       /* size = 0x148 */

struct _mips2c_stack_BgOpenSpot_Destroy {};         /* size 0x0 */

struct _mips2c_stack_BgOpenSpot_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgOpenSpot_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ACB2B0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

void func_80ACB2B0(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_06001A60;
extern ? D_06001B40;
extern void D_06002CE0;
static InitChainEntry D_80ACB3B0[4];                /* unable to generate initializer */

void BgOpenSpot_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgOpenSpot *this = (BgOpenSpot *) thisx;
    Actor_ProcessInitChain((Actor *) this, D_80ACB3B0);
    this->unk_144 = Lib_SegmentedToVirtual(&D_06002CE0);
}

void BgOpenSpot_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgOpenSpot *this = (BgOpenSpot *) thisx;

}

void BgOpenSpot_Update(Actor *thisx, GlobalContext *globalCtx) {
    u16 temp_v1;
    BgOpenSpot *this = (BgOpenSpot *) thisx;

    if (func_800EE29C(globalCtx, 0x7DU) != 0) {
        temp_v1 = globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x7DU)]->unk0;
        if (temp_v1 == 1) {
            this->actor.draw = NULL;
            return;
        }
        if (temp_v1 == 2) {
            this->actor.draw = func_80ACB2B0;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
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

    AnimatedMat_Draw(globalCtx, this->unk_144);
    temp_a0 = globalCtx->state.gfxCtx;
    sp24 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = sp24->polyXlu.p;
    sp24->polyXlu.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp24 = sp24;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = sp24->polyXlu.p;
    sp24->polyXlu.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = 0x40;
    temp_v0_2->words.w0 = 0xE3001801;
    temp_v0_3 = sp24->polyXlu.p;
    sp24->polyXlu.p = &temp_v0_3[1];
    temp_v0_3->words.w1 = (u32) &D_06001A60;
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_4 = sp24->polyXlu.p;
    sp24->polyXlu.p = &temp_v0_4[1];
    temp_v0_4->words.w1 = (u32) &D_06001B40;
    temp_v0_4->words.w0 = 0xDE000000;
}
