

void EnBu_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnBu *this = (EnBu *) thisx;
    this->actionFunc = EnBu_DoNothing;
}

void EnBu_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBu *this = (EnBu *) thisx;

}

void EnBu_DoNothing(EnBu *this, GlobalContext *globalCtx) {
    EnBu *self = (EnBu *) this;

}

void EnBu_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnBu *this = (EnBu *) thisx;
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    this->actionFunc(this, globalCtx);
}

void EnBu_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnBu *this = (EnBu *) thisx;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_s1;

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

