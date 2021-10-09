s32 func_80BA8820(EnBaba *arg0, GlobalContext *arg1); /* static */
void func_80BA886C(Actor *arg0, GlobalContext *arg1, GlobalContext *, EnBaba *); /* static */
void func_80BA8C4C(GlobalContext *arg0, s32 arg1, GlobalContext *, EnBaba *); /* static */
void func_80BA8C90(EnBaba *arg0, GlobalContext *arg1); /* static */
s32 func_80BA8D2C(Actor *arg0, f32 arg1);           /* static */
void func_80BA8DF4(EnBaba *arg0, GlobalContext *arg1); /* static */
s32 func_80BA8F88(void *arg0, GlobalContext *arg1, void *arg2); /* static */
s32 func_80BA9110(u8 *arg2, GlobalContext *, struct_80133038_arg2 *); /* static */
? func_80BA9160(Actor *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_80BA93AC(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BA9FB0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80BAA198(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80BAA20C(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern FlexSkeletonHeader D_06005EF0;
extern AnimationHeader D_06006B10;
extern void D_060092A0;
static ActorAnimationEntry D_80BAA3A0 = {
    {(AnimationHeader *)0x6005DC4, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6006550, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6006B10, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6005154, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x60058B8, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6004910, 1.0f, 0.0f, 0.0f, 0, 0.0f},
};
static ColliderCylinderInit D_80BAA430 = {
    {0xA, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x12, 0x40, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80BAA45C = {0, 0, 0, 0, 0xFF};
static DamageTable D_80BAA468 = {
    {
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
static void D_80BAA488;                             /* unable to generate initializer */
static ? D_80BAA4A8;                                /* unable to generate initializer */
static s16 D_80BAA4B4 = {0xFA0, 4, 1, 3, 0x1770, 4, 1, 6, 0xFA0, 4, 1, 3, 0x1770, 4, 1, 6};
static ? D_80BAA4D4;                                /* unable to generate initializer */

typedef struct EnBaba {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ Actor *unk144;                     /* inferred */
    /* 0x0148 */ void (*actionFunc)(EnBaba *, GlobalContext *);
    /* 0x014C */ char pad14C[0x4];                  /* maybe part of actionFunc[2]? */
    /* 0x0150 */ SkelAnime unk150;                  /* inferred */
    /* 0x0194 */ ColliderCylinder unk194;           /* inferred */
    /* 0x01D4 */ s16 unk1D4;                        /* overlap; inferred */
    /* 0x01D6 */ s16 unk1D6;                        /* inferred */
    /* 0x01D8 */ char pad1D8[0x8];                  /* maybe part of unk1D6[5]? */
    /* 0x01E0 */ s16 unk1E0;                        /* inferred */
    /* 0x01E2 */ char pad1E2[0x2];                  /* maybe part of unk1E0[2]? */
    /* 0x01E4 */ Path *unk1E4;                      /* inferred */
    /* 0x01E8 */ s16 unk1E8;                        /* inferred */
    /* 0x01EA */ char pad1EA[0x1C];                 /* maybe part of unk1E8[15]? */
    /* 0x0206 */ Vec3s unk206;                      /* inferred */
    /* 0x020C */ char pad20C[0x66];                 /* maybe part of unk206[18]? */
    /* 0x0272 */ Vec3s unk272;                      /* inferred */
    /* 0x0278 */ char pad278[0x18C];                /* maybe part of unk272[67]? */
    /* 0x0404 */ s16 unk404;                        /* inferred */
    /* 0x0406 */ char pad406[0x4];                  /* maybe part of unk404[3]? */
    /* 0x040A */ u16 unk40A;                        /* inferred */
    /* 0x040C */ s32 unk40C;                        /* inferred */
    /* 0x0410 */ char pad410[0x24];                 /* maybe part of unk40C[10]? */
    /* 0x0434 */ u8 unk434;                         /* inferred */
    /* 0x0435 */ char pad435[0x1];                  /* maybe part of unk434[2]? */
    /* 0x0436 */ s16 unk436;                        /* inferred */
    /* 0x0438 */ char pad438[0x8];                  /* maybe part of unk436[5]? */
} EnBaba;                                           /* size 0x440 */

s32 func_80BA8820(EnBaba *arg0, GlobalContext *arg1) {
    Actor *temp_v0;

    temp_v0 = func_ActorCategoryIterateById(arg1, arg0->unk144, 4, 0x2A);
    arg0->unk144 = temp_v0;
    if (temp_v0 != 0) {
        return 1;
    }
    return 0;
}

void func_80BA886C(Actor *arg0, GlobalContext *arg1) {
    u16 temp_a3;
    u16 temp_v0;
    u16 temp_v0_2;
    u8 temp_v1;
    u16 phi_a3;

    temp_a3 = arg0->unk1E0;
    phi_a3 = temp_a3;
    if ((s32) temp_a3 >= 0x2A31) {
        if (temp_a3 != 0x2A31) {
            if (temp_a3 != 0x2A34) {
                if (temp_a3 != 0x2A35) {

                } else {
                    arg0->unk1E0 = 0x2A36U;
                    arg0->unk40A = (u16) (arg0->unk40A | 1);
                    phi_a3 = 0x2A36U & 0xFFFF;
                }
            } else if (gSaveContext.inventory.items[gItemSlots[0x47]] == 0x47) {
                arg0->unk1E0 = 0x2A36U;
                arg0->unk40A = (u16) (arg0->unk40A | 1);
                phi_a3 = 0x2A36U & 0xFFFF;
            } else {
                arg0->unk1E0 = 0x2A35U;
                arg0->unk40A = (u16) (arg0->unk40A | 0x20);
                phi_a3 = 0x2A35U & 0xFFFF;
            }
        } else {
            goto block_40;
        }
    } else if ((s32) temp_a3 >= 0x663) {
        if (temp_a3 != 0x2A30) {

        } else {
block_40:
            arg0->unk40A = (u16) (arg0->unk40A | 1);
            phi_a3 = arg0->unk1E0;
        }
    } else if ((s32) temp_a3 > 0) {
        switch (temp_a3) {
        case 1632:
            func_800B86C8(arg0, arg1, arg0->unk144);
            arg0->unk1E0 = 0x661U;
            phi_a3 = 0x661U & 0xFFFF;
            break;
        case 1633:
            func_800B86C8(arg0->unk144, arg1, arg0);
            arg0->unk1E0 = 0x662U;
            phi_a3 = 0x662U & 0xFFFF;
            break;
        case 1634:
            func_800B86C8(arg0, arg1, arg0->unk144);
            arg0->unk1E0 = 0x663U;
            gSaveContext.weekEventReg[73] |= 1;
            arg0->unk40A = (u16) (arg0->unk40A | 1);
            phi_a3 = arg0->unk1E0;
            break;
        case 1626:
            func_800B86C8(arg0, arg1, arg0->unk144);
            arg0->unk1E0 = 0x65BU;
            phi_a3 = 0x65BU & 0xFFFF;
            break;
        case 1627:
            func_800B86C8(arg0->unk144, arg1, arg0);
            arg0->unk1E0 = 0x65CU;
            phi_a3 = 0x65CU & 0xFFFF;
            break;
        case 1628:
            func_800B86C8(arg0, arg1, arg0->unk144);
            arg0->unk1E0 = 0x65DU;
            gSaveContext.weekEventReg[73] |= 2;
            arg0->unk40A = (u16) (arg0->unk40A | 1);
            phi_a3 = arg0->unk1E0;
            break;
        case 1630:
            func_800B86C8(arg0, arg1, arg0->unk144);
            arg0->unk1E0 = 0x65FU;
            arg0->unk40A = (u16) (arg0->unk40A | 1);
            phi_a3 = 0x65FU & 0xFFFF;
            break;
        }
    } else if (temp_a3 == 0) {
        temp_v0 = arg0->unk40A;
        if ((temp_v0 & 8) != 0) {
            phi_a3 = 0x2A34U & 0xFFFF;
            if ((gSaveContext.weekEventReg[33] & 8) != 0) {
                arg0->unk1E0 = 0x2A34U;
            } else {
                phi_a3 = 0x2A32U & 0xFFFF;
                if ((gSaveContext.weekEventReg[79] & 0x40) != 0) {
                    arg0->unk40A = (u16) (temp_v0 | 1);
                    arg0->unk1E0 = 0x2A33U;
                    phi_a3 = 0x2A33U & 0xFFFF;
                } else {
                    arg0->unk40A = (u16) (temp_v0 | 1);
                    arg0->unk1E0 = 0x2A32U;
                }
            }
        } else if (arg1->actorCtx.actorList[2].first->unk14B == 3) {
            temp_v1 = gSaveContext.weekEventReg[79];
            if ((temp_v1 & 0x20) == 0) {
                gSaveContext.weekEventReg[79] = temp_v1 | 0x20;
                arg0->unk1E0 = 0x2A37U;
                arg0->unk40A = (u16) (arg0->unk40A | 1);
                phi_a3 = 0x2A37U & 0xFFFF;
            } else {
                arg0->unk40A = (u16) (temp_v0 | 1);
                arg0->unk1E0 = 0x2A38U;
                phi_a3 = 0x2A38U & 0xFFFF;
            }
        } else if ((gSaveContext.weekEventReg[33] & 8) == 0) {
            phi_a3 = 0x662U & 0xFFFF;
            if ((gSaveContext.weekEventReg[73] & 1) == 0) {
                arg0->unk1E0 = 0x660U;
                phi_a3 = 0x660U & 0xFFFF;
            } else {
                arg0->unk1E0 = 0x662U;
            }
        } else {
            phi_a3 = 0x65EU & 0xFFFF;
            if ((gSaveContext.weekEventReg[73] & 2) == 0) {
                arg0->unk1E0 = 0x65AU;
                phi_a3 = 0x65AU & 0xFFFF;
            } else {
                arg0->unk1E0 = 0x65EU;
            }
        }
    }
    func_801518B0(arg1, phi_a3 & 0xFFFF, arg0);
    temp_v0_2 = arg0->unk40A;
    if ((temp_v0_2 & 1) != 0) {
        if ((temp_v0_2 & 0x40) != 0) {
            arg0->unk40A = (u16) (temp_v0_2 & 0xFFBF);
            func_80151BB4(arg1, 0x33U);
        }
        func_80151BB4(arg1, 4U);
    }
}

void func_80BA8C4C(GlobalContext *arg0, s32 arg1) {
    arg0->nextEntranceIndex = arg1 & 0xFFFF;
    arg0->unk_1887F = 0x40;
    gSaveContext.nextTransition = 0x40;
    arg0->sceneLoadFlag = 0x14;
}

void func_80BA8C90(EnBaba *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp1C;
    Collider *sp18;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;

    temp_a2 = arg0 + 0x194;
    arg0->unk194.dim.pos.y = (s16) (s32) arg0->actor.world.pos.y;
    arg0->unk194.dim.pos.x = (s16) (s32) (arg0->actor.world.pos.x + 5.0f);
    arg0->unk194.dim.pos.z = (s16) (s32) (arg0->actor.world.pos.z + 22.0f);
    sp18 = temp_a2;
    temp_a1 = arg1 + 0x18884;
    sp1C = temp_a1;
    CollisionCheck_SetAC(arg1, temp_a1, temp_a2);
    CollisionCheck_SetOC(arg1, temp_a1, temp_a2);
}

s32 func_80BA8D2C(Actor *arg0, f32 arg1) {
    s16 sp3E;
    s32 sp38;
    void sp2C;

    sp38 = 0;
    Math_SmoothStepToF(arg0 + 0x70, arg1, 0.4f, 1000.0f, 0.0f);
    sp3E = (s16) (s32) (arg0->speedXZ * 400.0f);
    if ((func_8013D68C(arg0->unk1E4, arg0->unk1E8, &sp2C) != 0) && (func_8013D768(arg0, &sp2C, sp3E) != 0)) {
        arg0->unk1E8 = (s16) (arg0->unk1E8 + 1);
        if ((s32) arg0->unk1E8 >= (s32) arg0->unk1E4->count) {
            sp38 = 1;
        }
    }
    return sp38;
}

void func_80BA8DF4(EnBaba *arg0, GlobalContext *arg1) {
    void *sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 *temp_a0;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    sp3C = temp_v1;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x150);
    if ((func_8013D5E8(arg0->actor.shape.rot.y, 0x36B0, arg0->actor.yawTowardsPlayer) != 0) && (temp_a0 = &sp30, ((arg0->unk40A & 4) == 0))) {
        sp30 = temp_v1->world.pos.x;
        sp34 = temp_v1->unkC44 + 3.0f;
        sp38 = temp_v1->world.pos.z;
        func_8013D2E0((Vec3f *) temp_a0, arg0 + 0x3C, arg0 + 0xBC, arg0 + 0x2DE, arg0 + 0x2E4, arg0 + 0x2EA, &D_80BAA4B4);
    } else {
        Math_SmoothStepToS(arg0 + 0x2DE, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2E0, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2E4, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2E6, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2EA, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2EC, 0, 4, 0x3E8, (s16) 1);
    }
    func_8013D9C8(arg1, arg0 + 0x302, arg0 + 0x326, 0x12);
    if ((arg0->unk40A & 2) != 0) {
        func_80BA8C90(arg0, arg1);
    }
}

s32 func_80BA8F88(void *arg0, GlobalContext *arg1, void *arg2) {
    u16 sp26;
    s8 sp23;
    s32 sp1C;
    s32 temp_lo;
    s32 temp_t0;
    s32 temp_t3;
    s32 temp_t8;
    s32 temp_v0;
    u8 temp_a1;
    s32 phi_a0;

    temp_t8 = (s32) (arg0->unk1C & 0x3F00) >> 8;
    sp23 = (s8) temp_t8;
    temp_t3 = *(&D_80BAA4A8 + (arg2->unk0 * 4));
    temp_t0 = gSaveContext.time - 0x3FFC;
    sp1C = temp_t3;
    if (temp_t3 >= 0) {
        temp_a1 = temp_t8 & 0xFF;
        arg0 = arg0;
        sp26 = temp_t0 & 0xFFFF;
        arg0->unk410 = func_8013BB34(arg1, temp_a1, temp_t3);
    }
    if (arg0->unk410 == 0) {
        return 0;
    }
    if ((arg0->unk434 != 0) && ((s32) arg0->unk436 >= 0)) {
        phi_a0 = temp_t0 & 0xFFFF & 0xFFFF;
    } else {
        phi_a0 = (s32) arg2->unk6;
    }
    temp_v0 = arg2->unk8;
    if (temp_v0 < phi_a0) {
        arg0->unk424 = (s32) ((phi_a0 - temp_v0) + 0xFFFF);
    } else {
        arg0->unk424 = (s32) (temp_v0 - phi_a0);
    }
    arg0->unk430 = (s32) ((temp_t0 & 0xFFFF) - phi_a0);
    arg0->unk438 = 0;
    temp_lo = (s32) arg0->unk424 / (s32) ((*arg0->unk410 - 2) & 0xFFFF);
    arg0->unk428 = temp_lo;
    arg0->unk42C = (s32) (((s32) arg0->unk430 / temp_lo) + 2);
    arg0->unk43C = 0;
    return 1;
}

s32 func_80BA9110(u8 *arg2) {
    u8 temp_v0;
    s32 phi_v1;

    temp_v0 = *arg2;
    phi_v1 = 1;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            phi_v1 = 0;
        } else {
            phi_v1 = func_80BA8F88();
        }
    }
    return phi_v1;
}

? func_80BA9160(Actor *arg0, GlobalContext *arg1) {
    void sp7C;
    Vec3f sp70;
    Vec3f sp64;
    Vec3f sp58;
    s32 sp54;
    s32 sp50;
    void *sp48;
    s32 *sp44;
    s32 *sp40;
    Vec3f *temp_s1;
    s32 *temp_a2;
    s32 *temp_v0;
    void *temp_a1;
    Vec3f *phi_s1;

    sp54 = 0;
    sp50 = 0;
    func_8013AF00(&sp7C, 3, arg0->unk410->count + 3);
    temp_s1 = arg0 + 0x414;
    phi_s1 = temp_s1;
    if (arg0->unk438 == 0) {
        temp_v0 = arg0 + 0x42C;
        sp58.x = D_801D15B0.x;
        temp_a1 = arg0 + 0x420;
        sp58.y = D_801D15B0.y;
        temp_a2 = arg0 + 0x430;
        sp58.z = D_801D15B0.z;
        sp44 = temp_a2;
        sp48 = temp_a1;
        sp40 = temp_v0;
        func_8013B6B0(arg0->unk410, temp_a1, temp_a2, arg0->unk428, arg0->unk424, temp_v0, &sp7C, &sp58, (s16) (s32) arg0->unk436);
        func_8013B878(arg1, arg0->unk410, arg0->unk42C, &sp58);
        arg0->unk438 = 1;
        arg0->world.pos.y = sp58.y;
        phi_s1 = arg0 + 0x414;
    } else {
        sp58.x = temp_s1->x;
        sp58.y = temp_s1->y;
        sp58.z = temp_s1->z;
        sp40 = arg0 + 0x42C;
        sp44 = arg0 + 0x430;
        sp48 = arg0 + 0x420;
    }
    arg0->world.pos.x = sp58.x;
    arg0->world.pos.z = sp58.z;
    if (func_8013AD6C(arg1) != 0) {
        sp54 = arg0->unk430;
        sp50 = arg0->unk42C;
        sp58.x = arg0->world.pos.x;
        sp58.y = arg0->world.pos.y;
        sp58.z = arg0->world.pos.z;
    }
    phi_s1->x = D_801D15B0.x;
    phi_s1->y = D_801D15B0.y;
    phi_s1->z = D_801D15B0.z;
    if (func_8013B6B0(arg0->unk410, sp48, sp44, arg0->unk428, arg0->unk424, sp40, &sp7C, phi_s1, (s16) (s32) arg0->unk436) != 0) {
        arg0->unk43C = 1;
    } else {
        sp70.x = arg0->world.pos.x;
        sp70.y = arg0->world.pos.y;
        sp70.z = arg0->world.pos.z;
        sp64.x = phi_s1->x;
        sp64.y = phi_s1->y;
        sp64.z = phi_s1->z;
        arg0->world.rot.y = Math_Vec3f_Yaw(&sp70, &sp64);
    }
    if (func_8013AD6C(arg1) != 0) {
        arg0->unk430 = sp54;
        arg0->unk42C = sp50;
        phi_s1->x = sp58.x;
        phi_s1->y = sp58.y;
        phi_s1->z = sp58.z;
    }
    return 0;
}

void func_80BA93AC(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    temp_v0 = arg0->unk434;
    if (temp_v0 != 1) {
        if (temp_v0 == 2) {
            gSaveContext.weekEventReg[58] |= 0x40;
            arg0->unk40A = (u16) (arg0->unk40A | 2);
            func_80BA9160(arg0, arg1, arg1);
        }
    } else {
        arg0->unk40C = 3;
        arg0->unk1E0 = 0x2A30;
        arg0->speedXZ = 0.0f;
        Enemy_StartFinishingBlow(arg1, arg0);
        arg0->unk40A = (u16) (arg0->unk40A | 4);
        func_800BDC5C(arg0 + 0x150, (ActorAnimationEntry []) &D_80BAA3A0, arg0->unk40C);
        arg0->unk148 = func_80BA9CD4;
    }
    Math_ApproachS(&arg0->shape.rot.y, arg0->world.rot.y, 4, 0x1554);
}

void func_80BA9480(EnBaba *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_4;
    s32 temp_v1;
    u16 temp_t1;
    u16 temp_v0_3;

    temp_a1 = &this->unk150;
    sp34 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06005EF0, &D_06006B10, &this->unk206, &this->unk272, 0x12);
    temp_t1 = this->unk40A | 0x80;
    this->actor.draw = EnBaba_Draw;
    this->unk40A = temp_t1;
    this->actor.flags |= 1;
    temp_v0 = globalCtx->sceneNum;
    if (temp_v0 == 0x68) {
        this->unk40A = temp_t1 | 2;
        this->unk40C = 1;
        func_800BDC5C(sp34, (ActorAnimationEntry []) &D_80BAA3A0, 1);
        this->actionFunc = func_80BA9758;
        return;
    }
    if (temp_v0 == 0x6E) {
        temp_v0_2 = this->actor.params;
        temp_v1 = (s32) (temp_v0_2 & 0xC000) >> 0xE;
        if ((temp_v1 == 0) && (gSaveContext.entranceIndex != 0xD670) && (((s32) (temp_v0_2 & 0x3F00) >> 8) != 0x3F)) {
            if (((gSaveContext.weekEventReg[58] & 0x40) != 0) || ((temp_v0_3 = gSaveContext.time, (((s32) temp_v0_3 < 0x38E) == 0)) && ((s32) temp_v0_3 < 0x4000))) {
                Actor_MarkForDeath(&this->actor);
                return;
            }
            this->unk404 = 0x32;
            this->unk40C = 2;
            func_800BDC5C(sp34, (ActorAnimationEntry []) &D_80BAA3A0, 2);
            this->actionFunc = func_80BA9B80;
            return;
        }
        if ((temp_v1 == 1) && (gSaveContext.entranceIndex == 0xD670)) {
            if ((gSaveContext.weekEventReg[81] & 2) != 0) {
                Actor_MarkForDeath(&this->actor);
                return;
            }
            this->unk40A |= 2;
            if ((gSaveContext.weekEventReg[33] & 8) != 0) {
                this->unk40C = 0;
            } else {
                this->unk40C = 1;
            }
            func_800BDC5C(sp34, (ActorAnimationEntry []) &D_80BAA3A0, this->unk40C);
            this->unk40A |= 8;
            this->actionFunc = func_80BA9758;
            return;
        }
        Actor_MarkForDeath(&this->actor);
        return;
    }
    temp_v0_4 = this->actor.params;
    this->unk40A |= 2;
    if (((s32) (temp_v0_4 & 0xC000) >> 0xE) == 2) {
        this->actor.flags &= -2;
        this->unk40C = 5;
        func_800BDC5C(sp34, (ActorAnimationEntry []) &D_80BAA3A0, 5);
        this->actionFunc = func_80BA9E00;
        return;
    }
    if (((s32) (temp_v0_4 & 0x3F00) >> 8) != 0x3F) {
        this->unk40C = 2;
        func_800BDC5C(sp34, (ActorAnimationEntry []) &D_80BAA3A0, 2);
        this->actionFunc = func_80BA9E10;
        return;
    }
    this->unk40C = 0;
    func_800BDC5C(sp34, (ActorAnimationEntry []) &D_80BAA3A0, 0);
    this->actionFunc = func_80BA9E48;
}

void func_80BA9758(EnBaba *this, GlobalContext *globalCtx) {
    if (((this->unk40A & 8) != 0) || (this->unk144 != 0) || (func_80BA8820(this, globalCtx) != 0)) {
        if (func_800B84D0(&this->actor, globalCtx) != 0) {
            func_80BA886C(&this->actor, globalCtx);
            if ((this->unk40A & 8) != 0) {
                this->actor.flags &= 0xFFFEFFFF;
            }
            this->actionFunc = func_80BA98EC;
            return;
        }
        if (this->actor.xzDistToPlayer < 100.0f) {
            if ((this->unk40A & 8) != 0) {
                this->actor.flags |= 0x10000;
            }
            func_800B8614(&this->actor, globalCtx, 100.0f);
        }
        // Duplicate return node #11. Try simplifying control flow for better match
    }
}

void func_80BA9848(EnBaba *this, GlobalContext *globalCtx) {
    u8 temp_v0;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (((temp_v0 == 5) || (temp_v0 == 6)) && (func_80147624(globalCtx) != 0)) {
        globalCtx->msgCtx.unk11F22 = 0x43;
        globalCtx->msgCtx.unk12023 = 4;
        this->actionFunc = func_80BA9B80;
    }
    Math_SmoothStepToS(this + 0xBE, this->actor.yawTowardsPlayer, 5, 0x1000, (s16) 0x100);
}

void func_80BA98EC(EnBaba *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a0_2;
    GlobalContext *temp_a0_3;
    MessageContext *temp_a0;
    u16 temp_v0_2;
    u8 temp_v0;

    temp_a0 = &globalCtx->msgCtx;
    globalCtx = globalCtx;
    this = this;
    temp_v0 = func_80152498(temp_a0);
    if (temp_v0 == 5) {
        temp_a0_2 = globalCtx;
        globalCtx = globalCtx;
        this = this;
        if (func_80147624(temp_a0_2) != 0) {
            temp_v0_2 = this->unk40A;
            if ((temp_v0_2 & 1) != 0) {
                this->unk40A = temp_v0_2 & 0xFFFE;
                globalCtx->msgCtx.unk11F22 = 0x43;
                globalCtx->msgCtx.unk12023 = 4;
                if ((this->unk40A & 8) != 0) {
                    if ((*(gBitFlags + 0x48) & gSaveContext.inventory.questItems) != 0) {
                        if (globalCtx->msgCtx.unk120B1 == 0) {
                            gSaveContext.weekEventReg[81] |= 2;
                            func_80BA8C4C(globalCtx, 0xD670, globalCtx, this);
                            return;
                        }
                        // Duplicate return node #16. Try simplifying control flow for better match
                        return;
                    }
                    gSaveContext.weekEventReg[81] |= 2;
                    func_80BA8C4C(globalCtx, 0xD670, globalCtx, this);
                    return;
                }
                this->unk1E0 = 0;
                this->actionFunc = func_80BA9758;
                return;
            }
            if ((temp_v0_2 & 0x20) != 0) {
                this->unk40A = temp_v0_2 & 0xFFDF;
                globalCtx->msgCtx.unk11F22 = 0x43;
                globalCtx->msgCtx.unk12023 = 4;
                this->actionFunc = func_80BA9AB8;
                return;
            }
            func_80BA886C(&this->actor, globalCtx, globalCtx, this);
            return;
        }
        // Duplicate return node #16. Try simplifying control flow for better match
        return;
    }
    temp_a0_3 = globalCtx;
    if (temp_v0 == 6) {
        globalCtx = globalCtx;
        if ((func_80147624(temp_a0_3) != 0) && (globalCtx->msgCtx.unk120B1 == 0)) {
            gSaveContext.weekEventReg[81] |= 2;
            func_80BA8C4C(globalCtx, 0xD670, globalCtx);
        }
    }
}

void func_80BA9AB8(EnBaba *this, GlobalContext *globalCtx) {
    if (Actor_HasParent(&this->actor, globalCtx) != 0) {
        this->actor.parent = NULL;
        this->unk40A |= 0x40;
        this->actionFunc = func_80BA9B24;
        return;
    }
    func_800B8A1C(&this->actor, globalCtx, 0x8D, 300.0f, 300.0f);
}

void func_80BA9B24(EnBaba *this, GlobalContext *globalCtx) {
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        func_80BA886C(&this->actor, globalCtx);
        this->actionFunc = func_80BA98EC;
        return;
    }
    func_800B85E0(&this->actor, globalCtx, 400.0f, -1);
}

void func_80BA9B80(EnBaba *this, GlobalContext *globalCtx) {
    struct_80133038_arg2 sp20;

    this->unk436 = gSaveContext.unk_14 + gGameInfo->data[15];
    if ((func_80133038(globalCtx, &D_80BAA488, &sp20) == 0) || ((sp20.unk0 != this->unk434) && (func_80BA9110((u8 *) this, globalCtx, &sp20) == 0))) {
        this->unk40A &= 0xFF7F;
        this->actor.flags &= -2;
        sp20.unk0 = 0;
    } else {
        this->unk40A |= 0x80;
        this->actor.flags |= 1;
    }
    this->unk434 = sp20.unk0;
    func_80BA93AC(&this->actor, globalCtx);
    if ((this->unk40A & 2) != 0) {
        if (func_800B84D0(&this->actor, globalCtx) != 0) {
            func_801518B0(globalCtx, 0x2A39U, &this->actor);
            this->actionFunc = func_80BA9848;
        } else if ((this->actor.xzDistToPlayer < 100.0f) || (this->actor.isTargeted != 0)) {
            func_800B863C(&this->actor, globalCtx);
        }
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
}

void func_80BA9CD4(EnBaba *this, GlobalContext *globalCtx) {
    s16 sp2E;
    s16 sp2C;
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s16 temp_v0;
    s16 phi_v1;

    sp2E = (s16) (s32) this->unk150.animCurrentFrame;
    sp2C = SkelAnime_GetFrameCount(&(&D_80BAA3A0)[this->unk40C].animation->common);
    this->unk1D6 = 0x25;
    this->unk1D4 = 0x17;
    if (this->unk40C == 3) {
        temp_a0 = &this->unk150;
        sp24 = temp_a0;
        if (func_801378B8(temp_a0, 0.0f) != 0) {
            Audio_PlayActorSound2(&this->actor, 0x6906U);
        }
        if (sp2E == sp2C) {
            this->unk40C = 4;
            func_800BDC5C(sp24, (ActorAnimationEntry []) &D_80BAA3A0, 4);
            return;
        }
        // Duplicate return node #12. Try simplifying control flow for better match
        return;
    }
    if ((gSaveContext.weekEventReg[79] & 0x40) != 0) {
        temp_v0 = this->unk404;
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            this->unk404 = temp_v0 - 1;
            phi_v1 = this->unk404;
        }
        if (phi_v1 == 0) {
            func_801A89A8(0x101400FF);
            func_80BA8C4C(globalCtx, 0xD670);
            return;
        }
        goto block_11;
    }
block_11:
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
}

void func_80BA9E00(EnBaba *this, GlobalContext *globalCtx) {

}

void func_80BA9E10(EnBaba *this, GlobalContext *globalCtx) {
    if (func_80BA8D2C(&this->actor, 1.0f) != 0) {
        this->unk1E8 = 0;
    }
}

void func_80BA9E48(EnBaba *this, GlobalContext *globalCtx) {
    this->unkBC = (unaligned s32) this->unk30;
    this->actor.shape.rot.z = (s16) (u16) this->actor.world.rot.z;
}

void EnBaba_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnBaba *this = (EnBaba *) thisx;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;

    temp_a1 = &this->unk194;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &D_80BAA430);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80BAA468, &D_80BAA45C);
    this->unk1E4 = func_8013D648(globalCtx, (s16) ((s32) (this->actor.params & 0x3F00) >> 8), 0x3F);
    Actor_SetScale(&this->actor, 0.01f);
    this->actor.targetMode = 0;
    this->actionFunc = func_80BA9480;
    this->actor.gravity = -4.0f;
}

