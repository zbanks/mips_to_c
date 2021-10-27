typedef struct ObjDriftice {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ void (*actionFunc)(ObjDriftice *, GlobalContext *);
    /* 0x160 */ s32 unk_160;                        /* inferred */
    /* 0x164 */ s32 unk_164;                        /* inferred */
    /* 0x168 */ s32 unk_168;                        /* inferred */
    /* 0x16C */ void *unk_16C;                      /* inferred */
    /* 0x170 */ ? unk_170;                          /* inferred */
    /* 0x170 */ char pad_170[0xCC];
    /* 0x23C */ f32 unk_23C;                        /* inferred */
    /* 0x240 */ f32 unk_240;                        /* inferred */
    /* 0x244 */ s16 unk_244;                        /* inferred */
    /* 0x246 */ char pad_246[0x2];
    /* 0x248 */ s32 unk_248;                        /* inferred */
    /* 0x24C */ char pad_24C[0x4];
} ObjDriftice;                                      /* size = 0x250 */

struct _mips2c_stack_ObjDriftice_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjDriftice_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjDriftice_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x8];                    /* maybe part of sp20[3]? */
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_ObjDriftice_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A66570 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A665AC {};              /* size 0x0 */

struct _mips2c_stack_func_80A665EC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A667F0 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A66930 {
    /* 0x00 */ char pad_0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A66C4C {
    /* 0x00 */ char pad_0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A66E30 {
    /* 0x00 */ char pad_0[0x22];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ s16 sp30;                            /* inferred */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ s16 sp34;                            /* inferred */
    /* 0x36 */ s16 sp36;                            /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A671A8 {};              /* size 0x0 */

struct _mips2c_stack_func_80A671BC {};              /* size 0x0 */

struct _mips2c_stack_func_80A671CC {};              /* size 0x0 */

struct _mips2c_stack_func_80A671E0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0x8];                    /* maybe part of sp24[3]? */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x8];                    /* maybe part of sp30[3]? */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x10];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80A6743C {};              /* size 0x0 */

struct _mips2c_stack_func_80A67450 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A674A8 {};              /* size 0x0 */

struct _mips2c_stack_func_80A674C4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_80A66570(ObjDriftice *arg0, s32 arg1, ObjDriftice *); /* static */
void func_80A665AC(s16 *arg0, s16 arg1);            /* static */
f32 func_80A665EC(? *arg0, ObjDriftice *arg1);      /* static */
f32 func_80A667F0(void *arg0, ObjDriftice *arg1);   /* static */
void func_80A66930(s16 *arg0, ObjDriftice *arg1, s16 *arg2, s16 *arg3); /* static */
void func_80A66C4C(void *arg0, ObjDriftice *arg1, s16 *arg2, s16 *arg3); /* static */
void func_80A66E30(? *arg0, ObjDriftice *arg1, ObjDriftice *); /* static */
void func_80A671A8(ObjDriftice *arg0);              /* static */
void func_80A671BC(s32 arg0, ? arg1);               /* static */
void func_80A671CC(ObjDriftice *arg0);              /* static */
void func_80A671E0(ObjDriftice *arg0, GlobalContext *arg1); /* static */
void func_80A6743C(ObjDriftice *arg0, s32);         /* static */
void func_80A67450(ObjDriftice *arg0, GlobalContext *arg1); /* static */
void func_80A674A8(ObjDriftice *arg0, s32);         /* static */
void func_80A674C4(void *arg0, ? arg1);             /* static */
extern Gfx D_060016A0;
extern CollisionHeader D_06001AA8;
static ? D_80A67620;                                /* unable to generate initializer */
static ? D_80A67644;                                /* unable to generate initializer */
static ? D_80A67664;                                /* unable to generate initializer */
static ? D_80A67694;                                /* unable to generate initializer */
static ? D_80A676B8;                                /* unable to generate initializer */
static ? D_80A676D0;                                /* unable to generate initializer */
static InitChainEntry D_80A676F4;                   /* unable to generate initializer */

void func_80A66570(ObjDriftice *arg0, s32 arg1) {
    Math_Vec3s_ToVec3f(arg0 + 0x24, arg0->unk_16C + (arg1 * 6));
}

