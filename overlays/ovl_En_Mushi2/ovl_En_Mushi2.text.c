s32 func_800C9EBC(GlobalContext *, s32, f32, f32, f32 *, ? *, ? *); /* extern */
void func_80A687A0(EnMushi2 *arg0);                 /* static */
void func_80A68808(EnMushi2 *arg0);                 /* static */
s32 func_80A68860(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A68910(EnMushi2 *arg0, GlobalContext *arg1); /* static */
void func_80A68A78(EnMushi2 *arg0, GlobalContext *arg1); /* static */
void func_80A68B3C(EnMushi2 *arg0);                 /* static */
void func_80A68B6C(EnMushi2 *arg0);                 /* static */
s32 func_80A68BA0(EnMushi2 *arg0, EnMushi2 *);      /* static */
void func_80A68BC8(Actor *arg0);                    /* static */
s32 func_80A68C5C(Vec3f *arg0, Vec3f *arg1);        /* static */
s32 func_80A68CE4(Vec3f *arg0, Vec3f *arg1, f32 arg2, f32); /* static */
s32 func_80A68DD4(EnMushi2 *arg0, GlobalContext *arg1); /* static */
void func_80A68ED8(Actor *arg0, EnMushi2 *);        /* static */
void func_80A68F24(EnMushi2 *arg0);                 /* static */
? func_80A68F9C(EnMushi2 *arg0, s16 arg1);          /* static */
? func_80A690C4(EnMushi2 *arg0, s16 arg1);          /* static */
s32 func_80A691EC(EnMushi2 *arg0, CollisionPoly *arg1, f32 arg2); /* static */
void func_80A69388(EnMushi2 *arg0);                 /* static */
void func_80A69424(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A69468(EnMushi2 *arg0, GlobalContext *arg1); /* static */
s32 func_80A6958C(EnMushi2 *arg0, GlobalContext *arg1); /* static */
? func_80A6969C(EnMushi2 *arg0, GlobalContext *arg1); /* static */
void func_80A697C4(EnMushi2 *arg0, GlobalContext *arg1); /* static */
s32 func_80A699E4(EnMushi2 *arg0, GlobalContext *arg1); /* static */
f32 func_80A69AA8(f32 arg0, f32 arg1, f32 arg2, void *arg3); /* static */
void func_80A69ADC(EnMushi2 *arg0);                 /* static */
void func_80A69CE0(EnMushi2 *arg0);                 /* static */
void func_80A69D3C(EnMushi2 *arg0);                 /* static */
s32 func_80A69EE4(EnMushi2 *arg0, GlobalContext *arg1); /* static */
void func_80A69F5C(EnMushi2 *arg0, GlobalContext *arg1); /* static */
? func_80A6A024(EnMushi2 *arg0);                    /* static */
? func_80A6A058(EnMushi2 *arg0);                    /* static */
? func_80A6A094(EnMushi2 *arg0);                    /* static */
void func_80A6A0D8(EnMushi2 *arg0);                 /* static */
void func_80A6A300(EnMushi2 *arg0);                 /* static */
void func_80A6A508(EnMushi2 *arg0);                 /* static */
void func_80A6A794(EnMushi2 *arg0);                 /* static */
void func_80A6A984(EnMushi2 *arg0);                 /* static */
void func_80A6AAA4(EnMushi2 *arg0);                 /* static */
void func_80A6AE14(EnMushi2 *arg0);                 /* static */
void func_80A6B078(EnMushi2 *arg0);                 /* static */
extern SkeletonHeader D_040527A0;
static ColliderJntSphElementInit D_80A6B950 = {{0, {0, 0, 0}, {0, 0, 0}, 0, 0, 1}, {0, {{0, 0, 0}, 5}, 0x64}};
static ColliderJntSphInit D_80A6B974 = {{0xA, 0, 0, 0x19, 0x10, 0}, 1, &D_80A6B950};
static ? D_80A6B984;                                /* unable to generate initializer */
static ? D_80A6B98C;                                /* unable to generate initializer */
static s32 D_80A6B994 = 0;
static ? D_80A6B998;                                /* unable to generate initializer */
static Vec3f D_80A6B9A0 = {1.0f, 0.0f, 0.0f};
static Vec3f D_80A6B9AC = {0.0f, 1.0f, 0.0f};
static Vec3f D_80A6B9B8 = {0.0f, 0.0f, 1.0f};
static MtxF D_80A6B9C4 = {
    {
        {0.0f, 0.0f, 0.0f, 0.0f},
        {0.0f, 0.0f, 0.0f, 0.0f},
        {0.0f, 0.0f, 0.0f, 0.0f},
        {0.0f, 0.0f, 0.0f, 0.0f},
    },
};
static InitChainEntry D_80A6BA04;                   /* unable to generate initializer */
static ? D_80A6BA14;                                /* unable to generate initializer */

typedef struct EnMushi2 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0x8A];                 /* maybe part of unk188[24]? */
    /* 0x0218 */ Vec3s unk218;                      /* inferred */
    /* 0x021E */ char pad21E[0x8A];                 /* maybe part of unk218[24]? */
    /* 0x02A8 */ SkelAnime unk2A8;                  /* inferred */
    /* 0x02BA */ u8 unk2BA;                         /* overlap; inferred */
    /* 0x02BB */ char pad2BB[0x4D];                 /* maybe part of unk2BA[78]? */
    /* 0x0308 */ void (*actionFunc)(EnMushi2 *, GlobalContext *);
    /* 0x030C */ s32 unk30C;                        /* inferred */
    /* 0x0310 */ f32 unk310;                        /* inferred */
    /* 0x0314 */ f32 unk314;                        /* inferred */
    /* 0x0318 */ f32 unk318;                        /* inferred */
    /* 0x031C */ f32 unk31C;                        /* inferred */
    /* 0x0320 */ f32 unk320;                        /* inferred */
    /* 0x0324 */ f32 unk324;                        /* inferred */
    /* 0x0328 */ f32 unk328;                        /* inferred */
    /* 0x032C */ f32 unk32C;                        /* inferred */
    /* 0x0330 */ f32 unk330;                        /* inferred */
    /* 0x0334 */ CollisionPoly *unk334;             /* inferred */
    /* 0x0338 */ s32 unk338;                        /* inferred */
    /* 0x033C */ char pad33C[0xC];                  /* maybe part of unk338[4]? */
    /* 0x0348 */ f32 unk348;                        /* inferred */
    /* 0x034C */ Actor *unk34C;                     /* inferred */
    /* 0x0350 */ f32 unk350;                        /* inferred */
    /* 0x0354 */ f32 unk354;                        /* inferred */
    /* 0x0358 */ f32 unk358;                        /* inferred */
    /* 0x035C */ f32 unk35C;                        /* inferred */
    /* 0x0360 */ f32 unk360;                        /* inferred */
    /* 0x0364 */ s16 unk364;                        /* inferred */
    /* 0x0366 */ s16 unk366;                        /* inferred */
    /* 0x0368 */ s16 unk368;                        /* inferred */
    /* 0x036A */ s16 unk36A;                        /* inferred */
    /* 0x036C */ char pad36C[0x2];                  /* maybe part of unk36A[2]? */
    /* 0x036E */ s16 unk36E;                        /* inferred */
    /* 0x0370 */ s16 unk370;                        /* inferred */
    /* 0x0372 */ char pad372[0x2];                  /* maybe part of unk370[2]? */
} EnMushi2;                                         /* size 0x374 */

void func_80A687A0(EnMushi2 *arg0) {
    MtxF *temp_v0;

    temp_v0 = SysMatrix_GetCurrentState();
    temp_v0->mf[3][0] += arg0->unk348 * arg0->unk31C;
    temp_v0->mf[3][1] += arg0->unk348 * arg0->unk320;
    temp_v0->mf[3][2] += arg0->unk348 * arg0->unk324;
}

