typedef struct EnRz {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ ? unk_188;                          /* inferred */
    /* 0x188 */ char pad_188[0x118];
    /* 0x2A0 */ ? unk_2A0;                          /* inferred */
    /* 0x2A0 */ char pad_2A0[0x120];
    /* 0x3C0 */ ColliderCylinder unk_3C0;           /* inferred */
    /* 0x40C */ EnRz *unk_40C;                      /* inferred */
    /* 0x410 */ s16 unk_410;                        /* inferred */
    /* 0x412 */ s16 unk_412;                        /* inferred */
    /* 0x414 */ char pad_414[0xC];                  /* maybe part of unk_412[7]? */
    /* 0x420 */ u16 unk_420;                        /* inferred */
    /* 0x422 */ s16 unk_422;                        /* inferred */
    /* 0x424 */ s16 unk_424;                        /* inferred */
    /* 0x426 */ s16 unk_426;                        /* inferred */
    /* 0x428 */ s16 unk_428;                        /* inferred */
    /* 0x42A */ s16 unk_42A;                        /* inferred */
    /* 0x42C */ s16 unk_42C;                        /* inferred */
    /* 0x42E */ char pad_42E[0x2];
    /* 0x430 */ void (*actionFunc)(EnRz *, GlobalContext *);
} EnRz;                                             /* size = 0x434 */

