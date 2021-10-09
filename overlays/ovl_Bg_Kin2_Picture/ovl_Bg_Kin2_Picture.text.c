s32 func_80B6EFA0(GlobalContext *arg0, s32 arg1);   /* static */
void func_80B6EFEC(BgKin2Picture *arg0, GlobalContext *arg1); /* static */
void func_80B6F098(BgKin2Picture *arg0, GlobalContext *arg1); /* static */
void func_80B6F4C0(BgKin2Picture *arg0);            /* static */
void func_80B6F5A4(BgKin2Picture *arg0);            /* static */
void func_80B6F61C(BgKin2Picture *arg0);            /* static */
void func_80B6F708(BgKin2Picture *arg0);            /* static */
void func_80B6F8F8(BgKin2Picture *arg0);            /* static */
extern Gfx D_06000658;
extern CollisionHeader D_06000798;
static ColliderTrisElementInit D_80B6F990 = {
    {
        {4, {0, 0, 0}, {0x138B0, 0, 0}, 0, 1, 0},
        {{{-20.0f, 53.3f, 9.0f}, {-20.0f, 3.0f, 9.0f}, {20.0f, 3.0f, 9.0f}}},
    },
    {
        {4, {0, 0, 0}, {0x138B0, 0, 0}, 0, 1, 0},
        {{{-20.0f, 53.3f, 9.0f}, {20.0f, 3.0f, 9.0f}, {20.0f, 53.3f, 9.0f}}},
    },
};
static ColliderTrisInit D_80B6FA08 = {{0xA, 0, 9, 0, 0, 2}, 2, &D_80B6F990};
static Vec3f D_80B6FA18 = {0.0f, 23.0f, 0.0f};
static InitChainEntry D_80B6FA24;                   /* unable to generate initializer */

typedef struct BgKin2Picture {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ ColliderTris unk15C;               /* inferred */
    /* 0x017C */ ColliderTrisElement unk17C;        /* inferred */
    /* 0x01D8 */ char pad1D8[0x5C];                 /* maybe part of unk17C[2]? */
    /* 0x0234 */ void (*actionFunc)(BgKin2Picture *, GlobalContext *);
    /* 0x0238 */ s16 unk238;                        /* inferred */
    /* 0x023A */ s8 unk23A;                         /* inferred */
    /* 0x023B */ s8 unk23B;                         /* inferred */
    /* 0x023C */ s16 unk23C;                        /* inferred */
    /* 0x023E */ s16 unk23E;                        /* inferred */
    /* 0x0240 */ s8 unk240;                         /* inferred */
    /* 0x0241 */ s8 unk241;                         /* inferred */
    /* 0x0242 */ s8 unk242;                         /* inferred */
    /* 0x0243 */ char pad243[0x1];                  /* maybe part of unk242[2]? */
} BgKin2Picture;                                    /* size 0x244 */

s32 func_80B6EFA0(GlobalContext *arg0, s32 arg1) {
    s32 temp_v0;
    s32 phi_a2;
    s32 phi_v0;

    phi_a2 = -1;
    if ((arg1 & 3) != 0) {
        phi_a2 = ((s32) (arg1 & 0x3FC) >> 2) & 0xFF;
    }
    temp_v0 = (phi_a2 < 0) ^ 1;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        phi_v0 = Actor_GetChestFlag(arg0, (u32) phi_a2) != 0;
    }
    return phi_v0;
}

void func_80B6EFEC(BgKin2Picture *arg0, GlobalContext *arg1) {
    s32 sp38;
    s16 temp_v0;
    s32 temp_a1;

    temp_v0 = arg0->actor.params;
    if ((((s32) temp_v0 >> 5) & 1) == 0) {
        temp_a1 = ((temp_v0 & 0x1F) * 4) | 0xFF03;
        sp38 = temp_a1;
        if ((func_80B6EFA0(arg1, temp_a1) == 0) && (Actor_Spawn(&arg1->actorCtx, arg1, 0x50, arg0->actor.home.pos.x, arg0->actor.home.pos.y + 23.0f, arg0->actor.home.pos.z, (s16) 0, (s16) (s32) arg0->actor.home.rot.y, (s16) 0, (s16) sp38) != 0)) {
            play_sound(0x4807U);
        }
    }
}

