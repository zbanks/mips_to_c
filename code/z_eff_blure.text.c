f32 func_80086814(f32);                             /* extern */
void func_800A8C78(void *arg0);                     /* static */
void func_800A8DE8(EffectBlure *arg0, s32 arg1, f32 arg2, s16 *arg3, s16 *arg4, u8 *arg5, u8 *arg6); /* static */
void func_800A92FC(EffectBlure *arg0, GraphicsContext *arg1, s32); /* static */
void func_800A9330(EffectBlure *arg0, EffectBlure *arg1, s32 arg2, GraphicsContext *arg3); /* static */
void func_800A9804(EffectBlure *arg0, EffectBlure *arg1, s32 arg2, GraphicsContext *arg3); /* static */
void func_800AA190(EffectBlure *arg0, GraphicsContext *arg1, Gfx *); /* static */
void func_800AA460(void *arg0, ? arg1, ? arg2);     /* static */
void func_800AA498(void *arg0, void *arg1, ? arg2); /* static */
void func_800AA700(GraphicsContext *arg0, EffectBlure *arg1, u32 arg2); /* static */
void func_800AABE0(EffectBlure *arg0, GraphicsContext *arg1, Gfx *); /* static */
extern ? D_04014570;
static ? D_801AE240;                                /* unable to generate initializer */
static ? D_801AE250;                                /* unable to generate initializer */
static ? D_801AE26C;                                /* unable to generate initializer */
static ? D_801AE27C;                                /* unable to generate initializer */
static ? D_801AE28C;                                /* unable to generate initializer */
static ? D_801AE29C;                                /* unable to generate initializer */
static ? D_801AE2AC;                                /* unable to generate initializer */
static ? D_801AE2BC;                                /* unable to generate initializer */
static ? D_801AE2CC;                                /* unable to generate initializer */
static ? D_801AE2DC;                                /* unable to generate initializer */
void *D_801AE260[3] = {(void *) func_800AA460, (void *) func_800AA498, NULL};
RSPMatrix D_801D1DE0 = {
    {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};

typedef struct {
    /* 0x0000 */ char pad0[0x184];
    /* 0x0184 */ Color_RGBA8 unk184;
    /* 0x0188 */ Color_RGBA8 unk188;
    /* 0x018C */ Color_RGBA8 unk18C;
    /* 0x0190 */ Color_RGBA8 unk190;
    /* 0x0194 */ s32 unk194;                        /* inferred */
    /* 0x0198 */ s32 unk198;                        /* inferred */
    /* 0x019C */ s32 unk19C;                        /* inferred */
} EffBlureInit1;                                    /* size 0x1A0 */

void func_800A81F0(EffectBlure *this, Vec3f *p1, Vec3f *p2) {
    f32 sp174;
    f32 sp170;
    f32 sp16C;
    f32 sp168;
    f32 sp164;
    f32 sp160;
    Vec3f sp154;
    MtxF sp110;
    MtxF spD0;
    MtxF sp90;
    MtxF sp50;
    Vec3f sp44;
    Vec3f sp38;
    EffectBlureElement *temp_s0;
    f32 *temp_a0;
    f32 *temp_a1;
    f32 temp_f0;
    u8 temp_v0;

    if (this != 0) {
        temp_v0 = this->numElements;
        if ((s32) temp_v0 < 0x10) {
            temp_s0 = &this->elements[temp_v0];
            temp_s0->state = 1;
            if ((this->flags & 2) == 0) {
                temp_s0->p1.x = (s16) (s32) p1->x;
                temp_s0->p1.y = (s16) (s32) p1->y;
                temp_s0->p1.z = (s16) (s32) p1->z;
                temp_s0->p2.x = (s16) (s32) p2->x;
                temp_s0->p2.y = (s16) (s32) p2->y;
                temp_s0->p2.z = (s16) (s32) p2->z;
            } else {
                temp_a0 = &sp160;
                temp_a1 = &sp16C;
                sp16C = ((f32) temp_s0->unk-A + (f32) temp_s0->unk-10) * 0.5f;
                sp170 = ((f32) temp_s0->unk-8 + (f32) temp_s0->unk-E) * 0.5f;
                sp174 = ((f32) temp_s0->unk-6 + (f32) temp_s0->unk-C) * 0.5f;
                sp160 = (p1->x + p2->x) * 0.5f;
                sp164 = (p1->y + p2->y) * 0.5f;
                sp168 = (p1->z + p2->z) * 0.5f;
                Math_Vec3f_Diff((Vec3f *) temp_a0, (Vec3f *) temp_a1, &sp154);
                temp_f0 = Math3D_Vec3fMagnitude(&sp154);
                if (!(fabsf(temp_f0) < 0.008f)) {
                    Math_Vec3f_Scale(&sp154, 1.0f / temp_f0);
                    SkinMatrix_SetTranslate(&sp110, sp160, sp164, sp168);
                    SkinMatrix_SetRotateAroundVec(&spD0, this->addAngle, sp154.x, sp154.y, sp154.z);
                    SkinMatrix_MtxFMtxFMult(&sp110, &spD0, &sp90);
                    SkinMatrix_SetTranslate(&sp110, -sp160, -sp164, -sp168);
                    SkinMatrix_MtxFMtxFMult(&sp90, &sp110, &sp50);
                    SkinMatrix_Vec3fMtxFMultXYZ(&sp50, p1, &sp38);
                    SkinMatrix_Vec3fMtxFMultXYZ(&sp50, p2, &sp44);
                    temp_s0->p1.x = (s16) (s32) sp38.x;
                    temp_s0->p1.y = (s16) (s32) sp38.y;
                    temp_s0->p1.z = (s16) (s32) sp38.z;
                    temp_s0->p2.x = (s16) (s32) sp44.x;
                    temp_s0->p2.y = (s16) (s32) sp44.y;
                    temp_s0->p2.z = (s16) (s32) sp44.z;
                }
            }
            temp_s0->timer = 1;
            this->numElements += 1;
        }
    }
}

void func_800A8514(void *effectParams) {
    u8 temp_v0;
    void *temp_v1;

    if (effectParams != 0) {
        temp_v0 = effectParams->unk19E;
        if ((s32) temp_v0 < 0x10) {
            temp_v1 = effectParams + (temp_v0 * 0x18);
            temp_v1->unk0 = 0;
            temp_v1->unk4 = 1;
            effectParams->unk19E = (u8) (effectParams->unk19E + 1);
        }
    }
}

void EffectBlure_Initcommon(EffectBlure *params) {
    EffectBlure *temp_v1;
    s32 temp_v0;
    EffectBlure *phi_v1;
    s32 phi_v0;

    params->numElements = 0;
    phi_v1 = params;
    phi_v0 = 0;
    do {
        temp_v0 = phi_v0 + 4;
        phi_v1->elements[1].state = 2;
        phi_v1->elements[1].p1.x = 0;
        phi_v1->elements[1].p1.y = 0;
        phi_v1->elements[1].p1.z = 0;
        phi_v1->elements[1].p2.x = 0;
        phi_v1->elements[1].p2.y = 0;
        phi_v1->elements[1].p2.z = 0;
        phi_v1->elements[1].timer = 0;
        phi_v1->elements[1].flags = 0;
        phi_v1->elements[2].state = 2;
        phi_v1->elements[2].p1.x = 0;
        phi_v1->elements[2].p1.y = 0;
        phi_v1->elements[2].p1.z = 0;
        phi_v1->elements[2].p2.x = 0;
        phi_v1->elements[2].p2.y = 0;
        phi_v1->elements[2].p2.z = 0;
        phi_v1->elements[2].timer = 0;
        phi_v1->elements[2].flags = 0;
        phi_v1->elements[3].state = 2;
        phi_v1->elements[3].p1.x = 0;
        phi_v1->elements[3].p1.y = 0;
        phi_v1->elements[3].p1.z = 0;
        phi_v1->elements[3].p2.x = 0;
        phi_v1->elements[3].p2.y = 0;
        phi_v1->elements[3].p2.z = 0;
        phi_v1->elements[3].timer = 0;
        phi_v1->elements[3].flags = 0;
        temp_v1 = phi_v1 + 0x60;
        temp_v1->unk-60 = 2;
        temp_v1->unk-58 = 0;
        temp_v1->unk-56 = 0;
        temp_v1->unk-54 = 0;
        temp_v1->unk-52 = 0;
        temp_v1->unk-50 = 0;
        temp_v1->unk-4E = 0;
        temp_v1->unk-5C = 0;
        temp_v1->unk-4C = 0;
        phi_v1 = temp_v1;
        phi_v0 = temp_v0;
    } while (temp_v0 != 0x10);
}

void EffectBlure_Init1(EffectBlure *params, EffBlureInit1 *init) {
    if ((params != 0) && (init != 0)) {
        EffectBlure_Initcommon(params);
        params->p1StartColor.r = init->unk184.r;
        params->p2StartColor.r = init->unk188.r;
        params->p1EndColor.r = init->unk18C.r;
        params->p2EndColor.r = init->unk190.r;
        params->p1StartColor.g = init->unk184.g;
        params->p2StartColor.g = init->unk188.g;
        params->p1EndColor.g = init->unk18C.g;
        params->p2EndColor.g = init->unk190.g;
        params->p1StartColor.b = init->unk184.b;
        params->p2StartColor.b = init->unk188.b;
        params->p1EndColor.b = init->unk18C.b;
        params->p2EndColor.b = init->unk190.b;
        params->p1StartColor.a = init->unk184.a;
        params->p2StartColor.a = init->unk188.a;
        params->p1EndColor.a = init->unk18C.a;
        params->p2EndColor.a = init->unk190.a;
        params->elemDuration = (u8) init->unk194;
        params->unkFlag = (u8) init->unk198;
        params->flags = 0;
        params->addAngleChange = 0;
        params->addAngle = 0;
        params->drawMode = 0;
        params->altPrimColor.r = 0;
        params->altPrimColor.g = 0;
        params->altPrimColor.b = 0;
        params->altPrimColor.a = 0;
        params->altEnvColor.r = 0;
        params->altEnvColor.g = 0;
        params->altEnvColor.b = 0;
        params->altEnvColor.a = 0;
        params->mode4Param = 1.0f;
        params->calcMode = init->unk19C;
    }
}

void EffectBlure_Init2(EffectBlure *params, EffBlureInit2 *init) {
    f32 temp_f6;
    u8 temp_t8;
    f32 phi_f6;

    if ((params != 0) && (init != 0)) {
        EffectBlure_Initcommon(params);
        params->p1StartColor.r = init->p1StartColor[0];
        params->p2StartColor.r = init->p2StartColor[0];
        params->p1EndColor.r = init->p1EndColor[0];
        params->p2EndColor.r = init->p2EndColor[0];
        params->p1StartColor.g = init->p1StartColor[1];
        params->p2StartColor.g = init->p2StartColor[1];
        params->p1EndColor.g = init->p1EndColor[1];
        params->p2EndColor.g = init->p2EndColor[1];
        params->p1StartColor.b = init->p1StartColor[2];
        params->p2StartColor.b = init->p2StartColor[2];
        params->p1EndColor.b = init->p1EndColor[2];
        params->p2EndColor.b = init->p2EndColor[2];
        params->p1StartColor.a = init->p1StartColor[3];
        params->p2StartColor.a = init->p2StartColor[3];
        params->p1EndColor.a = init->p1EndColor[3];
        params->p2EndColor.a = init->p2EndColor[3];
        params->elemDuration = init->elemDuration;
        params->unkFlag = init->unkFlag;
        params->calcMode = init->calcMode;
        params->flags = init->flags;
        params->drawMode = init->drawMode;
        params->addAngle = 0;
        params->addAngleChange = init->addAngleChange;
        temp_t8 = init->mode4Param;
        temp_f6 = (f32) temp_t8;
        phi_f6 = temp_f6;
        if ((s32) temp_t8 < 0) {
            phi_f6 = temp_f6 + 4294967296.0f;
        }
        params->mode4Param = phi_f6;
        params->altPrimColor.r = (unaligned s32) init->altPrimColor.r;
        params->altEnvColor.r = (unaligned s32) init->altEnvColor.r;
    }
}

void EffectBlure_Destroy(EffectBlure *params) {

}

s32 EffectBlure_Update(EffectBlure *params) {
    EffectBlure *temp_a1_3;
    EffectBlureElement *temp_a1;
    EffectBlureElement *temp_a1_2;
    EffectBlureElement *temp_a1_4;
    EffectBlureElement *temp_a1_5;
    EffectBlureElement *temp_a2_2;
    EffectBlureElement *temp_a3;
    EffectBlureElement *temp_a3_2;
    EffectBlureElement *temp_t0;
    EffectBlureElement *temp_t0_2;
    EffectBlureElement *temp_t2;
    EffectBlureElement *temp_t2_2;
    EffectBlureElement *temp_t3;
    EffectBlureElement *temp_t4;
    EffectBlureElement *temp_t5;
    s32 temp_a2_3;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    u8 temp_a2;
    u8 temp_a2_4;
    u8 temp_a2_5;
    u8 temp_a2_6;
    u8 temp_a2_7;
    u8 temp_a2_8;
    u8 temp_t8;
    u8 temp_t9;
    EffectBlureElement *phi_a3;
    EffectBlureElement *phi_a1;
    EffectBlureElement *phi_t0;
    EffectBlureElement *phi_a2;
    EffectBlureElement *phi_t3;
    s32 phi_v1;
    s32 phi_a2_2;
    EffectBlure *phi_a1_2;
    s32 phi_v1_2;
    EffectBlureElement *phi_a3_2;
    EffectBlureElement *phi_a1_3;
    EffectBlureElement *phi_t0_2;
    s32 phi_v0;
    s32 phi_a2_3;
    EffectBlure *phi_a1_4;
    s32 phi_v1_3;

    if (params == 0) {
        return 0;
    }
    temp_a2 = params->numElements;
    phi_a2_2 = (s32) temp_a2;
    if (temp_a2 == 0) {
        return 0;
    }
loop_4:
    temp_v1 = params->elements[0].state;
    temp_t2 = &params->elements[1];
    phi_a2_3 = phi_a2_2;
    if (temp_v1 == 0) {
        temp_t4 = &params->elements[2];
        temp_t5 = &params->elements[3];
        params->elements[0].state = temp_t2->state;
        temp_a1 = &params->elements[3];
        params->elements[0].timer = temp_t2->timer;
        params->unk8 = (s32) temp_t2->unk8;
        params->unkC = (s32) temp_t2->unkC;
        params->unk10 = (s32) temp_t2->unk10;
        params->unk14 = (s32) temp_t2->unk14;
        temp_t2->state = temp_t4->state;
        temp_t2->timer = temp_t4->timer;
        temp_t2->unk8 = (s32) temp_t4->unk8;
        temp_t2->unkC = (s32) temp_t4->unkC;
        temp_t2->unk10 = (s32) temp_t4->unk10;
        temp_t2->unk14 = (s32) temp_t4->unk14;
        temp_t4->state = temp_t5->state;
        temp_t4->timer = temp_t5->timer;
        temp_t4->unk8 = (s32) temp_t5->unk8;
        temp_t4->unkC = (s32) temp_t5->unkC;
        temp_t4->unk10 = (s32) temp_t5->unk10;
        temp_t4->unk14 = (s32) temp_t5->unk14;
        phi_a3 = temp_a1 + 0x18;
        phi_a1 = temp_a1;
        phi_t0 = temp_a1 + 0x30;
        phi_a2 = temp_a1 + 0x48;
        phi_t3 = temp_a1 + 0x60;
        phi_v1 = 3;
        do {
            temp_v1_2 = phi_v1 + 4;
            temp_a1_2 = phi_a1 + 0x60;
            temp_a1_2->unk-60 = (s32) phi_a3->state;
            temp_a3 = phi_a3 + 0x60;
            temp_t0 = phi_t0 + 0x60;
            temp_a1_2->unk-5C = (s32) phi_a3->timer;
            temp_a2_2 = phi_a2 + 0x60;
            temp_t3 = phi_t3 + 0x60;
            temp_a1_2->unk-58 = (s32) temp_a3->unk-58;
            temp_a1_2->unk-54 = (s32) temp_a3->unk-54;
            temp_a1_2->unk-50 = (s32) temp_a3->unk-50;
            temp_a1_2->unk-4C = (s32) temp_a3->unk-4C;
            temp_a3->unk-60 = (s32) temp_t0->unk-60;
            temp_a3->unk-5C = (s32) temp_t0->unk-5C;
            temp_a3->unk-58 = (s32) temp_t0->unk-58;
            temp_a3->unk-54 = (s32) temp_t0->unk-54;
            temp_a3->unk-50 = (s32) temp_t0->unk-50;
            temp_a3->unk-4C = (s32) temp_t0->unk-4C;
            temp_t0->unk-60 = (s32) temp_a2_2->unk-60;
            temp_t0->unk-5C = (s32) temp_a2_2->unk-5C;
            temp_t0->unk-58 = (s32) temp_a2_2->unk-58;
            temp_t0->unk-54 = (s32) temp_a2_2->unk-54;
            temp_t0->unk-50 = (s32) temp_a2_2->unk-50;
            temp_t0->unk-4C = (s32) temp_a2_2->unk-4C;
            temp_a2_2->unk-60 = (s32) temp_t3->unk-60;
            temp_a2_2->unk-5C = (s32) temp_t3->unk-5C;
            temp_a2_2->unk-58 = (s32) temp_t3->unk-58;
            temp_a2_2->unk-54 = (s32) temp_t3->unk-54;
            temp_a2_2->unk-50 = (s32) temp_t3->unk-50;
            temp_a2_2->unk-4C = (s32) temp_t3->unk-4C;
            phi_a3 = temp_a3;
            phi_a1 = temp_a1_2;
            phi_t0 = temp_t0;
            phi_a2 = temp_a2_2;
            phi_t3 = temp_t3;
            phi_v1 = temp_v1_2;
        } while (temp_v1_2 != 0xF);
        temp_a1_2->state = 2;
        temp_a1_2->p1.x = 0;
        temp_a1_2->p1.y = 0;
        temp_a1_2->p1.z = 0;
        temp_a1_2->p2.x = 0;
        temp_a1_2->p2.y = 0;
        temp_a1_2->p2.z = 0;
        temp_a1_2->flags = 0;
        temp_a1_2->timer = 0;
        temp_t9 = params->numElements - 1;
        temp_a2_3 = temp_t9 & 0xFF;
        params->numElements = temp_t9;
        phi_a2_2 = temp_a2_3;
        if (temp_a2_3 <= 0) {
            params->numElements = 0;
            return 0;
        }
        goto loop_4;
    }
    if (temp_v1 == 2) {
        return 0;
    }
    phi_v1_2 = 0;
    phi_v1_3 = 0;
    if (phi_a2_2 > 0) {
        phi_a1_2 = params;
        do {
            temp_v1_3 = phi_v1_2 + 1;
            temp_a1_3 = phi_a1_2 + 0x18;
            temp_a1_3->unk-14 = (s32) (phi_a1_2->elements[0].timer + 1);
            temp_a2_4 = params->numElements;
            phi_a1_2 = temp_a1_3;
            phi_v1_2 = temp_v1_3;
            phi_a2_3 = (s32) temp_a2_4;
        } while (temp_v1_3 < (s32) temp_a2_4);
    }
    temp_a1_4 = &params->elements[1];
    temp_t2_2 = &params->elements[1];
    phi_a3_2 = temp_a1_4 + 0x18;
    phi_a1_3 = temp_a1_4;
    if ((s32) params->elemDuration < params->elements[0].timer) {
        temp_a2_5 = params->elemDuration;
        params->elements[0].state = temp_t2_2->state;
        params->elements[0].timer = temp_t2_2->timer;
        params->unk8 = (s32) temp_t2_2->unk8;
        params->unkC = (s32) temp_t2_2->unkC;
        params->unk10 = (s32) temp_t2_2->unk10;
        params->unk14 = (s32) temp_t2_2->unk14;
        phi_t0_2 = temp_a1_4 + 0x30;
        phi_v0 = 0x18;
        if (params->elements[0].timer >= (s32) temp_a2_5) {
            params->elements[0].timer = (s32) temp_a2_5;
        }
        do {
            temp_v0 = phi_v0 + 0x30;
            phi_a1_3->state = phi_a3_2->state;
            phi_a1_3->timer = phi_a3_2->timer;
            phi_a1_3->unk8 = (s32) phi_a3_2->unk8;
            phi_a1_3->unkC = (s32) phi_a3_2->unkC;
            phi_a1_3->unk10 = (s32) phi_a3_2->unk10;
            phi_a1_3->unk14 = (s32) phi_a3_2->unk14;
            temp_a2_6 = params->elemDuration;
            phi_v0 = temp_v0;
            if (phi_a1_3->timer >= (s32) temp_a2_6) {
                phi_a1_3->timer = (s32) temp_a2_6;
            }
            temp_a3_2 = phi_a3_2 + 0x30;
            temp_t0_2 = phi_t0_2 + 0x30;
            temp_a3_2->unk-30 = (s32) phi_t0_2->state;
            temp_a3_2->unk-2C = (s32) temp_t0_2->unk-2C;
            temp_a3_2->unk-28 = (s32) temp_t0_2->unk-28;
            temp_a3_2->unk-24 = (s32) temp_t0_2->unk-24;
            temp_a3_2->unk-20 = (s32) temp_t0_2->unk-20;
            temp_a3_2->unk-1C = (s32) temp_t0_2->unk-1C;
            temp_a2_7 = params->elemDuration;
            phi_a3_2 = temp_a3_2;
            phi_t0_2 = temp_t0_2;
            if (phi_a1_3->unk1C >= (s32) temp_a2_7) {
                phi_a1_3->unk1C = (s32) temp_a2_7;
            }
            temp_a1_5 = phi_a1_3 + 0x30;
            phi_a1_3 = temp_a1_5;
        } while (temp_v0 != 0x168);
        temp_a1_5->state = 2;
        temp_a1_5->p1.x = 0;
        temp_a1_5->p1.y = 0;
        temp_a1_5->p1.z = 0;
        temp_a1_5->p2.x = 0;
        temp_a1_5->p2.y = 0;
        temp_a1_5->p2.z = 0;
        temp_a1_5->flags = 0;
        temp_a1_5->timer = 0;
        temp_t8 = params->numElements - 1;
        params->numElements = temp_t8;
        if ((temp_t8 & 0xFF) <= 0) {
            params->numElements = 0;
            return 0;
        }
        return 0;
    }
    if (phi_a2_3 > 0) {
        phi_a1_4 = params;
        do {
            temp_a2_8 = params->elemDuration;
            if (phi_a1_4->elements[0].timer >= (s32) temp_a2_8) {
                phi_a1_4->elements[0].timer = (s32) temp_a2_8;
            }
            temp_v1_4 = phi_v1_3 + 1;
            phi_a1_4 += 0x18;
            phi_v1_3 = temp_v1_4;
        } while (temp_v1_4 < (s32) params->numElements);
    }
    params->addAngle += params->addAngleChange;
    return 0;
}

void func_800A8C78(void *arg0) {
    Vec3f sp64;
    Vec3f sp58;
    Vec3f sp4C;
    Vec3f sp40;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    void *sp28;
    Vec3s *sp24;
    Vec3s *sp20;
    Vec3s *temp_a1;
    Vec3s *temp_a1_2;
    u16 temp_t0;
    u16 temp_t0_2;
    u16 temp_t4;
    u16 temp_t7;
    void *temp_v0;
    void *temp_v0_2;
    u16 phi_t1;

    if ((arg0->unk-18 == 0) || (temp_a1 = arg0 + 8, temp_v0 = arg0 - 0x18, (arg0->unk18 == 0))) {
        temp_t0_2 = arg0->unk14 & 0xFFFC;
        arg0->unk14 = temp_t0_2;
        phi_t1 = temp_t0_2 | 2;
        goto block_12;
    }
    sp28 = temp_v0;
    sp24 = temp_a1;
    Math_Vec3s_DiffToVec3f(&sp64, temp_a1, temp_v0 + 8);
    temp_a1_2 = arg0 + 0xE;
    sp20 = temp_a1_2;
    Math_Vec3s_DiffToVec3f(&sp58, temp_a1_2, temp_v0 + 0xE);
    temp_v0_2 = arg0 + 0x18;
    sp28 = temp_v0_2;
    Math_Vec3s_DiffToVec3f(&sp4C, temp_v0_2 + 8, sp24);
    Math_Vec3s_DiffToVec3f(&sp40, temp_v0_2 + 0xE, sp20);
    if ((Math3D_AngleBetweenVectors(&sp64, &sp4C, &sp34) != 0) || (Math3D_AngleBetweenVectors(&sp58, &sp40, &sp30) != 0) || (Math3D_AngleBetweenVectors(&sp4C, &sp40, &sp2C) != 0)) {
        temp_t4 = arg0->unk14 & 0xFFFC;
        arg0->unk14 = temp_t4;
        arg0->unk14 = temp_t4;
        return;
    }
    if ((sp34 <= -0.5f) || (sp30 <= -0.5f) || (sp2C <= 0.7071f)) {
        temp_t7 = arg0->unk14 & 0xFFFC;
        arg0->unk14 = temp_t7;
        arg0->unk14 = temp_t7;
        return;
    }
    temp_t0 = arg0->unk14 & 0xFFFC;
    arg0->unk14 = temp_t0;
    phi_t1 = temp_t0 | 1;
block_12:
    arg0->unk14 = phi_t1;
}

void func_800A8DE8(EffectBlure *arg0, s32 arg1, f32 arg2, s16 *arg3, s16 *arg4, u8 *arg5, u8 *arg6) {
    s16 sp34;
    s16 sp32;
    s16 sp30;
    f32 temp_f0;
    f32 temp_f20;
    s16 temp_t3;
    u32 temp_t6;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    s16 phi_t1;
    f32 phi_f20;
    u8 phi_v0;

    temp_t6 = arg0->calcMode;
    phi_f20 = arg2;
    switch (temp_t6) {
    case 1:
        temp_s0 = arg0 + (arg1 * 0x18);
        arg3->unk0 = func_800B09D0(temp_s0->unk8, temp_s0->unkE, arg2);
        arg3->unk2 = func_800B09D0(temp_s0->unkA, temp_s0->unk10, arg2);
        arg3->unk4 = func_800B09D0(temp_s0->unkC, temp_s0->unk12, arg2);
        arg4->unk0 = temp_s0->unkE;
        arg4->unk2 = (s16) temp_s0->unk10;
        phi_t1 = temp_s0->unk12;
block_7:
        arg4->unk4 = phi_t1;
        break;
    case 2:
        temp_s0_2 = arg0 + (arg1 * 0x18);
        arg3->unk0 = temp_s0_2->unk8;
        arg3->unk2 = (s16) temp_s0_2->unkA;
        arg3->unk4 = (s16) temp_s0_2->unkC;
        arg4->unk0 = func_800B09D0(temp_s0_2->unkE, temp_s0_2->unk8, arg2);
        arg4->unk2 = func_800B09D0(temp_s0_2->unk10, temp_s0_2->unkA, arg2);
        arg4->unk4 = func_800B09D0(temp_s0_2->unk12, temp_s0_2->unkC, arg2);
        break;
    case 3:
        temp_f20 = arg2 * 0.5f;
        temp_s0_3 = arg0 + (arg1 * 0x18);
        arg3->unk0 = func_800B09D0(temp_s0_3->unk8, temp_s0_3->unkE, temp_f20);
        arg3->unk2 = func_800B09D0(temp_s0_3->unkA, temp_s0_3->unk10, temp_f20);
        arg3->unk4 = func_800B09D0(temp_s0_3->unkC, temp_s0_3->unk12, temp_f20);
        arg4->unk0 = func_800B09D0(temp_s0_3->unkE, temp_s0_3->unk8, temp_f20);
        arg4->unk2 = func_800B09D0(temp_s0_3->unk10, temp_s0_3->unkA, temp_f20);
        arg4->unk4 = func_800B09D0(temp_s0_3->unk12, temp_s0_3->unkC, temp_f20);
        phi_f20 = 2.0f * temp_f20;
        break;
    case 4:
        temp_s0_4 = arg0 + (arg1 * 0x18);
        temp_t3 = temp_s0_4->unk8 - temp_s0_4->unkE;
        sp30 = temp_t3;
        sp32 = temp_s0_4->unkA - temp_s0_4->unk10;
        sp34 = temp_s0_4->unkC - temp_s0_4->unk12;
        temp_f0 = arg0->mode4Param - 1.0f;
        arg3->unk0 = (s16) (s32) (((f32) sp30 * 0.5f * temp_f0 * arg2) + (f32) temp_s0_4->unk8);
        arg3->unk2 = (s16) (s32) (((f32) sp32 * 0.5f * temp_f0 * arg2) + (f32) temp_s0_4->unkA);
        arg3->unk4 = (s16) (s32) (((f32) sp34 * 0.5f * temp_f0 * arg2) + (f32) temp_s0_4->unkC);
        arg4->unk0 = (s16) (s32) ((f32) temp_s0_4->unkE - ((f32) temp_t3 * 0.5f * temp_f0 * arg2));
        arg4->unk2 = (s16) (s32) ((f32) temp_s0_4->unk10 - ((f32) sp32 * 0.5f * temp_f0 * arg2));
        arg4->unk4 = (s16) (s32) ((f32) temp_s0_4->unk12 - ((f32) sp34 * 0.5f * temp_f0 * arg2));
        break;
    default:
        temp_s0_5 = arg0 + (arg1 * 0x18);
        arg3->unk0 = temp_s0_5->unk8;
        arg3->unk2 = (s16) temp_s0_5->unkA;
        arg3->unk4 = (s16) temp_s0_5->unkC;
        arg4->unk0 = temp_s0_5->unkE;
        arg4->unk2 = (s16) temp_s0_5->unk10;
        phi_t1 = temp_s0_5->unk12;
        goto block_7;
    }
    if ((arg0->flags & 0x10) != 0) {
        arg5->unk3 = 0xFFU;
        arg5->unk2 = 0xFFU;
        arg5->unk1 = 0xFFU;
        arg5->unk0 = 0xFF;
        arg6->unk0 = 0xFF;
        arg6->unk1 = 0xFFU;
        arg6->unk2 = 0xFFU;
        phi_v0 = 0xFFU;
    } else {
        arg5->unk0 = func_800B0A24(arg0->p1StartColor.r, arg0->p1EndColor.r, phi_f20);
        arg5->unk1 = func_800B0A24(arg0->p1StartColor.g, arg0->p1EndColor.g, phi_f20);
        arg5->unk2 = func_800B0A24(arg0->p1StartColor.b, arg0->p1EndColor.b, phi_f20);
        arg5->unk3 = func_800B0A24(arg0->p1StartColor.a, arg0->p1EndColor.a, phi_f20);
        arg6->unk0 = func_800B0A24(arg0->p2StartColor.r, arg0->p2EndColor.r, phi_f20);
        arg6->unk1 = func_800B0A24(arg0->p2StartColor.g, arg0->p2EndColor.g, phi_f20);
        arg6->unk2 = func_800B0A24(arg0->p2StartColor.b, arg0->p2EndColor.b, phi_f20);
        phi_v0 = func_800B0A24(arg0->p2StartColor.a, arg0->p2EndColor.a, phi_f20);
    }
    arg6->unk3 = phi_v0;
}

void func_800A92FC(EffectBlure *arg0, GraphicsContext *arg1) {
    arg1->polyXlu.p = Gfx_CallSetupDL(arg1->polyXlu.p, 0x26U);
}

void func_800A9330(EffectBlure *arg0, EffectBlure *arg1, s32 arg2, GraphicsContext *arg3) {
    s16 sp84;
    s16 sp7C;
    u8 sp74;
    u8 sp70;
    Vec3f sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    Vec3f sp4C;
    f32 *temp_a0;
    f32 *temp_a0_2;
    f32 *temp_a0_3;
    f32 *temp_a0_4;
    f32 temp_f16;
    u8 temp_t8;
    void *temp_s0;
    void *temp_v1;
    void *temp_v1_2;
    f32 phi_f16;

    Math_Vec3s_ToVec3f(&sp64, arg0 + 0xE);
    temp_s0 = arg3->polyOpa.d - 0x40;
    arg3->polyOpa.d = temp_s0;
    if (temp_s0 != 0) {
        temp_s0->texture.cmd = (unaligned s32) D_801AE240.unk0;
        temp_s0->tri.tri.flag = (unaligned s32) D_801AE240.unk4;
        temp_s0->unk8 = (unaligned s32) D_801AE240.unk8;
        temp_s0->unkC = (unaligned s32) D_801AE240.unkC;
        temp_s0->unk10 = (unaligned s32) D_801AE240.unk0;
        temp_s0->unk14 = (unaligned s32) D_801AE240.unk4;
        temp_s0->unk18 = (unaligned s32) D_801AE240.unk8;
        temp_s0->unk1C = (unaligned s32) D_801AE240.unkC;
        temp_s0->unk20 = (unaligned s32) D_801AE240.unk0;
        temp_s0->unk24 = (unaligned s32) D_801AE240.unk4;
        temp_s0->unk28 = (unaligned s32) D_801AE240.unk8;
        temp_s0->unk2C = (unaligned s32) D_801AE240.unkC;
        temp_s0->unk30 = (unaligned s32) D_801AE240.unk0;
        temp_s0->unk34 = (unaligned s32) D_801AE240.unk4;
        temp_s0->unk38 = (unaligned s32) D_801AE240.unk8;
        temp_s0->unk3C = (unaligned s32) D_801AE240.unkC;
        func_800A8DE8(arg0, arg2, (f32) arg1->elements[0].timer / (f32) arg0->elemDuration, &sp84, &sp7C, &sp74, &sp70);
        temp_a0 = &sp58;
        sp58 = (f32) sp7C;
        sp5C = (f32) sp7E;
        sp60 = (f32) sp80;
        Math_Vec3f_Diff((Vec3f *) temp_a0, &sp64, &sp4C);
        Math_Vec3f_Scale(&sp4C, 10.0f);
        temp_a0_2 = &sp58;
        temp_s0->unk0 = (s16) (s32) sp4C.x;
        temp_s0->unk2 = (s16) (s32) sp4C.y;
        temp_s0->texture.s = (u16) (s32) sp4C.z;
        temp_s0->unkC = sp70;
        temp_s0->unkD = sp71;
        temp_s0->unkE = sp72;
        temp_s0->unkF = sp73;
        sp58 = (f32) sp84;
        sp5C = (f32) sp86;
        sp60 = (f32) sp88;
        Math_Vec3f_Diff((Vec3f *) temp_a0_2, &sp64, &sp4C);
        Math_Vec3f_Scale(&sp4C, 10.0f);
        temp_s0->unk10 = (s16) (s32) sp4C.x;
        temp_s0->unk12 = (s16) (s32) sp4C.y;
        temp_s0->unk14 = (s16) (s32) sp4C.z;
        temp_s0->unk1C = sp74;
        temp_s0->unk1D = sp75;
        temp_s0->unk1E = sp76;
        temp_s0->unk1F = sp77;
        temp_t8 = arg0->elemDuration;
        temp_f16 = (f32) temp_t8;
        phi_f16 = temp_f16;
        if ((s32) temp_t8 < 0) {
            phi_f16 = temp_f16 + 4294967296.0f;
        }
        func_800A8DE8(arg0, arg2 + 1, (f32) arg1->elements[1].timer / phi_f16, &sp84, &sp7C, &sp74, &sp70);
        temp_a0_3 = &sp58;
        sp58 = (f32) sp84;
        sp5C = (f32) sp86;
        sp60 = (f32) sp88;
        Math_Vec3f_Diff((Vec3f *) temp_a0_3, &sp64, &sp4C);
        Math_Vec3f_Scale(&sp4C, 10.0f);
        temp_a0_4 = &sp58;
        temp_s0->unk20 = (s16) (s32) sp4C.x;
        temp_s0->unk22 = (s16) (s32) sp4C.y;
        temp_s0->unk24 = (s16) (s32) sp4C.z;
        temp_s0->unk2C = sp74;
        temp_s0->unk2D = sp75;
        temp_s0->unk2E = sp76;
        temp_s0->unk2F = sp77;
        sp58 = (f32) sp7C;
        sp5C = (f32) sp7E;
        sp60 = (f32) sp80;
        Math_Vec3f_Diff((Vec3f *) temp_a0_4, &sp64, &sp4C);
        Math_Vec3f_Scale(&sp4C, 10.0f);
        temp_s0->unk30 = (s16) (s32) sp4C.x;
        temp_s0->unk32 = (s16) (s32) sp4C.y;
        temp_s0->unk34 = (s16) (s32) sp4C.z;
        temp_s0->unk3C = sp70;
        temp_s0->unk3D = sp71;
        temp_s0->unk3E = sp72;
        temp_s0->unk3F = sp73;
        temp_v1 = arg3->polyXlu.p;
        arg3->polyXlu.p = temp_v1 + 8;
        temp_v1->words.w1 = temp_s0;
        temp_v1->words.w0 = 0x1004008;
        temp_v1_2 = arg3->polyXlu.p;
        arg3->polyXlu.p = temp_v1_2 + 8;
        temp_v1_2->words.w1 = 0x406;
        temp_v1_2->words.w0 = 0x6000204;
    }
}

void func_800A9804(EffectBlure *arg0, EffectBlure *arg1, s32 arg2, GraphicsContext *arg3) {
    s16 sp1E4;
    s16 sp1DC;
    u8 sp1D4;
    u8 sp1D0;
    Vec3f sp1C4;
    Vec3f sp1B8;
    Vec3f sp1AC;
    Vec3f sp1A0;
    u8 sp19C;
    u8 sp198;
    u8 sp194;
    u8 sp190;
    Vec3f sp184;
    Vec3f sp178;
    Vec3f sp16C;
    Vec3f sp160;
    Vec3f sp150;
    Vec3f sp144;
    Color_RGBA8 sp140;
    Color_RGBA8 sp13C;
    Vec3f sp130;
    Vec3f sp11C;
    Vec3f sp110;
    Vec3f sp104;
    Vec3f spF8;
    s32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 *temp_a0;
    f32 *temp_a0_2;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    s32 temp_s3;
    u8 temp_t3;
    u8 temp_t7;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    f32 phi_f6;
    f32 phi_f4;
    s32 phi_s4;
    s32 phi_s3;
    void *phi_s1;
    void *phi_s2;

    Math_Vec3s_ToVec3f(&sp130, arg0 + 0xE);
    func_800A8DE8(arg0, arg2, (f32) arg1->elements[0].timer / (f32) arg0->elemDuration, &sp1E4, &sp1DC, &sp19C, &sp198);
    Math_Vec3s_ToVec3f(&sp1C4, (Vec3s *) &sp1E4);
    Math_Vec3s_ToVec3f(&sp1B8, (Vec3s *) &sp1DC);
    func_800A8DE8(arg0, arg2 + 1, (f32) arg1->elements[1].timer / (f32) arg0->elemDuration, &sp1E4, &sp1DC, &sp194, &sp190);
    Math_Vec3s_ToVec3f(&sp184, (Vec3s *) &sp1E4);
    Math_Vec3s_ToVec3f(&sp178, (Vec3s *) &sp1DC);
    if ((arg1->elements[0].flags & 3) == 2) {
        Math_Vec3f_Diff(&sp184, &sp1C4, &sp1AC);
        Math_Vec3f_Diff(&sp178, &sp1B8, &sp1A0);
    } else {
        temp_t7 = arg0->elemDuration;
        temp_f6 = (f32) temp_t7;
        phi_f6 = temp_f6;
        if ((s32) temp_t7 < 0) {
            phi_f6 = temp_f6 + 4294967296.0f;
        }
        func_800A8DE8(arg0, arg2 - 1, (f32) arg1->unk-14 / phi_f6, &sp1E4, &sp1DC, &sp1D4, &sp1D0);
        Math_Vec3s_ToVec3f(&sp11C, (Vec3s *) &sp1E4);
        Math_Vec3s_ToVec3f(&sp110, (Vec3s *) &sp1DC);
        Math_Vec3f_Diff(&sp184, &sp11C, &sp1AC);
        Math_Vec3f_Diff(&sp178, &sp110, &sp1A0);
    }
    Math_Vec3f_Scale(&sp1AC, 0.5f);
    Math_Vec3f_Scale(&sp1A0, 0.5f);
    if ((arg1->elements[1].flags & 3) == 2) {
        Math_Vec3f_Diff(&sp184, &sp1C4, &sp16C);
        Math_Vec3f_Diff(&sp178, &sp1B8, &sp160);
    } else {
        temp_t3 = arg0->elemDuration;
        temp_f4 = (f32) temp_t3;
        phi_f4 = temp_f4;
        if ((s32) temp_t3 < 0) {
            phi_f4 = temp_f4 + 4294967296.0f;
        }
        func_800A8DE8(arg0, arg2 + 2, (f32) arg1->elements[2].timer / phi_f4, &sp1E4, &sp1DC, &sp1D4, &sp1D0);
        Math_Vec3s_ToVec3f(&sp104, (Vec3s *) &sp1E4);
        Math_Vec3s_ToVec3f(&spF8, (Vec3s *) &sp1DC);
        Math_Vec3f_Diff(&sp104, &sp1C4, &sp16C);
        Math_Vec3f_Diff(&spF8, &sp1B8, &sp160);
    }
    Math_Vec3f_Scale(&sp16C, 0.5f);
    Math_Vec3f_Scale(&sp160, 0.5f);
    temp_s0 = arg3->polyOpa.d - 0x100;
    arg3->polyOpa.d = temp_s0;
    if (temp_s0 != 0) {
        Math_Vec3f_Diff(&sp1C4, &sp130, &sp150);
        Math_Vec3f_Scale(&sp150, 10.0f);
        Math_Vec3f_Diff(&sp1B8, &sp130, &sp144);
        Math_Vec3f_Scale(&sp144, 10.0f);
        Color_RGBA8_Copy(&sp140, (Color_RGBA8 *) &sp19C);
        Color_RGBA8_Copy(&sp13C, (Color_RGBA8 *) &sp198);
        temp_s0->texture.cmd = (unaligned s32) D_801AE250.unk0;
        temp_s0->tri.tri.flag = (unaligned s32) D_801AE250.unk4;
        temp_s0->unk8 = (unaligned s32) D_801AE250.unk8;
        temp_s0->unkC = (unaligned s32) D_801AE250.unkC;
        temp_s0->unk10 = (unaligned s32) D_801AE250.unk0;
        temp_s0->unk14 = (unaligned s32) D_801AE250.unk4;
        temp_s0->unk18 = (unaligned s32) D_801AE250.unk8;
        temp_s0->unk1C = (unaligned s32) D_801AE250.unkC;
        temp_s0->unk0 = (s16) (s32) func_80086814(sp150.x);
        temp_s0->unk2 = (s16) (s32) func_80086814(sp150.y);
        temp_s0->texture.s = (u16) (s32) func_80086814(sp150.z);
        temp_s0->unkC = sp140.r;
        temp_s0->unkD = sp140.g;
        temp_s0->unkE = sp140.b;
        temp_s0->unkF = sp140.a;
        temp_s0->unk10 = (s16) (s32) func_80086814(sp144.x);
        temp_s0->unk12 = (s16) (s32) func_80086814(sp144.y);
        temp_s0->unk14 = (s16) (s32) func_80086814(sp144.z);
        temp_s0->unk1C = sp13C.r;
        temp_s0->unk1D = sp13C.g;
        temp_s0->unk1E = sp13C.b;
        temp_s0->unk1F = sp13C.a;
        phi_s4 = 3;
        phi_s3 = 1;
        phi_s1 = temp_s0 + 0x20;
        phi_s2 = temp_s0 + 0x30;
        do {
            spF0 = phi_s4;
            temp_f28 = (f32) phi_s3 / 7.0f;
            temp_a0 = &spE4;
            temp_f0 = temp_f28 * temp_f28;
            temp_f2 = temp_f0 * temp_f28;
            temp_f14 = temp_f0 * 3.0f;
            temp_f12 = 2.0f * temp_f2;
            temp_f26 = temp_f14 - temp_f12;
            temp_f24 = (temp_f12 - temp_f14) + 1.0f;
            temp_f22 = (temp_f2 - (2.0f * temp_f0)) + temp_f28;
            temp_f20 = temp_f2 - temp_f0;
            spE4 = (temp_f24 * sp1C4.x) + (temp_f26 * sp184.x) + (temp_f22 * sp1AC.x) + (temp_f20 * sp16C.x);
            spE8 = (temp_f24 * sp1C4.y) + (temp_f26 * sp184.y) + (temp_f22 * sp1AC.y) + (temp_f20 * sp16C.y);
            spEC = (temp_f24 * sp1C4.z) + (temp_f26 * sp184.z) + (temp_f22 * sp1AC.z) + (temp_f20 * sp16C.z);
            Math_Vec3f_Diff((Vec3f *) temp_a0, &sp130, &sp150);
            Math_Vec3f_Scale(&sp150, 10.0f);
            temp_a0_2 = &spE4;
            spE4 = (temp_f24 * sp1B8.x) + (temp_f26 * sp178.x) + (temp_f22 * sp1A0.x) + (temp_f20 * sp160.x);
            spE8 = (temp_f24 * sp1B8.y) + (temp_f26 * sp178.y) + (temp_f22 * sp1A0.y) + (temp_f20 * sp160.y);
            spEC = (temp_f24 * sp1B8.z) + (temp_f26 * sp178.z) + (temp_f22 * sp1A0.z) + (temp_f20 * sp160.z);
            Math_Vec3f_Diff((Vec3f *) temp_a0_2, &sp130, &sp144);
            Math_Vec3f_Scale(&sp144, 10.0f);
            phi_s1->unk0 = (unaligned s32) D_801AE250.unk0;
            phi_s1->unk4 = (unaligned s32) D_801AE250.unk4;
            phi_s1->unk8 = (unaligned s32) D_801AE250.unk8;
            phi_s1->unkC = (unaligned s32) D_801AE250.unkC;
            phi_s2->unk0 = (unaligned s32) D_801AE250.unk0;
            phi_s2->unk4 = (unaligned s32) D_801AE250.unk4;
            phi_s2->unk8 = (unaligned s32) D_801AE250.unk8;
            phi_s2->unkC = (unaligned s32) D_801AE250.unkC;
            phi_s1->unk0 = (s16) (s32) func_80086814(sp150.x);
            phi_s1->unk2 = (s16) (s32) func_80086814(sp150.y);
            phi_s1->unk4 = (s16) (s32) func_80086814(sp150.z);
            phi_s1->unkC = func_800B0A24(sp19C, sp194, temp_f28);
            phi_s1->unkD = func_800B0A24(sp19D, sp195, temp_f28);
            phi_s1->unkE = func_800B0A24(sp19E, sp196, temp_f28);
            phi_s1->unkF = func_800B0A24(sp19F, sp197, temp_f28);
            phi_s2->unk0 = (s16) (s32) func_80086814(sp144.x);
            phi_s2->unk2 = (s16) (s32) func_80086814(sp144.y);
            phi_s2->unk4 = (s16) (s32) func_80086814(sp144.z);
            phi_s2->unkC = func_800B0A24(sp198, sp190, temp_f28);
            phi_s2->unkD = func_800B0A24(sp199, sp191, temp_f28);
            phi_s2->unkE = func_800B0A24(sp19A, sp192, temp_f28);
            temp_s3 = phi_s3 + 1;
            (temp_s0 + (spF0 * 0x10))->unkF = func_800B0A24(sp19B, sp193, temp_f28);
            phi_s4 += 2;
            phi_s3 = temp_s3;
            phi_s1 += 0x20;
            phi_s2 += 0x20;
        } while (temp_s3 != 8);
        temp_v0 = arg3->polyXlu.p;
        arg3->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w1 = temp_s0;
        temp_v0->words.w0 = 0x1010020;
        temp_v0_2 = arg3->polyXlu.p;
        arg3->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = 0x604;
        temp_v0_2->words.w0 = 0x6000206;
        temp_v0_3 = arg3->polyXlu.p;
        arg3->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0x604060A;
        temp_v0_3->words.w1 = 0x40A08;
        temp_v0_4 = arg3->polyXlu.p;
        arg3->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0x6080A0E;
        temp_v0_4->words.w1 = 0x80E0C;
        temp_v0_5 = arg3->polyXlu.p;
        arg3->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0x60C0E12;
        temp_v0_5->words.w1 = 0xC1210;
        temp_v0_6 = arg3->polyXlu.p;
        arg3->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0x6101216;
        temp_v0_6->words.w1 = 0x101614;
        temp_v0_7 = arg3->polyXlu.p;
        arg3->polyXlu.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0x614161A;
        temp_v0_7->words.w1 = 0x141A18;
        temp_v0_8 = arg3->polyXlu.p;
        arg3->polyXlu.p = temp_v0_8 + 8;
        temp_v0_8->words.w0 = 0x6181A1E;
        temp_v0_8->words.w1 = 0x181E1C;
    }
}

void func_800AA190(EffectBlure *arg0, GraphicsContext *arg1) {
    MtxF spCC;
    MtxF sp8C;
    MtxF sp4C;
    EffectBlure *temp_s0_3;
    Gfx *temp_a0;
    Mtx *temp_v0_3;
    s32 temp_v0_4;
    u16 temp_t8;
    u8 temp_v1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;
    void *temp_v0_2;
    void *phi_s0;
    EffectBlure *phi_s0_2;
    s32 phi_s1;
    void *phi_v0;

    temp_v1 = arg0->numElements;
    if ((s32) temp_v1 >= 2) {
        temp_s0 = arg0 + 0x18;
        temp_t8 = arg0->elements[0].flags & 0xFFFC;
        arg0->elements[0].flags = temp_t8;
        arg0->elements[0].flags = temp_t8 | 2;
        phi_s0 = temp_s0;
        if ((u32) temp_s0 < (u32) ((arg0 + (temp_v1 * 0x18)) - 0x18)) {
            do {
                func_800A8C78(phi_s0);
                temp_s0_2 = phi_s0 + 0x18;
                phi_s0 = temp_s0_2;
            } while ((u32) temp_s0_2 < (u32) ((arg0 + (arg0->numElements * 0x18)) - 0x18));
        }
        temp_v0 = arg0 + (arg0->numElements * 0x18);
        temp_v0->unk-4 = (u16) (temp_v0->unk-4 & ~3);
        temp_v0_2 = arg0 + (arg0->numElements * 0x18);
        temp_v0_2->unk-4 = (u16) (temp_v0_2->unk-4 | 2);
        func_800A92FC(arg0, arg1, 0x18);
        SkinMatrix_SetTranslate(&spCC, (f32) arg0->elements[0].p2.x, (f32) arg0->elements[0].p2.y, (f32) arg0->elements[0].p2.z);
        SkinMatrix_SetScale(&sp8C, 0.1f, 0.1f, 0.1f);
        SkinMatrix_MtxFMtxFMult(&spCC, &sp8C, &sp4C);
        temp_v0_3 = SkinMatrix_MtxFToNewMtx(arg1, &sp4C);
        if (temp_v0_3 != 0) {
            temp_a0 = arg1->polyXlu.p;
            arg1->polyXlu.p = temp_a0 + 8;
            temp_a0->words.w1 = (u32) temp_v0_3;
            temp_a0->words.w0 = 0xDA380003;
            phi_s0_2 = arg0;
            phi_s1 = 0;
            if ((u32) arg0 < (u32) ((arg0 + (arg0->numElements * 0x18)) - 0x18)) {
                do {
                    if ((phi_s0_2->elements[0].state == 0) || (phi_s0_2->elements[1].state == 0)) {
                        phi_v0 = arg0 + (arg0->numElements * 0x18);
                    } else {
                        temp_v0_4 = phi_s0_2->elements[0].flags & 3;
                        if (((temp_v0_4 == 0) && ((phi_s0_2->elements[1].flags & 3) == 0)) || ((temp_v0_4 == 2) && ((phi_s0_2->elements[1].flags & 3) == 0)) || ((temp_v0_4 == 0) && ((phi_s0_2->elements[1].flags & 3) == 2)) || ((temp_v0_4 == 2) && ((phi_s0_2->elements[1].flags & 3) == 2))) {
                            func_800A9330(arg0, phi_s0_2, phi_s1, arg1);
                        } else {
                            func_800A9804(arg0, phi_s0_2, phi_s1, arg1);
                        }
                        phi_v0 = arg0 + (arg0->numElements * 0x18);
                    }
                    temp_s0_3 = phi_s0_2 + 0x18;
                    phi_s0_2 = temp_s0_3;
                    phi_s1 += 1;
                } while ((u32) temp_s0_3 < (u32) (phi_v0 - 0x18));
            }
        }
    }
}

void func_800AA460(void *arg0, ? arg1, ? arg2) {
    arg0->unk2C0 = Gfx_CallSetupDL(arg0->unk2C0, 0x26U);
}

void func_800AA498(void *arg0, void *arg1, ? arg2) {
    Gfx *temp_a0;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;

    temp_v0 = arg0->unk2C0;
    arg0->unk2C0 = (Gfx *) (temp_v0 + 8);
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    temp_a0 = arg0->unk2C0;
    arg1 = arg1;
    arg0 = arg0;
    arg0->unk2C0 = Gfx_CallSetupDL(temp_a0, 0x26U);
    temp_v0_2 = arg0->unk2C0;
    arg0->unk2C0 = (Gfx *) (temp_v0_2 + 8);
    temp_v0_2->words.w1 = 0x100000;
    temp_v0_2->words.w0 = 0xE3000A01;
    temp_v0_3 = arg0->unk2C0;
    arg0->unk2C0 = (Gfx *) (temp_v0_3 + 8);
    temp_v0_3->words.w1 = 0;
    temp_v0_3->words.w0 = 0xE3001001;
    temp_v0_4 = arg0->unk2C0;
    arg0->unk2C0 = (Gfx *) (temp_v0_4 + 8);
    temp_v0_4->words.w1 = -1;
    temp_v0_4->words.w0 = 0xD7000002;
    temp_v0_5 = arg0->unk2C0;
    arg0->unk2C0 = (Gfx *) (temp_v0_5 + 8);
    temp_v0_5->words.w0 = 0xFD900000;
    temp_v0_5->words.w1 = (u32) &D_04014570;
    temp_v0_6 = arg0->unk2C0;
    arg0->unk2C0 = (Gfx *) (temp_v0_6 + 8);
    temp_v0_6->words.w0 = 0xF5900000;
    temp_v0_6->words.w1 = 0x7014260;
    temp_v0_7 = arg0->unk2C0;
    arg0->unk2C0 = (Gfx *) (temp_v0_7 + 8);
    temp_v0_7->words.w1 = 0;
    temp_v0_7->words.w0 = 0xE6000000;
    temp_v0_8 = arg0->unk2C0;
    arg0->unk2C0 = (Gfx *) (temp_v0_8 + 8);
    temp_v0_8->words.w1 = 0x73FF100;
    temp_v0_8->words.w0 = 0xF3000000;
    temp_v0_9 = arg0->unk2C0;
    arg0->unk2C0 = (Gfx *) (temp_v0_9 + 8);
    temp_v0_9->words.w1 = 0;
    temp_v0_9->words.w0 = 0xE7000000;
    temp_v0_10 = arg0->unk2C0;
    arg0->unk2C0 = (Gfx *) (temp_v0_10 + 8);
    temp_v0_10->words.w1 = 0x14260;
    temp_v0_10->words.w0 = 0xF5881000;
    temp_v0_11 = arg0->unk2C0;
    arg0->unk2C0 = (Gfx *) (temp_v0_11 + 8);
    temp_v0_11->words.w0 = 0xF2000000;
    temp_v0_11->words.w1 = 0xFC07C;
    temp_v0_12 = arg0->unk2C0;
    arg0->unk2C0 = (Gfx *) (temp_v0_12 + 8);
    temp_v0_12->words.w0 = 0xFC171660;
    temp_v0_12->words.w1 = 0x35FCFF78;
    temp_v0_13 = arg0->unk2C0;
    arg0->unk2C0 = (Gfx *) (temp_v0_13 + 8);
    temp_v0_13->words.w0 = 0xE200001C;
    temp_v0_13->words.w1 = 0xC184B50;
    temp_v0_14 = arg0->unk2C0;
    arg0->unk2C0 = (Gfx *) (temp_v0_14 + 8);
    temp_v0_14->words.w1 = 0;
    temp_v0_14->words.w0 = 0xD9F0FFFF;
    temp_v0_15 = arg0->unk2C0;
    arg0->unk2C0 = (Gfx *) (temp_v0_15 + 8);
    temp_v0_15->words.w0 = 0xD9FFFFFF;
    temp_v0_15->words.w1 = 0x200005;
    temp_v0_16 = arg0->unk2C0;
    arg0->unk2C0 = (Gfx *) (temp_v0_16 + 8);
    temp_v0_16->words.w1 = 0;
    temp_v0_16->words.w0 = 0xE7000000;
    temp_v0_17 = arg0->unk2C0;
    arg0->unk2C0 = (Gfx *) (temp_v0_17 + 8);
    temp_v0_17->words.w0 = 0xFB000000;
    temp_v0_17->words.w1 = (arg1->unk1A6 << 0x18) | (arg1->unk1A7 << 0x10) | (arg1->unk1A8 << 8) | arg1->unk1A9;
}

void func_800AA700(GraphicsContext *arg0, EffectBlure *arg1, u32 arg2) {
    f32 sp1B4;
    f32 sp1B0;
    f32 sp1AC;
    f32 sp1A8;
    f32 sp1A4;
    f32 sp1A0;
    Vec3f sp194;
    MtxF sp150;
    MtxF sp110;
    MtxF spD0;
    MtxF sp90;
    Gfx *temp_v0;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    Gfx *temp_v1_8;
    Mtx *temp_v0_3;
    f32 *temp_a0;
    f32 *temp_a1;
    f32 temp_f10;
    f32 temp_f2;
    s32 temp_s2;
    u8 temp_t7;
    void *temp_v0_2;
    s32 phi_s2;
    f32 phi_f10;
    u32 phi_s5;

    ((? (*)(GraphicsContext *, EffectBlure *, u32)) D_801AE260[arg1->drawMode])(arg0, arg1, arg2);
    temp_v1 = arg0->polyXlu.p;
    arg0->polyXlu.p = temp_v1 + 8;
    temp_v1->words.w1 = 0;
    temp_v1->words.w0 = 0xE7000000;
    phi_s2 = 0;
    phi_s5 = arg2;
    if ((arg1->numElements - 1) > 0) {
loop_2:
        if (arg1->drawMode == 1) {
            temp_t7 = arg1->elemDuration;
            temp_f10 = (f32) temp_t7;
            phi_f10 = temp_f10;
            if ((s32) temp_t7 < 0) {
                phi_f10 = temp_f10 + 4294967296.0f;
            }
            temp_v0 = arg0->polyXlu.p;
            arg0->polyXlu.p = temp_v0 + 8;
            temp_v0->words.w0 = 0xFA000080;
            temp_v0->words.w1 = (arg1->altPrimColor.r << 0x18) | (arg1->altPrimColor.g << 0x10) | (arg1->altPrimColor.b << 8) | ((u32) ((f32) arg1->altPrimColor.a * (1.0f - ((f32) (arg1 + (phi_s2 * 0x18))->unk4 / phi_f10))) & 0xFF);
            temp_v1_2 = arg0->polyXlu.p;
            arg0->polyXlu.p = temp_v1_2 + 8;
            temp_v1_2->words.w1 = 0;
            temp_v1_2->words.w0 = 0xE7000000;
        }
        temp_v1_3 = arg0->polyXlu.p;
        arg0->polyXlu.p = temp_v1_3 + 8;
        temp_v1_3->words.w1 = phi_s5;
        temp_v1_3->words.w0 = 0x1004008;
        temp_v1_4 = arg0->polyXlu.p;
        arg0->polyXlu.p = temp_v1_4 + 8;
        temp_v1_4->words.w1 = 0x604;
        temp_v1_4->words.w0 = 0x6000206;
        temp_v0_2 = arg2 + (phi_s2 << 6);
        if (((arg1->flags & 4) != 0) && (temp_a0 = &sp1A0, temp_a1 = &sp1AC, sp1AC = ((f32) temp_v0_2->unk10 + (f32) temp_v0_2->unk0) * 0.5f, sp1B0 = ((f32) temp_v0_2->unk12 + (f32) temp_v0_2->unk2) * 0.5f, sp1B4 = ((f32) temp_v0_2->unk14 + (f32) temp_v0_2->unk4) * 0.5f, sp1A0 = ((f32) temp_v0_2->unk30 + (f32) temp_v0_2->unk20) * 0.5f, sp1A4 = ((f32) temp_v0_2->unk32 + (f32) temp_v0_2->unk22) * 0.5f, sp1A8 = ((f32) temp_v0_2->unk34 + (f32) temp_v0_2->unk24) * 0.5f, Math_Vec3f_Diff((Vec3f *) temp_a0, (Vec3f *) temp_a1, &sp194), temp_f2 = sqrtf((sp194.x * sp194.x) + (sp194.y * sp194.y) + (sp194.z * sp194.z)), (fabsf(temp_f2) > 0.0005f))) {
            Math_Vec3f_Scale(&sp194, 1.0f / temp_f2);
            SkinMatrix_SetTranslate(&sp150, sp1AC, sp1B0, sp1B4);
            SkinMatrix_SetRotateAroundVec(&sp110, 0x3FFF, sp194.x, sp194.y, sp194.z);
            SkinMatrix_MtxFMtxFMult(&sp150, &sp110, &spD0);
            SkinMatrix_SetTranslate(&sp150, -sp1AC, -sp1B0, -sp1B4);
            SkinMatrix_MtxFMtxFMult(&spD0, &sp150, &sp90);
            temp_v0_3 = SkinMatrix_MtxFToNewMtx(arg0, &sp90);
            if (temp_v0_3 != 0) {
                temp_v1_5 = arg0->polyXlu.p;
                arg0->polyXlu.p = temp_v1_5 + 8;
                temp_v1_5->words.w1 = (u32) temp_v0_3;
                temp_v1_5->words.w0 = 0xDA380003;
                temp_v1_6 = arg0->polyXlu.p;
                arg0->polyXlu.p = temp_v1_6 + 8;
                temp_v1_6->words.w1 = phi_s5;
                temp_v1_6->words.w0 = 0x1004008;
                temp_v1_7 = arg0->polyXlu.p;
                arg0->polyXlu.p = temp_v1_7 + 8;
                temp_v1_7->words.w1 = 0x604;
                temp_v1_7->words.w0 = 0x6000206;
                temp_v1_8 = arg0->polyXlu.p;
                arg0->polyXlu.p = temp_v1_8 + 8;
                temp_v1_8->words.w1 = (u32) &D_801D1DE0;
                temp_v1_8->words.w0 = 0xDA380003;
                goto block_10;
            }
        } else {
block_10:
            temp_s2 = phi_s2 + 1;
            phi_s2 = temp_s2;
            phi_s5 += 0x40;
            if (temp_s2 < (arg1->numElements - 1)) {
                goto loop_2;
            }
        }
    }
}

void func_800AABE0(EffectBlure *arg0, GraphicsContext *arg1) {
    s16 sp74;
    s16 sp6C;
    u8 sp64;
    u8 sp60;
    f32 temp_f10;
    s32 temp_s1;
    s32 temp_s7;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u32 temp_a3;
    u8 temp_a0;
    u8 temp_t3;
    u8 temp_v1;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *phi_v0;
    EffectBlure *phi_a3;
    s32 phi_s1;
    EffectBlure *phi_s4;
    f32 phi_f10;
    s32 phi_s0;
    s32 phi_s3;

    temp_v1 = arg0->numElements;
    temp_s7 = temp_v1 * 4;
    if ((s32) temp_v1 >= 2) {
        temp_s2 = arg1->polyOpa.d - (((temp_s7 * 0x10) + 0xF) & ~0xF);
        arg1->polyOpa.d = temp_s2;
        if (temp_s2 != 0) {
            temp_s2->texture.cmd = (unaligned s32) D_801AE26C.unk0;
            temp_s2->tri.tri.flag = (unaligned s32) D_801AE26C.unk4;
            temp_v0 = temp_s2 + 0x40;
            temp_s2->unk8 = (unaligned s32) D_801AE26C.unk8;
            temp_s2->unkC = (unaligned s32) D_801AE26C.unkC;
            temp_v0->unk-30 = (unaligned s32) D_801AE27C.unk0;
            temp_v0->unk-2C = (unaligned s32) D_801AE27C.unk4;
            temp_v0->unk-28 = (unaligned s32) D_801AE27C.unk8;
            temp_v0->unk-24 = (unaligned s32) D_801AE27C.unkC;
            temp_v0->unk-20 = (unaligned s32) D_801AE28C.unk0;
            temp_v0->unk-1C = (unaligned s32) D_801AE28C.unk4;
            temp_v0->unk-18 = (unaligned s32) D_801AE28C.unk8;
            temp_v0->unk-14 = (unaligned s32) D_801AE28C.unkC;
            temp_v0->unk-10 = (unaligned s32) D_801AE29C.unk0;
            temp_v0->unk-C = (unaligned s32) D_801AE29C.unk4;
            temp_v0->unk-8 = (unaligned s32) D_801AE29C.unk8;
            temp_v0->unk-4 = (unaligned s32) D_801AE29C.unkC;
            temp_a0 = arg0->numElements;
            phi_v0 = temp_v0;
            phi_s4 = arg0;
            phi_s0 = -2;
            phi_s3 = -1;
            if ((s32) temp_a0 >= 2) {
                phi_a3 = arg0;
                if ((u32) arg0 < (u32) ((arg0 + (temp_a0 * 0x18)) - 0x30)) {
                    do {
                        temp_a3 = phi_a3 + 0x18;
                        temp_v0_2 = phi_v0 + 0x40;
                        temp_v0_2->unk-40 = (unaligned s32) D_801AE2AC.unk0;
                        temp_v0_2->unk-3C = (unaligned s32) D_801AE2AC.unk4;
                        temp_v0_2->unk-38 = (unaligned s32) D_801AE2AC.unk8;
                        temp_v0_2->unk-34 = (unaligned s32) D_801AE2AC.unkC;
                        temp_v0_2->unk-30 = (unaligned s32) D_801AE2BC.unk0;
                        temp_v0_2->unk-2C = (unaligned s32) D_801AE2BC.unk4;
                        temp_v0_2->unk-28 = (unaligned s32) D_801AE2BC.unk8;
                        temp_v0_2->unk-24 = (unaligned s32) D_801AE2BC.unkC;
                        temp_v0_2->unk-20 = (unaligned s32) D_801AE2CC.unk0;
                        temp_v0_2->unk-1C = (unaligned s32) D_801AE2CC.unk4;
                        temp_v0_2->unk-18 = (unaligned s32) D_801AE2CC.unk8;
                        temp_v0_2->unk-14 = (unaligned s32) D_801AE2CC.unkC;
                        temp_v0_2->unk-10 = (unaligned s32) D_801AE2DC.unk0;
                        temp_v0_2->unk-C = (unaligned s32) D_801AE2DC.unk4;
                        temp_v0_2->unk-8 = (unaligned s32) D_801AE2DC.unk8;
                        temp_v0_2->unk-4 = (unaligned s32) D_801AE2DC.unkC;
                        phi_v0 = temp_v0_2;
                        phi_a3 = (EffectBlure *) temp_a3;
                    } while (temp_a3 < (u32) ((arg0 + (arg0->numElements * 0x18)) - 0x30));
                }
            }
            phi_s1 = 0;
            if ((s32) arg0->numElements > 0) {
                do {
                    temp_t3 = arg0->elemDuration;
                    temp_f10 = (f32) temp_t3;
                    phi_f10 = temp_f10;
                    if ((s32) temp_t3 < 0) {
                        phi_f10 = temp_f10 + 4294967296.0f;
                    }
                    func_800A8DE8(arg0, phi_s1, (f32) phi_s4->elements[0].timer / phi_f10, &sp74, &sp6C, &sp64, &sp60);
                    temp_s1 = phi_s1 + 1;
                    phi_s1 = temp_s1;
                    if (phi_s0 >= 0) {
                        temp_v0_3 = temp_s2 + (phi_s0 * 0x10);
                        temp_v0_3->unk0 = sp74;
                        temp_v0_3->unk2 = sp76;
                        temp_v0_3->unk4 = sp78;
                        temp_v0_3->unkC = sp64;
                        temp_v0_3->unkD = sp65;
                        temp_v0_3->unkE = sp66;
                        temp_v0_3->unkF = sp67;
                    }
                    if (phi_s3 >= 0) {
                        temp_v0_4 = temp_s2 + (phi_s3 * 0x10);
                        temp_v0_4->unk0 = sp6C;
                        temp_v0_4->unk2 = sp6E;
                        temp_v0_4->unk4 = sp70;
                        temp_v0_4->unkC = sp60;
                        temp_v0_4->unkD = sp61;
                        temp_v0_4->unkE = sp62;
                        temp_v0_4->unkF = sp63;
                    }
                    temp_v1_2 = phi_s3 + 1;
                    if (temp_s7 >= temp_v1_2) {
                        temp_v0_5 = temp_s2 + (temp_v1_2 * 0x10);
                        temp_v0_5->unk0 = sp74;
                        temp_v0_5->unk2 = sp76;
                        temp_v0_5->unk4 = sp78;
                        temp_v0_5->unkC = sp64;
                        temp_v0_5->unkD = sp65;
                        temp_v0_5->unkE = sp66;
                        temp_v0_5->unkF = sp67;
                    }
                    temp_v1_3 = temp_v1_2 + 1;
                    if (temp_s7 >= temp_v1_3) {
                        temp_v0_6 = temp_s2 + (temp_v1_3 * 0x10);
                        temp_v0_6->unk0 = sp6C;
                        temp_v0_6->unk2 = sp6E;
                        temp_v0_6->unk4 = sp70;
                        temp_v0_6->unkC = sp60;
                        temp_v0_6->unkD = sp61;
                        temp_v0_6->unkE = sp62;
                        temp_v0_6->unkF = sp63;
                    }
                    phi_s4 += 0x18;
                    phi_s0 += 4;
                    phi_s3 += 4;
                } while (temp_s1 < (s32) arg0->numElements);
            }
            func_800AA700(arg1, arg0, (u32) temp_s2);
        }
    }
}

void EffectBlure_Draw(EffectBlure *params, GraphicsContext *gfxCtx) {
    Gfx *sp40;
    EffectBlure *temp_s1;
    Gfx *temp_a2;
    Gfx *temp_a2_2;
    Gfx *temp_a2_3;
    Gfx *temp_a2_4;
    Gfx *temp_v0;
    f32 temp_f10;
    f32 temp_f20;
    f32 temp_f20_2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s4;
    s32 temp_v0_2;
    s32 temp_v1;
    u8 temp_t4;
    void *temp_s0;
    void *temp_s0_2;
    EffectBlure *phi_s1;
    f32 phi_f10;
    s32 phi_s3;
    f32 phi_f20;
    s32 phi_s4;
    EffectBlure *phi_s1_2;
    s32 phi_t2;
    s32 phi_s3_2;
    s32 phi_t7;

    temp_a2 = gfxCtx->polyXlu.p;
    gfxCtx->polyXlu.p = temp_a2 + 8;
    temp_a2->words.w0 = 0xDA380003;
    temp_a2->words.w1 = (u32) &D_801D1DE0;
    if (params->numElements != 0) {
        if (params->flags == 0) {
            func_8012C560(gfxCtx);
            temp_a2_2 = gfxCtx->polyXlu.p;
            gfxCtx->polyXlu.p = temp_a2_2 + 8;
            temp_a2_2->words.w1 = 0;
            temp_a2_2->words.w0 = 0xE7000000;
            temp_v0 = gfxCtx->polyOpa.d - 0x200;
            gfxCtx->polyOpa.d = temp_v0;
            sp40 = temp_v0;
            if (temp_v0 != 0) {
                phi_s1 = params;
                phi_s3 = 0;
                phi_s4 = 0;
                if ((s32) params->numElements > 0) {
                    do {
                        if (phi_s1->elements[0].state == 1) {
                            temp_t4 = params->elemDuration;
                            temp_f10 = (f32) temp_t4;
                            phi_f10 = temp_f10;
                            if ((s32) temp_t4 < 0) {
                                phi_f10 = temp_f10 + 4294967296.0f;
                            }
                            temp_v0_2 = params->calcMode;
                            temp_f20 = (f32) phi_s1->elements[0].timer / phi_f10;
                            temp_s0 = sp40 + (phi_s3 * 0x10);
                            phi_f20 = temp_f20;
                            if (temp_v0_2 != 0) {
                                if (temp_v0_2 != 1) {
                                    if (temp_v0_2 != 2) {
                                        if (temp_v0_2 != 3) {
                                            goto block_16;
                                        }
                                        temp_f20_2 = temp_f20 * 0.5f;
                                        temp_s0->unk0 = func_800B09D0(phi_s1->elements[0].p1.x, phi_s1->elements[0].p2.x, temp_f20_2);
                                        temp_s0->unk2 = func_800B09D0(phi_s1->elements[0].p1.y, phi_s1->elements[0].p2.y, temp_f20_2);
                                        temp_s0->unk4 = func_800B09D0(phi_s1->elements[0].p1.z, phi_s1->elements[0].p2.z, temp_f20_2);
                                        temp_s0->unk10 = func_800B09D0(phi_s1->elements[0].p2.x, phi_s1->elements[0].p1.x, temp_f20_2);
                                        temp_s0->unk12 = func_800B09D0(phi_s1->elements[0].p2.y, phi_s1->elements[0].p1.y, temp_f20_2);
                                        temp_s0->unk14 = func_800B09D0(phi_s1->elements[0].p2.z, phi_s1->elements[0].p1.z, temp_f20_2);
                                        phi_f20 = 2.0f * temp_f20_2;
                                    } else {
                                        temp_s0->unk0 = (s16) phi_s1->elements[0].p1.x;
                                        temp_s0->unk2 = (s16) phi_s1->elements[0].p1.y;
                                        temp_s0->unk4 = (s16) phi_s1->elements[0].p1.z;
                                        temp_s0->unk10 = func_800B09D0(phi_s1->elements[0].p2.x, phi_s1->elements[0].p1.x, temp_f20);
                                        temp_s0->unk12 = func_800B09D0(phi_s1->elements[0].p2.y, phi_s1->elements[0].p1.y, temp_f20);
                                        temp_s0->unk14 = func_800B09D0(phi_s1->elements[0].p2.z, phi_s1->elements[0].p1.z, temp_f20);
                                    }
                                } else {
                                    temp_s0->unk0 = func_800B09D0(phi_s1->elements[0].p1.x, phi_s1->elements[0].p2.x, temp_f20);
                                    temp_s0->unk2 = func_800B09D0(phi_s1->elements[0].p1.y, phi_s1->elements[0].p2.y, temp_f20);
                                    temp_s0->unk4 = func_800B09D0(phi_s1->elements[0].p1.z, phi_s1->elements[0].p2.z, temp_f20);
                                    temp_s0->unk10 = (s16) phi_s1->elements[0].p2.x;
                                    temp_s0->unk12 = (s16) phi_s1->elements[0].p2.y;
                                    temp_s0->unk14 = (s16) phi_s1->elements[0].p2.z;
                                }
                            } else {
block_16:
                                temp_s0->unk0 = (s16) phi_s1->elements[0].p1.x;
                                temp_s0->unk2 = (s16) phi_s1->elements[0].p1.y;
                                temp_s0->unk4 = (s16) phi_s1->elements[0].p1.z;
                                temp_s0->unk10 = (s16) phi_s1->elements[0].p2.x;
                                temp_s0->unk12 = (s16) phi_s1->elements[0].p2.y;
                                temp_s0->unk14 = (s16) phi_s1->elements[0].p2.z;
                            }
                            temp_s0->unk6 = 0;
                            temp_s0->unk8 = 0;
                            temp_s0->unkA = 0;
                            temp_s0->unkC = func_800B0A24(params->p1StartColor.r, params->p1EndColor.r, phi_f20);
                            temp_s0->unkD = func_800B0A24(params->p1StartColor.g, params->p1EndColor.g, phi_f20);
                            temp_s0->unkE = func_800B0A24(params->p1StartColor.b, params->p1EndColor.b, phi_f20);
                            temp_s0->unkF = func_800B0A24(params->p1StartColor.a, params->p1EndColor.a, phi_f20);
                            temp_s0->unk16 = 0;
                            temp_s0->unk18 = 0;
                            temp_s0->unk1A = 0;
                            temp_s0_2 = temp_s0 + 0x10;
                            temp_s0_2->unkC = func_800B0A24(params->p2StartColor.r, params->p2EndColor.r, phi_f20);
                            temp_s0_2->unkD = func_800B0A24(params->p2StartColor.g, params->p2EndColor.g, phi_f20);
                            temp_s0_2->unkE = func_800B0A24(params->p2StartColor.b, params->p2EndColor.b, phi_f20);
                            temp_s0_2->unkF = func_800B0A24(params->p2StartColor.a, params->p2EndColor.a, phi_f20);
                            phi_s3 = phi_s3 + 1 + 1;
                        }
                        temp_s4 = phi_s4 + 1;
                        phi_s1 += 0x18;
                        phi_s4 = temp_s4;
                    } while (temp_s4 < (s32) params->numElements);
                }
                temp_a2_3 = gfxCtx->polyXlu.p;
                gfxCtx->polyXlu.p = temp_a2_3 + 8;
                temp_a2_3->words.w0 = 0x1020040;
                temp_a2_3->words.w1 = (u32) sp40;
                phi_s1_2 = params;
                phi_t2 = 0;
                phi_s3_2 = 0;
                phi_t2 = 0;
                phi_t2 = 0;
                if ((s32) params->numElements > 0) {
                    do {
                        temp_s1 = phi_s1_2 + 0x18;
                        phi_s1_2 = temp_s1;
                        if (phi_s1_2->elements[0].state == 0) {
                            phi_t7 = params->numElements * 0x18;
                        } else {
                            temp_a1 = phi_s3_2 * 2;
                            if (phi_t2 == 0) {
                                phi_t2 = 1;
                            } else {
                                temp_a2_4 = gfxCtx->polyXlu.p;
                                temp_v1 = ((temp_a1 - 4) & 0xFF) << 0x10;
                                temp_a0 = (temp_a1 + 2) & 0xFF;
                                gfxCtx->polyXlu.p = temp_a2_4 + 8;
                                temp_a2_4->words.w0 = temp_v1 | (((temp_a1 - 2) & 0xFF) << 8) | temp_a0 | 0x7000000;
                                temp_a2_4->words.w1 = temp_v1 | (temp_a0 << 8) | (temp_a1 & 0xFF);
                                if (params->unkFlag == 1) {

                                }
                            }
                            phi_t7 = params->numElements * 0x18;
                            phi_s3_2 += 2;
                        }
                    } while ((u32) temp_s1 < (u32) (phi_t7 + params));
                    return;
                }
                // Duplicate return node #33. Try simplifying control flow for better match
                return;
            }
            // Duplicate return node #33. Try simplifying control flow for better match
            return;
        }
        if ((s32) params->drawMode < 2) {
            func_800AABE0(params, gfxCtx, temp_a2);
            return;
        }
        func_800AA190(params, gfxCtx, temp_a2);
        // Duplicate return node #33. Try simplifying control flow for better match
    }
}

