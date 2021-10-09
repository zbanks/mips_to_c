s32 MainHeap_IsInitialized();                       /* extern */
void func_80177390(void *arg0, s32 arg1, s32 arg2); /* static */
void func_80177A84(? *arg0, u32 arg1, u32 arg2, s32 arg3, u16 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8); /* static */
void func_80177AC8(? *arg0, GraphicsContext *arg1); /* static */
void func_801781EC(void *arg0, s16 arg1, f32 arg2, f32 arg3, f32 arg4); /* static */
void func_8017842C(void *arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 argA); /* static */
static void D_801FBAE0;
static void **D_801FBB28;
static u8 D_801FBBD4;
void *D_801D1540 = &D_801FBAE0;
GameInfo *gGameInfo;
s32 gScreenHeight = 0xF0;
s32 gScreenWidth = 0x140;



void func_80177390(void *arg0, s32 arg1, s32 arg2) {
    arg0->unk18 = arg1;
    arg0->unk1C = arg2;
}

void func_801773A0(void *arg0) {
    func_80177390((void *)0x20, 0x16);
}

void func_801773C4(void *arg0) {

}

void SpeedMeter_DrawTimeEntries(void *displayList, GraphicsContext *gCtx) {
    s32 sp278;
    s32 sp274;
    View sp108;
    s32 spFC;
    Gfx *spF8;
    s32 spEC;
    s32 spE8;
    s32 spE4;
    s32 spE0;
    f64 sp28;
    Gfx **temp_a1;
    Gfx *temp_t6;
    Gfx *temp_t6_10;
    Gfx *temp_t6_11;
    Gfx *temp_t6_2;
    Gfx *temp_t6_3;
    Gfx *temp_t6_4;
    Gfx *temp_t6_5;
    Gfx *temp_t6_6;
    Gfx *temp_t6_7;
    Gfx *temp_t6_8;
    Gfx *temp_t6_9;
    Gfx *temp_t7;
    Gfx *temp_t7_2;
    Gfx *temp_t7_3;
    Gfx *temp_t7_4;
    Gfx *temp_t7_5;
    Gfx *temp_t8_2;
    Gfx *temp_t8_3;
    Gfx *temp_t8_4;
    Gfx *temp_t8_5;
    Gfx *temp_t8_6;
    Gfx *temp_t9;
    Gfx *temp_t9_2;
    Gfx *temp_t9_3;
    Gfx *temp_t9_4;
    Gfx *temp_t9_5;
    Gfx *temp_t9_6;
    Gfx *temp_t9_7;
    Gfx *temp_t9_8;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v1_2;
    Gfx *temp_v1_4;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_v0;
    u16 temp_v1;
    u16 temp_v1_3;
    void **temp_v0_4;
    void **temp_v0_5;
    void *temp_t8;
    s32 phi_a3;
    s32 phi_a2;
    s32 phi_a2_2;

    temp_v0 = displayList->unk1C;
    sp278 = temp_v0;
    phi_a3 = temp_v0 + 2;
    if ((sIrqMgrRetraceTime.unk0 != 0) || (sIrqMgrRetraceTime.unk4 != 0)) {
        D_801FBB28 = &D_801D1540;
        phi_a2 = 0;
        phi_a2_2 = 0;
        do {
            temp_t8 = D_801FBB28->unk0;
            sp274 = phi_a3;
            spFC = phi_a2;
            sp28 = __ull_to_d((u64) temp_t8->unk0, (u64) temp_t8->unk4);
            temp_a2 = phi_a2 + 1;
            D_801FBB28->unk4 = (u16) ((s32) ((sp28 / __ull_to_d((u64) sIrqMgrRetraceTime.unk0, (u64) sIrqMgrRetraceTime.unk4)) * 64.0) + 0x20);
            D_801FBB28 += 0xC;
            phi_a2 = temp_a2;
        } while (temp_a2 < 4);
        sp274 = phi_a3;
        View_Init(&sp108, gCtx);
        sp108.flags = 0xA;
        spE0 = 0;
        spE8 = 0;
        spEC = gScreenWidth;
        spE4 = gScreenHeight;
        View_SetViewport(&sp108, (Viewport *) &spE0);
        temp_a1 = &spF8;
        spF8 = gCtx->overlay.p;
        func_801400CC(&sp108, temp_a1);
        temp_t9 = spF8;
        spF8 = temp_t9 + 8;
        temp_t9->words.w1 = 0;
        temp_t9->words.w0 = 0xE7000000;
        temp_t6 = spF8;
        spF8 = temp_t6 + 8;
        temp_t6->words.w0 = 0xEF300000;
        temp_t6->words.w1 = 0;
        temp_t6_2 = spF8;
        if (D_801FBBD4 == 1) {
            spF8 = temp_t6_2 + 8;
            temp_t6_2->words.w1 = 0;
            temp_t6_2->words.w0 = 0xE7000000;
            temp_t9_2 = spF8;
            spF8 = temp_t9_2 + 8;
            temp_t9_2->words.w1 = 0x3F003F;
            temp_t9_2->words.w0 = 0xF7000000;
            temp_v0_2 = spF8;
            spF8 = temp_v0_2 + 8;
            temp_v0_2->words.w0 = (((phi_a3 * 2) & 0x3FF) * 4) | 0xF6300000;
            temp_v0_2->words.w1 = 0x100000 | (((sp278 * 2) & 0x3FF) * 4);
        } else {
            temp_t6_3 = spF8;
            spF8 = temp_t6_3 + 8;
            temp_t6_3->words.w1 = 0;
            temp_t6_3->words.w0 = 0xE7000000;
            temp_t9_3 = spF8;
            spF8 = temp_t9_3 + 8;
            temp_t9_3->words.w1 = 0x3F003F;
            temp_t9_3->words.w0 = 0xF7000000;
            temp_v0_3 = spF8;
            spF8 = temp_v0_3 + 8;
            temp_v0_3->words.w0 = ((phi_a3 & 0x3FF) * 4) | 0xF6180000;
            temp_v0_3->words.w1 = 0x80000 | ((sp278 & 0x3FF) * 4);
        }
        if (D_801FBBD4 == 1) {
            temp_t7 = spF8;
            spF8 = temp_t7 + 8;
            temp_t7->words.w1 = 0;
            temp_t7->words.w0 = 0xE7000000;
            temp_t8_2 = spF8;
            spF8 = temp_t8_2 + 8;
            temp_t8_2->words.w1 = 0x7C107C1;
            temp_t8_2->words.w0 = 0xF7000000;
            temp_t6_4 = spF8;
            spF8 = temp_t6_4 + 8;
            temp_t6_4->words.w1 = (((sp278 * 2) & 0x3FF) * 4) | 0x300000;
            temp_t6_4->words.w0 = (((phi_a3 * 2) & 0x3FF) * 4) | 0xF6500000;
        } else {
            temp_t6_5 = spF8;
            spF8 = temp_t6_5 + 8;
            temp_t6_5->words.w1 = 0;
            temp_t6_5->words.w0 = 0xE7000000;
            temp_t9_4 = spF8;
            spF8 = temp_t9_4 + 8;
            temp_t9_4->words.w1 = 0x7C107C1;
            temp_t9_4->words.w0 = 0xF7000000;
            temp_t8_3 = spF8;
            spF8 = temp_t8_3 + 8;
            temp_t8_3->words.w1 = ((sp278 & 0x3FF) * 4) | 0x180000;
            temp_t8_3->words.w0 = ((phi_a3 & 0x3FF) * 4) | 0xF6280000;
        }
        temp_t7_2 = spF8;
        if (D_801FBBD4 == 1) {
            temp_t9_5 = spF8;
            spF8 = temp_t9_5 + 8;
            temp_t9_5->words.w1 = 0;
            temp_t9_5->words.w0 = 0xE7000000;
            temp_t6_6 = spF8;
            spF8 = temp_t6_6 + 8;
            temp_t6_6->words.w1 = 0xF801F801;
            temp_t6_6->words.w0 = 0xF7000000;
            temp_t7_3 = spF8;
            spF8 = temp_t7_3 + 8;
            temp_t7_3->words.w1 = (((sp278 * 2) & 0x3FF) * 4) | 0x500000;
            temp_t7_3->words.w0 = (((phi_a3 * 2) & 0x3FF) * 4) | 0xF6700000;
        } else {
            spF8 = temp_t7_2 + 8;
            temp_t7_2->words.w1 = 0;
            temp_t7_2->words.w0 = 0xE7000000;
            temp_t8_4 = spF8;
            spF8 = temp_t8_4 + 8;
            temp_t8_4->words.w1 = 0xF801F801;
            temp_t8_4->words.w0 = 0xF7000000;
            temp_t6_7 = spF8;
            spF8 = temp_t6_7 + 8;
            temp_t6_7->words.w1 = ((sp278 & 0x3FF) * 4) | 0x280000;
            temp_t6_7->words.w0 = ((phi_a3 & 0x3FF) * 4) | 0xF6380000;
        }
        temp_t9_6 = spF8;
        if (D_801FBBD4 == 1) {
            temp_t8_5 = spF8;
            spF8 = temp_t8_5 + 8;
            temp_t8_5->words.w1 = 0;
            temp_t8_5->words.w0 = 0xE7000000;
            temp_t7_4 = spF8;
            spF8 = temp_t7_4 + 8;
            temp_t7_4->words.w1 = 0xF83FF83F;
            temp_t7_4->words.w0 = 0xF7000000;
            temp_t9_7 = spF8;
            spF8 = temp_t9_7 + 8;
            temp_t9_7->words.w1 = (((sp278 * 2) & 0x3FF) * 4) | 0x700000;
            temp_t9_7->words.w0 = (((phi_a3 * 2) & 0x3FF) * 4) | 0xF6900000;
        } else {
            spF8 = temp_t9_6 + 8;
            temp_t9_6->words.w1 = 0;
            temp_t9_6->words.w0 = 0xE7000000;
            temp_t6_8 = spF8;
            spF8 = temp_t6_8 + 8;
            temp_t6_8->words.w1 = 0xF83FF83F;
            temp_t6_8->words.w0 = 0xF7000000;
            temp_t7_5 = spF8;
            spF8 = temp_t7_5 + 8;
            temp_t7_5->words.w1 = ((sp278 & 0x3FF) * 4) | 0x380000;
            temp_t7_5->words.w0 = ((phi_a3 & 0x3FF) * 4) | 0xF6480000;
        }
        D_801FBB28 = &D_801D1540;
        do {
            temp_t9_8 = spF8;
            if (D_801FBBD4 == 1) {
                temp_v1 = D_801FBB28->unk8;
                spF8 = temp_t9_8 + 8;
                temp_t9_8->words.w1 = 0;
                temp_t9_8->words.w0 = 0xE7000000;
                temp_t6_9 = spF8;
                spF8 = temp_t6_9 + 8;
                temp_t6_9->words.w1 = (temp_v1 << 0x10) | temp_v1;
                temp_t6_9->words.w0 = 0xF7000000;
                temp_v1_2 = spF8;
                temp_v0_4 = D_801FBB28;
                spF8 = temp_v1_2 + 8;
                temp_v1_2->words.w0 = (((temp_v0_4->unk4 * 2) & 0x3FF) << 0xE) | 0xF6000000 | (((((phi_a3 + temp_v0_4->unk6) * 2) + 2) & 0x3FF) * 4);
                temp_v1_2->words.w1 = 0x100000 | ((((phi_a3 + D_801FBB28->unk6) * 2) & 0x3FF) * 4);
            } else {
                temp_t6_10 = spF8;
                temp_v1_3 = D_801FBB28->unk8;
                spF8 = temp_t6_10 + 8;
                temp_t6_10->words.w1 = 0;
                temp_t6_10->words.w0 = 0xE7000000;
                temp_t8_6 = spF8;
                spF8 = temp_t8_6 + 8;
                temp_t8_6->words.w1 = (temp_v1_3 << 0x10) | temp_v1_3;
                temp_t8_6->words.w0 = 0xF7000000;
                temp_v1_4 = spF8;
                temp_v0_5 = D_801FBB28;
                spF8 = temp_v1_4 + 8;
                temp_v1_4->words.w0 = ((temp_v0_5->unk4 & 0x3FF) << 0xE) | 0xF6000000 | (((phi_a3 + temp_v0_5->unk6 + 1) & 0x3FF) * 4);
                temp_v1_4->words.w1 = 0x80000 | (((phi_a3 + D_801FBB28->unk6) & 0x3FF) * 4);
            }
            temp_a2_2 = phi_a2_2 + 1;
            D_801FBB28 += 0xC;
            phi_a2_2 = temp_a2_2;
        } while (temp_a2_2 != 4);
        temp_t6_11 = spF8;
        spF8 = temp_t6_11 + 8;
        temp_t6_11->words.w1 = 0;
        temp_t6_11->words.w0 = 0xE7000000;
        gCtx->overlay.p = spF8;
    }
}

