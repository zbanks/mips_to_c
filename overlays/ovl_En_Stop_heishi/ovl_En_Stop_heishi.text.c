typedef struct EnStopheishi {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x60];                 /* maybe part of unk_188[17]? */
    /* 0x1EE */ Vec3s unk_1EE;                      /* inferred */
    /* 0x1F4 */ char pad_1F4[0x60];                 /* maybe part of unk_1EE[17]? */
    /* 0x254 */ void (*actionFunc)(EnStopheishi *, GlobalContext *);
    /* 0x258 */ s16 unk_258;                        /* inferred */
    /* 0x25A */ s16 unk_25A;                        /* inferred */
    /* 0x25C */ char pad_25C[0x2];
    /* 0x25E */ s16 unk_25E;                        /* inferred */
    /* 0x260 */ s16 unk_260;                        /* inferred */
    /* 0x262 */ char pad_262[0x3];                  /* maybe part of unk_260[2]? */
    /* 0x265 */ u8 unk_265;                         /* inferred */
    /* 0x266 */ char pad_266[0x2];                  /* maybe part of unk_265[3]? */
    /* 0x268 */ s32 unk_268;                        /* inferred */
    /* 0x26C */ char pad_26C[0x4];
    /* 0x270 */ s16 unk_270;                        /* inferred */
    /* 0x272 */ char pad_272[0x4];                  /* maybe part of unk_270[3]? */
    /* 0x276 */ s16 unk_276;                        /* inferred */
    /* 0x278 */ s16 unk_278;                        /* inferred */
    /* 0x27A */ s16 unk_27A;                        /* inferred */
    /* 0x27C */ s16 unk_27C;                        /* inferred */
    /* 0x27E */ u16 unk_27E;                        /* inferred */
    /* 0x280 */ s16 unk_280;                        /* inferred */
    /* 0x282 */ char pad_282[0x2];
    /* 0x284 */ s32 unk_284;                        /* inferred */
    /* 0x288 */ f32 unk_288;                        /* inferred */
    /* 0x28C */ char pad_28C[0x4];
    /* 0x290 */ Vec3f unk_290;                      /* inferred */
    /* 0x29C */ ColliderCylinder unk_29C;           /* inferred */
} EnStopheishi;                                     /* size = 0x2E8 */

