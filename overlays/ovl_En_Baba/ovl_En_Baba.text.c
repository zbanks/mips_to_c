typedef struct EnBaba {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ void (*actionFunc)(EnBaba *, GlobalContext *);
    /* 0x14C */ char pad_14C[0x4];
    /* 0x150 */ SkelAnime unk_150;                  /* inferred */
    /* 0x194 */ ColliderCylinder unk_194;           /* inferred */
    /* 0x1D4 */ s16 unk_1D4;                        /* overlap; inferred */
    /* 0x1D6 */ s16 unk_1D6;                        /* overlap; inferred */
    /* 0x1E0 */ s16 unk_1E0;                        /* inferred */
    /* 0x1E2 */ char pad_1E2[0x2];
    /* 0x1E4 */ Path *unk_1E4;                      /* inferred */
    /* 0x1E8 */ s16 unk_1E8;                        /* inferred */
    /* 0x1EA */ char pad_1EA[0x1C];                 /* maybe part of unk_1E8[15]? */
    /* 0x206 */ Vec3s unk_206;                      /* inferred */
    /* 0x20C */ char pad_20C[0x66];                 /* maybe part of unk_206[18]? */
    /* 0x272 */ Vec3s unk_272;                      /* inferred */
    /* 0x278 */ char pad_278[0x18C];                /* maybe part of unk_272[67]? */
    /* 0x404 */ s16 unk_404;                        /* inferred */
    /* 0x406 */ char pad_406[0x4];                  /* maybe part of unk_404[3]? */
    /* 0x40A */ u16 unk_40A;                        /* inferred */
    /* 0x40C */ s32 unk_40C;                        /* inferred */
    /* 0x410 */ char pad_410[0x24];                 /* maybe part of unk_40C[10]? */
    /* 0x434 */ u8 unk_434;                         /* inferred */
    /* 0x435 */ char pad_435[0x1];
    /* 0x436 */ s16 unk_436;                        /* inferred */
    /* 0x438 */ char pad_438[0x8];                  /* maybe part of unk_436[5]? */
} EnBaba;                                           /* size = 0x440 */

struct _mips2c_stack_EnBaba_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnBaba_Draw {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ GraphicsContext *sp3C;               /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x8];
};                                                  /* size = 0x60 */

struct _mips2c_stack_EnBaba_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnBaba_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BA8820 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA886C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BA8C4C {};              /* size 0x0 */

struct _mips2c_stack_func_80BA8C90 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Collider *sp18;                      /* inferred */
    /* 0x1C */ CollisionCheckContext *sp1C;         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BA8D2C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0xC];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x2];
    /* 0x3E */ s16 sp3E;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BA8DF4 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BA8F88 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x3];
    /* 0x23 */ s8 sp23;                             /* inferred */
    /* 0x24 */ char pad_24[0x2];                    /* maybe part of sp23[3]? */
    /* 0x26 */ u16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BA9110 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA9160 {
    /* 0x000 */ char pad_0[0x40];
    /* 0x040 */ s32 *sp40;                          /* inferred */
    /* 0x044 */ s32 *sp44;                          /* inferred */
    /* 0x048 */ void *sp48;                         /* inferred */
    /* 0x04C */ char pad_4C[0x4];
    /* 0x050 */ s32 sp50;                           /* inferred */
    /* 0x054 */ s32 sp54;                           /* inferred */
    /* 0x058 */ f32 sp58;                           /* inferred */
    /* 0x05C */ f32 sp5C;                           /* inferred */
    /* 0x060 */ f32 sp60;                           /* inferred */
    /* 0x064 */ ? sp64;                             /* inferred */
    /* 0x064 */ char pad_64[0xC];
    /* 0x070 */ ? sp70;                             /* inferred */
    /* 0x070 */ char pad_70[0xC];
    /* 0x07C */ ? sp7C;                             /* inferred */
    /* 0x07C */ char pad_7C[0x424];
};                                                  /* size = 0x4A0 */

struct _mips2c_stack_func_80BA93AC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BA9480 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BA9758 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BA9848 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BA98EC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA9AB8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BA9B24 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA9B80 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ u8 sp20;                             /* inferred */
    /* 0x21 */ char pad_21[0xF];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BA9CD4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ s16 sp2C;                            /* inferred */
    /* 0x2E */ s16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BA9E00 {};              /* size 0x0 */

