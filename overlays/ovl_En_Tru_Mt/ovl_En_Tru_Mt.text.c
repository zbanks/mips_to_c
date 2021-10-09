CRASHED

/*
Failed to decompile function func_80B76440:

Label L80B76494 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/
? func_80B76030(SkelAnime *arg0, s16 arg1);         /* static */
void func_80B76110(EnTruMt *arg0);                  /* static */
void func_80B76188(Actor *arg0);                    /* static */
? func_80B761FC(Actor *arg0, GlobalContext *arg1);  /* static */
? func_80B76368(void *arg0, void *arg1);            /* static */
s32 func_80B763C4(EnTruMt *arg0, GlobalContext *arg1); /* static */
? func_80B76440(EnTruMt *, GlobalContext *);        /* static */
f32 func_80B76540(u8 *arg0, s32 arg1, Vec3f *arg2, s16 *arg3); /* static */
s32 func_80B76600(EnTruMt *arg0, u8 *arg1, s32 arg2); /* static */
void func_80B7679C(void *arg0, void *arg1);         /* static */
? func_80B768F0(EnTruMt *arg0, GlobalContext *);    /* static */
void func_80B76924(EnTruMt *arg0);                  /* static */
void func_80B76980(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B76ED4(s16 arg0, s16 arg1, void *arg2, s16 *arg3, s32 arg4); /* static */
s32 func_80B77008(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80B77078(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80B77354(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern ? D_060004C8;
extern FlexSkeletonHeader D_0601AA60;
static ColliderSphereInit D_80B77510 = {
    {0xA, 0, 9, 0x39, 0x10, 4},
    {0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0, {{0, 0, 0}, 0x16}, 0x64},
};
static DamageTable D_80B7753C = {
    {
        1,
        1,
        1,
        1,
        1,
        0xF1,
        1,
        1,
        1,
        1,
        1,
        0xF1,
        0xF1,
        0xF1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
    },
};
static ? D_80B7755C;                                /* unable to generate initializer */
static Vec3f D_80B7765C = {3000.0f, -800.0f, 0.0f};
static Vec3f D_80B77668 = {0.0f, 0.0f, -3000.0f};
static ? D_80B77674;                                /* unable to generate initializer */

typedef struct EnTruMt {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(EnTruMt *, GlobalContext *);
    /* 0x0148 */ SkelAnime unk148;                  /* inferred */
    /* 0x018C */ ColliderSphere unk18C;             /* inferred */
    /* 0x01E4 */ Vec3s unk1E4;                      /* inferred */
    /* 0x01EA */ char pad1EA[0x9C];                 /* maybe part of unk1E4[27]? */
    /* 0x0286 */ Vec3s unk286;                      /* inferred */
    /* 0x028C */ char pad28C[0x9C];                 /* maybe part of unk286[27]? */
    /* 0x0328 */ u16 unk328;                        /* inferred */
    /* 0x032A */ char pad32A[0x22];                 /* maybe part of unk328[18]? */
    /* 0x034C */ s16 unk34C;                        /* inferred */
    /* 0x034E */ s16 unk34E;                        /* inferred */
    /* 0x0350 */ char pad350[0x18];                 /* maybe part of unk34E[13]? */
    /* 0x0368 */ u8 *unk368;                        /* inferred */
    /* 0x036C */ s32 unk36C;                        /* inferred */
    /* 0x0370 */ char pad370[0x18];                 /* maybe part of unk36C[7]? */
    /* 0x0388 */ s16 unk388;                        /* inferred */
    /* 0x038A */ char pad38A[0x8];                  /* maybe part of unk388[5]? */
    /* 0x0392 */ s16 unk392;                        /* inferred */
    /* 0x0394 */ char pad394[0x14];                 /* maybe part of unk392[11]? */
} EnTruMt;                                          /* size 0x3A8 */

? func_80B76030(SkelAnime *arg0, s16 arg1) {
    s16 sp36;
    void *sp2C;
    s16 temp_t0;
    s16 temp_t1;
    s32 temp_t6;
    void *temp_v1;
    s16 phi_t1;
    s16 phi_t0;
    ? phi_v1;

    phi_v1 = 0;
    if ((s32) arg1 >= 0) {
        temp_t6 = arg1 * 0x10;
        if ((s32) arg1 < 0x10) {
            temp_v1 = temp_t6 + &D_80B7755C;
            temp_t1 = temp_v1->unkA;
            phi_t1 = temp_t1;
            if ((s32) temp_t1 < 0) {
                sp2C = temp_v1;
                phi_t1 = SkelAnime_GetFrameCount(temp_v1->unk0);
            }
            temp_t0 = (temp_t6 + &D_80B7755C)->unk8;
            phi_t0 = temp_t0;
            if ((s32) temp_t0 < 0) {
                sp2C = temp_t6 + &D_80B7755C;
                sp36 = phi_t1;
                phi_t0 = SkelAnime_GetFrameCount((temp_t6 + &D_80B7755C)->unk0);
            }
            SkelAnime_ChangeAnim(arg0, (temp_t6 + &D_80B7755C)->unk0, (temp_t6 + &D_80B7755C)->unk4, (f32) phi_t0, (f32) phi_t1, (u8) (s32) (temp_t6 + &D_80B7755C)->unkC, (f32) (temp_t6 + &D_80B7755C)->unkE);
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

void func_80B76110(EnTruMt *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk34E;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk34E = temp_v0 - 1;
        phi_v1 = arg0->unk34E;
    }
    if (phi_v1 == 0) {
        arg0->unk34C += 1;
        if ((s32) arg0->unk34C >= 3) {
            arg0 = arg0;
            arg0->unk34E = Rand_S16Offset(0x1E, 0x1E);
            arg0->unk34C = 0;
        }
    }
}

void func_80B76188(Actor *arg0) {
    f32 temp_f0;

    temp_f0 = Math_CosS(arg0->unk38A);
    arg0->unk38A = (s16) (arg0->unk38A + 0x1555);
    arg0->unk38E = (s16) (s32) (temp_f0 * (f32) arg0->unk38C);
    Math_SmoothStepToS(arg0 + 0x38C, 0, 4, 0x3E8, (s16) 1);
}

? func_80B761FC(Actor *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp2C;
    Collider *sp28;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;
    u8 temp_v0;
    void *temp_v1;

    temp_v0 = arg0->unk19D;
    arg0->unk1D4 = (s16) (s32) arg0->world.pos.x;
    arg0->unk1D8 = (s16) (s32) arg0->world.pos.z;
    arg0->unk1D6 = (s16) (s32) (arg0->world.pos.y + 16.0f);
    if (((temp_v0 & 2) != 0) && (arg0->colChkInfo.damageEffect == 0xF) && (temp_v1 = arg0->child, ((temp_v1->unk159 & 2) == 0)) && (temp_v1->colChkInfo.damageEffect != 0xF)) {
        arg0->unk19D = (u8) (temp_v0 & 0xFFFD);
        if (arg0->unk3A4 == 0) {
            arg0->unk3A4 = 1U;
            Audio_PlayActorSound2(arg0, 0x3AD4U);
        } else {
            arg0->unk3A4 = 0U;
            Audio_PlayActorSound2(arg0, 0x3AD5U);
        }
        arg1->interfaceCtx.unk_25E = 1;
        func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x19);
        return 1;
    }
    if ((s32) arg0->unk38C >= 0xB7) {
        func_80B76188(arg0);
    } else {
        arg0->unk38E = 0;
    }
    temp_a2 = arg0 + 0x18C;
    temp_a1 = arg1 + 0x18884;
    sp2C = temp_a1;
    sp28 = temp_a2;
    CollisionCheck_SetOC(arg1, temp_a1, temp_a2);
    CollisionCheck_SetAC(arg1, temp_a1, temp_a2);
    return 0;
}

? func_80B76368(void *arg0, void *arg1) {
    void *temp_v1;
    void *temp_v1_2;
    void *phi_v1;

    temp_v1 = arg1->unk1CC0;
    phi_v1 = temp_v1;
    if (temp_v1 != 0) {
loop_1:
        if (phi_v1->unk0 == 0xA7) {
            arg0->unk394 = (s16) phi_v1->unkBE;
            arg0->unk398 = (s32) phi_v1->unk24;
            arg0->unk39C = (s32) phi_v1->unk28;
            arg0->unk3A0 = (s32) phi_v1->unk2C;
            return 1;
        }
        temp_v1_2 = phi_v1->unk12C;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 == 0) {
            // Duplicate return node #4. Try simplifying control flow for better match
            return 0;
        }
        goto loop_1;
    }
    return 0;
}

s32 func_80B763C4(EnTruMt *arg0, GlobalContext *arg1) {
    Actor *temp_v0;
    Actor *temp_v1;
    Actor *phi_s0;

    phi_s0 = NULL;
loop_1:
    temp_v0 = func_ActorCategoryIterateById(arg1, phi_s0, 4, 0x214);
    if (temp_v0 != 0) {
        if (temp_v0 != arg0) {
            return 1;
        }
        temp_v1 = temp_v0->next;
        if (temp_v1 != 0) {
            phi_s0 = temp_v1;
            goto loop_1;
        }
        goto block_6;
    }
block_6:
    return 0;
}



f32 func_80B76540(u8 *arg0, s32 arg1, Vec3f *arg2, s16 *arg3) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    s16 *temp_v1;

    if (arg0 != 0) {
        temp_v1 = (arg1 * 6) + Lib_SegmentedToVirtual(arg0->unk4);
        sp20 = (f32) temp_v1->unk0;
        sp24 = (f32) temp_v1->unk2;
        sp28 = (f32) temp_v1->unk4;
    }
    arg3->unk2 = Math_Vec3f_Yaw(arg2, (Vec3f *) &sp20);
    arg3->unk0 = Math_Vec3f_Pitch(arg2, (Vec3f *) &sp20);
    return sp24 - arg2->y;
}

s32 func_80B76600(EnTruMt *arg0, u8 *arg1, s32 arg2) {
    void *sp5C;
    s32 sp58;
    s32 sp50;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    Vec3f sp30;
    s32 sp28;
    s32 temp_a3;
    u8 temp_a2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    f32 phi_f12;
    f32 phi_f14;

    temp_v0 = Lib_SegmentedToVirtual(arg1->unk4);
    temp_a2 = arg1->unk0;
    temp_a3 = arg2 * 6;
    sp50 = 0;
    sp28 = temp_a3;
    sp5C = temp_v0;
    sp58 = (s32) temp_a2;
    Math_Vec3s_ToVec3f(&sp30, temp_a3 + temp_v0);
    if (arg2 == 0) {
        phi_f12 = (f32) (sp5C->unk6 - sp5C->unk0);
        phi_f14 = (f32) (sp5C->unkA - sp5C->unk4);
    } else {
        temp_v0_2 = sp5C + temp_a3;
        if (temp_a2 == (arg2 + 1)) {
            temp_v0_3 = sp5C + (temp_a2 * 6);
            phi_f12 = (f32) (temp_v0_3->unk-6 - temp_v0_3->unk-C);
            phi_f14 = (f32) (temp_v0_3->unk-2 - temp_v0_3->unk-8);
        } else {
            phi_f12 = (f32) (temp_v0_2->unk6 - temp_v0_2->unk-6);
            phi_f14 = (f32) (temp_v0_2->unkA - temp_v0_2->unk-2);
        }
    }
    func_8017B7F8(&sp30, (s16) (s32) (func_80086B30(phi_f12, phi_f14) * 10430.378f), &sp44, &sp40, &sp3C);
    if (((arg0->actor.world.pos.x * sp44) + (sp40 * arg0->actor.world.pos.z) + sp3C) > 0.0f) {
        sp50 = 1;
    }
    return sp50;
}

void func_80B7679C(void *arg0, void *arg1) {
    void *sp4C;
    f32 sp44;
    Vec3f sp40;
    f32 sp38;
    Vec3f sp34;
    s16 temp_v1;
    s16 temp_v1_2;
    void *temp_t0;
    s16 phi_v0;
    s16 phi_v0_2;

    temp_t0 = arg1->unk1CCC;
    sp4C = temp_t0;
    Math_SmoothStepToS(arg0 + 0x34A, (s16) ((arg0->unk92 - arg0->unkBE) - 0x4000), 4, 0x38E0, (s16) 1);
    temp_v1 = arg0->unk34A;
    if ((s32) temp_v1 < -0x38E0) {
        arg0->unk34A = -0x38E0;
    } else {
        phi_v0 = temp_v1;
        if ((s32) temp_v1 >= 0x38E1) {
            phi_v0 = 0x38E0;
        }
        arg0->unk34A = phi_v0;
    }
    sp40.x = temp_t0->unk24;
    sp40.y = temp_t0->unk28;
    sp40.z = temp_t0->unk2C;
    sp44 = temp_t0->unkC44 + 3.0f;
    sp34.x = arg0->unk24;
    sp34.y = arg0->unk28;
    sp34.z = arg0->unk2C;
    sp38 += 30.0f;
    Math_SmoothStepToS(arg0 + 0x348, Math_Vec3f_Pitch(&sp34, &sp40), 4, 0x1C70, (s16) 1);
    temp_v1_2 = arg0->unk348;
    if ((s32) temp_v1_2 < -0x1C70) {
        arg0->unk348 = -0x1C70;
        return;
    }
    phi_v0_2 = temp_v1_2;
    if ((s32) temp_v1_2 >= 0x1C71) {
        phi_v0_2 = 0x1C70;
    }
    arg0->unk348 = phi_v0_2;
}

? func_80B768F0(EnTruMt *arg0) {
    if ((arg0->unk328 & 0x10) != 0) {
        func_80B7679C();
    }
    return 1;
}

void func_80B76924(EnTruMt *arg0) {
    f32 temp_f10;
    s16 temp_a0;

    temp_a0 = arg0->unk388;
    arg0 = arg0;
    temp_f10 = Math_SinS(temp_a0) * 30.0f * 182.04445f;
    arg0->unk388 += 0x400;
    arg0->unk392 = (s16) (s32) temp_f10;
}

void func_80B76980(Actor *arg0, GlobalContext *arg1) {
    void *sp1C;
    Actor *temp_a2;
    u16 temp_a0;
    u32 temp_a1;
    void *temp_v1;

    temp_a2 = arg0;
    temp_v1 = arg1->actorCtx.actorList[2].first;
    if ((s32) gSaveContext.unk_3F3C >= 0xA) {
        sp1C = temp_v1;
        arg0 = temp_a2;
        func_801518B0(arg1, 0x87FU, temp_a2);
        gSaveContext.eventInf[3] |= 0x40;
        gSaveContext.eventInf[4] |= 1;
        temp_v1->unkA74 = (s32) (temp_v1->unkA74 & ~0x400);
        arg0->unk144 = func_80B76BB8;
        arg0->speedXZ = 0.0f;
        return;
    }
    if ((gSaveContext.eventInf[4] & 1) != 0) {
        temp_a1 = gSaveContext.roomInf[127][3];
        temp_a0 = gSaveContext.minigameScore;
        if ((u32) ((u32) (temp_a1 & 0xFFFF0000) >> 0x10) < (u32) temp_a0) {
            gSaveContext.roomInf[127][3] = (temp_a0 << 0x10) | (temp_a1 & 0xFFFF);
            gSaveContext.eventInf[3] |= 0x80;
        }
    }
}

void func_80B76A64(EnTruMt *this, GlobalContext *globalCtx) {
    Actor *sp3C;
    s16 sp34;
    s16 temp_v1;
    s32 temp_v0;
    u8 *temp_a0;
    s16 phi_v0;

    sp3C = globalCtx->actorCtx.actorList[2].first;
    func_80B76924(this);
    func_80B76980(&this->actor, globalCtx);
    sp3C->unkA74 = (s32) (sp3C->unkA74 | 0x400);
    temp_a0 = this->unk368;
    if (temp_a0 != 0) {
        func_80B76540(temp_a0, this->unk36C, &this->actor.world.pos, &sp34);
        Math_SmoothStepToS(&this->actor.world.rot.y, sp36, 4, 0x3E8, (s16) 1);
        this->actor.shape.rot.y = this->actor.world.rot.y;
        Math_SmoothStepToS(&this->actor.shape.rot.x, sp34, 4, 0x3E8, (s16) 1);
        temp_v1 = this->actor.world.rot.y;
        this->actor.world.rot.x = (s16) -(s32) this->actor.shape.rot.x;
        if ((s32) temp_v1 < -0x1770) {
            this->actor.shape.rot.z = -0x1770;
        } else {
            phi_v0 = temp_v1;
            if ((s32) temp_v1 >= 0x1771) {
                phi_v0 = 0x1770;
            }
            this->actor.shape.rot.z = phi_v0;
        }
        this->actor.world.rot.z = this->actor.shape.rot.z;
        if (func_80B76600(this, this->unk368, this->unk36C) != 0) {
            temp_v0 = this->unk36C;
            if (temp_v0 >= (*this->unk368 - 1)) {
                this->actionFunc = func_80B76C38;
                this->actor.speedXZ = 0.0f;
                return;
            }
            this->unk36C = temp_v0 + 1;
            goto block_10;
        }
block_10:
        func_80B76440(this, globalCtx);
        // Duplicate return node #11. Try simplifying control flow for better match
    }
}

void func_80B76BB8(EnTruMt *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a0;

    if (func_80152498(&globalCtx->msgCtx) == 5) {
        temp_a0 = globalCtx;
        globalCtx = globalCtx;
        if (func_80147624(temp_a0) != 0) {
            globalCtx->nextEntranceIndex = 0xA810;
            globalCtx->unk_1887F = 3;
            gSaveContext.nextTransition = 3;
            globalCtx->sceneLoadFlag = 0x14;
        }
    }
}

void func_80B76C38(EnTruMt *this, GlobalContext *globalCtx) {
    Actor *sp1C;

    sp1C = globalCtx->actorCtx.actorList[2].first;
    func_80B76924(this);
    func_80B76980(&this->actor, globalCtx);
    sp1C->unkA74 = (s32) (sp1C->unkA74 | 0x400);
}

void EnTruMt_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnTruMt *this = (EnTruMt *) thisx;
    SkelAnime *sp34;
    ColliderSphere *sp30;
    ColliderSphere *temp_a1_2;
    SkelAnime *temp_a1;

    if ((gSaveContext.eventInf[3] & 0x20) == 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    if (func_80B763C4(this, globalCtx) != 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 24.0f);
    temp_a1 = &this->unk148;
    sp34 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_0601AA60, NULL, &this->unk1E4, &this->unk286, 0x1B);
    temp_a1_2 = &this->unk18C;
    sp30 = temp_a1_2;
    Collider_InitSphere(globalCtx, temp_a1_2);
    Collider_SetSphere(globalCtx, temp_a1_2, &this->actor, &D_80B77510);
    this->unk18C.dim.worldSphere.radius = 0x16;
    this->actor.colChkInfo.damageTable = &D_80B7753C;
    this->unk368 = func_8013D648(globalCtx, (s16) (this->actor.params & 0xFF), 0x3F);
    this->actor.targetMode = 0;
    Actor_SetScale(&this->actor, 0.008f);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 4U);
    this->unk328 = 0;
    this->actor.room = -1;
    this->unk368 = func_8013D648(globalCtx, (s16) ((s32) (this->actor.params & 0xFC00) >> 0xA), 0x3F);
    func_80B76030(sp34, 0xE);
    this->actionFunc = func_80B76A64;
}

void EnTruMt_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTruMt *this = (EnTruMt *) thisx;
    Collider_DestroySphere(globalCtx, &this->unk18C);
}

