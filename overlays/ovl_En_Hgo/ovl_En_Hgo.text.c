typedef struct EnHgo {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ SkelAnime unk_190;                  /* inferred */
    /* 0x1D4 */ void (*actionFunc)(EnHgo *, GlobalContext *);
    /* 0x1D8 */ MtxF unk_1D8;                       /* inferred */
    /* 0x218 */ char pad_218[0x4];
    /* 0x21C */ Vec3s unk_21C;                      /* inferred */
    /* 0x222 */ char pad_222[0x6C];                 /* maybe part of unk_21C[19]? */
    /* 0x28E */ Vec3s unk_28E;                      /* inferred */
    /* 0x294 */ char pad_294[0x6C];                 /* maybe part of unk_28E[19]? */
    /* 0x300 */ Vec3s unk_300;                      /* inferred */
    /* 0x306 */ Vec3s unk_306;                      /* inferred */
    /* 0x30C */ s16 unk_30C;                        /* inferred */
    /* 0x30E */ s16 unk_30E;                        /* inferred */
    /* 0x310 */ s16 unk_310;                        /* inferred */
    /* 0x312 */ s16 unk_312;                        /* inferred */
    /* 0x314 */ s16 unk_314;                        /* inferred */
    /* 0x316 */ char pad_316[0x2];
} EnHgo;                                            /* size = 0x318 */

struct _mips2c_stack_EnHgo_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnHgo_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnHgo_Init {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ColliderCylinder *sp34;              /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnHgo_Update {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BD03EC {};              /* size 0x0 */

struct _mips2c_stack_func_80BD0410 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD0420 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD0434 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD049C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD04E0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BD064C {};              /* size 0x0 */

struct _mips2c_stack_func_80BD0660 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BD06FC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BD0898 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ SkelAnime *sp3C;                     /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ u32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80BD0B8C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BD0CF0 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD0D38 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_80BD03EC(EnHgo *arg0);                    /* static */
void func_80BD0410(s32 arg0, ? arg1);               /* static */
void func_80BD0420(Actor *arg0);                    /* static */
void func_80BD0434(void *arg0, GlobalContext *arg1); /* static */
void func_80BD049C(EnHgo *arg0);                    /* static */
void func_80BD04E0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BD064C(Actor *arg0);                    /* static */
void func_80BD0660(EnHgo *arg0, GlobalContext *arg1); /* static */
void func_80BD06FC(EnHgo *arg0, GlobalContext *arg1); /* static */
s32 func_80BD0898(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BD0B8C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BD0CF0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80BD0D38(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_0600B644;
extern ? D_0600F248;
extern FlexSkeletonHeader D_06012A58;
static ActorAnimationEntry D_80BD0EA0[7] = {
    {(AnimationHeader *)0x600B644, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6013684, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x60152EC, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x6015C70, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x60165F0, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6014220, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x6014A9C, 1.0f, 0.0f, 0.0f, 0, 0.0f},
};
static ColliderCylinderInit D_80BD0F48 = {
    {0xA, 0, 0, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0x12, 0x2E, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80BD0F74 = {0, 0, 0, 0, 0xFF};
static ? D_80BD0F80;                                /* unable to generate initializer */

void EnHgo_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp34;
    ColliderCylinder *temp_a1;
    EnHgo *this = (EnHgo *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 36.0f);
    SkelAnime_InitSV(globalCtx, &this->unk_190, &D_06012A58, &D_0600B644, &this->unk_21C, &this->unk_28E, 0x13);
    temp_a1 = &this->unk_144;
    sp34 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80BD0F48);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, NULL, &D_80BD0F74);
    this->actor.targetMode = 6;
    this->unk_30C = 0;
    this->unk_30E = 0;
    this->unk_314 = 0;
    this->unk_310 = 0;
    this->unk_312 = 0;
    if (((gSaveContext.weekEventReg[75] & 0x20) != 0) || ((gSaveContext.weekEventReg[52] & 0x20) != 0)) {
        func_80BD049C(this);
        return;
    }
    this->actor.draw = NULL;
    func_80BD03EC(this);
}

void EnHgo_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnHgo *this = (EnHgo *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_144);
}

void func_80BD03EC(EnHgo *arg0) {
    arg0->actor.flags &= -2;
    arg0->actionFunc = func_80BD0410;
}

void func_80BD0410(EnHgo *arg0, GlobalContext *arg1) {

}

void func_80BD0420(Actor *arg0) {
    arg0->unk_1D4 = func_80BD0434;
}

void func_80BD0434(void *arg0, GlobalContext *arg1) {
    arg0->unk_18A = (s16) (s32) arg0->unk_3C;
    arg0->unk_18C = (s16) (s32) arg0->unk_28;
    arg0->unk_18E = (s16) (s32) arg0->unk_44;
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, arg0 + 0x144);
}

void func_80BD049C(EnHgo *arg0) {
    func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80BD0EA0, 0);
    arg0->actionFunc = func_80BD04E0;
}

