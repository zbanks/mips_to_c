typedef struct ObjSpidertent {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ ColliderTris unk_15C;               /* inferred */
    /* 0x17C */ ColliderTrisElement unk_17C;        /* inferred */
    /* 0x1D8 */ char pad_1D8[0x1EA];                /* maybe part of unk_17C[6]? */
    /* 0x3C2 */ u8 unk_3C2;                         /* inferred */
    /* 0x3C3 */ u8 unk_3C3;                         /* inferred */
    /* 0x3C4 */ u8 unk_3C4;                         /* inferred */
    /* 0x3C5 */ u8 unk_3C5;                         /* inferred */
    /* 0x3C6 */ char pad_3C6[0x2];                  /* maybe part of unk_3C5[3]? */
    /* 0x3C8 */ void (*actionFunc)(ObjSpidertent *, GlobalContext *);
} ObjSpidertent;                                    /* size = 0x3CC */

struct _mips2c_stack_ObjSpidertent_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjSpidertent_Draw {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Gfx *sp18;                           /* inferred */
    /* 0x1C */ char pad_1C[0x8];                    /* maybe part of sp18[3]? */
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_ObjSpidertent_Init {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ ColliderTris *sp48;                  /* inferred */
    /* 0x4C */ char pad_4C[0x18];                   /* maybe part of sp48[7]? */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ ? sp70;                              /* inferred */
    /* 0x70 */ char pad_70[0xC];
    /* 0x7C */ ? sp7C;                              /* inferred */
    /* 0x7C */ char pad_7C[0xC];
    /* 0x88 */ ? sp88;                              /* inferred */
    /* 0x88 */ char pad_88[0xC];
    /* 0x94 */ ? sp94;                              /* inferred */
    /* 0x94 */ char pad_94[0x14];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_ObjSpidertent_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2FB10 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B2FB94 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0xC];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80B2FC98 {
    /* 0x00 */ char pad_0[0x4C];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ ? sp70;                              /* inferred */
    /* 0x70 */ char pad_70[0x8];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_80B300F4 {
    /* 0x00 */ char pad_0[0x80];
    /* 0x80 */ void *sp80;                          /* inferred */
    /* 0x84 */ char pad_84[0x4];
    /* 0x88 */ ? sp88;                              /* inferred */
    /* 0x88 */ char pad_88[0xC];
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ ? spA0;                              /* inferred */
    /* 0xA0 */ char pad_A0[0xC];
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ char pad_D0[0x10];                   /* maybe part of spCC[5]? */
    /* 0xE0 */ void *spE0;                          /* inferred */
    /* 0xE4 */ char pad_E4[0x4];
};                                                  /* size = 0xE8 */

struct _mips2c_stack_func_80B30410 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B30480 {
    /* 0x00 */ char pad_0[0x54];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x14];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80B307E0 {};              /* size 0x0 */

struct _mips2c_stack_func_80B30808 {
    /* 0x00 */ char pad_0[0x54];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ char pad_60[0x10];                   /* maybe part of sp5C[5]? */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0xC];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_80B30A2C {};              /* size 0x0 */

struct _mips2c_stack_func_80B30A4C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B30AD4 {};              /* size 0x0 */

struct _mips2c_stack_func_80B30AF8 {
    /* 0x00 */ char pad_0[0x5C];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad_60[0x20];
};                                                  /* size = 0x80 */

s32 func_8017D2FC(f32, f32, void *, f32, s32, f32 *, f32 *, Vec3f *, s32); /* extern */
s32 func_80B2FB10(Vec3f *arg0, ? *arg1);            /* static */
s32 func_80B2FB94(Vec3f *arg0, f32 arg1, void *arg2, Vec3f *arg3, f32 *arg4); /* static */
s32 func_80B2FC98(void *arg0, f32 *arg1);           /* static */
void func_80B300F4(Actor *arg0, GlobalContext *arg1, void *arg2, ? *arg3, f32 arg4, s32 arg5); /* static */
void func_80B30410(void *arg0, Vec3f *arg1);        /* static */
s32 func_80B30480(void *arg0, GlobalContext *arg1, Vec3f *arg2); /* static */
void func_80B307E0(ObjSpidertent *arg0);            /* static */
void func_80B30808(void *arg0, GlobalContext *arg1); /* static */
void func_80B30A2C(void *arg0);                     /* static */
void func_80B30A4C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B30AD4(Actor *arg0);                    /* static */
void func_80B30AF8(Actor *arg0, GlobalContext *arg1); /* static */
static ? D_80B31350;                                /* unable to generate initializer */
static f32 D_80B313A0[6] = {-20.0f, 6.0f, 0.0f, 9.188579e-39f, nanf, -1.7014118e38f};
static f32 D_80B313B8[6] = {0.0f, 4.0f, 1.2f, 7.350072e-39f, nanf, -1.7014118e38f};
static f32 D_80B313D0[6] = {0.0f, 4.2f, 0.3f, 6.432792e-39f, nanf, 0.0000076293945f};
static f32 D_80B313E8[6] = {0.0f, 3.0f, 0.0f, 1.838865e-39f, -3.0316945e38f, -1.7014118e38f};
static Vec3f D_80B31400 = {1.0f, 0.0f, 0.0f};
static Vec3f D_80B3140C = {0.0f, 1.0f, 0.0f};
static InitChainEntry D_80B31418[6];                /* unable to generate initializer */

s32 func_80B2FB10(Vec3f *arg0, ? *arg1) {
    f32 temp_f0;
    f32 temp_f2;

    temp_f0 = Math3D_LengthSquared(arg0);
    if (temp_f0 < 9.999999e-9f) {
        return 0;
    }
    temp_f2 = 1.0f / sqrtf(temp_f0);
    arg1->unk_0 = (f32) (arg0->x * temp_f2);
    arg1->unk_4 = (f32) (arg0->y * temp_f2);
    arg1->unk_8 = (f32) (arg0->z * temp_f2);
    return 1;
}

s32 func_80B2FB94(Vec3f *arg0, f32 arg1, void *arg2, Vec3f *arg3, f32 *arg4) {
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 *temp_t6;
    f32 *temp_t7;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;

    temp_f0 = arg2->unk_24 * arg1;
    temp_f2 = arg2->unk_28 * arg1;
    temp_t6 = &sp48;
    temp_t7 = &sp3C;
    temp_f16 = arg2->unk_2C * arg1;
    sp48 = arg0->x + temp_f0;
    sp4C = arg0->y + temp_f2;
    sp50 = arg0->z + temp_f16;
    sp3C = arg0->x - temp_f0;
    sp40 = arg0->y - temp_f2;
    sp44 = arg0->z - temp_f16;
    if (func_8017D2FC(arg2->unk_24, arg2->unk_28, arg2, arg2->unk_2C, arg2->unk_30, temp_t6, temp_t7, arg3, 0) != 0) {
        temp_f0_2 = Math3D_DistanceSquared(arg0, arg3);
        temp_f2_2 = arg1 * arg1;
        if (temp_f2_2 < temp_f0_2) {
            goto block_4;
        }
        *arg4 = sqrtf(temp_f2_2 - temp_f0_2);
        return 1;
    }
block_4:
    return 0;
}

s32 func_80B2FC98(void *arg0, f32 *arg1) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    ? sp70;
    f32 sp4C;
    Vec3f *temp_s1;
    Vec3f *temp_s1_2;
    Vec3f *temp_s1_3;
    f32 *temp_a0;
    f32 *temp_a0_2;
    f32 *temp_a1;
    f32 *temp_a1_2;
    f32 *temp_a1_3;
    f32 *temp_s5;
    void *temp_s3;
    void *temp_s3_2;
    void *temp_s3_3;
    void *phi_s0;
    void *phi_s2;
    Vec3f *phi_s1;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;
    s32 phi_v0_4;
    s32 phi_v0_5;
    void *phi_s0_2;
    void *phi_s2_2;
    Vec3f *phi_s1_2;
    s32 phi_v0_6;
    s32 phi_v0_7;
    s32 phi_v0_8;
    s32 phi_v0_9;
    s32 phi_v0_10;
    void *phi_s0_3;
    void *phi_s2_3;
    Vec3f *phi_s1_3;
    s32 phi_v0_11;
    s32 phi_v0_12;
    s32 phi_v0_13;
    s32 phi_v0_14;
    s32 phi_v0_15;
    s32 phi_v0_16;
    void *phi_s3;
    void *phi_s3_2;
    void *phi_s3_3;

    phi_s0 = arg0;
    phi_s2 = arg0 + 0x18;
    phi_s1 = (Vec3f *) &sp4C;
    phi_s3 = arg0;
    if (arg0->unk_24 > 0.5f) {
        temp_s5 = &sp84;
        do {
            sp84 = 0.0f;
            temp_a1 = &sp78;
            sp88 = phi_s0->unk_4 - arg1[1];
            sp78 = 0.0f;
            sp8C = phi_s0->unk_8 - arg1[2];
            sp7C = phi_s2->unk_4 - arg1[1];
            sp80 = phi_s2->unk_8 - arg1[2];
            Math3D_CrossProduct((Vec3f *) temp_s5, (Vec3f *) temp_a1, phi_s1);
            temp_s1 = &phi_s1[1];
            temp_s3 = phi_s3 + 0xC;
            phi_s0 = temp_s3;
            phi_s2 = phi_s0;
            phi_s1 = temp_s1;
            phi_s3 = temp_s3;
        } while (temp_s1 != &sp70);
        phi_v0 = 0;
        phi_v0_2 = 0;
        phi_v0_3 = 0;
        phi_v0_4 = 0;
        phi_v0_5 = 0;
        if (sp4C >= 0.0f) {
            phi_v0 = 1;
        }
        if (phi_v0 != 0) {
            if (sp58 >= 0.0f) {
                phi_v0_2 = 1;
            }
            if (phi_v0_2 != 0) {
                if (sp64 >= 0.0f) {
                    phi_v0_3 = 1;
                }
                phi_v0_16 = phi_v0_3;
                if (phi_v0_3 == 0) {
                    goto block_12;
                }
                /* Duplicate return node #59. Try simplifying control flow for better match */
                return phi_v0_16;
            }
            goto block_12;
        }
block_12:
        if (sp4C < 0.0f) {
            phi_v0_4 = 1;
        }
        phi_v0_16 = phi_v0_4;
        if (phi_v0_4 != 0) {
            if (sp58 < 0.0f) {
                phi_v0_5 = 1;
            }
            phi_v0_16 = phi_v0_5;
            if ((phi_v0_5 != 0) && (phi_v0_16 = 0, (sp64 < 0.0f))) {
                return 1;
            }
            /* Duplicate return node #59. Try simplifying control flow for better match */
            return phi_v0_16;
        }
        /* Duplicate return node #59. Try simplifying control flow for better match */
        return phi_v0_16;
    }
    phi_s0_3 = arg0;
    phi_s2_3 = arg0 + 0x18;
    phi_s1_3 = (Vec3f *) &sp4C;
    phi_s3_3 = arg0;
    if (arg0->unk_28 > 0.5f) {
        phi_s0_2 = arg0;
        phi_s2_2 = arg0 + 0x18;
        phi_s1_2 = (Vec3f *) &sp4C;
        phi_s3_2 = arg0;
        do {
            sp88 = 0.0f;
            temp_a0 = &sp84;
            temp_a1_2 = &sp78;
            sp84 = phi_s0_2->unk_0 - arg1->unk_0;
            sp8C = phi_s0_2->unk_8 - arg1[2];
            sp7C = 0.0f;
            sp78 = phi_s2_2->unk_0 - arg1->unk_0;
            sp80 = phi_s2_2->unk_8 - arg1[2];
            Math3D_CrossProduct((Vec3f *) temp_a0, (Vec3f *) temp_a1_2, phi_s1_2);
            temp_s1_2 = &phi_s1_2[1];
            temp_s3_2 = phi_s3_2 + 0xC;
            phi_s0_2 = temp_s3_2;
            phi_s2_2 = phi_s0_2;
            phi_s1_2 = temp_s1_2;
            phi_s3_2 = temp_s3_2;
        } while (temp_s1_2 != &sp70);
        phi_v0_6 = 0;
        phi_v0_7 = 0;
        phi_v0_8 = 0;
        phi_v0_9 = 0;
        phi_v0_10 = 0;
        if (sp50 >= 0.0f) {
            phi_v0_6 = 1;
        }
        if (phi_v0_6 != 0) {
            if (sp5C >= 0.0f) {
                phi_v0_7 = 1;
            }
            if (phi_v0_7 != 0) {
                if (sp68 >= 0.0f) {
                    phi_v0_8 = 1;
                }
                phi_v0_16 = phi_v0_8;
                if (phi_v0_8 == 0) {
                    goto block_32;
                }
                /* Duplicate return node #59. Try simplifying control flow for better match */
                return phi_v0_16;
            }
            goto block_32;
        }
block_32:
        if (sp50 < 0.0f) {
            phi_v0_9 = 1;
        }
        phi_v0_16 = phi_v0_9;
        if (phi_v0_9 != 0) {
            if (sp5C < 0.0f) {
                phi_v0_10 = 1;
            }
            phi_v0_16 = phi_v0_10;
            if ((phi_v0_10 != 0) && (phi_v0_16 = 0, (sp68 < 0.0f))) {
                return 1;
            }
            /* Duplicate return node #59. Try simplifying control flow for better match */
            return phi_v0_16;
        }
        /* Duplicate return node #59. Try simplifying control flow for better match */
        return phi_v0_16;
    }
    do {
        temp_a0_2 = &sp84;
        temp_a1_3 = &sp78;
        sp84 = phi_s0_3->unk_0 - arg1->unk_0;
        sp8C = 0.0f;
        sp88 = phi_s0_3->unk_4 - arg1[1];
        sp78 = phi_s2_3->unk_0 - arg1->unk_0;
        sp80 = 0.0f;
        sp7C = phi_s2_3->unk_4 - arg1[1];
        Math3D_CrossProduct((Vec3f *) temp_a0_2, (Vec3f *) temp_a1_3, phi_s1_3);
        temp_s1_3 = &phi_s1_3[1];
        temp_s3_3 = phi_s3_3 + 0xC;
        phi_s0_3 = temp_s3_3;
        phi_s2_3 = phi_s0_3;
        phi_s1_3 = temp_s1_3;
        phi_s3_3 = temp_s3_3;
    } while (temp_s1_3 != &sp70);
    phi_v0_11 = 0;
    phi_v0_12 = 0;
    phi_v0_13 = 0;
    phi_v0_14 = 0;
    phi_v0_15 = 0;
    if (sp54 >= 0.0f) {
        phi_v0_11 = 1;
    }
    if (phi_v0_11 != 0) {
        if (sp60 >= 0.0f) {
            phi_v0_12 = 1;
        }
        if (phi_v0_12 != 0) {
            if (sp6C >= 0.0f) {
                phi_v0_13 = 1;
            }
            phi_v0_16 = phi_v0_13;
            if (phi_v0_13 == 0) {
                goto block_51;
            }
        } else {
            goto block_51;
        }
    } else {
block_51:
        if (sp54 < 0.0f) {
            phi_v0_14 = 1;
        }
        phi_v0_16 = phi_v0_14;
        if (phi_v0_14 != 0) {
            if (sp60 < 0.0f) {
                phi_v0_15 = 1;
            }
            phi_v0_16 = phi_v0_15;
            if (phi_v0_15 != 0) {
                phi_v0_16 = 0;
                if (sp6C < 0.0f) {
                    phi_v0_16 = 1;
                }
            }
        }
    }
    return phi_v0_16;
}

void func_80B300F4(Actor *arg0, GlobalContext *arg1, void *arg2, ? *arg3, f32 arg4, s32 arg5) {
    void *spE0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    ? spA0;
    f32 sp94;
    ? sp88;
    void *sp80;
    f32 *temp_fp;
    f32 temp_f0;
    f32 temp_f24;
    f32 temp_f2;
    s32 temp_s2;
    s8 temp_v0;
    void *temp_s0;
    f32 phi_f22;
    s32 phi_s2;

    temp_s0 = (arg5 * 0x18) + D_80B313A0;
    spE0 = ((arg0->params & 1) * 0x28) + &D_80B31350;
    sp80 = temp_s0;
    spAC = arg2->unk_24;
    spB0 = arg2->unk_28;
    spB4 = arg2->unk_2C;
    if (arg2->unk_28 < 0.5f) {
        Math3D_CrossProduct((Vec3f *) &spAC, &D_80B3140C, (Vec3f *) &sp88);
    } else {
        Math3D_CrossProduct((Vec3f *) &spAC, &D_80B31400, (Vec3f *) &sp88);
    }
    if (func_80B2FB10((Vec3f *) &sp88, &spA0) != 0) {
        temp_v0 = temp_s0->unk_F;
        temp_f24 = 6.2831855f / (f32) temp_v0;
        phi_f22 = 0.0f;
        phi_s2 = 0;
        if ((s32) temp_v0 > 0) {
            temp_fp = &spB8;
            do {
                SysMatrix_InsertRotationAroundUnitVector_f((Rand_ZeroOne() * temp_f24) + phi_f22, (Vec3f *) &spAC, 0);
                SysMatrix_MultiplyVector3fByState((Vec3f *) &spA0, (Vec3f *) &sp94);
                if (temp_s0 == D_80B313A0) {
                    spC4 = (sp94 * arg4) + arg3->unk_0;
                    spC8 = (sp98 * arg4) + arg3->unk_4;
                    spCC = (sp9C * arg4) + arg3->unk_8;
                } else {
                    temp_f0 = Rand_ZeroOne();
                    temp_f2 = (1.0f - (temp_f0 * temp_f0)) * arg4;
                    spC4 = (sp94 * temp_f2) + arg3->unk_0;
                    spC8 = (sp98 * temp_f2) + arg3->unk_4;
                    spCC = (sp9C * temp_f2) + arg3->unk_8;
                }
                if ((Math3D_DistanceSquared((Vec3f *) &spC4, arg0 + 0x24) < spE0->unk_1C) && (func_80B2FC98(arg2, &spC4) != 0)) {
                    spB8 = temp_s0->unk_8 * sp94;
                    spBC = temp_s0->unk_8 * sp98;
                    spC0 = temp_s0->unk_8 * sp9C;
                    EffectSsDeadDb_Spawn(arg1, (Vec3f *) &spC4, (Vec3f *) temp_fp, &D_801D15B0, temp_s0 + 0x10, temp_s0 + 0x14, (s16) (s32) temp_s0->unk_C, (s16) 0, (s32) temp_s0->unk_E);
                }
                temp_s2 = phi_s2 + 1;
                phi_f22 += temp_f24;
                phi_s2 = temp_s2;
            } while (temp_s2 < (s32) sp80->unk_F);
        }
    }
}

void func_80B30410(void *arg0, Vec3f *arg1) {
    Vec3f *temp_a0;

    temp_a0 = arg0 + 0x3A4;
    arg0 = arg0;
    Math_Vec3f_Copy(temp_a0, arg1);
    arg0->unk_3C2 = 0xFF;
    arg0->unk_3C3 = 0xFF;
    arg0->unk_3C4 = 0xFF;
    arg0->unk_3C5 = 0xFF;
    arg0->unk_3B0 = (f32) *D_80B313A0;
    arg0->unk_3B4 = (f32) *D_80B313B8;
    arg0->unk_3B8 = (f32) *D_80B313D0;
    arg0->unk_3C0 = 0;
    arg0->unk_3BC = (f32) *D_80B313E8;
}

s32 func_80B30480(void *arg0, GlobalContext *arg1, Vec3f *arg2) {
    f32 sp58;
    f32 sp54;
    Vec3f *temp_s6;
    s32 temp_s1;
    void *temp_s0;
    void *temp_v0;
    s32 phi_s1;
    s32 phi_s1_2;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    if ((temp_v0[1].room == 7) && (temp_s6 = temp_v0 + 0xB9C, phi_s1 = 0, ((s32) temp_v0->unk_B28 > 0))) {
loop_3:
        temp_s0 = arg0->unk_178 + phi_s1 + 0x28;
        phi_s1_2 = phi_s1;
        if ((func_80B2FB94(temp_s6, 6.0f, temp_s0, (Vec3f *) &sp58, &sp54) == 0) || (func_80B2FC98(temp_s0, &sp58) == 0)) {
            temp_s1 = phi_s1 + 0x5C;
            phi_s1 = temp_s1;
            phi_s1_2 = temp_s1;
            if (temp_s1 != 0x228) {
                goto loop_3;
            }
        }
        if (phi_s1_2 < 0x228) {
            Math_Vec3f_Copy(arg2, temp_s6);
            return 1;
        }
        goto block_8;
    }
block_8:
    return 0;
}

void ObjSpidertent_Init(Actor *thisx, GlobalContext *globalCtx) {
    ? sp94;
    ? sp88;
    ? sp7C;
    ? sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    ColliderTris *sp48;
    ColliderTris *temp_a1;
    Vec3f *temp_s0;
    f32 *temp_a0;
    f32 temp_f12;
    s32 temp_s1;
    s32 temp_s3;
    void *temp_s5;
    Vec3f *phi_s1;
    Vec3f *phi_s0;
    s32 phi_s3;
    s32 phi_s4;
    ObjSpidertent *this = (ObjSpidertent *) thisx;

    temp_s1 = this->actor.params & 1;
    Actor_ProcessInitChain((Actor *) this, D_80B31418);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    temp_a1 = &this->unk_15C;
    sp48 = temp_a1;
    Collider_InitTris(globalCtx, temp_a1);
    if (Flags_GetSwitch(globalCtx, ((s32) this->actor.params >> 8) & 0x7F) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_s5 = (temp_s1 * 0x28) + &D_80B31350;
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, temp_s5->unk_4);
    Collider_SetTris(globalCtx, sp48, (Actor *) this, temp_s5->unk_8, &this->unk_17C);
    SysMatrix_SetStateRotationAndTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (Vec3s *) &this->actor.shape);
    temp_a0 = &sp64;
    sp64 = temp_s5->unk_10 * 1.2f;
    sp68 = temp_s5->unk_10 * 1.2f;
    sp6C = temp_s5->unk_10 * 1.2f;
    SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, (Vec3f *) &this->actor.focus);
    SysMatrix_InsertTranslation(temp_s5->unk_10, temp_s5->unk_14 + 5.0f, temp_s5->unk_18, 1);
    temp_f12 = temp_s5->unk_C;
    Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
    SysMatrix_InsertTranslation(-temp_s5->unk_10, -temp_s5->unk_14, -temp_s5->unk_18, 1);
    phi_s3 = 0;
    phi_s4 = 0;
    do {
        phi_s1 = temp_s5->unk_8->elements + phi_s4 + 0x18;
        phi_s0 = (Vec3f *) &sp70;
loop_4:
        SysMatrix_MultiplyVector3fByState(phi_s1, phi_s0);
        temp_s0 = &phi_s0[1];
        phi_s1 = &phi_s1[1];
        phi_s0 = temp_s0;
        if (temp_s0 != &sp94) {
            goto loop_4;
        }
        Collider_SetTrisVertices(sp48, phi_s3, (Vec3f *) &sp70, (Vec3f *) &sp7C, (Vec3f *) &sp88);
        temp_s3 = phi_s3 + 1;
        phi_s3 = temp_s3;
        phi_s4 += 0x3C;
    } while (temp_s3 != 6);
    func_80B307E0(this);
}

