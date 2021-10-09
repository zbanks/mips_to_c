typedef struct BgHakaBombwall {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ ColliderCylinder unk_15C;           /* inferred */
    /* 0x1A8 */ void (*actionFunc)(BgHakaBombwall *, GlobalContext *);
    /* 0x1AC */ char pad_1AC[0x4];
} BgHakaBombwall;                                   /* size = 0x1B0 */

struct _mips2c_stack_BgHakaBombwall_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgHakaBombwall_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgHakaBombwall_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_BgHakaBombwall_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD5E00 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD5E6C {
    /* 0x00 */ char pad_0[0xBC];
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ ? spD4;                              /* inferred */
    /* 0xD4 */ char pad_D4[0xC];
    /* 0xE0 */ f32 spE0;                            /* inferred */
    /* 0xE4 */ f32 spE4;                            /* inferred */
    /* 0xE8 */ f32 spE8;                            /* inferred */
    /* 0xEC */ char pad_EC[0x4];
};                                                  /* size = 0xF0 */

struct _mips2c_stack_func_80BD6260 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD6274 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD62D0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD6314 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BD63B4 {};              /* size 0x0 */

struct _mips2c_stack_func_80BD63D0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

s32 func_80BD5E00(void *arg0, void *);              /* static */
void func_80BD5E6C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BD6260(BgHakaBombwall *arg0);           /* static */
void func_80BD6274(void *arg0, GlobalContext *arg1); /* static */
void func_80BD62D0(void *arg0);                     /* static */
void func_80BD6314(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BD63B4(Actor *arg0);                    /* static */
void func_80BD63D0(Actor *arg0, ? arg1);            /* static */
extern Gfx D_06000040;
extern CollisionHeader D_06000148;
extern Gfx D_06001680;
static ColliderCylinderInit D_80BD64A0 = {
    {0xA, 0, 9, 0, 0, 1},
    {0, {0, 0, 0}, {8, 0, 0}, 0, 1, 0},
    {0x50, 0x50, 0, {0, 0, 0}},
};
static ? D_80BD64CC;                                /* unable to generate initializer */
static InitChainEntry D_80BD64D4[7];                /* unable to generate initializer */

s32 func_80BD5E00(void *arg0) {
    s32 temp_v0;

    if (((arg0->unk_16D & 2) != 0) && (temp_v0 = arg0->unk_164, (temp_v0 != 0)) && (Math3D_DistanceSquared(arg0 + 0x24, temp_v0 + 0x24) < 6400.0f)) {
        return 1;
    }
    return 0;
}

void func_80BD5E6C(Actor *arg0, GlobalContext *arg1) {
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
            func_800BBFB0(arg1, (Vec3f *) temp_a1, 60.0f, 2, (s16) 0x64, (s16) 0x78, (u8) 1);
            phi_s0_2 = 0x20;
        }
        phi_s0 = phi_s0_2;
        if ((phi_s2 & 1) != 0) {
            phi_s0 = (s32) (s16) (phi_s0_2 | 1);
            phi_t0 = 1;
        } else {
            phi_t0 = 0;
        }
        temp_v0 = *(&D_80BD64CC + (temp_s1 * 2));
        if ((s32) temp_v0 >= 0x10) {
            phi_v1 = -0x226;
        } else {
            phi_v1 = -0x1C2;
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s3, (Vec3f *) &spD4, (Vec3f *) temp_s3, (s16) phi_v1, (s16) phi_s0, (s16) 0x1E, (s16) 0, (s16) 0, (s16) (s32) temp_v0, (s16) phi_t0, (s16) 0, 0x32, (s16) -1, (s16) 0x1E0, &D_06001680);
        temp_s2 = phi_s2 + 1;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x1E);
    SysMatrix_StatePop();
}

void BgHakaBombwall_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    BgHakaBombwall *this = (BgHakaBombwall *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80BD64D4);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    temp_a1 = &this->unk_15C;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06000148);
    Collider_SetCylinder(globalCtx, sp24, (Actor *) this, &D_80BD64A0);
    Collider_UpdateCylinder((Actor *) this, sp24);
    func_80BD6260(this);
}

void BgHakaBombwall_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;
    BgHakaBombwall *this = (BgHakaBombwall *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk_144);
    Collider_DestroyCylinder(globalCtx, &this->unk_15C);
}

void func_80BD6260(BgHakaBombwall *arg0) {
    arg0->actionFunc = func_80BD6274;
}

void func_80BD6274(BgHakaBombwall *arg0, GlobalContext *arg1) {
    BgHakaBombwall *temp_a0;
    BgHakaBombwall *temp_a3;

    temp_a3 = arg0;
    temp_a0 = temp_a3;
    arg0 = temp_a3;
    if (func_80BD5E00(temp_a0, temp_a3) != 0) {
        func_80BD62D0(arg0);
        return;
    }
    CollisionCheck_SetAC(arg1, arg1 + 0x18884, arg0 + 0x15C);
}

void func_80BD62D0(BgHakaBombwall *arg0) {
    s8 temp_a0;

    temp_a0 = arg0->actor.cutscene;
    arg0->actor.flags |= 0x10;
    arg0 = arg0;
    ActorCutscene_SetIntentToPlay((s16) temp_a0);
    arg0->actionFunc = func_80BD6314;
}

void func_80BD6314(Actor *arg0, GlobalContext *arg1) {
    if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
        func_80BD5E6C(arg0, arg1);
        arg0->draw = NULL;
        Actor_SetSwitchFlag(arg1, arg0->params & 0x7F);
        Audio_PlaySoundAtPosition(arg1, (Vec3f *) &arg0->world, 0x3C, 0x2810U);
        func_800C62BC(arg1, &arg1->colCtx.dyna, arg0->unk_144);
        func_80BD63B4(arg0);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
}

void func_80BD63B4(Actor *arg0) {
    arg0->unk_1AC = 0x1E;
    arg0->unk_1A8 = func_80BD63D0;
}

void func_80BD63D0(Actor *arg0, ? arg1) {
    s8 temp_a0;

    arg0->unk_1AC = (s8) (arg0->unk_1AC - 1);
    if ((s32) arg0->unk_1AC <= 0) {
        temp_a0 = arg0->cutscene;
        arg0 = arg0;
        ActorCutscene_Stop((s16) temp_a0);
        Actor_MarkForDeath(arg0);
    }
}

void BgHakaBombwall_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgHakaBombwall *this = (BgHakaBombwall *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgHakaBombwall_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgHakaBombwall *this = (BgHakaBombwall *) thisx;
    func_800BDFC0(globalCtx, &D_06000040);
}
