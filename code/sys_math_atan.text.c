struct _mips2c_stack_Math_Acot2F {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Math_Atan2F {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Math_Atan2S {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_Math_FAtan2F {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Math_GetAtan2Tbl {};           /* size 0x0 */

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
