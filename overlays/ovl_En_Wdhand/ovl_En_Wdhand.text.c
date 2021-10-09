typedef struct EnWdhand {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x188 */ Vec3s unk188;                       /* inferred */
    /* 0x18E */ char pad18E[0x2A];                  /* maybe part of unk188[8]? */
    /* 0x1B8 */ Vec3s unk1B8;                       /* inferred */
    /* 0x1BE */ char pad1BE[0x2A];                  /* maybe part of unk1B8[8]? */
    /* 0x1E8 */ void (*actionFunc)(EnWdhand *, GlobalContext *);
    /* 0x1EC */ s16 unk1EC;                         /* inferred */
    /* 0x1EE */ s16 unk1EE;                         /* inferred */
    /* 0x1F0 */ s16 unk1F0;                         /* inferred */
    /* 0x1F2 */ s16 unk1F2;                         /* inferred */
    /* 0x1F4 */ s16 unk1F4;                         /* inferred */
    /* 0x1F6 */ s16 unk1F6;                         /* inferred */
    /* 0x1F8 */ char pad1F8[0x14];                  /* maybe part of unk1F6[11]? */
    /* 0x20C */ f32 unk20C;                         /* inferred */
    /* 0x210 */ char pad210[0xC];                   /* maybe part of unk20C[4]? */
    /* 0x21C */ MtxF unk21C;                        /* inferred */
    /* 0x25C */ Vec3f unk25C;                       /* inferred */
    /* 0x268 */ Vec3f unk268;                       /* inferred */
    /* 0x274 */ ColliderJntSph unk274;              /* inferred */
    /* 0x294 */ ColliderJntSphElement unk294;       /* inferred */
    /* 0x2D4 */ char pad2D4[0x180];                 /* maybe part of unk294[7]? */
} EnWdhand;                                         /* size = 0x454 */

