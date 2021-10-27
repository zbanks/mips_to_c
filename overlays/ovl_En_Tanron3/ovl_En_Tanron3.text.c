typedef struct EnTanron3 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x36];                 /* maybe part of unk_188[10]? */
    /* 0x1C4 */ Vec3s unk_1C4;                      /* inferred */
    /* 0x1CA */ char pad_1CA[0x36];                 /* maybe part of unk_1C4[10]? */
    /* 0x200 */ s16 unk_200;                        /* inferred */
    /* 0x202 */ char pad_202[0x2];
    /* 0x204 */ s16 unk_204;                        /* inferred */
    /* 0x206 */ char pad_206[0x4];                  /* maybe part of unk_204[3]? */
    /* 0x20A */ s16 unk_20A;                        /* inferred */
    /* 0x20C */ s16 unk_20C;                        /* inferred */
    /* 0x20E */ char pad_20E[0x36];                 /* maybe part of unk_20C[28]? */
    /* 0x244 */ f32 unk_244;                        /* inferred */
    /* 0x248 */ char pad_248[0x8];                  /* maybe part of unk_244[3]? */
    /* 0x250 */ s32 unk_250;                        /* inferred */
    /* 0x254 */ char pad_254[0xC];                  /* maybe part of unk_250[4]? */
    /* 0x260 */ ColliderCylinder unk_260;           /* inferred */
    /* 0x2AC */ ColliderCylinder unk_2AC;           /* inferred */
    /* 0x2F8 */ void (*actionFunc)(EnTanron3 *, GlobalContext *);
} EnTanron3;                                        /* size = 0x2FC */

struct _mips2c_stack_EnTanron3_Destroy {};          /* size 0x0 */

