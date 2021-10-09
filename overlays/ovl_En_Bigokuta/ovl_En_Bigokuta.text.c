typedef struct EnBigokuta {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*unk144)(GlobalContext *, Actor *); /* inferred */
    /* 0x148 */ SkelAnime unk148;                   /* inferred */
    /* 0x18C */ void (*actionFunc)(EnBigokuta *, GlobalContext *);
    /* 0x190 */ u8 unk190;                          /* inferred */
    /* 0x191 */ char pad191[0x1];
    /* 0x192 */ s16 unk192;                         /* inferred */
    /* 0x194 */ char pad194[0x2];
    /* 0x196 */ s16 unk196;                         /* inferred */
    /* 0x198 */ Vec3s unk198;                       /* inferred */
    /* 0x19E */ char pad19E[0x72];                  /* maybe part of unk198[20]? */
    /* 0x210 */ Vec3s unk210;                       /* inferred */
    /* 0x216 */ char pad216[0x72];                  /* maybe part of unk210[20]? */
    /* 0x288 */ f32 unk288;                         /* inferred */
    /* 0x28C */ f32 unk28C;                         /* inferred */
    /* 0x290 */ f32 unk290;                         /* inferred */
    /* 0x294 */ char pad294[0x18];                  /* maybe part of unk290[7]? */
    /* 0x2AC */ f32 unk2AC;                         /* inferred */
    /* 0x2B0 */ f32 unk2B0;                         /* inferred */
    /* 0x2B4 */ f32 unk2B4;                         /* inferred */
    /* 0x2B8 */ char pad2B8[0xC];                   /* maybe part of unk2B4[4]? */
    /* 0x2C4 */ Vec3f unk2C4;                       /* inferred */
    /* 0x2D0 */ char pad2D0[0x90];                  /* maybe part of unk2C4[13]? */
    /* 0x360 */ ColliderCylinder unk360;            /* inferred */
    /* 0x3AC */ ColliderCylinder unk3AC;            /* inferred */
} EnBigokuta;                                       /* size = 0x3F8 */

