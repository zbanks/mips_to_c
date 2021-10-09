CRASHED

typedef struct {
    /* 0x00 */ Room currRoom;
    /* 0x14 */ Room prevRoom;
    /* 0x28 */ void *roomMemPages[2];
    /* 0x30 */ u8 activeMemPage;
    /* 0x31 */ s8 unk31;
    /* 0x32 */ char pad_32[0x2];                    /* maybe part of unk31[3]? */
    /* 0x34 */ void *activeRoomVram;
    /* 0x38 */ DmaRequest dmaRequest;
    /* 0x58 */ OSMesgQueue loadQueue;
    /* 0x70 */ void *loadMsg[1];
    /* 0x74 */ void *unk74;
    /* 0x78 */ s8 unk78;
    /* 0x79 */ s8 unk79;
    /* 0x7A */ s16 unk_7A;                          /* inferred */
    /* 0x7C */ char pad_7C[0x4];                    /* maybe part of unk_7A[3]? */
} RoomContext;                                      /* size = 0x80 */

struct _mips2c_stack_EnPamera_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnPamera_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ GraphicsContext *sp30;               /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnPamera_HandleDialogue {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnPamera_Init {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ ColliderCylinder *sp3C;              /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0x14];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnPamera_LookDownWell {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnPamera_OverrideLimbDraw {};  /* size 0x0 */

struct _mips2c_stack_EnPamera_PostLimbDraw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnPamera_Update {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BD84F0 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BD8588 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0xC];
    /* 0x34 */ Path *sp34;                          /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BD8658 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BD8700 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD8758 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BD8908 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD8964 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BD8A38 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD8A7C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ PosRot *sp30;                        /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BD8B50 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD8B70 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ char pad_30[0x2];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BD8CCC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD8D1C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD8D80 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD8DB0 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ char pad_30[0x2];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BD8F60 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BD8FF0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ PosRot *sp24;                        /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BD909C {};              /* size 0x0 */

struct _mips2c_stack_func_80BD9234 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BD92D0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Path *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BD9338 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD9384 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD93CC {};              /* size 0x0 */

struct _mips2c_stack_func_80BD93F4 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ SkelAnime *sp1C;                     /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BD94E0 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BD9840 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD9904 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD9928 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD9938 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD994C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BD9A9C {};              /* size 0x0 */

struct _mips2c_stack_func_80BD9B4C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BD9C70 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD9CB8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ u32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BD9E60 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD9E78 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD9E88 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD9ED0 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD9EE0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD9F3C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BDA038 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BDA090 {};              /* size 0x0 */

struct _mips2c_stack_func_80BDA0A0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BDA0FC {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ SkelAnime *sp1C;                     /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BDA170 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BDA1C8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BDA288 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BDA2E0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ SkelAnime *sp1C;                     /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BDA344 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

s32 EnPamera_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void EnPamera_PostLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
? func_80BD90AC(EnPamera *, GlobalContext *);       /* static */
extern AnimationHeader D_060005BC;
extern FlexSkeletonHeader D_06008448;
extern ? D_06008AE0;
extern ? D_06008E38;
static ColliderCylinderInit D_80BDA480 = {
    {0xA, 0, 0, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0xC, 0x2E, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80BDA4AC = {0, 0, 0, 0, 0xFF};
static ActorAnimationEntry D_80BDA4B8[13] = {
    {(AnimationHeader *)0x60005BC, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6008AE0, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6008E38, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x600A844, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x600B0C4, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6009870, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6009F54, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600B5B0, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600BCC4, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600D9DC, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600E16C, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600C9F4, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x600D0F0, 1.0f, 0.0f, 0.0f, 0, 0.0f},
};
static Vec3f D_80BDA5F0 = {1000.0f, 0.0f, 0.0f};
static ? D_80BDA5FC;                                /* unable to generate initializer */
static ? D_80BDA604;                                /* unable to generate initializer */
static ? D_80BDA610;                                /* unable to generate initializer */

void EnPamera_Init(Actor *thisx, GlobalContext *globalCtx) {
    ? sp44;
    ColliderCylinder *sp3C;
    ColliderCylinder *temp_a1;
    PosRot *temp_a0_2;
    s16 temp_v0_2;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    u8 temp_a1_2;
    EnPamera *this = (EnPamera *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 15.0f);
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06008448, &D_060005BC, this->limbDrawTbl, this->transitionDrawTbl, 0x17);
    temp_a1 = &this->collider;
    sp3C = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80BDA480);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, NULL, &D_80BDA4AC);
    this->actor.targetMode = 6;
    this->unk_312 = 0;
    this->unk_310 = 0;
    this->unk_314 = 0;
    this->unk_316 = 0;
    this->hideInisdeTimer = 0;
    this->unk_322 = 0;
    this->unk_324 = 0;
    if (((s32) (this->actor.params & 0xF000) >> 0xC) != 0) {
        func_80BD9840(this, globalCtx);
        return;
    }
    func_80BD8588(this, globalCtx);
    func_80BD8658(this);
    if (((gSaveContext.weekEventReg[14] & 4) == 0) || ((gSaveContext.weekEventReg[52] & 0x20) != 0) || ((gSaveContext.weekEventReg[75] & 0x20) != 0) || (gSaveContext.entranceIndex == 0x2090)) {
        Actor_MarkForDeath((Actor *) this);
    }
    if ((gSaveContext.weekEventReg[61] & 4) != 0) {
        temp_a1_2 = gSaveContext.weekEventReg[59];
        temp_v1 = gSaveContext.entranceIndex;
        temp_a0 = temp_a1_2 & 1;
        if ((temp_a0 == 0) || (temp_v1 != 0x2020)) {
            if ((temp_v1 != 0x2020) && (temp_a0 != 0)) {
                gSaveContext.weekEventReg[59] = temp_a1_2 & 0xFE;
            }
            func_80BD8700(this);
            return;
        }
        temp_a0_2 = &this->actor.world;
        temp_v0 = this->pathPointsCount - 1;
        this->pathIndex = temp_v0;
        sp3C = (ColliderCylinder *) temp_a0_2;
        Math_Vec3s_ToVec3f((Vec3f *) temp_a0_2, &this->pathPoints[temp_v0]);
        Math_Vec3s_ToVec3f((Vec3f *) &sp44, &this->pathPoints[this->pathIndex] - 6);
        temp_v0_2 = Math_Vec3f_Yaw((Vec3f *) &sp44, (Vec3f *) sp3C);
        this->actor.shape.rot.y = temp_v0_2;
        this->actor.world.rot.y = temp_v0_2;
        func_80BD8CCC(this);
        return;
    }
    gSaveContext.weekEventReg[59] |= 1;
    func_80BD8FF0(this);
}

s32 func_80BD84F0(EnPamera *this, GlobalContext *globalCtx) {
    Actor *temp_s0;
    Actor *temp_s0_2;
    Actor *phi_s0;

    temp_s0 = globalCtx->actorCtx.actorList[10].first;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
loop_2:
        if ((phi_s0->id == 5) && (Math_Vec3f_DistXZ((Vec3f *) &this->actor.world, phi_s0 + 0x24) < 200.0f)) {
            this->actor.child = phi_s0;
            return 1;
        }
        temp_s0_2 = phi_s0->next;
        phi_s0 = temp_s0_2;
        if (temp_s0_2 == 0) {
            goto block_6;
        }
        goto loop_2;
    }
block_6:
    this->actor.child = NULL;
    return 0;
}

void func_80BD8588(EnPamera *this, GlobalContext *globalCtx) {
    Path *sp34;
    ? sp28;
    void *sp20;
    Path *temp_t6;
    Path *temp_v1;
    Vec3s *temp_v0;
    s16 temp_v0_2;
    s32 temp_t9;
    Path *phi_v1;

    temp_t6 = globalCtx->setupPathList;
    temp_t9 = (s32) (this->actor.params & 0xFF0) >> 4;
    temp_v1 = &temp_t6[temp_t9];
    if (temp_v1 == 0) {
        sp20 = globalCtx + 0x18000;
        sp34 = temp_v1;
        Actor_MarkForDeath((Actor *) this);
    }
    phi_v1 = &temp_t6[temp_t9];
    if ((gSaveContext.weekEventReg[61] & 4) != 0) {
        phi_v1 = (globalCtx + 0x18000)->unk_864 + (temp_t6[temp_t9].unk1 * 8);
    }
    sp34 = phi_v1;
    temp_v0 = Lib_SegmentedToVirtual(phi_v1->points);
    this->pathPoints = temp_v0;
    this->pathIndex = 0;
    this->pathPointsCount = (s32) phi_v1->count;
    this->pathId = (s32) phi_v1->unk1;
    Math_Vec3s_ToVec3f((Vec3f *) &sp28, temp_v0);
    temp_v0_2 = Math_Vec3f_Yaw((Vec3f *) &this->actor.world, (Vec3f *) &sp28);
    this->actor.shape.rot.y = temp_v0_2;
    this->actor.world.rot.y = temp_v0_2;
}

void func_80BD8658(EnPamera *this) {
    s32 temp_s1;
    s16 phi_s0;
    s32 phi_s1;

    phi_s0 = (s16) this->actor.cutscene;
    phi_s1 = 0;
loop_1:
    if (phi_s0 != -1) {
        this->cutscenes[phi_s1] = phi_s0;
        temp_s1 = phi_s1 + 1;
        phi_s0 = ActorCutscene_GetAdditionalCutscene(phi_s0);
        phi_s1 = temp_s1;
        if (temp_s1 != 2) {
            goto loop_1;
        }
    }
}

void EnPamera_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnPamera *this = (EnPamera *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void func_80BD8700(EnPamera *this) {
    EnPamera *temp_a3;

    temp_a3 = this;
    temp_a3->hideInisdeTimer = 0;
    temp_a3->actor.flags &= -2;
    this = temp_a3;
    func_800BDC5C(&temp_a3->skelAnime, (ActorAnimationEntry []) D_80BDA4B8, 0);
    this->actionFunc = func_80BD8758;
}

void func_80BD8758(EnPamera *this, GlobalContext *globalCtx) {
    Actor *temp_v0_4;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;

    temp_v0 = this->hideInisdeTimer;
    this->hideInisdeTimer = temp_v0 + 1;
    if ((((s32) temp_v0 < 0x709) ^ 1) != 0) {
        if ((ActorCutscene_GetCanPlayNext(this->cutscenes[0]) != 0) && (temp_a0 = this->cutscenes[0], (temp_a0 != -1))) {
            ActorCutscene_StartAndSetUnkLinkFields(temp_a0, (Actor *) this);
            func_800E02AC(Play_GetCamera(globalCtx, ActorCutscene_GetCurrentCamera(this->cutscenes[0])), (Actor *) this);
            this->actor.speedXZ = 1.5f;
            func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) D_80BDA4B8, 1);
            temp_v0_2 = this->actor.home.rot.y;
            this->actor.shape.rot.y = temp_v0_2;
            this->actor.world.rot.y = temp_v0_2;
            func_80BD9338(this, globalCtx);
            func_80BD8908(this);
        } else {
            temp_a0_2 = this->cutscenes[0];
            if ((temp_a0_2 != -1) && (this->actor.xzDistToPlayer < 1000.0f)) {
                ActorCutscene_SetIntentToPlay(temp_a0_2);
            } else {
                this->actor.speedXZ = 1.5f;
                func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) D_80BDA4B8, 1);
                temp_v0_3 = this->actor.home.rot.y;
                this->actor.shape.rot.y = temp_v0_3;
                this->actor.world.rot.y = temp_v0_3;
                func_80BD9338(this, globalCtx);
                func_80BD8908(this);
            }
        }
    }
    if ((this->actor.draw != 0) && (func_80BD8964 != this->actionFunc)) {
        temp_v0_4 = this->actor.child;
        if ((temp_v0_4 != 0) && (temp_v0_4->id == 5) && (temp_v0_4->world.rot.y == 0)) {
            this->actor.draw = NULL;
        }
    }
    if (func_80BD9234(this, globalCtx) != 0) {
        this->hideInisdeTimer = 0x6E0;
    }
}