struct _mips2c_stack_EnStopheishi_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnStopheishi_Draw {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnStopheishi_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnStopheishi_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AE750C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ AnimationHeaderCommon **sp2C;        /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AE75C8 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ? sp1C;                              /* inferred */
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AE7718 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AE77D4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AE795C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ Vec3f *sp2C;                         /* inferred */
    /* 0x30 */ char pad_30[0xE];                    /* maybe part of sp2C[4]? */
    /* 0x3E */ s16 sp3E;                            /* inferred */
    /* 0x40 */ char pad_40[0x4];                    /* maybe part of sp3E[3]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ void *sp5C;                          /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80AE7E9C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AE7F34 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ s16 sp30;                            /* inferred */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ Actor *sp34;                         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AE854C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AE85C4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AE87A4 {};              /* size 0x0 */

struct _mips2c_stack_func_80AE87EC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_80AE750C(EnStopheishi *arg0, s32 arg1, s16, SaveContext *); /* static */
void func_80AE75C8(EnStopheishi *arg0, GlobalContext *arg1); /* static */
void func_80AE7718(EnStopheishi *arg0);             /* static */
void func_80AE77D4(EnStopheishi *arg0, EnStopheishi *, GlobalContext *, s16, SaveContext *); /* static */
void func_80AE795C(EnStopheishi *arg0, EnStopheishi *arg1, GlobalContext *, s16, SaveContext *); /* static */
void func_80AE7E9C(EnStopheishi *arg0);             /* static */
void func_80AE854C(EnStopheishi *arg0, GlobalContext *arg1); /* static */
s32 func_80AE87A4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80AE87EC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06006C18;
extern FlexSkeletonHeader D_0600D640;
static ColliderCylinderInit D_80AE88B0 = {
    {0xA, 0, 0, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1},
    {0x32, 0x104, 0, {0, 0, 0}},
};
static ? D_80AE88DC;                                /* unable to generate initializer */
static ? D_80AE897C;                                /* unable to generate initializer */
static ? D_80AE8A1C;                                /* unable to generate initializer */
static ? D_80AE8A24;                                /* unable to generate initializer */
static ? D_80AE8A2C;                                /* unable to generate initializer */
static ? D_80AE8A30;                                /* unable to generate initializer */

void EnStopheishi_Init(Actor *thisx, GlobalContext *globalCtx) {
    f32 temp_f10;
    s16 temp_v0;
    EnStopheishi *this = (EnStopheishi *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 25.0f);
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_0600D640, &D_06006C18, &this->unk_188, &this->unk_1EE, 0x11);
    temp_v0 = this->actor.params;
    this->unk_27A = temp_v0 & 0x3F;
    temp_f10 = (f32) this->actor.world.rot.z * 40.0f;
    this->actor.colChkInfo.mass = 0xFF;
    this->unk_276 = ((s32) temp_v0 >> 0xC) & 0xF;
    this->actor.world.rot.z = 0;
    this->unk_288 = temp_f10 + 50.0f;
    if (this->unk_27A == 0x7F) {
        this->unk_27A = -1;
    }
    if (((s32) this->unk_27A >= 0) && (Flags_GetSwitch(globalCtx, (s32) this->unk_27A) != 0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->actor.targetMode = 0;
    this->actor.gravity = -3.0f;
    Collider_InitAndSetCylinder(globalCtx, &this->unk_29C, (Actor *) this, &D_80AE88B0);
    this->unk_284 = 6;
    this->unk_280 = this->actor.world.rot.y;
    func_80AE7E9C(this);
}

void EnStopheishi_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnStopheishi *this = (EnStopheishi *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_29C);
}

void func_80AE750C(EnStopheishi *arg0, s32 arg1) {
    AnimationHeaderCommon **sp2C;
    AnimationHeaderCommon **temp_v1;
    s32 phi_t0;
    f32 phi_f0;

    temp_v1 = (arg1 * 4) + &D_80AE8A1C;
    arg0->unk_268 = arg1;
    sp2C = temp_v1;
    arg0->unk_26C = (f32) SkelAnime_GetFrameCount(*temp_v1);
    phi_t0 = 2;
    phi_f0 = -10.0f;
    if (((u32) temp_v1 >= (u32) &D_80AE8A24) && (temp_v1 != &D_80AE8A2C)) {
        phi_t0 = 0;
    }
    if (temp_v1 == &D_80AE8A30) {
        phi_f0 = 0.0f;
    }
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) *temp_v1, 1.0f, 0.0f, arg0->unk_26C, (u8) phi_t0, phi_f0);
}

void func_80AE75C8(EnStopheishi *arg0, GlobalContext *arg1) {
    void *sp28;
    f32 sp20;
    ? sp1C;
    Vec3f *temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    u8 temp_v0_3;
    void *temp_a3;
    s32 phi_v1;
    f32 phi_f6;

    temp_v0 = arg0->actor.yawTowardsPlayer - arg0->actor.world.rot.y;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    arg0->unk_260 = 0;
    if (arg0->actor.xzDistToPlayer < 200.0f) {
        temp_a3 = arg1->actorCtx.actorList[2].first;
        if (phi_v1 < 0x4E20) {
            arg0->unk_260 = arg0->actor.yawTowardsPlayer - arg0->actor.world.rot.y;
            temp_v0_2 = arg0->unk_260;
            if ((s32) temp_v0_2 >= 0x2711) {
                arg0->unk_260 = 0x2710;
            } else if ((s32) temp_v0_2 < -0x2710) {
                arg0->unk_260 = -0x2710;
            }
        }
        arg0 = arg0;
        sp28 = temp_a3;
        Math_Vec3f_Copy((Vec3f *) &sp1C, temp_a3 + 0x24);
        temp_v0_3 = temp_a3->unk_14B;
        temp_a0 = arg0 + 0x3C;
        if ((temp_v0_3 == 3) || (temp_v0_3 == 4)) {
            phi_f6 = sp20 + (57.0f + (f32) gGameInfo->data[2434]);
        } else {
            phi_f6 = sp20 + (70.0f + (f32) gGameInfo->data[2435]);
        }
        sp20 = phi_f6;
        arg0 = arg0;
        arg0->unk_25E = Math_Vec3f_Pitch(temp_a0, (Vec3f *) &sp1C);
    }
}