void func_80A665AC(s16 *arg0, s16 arg1) {
    s16 temp_v0;
    s32 temp_v1;

    temp_v0 = *arg0;
    temp_v1 = -(s32) arg1;
    if ((s32) arg1 < (s32) temp_v0) {
        *arg0 = arg1;
        return;
    }
    if ((s32) temp_v0 < temp_v1) {
        *arg0 = (s16) temp_v1;
    }
}

f32 func_80A665EC(? *arg0, ObjDriftice *arg1) {
    f32 sp20;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0_2;
    s32 temp_v0;
    s32 phi_v0;
    f32 phi_f12;
    f32 phi_f2;

    temp_v0 = arg1->unk_248;
    phi_v0 = temp_v0;
    if (temp_v0 >= 0xA) {
        phi_f12 = -8.0f;
        phi_f2 = 0.0f;
    } else if (temp_v0 < -9) {
        phi_f12 = 0.0f;
        phi_f2 = 0.0f;
    } else {
        if (temp_v0 > 0) {
            phi_f12 = (Math_CosS((s16) (s32) (fabsf((f32) temp_v0) * 3276.8f)) - 1.0f) * 4.0f;
        } else {
            phi_f12 = (Math_CosS((s16) (s32) (fabsf((f32) temp_v0) * 3276.8f)) + 1.0f) * -4.0f;
        }
        phi_v0 = arg1->unk_248;
        phi_f2 = 0.0f;
    }
    if (phi_v0 > 0) {
        temp_v0_2 = arg0->unk_0;
        if ((s32) temp_v0_2 > 0) {
            arg0->unk_0 = (s16) (temp_v0_2 - 1);
        } else {
            sp20 = phi_f12;
            arg0->unk_0 = Rand_S16Offset(0x1E, 0x46);
            arg0->unk_4 = Rand_S16Offset(0x3E8, 0x3E8);
            temp_f2 = (Rand_ZeroOne() * 1.5f) + 1.0f;
            temp_f0 = temp_f2 - arg0->unk_8;
            arg0->unk_C = temp_f2;
            arg0->unk_10 = (f32) (fabsf(temp_f0) * 0.05f);
        }
    } else {
        arg0->unk_0 = 0;
        arg0->unk_C = phi_f2;
        arg0->unk_10 = (f32) ((fabsf(phi_f2 - arg0->unk_8) * 0.05f) + 0.02f);
    }
    arg0->unk_2 = (s16) (arg0->unk_2 + arg0->unk_4);
    sp20 = phi_f12;
    Math_StepToF(arg0 + 8, arg0->unk_C, arg0->unk_10);
    return phi_f12 + (Math_SinS(arg0->unk_2) * arg0->unk_8);
}

f32 func_80A667F0(void *arg0, ObjDriftice *arg1) {
    f32 temp_f20;
    s16 temp_v0;
    s32 temp_s2;
    void *temp_s1;
    void *phi_s0;
    s32 phi_s2;
    f32 *phi_s3;
    f32 phi_f20;

    phi_s0 = arg0;
    phi_s2 = 0;
    phi_s3 = arg0 + 8;
    phi_f20 = 0.0f;
    do {
        temp_v0 = phi_s0->unk_0;
        if ((s32) temp_v0 > 0) {
            phi_s0->unk_0 = (s16) (temp_v0 - 1);
        } else {
            temp_s1 = (phi_s2 * 0xC) + &D_80A67694;
            phi_s0->unk_0 = Rand_S16Offset(0x1E, 0x46);
            phi_s0->unk_4 = Rand_S16Offset(temp_s1->unk_0, temp_s1->unk_2);
            phi_s0->unk_C = (f32) ((Rand_ZeroOne() * temp_s1->unk_8) + temp_s1->unk_4);
            phi_s0->unk_10 = (f32) (fabsf(phi_s0->unk_C - phi_s0->unk_8) * 0.05f);
        }
        phi_s0->unk_2 = (s16) (phi_s0->unk_2 + phi_s0->unk_4);
        Math_StepToF(phi_s3, phi_s0->unk_C, phi_s0->unk_10);
        temp_s2 = phi_s2 + 1;
        temp_f20 = phi_f20 + (Math_SinS(phi_s0->unk_2) * phi_s0->unk_8);
        phi_s0 += 0x14;
        phi_s2 = temp_s2;
        phi_s3 = &phi_s3[5];
        phi_f20 = temp_f20;
    } while (temp_s2 != 3);
    return temp_f20;
}