void EnBaba_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBaba *this = (EnBaba *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk194);
}

void EnBaba_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnBaba *this = (EnBaba *) thisx;
    this->actionFunc(this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 4U);
    func_80BA8DF4(this, globalCtx);
}

s32 func_80BA9FB0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    void *sp24;
    s32 temp_v0;
    void *temp_v1;

    if (arg1 == 6) {
        SysMatrix_InsertTranslation(1500.0f, 0.0f, 0.0f, 1);
        SysMatrix_InsertXRotation_s(arg5->unk2E6, 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) arg5->unk2E4 * -1), 1);
        SysMatrix_InsertTranslation(-1500.0f, 0.0f, 0.0f, 1);
    }
    if (arg1 == 5) {
        SysMatrix_InsertXRotation_s((s16) ((s32) arg5->unk2EC * -1), 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) arg5->unk2EA * -1), 1);
    }
    if ((arg1 == 6) && (arg5->unk1E2 != 0) && ((arg0->state.frames & 1) == 0)) {
        SysMatrix_InsertTranslation(40.0f, 0.0f, 0.0f, 1);
    }
    if ((arg1 == 5) || (arg1 == 0xA) || (arg1 == 0xE)) {
        temp_v1 = arg5 + (arg1 * 2);
        sp24 = temp_v1;
        arg4->y += (s32) (Math_SinS(temp_v1->unk302) * 200.0f);
        arg4->z += (s32) (Math_CosS(temp_v1->unk326) * 200.0f);
    }
    temp_v0 = arg5->unk40C;
    if (((temp_v0 == 1) || (temp_v0 == 3) || (temp_v0 == 4) || (((s32) (arg5->params & 0xC000) >> 0xE) == 2)) && (arg1 == 8)) {
        *arg2 = NULL;
    }
    return 0;
}

