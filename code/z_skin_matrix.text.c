void SkinMatrix_Clear(MtxF *arg0);                  /* static */
MtxF sMtxFClear = {
    {
        {1.0f, 0.0f, 0.0f, 0.0f},
        {0.0f, 1.0f, 0.0f, 0.0f},
        {0.0f, 0.0f, 1.0f, 0.0f},
        {0.0f, 0.0f, 0.0f, 1.0f},
    },
};



void SkinMatrix_Vec3fMtxFMultXYZW(MtxF *mf, Vec3f *src, Vec3f *xyzDest, f32 *wDest) {
    xyzDest->x = mf->mf[3][0] + ((src->x * mf->mf[0][0]) + (src->y * mf->mf[1][0]) + (src->z * mf->mf[2][0]));
    xyzDest->y = mf->mf[3][1] + ((src->x * mf->mf[0][1]) + (src->y * mf->mf[1][1]) + (src->z * mf->mf[2][1]));
    xyzDest->z = mf->mf[3][2] + ((src->x * mf->mf[0][2]) + (src->y * mf->mf[1][2]) + (src->z * mf->mf[2][2]));
    *wDest = mf->mf[3][3] + ((src->x * mf->mf[0][3]) + (src->y * mf->mf[1][3]) + (src->z * mf->mf[2][3]));
}

void SkinMatrix_Vec3fMtxFMultXYZ(MtxF *mf, Vec3f *src, Vec3f *dest) {
    dest->x = (src->x * mf->mf[0][0]) + (src->y * mf->mf[1][0]) + (src->z * mf->mf[2][0]) + mf->mf[3][0];
    dest->y = (src->x * mf->mf[0][1]) + (src->y * mf->mf[1][1]) + (src->z * mf->mf[2][1]) + mf->mf[3][1];
    dest->z = (src->x * mf->mf[0][2]) + (src->y * mf->mf[1][2]) + (src->z * mf->mf[2][2]) + mf->mf[3][2];
}

void SkinMatrix_MtxFMtxFMult(MtxF *mfB, MtxF *mfA, MtxF *dest) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f14_4;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;

    temp_f0 = mfB->mf[0][0];
    temp_f2 = mfB->mf[1][0];
    temp_f12 = mfB->mf[2][0];
    temp_f14 = mfB->mf[3][0];
    dest->mf[0][0] = (temp_f0 * mfA->mf[0][0]) + (temp_f2 * mfA->mf[0][1]) + (temp_f12 * mfA->mf[0][2]) + (temp_f14 * mfA->mf[0][3]);
    dest->mf[1][0] = (temp_f0 * mfA->mf[1][0]) + (temp_f2 * mfA->mf[1][1]) + (temp_f12 * mfA->mf[1][2]) + (temp_f14 * mfA->mf[1][3]);
    dest->mf[2][0] = (temp_f0 * mfA->mf[2][0]) + (temp_f2 * mfA->mf[2][1]) + (temp_f12 * mfA->mf[2][2]) + (temp_f14 * mfA->mf[2][3]);
    dest->mf[3][0] = (temp_f0 * mfA->mf[3][0]) + (temp_f2 * mfA->mf[3][1]) + (temp_f12 * mfA->mf[3][2]) + (temp_f14 * mfA->mf[3][3]);
    temp_f0_2 = mfB->mf[0][1];
    temp_f2_2 = mfB->mf[1][1];
    temp_f12_2 = mfB->mf[2][1];
    temp_f14_2 = mfB->mf[3][1];
    dest->mf[0][1] = (temp_f0_2 * mfA->mf[0][0]) + (temp_f2_2 * mfA->mf[0][1]) + (temp_f12_2 * mfA->mf[0][2]) + (temp_f14_2 * mfA->mf[0][3]);
    dest->mf[1][1] = (temp_f0_2 * mfA->mf[1][0]) + (temp_f2_2 * mfA->mf[1][1]) + (temp_f12_2 * mfA->mf[1][2]) + (temp_f14_2 * mfA->mf[1][3]);
    dest->mf[2][1] = (temp_f0_2 * mfA->mf[2][0]) + (temp_f2_2 * mfA->mf[2][1]) + (temp_f12_2 * mfA->mf[2][2]) + (temp_f14_2 * mfA->mf[2][3]);
    dest->mf[3][1] = (temp_f0_2 * mfA->mf[3][0]) + (temp_f2_2 * mfA->mf[3][1]) + (temp_f12_2 * mfA->mf[3][2]) + (temp_f14_2 * mfA->mf[3][3]);
    temp_f0_3 = mfB->mf[0][2];
    temp_f2_3 = mfB->mf[1][2];
    temp_f12_3 = mfB->mf[2][2];
    temp_f14_3 = mfB->mf[3][2];
    dest->mf[0][2] = (temp_f0_3 * mfA->mf[0][0]) + (temp_f2_3 * mfA->mf[0][1]) + (temp_f12_3 * mfA->mf[0][2]) + (temp_f14_3 * mfA->mf[0][3]);
    dest->mf[1][2] = (temp_f0_3 * mfA->mf[1][0]) + (temp_f2_3 * mfA->mf[1][1]) + (temp_f12_3 * mfA->mf[1][2]) + (temp_f14_3 * mfA->mf[1][3]);
    dest->mf[2][2] = (temp_f0_3 * mfA->mf[2][0]) + (temp_f2_3 * mfA->mf[2][1]) + (temp_f12_3 * mfA->mf[2][2]) + (temp_f14_3 * mfA->mf[2][3]);
    dest->mf[3][2] = (temp_f0_3 * mfA->mf[3][0]) + (temp_f2_3 * mfA->mf[3][1]) + (temp_f12_3 * mfA->mf[3][2]) + (temp_f14_3 * mfA->mf[3][3]);
    temp_f0_4 = mfB->mf[0][3];
    temp_f2_4 = mfB->mf[1][3];
    temp_f12_4 = mfB->mf[2][3];
    temp_f14_4 = mfB->mf[3][3];
    dest->mf[0][3] = (temp_f0_4 * mfA->mf[0][0]) + (temp_f2_4 * mfA->mf[0][1]) + (temp_f12_4 * mfA->mf[0][2]) + (temp_f14_4 * mfA->mf[0][3]);
    dest->mf[1][3] = (temp_f0_4 * mfA->mf[1][0]) + (temp_f2_4 * mfA->mf[1][1]) + (temp_f12_4 * mfA->mf[1][2]) + (temp_f14_4 * mfA->mf[1][3]);
    dest->mf[2][3] = (temp_f0_4 * mfA->mf[2][0]) + (temp_f2_4 * mfA->mf[2][1]) + (temp_f12_4 * mfA->mf[2][2]) + (temp_f14_4 * mfA->mf[2][3]);
    dest->mf[3][3] = (temp_f0_4 * mfA->mf[3][0]) + (temp_f2_4 * mfA->mf[3][1]) + (temp_f12_4 * mfA->mf[3][2]) + (temp_f14_4 * mfA->mf[3][3]);
}

