extern Gfx D_06000288;
extern CollisionHeader D_060019B4;
static InitChainEntry bgMbarChairInitVars;          /* unable to generate initializer */



void BgMbarChair_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgMbarChair *this = (BgMbarChair *) thisx;
    Actor_ProcessInitChain(&this->dyna.actor, &bgMbarChairInitVars);
    BcCheck3_BgActorInit(&this->dyna, 0);
    BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_060019B4);
}

void BgMbarChair_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgMbarChair *this = (BgMbarChair *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void BgMbarChair_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgMbarChair *this = (BgMbarChair *) thisx;

}

void BgMbarChair_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgMbarChair *this = (BgMbarChair *) thisx;
    func_800BDFC0(globalCtx, &D_06000288);
}

