typedef struct EnNeoReeba {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ ColliderCylinder unk_188;           /* inferred */
    /* 0x1D4 */ Vec3s unk_1D4;                      /* inferred */
    /* 0x1DA */ char pad_1DA[0x66];                 /* maybe part of unk_1D4[18]? */
    /* 0x240 */ Vec3s unk_240;                      /* inferred */
    /* 0x246 */ char pad_246[0x66];                 /* maybe part of unk_240[18]? */
    /* 0x2AC */ void (*actionFunc)(EnNeoReeba *, GlobalContext *);
    /* 0x2B0 */ f32 unk_2B0;                        /* inferred */
    /* 0x2B4 */ f32 unk_2B4;                        /* inferred */
    /* 0x2B8 */ f32 unk_2B8;                        /* inferred */
    /* 0x2BC */ f32 unk_2BC;                        /* inferred */
    /* 0x2C0 */ f32 unk_2C0;                        /* inferred */
    /* 0x2C4 */ f32 unk_2C4;                        /* inferred */
    /* 0x2C8 */ char pad_2C8[0x30];                 /* maybe part of unk_2C4[13]? */
    /* 0x2F8 */ f32 unk_2F8;                        /* inferred */
    /* 0x2FC */ f32 unk_2FC;                        /* inferred */
    /* 0x300 */ char pad_300[0x8];                  /* maybe part of unk_2FC[3]? */
    /* 0x308 */ s16 unk_308;                        /* inferred */
    /* 0x30A */ s16 unk_30A;                        /* inferred */
    /* 0x30C */ s16 unk_30C;                        /* inferred */
    /* 0x30E */ s16 unk_30E;                        /* inferred */
    /* 0x310 */ u8 unk_310;                         /* inferred */
    /* 0x311 */ char pad_311[0x3];                  /* maybe part of unk_310[4]? */
} EnNeoReeba;                                       /* size = 0x314 */

