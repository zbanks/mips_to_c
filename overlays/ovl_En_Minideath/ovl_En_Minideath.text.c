typedef struct EnMinideath {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnMinideath *, GlobalContext *);
    /* 0x148 */ u8 unk_148;                         /* inferred */
    /* 0x149 */ s8 unk_149;                         /* inferred */
    /* 0x14A */ s16 unk_14A;                        /* inferred */
    /* 0x14C */ s16 unk_14C;                        /* inferred */
    /* 0x14E */ s16 unk_14E;                        /* inferred */
    /* 0x150 */ s16 unk_150;                        /* inferred */
    /* 0x152 */ s16 unk_152;                        /* inferred */
    /* 0x154 */ char pad_154[0x4];                  /* maybe part of unk_152[3]? */
    /* 0x158 */ f32 unk_158;                        /* inferred */
    /* 0x15C */ Actor *unk_15C;                     /* inferred */
    /* 0x160 */ ? unk_160;                          /* inferred */
    /* 0x160 */ char pad_160[0x4];
    /* 0x164 */ Vec3f unk_164;                      /* inferred */
    /* 0x170 */ Vec3f unk_170;                      /* inferred */
    /* 0x17C */ char pad_17C[0x50];                 /* maybe part of unk_170[7]? */
    /* 0x1CC */ ColliderJntSph unk_1CC;             /* inferred */
    /* 0x1EC */ ColliderJntSphElement unk_1EC;      /* inferred */
    /* 0x22C */ char pad_22C[0x80];                 /* maybe part of unk_1EC[3]? */
} EnMinideath;                                      /* size = 0x2AC */

