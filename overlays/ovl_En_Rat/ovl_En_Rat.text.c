typedef struct EnRat {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ void (*unk_188)(EnRat *, GlobalContext *); /* inferred */
    /* 0x18C */ u8 unk_18C;                         /* inferred */
    /* 0x18D */ u8 unk_18D;                         /* inferred */
    /* 0x18E */ char pad_18E[0x2];                  /* maybe part of unk_18D[3]? */
    /* 0x190 */ s16 unk_190;                        /* inferred */
    /* 0x192 */ s16 unk_192;                        /* inferred */
    /* 0x194 */ Vec3s unk_194;                      /* inferred */
    /* 0x19A */ char pad_19A[0x36];                 /* maybe part of unk_194[10]? */
    /* 0x1D0 */ Vec3s unk_1D0;                      /* inferred */
    /* 0x1D6 */ char pad_1D6[0x42];                 /* maybe part of unk_1D0[12]? */
    /* 0x218 */ f32 unk_218;                        /* inferred */
    /* 0x21C */ f32 unk_21C;                        /* inferred */
    /* 0x220 */ f32 unk_220;                        /* inferred */
    /* 0x224 */ char pad_224[0x34];                 /* maybe part of unk_220[14]? */
    /* 0x258 */ f32 unk_258;                        /* inferred */
    /* 0x25C */ f32 unk_25C;                        /* inferred */
    /* 0x260 */ s32 unk_260;                        /* inferred */
    /* 0x264 */ s32 unk_264;                        /* inferred */
    /* 0x268 */ ColliderSphere unk_268;             /* inferred */
} EnRat;                                            /* size = 0x2C0 */

struct _mips2c_stack_EnRat_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnRat_Draw {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnRat_Init {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnRat_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ void (*sp28)(EnRat *, GlobalContext *); /* inferred */
    /* 0x2C */ CollisionCheckContext *sp2C;         /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A563CC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A56444 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0xC];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80A5665C {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x14];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80A566E0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void (**sp24)(Actor *, Lights *, GlobalContext *); /* inferred */
    /* 0x28 */ PosRot *sp28;                        /* inferred */
    /* 0x2C */ Vec3f *sp2C;                         /* inferred */
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ char pad_34[0xA];                    /* maybe part of sp30[3]? */
    /* 0x3E */ s16 sp3E;                            /* inferred */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad_4C[0xC];
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0xC];
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad_64[0xE];
    /* 0x72 */ s16 sp72;                            /* inferred */
    /* 0x74 */ ? sp74;                              /* inferred */
    /* 0x74 */ char pad_74[0xC];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80A56994 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ CollisionContext *sp38;              /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ WaterBox *sp44;                      /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A56AFC {
    /* 0x00 */ char pad_0[0x58];
    /* 0x58 */ CollisionPoly *sp58;                 /* inferred */
    /* 0x5C */ char pad_5C[0x8];                    /* maybe part of sp58[3]? */
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad_64[0xC];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ char pad_88[0x8];                    /* maybe part of sp84[3]? */
    /* 0x90 */ s32 sp90;                            /* inferred */
    /* 0x94 */ u32 sp94;                            /* inferred */
    /* 0x98 */ u32 sp98;                            /* inferred */
    /* 0x9C */ CollisionPoly *sp9C;                 /* inferred */
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_80A56EB8 {};              /* size 0x0 */

struct _mips2c_stack_func_80A56F68 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A57010 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x2];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A57118 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A57180 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A5723C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A57330 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A57384 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A57488 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A574E8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A57570 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A575F4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A5764C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0xC];
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0x10];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80A57918 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A57984 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A57A08 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A57A9C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A57F10 {};              /* size 0x0 */

struct _mips2c_stack_func_80A57F4C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ void *sp30;                          /* inferred */
    /* 0x34 */ u32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x30];                   /* maybe part of sp34[13]? */
    /* 0x68 */ s32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0x10];                   /* maybe part of sp68[5]? */
    /* 0x7C */ MtxF *sp7C;                          /* inferred */
    /* 0x80 */ char pad_80[0x8];
};                                                  /* size = 0x88 */

