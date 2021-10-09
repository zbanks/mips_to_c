typedef struct EnPrz {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x18];                 /* maybe part of unk_188[5]? */
    /* 0x1A6 */ Vec3s unk_1A6;                      /* inferred */
    /* 0x1AC */ char pad_1AC[0x18];                 /* maybe part of unk_1A6[5]? */
    /* 0x1C4 */ void (*actionFunc)(EnPrz *, GlobalContext *);
    /* 0x1C8 */ u8 unk_1C8;                         /* inferred */
    /* 0x1C9 */ char pad_1C9[0x3];                  /* maybe part of unk_1C8[4]? */
    /* 0x1CC */ Vec3f unk_1CC;                      /* inferred */
    /* 0x1D8 */ Vec3f unk_1D8;                      /* inferred */
    /* 0x1E4 */ s16 unk_1E4;                        /* inferred */
    /* 0x1E6 */ s16 unk_1E6;                        /* inferred */
    /* 0x1E8 */ s16 unk_1E8;                        /* inferred */
    /* 0x1EA */ s16 unk_1EA;                        /* inferred */
    /* 0x1EC */ s16 unk_1EC;                        /* inferred */
    /* 0x1EE */ s16 unk_1EE;                        /* inferred */
    /* 0x1F0 */ char pad_1F0[0x2];
    /* 0x1F2 */ s16 unk_1F2;                        /* inferred */
    /* 0x1F4 */ char pad_1F4[0xE];                  /* maybe part of unk_1F2[8]? */
    /* 0x202 */ s16 unk_202;                        /* inferred */
    /* 0x204 */ s32 unk_204;                        /* inferred */
    /* 0x208 */ char pad_208[0x4];
    /* 0x20C */ f32 unk_20C;                        /* inferred */
    /* 0x210 */ char pad_210[0x10];                 /* maybe part of unk_20C[5]? */
    /* 0x220 */ EnPrz *unk_220;                     /* inferred */
    /* 0x224 */ ColliderCylinder unk_224;           /* inferred */
} EnPrz;                                            /* size = 0x270 */

struct _mips2c_stack_EnPrz_Destroy {};              /* size 0x0 */

struct _mips2c_stack_EnPrz_Draw {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnPrz_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnPrz_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ CollisionCheckContext *sp30;         /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80A75F18 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ AnimationHeaderCommon **sp28;        /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A75FA4 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ WaterBox *sp2C;                      /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A76070 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A762C0 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ u32 sp44;                            /* inferred */
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0xC];
    /* 0x54 */ CollisionPoly *sp54;                 /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80A76388 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A763E8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0x14];                   /* maybe part of sp24[6]? */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A76604 {};              /* size 0x0 */

