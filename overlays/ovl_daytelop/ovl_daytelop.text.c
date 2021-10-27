struct _mips2c_stack_Daytelop_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Daytelop_Draw {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ GraphicsContext *sp1C;               /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_Daytelop_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Daytelop_LoadGraphics {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ TwoHeadArena *sp18;                  /* inferred */
    /* 0x1C */ u32 sp1C;                            /* inferred */
    /* 0x20 */ u8 *sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Daytelop_Main {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Daytelop_Update {};            /* size 0x0 */

struct _mips2c_stack_Daytelop_nop80815770 {};       /* size 0x0 */

void Daytelop_Draw(GameState *arg0);                /* static */
void Daytelop_LoadGraphics(GameState *arg0);        /* static */
void Daytelop_Main(GameState *arg0);                /* static */
void Daytelop_Update(GameState *arg0, GameState *arg1); /* static */
void Daytelop_nop80815770(GameState *arg0);         /* static */
static u8 D_80815FF0 = 0;
static ? sDayLeftTextures;                          /* unable to generate initializer */
static ? sDayRightTextures;                         /* unable to generate initializer */

void Daytelop_Update(GameState *arg0, GameState *arg1) {
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_a1;
    u8 temp_v0_2;
    u8 temp_v0_3;
    s32 phi_a2;

    arg0->unk_240 = (s16) (arg0->unk_240 - 1);
    temp_v0 = arg0->unk_240;
    if (temp_v0 == 0) {
        if (gSaveContext.day < 9) {
            gSaveContext.gameMode = 0;
        } else {
            gSaveContext.nextCutsceneIndex = 0xFFF6;
            gSaveContext.day = 1;
        }
        arg0->running = 0;
        arg0->nextGameStateSize = 0x19258;
        arg0->nextGameStateInit = Play_Init;
        gSaveContext.time = 0x4000;
        D_801BDBC8 = 0xFE;
    } else if (temp_v0 == 0x5A) {
        arg0[3].input[2].rel.button = 1;
        arg0->unk_244 = 0;
        D_80815FF0 = 0x1E;
    }
    temp_v0_2 = D_80815FF0;
    if (arg0[3].input[2].rel.button == 1) {
        temp_v1 = arg0->unk_244;
        temp_a1 = temp_v1 - 0xFF;
        phi_a2 = temp_a1;
        if (temp_a1 < 0) {
            phi_a2 = 0xFF - temp_v1;
        }
        arg0->unk_244 = (s16) (temp_v1 + (s16) (phi_a2 / (s32) temp_v0_2));
        temp_v0_3 = (temp_v0_2 - 1) & 0xFF;
        D_80815FF0 = temp_v0_3;
        if (temp_v0_3 == 0) {
            arg0[3].input[2].rel.button = 2;
            arg0->unk_244 = 0xFF;
        }
    }
}

void Daytelop_Draw(GameState *arg0) {
    GraphicsContext *sp1C;
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
    Gfx *temp_v0_30;
    Gfx *temp_v0_31;
    Gfx *temp_v0_32;
    Gfx *temp_v0_33;
    Gfx *temp_v0_34;
    Gfx *temp_v0_35;
    Gfx *temp_v0_36;
    Gfx *temp_v0_37;
    Gfx *temp_v0_38;
    Gfx *temp_v0_39;
    Gfx *temp_v0_3;
    Gfx *temp_v0_40;
    Gfx *temp_v0_41;
    Gfx *temp_v0_42;
    Gfx *temp_v0_43;
    Gfx *temp_v0_44;
    Gfx *temp_v0_45;
    Gfx *temp_v0_46;
    Gfx *temp_v0_47;
    Gfx *temp_v0_48;
    Gfx *temp_v0_49;
    Gfx *temp_v0_4;
    Gfx *temp_v0_50;
    Gfx *temp_v0_51;
    Gfx *temp_v0_52;
    Gfx *temp_v0_53;
    Gfx *temp_v0_54;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;

    temp_a0 = arg0->gfxCtx;
    sp1C = temp_a0;
    func_8012C628(temp_a0);
    if (gSaveContext.day >= 9) {
        temp_v0 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0[1];
        temp_v0->words.w0 = 0xE200001C;
        temp_v0->words.w1 = 0x504240;
        temp_v0_2 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_2[1];
        temp_v0_2->words.w0 = 0xFCFFFFFF;
        temp_v0_2->words.w1 = 0xFFFDF6FB;
        temp_v0_3 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_3[1];
        temp_v0_3->words.w1 = -1;
        temp_v0_3->words.w0 = 0xFA000000;
        temp_v0_4 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_4[1];
        temp_v0_4->words.w1 = 0;
        temp_v0_4->words.w0 = 0xF65003C0;
    }
    sp1C = temp_a0;
    func_8012C628(arg0->gfxCtx);
    temp_v0_5 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v0_5[1];
    temp_v0_5->words.w0 = 0xE200001C;
    temp_v0_5->words.w1 = 0xF0A4000;
    temp_v0_6 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v0_6[1];
    temp_v0_6->words.w1 = -1;
    temp_v0_6->words.w0 = 0xFA000000;
    if (gSaveContext.day >= 9) {
        temp_v0_7 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_7[1];
        temp_v0_7->words.w1 = 0;
        temp_v0_7->words.w0 = 0xE2001E01;
    }
    if (gSaveContext.day < 9) {
        temp_v0_8 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_8[1];
        temp_v0_8->words.w0 = 0xFD900000;
        temp_v0_8->words.w1 = *(&D_80815FF0 + (((s32) gSaveContext.day % 5) * 4));
        temp_v0_9 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_9[1];
        temp_v0_9->words.w1 = 0x7000000;
        temp_v0_9->words.w0 = 0xF5900000;
        temp_v0_10 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_10[1];
        temp_v0_10->words.w1 = 0;
        temp_v0_10->words.w0 = 0xE6000000;
        temp_v0_11 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_11[1];
        temp_v0_11->words.w1 = 0x77FF100;
        temp_v0_11->words.w0 = 0xF3000000;
        temp_v0_12 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_12[1];
        temp_v0_12->words.w1 = 0;
        temp_v0_12->words.w0 = 0xE7000000;
        temp_v0_13 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_13[1];
        temp_v0_13->words.w1 = 0;
        temp_v0_13->words.w0 = 0xF5801000;
        temp_v0_14 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_14[1];
        temp_v0_14->words.w1 = 0x1FC0FC;
        temp_v0_14->words.w0 = 0xF2000000;
    } else {
        temp_v0_15 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_15[1];
        temp_v0_15->words.w0 = 0xFD900000;
        temp_v0_15->words.w1 = *(&sDayLeftTextures + 0xC);
        temp_v0_16 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_16[1];
        temp_v0_16->words.w1 = 0x7000000;
        temp_v0_16->words.w0 = 0xF5900000;
        temp_v0_17 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_17[1];
        temp_v0_17->words.w1 = 0;
        temp_v0_17->words.w0 = 0xE6000000;
        temp_v0_18 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_18[1];
        temp_v0_18->words.w1 = 0x77FF100;
        temp_v0_18->words.w0 = 0xF3000000;
        temp_v0_19 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_19[1];
        temp_v0_19->words.w1 = 0;
        temp_v0_19->words.w0 = 0xE7000000;
        temp_v0_20 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_20[1];
        temp_v0_20->words.w1 = 0;
        temp_v0_20->words.w0 = 0xF5801000;
        temp_v0_21 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_21[1];
        temp_v0_21->words.w1 = 0x1FC0FC;
        temp_v0_21->words.w0 = 0xF2000000;
    }
    temp_v0_22 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v0_22[1];
    temp_v0_22->words.w0 = 0xE4280234;
    temp_v0_22->words.w1 = 0x80134;
    temp_v0_23 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v0_23[1];
    temp_v0_23->words.w1 = 0;
    temp_v0_23->words.w0 = 0xE1000000;
    temp_v0_24 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v0_24[1];
    temp_v0_24->words.w1 = 0x4000400;
    temp_v0_24->words.w0 = 0xF1000000;
    if (gSaveContext.day < 9) {
        temp_v0_25 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_25[1];
        temp_v0_25->words.w0 = 0xFD900000;
        temp_v0_25->words.w1 = *(&sDayLeftTextures + 0xC + (((s32) gSaveContext.day % 5) * 4));
        temp_v0_26 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_26[1];
        temp_v0_26->words.w1 = 0x7000000;
        temp_v0_26->words.w0 = 0xF5900000;
        temp_v0_27 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_27[1];
        temp_v0_27->words.w1 = 0;
        temp_v0_27->words.w0 = 0xE6000000;
        temp_v0_28 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_28[1];
        temp_v0_28->words.w1 = 0x77FF100;
        temp_v0_28->words.w0 = 0xF3000000;
        temp_v0_29 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_29[1];
        temp_v0_29->words.w1 = 0;
        temp_v0_29->words.w0 = 0xE7000000;
        temp_v0_30 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_30[1];
        temp_v0_30->words.w1 = 0;
        temp_v0_30->words.w0 = 0xF5801000;
        temp_v0_31 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_31[1];
        temp_v0_31->words.w1 = 0x1FC0FC;
        temp_v0_31->words.w0 = 0xF2000000;
    } else {
        temp_v0_32 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_32[1];
        temp_v0_32->words.w0 = 0xFD900000;
        temp_v0_32->words.w1 = *(&sDayRightTextures + 0xC);
        temp_v0_33 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_33[1];
        temp_v0_33->words.w1 = 0x7000000;
        temp_v0_33->words.w0 = 0xF5900000;
        temp_v0_34 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_34[1];
        temp_v0_34->words.w1 = 0;
        temp_v0_34->words.w0 = 0xE6000000;
        temp_v0_35 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_35[1];
        temp_v0_35->words.w1 = 0x77FF100;
        temp_v0_35->words.w0 = 0xF3000000;
        temp_v0_36 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_36[1];
        temp_v0_36->words.w1 = 0;
        temp_v0_36->words.w0 = 0xE7000000;
        temp_v0_37 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_37[1];
        temp_v0_37->words.w1 = 0;
        temp_v0_37->words.w0 = 0xF5801000;
        temp_v0_38 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_38[1];
        temp_v0_38->words.w1 = 0x1FC0FC;
        temp_v0_38->words.w0 = 0xF2000000;
    }
    temp_v0_39 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v0_39[1];
    temp_v0_39->words.w0 = 0xE4480234;
    temp_v0_39->words.w1 = 0x280134;
    temp_v0_40 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v0_40[1];
    temp_v0_40->words.w1 = 0;
    temp_v0_40->words.w0 = 0xE1000000;
    temp_v0_41 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v0_41[1];
    temp_v0_41->words.w1 = 0x4000400;
    temp_v0_41->words.w0 = 0xF1000000;
    if (gSaveContext.day < 9) {
        temp_v0_42 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_42[1];
        temp_v0_42->words.w1 = 0;
        temp_v0_42->words.w0 = 0xE7000000;
        temp_v0_43 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_43[1];
        temp_v0_43->words.w1 = 0x504240;
        temp_v0_43->words.w0 = 0xE200001C;
        temp_v0_44 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_44[1];
        temp_v0_44->words.w0 = 0xFA000000;
        temp_v0_44->words.w1 = (arg0->unk_244 & 0xFF) | ~0xFF;
        temp_v0_45 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_45[1];
        temp_v0_45->words.w0 = 0xFD900000;
        temp_v0_45->words.w1 = *(&sDayRightTextures + 0xC + (((s32) gSaveContext.day % 5) * 4));
        temp_v0_46 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_46[1];
        temp_v0_46->words.w1 = 0x7000000;
        temp_v0_46->words.w0 = 0xF5900000;
        temp_v0_47 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_47[1];
        temp_v0_47->words.w1 = 0;
        temp_v0_47->words.w0 = 0xE6000000;
        temp_v0_48 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_48[1];
        temp_v0_48->words.w1 = 0x747F0E4;
        temp_v0_48->words.w0 = 0xF3000000;
        temp_v0_49 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_49[1];
        temp_v0_49->words.w1 = 0;
        temp_v0_49->words.w0 = 0xE7000000;
        temp_v0_50 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_50[1];
        temp_v0_50->words.w1 = 0;
        temp_v0_50->words.w0 = 0xF5801200;
        temp_v0_51 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_51[1];
        temp_v0_51->words.w1 = 0x23C07C;
        temp_v0_51->words.w0 = 0xF2000000;
        temp_v0_52 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_52[1];
        temp_v0_52->words.w0 = 0xE43A02C0;
        temp_v0_52->words.w1 = 0x160240;
        temp_v0_53 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_53[1];
        temp_v0_53->words.w1 = 0;
        temp_v0_53->words.w0 = 0xE1000000;
        temp_v0_54 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = &temp_v0_54[1];
        temp_v0_54->words.w1 = 0x4000400;
        temp_v0_54->words.w0 = 0xF1000000;
    }
}

void Daytelop_Main(GameState *arg0) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a0;

    func_8012CF0C(arg0->gfxCtx, 1, 1, 0U, (u8) 0, (u8) 0);
    temp_a0 = arg0->gfxCtx;
    temp_v1 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v1[1];
    temp_v1->words.w0 = 0xDB060024;
    temp_v1->words.w1 = arg0[1].gfxCtx;
    temp_v1_2 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = &temp_v1_2[1];
    temp_v1_2->words.w0 = 0xDB060030;
    temp_v1_2->words.w1 = arg0[1].main;
    Daytelop_Draw(arg0);
    Daytelop_Update(arg0, arg0);
}

void Daytelop_Destroy(GameState *thisx) {
    ShrinkWindow_Fini();
}

void Daytelop_nop80815770(GameState *arg0) {

}

void Daytelop_LoadGraphics(GameState *arg0) {
    u8 *sp20;
    u32 sp1C;
    TwoHeadArena *sp18;
    TwoHeadArena *temp_a0;
    u32 temp_a2;
    u32 temp_a2_2;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_v0;
    void *temp_v0_2;

    temp_a2 = _daytelop_staticSegmentRomEnd - _daytelop_staticSegmentRomStart;
    temp_a0 = arg0 + 0x74;
    sp18 = temp_a0;
    sp1C = temp_a2;
    sp20 = _daytelop_staticSegmentRomStart;
    temp_v0 = THA_AllocEndAlign16(temp_a0, temp_a2);
    temp_a0_2 = temp_v0;
    arg0[1].gfxCtx = temp_v0;
    DmaMgr_SendRequest0(temp_a0_2, (u32) sp20, temp_a2);
    temp_a2_2 = _icon_item_gameover_staticSegmentRomEnd - _icon_item_gameover_staticSegmentRomStart;
    sp1C = temp_a2_2;
    sp20 = _icon_item_gameover_staticSegmentRomStart;
    temp_v0_2 = THA_AllocEndAlign16(temp_a0, temp_a2_2);
    temp_a0_3 = temp_v0_2;
    arg0[1].main = temp_v0_2;
    DmaMgr_SendRequest0(temp_a0_3, (u32) sp20, temp_a2_2);
}

void Daytelop_Init(GameState *thisx) {
    s32 temp_v0;

    Game_SetFramerateDivisor(thisx, 1);
    SysMatrix_StateAlloc(thisx);
    ShrinkWindow_Fini();
    View_Init((View *) &thisx[1].nextGameStateInit, thisx->gfxCtx);
    thisx->main = Daytelop_Main;
    thisx->destroy = Daytelop_Destroy;
    thisx->unk_240 = 0x8C;
    thisx[3].input[2].rel.button = 0;
    temp_v0 = gSaveContext.day;
    if (temp_v0 < 9) {
        if (temp_v0 == 0) {
            func_80143AC4();
        }
        Sram_IncrementDay();
    }
    Daytelop_nop80815770(thisx);
    Daytelop_LoadGraphics(thisx);
    play_sound(0x5808U);
}