void func_80AE7718(EnStopheishi *arg0) {
    s16 temp_v0;
    s32 temp_t3;
    s32 temp_v0_2;

    temp_v0 = arg0->unk_272;
    if (temp_v0 != 0) {
        arg0->unk_272 = temp_v0 - 1;
    }
    temp_v0_2 = arg0->unk_284;
    arg0->unk_25E = -0xBB8;
    arg0->unk_260 = 0;
    if (temp_v0_2 < 6) {
        arg0->unk_260 = 0x1770;
        if ((temp_v0_2 & 7) == 0) {
            arg0->unk_260 = -0x1770;
        }
        if ((arg0->unk_272 == 0) && (arg0->unk_272 = 0xA, temp_t3 = arg0->unk_284 + 1, arg0->unk_284 = temp_t3, ((temp_t3 < 6) == 0))) {
            arg0->unk_272 = 0x32;
            return;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return;
    }
    if ((arg0->unk_272 == 0) && (Quake_NumActiveQuakes() != 0) && (arg0->unk_284 >= 6)) {
        arg0->unk_284 = 0;
    }
}

void func_80AE77D4(EnStopheishi *arg0) {
    f32 temp_f2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v0;

    arg0->unk_274 = 0;
    arg0->unk_28C = 0.0f;
    arg0->unk_280 = arg0->actor.home.rot.y;
    if (arg0->unk_270 == 1) {
        arg0->unk_25E = 0;
        func_80AE750C(arg0, 5);
    }
    if ((arg0->unk_270 == 0) && (arg0->unk_264 == 0)) {
        temp_f2 = arg0->actor.home.pos.x;
        if ((fabsf(arg0->actor.world.pos.x - temp_f2) > 3.0f) || (fabsf(arg0->actor.world.pos.z - arg0->actor.home.pos.z) > 3.0f)) {
            arg0->unk_144.animPlaybackSpeed = 3.0f;
            Math_ApproachF(arg0 + 0x24, temp_f2, 0.3f, 5.0f);
            Math_ApproachF(arg0 + 0x2C, arg0->actor.home.pos.z, 0.3f, 5.0f);
        } else {
            arg0->unk_264 = 1;
        }
    }
    temp_v0 = arg0->unk_268;
    if ((temp_v0 != 2) && (temp_v0 != 3) && (temp_v0 != 7) && (arg0->unk_264 != 0)) {
        arg0->unk_144.animPlaybackSpeed = 1.0f;
        func_80AE750C(arg0, 2);
        temp_v0_2 = gSaveContext.day;
        phi_v0 = temp_v0_2;
        if ((temp_v0_2 != 3) && (gSaveContext.isNight != 0)) {
            func_80AE750C(arg0, 3);
            phi_v0 = gSaveContext.day;
        }
        if (phi_v0 == 3) {
            func_80AE750C(arg0, 7);
        }
    }
}

void func_80AE795C(EnStopheishi *arg0, EnStopheishi *arg1) {
    void *sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    s16 sp3E;
    Vec3f *sp2C;
    Vec3f *sp28;
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v1;
    u16 temp_t9;
    u8 temp_v0_4;
    void *temp_a2;
    s32 phi_a0;
    f32 phi_f0;
    f32 phi_f12;
    f32 phi_f12_2;

    temp_a2 = arg1[9].unk_29C.base.ac;
    sp58 = arg0->unk_144.animCurrentFrame;
    temp_v1 = arg0->actor.yawTowardsPlayer;
    temp_a1 = temp_a2 + 0x24;
    temp_v0 = temp_v1 - arg0->actor.home.rot.y;
    if ((s32) temp_v0 < 0) {
        phi_a0 = -(s32) temp_v0;
    } else {
        phi_a0 = (s32) temp_v0;
    }
    temp_a0 = arg0 + 8;
    if (phi_a0 < 0x2000) {
        arg0->unk_280 = temp_v1;
    }
    sp2C = temp_a0;
    sp28 = temp_a1;
    sp5C = temp_a2;
    if (arg0->unk_274 != 4) {
        temp_f2 = fabsf((f32) arg0->actor.yawTowardsPlayer - (f32) Math_Vec3f_Yaw(temp_a0, temp_a1)) * 0.01f * 5.0f;
        if (temp_f2 < 1.0f) {
            arg0->unk_144.animPlaybackSpeed = 1.0f;
        } else {
            if (temp_f2 > 5.0f) {
                phi_f0 = 5.0f;
            } else {
                phi_f0 = temp_f2;
            }
            arg0->unk_144.animPlaybackSpeed = phi_f0;
        }
    }
    temp_v0_2 = Math_Vec3f_Yaw(sp2C, sp28);
    sp48 = fabsf(arg0->actor.home.pos.x - sp5C->world.pos.x);
    sp3E = temp_v0_2;
    temp_f12 = fabsf(arg0->actor.home.pos.z - sp5C->world.pos.z);
    sp44 = temp_f12;
    Math_Vec3f_Copy((Vec3f *) &sp4C, sp2C);
    temp_v0_3 = arg0->actor.home.rot.y;
    if (temp_v0_3 == -0x8000) {
        if ((s32) sp3E > 0) {
            sp44 = temp_f12;
            sp48 *= Math_SinS((s16) (temp_v0_3 + 0xC000));
            phi_f12 = Math_CosS((s16) (arg0->actor.home.rot.y + 0xC000)) * temp_f12;
        } else {
            sp44 = temp_f12;
            sp48 *= Math_SinS((s16) (temp_v0_3 + 0x4000));
            phi_f12 = Math_CosS((s16) (arg0->actor.home.rot.y + 0x4000)) * temp_f12;
        }
    } else if ((s32) sp3E < (s32) temp_v0_3) {
        sp44 = temp_f12;
        sp48 *= Math_SinS((s16) (temp_v0_3 + 0xC000));
        phi_f12 = Math_CosS((s16) (arg0->actor.home.rot.y + 0xC000)) * temp_f12;
    } else {
        sp44 = temp_f12;
        sp48 *= Math_SinS((s16) (temp_v0_3 + 0x4000));
        phi_f12 = Math_CosS((s16) (arg0->actor.home.rot.y + 0x4000)) * temp_f12;
    }
    temp_f2_2 = arg0->unk_288;
    phi_f12_2 = phi_f12;
    if (temp_f2_2 < sp48) {
        sp48 = temp_f2_2;
    } else {
        temp_f0 = -temp_f2_2;
        if (sp48 < temp_f0) {
            sp48 = temp_f0;
        }
    }
    temp_f18 = sp4C + sp48;
    if (temp_f2_2 < phi_f12) {
        phi_f12_2 = temp_f2_2;
    } else {
        temp_f0_2 = -temp_f2_2;
        if (phi_f12 < temp_f0_2) {
            phi_f12_2 = temp_f0_2;
        }
    }
    sp4C = temp_f18;
    sp54 += phi_f12_2;
    Math_ApproachF(arg0 + 0x24, temp_f18, 0.5f, arg0->unk_28C);
    Math_ApproachF(arg0 + 0x2C, sp54, 0.5f, arg0->unk_28C);
    Math_ApproachF(arg0 + 0x28C, 50.0f, 0.3f, 1.0f);
    temp_t9 = (u16) arg0->unk_274;
    switch (temp_t9) {
    case 0:
        if (gSaveContext.day != 3) {
            func_80AE750C(arg0, 4);
            arg0->unk_274 = 2;
        } else {
            func_80AE750C(arg0, 2);
            arg0->unk_274 = 1;
        }
        break;
    case 1:
        func_80AE750C(arg0, 4);
        arg0->unk_274 = 2;
        break;
    case 2:
        if (arg0->unk_26C <= sp58) {
            func_80AE750C(arg0, 5);
            arg0->unk_274 = 3;
        }
        break;
    case 3:
        if ((fabsf(arg0->actor.world.pos.x - sp4C) < 2.0f) && (fabsf(arg0->actor.world.pos.z - sp54) < 2.0f)) {
            arg0->unk_144.animPlaybackSpeed = 1.0f;
            func_80AE750C(arg0, 6);
            arg0->unk_274 = 4;
        }
        break;
    case 4:
        if ((fabsf(arg0->actor.world.pos.x - sp4C) > 4.0f) || (fabsf(arg0->actor.world.pos.z - sp54) > 4.0f)) {
            func_80AE750C(arg0, 5);
            arg0->unk_274 = 3;
        }
        break;
    }
    arg0->unk_264 = 0;
    arg0->unk_270 = 0x14;
    arg0->unk_25E = 0;
    if ((arg0->unk_276 == 3) && ((Math_Vec3f_Copy((Vec3f *) &sp4C, sp28), temp_v0_4 = sp5C->unk_14B, (temp_v0_4 == 3)) || (temp_v0_4 == 4))) {
        sp50 += 77.0f + (f32) gGameInfo->data[2437];
        arg0->unk_25E = Math_Vec3f_Pitch(arg0 + 0x3C, (Vec3f *) &sp4C);
    }
}

void func_80AE7E9C(EnStopheishi *arg0) {
    s32 temp_v0;
    s32 phi_v0;

    func_80AE750C(arg0, 2);
    temp_v0 = gSaveContext.day;
    phi_v0 = temp_v0;
    if ((temp_v0 != 3) && (gSaveContext.isNight != 0)) {
        func_80AE750C(arg0, 3);
        phi_v0 = gSaveContext.day;
    }
    if (phi_v0 == 3) {
        func_80AE750C(arg0, 7);
    }
    arg0->unk_274 = 0;
    arg0->unk_278 = 0;
    arg0->actionFunc = func_80AE7F34;
    arg0->actor.speedXZ = 0.0f;
}

void func_80AE7F34(EnStopheishi *this, GlobalContext *globalCtx) {
    Actor *sp34;
    s16 sp32;
    s16 sp30;
    s32 sp2C;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v0_12;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1_2;
    u16 temp_v0_10;
    u16 temp_v0_11;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 temp_v0_8;
    u32 temp_v0_9;
    u32 temp_v1;
    u8 temp_v0;
    void *temp_v0_6;
    void *temp_v0_7;
    s16 phi_a2;
    s32 phi_v0;
    s16 phi_a2_2;
    u16 phi_t8;
    s32 phi_v1;

    sp34 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    if ((this->unk_268 == 5) && (((s32) this->unk_144.animCurrentFrame & 1) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x2931U);
    }
    if (gSaveContext.day != 3) {
        func_80AE75C8(this, globalCtx);
    } else {
        func_80AE7718(this);
    }
    Math_SmoothStepToS(&this->actor.world.rot.y, this->unk_280, 1, 0x1388, (s16) 0);
    sp32 = 0;
    if (gSaveContext.isNight != 0) {
        sp32 = 0x20;
    }
    temp_v0 = sp34->unk_14B;
    phi_a2 = 0;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                if (temp_v0 == 4) {
                    temp_v1 = gSaveContext.roomInf[126][5];
                    temp_v0_2 = (u32) (temp_v1 & 0xFF000000) >> 0x18;
                    if ((temp_v0_2 == 0x10) || (temp_v0_2 == 0x4D) || (temp_v0_2 == 0x4E) || (temp_v0_2 == 0x4F) || (temp_v0_3 = (u32) (temp_v1 & 0xFF0000) >> 0x10, (temp_v0_3 == 0x10)) || (temp_v0_3 == 0x4D) || (temp_v0_3 == 0x4E) || (temp_v0_3 == 0x4F)) {
                        if (this->unk_265 != 0) {
                            phi_a2 = 1;
                        }
                    } else if ((gSaveContext.weekEventReg[12] & 0x20) != 0) {
                        phi_a2 = 1;
                    }
                }
            } else {
                phi_a2 = 4;
            }
        } else {
            phi_a2 = 3;
        }
    } else {
        phi_a2 = 2;
    }
    phi_a2_2 = phi_a2;
    if (((phi_a2 == 1) || (phi_a2 == 2) || (phi_a2 == 3)) && ((temp_v0_4 = this->unk_268, (temp_v0_4 == 4)) || (temp_v0_4 == 5) || (temp_v0_4 == 6))) {
        sp30 = phi_a2;
        func_80AE750C(this, 2, phi_a2, &gSaveContext);
        temp_v0_5 = gSaveContext.day;
        phi_v0 = temp_v0_5;
        if ((temp_v0_5 != 3) && (gSaveContext.isNight != 0)) {
            sp30 = phi_a2;
            func_80AE750C(this, 3, phi_a2);
            phi_v0 = gSaveContext.day;
        }
        phi_a2_2 = phi_a2;
        if (phi_v0 == 3) {
            sp30 = phi_a2;
            func_80AE750C(this, 7, phi_a2);
            phi_a2_2 = phi_a2;
        }
    }
    if ((phi_a2_2 == 0) || (phi_a2_2 == 4)) {
        temp_f2 = this->actor.home.pos.x - sp34->world.pos.x;
        temp_f12 = this->actor.home.pos.z - sp34->world.pos.z;
        this->unk_29C.dim.radius = 0x32;
        this->unk_29C.dim.height = 0x104;
        if (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < 240.0f) {
            sp30 = phi_a2_2;
            func_80AE795C((bitwise EnStopheishi *) temp_f12, this, globalCtx, phi_a2_2, &gSaveContext);
        } else {
            sp30 = phi_a2_2;
            func_80AE77D4((bitwise EnStopheishi *) temp_f12, this, globalCtx, phi_a2_2, &gSaveContext);
        }
    } else {
        this->unk_29C.dim.radius = 0xF;
        this->unk_29C.dim.height = 0x3C;
    }
    if (phi_a2_2 != 4) {
        this->unk_27C = this->unk_276 * 8;
        this->unk_27C += sp32;
        this->unk_27C += phi_a2_2 * 2;
    } else {
        this->unk_27C = 0x40;
        if (sp32 != 0) {
            this->unk_27C = 0x48;
        }
        this->unk_27C += this->unk_276 * 2;
    }
    if (gSaveContext.day != 3) {
        temp_v0_6 = (this->unk_27C * 2) + &D_80AE88DC;
        this->actor.textId = temp_v0_6->unk_0;
        this->unk_27E = temp_v0_6->unk_2;
    } else {
        temp_v0_7 = (this->unk_27C * 2) + &D_80AE897C;
        this->actor.textId = temp_v0_7->unk_0;
        this->unk_27E = temp_v0_7->unk_2;
    }
    if ((s16) this->unk_27E != 0) {
        temp_v1_2 = gSaveContext.roomInf[126][5];
        temp_v0_8 = (u32) (temp_v1_2 & 0xFF000000) >> 0x18;
        if ((temp_v0_8 == 0x10) || (temp_v0_8 == 0x4D) || (temp_v0_8 == 0x4E) || (temp_v0_8 == 0x4F) || (temp_v0_9 = (u32) (temp_v1_2 & 0xFF0000) >> 0x10, (temp_v0_9 == 0x10)) || (temp_v0_9 == 0x4D) || (temp_v0_9 == 0x4E) || (temp_v0_9 == 0x4F)) {
            temp_v0_11 = this->actor.textId;
            if (temp_v0_11 == 0x516) {
                this->actor.textId = 0x56C;
            } else {
                phi_t8 = 0x56EU;
                if (temp_v0_11 == 0x520) {
                    goto block_93;
                }
                if (temp_v0_11 == 0x52A) {
                    this->actor.textId = 0x570;
                } else if (temp_v0_11 == 0x534) {
                    this->actor.textId = 0x572;
                } else if (temp_v0_11 == 0x518) {
                    this->actor.textId = 0x56D;
                } else if (temp_v0_11 == 0x522) {
                    this->actor.textId = 0x56F;
                } else if (temp_v0_11 == 0x52C) {
                    this->actor.textId = 0x571;
                } else if (temp_v0_11 == 0x536) {
                    this->actor.textId = 0x573;
                }
            }
        } else if (((s32) (gSaveContext.equips.equipment & *gEquipMasks) >> *gEquipShifts) == 0) {
            temp_v0_10 = this->actor.textId;
            if (temp_v0_10 == 0x516) {
                this->actor.textId = 0x55E;
            } else if (temp_v0_10 == 0x520) {
                this->actor.textId = 0x566;
            } else if (temp_v0_10 == 0x52A) {
                this->actor.textId = 0x568;
            } else if (temp_v0_10 == 0x534) {
                this->actor.textId = 0x56A;
            } else if (temp_v0_10 == 0x518) {
                this->actor.textId = 0x55F;
            } else if (temp_v0_10 == 0x522) {
                this->actor.textId = 0x567;
            } else if (temp_v0_10 == 0x52C) {
                this->actor.textId = 0x569;
            } else {
                phi_t8 = 0x56BU;
                if (temp_v0_10 == 0x536) {
block_93:
                    this->actor.textId = phi_t8;
                }
            }
        }
    }
    temp_v0_12 = this->actor.yawTowardsPlayer - this->actor.world.rot.y;
    phi_v1 = (s32) temp_v0_12;
    if ((s32) temp_v0_12 < 0) {
        phi_v1 = -(s32) temp_v0_12;
    }
    sp2C = phi_v1;
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->unk_144.animPlaybackSpeed = 1.0f;
        func_80AE854C(this, globalCtx);
        return;
    }
    if (phi_v1 < 0x4BB9) {
        func_800B8614((Actor *) this, globalCtx, 70.0f);
    }
}

