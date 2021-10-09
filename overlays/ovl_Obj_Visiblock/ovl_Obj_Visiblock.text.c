extern Gfx D_06000140;
extern CollisionHeader D_06000AD0;
static InitChainEntry D_80ADEB50;                   /* unable to generate initializer */



void ObjVisiblock_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjVisiblock *this = (ObjVisiblock *) thisx;
    Actor_ProcessInitChain(&this->dyna.actor, &D_80ADEB50);
    BcCheck3_BgActorInit(&this->dyna, 0);
    BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_06000AD0);
}

void ObjVisiblock_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjVisiblock *this = (ObjVisiblock *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void ObjVisiblock_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjVisiblock *this = (ObjVisiblock *) thisx;
    func_800BE03C(globalCtx, &D_06000140);
}

