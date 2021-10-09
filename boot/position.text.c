struct _mips2c_stack_guPosition {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x40];
};                                                  /* size = 0x68 */

struct _mips2c_stack_guPositionF {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

static f32 D_80097F80 = 0.017453292f;

void guPositionF(f32 (*mf)[4], f32 r, f32 p, f32 h, f32 s, f32 x, f32 y, f32 z) {
    f32 sp40;
    f32 sp3C;
    f32 sp34;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f20;
    f32 temp_f22;

    temp_f0 = D_80097F80;
    temp_f12 = r * temp_f0;
    r = temp_f12;
    p *= temp_f0;
    h *= temp_f0;
    temp_f20 = __sinf(temp_f12);
    temp_f22 = __cosf(r);
    sp40 = __sinf(p);
    sp34 = __cosf(p);
    sp3C = __sinf(h);
    temp_f0_2 = __cosf(h);
    mf[0][0] = sp34 * temp_f0_2 * s;
    mf[0][1] = sp34 * sp3C * s;
    mf[0][3] = 0.0f;
    mf[0][2] = -sp40 * s;
    mf->unk_1C = 0.0f;
    temp_f12_2 = temp_f20 * sp40;
    mf->unk_10 = (f32) (((temp_f12_2 * temp_f0_2) - (temp_f22 * sp3C)) * s);
    mf->unk_14 = (f32) (((temp_f12_2 * sp3C) + (temp_f22 * temp_f0_2)) * s);
    mf->unk_18 = (f32) (temp_f20 * sp34 * s);
    mf->unk_2C = 0.0f;
    temp_f12_3 = temp_f22 * sp40;
    mf->unk_20 = (f32) (((temp_f12_3 * temp_f0_2) + (temp_f20 * sp3C)) * s);
    mf->unk_24 = (f32) (((temp_f12_3 * sp3C) - (temp_f20 * temp_f0_2)) * s);
    mf->unk_28 = (f32) (temp_f22 * sp34 * s);
    mf->unk_30 = x;
    mf->unk_34 = y;
    mf->unk_3C = 1.0f;
    mf->unk_38 = z;
}

void guPosition(Mtx *m, f32 r, f32 p, f32 h, f32 s, f32 x, f32 y, f32 z) {
    ? sp28;

    guPositionF((f32 [4][4]) (f32 (*)[4]) &sp28, r, p, h, s, x, y, z);
    guMtxF2L((f32 [4][4]) (f32 (*)[4]) &sp28, m);
}
