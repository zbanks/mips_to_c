failed to write global decls
Traceback (most recent call last):
  File "main.py", line 0, in run
    global_decls = global_info.global_decls(fmt)
  File "translate.py", line 0, in global_decls
    value = self.initializer_for_symbol(sym, fmt)
  File "translate.py", line 0, in initializer_for_symbol
    return for_type(sym.type, sym.array_dim)
  File "translate.py", line 0, in for_type
    return for_element_type(type)
  File "translate.py", line 0, in for_element_type
    padding = read_uint(field)
  File "translate.py", line 0, in read_uint
    assert 0 < n <= 8
AssertionError
typedef struct GraphicsContext {
    /* 0x0000 */ Gfx *polyOpaBuffer;
    /* 0x0004 */ Gfx *polyXluBuffer;
    /* 0x0008 */ char pad8[0x8];                    /* maybe part of polyXluBuffer[3]? */
    /* 0x0010 */ Gfx *overlayBuffer;
    /* 0x0014 */ char pad14[0x24];                  /* maybe part of overlayBuffer[10]? */
    /* 0x0038 */ void *unk38;                       /* inferred */
    /* 0x003C */ char pad3C[0x1C];                  /* maybe part of unk38[8]? */
    /* 0x0058 */ OSMesgQueue *unk58;
    /* 0x005C */ OSMesgQueue unk5C;
    /* 0x0074 */ char pad74[0x4];
    /* 0x0078 */ void unk78;                        /* inferred */
    /* 0x0079 */ char pad79[0xF];
    /* 0x0088 */ ? unk88;                           /* inferred */
    /* 0x0089 */ char pad89[0x117];
    /* 0x01A0 */ Gfx *unk1A0;
    /* 0x01A4 */ TwoHeadGfxArena unk1A4;
    /* 0x01B4 */ Gfx *unk1B4;
    /* 0x01B8 */ TwoHeadGfxArena unk1B8;
    /* 0x01C8 */ char pad1C8[0xAC];
    /* 0x0274 */ OSViMode *unk274;
    /* 0x0278 */ void *zbuffer;
    /* 0x027C */ char pad27C[0x1C];                 /* maybe part of zbuffer[8]? */
    /* 0x0298 */ TwoHeadGfxArena overlay;
    /* 0x02A8 */ TwoHeadGfxArena polyOpa;
    /* 0x02B8 */ TwoHeadGfxArena polyXlu;
    /* 0x02C8 */ s32 displaylistCounter;
    /* 0x02CC */ void *framebuffer;
    /* 0x02D0 */ s32 pad2D0;
    /* 0x02D4 */ u32 viConfigFeatures;
    /* 0x02D8 */ char pad2D8[0x2];
    /* 0x02DA */ u8 unk2DA;                         /* inferred */
    /* 0x02DB */ u8 framebufferCounter;
    /* 0x02DC */ ? (*unk2DC)(GraphicsContext *, s32); /* inferred */
    /* 0x02E0 */ s32 unk2E0;                        /* inferred */
    /* 0x02E4 */ f32 viConfigXScale;
    /* 0x02E8 */ f32 viConfigYScale;
    /* 0x02EC */ Gfx *unk2EC;                       /* inferred */
} GraphicsContext;                                  /* size 0x2F0 */

void Graph_FaultClient(void) {
    FaultDrawer_DrawText(0x1E, 0x64, "ShowFrameBuffer PAGE 0/1");
    osViSwapBuffer(get_framebuffer(0));
    osViSetMode(D_801FBB88);
    osViSetSpecialFeatures(0x42U);
    Fault_WaitForInput();
    osViSwapBuffer(get_framebuffer(1));
    osViSetMode(D_801FBB88);
    osViSetSpecialFeatures(0x42U);
}

void Graph_DlAlloc(TwoHeadGfxArena *dl, void *memoryBlock, u32 size) {
    THGA_Ct(dl, (Gfx *) memoryBlock, size);
}

