typedef struct BgIkanaBombwall {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ ColliderCylinder unk15C;            /* inferred */
    /* 0x1A8 */ void (*actionFunc)(BgIkanaBombwall *, GlobalContext *);
    /* 0x1AC */ char pad1AC[0x4];
} BgIkanaBombwall;                                  /* size = 0x1B0 */

struct _mips2c_stack_BgIkanaBombwall_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgIkanaBombwall_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgIkanaBombwall_Init {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ ColliderCylinderInit *sp24;          /* inferred */
    /* 0x28 */ char pad28[0x4];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_BgIkanaBombwall_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD4720 {
    /* 0x00 */ char pad0[0xBC];
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ ? spD4;                              /* inferred */
    /* 0xD4 */ char padD4[0xC];
    /* 0xE0 */ f32 spE0;                            /* inferred */
    /* 0xE4 */ f32 spE4;                            /* inferred */
    /* 0xE8 */ f32 spE8;                            /* inferred */
    /* 0xEC */ char padEC[0x4];
};                                                  /* size = 0xF0 */

struct _mips2c_stack_func_80BD4A14 {
    /* 0x00 */ char pad0[0xCC];
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ f32 spDC;                            /* inferred */
    /* 0xE0 */ f32 spE0;                            /* inferred */
    /* 0xE4 */ char padE4[0x4];
};                                                  /* size = 0xE8 */

struct _mips2c_stack_func_80BD4E44 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD4EAC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD4F18 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD4F2C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD4F88 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD4F9C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD4FF8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD503C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BD5118 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD5134 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void func_80BD4720(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BD4A14(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BD4E44(void *arg0, void *);              /* static */
s32 func_80BD4EAC(void *arg0, void *);              /* static */
void func_80BD4F18(BgIkanaBombwall *arg0);          /* static */
void func_80BD4F2C(void *arg0, GlobalContext *arg1); /* static */
void func_80BD4F88(BgIkanaBombwall *arg0);          /* static */
void func_80BD4F9C(void *arg0, GlobalContext *arg1); /* static */
void func_80BD4FF8(void *arg0);                     /* static */
void func_80BD503C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BD5118(Actor *arg0);                    /* static */
void func_80BD5134(Actor *arg0, ? arg1);            /* static */
extern CollisionHeader D_06000128;
extern Gfx D_06000288;
extern CollisionHeader D_06000488;
static ColliderCylinderInit D_80BD5270 = {
    {0xA, 0, 9, 0, 0, 1},
    {0, {0, 0, 0}, {8, 0, 0}, 0, 1, 0},
    {0x50, 0x50, 0, {0, 0, 0}},
};
static ColliderCylinderInit D_80BD529C = {
    {0xA, 0, 9, 0, 0, 1},
    {0, {0, 0, 0}, {8, 0, 0}, 0, 1, 0},
    {0x32, 0x14, 0, {0, 0, 0}},
};
static ? D_80BD52C8;                                /* unable to generate initializer */
static InitChainEntry D_80BD52D0[4];                /* unable to generate initializer */
static ? D_80BD52E0;                                /* unable to generate initializer */

void func_80BD4720(Actor *arg0, GlobalContext *arg1) {
    f32 spE8;
    f32 spE4;
    f32 spE0;
    ? spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 *temp_a1;
    f32 *temp_fp;
    f32 *temp_s3;
    f32 *temp_s7;
    f32 temp_f20;
    f32 temp_f22;
    s16 temp_v0;
    s32 temp_s1;
    s32 temp_s2;
    f32 phi_f20;
    f32 phi_f20_2;
    f32 phi_f22;
    s32 phi_s2;
    s32 phi_v1;
    s32 phi_s0;
    s32 phi_t0;
    s32 phi_s0_2;

    SysMatrix_StatePush();
    Matrix_RotateY(arg0->shape.rot.y, 0U);
    temp_fp = &spBC;
    temp_s7 = &spC8;
    temp_s3 = &spE0;
    phi_f20 = 0.0f;
    phi_f22 = 0.0f;
    phi_s2 = 0;
    do {
        temp_f20 = phi_f20 + (60.0f + (Rand_ZeroOne() * 20.0f));
        phi_f20_2 = temp_f20;
        if (temp_f20 > 75.0f) {
            phi_f20_2 = temp_f20 - 150.0f;
        }
        spC8 = phi_f20_2;
        temp_f22 = phi_f22 + 5.0f;
        spCC = temp_f22;
        spD0 = (Rand_ZeroOne() * 20.0f) - 10.0f;
        spBC = ((Rand_ZeroOne() - 0.5f) * 5.0f) + (phi_f20_2 * 0.053333335f);
        spC0 = (Rand_ZeroOne() * 7.0f) - 2.0f;
        spC4 = (Rand_ZeroOne() * 4.0f) - 2.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_s7, (Vec3f *) temp_s3);
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_fp, (Vec3f *) &spD4);
        temp_s1 = phi_s2 & 3;
        temp_a1 = temp_s3;
        spE0 += arg0->world.pos.x;
        spE4 += arg0->world.pos.y;
        spE8 += arg0->world.pos.z;
        phi_f20 = phi_f20_2;
        phi_f22 = temp_f22;
        phi_s0_2 = 0x40;
        if (temp_s1 == 0) {
            func_800BBFB0(arg1, (Vec3f *) temp_a1, 50.0f, 2, (s16) 0x64, (s16) 0x78, (u8) 1);
            phi_s0_2 = 0x20;
        }
        phi_s0 = phi_s0_2;
        if ((phi_s2 & 1) != 0) {
            phi_s0 = (s32) (s16) (phi_s0_2 | 1);
            phi_t0 = 1;
        } else {
            phi_t0 = 0;
        }
        temp_v0 = *(&D_80BD52C8 + (temp_s1 * 2));
        if ((s32) temp_v0 >= 0x10) {
            phi_v1 = -0x226;
        } else {
            phi_v1 = -0x1C2;
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s3, (Vec3f *) &spD4, (Vec3f *) temp_s3, (s16) phi_v1, (s16) phi_s0, (s16) 0x1E, (s16) 0, (s16) 0, (s16) (s32) temp_v0, (s16) phi_t0, (s16) 0, 0x32, (s16) -1, (s16) 0x203, &D_06000288);
        temp_s2 = phi_s2 + 1;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x1E);
    SysMatrix_StatePop();
}

void func_80BD4A14(Actor *arg0, GlobalContext *arg1) {
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 *temp_s4;
    f32 *temp_s6;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f4;
    s16 temp_v1;
    s32 temp_s0;
    s32 temp_s1;
    f32 phi_f26;
    s16 phi_s2;
    f32 phi_f26_2;
    s32 phi_s1;
    s32 phi_t0;
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_v0_2;

    temp_s6 = &spCC;
    temp_s4 = &spD8;
    phi_f26 = 0.0f;
    phi_s2 = 0;
    phi_s1 = 0;
    do {
        temp_f26 = phi_f26 + (20.0f + (Rand_ZeroOne() * 10.0f));
        phi_f26_2 = temp_f26;
        if (temp_f26 > 60.0f) {
            phi_f26_2 = temp_f26 - 60.0f;
        }
        temp_f20 = Math_SinS(phi_s2);
        temp_f0 = Math_CosS(phi_s2);
        temp_f24 = temp_f20 * phi_f26_2;
        temp_f22 = temp_f0;
        temp_f4 = temp_f0 * phi_f26_2;
        spD8 = temp_f24 + arg0->world.pos.x;
        spDC = arg0->world.pos.y;
        spE0 = temp_f4 + arg0->world.pos.z;
        spCC = ((Rand_ZeroOne() - 0.5f) * 3.0f * temp_f20) + (temp_f24 * 0.033333335f);
        spD0 = (Rand_ZeroOne() * 18.0f) + 4.0f;
        spD4 = ((Rand_ZeroOne() - 0.5f) * 3.0f * temp_f22) + (temp_f22 * phi_f26_2 * 0.033333335f);
        temp_v1 = (Rand_Next() & 3) + (phi_s1 >> 1) + 6;
        temp_s0 = phi_s1 & 3;
        phi_f26 = phi_f26_2;
        if (temp_s0 == 0) {
            phi_v0_2 = 0x20;
        } else {
            phi_v0_2 = 0x40;
        }
        phi_v0 = phi_v0_2;
        if ((s32) temp_v1 >= 0xF) {
            phi_t0 = -0x226;
            phi_v0 = (s32) (s16) (phi_v0_2 | 1);
            phi_v1 = 1;
        } else {
            phi_t0 = -0x190;
            phi_v1 = 0;
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s4, (Vec3f *) temp_s6, (Vec3f *) temp_s4, (s16) phi_t0, (s16) phi_v0, (s16) 0x1E, (s16) 0, (s16) 0, (s16) (s32) temp_v1, (s16) phi_v1, (s16) 0, 0x32, (s16) -1, (s16) 0x203, &D_06000288);
        if (temp_s0 == 0) {
            spDC += 30.0f;
            func_800BBFB0(arg1, (Vec3f *) temp_s4, 50.0f, 2, (s16) 0x46, (s16) 0x6E, (u8) 1);
        }
        temp_s1 = phi_s1 + 1;
        phi_s2 = (s16) (phi_s2 + 0x924);
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x1C);
}

void BgIkanaBombwall_Init(BgIkanaBombwall *this, GlobalContext *globalCtx) {
    s32 sp2C;
    ColliderCylinderInit *sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    ColliderCylinderInit *phi_a3;
    CollisionHeader *phi_a2;
    BgIkanaBombwall *this = (BgIkanaBombwall *) thisx;

    sp2C = ((s32) this->actor.params >> 8) & 1;
    Actor_ProcessInitChain((Actor *) this, D_80BD52D0);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    temp_a1 = &this->unk15C;
    sp20 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (sp2C == 0) {
        phi_a3 = &D_80BD5270;
        phi_a2 = &D_06000488;
    } else {
        phi_a3 = &D_80BD529C;
        phi_a2 = &D_06000128;
    }
    sp24 = phi_a3;
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, phi_a2);
    Collider_SetCylinder(globalCtx, sp20, (Actor *) this, phi_a3);
    Collider_UpdateCylinder((Actor *) this, sp20);
    if (sp2C == 0) {
        func_80BD4F18(this);
        return;
    }
    func_80BD4F88(this);
}