void func_80BAA198(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f sp18;

    sp18.x = D_80BAA4D4.unk0;
    sp18.y = D_80BAA4D4.unk4;
    sp18.z = D_80BAA4D4.unk8;
    if (arg1 == 7) {
        arg4->focus.pos.x = arg4->world.pos.x;
        arg4->focus.pos.y = arg4->world.pos.y;
        arg4->focus.pos.z = arg4->world.pos.z;
        SysMatrix_MultiplyVector3fByState(&sp18, arg4 + 0x3C);
    }
}

void func_80BAA20C(GlobalContext *arg0, s32 arg1, Actor *arg2) {

}

void EnBaba_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnBaba *this = (EnBaba *) thisx;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    GraphicsContext *sp3C;
    Gfx *sp34;
    Gfx *temp_v0;
    GraphicsContext *temp_a0;
    f32 *temp_a1;
    s32 temp_v0_2;

    if ((this->unk40A & 2) != 0) {
        temp_a0 = globalCtx->state.gfxCtx;
        sp3C = temp_a0;
        func_8012C5B0(temp_a0);
        temp_v0 = sp3C->polyOpa.p;
        sp3C->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060020;
        sp34 = temp_v0;
        sp34->words.w1 = Lib_SegmentedToVirtual(&D_060092A0);
        func_801343C0(globalCtx, this->unk150.skeleton, this->unk150.limbDrawTbl, (s32) this->unk150.dListCount, func_80BA9FB0, func_80BAA198, func_80BAA20C, &this->actor);
        if ((this->unk40A & 0x80) != 0) {
            temp_v0_2 = this->unk40C;
            if ((temp_v0_2 == 3) || (temp_v0_2 == 4)) {
                func_8012C2DC(globalCtx->state.gfxCtx);
                sp4C = this->actor.world.pos.x + 20.0f;
                sp50 = this->actor.world.pos.y;
                sp54 = this->actor.world.pos.z + 20.0f;
            } else {
                sp4C.unk0 = this->actor.world.pos.x;
                sp4C.unk4 = (f32) this->actor.world.pos.y;
                sp4C.unk8 = (f32) this->actor.world.pos.z;
            }
            temp_a1 = &sp40;
            sp48 = 0.3f;
            sp44 = 0.3f;
            sp40 = 0.3f;
            func_800BC620((Vec3f *) &sp4C, (Vec3f *) temp_a1, 0xFF, globalCtx);
        }
    }
}

