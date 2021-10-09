struct _mips2c_stack_Select_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Select_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Select_Main {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80800910 {};              /* size 0x0 */

struct _mips2c_stack_func_80800930 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80800A44 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ u16 *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x18];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808013B8 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80801594 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80801620 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808016E8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8080194C {
    /* 0x00 */ char pad_0[0x10];
    /* 0x10 */ ? sp10;                              /* inferred */
    /* 0x10 */ char pad_10[0x24];
    /* 0x34 */ GraphicsContext *sp34;               /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808019FC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0x30];
    /* 0x54 */ GraphicsContext *sp54;               /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80801A64 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ View *sp28;                          /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

? ShrinkWindow_Init();                              /* extern */
? func_80144968();                                  /* extern */
void func_80800910(void *arg0);                     /* static */
void func_80800930(void *arg0, u32 arg1, s32 arg2); /* static */
void func_80800A44(GameState *arg0);                /* static */
void func_808013B8(GraphicsContext **arg0, GfxPrint *arg1); /* static */
void func_80801594(GraphicsContext **arg0, GfxPrint *arg1); /* static */
void func_80801620(GraphicsContext **arg0, GfxPrint *arg1, s32 arg2); /* static */
void func_808016E8(GraphicsContext **arg0, GfxPrint *arg1, u16 arg2); /* static */
void func_8080194C(GraphicsContext **arg0);         /* static */
void func_808019FC(GraphicsContext **arg0);         /* static */
void func_80801A64(GraphicsContext **arg0);         /* static */
extern s8 D_801BDBB0;
static ? D_80801C80;                                /* unable to generate initializer */
static ? D_80802334;                                /* unable to generate initializer */
static ? D_80802364;                                /* unable to generate initializer */

void func_80800910(void *arg0) {
    arg0->unk_9B = 0;
    arg0->unk_10 = 0x248;
    arg0->unk_C = Title_Init;
}

void func_80800930(void *arg0, u32 arg1, s32 arg2) {
    if (gSaveContext.fileNum == 0xFF) {
        func_80144968();
    }
    gSaveContext.buttonStatus[0] = 0;
    gSaveContext.buttonStatus[1] = 0;
    gSaveContext.buttonStatus[2] = 0;
    gSaveContext.buttonStatus[3] = 0;
    gSaveContext.buttonStatus[4] = 0;
    gSaveContext.unk_3F1E = 0;
    gSaveContext.unk_3F20 = 0;
    gSaveContext.unk_3F22 = 0;
    gSaveContext.unk_3F24 = 0;
    func_801A89A8(0x100000FF);
    gSaveContext.entranceIndex = arg1;
    if (arg2 != 0) {
        gSaveContext.entranceIndex = Entrance_CreateIndex((s32) arg1 >> 9, arg2, arg1 & 0xF);
    }
    if (gSaveContext.entranceIndex == 0xC000) {
        gSaveContext.day = 0;
        gSaveContext.time = 0x3FFF;
    }
    gSaveContext.respawn[0].entranceIndex = 0xFFFF;
    gSaveContext.seqIndex = 0xFF;
    gSaveContext.nightSeqIndex = 0xFF;
    gSaveContext.showTitleCard = 1;
    gSaveContext.respawnFlag = 0;
    gSaveContext.respawn[4].entranceIndex = (u16) 0xFFU;
    gSaveContext.respawn[5].entranceIndex = (u16) 0xFFU;
    gSaveContext.respawn[6].entranceIndex = (u16) 0xFFU;
    gSaveContext.respawn[7].entranceIndex = (u16) 0xFFU;
    D_801BDBB0 = 0;
    arg0->unk_9B = 0;
    arg0->unk_C = Play_Init;
    arg0->unk_10 = 0x19258;
}

