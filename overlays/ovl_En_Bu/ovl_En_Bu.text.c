struct _mips2c_stack_EnBu_Destroy {};               /* size 0x0 */

struct _mips2c_stack_EnBu_DoNothing {};             /* size 0x0 */

struct _mips2c_stack_EnBu_Draw {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnBu_Init {};                  /* size 0x0 */

struct _mips2c_stack_EnBu_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void EnBu_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnBu *this = (EnBu *) thisx;
    this->actionFunc = EnBu_DoNothing;
}

void EnBu_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBu *this = (EnBu *) thisx;

}

void EnBu_DoNothing(EnBu *this, GlobalContext *globalCtx) {

}

void EnBu_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnBu *this = (EnBu *) thisx;
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    this->actionFunc(this, globalCtx);
}

void EnBu_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_s1;
    EnBu *this = (EnBu *) thisx;

    temp_s1 = globalCtx->state.gfxCtx;
    SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
    SysMatrix_InsertZRotation_s(this->actor.shape.rot.z, 1);
    Matrix_RotateY(this->actor.shape.rot.y, 1U);
    SysMatrix_InsertXRotation_s(this->actor.shape.rot.x, 1);
    Matrix_Scale(0.01f, 0.01f, 0.01f, 1);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp20 = temp_v0;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = (u32) this->displayListPtr;
}