struct _mips2c_stack_EnNeoReeba_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnNeoReeba_Draw {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnNeoReeba_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ ColliderCylinder *sp30;              /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnNeoReeba_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B7CA34 {};              /* size 0x0 */

struct _mips2c_stack_func_80B7CA70 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B7CB3C {};              /* size 0x0 */

struct _mips2c_stack_func_80B7CB88 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B7CCE0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7CD28 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B7CE34 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7CE94 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B7CFA0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7CFFC {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B7D130 {};              /* size 0x0 */

struct _mips2c_stack_func_80B7D150 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x8];                    /* maybe part of sp20[3]? */
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B7D254 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7D2E4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7D360 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7D398 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7D3EC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7D47C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7D4FC {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B7D5A4 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B7D6D0 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B7D788 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B7D9B8 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ CollisionCheckContext *sp28;         /* inferred */
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B7DC80 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B7DD7C {
    /* 0x00 */ char pad_0[0x50];
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x8];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80B7DF34 {
    /* 0x00 */ char pad_0[0x50];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80B7E0BC {
    /* 0x00 */ char pad_0[0x8C];
    /* 0x8C */ Vec3f *sp8C;                         /* inferred */
    /* 0x90 */ char pad_90[0x14];                   /* maybe part of sp8C[6]? */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_80B7E260 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7E378 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_80B7CA34(EnNeoReeba *arg0);               /* static */
void func_80B7CA70(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B7CB3C(Actor *arg0, Actor *, f32);      /* static */
void func_80B7CB88(Actor *arg0, void *arg1);        /* static */
void func_80B7CCE0(f32 arg0, Actor *);              /* static */
void func_80B7CD28(EnNeoReeba *arg0, GlobalContext *arg1); /* static */
void func_80B7CE34(Actor *arg0);                    /* static */
void func_80B7CE94(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B7CFA0(Actor *arg0);                    /* static */
void func_80B7CFFC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B7D130(f32 arg0, f32, Actor *);         /* static */
void func_80B7D150(Actor *arg0, void *arg1);        /* static */
void func_80B7D254(Actor *arg0);                    /* static */
void func_80B7D2E4(Actor *arg0, ? arg1);            /* static */
void func_80B7D360(Actor *arg0);                    /* static */
void func_80B7D398(void *arg0, ? arg1);             /* static */
void func_80B7D3EC(Actor *arg0);                    /* static */
void func_80B7D47C(void *arg0);                     /* static */
void func_80B7D4FC(Actor *arg0, Actor *);           /* static */
void func_80B7D5A4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B7D6D0(Actor *arg0);                    /* static */
void func_80B7D788(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B7D9B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B7DC80(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B7DD7C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B7DF34(EnNeoReeba *arg0, GlobalContext *arg1); /* static */
void func_80B7E0BC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B7E260(EnNeoReeba *arg0, GlobalContext *arg1); /* static */
s32 func_80B7E378(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
extern AnimationHeader D_060001E4;
extern SkeletonHeader D_06001EE8;
static DamageTable D_80B7E500 = {
    {
        0,
        0xE1,
        0xF1,
        0xF1,
        0xE1,
        0xE1,
        0xF1,
        0xC0,
        0xF1,
        0xF1,
        0xF1,
        0x22,
        0x32,
        0x42,
        0xF1,
        0x10,
        0xE1,
        0xF2,
        0,
        0xD0,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static ColliderCylinderInit D_80B7E520 = {
    {5, 0x11, 9, 0x39, 0x10, 1},
    {0, {0xF7CFFFFF, 8, 4}, {0xF7CFFFFF, 0, 0}, 1, 5, 1},
    {0x12, 0x1E, 0, {0, 0, 0}},
};
static ? D_80B7E54C;                                /* unable to generate initializer */
static ? D_80B7E578;                                /* unable to generate initializer */
static Vec3f D_80B7E5A4 = {0.0f, 0.0f, 0.0f};
static Vec3f D_80B7E5B0 = {0.0f, 4.0f, 0.0f};
static Color_RGBA8 D_80B7E5BC = {0xAA, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80B7E5C0 = {0xC8, 0xC8, 0xFF, 0xFF};
static Vec3f D_80B7E5C4 = {0.0f, -1.0f, 0.0f};

void EnNeoReeba_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a1;
    EnNeoReeba *this = (EnNeoReeba *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 0.0f);
    SkelAnime_Init(globalCtx, &this->unk_144, &D_06001EE8, &D_060001E4, &this->unk_1D4, &this->unk_240, 0x12);
    if ((this->actor.params & 0x8000) == 0) {
        Actor_SetScale((Actor *) this, 0.04f);
        this->actor.colChkInfo.mass = 0x5A;
        this->actor.colChkInfo.health = 1;
    } else {
        Actor_SetScale((Actor *) this, 0.05f);
        this->actor.colChkInfo.mass = 0xB4;
        this->actor.colChkInfo.health = 3;
    }
    this->actor.colChkInfo.damageTable = &D_80B7E500;
    this->actor.targetMode = 2;
    this->actor.hintId = 0x47;
    this->actor.gravity = -0.5f;
    temp_a1 = &this->unk_188;
    this->unk_2B0 = D_801D15B0.x;
    this->unk_2B4 = D_801D15B0.y;
    this->unk_2B8 = D_801D15B0.z;
    this->unk_2BC = D_801D15B0.x;
    this->unk_2C0 = D_801D15B0.y;
    this->unk_308 = 0;
    this->unk_30C = 0;
    this->unk_30E = 0;
    this->unk_30A = 0;
    this->unk_2F8 = 0.0f;
    this->unk_2FC = 0.0f;
    this->unk_2C4 = D_801D15B0.z;
    sp30 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80B7E520);
    func_80B7CA34(this);
}

void EnNeoReeba_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnNeoReeba *this = (EnNeoReeba *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_188);
}

void func_80B7CA34(EnNeoReeba *arg0) {
    arg0->actor.flags &= -2;
    arg0->actor.draw = NULL;
    arg0->unk_30A = 0xA;
    arg0->actionFunc = func_80B7CA70;
    arg0->actor.shape.yOffset = -2000.0f;
}

void func_80B7CA70(Actor *arg0, GlobalContext *arg1) {
    Vec3f *sp24;
    Vec3f *temp_a1;
    s16 temp_v0;

    temp_a1 = arg0 + 8;
    sp24 = temp_a1;
    if ((Actor_XZDistanceToPoint(arg1->actorCtx.actorList[2].first, temp_a1) < 200.0f) && (Player_GetMask(arg1) != 0x10) && (fabsf(arg0->yDistToPlayer) < 100.0f)) {
        func_80B7CE34(arg0);
    }
    temp_v0 = arg0->unk_30A;
    if (temp_v0 == 0) {
        arg0->world.pos.x = sp24->x;
        arg0->world.pos.y = sp24->y;
        arg0->unk_30A = -1;
        arg0->world.pos.z = sp24->z;
        return;
    }
    arg0->unk_30A = (s16) (temp_v0 - 1);
}

void func_80B7CB3C(Actor *arg0) {
    arg0->shape.yOffset = 0.0f;
    if (func_80B7CFFC == arg0->unk_2AC) {
        arg0->unk_30A = 0x14;
    } else {
        arg0->unk_30A = 0xA;
    }
    arg0->unk_2AC = func_80B7CB88;
    arg0->unk_160 = 1.0f;
}

void func_80B7CB88(Actor *arg0, void *arg1) {
    Actor *temp_s1;
    f32 temp_f0;
    f32 temp_f2;

    temp_s1 = arg1->unk_1CCC;
    temp_f0 = Actor_XZDistanceToPoint(temp_s1, arg0 + 8);
    if ((temp_f0 > 200.0f) || (temp_f2 = fabsf(arg0->yDistToPlayer), (temp_f2 > 100.0f))) {
        func_80B7CCE0(temp_f0, arg0);
        goto block_8;
    }
    if (arg0->unk_30A == 0) {
        if ((temp_f0 < 140.0f) && (temp_f2 < 100.0f)) {
            arg0->unk_2B0 = (f32) temp_s1->world.pos.x;
            arg0->unk_2B4 = (f32) temp_s1->world.pos.y;
            arg0->unk_2B8 = (f32) temp_s1->world.pos.z;
            arg0->unk_2B0 = (f32) (arg0->unk_2B0 + (10.0f * temp_s1->speedXZ * Math_SinS(temp_s1->world.rot.y)));
            arg0->unk_2B8 = (f32) (arg0->unk_2B8 + (10.0f * temp_s1->speedXZ * Math_CosS(temp_s1->world.rot.y)));
            func_80B7CFA0(arg0);
        } else {
            func_80B7D130(temp_f0, 100.0f, arg0);
        }
block_8:
    }
    if (arg0->unk_30A != 0) {
        arg0->unk_30A = (s16) (arg0->unk_30A - 1);
    }
}

void func_80B7CCE0(Actor *arg0) {
    arg0->unk_2F8 = 0.0f;
    arg0->unk_160 = 2.0f;
    Audio_PlayActorSound2(arg0, 0x3987U);
    arg0->unk_2AC = func_80B7CD28;
}

void func_80B7CD28(EnNeoReeba *arg0, GlobalContext *arg1) {
    f32 temp_f0;

    if (Math_SmoothStepToF(arg0 + 0xC4, -2000.0f, 0.5f, arg0->unk_2F8, 10.0f) == 0.0f) {
        func_80B7CA34(arg0);
    } else if ((arg1->gameplayFrames & 3) == 0) {
        func_800BBDAC(arg1, (Actor *) arg0, (Vec3f *) &arg0->actor.world, arg0->actor.shape.shadowScale, 1, 8.0f, (s16) 0x1F4, (s16) 0xA, (u8) 1);
    }
    temp_f0 = arg0->unk_2F8;
    if (temp_f0 < 300.0f) {
        arg0->unk_2F8 = temp_f0 + 20.0f;
    }
    Math_ApproachF(&arg0->actor.shape.shadowScale, 0.0f, 1.0f, 1.0f);
}

void func_80B7CE34(Actor *arg0) {
    arg0->draw = EnNeoReeba_Draw;
    arg0->unk_2F8 = 300.0f;
    arg0->unk_160 = 2.0f;
    Audio_PlayActorSound2(arg0, 0x3986U);
    arg0->unk_2AC = func_80B7CE94;
    arg0->flags |= 1;
}

void func_80B7CE94(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;

    if (Math_SmoothStepToF(arg0 + 0xC4, 0.0f, 0.5f, arg0->unk_2F8, 10.0f) == 0.0f) {
        func_80B7CB3C(arg0);
    } else if ((arg1->gameplayFrames & 3) == 0) {
        func_800BBDAC(arg1, arg0, arg0 + 0x24, arg0->shape.shadowScale, 1, 8.0f, (s16) 0x1F4, (s16) 0xA, (u8) 1);
    }
    temp_f0 = arg0->unk_2F8;
    if (temp_f0 > 20.0f) {
        arg0->unk_2F8 = (f32) (temp_f0 - 10.0f);
    }
    Math_ApproachF(&arg0->shape.shadowScale, 12.0f, 1.0f, 1.0f);
}

void func_80B7CFA0(Actor *arg0) {
    Audio_PlayActorSound2(arg0, 0x398AU);
    arg0->unk_30C = 0xA;
    arg0->unk_30A = 0x3C;
    arg0->unk_2AC = func_80B7CFFC;
    arg0->unk_160 = 2.0f;
    arg0->speedXZ = 14.0f;
}

void func_80B7CFFC(Actor *arg0, GlobalContext *arg1) {
    f32 sp3C;
    Vec3f *sp38;
    Vec3f *temp_a0;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;

    temp_a0 = arg0 + 0x24;
    sp38 = temp_a0;
    sp3C = Math_Vec3f_StepToXZ(temp_a0, arg0 + 0x2B0, arg0->speedXZ);
    func_800BBDAC(arg1, arg0, sp38, arg0->shape.shadowScale, 1, 4.0f, (s16) 0xFA, (s16) 0xA, (u8) 1);
    if (sp3C < 2.0f) {
        func_80B7CB3C((bitwise Actor *) 2.0f, arg0);
    } else if (sp3C < 40.0f) {
        temp_f0 = arg0->speedXZ;
        if (temp_f0 > 3.0f) {
            arg0->speedXZ = temp_f0 - 2.0f;
        }
    }
    temp_v0 = arg0->unk_30C;
    if (temp_v0 == 0) {
        Audio_PlayActorSound2(arg0, 0x398AU);
        arg0->unk_30C = 0xA;
    } else {
        arg0->unk_30C = (s16) (temp_v0 - 1);
    }
    temp_v0_2 = arg0->unk_30A;
    if (temp_v0_2 == 0) {
        func_80B7CB3C(arg0);
        return;
    }
    arg0->unk_30A = (s16) (temp_v0_2 - 1);
}

void func_80B7D130(void *arg0) {
    arg0->unk_2AC = func_80B7D150;
    arg0->unk_70 = 6.0f;
}

void func_80B7D150(Actor *arg0, void *arg1) {
    Actor *sp2C;
    Vec3f *sp20;
    Vec3f *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;

    temp_a1 = arg0 + 8;
    sp2C = arg1->unk_1CCC;
    sp20 = temp_a1;
    temp_f0 = Math_Vec3f_StepToXZ(arg0 + 0x24, temp_a1, arg0->speedXZ);
    if (temp_f0 < 2.0f) {
        func_80B7CB3C(arg0);
    } else if (temp_f0 < 40.0f) {
        temp_f0_2 = arg0->speedXZ;
        if (temp_f0_2 > 3.0f) {
            arg0->speedXZ = temp_f0_2 - 1.0f;
        }
    }
    if ((Actor_XZDistanceToPoint(sp2C, sp20) > 200.0f) || (fabsf(arg0->yDistToPlayer) > 100.0f)) {
        func_80B7CCE0((bitwise f32) arg0);
    }
}

void func_80B7D254(Actor *arg0) {
    f32 temp_f6;
    s16 temp_a0;

    arg0->unk_2B0 = (f32) arg0->world.pos.x;
    arg0->unk_30A = 0x3C;
    temp_a0 = arg0->yawTowardsPlayer;
    arg0->unk_2B4 = (s32) arg0->world.pos.y;
    arg0->unk_2B8 = (f32) arg0->world.pos.z;
    arg0 = arg0;
    arg0->unk_2B0 = (f32) (arg0->unk_2B0 - (20.0f * Math_SinS(temp_a0)));
    temp_f6 = 20.0f * Math_CosS(arg0->yawTowardsPlayer);
    arg0->unk_2AC = func_80B7D2E4;
    arg0->unk_2B8 = (f32) (arg0->unk_2B8 - temp_f6);
}

void func_80B7D2E4(Actor *arg0, ? arg1) {
    Actor *temp_a0;
    Actor *temp_a3;
    f32 temp_a2;
    s16 temp_v0;

    temp_a3 = arg0;
    temp_a2 = temp_a3->speedXZ;
    arg0 = temp_a3;
    temp_a0 = arg0;
    if (Math_Vec3f_StepToXZ(temp_a3 + 0x24, temp_a3 + 0x2B0, temp_a2) < 2.0f) {
        arg0 = arg0;
        func_80B7CB3C(temp_a0);
    }
    temp_v0 = arg0->unk_30A;
    if (temp_v0 == 0) {
        func_80B7CB3C(arg0);
        return;
    }
    arg0->unk_30A = (s16) (temp_v0 - 1);
}

void func_80B7D360(Actor *arg0) {
    Audio_PlayActorSound2(arg0, 0x389EU);
    arg0->unk_2AC = func_80B7D398;
}

void func_80B7D398(void *arg0, ? arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk_30E;
    if ((s32) temp_v0 > 0) {
        arg0->unk_30E = (s16) (temp_v0 - 1);
    } else {
        arg0->unk_300 = 0.0f;
        arg0->unk_304 = 0.0f;
    }
    if (arg0->unk_11C == 0) {
        arg0->unk_30E = 0;
        func_80B7CB3C();
    }
}

void func_80B7D3EC(Actor *arg0) {
    arg0->unk_310 = 0xB;
    arg0->unk_304 = 0.5f;
    arg0->unk_300 = 1.0f;
    if ((arg0->params & 0x8000) != 0) {
        arg0->unk_304 = (f32) (arg0->unk_304 * 1.5f);
    }
    if (arg0->colChkInfo.health != 0) {
        arg0->unk_30E = 0x50;
    } else {
        arg0->unk_30E = 0xC;
    }
    Audio_PlayActorSound2(arg0, 0x389EU);
    arg0->unk_2AC = func_80B7D47C;
}

void func_80B7D47C(void *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->unk_30E;
    if (temp_v0 == 0) {
        arg0->unk_30E = 0;
        arg0->unk_304 = 0.0f;
        arg0->unk_300 = 0.0f;
        if (arg0->unk_B7 != 0) {
            func_80B7D4FC();
            return;
        }
        func_80B7D6D0();
        return;
    }
    if (temp_v0 == 1) {
        arg0->unk_30E = (s16) (temp_v0 - 1);
        func_80B7E0BC();
        return;
    }
    arg0->unk_30E = (s16) (temp_v0 - 1);
}

void func_80B7D4FC(Actor *arg0) {
    arg0->unk_30A = 0xA;
    arg0->unk_160 = 1.0f;
    arg0->unk_2BC = (f32) (Math_SinS(arg0->yawTowardsPlayer) * -12.0f);
    arg0->unk_2C4 = (f32) (Math_CosS(arg0->yawTowardsPlayer) * -12.0f);
    arg0->unk_2FC = 4551.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x19);
    Audio_PlayActorSound2(arg0, 0x3988U);
    arg0->unk_2AC = func_80B7D5A4;
}

void func_80B7D5A4(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    s32 temp_v0;

    if (arg0->unk_30A == 0) {
        arg0->unk_2FC = 0.0f;
        func_80B7CB3C(arg0, NULL, 0.5f);
        return;
    }
    arg0->unk_308 = (s16) (arg0->unk_308 - 0x1F40);
    Math_SmoothStepToF(arg0 + 0x2FC, (bitwise f32) NULL, 0.5f, 182.0f, 18.0f);
    temp_v0 = arg0->unk_30A * 4;
    temp_f0 = *(&D_80B7E54C + temp_v0);
    arg0->scale.z = temp_f0;
    arg0->scale.x = temp_f0;
    arg0->scale.y = *(&D_80B7E578 + temp_v0);
    if ((arg0->params & 0x8000) != 0) {
        arg0->scale.x *= 1.5f;
        arg0->scale.y *= 1.5f;
        arg0->scale.z *= 1.5f;
    }
    func_800BBDAC(arg1, arg0, (Vec3f *) &arg0->world, arg0->shape.shadowScale, 1, 4.0f, (s16) 0xFA, (s16) 0xA, (u8) 1);
    arg0->unk_30A = (s16) (arg0->unk_30A - 1);
}

void func_80B7D6D0(Actor *arg0) {
    u32 temp_t9;

    arg0->unk_30A = 0xA;
    arg0->unk_2BC = (f32) (Math_SinS(arg0->yawTowardsPlayer) * -12.0f);
    arg0->unk_2C4 = (f32) (Math_CosS(arg0->yawTowardsPlayer) * -12.0f);
    arg0->unk_2FC = 3640.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x19);
    temp_t9 = arg0->flags | 0x8000000;
    arg0->flags = temp_t9;
    arg0->flags = temp_t9 & ~1;
    Audio_PlayActorSound2(arg0, 0x3989U);
    arg0->unk_2AC = func_80B7D788;
}

void func_80B7D788(Actor *arg0, GlobalContext *arg1) {
    Vec3f *sp30;
    Vec3f *temp_a1;
    f32 temp_f0;
    s16 temp_v1;
    s32 temp_v0;
    s32 temp_v0_2;
    f32 phi_f0;
    f32 phi_f0_2;

    temp_v1 = arg0->unk_30A;
    if (temp_v1 == 0) {
        Math_ApproachZeroF(arg0 + 0x58, 0.1f, 0.01f);
        Math_ApproachZeroF(arg0 + 0x5C, 0.1f, 0.01f);
        Math_ApproachZeroF(arg0 + 0x60, 0.1f, 0.01f);
        Math_ApproachZeroF(arg0 + 0x300, 0.1f, 0.1f);
        Math_ApproachZeroF(arg0 + 0x304, 0.1f, 0.1f);
        temp_a1 = arg0 + 0x24;
        if (arg0->scale.x < 0.01f) {
            sp30 = temp_a1;
            func_800B3030(arg1, temp_a1, &D_80B7E5B0, &D_80B7E5A4, (s16) 0x78, (s16) 0, 0);
            Item_DropCollectibleRandom(arg1, arg0, sp30, 0x60);
            Actor_MarkForDeath(arg0);
            return;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return;
    }
    temp_v0 = temp_v1 * 4;
    if ((s32) temp_v1 < 0xB) {
        arg0->unk_308 = (s16) (arg0->unk_308 - 0x1388);
        temp_f0 = *(&D_80B7E54C + temp_v0);
        arg0->scale.z = temp_f0;
        arg0->scale.x = temp_f0;
        arg0->scale.y = *(&D_80B7E578 + temp_v0);
        if ((arg0->params & 0x8000) != 0) {
            arg0->scale.x *= 1.5f;
            arg0->scale.y *= 1.5f;
            arg0->scale.z *= 1.5f;
        }
    }
    temp_v0_2 = arg0->params & 0x8000;
    if (arg0->unk_310 == 0) {
        phi_f0 = 1.2f;
        if (temp_v0_2 != 0) {
            phi_f0 = 1.2f * 1.5f;
        }
        Math_SmoothStepToF(arg0 + 0x304, phi_f0, 0.5f, 0.3f, 0.0f);
    } else {
        phi_f0_2 = 1.6f;
        if (temp_v0_2 != 0) {
            phi_f0_2 = 1.6f * 1.5f;
        }
        Math_SmoothStepToF(arg0 + 0x304, phi_f0_2, 0.5f, 0.3f, 0.0f);
    }
    arg0->unk_30A = (s16) (arg0->unk_30A - 1);
}

void func_80B7D9B8(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp2C;
    CollisionCheckContext *sp28;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    s32 temp_v0_3;
    u8 temp_t0;
    u8 temp_v0;
    u8 temp_v0_2;

    Actor_SetHeight(arg0, 20.0f);
    temp_v0 = arg0->unk_199;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_199 = (u8) (temp_v0 & 0xFFFD);
        if (func_80B7D47C == arg0->unk_2AC) {
            temp_t0 = arg0->colChkInfo.damageEffect;
            switch (temp_t0) {                      /* switch 1 */
            default:                                /* switch 1 */
                if ((s32) arg0->unk_30E >= 2) {
                    func_80B7E0BC(arg0, arg1);
                }
                arg0->unk_30E = 0;
                goto block_7;
            }
        } else {
block_7:
            Actor_ApplyDamage(arg0);
            temp_v0_2 = arg0->colChkInfo.damageEffect;
            switch (temp_v0_2) {                    /* switch 2 */
            case 3:                                 /* switch 2 */
                func_80B7D3EC(arg0);
                break;
            case 2:                                 /* switch 2 */
            case 4:                                 /* switch 2 */
                if (temp_v0_2 == 2) {
                    arg0->unk_310 = 0;
                    arg0->unk_30E = 0x50;
                } else {
                    arg0->unk_310 = 0x14;
                    arg0->unk_30E = 0x28;
                }
                arg0->unk_300 = 1.0f;
                arg0->unk_304 = 0.0f;
                /* fallthrough */
            case 14:                                /* switch 2 */
            case 15:                                /* switch 2 */
                if ((arg0->colChkInfo.damageEffect == 0xF) || (arg0->colChkInfo.damageEffect == 0xE)) {
                    arg0->unk_30E = 0;
                }
                if ((s32) arg0->colChkInfo.health > 0) {
                    func_80B7D4FC(arg0, arg0);
                } else {
                    Enemy_StartFinishingBlow(arg1, arg0);
                    func_80B7D6D0(arg0);
                }
                break;
            case 13:                                /* switch 2 */
                arg0->unk_310 = 0x1E;
                arg0->unk_30E = 0x28;
                arg0->unk_300 = 1.0f;
                arg0->unk_304 = 2.0f;
                func_800BCB70(arg0, 0, 0x78, 0, (s16) 0x28);
                func_80B7D360(arg0);
                break;
            case 1:                                 /* switch 2 */
                func_800BCB70(arg0, 0, 0x78, 0, (s16) 0x28);
                func_80B7D360(arg0);
                break;
            }
            goto block_26;
        }
    } else {
        if ((((arg0->unk_19B & 1) != 0) || ((arg0->unk_198 & 4) != 0)) && (func_80B7CFFC == arg0->unk_2AC)) {
            func_80B7D254(arg0);
        }
block_26:
        temp_v0_3 = arg0->unk_2AC;
        if ((func_80B7CA70 != temp_v0_3) && (func_80B7CD28 != temp_v0_3) && (func_80B7CE94 != temp_v0_3) && (func_80B7D5A4 != temp_v0_3) && (func_80B7D788 != temp_v0_3)) {
            temp_a1 = arg0 + 0x188;
            sp2C = temp_a1;
            Collider_UpdateCylinder(arg0, temp_a1);
            temp_a1_2 = &arg1->colChkCtx;
            sp28 = temp_a1_2;
            CollisionCheck_SetOC(arg1, temp_a1_2, (Collider *) sp2C);
            CollisionCheck_SetAC(arg1, temp_a1_2, (Collider *) sp2C);
            if (func_80B7D398 != arg0->unk_2AC) {
                CollisionCheck_SetAT(arg1, sp28, (Collider *) sp2C);
            }
        }
    }
}

void func_80B7DC80(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk_2AC;
    if ((func_80B7CA70 != temp_v0) && (func_80B7CD28 != temp_v0) && (func_80B7CE94 != temp_v0)) {
        arg0->velocity.y += arg0->gravity;
        arg0->world.pos.x += arg0->colChkInfo.displacement.x;
        arg0->world.pos.y += arg0->velocity.y;
        arg0->world.pos.z += arg0->colChkInfo.displacement.z;
        arg0->world.pos.x += arg0->unk_2BC;
        arg0->world.pos.z += arg0->unk_2C4;
        Math_ApproachZeroF(arg0 + 0x2BC, 1.0f, 2.0f);
        Math_ApproachZeroF(arg0 + 0x2C4, 1.0f, 2.0f);
        Actor_UpdateBgCheckInfo(arg1, arg0, 10.0f, 40.0f, 40.0f, 5U);
    }
}

void func_80B7DD7C(Actor *arg0, GlobalContext *arg1) {
    f32 sp54;
    f32 sp50;
    Actor *temp_s0;
    s32 temp_s1;
    void *temp_s5;
    f32 phi_f2;
    f32 phi_f12;
    void *phi_s2;
    s32 phi_s1;
    Actor *phi_s0;
    f32 phi_f20;

    phi_f2 = 20.0f;
    phi_f12 = 0.8f;
    phi_f20 = 10.0f;
    if ((arg0->params & 0x8000) != 0) {
        phi_f2 = 20.0f * 1.5f;
        phi_f12 = 0.8f * 1.5f;
        phi_f20 = 10.0f * 1.5f;
    }
    temp_s5 = arg0 + 0x24;
    sp54 = phi_f2;
    sp50 = phi_f12;
    phi_s2 = arg0 + 0x2C8;
    phi_s1 = 0;
    phi_s0 = arg0;
    do {
        phi_s2->unk_0 = (s32) temp_s5->unk_0;
        phi_s2->unk_4 = (f32) temp_s5->unk_4;
        phi_s2->unk_8 = (s32) temp_s5->unk_8;
        phi_s0->unk_2C8 = (f32) (phi_s0->unk_2C8 + (phi_f20 * Math_SinS((s16) (arg0->shape.rot.y + phi_s1))));
        temp_s1 = phi_s1 + 0x5555;
        temp_s0 = phi_s0 + 0xC;
        temp_s0->unk_2C4 = (f32) (phi_s0->unk_2D0 + (phi_f20 * Math_CosS((s16) (arg0->shape.rot.y + phi_s1))));
        temp_s0->unk_2C0 = (f32) (phi_s0->unk_2CC + 5.0f);
        phi_s2 += 0xC;
        phi_s1 = temp_s1;
        phi_s0 = temp_s0;
    } while (temp_s1 != 0xFFFF);
    arg0->unk_2EC = (s32) temp_s5->unk_0;
    arg0->unk_2F0 = (f32) temp_s5->unk_4;
    arg0->unk_2F4 = (s32) temp_s5->unk_8;
    arg0->unk_2F0 = (f32) (arg0->unk_2F0 + sp54);
    arg0->unk_304 = sp50;
    func_800BE680(arg1, arg0, (Vec3f []) (arg0 + 0x2C8), 4, sp50, 0.5f, arg0->unk_300, (u8) (s32) arg0->unk_310);
}

void func_80B7DF34(EnNeoReeba *arg0, GlobalContext *arg1) {
    EnNeoReeba *temp_s0;
    f32 temp_f4;
    s32 temp_s1;
    u8 temp_v0;
    void *temp_s5;
    void *phi_s2;
    s32 phi_s1;
    EnNeoReeba *phi_s0;
    f32 phi_f20;

    phi_s0 = arg0;
    phi_f20 = 15.0f;
    if ((arg0->actor.params & 0x8000) != 0) {
        phi_f20 = 15.0f * 1.5f;
    }
    temp_v0 = arg0->unk_310;
    temp_s5 = arg0 + 0x24;
    phi_s2 = arg0 + 0x2C8;
    if ((temp_v0 == 0) || (temp_v0 == 0x14) || (temp_v0 == 0x1E)) {
        phi_s1 = 0;
        do {
            phi_s2->unk_0 = (s32) temp_s5->unk_0;
            phi_s2->unk_4 = (s32) temp_s5->unk_4;
            phi_s2->unk_8 = (s32) temp_s5->unk_8;
            phi_s0->unk_2C8 += phi_f20 * Math_SinS((s16) (arg0->actor.shape.rot.y + phi_s1));
            temp_s1 = phi_s1 + 0x5555;
            temp_s0 = phi_s0 + 0xC;
            temp_f4 = phi_s0->unk_2D0 + (phi_f20 * Math_CosS((s16) (arg0->actor.shape.rot.y + phi_s1)));
            temp_s0->unk_2C0 = phi_s0->unk_2CC + -20.0f;
            temp_s0->unk_2C4 = temp_f4;
            phi_s2 += 0xC;
            phi_s1 = temp_s1;
            phi_s0 = temp_s0;
        } while (temp_s1 != 0xFFFF);
        arg0->unk_2EC = temp_s5->unk_0;
        arg0->unk_2F0 = temp_s5->unk_4;
        arg0->unk_2F4 = temp_s5->unk_8;
        func_800BE680(arg1, NULL, (Vec3f []) (arg0 + 0x2C8), 4, arg0->unk_304, 0.5f, arg0->unk_300, (u8) (s32) arg0->unk_310);
    }
}

void func_80B7E0BC(Actor *arg0, GlobalContext *arg1) {
    f32 spAC;
    f32 spA8;
    f32 spA4;
    Vec3f *sp8C;
    Vec3f *temp_a1;
    f32 *temp_s3;
    f32 temp_f22;
    f32 temp_f24;
    s16 temp_s0;
    s16 temp_v0;
    s32 temp_fp;
    s32 temp_s0_2;
    Vec3f *phi_s1;
    s32 phi_s0;
    s32 phi_fp;

    temp_a1 = arg0 + 0x24;
    sp8C = temp_a1;
    Audio_PlaySoundAtPosition(arg1, temp_a1, 0x1E, 0x28CBU);
    temp_s3 = &spA4;
    phi_s1 = arg0 + 0x2C8;
    phi_fp = 0;
    do {
        temp_v0 = Math_Vec3f_Yaw(sp8C, phi_s1);
        temp_s0 = temp_v0;
        temp_f22 = Math_SinS(temp_v0) * 3.0f;
        temp_f24 = Math_CosS(temp_s0) * 3.0f;
        phi_s0 = 0;
loop_2:
        spA4 = (Rand_Centered() * 3.0f) + temp_f22;
        spAC = (Rand_Centered() * 3.0f) + temp_f24;
        spA8 = (Rand_ZeroOne() * 6.0f) + 4.0f;
        EffectSsEnIce_Spawn(arg1, phi_s1, 0.7f, (Vec3f *) temp_s3, &D_80B7E5C4, &D_80B7E5BC, &D_80B7E5C0, 0x1E);
        temp_s0_2 = phi_s0 + 1;
        phi_s0 = temp_s0_2;
        if (temp_s0_2 != 4) {
            goto loop_2;
        }
        temp_fp = phi_fp + 0xC;
        phi_s1 += 0xC;
        phi_fp = temp_fp;
    } while (temp_fp != 0x30);
}

void func_80B7E260(EnNeoReeba *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    temp_v0 = arg0->actionFunc;
    if ((func_80B7CB88 == temp_v0) || (func_80B7CFFC == temp_v0) || (func_80B7D150 == temp_v0)) {
        arg0 = arg0;
        if (Player_GetMask(arg1) == 0x10) {
            func_80B7CCE0((bitwise f32) arg0);
        }
    }
}

void EnNeoReeba_Update(Actor *thisx, GlobalContext *globalCtx) {
    void (*temp_v0)(EnNeoReeba *, GlobalContext *);
    EnNeoReeba *this = (EnNeoReeba *) thisx;

    if ((this->actor.params & 0x8000) != 0) {
        this->unk_188.dim.radius = 0x1B;
        this->unk_188.dim.height = 0x2D;
    }
    this->actionFunc(this, globalCtx);
    temp_v0 = this->actionFunc;
    if ((func_80B7CA70 != temp_v0) && (func_80B7D398 != temp_v0) && (func_80B7D47C != temp_v0)) {
        SkelAnime_FrameUpdateMatrix(&this->unk_144);
    }
    func_80B7D9B8((Actor *) this, globalCtx);
    func_80B7DC80((Actor *) this, globalCtx);
    func_80B7E260(this, globalCtx);
}

s32 func_80B7E378(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if ((arg1 == 3) && (arg5->unk_2FC != 0.0f)) {
        arg4->y += (s32) (arg5->unk_2FC * Math_SinS(arg5->unk_308));
        arg4->z += (s32) (arg5->unk_2FC * Math_CosS(arg5->unk_308));
    }
    return 0;
}

void EnNeoReeba_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    EnNeoReeba *this = (EnNeoReeba *) thisx;

    func_8012C28C(globalCtx->state.gfxCtx);
    temp_a0 = globalCtx->state.gfxCtx;
    temp_v1 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w1 = -1;
    temp_v1->words.w0 = 0xFA000001;
    SkelAnime_Draw(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, func_80B7E378, NULL, (Actor *) this);
    if ((s32) this->unk_30E > 0) {
        if (this->unk_310 == 0xB) {
            func_80B7DD7C((Actor *) this, globalCtx);
            return;
        }
        func_80B7DF34(this, globalCtx);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}