void func_80BD8908(EnPamera *this) {
    EnPamera *temp_a3;

    temp_a3 = this;
    temp_a3->actor.draw = EnPamera_Draw;
    temp_a3->actor.flags |= 1;
    this = temp_a3;
    func_800BDC5C(&temp_a3->skelAnime, (ActorAnimationEntry []) D_80BDA4B8, 1);
    this->actionFunc = func_80BD8964;
}

void func_80BD8964(EnPamera *this, GlobalContext *globalCtx) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    PosRot *temp_a0;
    SkelAnime *temp_a0_2;
    f32 *temp_a1;
    s16 temp_t1;

    temp_a0 = &this->actor.world;
    temp_a1 = &sp1C;
    sp1C = (f32) this->pathPoints->x;
    sp20 = (f32) this->pathPoints->y;
    temp_t1 = this->pathPoints->z;
    this = this;
    sp24 = (f32) temp_t1;
    temp_a0_2 = &this->skelAnime;
    if (Math_Vec3f_StepTo((Vec3f *) temp_a0, (Vec3f *) temp_a1, 1.0f) < 5.0f) {
        this->actor.speedXZ = 1.5f;
        this = this;
        func_800BDC5C(temp_a0_2, (ActorAnimationEntry []) D_80BDA4B8, 1);
        gSaveContext.weekEventReg[59] |= 1;
        func_80BD8B50(this);
    }
}

