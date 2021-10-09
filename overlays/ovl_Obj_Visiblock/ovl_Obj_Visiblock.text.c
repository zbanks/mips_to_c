struct _mips2c_stack_ObjVisiblock_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjVisiblock_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjVisiblock_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

extern Gfx D_06000140;
extern CollisionHeader D_06000AD0;
static InitChainEntry D_80ADEB50[4];                /* unable to generate initializer */

void ObjVisiblock_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjVisiblock *this = (ObjVisiblock *) thisx;
    Actor_ProcessInitChain((Actor *) this, D_80ADEB50);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06000AD0);
}

void ObjVisiblock_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjVisiblock *this = (ObjVisiblock *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void ObjVisiblock_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjVisiblock *this = (ObjVisiblock *) thisx;
    func_800BE03C(globalCtx, &D_06000140);
}
