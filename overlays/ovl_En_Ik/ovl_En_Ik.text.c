s32 func_800BE184(GlobalContext *, Actor *, ?, ?, s32, s32); /* extern */
? func_800DFD04(s32, ?, ?, ?);                      /* extern */
? func_800F0590(GlobalContext *, void *, ?, ?);     /* extern */
void func_80929AF8(Actor *arg0);                    /* static */
void func_80929B6C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80929BEC(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80929C80(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80929D04(Actor *arg0);                     /* static */
void func_80929E2C(Actor *arg0, GlobalContext *, Actor *); /* static */
void func_80929E88(EnIk *arg0);                     /* static */
void func_80929F20(Actor *arg0, GlobalContext *arg1); /* static */
void func_80929FC8(Actor *arg0);                    /* static */
void func_8092A020(Actor *arg0, GlobalContext *arg1); /* static */
void func_8092A124(Actor *arg0);                    /* static */
void func_8092A188(Actor *arg0, GlobalContext *arg1); /* static */
void func_8092A28C(Actor *arg0);                    /* static */
void func_8092A33C(Actor *arg0, GlobalContext *arg1); /* static */
void func_8092A570(Actor *arg0);                    /* static */
void func_8092A5BC(Actor *arg0, GlobalContext *arg1); /* static */
void func_8092A680(Actor *arg0);                    /* static */
void func_8092A754(Actor *arg0, ? arg1);            /* static */
void func_8092A8D8(Actor *arg0);                    /* static */
void func_8092A994(Actor *arg0, ? arg1);            /* static */
void func_8092AA6C(Actor *arg0);                    /* static */
void func_8092AB14(Actor *arg0, GlobalContext *arg1); /* static */
void func_8092AB50(Actor *arg0);                    /* static */
void func_8092ABD8(Actor *arg0, GlobalContext *arg1); /* static */
void func_8092AC4C(Actor *arg0, s32 arg1);          /* static */
void func_8092ACFC(EnIk *arg0, GlobalContext *arg1); /* static */
void func_8092ADB4(Actor *arg0);                    /* static */
void func_8092AE14(Actor *arg0, GlobalContext *arg1); /* static */
void func_8092AFB4(Actor *arg0);                    /* static */
void func_8092AFD4(Actor *arg0, Actor *arg1);       /* static */
void func_8092B03C(Actor *arg0);                    /* static */
void func_8092B098(Actor *arg0, GlobalContext *arg1); /* static */
void func_8092B1B4(Actor *arg0, GlobalContext *arg1); /* static */
void func_8092B46C(EnIk *arg0, GlobalContext *arg1); /* static */
s32 func_8092B900(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_8092B93C(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_8092BC6C(EnIk *arg0, GraphicsContext **arg1); /* static */
extern AnimationHeaderCommon D_06000CE8;
extern AnimationHeaderCommon D_060015F8;
extern AnimationHeader D_06001ABC;
extern AnimationHeaderCommon D_06002484;
extern AnimationHeader D_06002E7C;
extern AnimationHeader D_0600367C;
extern AnimationHeaderCommon D_0600391C;
extern AnimationHeader D_06004A04;
extern AnimationHeader D_06005254;
extern AnimationHeader D_060057F4;
extern AnimationHeader D_06006294;
extern FlexSkeletonHeader D_060136A0;
static ? D_8092BFA0;                                /* unable to generate initializer */
static ? D_8092BFA4;                                /* unable to generate initializer */
static ? D_8092BFD8;                                /* unable to generate initializer */
static ColliderCylinderInit D_8092C01C = {
    {9, 0, 9, 0x39, 0x20, 1},
    {2, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 5, 1},
    {0x19, 0x50, 0, {0, 0, 0}},
};
static ColliderTrisElementInit D_8092C048 = {
    {
        {2, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0},
        {{{-10.0f, 14.0f, 2.0f}, {-10.0f, -6.0f, 2.0f}, {9.0f, 14.0f, 2.0f}}},
    },
    {
        {2, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0},
        {{{-10.0f, -6.0f, 2.0f}, {9.0f, -6.0f, 2.0f}, {9.0f, 14.0f, 2.0f}}},
    },
};
static ColliderTrisInit D_8092C0C0 = {{9, 0, 0xD, 0, 0x20, 2}, 2, &D_8092C048};
static ColliderQuadInit D_8092C0D0 = {
    {0xA, 0x10, 0, 0, 0x20, 3},
    {0, {0x20000000, 4, 0x40}, {0, 0, 0}, 0x81, 0, 0},
    {
        {
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
        },
    },
};
static DamageTable D_8092C120 = {
    {
        0xF0,
        0xF0,
        0,
        1,
        0xF0,
        0xF0,
        0,
        0xF0,
        2,
        1,
        3,
        0xF0,
        0xF0,
        0x41,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0,
        0,
        0,
        1,
        0xF0,
        1,
        0,
        0,
        0,
        0,
        0,
        0,
        1,
    },
};
static DamageTable D_8092C140 = {
    {
        0,
        1,
        0,
        1,
        1,
        1,
        0,
        0xF0,
        2,
        1,
        3,
        0x22,
        0x32,
        0x42,
        1,
        0,
        1,
        0,
        0,
        0,
        0,
        0,
        1,
        1,
        1,
        0,
        0,
        0,
        0,
        0,
        0,
        1,
    },
};
static CollisionCheckInfoInit D_8092C160 = {0x12, 0x19, 0x50, 0xFE};
static InitChainEntry D_8092C168;                   /* unable to generate initializer */
static void D_8092C174;                             /* unable to generate initializer */
static s32 D_8092C198 = 0;
static Vec3f D_8092C19C = {0.0f, 0.5f, 0.0f};
static ? D_8092C1A8;                                /* unable to generate initializer */
static Vec3f D_8092C1C8 = {2000.0f, -200.0f, -5200.0f};
static Vec3f D_8092C1D4 = {300.0f, -200.0f, 0.0f};
static ? D_8092C1E0;                                /* unable to generate initializer */
static Vec3f D_8092C200 = {0.53f, 0.53f, 0.53f};
ActorInit En_Ik_InitVars = {0x84, 5, 0x405, 0xD8, 0x668, EnIk_Init, EnIk_Destroy, EnIk_Update, EnIk_Draw};

typedef struct EnIk {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0xAE];                 /* maybe part of unk188[30]? */
    /* 0x023C */ Vec3s unk23C;                      /* inferred */
    /* 0x0242 */ char pad242[0xAE];                 /* maybe part of unk23C[30]? */
    /* 0x02F0 */ void (*actionFunc)(EnIk *, GlobalContext *);
    /* 0x02F4 */ u8 unk2F4;                         /* inferred */
    /* 0x02F5 */ u8 unk2F5;                         /* inferred */
    /* 0x02F6 */ s16 unk2F6;                        /* inferred */
    /* 0x02F8 */ char pad2F8[0x2];                  /* maybe part of unk2F6[2]? */
    /* 0x02FA */ s16 unk2FA;                        /* inferred */
    /* 0x02FC */ s16 unk2FC;                        /* inferred */
    /* 0x02FE */ char pad2FE[0x2];                  /* maybe part of unk2FC[2]? */
    /* 0x0300 */ s32 unk300;                        /* inferred */
    /* 0x0304 */ f32 unk304;                        /* inferred */
    /* 0x0308 */ f32 unk308;                        /* inferred */
    /* 0x030C */ f32 unk30C;                        /* inferred */
    /* 0x0310 */ Vec3f unk310;                      /* inferred */
    /* 0x031C */ char pad31C[0x90];                 /* maybe part of unk310[13]? */
    /* 0x03AC */ ColliderCylinder unk3AC;           /* inferred */
    /* 0x03F8 */ ColliderQuad unk3F8;               /* inferred */
    /* 0x0478 */ ColliderTris unk478;               /* inferred */
    /* 0x0498 */ ColliderTrisElement unk498;        /* inferred */
    /* 0x04F4 */ char pad4F4[0x80];
    /* 0x0574 */ s32 unk574;                        /* inferred */
    /* 0x0578 */ char pad578[0xF0];                 /* maybe part of unk574[61]? */
} EnIk;                                             /* size 0x668 */

void EnIk_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnIk *this = (EnIk *) thisx;
    ? *temp_s0;
    ColliderCylinder *temp_s1;
    ? *phi_s0;

    Actor_ProcessInitChain(&this->actor, &D_8092C168);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_060136A0, &D_06006294, &this->unk188, &this->unk23C, 0x1E);
    temp_s1 = &this->unk3AC;
    Collider_InitAndSetCylinder(globalCtx, temp_s1, &this->actor, &D_8092C01C);
    Collider_UpdateCylinder(&this->actor, temp_s1);
    Collider_InitAndSetTris(globalCtx, &this->unk478, &this->actor, &D_8092C0C0, &this->unk498);
    Collider_InitAndSetQuad(globalCtx, &this->unk3F8, &this->actor, &D_8092C0D0);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_8092C120, &D_8092C160);
    this->actor.params &= 0xFF;
    this->actor.params += -1;
    Effect_Add(globalCtx, &this->unk300, 2, 0U, (u8) 0, &D_8092C174);
    phi_s0 = &D_8092BFD8;
    if (D_8092C198 == 0) {
        do {
            phi_s0->unk0 = Lib_SegmentedToVirtual(phi_s0->unk0);
            phi_s0->unk4 = Lib_SegmentedToVirtual(phi_s0->unk4);
            temp_s0 = phi_s0 + 0xC;
            temp_s0->unk-4 = Lib_SegmentedToVirtual(phi_s0->unk8);
            phi_s0 = temp_s0;
        } while (temp_s0 != &En_Ik_InitVars);
        D_8092C198 = 1;
    }
    func_80929E88(this);
}

