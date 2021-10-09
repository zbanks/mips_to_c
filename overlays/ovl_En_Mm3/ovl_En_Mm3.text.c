typedef struct EnMm3 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ SkelAnime unk_188;                  /* inferred */
    /* 0x1CC */ char pad_1CC[0x8];
    /* 0x1D4 */ void (*actionFunc)(EnMm3 *, GlobalContext *);
    /* 0x1D8 */ char pad_1D8[0x4];
    /* 0x1DC */ s32 unk_1DC;                        /* inferred */
    /* 0x1E0 */ Vec3s unk_1E0;                      /* inferred */
    /* 0x1E6 */ char pad_1E6[0x5A];                 /* maybe part of unk_1E0[16]? */
    /* 0x240 */ Vec3s unk_240;                      /* inferred */
    /* 0x246 */ char pad_246[0x5A];                 /* maybe part of unk_240[16]? */
    /* 0x2A0 */ Vec3s unk_2A0;                      /* inferred */
    /* 0x2A6 */ Vec3s unk_2A6;                      /* inferred */
    /* 0x2AC */ char pad_2AC[0x2];
    /* 0x2AE */ s16 unk_2AE;                        /* inferred */
    /* 0x2B0 */ u16 unk_2B0;                        /* inferred */
    /* 0x2B2 */ char pad_2B2[0x2];
    /* 0x2B4 */ s16 unk_2B4;                        /* inferred */
    /* 0x2B6 */ char pad_2B6[0x2];
} EnMm3;                                            /* size = 0x2B8 */