void ObjSpidertent_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;
    ObjSpidertent *this = (ObjSpidertent *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk_144);
    Collider_DestroyTris(globalCtx, &this->unk_15C);
}

void func_80B307E0(ObjSpidertent *arg0) {
    arg0->unk_3C2 = 0xFF;
    arg0->unk_3C3 = 0xFF;
    arg0->unk_3C4 = 0xFF;
    arg0->unk_3C5 = 0xFF;
    arg0->actionFunc = func_80B30808;
}

void func_80B30808(ObjSpidertent *arg0, GlobalContext *arg1) {
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 *temp_a0;
    f32 temp_f0;
    s32 temp_s0;
    u8 temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    s32 phi_s1;
    f32 phi_f20;
    s32 phi_s0;
    s32 phi_s4;
    s32 phi_s0_2;

    temp_v0 = arg0->unk_15C.base.acFlags;
    phi_s0 = 0;
    phi_s0_2 = 0;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_15C.base.acFlags = temp_v0 & 0xFFFD;
        phi_s1 = 0;
        phi_f20 = 3.4028235e38f;
        phi_s4 = -1;
        do {
            temp_v0_2 = arg0->unk_15C.elements + phi_s1;
            if ((temp_v0_2->unk_16 & 2) != 0) {
                temp_a0 = &sp54;
                sp54 = (f32) temp_v0_2->unk_E;
                sp58 = (f32) temp_v0_2->unk_10;
                sp5C = (f32) temp_v0_2->unk_12;
                temp_f0 = Math3D_DistanceSquared((Vec3f *) temp_a0, arg1->actorCtx.actorList[2].first + 0x24);
                if (temp_f0 < phi_f20) {
                    phi_s4 = phi_s0;
                    phi_f20 = temp_f0;
                }
            }
            temp_s0 = phi_s0 + 1;
            phi_s1 += 0x5C;
            phi_s0 = temp_s0;
        } while (temp_s0 != 6);
        if (phi_s4 >= 0) {
            temp_v0_3 = arg0->unk_15C.elements + (phi_s4 * 0x5C);
            temp_v0_4 = temp_v0_3 + 0xE;
            sp70 = (f32) temp_v0_3->unk_E;
            sp74 = (f32) temp_v0_4->unk_2;
            sp78 = (f32) temp_v0_4->unk_4;
        } else {
            Math_Vec3f_Copy((Vec3f *) &sp70, arg0 + 0x24);
        }
        phi_s0_2 = 1;
    } else if ((arg0->actor.xzDistToPlayer < (((arg0->actor.params & 1) * 0x28) + &D_80B31350)->unk_24) && (func_80B30480(arg0, arg1, (Vec3f *) &sp70) != 0)) {
        phi_s0_2 = 1;
    }
    if (phi_s0_2 != 0) {
        func_80B30410(arg0, (Vec3f *) &sp70);
        func_80B30A2C(arg0);
        return;
    }
    CollisionCheck_SetAC(arg1, arg1 + 0x18884, arg0 + 0x15C);
}

