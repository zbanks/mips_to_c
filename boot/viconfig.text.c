u8 gViConfigAdditionalScanLines = 0;
u32 gViConfigFeatures = 0x42;
OSViMode gViConfigMode;
u8 gViConfigUseDefault = 1;
f32 gViConfigXScale = 1.0f;
f32 gViConfigYScale = 1.0f;
OSViMode osViModeMpalLan1 = {
    0x1E,
    {0x311E, 0x140, 0x4651E39, 0x20D, 0x40C11, 0xC190C1A, 0x6C02EC, 0x200, 0},
    {{0x280, 0x400, 0x2501FF, 0xE0204, 2}, {0x280, 0x400, 0x2501FF, 0xE0204, 2}},
};
OSViMode osViModeNtscLan1 = {
    2,
    {0x311E, 0x140, 0x3E52239, 0x20D, 0xC15, 0xC150C15, 0x6C02EC, 0x200, 0},
    {{0x280, 0x400, 0x2501FF, 0xE0204, 2}, {0x280, 0x400, 0x2501FF, 0xE0204, 2}},
};
OSViMode osViModePalLan1 = {
    0x10,
    {0x311E, 0x140, 0x4541E3A, 0x271, 0x170C69, 0xC6F0C6D, 0x800300, 0x200, 0},
    {{0x280, 0x400, 0x5F0239, 0x9026B, 2}, {0x280, 0x400, 0x5F0239, 0x9026B, 2}},
};



void ViConfig_UpdateVi(u32 arg0) {
    f32 temp_f12;
    f32 temp_f12_2;
    u32 temp_a0;
    u32 temp_a0_3;
    u32 temp_v0;
    u8 temp_a0_2;

    if (arg0 != 0) {
        temp_v0 = osTvType;
        if (temp_v0 != 0) {
            if ((temp_v0 != 1) && (temp_v0 == 2)) {
                osViSetMode(&osViModeMpalLan1);
            } else {
                osViSetMode(&osViModeNtscLan1);
            }
        } else {
            osViSetMode(&osViModePalLan1);
        }
        temp_a0 = gViConfigFeatures;
        if (temp_a0 != 0) {
            osViSetSpecialFeatures(temp_a0);
        }
        if (gViConfigYScale != 1.0f) {
            osViSetYScale(1.0f);
        }
    } else {
        osViSetMode(&gViConfigMode);
        temp_a0_2 = gViConfigAdditionalScanLines;
        if (temp_a0_2 != 0) {
            osViExtendVStart((u32) temp_a0_2);
        }
        temp_a0_3 = gViConfigFeatures;
        if (temp_a0_3 != 0) {
            osViSetSpecialFeatures(temp_a0_3);
        }
        temp_f12 = gViConfigXScale;
        if (temp_f12 != 1.0f) {
            osViSetXScale(temp_f12);
        }
        temp_f12_2 = gViConfigYScale;
        if (temp_f12_2 != 1.0f) {
            osViSetYScale(temp_f12_2);
        }
    }
    gViConfigUseDefault = (u8) arg0;
}

void ViConfig_UpdateBlack(void) {
    if (gViConfigUseDefault != 0) {
        osViBlack(1U);
        return;
    }
    osViBlack(0U);
}