void func_80A68808(EnMushi2 *arg0) {
    SysMatrix_SetStateRotationAndTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, arg0 + 0xBC);
    Matrix_Scale(arg0->actor.scale.x, arg0->actor.scale.y, arg0->actor.scale.z, 1);
    Collider_UpdateSpheres(0, arg0 + 0x2A8);
}

s32 func_80A68860(Actor *arg0, GlobalContext *arg1) {
    s32 sp40;
    CollisionPoly *sp3C;
    WaterBox *sp34;
    f32 sp30;
    CollisionContext *sp2C;
    CollisionContext *temp_a0;
    f32 temp_f0;

    temp_a0 = arg1 + 0x830;
    sp2C = temp_a0;
    temp_f0 = func_800C411C(temp_a0, &sp3C, &sp40, arg0, arg0 + 0x24);
    if ((temp_f0 > -31999.0f) && ((arg0->world.pos.y - 150.0f) < temp_f0)) {
        return 1;
    }
    return func_800CA1E8(arg1, sp2C, arg0->world.pos.x, arg0->world.pos.z, &sp30, &sp34);
}

s32 func_80A68910(EnMushi2 *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f2;
    s32 temp_s2;
    void *temp_s0;
    void *temp_s0_2;
    void *phi_s0;
    f32 phi_f20;
    s32 phi_s6;
    s32 phi_s6_2;

    temp_s0 = arg1->actorCtx.actorList[7].first;
    arg0->unk34C = NULL;
    phi_s0 = temp_s0;
    phi_f20 = 10000.0f;
    phi_s6 = 0;
    phi_s6_2 = 0;
    if (temp_s0 != 0) {
        do {
            if ((phi_s0->id == 0x91) && ((temp_s2 = ((s32) phi_s0->params >> 0xE) & 3, (temp_s2 == 1)) || (temp_s2 == 2)) && (arg0->actor.room == phi_s0->room)) {
                temp_f0 = Math3D_XZDistanceSquared(arg0->actor.world.pos.x, arg0->actor.world.pos.z, phi_s0->world.pos.x, phi_s0->world.pos.z);
                temp_f2 = phi_s0->world.pos.y - arg0->actor.world.pos.y;
                if ((temp_f0 < phi_f20) && (temp_f2 < 100.0f) && (temp_f2 > -50.0f)) {
                    temp_f20 = temp_f0;
                    arg0->unk34C = phi_s0;
                    phi_s6_2 = 1;
                    if (temp_s2 == 1) {
                        arg0->unk350 = 900.0f;
                        phi_f20 = temp_f20;
                    } else {
                        arg0->unk350 = 1521.0f;
                        phi_f20 = temp_f20;
                    }
                }
            }
            temp_s0_2 = phi_s0->next;
            phi_s0 = temp_s0_2;
            phi_s6 = phi_s6_2;
        } while (temp_s0_2 != 0);
    }
    return phi_s6;
}

void func_80A68A78(EnMushi2 *arg0, GlobalContext *arg1) {
    ? *temp_s1;
    ? *phi_s1;

    phi_s1 = &D_80A6B998;
    do {
        Actor_SpawnAsChildAndCutscene(arg1 + 0x1CA0, arg1, 0x17B, arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, (s16) (s32) arg0->actor.shape.rot.x, (s16) (arg0->actor.shape.rot.y + phi_s1->unk2), (s16) (s32) arg0->actor.shape.rot.z, (s32) phi_s1->unk0, (u32) arg0->actor.cutscene, (s32) arg0->actor.unk20, NULL);
        temp_s1 = phi_s1 + 4;
        phi_s1 = temp_s1;
    } while (temp_s1 != &D_80A6B9A0);
}

void func_80A68B3C(EnMushi2 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk30C;
    if ((temp_v0 & 0x100) == 0) {
        arg0->unk30C = temp_v0 | 0x100;
        D_80A6B994 += 1;
    }
}

void func_80A68B6C(EnMushi2 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk30C;
    if ((temp_v0 & 0x100) != 0) {
        arg0->unk30C = temp_v0 & ~0x100;
        D_80A6B994 += -1;
    }
}

s32 func_80A68BA0(EnMushi2 *arg0) {
    s32 temp_v0;
    s32 phi_v0;

    temp_v0 = (D_80A6B994 < 4) ^ 1;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        phi_v0 = arg0->unk34C == 0;
    }
    return phi_v0;
}

void func_80A68BC8(Actor *arg0) {
    f32 temp_f0;
    s16 temp_v0;
    f32 phi_f2;

    temp_v0 = arg0->unk36C;
    if ((s32) temp_v0 > 0) {
        arg0->unk36C = (s16) (temp_v0 - 1);
        return;
    }
    Audio_PlayActorSound2(arg0, 0x39F0U);
    temp_f0 = arg0->unk160;
    if (temp_f0 < 0.12f) {
        phi_f2 = 0.12f;
    } else {
        phi_f2 = temp_f0;
    }
    arg0->unk36C = (s16) (s32) (3.0f / phi_f2);
    if ((s32) arg0->unk36C < 2) {
        arg0->unk36C = 2;
    }
}

s32 func_80A68C5C(Vec3f *arg0, Vec3f *arg1) {
    f32 temp_f0;
    f32 temp_f2;

    temp_f0 = Math3D_Vec3fMagnitude(arg0);
    if (temp_f0 < 0.005f) {
        Math_Vec3f_Copy(arg0, &D_801D15B0);
        return 0;
    }
    temp_f2 = 1.0f / temp_f0;
    arg1->x = arg0->x * temp_f2;
    arg1->y = arg0->y * temp_f2;
    arg1->z = arg0->z * temp_f2;
    return 1;
}

s32 func_80A68CE4(Vec3f *arg0, Vec3f *arg1, f32 arg2) {
    Vec3f sp34;
    Vec3f *temp_a0;
    f32 temp_f0;
    f32 temp_f2;

    Math_Vec3f_Diff(arg1, arg0, &sp34);
    temp_f0 = Math3D_LengthSquared(&sp34);
    temp_f2 = arg2 + 0.01f;
    if (temp_f0 <= (temp_f2 * temp_f2)) {
        Math_Vec3f_Copy(arg0, arg1);
        return 1;
    }
    Math_Vec3f_Scale(&sp34, arg2 / sqrtf(temp_f0));
    temp_a0 = &sp34;
    sp34.x += arg0->x;
    sp34.y += arg0->y;
    sp34.z += arg0->z;
    if (func_80A68C5C(temp_a0, arg0) != 0) {
        return 0;
    }
    Math_Vec3f_Copy(arg0, arg1);
    return -1;
}

s32 func_80A68DD4(EnMushi2 *arg0, GlobalContext *arg1) {
    void *sp30;
    s16 sp2E;
    f32 sp24;
    f32 temp_f0;
    s16 temp_a0;

    if ((arg0->actor.xzDistToPlayer < 32.0f) && (temp_f0 = arg0->actor.yDistToPlayer, (temp_f0 > -10.0f)) && (temp_f0 < 31.0f) && (sp30 = arg1->actorCtx.actorList[2].first, temp_a0 = arg0->actor.yawTowardsPlayer + 0x8000, sp2E = temp_a0, sp24 = Math_SinS(temp_a0), (Math3D_XZDistanceSquared((sp24 * 16.0f) + sp30->world.pos.x, (Math_CosS(temp_a0) * 16.0f) + sp30->world.pos.z, arg0->actor.world.pos.x, arg0->actor.world.pos.z) < 400.0f))) {
        return 1;
    }
    return 0;
}

void func_80A68ED8(Actor *arg0) {
    f32 temp_f0;

    temp_f0 = arg0->speedXZ;
    arg0->velocity.x = temp_f0 * arg0->unk328;
    arg0->velocity.y = temp_f0 * arg0->unk32C;
    arg0->velocity.z = temp_f0 * arg0->unk330;
    Actor_ApplyMovement(arg0);
}