void SkinMatrix_GetClear(MtxF **mf) {
    *mf = &sMtxFClear;
}

void SkinMatrix_Clear(MtxF *arg0) {
    arg0->mf[0][0] = 1.0f;
    arg0->mf[0][1] = 0.0f;
    arg0->mf[0][2] = 0.0f;
    arg0->mf[0][3] = 0.0f;
    arg0->mf[1][0] = 0.0f;
    arg0->mf[1][1] = 1.0f;
    arg0->mf[1][2] = 0.0f;
    arg0->mf[1][3] = 0.0f;
    arg0->mf[2][0] = 0.0f;
    arg0->mf[2][1] = 0.0f;
    arg0->mf[2][2] = 1.0f;
    arg0->mf[2][3] = 0.0f;
    arg0->mf[3][0] = 0.0f;
    arg0->mf[3][1] = 0.0f;
    arg0->mf[3][2] = 0.0f;
    arg0->mf[3][3] = 1.0f;
}

void SkinMatrix_MtxFCopy(MtxF *src, MtxF *dest) {
    dest->mf[0][0] = src->mf[0][0];
    dest->mf[0][1] = src->mf[0][1];
    dest->mf[0][2] = src->mf[0][2];
    dest->mf[0][3] = src->mf[0][3];
    dest->mf[1][0] = src->mf[1][0];
    dest->mf[1][1] = src->mf[1][1];
    dest->mf[1][2] = src->mf[1][2];
    dest->mf[1][3] = src->mf[1][3];
    dest->mf[2][0] = src->mf[2][0];
    dest->mf[2][1] = src->mf[2][1];
    dest->mf[2][2] = src->mf[2][2];
    dest->mf[2][3] = src->mf[2][3];
    dest->mf[3][0] = src->mf[3][0];
    dest->mf[3][1] = src->mf[3][1];
    dest->mf[3][2] = src->mf[3][2];
    dest->mf[3][3] = src->mf[3][3];
}

