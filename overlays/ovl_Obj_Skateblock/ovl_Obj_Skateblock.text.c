f32 func_800C4240(s32, void *, void *, f32 *, f32 *, f32); /* extern */
s32 func_800C56E0(s32, f32 *, f32 *, Vec3f *, ? *, s32, s32, s32, s32, ? *, f32 *, f32); /* extern */
s32 func_80A21150(f32 *arg0);                       /* static */
void func_80A211F4(f32 *arg0, s32 arg1);            /* static */
void func_80A212F0(f32 *arg0, f32 *arg1, s16 arg2); /* static */
s32 func_80A21370(f32 *arg0, f32 *arg1);            /* static */
s32 func_80A21548(f32 *arg0, f32 *);                /* static */
s32 func_80A216D4(f32 *arg0, f32 *arg1, f32 arg2, Vec3f *arg3); /* static */
s32 func_80A21934(Actor *arg0, f32 *);              /* static */
s32 func_80A21990(f32 *arg0, s32 arg1, void *arg2); /* static */
? func_80A21C30(Actor *arg0, f32 *);                /* static */
void func_80A21C88(f32 *arg0, s16 arg1);            /* static */
void func_80A21CB4(f32 *arg0, f32 *arg1);           /* static */
void func_80A21CD8(f32 *arg0);                      /* static */
void func_80A21D1C(Actor *arg0);                    /* static */
void func_80A21E9C(ObjSkateblock *arg0, GlobalContext *arg1); /* static */
void func_80A21F68(void *arg0);                     /* static */
void func_80A21F74(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A22308(ObjSkateblock *arg0);            /* static */
void func_80A22334(f32 *arg0, f32 *arg1);           /* static */
void func_80A2244C(f32 *arg0);                      /* static */
void func_80A224A4(Actor *arg0, f32 *arg1);         /* static */
void func_80A22628(Actor *arg0);                    /* static */
void func_80A2264C(f32 *arg0, f32 *arg1);           /* static */
void func_80A22728(f32 *arg0);                      /* static */
void func_80A2273C(DynaPolyActor *arg0, ? arg1);    /* static */
void func_80A227A4(DynaPolyActor *arg0);            /* static */
void func_80A227C0(f32 *arg0, f32 *arg1);           /* static */
extern void D_0501B370;
static s32 D_80A22A10 = 0;
static s32 D_80A22A14 = 0;
static void *D_80A22A18 = NULL;
static ? D_80A22A1C;                                /* unable to generate initializer */
static ? D_80A22A44;                                /* unable to generate initializer */
static ? D_80A22A6C;                                /* unable to generate initializer */
static ? D_80A22A94;                                /* unable to generate initializer */
static f32 D_80A22ABC = {-300.0f, 300.0f};
static f32 D_80A22AC4 = {1.0f, -1.0f};
static Vec3f D_80A22ACC = {0.0f, 0.3f, 0.0f};
static Color_RGBA8 D_80A22AD8 = {0xFA, 0xFA, 0xFA, 0xFF};
static Color_RGBA8 D_80A22ADC = {0xB4, 0xB4, 0xB4, 0xFF};
static InitChainEntry D_80A22AE0;                   /* unable to generate initializer */
static ? D_80A22AF8;                                /* unable to generate initializer */
static ? D_80A22B08;                                /* unable to generate initializer */

typedef struct ObjSkateblock {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ void (*actionFunc)(ObjSkateblock *, GlobalContext *);
    /* 0x0160 */ char pad160[0x12];
    /* 0x0172 */ s16 unk172;                        /* inferred */
    /* 0x0174 */ s16 unk174;                        /* inferred */
    /* 0x0176 */ s16 unk176;                        /* inferred */
    /* 0x0178 */ s16 unk178;                        /* inferred */
    /* 0x017A */ char pad17A[0xE];                  /* maybe part of unk178[8]? */
    /* 0x0188 */ f32 unk188;                        /* inferred */
    /* 0x018C */ s32 unk18C;                        /* inferred */
    /* 0x0190 */ char pad190[0x30];                 /* maybe part of unk18C[13]? */
    /* 0x01C0 */ u8 unk1C0;                         /* inferred */
    /* 0x01C1 */ u8 unk1C1;                         /* inferred */
    /* 0x01C2 */ char pad1C2[0x2];                  /* maybe part of unk1C1[3]? */
} ObjSkateblock;                                    /* size 0x1C4 */

s32 func_80A21150(f32 *arg0) {
    f32 temp_f2;
    s32 temp_v0;
    s32 phi_v0;

    temp_f2 = arg0->unk148;
    if (fabsf(temp_f2) > 0.1f) {
        if (temp_f2 > 0.0f) {
            phi_v0 = (arg0->unk150 + 0x2000) << 0x10;
        } else {
            phi_v0 = (arg0->unk150 - 0x6000) << 0x10;
        }
        temp_v0 = phi_v0 >> 0x10;
        if (temp_v0 < -0x4000) {
            return 3;
        }
        if (temp_v0 < 0) {
            return 1;
        }
        if (temp_v0 < 0x4000) {
            return 2;
        }
        return 0;
    }
    return -1;
}

void func_80A211F4(f32 *arg0, s32 arg1) {
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a2;
    s16 temp_v0;
    s32 phi_v0;

    phi_v0 = 0;
    if (arg0->unk148 > 0.0f) {
        phi_v0 = 1;
    }
    if ((arg1 == 0) && (phi_v0 != 0)) {
        arg0->unk172 = (s16) (arg0->unk172 + 1);
    } else {
        temp_a2 = arg0->unk172;
        if ((s32) temp_a2 > 0) {
            arg0->unk172 = (s16) (temp_a2 - 1);
        }
    }
    if ((arg1 == 1) && (phi_v0 != 0)) {
        arg0->unk174 = (s16) (arg0->unk174 + 1);
    } else {
        temp_a0 = arg0->unk174;
        if ((s32) temp_a0 > 0) {
            arg0->unk174 = (s16) (temp_a0 - 1);
        }
    }
    if ((arg1 == 2) && (phi_v0 != 0)) {
        arg0->unk176 = (s16) (arg0->unk176 + 1);
    } else {
        temp_a0_2 = arg0->unk176;
        if ((s32) temp_a0_2 > 0) {
            arg0->unk176 = (s16) (temp_a0_2 - 1);
        }
    }
    if ((arg1 == 3) && (phi_v0 != 0)) {
        arg0->unk178 = (s16) (arg0->unk178 + 1);
        return;
    }
    temp_v0 = arg0->unk178;
    if ((s32) temp_v0 > 0) {
        arg0->unk178 = (s16) (temp_v0 - 1);
    }
}

void func_80A212F0(f32 *arg0, f32 *arg1, s16 arg2) {
    f32 sp1C;
    f32 temp_f0;

    sp1C = Math_SinS(arg2);
    temp_f0 = Math_CosS(arg2);
    arg0->unk0 = (arg1->unk8 * sp1C) + (arg1->unk0 * temp_f0);
    arg0->unk4 = (f32) arg1->unk4;
    arg0->unk8 = (f32) ((arg1->unk8 * temp_f0) - (arg1->unk0 * sp1C));
}

s32 func_80A21370(f32 *arg0, f32 *arg1) {
    s32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    s32 sp88;
    s32 sp70;
    f32 *temp_fp;
    f32 temp_f0;
    f32 temp_f0_2;
    s32 temp_s3;
    void *temp_v1;
    f32 *phi_s1;
    ? *phi_s4;
    ? *phi_s5;
    s32 phi_t0;
    s32 phi_v0;
    void *phi_s2;
    void *phi_s6;
    f32 phi_f20;
    s32 phi_s3;
    s32 phi_v0_2;
    s32 phi_t0_2;

    sp90 = arg0->unk28 + 40.0f;
    sp70 = arg1 + 0x830;
    temp_fp = &sp8C;
    phi_s1 = arg0;
    phi_s4 = &D_80A22A44;
    phi_s5 = &D_80A22A1C;
    phi_t0 = 0;
    phi_v0 = -1;
    phi_s2 = arg0 + 0x184;
    phi_s6 = arg0 + 0x18C;
    phi_f20 = -32000.0f;
    phi_s3 = 0;
    do {
        phi_s1->unk184 = 0;
        phi_s1->unk188 = -32000.0f;
        phi_s1->unk18C = 0x32;
        sp8C = phi_s4->unk0 + (phi_s5->unk0 * arg0->unk58) + arg0->unk24;
        sp88 = phi_t0;
        sp98 = phi_v0;
        sp94 = phi_s4->unk4 + (phi_s5->unk4 * arg0->unk60) + arg0->unk2C;
        temp_f0 = func_800C4240(sp70, phi_s2, phi_s6, arg0, temp_fp, 0.0f);
        phi_s2->unk4 = temp_f0;
        phi_s1 += 0xC;
        phi_v0_2 = phi_v0;
        phi_t0_2 = phi_t0;
        if (temp_f0 > -31999.0f) {
            temp_f0_2 = phi_s2->unk4;
            phi_t0_2 = 1;
            if (phi_f20 < temp_f0_2) {
                phi_v0_2 = phi_s3;
                phi_f20 = temp_f0_2;
            }
        }
        temp_s3 = phi_s3 + 1;
        phi_s4 += 8;
        phi_s5 += 8;
        phi_t0 = phi_t0_2;
        phi_v0 = phi_v0_2;
        phi_s2 += 0xC;
        phi_s6 += 0xC;
        phi_s3 = temp_s3;
    } while (temp_s3 != 5);
    if (phi_v0_2 >= 0) {
        temp_v1 = arg0 + (phi_v0_2 * 0xC);
        arg0->unk80 = (s32) temp_v1->unk184;
        arg0->unk88 = (f32) temp_v1->unk188;
        arg0->unk85 = (s8) temp_v1->unk18C;
    }
    return phi_t0_2;
}

s32 func_80A21548(f32 *arg0) {
    f32 *temp_a0;
    f32 *temp_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f12;
    void *temp_v0;
    f32 phi_f2;
    f32 phi_f2_2;
    f32 phi_f2_3;
    f32 phi_f2_4;
    s32 phi_v1;
    f32 phi_f2_5;

    temp_a2 = arg0;
    temp_a0 = temp_a2;
    temp_a2->unk1C1 = (u8) (temp_a2->unk1C1 & 0xFFFB);
    arg0 = temp_a2;
    if (func_80A21370(temp_a0, temp_a2) != 0) {
        temp_f12 = arg0->unk28 - 10.0f;
        phi_f2 = -32000.0f;
        phi_v1 = 0;
        if (temp_f12 < arg0->unk188) {
            temp_f0 = arg0->unk188;
            if (temp_f0 > -32000.0f) {
                phi_f2 = temp_f0;
                phi_v1 = 1;
            }
        }
        temp_v0 = arg0 + (1 * 0xC);
        phi_f2_2 = phi_f2;
        if (temp_f12 < temp_v0->unk188) {
            temp_f0_2 = temp_v0->unk188;
            if (phi_f2 < temp_f0_2) {
                phi_f2_2 = temp_f0_2;
                phi_v1 = 1;
            }
        }
        phi_f2_3 = phi_f2_2;
        if (temp_f12 < temp_v0->unk194) {
            temp_f0_3 = temp_v0->unk194;
            if (phi_f2_2 < temp_f0_3) {
                phi_f2_3 = temp_f0_3;
                phi_v1 = 1;
            }
        }
        phi_f2_4 = phi_f2_3;
        if (temp_f12 < temp_v0->unk1A0) {
            temp_f0_4 = temp_v0->unk1A0;
            if (phi_f2_3 < temp_f0_4) {
                phi_f2_4 = temp_f0_4;
                phi_v1 = 1;
            }
        }
        phi_f2_5 = phi_f2_4;
        if (temp_f12 < temp_v0->unk1AC) {
            temp_f0_5 = temp_v0->unk1AC;
            if (phi_f2_4 < temp_f0_5) {
                phi_v1 = 1;
                phi_f2_5 = temp_f0_5;
            }
        }
        if (phi_v1 != 0) {
            arg0->unk28 = phi_f2_5;
            arg0->unk1C1 = (u8) (arg0->unk1C1 | 4);
            arg0->unk68 = 0.0f;
        }
        return phi_v1;
    }
    return 0;
}

s32 func_80A216D4(f32 *arg0, f32 *arg1, f32 arg2, Vec3f *arg3) {
    f32 spE8;
    f32 spE4;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    Vec3f spB0;
    ? spA4;
    ? spA0;
    s32 sp9C;
    s16 sp96;
    ? *temp_s0;
    f32 *temp_a1;
    f32 *temp_a2_2;
    f32 *temp_s3;
    f32 *temp_s5;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f8;
    s16 temp_a2;
    s16 phi_a2;
    ? *phi_s1;
    ? *phi_s0;
    f32 phi_f20;

    temp_a2 = arg0->unk150;
    phi_a2 = temp_a2;
    if (arg0->unk148 < 0.0f) {
        phi_a2 = (s16) (temp_a2 - 0x8000);
    }
    sp96 = phi_a2;
    spE8 = Math_SinS(phi_a2);
    spE4 = Math_CosS(sp96);
    temp_f0 = Math3D_Distance(arg0 + 0x24, arg0 + 0x108);
    sp9C = 0;
    temp_s3 = &spD4;
    temp_f2 = temp_f0 + (300.0f * arg0->unk60) + arg2;
    temp_f24 = temp_f2 * spE8;
    temp_s5 = &spC8;
    temp_f26 = temp_f2 * spE4;
    phi_s1 = &D_80A22A94;
    phi_s0 = &D_80A22A6C;
    phi_f20 = 3.4028235e38f;
    do {
        temp_a1 = &spBC;
        spBC = phi_s1->unk0 + (phi_s0->unk0 * arg0->unk58);
        spC4 = 0.0f;
        spC0 = phi_s1->unk4 + (phi_s0->unk4 * arg0->unk5C);
        func_80A212F0(temp_s3, temp_a1, sp96);
        temp_f8 = spD4 + arg0->unk108;
        spD4 = temp_f8;
        temp_f16 = spD8 + arg0->unk10C;
        temp_a2_2 = temp_s5;
        spD8 = temp_f16;
        spCC = temp_f16;
        spC8 = temp_f24 + temp_f8;
        temp_f18 = spDC + arg0->unk110;
        temp_f4 = temp_f26 + temp_f18;
        spDC = temp_f18;
        spD0 = temp_f4;
        if (func_800C56E0(arg1 + 0x830, temp_s3, temp_a2_2, &spB0, &spA0, 1, 0, 0, 1, &spA4, arg0, 0.0f) != 0) {
            temp_f0_2 = Math3D_DistanceSquared((Vec3f *) temp_s3, &spB0);
            if (temp_f0_2 < phi_f20) {
                temp_f20 = temp_f0_2;
                sp9C = 1;
                Math_Vec3f_Diff(&spB0, (Vec3f *) temp_s5, arg3);
                phi_f20 = temp_f20;
            }
        }
        temp_s0 = phi_s0 + 8;
        phi_s1 += 8;
        phi_s0 = temp_s0;
    } while (temp_s0 != &D_80A22A94);
    return sp9C;
}

s32 func_80A21934(Actor *arg0) {
    f32 sp1C;

    if (func_80A216D4(NULL, &sp1C) != 0) {
        arg0->world.pos.x += sp1C;
        arg0->world.pos.z += sp24;
        return 1;
    }
    return 0;
}

s32 func_80A21990(f32 *arg0, s32 arg1, void *arg2) {
    f32 sp100;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    Vec3f spC8;
    ? spBC;
    ? spB8;
    s32 spB4;
    f32 *temp_a1;
    f32 *temp_a2;
    f32 *temp_s1;
    f32 *temp_s3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f30;
    f32 temp_f4;
    f32 temp_f8;
    s16 temp_s6;
    s16 phi_s6;
    f32 *phi_s2;
    f32 *phi_s1;
    f32 phi_f22;

    temp_s6 = arg0->unk150;
    phi_s6 = temp_s6;
    if (arg0->unk148 < 0.0f) {
        phi_s6 = (s16) (temp_s6 - 0x8000);
    }
    sp100 = Math_SinS(phi_s6);
    temp_f26 = Math_CosS(phi_s6);
    temp_f0 = Math3D_Distance(arg0 + 0x24, arg0 + 0x108);
    spB4 = 0;
    temp_s3 = &spEC;
    temp_f12 = -(temp_f0 + (300.0f * arg0->unk60) + 2.0f);
    temp_f28 = temp_f12 * sp100;
    temp_f30 = temp_f12 * temp_f26;
    phi_s2 = &D_80A22AC4;
    phi_s1 = &D_80A22ABC;
    phi_f22 = 3.4028235e38f;
    do {
        spDC = 0.0f;
        temp_a1 = &spD4;
        spD8 = -10.0f;
        spD4 = *phi_s2 + (*phi_s1 * arg0->unk58);
        func_80A212F0(temp_s3, temp_a1, phi_s6);
        temp_f10 = spEC + arg0->unk24;
        spEC = temp_f10;
        temp_f18 = spF0 + arg0->unk28;
        temp_a2 = &spE0;
        spF0 = temp_f18;
        spE4 = temp_f18;
        spE0 = temp_f28 + temp_f10;
        temp_f8 = spF4 + arg0->unk2C;
        temp_f4 = temp_f30 + temp_f8;
        spF4 = temp_f8;
        spE8 = temp_f4;
        if (func_800C56E0(arg1 + 0x830, temp_s3, temp_a2, &spC8, &spB8, 1, 0, 0, 1, &spBC, arg0, 0.0f) != 0) {
            temp_f0_2 = Math3D_DistanceSquared((Vec3f *) temp_s3, &spC8);
            if (temp_f0_2 < phi_f22) {
                spB4 = 1;
                arg2->unk4 = 0.0f;
                arg2->unk0 = (f32) ((spC8.x - spEC) + (300.0f * arg0->unk60 * sp100));
                arg2->unk8 = (f32) ((spC8.z - spF4) + (300.0f * arg0->unk60 * temp_f26));
                phi_f22 = temp_f0_2;
            }
        }
        temp_s1 = phi_s1 + 4;
        phi_s2 += 4;
        phi_s1 = temp_s1;
    } while (temp_s1 != &D_80A22AC4);
    return spB4;
}

? func_80A21C30(Actor *arg0) {
    f32 sp1C;

    if (func_80A21990(&sp1C) != 0) {
        arg0->world.pos.x += sp1C;
        arg0->world.pos.z += sp24;
        return 1;
    }
    return 0;
}

void func_80A21C88(f32 *arg0, s16 arg1) {
    if ((arg1 == 0) || (arg1 == 1)) {
        arg0->unk16C = (void *) (arg0 + 0x24);
    } else {
        arg0->unk16C = (void *) (arg0 + 0x2C);
    }
    arg0->unk170 = arg1;
}

void func_80A21CB4(f32 *arg0, f32 *arg1) {
    void *temp_v0;

    temp_v0 = arg1->unk1CCC;
    temp_v0->unkA70 = (s32) (temp_v0->unkA70 & ~0x10);
    arg0->unk148 = 0.0f;
}

void func_80A21CD8(f32 *arg0) {
    f32 temp_f2;

    temp_f2 = arg0->unk78;
    arg0->unk68 = (f32) (arg0->unk68 + arg0->unk74);
    if (arg0->unk68 < temp_f2) {
        arg0->unk68 = temp_f2;
    }
    arg0->unk28 = (f32) (arg0->unk28 + arg0->unk68);
}

void func_80A21D1C(Actor *arg0) {
    f32 sp4;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f4;
    f32 temp_f6;
    f32 phi_f2;
    f32 phi_f2_2;

    temp_f16 = arg0->home.pos.x;
    temp_f14 = arg0->world.pos.x - temp_f16;
    if (temp_f14 >= 0.0f) {
        phi_f2 = 0.5f;
    } else {
        phi_f2 = -0.5f;
    }
    temp_f6 = (f32) (((s32) (phi_f2 + temp_f14) / 0x1E) * 0x1E);
    sp4 = temp_f6;
    if (fabsf(temp_f14 - temp_f6) < 3.0f) {
        arg0->world.pos.x = temp_f16 + temp_f6;
    }
    temp_f16_2 = arg0->home.pos.z;
    temp_f14_2 = arg0->world.pos.z - temp_f16_2;
    if (temp_f14_2 >= 0.0f) {
        phi_f2_2 = 0.5f;
    } else {
        phi_f2_2 = -0.5f;
    }
    temp_f4 = (f32) (((s32) (phi_f2_2 + temp_f14_2) / 0x1E) * 0x1E);
    sp4 = temp_f4;
    if (fabsf(temp_f14_2 - temp_f4) < 3.0f) {
        arg0->world.pos.z = temp_f16_2 + temp_f4;
    }
}

void func_80A21E9C(ObjSkateblock *arg0, GlobalContext *arg1) {
    DynaPolyActor *temp_v0;
    s32 temp_s1;
    ObjSkateblock *phi_s0;
    s32 phi_s1;

    phi_s0 = arg0;
    phi_s1 = 0;
    if ((arg0->unk1C1 & 4) != 0) {
        do {
            temp_v0 = BgCheck_GetActorOfMesh(arg1 + 0x830, phi_s0->unk18C);
            temp_s1 = phi_s1 + 0xC;
            phi_s1 = temp_s1;
            if ((temp_v0 != 0) && (temp_v0->actor.id == 0x142) && (fabsf(arg0->actor.world.pos.y - phi_s0->unk188) < 0.1f)) {
                temp_v0->unk1C1 = (u8) (temp_v0->unk1C1 | 2);
            }
            phi_s0 += 0xC;
        } while (temp_s1 != 0x3C);
    }
}

void func_80A21F68(void *arg0) {
    arg0->unk17C = 0;
}

void func_80A21F74(Actor *arg0, GlobalContext *arg1) {
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    s16 sp8A;
    f32 *temp_a1;
    f32 *temp_s2;
    f32 temp_f20;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_s1;
    s16 phi_v1;
    f32 phi_f22;
    s32 phi_s1;

    temp_v1 = arg0->unk150;
    phi_v1 = temp_v1;
    phi_s1 = 0;
    if (arg0->unk148 < 0.0f) {
        phi_v1 = (s16) (temp_v1 - 0x8000);
    }
    arg0->unk17C = (s16) (arg0->unk17C + 1);
    if ((arg0->flags & 0x40) != 0) {
        temp_v0 = arg0->unk17C;
        if ((s32) temp_v0 >= 0x2E) {
            phi_f22 = 1.0f;
        } else {
            phi_f22 = ((f32) temp_v0 * 0.017777778f) + 0.2f;
        }
        sp8A = phi_v1;
        temp_s2 = &spA8;
        spA0 = 12.0f;
        do {
            if (!(phi_f22 < (Rand_ZeroOne() * 1.2f))) {
                arg0->unk180 = (f32) (arg0->unk180 + Rand_ZeroOne());
                temp_f2 = arg0->unk180;
                if (temp_f2 > 1.0f) {
                    arg0->unk180 = (f32) (temp_f2 - 1.0f);
                }
                temp_a1 = &sp9C;
                sp9C = (arg0->unk180 - 0.5f) * 600.0f * arg0->scale.x;
                spA4 = (arg0->scale.z * -300.0f) + 4.0f;
                func_80A212F0(temp_s2, temp_a1, sp8A);
                spA8 += arg0->world.pos.x;
                spAC += arg0->world.pos.y;
                spB0 += arg0->world.pos.z;
                temp_f20 = ((Rand_ZeroOne() * 800.0f) + (1600.0f * arg0->scale.x)) * phi_f22;
                func_800B0E48(arg1, (Vec3f *) temp_s2, &D_801D15B0, &D_80A22ACC, &D_80A22AD8, &D_80A22ADC, (s16) (s32) temp_f20, (s16) (s32) ((Rand_ZeroOne() * 20.0f) + 30.0f));
            }
            temp_s1 = phi_s1 + 1;
            phi_s1 = temp_s1;
        } while (temp_s1 != 2);
    }
}

void ObjSkateblock_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjSkateblock *this = (ObjSkateblock *) thisx;
    s32 temp_t9;

    Actor_ProcessInitChain(&this->actor, &D_80A22AE0);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, (CollisionHeader *) &D_05007498);
    if (D_80A22A18 == 0) {
        D_80A22A18 = Lib_SegmentedToVirtual(&D_0501B370);
    }
    func_80A22308(this);
    this->unk1C0 = (u8) D_80A22A14;
    temp_t9 = D_80A22A14 + 1;
    D_80A22A14 = temp_t9;
    D_80A22A14 = temp_t9 & 0x1F;
}