void func_80B6F098(BgKin2Picture *arg0, GlobalContext *arg1) {
    Vec3f spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 *temp_s5;
    f32 *temp_s6;
    f32 *temp_s7;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f20;
    f32 temp_f2;
    s16 temp_s1;
    s32 temp_s0;
    s32 temp_s2;
    s32 phi_s3;
    s32 phi_s2;

    SysMatrix_SetStateRotationAndTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y + (arg0->actor.shape.yOffset * arg0->actor.scale.y), arg0->actor.world.pos.z, arg0 + 0xBC);
    SysMatrix_MultiplyVector3fByState(&D_80B6FA18, &spB8);
    spB0 = spB8.y - 7.0f;
    temp_s7 = &sp94;
    temp_s6 = &spA0;
    temp_s5 = &spAC;
    sp98 = 0.2f;
    spA4 = 0.0f;
    phi_s3 = 0;
    phi_s2 = 0;
    do {
        temp_s1 = (s32) (Rand_ZeroOne() * 3276.0f) + phi_s3;
        temp_f20 = (Rand_ZeroOne() * 14.0f) + 4.0f;
        spAC = Math_SinS(temp_s1) * temp_f20;
        temp_f12 = Math_CosS(temp_s1) * temp_f20;
        spB4 = temp_f12;
        spA0 = (Rand_ZeroOne() - 0.5f) + (spAC * 0.16666667f);
        temp_f12_2 = temp_f12;
        temp_f2 = (Rand_ZeroOne() - 0.5f) + (temp_f12_2 * 0.16666667f);
        spAC += spB8.x;
        spA8 = temp_f2;
        spB4 = temp_f12_2 + spB8.z;
        sp94 = spA0 * -0.09f;
        sp9C = temp_f2 * -0.09f;
        temp_s0 = (s32) (Rand_ZeroOne() * 10.0f) + 0xA;
        func_800B1210(arg1, (Vec3f *) temp_s5, (Vec3f *) temp_s6, (Vec3f *) temp_s7, (s16) temp_s0, (s16) ((s32) (Rand_ZeroOne() * 10.0f) + 0xF));
        temp_s2 = phi_s2 + 1;
        phi_s3 += 0xCCC;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x14);
}

void BgKin2Picture_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgKin2Picture *this = (BgKin2Picture *) thisx;
    ? sp8C;
    Vec3f sp80;
    Vec3f sp74;
    Vec3f sp68;
    ColliderTris *sp4C;
    ColliderTris *temp_a1;
    Vec3f *temp_s0;
    s16 temp_v0;
    s32 temp_s5;
    s32 phi_s2;
    s32 phi_s1;
    Vec3f *phi_s0;
    s32 phi_s5;

    Actor_ProcessInitChain(&this->actor, &D_80B6FA24);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06000798);
    func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
    temp_a1 = &this->unk15C;
    sp4C = temp_a1;
    Collider_InitTris(globalCtx, temp_a1);
    Collider_SetTris(globalCtx, temp_a1, &this->actor, &D_80B6FA08, &this->unk17C);
    SysMatrix_SetStateRotationAndTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, &this->actor.shape.rot);
    phi_s2 = 0;
    phi_s5 = 0;
    do {
        phi_s1 = 0;
        phi_s0 = &sp68;
loop_2:
        SysMatrix_MultiplyVector3fByState(phi_s2 + D_80B6FA08.elements + phi_s1 + 0x18, phi_s0);
        temp_s0 = phi_s0 + 0xC;
        phi_s1 += 0xC;
        phi_s0 = temp_s0;
        if (temp_s0 != &sp8C) {
            goto loop_2;
        }
        Collider_SetTrisVertices(sp4C, phi_s5, &sp68, &sp74, &sp80);
        temp_s5 = phi_s5 + 1;
        phi_s2 += 0x3C;
        phi_s5 = temp_s5;
    } while (temp_s5 != 2);
    Actor_SetHeight(&this->actor, 23.0f);
    temp_v0 = this->actor.params;
    if (((((s32) temp_v0 >> 5) & 1) != 0) || (func_80B6EFA0(globalCtx, ((temp_v0 & 0x1F) * 4) | 0xFF03) != 0)) {
        this->unk242 = -1;
    }
    func_80B6F4C0(this);
}

void BgKin2Picture_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgKin2Picture *this = (BgKin2Picture *) thisx;
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk144);
    Collider_DestroyTris(globalCtx, &this->unk15C);
}

void func_80B6F4C0(BgKin2Picture *arg0) {
    arg0->actionFunc = func_80B6F4D4;
}

void func_80B6F4D4(BgKin2Picture *this, GlobalContext *globalCtx) {
    s8 temp_v0_2;
    u8 temp_v0;

    temp_v0 = this->unk15C.base.acFlags;
    if ((temp_v0 & 2) != 0) {
        this->unk15C.base.acFlags = temp_v0 & 0xFFFD;
        ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        func_80B6F5A4(this);
        return;
    }
    temp_v0_2 = this->unk242;
    if ((s32) temp_v0_2 >= 0) {
        if (temp_v0_2 == 0) {
            Audio_PlayActorSound2(&this->actor, 0x39DAU);
            if (Rand_ZeroOne() < 0.1f) {
                this->unk242 = Rand_S16Offset(0x28, 0x50);
            } else {
                this->unk242 = 8;
            }
        } else {
            this->unk242 = temp_v0_2 - 1;
        }
    }
    CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->unk15C.base);
}

