? func_800E01B8(f32 *, Camera *);                   /* extern */
? func_80115D5C(GlobalContext *);                   /* extern */
static u8 D_8099E3CF = {
    0xFF,
    0,
    0x8F,
    0,
    0x2E,
    0,
    0,
    0,
    0,
    2,
    0x66,
    4,
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
    2,
    0,
    0,
    0,
    0xFF,
    0xFF,
};
static u8 D_8099E3EF = {
    0xFF,
    0,
    0,
    0,
    0x96,
    0,
    0,
    0,
    0,
    4,
    0,
    4,
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
    3,
    0x9A,
    0,
    0,
    0xFF,
    0xFF,
};
static u8 D_8099E40F = {
    0xFF,
    0xFF,
    0xA8,
    0,
    0x79,
    0,
    0,
    0,
    0,
    4,
    0xCD,
    4,
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
    4,
    0x66,
    0,
    0,
    0xFF,
    0xFF,
};
static u8 D_8099E42F = {
    0xFF,
    0xFF,
    0x71,
    0,
    0x2E,
    0,
    0,
    0,
    0,
    5,
    0x9A,
    4,
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
    5,
    0x33,
    0,
    0,
    0xFF,
    0xFF,
};
static u8 D_8099E44F = {
    0xFF,
    0xFF,
    0x71,
    0xFF,
    0xD2,
    0,
    0,
    0,
    0,
    6,
    0x66,
    4,
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
    6,
    0,
    0,
    0,
    0xFF,
    0xFF,
};
static u8 D_8099E46F = {
    0xFF,
    0xFF,
    0xA8,
    0xFF,
    0x87,
    0,
    0,
    0,
    0,
    7,
    0x33,
    4,
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
    6,
    0xCD,
    0,
    0,
    0xFF,
    0xFF,
};
static u8 D_8099E48F = {
    0xFF,
    0,
    0,
    0xFF,
    0x6A,
    0,
    0,
    0,
    0,
    8,
    0,
    4,
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
    7,
    0x9A,
    0,
    0,
    0xFF,
    0xFF,
};
static u8 D_8099E4AF = {
    0xFF,
    0,
    0x58,
    0xFF,
    0x87,
    0,
    0,
    0,
    0,
    0,
    0xCD,
    4,
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
    0x66,
    0,
    0,
    0xFF,
    0xFF,
};
static u8 D_8099E4CF = {
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
    4,
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
    8,
    0x66,
    0,
    0,
    0xFF,
    0xFF,
};
static u8 D_8099E4EF = {
    0xFF,
    0,
    0x8F,
    0xFF,
    0xD2,
    0,
    0,
    0,
    0,
    1,
    0x9A,
    4,
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
    1,
    0x33,
    0,
    0,
    0xFF,
    0xFF,
};
static u8 D_8099E50F = 0xFF;
static ? D_8099E510;                                /* unable to generate initializer */
static ? D_8099E578;                                /* unable to generate initializer */
static ? D_8099E5E0;                                /* unable to generate initializer */
static ? D_8099E638;                                /* unable to generate initializer */

typedef struct OceffWipe4 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s16 unk144;                        /* inferred */
    /* 0x0146 */ char pad146[0x2];                  /* maybe part of unk144[2]? */
} OceffWipe4;                                       /* size 0x148 */

void OceffWipe4_Init(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe4 *this = (OceffWipe4 *) thisx;
    Camera *temp_t9;

    Actor_SetScale(&this->actor, 0.1f);
    this->unk144 = 0;
    temp_t9 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    this->actor.world.pos.x = temp_t9->eye.x;
    this->actor.world.pos.y = temp_t9->eye.y;
    this->actor.world.pos.z = temp_t9->eye.z;
}

void OceffWipe4_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe4 *this = (OceffWipe4 *) thisx;
    func_80115D5C(globalCtx);
    globalCtx->msgCtx.unk120B0 = 0;
}

void OceffWipe4_Update(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe4 *this = (OceffWipe4 *) thisx;
    Camera *temp_t9;
    s16 temp_v0;

    temp_v0 = this->unk144;
    temp_t9 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    this->actor.world.pos.x = temp_t9->eye.x;
    this->actor.world.pos.y = temp_t9->eye.y;
    this->actor.world.pos.z = temp_t9->eye.z;
    if ((s32) temp_v0 < 0x32) {
        this->unk144 = temp_v0 + 1;
        return;
    }
    Actor_MarkForDeath(&this->actor);
}

void OceffWipe4_Draw(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe4 *this = (OceffWipe4 *) thisx;
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
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s16 temp_v1;
    u8 temp_v0;
    s32 phi_v1;
    u8 phi_a1;

    spA4 = globalCtx->state.frames & 0xFFF;
    temp_t4 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    sp84.unk0 = temp_t4->eye.x;
    sp84.unk4 = (f32) temp_t4->eye.y;
    sp84.unk8 = (f32) temp_t4->eye.z;
    func_800E01B8(&sp74, globalCtx->cameraPtrs[globalCtx->activeCamera]);
    temp_v1 = this->unk144;
    phi_v1 = (s32) temp_v1;
    if ((s32) temp_v1 < 0x10) {
        sp9C = Math_SinS((s16) ((s32) (temp_v1 << 0x1A) >> 0x10)) * 1220.0f;
        phi_v1 = (s32) this->unk144;
    } else {
        sp9C = 1220.0f;
    }
    if (phi_v1 >= 0x1E) {
        phi_a1 = ((phi_v1 * -0xC) + 0x258) & 0xFF;
    } else {
        phi_a1 = 0xFFU;
    }
    D_8099E50F = phi_a1;
    temp_v0 = D_8099E50F;
    D_8099E4EF = temp_v0;
    D_8099E4CF = temp_v0;
    D_8099E4AF = temp_v0;
    D_8099E48F = temp_v0;
    D_8099E46F = temp_v0;
    D_8099E44F = temp_v0;
    D_8099E42F = temp_v0;
    D_8099E40F = temp_v0;
    D_8099E3EF = temp_v0;
    D_8099E3CF = temp_v0;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    SysMatrix_InsertTranslation(sp84 + sp74, sp88 + sp78, sp8C + sp7C, 0);
    Matrix_Scale(0.1f, 0.1f, 0.1f, 1);
    SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
    SysMatrix_InsertXRotation_s(0x708, 1);
    SysMatrix_InsertTranslation(0.0f, 0.0f, -sp9C, 1);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp68 = temp_v0_2;
    sp68->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    if (this->actor.params == 1) {
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = (u32) &D_8099E578;
        temp_v0_3->words.w0 = 0xDE000000;
    } else {
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = (u32) &D_8099E510;
        temp_v0_4->words.w0 = 0xDE000000;
    }
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) &D_8099E5E0;
    temp_v0_5->words.w0 = 0xDE000000;
    temp_v0_6 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xDE000000;
    sp58 = temp_v0_6;
    sp58->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, spA4 * 2, spA4 * -2, 0x20, 0x40, 1, (u32) -spA4, (u32) spA4, 0x20, 0x20);
    temp_v0_7 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = (u32) &D_8099E638;
    temp_v0_7->words.w0 = 0xDE000000;
}