void func_80800A44(GameState *arg0) {
    s32 sp2C;
    u16 *sp24;
    s32 sp20;
    ? (*temp_v1_2)(GameState *, s32, s32, SaveContext *);
    GameInfo *temp_t6;
    s16 temp_v1;
    s16 temp_v1_6;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_at;
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_hi_3;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_t5;
    s32 temp_t5_2;
    s32 temp_t7;
    s32 temp_t7_2;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 temp_t9;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_13;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s8 temp_v0_6;
    u16 *temp_t0;
    u16 temp_v0;
    u16 temp_v0_7;
    void *temp_v0_2;
    void *temp_v0_3;
    s16 phi_v1;
    u8 phi_v1_2;
    s32 phi_a0;
    u16 phi_v0;
    u16 phi_v0_2;
    s32 phi_a1;
    u16 phi_v0_3;
    s32 phi_v1_3;
    s32 phi_a0_2;
    s32 phi_v1_4;
    s32 phi_a1_2;
    s32 phi_v0_4;

    if (arg0->unk_25C == 0) {
        temp_t0 = arg0 + 0x14;
        temp_v0 = temp_t0->unk_C;
        if ((~(temp_v0 | 0xFFFF7FFF) == 0) || (~(temp_v0 | ~0x1000) == 0)) {
            phi_v1 = 0;
            do {
                gSaveContext.unk_3DD0[phi_v1] = 0;
                temp_v0_2 = &gSaveContext + (phi_v1 * 8);
                temp_v1 = phi_v1 + 1;
                temp_v0_2->unk_3DE4 = 0;
                gSaveContext.unk_3DE0[phi_v1] = 0;
                temp_v0_2->unk_3E1C = 0;
                gSaveContext.unk_3E18[phi_v1] = 0;
                temp_v0_2->unk_3E54 = 0;
                gSaveContext.unk_3E50[phi_v1] = 0;
                gSaveContext.unk_3E88[phi_v1] = 0;
                temp_v0_2->unk_3E8C = 0;
                temp_v0_2->unk_3EC4 = 0;
                gSaveContext.unk_3EC0[phi_v1] = 0;
                phi_v1 = temp_v1;
            } while ((s32) temp_v1 < 7);
            gSaveContext.minigameState = 0;
            temp_v0_3 = arg0->unk_214 + (arg0->unk_218 * 0xC);
            temp_v1_2 = temp_v0_3->unk_4;
            if (temp_v1_2 != 0) {
                sp24 = temp_t0;
                temp_v1_2(arg0, temp_v0_3->unk_8, arg0->unk_248, &gSaveContext);
            }
        }
        if (~((arg0 + 0x14)->unk_C | ~0x4000) == 0) {
            temp_v1_3 = gSaveContext.playerForm - 1;
            phi_v1_2 = (u8) temp_v1_3;
            if (temp_v1_3 < 0) {
                phi_v1_2 = 4U;
            }
            gSaveContext.playerForm = phi_v1_2;
        }
        if (~((arg0 + 0x14)->unk_C | ~0x2000) == 0) {
            temp_v0_4 = gSaveContext.cutscene;
            if (temp_v0_4 == 0x8000) {
                gSaveContext.cutscene = 0;
            } else if (temp_v0_4 == 0) {
                gSaveContext.cutscene = 0x8800;
            } else if (temp_v0_4 == 0x8800) {
                gSaveContext.cutscene = 0xFFF0;
            } else {
                if (temp_v0_4 == 0xFFF0) {
                    phi_a0 = 0xFFF1;
                    goto block_68;
                }
                if (temp_v0_4 == 0xFFF1) {
                    gSaveContext.cutscene = 0xFFF2;
                } else {
                    if (temp_v0_4 == 0xFFF2) {
                        phi_a0 = 0xFFF3;
                        goto block_68;
                    }
                    if (temp_v0_4 == 0xFFF3) {
                        gSaveContext.cutscene = 0xFFF4;
                    } else {
                        if (temp_v0_4 == 0xFFF4) {
                            phi_a0 = 0xFFF5;
                            goto block_68;
                        }
                        if (temp_v0_4 == 0xFFF5) {
                            gSaveContext.cutscene = 0xFFF6;
                        } else {
                            if (temp_v0_4 == 0xFFF6) {
                                phi_a0 = 0xFFF7;
                                goto block_68;
                            }
                            if (temp_v0_4 == 0xFFF7) {
                                gSaveContext.cutscene = 0xFFF8;
                            } else {
                                if (temp_v0_4 == 0xFFF8) {
                                    phi_a0 = 0xFFF9;
                                    goto block_68;
                                }
                                if (temp_v0_4 == 0xFFF9) {
                                    gSaveContext.cutscene = 0xFFFA;
                                } else if (temp_v0_4 == 0xFFFA) {
                                    gSaveContext.cutscene = 0x8000;
                                }
                            }
                        }
                    }
                }
            }
        } else if (~((arg0 + 0x14)->unk_C | ~0x10) == 0) {
            temp_v0_5 = gSaveContext.cutscene;
            if (temp_v0_5 == 0x8000) {
                gSaveContext.cutscene = 0xFFFA;
            } else if (temp_v0_5 == 0) {
                gSaveContext.cutscene = 0x8000;
            } else if (temp_v0_5 == 0x8800) {
                gSaveContext.cutscene = 0;
            } else if (temp_v0_5 == 0xFFF0) {
                gSaveContext.cutscene = 0x8800;
            } else if (temp_v0_5 == 0xFFF1) {
                gSaveContext.cutscene = 0xFFF0;
            } else {
                if (temp_v0_5 == 0xFFF2) {
                    phi_a0 = 0xFFF1;
                    goto block_68;
                }
                if (temp_v0_5 == 0xFFF3) {
                    gSaveContext.cutscene = 0xFFF2;
                } else {
                    if (temp_v0_5 == 0xFFF4) {
                        phi_a0 = 0xFFF3;
                        goto block_68;
                    }
                    if (temp_v0_5 == 0xFFF5) {
                        gSaveContext.cutscene = 0xFFF4;
                    } else {
                        if (temp_v0_5 == 0xFFF6) {
                            phi_a0 = 0xFFF5;
                            goto block_68;
                        }
                        if (temp_v0_5 == 0xFFF7) {
                            gSaveContext.cutscene = 0xFFF6;
                        } else {
                            if (temp_v0_5 == 0xFFF8) {
                                phi_a0 = 0xFFF7;
                                goto block_68;
                            }
                            if (temp_v0_5 == 0xFFF9) {
                                gSaveContext.cutscene = 0xFFF8;
                            } else {
                                phi_a0 = 0xFFF9;
                                if (temp_v0_5 == 0xFFFA) {
block_68:
                                    gSaveContext.cutscene = phi_a0;
                                }
                            }
                        }
                    }
                }
            }
        }
        gSaveContext.isNight = 0;
        phi_a1 = 1;
        if (gSaveContext.cutscene == 0x8800) {
            gSaveContext.isNight = 1;
        }
        if (~((arg0 + 0x14)->unk_C | ~8) == 0) {
            arg0->unk_248 = (s32) (arg0->unk_248 - 1);
        }
        phi_v0 = (arg0 + 0x14)->unk_C;
        if (~((arg0 + 0x14)->unk_C | ~4) == 0) {
            arg0->unk_248 = (s32) (arg0->unk_248 + 1);
            phi_v0 = (arg0 + 0x14)->unk_C;
        }
        phi_v0_2 = phi_v0;
        if (~(phi_v0 | ~2) == 0) {
            temp_v1_4 = gSaveContext.day;
            if (temp_v1_4 >= 2) {
                gSaveContext.day = temp_v1_4 - 1;
                phi_v0_2 = (arg0 + 0x14)->unk_C;
            }
        }
        if (~(phi_v0_2 | ~1) == 0) {
            temp_v1_5 = gSaveContext.day;
            if (temp_v1_5 < 4) {
                gSaveContext.day = temp_v1_5 + 1;
            }
        }
        temp_v0_6 = (arg0 + 0x14)->unk_15;
        temp_t6 = gGameInfo;
        temp_v1_6 = temp_t6->data[126];
        if (temp_v0_6 != 0) {
            arg0->unk_260 = (s32) ((s32) (temp_v1_6 * temp_v0_6) / 7);
        } else {
            if (~((arg0 + 0x14)->unk_C | ~0x800) == 0) {
                if (arg0->unk_26C == 1) {
                    arg0->unk_264 = 0;
                }
                if (arg0->unk_264 == 0) {
                    arg0->unk_264 = 0x14;
                    arg0->unk_26C = 1;
                    sp24 = arg0 + 0x14;
                    sp2C = (s32) temp_v1_6;
                    play_sound(0x1800U);
                    arg0->unk_260 = (s32) temp_v1_6;
                }
            }
            phi_a1 = 1;
            if ((~((arg0 + 0x14)->unk_0 | ~0x800) == 0) && (arg0->unk_264 == 0)) {
                sp2C = (s32) temp_t6->data[126];
                sp24 = arg0 + 0x14;
                play_sound(0x1800U);
                arg0->unk_260 = (s32) ((s32) temp_t6->data[126] * 3);
            }
            if (~((arg0 + 0x14)->unk_C | ~0x400) == 0) {
                if (phi_a1 == arg0->unk_270) {
                    arg0->unk_268 = 0;
                }
                if (arg0->unk_268 == 0) {
                    arg0->unk_268 = 0x14;
                    arg0->unk_270 = phi_a1;
                    sp24 = arg0 + 0x14;
                    sp2C = (s32) temp_t6->data[126];
                    play_sound(0x1800U);
                    arg0->unk_260 = (s32) -(s32) temp_t6->data[126];
                }
            }
            if ((~((arg0 + 0x14)->unk_0 | ~0x400) == 0) && (arg0->unk_268 == 0)) {
                sp20 = -(s32) temp_t6->data[126];
                sp2C = (s32) temp_t6->data[126];
                sp24 = arg0 + 0x14;
                play_sound(0x1800U);
                arg0->unk_260 = (s32) (sp20 * 3);
            }
            temp_v0_7 = (arg0 + 0x14)->unk_C;
            phi_v0_3 = temp_v0_7;
            if ((~(temp_v0_7 | ~0x200) == 0) || (~((arg0 + 0x14)->unk_0 | ~0x200) == 0)) {
                sp2C = (s32) temp_t6->data[126];
                sp24 = arg0 + 0x14;
                play_sound(0x1800U);
                arg0->unk_260 = (s32) temp_t6->data[126];
                phi_v0_3 = (arg0 + 0x14)->unk_C;
            }
            if ((~(phi_v0_3 | ~0x100) == 0) || (~((arg0 + 0x14)->unk_0 | ~0x100) == 0)) {
                sp20 = -(s32) temp_t6->data[126];
                play_sound(0x1800U);
                arg0->unk_260 = sp20;
            }
        }
    }
    if (~(arg0->input[0].press.button | ~0x20) == 0) {
        temp_t5 = arg0->unk_21C + 1;
        temp_t8 = (s32) (temp_t5 + 7) % 7;
        arg0->unk_21C = temp_t5;
        arg0->unk_21C = temp_t8;
        temp_v0_8 = (arg0 + (temp_t8 * 4))->unk_220;
        arg0->unk_24C = temp_v0_8;
        arg0->unk_218 = temp_v0_8;
    }
    temp_t5_2 = arg0->unk_25C + arg0->unk_260;
    temp_at = temp_t5_2 < -7;
    arg0->unk_25C = temp_t5_2;
    if (temp_at != 0) {
        temp_v0_9 = arg0->unk_210;
        temp_v1_7 = arg0->unk_24C;
        arg0->unk_260 = 0;
        temp_t8_2 = arg0->unk_218 + 1;
        temp_t3 = (s32) (temp_t8_2 + temp_v0_9) % temp_v0_9;
        arg0->unk_218 = temp_t8_2;
        arg0->unk_218 = temp_t3;
        arg0->unk_25C = 0;
        if (((s32) (temp_v1_7 + temp_v0_9 + 0x13) % temp_v0_9) == arg0->unk_218) {
            temp_t7 = temp_v1_7 + 1;
            arg0->unk_24C = temp_t7;
            arg0->unk_24C = (s32) ((s32) (temp_t7 + temp_v0_9) % temp_v0_9);
        }
    }
    temp_a0 = arg0->unk_218;
    temp_v1_8 = arg0->unk_24C;
    phi_v1_3 = temp_v1_8;
    phi_a0_2 = temp_a0;
    phi_v1_4 = temp_v1_8;
    if (arg0->unk_25C >= 8) {
        arg0->unk_260 = 0;
        arg0->unk_25C = 0;
        if (temp_v1_8 == temp_a0) {
            temp_v0_10 = arg0->unk_210;
            temp_t4 = temp_v1_8 - 2;
            arg0->unk_24C = temp_t4;
            temp_hi = (s32) (temp_t4 + temp_v0_10) % temp_v0_10;
            arg0->unk_24C = temp_hi;
            phi_v1_3 = temp_hi;
        }
        temp_v0_11 = arg0->unk_210;
        temp_t7_2 = arg0->unk_218 - 1;
        arg0->unk_218 = temp_t7_2;
        temp_hi_2 = (s32) (temp_t7_2 + temp_v0_11) % temp_v0_11;
        arg0->unk_218 = temp_hi_2;
        phi_a0_2 = temp_hi_2;
        phi_v1_4 = phi_v1_3;
        if (((s32) (phi_v1_3 + temp_v0_11) % temp_v0_11) == temp_hi_2) {
            temp_t1 = phi_v1_3 - 1;
            temp_hi_3 = (s32) (temp_t1 + temp_v0_11) % temp_v0_11;
            arg0->unk_24C = temp_t1;
            arg0->unk_24C = temp_hi_3;
            phi_a0_2 = arg0->unk_218;
            phi_v1_4 = temp_hi_3;
        }
    }
    temp_v0_12 = arg0->unk_210;
    arg0->unk_218 = (s32) ((s32) (phi_a0_2 + temp_v0_12) % temp_v0_12);
    arg0->unk_24C = (s32) ((s32) (phi_v1_4 + temp_v0_12) % temp_v0_12);
    gGameInfo->data[2576] = (s16) arg0->unk_218;
    gGameInfo->data[2577] = (s16) arg0->unk_24C;
    gGameInfo->data[2578] = (s16) arg0->unk_21C;
    temp_a1 = arg0->unk_264;
    temp_t9 = temp_a1 - 1;
    phi_a1_2 = temp_a1;
    if (temp_a1 != 0) {
        arg0->unk_264 = temp_t9;
        phi_a1_2 = temp_t9;
    }
    if (phi_a1_2 == 0) {
        arg0->unk_26C = 0;
    }
    temp_v0_13 = arg0->unk_268;
    temp_t2 = temp_v0_13 - 1;
    phi_v0_4 = temp_v0_13;
    if (temp_v0_13 != 0) {
        arg0->unk_268 = temp_t2;
        phi_v0_4 = temp_t2;
    }
    if (phi_v0_4 == 0) {
        arg0->unk_270 = 0;
    }
}

