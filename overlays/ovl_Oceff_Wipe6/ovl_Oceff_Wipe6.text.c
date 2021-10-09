typedef struct {
    /* 0x00000 */ View view;
    /* 0x00168 */ Font font;
    /* 0x11EF4 */ char pad_11EF4[0x10];
    /* 0x11F04 */ u16 unk11F04;
    /* 0x11F06 */ char pad_11F06[0x4];              /* maybe part of unk11F04[3]? */
    /* 0x11F0A */ u8 unk11F0A;
    /* 0x11F0B */ char pad_11F0B[0x5];              /* maybe part of unk11F0A[6]? */
    /* 0x11F10 */ s32 unk11F10;
    /* 0x11F14 */ char pad_11F14[0xE];              /* maybe part of unk11F10[4]? */
    /* 0x11F22 */ u8 unk11F22;
    /* 0x11F23 */ char pad_11F23[0xFD];             /* maybe part of unk11F22[254]? */
    /* 0x12020 */ u8 unk12020;
    /* 0x12021 */ u8 choiceIndex;
    /* 0x12022 */ char pad_12022[0x1];
    /* 0x12023 */ s8 unk12023;
    /* 0x12024 */ char pad_12024[0x6];              /* maybe part of unk12023[7]? */
    /* 0x1202A */ u16 unk1202A;
    /* 0x1202C */ char pad_1202C[0x2];
    /* 0x1202E */ u16 unk1202E;
    /* 0x12030 */ char pad_12030[0x14];             /* maybe part of unk1202E[11]? */
    /* 0x12044 */ s16 unk12044;
    /* 0x12046 */ char pad_12046[0x24];             /* maybe part of unk12044[19]? */
    /* 0x1206A */ s16 unk1206A;
    /* 0x1206C */ s32 unk1206C;
    /* 0x12070 */ char pad_12070[0x8];              /* maybe part of unk1206C[3]? */
    /* 0x12078 */ s32 bankRupeesSelected;
    /* 0x1207C */ s32 bankRupees;
    /* 0x12080 */ char pad_12080[0x30];             /* maybe part of bankRupees[13]? */
    /* 0x120B0 */ s8 unk_120B0;                     /* inferred */
    /* 0x120B1 */ u8 unk120B1;
    /* 0x120B2 */ char pad_120B2[0x2E];             /* maybe part of unk120B1[47]? */
} MessageContext;                                   /* size = 0x120E0 */

typedef struct OceffWipe6 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s16 unk_144;                        /* inferred */
    /* 0x146 */ char pad_146[0x2];
} OceffWipe6;                                       /* size = 0x148 */

struct _mips2c_stack_OceffWipe6_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_OceffWipe6_Draw {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ GraphicsContext *sp30;               /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0xC];                    /* maybe part of sp50[4]? */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];
};                                                  /* size = 0x68 */

struct _mips2c_stack_OceffWipe6_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_OceffWipe6_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

? func_800E01B8(f32 *, Camera *, OceffWipe6 *);     /* extern */
? func_80115D5C(GlobalContext *);                   /* extern */
static void D_80BCA8D0;                             /* unable to generate initializer */
static AnimatedMaterial D_80BCA8D8 = {0xFF, 1, &D_80BCA8D0};
static s8 D_80BCA8FF[31] = {
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
static s8 D_80BCA91F[31] = {
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
static s8 D_80BCA93F[17] = {0xFF, 0xFF, 0xA8, 0, 0x79, 0, 0, 0, 0, 4, 0xCD, 4, 0, 0xFF, 0xFF, 0xFF, 0};
static ? D_80BCA950;                                /* unable to generate initializer */
static ? D_80BCAA40;                                /* unable to generate initializer */
static ? D_80BCAA50;                                /* unable to generate initializer */

void OceffWipe6_Init(Actor *thisx, GlobalContext *globalCtx) {
    Camera *temp_t9;
    OceffWipe6 *this = (OceffWipe6 *) thisx;

    Actor_SetScale((Actor *) this, 1.0f);
    this->unk_144 = 0;
    temp_t9 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    this->actor.world.pos.x = temp_t9->eye.x;
    this->actor.world.pos.y = temp_t9->eye.y;
    this->actor.world.pos.z = temp_t9->eye.z;
}

void OceffWipe6_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe6 *this = (OceffWipe6 *) thisx;
    func_80115D5C(globalCtx);
    globalCtx->msgCtx.unk_120B0 = 0;
}

void OceffWipe6_Update(Actor *thisx, GlobalContext *globalCtx) {
    Camera *temp_t9;
    s16 temp_v0;
    OceffWipe6 *this = (OceffWipe6 *) thisx;

    temp_v0 = this->unk_144;
    temp_t9 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    this->actor.world.pos.x = temp_t9->eye.x;
    this->actor.world.pos.y = temp_t9->eye.y;
    this->actor.world.pos.z = temp_t9->eye.z;
    if ((s32) temp_v0 < 0x64) {
        this->unk_144 = temp_v0 + 1;
        return;
    }
    Actor_MarkForDeath((Actor *) this);
}

void OceffWipe6_Draw(Actor *thisx, GlobalContext *globalCtx) {
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
    OceffWipe6 *this = (OceffWipe6 *) thisx;

    temp_a2 = this;
    temp_t0 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    sp48.unk_0 = temp_t0->eye.x;
    sp48.unk_4 = (f32) temp_t0->eye.y;
    sp48.unk_8 = (f32) temp_t0->eye.z;
    this = temp_a2;
    func_800E01B8(&sp38, globalCtx->cameraPtrs[globalCtx->activeCamera], temp_a2);
    temp_a1 = this->unk_144;
    phi_a1 = (s32) temp_a1;
    if ((s32) temp_a1 < 0x20) {
        temp_a0 = (s32) (temp_a1 << 0x19) >> 0x10;
        this = this;
        sp60 = Math_SinS((s16) temp_a0) * 1220.0f;
        phi_a1 = (s32) this->unk_144;
    } else {
        sp60 = 1220.0f;
    }
    if (phi_a1 >= 0x50) {
        phi_v1 = ((phi_a1 * -0xC) + 0x4B0) & 0xFF;
    } else {
        phi_v1 = 0xFF;
    }
    *D_80BCA8FF = phi_v1;
    *D_80BCA91F = phi_v1;
    *D_80BCA93F = phi_v1;
    phi_v0 = &D_80BCA950;
    do {
        temp_v0 = phi_v0 + 0x80;
        temp_v0->unk_-51 = phi_v1;
        temp_v0->unk_-31 = phi_v1;
        temp_v0->unk_-11 = phi_v1;
        temp_v0->unk_-71 = phi_v1;
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
