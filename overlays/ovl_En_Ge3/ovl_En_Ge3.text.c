typedef struct EnGe3 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 (*unk_144)(GlobalContext *, Actor *); /* inferred */
    /* 0x148 */ ColliderCylinder unk_148;           /* inferred */
    /* 0x194 */ SkelAnime unk_194;                  /* inferred */
    /* 0x1D8 */ Vec3s unk_1D8;                      /* inferred */
    /* 0x1DE */ char pad_1DE[0x8A];                 /* maybe part of unk_1D8[24]? */
    /* 0x268 */ Vec3s unk_268;                      /* inferred */
    /* 0x26E */ char pad_26E[0x8A];                 /* maybe part of unk_268[24]? */
    /* 0x2F8 */ s16 unk_2F8;                        /* inferred */
    /* 0x2FA */ char pad_2FA[0x16];                 /* maybe part of unk_2F8[12]? */
    /* 0x310 */ s16 unk_310;                        /* inferred */
    /* 0x312 */ s16 unk_312;                        /* inferred */
    /* 0x314 */ s16 unk_314;                        /* inferred */
    /* 0x316 */ s16 unk_316;                        /* inferred */
    /* 0x318 */ s16 unk_318;                        /* inferred */
    /* 0x31A */ char pad_31A[0x2];
    /* 0x31C */ void (*actionFunc)(EnGe3 *, GlobalContext *);
} EnGe3;                                            /* size = 0x320 */

struct _mips2c_stack_EnGe3_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnGe3_Draw {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ GraphicsContext *sp3C;               /* inferred */
    /* 0x40 */ char pad_40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnGe3_Init {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnGe3_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A0070 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ AnimationHeaderCommon **sp28;        /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809A00F8 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809A020C {};              /* size 0x0 */

struct _mips2c_stack_func_809A024C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ u8 *sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809A0350 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A03AC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A03FC {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809A04D0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad_28[0x6];                    /* maybe part of sp24[2]? */
    /* 0x2E */ s16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809A0820 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809A08A4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A096C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Vec3s *sp28;                         /* inferred */
    /* 0x2C */ Vec3f *sp2C;                         /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809A0A14 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x30];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_809A0C60 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ? sp18;                              /* inferred */
    /* 0x18 */ char pad_18[0x10];
};                                                  /* size = 0x28 */

void func_809A0070(EnGe3 *arg0, s16 arg1, u8 arg2, f32 arg3); /* static */
void func_809A00F8(Actor *arg0, GlobalContext *arg1); /* static */
void func_809A020C(EnGe3 *arg0, GlobalContext *arg1); /* static */
s32 func_809A024C(EnGe3 *arg0);                     /* static */
void func_809A0350(Actor *arg0);                    /* static */
void func_809A03AC(EnGe3 *arg0, GlobalContext *arg1); /* static */
void func_809A03FC(EnGe3 *arg0, GlobalContext *arg1); /* static */
void func_809A04D0(EnGe3 *arg0, GlobalContext *arg1); /* static */
void func_809A0820(Actor *arg0, GlobalContext *arg1); /* static */
void func_809A08A4(EnGe3 *arg0, GlobalContext *arg1); /* static */
s32 func_809A096C(GlobalContext *arg0, Actor *arg1); /* static */
s32 func_809A0A14(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_809A0C60(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06001EFC;
extern FlexSkeletonHeader D_0600A808;
static ColliderCylinderInit D_809A0DA0 = {
    {0xA, 0, 9, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0x1000222, 0, 0}, 0, 1, 1},
    {0x14, 0x32, 0, {0, 0, 0}},
};
static ? D_809A0DCC;                                /* unable to generate initializer */
static ? D_809A0DF0;                                /* unable to generate initializer */
static ? D_809A0DFC;                                /* unable to generate initializer */

void EnGe3_Init(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a1;
    EnGe3 *this = (EnGe3 *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    temp_a1 = &this->unk_194;
    sp34 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_0600A808, NULL, &this->unk_1D8, &this->unk_268, 0x18);
    SkelAnime_ChangeAnimDefaultRepeat(sp34, &D_06001EFC);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_148, (Actor *) this, &D_809A0DA0);
    this->actor.colChkInfo.mass = 0xFF;
    Actor_SetScale((Actor *) this, 0.01f);
    this->unk_312 = -1;
    this->unk_314 = -1;
    this->unk_144 = func_809A096C;
    func_809A020C(this, globalCtx);
    if ((this->actor.params & 1) == 1) {
        func_809A0070(this, 2, 0U, 0.0f);
        this->actionFunc = func_809A04D0;
        if ((gSaveContext.weekEventReg[83] & 2) != 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        goto block_4;
    }
    func_809A0070(this, 1, 0U, 0.0f);
    this->actionFunc = func_809A03AC;
    this->actor.speedXZ = 1.5f;
block_4:
    this->unk_310 = 0;
    this->actor.targetMode = 6;
    this->actor.minVelocityY = -4.0f;
    this->actor.gravity = -1.0f;
    gSaveContext.weekEventReg[80] &= 0xF7;
}

void EnGe3_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnGe3 *this = (EnGe3 *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_148);
}

void func_809A0070(EnGe3 *arg0, s16 arg1, u8 arg2, f32 arg3) {
    AnimationHeaderCommon **sp28;
    AnimationHeaderCommon **temp_v1;

    temp_v1 = (arg1 * 4) + &D_809A0DCC;
    sp28 = temp_v1;
    SkelAnime_ChangeAnim(arg0 + 0x194, (AnimationHeader *) *temp_v1, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*temp_v1), (u8) (s32) arg2, arg3);
    arg0->unk_312 = arg1;
}