struct _mips2c_stack_EnWdhand_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnWdhand_Draw {
    /* 0x00 */ char pad0[0x80];
    /* 0x80 */ GraphicsContext *sp80;               /* inferred */
    /* 0x84 */ char pad84[0x4];
    /* 0x88 */ s32 sp88;                            /* inferred */
    /* 0x8C */ char pad8C[0x4];
    /* 0x90 */ ? sp90;                              /* inferred */
    /* 0x90 */ char pad90[0x10];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_EnWdhand_Init {
    /* 0x00 */ char pad0[0x4C];
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad4C[0x4];
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad58[0x8];
};                                                  /* size = 0x60 */

struct _mips2c_stack_EnWdhand_Update {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AF4608 {};              /* size 0x0 */

struct _mips2c_stack_func_80AF4670 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ ? sp18;                              /* inferred */
    /* 0x18 */ char pad18[0xC];
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AF46F0 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad20[0x4];
    /* 0x24 */ MtxF *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AF488C {};              /* size 0x0 */

struct _mips2c_stack_func_80AF48D0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF4964 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AF4A88 {
    /* 0x00 */ char pad0[0x4C];
    /* 0x4C */ s16 sp4C;                            /* inferred */
    /* 0x4E */ s16 sp4E;                            /* inferred */
    /* 0x50 */ char pad50[0x4];                     /* maybe part of sp4E[3]? */
    /* 0x54 */ void *sp54;                          /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80AF4C18 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF4C64 {
    /* 0x00 */ char pad0[0x68];
    /* 0x68 */ s16 sp68;                            /* inferred */
    /* 0x6A */ s16 sp6A;                            /* inferred */
    /* 0x6C */ char pad6C[0x8];                     /* maybe part of sp6A[5]? */
    /* 0x74 */ void *sp74;                          /* inferred */
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_80AF4ED0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF4F30 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF4F6C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AF4FF8 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AF5130 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AF520C {
    /* 0x00 */ char pad0[0x58];
    /* 0x58 */ SkelAnime *sp58;                     /* inferred */
    /* 0x5C */ char pad5C[0xC];                     /* maybe part of sp58[4]? */
    /* 0x68 */ ? sp68;                              /* inferred */
    /* 0x68 */ char pad68[0x14];
    /* 0x7C */ void *sp7C;                          /* inferred */
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80AF5650 {};              /* size 0x0 */

struct _mips2c_stack_func_80AF56A0 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AF5820 {
    /* 0x00 */ char pad0[0x70];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad7C[0x18];                    /* maybe part of sp78[7]? */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ char padAC[0x4];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_80AF5E3C {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AF5FE4 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

? EffectSsDtBubble_SpawnColorProfile(?, f32 *, ? *, ? *, s32, s32, s32, s32); /* extern */
void func_80AF4608(EnWdhand *arg0, ? *arg1);        /* static */
void func_80AF4670(Actor *arg0, void *arg1, s16 *arg2, s16 *arg3); /* static */
void func_80AF46F0(Actor *arg0, s32 arg1, s32 arg2, ? *arg3); /* static */
void func_80AF488C(void *arg0, PosRot *arg1);       /* static */
s16 func_80AF48D0(EnWdhand *arg0, s32 arg1);        /* static */
void func_80AF4964(EnWdhand *arg0);                 /* static */
void func_80AF4A88(EnWdhand *arg0, void *arg1);     /* static */
void func_80AF4C18(EnWdhand *arg0);                 /* static */
void func_80AF4C64(Actor *arg0, void *arg1);        /* static */
void func_80AF4ED0(Actor *arg0);                    /* static */
void func_80AF4F30(Actor *arg0, ? arg1);            /* static */
void func_80AF4F6C(Actor *arg0);                    /* static */
void func_80AF4FF8(EnWdhand *arg0, ? arg1);         /* static */
void func_80AF5130(Actor *arg0, void *arg1);        /* static */
void func_80AF520C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80AF5650(Actor *arg0, s16 arg1);           /* static */
void func_80AF56A0(Actor *arg0);                    /* static */
void func_80AF5820(Actor *arg0, ? arg1);            /* static */
void func_80AF5E3C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AF5FE4(Actor *arg0, s32 arg1, ? *arg2); /* static */
extern AnimationHeader D_060000F4;
extern AnimationHeader D_06000364;
extern AnimationHeader D_06000534;
extern AnimationHeader D_06000854;
extern ? D_060014C0;
extern ? D_060015B0;
extern FlexSkeletonHeader D_06001E20;
static ColliderJntSphElementInit D_80AF63E0[7] = {
    {
        {1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0x19, 1, 1},
        {0x32, {{0, 0x23F, 0}, 0xA}, 0x64},
    },
    {
        {1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0x19, 1, 1},
        {0x32, {{0, 0x6BD, 0}, 0xA}, 0x64},
    },
    {
        {1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0x19, 1, 1},
        {0x32, {{0, 0x23F, 0}, 0xA}, 0x64},
    },
    {
        {1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0x19, 1, 1},
        {0x32, {{0, 0x6BD, 0}, 0xA}, 0x64},
    },
    {
        {1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0x19, 1, 1},
        {0x32, {{0, 0x23F, 0}, 0xA}, 0x64},
    },
    {
        {1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0x19, 1, 1},
        {0x32, {{0, 0x6BD, 0}, 0xA}, 0x64},
    },
    {
        {1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0x19, 1, 1},
        {0x32, {{0, 0x3E8, 0}, 0xF}, 0x64},
    },
};
static ColliderJntSphInit D_80AF64DC = {{0, 0x10, 9, 0x39, 0x10, 0}, 7, &D_80AF63E0};
static CollisionCheckInfoInit D_80AF64EC = {1, 0x19, 0x19, 0xFE};
static DamageTable D_80AF64F4 = {
    {
        0,
        0,
        0,
        1,
        1,
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
        1,
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
        1,
    },
};
static ? D_80AF6514;                                /* unable to generate initializer */
static f32 D_80AF6518 = 0.0f;
static ? D_80AF6520;                                /* unable to generate initializer */

void EnWdhand_Init(EnWdhand *this, GlobalContext *globalCtx) {
    ? sp4C;
    EnWdhand *temp_v0_2;
    MtxF *temp_s0;
    s32 temp_s0_2;
    s32 temp_v1;
    void *temp_v0;
    s32 phi_s0;
    EnWdhand *phi_v0;
    s32 phi_v1;
    EnWdhand *this = (EnWdhand *) thisx;

    SkelAnime_InitSV(globalCtx, &this->unk144, &D_06001E20, &D_06000854, &this->unk188, &this->unk1B8, 8);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_80AF64F4, &D_80AF64EC);
    SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
    Matrix_RotateY(this->actor.shape.rot.y, 1U);
    SysMatrix_InsertXRotation_s(this->actor.shape.rot.x, 1);
    SysMatrix_InsertZRotation_s(this->actor.shape.rot.z, 1);
    SysMatrix_GetStateTranslationAndScaledY(3.0f, &this->unk268);
    temp_s0 = &this->unk21C;
    Matrix_MtxFCopy(temp_s0, SysMatrix_GetCurrentState());
    func_8018219C(temp_s0, (Vec3s *) &this->actor.shape, 0);
    SysMatrix_TransposeXYZ(temp_s0);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    func_80AF4608(this, &sp4C);
    this->actor.speedXZ = sp54;
    this->actor.velocity.y = sp50;
    this->actor.velocity.x = Math_SinS(this->actor.world.rot.y) * this->actor.speedXZ;
    this->actor.velocity.z = Math_CosS(this->actor.world.rot.y) * this->actor.speedXZ;
    Collider_InitAndSetJntSph(globalCtx, &this->unk274, (Actor *) this, &D_80AF64DC, &this->unk294);
    phi_s0 = 0;
    do {
        temp_v0 = this->unk274.elements + phi_s0;
        temp_v0->unk36 = (s16) temp_v0->unk2E;
        func_80AF488C(temp_v0 + 0x30, &this->actor.world);
        temp_s0_2 = phi_s0 + 0x40;
        phi_s0 = temp_s0_2;
    } while (temp_s0_2 < 0x1C0);
    phi_v0 = this;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 1;
        temp_v0_2 = phi_v0 + 4;
        temp_v0_2->unk20C = 1.0f;
        phi_v0 = temp_v0_2;
        phi_v1 = temp_v1;
    } while (temp_v1 != 3);
    this->unk1EC = -1;
    this->unk1EE = 0;
    this->actor.world.rot.x = 0;
    this->actor.world.rot.z = Math_FAtan2F(this->unk21C.mf[2][1], this->unk21C.mf[0][1]);
    this->actor.hintId = 0xA;
    func_80AF4964(this);
}

void EnWdhand_Destroy(EnWdhand *this, GlobalContext *globalCtx) {
    EnWdhand *this = (EnWdhand *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk274);
}

void func_80AF4608(EnWdhand *arg0, ? *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v0;
    s32 phi_v0_2;

    temp_v0 = arg0->actor.params & 0x7F;
    phi_v0 = temp_v0;
    if (temp_v0 == 0x7F) {
        phi_v0 = 0x28;
    }
    arg1->unk4 = (f32) ((f32) phi_v0 * 0.2f);
    temp_v0_2 = ((s32) arg0->actor.params >> 7) & 0x7F;
    phi_v0_2 = temp_v0_2;
    if (temp_v0_2 == 0x7F) {
        phi_v0_2 = 0x28;
    }
    arg1->unk0 = 0.0f;
    arg1->unk8 = (f32) ((f32) phi_v0_2 * 0.2f);
}

void func_80AF4670(Actor *arg0, void *arg1, s16 *arg2, s16 *arg3) {
    ? sp24;
    ? sp18;

    Math_Vec3f_Diff(arg1 + 0xC10, arg0 + 0x24, (Vec3f *) &sp24);
    SysMatrix_SetCurrentState(arg0 + 0x21C);
    SysMatrix_MultiplyVector3fByState((Vec3f *) &sp24, (Vec3f *) &sp18);
    *arg3 = Actor_YawToPoint(arg0, (Vec3f *) &sp18);
    *arg2 = Actor_PitchToPoint(arg0, (Vec3f *) &sp18) + 0x4000;
}

void func_80AF46F0(Actor *arg0, s32 arg1, s32 arg2, ? *arg3) {
    MtxF *sp24;
    void *sp1C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    void *temp_v1;
    f32 phi_f12;

    sp24 = SysMatrix_GetCurrentState();
    temp_v1 = arg0 + (arg1 * 6);
    sp1C = temp_v1;
    SysMatrix_InsertRotation(temp_v1->unk1F2, temp_v1->unk1F4, 0, 1);
    if (arg2 != 0) {
        Matrix_RotateY((s16) ((s32) temp_v1->unk1F4 * -1), 1U);
    }
    if (arg1 == 3) {
        temp_f0 = arg0->unk20C;
        if (temp_f0 > 1.0f) {
            if (temp_f0 > 1.5f) {
                phi_f12 = 1.5f;
            } else {
                phi_f12 = temp_f0;
            }
            Matrix_Scale(phi_f12, phi_f12, phi_f12, 1);
        }
    } else {
        temp_f2 = (arg0 + (arg1 * 4))->unk210;
        if ((temp_f2 < 1.0f) || (arg0->unk20C > 1.0f)) {
            temp_f0_2 = arg0->unk20C;
            if (temp_f2 < 0.1f) {
                Matrix_Scale(0.0f, temp_f2 * temp_f0_2, 0.0f, 1);
            } else {
                Matrix_Scale(1.0f, temp_f2 * temp_f0_2, 1.0f, 1);
            }
        }
    }
    sp24->mf[3][0] = arg3->unk0;
    sp24->mf[3][1] = arg3->unk4;
    sp24->mf[3][2] = arg3->unk8;
}

void func_80AF488C(void *arg0, PosRot *arg1) {
    arg0->unk0 = (s16) (s32) arg1->pos.x;
    arg0->unk2 = (s16) (s32) arg1->pos.y;
    arg0->unk4 = (s16) (s32) arg1->pos.z;
}

s16 func_80AF48D0(EnWdhand *arg0, s32 arg1) {
    return (s16) (s32) (sin_rad((f32) (arg0->unk1F0 - (arg1 * 0x14)) * 0.07853982f) * (f32) (arg0 + (arg1 * 6))->unk1F6);
}

void func_80AF4964(EnWdhand *arg0) {
    EnWdhand *temp_s1_2;
    EnWdhand *temp_s1_3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    void *temp_s1;
    void *phi_s1;
    s32 phi_s0;
    EnWdhand *phi_s1_2;
    s32 phi_s0_2;
    s32 phi_s0_3;
    EnWdhand *phi_s1_3;

    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x144, &D_06000854, -5.0f);
    if (func_80AF4FF8 != arg0->actionFunc) {
        arg0->unk1F0 = 0x50;
        arg0->unk1F4 = (s16) (Rand_Next() >> 0x10);
        phi_s1 = arg0 + 6;
        phi_s0 = 1;
        do {
            temp_s0 = phi_s0 + 1;
            temp_s1 = phi_s1 + 6;
            temp_s1->unk1EE = (s16) ((s32) Rand_ZeroFloat(8192.0f) + phi_s1->unk1EE + 0x8000);
            phi_s1 = temp_s1;
            phi_s0 = temp_s0;
        } while (temp_s0 < 4);
        phi_s1_2 = arg0;
        phi_s0_2 = 0;
        do {
            temp_s0_2 = phi_s0_2 + 1;
            temp_s1_2 = phi_s1_2 + 6;
            temp_s1_2->unk1F0 = Rand_S16Offset(0x1800, 0x1000);
            phi_s1_2 = temp_s1_2;
            phi_s0_2 = temp_s0_2;
        } while (temp_s0_2 != 4);
    }
    phi_s0_3 = 0;
    phi_s1_3 = arg0;
    do {
        temp_s0_3 = phi_s0_3 + 1;
        temp_s1_3 = phi_s1_3 + 6;
        temp_s1_3->unk1EC = func_80AF48D0(arg0, phi_s0_3);
        phi_s0_3 = temp_s0_3;
        phi_s1_3 = temp_s1_3;
    } while (temp_s0_3 != 4);
    arg0->actionFunc = func_80AF4A88;
    arg0->unk20C = 1.0f;
}

void func_80AF4A88(EnWdhand *arg0, GlobalContext *arg1) {
    void *sp54;
    s16 sp4E;
    s16 sp4C;
    s32 temp_s1;
    s32 phi_s1;
    EnWdhand *phi_s0;
    s32 phi_s2;
    s32 phi_v0;

    sp54 = arg1->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    arg0->unk1F0 += -1;
    phi_s1 = 0;
    phi_s0 = arg0;
    phi_s2 = 0;
    do {
        phi_s0->unk1F2 = func_80AF48D0(arg0, phi_s1);
        if (phi_s2 == arg0->unk1F0) {
            if (phi_s1 != 0) {
                phi_s0->unk1F4 = (s32) randPlusMinusPoint5Scaled(16384.0f) + phi_s0->unk1EE;
                phi_s0->unk1F4 += -0x8000;
            } else {
                arg0->unk1F4 += (s32) randPlusMinusPoint5Scaled(16384.0f);
            }
            phi_s0->unk1F6 = Rand_S16Offset(0x1800, 0x1000);
        }
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
        phi_s0 += 6;
        phi_s2 += 0x14;
    } while (temp_s1 != 4);
    if (arg0->unk1F0 == 0) {
        arg0->unk1F0 = 0x50;
    }
    if (((sp54->unkA70 & 0x80) == 0) && (arg0->actor.xyzDistToPlayerSq < 14580.5625f)) {
        func_80AF4670((Actor *) arg0, sp54, &sp4E, &sp4C);
        phi_v0 = (s32) sp4E;
        if ((s32) sp4E < 0) {
            phi_v0 = -(s32) sp4E;
        }
        if (phi_v0 < 0x4001) {
            func_80AF4C18(arg0);
        }
    }
}

void func_80AF4C18(EnWdhand *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_06000534, -5.0f);
    arg0->unk1F0 = 5;
    arg0->actionFunc = func_80AF4C64;
}

void func_80AF4C64(Actor *arg0, GlobalContext *arg1) {
    Actor *sp74;
    s16 sp6A;
    s16 sp68;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s1;
    u8 temp_v0_2;
    Actor *phi_s4;
    s32 phi_v1;
    s16 *phi_s2;
    s32 phi_s1;
    s16 *phi_s3;
    s32 phi_s0;
    s32 phi_v0;
    u8 phi_t1;
    s32 phi_s0_2;

    sp74 = arg1->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    temp_v1 = arg0->unk1F0;
    phi_s0_2 = 1;
    if ((s32) temp_v1 > 0) {
        arg0->unk1F0 = (s16) (temp_v1 - 1);
        if (arg0->unk1F0 == 0) {
            phi_t1 = arg0->unk284 | 1;
            goto block_16;
        }
    } else {
        Math_StepToF(arg0 + 0x20C, 1.5f, 0.05f);
        func_80AF4670(arg0, sp74, &sp6A, &sp68);
        phi_s4 = arg0;
        phi_s2 = arg0 + 0x1F2;
        phi_s1 = 0;
        phi_s3 = arg0 + 0x1F4;
        do {
            temp_v0 = sp68 - phi_s4->unk1F4;
            phi_v1 = (s32) temp_v0;
            if ((s32) temp_v0 < 0) {
                phi_v1 = -(s32) temp_v0;
            }
            if (phi_v1 < 0x4000) {
                temp_s0 = phi_s0_2 & Math_ScaledStepToS(phi_s2, sp6A, (s16) (s32) ((((f32) phi_s1 * 0.1f) + 1.0f) * 1920.0f));
                phi_s0 = temp_s0;
                phi_v0 = Math_ScaledStepToS(phi_s3, sp68, 0x800);
            } else {
                temp_s0_2 = phi_s0_2 & Math_ScaledStepToS(phi_s2, (s16) ((s32) sp6A * -1), (s16) (s32) ((((f32) phi_s1 * 0.1f) + 1.0f) * 1920.0f));
                phi_s0 = temp_s0_2;
                phi_v0 = Math_ScaledStepToS(phi_s3, (s16) (sp68 + 0x8000), 0x800);
            }
            temp_s0_3 = phi_s0 & phi_v0;
            temp_s1 = phi_s1 + 1;
            phi_s4 += 6;
            phi_s2 += 6;
            phi_s1 = temp_s1;
            phi_s3 += 6;
            phi_s0_2 = temp_s0_3;
        } while (temp_s1 != 4);
        if (((arg0->unk284 & 2) != 0) && (arg1->grabPlayer(arg1, sp74) != 0)) {
            func_80AF5130(arg0, arg1);
        } else if (temp_s0_3 != 0) {
            func_80AF4ED0(arg0);
        }
        temp_v0_2 = arg0->unk284;
        phi_t1 = temp_v0_2 & 0xFFFD;
        if ((temp_v0_2 & 2) != 0) {
block_16:
            arg0->unk284 = phi_t1;
        }
    }
}

void func_80AF4ED0(Actor *arg0) {
    SkelAnime *temp_a0;
    u8 temp_t8;
    u8 temp_t9;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_060000F4);
    temp_t8 = arg0->unk284 & 0xFFFE;
    temp_t9 = temp_t8 & 0xFFFD;
    arg0->unk284 = temp_t8;
    arg0->unk284 = temp_t9;
    arg0->unk1E8 = func_80AF4F30;
    arg0->unk20C = 1.5f;
}

void func_80AF4F30(Actor *arg0, ? arg1) {
    if (SkelAnime_FrameUpdateMatrix(arg0 + 0x144) != 0) {
        func_80AF4F6C(arg0);
    }
}

void func_80AF4F6C(Actor *arg0) {
    Actor *temp_s1;
    s32 temp_s0;
    Actor *phi_s1;
    s32 phi_s0;

    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x144, &D_06000854, -10.0f);
    phi_s1 = arg0;
    phi_s0 = 0;
    do {
        temp_s0 = phi_s0 + 1;
        temp_s1 = phi_s1 + 6;
        temp_s1->unk1F0 = Rand_S16Offset(0x1800, 0x1000);
        phi_s1 = temp_s1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 4);
    arg0->unk1F0 = 0x50;
    arg0->unk1E8 = func_80AF4FF8;
}

void func_80AF4FF8(EnWdhand *arg0, ? arg1) {
    s32 temp_s0;
    s32 temp_s5;
    void *temp_s1;
    s32 phi_s0;
    s16 *phi_s2;
    s32 phi_s3;
    void *phi_s1;
    s32 phi_s5;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    arg0->unk1F0 += -1;
    temp_s1 = arg0 + 6;
    phi_s0 = 1;
    phi_s2 = temp_s1 + 0x1F2;
    phi_s3 = 0x14;
    phi_s1 = temp_s1;
    phi_s5 = Math_ScaledStepToS(&arg0->unk1F2, func_80AF48D0(arg0, 0), 0x200);
    do {
        temp_s5 = phi_s5 & Math_ScaledStepToS(phi_s2, func_80AF48D0(arg0, phi_s0), 0x300);
        phi_s5 = temp_s5;
        if (phi_s3 == arg0->unk1F0) {
            phi_s1->unk1F6 = Rand_S16Offset(0x1800, 0x1000);
        }
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
        phi_s2 += 6;
        phi_s3 += 0x14;
        phi_s1 += 6;
    } while (temp_s0 != 4);
    if (arg0->unk1F0 == 0) {
        arg0->unk1F0 = 0x50;
        arg0->unk1F6 = Rand_S16Offset(0x1800, 0x1000);
    }
    Math_StepToF(&arg0->unk20C, 1.0f, 0.05f);
    if (temp_s5 != 0) {
        func_80AF4964(arg0);
    }
}

void func_80AF5130(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    Actor *temp_s1;
    s32 temp_s0;
    u8 temp_t9;
    Actor *phi_s1;
    s32 phi_s0;

    sp2C = arg1->actorCtx.actorList[2].first;
    temp_t9 = arg0->unk284 & ~1;
    arg0->unk284 = temp_t9;
    arg0->unk284 = (u8) (temp_t9 & 0xFFFD);
    arg0->unk286 = (u8) (arg0->unk286 & ~1);
    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_060000F4);
    phi_s1 = arg0;
    phi_s0 = 0;
    do {
        temp_s0 = phi_s0 + 1;
        temp_s1 = phi_s1 + 6;
        temp_s1->unk1F0 = Rand_S16Offset(0x2000, 0x1000);
        phi_s1 = temp_s1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 4);
    arg0->unk1F0 = 0x50;
    sp2C->parent = arg0;
    SysMatrix_TransposeXYZ(arg0 + 0x21C);
    arg0->unk20C = 1.5f;
    Audio_PlayActorSound2(arg0, 0x39FCU);
    arg0->unk1E8 = func_80AF520C;
}