void Graph_InitTHGA(GraphicsContext *gfxCtx) {
    Gfx *sp38;
    Gfx *sp34;
    Gfx *sp30;
    Gfx *sp2C;
    Gfx *sp28;
    Gfx *temp_a1;
    Gfx *temp_a1_2;
    Gfx *temp_a1_3;
    Gfx *temp_a1_4;
    Gfx *temp_a1_5;
    Gfx *temp_t0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GfxPool *temp_s1;
    void *temp_v0;

    temp_s1 = &gGfxPools[gfxCtx->displaylistCounter & 1];
    temp_t0 = temp_s1->unk8;
    graphDlEntry = temp_t0;
    *(gSegments + 0x38) = (u32) temp_t0;
    temp_s1->headMagic = 0x1234;
    temp_s1->tailMagic = 0x5678;
    temp_a1 = temp_s1->polyOpaBuffer;
    sp38 = temp_a1;
    Graph_DlAlloc(&gfxCtx->polyOpa, (void *) temp_a1, 0x19C00U);
    temp_a1_2 = temp_s1->polyXluBuffer;
    sp34 = temp_a1_2;
    Graph_DlAlloc(&gfxCtx->polyXlu, (void *) temp_a1_2, 0x4000U);
    temp_a1_3 = temp_s1->overlayBuffer;
    sp30 = temp_a1_3;
    Graph_DlAlloc(&gfxCtx->overlay, (void *) temp_a1_3, 0x2000U);
    temp_a1_4 = temp_s1->unk6308;
    sp2C = temp_a1_4;
    Graph_DlAlloc(&gfxCtx->unk1A4, (void *) temp_a1_4, 0x200U);
    temp_a1_5 = temp_s1->unk6508;
    sp28 = temp_a1_5;
    Graph_DlAlloc(&gfxCtx->unk1B8, (void *) temp_a1_5, 0x200U);
    gfxCtx->polyOpaBuffer = sp38;
    gfxCtx->polyXluBuffer = sp34;
    gfxCtx->overlayBuffer = sp30;
    gfxCtx->unk1B4 = sp28;
    gfxCtx->unk1A0 = sp2C;
    temp_v0 = get_framebuffer((s32) gfxCtx->framebufferCounter % 2);
    gfxCtx->framebuffer = temp_v0;
    *(gSegments + 0x3C) = (u32) temp_v0;
    gfxCtx->zbuffer = get_zbuffer();
    temp_v0_2 = graphDlEntry;
    temp_v0_2->unk2A0 = 0xDE010000U;
    (temp_v0_2 + 0x2A0)->words.w1 = (u32) sp38;
    temp_v0_3 = graphDlEntry;
    temp_v0_3->unk2A8 = 0xDE010000U;
    (temp_v0_3 + 0x2A8)->words.w1 = (u32) sp34;
    temp_v0_4 = graphDlEntry;
    temp_v0_4->unk2B0 = 0xDE010000U;
    (temp_v0_4 + 0x2B0)->words.w1 = (u32) sp30;
    temp_v0_5 = graphDlEntry;
    temp_v0_5->unk2B8 = 0xDE010000U;
    (temp_v0_5 + 0x2B8)->words.w1 = (u32) sp2C;
    temp_v0_6 = graphDlEntry;
    temp_v0_6->unk2C0 = 0xDF000000;
    (temp_v0_6 + 0x2C0)->words.w1 = 0;
    temp_v0_7 = graphDlEntry + 0x2F8;
    temp_v0_7->words.w1 = (u32) sp28;
    temp_v0_7->words.w0 = 0xDE010000;
}

GameStateOverlay *Graph_GetNextGameState(GameState *gamestate) {
    void (*temp_v0)(GameState *);

    temp_v0 = Game_GetNextStateInit(gamestate);
    if (temp_v0 == TitleSetup_Init) {
        return &gGameStateOverlayTable;
    }
    if (temp_v0 == Select_Init) {
        return &gGameStateOverlayTable + 0x30;
    }
    if (temp_v0 == Title_Init) {
        return &gGameStateOverlayTable + 0x60;
    }
    if (temp_v0 == Play_Init) {
        return &gGameStateOverlayTable + 0x90;
    }
    if (temp_v0 == Opening_Init) {
        return &gGameStateOverlayTable + 0xC0;
    }
    if (temp_v0 == FileChoose_Init) {
        return &gGameStateOverlayTable + 0xF0;
    }
    if (temp_v0 == Daytelop_Init) {
        return &gGameStateOverlayTable + 0x120;
    }
    return NULL;
}