void EnIk_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnIk *this = (EnIk *) thisx;
    Collider_DestroyTris(globalCtx, &this->unk478);
    Collider_DestroyCylinder(globalCtx, &this->unk3AC);
    Collider_DestroyQuad(globalCtx, &this->unk3F8);
    Effect_Destroy(globalCtx, this->unk300);
}

void func_80929AF8(Actor *arg0) {
    arg0->unk2F5 = 0xA;
    arg0->unk308 = 0.65f;
    arg0->unk2F6 = 0x50;
    arg0->flags &= -0x401;
    arg0->unk30C = 0.97499996f;
    arg0->unk304 = 1.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x50);
}

void func_80929B6C(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk2F5 == 0xA) {
        arg0->unk2F5 = 0U;
        arg0->unk304 = 0.0f;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x310), 0xD, 2, 0.3f, 0.2f);
        arg0->flags |= 0x400;
    }
}

void func_80929BEC(Actor *arg0, GlobalContext *arg1) {
    arg0->unk304 = 4.0f;
    arg0->unk2F5 = 0x14;
    arg0->unk308 = 0.65f;
    Actor_Spawn(arg1 + 0x1CA0, arg1, 0xA2, (f32) arg0->unk3D2, (f32) arg0->unk3D4, (f32) arg0->unk3D6, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
}

s32 func_80929C80(Actor *arg0, GlobalContext *arg1) {
    if ((arg0->unk2F4 != 0) && (func_8092ABD8 != arg0->unk2F0) && (func_800BE184(arg1, arg0, 0x42C80000, 0x2710, 0x4000, (s32) arg0->shape.rot.y) != 0)) {
        func_8092AB50(arg0);
        return 1;
    }
    return 0;
}

s32 func_80929D04(Actor *arg0) {
    s16 temp_v0;
    u8 temp_a1;
    s32 phi_a2;
    s32 phi_v1;

    if ((arg0->xzDistToPlayer < 100.0f) && (fabsf(arg0->yDistToPlayer) < 150.0f)) {
        temp_a1 = arg0->unk2F4;
        phi_a2 = 0x3FFC;
        if (temp_a1 == 0) {
            phi_a2 = 0xAAA;
        }
        temp_v0 = arg0->yawTowardsPlayer - arg0->shape.rot.y;
        phi_v1 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = -(s32) temp_v0;
        }
        if (phi_a2 >= phi_v1) {
            if (Rand_ZeroOne() < 0.5f) {
                func_8092A28C(arg0);
                return 1;
            }
            func_8092A680(arg0);
            return 1;
        }
        if ((temp_a1 != 0) || ((phi_v1 >= 0x4001) && (Rand_ZeroOne() < 0.1f))) {
            func_8092A8D8(arg0);
            return 1;
        }
        goto block_14;
    }
block_14:
    return 0;
}

void func_80929E2C(Actor *arg0) {
    Actor *temp_a0;

    temp_a0 = arg0;
    if ((func_80929C80() == 0) && (arg0 = temp_a0, (func_80929D04(temp_a0) == 0))) {
        if (arg0->unk2F4 != 0) {
            func_8092A124(arg0);
            return;
        }
        func_80929FC8(arg0);
        // Duplicate return node #5. Try simplifying control flow for better match
    }
}