void func_80AF520C(Actor *arg0, GlobalContext *arg1) {
    void *sp7C;
    ? sp68;
    SkelAnime *sp58;
    MtxF *temp_s3_2;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_s1;
    s32 temp_s3;
    s16 phi_s2;
    Actor *phi_s0;
    s32 phi_s3;
    s32 phi_s1;
    f32 phi_f2;

    temp_a0 = arg0 + 0x144;
    sp58 = temp_a0;
    sp7C = arg1->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    arg0->unk1F0 = (s16) (arg0->unk1F0 - 1);
    sp7C->unkAE8 = 0;
    phi_s2 = arg0->unk1F0;
    phi_s0 = arg0;
    phi_s3 = 0;
    do {
        if ((s32) arg0->unk1F0 < 0x4C) {
            phi_s0->unk1F2 = (s16) (s32) (sin_rad((f32) phi_s2 * 0.3926991f) * (f32) phi_s0->unk1F6);
        } else {
            Math_ScaledStepToS(phi_s0 + 0x1F2, (s16) (s32) (sin_rad((f32) phi_s2 * 0.3926991f) * (f32) phi_s0->unk1F6), 0x400);
        }
        if ((phi_s2 & 0xF) == 0) {
            if (phi_s2 == 0x10) {
                phi_s0->unk1F4 = 0;
            } else if (phi_s3 != 0) {
                phi_s0->unk1F4 = (s16) ((s32) randPlusMinusPoint5Scaled(12288.0f) + phi_s0->unk1EE);
            } else {
                arg0->unk1F4 = (s16) (arg0->unk1F4 + (s32) randPlusMinusPoint5Scaled(12288.0f));
            }
            phi_s0->unk1F6 = Rand_S16Offset(0x2000, 0x1000);
        }
        temp_s3 = phi_s3 + 6;
        phi_s2 += 2;
        phi_s0 += 6;
        phi_s3 = temp_s3;
    } while (temp_s3 < 0x18);
    temp_v1 = arg0->unk1F0;
    if ((s32) temp_v1 < 4) {
        Math_StepToF(arg0 + 0x20C, 1.5f, 0.125f);
        goto block_16;
    }
    if ((s32) temp_v1 < 0x10) {
        Math_StepToF(arg0 + 0x20C, 2.0f, 0.041666668f);
block_16:
    }
    if ((s32) arg0->unk1F0 == 0) {
        arg0->unk286 = (u8) (arg0->unk286 | 1);
        func_80AF4F6C(arg0);
        return;
    }
    temp_s3_2 = arg0 + 0x21C;
    if ((s32) arg0->unk1F0 >= 4) {
        SysMatrix_SetCurrentState(temp_s3_2);
        Matrix_Scale(0.01f, 0.01f, 0.01f, 1);
        SysMatrix_GetStateTranslationAndScaledY(300.0f, (Vec3f *) &sp68);
        phi_s1 = 0;
        do {
            SysMatrix_StatePush();
            func_80AF46F0(arg0, phi_s1, 0, &sp68);
            SysMatrix_GetStateTranslationAndScaledY(2300.0f, (Vec3f *) &sp68);
            SysMatrix_StatePop();
            temp_s1 = phi_s1 + 1;
            phi_s1 = temp_s1;
        } while (temp_s1 != 3);
        func_80AF46F0(arg0, 3, 1, &sp68);
        func_8018219C(SysMatrix_GetCurrentState(), sp7C + 0xBC, 0);
        temp_f0 = arg0->unk20C;
        if (temp_f0 > 1.0f) {
            if (temp_f0 > 1.5f) {
                phi_f2 = 1.5f;
            } else {
                phi_f2 = temp_f0;
            }
            SysMatrix_InsertZRotation_s((s16) (s32) ((phi_f2 - 1.0f) * -32768.0f), 1);
        }
        SysMatrix_GetStateTranslationAndScaledY(1000.0f, sp7C + 0x24);
        temp_v1_2 = arg0->unk1F0;
        if ((temp_v1_2 == 4) && (arg0 == sp7C->parent)) {
            sp7C->unkAE8 = 0x64;
            sp7C->parent = NULL;
            SysMatrix_TransposeXYZ(temp_s3_2);
            sp7C->shape.rot.x = 0;
            sp7C->shape.rot.z = 0;
            sp7C->world.pos.x += 2.0f * arg0->velocity.x;
            sp7C->world.pos.y += 2.0f * arg0->velocity.y;
            sp7C->world.pos.z += 2.0f * arg0->velocity.z;
            func_800B8D50(arg1, arg0, arg0->speedXZ, arg0->world.rot.y, arg0->velocity.y, 0U);
            Audio_PlayActorSound2(arg0, 0x39FDU);
            return;
        }
        if (temp_v1_2 == 2) {
            SkelAnime_ChangeAnimDefaultStop(sp58, &D_06000364);
        }
        /* Duplicate return node #32. Try simplifying control flow for better match */
    }
}