void func_80BD8A38(EnPamera *this) {
    func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) D_80BDA4B8, 1);
    this->actionFunc = func_80BD8A7C;
}

void func_80BD8A7C(EnPamera *this, GlobalContext *globalCtx) {
    PosRot *sp30;
    PosRot *sp2C;
    PosRot *temp_a0;
    PosRot *temp_a1;

    temp_a0 = &this->actor.world;
    temp_a1 = &this->actor.home;
    sp2C = temp_a1;
    sp30 = temp_a0;
    Math_SmoothStepToS(&this->actor.shape.rot.y, Math_Vec3f_Yaw((Vec3f *) temp_a0, (Vec3f *) temp_a1), 0xA, 0x3000, (s16) 0x100);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if (Math_Vec3f_StepTo((Vec3f *) temp_a0, (Vec3f *) temp_a1, 1.5f) < 10.0f) {
        gSaveContext.weekEventReg[59] &= 0xFE;
        if ((gSaveContext.weekEventReg[61] & 4) == 0) {
            func_80BD92D0(this, globalCtx);
            gSaveContext.weekEventReg[61] |= 4;
        }
        func_80BD8700(this);
    }
}

void func_80BD8B50(EnPamera *this) {
    this->actionFunc = func_80BD8B70;
    this->actor.gravity = -2.0f;
}

