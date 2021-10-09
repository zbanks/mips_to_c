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
    /* 0x12046 */ char pad_12046[0xE];              /* maybe part of unk12044[8]? */
    /* 0x12054 */ s16 unk_12054;                    /* inferred */
    /* 0x12056 */ s16 unk_12056;                    /* inferred */
    /* 0x12058 */ s16 unk_12058;                    /* inferred */
    /* 0x1205A */ char pad_1205A[0x10];             /* maybe part of unk_12058[9]? */
    /* 0x1206A */ s16 unk1206A;
    /* 0x1206C */ s32 unk1206C;
    /* 0x12070 */ char pad_12070[0x8];              /* maybe part of unk1206C[3]? */
    /* 0x12078 */ s32 bankRupeesSelected;
    /* 0x1207C */ s32 bankRupees;
    /* 0x12080 */ char pad_12080[0x31];             /* maybe part of bankRupees[13]? */
    /* 0x120B1 */ u8 unk120B1;
    /* 0x120B2 */ char pad_120B2[0x2E];             /* maybe part of unk120B1[47]? */
} MessageContext;                                   /* size = 0x120E0 */

struct _mips2c_stack_func_8012EC80 {};              /* size 0x0 */

struct _mips2c_stack_func_8012ED34 {};              /* size 0x0 */

struct _mips2c_stack_func_8012ED78 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8012EDE8 {};              /* size 0x0 */

struct _mips2c_stack_func_8012EE34 {};              /* size 0x0 */

struct _mips2c_stack_func_8012EF0C {};              /* size 0x0 */

struct _mips2c_stack_func_8012F0EC {};              /* size 0x0 */

struct _mips2c_stack_func_8012F1BC {};              /* size 0x0 */

struct _mips2c_stack_func_8012F22C {};              /* size 0x0 */

struct _mips2c_stack_func_8012F278 {};              /* size 0x0 */

? func_80123C90(Actor *, SaveContext *);            /* extern */
static ? D_801C2380;                                /* unable to generate initializer */
u32 gBitFlags[32] = {
    1,
    2,
    4,
    8,
    0x10,
    0x20,
    0x40,
    0x80,
    0x100,
    0x200,
    0x400,
    0x800,
    0x1000,
    0x2000,
    0x4000,
    0x8000,
    0x10000,
    0x20000,
    0x40000,
    0x80000,
    0x100000,
    0x200000,
    0x400000,
    0x800000,
    0x1000000,
    0x2000000,
    0x4000000,
    0x8000000,
    0x10000000,
    0x20000000,
    0x40000000,
    0x80000000,
};
u16 gEquipMasks[4] = {0xF, 0xF0, 0xF00, 0xF000};
u16 gEquipNegMasks[4] = {0xFFF0, 0xFF0F, 0xF0FF, 0xFFF};
u8 gEquipShifts[4] = {0, 4, 8, 0xC};
GameInfo *gGameInfo;
SaveContext gSaveContext;
u32 gUpgradeNegMasks[8] = {
    0xFFFFFFF8,
    0xFFFFFFC7,
    0xFFFFFE3F,
    0xFFFFF1FF,
    0xFFFFCFFF,
    0xFFFE3FFF,
    0xFFF1FFFF,
    0xFF8FFFFF,
};
u8 gUpgradeShifts[16] = {0, 3, 6, 9, 0xC, 0xE, 0x11, 0x14, 0, 0, 0, 0x1E, 0, 0x28, 0, 0x32};

s32 func_8012EC80(GlobalContext *globalCtx) {
    s16 temp_v1;
    u8 temp_v0;
    u8 phi_v1;
    u8 phi_v1_2;

    if (gSaveContext.buttonStatus[0] == 0xFF) {
        return 0xFF;
    }
    if (gSaveContext.unk_1015 == 0xFF) {
        return 0xFF;
    }
    temp_v0 = gSaveContext.playerForm;
    phi_v1 = temp_v0;
    if (temp_v0 == 4) {
        phi_v1 = 0U;
    }
    if ((&gSaveContext + (phi_v1 * 4))->unk_4C == 0xFF) {
        if ((globalCtx->interfaceCtx.unk_21C != 0) && (temp_v1 = globalCtx->interfaceCtx.unk_21E, (temp_v1 != 0))) {
            return (s32) temp_v1;
        }
        return 0xFF;
    }
    phi_v1_2 = temp_v0;
    if (temp_v0 == 4) {
        phi_v1_2 = 0U;
    }
    return (s32) (&gSaveContext + (phi_v1_2 * 4))->unk_4C;
}

void func_8012ED34(s16 equipment) {
    gSaveContext.equips.equipment = ((equipment & 0xFFFF) << gEquipShifts[1]) | (gSaveContext.equips.equipment & *(gEquipNegMasks + 2));
}

u8 func_8012ED78(GlobalContext *globalCtx, s16 equipment) {
    u16 temp_v0;
    u8 temp_v1;

    temp_v0 = gSaveContext.equips.equipment;
    temp_v1 = gEquipShifts[1];
    if (((s32) (temp_v0 & *(gEquipMasks + 2)) >> temp_v1) != 0) {
        gSaveContext.equips.equipment = (0 << temp_v1) | (temp_v0 & *(gEquipNegMasks + 2));
        func_80123C90(globalCtx->actorCtx.actorList[2].first, &gSaveContext);
        return 1U;
    }
    return 0U;
}