s32 func_80AF5650(Actor *arg0, s16 arg1) {
    void *temp_v1;

    temp_v1 = arg0 + (arg1 * 4);
    temp_v1->unk210 = (f32) (temp_v1->unk210 - 0.1f);
    if (temp_v1->unk210 <= 0.05f) {
        temp_v1->unk210 = 0.05f;
        return 1;
    }
    return 0;
}

void func_80AF56A0(Actor *arg0) {
    Vec3f *temp_s1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_t7;
    void *phi_v0;
    s32 phi_s0;
    s32 phi_s0_2;
    s32 phi_s0_3;

    temp_t7 = arg0->flags & ~1;
    arg0->flags = temp_t7;
    arg0->flags = temp_t7 | 0x10;
    phi_v0 = arg0->unk290;
    phi_s0 = 0;
    phi_s0_3 = 0;
loop_1:
    phi_s0_2 = phi_s0;
    if ((phi_v0->unk16 & 2) == 0) {
        temp_s0 = phi_s0 + 1;
        phi_v0 += 0x40;
        phi_s0 = temp_s0;
        phi_s0_2 = temp_s0;
        if (temp_s0 < 7) {
            goto loop_1;
        }
    }
    arg0->unk1EE = (s16) ((s32) ((s32) (phi_s0_2 + 1) / 2) % 4);
    arg0->unk1EC = (s16) (arg0->unk1EE - 1);
    SysMatrix_SetCurrentState(arg0 + 0x21C);
    Matrix_Scale(0.01f, 0.01f, 0.01f, 1);
    temp_s1 = arg0 + 0x268;
    SysMatrix_GetStateTranslationAndScaledY(300.0f, temp_s1);
    if ((s32) arg0->unk1EE > 0) {
        do {
            SysMatrix_StatePush();
            func_80AF46F0(arg0, phi_s0_3, 0, (? *) temp_s1);
            SysMatrix_GetStateTranslationAndScaledY(2300.0f, temp_s1);
            SysMatrix_StatePop();
            temp_s0_2 = phi_s0_3 + 1;
            phi_s0_3 = temp_s0_2;
        } while (temp_s0_2 < (s32) arg0->unk1EE);
    }
    arg0->velocity.y = 2.45f;
    arg0->velocity.x = 2.0f * Math_SinS(arg0->world.rot.z);
    arg0->velocity.z = 2.0f * Math_CosS(arg0->world.rot.z);
    arg0->unk1F0 = 5;
    arg0->unk1E8 = func_80AF5820;
}

