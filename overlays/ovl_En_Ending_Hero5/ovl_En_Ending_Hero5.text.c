struct _mips2c_stack_EnEndingHero5_Destroy {};      /* size 0x0 */

struct _mips2c_stack_EnEndingHero5_Draw {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnEndingHero5_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnEndingHero5_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C23980 {};              /* size 0x0 */

struct _mips2c_stack_func_80C2399C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C23A30 {};              /* size 0x0 */

void func_80C23A30(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06002FA0;
extern FlexSkeletonHeader D_0600A850;
static ? D_80C23BF0;                                /* unable to generate initializer */

void EnEndingHero5_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnEndingHero5 *this = (EnEndingHero5 *) thisx;
    this->actor.colChkInfo.mass = 0xFF;
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.targetMode = 6;
    this->actor.gravity = -3.0f;
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_0600A850, &D_06002FA0, this->limbDrawTable, this->transitionDrawTable, 0x11);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 25.0f);
    this->unk25C = (s32) this->actor.params;
    func_80C23980(this);
}

void EnEndingHero5_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnEndingHero5 *this = (EnEndingHero5 *) thisx;

}

void func_80C23980(EnEndingHero5 *this) {
    this->unk258 = 1;
    this->actionFunc = func_80C2399C;
}

void func_80C2399C(EnEndingHero5 *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
}

void EnEndingHero5_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnEndingHero5 *this = (EnEndingHero5 *) thisx;
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 50.0f, 0x1DU);
}

void func_80C23A30(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    void *temp_a0;
    void *temp_v0;

    temp_v0 = *arg0;
    if (arg1 == 0xF) {
        temp_a0 = temp_v0->unk_2B0;
        temp_v0->unk_2B0 = (void *) (temp_a0 + 8);
        temp_a0->unk_0 = 0xDE000000;
        temp_a0->unk_4 = (s32) *(&D_80C23BF0 + (arg4->unk_25C * 4));
    }
}

void EnEndingHero5_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    s32 temp_t9;
    EnEndingHero5 *this = (EnEndingHero5 *) thisx;

    func_8012C28C(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_t9 = this->unk25C;
    temp_a0 = globalCtx->state.gfxCtx;
    switch (temp_t9) {
    case 0:
        temp_v0 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0[1];
        temp_v0->words.w0 = 0xFB000000;
        temp_v0->words.w1 = 0xAA0A46FF;
        break;
    case 1:
        temp_v0_2 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_2[1];
        temp_v0_2->words.w0 = 0xFB000000;
        temp_v0_2->words.w1 = 0xAAC8FFFF;
        break;
    case 2:
        temp_v0_3 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xFB000000;
        temp_v0_3->words.w1 = 0xE646FF;
        break;
    case 3:
        temp_v0_4 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_4[1];
        temp_v0_4->words.w0 = 0xFB000000;
        temp_v0_4->words.w1 = 0xC80096FF;
        break;
    case 4:
        temp_v0_5 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xFB000000;
        temp_v0_5->words.w1 = 0xF59B00FF;
        break;
    }
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, NULL, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80C23A30, (Actor *) this);
}
