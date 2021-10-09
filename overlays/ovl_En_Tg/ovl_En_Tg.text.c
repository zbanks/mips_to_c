typedef struct EnTg {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnTg *, GlobalContext *);
    /* 0x148 */ SkelAnime unk_148;                  /* inferred */
    /* 0x18C */ SkelAnime unk_18C;                  /* inferred */
    /* 0x1D0 */ char pad_1D0[0x20];
    /* 0x1F0 */ Vec3s unk_1F0;                      /* inferred */
    /* 0x1F6 */ char pad_1F6[0x78];                 /* maybe part of unk_1F0[21]? */
    /* 0x26E */ Vec3s unk_26E;                      /* inferred */
    /* 0x274 */ char pad_274[0x78];                 /* maybe part of unk_26E[21]? */
    /* 0x2EC */ s16 unk_2EC;                        /* inferred */
    /* 0x2EE */ char pad_2EE[0x2];
    /* 0x2F0 */ ? unk_2F0;                          /* inferred */
    /* 0x2F0 */ char pad_2F0[0x258];
} EnTg;                                             /* size = 0x548 */

struct _mips2c_stack_EnTg_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTg_Draw {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ GraphicsContext *sp44;               /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EnTg_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnTg_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8098F800 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8098F8A8 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Collider *sp18;                      /* inferred */
    /* 0x1C */ CollisionCheckContext *sp1C;         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8098F928 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8098FA70 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ u8 sp24;                             /* inferred */
    /* 0x25 */ char pad_25[0x3];                    /* maybe part of sp24[4]? */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8098FBB4 {};              /* size 0x0 */

struct _mips2c_stack_func_8098FBD0 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ? sp18;                              /* inferred */
    /* 0x18 */ char pad_18[0x10];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8098FD50 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0xC];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8098FEA8 {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_8099000C {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

void func_8098F800(SkelAnime *arg0, ? *arg1, s16 arg2); /* static */
void func_8098F8A8(EnTg *arg0, GlobalContext *arg1); /* static */
void func_8098F928(EnTg *arg0, GlobalContext *arg1); /* static */
s32 func_8098FBB4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_8098FBD0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_8098FD50(? *arg0, u8 *arg1, void *arg2, s32 arg3); /* static */
void func_8098FEA8(GlobalContext *arg0, ? *arg1, s32 arg2); /* static */
void func_8099000C(GlobalContext *arg0, ? *arg1, s32 arg2); /* static */
extern ? D_0600B0A0;
extern ? D_0600B0E0;
extern FlexSkeletonHeader D_0600B2B0;
static ColliderCylinderInit D_809901C0 = {
    {0, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x12, 0x40, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_809901EC = {0, 0, 0, 0, 0xFF};
static DamageTable D_809901F8 = {
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
static ? D_80990218;                                /* unable to generate initializer */
static ? D_80990228;                                /* unable to generate initializer */
static ? D_80990234;                                /* unable to generate initializer */
static ? D_80990240;                                /* unable to generate initializer */
static ? D_8099024C;                                /* unable to generate initializer */

void func_8098F800(SkelAnime *arg0, ? *arg1, s16 arg2) {
    s16 temp_v0;
    void *temp_s0;
    f32 phi_f0;

    temp_s0 = arg1 + (arg2 * 0x10);
    temp_v0 = temp_s0->unk_A;
    if ((s32) temp_v0 < 0) {
        phi_f0 = (f32) SkelAnime_GetFrameCount(temp_s0->unk_0);
    } else {
        phi_f0 = (f32) temp_v0;
    }
    SkelAnime_ChangeAnim(arg0, (AnimationHeader *) temp_s0->unk_0, temp_s0->unk_4, (f32) temp_s0->unk_8, phi_f0, (u8) (s32) temp_s0->unk_C, (f32) temp_s0->unk_E);
}

void func_8098F8A8(EnTg *arg0, GlobalContext *arg1) {
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

void func_8098F928(EnTg *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
}

void EnTg_Init(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    SkelAnime *temp_a1_2;
    EnTg *this = (EnTg *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    temp_a1 = &this->unk_148;
    sp30 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_0600B2B0, NULL, &this->unk_1F0, &this->unk_26E, 0x15);
    func_8098F800(sp30, &D_80990218, 0);
    temp_a1_2 = &this->unk_18C;
    sp30 = temp_a1_2;
    Collider_InitCylinder(globalCtx, (ColliderCylinder *) temp_a1_2);
    Collider_SetCylinder(globalCtx, (ColliderCylinder *) temp_a1_2, (Actor *) this, &D_809901C0);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_809901F8, &D_809901EC);
    Actor_SetScale((Actor *) this, 0.01f);
    this->actionFunc = func_8098FA70;
    this->actor.gravity = -4.0f;
}

void EnTg_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTg *this = (EnTg *) thisx;
    Collider_DestroyCylinder(globalCtx, (ColliderCylinder *) &this->unk_18C);
}

void func_8098FA70(EnTg *this, GlobalContext *globalCtx) {
    f32 sp28;
    u8 sp24;
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = this->unk_2EC;
    this->actor.shape.rot.y = this->actor.shape.rot.y + gGameInfo->data[1536] + 0x258;
    this->unk_30 = (unaligned s32) this->unk_BC;
    this->actor.world.rot.z = (s16) (u16) this->actor.shape.rot.z;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        this->unk_2EC = temp_v0 - 1;
        phi_v1 = this->unk_2EC;
    }
    if (phi_v1 == 0) {
        this->unk_2EC = 0xC;
        sp24.unk_0 = (f32) this->actor.world.pos.x;
        sp24.unk_4 = (f32) this->actor.world.pos.y;
        sp24.unk_8 = (f32) this->actor.world.pos.z;
        sp28 += 62.0f;
        func_8098FD50(&this->unk_2F0, &sp24, (void *)0xA);
    }
}

void EnTg_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnTg *this = (EnTg *) thisx;
    this->actionFunc(this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
    func_8098F928(this, globalCtx);
    func_8098FEA8(globalCtx, &this->unk_2F0, 0xA);
    func_8098F8A8(this, globalCtx);
}

s32 func_8098FBB4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    return 0;
}

void func_8098FBD0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? sp18;

    sp18.unk_0 = (s32) D_80990228.unk_0;
    sp18.unk_4 = (s32) D_80990228.unk_4;
    sp18.unk_8 = (s32) D_80990228.unk_8;
    if (arg1 == 9) {
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp18, arg4 + 0x3C);
    }
}