void *Graph_FaultAddrConvFunc(void *addr) {
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_v1;
    u32 temp_t0;
    GameStateOverlay *phi_v0;
    s32 phi_v1;

    arg1 = MIPS2C_ERROR(Read from unset register $a1);
    temp_a1 = graphNumGameStates;
    phi_v0 = &gGameStateOverlayTable;
    phi_v1 = 0;
    if (temp_a1 > 0) {
loop_1:
        temp_t0 = phi_v0->loadedRamAddr;
        temp_a3 = phi_v0->vramStart;
        if ((temp_t0 != 0) && ((u32) addr >= temp_t0) && ((u32) addr < (u32) (temp_t0 + (phi_v0->vramEnd - temp_a3)))) {
            return addr + (temp_a3 - temp_t0);
        }
        temp_v1 = phi_v1 + 1;
        phi_v0 += 0x30;
        phi_v1 = temp_v1;
        if (temp_v1 >= temp_a1) {
            // Duplicate return node #6. Try simplifying control flow for better match
            return NULL;
        }
        goto loop_1;
    }
    return NULL;
}

void Graph_Init(GraphicsContext *gfxCtx) {
    GraphicsContext *temp_a0;

    temp_a0 = gfxCtx;
    gfxCtx = gfxCtx;
    bzero((void *) temp_a0, 0x2F0);
    gfxCtx->displaylistCounter = 0;
    gfxCtx->framebufferCounter = 0;
    gfxCtx->unk274 = NULL;
    gfxCtx->viConfigFeatures = gViConfigFeatures;
    gfxCtx->viConfigXScale = gViConfigXScale;
    gfxCtx->viConfigYScale = gViConfigYScale;
    osCreateMesgQueue(&gfxCtx->unk5C, &gfxCtx->unk38, 8);
    Fault_AddClient(&graphFaultClient, Graph_FaultClient, NULL, NULL);
    Fault_AddAddrConvClient(&grapgFaultAddrConvClient, (void *(*)(void *, void *)) Graph_FaultAddrConvFunc, NULL);
}

void Graph_Destroy(GraphicsContext *arg0) {
    Fault_RemoveClient(&graphFaultClient);
    Fault_RemoveAddrConvClient(&grapgFaultAddrConvClient);
}

