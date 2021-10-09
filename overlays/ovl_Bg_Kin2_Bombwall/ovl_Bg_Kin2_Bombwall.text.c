s32 func_80B6E020(BgKin2Bombwall *arg0, GlobalContext *arg1, BgKin2Bombwall *); /* static */
void func_80B6E090(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B6E4B8(BgKin2Bombwall *arg0);           /* static */
void func_80B6E4CC(BgKin2Bombwall *arg0, GlobalContext *arg1); /* static */
void func_80B6E544(BgKin2Bombwall *arg0);           /* static */
void func_80B6E558(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B6E5F8(Actor *arg0);                    /* static */
void func_80B6E614(Actor *arg0, ? arg1);            /* static */
extern Gfx D_06000128;
extern Gfx D_060002C0;
extern Gfx D_06000360;
extern CollisionHeader D_06000490;
static ColliderCylinderInit D_80B6E6F0 = {
    {0xA, 0, 9, 0, 0, 1},
    {0, {0, 0, 0}, {8, 0, 0}, 0, 1, 0},
    {0x3C, 0x3C, 0, {0, 0, 0}},
};
static Color_RGBA8 D_80B6E71C = {0xD2, 0xD2, 0xD2, 0xFF};
static Color_RGBA8 D_80B6E720 = {0x8C, 0x8C, 0x8C, 0xFF};
static Vec3f D_80B6E724 = {0.0f, 0.33f, 0.0f};
static s8 D_80B6E730 = {0xC4, 0xDE, 0xF8, 0x12};
static ? D_80B6E735;                                /* unable to generate initializer */
static ? D_80B6E738;                                /* unable to generate initializer */
static InitChainEntry D_80B6E748;                   /* unable to generate initializer */

typedef struct BgKin2Bombwall {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ ColliderCylinder unk15C;           /* inferred */
    /* 0x01A8 */ void (*actionFunc)(BgKin2Bombwall *, GlobalContext *);
    /* 0x01AC */ char pad1AC[0x4];                  /* maybe part of actionFunc[2]? */
} BgKin2Bombwall;                                   /* size 0x1B0 */

s32 func_80B6E020(void *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    if (((arg0->unk16D & 2) != 0) && (temp_v0 = arg0->unk164, (temp_v0 != 0)) && (Math3D_DistanceSquared(arg0 + 0x24, temp_v0 + 0x24) < 6400.0f)) {
        return 1;
    }
    return 0;
}

void func_80B6E090(Actor *arg0, GlobalContext *arg1) {
    Vec3f spF0;
    Vec3f spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    s32 spAC;
    Vec3f *temp_s5;
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_s3;
    s8 *temp_s4;
    s32 phi_v0;
    s8 *phi_s4;
    s32 phi_s3;
    s32 phi_s0;
    s32 phi_s1;
    s32 phi_s0_2;

    Matrix_RotateY(arg0->shape.rot.y, 0U);
    temp_s5 = &spF0;
    phi_v0 = 0;
    phi_s3 = 0;
    do {
        temp_a0 = phi_v0 + 1;
        spAC = temp_a0;
        phi_s4 = &D_80B6E730;
loop_2:
        temp_s3 = (phi_s3 + 1) & 7;
        spD8 = (f32) ((Rand_Next() >> 0x1C) + *phi_s4);
        spDC = ((Rand_ZeroOne() - 0.5f) * 15.0f) + ((f32) temp_a0 * 15.0f);
        spE0 = (Rand_ZeroOne() * 20.0f) - 10.0f;
        spCC = (2.0f * (Rand_ZeroOne() - 0.5f)) + (spD8 * 0.018461538f);
        spD0 = (Rand_ZeroOne() * 7.0f) + 4.0f;
        spD4 = spE0 * 0.3f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) &spD8, temp_s5);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &spCC, &spE4);
        spF0.x += arg0->world.pos.x;
        spF0.y += arg0->world.pos.y;
        spF0.z += arg0->world.pos.z;
        phi_s3 = temp_s3;
        phi_s3 = temp_s3;
        if ((Rand_Next() & 3) == 0) {
            phi_s0_2 = 0x20;
        } else {
            phi_s0_2 = 0x40;
        }
        phi_s0 = phi_s0_2;
        if ((temp_s3 < 2) || (phi_s1 = 0, (Rand_Next() > 0))) {
            temp_s2 = Rand_Next();
            func_800B0E48(arg1, temp_s5, &D_801D15B0, &D_80B6E724, &D_80B6E71C, &D_80B6E720, (s16) (((u32) temp_s2 >> 0x1B) + 0x46), (s16) ((Rand_Next() >> 0x1A) + 0x3C));
            phi_s0 = (s32) (s16) (phi_s0_2 | 1);
            phi_s1 = 1;
        }
        EffectSsKakera_Spawn(arg1, temp_s5, &spE4, temp_s5, (s16) -0x226, (s16) phi_s0, (s16) 0x1E, (s16) 0, (s16) 0, (s16) (s32) *(&D_80B6E738 + (temp_s3 * 2)), (s16) phi_s1, (s16) 0, 0x32, (s16) -1, (s16) 0x1F5, &D_06000128);
        temp_s4 = phi_s4 + 1;
        phi_s4 = temp_s4;
        if (temp_s4 != &D_80B6E735) {
            goto loop_2;
        }
        phi_v0 = spAC;
    } while (spAC != 6);
}