void EnTruMt_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnTruMt *this = (EnTruMt *) thisx;
    func_80B768F0(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->unk148);
    this->actionFunc(this, globalCtx);
    func_80B76110(this);
    Actor_SetHeight(&this->actor, 34.0f);
    if ((gSaveContext.eventInf[4] & 1) == 0) {
        func_80B761FC(&this->actor, globalCtx);
    }
    Actor_SetVelocityAndMoveXYRotation(&this->actor);
}

void func_80B76ED4(s16 arg0, s16 arg1, void *arg2, s16 *arg3, s32 arg4) {
    Vec3f sp7C;
    Vec3f sp70;
    Vec3s sp68;
    MtxF sp28;
    s16 temp_a1;

    sp70.x = D_801D15B0.x;
    sp70.y = D_801D15B0.y;
    sp70.z = D_801D15B0.z;
    SysMatrix_MultiplyVector3fByState(&sp70, &sp7C);
    SysMatrix_CopyCurrentState(&sp28);
    func_8018219C(&sp28, &sp68, 0);
    arg2->unk0 = (f32) sp7C.x;
    arg2->unk4 = (f32) sp7C.y;
    arg2->unk8 = (f32) sp7C.z;
    if (arg4 != 0) {
        temp_a1 = sp68.x + arg0;
        sp68.y += arg1;
        sp68.x = temp_a1;
        Math_SmoothStepToS(arg3, temp_a1, 4, 0x1FFE, (s16) 1);
        Math_SmoothStepToS(arg3 + 2, sp68.y, 4, 0x1FFE, (s16) 1);
        Math_SmoothStepToS(arg3 + 4, sp68.z, 4, 0x1FFE, (s16) 1);
        return;
    }
    arg3->unk0 = sp68.x;
    arg3->unk2 = sp68.y;
    arg3->unk4 = sp68.z;
}

