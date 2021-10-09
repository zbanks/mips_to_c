typedef struct EnSyatekiWf {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x188 */ Vec3s unk188;                       /* inferred */
    /* 0x18E */ char pad18E[0x7E];                  /* maybe part of unk188[22]? */
    /* 0x20C */ Vec3s unk20C;                       /* inferred */
    /* 0x212 */ char pad212[0x82];                  /* maybe part of unk20C[22]? */
    /* 0x294 */ void (*actionFunc)(EnSyatekiWf *, GlobalContext *);
    /* 0x298 */ s16 unk298;                         /* inferred */
    /* 0x29A */ s16 unk29A;                         /* inferred */
    /* 0x29C */ s16 unk29C;                         /* inferred */
    /* 0x29E */ char pad29E[0x2];
    /* 0x2A0 */ void *unk2A0;                       /* inferred */
    /* 0x2A4 */ s16 unk2A4;                         /* inferred */
    /* 0x2A6 */ s16 unk2A6;                         /* inferred */
    /* 0x2A8 */ s16 unk2A8;                         /* inferred */
    /* 0x2AA */ char pad2AA[0x2];
    /* 0x2AC */ f32 unk2AC;                         /* inferred */
    /* 0x2B0 */ u8 unk2B0;                          /* inferred */
    /* 0x2B1 */ char pad2B1[0x3];                   /* maybe part of unk2B0[4]? */
    /* 0x2B4 */ ColliderCylinder unk2B4;            /* inferred */
    /* 0x300 */ ColliderCylinder unk300;            /* inferred */
    /* 0x34C */ ColliderCylinder unk34C;            /* inferred */
    /* 0x398 */ char pad398[0x34];
} EnSyatekiWf;                                      /* size = 0x3CC */