struct _mips2c_stack_EnTanron3_Draw {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnTanron3_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnTanron3_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ ColliderCylinder *sp30;              /* inferred */
    /* 0x34 */ CollisionCheckContext *sp34;         /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80BB85A0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BB87D4 {
    /* 0x00 */ char pad_0[0x8C];
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ char pad_A4[0x4];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_80BB897C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BB8A48 {
    /* 0x00 */ char pad_0[0x32];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ void *sp44;                          /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x4];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80BB91D4 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BB9288 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BB9308 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BB95FC {};              /* size 0x0 */

void func_80BB85A0(void *arg0, f32 *arg1);          /* static */
void func_80BB87D4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BB897C(EnTanron3 *arg0, GlobalContext *arg1); /* static */
void func_80BB8A48(Actor *arg0, void *arg1);        /* static */
void func_80BB91D4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BB9288(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BB9308(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BB95FC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
extern FlexSkeletonHeader D_0600DA20;
extern AnimationHeader D_0600DAAC;
static ? D_80BB9720;                                /* unable to generate initializer */
static Actor *D_80BB972C = NULL;
static ColliderCylinderInit D_80BB9750[2] = {
    {
        {3, 0x11, 9, 0x39, 0x10, 1},
        {3, {0xF7CFFFFF, 0, 2}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {7, 0xA, 0xFFFB, {0, 0, 0}},
    },
    {
        {3, 0x11, 9, 0x39, 0x10, 1},
        {3, {0xF7CFFFFF, 0, 2}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
        {0x14, 0x14, 0xFFF6, {0, 0, 0}},
    },
};
static Color_RGBA8 D_80BB97A8 = {0x64, 0x37, 0x37, 0xFF};
static Color_RGBA8 D_80BB97AC = {0x32, 0xA, 0xA, 0xFF};

void func_80BB85A0(void *arg0, f32 *arg1) {
    s16 temp_v0;
    u8 temp_v1;
    void *phi_s0;
    s16 phi_v0;

    phi_s0 = arg0->unk_18870;
    phi_v0 = 0;
loop_1:
    temp_v1 = phi_s0->unk_0;
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if ((temp_v1 == 0) || (temp_v1 == 1)) {
        phi_s0->unk_0 = 2U;
        phi_s0->unk_4 = (s32) arg1->unk_0;
        phi_s0->unk_8 = (s32) arg1[1];
        phi_s0->unk_C = (s32) arg1[2];
        phi_s0->unk_10 = (f32) D_80BB9720.unk_0;
        phi_s0->unk_14 = (?32) D_80BB9720.unk_4;
        phi_s0->unk_18 = (f32) D_80BB9720.unk_8;
        phi_s0->unk_1C = (f32) D_80BB9720.unk_0;
        phi_s0->unk_20 = (?32) D_80BB9720.unk_4;
        phi_s0->unk_20 = 0xC0000000;
        phi_s0->unk_24 = (f32) D_80BB9720.unk_8;
        phi_s0->unk_38 = 0.0f;
        phi_s0->unk_34 = 0.1f;
        phi_s0->unk_3C = Rand_ZeroFloat(6.2831855f);
        phi_s0->unk_2 = (s16) (s32) Rand_ZeroFloat(100.0f);
        phi_s0->unk_10 = randPlusMinusPoint5Scaled(25.0f);
        phi_s0->unk_18 = randPlusMinusPoint5Scaled(25.0f);
        return;
    }
    phi_s0 += 0x44;
    if ((s32) temp_v0 >= 0x96) {
        return;
    }
    goto loop_1;
}

void EnTanron3_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_t2;
    EnTanron3 *this = (EnTanron3 *) thisx;

    this->actor.gravity = -1.0f;
    Collider_InitAndSetCylinder(globalCtx, &this->unk_260, (Actor *) this, D_80BB9750);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_2AC, (Actor *) this, D_80BB9750);
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_0600DA20, &D_0600DAAC, &this->unk_188, &this->unk_1C4, 0xA);
    Actor_SetScale((Actor *) this, 0.02f);
    func_80BB897C(this, globalCtx);
    this->actor.flags &= -2;
    temp_t2 = (s32) Rand_ZeroFloat(500000.0f);
    this->unk_244 = 430.0f;
    this->unk_250 = temp_t2;
    D_80BB972C = this->actor.parent;
}

void EnTanron3_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    Actor *temp_v0;
    EnTanron3 *this = (EnTanron3 *) thisx;

    temp_v0 = D_80BB972C;
    temp_v0->unk_252 = (s8) (temp_v0->unk_252 - 1);
}

void func_80BB87D4(Actor *arg0, GlobalContext *arg1) {
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 *temp_s4;
    f32 temp_f20;
    s32 temp_s0;
    s32 phi_s0;

    temp_s4 = &sp8C;
    phi_s0 = 0;
    do {
        SysMatrix_InsertYRotation_f(Rand_ZeroFloat(6.2831855f), 0);
        SysMatrix_RotateStateAroundXAxis(Rand_ZeroFloat(6.2831855f));
        SysMatrix_GetStateTranslationAndScaledZ(Rand_ZeroFloat(3.0f) + 2.0f, (Vec3f *) &sp98);
        sp8C = sp98 * -0.05f;
        sp90 = sp9C * -0.05f;
        sp94 = spA0 * -0.05f;
        temp_f20 = Rand_ZeroFloat(30.0f);
        EffectSsDtBubble_SpawnCustomColor(arg1, arg0 + 0x24, (Vec3f *) &sp98, (Vec3f *) temp_s4, &D_80BB97A8, &D_80BB97AC, (s16) (s32) (temp_f20 + 70.0f), (s16) (s32) (Rand_ZeroFloat(5.0f) + 15.0f), (s16) 0);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x14);
}

void func_80BB897C(EnTanron3 *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80BB8A48;
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x144, &D_0600DAAC, -10.0f);
    arg0->unk_234 = 0;
    arg0->unk_238 = 5;
    arg0->unk_204 = 0x32;
    arg0->actor.speedXZ = 5.0f;
    arg0->unk_240 = 0.5f;
    arg0->unk_228 = randPlusMinusPoint5Scaled(500.0f);
    arg0->unk_22C = randPlusMinusPoint5Scaled(100.0f);
    arg0->unk_230 = randPlusMinusPoint5Scaled(500.0f);
    Math_Vec3f_Copy(arg0 + 0x21C, arg0 + 0x24);
    arg0->unk_200 = (s16) (s32) Rand_ZeroFloat(100.0f);
}

void func_80BB8A48(Actor *arg0, GlobalContext *arg1) {
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp48;
    void *sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s32 sp34;
    s16 sp32;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    s32 temp_v0_3;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_v1;
    s32 phi_t6;

    sp48 = 0.0f;
    temp_v1 = arg1->actorCtx.actorList[2].first;
    arg0->unk_15C = 4.0f;
    if (((temp_v1->bgCheckFlags & 1) != 0) && (temp_v1->shape.feetPos[0].y >= 438.0f)) {
        arg0->unk_202 = 1U;
    } else if ((arg0->unk_202 != 0) && (arg0->unk_208 == 0) && ((arg0[1].shape.rot.x & 0x1F) == 0)) {
        temp_f14 = arg0[1].shape.feetPos[0].y - temp_v1->world.pos.x;
        temp_f12 = arg0[1].shape.feetPos[1].x - temp_v1->world.pos.z;
        if (sqrtf((temp_f14 * temp_f14) + (temp_f12 * temp_f12)) < 500.0f) {
            arg0->unk_202 = 0U;
            arg0->unk_208 = 0x96;
        }
    }
    temp_f0 = arg0[1].uncullZoneScale;
    if (arg0->world.pos.y < temp_f0) {
        temp_v0 = arg0->unk_202;
        arg0->unk_203 = 0U;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {

            } else {
                if ((D_80BB972C->unk_324 != 0) && ((arg0[1].shape.rot.x & 7) == 0)) {
                    arg0[1].prevPos.z = 2.8026e-41f;
                    arg0->speedXZ = 6.0f;
                } else {
                    arg0[1].prevPos.z = 1.121e-41f;
                }
                arg0->unk_236 = 0x200;
                arg0[1].projectedW = 2.0f;
                Matrix_RotateY(Math_FAtan2F(arg0[1].shape.feetPos[1].x, arg0[1].shape.feetPos[0].y), 0U);
                SysMatrix_GetStateTranslationAndScaledZ(700.0f, arg0 + 0x21C);
                arg0[1].shape.feetPos[0].z = 250.0f;
                sp48 = 150.0f;
            }
        } else {
            arg0->unk_236 = 0x1000;
            arg0[1].prevPos.z = 2.102e-41f;
            arg0[1].projectedW = 5.0f;
            sp44 = temp_v1;
            Math_Vec3f_Copy(arg0 + 0x21C, temp_v1 + 0x24);
            if ((arg0[1].shape.rot.x & 0xF) == 0) {
                sp44 = temp_v1;
                if ((Rand_ZeroOne() < 0.5f) && (arg0->xzDistToPlayer <= 200.0f)) {
                    sp44 = temp_v1;
                    Audio_PlayActorSound2(arg0, 0x39F4U);
                }
            }
            if ((arg0->unk_208 == 0) || ((arg1->actorCtx.actorList[2].first->unk_A70 & 0x80) != 0)) {
                arg0->unk_208 = 0x96;
                arg0->unk_202 = 1U;
            }
        }
        if (arg0[1].shape.face == 0) {
            if ((arg0[1].shape.rot.z == 0) && (arg0->speedXZ > 1.0f)) {
                arg0[1].shape.rot.z = (s16) (s32) Rand_ZeroFloat(20.0f);
                arg0[1].shape.feetPos[1].y = randPlusMinusPoint5Scaled(100.0f);
                arg0[1].shape.feetPos[1].z = randPlusMinusPoint5Scaled(50.0f + sp48);
                arg0[1].projectedPos.x = randPlusMinusPoint5Scaled(100.0f);
            }
            arg0->unk_214 = (f32) (arg0[1].shape.feetPos[0].z + arg0[1].shape.feetPos[1].z + 50.0f);
        }
        temp_f2 = arg0[1].shape.feetPos[0].y + arg0[1].shape.feetPos[1].y;
        temp_f16 = arg0[1].shape.feetPos[1].x + arg0[1].projectedPos.x;
        arg0[1].shape.shadowScale = temp_f2;
        temp_f18 = temp_f2 - arg0->world.pos.x;
        arg0[1].shape.feetPos[0].x = temp_f16;
        sp54 = arg0->unk_214 - arg0->world.pos.y;
        sp58 = temp_f18;
        sp50 = temp_f16 - arg0->world.pos.z;
        Math_ApproachS((s16 *) &arg0->world.rot, Math_FAtan2F(sqrtf((temp_f18 * temp_f18) + (sp50 * sp50)), -sp54), arg0->unk_238, arg0->unk_234);
        Math_SmoothStepToS(&arg0->world.rot.y, Math_FAtan2F(sp50, sp58), arg0->unk_238, arg0->unk_234, (s16) 0);
        Math_ApproachS((s16 *) &arg0[1].projectedPos.y, arg0->unk_236, 1, 0x100);
        Math_ApproachF(&arg0->speedXZ, arg0[1].projectedW, 1.0f, arg0[1].uncullZoneForward);
        Actor_SetVelocityAndMoveXYRotationReverse(arg0);
    } else {
        temp_v0_2 = arg0->unk_203;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 != 1) {

            } else {
                arg0[1].prevPos.z = 2.102e-41f;
                arg0->gravity = -1.5f;
                if ((arg0->bgCheckFlags & 1) != 0) {
                    arg0->velocity.y = Rand_ZeroFloat(5.0f) + 5.0f;
                    arg0->speedXZ = Rand_ZeroFloat(2.0f) + 2.0f;
                    if (Rand_ZeroOne() < 0.5f) {
                        arg0->unk_248 = (s16) ((s32) randPlusMinusPoint5Scaled(500.0f) + arg0->unk_248 + 0x8000);
                    }
                    if (Rand_ZeroOne() < 0.5f) {
                        arg0->unk_24C = (s16) ((s32) randPlusMinusPoint5Scaled(500.0f) + arg0->unk_24C + 0x8000);
                    }
                    if (Rand_ZeroOne() < 0.5f) {
                        arg0->unk_24A = (s16) (s32) Rand_ZeroFloat(65536.0f);
                    }
                    sp32 = Math_FAtan2F(arg0->world.pos.z, arg0->world.pos.x);
                    arg0->world.rot.y = (s32) randPlusMinusPoint5Scaled(52768.0f) + sp32;
                }
                Math_ApproachS(&arg0->shape.rot.y, arg0->unk_24A, 3, 0x500);
                Math_ApproachS((s16 *) &arg0->shape, arg0->unk_248, 3, 0xC00);
                Math_ApproachS(&arg0->shape.rot.z, arg0->unk_24C, 3, 0xC00);
                temp_v0_3 = (arg0[1].shape.rot.x & 3) == 0;
                sp34 = temp_v0_3;
                phi_t6 = 0;
                if (Rand_ZeroOne() < 0.5f) {
                    phi_t6 = 1;
                }
                if ((phi_t6 & temp_v0_3) != 0) {
                    sp38 = randPlusMinusPoint5Scaled(30.0f) + arg0->world.pos.x;
                    sp3C = arg0->world.pos.y;
                    sp40 = randPlusMinusPoint5Scaled(30.0f) + arg0->world.pos.z;
                    func_80BB85A0(arg1, &sp38);
                }
            }
        } else {
            arg0[1].shape.face = 0x19;
            arg0->gravity = -1.0f;
            arg0->unk_214 = (f32) (temp_f0 - 50.0f);
            Math_ApproachS((s16 *) &arg0->world.rot, 0x3000, 5, 0xBD0);
            if ((arg0->bgCheckFlags & 8) != 0) {
                arg0->speedXZ = 0.0f;
                if (arg0->velocity.y > 0.0f) {
                    arg0->velocity.y = -1.0f;
                }
            }
            if ((arg0->bgCheckFlags & 1) != 0) {
                arg0->unk_203 = 1U;
            }
        }
        Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    }
    arg0[1].prevPos.y = (bitwise f32) ((bitwise s32) arg0[1].prevPos.y + (bitwise s32) arg0[1].prevPos.z);
    arg0[1].textId = (u16) (s32) (Math_SinS(arg0->unk_252) * 5000.0f);
    arg0[1].freezeTimer = (u16) (s32) (Math_SinS((s16) ((bitwise s32) arg0[1].prevPos.y + 0x6978)) * 5000.0f);
    arg0->unk_258 = (s16) (s32) (Math_SinS(arg0->unk_252) * 5000.0f);
    if (arg0->unk_203 == 0) {
        arg0->unk_BC = (unaligned s32) arg0->unk_30;
        arg0->shape.rot.z = (s16) (u16) arg0->world.rot.z;
    }
}