s32 func_80B77008(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg1 == 0x15) {
        arg1 = arg1;
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg5 + 0x35C);
    }
    if (arg1 == 0x15) {
        SysMatrix_MultiplyVector3fByState(&D_80B7765C, arg5 + 0x350);
    }
    return 0;
}

void func_80B77078(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    MtxF *sp54;
    GraphicsContext *sp4C;
    Gfx *sp44;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    MtxF *temp_t0;
    void *temp_t4;
    void *temp_v1;
    void *temp_v1_2;
    s32 phi_v0;

    if (arg1 == 0x15) {
        phi_v0 = 0;
        if ((arg4->unk328 & 0x10) != 0) {
            phi_v0 = 1;
        }
        func_80B76ED4(arg4->unk348, arg4->unk34A, arg4 + 0x33C, arg4 + 0x336, phi_v0);
        SysMatrix_InsertTranslation(arg4->unk33C, arg4->unk340, arg4->unk344, 0);
        Matrix_Scale(arg4->scale.x, arg4->scale.y, arg4->scale.z, 1);
        Matrix_RotateY(arg4->unk338, 1U);
        SysMatrix_InsertXRotation_s(arg4->unk336, 1);
        SysMatrix_InsertZRotation_s(arg4->unk33A, 1);
    }
    if (arg1 == 0xE) {
        func_8012C28C(arg0->state.gfxCtx);
        sp4C = arg0->state.gfxCtx;
        SysMatrix_MultiplyVector3fByState(&D_80B77668, arg4 + 0x370);
        SysMatrix_InsertTranslation(arg4->unk370, arg4->unk374, arg4->unk378, 0);
        Matrix_RotateY((s16) (func_800DFCDC((arg0 + (arg0->activeCamera * 4))->unk800) + 0x8000), 1U);
        SysMatrix_InsertZRotation_s(arg4->unk392, 1);
        SysMatrix_InsertXRotation_s(arg4->unk38E, 1);
        Matrix_Scale(0.008f, 0.008f, 0.008f, 1);
        temp_v0 = sp4C->polyOpa.p;
        sp4C->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp44 = temp_v0;
        sp44->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
        temp_v0_2 = sp4C->polyOpa.p;
        sp4C->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = (u32) &D_060004C8;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v1 = arg4->child;
        temp_t0 = SysMatrix_GetCurrentState();
        if ((temp_v1 == 0) || (temp_v1->update == 0)) {
            sp54 = temp_t0;
            Actor_SpawnAsChild(arg0 + 0x1CA0, arg4, arg0, 0x22F, temp_t0->mf[3][0], temp_t0->mf[3][1], temp_t0->mf[3][2], (s16) (s32) arg4->unk38E, (s16) (func_800DFCDC((arg0 + (arg0->activeCamera * 4))->unk800) + 0x8000), (s16) (s32) arg4->unk392, -1);
            return;
        }
        if (temp_v1->unk1A2 == 0) {
            temp_v1->world.pos.x = temp_t0->mf[3][0];
            arg4->child->world.pos.y = temp_t0->mf[3][1];
            arg4->child->world.pos.z = temp_t0->mf[3][2];
            temp_t4 = arg4->child;
            temp_t4->unk30 = (unaligned s32) arg4->unk38E;
            temp_t4->world.rot.z = (u16) arg4->unk392;
            arg4->child->world.rot.y = func_800DFCDC((arg0 + (arg0->activeCamera * 4))->unk800) + 0x8000;
            temp_v1_2 = arg4->child;
            temp_v1_2->unkBC = (unaligned s32) temp_v1_2->unk30;
            temp_v1_2->shape.rot.z = temp_v1_2->world.rot.z;
        }
        // Duplicate return node #10. Try simplifying control flow for better match
    }
}