void func_809A00F8(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s32 phi_v1;

    temp_v0 = arg0->yawTowardsPlayer - arg0->shape.rot.y;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    if ((phi_v1 < 0x2301) && (arg0->xzDistToPlayer < 100.0f)) {
        func_800E9250(arg1, arg0, arg0 + 0x304, arg0 + 0x30A, (Vec3f) arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z);
        return;
    }
    Math_SmoothStepToS(arg0 + 0x304, 0, 6, 0x1838, (s16) 0x64);
    Math_SmoothStepToS(arg0 + 0x306, 0, 6, 0x1838, (s16) 0x64);
    Math_SmoothStepToS(arg0 + 0x30A, 0, 6, 0x1838, (s16) 0x64);
    Math_SmoothStepToS(arg0 + 0x30C, 0, 6, 0x1838, (s16) 0x64);
}

void func_809A020C(EnGe3 *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    arg0->unk_300 = 0;
    temp_v0 = (s32) (arg0->actor.params & 0xFC00) >> 0xA;
    if (temp_v0 != 0x3F) {
        arg0->unk_2FC = arg1->setupPathList + (temp_v0 * 8);
        return;
    }
    arg0->unk_2FC = 0;
}

s32 func_809A024C(EnGe3 *arg0) {
    u8 *sp34;
    f32 sp2C;
    f32 sp28;
    f32 temp_f12;
    f32 temp_f14;
    s32 temp_t2;
    u8 *temp_v0;
    void *temp_v1;
    s32 phi_v0;

    temp_v0 = arg0->unk_2FC;
    if (temp_v0 == 0) {
        return 1;
    }
    sp34 = temp_v0;
    temp_v1 = Lib_SegmentedToVirtual(temp_v0->unk_4) + (arg0->unk_300 * 6);
    temp_f12 = (f32) temp_v1->unk_0 - arg0->actor.world.pos.x;
    temp_f14 = (f32) temp_v1->unk_4 - arg0->actor.world.pos.z;
    sp2C = temp_f12;
    sp28 = temp_f14;
    arg0->actor.world.rot.y = Math_Atan2S(temp_f12, temp_f14);
    Math_SmoothStepToS(arg0 + 0xBE, arg0->actor.world.rot.y, 2, 0x7D0, (s16) 0xC8);
    phi_v0 = 0;
    if (((temp_f12 * temp_f12) + (temp_f14 * temp_f14)) < 100.0f) {
        temp_t2 = arg0->unk_300 + 1;
        arg0->unk_300 = temp_t2;
        if (temp_t2 >= (s32) *sp34) {
            phi_v0 = 1;
        }
    }
    return phi_v0;
}

void func_809A0350(Actor *arg0) {
    if ((s32) Rand_ZeroFloat(2.0f) == 0) {
        Audio_PlayActorSound2(arg0, 0x6918U);
        return;
    }
    Audio_PlayActorSound2(arg0, 0x6919U);
}

void func_809A03AC(EnGe3 *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(&arg0->unk_194);
    func_809A00F8((Actor *) arg0, arg1);
    if (func_809A024C(arg0) != 0) {
        func_809A020C(arg0, arg1);
    }
}

void func_809A03FC(EnGe3 *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    u16 temp_v1;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x194);
    Math_SmoothStepToS(arg0 + 0xBE, arg0->actor.yawTowardsPlayer, 2, 0x400, (s16) 0x100);
    temp_v0 = arg0->unk_316;
    if ((s32) temp_v0 > 0) {
        arg0->unk_316 = temp_v0 - 1;
        return;
    }
    temp_v1 = *(arg1->setupExitList + (((s32) (arg0->actor.params & 0x1F0) >> 4) * 2));
    if (arg1->nextEntranceIndex != temp_v1) {
        arg1->nextEntranceIndex = temp_v1;
        arg1->sceneLoadFlag = 0x14;
        arg1->unk_1887F = 0x26;
        gSaveContext.weekEventReg[80] &= 0xF7;
    }
}