struct _mips2c_stack_EnBigokuta_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnBigokuta_Draw {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ GraphicsContext *sp30;               /* inferred */
    /* 0x34 */ char pad34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnBigokuta_Init {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnBigokuta_Update {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ CollisionCheckContext *sp24;         /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AC28B4 {
    /* 0x00 */ char pad0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AC299C {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ Vec3f *sp18;                         /* inferred */
    /* 0x1C */ Camera *sp1C;                        /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AC2A1C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AC2A7C {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AC2B4C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AC2B98 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ CollisionContext *sp2C;              /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ WaterBox *sp34;                      /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AC2C30 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AC2C84 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AC2CE8 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AC2DAC {
    /* 0x00 */ char pad0[0x4C];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80AC2EBC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AC2F20 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AC2F64 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AC3054 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AC30EC {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AC31EC {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ Vec3f *sp2C;                         /* inferred */
    /* 0x30 */ char pad30[0xA];                     /* maybe part of sp2C[3]? */
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ char pad3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80AC33A4 {};              /* size 0x0 */

struct _mips2c_stack_func_80AC33C0 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AC3460 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AC34A8 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AC35E8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AC3650 {
    /* 0x00 */ char pad0[0x68];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ char pad80[0x4];
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_80AC3930 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AC39A0 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AC3D48 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AC4204 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

void func_80AC28B4(Actor *arg0, GlobalContext *arg1, Vec3f *arg2, Vec3f *arg3); /* static */
void func_80AC299C(Actor *arg0, GlobalContext *arg1, s8); /* static */
void func_80AC2A1C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AC2A7C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AC2B4C(GlobalContext *arg0, Actor *arg1); /* static */
s32 func_80AC2B98(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AC2C30(EnBigokuta *arg0, GlobalContext *arg1); /* static */
void func_80AC2C84(EnBigokuta *arg0);               /* static */
void func_80AC2CE8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AC2DAC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AC2EBC(Actor *arg0, ? arg1);            /* static */
void func_80AC2F20(Actor *arg0);                    /* static */
void func_80AC2F64(Actor *arg0, void *arg1);        /* static */
void func_80AC3054(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AC30EC(Actor *arg0, void *arg1);        /* static */
void func_80AC31EC(Actor *arg0, void *arg1);        /* static */
void func_80AC33A4(Actor *arg0);                    /* static */
void func_80AC33C0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AC3460(Actor *arg0);                    /* static */
void func_80AC34A8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AC35E8(Actor *arg0);                    /* static */
void func_80AC3650(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80AC3930(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AC39A0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80AC3D48(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, s16 *arg4, Actor *arg5, Gfx **arg6); /* static */
void func_80AC4204(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **gfx); /* static */
extern AnimationHeader D_06000444;
extern AnimationHeaderCommon D_06000A74;
extern AnimationHeader D_060014B8;
extern FlexSkeletonHeader D_06006BC0;
static ColliderCylinderInit D_80AC4530 = {
    {0xC, 0, 0xD, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFC74F, 0, 0}, 0, 1, 1},
    {0x4B, 0x7D, 0, {0, 0, 0}},
};
static ColliderCylinderInit D_80AC455C = {
    {0, 0, 9, 0, 0x10, 1},
    {0, {0, 0, 0}, {0x38B0, 0, 0}, 0, 1, 0},
    {0x46, 0x7D, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit D_80AC4588 = {4, 0x82, 0x78, 0xFE};
static InitChainEntry D_80AC4590[5];                /* unable to generate initializer */
static Vec3f D_80AC45A4 = {0.0f, -0.5f, 0.0f};
static Color_RGBA8 D_80AC45B0 = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80AC45B4 = {0x64, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80AC45B8 = {0x96, 0x96, 0x96, 0};
static ? D_80AC45BC;                                /* unable to generate initializer */
static Vec3f D_80AC45D0[5] = {
    {0.0f, 2000.0f, 1000.0f},
    {0.0f, 2000.0f, -2000.0f},
    {1700.0f, 700.0f, -600.0f},
    {-1700.0f, 700.0f, -600.0f},
    {0.0f, 500.0f, -2500.0f},
};
static ? D_80AC460C;                                /* unable to generate initializer */

void EnBigokuta_Init(EnBigokuta *this, GlobalContext *globalCtx) {
    f32 temp_f6;
    s16 temp_a1;
    EnBigokuta *this = (EnBigokuta *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80AC4590);
    SkelAnime_InitSV(globalCtx, &this->unk148, &D_06006BC0, &D_060014B8, &this->unk198, &this->unk210, 0x14);
    Collider_InitAndSetCylinder(globalCtx, &this->unk360, (Actor *) this, &D_80AC4530);
    Collider_InitAndSetCylinder(globalCtx, &this->unk3AC, (Actor *) this, &D_80AC455C);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, NULL, &D_80AC4588);
    this->unk196 = ActorCutscene_GetAdditionalCutscene((s16) this->actor.cutscene);
    if (((gSaveContext.weekEventReg[20] & 2) != 0) || ((temp_a1 = this->actor.params, (temp_a1 != 0xFF)) && (Flags_GetSwitch(globalCtx, (s32) temp_a1) != 0))) {
        Actor_MarkForDeath((Actor *) this);
    } else {
        this->actor.world.pos.y -= 99.0f;
        func_80AC2C84(this);
    }
    this->unk2AC = (Math_SinS(this->actor.home.rot.y) * 66.0f) + this->actor.world.pos.x;
    this->unk2B0 = (this->actor.home.pos.y - 49.5f) + 42.899998f;
    temp_f6 = Math_CosS(this->actor.home.rot.y) * 66.0f;
    this->unk144 = func_80AC2B4C;
    this->unk2B4 = temp_f6 + this->actor.world.pos.z;
}

void EnBigokuta_Destroy(EnBigokuta *this, GlobalContext *globalCtx) {
    EnBigokuta *this = (EnBigokuta *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk360);
    Collider_DestroyCylinder(globalCtx, &this->unk3AC);
}

void func_80AC28B4(Actor *arg0, GlobalContext *arg1, Vec3f *arg2, Vec3f *arg3) {
    s16 sp26;
    f32 temp_f10;
    s16 temp_v1;
    s32 temp_a0;
    s32 phi_a0;

    ActorCutscene_Start((s16) arg0->cutscene, arg0);
    arg0->unk194 = ActorCutscene_GetCurrentCamera((s16) arg0->cutscene);
    Play_CameraSetAtEye(arg1, arg0->unk194, arg2, arg3);
    temp_v1 = arg0->home.rot.y;
    if ((s32) (s16) (Actor_YawToPoint(arg0, arg3) - temp_v1) > 0) {
        phi_a0 = (temp_v1 + 0x1800) << 0x10;
    } else {
        phi_a0 = (temp_v1 - 0x1800) << 0x10;
    }
    temp_a0 = phi_a0 >> 0x10;
    sp26 = (s16) temp_a0;
    temp_f10 = (Math_SinS((s16) temp_a0) * 250.0f) + arg0->unk2AC;
    arg0->unk2BC = (f32) (arg0->unk2B0 + 100.0f);
    arg0->unk2B8 = temp_f10;
    arg0->unk2C0 = (f32) ((Math_CosS((s16) temp_a0) * 250.0f) + arg0->unk2B4);
}

void func_80AC299C(Actor *arg0, GlobalContext *arg1) {
    Camera *sp1C;
    Vec3f *sp18;
    Camera *temp_v0;
    Vec3f *temp_a0;

    temp_v0 = Play_GetCamera(arg1, arg0->unk194);
    sp1C = temp_v0;
    Math_Vec3f_StepTo(&temp_v0->eye, arg0 + 0x2B8, 20.0f);
    temp_a0 = &sp1C->at;
    sp18 = temp_a0;
    Math_Vec3f_StepTo(temp_a0, arg0 + 0x2AC, 20.0f);
    Play_CameraSetAtEye(arg1, arg0->unk194, sp18, &sp1C->eye);
}

void func_80AC2A1C(Actor *arg0, GlobalContext *arg1) {
    Camera *temp_v0;
    s16 temp_a2;

    temp_a2 = arg0->unk194;
    if (temp_a2 != 0) {
        temp_v0 = Play_GetCamera(arg1, temp_a2);
        Play_CameraSetAtEye(arg1, 0, temp_v0 + 0x50, temp_v0 + 0x5C);
        arg0->unk194 = 0;
        ActorCutscene_Stop((s16) arg0->cutscene);
    }
}

void func_80AC2A7C(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    if (arg0 == temp_v0->parent) {
        temp_v0->parent = NULL;
        temp_v0->unkAE8 = 0x64;
        temp_v0->velocity.y = 0.0f;
        sp2C = temp_v0;
        temp_v0->world.pos.x += 20.0f * Math_SinS(arg0->home.rot.y);
        temp_v0->world.pos.z += 20.0f * Math_CosS(arg0->home.rot.y);
        func_800B8D50(arg1, arg0, 10.0f, arg0->home.rot.y, 10.0f, 4U);
    }
    func_80AC2A1C(arg0, arg1);
}

void func_80AC2B4C(GlobalContext *arg0, Actor *arg1) {
    func_8013A530(arg0, arg1, 3, arg1 + 0x3C, arg1 + 0xBC, 280.0f, 1800.0f, (s16) -1);
}

s32 func_80AC2B98(Actor *arg0, GlobalContext *arg1) {
    WaterBox *sp34;
    s32 sp30;
    CollisionContext *sp2C;
    CollisionContext *temp_a0;
    s32 phi_v0;

    temp_a0 = arg1 + 0x830;
    sp2C = temp_a0;
    arg0->floorHeight = func_800C411C(temp_a0, arg0 + 0x80, &sp30, arg0, arg0 + 0x24);
    if ((func_800CA1E8(arg1, sp2C, arg0->world.pos.x, arg0->world.pos.z, &arg0->home.pos.y, &sp34) == 0) || (phi_v0 = 1, (arg0->home.pos.y <= arg0->floorHeight))) {
        phi_v0 = 0;
    }
    return phi_v0;
}

void func_80AC2C30(EnBigokuta *arg0, GlobalContext *arg1) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 *temp_a1;

    temp_a1 = &sp24;
    sp24 = arg0->actor.world.pos.x;
    sp28 = arg0->actor.home.pos.y;
    sp2C = arg0->actor.world.pos.z;
    EffectSsGRipple_Spawn(arg1, (Vec3f *) temp_a1, 0x3E8, 0x578, (s16) 0);
}

void func_80AC2C84(EnBigokuta *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x148, &D_060014B8, 0.5f, 0.0f, 0.0f, (u8) 1, -3.0f);
    arg0->actionFunc = func_80AC2CE8;
}

void func_80AC2CE8(Actor *arg0, GlobalContext *arg1) {
    void *sp24;

    sp24 = arg1->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    Math_StepToF(arg0 + 0x28, arg0->home.pos.y - 99.0f, 2.5f);
    Math_ApproachS(arg0 + 0xBE, arg0->yawTowardsPlayer, 5, 0x1000);
    if ((arg0->xzDistToPlayer < 300.0f) && ((sp24->world.pos.y - arg0->home.pos.y) < 100.0f)) {
        func_80AC2DAC(arg0, arg1);
    }
}

void func_80AC2DAC(Actor *arg0, GlobalContext *arg1) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 *temp_s3;
    s32 temp_s1;
    s16 phi_s0;
    s32 phi_s1;

    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x148, &D_06000444);
    temp_s3 = &sp4C;
    sp50 = arg0->home.pos.y;
    phi_s0 = 0;
    phi_s1 = 0;
    do {
        sp4C = (Math_SinS(phi_s0) * 70.0f) + arg0->world.pos.x;
        sp54 = (Math_CosS(phi_s0) * 70.0f) + arg0->world.pos.z;
        EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s3, NULL, NULL, (s16) 0, (s16) Rand_S16Offset(0x3E8, 0xC8));
        temp_s1 = phi_s1 + 1;
        phi_s0 = (s16) (phi_s0 + 0x2000);
        phi_s1 = temp_s1;
    } while (temp_s1 != 8);
    Audio_PlayActorSound2(arg0, 0x38C3U);
    arg0->unk18C = func_80AC2EBC;
}

void func_80AC2EBC(Actor *arg0, ? arg1) {
    Actor *temp_a3;
    f32 temp_f4;

    temp_a3 = arg0;
    temp_f4 = temp_a3->home.pos.y;
    arg0 = temp_a3;
    Math_StepToF(temp_a3 + 0x28, temp_f4 - 16.5f, 15.0f);
    if (SkelAnime_FrameUpdateMatrix(arg0 + 0x148) != 0) {
        func_80AC2F20(arg0);
    }
}

void func_80AC2F20(Actor *arg0) {
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x148, &D_060014B8, -5.0f);
    arg0->unk18C = func_80AC2F64;
}

void func_80AC2F64(Actor *arg0, void *arg1) {
    f32 temp_f0;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    Math_StepToF(arg0 + 0x28, arg0->home.pos.y - 16.5f, 2.5f);
    Math_ApproachS(arg0 + 0xBE, arg0->yawTowardsPlayer, 5, 0x1000);
    temp_f0 = arg0->xzDistToPlayer;
    if ((temp_f0 > 400.0f) || (arg0->yDistToPlayer > 200.0f)) {
        Audio_PlayActorSound2(arg0, 0x38C4U);
        func_80AC2C84((EnBigokuta *) arg0);
        return;
    }
    if ((temp_f0 < 200.0f) && (arg1->unk18778(arg1, arg1->unk1CCC) != 0)) {
        func_80AC30EC(arg0, arg1);
    }
}

void func_80AC3054(Actor *arg0, GlobalContext *arg1) {
    Camera *temp_v0;
    s8 temp_a2;

    temp_a2 = arg0->cutscene;
    if (temp_a2 != -1) {
        if (arg0->unk194 != 0) {
            func_80AC299C(arg0, arg1, temp_a2);
            return;
        }
        if (ActorCutscene_GetCanPlayNext((s16) temp_a2) != 0) {
            temp_v0 = Play_GetCamera(arg1, 0);
            func_80AC28B4(arg0, arg1, temp_v0 + 0x50, temp_v0 + 0x5C);
            return;
        }
        ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_80AC30EC(Actor *arg0, void *arg1) {
    void *temp_v0;

    temp_v0 = arg1->unk1CCC;
    temp_v0->unk120 = arg0;
    arg0->shape.rot.y = arg0->yawTowardsPlayer;
    Math_Vec3f_Copy(arg0 + 0x294, temp_v0 + 0x24);
    arg0->unk192 = 0;
    SkelAnime_ChangeAnim(arg0 + 0x148, &D_060014B8, 1.0f, 12.0f, 12.0f, (u8) 2, -3.0f);
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
    arg0->unk2A0 = (f32) ((Math_SinS(arg0->shape.rot.y) * 66.0f) + arg0->world.pos.x);
    arg0->unk2A4 = (f32) ((arg0->home.pos.y - 49.5f) + 42.899998f);
    arg0->unk2A8 = (f32) ((Math_CosS(arg0->shape.rot.y) * 66.0f) + arg0->world.pos.z);
    Audio_PlayActorSound2(arg0, 0x38BEU);
    arg0->unk18C = func_80AC31EC;
}

void func_80AC31EC(Actor *arg0, void *arg1) {
    s16 sp3A;
    Vec3f *sp2C;
    Vec3f *sp28;
    Vec3f *temp_a1;
    Vec3f *temp_a1_2;
    Vec3f *temp_s1;
    s16 temp_v1;
    void *temp_s2;

    temp_s2 = arg1->unk1CCC;
    func_80AC3054(arg0);
    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    Math_StepToF(&arg0->world.pos.y, arg0->home.pos.y - 49.5f, 10.0f);
    temp_v1 = arg0->unk192;
    temp_s1 = temp_s2 + 0x24;
    temp_a1 = arg0 + 0x294;
    if ((s32) temp_v1 < 9) {
        arg0->unk192 = (s16) (temp_v1 + 1);
    }
    temp_s2->unkAE8 = 0;
    sp2C = temp_a1;
    Math_Vec3f_Copy(temp_s1, temp_a1);
    temp_a1_2 = arg0 + 0x2A0;
    sp28 = temp_a1_2;
    if (Math_Vec3f_StepTo(temp_s1, temp_a1_2, sqrtf((f32) arg0->unk192) * 5.0f) < 0.1f) {
        sp3A = arg0->shape.rot.y;
        if (Math_ScaledStepToS(&arg0->shape.rot.y, arg0->home.rot.y, 0x800) != 0) {
            func_80AC33A4(arg0);
        }
        arg0->unk2A0 = (f32) ((Math_SinS(arg0->shape.rot.y) * 66.0f) + arg0->world.pos.x);
        arg0->unk2A4 = (f32) ((arg0->home.pos.y - 49.5f) + 42.899998f);
        arg0->unk2A8 = (f32) ((Math_CosS(arg0->shape.rot.y) * 66.0f) + arg0->world.pos.z);
        Math_Vec3f_Copy(temp_s1, sp28);
        Math_Vec3f_Copy(sp2C, temp_s1);
        temp_s2->unkBE = (s16) (temp_s2->unkBE + (arg0->shape.rot.y - sp3A));
        return;
    }
    Math_Vec3f_Copy(sp2C, temp_s1);
    temp_s2->unk68 = 0.0f;
}

void func_80AC33A4(Actor *arg0) {
    arg0->unk192 = 0xC;
    arg0->unk18C = func_80AC33C0;
}

void func_80AC33C0(Actor *arg0, GlobalContext *arg1) {
    s32 sp24;
    s16 temp_v0;
    s32 temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    arg0->unk192 = (s16) (arg0->unk192 - 1);
    temp_v0 = arg0->unk192;
    if ((s32) temp_v0 >= 0) {
        sp24 = temp_v1;
        func_80AC3054(arg0);
        Math_Vec3f_Copy(temp_v1 + 0x24, arg0 + 0x2A0);
        if (arg0->unk192 == 0) {
            func_80AC2A7C(arg0, arg1);
            Audio_PlayActorSound2(arg0, 0x3896U);
            return;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return;
    }
    if (temp_v0 == -0x18) {
        func_80AC2F20(arg0);
    }
}

void func_80AC3460(Actor *arg0) {
    s16 temp_a0;

    temp_a0 = arg0->unk196;
    arg0 = arg0;
    ActorCutscene_SetIntentToPlay(temp_a0);
    arg0->unk192 = 0;
    arg0->unk18C = func_80AC34A8;
    arg0->unk3BD = (u8) (arg0->unk3BD & 0xFFFE);
}

void func_80AC34A8(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_v0;
    s16 temp_v1;

    temp_v1 = arg0->unk192;
    arg0->colorFilterTimer = SkelAnime_GetFrameCount(&D_06000A74);
    if (temp_v1 != 0) {
        arg0->unk192 = (s16) (temp_v1 - 1);
        if (arg0->unk192 == 0) {
            arg0->unk190 = 0U;
            arg0->unk288 = 0.0f;
            func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x2C4), 0xD, 2, 0.5f, 0.35f);
            func_80AC35E8(arg0);
            return;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return;
    }
    if (ActorCutscene_GetCanPlayNext(arg0->unk196) != 0) {
        ActorCutscene_Start(arg0->unk196, arg0);
        if (((gSaveContext.eventInf[4] & 2) == 0) && ((gSaveContext.eventInf[3] & 0x20) == 0)) {
            func_800B724C(arg1, arg0, 7U);
        } else {
            temp_v0 = arg1->actorCtx.actorList[2].first;
            temp_v0->unkA6C = (s32) (temp_v0->unkA6C | 0x20);
        }
        if (arg0->unk190 == 0xA) {
            arg0->unk192 = 3;
            return;
        }
        func_80AC35E8(arg0);
        return;
    }
    ActorCutscene_SetIntentToPlay(arg0->unk196);
}

void func_80AC35E8(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x148;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionStop(temp_a0, (AnimationHeader *) &D_06000A74, -5.0f);
    Audio_PlayActorSound2(arg0, 0x38ADU);
    arg0->flags &= -2;
    arg0->unk192 = 0xA;
    arg0->unk18C = func_80AC3650;
}

void func_80AC3650(Actor *arg0, GlobalContext *arg1) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    Actor *temp_v0_2;
    f32 temp_f0;
    s16 temp_a1;
    s16 temp_v0;
    s32 temp_s0;
    s32 phi_s0;

    if (SkelAnime_FrameUpdateMatrix(arg0 + 0x148) != 0) {
        temp_v0 = arg0->unk192;
        arg0->world.pos.y -= 0.2f;
        if ((s32) temp_v0 > 0) {
            arg0->unk192 = (s16) (temp_v0 - 1);
            if (arg0->unk192 == 6) {
                sp84 = arg0->world.pos.x;
                sp88 = arg0->world.pos.y + 150.0f;
                sp8C = arg0->world.pos.z;
                func_800B0DE0(arg1, (Vec3f *) &sp84, &D_801D15B0, &D_801D15B0, &D_80AC45B0, &D_80AC45B4, (s16) 0x4B0, (s16) 0x14);
                Audio_PlayActorSound2(arg0, 0x38C7U);
                return;
            }
            /* Duplicate return node #16. Try simplifying control flow for better match */
            return;
        }
        arg0->world.pos.y -= 0.2f;
        if (Math_StepToF(&arg0->scale.y, 0.001f, 0.001f) != 0) {
            Audio_PlaySoundAtPosition(arg1, (Vec3f *) &arg0->world, 0x32, 0x38C5U);
            sp6C = arg0->world.pos.y;
            phi_s0 = 0;
            do {
                sp74 = randPlusMinusPoint5Scaled(10.0f);
                sp78 = Rand_ZeroFloat(5.5f) + 5.5f;
                temp_f0 = randPlusMinusPoint5Scaled(10.0f);
                sp7C = temp_f0;
                sp68 = arg0->world.pos.x + (2.0f * sp74);
                sp70 = arg0->world.pos.z + (2.0f * temp_f0);
                EffectSsDtBubble_SpawnCustomColor(arg1, (Vec3f *) &sp68, (Vec3f *) &sp74, &D_80AC45A4, &D_80AC45B0, &D_80AC45B8, (s16) Rand_S16Offset(0x96, 0x32), (s16) 0x19, (s16) 0);
                temp_s0 = phi_s0 + 1;
                phi_s0 = temp_s0;
            } while (temp_s0 != 0x14);
            temp_a1 = arg0->params;
            if (temp_a1 != 0xFF) {
                Actor_SetSwitchFlag(arg1, (s32) temp_a1);
            }
            ActorCutscene_Stop(arg0->unk196);
            Actor_MarkForDeath(arg0);
            if (((gSaveContext.eventInf[4] & 2) == 0) && ((gSaveContext.eventInf[3] & 0x20) == 0)) {
                func_800B724C(arg1, arg0, 6U);
            } else {
                temp_v0_2 = arg1->actorCtx.actorList[2].first;
                temp_v0_2->unkA6C = (s32) (temp_v0_2->unkA6C & ~0x20);
            }
        }
        if (arg0->unk288 > 0.0f) {
            arg0->unk288 = (f32) (arg0->scale.y * 30.30303f);
            return;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return;
    }
    Math_StepToF(&arg0->world.pos.y, arg0->home.pos.y - 16.5f, 15.0f);
}

s32 func_80AC3930(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_v0;

    temp_v0 = func_ActorCategoryIterateById(arg1, NULL, 1, 0xA7);
    arg0->child = temp_v0;
    if ((temp_v0 != 0) && (Actor_XZDistanceBetweenActors(arg0, temp_v0) < 250.0f)) {
        return 1;
    }
    return 0;
}

void func_80AC39A0(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s32 temp_v0_2;
    u8 temp_v1;

    temp_v1 = arg0->unk3BD;
    if (((temp_v1 & 1) != 0) && (((temp_v1 & 2) != 0) || (((temp_v0 = arg1->sceneNum, (temp_v0 == 0x45)) || (temp_v0 == 0)) && (func_80AC3930(arg0, arg1) != 0)))) {
        Enemy_StartFinishingBlow(arg1, arg0);
        if ((arg0->unk3BD & 2) != 0) {
            temp_v0_2 = *arg0->unk3E8;
            if ((temp_v0_2 & 0x1000) != 0) {
                arg0->unk190 = 0xA;
                arg0->unk28C = 1.2f;
                arg0->unk290 = 1.8000001f;
                arg0->unk288 = 1.0f;
            } else if ((temp_v0_2 & 0x2000) != 0) {
                arg0->unk190 = 0x14;
                arg0->unk28C = 1.2f;
                arg0->unk288 = 4.0f;
                Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) arg0->unk3D2, (f32) arg0->unk3D4, (f32) arg0->unk3D6, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
            }
        }
        arg0->unk3BD = (u8) (arg0->unk3BD & 0xFFFD);
        func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) SkelAnime_GetFrameCount(&D_06000A74));
        func_80AC2A7C(arg0, arg1);
        func_80AC3460(arg0);
    }
}

void EnBigokuta_Update(EnBigokuta *this, GlobalContext *globalCtx) {
    CollisionCheckContext *sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a2;
    CollisionCheckContext *temp_a1;
    f32 temp_f0;
    f32 temp_f8;
    s32 temp_f16;
    EnBigokuta *this = (EnBigokuta *) thisx;

    if (func_80AC2B98((Actor *) this, globalCtx) == 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (((u32) globalCtx->gameplayFrames % 7U) == 0) {
        func_80AC2C30(this, globalCtx);
    }
    func_80AC39A0((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    if ((this->unk3AC.base.acFlags & 1) != 0) {
        temp_f16 = (s32) ((Math_SinS(this->actor.shape.rot.y) * -20.0f) + this->actor.world.pos.x);
        this->unk360.dim.pos.y = (s16) (s32) this->actor.world.pos.y;
        this->unk360.dim.pos.x = (s16) temp_f16;
        temp_f8 = Math_CosS(this->actor.shape.rot.y) * -20.0f;
        temp_a1 = &globalCtx->colChkCtx;
        this->unk3AC.dim.pos.x = this->unk360.dim.pos.x;
        this->unk3AC.dim.pos.y = this->unk360.dim.pos.y;
        this->unk360.dim.pos.z = (s16) (s32) (temp_f8 + this->actor.world.pos.z);
        this->unk3AC.dim.pos.z = this->unk360.dim.pos.z;
        sp24 = temp_a1;
        CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) &this->unk3AC);
        temp_a2 = &this->unk360;
        sp20 = temp_a2;
        CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2);
        CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_a2);
        Actor_SetHeight((Actor *) this, 82.5f);
    }
    if (this->unk288 > 0.0f) {
        if (this->unk190 != 0xA) {
            Math_StepToF(&this->unk288, 0.0f, 0.05f);
            temp_f0 = (this->unk288 + 1.0f) * 0.6f;
            this->unk28C = temp_f0;
            if (temp_f0 > 1.2f) {
                this->unk28C = 1.2f;
                return;
            }
            this->unk28C = this->unk28C;
            return;
        }
        if (Math_StepToF(&this->unk290, 1.2f, 0.030000001f) == 0) {
            func_800B9010((Actor *) this, 0x20B2U);
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
    }
}

s32 func_80AC3D48(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, s16 *arg4, Actor *arg5, Gfx **arg6) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0_3;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 phi_a3;
    s16 phi_v1;

    if (arg1 == 0xA) {
        phi_a3 = 0xFF;
        if (func_80AC3650 == arg5->unk18C) {
            temp_f0 = (f32) SkelAnime_GetFrameCount(&D_06000A74);
            phi_a3 = (s32) ((255.0f / temp_f0) * (temp_f0 - arg5->unk160));
        }
        temp_v1 = *arg6;
        *arg6 = temp_v1 + 8;
        temp_v1->words.w1 = 0;
        temp_v1->words.w0 = 0xE7000000;
        temp_v1_2 = *arg6;
        temp_v0 = phi_a3 & 0xFF;
        *arg6 = temp_v1_2 + 8;
        temp_v1_2->words.w1 = (temp_v0 << 0x18) | (temp_v0 << 0x10) | (temp_v0 << 8) | temp_v0;
        temp_v1_2->words.w0 = 0xFB000000;
        temp_v0_2 = arg5->unk18C;
        if (func_80AC31EC == temp_v0_2) {
            *arg4 -= (s16) (s32) ((f32) arg5->unk192 * 6144.0f * 0.11111111f);
        } else if (func_80AC33C0 == temp_v0_2) {
            temp_v0_3 = arg5->unk192;
            if (temp_v0_3 == 1) {
                phi_v1 = 0;
            } else if (temp_v0_3 == 0) {
                phi_v1 = -0xC00;
            } else if ((s32) temp_v0_3 > 0) {
                phi_v1 = 0x1800;
            } else {
                phi_v1 = (s16) (s32) ((f32) (temp_v0_3 + 0x18) * 0.041666668f * -6144.0f);
            }
            *arg4 -= phi_v1;
        }
    } else if (arg1 == 0x11) {
        temp_v0_4 = arg5->unk18C;
        if (func_80AC3650 == temp_v0_4) {
            temp_v0_5 = arg5->unk192;
            if ((s32) temp_v0_5 < 5) {
                Matrix_Scale(1.0f, 1.0f, ((f32) temp_v0_5 * 0.2f * 0.25f) + 1.0f, 1);
            } else if ((s32) temp_v0_5 < 8) {
                temp_f0_2 = (f32) (temp_v0_5 - 5) * 0.083333336f;
                temp_f12 = 1.0f + temp_f0_2;
                Matrix_Scale(temp_f12, temp_f12, 1.25f - temp_f0_2, 1);
            } else {
                temp_f12_2 = 1.25f - ((f32) (temp_v0_5 - 8) * 0.125f);
                Matrix_Scale(temp_f12_2, temp_f12_2, 1.0f, 1);
            }
        } else if (func_80AC31EC == temp_v0_4) {
            temp_f16 = (f32) arg5->unk192;
            temp_f18 = temp_f16 * 0.022222223f;
            temp_f2 = sin_rad((f32) arg5->unk192 * 1.0471976f) * 0.5f;
            Matrix_Scale((temp_f18 * (0.5f + temp_f2)) + 1.0f, (temp_f18 * (0.5f - temp_f2)) + 1.0f, 1.0f - ((temp_f16 * 0.3f) / 9.0f), 1);
        } else if (func_80AC33C0 == temp_v0_4) {
            temp_v0_6 = arg5->unk192;
            if (temp_v0_6 != 1) {
                if (temp_v0_6 == 0) {
                    Matrix_Scale(0.9f, 0.9f, 1.15f, 1);
                } else if ((s32) temp_v0_6 > 0) {
                    temp_f2_2 = sin_rad((f32) temp_v0_6 * 1.0471976f) * 0.5f;
                    Matrix_Scale(((0.5f + temp_f2_2) * 0.2f) + 1.0f, ((0.5f - temp_f2_2) * 0.2f) + 1.0f, 0.7f, 1);
                } else {
                    temp_f0_3 = (f32) (temp_v0_6 + 0x18);
                    temp_f12_3 = 1.0f - (temp_f0_3 * 0.2f * 0.041666668f);
                    Matrix_Scale(temp_f12_3, temp_f12_3, (temp_f0_3 * 0.3f * 0.041666668f) + 1.0f, 1);
                }
            }
        }
    }
    return 0;
}

void func_80AC4204(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f *temp_s0;
    s8 temp_v0;
    Vec3f *phi_s0;
    Vec3f *phi_s1;

    temp_v0 = *(&D_80AC45BC + arg1);
    if (temp_v0 != -1) {
        if ((s32) temp_v0 < 6) {
            SysMatrix_GetStateTranslationAndScaledX(800.0f, arg4 + (temp_v0 * 0xC) + 0x2C4);
            return;
        }
        if ((s32) temp_v0 < 8) {
            SysMatrix_GetStateTranslation(arg4 + (temp_v0 * 0xC) + 0x2C4);
            return;
        }
        phi_s0 = D_80AC45D0;
        phi_s1 = arg4 + (temp_v0 * 0xC) + 0x2C4;
        do {
            SysMatrix_MultiplyVector3fByState(phi_s0, phi_s1);
            temp_s0 = phi_s0 + 0xC;
            phi_s0 = temp_s0;
            phi_s1 += 0xC;
        } while (temp_s0 != &D_80AC460C);
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void EnBigokuta_Draw(EnBigokuta *this, GlobalContext *globalCtx) {
    GraphicsContext *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_v1;
    EnBigokuta *this = (EnBigokuta *) thisx;

    temp_v1 = globalCtx->state.gfxCtx;
    if ((func_80AC3650 != this->actionFunc) || (this->unk192 != 0)) {
        sp30 = temp_v1;
        Scene_SetRenderModeXlu(globalCtx, 0, 1U);
        temp_v0_2 = temp_v1->polyOpa.p;
        temp_v0_2->words.w1 = (u32) (sSetupDL + 0x4B0);
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->unkC = -1;
        temp_v0_2->unk8 = 0xFB000000;
        sp30 = temp_v1;
        temp_v1->polyOpa.p = SkelAnime_DrawSV2(globalCtx, this->unk148.skeleton, this->unk148.limbDrawTbl, (s32) this->unk148.dListCount, (s32 (*)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *, Gfx **)) func_80AC3D48, func_80AC4204, (Actor *) this, temp_v0_2 + 0x10);
    } else {
        sp30 = temp_v1;
        Scene_SetRenderModeXlu(globalCtx, 1, 2U);
        temp_v0 = temp_v1->polyXlu.p;
        temp_v0->words.w1 = (u32) (sSetupDL + 0x4B0);
        temp_v0->words.w0 = 0xDE000000;
        temp_v0->unk8 = 0xFB000000;
        temp_v0->unkC = (s32) ((u32) (this->actor.scale.y * 7727.273f) & 0xFF);
        sp30 = temp_v1;
        temp_v1->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk148.skeleton, this->unk148.limbDrawTbl, (s32) this->unk148.dListCount, NULL, func_80AC4204, (Actor *) this, temp_v0 + 0x10);
    }
    func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk2C4, 0xD, this->unk28C, this->unk290, this->unk288, (u8) (s32) this->unk190);
}
