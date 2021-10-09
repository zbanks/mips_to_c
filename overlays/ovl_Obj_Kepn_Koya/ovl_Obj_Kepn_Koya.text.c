struct _mips2c_stack_ObjKepnKoya_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjKepnKoya_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjKepnKoya_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjKepnKoya_Update {};         /* size 0x0 */

extern Gfx D_06003478;
extern CollisionHeader D_0600805C;
static InitChainEntry D_80C07C40[4];                /* unable to generate initializer */

void ObjKepnKoya_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjKepnKoya *this = (ObjKepnKoya *) thisx;
    Actor_ProcessInitChain((Actor *) this, D_80C07C40);
    Actor_SetScale((Actor *) this, 0.1f);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_0600805C);
    if (this->dyna.bgId == 0x32) {
        Actor_MarkForDeath((Actor *) this);
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