void func_808013B8(GraphicsContext **arg0, GfxPrint *arg1) {
    ? *temp_a2;
    s32 temp_hi;
    s32 temp_s0;
    s32 temp_v0;
    s32 phi_s0;
    ? *phi_a2;

    GfxPrint_SetColor(arg1, 0xFFU, 0x9BU, 0x96U, 0xFFU);
    GfxPrint_SetPos(arg1, 0xC, 2);
    GfxPrint_Printf(arg1, "ZELDA MAP SELECT");
    GfxPrint_SetColor(arg1, 0xFFU, 0xFFU, 0xFFU, 0xFFU);
    phi_s0 = 0;
    do {
        GfxPrint_SetPos(arg1, 9, phi_s0 + 4);
        temp_v0 = arg0->unk_210;
        temp_hi = (s32) (arg0->unk_24C + phi_s0 + temp_v0) % temp_v0;
        if (temp_hi == arg0->unk_218) {
            GfxPrint_SetColor(arg1, 0xFFU, 0x14U, 0x14U, 0xFFU);
        } else {
            GfxPrint_SetColor(arg1, 0xC8U, 0xC8U, 0x37U, 0xFFU);
        }
        temp_a2 = *(arg0->unk_214 + (temp_hi * 0xC));
        phi_a2 = temp_a2;
        if (temp_a2 == 0) {
            phi_a2 = "**Null**";
        }
        GfxPrint_Printf(arg1, "%s", phi_a2);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x14);
    GfxPrint_SetColor(arg1, 0x9BU, 0x37U, 0x96U, 0xFFU);
    GfxPrint_SetPos(arg1, 0x14, 0x1A);
    GfxPrint_Printf(arg1, "OPT=%d", arg0->unk_248);
}

