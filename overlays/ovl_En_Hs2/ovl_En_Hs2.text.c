

void EnHs2_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnHs2 *this = (EnHs2 *) thisx;
    Actor_SetScale(&this->actor, 1.0f);
    this->actionFunc = EnHs2_DoNothing;
}

void EnHs2_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnHs2 *this = (EnHs2 *) thisx;

}

void EnHs2_DoNothing(EnHs2 *this, GlobalContext *globalCtx) {
    EnHs2 *self = (EnHs2 *) this;

}

void EnHs2_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnHs2 *this = (EnHs2 *) thisx;
    this->actionFunc(this, globalCtx);
}

void EnHs2_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnHs2 *this = (EnHs2 *) thisx;

}

