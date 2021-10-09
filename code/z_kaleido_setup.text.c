struct _mips2c_stack_func_800F4A10 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800F4C0C {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ PauseContext *sp1C;                  /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ Actor *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800F4E20 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ PauseContext *sp18;                  /* inferred */
    /* 0x1C */ char pad_1C[0xC];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800F4F28 {};              /* size 0x0 */

s32 ShrinkWindow_GetLetterboxTarget();              /* extern */
? func_8013EE24();                                  /* extern */
? func_801A3A7C(?);                                 /* extern */
? func_801A3AEC(?);                                 /* extern */
static ? D_801BDB00;                                /* unable to generate initializer */
static ? D_801BDB08;                                /* unable to generate initializer */
static ? D_801BDB18;                                /* unable to generate initializer */
GameInfo *gGameInfo;
SaveContext gSaveContext;

void func_800F4A10(GlobalContext *globalCtx) {
    PauseContext *temp_v1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_a2;
    u16 temp_a0;
    s16 phi_v0;
    s16 phi_v0_2;
    s32 phi_a0;
    s16 phi_v0_3;
    s32 phi_a0_2;

    func_8013EE24();
    temp_v1 = &globalCtx->pauseCtx;
    temp_a0 = temp_v1->pageIndex;
    temp_a2 = temp_a0 * 4;
    temp_v1->unk_206 = 0;
    temp_v1->unk_200 = 1;
    temp_v1->eye.x = *(&D_801BDB08 + temp_a2);
    temp_v1->eye.z = *(&D_801BDB18 + temp_a2);
    temp_v1->unk_27E = -0x28;
    temp_v1->pageIndex = (u16) *(&D_801BDB00 + (temp_a0 * 2));
    phi_v0 = 0;
    phi_v0_2 = 0;
    do {
        temp_v0 = phi_v0 + 1;
        temp_v1->worldMapPoints[phi_v0] = 0;
        phi_v0 = temp_v0;
    } while ((s32) temp_v0 < 0x14);
    phi_v0_3 = 9;
    if (temp_v1->state == 1) {
        do {
            if ((((u32) gSaveContext.mapsVisited >> phi_v0_2) & 1) != 0) {
                temp_v1->worldMapPoints[phi_v0_2] = (u8) 1U;
            }
            temp_v0_2 = phi_v0_2 + 1;
            phi_v0_2 = temp_v0_2;
        } while ((s32) temp_v0_2 < 0xB);
    } else {
        phi_a0 = (s32) gSaveContext.owlActivationFlags;
        do {
            phi_a0_2 = phi_a0;
            if (((phi_a0 >> phi_v0_3) & 1) != 0) {
                temp_v1->worldMapPoints[phi_v0_3] = (u8) 1U;
                temp_v1->unk_238[4] = phi_v0_3;
                phi_a0_2 = (s32) gSaveContext.owlActivationFlags;
            }
            temp_v0_3 = phi_v0_3 - 1;
            phi_a0 = phi_a0_2;
            phi_v0_3 = temp_v0_3;
        } while ((s32) temp_v0_3 >= 0);
        if (((phi_a0_2 >> 4) & 1) != 0) {
            temp_v1->unk_238[4] = 4;
        }
    }
    gGameInfo->data[587] = -0xC8;
    gGameInfo->data[588] = -0x3840;
    gGameInfo->data[589] = 0x2710;
    gGameInfo->data[590] = 0x2710;
    gGameInfo->data[591] = 0x2710;
    gGameInfo->data[592] = -0xBE;
    gGameInfo->data[593] = -0x6D6;
    gGameInfo->data[594] = -0xB90;
    gGameInfo->data[595] = 0x6E0;
    gGameInfo->data[596] = 0;
    gGameInfo->data[597] = -0x622;
    gGameInfo->data[598] = -0xC44;
    gGameInfo->data[599] = 0x622;
    gGameInfo->data[600] = -0x622;
    gGameInfo->data[601] = -0x5A;
    gGameInfo->data[602] = -0x3840;
}

void func_800F4C0C(GlobalContext *globalCtx) {
    Actor *sp24;
    PauseContext *sp1C;
    void *sp18;
    Actor *temp_t0;
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    PauseContext *temp_v1;
    s16 temp_v0_2;
    u8 *temp_v0;
    u8 temp_v0_3;

    temp_t0 = globalCtx->actorCtx.actorList[2].first;
    if (~(globalCtx->state.input[0].cur.button | ~0x10) == 0) {

    }
    temp_v1 = &globalCtx->pauseCtx;
    if ((temp_v1->state == 0) && (temp_v1->debugState == 0) && (globalCtx->gameOverCtx.state == 0) && (globalCtx->sceneLoadFlag == 0) && (globalCtx->unk_18B4A == 0) && (gSaveContext.cutscene < 0xFFF0)) {
        temp_a0 = globalCtx;
        if (((s32) gSaveContext.nextCutsceneIndex < 0xFFF0) && ((sp1C = temp_v1, sp18 = globalCtx + 0x18000, globalCtx = globalCtx, sp24 = temp_t0, (func_801690CC(temp_a0) == 0)) || ((temp_v0 = &globalCtx->msgCtx.font.fontBuf[34328], (temp_v0->unk_1F22 != 0)) && (temp_v0->unk_1F04 == 0xFF))) && ((s32) globalCtx->unk_1887C < 2)) {
            temp_v0_2 = gSaveContext.unk_3F28;
            if ((temp_v0_2 != 8) && (temp_v0_2 != 9) && ((gSaveContext.eventInf[1] & 0x80) == 0) && ((temp_t0->unk_A6C & 0x20) == 0)) {
                temp_v0_3 = globalCtx->actorCtx.unk5;
                if (((temp_v0_3 & 2) == 0) && ((temp_v0_3 & 4) == 0)) {
                    if ((globalCtx->actorCtx.unk268 == 0) && (~(globalCtx->state.input[0].press.button | ~0x1000) == 0)) {
                        temp_a0_2 = globalCtx;
                        gSaveContext.unk_3F26 = gSaveContext.unk_3F22;
                        temp_v1->unk_2B9 = 0;
                        temp_v1->state = 1;
                        globalCtx = globalCtx;
                        sp1C = temp_v1;
                        func_800F4A10(temp_a0_2);
                        temp_v1->mode = (temp_v1->pageIndex * 2) + 1;
                        func_801A3A7C(1);
                    }
                    if (globalCtx->pauseCtx.state == 1) {
                        Game_SetFramerateDivisor((GameState *) globalCtx, 2);
                        if (ShrinkWindow_GetLetterboxTarget() != 0) {
                            ShrinkWindow_SetLetterboxTarget(0);
                        }
                        func_801A3AEC(1);
                    }
                }
            }
        }
    }
}

void func_800F4E20(GlobalContext *globalCtx) {
    PauseContext *sp18;
    PauseContext *temp_a0;

    temp_a0 = &globalCtx->pauseCtx;
    sp18 = temp_a0;
    bzero((void *) temp_a0, 0x2D0);
    temp_a0->pageIndex = 0;
    temp_a0->unk_21C = 160.0f;
    temp_a0->unk_218 = 160.0f;
    temp_a0->unk_214 = 160.0f;
    temp_a0->unk_210 = 160.0f;
    temp_a0->eye.x = -64.0f;
    temp_a0->unk_20C = 936.0f;
    temp_a0->unk_220 = -314.0f;
    temp_a0->unk_258 = 0xB;
    temp_a0->unk_25A = 0;
    temp_a0->unk_238[1] = gGameInfo->data[1438] + 3;
    temp_a0->unk_25E[0] = 0x3E7;
    temp_a0->unk_25E[2] = 0x3E7;
    temp_a0->unk_25E[3] = 0x3E7;
    temp_a0->unk_25E[1] = gGameInfo->data[1438] + 3;
    temp_a0->unk_268[0] = 0;
    temp_a0->unk_284 = 2;
    temp_a0->unk_268[1] = gGameInfo->data[1438] + 3;
    temp_a0->unk_2A0 = -1;
    temp_a0->unk_2BA = 0x140;
    temp_a0->unk_2BC = 0x28;
    temp_a0->unk_29E = 0x64;
    View_Init((View *) temp_a0, globalCtx->state.gfxCtx);
}

void func_800F4F28(GlobalContext *globalCtx) {

}
