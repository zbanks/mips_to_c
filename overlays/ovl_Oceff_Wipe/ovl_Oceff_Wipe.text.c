? func_800E01B8(f32 *, Camera *);                   /* extern */
? func_80115D5C(GlobalContext *);                   /* extern */
static ? D_80976DA0;                                /* unable to generate initializer */
static ? D_80977020;                                /* unable to generate initializer */
static ? D_809770A8;                                /* unable to generate initializer */
static ? D_80977160;                                /* unable to generate initializer */
static ? D_80977174;                                /* unable to generate initializer */

typedef struct OceffWipe {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s16 unk144;                        /* inferred */
    /* 0x0146 */ char pad146[0x2];                  /* maybe part of unk144[2]? */
} OceffWipe;                                        /* size 0x148 */

void OceffWipe_Init(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe *this = (OceffWipe *) thisx;
    Camera *temp_t9;

    Actor_SetScale(&this->actor, 0.1f);
    this->unk144 = 0;
    temp_t9 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    this->actor.world.pos.x = temp_t9->eye.x;
    this->actor.world.pos.y = temp_t9->eye.y;
    this->actor.world.pos.z = temp_t9->eye.z;
}

void OceffWipe_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe *this = (OceffWipe *) thisx;
    func_80115D5C(globalCtx);
    globalCtx->msgCtx.unk120B0 = 0;
}

void OceffWipe_Update(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe *this = (OceffWipe *) thisx;
    Camera *temp_t9;
    s16 temp_v0;

    temp_v0 = this->unk144;
    temp_t9 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    this->actor.world.pos.x = temp_t9->eye.x;
    this->actor.world.pos.y = temp_t9->eye.y;
    this->actor.world.pos.z = temp_t9->eye.z;
    if ((s32) temp_v0 < 0x64) {
        this->unk144 = temp_v0 + 1;
        return;
    }
    Actor_MarkForDeath(&this->actor);
}

void OceffWipe_Draw(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe *this = (OceffWipe *) thisx;
    s32 spA4;
    f32 sp9C;
    s8 sp96;
    s8 sp95;
    u8 sp94;
    f32 sp84;
    f32 sp74;
    Gfx *sp68;
    Gfx *sp50;
    ? *temp_a0;
    ? *temp_v1_2;
    Camera *temp_t5;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_s0;
    s16 temp_v1;
    s32 temp_a2_2;
    u32 temp_a3_2;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_a3;
    u8 temp_t0;
    s32 phi_v1;
    ? *phi_a0;
    ? *phi_v1_2;

    spA4 = globalCtx->state.frames & 0xFF;
    temp_t5 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    sp84.unk0 = temp_t5->eye.x;
    sp84.unk4 = (f32) temp_t5->eye.y;
    sp84.unk8 = (f32) temp_t5->eye.z;
    func_800E01B8(&sp74, globalCtx->cameraPtrs[globalCtx->activeCamera]);
    temp_v1 = this->unk144;
    temp_s0 = globalCtx->state.gfxCtx;
    phi_v1 = (s32) temp_v1;
    if ((s32) temp_v1 < 0x20) {
        sp9C = Math_SinS((s16) ((s32) (temp_v1 << 0x19) >> 0x10)) * 1360.0f;
        phi_v1 = (s32) this->unk144;
    } else {
        sp9C = 1360.0f;
    }
    if (phi_v1 >= 0x50) {
        sp94 = 0;
        sp95 = (0x64 - this->unk144) * 8;
        sp96 = (0x64 - this->unk144) * 0xC;
    } else {
        sp94 = 0;
        sp95 = 0xA0;
        sp96 = 0xFF;
    }
    phi_a0 = &D_80977160;
    phi_v1_2 = &D_80976DA0;
    do {
        temp_a1 = phi_a0->unk0;
        temp_a2 = phi_a0->unk1;
        temp_a3 = phi_a0->unk2;
        phi_v1_2->unkF = (u8) (&sp94)[(s32) (temp_a1 & 0xF0) >> 4];
        phi_v1_2->unk1F = (u8) (&sp94)[temp_a1 & 0xF];
        temp_t0 = phi_a0->unk3;
        phi_v1_2->unk2F = (u8) (&sp94)[(s32) (temp_a2 & 0xF0) >> 4];
        phi_v1_2->unk3F = (u8) (&sp94)[temp_a2 & 0xF];
        phi_v1_2->unk4F = (u8) (&sp94)[(s32) (temp_a3 & 0xF0) >> 4];
        phi_v1_2->unk5F = (u8) (&sp94)[temp_a3 & 0xF];
        temp_a0 = phi_a0 + 4;
        temp_v1_2 = phi_v1_2 + 0x80;
        temp_v1_2->unk-1 = (u8) (&sp94)[temp_t0 & 0xF];
        temp_v1_2->unk-11 = (u8) (&sp94)[(s32) (temp_t0 & 0xF0) >> 4];
        phi_a0 = temp_a0;
        phi_v1_2 = temp_v1_2;
    } while (temp_a0 != &D_80977174);
    func_8012C2DC(globalCtx->state.gfxCtx);
    SysMatrix_InsertTranslation(sp84 + sp74, sp88 + sp78, sp8C + sp7C, 0);
    Matrix_Scale(0.1f, 0.1f, 0.1f, 1);
    SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
    SysMatrix_InsertXRotation_s(0x708, 1);
    SysMatrix_InsertTranslation(0.0f, 0.0f, -sp9C, 1);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp68 = temp_v0;
    sp68->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    if (this->actor.params != 0) {
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = 0xAAFFFFFF;
        temp_v0_2->words.w0 = 0xFA000000;
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFB000000;
        temp_v0_3->words.w1 = 0x96FF80;
    } else {
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = -0x3701;
        temp_v0_4->words.w0 = 0xFA000000;
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = 0x6400FF80;
        temp_v0_5->words.w0 = 0xFB000000;
    }
    temp_v0_6 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w1 = (u32) &D_80977020;
    temp_v0_6->words.w0 = 0xDE000000;
    temp_v0_7 = temp_s0->polyXlu.p;
    temp_a3_2 = spA4 * -2;
    temp_s0->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w0 = 0xDE000000;
    temp_a2_2 = -spA4;
    sp50 = temp_v0_7;
    sp50->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, (u32) temp_a2_2, temp_a3_2, 0x20, 0x20, 1, (u32) temp_a2_2, temp_a3_2, 0x20, 0x20);
    temp_v0_8 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_8 + 8;
    temp_v0_8->words.w1 = (u32) &D_809770A8;
    temp_v0_8->words.w0 = 0xDE000000;
}