struct _mips2c_stack_func_80A76634 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A76748 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A767A8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0x3];
    /* 0x2B */ u8 sp2B;                             /* inferred */
    /* 0x2C */ char pad_2C[0xC];                    /* maybe part of sp2B[13]? */
    /* 0x38 */ Actor *sp38;                         /* inferred */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A76A1C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A76B14 {
    /* 0x00 */ char pad_0[0x6C];
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ char pad_78[0x4];
    /* 0x7C */ WaterBox *sp7C;                      /* inferred */
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80A76F70 {};              /* size 0x0 */

struct _mips2c_stack_func_80A76FCC {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ? sp1C;                              /* inferred */
    /* 0x1C */ char pad_1C[0xC];
};                                                  /* size = 0x28 */

void func_80A75F18(EnPrz *arg0, s32 arg1, ?);       /* static */
? func_80A75FA4(EnPrz *arg0, GlobalContext *arg1);  /* static */
void func_80A76070(EnPrz *arg0, s16 arg1, GlobalContext *arg2); /* static */
s32 func_80A762C0(EnPrz *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_80A76388(EnPrz *arg0, EnPrz *);           /* static */
void func_80A763E8(EnPrz *arg0, GlobalContext *arg1); /* static */
void func_80A76604(EnPrz *arg0, GlobalContext *arg1); /* static */
void func_80A76634(EnPrz *arg0, GlobalContext *arg1); /* static */
void func_80A76748(EnPrz *arg0);                    /* static */
void func_80A767A8(EnPrz *arg0, GlobalContext *arg1); /* static */
void func_80A76A1C(Actor *arg0);                    /* static */
void func_80A76B14(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A76F70(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80A76FCC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern FlexSkeletonHeader D_06004188;
extern AnimationHeader D_06004340;
static DamageTable D_80A771C0 = {
    {
        0,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0xF1,
        0,
        0,
        0,
        0xF1,
        0xF1,
        0xF2,
        0,
        0,
        0xF1,
        0,
        0,
        0xF1,
        0,
        0,
        0,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static ? D_80A771E0;                                /* unable to generate initializer */
static ColliderCylinderInit D_80A771F4 = {
    {0xA, 0x11, 9, 0, 0x10, 1},
    {4, {0x20000000, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 0},
    {0xA, 0xA, 0, {0, 0, 0}},
};
static ? D_80A77240;                                /* unable to generate initializer */
static ? D_80A77248;                                /* unable to generate initializer */
static ? D_80A7724C;                                /* unable to generate initializer */

void EnPrz_Init(Actor *thisx, GlobalContext *globalCtx) {
    u32 temp_t8;
    EnPrz *this = (EnPrz *) thisx;

    this->unk_20C = 0.01f;
    this->unk_1E4 = this->actor.world.rot.y;
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.targetMode = 3;
    this->unk_1E8 = 0xFF;
    this->actor.hintId = 0x5B;
    this->actor.colChkInfo.damageTable = &D_80A771C0;
    this->actor.colChkInfo.health = 1;
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_06004188, &D_06004340, &this->unk_188, &this->unk_1A6, 5);
    temp_t8 = this->actor.flags | 0x8000000;
    this->actor.flags = temp_t8;
    this->unk_1E6 = this->actor.params & 0xFF;
    this->actor.flags = temp_t8 & ~1;
    this->actor.shape.yOffset = 500.0f;
    Collider_InitAndSetCylinder(globalCtx, &this->unk_224, (Actor *) this, &D_80A771F4);
    Math_Vec3f_Copy(&this->unk_1D8, (Vec3f *) &this->actor.world);
    this->unk_220 = this;
    this->unk_1EC = 0xFF;
    this->unk_202 = (s16) (s32) randPlusMinusPoint5Scaled(((f32) this->unk_1E6 * 100.0f) + 1000.0f);
    func_80A76388(this);
}

void EnPrz_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnPrz *this = (EnPrz *) thisx;

}

void func_80A75F18(EnPrz *arg0, s32 arg1) {
    AnimationHeaderCommon **sp28;
    AnimationHeaderCommon **temp_v1;

    arg0->unk_204 = arg1;
    temp_v1 = (arg1 * 4) + &D_80A77240;
    sp28 = temp_v1;
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) *temp_v1, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*temp_v1), (u8) (s32) *(&D_80A77248 + arg1), -2.0f);
}

? func_80A75FA4(EnPrz *arg0, GlobalContext *arg1) {
    WaterBox *sp2C;
    f32 temp_f0;
    f32 temp_f0_2;

    if (func_800CA1AC(arg1, arg1 + 0x830, arg0->actor.world.pos.x, arg0->actor.world.pos.z, arg0 + 0x210, &sp2C) != 0) {
        temp_f0 = (f32) gGameInfo->data[2410] + (arg0->unk_210 - 10.0f);
        if (temp_f0 < arg0->actor.world.pos.y) {
            arg0->unk_1D8.y = temp_f0;
            return 1;
        }
        goto block_5;
    }
    temp_f0_2 = arg0->actor.floorHeight + 35.0f;
    if (arg0->actor.world.pos.y < temp_f0_2) {
        arg0->unk_1D8.y = temp_f0_2;
        return 2;
    }
block_5:
    return 0;
}

void func_80A76070(EnPrz *arg0, s16 arg1, GlobalContext *arg2) {
    f32 sp28;
    s16 temp_v0;
    s32 temp_f16;
    s32 temp_f16_2;
    s32 phi_s0;
    s32 phi_s0_2;
    s16 phi_s0_3;

    temp_v0 = arg0->actor.world.rot.y;
    temp_f16 = (s32) ((f32) (s16) (arg1 - temp_v0) * 0.01f);
    phi_s0 = (s32) (s16) temp_f16;
    if ((s32) (s16) temp_f16 >= 0x65) {
        phi_s0 = 0x64;
    }
    phi_s0_2 = phi_s0;
    if (phi_s0 < -0x64) {
        phi_s0_2 = -0x64;
    }
    sp28 = fabsf((f32) temp_v0 - (f32) arg1);
    arg1 = arg1;
    if (sp28 < (randPlusMinusPoint5Scaled(20.0f) + 100.0f)) {
        Math_ApproachZeroF(arg0 + 0x218, 0.5f, 20.0f);
    } else {
        Math_ApproachF(arg0 + 0x218, (f32) phi_s0_2, 0.5f, 5.0f);
    }
    temp_f16_2 = (s32) (fabsf(arg0->unk_218) * 0.1f);
    phi_s0_3 = (s16) temp_f16_2;
    if ((s32) (s16) temp_f16_2 < 2) {
        phi_s0_3 = 2;
    }
    Math_SmoothStepToS(arg0 + 0x32, arg1, phi_s0_3, (s16) (arg0->unk_202 + 0x1388), (s16) 0);
    func_80A75FA4(arg0, arg2);
    Math_ApproachF(arg0 + 0x28, arg0->unk_1D8.y, 0.5f, 1.0f);
    if (fabsf(arg0->actor.world.pos.y - arg0->unk_208) > 4.0f) {
        Math_SmoothStepToS(arg0 + 0x30, (s16) (s32) ((f32) Math_Vec3f_Pitch(arg0 + 0x24, arg0 + 0x1D8) * 0.5f), 1, (s16) (gGameInfo->data[2448] + 0x1F4), (s16) 0);
        return;
    }
    Math_SmoothStepToS(arg0 + 0x30, 0, 1, (s16) (gGameInfo->data[2452] + 0xBB8), (s16) 0);
}

s32 func_80A762C0(EnPrz *arg0, GlobalContext *arg1) {
    CollisionPoly *sp54;
    ? sp48;
    u32 sp44;
    f32 sp40;
    f32 sp38;
    Vec3f *sp30;
    Vec3f *temp_a1;

    temp_a1 = arg0 + 0x24;
    sp30 = temp_a1;
    Math_Vec3f_Copy((Vec3f *) &sp38, temp_a1);
    sp38 += Math_SinS(arg0->actor.world.rot.y) * 40.0f;
    sp40 += Math_CosS(arg0->actor.world.rot.y) * 40.0f;
    if (func_800C55C4(arg1 + 0x830, temp_a1, (Vec3f *) &sp38, (Vec3f *) &sp48, &sp54, 1U, 0U, 0U, 1U, &sp44) != 0) {
        return 1;
    }
    return 0;
}

void func_80A76388(EnPrz *arg0) {
    arg0->actor.speedXZ = randPlusMinusPoint5Scaled(1.0f) + 4.0f;
    func_80A75F18(arg0, 0);
    arg0->unk_1EA = 1;
    arg0->actionFunc = func_80A763E8;
}

void func_80A763E8(EnPrz *arg0, GlobalContext *arg1) {
    void *sp3C;
    Vec3f *sp24;
    Vec3f *temp_a1;
    f32 temp_f12;
    f32 temp_f2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_v1 = arg0->actor.parent;
    if (arg0 != arg0->unk_220) {
        if (((arg1->actorCtx.actorList[2].first->unk_A6C * 0x10) < 0) && (arg0->unk_1F2 == 0)) {
            func_80A76748(arg0);
            return;
        }
        sp3C = temp_v1;
        if (func_80A762C0(arg0) != 0) {
            func_80A76604(arg0, arg1);
            return;
        }
        temp_v0 = arg0->unk_220;
        if ((temp_v0 != 0) && (temp_v0->update == 0)) {
            arg0->unk_220 = arg0->actor.parent;
        }
        if ((arg0->unk_1EE == 0) && (arg0->unk_1F2 == 0)) {
            arg0->unk_214 = randPlusMinusPoint5Scaled(40.0f);
            arg0->unk_1D8.x += Math_SinS((s16) (arg0->unk_220->world.rot.y + 0x8000)) * arg0->unk_214;
            temp_v0_2 = arg0->unk_220;
            arg0->unk_1D8.y = randPlusMinusPoint5Scaled(40.0f) + (temp_v0_2->world.pos.y + 40.0f);
            arg0->unk_1D8.z += Math_CosS((s16) (temp_v0_2->world.rot.y + 0x8000)) * arg0->unk_214;
            arg0->unk_1EE = Rand_S16Offset(0x14, 0x1E);
        } else {
            temp_f2 = arg0->actor.world.pos.x - temp_v1->world.pos.x;
            temp_f12 = arg0->actor.world.pos.z - temp_v1->world.pos.z;
            if (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) > 100.0f) {
                Math_Vec3f_Copy(arg0 + 0x1D8, temp_v1 + 0x24);
            }
        }
        temp_a1 = arg0 + 0x1D8;
        sp24 = temp_a1;
        if ((Rand_ZeroOne() < 0.1f) && (arg0->unk_1C8 == 0)) {
            arg0->unk_1C8 = 1;
        }
        func_80A76070(arg0, Math_Vec3f_Yaw(arg0 + 0x24, temp_a1), arg1);
        /* Duplicate return node #18. Try simplifying control flow for better match */
    }
}

void func_80A76604(EnPrz *arg0, GlobalContext *arg1) {
    arg0->unk_1EE = 0;
    arg0->unk_1E4 = arg0->actor.world.rot.y + 0x4000;
    arg0->unk_1EA = 2;
    arg0->actionFunc = func_80A76634;
}

void func_80A76634(EnPrz *arg0, GlobalContext *arg1) {
    void *sp24;
    GlobalContext *temp_a2;
    s16 temp_v0;
    s32 phi_v1;

    temp_a2 = arg1;
    sp24 = temp_a2->actorCtx.actorList[2].first;
    arg1 = temp_a2;
    func_80A76070(arg0, arg0->unk_1E4, temp_a2);
    temp_v0 = arg0->actor.world.rot.y - arg0->unk_1E4;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    if (phi_v1 < 0x100) {
        if (func_80A762C0(arg0, arg1, arg1) != 0) {
            arg0->unk_1E4 += 0x1500;
            arg0->unk_1E4 += (s32) Rand_ZeroFloat(5000.0f);
            return;
        }
        if (((sp24->unk_A6C * 0x10) < 0) && (sp24->floorHeight < 30.0f)) {
            arg0->actionFunc = func_80A763E8;
            return;
        }
        arg0->unk_1EE = 0xA;
        arg0->unk_1EA = 1;
        arg0->actionFunc = func_80A763E8;
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_80A76748(EnPrz *arg0) {
    arg0->actor.speedXZ = randPlusMinusPoint5Scaled(1.0f) + 3.0f;
    arg0->unk_1EE = 0;
    arg0->unk_1EA = 3;
    arg0->actionFunc = func_80A767A8;
    arg0->unk_144.animPlaybackSpeed = 2.0f;
}

void func_80A767A8(EnPrz *arg0, GlobalContext *arg1) {
    void *sp3C;
    Actor *sp38;
    u8 sp2B;
    Vec3f *sp24;
    Actor *temp_v0;
    f32 temp_f12;
    f32 temp_f2;

    sp3C = arg1->actorCtx.actorList[2].first;
    sp38 = arg0->actor.parent;
    if (func_80A762C0(arg0) != 0) {
        func_80A75F18(arg0, 0);
        arg0->actor.speedXZ = randPlusMinusPoint5Scaled(1.0f) + 4.0f;
        func_80A76604(arg0, arg1);
        return;
    }
    temp_v0 = arg0->actor.parent;
    temp_f2 = sp3C->world.pos.x - temp_v0->home.pos.x;
    temp_f12 = sp3C->world.pos.z - temp_v0->home.pos.z;
    if (((sp3C->unk_A6C * 0x10) >= 0) || (sp38->unk_2C8 < sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)))) {
        arg0->unk_1F2 = 0x64;
        arg0->unk_144.animPlaybackSpeed = 1.0f;
        func_80A76388((bitwise EnPrz *) temp_f12, arg0);
        return;
    }
    if ((arg0->actor.xzDistToPlayer < 200.0f) && (fabsf(sp3C->world.pos.y - arg0->actor.world.pos.y) < 80.0f)) {
        if (arg0->unk_204 != 1) {
            func_80A75F18((bitwise EnPrz *) temp_f12, (s32) arg0, 1);
        }
        arg0->unk_144.animPlaybackSpeed = 1.0f;
    } else {
        if (arg0->unk_204 != 0) {
            func_80A75F18((bitwise EnPrz *) temp_f12, (s32) arg0, 0);
        }
        arg0->unk_144.animPlaybackSpeed = 2.0f;
    }
    if (arg0->unk_1EE == 0) {
        arg0->unk_1EE = Rand_S16Offset(2, 3);
        Math_Vec3f_Copy(&arg0->unk_1D8, sp3C + 0x24);
    }
    sp24 = &arg0->unk_1D8;
    if ((Rand_ZeroOne() < 0.1f) && (arg0->unk_1C8 == 0)) {
        arg0->unk_1C8 = 1;
    }
    sp2B = gSaveContext.playerForm;
    arg0->unk_1D8.y = randPlusMinusPoint5Scaled((2.0f * (f32) arg0->unk_1E6) + 1.0f) + (sp3C->world.pos.y + *(&D_80A771E0 + (sp2B * 4)));
    func_80A76070(arg0, Math_Vec3f_Yaw((Vec3f *) &arg0->actor.world, sp24), arg1);
}

void func_80A76A1C(Actor *arg0) {
    s32 temp_t7;

    arg0->unk_1E8 = 0;
    temp_t7 = arg0->flags | 0x8000000;
    arg0->flags = temp_t7;
    arg0->flags = temp_t7 & ~1;
    Audio_PlayActorSound2(arg0, 0x3978U);
    arg0->unk_1EE = Rand_S16Offset(0x64, 0x1E);
    arg0->unk_1FC = 0x4000;
    if (Rand_ZeroOne() < 0.5f) {
        arg0->unk_1FC = -0x4000;
    }
    arg0->unk_1FE = (s16) arg0->world.rot.y;
    arg0->speedXZ = Rand_ZeroFloat(0.5f);
    arg0->world.rot.y = (s16) (s32) randPlusMinusPoint5Scaled(32768.0f);
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x1E);
    arg0->unk_1EE = 0x32;
    func_80A75F18((EnPrz *) arg0, 0);
    arg0->unk_1EA = 7;
    arg0->unk_1C4 = func_80A76B14;
}