struct _mips2c_stack_EnRz_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnRz_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnRz_Init {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnRz_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BFB780 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ PosRot *sp28;                        /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BFB864 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ void *sp34;                          /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80BFB9E4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BFBA1C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BFBA50 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ u8 *sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BFBB44 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ u8 *sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BFBC78 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BFBCEC {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BFBD54 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BFBDA0 {};              /* size 0x0 */

struct _mips2c_stack_func_80BFBDFC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BFBE70 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BFBFAC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BFC058 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BFC078 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BFC19C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BFC214 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BFC270 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BFC2F4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BFC36C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BFC3F8 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BFC608 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BFC674 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BFC728 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BFC7E0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BFC8AC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BFC8F8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BFCAD0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

? func_801A1FB4(?, f32 *, ?, ?);                    /* extern */
void func_80BFB780(Actor *actor, Lights *mapper, GlobalContext *globalCtx); /* static */
void func_80BFB864(GlobalContext *arg0, EnRz *arg1, s16 arg2, u8 arg3, f32 arg4); /* static */
void func_80BFB9E4(s16 arg2, EnRz *, ?, s16);       /* static */
void func_80BFBA1C(s16 arg2, Actor *, ?);           /* static */
? func_80BFBA50(EnRz *arg0, GlobalContext *arg1);   /* static */
s32 func_80BFBB44(EnRz *arg0);                      /* static */
s32 func_80BFBC78(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BFBCEC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BFBD54(EnRz *arg0, GlobalContext *arg1); /* static */
EnRz *func_80BFBDA0(EnRz *arg0, GlobalContext *arg1); /* static */
void func_80BFBDFC(GlobalContext *arg0, GlobalContext *); /* static */
s32 func_80BFBE70(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BFBFAC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BFC8AC(EnRz *arg0, s16 arg1);           /* static */
void func_80BFCAD0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06003A20;
extern void D_0600D768;
extern FlexSkeletonHeader D_0600D8D8;
static ? D_80BFCCE0;                                /* unable to generate initializer */
static void *D_80BFCCEC = (void *)0x600C990;
static void *D_80BFCCF0 = (void *)0x600CD90;
static ColliderCylinderInit D_80BFCCF4 = {
    {0xA, 0, 0x11, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x14, 0x28, 0, {0, 0, 0}},
};
static ? D_80BFCD20;                                /* unable to generate initializer */
static ? D_80BFCD3C;                                /* unable to generate initializer */
static ? D_80BFCD58;                                /* unable to generate initializer */
static Vec3f D_80BFCD60 = {500.0f, -500.0f, 0.0f};

void EnRz_Init(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *temp_s0;
    s32 temp_s1;
    s32 temp_v1;
    s16 phi_s0;
    EnRz *phi_s2;
    s32 phi_s1;
    EnRz *this = (EnRz *) thisx;

    phi_s0 = (s16) this->actor.cutscene;
    phi_s2 = this;
    phi_s1 = 0;
    do {
        phi_s2->unk_42A = phi_s0;
        if (phi_s0 != -1) {
            this->actor.cutscene = (s8) phi_s0;
            phi_s0 = ActorCutscene_GetAdditionalCutscene((s16) this->actor.cutscene);
        }
        temp_s1 = phi_s1 + 2;
        phi_s2 += 2;
        phi_s1 = temp_s1;
    } while (temp_s1 != 4);
    Actor_SetScale((Actor *) this, 0.01f);
    ActorShape_Init(&this->actor.shape, 0.0f, func_80BFB780, 20.0f);
    temp_s0 = &this->unk_144;
    SkelAnime_InitSV(globalCtx, temp_s0, &D_0600D8D8, &D_06003A20, (Vec3s *) ((s32) &this->unk_188 & ~0xF), (Vec3s *) ((s32) &this->unk_2A0 & ~0xF), 0x16);
    SkelAnime_ChangeAnimDefaultRepeat(temp_s0, &D_06003A20);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_3C0, (Actor *) this, &D_80BFCCF4);
    this->actor.colChkInfo.mass = 0xFF;
    this->actionFunc = func_80BFC058;
    func_80BFBA50(this, globalCtx);
    temp_v1 = this->actor.params & 0xF;
    this->unk_422 = 9;
    this->actor.targetMode = 0;
    this->actor.minVelocityY = -9.0f;
    this->actor.gravity = -1.0f;
    if (temp_v1 != 1) {
        if (temp_v1 != 2) {
            this->unk_420 |= 2;
            if ((gSaveContext.weekEventReg[77] & 4) != 0) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            func_80BFB864(globalCtx, this, 2, 0U, 0.0f);
            this->actionFunc = func_80BFC8F8;
            if ((this->actor.params & 0x8000) == 0) {
                this->actor.textId = 0x291C;
            } else {
                this->actor.textId = 0x2920;
            }
            goto block_19;
        }
        this->actor.flags |= 0x10;
        if ((gSaveContext.weekEventReg[77] & 4) != 0) {
            func_80BFB864(globalCtx, this, 8, 0U, 0.0f);
        } else {
            func_80BFB864(globalCtx, this, 6, 0U, 0.0f);
        }
        this->actionFunc = func_80BFC3F8;
        this->unk_40C = func_80BFBDA0(this, globalCtx);
        this->actor.uncullZoneForward = 300.0f;
        goto block_19;
    }
    if ((gSaveContext.weekEventReg[77] & 4) == 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    func_80BFB864(globalCtx, this, 3, 0U, 0.0f);
    this->actionFunc = func_80BFC674;
    this->actor.shape.yOffset = -1500.0f;
block_19:
    if ((this->actor.params & 0x8000) == 0) {
        this->unk_426 = 0x226;
    } else {
        this->unk_426 = 0x227;
    }
    this->unk_428 = 0;
}

void func_80BFB780(Actor *actor, Lights *mapper, GlobalContext *globalCtx) {
    ? sp34;
    PosRot *sp28;
    PosRot *temp_a1;
    f32 temp_f0;

    temp_a1 = &actor->world;
    if (actor->unk_422 == 8) {
        actor->scale.x = (((27.0f - actor->unk_418) + actor->world.pos.y) * 0.00044444448f) + 0.01f;
    }
    sp28 = temp_a1;
    Math_Vec3f_Copy((Vec3f *) &sp34, (Vec3f *) temp_a1);
    Math_Vec3f_Copy((Vec3f *) sp28, actor + 0x414);
    func_800B4AEC(globalCtx, actor, 50.0f);
    temp_f0 = actor->floorHeight;
    if (sp38 < temp_f0) {
        actor->world.pos.y = temp_f0;
    } else {
        actor->world.pos.y = sp38;
    }
    func_800B3FC0(actor, mapper, globalCtx);
    Math_Vec3f_Copy((Vec3f *) sp28, (Vec3f *) &sp34);
    actor->scale.x = 0.01f;
}

void func_80BFB864(GlobalContext *arg0, EnRz *arg1, s16 arg2, u8 arg3, f32 arg4) {
    s32 sp38;
    void *sp34;
    AnimationHeaderCommon **temp_v1_2;
    f32 temp_f0;
    s32 temp_a3;
    void *temp_v1;
    ? *phi_v0;

    temp_a3 = arg3 & 0xFF;
    phi_v0 = &D_80BFCD3C;
    if ((arg1->actor.params & 0x8000) == 0) {
        phi_v0 = &D_80BFCD20;
    }
    if (((s32) arg2 >= 0) && ((s32) arg2 < 9) && ((arg2 != arg1->unk_422) || (temp_a3 != 0))) {
        if ((s32) arg2 >= 7) {
            temp_v1 = (arg2 * 4) + &D_80BFCD58;
            sp34 = temp_v1;
            sp38 = temp_a3;
            temp_f0 = (f32) SkelAnime_GetFrameCount(temp_v1->unk_-1C);
            if (sp38 == 0) {
                SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x144, (LinkAnimationHeader *) temp_v1->unk_-1C, 0.6666667f, 0.0f, temp_f0, (u8) 0, arg4);
            } else {
                SkelAnime_ChangeLinkAnim(arg0, arg1 + 0x144, (LinkAnimationHeader *) temp_v1->unk_-1C, 0.6666667f, 0.0f, temp_f0, (u8) 0, arg4);
            }
        } else {
            temp_v1_2 = phi_v0 + (arg2 * 4);
            arg3 = (u8) temp_a3;
            sp38 = (s32) temp_v1_2;
            SkelAnime_ChangeAnim(arg1 + 0x144, (AnimationHeader *) *temp_v1_2, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*temp_v1_2), (u8) (s32) arg3, arg4);
        }
        arg1->unk_422 = arg2;
    }
}

void func_80BFB9E4(s16 arg2) {
    func_80BFB864((GlobalContext *) arg2, NULL, (s16) -5.0f);
}

void func_80BFBA1C(s16 arg2) {
    func_80BFB864((GlobalContext *) arg2, NULL, (s16) 0.0f);
}

? func_80BFBA50(EnRz *arg0, GlobalContext *arg1) {
    u8 *sp1C;
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_v0;
    u8 *temp_t8;
    void *temp_v0_2;

    temp_v0 = (s32) (arg0->actor.params & 0x7E00) >> 9;
    if (temp_v0 != 0x3F) {
        temp_t8 = arg1->setupPathList + (temp_v0 * 8);
        arg0->unk_3B8 = temp_t8;
        if (temp_t8 != 0) {
            arg0 = arg0;
            sp1C = temp_t8;
            temp_v0_2 = Lib_SegmentedToVirtual(temp_t8->unk_4);
            temp_f0 = (f32) temp_v0_2->unk_0 - arg0->actor.world.pos.x;
            temp_f2 = (f32) temp_v0_2->unk_4 - arg0->actor.world.pos.z;
            if (((temp_f0 * temp_f0) + (temp_f2 * temp_f2)) < 100.0f) {
                arg0->unk_3BC = 0;
                arg0->unk_420 &= 0xFFFE;
                goto block_6;
            }
            arg0->unk_3BC = *sp1C - 1;
            arg0->unk_420 |= 1;
            return 1;
        }
        goto block_6;
    }
    arg0->unk_3B8 = NULL;
    arg0->unk_3BC = 0;
block_6:
    return 0;
}

s32 func_80BFBB44(EnRz *arg0) {
    u8 *sp34;
    f32 sp2C;
    f32 sp28;
    f32 temp_f12;
    f32 temp_f14;
    s32 temp_t4;
    s32 temp_t7;
    u8 *temp_v0;
    void *temp_v1;
    s32 phi_v0;

    temp_v0 = arg0->unk_3B8;
    if (temp_v0 == 0) {
        return 1;
    }
    sp34 = temp_v0;
    temp_v1 = Lib_SegmentedToVirtual(temp_v0->unk_4) + (arg0->unk_3BC * 6);
    temp_f12 = (f32) temp_v1->unk_0 - arg0->actor.world.pos.x;
    temp_f14 = (f32) temp_v1->unk_4 - arg0->actor.world.pos.z;
    sp2C = temp_f12;
    sp28 = temp_f14;
    arg0->actor.world.rot.y = Math_Atan2S(temp_f12, temp_f14);
    Math_SmoothStepToS(arg0 + 0xBE, arg0->actor.world.rot.y, 2, 0x7D0, (s16) 0xC8);
    phi_v0 = 0;
    if (((temp_f12 * temp_f12) + (temp_f14 * temp_f14)) < 100.0f) {
        if ((arg0->unk_420 & 1) != 0) {
            temp_t4 = arg0->unk_3BC - 1;
            arg0->unk_3BC = temp_t4;
            if (temp_t4 < 0) {
                return 2;
            }
            goto block_8;
        }
        temp_t7 = arg0->unk_3BC + 1;
        arg0->unk_3BC = temp_t7;
        if (temp_t7 >= (s32) *sp34) {
            return 2;
        }
block_8:
        phi_v0 = 1;
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return phi_v0;
    }
    return phi_v0;
}

s32 func_80BFBC78(Actor *arg0, GlobalContext *arg1) {
    if ((arg0->xzDistToPlayer < 80.0f) && (fabsf(arg0->yDistToPlayer) < 20.0f) && (Actor_IsLinkFacingActor(arg0, 0x3000, arg1) != 0)) {
        return 1;
    }
    return 0;
}

s32 func_80BFBCEC(Actor *arg0, GlobalContext *arg1) {
    void *sp18;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    if ((arg0->xzDistToPlayer < 100.0f) && (sp18 = temp_v1, (Actor_IsActorFacingLink(arg0, 0x3000) != 0)) && (temp_v1->unk_A70 & 0x2000000)) {
        return 1;
    }
    return 0;
}

void func_80BFBD54(EnRz *arg0, GlobalContext *arg1) {
    if ((s32) arg0->unk_422 < 7) {
        SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
        return;
    }
    func_801360E0(arg1, arg0 + 0x144);
}

EnRz *func_80BFBDA0(EnRz *arg0, GlobalContext *arg1) {
    EnRz *temp_v1;
    EnRz *temp_v1_2;
    EnRz *phi_v1;

    temp_v1 = arg1->actorCtx.actorList[4].first;
    phi_v1 = temp_v1;
    if (temp_v1 != 0) {
loop_1:
        if ((phi_v1->actor.id == 0x27B) && ((phi_v1->actor.params & 0xF) == (arg0->actor.params & 0xF)) && (arg0 != phi_v1)) {
            return phi_v1;
        }
        temp_v1_2 = phi_v1->actor.next;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 == 0) {
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return NULL;
        }
        goto loop_1;
    }
    return NULL;
}

void func_80BFBDFC(GlobalContext *arg0) {
    if ((gSaveContext.weekEventReg[75] & 0x80) != 0) {
        func_80151BB4(arg0, 0x27U);
    }
    func_80151BB4(arg0, 0xCU);
}

void EnRz_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnRz *this = (EnRz *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_3C0);
}