void func_80177A84(? *arg0, u32 arg1, u32 arg2, s32 arg3, u16 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
    arg0->unk8 = (s16) (arg3 & 0xFFFF);
    arg0->unkA = arg4;
    arg0->unkC = arg5;
    arg0->unk10 = arg6;
    arg0->unk14 = arg7;
    arg0->unk18 = arg8;
}

void func_80177AC8(? *arg0, GraphicsContext *arg1) {
    View sp88;
    Gfx *sp84;
    s32 sp78;
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    Gfx **temp_a1;
    Gfx *temp_t3;
    Gfx *temp_t5;
    Gfx *temp_t5_2;
    Gfx *temp_t5_3;
    Gfx *temp_t7;
    Gfx *temp_t7_2;
    Gfx *temp_t7_3;
    Gfx *temp_t8;
    Gfx *temp_t8_2;
    Gfx *temp_t9;
    Gfx *temp_t9_2;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    s32 temp_a0;
    s32 temp_v0;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u16 temp_v1_4;

    if (arg0->unk0 != 0) {
        arg0 = arg0;
        View_Init(&sp88, arg1);
        sp88.flags = 0xA;
        sp6C = 0;
        sp74 = 0;
        sp78 = gScreenWidth;
        sp70 = gScreenHeight;
        View_SetViewport(&sp88, (Viewport *) &sp6C);
        temp_a1 = &sp84;
        sp84 = arg1->overlay.p;
        func_801400CC(&sp88, temp_a1);
        temp_t5 = sp84;
        sp84 = temp_t5 + 8;
        temp_t5->words.w1 = 0;
        temp_t5->words.w0 = 0xE7000000;
        temp_t7 = sp84;
        sp84 = temp_t7 + 8;
        temp_t7->words.w1 = 0;
        temp_t7->words.w0 = 0xEF300000;
        temp_v0 = arg0->unkC;
        temp_a0 = ((s32) ((arg0->unk10 - temp_v0) * arg0->unk4) / (s32) arg0->unk0) + temp_v0;
        if (D_801FBBD4 == 1) {
            temp_v1 = arg0->unk8;
            temp_t3 = sp84;
            sp84 = temp_t3 + 8;
            temp_t3->words.w1 = 0;
            temp_t3->words.w0 = 0xE7000000;
            temp_t5_2 = sp84;
            sp84 = temp_t5_2 + 8;
            temp_t5_2->words.w1 = (temp_v1 << 0x10) | temp_v1;
            temp_t5_2->words.w0 = 0xF7000000;
            temp_v0_2 = sp84;
            sp84 = temp_v0_2 + 8;
            temp_v0_2->words.w0 = (((arg0->unk10 * 2) & 0x3FF) << 0xE) | 0xF6000000 | (((arg0->unk18 * 2) & 0x3FF) * 4);
            temp_v0_2->words.w1 = (((temp_a0 * 2) & 0x3FF) << 0xE) | (((arg0->unk14 * 2) & 0x3FF) * 4);
        } else {
            temp_v1_2 = arg0->unk8;
            temp_t9 = sp84;
            sp84 = temp_t9 + 8;
            temp_t9->words.w1 = 0;
            temp_t9->words.w0 = 0xE7000000;
            temp_t8 = sp84;
            sp84 = temp_t8 + 8;
            temp_t8->words.w1 = (temp_v1_2 << 0x10) | temp_v1_2;
            temp_t8->words.w0 = 0xF7000000;
            temp_v0_3 = sp84;
            sp84 = temp_v0_3 + 8;
            temp_v0_3->words.w0 = ((arg0->unk10 & 0x3FF) << 0xE) | 0xF6000000 | ((arg0->unk18 & 0x3FF) * 4);
            temp_v0_3->words.w1 = ((temp_a0 & 0x3FF) << 0xE) | ((arg0->unk14 & 0x3FF) * 4);
        }
        temp_t5_3 = sp84;
        if (D_801FBBD4 == 1) {
            temp_v1_3 = arg0->unkA;
            temp_t8_2 = sp84;
            sp84 = temp_t8_2 + 8;
            temp_t8_2->words.w1 = 0;
            temp_t8_2->words.w0 = 0xE7000000;
            temp_t7_2 = sp84;
            sp84 = temp_t7_2 + 8;
            temp_t7_2->words.w1 = (temp_v1_3 << 0x10) | temp_v1_3;
            temp_t7_2->words.w0 = 0xF7000000;
            temp_v0_4 = sp84;
            sp84 = temp_v0_4 + 8;
            temp_v0_4->words.w0 = (((temp_a0 * 2) & 0x3FF) << 0xE) | 0xF6000000 | (((arg0->unk18 * 2) & 0x3FF) * 4);
            temp_v0_4->words.w1 = (((arg0->unkC * 2) & 0x3FF) << 0xE) | (((arg0->unk14 * 2) & 0x3FF) * 4);
        } else {
            temp_v1_4 = arg0->unkA;
            sp84 = temp_t5_3 + 8;
            temp_t5_3->words.w1 = 0;
            temp_t5_3->words.w0 = 0xE7000000;
            temp_t9_2 = sp84;
            sp84 = temp_t9_2 + 8;
            temp_t9_2->words.w1 = (temp_v1_4 << 0x10) | temp_v1_4;
            temp_t9_2->words.w0 = 0xF7000000;
            temp_v0_5 = sp84;
            sp84 = temp_v0_5 + 8;
            temp_v0_5->words.w0 = ((temp_a0 & 0x3FF) << 0xE) | 0xF6000000 | ((arg0->unk18 & 0x3FF) * 4);
            temp_v0_5->words.w1 = ((arg0->unkC & 0x3FF) << 0xE) | ((arg0->unk14 & 0x3FF) * 4);
        }
        temp_t7_3 = sp84;
        sp84 = temp_t7_3 + 8;
        temp_t7_3->words.w1 = 0;
        temp_t7_3->words.w0 = 0xE7000000;
        arg1->overlay.p = sp84;
    }
}

