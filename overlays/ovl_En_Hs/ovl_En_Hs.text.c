typedef struct EnHs {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ SkelAnime unk_190;                  /* inferred */
    /* 0x1D4 */ Vec3s unk_1D4;                      /* inferred */
    /* 0x1DA */ char pad_1DA[0x5A];                 /* maybe part of unk_1D4[16]? */
    /* 0x234 */ Vec3s unk_234;                      /* inferred */
    /* 0x23A */ char pad_23A[0x5A];                 /* maybe part of unk_234[16]? */
    /* 0x294 */ s16 unk_294;                        /* inferred */
    /* 0x296 */ s16 unk_296;                        /* inferred */
    /* 0x298 */ s16 unk_298;                        /* inferred */
    /* 0x29A */ s16 unk_29A;                        /* inferred */
    /* 0x29C */ s16 unk_29C;                        /* inferred */
    /* 0x29E */ char pad_29E[0x2];
    /* 0x2A0 */ u16 unk_2A0;                        /* inferred */
    /* 0x2A2 */ s16 unk_2A2;                        /* inferred */
    /* 0x2A4 */ char pad_2A4[0xF0];                 /* maybe part of unk_2A2[121]? */
    /* 0x394 */ void (*actionFunc)(EnHs *, GlobalContext *);
} EnHs;                                             /* size = 0x398 */

