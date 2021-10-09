

void guLookAtF(f32 (*mf)[4], f32 xEye, f32 yEye, f32 zEye, f32 xAt, f32 yAt, f32 zAt, f32 xUp, f32 yUp, f32 zUp) {
    f32 sp68;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;

    guMtxIdentF((f32 [4][4]) mf);
    temp_f2 = xAt - xEye;
    temp_f12 = yAt - yEye;
    temp_f14 = zAt - zEye;
    temp_f16 = (f32) (-1.0 / (f64) sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14)));
    temp_f28 = temp_f2 * temp_f16;
    temp_f10 = temp_f14 * temp_f16;
    sp54 = temp_f12 * temp_f16;
    sp50 = temp_f10;
    sp68 = sp50;
    sp4C = (yUp * sp50) - (zUp * sp54);
    temp_f24 = (zUp * temp_f28) - (xUp * sp50);
    sp50 = temp_f24;
    temp_f26 = (xUp * sp54) - (yUp * temp_f28);
    sp58 = temp_f26;
    temp_f20 = (f32) (1.0 / (f64) sqrtf((sp4C * sp4C) + (temp_f24 * temp_f24) + (temp_f26 * temp_f26)));
    temp_f22 = sp4C * temp_f20;
    temp_f24_2 = temp_f24 * temp_f20;
    temp_f26_2 = temp_f26 * temp_f20;
    temp_f2_2 = (sp54 * temp_f26_2) - (sp68 * temp_f24_2);
    temp_f12_2 = (sp68 * temp_f22) - (temp_f28 * temp_f26_2);
    temp_f14_2 = (temp_f28 * temp_f24_2) - (sp54 * temp_f22);
    temp_f20_2 = (f32) (1.0 / (f64) sqrtf((temp_f2_2 * temp_f2_2) + (temp_f12_2 * temp_f12_2) + (temp_f14_2 * temp_f14_2)));
    xUp = temp_f2_2 * temp_f20_2;
    mf[0][0] = temp_f22;
    mf->unk10 = temp_f24_2;
    mf->unk20 = temp_f26_2;
    temp_f0 = temp_f12_2 * temp_f20_2;
    temp_f2_3 = temp_f14_2 * temp_f20_2;
    mf->unk30 = (f32) -((xEye * temp_f22) + (yEye * temp_f24_2) + (zEye * temp_f26_2));
    mf->unk14 = temp_f0;
    mf->unk24 = temp_f2_3;
    mf[0][2] = temp_f28;
    mf->unk18 = sp54;
    mf[0][1] = xUp;
    mf->unk28 = sp68;
    mf[0][3] = 0.0f;
    mf->unk1C = 0.0f;
    mf->unk2C = 0.0f;
    mf->unk34 = (f32) -((xEye * xUp) + (yEye * temp_f0) + (zEye * temp_f2_3));
    mf->unk3C = 1.0f;
    mf->unk38 = (f32) -((xEye * temp_f28) + (yEye * sp54) + (zEye * sp68));
}

void guLookAt(Mtx *m, f32 xEye, f32 yEye, f32 zEye, f32 xAt, f32 yAt, f32 zAt, f32 xUp, f32 yUp, f32 zUp) {
    f32 sp30[4];

    guLookAtF((f32 [4][4]) sp30, xEye, yEye, zEye, xAt, yAt, zAt, xUp, yUp, zUp);
    guMtxF2L((f32 [4][4]) (f32 (*)[4]) &sp30[0], m);
}