struct _mips2c_stack_EnMm3_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnMm3_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ GraphicsContext *sp38;               /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnMm3_Init {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ SkelAnime *sp38;                     /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnMm3_Update {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A6F22C {};              /* size 0x0 */

struct _mips2c_stack_func_80A6F270 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A6F2C8 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A6F3B4 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A6F5E4 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ u32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A6F9C8 {};              /* size 0x0 */

struct _mips2c_stack_func_80A6F9DC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A6FBA0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A6FBFC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ u32 sp20;                            /* inferred */
    /* 0x24 */ u32 sp24;                            /* inferred */
    /* 0x28 */ u32 sp28;                            /* inferred */
    /* 0x2C */ u32 sp2C;                            /* inferred */
    /* 0x30 */ u32 sp30;                            /* inferred */
    /* 0x34 */ u32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A6FE1C {};              /* size 0x0 */

struct _mips2c_stack_func_80A6FE30 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A6FED8 {};              /* size 0x0 */

struct _mips2c_stack_func_80A6FEEC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A6FFAC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A70084 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A701E0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A702B0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

? func_8010EA9C(?, ?);                              /* extern */
? func_801A0238(?, ?);                              /* extern */
s32 func_80A6F22C(Actor *arg0);                     /* static */
void func_80A6F270(EnMm3 *arg0);                    /* static */
void func_80A6F2C8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A6F3B4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A6F5E4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A6F9C8(Actor *arg0);                    /* static */
void func_80A6F9DC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A6FBA0(Actor *arg0);                    /* static */
void func_80A6FBFC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A6FE1C(Actor *arg0);                    /* static */
void func_80A6FE30(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A6FED8(Actor *arg0, GlobalContext *);   /* static */
void func_80A6FEEC(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A6FFAC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A70084(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A701E0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80A702B0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern FlexSkeletonHeader D_060096E8;
extern AnimationHeader D_0600A4E0;
static ColliderCylinderInit D_80A703F0 = {
    {0xA, 0, 9, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0, 0, 0}, 0, 1, 1},
    {0x12, 0x3F, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80A7041C = {0, 0, 0, 0, 0xFF};
static ActorAnimationEntry D_80A70428[8] = {
    {(AnimationHeader *)0x6002238, 1.0f, 0.0f, 0.0f, 0, -7.0f},
    {(AnimationHeader *)0x600A4E0, -1.0f, 0.0f, 0.0f, 2, -7.0f},
    {(AnimationHeader *)0x600C640, 1.0f, 0.0f, 0.0f, 0, -7.0f},
    {(AnimationHeader *)0x600A4E0, 1.0f, 0.0f, 0.0f, 2, -7.0f},
    {(AnimationHeader *)0x6000468, 1.0f, 0.0f, 0.0f, 0, -7.0f},
    {(AnimationHeader *)0x600CD90, 1.0f, 0.0f, 0.0f, 0, -12.0f},
    {(AnimationHeader *)0x600DA50, 1.0f, 0.0f, 0.0f, 0, -12.0f},
    {(AnimationHeader *)0x600DA50, 1.0f, 0.0f, 10.0f, 2, -10.0f},
};
static ? D_80A704E8;                                /* unable to generate initializer */
static Vec3f D_80A704F0 = {0.0f, 0.0f, 0.0f};
static ? D_80A704FC;                                /* unable to generate initializer */

void EnMm3_Init(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *sp38;
    SkelAnime *temp_a1;
    SkelAnime *temp_a1_2;
    EnMm3 *this = (EnMm3 *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 21.0f);
    temp_a1 = &this->unk_144;
    sp38 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_060096E8, &D_0600A4E0, &this->unk_1E0, &this->unk_240, 0x10);
    SkelAnime_ChangeAnim(sp38, &D_0600A4E0, -1.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0600A4E0), 0.0f, (u8) 2, 0.0f);
    temp_a1_2 = &this->unk_188;
    sp38 = temp_a1_2;
    Collider_InitCylinder(globalCtx, (ColliderCylinder *) temp_a1_2);
    Collider_SetCylinder(globalCtx, (ColliderCylinder *) temp_a1_2, (Actor *) this, &D_80A703F0);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, NULL, &D_80A7041C);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
    this->actor.parent = NULL;
    this->actor.targetMode = 0;
    this->unk_1DC = 1;
    this->unk_2B4 = 0;
    this->unk_2AE = 0;
    this->unk_2B0 &= 0xFFFE;
    this->actor.world.pos.y = this->actor.floorHeight;
    func_80A6F270(this);
}

void EnMm3_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnMm3 *this = (EnMm3 *) thisx;
    gSaveContext.weekEventReg[63] &= 0xFE;
    Collider_DestroyCylinder(globalCtx, (ColliderCylinder *) &this->unk_188);
}

s32 func_80A6F22C(Actor *arg0) {
    s16 temp_v0;
    s32 phi_v0;

    temp_v0 = arg0->yawTowardsPlayer - arg0->shape.rot.y;
    phi_v0 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v0 = (s32) (s16) ((s32) temp_v0 * -1);
    }
    if (phi_v0 < 0x4000) {
        return 1;
    }
    return 0;
}

void func_80A6F270(EnMm3 *arg0) {
    EnMm3 *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk_1DC = 1;
    temp_a3->unk_2B0 &= 0xFFFE;
    arg0 = temp_a3;
    func_800BDC5C(temp_a3 + 0x144, (ActorAnimationEntry []) D_80A70428, 5);
    arg0->actionFunc = func_80A6F2C8;
}

void func_80A6F2C8(Actor *arg0, GlobalContext *arg1) {
    if (func_800B84D0(arg0, arg1) != 0) {
        func_801518B0(arg1, 0x278AU, arg0);
        arg0->unk_2B4 = 0x278A;
        func_80A6F9C8(arg0);
    } else if (func_80A6F22C(arg0) != 0) {
        func_800B8614(arg0, arg1, 100.0f);
    }
    Math_SmoothStepToS(arg0 + 0x2A0, 0, 5, 0x1000, (s16) 0x100);
    Math_SmoothStepToS(arg0 + 0x2A2, 0, 5, 0x1000, (s16) 0x100);
    Math_SmoothStepToS(arg0 + 0x2A6, 0, 5, 0x1000, (s16) 0x100);
    Math_SmoothStepToS(arg0 + 0x2A8, 0, 5, 0x1000, (s16) 0x100);
}

void func_80A6F3B4(Actor *arg0, GlobalContext *arg1) {
    void *sp20;
    u16 temp_v0;

    if (func_80147624(arg1) != 0) {
        temp_v0 = arg0->unk_2B4;
        if (temp_v0 != 0x278E) {
            if (temp_v0 != 0x279A) {
                return;
            }
            if (arg1->msgCtx.choiceIndex == 0) {
                if ((s32) gSaveContext.rupees >= arg1->msgCtx.unk1206C) {
                    sp20 = arg1 + 0x10000;
                    func_8019F208();
                    func_801518B0(arg1, 0x2790U, arg0);
                    arg0->unk_2B4 = 0x2790U;
                    func_801159EC((s16) ((s32) arg1->msgCtx.unk1206C * -1));
                    return;
                }
                play_sound(0x4806U);
                func_801518B0(arg1, 0x279CU, arg0);
                arg0->unk_2B4 = 0x279CU;
                func_80151BB4(arg1, 0xBU);
                return;
            }
            func_8019F230();
            func_801518B0(arg1, 0x279BU, arg0);
            arg0->unk_2B4 = 0x279BU;
            func_80151BB4(arg1, 0xBU);
            /* Duplicate return node #16. Try simplifying control flow for better match */
            return;
        }
        if (arg1->msgCtx.choiceIndex == 0) {
            if ((arg0->unk_2B2 & 0x20) != 0) {
                if ((s32) gSaveContext.rupees >= arg1->msgCtx.unk1206C) {
                    sp20 = arg1 + 0x10000;
                    func_8019F208();
                    func_801518B0(arg1, 0x2790U, arg0);
                    arg0->unk_2B4 = 0x2790U;
                    func_801159EC((s16) ((s32) arg1->msgCtx.unk1206C * -1));
                    return;
                }
                play_sound(0x4806U);
                func_801518B0(arg1, 0x279CU, arg0);
                arg0->unk_2B4 = 0x279CU;
                func_80151BB4(arg1, 0xBU);
                return;
            }
            func_8019F208();
            func_801518B0(arg1, 0x2790U, arg0);
            arg0->unk_2B4 = 0x2790U;
            return;
        }
        func_8019F230();
        func_801518B0(arg1, 0x278FU, arg0);
        arg0->unk_2B4 = 0x278FU;
        func_80151BB4(arg1, 0xBU);
    }
}

void func_80A6F5E4(Actor *arg0, GlobalContext *arg1) {
    u32 sp24;
    s32 sp20;
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    GlobalContext *temp_a0_3;
    GlobalContext *temp_a1;
    GlobalContext *temp_a1_2;
    s16 temp_v0;
    s32 temp_t2;
    u16 temp_t8;
    u32 temp_t3;

    temp_a0 = arg1;
    if (((arg0->unk_2B4 != 0x2791) || (arg0->unk_2AC == 0)) && (arg1 = arg1, (func_80147624(temp_a0) != 0))) {
        temp_t8 = arg0->unk_2B4;
        switch (temp_t8) {
        case 10122:
            temp_a1 = arg1;
            arg1 = arg1;
            if (func_80A6FFAC(arg0, temp_a1) != 0) {
                func_801518B0(arg1, 0x279DU, arg0);
                arg0->unk_2B4 = 0x279DU;
            } else {
                temp_a1_2 = arg1;
                arg1 = arg1;
                func_80A70084(arg0, temp_a1_2);
                if (Player_GetMask(arg1) == 4) {
                    func_801518B0(arg1, 0x27A0U, arg0);
                    arg0->unk_2B4 = 0x27A0U;
                } else {
                    func_801518B0(arg1, 0x278BU, arg0);
                    arg0->unk_2B4 = 0x278BU;
                }
            }
            arg0->unk_1DC = 0;
            arg0->unk_2B0 = (u16) (arg0->unk_2B0 | 1);
            func_800BDC5C((SkelAnime *) (arg0 + 0x144), (ActorAnimationEntry []) D_80A70428, 7);
            return;
        case 10123:
        case 10144:
            arg0->unk_2AE = 0;
            func_801518B0(arg1, 0x278CU, arg0);
            arg0->unk_2B4 = 0x278CU;
            return;
        case 10124:
            func_801518B0(arg1, 0x278DU, arg0);
            arg0->unk_2B4 = 0x278DU;
            return;
        case 10141:
            arg0->unk_2AE = 0;
            func_801518B0(arg1, 0x279EU, arg0);
            arg0->unk_2B4 = 0x279EU;
            return;
        case 10142:
            arg0->unk_2B2 = (u16) (arg0->unk_2B2 | 0x20);
            func_801518B0(arg1, 0x279FU, arg0);
            arg0->unk_2B4 = 0x279FU;
            return;
        case 10125:
        case 10143:
            func_801518B0(arg1, 0x278EU, arg0);
            arg0->unk_2B4 = 0x278EU;
            return;
        case 10129:
            temp_t2 = gSaveContext.unk_3DE0[0];
            temp_t3 = *(&gSaveContext + 0x3DE4);
            sp20 = temp_t2;
            sp24 = temp_t3;
            if ((temp_t2 == 0) && (temp_t3 == 0x3E8)) {
                func_801518B0(arg1, 0x2792U, arg0);
                arg0->unk_2B4 = 0x2792U;
                return;
            }
            if ((sp20 != 0) || (sp24 >= 0x5DCU)) {
                func_801518B0(arg1, 0x2797U, arg0);
                arg0->unk_2B4 = 0x2797U;
                return;
            }
            if ((sp20 == 0) && (sp24 < 0x41BU) && ((sp20 != 0) || (sp24 >= 0x3B6U))) {
                func_801518B0(arg1, 0x2795U, arg0);
                arg0->unk_2B4 = 0x2795U;
                return;
            }
            func_801518B0(arg1, 0x2796U, arg0);
            arg0->unk_2B4 = 0x2796U;
            return;
        case 10130:
            func_801518B0(arg1, 0x2793U, arg0);
            arg0->unk_2B4 = 0x2793U;
            return;
        case 10131:
            temp_a0_2 = arg1;
            arg1 = arg1;
            func_801477B4(temp_a0_2);
            func_80A6FE1C(arg0);
            func_80A6FE30(arg0, arg1);
            return;
        case 10133:
        case 10134:
        case 10135:
            if ((gSaveContext.weekEventReg[63] & 2) != 0) {
                temp_a0_3 = arg1;
                arg1 = arg1;
                func_801518B0(temp_a0_3, 0x279BU, arg0);
                arg0->unk_2B4 = 0x279BU;
                func_80151BB4(arg1, 0xBU);
                return;
            }
            func_801518B0(arg1, 0x2798U, arg0);
            arg0->unk_2B4 = 0x2798U;
            return;
        case 10136:
            func_801518B0(arg1, 0x2799U, arg0);
            arg0->unk_2B4 = 0x2799U;
            return;
        case 10137:
            func_801518B0(arg1, 0x279AU, arg0);
            arg0->unk_2B4 = 0x279AU;
            return;
        }
    } else {
        temp_v0 = arg0->unk_2AC;
        if (((s32) temp_v0 > 0) && (arg0->unk_2B4 == 0x2791) && (arg0->unk_2AC = (s16) (temp_v0 - 1), (arg0->unk_2AC == 0))) {
            if ((gSaveContext.unk_3DE0[0] == 0) && (*(&gSaveContext + 0x3DE4) == 0x3E8)) {
                func_801A3098(0x922U);
                return;
            }
            play_sound(0x4806U);
            /* Duplicate return node #42. Try simplifying control flow for better match */
            return;
        }
    default:
    }
}

void func_80A6F9C8(Actor *arg0) {
    arg0->unk_1D4 = func_80A6F9DC;
}

void func_80A6F9DC(Actor *arg0, GlobalContext *arg1) {
    Actor *sp20;
    Actor *temp_a0;
    Actor *temp_v0_2;
    u16 temp_v0_3;
    u32 temp_v0;
    u8 temp_t6;

    arg0->unk_2B0 = (u16) (arg0->unk_2B0 & 0xFFFD);
    temp_v0 = func_80152498(arg1 + 0x4908);
    switch (temp_v0) {
    case 3:
        arg0->unk_2B0 = (u16) (arg0->unk_2B0 | 2);
        break;
    case 4:
        func_80A6F3B4(arg0, arg1);
        break;
    case 5:
        func_80A6F5E4(arg0, arg1);
        break;
    case 6:
        if (func_80147624(arg1) != 0) {
            if (arg0->unk_2B4 == 0x2790) {
                temp_v0_2 = arg1->actorCtx.actorList[2].first;
                temp_v0_2->unk_A6C = (s32) (temp_v0_2->unk_A6C | 0x20);
                if (Player_GetMask(arg1) == 4) {
                    func_8010EA9C(0, 2);
                } else {
                    func_8010EA9C(0, 0);
                }
                func_801477B4(arg1);
                play_sound(0x4835U);
                func_80A6FBA0(arg0);
            } else {
                temp_t6 = gSaveContext.weekEventReg[63] & 0xFE;
                gSaveContext.weekEventReg[63] = temp_t6;
                gSaveContext.weekEventReg[63] = temp_t6 & 0xFD;
                func_80A6F270((EnMm3 *) arg0);
            }
        }
        break;
    }
    temp_a0 = arg0 + 0x144;
    if (arg0->unk_145 == 2) {
        sp20 = temp_a0;
        if (func_801378B8((SkelAnime *) temp_a0, arg0->unk_154) != 0) {
            func_800BDC5C((SkelAnime *) temp_a0, (ActorAnimationEntry []) D_80A70428, 2);
        }
    }
    temp_v0_3 = arg0->unk_2B4;
    if (((temp_v0_3 == 0x279D) || (temp_v0_3 == 0x27A0) || (temp_v0_3 == 0x278B)) && (func_801378B8((SkelAnime *) (arg0 + 0x144), 8.0f) != 0) && (arg0->unk_2AE == 0)) {
        Audio_PlayActorSound2(arg0, 0x2991U);
        arg0->unk_2AE = 1;
    }
}

void func_80A6FBA0(Actor *arg0) {
    u8 temp_t8;

    func_801A5BD0(0x6F);
    func_801A0238(0, 5);
    temp_t8 = gSaveContext.weekEventReg[63] | 1;
    gSaveContext.weekEventReg[63] = temp_t8;
    gSaveContext.weekEventReg[63] = temp_t8 & 0xFD;
    arg0->unk_1D4 = func_80A6FBFC;
}

void func_80A6FBFC(Actor *arg0, GlobalContext *arg1) {
    u32 sp34;
    u32 sp30;
    u32 sp2C;
    u32 sp28;
    u32 sp24;
    u32 sp20;
    GameInfo *temp_v0_2;
    s32 temp_t0;
    s32 temp_t2;
    s32 temp_t4_2;
    s32 temp_t6;
    u32 temp_t4;
    u32 temp_t5;
    u32 temp_v1;
    u64 temp_ret;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    if (gSaveContext.unk_3DD0[0] == 0x10) {
        temp_v0->unk_A6C = (s32) (temp_v0->unk_A6C & ~0x20);
        arg0->flags |= 0x10000;
        temp_t5 = gSaveContext.unk_3DE4;
        temp_t4 = gSaveContext.unk_3DE0;
        sp24 = temp_t5;
        sp20 = temp_t4;
        if ((temp_t4 != 0) || (temp_t5 >= 0x5DDU)) {
            gSaveContext.unk_3DE0 = 0U;
            gSaveContext.unk_3DE4 = 0x5DCU;
        } else {
            temp_v0_2 = gGameInfo;
            sp30 = sp20;
            sp34 = sp24;
            temp_t2 = 0x3E3 - temp_v0_2->data[1360];
            temp_t4_2 = temp_t2 >> 0x1F;
            if ((sp20 >= (u32) temp_t4_2) && (((u32) temp_t4_2 < sp20) || (sp24 >= (u32) temp_t2))) {
                sp28 = sp20;
                sp2C = sp24;
                temp_t6 = temp_v0_2->data[1361] + 0x3ED;
                temp_t0 = temp_t6 >> 0x1F;
                if (((u32) temp_t0 >= sp20) && ((sp20 < (u32) temp_t0) || ((u32) temp_t6 >= sp24))) {
                    gSaveContext.unk_3DE4 = 0x3E8U;
                    gSaveContext.unk_3DE0 = 0U;
                }
            }
        }
    } else if ((gSaveContext.unk_3DE0 != 0) || ((u32) gSaveContext.unk_3DE4 >= 0x5DDU)) {
        gSaveContext.unk_3DD0[0] = 0xF;
        temp_ret = osGetTime();
        temp_v1 = (u32) temp_ret;
        gSaveContext.unk_3DC8 = temp_ret;
        gSaveContext.unk_3DCC = temp_v1;
    }
    if (func_800B84D0(arg0, arg1) != 0) {
        func_801A5BD0(0);
        func_801A0238(0x7F, 5);
        func_801518B0(arg1, 0x2791U, arg0);
        arg0->unk_2B4 = 0x2791;
        arg0->unk_2AC = 7;
        gSaveContext.unk_3DD0[0] = 0;
        arg0->flags &= 0xFFFEFFFF;
        play_sound(0x4835U);
        func_80A6F9C8(arg0);
        return;
    }
    func_800B8614(arg0, arg1, arg0->xzDistToPlayer + 10.0f);
    func_80123E90(arg1, arg0);
    if (Player_GetMask(arg1) == 4) {
        play_sound(0x4057U);
        return;
    }
    play_sound(0x4056U);
}

void func_80A6FE1C(Actor *arg0) {
    arg0->unk_1D4 = func_80A6FE30;
}

void func_80A6FE30(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    if (Actor_HasParent(arg0, arg1) != 0) {
        temp_v0 = gSaveContext.weekEventReg[77];
        if ((temp_v0 & 1) == 0) {
            gSaveContext.weekEventReg[77] = temp_v0 | 1;
        }
        arg0->parent = NULL;
        func_80A6FED8(arg0, arg1);
        return;
    }
    if ((gSaveContext.weekEventReg[77] & 1) != 0) {
        func_800B8A1C(arg0, arg1, 5, 500.0f, 100.0f);
        return;
    }
    func_800B8A1C(arg0, arg1, 0xC, 500.0f, 100.0f);
}

void func_80A6FED8(Actor *arg0) {
    arg0->unk_1D4 = func_80A6FEEC;
}

void func_80A6FEEC(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    sp24 = temp_v1;
    if (func_800B84D0(arg0, arg1) != 0) {
        temp_v1->unk_A6C = (s32) (temp_v1->unk_A6C & ~0x20);
        func_801518B0(arg1, 0x2794U, arg0);
        arg0->unk_2B4 = 0x2794;
        func_80151BB4(arg1, 0xBU);
        func_80151BB4(arg1, 0x2BU);
        arg0->flags &= 0xFFFEFFFF;
        func_80A6F9C8(arg0);
        return;
    }
    func_800B85E0(arg0, arg1, 200.0f, -1);
}

s32 func_80A6FFAC(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    temp_v0 = gSaveContext.playerForm;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                if (temp_v0 == 4) {
                    arg0 = arg0;
                    if (Player_GetMask(arg1) == 4) {
                        if ((arg0->unk_2B2 & 0x10) != 0) {
                            return 1;
                        }
                        goto block_15;
                    }
                    if ((arg0->unk_2B2 & 1) != 0) {
                        return 1;
                    }
                    goto block_15;
                }
                goto block_15;
            }
            if ((arg0->unk_2B2 & 2) != 0) {
                return 1;
            }
            goto block_15;
        }
        if ((arg0->unk_2B2 & 4) != 0) {
            return 1;
        }
        goto block_15;
    }
    if ((arg0->unk_2B2 & 8) != 0) {
        return 1;
    }