void func_80A68F24(EnMushi2 *arg0) {
    Matrix_RotateY(arg0->actor.shape.rot.y, 0U);
    SysMatrix_InsertXRotation_s(arg0->actor.shape.rot.x, 1);
    SysMatrix_InsertZRotation_s(arg0->actor.shape.rot.z, 1);
    SysMatrix_MultiplyVector3fByState(&D_80A6B9A0, arg0 + 0x310);
    SysMatrix_MultiplyVector3fByState(&D_80A6B9AC, arg0 + 0x31C);
    SysMatrix_MultiplyVector3fByState(&D_80A6B9B8, arg0 + 0x328);
}

? func_80A68F9C(EnMushi2 *arg0, s16 arg1) {
    MtxF *sp1C;
    MtxF *temp_v0;

    if (arg1 == 0) {
        return 0;
    }
    arg0 = arg0;
    arg1 = arg1;
    temp_v0 = SysMatrix_GetCurrentState();
    temp_v0->mf[0][0] = arg0->unk310;
    temp_v0->mf[0][1] = arg0->unk314;
    temp_v0->mf[0][3] = 0.0f;
    temp_v0->mf[0][2] = arg0->unk318;
    temp_v0->mf[1][0] = arg0->unk31C;
    temp_v0->mf[1][1] = arg0->unk320;
    temp_v0->mf[1][3] = 0.0f;
    temp_v0->mf[1][2] = arg0->unk324;
    temp_v0->mf[2][0] = arg0->unk328;
    temp_v0->mf[2][1] = arg0->unk32C;
    temp_v0->mf[2][3] = 0.0f;
    temp_v0->mf[3][0] = 0.0f;
    temp_v0->mf[3][1] = 0.0f;
    temp_v0->mf[3][2] = 0.0f;
    temp_v0->mf[3][3] = 0.0f;
    temp_v0->mf[2][2] = arg0->unk330;
    sp1C = temp_v0;
    Matrix_RotateY(arg1, 1U);
    arg0->unk310 = sp1C->mf[0][0];
    arg0->unk314 = sp1C->mf[0][1];
    arg0->unk318 = sp1C->mf[0][2];
    arg0->unk31C = sp1C->mf[1][0];
    arg0->unk320 = sp1C->mf[1][1];
    arg0->unk324 = sp1C->mf[1][2];
    arg0->unk328 = sp1C->mf[2][0];
    arg0->unk32C = sp1C->mf[2][1];
    arg0->unk30C |= 0x40;
    arg0->unk330 = sp1C->mf[2][2];
    return 1;
}

? func_80A690C4(EnMushi2 *arg0, s16 arg1) {
    MtxF *sp1C;
    MtxF *temp_v0;

    if (arg1 == 0) {
        return 0;
    }
    arg0 = arg0;
    arg1 = arg1;
    temp_v0 = SysMatrix_GetCurrentState();
    temp_v0->mf[0][0] = arg0->unk310;
    temp_v0->mf[0][1] = arg0->unk314;
    temp_v0->mf[0][3] = 0.0f;
    temp_v0->mf[0][2] = arg0->unk318;
    temp_v0->mf[1][0] = arg0->unk31C;
    temp_v0->mf[1][1] = arg0->unk320;
    temp_v0->mf[1][3] = 0.0f;
    temp_v0->mf[1][2] = arg0->unk324;
    temp_v0->mf[2][0] = arg0->unk328;
    temp_v0->mf[2][1] = arg0->unk32C;
    temp_v0->mf[2][3] = 0.0f;
    temp_v0->mf[3][0] = 0.0f;
    temp_v0->mf[3][1] = 0.0f;
    temp_v0->mf[3][2] = 0.0f;
    temp_v0->mf[3][3] = 0.0f;
    temp_v0->mf[2][2] = arg0->unk330;
    sp1C = temp_v0;
    SysMatrix_InsertXRotation_s(arg1, 1);
    arg0->unk310 = sp1C->mf[0][0];
    arg0->unk314 = sp1C->mf[0][1];
    arg0->unk318 = sp1C->mf[0][2];
    arg0->unk31C = sp1C->mf[1][0];
    arg0->unk320 = sp1C->mf[1][1];
    arg0->unk324 = sp1C->mf[1][2];
    arg0->unk328 = sp1C->mf[2][0];
    arg0->unk32C = sp1C->mf[2][1];
    arg0->unk30C |= 0x40;
    arg0->unk330 = sp1C->mf[2][2];
    return 1;
}

s32 func_80A691EC(EnMushi2 *arg0, CollisionPoly *arg1, f32 arg2) {
    Vec3f sp64;
    Vec3f sp58;
    Vec3f sp4C;
    Vec3f sp40;
    Vec3f sp34;
    s32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    Vec3f *sp20;
    Vec3f *temp_a0;

    if (arg2 > 0.0f) {
        sp24 = (f32) arg1->normal.x * 0.00003051851f;
        sp28 = (f32) arg1->normal.y * 0.00003051851f;
        arg2 = arg2;
        sp2C = (f32) arg1->normal.z * 0.00003051851f;
        Math_Vec3f_Copy(&sp4C, arg0 + 0x31C);
        sp30 = func_80A68CE4((bitwise Vec3f *) arg2, &sp4C, (bitwise f32) &sp24, arg2);
    } else {
        sp4C.x = (f32) arg1->normal.x * 0.00003051851f;
        sp4C.y = (f32) arg1->normal.y * 0.00003051851f;
        sp30 = 1;
        sp4C.z = (f32) arg1->normal.z * 0.00003051851f;
    }
    temp_a0 = arg0 + 0x310;
    sp20 = temp_a0;
    Math3D_CrossProduct(temp_a0, &sp4C, &sp40);
    Math3D_CrossProduct(&sp4C, &sp40, &sp64);
    if ((func_80A68C5C(&sp64, &sp58) != 0) && (func_80A68C5C(&sp40, &sp34) != 0)) {
        Math_Vec3f_Copy(arg0 + 0x31C, &sp4C);
        Math_Vec3f_Copy(sp20, &sp58);
        Math_Vec3f_Copy(arg0 + 0x328, &sp34);
        arg0->unk30C |= 0x40;
        return sp30;
    }
    return -1;
}

void func_80A69388(EnMushi2 *arg0) {
    Vec3s *sp1C;
    Vec3s *temp_a1;
    f32 temp_f8;

    temp_a1 = arg0 + 0x30;
    D_80A6B9C4.mf[0][0] = arg0->unk310;
    D_80A6B9C4.mf[0][1] = arg0->unk314;
    D_80A6B9C4.mf[0][2] = arg0->unk318;
    D_80A6B9C4.mf[1][0] = arg0->unk31C;
    D_80A6B9C4.mf[1][1] = arg0->unk320;
    D_80A6B9C4.mf[1][2] = arg0->unk324;
    D_80A6B9C4.mf[2][0] = arg0->unk328;
    D_80A6B9C4.mf[2][1] = arg0->unk32C;
    temp_f8 = arg0->unk330;
    arg0 = arg0;
    sp1C = temp_a1;
    D_80A6B9C4.mf[2][2] = temp_f8;
    func_8018219C(&D_80A6B9C4, temp_a1, 0);
    arg0->unkBC = (unaligned s32) temp_a1->unk0;
    arg0->actor.shape.rot.z = (u16) temp_a1->z;
}

void func_80A69424(Actor *arg0, GlobalContext *arg1) {
    Actor_UpdateBgCheckInfo(arg1, arg0, 8.0f, 9.0f, 0.0f, 0x45U);
}