s32 func_80BFBE70(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    u16 temp_v1;

    if (((arg0->params & 0x8000) == 0) && (arg0->unk_422 == 4)) {
        func_800B9010(arg0, 0x2198U);
    }
    if (func_800EE29C(arg1, (u32) arg0->unk_426) != 0) {
        func_800EDF24(arg0, arg1, func_800EE200(arg1, (u32) arg0->unk_426));
        temp_v1 = arg1->csCtx.npcActions[func_800EE200(arg1, (u32) arg0->unk_426)]->unk0;
        temp_v0 = temp_v1 & 0xFFFF;
        if (temp_v1 != arg0->unk_428) {
            arg0->unk_428 = temp_v1;
            if (temp_v0 != 1) {
                if (temp_v0 != 2) {
                    if (temp_v0 != 3) {
                        if (temp_v0 != 4) {
                            return 1;
                        }
                        func_80BFBA1C((s16) arg1, arg0, 8);
                        goto block_14;
                    }
                    func_80BFBA1C((s16) arg1, arg0, 4);
                    return 1;
                }
                func_80BFBA1C((s16) arg1, arg0, 5);
                return 1;
            }
            func_80BFBA1C((s16) arg1, arg0, 1);
            return 1;
        }
block_14:
        return 1;
    }
    return 0;
}