void func_80BD8B70(EnPamera *this, GlobalContext *globalCtx) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    s16 sp32;
    PosRot *sp2C;
    PosRot *temp_a0;
    f32 *temp_a1;
    s32 temp_v0;

    temp_a0 = &this->actor.world;
    temp_a1 = &sp34;
    sp34 = (f32) this->pathPoints[this->pathIndex].x;
    sp38 = (f32) this->pathPoints[this->pathIndex].y;
    sp2C = temp_a0;
    sp3C = (f32) this->pathPoints[this->pathIndex].z;
    sp32 = Math_Vec3f_Yaw((Vec3f *) temp_a0, (Vec3f *) temp_a1);
    if (Math_Vec3f_StepToXZ((Vec3f *) temp_a0, (Vec3f *) &sp34, this->actor.speedXZ) > 10.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, sp32, 0xA, 0x3000, (s16) 0x100);
        this->actor.world.rot.y = this->actor.shape.rot.y;
    } else {
        temp_v0 = this->pathIndex;
        if (temp_v0 < (this->pathPointsCount - 1)) {
            this->pathIndex = temp_v0 + 1;
        } else {
            func_80BD8CCC(this);
        }
    }
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
    this->actor.world.pos.y += this->actor.gravity;
}

void func_80BD8CCC(EnPamera *this) {
    EnPamera *temp_a3;

    temp_a3 = this;
    temp_a3->hideInisdeTimer = 0;
    temp_a3->actor.speedXZ = 0.0f;
    this = temp_a3;
    func_800BDC5C(&temp_a3->skelAnime, (ActorAnimationEntry []) D_80BDA4B8, 3);
    this->actionFunc = func_80BD8D1C;
}

void func_80BD8D1C(EnPamera *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;
    s16 temp_v0;

    temp_v0 = this->hideInisdeTimer;
    temp_a0 = &this->skelAnime;
    this->hideInisdeTimer = temp_v0 + 1;
    if ((((s32) temp_v0 < 0xC9) ^ 1) != 0) {
        this->actor.speedXZ = 1.5f;
        this = this;
        func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80BDA4B8, 1);
        func_80BD8D80(this);
    }
}

void func_80BD8D80(EnPamera *this) {
    s32 temp_v0;

    temp_v0 = this->pathIndex;
    if (temp_v0 > 0) {
        this->pathIndex = temp_v0 - 1;
    }
    this->actor.gravity = -2.0f;
    this->actionFunc = func_80BD8DB0;
}

void func_80BD8DB0(EnPamera *this, GlobalContext *globalCtx) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    s16 sp32;
    PosRot *sp2C;
    PosRot *temp_a0;
    f32 *temp_a1;
    s32 temp_v0;

    temp_a0 = &this->actor.world;
    temp_a1 = &sp34;
    sp34 = (f32) this->pathPoints[this->pathIndex].x;
    sp38 = (f32) this->pathPoints[this->pathIndex].y;
    sp2C = temp_a0;
    sp3C = (f32) this->pathPoints[this->pathIndex].z;
    sp32 = Math_Vec3f_Yaw((Vec3f *) temp_a0, (Vec3f *) temp_a1);
    if (Math_Vec3f_StepToXZ((Vec3f *) temp_a0, (Vec3f *) &sp34, this->actor.speedXZ) > 10.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, sp32, 0xA, 0x3000, (s16) 0x100);
        this->actor.world.rot.y = this->actor.shape.rot.y;
    } else {
        temp_v0 = this->pathIndex;
        if (temp_v0 > 0) {
            this->pathIndex = temp_v0 - 1;
        } else {
            func_80BD9338(this, globalCtx);
            func_80BD8A38(this);
        }
    }
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
    this->actor.world.pos.y += this->actor.gravity;
}

void EnPamera_LookDownWell(EnPamera *this) {
    func_80BD93CC(this, 1, 1);
    func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) D_80BDA4B8, 4);
    this->actionFunc = func_80BD8F60;
}

void func_80BD8F60(EnPamera *this, GlobalContext *globalCtx) {
    SkelAnime *sp2C;
    SkelAnime *temp_a0;

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x3000, (s16) 0x1000);
    temp_a0 = &this->skelAnime;
    sp2C = temp_a0;
    if (func_801378B8(temp_a0, this->skelAnime.animFrameCount) != 0) {
        func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80BDA4B8, 2);
        this->actor.speedXZ = 3.0f;
        func_80BD93CC(this, 0, 0);
        func_80BD8D80(this);
    }
}

void func_80BD8FF0(EnPamera *this) {
    ? sp2C;
    PosRot *sp24;
    PosRot *temp_a0;
    s16 temp_v0_2;
    s32 temp_v0;

    temp_v0 = this->pathPointsCount;
    temp_a0 = &this->actor.world;
    this->pathIndex = temp_v0 - 1;
    sp24 = temp_a0;
    Math_Vec3s_ToVec3f((Vec3f *) temp_a0, &this->pathPoints[temp_v0] - 6);
    Math_Vec3s_ToVec3f((Vec3f *) &sp2C, &this->pathPoints[this->pathPointsCount] - 0xC);
    temp_v0_2 = Math_Vec3f_Yaw((Vec3f *) &sp2C, (Vec3f *) sp24);
    this->actor.shape.rot.y = temp_v0_2;
    this->actor.world.rot.y = temp_v0_2;
    func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) D_80BDA4B8, 3);
    this->actionFunc = func_80BD909C;
}