s32 func_80A69468(EnMushi2 *arg0, GlobalContext *arg1) {
    Vec3f sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    Vec3f *sp40;
    Vec3f *temp_a1;
    f32 *temp_a0;
    f32 temp_f4;
    f32 temp_f8;

    temp_a1 = arg0 + 0x108;
    temp_a0 = &sp50;
    temp_f4 = 2.0f * arg0->unk31C;
    sp50 = temp_f4;
    sp54 = 2.0f * arg0->unk320;
    sp40 = temp_a1;
    temp_f8 = 2.0f * arg0->unk324;
    sp58 = temp_f8;
    Math_Vec3f_Sum((Vec3f *) temp_a0, temp_a1, &sp68);
    sp5C = (arg0->unk328 * 4.0f) + temp_f4 + arg0->actor.world.pos.x;
    sp60 = (arg0->unk32C * 4.0f) + sp54 + arg0->actor.world.pos.y;
    sp64 = (arg0->unk330 * 4.0f) + temp_f8 + arg0->actor.world.pos.z;
    if (func_800C55C4(arg1 + 0x830, temp_a1, (Vec3f *) &sp5C, arg0 + 0x33C, arg0 + 0x334, 1U, 1U, 1U, 1U, arg0 + 0x338) != 0) {
        arg0->unk30C |= 6;
        return 1;
    }
    return 0;
}

s32 func_80A6958C(EnMushi2 *arg0, GlobalContext *arg1) {
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 *temp_a2;

    sp48 = (2.0f * arg0->unk31C) + arg0->actor.world.pos.x;
    temp_a2 = &sp3C;
    sp4C = (2.0f * arg0->unk320) + arg0->actor.world.pos.y;
    sp50 = (2.0f * arg0->unk324) + arg0->actor.world.pos.z;
    sp3C = (arg0->unk31C * -4.0f) + arg0->actor.world.pos.x;
    sp40 = (arg0->unk320 * -4.0f) + arg0->actor.world.pos.y;
    sp44 = (arg0->unk324 * -4.0f) + arg0->actor.world.pos.z;
    if (func_800C55C4(arg1 + 0x830, (Vec3f *) &sp48, (Vec3f *) temp_a2, arg0 + 0x33C, arg0 + 0x334, 1U, 1U, 1U, 1U, arg0 + 0x338) != 0) {
        arg0->unk30C |= 0xA;
        return 1;
    }
    return 0;
}

? func_80A6969C(EnMushi2 *arg0, GlobalContext *arg1) {
    Vec3f sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 *temp_a0;
    f32 temp_f6;

    temp_a0 = &sp38;
    temp_f6 = arg0->unk31C * -4.0f;
    sp38 = temp_f6;
    sp3C = arg0->unk320 * -4.0f;
    sp40 = arg0->unk324 * -4.0f;
    Math_Vec3f_Sum((Vec3f *) temp_a0, arg0 + 0x24, &sp50);
    sp44 = arg0->actor.prevPos.x + temp_f6 + (arg0->unk328 * -4.0f);
    sp48 = arg0->actor.prevPos.y + sp3C + (arg0->unk32C * -4.0f);
    sp4C = arg0->actor.prevPos.z + sp40 + (arg0->unk330 * -4.0f);
    if (func_800C55C4(arg1 + 0x830, &sp50, (Vec3f *) &sp44, arg0 + 0x33C, arg0 + 0x334, 1U, 1U, 1U, 1U, arg0 + 0x338) != 0) {
        arg0->unk30C |= 0x12;
        return 1;
    }
    return 0;
}

void func_80A697C4(EnMushi2 *arg0, GlobalContext *arg1) {
    CollisionPoly *sp38;
    s32 sp34;
    WaterBox *sp30;
    f32 sp2C;
    Vec3f *sp28;
    Vec3f *temp_a1;
    s32 temp_v0;

    sp38 = arg0->unk334;
    sp34 = arg0->unk338;
    temp_v0 = arg0->unk30C;
    if ((temp_v0 & 0x14) == 0) {
        arg0->unk30C = temp_v0 & ~0x4A;
        if ((func_80A69468(arg0, arg1) == 0) && (func_80A6958C(arg0, arg1) == 0)) {
            func_80A6969C(arg0, arg1);
        }
        if (func_800CA1E8(arg1, arg1 + 0x830, arg0->actor.world.pos.x, arg0->actor.world.pos.z, &sp2C, &sp30) != 0) {
            arg0->actor.yDistToWater = sp2C - arg0->actor.world.pos.y;
            if (arg0->actor.yDistToWater >= 1.0f) {
                arg0->unk30C |= 0x20;
            } else {
                arg0->unk30C &= -0x21;
            }
        } else {
            arg0->actor.yDistToWater = -32000.0f;
            arg0->unk30C &= -0x21;
        }
    }
    if ((arg0->unk30C & 4) != 0) {
        Math_Vec3f_Copy(arg0 + 0x24, arg0 + 0x33C);
        if (func_80A691EC(arg0, arg0->unk334, 0.4f) == 1) {
            arg0->unk30C &= -5;
            return;
        }
        // Duplicate return node #22. Try simplifying control flow for better match
        return;
    }
    if ((arg0->unk30C & 0x10) != 0) {
        if (func_80A691EC(arg0, arg0->unk334, 0.4f) == 1) {
            arg0->unk30C &= -0x11;
            Math_Vec3f_Copy(arg0 + 0x24, arg0 + 0x33C);
            return;
        }
        Math_Vec3f_Copy(arg0 + 0x24, arg0 + 0x108);
        return;
    }
    if ((arg0->unk30C & 8) != 0) {
        if ((arg0->unk30C & 0x20) == 0) {
            Math_Vec3f_Copy(arg0 + 0x24, arg0 + 0x33C);
            func_80A691EC(arg0, arg0->unk334, -1.0f);
            return;
        }
        // Duplicate return node #22. Try simplifying control flow for better match
        return;
    }
    if ((arg0->unk30C & 2) == 0) {
        temp_a1 = arg0 + 0x108;
        sp28 = temp_a1;
        Math_Vec3f_Copy(arg0 + 0x24, temp_a1);
        Math_Vec3f_Copy(arg0 + 0x33C, temp_a1);
        arg0->unk334 = sp38;
        arg0->unk338 = sp34;
    }
}

s32 func_80A699E4(EnMushi2 *arg0, GlobalContext *arg1) {
    WaterBox *sp40;
    f32 sp3C;
    f32 sp34;
    f32 temp_f12;

    temp_f12 = arg0->unk32C;
    if ((temp_f12 < 0.0f) && (sp34 = (2.0f * temp_f12) + arg0->actor.world.pos.y, (func_800CA1E8(arg1, arg1 + 0x830, (2.0f * arg0->unk328) + arg0->actor.world.pos.x, (2.0f * arg0->unk330) + arg0->actor.world.pos.z, &sp3C, &sp40) != 0)) && (sp34 <= sp3C)) {
        return 1;
    }
    return 0;
}

f32 func_80A69AA8(f32 arg0, f32 arg1, f32 arg2, void *arg3) {
    return -((arg3->unk0 * arg0) + (arg1 * arg3->unk4) + (arg2 * arg3->unk8));
}

