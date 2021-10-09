struct _mips2c_stack_EnHs2_Destroy {};              /* size 0x0 */

struct _mips2c_stack_EnHs2_DoNothing {};            /* size 0x0 */

struct _mips2c_stack_EnHs2_Draw {};                 /* size 0x0 */

struct _mips2c_stack_EnHs2_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnHs2_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void EnHs2_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnHs2 *this = (EnHs2 *) thisx;
    Actor_SetScale((Actor *) this, 1.0f);
    this->actionFunc = EnHs2_DoNothing;
}

void EnHs2_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnHs2 *this = (EnHs2 *) thisx;

}

void EnHs2_DoNothing(EnHs2 *this, GlobalContext *globalCtx) {

}

void EnHs2_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnHs2 *this = (EnHs2 *) thisx;
    this->actionFunc(this, globalCtx);
}

void EnHs2_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnHs2 *this = (EnHs2 *) thisx;

}
