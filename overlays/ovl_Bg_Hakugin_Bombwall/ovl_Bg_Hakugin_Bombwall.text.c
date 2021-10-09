void func_80ABBFC0(void *arg0, GlobalContext *arg1); /* static */
void func_80ABC2E0(void *arg0, GlobalContext *arg1); /* static */
void func_80ABC58C(void *arg0, GlobalContext *arg1); /* static */
void func_80ABC7FC(void *arg0, GlobalContext *arg1); /* static */
? func_80ABCB5C(void *arg0, GlobalContext *arg1);   /* static */
? func_80ABCC00(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_80ABCCE4(BgHakuginBombwall *, GlobalContext *); /* static */
void func_80ABCD98(BgHakuginBombwall *, GlobalContext *); /* static */
void func_80ABCE60(BgHakuginBombwall *, GlobalContext *); /* static */
extern Gfx D_06009830;
static ColliderCylinderInit D_80ABCF80 = {
    {0xA, 0, 9, 0, 0, 1},
    {0, {0, 0, 0}, {8, 0, 0}, 0, 1, 0},
    {0x50, 0x50, 0, {0, 0, 0}},
};
static Color_RGBA8 D_80ABCFAC = {0xD2, 0xD2, 0xD2, 0xFF};
static Color_RGBA8 D_80ABCFB0 = {0x8C, 0x8C, 0x8C, 0xFF};
static Vec3f D_80ABCFB4 = {0.0f, 0.33f, 0.0f};
static ? D_80ABCFC0;                                /* unable to generate initializer */
static ? D_80ABCFC4;                                /* unable to generate initializer */
static ? D_80ABCFDC;                                /* unable to generate initializer */
static s32 D_80ABD020 = {0xFFFFFFB7, 0xFFFFFFD8, 0xFFFFFFF8, 0x18, 0x39};
static Vec3f D_80ABD034 = {0.0f, 3.0f, 0.0f};
static InitChainEntry D_80ABD040;                   /* unable to generate initializer */

typedef struct BgHakuginBombwall {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ ColliderCylinder unk15C;           /* inferred */
    /* 0x01A8 */ void (*actionFunc)(BgHakuginBombwall *, GlobalContext *);
    /* 0x01AC */ s32 unk1AC;                        /* inferred */
} BgHakuginBombwall;                                /* size 0x1B0 */

void func_80ABBFC0(void *arg0, GlobalContext *arg1) {
    Vec3f spF0;
    Vec3f spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    s32 spAC;
    Vec3f *temp_s4;
    f32 *temp_fp;
    f32 temp_f16;
    s32 *temp_s3;
    s32 temp_a0;
    s32 temp_s2;
    s32 phi_v0;
    s32 *phi_s3;
    s32 phi_s0;
    s32 phi_s1;
    s32 phi_s0_2;

    Matrix_RotateY(arg0->unkBE, 0U);
    temp_fp = &spD8;
    temp_s4 = &spF0;
    phi_v0 = 0;
    do {
        temp_a0 = phi_v0 + 1;
        spAC = temp_a0;
        phi_s3 = &D_80ABD020;
loop_2:
        temp_f16 = (f32) ((Rand_Next() >> 0x1C) + *phi_s3);
        spD8 = temp_f16;
        spDC = ((Rand_ZeroOne() - 0.5f) * 15.0f) + ((f32) temp_a0 * 26.666666f);
        spE0 = (Rand_ZeroOne() * 20.0f) - 10.0f;
        spCC = ((Rand_ZeroOne() - 0.5f) * 7.0f) + (temp_f16 * 0.07777778f);
        spD0 = (Rand_ZeroOne() * 7.0f) - 2.0f;
        spD4 = spE0 * 0.3f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_fp, temp_s4);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &spCC, &spE4);
        spF0.x += arg0->unk24;
        spF0.y += arg0->unk28;
        spF0.z += arg0->unk2C;
        phi_s0_2 = 0x40;
        if ((Rand_Next() & 3) == 0) {
            phi_s0_2 = 0x20;
        }
        phi_s0 = phi_s0_2;
        phi_s1 = 0;
        if (Rand_Next() > 0) {
            temp_s2 = Rand_Next();
            func_800B0E48(arg1, temp_s4, &D_801D15B0, &D_80ABCFB4, &D_80ABCFAC, &D_80ABCFB0, (s16) (((u32) temp_s2 >> 0x1B) + 0x46), (s16) ((Rand_Next() >> 0x1A) + 0x3C));
            phi_s0 = (s32) (s16) (phi_s0_2 | 1);
            phi_s1 = 1;
        }
        EffectSsKakera_Spawn(arg1, temp_s4, &spE4, temp_s4, (s16) -0x226, (s16) phi_s0, (s16) 0x1E, (s16) 0, (s16) 0, (s16) ((s32) (Rand_ZeroOne() * 22.0f) + 5), (s16) phi_s1, (s16) 0, 0x32, (s16) -1, (s16) 0x190, &D_06009830);
        temp_s3 = phi_s3 + 4;
        phi_s3 = temp_s3;
        if (temp_s3 != &D_80ABD034) {
            goto loop_2;
        }
        phi_v0 = spAC;
    } while (spAC != 6);
}