void func_80A563CC(EnRat *arg0);                    /* static */
s32 func_80A56444(Actor *arg0, CollisionPoly *arg1, Vec3f *arg2); /* static */
void func_80A5665C(EnRat *arg0);                    /* static */
void func_80A566E0(Actor *arg0);                    /* static */
s32 func_80A56994(GlobalContext *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, CollisionPoly **arg4, u32 *arg5, s32 *); /* static */
s32 func_80A56AFC(Actor *arg0, Vec3f *arg1);        /* static */
void func_80A56EB8(Actor *arg0, ? *arg1, ? *arg2);  /* static */
void func_80A56F68(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A57010(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A57118(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A57180(EnRat *arg0);                    /* static */
void func_80A5723C(EnRat *arg0, GlobalContext *arg1); /* static */
void func_80A57330(EnRat *arg0);                    /* static */
void func_80A57384(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A57488(Actor *arg0);                    /* static */
void func_80A574E8(Actor *arg0, ? arg1);            /* static */
void func_80A57570(Actor *arg0);                    /* static */
void func_80A575F4(Actor *arg0);                    /* static */
void func_80A5764C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A57918(EnRat *arg0);                    /* static */
void func_80A57984(Actor *arg0, Vec3f *arg1);       /* static */
void func_80A57A08(Actor *arg0, Vec3f *arg1, u8);   /* static */
void func_80A57A9C(Actor *arg0, ? arg1);            /* static */
s32 func_80A57F10(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80A57F4C(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern ? D_04015DB0;
extern AnimationHeader D_06000174;
extern AnimationHeader D_0600026C;
extern FlexSkeletonHeader D_06001858;
static ColliderSphereInit D_80A58400;               /* type too large by 4; unable to generate initializer */
static s16 D_80A58428[2] = {0x17, 0x64};
static DamageTable D_80A5842C = {
    {
        0x10,
        1,
        1,
        1,
        1,
        1,
        0,
        0xF0,
        1,
        1,
        1,
        2,
        2,
        2,
        1,
        1,
        1,
        2,
        0x10,
        1,
        0,
        0,
        1,
        1,
        1,
        0,
        0,
        0,
        0,
        0,
        0,
        1,
    },
};
static CollisionCheckInfoInit D_80A5844C = {1, 0x1E, 0x1E, 0x32};
static void *D_80A58454[4] = {(void *)0x4091DE0, (void *)0x4091FE0, (void *)0x40921E0, (void *)0x40923E0};
static InitChainEntry D_80A58464[3];                /* unable to generate initializer */
static void D_80A58470;                             /* unable to generate initializer */
static s32 D_80A58494 = 0;
static Vec3f D_80A58498 = {0.0f, 0.6f, 0.0f};
static Color_RGBA8 D_80A584A4 = {0xFF, 0xFF, 0xFF, 0xFF};
static ? D_80A584A8;                                /* unable to generate initializer */
static ? D_80A584B4;                                /* unable to generate initializer */
static ? D_80A584C0;                                /* unable to generate initializer */
static Vec3f D_80A584CC = {0.0f, 3.0f, 0.0f};

void EnRat_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v1;
    s32 temp_s1;
    void **temp_s0;
    f32 phi_f4;
    void **phi_s0;
    EnRat *this = (EnRat *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80A58464);
    Collider_InitAndSetSphere(globalCtx, &this->unk_268, (Actor *) this, &D_80A58400);
    temp_v1 = this->actor.params;
    temp_s1 = temp_v1 & 0xFF;
    this->unk_268.dim.worldSphere.radius = *D_80A58428;
    if ((temp_v1 & 0x8000) != 0) {
        this->actor.params = 1;
    } else {
        this->actor.params = 0;
    }
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_06001858, &D_0600026C, &this->unk_194, &this->unk_1D0, 0xA);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 25.0f);
    if (this->actor.params == 0) {
        Effect_Add(globalCtx, &this->unk_260, 2, 0U, (u8) 0, &D_80A58470);
        Effect_Add(globalCtx, &this->unk_264, 2, 0U, (u8) 0, &D_80A58470);
        this->unk_190 = 0x1E;
    } else {
        this->unk_190 = 0x96;
    }
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_80A5842C, &D_80A5844C);
    func_80A563CC(this);
    func_80A5665C(this);
    if ((temp_s1 == 0xFF) || (temp_s1 == 0)) {
        phi_f4 = 350.0f;
    } else if (this->actor.params == 0) {
        phi_f4 = (f32) temp_s1 * 0.1f * 40.0f;
    } else {
        phi_f4 = (f32) temp_s1 * 0.5f * 40.0f;
    }
    this->unk_258 = phi_f4;
    phi_s0 = D_80A58454;
    if (D_80A58494 == 0) {
        do {
            temp_s0 = phi_s0 + 4;
            temp_s0->unk_-4 = Lib_SegmentedToVirtual(*phi_s0);
            phi_s0 = temp_s0;
        } while (temp_s0 != D_80A58464);
        D_80A58494 = 1;
    }
    func_80A57330(this);
}

void EnRat_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnRat *this = (EnRat *) thisx;
    if (this->actor.params == 0) {
        Effect_Destroy(globalCtx, this->unk_260);
        Effect_Destroy(globalCtx, this->unk_264);
    }
    Collider_DestroySphere(globalCtx, &this->unk_268);
}

void func_80A563CC(EnRat *arg0) {
    Matrix_RotateY(arg0->actor.shape.rot.y, 0U);
    SysMatrix_InsertXRotation_s(arg0->actor.shape.rot.x, 1);
    SysMatrix_InsertZRotation_s(arg0->actor.shape.rot.z, 1);
    SysMatrix_GetStateTranslationAndScaledZ(1.0f, arg0 + 0x20C);
    SysMatrix_GetStateTranslationAndScaledY(1.0f, arg0 + 0x218);
    SysMatrix_GetStateTranslationAndScaledX(1.0f, arg0 + 0x224);
}

s32 func_80A56444(Actor *arg0, CollisionPoly *arg1, Vec3f *arg2) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    ? sp38;
    f32 sp34;
    Vec3f *sp28;
    Vec3f *sp24;
    Vec3f *sp20;
    Vec3f *temp_a0;
    Vec3f *temp_a0_2;
    Vec3f *temp_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;

    arg0->floorPoly = arg1;
    if (arg1 != 0) {
        sp44 = (f32) arg1->normal.x * 0.00003051851f;
        sp48 = (f32) arg1->normal.y * 0.00003051851f;
        sp4C = (f32) arg1->normal.z * 0.00003051851f;
    } else {
        sp44 = 0.0f;
        sp4C = 0.0f;
        sp48 = 1.0f;
    }
    temp_f12 = (arg0[1].shape.feetPos[0].x * sp44) + (sp48 * arg0[1].shape.feetPos[0].y) + (sp4C * arg0[1].shape.feetPos[0].z);
    if (fabsf(temp_f12) >= 0.999f) {
        return 0;
    }
    temp_f0 = func_80086C48(temp_f12);
    sp34 = temp_f0;
    temp_a0 = arg0 + 0x218;
    if (temp_f0 < 0.001f) {
        return 0;
    }
    sp28 = temp_a0;
    Math3D_CrossProduct(temp_a0, (Vec3f *) &sp44, (Vec3f *) &sp38);
    temp_f0_2 = Math3D_Vec3fMagnitude((Vec3f *) &sp38);
    if (temp_f0_2 < 0.001f) {
        func_80A57A08(arg0, arg2);
        return 0;
    }
    Math_Vec3f_Scale((Vec3f *) &sp38, 1.0f / temp_f0_2);
    SysMatrix_InsertRotationAroundUnitVector_f(sp34, (Vec3f *) &sp38, 0);
    temp_a0_2 = arg0 + 0x224;
    sp24 = temp_a0_2;
    SysMatrix_MultiplyVector3fByState(temp_a0_2, (Vec3f *) &sp38);
    Math_Vec3f_Copy(temp_a0_2, (Vec3f *) &sp38);
    temp_a2 = arg0 + 0x20C;
    sp20 = temp_a2;
    Math3D_CrossProduct(temp_a0_2, (Vec3f *) &sp44, temp_a2);
    temp_f0_3 = Math3D_Vec3fMagnitude(sp20);
    if (temp_f0_3 < 0.001f) {
        func_80A57A08(arg0, arg2);
        return 0;
    }
    Math_Vec3f_Scale(sp20, 1.0f / temp_f0_3);
    Math_Vec3f_Copy(sp28, (Vec3f *) &sp44);
    return 1;
}

