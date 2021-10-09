

f32 OLib_Vec3fDist(Vec3f *a, Vec3f *b) {
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;

    temp_f2 = a->x - b->x;
    temp_f12 = a->y - b->y;
    temp_f14 = a->z - b->z;
    return sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14));
}

f32 OLib_Vec3fDistOutDiff(Vec3f *a, Vec3f *b, Vec3f *dest) {
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;

    dest->x = a->x - b->x;
    temp_f2 = dest->x;
    dest->y = a->y - b->y;
    temp_f12 = dest->y;
    dest->z = a->z - b->z;
    temp_f14 = dest->z;
    return sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14));
}

f32 OLib_Vec3fDistXZ(Vec3f *a, Vec3f *b) {
    f32 temp_f12;
    f32 temp_f2;

    temp_f2 = a->x - b->x;
    temp_f12 = a->z - b->z;
    return sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
}

f32 OLib_ClampMinDist(f32 val, f32 min) {
    f32 temp_f0;
    f32 phi_f2;

    if (val < 0.0f) {
        temp_f0 = -min;
        if (temp_f0 < val) {
            return temp_f0;
        }
        return val;
    }
    if (val < min) {
        phi_f2 = min;
    } else {
        phi_f2 = val;
    }
    return phi_f2;
}

f32 OLib_ClampMaxDist(f32 val, f32 max) {
    f32 temp_f0;
    f32 phi_f2;

    if (val < 0.0f) {
        temp_f0 = -max;
        if (val < temp_f0) {
            return temp_f0;
        }
        return val;
    }
    if (max < val) {
        phi_f2 = max;
    } else {
        phi_f2 = val;
    }
    return phi_f2;
}

Vec3f *OLib_Vec3fDistNormalize(Vec3f *dest, Vec3f *a, Vec3f *b) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 *temp_t6;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;

    temp_f2 = b->x - a->x;
    temp_f16 = b->y - a->y;
    temp_f18 = b->z - a->z;
    sp30 = temp_f16;
    sp34 = temp_f18;
    sp2C = temp_f2;
    temp_f0 = OLib_ClampMinDist(sqrtf((temp_f2 * temp_f2) + (temp_f16 * temp_f16) + (temp_f18 * temp_f18)), 0.01f);
    temp_t6 = &sp20;
    temp_f10 = temp_f16 / temp_f0;
    sp20 = temp_f2 / temp_f0;
    sp24 = temp_f10;
    sp28 = temp_f18 / temp_f0;
    dest->x = temp_t6->unk0;
    dest->y = temp_t6->unk4;
    dest->z = temp_t6->unk8;
    return dest;
}

Vec3f *OLib_VecSphToVec3f(Vec3f *dest, VecSph *sph) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp24;
    f32 *temp_t6;

    sp2C = Math_CosS(sph->pitch);
    sp24 = Math_CosS(sph->yaw);
    sp30 = Math_SinS(sph->pitch);
    temp_t6 = &sp34;
    sp34 = sph->r * sp30 * Math_SinS(sph->yaw);
    sp38 = sph->r * sp2C;
    sp3C = sph->r * sp30 * sp24;
    dest->x = temp_t6->unk0;
    dest->y = temp_t6->unk4;
    dest->z = temp_t6->unk8;
    return dest;
}

Vec3f *OLib_VecSphGeoToVec3f(Vec3f *dest, VecSph *sph) {
    s16 sp1E;
    s16 sp1C;
    f32 sp18;
    f32 *temp_a1;

    temp_a1 = &sp18;
    sp18 = sph->r;
    sp1C = 0x4000 - sph->pitch;
    sp1E = sph->yaw;
    return OLib_VecSphToVec3f(dest, (VecSph *) temp_a1);
}

VecSph *OLib_Vec3fToVecSph(VecSph *dest, Vec3f *vec) {
    s16 sp2E;
    s16 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 temp_f6;
    s32 temp_cond;

    temp_f12 = vec->x;
    temp_f2 = vec->z;
    temp_f4 = temp_f12 * temp_f12;
    temp_f6 = temp_f2 * temp_f2;
    temp_f16 = temp_f4 + temp_f6;
    temp_f0 = sqrtf(temp_f16);
    temp_cond = temp_f0 == 0.0f;
    sp20 = temp_f0;
    if (temp_cond && (vec->y == 0.0f)) {
        sp2C = 0;
    } else {
        sp24 = temp_f16;
        sp2C = (s16) (s32) ((func_80086B30(sp20, vec->y) * 57.295776f * 182.04167f) + 0.5f);
    }
    temp_f2_2 = vec->y;
    sp28 = sqrtf((temp_f2_2 * temp_f2_2) + (temp_f4 + temp_f6));
    temp_f12_2 = vec->x;
    if ((temp_f12_2 == 0.0f) && (vec->z == 0.0f)) {
        sp2E = 0;
    } else {
        sp2E = (s16) (s32) ((func_80086B30(temp_f12_2, vec->z) * 57.295776f * 182.04167f) + 0.5f);
    }
    dest->r = sp28.unk0;
    dest->unk4 = (s32) sp28.unk4;
    return dest;
}

