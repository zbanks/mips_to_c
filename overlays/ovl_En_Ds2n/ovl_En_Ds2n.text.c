typedef struct EnDs2n {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char pad144[0x4C];
    /* 0x190 */ SkelAnime unk190;                   /* inferred */
    /* 0x1D4 */ void (*actionFunc)(EnDs2n *, GlobalContext *);
    /* 0x1D8 */ char pad1D8[0x4C];                  /* maybe part of actionFunc[20]? */
    /* 0x224 */ Vec3s unk224;                       /* inferred */
    /* 0x22A */ Vec3s unk22A;                       /* inferred */
    /* 0x230 */ s16 unk230;                         /* inferred */
    /* 0x232 */ char pad232[0x2];
} EnDs2n;                                           /* size = 0x234 */

struct _mips2c_stack_EnDs2n_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnDs2n_Draw {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad3C[0x4];
    /* 0x40 */ GraphicsContext *sp40;               /* inferred */
    /* 0x44 */ char pad44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnDs2n_Init {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnDs2n_Update {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AE1650 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AE16A0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AE16D8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AE1874 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AE18B4 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad1C[0x4];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad20[0x10];
};                                                  /* size = 0x30 */

void func_80AE1650(EnDs2n *arg0);                   /* static */
void func_80AE16A0(s32 arg0, GlobalContext *arg1);  /* static */
void func_80AE16D8(EnDs2n *arg0);                   /* static */
s32 func_80AE1874(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80AE18B4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06008038;
extern FlexSkeletonHeader D_06008170;
static ActorAnimationEntry D_80AE1AD0 = {(AnimationHeader *)0x6008038, 1.0f, 0.0f, 0.0f, 0, 0.0f};
static ? D_80AE1AE8;                                /* unable to generate initializer */
static ? D_80AE1AF4;                                /* unable to generate initializer */

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

void EnDs2n_Init(EnDs2n *this, GlobalContext *globalCtx) {
    EnDs2n *this = (EnDs2n *) thisx;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    SkelAnime_InitSV(globalCtx, &this->unk190, &D_06008170, &D_06008038, NULL, NULL, 0);
    func_80AE1650(this);
}

void EnDs2n_Destroy(EnDs2n *this, GlobalContext *globalCtx) {
    EnDs2n *this = (EnDs2n *) thisx;
    SkelAnime_Free(&this->unk190, globalCtx);
}

void EnDs2n_Update(EnDs2n *this, GlobalContext *globalCtx) {
    EnDs2n *this = (EnDs2n *) thisx;
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    SkelAnime_FrameUpdateMatrix(&this->unk190);
    func_800E9250(globalCtx, (Actor *) this, &this->unk224, &this->unk22A, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
    func_80AE16D8(this);
}

s32 func_80AE1874(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg1 == 0x12) {
        SysMatrix_InsertXRotation_s(arg5->unk226, 1);
    }
    return 0;
}

void func_80AE18B4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? sp20;
    void *sp18;
    void *temp_v0;

    sp20.unk0 = (s32) D_80AE1AE8.unk0;
    sp20.unk4 = (s32) D_80AE1AE8.unk4;
    sp20.unk8 = (s32) D_80AE1AE8.unk8;
    if ((arg1 == 1) || (arg1 == 0xC) || (arg1 == 0xF)) {
        temp_v0 = arg4 + (arg1 * 2);
        sp18 = temp_v0;
        arg3->y += (s32) Math_SinS(temp_v0->unk1D8) * 0xC8;
        arg3->z += (s32) Math_CosS(temp_v0->unk1FE) * 0xC8;
    }
    if (arg1 == 0x12) {
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp20, arg4 + 0x3C);
    }
}

void EnDs2n_Draw(EnDs2n *this, GlobalContext *globalCtx) {
    GraphicsContext *sp40;
    Gfx *sp38;
    Gfx *sp34;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    EnDs2n *this = (EnDs2n *) thisx;

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
    SkelAnime_DrawSV(globalCtx, this->unk190.skeleton, this->unk190.limbDrawTbl, (s32) this->unk190.dListCount, func_80AE1874, func_80AE18B4, (Actor *) this);
}
