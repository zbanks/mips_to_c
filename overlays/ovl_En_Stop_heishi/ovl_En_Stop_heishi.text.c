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

typedef struct EnStopheishi {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0x60];                 /* maybe part of unk188[17]? */
    /* 0x01EE */ Vec3s unk1EE;                      /* inferred */
    /* 0x01F4 */ char pad1F4[0x60];                 /* maybe part of unk1EE[17]? */
    /* 0x0254 */ void (*actionFunc)(EnStopheishi *, GlobalContext *);
    /* 0x0258 */ s16 unk258;                        /* inferred */
    /* 0x025A */ s16 unk25A;                        /* inferred */
    /* 0x025C */ char pad25C[0x2];                  /* maybe part of unk25A[2]? */
    /* 0x025E */ s16 unk25E;                        /* inferred */
    /* 0x0260 */ s16 unk260;                        /* inferred */
    /* 0x0262 */ char pad262[0x2];                  /* maybe part of unk260[2]? */
    /* 0x0264 */ u8 unk264;                         /* inferred */
    /* 0x0265 */ u8 unk265;                         /* inferred */
    /* 0x0266 */ char pad266[0x2];                  /* maybe part of unk265[3]? */
    /* 0x0268 */ s32 unk268;                        /* inferred */
    /* 0x026C */ f32 unk26C;                        /* inferred */
    /* 0x0270 */ s16 unk270;                        /* inferred */
    /* 0x0272 */ s16 unk272;                        /* inferred */
    /* 0x0274 */ s16 unk274;                        /* inferred */
    /* 0x0276 */ s16 unk276;                        /* inferred */
    /* 0x0278 */ s16 unk278;                        /* inferred */
    /* 0x027A */ s16 unk27A;                        /* inferred */
    /* 0x027C */ s16 unk27C;                        /* inferred */
    /* 0x027E */ u16 unk27E;                        /* inferred */
    /* 0x0280 */ s16 unk280;                        /* inferred */
    /* 0x0282 */ char pad282[0x2];                  /* maybe part of unk280[2]? */
    /* 0x0284 */ s32 unk284;                        /* inferred */
    /* 0x0288 */ f32 unk288;                        /* inferred */
    /* 0x028C */ f32 unk28C;                        /* inferred */
    /* 0x0290 */ Vec3f unk290;                      /* inferred */
    /* 0x029C */ ColliderCylinder unk29C;           /* inferred */
} EnStopheishi;                                     /* size 0x2E8 */

void EnStopheishi_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnStopheishi *this = (EnStopheishi *) thisx;
    f32 temp_f10;
    s16 temp_v0;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 25.0f);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_0600D640, &D_06006C18, &this->unk188, &this->unk1EE, 0x11);
    temp_v0 = this->actor.params;
    this->unk27A = temp_v0 & 0x3F;
    temp_f10 = (f32) this->actor.world.rot.z * 40.0f;
    this->actor.colChkInfo.mass = 0xFF;
    this->unk276 = ((s32) temp_v0 >> 0xC) & 0xF;
    this->actor.world.rot.z = 0;
    this->unk288 = temp_f10 + 50.0f;
    if (this->unk27A == 0x7F) {
        this->unk27A = -1;
    }
    if (((s32) this->unk27A >= 0) && (Flags_GetSwitch(globalCtx, (s32) this->unk27A) != 0)) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->actor.targetMode = 0;
    this->actor.gravity = -3.0f;
    Collider_InitAndSetCylinder(globalCtx, &this->unk29C, &this->actor, &D_80AE88B0);
    this->unk284 = 6;
    this->unk280 = this->actor.world.rot.y;
    func_80AE7E9C(this);
}

void EnStopheishi_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnStopheishi *this = (EnStopheishi *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk29C);
}

void func_80AE750C(EnStopheishi *arg0, s32 arg1) {
    AnimationHeaderCommon **sp2C;
    AnimationHeaderCommon **temp_v1;
    s32 phi_t0;
    f32 phi_f0;

    temp_v1 = (arg1 * 4) + &D_80AE8A1C;
    arg0->unk268 = arg1;
    sp2C = temp_v1;
    arg0->unk26C = (f32) SkelAnime_GetFrameCount(*temp_v1);
    phi_t0 = 2;
    phi_f0 = -10.0f;
    if (((u32) temp_v1 >= (u32) &D_80AE8A24) && (temp_v1 != &D_80AE8A2C)) {
        phi_t0 = 0;
    }
    if (temp_v1 == &D_80AE8A30) {
        phi_f0 = 0.0f;
    }
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) *temp_v1, 1.0f, 0.0f, arg0->unk26C, (u8) phi_t0, phi_f0);
}