void func_80A69ADC(EnMushi2 *arg0) {
    s32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    Vec3f *sp30;
    void *sp2C;
    Vec3f *temp_v1;
    f32 temp_a3_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f6;
    s32 temp_v0;
    void *temp_a3;

    temp_v0 = arg0->unk34C;
    temp_a3 = arg0 + 0x24;
    if (arg0->unk358 < 1.0f) {
        sp2C = temp_a3;
        sp48 = temp_v0;
        temp_a3_2 = func_80A69AA8(arg0->unk310, arg0->unk314, arg0->unk318, temp_a3);
        temp_v1 = temp_v0 + 0x24;
        sp30 = temp_v1;
        sp44 = Math3D_SignedDistanceFromPlane(arg0->unk310, arg0->unk314, arg0->unk318, temp_a3_2, temp_v1);
        temp_f0 = Math3D_SignedDistanceFromPlane(arg0->unk328, arg0->unk32C, arg0->unk330, func_80A69AA8(arg0->unk328, arg0->unk32C, arg0->unk330, temp_a3), sp30);
        sp40 = temp_f0;
        temp_f0_2 = Math3D_XZLength(sp44, temp_f0);
        if (fabsf(temp_f0_2) > 0.1f) {
            sp3C = temp_f0_2;
            temp_f6 = Rand_ZeroOne() * 3000.0f * (arg0->unk358 - 1.0f);
            arg0->unk364 = 0;
            arg0->unk360 = temp_f6 + (((sp40 / temp_f0_2) - 1.0f) * -1500.0f);
            if (Rand_ZeroOne() < arg0->unk358) {
                if (sp44 >= 0.0f) {
                    arg0->unk366 = 0x7D0;
                } else {
                    arg0->unk366 = -0x7D0;
                }
            } else if (Rand_Next() > 0) {
                arg0->unk366 = 0x7D0;
            } else {
                arg0->unk366 = -0x7D0;
            }
            arg0->unk366 += (s32) (((Rand_ZeroOne() * (1.0f - arg0->unk358)) - 0.5f) * 1024.0f);
            return;
        }
        arg0->unk364 = -0x8000;
        arg0->unk366 = 0;
        arg0->unk360 = 0.0f;
        // Duplicate return node #11. Try simplifying control flow for better match
    }
}

void func_80A69CE0(EnMushi2 *arg0) {
    f32 temp_f6;

    temp_f6 = Rand_ZeroOne() * 1500.0f;
    arg0->unk364 = 0;
    arg0->unk360 = temp_f6;
    if (Rand_Next() > 0) {
        arg0->unk366 = 0x7D0;
        return;
    }
    arg0->unk366 = -0x7D0;
}

void func_80A69D3C(EnMushi2 *arg0) {
    f32 sp40;
    f32 sp3C;
    void *sp28;
    f32 temp_f0;
    s16 temp_v0_2;
    s32 temp_v0;
    void *temp_a3;
    s16 phi_a1;
    s16 phi_v1;

    if ((arg0->unk34C != 0) && (temp_a3 = arg0 + 0x24, (arg0->unk358 > 0.999f))) {
        sp28 = temp_a3;
        sp40 = Math3D_SignedDistanceFromPlane(arg0->unk310, arg0->unk314, arg0->unk318, func_80A69AA8(arg0->unk310, arg0->unk314, arg0->unk318, temp_a3), arg0->unk34C + 0x24);
        temp_f0 = Math3D_SignedDistanceFromPlane(arg0->unk328, arg0->unk32C, arg0->unk330, func_80A69AA8(arg0->unk328, arg0->unk32C, arg0->unk330, temp_a3), arg0->unk34C + 0x24);
        sp3C = temp_f0;
        if (fabsf(Math3D_XZLengthSquared(sp40, temp_f0)) > 0.010000001f) {
            temp_v0 = Math_FAtan2F(sp3C, sp40);
            if (temp_v0 < -0xBB8) {
                phi_a1 = -0xBB8;
            } else {
                phi_v1 = (s16) temp_v0;
                if (temp_v0 >= 0xBB9) {
                    phi_v1 = 0xBB8;
                }
                phi_a1 = phi_v1;
            }
            func_80A68F9C(arg0, phi_a1);
            return;
        }
        // Duplicate return node #16. Try simplifying control flow for better match
        return;
    }
    temp_v0_2 = arg0->unk366;
    arg0->unk364 += temp_v0_2;
    if ((s32) temp_v0_2 >= 0) {
        if ((s32) arg0->unk364 < 0) {
            arg0->unk364 = -0x8000;
            goto block_14;
        }
    } else if ((s32) arg0->unk364 > 0) {
        arg0->unk364 = -0x8000;
block_14:
    }
    func_80A68F9C(arg0, (s16) (s32) (Math_SinS(arg0->unk364) * arg0->unk360));
}

s32 func_80A69EE4(EnMushi2 *arg0, GlobalContext *arg1) {
    ? sp30;
    f32 sp2C;
    ? sp28;

    if ((func_800C9EBC(arg1, arg1 + 0x830, arg0->actor.world.pos.x, arg0->actor.world.pos.z, &sp2C, &sp30, &sp28) != 0) && (arg0->actor.world.pos.y < sp2C)) {
        return 1;
    }
    return 0;
}

void func_80A69F5C(EnMushi2 *arg0, GlobalContext *arg1) {
    s32 temp_s0;
    s32 phi_s0;

    phi_s0 = 0;
    do {
        EffectSsBubble_Spawn(arg1, arg0 + 0x24, -10.0f, 10.0f, 10.0f, (Rand_ZeroOne() * 0.09f) + 0.05f);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 7);
}

? func_80A6A024(EnMushi2 *arg0) {
    void *temp_v0;

    temp_v0 = arg0->unk34C;
    if ((temp_v0 != 0) && (temp_v0->unk1E4 == 0)) {
        temp_v0->unk1E4 = 1;
        return 1;
    }
    return 0;
}

? func_80A6A058(EnMushi2 *arg0) {
    void *temp_v0;

    temp_v0 = arg0->unk34C;
    if ((temp_v0 != 0) && (temp_v0->unk1E4 == 2)) {
        temp_v0->unk1E0 = (s8) (temp_v0->unk1E0 + 1);
        return 1;
    }
    return 0;
}

? func_80A6A094(EnMushi2 *arg0) {
    s32 temp_a0;
    void *temp_v0;

    temp_v0 = arg0->unk34C;
    if ((temp_v0 != 0) && ((temp_a0 = temp_v0->unk1E4, (temp_a0 == 2)) || (temp_a0 == 1))) {
        temp_v0->unk1E4 = 4;
        return 1;
    }
    return 0;
}

void func_80A6A0D8(EnMushi2 *arg0) {
    if (arg0->unk34C != 0) {
        arg0->unk34C = NULL;
    }
}

void EnMushi2_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnMushi2 *this = (EnMushi2 *) thisx;
    s32 sp3C;
    SkelAnime *sp34;
    SkelAnime *temp_a1;
    SkelAnime *temp_a1_2;
    s16 temp_v1;
    s32 temp_v0;

    Actor_ProcessInitChain(&this->actor, &D_80A6BA04);
    if ((this->actor.params & 3) == 0) {
        func_80A68A78(this, globalCtx);
    }
    this->actor.shape.rot.y += Rand_S16Offset(-0x7D0, 0xFA0);
    temp_v1 = this->actor.shape.rot.y;
    this->actor.home.rot.y = temp_v1;
    this->actor.world.rot.y = temp_v1;
    func_80A68F24(this);
    temp_a1 = &this->unk144;
    sp34 = temp_a1;
    SkelAnime_Init(globalCtx, temp_a1, &D_040527A0, (AnimationHeader *) &D_0405140C, &this->unk188, &this->unk218, 0x18);
    SkelAnime_ChangeAnim(sp34, (AnimationHeader *) &D_0405140C, 1.0f, 0.0f, 0.0f, (u8) 1, 0.0f);
    temp_a1_2 = &this->unk2A8;
    sp34 = temp_a1_2;
    Collider_InitJntSph(globalCtx, (ColliderJntSph *) temp_a1_2);
    Collider_SetJntSph(globalCtx, (ColliderJntSph *) temp_a1_2, &this->actor, &D_80A6B974, (ColliderJntSphElement *) &this->unk2A8.limbDrawTbl);
    func_80A68808(this);
    this->actor.colChkInfo.mass = 0x1E;
    temp_v0 = func_80A69EE4(this, globalCtx);
    sp3C = temp_v0;
    if ((temp_v0 == 0) && (func_80A68860(&this->actor, globalCtx) != 0) && (func_80A68910(this, globalCtx) != 0) && ((this->actor.params & 3) == 0)) {
        func_80A6A024(this);
    }
    this->unk358 = 0.0f;
    this->unk36A = Rand_S16Offset(0xF0, 0x28);
    this->unk30C = 1;
    if (sp3C != 0) {
        func_80A69F5C(this, globalCtx);
        this->actor.world.rot.y = (s16) (Rand_Next() >> 0x10);
        func_80A6AE14(this);
    } else {
        func_80A6A300(this);
    }
    func_80A68B3C(this);
}