struct _mips2c_stack_EnSyatekiWf_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnSyatekiWf_Draw {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad34[0x4];
    /* 0x38 */ GraphicsContext *sp38;               /* inferred */
    /* 0x3C */ char pad3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnSyatekiWf_Init {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ ColliderCylinder *sp30;              /* inferred */
    /* 0x34 */ char pad34[0x8];                     /* maybe part of sp30[3]? */
    /* 0x3C */ Path *sp3C;                          /* inferred */
    /* 0x40 */ char pad40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnSyatekiWf_Update {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ CollisionCheckContext *sp30;         /* inferred */
    /* 0x34 */ void (*sp34)(EnSyatekiWf *, GlobalContext *); /* inferred */
    /* 0x38 */ char pad38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A200E0 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A201CC {};              /* size 0x0 */

struct _mips2c_stack_func_80A20284 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2030C {};              /* size 0x0 */

struct _mips2c_stack_func_80A20320 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A20378 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A203DC {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ PosRot *sp3C;                        /* inferred */
    /* 0x40 */ char pad40[0x10];                    /* maybe part of sp3C[5]? */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80A20670 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A206DC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A20710 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2075C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2079C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A20800 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A20858 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A208F8 {
    /* 0x00 */ char pad0[0x5C];
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad5C[0xC];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad74[0x4];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_80A20CF4 {};              /* size 0x0 */

struct _mips2c_stack_func_80A20D10 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

? EffectSsExtra_Spawn(GlobalContext *, PosRot *, ? *, ? *, s32, s32); /* extern */
? func_800BE3D0(EnSyatekiWf *, s16, ActorShape *);  /* extern */
void func_80A200E0(void *arg0);                     /* static */
void func_80A201CC(EnSyatekiWf *arg0);              /* static */
void func_80A2030C(EnSyatekiWf *arg0);              /* static */
void func_80A20378(EnSyatekiWf *arg0);              /* static */
void func_80A20670(EnSyatekiWf *arg0);              /* static */
void func_80A20710(void *arg0);                     /* static */
void func_80A2079C(EnSyatekiWf *arg0);              /* static */
void func_80A20858(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A20CF4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_80A20D10(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern FlexSkeletonHeader D_060095D0;
extern AnimationHeader D_0600A3CC;
static ? D_80A20E50;                                /* unable to generate initializer */
static ColliderCylinderInit D_80A20E74 = {
    {5, 0, 9, 0, 0, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0},
    {0x28, 0x3C, 0, {0, 0, 0}},
};
static ColliderJntSphInit D_80A20EA0;               /* type too large by 4; unable to generate initializer */
static ? *D_80A20EAC = &D_80A20E50;
static ColliderCylinderInit D_80A20EB0 = {
    {5, 0, 9, 0, 0, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0},
    {0xF, 0x14, 0xFFF1, {0, 0, 0}},
};
static ? D_80A20EDC;                                /* unable to generate initializer */
static ? D_80A20EE8;                                /* unable to generate initializer */
static ActorAnimationEntry D_80A20F14[7] = {
    {(AnimationHeader *)0x600A3CC, 2.0f, 0.0f, 0.0f, 0, -1.0f},
    {(AnimationHeader *)0x6005700, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x6005700, 1.0f, 0.0f, 4.0f, 2, 1.0f},
    {(AnimationHeader *)0x6005700, 1.0f, 4.0f, 8.0f, 2, 1.0f},
    {(AnimationHeader *)0x6004A90, 1.0f, 0.0f, 0.0f, 2, -1.0f},
    {(AnimationHeader *)0x6009A50, 1.0f, 0.0f, 0.0f, 2, 8.0f},
    {(AnimationHeader *)0x60053D0, 1.0f, 0.0f, 0.0f, 2, -1.0f},
};
static InitChainEntry D_80A20FBC[2];                /* unable to generate initializer */
static ? D_80A20FC4;                                /* unable to generate initializer */
static Vec3f D_80A20FD0 = {1200.0f, 0.0f, 0.0f};
static ? D_80A20FDC;                                /* unable to generate initializer */

void EnSyatekiWf_Init(EnSyatekiWf *this, GlobalContext *globalCtx) {
    Path *sp3C;
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_a1_2;
    ColliderCylinder *temp_a1_3;
    Path *temp_v1;
    Path *temp_v1_2;
    Path *temp_v1_3;
    s32 temp_v0;
    Path *phi_v1;
    s32 phi_v0;
    Path *phi_v1_2;
    Path *phi_v1_3;
    Path *phi_v1_4;
    EnSyatekiWf *this = (EnSyatekiWf *) thisx;

    temp_v1 = this->actor.parent->unk18C;
    phi_v1 = temp_v1;
    phi_v1_3 = temp_v1;
    if (temp_v1->unk2 != 2) {
        do {
            temp_v1_2 = &globalCtx->setupPathList[phi_v1->unk1];
            phi_v1 = temp_v1_2;
            phi_v1_3 = temp_v1_2;
        } while (temp_v1_2->unk2 != 2);
    }
    phi_v0 = 0;
    phi_v1_2 = phi_v1_3;
    phi_v1_4 = phi_v1_3;
    if (((s32) (this->actor.params & 0xFF00) >> 8) > 0) {
        do {
            temp_v0 = phi_v0 + 1;
            temp_v1_3 = &globalCtx->setupPathList[phi_v1_4->unk1];
            phi_v0 = temp_v0;
            phi_v1_2 = temp_v1_3;
            phi_v1_4 = temp_v1_3;
        } while (temp_v0 < ((s32) (this->actor.params & 0xFF00) >> 8));
    }
    if (phi_v1_2 == 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    sp3C = phi_v1_2;
    this->unk2A0 = Lib_SegmentedToVirtual(phi_v1_2->points);
    this->unk2A4 = 1;
    this->unk2A6 = (s16) phi_v1_2->count;
    Actor_ProcessInitChain((Actor *) this, D_80A20FBC);
    this->unk29C = 0;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 0.0f);
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.colChkInfo.health = 2;
    this->actor.colChkInfo.cylRadius = 0x32;
    this->actor.colChkInfo.cylHeight = 0x64;
    this->unk2B0 = 0;
    temp_a1 = &this->unk2B4;
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    this->unk2AC = 10.0f;
    sp30 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80A20E74);
    temp_a1_2 = &this->unk300;
    sp30 = temp_a1_2;
    Collider_InitCylinder(globalCtx, temp_a1_2);
    Collider_SetCylinder(globalCtx, temp_a1_2, (Actor *) this, &D_80A20EB0);
    temp_a1_3 = &this->unk34C;
    sp30 = temp_a1_3;
    Collider_InitJntSph(globalCtx, (ColliderJntSph *) temp_a1_3);
    Collider_SetJntSph(globalCtx, (ColliderJntSph *) temp_a1_3, (Actor *) this, &D_80A20EA0, (ColliderJntSphElement *) &this->unk34C.info.bumper);
    this->unk368->unk36 = (s16) D_80A20EAC->unk20;
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_060095D0, &D_0600A3CC, &this->unk188, &this->unk20C, 0x16);
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.hintId = 0x4C;
    func_80A201CC(this);
}

void EnSyatekiWf_Destroy(EnSyatekiWf *this, GlobalContext *globalCtx) {
    EnSyatekiWf *this = (EnSyatekiWf *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk2B4);
    Collider_DestroyCylinder(globalCtx, &this->unk300);
}

void func_80A200E0(void *arg0) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    Vec3f *temp_a0;
    f32 *temp_a1;
    s16 temp_t2;
    s16 temp_v0_2;
    void *temp_v0;

    temp_v0 = arg0->unk2A0;
    temp_a0 = arg0 + 0x24;
    temp_a1 = &sp24;
    arg0->unk24 = (f32) temp_v0->unk0;
    arg0->unk28 = (f32) temp_v0->unk2;
    arg0->unk2C = (f32) temp_v0->unk4;
    sp24 = (f32) *(temp_v0 + (arg0->unk2A4 * 6));
    sp28 = (f32) (arg0->unk2A0 + (arg0->unk2A4 * 6))->unk2;
    temp_t2 = (arg0->unk2A0 + (arg0->unk2A4 * 6))->unk4;
    arg0 = arg0;
    sp2C = (f32) temp_t2;
    temp_v0_2 = Math_Vec3f_Yaw(temp_a0, (Vec3f *) temp_a1);
    arg0->unkBE = temp_v0_2;
    arg0->unk32 = temp_v0_2;
}

void func_80A201CC(EnSyatekiWf *arg0) {
    void *temp_v0;
    void *temp_v1;

    temp_v1 = arg0 + 8;
    arg0->actor.speedXZ = 0.0f;
    temp_v0 = arg0->actor.parent;
    arg0->actor.world.pos.x = temp_v1->unk0;
    arg0->actor.world.pos.y = temp_v1->unk4;
    arg0->actor.world.pos.z = temp_v1->unk8;
    arg0->unk30 = (s32) temp_v1->unkC;
    arg0->unk34 = (s32) temp_v1->unk10;
    arg0->actor.prevPos.x = temp_v1->unk0;
    arg0->actor.prevPos.y = temp_v1->unk4;
    arg0->unkBC = (unaligned s32) arg0->unk30;
    arg0->actor.colChkInfo.health = 2;
    arg0->actor.draw = NULL;
    arg0->unk2A4 = 1;
    arg0->unk298 = 0;
    arg0->actor.prevPos.z = temp_v1->unk8;
    arg0->actor.shape.rot.z = (u16) arg0->actor.world.rot.z;
    temp_v0->unk276 = (s16) (temp_v0->unk276 & ~(1 << ((s32) (arg0->actor.params & 0xFF00) >> 8)));
    arg0->actionFunc = func_80A20284;
}

void func_80A20284(EnSyatekiWf *this, GlobalContext *globalCtx) {
    Actor *temp_v0;

    temp_v0 = this->actor.parent;
    if (temp_v0 != 0) {
        if ((temp_v0->unk26A == (void *)1) && (this->unk298 == (void *)1)) {
            func_80A200E0((void *)1);
            func_80A2030C(this);
            return;
        }
        if ((temp_v0->unk276 & (1 << ((s32) (this->actor.params & 0xFF00) >> 8))) != 0) {
            this->unk298 = (s16) (void *)1;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_80A2030C(EnSyatekiWf *arg0) {
    arg0->actionFunc = func_80A20320;
}

void func_80A20320(EnSyatekiWf *this, GlobalContext *globalCtx) {
    Actor *temp_a0;
    s16 temp_v0;

    temp_v0 = this->unk29C;
    if ((s32) temp_v0 >= 0xB) {
        temp_a0 = this->actor.parent;
        this = this;
        Audio_PlayActorSound2(temp_a0, 0x383CU);
        this->unk29C = 0;
        func_80A20378(this);
        return;
    }
    this->unk29C = temp_v0 + 1;
}

void func_80A20378(EnSyatekiWf *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80A20F14, 1);
    arg0->actor.draw = EnSyatekiWf_Draw;
    arg0->actionFunc = func_80A203DC;
    arg0->actor.speedXZ = 10.0f;
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
}

void func_80A203DC(EnSyatekiWf *this, GlobalContext *globalCtx) {
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    PosRot *sp3C;
    PosRot *temp_a0_2;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    u16 temp_a0;
    s32 phi_v1;

    if (this->actor.parent->unk26A != 1) {
        func_80A201CC(this);
    }
    sp54 = (f32) *(this->unk2A0 + (this->unk2A4 * 6));
    sp58 = (f32) (this->unk2A0 + (this->unk2A4 * 6))->unk2;
    sp5C = (f32) (this->unk2A0 + (this->unk2A4 * 6))->unk4;
    temp_a0 = this->actor.bgCheckFlags;
    temp_v0 = (this->actor.wallYaw - this->actor.world.rot.y) + 0x8000;
    if ((temp_a0 & 1) != 0) {
        if ((temp_a0 & 8) != 0) {
            phi_v1 = -(s32) temp_v0;
            if ((s32) temp_v0 >= 0) {
                phi_v1 = (s32) temp_v0;
            }
            if ((phi_v1 < 0x1555) && (this->actor.floorPoly != this->actor.wallPoly)) {
                func_80A20670(this);
                return;
            }
            goto block_9;
        }
block_9:
        temp_a0_2 = &this->actor.world;
        if ((temp_a0 & 4) != 0) {
            this->actor.velocity.y = 2.0f;
        }
        sp3C = temp_a0_2;
        sp50 = Math_Vec3f_DistXZ((Vec3f *) temp_a0_2, (Vec3f *) &sp54);
        this->unk2A8 = Math_Vec3f_Yaw((Vec3f *) temp_a0_2, (Vec3f *) &sp54);
        if (sp50 > 15.0f) {
            Math_SmoothStepToS(&this->actor.world.rot.y, this->unk2A8, 5, 0x3000, (s16) 0x100);
            this->actor.shape.rot.y = this->actor.world.rot.y;
            if (sp50 < 50.0f) {
                temp_f0 = this->actor.speedXZ;
                if (temp_f0 > 3.0f) {
                    this->actor.speedXZ = temp_f0 - 0.5f;
                } else {
                    this->actor.speedXZ = temp_f0;
                }
            }
        } else {
            temp_v0_2 = this->unk2A4;
            if ((s32) temp_v0_2 < (this->unk2A6 - 1)) {
                if (((s32) (this->actor.params & 0xF0) >> 4) == temp_v0_2) {
                    func_80A2079C(this);
                }
                this->unk2A4 += 1;
            } else {
                this->unk298 = 0;
                this->unk2A4 = 1;
                func_80A201CC(this);
            }
        }
        if (func_801378B8(&this->unk144, this->unk144.animFrameCount) != 0) {
            func_800BBDAC(globalCtx, (Actor *) this, (Vec3f *) sp3C, 10.0f, 3, 2.0f, (s16) 0, (s16) 0, (u8) 0);
        }
        /* Duplicate return node #23. Try simplifying control flow for better match */
    }
}

void func_80A20670(Actor *arg0) {
    Actor *temp_a0;

    temp_a0 = arg0;
    arg0 = arg0;
    Audio_PlayActorSound2(temp_a0, 0x386CU);
    arg0->velocity.y = 20.0f;
    arg0->speedXZ = 5.0f;
    func_800BDC5C((SkelAnime *) (arg0 + 0x144), (ActorAnimationEntry []) D_80A20F14, 2);
    arg0->unk294 = func_80A206DC;
}

void func_80A206DC(EnSyatekiWf *this, GlobalContext *globalCtx) {
    if ((this->actor.bgCheckFlags & 2) != 0) {
        func_80A20710();
    }
}

void func_80A20710(void *arg0) {
    void *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk70 = 0.0f;
    arg0 = temp_a3;
    func_800BDC5C(temp_a3 + 0x144, (ActorAnimationEntry []) D_80A20F14, 3);
    arg0->unk294 = func_80A2075C;
}

void func_80A2075C(EnSyatekiWf *this, GlobalContext *globalCtx) {
    EnSyatekiWf *temp_a2;
    f32 temp_a1;

    temp_a2 = this;
    temp_a1 = temp_a2->unk144.animFrameCount;
    this = temp_a2;
    if (func_801378B8(&temp_a2->unk144, temp_a1) != 0) {
        func_80A20378(this);
    }
}

void func_80A2079C(Actor *arg0) {
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk29A = 0x28;
    temp_a3->speedXZ = 0.0f;
    arg0 = temp_a3;
    Audio_PlayActorSound2(temp_a3, 0x383CU);
    func_800BDC5C((SkelAnime *) (arg0 + 0x144), (ActorAnimationEntry []) D_80A20F14, 5);
    arg0->unk294 = func_80A20800;
}

void func_80A20800(EnSyatekiWf *this, GlobalContext *globalCtx) {
    EnSyatekiWf *temp_a2;
    f32 temp_a1;

    temp_a2 = this;
    temp_a1 = temp_a2->unk144.animFrameCount;
    this = temp_a2;
    if (func_801378B8(&temp_a2->unk144, temp_a1) != 0) {
        this->unk29A += -1;
        if (this->unk29A == 0) {
            func_80A20378(this);
        }
    }
}

void func_80A20858(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;

    sp2C = arg0->parent;
    arg0->unk298 = 0;
    arg0->speedXZ = 0.0f;
    EffectSsExtra_Spawn(arg1, arg0 + 0x24, &D_80A20EDC, &D_80A20EE8, 5, 2);
    Audio_PlayActorSound2(arg0, 0x384BU);
    func_800BDC5C((SkelAnime *) (arg0 + 0x144), (ActorAnimationEntry []) D_80A20F14, 6);
    sp2C->unk280 = (s16) (sp2C->unk280 + 0x64);
    arg0->unk294 = func_80A208F8;
}

void func_80A208F8(EnSyatekiWf *this, GlobalContext *globalCtx) {
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    ? sp5C;
    f32 *temp_s3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 phi_s0;

    if (func_801378B8(&this->unk144, this->unk144.animFrameCount) != 0) {
        func_80A201CC(this);
        return;
    }
    sp5C.unk0 = (s32) D_80A20FC4.unk0;
    sp5C.unk4 = (s32) D_80A20FC4.unk4;
    sp5C.unk8 = (s32) D_80A20FC4.unk8;
    temp_s0 = (s32) this->unk144.totalFrames - (s32) this->unk144.animCurrentFrame;
    phi_s0 = temp_s0;
    if (temp_s0 >= 0) {
        temp_s3 = &sp68;
        do {
            sp68 = randPlusMinusPoint5Scaled(60.0f) + this->actor.world.pos.x;
            sp70 = randPlusMinusPoint5Scaled(60.0f) + this->actor.world.pos.z;
            sp6C = randPlusMinusPoint5Scaled(50.0f) + (this->actor.world.pos.y + 20.0f);
            func_800B3030(globalCtx, (Vec3f *) temp_s3, (Vec3f *) &sp5C, (Vec3f *) &sp5C, (s16) 0x64, (s16) 0, 2);
            temp_s0_2 = phi_s0 - 1;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 >= 0);
    }
}

void EnSyatekiWf_Update(EnSyatekiWf *this, GlobalContext *globalCtx) {
    void (*sp34)(EnSyatekiWf *, GlobalContext *);
    CollisionCheckContext *sp30;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    u8 temp_t3;
    u8 temp_v0_2;
    u8 temp_v1;
    void (*temp_v0)(EnSyatekiWf *, GlobalContext *);
    EnSyatekiWf *this = (EnSyatekiWf *) thisx;

    sp34 = func_80A20284;
    if (func_80A20284 != this->actionFunc) {
        SkelAnime_FrameUpdateMatrix(&this->unk144);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 32.0f, 30.0f, 60.0f, 5U);
    this->actionFunc(this, globalCtx);
    if ((this->actor.bgCheckFlags & 3) != 0) {
        func_800BE3D0(this, this->actor.shape.rot.y, &this->actor.shape);
    } else {
        Math_SmoothStepToS((s16 *) &this->actor.shape, 0, 1, 0x3E8, (s16) 0);
        Math_SmoothStepToS(&this->actor.shape.rot.z, 0, 1, 0x3E8, (s16) 0);
    }
    temp_v1 = this->unk2B4.base.acFlags;
    if (((temp_v1 & 2) != 0) || ((this->unk300.base.acFlags & 2) != 0) || ((this->unk34C.base.acFlags & 2) != 0)) {
        temp_t3 = this->actor.colChkInfo.health - 2;
        this->unk2B4.base.acFlags = temp_v1 & 0xFFFD;
        this->unk300.base.acFlags &= 0xFFFD;
        this->unk34C.base.acFlags &= 0xFFFD;
        this->actor.colChkInfo.health = temp_t3;
        if ((temp_t3 & 0xFF) == 0) {
            func_801A3098(0x922U);
            func_80A20858((Actor *) this, globalCtx);
        } else {
            play_sound(0x4807U);
            EffectSsExtra_Spawn(globalCtx, &this->actor.world, &D_80A20EDC, &D_80A20EE8, 3, 0);
        }
    }
    temp_a1 = &this->unk2B4;
    sp2C = temp_a1;
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    temp_v0 = this->actionFunc;
    if ((sp34 != temp_v0) && (func_80A208F8 != temp_v0) && (this->actor.draw != 0)) {
        temp_a1_2 = &globalCtx->colChkCtx;
        sp34 = (void (*)(EnSyatekiWf *, GlobalContext *)) &this->actor.world;
        sp30 = temp_a1_2;
        CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) &this->unk300);
        CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) sp2C);
        CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) &this->unk34C);
        this->actor.focus.pos.x = sp34->unk0;
        this->actor.focus.pos.y = sp34->unk4;
        this->actor.focus.pos.z = sp34->unk8;
        this->actor.focus.pos.y += 25.0f;
    }
    temp_v0_2 = this->unk2B0;
    if (temp_v0_2 == 0) {
        if ((Rand_ZeroOne() < 0.2f) && ((globalCtx->gameplayFrames & 3) == 0) && (this->actor.colorFilterTimer == 0)) {
            this->unk2B0 += 1;
            return;
        }
        /* Duplicate return node #21. Try simplifying control flow for better match */
        return;
    }
    this->unk2B0 = (temp_v0_2 + 1) & 3;
}

s32 func_80A20CF4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    return 0;
}

void func_80A20D10(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    f32 sp18;

    Collider_UpdateSpheres(arg1, arg4 + 0x34C);
    if (arg1 == 6) {
        SysMatrix_MultiplyVector3fByState(&D_80A20FD0, (Vec3f *) &sp18);
        arg4->unk346 = (s16) (s32) sp18;
        arg4->unk348 = (s16) (s32) sp1C;
        arg4->unk34A = (s16) (s32) sp20;
    }
}

void EnSyatekiWf_Draw(EnSyatekiWf *this, GlobalContext *globalCtx) {
    GraphicsContext *sp38;
    Gfx *sp30;
    Gfx *temp_v0;
    GraphicsContext *temp_a0;
    EnSyatekiWf *this = (EnSyatekiWf *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp38 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp38->polyOpa.p;
    sp38->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp30 = temp_v0;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80A20FDC + (this->unk2B0 * 4)));
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80A20CF4, func_80A20D10, (Actor *) this);
}
