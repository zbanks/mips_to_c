typedef struct BgDkjailIvy {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ ColliderCylinder unk_15C;           /* inferred */
    /* 0x1A8 */ void (*actionFunc)(BgDkjailIvy *, GlobalContext *);
    /* 0x1AC */ char pad_1AC[0x1];
    /* 0x1AD */ u8 unk_1AD;                         /* inferred */
    /* 0x1AE */ char pad_1AE[0x2];                  /* maybe part of unk_1AD[3]? */
} BgDkjailIvy;                                      /* size = 0x1B0 */

struct _mips2c_stack_BgDkjailIvy_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgDkjailIvy_Draw {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x8];                    /* maybe part of sp1C[3]? */
    /* 0x28 */ GraphicsContext *sp28;               /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_BgDkjailIvy_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_BgDkjailIvy_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ADE230 {
    /* 0x00 */ char pad_0[0xB0];
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ f32 spDC;                            /* inferred */
    /* 0xE0 */ char pad_E0[0x8];
};                                                  /* size = 0xE8 */

struct _mips2c_stack_func_80ADE6AC {};              /* size 0x0 */

struct _mips2c_stack_func_80ADE6C0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ADE734 {};              /* size 0x0 */

struct _mips2c_stack_func_80ADE748 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80ADE7E0 {};              /* size 0x0 */

struct _mips2c_stack_func_80ADE7F4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_80ADE230(Actor *arg0, GlobalContext *arg1); /* static */
void func_80ADE6AC(BgDkjailIvy *arg0);              /* static */
void func_80ADE6C0(void *arg0, GlobalContext *arg1); /* static */
void func_80ADE734(void *arg0);                     /* static */
void func_80ADE748(Actor *arg0, GlobalContext *arg1); /* static */
void func_80ADE7E0(Actor *arg0);                    /* static */
void func_80ADE7F4(Actor *arg0, ? arg1);            /* static */
extern ? D_06000080;
extern CollisionHeader D_060011A8;
static ColliderCylinderInit D_80ADE950 = {
    {0xA, 0, 9, 0, 0, 1},
    {0, {0, 0, 0}, {0x1000200, 0, 0}, 0, 1, 0},
    {0x14, 0x50, 0, {0, 0, 0}},
};
static ? D_80ADE97C;                                /* unable to generate initializer */
static ? D_80ADE984;                                /* unable to generate initializer */
static InitChainEntry D_80ADE98C[5];                /* unable to generate initializer */

void func_80ADE230(Actor *arg0, GlobalContext *arg1) {
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 *temp_s2;
    f32 *temp_s6;
    f32 *temp_s7;
    f32 temp_f0;
    s32 temp_s0;
    s32 temp_s1;
    s32 phi_s0;
    s16 phi_s4;
    f32 phi_f20;

    Matrix_RotateY(arg0->home.rot.y, 0U);
    temp_s7 = &spBC;
    temp_s6 = &spD4;
    temp_s2 = &spC8;
    phi_s0 = 0;
    phi_s4 = 0;
    do {
        temp_f0 = ((f32) phi_s0 * 1.8367347f) + 2.0f;
        if (temp_f0 < 45.0f) {
            spD8 = temp_f0;
            phi_f20 = (0.0055555557f * temp_f0) + 0.75f;
        } else if (temp_f0 < 90.0f) {
            spD8 = temp_f0;
            phi_f20 = (-0.0055555557f * temp_f0) + 1.25f;
        } else {
            spD8 = temp_f0;
            phi_f20 = (-0.033333335f * temp_f0) + 3.75f;
        }
        spD4 = Math_SinS(phi_s4) * 40.0f * phi_f20;
        spDC = (Rand_ZeroOne() * 6.0f) - 3.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_s6, (Vec3f *) temp_s2);
        spBC = (Rand_ZeroOne() - 0.5f) + (spC8 * 0.075f);
        spC0 = 2.0f * Rand_ZeroOne();
        spC4 = (Rand_ZeroOne() - 0.5f) + (spD0 * 0.075f);
        spC8 += arg0->world.pos.x;
        spCC += arg0->world.pos.y;
        spD0 += arg0->world.pos.z;
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s2, (Vec3f *) temp_s7, (Vec3f *) temp_s2, (s16) -0x82, (s16) 0x40, (s16) 0x28, (s16) 0, (s16) 0, (s16) (s32) *(&D_80ADE984 + ((phi_s0 & 3) * 2)), (s16) 0, (s16) 0, 0x2C, (s16) -1, (s16) 1, *(&D_80ADE97C + ((Rand_Next() > 0) * 4)));
        if ((phi_s0 >= 0x15) && ((phi_s0 & 1) != 0)) {
            spB0 = (Rand_ZeroOne() - 0.5f) * 0.2f;
            spB4 = (Rand_ZeroOne() * 0.02f) - 0.1f;
            spB8 = (Rand_ZeroOne() - 0.5f) * 0.2f;
            temp_s1 = Rand_Next();
            func_800B12F0(arg1, (Vec3f *) temp_s2, &D_801D15B0, (Vec3f *) &spB0, (s16) (((u32) temp_s1 >> 0x1A) + 0xA), (s16) (Rand_Next() >> 0x1C), (s16) 0x32);
        }
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
        phi_s4 = (s16) (phi_s4 + 0x4E20);
    } while (temp_s0 != 0x32);
}