s32 SkinMatrix_Invert(MtxF *src, MtxF *dest) {
    MtxF sp78;
    f32 *temp_a0;
    f32 *temp_a1;
    f32 *temp_a3;
    f32 *temp_v0;
    f32 *temp_v0_2;
    f32 *temp_v1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_s0;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t2;
    void *temp_t3;
    void *temp_t3_2;
    s32 phi_s0;
    s32 phi_t1;
    s32 phi_t1_2;
    f32 *phi_v1;
    f32 *phi_v0;
    f32 *phi_a3;
    f32 *phi_a2;
    s32 phi_t2;
    s32 phi_t1_3;

    SkinMatrix_MtxFCopy(src, &sp78);
    SkinMatrix_Clear(dest);
    phi_s0 = 0;
loop_1:
    phi_t1 = phi_s0;
    phi_t1_2 = phi_s0;
    if (phi_s0 < 4) {
        temp_t3 = &sp78 + (phi_s0 * 0x10);
        if (fabsf(*(temp_t3 + (phi_s0 * 4))) < 0.0005f) {
loop_3:
            temp_t1 = phi_t1 + 1;
            phi_t1 = temp_t1;
            phi_t1_2 = temp_t1;
            if (temp_t1 < 4) {
                if (fabsf(*(temp_t3 + (temp_t1 * 4))) < 0.0005f) {
                    goto loop_3;
                }
            }
        }
    }
    if (phi_t1_2 == 4) {
        return 2;
    }
    temp_t3_2 = &sp78 + (phi_s0 * 0x10);
    temp_a0 = &sp78.mf[0][phi_s0];
    temp_a1 = &dest->mf[0][phi_s0];
    if (phi_t1_2 != phi_s0) {
        phi_v1 = &sp78.mf[0][phi_s0];
        phi_v0 = &sp78.mf[0][phi_t1_2];
        phi_a3 = &dest->mf[0][phi_s0];
        phi_a2 = &dest->mf[0][phi_t1_2];
        phi_t2 = 0;
        do {
            temp_f0 = phi_v0->unk0;
            temp_t2 = phi_t2 + 2;
            phi_v0->unk0 = phi_v1->unk0;
            phi_v1->unk0 = temp_f0;
            temp_f2 = phi_a2->unk0;
            phi_a2->unk0 = phi_a3->unk0;
            phi_a3->unk0 = temp_f2;
            temp_v0 = phi_v0 + 0x20;
            temp_v0->unk-10 = (f32) phi_v1->unk10;
            phi_v1->unk10 = (f32) phi_v0->unk10;
            temp_f2_2 = phi_a2->unk10;
            phi_a2->unk10 = (f32) phi_a3->unk10;
            temp_a3 = phi_a3 + 0x20;
            temp_a3->unk-10 = temp_f2_2;
            phi_v1 += 0x20;
            phi_v0 = temp_v0;
            phi_a3 = temp_a3;
            phi_a2 += 0x20;
            phi_t2 = temp_t2;
        } while (temp_t2 != 4);
    }
    temp_f0_2 = *(temp_t3_2 + (phi_s0 * 4));
    temp_a0->unk0 /= temp_f0_2;
    temp_a1->unk0 /= temp_f0_2;
    temp_a0->unk10 = (f32) (temp_a0->unk10 / temp_f0_2);
    temp_a1->unk10 = (f32) (temp_a1->unk10 / temp_f0_2);
    temp_a0->unk20 = (f32) (temp_a0->unk20 / temp_f0_2);
    temp_a1->unk20 = (f32) (temp_a1->unk20 / temp_f0_2);
    temp_a0->unk30 = (f32) (temp_a0->unk30 / temp_f0_2);
    temp_a1->unk30 = (f32) (temp_a1->unk30 / temp_f0_2);
    phi_t1_3 = 0;
    do {
        if (phi_t1_3 != phi_s0) {
            temp_f0_3 = *(temp_t3_2 + (phi_t1_3 * 4));
            temp_v0_2 = &sp78.mf[0][phi_t1_3];
            temp_v1 = &dest->mf[0][phi_t1_3];
            temp_v0_2->unk0 -= temp_a0->unk0 * temp_f0_3;
            temp_v1->unk0 -= temp_a1->unk0 * temp_f0_3;
            temp_v0_2->unk10 = (f32) (temp_v0_2->unk10 - (temp_a0->unk10 * temp_f0_3));
            temp_v1->unk10 = (f32) (temp_v1->unk10 - (temp_a1->unk10 * temp_f0_3));
            temp_v0_2->unk20 = (f32) (temp_v0_2->unk20 - (temp_a0->unk20 * temp_f0_3));
            temp_v1->unk20 = (f32) (temp_v1->unk20 - (temp_a1->unk20 * temp_f0_3));
            temp_v0_2->unk30 = (f32) (temp_v0_2->unk30 - (temp_a0->unk30 * temp_f0_3));
            temp_v1->unk30 = (f32) (temp_v1->unk30 - (temp_a1->unk30 * temp_f0_3));
        }
        temp_t1_2 = phi_t1_3 + 1;
        phi_t1_3 = temp_t1_2;
    } while (temp_t1_2 != 4);
    temp_s0 = phi_s0 + 1;
    phi_s0 = temp_s0;
    if (temp_s0 == 4) {
        return 0;
    }
    goto loop_1;
}

