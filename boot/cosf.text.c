struct _mips2c_stack___cosf {};                     /* size 0x0 */

f32 __cosf(f32 __x) {
    f64 temp_f0;
    f64 temp_f12;
    f64 temp_f14;
    f64 temp_f14_2;
    f64 temp_f16;
    f64 temp_f2;
    f32 phi_f0;
    s32 phi_v0;

    if ((((bitwise s32) __x >> 0x16) & 0x1FF) < 0x136) {
        if (__x > 0.0f) {
            phi_f0 = __x;
        } else {
            phi_f0 = -__x;
        }
        temp_f12 = (f64) phi_f0;
        temp_f14_2 = (temp_f12 * 0.3183098861837907) + 0.5;
        if (temp_f14_2 >= 0.0) {
            phi_v0 = (s32) (temp_f14_2 + 0.5);
        } else {
            phi_v0 = (s32) (temp_f14_2 - 0.5);
        }
        temp_f0 = (f64) phi_v0 - 0.5;
        temp_f2 = (temp_f12 - (temp_f0 * 3.1415926218032837)) - (temp_f0 * 3.178650954705639e-08);
        temp_f14 = temp_f2 * temp_f2;
        temp_f16 = D_80099400.unk8 + (((((D_80099400.unk20 * temp_f14) + D_80099400.unk18) * temp_f14) + D_80099400.unk10) * temp_f14);
        if ((phi_v0 & 1) == 0) {
            return (f32) ((temp_f2 * temp_f14 * temp_f16) + temp_f2);
        }
        return -(f32) ((temp_f2 * temp_f14 * temp_f16) + temp_f2);
    }
    if (__x != __x) {
        return nanf;
    }
    return 0.0f;
}
