struct _mips2c_stack_func_800F05C0 {};              /* size 0x0 */

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

? func_800F05C0(void *arg0) {
    u8 temp_v0;

    if (gSaveContext.inventory.items[gItemSlots->unk0] == 0) {
        return 0;
    }
    if (((s32) gSaveContext.day % 5) <= 0) {
        return 0;
    }
    if ((gSaveContext.weekEventReg[88] & 0x20) != 0) {
        return 0;
    }
    if ((gSaveContext.weekEventReg[79] & 0x10) != 0) {
        if ((gSaveContext.weekEventReg[8] & 0x40) != 0) {
            return 0;
        }
        return 0x224;
    }
    if ((gSaveContext.weekEventReg[8] & 0x80) == 0) {
        if ((gSaveContext.weekEventReg[9] & 1) != 0) {
            return 0x21E;
        }
        if (arg0->unkA4 == 0x26) {
            return 0;
        }
        return 0x21D;
    }
    if (gSaveContext.magicAcquired != 1) {
        return 0x21F;
    }
    if (gSaveContext.inventory.items[gItemSlots->unk29] == 0x29) {
        if (arg0->unkA4 != 0x19) {
            return 0x244;
        }
        return 0;
    }
    if (gSaveContext.inventory.items[gItemSlots->unk28] == 0x28) {
        if ((gSaveContext.weekEventReg[86] & 4) != 0) {
            return 0x242;
        }
        return 0x243;
    }
    if ((gSaveContext.weekEventReg[74] & 0x20) != 0) {
        return 0x223;
    }
    temp_v0 = gSaveContext.weekEventReg[73];
    if ((temp_v0 & 0x80) != 0) {
        return 0x222;
    }
    if ((temp_v0 & 0x20) != 0) {
        return 0x221;
    }
    if ((gSaveContext.weekEventReg[77] & 2) != 0) {
        if ((temp_v0 & 0x10) != 0) {
            return 0x240;
        }
        return 0x241;
    }
    if (((gSaveContext.weekEventReg[86] & 2) != 0) || ((temp_v0 & 0x40) != 0)) {
        return 0x23F;
    }
    return 0x220;
}