void EnTg_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp44;
    Gfx *sp38;
    Gfx *sp34;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    EnTg *this = (EnTg *) thisx;

    SysMatrix_StatePush();
    func_8099000C(globalCtx, &this->unk_2F0, 0xA);
    SysMatrix_StatePop();
    temp_a0 = globalCtx->state.gfxCtx;
    sp44 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp44->polyOpa.p;
    sp44->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    temp_v0_2 = sp44->polyOpa.p;
    sp44->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060020;
    sp44 = sp44;
    sp38 = temp_v0_2;
    sp38->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, 0, 0x32, 0xA0, 0);
    temp_v0_3 = sp44->polyOpa.p;
    sp44->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060024;
    sp34 = temp_v0_3;
    sp34->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, 0xFF, 0xFF, 0xFF, 0);
    SkelAnime_DrawSV(globalCtx, this->unk_148.skeleton, this->unk_148.limbDrawTbl, (s32) this->unk_148.dListCount, func_8098FBB4, func_8098FBD0, (Actor *) this);
}

void func_8098FD50(? *arg0, u8 *arg1, void *arg2, s32 arg3) {
    ? sp2C;
    ? sp20;
    f32 temp_f8;
    s32 temp_v0;
    u8 *temp_a1;
    s32 phi_v0;
    u8 *phi_a1;
    s32 phi_v0_2;
    u8 *phi_a1_2;

    sp2C.unk_0 = (s32) D_80990234.unk_0;
    sp2C.unk_4 = (s32) D_80990234.unk_4;
    sp2C.unk_8 = (s32) D_80990234.unk_8;
    sp20.unk_0 = (s32) D_80990240.unk_0;
    sp20.unk_4 = (s32) D_80990240.unk_4;
    sp20.unk_8 = (s32) D_80990240.unk_8;
    phi_v0 = 0;
    phi_a1 = arg1;
    phi_v0_2 = 0;
    phi_a1_2 = arg1;
    if ((arg3 > 0) && (arg1->unk_0 != 0)) {
loop_2:
        temp_v0 = phi_v0 + 1;
        temp_a1 = phi_a1 + 0x3C;
        phi_v0 = temp_v0;
        phi_a1 = temp_a1;
        phi_v0_2 = temp_v0;
        phi_a1_2 = temp_a1;
        if (temp_v0 < arg3) {
            if (*temp_a1 != 0) {
                goto loop_2;
            }
        }
    }
    if (phi_v0_2 < arg3) {
        phi_a1_2->unk_0 = 1;
        phi_a1_2->unk_14 = (s32) arg2->unk_0;
        phi_a1_2->unk_18 = (s32) arg2->unk_4;
        phi_a1_2->unk_1C = (s32) arg2->unk_8;
        phi_a1_2->unk_2C = (s32) sp2C.unk_0;
        phi_a1_2->unk_30 = (s32) sp2C.unk_4;
        phi_a1_2->unk_34 = (s32) sp2C.unk_8;
        phi_a1_2->unk_20 = (s32) sp20.unk_0;
        phi_a1_2->unk_24 = (s32) sp20.unk_4;
        phi_a1_2->unk_28 = (s32) sp20.unk_8;
        phi_a1_2->unk_4 = 0.01f;
        arg1 = phi_a1_2;
        arg1->unk_14 = (f32) (arg1->unk_14 + (4.0f * Math_SinS(arg0->unk_BE)));
        temp_f8 = 4.0f * Math_CosS(arg0->unk_BE);
        arg1->unk_1 = 0x10;
        arg1->unk_1C = (f32) (arg1->unk_1C + temp_f8);
    }
}