void func_80BD909C(EnPamera *this, GlobalContext *globalCtx) {

}

/*
Failed to decompile function func_80BD90AC:

Label L80BD9128 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

s32 func_80BD9234(EnPamera *this, GlobalContext *globalCtx) {
    Actor *temp_s0;
    Actor *temp_s0_2;
    Actor *phi_s0;

    temp_s0 = globalCtx->actorCtx.actorList[3].first;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
loop_2:
        if ((phi_s0->id == 9) && (Math_Vec3f_DistXZ((Vec3f *) &this->actor.world, phi_s0 + 0x24) < 500.0f) && (phi_s0->unk_1F0 == 0)) {
            return 1;
        }
        temp_s0_2 = phi_s0->next;
        phi_s0 = temp_s0_2;
        if (temp_s0_2 == 0) {
            goto block_7;
        }
        goto loop_2;
    }
block_7:
    return 0;
}

void func_80BD92D0(EnPamera *this, GlobalContext *globalCtx) {
    Path *sp1C;
    Path *temp_v1;
    Vec3s *temp_a0;
    s32 temp_v0;

    temp_v0 = this->pathId;
    temp_v1 = &globalCtx->setupPathList[temp_v0];
    if (temp_v0 >= 0) {
        temp_a0 = temp_v1->points;
        this = this;
        sp1C = temp_v1;
        this->pathPoints = Lib_SegmentedToVirtual((void *) temp_a0);
        this->pathIndex = 0;
        this->pathPointsCount = (s32) temp_v1->count;
        this->pathId = (s32) temp_v1->unk1;
    }
}

void func_80BD9338(EnPamera *this, GlobalContext *globalCtx) {
    Actor *temp_v0;

    func_80BD84F0(this, globalCtx);
    temp_v0 = this->actor.child;
    if ((temp_v0 != 0) && (temp_v0->id == 5)) {
        temp_v0->unk_1A7 = -0x32;
    }
}

void func_80BD9384(EnPamera *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk_316;
    if ((s32) temp_v0 < 0x28) {
        this->unk_316 = temp_v0 + 1;
        return;
    }
    this->unk_312 += 1;
    if ((s32) this->unk_312 >= 3) {
        this->unk_312 = 0;
        this->unk_316 = 0;
    }
}

void func_80BD93CC(EnPamera *this, s16 arg1, s16 arg2) {
    this->unk_310 = arg1;
    this->unk_314 = arg2;
}

void func_80BD93F4(EnPamera *this, GlobalContext *globalCtx) {
    SkelAnime *sp1C;
    AnimationHeader *temp_v0_2;
    SkelAnime *temp_a0;
    SkelAnime *temp_a0_2;
    void (*temp_v0)(EnPamera *, GlobalContext *);

    temp_v0 = this->actionFunc;
    if ((func_80BD8B70 == temp_v0) || (func_80BD8DB0 == temp_v0) || (func_80BD8964 == temp_v0) || (func_80BD8A7C == temp_v0)) {
        temp_v0_2 = this->skelAnime.animCurrentSeg;
        if (&D_06008AE0 == temp_v0_2) {
            temp_a0 = &this->skelAnime;
            sp1C = temp_a0;
            this = this;
            if ((func_801378B8(temp_a0, 9.0f) != 0) || (func_801378B8(temp_a0, 18.0f) != 0)) {
                Audio_PlayActorSound2((Actor *) this, 0x298BU);
                return;
            }
            /* Duplicate return node #12. Try simplifying control flow for better match */
            return;
        }
        temp_a0_2 = &this->skelAnime;
        if ((&D_06008E38 == temp_v0_2) && ((sp1C = temp_a0_2, this = this, (func_801378B8(temp_a0_2, 2.0f) != 0)) || (func_801378B8(temp_a0_2, 6.0f) != 0))) {
            Audio_PlayActorSound2((Actor *) this, 0x298BU);
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
    }
}

void func_80BD94E0(EnPamera *this, GlobalContext *globalCtx) {
    void (*temp_v0)(EnPamera *, GlobalContext *);

    temp_v0 = this->actionFunc;
    if ((func_80BD8B70 != temp_v0) && (func_80BD8964 != temp_v0) && (func_80BD909C != temp_v0) && (func_80BD8D1C != temp_v0) && ((func_80BD8DB0 != temp_v0) || (this->actor.speedXZ == 3.0f))) {
        func_800E9250(globalCtx, (Actor *) this, &this->limb9Rot, &this->limb8Rot, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
        return;
    }
    func_800E8F08(&this->limb9Rot, &this->limb8Rot);
}

void EnPamera_Update(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a2;
    EnPamera *this = (EnPamera *) thisx;

    this->actionFunc(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    func_80BD90AC(this, globalCtx);
    func_80BD9384(this, globalCtx);
    func_80BD94E0(this, globalCtx);
    temp_a2 = &this->collider;
    sp24 = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    func_80BD93F4(this, globalCtx);
}

s32 EnPamera_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 9) {
        arg4->x += arg5->unk_306;
        arg4->z += arg5->unk_304;
    }
    return 0;
}