void Graph_Render(GraphicsContext *gfxCtx, GameState *gamestate) {
    OSTimer sp68;
    void *sp64;
    ? *sp58;
    ? (*temp_v0_2)(GraphicsContext *, s32);
    ? *temp_v1;
    GameInfo *temp_a0;
    OSMesgQueue *temp_a0_2;
    OSMesgQueue *temp_s1;
    s16 temp_a1;
    u32 temp_v0;
    u32 temp_v1_2;
    void *temp_s0;
    void *temp_v0_3;

    temp_s1 = &gfxCtx->unk5C;
loop_1:
    osSetTimer(&sp68, 0U, 0x861C468U, NULL, NULL, temp_s1, 0x29A);
    osRecvMesg(temp_s1, &sp64, 1);
    osStopTimer(&sp68);
    if (sp64 == 0x29A) {
        osSyncPrintf("GRAPH SP TIMEOUT\n");
        temp_v0 = D_801D1510;
        if ((s32) temp_v0 >= 0) {
            D_801D1510 = temp_v0 - 1;
            Sched_SendGfxCancelMsg(&schedContext);
            goto loop_1;
        }
        osSyncPrintf("graph.c:もうダメ！死ぬ！\n");
        Fault_AddHungupAndCrashImpl("RCP is HUNG UP!!", "Oh! MY GOD!!");
    }
    temp_v0_2 = gfxCtx->unk2DC;
    gfxCtx->unk2EC = graphDlEntry;
    if (temp_v0_2 != 0) {
        temp_v0_2(gfxCtx, gfxCtx->unk2E0);
    }
    temp_v1 = &gfxCtx->unk88;
    temp_v1->unk0 = 1;
    temp_v1->unk4 = 4;
    sp58 = temp_v1;
    temp_v1->unk8 = func_80182C90();
    temp_v1->unkC = func_80182CA0();
    temp_v1->unk10 = func_80182CBC();
    temp_v1->unk18 = func_80182CCC();
    temp_v1->unk14 = 0x1000;
    temp_v1->unk1C = 0x800;
    temp_v1->unk20 = gGfxSPTaskStack;
    temp_v1->unk24 = 0x400;
    temp_v1->unk28 = (s32) D_801FBB94;
    temp_v1->unk2C = (s32) D_801FBB98;
    temp_s0 = &gfxCtx->unk78;
    temp_v1->unk34 = 0;
    temp_v1->unk38 = gGfxSPTaskYieldBuffer;
    temp_v1->unk3C = 0xC00;
    temp_v1->unk30 = (Gfx *) graphDlEntry;
    temp_s0->unk0 = 0;
    temp_s0->unk8 = 0x63;
    temp_a0 = gGameInfo;
    temp_a1 = temp_a0->data[129];
    if ((temp_a1 & 1) != 0) {
        temp_a0->data[129] = temp_a1 & 0xFFFE;
        temp_s0->unk8 = (s32) (temp_s0->unk8 & ~0x40);
        gfxCtx->framebufferCounter += -1;
    }
    temp_v1_2 = *D_801D1514;
    temp_s0->unk50 = temp_s1;
    temp_s0->unk54 = 0;
    temp_v0_3 = (temp_v1_2 * 0x1C) + &D_801F80F8;
    temp_v0_3->unk0 = (void *) gfxCtx->framebuffer;
    temp_v0_3->unk4 = (void *) gfxCtx->framebuffer;
    *D_801D1514 = (u32) ((s32) (temp_v1_2 + 1) % 3);
    if (gfxCtx->unk2DA != 0) {
        gfxCtx->unk2DA = 0;
        temp_v0_3->unk8 = (OSViMode *) gfxCtx->unk274;
        temp_v0_3->unkC = (u32) gfxCtx->viConfigFeatures;
        temp_v0_3->unk14 = (f32) gfxCtx->viConfigXScale;
        temp_v0_3->unk18 = (f32) gfxCtx->viConfigYScale;
    } else {
        temp_v0_3->unk8 = NULL;
    }
    temp_v0_3->unk10 = 0;
    temp_v0_3->unk11 = (u8) gamestate->framerateDivisor;
    temp_s0->unkC = temp_v0_3;
    if (gfxCtx->unk5C.validCount != 0) {
        do {
            osRecvMesg(temp_s1, NULL, 0);
        } while (gfxCtx->unk5C.validCount != 0);
    }
    temp_a0_2 = &schedContext.cmdQ;
    gfxCtx->unk58 = temp_a0_2;
    osSendMesg(temp_a0_2, temp_s0, 1);
    Sched_SendEntryMsg(&schedContext);
}

void Graph_FrameSetup(GameState *gamestate) {
    Game_UpdateInput(gamestate);
    Game_IncrementFrameCount(gamestate);
    if ((s32) gGameInfo->data[116] < 3) {
        func_8019E014();
    }
}