s32 func_80BFBFAC(Actor *arg0, GlobalContext *arg1) {
    if (arg0->cutscene == -1) {
        func_801518B0(arg1, 0x2925U, arg0);
        arg0->unk_430 = func_80BFC078;
        goto block_7;
    }
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
        ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
        goto block_7;
    }
    if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
        ActorCutscene_Start((s16) arg0->cutscene, arg0);
        return 1;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
block_7:
    return 0;
}

void func_80BFC058(EnRz *this, GlobalContext *globalCtx) {
    func_80BFBD54();
}

void func_80BFC078(EnRz *this, GlobalContext *globalCtx) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    EnRz *temp_a1;
    f32 *temp_a1_2;
    u16 temp_v1;

    func_80BFBD54(this, globalCtx);
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        temp_v1 = globalCtx->msgCtx.unk11F04;
        if ((temp_v1 == 0x2927) || (temp_v1 == 0x2928)) {
            func_80151938(globalCtx, (temp_v1 + 1) & 0xFFFF);
            gSaveContext.weekEventReg[77] |= 4;
        } else {
            func_801477B4(globalCtx);
            this->actionFunc = func_80BFC3F8;
            if (this->unk_422 != 8) {
                func_80BFB9E4((s16) globalCtx, this, 6);
                temp_a1 = this->unk_40C;
                if (temp_a1 != 0) {
                    func_80BFB9E4((s16) globalCtx, temp_a1, 6);
                }
            }
        }
    }
    if ((this->actor.params & 0x8000) == 0) {
        temp_a1_2 = &sp28;
        sp28 = this->actor.projectedPos.x;
        sp2C = this->actor.projectedPos.y;
        sp30 = this->actor.projectedPos.z;
        func_801A1FB4(3, temp_a1_2, 0x2A, 0x44610000);
    }
}