void SkinMatrix_SetScale(MtxF *mf, f32 x, f32 y, f32 z) {
    mf->mf[0][1] = 0.0f;
    mf->mf[0][2] = 0.0f;
    mf->mf[0][3] = 0.0f;
    mf->mf[1][0] = 0.0f;
    mf->mf[1][2] = 0.0f;
    mf->mf[1][3] = 0.0f;
    mf->mf[2][0] = 0.0f;
    mf->mf[2][1] = 0.0f;
    mf->mf[2][3] = 0.0f;
    mf->mf[3][0] = 0.0f;
    mf->mf[3][1] = 0.0f;
    mf->mf[3][2] = 0.0f;
    mf->mf[0][0] = x;
    mf->mf[1][1] = y;
    mf->mf[3][3] = 1.0f;
    mf->mf[2][2] = z;
}

void SkinMatrix_SetRotateRPY(MtxF *mf, s16 roll, s16 pitch, s16 yaw) {
    f32 sp30;
    f32 sp2C;
    f32 sp24;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f18;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f8;

    sp30 = Math_SinS(yaw);
    temp_f0 = Math_CosS(yaw);
    temp_f12 = temp_f0;
    mf->mf[1][1] = temp_f0;
    mf->mf[1][0] = -sp30;
    mf->mf[2][3] = 0.0f;
    mf->mf[1][3] = 0.0f;
    mf->mf[0][3] = 0.0f;
    mf->mf[3][2] = 0.0f;
    mf->mf[3][1] = 0.0f;
    mf->mf[3][0] = 0.0f;
    mf->mf[3][3] = 1.0f;
    if (pitch != 0) {
        sp2C = temp_f12;
        sp30 = sp30;
        sp24 = Math_SinS(pitch);
        temp_f0_2 = Math_CosS(pitch);
        temp_f6 = temp_f12 * temp_f0_2;
        mf->mf[0][2] = -sp24;
        mf->mf[2][2] = temp_f0_2;
        mf->mf[0][0] = temp_f6;
        mf->mf[2][0] = temp_f12 * sp24;
        mf->mf[0][1] = sp30 * temp_f0_2;
        mf->mf[2][1] = sp30 * sp24;
    } else {
        mf->mf[0][0] = temp_f0;
        mf->mf[0][1] = sp30;
        mf->mf[2][1] = 0.0f;
        mf->mf[2][0] = 0.0f;
        mf->mf[0][2] = 0.0f;
        mf->mf[2][2] = 1.0f;
    }
    if (roll != 0) {
        sp24 = Math_SinS(roll);
        temp_f0_3 = Math_CosS(roll);
        temp_f14 = mf->mf[1][0];
        temp_f12_2 = mf->mf[2][0];
        temp_f18 = temp_f12_2 * temp_f0_3;
        temp_f12_3 = mf->mf[2][1];
        temp_f4 = temp_f14 * sp24;
        temp_f14_2 = mf->mf[1][1];
        temp_f8 = temp_f14_2 * temp_f0_3;
        mf->mf[1][0] = (temp_f14 * temp_f0_3) + (temp_f12_2 * sp24);
        temp_f12_4 = mf->mf[2][2];
        mf->mf[2][0] = temp_f18 - temp_f4;
        temp_f6_2 = temp_f14_2 * sp24;
        mf->mf[1][1] = temp_f8 + (temp_f12_3 * sp24);
        mf->mf[1][2] = temp_f12_4 * sp24;
        mf->mf[2][1] = (temp_f12_3 * temp_f0_3) - temp_f6_2;
        mf->mf[2][2] = temp_f12_4 * temp_f0_3;
        return;
    }
    mf->mf[1][2] = 0.0f;
}