void SpeedMeter_DrawAllocEntries(void *displayList, GraphicsContext *gfxCtx, GameState *gameState) {
    ? sp6C;
    u32 sp5C;
    u32 sp58;
    u32 sp54;
    u32 sp50;
    u32 sp4C;
    u32 sp48;
    TwoHeadArena *sp40;
    TwoHeadArena *temp_a0;
    TwoHeadGfxArena *temp_a0_2;
    TwoHeadGfxArena *temp_a0_3;
    TwoHeadGfxArena *temp_a0_4;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    u32 temp_a1;
    u32 temp_a1_2;
    u32 temp_a1_3;
    u32 temp_a1_4;
    u32 temp_v0;
    s32 phi_s0;
    s32 phi_s0_2;

    phi_s0 = 0xD4;
    if (((s32) gGameInfo->data[96] >= 3) && (MainHeap_IsInitialized() != 0)) {
        MainHeap_AnalyzeArena(&sp5C, &sp58, &sp54);
        func_80177A84(&sp6C, sp58 + sp54, sp54, 0x3F, (u16) 0xFFFF, 0x1E, 0x122, 0xD4, 0xD5);
        func_80177AC8(&sp6C, gfxCtx);
        phi_s0 = 0xD6;
    }
    phi_s0_2 = phi_s0;
    if ((s32) gGameInfo->data[96] >= 2) {
        SystemArena_AnalyzeArena(&sp50, &sp4C, &sp48);
        temp_v0 = gameState->heap.size;
        func_80177A84(&sp6C, (sp4C + sp48) - temp_v0, sp48 - temp_v0, 0x3F, (u16) 0xFC21, 0x1E, 0x122, phi_s0, phi_s0);
        func_80177AC8(&sp6C, gfxCtx);
        phi_s0_2 = phi_s0 + 1;
    }
    temp_a0 = &gameState->heap;
    sp40 = temp_a0;
    temp_a1 = sp40->size;
    func_80177A84(&sp6C, temp_a1, temp_a1 - THA_GetSize(temp_a0), 0x3F, (u16) 0x7C1, 0x1E, 0x122, phi_s0_2, phi_s0_2);
    func_80177AC8(&sp6C, gfxCtx);
    temp_a0_2 = &gfxCtx->polyOpa;
    temp_s0 = phi_s0_2 + 1;
    sp40 = (TwoHeadArena *) temp_a0_2;
    temp_a1_2 = sp40->size;
    func_80177A84(&sp6C, temp_a1_2, temp_a1_2 - THGA_GetSize(temp_a0_2), 0x3F, (u16) 0xF83F, 0x1E, 0x122, temp_s0, temp_s0);
    func_80177AC8(&sp6C, gfxCtx);
    temp_a0_3 = &gfxCtx->polyXlu;
    temp_s0_2 = temp_s0 + 1;
    sp40 = (TwoHeadArena *) temp_a0_3;
    temp_a1_3 = sp40->size;
    func_80177A84(&sp6C, temp_a1_3, temp_a1_3 - THGA_GetSize(temp_a0_3), 0x3F, (u16) 0xFFC1, 0x1E, 0x122, temp_s0_2, temp_s0_2);
    func_80177AC8(&sp6C, gfxCtx);
    temp_a0_4 = &gfxCtx->overlay;
    temp_s0_3 = temp_s0_2 + 1;
    sp40 = (TwoHeadArena *) temp_a0_4;
    temp_a1_4 = sp40->size;
    func_80177A84(&sp6C, temp_a1_4, temp_a1_4 - THGA_GetSize(temp_a0_4), 0x3F, (u16) 0xF801, 0x1E, 0x122, temp_s0_3, temp_s0_3);
    func_80177AC8(&sp6C, gfxCtx);
}