void func_809A04D0(EnGe3 *arg0, GlobalContext *arg1) {
    s16 sp2E;
    SkelAnime *sp24;
    CsCmdActorAction *temp_t9;
    SkelAnime *temp_a0;
    s16 temp_t0;
    s16 temp_v0;

    temp_a0 = &arg0->unk_194;
    sp24 = temp_a0;
    if ((SkelAnime_FrameUpdateMatrix(temp_a0) != 0) && (arg0->unk_314 == 3)) {
        func_809A0070(arg0, 4, 2U, 0.0f);
    }
    if (func_800EE29C(arg1, 0x6CU) != 0) {
        temp_t9 = arg1->csCtx.npcActions[func_800EE200(arg1, 0x6CU)];
        if (arg0->unk_314 != 7) {
            sp2E = (s16) temp_t9->unk0;
            func_800EDF24((Actor *) arg0, arg1, func_800EE200(arg1, 0x6CU));
        }
        if ((s16) temp_t9->unk0 != arg0->unk_314) {
            arg0->unk_314 = (s16) temp_t9->unk0;
            temp_t0 = arg0->unk_314;
            switch (temp_t0) {
            case 1:
                func_809A0070(arg0, 2, 0U, 0.0f);
                break;
            case 2:
                func_809A0070(arg0, 3, 2U, 0.0f);
                arg0->unk_194.animPlaybackSpeed = 0.0f;
                break;
            case 3:
                func_809A0070(arg0, 3, 2U, 0.0f);
                break;
            case 4:
                func_809A0070(arg0, 5, 0U, 0.0f);
                break;
            case 5:
                func_809A0070(arg0, 6, 2U, 0.0f);
                break;
            case 6:
                func_809A0070(arg0, 7, 0U, 0.0f);
                break;
            case 7:
                func_809A0070(arg0, 8, 0U, 0.0f);
                arg0->actor.speedXZ = 5.0f;
                arg0->unk_318 = (s16) (s32) (Rand_ZeroFloat(10.0f) + 20.0f);
                break;
            case 8:
                Actor_MarkForDeath((Actor *) arg0);
                break;
            }
            SkelAnime_FrameUpdateMatrix(sp24);
        }
    } else if ((arg0->actor.xzDistToPlayer < 700.0f) && (fabsf(arg0->actor.yDistToPlayer) < 100.0f) && (func_801690CC(arg1) == 0)) {
        func_800B7298(arg1, (Actor *) arg0, 0x1AU);
        func_801000A4(0x482CU);
        if (Player_GetMask(arg1) == 0x10) {
            func_801518B0(arg1, 0x11AFU, (Actor *) arg0);
        } else {
            func_801518B0(arg1, 0x11AEU, (Actor *) arg0);
        }
        arg0->actionFunc = func_809A03FC;
        arg0->unk_316 = 0x32;
        gSaveContext.weekEventReg[80] |= 8;
    }
    if (arg0->unk_314 == 7) {
        arg0->actor.speedXZ = 5.0f;
        func_809A024C(arg0);
        if ((func_801378B8(sp24, 2.0f) != 0) || (func_801378B8(sp24, 6.0f) != 0)) {
            Audio_PlayActorSound2((Actor *) arg0, 0x2971U);
        }
        temp_v0 = arg0->unk_318;
        if ((s32) temp_v0 > 0) {
            arg0->unk_318 = temp_v0 - 1;
            return;
        }
        arg0->unk_318 = (s16) (s32) (Rand_ZeroFloat(10.0f) + 20.0f);
        func_809A0350((Actor *) arg0);
        /* Duplicate return node #32. Try simplifying control flow for better match */
    }
}

void func_809A0820(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x148;
    sp2C = temp_a2;
    Collider_UpdateCylinder(arg0, temp_a2);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, (Collider *) temp_a2);
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    Actor_UpdateBgCheckInfo(arg1, arg0, 40.0f, 25.0f, 40.0f, 4U);
}

void func_809A08A4(EnGe3 *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    s16 phi_v0;
    s16 phi_v1;

    temp_v1 = arg0->unk_2FA;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        arg0->unk_2FA = temp_v1 - 1;
        phi_v0 = arg0->unk_2FA;
    }
    phi_v1 = arg0->unk_2FA;
    if (phi_v0 == 0) {
        arg0 = arg0;
        arg0->unk_2FA = Rand_S16Offset(0x3C, 0x3C);
        phi_v1 = arg0->unk_2FA;
    }
    arg0->unk_2F8 = phi_v1;
    if ((s32) arg0->unk_2F8 >= 3) {
        arg0->unk_2F8 = 0;
    }
}

