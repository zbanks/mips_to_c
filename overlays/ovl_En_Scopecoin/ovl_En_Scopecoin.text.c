struct _mips2c_stack_EnScopecoin_Destroy {};        /* size 0x0 */

struct _mips2c_stack_EnScopecoin_Draw {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x10];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnScopecoin_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnScopecoin_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BFCFA0 {};              /* size 0x0 */

struct _mips2c_stack_func_80BFCFB8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

static ? D_80BFD280;                                /* unable to generate initializer */

void func_80BFCFA0(EnScopecoin *this, GlobalContext *globalCtx) {
    this->actor.shape.rot.y += 0x1F4;
}

void func_80BFCFB8(EnScopecoin *this, GlobalContext *globalCtx) {
    if (Actor_GetCollectibleFlag(globalCtx, (s32) (this->actor.params & 0x7F0) >> 4) != 0) {
        Item_DropCollectible(globalCtx, (Vec3f *) &this->actor.world, 2U);
        Actor_MarkForDeath((Actor *) this);
    }
}

void EnScopecoin_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    EnScopecoin *this = (EnScopecoin *) thisx;

    Actor_SetScale((Actor *) this, 0.01f);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 10.0f);
    this->unk148 = this->actor.params & 0xF;
    temp_v0 = this->unk148;
    if (((s32) temp_v0 < 0) || ((s32) temp_v0 >= 8)) {
        this->unk148 = 0;
    }
    if ((globalCtx->actorCtx.unk5 & 2) != 0) {
        if (((this->unk148 == 2) || (this->unk148 == 6)) && (Actor_GetCollectibleFlag(globalCtx, (s32) (this->actor.params & 0x7F0) >> 4) != 0)) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->actionFunc = func_80BFCFA0;
        this->actor.shape.yOffset = 700.0f;
        return;
    }
    if ((this->unk148 == 2) || (this->unk148 == 6)) {
        if (Actor_GetCollectibleFlag(globalCtx, (s32) (this->actor.params & 0x7F0) >> 4) != 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->actor.draw = NULL;
        this->actionFunc = func_80BFCFB8;
        return;
    }
    Actor_MarkForDeath((Actor *) this);
}

void EnScopecoin_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnScopecoin *this = (EnScopecoin *) thisx;

}

void EnScopecoin_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnScopecoin *this = (EnScopecoin *) thisx;
    this->actionFunc(this, globalCtx);
}

void EnScopecoin_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp24;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    EnScopecoin *this = (EnScopecoin *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    func_800B8050((Actor *) this, globalCtx, 0);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_v0;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060020;
    sp20 = temp_v0_2;
    sp20->words.w1 = Lib_SegmentedToVirtual(*(&D_80BFD280 + (this->unk148 * 4)));
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) D_040622C0;
    temp_v0_3->words.w0 = 0xDE000000;
}