void func_80929E88(EnIk *arg0) {
    f32 temp_f0;

    temp_f0 = (f32) SkelAnime_GetFrameCount(&D_06002484);
    if (arg0->unk2F4 != 0) {
        arg0->unk2F6 = 0xA;
    } else {
        arg0->unk2F6 = 0;
    }
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_06002E7C, 1.0f, temp_f0, temp_f0, (u8) 2, (f32) arg0->unk2F6);
    arg0->actionFunc = func_80929F20;
    arg0->actor.speedXZ = 0.0f;
}

void func_80929F20(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk2F6;
    if ((s32) temp_v0 > 0) {
        arg0->unk2F6 = (s16) (temp_v0 - 1);
        SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
        if (arg0->unk2F6 == 0) {
            func_80929E2C(arg0, arg1);
            return;
        }
        // Duplicate return node #5. Try simplifying control flow for better match
        return;
    }
    if ((arg0->unk3BD & 2) != 0) {
        Audio_PlayActorSound2(arg0, 0x393AU);
        func_801A2E54(0x38);
        arg0->hintId = 0x35;
        arg0->unk3BD = (u8) (arg0->unk3BD & 0xFFFD);
        arg0->unk2FC = 0xC;
        func_80929FC8(arg0);
    }
}

void func_80929FC8(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06006294, -4.0f);
    arg0->unk2F0 = func_8092A020;
    arg0->speedXZ = 0.9f;
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_8092A020(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s16 temp_a1;
    s16 temp_v1;
    s32 phi_v0;
    s16 phi_a1;

    temp_a0 = arg0 + 0x144;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if ((func_801378B8(temp_a0, 0.0f) != 0) || (func_801378B8(temp_a0, 16.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x3928U);
    }
    temp_v1 = arg0->wallYaw;
    temp_a1 = temp_v1 - arg0->shape.rot.y;
    if ((arg0->bgCheckFlags & 8) != 0) {
        phi_v0 = (s32) temp_a1;
        if ((s32) temp_a1 < 0) {
            phi_v0 = -(s32) temp_a1;
        }
        if (phi_v0 >= 0x4000) {
            phi_a1 = (s16) (temp_v1 + 0x4000);
            if ((s32) arg0->yawTowardsPlayer > 0) {
                phi_a1 = (s16) (temp_v1 - 0x4000);
            }
            Math_ScaledStepToS(&arg0->shape.rot.y, phi_a1, 0x320);
        } else {
            goto block_10;
        }
    } else {
block_10:
        Math_ScaledStepToS(&arg0->shape.rot.y, arg0->yawTowardsPlayer, 0x320);
    }
    arg0->world.rot.y = arg0->shape.rot.y;
    if (func_80929C80(arg0, arg1) == 0) {
        func_80929D04(arg0);
    }
}

void func_8092A124(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_060057F4, -4.0f);
    Audio_PlayActorSound2(arg0, 0x39B3U);
    arg0->unk2F0 = func_8092A188;
    arg0->speedXZ = 2.5f;
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_8092A188(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s16 temp_a1;
    s16 temp_v1;
    s32 phi_v0;
    s16 phi_a1;

    temp_a0 = arg0 + 0x144;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if ((func_801378B8(temp_a0, 2.0f) != 0) || (func_801378B8(temp_a0, 9.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x3928U);
    }
    temp_v1 = arg0->wallYaw;
    temp_a1 = temp_v1 - arg0->shape.rot.y;
    if ((arg0->bgCheckFlags & 8) != 0) {
        phi_v0 = (s32) temp_a1;
        if ((s32) temp_a1 < 0) {
            phi_v0 = -(s32) temp_a1;
        }
        if (phi_v0 >= 0x4000) {
            phi_a1 = (s16) (temp_v1 + 0x4000);
            if ((s32) arg0->yawTowardsPlayer > 0) {
                phi_a1 = (s16) (temp_v1 - 0x4000);
            }
            Math_ScaledStepToS(&arg0->shape.rot.y, phi_a1, 0x4B0);
        } else {
            goto block_10;
        }
    } else {
block_10:
        Math_ScaledStepToS(&arg0->shape.rot.y, arg0->yawTowardsPlayer, 0x4B0);
    }
    arg0->world.rot.y = arg0->shape.rot.y;
    if (func_80929C80(arg0, arg1) == 0) {
        func_80929D04(arg0);
    }
}

void func_8092A28C(Actor *arg0) {
    f32 sp30;
    f32 phi_f0;

    arg0->speedXZ = 0.0f;
    if (arg0->unk2F4 != 0) {
        phi_f0 = 1.5f;
    } else {
        phi_f0 = 1.2f;
    }
    sp30 = phi_f0;
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_06000CE8, phi_f0, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06000CE8), (u8) 3, -4.0f);
    arg0->unk2F6 = 0;
    arg0->unk2F8 = -1;
    arg0->unk2F0 = func_8092A33C;
}

void func_8092A33C(Actor *arg0, GlobalContext *arg1) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    Actor *sp24;
    Actor *temp_a0;
    f32 temp_f0;

    arg0->unk2F6 = (s16) (arg0->unk2F6 + 1);
    if (!(arg0->unk15C < 7.0f) || (func_80929C80(arg0, arg1) == 0)) {
        temp_a0 = arg0 + 0x144;
        sp24 = temp_a0;
        if (func_801378B8((SkelAnime *) temp_a0, 15.0f) != 0) {
            Audio_PlayActorSound2(arg0, 0x3929U);
        } else if (func_801378B8((SkelAnime *) temp_a0, 21.0f) != 0) {
            sp2C = (Math_SinS((s16) (arg0->shape.rot.y + 0x6A4)) * 70.0f) + arg0->world.pos.x;
            sp34 = (Math_CosS((s16) (arg0->shape.rot.y + 0x6A4)) * 70.0f) + arg0->world.pos.z;
            sp30 = arg0->world.pos.y;
            Audio_PlayActorSound2(arg0, 0x39AEU);
            func_800DFD04((arg1 + (arg1->activeCamera * 4))->unk800, 2, 0x19, 5);
            func_8013ECE0(arg0->xyzDistToPlayerSq, 0xB4U, 0x14U, 0x64U);
            CollisionCheck_SpawnShieldParticles(arg1, (Vec3f *) &sp2C);
        }
        temp_f0 = arg0->unk15C;
        if ((temp_f0 > 13.0f) && (temp_f0 < 23.0f)) {
            arg0->unk408 = (u8) (arg0->unk408 | 1);
            if (arg0->unk2F4 != 0) {
                arg0->speedXZ = sin_rad((arg0->unk15C - 13.0f) * 0.15707964f) * 10.0f;
            }
        } else {
            arg0->unk408 = (u8) (arg0->unk408 & 0xFFFE);
            arg0->speedXZ = 0.0f;
        }
        if ((arg0->unk2F4 != 0) && (arg0->unk15C < 13.0f)) {
            Math_ScaledStepToS(&arg0->shape.rot.y, arg0->yawTowardsPlayer, 0x5DC);
            arg0->world.rot.y = arg0->shape.rot.y;
        }
        if (SkelAnime_FrameUpdateMatrix((SkelAnime *) sp24) != 0) {
            func_8092A570(arg0);
        }
    }
}