void func_80BD04E0(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0;
    GlobalContext *temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 phi_t8;

    temp_a1 = arg1;
    arg1 = arg1;
    if (func_800B84D0(arg0, temp_a1) != 0) {
        temp_a0 = arg1;
        arg1 = arg1;
        if (Player_GetMask(temp_a0) == 0xC) {
            temp_v0 = arg0->unk_310;
            if ((temp_v0 & 4) == 0) {
                arg0->unk_310 = (s16) (temp_v0 | 4);
                func_801518B0(arg1, 0x15A5U, arg0);
                phi_t8 = 0x15A5;
                goto block_12;
            }
            func_801518B0(arg1, 0x15A7U, arg0);
            arg0->unk_314 = 0x15A7;
        } else if (gSaveContext.playerForm == 4) {
            temp_v0_2 = arg0->unk_310;
            if ((temp_v0_2 & 1) == 0) {
                arg0->unk_310 = (s16) (temp_v0_2 | 1);
                func_801518B0(arg1, 0x158FU, arg0);
                arg0->unk_314 = 0x158F;
            } else {
                func_801518B0(arg1, 0x1593U, arg0);
                arg0->unk_314 = 0x1593;
            }
        } else {
            temp_v0_3 = arg0->unk_310;
            if ((temp_v0_3 & 2) == 0) {
                arg0->unk_310 = (s16) (temp_v0_3 | 2);
                func_801518B0(arg1, 0x1595U, arg0);
                arg0->unk_314 = 0x1595;
            } else {
                func_801518B0(arg1, 0x1598U, arg0);
                phi_t8 = 0x1598;
block_12:
                arg0->unk_314 = phi_t8;
            }
        }
        func_80BD064C(arg0);
        return;
    }
    func_800B8614(arg0, arg1, 100.0f);
}

void func_80BD064C(Actor *arg0) {
    arg0->unk_1D4 = func_80BD0660;
}

void func_80BD0660(EnHgo *arg0, GlobalContext *arg1) {
    u32 temp_v0;

    temp_v0 = func_80152498(arg1 + 0x4908);
    switch (temp_v0) {
    case 5:
        func_80BD06FC(arg0, arg1);
        break;
    case 6:
        if (func_80147624(arg1) != 0) {
            func_80BD049C(arg0);
        }
        break;
    }
    Math_SmoothStepToS(&arg0->actor.world.rot.y, arg0->actor.yawTowardsPlayer, 0xA, 0x71C, (s16) 0xB6);
    arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
}

