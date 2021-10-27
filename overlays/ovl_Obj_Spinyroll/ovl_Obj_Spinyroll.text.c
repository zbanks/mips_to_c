typedef struct ObjSpinyroll {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ ColliderTris unk_15C;               /* inferred */
    /* 0x17C */ ColliderTrisElement unk_17C;        /* inferred */
    /* 0x1D8 */ char pad_1D8[0x2C4];                /* maybe part of unk_17C[8]? */
    /* 0x49C */ s32 unk_49C;                        /* inferred */
    /* 0x4A0 */ void (*actionFunc)(ObjSpinyroll *, GlobalContext *);
    /* 0x4A4 */ f32 unk_4A4;                        /* inferred */
    /* 0x4A8 */ char pad_4A8[0x4];
    /* 0x4AC */ ColliderTris unk_4AC;               /* inferred */
    /* 0x4CC */ char pad_4CC[0x4];
    /* 0x4D0 */ f32 unk_4D0;                        /* inferred */
    /* 0x4D4 */ char pad_4D4[0x6];                  /* maybe part of unk_4D0[2]? */
    /* 0x4DA */ s16 unk_4DA;                        /* inferred */
    /* 0x4DC */ char pad_4DC[0x2];
    /* 0x4DE */ s16 unk_4DE;                        /* inferred */
    /* 0x4E0 */ s16 unk_4E0;                        /* inferred */
    /* 0x4E2 */ char pad_4E2[0x2];
} ObjSpinyroll;                                     /* size = 0x4E4 */