void func_8092A570(Actor *arg0) {
    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_06001ABC);
    Audio_PlayActorSound2(arg0, 0x39B2U);
    arg0->unk2F0 = func_8092A5BC;
}

void func_8092A5BC(Actor *arg0, GlobalContext *arg1) {
    f32 sp30;
    SkelAnime *sp2C;
    SkelAnime *temp_a0;
    f32 phi_f0;

    temp_a0 = arg0 + 0x144;
    sp2C = temp_a0;
    arg0 = arg0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        if (&D_060015F8 == arg0->unk14C) {
            func_80929E2C(arg0, arg1, arg0);
            return;
        }
        if (arg0->unk2F4 != 0) {
            phi_f0 = 1.5f;
        } else {
            phi_f0 = 1.0f;
        }
        sp30 = phi_f0;
        SkelAnime_ChangeAnim(sp2C, (AnimationHeader *) &D_060015F8, phi_f0, 0.0f, (f32) SkelAnime_GetFrameCount(&D_060015F8), (u8) 3, 0.0f);
        // Duplicate return node #7. Try simplifying control flow for better match
    }
}

void func_8092A680(Actor *arg0) {
    f32 sp34;
    f32 phi_f2;
    f32 phi_f0;

    arg0->speedXZ = 0.0f;
    if (arg0->unk2F4 != 0) {
        phi_f2 = 1.3f;
    } else {
        phi_f2 = 1.0f;
    }
    sp34 = phi_f2;
    if (arg0->unk2F4 != 0) {
        phi_f0 = 4.0f;
    } else {
        phi_f0 = 10.0f;
    }
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_06002484, phi_f2, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06002484), (u8) 3, phi_f0);
    arg0->unk2F6 = 0;
    arg0->unk2F8 = -1;
    arg0->unk2F0 = func_8092A754;
}

void func_8092A754(Actor *arg0, ? arg1) {
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 phi_f2;

    temp_a0 = arg0 + 0x144;
    arg0->unk2F6 = (s16) (arg0->unk2F6 + 1);
    sp20 = temp_a0;
    if ((func_801378B8(temp_a0, 1.0f) != 0) || (func_801378B8(temp_a0, 13.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x3929U);
    }
    temp_f0 = arg0->unk15C;
    if (((temp_f0 > 1.0f) && (temp_f0 < 9.0f)) || ((temp_f0 > 12.0f) && (temp_f0 < 20.0f))) {
        if (arg0->unk2F4 != 0) {
            Math_ScaledStepToS(&arg0->shape.rot.y, arg0->yawTowardsPlayer, 0x5DC);
            temp_f0_2 = arg0->unk15C;
            arg0->world.rot.y = arg0->shape.rot.y;
            if (temp_f0_2 > 12.0f) {
                phi_f2 = temp_f0_2 - 12.0f;
            } else {
                phi_f2 = temp_f0_2 - 1.0f;
            }
            arg0->speedXZ = sin_rad(0.3926991f * phi_f2) * 4.5f;
        }
        arg0->unk408 = (u8) (arg0->unk408 | 1);
    } else {
        arg0->unk408 = (u8) (arg0->unk408 & 0xFFFE);
        arg0->speedXZ = 0.0f;
    }
    if (SkelAnime_FrameUpdateMatrix(sp20) != 0) {
        func_8092AA6C(arg0);
    }
}

void func_8092A8D8(Actor *arg0) {
    f32 sp34;
    f32 phi_f0;

    arg0->speedXZ = 0.0f;
    if (arg0->unk2F4 != 0) {
        arg0->world.rot.z = 0x1000;
        phi_f0 = 1.3f;
    } else {
        arg0->world.rot.z = 0xB00;
        phi_f0 = 1.0f;
    }
    sp34 = phi_f0;
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_06002484, phi_f0, 12.0f, (f32) SkelAnime_GetFrameCount(&D_06002484), (u8) 3, 5.0f);
    arg0->unk2F6 = 0;
    arg0->unk2F8 = -1;
    arg0->unk2F0 = func_8092A994;
}

void func_8092A994(Actor *arg0, ? arg1) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    f32 temp_f0;

    temp_a0 = arg0 + 0x144;
    arg0->unk2F6 = (s16) (arg0->unk2F6 + 1);
    sp24 = temp_a0;
    if (func_801378B8(temp_a0, 13.0f) != 0) {
        Audio_PlayActorSound2(arg0, 0x3929U);
    }
    temp_f0 = arg0->unk15C;
    if ((temp_f0 > 12.0f) && (temp_f0 < 20.0f)) {
        arg0->unk408 = (u8) (arg0->unk408 | 1);
    } else {
        arg0->unk408 = (u8) (arg0->unk408 & 0xFFFE);
    }
    arg0->shape.rot.y += arg0->world.rot.z;
    arg0->world.rot.y = arg0->shape.rot.y;
    if (SkelAnime_FrameUpdateMatrix(sp24) != 0) {
        func_8092AA6C(arg0);
    }
}

void func_8092AA6C(Actor *arg0) {
    f32 sp28;
    f32 phi_f0;

    if (arg0->unk2F4 != 0) {
        phi_f0 = 2.0f;
    } else {
        phi_f0 = 1.0f;
    }
    sp28 = phi_f0;
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_06002E7C, phi_f0, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06002484), (u8) 3, -4.0f);
    arg0->unk2F0 = func_8092AB14;
}

void func_8092AB14(Actor *arg0, GlobalContext *arg1) {
    if (SkelAnime_FrameUpdateMatrix(arg0 + 0x144) != 0) {
        func_80929E2C(arg0, arg1);
    }
}