void func_80A76B14(Actor *arg0, GlobalContext *arg1) {
    WaterBox *sp7C;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 *temp_s1;
    f32 temp_f0;
    s32 temp_s0;
    s32 phi_s0;
    s32 phi_s0_2;

    Math_SmoothStepToS(arg0 + 0xBC, 0, 5, 0x2710, (s16) 0x3E8);
    Math_SmoothStepToS(arg0 + 0xC0, arg0->unk_1FC, 5, 0x2710, (s16) 0x3E8);
    Math_SmoothStepToS(arg0 + 0xBE, arg0->unk_1FE, 5, 0x2710, (s16) 0x3E8);
    phi_s0 = 0;
    phi_s0_2 = 0;
    if (func_800CA1AC(arg1, arg1 + 0x830, arg0->world.pos.x, arg0->world.pos.z, arg0 + 0x210, &sp7C) != 0) {
        temp_f0 = arg0->unk_210;
        if ((temp_f0 - 15.0f) <= arg0->world.pos.y) {
            phi_s0 = 1;
        } else {
            Math_ApproachF(arg0 + 0x28, temp_f0 - 14.0f, 0.3f, 1.0f);
        }
    }
    if ((arg0->unk_1EE == 0) || (phi_s0 != 0)) {
        Math_SmoothStepToS(arg0 + 0x1EC, 0, 1, 0xF, (s16) 0x32);
        if ((s32) arg0->unk_1EC < 2) {
            temp_s1 = &sp6C;
            do {
                Math_Vec3f_Copy((Vec3f *) temp_s1, arg0 + 0x24);
                sp6C += randPlusMinusPoint5Scaled(20.0f);
                sp70 += randPlusMinusPoint5Scaled(5.0f);
                sp74 += randPlusMinusPoint5Scaled(20.0f);
                EffectSsBubble_Spawn(arg1, (Vec3f *) temp_s1, 0.0f, 5.0f, 5.0f, Rand_ZeroFloat(0.03f) + 0.07f);
                temp_s0 = phi_s0_2 + 1;
                phi_s0_2 = temp_s0;
            } while (temp_s0 != 0xA);
            Actor_MarkForDeath(arg0);
        }
    }
}