void func_80801594(GraphicsContext **arg0, GfxPrint *arg1) {
    GfxPrint_SetPos(arg1, 0xA, 0xF);
    GfxPrint_SetColor(arg1, 0xFFU, 0xFFU, 0xFFU, 0xFFU);
    GfxPrint_Printf(arg1, "%s", *(&D_80802334 + ((s32) (Rand_ZeroOne() * 12.0f) * 4)));
}

void func_80801620(GraphicsContext **arg0, GfxPrint *arg1, s32 arg2) {
    s32 sp20;
    s32 *temp_a0;
    s32 temp_v0;
    void *phi_v1;
    s32 phi_v0;

    if ((arg2 >= 0) && (arg2 < 5)) {
        temp_a0 = (arg2 * 8) + &D_80802364;
        phi_v1 = temp_a0 + 8;
        phi_v0 = 8;
loop_3:
        temp_v0 = phi_v0 - 8;
        phi_v0 = temp_v0;
        if (phi_v1 == 0) {
            phi_v1 += -8;
            if (temp_v0 >= 0) {
                goto loop_3;
            }
        }
        sp20 = *temp_a0;
    } else {
        sp20 = 0;
    }
    arg2 = arg2;
    GfxPrint_SetPos(arg1, 4, 0x1A);
    GfxPrint_SetColor(arg1, 0xFFU, 0xFFU, 0x37U, 0xFFU);
    if (sp20 != 0) {
        GfxPrint_Printf(arg1, "Age:%s", sp20);
        return;
    }
    GfxPrint_Printf(arg1, "Age:???(%d)", arg2);
}