void func_80AF5820(Actor *arg0, ? arg1) {
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp94;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    Vec3f *temp_s1;
    f32 *temp_s3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f16;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_a1_3;
    s16 temp_s0_6;
    s32 temp_s0_7;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s5;
    s32 temp_s7;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    s32 phi_s3;
    s32 phi_s2;
    s32 phi_a1;
    Actor *phi_a3;
    void *phi_s1;
    s32 phi_s2_2;
    s32 phi_s7;
    f32 *phi_s1_2;
    s32 phi_s0;
    Actor *phi_a3_2;

    temp_s0 = arg0->unk290;
    temp_s0_2 = temp_s0 + 0x1B0;
    spA0 = (arg0->unk268 - (f32) temp_s0->unk1B0) * 0.5f;
    temp_f10 = (arg0->unk26C - (f32) temp_s0_2->unk2) * 0.5f;
    spA4 = temp_f10;
    temp_f16 = arg0->unk270;
    arg0 = arg0;
    spA8 = (temp_f16 - (f32) temp_s0_2->unk4) * 0.5f;
    SysMatrix_InsertXRotation_s(0x100, 0);
    SysMatrix_MultiplyVector3fByState((Vec3f *) &spA0, (Vec3f *) &sp94);
    temp_s1 = arg0 + 0x268;
    temp_s1->x = spA0 + sp94 + (f32) temp_s0_2->unk0;
    temp_s1->y = temp_f10 + sp98 + (f32) temp_s0_2->unk2;
    temp_s1->z = spA8 + sp9C + (f32) temp_s0_2->unk4;
    temp_f0 = arg0->velocity.y;
    if (temp_f0 > -2.0f) {
        arg0->velocity.y = temp_f0 + -0.15f;
    }
    Math_Vec3f_Sum(temp_s1, arg0 + 0x64, temp_s1);
    temp_a1 = arg0->unk1EC;
    arg0->world.rot.x += 0x100;
    if (((s32) temp_a1 >= 0) && (func_80AF5650(arg0, temp_a1) != 0)) {
        arg0->unk1EC = (s16) (arg0->unk1EC - 1);
    }
    temp_a1_2 = arg0->unk1EE;
    if ((s32) temp_a1_2 < 3) {
        if (func_80AF5650(arg0, temp_a1_2) != 0) {
            arg0->unk1EE = (s16) (arg0->unk1EE + 1);
        }
        SysMatrix_InsertRotation(arg0->world.rot.x, arg0->world.rot.z, 0, 0);
        Matrix_RotateY((s16) ((s32) arg0->world.rot.z * -1), 1U);
        SysMatrix_InsertMatrix(arg0 + 0x21C, 1);
        func_80AF46F0(arg0, (s32) temp_a1_2, 0, (? *) temp_s1);
        SysMatrix_GetStateTranslationAndScaledY(2.3f / (arg0 + (temp_a1_2 * 4))->unk210, temp_s1);
    }
    temp_a1_3 = arg0->unk1EC;
    arg0->unk1F0 = (s16) (arg0->unk1F0 - 1);
    temp_s5 = temp_a1_3 + 1;
    phi_s3 = (s32) arg0->unk1F0;
    phi_s2 = 0;
    phi_a1 = (s32) temp_a1_3;
    phi_a3 = arg0;
    phi_s2_2 = 0;
    if (temp_s5 > 0) {
        do {
            if ((s32) arg0->unk1F0 > 0) {
                temp_s0_3 = arg0 + (phi_s2 * 6);
                Math_ScaledStepToS(temp_s0_3 + 0x1F2, (s16) (s32) (sin_rad((f32) phi_s3 * 0.8975979f) * (f32) temp_s0_3->unk1F6), 0x200);
            } else if (Rand_ZeroOne() < 0.65f) {
                temp_s0_4 = arg0 + (phi_s2 * 6);
                temp_s0_4->unk1F2 = (s16) (s32) (sin_rad((f32) phi_s3 * 0.8975979f) * (f32) temp_s0_4->unk1F6);
            }
            if ((phi_s3 % 7) == 0) {
                temp_s0_5 = arg0 + (phi_s2 * 6);
                if (phi_s2 != 0) {
                    temp_s0_5->unk1F4 = (s16) ((s32) randPlusMinusPoint5Scaled(12288.0f) + temp_s0_5->unk1EE);
                } else {
                    arg0->unk1F4 = (s16) (arg0->unk1F4 + (s32) randPlusMinusPoint5Scaled(12288.0f));
                }
                temp_s0_5->unk1F6 = Rand_S16Offset((s16) ((phi_s2 << 8) + 0xC00), 0x800);
            }
            temp_s2 = phi_s2 + 1;
            phi_s3 += 2;
            phi_s2 = temp_s2;
        } while (temp_s2 != temp_s5);
        phi_a1 = (s32) arg0->unk1EC;
        phi_a3 = arg0;
    }
    phi_a3_2 = phi_a3;
    if ((phi_a1 < 0) && ((s32) phi_a3->unk1EE >= 3)) {
        if (Math_StepToF(phi_a3 + 0x58, 0.0f, 0.001f) != 0) {
            temp_s3 = &sp70;
            phi_s1 = arg0 + 0x25C;
            phi_s7 = 0;
            do {
loop_27:
                D_80AF6518 = Rand_ZeroOne() + 1.0f;
                temp_s0_6 = Rand_S16Offset(0x28, 0x28);
                sp70 = randPlusMinusPoint5Scaled(12.0f) + phi_s1->unk0;
                sp74 = randPlusMinusPoint5Scaled(12.0f) + phi_s1->unk4;
                sp78 = randPlusMinusPoint5Scaled(12.0f) + phi_s1->unk8;
                EffectSsDtBubble_SpawnColorProfile(arg1, temp_s3, &D_80AF6514, &D_80AF6520, (s32) temp_s0_6, 0x19, 2, 1);
                temp_s2_2 = phi_s2_2 + 1;
                phi_s2_2 = temp_s2_2;
                if (temp_s2_2 != 5) {
                    goto loop_27;
                }
                temp_s7 = phi_s7 + 0xC;
                phi_s1 += 0xC;
                phi_s7 = temp_s7;
            } while (temp_s7 != 0x18);
            Actor_MarkForDeath(arg0);
        } else {
            temp_f0_2 = arg0->scale.x;
            arg0->scale.y = temp_f0_2;
            arg0->scale.z = temp_f0_2;
        }
        phi_a3_2 = arg0;
    }
    phi_s1_2 = phi_a3_2 + 0x25C;
    phi_s0 = 0;
    do {
        D_80AF6518 = Rand_ZeroOne() + 1.0f;
        EffectSsDtBubble_SpawnColorProfile(arg1, phi_s1_2, &D_80AF6514, &D_80AF6520, Rand_S16Offset(0x28, 0x28), 0x19, 2, 1);
        temp_s0_7 = phi_s0 + 0xC;
        phi_s1_2 += 0xC;
        phi_s0 = temp_s0_7;
    } while (temp_s0_7 != 0x18);
}

