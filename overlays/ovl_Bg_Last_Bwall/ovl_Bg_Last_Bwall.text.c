void func_80C18240(ColliderTrisInit *arg0, Vec3f *arg1, ActorShape *arg2, ColliderTris *arg3, void *arg4); /* static */
void func_80C184EC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C187E4(BgLastBwall *arg0);              /* static */
void func_80C187F8(BgLastBwall *arg0, GlobalContext *arg1); /* static */
void func_80C1886C(BgLastBwall *arg0, GlobalContext *arg1); /* static */
void func_80C18884(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C188C4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C18928(s32 arg0, ? arg1);               /* static */
extern Gfx D_06000098;
static ColliderTrisElementInit D_80C189C0 = {
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

typedef struct BgLastBwall {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ void (*actionFunc)(BgLastBwall *, GlobalContext *);
    /* 0x0160 */ ColliderTris unk160;               /* inferred */
    /* 0x0180 */ ColliderTrisElement unk180;        /* inferred */
    /* 0x01DC */ char pad1DC[0x5C];                 /* maybe part of unk180[2]? */
    /* 0x0238 */ u8 unk238;                         /* inferred */
    /* 0x0239 */ char pad239[0x1];                  /* maybe part of unk238[2]? */
    /* 0x023A */ s16 unk23A;                        /* inferred */
} BgLastBwall;                                      /* size 0x23C */

void func_80C18240(ColliderTrisInit *arg0, Vec3f *arg1, ActorShape *arg2, ColliderTris *arg3, void *arg4) {
    ? sp90;
    Vec3f sp84;
    Vec3f sp78;
    Vec3f sp6C;
    Vec3f sp60;
    Vec3f sp54;
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
            phi_s0 = &sp6C;
loop_3:
            Math_Vec3s_ToVec3f(&sp60, (*(arg4->unk4 + phi_s1) * 6) + arg4->unk0);
            SysMatrix_MultiplyVector3fByState(&sp60, &sp54);
            Math_Vec3f_Sum(&sp54, arg1, phi_s0);
            temp_s0 = phi_s0 + 0xC;
            phi_s1 += 2;
            phi_s0 = temp_s0;
            if (temp_s0 != &sp90) {
                goto loop_3;
            }
            arg4->unk4 = (s32) (arg4->unk4 + 6);
            Collider_SetTrisVertices(arg3, phi_fp, &sp6C, &sp78, &sp84);
            temp_fp = phi_fp + 1;
            phi_fp = temp_fp;
        } while (temp_fp < arg0->count);
    }
}

void BgLastBwall_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgLastBwall *this = (BgLastBwall *) thisx;
    ColliderTris *sp2C;
    ColliderTris *temp_a1;

    Actor_ProcessInitChain(&this->actor, &D_80C18AC8);
    this->unk238 = ((s32) this->actor.params >> 0xC) & 0xF;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, *(&D_80C18A50 + (this->unk238 * 0xC)));
    temp_a1 = &this->unk160;
    sp2C = temp_a1;
    Collider_InitTris(globalCtx, temp_a1);
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    if (Collider_SetTris(globalCtx, sp2C, &this->actor, &D_80C18A38, &this->unk180) == 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    func_80C18240(&D_80C18A38, &this->actor.world.pos, &this->actor.shape, sp2C, *(&D_80C18AC0 + (this->unk238 * 4)));
    func_8013E3B8(&this->actor, (s16 []) &this->unk23A, 1);
    func_80C187E4(this);
}

void BgLastBwall_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgLastBwall *this = (BgLastBwall *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void func_80C184EC(Actor *arg0, GlobalContext *arg1) {
    f32 spD8;
    f32 spD4;
    f32 spD0;
    Vec3f spC4;
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
        temp_v0 = arg0->unk238;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {

            } else {
                temp_f18 = Rand_Centered() * 160.0f;
                spD4 = 400.0f;
                spD0 = temp_f18;
                spD8 = Rand_Centered() * 160.0f;
                SysMatrix_MultiplyVector3fByState((Vec3f *) temp_s4, &spC4);
                Math_Vec3f_Sum(arg0 + 0x24, &spC4, &spC4);
            }
        } else {
            spD0 = 280.0f;
            spD4 = (Rand_Centered() * 160.0f) + 320.0f;
            spD8 = Rand_Centered() * 160.0f;
            SysMatrix_MultiplyVector3fByState((Vec3f *) temp_s4, &spC4);
            Math_Vec3f_Sum(arg0 + 0x24, &spC4, &spC4);
        }
        temp_f20 = Rand_ZeroOne();
        func_800BBFB0(arg1, &spC4, 50.0f, 2, (s16) (s32) ((temp_f20 * 120.0f) + 20.0f), (s16) (s32) ((Rand_ZeroOne() * 240.0f) + 20.0f), (u8) 0);
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
        EffectSsKakera_Spawn(arg1, &spC4, (Vec3f *) temp_s7, &spC4, (s16) -0x104, (s16) phi_v0, (s16) 0x14, (s16) 0, (s16) 0, (s16) 0xA, (s16) 0, (s16) 0, 0x32, (s16) -1, (s16) 0x234, &D_06000098);
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

    temp_v0 = arg0->unk160.base.acFlags;
    if ((temp_v0 & 2) != 0) {
        temp_a1 = arg0->actor.params;
        arg0->unk160.base.acFlags = temp_v0 & 0xFFFD;
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
    if (func_8013E2D4(arg0, arg0->unk23A, -1, 0) != 0) {
        func_80C188C4(arg0, arg1);
    }
}

void func_80C188C4(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a3;

    temp_a3 = arg1;
    arg1 = temp_a3;
    func_800C62BC(temp_a3, temp_a3 + 0x880, arg0->unk144);
    arg0->draw = NULL;
    func_80C184EC(arg0, arg1);
    Audio_PlayActorSound2(arg0, 0x2810U);
    arg0->unk15C = func_80C18928;
}

void func_80C18928(s32 arg0, ? arg1) {

}

void BgLastBwall_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgLastBwall *this = (BgLastBwall *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgLastBwall_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgLastBwall *this = (BgLastBwall *) thisx;
    func_800BDFC0(globalCtx, *(&D_80C18A48 + (this->unk238 * 0xC)));
}