void SkinMatrix_SetRotateYRP(MtxF *mf, s16 yaw, s16 roll, s16 pitch) {
    f32 sp30;
    f32 sp2C;
    f32 sp24;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f18;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f8;

    sp30 = Math_SinS(roll);
    temp_f0 = Math_CosS(roll);
    temp_f12 = temp_f0;
    mf->mf[0][0] = temp_f0;
    mf->mf[0][2] = -sp30;
    mf->mf[2][3] = 0.0f;
    mf->mf[1][3] = 0.0f;
    mf->mf[0][3] = 0.0f;
    mf->mf[3][2] = 0.0f;
    mf->mf[3][1] = 0.0f;
    mf->mf[3][0] = 0.0f;
    mf->mf[3][3] = 1.0f;
    if (yaw != 0) {
        sp2C = temp_f12;
        sp30 = sp30;
        sp24 = Math_SinS(yaw);
        temp_f0_2 = Math_CosS(yaw);
        temp_f6 = temp_f12 * temp_f0_2;
        mf->mf[2][1] = -sp24;
        mf->mf[1][1] = temp_f0_2;
        mf->mf[2][2] = temp_f6;
        mf->mf[1][2] = temp_f12 * sp24;
        mf->mf[2][0] = sp30 * temp_f0_2;
        mf->mf[1][0] = sp30 * sp24;
    } else {
        mf->mf[2][2] = temp_f0;
        mf->mf[2][0] = sp30;
        mf->mf[2][1] = 0.0f;
        mf->mf[1][2] = 0.0f;
        mf->mf[1][0] = 0.0f;
        mf->mf[1][1] = 1.0f;
    }
    if (pitch != 0) {
        sp24 = Math_SinS(pitch);
        temp_f0_3 = Math_CosS(pitch);
        temp_f14 = mf->mf[0][0];
        temp_f12_2 = mf->mf[1][0];
        temp_f18 = temp_f12_2 * temp_f0_3;
        temp_f12_3 = mf->mf[1][2];
        temp_f4 = temp_f14 * sp24;
        temp_f14_2 = mf->mf[0][2];
        temp_f8 = temp_f14_2 * temp_f0_3;
        mf->mf[0][0] = (temp_f14 * temp_f0_3) + (temp_f12_2 * sp24);
        temp_f12_4 = mf->mf[1][1];
        mf->mf[1][0] = temp_f18 - temp_f4;
        temp_f6_2 = temp_f14_2 * sp24;
        mf->mf[0][2] = temp_f8 + (temp_f12_3 * sp24);
        mf->mf[0][1] = temp_f12_4 * sp24;
        mf->mf[1][2] = (temp_f12_3 * temp_f0_3) - temp_f6_2;
        mf->mf[1][1] = temp_f12_4 * temp_f0_3;
        return;
    }
    mf->mf[0][1] = 0.0f;
}

void SkinMatrix_SetTranslate(MtxF *mf, f32 x, f32 y, f32 z) {
    mf->mf[0][1] = 0.0f;
    mf->mf[0][2] = 0.0f;
    mf->mf[0][3] = 0.0f;
    mf->mf[1][0] = 0.0f;
    mf->mf[1][2] = 0.0f;
    mf->mf[1][3] = 0.0f;
    mf->mf[2][0] = 0.0f;
    mf->mf[2][1] = 0.0f;
    mf->mf[2][3] = 0.0f;
    mf->mf[0][0] = 1.0f;
    mf->mf[1][1] = 1.0f;
    mf->mf[2][2] = 1.0f;
    mf->mf[3][3] = 1.0f;
    mf->mf[3][0] = x;
    mf->mf[3][1] = y;
    mf->mf[3][2] = z;
}

void SkinMatrix_SetScaleRotateRPYTranslate(MtxF *mf, f32 scaleX, f32 scaleY, f32 scaleZ, s16 roll, s16 pitch, s16 yaw, f32 dx, f32 dy, f32 dz) {
    MtxF sp58;
    MtxF sp18;

    SkinMatrix_SetTranslate(mf, dx, dy, dz);
    SkinMatrix_SetRotateRPY(&sp58, roll, pitch, yaw);
    SkinMatrix_MtxFMtxFMult(mf, &sp58, &sp18);
    SkinMatrix_SetScale(&sp58, scaleX, scaleY, scaleZ);
    SkinMatrix_MtxFMtxFMult(&sp18, &sp58, mf);
}

void SkinMatrix_SetScaleRotateYRPTranslate(MtxF *mf, f32 scaleX, f32 scaleY, f32 scaleZ, s16 yaw, s16 roll, s16 pitch, f32 dx, f32 dy, f32 dz) {
    MtxF sp58;
    MtxF sp18;

    SkinMatrix_SetTranslate(mf, dx, dy, dz);
    SkinMatrix_SetRotateYRP(&sp58, yaw, roll, pitch);
    SkinMatrix_MtxFMtxFMult(mf, &sp58, &sp18);
    SkinMatrix_SetScale(&sp58, scaleX, scaleY, scaleZ);
    SkinMatrix_MtxFMtxFMult(&sp18, &sp58, mf);
}

void SkinMatrix_SetRotateRPYTranslate(MtxF *mf, s16 roll, s16 pitch, s16 yaw, f32 dx, f32 dy, f32 dz) {
    MtxF sp58;
    MtxF sp18;

    SkinMatrix_SetTranslate(&sp18, dx, dy, dz);
    SkinMatrix_SetRotateRPY(&sp58, roll, pitch, yaw);
    SkinMatrix_MtxFMtxFMult(&sp18, &sp58, mf);
}

void SkinMatrix_Vec3fToVec3s(Vec3f *src, Vec3s *dest) {
    dest->x = (s16) (s32) src->x;
    dest->y = (s16) (s32) src->y;
    dest->z = (s16) (s32) src->z;
}

