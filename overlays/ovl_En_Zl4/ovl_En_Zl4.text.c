void func_809A1BB0(SkelAnime *arg0, ? *arg1, s32 arg2); /* static */
s32 func_809A1D60(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_809A1DA4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *actor); /* static */
void func_809A1DBC(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
Gfx *func_809A1DD0(GraphicsContext *arg0, u32 arg1); /* static */
Gfx *func_809A1E28(GraphicsContext *arg0, u32 arg1); /* static */
extern FlexSkeletonHeader D_06013328;
static ? D_809A1F80;                                /* unable to generate initializer */
static ? D_809A1F98;                                /* unable to generate initializer */

typedef struct EnZl4 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ char pad188[0x108];
    /* 0x0290 */ void (*actionFunc)(EnZl4 *, GlobalContext *);
    /* 0x0294 */ char pad294[0x4C];                 /* maybe part of actionFunc[20]? */
    /* 0x02E0 */ s16 unk2E0;                        /* inferred */
    /* 0x02E2 */ char pad2E2[0xE];                  /* maybe part of unk2E0[8]? */
    /* 0x02F0 */ u32 unk2F0;                        /* inferred */
} EnZl4;                                            /* size 0x2F4 */

void func_809A1BB0(SkelAnime *arg0, ? *arg1, s32 arg2) {
    f32 temp_f0;
    void *temp_s0;
    f32 phi_f2;

    temp_s0 = arg1 + ((arg2 & 0xFFFF) * 0x18);
    temp_f0 = temp_s0->unkC;
    if (temp_f0 < 0.0f) {
        phi_f2 = (f32) SkelAnime_GetFrameCount(temp_s0->unk0);
    } else {
        phi_f2 = temp_f0;
    }
    SkelAnime_ChangeAnim(arg0, (AnimationHeader *) temp_s0->unk0, temp_s0->unk4, temp_s0->unk8, phi_f2, (u8) (s32) temp_s0->unk10, temp_s0->unk14);
}

void EnZl4_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnZl4 *this = (EnZl4 *) thisx;
    SkelAnime *sp30;
    SkelAnime *temp_a1;

    this->unk2E0 = 0;
    this->unk2F0 = 0xFF;
    this->actor.targetArrowOffset = 3000.0f;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 24.0f);
    temp_a1 = &this->unk144;
    sp30 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06013328, NULL, NULL, NULL, 0);
    func_809A1BB0(sp30, &D_809A1F80, 0);
    Actor_SetScale(&this->actor, 0.01f);
    this->actionFunc = func_809A1D0C;
}

void EnZl4_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnZl4 *this = (EnZl4 *) thisx;

}

void func_809A1D0C(EnZl4 *this, GlobalContext *globalCtx) {

}

void EnZl4_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnZl4 *this = (EnZl4 *) thisx;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk144;
    this = this;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    this->unk2F0 = this->unk2F0;
    this->actionFunc(this, globalCtx);
}

s32 func_809A1D60(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    ? sp4;

    sp4.unk0 = (s32) D_809A1F98.unk0;
    sp4.unk4 = (s32) D_809A1F98.unk4;
    sp4.unk8 = (s32) D_809A1F98.unk8;
    return 0;
}

void func_809A1DA4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3) {

}

void func_809A1DBC(GlobalContext *arg0, s32 arg1, Actor *arg2) {

}

void *func_809A1DD0(GraphicsContext *arg0, u32 arg1) {
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_v1 = arg0->polyOpa.d - 0x10;
    arg0->polyOpa.d = temp_v1;
    temp_v1->words.w1 = 0xC81049D8;
    temp_v0 = temp_v1 + 8;
    temp_v1->words.w0 = 0xE200001C;
    temp_v0->unk4 = (s32) (arg1 & 0xFF);
    temp_v0->unk0 = 0xFB000000;
    temp_v0_2 = temp_v0 + 8;
    temp_v0_2->unk0 = 0xDF000000;
    temp_v0_2->unk4 = 0;
    return temp_v1;
}

void *func_809A1E28(GraphicsContext *arg0, u32 arg1) {
    void *temp_v0;
    void *temp_v1;

    temp_v1 = arg0->polyOpa.d - 0x10;
    arg0->polyOpa.d = temp_v1;
    temp_v0 = temp_v1 + 8;
    temp_v1->words.w0 = 0xFB000000;
    temp_v1->words.w1 = arg1 & 0xFF;
    temp_v0->unk0 = 0xDF000000;
    temp_v0->unk4 = 0;
    return temp_v1;
}

void EnZl4_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnZl4 *this = (EnZl4 *) thisx;
    GraphicsContext *sp40;
    Gfx *sp38;
    Gfx *sp34;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    temp_a0 = globalCtx->state.gfxCtx;
    sp40 = temp_a0;
    func_8012C28C(temp_a0);
    if ((u32) this->unk2F0 < 0xFFU) {
        temp_v0 = sp40->polyOpa.p;
        sp40->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060030;
        sp38 = temp_v0;
        sp38->words.w1 = func_809A1DD0(globalCtx->state.gfxCtx, this->unk2F0);
    } else {
        temp_v0_2 = sp40->polyOpa.p;
        sp40->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDB060030;
        sp34 = temp_v0_2;
        sp34->words.w1 = func_809A1E28(globalCtx->state.gfxCtx, this->unk2F0);
    }
    func_801343C0(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_809A1D60, func_809A1DA4, func_809A1DBC, &this->actor);
}