void func_80ABC2E0(void *arg0, GlobalContext *arg1) {
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 *temp_s4;
    f32 *temp_s7;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    s16 temp_s1;
    s32 temp_s0;
    s32 temp_s1_2;
    s16 phi_s2;
    s32 phi_s0;
    s32 phi_t0;
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_v0_2;

    temp_s7 = &spBC;
    temp_s4 = &spC8;
    phi_s2 = 0;
    phi_s0 = 0;
    do {
        temp_f20 = (f32) (0x19 - phi_s0) * 2.4f;
        temp_f22 = Math_SinS(phi_s2) * temp_f20;
        temp_f24 = Math_CosS(phi_s2) * temp_f20;
        spC8 = arg0->unk24 + temp_f22;
        spCC = arg0->unk28;
        spD0 = arg0->unk2C + temp_f24;
        spBC = ((Rand_ZeroOne() - 0.5f) * 10.0f) + (temp_f22 * 0.13333334f);
        spC0 = (Rand_ZeroOne() * 17.0f) + 7.0f;
        spC4 = ((Rand_ZeroOne() - 0.5f) * 10.0f) + (temp_f24 * 0.13333334f);
        temp_s1 = (Rand_Next() & 3) + (phi_s0 >> 2) + 4;
        if ((Rand_Next() & 3) == 0) {
            phi_v0_2 = 0x20;
        } else {
            phi_v0_2 = 0x40;
        }
        phi_v0 = phi_v0_2;
        if ((s32) temp_s1 >= 8) {
            phi_t0 = -0x226;
            phi_v0 = (s32) (s16) (phi_v0_2 | 1);
            phi_v1 = 1;
        } else {
            phi_t0 = -0x190;
            phi_v1 = 0;
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s4, (Vec3f *) temp_s7, (Vec3f *) temp_s4, (s16) phi_t0, (s16) phi_v0, (s16) 0x1E, (s16) 0, (s16) 0, (s16) (s32) temp_s1, (s16) phi_v1, (s16) 0, 0x32, (s16) -1, (s16) 0x190, &D_06009830);
        if ((phi_s0 & 1) == 0) {
            temp_s1_2 = Rand_Next();
            func_800B0E48(arg1, (Vec3f *) temp_s4, &D_80ABD034, &D_80ABCFB4, &D_80ABCFAC, &D_80ABCFB0, (s16) (((u32) temp_s1_2 >> 0x1B) + 0x3C), (s16) ((Rand_Next() >> 0x1A) + 0x32));
        }
        temp_s0 = phi_s0 + 1;
        phi_s2 = (s16) (phi_s2 + 0x4E20);
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x19);
}