void func_801780F0(Mtx *param_1, f32 param_2, f32 param_3, f32 param_4, f32 param_5, f32 param_6, f32 param_7) {
    s32 temp_f10;
    s32 temp_f10_2;
    s32 temp_f10_3;
    s32 temp_f4;
    s32 temp_f4_2;
    s32 temp_f6;

    param_1->m[0][1] = 0;
    param_1->m[2][1] = 0;
    param_1->m[0][3] = 0;
    param_1->m[2][3] = 0;
    param_1->m[1][0] = 0;
    temp_f6 = (s32) (param_2 * 65536.0f);
    temp_f10 = (s32) (param_3 * 65536.0f);
    param_1->m[0][0] = temp_f6;
    param_1->unk2 = 0;
    param_1->m[2][0] = temp_f6 << 0x10;
    param_1->m[0][2] = (s32) ((u32) temp_f10 >> 0x10);
    param_1->m[2][2] = temp_f10 & 0xFFFF;
    param_1->m[3][0] = 0;
    temp_f4 = (s32) (param_4 * 65536.0f);
    param_1->m[1][1] = temp_f4;
    param_1->unk16 = 0;
    param_1->m[3][1] = temp_f4 << 0x10;
    temp_f10_2 = (s32) (param_5 * 65536.0f);
    param_1->unk18 = (s16) ((u32) temp_f10_2 >> 0x10);
    param_1->unk38 = (s16) temp_f10_2;
    temp_f4_2 = (s32) (param_6 * 65536.0f);
    param_1->unk1A = (s16) ((u32) temp_f4_2 >> 0x10);
    param_1->unk3A = (s16) temp_f4_2;
    param_1->unk1E = 1;
    temp_f10_3 = (s32) (param_7 * 65536.0f);
    param_1->unk1C = (s16) ((u32) temp_f10_3 >> 0x10);
    param_1->m[3][3] = temp_f10_3 << 0x10;
}

