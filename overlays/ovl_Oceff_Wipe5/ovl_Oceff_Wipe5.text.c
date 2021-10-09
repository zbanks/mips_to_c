? func_800E01B8(f32 *, Camera *, OceffWipe5 *, Camera *); /* extern */
? func_80115D5C(GlobalContext *);                   /* extern */
static void D_80BC7F10;                             /* unable to generate initializer */
static AnimatedMaterial D_80BC7F18 = {0xFF, 1, &D_80BC7F10};
static s8 D_80BC8F3F = {
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
static s8 D_80BC8F5F = {
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
static s8 D_80BC8F7F = {0xFF, 0xFF, 0xA8, 0, 0x79, 0, 0, 0, 0, 4, 0xCD, 4, 0, 0xFF, 0xFF, 0xFF, 0};
static ? D_80BC8F90;                                /* unable to generate initializer */
static ? D_80BC9080;                                /* unable to generate initializer */
static ? D_80BC9090;                                /* unable to generate initializer */
static ? D_80BC9188;                                /* unable to generate initializer */
static ? D_80BC9198;                                /* unable to generate initializer */

typedef struct OceffWipe5 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s16 unk144;                        /* inferred */
    /* 0x0146 */ char pad146[0x2];                  /* maybe part of unk144[2]? */
} OceffWipe5;                                       /* size 0x148 */

void OceffWipe5_Init(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe5 *this = (OceffWipe5 *) thisx;
    Camera *temp_t9;

    Actor_SetScale(&this->actor, 1.0f);
    this->unk144 = 0;
    temp_t9 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    this->actor.world.pos.x = temp_t9->eye.x;
    this->actor.world.pos.y = temp_t9->eye.y;
    this->actor.world.pos.z = temp_t9->eye.z;
}

void OceffWipe5_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe5 *this = (OceffWipe5 *) thisx;
    func_80115D5C(globalCtx);
    globalCtx->msgCtx.unk120B0 = 0;
}

void OceffWipe5_Update(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe5 *this = (OceffWipe5 *) thisx;
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

void OceffWipe5_Draw(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe5 *this = (OceffWipe5 *) thisx;
    f32 sp70;
    f32 sp58;
    f32 sp48;
    s32 sp40;
    f32 sp3C;
    GraphicsContext *sp38;
    Gfx *sp30;
    ? *temp_v0_3;
    Camera *temp_a3;
    Camera *temp_t0;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_a0_2;
    OceffWipe5 *temp_a2;
    s16 temp_a1;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    u16 temp_v0_2;
    void *temp_v1_2;
    void *temp_v1_3;
    s32 phi_v1;
    f32 phi_f2;
    s32 phi_a1;
    s8 phi_v1_2;
    ? *phi_v0;

    temp_a2 = this;
    temp_t0 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    sp58.unk0 = temp_t0->eye.x;
    sp58.unk4 = (f32) temp_t0->eye.y;
    sp58.unk8 = (f32) temp_t0->eye.z;
    temp_v0 = temp_a2->actor.params & 0xF;
    temp_a3 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    temp_v1 = temp_v0 * 3;
    phi_v1 = temp_v1;
    phi_f2 = 1220.0f;
    if ((temp_v0 == 2) && (globalCtx->sceneNum == 0x2F) && ((temp_v0_2 = globalCtx->csCtx.unk_12, (temp_v0_2 == 0)) || (temp_v0_2 == 1)) && (globalCtx->csCtx.state != 0)) {
        phi_f2 = 1150.0f;
    }
    if (temp_v1 >= 0xD) {
        phi_v1 = 0;
    }
    sp40 = phi_v1;
    this = temp_a2;
    sp3C = phi_f2;
    func_800E01B8(&sp48, temp_a3, temp_a2, temp_a3);
    temp_a1 = this->unk144;
    phi_a1 = (s32) temp_a1;
    if ((s32) temp_a1 < 0x20) {
        temp_a0 = (s32) (temp_a1 << 0x19) >> 0x10;
        this = this;
        sp3C = phi_f2;
        sp70 = Math_SinS((s16) temp_a0) * phi_f2;
        phi_a1 = (s32) this->unk144;
    } else {
        sp70 = phi_f2;
    }
    if (phi_a1 >= 0x50) {
        phi_v1_2 = ((phi_a1 * -0xC) + 0x4B0) & 0xFF;
    } else {
        phi_v1_2 = 0xFF;
    }
    D_80BC8F3F = phi_v1_2;
    D_80BC8F5F = phi_v1_2;
    D_80BC8F7F = phi_v1_2;
    phi_v0 = &D_80BC8F90;
    do {
        temp_v0_3 = phi_v0 + 0x80;
        temp_v0_3->unk-51 = phi_v1_2;
        temp_v0_3->unk-31 = phi_v1_2;
        temp_v0_3->unk-11 = phi_v1_2;
        temp_v0_3->unk-71 = phi_v1_2;
        phi_v0 = temp_v0_3;
    } while (temp_v0_3 != &D_80BC9090);
    temp_a0_2 = globalCtx->state.gfxCtx;
    sp38 = temp_a0_2;
    func_8012C2DC(temp_a0_2);
    SysMatrix_InsertTranslation(sp58 + sp48, sp5C + sp4C, sp60 + sp50, 0);
    Matrix_Scale(0.1f, 0.1f, 0.1f, 1);
    SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
    SysMatrix_InsertXRotation_s(0x708, 1);
    SysMatrix_InsertTranslation(0.0f, 0.0f, -sp70, 1);
    temp_v0_4 = sp38->polyXlu.p;
    sp38->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDA380003;
    sp30 = temp_v0_4;
    sp30->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_5 = sp38->polyXlu.p;
    sp38->polyXlu.p = temp_v0_5 + 8;
    temp_v1_2 = sp40 + &D_80BC9188;
    temp_v0_5->words.w0 = 0xFA000080;
    temp_v0_5->words.w1 = (temp_v1_2->unk2 << 8) | (temp_v1_2->unk0 << 0x18) | (temp_v1_2->unk1 << 0x10) | 0xFF;
    temp_v0_6 = sp38->polyXlu.p;
    sp38->polyXlu.p = temp_v0_6 + 8;
    temp_v1_3 = sp40 + &D_80BC9198;
    temp_v0_6->words.w0 = 0xFB000000;
    temp_v0_6->words.w1 = (temp_v1_3->unk2 << 8) | (temp_v1_3->unk0 << 0x18) | (temp_v1_3->unk1 << 0x10) | 0xFF;
    AnimatedMat_Draw(globalCtx, &D_80BC7F18);
    temp_v0_7 = sp38->polyXlu.p;
    sp38->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = (u32) &D_80BC9080;
    temp_v0_7->words.w0 = 0xDE000000;
}