void BgDkjailIvy_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    BgDkjailIvy *this = (BgDkjailIvy *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80ADE98C);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    temp_a1 = &this->unk_15C;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_060011A8);
    Collider_SetCylinder(globalCtx, sp24, (Actor *) this, &D_80ADE950);
    Collider_UpdateCylinder((Actor *) this, sp24);
    this->unk_1AD = 0xFF;
    func_80ADE6AC(this);
}

void BgDkjailIvy_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;
    BgDkjailIvy *this = (BgDkjailIvy *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk_144);
    Collider_DestroyCylinder(globalCtx, &this->unk_15C);
}

void func_80ADE6AC(BgDkjailIvy *arg0) {
    arg0->actionFunc = func_80ADE6C0;
}

void func_80ADE6C0(BgDkjailIvy *arg0, GlobalContext *arg1) {
    s8 temp_a0;
    u8 temp_v0;

    temp_v0 = arg0->unk_15C.base.acFlags;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_15C.base.acFlags = temp_v0 & 0xFFFD;
        arg0->actor.flags |= 0x10;
        temp_a0 = arg0->actor.cutscene;
        arg0 = arg0;
        ActorCutscene_SetIntentToPlay((s16) temp_a0);
        func_80ADE734(arg0);
        return;
    }
    CollisionCheck_SetAC(arg1, arg1 + 0x18884, arg0 + 0x15C);
}

void func_80ADE734(BgDkjailIvy *arg0) {
    arg0->actionFunc = func_80ADE748;
}

void func_80ADE748(Actor *arg0, GlobalContext *arg1) {
    if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
        arg0->unk_1AC = 0x32;
        func_800C62BC(arg1, arg1 + 0x880, arg0->unk_144);
        Actor_SetSwitchFlag(arg1, arg0->params & 0x7F);
        func_80ADE230(arg0, arg1);
        Audio_PlayActorSound2(arg0, 0x29B6U);
        func_80ADE7E0(arg0);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
}

void func_80ADE7E0(Actor *arg0) {
    arg0->unk_1A8 = func_80ADE7F4;
}

void func_80ADE7F4(Actor *arg0, ? arg1) {
    u8 temp_v0;

    temp_v0 = arg0->unk_1AD;
    if ((s32) temp_v0 >= 9) {
        arg0->unk_1AD = (u8) (temp_v0 - 8);
    } else {
        arg0->unk_1AD = 0U;
        arg0->draw = NULL;
    }
    arg0->unk_1AC = (s8) (arg0->unk_1AC - 1);
    if ((s32) arg0->unk_1AC <= 0) {
        Actor_MarkForDeath(arg0);
    }
}

void BgDkjailIvy_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgDkjailIvy *this = (BgDkjailIvy *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgDkjailIvy_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp28;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    BgDkjailIvy *this = (BgDkjailIvy *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp28 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = sp28->polyXlu.p;
    sp28->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xFA0000FF;
    temp_v0->words.w1 = this->unk_1AD | ~0xFF;
    temp_v0_2 = sp28->polyXlu.p;
    sp28->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp28 = sp28;
    sp1C = temp_v0_2;
    sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_3 = sp28->polyXlu.p;
    sp28->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) &D_06000080;
    temp_v0_3->words.w0 = 0xDE000000;
}