void func_80ABC58C(void *arg0, GlobalContext *arg1) {
    Vec3f spD8;
    Vec3f spCC;
    Vec3f spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    Vec3f *temp_s4;
    f32 *temp_fp;
    f32 *temp_s7;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2;
    s32 temp_s0;
    s32 temp_s2;
    s16 phi_s1;
    s32 phi_s0;

    spAC = 0.0f;
    spB8 = 0.3f;
    Matrix_RotateY(arg0->unkBE, 0U);
    temp_fp = &spA8;
    temp_s7 = &sp9C;
    temp_s4 = &spC0;
    phi_s1 = 0;
    phi_s0 = 0;
    do {
        temp_f20 = Math_SinS(phi_s1);
        temp_f22 = Math_CosS(phi_s1);
        sp9C = (f32) (phi_s0 - 0xA) * 9.0f;
        spA0 = (Rand_ZeroOne() * 40.0f) + 15.0f;
        spA4 = temp_f20 * 10.0f;
        spA8 = ((Rand_ZeroOne() - 0.5f) * 7.0f) + (temp_f22 * -12.0f);
        temp_f2 = ((Rand_ZeroOne() - 0.5f) * 7.0f) + (temp_f20 * 16.0f);
        temp_f16 = temp_f2 * -0.09f;
        spB0 = temp_f2;
        spB4 = spA8 * -0.09f;
        spBC = temp_f16;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_s7, temp_s4);
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_fp, &spCC);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &spB4, &spD8);
        spC0.x += arg0->unk24;
        spC0.y += arg0->unk28;
        spC0.z += arg0->unk2C;
        temp_s2 = Rand_Next();
        func_800B0E48(arg1, temp_s4, &spCC, &spD8, &D_80ABCFAC, &D_80ABCFB0, (s16) (((u32) temp_s2 >> 0x1A) + 0x3C), (s16) ((Rand_Next() >> 0x1B) + 0x3C));
        temp_s0 = phi_s0 + 1;
        phi_s1 = (s16) (phi_s1 + 0x618);
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x15);
}

void func_80ABC7FC(void *arg0, GlobalContext *arg1) {
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 *temp_s5;
    f32 *temp_s6;
    f32 *temp_s7;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f2;
    s32 temp_s1;
    s32 temp_s2;
    s16 phi_s0;
    s32 phi_s2;

    temp_s7 = &spB8;
    temp_s6 = &spAC;
    temp_s5 = &spA0;
    spBC = 0.3f;
    spB0 = 0.0f;
    phi_s0 = 0;
    phi_s2 = 0;
    do {
        temp_f20 = Math_SinS(phi_s0);
        temp_f22 = Math_CosS(phi_s0);
        temp_f24 = Rand_ZeroOne() * 60.0f;
        spA0 = (temp_f22 * temp_f24) + arg0->unk24;
        spA4 = (Rand_ZeroOne() * 20.0f) + arg0->unk28;
        spA8 = (temp_f20 * temp_f24) + arg0->unk2C;
        spAC = ((Rand_ZeroOne() - 0.5f) * 7.0f) + (temp_f20 * 15.0f);
        temp_f2 = ((Rand_ZeroOne() - 0.5f) * 7.0f) + (temp_f22 * 15.0f);
        temp_f16 = temp_f2 * -0.095f;
        spB4 = temp_f2;
        spB8 = spAC * -0.095f;
        spC0 = temp_f16;
        temp_s1 = Rand_Next();
        func_800B0E48(arg1, (Vec3f *) temp_s5, (Vec3f *) temp_s6, (Vec3f *) temp_s7, &D_80ABCFAC, &D_80ABCFB0, (s16) (((u32) temp_s1 >> 0x1A) + 0x3C), (s16) ((Rand_Next() >> 0x1B) + 0x3C));
        temp_s2 = phi_s2 + 1;
        phi_s0 = (s16) (phi_s0 + 0xCCC);
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x14);
}

void BgHakuginBombwall_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgHakuginBombwall *this = (BgHakuginBombwall *) thisx;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    void *temp_s1;

    temp_s1 = ((((s32) this->actor.params >> 8) & 1) * 0x30) + &D_80ABCFC0;
    Actor_ProcessInitChain(&this->actor, &D_80ABD040);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    temp_a1 = &this->unk15C;
    sp20 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, temp_s1->unk0);
    Collider_SetCylinder(globalCtx, sp20, &this->actor, &D_80ABCF80);
    this->unk15C.dim.radius = temp_s1->unk14;
    this->unk15C.dim.height = temp_s1->unk16;
    this->unk15C.info.bumper.dmgFlags = temp_s1->unk18;
    Collider_UpdateCylinder(&this->actor, sp20);
    Actor_SetHeight(&this->actor, temp_s1->unk8);
    this->actor.uncullZoneScale = temp_s1->unkC;
    this->actionFunc = func_80ABCCE4;
    this->actor.uncullZoneDownward = temp_s1->unk10;
}

void BgHakuginBombwall_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgHakuginBombwall *this = (BgHakuginBombwall *) thisx;
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk144);
    Collider_DestroyCylinder(globalCtx, &this->unk15C);
}