void func_80B77354(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    if (arg1 == 0x15) {
        SysMatrix_InsertTranslation(arg2->unk33C, arg2->unk340, arg2->unk344, 0);
        Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
        Matrix_RotateY(arg2->unk338, 1U);
        SysMatrix_InsertXRotation_s(arg2->unk336, 1);
        SysMatrix_InsertZRotation_s(arg2->unk33A, 1);
    }
}

void EnTruMt_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnTruMt *this = (EnTruMt *) thisx;
    ? sp48;
    GraphicsContext *sp44;
    Gfx *sp3C;
    Gfx *sp38;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    sp48.unk0 = (s32) D_80B77674.unk0;
    sp48.unk4 = (s32) D_80B77674.unk4;
    sp48.unk8 = (s32) D_80B77674.unk8;
    temp_a0 = globalCtx->state.gfxCtx;
    sp44 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp44->polyOpa.p;
    sp44->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp44 = sp44;
    sp3C = temp_v0;
    sp3C->words.w1 = Lib_SegmentedToVirtual((sp + (this->unk34C * 4))->unk48);
    temp_v0_2 = sp44->polyOpa.p;
    sp44->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp38 = temp_v0_2;
    sp38->words.w1 = Lib_SegmentedToVirtual((sp + (this->unk34C * 4))->unk48);
    func_801343C0(globalCtx, this->unk148.skeleton, this->unk148.limbDrawTbl, (s32) this->unk148.dListCount, func_80B77008, func_80B77078, func_80B77354, &this->actor);
}