void func_8092AB50(Actor *arg0) {
    arg0->speedXZ = 0.0f;
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_0600391C, 2.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_0600391C), (u8) 2, -2.0f);
    arg0->unk2F6 = 0x14;
    arg0->unk2F0 = func_8092ABD8;
}

void func_8092ABD8(Actor *arg0, GlobalContext *arg1) {
    Collider *temp_a2;

    temp_a2 = arg0 + 0x478;
    arg0 = arg0;
    CollisionCheck_SetAC(arg1, arg1 + 0x18884, temp_a2);
    if (SkelAnime_FrameUpdateMatrix(arg0 + 0x144) != 0) {
        arg0->unk2F6 = (s16) (arg0->unk2F6 - 1);
        if (arg0->unk2F6 == 0) {
            func_80929E2C(arg0, arg1);
        }
    }
}

void func_8092AC4C(Actor *arg0, s32 arg1) {
    s16 temp_v0;
    s32 phi_v1;

    if (arg1 != 0) {
        func_800BE504(arg0, arg0 + 0x3AC);
    }
    temp_v0 = (arg0->world.rot.y - arg0->shape.rot.y) + 0x8000;
    arg0->speedXZ = 6.0f;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    } else {
        phi_v1 = (s32) temp_v0;
    }
    if (phi_v1 < 0x4001) {
        SkelAnime_ChangeAnimTransitionStop((SkelAnime *) (arg0 + 0x144), &D_06005254, -4.0f);
    } else {
        SkelAnime_ChangeAnimTransitionStop((SkelAnime *) (arg0 + 0x144), &D_0600367C, -4.0f);
    }
    arg0->unk2F0 = func_8092ACFC;
}

void func_8092ACFC(EnIk *arg0, GlobalContext *arg1) {
    s16 temp_a1;

    Math_StepToF(arg0 + 0x70, 0.0f, 1.0f);
    temp_a1 = arg0->unk2FA;
    if (temp_a1 != 0) {
        Play_CameraSetAtEye(arg1, arg0->unk2FA, arg0 + 0x3C, Play_GetCamera(arg1, temp_a1) + 0x5C);
    }
    if (SkelAnime_FrameUpdateMatrix(arg0 + 0x144) != 0) {
        if (arg0->unk2FA != 0) {
            ActorCutscene_Stop((s16) arg0->actor.cutscene);
            arg0->unk2FA = 0;
            func_80929E88(arg0);
            return;
        }
        func_80929E2C(&arg0->actor, arg1);
        return;
    }
    arg0->actor.colorFilterTimer = 0xC;
    arg0->unk2FC = 0xC;
}

void func_8092ADB4(Actor *arg0) {
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->speedXZ = 0.0f;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionStop(temp_a3 + 0x144, &D_06004A04, -4.0f);
    arg0->unk2F6 = 0x18;
    Audio_PlayActorSound2(arg0, 0x3AD8U);
    arg0->unk2F0 = func_8092AE14;
}

void func_8092AE14(Actor *arg0, GlobalContext *arg1) {
    f32 sp68;
    f32 sp64;
    f32 sp60;
    SkelAnime *temp_s0;
    f32 *temp_s3;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 phi_s0;

    temp_s0 = arg0 + 0x144;
    arg0->unk2FC = 0xC;
    if (SkelAnime_FrameUpdateMatrix(temp_s0) != 0) {
        if (arg0->unk2F6 == 0x18) {
            func_800F0590(arg1, arg0 + 0x24, 0x23, 0x321F);
        }
        if (arg0->unk2F6 != 0) {
            arg0->unk2F6 = (s16) (arg0->unk2F6 - 1);
            temp_s0_2 = 6 - ((s32) arg0->unk2F6 >> 2);
            temp_s3 = &sp60;
            phi_s0 = temp_s0_2;
            if (temp_s0_2 >= 0) {
                do {
                    sp60 = randPlusMinusPoint5Scaled(80.0f) + arg0->world.pos.x;
                    sp68 = randPlusMinusPoint5Scaled(80.0f) + arg0->world.pos.z;
                    sp64 = randPlusMinusPoint5Scaled(50.0f) + (arg0->world.pos.y + 20.0f);
                    func_800B3030(arg1, (Vec3f *) temp_s3, &D_8092C19C, &D_8092C19C, (s16) 0x64, (s16) 0, 2);
                    temp_s0_3 = phi_s0 - 1;
                    phi_s0 = temp_s0_3;
                } while (temp_s0_3 >= 0);
            }
            if (arg0->unk2F6 == 0) {
                Item_DropCollectibleRandom(arg1, arg0, arg0 + 0x24, 0xB0);
                ActorCutscene_Stop((s16) arg0->cutscene);
                Actor_MarkForDeath(arg0);
                return;
            }
            // Duplicate return node #12. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #12. Try simplifying control flow for better match
        return;
    }
    if (func_801378B8(temp_s0, 23.0f) != 0) {
        Audio_PlayActorSound2(arg0, 0x3928U);
    }
}

void func_8092AFB4(Actor *arg0) {
    arg0->unk2FC = 0;
    arg0->unk2F0 = func_8092AFD4;
    arg0->speedXZ = 0.0f;
}

void func_8092AFD4(Actor *arg0, Actor *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk2F6;
    if (temp_v0 != 0) {
        arg0->unk2F6 = (s16) (temp_v0 - 1);
    }
    if (arg0->unk2F6 == 0) {
        func_80929B6C(arg1);
        if (arg0->colChkInfo.health == 0) {
            func_8092B03C(arg0);
            return;
        }
        func_80929E2C(arg0, (GlobalContext *) arg1);
        // Duplicate return node #6. Try simplifying control flow for better match
    }
}

void func_8092B03C(Actor *arg0) {
    Actor *temp_a0_2;
    ColliderCylinder *temp_a1;
    s8 temp_a0;

    temp_a0 = arg0->cutscene;
    arg0 = arg0;
    ActorCutscene_SetIntentToPlay((s16) temp_a0);
    temp_a0_2 = arg0;
    temp_a1 = arg0 + 0x3AC;
    arg0->speedXZ = 0.0f;
    if (arg0->colChkInfo.health != 0) {
        arg0 = arg0;
        func_800BE504(temp_a0_2, temp_a1);
    }
    arg0->unk2F0 = func_8092B098;
}

void func_8092B098(Actor *arg0, GlobalContext *arg1) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    s8 temp_a0;

    arg0->unk2FC = 0xC;
    if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
        temp_a0 = arg0->cutscene;
        if (temp_a0 != -1) {
            ActorCutscene_StartAndSetFlag((s16) temp_a0, arg0);
            arg0->unk2FA = ActorCutscene_GetCurrentCamera((s16) arg0->cutscene);
            sp24 = (Math_SinS((s16) (arg0->shape.rot.y - 0x2000)) * 120.0f) + arg0->focus.pos.x;
            sp28 = arg0->focus.pos.y + 20.0f;
            sp2C = (Math_CosS((s16) (arg0->shape.rot.y - 0x2000)) * 120.0f) + arg0->focus.pos.z;
            Play_CameraSetAtEye(arg1, arg0->unk2FA, &arg0->focus.pos, (Vec3f *) &sp24);
        }
        if (arg0->colChkInfo.health != 0) {
            func_8092AC4C(arg0, 0);
            return;
        }
        func_8092ADB4(arg0);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
}

