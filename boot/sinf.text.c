du P[5] = {
    {1.0},
    {-0.16666659550427756},
    {0.008333066246082155},
    {-0.0001980960290193795},
    {2.605780637968037e-06},
}; /* const */
du pihi = {3.1415926218032837};                     /* const */
du pilo = {3.178650954705639e-08};                  /* const */
du rpi = {0.3183098861837907};                      /* const */
fu zero = {0};                                      /* const */



f32 __sinf(f32 __x) {
    f64 temp_f0;
    f64 temp_f0_2;
    f64 temp_f12;
    f64 temp_f12_2;
    f64 temp_f14;
    f64 temp_f2;
    f64 temp_f2_2;
    f64 temp_f2_3;
    s32 temp_t6;
    s32 phi_v0;

    temp_t6 = ((bitwise s32) __x >> 0x16) & 0x1FF;
    if (temp_t6 < 0xFF) {
        temp_f2_2 = (f64) __x;
        if (temp_t6 >= 0xE6) {
            temp_f12_2 = temp_f2_2 * temp_f2_2;
            return (f32) ((temp_f2_2 * temp_f12_2 * (P->unk8 + (((((P->unk20 * temp_f12_2) + P->unk18) * temp_f12_2) + P->unk10) * temp_f12_2))) + temp_f2_2);
        }
        return __x;
    }
    if (temp_t6 < 0x136) {
        temp_f2_3 = (f64) __x;
        temp_f0 = temp_f2_3 * rpi.d;
        if (temp_f0 >= 0.0) {
            phi_v0 = (s32) (temp_f0 + 0.5);
        } else {
            phi_v0 = (s32) (temp_f0 - 0.5);
        }
        temp_f0_2 = (f64) phi_v0;
        temp_f2 = (temp_f2_3 - (temp_f0_2 * pihi.d)) - (temp_f0_2 * pilo.d);
        temp_f12 = temp_f2 * temp_f2;
        temp_f14 = P->unk8 + (((((P->unk20 * temp_f12) + P->unk18) * temp_f12) + P->unk10) * temp_f12);
        if ((phi_v0 & 1) == 0) {
            return (f32) ((temp_f2 * temp_f12 * temp_f14) + temp_f2);
        }
        return -(f32) ((temp_f2 * temp_f12 * temp_f14) + temp_f2);
    }
    if (__x != __x) {
        return nanf;
    }
    return (bitwise f32) zero.i;
}

