extern void D_0600DD40;
extern ? D_0600DEF0;
static ? D_80A61740;                                /* unable to generate initializer */
static ? D_80A61754;                                /* unable to generate initializer */
static u8 D_80A61768 = {
    2,
    1,
    1,
    2,
    0,
    0,
    2,
    1,
    0,
    2,
    1,
    0,
    2,
    1,
    0,
    2,
    1,
    0,
    2,
    1,
    0,
    2,
    1,
    0,
    1,
    2,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};



void EnDyExtra_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnDyExtra *this = (EnDyExtra *) thisx;

}

void EnDyExtra_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnDyExtra *this = (EnDyExtra *) thisx;
    this->actor.scale.x = 0.025f;
    this->type = this->actor.params;
    this->unk160.x = this->actor.world.pos.x;
    this->actor.scale.z = 0.025f;
    this->actor.scale.y = 0.039f;
    this->unk160.z = this->actor.world.pos.z;
    this->unk160.y = this->actor.world.pos.y;
    this->unk14C = 0x3C;
    this->actionFunc = func_80A61334;
    this->actor.gravity = -0.2f;
    this->unk150 = 1.0f;
}

void func_80A61334(EnDyExtra *this, GlobalContext *globalCtx) {
    Math_ApproachF(&this->actor.gravity, 0.0f, 0.1f, 0.005f);
    if (this->actor.world.pos.y < -85.0f) {
        this->actor.velocity.y = 0.0f;
    }
    if ((this->unk14C == 0) && (this->unk14A != 0)) {
        this->unk14C = 0x32;
        this->actionFunc = func_80A613C8;
    }
}

void func_80A613C8(EnDyExtra *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    Math_ApproachF(&this->actor.gravity, 0.0f, 0.1f, 0.005f);
    if ((this->unk14C == 0) || (temp_f0 = this->unk150, (temp_f0 < 0.02f))) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->unk150 = temp_f0 - 0.02f;
    if (this->actor.world.pos.y < -85.0f) {
        this->actor.velocity.y = 0.0f;
    }
}

void EnDyExtra_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnDyExtra *this = (EnDyExtra *) thisx;
    s16 temp_v0;

    temp_v0 = this->unk14C;
    if (temp_v0 != 0) {
        this->unk14C = temp_v0 - 1;
    }
    Audio_PlayActorSound2(&this->actor, 0xC4U);
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
}

void EnDyExtra_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnDyExtra *this = (EnDyExtra *) thisx;
    s8 sp6A;
    s8 sp69;
    u8 sp68;
    Gfx *sp5C;
    Gfx *sp54;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_s0;
    s32 temp_v1;
    u32 temp_v1_2;
    u8 temp_a1;
    void *temp_v0;
    void *temp_v1_3;
    void *temp_v1_4;
    u8 *phi_a0;
    s32 phi_v1;

    temp_s0 = globalCtx->state.gfxCtx;
    temp_v0 = Lib_SegmentedToVirtual(&D_0600DD40);
    sp68 = 0;
    sp69 = (s8) (s32) (this->unk150 * 240.0f);
    sp6A = (s8) (s32) (this->unk150 * 255.0f);
    phi_a0 = &D_80A61768;
    phi_v1 = 0;
    do {
        temp_a1 = *phi_a0;
        if (temp_a1 != 0) {
            (temp_v0 + (phi_v1 * 0x10))->unkF = (u8) (&sp68)[temp_a1];
        }
        temp_v1 = phi_v1 + 1;
        phi_a0 += 1;
        phi_v1 = temp_v1;
    } while (temp_v1 != 0x1B);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060020;
    temp_v1_2 = globalCtx->state.frames;
    sp5C = temp_v0_2;
    sp5C->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, temp_v1_2 * 2, 0U, 0x20, 0x40, 1, temp_v1_2, (s32) temp_v1_2 * -8, 0x10, 0x10);
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0;
    temp_v0_3->words.w0 = 0xE7000000;
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDA380003;
    sp54 = temp_v0_4;
    sp54->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xFA000080;
    temp_v1_3 = (this->type * 4) + &D_80A61740;
    temp_v0_5->words.w1 = (temp_v1_3->unk2 << 8) | (temp_v1_3->unk0 << 0x18) | (temp_v1_3->unk1 << 0x10) | 0xFF;
    temp_v0_6 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xFB000000;
    temp_v1_4 = (this->type * 4) + &D_80A61754;
    temp_v0_6->words.w1 = (temp_v1_4->unk2 << 8) | (temp_v1_4->unk0 << 0x18) | (temp_v1_4->unk1 << 0x10) | 0x80;
    temp_v0_7 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w0 = 0xDE000000;
    temp_v0_7->words.w1 = (u32) &D_0600DEF0;
}

