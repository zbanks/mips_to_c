extern Gfx D_06000320;
extern Gfx D_06000430;
extern void D_060012E8;
static InitChainEntry D_80C16420;                   /* unable to generate initializer */
static void *D_80C16470;

typedef struct ObjYado {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ u8 unk144;                         /* inferred */
    /* 0x0145 */ char pad145[0x3];                  /* maybe part of unk144[4]? */
} ObjYado;                                          /* size 0x148 */

void ObjYado_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjYado *this = (ObjYado *) thisx;
    Actor_ProcessInitChain(&this->actor, &D_80C16420);
    D_80C16470 = Lib_SegmentedToVirtual(&D_060012E8);
    this->unk144 = (u8) gSaveContext.isNight;
}

void ObjYado_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjYado *this = (ObjYado *) thisx;

}

void ObjYado_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjYado *this = (ObjYado *) thisx;
    this->unk144 = (u8) gSaveContext.isNight;
}

void ObjYado_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjYado *this = (ObjYado *) thisx;
    GraphicsContext *sp3C;
    Gfx *sp34;
    Gfx *sp30;
    Gfx *sp2C;
    Gfx *sp28;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_v1;

    temp_v1 = globalCtx->state.gfxCtx;
    if (this->unk144 != 0) {
        temp_v0 = temp_v1->polyXlu.p;
        temp_v1->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060024;
        sp3C = temp_v1;
        sp34 = temp_v0;
        sp34->words.w1 = Gfx_PrimColor(globalCtx->state.gfxCtx, 0x80, 0x5F, 0x5F, 0x46, 0x9B);
        temp_v0_2 = temp_v1->polyOpa.p;
        temp_v1->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDB060028;
        sp30 = temp_v0_2;
        sp30->words.w1 = Gfx_PrimColor(globalCtx->state.gfxCtx, 0x80, 0, 0x28, 0x28, 0xFF);
    } else {
        temp_v0_3 = temp_v1->polyXlu.p;
        temp_v1->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDB060024;
        sp3C = temp_v1;
        sp2C = temp_v0_3;
        sp2C->words.w1 = Gfx_PrimColor(globalCtx->state.gfxCtx, 0x80, 0xFF, 0xFF, 0xD7, 0x6E);
        temp_v0_4 = temp_v1->polyOpa.p;
        temp_v1->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDB060028;
        sp28 = temp_v0_4;
        sp28->words.w1 = Gfx_PrimColor(globalCtx->state.gfxCtx, 0x80, 0xFF, 0xFF, 0xD7, 0xFF);
    }
    AnimatedMat_Draw(globalCtx, (AnimatedMaterial *) D_80C16470);
    func_800BDFC0(globalCtx, &D_06000430);
    func_800BE03C(globalCtx, &D_06000320);
}