void func_80A5665C(EnRat *arg0) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    Vec3s *temp_a1;
    f32 *temp_a0;
    f32 temp_f8;

    temp_a0 = &sp18;
    temp_a1 = arg0 + 0x30;
    sp18 = arg0->unk_224;
    sp1C = arg0->unk_228;
    sp20 = arg0->unk_22C;
    sp28 = arg0->unk_218;
    sp2C = arg0->unk_21C;
    sp30 = arg0->unk_220;
    sp38 = arg0->unk_20C;
    sp3C = arg0->unk_210;
    temp_f8 = arg0->unk_214;
    arg0 = arg0;
    sp40 = temp_f8;
    func_8018219C((MtxF *) temp_a0, temp_a1, 0);
    arg0->actor.world.rot.x = (s16) -(s32) arg0->actor.world.rot.x;
}

void func_80A566E0(Actor *arg0) {
    ? sp74;
    s16 sp72;
    ? sp64;
    ? sp58;
    ? sp4C;
    ? sp40;
    s16 sp3E;
    Vec3f *sp30;
    Vec3f *sp2C;
    PosRot *sp28;
    void (**sp24)(Actor *, Lights *, GlobalContext *);
    PosRot *temp_a0_2;
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    s16 temp_a0_3;
    s16 temp_v1;
    s32 temp_f6;
    void (**temp_a1_2)(Actor *, Lights *, GlobalContext *);
    s16 phi_v1;
    s32 phi_v1_2;
    s16 phi_v1_3;
    s16 phi_v0;

    if (func_80A57384 != arg0[1].focus.pos.z) {
        temp_v1 = arg0->yawTowardsPlayer - arg0->shape.rot.y;
        phi_v1_2 = (s32) temp_v1;
        if (arg0[1].shape.feetPos[0].y < -0.25f) {
            phi_v1_2 = (s32) (s16) (temp_v1 - 0x8000);
        }
        sp24 = arg0 + 0x20C;
        sp2C = arg0 + 0x218;
    } else {
        temp_a1 = arg0 + 8;
        sp30 = temp_a1;
        if (Actor_DistanceToPoint(arg0, temp_a1) > 50.0f) {
            SysMatrix_InsertZRotation_s((s16) ((s32) arg0->home.rot.z * -1), 0);
            SysMatrix_InsertXRotation_s((s16) ((s32) arg0->home.rot.x * -1), 1);
            Matrix_RotateY((s16) ((s32) arg0->home.rot.y * -1), 1U);
            temp_a0 = arg0[1].shape.feetPos;
            sp2C = temp_a0;
            SysMatrix_MultiplyVector3fByState(temp_a0, (Vec3f *) &sp40);
            temp_a0_2 = &arg0->world;
            temp_a1_2 = &arg0[1].shape.shadowDraw;
            sp24 = temp_a1_2;
            sp28 = temp_a0_2;
            Math_Vec3f_Sum((Vec3f *) temp_a0_2, (Vec3f *) temp_a1_2, (Vec3f *) &sp64);
            SysMatrix_MultiplyVector3fByState((Vec3f *) &sp64, (Vec3f *) &sp4C);
            SysMatrix_MultiplyVector3fByState(sp30, (Vec3f *) &sp64);
            SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_2, (Vec3f *) &sp58);
            sp3E = Math_Vec3f_Yaw((Vec3f *) &sp58, (Vec3f *) &sp64);
            temp_a0_3 = sp3E - Math_Vec3f_Yaw((Vec3f *) &sp58, (Vec3f *) &sp4C);
            phi_v1 = temp_a0_3;
            if (sp44 < -0.25f) {
                phi_v1 = (s16) (temp_a0_3 - 0x8000);
            }
            sp72 = phi_v1;
            phi_v1_2 = (s32) (s16) (phi_v1 + (s32) randPlusMinusPoint5Scaled(2048.0f));
        } else {
            phi_v1_2 = 0;
            if (Rand_ZeroOne() < 0.1f) {
                temp_f6 = (s32) randPlusMinusPoint5Scaled(2048.0f);
                sp24 = &arg0[1].shape.shadowDraw;
                sp2C = arg0[1].shape.feetPos;
                phi_v1_2 = (s32) (s16) temp_f6;
            } else {
                sp2C = arg0[1].shape.feetPos;
                sp24 = &arg0[1].shape.shadowDraw;
            }
        }
    }
    if (phi_v1_2 < -0x800) {
        phi_v1_3 = -0x800;
    } else {
        phi_v0 = (s16) phi_v1_2;
        if (phi_v1_2 >= 0x801) {
            phi_v0 = 0x800;
        }
        phi_v1_3 = phi_v0;
    }
    SysMatrix_InsertRotationAroundUnitVector_f((f32) phi_v1_3 * 0.0000958738f, sp2C, 0);
    SysMatrix_MultiplyVector3fByState((Vec3f *) sp24, (Vec3f *) &sp74);
    Math_Vec3f_Copy((Vec3f *) sp24, (Vec3f *) &sp74);
    Math3D_CrossProduct(sp2C, (Vec3f *) sp24, &arg0[1].shape.feetPos[1]);
    arg0->unk_18D = 1;
}