void Graph_RenderFrame(GraphicsContext *gfxCtx, GameState *gamestate) {
    s32 sp7C;
    GfxPool *sp34;
    u32 sp24;
    s32 sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    GfxPool *temp_v0_10;
    s32 temp_t2;
    s32 temp_t2_2;
    u32 *temp_at;
    u32 temp_t3;
    u32 temp_v1_6;
    u64 temp_ret;
    u64 temp_v0_11;

    gamestate->unkA3 = 0;
    Graph_InitTHGA(gfxCtx);
    Game_Update(gamestate);
    temp_v1 = gfxCtx->unk1A4.p;
    gfxCtx->unk1A4.p = temp_v1 + 8;
    temp_v1->words.w1 = 0;
    temp_v1->words.w0 = 0xDF000000;
    temp_v1_2 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = temp_v1_2 + 8;
    temp_v1_2->words.w1 = 0;
    temp_v1_2->words.w0 = 0xDF000000;
    temp_v1_3 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = temp_v1_3 + 8;
    temp_v1_3->words.w1 = 0;
    temp_v1_3->words.w0 = 0xDF000000;
    temp_v1_4 = gfxCtx->overlay.p;
    gfxCtx->overlay.p = temp_v1_4 + 8;
    temp_v1_4->words.w1 = 0;
    temp_v1_4->words.w0 = 0xDF000000;
    temp_v1_5 = gfxCtx->unk1B8.p;
    gfxCtx->unk1B8.p = temp_v1_5 + 8;
    temp_v1_5->words.w1 = 0;
    temp_v1_5->words.w0 = 0xDF000000;
    temp_v0 = graphDlEntry;
    temp_v0->words.w0 = 0xDB060038;
    temp_v0_2 = temp_v0 + 8;
    temp_v0->words.w1 = (u32) graphDlEntry;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = (u32) &D_0E0002B8;
    temp_v0_3 = temp_v0_2 + 8;
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_3->words.w1 = (u32) &D_0E0002A0;
    temp_v0_4 = temp_v0_3 + 8;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_4->words.w1 = (u32) &D_0E0002A8;
    temp_v0_5 = temp_v0_4 + 8;
    temp_v0_5->words.w1 = (u32) &D_0E0002B0;
    temp_v0_5->words.w0 = 0xDE000000;
    temp_v0_6 = temp_v0_5 + 8;
    temp_v0_6->words.w1 = (u32) &D_0E0002F8;
    temp_v0_6->words.w0 = 0xDE000000;
    temp_v0_7 = temp_v0_6 + 8;
    temp_v0_7->words.w0 = 0xE7000000;
    temp_v0_7->words.w1 = 0;
    temp_v0_8 = temp_v0_7 + 8;
    temp_v0_8->words.w0 = 0xE9000000;
    temp_v0_8->words.w1 = 0;
    temp_v0_9 = temp_v0_8 + 8;
    temp_v0_9->words.w0 = 0xDF000000;
    temp_v0_9->words.w1 = 0;
    sp7C = 0;
    temp_t2 = gfxCtx->displaylistCounter & 1;
    temp_v0_10 = &gGfxPools[temp_t2];
    if (temp_v0_10->headMagic != 0x1234) {
        sp34 = temp_v0_10;
        Fault_AddHungupAndCrash("../graph.c", 0x41EU);
    }
    if (gGfxPools[temp_t2].tailMagic != 0x5678) {
        Fault_AddHungupAndCrash("../graph.c", 0x42AU);
    }
    if (THGA_IsCrash(&gfxCtx->polyOpa) != 0) {
        sp7C = 1;
    }
    if (THGA_IsCrash(&gfxCtx->polyXlu) != 0) {
        sp7C = 1;
    }
    if (THGA_IsCrash(&gfxCtx->overlay) != 0) {
        sp7C = 1;
    }
    if (THGA_IsCrash(&gfxCtx->unk1A4) != 0) {
        sp7C = 1;
    }
    if (THGA_IsCrash(&gfxCtx->unk1B8) != 0) {
        sp7C = 1;
    }
    if (sp7C == 0) {
        Graph_Render(gfxCtx, gamestate);
        gfxCtx->displaylistCounter += 1;
        gfxCtx->framebufferCounter += 1;
    }
    temp_ret = osGetTime();
    temp_v0_11 = temp_ret;
    temp_v1_6 = (u32) temp_ret;
    D_801FBAE8.unk0 = (s32) sRSPGFXTotalTime.unk0;
    D_801FBAE8.unk4 = (s32) sRSPGFXTotalTime.unk4;
    D_801FBAE0.unk0 = (s32) gRSPAudioTotalTime.unk0;
    D_801FBAE0.unk4 = (s32) gRSPAudioTotalTime.unk4;
    D_801FBAF0.unk0 = (s32) gRDPTotalTime.unk0;
    D_801FBAF0.unk4 = (s32) gRDPTotalTime.unk4;
    sRSPGFXTotalTime.unk0 = 0;
    sRSPGFXTotalTime.unk4 = 0;
    gRSPAudioTotalTime.unk0 = 0;
    gRSPAudioTotalTime.unk4 = 0;
    gRDPTotalTime.unk0 = 0;
    gRDPTotalTime.unk4 = 0;
    temp_t2_2 = lastRenderFrameTimestamp;
    temp_t3 = *(&lastRenderFrameTimestamp + 4);
    sp20 = temp_t2_2;
    sp24 = temp_t3;
    if ((temp_t2_2 != 0) || (temp_t3 != 0)) {
        lastRenderFrameDuration.unk0 = (s32) ((temp_v0_11 - temp_t2_2) - (temp_v1_6 < temp_t3));
        lastRenderFrameDuration.unk4 = (s32) (temp_v1_6 - temp_t3);
    }
    temp_at = &lastRenderFrameTimestamp + 4;
    *temp_at = (u32) temp_v0_11;
    *temp_at = temp_v1_6;
}