void func_80A66930(s16 *arg0, ObjDriftice *arg1, s16 *arg2, s16 *arg3) {
    f32 temp_f20;
    f32 temp_f22;
    s16 *temp_s0;
    s32 temp_s2;
    void *temp_s1;
    f32 phi_f20;
    s16 phi_s0;
    s16 *phi_s3;
    s16 *phi_s0_2;
    s32 phi_s2;
    f32 *phi_s4;
    f32 phi_f22;

    phi_f22 = 0.0f;
    if (arg1->unk_248 > 0) {
        temp_f20 = arg1->actor.xzDistToPlayer * arg1->unk_240 * 0.0007075472f;
        phi_f20 = temp_f20;
        if (temp_f20 > 1.0f) {
            phi_f20 = 1.0f;
        } else if (temp_f20 < 0.01f) {
            phi_f20 = 0.01f;
        }
        Math_StepToS(arg0 + 2, (s16) (s32) (1200.0f * phi_f20), 0x64);
        Math_StepToS(arg0 + 6, (s16) (s32) (Math_CosS((s16) (s32) ((f32) arg0[2] * 6.5536f)) * (120.0f * phi_f20)), 0x28);
        Math_StepToF(arg0 + 8, 1.0f, 0.02f);
        phi_s0 = (s16) (s32) (2500.0f * phi_f20);
    } else {
        Math_StepToS(arg0 + 2, 0, 0x96);
        Math_StepToS(arg0 + 6, 0x14, 7);
        Math_StepToF(arg0 + 8, 0.0f, 0.02f);
        phi_s0 = 0;
    }
    Math_ScaledStepToS(arg0, arg1->actor.yawTowardsPlayer, arg0[1]);
    *arg3 = arg0->unk_0;
    Math_ScaledStepToS(&arg0[2], phi_s0, arg0[3]);
    temp_s0 = &arg0[6];
    phi_s3 = arg0;
    phi_s0_2 = temp_s0;
    phi_s2 = 0;
    phi_s4 = (f32 *) &temp_s0[4];
    do {
        if ((s32) phi_s3[6] > 0) {
            phi_s0_2->unk_0 += -1;
        } else {
            temp_s1 = (phi_s2 * 0xC) + &D_80A676B8;
            phi_s0_2->unk_0 = Rand_S16Offset(0x1E, 0x46);
            phi_s0_2[2] = Rand_S16Offset(temp_s1->unk_0, temp_s1->unk_2);
            phi_s0_2->unk_C = (f32) ((Rand_ZeroOne() * temp_s1->unk_8) + temp_s1->unk_4);
            phi_s0_2->unk_10 = (f32) (fabsf(phi_s0_2->unk_C - phi_s0_2->unk_8) * 0.033333335f);
        }
        phi_s0_2[1] += phi_s0_2[2];
        Math_StepToF(phi_s4, phi_s0_2->unk_C, phi_s0_2->unk_10);
        temp_s2 = phi_s2 + 1;
        temp_f22 = phi_f22 + (Math_SinS(phi_s0_2[1]) * phi_s0_2->unk_8);
        phi_s3 += 0x14;
        phi_s0_2 += 0x14;
        phi_s2 = temp_s2;
        phi_s4 = &phi_s4[5];
        phi_f22 = temp_f22;
    } while (temp_s2 != 2);
    *arg2 = (s32) (temp_f22 * arg0->unk_8) + arg0[2];
}