void EnMushi2_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnMushi2 *this = (EnMushi2 *) thisx;
    Collider_DestroyJntSph(globalCtx, (ColliderJntSph *) &this->unk2A8);
    func_80A68B6C(this);
}

void func_80A6A300(EnMushi2 *arg0) {
    arg0->unk368 = 0x64;
    arg0->actor.gravity = -0.25f;
    arg0->actor.minVelocityY = -3.5f;
    arg0 = arg0;
    arg0->unk370 = Rand_S16Offset(-0x3E8, 0x7D0);
    arg0->actionFunc = func_80A6A36C;
    arg0->unk144.animPlaybackSpeed = 1.5f;
}

void func_80A6A36C(EnMushi2 *this, GlobalContext *globalCtx) {
    s32 sp20;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    u16 temp_v0;

    sp20 = 0;
    Math_StepToF(&this->actor.speedXZ, 0.0f, 0.2f);
    temp_f0 = this->actor.velocity.y;
    this->actor.velocity.y = temp_f0 - (temp_f0 * *(&D_80A6BA14 + ((this->actor.params & 3) * 4)));
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    func_80A69424(&this->actor, globalCtx);
    temp_f0_2 = this->actor.floorHeight;
    temp_f2 = this->actor.world.pos.y;
    this->actor.shape.rot.y += this->unk370;
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if ((temp_f0_2 < temp_f2) && (temp_f2 < (temp_f0_2 + 4.0f))) {
        Math_ScaledStepToS(&this->actor.shape.rot.x, 0, 0x1770);
        this->actor.shape.rot.z += Rand_S16Offset(-0x7D0, 0xFA0);
    }
    if (this->actor.floorHeight <= -31999.0f) {
        sp20 = 1;
        func_80A6A094(this);
        func_80A6A0D8(this);
    }
    if ((sp20 != 0) && ((s32) this->unk36A <= 0)) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    temp_v0 = this->actor.bgCheckFlags;
    if ((temp_v0 & 0x20) != 0) {
        func_80A6AAA4(this);
        return;
    }
    if ((temp_v0 & 1) != 0) {
        Audio_PlayActorSound2(&this->actor, 0x39A0U);
        func_80A68F24(this);
        func_80A691EC(this, this->actor.floorPoly, -1.0f);
        func_80A69388(this);
        func_80A6A508(this);
    }
}

void func_80A6A508(EnMushi2 *arg0) {
    if ((s32) arg0->unk36A >= 0x65) {
        arg0->unk35C = Rand_ZeroOne() + 1.0f;
    } else {
        arg0->unk35C = (Rand_ZeroOne() * 0.8f) + 1.5f;
    }
    arg0->unk368 = Rand_S16Offset(0xA, 0x1E);
    if (arg0->unk34C == 0) {
        func_80A69CE0(arg0);
    } else {
        func_80A69ADC(arg0);
    }
    arg0->actionFunc = func_80A6A5C0;
}

void func_80A6A5C0(EnMushi2 *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_v0;
    f32 phi_f2;

    func_80A69D3C(this);
    Math_SmoothStepToF(&this->actor.speedXZ, this->unk35C, 0.1f, 0.5f, 0.0f);
    temp_f2 = this->unk354;
    if (temp_f2 < 1600.0f) {
        this->actor.speedXZ *= 1.0f - ((1600.0f - temp_f2) * 0.0000625f);
    }
    func_80A68ED8((bitwise Actor *) 1600.0f, this);
    func_80A697C4(this, globalCtx);
    if ((this->unk30C & 0x40) != 0) {
        func_80A69388(this);
    }
    this->unk144.animPlaybackSpeed = this->actor.speedXZ * 1.6f;
    temp_f0 = this->unk144.animPlaybackSpeed;
    phi_f2 = 0.1f;
    if (temp_f0 < 0.1f) {

    } else if (temp_f0 > 1.9f) {
        phi_f2 = 1.9f;
    } else {
        phi_f2 = temp_f0;
    }
    this->unk144.animPlaybackSpeed = phi_f2;
    if (((s32) this->unk36A <= 0) || (func_80A68BA0(this) != 0)) {
        func_80A6B078(this);
        return;
    }
    temp_v0 = this->unk30C;
    if ((temp_v0 & 2) == 0) {
        func_80A6A984(this);
        return;
    }
    if ((temp_v0 & 0x20) != 0) {
        func_80A6AAA4(this);
        return;
    }
    if ((s32) this->unk368 <= 0) {
        func_80A6A794(this);
        return;
    }
    if (((globalCtx->gameplayFrames & 1) != 0) && (func_80A699E4(this, globalCtx) != 0)) {
        func_80A6A984(this);
    }
}

void func_80A6A794(EnMushi2 *arg0) {
    f32 temp_f10;
    s16 phi_v0;

    if (arg0->unk354 < 1600.0f) {
        arg0 = arg0;
        phi_v0 = Rand_S16Offset(2, 4);
    } else {
        arg0 = arg0;
        phi_v0 = Rand_S16Offset(5, 0xA);
    }
    arg0->unk368 = phi_v0;
    arg0 = arg0;
    temp_f10 = Rand_ZeroOne() * 0.4f;
    arg0->actionFunc = func_80A6A824;
    arg0->unk35C = temp_f10;
}

void func_80A6A824(EnMushi2 *this, GlobalContext *globalCtx) {
    f32 temp_f2;
    s32 temp_v0;
    f32 phi_f0;
    EnMushi2 *phi_f12;

    Math_SmoothStepToF(&this->actor.speedXZ, this->unk35C, 0.1f, 0.5f, 0.0f);
    func_80A68ED8(&this->actor);
    func_80A697C4(this, globalCtx);
    if ((this->unk30C & 0x40) != 0) {
        func_80A69388(this);
    }
    this->unk144.animPlaybackSpeed = (Rand_ZeroOne() * 0.8f) + (this->actor.speedXZ * 1.2f);
    temp_f2 = this->unk144.animPlaybackSpeed;
    phi_f12 = (bitwise EnMushi2 *) 0.0f;
    if (temp_f2 < 0.0f) {
        this->unk144.animPlaybackSpeed = 0.0f;
    } else {
        phi_f12 = (bitwise EnMushi2 *) 1.9f;
        if (temp_f2 > 1.9f) {
            phi_f0 = 1.9f;
        } else {
            phi_f0 = temp_f2;
        }
        this->unk144.animPlaybackSpeed = phi_f0;
    }
    if (((s32) this->unk36A <= 0) || (func_80A68BA0(phi_f12, this) != 0)) {
        func_80A6B078(this);
        return;
    }
    temp_v0 = this->unk30C;
    if ((temp_v0 & 2) == 0) {
        func_80A6A984(this);
        return;
    }
    if ((temp_v0 & 0x20) != 0) {
        func_80A6AAA4(this);
        return;
    }
    if ((s32) this->unk368 <= 0) {
        func_80A6A508(this);
    }
}

void func_80A6A984(EnMushi2 *arg0) {
    if ((Rand_Next() & 1) != 0) {
        arg0->unk370 = 0x800;
    } else {
        arg0->unk370 = -0x800;
    }
    arg0->unk368 = 0x11;
    arg0->actionFunc = func_80A6A9E4;
    arg0->unk144.animPlaybackSpeed = 1.2f;
}

