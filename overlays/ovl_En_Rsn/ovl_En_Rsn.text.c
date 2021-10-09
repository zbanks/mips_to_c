s32 EnRsn_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void EnRsn_PostLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80C25D40(EnRsn *arg0);                    /* static */
extern void D_06005458;
extern AnimationHeader D_06009120;
extern FlexSkeletonHeader D_06009220;
static ActorAnimationEntry D_80C26010 = {(AnimationHeader *)0x600788C, 1.0f, 0.0f, 0.0f, 0, 0.0f};
static ? D_80C26028;                                /* unable to generate initializer */



void func_80C25D40(EnRsn *arg0) {
    func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) &D_80C26010, 0);
    arg0->actionFunc = func_80C25D84;
}

void func_80C25D84(EnRsn *this, GlobalContext *globalCtx) {

}

void EnRsn_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnRsn *this = (EnRsn *) thisx;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06009220, &D_06009120, NULL, NULL, 0);
    this->actor.flags &= -2;
    func_80C25D40(this);
}

void EnRsn_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnRsn *this = (EnRsn *) thisx;
    SkelAnime_Free(&this->skelAnime, globalCtx);
}

void EnRsn_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnRsn *this = (EnRsn *) thisx;
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    func_800E9250(globalCtx, &this->actor, &this->unk1D8, &this->unk1DE, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
}

s32 EnRsn_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg1 == 0xE) {
        SysMatrix_InsertXRotation_s(arg5->unk1DA, 1);
    }
    return 0;
}

void EnRsn_PostLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f sp18;

    sp18.x = D_80C26028.unk0;
    sp18.y = D_80C26028.unk4;
    sp18.z = D_80C26028.unk8;
    if (arg1 == 0xE) {
        SysMatrix_MultiplyVector3fByState(&sp18, arg4 + 0x3C);
    }
}

void EnRsn_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnRsn *this = (EnRsn *) thisx;
    GraphicsContext *sp30;
    Gfx *sp28;
    Gfx *temp_v0;
    GraphicsContext *temp_a0;

    temp_a0 = globalCtx->state.gfxCtx;
    sp30 = temp_a0;
    func_8012C5B0(temp_a0);
    temp_v0 = sp30->polyOpa.p;
    sp30->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp28 = temp_v0;
    sp28->words.w1 = Lib_SegmentedToVirtual(&D_06005458);
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, EnRsn_OverrideLimbDraw, EnRsn_PostLimbDraw, &this->actor);
}