void func_80A66C4C(void *arg0, ObjDriftice *arg1, s16 *arg2, s16 *arg3) {
    f32 temp_f20;
    s16 temp_v0;
    s32 temp_s2;
    void *temp_s0;
    void *temp_s1;
    void *phi_s3;
    void *phi_s0;
    s32 phi_s2;
    f32 *phi_s4;
    f32 phi_f20;

    temp_v0 = arg0->unk_0;
    phi_f20 = 0.0f;
    if ((s32) temp_v0 > 0) {
        arg0->unk_0 = (s16) (temp_v0 - 1);
    } else {
        arg0->unk_0 = Rand_S16Offset(0x1E, 0x46);
        arg0->unk_4 = Rand_S16Offset(-0xC8, 0xC8);
        arg0->unk_8 = Rand_S16Offset(-0x190, 0x190);
    }
    Math_StepToS(arg0 + 2, arg0->unk_4, 0x32);
    Math_StepToS(arg0 + 6, arg0->unk_8, 0x32);
    temp_s0 = arg0 + 0xC;
    *arg3 = arg0->unk_2 + arg0->unk_6;
    phi_s3 = arg0;
    phi_s0 = temp_s0;
    phi_s2 = 0;
    phi_s4 = temp_s0 + 8;
    do {
        if ((s32) phi_s3->unk_C > 0) {
            phi_s0->unk_0 = (s16) (phi_s0->unk_0 - 1);
        } else {
            temp_s1 = (phi_s2 * 0xC) + &D_80A676D0;
            phi_s0->unk_0 = Rand_S16Offset(0x1E, 0x46);
            phi_s0->unk_4 = Rand_S16Offset(temp_s1->unk_0, temp_s1->unk_2);
            phi_s0->unk_C = (f32) ((Rand_ZeroOne() * temp_s1->unk_8) + temp_s1->unk_4);
            phi_s0->unk_10 = (f32) (fabsf(phi_s0->unk_C - phi_s0->unk_8) * 0.033333335f);
        }
        phi_s0->unk_2 = (s16) (phi_s0->unk_2 + phi_s0->unk_4);
        Math_StepToF(phi_s4, phi_s0->unk_C, phi_s0->unk_10);
        temp_s2 = phi_s2 + 1;
        temp_f20 = phi_f20 + (Math_SinS(phi_s0->unk_2) * phi_s0->unk_8);
        phi_s3 += 0x14;
        phi_s0 += 0x14;
        phi_s2 = temp_s2;
        phi_s4 = &phi_s4[5];
        phi_f20 = temp_f20;
    } while (temp_s2 != 3);
    *arg2 = (s16) (s32) temp_f20;
}

void func_80A66E30(? *arg0, ObjDriftice *arg1) {
    s16 sp36;
    s16 sp34;
    s16 sp32;
    s16 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    s16 sp22;
    s16 temp_a0;
    void *temp_s1;

    temp_s1 = ((arg1->actor.home.rot.x & 3) * 0x10) - 0x10 + &D_80A67664;
    sp2C = func_80A665EC(arg0, arg1);
    sp28 = func_80A667F0(arg0 + 0x14, arg1);
    func_80A66930(arg0 + 0x50, arg1, &sp32, &sp30);
    func_80A66C4C(arg0 + 0x84, arg1, &sp36, &sp34);
    arg1->actor.shape.yOffset = ((temp_s1->unk_0 * sp2C) + (sp28 * temp_s1->unk_4)) * arg1->unk_240;
    sp24 = ((f32) sp36 * temp_s1->unk_C) + ((f32) sp32 * temp_s1->unk_8);
    temp_a0 = (sp34 + sp30) - arg1->actor.shape.rot.y;
    sp22 = temp_a0;
    arg1->actor.shape.rot.x = (s16) (s32) (Math_CosS(temp_a0) * sp24);
    func_80A665AC(arg1 + 0xBC, 0xA28);
    arg1->actor.shape.rot.z = (s16) (s32) (-Math_SinS(temp_a0) * sp24);
    func_80A665AC(arg1 + 0xC0, 0xA28);
}