void EnPamera_PostLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 9) {
        SysMatrix_MultiplyVector3fByState(&D_80BDA5F0, arg4 + 0x3C);
    }
}

void EnPamera_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    EnPamera *this = (EnPamera *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp30 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp30->polyOpa.p;
    sp30->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    temp_a0_2 = *(&D_80BDA604 + (this->unk_312 * 4));
    temp_v0->words.w1 = (temp_a0_2 & 0xFFFFFF) + gSegments[(u32) (temp_a0_2 * 0x10) >> 0x1C] + 0x80000000;
    temp_v0_2 = sp30->polyOpa.p;
    sp30->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    temp_a0_3 = *(&D_80BDA610 + (this->unk_314 * 4));
    temp_v0_2->words.w1 = (temp_a0_3 & 0xFFFFFF) + gSegments[(u32) (temp_a0_3 * 0x10) >> 0x1C] + 0x80000000;
    temp_v0_3 = sp30->polyOpa.p;
    sp30->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060028;
    temp_a0_4 = *(&D_80BDA5FC + (this->unk_310 * 4));
    temp_v0_3->words.w1 = (temp_a0_4 & 0xFFFFFF) + gSegments[(u32) (temp_a0_4 * 0x10) >> 0x1C] + 0x80000000;
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, EnPamera_OverrideLimbDraw, EnPamera_PostLimbDraw, (Actor *) this);
}

void func_80BD9840(EnPamera *this, GlobalContext *globalCtx) {
    u32 temp_t8;

    temp_t8 = this->actor.flags | 0x2000000;
    this->actor.flags = temp_t8;
    this->actor.update = func_80BDA344;
    this->actor.flags = temp_t8 | 0x100000;
    if (((gSaveContext.weekEventReg[75] & 0x20) != 0) || ((gSaveContext.weekEventReg[52] & 0x20) != 0)) {
        func_80BD9E60(this);
        func_80BD9938(this);
    } else {
        this->actor.draw = NULL;
        func_80BD9E60(this);
        func_80BD9904(this);
    }
    if ((gSaveContext.weekEventReg[14] & 4) != 0) {
        func_801A0204(0x27);
        return;
    }
    func_801A0204(0x1F);
}

void func_80BD9904(EnPamera *this) {
    this->actor.flags &= -2;
    this->actionFunc = func_80BD9928;
}

void func_80BD9928(EnPamera *this, GlobalContext *globalCtx) {

}

void func_80BD9938(EnPamera *this) {
    this->actionFunc = func_80BD994C;
}

void func_80BD994C(EnPamera *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a0;
    GlobalContext *temp_a1;
    s16 temp_v0;
    u16 phi_t6;

    temp_a1 = globalCtx;
    globalCtx = globalCtx;
    if (func_800B84D0((Actor *) this, temp_a1) != 0) {
        temp_a0 = globalCtx;
        globalCtx = globalCtx;
        if (Player_GetMask(temp_a0) == 0xC) {
            globalCtx = globalCtx;
            func_80BD93CC(this, 0, 1);
            func_801518B0(globalCtx, 0x15A8U, (Actor *) this);
            phi_t6 = 0x15A8U;
            goto block_10;
        }
        if ((gSaveContext.playerForm != 4) || (((gSaveContext.weekEventReg[52] & 0x20) != 0) && ((gSaveContext.weekEventReg[75] & 0x20) == 0))) {
            globalCtx = globalCtx;
            func_80BD93CC(this, 1, 0);
            func_801518B0(globalCtx, 0x158EU, (Actor *) this);
            this->unk_324 = 0x158E;
        } else {
            temp_v0 = this->unk_322;
            if ((temp_v0 & 1) == 0) {
                this->unk_322 = temp_v0 | 1;
                func_801518B0(globalCtx, 0x1587U, (Actor *) this);
                this->unk_324 = 0x1587;
            } else {
                func_801518B0(globalCtx, 0x158CU, (Actor *) this);
                phi_t6 = 0x158CU;
block_10:
                this->unk_324 = phi_t6;
            }
        }
        func_80BD9A9C(this);
        return;
    }
    func_800B8614((Actor *) this, globalCtx, 100.0f);
}

void func_80BD9A9C(EnPamera *this) {
    this->actionFunc = EnPamera_HandleDialogue;
}

void EnPamera_HandleDialogue(EnPamera *this, GlobalContext *globalCtx) {
    u32 temp_v0;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    switch (temp_v0) {
    case 5:
        func_80BD9B4C(this, globalCtx);
        break;
    case 6:
        if (func_80147624(globalCtx) != 0) {
            func_80BD9938(this);
        }
        break;
    }
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x71C, (s16) 0xB6);
    this->actor.shape.rot.y = this->actor.world.rot.y;
}