void func_8092B1B4(Actor *arg0, GlobalContext *arg1) {
    s32 sp2C;
    f32 temp_f0;
    u8 temp_v0;

    if (func_80929F20 != arg0->unk2F0) {
        if ((arg0->unk489 & 0x80) != 0) {
            temp_f0 = (f32) SkelAnime_GetFrameCount(&D_0600391C) - 2.0f;
            if (arg0->unk15C < temp_f0) {
                arg0->unk15C = temp_f0;
            }
            arg0->unk489 = (u8) (arg0->unk489 & 0xFF7F);
            arg0->unk3BD = (u8) (arg0->unk3BD & 0xFFFD);
            return;
        }
        if (((arg0->unk3BD & 2) != 0) && (sp2C = 0, func_800BE258(arg0, arg0 + 0x3C4), arg0->unk3BD = (u8) (arg0->unk3BD & 0xFFFD), (arg0->colChkInfo.damageEffect != 0xF)) && ((arg0->unk2F5 != 0xA) || ((*arg0->unk3E8 & 0xDB0B3) == 0))) {
            func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0xC);
            arg0->unk2FC = 0xC;
            func_80929B6C(arg0, arg1);
            arg0->unk408 = (u8) (arg0->unk408 & 0xFFFE);
            if (Actor_ApplyDamage(arg0) == 0) {
                if (arg0->unk2F4 == 0) {
                    arg0->colChkInfo.health = 9;
                    sp2C = 1;
                } else {
                    Enemy_StartFinishingBlow(arg1, arg0);
                    func_801A2ED8();
                }
            }
            if (sp2C == 1) {
                arg0->unk2F4 = 1U;
                arg0->unk3C0 = 3;
                arg0->colChkInfo.damageTable = &D_8092C140;
                Audio_PlayActorSound2(arg0, 0x392CU);
                func_8092B03C(arg0);
                return;
            }
            if (arg0->unk2F4 != 0) {
                temp_v0 = arg0->colChkInfo.damageEffect;
                if (temp_v0 == 3) {
                    func_80929AF8(arg0);
                    func_8092AFB4(arg0);
                    if (arg0->colChkInfo.health == 0) {
                        arg0->unk2F6 = 3;
                        arg0->unk2FC = 0xC;
                        return;
                    }
                    // Duplicate return node #28. Try simplifying control flow for better match
                    return;
                }
                if (temp_v0 == 2) {
                    arg0->unk304 = 4.0f;
                    arg0->unk2F5 = 0U;
                    arg0->unk308 = 0.65f;
                } else if (temp_v0 == 4) {
                    func_80929BEC(arg0, arg1);
                }
                Audio_PlayActorSound2(arg0, 0x3AD7U);
                if (arg0->colChkInfo.health != 0) {
                    func_8092AC4C(arg0, 1);
                    return;
                }
                func_8092B03C(arg0);
                return;
            }
            Audio_PlayActorSound2(arg0, 0x393AU);
            Audio_PlayActorSound2(arg0, 0x3AD7U);
            if (arg0->colChkInfo.damageEffect == 4) {
                func_80929BEC(arg0, arg1);
            }
            // Duplicate return node #28. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #28. Try simplifying control flow for better match
    }
}

void func_8092B46C(EnIk *arg0, GlobalContext *arg1) {
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    Vec3f *temp_a0;
    f32 *temp_s4;
    s32 temp_s1;
    s32 temp_s1_2;
    void *temp_s3;
    void *temp_v0;
    s32 phi_s1;
    s32 phi_s1_2;
    s32 phi_s1_3;

    temp_s4 = &sp68;
    phi_s1 = 0;
    phi_s1_2 = 0;
    do {
        temp_v0 = arg0 + (phi_s1 * 0x28);
        temp_s3 = temp_v0 + 0x550;
        temp_a0 = temp_s3 + 4;
        phi_s1_3 = phi_s1;
        if (temp_v0->unk574 != 0) {
            Math_Vec3f_Sum(temp_a0, temp_s3 + 0x10, temp_a0);
            temp_s3->unk14 = (f32) (temp_s3->unk14 + -1.5f);
            if (temp_s3->unk8 < arg0->actor.floorHeight) {
                temp_s3->unk24 = 0;
                temp_s3->unk8 = (f32) arg0->actor.floorHeight;
                do {
                    sp68 = randPlusMinusPoint5Scaled(20.0f) + temp_s3->unk4;
                    sp6C = Rand_ZeroFloat(20.0f) + temp_s3->unk8;
                    sp70 = randPlusMinusPoint5Scaled(20.0f) + temp_s3->unkC;
                    func_800B3030(arg1, (Vec3f *) temp_s4, &D_801D15B0, &D_801D15B0, (s16) 0x28, (s16) 7, 2);
                    temp_s1 = phi_s1_2 + 1;
                    phi_s1_2 = temp_s1;
                    phi_s1_3 = temp_s1;
                } while (temp_s1 != 4);
                Audio_PlaySoundAtPosition(arg1, temp_s3 + 4, 0xB, 0x3878U);
            }
        }
        temp_s1_2 = phi_s1_3 + 1;
        phi_s1 = temp_s1_2;
    } while (temp_s1_2 < 7);
}