void func_80AE854C(EnStopheishi *arg0, GlobalContext *arg1) {
    if (((arg0->unk_265 != 0) || ((gSaveContext.weekEventReg[12] & 0x20) != 0)) && (arg0->unk_268 != 2)) {
        func_80AE750C((EnStopheishi *)2);
    }
    arg0->unk_25E = 0;
    arg0->unk_274 = 0;
    arg0->unk_278 = 1;
    arg0->actionFunc = func_80AE85C4;
}

void func_80AE85C4(EnStopheishi *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    func_80AE75C8(this, globalCtx);
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        temp_v0 = (s16) this->unk_27E;
        if (temp_v0 != 0) {
            this->actor.textId = (u16) temp_v0;
            func_80151938(globalCtx, temp_v0 & 0xFFFF);
            func_80AE750C(this, 2);
            gSaveContext.weekEventReg[12] |= 0x20;
            this->unk_265 = 1;
            this->unk_27E = 0;
            return;
        }
        func_801477B4(globalCtx);
        func_80AE7E9C(this);
        /* Duplicate return node #5. Try simplifying control flow for better match */
    }
}

void EnStopheishi_Update(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    s16 temp_v0;
    EnStopheishi *this = (EnStopheishi *) thisx;

    temp_v0 = this->unk_270;
    if (temp_v0 != 0) {
        this->unk_270 = temp_v0 - 1;
    }
    this->actor.shape.rot.y = this->actor.world.rot.y;
    Math_SmoothStepToS(&this->unk_25A, this->unk_260, 1, 0x7D0, (s16) 0);
    Math_SmoothStepToS(&this->unk_258, this->unk_25E, 1, 0x7D0, (s16) 0);
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 50.0f, 0x1DU);
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.uncullZoneForward = 500.0f;
    Math_Vec3f_Copy((Vec3f *) &this->actor.focus, &this->unk_290);
    Math_Vec3s_Copy(&this->actor.focus.rot, &this->actor.world.rot);
    temp_a2 = &this->unk_29C;
    if (this->unk_278 == 0) {
        sp2C = temp_a2;
        Collider_UpdateCylinder((Actor *) this, temp_a2);
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    }
}

s32 func_80AE87A4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0x10) {
        arg4->x += arg5[1].textId;
        arg4->z += arg5->unk_258;
    }
    return 0;
}

void func_80AE87EC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 0x10) {
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x290);
    }
}

void EnStopheishi_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnStopheishi *this = (EnStopheishi *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80AE87A4, func_80AE87EC, (Actor *) this);
}
