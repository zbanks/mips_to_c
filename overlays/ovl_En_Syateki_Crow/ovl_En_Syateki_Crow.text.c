typedef struct EnSyatekiCrow {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char pad144[0x30];
    /* 0x174 */ SkelAnime unk174;                   /* inferred */
    /* 0x1B8 */ void (*actionFunc)(EnSyatekiCrow *, GlobalContext *);
    /* 0x1BC */ s16 unk1BC;                         /* inferred */
    /* 0x1BE */ s16 unk1BE;                         /* inferred */
    /* 0x1C0 */ s16 unk1C0;                         /* inferred */
    /* 0x1C2 */ s16 unk1C2;                         /* inferred */
    /* 0x1C4 */ s16 unk1C4;                         /* inferred */
    /* 0x1C6 */ char pad1C6[0x2];
    /* 0x1C8 */ void *unk1C8;                       /* inferred */
    /* 0x1CC */ s16 unk1CC;                         /* inferred */
    /* 0x1CE */ s16 unk1CE;                         /* inferred */
    /* 0x1D0 */ Vec3s unk1D0;                       /* inferred */
    /* 0x1D6 */ char pad1D6[0x30];                  /* maybe part of unk1D0[9]? */
    /* 0x206 */ Vec3s unk206;                       /* inferred */
    /* 0x20C */ char pad20C[0x30];                  /* maybe part of unk206[9]? */
    /* 0x23C */ ColliderJntSph unk23C;              /* inferred */
    /* 0x25C */ ColliderJntSphElement unk25C;       /* inferred */
} EnSyatekiCrow;                                    /* size = 0x29C */

