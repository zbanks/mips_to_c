typedef struct BgAstrBombwall {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ void (*actionFunc)(BgAstrBombwall *, GlobalContext *);
    /* 0x160 */ ColliderTris unk160;                /* inferred */
    /* 0x180 */ ColliderTrisElement unk180;         /* inferred */
    /* 0x1DC */ char pad1DC[0x5C];
    /* 0x238 */ s16 unk238;                         /* inferred */
    /* 0x23A */ char pad23A[0x2];
} BgAstrBombwall;                                   /* size = 0x23C */

struct _mips2c_stack_BgAstrBombwall_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgAstrBombwall_Draw {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad20[0x14];                    /* maybe part of sp1C[6]? */
    /* 0x34 */ GraphicsContext *sp34;               /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad3C[0x14];                    /* maybe part of sp38[6]? */
    /* 0x50 */ GraphicsContext *sp50;               /* inferred */
    /* 0x54 */ Gfx *sp54;                           /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_BgAstrBombwall_Init {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ ColliderTris *sp2C;                  /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_BgAstrBombwall_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C09ED0 {
    /* 0x00 */ char pad0[0x54];
    /* 0x54 */ ? sp54;                              /* inferred */
    /* 0x54 */ char pad54[0xC];
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad60[0xC];
    /* 0x6C */ ? sp6C;                              /* inferred */
    /* 0x6C */ char pad6C[0xC];
    /* 0x78 */ ? sp78;                              /* inferred */
    /* 0x78 */ char pad78[0x8];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80C0A120 {
    /* 0x00 */ char pad0[0xAC];
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ char padB8[0x4];
    /* 0xBC */ ? spBC;                              /* inferred */
    /* 0xBC */ char padBC[0xC];
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ char padD4[0x4];
};                                                  /* size = 0xD8 */

struct _mips2c_stack_func_80C0A378 {};              /* size 0x0 */

struct _mips2c_stack_func_80C0A38C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0A400 {};              /* size 0x0 */

struct _mips2c_stack_func_80C0A418 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0A458 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C0A4BC {};              /* size 0x0 */

void func_80C09ED0(ColliderTrisInit *arg0, Vec3f *arg1, ActorShape *arg2, ColliderTris *arg3); /* static */
void func_80C0A120(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C0A378(BgAstrBombwall *arg0);           /* static */
void func_80C0A38C(void *arg0, GlobalContext *arg1); /* static */
void func_80C0A400(void *arg0, GlobalContext *arg1); /* static */
void func_80C0A418(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C0A458(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C0A4BC(s32 arg0, ? arg1);               /* static */
extern Gfx D_06002178;
extern ? D_060022E0;
extern ? D_06002380;
extern CollisionHeader D_06002498;
static ColliderTrisElementInit D_80C0A620[2] = {
    {
        {0, {0, 0, 0}, {8, 0, 0}, 0, 1, 0},
        {{{-70.0f, 0.0f, 3.0f}, {70.0f, 0.0f, 3.0f}, {-70.0f, 200.0f, 3.0f}}},
    },
    {
        {0, {0, 0, 0}, {8, 0, 0}, 0, 1, 0},
        {{{70.0f, 0.0f, 3.0f}, {70.0f, 200.0f, 3.0f}, {-70.0f, 200.0f, 3.0f}}},
    },
};
static ColliderTrisInit D_80C0A698 = {{0xA, 0, 9, 0, 0, 2}, 2, &D_80C0A620};
static InitChainEntry D_80C0A6A8;                   /* unable to generate initializer */

void func_80C09ED0(ColliderTrisInit *arg0, Vec3f *arg1, ActorShape *arg2, ColliderTris *arg3) {
    ? sp78;
    ? sp6C;
    ? sp60;
    ? sp54;
    Vec3f *temp_s0;
    s32 temp_s6;
    s32 phi_s2;
    s32 phi_s1;
    Vec3f *phi_s0;
    s32 phi_s6;

    Matrix_RotateY(arg2->rot.y, 0U);
    SysMatrix_InsertXRotation_s(arg2->rot.x, 1);
    SysMatrix_InsertZRotation_s(arg2->rot.z, 1);
    phi_s2 = 0;
    phi_s6 = 0;
    if (arg0->count > 0) {
        do {
            phi_s1 = 0;
            phi_s0 = (Vec3f *) &sp54;
loop_3:
            SysMatrix_MultiplyVector3fByState(arg0->elements + phi_s2 + phi_s1 + 0x18, phi_s0);
            Math_Vec3f_Sum(phi_s0, arg1, phi_s0);
            temp_s0 = phi_s0 + 0xC;
            phi_s1 += 0xC;
            phi_s0 = temp_s0;
            if (temp_s0 != &sp78) {
                goto loop_3;
            }
            Collider_SetTrisVertices(arg3, phi_s6, (Vec3f *) &sp54, (Vec3f *) &sp60, (Vec3f *) &sp6C);
            temp_s6 = phi_s6 + 1;
            phi_s2 += 0x3C;
            phi_s6 = temp_s6;
        } while (temp_s6 < arg0->count);
    }
}

void BgAstrBombwall_Init(BgAstrBombwall *this, GlobalContext *globalCtx) {
    ColliderTris *sp2C;
    ColliderTris *temp_a1;
    BgAstrBombwall *this = (BgAstrBombwall *) thisx;

    Actor_ProcessInitChain((Actor *) this, &D_80C0A6A8);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06002498);
    temp_a1 = &this->unk160;
    sp2C = temp_a1;
    Collider_InitTris(globalCtx, temp_a1);
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->actor.flags |= 0x10000000;
    if (Collider_SetTris(globalCtx, sp2C, (Actor *) this, &D_80C0A698, &this->unk180) == 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    func_80C09ED0(&D_80C0A698, (Vec3f *) &this->actor.world, &this->actor.shape, sp2C);
    func_8013E3B8((Actor *) this, (s16 []) &this->unk238, 1);
    func_80C0A378(this);
}

void BgAstrBombwall_Destroy(BgAstrBombwall *this, GlobalContext *globalCtx) {
    BgAstrBombwall *this = (BgAstrBombwall *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void func_80C0A120(Actor *arg0, GlobalContext *arg1) {
    f32 spD0;
    f32 spCC;
    f32 spC8;
    ? spBC;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f6;
    s32 temp_s1;
    s32 phi_v0;
    s32 phi_s1;

    Matrix_RotateY(arg0->shape.rot.y, 0U);
    temp_s5 = &spAC;
    temp_s4 = &spC8;
    phi_s1 = 0;
    do {
        spC8 = Rand_Centered() * 140.0f;
        temp_f6 = Rand_ZeroOne() * 200.0f;
        spD0 = 0.0f;
        spCC = temp_f6;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_s4, (Vec3f *) &spBC);
        Math_Vec3f_Sum(arg0 + 0x24, (Vec3f *) &spBC, (Vec3f *) &spBC);
        temp_f20 = Rand_ZeroOne();
        func_800BBFB0(arg1, (Vec3f *) &spBC, 50.0f, 2, (s16) (s32) ((temp_f20 * 120.0f) + 20.0f), (s16) (s32) ((Rand_ZeroOne() * 240.0f) + 20.0f), (u8) 0);
        spAC = Rand_ZeroOne() * 2.5f;
        spB0 = (Rand_ZeroOne() * 2.5f) + 1.0f;
        spB4 = Rand_ZeroOne() * 2.5f;
        temp_f0 = Rand_ZeroOne();
        if (temp_f0 < 0.2f) {
            phi_v0 = 0x60;
        } else {
            phi_v0 = 0x20;
            if (temp_f0 < 0.6f) {
                phi_v0 = 0x40;
            }
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) &spBC, (Vec3f *) temp_s5, (Vec3f *) &spBC, (s16) -0x104, (s16) phi_v0, (s16) 0x14, (s16) 0, (s16) 0, (s16) 0xA, (s16) 0, (s16) 0, 0x32, (s16) -1, (s16) 0x267, &D_06002178);
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x1E);
}

void func_80C0A378(BgAstrBombwall *arg0) {
    arg0->actionFunc = func_80C0A38C;
}

void func_80C0A38C(BgAstrBombwall *arg0, GlobalContext *arg1) {
    s16 temp_a1;
    u8 temp_v0;

    temp_v0 = arg0->unk160.base.acFlags;
    if ((temp_v0 & 2) != 0) {
        temp_a1 = arg0->actor.params;
        arg0->unk160.base.acFlags = temp_v0 & 0xFFFD;
        arg0 = arg0;
        Actor_SetSwitchFlag(arg1, temp_a1 & 0x7F);
        func_80C0A400(arg0, arg1);
        return;
    }
    CollisionCheck_SetAC(arg1, &arg1->colChkCtx, arg0 + 0x160);
}

void func_80C0A400(BgAstrBombwall *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80C0A418;
}

void func_80C0A418(Actor *arg0, GlobalContext *arg1) {
    if (func_8013E2D4(arg0, arg0->unk238, -1, 0) != 0) {
        func_80C0A458(arg0, arg1);
    }
}

void func_80C0A458(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a3;

    temp_a3 = arg1;
    arg1 = temp_a3;
    func_800C62BC(temp_a3, temp_a3 + 0x880, arg0->unk144);
    arg0->draw = NULL;
    func_80C0A120(arg0, arg1);
    Audio_PlayActorSound2(arg0, 0x2810U);
    arg0->unk15C = func_80C0A4BC;
}

void func_80C0A4BC(s32 arg0, ? arg1) {

}

void BgAstrBombwall_Update(BgAstrBombwall *this, GlobalContext *globalCtx) {
    BgAstrBombwall *this = (BgAstrBombwall *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgAstrBombwall_Draw(BgAstrBombwall *this, GlobalContext *globalCtx) {
    Gfx *sp54;
    GraphicsContext *sp50;
    Gfx *sp38;
    GraphicsContext *sp34;
    Gfx *sp1C;
    Gfx *temp_a1;
    Gfx *temp_t0;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_a3;
    GraphicsContext *temp_t1;
    BgAstrBombwall *this = (BgAstrBombwall *) thisx;

    temp_a3 = globalCtx->state.gfxCtx;
    temp_t0 = sSetupDL + 0x4B0;
    temp_v1 = temp_a3->polyOpa.p;
    temp_v1->words.w1 = (u32) temp_t0;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->unk8 = 0xDA380003;
    temp_a0 = globalCtx->state.gfxCtx;
    sp1C = temp_t0;
    sp50 = temp_a3;
    globalCtx = globalCtx;
    sp54 = temp_v1;
    temp_v1->unkC = Matrix_NewMtx(temp_a0);
    temp_v1->unk14 = 0x400000;
    temp_v1->unk10 = 0xD9FFFFFF;
    temp_v1->unk1C = &D_06002380;
    temp_v1->unk18 = 0xDE000000U;
    temp_a3->polyOpa.p = temp_v1 + 0x20;
    temp_t1 = globalCtx->state.gfxCtx;
    temp_a1 = temp_t1->polyXlu.p;
    temp_a1->words.w0 = 0xDE000000;
    temp_a1->words.w1 = (u32) temp_t0;
    temp_a1->unk8 = 0xDA380003;
    sp34 = temp_t1;
    sp38 = temp_a1;
    temp_a1->unkC = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_a1->unk14 = 0x400000;
    temp_a1->unk10 = 0xD9FFFFFF;
    temp_a1->unk1C = &D_060022E0;
    temp_a1->unk18 = 0xDE000000;
    temp_t1->polyXlu.p = temp_a1 + 0x20;
}