void BgKin2Bombwall_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgKin2Bombwall *this = (BgKin2Bombwall *) thisx;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;

    Actor_ProcessInitChain(&this->actor, &D_80B6E748);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    temp_a1 = &this->unk15C;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06000490);
    Collider_SetCylinder(globalCtx, sp24, &this->actor, &D_80B6E6F0);
    Collider_UpdateCylinder(&this->actor, sp24);
    Actor_SetHeight(&this->actor, 60.0f);
    func_80B6E4B8(this);
}

void BgKin2Bombwall_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgKin2Bombwall *this = (BgKin2Bombwall *) thisx;
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk144);
    Collider_DestroyCylinder(globalCtx, &this->unk15C);
}

void func_80B6E4B8(BgKin2Bombwall *arg0) {
    arg0->actionFunc = func_80B6E4CC;
}

void func_80B6E4CC(BgKin2Bombwall *arg0, GlobalContext *arg1) {
    BgKin2Bombwall *temp_a0;
    BgKin2Bombwall *temp_a3;
    s8 temp_a0_2;

    temp_a3 = arg0;
    temp_a0 = temp_a3;
    arg0 = temp_a3;
    if (func_80B6E020(temp_a0, arg1, temp_a3) != 0) {
        temp_a0_2 = arg0->actor.cutscene;
        arg0->unk15C.base.acFlags &= 0xFFFD;
        arg0 = arg0;
        ActorCutscene_SetIntentToPlay((s16) temp_a0_2);
        func_80B6E544(arg0);
        return;
    }
    CollisionCheck_SetAC(arg1, arg1 + 0x18884, arg0 + 0x15C);
}

void func_80B6E544(BgKin2Bombwall *arg0) {
    arg0->actionFunc = func_80B6E558;
}

void func_80B6E558(Actor *arg0, GlobalContext *arg1) {
    if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
        Actor_SetSwitchFlag(arg1, arg0->params & 0x7F);
        Audio_PlaySoundAtPosition(arg1, &arg0->world.pos, 0x3C, 0x2810U);
        func_800C62BC(arg1, &arg1->colCtx.dyna, arg0->unk144);
        arg0->draw = NULL;
        func_80B6E090(arg0, arg1);
        func_80B6E5F8(arg0);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
}

void func_80B6E5F8(Actor *arg0) {
    arg0->unk1AC = 0x28;
    arg0->unk1A8 = func_80B6E614;
}

void func_80B6E614(Actor *arg0, ? arg1) {
    s8 temp_a0;

    arg0->unk1AC = (s8) (arg0->unk1AC - 1);
    if ((s32) arg0->unk1AC <= 0) {
        temp_a0 = arg0->cutscene;
        arg0 = arg0;
        ActorCutscene_Stop((s16) temp_a0);
        Actor_MarkForDeath(arg0);
    }
}

void BgKin2Bombwall_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgKin2Bombwall *this = (BgKin2Bombwall *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgKin2Bombwall_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgKin2Bombwall *this = (BgKin2Bombwall *) thisx;
    func_800BDFC0(globalCtx, &D_06000360);
    func_800BE03C(globalCtx, &D_060002C0);
}