struct _mips2c_stack_EnHs_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnHs_Draw {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnHs_Init {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnHs_Update {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ColliderCylinder *sp34;              /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80952C50 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80952DFC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80952E50 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80952F00 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80952FE0 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80953098 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80953180 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809532C0 {};              /* size 0x0 */

struct _mips2c_stack_func_809532D0 {};              /* size 0x0 */

struct _mips2c_stack_func_80953354 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809533A0 {
    /* 0x00 */ char pad_0[0x1E];
    /* 0x1E */ u16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8095345C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8095376C {};              /* size 0x0 */

struct _mips2c_stack_func_80953848 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_80952C50(EnHs *arg0, GlobalContext *arg1); /* static */
void func_80952DFC(GlobalContext *arg0, u16);       /* static */
void func_80952E50(Vec3f *arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4); /* static */
void func_80952F00(EnHs *arg0, GlobalContext *arg1); /* static */
void func_809533A0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_8095376C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80953848(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_060005C0;
extern FlexSkeletonHeader D_06006260;
static ColliderCylinderInit D_80953910 = {
    {0xA, 0, 0x11, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x28, 0x28, 0, {0, 0, 0}},
};
static Vec3f D_8095393C = {300.0f, 1000.0f, 0.0f};

void func_80952C50(EnHs *arg0, GlobalContext *arg1) {
    s32 temp_s0;
    Vec3f *phi_s1;
    s32 phi_s0;

    phi_s1 = arg0 + 0x2A4;
    phi_s0 = 0;
    do {
        Math_Vec3f_Copy(phi_s1, arg1->actorCtx.actorList[2].first + 0x24);
        temp_s0 = phi_s0 + 0xC;
        phi_s1 += 0xC;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0xF0);
    arg0->actor.home.rot.x = 0;
    arg0->actor.home.rot.z = 0;
}

void EnHs_Init(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a1;
    EnHs *this = (EnHs *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 36.0f);
    temp_a1 = &this->unk_190;
    sp34 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06006260, &D_060005C0, &this->unk_1D4, &this->unk_234, 0x10);
    SkelAnime_ChangeAnimDefaultRepeat(sp34, &D_060005C0);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_144, (Actor *) this, &D_80953910);
    this->actor.colChkInfo.mass = 0xFF;
    Actor_SetScale((Actor *) this, 0.01f);
    this->actionFunc = func_8095345C;
    if (globalCtx->curSpawn == 1) {
        this->actor.flags |= 0x10000;
    }
    this->unk_2A0 = 0;
    this->actor.targetMode = 6;
    func_80952C50(this, globalCtx);
}

void EnHs_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnHs *this = (EnHs *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_144);
}

void func_80952DFC(GlobalContext *arg0) {
    if (gSaveContext.inventory.items[gItemSlots[0x39]] == 0x39) {
        func_80151BB4(arg0, 0x2EU);
    }
    func_80151BB4(arg0, 0x10U);
}

void func_80952E50(Vec3f *arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4) {
    f32 sp24;
    f32 sp1C;
    Vec3f *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f8;

    temp_a1 = arg0;
    arg0 = temp_a1;
    Math_Vec3f_Diff((Vec3f *) &arg1, temp_a1, (Vec3f *) &sp1C);
    temp_f0 = (sp1C * sp1C) + (sp24 * sp24);
    if (!(temp_f0 < (arg4 * arg4))) {
        temp_f0_2 = sqrtf(temp_f0);
        temp_f2 = (temp_f0_2 - arg4) / temp_f0_2;
        temp_f4 = sp1C * temp_f2;
        temp_f8 = sp24 * temp_f2;
        sp1C = temp_f4;
        sp24 = temp_f8;
        arg0->x += temp_f4;
        arg0->z += temp_f8;
    }
}

void func_80952F00(EnHs *arg0, GlobalContext *arg1) {
    s32 temp_s0;
    void *temp_v0;
    void *temp_v0_2;
    f32 phi_f20;
    Vec3f *phi_s1;
    void *phi_s2;
    s32 phi_s0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    if ((s32) arg0->actor.home.rot.z >= 0x14) {
        phi_f20 = 15.0f;
    } else {
        phi_f20 = 10.0f;
    }
    func_80952E50(arg0 + 0x2A4, subroutine_arg1, temp_v0->world.pos.y, temp_v0->world.pos.z, phi_f20);
    temp_v0_2 = arg0 + 0xC;
    phi_s1 = temp_v0_2 + 0x2A4;
    phi_s2 = temp_v0_2 + 0x298;
    phi_s0 = 0xC;
    do {
        func_80952E50(phi_s1, subroutine_arg1, phi_s2->unk_4, phi_s2->unk_8, phi_f20);
        temp_s0 = phi_s0 + 0xC;
        phi_s1 += 0xC;
        phi_s2 += 0xC;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0xF0);
}

void func_80952FE0(EnHs *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk_2A2;
    if ((s32) temp_v0 < 0x28) {
        Math_SmoothStepToS(&this->unk_296, 0x1F40, 6, 0x1838, (s16) 0x64);
    } else if ((s32) temp_v0 < 0x50) {
        Math_SmoothStepToS(&this->unk_296, -0x1F40, 6, 0x1838, (s16) 0x64);
    } else {
        this->actionFunc = func_80953180;
        this->unk_2A0 &= 0xFFFB;
        func_80151938(globalCtx, 0x33F6U);
        func_80952DFC(globalCtx);
    }
    this->unk_2A2 += 1;
}

void func_80953098(EnHs *this, GlobalContext *globalCtx) {
    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        this->actor.parent = NULL;
        this->actionFunc = func_8095345C;
        this->actor.flags |= 0x10000;
        this->unk_2A0 |= 0x10;
        func_800B8500((Actor *) this, globalCtx, 1000.0f, 1000.0f, -1);
        return;
    }
    this->unk_2A0 |= 8;
    if (gSaveContext.inventory.items[gItemSlots[0x39]] == 0x39) {
        func_800B8A1C((Actor *) this, globalCtx, 4, 10000.0f, 50.0f);
        return;
    }
    func_800B8A1C((Actor *) this, globalCtx, 0x7F, 10000.0f, 50.0f);
}

void func_80953180(EnHs *this, GlobalContext *globalCtx) {
    u16 temp_t6;

    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        temp_t6 = globalCtx->msgCtx.unk11F04;
        switch (temp_t6) {
        case 13300:
        case 13302:
            func_801477B4(globalCtx);
block_9:
            this->actionFunc = func_8095345C;
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return;
        case 13303:
            this->actor.flags &= 0xFFFEFFFF;
            func_801477B4(globalCtx);
            this->actionFunc = func_80953098;
            func_80953098(this, globalCtx);
            return;
        case 13305:
            this->actor.flags &= 0xFFFEFFFF;
            func_801477B4(globalCtx);
            this->actionFunc = func_8095345C;
            return;
        case 13301:
            globalCtx->msgCtx.unk11F10 = 0;
            this->actionFunc = func_80952FE0;
            this->unk_2A2 = 0;
            this->unk_298 = 0;
            this->unk_2A0 |= 4;
            return;
        default:
            func_801477B4(globalCtx);
            goto block_9;
        }
    }
}

void func_809532C0(EnHs *this, GlobalContext *globalCtx) {

}

void func_809532D0(EnHs *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = this->unk_2A2;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        this->unk_2A2 = temp_v0 - 1;
        phi_v1 = this->unk_2A2;
    }
    if (phi_v1 == 0) {
        globalCtx->nextEntranceIndex = globalCtx->setupExitList[this->actor.params & 0xF];
        globalCtx->sceneLoadFlag = 0x14;
        gSaveContext.weekEventReg[25] |= 8;
        this->actionFunc = func_809532C0;
    }
}

void func_80953354(EnHs *this, GlobalContext *globalCtx) {
    if (func_801690CC(globalCtx) == 0) {
        func_800B7298(globalCtx, (Actor *) this, 7U);
        this->actionFunc = func_809532D0;
    }
}