void func_80A6A9E4(EnMushi2 *this, GlobalContext *globalCtx) {
    func_80A68F9C(this, this->unk370);
    func_80A69388(this);
    if (((s32) this->unk36A <= 0) || (func_80A68BA0(this) != 0)) {
        func_80A6B078(this);
        return;
    }
    if ((s32) this->unk368 <= 0) {
        func_80A697C4(this, globalCtx);
        if ((this->unk30C & 0x40) != 0) {
            func_80A69388(this);
        }
        if ((this->unk30C & 2) != 0) {
            func_80A6A508(this);
            return;
        }
        func_80A6B078(this);
        // Duplicate return node #9. Try simplifying control flow for better match
    }
}

void func_80A6AAA4(EnMushi2 *arg0) {
    arg0->actor.velocity.y = -1.2f;
    arg0->actor.minVelocityY = -1.2f;
    arg0->actor.gravity = -0.5f;
    arg0 = arg0;
    arg0->unk368 = Rand_S16Offset(0x78, 0x32);
    arg0->unk36E = 0;
    arg0->unk370 = 0;
    arg0->actionFunc = func_80A6AB08;
}

void func_80A6AB08(EnMushi2 *this, GlobalContext *globalCtx) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_a0;
    s16 temp_a0_2;
    s32 temp_f10;
    s32 temp_f6;
    s32 temp_v0;
    s32 temp_v0_2;
    f32 phi_f2;
    s16 phi_v0;
    s16 phi_v0_2;

    if ((s32) this->unk368 >= 0x51) {
        Math_StepToF(&this->actor.speedXZ, 0.6f, 0.08f);
    } else {
        Math_StepToF(&this->actor.speedXZ, 0.0f, 0.02f);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    func_80A69424(&this->actor, globalCtx);
    Math_StepToF(&this->actor.world.pos.y, this->actor.world.pos.y + this->actor.yDistToWater, 2.8f);
    temp_f0 = (f32) this->unk368 * 0.018f;
    this->unk144.animPlaybackSpeed = temp_f0;
    phi_f2 = 0.1f;
    if (temp_f0 < 0.1f) {

    } else {
        temp_f0_2 = this->unk144.animPlaybackSpeed;
        if (temp_f0_2 > 1.9f) {
            phi_f2 = 1.9f;
        } else {
            phi_f2 = temp_f0_2;
        }
    }
    this->unk144.animPlaybackSpeed = phi_f2;
    if ((s32) this->unk368 >= 0x51) {
        this->unk36E += Rand_S16Offset(-0x32, 0x64);
        this->unk370 += Rand_S16Offset(-0x12C, 0x258);
    }
    temp_a0 = this->unk36E;
    temp_f10 = (s32) (this->unk144.animPlaybackSpeed * 200.0f);
    temp_v0 = -(s32) (s16) temp_f10;
    phi_v0 = (s16) temp_v0;
    if ((s32) temp_a0 < temp_v0) {

    } else {
        phi_v0 = temp_a0;
        if ((s32) (s16) temp_f10 < (s32) temp_a0) {
            phi_v0 = (s16) temp_f10;
        }
    }
    this->unk36E = phi_v0;
    temp_a0_2 = this->unk370;
    temp_f6 = (s32) (this->unk144.animPlaybackSpeed * 1000.0f);
    temp_v0_2 = -(s32) (s16) temp_f6;
    phi_v0_2 = (s16) temp_v0_2;
    if ((s32) temp_a0_2 < temp_v0_2) {

    } else {
        phi_v0_2 = temp_a0_2;
        if ((s32) (s16) temp_f6 < (s32) temp_a0_2) {
            phi_v0_2 = (s16) temp_f6;
        }
    }
    this->unk370 = phi_v0_2;
    this->actor.world.rot.y += this->unk36E;
    this->actor.shape.rot.y += this->unk370;
    Math_ScaledStepToS(&this->actor.world.rot.x, 0, 0xBB8);
    this->actor.shape.rot.x = this->actor.world.rot.x;
    Math_ScaledStepToS(&this->actor.world.rot.z, 0, 0xBB8);
    this->actor.shape.rot.z = this->actor.world.rot.z;
    if (((this->actor.flags & 0x40) != 0) && (Rand_ZeroOne() < 0.03f)) {
        sp3C = this->actor.world.pos.x;
        sp40 = this->actor.world.pos.y + this->actor.yDistToWater;
        sp44 = this->actor.world.pos.z;
        EffectSsGRipple_Spawn(globalCtx, (Vec3f *) &sp3C, 0x28, 0xC8, (s16) 4);
    }
    if (((s32) this->unk368 <= 0) || ((s32) this->unk36A <= 0) || (func_80A68BA0(this) != 0)) {
        func_80A6A094(this);
        func_80A6A0D8(this);
        func_80A6AE14(this);
        return;
    }
    if ((this->actor.bgCheckFlags & 0x20) == 0) {
        func_80A6A794(this);
    }
}

void func_80A6AE14(EnMushi2 *arg0) {
    arg0->unk30C &= -2;
    arg0->unk368 = 0x64;
    arg0->actor.velocity.y = 0.0f;
    arg0->actor.minVelocityY = -0.8f;
    arg0->actor.gravity = -0.04f;
    func_80A68B6C();
    arg0->actionFunc = func_80A6AE7C;
}

void func_80A6AE7C(EnMushi2 *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f2;
    f32 phi_f0;

    this->actor.shape.rot.x += -0x1F4;
    this->actor.shape.rot.y += 0xC8;
    this->actor.speedXZ += (Rand_ZeroOne() - 0.5f) * 0.16f;
    this->actor.speedXZ *= 0.9f;
    this->actor.world.rot.y += (s32) ((Rand_ZeroOne() - 0.5f) * 2000.0f);
    this->actor.gravity = -0.04f - (Rand_ZeroOne() * 0.02f);
    this->actor.velocity.y *= 0.95f;
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    func_80A69424(&this->actor, globalCtx);
    temp_f2 = this->actor.scale.x - 0.00005f;
    if (temp_f2 < 0.001f) {
        phi_f0 = 0.001f;
    } else {
        phi_f0 = temp_f2;
    }
    Actor_SetScale(&this->actor, phi_f0);
    if ((this->actor.flags & 0x40) != 0) {
        temp_f0 = this->actor.yDistToWater;
        if ((temp_f0 > 5.0f) && (temp_f0 < 30.0f) && ((Rand_Next() & 0x1FF) < (s32) this->unk368)) {
            EffectSsBubble_Spawn(globalCtx, &this->actor.world.pos, -5.0f, 5.0f, 5.0f, ((Rand_ZeroOne() * 4.0f) + 2.0f) * this->actor.scale.x);
        }
    }
    if ((s32) this->unk368 <= 0) {
        Actor_MarkForDeath(&this->actor);
    }
}

void func_80A6B078(Actor *arg0) {
    arg0->unk30C = (s32) (arg0->unk30C & ~1);
    arg0->unk368 = 0x32;
    arg0->unk160 = 1.9f;
    Audio_PlayActorSound2(arg0, 0x39E9U);
    func_80A68B6C((EnMushi2 *) arg0);
    arg0->unk308 = func_80A6B0D8;
}