void func_80BD06FC(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0;
    u16 temp_t6;

    temp_a0 = arg1;
    arg1 = arg1;
    if (func_80147624(temp_a0) != 0) {
        temp_t6 = arg0->unk_314;
        switch (temp_t6) {
        case 5519:
            func_801518B0(arg1, 0x1590U, arg0);
            arg0->unk_314 = 0x1590U;
            return;
        case 5520:
            if ((gSaveContext.weekEventReg[14] & 4) != 0) {
                func_801518B0(arg1, 0x1591U, arg0);
                arg0->unk_314 = 0x1591U;
                return;
            }
            func_801518B0(arg1, 0x1592U, arg0);
            arg0->unk_314 = 0x1592U;
            return;
        case 5521:
            func_801518B0(arg1, 0x1592U, arg0);
            arg0->unk_314 = 0x1592U;
            return;
        case 5523:
            func_801518B0(arg1, 0x1594U, arg0);
            arg0->unk_314 = 0x1594U;
            return;
        case 5525:
            func_801518B0(arg1, 0x1596U, arg0);
            arg0->unk_314 = 0x1596U;
            return;
        case 5526:
            func_801518B0(arg1, 0x1597U, arg0);
            arg0->unk_314 = 0x1597U;
            return;
        case 5528:
            func_801518B0(arg1, 0x1599U, arg0);
            arg0->unk_314 = 0x1599U;
            return;
        case 5541:
            func_801518B0(arg1, 0x15A6U, arg0);
            arg0->unk_314 = 0x15A6U;
            return;
        case 5542:
            func_801518B0(arg1, 0x15A7U, arg0);
            arg0->unk_314 = 0x15A7U;
            return;
        case 5543:
            func_801477B4(arg1);
            func_80BD049C((EnHgo *) arg0);
            /* Duplicate return node #15. Try simplifying control flow for better match */
            return;
        }
    } else {
    default:
    }
}

s32 func_80BD0898(Actor *arg0, GlobalContext *arg1) {
    u32 sp44;
    SkelAnime *sp3C;
    SkelAnime *temp_a0_2;
    s32 temp_t7;
    s32 temp_v0_2;
    u16 temp_a0;
    u16 temp_t1;
    u16 temp_v0_3;
    u32 temp_v0;
    void *temp_v1;

    if (func_800EE29C(arg1, 0x1E6U) != 0) {
        temp_v0 = func_800EE200(arg1, 0x1E6U);
        temp_t7 = temp_v0 * 4;
        sp44 = temp_v0;
        temp_v1 = arg1 + temp_t7;
        temp_a0 = *temp_v1->unk_1F4C;
        if (arg0->unk_316 != temp_a0) {
            arg0->unk_316 = temp_a0;
            temp_t1 = *temp_v1->unk_1F4C;
            switch (temp_t1) {
            case 1:
                arg0->unk_218 = 0;
                func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80BD0EA0, 0);
                break;
            case 2:
                arg0->draw = EnHgo_Draw;
                arg0->unk_218 = 1;
                func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80BD0EA0, 1);
                break;
            case 3:
                arg0->unk_218 = 2;
                func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80BD0EA0, 2);
                break;
            case 4:
                arg0->unk_218 = 3;
                func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80BD0EA0, 3);
                break;
            case 5:
                arg0->unk_218 = 4;
                func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80BD0EA0, 4);
                break;
            case 6:
                arg0->unk_218 = 5;
                func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80BD0EA0, 5);
                break;
            }
        } else {
            temp_a0_2 = arg0 + 0x190;
            sp3C = temp_a0_2;
            if (func_801378B8(temp_a0_2, arg0->unk_1A0) != 0) {
                temp_v0_2 = arg0->unk_218;
                if (temp_v0_2 != 1) {
                    if (temp_v0_2 != 2) {
                        if (temp_v0_2 != 5) {

                        } else {
                            arg0->unk_218 = 6;
                            func_800BDC5C(temp_a0_2, (ActorAnimationEntry []) D_80BD0EA0, 6);
                        }
                    } else {
                        arg0->unk_218 = 3;
                        func_800BDC5C(temp_a0_2, (ActorAnimationEntry []) D_80BD0EA0, 3);
                    }
                } else if ((func_801378B8(temp_a0_2, arg0->unk_1A0) != 0) && (arg0->unk_312 == 0)) {
                    arg0->unk_312 = 1;
                    if ((gSaveContext.sceneSetupIndex == 0) && ((temp_v0_3 = arg1->csCtx.unk_12, (temp_v0_3 == 2)) || (temp_v0_3 == 4))) {
                        Audio_PlayActorSound2(arg0, 0x6961U);
                    }
                }
            }
        }
        func_800EDF24(arg0, arg1, sp44);
        return 1;
    }
    if ((arg1->csCtx.state == 0) && ((gSaveContext.weekEventReg[75] & 0x20) != 0) && (func_80BD0410 == arg0->unk_1D4)) {
        arg0->shape.rot.y = arg0->world.rot.y;
        Actor_Spawn(&arg1->actorCtx, arg1, 0xC6, arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z, (s16) 7, (s16) 0, (s16) 0, (s16) 0x7F5A);
        func_80BD0420(arg0);
    }
    arg0->unk_316 = 0x63U;
    return 0;
}

