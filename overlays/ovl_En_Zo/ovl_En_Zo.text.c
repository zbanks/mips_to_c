typedef struct EnZo {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnZo *, GlobalContext *);
    /* 0x148 */ SkelAnime unk_148;                  /* inferred */
    /* 0x18C */ SkelAnime unk_18C;                  /* inferred */
    /* 0x1D0 */ char pad_1D0[0xC];
    /* 0x1DC */ Path *unk_1DC;                      /* inferred */
    /* 0x1E0 */ s16 unk_1E0;                        /* inferred */
    /* 0x1E2 */ char pad_1E2[0x1C];                 /* maybe part of unk_1E0[15]? */
    /* 0x1FE */ Vec3s unk_1FE;                      /* inferred */
    /* 0x204 */ char pad_204[0x72];                 /* maybe part of unk_1FE[20]? */
    /* 0x276 */ Vec3s unk_276;                      /* inferred */
    /* 0x27C */ char pad_27C[0xE8];                 /* maybe part of unk_276[39]? */
    /* 0x364 */ ? unk_364;                          /* inferred */
    /* 0x364 */ char pad_364[0xBA];
    /* 0x41E */ s16 unk_41E;                        /* inferred */
    /* 0x420 */ char pad_420[0x4];                  /* maybe part of unk_41E[3]? */
} EnZo;                                             /* size = 0x424 */

struct _mips2c_stack_EnZo_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnZo_Draw {
    /* 0x00 */ char pad_0[0x7C];
    /* 0x7C */ ? sp7C;                              /* inferred */
    /* 0x7C */ char pad_7C[0x1C];
};                                                  /* size = 0x98 */

struct _mips2c_stack_EnZo_Init {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnZo_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8099E790 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8099E858 {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ u16 sp26;                            /* inferred */
    /* 0x28 */ char pad_28[0x6];                    /* maybe part of sp26[4]? */
    /* 0x2E */ u8 sp2E;                             /* inferred */
    /* 0x2F */ u8 sp2F;                             /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8099E96C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8099E9E0 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Collider *sp18;                      /* inferred */
    /* 0x1C */ CollisionCheckContext *sp1C;         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8099EA60 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8099EBD8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8099EC50 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0xE];
    /* 0x36 */ s16 sp36;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8099ED4C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8099EE24 {};              /* size 0x0 */

struct _mips2c_stack_func_8099EFF4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8099F15C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s8 *sp20;                            /* inferred */
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0xC];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x10];
};                                                  /* size = 0x40 */