void SkinMatrix_Vec3sToVec3f(Vec3s *src, Vec3f *dest) {
    dest->x = (f32) src->x;
    dest->y = (f32) src->y;
    dest->z = (f32) src->z;
}

void SkinMatrix_MtxFToMtx(MtxF *src, Mtx *dest) {
    s32 *temp_v0;
    s32 temp_f18;
    s32 temp_f18_2;
    s32 temp_f18_3;
    s32 temp_f18_4;
    s32 temp_f18_5;
    s32 temp_f18_6;
    s32 temp_f18_7;
    s32 temp_f18_8;
    s32 temp_f8;
    s32 temp_f8_2;
    s32 temp_f8_3;
    s32 temp_f8_4;
    s32 temp_f8_5;
    s32 temp_f8_6;
    s32 temp_f8_7;
    s32 temp_f8_8;

    temp_v0 = dest->m[2];
    temp_f8 = (s32) (src->mf[0][0] * 65536.0f);
    dest->unk0 = (s16) (temp_f8 >> 0x10);
    dest->unk20 = (s16) temp_f8;
    temp_f18 = (s32) (src->mf[0][1] * 65536.0f);
    dest->unk2 = (s16) (temp_f18 >> 0x10);
    dest->unk22 = (s16) temp_f18;
    temp_f8_2 = (s32) (src->mf[0][2] * 65536.0f);
    dest->unk4 = (s16) (temp_f8_2 >> 0x10);
    dest->unk24 = (s16) temp_f8_2;
    temp_f18_2 = (s32) (src->mf[0][3] * 65536.0f);
    dest->unk6 = (s16) (temp_f18_2 >> 0x10);
    dest->unk26 = (s16) temp_f18_2;
    temp_f8_3 = (s32) (src->mf[1][0] * 65536.0f);
    dest->unk8 = (s16) (temp_f8_3 >> 0x10);
    dest->unk28 = (s16) temp_f8_3;
    temp_f18_3 = (s32) (src->mf[1][1] * 65536.0f);
    dest->unkA = (s16) (temp_f18_3 >> 0x10);
    dest->unk2A = (s16) temp_f18_3;
    temp_f8_4 = (s32) (src->mf[1][2] * 65536.0f);
    dest->unkC = (s16) (temp_f8_4 >> 0x10);
    dest->unk2C = (s16) temp_f8_4;
    temp_f18_4 = (s32) (src->mf[1][3] * 65536.0f);
    dest->unkE = (s16) (temp_f18_4 >> 0x10);
    dest->unk2E = (s16) temp_f18_4;
    temp_f8_5 = (s32) (src->mf[2][0] * 65536.0f);
    dest->unk10 = (s16) (temp_f8_5 >> 0x10);
    dest->unk30 = (s16) temp_f8_5;
    temp_f18_5 = (s32) (src->mf[2][1] * 65536.0f);
    dest->unk12 = (s16) (temp_f18_5 >> 0x10);
    temp_v0->unk12 = (s16) temp_f18_5;
    temp_f8_6 = (s32) (src->mf[2][2] * 65536.0f);
    dest->unk14 = (s16) (temp_f8_6 >> 0x10);
    temp_v0->unk14 = (s16) temp_f8_6;
    temp_f18_6 = (s32) (src->mf[2][3] * 65536.0f);
    dest->unk16 = (s16) (temp_f18_6 >> 0x10);
    temp_v0->unk16 = (s16) temp_f18_6;
    temp_f8_7 = (s32) (src->mf[3][0] * 65536.0f);
    dest->unk18 = (s16) (temp_f8_7 >> 0x10);
    temp_v0->unk18 = (s16) temp_f8_7;
    temp_f18_7 = (s32) (src->mf[3][1] * 65536.0f);
    dest->unk1A = (s16) (temp_f18_7 >> 0x10);
    temp_v0->unk1A = (s16) temp_f18_7;
    temp_f8_8 = (s32) (src->mf[3][2] * 65536.0f);
    dest->unk1C = (s16) (temp_f8_8 >> 0x10);
    temp_v0->unk1C = (s16) temp_f8_8;
    temp_f18_8 = (s32) (src->mf[3][3] * 65536.0f);
    dest->unk1E = (s16) (temp_f18_8 >> 0x10);
    temp_v0->unk1E = (s16) temp_f18_8;
}

Mtx *SkinMatrix_MtxFToNewMtx(GraphicsContext *gfxCtx, MtxF *src) {
    Gfx *sp18;
    Gfx *temp_a2;

    temp_a2 = gfxCtx->polyOpa.d - 0x40;
    gfxCtx->polyOpa.d = temp_a2;
    if (temp_a2 == 0) {
        return NULL;
    }
    sp18 = temp_a2;
    SkinMatrix_MtxFToMtx(src, (Mtx *) temp_a2);
    return (Mtx *) sp18;
}