VecSph *OLib_Vec3fToVecSphGeo(VecSph *dest, Vec3f *vec) {
    VecSph sp18;

    OLib_Vec3fToVecSph(&sp18, vec);
    sp18.pitch = 0x4000 - sp18.pitch;
    dest->r = sp18.r;
    dest->unk4 = (s32) sp18.unk4;
    return dest;
}

VecSph *OLib_Vec3fDiffToVecSph(VecSph *dest, Vec3f *a, Vec3f *b) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 *temp_a1;

    temp_a1 = &sp1C;
    sp1C = b->x - a->x;
    sp20 = b->y - a->y;
    sp24 = b->z - a->z;
    return OLib_Vec3fToVecSph(dest, (Vec3f *) temp_a1);
}

VecSph *OLib_Vec3fDiffToVecSphGeo(VecSph *dest, Vec3f *a, Vec3f *b) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 *temp_a1;

    temp_a1 = &sp1C;
    sp1C = b->x - a->x;
    sp20 = b->y - a->y;
    sp24 = b->z - a->z;
    return OLib_Vec3fToVecSphGeo(dest, (Vec3f *) temp_a1);
}

Vec3f *OLib_VecSphAddToVec3f(Vec3f *dest, Vec3f *a, VecSph *sph) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    Vec3f sp18;
    f32 *temp_t6;

    a = a;
    OLib_VecSphGeoToVec3f(&sp18, sph);
    temp_t6 = &sp24;
    sp24 = a->x + sp18.x;
    sp28 = a->y + sp18.y;
    sp2C = a->z + sp18.z;
    dest->x = temp_t6->unk0;
    dest->y = temp_t6->unk4;
    dest->z = temp_t6->unk8;
    return dest;
}

Vec3f *OLib_Vec3fDiffRad(Vec3f *dest, Vec3f *a, Vec3f *b) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;

    sp1C = func_80086B30(b->z - a->z, b->y - a->y);
    sp20 = func_80086B30(b->x - a->x, b->z - a->z);
    sp24 = 0.0f;
    dest->x = sp1C.unk0;
    dest->y = sp1C.unk4;
    dest->z = sp1C.unk8;
    return dest;
}

Vec3f *OLib_Vec3fDiffDegF(Vec3f *dest, Vec3f *a, Vec3f *b) {
    Vec3f sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 *temp_t6;

    OLib_Vec3fDiffRad(&sp24, a, b);
    temp_t6 = &sp18;
    sp20 = 0.0f;
    sp18 = sp24.x * 57.295776f;
    sp1C = sp24.y * 57.295776f;
    dest->x = temp_t6->unk0;
    dest->y = temp_t6->unk4;
    dest->z = temp_t6->unk8;
    return dest;
}

Vec3s *OLib_Vec3fDiffBinAng(Vec3s *dest, Vec3f *a, Vec3f *b) {
    Vec3f sp24;
    s16 sp20;
    s16 sp1E;
    s16 sp1C;
    s16 *temp_t0;

    OLib_Vec3fDiffRad(&sp24, a, b);
    sp20 = 0;
    temp_t0 = &sp1C;
    sp1C = (s16) (s32) ((sp24.x * 57.295776f * 182.04167f) + 0.5f);
    sp1E = (s16) (s32) ((sp24.y * 57.295776f * 182.04167f) + 0.5f);
    dest->unk0 = (unaligned s32) temp_t0->unk0;
    dest->z = (s16) temp_t0->unk4;
    return dest;
}

void OLib_DbCameraVec3fDiff(PosRot *a, Vec3f *b, Vec3f *dest, s16 mode) {
    VecSph sp30;

    if (mode != 1) {
        if (mode != 2) {
            dest->x = b->x;
            dest->y = b->y;
            dest->z = b->z;
            return;
        }
        dest->x = b->x - a->pos.x;
        dest->y = b->y - a->pos.y;
        dest->z = b->z - a->pos.z;
        return;
    }
    OLib_Vec3fDiffToVecSphGeo(&sp30, &a->pos, b);
    sp30.yaw -= a->rot.y;
    OLib_VecSphGeoToVec3f(dest, &sp30);
}

void OLib_DbCameraVec3fSum(PosRot *a, Vec3f *b, Vec3f *dest, s16 mode) {
    VecSph sp28;

    if (mode != 1) {
        if (mode != 2) {
            dest->x = b->x;
            dest->y = b->y;
            dest->z = b->z;
            return;
        }
        dest->x = a->pos.x + b->x;
        dest->y = a->pos.y + b->y;
        dest->z = a->pos.z + b->z;
        return;
    }
    OLib_Vec3fToVecSphGeo(&sp28, b);
    sp28.yaw += a->rot.y;
    OLib_VecSphAddToVec3f(dest, &a->pos, &sp28);
}