void ObjDriftice_Init(Actor *thisx, GlobalContext *globalCtx) {
    void *sp2C;
    s32 sp20;
    Path *temp_v0;
    s32 phi_v0;
    s32 phi_a1;
    s32 phi_a1_2;
    ObjDriftice *this = (ObjDriftice *) thisx;

    sp2C = ((this->actor.params & 3) * 0xC) + &D_80A67620;
    Actor_ProcessInitChain((Actor *) this, &D_80A676F4);
    this->actor.shape.rot.x = 0;
    this->actor.world.rot.x = 0;
    this->actor.shape.rot.z = 0;
    this->actor.world.rot.z = 0;
    Actor_SetScale((Actor *) this, sp2C->unk_0 * 0.035377357f);
    this->actor.uncullZoneScale = sp2C->unk_4;
    this->actor.uncullZoneDownward = sp2C->unk_8;
    this->unk_240 = 1.0f / this->actor.scale.x;
    this->unk_23C = *(&D_80A67644 + ((((s32) this->actor.params >> 9) & 7) * 4));
    phi_v0 = 0;
    if (this->unk_23C < 0.01f) {
        phi_v0 = 1;
    }
    this->unk_244 = (s16) (s32) ((f32) this->actor.home.rot.z * 45.511112f);
    phi_a1_2 = 0;
    if (phi_v0 == 0) {
        phi_a1_2 = 1;
    }
    phi_a1 = phi_a1_2;
    if (this->actor.home.rot.z != 0) {
        phi_a1 = phi_a1_2 | 3;
    }
    sp20 = phi_v0;
    BcCheck3_BgActorInit((DynaPolyActor *) this, phi_a1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06001AA8);
    if (phi_v0 != 0) {
        func_80A671A8(this);
        return;
    }
    this->actor.flags |= 0x10;
    this->unk_164 = 0;
    temp_v0 = &globalCtx->setupPathList[((s32) this->actor.params >> 2) & 0x7F];
    this->unk_168 = 1;
    this->unk_160 = temp_v0->count - 1;
    this->unk_16C = Lib_SegmentedToVirtual((void *) temp_v0->points);
    func_80A66570(this, this->unk_164);
    func_80A671CC(this);
}