void func_808016E8(GraphicsContext **arg0, GfxPrint *arg1, u16 arg2) {
    s32 temp_v0;
    ? *phi_a2;
    ? *phi_a2_2;

    GfxPrint_SetPos(arg1, 4, 0x19);
    GfxPrint_SetColor(arg1, 0xFFU, 0xFFU, 0x37U, 0xFFU);
    if ((s32) arg2 >= 0x8001) {
        if ((s32) arg2 >= 0x8801) {
            switch (arg2) {
            case -4294901776:
                gSaveContext.time = 0x8000;
                phi_a2 = "ﾃﾞﾓ00";
                break;
            case -4294901775:
                phi_a2 = "ﾃﾞﾓ01";
                break;
            case -4294901774:
                phi_a2 = "ﾃﾞﾓ02";
                break;
            case -4294901773:
                phi_a2 = "ﾃﾞﾓ03";
                break;
            case -4294901772:
                phi_a2 = "ﾃﾞﾓ04";
                break;
            case -4294901771:
                phi_a2 = "ﾃﾞﾓ05";
                break;
            case -4294901770:
                phi_a2 = "ﾃﾞﾓ06";
                break;
            case -4294901769:
                phi_a2 = "ﾃﾞﾓ07";
                break;
            case -4294901768:
                phi_a2 = "ﾃﾞﾓ08";
                break;
            case -4294901767:
                phi_a2 = "ﾃﾞﾓ09";
                break;
            case -4294901766:
                phi_a2 = "ﾃﾞﾓ0A";
                break;
            }
        } else {
            if (arg2 != 0x8800) {
                goto block_23;
            }
            gSaveContext.time = 0xC02D;
            phi_a2 = "\x8dﾖﾙ \x8cｼﾞｬﾗ";
        }
    } else if (arg2 != 0) {
        if (arg2 != 0x8000) {
        default:
block_23:
            phi_a2 = "???";
        } else {
            gSaveContext.time = 0x4001;
            phi_a2 = "\x8dｱｻ \x8cｼﾞｬﾗ";
        }
    } else {
        gSaveContext.time = 0x8000;
        phi_a2 = "\x8dｵﾋﾙ\x8cｼﾞｬﾗ";
    }
    gSaveContext.environmentTime = gSaveContext.time;
    GfxPrint_Printf(arg1, "Stage:\x8c%s", phi_a2);
    GfxPrint_SetPos(arg1, 0x17, 0x19);
    GfxPrint_SetColor(arg1, 0xFFU, 0xFFU, 0x37U, 0xFFU);
    temp_v0 = gSaveContext.day;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                if (temp_v0 != 4) {
                    gSaveContext.day = 1;
                    phi_a2_2 = "\x8dｻｲｼｮﾉﾋ";
                } else {
                    phi_a2_2 = "\x8dｸﾘｱｰﾉﾋ";
                }
            } else {
                phi_a2_2 = "\x8dｻｲｺﾞﾉﾋ";
            }
        } else {
            phi_a2_2 = "\x8dﾂｷﾞﾉﾋ";
        }
    } else {
        phi_a2_2 = "\x8dｻｲｼｮﾉﾋ";
    }
    GfxPrint_Printf(arg1, "Day:\x8d%s", phi_a2_2);
}