void EnIk_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnIk *this = (EnIk *) thisx;
    f32 sp6C;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    ColliderTris *sp40;
    CollisionCheckContext *sp3C;
    ColliderCylinder *sp38;
    ColliderCylinder *temp_a2;
    ColliderTris *temp_a0;
    CollisionCheckContext *temp_a1;
    f32 *temp_a2_2;
    f32 *temp_a3;
    f32 *temp_a3_2;
    f32 *temp_t0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f8;
    s16 temp_v1;

    if (func_8092B098 != this->actionFunc) {
        func_8092B1B4(&this->actor, globalCtx);
    } else {
        this->unk478.base.acFlags &= 0xFF7F;
        this->unk3AC.base.acFlags &= 0xFFFD;
    }
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 75.0f, 30.0f, 30.0f, 0x1DU);
    temp_a1 = &globalCtx->colChkCtx;
    temp_a2 = &this->unk3AC;
    this->actor.focus.rot.y = this->actor.shape.rot.y;
    sp38 = temp_a2;
    sp3C = temp_a1;
    CollisionCheck_SetOC(globalCtx, temp_a1, &temp_a2->base);
    temp_v1 = this->unk2FC;
    if (temp_v1 == 0) {
        CollisionCheck_SetAC(globalCtx, sp3C, &temp_a2->base);
    } else {
        this->unk2FC = temp_v1 - 1;
    }
    if ((this->unk3F8.base.atFlags & 1) != 0) {
        CollisionCheck_SetAT(globalCtx, sp3C, &this->unk3F8.base);
    }
    if (func_8092ABD8 == this->actionFunc) {
        sp6C = Math_CosS(this->actor.shape.rot.y);
        temp_f0 = Math_SinS(this->actor.shape.rot.y);
        temp_f2 = 30.0f * sp6C;
        temp_f12 = 20.0f * temp_f0;
        temp_a0 = &this->unk478;
        temp_t0 = &sp5C;
        temp_a2_2 = &sp44;
        temp_a3 = &sp50;
        temp_f4 = (this->actor.world.pos.x - temp_f2) + temp_f12;
        temp_f14 = 30.0f * temp_f0;
        sp44 = temp_f4;
        temp_f16 = 20.0f * sp6C;
        sp48 = this->actor.world.pos.y;
        temp_f10 = this->actor.world.pos.z + temp_f14 + temp_f16;
        sp4C = temp_f10;
        temp_f6 = this->actor.world.pos.x + temp_f2 + temp_f12;
        sp50 = temp_f6;
        temp_f8 = this->actor.world.pos.y + 80.0f;
        sp54 = temp_f8;
        sp5C = temp_f4;
        sp64 = temp_f10;
        sp40 = temp_a0;
        sp58 = (this->actor.world.pos.z - temp_f14) + temp_f16;
        sp60 = temp_f8;
        Collider_SetTrisVertices(temp_a0, 0, (Vec3f *) temp_a2_2, (Vec3f *) temp_a3, (Vec3f *) temp_t0);
        temp_a3_2 = &sp5C;
        sp5C = temp_f6;
        sp60 = sp48;
        sp64 = sp58;
        Collider_SetTrisVertices(temp_a0, 1, (Vec3f *) &sp44, (Vec3f *) temp_a3_2, (Vec3f *) &sp50);
        CollisionCheck_SetAC(globalCtx, sp3C, &sp40->base);
    }
    if (this->unk304 > 0.0f) {
        if (this->unk2F5 != 0xA) {
            Math_StepToF(&this->unk304, 0.0f, 0.05f);
            temp_f0_2 = (this->unk304 + 1.0f) * 0.325f;
            this->unk308 = temp_f0_2;
            if (temp_f0_2 > 0.65f) {
                this->unk308 = 0.65f;
            } else {
                this->unk308 = this->unk308;
            }
        } else if (Math_StepToF(&this->unk30C, 0.65f, 0.01625f) == 0) {
            func_800B9010(&this->actor, 0x20B2U);
        }
    }
    func_8092B46C(this, globalCtx);
}

s32 func_8092B900(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if ((arg5->unk2F4 != 0) && ((s32) *(&D_8092C1A8 + arg1) > 0)) {
        *arg2 = NULL;
    }
    return 0;
}

void func_8092B93C(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    s32 sp80;
    s16 sp76;
    Vec3f sp68;
    Vec3f sp5C;
    Vec3f sp50;
    Vec3f sp44;
    GraphicsContext *sp3C;
    s32 *sp28;
    Gfx *temp_s0;
    GraphicsContext *temp_a1;
    MtxF *temp_a0;
    MtxF *temp_v0;
    f32 temp_f16;
    s16 temp_a0_2;
    s32 *temp_v1_2;
    s32 *temp_v1_3;
    s32 temp_v0_2;
    s8 temp_t7;
    s8 temp_v0_3;
    void *temp_v1;

    temp_t7 = *(&D_8092C1A8 + arg1);
    sp80 = (s32) temp_t7;
    if (arg4->unk2F4 == 1) {
        if ((s32) temp_t7 > 0) {
            temp_v0 = SysMatrix_GetCurrentState();
            temp_a0 = temp_v0;
            temp_v1 = arg4 + (sp80 * 0x28);
            temp_v1->unk554 = (f32) temp_v0->mf[3][0];
            temp_v1_2 = temp_v1 + 0x550;
            temp_v1_2->unk8 = (f32) temp_v0->mf[3][1];
            temp_v1_2->unkC = (f32) temp_v0->mf[3][2];
            sp28 = temp_v1_2;
            func_8018219C(temp_a0, temp_v1_2 + 0x1C, 0);
            temp_v1_2->unk24 = 1;
            temp_a0_2 = (Rand_Next() >> 0x13) + arg4->shape.rot.y + *(&D_8092BFA4 + (sp80 * 8));
            sp76 = temp_a0_2;
            temp_f16 = Math_SinS(temp_a0_2) * 5.0f;
            temp_v1_2->unk14 = 6.0f;
            temp_v1_2->unk10 = temp_f16;
            temp_v1_2->unk18 = (f32) (Math_CosS(temp_a0_2) * 5.0f);
            temp_v1_2->unk0 = *arg2;
        }
        if (arg1 == 0x1D) {
            arg4->unk2F4 = (u8) (arg4->unk2F4 | 2);
        }
    }
    if (arg1 == 1) {
        SysMatrix_GetStateTranslation(arg4 + 0x3C);
        arg4->unk3F2 = (s16) (s32) arg4->focus.pos.x;
        arg4->unk3F4 = (s16) (s32) arg4->world.pos.y;
        arg4->unk3F6 = (s16) (s32) arg4->focus.pos.z;
    }
    if ((arg1 == 0x11) && (arg4->unk2F6 != arg4->unk2F8) && ((temp_v0_2 = arg4->unk2F0, (func_8092A33C == temp_v0_2)) || (func_8092A754 == temp_v0_2) || (func_8092A994 == temp_v0_2))) {
        Math_Vec3f_Copy(&sp68, arg4 + 0x438);
        Math_Vec3f_Copy(&sp5C, arg4 + 0x444);
        SysMatrix_MultiplyVector3fByState(&D_8092C1C8, &sp50);
        SysMatrix_MultiplyVector3fByState(&D_8092C1D4, &sp44);
        Collider_SetQuadVertices(arg4 + 0x3F8, &sp44, &sp50, &sp68, &sp5C);
        if ((arg4->unk408 & 1) != 0) {
            func_800A81F0(Effect_GetParams(arg4->unk300), &sp50, &sp44);
        }
        arg4->unk2F8 = (s16) arg4->unk2F6;
    }
    temp_v0_3 = *(&D_8092C1E0 + arg1);
    if (temp_v0_3 != -1) {
        SysMatrix_GetStateTranslation(arg4 + (temp_v0_3 * 0xC) + 0x310);
    }
    if ((sp80 == 0) || ((sp80 != -1) && (arg4->unk2F4 == 0) && (*(&D_8092BFA0 + (sp80 * 8)) != 0))) {
        temp_a1 = *arg0;
        temp_v1_3 = (sp80 * 8) + &D_8092BFA0;
        temp_s0 = temp_a1->polyXlu.p;
        temp_s0->words.w0 = 0xDA380003;
        sp3C = temp_a1;
        sp28 = temp_v1_3;
        temp_s0->words.w1 = Matrix_NewMtx(*arg0);
        temp_s0->unk8 = 0xDE000000;
        temp_s0->unkC = (Gfx *) *temp_v1_3;
        temp_a1->polyXlu.p = temp_s0 + 0x10;
    }
}