void func_80B6F5A4(BgKin2Picture *arg0) {
    arg0->actionFunc = func_80B6F5B8;
}

void func_80B6F5B8(BgKin2Picture *this, GlobalContext *globalCtx) {
    BgKin2Picture *temp_a1;
    s8 temp_a0;
    s8 temp_a0_2;

    temp_a0 = this->actor.cutscene;
    this = this;
    temp_a1 = this;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        temp_a0_2 = temp_a1->actor.cutscene;
        this = temp_a1;
        ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a0_2, &temp_a1->actor);
        this->unk240 = 1;
        func_80B6F61C(this);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a1->actor.cutscene);
}

void func_80B6F61C(BgKin2Picture *arg0) {
    arg0->unk23A = 0xD;
    arg0->unk23C = 0;
    arg0->unk23E = 0;
    arg0->actionFunc = func_80B6F640;
}

void func_80B6F640(BgKin2Picture *this, GlobalContext *globalCtx) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    Vec3f sp24;
    f32 temp_f6;

    this->unk23A += -1;
    if ((s32) this->unk23A <= 0) {
        Math_Vec3f_Copy(&this->actor.world.pos, &this->actor.home.pos);
        func_80B6F708(this);
        return;
    }
    this->unk23C += 0x7BAC;
    this->unk23E += 0x4E20;
    sp30 = Math_CosS(this->unk23C);
    temp_f6 = Math_CosS(this->unk23E) * 0.2f;
    sp38 = 0.0f;
    sp34 = temp_f6;
    Matrix_RotateY(this->actor.shape.rot.y, 0U);
    SysMatrix_MultiplyVector3fByState((Vec3f *) &sp30, &sp24);
    Math_Vec3f_Sum(&this->actor.home.pos, &sp24, &this->actor.world.pos);
}

void func_80B6F708(BgKin2Picture *arg0) {
    arg0->unk23B = 0;
    arg0->unk238 = 0;
    arg0->unk23A = 4;
    arg0->actionFunc = func_80B6F72C;
}

void func_80B6F72C(BgKin2Picture *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    s8 temp_v0;
    s8 temp_v1;

    temp_v0 = this->unk23A;
    if ((s32) temp_v0 > 0) {
        this->unk23A = temp_v0 - 1;
        if (this->unk23A == 0) {
            func_80B6EFEC(this, globalCtx);
        }
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 4U);
    if ((this->actor.bgCheckFlags & 1) != 0) {
        Math_StepToS(&this->unk238, 0x7D0, 0x78);
        temp_v1 = this->unk23B;
        if ((s32) temp_v1 < 3) {
            this->unk23B = temp_v1 + 1;
            temp_f0 = this->actor.velocity.y;
            if (temp_f0 <= 0.01f) {
                this->actor.velocity.y = temp_f0 * -0.7f;
                if (this->actor.velocity.y > 6.0f) {
                    this->actor.velocity.y = 6.0f;
                }
                if ((s32) this->unk23B < 3) {
                    Audio_PlayActorSound2(&this->actor, 0x298FU);
                }
            }
        }
    }
    Actor_SetHeight(&this->actor, 23.0f);
    if ((this->unk241 == 0) && ((s32) this->actor.shape.rot.x >= 0x3301)) {
        func_80B6F098(this, globalCtx);
        this->unk241 = 1;
    }
    if (Math_ScaledStepToS(&this->actor.shape.rot.x, 0x4000, this->unk238) != 0) {
        this->actor.shape.yOffset = 40.0f;
        if (this->unk240 != 0) {
            ActorCutscene_Stop((s16) this->actor.cutscene);
        }
        func_800C6314(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
        Audio_PlayActorSound2(&this->actor, 0x293AU);
        func_80B6F8F8(this);
        return;
    }
    this->actor.shape.yOffset = Math_SinS(this->actor.shape.rot.x) * 40.0f;
}

void func_80B6F8F8(BgKin2Picture *arg0) {
    arg0->actionFunc = func_80B6F90C;
}

void func_80B6F90C(BgKin2Picture *this, GlobalContext *globalCtx) {

}

void BgKin2Picture_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgKin2Picture *this = (BgKin2Picture *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgKin2Picture_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgKin2Picture *this = (BgKin2Picture *) thisx;
    func_800BDFC0(globalCtx, &D_06000658);
}

