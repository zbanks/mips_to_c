extern Gfx D_06003478;
extern CollisionHeader D_0600805C;
static InitChainEntry D_80C07C40;                   /* unable to generate initializer */



void ObjKepnKoya_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjKepnKoya *this = (ObjKepnKoya *) thisx;
    Actor_ProcessInitChain(&this->dyna.actor, &D_80C07C40);
    Actor_SetScale(&this->dyna.actor, 0.1f);
    BcCheck3_BgActorInit(&this->dyna, 0);
    BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_0600805C);
    if (this->dyna.bgId == 0x32) {
        Actor_MarkForDeath(&this->dyna.actor);
    }
}

void ObjKepnKoya_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjKepnKoya *this = (ObjKepnKoya *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void ObjKepnKoya_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjKepnKoya *this = (ObjKepnKoya *) thisx;

}

void ObjKepnKoya_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjKepnKoya *this = (ObjKepnKoya *) thisx;
    func_800BDFC0(globalCtx, &D_06003478);
}