s32 func_80A56994(GlobalContext *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, CollisionPoly **arg4, u32 *arg5) {
    WaterBox *sp44;
    s32 sp40;
    f32 sp3C;
    CollisionContext *sp38;
    CollisionContext *temp_a1;
    s32 phi_v1;
    s32 phi_v0;

    temp_a1 = arg0 + 0x830;
    sp38 = temp_a1;
    if ((func_800CA1AC(arg0, temp_a1, arg2->x, arg2->z, &sp3C, &sp44) != 0) && (sp3C <= arg1->y) && (arg2->y <= sp3C)) {
        phi_v1 = 1;
    } else {
        phi_v1 = 0;
    }
    sp40 = phi_v1;
    if ((func_800C55C4(sp38, arg1, arg2, arg3, arg4, 1U, 1U, 1U, 1U, arg5) != 0) && (sp40 = phi_v1, ((func_800C9A4C(sp38, *arg4, (s32) *arg5) & 0x30) == 0)) && ((phi_v1 == 0) || (sp3C <= arg3->y))) {
        return 1;
    }
    phi_v0 = 0;
    if (phi_v1 != 0) {
        arg3->x = arg2->x;
        arg3->y = sp3C;
        arg3->z = arg2->z;
        *arg4 = NULL;
        *arg5 = 0x32;
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 func_80A56AFC(Actor *arg0, Vec3f *arg1) {
    CollisionPoly *sp9C;
    u32 sp98;
    u32 sp94;
    s32 sp90;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    ? sp64;
    CollisionPoly *sp58;
    f32 *temp_a1;
    f32 *temp_a2;
    f32 *temp_s5;
    f32 *temp_s6;
    f32 temp_f20;
    f32 temp_f20_2;
    s32 temp_s1;
    s32 phi_s1;
    s32 phi_s1_2;

    temp_s5 = &sp7C;
    temp_s6 = &sp70;
    sp9C = NULL;
    sp98 = 0;
    sp90 = 0x32;
    sp94 = 0x32;
    temp_a1 = temp_s5;
    temp_a2 = temp_s6;
    temp_f20 = 2.0f * arg0->speedXZ;
    sp7C = arg0->world.pos.x + (arg0[1].shape.feetPos[0].x * 5.0f);
    sp80 = arg0->world.pos.y + (arg0[1].shape.feetPos[0].y * 5.0f);
    sp84 = arg0->world.pos.z + (arg0[1].shape.feetPos[0].z * 5.0f);
    sp70 = arg0->world.pos.x - (arg0[1].shape.feetPos[0].x * 4.0f);
    sp74 = arg0->world.pos.y - (arg0[1].shape.feetPos[0].y * 4.0f);
    sp78 = arg0->world.pos.z - (arg0[1].shape.feetPos[0].z * 4.0f);
    if (func_80A56994((bitwise GlobalContext *) 4.0f, arg1, (Vec3f *) temp_a1, (Vec3f *) temp_a2, &sp58, &sp98, &sp90) != 0) {
        sp70 = (arg0[1].shape.shadowDraw * temp_f20) + sp7C;
        sp74 = (arg0[1].shape.shadowScale * temp_f20) + sp80;
        sp78 = (arg0->unk_214 * temp_f20) + sp84;
        if (func_80A56994((GlobalContext *) arg1, (Vec3f *) temp_s5, (Vec3f *) temp_s6, (Vec3f *) &sp64, &sp9C, &sp94) != 0) {
            if ((sp9C != 0) && (arg0->unk_18C != 0)) {
                return 0;
            }
            arg0->unk_18D = (u8) (arg0->unk_18D | func_80A56444(arg0, sp9C, arg1));
            Math_Vec3f_Copy(arg0 + 0x24, (Vec3f *) &sp64);
            arg0->floorBgId = (u8) sp94;
            arg0->speedXZ = 0.0f;
            goto block_20;
        }
        if (sp98 != arg0->floorPoly) {
            arg0->unk_18D = (u8) (arg0->unk_18D | func_80A56444(arg0, (CollisionPoly *) sp98, arg1));
        }
        Math_Vec3f_Copy(arg0 + 0x24, (Vec3f *) &sp58);
        arg0->floorBgId = (u8) sp90;
        goto block_20;
    }
    temp_f20_2 = temp_f20 * 3.0f;
    arg0->speedXZ = 0.0f;
    Math_Vec3f_Copy((Vec3f *) temp_s5, (Vec3f *) temp_s6);
    phi_s1 = 0;
loop_10:
    phi_s1_2 = phi_s1;
    if (phi_s1 == 0) {
        sp70 = sp7C - (arg0[1].shape.shadowDraw * temp_f20_2);
        sp74 = sp80 - (arg0[1].shape.shadowScale * temp_f20_2);
        sp78 = sp84 - (arg0->unk_214 * temp_f20_2);
    } else if (phi_s1 == 1) {
        sp70 = (arg0[1].shape.feetPos[1].x * temp_f20_2) + sp7C;
        sp74 = (arg0[1].shape.feetPos[1].y * temp_f20_2) + sp80;
        sp78 = (arg0[1].shape.feetPos[1].z * temp_f20_2) + sp84;
    } else {
        sp70 = sp7C - (arg0[1].shape.feetPos[1].x * temp_f20_2);
        sp74 = sp80 - (arg0[1].shape.feetPos[1].y * temp_f20_2);
        sp78 = sp84 - (arg0[1].shape.feetPos[1].z * temp_f20_2);
    }
    if (func_80A56994((GlobalContext *) arg1, (Vec3f *) temp_s5, (Vec3f *) temp_s6, (Vec3f *) &sp64, &sp9C, &sp94) != 0) {
        arg0->unk_18D = (u8) (arg0->unk_18D | func_80A56444(arg0, sp9C, arg1));
        Math_Vec3f_Copy(arg0 + 0x24, (Vec3f *) &sp64);
        arg0->floorBgId = (u8) sp94;
    } else {
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
        phi_s1_2 = temp_s1;
        if (temp_s1 != 3) {
            goto loop_10;
        }
    }
    if (phi_s1_2 == 3) {
        return 0;
    }
block_20:
    return 1;
}

void func_80A56EB8(Actor *arg0, ? *arg1, ? *arg2) {
    f32 temp_f0;

    temp_f0 = arg1->unk_0 + arg0[1].prevPos.z;
    arg2->unk_0 = (f32) (arg0->world.pos.x + (arg0[1].shape.feetPos[1].x * temp_f0) + (arg0[1].shape.feetPos[0].x * arg1->unk_4) + (arg0[1].shape.shadowDraw * arg1->unk_8));
    arg2->unk_4 = (f32) (arg0->world.pos.y + (arg0[1].shape.feetPos[1].y * temp_f0) + (arg0[1].shape.feetPos[0].y * arg1->unk_4) + (arg0[1].shape.shadowScale * arg1->unk_8));
    arg2->unk_8 = (f32) (arg0->world.pos.z + (arg0[1].shape.feetPos[1].z * temp_f0) + (arg0[1].shape.feetPos[0].z * arg1->unk_4) + (arg0->unk_214 * arg1->unk_8));
}

void func_80A56F68(Actor *arg0, GlobalContext *arg1) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 *temp_a1;

    EffectSsGRipple_Spawn(arg1, arg0 + 0x24, 0x46, 0x1F4, (s16) 0);
    temp_a1 = &sp28;
    sp28 = arg0->world.pos.x - (arg0[1].shape.shadowDraw * 10.0f);
    sp30 = arg0->world.pos.z - (arg0->unk_214 * 10.0f);
    sp2C = arg0->world.pos.y + 5.0f;
    EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_a1, NULL, NULL, (s16) 1, (s16) 0x1C2);
}