void func_80AE75C8(EnStopheishi *arg0, GlobalContext *arg1) {
    void *sp28;
    Vec3f sp1C;
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
    arg0->unk260 = 0;
    if (arg0->actor.xzDistToPlayer < 200.0f) {
        temp_a3 = arg1->actorCtx.actorList[2].first;
        if (phi_v1 < 0x4E20) {
            arg0->unk260 = arg0->actor.yawTowardsPlayer - arg0->actor.world.rot.y;
            temp_v0_2 = arg0->unk260;
            if ((s32) temp_v0_2 >= 0x2711) {
                arg0->unk260 = 0x2710;
            } else if ((s32) temp_v0_2 < -0x2710) {
                arg0->unk260 = -0x2710;
            }
        }
        arg0 = arg0;
        sp28 = temp_a3;
        Math_Vec3f_Copy(&sp1C, temp_a3 + 0x24);
        temp_v0_3 = temp_a3->unk14B;
        temp_a0 = arg0 + 0x3C;
        if ((temp_v0_3 == 3) || (temp_v0_3 == 4)) {
            phi_f6 = sp1C.y + (57.0f + (f32) gGameInfo->data[2434]);
        } else {
            phi_f6 = sp1C.y + (70.0f + (f32) gGameInfo->data[2435]);
        }
        sp1C.y = phi_f6;
        arg0 = arg0;
        arg0->unk25E = Math_Vec3f_Pitch(temp_a0, &sp1C);
    }
}

void func_80AE7718(EnStopheishi *arg0) {
    s16 temp_v0;
    s32 temp_t3;
    s32 temp_v0_2;

    temp_v0 = arg0->unk272;
    if (temp_v0 != 0) {
        arg0->unk272 = temp_v0 - 1;
    }
    temp_v0_2 = arg0->unk284;
    arg0->unk25E = -0xBB8;
    arg0->unk260 = 0;
    if (temp_v0_2 < 6) {
        arg0->unk260 = 0x1770;
        if ((temp_v0_2 & 7) == 0) {
            arg0->unk260 = -0x1770;
        }
        if ((arg0->unk272 == 0) && (arg0->unk272 = 0xA, temp_t3 = arg0->unk284 + 1, arg0->unk284 = temp_t3, ((temp_t3 < 6) == 0))) {
            arg0->unk272 = 0x32;
            return;
        }
        // Duplicate return node #12. Try simplifying control flow for better match
        return;
    }
    if ((arg0->unk272 == 0) && (Quake_NumActiveQuakes() != 0) && (arg0->unk284 >= 6)) {
        arg0->unk284 = 0;
    }
}

