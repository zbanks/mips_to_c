struct _mips2c_stack_guOrtho {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x40];
};                                                  /* size = 0x68 */

struct _mips2c_stack_guOrthoF {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void guOrthoF(f32 (*mf)[4], f32 l, f32 r, f32 b, f32 t, f32 n, f32 f, f32 scale) {
    f32 (*temp_v0)[4];
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f2;
    s32 temp_v1;
    void *temp_v0_2;
    f32 phi_f12;
    f32 (*phi_v0)[4];
    f32 phi_f18;
    f32 phi_f14;
    f32 phi_f16;
    s32 phi_v1;
    f32 phi_f12_2;
    f32 (*phi_v0_2)[4];
    f32 phi_f18_2;
    f32 phi_f14_2;
    f32 phi_f16_2;

    guMtxIdentF((f32 [4][4]) mf);
    temp_f0 = r - l;
    temp_f12 = f - n;
    mf[0][0] = 2.0f / temp_f0;
    temp_f2 = t - b;
    mf[2][2] = -2.0f / temp_f12;
    mf[1][1] = 2.0f / temp_f2;
    mf[3][0] = -(r + l) / temp_f0;
    mf[3][1] = -(t + b) / temp_f2;
    mf[3][3] = 1.0f;
    mf[3][2] = -(f + n) / temp_f12;
    temp_f18 = mf[0][1];
    temp_f12_2 = mf[0][0] * scale;
    temp_f14 = mf[0][2];
    temp_f16 = mf[0][3];
    phi_f12 = temp_f12_2;
    phi_v0 = mf;
    phi_f18 = temp_f18;
    phi_f14 = temp_f14;
    phi_f16 = temp_f16;
    phi_v1 = 1;
    phi_f12_2 = temp_f12_2;
    phi_v0_2 = mf;
    phi_f18_2 = temp_f18;
    phi_f14_2 = temp_f14;
    phi_f16_2 = temp_f16;
    if (1 != 4) {
        do {
            temp_f18_2 = phi_v0[1][1];
            temp_f14_2 = phi_v0[1][2];
            temp_v1 = phi_v1 + 1;
            temp_f16_2 = phi_v0[1][3];
            phi_v0[0][0] = phi_f12;
            temp_f12_3 = phi_v0[1][0] * scale;
            phi_v0[0][1] = phi_f18 * scale;
            phi_v0[0][2] = phi_f14 * scale;
            temp_v0 = phi_v0 + 0x10;
            temp_v0->unk_-4 = (f32) (phi_f16 * scale);
            phi_f12 = temp_f12_3;
            phi_v0 = temp_v0;
            phi_f18 = temp_f18_2;
            phi_f14 = temp_f14_2;
            phi_f16 = temp_f16_2;
            phi_v1 = temp_v1;
            phi_f12_2 = temp_f12_3;
            phi_v0_2 = temp_v0;
            phi_f18_2 = temp_f18_2;
            phi_f14_2 = temp_f14_2;
            phi_f16_2 = temp_f16_2;
        } while (temp_v1 != 4);
    }
    temp_v0_2 = phi_v0_2 + 0x10;
    temp_v0_2->unk_-10 = phi_f12_2;
    temp_v0_2->unk_-C = (f32) (phi_f18_2 * scale);
    temp_v0_2->unk_-8 = (f32) (phi_f14_2 * scale);
    temp_v0_2->unk_-4 = (f32) (phi_f16_2 * scale);
}

void guOrtho(Mtx *m, f32 l, f32 r, f32 b, f32 t, f32 n, f32 f, f32 scale) {
    ? sp28;

    guOrthoF((f32 [4][4]) (f32 (*)[4]) &sp28, l, r, b, t, n, f, scale);
    guMtxF2L((f32 [4][4]) (f32 (*)[4]) &sp28, m);
}
