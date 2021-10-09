

void guPerspectiveF(f32 (*mf)[4], u16 *perspNorm, f32 fovy, f32 aspect, f32 near, f32 far, f32 scale) {
    f32 sp20;
    f32 sp1C;
    f32 (*temp_v0)[4];
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f2;
    f64 temp_f0;
    s32 temp_v1;
    u32 temp_t8;
    void *temp_v0_2;
    f32 phi_f10;
    f32 (*phi_v0)[4];
    f32 phi_f16;
    f32 phi_f12;
    f32 phi_f14;
    s32 phi_v1;
    f32 phi_f10_2;
    f32 (*phi_v0_2)[4];
    f32 phi_f16_2;
    f32 phi_f12_2;
    f32 phi_f14_2;

    fovy = fovy;
    guMtxIdentF((f32 [4][4]) mf);
    temp_f12 = (f32) ((f64) fovy * 0.017453292222222222) / 2.0f;
    sp1C = temp_f12;
    sp20 = __cosf(temp_f12);
    temp_f2 = sp20 / __sinf(temp_f12);
    temp_f18 = near + far;
    temp_f12_2 = near - far;
    mf->unk2C = -1.0f;
    mf->unk14 = temp_f2;
    mf->unk28 = (f32) (temp_f18 / temp_f12_2);
    mf[0][0] = temp_f2 / aspect;
    mf->unk3C = 0.0f;
    mf->unk38 = (f32) ((2.0f * near * far) / temp_f12_2);
    temp_f16 = mf[0][1];
    temp_f10 = mf[0][0] * scale;
    temp_f12_3 = mf[0][2];
    temp_f14 = mf[0][3];
    phi_f10 = temp_f10;
    phi_v0 = mf;
    phi_f16 = temp_f16;
    phi_f12 = temp_f12_3;
    phi_f14 = temp_f14;
    phi_v1 = 1;
    phi_f10_2 = temp_f10;
    phi_v0_2 = mf;
    phi_f16_2 = temp_f16;
    phi_f12_2 = temp_f12_3;
    phi_f14_2 = temp_f14;
    if (1 != 4) {
        do {
            temp_f16_2 = phi_v0->unk14;
            temp_f12_4 = phi_v0->unk18;
            temp_v1 = phi_v1 + 1;
            temp_f14_2 = phi_v0->unk1C;
            phi_v0[0][0] = phi_f10;
            temp_f10_2 = phi_v0->unk10 * scale;
            phi_v0[0][1] = phi_f16 * scale;
            phi_v0[0][2] = phi_f12 * scale;
            temp_v0 = phi_v0 + 0x10;
            temp_v0->unk-4 = (f32) (phi_f14 * scale);
            phi_f10 = temp_f10_2;
            phi_v0 = temp_v0;
            phi_f16 = temp_f16_2;
            phi_f12 = temp_f12_4;
            phi_f14 = temp_f14_2;
            phi_v1 = temp_v1;
            phi_f10_2 = temp_f10_2;
            phi_v0_2 = temp_v0;
            phi_f16_2 = temp_f16_2;
            phi_f12_2 = temp_f12_4;
            phi_f14_2 = temp_f14_2;
        } while (temp_v1 != 4);
    }
    temp_v0_2 = phi_v0_2 + 0x10;
    temp_v0_2->unk-10 = phi_f10_2;
    temp_v0_2->unk-C = (f32) (phi_f16_2 * scale);
    temp_v0_2->unk-8 = (f32) (phi_f12_2 * scale);
    temp_v0_2->unk-4 = (f32) (phi_f14_2 * scale);
    if (perspNorm != 0) {
        temp_f0 = (f64) temp_f18;
        if (temp_f0 <= 2.0) {
            *perspNorm = 0xFFFF;
            return;
        }
        temp_t8 = (u32) (131072.0 / temp_f0);
        *perspNorm = (u16) temp_t8;
        if ((temp_t8 & 0xFFFF) <= 0) {
            *perspNorm = 1;
        }
        // Duplicate return node #7. Try simplifying control flow for better match
    }
}

void guPerspective(Mtx *m, u16 *perspNorm, f32 fovy, f32 aspect, f32 near, f32 far, f32 scale) {
    f32 sp28[4];

    guPerspectiveF((f32 [4][4]) sp28, perspNorm, fovy, aspect, near, far, scale);
    guMtxF2L((f32 [4][4]) (f32 (*)[4]) &sp28[0], m);
}

