extern AnimationHeader D_06000E50;
extern FlexSkeletonHeader D_06007150;



void EnEndingHero3_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnEndingHero3 *this = (EnEndingHero3 *) thisx;
    this->actor.colChkInfo.mass = 0xFF;
    Actor_SetScale(&this->actor, 0.01f);
    this->actor.targetMode = 6;
    this->actor.gravity = -3.0f;
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06007150, &D_06000E50, this->limbDrawTable, this->transitionDrawTable, 0x11);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 25.0f);
    func_80C23518(this);
}

void EnEndingHero3_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnEndingHero3 *this = (EnEndingHero3 *) thisx;

}

void func_80C23518(EnEndingHero3 *this) {
    this->unk258 = 1;
    this->actionFunc = func_80C23534;
}

void func_80C23534(EnEndingHero3 *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
}

void EnEndingHero3_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnEndingHero3 *this = (EnEndingHero3 *) thisx;
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 20.0f, 20.0f, 50.0f, 0x1DU);
}

void EnEndingHero3_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnEndingHero3 *this = (EnEndingHero3 *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, NULL, NULL, &this->actor);
}