void func_80BB91D4(Actor *arg0, GlobalContext *arg1) {
    f32 sp24;
    f32 sp1C;
    f32 temp_f18;
    f32 temp_f2;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    arg0[2].speedXZ = func_80BB9288;
    temp_f2 = arg0->world.pos.x - temp_v0->world.pos.x;
    sp24 = temp_f2;
    temp_f18 = arg0->world.pos.z - temp_v0->world.pos.z;
    sp1C = temp_f18;
    arg0->world.rot.x = Math_FAtan2F(sqrtf((temp_f2 * temp_f2) + (temp_f18 * temp_f18)), -((arg0->world.pos.y - temp_v0->world.pos.y) + 30.0f));
    arg0->world.rot.y = Math_FAtan2F(sp1C, sp24);
    arg0[1].shape.rot.z = 6;
    arg0->speedXZ = 10.0f;
    Audio_PlayActorSound2(arg0, 0x3AB6U);
}

void func_80BB9288(Actor *arg0, GlobalContext *arg1) {
    Actor_SetVelocityAndMoveXYRotationReverse(arg0);
    if (arg0[1].shape.rot.z == 0) {
        func_80BB87D4(arg0, arg1);
        Actor_MarkForDeath(arg0);
        if (Rand_ZeroOne() < 0.3f) {
            Item_DropCollectibleRandom(arg1, NULL, (Vec3f *) &arg0->world, 0x60);
        }
    }
}

