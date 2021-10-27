typedef struct BgLastBwall {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ void (*actionFunc)(BgLastBwall *, GlobalContext *);
    /* 0x160 */ ColliderTris unk_160;               /* inferred */
    /* 0x180 */ ColliderTrisElement unk_180;        /* inferred */
    /* 0x1DC */ char pad_1DC[0x5C];
    /* 0x238 */ u8 unk_238;                         /* inferred */
    /* 0x239 */ char pad_239[0x1];
    /* 0x23A */ s16 unk_23A;                        /* inferred */
} BgLastBwall;                                      /* size = 0x23C */

struct _mips2c_stack_BgLastBwall_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgLastBwall_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgLastBwall_Init {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderTris *sp2C;                  /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_BgLastBwall_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C18240 {
    /* 0x00 */ char pad_0[0x54];
    /* 0x54 */ ? sp54;                              /* inferred */
    /* 0x54 */ char pad_54[0xC];
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad_60[0xC];
    /* 0x6C */ ? sp6C;                              /* inferred */
    /* 0x6C */ char pad_6C[0xC];
    /* 0x78 */ ? sp78;                              /* inferred */
    /* 0x78 */ char pad_78[0xC];
    /* 0x84 */ ? sp84;                              /* inferred */
    /* 0x84 */ char pad_84[0xC];
    /* 0x90 */ ? sp90;                              /* inferred */
    /* 0x90 */ char pad_90[0x8];
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_80C184EC {
    /* 0x00 */ char pad_0[0xB4];
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ char pad_C0[0x4];
    /* 0xC4 */ ? spC4;                              /* inferred */
    /* 0xC4 */ char pad_C4[0xC];
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ char pad_DC[0x4];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_func_80C187E4 {};              /* size 0x0 */

struct _mips2c_stack_func_80C187F8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C1886C {};              /* size 0x0 */

struct _mips2c_stack_func_80C18884 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C188C4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C18928 {};              /* size 0x0 */

void func_80C18240(ColliderTrisInit *arg0, Vec3f *arg1, ActorShape *arg2, ColliderTris *arg3, void *arg4); /* static */
void func_80C184EC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C187E4(BgLastBwall *arg0);              /* static */
void func_80C187F8(void *arg0, GlobalContext *arg1); /* static */
void func_80C1886C(void *arg0, GlobalContext *arg1); /* static */
void func_80C18884(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C188C4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C18928(s32 arg0, ? arg1);               /* static */
extern Gfx D_06000098;
static ColliderTrisElementInit D_80C189C0[2] = {
    {
        {0, {0, 0, 0}, {8, 0, 0}, 0, 1, 0},
        {{{-70.0f, 0.0f, 3.0f}, {70.0f, 0.0f, 3.0f}, {-70.0f, 200.0f, 3.0f}}},
    },
    {
        {0, {0, 0, 0}, {8, 0, 0}, 0, 1, 0},
        {{{70.0f, 0.0f, 3.0f}, {70.0f, 200.0f, 3.0f}, {-70.0f, 200.0f, 3.0f}}},
    },
};
static ColliderTrisInit D_80C18A38 = {{0xA, 0, 9, 0, 0, 2}, 2, &D_80C189C0};
static ? D_80C18A48;                                /* unable to generate initializer */
static ? D_80C18A50;                                /* unable to generate initializer */
static ? D_80C18AC0;                                /* unable to generate initializer */
static InitChainEntry D_80C18AC8;                   /* unable to generate initializer */

void func_80C18240(ColliderTrisInit *arg0, Vec3f *arg1, ActorShape *arg2, ColliderTris *arg3, void *arg4) {
    ? sp90;
    ? sp84;
    ? sp78;
    ? sp6C;
    ? sp60;
    ? sp54;
    Vec3f *temp_s0;
    s32 temp_fp;
    s32 phi_s1;
    Vec3f *phi_s0;
    s32 phi_fp;

    Matrix_RotateY(arg2->rot.y, 0U);
    SysMatrix_InsertXRotation_s(arg2->rot.x, 1);
    SysMatrix_InsertZRotation_s(arg2->rot.z, 1);
    phi_fp = 0;
    if (arg0->count > 0) {
        do {
            phi_s1 = 0;
            phi_s0 = (Vec3f *) &sp6C;
loop_3:
            Math_Vec3s_ToVec3f((Vec3f *) &sp60, (*(arg4->unk_4 + phi_s1) * 6) + arg4->unk_0);
            SysMatrix_MultiplyVector3fByState((Vec3f *) &sp60, (Vec3f *) &sp54);
            Math_Vec3f_Sum((Vec3f *) &sp54, arg1, phi_s0);
            temp_s0 = &phi_s0[1];
            phi_s1 += 2;
            phi_s0 = temp_s0;
            if (temp_s0 != &sp90) {
                goto loop_3;
            }
            arg4->unk_4 = (s32) (arg4->unk_4 + 6);
            Collider_SetTrisVertices(arg3, phi_fp, (Vec3f *) &sp6C, (Vec3f *) &sp78, (Vec3f *) &sp84);
            temp_fp = phi_fp + 1;
            phi_fp = temp_fp;
        } while (temp_fp < arg0->count);
    }
}

void BgLastBwall_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderTris *sp2C;
    ColliderTris *temp_a1;
    BgLastBwall *this = (BgLastBwall *) thisx;

    Actor_ProcessInitChain((Actor *) this, &D_80C18AC8);
    this->unk_238 = ((s32) this->actor.params >> 0xC) & 0xF;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, *(&D_80C18A50 + (this->unk_238 * 0xC)));
    temp_a1 = &this->unk_160;
    sp2C = temp_a1;
    Collider_InitTris(globalCtx, temp_a1);
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (Collider_SetTris(globalCtx, sp2C, (Actor *) this, &D_80C18A38, &this->unk_180) == 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    func_80C18240(&D_80C18A38, (Vec3f *) &this->actor.world, &this->actor.shape, sp2C, *(&D_80C18AC0 + (this->unk_238 * 4)));
    func_8013E3B8((Actor *) this, (s16 []) &this->unk_23A, 1);
    func_80C187E4(this);
}

void BgLastBwall_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgLastBwall *this = (BgLastBwall *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

void func_80C184EC(Actor *arg0, GlobalContext *arg1) {
    f32 spD8;
    f32 spD4;
    f32 spD0;
    ? spC4;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 *temp_s4;
    f32 *temp_s7;
    f32 temp_f0;
    f32 temp_f18;
    f32 temp_f20;
    s32 temp_s2;
    u8 temp_v0;
    s32 phi_v0;
    s32 phi_s2;

    Matrix_RotateY(arg0->shape.rot.y, 0U);
    SysMatrix_InsertXRotation_s(arg0->shape.rot.y, 1);
    SysMatrix_InsertZRotation_s(arg0->shape.rot.y, 1);
    temp_s7 = &spB4;
    temp_s4 = &spD0;
    phi_s2 = 0;
    do {
        temp_v0 = arg0->unk_238;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {

            } else {
                temp_f18 = Rand_Centered() * 160.0f;
                spD4 = 400.0f;
                spD0 = temp_f18;
                spD8 = Rand_Centered() * 160.0f;
                SysMatrix_MultiplyVector3fByState((Vec3f *) temp_s4, (Vec3f *) &spC4);
                Math_Vec3f_Sum(arg0 + 0x24, (Vec3f *) &spC4, (Vec3f *) &spC4);
            }
        } else {
            spD0 = 280.0f;
            spD4 = (Rand_Centered() * 160.0f) + 320.0f;
            spD8 = Rand_Centered() * 160.0f;
            SysMatrix_MultiplyVector3fByState((Vec3f *) temp_s4, (Vec3f *) &spC4);
            Math_Vec3f_Sum(arg0 + 0x24, (Vec3f *) &spC4, (Vec3f *) &spC4);
        }
        temp_f20 = Rand_ZeroOne();
        func_800BBFB0(arg1, (Vec3f *) &spC4, 50.0f, 2, (s16) (s32) ((temp_f20 * 120.0f) + 20.0f), (s16) (s32) ((Rand_ZeroOne() * 240.0f) + 20.0f), (u8) 0);
        spB4 = Rand_ZeroOne() * 2.5f;
        spB8 = (Rand_ZeroOne() * 2.5f) + 1.0f;
        spBC = Rand_ZeroOne() * 2.5f;
        temp_f0 = Rand_ZeroOne();
        if (temp_f0 < 0.2f) {
            phi_v0 = 0x60;
        } else {
            phi_v0 = 0x20;
            if (temp_f0 < 0.6f) {
                phi_v0 = 0x40;
            }
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) &spC4, (Vec3f *) temp_s7, (Vec3f *) &spC4, (s16) -0x104, (s16) phi_v0, (s16) 0x14, (s16) 0, (s16) 0, (s16) 0xA, (s16) 0, (s16) 0, 0x32, (s16) -1, (s16) 0x234, &D_06000098);
        temp_s2 = phi_s2 + 1;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x1E);
}

void func_80C187E4(BgLastBwall *arg0) {
    arg0->actionFunc = func_80C187F8;
}

void func_80C187F8(BgLastBwall *arg0, GlobalContext *arg1) {
    s16 temp_a1;
    u8 temp_v0;

    temp_v0 = arg0->unk_160.base.acFlags;
    if ((temp_v0 & 2) != 0) {
        temp_a1 = arg0->actor.params;
        arg0->unk_160.base.acFlags = temp_v0 & 0xFFFD;
        arg0 = arg0;
        Actor_SetSwitchFlag(arg1, temp_a1 & 0x7F);
        func_80C1886C(arg0, arg1);
        return;
    }
    CollisionCheck_SetAC(arg1, &arg1->colChkCtx, arg0 + 0x160);
}

void func_80C1886C(BgLastBwall *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80C18884;
}

void func_80C18884(Actor *arg0, GlobalContext *arg1) {
    if (func_8013E2D4(arg0, arg0->unk_23A, -1, 0) != 0) {
        func_80C188C4(arg0, arg1);
    }
}

void func_80C188C4(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a3;

    temp_a3 = arg1;
    arg1 = temp_a3;
    func_800C62BC(temp_a3, temp_a3 + 0x880, arg0->unk_144);
    arg0->draw = NULL;
    func_80C184EC(arg0, arg1);
    Audio_PlayActorSound2(arg0, 0x2810U);
    arg0->unk_15C = func_80C18928;
}

void func_80C18928(s32 arg0, ? arg1) {

}

void BgLastBwall_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgLastBwall *this = (BgLastBwall *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgLastBwall_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgLastBwall *this = (BgLastBwall *) thisx;
    func_800BDFC0(globalCtx, *(&D_80C18A48 + (this->unk_238 * 0xC)));
}