void func_80BFC19C(EnRz *this, GlobalContext *globalCtx) {
    EnRz *temp_a1;

    func_80BFBD54(this, globalCtx);
    if (func_80BFBE70((Actor *) this, globalCtx) == 0) {
        this->actionFunc = func_80BFC3F8;
        func_80BFBA1C((s16) globalCtx, (Actor *) this, 8);
        temp_a1 = this->unk_40C;
        if (temp_a1 != 0) {
            func_80BFBA1C((s16) globalCtx, (Actor *) temp_a1, 8);
        }
    }
}

void func_80BFC214(EnRz *this, GlobalContext *globalCtx) {
    func_80BFBD54(this, globalCtx);
    if ((func_80BFBE70((Actor *) this, globalCtx) == 0) && (func_80BFBFAC((Actor *) this, globalCtx) != 0)) {
        this->actionFunc = func_80BFC19C;
    }
}

void func_80BFC270(EnRz *this, GlobalContext *globalCtx) {
    func_80BFBD54(this, globalCtx);
    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        this->actor.parent = NULL;
        this->actionFunc = func_80BFC214;
        func_80BFBDFC(globalCtx, globalCtx);
        return;
    }
    func_800B8A1C((Actor *) this, globalCtx, 0xC, 2000.0f, 1000.0f);
}

void func_80BFC2F4(EnRz *this, GlobalContext *globalCtx) {
    func_80BFBD54(this, globalCtx);
    if (func_80BFBE70((Actor *) this, globalCtx) == 0) {
        func_801477B4(globalCtx);
        func_800B8A1C((Actor *) this, globalCtx, 0xC, 2000.0f, 1000.0f);
        this->actionFunc = func_80BFC270;
    }
}