void func_80A6B0D8(EnMushi2 *this, GlobalContext *globalCtx) {
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    s32 sp44;
    f32 sp38;
    CollisionPoly *temp_a1;
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_v0_2;
    u32 temp_v0;
    f32 phi_f0;
    f32 phi_f2;

    Math_SmoothStepToF(&this->actor.speedXZ, 0.0f, 0.4f, 1.2f, 0.0f);
    temp_f2 = this->actor.scale.x - 0.0002f;
    if (temp_f2 < 0.001f) {
        phi_f0 = 0.001f;
    } else {
        phi_f0 = temp_f2;
    }
    Actor_SetScale(&this->actor, phi_f0);
    if ((s32) this->unk368 >= 0x15) {
        func_80A690C4(this, 0x160);
    }
    if ((this->unk30C & 0x40) != 0) {
        func_80A69388(this);
    }
    if ((globalCtx->gameplayFrames & 1) != 0) {
        phi_f2 = 0.6f;
    } else {
        phi_f2 = -0.6f;
    }
    temp_f0 = this->actor.speedXZ;
    this->actor.velocity.x = (temp_f0 * this->unk328) + (-0.01f * this->unk31C) + (this->unk310 * phi_f2);
    this->actor.velocity.y = (temp_f0 * this->unk32C) + (-0.01f * this->unk320) + (this->unk314 * phi_f2);
    this->actor.velocity.z = (temp_f0 * this->unk330) + (-0.01f * this->unk324) + (this->unk318 * phi_f2);
    if (((this->actor.flags & 0x40) != 0) && ((s32) this->unk368 >= 0x15) && (Rand_ZeroOne() < 0.15f)) {
        sp44 = 0;
        temp_a1 = this->unk334;
        if ((temp_a1 != 0) && ((temp_v0 = func_800C99D4(&globalCtx->colCtx, temp_a1, this->unk338), (temp_v0 == 5)) || (temp_v0 == 0xE) || (temp_v0 == 0xF))) {
            sp44 = 1;
        }
        sp48 = (this->unk328 * -0.6f) + (this->unk31C * 0.1f);
        sp4C = (this->unk32C * -0.6f) + (this->unk320 * 0.1f);
        sp50 = (this->unk330 * -0.6f) + (this->unk324 * 0.1f);
        sp38 = Rand_ZeroOne();
        temp_v0_2 = sp44 * 4;
        func_800B0E48(globalCtx, &this->actor.world.pos, (Vec3f *) &sp48, &D_801D15B0, temp_v0_2 + &D_80A6B984, temp_v0_2 + &D_80A6B98C, (s16) (s32) ((sp38 * 5.0f) + 8.0f), (s16) (s32) ((Rand_ZeroOne() * 5.0f) + 8.0f));
    }
    if ((s32) this->unk368 <= 0) {
        if ((this->unk30C & 0x80) != 0) {
            func_80A6A058(this);
            func_80A6A0D8(this);
        } else {
            func_80A6A094(this);
            func_80A6A0D8(this);
        }
        Actor_MarkForDeath(&this->actor);
    }
}

void EnMushi2_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnMushi2 *this = (EnMushi2 *) thisx;
    f32 sp4C;
    void (*sp30)(EnMushi2 *, GlobalContext *);
    PosRot *sp2C;
    Actor *temp_v0;
    Actor *temp_v0_8;
    PosRot *temp_a0;
    f32 temp_f0;
    f32 temp_v0_11;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_a1;
    void (*temp_v0_10)(EnMushi2 *, GlobalContext *);
    void (*temp_v0_4)(EnMushi2 *, GlobalContext *);
    void (*temp_v0_5)(EnMushi2 *, GlobalContext *);
    void (*temp_v0_6)(EnMushi2 *, GlobalContext *);
    void (*temp_v0_7)(EnMushi2 *, GlobalContext *);
    void *temp_v0_9;
    f32 phi_f0;
    s32 phi_v0;

    temp_v0 = this->unk34C;
    if ((temp_v0 != 0) && (temp_v0->update == 0)) {
        this->unk34C = NULL;
    }
    if (Actor_HasParent(&this->actor, globalCtx) != 0) {
        func_80A6A094(this);
        func_80A6A0D8(this);
        Actor_MarkForDeath(&this->actor);
        return;
    }
    temp_v0_2 = this->unk368;
    if ((s32) temp_v0_2 > 0) {
        this->unk368 = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk36A;
    if ((s32) temp_v0_3 > 0) {
        this->unk36A = temp_v0_3 - 1;
    }
    if ((this->unk34C != 0) && ((temp_v0_4 = this->actionFunc, (func_80A6A5C0 == temp_v0_4)) || (func_80A6A824 == temp_v0_4)) && (this->unk354 < 9.0f)) {
        this->unk30C |= 0x80;
        func_80A6B078(this);
    }
    if (this->unk354 < 4900.0f) {
        phi_f0 = 0.017f;
    } else {
        phi_f0 = 0.025f;
    }
    this->unk358 += phi_f0;
    if (this->unk358 > 1.0f) {
        this->unk358 = 1.0f;
    }
    temp_a1 = this->unk338;
    if ((temp_a1 != 0x32) && ((temp_v0_5 = this->actionFunc, (func_80A6A5C0 == temp_v0_5)) || (func_80A6A824 == temp_v0_5) || (func_80A6A9E4 == temp_v0_5) || (func_80A6B0D8 == temp_v0_5)) && (BgCheck2_UpdateActorAttachedToMesh(&globalCtx->colCtx, temp_a1, &this->actor) != 0)) {
        func_80A68F24(this);
    }
    this->actionFunc(this, globalCtx);
    if (this->actor.update != 0) {
        temp_v0_6 = this->actionFunc;
        sp30 = func_80A6A5C0;
        if ((func_80A6AB08 == temp_v0_6) || (func_80A6AE7C == temp_v0_6)) {
            this->unk30C |= 0x200;
        } else {
            this->unk30C &= -0x201;
        }
        temp_v0_7 = this->actionFunc;
        if ((sp30 == temp_v0_7) || (func_80A6A824 == temp_v0_7) || (func_80A6A9E4 == temp_v0_7)) {
            func_80A68BC8(&this->actor);
        }
        temp_v0_8 = this->unk34C;
        temp_a0 = &this->actor.world;
        if (temp_v0_8 != 0) {
            sp2C = temp_a0;
            sp4C = 0.0f;
            temp_f0 = Math3D_DistanceSquared(&temp_a0->pos, temp_v0_8 + 0x24);
            this->unk354 = temp_f0;
            if (temp_f0 < this->unk350) {
                temp_v0_9 = this->unk34C->floorPoly;
                if (fabsf(Math3D_NormalizedSignedDistanceFromPlane((f32) temp_v0_9->normal.x * 0.00003051851f, (f32) temp_v0_9->normal.y * 0.00003051851f, (f32) temp_v0_9->normal.z * 0.00003051851f, (f32) temp_v0_9->dist, &temp_a0->pos)) < 3.0f) {
                    sp4C = 1.9f;
                }
            }
            Math_StepToF(&this->unk348, sp4C, 0.7f);
        }
        SkelAnime_FrameUpdateMatrix(&this->unk144);
        if ((this->actor.flags & 0x40) != 0) {
            temp_v0_10 = this->actionFunc;
            if ((func_80A6AE7C != temp_v0_10) && (func_80A6B0D8 != temp_v0_10) && ((func_80A6A36C != temp_v0_10) || ((s32) this->unk36A < 0xDD)) && (((sp30 != temp_v0_10) && (func_80A6A824 != temp_v0_10) && (func_80A6A9E4 != temp_v0_10)) || !(this->unk358 > 0.999f) || !(this->unk354 < 400.0f))) {
                phi_v0 = 1;
                if (this->unk34C == 0) {
                    this->unk2BA |= 8;
                } else {
                    this->unk2BA &= 0xFFF7;
                    if ((this->unk358 > 0.999f) && (this->unk354 < 400.0f)) {
                        phi_v0 = 0;
                    }
                }
                if (phi_v0 != 0) {
                    temp_v0_11 = this->unk2A8.animPlaybackSpeed;
                    temp_v0_11->unk30 = (s16) (s32) this->actor.world.pos.x;
                    temp_v0_11->unk32 = (s16) (s32) this->actor.world.pos.y;
                    temp_v0_11->unk34 = (s16) (s32) this->actor.world.pos.z;
                    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk2A8);
                }
            }
        }
        if (((this->unk30C & 1) != 0) && (func_80A68DD4(this, globalCtx) != 0)) {
            func_800B8A1C(&this->actor, globalCtx, 0xBA, 60.0f, 30.0f);
        }
    }
}

void EnMushi2_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnMushi2 *this = (EnMushi2 *) thisx;
    func_80A687A0(this);
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_Draw(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, NULL, NULL, NULL);
}

