extern Gfx D_06000500;
static InitChainEntry D_8095FBB0;                   /* unable to generate initializer */



void ObjHana_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjHana *this = (ObjHana *) thisx;
    Actor_ProcessInitChain(&this->actor, &D_8095FBB0);
}

void ObjHana_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjHana *this = (ObjHana *) thisx;

}

void ObjHana_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjHana *this = (ObjHana *) thisx;

}

void ObjHana_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjHana *this = (ObjHana *) thisx;
    func_800BDFC0(globalCtx, &D_06000500);
}