void func_80BD0B8C(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a1;
    Vec3s *temp_a2;
    Vec3s *temp_a3;
    s16 temp_v0;
    s32 temp_t7;

    temp_a1 = arg0;
    temp_a2 = temp_a1 + 0x300;
    temp_a3 = temp_a1 + 0x306;
    temp_t7 = temp_a1->focus.pos.z;
    arg0 = temp_a1;
    func_800E9250(arg1, temp_a1, temp_a2, temp_a3, (Vec3f) temp_a1->focus.pos.x, temp_a1->focus.pos.y, temp_t7);
    temp_v0 = arg0->unk_30E;
    if ((s32) temp_v0 >= 3) {
        arg0->unk_30E = (s16) (temp_v0 - 1);
        return;
    }
    if (temp_v0 == 2) {
        arg0->unk_30C = 1;
        arg0->unk_30E = 1;
        return;
    }
    if (temp_v0 == 1) {
        arg0->unk_30C = 2;
        arg0->unk_30E = 0;
        return;
    }
    arg0->unk_30C = 0;
    arg0->unk_30E = 0x3C;
}

void EnHgo_Update(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a2;
    void (*temp_v0)(EnHgo *, GlobalContext *);
    EnHgo *this = (EnHgo *) thisx;

    this->actionFunc(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    if (func_80BD0898((Actor *) this, globalCtx) != 0) {
        func_800E8F08(&this->unk_300, &this->unk_306);
        return;
    }
    temp_v0 = this->actionFunc;
    if ((func_80BD0410 != temp_v0) && (func_80BD0434 != temp_v0)) {
        temp_a2 = &this->unk_144;
        sp24 = temp_a2;
        Collider_UpdateCylinder((Actor *) this, temp_a2);
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
        func_80BD0B8C((Actor *) this, globalCtx);
    }
}

s32 func_80BD0CF0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0xB) {
        arg4->x += arg5->unk_302;
        arg4->z += arg5->unk_300;
    }
    return 0;
}

void func_80BD0D38(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 0xB) {
        SysMatrix_CopyCurrentState(arg4 + 0x1D8);
        SysMatrix_GetStateTranslation(arg4 + 0x3C);
    }
}

void EnHgo_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    EnHgo *this = (EnHgo *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp30 = temp_v0;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80BD0F80 + (this->unk_30C * 4)));
    SkelAnime_DrawSV(globalCtx, this->unk_190.skeleton, this->unk_190.limbDrawTbl, (s32) this->unk_190.dListCount, func_80BD0CF0, func_80BD0D38, (Actor *) this);
    SysMatrix_SetCurrentState(&this->unk_1D8);
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    temp_v0_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_3 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_3->words.w1 = (u32) &D_0600F248;
}