void SkinMatrix_SetRotateAroundVec(MtxF *mf, s16 a, f32 x, f32 y, f32 z) {
    f32 sp64;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp38;
    f32 sp34;
    f32 sp2C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f6;

    mf = mf;
    sp64 = Math_SinS(a);
    temp_f0 = Math_CosS(a);
    temp_f12 = x * y;
    temp_f14 = x * z;
    sp50 = temp_f12;
    temp_f2 = x * x;
    sp4C = y * z;
    sp48 = temp_f14;
    temp_f16 = 1.0f - temp_f0;
    mf->mf[0][0] = ((1.0f - temp_f2) * temp_f0) + temp_f2;
    temp_f6 = z * sp64;
    sp38 = temp_f6;
    mf->mf[0][1] = (temp_f16 * temp_f12) + temp_f6;
    sp34 = y * sp64;
    mf->mf[0][3] = 0.0f;
    mf->mf[0][2] = (temp_f16 * temp_f14) - sp34;
    temp_f2_2 = y * y;
    mf->mf[1][0] = (temp_f16 * sp50) - temp_f6;
    mf->mf[1][1] = ((1.0f - temp_f2_2) * temp_f0) + temp_f2_2;
    sp2C = temp_f16 * sp4C;
    temp_f14_2 = x * sp64;
    mf->mf[1][3] = 0.0f;
    mf->mf[1][2] = sp2C + temp_f14_2;
    mf->mf[2][0] = (temp_f16 * sp48) + sp34;
    mf->mf[2][3] = 0.0f;
    temp_f2_3 = z * z;
    mf->mf[3][0] = 0.0f;
    mf->mf[3][1] = 0.0f;
    mf->mf[3][2] = 0.0f;
    mf->mf[2][1] = sp2C - temp_f14_2;
    mf->mf[3][3] = 1.0f;
    mf->mf[2][2] = ((1.0f - temp_f2_3) * temp_f0) + temp_f2_3;
}

void SkinMatrix_SetXRotation(MtxF *mf, s16 a) {
    f32 sp1C;
    s16 temp_a0;
    f32 phi_f12;
    f32 phi_f2;

    if (a != 0) {
        temp_a0 = a;
        a = a;
        mf = mf;
        sp1C = Math_SinS(temp_a0);
        phi_f12 = Math_CosS(a);
        phi_f2 = sp1C;
    } else {
        phi_f12 = 1.0f;
        phi_f2 = 0.0f;
    }
    mf->mf[0][1] = 0.0f;
    mf->mf[0][2] = 0.0f;
    mf->mf[0][3] = 0.0f;
    mf->mf[1][0] = 0.0f;
    mf->mf[1][3] = 0.0f;
    mf->mf[2][0] = 0.0f;
    mf->mf[2][3] = 0.0f;
    mf->mf[3][0] = 0.0f;
    mf->mf[3][1] = 0.0f;
    mf->mf[3][2] = 0.0f;
    mf->mf[0][0] = 1.0f;
    mf->mf[3][3] = 1.0f;
    mf->mf[1][1] = phi_f12;
    mf->mf[2][2] = phi_f12;
    mf->mf[1][2] = phi_f2;
    mf->mf[2][1] = -phi_f2;
}

void SkinMatrix_MulXRotation(MtxF *mf, s16 a) {
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f16_4;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f4;
    s16 temp_a0;

    if (a != 0) {
        temp_a0 = a;
        a = a;
        mf = mf;
        sp1C = Math_SinS(temp_a0);
        temp_f0 = Math_CosS(a);
        temp_f2 = mf->mf[1][0];
        temp_f12 = mf->mf[2][0];
        temp_f10 = temp_f12 * temp_f0;
        temp_f12_2 = mf->mf[2][1];
        temp_f16 = temp_f2 * sp1C;
        temp_f2_2 = mf->mf[1][1];
        temp_f4 = temp_f2_2 * temp_f0;
        mf->mf[1][0] = (temp_f2 * temp_f0) + (temp_f12 * sp1C);
        temp_f12_3 = mf->mf[2][2];
        temp_f16_2 = temp_f2_2 * sp1C;
        temp_f2_3 = mf->mf[1][2];
        mf->mf[2][0] = temp_f10 - temp_f16;
        mf->mf[1][1] = temp_f4 + (temp_f12_2 * sp1C);
        temp_f12_4 = mf->mf[2][3];
        temp_f16_3 = temp_f2_3 * sp1C;
        temp_f2_4 = mf->mf[1][3];
        mf->mf[2][1] = (temp_f12_2 * temp_f0) - temp_f16_2;
        mf->mf[1][2] = (temp_f2_3 * temp_f0) + (temp_f12_3 * sp1C);
        temp_f16_4 = temp_f2_4 * sp1C;
        mf->mf[2][2] = (temp_f12_3 * temp_f0) - temp_f16_3;
        mf->mf[1][3] = (temp_f2_4 * temp_f0) + (temp_f12_4 * sp1C);
        mf->mf[2][3] = (temp_f12_4 * temp_f0) - temp_f16_4;
    }
}

