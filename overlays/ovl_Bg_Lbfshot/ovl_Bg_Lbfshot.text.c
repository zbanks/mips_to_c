struct _mips2c_stack_BgLbfshot_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgLbfshot_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgLbfshot_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

extern Gfx D_06000228;
extern CollisionHeader D_060014D8;
static InitChainEntry D_80C18200;                   /* unable to generate initializer */

void BgLbfshot_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgLbfshot *this = (BgLbfshot *) thisx;
    Actor_ProcessInitChain((Actor *) this, &D_80C18200);
    this->dyna.actor.uncullZoneForward = 4000.0f;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_060014D8);
}

void BgLbfshot_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgLbfshot *this = (BgLbfshot *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void BgLbfshot_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgLbfshot *this = (BgLbfshot *) thisx;
    func_800BDFC0(globalCtx, &D_06000228);
}