void func_80A57010(Actor *arg0, GlobalContext *arg1) {
    s16 sp1E;
    f32 sp18;
    Actor *temp_a2;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f4;
    f32 temp_f6;
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_v0;
    u8 temp_a1;
    void (*temp_f2)(Actor *, Lights *, GlobalContext *);

    temp_a2 = arg0;
    temp_a3 = temp_a2->shape.rot.y;
    temp_a1 = temp_a2->floorBgId;
    arg0 = temp_a2;
    sp1E = temp_a3;
    BgCheck2_UpdateActorAttachedToMesh(arg1 + 0x830, (s32) temp_a1, temp_a2);
    temp_v0 = arg0->shape.rot.y;
    temp_a3_2 = temp_v0 - temp_a3;
    if (temp_a3 != temp_v0) {
        sp1E = temp_a3_2;
        arg0 = arg0;
        sp18 = Math_SinS(temp_a3_2);
        temp_f0 = Math_CosS(temp_a3_2);
        temp_f14 = arg0->unk_214;
        temp_f2 = arg0[1].shape.shadowDraw;
        temp_f16 = arg0[1].shape.feetPos[0].z;
        temp_f10 = temp_f14 * temp_f0;
        temp_f14_2 = arg0[1].shape.feetPos[1].z;
        temp_f18 = sp18 * (bitwise f32) temp_f2;
        temp_f2_2 = arg0[1].shape.feetPos[0].x;
        arg0[1].shape.shadowDraw = (bitwise void (*)(Actor *, Lights *, GlobalContext *)) ((temp_f14 * sp18) + (temp_f0 * (bitwise f32) temp_f2));
        arg0->unk_214 = (f32) (temp_f10 - temp_f18);
        temp_f4 = sp18 * temp_f2_2;
        temp_f2_3 = arg0[1].shape.feetPos[1].x;
        arg0[1].shape.feetPos[0].x = (temp_f16 * sp18) + (temp_f0 * temp_f2_2);
        arg0[1].shape.feetPos[0].z = (temp_f16 * temp_f0) - temp_f4;
        temp_f6 = sp18 * temp_f2_3;
        arg0[1].shape.feetPos[1].x = (temp_f14_2 * sp18) + (temp_f0 * temp_f2_3);
        arg0[1].shape.feetPos[1].z = (temp_f14_2 * temp_f0) - temp_f6;
    }
}

void func_80A57118(Actor *arg0, GlobalContext *arg1) {
    func_800B0EB0(arg1, arg0 + 0x230, &D_801D15B0, &D_80A58498, &D_80A584A4, &D_80A584A4, (s16) 0x4B, (s16) 7, (s16) 8);
}

void func_80A57180(EnRat *arg0) {
    arg0->unk_18C = 0;
    arg0->unk_190 = 0xC8;
    arg0->unk_192 = 0;
    Math_Vec3f_Copy(arg0 + 0x24, arg0 + 8);
    arg0->actor.shape.yOffset = 0.0f;
    arg0->actor.shape.rot.x = arg0->actor.home.rot.x;
    arg0->actor.shape.rot.y = arg0->actor.home.rot.y;
    arg0->actor.shape.rot.z = arg0->actor.home.rot.z;
    func_80A563CC(arg0);
    func_80A5665C(arg0);
    arg0->actor.flags &= -2;
    arg0->actor.speedXZ = 0.0f;
    SkelAnime_ChangeAnimPlaybackRepeat(&arg0->unk_144, &D_06000174, 0.0f);
    arg0->actor.draw = NULL;
    arg0->actor.shape.shadowDraw = NULL;
    arg0->unk_188 = func_80A5723C;
    arg0->unk_25C = 2666.6667f;
}

void func_80A5723C(EnRat *arg0, GlobalContext *arg1) {
    SkelAnime *sp2C;
    SkelAnime *temp_a0;
    s16 temp_v0;

    temp_v0 = arg0->unk_190;
    if ((s32) temp_v0 > 0) {
        arg0->unk_190 = temp_v0 - 1;
        if (arg0->unk_190 == 0) {
            arg0->actor.draw = EnRat_Draw;
            arg0->actor.flags |= 1;
            arg0->unk_144.animPlaybackSpeed = 1.0f;
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    Math_StepToF(arg0 + 0x25C, 0.0f, 666.6667f);
    temp_a0 = arg0 + 0x144;
    sp2C = temp_a0;
    if (func_801378B8(temp_a0, 2.0f) != 0) {
        func_800B1210(arg1, arg0 + 0x24, arg0 + 0x218, &D_801D15B0, (s16) 0x258, (s16) 0x64);
        arg0->actor.shape.shadowDraw = func_800B3FC0;
    }
    if (func_801378B8(sp2C, 0.0f) != 0) {
        arg0->unk_190 = 0x96;
        arg0->actor.flags &= -0x11;
        func_80A57330(arg0);
    }
}

void func_80A57330(EnRat *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_0600026C);
    arg0->unk_18E = 5;
    arg0->unk_188 = func_80A57384;
    arg0->actor.speedXZ = 2.0f;
}

void func_80A57384(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    s16 temp_v0;

    sp24 = arg1->actorCtx.actorList[2].first;
    arg0->speedXZ = 2.0f;
    if (func_801378B8(arg0 + 0x144, 0.0f) != 0) {
        Audio_PlayActorSound2(arg0, 0x3828U);
        temp_v0 = arg0[1].focus.rot.y;
        if (temp_v0 != 0) {
            arg0[1].focus.rot.y = temp_v0 - 1;
        }
    }
    if ((arg0[1].focus.rot.y == 0) && (Rand_ZeroOne() < 0.05f)) {
        Audio_PlayActorSound2(arg0, 0x3854U);
        arg0[1].focus.rot.y = 5;
    }
    if (((sp24[8].targetArrowOffset & 0x100) == 0) && (arg0->xzDistToPlayer < arg0->unk_258) && (Player_GetMask(arg1) != 0x10) && (Actor_IsActorFacingLink(arg0, 0x3800) != 0)) {
        func_80A57488(arg0);
    }
}

void func_80A57488(Actor *arg0) {
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->flags |= 0x10;
    arg0 = temp_a3;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x144, &D_06000174, -5.0f);
    arg0[1].focus.rot.y = 3;
    arg0[1].focus.pos.z = func_80A574E8;
    arg0->speedXZ = 0.0f;
}