void func_80BFC36C(EnRz *this, GlobalContext *globalCtx) {
    func_80BFBD54((EnRz *) globalCtx);
    if (func_80BFBFAC((Actor *) this, globalCtx) != 0) {
        gSaveContext.weekEventReg[77] |= 4;
        if ((gSaveContext.weekEventReg[75] & 0x80) != 0) {
            this->actionFunc = func_80BFC214;
        } else {
            this->actionFunc = func_80BFC2F4;
            gSaveContext.weekEventReg[75] |= 0x80;
        }
        this->actor.cutscene = (s8) this->unk_42C;
    }
}

void func_80BFC3F8(EnRz *this, GlobalContext *globalCtx) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 *temp_a1;
    u32 temp_v0;

    func_80BFBD54(this, globalCtx);
    if (this->unk_40C == 0) {
        this->unk_40C = func_80BFBDA0(this, globalCtx);
    }
    if (func_80BFBE70((Actor *) this, globalCtx) == 0) {
        if (func_800B84D0((Actor *) this, globalCtx) != 0) {
            temp_v0 = this->actor.flags;
            this->actionFunc = func_80BFC078;
            if ((temp_v0 & 0x10000) == 0x10000) {
                this->actionFunc = func_80BFC36C;
                this->actor.flags = temp_v0 & 0xFFFEFFFF;
                this->actor.cutscene = (s8) this->unk_42A;
            } else if (Player_GetMask(globalCtx) == 0xE) {
                if ((gSaveContext.weekEventReg[77] & 4) != 0) {
                    func_801518B0(globalCtx, 0x2925U, (Actor *) this);
                    func_80BFBDFC(globalCtx);
                } else {
                    func_801518B0(globalCtx, 0x2926U, (Actor *) this);
                    func_80BFBDFC(globalCtx);
                }
            } else {
                func_801518B0(globalCtx, 0x2926U, (Actor *) this);
                func_80BFBDFC(globalCtx);
            }
        } else if (func_80BFBC78((Actor *) this, globalCtx) != 0) {
            if ((func_80BFBCEC((Actor *) this, globalCtx) != 0) && ((gSaveContext.weekEventReg[77] & 4) == 0) && (this->unk_40C != 0)) {
                this->actor.flags |= 0x10000;
                func_800B8500((Actor *) this, globalCtx, 1000.0f, 1000.0f, -1);
            } else {
                this->actor.flags &= 0xFFFEFFFF;
                func_800B8614((Actor *) this, globalCtx, 120.0f);
            }
        }
        if ((this->actor.params & 0x8000) == 0) {
            temp_a1 = &sp30;
            sp30 = this->actor.projectedPos.x;
            sp34 = this->actor.projectedPos.y;
            sp38 = this->actor.projectedPos.z;
            func_801A1FB4(3, temp_a1, 0x2A, 0x44610000);
        }
    }
}

void func_80BFC608(EnRz *this, GlobalContext *globalCtx) {
    func_80BFBD54(this, globalCtx);
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        func_801477B4(globalCtx);
        this->actionFunc = func_80BFC674;
    }
}

void func_80BFC674(EnRz *this, GlobalContext *globalCtx) {
    func_80BFBD54(this, globalCtx);
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->actionFunc = func_80BFC608;
        if (Player_GetMask(globalCtx) == 0xE) {
            func_801518B0(globalCtx, 0x2925U, (Actor *) this);
            return;
        }
        func_801518B0(globalCtx, 0x2924U, (Actor *) this);
        return;
    }
    if (func_80BFBC78((Actor *) this, globalCtx) != 0) {
        func_800B8614((Actor *) this, globalCtx, 120.0f);
    }
}

