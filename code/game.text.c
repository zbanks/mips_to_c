struct _mips2c_stack_GameState_Draw {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ Gfx *sp3C;                           /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_GameState_SetFBFilter {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_Game_GetHeapFreeSize {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Game_GetNextStateInit {};      /* size 0x0 */

struct _mips2c_stack_Game_GetNextStateSize {};      /* size 0x0 */

struct _mips2c_stack_Game_GetShouldContinue {};     /* size 0x0 */

struct _mips2c_stack_Game_IncrementFrameCount {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Game_InitHeap {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Game_Nop80173534 {};           /* size 0x0 */

struct _mips2c_stack_Game_ResetSegments {};         /* size 0x0 */

struct _mips2c_stack_Game_ResizeHeap {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ TwoHeadArena *sp28;                  /* inferred */
    /* 0x2C */ GameAlloc *sp2C;                     /* inferred */
    /* 0x30 */ void *sp30;                          /* inferred */
    /* 0x34 */ u32 sp34;                            /* inferred */
    /* 0x38 */ u32 sp38;                            /* inferred */
    /* 0x3C */ u32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_Game_SetFramerateDivisor {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Game_StateFini {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Game_StateInit {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Game_Update {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ GraphicsContext *sp1C;               /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_Game_UpdateFramerateVariables {}; /* size 0x0 */

struct _mips2c_stack_Game_UpdateInput {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_801736DC {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Gfx *sp18;                           /* inferred */
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80173B48 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ u32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x10];
};                                                  /* size = 0x30 */

s8 D_801F7FF0;
struct_801F8010 D_801F8010;
struct_801F8020 D_801F8020;
s8 D_801F8048;
u64 D_801FBAF0;
OSViMode *D_801FBB88;
s32 gFramerateDivisor = 1;
f32 gFramerateDivisorF = 1.0f;
f32 gFramerateDivisorHalf = 0.5f;
f32 gFramerateDivisorThird = 0.33333334f;
GameInfo *gGameInfo;
VisMono sMonoColors;

void Game_UpdateFramerateVariables(s32 divisor) {
    f32 temp_f0;

    gFramerateDivisor = divisor;
    temp_f0 = (f32) divisor;
    gFramerateDivisorF = temp_f0;
    gFramerateDivisorHalf = temp_f0 * 0.5f;
    gFramerateDivisorThird = temp_f0 / 3.0f;
}

void Game_SetFramerateDivisor(GameState *gameState, s32 divisor) {
    gGameInfo->data[126] = (s16) divisor;
    gameState->framerateDivisor = (u8) divisor;
    Game_UpdateFramerateVariables(divisor);
}

void GameState_SetFBFilter(Gfx **gfx, u32 arg1) {
    Gfx *sp24;
    GameInfo *temp_v0;
    s16 temp_v1;

    temp_v0 = gGameInfo;
    sp24 = *gfx;
    temp_v1 = temp_v0->data[176];
    if (((s32) temp_v1 > 0) && ((s32) temp_v1 < 5)) {
        D_801F8010.type = (u32) temp_v1;
        D_801F8010.color.r = (u8) temp_v0->data[177];
        D_801F8010.color.g = (u8) temp_v0->data[178];
        D_801F8010.color.b = (u8) temp_v0->data[179];
        D_801F8010.color.a = (u8) temp_v0->data[180];
        func_80140D10((void *) &D_801F8010, &sp24, arg1);
    } else if ((temp_v1 == 5) || (temp_v1 == 6)) {
        D_801F8020.useRgba = temp_v1 == 6;
        D_801F8020.primColor.r = (u8) temp_v0->data[177];
        D_801F8020.primColor.g = (u8) temp_v0->data[178];
        D_801F8020.primColor.b = (u8) temp_v0->data[179];
        D_801F8020.primColor.a = (u8) temp_v0->data[180];
        D_801F8020.envColor.r = (u8) temp_v0->data[181];
        D_801F8020.envColor.g = (u8) temp_v0->data[182];
        D_801F8020.envColor.b = (u8) temp_v0->data[183];
        D_801F8020.envColor.a = (u8) temp_v0->data[180];
        func_80142100((void *) &D_801F8020, &sp24, arg1);
    } else if (temp_v1 == 7) {
        sMonoColors.unk_00 = 0;
        sMonoColors.primColor.r = (u8) temp_v0->data[177];
        sMonoColors.primColor.g = (u8) temp_v0->data[178];
        sMonoColors.primColor.b = (u8) temp_v0->data[179];
        sMonoColors.primColor.a = (u8) temp_v0->data[180];
        sMonoColors.envColor.r = (u8) temp_v0->data[181];
        sMonoColors.envColor.g = (u8) temp_v0->data[182];
        sMonoColors.envColor.b = (u8) temp_v0->data[183];
        sMonoColors.envColor.a = (u8) temp_v0->data[180];
        VisMono_Draw((void *) &sMonoColors, &sp24, arg1);
    }
    *gfx = sp24;
}

void Game_Nop80173534(GameState *gamestate) {

}

void GameState_Draw(GameState *gamestate, GraphicsContext *gfxCtx) {
    Gfx *sp3C;
    Gfx *sp38;
    GameInfo *temp_v0;
    Gfx *temp_a0;
    Gfx *temp_t2;
    Gfx *temp_v1;
    GameInfo *phi_v0;

    temp_a0 = gfxCtx->polyOpa.p;
    sp38 = temp_a0;
    sp3C = Graph_GfxPlusOne(temp_a0);
    temp_v1 = gfxCtx->overlay.p;
    gfxCtx->overlay.p = &temp_v1[1];
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) sp3C;
    temp_v0 = gGameInfo;
    phi_v0 = temp_v0;
    if ((temp_v0->data[176] != 0) && (temp_v0->data[184] == 0)) {
        GameState_SetFBFilter(&sp3C, (u32) gfxCtx->zbuffer);
        phi_v0 = gGameInfo;
    }
    if ((s32) phi_v0->data[96] < 0) {
        phi_v0->data[96] = 0;
    }
    temp_t2 = sp3C;
    sp3C = &temp_t2[1];
    temp_t2->words.w1 = 0;
    temp_t2->words.w0 = 0xDF000000;
    Graph_BranchDlist(sp38, sp3C);
    gfxCtx->polyOpa.p = sp3C;
    func_800E9F78(gfxCtx);
    if (gGameInfo->data[96] != 0) {
        SpeedMeter_DrawTimeEntries((void *) &D_801F7FF0, gfxCtx);
        SpeedMeter_DrawAllocEntries((void *) &D_801F7FF0, gfxCtx, gamestate);
    }
}

void Game_ResetSegments(GraphicsContext *gfxCtx) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;

    temp_v1 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = &temp_v1[1];
    temp_v1->words.w1 = 0;
    temp_v1->words.w0 = 0xDB060000;
    temp_v1_2 = gfxCtx->polyOpa.p;
    gfxCtx->polyOpa.p = &temp_v1_2[1];
    temp_v1_2->words.w0 = 0xDB06003C;
    temp_v1_2->words.w1 = (u32) gfxCtx->framebuffer;
    temp_v1_3 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = &temp_v1_3[1];
    temp_v1_3->words.w1 = 0;
    temp_v1_3->words.w0 = 0xDB060000;
    temp_v1_4 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = &temp_v1_4[1];
    temp_v1_4->words.w0 = 0xDB06003C;
    temp_v1_4->words.w1 = (u32) gfxCtx->framebuffer;
    temp_v1_5 = gfxCtx->overlay.p;
    gfxCtx->overlay.p = &temp_v1_5[1];
    temp_v1_5->words.w1 = 0;
    temp_v1_5->words.w0 = 0xDB060000;
    temp_v1_6 = gfxCtx->overlay.p;
    gfxCtx->overlay.p = &temp_v1_6[1];
    temp_v1_6->words.w0 = 0xDB06003C;
    temp_v1_6->words.w1 = (u32) gfxCtx->framebuffer;
}

void func_801736DC(GraphicsContext *gfxCtx) {
    Gfx *sp1C;
    Gfx *sp18;
    Gfx *temp_a0;
    Gfx *temp_a1;
    Gfx *temp_a3;
    Gfx *temp_v0;

    temp_a3 = gfxCtx->polyOpa.p;
    gfxCtx = gfxCtx;
    sp18 = temp_a3;
    temp_v0 = Graph_GfxPlusOne(temp_a3);
    temp_a0 = gfxCtx->overlay.p;
    temp_a1 = temp_v0 + 8;
    gfxCtx->overlay.p = &temp_a0[1];
    temp_a0->words.w1 = (u32) temp_v0;
    temp_a0->words.w0 = 0xDE000000;
    temp_v0->words.w0 = 0xDF000000;
    temp_v0->words.w1 = 0;
    sp1C = temp_a1;
    gfxCtx = gfxCtx;
    Graph_BranchDlist(temp_a3, temp_a1);
    gfxCtx->polyOpa.p = temp_a1;
}

void Game_UpdateInput(GameState *gamestate) {
    Padmgr_GetInput(gamestate->input, 1);
}

void Game_Update(GameState *gamestate) {
    GraphicsContext *sp1C;
    GraphicsContext *temp_a0;

    temp_a0 = gamestate->gfxCtx;
    sp1C = temp_a0;
    Game_ResetSegments(temp_a0);
    gamestate->main(gamestate);
    if (gGameInfo->data[190] != 2) {
        GameState_Draw(gamestate, sp1C);
        func_801736DC(sp1C);
    }
}

void Game_IncrementFrameCount(GameState *gamestate) {
    Game_Nop80173534(gamestate);
    gamestate->frames += 1;
}

void Game_InitHeap(GameState *gamestate, u32 size) {
    GameAlloc *temp_a0;
    void *temp_v0;

    temp_a0 = &gamestate->alloc;
    gamestate = gamestate;
    temp_v0 = Gamealloc_Alloc(temp_a0, size);
    if (temp_v0 != 0) {
        THA_Ct(&gamestate->heap, temp_v0, size);
        return;
    }
    THA_Ct(&gamestate->heap, NULL, 0U);
    __assert("../game.c", 0x40BU);
}

void Game_ResizeHeap(GameState *gamestate, u32 size) {
    u32 sp3C;
    u32 sp38;
    u32 sp34;
    void *sp30;
    GameAlloc *sp2C;
    TwoHeadArena *sp28;
    GameAlloc *temp_a0_2;
    TwoHeadArena *temp_a0;
    u32 temp_v0;
    void *temp_t6;
    void *temp_v0_2;
    u32 phi_s0;
    u32 phi_s0_2;

    temp_t6 = gamestate->heap.bufp;
    temp_a0 = &gamestate->heap;
    sp28 = temp_a0;
    gamestate = gamestate;
    sp30 = temp_t6;
    THA_Dt(temp_a0);
    temp_a0_2 = &gamestate->alloc;
    sp2C = temp_a0_2;
    Gamealloc_Free(temp_a0_2, sp30);
    SystemArena_AnalyzeArena(&sp3C, &sp38, &sp34);
    temp_v0 = sp3C - 0x10;
    phi_s0 = size;
    if (temp_v0 < size) {
        phi_s0 = 0U;
    }
    phi_s0_2 = phi_s0;
    if (phi_s0 == 0) {
        phi_s0_2 = temp_v0;
    }
    temp_v0_2 = Gamealloc_Alloc(temp_a0_2, phi_s0_2);
    if (temp_v0_2 != 0) {
        THA_Ct(sp28, temp_v0_2, phi_s0_2);
        return;
    }
    THA_Ct(sp28, NULL, 0U);
    __assert("../game.c", 0x432U);
}

void Game_StateInit(GameState *gamestate, void (*gameStateInit)(GameState *), GraphicsContext *gfxCtx) {
    gamestate->gfxCtx = gfxCtx;
    gamestate->frames = 0;
    gamestate->main = NULL;
    gamestate->destroy = NULL;
    gamestate->running = 1;
    gfxCtx->unk274 = D_801FBB88;
    gfxCtx->viConfigFeatures = gViConfigFeatures;
    gfxCtx->viConfigXScale = gViConfigXScale;
    gfxCtx->viConfigYScale = gViConfigYScale;
    gamestate->nextGameStateInit = NULL;
    gamestate->nextGameStateSize = 0;
    Gamealloc_Init(&gamestate->alloc);
    Game_InitHeap(gamestate, 0x100000U);
    Game_SetFramerateDivisor(gamestate, 3);
    gameStateInit(gamestate);
    func_80140CE0((void *) &D_801F8010);
    func_801420C0((void *) &D_801F8020);
    func_801418B0((void *) &sMonoColors);
    func_80140898((void *) &D_801F8048);
    func_801773A0((void *) &D_801F7FF0);
    func_8013ED9C();
    osSendMesg(&gamestate->gfxCtx->unk5C, NULL, 1);
}

void Game_StateFini(GameState *gamestate) {
    void (*temp_v0)(GameState *);

    func_80172BC0();
    func_8019E014();
    osRecvMesg(&gamestate->gfxCtx->unk5C, NULL, 1);
    temp_v0 = gamestate->destroy;
    if (temp_v0 != 0) {
        temp_v0(gamestate);
    }
    func_8013EDD0();
    func_801773C4((void *) &D_801F7FF0);
    func_80140D04((void *) &D_801F8010);
    func_801420F4((void *) &D_801F8020);
    func_80141900((void *) &sMonoColors);
    func_80140900((void *) &D_801F8048);
    THA_Dt(&gamestate->heap);
    Gamealloc_FreeAll(&gamestate->alloc);
}

void (*Game_GetNextStateInit(GameState *gamestate))(GameState *) {
    return gamestate->nextGameStateInit;
}

u32 Game_GetNextStateSize(GameState *gamestate) {
    return gamestate->nextGameStateSize;
}

u32 Game_GetShouldContinue(GameState *gamestate) {
    return (u32) gamestate->running;
}

s32 Game_GetHeapFreeSize(GameState *gamestate) {
    return THA_GetSize(&gamestate->heap);
}

s32 func_80173B48(GameState *gamestate) {
    u32 sp1C;
    s32 sp18;
    s64 temp_ret;
    s64 temp_ret_2;
    s64 temp_ret_3;
    u32 temp_v1;
    u64 temp_ret_4;
    u8 temp_a1;

    temp_a1 = gamestate->framerateDivisor;
    temp_ret_2 = __ll_mul((s64) ((s32) temp_a1 >> 0x1F), (s64) temp_a1, (s64) sIrqMgrRetraceTime.unk_0, (s64) sIrqMgrRetraceTime.unk_4);
    temp_ret_3 = __ll_mul(temp_ret_2, (s64) (u32) (u64) temp_ret_2, 0, 0x40);
    temp_ret_4 = __ull_div(temp_ret_3, (u64) (u32) (u64) temp_ret_3, 0U, 3U);
    temp_v1 = (u32) temp_ret_4;
    sp18 = temp_ret_4;
    sp1C = temp_v1;
    temp_ret = __ll_mul((s64) D_801FBAF0.unk_0, (s64) D_801FBAF0.unk_4, 0, 0x40);
    return sp1C - (u32) __ull_div(temp_ret, (u64) (u32) (u64) temp_ret, 0U, 3U);
}