void EnPrz_Update(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    CollisionCheckContext *sp30;
    ColliderCylinder *sp2C;
    Actor *temp_v0_3;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    s16 temp_v0;
    s16 temp_v0_2;
    EnPrz *this = (EnPrz *) thisx;

    sp44 = 0;
    if (this->unk_1EA != 7) {
        SkelAnime_FrameUpdateMatrix(&this->unk_144);
    }
    this->actionFunc(this, globalCtx);
    temp_v0 = this->unk_1EE;
    if (temp_v0 != 0) {
        this->unk_1EE = temp_v0 - 1;
    }
    temp_v0_2 = this->unk_1F2;
    if (temp_v0_2 != 0) {
        this->unk_1F2 = temp_v0_2 - 1;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 10.0f, 10.0f, 0x1DU);
    if (this->unk_1EA != 7) {
        Math_Vec3s_Copy((Vec3s *) &this->actor.shape, &this->actor.world.rot);
    }
    if (this->unk_1EA != 7) {
        if ((this->unk_224.base.acFlags & 2) != 0) {
            Actor_ApplyDamage((Actor *) this);
            if ((s32) this->actor.colChkInfo.health <= 0) {
                sp44 = 1;
            }
        }
        if (((sp44 != 0) || (temp_v0_3 = this->actor.parent, (temp_v0_3 == 0)) || ((s32) temp_v0_3->colChkInfo.health <= 0)) && (this->unk_224.base.acFlags &= 0xFFFD, (this->unk_1EA != 7))) {
            func_80A76A1C((Actor *) this);
            return;
        }
        temp_a1 = &this->unk_224;
        sp2C = temp_a1;
        Collider_UpdateCylinder((Actor *) this, temp_a1);
        temp_a1_2 = &globalCtx->colChkCtx;
        sp30 = temp_a1_2;
        CollisionCheck_SetAT(globalCtx, temp_a1_2, (Collider *) sp2C);
        CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) sp2C);
        if (this->unk_1C8 != 0) {
            Math_Vec3f_Copy((Vec3f *) &sp38, &this->unk_1CC);
            this->unk_1C8 = 0;
            sp38 += randPlusMinusPoint5Scaled(20.0f);
            sp3C += randPlusMinusPoint5Scaled(5.0f);
            sp40 += randPlusMinusPoint5Scaled(20.0f);
            EffectSsBubble_Spawn(globalCtx, (Vec3f *) &sp38, 0.0f, 5.0f, 5.0f, Rand_ZeroFloat(0.03f) + 0.07f);
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
    }
}

