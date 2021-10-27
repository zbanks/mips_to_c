struct _mips2c_stack_guRotate {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0x40];
};                                                  /* size = 0x60 */

struct _mips2c_stack_guRotateF {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

f32 D_80097F90 = 0.017453292f;

void guRotateF(f32 (*mf)[4], f32 a, f32 x, f32 y, f32 z) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp28;
    f32 sp24;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;

    guNormalize(&x, &y, &z);
    temp_f12 = a * D_80097F90;
    a = temp_f12;
    sp44 = __sinf(temp_f12);
    temp_f0 = __cosf(a);
    temp_f2 = 1.0f - temp_f0;
    sp40 = temp_f0;
    temp_f18 = x * y * temp_f2;
    sp3C = temp_f18;
    sp38 = y * z * temp_f2;
    sp34 = z * x * temp_f2;
    guMtxIdentF((f32 [4][4]) mf);
    temp_f0_2 = x * sp44;
    temp_f4 = z * sp44;
    temp_f2_2 = x * x;
    sp28 = y * sp44;
    sp24 = temp_f4;
    mf[0][0] = ((1.0f - temp_f2_2) * sp40) + temp_f2_2;
    mf[2][1] = sp38 - temp_f0_2;
    mf[1][2] = sp38 + temp_f0_2;
    temp_f12_2 = y * y;
    mf[1][1] = ((1.0f - temp_f12_2) * sp40) + temp_f12_2;
    mf[2][0] = sp34 + sp28;
    mf[0][2] = sp34 - sp28;
    temp_f0_3 = z * z;
    mf[2][2] = ((1.0f - temp_f0_3) * sp40) + temp_f0_3;
    mf[1][0] = temp_f18 - temp_f4;
    mf[0][1] = temp_f18 + sp24;
}

void guRotate(Mtx *m, f32 a, f32 x, f32 y, f32 z) {
    ? sp20;

    guRotateF((f32 [4][4]) (f32 (*)[4]) &sp20, a, x, y, z);
    guMtxF2L((f32 [4][4]) (f32 (*)[4]) &sp20, m);
}