block_15:
    return 0;
}

void func_80A70084(Actor *arg0, GlobalContext *arg1) {
    u16 temp_t8;
    u8 temp_v0;

    temp_v0 = gSaveContext.playerForm;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                if (temp_v0 == 4) {
                    arg0 = arg0;
                    if (Player_GetMask(arg1) == 4) {
                        temp_t8 = arg0->unk_2B2 | 0x10;
                        arg0->unk_2B2 = temp_t8;
                        arg0->unk_2B2 = (u16) (temp_t8 | 1);
                        return;
                    }
                    arg0->unk_2B2 = (u16) (arg0->unk_2B2 | 1);
                    return;
                }
                /* Duplicate return node #10. Try simplifying control flow for better match */
                return;
            }
            arg0->unk_2B2 = (u16) (arg0->unk_2B2 | 2);
            return;
        }
        arg0->unk_2B2 = (u16) (arg0->unk_2B2 | 4);
        return;
    }
    arg0->unk_2B2 = (u16) (arg0->unk_2B2 | 8);
}

void EnMm3_Update(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a2;
    EnMm3 *this = (EnMm3 *) thisx;

    this->actionFunc(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    if ((this->unk_2B0 & 1) != 0) {
        func_800E9250(globalCtx, (Actor *) this, &this->unk_2A0, &this->unk_2A6, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
    }
    temp_a2 = &this->unk_188;
    sp34 = temp_a2;
    Collider_UpdateCylinder((Actor *) this, (ColliderCylinder *) temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
}

s32 func_80A701E0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 8) {
        arg4->x += arg5->unk_2A8;
        arg4->y -= arg5->unk_2A6;
    } else if (arg1 == 0xF) {
        arg4->x += arg5->unk_2A2;
        arg4->z += arg5->unk_2A0;
        if (((arg5->unk_2B0 & 2) != 0) && (((u32) arg0->gameplayFrames % 3U) == 0)) {
            SysMatrix_InsertTranslation(40.0f, 0.0f, 0.0f, 1);
        }
    }
    return 0;
}

void func_80A702B0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 0xF) {
        SysMatrix_MultiplyVector3fByState(&D_80A704F0, arg4 + 0x3C);
    }
}

void EnMm3_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp38;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    EnMm3 *this = (EnMm3 *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp38 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp38->polyOpa.p;
    sp38->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp38 = sp38;
    sp30 = temp_v0;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80A704FC + (this->unk_1DC * 4)));
    temp_v0_2 = sp38->polyOpa.p;
    sp38->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060030;
    temp_v0_2->words.w1 = (u32) &D_80A704E8;
    SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80A701E0, func_80A702B0, (Actor *) this);
}
