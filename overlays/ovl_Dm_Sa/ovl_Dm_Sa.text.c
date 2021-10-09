struct _mips2c_stack_DmSa_Destroy {};               /* size 0x0 */

struct _mips2c_stack_DmSa_DoNothing {};             /* size 0x0 */

struct _mips2c_stack_DmSa_Draw {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ GraphicsContext *sp40;               /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_DmSa_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_DmSa_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2E960 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A2EB10 {};              /* size 0x0 */

struct _mips2c_stack_func_80A2EB2C {};              /* size 0x0 */

struct _mips2c_stack_func_80A2EB44 {};              /* size 0x0 */

struct _mips2c_stack_func_80A2EB58 {};              /* size 0x0 */

struct _mips2c_stack_func_80A2EBB0 {};              /* size 0x0 */

void func_80A2E960(SkelAnime *arg0, ? *arg1, s32 arg2); /* static */
s32 func_80A2EB10(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_80A2EB2C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *actor); /* static */
void func_80A2EB44(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
void *func_80A2EB58(GraphicsContext *arg0, u32 arg1); /* static */
void *func_80A2EBB0(GraphicsContext *arg0, u32 arg1); /* static */
extern FlexSkeletonHeader D_06013328;
static ? D_80A2ED00;                                /* unable to generate initializer */

void func_80A2E960(SkelAnime *arg0, ? *arg1, s32 arg2) {
    f32 temp_f0;
    void *temp_s0;
    f32 phi_f2;

    temp_s0 = arg1 + ((arg2 & 0xFFFF) * 0x18);
    temp_f0 = temp_s0->unk_C;
    if (temp_f0 < 0.0f) {
        phi_f2 = (f32) SkelAnime_GetFrameCount(temp_s0->unk_0);
    } else {
        phi_f2 = temp_f0;
    }
    SkelAnime_ChangeAnim(arg0, (AnimationHeader *) temp_s0->unk_0, temp_s0->unk_4, temp_s0->unk_8, phi_f2, (u8) (s32) temp_s0->unk_10, temp_s0->unk_14);
}

void DmSa_Init(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    DmSa *this = (DmSa *) thisx;

    this->unk2E0 = 0;
    this->alpha = 0xFF;
    this->actor.targetArrowOffset = 3000.0f;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 24.0f);
    temp_a1 = &this->skelAnime;
    sp30 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06013328, NULL, NULL, NULL, 0);
    func_80A2E960(sp30, &D_80A2ED00, 0);
    Actor_SetScale((Actor *) this, 0.01f);
    this->actionFunc = DmSa_DoNothing;
}

void DmSa_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmSa *this = (DmSa *) thisx;

}

void DmSa_DoNothing(DmSa *this, GlobalContext *globalCtx) {

}

void DmSa_Update(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;
    DmSa *this = (DmSa *) thisx;

    temp_a0 = &this->skelAnime;
    this = this;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    this->alpha = this->alpha;
    this->actionFunc(this, globalCtx);
}

s32 func_80A2EB10(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    return 0;
}

void func_80A2EB2C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3) {

}

void func_80A2EB44(GlobalContext *arg0, s32 arg1, Actor *arg2) {

}

void *func_80A2EB58(GraphicsContext *arg0, u32 arg1) {
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_v1 = arg0->polyOpa.d - 0x10;
    arg0->polyOpa.d = temp_v1;
    temp_v1->words.w1 = 0xC81049D8;
    temp_v0 = temp_v1 + 8;
    temp_v1->words.w0 = 0xE200001C;
    temp_v0->unk_4 = (s32) (arg1 & 0xFF);
    temp_v0->unk_0 = 0xFB000000;
    temp_v0_2 = temp_v0 + 8;
    temp_v0_2->unk_0 = 0xDF000000;
    temp_v0_2->unk_4 = 0;
    return temp_v1;
}

void *func_80A2EBB0(GraphicsContext *arg0, u32 arg1) {
    void *temp_v0;
    void *temp_v1;

    temp_v1 = arg0->polyOpa.d - 0x10;
    arg0->polyOpa.d = temp_v1;
    temp_v0 = temp_v1 + 8;
    temp_v1->words.w0 = 0xFB000000;
    temp_v1->words.w1 = arg1 & 0xFF;
    temp_v0->unk_0 = 0xDF000000;
    temp_v0->unk_4 = 0;
    return temp_v1;
}

void DmSa_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp40;
    Gfx *sp38;
    Gfx *sp34;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    DmSa *this = (DmSa *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp40 = temp_a0;
    func_8012C28C(temp_a0);
    if ((u32) this->alpha < 0xFFU) {
        temp_v0 = sp40->polyOpa.p;
        sp40->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060030;
        sp38 = temp_v0;
        sp38->words.w1 = func_80A2EB58(globalCtx->state.gfxCtx, this->alpha);
    } else {
        temp_v0_2 = sp40->polyOpa.p;
        sp40->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDB060030;
        sp34 = temp_v0_2;
        sp34->words.w1 = func_80A2EBB0(globalCtx->state.gfxCtx, this->alpha);
    }
    func_801343C0(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, func_80A2EB10, func_80A2EB2C, func_80A2EB44, (Actor *) this);
}
