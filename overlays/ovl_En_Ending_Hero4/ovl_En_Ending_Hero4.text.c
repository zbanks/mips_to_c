struct _mips2c_stack_EnEndingHero4_Destroy {};      /* size 0x0 */

struct _mips2c_stack_EnEndingHero4_Draw {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnEndingHero4_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnEndingHero4_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C23748 {};              /* size 0x0 */

struct _mips2c_stack_func_80C23764 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

extern AnimationHeader D_06002A84;
extern FlexSkeletonHeader D_0600D640;

void EnEndingHero4_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnEndingHero4 *this = (EnEndingHero4 *) thisx;
    this->actor.colChkInfo.mass = 0xFF;
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.targetMode = 6;
    this->actor.gravity = -3.0f;
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_0600D640, &D_06002A84, this->limbDrawTable, this->transitionDrawTable, 0x11);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 25.0f);
    func_80C23748(this);
}

void EnEndingHero4_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnEndingHero4 *this = (EnEndingHero4 *) thisx;

}

void func_80C23748(EnEndingHero4 *this) {
    this->unk258 = 1;
    this->actionFunc = func_80C23764;
}

void func_80C23764(EnEndingHero4 *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
}

void EnEndingHero4_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnEndingHero4 *this = (EnEndingHero4 *) thisx;
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 50.0f, 0x1DU);
}

void EnEndingHero4_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnEndingHero4 *this = (EnEndingHero4 *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, NULL, NULL, (Actor *) this);
}