void func_80AF5E3C(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    u8 temp_a2;
    u8 temp_t9;
    void *temp_v0;

    temp_a2 = arg0->unk285;
    temp_t9 = temp_a2 & ~1;
    if ((temp_a2 & 2) != 0) {
        temp_v0 = arg1->actorCtx.actorList[2].first;
        arg0->unk285 = temp_t9;
        arg0->unk285 = (u8) (temp_t9 & 0xFFFD);
        arg0->unk284 = (u8) (arg0->unk284 & ~1);
        arg0->unk286 = (u8) (arg0->unk286 & ~1);
        sp2C = temp_v0;
        func_800BE2B8(arg0, arg0 + 0x274);
        Enemy_StartFinishingBlow(arg1, arg0);
        if (((temp_v0->unkA70 & 0x80) != 0) && (arg0 == temp_v0->parent)) {
            temp_v0->unkAE8 = 0x64;
            temp_v0->parent = NULL;
            temp_v0->shape.rot.x = 0;
            temp_v0->shape.rot.z = 0;
            func_800B8D50(arg1, arg0, arg0->speedXZ, arg0->world.rot.y, arg0->velocity.y, 0U);
        } else {
            SysMatrix_TransposeXYZ(arg0 + 0x21C);
        }
        func_80AF56A0(arg0);
    }
}