void func_80BD9B4C(EnPamera *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    u16 temp_v0;

    temp_a0 = globalCtx;
    globalCtx = globalCtx;
    if (func_80147624(temp_a0) != 0) {
        temp_v0 = this->unk_324;
        if ((s32) temp_v0 >= 0x158F) {
            if (temp_v0 != 0x15A8) {
                return;
            }
            goto block_11;
        }
        switch (temp_v0) {
        case 5511:
            func_801518B0(globalCtx, 0x1588U, (Actor *) this);
            this->unk_324 = 0x1588;
            return;
        case 5512:
            func_801518B0(globalCtx, 0x1589U, (Actor *) this);
            this->unk_324 = 0x1589;
            return;
        case 5513:
            func_801518B0(globalCtx, 0x158AU, (Actor *) this);
            this->unk_324 = 0x158A;
            return;
        case 5514:
            func_801518B0(globalCtx, 0x158BU, (Actor *) this);
            this->unk_324 = 0x158B;
            return;
        case 5516:
            func_801518B0(globalCtx, 0x158DU, (Actor *) this);
            this->unk_324 = 0x158D;
            return;
        case 5518:
block_11:
            temp_a0_2 = globalCtx;
            globalCtx = globalCtx;
            func_801477B4(temp_a0_2);
            func_80BD9C70(this, globalCtx);
            /* Duplicate return node #12. Try simplifying control flow for better match */
            return;
        }
    } else {
    default:
    }
}

void func_80BD9C70(EnPamera *this, GlobalContext *globalCtx) {
    globalCtx->nextEntranceIndex = 0x2020;
    globalCtx->sceneLoadFlag = 0x14;
    globalCtx->unk_1887F = 0x46;
    gSaveContext.nextTransition = 2;
}

s32 func_80BD9CB8(EnPamera *this, GlobalContext *globalCtx) {
    u32 sp24;
    s32 temp_t7;
    u16 temp_a0;
    u16 temp_t1;
    u32 temp_v0;
    void (*temp_v0_2)(EnPamera *, GlobalContext *);
    void *temp_v1;

    if (func_800EE29C(globalCtx, 0x1E5U) != 0) {
        temp_v0 = func_800EE200(globalCtx, 0x1E5U);
        temp_t7 = temp_v0 * 4;
        sp24 = temp_v0;
        temp_v1 = globalCtx + temp_t7;
        temp_a0 = *temp_v1->unk_1F4C;
        if (this->unk_326 != temp_a0) {
            this->unk_326 = temp_a0;
            temp_t1 = *temp_v1->unk_1F4C;
            switch (temp_t1) {
            case 1:
                func_80BD9E88(this);
                break;
            case 2:
                if (this->actor.draw == 0) {
                    this->actor.draw = EnPamera_Draw;
                    this->actor.flags |= 1;
                }
                func_80BD9EE0(this);
                break;
            case 3:
                func_80BDA038(this);
                break;
            case 4:
                func_80BDA0A0(this);
                break;
            case 5:
                func_80BDA170(this);
                break;
            case 6:
                func_80BDA288(this);
                break;
            }
        }
        func_800EDF24((Actor *) this, globalCtx, sp24);
        this->setupFunc(this, globalCtx);
        return 1;
    }
    if ((globalCtx->csCtx.state == 0) && ((gSaveContext.weekEventReg[75] & 0x20) != 0)) {
        temp_v0_2 = this->actionFunc;
        if ((func_80BD994C != temp_v0_2) && (EnPamera_HandleDialogue != temp_v0_2)) {
            this->actor.shape.rot.y = this->actor.world.rot.y;
            func_80BD9904(this);
            func_80BD9E60(this);
        }
    }
    this->unk_326 = 0x63;
    return 0;
}

void func_80BD9E60(EnPamera *this) {
    this->unk_31E = 0;
    this->setupFunc = func_80BD9E78;
}

void func_80BD9E78(EnPamera *this, GlobalContext *globalCtx) {

}

void func_80BD9E88(EnPamera *this) {
    SkelAnime *temp_a0;

    temp_a0 = &this->skelAnime;
    this = this;
    func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80BDA4B8, 0);
    this->unk_31E = 0;
    this->setupFunc = func_80BD9ED0;
}

void func_80BD9ED0(EnPamera *this, GlobalContext *globalCtx) {

}

void func_80BD9EE0(EnPamera *this) {
    func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) D_80BDA4B8, 5);
    func_80BD93CC(this, 1, 0);
    this->unk_31E = 1;
    this->setupFunc = func_80BD9F3C;
}

void func_80BD9F3C(EnPamera *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;
    SkelAnime *temp_s0;

    temp_s0 = &this->skelAnime;
    temp_a0 = temp_s0;
    if (this->unk_31E == 1) {
        this = this;
        if ((func_801378B8(temp_a0, 2.0f) != 0) || (func_801378B8(temp_s0, 6.0f) != 0) || (func_801378B8(temp_s0, 10.0f) != 0) || (func_801378B8(temp_s0, 14.0f) != 0) || (func_801378B8(temp_s0, 18.0f) != 0) || (func_801378B8(temp_s0, 22.0f) != 0) || (func_801378B8(temp_s0, 25.0f) != 0)) {
            Audio_PlayActorSound2((Actor *) this, 0x298BU);
        }
        if (func_801378B8(temp_s0, this->skelAnime.animFrameCount) != 0) {
            this->unk_31E = 0;
            func_80BD93CC(this, 0, 0);
            func_800BDC5C(temp_s0, (ActorAnimationEntry []) D_80BDA4B8, 6);
        }
    }
}