s32 func_80A76F70(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 2) {
        arg4->y += (s32) arg5->unk_218 * -0x64;
    }
    return 0;
}

void func_80A76FCC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? sp1C;

    sp1C.unk_0 = (s32) D_80A7724C.unk_0;
    sp1C.unk_4 = (s32) D_80A7724C.unk_4;
    sp1C.unk_8 = (s32) D_80A7724C.unk_8;
    if (arg1 == 2) {
        SysMatrix_InsertTranslation(0.0f, 0.0f, 0.0f, 1);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp1C, arg4 + 0x1CC);
    }
}

void EnPrz_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    s32 temp_v1;
    EnPrz *this = (EnPrz *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    if (this->unk_1EC == 0xFF) {
        temp_v0 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w1 = 0;
        temp_v0->words.w0 = 0xE7000000;
        temp_v0_2 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFA000000;
        temp_v1 = this->unk_1E8 & 0xFF;
        temp_v0_2->words.w1 = (temp_v1 << 0x18) | (temp_v1 << 0x10) | (temp_v1 << 8) | (this->unk_1EC & 0xFF);
        temp_v0_3 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFB000000;
        temp_v0_3->words.w1 = this->unk_1EC & 0xFF;
        Scene_SetRenderModeXlu(globalCtx, 0, 1U);
        SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80A76F70, func_80A76FCC, (Actor *) this);
        return;
    }
    temp_v1_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v1_2 + 8;
    temp_v1_2->words.w1 = 0;
    temp_v1_2->words.w0 = 0xE7000000;
    temp_v1_3 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = temp_v1_3 + 8;
    temp_v1_3->words.w0 = 0xFB000000;
    temp_v1_3->words.w1 = this->unk_1EC & 0xFF;
    Scene_SetRenderModeXlu(globalCtx, 1, 2U);
    temp_s1->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, NULL, NULL, (Actor *) this, temp_s1->polyXlu.p);
}