void func_8098FEA8(GlobalContext *arg0, ? *arg1, s32 arg2) {
    ? sp44;
    s16 temp_s2;
    s32 temp_s1;
    u8 temp_t3;
    u8 temp_v0;
    ? *phi_s0;
    s32 phi_v1;
    s32 phi_s1;

    sp44.unk_0 = (s32) D_8099024C.unk_0;
    sp44.unk_4 = (s32) D_8099024C.unk_4;
    sp44.unk_8 = (s32) D_8099024C.unk_8;
    temp_s2 = func_800DFC68((arg0 + (arg0->activeCamera * 4))->unk_800);
    phi_s0 = arg1;
    phi_s1 = 0;
    if (arg2 > 0) {
        do {
            if (phi_s0->unk_0 == 1U) {
                temp_v0 = phi_s0->unk_1;
                temp_t3 = temp_v0 - 1;
                if (temp_v0 == 0) {
                    phi_v1 = 0;
                } else {
                    phi_s0->unk_1 = temp_t3;
                    phi_v1 = temp_t3 & 0xFF;
                }
                if (phi_v1 == 0) {
                    phi_s0->unk_0 = 0U;
                }
                phi_s0->unk_18 = (f32) (phi_s0->unk_18 + phi_s0->unk_30);
                phi_s0->unk_14 = (f32) (phi_s0->unk_14 + (2.0f * Math_SinS(phi_s0->unk_38)));
                phi_s0->unk_1C = (f32) (phi_s0->unk_1C + (2.0f * Math_CosS(phi_s0->unk_38)));
                SysMatrix_StatePush();
                SysMatrix_InsertTranslation(phi_s0->unk_14, phi_s0->unk_18, phi_s0->unk_1C, 0);
                Matrix_RotateY(temp_s2, 1U);
                SysMatrix_MultiplyVector3fByState((Vec3f *) &sp44, phi_s0 + 0x14);
                SysMatrix_StatePop();
                phi_s0->unk_38 = (s16) (phi_s0->unk_38 + 0x1770);
            }
            temp_s1 = phi_s1 + 1;
            phi_s0 += 0x3C;
            phi_s1 = temp_s1;
        } while (temp_s1 != arg2);
    }
}

void func_8099000C(GlobalContext *arg0, ? *arg1, s32 arg2) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_s1;
    MtxF *temp_s0;
    f32 temp_f12;
    s32 temp_s3;
    ? *phi_s2;
    s32 phi_s7;
    s32 phi_s3;

    temp_s1 = arg0->state.gfxCtx;
    temp_v0 = func_801660B8(arg0, temp_s1->polyOpa.p);
    temp_s1->polyOpa.p = temp_v0;
    temp_s1->polyOpa.p = func_8012C724(temp_v0);
    phi_s2 = arg1;
    phi_s7 = 0;
    phi_s3 = 0;
    if (arg2 > 0) {
        do {
            temp_s0 = &arg0->mf_187FC;
            if (phi_s2->unk_0 == 1) {
                if (phi_s7 == 0) {
                    temp_v0_2 = temp_s1->polyOpa.p;
                    temp_s1->polyOpa.p = temp_v0_2 + 8;
                    temp_v0_2->words.w1 = (u32) &D_0600B0A0;
                    temp_v0_2->words.w0 = 0xDE000000;
                    phi_s7 = 1;
                }
                SysMatrix_InsertTranslation(phi_s2->unk_14, phi_s2->unk_18, phi_s2->unk_1C, 0);
                SysMatrix_NormalizeXYZ(temp_s0);
                temp_f12 = phi_s2->unk_4;
                Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
                temp_v0_3 = temp_s1->polyOpa.p;
                temp_s1->polyOpa.p = temp_v0_3 + 8;
                temp_v0_3->words.w0 = 0xDB060020;
                temp_v0_3->words.w1 = Lib_SegmentedToVirtual((void *) &D_0405E6F0);
                temp_v0_4 = temp_s1->polyOpa.p;
                temp_s1->polyOpa.p = temp_v0_4 + 8;
                temp_v0_4->words.w0 = 0xDA380003;
                temp_v0_4->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
                temp_v0_5 = temp_s1->polyOpa.p;
                temp_s1->polyOpa.p = temp_v0_5 + 8;
                temp_v0_5->words.w1 = (u32) &D_0600B0E0;
                temp_v0_5->words.w0 = 0xDE000000;
            }
            temp_s3 = phi_s3 + 1;
            phi_s2 += 0x3C;
            phi_s3 = temp_s3;
        } while (temp_s3 != arg2);
    }
}