void BgIkanaBombwall_Destroy(BgIkanaBombwall *this, GlobalContext *globalCtx) {
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;
    BgIkanaBombwall *this = (BgIkanaBombwall *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk144);
    Collider_DestroyCylinder(globalCtx, &this->unk15C);
}

s32 func_80BD4E44(void *arg0) {
    s32 temp_v0;

    if (((arg0->unk16D & 2) != 0) && (temp_v0 = arg0->unk164, (temp_v0 != 0)) && (Math3D_DistanceSquared(arg0 + 0x24, temp_v0 + 0x24) < 5625.0f)) {
        return 1;
    }
    return 0;
}

s32 func_80BD4EAC(void *arg0) {
    s32 temp_v0;

    if (((arg0->unk16D & 2) != 0) && (temp_v0 = arg0->unk164, (temp_v0 != 0)) && (Math3D_DistanceSquared(arg0 + 0x24, temp_v0 + 0x24) < 6400.0f)) {
        return 1;
    }
    return 0;
}

void func_80BD4F18(BgIkanaBombwall *arg0) {
    arg0->actionFunc = func_80BD4F2C;
}

void func_80BD4F2C(BgIkanaBombwall *arg0, GlobalContext *arg1) {
    BgIkanaBombwall *temp_a0;
    BgIkanaBombwall *temp_a3;

    temp_a3 = arg0;
    temp_a0 = temp_a3;
    arg0 = temp_a3;
    if (func_80BD4E44(temp_a0, temp_a3) != 0) {
        func_80BD4FF8(arg0);
        return;
    }
    CollisionCheck_SetAC(arg1, arg1 + 0x18884, arg0 + 0x15C);
}

