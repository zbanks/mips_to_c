static ? sATan2Tbl;                                 /* unable to generate initializer */



u16 Math_GetAtan2Tbl(f32 opposite, f32 adjacent) {
    return *(&sATan2Tbl + ((s32) ((opposite / adjacent) * 1024.0f) * 2));
}

s16 Math_Atan2S(f32 opposite, f32 adjacent) {
    f32 sp30;
    f32 sp2C;
    s16 phi_v1;

    if (opposite == 0.0f) {
        if (adjacent >= 0.0f) {
            phi_v1 = 0;
        } else {
            phi_v1 = 0x8000;
        }
    } else if (adjacent == 0.0f) {
        if (opposite >= 0.0f) {
            phi_v1 = 0x4000;
        } else {
            phi_v1 = 0xC000;
        }
    } else if (opposite >= 0.0f) {
        if (adjacent >= 0.0f) {
            if (opposite <= adjacent) {
                phi_v1 = Math_GetAtan2Tbl(opposite, adjacent);
            } else {
                phi_v1 = 0x4000 - Math_GetAtan2Tbl(adjacent, opposite);
            }
        } else {
            sp30 = -adjacent;
            if (sp30 < opposite) {
                phi_v1 = Math_GetAtan2Tbl(sp30, opposite) + 0x4000;
            } else {
                phi_v1 = 0x8000 - Math_GetAtan2Tbl(opposite, sp30);
            }
        }
    } else if (adjacent < 0.0f) {
        sp30 = -adjacent;
        sp2C = -opposite;
        if (sp2C <= sp30) {
            phi_v1 = Math_GetAtan2Tbl(sp2C, sp30) + 0x8000;
        } else {
            phi_v1 = 0xC000 - Math_GetAtan2Tbl(sp30, sp2C);
        }
    } else {
        sp2C = -opposite;
        if (adjacent < sp2C) {
            phi_v1 = Math_GetAtan2Tbl(adjacent, sp2C) + 0xC000;
        } else {
            phi_v1 = (s16) -Math_GetAtan2Tbl(sp2C, adjacent);
        }
    }
    return phi_v1;
}

f32 Math_Atan2F(f32 opposite, f32 adjacent) {
    return (f32) Math_Atan2S(opposite, adjacent) * 0.0000958738f;
}

s16 Math_FAtan2F(f32 adjacent, f32 opposite) {
    return Math_Atan2S(opposite, adjacent);
}

f32 Math_Acot2F(f32 adjacent, f32 opposite) {
    return (bitwise f32) (bitwise s32) Math_Atan2F(opposite, adjacent);
}