void ObjDriftice_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjDriftice *this = (ObjDriftice *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

void func_80A671A8(ObjDriftice *arg0) {
    arg0->actionFunc = func_80A671BC;
}

void func_80A671BC(ObjDriftice *arg0, GlobalContext *arg1) {

}

void func_80A671CC(ObjDriftice *arg0) {
    arg0->actionFunc = func_80A671E0;
}

void func_80A671E0(ObjDriftice *arg0, GlobalContext *arg1) {
    ? sp40;
    f32 sp3C;
    s32 sp30;
    Vec3f *sp24;
    Vec3f *temp_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s32 temp_a0;
    s32 temp_at;
    s32 temp_v1;
    void *temp_v0;
    void *temp_v1_2;
    f32 phi_f0;
    f32 phi_f12;
    s32 phi_a1;

    Math_Vec3s_ToVec3f((Vec3f *) &sp40, arg0->unk_16C + (arg0->unk_164 * 6) + (arg0->unk_168 * 6));
    temp_a2 = arg0 + 0x64;
    sp24 = temp_a2;
    Math_Vec3f_Diff((Vec3f *) &sp40, arg0 + 0x24, temp_a2);
    temp_f0 = Math3D_Vec3fMagnitude(sp24);
    temp_f2 = arg0->unk_23C;
    if (temp_f0 < (temp_f2 * 8.0f)) {
        phi_f0 = temp_f2 * 0.4f;
        phi_f12 = temp_f2 * 0.05f;
    } else {
        phi_f0 = temp_f2;
        phi_f12 = temp_f2 * 0.13f;
    }
    sp3C = temp_f0;
    Math_StepToF(arg0 + 0x70, phi_f0, phi_f12);
    temp_f0_2 = arg0->actor.speedXZ;
    if ((temp_f0_2 + 0.05f) < temp_f0) {
        Math_Vec3f_Scale(sp24, temp_f0_2 / temp_f0);
        arg0->actor.world.pos.x += arg0->actor.velocity.x;
        arg0->actor.world.pos.y += arg0->actor.velocity.y;
        arg0->actor.world.pos.z += arg0->actor.velocity.z;
        return;
    }
    temp_a0 = arg0->unk_160;
    temp_v1 = arg0->unk_164 + arg0->unk_168;
    temp_at = temp_v1 < temp_a0;
    arg0->unk_164 = temp_v1;
    arg0->actor.speedXZ *= 0.5f;
    phi_a1 = 1;
    if (((temp_at == 0) && (arg0->unk_168 > 0)) || ((temp_v1 <= 0) && (arg0->unk_168 < 0))) {
        if ((((s32) arg0->actor.params >> 0xC) & 1) == 0) {
            arg0->unk_168 = -arg0->unk_168;
            sp30 = 1;
            func_80A674A8(arg0, 1);
        } else {
            temp_v1_2 = arg0->unk_16C + (temp_a0 * 6);
            if (arg0->unk_168 > 0) {
                arg0->unk_164 = 0;
            } else {
                arg0->unk_164 = temp_a0;
            }
            temp_v0 = arg0->unk_16C;
            if ((temp_v1_2->unk_0 != temp_v0->unk_0) || (temp_v1_2->unk_2 != temp_v0->unk_2) || (temp_v1_2->unk_4 != temp_v0->unk_4)) {
                func_80A6743C(arg0, 1);
                func_800C62BC(arg1, arg1 + 0x880, arg0->unk_144);
                phi_a1 = 0;
            }
        }
    }
    if (phi_a1 != 0) {
        func_80A66570(arg0, arg0->unk_164);
    }
}

void func_80A6743C(ObjDriftice *arg0) {
    arg0->actionFunc = func_80A67450;
}

void func_80A67450(ObjDriftice *arg0, GlobalContext *arg1) {
    ObjDriftice *temp_a0;
    ObjDriftice *temp_a3;
    s32 temp_a1;

    temp_a3 = arg0;
    temp_a0 = temp_a3;
    if (temp_a3->unk_248 < 0) {
        temp_a1 = temp_a3->unk_164;
        arg0 = temp_a3;
        func_80A66570(temp_a0, temp_a1, temp_a3);
        func_800C6314(arg1, arg1 + 0x880, arg0->unk_144);
        func_80A671CC(arg0);
    }
}

void func_80A674A8(ObjDriftice *arg0) {
    arg0->unk_24C = 0xA;
    arg0->actionFunc = func_80A674C4;
}

void func_80A674C4(ObjDriftice *arg0, GlobalContext *arg1) {
    s32 temp_t7;

    temp_t7 = arg0->unk_24C - 1;
    arg0->unk_24C = temp_t7;
    if (temp_t7 <= 0) {
        arg0->actor.speedXZ = 0.0f;
        func_80A671CC();
    }
}

void ObjDriftice_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjDriftice *temp_a0;
    ObjDriftice *temp_a0_2;
    ObjDriftice *temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;
    ObjDriftice *this = (ObjDriftice *) thisx;

    temp_a0 = this;
    this = this;
    temp_a2 = this;
    if (func_800CAF70((DynaPolyActor *) temp_a0) != 0) {
        temp_v0 = temp_a2->unk_248;
        if (temp_v0 < 0) {
            temp_a2->unk_248 = 1;
        } else {
            temp_a2->unk_248 = temp_v0 + 1;
        }
    } else {
        temp_v0_2 = temp_a2->unk_248;
        if (temp_v0_2 > 0) {
            temp_a2->unk_248 = -1;
        } else {
            temp_a2->unk_248 = temp_v0_2 - 1;
        }
    }
    temp_a0_2 = temp_a2;
    temp_a2->actor.shape.rot.y += temp_a2->unk_244;
    this = temp_a2;
    temp_a2->actionFunc(temp_a0_2, globalCtx);
    if (((this->actor.home.rot.x & 3) != 0) && ((this->actor.flags & 0x40) != 0)) {
        func_80A66E30(&this->unk_170, this, this);
    }
}

void ObjDriftice_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjDriftice *this = (ObjDriftice *) thisx;
    func_800BDFC0(globalCtx, &D_060016A0);
}
