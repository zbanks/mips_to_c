void func_80AE1650(EnDs2n *arg0);                   /* static */
void func_80AE16A0(EnDs2n *arg0, GlobalContext *arg1); /* static */
void func_80AE16D8(EnDs2n *arg0);                   /* static */
s32 func_80AE1874(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80AE18B4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06008038;
extern FlexSkeletonHeader D_06008170;
static ActorAnimationEntry D_80AE1AD0 = {(AnimationHeader *)0x6008038, 1.0f, 0.0f, 0.0f, 0, 0.0f};
static ? D_80AE1AE8;                                /* unable to generate initializer */
static ? D_80AE1AF4;                                /* unable to generate initializer */

typedef struct EnDs2n {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ char pad144[0x4C];
    /* 0x0190 */ SkelAnime unk190;                  /* inferred */
    /* 0x01D4 */ void (*actionFunc)(EnDs2n *, GlobalContext *);
    /* 0x01D8 */ char pad1D8[0x4C];                 /* maybe part of actionFunc[20]? */
    /* 0x0224 */ Vec3s unk224;                      /* inferred */
    /* 0x022A */ Vec3s unk22A;                      /* inferred */
    /* 0x0230 */ s16 unk230;                        /* inferred */
    /* 0x0232 */ s16 unk232;                        /* inferred */
} EnDs2n;                                           /* size 0x234 */

void func_80AE1650(EnDs2n *arg0) {
    EnDs2n *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk232 = 0x14;
    temp_a3->unk230 = 0;
    arg0 = temp_a3;
    func_800BDC5C(temp_a3 + 0x190, (ActorAnimationEntry []) &D_80AE1AD0, 0);
    arg0->actionFunc = func_80AE16A0;
}

void func_80AE16A0(EnDs2n *arg0, GlobalContext *arg1) {
    func_8013D9C8(arg1, arg0 + 0x1D8, arg0 + 0x1FE, 0x13);
}

void func_80AE16D8(EnDs2n *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->unk232 - 1;
    if ((s32) temp_v0 >= 3) {
        arg0->unk230 = 0;
        goto block_5;
    }
    if (temp_v0 == 0) {
        arg0->unk230 = 2;
        arg0->unk232 = (s32) (Rand_ZeroOne() * 60.0f) + 0x14;
        return;
    }
    arg0->unk230 = 1;
block_5:
    arg0->unk232 = temp_v0;
}

void EnDs2n_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnDs2n *this = (EnDs2n *) thisx;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    SkelAnime_InitSV(globalCtx, &this->unk190, &D_06008170, &D_06008038, NULL, NULL, 0);
    func_80AE1650(this);
}

void EnDs2n_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnDs2n *this = (EnDs2n *) thisx;
    SkelAnime_Free(&this->unk190, globalCtx);
}

void EnDs2n_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnDs2n *this = (EnDs2n *) thisx;
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    SkelAnime_FrameUpdateMatrix(&this->unk190);
    func_800E9250(globalCtx, &this->actor, &this->unk224, &this->unk22A, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
    func_80AE16D8(this);
}

s32 func_80AE1874(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg1 == 0x12) {
        SysMatrix_InsertXRotation_s(arg5->unk226, 1);
    }
    return 0;
}

void func_80AE18B4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f sp20;
    void *sp18;
    void *temp_v0;

    sp20.x = D_80AE1AE8.unk0;
    sp20.y = D_80AE1AE8.unk4;
    sp20.z = D_80AE1AE8.unk8;
    if ((arg1 == 1) || (arg1 == 0xC) || (arg1 == 0xF)) {
        temp_v0 = arg4 + (arg1 * 2);
        sp18 = temp_v0;
        arg3->y += (s32) Math_SinS(temp_v0->unk1D8) * 0xC8;
        arg3->z += (s32) Math_CosS(temp_v0->unk1FE) * 0xC8;
    }
    if (arg1 == 0x12) {
        SysMatrix_MultiplyVector3fByState(&sp20, arg4 + 0x3C);
    }
}

void EnDs2n_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnDs2n *this = (EnDs2n *) thisx;
    GraphicsContext *sp40;
    Gfx *sp38;
    Gfx *sp34;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    temp_a0 = globalCtx->state.gfxCtx;
    sp40 = temp_a0;
    func_8012C5B0(temp_a0);
    temp_v0 = sp40->polyOpa.p;
    sp40->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp40 = sp40;
    sp38 = temp_v0;
    sp38->words.w1 = Lib_SegmentedToVirtual(*(&D_80AE1AF4 + (this->unk230 * 4)));
    temp_v0_2 = sp40->polyOpa.p;
    sp40->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp34 = temp_v0_2;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_80AE1AF4 + (this->unk230 * 4)));
    SkelAnime_DrawSV(globalCtx, this->unk190.skeleton, this->unk190.limbDrawTbl, (s32) this->unk190.dListCount, func_80AE1874, func_80AE18B4, &this->actor);
}

