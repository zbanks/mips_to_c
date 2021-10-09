struct _mips2c_stack_Title_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Title_Draw {
    /* 0x00 */ char pad_0[0x94];
    /* 0x94 */ Gfx *sp94;                           /* inferred */
    /* 0x98 */ char pad_98[0x10];                   /* maybe part of sp94[5]? */
    /* 0xA8 */ GraphicsContext *spA8;               /* inferred */
    /* 0xAC */ char pad_AC[0x8];                    /* maybe part of spA8[3]? */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ char pad_D8[0x8];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_Title_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ u32 sp20;                            /* inferred */
    /* 0x24 */ u8 *sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_Title_Main {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Title_RenderView {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ View *sp1C;                          /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_Title_UpdateCounters {};       /* size 0x0 */

s32 Padmgr_GetControllerBitmask();                  /* extern */
? ShrinkWindow_Init();                              /* extern */
? func_800FC444(GraphicsContext *, ?, ?, ?, s32, s32); /* extern */
? func_80146E40(void *);                            /* extern */
void Title_Draw(GameState *arg0);                   /* static */
void Title_RenderView(GameState *arg0, f32 arg1, f32 arg2, f32 arg3); /* static */
void Title_UpdateCounters(GameState *arg0);         /* static */
extern ? D_01000000;
extern ? D_01001800;
extern ? D_01002720;
static ? D_80800868;                                /* unable to generate initializer */
static ? D_80800870;                                /* unable to generate initializer */
static s16 titleRotation = 0;
static f32 titleUnknownVector3f[4] = {-4949.148f, 4002.5417f, 1119.0837f, 0.0f}; /* const */

void Title_UpdateCounters(GameState *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v1;

    temp_v0 = arg0->unk_23A;
    if ((temp_v0 == 0) && (temp_v1 = arg0->unk_23E, (temp_v1 != 0))) {
        arg0->unk_23E = (s16) (temp_v1 - 1);
        arg0->unk_238 = (s16) (arg0->unk_238 - 1);
        if (arg0->unk_238 == 0) {
            arg0->unk_238 = 0x190;
        }
    } else {
        arg0->unk_23A = (s16) (temp_v0 + arg0->unk_23C);
        temp_v0_2 = arg0->unk_23A;
        if ((s32) temp_v0_2 <= 0) {
            arg0->unk_23A = 0;
            arg0->unk_23C = 0xC;
        } else if ((s32) temp_v0_2 >= 0xFF) {
            arg0->unk_23A = 0xFF;
            arg0->unk_244 = 1;
        }
    }
    temp_v0_3 = arg0->unk_240;
    arg0->unk_242 = (s16) (temp_v0_3 & 0x7F);
    arg0->unk_240 = (s16) (temp_v0_3 + 1);
}

void Title_RenderView(GameState *arg0, f32 arg1, f32 arg2, f32 arg3) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    View *sp1C;
    View *temp_a0;

    temp_a0 = arg0 + 0xA8;
    sp38 = arg1;
    sp3C = arg2;
    sp28 = 0.0f;
    sp20 = 0.0f;
    sp34 = 0.0f;
    sp30 = 0.0f;
    sp2C = 0.0f;
    sp1C = temp_a0;
    sp40 = arg3;
    sp24 = 1.0f;
    func_8013F0D0(temp_a0, 30.0f, 10.0f, 12800.0f);
    View_SetViewOrientation(temp_a0, (Vec3f *) &sp38, (Vec3f *) &sp2C, (Vec3f *) &sp20);
    View_RenderView(temp_a0, 0xF);
}

void Title_Draw(GameState *arg0) {
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    GraphicsContext *spA8;
    Gfx *sp94;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_19;
    Gfx *temp_v0_20;
    Gfx *temp_v0_21;
    Gfx *temp_v0_22;
    Gfx *temp_v0_23;
    Gfx *temp_v0_24;
    Gfx *temp_v0_25;
    Gfx *temp_v0_26;
    Gfx *temp_v0_27;
    Gfx *temp_v0_28;
    Gfx *temp_v0_29;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_t0;
    s32 temp_a1;
    s32 temp_a2;
    s32 phi_a0;
    s32 phi_a3;
    s32 phi_a2;

    temp_t0 = arg0->gfxCtx;
    spCC = 69.0f;
    spD0 = 69.0f;
    spD4 = 69.0f;
    spC0 = 0.0f;
    spC4 = 0.0f;
    spC8 = 0.0f;
    spB4 = -4949.148f;
    spB8 = *(titleUnknownVector3f + 4);
    spBC = *(titleUnknownVector3f + 8);
    spA8 = temp_t0;
    func_800B7FE0(&spC0, &spB4, &spCC, arg0->gfxCtx);
    temp_v0 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w1 = 0x18;
    temp_v0->words.w0 = 0xDB020000;
    temp_v0_2 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDC08060A;
    temp_v0_2->words.w1 = (u32) &D_80800870;
    temp_v0_3 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDC08090A;
    temp_v0_3->words.w1 = (u32) &D_80800868;
    spA8 = temp_t0;
    Title_RenderView(arg0, 0.0f, 150.0f, 300.0f);
    func_8012C28C(arg0->gfxCtx);
    SysMatrix_InsertTranslation(-53.0f, -5.0f, 0.0f, 0);
    Matrix_Scale(1.0f, 1.0f, 1.0f, 1);
    SysMatrix_InsertRotation(0, titleRotation, 0, 1);
    temp_v0_4 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDA380003;
    spA8 = temp_t0;
    sp94 = temp_v0_4;
    sp94->words.w1 = Matrix_NewMtx(arg0->gfxCtx);
    temp_v0_5 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) &D_01002720;
    temp_v0_5->words.w0 = 0xDE000000;
    spA8 = temp_t0;
    func_8012C628(arg0->gfxCtx);
    temp_v0_6 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_6 + 8;
    temp_v0_6->words.w1 = 0;
    temp_v0_6->words.w0 = 0xE7000000;
    temp_v0_7 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = 0x100000;
    temp_v0_7->words.w0 = 0xE3000A01;
    temp_v0_8 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_8 + 8;
    temp_v0_8->words.w0 = 0xE200001C;
    temp_v0_8->words.w1 = 0xC184340;
    temp_v0_9 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_9 + 8;
    temp_v0_9->words.w0 = 0xFC267E60;
    temp_v0_9->words.w1 = 0x350CF37F;
    temp_v0_10 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_10 + 8;
    temp_v0_10->words.w0 = 0xFA000000;
    temp_v0_10->words.w1 = 0xAAFFFFFF;
    temp_v0_11 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_11 + 8;
    temp_v0_11->words.w1 = 0xFF80;
    temp_v0_11->words.w0 = 0xFB000000;
    temp_v0_12 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_12 + 8;
    temp_v0_12->words.w0 = 0xFD900000;
    temp_v0_12->words.w1 = (u32) &D_01001800;
    temp_v0_13 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_13 + 8;
    temp_v0_13->words.w0 = 0xF5900100;
    temp_v0_13->words.w1 = 0x7016C52;
    temp_v0_14 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_14 + 8;
    temp_v0_14->words.w1 = 0;
    temp_v0_14->words.w0 = 0xE6000000;
    temp_v0_15 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_15 + 8;
    temp_v0_15->words.w1 = 0x71FF200;
    temp_v0_15->words.w0 = 0xF3000000;
    temp_v0_16 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_16 + 8;
    temp_v0_16->words.w1 = 0;
    temp_v0_16->words.w0 = 0xE7000000;
    temp_v0_17 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_17 + 8;
    temp_v0_17->words.w1 = 0x1016C52;
    temp_v0_17->words.w0 = 0xF5880900;
    temp_v0_18 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0_18 + 8;
    temp_v0_18->words.w1 = 0x107C07C;
    temp_v0_18->words.w0 = 0xF2000000;
    phi_a0 = 0;
    phi_a3 = 0x5E;
    phi_a2 = 0;
    do {
        temp_v0_19 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_19 + 8;
        temp_a1 = phi_a3 + 2;
        temp_v0_19->words.w0 = 0xFD900000;
        temp_v0_19->words.w1 = (u32) (&D_01000000 + (phi_a0 * 0x180));
        temp_v0_20 = temp_t0->polyOpa.p;
        temp_a2 = (phi_a2 + 1) & 0xFFFF;
        temp_t0->polyOpa.p = temp_v0_20 + 8;
        temp_v0_20->words.w1 = 0x7000000;
        temp_v0_20->words.w0 = 0xF5900000;
        temp_v0_21 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_21 + 8;
        temp_v0_21->words.w1 = 0;
        temp_v0_21->words.w0 = 0xE6000000;
        temp_v0_22 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_22 + 8;
        temp_v0_22->words.w1 = 0x70BF056;
        temp_v0_22->words.w0 = 0xF3000000;
        temp_v0_23 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_23 + 8;
        temp_v0_23->words.w1 = 0;
        temp_v0_23->words.w0 = 0xE7000000;
        temp_v0_24 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_24 + 8;
        temp_v0_24->words.w1 = 0;
        temp_v0_24->words.w0 = 0xF5883000;
        temp_v0_25 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_25 + 8;
        temp_v0_25->words.w1 = 0x2FC004;
        temp_v0_25->words.w0 = 0xF2000000;
        temp_v0_26 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_26 + 8;
        temp_v0_26->words.w1 = 0x1000000;
        temp_v0_26->words.w0 = ((arg0->unk_242 & 0xFFF) << 0xC) | 0xF2000000U | (((arg0->unk_240 & 0x7F) - (phi_a0 * 4)) & 0xFFF);
        temp_v0_27 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_27 + 8;
        temp_v0_27->words.w1 = ((phi_a3 * 4) & 0xFFF) | 0x184000;
        temp_v0_27->words.w0 = ((temp_a1 * 4) & 0xFFF) | 0xE4484000;
        temp_v0_28 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_28 + 8;
        temp_v0_28->words.w1 = 0;
        temp_v0_28->words.w0 = 0xE1000000;
        temp_v0_29 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0_29 + 8;
        temp_v0_29->words.w1 = 0x4000400;
        temp_v0_29->words.w0 = 0xF1000000;
        phi_a0 = temp_a2;
        phi_a3 = temp_a1 & 0xFFFF;
        phi_a2 = temp_a2;
    } while (temp_a2 < 0x10);
    func_800FC444(arg0->gfxCtx, 0, 0, 0, (s32) arg0->unk_23A, 2);
    titleRotation = titleRotation + 0x12C;
}

void Title_Main(GameState *thisx) {
    Gfx *temp_v1;
    GraphicsContext *temp_a0;

    func_8012CF0C(thisx->gfxCtx, 1, 1, 0U, (u8) 0, (u8) 0);
    temp_a0 = thisx->gfxCtx;
    temp_v1 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDB060004;
    temp_v1->words.w1 = thisx->unk_A4;
    Title_UpdateCounters(thisx);
    Title_Draw(thisx);
    if (thisx->unk_244 != 0) {
        gSaveContext.seqIndex = 0xFF;
        gSaveContext.nightSeqIndex = 0xFF;
        gSaveContext.gameMode = 1;
        thisx->running = 0;
        thisx->nextGameStateSize = 0x210;
        thisx->nextGameStateInit = Opening_Init;
    }
}

void Title_Destroy(GameState *thisx) {
    func_80146E40(thisx + 0x210);
    ShrinkWindow_Fini();
    CIC6105_Nop80081828();
}

void Title_Init(GameState *thisx) {
    u8 *sp24;
    u32 sp20;
    u32 temp_a2;
    void *temp_v0;

    temp_a2 = _nintendo_rogo_staticSegmentRomEnd - _nintendo_rogo_staticSegmentRomStart;
    sp20 = temp_a2;
    sp24 = _nintendo_rogo_staticSegmentRomStart;
    temp_v0 = THA_AllocEndAlign16(&thisx->heap, temp_a2);
    thisx->unk_A4 = temp_v0;
    DmaMgr_SendRequest0(temp_v0, (u32) sp24, temp_a2);
    Game_SetFramerateDivisor(thisx, 1);
    SysMatrix_StateAlloc(thisx);
    ShrinkWindow_Init();
    View_Init(thisx + 0xA8, thisx->gfxCtx);
    thisx->main = Title_Main;
    thisx->destroy = Title_Destroy;
    thisx->unk_244 = 0;
    if ((Padmgr_GetControllerBitmask() & 1) == 0) {
        gSaveContext.fileNum = 0xFEDC;
    } else {
        gSaveContext.fileNum = 0xFF;
    }
    gSaveContext.unk_3F3F = 1;
    Sram_Alloc(thisx, thisx + 0x210);
    thisx->unk_240 = 0;
    thisx->unk_238 = 0x14;
    thisx->unk_23A = 0xFF;
    thisx->unk_23C = -0xC;
    thisx->unk_23E = 0x3C;
}
