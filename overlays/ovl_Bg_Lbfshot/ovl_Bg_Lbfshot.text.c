extern Gfx D_06000228;
extern CollisionHeader D_060014D8;
static InitChainEntry D_80C18200;                   /* unable to generate initializer */



void BgLbfshot_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgLbfshot *this = (BgLbfshot *) thisx;
    Actor_ProcessInitChain(&this->dyna.actor, &D_80C18200);
    this->dyna.actor.uncullZoneForward = 4000.0f;
    BcCheck3_BgActorInit(&this->dyna, 1);
    BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_060014D8);
}

void BgLbfshot_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgLbfshot *this = (BgLbfshot *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void BgLbfshot_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgLbfshot *this = (BgLbfshot *) thisx;
    func_800BDFC0(globalCtx, &D_06000228);
}

