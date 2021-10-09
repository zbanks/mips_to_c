struct _mips2c_stack_EnEndingHero_Destroy {};       /* size 0x0 */

struct _mips2c_stack_EnEndingHero_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x8];                    /* maybe part of sp34[3]? */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnEndingHero_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnEndingHero_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C1E748 {};              /* size 0x0 */

struct _mips2c_stack_func_80C1E764 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

extern AnimationHeader D_06000BE0;
extern FlexSkeletonHeader D_0600B0CC;
static ? D_80C1E970;                                /* unable to generate initializer */
static ? D_80C1E984;                                /* unable to generate initializer */

void EnEndingHero_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnEndingHero *this = (EnEndingHero *) thisx;
    this->actor.colChkInfo.mass = 0xFF;
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.targetMode = 6;
    this->actor.gravity = -3.0f;
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_0600B0CC, &D_06000BE0, this->limbDrawTable, this->transitionDrawTable, 0xF);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 25.0f);
    func_80C1E748(this);
}

void EnEndingHero_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnEndingHero *this = (EnEndingHero *) thisx;

}

void func_80C1E748(EnEndingHero *this) {
    this->unk244 = 1;
    this->actionFunc = func_80C1E764;
}

void func_80C1E764(EnEndingHero *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
}

void EnEndingHero_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnEndingHero *this = (EnEndingHero *) thisx;
    if (this->unk240 == 0) {
        this->unk242 += 1;
        if ((s32) this->unk242 >= 3) {
            this->unk242 = 0;
            this->unk240 = (s32) Rand_ZeroFloat(60.0f) + 0x14;
        }
    }
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 50.0f, 0x1DU);
}

void EnEndingHero_Draw(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp40;
    Gfx *sp34;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    s16 temp_v0_2;
    EnEndingHero *this = (EnEndingHero *) thisx;

    sp40 = 0;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp34 = temp_v0;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_80C1E970 + (this->unk242 * 4)));
    temp_v0_2 = this->unk242;
    if ((s32) temp_v0_2 < 3) {
        sp40 = (s32) temp_v0_2;
    }
    temp_v0_3 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060024;
    sp30 = temp_v0_3;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80C1E984 + (sp40 * 4)));
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, NULL, NULL, (Actor *) this);
}