void func_80A574E8(Actor *arg0, ? arg1) {
    if ((arg0[1].focus.rot.y == 3) && (func_801378B8(arg0 + 0x144, 5.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x3855U);
    }
    if (func_801378B8((SkelAnime *) &arg0[1], 0.0f) != 0) {
        arg0[1].focus.rot.y += -1;
        if (arg0[1].focus.rot.y == 0) {
            func_80A575F4(arg0);
        }
    }
}

void func_80A57570(Actor *arg0) {
    s32 temp_s1;
    void *phi_s0;
    s32 phi_s1;

    phi_s0 = arg0 + 0x23C;
    phi_s1 = 0;
    do {
        phi_s0->unk_0 = randPlusMinusPoint5Scaled(6.0f);
        phi_s0->unk_4 = randPlusMinusPoint5Scaled(6.0f);
        temp_s1 = phi_s1 + 0xC;
        phi_s0->unk_8 = randPlusMinusPoint5Scaled(6.0f);
        phi_s0 += 0xC;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x18);
}

void func_80A575F4(Actor *arg0) {
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x144, &D_0600026C, -5.0f);
    arg0->speedXZ = 6.1f;
    func_80A57570(arg0);
    arg0[1].focus.pos.z = func_80A5764C;
}

void func_80A5764C(Actor *arg0, GlobalContext *arg1) {
    ? sp48;
    ? sp3C;
    f32 sp34;
    Actor *sp2C;
    Actor *temp_a0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    arg0->speedXZ = 6.1f;
    if (arg0->unk_18C != 0) {
        if (((temp_v0[8].targetArrowOffset & 0x100) == 0) && (Player_GetMask(arg1) != 0x10) && (Actor_IsActorFacingLink(arg0, 0x3000) != 0)) {
            arg0->unk_18C = 0U;
        }
    } else if (((temp_v0[8].targetArrowOffset & 0x100) != 0) || (Player_GetMask(arg1) == 0x10)) {
        arg0->unk_18C = 1U;
    }
    temp_a0 = &arg0[1];
    sp2C = temp_a0;
    if (func_801378B8((SkelAnime *) temp_a0, 0.0f) != 0) {
        temp_v0_2 = arg0[1].focus.rot.y;
        if (temp_v0_2 != 0) {
            arg0[1].focus.rot.y = temp_v0_2 - 1;
        }
        Audio_PlayActorSound2(arg0, 0x3828U);
    }
    temp_v0_3 = arg0[1].focus.rot.z;
    if (temp_v0_3 != 0) {
        arg0[1].focus.rot.z = temp_v0_3 - 1;
    }
    if ((arg0[1].focus.rot.z == 0) && (arg0->params == 0)) {
        arg0[1].focus.rot.z = 0x1E;
    }
    func_80A57118(arg0, arg1);
    sp34 = Rand_ZeroOne();
    arg0[1].prevPos.z = Math_SinS((s16) (s32) (((Rand_ZeroOne() * 512.0f) + 12288.0f) * (f32) arg0[1].focus.rot.z)) * (5.0f + (sp34 * 3.0f));
    if (arg0->params == 0) {
        func_80A56EB8(arg0, &D_80A584A8, &sp48);
        func_80A56EB8(arg0, &D_80A584B4, &sp3C);
        func_800A81F0(Effect_GetParams(arg0->unk_260), (Vec3f *) &sp48, (Vec3f *) &sp3C);
        func_80A56EB8(arg0, &D_80A584C0, &sp3C);
        func_800A81F0(Effect_GetParams((s32) arg0[1].parent), (Vec3f *) &sp48, (Vec3f *) &sp3C);
        goto block_22;
    }
    if ((arg0->floorPoly != 0) && ((arg1->gameplayFrames & 3) == 0)) {
        func_800B1210(arg1, (Vec3f *) &arg0->world, &D_80A584CC, &D_801D15B0, (s16) 0x226, (s16) 0x32);
block_22:
    }
    if ((arg0->floorPoly == 0) && (func_801378B8((SkelAnime *) sp2C, 0.0f) != 0)) {
        func_80A56F68(arg0, arg1);
    }
    if ((arg0[1].focus.rot.y == 0) && (Rand_ZeroOne() < 0.05f)) {
        Audio_PlayActorSound2(arg0, 0x3855U);
        arg0[1].focus.rot.y = 5;
    }
    func_800B9010(arg0, 0x3056U);
    func_80A57570(arg0);
}

void func_80A57918(EnRat *arg0) {
    arg0->actor.world.rot.y = arg0->actor.yawTowardsPlayer + 0x8000;
    arg0->actor.speedXZ = 5.0f;
    arg0->actor.velocity.y = 8.0f;
    arg0->actor.gravity = -1.0f;
    func_80A57570();
    arg0->unk_188 = func_80A57984;
    arg0->actor.bgCheckFlags &= 0xFFE6;
}

