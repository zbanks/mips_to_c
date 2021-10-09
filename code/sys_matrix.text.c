struct _mips2c_stack_Matrix_MtxFCopy {};            /* size 0x0 */

struct _mips2c_stack_Matrix_NewMtx {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Matrix_RotateY {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Matrix_Scale {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_SysMatrix_AppendToPolyOpaDisp {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SysMatrix_CopyCurrentState {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SysMatrix_FromRSPMatrix {};    /* size 0x0 */

struct _mips2c_stack_SysMatrix_GetCurrentState {};  /* size 0x0 */

struct _mips2c_stack_SysMatrix_GetStateAsRSPMatrix {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SysMatrix_GetStateTranslation {}; /* size 0x0 */

struct _mips2c_stack_SysMatrix_GetStateTranslationAndScaledX {}; /* size 0x0 */

struct _mips2c_stack_SysMatrix_GetStateTranslationAndScaledY {}; /* size 0x0 */

struct _mips2c_stack_SysMatrix_GetStateTranslationAndScaledZ {}; /* size 0x0 */

struct _mips2c_stack_SysMatrix_InsertMatrix {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SysMatrix_InsertRotation {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_SysMatrix_InsertRotationAroundUnitVector_f {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_SysMatrix_InsertRotationAroundUnitVector_s {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_SysMatrix_InsertTranslation {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_SysMatrix_InsertXRotation_f {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_SysMatrix_InsertXRotation_s {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_SysMatrix_InsertYRotation_f {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_SysMatrix_InsertZRotation_f {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_SysMatrix_InsertZRotation_s {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_SysMatrix_MultiplyVector3fByMatrix {}; /* size 0x0 */

struct _mips2c_stack_SysMatrix_MultiplyVector3fByState {}; /* size 0x0 */

struct _mips2c_stack_SysMatrix_MultiplyVector3fXZByCurrentState {}; /* size 0x0 */

struct _mips2c_stack_SysMatrix_NormalizeXYZ {};     /* size 0x0 */

struct _mips2c_stack_SysMatrix_RotateAndTranslateState {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_SysMatrix_RotateStateAroundXAxis {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad20[0x10];                    /* maybe part of sp1C[5]? */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ MtxF *sp34;                          /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_SysMatrix_SetCurrentState {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SysMatrix_SetStateRotationAndTranslation {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_SysMatrix_SetStateXRotation {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ char pad1C[0x8];                     /* maybe part of sp18[3]? */
    /* 0x24 */ MtxF *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_SysMatrix_StateAlloc {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SysMatrix_StatePop {};         /* size 0x0 */

struct _mips2c_stack_SysMatrix_StatePush {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_SysMatrix_ToRSPMatrix {};      /* size 0x0 */

struct _mips2c_stack_SysMatrix_TransposeXYZ {};     /* size 0x0 */

struct _mips2c_stack_func_8018219C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_801822C4 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80182C90 {};              /* size 0x0 */

struct _mips2c_stack_func_80182CA0 {};              /* size 0x0 */

struct _mips2c_stack_func_80182CBC {};              /* size 0x0 */

struct _mips2c_stack_func_80182CCC {};              /* size 0x0 */

void func_801822C4(void *arg0, void *arg1, s32 arg2); /* static */
s8 *func_80182C90();                                /* static */
s32 func_80182CA0();                                /* static */
void *func_80182CBC();                              /* static */
void *func_80182CCC();                              /* static */
static void D_801E2160;                             /* unable to generate initializer; const */
static void D_801E3790;                             /* unable to generate initializer; const */
void *D_801D1E60 = &D_801E2160;
void *D_801D1E64 = &D_801E3790;
MtxF *sCurrentMatrix;
MtxF *sMatrixStack;

void SysMatrix_StateAlloc(GameState *gamestate) {
    MtxF *temp_v0;

    temp_v0 = THA_AllocEndAlign16(&gamestate->heap, 0x500U);
    sMatrixStack = temp_v0;
    sCurrentMatrix = temp_v0;
}

void SysMatrix_StatePush(void) {
    MtxF *temp_a0;
    MtxF *temp_a1;

    temp_a1 = sCurrentMatrix;
    temp_a0 = temp_a1 + 0x40;
    sCurrentMatrix = temp_a0;
    Matrix_MtxFCopy(temp_a0, temp_a1);
}

void SysMatrix_StatePop(void) {
    sCurrentMatrix += -0x40;
}

void SysMatrix_CopyCurrentState(MtxF *matrix) {
    Matrix_MtxFCopy(matrix, sCurrentMatrix);
}

void SysMatrix_SetCurrentState(MtxF *matrix) {
    Matrix_MtxFCopy(sCurrentMatrix, matrix);
}

MtxF *SysMatrix_GetCurrentState(void) {
    return sCurrentMatrix;
}

void SysMatrix_InsertMatrix(MtxF *matrix, s32 appendToState) {
    MtxF *temp_v0;

    temp_v0 = SysMatrix_GetCurrentState();
    if (appendToState == 1) {
        SkinMatrix_MtxFMtxFMult(temp_v0, matrix, temp_v0);
        return;
    }
    Matrix_MtxFCopy(sCurrentMatrix, matrix);
}

void SysMatrix_InsertTranslation(f32 x, f32 y, f32 z, s32 appendToState) {
    MtxF *temp_a0;

    temp_a0 = sCurrentMatrix;
    if (appendToState == 1) {
        temp_a0->mf[3][0] += (temp_a0->mf[0][0] * x) + (temp_a0->mf[1][0] * y) + (temp_a0->mf[2][0] * z);
        temp_a0->mf[3][1] += (temp_a0->mf[0][1] * x) + (temp_a0->mf[1][1] * y) + (temp_a0->mf[2][1] * z);
        temp_a0->mf[3][2] += (temp_a0->mf[0][2] * x) + (temp_a0->mf[1][2] * y) + (temp_a0->mf[2][2] * z);
        temp_a0->mf[3][3] += (temp_a0->mf[0][3] * x) + (temp_a0->mf[1][3] * y) + (temp_a0->mf[2][3] * z);
        return;
    }
    SkinMatrix_SetTranslate(temp_a0, x, y, z);
}

void Matrix_Scale(f32 xScale, f32 yScale, f32 zScale, s32 appendToState) {
    MtxF *temp_a0;

    temp_a0 = sCurrentMatrix;
    if (appendToState == 1) {
        temp_a0->mf[0][0] *= xScale;
        temp_a0->mf[0][1] *= xScale;
        temp_a0->mf[0][2] *= xScale;
        temp_a0->mf[1][0] *= yScale;
        temp_a0->mf[1][1] *= yScale;
        temp_a0->mf[1][2] *= yScale;
        temp_a0->mf[2][0] *= zScale;
        temp_a0->mf[2][1] *= zScale;
        temp_a0->mf[2][2] *= zScale;
        temp_a0->mf[0][3] *= xScale;
        temp_a0->mf[1][3] *= yScale;
        temp_a0->mf[2][3] *= zScale;
        return;
    }
    SkinMatrix_SetScale(temp_a0, xScale, yScale, zScale);
}

void SysMatrix_InsertXRotation_s(s16 rotation, s32 appendToState) {
    f32 sp20;
    MtxF *temp_s0;
    MtxF *temp_s0_2;
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
    f32 phi_f2;
    f32 phi_f14;

    temp_a0 = rotation;
    if (appendToState == 1) {
        if (temp_a0 != 0) {
            temp_s0 = sCurrentMatrix;
            rotation = temp_a0;
            sp20 = Math_SinS(temp_a0);
            temp_f0 = Math_CosS(rotation);
            temp_f2 = temp_s0->mf[1][0];
            temp_f12 = temp_s0->mf[2][0];
            temp_f10 = temp_f12 * temp_f0;
            temp_f12_2 = temp_s0->mf[2][1];
            temp_f16 = temp_f2 * sp20;
            temp_f2_2 = temp_s0->mf[1][1];
            temp_f4 = temp_f2_2 * temp_f0;
            temp_s0->mf[1][0] = (temp_f2 * temp_f0) + (temp_f12 * sp20);
            temp_f12_3 = temp_s0->mf[2][2];
            temp_f16_2 = temp_f2_2 * sp20;
            temp_f2_3 = temp_s0->mf[1][2];
            temp_s0->mf[2][0] = temp_f10 - temp_f16;
            temp_s0->mf[1][1] = temp_f4 + (temp_f12_2 * sp20);
            temp_f12_4 = temp_s0->mf[2][3];
            temp_f16_3 = temp_f2_3 * sp20;
            temp_f2_4 = temp_s0->mf[1][3];
            temp_s0->mf[2][1] = (temp_f12_2 * temp_f0) - temp_f16_2;
            temp_s0->mf[1][2] = (temp_f2_3 * temp_f0) + (temp_f12_3 * sp20);
            temp_f16_4 = temp_f2_4 * sp20;
            temp_s0->mf[2][2] = (temp_f12_3 * temp_f0) - temp_f16_3;
            temp_s0->mf[1][3] = (temp_f2_4 * temp_f0) + (temp_f12_4 * sp20);
            temp_s0->mf[2][3] = (temp_f12_4 * temp_f0) - temp_f16_4;
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    temp_s0_2 = sCurrentMatrix;
    if (temp_a0 != 0) {
        rotation = temp_a0;
        sp20 = Math_SinS(temp_a0);
        phi_f2 = Math_CosS(rotation);
        phi_f14 = sp20;
    } else {
        phi_f2 = 1.0f;
        phi_f14 = 0.0f;
    }
    temp_s0_2->mf[0][1] = 0.0f;
    temp_s0_2->mf[0][2] = 0.0f;
    temp_s0_2->mf[0][3] = 0.0f;
    temp_s0_2->mf[1][0] = 0.0f;
    temp_s0_2->mf[1][3] = 0.0f;
    temp_s0_2->mf[2][0] = 0.0f;
    temp_s0_2->mf[2][3] = 0.0f;
    temp_s0_2->mf[3][0] = 0.0f;
    temp_s0_2->mf[3][1] = 0.0f;
    temp_s0_2->mf[3][2] = 0.0f;
    temp_s0_2->mf[0][0] = 1.0f;
    temp_s0_2->mf[3][3] = 1.0f;
    temp_s0_2->mf[1][1] = phi_f2;
    temp_s0_2->mf[2][2] = phi_f2;
    temp_s0_2->mf[1][2] = phi_f14;
    temp_s0_2->mf[2][1] = -phi_f14;
}

void SysMatrix_InsertXRotation_f(f32 rotation, s32 appendToState) {
    f32 sp20;
    MtxF *temp_s0;
    MtxF *temp_s0_2;
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
    f32 phi_f12;
    f32 phi_f14;

    if (appendToState == 1) {
        if (rotation != 0.0f) {
            temp_s0 = sCurrentMatrix;
            sp20 = __sinf(rotation);
            temp_f0 = __cosf(rotation);
            temp_f2 = temp_s0->mf[1][0];
            temp_f12 = temp_s0->mf[2][0];
            temp_f10 = temp_f12 * temp_f0;
            temp_f12_2 = temp_s0->mf[2][1];
            temp_f16 = temp_f2 * sp20;
            temp_f2_2 = temp_s0->mf[1][1];
            temp_f4 = temp_f2_2 * temp_f0;
            temp_s0->mf[1][0] = (temp_f2 * temp_f0) + (temp_f12 * sp20);
            temp_f12_3 = temp_s0->mf[2][2];
            temp_f16_2 = temp_f2_2 * sp20;
            temp_f2_3 = temp_s0->mf[1][2];
            temp_s0->mf[2][0] = temp_f10 - temp_f16;
            temp_s0->mf[1][1] = temp_f4 + (temp_f12_2 * sp20);
            temp_f12_4 = temp_s0->mf[2][3];
            temp_f16_3 = temp_f2_3 * sp20;
            temp_f2_4 = temp_s0->mf[1][3];
            temp_s0->mf[2][1] = (temp_f12_2 * temp_f0) - temp_f16_2;
            temp_s0->mf[1][2] = (temp_f2_3 * temp_f0) + (temp_f12_3 * sp20);
            temp_f16_4 = temp_f2_4 * sp20;
            temp_s0->mf[2][2] = (temp_f12_3 * temp_f0) - temp_f16_3;
            temp_s0->mf[1][3] = (temp_f2_4 * temp_f0) + (temp_f12_4 * sp20);
            temp_s0->mf[2][3] = (temp_f12_4 * temp_f0) - temp_f16_4;
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    temp_s0_2 = sCurrentMatrix;
    if (rotation != 0.0f) {
        sp20 = __sinf(rotation);
        phi_f12 = __cosf(rotation);
        phi_f14 = sp20;
    } else {
        phi_f12 = 1.0f;
        phi_f14 = 0.0f;
    }
    temp_s0_2->mf[0][0] = 1.0f;
    temp_s0_2->mf[0][1] = 0.0f;
    temp_s0_2->mf[0][2] = 0.0f;
    temp_s0_2->mf[0][3] = 0.0f;
    temp_s0_2->mf[1][0] = 0.0f;
    temp_s0_2->mf[1][1] = phi_f12;
    temp_s0_2->mf[1][2] = phi_f14;
    temp_s0_2->mf[1][3] = 0.0f;
    temp_s0_2->mf[2][0] = 0.0f;
    temp_s0_2->mf[2][1] = -phi_f14;
    temp_s0_2->mf[2][2] = phi_f12;
    temp_s0_2->mf[2][3] = 0.0f;
    temp_s0_2->mf[3][0] = 0.0f;
    temp_s0_2->mf[3][1] = 0.0f;
    temp_s0_2->mf[3][2] = 0.0f;
    temp_s0_2->mf[3][3] = 1.0f;
}

void SysMatrix_RotateStateAroundXAxis(f32 rotation) {
    MtxF *sp34;
    f32 sp30;
    s32 sp1C;
    MtxF *temp_v1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f6;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f8_3;
    f32 temp_f8_4;
    s32 temp_a0;

    if (rotation != 0.0f) {
        temp_v1 = sCurrentMatrix;
        sp34 = temp_v1;
        temp_a0 = (s32) (rotation * 10430.378f) & 0xFFFF;
        sp1C = temp_a0;
        temp_f12 = (f32) sins((u16) temp_a0) * 0.00003051851f;
        sp30 = temp_f12;
        temp_f0 = temp_v1->mf[1][0];
        temp_f2 = temp_v1->mf[2][0];
        temp_f14 = (f32) coss((u16) temp_a0) * 0.00003051851f;
        temp_f6 = temp_f2 * temp_f14;
        temp_f2_2 = temp_v1->mf[2][1];
        temp_f8 = temp_f0 * temp_f12;
        temp_f0_2 = temp_v1->mf[1][1];
        temp_f16 = temp_f0_2 * temp_f14;
        temp_v1->mf[1][0] = (temp_f0 * temp_f14) + (temp_f2 * temp_f12);
        temp_f2_3 = temp_v1->mf[2][2];
        temp_f8_2 = temp_f0_2 * temp_f12;
        temp_f0_3 = temp_v1->mf[1][2];
        temp_v1->mf[2][0] = temp_f6 - temp_f8;
        temp_v1->mf[1][1] = temp_f16 + (temp_f2_2 * temp_f12);
        temp_f2_4 = temp_v1->mf[2][3];
        temp_f8_3 = temp_f0_3 * temp_f12;
        temp_f0_4 = temp_v1->mf[1][3];
        temp_v1->mf[2][1] = (temp_f2_2 * temp_f14) - temp_f8_2;
        temp_v1->mf[1][2] = (temp_f0_3 * temp_f14) + (temp_f2_3 * temp_f12);
        temp_f8_4 = temp_f0_4 * temp_f12;
        temp_v1->mf[2][2] = (temp_f2_3 * temp_f14) - temp_f8_3;
        temp_v1->mf[1][3] = (temp_f0_4 * temp_f14) + (temp_f2_4 * temp_f12);
        temp_v1->mf[2][3] = (temp_f2_4 * temp_f14) - temp_f8_4;
    }
}

void SysMatrix_SetStateXRotation(f32 rotation) {
    MtxF *sp24;
    f32 sp18;
    MtxF *temp_v0;
    f32 temp_f0;

    temp_v0 = sCurrentMatrix;
    temp_v0->mf[0][0] = 1.0f;
    temp_v0->mf[0][1] = 0.0f;
    temp_v0->mf[0][2] = 0.0f;
    temp_v0->mf[0][3] = 0.0f;
    temp_v0->mf[1][0] = 0.0f;
    temp_v0->mf[1][3] = 0.0f;
    temp_v0->mf[2][0] = 0.0f;
    temp_v0->mf[2][3] = 0.0f;
    temp_v0->mf[3][0] = 0.0f;
    temp_v0->mf[3][1] = 0.0f;
    temp_v0->mf[3][2] = 0.0f;
    temp_v0->mf[3][3] = 1.0f;
    if (rotation != 0.0f) {
        sp24 = temp_v0;
        sp18 = __sinf(rotation);
        temp_f0 = __cosf(rotation);
        temp_v0->mf[1][1] = temp_f0;
        temp_v0->mf[2][2] = temp_f0;
        temp_v0->mf[2][1] = -sp18;
        temp_v0->mf[1][2] = sp18;
        return;
    }
    temp_v0->mf[1][1] = 1.0f;
    temp_v0->mf[1][2] = 0.0f;
    temp_v0->mf[2][1] = 0.0f;
    temp_v0->mf[2][2] = 1.0f;
}

void Matrix_RotateY(s16 rotation, u8 appendToState) {
    f32 sp20;
    MtxF *temp_s0;
    MtxF *temp_s0_2;
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
    f32 phi_f2;
    f32 phi_f14;

    temp_a0 = rotation;
    if (appendToState == 1) {
        if (temp_a0 != 0) {
            temp_s0 = sCurrentMatrix;
            rotation = temp_a0;
            sp20 = Math_SinS(temp_a0);
            temp_f0 = Math_CosS(rotation);
            temp_f2 = temp_s0->mf[0][0];
            temp_f12 = temp_s0->mf[2][0];
            temp_f10 = temp_f2 * sp20;
            temp_f2_2 = temp_s0->mf[0][1];
            temp_f16 = temp_f12 * temp_f0;
            temp_f12_2 = temp_s0->mf[2][1];
            temp_f4 = temp_f2_2 * temp_f0;
            temp_s0->mf[0][0] = (temp_f2 * temp_f0) - (temp_f12 * sp20);
            temp_f10_2 = temp_f2_2 * sp20;
            temp_f2_3 = temp_s0->mf[0][2];
            temp_f12_3 = temp_s0->mf[2][2];
            temp_s0->mf[2][0] = temp_f10 + temp_f16;
            temp_s0->mf[0][1] = temp_f4 - (temp_f12_2 * sp20);
            temp_f10_3 = temp_f2_3 * sp20;
            temp_f2_4 = temp_s0->mf[0][3];
            temp_f12_4 = temp_s0->mf[2][3];
            temp_s0->mf[2][1] = temp_f10_2 + (temp_f12_2 * temp_f0);
            temp_s0->mf[0][2] = (temp_f2_3 * temp_f0) - (temp_f12_3 * sp20);
            temp_f10_4 = temp_f2_4 * sp20;
            temp_s0->mf[2][2] = temp_f10_3 + (temp_f12_3 * temp_f0);
            temp_s0->mf[0][3] = (temp_f2_4 * temp_f0) - (temp_f12_4 * sp20);
            temp_s0->mf[2][3] = temp_f10_4 + (temp_f12_4 * temp_f0);
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    temp_s0_2 = sCurrentMatrix;
    if (temp_a0 != 0) {
        rotation = temp_a0;
        sp20 = Math_SinS(temp_a0);
        phi_f2 = Math_CosS(rotation);
        phi_f14 = sp20;
    } else {
        phi_f2 = 1.0f;
        phi_f14 = 0.0f;
    }
    temp_s0_2->mf[0][1] = 0.0f;
    temp_s0_2->mf[0][3] = 0.0f;
    temp_s0_2->mf[1][0] = 0.0f;
    temp_s0_2->mf[1][2] = 0.0f;
    temp_s0_2->mf[1][3] = 0.0f;
    temp_s0_2->mf[2][1] = 0.0f;
    temp_s0_2->mf[2][3] = 0.0f;
    temp_s0_2->mf[3][0] = 0.0f;
    temp_s0_2->mf[3][1] = 0.0f;
    temp_s0_2->mf[3][2] = 0.0f;
    temp_s0_2->mf[1][1] = 1.0f;
    temp_s0_2->mf[3][3] = 1.0f;
    temp_s0_2->mf[0][0] = phi_f2;
    temp_s0_2->mf[2][2] = phi_f2;
    temp_s0_2->mf[0][2] = -phi_f14;
    temp_s0_2->mf[2][0] = phi_f14;
}

void SysMatrix_InsertYRotation_f(f32 rotation, s32 appendToState) {
    f32 sp20;
    MtxF *temp_s0;
    MtxF *temp_s0_2;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f16_4;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f6;
    f32 phi_f2;
    f32 phi_f14;

    if (appendToState == 1) {
        if (rotation != 0.0f) {
            temp_s0 = sCurrentMatrix;
            sp20 = __sinf(rotation);
            temp_f0 = __cosf(rotation);
            temp_f2 = temp_s0->mf[0][0];
            temp_f12 = temp_s0->mf[2][0];
            temp_f16 = temp_f2 * sp20;
            temp_f2_2 = temp_s0->mf[0][1];
            temp_f18 = temp_f12 * temp_f0;
            temp_f12_2 = temp_s0->mf[2][1];
            temp_f6 = temp_f2_2 * temp_f0;
            temp_s0->mf[0][0] = (temp_f2 * temp_f0) - (temp_f12 * sp20);
            temp_f16_2 = temp_f2_2 * sp20;
            temp_f2_3 = temp_s0->mf[0][2];
            temp_f12_3 = temp_s0->mf[2][2];
            temp_s0->mf[2][0] = temp_f16 + temp_f18;
            temp_s0->mf[0][1] = temp_f6 - (temp_f12_2 * sp20);
            temp_f16_3 = temp_f2_3 * sp20;
            temp_f2_4 = temp_s0->mf[0][3];
            temp_f12_4 = temp_s0->mf[2][3];
            temp_s0->mf[2][1] = temp_f16_2 + (temp_f12_2 * temp_f0);
            temp_s0->mf[0][2] = (temp_f2_3 * temp_f0) - (temp_f12_3 * sp20);
            temp_f16_4 = temp_f2_4 * sp20;
            temp_s0->mf[2][2] = temp_f16_3 + (temp_f12_3 * temp_f0);
            temp_s0->mf[0][3] = (temp_f2_4 * temp_f0) - (temp_f12_4 * sp20);
            temp_s0->mf[2][3] = temp_f16_4 + (temp_f12_4 * temp_f0);
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    temp_s0_2 = sCurrentMatrix;
    if (rotation != 0.0f) {
        sp20 = __sinf(rotation);
        phi_f2 = __cosf(rotation);
        phi_f14 = sp20;
    } else {
        phi_f2 = 1.0f;
        phi_f14 = 0.0f;
    }
    temp_s0_2->mf[0][1] = 0.0f;
    temp_s0_2->mf[0][3] = 0.0f;
    temp_s0_2->mf[1][0] = 0.0f;
    temp_s0_2->mf[1][2] = 0.0f;
    temp_s0_2->mf[1][3] = 0.0f;
    temp_s0_2->mf[2][1] = 0.0f;
    temp_s0_2->mf[2][3] = 0.0f;
    temp_s0_2->mf[3][0] = 0.0f;
    temp_s0_2->mf[3][1] = 0.0f;
    temp_s0_2->mf[3][2] = 0.0f;
    temp_s0_2->mf[1][1] = 1.0f;
    temp_s0_2->mf[3][3] = 1.0f;
    temp_s0_2->mf[0][0] = phi_f2;
    temp_s0_2->mf[2][2] = phi_f2;
    temp_s0_2->mf[0][2] = -phi_f14;
    temp_s0_2->mf[2][0] = phi_f14;
}

void SysMatrix_InsertZRotation_s(s16 rotation, s32 appendToState) {
    f32 sp20;
    MtxF *temp_s0;
    MtxF *temp_s0_2;
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
    f32 phi_f2;
    f32 phi_f14;

    temp_a0 = rotation;
    if (appendToState == 1) {
        if (temp_a0 != 0) {
            temp_s0 = sCurrentMatrix;
            rotation = temp_a0;
            sp20 = Math_SinS(temp_a0);
            temp_f0 = Math_CosS(rotation);
            temp_f2 = temp_s0->mf[0][0];
            temp_f12 = temp_s0->mf[1][0];
            temp_f10 = temp_f12 * temp_f0;
            temp_f12_2 = temp_s0->mf[1][1];
            temp_f16 = temp_f2 * sp20;
            temp_f2_2 = temp_s0->mf[0][1];
            temp_f4 = temp_f2_2 * temp_f0;
            temp_s0->mf[0][0] = (temp_f2 * temp_f0) + (temp_f12 * sp20);
            temp_f12_3 = temp_s0->mf[1][2];
            temp_f16_2 = temp_f2_2 * sp20;
            temp_f2_3 = temp_s0->mf[0][2];
            temp_s0->mf[1][0] = temp_f10 - temp_f16;
            temp_s0->mf[0][1] = temp_f4 + (temp_f12_2 * sp20);
            temp_f12_4 = temp_s0->mf[1][3];
            temp_f16_3 = temp_f2_3 * sp20;
            temp_f2_4 = temp_s0->mf[0][3];
            temp_s0->mf[1][1] = (temp_f12_2 * temp_f0) - temp_f16_2;
            temp_s0->mf[0][2] = (temp_f2_3 * temp_f0) + (temp_f12_3 * sp20);
            temp_f16_4 = temp_f2_4 * sp20;
            temp_s0->mf[1][2] = (temp_f12_3 * temp_f0) - temp_f16_3;
            temp_s0->mf[0][3] = (temp_f2_4 * temp_f0) + (temp_f12_4 * sp20);
            temp_s0->mf[1][3] = (temp_f12_4 * temp_f0) - temp_f16_4;
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    temp_s0_2 = sCurrentMatrix;
    if (temp_a0 != 0) {
        rotation = temp_a0;
        sp20 = Math_SinS(temp_a0);
        phi_f2 = Math_CosS(rotation);
        phi_f14 = sp20;
    } else {
        phi_f2 = 1.0f;
        phi_f14 = 0.0f;
    }
    temp_s0_2->mf[0][2] = 0.0f;
    temp_s0_2->mf[0][3] = 0.0f;
    temp_s0_2->mf[1][2] = 0.0f;
    temp_s0_2->mf[1][3] = 0.0f;
    temp_s0_2->mf[2][0] = 0.0f;
    temp_s0_2->mf[2][1] = 0.0f;
    temp_s0_2->mf[2][3] = 0.0f;
    temp_s0_2->mf[3][0] = 0.0f;
    temp_s0_2->mf[3][1] = 0.0f;
    temp_s0_2->mf[3][2] = 0.0f;
    temp_s0_2->mf[2][2] = 1.0f;
    temp_s0_2->mf[3][3] = 1.0f;
    temp_s0_2->mf[0][0] = phi_f2;
    temp_s0_2->mf[1][1] = phi_f2;
    temp_s0_2->mf[0][1] = phi_f14;
    temp_s0_2->mf[1][0] = -phi_f14;
}

void SysMatrix_InsertZRotation_f(f32 rotation, s32 appendToState) {
    f32 sp20;
    MtxF *temp_s0;
    MtxF *temp_s0_2;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f18_3;
    f32 temp_f18_4;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f6;
    f32 phi_f2;
    f32 phi_f14;

    if (appendToState == 1) {
        if (rotation != 0.0f) {
            temp_s0 = sCurrentMatrix;
            sp20 = __sinf(rotation);
            temp_f0 = __cosf(rotation);
            temp_f2 = temp_s0->mf[0][0];
            temp_f12 = temp_s0->mf[1][0];
            temp_f16 = temp_f12 * temp_f0;
            temp_f12_2 = temp_s0->mf[1][1];
            temp_f18 = temp_f2 * sp20;
            temp_f2_2 = temp_s0->mf[0][1];
            temp_f6 = temp_f2_2 * temp_f0;
            temp_s0->mf[0][0] = (temp_f2 * temp_f0) + (temp_f12 * sp20);
            temp_f12_3 = temp_s0->mf[1][2];
            temp_f18_2 = temp_f2_2 * sp20;
            temp_f2_3 = temp_s0->mf[0][2];
            temp_s0->mf[1][0] = temp_f16 - temp_f18;
            temp_s0->mf[0][1] = temp_f6 + (temp_f12_2 * sp20);
            temp_f12_4 = temp_s0->mf[1][3];
            temp_f18_3 = temp_f2_3 * sp20;
            temp_f2_4 = temp_s0->mf[0][3];
            temp_s0->mf[1][1] = (temp_f12_2 * temp_f0) - temp_f18_2;
            temp_s0->mf[0][2] = (temp_f2_3 * temp_f0) + (temp_f12_3 * sp20);
            temp_f18_4 = temp_f2_4 * sp20;
            temp_s0->mf[1][2] = (temp_f12_3 * temp_f0) - temp_f18_3;
            temp_s0->mf[0][3] = (temp_f2_4 * temp_f0) + (temp_f12_4 * sp20);
            temp_s0->mf[1][3] = (temp_f12_4 * temp_f0) - temp_f18_4;
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    temp_s0_2 = sCurrentMatrix;
    if (rotation != 0.0f) {
        sp20 = __sinf(rotation);
        phi_f2 = __cosf(rotation);
        phi_f14 = sp20;
    } else {
        phi_f2 = 1.0f;
        phi_f14 = 0.0f;
    }
    temp_s0_2->mf[0][2] = 0.0f;
    temp_s0_2->mf[0][3] = 0.0f;
    temp_s0_2->mf[1][2] = 0.0f;
    temp_s0_2->mf[1][3] = 0.0f;
    temp_s0_2->mf[2][0] = 0.0f;
    temp_s0_2->mf[2][1] = 0.0f;
    temp_s0_2->mf[2][3] = 0.0f;
    temp_s0_2->mf[3][0] = 0.0f;
    temp_s0_2->mf[3][1] = 0.0f;
    temp_s0_2->mf[3][2] = 0.0f;
    temp_s0_2->mf[2][2] = 1.0f;
    temp_s0_2->mf[3][3] = 1.0f;
    temp_s0_2->mf[0][0] = phi_f2;
    temp_s0_2->mf[1][1] = phi_f2;
    temp_s0_2->mf[0][1] = phi_f14;
    temp_s0_2->mf[1][0] = -phi_f14;
}

void SysMatrix_InsertRotation(s16 xRotation, s16 yRotation, s16 zRotation, s32 appendToState) {
    MtxF *temp_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f10_4;
    f32 temp_f10_5;
    f32 temp_f10_6;
    f32 temp_f12;
    f32 temp_f12_10;
    f32 temp_f12_11;
    f32 temp_f12_12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    f32 temp_f12_6;
    f32 temp_f12_7;
    f32 temp_f12_8;
    f32 temp_f12_9;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f16_4;
    f32 temp_f16_5;
    f32 temp_f16_6;
    f32 temp_f16_7;
    f32 temp_f16_8;
    f32 temp_f16_9;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f2;
    f32 temp_f2_10;
    f32 temp_f2_11;
    f32 temp_f2_12;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f2_7;
    f32 temp_f2_8;
    f32 temp_f2_9;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;

    temp_s0 = sCurrentMatrix;
    if (appendToState == 1) {
        if (zRotation != 0) {
            temp_f20 = Math_SinS(zRotation);
            temp_f0 = Math_CosS(zRotation);
            temp_f2 = temp_s0->mf[0][0];
            temp_f12 = temp_s0->mf[1][0];
            temp_f10 = temp_f12 * temp_f0;
            temp_f12_2 = temp_s0->mf[1][1];
            temp_f16 = temp_f2 * temp_f20;
            temp_f2_2 = temp_s0->mf[0][1];
            temp_f4 = temp_f2_2 * temp_f0;
            temp_s0->mf[0][0] = (temp_f2 * temp_f0) + (temp_f12 * temp_f20);
            temp_f12_3 = temp_s0->mf[1][2];
            temp_f16_2 = temp_f2_2 * temp_f20;
            temp_f2_3 = temp_s0->mf[0][2];
            temp_s0->mf[1][0] = temp_f10 - temp_f16;
            temp_s0->mf[0][1] = temp_f4 + (temp_f12_2 * temp_f20);
            temp_f12_4 = temp_s0->mf[1][3];
            temp_f16_3 = temp_f2_3 * temp_f20;
            temp_f2_4 = temp_s0->mf[0][3];
            temp_s0->mf[1][1] = (temp_f12_2 * temp_f0) - temp_f16_2;
            temp_s0->mf[0][2] = (temp_f2_3 * temp_f0) + (temp_f12_3 * temp_f20);
            temp_f16_4 = temp_f2_4 * temp_f20;
            temp_s0->mf[1][2] = (temp_f12_3 * temp_f0) - temp_f16_3;
            temp_s0->mf[0][3] = (temp_f2_4 * temp_f0) + (temp_f12_4 * temp_f20);
            temp_s0->mf[1][3] = (temp_f12_4 * temp_f0) - temp_f16_4;
        }
        if (yRotation != 0) {
            temp_f20_2 = Math_SinS(yRotation);
            temp_f0_2 = Math_CosS(yRotation);
            temp_f2_5 = temp_s0->mf[0][0];
            temp_f12_5 = temp_s0->mf[2][0];
            temp_f10_2 = temp_f2_5 * temp_f20_2;
            temp_f2_6 = temp_s0->mf[0][1];
            temp_f16_5 = temp_f12_5 * temp_f0_2;
            temp_f12_6 = temp_s0->mf[2][1];
            temp_f4_2 = temp_f2_6 * temp_f0_2;
            temp_s0->mf[0][0] = (temp_f2_5 * temp_f0_2) - (temp_f12_5 * temp_f20_2);
            temp_f10_3 = temp_f2_6 * temp_f20_2;
            temp_f2_7 = temp_s0->mf[0][2];
            temp_f12_7 = temp_s0->mf[2][2];
            temp_s0->mf[2][0] = temp_f10_2 + temp_f16_5;
            temp_s0->mf[0][1] = temp_f4_2 - (temp_f12_6 * temp_f20_2);
            temp_f10_4 = temp_f2_7 * temp_f20_2;
            temp_f2_8 = temp_s0->mf[0][3];
            temp_f12_8 = temp_s0->mf[2][3];
            temp_s0->mf[2][1] = temp_f10_3 + (temp_f12_6 * temp_f0_2);
            temp_s0->mf[0][2] = (temp_f2_7 * temp_f0_2) - (temp_f12_7 * temp_f20_2);
            temp_f10_5 = temp_f2_8 * temp_f20_2;
            temp_s0->mf[2][2] = temp_f10_4 + (temp_f12_7 * temp_f0_2);
            temp_s0->mf[0][3] = (temp_f2_8 * temp_f0_2) - (temp_f12_8 * temp_f20_2);
            temp_s0->mf[2][3] = temp_f10_5 + (temp_f12_8 * temp_f0_2);
        }
        if (xRotation != 0) {
            temp_f20_3 = Math_SinS(xRotation);
            temp_f0_3 = Math_CosS(xRotation);
            temp_f2_9 = temp_s0->mf[1][0];
            temp_f12_9 = temp_s0->mf[2][0];
            temp_f10_6 = temp_f12_9 * temp_f0_3;
            temp_f12_10 = temp_s0->mf[2][1];
            temp_f16_6 = temp_f2_9 * temp_f20_3;
            temp_f2_10 = temp_s0->mf[1][1];
            temp_f4_3 = temp_f2_10 * temp_f0_3;
            temp_s0->mf[1][0] = (temp_f2_9 * temp_f0_3) + (temp_f12_9 * temp_f20_3);
            temp_f12_11 = temp_s0->mf[2][2];
            temp_f16_7 = temp_f2_10 * temp_f20_3;
            temp_f2_11 = temp_s0->mf[1][2];
            temp_s0->mf[2][0] = temp_f10_6 - temp_f16_6;
            temp_s0->mf[1][1] = temp_f4_3 + (temp_f12_10 * temp_f20_3);
            temp_f12_12 = temp_s0->mf[2][3];
            temp_f16_8 = temp_f2_11 * temp_f20_3;
            temp_f2_12 = temp_s0->mf[1][3];
            temp_s0->mf[2][1] = (temp_f12_10 * temp_f0_3) - temp_f16_7;
            temp_s0->mf[1][2] = (temp_f2_11 * temp_f0_3) + (temp_f12_11 * temp_f20_3);
            temp_f16_9 = temp_f2_12 * temp_f20_3;
            temp_s0->mf[2][2] = (temp_f12_11 * temp_f0_3) - temp_f16_8;
            temp_s0->mf[1][3] = (temp_f2_12 * temp_f0_3) + (temp_f12_12 * temp_f20_3);
            temp_s0->mf[2][3] = (temp_f12_12 * temp_f0_3) - temp_f16_9;
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    SkinMatrix_SetRotateRPY(temp_s0, xRotation, yRotation, zRotation);
}

void SysMatrix_RotateAndTranslateState(Vec3f *translation, Vec3s *rotation) {
    MtxF *temp_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f10_4;
    f32 temp_f10_5;
    f32 temp_f10_6;
    f32 temp_f12;
    f32 temp_f12_10;
    f32 temp_f12_11;
    f32 temp_f12_12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    f32 temp_f12_6;
    f32 temp_f12_7;
    f32 temp_f12_8;
    f32 temp_f12_9;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f16_4;
    f32 temp_f16_5;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f2;
    f32 temp_f2_10;
    f32 temp_f2_11;
    f32 temp_f2_12;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f2_7;
    f32 temp_f2_8;
    f32 temp_f2_9;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f8;
    s16 temp_a0;
    s16 temp_a0_2;

    temp_s0 = sCurrentMatrix;
    translation = translation;
    temp_f20 = Math_SinS(rotation->z);
    temp_f0 = Math_CosS(rotation->z);
    temp_f2 = temp_s0->mf[0][0];
    temp_f12 = temp_s0->mf[1][0];
    temp_f10 = temp_f12 * temp_f0;
    temp_f12_2 = temp_s0->mf[1][1];
    temp_f8 = (temp_f2 * temp_f0) + (temp_f12 * temp_f20);
    temp_s0->mf[3][0] += (temp_f2 * translation->x) + (temp_f12 * translation->y) + (temp_s0->mf[2][0] * translation->z);
    temp_f2_2 = temp_s0->mf[0][1];
    temp_s0->mf[0][0] = temp_f8;
    temp_s0->mf[1][0] = temp_f10 - (temp_f2 * temp_f20);
    temp_f12_3 = temp_s0->mf[1][2];
    temp_s0->mf[3][1] += (temp_f2_2 * translation->x) + (temp_f12_2 * translation->y) + (temp_s0->mf[2][1] * translation->z);
    temp_f2_3 = temp_s0->mf[0][2];
    temp_s0->mf[0][1] = (temp_f2_2 * temp_f0) + (temp_f12_2 * temp_f20);
    temp_s0->mf[1][1] = (temp_f12_2 * temp_f0) - (temp_f2_2 * temp_f20);
    temp_f12_4 = temp_s0->mf[1][3];
    temp_s0->mf[3][2] += (temp_f2_3 * translation->x) + (temp_f12_3 * translation->y) + (temp_s0->mf[2][2] * translation->z);
    temp_f2_4 = temp_s0->mf[0][3];
    temp_s0->mf[0][2] = (temp_f2_3 * temp_f0) + (temp_f12_3 * temp_f20);
    temp_s0->mf[1][2] = (temp_f12_3 * temp_f0) - (temp_f2_3 * temp_f20);
    temp_s0->mf[3][3] += (temp_f2_4 * translation->x) + (temp_f12_4 * translation->y) + (temp_s0->mf[2][3] * translation->z);
    temp_s0->mf[0][3] = (temp_f2_4 * temp_f0) + (temp_f12_4 * temp_f20);
    temp_s0->mf[1][3] = (temp_f12_4 * temp_f0) - (temp_f2_4 * temp_f20);
    temp_a0 = rotation->y;
    if (temp_a0 != 0) {
        temp_f20_2 = Math_SinS(temp_a0);
        temp_f0_2 = Math_CosS(rotation->y);
        temp_f2_5 = temp_s0->mf[0][0];
        temp_f12_5 = temp_s0->mf[2][0];
        temp_f10_2 = temp_f2_5 * temp_f20_2;
        temp_f2_6 = temp_s0->mf[0][1];
        temp_f16 = temp_f12_5 * temp_f0_2;
        temp_f12_6 = temp_s0->mf[2][1];
        temp_f4 = temp_f2_6 * temp_f0_2;
        temp_s0->mf[0][0] = (temp_f2_5 * temp_f0_2) - (temp_f12_5 * temp_f20_2);
        temp_f10_3 = temp_f2_6 * temp_f20_2;
        temp_f2_7 = temp_s0->mf[0][2];
        temp_f12_7 = temp_s0->mf[2][2];
        temp_s0->mf[2][0] = temp_f10_2 + temp_f16;
        temp_s0->mf[0][1] = temp_f4 - (temp_f12_6 * temp_f20_2);
        temp_f10_4 = temp_f2_7 * temp_f20_2;
        temp_f2_8 = temp_s0->mf[0][3];
        temp_f12_8 = temp_s0->mf[2][3];
        temp_s0->mf[2][1] = temp_f10_3 + (temp_f12_6 * temp_f0_2);
        temp_s0->mf[0][2] = (temp_f2_7 * temp_f0_2) - (temp_f12_7 * temp_f20_2);
        temp_f10_5 = temp_f2_8 * temp_f20_2;
        temp_s0->mf[2][2] = temp_f10_4 + (temp_f12_7 * temp_f0_2);
        temp_s0->mf[0][3] = (temp_f2_8 * temp_f0_2) - (temp_f12_8 * temp_f20_2);
        temp_s0->mf[2][3] = temp_f10_5 + (temp_f12_8 * temp_f0_2);
    }
    temp_a0_2 = rotation->x;
    if (temp_a0_2 != 0) {
        temp_f20_3 = Math_SinS(temp_a0_2);
        temp_f0_3 = Math_CosS(rotation->x);
        temp_f2_9 = temp_s0->mf[1][0];
        temp_f12_9 = temp_s0->mf[2][0];
        temp_f10_6 = temp_f12_9 * temp_f0_3;
        temp_f12_10 = temp_s0->mf[2][1];
        temp_f16_2 = temp_f2_9 * temp_f20_3;
        temp_f2_10 = temp_s0->mf[1][1];
        temp_f4_2 = temp_f2_10 * temp_f0_3;
        temp_s0->mf[1][0] = (temp_f2_9 * temp_f0_3) + (temp_f12_9 * temp_f20_3);
        temp_f12_11 = temp_s0->mf[2][2];
        temp_f16_3 = temp_f2_10 * temp_f20_3;
        temp_f2_11 = temp_s0->mf[1][2];
        temp_s0->mf[2][0] = temp_f10_6 - temp_f16_2;
        temp_s0->mf[1][1] = temp_f4_2 + (temp_f12_10 * temp_f20_3);
        temp_f12_12 = temp_s0->mf[2][3];
        temp_f16_4 = temp_f2_11 * temp_f20_3;
        temp_f2_12 = temp_s0->mf[1][3];
        temp_s0->mf[2][1] = (temp_f12_10 * temp_f0_3) - temp_f16_3;
        temp_s0->mf[1][2] = (temp_f2_11 * temp_f0_3) + (temp_f12_11 * temp_f20_3);
        temp_f16_5 = temp_f2_12 * temp_f20_3;
        temp_s0->mf[2][2] = (temp_f12_11 * temp_f0_3) - temp_f16_4;
        temp_s0->mf[1][3] = (temp_f2_12 * temp_f0_3) + (temp_f12_12 * temp_f20_3);
        temp_s0->mf[2][3] = (temp_f12_12 * temp_f0_3) - temp_f16_5;
    }
}

void SysMatrix_SetStateRotationAndTranslation(f32 x, f32 y, f32 z, Vec3s *rotation) {
    f32 sp30;
    f32 sp2C;
    f32 sp24;
    MtxF *temp_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f4;
    f32 temp_f8;
    s16 temp_a0;
    s16 temp_a0_2;

    temp_s0 = sCurrentMatrix;
    sp30 = Math_SinS(rotation->y);
    temp_f0 = Math_CosS(rotation->y);
    temp_s0->mf[0][0] = temp_f0;
    temp_s0->mf[0][2] = -sp30;
    temp_s0->mf[3][0] = x;
    temp_s0->mf[3][1] = y;
    temp_s0->mf[0][3] = 0.0f;
    temp_s0->mf[1][3] = 0.0f;
    temp_s0->mf[2][3] = 0.0f;
    temp_s0->mf[3][3] = 1.0f;
    temp_s0->mf[3][2] = z;
    temp_a0 = rotation->x;
    if (temp_a0 != 0) {
        sp2C = temp_f0;
        sp30 = sp30;
        sp24 = Math_SinS(temp_a0);
        temp_f0_2 = Math_CosS(rotation->x);
        temp_f18 = temp_f0 * temp_f0_2;
        temp_s0->mf[2][1] = -sp24;
        temp_s0->mf[1][1] = temp_f0_2;
        temp_s0->mf[2][2] = temp_f18;
        temp_s0->mf[1][2] = temp_f0 * sp24;
        temp_s0->mf[2][0] = sp30 * temp_f0_2;
        temp_s0->mf[1][0] = sp30 * sp24;
    } else {
        temp_s0->mf[2][2] = temp_f0;
        temp_s0->mf[2][0] = sp30;
        temp_s0->mf[2][1] = 0.0f;
        temp_s0->mf[1][2] = 0.0f;
        temp_s0->mf[1][0] = 0.0f;
        temp_s0->mf[1][1] = 1.0f;
    }
    temp_a0_2 = rotation->z;
    if (temp_a0_2 != 0) {
        sp24 = Math_SinS(temp_a0_2);
        temp_f0_3 = Math_CosS(rotation->z);
        temp_f14 = temp_s0->mf[0][0];
        temp_f12 = temp_s0->mf[1][0];
        temp_f8 = temp_f12 * temp_f0_3;
        temp_f12_2 = temp_s0->mf[1][2];
        temp_f10 = temp_f14 * sp24;
        temp_f14_2 = temp_s0->mf[0][2];
        temp_f4 = temp_f14_2 * temp_f0_3;
        temp_s0->mf[0][0] = (temp_f14 * temp_f0_3) + (temp_f12 * sp24);
        temp_f12_3 = temp_s0->mf[1][1];
        temp_s0->mf[1][0] = temp_f8 - temp_f10;
        temp_f18_2 = temp_f14_2 * sp24;
        temp_s0->mf[0][2] = temp_f4 + (temp_f12_2 * sp24);
        temp_s0->mf[0][1] = temp_f12_3 * sp24;
        temp_s0->mf[1][2] = (temp_f12_2 * temp_f0_3) - temp_f18_2;
        temp_s0->mf[1][1] = temp_f12_3 * temp_f0_3;
        return;
    }
    temp_s0->mf[0][1] = 0.0f;
}

RSPMatrix *SysMatrix_ToRSPMatrix(MtxF *src, RSPMatrix *dst) {
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
    u16 *temp_v1;

    temp_v1 = dst->fracPart;
    temp_f8 = (s32) (src->mf[0][0] * 65536.0f);
    dst->intPart[0] = (s16) (temp_f8 >> 0x10);
    dst->fracPart[0] = (u16) temp_f8;
    temp_f18 = (s32) (src->mf[0][1] * 65536.0f);
    dst->intPart[1] = (s16) (temp_f18 >> 0x10);
    dst->fracPart[1] = (u16) temp_f18;
    temp_f8_2 = (s32) (src->mf[0][2] * 65536.0f);
    dst->intPart[2] = (s16) (temp_f8_2 >> 0x10);
    dst->fracPart[2] = (u16) temp_f8_2;
    temp_f18_2 = (s32) (src->mf[0][3] * 65536.0f);
    dst->intPart[3] = (s16) (temp_f18_2 >> 0x10);
    dst->fracPart[3] = (u16) temp_f18_2;
    temp_f8_3 = (s32) (src->mf[1][0] * 65536.0f);
    dst->intPart[4] = (s16) (temp_f8_3 >> 0x10);
    dst->fracPart[4] = (u16) temp_f8_3;
    temp_f18_3 = (s32) (src->mf[1][1] * 65536.0f);
    dst->intPart[5] = (s16) (temp_f18_3 >> 0x10);
    dst->fracPart[5] = (u16) temp_f18_3;
    temp_f8_4 = (s32) (src->mf[1][2] * 65536.0f);
    dst->intPart[6] = (s16) (temp_f8_4 >> 0x10);
    dst->fracPart[6] = (u16) temp_f8_4;
    temp_f18_4 = (s32) (src->mf[1][3] * 65536.0f);
    dst->intPart[7] = (s16) (temp_f18_4 >> 0x10);
    dst->fracPart[7] = (u16) temp_f18_4;
    temp_f8_5 = (s32) (src->mf[2][0] * 65536.0f);
    dst->intPart[8] = (s16) (temp_f8_5 >> 0x10);
    dst->fracPart[8] = (u16) temp_f8_5;
    temp_f18_5 = (s32) (src->mf[2][1] * 65536.0f);
    dst->intPart[9] = (s16) (temp_f18_5 >> 0x10);
    temp_v1->unk12 = (s16) temp_f18_5;
    temp_f8_6 = (s32) (src->mf[2][2] * 65536.0f);
    dst->intPart[10] = (s16) (temp_f8_6 >> 0x10);
    temp_v1->unk14 = (s16) temp_f8_6;
    temp_f18_6 = (s32) (src->mf[2][3] * 65536.0f);
    dst->intPart[11] = (s16) (temp_f18_6 >> 0x10);
    temp_v1->unk16 = (s16) temp_f18_6;
    temp_f8_7 = (s32) (src->mf[3][0] * 65536.0f);
    dst->intPart[12] = (s16) (temp_f8_7 >> 0x10);
    temp_v1->unk18 = (s16) temp_f8_7;
    temp_f18_7 = (s32) (src->mf[3][1] * 65536.0f);
    dst->intPart[13] = (s16) (temp_f18_7 >> 0x10);
    temp_v1->unk1A = (s16) temp_f18_7;
    temp_f8_8 = (s32) (src->mf[3][2] * 65536.0f);
    dst->intPart[14] = (s16) (temp_f8_8 >> 0x10);
    temp_v1->unk1C = (s16) temp_f8_8;
    temp_f18_8 = (s32) (src->mf[3][3] * 65536.0f);
    dst->intPart[15] = (s16) (temp_f18_8 >> 0x10);
    temp_v1->unk1E = (s16) temp_f18_8;
    return dst;
}

RSPMatrix *SysMatrix_GetStateAsRSPMatrix(RSPMatrix *matrix) {
    return SysMatrix_ToRSPMatrix(sCurrentMatrix, matrix);
}

Mtx *Matrix_NewMtx(GraphicsContext *gfxCtx) {
    Gfx *temp_a0;

    temp_a0 = gfxCtx->polyOpa.d - 0x40;
    gfxCtx->polyOpa.d = temp_a0;
    return SysMatrix_GetStateAsRSPMatrix((RSPMatrix *) temp_a0);
}

void SysMatrix_AppendToPolyOpaDisp(MtxF *mtx, GraphicsContext *gfxCtx) {
    Gfx *temp_a1;

    temp_a1 = gfxCtx->polyOpa.d - 0x40;
    gfxCtx->polyOpa.d = temp_a1;
    SysMatrix_ToRSPMatrix(mtx, (RSPMatrix *) temp_a1);
}

void SysMatrix_MultiplyVector3fByState(Vec3f *src, Vec3f *dst) {
    MtxF *temp_v0;

    temp_v0 = sCurrentMatrix;
    dst->x = temp_v0->mf[3][0] + ((temp_v0->mf[0][0] * src->x) + (temp_v0->mf[1][0] * src->y) + (temp_v0->mf[2][0] * src->z));
    dst->y = temp_v0->mf[3][1] + ((temp_v0->mf[0][1] * src->x) + (temp_v0->mf[1][1] * src->y) + (temp_v0->mf[2][1] * src->z));
    dst->z = temp_v0->mf[3][2] + ((temp_v0->mf[0][2] * src->x) + (temp_v0->mf[1][2] * src->y) + (temp_v0->mf[2][2] * src->z));
}

void SysMatrix_GetStateTranslation(Vec3f *dst) {
    MtxF *temp_v0;

    temp_v0 = sCurrentMatrix;
    dst->x = temp_v0->mf[3][0];
    dst->y = temp_v0->mf[3][1];
    dst->z = temp_v0->mf[3][2];
}

void SysMatrix_GetStateTranslationAndScaledX(f32 scale, Vec3f *dst) {
    MtxF *temp_v0;

    temp_v0 = sCurrentMatrix;
    dst->x = temp_v0->mf[3][0] + (temp_v0->mf[0][0] * scale);
    dst->y = temp_v0->mf[3][1] + (temp_v0->mf[0][1] * scale);
    dst->z = temp_v0->mf[3][2] + (temp_v0->mf[0][2] * scale);
}

void SysMatrix_GetStateTranslationAndScaledY(f32 scale, Vec3f *dst) {
    MtxF *temp_v0;

    temp_v0 = sCurrentMatrix;
    dst->x = temp_v0->mf[3][0] + (temp_v0->mf[1][0] * scale);
    dst->y = temp_v0->mf[3][1] + (temp_v0->mf[1][1] * scale);
    dst->z = temp_v0->mf[3][2] + (temp_v0->mf[1][2] * scale);
}

void SysMatrix_GetStateTranslationAndScaledZ(f32 scale, Vec3f *dst) {
    MtxF *temp_v0;

    temp_v0 = sCurrentMatrix;
    dst->x = temp_v0->mf[3][0] + (temp_v0->mf[2][0] * scale);
    dst->y = temp_v0->mf[3][1] + (temp_v0->mf[2][1] * scale);
    dst->z = temp_v0->mf[3][2] + (temp_v0->mf[2][2] * scale);
}

void SysMatrix_MultiplyVector3fXZByCurrentState(Vec3f *src, Vec3f *dst) {
    MtxF *temp_v0;

    temp_v0 = sCurrentMatrix;
    dst->x = temp_v0->mf[3][0] + ((temp_v0->mf[0][0] * src->x) + (temp_v0->mf[1][0] * src->y) + (temp_v0->mf[2][0] * src->z));
    dst->z = temp_v0->mf[3][2] + ((temp_v0->mf[0][2] * src->x) + (temp_v0->mf[1][2] * src->y) + (temp_v0->mf[2][2] * src->z));
}

void Matrix_MtxFCopy(MtxF *dst, MtxF *src) {
    dst->mf[0][0] = src->mf[0][0];
    dst->mf[0][1] = src->mf[0][1];
    dst->mf[0][2] = src->mf[0][2];
    dst->mf[0][3] = src->mf[0][3];
    dst->mf[1][0] = src->mf[1][0];
    dst->mf[1][1] = src->mf[1][1];
    dst->mf[1][2] = src->mf[1][2];
    dst->mf[1][3] = src->mf[1][3];
    dst->mf[2][0] = src->mf[2][0];
    dst->mf[2][1] = src->mf[2][1];
    dst->mf[2][2] = src->mf[2][2];
    dst->mf[2][3] = src->mf[2][3];
    dst->mf[3][0] = src->mf[3][0];
    dst->mf[3][1] = src->mf[3][1];
    dst->mf[3][2] = src->mf[3][2];
    dst->mf[3][3] = src->mf[3][3];
}

void SysMatrix_FromRSPMatrix(RSPMatrix *src, MtxF *dst) {
    dst->mf[0][0] = (f32) (src->fracPart[0] | ((u16) src->intPart[0] << 0x10)) * 0.000015258789f;
    dst->mf[0][1] = (f32) (src->fracPart[1] | ((u16) src->intPart[1] << 0x10)) * 0.000015258789f;
    dst->mf[0][2] = (f32) (src->fracPart[2] | ((u16) src->intPart[2] << 0x10)) * 0.000015258789f;
    dst->mf[0][3] = (f32) (src->fracPart[3] | ((u16) src->intPart[3] << 0x10)) * 0.000015258789f;
    dst->mf[1][0] = (f32) (src->fracPart[4] | ((u16) src->intPart[4] << 0x10)) * 0.000015258789f;
    dst->mf[1][1] = (f32) (src->fracPart[5] | ((u16) src->intPart[5] << 0x10)) * 0.000015258789f;
    dst->mf[1][2] = (f32) (src->fracPart[6] | ((u16) src->intPart[6] << 0x10)) * 0.000015258789f;
    dst->mf[1][3] = (f32) (src->fracPart[7] | ((u16) src->intPart[7] << 0x10)) * 0.000015258789f;
    dst->mf[2][0] = (f32) (src->fracPart[8] | ((u16) src->intPart[8] << 0x10)) * 0.000015258789f;
    dst->mf[2][1] = (f32) (src->fracPart[9] | ((u16) src->intPart[9] << 0x10)) * 0.000015258789f;
    dst->mf[2][2] = (f32) (src->fracPart[10] | ((u16) src->intPart[10] << 0x10)) * 0.000015258789f;
    dst->mf[2][3] = (f32) (src->fracPart[11] | ((u16) src->intPart[11] << 0x10)) * 0.000015258789f;
    dst->mf[3][0] = (f32) (src->fracPart[12] | ((u16) src->intPart[12] << 0x10)) * 0.000015258789f;
    dst->mf[3][1] = (f32) (src->fracPart[13] | ((u16) src->intPart[13] << 0x10)) * 0.000015258789f;
    dst->mf[3][2] = (f32) (src->fracPart[14] | ((u16) src->intPart[14] << 0x10)) * 0.000015258789f;
    dst->mf[3][3] = (f32) (src->fracPart[15] | ((u16) src->intPart[15] << 0x10)) * 0.000015258789f;
}

void SysMatrix_MultiplyVector3fByMatrix(Vec3f *src, Vec3f *dst, MtxF *matrix) {
    dst->x = matrix->mf[3][0] + ((matrix->mf[0][0] * src->x) + (matrix->mf[1][0] * src->y) + (matrix->mf[2][0] * src->z));
    dst->y = matrix->mf[3][1] + ((matrix->mf[0][1] * src->x) + (matrix->mf[1][1] * src->y) + (matrix->mf[2][1] * src->z));
    dst->z = matrix->mf[3][2] + ((matrix->mf[0][2] * src->x) + (matrix->mf[1][2] * src->y) + (matrix->mf[2][2] * src->z));
}

void SysMatrix_TransposeXYZ(MtxF *matrix) {
    f32 temp_f0;
    f32 temp_f4;
    f32 temp_f6;

    temp_f4 = matrix->mf[1][0];
    temp_f6 = matrix->mf[2][0];
    matrix->mf[1][0] = matrix->mf[0][1];
    matrix->mf[0][1] = temp_f4;
    matrix->mf[2][0] = matrix->mf[0][2];
    temp_f0 = matrix->mf[1][2];
    matrix->mf[0][2] = temp_f6;
    matrix->mf[1][2] = matrix->mf[2][1];
    matrix->mf[2][1] = temp_f0;
}

void SysMatrix_NormalizeXYZ(MtxF *matrix) {
    MtxF *temp_v0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    f32 temp_f12_6;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;

    temp_v0 = sCurrentMatrix;
    temp_f2 = temp_v0->mf[0][0];
    temp_f12 = temp_v0->mf[0][1];
    temp_f12_2 = temp_v0->mf[0][2];
    temp_f12_3 = temp_v0->mf[1][1];
    temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f12_2 * temp_f12_2));
    temp_f2_2 = temp_v0->mf[1][0];
    temp_v0->mf[0][0] = matrix->mf[0][0] * temp_f0;
    temp_v0->mf[0][1] = matrix->mf[0][1] * temp_f0;
    temp_f12_4 = temp_v0->mf[1][2];
    temp_v0->mf[0][2] = matrix->mf[0][2] * temp_f0;
    temp_f12_5 = temp_v0->mf[2][1];
    temp_f0_2 = sqrtf((temp_f2_2 * temp_f2_2) + (temp_f12_3 * temp_f12_3) + (temp_f12_4 * temp_f12_4));
    temp_f2_3 = temp_v0->mf[2][0];
    temp_v0->mf[1][0] = matrix->mf[1][0] * temp_f0_2;
    temp_v0->mf[1][1] = matrix->mf[1][1] * temp_f0_2;
    temp_f12_6 = temp_v0->mf[2][2];
    temp_v0->mf[1][2] = matrix->mf[1][2] * temp_f0_2;
    temp_f0_3 = sqrtf((temp_f2_3 * temp_f2_3) + (temp_f12_5 * temp_f12_5) + (temp_f12_6 * temp_f12_6));
    temp_v0->mf[2][0] = matrix->mf[2][0] * temp_f0_3;
    temp_v0->mf[2][1] = matrix->mf[2][1] * temp_f0_3;
    temp_v0->mf[2][2] = matrix->mf[2][2] * temp_f0_3;
}

void func_8018219C(MtxF *pfParm1, Vec3s *psParm2, s32 iParm3) {
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s16 temp_v1;
    s16 phi_v0;

    temp_f20 = pfParm1->mf[2][0];
    temp_f2 = pfParm1->mf[2][2];
    psParm2->x = Math_Atan2S(-pfParm1->mf[2][1], sqrtf((temp_f20 * temp_f20) + (temp_f2 * temp_f2)));
    temp_v1 = psParm2->x;
    if ((temp_v1 == 0x4000) || (temp_v1 == -0x4000)) {
        psParm2->z = 0;
        psParm2->y = Math_Atan2S(-pfParm1->mf[0][2], pfParm1->mf[0][0]);
        return;
    }
    temp_f12 = pfParm1->mf[2][0];
    temp_f14 = pfParm1->mf[2][2];
    pfParm1 = pfParm1;
    psParm2->y = Math_Atan2S(temp_f12, temp_f14);
    if (iParm3 == 0) {
        phi_v0 = Math_Atan2S(pfParm1->mf[0][1], pfParm1->mf[1][1]);
    } else {
        temp_f20_2 = pfParm1->mf[0][0];
        temp_f2_2 = pfParm1->mf[0][2];
        temp_f16 = pfParm1->mf[1][2];
        temp_f2_3 = pfParm1->mf[0][1];
        temp_f2_4 = pfParm1->mf[1][0];
        temp_f16_2 = pfParm1->mf[1][1];
        phi_v0 = Math_Atan2S(temp_f2_3 / sqrtf((temp_f20_2 * temp_f20_2) + (temp_f2_2 * temp_f2_2) + (temp_f2_3 * temp_f2_3)), temp_f16_2 / sqrtf((temp_f2_4 * temp_f2_4) + (temp_f16 * temp_f16) + (temp_f16_2 * temp_f16_2)));
    }
    psParm2->z = phi_v0;
}

void func_801822C4(void *arg0, void *arg1, s32 arg2) {
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s16 temp_v1;
    s16 phi_v0;

    temp_f20 = arg0->unk0;
    temp_f2 = arg0->unk4;
    arg1->unk2 = Math_Atan2S(-arg0->unk8, sqrtf((temp_f20 * temp_f20) + (temp_f2 * temp_f2)));
    temp_v1 = arg1->unk2;
    if ((temp_v1 == 0x4000) || (temp_v1 == -0x4000)) {
        arg1->unk0 = 0;
        arg1->unk4 = Math_Atan2S(-arg0->unk10, arg0->unk14);
        return;
    }
    temp_f12 = arg0->unk4;
    temp_f14 = arg0->unk0;
    arg0 = arg0;
    arg1->unk4 = Math_Atan2S(temp_f12, temp_f14);
    if (arg2 == 0) {
        phi_v0 = Math_Atan2S(arg0->unk18, arg0->unk28);
    } else {
        temp_f20_2 = arg0->unk10;
        temp_f2_2 = arg0->unk14;
        temp_f16 = arg0->unk24;
        temp_f2_3 = arg0->unk18;
        temp_f2_4 = arg0->unk20;
        temp_f16_2 = arg0->unk28;
        phi_v0 = Math_Atan2S(temp_f2_3 / sqrtf((temp_f20_2 * temp_f20_2) + (temp_f2_2 * temp_f2_2) + (temp_f2_3 * temp_f2_3)), temp_f16_2 / sqrtf((temp_f2_4 * temp_f2_4) + (temp_f16 * temp_f16) + (temp_f16_2 * temp_f16_2)));
    }
    arg1->unk0 = phi_v0;
}

void SysMatrix_InsertRotationAroundUnitVector_f(f32 rotation, Vec3f *vector, s32 appendToState) {
    MtxF *temp_s0;
    MtxF *temp_s0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    f32 temp_f12_6;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f18_3;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    f32 temp_f22_4;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f24_3;
    f32 temp_f24_4;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;

    if (appendToState == 1) {
        if (rotation != 0.0f) {
            temp_s0 = sCurrentMatrix;
            temp_f26 = __sinf(rotation);
            temp_f0 = __cosf(rotation);
            temp_f14 = temp_s0->mf[0][0];
            temp_f2 = temp_s0->mf[1][0];
            temp_f20 = vector->x;
            temp_f22 = vector->y;
            temp_f12 = temp_s0->mf[2][0];
            temp_f24 = vector->z;
            temp_f16 = 1.0f - temp_f0;
            temp_f18 = ((temp_f20 * temp_f14) + (temp_f22 * temp_f2) + (temp_f24 * temp_f12)) * temp_f16;
            temp_s0->mf[0][0] = (temp_f14 * temp_f0) + (temp_f20 * temp_f18) + (temp_f26 * ((temp_f2 * temp_f24) - (temp_f12 * temp_f22)));
            temp_f12_2 = temp_s0->mf[2][1];
            temp_s0->mf[1][0] = (temp_f2 * temp_f0) + (vector->y * temp_f18) + (temp_f26 * ((temp_f12 * vector->x) - (temp_f14 * vector->z)));
            temp_f14_2 = temp_s0->mf[0][1];
            temp_f2_2 = temp_s0->mf[1][1];
            temp_s0->mf[2][0] = (temp_f12 * temp_f0) + (vector->z * temp_f18) + (temp_f26 * ((temp_f14 * vector->y) - (temp_f2 * vector->x)));
            temp_f20_2 = vector->x;
            temp_f22_2 = vector->y;
            temp_f24_2 = vector->z;
            temp_f18_2 = ((temp_f20_2 * temp_f14_2) + (temp_f22_2 * temp_f2_2) + (temp_f24_2 * temp_f12_2)) * temp_f16;
            temp_s0->mf[0][1] = (temp_f14_2 * temp_f0) + (temp_f20_2 * temp_f18_2) + (temp_f26 * ((temp_f2_2 * temp_f24_2) - (temp_f12_2 * temp_f22_2)));
            temp_f12_3 = temp_s0->mf[2][2];
            temp_s0->mf[1][1] = (temp_f2_2 * temp_f0) + (vector->y * temp_f18_2) + (temp_f26 * ((temp_f12_2 * vector->x) - (temp_f14_2 * vector->z)));
            temp_f14_3 = temp_s0->mf[0][2];
            temp_f2_3 = temp_s0->mf[1][2];
            temp_s0->mf[2][1] = (temp_f12_2 * temp_f0) + (vector->z * temp_f18_2) + (temp_f26 * ((temp_f14_2 * vector->y) - (temp_f2_2 * vector->x)));
            temp_f20_3 = vector->x;
            temp_f22_3 = vector->y;
            temp_f24_3 = vector->z;
            temp_f18_3 = ((temp_f20_3 * temp_f14_3) + (temp_f22_3 * temp_f2_3) + (temp_f24_3 * temp_f12_3)) * temp_f16;
            temp_s0->mf[0][2] = (temp_f14_3 * temp_f0) + (temp_f20_3 * temp_f18_3) + (temp_f26 * ((temp_f2_3 * temp_f24_3) - (temp_f12_3 * temp_f22_3)));
            temp_s0->mf[1][2] = (temp_f2_3 * temp_f0) + (vector->y * temp_f18_3) + (temp_f26 * ((temp_f12_3 * vector->x) - (temp_f14_3 * vector->z)));
            temp_s0->mf[2][2] = (temp_f12_3 * temp_f0) + (vector->z * temp_f18_3) + (temp_f26 * ((temp_f14_3 * vector->y) - (temp_f2_3 * vector->x)));
            return;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return;
    }
    temp_s0_2 = sCurrentMatrix;
    if (rotation != 0.0f) {
        temp_f26_2 = __sinf(rotation);
        temp_f0_2 = __cosf(rotation);
        temp_f20_4 = vector->x;
        temp_f16_2 = 1.0f - temp_f0_2;
        temp_s0_2->mf[0][0] = (temp_f20_4 * temp_f20_4 * temp_f16_2) + temp_f0_2;
        temp_f22_4 = vector->y;
        temp_s0_2->mf[1][1] = (temp_f22_4 * temp_f22_4 * temp_f16_2) + temp_f0_2;
        temp_f24_4 = vector->z;
        temp_s0_2->mf[2][2] = (temp_f24_4 * temp_f24_4 * temp_f16_2) + temp_f0_2;
        temp_f2_4 = vector->x * temp_f16_2 * vector->y;
        temp_f12_4 = vector->z * temp_f26_2;
        temp_s0_2->mf[0][1] = temp_f2_4 + temp_f12_4;
        temp_s0_2->mf[1][0] = temp_f2_4 - temp_f12_4;
        temp_f2_5 = vector->x * temp_f16_2 * vector->z;
        temp_f12_5 = vector->y * temp_f26_2;
        temp_s0_2->mf[0][2] = temp_f2_5 - temp_f12_5;
        temp_s0_2->mf[2][0] = temp_f2_5 + temp_f12_5;
        temp_s0_2->mf[3][3] = 1.0f;
        temp_s0_2->mf[0][3] = 0.0f;
        temp_s0_2->mf[1][3] = 0.0f;
        temp_s0_2->mf[2][3] = 0.0f;
        temp_s0_2->mf[3][0] = 0.0f;
        temp_s0_2->mf[3][1] = 0.0f;
        temp_f2_6 = vector->y * temp_f16_2 * vector->z;
        temp_s0_2->mf[3][2] = 0.0f;
        temp_f12_6 = vector->x * temp_f26_2;
        temp_s0_2->mf[1][2] = temp_f2_6 + temp_f12_6;
        temp_s0_2->mf[2][1] = temp_f2_6 - temp_f12_6;
        return;
    }
    temp_s0_2->mf[0][1] = 0.0f;
    temp_s0_2->mf[0][2] = 0.0f;
    temp_s0_2->mf[0][3] = 0.0f;
    temp_s0_2->mf[1][0] = 0.0f;
    temp_s0_2->mf[1][2] = 0.0f;
    temp_s0_2->mf[1][3] = 0.0f;
    temp_s0_2->mf[2][0] = 0.0f;
    temp_s0_2->mf[2][1] = 0.0f;
    temp_s0_2->mf[2][3] = 0.0f;
    temp_s0_2->mf[3][0] = 0.0f;
    temp_s0_2->mf[3][1] = 0.0f;
    temp_s0_2->mf[3][2] = 0.0f;
    temp_s0_2->mf[0][0] = 1.0f;
    temp_s0_2->mf[1][1] = 1.0f;
    temp_s0_2->mf[2][2] = 1.0f;
    temp_s0_2->mf[3][3] = 1.0f;
}

void SysMatrix_InsertRotationAroundUnitVector_s(s16 rotation, Vec3f *vector, s32 appendToState) {
    MtxF *temp_s0;
    MtxF *temp_s0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    f32 temp_f12_6;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f18_3;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    f32 temp_f22_4;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f24_3;
    f32 temp_f24_4;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    s16 temp_a0;

    temp_a0 = rotation;
    if (appendToState == 1) {
        if (temp_a0 != 0) {
            temp_s0 = sCurrentMatrix;
            rotation = temp_a0;
            temp_f26 = Math_SinS(temp_a0);
            temp_f0 = Math_CosS(rotation);
            temp_f14 = temp_s0->mf[0][0];
            temp_f2 = temp_s0->mf[1][0];
            temp_f20 = vector->x;
            temp_f22 = vector->y;
            temp_f12 = temp_s0->mf[2][0];
            temp_f24 = vector->z;
            temp_f16 = 1.0f - temp_f0;
            temp_f18 = ((temp_f20 * temp_f14) + (temp_f22 * temp_f2) + (temp_f24 * temp_f12)) * temp_f16;
            temp_s0->mf[0][0] = (temp_f14 * temp_f0) + (temp_f20 * temp_f18) + (temp_f26 * ((temp_f2 * temp_f24) - (temp_f12 * temp_f22)));
            temp_f12_2 = temp_s0->mf[2][1];
            temp_s0->mf[1][0] = (temp_f2 * temp_f0) + (vector->y * temp_f18) + (temp_f26 * ((temp_f12 * vector->x) - (temp_f14 * vector->z)));
            temp_f14_2 = temp_s0->mf[0][1];
            temp_f2_2 = temp_s0->mf[1][1];
            temp_s0->mf[2][0] = (temp_f12 * temp_f0) + (vector->z * temp_f18) + (temp_f26 * ((temp_f14 * vector->y) - (temp_f2 * vector->x)));
            temp_f20_2 = vector->x;
            temp_f22_2 = vector->y;
            temp_f24_2 = vector->z;
            temp_f18_2 = ((temp_f20_2 * temp_f14_2) + (temp_f22_2 * temp_f2_2) + (temp_f24_2 * temp_f12_2)) * temp_f16;
            temp_s0->mf[0][1] = (temp_f14_2 * temp_f0) + (temp_f20_2 * temp_f18_2) + (temp_f26 * ((temp_f2_2 * temp_f24_2) - (temp_f12_2 * temp_f22_2)));
            temp_f12_3 = temp_s0->mf[2][2];
            temp_s0->mf[1][1] = (temp_f2_2 * temp_f0) + (vector->y * temp_f18_2) + (temp_f26 * ((temp_f12_2 * vector->x) - (temp_f14_2 * vector->z)));
            temp_f14_3 = temp_s0->mf[0][2];
            temp_f2_3 = temp_s0->mf[1][2];
            temp_s0->mf[2][1] = (temp_f12_2 * temp_f0) + (vector->z * temp_f18_2) + (temp_f26 * ((temp_f14_2 * vector->y) - (temp_f2_2 * vector->x)));
            temp_f20_3 = vector->x;
            temp_f22_3 = vector->y;
            temp_f24_3 = vector->z;
            temp_f18_3 = ((temp_f20_3 * temp_f14_3) + (temp_f22_3 * temp_f2_3) + (temp_f24_3 * temp_f12_3)) * temp_f16;
            temp_s0->mf[0][2] = (temp_f14_3 * temp_f0) + (temp_f20_3 * temp_f18_3) + (temp_f26 * ((temp_f2_3 * temp_f24_3) - (temp_f12_3 * temp_f22_3)));
            temp_s0->mf[1][2] = (temp_f2_3 * temp_f0) + (vector->y * temp_f18_3) + (temp_f26 * ((temp_f12_3 * vector->x) - (temp_f14_3 * vector->z)));
            temp_s0->mf[2][2] = (temp_f12_3 * temp_f0) + (vector->z * temp_f18_3) + (temp_f26 * ((temp_f14_3 * vector->y) - (temp_f2_3 * vector->x)));
            return;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return;
    }
    temp_s0_2 = sCurrentMatrix;
    if (temp_a0 != 0) {
        rotation = temp_a0;
        temp_f26_2 = Math_SinS(temp_a0);
        temp_f0_2 = Math_CosS(rotation);
        temp_f20_4 = vector->x;
        temp_f16_2 = 1.0f - temp_f0_2;
        temp_s0_2->mf[0][0] = (temp_f20_4 * temp_f20_4 * temp_f16_2) + temp_f0_2;
        temp_f22_4 = vector->y;
        temp_s0_2->mf[1][1] = (temp_f22_4 * temp_f22_4 * temp_f16_2) + temp_f0_2;
        temp_f24_4 = vector->z;
        temp_s0_2->mf[2][2] = (temp_f24_4 * temp_f24_4 * temp_f16_2) + temp_f0_2;
        temp_f2_4 = vector->x * temp_f16_2 * vector->y;
        temp_f12_4 = vector->z * temp_f26_2;
        temp_s0_2->mf[0][1] = temp_f2_4 + temp_f12_4;
        temp_s0_2->mf[1][0] = temp_f2_4 - temp_f12_4;
        temp_f2_5 = vector->x * temp_f16_2 * vector->z;
        temp_f12_5 = vector->y * temp_f26_2;
        temp_s0_2->mf[0][2] = temp_f2_5 - temp_f12_5;
        temp_s0_2->mf[2][0] = temp_f2_5 + temp_f12_5;
        temp_s0_2->mf[3][3] = 1.0f;
        temp_s0_2->mf[0][3] = 0.0f;
        temp_s0_2->mf[1][3] = 0.0f;
        temp_s0_2->mf[2][3] = 0.0f;
        temp_s0_2->mf[3][0] = 0.0f;
        temp_s0_2->mf[3][1] = 0.0f;
        temp_f2_6 = vector->y * temp_f16_2 * vector->z;
        temp_s0_2->mf[3][2] = 0.0f;
        temp_f12_6 = vector->x * temp_f26_2;
        temp_s0_2->mf[1][2] = temp_f2_6 + temp_f12_6;
        temp_s0_2->mf[2][1] = temp_f2_6 - temp_f12_6;
        return;
    }
    temp_s0_2->mf[0][1] = 0.0f;
    temp_s0_2->mf[0][2] = 0.0f;
    temp_s0_2->mf[0][3] = 0.0f;
    temp_s0_2->mf[1][0] = 0.0f;
    temp_s0_2->mf[1][2] = 0.0f;
    temp_s0_2->mf[1][3] = 0.0f;
    temp_s0_2->mf[2][0] = 0.0f;
    temp_s0_2->mf[2][1] = 0.0f;
    temp_s0_2->mf[2][3] = 0.0f;
    temp_s0_2->mf[3][0] = 0.0f;
    temp_s0_2->mf[3][1] = 0.0f;
    temp_s0_2->mf[3][2] = 0.0f;
    temp_s0_2->mf[0][0] = 1.0f;
    temp_s0_2->mf[1][1] = 1.0f;
    temp_s0_2->mf[2][2] = 1.0f;
    temp_s0_2->mf[3][3] = 1.0f;
}

s8 *func_80182C90(void) {
    return &D_800969C0;
}

s32 func_80182CA0(void) {
    return &D_80096B20 - &D_800969C0;
}

void *func_80182CBC(void) {
    return D_801D1E60;
}

void *func_80182CCC(void) {
    return D_801D1E64;
}
