f32 func_80086760(f32 arg0);                        /* static */
void func_80086794(f32 arg0);                       /* static */
void func_800867B4(f32 arg0);                       /* static */
void func_800867D4(f32 arg0);                       /* static */
void func_800867F4(f32 arg0);                       /* static */
void func_80086814(f32 arg0);                       /* static */
f32 func_80086834(f32 arg0, f32);                   /* static */
f32 func_80086880(f32 arg0);                        /* static */
f32 func_800869A4(f32 arg0);                        /* static */
void func_80086AF0(f32);                            /* static */
void func_80086C18(f32 arg0);                       /* static */
static s32 D_8009CD10;
f32 qNaN0x10000 = nanf;
f32 D_800990C0[9] = {
    -0.33333334f,
    0.2f,
    -0.14285715f,
    0.11111111f,
    -0.09090909f,
    0.07692308f,
    -0.06666667f,
    0.05882353f,
    0.0f,
}; /* const */



f32 func_80086760(f32 arg0) {
    f32 sp1C;

    sp1C = __sinf(arg0);
    return sp1C / __cosf(arg0);
}

void func_80086794(f32 arg0) {
    func_80086C70(arg0);
}

void func_800867B4(f32 arg0) {
    func_80086CA8(arg0);
}

void func_800867D4(f32 arg0) {
    func_80086D50(arg0);
}

void func_800867F4(f32 arg0) {
    func_80086CE0(arg0);
}

void func_80086814(f32 arg0) {
    func_80086D18(arg0);
}

f32 func_80086834(f32 arg0) {
    f32 temp_f0;
    f32 temp_f16;
    f32 phi_f2;
    f32 *phi_v0;
    f32 phi_f14;

    temp_f0 = arg0 * arg0;
    phi_f2 = arg0;
    phi_v0 = D_800990C0;
    phi_f14 = arg0 * temp_f0;
loop_1:
    temp_f16 = phi_f2 + (*phi_v0 * phi_f14);
    phi_v0 += 4;
    if (phi_f2 != temp_f16) {
        phi_f2 = temp_f16;
        phi_f14 *= temp_f0;
        goto loop_1;
    }
    return phi_f2;
}

f32 func_80086880(f32 arg0) {
    f32 temp_f14;
    f32 phi_f0;
    f32 phi_f2;

    temp_f14 = arg0;
    if (arg0 > 0.0f) {
        phi_f0 = arg0;
        goto block_7;
    }
    if (temp_f14 < 0.0f) {
        phi_f0 = -temp_f14;
block_7:
        if (phi_f0 <= 0.41421354f) {
            return func_80086834(temp_f14, temp_f14);
        }
        if (phi_f0 >= 2.4142137f) {
            arg0 = temp_f14;
            phi_f2 = 1.5707964f - func_80086834(1.0f / phi_f0, temp_f14);
        } else {
            arg0 = temp_f14;
            phi_f2 = 0.7853982f - func_80086834((1.0f - phi_f0) / (1.0f + phi_f0), temp_f14);
        }
        if (arg0 > 0.0f) {
            return phi_f2;
        }
        return -phi_f2;
    }
    if (temp_f14 == 0.0f) {
        return 0.0f;
    }
    return qNaN0x10000;
}

f32 func_800869A4(f32 arg0) {
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_v1;
    s32 phi_v1;
    s32 phi_v0;
    f32 phi_f12;
    f32 phi_f14;
    f32 phi_f2;

    phi_f12 = arg0;
    if ((arg0 >= -1.0f) && (arg0 <= 1.0f)) {
        phi_v0 = 0;
        goto block_8;
    }
    phi_v0 = 1;
    if (arg0 > 1.0f) {
        phi_f12 = 1.0f / arg0;
        goto block_8;
    }
    phi_v0 = -1;
    if (arg0 < -1.0f) {
        phi_f12 = 1.0f / arg0;
block_8:
        temp_f0 = phi_f12 * phi_f12;
        phi_v1 = 8;
        phi_f14 = 8.0f;
        phi_f2 = 0.0f;
        do {
            temp_v1 = phi_v1 - 4;
            temp_f14 = phi_f14 - 1.0f;
            temp_f14_2 = temp_f14 - 1.0f;
            temp_f14_3 = temp_f14_2 - 1.0f;
            temp_f2_2 = (temp_f14_3 * temp_f14_3 * temp_f0) / ((2.0f * temp_f14_3) + 1.0f + ((temp_f14_2 * temp_f14_2 * temp_f0) / ((2.0f * temp_f14_2) + 1.0f + ((temp_f14 * temp_f14 * temp_f0) / ((2.0f * temp_f14) + 1.0f + ((phi_f14 * phi_f14 * temp_f0) / ((2.0f * phi_f14) + 1.0f + phi_f2)))))));
            phi_v1 = temp_v1;
            phi_f14 = temp_f14_3 - 1.0f;
            phi_f2 = temp_f2_2;
        } while (temp_v1 != 0);
        temp_f2 = phi_f12 / (1.0f + temp_f2_2);
        if (phi_v0 == 0) {
            return temp_f2;
        }
        if (phi_v0 > 0) {
            return 1.5707964f - temp_f2;
        }
        return -1.5707964f - temp_f2;
    }
    return qNaN0x10000;
}

void func_80086AF0(void) {
    if (D_8009CD10 == 0) {
        func_80086880();
        return;
    }
    func_800869A4();
}

f32 func_80086B30(f32 y, f32 x) {
    if (x == 0.0f) {
        if (y == 0.0f) {
            return 0.0f;
        }
        if (y > 0.0f) {
            return 1.5707964f;
        }
        if (y < 0.0f) {
            return -1.5707964f;
        }
        return qNaN0x10000;
    }
    if (x >= 0.0f) {
        return (bitwise f32) func_80086AF0(y / x);
    }
    if (y < 0.0f) {
        return (bitwise f32) func_80086AF0(y / x) - 3.1415927f;
    }
    return 3.1415927f - (bitwise f32) func_80086AF0(-(y / x));
}

void func_80086C18(f32 arg0) {
    func_80086B30(arg0, sqrtf(1.0f - (arg0 * arg0)));
}

f32 func_80086C48(f32 param_1) {
    return 1.5707964f - (bitwise f32) func_80086C18();
}