void Graph_DoFrame(GraphicsContext *gfxCtx, GameState *gamestate) {
    gamestate->unkA3 = 0;
    Graph_FrameSetup(gamestate);
    Graph_RenderFrame(gfxCtx, gamestate);
}

void Graph_ThreadEntry(void *arg) {
    GraphicsContext sp50;
    GameStateOverlay *temp_s2;
    s32 temp_t8;
    u16 **temp_v0_2;
    u16 *temp_v0;
    u32 temp_s3;
    void *temp_s0;
    void *temp_v0_3;
    GameStateOverlay *phi_s2;

    temp_v0 = SystemArena_Malloc(0x4B03FU);
    temp_t8 = (temp_v0 + 0x3F) & ~0x3F;
    sys_cfb_zbufl = temp_v0;
    sys_cfb_zbufl = (u16 *) temp_t8;
    sys_cfb_wbufl = temp_t8 + 0x25800;
    temp_v0_2 = SystemArena_Malloc(0x18000U);
    sys_cfb_fifol = temp_v0_2;
    D_801FBBC4 = temp_v0_2;
    D_801FBBB0 = temp_v0_2 + 0x18000;
    D_801FBBC8 = D_801FBBC4 + 0x18000;
    func_80178978(&sys_cfb_fifol, &D_801FBBC4, 0x18000);
    Fault_SetFB(D_801FBB90, 0x140U, 0xF0U);
    Graph_Init(&sp50);
    phi_s2 = &gGameStateOverlayTable;
    if (&gGameStateOverlayTable != 0) {
        do {
            DLF_LoadGameState(phi_s2);
            temp_s3 = phi_s2->instanceSize;
            func_800809F4(phi_s2->vromStart);
            temp_v0_3 = SystemArena_Malloc(temp_s3);
            temp_s0 = temp_v0_3;
            bzero(temp_v0_3, (s32) temp_s3);
            Game_StateInit((GameState *) temp_s0, (void (*)(GameState *)) phi_s2->init, &sp50);
            if (Game_GetShouldContinue((GameState *) temp_s0) != 0) {
                do {
                    Graph_DoFrame(&sp50, (GameState *) temp_s0);
                } while (Game_GetShouldContinue((GameState *) temp_s0) != 0);
            }
            temp_s2 = Graph_GetNextGameState((GameState *) temp_s0);
            Game_StateFini((GameState *) temp_s0);
            SystemArena_Free(temp_s0);
            DLF_FreeGameState(phi_s2);
            phi_s2 = temp_s2;
        } while (temp_s2 != 0);
    }
    Graph_Destroy(&sp50);
}