void func_8080194C(GraphicsContext **arg0) {
    GraphicsContext *sp34;
    ? sp10;
    GraphicsContext *temp_a0;

    temp_a0 = *arg0;
    sp34 = temp_a0;
    func_8012C4C0(temp_a0);
    GfxPrint_Init((GfxPrint *) &sp10);
    GfxPrint_Open((GfxPrint *) &sp10, sp34->polyOpa.p);
    func_808013B8(arg0, (GfxPrint *) &sp10);
    func_80801620(arg0, (GfxPrint *) &sp10, (s32) gSaveContext.playerForm);
    func_808016E8(arg0, (GfxPrint *) &sp10, gSaveContext.cutscene & 0xFFFF);
    sp34->polyOpa.p = GfxPrint_Close((GfxPrint *) &sp10);
    GfxPrint_Destroy((GfxPrint *) &sp10);
}

void func_808019FC(GraphicsContext **arg0) {
    GraphicsContext *sp54;
    ? sp24;
    GraphicsContext *temp_a0;

    temp_a0 = *arg0;
    sp54 = temp_a0;
    func_8012C4C0(temp_a0);
    GfxPrint_Init((GfxPrint *) &sp24);
    GfxPrint_Open((GfxPrint *) &sp24, sp54->polyOpa.p);
    func_80801594(arg0, (GfxPrint *) &sp24);
    sp54->polyOpa.p = GfxPrint_Close((GfxPrint *) &sp24);
    GfxPrint_Destroy((GfxPrint *) &sp24);
}