void SkinMatrix_SetYRotation(MtxF *mf, s16 a) {
    f32 sp1C;
    s16 temp_a0;
    f32 phi_f12;
    f32 phi_f2;

    if (a != 0) {
        temp_a0 = a;
        a = a;
        mf = mf;
        sp1C = Math_SinS(temp_a0);
        phi_f12 = Math_CosS(a);
        phi_f2 = sp1C;
    } else {
        phi_f12 = 1.0f;
        phi_f2 = 0.0f;
    }
    mf->mf[0][1] = 0.0f;
    mf->mf[0][3] = 0.0f;
    mf->mf[1][0] = 0.0f;
    mf->mf[1][2] = 0.0f;
    mf->mf[1][3] = 0.0f;
    mf->mf[2][1] = 0.0f;
    mf->mf[2][3] = 0.0f;
    mf->mf[3][0] = 0.0f;
    mf->mf[3][1] = 0.0f;
    mf->mf[3][2] = 0.0f;
    mf->mf[1][1] = 1.0f;
    mf->mf[3][3] = 1.0f;
    mf->mf[0][0] = phi_f12;
    mf->mf[2][2] = phi_f12;
    mf->mf[0][2] = -phi_f2;
    mf->mf[2][0] = phi_f2;
}

void SkinMatrix_MulYRotation(MtxF *mf, s16 a) {
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f10_4;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f4;
    s16 temp_a0;

    if (a != 0) {
        temp_a0 = a;
        a = a;
        mf = mf;
        sp1C = Math_SinS(temp_a0);
        temp_f0 = Math_CosS(a);
        temp_f2 = mf->mf[0][0];
        temp_f12 = mf->mf[2][0];
        temp_f10 = temp_f2 * sp1C;
        temp_f2_2 = mf->mf[0][1];
        temp_f16 = temp_f12 * temp_f0;
        temp_f12_2 = mf->mf[2][1];
        temp_f4 = temp_f2_2 * temp_f0;
        mf->mf[0][0] = (temp_f2 * temp_f0) - (temp_f12 * sp1C);
        temp_f10_2 = temp_f2_2 * sp1C;
        temp_f2_3 = mf->mf[0][2];
        temp_f12_3 = mf->mf[2][2];
        mf->mf[2][0] = temp_f10 + temp_f16;
        mf->mf[0][1] = temp_f4 - (temp_f12_2 * sp1C);
        temp_f10_3 = temp_f2_3 * sp1C;
        temp_f2_4 = mf->mf[0][3];
        temp_f12_4 = mf->mf[2][3];
        mf->mf[2][1] = temp_f10_2 + (temp_f12_2 * temp_f0);
        mf->mf[0][2] = (temp_f2_3 * temp_f0) - (temp_f12_3 * sp1C);
        temp_f10_4 = temp_f2_4 * sp1C;
        mf->mf[2][2] = temp_f10_3 + (temp_f12_3 * temp_f0);
        mf->mf[0][3] = (temp_f2_4 * temp_f0) - (temp_f12_4 * sp1C);
        mf->mf[2][3] = temp_f10_4 + (temp_f12_4 * temp_f0);
    }
}

void SkinMatrix_SetZRotation(MtxF *mf, s16 a) {
    f32 sp1C;
    s16 temp_a0;
    f32 phi_f12;
    f32 phi_f2;

    if (a != 0) {
        temp_a0 = a;
        a = a;
        mf = mf;
        sp1C = Math_SinS(temp_a0);
        phi_f12 = Math_CosS(a);
        phi_f2 = sp1C;
    } else {
        phi_f12 = 1.0f;
        phi_f2 = 0.0f;
    }
    mf->mf[0][2] = 0.0f;
    mf->mf[0][3] = 0.0f;
    mf->mf[1][2] = 0.0f;
    mf->mf[1][3] = 0.0f;
    mf->mf[2][0] = 0.0f;
    mf->mf[2][1] = 0.0f;
    mf->mf[2][3] = 0.0f;
    mf->mf[3][0] = 0.0f;
    mf->mf[3][1] = 0.0f;
    mf->mf[3][2] = 0.0f;
    mf->mf[2][2] = 1.0f;
    mf->mf[3][3] = 1.0f;
    mf->mf[0][0] = phi_f12;
    mf->mf[1][1] = phi_f12;
    mf->mf[0][1] = phi_f2;
    mf->mf[1][0] = -phi_f2;
}