? func_8013CD64(? *, PosRot *, Gfx *, f32, s32, ? *, ? *); /* extern */
? func_8013CF04(EnZo *, GlobalContext *, Gfx *);    /* extern */
s32 func_8099E790(SkelAnime *arg0, s16 arg1, EnZo *); /* static */
? func_8099E858(Actor *arg0, GlobalContext *arg1);  /* static */
void func_8099E96C(EnZo *arg0, s32 arg1);           /* static */
void func_8099E9E0(EnZo *arg0, GlobalContext *arg1); /* static */
void func_8099EA60(EnZo *arg0, GlobalContext *arg1); /* static */
s32 func_8099EFF4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5, Gfx **gfx); /* static */
void func_8099F15C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **gfx); /* static */
extern FlexSkeletonHeader D_0600D208;
static ColliderCylinderInit D_8099F4B0 = {
    {0, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x12, 0x40, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_8099F4DC = {0, 0, 0, 0, 0xFF};
static DamageTable D_8099F4E8 = {
    {
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
};
static ? D_8099F508;                                /* unable to generate initializer */
static ? D_8099F578;                                /* unable to generate initializer */
static ? D_8099F57C;                                /* unable to generate initializer */
static ? D_8099F57F;                                /* unable to generate initializer */
static ? D_8099F587;                                /* unable to generate initializer */
static ? D_8099F58C;                                /* unable to generate initializer */
static ? D_8099F59C;                                /* unable to generate initializer */
static s16 D_8099F5AC[16] = {0xFA0, 4, 1, 3, 0x1770, 4, 1, 6, 0xFA0, 4, 1, 3, 0x1770, 4, 1, 6};
static ? D_8099F5CC;                                /* unable to generate initializer */
static ? D_8099F5D8;                                /* unable to generate initializer */
static ? D_8099F5F8;                                /* unable to generate initializer */
static ? D_8099F600;                                /* unable to generate initializer */

s32 func_8099E790(SkelAnime *arg0, s16 arg1) {
    s32 sp30;
    void *sp2C;
    s16 temp_t0;
    s32 temp_t6;
    void *temp_v1;
    s16 phi_t0;
    s32 phi_t1;

    phi_t1 = 0;
    if ((s32) arg1 >= 0) {
        temp_t6 = arg1 * 0x10;
        if ((s32) arg1 < 7) {
            temp_v1 = temp_t6 + &D_8099F508;
            temp_t0 = temp_v1->unk_A;
            phi_t0 = temp_t0;
            if ((s32) temp_t0 < 0) {
                sp2C = temp_v1;
                sp30 = 1;
                phi_t0 = SkelAnime_GetFrameCount(temp_v1->unk_0);
            }
            sp30 = 1;
            SkelAnime_ChangeAnim(arg0, (temp_t6 + &D_8099F508)->unk_0, (temp_t6 + &D_8099F508)->unk_4, (f32) (temp_t6 + &D_8099F508)->unk_8, (f32) phi_t0, (u8) (s32) (temp_t6 + &D_8099F508)->unk_C, (f32) (temp_t6 + &D_8099F508)->unk_E);
            phi_t1 = 1;
        }
    }
    return phi_t1;
}

? func_8099E858(Actor *arg0, GlobalContext *arg1) {
    u8 sp2F;
    u8 sp2E;
    u16 sp26;
    u8 temp_v0;
    u8 temp_v0_2;
    s32 phi_v0;

    sp2F = arg0->unk_1FC;
    sp2E = arg0->unk_1FD;
    if ((arg0->bgCheckFlags & 0x20) != 0) {
        phi_v0 = 5;
        if (arg0->yDistToWater < 20.0f) {
            phi_v0 = 4;
        }
        sp26 = phi_v0 + 0x800;
    } else {
        sp26 = func_800C9BDC(arg1 + 0x830, arg0->floorPoly, (s32) arg0->floorBgId) + 0x800;
    }
    temp_v0 = func_8013DB90(arg1, arg0 + 0x1E4, -6.0f);
    arg0->unk_1FC = temp_v0;
    if (((temp_v0 & 0xFF) != 0) && (sp2F == 0) && ((temp_v0 & 0xFF) != 0)) {
        Audio_PlayActorSound2(arg0, sp26);
    }
    temp_v0_2 = func_8013DB90(arg1, arg0 + 0x1F0, -6.0f);
    arg0->unk_1FD = temp_v0_2;
    if (((temp_v0_2 & 0xFF) != 0) && (sp2E == 0) && ((temp_v0_2 & 0xFF) != 0)) {
        Audio_PlayActorSound2(arg0, sp26);
    }
    return 0;
}

void func_8099E96C(EnZo *arg0, s32 arg1) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk_420;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_420 = temp_v0 - 1;
        phi_v1 = arg0->unk_420;
    }
    if (phi_v1 == 0) {
        arg0->unk_41E += 1;
        if ((s32) arg0->unk_41E >= arg1) {
            arg0->unk_41E = 0;
            arg0 = arg0;
            arg0->unk_420 = Rand_S16Offset(0x1E, 0x1E);
        }
    }
}

void func_8099E9E0(EnZo *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp1C;
    Collider *sp18;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;

    temp_a2 = arg0 + 0x18C;
    arg0->unk_1D2 = (s16) (s32) arg0->actor.world.pos.x;
    arg0->unk_1D4 = (s16) (s32) arg0->actor.world.pos.y;
    arg0->unk_1D6 = (s16) (s32) arg0->actor.world.pos.z;
    sp18 = temp_a2;
    temp_a1 = arg1 + 0x18884;
    sp1C = temp_a1;
    CollisionCheck_SetAC(arg1, temp_a1, temp_a2);
    CollisionCheck_SetOC(arg1, temp_a1, temp_a2);
}

void func_8099EA60(EnZo *arg0, GlobalContext *arg1) {
    void *sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    sp3C = temp_v1;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    if (func_8013D5E8(arg0->actor.shape.rot.y, 0x2710, arg0->actor.yawTowardsPlayer) != 0) {
        sp30 = temp_v1->world.pos.x;
        sp34 = temp_v1->unk_C44 + 3.0f;
        sp38 = temp_v1->world.pos.z;
        func_8013D2E0((Vec3f *) &sp30, arg0 + 0x3C, arg0 + 0xBC, arg0 + 0x2EE, arg0 + 0x2F4, arg0 + 0x2FA, D_8099F5AC);
    } else {
        Math_SmoothStepToS(arg0 + 0x2EE, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2F0, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2F4, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2F6, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2FA, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2FC, 0, 4, 0x3E8, (s16) 1);
    }
    func_8099E96C(arg0, 3);
    func_8013D9C8(arg1, arg0 + 0x312, arg0 + 0x33A, 0x14);
}

void func_8099EBD8(EnZo *this, GlobalContext *globalCtx) {
    EnZo *temp_a2;
    SkelAnime *temp_a0;
    s32 temp_v0;
    s32 phi_v0;
    EnZo *phi_a2;

    temp_a2 = this;
    temp_a0 = &temp_a2->unk_148;
    temp_v0 = (s32) (temp_a2->actor.params & 0x7E00) >> 9;
    phi_v0 = temp_v0;
    phi_a2 = temp_a2;
    if (temp_v0 != 0x3F) {
        this = temp_a2;
        func_8099E790(temp_a0, 6, temp_a2);
        phi_v0 = (s32) (this->actor.params & 0x7E00) >> 9;
        phi_a2 = this;
    }
    if (phi_v0 != 0x3F) {
        phi_a2->actionFunc = func_8099EC50;
        return;
    }
    phi_a2->actionFunc = func_8099EE24;
}

void func_8099EC50(EnZo *this, GlobalContext *globalCtx) {
    s16 sp36;
    ? sp28;

    Math_SmoothStepToF(&this->actor.speedXZ, 1.0f, 0.4f, 1000.0f, 0.0f);
    sp36 = (s16) (s32) (this->actor.speedXZ * 400.0f);
    if ((func_8013D68C(this->unk_1DC, this->unk_1E0, (void *) &sp28) != 0) && (func_8013D768((Actor *) this, (void *) &sp28, sp36) != 0)) {
        this->unk_1E0 += 1;
        if ((s32) this->unk_1E0 >= (s32) this->unk_1DC->count) {
            this->unk_1E0 = 0;
        }
    }
    if (this->actor.yDistToWater > 60.0f) {
        func_8099E790(&this->unk_148, 1);
        this->actionFunc = func_8099ED4C;
        this->actor.gravity = 0.0f;
        this->actor.speedXZ = 0.0f;
    }
}

void func_8099ED4C(EnZo *this, GlobalContext *globalCtx) {
    GameInfo *temp_v0;
    f32 phi_f0;

    temp_v0 = gGameInfo;
    if (this->actor.yDistToWater < ((f32) temp_v0->data[1536] + 50.0f)) {
        phi_f0 = -1.0f;
    } else {
        phi_f0 = 1.0f;
    }
    Math_ApproachF(&this->actor.velocity.y, phi_f0, ((f32) temp_v0->data[1537] + 18.0f) * 0.01f, ((f32) temp_v0->data[1538] + 12.0f) * 0.01f);
}

void func_8099EE24(EnZo *this, GlobalContext *globalCtx) {

}

void EnZo_Init(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a1;
    SkelAnime *temp_a1_2;
    EnZo *this = (EnZo *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    temp_a1 = &this->unk_148;
    sp34 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_0600D208, NULL, &this->unk_1FE, &this->unk_276, 0x14);
    func_8099E790(sp34, 0);
    temp_a1_2 = &this->unk_18C;
    sp34 = temp_a1_2;
    Collider_InitCylinder(globalCtx, (ColliderCylinder *) temp_a1_2);
    Collider_SetCylinder(globalCtx, (ColliderCylinder *) temp_a1_2, (Actor *) this, &D_8099F4B0);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_8099F4E8, &D_8099F4DC);
    this->unk_1DC = func_8013D648(globalCtx, (s16) ((s32) (this->actor.params & 0x7E00) >> 9), 0x3F);
    Actor_SetScale((Actor *) this, 0.01f);
    this->actionFunc = func_8099EBD8;
    this->actor.gravity = -4.0f;
}