? func_80ABCB5C(void *arg0, GlobalContext *arg1) {
    Vec3f *sp20;
    Vec3f *temp_a0;
    s32 temp_v0;

    if (((arg0->unk16D & 2) != 0) && (temp_v0 = arg0->unk164, temp_a0 = arg0 + 0x24, (temp_v0 != 0)) && (sp20 = temp_a0, (Math3D_DistanceSquared(temp_a0, temp_v0 + 0x24) < *(&D_80ABCFDC + ((((s32) arg0->unk1C >> 8) & 1) * 0x30))))) {
        Audio_PlaySoundAtPosition(arg1, sp20, 0x3C, 0x2810U);
        return 1;
    }
    return 0;
}

? func_80ABCC00(DynaPolyActor *arg0, GlobalContext *arg1) {
    Vec3f *sp20;
    Vec3f *temp_a0;
    s32 temp_v0;

    if ((arg0->unk16D & 2) != 0) {
        if ((*arg0->unk198 & 8) != 0) {
            temp_v0 = arg0->unk164;
            temp_a0 = arg0 + 0x24;
            if ((temp_v0 != 0) && (sp20 = temp_a0, (Math3D_DistanceSquared(temp_a0, temp_v0 + 0x24) < *(&D_80ABCFDC + ((((s32) arg0->actor.params >> 8) & 1) * 0x30))))) {
                Audio_PlaySoundAtPosition(arg1, sp20, 0x32, 0x2810U);
                return 1;
            }
            goto block_7;
        }
        if (func_800CAF70(arg0) != 0) {
            Audio_PlaySoundAtPosition(arg1, &arg0->actor.world.pos, 0x32, 0x2810U);
            return 1;
        }
        goto block_7;
    }
block_7:
    return 0;
}

void func_80ABCCE4(BgHakuginBombwall *arg0, GlobalContext *arg1) {
    BgHakuginBombwall *temp_a3;
    s8 temp_a0;
    void *temp_v0;

    temp_a3 = arg0;
    temp_v0 = ((((s32) temp_a3->actor.params >> 8) & 1) * 0x30) + &D_80ABCFC0;
    arg0 = temp_a3;
    if (temp_v0->unk20(temp_a3, arg1) != 0) {
        temp_a0 = arg0->actor.cutscene;
        arg0->actor.flags |= 0x10;
        arg0 = arg0;
        ActorCutscene_SetIntentToPlay((s16) temp_a0);
        arg0->actionFunc = func_80ABCD98;
        return;
    }
    arg0->unk15C.base.acFlags &= 0xFFFD;
    CollisionCheck_SetAC(arg1, &arg1->colChkCtx, &arg0->unk15C.base);
}

void func_80ABCD98(BgHakuginBombwall *arg0, GlobalContext *arg1) {
    void *sp20;

    if (ActorCutscene_GetCanPlayNext((s16) arg0->actor.cutscene) != 0) {
        sp20 = ((((s32) arg0->actor.params >> 8) & 1) * 0x30) + &D_80ABCFC0;
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->actor.cutscene, &arg0->actor);
        sp20->unk24(arg0, arg1);
        arg0->actor.draw = NULL;
        arg0->unk1AC = 0x14;
        Actor_SetSwitchFlag(arg1, arg0->actor.params & 0x7F);
        func_800C62BC(arg1, &arg1->colCtx.dyna, arg0->unk144);
        arg0->actionFunc = func_80ABCE60;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
}

void func_80ABCE60(BgHakuginBombwall *arg0, GlobalContext *arg1) {
    s32 temp_v1;
    s8 temp_a0;
    void *temp_v0;

    temp_v1 = arg0->unk1AC - 1;
    temp_v0 = ((((s32) arg0->actor.params >> 8) & 1) * 0x30) + &D_80ABCFC0;
    arg0->unk1AC = temp_v1;
    if (temp_v1 <= 0) {
        temp_a0 = arg0->actor.cutscene;
        arg0 = arg0;
        ActorCutscene_Stop((s16) temp_a0);
        Actor_MarkForDeath(&arg0->actor);
        return;
    }
    if (temp_v0->unk2C == temp_v1) {
        temp_v0->unk28(arg0, arg0);
    }
}

void BgHakuginBombwall_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgHakuginBombwall *this = (BgHakuginBombwall *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgHakuginBombwall_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgHakuginBombwall *this = (BgHakuginBombwall *) thisx;
    func_800BDFC0(globalCtx, *(&D_80ABCFC4 + ((((s32) this->actor.params >> 8) & 1) * 0x30)));
}

