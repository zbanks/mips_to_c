typedef struct ObjYado {
    /* 0x000 */ Actor actor;
    /* 0x144 */ u8 unk_144;                         /* inferred */
    /* 0x145 */ char pad_145[0x3];                  /* maybe part of unk_144[4]? */
} ObjYado;                                          /* size = 0x148 */

struct _mips2c_stack_ObjYado_Destroy {};            /* size 0x0 */

struct _mips2c_stack_ObjYado_Draw {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ GraphicsContext *sp3C;               /* inferred */
    /* 0x40 */ char pad_40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_ObjYado_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjYado_Update {};             /* size 0x0 */

extern Gfx D_06000320;
extern Gfx D_06000430;
extern void D_060012E8;
static InitChainEntry D_80C16420;                   /* unable to generate initializer */
static void *D_80C16470;

void ObjYado_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjYado *this = (ObjYado *) thisx;
    Actor_ProcessInitChain((Actor *) this, &D_80C16420);
    D_80C16470 = Lib_SegmentedToVirtual(&D_060012E8);
    this->unk_144 = (u8) gSaveContext.isNight;
}

void ObjYado_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjYado *this = (ObjYado *) thisx;

}

void ObjYado_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjYado *this = (ObjYado *) thisx;
    this->unk_144 = (u8) gSaveContext.isNight;
}

void ObjYado_Draw(Actor *thisx, GlobalContext *globalCtx) {
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
    ObjYado *this = (ObjYado *) thisx;

    temp_v1 = globalCtx->state.gfxCtx;
    if (this->unk_144 != 0) {
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