void func_80BFC728(EnRz *this, GlobalContext *globalCtx) {
    u16 temp_t8;

    func_80BFBD54(this, globalCtx);
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        func_801477B4(globalCtx);
        temp_t8 = this->actor.textId + 1;
        this->actionFunc = func_80BFC7E0;
        this->actor.textId = temp_t8;
        if ((this->actor.params & 0x8000) == 0) {
            if ((temp_t8 & 0xFFFF) >= 0x2920) {
                this->actor.textId = 0x291C;
                return;
            }
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return;
        }
        if ((s32) this->actor.textId >= 0x2924) {
            this->actor.textId = 0x2920;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_80BFC7E0(EnRz *this, GlobalContext *globalCtx) {
    s16 temp_v1;

    func_80BFBD54(this, globalCtx);
    temp_v1 = this->unk_424;
    if ((s32) temp_v1 > 0) {
        this->unk_424 = temp_v1 - 1;
    } else {
        this->actionFunc = func_80BFC8F8;
        func_80BFB9E4((s16) globalCtx, this, 2);
    }
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->actionFunc = func_80BFC728;
        func_80BFB9E4((s16) globalCtx, this, 0);
        this->actor.speedXZ = 0.0f;
        func_80BFBDFC(globalCtx);
        return;
    }
    if (func_80BFBC78((Actor *) this, globalCtx) != 0) {
        func_800B8614((Actor *) this, globalCtx, 120.0f);
    }
}

void func_80BFC8AC(EnRz *arg0, s16 arg1) {
    arg0->unk_424 = 0x64;
    arg0->actionFunc = func_80BFC7E0;
    arg0->actor.speedXZ = 0.0f;
    func_80BFB9E4(arg1, arg0, 0, arg1);
}

void func_80BFC8F8(EnRz *this, GlobalContext *globalCtx) {
    s32 temp_v0;

    func_80BFBD54(this, globalCtx);
    this->actor.speedXZ = 1.5f;
    temp_v0 = func_80BFBB44(this);
    if (temp_v0 != 1) {
        if (temp_v0 == 2) {
            func_80BFBA50(this, globalCtx);
            func_80BFC8AC(this, (s16) globalCtx);
        }
    } else {
        func_80BFC8AC(this, (s16) globalCtx);
    }
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->actionFunc = func_80BFC728;
        func_80BFB9E4((s16) globalCtx, this, 0);
        this->actor.speedXZ = 0.0f;
        func_80BFBDFC(globalCtx);
        return;
    }
    if (func_80BFBC78((Actor *) this, globalCtx) != 0) {
        func_800B8614((Actor *) this, globalCtx, 120.0f);
    }
}

void EnRz_Update(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a2;
    s16 temp_v1;
    s16 phi_v0;
    s16 phi_v1;
    EnRz *this = (EnRz *) thisx;

    temp_a2 = &this->unk_3C0;
    sp28 = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 40.0f, 25.0f, 40.0f, 5U);
    this->actionFunc(this, globalCtx);
    temp_v1 = this->unk_412;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        this->unk_412 = temp_v1 - 1;
        phi_v0 = this->unk_412;
    }
    phi_v1 = this->unk_412;
    if (phi_v0 == 0) {
        this->unk_412 = Rand_S16Offset(0x3C, 0x3C);
        phi_v1 = this->unk_412;
    }
    this->unk_410 = phi_v1;
    if ((s32) this->unk_410 >= 3) {
        this->unk_410 = 0;
    }
}

void func_80BFCAD0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 0xB) {
        arg1 = arg1;
        SysMatrix_MultiplyVector3fByState(&D_80BFCD60, arg4 + 0x3C);
    }
    if (arg1 == 3) {
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x414);
    }
}

void EnRz_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp38;
    Gfx *sp34;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    EnRz *this = (EnRz *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    if ((this->actor.params & 0x8000) == 0) {
        AnimatedMat_DrawStepOpa(globalCtx, Lib_SegmentedToVirtual(&D_0600D768), 0U);
    } else {
        AnimatedMat_DrawStepOpa(globalCtx, Lib_SegmentedToVirtual(&D_0600D768), 1U);
    }
    if (this->unk_422 == 4) {
        temp_v0 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060024;
        sp38 = temp_v0;
        sp38->words.w1 = Lib_SegmentedToVirtual(D_80BFCCF0);
    } else if ((this->unk_420 & 2) != 0) {
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDB060024;
        sp34 = temp_v0_2;
        sp34->words.w1 = Lib_SegmentedToVirtual(D_80BFCCEC);
    } else {
        temp_v0_3 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDB060024;
        sp30 = temp_v0_3;
        sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80BFCCE0 + (this->unk_410 * 4)));
    }
    SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, NULL, func_80BFCAD0, (Actor *) this);
}