struct _mips2c_stack_EnMinideath_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnMinideath_Init {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnMinideath_Update {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ void (*sp34)(EnMinideath *, GlobalContext *); /* inferred */
    /* 0x38 */ void (*sp38)(EnMinideath *, GlobalContext *); /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ ColliderJntSphElement *sp4C;         /* inferred */
    /* 0x50 */ char pad_50[0x8];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_808CA268 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808CA308 {};              /* size 0x0 */

struct _mips2c_stack_func_808CA34C {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808CA458 {
    /* 0x00 */ char pad_0[0x60];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_808CA7D4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808CA860 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808CA8E0 {};              /* size 0x0 */

struct _mips2c_stack_func_808CA8F4 {
    /* 0x00 */ char pad_0[0x32];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ Actor *sp44;                         /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808CAAC8 {};              /* size 0x0 */

struct _mips2c_stack_func_808CAAEC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808CAB90 {};              /* size 0x0 */

struct _mips2c_stack_func_808CABB0 {
    /* 0x00 */ char pad_0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808CAC54 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808CACD8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808CAE00 {};              /* size 0x0 */

struct _mips2c_stack_func_808CAE18 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808CAF08 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808CAF68 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x2];
    /* 0x26 */ s16 sp26;                            /* inferred */
    /* 0x28 */ char pad_28[0x4];                    /* maybe part of sp26[3]? */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808CB07C {};              /* size 0x0 */

struct _mips2c_stack_func_808CB094 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808CB0C8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808CB22C {
    /* 0x00 */ char pad_0[0x32];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808CB418 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808CB454 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808CB524 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808CB59C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808CB6A8 {};              /* size 0x0 */

struct _mips2c_stack_func_808CB6D4 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808CB7B8 {};              /* size 0x0 */

struct _mips2c_stack_func_808CB7CC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808CB810 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808CB8F4 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

void func_808CA268(Vec3f *arg0, GlobalContext *arg1); /* static */
void func_808CA308(EnMinideath *arg0, u8 arg1, EnMinideath *, s32); /* static */
void func_808CA34C(EnMinideath *arg0);              /* static */
void func_808CA458(EnMinideath *arg0, GlobalContext *arg1); /* static */
void func_808CA7D4(EnMinideath *arg0);              /* static */
void func_808CA8E0(EnMinideath *arg0);              /* static */
void func_808CAAC8(EnMinideath *arg0);              /* static */
void func_808CAB90(EnMinideath *arg0);              /* static */
void func_808CAC54(EnMinideath *arg0);              /* static */
void func_808CAE00(EnMinideath *arg0);              /* static */
void func_808CAF08(EnMinideath *arg0);              /* static */
void func_808CB07C(void *arg0);                     /* static */
void func_808CB0C8(EnMinideath *arg0, void *arg1);  /* static */
void func_808CB418(void *arg0);                     /* static */
void func_808CB524(EnMinideath *arg0);              /* static */
void func_808CB6A8(void *arg0);                     /* static */
void func_808CB7B8(EnMinideath *arg0);              /* static */
void func_808CB810(EnMinideath *arg0, GlobalContext *); /* static */
void func_808CB8F4(EnMinideath *arg0, GlobalContext *arg1); /* static */
static ColliderJntSphElementInit D_808CBF50[3] = {
    {
        {0, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 9, 1, 1},
        {1, {{0, 0, 0}, 0xF}, 0x64},
    },
    {
        {0, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 9, 1, 1},
        {1, {{0, 0, 0}, 0xF}, 0x64},
    },
    {
        {0, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 9, 1, 1},
        {1, {{0, 0, 0}, 0xF}, 0x64},
    },
};
static ColliderJntSphInit D_808CBFBC = {{0xA, 0x10, 9, 0x38, 0x10, 0}, 3, &D_808CBF50};
static DamageTable D_808CBFCC = {
    {
        0x10,
        1,
        1,
        1,
        1,
        1,
        0,
        1,
        1,
        1,
        0,
        0x21,
        0x31,
        0x42,
        1,
        1,
        1,
        2,
        0x10,
        0x51,
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
static CollisionCheckInfoInit D_808CBFEC = {1, 0xF, 0x1E, 0xA};
static InitChainEntry D_808CBFF4[3];                /* unable to generate initializer */
static s32 D_808CC250;
static s32 D_808CC254;
static s32 D_808CC258;
static s32 D_808CC25C;

void EnMinideath_Init(Actor *thisx, GlobalContext *globalCtx) {
    Actor *temp_v0;
    s16 temp_t5;
    s32 temp_s0;
    s32 temp_v1;
    void *temp_v0_2;
    s32 phi_v1;
    Vec3f *phi_s1;
    Vec3f *phi_s2;
    s32 phi_s0;
    EnMinideath *this = (EnMinideath *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_808CBFF4);
    temp_v0 = this->actor.parent;
    this->unk_14C = this->actor.shape.rot.y;
    this->unk_158 = this->actor.world.pos.y - this->actor.parent->world.pos.y;
    this->actor.shape.rot.y = temp_v0->shape.rot.y;
    this->actor.flags &= -2;
    this->actor.world.rot.y = temp_v0->shape.rot.y;
    Collider_InitAndSetJntSph(globalCtx, &this->unk_1CC, (Actor *) this, &D_808CBFBC, &this->unk_1EC);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_808CBFCC, &D_808CBFEC);
    phi_v1 = 0;
    do {
        temp_v0_2 = this->unk_1CC.elements + phi_v1;
        temp_v1 = phi_v1 + 0x40;
        temp_v0_2->unk_36 = (s16) temp_v0_2->unk_2E;
        phi_v1 = temp_v1;
    } while (temp_v1 < 0xC0);
    func_808CA34C(this);
    temp_t5 = this->actor.params;
    this->actor.params = 0;
    this->unk_149 = 0;
    this->unk_148 = (u8) temp_t5;
    if ((gSaveContext.eventInf[6] & 8) != 0) {
        this->unk_149 = 1;
        this->unk_1CC.base.atFlags |= 1;
        func_808CABB0(this, globalCtx);
        phi_s1 = &this->unk_170;
        phi_s2 = &this->unk_164;
        phi_s0 = 0;
        do {
            Math_Vec3f_Sum((Vec3f *) &this->actor.world, phi_s1, phi_s2);
            temp_s0 = phi_s0 + 0x24;
            phi_s1 += 0x24;
            phi_s2 += 0x24;
            phi_s0 = temp_s0;
        } while (temp_s0 != 0x6C);
        func_808CAB90(this);
        return;
    }
    func_808CA7D4(this);
}

void EnMinideath_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnMinideath *this = (EnMinideath *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk_1CC);
}

void func_808CA268(Vec3f *arg0, GlobalContext *arg1) {
    if ((D_808CC250 == 0) && (Rand_ZeroOne() < 0.3f)) {
        if (Rand_ZeroOne() < 0.5f) {
            Item_DropCollectible(arg1, arg0, 5U);
        } else {
            Item_DropCollectible(arg1, arg0, 0xEU);
        }
        D_808CC250 = 0x320;
    }
}

void func_808CA308(EnMinideath *arg0, u8 arg1) {
    void *temp_v0;
    void *temp_v0_2;

    if (arg1 != arg0->unk_149) {
        arg0->unk_149 = arg1;
        if (arg1 == 1) {
            temp_v0 = arg0->actor.parent;
            temp_v0->params += 1;
            return;
        }
        temp_v0_2 = arg0->actor.parent;
        temp_v0_2->params += -1;
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_808CA34C(EnMinideath *arg0) {
    s32 temp_s1;
    void *temp_s0;
    void *phi_s0;
    s32 phi_s1;

    phi_s0 = arg0 + 0x160;
    phi_s1 = 0;
    do {
        phi_s0->unk_10 = randPlusMinusPoint5Scaled(80.0f);
        phi_s0->unk_14 = Rand_ZeroFloat(40.0f);
        phi_s0->unk_18 = randPlusMinusPoint5Scaled(80.0f);
        phi_s0->unk_0 = (s8) ((s32) Rand_ZeroFloat(9.0f) % 9);
        phi_s0->unk_1C = (s16) (Rand_Next() >> 0x11);
        temp_s1 = phi_s1 + 1;
        temp_s0 = phi_s0 + 0x24;
        temp_s0->unk_-6 = (s16) (Rand_Next() >> 0x10);
        temp_s0->unk_-23 = 0;
        temp_s0->unk_-2 = 0;
        phi_s0 = temp_s0;
        phi_s1 = temp_s1;
    } while (temp_s1 != 3);
}

void func_808CA458(EnMinideath *arg0, GlobalContext *arg1) {
    Vec3f *temp_s1_3;
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_s1;
    s16 temp_s1_2;
    s16 temp_v0_3;
    s32 temp_s1_4;
    s32 temp_s4;
    s32 temp_v0_2;
    u8 temp_v0;
    void *temp_v0_4;
    void *temp_v0_5;
    void *phi_s0;
    f32 phi_f0;
    f32 phi_f12;
    s32 phi_s4;
    s32 phi_s7;
    s32 phi_s3;
    s32 phi_s3_2;

    phi_s0 = arg0 + 0x160;
    phi_s4 = 0;
    phi_s7 = 0;
    phi_s3_2 = 0;
    do {
        temp_v0 = phi_s0->unk_1;
        phi_s3 = phi_s3_2;
        if (temp_v0 == 0) {
            temp_f20 = Math_SinS(phi_s0->unk_1E);
            phi_s0->unk_10 = (f32) (phi_s0->unk_10 + (3.0f * Math_CosS(phi_s0->unk_1C) * temp_f20));
            phi_s0->unk_14 = (f32) (phi_s0->unk_14 + (3.0f * Math_SinS(phi_s0->unk_1C)));
            temp_f20_2 = Math_CosS(phi_s0->unk_1E);
            phi_s0->unk_18 = (f32) (phi_s0->unk_18 + (3.0f * Math_CosS(phi_s0->unk_1C) * temp_f20_2));
            temp_v0_2 = arg0->actionFunc;
            if (func_808CA860 == temp_v0_2) {
                phi_f0 = 100.0f;
                phi_f12 = 100.0f * 100.0f;
            } else if ((func_808CB094 == temp_v0_2) || (func_808CB454 == temp_v0_2)) {
                phi_f0 = 20.0f;
                phi_f12 = 400.0f;
            } else {
                phi_f0 = 40.0f;
                phi_f12 = 1600.0f;
            }
            temp_f14 = phi_s0->unk_14;
            if ((temp_f14 < 0.0f) || (phi_f0 < temp_f14) || (temp_f2 = phi_s0->unk_10, temp_f16 = phi_s0->unk_18, (phi_f12 < ((temp_f2 * temp_f2) + (temp_f16 * temp_f16))))) {
                temp_f2_2 = phi_s0->unk_10;
                temp_f16_2 = phi_s0->unk_18;
                temp_s1 = Math_FAtan2F(sqrtf((temp_f2_2 * temp_f2_2) + (temp_f16_2 * temp_f16_2)), temp_f14);
                phi_s0->unk_1C = (s16) ((Rand_Next() >> 0x13) + -(s32) temp_s1);
                temp_s1_2 = Math_FAtan2F(phi_s0->unk_18, phi_s0->unk_10);
                phi_s0->unk_1E = (s16) ((Rand_Next() >> 0x13) + temp_s1_2 + 0x8000);
            }
            phi_s3 = phi_s3_2 + 1;
        } else if (temp_v0 == 1) {
            temp_f14_2 = phi_s0->unk_14;
            temp_s1_3 = phi_s0 + 4;
            phi_s0->unk_8 = (f32) (phi_s0->unk_8 + temp_f14_2);
            phi_s0->unk_1E = (s16) (phi_s0->unk_1E + 0x1800);
            phi_s0->unk_14 = (f32) (temp_f14_2 - 1.0f);
            temp_f0 = arg0->actor.parent->unk_C;
            if (phi_s0->unk_8 < temp_f0) {
                phi_s0->unk_8 = temp_f0;
                func_800B3030(arg1, temp_s1_3, &D_801D15B0, &D_801D15B0, (s16) 0x64, (s16) 0, 0);
                Audio_PlaySoundAtPosition(arg1, temp_s1_3, 0xB, 0x3878U);
                func_808CA268(temp_s1_3, arg1);
                phi_s0->unk_1 = 2U;
            }
        } else if (temp_v0 == 2) {
            temp_v0_3 = phi_s0->unk_22;
            if ((s32) temp_v0_3 > 0) {
                phi_s0->unk_22 = (s16) (temp_v0_3 - 1);
            } else if (func_808CABB0 == arg0->actionFunc) {
                temp_s1_4 = phi_s4 << 6;
                Math_Vec3f_Diff(arg0->actor.parent + 0x3C, arg0 + 0x24, phi_s0 + 0x10);
                phi_s0->unk_1 = 0U;
                temp_v0_4 = arg0->unk_1CC.elements + temp_s1_4;
                temp_v0_4->unk_16 = (u8) (temp_v0_4->unk_16 | 1);
                temp_v0_5 = arg0->unk_1CC.elements + temp_s1_4;
                temp_v0_5->unk_15 = (u8) (temp_v0_5->unk_15 | 1);
                phi_s7 = 1;
                phi_s3 = phi_s3_2 + 1;
            }
        }
        temp_s4 = phi_s4 + 1;
        phi_s0 += 0x24;
        phi_s4 = temp_s4;
        phi_s3_2 = phi_s3;
    } while (temp_s4 != 3);
    if ((phi_s7 != 0) && (phi_s3 >= 2)) {
        func_808CA308(arg0, 1U);
    }
}

void func_808CA7D4(EnMinideath *arg0) {
    arg0->actor.speedXZ = 6.0f;
    arg0->actor.world.pos.x = randPlusMinusPoint5Scaled(600.0f) + arg0->actor.parent->unk_24;
    arg0->actor.world.pos.z = randPlusMinusPoint5Scaled(600.0f) + arg0->actor.parent->world.pos.z;
    arg0->actor.shape.rot.y = (s16) (Rand_Next() >> 0x10);
    arg0->actor.shape.rot.x = 0;
    arg0->actionFunc = func_808CA860;
    arg0->unk_152 = arg0->actor.shape.rot.y;
}

void func_808CA860(EnMinideath *this, GlobalContext *globalCtx) {
    EnMinideath *temp_a3;
    s16 temp_a1;

    temp_a3 = this;
    temp_a1 = temp_a3->unk_152;
    this = temp_a3;
    if ((Math_ScaledStepToS(&temp_a3->actor.shape.rot.y, temp_a1, 0x480) != 0) && ((this->actor.bgCheckFlags & 8) != 0)) {
        this = this;
        this->unk_152 = (Rand_Next() >> 0x12) + this->actor.wallYaw;
    }
    if (this->actor.params == 7) {
        func_808CA8E0(this);
    }
}

void func_808CA8E0(EnMinideath *arg0) {
    arg0->actionFunc = func_808CA8F4;
}

void func_808CA8F4(EnMinideath *this, GlobalContext *globalCtx) {
    Actor *sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s32 sp34;
    s16 sp32;
    Actor *temp_v1;
    Actor *temp_v1_2;
    Actor *temp_v1_3;
    s16 temp_a0;
    u8 temp_v0;
    s32 phi_v0;
    s32 phi_a0;

    Math_StepToF(&this->actor.speedXZ, 15.0f, 0.5f);
    temp_v1 = this->actor.child;
    phi_v0 = 0;
    if (temp_v1 == 0) {
        goto block_7;
    }
    temp_v0 = this->unk_148;
    phi_a0 = 0x5555;
    if (temp_v0 == 6) {
        phi_v0 = 1;
    } else if (temp_v0 == 0xC) {
        phi_v0 = 2;
        phi_a0 = -0x5556;
    } else {
        sp34 = -1;
        Math_Vec3f_Copy((Vec3f *) &sp38, (Vec3f *) &temp_v1->world);
        phi_v0 = -1;
block_7:
        phi_a0 = 0;
    }
    if (phi_v0 != -1) {
        temp_v1_2 = this->actor.parent;
        sp34 = phi_v0;
        sp44 = temp_v1_2;
        temp_a0 = phi_a0 + temp_v1_2->unk_2F6;
        sp32 = temp_a0;
        sp38 = (Math_SinS(temp_a0) * sp44->unk_308) + this->actor.parent->world.pos.x;
        sp40 = (Math_CosS(temp_a0) * sp44->unk_308) + this->actor.parent->world.pos.z;
        sp3C = this->actor.parent->world.pos.y + (f32) (phi_v0 * 0x14);
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, Actor_YawToPoint((Actor *) this, (Vec3f *) &sp38), 2, 0x1000, (s16) 0x100);
    temp_v1_3 = this->actor.parent;
    if (temp_v1_3->scale.z > 0.0f) {
        sp3C = temp_v1_3->world.pos.y + this->unk_158;
    }
    Math_SmoothStepToS((s16 *) &this->actor.shape, Actor_PitchToPoint((Actor *) this, (Vec3f *) &sp38), 2, 0x1000, (s16) 0x100);
    if (this->actor.params == 8) {
        func_808CAAC8(this);
    }
}

void func_808CAAC8(EnMinideath *arg0) {
    arg0->actor.params = 0;
    arg0->actionFunc = func_808CAAEC;
    arg0->actor.speedXZ = 5.0f;
}

void func_808CAAEC(EnMinideath *this, GlobalContext *globalCtx) {
    Actor_DistanceToPoint((Actor *) this, (Vec3f *) &this->actor.parent->focus);
    Math_ScaledStepToS(&this->actor.shape.rot.y, Actor_YawToPoint((Actor *) this, (Vec3f *) &this->actor.parent->focus), 0x800);
    Math_ScaledStepToS((s16 *) &this->actor.shape, Actor_PitchToPoint((Actor *) this, (Vec3f *) &this->actor.parent->focus), 0x800);
    if (this->actor.params == 9) {
        this->unk_1CC.base.atFlags |= 1;
        func_808CAF08(this);
    }
}

void func_808CAB90(EnMinideath *arg0) {
    arg0->actor.shape.rot.x = 0;
    arg0->actionFunc = func_808CABB0;
    arg0->actor.speedXZ = 0.0f;
}

void func_808CABB0(EnMinideath *this, GlobalContext *globalCtx) {
    s16 sp1E;
    Actor *temp_v0;
    s16 temp_a0;
    s16 temp_t6;
    s16 temp_t8;

    temp_t6 = this->unk_14C;
    temp_t8 = this->actor.parent->shape.rot.y;
    this = this;
    temp_a0 = temp_t6 + temp_t8;
    sp1E = temp_a0;
    this->actor.world.pos.x = (Math_SinS(temp_a0) * 60.0f) + this->actor.parent->world.pos.x;
    temp_v0 = this->actor.parent;
    this->actor.world.pos.z = (Math_CosS(temp_a0) * 60.0f) + temp_v0->world.pos.z;
    this->actor.world.pos.y = temp_v0->world.pos.y + this->unk_158;
    this->actor.shape.rot.y = temp_v0->shape.rot.y;
}

void func_808CAC54(EnMinideath *arg0) {
    s32 temp_v0;

    arg0->actor.params = 0;
    arg0->actor.speedXZ = 8.0f;
    func_800BE33C(arg0->actor.parent + 0x24, arg0 + 0x24, arg0 + 0x150, 0);
    temp_v0 = D_808CC258;
    if (temp_v0 != 0) {
        arg0->unk_14A = (s16) temp_v0;
    } else {
        arg0->unk_14A = 0xC8;
    }
    func_808CA308(arg0, 0U);
    arg0->actionFunc = func_808CACD8;
}

void func_808CACD8(EnMinideath *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0;

    Math_StepToF(&this->actor.speedXZ, 6.0f, 0.5f);
    if ((Math_ScaledStepToS(&this->actor.shape.rot.y, this->unk_152, 0x480) != 0) && ((this->actor.bgCheckFlags & 8) != 0)) {
        this->unk_152 = (Rand_Next() >> 0x12) + this->actor.wallYaw;
    }
    if (Math_ScaledStepToS((s16 *) &this->actor.shape, this->unk_150, 0x480) != 0) {
        temp_f2 = this->actor.parent->home.pos.y;
        temp_f0 = this->actor.world.pos.y;
        if (temp_f0 < (temp_f2 + 50.0f)) {
            this->unk_150 = -0x800 - (Rand_Next() >> 0x14);
        } else if ((temp_f2 + 200.0f) < temp_f0) {
            this->unk_150 = (Rand_Next() >> 0x14) + 0x800;
        }
    }
    temp_v0 = this->unk_14A;
    if (temp_v0 == 0) {
        func_808CAE00(this);
        return;
    }
    this->unk_14A = temp_v0 - 1;
}

void func_808CAE00(EnMinideath *arg0) {
    arg0->actor.params = 0;
    arg0->actionFunc = func_808CAE18;
}

void func_808CAE18(EnMinideath *this, GlobalContext *globalCtx) {
    f32 sp20;
    f32 temp_f0;
    f32 temp_f12;
    f32 phi_f12;

    temp_f0 = Actor_DistanceToPoint((Actor *) this, (Vec3f *) &this->actor.parent->focus);
    temp_f12 = temp_f0 * 0.016666668f;
    sp20 = temp_f0;
    phi_f12 = temp_f12;
    if (temp_f12 > 1.0f) {
        phi_f12 = 1.0f;
    }
    Math_StepToF(&this->actor.speedXZ, 6.0f * phi_f12, 0.5f);
    Math_ScaledStepToS(&this->actor.shape.rot.y, Actor_YawToPoint((Actor *) this, (Vec3f *) &this->actor.parent->focus), 0x800);
    Math_ScaledStepToS((s16 *) &this->actor.shape, Actor_PitchToPoint((Actor *) this, (Vec3f *) &this->actor.parent->focus), 0x800);
    if (sp20 < 30.0f) {
        func_808CAF08(this);
    }
}

void func_808CAF08(EnMinideath *arg0) {
    EnMinideath *temp_a0;
    EnMinideath *temp_a2;
    EnMinideath *temp_v1;
    s32 temp_v0;
    EnMinideath *phi_v1;
    s32 phi_v0;

    temp_a2 = arg0;
    temp_a0 = temp_a2;
    temp_a2->actor.speedXZ = 0.0f;
    arg0 = temp_a2;
    func_808CA308(temp_a0, 1U, temp_a2);
    phi_v1 = arg0;
    phi_v0 = 0;
    do {
        temp_v0 = phi_v0 + 1;
        temp_v1 = phi_v1 + 0x24;
        temp_v1->unk_15E = 0;
        phi_v1 = temp_v1;
        phi_v0 = temp_v0;
    } while (temp_v0 != 3);
    arg0->actionFunc = func_808CAF68;
}

void func_808CAF68(EnMinideath *this, GlobalContext *globalCtx) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    s16 sp26;
    s32 sp20;
    s16 temp_a0;

    sp20 = Math_ScaledStepToS(&this->actor.shape.rot.y, (s16) (this->unk_14C + this->actor.parent->shape.rot.y), 0x800);
    Math_ScaledStepToS((s16 *) &this->actor.shape, 0, 0x800);
    temp_a0 = this->unk_14C + this->actor.parent->shape.rot.y;
    sp26 = temp_a0;
    sp2C = (Math_SinS(temp_a0) * 60.0f) + this->actor.parent->world.pos.x;
    sp34 = (Math_CosS(temp_a0) * 60.0f) + this->actor.parent->world.pos.z;
    sp30 = this->actor.parent->world.pos.y + this->unk_158;
    if ((sp20 != 0) && (Math_Vec3f_StepTo((Vec3f *) &this->actor.world, (Vec3f *) &sp2C, 10.0f) < 20.0f)) {
        func_808CAB90(this);
    }
}

void func_808CB07C(void *arg0) {
    arg0->unk_1C = 0;
    arg0->unk_144 = func_808CB094;
}

void func_808CB094(EnMinideath *this, GlobalContext *globalCtx) {
    Math_Vec3f_StepTo((Vec3f *) &this->actor.world, (Vec3f *) &this->actor.parent->focus, 5.0f);
}

void func_808CB0C8(EnMinideath *arg0, void *arg1) {
    Actor *temp_v0_2;
    u8 temp_v0;
    s32 phi_a2;
    s32 phi_v1;
    s32 phi_a1;

    temp_v0 = arg0->unk_148;
    arg0->actor.params = 0;
    arg0->actor.speedXZ = 8.0f;
    if ((s32) temp_v0 >= 0xA) {
        phi_a2 = 0;
        phi_v1 = 0x13 - temp_v0;
        phi_a1 = 1;
    } else {
        phi_a2 = 0x200;
        phi_v1 = 9 - temp_v0;
        phi_a1 = -1;
    }
    arg0->actor.shape.rot.x = (phi_a2 - (phi_v1 << 0xA)) + 0xC00;
    arg0->actor.shape.rot.y = arg0->actor.parent->unk_BE + (phi_a1 << 0xE) + ((phi_v1 << 0xD) * phi_a1);
    arg0->actor.world.pos.x = (Math_SinS(arg0->actor.shape.rot.y) * 60.0f) + arg0->actor.parent->focus.pos.x;
    arg0->actor.world.pos.z = (Math_CosS(arg0->actor.shape.rot.y) * 60.0f) + arg0->actor.parent->focus.pos.z;
    arg0->actor.world.pos.y = arg0->actor.parent->focus.pos.y - (Math_SinS(arg0->actor.shape.rot.x) * 60.0f);
    func_808CA34C(arg0);
    arg0->unk_14A = 0x64;
    func_808CA308(arg0, 0U);
    D_808CC254 = 0;
    temp_v0_2 = arg0->actor.child;
    if ((temp_v0_2 == 0) || (arg0->unk_148 == 9)) {
        arg0->unk_15C = arg1->unk_1CCC;
    } else {
        arg0->unk_15C = temp_v0_2;
    }
    arg0->actionFunc = func_808CB22C;
}

void func_808CB22C(EnMinideath *this, GlobalContext *globalCtx) {
    f32 sp38;
    ? sp34;
    s16 sp32;
    Actor *temp_v0;
    Actor *temp_v0_2;
    s16 temp_v1;
    Actor *phi_v0;

    sp32 = 0;
    Math_StepToF(&this->actor.speedXZ, 6.0f, 0.2f);
    temp_v1 = this->unk_14A;
    if ((s32) temp_v1 > 0) {
        this->unk_14A = temp_v1 - 1;
    }
    temp_v0 = this->unk_15C;
    phi_v0 = temp_v0;
    if (temp_v0->id != 0x44) {
        if (this->unk_14A == 0) {
            temp_v0_2 = this->actor.parent;
            this->unk_15C = temp_v0_2;
            phi_v0 = temp_v0_2;
        }
        Math_Vec3f_Copy((Vec3f *) &sp34, phi_v0 + 0x3C);
        if (Actor_DistanceToPoint((Actor *) this, (Vec3f *) &sp34) > 200.0f) {
            if ((s32) this->unk_148 < 0xA) {
                sp32 = -0x1C00;
            } else {
                sp32 = 0x1C00;
            }
            sp38 += 50.0f;
        }
    } else if (func_808CB22C != temp_v0->unk_144) {
        Math_Vec3f_Copy((Vec3f *) &sp34, (Vec3f *) &this->actor.parent->focus);
    } else {
        Math_Vec3f_Copy((Vec3f *) &sp34, (Vec3f *) &temp_v0->focus);
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, (s16) (Actor_YawToPoint((Actor *) this, (Vec3f *) &sp34) + sp32), 5, 0xC00, (s16) 0x80);
    Math_SmoothStepToS((s16 *) &this->actor.shape, Actor_PitchToPoint((Actor *) this, (Vec3f *) &sp34), 5, 0xC00, (s16) 0x80);
    if (((this->unk_1CC.base.atFlags & 2) != 0) && ((s32) this->unk_14A > 0)) {
        D_808CC254 += 1;
    }
    if ((this->unk_14A == 0) && (Actor_DistanceToPoint((Actor *) this, (Vec3f *) &this->actor.parent->focus) < 50.0f)) {
        func_808CAF08(this);
    }
}

void func_808CB418(void *arg0) {
    arg0->unk_1C = 0;
    arg0->unk_14A = 0xA;
    func_808CA34C();
    arg0->unk_144 = func_808CB454;
}

void func_808CB454(EnMinideath *this, GlobalContext *globalCtx) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    s16 temp_v0;

    temp_v0 = this->unk_14A;
    if ((s32) temp_v0 > 0) {
        this->unk_14A = temp_v0 - 1;
    }
    sp24 = (Math_SinS(this->actor.parent->shape.rot.y) * 20.0f) + this->actor.parent->focus.pos.x;
    sp2C = (Math_CosS(this->actor.parent->shape.rot.y) * 20.0f) + this->actor.parent->focus.pos.z;
    sp28 = this->actor.parent->focus.pos.y;
    Math_Vec3f_StepTo((Vec3f *) &this->actor.world, (Vec3f *) &sp24, 5.0f);
    if ((this->unk_14A == 0) && (func_808CB22C != this->actor.child->unk_144)) {
        func_808CAB90(this);
    }
}

void func_808CB524(EnMinideath *arg0) {
    EnMinideath *temp_a2;
    EnMinideath *temp_v1;
    s32 temp_v0;
    EnMinideath *phi_v1;
    s32 phi_v0;

    temp_a2 = arg0;
    temp_a2->actor.params = 0;
    arg0 = temp_a2;
    func_808CA308(temp_a2, 0U, temp_a2);
    arg0->unk_1CC.base.atFlags &= 0xFFFE;
    phi_v1 = arg0;
    phi_v0 = 0;
    do {
        temp_v0 = phi_v0 + 1;
        temp_v1 = phi_v1 + 0x24;
        temp_v1->unk_13D = 0;
        phi_v1 = temp_v1;
        phi_v0 = temp_v0;
    } while (temp_v0 != 3);
    arg0->actionFunc = func_808CB59C;
    arg0->unk_152 = arg0->actor.shape.rot.y;
    arg0->unk_150 = arg0->actor.shape.rot.x;
}

void func_808CB59C(EnMinideath *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f2;

    Math_StepToF(&this->actor.speedXZ, 5.0f, 0.2f);
    if ((Math_ScaledStepToS(&this->actor.shape.rot.y, this->unk_152, 0x480) != 0) && ((this->actor.bgCheckFlags & 8) != 0)) {
        this->unk_152 = (Rand_Next() >> 0x12) + this->actor.wallYaw;
    }
    if (Math_ScaledStepToS((s16 *) &this->actor.shape, this->unk_150, 0x480) != 0) {
        temp_f2 = this->actor.parent->home.pos.y;
        temp_f0 = this->actor.world.pos.y;
        if (temp_f0 < (temp_f2 + 50.0f)) {
            this->unk_150 = -0x800 - (Rand_Next() >> 0x14);
            return;
        }
        if ((temp_f2 + 200.0f) < temp_f0) {
            this->unk_150 = (Rand_Next() >> 0x14) + 0x800;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_808CB6A8(void *arg0) {
    arg0->unk_1C = 0;
    arg0->unk_150 = 0x4000;
    arg0->unk_144 = func_808CB6D4;
    arg0->unk_74 = -0.5f;
}

void func_808CB6D4(EnMinideath *this, GlobalContext *globalCtx) {
    s32 temp_s1;
    ? *phi_s0;
    s32 phi_s1;
    s32 phi_s2;
    s32 phi_s2_2;

    Math_StepToF(&this->actor.speedXZ, 0.0f, 0.2f);
    Math_ScaledStepToS((s16 *) &this->actor.shape, this->unk_150, 0x480);
    func_800B9010((Actor *) this, 0x321FU);
    phi_s0 = &this->unk_160;
    phi_s1 = 0;
    phi_s2_2 = 0;
    if ((this->actor.bgCheckFlags & 1) != 0) {
        this->actor.speedXZ = 0.0f;
        do {
            temp_s1 = phi_s1 + 1;
            phi_s1 = temp_s1;
            phi_s2 = phi_s2_2;
            if (Math_StepToF(phi_s0 + 0x14, 0.0f, 7.0f) != 0) {
                phi_s2 = phi_s2_2 + 1;
            }
            phi_s0 += 0x24;
            phi_s2_2 = phi_s2;
        } while (temp_s1 != 3);
        if (phi_s2 == 3) {
            func_808CB7B8(this);
        }
    }
}

void func_808CB7B8(EnMinideath *arg0) {
    arg0->actionFunc = func_808CB7CC;
}

void func_808CB7CC(EnMinideath *this, GlobalContext *globalCtx) {
    if (this->actor.parent->update == 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    func_800B9010((Actor *) this, 0x321FU);
}

void func_808CB810(EnMinideath *arg0) {
    s16 temp_v0;
    u8 temp_v0_2;

    temp_v0 = arg0->actor.params;
    if (temp_v0 == 6) {
        func_808CB524();
        return;
    }
    if (temp_v0 == 2) {
        func_808CAE00();
        return;
    }
    if (temp_v0 == 3) {
        func_808CB07C();
        return;
    }
    if (temp_v0 == 4) {
        temp_v0_2 = arg0->unk_148;
        if ((temp_v0_2 == 0) || (temp_v0_2 == 0xA)) {
            func_808CB418();
            return;
        }
        func_808CB0C8();
        return;
    }
    if (temp_v0 == 1) {
        func_808CAC54();
        return;
    }
    if (temp_v0 == 5) {
        func_808CB6A8();
    }
}

void func_808CB8F4(EnMinideath *arg0, GlobalContext *arg1) {
    EnMinideath *temp_a2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_4;
    s32 temp_a3;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_5;
    u8 temp_a1;
    u8 temp_v0;
    void *temp_a0_3;
    void *temp_v0_4;
    void *temp_v1;
    void *temp_v1_2;
    void **phi_v1;
    s32 phi_v0;
    s32 phi_a3;
    s32 phi_a2;
    EnMinideath *phi_v1_2;
    s32 phi_v0_2;
    s32 phi_a0;
    s32 phi_a0_2;

    temp_v0 = arg0->unk_1CC.base.acFlags;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_1CC.base.acFlags = temp_v0 & 0xFFFD;
        if (arg0->actor.colChkInfo.damageEffect == 1) {
            temp_a0 = arg0->actionFunc;
            if ((func_808CABB0 == temp_a0) || (func_808CAF68 == temp_a0)) {
                D_808CC258 = 5;
                return;
            }
            if (func_808CB22C == temp_a0) {
                temp_a0_2 = arg0->unk_148 - 1;
                if (temp_a0_2 >= 0) {
                    temp_v0_2 = temp_a0_2 * 4;
                    phi_v1 = arg0->actor.parent + 0x6E4 + temp_v0_2;
                    phi_v0 = temp_v0_2;
loop_8:
                    temp_a0_3 = *phi_v1;
                    temp_v0_3 = phi_v0 - 4;
                    phi_v0 = temp_v0_3;
                    if (arg0 == temp_a0_3->unk_15C) {
                        temp_a0_3->unk_15C = (s32) arg0->unk_15C;
                    } else {
                        phi_v1 += -4;
                        if (temp_v0_3 >= 0) {
                            goto loop_8;
                        }
                    }
                }
                arg0->unk_14A = 0;
                arg0->unk_15C = arg1->actorCtx.actorList[2].first;
                return;
            }
            /* Duplicate return node #27. Try simplifying control flow for better match */
            return;
        }
        phi_a3 = 0;
        phi_a2 = 0;
        do {
            temp_v1 = arg0->unk_1CC.elements + phi_a3;
            temp_a1 = temp_v1->unk_16;
            if (((temp_a1 & 2) != 0) && ((temp_v1->unk_16 = (u8) (temp_a1 & ~3), temp_v1_2 = arg0->unk_1CC.elements + phi_a3, temp_v1_2->unk_15 = (u8) (temp_v1_2->unk_15 & ~3), temp_v0_4 = arg0 + (phi_a2 * 0x24), temp_v0_4->unk_174 = -1.0f, temp_v0_4->unk_161 = 1, temp_v0_4->unk_182 = 0x3C, temp_v0_4->unk_17E = (s16) arg0->actor.shape.rot.y, temp_a0_4 = arg0->actionFunc, (func_808CABB0 == temp_a0_4)) || (func_808CAF68 == temp_a0_4)) && (arg0->actor.colChkInfo.damageEffect == 4)) {
                D_808CC258 = 0xC8;
            }
            temp_a2 = phi_a2 + 1;
            temp_a3 = phi_a3 + 0x40;
            phi_a3 = temp_a3;
            phi_a2 = (s32) temp_a2;
        } while (temp_a2 != 3);
        phi_v1_2 = arg0;
        phi_v0_2 = 0;
        phi_a0_2 = 0;
        do {
            temp_v0_5 = phi_v0_2 + 0x24;
            phi_v0_2 = temp_v0_5;
            phi_a0 = phi_a0_2;
            if (phi_v1_2->unk_161 != 0) {
                phi_a0 = phi_a0_2 + 1;
            }
            phi_v1_2 += 0x24;
            phi_a0_2 = phi_a0;
        } while (temp_v0_5 != 0x6C);
        if (phi_a0 >= 2) {
            func_808CA308(arg0, 0U, temp_a2, temp_a3);
        }
        if (D_808CC25C == 0) {
            Audio_PlayActorSound2((Actor *) arg0, 0x3842U);
            D_808CC25C = 1;
        }
        /* Duplicate return node #27. Try simplifying control flow for better match */
    }
}

void EnMinideath_Update(Actor *thisx, GlobalContext *globalCtx) {
    ColliderJntSphElement *sp4C;
    s32 sp44;
    void (*sp38)(EnMinideath *, GlobalContext *);
    void (*sp34)(EnMinideath *, GlobalContext *);
    Actor *temp_v0_4;
    Actor *temp_v0_5;
    s16 temp_v0_3;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v0_2;
    u8 temp_s0;
    u8 temp_t4;
    void (*temp_v1)(EnMinideath *, GlobalContext *);
    void (*temp_v1_2)(EnMinideath *, GlobalContext *);
    EnMinideath *phi_v1;
    s32 phi_v0;
    ? *phi_s0;
    ColliderJntSphElement *phi_v0_2;
    s32 phi_t0;
    s32 phi_v0_3;
    Actor *phi_s0_2;
    Actor *phi_s0_3;
    Actor *phi_s0_4;
    Actor *phi_s0_5;
    EnMinideath *this = (EnMinideath *) thisx;

    temp_v0 = D_808CC250;
    if (temp_v0 > 0) {
        D_808CC250 = temp_v0 - 1;
    }
    phi_v0 = 0;
    if (func_808CB7CC != this->actionFunc) {
        phi_v1 = this;
loop_4:
        temp_v0_2 = phi_v0 + 0x24;
        phi_v0 = temp_v0_2;
        if (phi_v1->unk_161 == 0) {
            func_800B9010((Actor *) this, 0x21A7U);
        } else {
            phi_v1 += 0x24;
            if (temp_v0_2 != 0x6C) {
                goto loop_4;
            }
        }
    }
    func_808CB8F4(this, globalCtx);
    func_808CB810(this, globalCtx);
    this->actionFunc(this, globalCtx);
    temp_v1 = this->actionFunc;
    if (func_808CB7CC != temp_v1) {
        this->actor.world.rot.x = (s16) -(s32) this->actor.shape.rot.x;
        this->actor.world.rot.y = this->actor.shape.rot.y;
        sp38 = func_808CB6D4;
        if (func_808CB6D4 == temp_v1) {
            sp44 = 0;
            Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        } else {
            sp44 = 0;
            Actor_SetVelocityAndMoveXYRotation((Actor *) this);
        }
        sp34 = func_808CABB0;
        temp_v1_2 = this->actionFunc;
        if ((func_808CABB0 != temp_v1_2) && (func_808CAF68 != temp_v1_2)) {
            sp44 = sp44;
            Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 50.0f, 80.0f, 7U);
        }
        if (sp38 != this->actionFunc) {
            sp44 = sp44;
            func_808CA458(this, globalCtx);
        }
        sp44 = sp44;
        Actor_SetHeight((Actor *) this, 0.0f);
        phi_s0 = &this->unk_160;
        phi_v0_2 = this->unk_1CC.elements;
        phi_t0 = sp44;
        do {
            if (phi_s0->unk_1 == 0) {
                sp4C = phi_v0_2;
                sp44 = phi_t0;
                Math_Vec3f_Sum((Vec3f *) &this->actor.world, phi_s0 + 0x10, phi_s0 + 4);
                if (sp38 != this->actionFunc) {
                    temp_t4 = phi_s0->unk_0 + 1;
                    phi_s0->unk_0 = temp_t4;
                    if ((temp_t4 & 0xFF) == 9) {
                        phi_s0->unk_0 = 0U;
                    }
                }
                phi_v0_2->dim.worldSphere.center.x = (s16) (s32) phi_s0->unk_4;
                phi_v0_2->dim.worldSphere.center.y = (s16) (s32) phi_s0->unk_8;
                phi_v0_2->dim.worldSphere.center.z = (s16) (s32) phi_s0->unk_C;
            }
            temp_t0 = phi_t0 + 1;
            phi_s0 += 0x24;
            phi_v0_2 += 0x40;
            phi_t0 = temp_t0;
        } while (temp_t0 != 3);
        temp_s0 = this->unk_1CC.base.atFlags;
        if ((temp_s0 & 2) != 0) {
            this->unk_1CC.base.atFlags = temp_s0 & 0xFFFD;
            this->unk_14E = 0x28;
            Audio_PlayActorSound2((Actor *) this, 0x3840U);
        }
        if ((this->unk_1CC.base.atFlags & 1) != 0) {
            phi_v0_3 = 4;
            if (sp34 == this->actionFunc) {
                phi_v0_3 = globalCtx->gameplayFrames & 3;
            }
            if ((phi_v0_3 == 4) || (phi_v0_3 == (this->unk_148 & 3))) {
                if ((this->unk_14E == 0) && (this->actor.parent->shape.rot.x == 0)) {
                    CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_1CC);
                }
                if (func_808CB094 != this->actionFunc) {
                    CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_1CC);
                }
            }
        }
        temp_v0_3 = this->unk_14E;
        if ((s32) temp_v0_3 > 0) {
            this->unk_14E = temp_v0_3 - 1;
        }
        if (this->unk_148 == 0x13) {
            D_808CC25C = 0;
            phi_s0_2 = NULL;
            phi_s0_4 = NULL;
            if (D_808CC258 != 0) {
                do {
                    temp_v0_4 = func_ActorCategoryIterateById(globalCtx, phi_s0_2, 5, 0x44);
                    phi_s0_3 = temp_v0_4;
                    if (temp_v0_4 != 0) {
                        func_808CAC54((EnMinideath *) temp_v0_4);
                        phi_s0_3 = temp_v0_4->next;
                    }
                    phi_s0_2 = phi_s0_3;
                } while (phi_s0_3 != 0);
                globalCtx->envCtx.unk_C3 = 0x1C;
                if (D_808CC258 == 5) {
                    this->actor.parent->unk_2FC = 5;
                } else {
                    this->actor.parent->unk_2FC = 0x14;
                }
                D_808CC258 = 0;
                return;
            }
            if (D_808CC254 >= 5) {
                do {
                    temp_v0_5 = func_ActorCategoryIterateById(globalCtx, phi_s0_4, 5, 0x44);
                    phi_s0_5 = temp_v0_5;
                    if (temp_v0_5 != 0) {
                        temp_v0_5->unk_14A = 0;
                        phi_s0_5 = temp_v0_5->next;
                    }
                    phi_s0_4 = phi_s0_5;
                } while (phi_s0_5 != 0);
                D_808CC254 = 0;
            }
            /* Duplicate return node #51. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #51. Try simplifying control flow for better match */
    }
}