void func_801781EC(void *arg0, s16 arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 sp48;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    s32 temp_f4;
    s32 temp_f4_2;
    s32 temp_f6;
    s32 temp_f6_2;
    s32 temp_f6_3;
    s32 temp_f6_4;
    s32 temp_f8;
    s32 temp_f8_2;
    s32 temp_f8_3;

    sp30 = (bitwise f32) arg1;
    arg0 = arg0;
    sp48 = Math_SinS(arg1);
    temp_f0 = Math_CosS(arg1);
    temp_f12 = arg2 * arg2;
    arg0->unk18 = 0;
    arg0->unk1C = 1;
    arg0->unk38 = 0;
    arg0->unk3C = 0;
    temp_f14 = 1.0f - temp_f0;
    temp_f6 = (s32) ((((1.0f - temp_f12) * temp_f0) + temp_f12) * 65536.0f);
    arg0->unk0 = (s16) ((u32) temp_f6 >> 0x10);
    arg0->unk20 = (s16) temp_f6;
    temp_f16 = arg3 * arg4 * temp_f14;
    sp28 = arg2 * sp48;
    temp_f6_2 = (s32) ((temp_f16 - sp28) * 65536.0f);
    arg0->unk12 = (s16) ((u32) temp_f6_2 >> 0x10);
    arg0->unk32 = (s16) temp_f6_2;
    sp2C = temp_f16;
    sp30 = temp_f14;
    temp_f14_2 = arg3 * arg3;
    temp_f8 = (s32) ((sp28 + sp2C) * 65536.0f);
    arg0->unkC = temp_f8;
    arg0->unkE = 0;
    arg0->unk2C = (s32) (temp_f8 << 0x10);
    temp_f4 = (s32) ((((1.0f - temp_f14_2) * temp_f0) + temp_f14_2) * 65536.0f);
    arg0->unkA = (s16) ((u32) temp_f4 >> 0x10);
    arg0->unk2A = (s16) temp_f4;
    temp_f12_2 = arg4 * arg2 * sp30;
    temp_f16_2 = arg3 * sp48;
    temp_f8_2 = (s32) ((temp_f12_2 - temp_f16_2) * 65536.0f);
    temp_f6_3 = (s32) ((temp_f16_2 + temp_f12_2) * 65536.0f);
    arg0->unk10 = (s16) ((u32) temp_f8_2 >> 0x10);
    arg0->unk4 = temp_f6_3;
    arg0->unk6 = 0;
    arg0->unk24 = (s32) (temp_f6_3 << 0x10);
    arg0->unk30 = (s16) temp_f8_2;
    temp_f14_3 = arg4 * arg4;
    temp_f4_2 = (s32) ((((1.0f - temp_f14_3) * temp_f0) + temp_f14_3) * 65536.0f);
    arg0->unk14 = temp_f4_2;
    arg0->unk16 = 0;
    arg0->unk34 = (s32) (temp_f4_2 << 0x10);
    temp_f12_3 = arg2 * arg3 * sp30;
    temp_f16_3 = arg4 * sp48;
    temp_f8_3 = (s32) ((temp_f12_3 - temp_f16_3) * 65536.0f);
    temp_f6_4 = (s32) ((temp_f16_3 + temp_f12_3) * 65536.0f);
    arg0->unk8 = (s16) ((u32) temp_f8_3 >> 0x10);
    arg0->unk2 = (s16) ((u32) temp_f6_4 >> 0x10);
    arg0->unk28 = (s16) temp_f8_3;
    arg0->unk22 = (s16) temp_f6_4;
}