struct _mips2c_stack_ObjSpinyroll_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjSpinyroll_Draw {
    /* 0x00 */ char pad_0[0x84];
    /* 0x84 */ s16 sp84;                            /* inferred */
    /* 0x86 */ s16 sp86;                            /* inferred */
    /* 0x88 */ s16 sp88;                            /* inferred */
    /* 0x8A */ char pad_8A[0x26];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_ObjSpinyroll_Init {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderTris *sp2C;                  /* inferred */
    /* 0x30 */ Vec3s *sp30;                         /* inferred */
    /* 0x34 */ void *sp34;                          /* inferred */
    /* 0x38 */ char pad_38[0xC];                    /* maybe part of sp34[4]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_ObjSpinyroll_Update {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderTris *sp20;                  /* inferred */
    /* 0x24 */ CollisionCheckContext *sp24;         /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A1DA50 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ? sp1C;                              /* inferred */
    /* 0x1C */ char pad_1C[0xC];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A1DAAC {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A1DB2C {
    /* 0x00 */ char pad_0[0x58];
    /* 0x58 */ ColliderTris *sp58;                  /* inferred */
    /* 0x5C */ char pad_5C[0x14];                   /* maybe part of sp58[6]? */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ ? sp7C;                              /* inferred */
    /* 0x7C */ char pad_7C[0xC];
    /* 0x88 */ ? sp88;                              /* inferred */
    /* 0x88 */ char pad_88[0xC];
    /* 0x94 */ ? sp94;                              /* inferred */
    /* 0x94 */ char pad_94[0xC];
    /* 0xA0 */ ? spA0;                              /* inferred */
    /* 0xA0 */ char pad_A0[0x10];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_80A1DC5C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A1DCCC {};              /* size 0x0 */

struct _mips2c_stack_func_80A1DD18 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A1DE10 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A1DE58 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A1DE84 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A1DEB8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0xC];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A1DFA0 {};              /* size 0x0 */

struct _mips2c_stack_func_80A1E074 {
    /* 0x00 */ char pad_0[0x90];
    /* 0x90 */ f32 *sp90;                           /* inferred */
    /* 0x94 */ void *sp94;                          /* inferred */
    /* 0x98 */ s32 sp98;                            /* inferred */
    /* 0x9C */ char pad_9C[0x14];                   /* maybe part of sp98[6]? */
    /* 0xB0 */ ? spB0;                              /* inferred */
    /* 0xB0 */ char pad_B0[0xC];
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ char pad_D4[0x4];
    /* 0xD8 */ s32 spD8;                            /* inferred */
    /* 0xDC */ char pad_DC[0x4];
    /* 0xE0 */ void *spE0;                          /* inferred */
    /* 0xE4 */ char pad_E4[0x4];
};                                                  /* size = 0xE8 */

struct _mips2c_stack_func_80A1E2D8 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A1E334 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A1E394 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A1E3D8 {
    /* 0x00 */ char pad_0[0x7C];
    /* 0x7C */ f32 *sp7C;                           /* inferred */
    /* 0x80 */ char pad_80[0x4];
    /* 0x84 */ s32 sp84;                            /* inferred */
    /* 0x88 */ char pad_88[0xC];                    /* maybe part of sp84[4]? */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ char pad_B8[0x4];
    /* 0xBC */ s32 spBC;                            /* inferred */
    /* 0xC0 */ void (*spC0)(CollisionContext *, f32 *, CollisionPoly **, s32 *, f32 *, Actor *); /* inferred */
    /* 0xC4 */ char pad_C4[0x4];
    /* 0xC8 */ void *spC8;                          /* inferred */
    /* 0xCC */ char pad_CC[0x4];
};                                                  /* size = 0xD0 */

struct _mips2c_stack_func_80A1E648 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A1E694 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A1E6D4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A1E9C4 {};              /* size 0x0 */

struct _mips2c_stack_func_80A1E9E0 {};              /* size 0x0 */

struct _mips2c_stack_func_80A1EA10 {};              /* size 0x0 */

struct _mips2c_stack_func_80A1EA4C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A1EAAC {};              /* size 0x0 */

struct _mips2c_stack_func_80A1EAE0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A1EB40 {};              /* size 0x0 */

struct _mips2c_stack_func_80A1EB54 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A1EC24 {};              /* size 0x0 */

struct _mips2c_stack_func_80A1EC38 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A1ECC0 {};              /* size 0x0 */

struct _mips2c_stack_func_80A1ECD4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

? func_800C4F84(CollisionPoly **, ?, CollisionContext *, f32 *, s32 *); /* extern */
s32 func_800C56E0(s32, f32 *, f32 *, ? *, void *, s32, s32, s32, s32, void *, Actor *, f32); /* extern */
void func_80A1DA50(GlobalContext *arg0, Actor *arg1, Vec3f *arg2, Vec3f *arg3); /* static */
void func_80A1DAAC(Vec3f *arg0, f32 *arg1, s16 arg2); /* static */
void func_80A1DB2C(ObjSpinyroll *arg0);             /* static */
void func_80A1DC5C(ObjSpinyroll *arg0);             /* static */
void func_80A1DCCC(ObjSpinyroll *arg0);             /* static */
void func_80A1DD18(ObjSpinyroll *arg0);             /* static */
void func_80A1DE10(void *arg0);                     /* static */
void func_80A1DE58(ObjSpinyroll *arg0);             /* static */
void func_80A1DE84(ObjSpinyroll *arg0);             /* static */
s32 func_80A1DEB8(ObjSpinyroll *arg0);              /* static */
void func_80A1DFA0(ObjSpinyroll *arg0);             /* static */
s32 func_80A1E074(Actor *arg0, GlobalContext *arg1, Vec3f *arg2, s32 arg3); /* static */
s32 func_80A1E2D8(ObjSpinyroll *arg0, GlobalContext *arg2, ?); /* static */
? func_80A1E334(CollisionContext *arg0, f32 *arg1, CollisionPoly **arg2, s32 *arg3, Vec3f *arg4, Actor *arg5); /* static */
void func_80A1E394(CollisionContext *arg2, f32 *arg3, CollisionPoly **arg4, s32 *arg5, f32 *, Actor *); /* static */
s32 func_80A1E3D8(Actor *arg0, GlobalContext *arg1, f32 *arg2, s32 arg3); /* static */
s32 func_80A1E648(ObjSpinyroll *arg0, GlobalContext *arg2, ?); /* static */
DynaPolyActor *func_80A1E694(ObjSpinyroll *arg0, GlobalContext *arg1); /* static */
s32 func_80A1E6D4(ObjSpinyroll *, GlobalContext *); /* static */
void func_80A1E9C4(ObjSpinyroll *arg0);             /* static */
void func_80A1E9E0(void *arg0, ? arg1);             /* static */
void func_80A1EA10(ObjSpinyroll *arg0);             /* static */
void func_80A1EA4C(ObjSpinyroll *arg0, ? arg1);     /* static */
void func_80A1EAAC(ObjSpinyroll *arg0);             /* static */
void func_80A1EAE0(void *arg0, ? arg1);             /* static */
void func_80A1EB40(void *arg0);                     /* static */
void func_80A1EB54(ObjSpinyroll *arg0, GlobalContext *arg1); /* static */
void func_80A1EC24(ObjSpinyroll *arg0);             /* static */
void func_80A1EC38(ObjSpinyroll *arg0, GlobalContext *arg1); /* static */
void func_80A1ECC0(void *arg0);                     /* static */
void func_80A1ECD4(ObjSpinyroll *arg0, GlobalContext *arg1); /* static */
extern ? D_06000460;
extern CollisionHeader D_06000E68;
static ColliderTrisElementInit D_80A1F040[6] = {
    {
        {0, {0x20000000, 0, 4}, {0x1C37BB6, 0, 0}, 1, 1, 0},
        {{{-60.0f, 0.0f, 17.0f}, {60.0f, 0.0f, 17.0f}, {60.0f, 40.0f, 17.0f}}},
    },
    {
        {0, {0x20000000, 0, 4}, {0x1C37BB6, 0, 0}, 1, 1, 0},
        {{{-60.0f, 0.0f, 17.0f}, {60.0f, 40.0f, 17.0f}, {-60.0f, 40.0f, 17.0f}}},
    },
    {
        {0, {0x20000000, 0, 4}, {0x1C37BB6, 0, 0}, 1, 1, 0},
        {{{60.0f, 0.0f, -17.0f}, {-60.0f, 0.0f, -17.0f}, {-60.0f, 40.0f, -17.0f}}},
    },
    {
        {0, {0x20000000, 0, 4}, {0x1C37BB6, 0, 0}, 1, 1, 0},
        {{{60.0f, 0.0f, -17.0f}, {-60.0f, 40.0f, -17.0f}, {60.0f, 40.0f, -17.0f}}},
    },
    {
        {0, {0xF7CFFFFF, 4, 4}, {0x1C37BB6, 0, 0}, 1, 1, 0},
        {{{60.0f, 20.0f, -12.0f}, {-60.0f, 20.0f, -12.0f}, {-60.0f, 20.0f, 12.0f}}},
    },
    {
        {0, {0xF7CFFFFF, 4, 4}, {0x1C37BB6, 0, 0}, 1, 1, 0},
        {{{60.0f, 20.0f, -12.0f}, {-60.0f, 20.0f, 12.0f}, {60.0f, 20.0f, 12.0f}}},
    },
};
static ColliderTrisInit D_80A1F1A8 = {{9, 0x11, 0xD, 0, 0, 2}, 6, &D_80A1F040};
static ? D_80A1F1B8;                                /* unable to generate initializer */
static ? D_80A1F1C4;                                /* unable to generate initializer */
static ? D_80A1F1E4;                                /* unable to generate initializer */
static f32 D_80A1F1F4[2] = {30.0f, -30.0f};
static f32 D_80A1F1FC[2] = {9.0f, -9.0f};
static InitChainEntry D_80A1F204[2];                /* unable to generate initializer */
static ? D_80A1F20C;                                /* unable to generate initializer */

void func_80A1DA50(GlobalContext *arg0, Actor *arg1, Vec3f *arg2, Vec3f *arg3) {
    ? sp1C;

    Math_Vec3f_Sum(arg2, arg3, (Vec3f *) &sp1C);
    Math_Vec3f_Scale((Vec3f *) &sp1C, 0.5f);
    EffectSsHitMark_SpawnFixedScale(arg0, 3, (Vec3f *) &sp1C);
    Audio_PlayActorSound2(arg1, 0x1808U);
}

void func_80A1DAAC(Vec3f *arg0, f32 *arg1, s16 arg2) {
    f32 sp1C;
    f32 temp_f0;

    sp1C = Math_SinS(arg2);
    temp_f0 = Math_CosS(arg2);
    arg0->x = (arg1[2] * sp1C) + (arg1->unk_0 * temp_f0);
    arg0->y = arg1[1];
    arg0->z = (arg1[2] * temp_f0) - (arg1->unk_0 * sp1C);
}

void func_80A1DB2C(ObjSpinyroll *arg0) {
    ? spA0;
    ? sp94;
    ? sp88;
    ? sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    ColliderTris *sp58;
    Vec3f *temp_s0;
    f32 *temp_a1;
    s32 temp_fp;
    void *temp_v0;
    s32 phi_s3;
    s32 phi_s1;
    Vec3f *phi_s0;
    s32 phi_fp;

    sp58 = arg0 + 0x15C;
    phi_s3 = 0;
    phi_fp = 0;
    do {
        phi_s1 = 0;
        phi_s0 = (Vec3f *) &sp7C;
loop_2:
        temp_a1 = &sp70;
        temp_v0 = phi_s3 + D_80A1F1A8.elements + phi_s1;
        sp70 = temp_v0->unk_18 * *(&D_80A1F1B8 + ((((s32) arg0->actor.params >> 0xE) & 3) * 4));
        sp74 = temp_v0->unk_1C;
        sp78 = temp_v0->unk_20;
        func_80A1DAAC(phi_s0, temp_a1, arg0->actor.shape.rot.y);
        Math_Vec3f_Sum(phi_s0, arg0 + 0x24, phi_s0);
        temp_s0 = &phi_s0[1];
        phi_s1 += 0xC;
        phi_s0 = temp_s0;
        if (temp_s0 != &spA0) {
            goto loop_2;
        }
        Collider_SetTrisVertices(sp58, phi_fp, (Vec3f *) &sp7C, (Vec3f *) &sp88, (Vec3f *) &sp94);
        temp_fp = phi_fp + 1;
        phi_s3 += 0x3C;
        phi_fp = temp_fp;
    } while (temp_fp != 6);
}

void func_80A1DC5C(ObjSpinyroll *arg0) {
    ObjSpinyroll *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk_4D8 += 0x5DC0;
    arg0 = temp_a3;
    Math_StepToF(temp_a3 + 0x4D4, 0.0f, 0.32f);
    arg0->unk_4D0 = ((Math_SinS(arg0->unk_4D8) + 1.0f) * arg0->unk_4D4) + 24.0f;
}

void func_80A1DCCC(ObjSpinyroll *arg0) {
    f32 temp_f0;
    f32 phi_f2;

    temp_f0 = arg0->actor.speedXZ;
    if (temp_f0 > 3.0f) {
        phi_f2 = 3.0f;
    } else {
        phi_f2 = temp_f0;
    }
    if (arg0->unk_4D4 < phi_f2) {
        arg0->unk_4D4 = phi_f2;
    }
}

void func_80A1DD18(ObjSpinyroll *arg0) {
    Vec3f *sp20;
    ObjSpinyroll *temp_a3;
    Vec3f *temp_a0;
    Vec3f *temp_a2;
    Vec3f *temp_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 phi_f2;

    temp_a3 = arg0;
    temp_s0 = temp_a3 + 0x4C4;
    temp_a2 = temp_s0;
    temp_a0 = temp_a3 + ((temp_a3->unk_4A8 ^ 1) * 0xC) + 0x4AC;
    sp20 = temp_a0;
    arg0 = temp_a3;
    Math_Vec3f_Diff(temp_a0, temp_a3 + 0x24, temp_a2);
    temp_f0 = Math3D_Vec3fMagnitude(temp_s0);
    phi_f2 = temp_f0;
    if ((temp_f0 < 0.01f) && (Math_Vec3f_Diff(sp20, arg0 + (arg0->unk_4A8 * 0xC) + 0x4AC, temp_s0), temp_f0_2 = Math3D_Vec3fMagnitude(temp_s0), phi_f2 = temp_f0_2, (temp_f0_2 < 0.01f))) {
        Math_Vec3f_Copy(temp_s0, &D_801D15B0);
        return;
    }
    Math_Vec3f_Scale(temp_s0, 1.0f / phi_f2);
}

void func_80A1DE10(void *arg0) {
    s32 temp_t6;
    void *temp_a2;

    temp_a2 = arg0;
    temp_t6 = temp_a2->unk_4A8;
    arg0 = temp_a2;
    arg0->unk_32 = Math_Vec3f_Yaw(temp_a2 + 0x24, temp_a2 + ((temp_t6 ^ 1) * 0xC) + 0x4AC);
}

void func_80A1DE58(ObjSpinyroll *arg0) {
    arg0->unk_4A8 = 0;
    func_80A1DE10();
    func_80A1DD18(arg0);
}

void func_80A1DE84(ObjSpinyroll *arg0) {
    arg0->unk_4A8 ^= 1;
    func_80A1DE10();
    func_80A1DD18(arg0);
}

s32 func_80A1DEB8(ObjSpinyroll *arg0) {
    s32 sp30;
    ? sp24;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 phi_v0;

    sp30 = arg0->unk_4A8 ^ 1;
    temp_f0 = arg0->unk_4A4;
    Math_StepToF(arg0 + 0x70, temp_f0, temp_f0 * 0.2f);
    temp_f2 = arg0->actor.speedXZ;
    arg0->actor.world.pos.x += temp_f2 * arg0->unk_4AC.count;
    arg0->actor.world.pos.y += temp_f2 * arg0->unk_4AC.elements;
    arg0->actor.world.pos.z += temp_f2 * arg0->unk_4CC;
    Math_Vec3f_Diff(arg0 + (sp30 * 0xC) + 0x4AC, arg0 + 0x24, (Vec3f *) &sp24);
    temp_f2_2 = arg0->actor.speedXZ;
    phi_v0 = 0;
    if (Math3D_LengthSquared((Vec3f *) &sp24) < ((temp_f2_2 * temp_f2_2) + 0.05f)) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_80A1DFA0(ObjSpinyroll *arg0) {
    f32 *temp_v0;
    f32 temp_f0;
    s32 temp_a1;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 phi_v1;
    f32 phi_f12;
    void *phi_a2;
    s32 phi_v0;
    s32 phi_a1;

    temp_v0 = ((((s32) arg0->actor.params >> 0xE) & 3) * 4) + &D_80A1F1B8;
    temp_v1 = (s32) (*temp_v0 * 120.0f * 0.01724138f) + 2;
    arg0->unk_498 = temp_v1;
    temp_f0 = (*temp_v0 * 120.0f) - 2.0f;
    phi_v1 = temp_v1;
    phi_a1 = 0;
    do {
        phi_f12 = temp_f0 * 0.5f;
        phi_v0 = 0;
        if (phi_v1 > 0) {
            phi_a2 = arg0 + (phi_a1 * 0x78);
            do {
                phi_a2->unk_3A4 = phi_f12;
                temp_v1_2 = arg0->unk_498;
                temp_v0_2 = phi_v0 + 1;
                phi_f12 -= temp_f0 / (f32) (temp_v1 - 1);
                phi_a2 += 0xC;
                phi_v0 = temp_v0_2;
                phi_v1 = temp_v1_2;
            } while (temp_v0_2 < temp_v1_2);
        }
        temp_a1 = phi_a1 + 1;
        phi_a1 = temp_a1;
    } while (temp_a1 != 2);
}

s32 func_80A1E074(Actor *arg0, GlobalContext *arg1, Vec3f *arg2, s32 arg3) {
    void *spE0;
    s32 spD8;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    ? spB0;
    s32 sp98;
    void *sp94;
    f32 *sp90;
    f32 *temp_s1;
    f32 *temp_s6;
    f32 *temp_s7;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f8;
    s32 temp_s3;
    s32 temp_v0;
    void *temp_t6;
    s32 phi_v0;
    f32 *phi_v1;
    f32 *phi_s1;
    void *phi_s4;
    void *phi_s5;
    f32 phi_f20;
    s32 phi_s3;
    s32 phi_v0_2;
    f32 *phi_v1_2;
    f32 phi_f20_2;
    f32 phi_f20_3;

    temp_t6 = arg0 + 0x3A4;
    sp94 = temp_t6;
    spE0 = temp_t6;
    sp98 = 0;
    spCC = arg0->world.pos.y + 10.0f;
    spC0 = spCC;
    arg0[3].shape.shadowDraw = NULL;
    temp_s7 = &spBC;
    temp_s6 = &spC8;
    phi_v0 = 0;
    phi_v1 = D_80A1F1F4;
    phi_f20_2 = 3.4028235e38f;
    do {
        temp_f0 = *phi_v1;
        temp_f22 = arg0[3].projectedW * temp_f0;
        temp_f24 = arg0[3].uncullZoneScale * temp_f0;
        phi_f20 = phi_f20_2;
        phi_s3 = 0;
        phi_v0_2 = phi_v0;
        phi_v1_2 = phi_v1;
        if (sp94->unk_F4 > 0) {
            temp_s1 = sp94 + (phi_v0 * 0x78);
            spD8 = phi_v0;
            sp90 = phi_v1;
            phi_s1 = temp_s1;
            phi_s4 = temp_s1 + 4;
            phi_s5 = temp_s1 + 8;
            do {
                temp_f10 = (Math_CosS(arg0->world.rot.y) * *phi_s1) + arg0->world.pos.x;
                spC8 = temp_f10;
                temp_f8 = (-Math_SinS(arg0->world.rot.y) * *phi_s1) + arg0->world.pos.z;
                spBC = temp_f22 + temp_f10;
                spD0 = temp_f8;
                spC4 = temp_f24 + temp_f8;
                phi_f20_3 = phi_f20;
                if (func_800C56E0(arg1 + 0x830, temp_s6, temp_s7, &spB0, phi_s4, 1, 0, 0, 1, phi_s5, arg0, 0.0f) != 0) {
                    if ((arg3 != 0) && ((arg0->flags & 0x40) != 0)) {
                        func_80A1DA50(arg1, arg0, (Vec3f *) temp_s6, (Vec3f *) &spB0);
                    }
                    temp_f0_2 = Math3D_DistanceSquared((Vec3f *) temp_s6, (Vec3f *) &spB0);
                    if (temp_f0_2 < phi_f20) {
                        temp_f20 = temp_f0_2;
                        sp98 = 1;
                        Math_Vec3f_Diff((Vec3f *) &spB0, (Vec3f *) temp_s7, arg2);
                        sp94->unk_F0 = phi_s1;
                        phi_f20_3 = temp_f20;
                    }
                }
                temp_s3 = phi_s3 + 1;
                phi_s1 += 0xC;
                phi_s4 += 0xC;
                phi_s5 += 0xC;
                phi_f20 = phi_f20_3;
                phi_s3 = temp_s3;
                phi_f20_2 = phi_f20_3;
            } while (temp_s3 < spE0->unk_F4);
            phi_v0_2 = spD8;
            phi_v1_2 = sp90;
        }
        temp_v0 = phi_v0_2 + 1;
        phi_v0 = temp_v0;
        phi_v1 = phi_v1_2 + 4;
    } while (temp_v0 != 2);
    return sp98;
}

s32 func_80A1E2D8(ObjSpinyroll *arg0, GlobalContext *arg2) {
    f32 sp1C;

    if (func_80A1E074((Actor *) &sp1C, arg2) != 0) {
        arg0->actor.world.pos.x += sp1C;
        arg0->actor.world.pos.z += sp24;
        return 1;
    }
    return 0;
}

? func_80A1E334(CollisionContext *arg0, f32 *arg1, CollisionPoly **arg2, s32 *arg3, Vec3f *arg4, Actor *arg5) {
    f32 temp_f0;
    ? phi_v0;

    temp_f0 = func_800C411C(arg0, arg2, arg3, arg5, arg4);
    *arg1 = temp_f0;
    phi_v0 = 0;
    if (temp_f0 > -31999.0f) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_80A1E394(CollisionContext *arg2, f32 *arg3, CollisionPoly **arg4, s32 *arg5) {
    func_800C4F84(arg4, 0x41C00000, arg2, arg3, arg5);
}

s32 func_80A1E3D8(Actor *arg0, GlobalContext *arg1, f32 *arg2, s32 arg3) {
    void *spC8;
    void (*spC0)(CollisionContext *, f32 *, CollisionPoly **, s32 *, f32 *, Actor *);
    s32 spBC;
    f32 spB4;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    s32 sp84;
    f32 *sp7C;
    f32 *temp_a1;
    f32 *temp_s0;
    f32 *temp_s5;
    f32 temp_f20;
    s32 temp_s2;
    s32 temp_v0;
    void *temp_s7;
    f32 *phi_v1;
    s32 phi_v0;
    f32 *phi_s0;
    CollisionPoly **phi_s3;
    s32 *phi_s4;
    f32 phi_f22;
    f32 phi_f26;
    s32 phi_s2;
    s32 phi_v0_2;
    f32 *phi_v1_2;
    f32 phi_f22_2;
    f32 phi_f22_3;

    temp_s7 = arg0 + 0x3A4;
    spC8 = temp_s7;
    phi_v1 = D_80A1F1FC;
    phi_v0 = 0;
    if (arg0[3].uncullZoneForward > 0.0f) {
        spC0 = func_80A1E394;
        phi_f26 = arg0->world.pos.y + 48.0f;
    } else {
        spC0 = (void (*)(CollisionContext *, f32 *, CollisionPoly **, s32 *, f32 *, Actor *)) func_80A1E334;
        phi_f26 = arg0->world.pos.y;
    }
    sp84 = 0;
    temp_s5 = &spAC;
    sp98 = arg0->world.pos.y + 24.0f;
    temp_s7->unk_F0 = NULL;
    phi_f22_2 = 3.4028235e38f;
    do {
        sp9C = *phi_v1;
        phi_f22 = phi_f22_2;
        phi_s2 = 0;
        phi_v0_2 = phi_v0;
        phi_v1_2 = phi_v1;
        if (temp_s7->unk_F4 > 0) {
            temp_s0 = temp_s7 + (phi_v0 * 0x78);
            spBC = phi_v0;
            sp7C = phi_v1;
            phi_s0 = temp_s0;
            phi_s3 = temp_s0 + 4;
            phi_s4 = temp_s0 + 8;
            do {
                temp_a1 = &sp94;
                sp94 = *phi_s0;
                func_80A1DAAC((Vec3f *) temp_s5, temp_a1, arg0->world.rot.y);
                spAC += arg0->world.pos.x;
                spB4 += arg0->world.pos.z;
                phi_f22_3 = phi_f22;
                if (spC0(arg1 + 0x830, &spA4, phi_s3, phi_s4, temp_s5, arg0) != 0) {
                    temp_f20 = fabsf(spA4 - spB0);
                    if (temp_f20 <= 24.0f) {
                        if ((arg3 != 0) && ((arg0->flags & 0x40) != 0)) {
                            spA0 = spAC;
                            spA8 = spB4;
                            func_80A1DA50(arg1, arg0, (Vec3f *) temp_s5, (Vec3f *) &spA0);
                        }
                        if (temp_f20 < phi_f22) {
                            sp84 = 1;
                            *arg2 = spA4 - phi_f26;
                            temp_s7->unk_F0 = phi_s0;
                            phi_f22_3 = temp_f20;
                        }
                    }
                }
                temp_s2 = phi_s2 + 1;
                phi_s0 += 0xC;
                phi_s3 = &phi_s3[3];
                phi_s4 = &phi_s4[3];
                phi_f22 = phi_f22_3;
                phi_s2 = temp_s2;
                phi_f22_2 = phi_f22_3;
            } while (temp_s2 < spC8->unk_F4);
            phi_v0_2 = spBC;
            phi_v1_2 = sp7C;
        }
        temp_v0 = phi_v0_2 + 1;
        phi_v1 = phi_v1_2 + 4;
        phi_v0 = temp_v0;
    } while (temp_v0 != 2);
    return sp84;
}

s32 func_80A1E648(ObjSpinyroll *arg0, GlobalContext *arg2) {
    f32 sp1C;

    if (func_80A1E3D8((Actor *) &sp1C, arg2) != 0) {
        arg0->actor.world.pos.y += sp1C;
        return 1;
    }
    return 0;
}

DynaPolyActor *func_80A1E694(ObjSpinyroll *arg0, GlobalContext *arg1) {
    void *temp_v0;

    temp_v0 = arg0->unk_494;
    if (temp_v0 != 0) {
        return BgCheck_GetActorOfMesh(arg1 + 0x830, temp_v0->unk_8);
    }
    return NULL;
}

s32 func_80A1E6D4(void) {
    DynaPolyActor *temp_v0;

    temp_v0 = func_80A1E694();
    if ((temp_v0 != 0) && (Math3D_DistanceSquared(temp_v0 + 0x24, &temp_v0->actor.prevPos) > 0.0001f)) {
        return 1;
    }
    return 0;
}

void ObjSpinyroll_Init(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp44;
    void *sp34;
    Vec3s *sp30;
    ColliderTris *sp2C;
    ColliderTris *temp_a0;
    ColliderTris *temp_a1;
    Vec3s *temp_a2;
    f32 temp_f2;
    s16 temp_a0_2;
    s16 temp_v0_2;
    void *temp_v0;
    ObjSpinyroll *this = (ObjSpinyroll *) thisx;

    temp_f2 = *(&D_80A1F1B8 + ((((s32) this->actor.params >> 0xE) & 3) * 4));
    sp44 = temp_f2;
    Actor_ProcessInitChain((Actor *) this, D_80A1F204);
    this->actor.world.rot.x = 0;
    this->actor.world.rot.z = 0;
    this->actor.shape.rot.x = 0;
    this->actor.shape.rot.z = 0;
    this->actor.scale.x = 0.1f * temp_f2;
    this->actor.scale.y = 0.1f;
    this->actor.uncullZoneScale = 250.0f * temp_f2;
    this->actor.scale.z = 0.1f;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06000E68);
    temp_a1 = &this->unk_15C;
    sp2C = temp_a1;
    Collider_InitTris(globalCtx, temp_a1);
    Collider_SetTris(globalCtx, temp_a1, (Actor *) this, &D_80A1F1A8, &this->unk_17C);
    if ((this->actor.params & 0x7F) == 0x7F) {
        func_80A1E9C4(this);
        return;
    }
    this->actor.world.rot.y = 0;
    func_80A1DFA0(this);
    this->unk_4A4 = *(&D_80A1F1C4 + ((((s32) this->actor.params >> 7) & 7) * 4));
    temp_v0 = Lib_SegmentedToVirtual((void *) globalCtx->setupPathList[this->actor.params & 0x7F].points);
    temp_a2 = temp_v0 + 6;
    temp_a0 = &this->unk_4AC;
    sp2C = temp_a0;
    sp30 = temp_a2;
    sp34 = temp_v0;
    Math_Vec3s_ToVec3f((Vec3f *) temp_a0, (Vec3s *) temp_v0);
    Math_Vec3s_ToVec3f((Vec3f *) &this->unk_4AC.base.oc, sp30);
    Math_Vec3f_Copy((Vec3f *) &this->actor.world, (Vec3f *) sp2C);
    temp_a0_2 = sp34->unk_0;
    temp_v0_2 = temp_a2->x;
    if ((temp_v0_2 == temp_a0_2) && (temp_a2->y != sp34->unk_2) && (temp_a2->z == sp34->unk_4)) {
        this->unk_49C = 1;
        goto block_14;
    }
    if (((temp_v0_2 != temp_a0_2) && (temp_a2->y == sp34->unk_2) && (temp_a2->z == sp34->unk_4)) || ((temp_v0_2 == temp_a0_2) && (temp_a2->y == sp34->unk_2) && (temp_a2->z != sp34->unk_4))) {
        this->unk_49C = 0;
block_14:
        func_80A1DE58(this);
        this->actor.shape.rot.y = this->actor.world.rot.y;
        func_80A1EAAC(this);
        return;
    }
    Actor_MarkForDeath((Actor *) this);
}

void ObjSpinyroll_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;
    ObjSpinyroll *this = (ObjSpinyroll *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk_144);
    Collider_DestroyTris(globalCtx, &this->unk_15C);
}

void func_80A1E9C4(ObjSpinyroll *arg0) {
    arg0->actionFunc = func_80A1E9E0;
    arg0->actor.speedXZ = 0.0f;
}

void func_80A1E9E0(ObjSpinyroll *arg0, GlobalContext *arg1) {
    arg0->unk_4DA += 0x6E;
    if ((s32) arg0->unk_4DA >= 0xFA1) {
        arg0->unk_4DA = 0xFA0;
    }
}

void func_80A1EA10(ObjSpinyroll *arg0) {
    arg0->actionFunc = func_80A1EA4C;
    arg0->unk_4E2 = *(&D_80A1F1E4 + ((((s32) arg0->actor.params >> 0xA) & 7) * 2));
    arg0->actor.speedXZ = 0.0f;
}

void func_80A1EA4C(ObjSpinyroll *arg0, GlobalContext *arg1) {
    ObjSpinyroll *temp_a3;
    s16 temp_a2;
    s16 temp_v0;

    temp_a3 = arg0;
    temp_a2 = temp_a3->unk_4DE;
    arg0 = temp_a3;
    if (Math_ScaledStepToS(temp_a3 + 0x4DA, 0, temp_a2) != 0) {
        temp_v0 = arg0->unk_4E2;
        if ((s32) temp_v0 > 0) {
            arg0->unk_4E2 = temp_v0 - 1;
            if ((s32) arg0->unk_4E2 <= 0) {
                func_80A1EAAC(arg0);
            }
        }
    }
}

void func_80A1EAAC(ObjSpinyroll *arg0) {
    arg0->actionFunc = func_80A1EAE0;
    arg0->unk_4DC = *(&D_80A1F20C + (arg0->unk_4A8 * 2));
    arg0->actor.speedXZ = 0.0f;
}

void func_80A1EAE0(ObjSpinyroll *arg0, GlobalContext *arg1) {
    ObjSpinyroll *temp_a3;
    s16 temp_a1;

    temp_a3 = arg0;
    temp_a1 = temp_a3->unk_4DC;
    arg0 = temp_a3;
    if (Math_ScaledStepToS(temp_a3 + 0x4DA, temp_a1, 0x6E) != 0) {
        if (arg0->unk_49C == 0) {
            func_80A1EB40(arg0);
            return;
        }
        func_80A1ECC0(arg0);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80A1EB40(ObjSpinyroll *arg0) {
    arg0->actionFunc = func_80A1EB54;
}

void func_80A1EB54(ObjSpinyroll *arg0, GlobalContext *arg1) {
    s32 sp24;

    sp24 = func_80A1DEB8(arg0);
    if (func_80A1E2D8(arg0, arg1, 1) != 0) {
        if (func_80A1E694(arg0, arg1) != 0) {
            func_80A1DCCC(arg0);
            arg0->unk_4DE = 0x7D0;
            func_80A1EC24(arg0);
            return;
        }
        func_80A1DE84(arg0);
        func_80A1DCCC(arg0);
        arg0->unk_4DE = 0x7D0;
        func_80A1EA10(arg0);
        return;
    }
    if (sp24 != 0) {
        func_80A1DE84(arg0);
        func_80A1DCCC(arg0);
        arg0->unk_4DE = 0x78;
        func_80A1EA10(arg0);
    }
}

void func_80A1EC24(ObjSpinyroll *arg0) {
    arg0->actionFunc = func_80A1EC38;
}

void func_80A1EC38(ObjSpinyroll *arg0, GlobalContext *arg1) {
    s32 sp24;

    sp24 = 1;
    Math_ScaledStepToS(arg0 + 0x4DA, 0, arg0->unk_4DE);
    if ((func_80A1E2D8(arg0, arg1, 0) != 0) && (func_80A1E6D4(arg0, arg1) != 0)) {
        sp24 = 0;
    }
    if (sp24 != 0) {
        func_80A1DE84(arg0);
        func_80A1EA10(arg0);
    }
}

void func_80A1ECC0(ObjSpinyroll *arg0) {
    arg0->actionFunc = func_80A1ECD4;
}

void func_80A1ECD4(ObjSpinyroll *arg0, GlobalContext *arg1) {
    s32 sp24;

    sp24 = func_80A1DEB8(arg0);
    if (func_80A1E648(arg0, arg1, 1) != 0) {
        func_80A1DE84(arg0);
        func_80A1DCCC(arg0);
        arg0->unk_4DE = 0x7D0;
        func_80A1EA10(arg0);
        return;
    }
    if (sp24 != 0) {
        func_80A1DE84(arg0);
        func_80A1DCCC(arg0);
        arg0->unk_4DE = 0x78;
        func_80A1EA10(arg0);
    }
}

void ObjSpinyroll_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp24;
    ColliderTris *sp20;
    ColliderTris *temp_a2;
    CollisionCheckContext *temp_a1;
    u8 temp_v0;
    ObjSpinyroll *this = (ObjSpinyroll *) thisx;

    temp_v0 = this->unk_15C.base.atFlags;
    if ((temp_v0 & 2) != 0) {
        this->unk_15C.base.atFlags = temp_v0 & 0xFFFD;
        func_80A1DCCC(this);
    }
    this->actionFunc(this, globalCtx);
    this->unk_4E0 += this->unk_4DA;
    func_80A1DC5C(this);
    func_80A1DB2C(this);
    temp_a1 = &globalCtx->colChkCtx;
    temp_a2 = &this->unk_15C;
    sp20 = temp_a2;
    sp24 = temp_a1;
    CollisionCheck_SetAT(globalCtx, temp_a1, (Collider *) temp_a2);
    CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2);
}

void ObjSpinyroll_Draw(Actor *thisx, GlobalContext *globalCtx) {
    s16 sp88;
    s16 sp86;
    s16 sp84;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 phi_s4;
    f32 phi_f22;
    f32 phi_f24;
    s32 phi_s1;
    ObjSpinyroll *this = (ObjSpinyroll *) thisx;

    temp_s1 = ((s32) this->actor.params >> 0xE) & 3;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s2 = temp_a0;
    func_8012C28C(temp_a0);
    temp_f26 = Math_CosS(this->actor.shape.rot.y) * 120.0f;
    temp_f2 = Math_SinS(this->actor.shape.rot.y) * -120.0f;
    temp_f28 = temp_f2;
    phi_s4 = 1;
    if (temp_s1 == 0) {
        phi_f22 = this->actor.world.pos.x;
        phi_f24 = this->actor.world.pos.z;
    } else if (temp_s1 == 1) {
        phi_s4 = 2;
        phi_f22 = this->actor.world.pos.x - (temp_f26 * 0.5f);
        phi_f24 = this->actor.world.pos.z - (temp_f2 * 0.5f);
    } else {
        phi_s4 = 4;
        phi_f22 = this->actor.world.pos.x - (temp_f26 * 1.5f);
        phi_f24 = this->actor.world.pos.z - (temp_f2 * 1.5f);
    }
    sp84 = this->actor.shape.rot.x + this->unk_4E0;
    sp86 = this->actor.shape.rot.y;
    sp88 = this->actor.shape.rot.z;
    phi_s1 = 0;
    if (phi_s4 > 0) {
        do {
            SysMatrix_SetStateRotationAndTranslation(phi_f22, this->actor.world.pos.y + this->unk_4D0, phi_f24, (Vec3s *) &sp84);
            Matrix_Scale(0.1f, 0.1f, 0.1f, 1);
            temp_v0 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = &temp_v0[1];
            temp_v0->words.w0 = 0xDA380003;
            temp_v0->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_2 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = &temp_v0_2[1];
            temp_v0_2->words.w1 = (u32) &D_06000460;
            temp_v0_2->words.w0 = 0xDE000000;
            temp_s1_2 = phi_s1 + 1;
            phi_f22 += temp_f26;
            phi_f24 += temp_f28;
            phi_s1 = temp_s1_2;
        } while (temp_s1_2 != phi_s4);
    }
}
