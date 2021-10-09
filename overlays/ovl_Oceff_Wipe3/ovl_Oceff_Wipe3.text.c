? func_800E01B8(f32 *, Camera *, OceffWipe3 *);     /* extern */
? func_80115D5C(GlobalContext *);                   /* extern */
static u8 D_80988E2F = {
    0xFF,
    0,
    0x8F,
    0,
    0x2E,
    0,
    0,
    0,
    0,
    4,
    0xCD,
    8,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    1,
    0x2C,
    0,
    0,
    3,
    0xE8,
    0,
    0,
    4,
    0,
    0,
    0,
    0xFF,
    0xFF,
};
static u8 D_80988E4F = {
    0xFF,
    0,
    0,
    0,
    0x96,
    0,
    0,
    0,
    0,
    8,
    0,
    8,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0,
    0x5D,
    1,
    0x1D,
    3,
    0xE8,
    0,
    0,
    7,
    0x33,
    0,
    0,
    0xFF,
    0xFF,
};
static u8 D_80988E6F = {
    0xFF,
    0xFF,
    0xA8,
    0,
    0x79,
    0,
    0,
    0,
    0,
    9,
    0x9A,
    8,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0xFF,
    0xA3,
    1,
    0x1D,
    3,
    0xE8,
    0,
    0,
    8,
    0xCD,
    0,
    0,
    0xFF,
    0xFF,
};
static u8 D_80988E8F = {
    0xFF,
    0xFF,
    0x71,
    0,
    0x2E,
    0,
    0,
    0,
    0,
    0xB,
    0x33,
    8,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0xFF,
    0xD,
    0,
    0xB0,
    3,
    0xE8,
    0,
    0,
    0xA,
    0x66,
    0,
    0,
    0xFF,
    0xFF,
};
static u8 D_80988EAF = {
    0xFF,
    0xFF,
    0x71,
    0xFF,
    0xD2,
    0,
    0,
    0,
    0,
    0xC,
    0xCD,
    8,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0xFE,
    0xD4,
    0,
    0,
    3,
    0xE8,
    0,
    0,
    0xC,
    0,
    0,
    0,
    0xFF,
    0xFF,
};
static u8 D_80988ECF = {
    0xFF,
    0xFF,
    0xA8,
    0xFF,
    0x87,
    0,
    0,
    0,
    0,
    0xE,
    0x66,
    8,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0xFF,
    0xD,
    0xFF,
    0x50,
    3,
    0xE8,
    0,
    0,
    0xD,
    0x9A,
    0,
    0,
    0xFF,
    0xFF,
};
static u8 D_80988EEF = {
    0xFF,
    0,
    0,
    0xFF,
    0x6A,
    0,
    0,
    0,
    0,
    0x10,
    0,
    8,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0xFF,
    0xA3,
    0xFE,
    0xE3,
    3,
    0xE8,
    0,
    0,
    0xF,
    0x33,
    0,
    0,
    0xFF,
    0xFF,
};
static u8 D_80988F0F = {
    0xFF,
    0,
    0x58,
    0xFF,
    0x87,
    0,
    0,
    0,
    0,
    1,
    0x9A,
    8,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0,
    0x5D,
    0xFE,
    0xE3,
    3,
    0xE8,
    0,
    0,
    0,
    0xCD,
    0,
    0,
    0xFF,
    0xFF,
};
static u8 D_80988F2F = {
    0xFF,
    0,
    0,
    0xFF,
    0x6A,
    0,
    0,
    0,
    0,
    0,
    0,
    8,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0,
    0x5D,
    0xFE,
    0xE3,
    3,
    0xE8,
    0,
    0,
    0x10,
    0xCD,
    0,
    0,
    0xFF,
    0xFF,
};
static u8 D_80988F4F = {
    0xFF,
    0,
    0x8F,
    0xFF,
    0xD2,
    0,
    0,
    0,
    0,
    3,
    0x33,
    8,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0,
    0xF3,
    0xFF,
    0x50,
    3,
    0xE8,
    0,
    0,
    2,
    0x66,
    0,
    0,
    0xFF,
    0xFF,
};
static u8 D_80988F6F = 0xFF;
static ? D_80988F70;                                /* unable to generate initializer */
static ? D_80988FF8;                                /* unable to generate initializer */

typedef struct OceffWipe3 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s16 unk144;                        /* inferred */
    /* 0x0146 */ char pad146[0x2];                  /* maybe part of unk144[2]? */
} OceffWipe3;                                       /* size 0x148 */

