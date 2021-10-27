CRASHED

struct _mips2c_stack_func_801AA610 {};              /* size 0x0 */

struct _mips2c_stack_func_801AA68C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

? func_800FBDEC(GlobalContext *, u8, s32);          /* extern */
? func_800FC158(GlobalContext *);                   /* extern */
? func_8013EE24();                                  /* extern */
? func_80169F78(GlobalContext *);                   /* extern */
void func_801AA68C(GlobalContext *arg0);            /* static */
static s16 D_801E1110 = 0;                          /* const */
u8 gItemSlots[80] = {
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    0xA,
    0xB,
    0xC,
    0xD,
    0xE,
    0xF,
    0x10,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    5,
    5,
    5,
    5,
    5,
    0xB,
    0xB,
    0x11,
    0x11,
    0x11,
    0x1D,
    0x23,
    0x29,
    0x2F,
    0x28,
    0x26,
    0x19,
    0x20,
    0x1E,
    0x2C,
    0x24,
    0x25,
    0x18,
    0x27,
    0x1C,
    0x2B,
    0x21,
    0x2A,
    0x2D,
    0x1B,
    0x1F,
    0x1A,
    0x22,
    0x2E,
    1,
    1,
    1,
    0,
    0,
    0,
};
SaveContext gSaveContext;

void func_801AA610(GlobalContext *globalCtx) {
    globalCtx->gameOverCtx.state = 0;
}

/*
Failed to decompile function func_801AA624:

Label L801AA658 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void func_801AA68C(GlobalContext *arg0) {
    GameOverContext *temp_v0_2;
    GameOverContext *temp_v0_3;
    GameOverContext *temp_v0_4;
    GameOverContext *temp_v0_5;
    GameOverContext *temp_v0_6;
    s16 temp_v0;
    u16 temp_t7;
    u8 temp_a0;
    u8 temp_a1;
    s16 phi_v0;
    u8 phi_v0_2;
    u8 phi_v0_3;
    u8 phi_v0_4;
    u8 phi_v0_5;
    u8 phi_v0_6;
    u8 phi_v0_7;
    u8 phi_v0_8;

    temp_t7 = arg0->gameOverCtx.state;
    switch (temp_t7) {
    case 1:
        func_801477B4(arg0);
        phi_v0 = 0;
        phi_v0_2 = (u8) 0;
        phi_v0_3 = (u8) 0;
        phi_v0_4 = (u8) 0;
        phi_v0_5 = (u8) 0;
        phi_v0_6 = (u8) 0;
        phi_v0_7 = (u8) 0;
        phi_v0_8 = (u8) 0;
        do {
            temp_v0 = phi_v0 + 1;
            gSaveContext.unk_3DD0[phi_v0] = 0;
            phi_v0 = temp_v0;
        } while ((s32) temp_v0 < 7);
        temp_a0 = gSaveContext.playerForm;
        gSaveContext.eventInf[1] &= 0xFFFE;
        if (temp_a0 == 4) {

        } else {
            phi_v0_2 = temp_a0;
        }
        if (phi_v0_2 == 0) {
            phi_v0_3 = temp_a0;
            if (temp_a0 == 4) {

            }
            if ((&gSaveContext + (phi_v0_3 * 4))->unk_4C != 0x4D) {
                phi_v0_4 = temp_a0;
                if (temp_a0 == 4) {

                }
                if ((&gSaveContext + (phi_v0_4 * 4))->unk_4C != 0x4E) {
                    phi_v0_5 = temp_a0;
                    if (temp_a0 == 4) {

                    }
                    if ((&gSaveContext + (phi_v0_5 * 4))->unk_4C != 0x4F) {
                        phi_v0_6 = temp_a0;
                        if (temp_a0 == 4) {

                        }
                        if ((&gSaveContext + (phi_v0_6 * 4))->unk_4C != 0x50) {
                            temp_a1 = gSaveContext.buttonStatus[0];
                            if (temp_a1 != 0) {
                                phi_v0_7 = temp_a0;
                                if (temp_a0 == 4) {

                                }
                                (&gSaveContext + (phi_v0_7 * 4))->unk_4C = temp_a1;
                            } else {
                                if (temp_a0 == 4) {

                                } else {
                                    phi_v0_8 = temp_a0;
                                }
                                (&gSaveContext + (phi_v0_8 * 4))->unk_4C = 0xFF;
                            }
                        }
                    }
                }
            }
        }
        gSaveContext.unk_3DC0 = 0x7D0;
        gSaveContext.naviTimer = 0;
        gSaveContext.seqIndex = 0xFF;
        gSaveContext.nightSeqIndex = 0xFF;
        gSaveContext.eventInf[0] = 0;
        gSaveContext.eventInf[1] = 0;
        gSaveContext.eventInf[2] = 0;
        gSaveContext.eventInf[3] = 0;
        gSaveContext.buttonStatus[0] = 0;
        gSaveContext.buttonStatus[1] = 0;
        gSaveContext.buttonStatus[2] = 0;
        gSaveContext.buttonStatus[3] = 0;
        gSaveContext.buttonStatus[4] = 0;
        gSaveContext.unk_3F1E = 0;
        gSaveContext.unk_3F20 = 0;
        gSaveContext.unk_3F22 = 0;
        gSaveContext.unk_3F24 = 0;
        func_800FBDEC(arg0, 0xFFU, 4);
        D_801E1110 = 0x14;
        func_8013ECE0(0.0f, 0x7EU, 0x7CU, 0x3FU);
        arg0->gameOverCtx.state = 2;
        return;
    case 3:
        if (func_801A8A50(1) != 0x20) {
            func_80169F78(arg0);
            if (gSaveContext.respawnFlag != -7) {
                gSaveContext.respawnFlag = -6;
            }
            gSaveContext.nextTransition = 2;
            gSaveContext.health = 0x30;
            temp_v0_2 = &arg0->gameOverCtx;
            temp_v0_2->state += 1;
            if (gSaveContext.inventory.items[gItemSlots[50]] == 0x32) {
                gSaveContext.playerForm = 4;
                gSaveContext.equippedMask = 0;
            }
            func_8013EE24();
            return;
        }
    default:
        return;
    case 20:
        temp_v0_3 = &arg0->gameOverCtx;
        temp_v0_3->state += 1;
        D_801E1110 = 0;
        func_800FBDEC(arg0);
        ShrinkWindow_SetLetterboxTarget(0x20);
        return;
    case 21:
        D_801E1110 = 0x32;
        temp_v0_4 = &arg0->gameOverCtx;
        temp_v0_4->state += 1;
        func_8013ECE0(0.0f, 0x7EU, 0x7CU, 0x3FU);
        return;
    case 22:
        D_801E1110 += -1;
        if (D_801E1110 == 0) {
            D_801E1110 = 0x40;
            temp_v0_5 = &arg0->gameOverCtx;
            temp_v0_5->state += 1;
            return;
        }
        /* Duplicate return node #43. Try simplifying control flow for better match */
        return;
    case 23:
        D_801E1110 += -1;
        if (D_801E1110 == 0) {
            D_801E1110 = 0x32;
            temp_v0_6 = &arg0->gameOverCtx;
            temp_v0_6->state += 1;
            return;
        }
        /* Duplicate return node #43. Try simplifying control flow for better match */
        return;
    case 24:
        func_800FC158(arg0);
        D_801E1110 += -1;
        if (D_801E1110 == 0) {
            arg0->gameOverCtx.state = 0;
        }
        /* Duplicate return node #43. Try simplifying control flow for better match */
        return;
    }
}
