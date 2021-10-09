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

typedef struct OceffWipe5 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s16 unk_144;                        /* inferred */
    /* 0x146 */ char pad_146[0x2];
} OceffWipe5;                                       /* size = 0x148 */

struct _mips2c_stack_OceffWipe5_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_OceffWipe5_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ GraphicsContext *sp38;               /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0xC];                    /* maybe part of sp60[4]? */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad_74[0x4];
};                                                  /* size = 0x78 */

struct _mips2c_stack_OceffWipe5_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_OceffWipe5_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

? func_800E01B8(f32 *, Camera *, OceffWipe5 *, Camera *); /* extern */
? func_80115D5C(GlobalContext *);                   /* extern */
static void D_80BC7F10;                             /* unable to generate initializer */
static AnimatedMaterial D_80BC7F18 = {0xFF, 1, &D_80BC7F10};
static s8 D_80BC8F3F[31] = {
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
static s8 D_80BC8F5F[31] = {
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
static s8 D_80BC8F7F[17] = {0xFF, 0xFF, 0xA8, 0, 0x79, 0, 0, 0, 0, 4, 0xCD, 4, 0, 0xFF, 0xFF, 0xFF, 0};
static ? D_80BC8F90;                                /* unable to generate initializer */
static ? D_80BC9080;                                /* unable to generate initializer */
static ? D_80BC9090;                                /* unable to generate initializer */
static ? D_80BC9188;                                /* unable to generate initializer */
static ? D_80BC9198;                                /* unable to generate initializer */

void OceffWipe5_Init(Actor *thisx, GlobalContext *globalCtx) {
    Camera *temp_t9;
    OceffWipe5 *this = (OceffWipe5 *) thisx;

    Actor_SetScale((Actor *) this, 1.0f);
    this->unk_144 = 0;
    temp_t9 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    this->actor.world.pos.x = temp_t9->eye.x;
    this->actor.world.pos.y = temp_t9->eye.y;
    this->actor.world.pos.z = temp_t9->eye.z;
}

void OceffWipe5_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe5 *this = (OceffWipe5 *) thisx;
    func_80115D5C(globalCtx);
    globalCtx->msgCtx.unk_120B0 = 0;
}

void OceffWipe5_Update(Actor *thisx, GlobalContext *globalCtx) {
    Camera *temp_t9;
    s16 temp_v0;
    OceffWipe5 *this = (OceffWipe5 *) thisx;

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

void OceffWipe5_Draw(Actor *thisx, GlobalContext *globalCtx) {
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
    OceffWipe5 *this = (OceffWipe5 *) thisx;

    temp_a2 = this;
    temp_t0 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    sp58.unk_0 = temp_t0->eye.x;
    sp58.unk_4 = (f32) temp_t0->eye.y;
    sp58.unk_8 = (f32) temp_t0->eye.z;
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
    temp_a1 = this->unk_144;
    phi_a1 = (s32) temp_a1;
    if ((s32) temp_a1 < 0x20) {
        temp_a0 = (s32) (temp_a1 << 0x19) >> 0x10;
        this = this;
        sp3C = phi_f2;
        sp70 = Math_SinS((s16) temp_a0) * phi_f2;
        phi_a1 = (s32) this->unk_144;
    } else {
        sp70 = phi_f2;
    }
    if (phi_a1 >= 0x50) {
        phi_v1_2 = ((phi_a1 * -0xC) + 0x4B0) & 0xFF;
    } else {
        phi_v1_2 = 0xFF;
    }
    *D_80BC8F3F = phi_v1_2;
    *D_80BC8F5F = phi_v1_2;
    *D_80BC8F7F = phi_v1_2;
    phi_v0 = &D_80BC8F90;
    do {
        temp_v0_3 = phi_v0 + 0x80;
        temp_v0_3->unk_-51 = phi_v1_2;
        temp_v0_3->unk_-31 = phi_v1_2;
        temp_v0_3->unk_-11 = phi_v1_2;
        temp_v0_3->unk_-71 = phi_v1_2;
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
    temp_v0_5->words.w1 = (temp_v1_2->unk_2 << 8) | (temp_v1_2->unk_0 << 0x18) | (temp_v1_2->unk_1 << 0x10) | 0xFF;
    temp_v0_6 = sp38->polyXlu.p;
    sp38->polyXlu.p = temp_v0_6 + 8;
    temp_v1_3 = sp40 + &D_80BC9198;
    temp_v0_6->words.w0 = 0xFB000000;
    temp_v0_6->words.w1 = (temp_v1_3->unk_2 << 8) | (temp_v1_3->unk_0 << 0x18) | (temp_v1_3->unk_1 << 0x10) | 0xFF;
    AnimatedMat_Draw(globalCtx, &D_80BC7F18);
    temp_v0_7 = sp38->polyXlu.p;
    sp38->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = (u32) &D_80BC9080;
    temp_v0_7->words.w0 = 0xDE000000;
}