void func_8012EDE8(s16 arg0, u32 arg1) {
    gSaveContext.inventory.upgrades = (gSaveContext.inventory.upgrades & gUpgradeNegMasks[arg0]) | (arg1 << gUpgradeShifts[arg0]);
}

s32 func_8012EE34(s16 arg0) {
    s32 phi_v0;

    phi_v0 = 0;
    if ((s32) arg0 >= 0x20) {
        if ((s32) arg0 < 0x40) {
            phi_v0 = 1;
        } else if ((s32) arg0 < 0x60) {
            phi_v0 = 2;
        } else if ((s32) arg0 < 0x80) {
            phi_v0 = 3;
        } else if ((s32) arg0 < 0xA0) {
            phi_v0 = 4;
        } else if ((s32) arg0 < 0xC0) {
            phi_v0 = 5;
        } else if ((s32) arg0 < 0xE0) {
            phi_v0 = 6;
        }
    }
    if ((*(gBitFlags + ((arg0 * 4) + -(s32) (phi_v0 << 7))) & gSaveContext.roomInf[125][phi_v0]) != 0) {
        return 1;
    }
    return 0;
}

void func_8012EF0C(s16 arg0) {
    u16 temp_a0;
    void *temp_a1;
    s16 phi_v0;
    s32 phi_v1;

    phi_v0 = 0;
    phi_v1 = 0;
    phi_v1 = 0;
    if (((s32) arg0 >= 0) && ((s32) arg0 < 6)) {
        temp_a1 = (arg0 * 0x18) + &D_801C2380;
loop_3:
        temp_a0 = *(temp_a1 + (phi_v0 * 2));
        if (temp_a0 != 0xFFFF) {
            if ((s32) (s16) temp_a0 < 0x20) {

            } else if ((s32) (s16) temp_a0 < 0x40) {
                phi_v1 = 1;
            } else if ((s32) (s16) temp_a0 < 0x60) {
                phi_v1 = 2;
            } else if ((s32) (s16) temp_a0 < 0x80) {
                phi_v1 = 3;
            } else if ((s32) (s16) temp_a0 < 0xA0) {
                phi_v1 = 4;
            } else if ((s32) (s16) temp_a0 < 0xC0) {
                phi_v1 = 5;
            } else if ((s32) (s16) temp_a0 < 0xE0) {
                phi_v1 = 6;
            }
            gSaveContext.roomInf[125][phi_v1] |= *(&gBitFlags[(s16) temp_a0] + -(s32) (phi_v1 << 7));
            phi_v0 = (s16) (phi_v0 + 1);
            goto loop_3;
        }
        if (temp_a1 == &D_801C2380) {
            gSaveContext.unk_F60 |= 3;
        } else if (temp_a1 == (&D_801C2380 + 0x18)) {
            gSaveContext.unk_F60 |= 0x1C;
        } else if (temp_a1 == (&D_801C2380 + 0x30)) {
            gSaveContext.unk_F60 |= 0xE0;
        } else if (temp_a1 == (&D_801C2380 + 0x48)) {
            gSaveContext.unk_F60 |= 0x100;
        } else if (temp_a1 == (&D_801C2380 + 0x60)) {
            gSaveContext.unk_F60 |= 0x1E00;
        } else if (temp_a1 == (&D_801C2380 + 0x78)) {
            gSaveContext.unk_F60 |= 0x6000;
        }
    }
    gGameInfo->data[1439] = 0;
}

void func_8012F0EC(s16 arg0) {
    s16 temp_v1;
    s16 phi_v1;

    (&gSaveContext + (((s32) gSaveContext.day % 5) * 4))->unk_E68 = (s32) (&gSaveContext + (arg0 * 8))->unk_3DE4;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 1;
        (&gSaveContext + (((s32) gSaveContext.day % 5) * 8) + phi_v1)->unk_D6 = (u8) gSaveContext.playerName[phi_v1];
        phi_v1 = temp_v1;
    } while ((s32) temp_v1 < 8);
}

void func_8012F1BC(s16 arg0) {
    u32 temp_t3;
    u32 temp_v0;

    if (arg0 == 0x27) {
        temp_v0 = gSaveContext.roomInf[126][0];
        gSaveContext.roomInf[126][0] = ((((u32) (temp_v0 & 0xFFFF0000) >> 0x10) + 1) << 0x10) | (temp_v0 & 0xFFFF);
        return;
    }
    temp_t3 = gSaveContext.roomInf[126][0];
    gSaveContext.roomInf[126][0] = ((temp_t3 + 1) & 0xFFFF) | (temp_t3 & 0xFFFF0000);
}

s16 func_8012F22C(s16 sceneIndex) {
    if (sceneIndex == 0x27) {
        return (s16) ((u32) (gSaveContext.roomInf[126][0] & 0xFFFF0000) >> 0x10);
    }
    return (s16) gSaveContext.roomInf[126][0];
}

void func_8012F278(GlobalContext *globalCtx) {
    gSaveContext.roomInf[127][5] = (gSaveContext.roomInf[127][5] & 0xFFFF0000) | ((((globalCtx->msgCtx.unk_12054 & 0xF) << 8) | ((globalCtx->msgCtx.unk_12056 & 0xF) * 0x10) | (globalCtx->msgCtx.unk_12058 & 0xF)) & 0xFFFF);
}
