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

typedef struct OceffWipe {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s16 unk_144;                        /* inferred */
    /* 0x146 */ char pad_146[0x2];
} OceffWipe;                                        /* size = 0x148 */

struct _mips2c_stack_OceffWipe_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_OceffWipe_Draw {
    /* 0x00 */ char pad_0[0x50];
    /* 0x50 */ Gfx *sp50;                           /* inferred */
    /* 0x54 */ char pad_54[0x14];                   /* maybe part of sp50[6]? */
    /* 0x68 */ Gfx *sp68;                           /* inferred */
    /* 0x6C */ char pad_6C[0x8];                    /* maybe part of sp68[3]? */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ char pad_80[0x4];
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ char pad_90[0x4];
    /* 0x94 */ u8 sp94;                             /* inferred */
    /* 0x95 */ s8 sp95;                             /* inferred */
    /* 0x96 */ s8 sp96;                             /* inferred */
    /* 0x97 */ char pad_97[0x5];                    /* maybe part of sp96[6]? */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ char pad_A0[0x4];
    /* 0xA4 */ s32 spA4;                            /* inferred */
};                                                  /* size = 0xA8 */

struct _mips2c_stack_OceffWipe_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_OceffWipe_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

? func_800E01B8(f32 *, Camera *);                   /* extern */
? func_80115D5C(GlobalContext *);                   /* extern */
static ? D_80976DA0;                                /* unable to generate initializer */
static ? D_80977020;                                /* unable to generate initializer */
static ? D_809770A8;                                /* unable to generate initializer */
static ? D_80977160;                                /* unable to generate initializer */
static ? D_80977174;                                /* unable to generate initializer */

void OceffWipe_Init(Actor *thisx, GlobalContext *globalCtx) {
    Camera *temp_t9;
    OceffWipe *this = (OceffWipe *) thisx;

    Actor_SetScale((Actor *) this, 0.1f);
    this->unk_144 = 0;
    temp_t9 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    this->actor.world.pos.x = temp_t9->eye.x;
    this->actor.world.pos.y = temp_t9->eye.y;
    this->actor.world.pos.z = temp_t9->eye.z;
}

void OceffWipe_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    OceffWipe *this = (OceffWipe *) thisx;
    func_80115D5C(globalCtx);
    globalCtx->msgCtx.unk_120B0 = 0;
}

void OceffWipe_Update(Actor *thisx, GlobalContext *globalCtx) {
    Camera *temp_t9;
    s16 temp_v0;
    OceffWipe *this = (OceffWipe *) thisx;

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

void OceffWipe_Draw(Actor *thisx, GlobalContext *globalCtx) {
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
    OceffWipe *this = (OceffWipe *) thisx;

    spA4 = globalCtx->state.frames & 0xFF;
    temp_t5 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    sp84.unk_0 = temp_t5->eye.x;
    (&sp84)[1] = temp_t5->eye.y;
    (&sp84)[2] = temp_t5->eye.z;
    func_800E01B8(&sp74, globalCtx->cameraPtrs[globalCtx->activeCamera]);
    temp_v1 = this->unk_144;
    temp_s0 = globalCtx->state.gfxCtx;
    phi_v1 = (s32) temp_v1;
    if ((s32) temp_v1 < 0x20) {
        sp9C = Math_SinS((s16) ((s32) (temp_v1 << 0x19) >> 0x10)) * 1360.0f;
        phi_v1 = (s32) this->unk_144;
    } else {
        sp9C = 1360.0f;
    }
    if (phi_v1 >= 0x50) {
        sp94 = 0;
        sp95 = (0x64 - this->unk_144) * 8;
        sp96 = (0x64 - this->unk_144) * 0xC;
    } else {
        sp94 = 0;
        sp95 = 0xA0;
        sp96 = 0xFF;
    }
    phi_a0 = &D_80977160;
    phi_v1_2 = &D_80976DA0;
    do {
        temp_a1 = phi_a0->unk_0;
        temp_a2 = phi_a0->unk_1;
        temp_a3 = phi_a0->unk_2;
        phi_v1_2->unk_F = (u8) (&sp94)[(s32) (temp_a1 & 0xF0) >> 4];
        phi_v1_2->unk_1F = (u8) (&sp94)[temp_a1 & 0xF];
        temp_t0 = phi_a0->unk_3;
        phi_v1_2->unk_2F = (u8) (&sp94)[(s32) (temp_a2 & 0xF0) >> 4];
        phi_v1_2->unk_3F = (u8) (&sp94)[temp_a2 & 0xF];
        phi_v1_2->unk_4F = (u8) (&sp94)[(s32) (temp_a3 & 0xF0) >> 4];
        phi_v1_2->unk_5F = (u8) (&sp94)[temp_a3 & 0xF];
        temp_a0 = phi_a0 + 4;
        temp_v1_2 = phi_v1_2 + 0x80;
        temp_v1_2->unk_-1 = (u8) (&sp94)[temp_t0 & 0xF];
        temp_v1_2->unk_-11 = (u8) (&sp94)[(s32) (temp_t0 & 0xF0) >> 4];
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
    temp_s0->polyXlu.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp68 = temp_v0;
    sp68->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    if (this->actor.params != 0) {
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_2[1];
        temp_v0_2->words.w1 = 0xAAFFFFFF;
        temp_v0_2->words.w0 = 0xFA000000;
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xFB000000;
        temp_v0_3->words.w1 = 0x96FF80;
    } else {
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_4[1];
        temp_v0_4->words.w1 = -0x3701;
        temp_v0_4->words.w0 = 0xFA000000;
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_5[1];
        temp_v0_5->words.w1 = 0x6400FF80;
        temp_v0_5->words.w0 = 0xFB000000;
    }
    temp_v0_6 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_6[1];
    temp_v0_6->words.w1 = (u32) &D_80977020;
    temp_v0_6->words.w0 = 0xDE000000;
    temp_v0_7 = temp_s0->polyXlu.p;
    temp_a3_2 = spA4 * -2;
    temp_s0->polyXlu.p = &temp_v0_7[1];
    temp_v0_7->words.w0 = 0xDE000000;
    temp_a2_2 = -spA4;
    sp50 = temp_v0_7;
    sp50->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, (u32) temp_a2_2, temp_a3_2, 0x20, 0x20, 1, (u32) temp_a2_2, temp_a3_2, 0x20, 0x20);
    temp_v0_8 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_8[1];
    temp_v0_8->words.w1 = (u32) &D_809770A8;
    temp_v0_8->words.w0 = 0xDE000000;
}