void OceffWipe3_Init(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe3 *this = (OceffWipe3 *) thisx;
    Camera *temp_t9;

    Actor_SetScale(&this->actor, 0.1f);
    this->unk144 = 0;
    temp_t9 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    this->actor.world.pos.x = temp_t9->eye.x;
    this->actor.world.pos.y = temp_t9->eye.y;
    this->actor.world.pos.z = temp_t9->eye.z;
}

void OceffWipe3_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe3 *this = (OceffWipe3 *) thisx;
    func_80115D5C(globalCtx);
    globalCtx->msgCtx.unk120B0 = 0;
}

void OceffWipe3_Update(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe3 *this = (OceffWipe3 *) thisx;
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

void OceffWipe3_Draw(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe3 *this = (OceffWipe3 *) thisx;
    s32 spA4;
    f32 sp9C;
    f32 sp84;
    f32 sp74;
    Gfx *sp68;
    Gfx *sp58;
    Camera *temp_t4;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_a0_2;
    GraphicsContext *temp_s0_2;
    OceffWipe3 *temp_a2;
    s16 temp_s0;
    s32 temp_a0;
    u8 temp_v0;
    s32 phi_s0;
    u8 phi_v1;

    temp_a2 = this;
    spA4 = globalCtx->state.frames & 0xFFF;
    temp_t4 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    sp84.unk0 = temp_t4->eye.x;
    sp84.unk4 = (f32) temp_t4->eye.y;
    sp84.unk8 = (f32) temp_t4->eye.z;
    this = temp_a2;
    func_800E01B8(&sp74, globalCtx->cameraPtrs[globalCtx->activeCamera], temp_a2);
    temp_s0 = this->unk144;
    phi_s0 = (s32) temp_s0;
    if ((s32) temp_s0 < 0x20) {
        temp_a0 = (s32) (temp_s0 << 0x19) >> 0x10;
        this = this;
        sp9C = Math_SinS((s16) temp_a0) * 1220.0f;
        phi_s0 = (s32) this->unk144;
    } else {
        sp9C = 1220.0f;
    }
    if (phi_s0 >= 0x50) {
        phi_v1 = ((phi_s0 * -0xC) + 0x4B0) & 0xFF;
    } else {
        phi_v1 = 0xFFU;
    }
    D_80988F6F = phi_v1;
    temp_v0 = D_80988F6F;
    D_80988F4F = temp_v0;
    D_80988F2F = temp_v0;
    D_80988F0F = temp_v0;
    D_80988EEF = temp_v0;
    D_80988ECF = temp_v0;
    D_80988EAF = temp_v0;
    D_80988E8F = temp_v0;
    D_80988E6F = temp_v0;
    D_80988E4F = temp_v0;
    D_80988E2F = temp_v0;
    temp_a0_2 = globalCtx->state.gfxCtx;
    temp_s0_2 = temp_a0_2;
    func_8012C2DC(temp_a0_2);
    SysMatrix_InsertTranslation(sp84 + sp74, sp88 + sp78, sp8C + sp7C, 0);
    Matrix_Scale(0.1f, 0.1f, 0.1f, 1);
    SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
    SysMatrix_InsertXRotation_s(0x708, 1);
    SysMatrix_InsertTranslation(0.0f, 0.0f, -sp9C, 1);
    temp_v0_2 = temp_s0_2->polyXlu.p;
    temp_s0_2->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp68 = temp_v0_2;
    sp68->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_3 = temp_s0_2->polyXlu.p;
    temp_s0_2->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = -0x5501;
    temp_v0_3->words.w0 = 0xFA000000;
    temp_v0_4 = temp_s0_2->polyXlu.p;
    temp_s0_2->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = 0x64C80080;
    temp_v0_4->words.w0 = 0xFB000000;
    temp_v0_5 = temp_s0_2->polyXlu.p;
    temp_s0_2->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) &D_80988F70;
    temp_v0_5->words.w0 = 0xDE000000;
    temp_v0_6 = temp_s0_2->polyXlu.p;
    temp_s0_2->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xDE000000;
    sp58 = temp_v0_6;
    sp58->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, spA4 * 0xC, spA4 * -0xC, 0x40, 0x40, 1, spA4 * 8, spA4 * -8, 0x40, 0x40);
    temp_v0_7 = temp_s0_2->polyXlu.p;
    temp_s0_2->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = (u32) &D_80988FF8;
    temp_v0_7->words.w0 = 0xDE000000;
}

