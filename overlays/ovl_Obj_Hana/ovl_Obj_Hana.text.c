struct _mips2c_stack_ObjHana_Destroy {};            /* size 0x0 */

struct _mips2c_stack_ObjHana_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjHana_Init {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjHana_Update {};             /* size 0x0 */

extern Gfx D_06000500;
static InitChainEntry D_8095FBB0[4];                /* unable to generate initializer */

void ObjHana_Init(ObjHana *this, GlobalContext *globalCtx) {
    ObjHana *this = (ObjHana *) thisx;
    Actor_ProcessInitChain((Actor *) this, D_8095FBB0);
}

void ObjHana_Destroy(ObjHana *this, GlobalContext *globalCtx) {
    ObjHana *this = (ObjHana *) thisx;

}

void ObjHana_Update(ObjHana *this, GlobalContext *globalCtx) {
    ObjHana *this = (ObjHana *) thisx;

}

void ObjHana_Draw(ObjHana *this, GlobalContext *globalCtx) {
    ObjHana *this = (ObjHana *) thisx;
    func_800BDFC0(globalCtx, &D_06000500);
}
