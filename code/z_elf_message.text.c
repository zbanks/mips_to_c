u8 gItemSlots[];                                    /* unable to generate initializer */
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

