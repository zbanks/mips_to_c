struct _mips2c_stack_FlagSet_Draw {
    /* 0x00 */ char pad_0[0x54];
    /* 0x54 */ ? sp54;                              /* inferred */
    /* 0x54 */ char pad_54[0x38];
    /* 0x8C */ Gfx *sp8C;                           /* inferred */
    /* 0x90 */ char pad_90[0x4];
    /* 0x94 */ GraphicsContext *sp94;               /* inferred */
};                                                  /* size = 0x98 */

struct _mips2c_stack_FlagSet_Update {};             /* size 0x0 */

static s32 D_801ED890;
static s32 sCurrentBit = 0;
static s32 sEntryIndex = 0;
static ? sFlagEntries;                              /* unable to generate initializer */
static s32 sTimer = 0;
SaveContext gSaveContext;

void FlagSet_Update(GameState *gamestate) {
    Input *temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_t5;
    s32 temp_t5_2;
    s32 temp_t5_3;
    s32 temp_t6;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 temp_t9_3;
    s32 temp_v1;
    u16 temp_a2;
    u16 temp_a2_3;
    u8 *temp_a2_2;
    u16 phi_a2;
    u16 phi_a2_2;
    s16 phi_v0;
    s16 phi_v0_2;

    temp_v0 = gamestate->input;
    if (~(gamestate->input[0].press.button | ~0x200) == 0) {
        sCurrentBit += 1;
        sTimer = 0xA;
    }
    if (~(temp_v0->press.button | ~0x100) == 0) {
        sTimer = 0xA;
        sCurrentBit += -1;
    }
    if (sTimer == 0) {
        if (~(temp_v0->cur.button | ~0x200) == 0) {
            sTimer = 2;
            sCurrentBit += 1;
        }
        if (~(temp_v0->cur.button | ~0x100) == 0) {
            sTimer = 2;
            sCurrentBit += -1;
        }
    }
    sCurrentBit &= 7;
    if (~(temp_v0->press.button | ~0x800) == 0) {
        sTimer = 0xA;
        temp_t9 = sEntryIndex - 1;
        sEntryIndex = temp_t9;
        if (temp_t9 < 0) {
            sEntryIndex = 0;
        }
    }
    phi_a2 = temp_v0->press.button;
    if (~(temp_v0->press.button | ~0x400) == 0) {
        temp_t8 = sEntryIndex + 1;
        temp_a3 = *(&sFlagEntries + (temp_t8 * 8));
        sEntryIndex = temp_t8;
        sTimer = 0xA;
        if (temp_a3 == 0) {
            sEntryIndex = temp_t8 - 1;
        }
        phi_a2 = temp_v0->press.button;
    }
    phi_a2_2 = phi_a2;
    if (~(phi_a2 | ~8) == 0) {
        sTimer = 0xA;
        temp_t5 = sEntryIndex - 0xA;
        sEntryIndex = temp_t5;
        if (temp_t5 < 0) {
            sEntryIndex = 0;
        }
        phi_a2_2 = temp_v0->press.button;
    }
    if (~(phi_a2_2 | ~4) == 0) {
        sTimer = 0xA;
        temp_t9_2 = sEntryIndex + 0xA;
        sEntryIndex = temp_t9_2;
        if (((temp_t9_2 < 0x65) ^ 1) != 0) {
            sEntryIndex = 0x64;
        }
    }
    if (sTimer == 0) {
        temp_a2 = temp_v0->cur.button;
        if (~(temp_a2 | ~0x800) == 0) {
            sTimer = 2;
            temp_t5_2 = sEntryIndex - 1;
            sEntryIndex = temp_t5_2;
            if (temp_t5_2 < 0) {
                sEntryIndex = 0;
            }
        } else if (~(temp_a2 | ~0x400) == 0) {
            temp_t9_3 = sEntryIndex + 1;
            temp_a3_2 = *(&sFlagEntries + (temp_t9_3 * 8));
            sEntryIndex = temp_t9_3;
            sTimer = 2;
            if (temp_a3_2 == 0) {
                sEntryIndex = temp_t9_3 - 1;
            }
        } else if (~(temp_a2 | ~8) == 0) {
            sTimer = 2;
            temp_t6 = sEntryIndex - 0xA;
            sEntryIndex = temp_t6;
            if (temp_t6 < 0) {
                sEntryIndex = 0;
            }
        } else if (~(temp_a2 | ~4) == 0) {
            sTimer = 2;
            temp_t5_3 = sEntryIndex + 0xA;
            sEntryIndex = temp_t5_3;
            if (((temp_t5_3 < 0x65) ^ 1) != 0) {
                sEntryIndex = 0x64;
            }
        }
    }
    if (~(temp_v0->press.button | 0xFFFF7FFF) == 0) {
        temp_a2_2 = *(&sFlagEntries + (sEntryIndex * 8));
        *temp_a2_2 ^= 1 << sCurrentBit;
    }
    temp_v1 = sTimer;
    if (temp_v1 != 0) {
        sTimer = temp_v1 - 1;
    }
    temp_a2_3 = temp_v0->press.button;
    if (~(temp_v0->cur.button | ~0x1000) == 0) {
        phi_v0 = 0;
        phi_v0_2 = 0;
        if (~(temp_a2_3 | ~0x4000) == 0) {
            do {
                temp_v0_2 = phi_v0 + 1;
                gSaveContext.weekEventReg[phi_v0] = 0;
                phi_v0 = temp_v0_2;
            } while ((s32) temp_v0_2 < 0x64);
            do {
                temp_v0_3 = phi_v0_2 + 1;
                gSaveContext.eventInf[phi_v0_2] = 0;
                phi_v0_2 = temp_v0_3;
            } while ((s32) temp_v0_3 < 8);
            return;
        }
        /* Duplicate return node #50. Try simplifying control flow for better match */
        return;
    }
    if (~(temp_a2_3 | ~0x4000) == 0) {
        gamestate->unk_16F1E = 0;
    }
}

