? func_800E01B8(f32 *, Camera *, OceffWipe6 *);     /* extern */
? func_80115D5C(GlobalContext *);                   /* extern */
static void D_80BCA8D0;                             /* unable to generate initializer */
static AnimatedMaterial D_80BCA8D8 = {0xFF, 1, &D_80BCA8D0};
static s8 D_80BCA8FF = {
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
static s8 D_80BCA91F = {
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
static s8 D_80BCA93F = {0xFF, 0xFF, 0xA8, 0, 0x79, 0, 0, 0, 0, 4, 0xCD, 4, 0, 0xFF, 0xFF, 0xFF, 0};
static ? D_80BCA950;                                /* unable to generate initializer */
static ? D_80BCAA40;                                /* unable to generate initializer */
static ? D_80BCAA50;                                /* unable to generate initializer */

typedef struct OceffWipe6 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s16 unk144;                        /* inferred */
    /* 0x0146 */ char pad146[0x2];                  /* maybe part of unk144[2]? */
} OceffWipe6;                                       /* size 0x148 */

void OceffWipe6_Init(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe6 *this = (OceffWipe6 *) thisx;
    Camera *temp_t9;

    Actor_SetScale(&this->actor, 1.0f);
    this->unk144 = 0;
    temp_t9 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    this->actor.world.pos.x = temp_t9->eye.x;
    this->actor.world.pos.y = temp_t9->eye.y;
    this->actor.world.pos.z = temp_t9->eye.z;
}

void OceffWipe6_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe6 *this = (OceffWipe6 *) thisx;
    func_80115D5C(globalCtx);
    globalCtx->msgCtx.unk120B0 = 0;
}

void OceffWipe6_Update(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe6 *this = (OceffWipe6 *) thisx;
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

void OceffWipe6_Draw(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe6 *this = (OceffWipe6 *) thisx;
    f32 sp60;
    f32 sp48;
    f32 sp38;
    GraphicsContext *sp30;
    Gfx *sp28;
    ? *temp_v0;
    Camera *temp_t0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0_2;
    OceffWipe6 *temp_a2;
    s16 temp_a1;
    s32 temp_a0;
    s32 phi_a1;
    s8 phi_v1;
    ? *phi_v0;

    temp_a2 = this;
    temp_t0 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    sp48.unk0 = temp_t0->eye.x;
    sp48.unk4 = (f32) temp_t0->eye.y;
    sp48.unk8 = (f32) temp_t0->eye.z;
    this = temp_a2;
    func_800E01B8(&sp38, globalCtx->cameraPtrs[globalCtx->activeCamera], temp_a2);
    temp_a1 = this->unk144;
    phi_a1 = (s32) temp_a1;
    if ((s32) temp_a1 < 0x20) {
        temp_a0 = (s32) (temp_a1 << 0x19) >> 0x10;
        this = this;
        sp60 = Math_SinS((s16) temp_a0) * 1220.0f;
        phi_a1 = (s32) this->unk144;
    } else {
        sp60 = 1220.0f;
    }
    if (phi_a1 >= 0x50) {
        phi_v1 = ((phi_a1 * -0xC) + 0x4B0) & 0xFF;
    } else {
        phi_v1 = 0xFF;
    }
    D_80BCA8FF = phi_v1;
    D_80BCA91F = phi_v1;
    D_80BCA93F = phi_v1;
    phi_v0 = &D_80BCA950;
    do {
        temp_v0 = phi_v0 + 0x80;
        temp_v0->unk-51 = phi_v1;
        temp_v0->unk-31 = phi_v1;
        temp_v0->unk-11 = phi_v1;
        temp_v0->unk-71 = phi_v1;
        phi_v0 = temp_v0;
    } while (temp_v0 != &D_80BCAA50);
    temp_a0_2 = globalCtx->state.gfxCtx;
    sp30 = temp_a0_2;
    func_8012C2DC(temp_a0_2);
    SysMatrix_InsertTranslation(sp48 + sp38, sp4C + sp3C, sp50 + sp40, 0);
    Matrix_Scale(0.1f, 0.1f, 0.1f, 1);
    SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
    SysMatrix_InsertXRotation_s(0x708, 1);
    SysMatrix_InsertTranslation(0.0f, 0.0f, -sp60, 1);
    temp_v0_2 = sp30->polyXlu.p;
    sp30->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp28 = temp_v0_2;
    sp28->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    AnimatedMat_Draw(globalCtx, &D_80BCA8D8);
    temp_v0_3 = sp30->polyXlu.p;
    sp30->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) &D_80BCAA40;
    temp_v0_3->words.w0 = 0xDE000000;
}

