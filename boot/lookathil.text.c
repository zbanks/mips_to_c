

void guLookAtHiliteF(f32 (*mf)[4], LookAt *l, Hilite *h, f32 xEye, f32 yEye, f32 zEye, f32 xAt, f32 yAt, f32 zAt, f32 xUp, f32 yUp, f32 zUp, f32 xl1, f32 yl1, f32 zl1, f32 xl2, f32 yl2, f32 zl2, s32 twidth, s32 theight) {
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp40;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    f32 temp_f12_6;
    f32 temp_f12_7;
    f32 temp_f12_8;
    f32 temp_f12_9;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f16_4;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f18_3;
    f32 temp_f18_4;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f6_4;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f8_3;
    f32 temp_f8_4;
    f32 temp_f8_5;
    f64 temp_f14_3;
    f64 temp_f14_4;
    f32 phi_f0;
    f32 phi_f0_2;
    f32 phi_f0_3;
    f32 phi_f0_4;
    f32 phi_f0_5;
    f32 phi_f0_6;

    guMtxIdentF((f32 [4][4]) mf);
    temp_f12 = xAt - xEye;
    temp_f14 = yAt - yEye;
    temp_f16 = zAt - zEye;
    temp_f18 = (f32) (-1.0 / (f64) sqrtf((temp_f12 * temp_f12) + (temp_f14 * temp_f14) + (temp_f16 * temp_f16)));
    sp54 = temp_f12 * temp_f18;
    sp88 = sp54;
    sp50 = temp_f14 * temp_f18;
    sp4C = temp_f16 * temp_f18;
    sp84 = sp50;
    sp80 = sp4C;
    temp_f8 = (yUp * sp4C) - (zUp * sp50);
    sp48 = temp_f8;
    temp_f8_2 = (zUp * sp54) - (xUp * sp4C);
    sp4C = temp_f8_2;
    sp54 = (xUp * sp50) - (yUp * sp54);
    temp_f2 = (f32) (1.0 / (f64) sqrtf((temp_f8 * sp48) + (sp4C * temp_f8_2) + (sp54 * sp54)));
    temp_f24 = sp48 * temp_f2;
    temp_f26 = sp4C * temp_f2;
    temp_f28 = sp54 * temp_f2;
    temp_f14_2 = (sp84 * temp_f28) - (sp80 * temp_f26);
    temp_f16_2 = (sp80 * temp_f24) - (sp88 * temp_f28);
    temp_f18_2 = (sp88 * temp_f26) - (sp50 * temp_f24);
    temp_f2_2 = (f32) (1.0 / (f64) sqrtf((temp_f14_2 * temp_f14_2) + (temp_f16_2 * temp_f16_2) + (temp_f18_2 * temp_f18_2)));
    temp_f10 = temp_f16_2 * temp_f2_2;
    xUp = temp_f14_2 * temp_f2_2;
    yUp = temp_f10;
    zUp = temp_f18_2 * temp_f2_2;
    temp_f2_3 = (f32) (1.0 / (f64) sqrtf((xl1 * xl1) + (yl1 * yl1) + (zl1 * zl1)));
    temp_f10_2 = yl1 * temp_f2_3;
    temp_f6 = zl1 * temp_f2_3;
    xl1 *= temp_f2_3;
    yl1 = temp_f10_2;
    temp_f2_4 = xl1 + sp88;
    zl1 = temp_f6;
    temp_f8_3 = temp_f10_2 + sp84;
    sp50 = temp_f8_3;
    temp_f6_2 = zl1 + sp4C;
    sp4C = temp_f6_2;
    temp_f14_3 = (f64) sqrtf((temp_f2_4 * temp_f2_4) + (temp_f8_3 * sp50) + (sp4C * temp_f6_2));
    if (temp_f14_3 > 0.1) {
        temp_f12_2 = (f32) (1.0 / temp_f14_3);
        temp_f16_3 = temp_f2_4 * temp_f12_2;
        temp_f18_3 = sp50 * temp_f12_2;
        temp_f20 = sp4C * temp_f12_2;
        h->h.x1 = (s32) ((f32) (twidth * 4) + (((temp_f16_3 * temp_f24) + (temp_f18_3 * temp_f26) + (temp_f20 * temp_f28)) * (f32) twidth * 2.0f));
        h->h.y1 = (s32) ((f32) (theight * 4) + (((temp_f16_3 * xUp) + (temp_f18_3 * yUp) + (temp_f20 * zUp)) * (f32) theight * 2.0f));
    } else {
        h->h.x1 = twidth * 2;
        h->h.y1 = theight * 2;
    }
    sp40 = xl2;
    temp_f2_5 = (f32) (1.0 / (f64) sqrtf((xl2 * xl2) + (yl2 * yl2) + (zl2 * zl2)));
    temp_f4 = sp40 * temp_f2_5;
    temp_f8_4 = yl2 * temp_f2_5;
    temp_f6_3 = zl2 * temp_f2_5;
    xl2 = temp_f4;
    yl2 = temp_f8_4;
    temp_f4_2 = temp_f4 + sp88;
    zl2 = temp_f6_3;
    temp_f8_5 = temp_f8_4 + sp84;
    sp54 = temp_f4_2;
    temp_f6_4 = temp_f6_3 + sp80;
    sp50 = temp_f8_5;
    sp4C = temp_f6_4;
    sp40 = temp_f6_4;
    sp40 = temp_f4_2;
    temp_f14_4 = (f64) sqrtf((temp_f4_2 * temp_f4_2) + (temp_f8_5 * temp_f8_5) + (temp_f6_4 * temp_f6_4));
    if (temp_f14_4 > 0.1) {
        temp_f12_3 = (f32) (1.0 / temp_f14_4);
        temp_f16_4 = sp40 * temp_f12_3;
        temp_f18_4 = temp_f8_5 * temp_f12_3;
        temp_f20_2 = temp_f6_4 * temp_f12_3;
        h->h.x2 = (s32) ((f32) (twidth * 4) + (((temp_f16_4 * temp_f24) + (temp_f18_4 * temp_f26) + (temp_f20_2 * temp_f28)) * (f32) twidth * 2.0f));
        h->h.y2 = (s32) ((f32) (theight * 4) + (((temp_f16_4 * xUp) + (temp_f18_4 * yUp) + (temp_f20_2 * zUp)) * (f32) theight * 2.0f));
    } else {
        h->h.x2 = twidth * 2;
        h->h.y2 = theight * 2;
    }
    temp_f12_4 = temp_f24 * 128.0f;
    if (temp_f12_4 < 127.0f) {
        phi_f0 = temp_f12_4;
    } else {
        phi_f0 = 127.0f;
    }
    temp_f12_5 = temp_f26 * 128.0f;
    l->l[0].l.dir[0] = (s8) (s32) phi_f0;
    if (temp_f12_5 < 127.0f) {
        phi_f0_2 = temp_f12_5;
    } else {
        phi_f0_2 = 127.0f;
    }
    temp_f12_6 = temp_f28 * 128.0f;
    l->l[0].l.dir[1] = (s8) (s32) phi_f0_2;
    if (temp_f12_6 < 127.0f) {
        phi_f0_3 = temp_f12_6;
    } else {
        phi_f0_3 = 127.0f;
    }
    l->l[0].l.dir[2] = (s8) (s32) phi_f0_3;
    temp_f12_7 = xUp * 128.0f;
    if (temp_f12_7 < 127.0f) {
        phi_f0_4 = temp_f12_7;
    } else {
        phi_f0_4 = 127.0f;
    }
    l->l[1].l.dir[0] = (s8) (s32) phi_f0_4;
    temp_f12_8 = yUp * 128.0f;
    if (temp_f12_8 < 127.0f) {
        phi_f0_5 = temp_f12_8;
    } else {
        phi_f0_5 = 127.0f;
    }
    l->l[1].l.dir[1] = (s8) (s32) phi_f0_5;
    temp_f12_9 = zUp * 128.0f;
    if (temp_f12_9 < 127.0f) {
        phi_f0_6 = temp_f12_9;
    } else {
        phi_f0_6 = 127.0f;
    }
    l->l[0].l.col[0] = 0;
    l->l[0].l.col[1] = 0;
    l->l[0].l.col[2] = 0;
    l->l[0].l.pad1 = 0;
    l->l[0].l.colc[0] = 0;
    l->l[0].l.colc[1] = 0;
    l->l[0].l.colc[2] = 0;
    l->l[0].l.pad2 = 0;
    l->l[1].l.col[0] = 0;
    l->l[1].l.col[1] = 0x80;
    l->l[1].l.col[2] = 0;
    l->l[1].l.pad1 = 0;
    l->l[1].l.colc[0] = 0;
    l->l[1].l.colc[1] = 0x80;
    l->l[1].l.colc[2] = 0;
    l->l[1].l.pad2 = 0;
    l->l[1].l.dir[2] = (s8) (s32) phi_f0_6;
    mf[0][0] = temp_f24;
    mf->unk10 = temp_f26;
    mf->unk20 = temp_f28;
    mf->unk30 = (f32) -((xEye * temp_f24) + (yEye * temp_f26) + (zEye * temp_f28));
    mf[0][1] = xUp;
    mf->unk14 = yUp;
    mf->unk24 = zUp;
    mf->unk34 = (f32) -((xEye * xUp) + (yEye * yUp) + (zEye * zUp));
    mf[0][2] = sp88;
    mf->unk18 = sp84;
    mf->unk28 = sp80;
    mf[0][3] = 0.0f;
    mf->unk1C = 0.0f;
    mf->unk2C = 0.0f;
    mf->unk3C = 1.0f;
    mf->unk38 = (f32) -((xEye * sp88) + (yEye * sp84) + (zEye * sp80));
}

void guLookAtHilite(Mtx *m, LookAt *l, Hilite *h, f32 xEye, f32 yEye, f32 zEye, f32 xAt, f32 yAt, f32 zAt, f32 xUp, f32 yUp, f32 zUp, f32 xl1, f32 yl1, f32 zl1, f32 xl2, f32 yl2, f32 zl2, s32 twidth, s32 theight) {
    f32 sp58[4];

    guLookAtHiliteF((f32 [4][4]) sp58, l, h, xEye, yEye, zEye, xAt, yAt, zAt, xUp, yUp, zUp, xl1, yl1, zl1, xl2, yl2, zl2, twidth, theight);
    guMtxF2L((f32 [4][4]) (f32 (*)[4]) &sp58[0], m);
}