void func_80BDA038(EnPamera *this) {
    func_80BD93CC(this, 0, 1);
    func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) D_80BDA4B8, 7);
    this->unk_31E = 0;
    this->setupFunc = func_80BDA090;
}

void func_80BDA090(EnPamera *this, GlobalContext *globalCtx) {

}

void func_80BDA0A0(EnPamera *this) {
    func_80BD93CC(this, 0, 1);
    func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) D_80BDA4B8, 8);
    this->unk_31E = 1;
    this->setupFunc = func_80BDA0FC;
}

void func_80BDA0FC(EnPamera *this, GlobalContext *globalCtx) {
    SkelAnime *sp1C;
    SkelAnime *temp_a0;
    f32 temp_a1;

    temp_a0 = &this->skelAnime;
    if (this->unk_31E == 1) {
        temp_a1 = this->skelAnime.animFrameCount;
        this = this;
        sp1C = temp_a0;
        if (func_801378B8(temp_a0, temp_a1) != 0) {
            this->unk_31E = 0;
            func_80BD93CC(this, 0, 0);
            func_800BDC5C(sp1C, (ActorAnimationEntry []) D_80BDA4B8, 6);
        }
    }
}

void func_80BDA170(EnPamera *this) {
    this->unk_31E = 1;
    func_80BD93CC(this, 0, 1);
    func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) D_80BDA4B8, 9);
    this->setupFunc = func_80BDA1C8;
}

void func_80BDA1C8(EnPamera *this, GlobalContext *globalCtx) {
    SkelAnime *temp_s0;

    temp_s0 = &this->skelAnime;
    if (this->unk_31E == 1) {
        if ((func_801378B8(temp_s0, 2.0f) != 0) || (func_801378B8(temp_s0, 6.0f) != 0) || (func_801378B8(temp_s0, 10.0f) != 0) || (func_801378B8(temp_s0, 14.0f) != 0)) {
            Audio_PlayActorSound2((Actor *) this, 0x298BU);
        }
        if (func_801378B8(temp_s0, this->skelAnime.animFrameCount) != 0) {
            this->unk_31E = 0;
            func_80BD93CC(this, 0, 0);
            func_800BDC5C(temp_s0, (ActorAnimationEntry []) D_80BDA4B8, 0xA);
        }
    }
}

void func_80BDA288(EnPamera *this) {
    this->unk_31E = 1;
    func_80BD93CC(this, 0, 0);
    func_800BDC5C(&this->skelAnime, (ActorAnimationEntry []) D_80BDA4B8, 0xB);
    this->setupFunc = func_80BDA2E0;
}

void func_80BDA2E0(EnPamera *this, GlobalContext *globalCtx) {
    SkelAnime *sp1C;
    SkelAnime *temp_a0;
    f32 temp_a1;

    temp_a0 = &this->skelAnime;
    if (this->unk_31E == 1) {
        temp_a1 = this->skelAnime.animFrameCount;
        this = this;
        sp1C = temp_a0;
        if (func_801378B8(temp_a0, temp_a1) != 0) {
            this->unk_31E = 0;
            func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80BDA4B8, 0xC);
        }
    }
}

void func_80BDA344(Actor *thisx, GlobalContext *globalCtx) {
    Actor *sp24;
    Actor *temp_a2;
    u8 temp_v0;
    u8 temp_v0_2;

    thisx->unk_1D4(thisx, globalCtx);
    SkelAnime_FrameUpdateMatrix(thisx + 0x190);
    func_80BD9384((EnPamera *) thisx, globalCtx);
    if (func_80BD9CB8((EnPamera *) thisx, globalCtx) != 0) {
        temp_v0 = gSaveContext.weekEventReg[59];
        if ((temp_v0 & 1) != 0) {
            gSaveContext.weekEventReg[59] = temp_v0 & 0xFE;
        }
        temp_v0_2 = gSaveContext.weekEventReg[61];
        if ((temp_v0_2 & 4) == 0) {
            gSaveContext.weekEventReg[61] = temp_v0_2 | 4;
        }
        func_800E8F08(thisx + 0x304, thisx + 0x30A);
        return;
    }
    func_80BD94E0((EnPamera *) thisx, globalCtx);
    if (func_80BD994C == thisx->unk_1D4) {
        temp_a2 = thisx + 0x144;
        sp24 = temp_a2;
        Collider_UpdateCylinder(thisx, (ColliderCylinder *) temp_a2);
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    }
    if ((gSaveContext.weekEventReg[14] & 4) != 0) {
        globalCtx->roomCtx.unk_7A += 1;
    }
}