void FlagSet_Draw(GameState *gameState) {
    GraphicsContext *sp94;
    Gfx *sp8C;
    ? sp54;
    Gfx *temp_a0;
    Gfx *temp_a0_2;
    Gfx *temp_s0;
    Gfx *temp_s0_2;
    Gfx *temp_s0_3;
    Gfx *temp_v0_2;
    GraphicsContext *temp_v0;
    s32 temp_t6;
    s32 phi_v1;

    temp_v0 = gameState->gfxCtx;
    temp_a0 = temp_v0->polyOpa.p;
    sp94 = temp_v0;
    sp8C = temp_a0;
    temp_v0_2 = Graph_GfxPlusOne(temp_a0);
    temp_s0 = temp_v0_2;
    temp_a0_2 = sp94->overlay.p;
    sp94->overlay.p = &temp_a0_2[1];
    temp_a0_2->words.w1 = (u32) temp_v0_2;
    temp_a0_2->words.w0 = 0xDE000000;
    GfxPrint_Init((GfxPrint *) &sp54);
    GfxPrint_Open((GfxPrint *) &sp54, temp_s0);
    GfxPrint_SetColor((GfxPrint *) &sp54, 0xFAU, 0x32U, 0x32U, 0xFFU);
    GfxPrint_SetPos((GfxPrint *) &sp54, 8, 0xD);
    GfxPrint_Printf((GfxPrint *) &sp54, (&sFlagEntries + (sEntryIndex * 8))->unk_4);
    GfxPrint_SetPos((GfxPrint *) &sp54, 0xC, 0xF);
    D_801ED890 = 7;
    phi_v1 = 7;
    if (7 >= 0) {
        do {
            if (sCurrentBit == phi_v1) {
                GfxPrint_SetColor((GfxPrint *) &sp54, 0xC8U, 0xC8U, 0xC8U, 0xFFU);
            } else {
                GfxPrint_SetColor((GfxPrint *) &sp54, 0x64U, 0x64U, 0x64U, 0xFFU);
            }
            if ((**(&sFlagEntries + (sEntryIndex * 8)) & (1 << D_801ED890)) != 0) {
                GfxPrint_Printf((GfxPrint *) &sp54, "1");
            } else {
                GfxPrint_Printf((GfxPrint *) &sp54, "0");
            }
            if ((D_801ED890 & 3) == 0) {
                GfxPrint_Printf((GfxPrint *) &sp54, " ");
            }
            temp_t6 = D_801ED890 - 1;
            D_801ED890 = temp_t6;
            phi_v1 = temp_t6;
        } while (temp_t6 >= 0);
    }
    temp_s0_2 = GfxPrint_Close((GfxPrint *) &sp54);
    GfxPrint_Destroy((GfxPrint *) &sp54);
    temp_s0_2->words.w0 = 0xDF000000;
    temp_s0_2->words.w1 = 0;
    temp_s0_3 = &temp_s0_2[1];
    Graph_BranchDlist(sp8C, temp_s0_3);
    sp94->polyOpa.p = temp_s0_3;
}