struct _mips2c_stack_func_80BA9E10 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BA9E48 {};              /* size 0x0 */

struct _mips2c_stack_func_80BA9FB0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BAA198 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ? sp18;                              /* inferred */
    /* 0x18 */ char pad_18[0x10];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BAA20C {};              /* size 0x0 */

s32 func_80BA8820(EnBaba *arg0, GlobalContext *arg1); /* static */
void func_80BA886C(Actor *arg0, GlobalContext *arg1, GlobalContext *, EnBaba *); /* static */
void func_80BA8C4C(GlobalContext *arg0, s32 arg1, GlobalContext *, EnBaba *); /* static */
void func_80BA8C90(EnBaba *arg0, GlobalContext *arg1); /* static */
s32 func_80BA8D2C(Actor *arg0, f32 arg1);           /* static */
void func_80BA8DF4(EnBaba *arg0, GlobalContext *arg1); /* static */
s32 func_80BA8F88(void *arg0, GlobalContext *arg1, void *arg2); /* static */
s32 func_80BA9110(u8 *arg2, GlobalContext *, u8 *); /* static */
? func_80BA9160(Actor *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_80BA93AC(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BA9FB0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80BAA198(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80BAA20C(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern FlexSkeletonHeader D_06005EF0;
extern AnimationHeader D_06006B10;
extern void D_060092A0;
static ActorAnimationEntry D_80BAA3A0[6] = {
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
static s16 D_80BAA4B4[16] = {0xFA0, 4, 1, 3, 0x1770, 4, 1, 6, 0xFA0, 4, 1, 3, 0x1770, 4, 1, 6};
static ? D_80BAA4D4;                                /* unable to generate initializer */

s32 func_80BA8820(EnBaba *arg0, GlobalContext *arg1) {
    Actor *temp_v0;

    temp_v0 = func_ActorCategoryIterateById(arg1, arg0->unk_144, 4, 0x2A);
    arg0->unk_144 = temp_v0;
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

    temp_a3 = arg0->unk_1E0;
    phi_a3 = temp_a3;
    if ((s32) temp_a3 >= 0x2A31) {
        if (temp_a3 != 0x2A31) {
            if (temp_a3 != 0x2A34) {
                if (temp_a3 != 0x2A35) {

                } else {
                    arg0->unk_1E0 = 0x2A36U;
                    arg0->unk_40A = (u16) (arg0->unk_40A | 1);
                    phi_a3 = 0x2A36U & 0xFFFF;
                }
            } else if (gSaveContext.inventory.items[gItemSlots[71]] == 0x47) {
                arg0->unk_1E0 = 0x2A36U;
                arg0->unk_40A = (u16) (arg0->unk_40A | 1);
                phi_a3 = 0x2A36U & 0xFFFF;
            } else {
                arg0->unk_1E0 = 0x2A35U;
                arg0->unk_40A = (u16) (arg0->unk_40A | 0x20);
                phi_a3 = 0x2A35U & 0xFFFF;
            }
        } else {
            goto block_40;
        }
    } else if ((s32) temp_a3 >= 0x663) {
        if (temp_a3 != 0x2A30) {

        } else {
block_40:
            arg0->unk_40A = (u16) (arg0->unk_40A | 1);
            phi_a3 = arg0->unk_1E0;
        }
    } else if ((s32) temp_a3 > 0) {
        switch (temp_a3) {
        case 1632:
            func_800B86C8(arg0, arg1, arg0->unk_144);
            arg0->unk_1E0 = 0x661U;
            phi_a3 = 0x661U & 0xFFFF;
            break;
        case 1633:
            func_800B86C8(arg0->unk_144, arg1, arg0);
            arg0->unk_1E0 = 0x662U;
            phi_a3 = 0x662U & 0xFFFF;
            break;
        case 1634:
            func_800B86C8(arg0, arg1, arg0->unk_144);
            arg0->unk_1E0 = 0x663U;
            gSaveContext.weekEventReg[73] |= 1;
            arg0->unk_40A = (u16) (arg0->unk_40A | 1);
            phi_a3 = arg0->unk_1E0;
            break;
        case 1626:
            func_800B86C8(arg0, arg1, arg0->unk_144);
            arg0->unk_1E0 = 0x65BU;
            phi_a3 = 0x65BU & 0xFFFF;
            break;
        case 1627:
            func_800B86C8(arg0->unk_144, arg1, arg0);
            arg0->unk_1E0 = 0x65CU;
            phi_a3 = 0x65CU & 0xFFFF;
            break;
        case 1628:
            func_800B86C8(arg0, arg1, arg0->unk_144);
            arg0->unk_1E0 = 0x65DU;
            gSaveContext.weekEventReg[73] |= 2;
            arg0->unk_40A = (u16) (arg0->unk_40A | 1);
            phi_a3 = arg0->unk_1E0;
            break;
        case 1630:
            func_800B86C8(arg0, arg1, arg0->unk_144);
            arg0->unk_1E0 = 0x65FU;
            arg0->unk_40A = (u16) (arg0->unk_40A | 1);
            phi_a3 = 0x65FU & 0xFFFF;
            break;
        }
    } else if (temp_a3 == 0) {
        temp_v0 = arg0->unk_40A;
        if ((temp_v0 & 8) != 0) {
            phi_a3 = 0x2A34U & 0xFFFF;
            if ((gSaveContext.weekEventReg[33] & 8) != 0) {
                arg0->unk_1E0 = 0x2A34U;
            } else {
                phi_a3 = 0x2A32U & 0xFFFF;
                if ((gSaveContext.weekEventReg[79] & 0x40) != 0) {
                    arg0->unk_40A = (u16) (temp_v0 | 1);
                    arg0->unk_1E0 = 0x2A33U;
                    phi_a3 = 0x2A33U & 0xFFFF;
                } else {
                    arg0->unk_40A = (u16) (temp_v0 | 1);
                    arg0->unk_1E0 = 0x2A32U;
                }
            }
        } else if (arg1->actorCtx.actorList[2].first->unk_14B == 3) {
            temp_v1 = gSaveContext.weekEventReg[79];
            if ((temp_v1 & 0x20) == 0) {
                gSaveContext.weekEventReg[79] = temp_v1 | 0x20;
                arg0->unk_1E0 = 0x2A37U;
                arg0->unk_40A = (u16) (arg0->unk_40A | 1);
                phi_a3 = 0x2A37U & 0xFFFF;
            } else {
                arg0->unk_40A = (u16) (temp_v0 | 1);
                arg0->unk_1E0 = 0x2A38U;
                phi_a3 = 0x2A38U & 0xFFFF;
            }
        } else if ((gSaveContext.weekEventReg[33] & 8) == 0) {
            phi_a3 = 0x662U & 0xFFFF;
            if ((gSaveContext.weekEventReg[73] & 1) == 0) {
                arg0->unk_1E0 = 0x660U;
                phi_a3 = 0x660U & 0xFFFF;
            } else {
                arg0->unk_1E0 = 0x662U;
            }
        } else {
            phi_a3 = 0x65EU & 0xFFFF;
            if ((gSaveContext.weekEventReg[73] & 2) == 0) {
                arg0->unk_1E0 = 0x65AU;
                phi_a3 = 0x65AU & 0xFFFF;
            } else {
                arg0->unk_1E0 = 0x65EU;
            }
        }
    }
    func_801518B0(arg1, phi_a3 & 0xFFFF, arg0);
    temp_v0_2 = arg0->unk_40A;
    if ((temp_v0_2 & 1) != 0) {
        if ((temp_v0_2 & 0x40) != 0) {
            arg0->unk_40A = (u16) (temp_v0_2 & 0xFFBF);
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
    arg0->unk_194.dim.pos.y = (s16) (s32) arg0->actor.world.pos.y;
    arg0->unk_194.dim.pos.x = (s16) (s32) (arg0->actor.world.pos.x + 5.0f);
    arg0->unk_194.dim.pos.z = (s16) (s32) (arg0->actor.world.pos.z + 22.0f);
    sp18 = temp_a2;
    temp_a1 = arg1 + 0x18884;
    sp1C = temp_a1;
    CollisionCheck_SetAC(arg1, temp_a1, temp_a2);
    CollisionCheck_SetOC(arg1, temp_a1, temp_a2);
}

s32 func_80BA8D2C(Actor *arg0, f32 arg1) {
    s16 sp3E;
    s32 sp38;
    ? sp2C;

    sp38 = 0;
    Math_SmoothStepToF(arg0 + 0x70, arg1, 0.4f, 1000.0f, 0.0f);
    sp3E = (s16) (s32) (arg0->speedXZ * 400.0f);
    if ((func_8013D68C(arg0[1].colChkInfo.damageTable, arg0->unk_1E8, (void *) &sp2C) != 0) && (func_8013D768(arg0, (void *) &sp2C, sp3E) != 0)) {
        arg0->unk_1E8 = (s16) (arg0->unk_1E8 + 1);
        if ((s32) arg0->unk_1E8 >= (s32) arg0[1].colChkInfo.damageTable->attack[0]) {
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
    if ((func_8013D5E8(arg0->actor.shape.rot.y, 0x36B0, arg0->actor.yawTowardsPlayer) != 0) && (temp_a0 = &sp30, ((arg0->unk_40A & 4) == 0))) {
        sp30 = temp_v1->world.pos.x;
        sp34 = temp_v1[9].shape.feetPos[1].x + 3.0f;
        sp38 = temp_v1->world.pos.z;
        func_8013D2E0((Vec3f *) temp_a0, arg0 + 0x3C, arg0 + 0xBC, arg0 + 0x2DE, arg0 + 0x2E4, arg0 + 0x2EA, D_80BAA4B4);
    } else {
        Math_SmoothStepToS(arg0 + 0x2DE, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2E0, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2E4, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2E6, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2EA, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2EC, 0, 4, 0x3E8, (s16) 1);
    }
    func_8013D9C8(arg1, arg0 + 0x302, arg0 + 0x326, 0x12);
    if ((arg0->unk_40A & 2) != 0) {
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

    temp_t8 = (s32) (arg0->unk_1C & 0x3F00) >> 8;
    sp23 = (s8) temp_t8;
    temp_t3 = *(&D_80BAA4A8 + (arg2->unk_0 * 4));
    temp_t0 = gSaveContext.time - 0x3FFC;
    sp1C = temp_t3;
    if (temp_t3 >= 0) {
        temp_a1 = temp_t8 & 0xFF;
        arg0 = arg0;
        sp26 = temp_t0 & 0xFFFF;
        arg0->unk_410 = func_8013BB34(arg1, temp_a1, temp_t3);
    }
    if (arg0->unk_410 == 0) {
        return 0;
    }
    if ((arg0->unk_434 != 0) && ((s32) arg0->unk_436 >= 0)) {
        phi_a0 = temp_t0 & 0xFFFF & 0xFFFF;
    } else {
        phi_a0 = (s32) arg2->unk_6;
    }
    temp_v0 = arg2->unk_8;
    if (temp_v0 < phi_a0) {
        arg0->unk_424 = (s32) ((phi_a0 - temp_v0) + 0xFFFF);
    } else {
        arg0->unk_424 = (s32) (temp_v0 - phi_a0);
    }
    arg0->unk_430 = (s32) ((temp_t0 & 0xFFFF) - phi_a0);
    arg0->unk_438 = 0;
    temp_lo = (s32) arg0->unk_424 / (s32) ((*arg0->unk_410 - 2) & 0xFFFF);
    arg0->unk_428 = temp_lo;
    arg0->unk_42C = (s32) (((s32) arg0->unk_430 / temp_lo) + 2);
    arg0->unk_43C = 0;
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
    ? sp7C;
    ? sp70;
    ? sp64;
    f32 sp58;
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
    func_8013AF00((void *) &sp7C, 3, arg0[3].focus.pos.z->count + 3);
    temp_s1 = arg0 + 0x414;
    phi_s1 = temp_s1;
    if (arg0[3].velocity.z == 0) {
        temp_v0 = arg0 + 0x42C;
        sp58.unk_0 = D_801D15B0.x;
        temp_a1 = arg0 + 0x420;
        (&sp58)[1] = D_801D15B0.y;
        temp_a2 = arg0 + 0x430;
        (&sp58)[2] = D_801D15B0.z;
        sp44 = temp_a2;
        sp48 = temp_a1;
        sp40 = temp_v0;
        func_8013B6B0(arg0[3].focus.pos.z, temp_a1, temp_a2, arg0[3].scale.y, arg0[3].scale.x, temp_v0, (void *) &sp7C, (Vec3f *) &sp58, (s16) (s32) arg0->unk_436);
        func_8013B878(arg1, arg0[3].focus.pos.z, arg0[3].scale.z, (Vec3f *) &sp58);
        arg0[3].velocity.z = 1;
        arg0->world.pos.y = sp5C;
        phi_s1 = arg0 + 0x414;
    } else {
        sp58.unk_0 = temp_s1->x;
        (&sp58)[1] = temp_s1->y;
        (&sp58)[2] = temp_s1->z;
        sp40 = arg0 + 0x42C;
        sp44 = arg0 + 0x430;
        sp48 = arg0 + 0x420;
    }
    arg0->world.pos.x = sp58;
    arg0->world.pos.z = sp60;
    if (func_8013AD6C(arg1) != 0) {
        sp54 = arg0[3].velocity.x;
        sp50 = arg0[3].scale.z;
        sp58.unk_0 = arg0->world.pos.x;
        (&sp58)[1] = arg0->world.pos.y;
        (&sp58)[2] = arg0->world.pos.z;
    }
    phi_s1->x = D_801D15B0.x;
    phi_s1->y = D_801D15B0.y;
    phi_s1->z = D_801D15B0.z;
    if (func_8013B6B0(arg0[3].focus.pos.z, sp48, sp44, arg0[3].scale.y, arg0[3].scale.x, sp40, (void *) &sp7C, phi_s1, (s16) (s32) arg0->unk_436) != 0) {
        arg0[3].speedXZ = 1e-45.0f;
    } else {
        sp70.unk_0 = (f32) arg0->world.pos.x;
        sp70.unk_4 = (f32) arg0->world.pos.y;
        sp70.unk_8 = (f32) arg0->world.pos.z;
        sp64.unk_0 = (f32) phi_s1->x;
        sp64.unk_4 = (f32) phi_s1->y;
        sp64.unk_8 = (f32) phi_s1->z;
        arg0->world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp70, (Vec3f *) &sp64);
    }
    if (func_8013AD6C(arg1) != 0) {
        arg0[3].velocity.x = sp54;
        arg0[3].scale.z = sp50;
        phi_s1->x = sp58.unk_0;
        phi_s1->y = (&sp58)[1];
        phi_s1->z = (&sp58)[2];
    }
    return 0;
}

void func_80BA93AC(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    temp_v0 = arg0->unk_434;
    if (temp_v0 != 1) {
        if (temp_v0 == 2) {
            gSaveContext.weekEventReg[58] |= 0x40;
            arg0->unk_40A = (u16) (arg0->unk_40A | 2);
            func_80BA9160(arg0, arg1, arg1);
        }
    } else {
        arg0[3].focus.pos.y = 4e-45.0f;
        arg0->unk_1E0 = 0x2A30;
        arg0->speedXZ = 0.0f;
        Enemy_StartFinishingBlow(arg1, arg0);
        arg0->unk_40A = (u16) (arg0->unk_40A | 4);
        func_800BDC5C((SkelAnime *) &arg0[1].home.pos.y, (ActorAnimationEntry []) D_80BAA3A0, (bitwise s32) arg0[3].focus.pos.y);
        arg0[1].flags = (u32) func_80BA9CD4;
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

    temp_a1 = &this->unk_150;
    sp34 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06005EF0, &D_06006B10, &this->unk_206, &this->unk_272, 0x12);
    temp_t1 = this->unk_40A | 0x80;
    this->actor.draw = EnBaba_Draw;
    this->unk_40A = temp_t1;
    this->actor.flags |= 1;
    temp_v0 = globalCtx->sceneNum;
    if (temp_v0 == 0x68) {
        this->unk_40A = temp_t1 | 2;
        this->unk_40C = 1;
        func_800BDC5C(sp34, (ActorAnimationEntry []) D_80BAA3A0, 1);
        this->actionFunc = func_80BA9758;
        return;
    }
    if (temp_v0 == 0x6E) {
        temp_v0_2 = this->actor.params;
        temp_v1 = (s32) (temp_v0_2 & 0xC000) >> 0xE;
        if ((temp_v1 == 0) && (gSaveContext.entranceIndex != 0xD670) && (((s32) (temp_v0_2 & 0x3F00) >> 8) != 0x3F)) {
            if (((gSaveContext.weekEventReg[58] & 0x40) != 0) || ((temp_v0_3 = gSaveContext.time, (((s32) temp_v0_3 < 0x38E) == 0)) && ((s32) temp_v0_3 < 0x4000))) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            this->unk_404 = 0x32;
            this->unk_40C = 2;
            func_800BDC5C(sp34, (ActorAnimationEntry []) D_80BAA3A0, 2);
            this->actionFunc = func_80BA9B80;
            return;
        }
        if ((temp_v1 == 1) && (gSaveContext.entranceIndex == 0xD670)) {
            if ((gSaveContext.weekEventReg[81] & 2) != 0) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            this->unk_40A |= 2;
            if ((gSaveContext.weekEventReg[33] & 8) != 0) {
                this->unk_40C = 0;
            } else {
                this->unk_40C = 1;
            }
            func_800BDC5C(sp34, (ActorAnimationEntry []) D_80BAA3A0, this->unk_40C);
            this->unk_40A |= 8;
            this->actionFunc = func_80BA9758;
            return;
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_v0_4 = this->actor.params;
    this->unk_40A |= 2;
    if (((s32) (temp_v0_4 & 0xC000) >> 0xE) == 2) {
        this->actor.flags &= -2;
        this->unk_40C = 5;
        func_800BDC5C(sp34, (ActorAnimationEntry []) D_80BAA3A0, 5);
        this->actionFunc = func_80BA9E00;
        return;
    }
    if (((s32) (temp_v0_4 & 0x3F00) >> 8) != 0x3F) {
        this->unk_40C = 2;
        func_800BDC5C(sp34, (ActorAnimationEntry []) D_80BAA3A0, 2);
        this->actionFunc = func_80BA9E10;
        return;
    }
    this->unk_40C = 0;
    func_800BDC5C(sp34, (ActorAnimationEntry []) D_80BAA3A0, 0);
    this->actionFunc = func_80BA9E48;
}

void func_80BA9758(EnBaba *this, GlobalContext *globalCtx) {
    if (((this->unk_40A & 8) != 0) || (this->unk_144 != 0) || (func_80BA8820(this, globalCtx) != 0)) {
        if (func_800B84D0((Actor *) this, globalCtx) != 0) {
            func_80BA886C((Actor *) this, globalCtx);
            if ((this->unk_40A & 8) != 0) {
                this->actor.flags &= 0xFFFEFFFF;
            }
            this->actionFunc = func_80BA98EC;
            return;
        }
        if (this->actor.xzDistToPlayer < 100.0f) {
            if ((this->unk_40A & 8) != 0) {
                this->actor.flags |= 0x10000;
            }
            func_800B8614((Actor *) this, globalCtx, 100.0f);
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
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
            temp_v0_2 = this->unk_40A;
            if ((temp_v0_2 & 1) != 0) {
                this->unk_40A = temp_v0_2 & 0xFFFE;
                globalCtx->msgCtx.unk11F22 = 0x43;
                globalCtx->msgCtx.unk12023 = 4;
                if ((this->unk_40A & 8) != 0) {
                    if ((gBitFlags[18] & gSaveContext.inventory.questItems) != 0) {
                        if (globalCtx->msgCtx.unk120B1 == 0) {
                            gSaveContext.weekEventReg[81] |= 2;
                            func_80BA8C4C(globalCtx, 0xD670, globalCtx, this);
                            return;
                        }
                        /* Duplicate return node #16. Try simplifying control flow for better match */
                        return;
                    }
                    gSaveContext.weekEventReg[81] |= 2;
                    func_80BA8C4C(globalCtx, 0xD670, globalCtx, this);
                    return;
                }
                this->unk_1E0 = 0;
                this->actionFunc = func_80BA9758;
                return;
            }
            if ((temp_v0_2 & 0x20) != 0) {
                this->unk_40A = temp_v0_2 & 0xFFDF;
                globalCtx->msgCtx.unk11F22 = 0x43;
                globalCtx->msgCtx.unk12023 = 4;
                this->actionFunc = func_80BA9AB8;
                return;
            }
            func_80BA886C((Actor *) this, globalCtx, globalCtx, this);
            return;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
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
    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        this->actor.parent = NULL;
        this->unk_40A |= 0x40;
        this->actionFunc = func_80BA9B24;
        return;
    }
    func_800B8A1C((Actor *) this, globalCtx, 0x8D, 300.0f, 300.0f);
}

void func_80BA9B24(EnBaba *this, GlobalContext *globalCtx) {
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        func_80BA886C((Actor *) this, globalCtx);
        this->actionFunc = func_80BA98EC;
        return;
    }
    func_800B85E0((Actor *) this, globalCtx, 400.0f, -1);
}

void func_80BA9B80(EnBaba *this, GlobalContext *globalCtx) {
    u8 sp20;

    this->unk_436 = gSaveContext.unk_14 + gGameInfo->data[15];
    if ((func_80133038(globalCtx, &D_80BAA488, (struct_80133038_arg2 *) &sp20) == 0) || ((sp20 != this->unk_434) && (func_80BA9110((u8 *) this, globalCtx, &sp20) == 0))) {
        this->unk_40A &= 0xFF7F;
        this->actor.flags &= -2;
        sp20 = 0;
    } else {
        this->unk_40A |= 0x80;
        this->actor.flags |= 1;
    }
    this->unk_434 = sp20;
    func_80BA93AC((Actor *) this, globalCtx);
    if ((this->unk_40A & 2) != 0) {
        if (func_800B84D0((Actor *) this, globalCtx) != 0) {
            func_801518B0(globalCtx, 0x2A39U, (Actor *) this);
            this->actionFunc = func_80BA9848;
        } else if ((this->actor.xzDistToPlayer < 100.0f) || (this->actor.isTargeted != 0)) {
            func_800B863C((Actor *) this, globalCtx);
        }
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

void func_80BA9CD4(EnBaba *this, GlobalContext *globalCtx) {
    s16 sp2E;
    s16 sp2C;
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s16 temp_v0;
    s16 phi_v1;

    sp2E = (s16) (s32) this->unk_150.animCurrentFrame;
    sp2C = SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_80BAA3A0[this->unk_40C].animation);
    this->unk_1D6 = 0x25;
    this->unk_1D4 = 0x17;
    if (this->unk_40C == 3) {
        temp_a0 = &this->unk_150;
        sp24 = temp_a0;
        if (func_801378B8(temp_a0, 0.0f) != 0) {
            Audio_PlayActorSound2((Actor *) this, 0x6906U);
        }
        if (sp2E == sp2C) {
            this->unk_40C = 4;
            func_800BDC5C(sp24, (ActorAnimationEntry []) D_80BAA3A0, 4);
            return;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return;
    }
    if ((gSaveContext.weekEventReg[79] & 0x40) != 0) {
        temp_v0 = this->unk_404;
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            this->unk_404 = temp_v0 - 1;
            phi_v1 = this->unk_404;
        }
        if (phi_v1 == 0) {
            func_801A89A8(0x101400FF);
            func_80BA8C4C(globalCtx, 0xD670);
            return;
        }
        goto block_11;
    }
block_11:
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

void func_80BA9E00(EnBaba *this, GlobalContext *globalCtx) {

}

void func_80BA9E10(EnBaba *this, GlobalContext *globalCtx) {
    if (func_80BA8D2C((Actor *) this, 1.0f) != 0) {
        this->unk_1E8 = 0;
    }
}

void func_80BA9E48(EnBaba *this, GlobalContext *globalCtx) {
    this->unk_BC = (unaligned s32) this->unk_30;
    this->actor.shape.rot.z = (s16) (u16) this->actor.world.rot.z;
}

void EnBaba_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    EnBaba *this = (EnBaba *) thisx;

    temp_a1 = &this->unk_194;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80BAA430);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80BAA468, &D_80BAA45C);
    this->unk_1E4 = func_8013D648(globalCtx, (s16) ((s32) (this->actor.params & 0x3F00) >> 8), 0x3F);
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.targetMode = 0;
    this->actionFunc = func_80BA9480;
    this->actor.gravity = -4.0f;
}

void EnBaba_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBaba *this = (EnBaba *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_194);
}

void EnBaba_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnBaba *this = (EnBaba *) thisx;
    this->actionFunc(this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
    func_80BA8DF4(this, globalCtx);
}

s32 func_80BA9FB0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    void *sp24;
    s32 temp_v0;
    void *temp_v1;

    if (arg1 == 6) {
        SysMatrix_InsertTranslation(1500.0f, 0.0f, 0.0f, 1);
        SysMatrix_InsertXRotation_s(arg5->unk_2E6, 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) arg5->unk_2E4 * -1), 1);
        SysMatrix_InsertTranslation(-1500.0f, 0.0f, 0.0f, 1);
    }
    if (arg1 == 5) {
        SysMatrix_InsertXRotation_s((s16) ((s32) arg5->unk_2EC * -1), 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) arg5->unk_2EA * -1), 1);
    }
    if ((arg1 == 6) && (arg5->unk_1E2 != 0) && ((arg0->state.frames & 1) == 0)) {
        SysMatrix_InsertTranslation(40.0f, 0.0f, 0.0f, 1);
    }
    if ((arg1 == 5) || (arg1 == 0xA) || (arg1 == 0xE)) {
        temp_v1 = arg5 + (arg1 * 2);
        sp24 = temp_v1;
        arg4->y += (s32) (Math_SinS(temp_v1->unk_302) * 200.0f);
        arg4->z += (s32) (Math_CosS(temp_v1->unk_326) * 200.0f);
    }
    temp_v0 = arg5[3].focus.pos.y;
    if (((temp_v0 == 1) || (temp_v0 == 3) || (temp_v0 == 4) || (((s32) (arg5->params & 0xC000) >> 0xE) == 2)) && (arg1 == 8)) {
        *arg2 = NULL;
    }
    return 0;
}

void func_80BAA198(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? sp18;

    sp18.unk_0 = (s32) D_80BAA4D4.unk_0;
    sp18.unk_4 = (s32) D_80BAA4D4.unk_4;
    sp18.unk_8 = (s32) D_80BAA4D4.unk_8;
    if (arg1 == 7) {
        arg4->focus.pos.x = arg4->world.pos.x;
        arg4->focus.pos.y = arg4->world.pos.y;
        arg4->focus.pos.z = arg4->world.pos.z;
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp18, arg4 + 0x3C);
    }
}

void func_80BAA20C(GlobalContext *arg0, s32 arg1, Actor *arg2) {

}

void EnBaba_Draw(Actor *thisx, GlobalContext *globalCtx) {
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
    EnBaba *this = (EnBaba *) thisx;

    if ((this->unk_40A & 2) != 0) {
        temp_a0 = globalCtx->state.gfxCtx;
        sp3C = temp_a0;
        func_8012C5B0(temp_a0);
        temp_v0 = sp3C->polyOpa.p;
        sp3C->polyOpa.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDB060020;
        sp34 = temp_v0;
        sp34->words.w1 = Lib_SegmentedToVirtual(&D_060092A0);
        func_801343C0(globalCtx, this->unk_150.skeleton, this->unk_150.limbDrawTbl, (s32) this->unk_150.dListCount, func_80BA9FB0, func_80BAA198, func_80BAA20C, (Actor *) this);
        if ((this->unk_40A & 0x80) != 0) {
            temp_v0_2 = this->unk_40C;
            if ((temp_v0_2 == 3) || (temp_v0_2 == 4)) {
                func_8012C2DC(globalCtx->state.gfxCtx);
                sp4C = this->actor.world.pos.x + 20.0f;
                sp50 = this->actor.world.pos.y;
                sp54 = this->actor.world.pos.z + 20.0f;
            } else {
                sp4C.unk_0 = this->actor.world.pos.x;
                (&sp4C)[1] = this->actor.world.pos.y;
                (&sp4C)[2] = this->actor.world.pos.z;
            }
            temp_a1 = &sp40;
            sp48 = 0.3f;
            sp44 = 0.3f;
            sp40 = 0.3f;
            func_800BC620((Vec3f *) &sp4C, (Vec3f *) temp_a1, 0xFF, globalCtx);
        }
    }
}