void func_80AE77D4(EnStopheishi *arg0) {
    f32 temp_f2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v0;

    arg0->unk274 = 0;
    arg0->unk28C = 0.0f;
    arg0->unk280 = arg0->actor.home.rot.y;
    if (arg0->unk270 == 1) {
        arg0->unk25E = 0;
        func_80AE750C(arg0, 5);
    }
    if ((arg0->unk270 == 0) && (arg0->unk264 == 0)) {
        temp_f2 = arg0->actor.home.pos.x;
        if ((fabsf(arg0->actor.world.pos.x - temp_f2) > 3.0f) || (fabsf(arg0->actor.world.pos.z - arg0->actor.home.pos.z) > 3.0f)) {
            arg0->unk144.animPlaybackSpeed = 3.0f;
            Math_ApproachF(arg0 + 0x24, temp_f2, 0.3f, 5.0f);
            Math_ApproachF(arg0 + 0x2C, arg0->actor.home.pos.z, 0.3f, 5.0f);
        } else {
            arg0->unk264 = 1;
        }
    }
    temp_v0 = arg0->unk268;
    if ((temp_v0 != 2) && (temp_v0 != 3) && (temp_v0 != 7) && (arg0->unk264 != 0)) {
        arg0->unk144.animPlaybackSpeed = 1.0f;
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
    Vec3f sp4C;
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

    temp_a2 = arg1->unk1CCC;
    sp58 = arg0->unk144.animCurrentFrame;
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
        arg0->unk280 = temp_v1;
    }
    sp2C = temp_a0;
    sp28 = temp_a1;
    sp5C = temp_a2;
    if (arg0->unk274 != 4) {
        temp_f2 = fabsf((f32) arg0->actor.yawTowardsPlayer - (f32) Math_Vec3f_Yaw(temp_a0, temp_a1)) * 0.01f * 5.0f;
        if (temp_f2 < 1.0f) {
            arg0->unk144.animPlaybackSpeed = 1.0f;
        } else {
            if (temp_f2 > 5.0f) {
                phi_f0 = 5.0f;
            } else {
                phi_f0 = temp_f2;
            }
            arg0->unk144.animPlaybackSpeed = phi_f0;
        }
    }
    temp_v0_2 = Math_Vec3f_Yaw(sp2C, sp28);
    sp48 = fabsf(arg0->actor.home.pos.x - sp5C->unk24);
    sp3E = temp_v0_2;
    temp_f12 = fabsf(arg0->actor.home.pos.z - sp5C->unk2C);
    sp44 = temp_f12;
    Math_Vec3f_Copy(&sp4C, sp2C);
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
    temp_f2_2 = arg0->unk288;
    phi_f12_2 = phi_f12;
    if (temp_f2_2 < sp48) {
        sp48 = temp_f2_2;
    } else {
        temp_f0 = -temp_f2_2;
        if (sp48 < temp_f0) {
            sp48 = temp_f0;
        }
    }
    temp_f18 = sp4C.x + sp48;
    if (temp_f2_2 < phi_f12) {
        phi_f12_2 = temp_f2_2;
    } else {
        temp_f0_2 = -temp_f2_2;
        if (phi_f12 < temp_f0_2) {
            phi_f12_2 = temp_f0_2;
        }
    }
    sp4C.x = temp_f18;
    sp4C.z += phi_f12_2;
    Math_ApproachF(arg0 + 0x24, temp_f18, 0.5f, arg0->unk28C);
    Math_ApproachF(arg0 + 0x2C, sp4C.z, 0.5f, arg0->unk28C);
    Math_ApproachF(arg0 + 0x28C, 50.0f, 0.3f, 1.0f);
    temp_t9 = (u16) arg0->unk274;
    switch (temp_t9) {
    case 0:
        if (gSaveContext.day != 3) {
            func_80AE750C(arg0, 4);
            arg0->unk274 = 2;
        } else {
            func_80AE750C(arg0, 2);
            arg0->unk274 = 1;
        }
        break;
    case 1:
        func_80AE750C(arg0, 4);
        arg0->unk274 = 2;
        break;
    case 2:
        if (arg0->unk26C <= sp58) {
            func_80AE750C(arg0, 5);
            arg0->unk274 = 3;
        }
        break;
    case 3:
        if ((fabsf(arg0->actor.world.pos.x - sp4C.x) < 2.0f) && (fabsf(arg0->actor.world.pos.z - sp4C.z) < 2.0f)) {
            arg0->unk144.animPlaybackSpeed = 1.0f;
            func_80AE750C(arg0, 6);
            arg0->unk274 = 4;
        }
        break;
    case 4:
        if ((fabsf(arg0->actor.world.pos.x - sp4C.x) > 4.0f) || (fabsf(arg0->actor.world.pos.z - sp4C.z) > 4.0f)) {
            func_80AE750C(arg0, 5);
            arg0->unk274 = 3;
        }
        break;
    }
    arg0->unk264 = 0;
    arg0->unk270 = 0x14;
    arg0->unk25E = 0;
    if ((arg0->unk276 == 3) && ((Math_Vec3f_Copy(&sp4C, sp28), temp_v0_4 = sp5C->unk14B, (temp_v0_4 == 3)) || (temp_v0_4 == 4))) {
        sp4C.y += 77.0f + (f32) gGameInfo->data[2437];
        arg0->unk25E = Math_Vec3f_Pitch(arg0 + 0x3C, &sp4C);
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
    arg0->unk274 = 0;
    arg0->unk278 = 0;
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
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    if ((this->unk268 == 5) && (((s32) this->unk144.animCurrentFrame & 1) != 0)) {
        Audio_PlayActorSound2(&this->actor, 0x2931U);
    }
    if (gSaveContext.day != 3) {
        func_80AE75C8(this, globalCtx);
    } else {
        func_80AE7718(this);
    }
    Math_SmoothStepToS(&this->actor.world.rot.y, this->unk280, 1, 0x1388, (s16) 0);
    sp32 = 0;
    if (gSaveContext.isNight != 0) {
        sp32 = 0x20;
    }
    temp_v0 = sp34->unk14B;
    phi_a2 = 0;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                if (temp_v0 == 4) {
                    temp_v1 = gSaveContext.roomInf[126][5];
                    temp_v0_2 = (u32) (temp_v1 & 0xFF000000) >> 0x18;
                    if ((temp_v0_2 == 0x10) || (temp_v0_2 == 0x4D) || (temp_v0_2 == 0x4E) || (temp_v0_2 == 0x4F) || (temp_v0_3 = (u32) (temp_v1 & 0xFF0000) >> 0x10, (temp_v0_3 == 0x10)) || (temp_v0_3 == 0x4D) || (temp_v0_3 == 0x4E) || (temp_v0_3 == 0x4F)) {
                        if (this->unk265 != 0) {
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
    if (((phi_a2 == 1) || (phi_a2 == 2) || (phi_a2 == 3)) && ((temp_v0_4 = this->unk268, (temp_v0_4 == 4)) || (temp_v0_4 == 5) || (temp_v0_4 == 6))) {
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
        this->unk29C.dim.radius = 0x32;
        this->unk29C.dim.height = 0x104;
        if (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < 240.0f) {
            sp30 = phi_a2_2;
            func_80AE795C((bitwise EnStopheishi *) temp_f12, this, globalCtx, phi_a2_2, &gSaveContext);
        } else {
            sp30 = phi_a2_2;
            func_80AE77D4((bitwise EnStopheishi *) temp_f12, this, globalCtx, phi_a2_2, &gSaveContext);
        }
    } else {
        this->unk29C.dim.radius = 0xF;
        this->unk29C.dim.height = 0x3C;
    }
    if (phi_a2_2 != 4) {
        this->unk27C = this->unk276 * 8;
        this->unk27C += sp32;
        this->unk27C += phi_a2_2 * 2;
    } else {
        this->unk27C = 0x40;
        if (sp32 != 0) {
            this->unk27C = 0x48;
        }
        this->unk27C += this->unk276 * 2;
    }
    if (gSaveContext.day != 3) {
        temp_v0_6 = (this->unk27C * 2) + &D_80AE88DC;
        this->actor.textId = temp_v0_6->unk0;
        this->unk27E = temp_v0_6->unk2;
    } else {
        temp_v0_7 = (this->unk27C * 2) + &D_80AE897C;
        this->actor.textId = temp_v0_7->unk0;
        this->unk27E = temp_v0_7->unk2;
    }
    if ((s16) this->unk27E != 0) {
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
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        this->unk144.animPlaybackSpeed = 1.0f;
        func_80AE854C(this, globalCtx);
        return;
    }
    if (phi_v1 < 0x4BB9) {
        func_800B8614(&this->actor, globalCtx, 70.0f);
    }
}

void func_80AE854C(EnStopheishi *arg0, GlobalContext *arg1) {
    if (((arg0->unk265 != 0) || ((gSaveContext.weekEventReg[12] & 0x20) != 0)) && (arg0->unk268 != 2)) {
        func_80AE750C((EnStopheishi *)2);
    }
    arg0->unk25E = 0;
    arg0->unk274 = 0;
    arg0->unk278 = 1;
    arg0->actionFunc = func_80AE85C4;
}

void func_80AE85C4(EnStopheishi *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    SkelAnime_FrameUpdateMatrix(&this->unk144);
    func_80AE75C8(this, globalCtx);
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        temp_v0 = (s16) this->unk27E;
        if (temp_v0 != 0) {
            this->actor.textId = (u16) temp_v0;
            func_80151938(globalCtx, temp_v0 & 0xFFFF);
            func_80AE750C(this, 2);
            gSaveContext.weekEventReg[12] |= 0x20;
            this->unk265 = 1;
            this->unk27E = 0;
            return;
        }
        func_801477B4(globalCtx);
        func_80AE7E9C(this);
        // Duplicate return node #5. Try simplifying control flow for better match
    }
}

void EnStopheishi_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnStopheishi *this = (EnStopheishi *) thisx;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    s16 temp_v0;

    temp_v0 = this->unk270;
    if (temp_v0 != 0) {
        this->unk270 = temp_v0 - 1;
    }
    this->actor.shape.rot.y = this->actor.world.rot.y;
    Math_SmoothStepToS(&this->unk25A, this->unk260, 1, 0x7D0, (s16) 0);
    Math_SmoothStepToS(&this->unk258, this->unk25E, 1, 0x7D0, (s16) 0);
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 20.0f, 20.0f, 50.0f, 0x1DU);
    Actor_SetScale(&this->actor, 0.01f);
    this->actor.uncullZoneForward = 500.0f;
    Math_Vec3f_Copy(&this->actor.focus.pos, &this->unk290);
    Math_Vec3s_Copy(&this->actor.focus.rot, &this->actor.world.rot);
    temp_a2 = &this->unk29C;
    if (this->unk278 == 0) {
        sp2C = temp_a2;
        Collider_UpdateCylinder(&this->actor, temp_a2);
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
    }
}

s32 func_80AE87A4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0x10) {
        arg4->x += arg5->unk25A;
        arg4->z += arg5->unk258;
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
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80AE87A4, func_80AE87EC, &this->actor);
}