struct _mips2c_stack_EnSyatekiCrow_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnSyatekiCrow_Draw {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnSyatekiCrow_Init {
    /* 0x00 */ char pad0[0x38];
    /* 0x38 */ ColliderJntSph *sp38;                /* inferred */
    /* 0x3C */ char pad3C[0x14];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EnSyatekiCrow_Update {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809CA5D4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809CA67C {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809CA71C {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ Vec3f *sp1C;                         /* inferred */
    /* 0x20 */ char pad20[0x4];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809CA840 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809CA8E4 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ PosRot *sp28;                        /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809CAAF8 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809CABC0 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ void *sp34;                          /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809CACD0 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809CAE5C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809CAF2C {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ Vec3f *sp1C;                         /* inferred */
    /* 0x20 */ char pad20[0x8];
};                                                  /* size = 0x28 */

? EffectSsExtra_Spawn(GlobalContext *, void *, ? *, ? *, s32, s32); /* extern */
void func_809CA5D4(EnSyatekiCrow *arg0);            /* static */
void func_809CA67C(void *arg0, ? arg1);             /* static */
void func_809CA71C(s16 arg0);                       /* static */
void func_809CA840(void *arg0, ? arg1);             /* static */
void func_809CA8E4(EnSyatekiCrow *arg0, ? arg1);    /* static */
void func_809CAAF8(Actor *arg0);                    /* static */
void func_809CABC0(EnSyatekiCrow *arg0, GlobalContext *arg1); /* static */
void func_809CACD0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_809CAE5C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_809CAF2C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_060000F0;
extern FlexSkeletonHeader D_060010C0;
static Vec3f D_809CB050 = {0.0f, 0.0f, 0.0f};
static ? D_809CB07C;                                /* unable to generate initializer */
static ColliderJntSphInit D_809CB0A0;               /* type too large by 4; unable to generate initializer */
static ? *D_809CB0AC = &D_809CB07C;
static InitChainEntry D_809CB0B0[4];                /* unable to generate initializer */
static ? D_809CB0C0;                                /* unable to generate initializer */
static ? D_809CB0CC;                                /* unable to generate initializer */
static Vec3f D_809CB0D8 = {2500.0f, 0.0f, 0.0f};

void EnSyatekiCrow_Init(EnSyatekiCrow *this, GlobalContext *globalCtx) {
    ColliderJntSph *sp38;
    ColliderJntSph *temp_a1;
    Path *temp_s0;
    Path *temp_s0_2;
    Path *temp_s0_3;
    s32 temp_v0;
    Path *phi_s0;
    s32 phi_v0;
    Path *phi_s0_2;
    Path *phi_s0_3;
    Path *phi_s0_4;
    EnSyatekiCrow *this = (EnSyatekiCrow *) thisx;

    temp_s0 = this->actor.parent->unk18C;
    phi_s0 = temp_s0;
    phi_s0_3 = temp_s0;
    if (temp_s0->unk2 != 0) {
        do {
            temp_s0_2 = &globalCtx->setupPathList[phi_s0->unk1];
            phi_s0 = temp_s0_2;
            phi_s0_3 = temp_s0_2;
        } while (temp_s0_2->unk2 != 0);
    }
    phi_v0 = 0;
    phi_s0_2 = phi_s0_3;
    phi_s0_4 = phi_s0_3;
    if (((s32) (this->actor.params & 0xFF00) >> 8) > 0) {
        do {
            temp_v0 = phi_v0 + 1;
            temp_s0_3 = &globalCtx->setupPathList[phi_s0_4->unk1];
            phi_v0 = temp_v0;
            phi_s0_2 = temp_s0_3;
            phi_s0_4 = temp_s0_3;
        } while (temp_v0 < ((s32) (this->actor.params & 0xFF00) >> 8));
    }
    Actor_ProcessInitChain((Actor *) this, D_809CB0B0);
    SkelAnime_InitSV(globalCtx, &this->unk174, &D_060010C0, &D_060000F0, &this->unk1D0, &this->unk206, 9);
    temp_a1 = &this->unk23C;
    sp38 = temp_a1;
    Collider_InitJntSph(globalCtx, temp_a1);
    Collider_SetJntSph(globalCtx, temp_a1, (Actor *) this, &D_809CB0A0, &this->unk25C);
    this->unk23C.elements->dim.worldSphere.radius = D_809CB0AC->unk20;
    ActorShape_Init(&this->actor.shape, 2000.0f, func_800B3FC0, 20.0f);
    if ((phi_s0_2 == 0) || (((s32) (this->actor.params & 0xFF00) >> 8) >= 0x80)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->unk1C8 = Lib_SegmentedToVirtual(phi_s0_2->points);
    this->unk1CC = 1;
    this->unk1C4 = 0x14;
    this->unk1BC = 0;
    this->unk1CE = (s16) phi_s0_2->count;
    func_809CA5D4(this);
}

void EnSyatekiCrow_Destroy(EnSyatekiCrow *this, GlobalContext *globalCtx) {
    EnSyatekiCrow *this = (EnSyatekiCrow *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk23C);
}

void func_809CA5D4(Actor *arg0) {
    PosRot *temp_v0;

    Actor_SetScale(arg0, 0.03f);
    temp_v0 = &arg0->home;
    arg0->speedXZ = 0.0f;
    arg0->gravity = 0.0f;
    arg0->world.pos.x = temp_v0->pos.x;
    arg0->world.pos.y = temp_v0->pos.y;
    arg0->world.pos.z = temp_v0->pos.z;
    arg0->unk30 = (s32) temp_v0->unkC;
    arg0->unk34 = (s32) temp_v0->unk10;
    arg0->prevPos.x = temp_v0->pos.x;
    arg0->prevPos.y = temp_v0->pos.y;
    arg0->unkBC = (unaligned s32) arg0->unk30;
    arg0->unk1CC = 1;
    arg0->draw = NULL;
    arg0->unk1B8 = func_809CA67C;
    arg0->prevPos.z = temp_v0->pos.z;
    arg0->shape.rot.z = (s16) (u16) arg0->world.rot.z;
}

void func_809CA67C(void *arg0, ? arg1) {
    void *sp1C;
    s16 temp_v0;
    s16 temp_v0_2;
    void *temp_v1;

    temp_v1 = arg0->unk120;
    temp_v0 = temp_v1->unk26A;
    if ((temp_v0 == 1) && (arg0->unk1C2 == 1) && ((temp_v1->unk274 & (1 << ((s32) (arg0->unk1C & 0xFF00) >> 8))) != 0)) {
        sp1C = temp_v1;
        func_809CA71C(1);
    } else if (temp_v0 != 1) {
        arg0->unk1C2 = 1;
    }
    temp_v0_2 = arg0->unk120->unk274;
    if ((temp_v0_2 == 0) && (temp_v0_2 == 0)) {
        arg0->unk1C2 = 1;
    }
}

void func_809CA71C(void *arg0) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    Vec3f *sp1C;
    Vec3f *temp_a0;
    f32 *temp_a1;
    s16 temp_t2;
    s16 temp_v0_2;
    s16 temp_v0_3;
    void *temp_v0;

    temp_v0 = arg0->unk1C8;
    temp_a0 = arg0 + 0x24;
    temp_a1 = &sp24;
    arg0->unk24 = (f32) temp_v0->unk0;
    arg0->unk28 = (f32) temp_v0->unk2;
    arg0->unk2C = (f32) temp_v0->unk4;
    sp24 = (f32) *(temp_v0 + (arg0->unk1CC * 6));
    sp28 = (f32) (arg0->unk1C8 + (arg0->unk1CC * 6))->unk2;
    temp_t2 = (arg0->unk1C8 + (arg0->unk1CC * 6))->unk4;
    arg0 = arg0;
    sp1C = temp_a0;
    sp2C = (f32) temp_t2;
    temp_v0_2 = Math_Vec3f_Yaw(temp_a0, (Vec3f *) temp_a1);
    arg0->unk32 = temp_v0_2;
    arg0->unkBE = temp_v0_2;
    temp_v0_3 = Math_Vec3f_Pitch(temp_a0, (Vec3f *) &sp24);
    arg0->unkBC = temp_v0_3;
    arg0->unk30 = temp_v0_3;
    arg0->unk13C = EnSyatekiCrow_Draw;
    arg0->unk1B8 = func_809CA840;
}

void func_809CA840(void *arg0, ? arg1) {
    Actor *temp_a0;
    s16 temp_v0;

    temp_v0 = arg0->unk1BC;
    if ((((arg0->unk1C & 0xF) * 0x14) + 0x14) < (s32) temp_v0) {
        temp_a0 = arg0->unk120;
        arg0 = arg0;
        Audio_PlayActorSound2(temp_a0, 0x38B6U);
        arg0->unk1BC = 0;
        arg0->unk1B8 = func_809CA8E4;
        arg0->unk74 = -0.5f;
        arg0->unk70 = (f32) ((f32) ((s32) (arg0->unk1C & 0xF0) >> 4) + 6.0f);
        return;
    }
    arg0->unk1BC = (s16) (temp_v0 + 1);
}

void func_809CA8E4(EnSyatekiCrow *arg0, ? arg1) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    PosRot *sp28;
    PosRot *temp_a0;
    f32 *temp_a1;
    s16 temp_v0;
    void *temp_s1;

    temp_s1 = arg0->actor.parent;
    if (temp_s1->unk26A != 1) {
        func_809CA5D4(arg0);
        return;
    }
    temp_a0 = &arg0->actor.world;
    temp_a1 = &sp34;
    sp34 = (f32) *(arg0->unk1C8 + (arg0->unk1CC * 6));
    sp38 = (f32) (arg0->unk1C8 + (arg0->unk1CC * 6))->unk2;
    sp28 = temp_a0;
    sp3C = (f32) (arg0->unk1C8 + (arg0->unk1CC * 6))->unk4;
    sp30 = Math_Vec3f_DistXZ((Vec3f *) temp_a0, (Vec3f *) temp_a1);
    arg0->unk1C0 = Math_Vec3f_Yaw((Vec3f *) temp_a0, (Vec3f *) &sp34);
    arg0->unk1BE = Math_Vec3f_Pitch((Vec3f *) temp_a0, (Vec3f *) &sp34);
    if (sp30 > 100.0f) {
        Math_SmoothStepToS(&arg0->actor.world.rot.y, arg0->unk1C0, 5, 0x3000, (s16) 0x100);
        arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
        Math_SmoothStepToS((s16 *) &arg0->actor.shape, arg0->unk1BE, 5, 0x3000, (s16) 0x100);
        arg0->actor.world.rot.x = (s16) -(s32) arg0->actor.shape.rot.x;
    } else {
        temp_v0 = arg0->unk1CC;
        if ((s32) temp_v0 < (arg0->unk1CE - 1)) {
            arg0->unk1CC = temp_v0 + 1;
        } else {
            arg0->unk1C2 = 0;
            temp_s1->unk274 = (s16) (temp_s1->unk274 & ~(1 << ((s32) (arg0->actor.params & 0xFF00) >> 8)));
            func_809CA5D4(arg0);
        }
    }
    SkelAnime_FrameUpdateMatrix(&arg0->unk174);
    arg0->actor.shape.yOffset = (fabsf(arg0->unk174.animCurrentFrame - 3.0f) * 150.0f) + 1700.0f;
    if (((s32) temp_s1->unk26C % 0x5A) == 0) {
        Audio_PlayActorSound2((Actor *) arg0, 0x38B6U);
    }
}

void func_809CAAF8(Actor *arg0) {
    f32 temp_f6;
    void *temp_v0;

    temp_v0 = arg0->parent;
    temp_v0->unk280 = (s16) (temp_v0->unk280 + 0x3C);
    arg0->unk1C2 = 0;
    temp_f6 = arg0->speedXZ * Math_CosS(arg0->world.rot.x);
    arg0->velocity.y = 0.0f;
    arg0->speedXZ = temp_f6;
    SkelAnime_ChangeAnim(arg0 + 0x174, &D_060000F0, 0.4f, 0.0f, 0.0f, (u8) 1, -3.0f);
    arg0->bgCheckFlags &= 0xFFFE;
    Audio_PlayActorSound2(arg0, 0x38EBU);
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x28);
    arg0->unk1B8 = func_809CABC0;
}

void func_809CABC0(EnSyatekiCrow *arg0, GlobalContext *arg1) {
    void *sp34;
    void *temp_v1;

    temp_v1 = arg0->actor.parent;
    sp34 = temp_v1;
    Math_StepToF(arg0 + 0x70, 0.0f, 0.5f);
    arg0->actor.colorFilterTimer = 0x28;
    if ((arg0->actor.colorFilterParams & 0x4000) != 0) {
        sp34 = temp_v1;
        Math_ScaledStepToS(arg0 + 0xBC, 0x4000, 0x200);
        arg0->actor.shape.rot.z += 0x1780;
    }
    if ((s32) arg0->unk1C4 >= 0x15) {
        sp34 = arg0->actor.parent;
        func_800B3030(arg1, arg0 + 0x24, &D_809CB050, &D_809CB050, (s16) (s32) (arg0->actor.scale.x * 10000.0f), (s16) 0, 0);
        arg0->actor.parent->unk27A = (s16) (arg0->actor.parent->unk27A + 1);
        arg0->actor.parent->unk274 = (s16) (arg0->actor.parent->unk274 & ~(1 << ((s32) (arg0->actor.params & 0xFF00) >> 8)));
        func_809CA5D4(arg0);
    }
    arg0->unk1C4 += 1;
}

void func_809CACD0(Actor *arg0, GlobalContext *arg1) {
    if (func_809CA8E4 == arg0->unk1B8) {
        if ((arg0->unk24D & 2) != 0) {
            arg1 = arg1;
            play_sound(0x4807U);
            arg0->unk1C4 = 0;
            arg0->unk24D = (u8) (arg0->unk24D & 0xFFFD);
            EffectSsExtra_Spawn(arg1, arg0 + 0x24, &D_809CB0C0, &D_809CB0CC, 5, 1);
            func_809CAAF8(arg0);
            return;
        }
        arg0->unk258->unk30 = (s16) (s32) arg0->world.pos.x;
        arg0->unk258->unk32 = (s16) (s32) ((f32) D_809CB0AC->unk1C + arg0->world.pos.y);
        arg0->unk258->unk34 = (s16) (s32) arg0->world.pos.z;
        CollisionCheck_SetAC(arg1, arg1 + 0x18884, arg0 + 0x23C);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void EnSyatekiCrow_Update(EnSyatekiCrow *this, GlobalContext *globalCtx) {
    EnSyatekiCrow *this = (EnSyatekiCrow *) thisx;
    this->actionFunc(this, globalCtx);
    if (func_809CABC0 != this->actionFunc) {
        Actor_SetVelocityAndMoveXYRotation((Actor *) this);
    } else {
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    }
    func_809CACD0((Actor *) this, globalCtx);
}

s32 func_809CAE5C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 7) {
        arg4->y += (s32) (3072.0f * sin_rad(arg5->unk18C * 0.7853982f));
    } else if (arg1 == 8) {
        arg4->y += (s32) (5120.0f * sin_rad((arg5->unk18C + 2.5f) * 0.7853982f));
    }
    return 0;
}

void func_809CAF2C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f *sp1C;
    Vec3f *temp_a1;

    if (arg1 == 2) {
        SysMatrix_MultiplyVector3fByState(&D_809CB0D8, arg4 + 0x144);
        arg4->unk148 = (f32) (arg4->unk148 - 20.0f);
        return;
    }
    if ((arg1 == 4) || (arg1 == 6) || (arg1 == 8)) {
        temp_a1 = arg4 + ((arg1 >> 1) * 0xC) + 0x138;
        sp1C = temp_a1;
        SysMatrix_MultiplyVector3fByState(&D_809CB050, temp_a1);
        temp_a1->y -= 20.0f;
    }
}

void EnSyatekiCrow_Draw(EnSyatekiCrow *this, GlobalContext *globalCtx) {
    EnSyatekiCrow *this = (EnSyatekiCrow *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk174.skeleton, this->unk174.limbDrawTbl, (s32) this->unk174.dListCount, func_809CAE5C, func_809CAF2C, (Actor *) this);
}