void func_80A57984(Actor *arg0, Vec3f *arg1) {
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->shape.rot.x += -0x700;
    arg0 = temp_a3;
    Math_StepToF(temp_a3 + 0xC4, 1700.0f, 170.0f);
    arg0[1].focus.rot.z += -1;
    if (arg0[1].focus.rot.z == 0) {
        arg0[1].focus.rot.z = 0x1E;
    }
    if ((arg0->bgCheckFlags & 0x19) != 0) {
        func_80A57A08(arg0, arg1);
    }
}

void func_80A57A08(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_v0;

    temp_v0 = Actor_Spawn(arg1 + 0x1CA0, arg1, 9, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
    if (temp_v0 != 0) {
        temp_v0->unk_1F0 = 0;
    }
    if (arg0->params == 1) {
        Item_DropCollectibleRandom(arg1, arg0, arg0 + 0x24, 0x100);
    }
    arg0[1].focus.pos.z = (bitwise f32) func_80A57A9C;
    arg0->speedXZ = 0.0f;
}

void func_80A57A9C(Actor *arg0, ? arg1) {
    if (arg0->params == 1) {
        func_80A57180();
        return;
    }
    Actor_MarkForDeath(arg0);
}

void EnRat_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp2C;
    void (*sp28)(EnRat *, GlobalContext *);
    ColliderSphere *temp_a2_2;
    CollisionCheckContext *temp_a1;
    s16 temp_v0_4;
    u8 temp_a2;
    u8 temp_t3;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v1;
    void (*temp_v1_2)(EnRat *, GlobalContext *);
    EnRat *this = (EnRat *) thisx;

    this->unk_18D = 0;
    if (this->unk_192 == 0) {
        SkelAnime_FrameUpdateMatrix(&this->unk_144);
    }
    temp_v0 = this->unk_268.base.atFlags;
    temp_t3 = temp_v0 & 0xFFFD;
    if ((temp_v0 & 2) != 0) {
        this->unk_268.base.atFlags = temp_t3;
        this->unk_268.base.acFlags &= 0xFFFD;
        this->unk_268.base.ocFlags1 &= 0xFFFD;
        if ((temp_t3 & 4) != 0) {
            func_80A57918(this);
            goto block_23;
        }
        func_80A57A08((Actor *) this, (Vec3f *) globalCtx);
        return;
    }
    temp_v1 = this->unk_268.base.acFlags;
    if ((temp_v1 & 2) != 0) {
        temp_v0_2 = this->actor.colChkInfo.damageEffect;
        this->unk_268.base.acFlags = temp_v1 & 0xFFFD;
        if (temp_v0_2 == 0xF) {
            this->unk_192 = -2;
            goto block_14;
        }
        if (temp_v0_2 == 1) {
            Audio_PlayActorSound2((Actor *) this, 0x389EU);
            func_800BCB70((Actor *) this, 0, 0x78, 0, (s16) 0x28);
            if (func_80A57984 == this->unk_188) {
                this->actor.speedXZ = 0.0f;
                if (this->actor.velocity.y > 0.0f) {
                    this->actor.velocity.y = 0.0f;
                }
            } else {
                this->unk_192 = 0x28;
            }
block_14:
            goto block_23;
        }
        func_80A57A08((Actor *) this, (Vec3f *) globalCtx);
        return;
    }
    temp_a2 = this->unk_268.base.ocFlags1;
    if ((((temp_a2 & 2) != 0) && ((temp_v0_3 = this->unk_268.base.oc->category, (temp_v0_3 == 5)) || (temp_v0_3 == 9) || (temp_v0_3 == 2))) || ((func_80A5764C == this->unk_188) && (this->unk_190 == 0))) {
        this->unk_268.base.ocFlags1 = temp_a2 & 0xFFFD;
        func_80A57A08((Actor *) this, (Vec3f *) globalCtx, temp_a2);
        return;
    }
block_23:
    this->unk_188(this, globalCtx);
    temp_v1_2 = this->unk_188;
    if ((func_80A57A9C != temp_v1_2) && (sp28 = func_80A5723C, (func_80A5723C != temp_v1_2))) {
        temp_v0_4 = this->unk_192;
        if ((s32) temp_v0_4 > 0) {
            this->unk_192 = temp_v0_4 - 1;
            goto block_44;
        }
        if ((s32) temp_v0_4 < 0) {
            if (temp_v0_4 == -2) {
                this->unk_192 = -1;
                goto block_44;
            }
            if ((this->actor.flags & 0x2000) != 0x2000) {
                func_80A57A08((Actor *) this, (Vec3f *) globalCtx);
                return;
            }
            goto block_44;
        }
        if (func_80A57984 != temp_v1_2) {
            if (this->actor.floorBgId != 0x32) {
                func_80A57010((Actor *) this, globalCtx);
            }
            if (this->unk_18C == 0) {
                func_80A566E0((Actor *) this);
            }
            if ((func_80A574E8 != this->unk_188) && (func_80A56AFC((Actor *) this, (Vec3f *) globalCtx) == 0)) {
                func_80A57A08((Actor *) this, (Vec3f *) globalCtx);
                return;
            }
            if (this->unk_18D != 0) {
                func_80A5665C(this);
                this->actor.shape.rot.x = (s16) -(s32) this->actor.world.rot.x;
                this->actor.shape.rot.y = this->actor.world.rot.y;
                this->actor.shape.rot.z = this->actor.world.rot.z;
            }
            Actor_SetVelocityAndMoveXYRotation((Actor *) this);
            this->actor.floorHeight = this->actor.world.pos.y;
            goto block_44;
        }
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 30.0f, 60.0f, 7U);
block_44:
        if (func_800C9E88(&globalCtx->colCtx, this->actor.floorPoly, (s32) this->actor.floorBgId) != 0) {
            func_80A57A08((Actor *) this, (Vec3f *) globalCtx);
            return;
        }
        this->unk_268.dim.worldSphere.center.x = (s16) (s32) (this->actor.world.pos.x + (this->unk_218 * 10.0f));
        this->unk_268.dim.worldSphere.center.y = (s16) (s32) (this->actor.world.pos.y + (this->unk_21C * 10.0f));
        this->unk_268.dim.worldSphere.center.z = (s16) (s32) (this->actor.world.pos.z + (this->unk_220 * 10.0f));
        if (sp28 != this->unk_188) {
            if (this->unk_192 == 0) {
                CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_268);
            }
            temp_a2_2 = &this->unk_268;
            temp_a1 = &globalCtx->colChkCtx;
            sp2C = temp_a1;
            sp28 = (void (*)(EnRat *, GlobalContext *)) temp_a2_2;
            CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2_2);
            CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_a2_2);
        }
        Actor_SetHeight((Actor *) this, this->actor.shape.yOffset * 0.015f);
        /* Duplicate return node #51. Try simplifying control flow for better match */
    }
}