void func_80B30A2C(ObjSpidertent *arg0) {
    arg0->actor.flags |= 0x10;
    arg0->actionFunc = func_80B30A4C;
}

void func_80B30A4C(Actor *arg0, GlobalContext *arg1) {
    if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
        if ((s32) arg0->cutscene >= 0) {
            func_800B7298(arg1, arg0, 1U);
        }
        Actor_SetSwitchFlag(arg1, ((s32) arg0->params >> 8) & 0x7F);
        func_80B30AD4(arg0);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
}

void func_80B30AD4(Actor *arg0) {
    arg0->unk_3C1 = 0x50;
    arg0->unk_3C6 = 0;
    arg0->unk_3C7 = 0;
    arg0[2].overlayEntry = func_80B30AF8;
}

void func_80B30AF8(Actor *arg0, GlobalContext *arg1) {
    ? sp60;
    f32 sp5C;
    f32 temp_f0;
    s32 temp_s0_2;
    s32 temp_s7;
    s8 temp_v1;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
    void *temp_s0;
    void *temp_s2;
    s8 phi_v0;
    Actor *phi_s1;
    s32 phi_s0;
    s32 phi_s7;

    arg0->unk_3C6 = (s8) (arg0->unk_3C6 + 1);
    temp_s0 = ((arg0->params & 1) * 0x28) + &D_80B31350;
    if ((s32) arg0->unk_3C6 < 0x28) {
        temp_v0 = arg0->unk_3C2;
        if ((s32) temp_v0 >= 3) {
            arg0->unk_3C2 = (u8) (temp_v0 - 2);
        } else {
            arg0->unk_3C2 = 0U;
        }
        temp_v0_2 = arg0->unk_3C3;
        if ((s32) temp_v0_2 >= 6) {
            arg0->unk_3C3 = (u8) (temp_v0_2 - 5);
        } else {
            arg0->unk_3C3 = 0U;
        }
        temp_v0_3 = arg0->unk_3C4;
        if ((s32) temp_v0_3 >= 6) {
            arg0->unk_3C4 = (u8) (temp_v0_3 - 5);
        } else {
            arg0->unk_3C4 = 0U;
        }
        temp_v0_4 = arg0->unk_3C5;
        if ((s32) temp_v0_4 >= 2) {
            arg0->unk_3C5 = (u8) (temp_v0_4 - 1);
        } else {
            goto block_24;
        }
    } else {
        temp_v0_5 = arg0->unk_3C2;
        if ((s32) temp_v0_5 >= 5) {
            arg0->unk_3C2 = (u8) (temp_v0_5 - 4);
        } else {
            arg0->unk_3C2 = 0U;
        }
        temp_v0_6 = arg0->unk_3C3;
        if ((s32) temp_v0_6 < 0xFF) {
            arg0->unk_3C3 = (u8) (temp_v0_6 + 1);
        } else {
            arg0->unk_3C3 = 0xFFU;
        }
        temp_v0_7 = arg0->unk_3C4;
        if ((s32) temp_v0_7 < 0xFF) {
            arg0->unk_3C4 = (u8) (temp_v0_7 + 1);
        } else {
            arg0->unk_3C4 = 0xFFU;
        }
        temp_v0_8 = arg0->unk_3C5;
        if ((s32) temp_v0_8 >= 0xB) {
            arg0->unk_3C5 = (u8) (temp_v0_8 - 0xA);
        } else {
block_24:
            arg0->unk_3C5 = 0U;
        }
    }
    arg0->unk_3C1 = (s8) (arg0->unk_3C1 - 1);
    if (arg0->unk_3C1 == 0x28) {
        func_800C62BC(arg1, arg1 + 0x880, arg0->unk_144);
    }
    if ((s32) arg0->unk_3C1 >= 0x20) {
        temp_v1 = arg0->unk_3C7;
        if ((s32) temp_v1 > 0) {
            arg0->unk_3C7 = (s8) (temp_v1 - 1);
        } else {
            if ((s32) arg0->unk_3C1 >= 0x33) {
                Audio_PlayActorSound2(arg0, 0x3878U);
                phi_v0 = Rand_S16Offset(2, 2);
            } else {
                Audio_PlaySoundAtPosition(arg1, (Vec3f *) &arg0->world, 0xB, 0x3878U);
                phi_v0 = Rand_S16Offset(2, 4);
            }
            arg0->unk_3C7 = phi_v0;
        }
        arg0[2].prev = (bitwise Actor *) ((bitwise f32) arg0[2].prev + D_80B313A0[1]);
        phi_s7 = 0;
        if (temp_s0->unk_20 < (bitwise f32) arg0[2].prev) {
            arg0->unk_3C0 = (u8) (arg0->unk_3C0 | 1);
        }
        arg0[2].next = (bitwise Actor *) ((bitwise f32) arg0[2].next + D_80B313B8[1]);
        if (temp_s0->unk_20 < (bitwise f32) arg0[2].next) {
            arg0->unk_3C0 = (u8) (arg0->unk_3C0 | 2);
        }
        arg0[2].init = (bitwise void (*)(Actor *, GlobalContext *)) ((bitwise f32) arg0[2].init + D_80B313D0[1]);
        if (temp_s0->unk_20 < (bitwise f32) arg0[2].init) {
            arg0->unk_3C0 = (u8) (arg0->unk_3C0 | 4);
        }
        arg0[2].destroy = (bitwise void (*)(Actor *, GlobalContext *)) ((bitwise f32) arg0[2].destroy + D_80B313E8[1]);
        if (temp_s0->unk_20 < (bitwise f32) arg0[2].destroy) {
            arg0->unk_3C0 = (u8) (arg0->unk_3C0 | 8);
        }
        do {
            temp_s2 = arg0->unk_178 + phi_s7 + 0x28;
            phi_s1 = arg0;
            phi_s0 = 0;
loop_43:
            temp_f0 = phi_s1[2].prev;
            if (!(temp_f0 < 5.0f) && ((arg0->unk_3C0 & (1 << phi_s0)) == 0) && (func_80B2FB94((Vec3f *) &arg0[2].colorFilterTimer, temp_f0, temp_s2, (Vec3f *) &sp60, &sp5C) != 0)) {
                func_80B300F4(arg0, arg1, temp_s2, &sp60, sp5C, phi_s0);
            }
            temp_s0_2 = phi_s0 + 1;
            phi_s1 += 4;
            phi_s0 = temp_s0_2;
            if (temp_s0_2 != 4) {
                goto loop_43;
            }
            temp_s7 = phi_s7 + 0x5C;
            phi_s7 = temp_s7;
        } while (temp_s7 != 0x228);
        return;
    }
    if ((s32) arg0->unk_3C1 <= 0) {
        ActorCutscene_Stop((s16) arg0->cutscene);
        Actor_MarkForDeath(arg0);
    }
}

