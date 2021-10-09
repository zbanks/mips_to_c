struct _mips2c_stack_EnEndingHero2_Destroy {};      /* size 0x0 */

struct _mips2c_stack_EnEndingHero2_Draw {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnEndingHero2_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnEndingHero2_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C232E8 {};              /* size 0x0 */

struct _mips2c_stack_func_80C23304 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

extern AnimationHeader D_060011C0;
extern FlexSkeletonHeader D_06007908;

void EnEndingHero2_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnEndingHero2 *this = (EnEndingHero2 *) thisx;
    this->actor.colChkInfo.mass = 0xFF;
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.targetMode = 6;
    this->actor.gravity = -3.0f;
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06007908, &D_060011C0, this->limbDrawTable, this->transitionDrawTable, 0x14);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 25.0f);
    func_80C232E8(this);
}

void EnEndingHero2_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnEndingHero2 *this = (EnEndingHero2 *) thisx;

}

void func_80C232E8(EnEndingHero2 *this) {
    this->unk27C = 1;
    this->actionFunc = func_80C23304;
}

void func_80C23304(EnEndingHero2 *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
}

void EnEndingHero2_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnEndingHero2 *this = (EnEndingHero2 *) thisx;
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 50.0f, 0x1DU);
}

void EnEndingHero2_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnEndingHero2 *this = (EnEndingHero2 *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, NULL, NULL, (Actor *) this);
}