void func_8017842C(void *arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 argA) {
    f32 sp40;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f10_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f6_3;
    f32 temp_f6_4;
    f32 temp_f8;
    f32 temp_f8_3;
    s32 temp_f10;
    s32 temp_f10_2;
    s32 temp_f10_4;
    s32 temp_f10_5;
    s32 temp_f4_2;
    s32 temp_f4_3;
    s32 temp_f4_4;
    s32 temp_f6_2;
    s32 temp_f6_5;
    s32 temp_f8_2;
    s32 temp_f8_4;
    s32 temp_t9;

    arg0 = arg0;
    sp28 = (bitwise f32) arg4;
    sp40 = Math_SinS(arg4);
    temp_f0 = Math_CosS(arg4);
    temp_f12 = arg5 * arg5;
    temp_f6 = 1.0f - temp_f0;
    temp_t9 = (s32) ((((1.0f - temp_f12) * temp_f0) + temp_f12) * arg1 * 65536.0f);
    arg0->unk0 = (s16) ((u32) temp_t9 >> 0x10);
    arg0->unk20 = (s16) temp_t9;
    sp28 = temp_f6;
    temp_f4 = arg6 * arg7 * temp_f6;
    temp_f8 = arg5 * sp40;
    sp24 = temp_f4;
    sp1C = temp_f8;
    temp_f6_2 = (s32) ((temp_f4 - sp1C) * arg3 * 65536.0f);
    arg0->unk12 = (s16) ((u32) temp_f6_2 >> 0x10);
    arg0->unk32 = (s16) temp_f6_2;
    temp_f12_2 = arg6 * arg6;
    temp_f10 = (s32) ((temp_f8 + temp_f4) * arg2 * 65536.0f);
    arg0->unkC = temp_f10;
    arg0->unkE = 0;
    arg0->unk2C = (s32) (temp_f10 << 0x10);
    temp_f10_2 = (s32) ((((1.0f - temp_f12_2) * temp_f0) + temp_f12_2) * arg2 * 65536.0f);
    arg0->unkA = (s16) ((u32) temp_f10_2 >> 0x10);
    arg0->unk2A = (s16) temp_f10_2;
    temp_f10_3 = arg7 * arg5 * sp28;
    temp_f6_3 = arg6 * sp40;
    sp20 = temp_f10_3;
    sp18 = temp_f6_3;
    temp_f4_2 = (s32) ((temp_f10_3 - sp18) * arg3 * 65536.0f);
    arg0->unk10 = (s16) ((u32) temp_f4_2 >> 0x10);
    arg0->unk30 = (s16) temp_f4_2;
    temp_f8_2 = (s32) ((temp_f6_3 + temp_f10_3) * arg1 * 65536.0f);
    arg0->unk4 = temp_f8_2;
    arg0->unk6 = 0;
    arg0->unk24 = (s32) (temp_f8_2 << 0x10);
    temp_f12_3 = arg7 * arg7;
    temp_f4_3 = (s32) ((((1.0f - temp_f12_3) * temp_f0) + temp_f12_3) * arg3 * 65536.0f);
    arg0->unk14 = temp_f4_3;
    arg0->unk16 = 0;
    arg0->unk34 = (s32) (temp_f4_3 << 0x10);
    temp_f8_3 = arg5 * arg6 * sp28;
    temp_f6_4 = arg7 * sp40;
    sp24 = temp_f8_3;
    sp1C = temp_f6_4;
    temp_f10_4 = (s32) ((temp_f8_3 - temp_f6_4) * arg2 * 65536.0f);
    arg0->unk8 = (s16) ((u32) temp_f10_4 >> 0x10);
    arg0->unk28 = (s16) temp_f10_4;
    temp_f6_5 = (s32) ((sp1C + temp_f8_3) * arg1 * 65536.0f);
    arg0->unk2 = (s16) ((u32) temp_f6_5 >> 0x10);
    arg0->unk22 = (s16) temp_f6_5;
    temp_f8_4 = (s32) (arg8 * 65536.0f);
    arg0->unk18 = temp_f8_4;
    arg0->unk38 = (s16) temp_f8_4;
    temp_f4_4 = (s32) (arg9 * 65536.0f);
    arg0->unk1A = (s16) ((u32) temp_f4_4 >> 0x10);
    arg0->unk3A = (s16) temp_f4_4;
    temp_f10_5 = (s32) (argA * 65536.0f);
    arg0->unk1C = temp_f10_5;
    arg0->unk1E = 1;
    arg0->unk3C = (s32) (temp_f10_5 << 0x10);
}