void func_809533A0(Actor *arg0, GlobalContext *arg1) {
    u16 sp1E;
    GlobalContext *temp_a0;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 phi_a1;

    temp_a0 = arg1;
    if ((arg1->curSpawn == 1) && (temp_v0 = arg0->unk_2A0, phi_a1 = 0x33F7U, ((temp_v0 & 0x20) == 0))) {
        arg0->unk_2A0 = (u16) (temp_v0 | 0x20);
    } else {
        temp_v0_2 = arg0->unk_2A0;
        phi_a1 = 0x33F9U;
        if ((temp_v0_2 & 0x10) != 0) {
            arg0->unk_2A0 = (u16) (temp_v0_2 & 0xFFEF);
        } else {
            phi_a1 = 0x33F5U;
            if ((gSaveContext.weekEventReg[25] & 8) != 0) {
                phi_a1 = 0x33F4U;
            }
        }
    }
    sp1E = phi_a1;
    arg1 = arg1;
    func_801518B0(temp_a0, phi_a1, arg0);
    if (phi_a1 == 0x33F4) {
        func_80952DFC(arg1, phi_a1);
    }
}

void func_8095345C(EnHs *this, GlobalContext *globalCtx) {
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->actionFunc = func_80953180;
        func_809533A0((Actor *) this, globalCtx);
        if ((this->unk_2A0 & 8) != 0) {
            func_80952DFC(globalCtx);
            this->unk_2A0 &= 0xFFF7;
            return;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return;
    }
    if ((s32) this->actor.home.rot.x >= 0x14) {
        this->actionFunc = func_80953354;
        this->unk_2A2 = 0x28;
        return;
    }
    if ((this->actor.flags & 0x10000) == 0x10000) {
        func_800B8500((Actor *) this, globalCtx, 1000.0f, 1000.0f, -1);
        this->unk_2A0 |= 1;
        return;
    }
    if ((this->actor.xzDistToPlayer < 120.0f) && (Actor_IsLinkFacingActor((Actor *) this, 0x2000, globalCtx) != 0)) {
        func_800B8614((Actor *) this, globalCtx, 130.0f);
        this->unk_2A0 |= 1;
        return;
    }
    this->unk_2A0 &= 0xFFFE;
}

void EnHs_Update(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp34;
    ColliderCylinder *temp_a2;
    u16 temp_v0;
    EnHs *this = (EnHs *) thisx;

    temp_a2 = &this->unk_144;
    sp34 = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
    if (SkelAnime_FrameUpdateMatrix(&this->unk_190) != 0) {
        this->unk_190.animCurrentFrame = 0.0f;
    }
    this->actionFunc(this, globalCtx);
    func_80952F00(this, globalCtx);
    temp_v0 = this->unk_2A0;
    if ((temp_v0 & 4) != 0) {
        Math_SmoothStepToS(&this->unk_294, 0, 6, 0x1838, (s16) 0x64);
        Math_SmoothStepToS(&this->unk_29A, 0, 6, 0x1838, (s16) 0x64);
        Math_SmoothStepToS(&this->unk_29C, 0, 6, 0x1838, (s16) 0x64);
        return;
    }
    if ((temp_v0 & 1) != 0) {
        func_800E9250(globalCtx, (Actor *) this, (Vec3s *) &this->unk_294, (Vec3s *) &this->unk_29A, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
        return;
    }
    Math_SmoothStepToS(&this->unk_294, 0x3200, 6, 0x1838, (s16) 0x64);
    Math_SmoothStepToS(&this->unk_296, 0, 6, 0x1838, (s16) 0x64);
    Math_SmoothStepToS(&this->unk_29A, 0, 6, 0x1838, (s16) 0x64);
    Math_SmoothStepToS(&this->unk_29C, 0, 6, 0x1838, (s16) 0x64);
}

s32 func_8095376C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    switch (arg1) {
    case 9:
        arg4->x += arg5->unk_296;
        arg4->z += arg5->unk_294;
    default:
        return 0;
    case 10:
        arg4->x += arg5->unk_296;
        arg4->z += arg5->unk_294;
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return 0;
    case 11:
        *arg2 = NULL;
        return 0;
    case 12:
        if (arg5->params == 1) {
            *arg2 = NULL;
            return 0;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return 0;
    case 13:
        if (arg5->params == 1) {
            *arg2 = NULL;
            return 0;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return 0;
    }
}

void func_80953848(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 9) {
        SysMatrix_MultiplyVector3fByState(&D_8095393C, arg4 + 0x3C);
    }
}

void EnHs_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnHs *this = (EnHs *) thisx;
    func_8012C5B0(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk_190.skeleton, this->unk_190.limbDrawTbl, (s32) this->unk_190.dListCount, func_8095376C, func_80953848, (Actor *) this);
}