void EnWdhand_Update(EnWdhand *this, GlobalContext *globalCtx) {
    EnWdhand *this = (EnWdhand *) thisx;
    func_80AF5E3C((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    if ((this->unk274.base.atFlags & 1) != 0) {
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk274);
    }
    if ((this->unk274.base.acFlags & 1) != 0) {
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk274);
    }
    if ((this->unk274.base.ocFlags1 & 1) != 0) {
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk274);
    }
}

void func_80AF5FE4(Actor *arg0, s32 arg1, ? *arg2) {
    s32 sp24;
    s32 temp_v0;

    func_80AF46F0(arg0, arg1, 1, arg2);
    SysMatrix_GetStateTranslationAndScaledY(575.0f, (Vec3f *) arg2);
    temp_v0 = arg1 << 7;
    sp24 = temp_v0;
    func_80AF488C(arg0->unk290 + temp_v0 + 0x30, (PosRot *) arg2);
    SysMatrix_GetStateTranslationAndScaledY(1725.0f, (Vec3f *) arg2);
    func_80AF488C(arg0->unk290 + sp24 + 0x70, (PosRot *) arg2);
    SysMatrix_GetStateTranslationAndScaledY(2300.0f, (Vec3f *) arg2);
}

void EnWdhand_Draw(EnWdhand *this, GlobalContext *globalCtx) {
    ? sp90;
    s32 sp88;
    GraphicsContext *sp80;
    Gfx *temp_s2;
    Gfx *temp_s2_2;
    Gfx *temp_s2_4;
    Gfx *temp_s2_6;
    GraphicsContext *temp_v0;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_a0;
    s16 temp_s1_2;
    s32 temp_s1;
    s32 temp_s1_3;
    s32 temp_v0_2;
    void *temp_s2_3;
    void *temp_s2_5;
    s32 phi_s1;
    Gfx *phi_s2;
    s32 phi_s1_2;
    Gfx *phi_s2_2;
    f32 phi_f2;
    Gfx *phi_s2_3;
    Gfx *phi_s2_4;
    EnWdhand *this = (EnWdhand *) thisx;

    temp_v0 = globalCtx->state.gfxCtx;
    temp_s2 = temp_v0->polyOpa.p;
    temp_s2->words.w1 = (u32) (sSetupDL + 0x4B0);
    temp_s2->words.w0 = 0xDE000000;
    temp_s2->unk8 = 0xDA380003;
    sp80 = temp_v0;
    temp_s2->unkC = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_s2->unk14 = &D_060014C0;
    temp_s2->unk10 = 0xDE000000U;
    SysMatrix_GetStateTranslationAndScaledY(300.0f, (Vec3f *) &sp90);
    temp_s2_2 = temp_s2 + 0x18;
    temp_v0_2 = this->unk1EC + 1;
    phi_s1 = 0;
    phi_s2 = temp_s2_2;
    phi_s2_4 = temp_s2_2;
    if (temp_v0_2 > 0) {
        sp88 = temp_v0_2;
        do {
            SysMatrix_StatePush();
            func_80AF5FE4((Actor *) this, phi_s1, &sp90);
            phi_s2->words.w0 = 0xDA380003;
            temp_s2_3 = phi_s2 + 8;
            phi_s2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_s2_3->unk0 = 0xDE000000U;
            temp_s2_3->unk4 = &D_060015B0;
            temp_s2_4 = temp_s2_3 + 8;
            SysMatrix_StatePop();
            temp_s1 = phi_s1 + 1;
            phi_s1 = temp_s1;
            phi_s2 = temp_s2_4;
            phi_s2_4 = temp_s2_4;
        } while (temp_s1 != sp88);
    }
    Math_Vec3f_Copy(&this->unk25C, (Vec3f *) &sp90);
    Math_Vec3f_Copy((Vec3f *) &sp90, &this->unk268);
    temp_a0 = this->actor.world.rot.x;
    phi_s2_2 = phi_s2_4;
    phi_s2_3 = phi_s2_4;
    if (temp_a0 != 0) {
        SysMatrix_InsertRotation(temp_a0, this->actor.world.rot.z, 0, 0);
        Matrix_RotateY((s16) ((s32) this->actor.world.rot.z * -1), 1U);
        SysMatrix_InsertMatrix(&this->unk21C, 1);
        Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, 1);
    }
    temp_s1_2 = this->unk1EE;
    phi_s1_2 = (s32) temp_s1_2;
    if ((s32) temp_s1_2 < 3) {
        do {
            SysMatrix_StatePush();
            func_80AF5FE4((Actor *) this, phi_s1_2, &sp90);
            phi_s2_2->words.w0 = 0xDA380003;
            temp_s2_5 = phi_s2_2 + 8;
            phi_s2_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_s2_5->unk0 = 0xDE000000U;
            temp_s2_5->unk4 = &D_060015B0;
            temp_s2_6 = temp_s2_5 + 8;
            SysMatrix_StatePop();
            temp_s1_3 = phi_s1_2 + 1;
            phi_s1_2 = temp_s1_3;
            phi_s2_2 = temp_s2_6;
            phi_s2_3 = temp_s2_6;
        } while (temp_s1_3 < 3);
    }
    func_80AF46F0((Actor *) this, 3, 1, &sp90);
    temp_f0 = this->unk20C;
    if (temp_f0 > 1.0f) {
        if (temp_f0 > 1.5f) {
            phi_f2 = 1.5f;
        } else {
            phi_f2 = temp_f0;
        }
        SysMatrix_InsertZRotation_s((s16) (s32) ((phi_f2 - 1.0f) * -32768.0f), 1);
    }
    temp_f0_2 = this->actor.scale.x;
    if (temp_f0_2 < 0.01f) {
        SysMatrix_InsertTranslation(0.0f, (10.0f / temp_f0_2) - 1000.0f, 0.0f, 1);
    }
    Math_Vec3f_Copy((Vec3f *) &this->actor.focus, (Vec3f *) &sp90);
    SysMatrix_GetStateTranslationAndScaledY(1000.0f, (Vec3f *) &sp90);
    func_80AF488C(this->unk274.elements + 0x1B0, (PosRot *) &sp90);
    sp80->polyOpa.p = phi_s2_3;
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, NULL, NULL, (Actor *) this);
}
