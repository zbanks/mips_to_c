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

typedef struct OceffWipe2 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s16 unk_144;                        /* inferred */
    /* 0x146 */ char pad_146[0x2];
} OceffWipe2;                                       /* size = 0x148 */

struct _mips2c_stack_OceffWipe2_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_OceffWipe2_Draw {
    /* 0x00 */ char pad_0[0x58];
    /* 0x58 */ Gfx *sp58;                           /* inferred */
    /* 0x5C */ char pad_5C[0xC];                    /* maybe part of sp58[4]? */
    /* 0x68 */ Gfx *sp68;                           /* inferred */
    /* 0x6C */ char pad_6C[0x8];                    /* maybe part of sp68[3]? */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ char pad_80[0x4];
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ char pad_90[0xC];                    /* maybe part of sp8C[4]? */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ char pad_A0[0x4];
    /* 0xA4 */ s32 spA4;                            /* inferred */
};                                                  /* size = 0xA8 */

struct _mips2c_stack_OceffWipe2_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_OceffWipe2_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

? func_800E01B8(f32 *, Camera *, OceffWipe2 *);     /* extern */
? func_80115D5C(GlobalContext *);                   /* extern */
static u8 D_809876AF[31] = {
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
static u8 D_809876CF[31] = {
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
static u8 D_809876EF[31] = {
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
static u8 D_8098770F[31] = {
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
static u8 D_8098772F[31] = {
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
static u8 D_8098774F[31] = {
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
static u8 D_8098776F[31] = {
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
static u8 D_8098778F[15] = {0xFF, 0, 0x5D, 0xFE, 0xE3, 3, 0xE8, 0, 0, 0x10, 0xCD, 0, 0, 0xFF, 0xFF};
static u8 D_8098779F[31] = {
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
static u8 D_809877BF[31] = {
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
static u8 D_809877DF[17] = {0xFF, 0, 0, 0xFF, 0x6A, 0, 0, 0, 0, 0, 0, 8, 0, 0xFF, 0xFF, 0xFF, 0};
static ? D_809877F0;                                /* unable to generate initializer */
static ? D_80987898;                                /* unable to generate initializer */

void OceffWipe2_Init(Actor *thisx, GlobalContext *globalCtx) {
    Camera *temp_t9;
    OceffWipe2 *this = (OceffWipe2 *) thisx;

    Actor_SetScale((Actor *) this, 0.1f);
    this->unk_144 = 0;
    temp_t9 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    this->actor.world.pos.x = temp_t9->eye.x;
    this->actor.world.pos.y = temp_t9->eye.y;
    this->actor.world.pos.z = temp_t9->eye.z;
}

void OceffWipe2_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe2 *this = (OceffWipe2 *) thisx;
    func_80115D5C(globalCtx);
    globalCtx->msgCtx.unk_120B0 = 0;
}

void OceffWipe2_Update(Actor *thisx, GlobalContext *globalCtx) {
    Camera *temp_t9;
    s16 temp_v0;
    OceffWipe2 *this = (OceffWipe2 *) thisx;

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

void OceffWipe2_Draw(Actor *thisx, GlobalContext *globalCtx) {
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
    OceffWipe2 *temp_a2;
    s16 temp_s0;
    s32 temp_a0;
    u32 temp_a3;
    u8 temp_v0;
    s32 phi_s0;
    u8 phi_v1;
    OceffWipe2 *this = (OceffWipe2 *) thisx;

    temp_a2 = this;
    spA4 = globalCtx->state.frames & 0xFF;
    temp_t4 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    sp84.unk_0 = temp_t4->eye.x;
    sp84.unk_4 = (f32) temp_t4->eye.y;
    sp84.unk_8 = (f32) temp_t4->eye.z;
    this = temp_a2;
    func_800E01B8(&sp74, globalCtx->cameraPtrs[globalCtx->activeCamera], temp_a2);
    temp_s0 = this->unk_144;
    phi_s0 = (s32) temp_s0;
    if ((s32) temp_s0 < 0x20) {
        temp_a0 = (s32) (temp_s0 << 0x19) >> 0x10;
        this = this;
        sp9C = Math_SinS((s16) temp_a0) * 1220.0f;
        phi_s0 = (s32) this->unk_144;
    } else {
        sp9C = 1220.0f;
    }
    if (phi_s0 >= 0x50) {
        phi_v1 = ((phi_s0 * -0xC) + 0x4B0) & 0xFF;
    } else {
        phi_v1 = 0xFFU;
    }
    *D_809877DF = phi_v1;
    temp_v0 = *D_809877DF;
    *D_809877BF = temp_v0;
    *D_8098779F = temp_v0;
    *D_8098778F = temp_v0;
    *D_8098776F = temp_v0;
    *D_8098774F = temp_v0;
    *D_8098772F = temp_v0;
    *D_8098770F = temp_v0;
    *D_809876EF = temp_v0;
    *D_809876CF = temp_v0;
    *D_809876AF = temp_v0;
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
    temp_v0_4->words.w1 = 0xFF640080;
    temp_v0_4->words.w0 = 0xFB000000;
    temp_v0_5 = temp_s0_2->polyXlu.p;
    temp_s0_2->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) &D_809877F0;
    temp_v0_5->words.w0 = 0xDE000000;
    temp_v0_6 = temp_s0_2->polyXlu.p;
    temp_s0_2->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xDE000000;
    temp_a3 = spA4 * -6;
    sp58 = temp_v0_6;
    sp58->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, spA4 * 6, temp_a3, 0x40, 0x40, 1, temp_a3, 0U, 0x40, 0x40);
    temp_v0_7 = temp_s0_2->polyXlu.p;
    temp_s0_2->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = (u32) &D_80987898;
    temp_v0_7->words.w0 = 0xDE000000;
}