void func_8092BC6C(EnIk *arg0, GraphicsContext **arg1) {
    s32 sp54;
    GraphicsContext *sp48;
    GraphicsContext *temp_t9;
    s32 *temp_s4;
    s32 temp_s5;
    void *temp_s0;
    void *temp_s2;
    void *temp_s3;
    EnIk *phi_s6;
    Gfx *phi_s2;
    s32 phi_s5;
    Gfx *phi_s3;
    s32 phi_v0;
    Gfx *phi_s3_2;
    Gfx *phi_s2_2;

    phi_s6 = arg0;
    phi_s5 = 0;
    if (arg0->unk2F4 == 3) {
        sp54 = 0;
        temp_t9 = *arg1;
        sp48 = temp_t9;
        phi_s2 = temp_t9->polyOpa.p;
        phi_s3 = temp_t9->polyXlu.p;
        phi_v0 = 7;
        phi_v0 = 7;
        do {
            temp_s0 = phi_s6 + 0x550;
            phi_s3_2 = phi_s3;
            phi_s2_2 = phi_s2;
            phi_s3_2 = phi_s3;
            if (phi_s6->unk574 != 0) {
                temp_s4 = (phi_s5 * 8) + &D_8092BFA0;
                SysMatrix_SetStateRotationAndTranslation(temp_s0->unk4, temp_s0->unk8, temp_s0->unkC, temp_s0 + 0x1C);
                Matrix_Scale(0.012f, 0.012f, 0.012f, 1);
                phi_s2->words.w0 = 0xDA380003;
                temp_s2 = phi_s2 + 8;
                phi_s2->words.w1 = Matrix_NewMtx(*arg1);
                temp_s2->unk0 = 0xDE000000;
                temp_s2->unk4 = (s32) temp_s0->unk0;
                phi_s2_2 = temp_s2 + 8;
                if (*temp_s4 != 0) {
                    phi_s3->words.w0 = 0xDA380003;
                    temp_s3 = phi_s3 + 8;
                    phi_s3->words.w1 = Matrix_NewMtx(*arg1);
                    temp_s3->unk0 = 0xDE000000;
                    temp_s3->unk4 = (s32) *temp_s4;
                    phi_s3_2 = temp_s3 + 8;
                }
            } else {
                sp54 += 1;
            }
            temp_s5 = phi_s5 + 1;
            phi_s6 += 0x28;
            phi_s2 = phi_s2_2;
            phi_s5 = temp_s5;
            phi_s3 = phi_s3_2;
        } while (temp_s5 != phi_v0);
        if (sp54 == phi_v0) {
            arg0->unk2F4 = 5;
        }
        sp48->polyXlu.p = phi_s3_2;
        sp48->polyOpa.p = phi_s2_2;
    }
}

void EnIk_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnIk *this = (EnIk *) thisx;
    GraphicsContext *sp34;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v1;
    GraphicsContext *temp_t0;
    void *temp_v1_2;

    temp_t0 = globalCtx->state.gfxCtx;
    sp34 = temp_t0;
    func_800B8050(&this->actor, globalCtx, 0);
    func_800B8118(&this->actor, globalCtx, 0);
    temp_v1 = sSetupDL + 0x4B0;
    temp_v0 = temp_t0->polyXlu.p;
    temp_v0->words.w1 = (u32) temp_v1;
    temp_v0->words.w0 = 0xDE000000;
    temp_t0->polyXlu.p = temp_v0 + 8;
    temp_v0_2 = temp_t0->polyOpa.p;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = (u32) temp_v1;
    temp_v1_2 = (this->actor.params * 0xC) + &D_8092BFD8;
    temp_v0_2->unk8 = 0xDB060020;
    temp_v0_2->unkC = (s32) temp_v1_2->unk0;
    temp_v0_2->unk10 = 0xDB060024;
    temp_v0_2->unk14 = (s32) temp_v1_2->unk4;
    temp_v0_2->unk18 = 0xDB060028;
    temp_v0_2->unk1C = (s32) temp_v1_2->unk8;
    temp_t0->polyOpa.p = temp_v0_2 + 0x20;
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_8092B900, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_8092B93C, &this->actor);
    func_8092BC6C(this, &globalCtx->state.gfxCtx);
    if (this->actor.colorFilterTimer != 0) {
        func_800AE5A0(globalCtx);
    }
    func_800BC620(&this->actor.focus.pos, &D_8092C200, 0xFF, globalCtx);
    func_800BE680(globalCtx, &this->actor, (Vec3f []) &this->unk310, 0xD, this->unk308, this->unk30C, this->unk304, (u8) (s32) this->unk2F5);
}