void EnZo_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnZo *this = (EnZo *) thisx;
    Collider_DestroyCylinder(globalCtx, (ColliderCylinder *) &this->unk_18C);
}

void EnZo_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnZo *this = (EnZo *) thisx;
    this->actionFunc(this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
    func_8099EA60(this, globalCtx);
    func_8099E858((Actor *) this, globalCtx);
    func_8099E9E0(this, globalCtx);
}

s32 func_8099EFF4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    void *sp24;
    void *temp_v1;

    if (arg1 == 0xF) {
        SysMatrix_InsertTranslation(1500.0f, 0.0f, 0.0f, 1);
        SysMatrix_InsertXRotation_s(arg5->unk_2F6, 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) arg5->unk_2F4 * -1), 1);
        SysMatrix_InsertTranslation(-1500.0f, 0.0f, 0.0f, 1);
    }
    if (arg1 == 8) {
        SysMatrix_InsertXRotation_s((s16) ((s32) arg5->unk_2FC * -1), 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) arg5->unk_2FA * -1), 1);
    }
    if ((arg1 == 8) || (arg1 == 9) || (arg1 == 0xC)) {
        temp_v1 = arg5 + (arg1 * 2);
        sp24 = temp_v1;
        arg4->y += (s32) (Math_SinS(temp_v1->unk_312) * 200.0f);
        arg4->z += (s32) (Math_CosS(temp_v1->unk_33A) * 200.0f);
    }
    return 0;
}