void func_80BB9308(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0_2;
    u8 temp_v1;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    if (temp_v0->world.pos.y > 350.0f) {
        temp_v1 = arg0->unk_270;
        if ((temp_v1 & 2) != 0) {
            arg0->unk_270 = (u8) (temp_v1 & 0xFFFD);
            func_800B8D50(arg1, NULL, 3.0f, Math_FAtan2F(-temp_v0->world.pos.z, -temp_v0->world.pos.x), 5.0f, 0U);
        }
    }
    temp_v0_2 = arg0->unk_2BD;
    if ((temp_v0_2 & 2) != 0) {
        arg0->unk_2BD = (u8) (temp_v0_2 & 0xFFFD);
        if (arg0->unk_20A == 0) {
            arg0->unk_20A = 0xF;
            arg0->unk_20C = 0xF;
            func_80BB91D4(arg0, arg1);
            D_80BB972C->unk_324 = 0x14;
        }
    }
}

void EnTanron3_Update(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    CollisionCheckContext *sp34;
    ColliderCylinder *sp30;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_a1_2;
    CollisionCheckContext *temp_a1_3;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    void *temp_v1;
    s16 phi_v0;
    EnTanron3 *this = (EnTanron3 *) thisx;

    if (gGameInfo->data[1311] == 0) {
        this->unk_200 += 1;
        phi_v0 = 0;
        do {
            temp_v1 = this + (phi_v0 * 2);
            temp_a0 = temp_v1->unk_204;
            temp_v0 = phi_v0 + 1;
            phi_v0 = temp_v0;
            if (temp_a0 != 0) {
                temp_v1->unk_204 = (s16) (temp_a0 - 1);
            }
        } while ((s32) temp_v0 < 3);
        temp_v0_2 = this->unk_20A;
        if (temp_v0_2 != 0) {
            this->unk_20A = temp_v0_2 - 1;
        }
        temp_v0_3 = this->unk_20C;
        if (temp_v0_3 != 0) {
            this->unk_20C = temp_v0_3 - 1;
        }
        this->actionFunc(this, globalCtx);
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 10.0f, 10.0f, 20.0f, 5U);
        temp_f2 = this->actor.prevPos.y;
        temp_f0 = this->unk_244;
        if (((temp_f2 < temp_f0) && (temp_f0 <= this->actor.world.pos.y)) || ((temp_f0 < temp_f2) && (this->actor.world.pos.y <= temp_f0))) {
            sp38 = this->actor.world.pos.x;
            sp3C = this->unk_244 + 10.0f;
            sp40 = this->actor.world.pos.z;
            EffectSsGSplash_Spawn(globalCtx, (Vec3f *) &sp38, NULL, NULL, (s16) 1, (s16) 0x1F4);
            Audio_PlayActorSound2((Actor *) this, 0x2808U);
        }
    }
    func_80BB9308((Actor *) this, globalCtx);
    temp_a1 = &this->unk_260;
    sp2C = temp_a1;
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    temp_a1_2 = &this->unk_2AC;
    sp30 = temp_a1_2;
    Collider_UpdateCylinder((Actor *) this, temp_a1_2);
    temp_a1_3 = &globalCtx->colChkCtx;
    sp34 = temp_a1_3;
    CollisionCheck_SetAT(globalCtx, temp_a1_3, (Collider *) sp2C);
    CollisionCheck_SetAC(globalCtx, temp_a1_3, (Collider *) sp30);
    if (((s32) (s8) D_80BB972C->colChkInfo.health <= 0) && (func_80BB9288 != this->actionFunc)) {
        func_80BB91D4((Actor *) this, globalCtx);
        this->unk_204 = 0;
    }
}

s32 func_80BB95FC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 1) {
        arg4->y += arg5[1].freezeTimer;
    }
    if (arg1 == 3) {
        arg4->y += arg5->unk_258;
    }
    if (arg1 == 4) {
        arg4->y += arg5[1].textId;
    }
    return 0;
}

void EnTanron3_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    EnTanron3 *this = (EnTanron3 *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    if ((this->unk_20C & 1) != 0) {
        temp_s1->polyOpa.p = Gfx_SetFog(temp_s1->polyOpa.p, 0xFF, 0, 0, 0xFF, 0x384, 0x44B);
    }
    SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80BB95FC, NULL, (Actor *) this);
    temp_s1->polyOpa.p = func_801660B8(globalCtx, temp_s1->polyOpa.p);
}
