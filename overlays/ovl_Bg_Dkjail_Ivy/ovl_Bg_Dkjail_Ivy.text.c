void func_80ADE230(Actor *arg0, GlobalContext *arg1); /* static */
void func_80ADE6AC(BgDkjailIvy *arg0);              /* static */
void func_80ADE6C0(BgDkjailIvy *arg0, GlobalContext *arg1); /* static */
void func_80ADE734(BgDkjailIvy *arg0);              /* static */
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
static InitChainEntry D_80ADE98C;                   /* unable to generate initializer */

typedef struct BgDkjailIvy {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ ColliderCylinder unk15C;           /* inferred */
    /* 0x01A8 */ void (*actionFunc)(BgDkjailIvy *, GlobalContext *);
    /* 0x01AC */ char pad1AC[0x1];
    /* 0x01AD */ u8 unk1AD;                         /* inferred */
    /* 0x01AE */ char pad1AE[0x2];                  /* maybe part of unk1AD[3]? */
} BgDkjailIvy;                                      /* size 0x1B0 */

void func_80ADE230(Actor *arg0, GlobalContext *arg1) {
    f32 spDC;
    f32 spD8;
    f32 spD4;
    Vec3f spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    Vec3f *temp_s2;
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
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_s6, temp_s2);
        spBC = (Rand_ZeroOne() - 0.5f) + (spC8.x * 0.075f);
        spC0 = 2.0f * Rand_ZeroOne();
        spC4 = (Rand_ZeroOne() - 0.5f) + (spC8.z * 0.075f);
        spC8.x += arg0->world.pos.x;
        spC8.y += arg0->world.pos.y;
        spC8.z += arg0->world.pos.z;
        EffectSsKakera_Spawn(arg1, temp_s2, (Vec3f *) temp_s7, temp_s2, (s16) -0x82, (s16) 0x40, (s16) 0x28, (s16) 0, (s16) 0, (s16) (s32) *(&D_80ADE984 + ((phi_s0 & 3) * 2)), (s16) 0, (s16) 0, 0x2C, (s16) -1, (s16) 1, *(&D_80ADE97C + ((Rand_Next() > 0) * 4)));
        if ((phi_s0 >= 0x15) && ((phi_s0 & 1) != 0)) {
            spB0 = (Rand_ZeroOne() - 0.5f) * 0.2f;
            spB4 = (Rand_ZeroOne() * 0.02f) - 0.1f;
            spB8 = (Rand_ZeroOne() - 0.5f) * 0.2f;
            temp_s1 = Rand_Next();
            func_800B12F0(arg1, temp_s2, &D_801D15B0, (Vec3f *) &spB0, (s16) (((u32) temp_s1 >> 0x1A) + 0xA), (s16) (Rand_Next() >> 0x1C), (s16) 0x32);
        }
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
        phi_s4 = (s16) (phi_s4 + 0x4E20);
    } while (temp_s0 != 0x32);
}

void BgDkjailIvy_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgDkjailIvy *this = (BgDkjailIvy *) thisx;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;

    Actor_ProcessInitChain(&this->actor, &D_80ADE98C);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    temp_a1 = &this->unk15C;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_060011A8);
    Collider_SetCylinder(globalCtx, sp24, &this->actor, &D_80ADE950);
    Collider_UpdateCylinder(&this->actor, sp24);
    this->unk1AD = 0xFF;
    func_80ADE6AC(this);
}

void BgDkjailIvy_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgDkjailIvy *this = (BgDkjailIvy *) thisx;
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk144);
    Collider_DestroyCylinder(globalCtx, &this->unk15C);
}

void func_80ADE6AC(BgDkjailIvy *arg0) {
    arg0->actionFunc = func_80ADE6C0;
}

void func_80ADE6C0(BgDkjailIvy *arg0, GlobalContext *arg1) {
    s8 temp_a0;
    u8 temp_v0;

    temp_v0 = arg0->unk15C.base.acFlags;
    if ((temp_v0 & 2) != 0) {
        arg0->unk15C.base.acFlags = temp_v0 & 0xFFFD;
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
        arg0->unk1AC = 0x32;
        func_800C62BC(arg1, arg1 + 0x880, arg0->unk144);
        Actor_SetSwitchFlag(arg1, arg0->params & 0x7F);
        func_80ADE230(arg0, arg1);
        Audio_PlayActorSound2(arg0, 0x29B6U);
        func_80ADE7E0(arg0);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
}

void func_80ADE7E0(Actor *arg0) {
    arg0->unk1A8 = func_80ADE7F4;
}

void func_80ADE7F4(Actor *arg0, ? arg1) {
    u8 temp_v0;

    temp_v0 = arg0->unk1AD;
    if ((s32) temp_v0 >= 9) {
        arg0->unk1AD = (u8) (temp_v0 - 8);
    } else {
        arg0->unk1AD = 0U;
        arg0->draw = NULL;
    }
    arg0->unk1AC = (s8) (arg0->unk1AC - 1);
    if ((s32) arg0->unk1AC <= 0) {
        Actor_MarkForDeath(arg0);
    }
}

void BgDkjailIvy_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgDkjailIvy *this = (BgDkjailIvy *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgDkjailIvy_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgDkjailIvy *this = (BgDkjailIvy *) thisx;
    GraphicsContext *sp28;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;

    temp_a0 = globalCtx->state.gfxCtx;
    sp28 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = sp28->polyXlu.p;
    sp28->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xFA0000FF;
    temp_v0->words.w1 = this->unk1AD | ~0xFF;
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