void func_80BD4F88(BgIkanaBombwall *arg0) {
    arg0->actionFunc = func_80BD4F9C;
}

void func_80BD4F9C(BgIkanaBombwall *arg0, GlobalContext *arg1) {
    BgIkanaBombwall *temp_a0;
    BgIkanaBombwall *temp_a3;

    temp_a3 = arg0;
    temp_a0 = temp_a3;
    arg0 = temp_a3;
    if (func_80BD4EAC(temp_a0, temp_a3) != 0) {
        func_80BD4FF8(arg0);
        return;
    }
    CollisionCheck_SetAC(arg1, arg1 + 0x18884, arg0 + 0x15C);
}

void func_80BD4FF8(BgIkanaBombwall *arg0) {
    s8 temp_a0;

    temp_a0 = arg0->actor.cutscene;
    arg0->actor.flags |= 0x10;
    arg0 = arg0;
    ActorCutscene_SetIntentToPlay((s16) temp_a0);
    arg0->actionFunc = func_80BD503C;
}

void func_80BD503C(Actor *arg0, GlobalContext *arg1) {
    if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
        if ((((s32) arg0->params >> 8) & 1) == 0) {
            func_80BD4720(arg0, arg1);
        } else {
            func_80BD4A14(arg0, arg1);
        }
        arg0->draw = NULL;
        Audio_PlaySoundAtPosition(arg1, (Vec3f *) &arg0->world, 0x3C, 0x2810U);
        Actor_SetSwitchFlag(arg1, arg0->params & 0x7F);
        if ((((s32) arg0->params >> 8) & 1) == 0) {
            func_800C62BC(arg1, &arg1->colCtx.dyna, arg0->unk144);
        }
        func_80BD5118(arg0);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
}

void func_80BD5118(Actor *arg0) {
    arg0->unk1AC = 0x1E;
    arg0->unk1A8 = func_80BD5134;
}

void func_80BD5134(Actor *arg0, ? arg1) {
    s8 temp_a0;

    if ((((s32) arg0->params >> 8) & 1) == 0) {
        arg0->unk1AC = (s8) (arg0->unk1AC - 1);
        if ((s32) arg0->unk1AC <= 0) {
            temp_a0 = arg0->cutscene;
            arg0 = arg0;
            ActorCutscene_Stop((s16) temp_a0);
            Actor_MarkForDeath(arg0);
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    if ((s32) arg0->cutscene >= 0) {
        arg0 = arg0;
        if (ActorCutscene_GetCurrentIndex() != arg0->cutscene) {
            Actor_MarkForDeath(arg0);
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    Actor_MarkForDeath(arg0);
}

void BgIkanaBombwall_Update(BgIkanaBombwall *this, GlobalContext *globalCtx) {
    BgIkanaBombwall *this = (BgIkanaBombwall *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgIkanaBombwall_Draw(BgIkanaBombwall *this, GlobalContext *globalCtx) {
    BgIkanaBombwall *this = (BgIkanaBombwall *) thisx;
    func_800BDFC0(globalCtx, *(&D_80BD52E0 + ((((s32) this->actor.params >> 8) & 1) * 4)));
}