void ObjSkateblock_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjSkateblock *this = (ObjSkateblock *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void func_80A22308(ObjSkateblock *arg0) {
    arg0->actionFunc = func_80A22334;
    arg0->unk174 = 0;
    arg0->unk176 = 0;
    arg0->unk178 = 0;
    arg0->unk172 = 0;
    arg0->actor.velocity.y = 0.0f;
}

void func_80A22334(f32 *arg0, f32 *arg1) {
    s32 sp30;
    s32 sp2C;
    Vec3f sp20;
    s32 temp_v0;

    func_80A21CD8(arg0);
    func_80A21548(arg0, arg1);
    temp_v0 = func_80A21150(arg0);
    sp2C = temp_v0;
    func_80A211F4(arg0, temp_v0);
    sp30 = 1;
    if (temp_v0 == -1) {
        sp30 = 0;
    } else if (((arg0->unk1C1 & 2) == 0) && ((s32) (arg0 + (temp_v0 * 2))->unk172 >= 0xB) && (D_80A22A10 == 0) && (func_80A216D4(arg0, arg1, 2.0f, &sp20) == 0) && (func_801233E4((GlobalContext *) arg1) == 0)) {
        func_80A21C88(arg0, (s16) sp2C);
        func_80A2244C(arg0);
        sp30 = 0;
        func_800B7298((GlobalContext *) arg1, (Actor *) arg0, 7U);
        arg0->unk1C1 = (u8) (arg0->unk1C1 | 1);
    }
    if (sp30 != 0) {
        func_80A21CB4(arg0, arg1);
    }
}

void func_80A2244C(f32 *arg0) {
    arg0->unk15C = func_80A224A4;
    arg0->unk17A = 0xF;
    arg0->unk168 = (f32) *(&D_80A22AF8 + (arg0->unk170 * 4));
    arg0->unk164 = 0.0f;
    arg0->unk68 = (f32) arg0->unk74;
    func_80A21F68();
}

void func_80A224A4(Actor *arg0, f32 *arg1) {
    s32 sp28;
    s32 sp24;
    f32 *temp_v1;
    s16 temp_v0;
    u8 temp_v0_2;

    sp28 = 0;
    sp24 = 0;
    Math_StepToF(arg0 + 0x164, arg0->unk168, 0.75f);
    temp_v1 = arg0->unk16C;
    *temp_v1 += arg0->unk164;
    if (func_80A21934(arg0, arg1) != 0) {
        Audio_PlayActorSound2(arg0, 0x2835U);
        func_80A21D1C(arg0);
        sp28 = 1;
    } else {
        func_800B9010(arg0, 0xDFU);
    }
    func_80A21CD8((f32 *) arg0);
    if (func_80A21548((f32 *) arg0, arg1) == 0) {
        func_80A21C30(arg0, arg1);
        func_80A21D1C(arg0);
        func_80A22628(arg0);
        sp24 = 1;
    } else if (sp28 != 0) {
        func_80A22308((ObjSkateblock *) arg0);
    }
    temp_v0 = arg0->unk17A;
    if ((s32) temp_v0 > 0) {
        arg0->unk17A = (s16) (temp_v0 - 1);
    }
    if ((sp24 != 0) || (sp28 != 0) || (arg0->unk17A == 1)) {
        func_80A21CB4((f32 *) arg0, arg1);
    }
    temp_v0_2 = arg0->unk1C1;
    if (((temp_v0_2 & 1) != 0) && ((sp24 != 0) || (sp28 != 0) || (arg0->xzDistToPlayer > 400.0f))) {
        arg0->unk1C1 = (u8) (temp_v0_2 & 0xFFFE);
        func_800B7298((GlobalContext *) arg1, arg0, 6U);
    }
    func_80A21F74(arg0, (GlobalContext *) arg1);
}

void func_80A22628(Actor *arg0) {
    arg0->unk15C = func_80A2264C;
    arg0->unk160 = (f32) arg0->world.pos.y;
    arg0->velocity.y = arg0->gravity;
}

void func_80A2264C(f32 *arg0, f32 *arg1) {
    s32 sp20;
    s32 temp_ret;
    s32 temp_v0;

    if (func_80A21150(arg0) != -1) {
        func_80A21CB4(arg0, arg1);
    }
    func_80A21CD8(arg0);
    temp_ret = func_80A21548(arg0, arg1);
    temp_v0 = temp_ret;
    if (((temp_v0 != 0) || ((arg0->unk160 - arg0->unk28) > 300.0f)) && (sp20 = temp_v0, (func_800C9B40((CollisionContext *) (arg1 + 0x830), arg0->unk80, (s32) arg0->unk85) == 0xC))) {
        func_800C62BC((GlobalContext *) arg1, (DynaCollisionContext *) (arg1 + 0x880), arg0->unk144);
        arg0->unk13C = 0;
        func_80A22728(arg0);
        return;
    }
    if (temp_ret != 0) {
        func_80A22308((ObjSkateblock *) arg0);
    }
}

void func_80A22728(f32 *arg0) {
    arg0->unk15C = func_80A2273C;
}

void func_80A2273C(DynaPolyActor *arg0, ? arg1) {
    if (func_800CAF70(arg0) == 0) {
        arg0->actor.world.pos.x = arg0->actor.home.pos.x;
        arg0->actor.world.pos.z = arg0->actor.home.pos.z;
        arg0->actor.world.pos.y = (arg0->actor.home.pos.y - (600.0f * arg0->actor.scale.y)) - 10.0f;
        func_80A227A4(arg0);
    }
}

void func_80A227A4(DynaPolyActor *arg0) {
    arg0->unk15C = func_80A227C0;
    arg0->unk17A = 0x28;
}

void func_80A227C0(f32 *arg0, f32 *arg1) {
    s16 temp_v0;

    if (func_80A21150(arg0) != -1) {
        func_80A21CB4(arg0, arg1);
    }
    temp_v0 = arg0->unk17A;
    if ((s32) temp_v0 > 0) {
        arg0->unk17A = (s16) (temp_v0 - 1);
        return;
    }
    func_800C6314((GlobalContext *) arg1, (DynaCollisionContext *) (arg1 + 0x880), arg0->unk144);
    arg0->unk13C = ObjSkateblock_Draw;
    if (Math_StepToF(arg0 + 0x28, arg0->unkC, 1.0f) != 0) {
        func_80A22308((ObjSkateblock *) arg0);
    }
    if (func_800CAF70((DynaPolyActor *) arg0) != 0) {
        D_80A22A10 |= 1 << arg0->unk1C0;
    }
}

void ObjSkateblock_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjSkateblock *this = (ObjSkateblock *) thisx;
    D_80A22A10 &= ~(1 << this->unk1C0);
    this->actionFunc(this, globalCtx);
    this->unk1C1 &= 0xFFFD;
}

void ObjSkateblock_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjSkateblock *this = (ObjSkateblock *) thisx;
    void *sp2C;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    sp2C = ((this->actor.params & 0xF) * 3) + &D_80A22B08;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    AnimatedMat_DrawStep(globalCtx, (AnimatedMaterial *) D_80A22A18, 0U);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp20 = temp_v0;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFA00FFFF;
    temp_v0_2->words.w1 = (sp2C->unk0 << 0x18) | (sp2C->unk1 << 0x10) | (sp2C->unk2 << 8) | 0xFF;
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_3->words.w1 = (u32) &D_050182A8;
    func_80A21E9C(this, globalCtx);
}

