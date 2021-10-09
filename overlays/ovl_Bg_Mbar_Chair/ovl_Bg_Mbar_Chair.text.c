struct _mips2c_stack_BgMbarChair_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgMbarChair_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgMbarChair_Init {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgMbarChair_Update {};         /* size 0x0 */

extern Gfx D_06000288;
extern CollisionHeader D_060019B4;
static InitChainEntry bgMbarChairInitVars[4];       /* unable to generate initializer */

void BgMbarChair_Init(BgMbarChair *this, GlobalContext *globalCtx) {
    BgMbarChair *this = (BgMbarChair *) thisx;
    Actor_ProcessInitChain((Actor *) this, bgMbarChairInitVars);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_060019B4);
}

void BgMbarChair_Destroy(BgMbarChair *this, GlobalContext *globalCtx) {
    BgMbarChair *this = (BgMbarChair *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void BgMbarChair_Update(BgMbarChair *this, GlobalContext *globalCtx) {
    BgMbarChair *this = (BgMbarChair *) thisx;

}

void BgMbarChair_Draw(BgMbarChair *this, GlobalContext *globalCtx) {
    BgMbarChair *this = (BgMbarChair *) thisx;
    func_800BDFC0(globalCtx, &D_06000288);
}