void func_8099F15C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? sp30;
    ? sp24;
    s8 *sp20;
    s8 *temp_v1;
    s8 temp_v0;

    sp30.unk_0 = (s32) D_8099F5CC.unk_0;
    sp30.unk_4 = (s32) D_8099F5CC.unk_4;
    sp30.unk_8 = (s32) D_8099F5CC.unk_8;
    sp24.unk_0 = (s32) D_8099F5D8.unk_0;
    temp_v1 = arg1 + &D_8099F578;
    sp24.unk_4 = (s32) D_8099F5D8.unk_4;
    sp24.unk_8 = (s32) D_8099F5D8.unk_8;
    temp_v0 = *temp_v1;
    if ((s32) temp_v0 >= 0) {
        sp20 = temp_v1;
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp24, arg4 + (temp_v0 * 0xC) + 0x364);
    }
    if ((arg1 + &D_8099F578) == &D_8099F587) {
        sp20 = arg1 + &D_8099F578;
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp30, arg4 + 0x3C);
    }
    if ((arg1 + &D_8099F578) == &D_8099F57C) {
        sp20 = arg1 + &D_8099F578;
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp24, arg4 + 0x1E4);
    }
    if ((arg1 + &D_8099F578) == &D_8099F57F) {
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp24, arg4 + 0x1F0);
    }
}

void EnZo_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ? sp7C;
    Gfx *temp_s7;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_a0_2;
    GraphicsContext *temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    Gfx *phi_v0;
    s32 phi_s0;
    s32 phi_s0_2;
    EnZo *this = (EnZo *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s7 = temp_a0->polyOpa.d - 0x1000;
    temp_a0->polyOpa.d = temp_s7;
    sp7C.unk_0 = (s32) D_8099F600.unk_0;
    sp7C.unk_4 = (s32) D_8099F600.unk_4;
    sp7C.unk_8 = (s32) D_8099F600.unk_8;
    temp_a0_2 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0_2;
    func_8012C28C(temp_a0_2);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0xFF;
    temp_v0_2->words.w0 = 0xFB000000;
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0;
    temp_v0_3->words.w0 = 0xE7000000;
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDB060020;
    temp_v0_4->words.w1 = Lib_SegmentedToVirtual(*(&sp7C + (this->unk_41E * 4)));
    temp_v0_5 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xDB060030;
    temp_v0_5->words.w1 = (u32) &D_8099F5F8;
    temp_s0->polyOpa.p = SkelAnime_DrawSV2(globalCtx, this->unk_148.skeleton, this->unk_148.limbDrawTbl, (s32) this->unk_148.dListCount, func_8099EFF4, func_8099F15C, (Actor *) this, temp_s0->polyOpa.p);
    SysMatrix_InsertXRotation_s(0, 0);
    phi_v0 = temp_s7;
    phi_s0 = 0;
    phi_s0_2 = 0;
    do {
        temp_s0_2 = phi_s0 + 1;
        phi_v0->texture.cmd = 0;
        phi_v0 += 1;
        phi_s0 = temp_s0_2;
    } while (temp_s0_2 < 0x1000);
    do {
        func_8013CD64(&this->unk_364, &this->actor.world, temp_s7, (f32) phi_s0_2 / 5.0f, 0xF, &D_8099F59C, &D_8099F58C);
        temp_s0_3 = phi_s0_2 + 1;
        phi_s0_2 = temp_s0_3;
    } while (temp_s0_3 != 5);
    func_8013CF04(this, globalCtx, temp_s7);
}