void ObjSpidertent_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjSpidertent *this = (ObjSpidertent *) thisx;
    this->actionFunc(this, globalCtx);
}

void ObjSpidertent_Draw(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp30;
    s32 sp2C;
    Gfx *sp28;
    GraphicsContext *sp24;
    Gfx *sp18;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    GraphicsContext *temp_t0;
    s32 temp_f18;
    s32 temp_t1;
    ObjSpidertent *this = (ObjSpidertent *) thisx;

    temp_t1 = this->actor.params & 1;
    temp_f18 = (s32) ((f32) this->unk_3C5 * 0.5686275f);
    temp_t0 = globalCtx->state.gfxCtx;
    temp_v1 = temp_t0->polyXlu.p;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) &sSetupDL[150];
    temp_v1_2 = &temp_v1[1];
    temp_v1_2->words.w0 = 0xDA380003;
    temp_v1_3 = &temp_v1_2[1];
    sp28 = temp_v1_3;
    sp2C = temp_f18;
    sp30 = temp_t1;
    sp24 = temp_t0;
    this = this;
    sp18 = temp_v1_2;
    temp_v1_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v1_3->words.w0 = 0xFA0000FF;
    temp_v1_4 = &temp_v1_3[1];
    temp_v1_3->words.w1 = (this->unk_3C2 << 0x18) | (this->unk_3C3 << 0x10) | (this->unk_3C4 << 8) | (temp_f18 & 0xFF);
    temp_v1_4->words.w0 = 0xDE000000;
    temp_v1_4->words.w1 = *(&D_80B31350 + (temp_t1 * 0x28));
    temp_t0->polyXlu.p = &temp_v1_4[1];
}