void EnGe3_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnGe3 *this = (EnGe3 *) thisx;
    func_809A0820((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    func_809A08A4(this, globalCtx);
}

s32 func_809A096C(GlobalContext *arg0, Actor *arg1) {
    s32 sp34;
    Vec3f *sp2C;
    Vec3s *sp28;
    Vec3f *temp_a3;
    Vec3s *temp_t0;

    temp_a3 = arg1 + 0x3C;
    temp_t0 = arg1 + 0xBC;
    sp28 = temp_t0;
    sp2C = temp_a3;
    sp34 = func_8013A530(arg0, arg1, 9, temp_a3, temp_t0, 10.0f, 400.0f, (s16) -1);
    return sp34 | func_8013A530(arg0, arg1, 0xB, temp_a3, temp_t0, 10.0f, 1200.0f, (s16) -1);
}

s32 func_809A0A14(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    s32 sp1C;
    s16 temp_lo;
    s32 temp_v0_8;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;

    if (arg1 != 5) {
        if (arg1 != 6) {
            if ((arg1 != 0xB) && (arg1 != 0x10)) {
                goto block_7;
            }
            goto block_5;
        }
        arg4->x += arg5->unk_306;
block_7:
        temp_a0 = arg0->state.gfxCtx;
        if (arg1 != 3) {
            if (arg1 != 6) {
                if ((arg1 != 0xB) && (arg1 != 0x10)) {
                    temp_v0 = temp_a0->polyOpa.p;
                    temp_a0->polyOpa.p = temp_v0 + 8;
                    temp_v0->words.w1 = 0;
                    temp_v0->words.w0 = 0xE7000000;
                    temp_v0_2 = temp_a0->polyOpa.p;
                    temp_a0->polyOpa.p = temp_v0_2 + 8;
                    temp_v0_2->words.w1 = 0x8C0000FF;
                    temp_v0_2->words.w0 = 0xFB000000;
                } else {
                    temp_v0_3 = temp_a0->polyOpa.p;
                    temp_a0->polyOpa.p = temp_v0_3 + 8;
                    temp_v0_3->words.w1 = 0;
                    temp_v0_3->words.w0 = 0xE7000000;
                    temp_v0_4 = temp_a0->polyOpa.p;
                    temp_a0->polyOpa.p = temp_v0_4 + 8;
                    temp_v0_4->words.w1 = 0x8CAAE6FF;
                    temp_v0_4->words.w0 = 0xFB000000;
                    temp_v0_5 = temp_a0->polyOpa.p;
                    temp_a0->polyOpa.p = temp_v0_5 + 8;
                    temp_v0_5->words.w1 = -1;
                    temp_v0_5->words.w0 = 0xFA000000;
                }
            } else {
                temp_v0_6 = temp_a0->polyOpa.p;
                temp_a0->polyOpa.p = temp_v0_6 + 8;
                temp_v0_6->words.w1 = 0;
                temp_v0_6->words.w0 = 0xE7000000;
                temp_v0_7 = temp_a0->polyOpa.p;
                temp_a0->polyOpa.p = temp_v0_7 + 8;
                temp_v0_7->words.w1 = 0x503C0AFF;
                temp_v0_7->words.w0 = 0xFB000000;
            }
        }
        if ((arg5->unk_312 == 2) && ((arg1 == 8) || (arg1 == 0xD) || (arg1 == 2))) {
            temp_v0_8 = arg1 * 0x32;
            temp_lo = arg0->state.frames * (temp_v0_8 + 0x814);
            sp1C = temp_v0_8;
            arg0 = arg0;
            arg4->y += (s32) (Math_SinS(temp_lo) * 200.0f);
            arg4->z += (s32) (Math_CosS((s16) (arg0->state.frames * (temp_v0_8 + 0x940))) * 200.0f);
        }
    } else {
block_5:
        *arg2 = NULL;
    }
    return 0;
}

void func_809A0C60(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? sp18;

    sp18.unk_0 = (s32) D_809A0DF0.unk_0;
    sp18.unk_4 = (s32) D_809A0DF0.unk_4;
    sp18.unk_8 = (s32) D_809A0DF0.unk_8;
    if (arg1 == 6) {
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp18, arg4 + 0x3C);
    }
}

void EnGe3_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp3C;
    Gfx *sp34;
    Gfx *temp_v0;
    GraphicsContext *temp_a0;
    EnGe3 *this = (EnGe3 *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp3C = temp_a0;
    func_8012C5B0(temp_a0);
    temp_v0 = sp3C->polyOpa.p;
    sp3C->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp34 = temp_v0;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_809A0DFC + (this->unk_2F8 * 4)));
    func_800B8050((Actor *) this, globalCtx, 0);
    SkelAnime_DrawSV(globalCtx, this->unk_194.skeleton, this->unk_194.limbDrawTbl, (s32) this->unk_194.dListCount, func_809A0A14, func_809A0C60, (Actor *) this);
}