void func_80801A64(GraphicsContext **arg0) {
    s32 sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    View *sp28;
    View *temp_a0;

    func_8012CF0C(arg0->unk_0, 1, 1, 0U, (u8) 0, (u8) 0);
    temp_a0 = arg0 + 0xA8;
    sp28 = temp_a0;
    sp38 = 0x140;
    sp30 = 0xF0;
    sp2C = 0;
    sp34 = 0;
    View_SetViewport(temp_a0, (Viewport *) &sp2C);
    View_RenderView(temp_a0, 0xF);
    if (arg0->unk_9B == 0) {
        func_808019FC(arg0);
        return;
    }
    func_8080194C(arg0);
}

void Select_Main(GameState *thisx) {
    func_80800A44(thisx);
    func_80801A64((GraphicsContext **) thisx);
}

void Select_Destroy(GameState *thisx) {
    ShrinkWindow_Fini();
}

void Select_Init(GameState *thisx) {
    s16 temp_v0;

    thisx->main = Select_Main;
    thisx->destroy = Select_Destroy;
    thisx->unk_214 = &D_80801C80;
    thisx->unk_24C = 0;
    thisx->unk_218 = 0;
    thisx->unk_220 = 0;
    thisx->unk_224 = 0x13;
    thisx->unk_228 = 0x25;
    thisx->unk_22C = 0x33;
    thisx->unk_230 = 0x3B;
    thisx->unk_234 = 0x49;
    thisx->unk_238 = 0x5B;
    thisx->unk_21C = 0;
    thisx->unk_248 = 0;
    thisx->unk_210 = 0x8F;
    thisx = thisx;
    ShrinkWindow_Init();
    View_Init(thisx + 0xA8, thisx->gfxCtx);
    thisx->unk_208 = 0xA;
    thisx->unk_25C = 0;
    thisx->unk_260 = 0;
    thisx->unk_264 = 0;
    thisx->unk_268 = 0;
    thisx->unk_26C = 0;
    thisx->unk_270 = 0;
    thisx->unk_274 = 0;
    temp_v0 = gGameInfo->data[2576];
    if (((s32) temp_v0 >= 0) && ((s32) temp_v0 < thisx->unk_210)) {
        thisx->unk_218 = (s32) temp_v0;
        thisx->unk_24C = (s32) gGameInfo->data[2577];
        thisx->unk_21C = (s32) gGameInfo->data[2578];
    }
    Game_SetFramerateDivisor(thisx, 1);
    gSaveContext.cutscene = 0;
    gSaveContext.playerForm = 4;
    gSaveContext.linkAge = 0;
}