s32 func_80A57F10(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg1 == 1) {
        arg3->y -= arg5->unk_25C;
    }
    if (arg1 == 5) {
        *arg2 = NULL;
    }
    return 0;
}

void func_80A57F4C(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    MtxF *sp7C;
    s32 sp68;
    u32 sp34;
    void *sp30;
    Actor *sp2C;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s2;
    MtxF *temp_t0;
    f32 temp_f8;
    s16 temp_v0_8;
    s32 temp_a2;
    u32 temp_a0;
    Actor *phi_a1;
    MtxF *phi_t0;
    void *phi_t1;
    u32 phi_a3;
    s32 phi_a2;
    f32 phi_f0;

    if (arg1 == 5) {
        temp_s2 = *arg0;
        SysMatrix_NormalizeXYZ(arg0 + 0x187FC);
        SysMatrix_GetStateTranslation(arg4 + 0x230);
        arg4[1].projectedPos.y += 15.0f;
        temp_t0 = SysMatrix_GetCurrentState();
        if (func_80A5764C == arg4[1].focus.pos.z) {
            temp_v0 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0 + 8;
            temp_v0->words.w1 = -0x6901;
            temp_v0->words.w0 = 0xFA000000;
            temp_v0_2 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_2 + 8;
            temp_v0_2->words.w1 = 0xFF000000;
            temp_v0_2->words.w0 = 0xFB000000;
            sp7C = temp_t0;
            Matrix_Scale(45.0f, 45.0f, 45.0f, 1);
            phi_a1 = arg4;
            phi_t0 = temp_t0;
            phi_t1 = arg0 + 0x18000;
            phi_a3 = (u32) &D_04037850;
            phi_a2 = 0;
            do {
                phi_t0->mf[3][0] = arg4[1].projectedPos.x + phi_a1[1].projectedW;
                phi_t0->mf[3][1] = arg4[1].projectedPos.y + phi_a1[1].uncullZoneForward;
                phi_t0->mf[3][2] = arg4[1].projectedPos.z + phi_a1[1].uncullZoneScale;
                temp_v0_3 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_3 + 8;
                temp_v0_3->words.w0 = 0xDA380003;
                sp30 = phi_t1;
                sp7C = phi_t0;
                sp34 = phi_a3;
                sp68 = phi_a2;
                sp2C = phi_a1;
                temp_v0_3->words.w1 = Matrix_NewMtx(*arg0);
                temp_v0_4 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = &temp_v0_4[1];
                temp_v0_4->words.w0 = 0xDB060020;
                temp_a2 = phi_a2 + 1;
                temp_v0_4->words.w1 = (u32) D_80A58454[(phi_t1->unk_840 + phi_a2) & 3];
                temp_v0_5 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = &temp_v0_5[1];
                temp_v0_5->words.w1 = phi_a3;
                temp_v0_5->words.w0 = 0xDE000000;
                phi_a1 += 0xC;
                phi_a2 = temp_a2;
            } while (temp_a2 != 2);
            sp7C = phi_t0;
            Matrix_Scale(0.022222223f, 0.022222223f, 0.022222223f, 1);
            phi_t0->mf[3][0] = arg4[1].projectedPos.x;
            phi_t0->mf[3][1] = arg4[1].projectedPos.y - 15.0f;
            phi_t0->mf[3][2] = arg4[1].projectedPos.z;
        }
        temp_v0_6 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v0_6[1];
        temp_v0_6->words.w0 = 0xDA380003;
        temp_v0_6->words.w1 = Matrix_NewMtx(*arg0);
        temp_v0_7 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v0_7[1];
        temp_v0_7->words.w0 = 0xDE000000;
        temp_v0_7->words.w1 = (u32) &D_04015FA0;
        if (arg4->params == 0) {
            phi_f0 = cos_rad((f32) arg4[1].focus.rot.z * 0.10471976f);
        } else {
            temp_v0_8 = arg4[1].focus.rot.z;
            if ((s32) temp_v0_8 >= 0x78) {
                phi_f0 = cos_rad((f32) ((s32) temp_v0_8 % 0x1E) * 0.10471976f);
            } else if ((s32) temp_v0_8 >= 0x1E) {
                phi_f0 = cos_rad((f32) ((s32) temp_v0_8 % 6) * 0.5235988f);
            } else {
                phi_f0 = cos_rad((f32) ((s32) temp_v0_8 % 3) * 1.0471976f);
            }
        }
        temp_v0_9 = temp_s2->polyOpa.p;
        temp_f8 = (1.0f - fabsf(phi_f0)) * 255.0f;
        temp_s2->polyOpa.p = &temp_v0_9[1];
        temp_v0_9->words.w0 = 0xFB000000;
        temp_a0 = ((s32) temp_f8 << 0x18) | 0x2800 | 0xFF;
        temp_v0_9->words.w1 = temp_a0;
        temp_v0_10 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v0_10[1];
        temp_v0_10->words.w1 = temp_a0;
        temp_v0_10->words.w0 = 0xFA000000;
        SysMatrix_InsertRotation(0x4000, 0, 0, 1);
        temp_v0_11 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v0_11[1];
        temp_v0_11->words.w0 = 0xDA380003;
        temp_v0_11->words.w1 = Matrix_NewMtx(*arg0);
        temp_v0_12 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = &temp_v0_12[1];
        temp_v0_12->words.w0 = 0xDE000000;
        temp_v0_12->words.w1 = (u32) &D_04015DB0;
    }
}

void EnRat_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnRat *this = (EnRat *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    func_8012C974(globalCtx->state.gfxCtx);
    func_800B8050((Actor *) this, globalCtx, 0);
    SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80A57F10, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80A57F4C, (Actor *) this);
}
