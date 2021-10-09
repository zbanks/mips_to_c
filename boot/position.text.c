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
    mf->unk1C = 0.0f;
    temp_f12_2 = temp_f20 * sp40;
    mf->unk10 = (f32) (((temp_f12_2 * temp_f0_2) - (temp_f22 * sp3C)) * s);
    mf->unk14 = (f32) (((temp_f12_2 * sp3C) + (temp_f22 * temp_f0_2)) * s);
    mf->unk18 = (f32) (temp_f20 * sp34 * s);
    mf->unk2C = 0.0f;
    temp_f12_3 = temp_f22 * sp40;
    mf->unk20 = (f32) (((temp_f12_3 * temp_f0_2) + (temp_f20 * sp3C)) * s);
    mf->unk24 = (f32) (((temp_f12_3 * sp3C) - (temp_f20 * temp_f0_2)) * s);
    mf->unk28 = (f32) (temp_f22 * sp34 * s);
    mf->unk30 = x;
    mf->unk34 = y;
    mf->unk3C = 1.0f;
    mf->unk38 = z;
}

void guPosition(Mtx *m, f32 r, f32 p, f32 h, f32 s, f32 x, f32 y, f32 z) {
    f32 sp28[4];

    guPositionF((f32 [4][4]) sp28, r, p, h, s, x, y, z);
    guMtxF2L((f32 [4][4]) (f32 (*)[4]) &sp28[0], m);
}

