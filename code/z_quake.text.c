struct _mips2c_stack_Quake2_ClearType {};           /* size 0x0 */

struct _mips2c_stack_Quake2_GetCountdown {};        /* size 0x0 */

struct _mips2c_stack_Quake2_GetFloorQuake {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Quake2_GetType {};             /* size 0x0 */

struct _mips2c_stack_Quake2_Init {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Quake2_SetCountdown {};        /* size 0x0 */

struct _mips2c_stack_Quake2_SetType {};             /* size 0x0 */

struct _mips2c_stack_Quake2_Update {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x8];                     /* maybe part of sp28[3]? */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ void *sp38;                          /* inferred */
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad3C[0x18];
    /* 0x54 */ Player *sp54;                        /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad7C[0x8];                     /* maybe part of sp78[3]? */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
};                                                  /* size = 0x90 */

struct _mips2c_stack_Quake_Add {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Quake_AddImpl {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad1C[0x2];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_Quake_Calc {
    /* 0x00 */ char pad0[0x64];
    /* 0x64 */ GlobalContext *sp64;                 /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ s32 sp74;                            /* inferred */
    /* 0x78 */ char pad78[0x14];                    /* maybe part of sp74[6]? */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ s16 spA4;                            /* inferred */
    /* 0xA6 */ s16 spA6;                            /* inferred */
    /* 0xA8 */ char padA8[0x8];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_Quake_Callback1 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_Quake_Callback2 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_Quake_Callback3 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Quake_Callback4 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_Quake_Callback5 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Quake_Callback6 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_Quake_GetCountdown {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Quake_GetFreeIndex {};         /* size 0x0 */

struct _mips2c_stack_Quake_GetRequest {};           /* size 0x0 */

struct _mips2c_stack_Quake_Init {};                 /* size 0x0 */

struct _mips2c_stack_Quake_NumActiveQuakes {};      /* size 0x0 */

struct _mips2c_stack_Quake_Random {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Quake_Remove {};               /* size 0x0 */

struct _mips2c_stack_Quake_RemoveFromIdx {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Quake_SetCountdown {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Quake_SetQuakeValues {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Quake_SetQuakeValues2 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Quake_SetSpeed {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Quake_SetValue {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Quake_UpdateShakeInfo {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad28[0xC];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad34[0x4];
    /* 0x38 */ s16 sp38;                            /* inferred */
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ s16 sp40;                            /* inferred */
    /* 0x42 */ s16 sp42;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad50[0x8];
};                                                  /* size = 0x58 */

static s16 D_801C0EE4 = 0x3F0;
static s16 D_801C0EE8 = 0x156;
static s16 D_801C0EEC = 1;
static s16 sIsQuakeInitialized = 1;
static void *sQuake2Context;
static ? sQuakeCallbacks;                           /* unable to generate initializer */
static QuakeRequest sQuakeRequest[4];
static s16 sQuakeRequestCount = 0;

f32 Quake_Random(void) {
    return 2.0f * (Rand_ZeroOne() - 0.5f);
}

void Quake_UpdateShakeInfo(QuakeRequest *req, ShakeInfo *shake, f32 verticalPertubation, f32 horizontalPertubation) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    s16 sp42;
    s16 sp40;
    f32 sp3C;
    ? sp34;
    ? sp28;
    Camera *temp_v0;
    f32 *temp_a2;
    f32 *temp_a2_2;
    f32 *temp_a2_3;
    f32 *temp_s1;
    f32 *phi_s1;

    temp_v0 = req->camera;
    if (req->isShakePerpendicular != 0) {
        sp44 = 0.0f;
        sp48 = 0.0f;
        sp4C = 0.0f;
        OLib_Vec3fDiffToVecSphGeo((VecSph *) &sp34, &temp_v0->eye, &temp_v0->at);
        temp_a2 = &sp3C;
        sp3C = (f32) req->verticalMag * verticalPertubation;
        sp40 = sp38 + req->shakePlaneOffset.x + 0x4000;
        sp42 = sp3A + req->shakePlaneOffset.y;
        OLib_VecSphAddToVec3f((Vec3f *) &sp44, (Vec3f *) &sp44, (VecSph *) temp_a2);
        temp_a2_2 = &sp3C;
        sp3C = (f32) req->horizontalMag * horizontalPertubation;
        sp40 = sp38 + req->shakePlaneOffset.x;
        sp42 = sp3A + req->shakePlaneOffset.y + 0x4000;
        OLib_VecSphAddToVec3f((Vec3f *) &sp44, (Vec3f *) &sp44, (VecSph *) temp_a2_2);
        phi_s1 = &sp44;
    } else {
        temp_s1 = &sp44;
        sp44 = 0.0f;
        sp4C = 0.0f;
        temp_a2_3 = &sp3C;
        sp48 = (f32) req->verticalMag * verticalPertubation;
        sp3C = (f32) req->horizontalMag * horizontalPertubation;
        sp40 = req->shakePlaneOffset.x;
        sp42 = req->shakePlaneOffset.y;
        OLib_VecSphAddToVec3f((Vec3f *) temp_s1, (Vec3f *) temp_s1, (VecSph *) temp_a2_3);
        phi_s1 = temp_s1;
    }
    sp28.unk0 = (f32) phi_s1->unk0;
    sp28.unk8 = (f32) phi_s1->unk8;
    sp28.unk4 = (f32) phi_s1->unk4;
    shake->eyeOffset.x = sp28.unk0;
    shake->eyeOffset.y = sp28.unk4;
    shake->eyeOffset.z = sp28.unk8;
    shake->atOffset.x = sp28.unk0;
    shake->atOffset.y = sp28.unk4;
    shake->atOffset.z = sp28.unk8;
    shake->rollOffset = (s16) (s32) ((f32) req->rollOffset * verticalPertubation);
    shake->zoom = (s16) (s32) ((f32) req->zoom * verticalPertubation);
}

s16 Quake_Callback1(QuakeRequest *req, ShakeInfo *shake) {
    f32 sp24;
    s16 temp_v1;

    temp_v1 = req->countdown;
    if ((s32) temp_v1 > 0) {
        sp24 = Math_SinS((s16) (req->speed * temp_v1));
        Quake_UpdateShakeInfo(req, shake, sp24, Rand_ZeroOne() * sp24);
        req->countdown += -1;
    }
    return req->countdown;
}

s16 Quake_Callback5(QuakeRequest *req, ShakeInfo *shake) {
    f32 temp_f0;
    s16 temp_v1;

    temp_v1 = req->countdown;
    if ((s32) temp_v1 > 0) {
        temp_f0 = Math_SinS((s16) (req->speed * temp_v1));
        Quake_UpdateShakeInfo(req, shake, temp_f0, temp_f0);
        req->countdown += -1;
    }
    return req->countdown;
}

s16 Quake_Callback6(QuakeRequest *req, ShakeInfo *shake) {
    f32 sp24;

    req->countdown += -1;
    sp24 = Math_SinS((s16) (req->speed * ((req->countdown & 0xF) + 0x1F4)));
    Quake_UpdateShakeInfo(req, shake, sp24, Rand_ZeroOne() * sp24);
    return 1;
}

s16 Quake_Callback3(QuakeRequest *req, ShakeInfo *shake) {
    f32 temp_f2;
    s16 temp_v1;

    temp_v1 = req->countdown;
    if ((s32) temp_v1 > 0) {
        temp_f2 = Math_SinS((s16) (req->speed * temp_v1)) * ((f32) req->countdown / (f32) req->countdownMax);
        Quake_UpdateShakeInfo(req, shake, temp_f2, temp_f2);
        req->countdown += -1;
    }
    return req->countdown;
}

s16 Quake_Callback2(QuakeRequest *req, ShakeInfo *shake) {
    f32 sp1C;
    s16 temp_v1;
    s16 phi_v1;

    temp_v1 = req->countdown;
    phi_v1 = temp_v1;
    if ((s32) temp_v1 > 0) {
        sp1C = Quake_Random();
        Quake_UpdateShakeInfo(req, shake, sp1C, Rand_ZeroOne() * sp1C);
        req->countdown += -1;
        phi_v1 = req->countdown;
    }
    return phi_v1;
}

s16 Quake_Callback4(QuakeRequest *req, ShakeInfo *shake) {
    f32 sp24;
    f32 temp_f2;

    if ((s32) req->countdown > 0) {
        temp_f2 = Quake_Random() * ((f32) req->countdown / (f32) req->countdownMax);
        sp24 = temp_f2;
        Quake_UpdateShakeInfo(req, shake, temp_f2, Rand_ZeroOne() * temp_f2);
        req->countdown += -1;
    }
    return req->countdown;
}

s16 Quake_GetFreeIndex(void) {
    s16 temp_a0;
    s16 temp_a2;
    QuakeRequest *phi_a1;
    s32 phi_v0;
    s16 phi_a0;
    s16 phi_v1;
    s16 phi_v1_2;

    phi_a1 = sQuakeRequest;
    phi_v0 = 0x10000;
    phi_a0 = 0;
    phi_v1_2 = 0;
loop_1:
    if (phi_a1->callbackIdx == 0) {
        phi_v1 = phi_a0;
    } else {
        temp_a2 = phi_a1->countdown;
        if ((s32) temp_a2 < phi_v0) {
            phi_v0 = (s32) temp_a2;
            phi_v1_2 = phi_a0;
        }
        temp_a0 = phi_a0 + 1;
        phi_a1 += 0x24;
        phi_a0 = temp_a0;
        phi_v1 = phi_v1_2;
        if (temp_a0 != 4) {
            goto loop_1;
        }
    }
    return phi_v1;
}

QuakeRequest *Quake_AddImpl(Camera *camera, u32 callbackIdx) {
    s16 sp1E;
    void *sp18;
    s16 temp_v0;
    void *temp_a0;

    temp_v0 = Quake_GetFreeIndex();
    temp_a0 = (temp_v0 * 0x24) + sQuakeRequest;
    sp1E = temp_v0;
    sp18 = temp_a0;
    __osMemset(temp_a0, 0, 0x24U);
    sp18->unk4 = camera;
    sp18->unk20 = (s16) camera->thisIdx;
    sp18->unk1C = 1;
    sp18->unk8 = callbackIdx;
    sp18->unk0 = (s16) (((s32) (Rand_ZeroOne() * 65536.0f) & 0xFFFC) + sp1E);
    sQuakeRequestCount += 1;
    return (QuakeRequest *) sp18;
}

void Quake_Remove(QuakeRequest *req) {
    req->callbackIdx = 0;
    req->countdown = -1;
    sQuakeRequestCount += -1;
}

QuakeRequest *Quake_GetRequest(s16 idx) {
    QuakeRequest *temp_v1;

    temp_v1 = ((idx & 3) * 0x24) + sQuakeRequest;
    if (temp_v1->callbackIdx == 0) {
        return NULL;
    }
    if (idx != temp_v1->randIdx) {
        return NULL;
    }
    return temp_v1;
}

u32 Quake_SetValue(s16 idx, s16 valueType, s16 value) {
    QuakeRequest *temp_v0;

    valueType = valueType;
    value = value;
    temp_v0 = Quake_GetRequest(idx);
    if (temp_v0 == 0) {
        return 0U;
    }
    if ((s32) valueType >= 0x81) {
        if (valueType != 0x100) {
            if (valueType != 0x200) {

            } else {
                temp_v0->isShakePerpendicular = value;
            }
        } else {
            temp_v0->countdown = value;
            temp_v0->countdownMax = temp_v0->countdown;
        }
    } else if ((s32) valueType >= 0x41) {
        if (valueType != 0x80) {

        } else {
            temp_v0->shakePlaneOffset.z = value;
        }
    } else if ((s32) valueType >= 0x21) {
        if (valueType != 0x40) {

        } else {
            temp_v0->shakePlaneOffset.y = value;
        }
    } else {
        switch (valueType) {
        case 1:
            temp_v0->speed = value;
            break;
        case 2:
            temp_v0->verticalMag = value;
            break;
        case 4:
            temp_v0->horizontalMag = value;
            break;
        case 8:
            temp_v0->zoom = value;
            break;
        case 16:
            temp_v0->rollOffset = value;
            break;
        case 32:
            temp_v0->shakePlaneOffset.x = value;
            break;
        }
    }
    return 1U;
}

u32 Quake_SetSpeed(s16 idx, s16 value) {
    QuakeRequest *temp_v0;

    temp_v0 = Quake_GetRequest(idx);
    if (temp_v0 != 0) {
        temp_v0->speed = value;
        return 1U;
    }
    return 0U;
}

u32 Quake_SetCountdown(s16 idx, s16 value) {
    QuakeRequest *temp_v0;

    temp_v0 = Quake_GetRequest(idx);
    if (temp_v0 != 0) {
        temp_v0->countdown = value;
        temp_v0->countdownMax = temp_v0->countdown;
        return 1U;
    }
    return 0U;
}

s16 Quake_GetCountdown(s16 idx) {
    QuakeRequest *temp_v0;

    temp_v0 = Quake_GetRequest(idx);
    if (temp_v0 != 0) {
        return temp_v0->countdown;
    }
    return 0;
}

u32 Quake_SetQuakeValues(s16 idx, s16 verticalMag, s16 horizontalMag, s16 zoom, s16 rollOffset) {
    QuakeRequest *temp_v0;

    temp_v0 = Quake_GetRequest(idx);
    if (temp_v0 != 0) {
        temp_v0->verticalMag = verticalMag;
        temp_v0->horizontalMag = horizontalMag;
        temp_v0->zoom = zoom;
        temp_v0->rollOffset = rollOffset;
        return 1U;
    }
    return 0U;
}

u32 Quake_SetQuakeValues2(s16 idx, s16 isShakePerpendicular, ? shakePlaneOffset, ? shakePlaneOffset_unk4) {
    QuakeRequest *temp_v0;

    temp_v0 = Quake_GetRequest(idx);
    if (temp_v0 != 0) {
        temp_v0->isShakePerpendicular = isShakePerpendicular;
        temp_v0->unk14 = (unaligned s32) shakePlaneOffset.unk0;
        temp_v0->shakePlaneOffset.z = (s16) shakePlaneOffset.unk4;
        return 1U;
    }
    return 0U;
}

void Quake_Init(void) {
    s16 temp_v0;
    void *temp_v1;
    s16 phi_v0;

    phi_v0 = 0;
    do {
        temp_v0 = phi_v0 + 1;
        temp_v1 = sQuakeRequest + (phi_v0 * 0x24);
        temp_v1->unk8 = 0;
        temp_v1->unk1E = 0;
        phi_v0 = temp_v0;
    } while ((s32) temp_v0 < 4);
    sIsQuakeInitialized = 1;
    sQuakeRequestCount = 0;
}

s16 Quake_Add(Camera *camera, u32 callbackIdx) {
    return Quake_AddImpl(camera, callbackIdx)->randIdx;
}

u32 Quake_RemoveFromIdx(s16 idx) {
    QuakeRequest *temp_v0;

    temp_v0 = Quake_GetRequest(idx);
    if (temp_v0 != 0) {
        Quake_Remove(temp_v0);
        return 1U;
    }
    return 0U;
}

s16 Quake_Calc(Camera *camera, QuakeCamCalc *camData) {
    f32 sp98;
    f32 sp8C;
    s32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    GlobalContext *sp64;
    QuakeRequest *temp_s1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2;
    s16 temp_v0;
    s32 temp_a2;
    s32 temp_a3;
    QuakeRequest *phi_s1;
    s32 phi_v1;
    f32 phi_f20;
    f32 phi_f20_2;
    f32 phi_f20_3;
    s16 phi_s2;
    s16 phi_s2_2;

    sp68 = 0.0f;
    sp6C = 0.0f;
    sp70 = 0.0f;
    sp64 = camera->globalCtx;
    camData->atOffset.x = 0.0f;
    camData->atOffset.y = 0.0f;
    camData->atOffset.z = 0.0f;
    camData->eyeOffset.x = 0.0f;
    camData->eyeOffset.y = 0.0f;
    camData->eyeOffset.z = 0.0f;
    camData->rollOffset = 0;
    camData->zoom = 0;
    camData->max = 0.0f;
    phi_s1 = sQuakeRequest;
    phi_s2_2 = 0;
    if (sQuakeRequestCount == 0) {
        return 0;
    }
    do {
        temp_a2 = phi_s1->callbackIdx;
        phi_s2 = phi_s2_2;
        if (temp_a2 != 0) {
            if (sp64->cameraPtrs[phi_s1->cameraPtrsIdx] == 0) {
                Quake_Remove(phi_s1);
            } else {
                temp_v0 = phi_s1->speed;
                temp_a3 = phi_s1->camera->thisIdx != camera->thisIdx;
                phi_v1 = -(s32) temp_v0;
                if ((s32) temp_v0 >= 0) {
                    phi_v1 = (s32) temp_v0;
                }
                temp_f22 = (f32) phi_v1 / 32768.0f;
                sp74 = temp_a3;
                if (*(&sQuakeCallbacks + (temp_a2 * 4))(phi_s1, &sp8C, temp_a2, temp_a3) == 0) {
                    Quake_Remove(phi_s1);
                } else if (temp_a3 == 0) {
                    if (fabsf(camData->atOffset.x) < fabsf(sp8C)) {
                        camData->atOffset.x = sp8C;
                    }
                    if (fabsf(camData->atOffset.y) < fabsf(sp90)) {
                        camData->atOffset.y = sp90;
                    }
                    if (fabsf(camData->atOffset.z) < fabsf(sp94)) {
                        camData->atOffset.z = sp94;
                    }
                    if (fabsf(camData->eyeOffset.x) < fabsf(sp98)) {
                        camData->eyeOffset.x = sp98;
                    }
                    if (fabsf(camData->eyeOffset.y) < fabsf(sp9C)) {
                        camData->eyeOffset.y = sp9C;
                    }
                    if (fabsf(camData->eyeOffset.z) < fabsf(spA0)) {
                        camData->eyeOffset.z = spA0;
                    }
                    if ((s32) camData->rollOffset < (s32) spA4) {
                        camData->rollOffset = spA4;
                    }
                    if ((s32) camData->zoom < (s32) spA6) {
                        camData->zoom = spA6;
                    }
                    temp_f20 = OLib_Vec3fDist((Vec3f *) &sp8C, (Vec3f *) &sp68) * temp_f22;
                    temp_f2 = OLib_Vec3fDist((Vec3f *) &sp98, (Vec3f *) &sp68) * temp_f22;
                    phi_f20 = temp_f20;
                    phi_s2 = phi_s2_2 + 1;
                    if (temp_f20 < temp_f2) {
                        phi_f20 = temp_f2;
                    }
                    temp_f0 = (f32) camData->rollOffset * 0.0028f * temp_f22;
                    phi_f20_2 = phi_f20;
                    if (phi_f20 < temp_f0) {
                        phi_f20_2 = temp_f0;
                    }
                    temp_f0_2 = (f32) camData->zoom * 0.0028f * temp_f22;
                    phi_f20_3 = phi_f20_2;
                    if (phi_f20_2 < temp_f0_2) {
                        phi_f20_3 = temp_f0_2;
                    }
                    if (camData->max < phi_f20_3) {
                        camData->max = phi_f20_3;
                    }
                }
            }
        }
        temp_s1 = phi_s1 + 0x24;
        phi_s1 = temp_s1;
        phi_s2_2 = phi_s2;
    } while (temp_s1 != &sQuake2Context);
    return phi_s2;
}

void Quake2_Init(GlobalContext *globalCtx) {
    sQuake2Context.unk0 = globalCtx;
    View_ClearQuake(&globalCtx->view);
    sQuake2Context.unk4 = 0;
    sQuake2Context.unk8 = 0;
    sQuake2Context.unkA = 0;
}

void Quake2_SetCountdown(s16 countdown) {
    sQuake2Context.unk8 = countdown;
    sQuake2Context.unkA = 2;
}

s16 Quake2_GetCountdown(void) {
    return *(&sQuake2Context + 8);
}

s16 Quake2_GetType(void) {
    return *(&sQuake2Context + 6);
}

void Quake2_SetType(s32 type) {
    if (sQuake2Context.unk4 < type) {
        sQuake2Context.unk4 = type;
    }
}

void Quake2_ClearType(s32 type) {
    if (type == sQuake2Context.unk4) {
        sQuake2Context.unk4 = 0;
    }
}

s32 Quake2_GetFloorQuake(Player *player) {
    CollisionPoly *temp_a1;
    u8 temp_a2;

    temp_a1 = player->actor.floorPoly;
    temp_a2 = player->actor.floorBgId;
    player = player;
    if (func_800C9D8C(sQuake2Context + 0x830, temp_a1, (s32) temp_a2) == 0) {
        return func_800C9E18(sQuake2Context + 0x830, player->actor.floorPoly, (s32) player->actor.floorBgId);
    }
    return 0;
}

void Quake2_Update(void) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    Player *sp54;
    ? sp3C;
    void *sp38;
    f32 sp34;
    f32 sp28;
    f32 sp24;
    GlobalContext *temp_a2;
    Player *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    f32 temp_f12_6;
    f32 temp_f12_7;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s16 temp_t9;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_5;
    s16 temp_v0_7;
    s32 temp_v0;
    s32 temp_v0_4;
    s32 temp_v0_6;
    void *temp_a3;
    f32 phi_f12;
    f32 phi_f14;
    f32 phi_f16;
    f32 phi_f18;
    f32 phi_f2;

    temp_a2 = sQuake2Context.unk0;
    temp_a3 = (temp_a2 + (temp_a2->activeCamera * 4))->unk800;
    temp_f0 = temp_a3->unkE0;
    if (temp_f0 > 1.0f) {
        sp34 = 1.0f;
    } else {
        sp34 = temp_f0;
    }
    temp_v0 = sQuake2Context.unk4;
    if (temp_v0 != 0) {
        if ((temp_v0 & 0x800) != 0) {
            sQuake2Context.unk8 = 2;
            D_801C0EE4 = 0x3F0;
            D_801C0EE8 = 0x156;
            sp74 = 170.0f;
            sp60 = 0.01f;
            temp_f12 = (f32) sQuake2Context.unk8 / 60.0f;
            sp58 = 0.6f;
            sp78 = 0.0f;
            sp70 = 0.0f;
            sp6C = 0.0f;
            sp68 = 0.0f;
            sp5C = 0.0f;
            phi_f12 = temp_f12;
            phi_f14 = temp_f12;
            phi_f16 = 1.0f;
            phi_f18 = -0.01f;
            goto block_66;
        }
        if ((temp_v0 & 0x400) != 0) {
            if (sQuake2Context.unkA == 2) {
                D_801C0EEC = sQuake2Context.unk8;
                D_801C0EE4 = 0x3F0;
                D_801C0EE8 = 0x156;
            }
            temp_f2 = (f32) D_801C0EEC;
            sp60 = 100.0f;
            sp78 = 0.0f;
            sp70 = 0.0f;
            sp6C = 0.0f;
            sp68 = 0.0f;
            sp5C = 0.0f;
            sp58 = 0.4f;
            sp74 = 50.0f / temp_f2;
            temp_f12_2 = (temp_f2 - (f32) sQuake2Context.unk8) / temp_f2;
            phi_f12 = temp_f12_2;
            phi_f14 = temp_f12_2;
            phi_f16 = 0.5f;
            phi_f18 = 0.01f;
            goto block_66;
        }
        if ((temp_v0 & 0x200) != 0) {
            if (sQuake2Context.unkA == 2) {
                D_801C0EEC = sQuake2Context.unk8;
                D_801C0EE4 = 0x1FC;
                D_801C0EE8 = 0x156;
            }
            sp74 = 5.0f;
            sp68 = 2.0f;
            sp60 = 0.3f;
            temp_f2_2 = (f32) D_801C0EEC;
            sp78 = -5.0f;
            sp58 = 0.1f;
            sp70 = 0.0f;
            sp6C = 0.0f;
            sp5C = 0.0f;
            temp_f12_3 = (temp_f2_2 - (f32) sQuake2Context.unk8) / temp_f2_2;
            phi_f12 = temp_f12_3;
            phi_f14 = temp_f12_3;
            phi_f16 = 1.0f;
            phi_f18 = 0.3f;
            goto block_66;
        }
        if ((temp_v0 & 0x100) != 0) {
            if (sQuake2Context.unkA == 2) {
                D_801C0EEC = sQuake2Context.unk8;
                D_801C0EE4 = 0x2710;
                D_801C0EE8 = 0x3E8;
            }
            temp_v0_2 = sQuake2Context.unk8;
            sp74 = 150.0f;
            sp78 = 0.0f;
            sp68 = 0.2f;
            sp60 = 0.02f;
            sp5C = 0.01f;
            sp70 = 0.0f;
            sp6C = 0.0f;
            sp58 = 1.5f;
            phi_f18 = 0.025f;
            if ((s32) temp_v0_2 < 5) {
                temp_f2_3 = (f32) D_801C0EEC;
                temp_f12_4 = (temp_f2_3 - (f32) temp_v0_2) / temp_f2_3;
                phi_f12 = temp_f12_4;
                phi_f14 = temp_f12_4;
                phi_f16 = 1.0f;
            } else {
                phi_f12 = 0.0f;
                phi_f14 = 0.0f;
                phi_f16 = 1.0f;
            }
            goto block_66;
        }
        if ((temp_v0 & 0x80) != 0) {
            if (sQuake2Context.unkA == 2) {
                D_801C0EEC = sQuake2Context.unk8;
                D_801C0EE4 = 0x4B0;
                D_801C0EE8 = 0x7D0;
            }
            sp74 = 150.0f;
            sp5C = 0.01f;
            sp60 = 0.02f;
            sp58 = 1.5f;
            sp70 = 0.0f;
            sp6C = 0.0f;
            sp68 = 0.0f;
            sp78 = 0.0f;
            temp_f12_5 = (f32) sQuake2Context.unk8 / (f32) D_801C0EEC;
            phi_f12 = temp_f12_5;
            phi_f14 = temp_f12_5;
            phi_f16 = 1.0f;
            phi_f18 = 0.03f;
            goto block_66;
        }
        if ((temp_v0 & 0x40) != 0) {
            if (sQuake2Context.unkA == 2) {
                D_801C0EEC = sQuake2Context.unk8;
                D_801C0EE4 = 0x9C4;
                D_801C0EE8 = 0xBB8;
            }
            temp_v0_3 = sQuake2Context.unk8;
            sp78 = 0.0f;
            sp60 = 0.03f;
            sp74 = 150.0f;
            sp5C = 0.01f;
            sp70 = 0.0f;
            sp6C = 0.0f;
            sp68 = 0.0f;
            sp58 = 1.3f;
            if ((s32) temp_v0_3 < 4) {
                temp_f12_6 = (f32) temp_v0_3 / (f32) D_801C0EEC;
                phi_f12 = temp_f12_6;
                phi_f14 = temp_f12_6;
                phi_f16 = 1.0f;
                phi_f18 = 0.03f;
            } else {
                phi_f12 = 0.0f;
                phi_f14 = 0.0f;
                phi_f16 = 1.0f;
                phi_f18 = 0.03f;
            }
            goto block_66;
        }
        if ((temp_v0 & 0x20) != 0) {
            sQuake2Context.unk8 = 2;
            if (sQuake2Context.unkA == 2) {
                D_801C0EE4 = 0x9C4;
                D_801C0EE8 = 0xBB8;
            }
            D_801C0EE4 = D_801C0EE4 + 0xB1;
            D_801C0EE8 = D_801C0EE8 - 0x2B;
            sp78 = -107.0f;
            sp74 = 158.0f;
            sp70 = 0.2f;
            sp58 = 0.2f;
            sp6C = 1.7f;
            sp68 = -2.9f;
            sp60 = -0.7f;
            sp5C = 0.6f;
            phi_f12 = 1.0f;
            phi_f14 = 1.0f;
            phi_f16 = 1.0f;
            phi_f18 = -0.6f;
            goto block_66;
        }
        if ((temp_v0 & 0x10) != 0) {
            if (sQuake2Context.unkA == 2) {
                D_801C0EEC = sQuake2Context.unk8;
                D_801C0EE4 = 0x760;
                D_801C0EE8 = 0x1BC;
            }
            sp78 = 248.0f;
            sp74 = -90.0f;
            sp5C = 0.2f;
            sp60 = 0.4f;
            sp58 = 0.25f;
            sp70 = 0.0f;
            sp6C = 0.0f;
            sp68 = 0.0f;
            temp_f12_7 = (f32) sQuake2Context.unk8 / (f32) D_801C0EEC;
            phi_f12 = temp_f12_7;
            phi_f14 = temp_f12_7;
            phi_f16 = 1.0f;
            phi_f18 = -0.4f;
            goto block_66;
        }
        if ((temp_v0 & 8) != 0) {
            D_801C0EE4 = 0x3F0;
            D_801C0EE8 = 0x156;
            sQuake2Context.unk8 = 2;
            temp_a1 = temp_a2->actorCtx.actorList[2].first;
            if (temp_a1 != 0) {
                sp54 = temp_a1;
                func_800B8248((PosRot *) &sp3C, temp_a1);
            }
            sp54 = temp_a2->actorCtx.actorList[2].first;
            sp78 = 359.2f;
            sp74 = -18.5f;
            sp70 = 0.0f;
            sp6C = 0.0f;
            sp68 = 0.3f;
            temp_v0_4 = Quake2_GetFloorQuake(temp_a2->actorCtx.actorList[2].first);
            if (temp_v0_4 != 1) {
                if (temp_v0_4 != 2) {
                    if (temp_v0_4 != 3) {
                        sp5C = 0.03f;
                        sp60 = 0.1f;
                        sp58 = 0.23f;
                        phi_f18 = -0.06f;
                    } else {
                        sp5C = 0.03f;
                        sp60 = 0.1f;
                        goto block_48;
                    }
                } else {
                    sp5C = 0.03f;
                    sp60 = 0.1f;
                    sp58 = 0.33f;
                    phi_f18 = -0.06f;
                }
            } else {
                sp5C = 0.03f;
                sp60 = 0.1f;
block_48:
                sp58 = 0.33f;
                phi_f18 = -0.06f;
            }
            temp_v0_5 = temp_a2->actorCtx.actorList[2].first->unk_B88;
            if ((s32) temp_v0_5 < 0) {
                temp_f14 = ((f32) temp_v0_5 - 16384.0f) / 49152.0f;
                phi_f12 = -temp_f14;
                phi_f14 = temp_f14;
                phi_f16 = 1.0f;
            } else {
                temp_f14_2 = ((f32) temp_v0_5 + 16384.0f) / 49152.0f;
                phi_f12 = -temp_f14_2;
                phi_f14 = temp_f14_2;
                phi_f16 = 1.0f;
            }
            goto block_66;
        }
        if ((temp_v0 & 4) != 0) {
            D_801C0EE4 = 0x3F0;
            D_801C0EE8 = 0x156;
            sQuake2Context.unk8 = 2;
            sp38 = temp_a3;
            sp78 = 359.2f;
            sp70 = 0.0f;
            sp6C = 0.0f;
            sp68 = 0.0f;
            sp74 = -18.5f;
            temp_v0_6 = Quake2_GetFloorQuake(temp_a2->actorCtx.actorList[2].first);
            if (temp_v0_6 != 1) {
                if (temp_v0_6 != 2) {
                    if (temp_v0_6 != 3) {
                        sp60 = 0.12f;
                        sp5C = 0.08f;
                        sp58 = 0.05f;
                    } else {
                        sp60 = 0.12f;
                        sp5C = 0.08f;
                        sp58 = 0.18f;
                    }
                } else {
                    sp60 = 0.12f;
                    sp58 = 0.12f;
                    sp5C = 0.08f;
                }
            } else {
                sp60 = 0.12f;
                sp5C = 0.08f;
                sp58 = 0.08f;
            }
            temp_f0_2 = temp_a3->unk114 - temp_a3->unk60;
            phi_f18 = 0.12f;
            if (temp_f0_2 > 2000.0f) {
                phi_f2 = 1.0f;
            } else {
                phi_f2 = temp_f0_2 / 2000.0f;
            }
            temp_f14_3 = (phi_f2 * 0.15f) + 0.35f + (sp34 * 0.4f);
            phi_f12 = 0.9f - temp_f14_3;
            phi_f14 = temp_f14_3;
            phi_f16 = temp_f14_3;
            goto block_66;
        }
        if ((temp_v0 & 1) != 0) {
            D_801C0EE4 = 0x3F0;
            D_801C0EE8 = 0x156;
            sQuake2Context.unk8 = 2;
            sp60 = 0.01f;
            sp5C = 0.01f;
            sp74 = 150.0f;
            sp78 = 0.0f;
            sp70 = 0.0f;
            sp6C = 0.0f;
            sp68 = 0.0f;
            sp58 = 0.6f;
            phi_f12 = 1.0f;
            phi_f14 = 1.0f;
            phi_f16 = 1.0f;
            phi_f18 = -0.01f;
block_66:
            sp88 = phi_f12;
            sp8C = phi_f14;
            sp84 = phi_f16;
            sp64 = phi_f18;
            temp_t9 = D_801C0EE4 + (s32) ((sp78 * 182.04167f) + 0.5f);
            D_801C0EE4 = temp_t9;
            D_801C0EE8 = D_801C0EE8 + (s32) ((sp74 * 182.04167f) + 0.5f);
            sp24 = Math_CosS(temp_t9);
            sp28 = Math_SinS(D_801C0EE4);
            View_SetQuakeRotation(sQuake2Context.unk0 + 0xB8, sp24 * (sp70 * 0.017453292f * phi_f14), sp28 * (sp6C * 0.017453292f * phi_f14), Math_SinS(D_801C0EE8) * (sp68 * 0.017453292f * phi_f12));
            sp24 = Math_SinS(D_801C0EE8);
            sp28 = Math_CosS(D_801C0EE8);
            View_SetQuakeScale(sQuake2Context.unk0 + 0xB8, (sp24 * (phi_f18 * phi_f14)) + 1.0f, (sp28 * (sp60 * phi_f14)) + 1.0f, (Math_CosS(D_801C0EE4) * (sp5C * phi_f12)) + 1.0f);
            View_SetQuakeSpeed(sQuake2Context.unk0 + 0xB8, sp58 * phi_f16);
            sQuake2Context.unkA = 1;
            goto block_69;
        }
    } else {
        if (sQuake2Context.unkA != 0) {
            View_ClearQuake(temp_a2 + 0xB8);
            sQuake2Context.unkA = 0;
            sQuake2Context.unk8 = 0;
        }
block_69:
        temp_v0_7 = sQuake2Context.unk8;
        if (temp_v0_7 != 0) {
            sQuake2Context.unk8 = (s16) (temp_v0_7 - 1);
            if (sQuake2Context.unk8 == 0) {
                sQuake2Context.unk4 = 0;
            }
        }
    }
}

s32 Quake_NumActiveQuakes(void) {
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s32 phi_v1_4;

    phi_v1_4 = 0;
    if (sQuakeRequest->callbackIdx != 0) {
        phi_v1_4 = 1;
    }
    phi_v1_3 = phi_v1_4;
    if (*(sQuakeRequest + 0x2C) != 0) {
        phi_v1_3 = phi_v1_4 + 1;
    }
    phi_v1_2 = phi_v1_3;
    if (*(sQuakeRequest + 0x50) != 0) {
        phi_v1_2 = phi_v1_3 + 1;
    }
    phi_v1 = phi_v1_2;
    if (*(sQuakeRequest + 0x74) != 0) {
        phi_v1 = phi_v1_2 + 1;
    }
    return phi_v1;
}
