void func_8091A8A0(EnInsect *arg0);                 /* static */
f32 func_8091A8C4(f32 *arg0, PosRot *arg1);         /* static */
s32 func_8091A8F4(EnInsect *arg0, GlobalContext *arg1); /* static */
void func_8091A9E4(Actor *arg0);                    /* static */
void func_8091AC78(EnInsect *arg0);                 /* static */
void func_8091AE10(EnInsect *arg0);                 /* static */
void func_8091B030(EnInsect *arg0);                 /* static */
void func_8091B274(Actor *arg0);                    /* static */
void func_8091B3D0(EnInsect *arg0);                 /* static */
void func_8091B618(EnInsect *arg0);                 /* static */
void func_8091B928(EnInsect *arg0);                 /* static */
extern SkeletonHeader D_040527A0;
static s16 D_8091BD60 = 0;
static ColliderJntSphElementInit D_8091BD84 = {{0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1}, {0, {{0, 0, 0}, 5}, 0x64}};
static ColliderJntSphInit D_8091BDA8 = {{0xA, 0, 0, 0x19, 0x10, 0}, 1, &D_8091BD84};
static ? D_8091BDB8;                                /* unable to generate initializer */
static InitChainEntry D_8091BDBC;                   /* unable to generate initializer */
static Vec3f D_8091BDCC = {0.0f, 0.0f, 0.0f};

typedef struct EnInsect {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ char pad188[0x1C];
    /* 0x01A4 */ SkelAnime unk1A4;                  /* inferred */
    /* 0x01E8 */ Vec3s unk1E8;                      /* inferred */
    /* 0x01EE */ char pad1EE[0x8A];                 /* maybe part of unk1E8[24]? */
    /* 0x0278 */ Vec3s unk278;                      /* inferred */
    /* 0x027E */ char pad27E[0x8A];                 /* maybe part of unk278[24]? */
    /* 0x0308 */ void (*actionFunc)(EnInsect *, GlobalContext *);
    /* 0x030C */ u16 unk30C;                        /* inferred */
    /* 0x030E */ s16 unk30E;                        /* inferred */
    /* 0x0310 */ s16 unk310;                        /* inferred */
    /* 0x0312 */ s16 unk312;                        /* inferred */
    /* 0x0314 */ s16 unk314;                        /* inferred */
    /* 0x0316 */ char pad316[0x2];                  /* maybe part of unk314[2]? */
} EnInsect;                                         /* size 0x318 */

void func_8091A8A0(EnInsect *arg0) {
    arg0->unk30C = *(&D_8091BDB8 + ((arg0->actor.params & 1) * 2));
}

f32 func_8091A8C4(f32 *arg0, PosRot *arg1) {
    f32 temp_f12;
    f32 temp_f2;

    temp_f2 = arg0->unk0 - arg1->pos.x;
    temp_f12 = arg0->unk8 - arg1->pos.z;
    return (temp_f2 * temp_f2) + (temp_f12 * temp_f12);
}

s32 func_8091A8F4(EnInsect *arg0, GlobalContext *arg1) {
    void *sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    s16 temp_a0;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    if ((arg0->actor.xzDistToPlayer < 32.0f) && (temp_a0 = arg0->actor.yawTowardsPlayer, arg0 = arg0, sp28 = temp_v0, sp1C = (Math_SinS((s16) (temp_a0 + 0x8000)) * 16.0f) + temp_v0->world.pos.x, sp20 = temp_v0->world.pos.y, sp24 = (Math_CosS((s16) (arg0->actor.yawTowardsPlayer + 0x8000)) * 16.0f) + temp_v0->world.pos.z, (func_8091A8C4(&sp1C, arg0 + 0x24) <= 400.0f))) {
        return 1;
    }
    return 0;
}

void func_8091A9E4(Actor *arg0) {
    f32 temp_f0;
    s16 temp_v0;
    f32 phi_f2;

    temp_v0 = arg0->unk316;
    if ((s32) temp_v0 > 0) {
        arg0->unk316 = (s16) (temp_v0 - 1);
        return;
    }
    Audio_PlayActorSound2(arg0, 0x39F0U);
    temp_f0 = arg0->unk1C0;
    if (temp_f0 < 0.1f) {
        phi_f2 = 0.1f;
    } else {
        phi_f2 = temp_f0;
    }
    arg0->unk316 = (s16) (s32) (3.0f / phi_f2);
    if ((s32) arg0->unk316 < 2) {
        arg0->unk316 = 2;
    }
}

void EnInsect_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnInsect *this = (EnInsect *) thisx;
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    SkelAnime *temp_a1_2;
    f32 temp_f0;
    f32 temp_v1_2;
    s16 temp_v1;

    this->actor.world.rot.y = Rand_Next();
    temp_v1 = this->actor.world.rot.y;
    this->actor.home.rot.y = temp_v1;
    this->actor.shape.rot.y = temp_v1;
    Actor_ProcessInitChain(&this->actor, &D_8091BDBC);
    func_8091A8A0(this);
    temp_a1 = &this->unk1A4;
    sp30 = temp_a1;
    SkelAnime_Init(globalCtx, temp_a1, &D_040527A0, (AnimationHeader *) &D_0405140C, &this->unk1E8, &this->unk278, 0x18);
    SkelAnime_ChangeAnim(sp30, (AnimationHeader *) &D_0405140C, 1.0f, 0.0f, 0.0f, (u8) 1, 0.0f);
    temp_a1_2 = &this->unk144;
    sp30 = temp_a1_2;
    Collider_InitJntSph(globalCtx, (ColliderJntSph *) temp_a1_2);
    Collider_SetJntSph(globalCtx, (ColliderJntSph *) temp_a1_2, &this->actor, &D_8091BDA8, (ColliderJntSphElement *) &this->unk144.limbDrawTbl);
    temp_v1_2 = this->unk144.animPlaybackSpeed;
    temp_v1_2->unk36 = (s16) (s32) ((f32) temp_v1_2->unk2E * temp_v1_2->unk38);
    this->actor.colChkInfo.mass = 0x1E;
    if ((this->unk30C & 1) != 0) {
        this->actor.gravity = -0.2f;
        this->actor.minVelocityY = -2.0f;
    }
    if ((this->unk30C & 4) != 0) {
        this->unk314 = Rand_S16Offset(0xC8, 0x28);
        this->actor.flags |= 0x10;
    }
    temp_f0 = Rand_ZeroOne();
    if (temp_f0 < 0.3f) {
        func_8091AC78(this);
        return;
    }
    if (temp_f0 < 0.4f) {
        func_8091AE10(this);
        return;
    }
    func_8091B030(this);
}

void EnInsect_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnInsect *this = (EnInsect *) thisx;
    Collider_DestroyJntSph(globalCtx, (ColliderJntSph *) &this->unk144);
}

void func_8091AC78(EnInsect *arg0) {
    arg0 = arg0;
    arg0->unk312 = Rand_S16Offset(5, 0x23);
    arg0->actionFunc = func_8091ACC4;
    arg0->unk30C |= 0x100;
}

void func_8091ACC4(EnInsect *this, GlobalContext *globalCtx) {
    f32 temp_f2;
    u16 temp_v0;
    f32 phi_f0;

    Math_SmoothStepToF(&this->actor.speedXZ, 0.0f, 0.1f, 0.5f, 0.0f);
    temp_f2 = (Rand_ZeroOne() * 0.8f) + (this->actor.speedXZ * 1.2f);
    if (temp_f2 < 0.0f) {
        this->unk1A4.animPlaybackSpeed = 0.0f;
    } else {
        if (temp_f2 > 1.9f) {
            phi_f0 = 1.9f;
        } else {
            phi_f0 = temp_f2;
        }
        this->unk1A4.animPlaybackSpeed = phi_f0;
    }
    SkelAnime_FrameUpdateMatrix(&this->unk1A4);
    this->actor.shape.rot.y = this->actor.world.rot.y;
    if ((s32) this->unk312 <= 0) {
        func_8091AE10(this);
    }
    temp_v0 = this->unk30C;
    if (((temp_v0 & 4) != 0) && ((s32) this->unk314 <= 0)) {
        func_8091B3D0(this);
        return;
    }
    if (((temp_v0 & 1) != 0) && ((this->actor.bgCheckFlags & 0x40) != 0)) {
        func_8091B618(this);
        return;
    }
    if (this->actor.xzDistToPlayer < 40.0f) {
        func_8091B030(this);
    }
}

void func_8091AE10(EnInsect *arg0) {
    arg0 = arg0;
    arg0->unk312 = Rand_S16Offset(0xA, 0x2D);
    arg0->actionFunc = func_8091AE5C;
    arg0->unk30C |= 0x100;
}

void func_8091AE5C(EnInsect *this, GlobalContext *globalCtx) {
    PosRot *sp2C;
    PosRot *sp28;
    Actor *temp_v0;
    PosRot *temp_a0;
    PosRot *temp_a1;
    f32 temp_f0;
    u16 temp_v0_2;
    f32 phi_f2;

    Math_SmoothStepToF(&this->actor.speedXZ, 1.5f, 0.1f, 0.5f, 0.0f);
    temp_a0 = &this->actor.world;
    temp_a1 = &this->actor.home;
    sp28 = temp_a1;
    sp2C = temp_a0;
    if ((func_8091A8C4(&temp_a0->pos.x, temp_a1) > 1600.0f) || ((s32) this->unk312 < 4)) {
        Math_ScaledStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw(&temp_a0->pos, &temp_a1->pos), 0x7D0);
    } else {
        temp_v0 = this->actor.child;
        if ((temp_v0 != 0) && (this != temp_v0)) {
            Math_ScaledStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw(&temp_a0->pos, &temp_v0->world.pos), 0x7D0);
        }
    }
    this->actor.shape.rot.y = this->actor.world.rot.y;
    temp_f0 = this->actor.speedXZ * 1.4f;
    phi_f2 = 0.7f;
    if (temp_f0 < 0.7f) {

    } else if (temp_f0 > 1.9f) {
        phi_f2 = 1.9f;
    } else {
        phi_f2 = temp_f0;
    }
    this->unk1A4.animPlaybackSpeed = phi_f2;
    SkelAnime_FrameUpdateMatrix(&this->unk1A4);
    if ((s32) this->unk312 <= 0) {
        func_8091AC78(this);
    }
    temp_v0_2 = this->unk30C;
    if (((temp_v0_2 & 4) != 0) && ((s32) this->unk314 <= 0)) {
        func_8091B3D0(this);
        return;
    }
    if (((temp_v0_2 & 1) != 0) && ((this->actor.bgCheckFlags & 0x40) != 0)) {
        func_8091B618(this);
        return;
    }
    if (this->actor.xzDistToPlayer < 40.0f) {
        func_8091B030(this);
    }
}

void func_8091B030(EnInsect *arg0) {
    arg0 = arg0;
    arg0->unk312 = Rand_S16Offset(0xA, 0x28);
    arg0->actionFunc = func_8091B07C;
    arg0->unk30C |= 0x100;
}

void func_8091B07C(EnInsect *this, GlobalContext *globalCtx) {
    s32 sp38;
    PosRot *sp2C;
    PosRot *sp28;
    PosRot *temp_a0;
    PosRot *temp_a1;
    f32 temp_f0;
    s16 temp_a1_2;
    s16 temp_v0;
    s32 phi_t6;
    s16 phi_a1;
    f32 phi_f2;
    s32 phi_a1_2;

    phi_t6 = 0;
    if (this->actor.xzDistToPlayer < 40.0f) {
        phi_t6 = 1;
    }
    sp38 = phi_t6;
    Math_SmoothStepToF(&this->actor.speedXZ, 1.8f, 0.1f, 0.5f, 0.0f);
    temp_a0 = &this->actor.world;
    temp_a1 = &this->actor.home;
    sp28 = temp_a1;
    sp2C = temp_a0;
    if ((func_8091A8C4(&temp_a0->pos.x, temp_a1) > 25600.0f) || ((s32) this->unk312 < 4)) {
        Math_ScaledStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw(&temp_a0->pos, &temp_a1->pos), 0x7D0);
    } else if (sp38 != 0) {
        temp_v0 = globalCtx->unk9E;
        temp_a1_2 = this->actor.yawTowardsPlayer + 0x8000;
        phi_a1 = temp_a1_2;
        if ((temp_v0 & 0x10) != 0) {
            if ((temp_v0 & 0x20) != 0) {
                phi_a1_2 = (temp_a1_2 + 0x2000) << 0x10;
                goto block_11;
            }
        } else if ((temp_v0 & 0x20) != 0) {
            phi_a1_2 = (temp_a1_2 - 0x2000) << 0x10;
block_11:
            phi_a1 = (s16) (phi_a1_2 >> 0x10);
        }
        Math_ScaledStepToS(&this->actor.world.rot.y, phi_a1, 0x7D0);
    }
    this->actor.shape.rot.y = this->actor.world.rot.y;
    temp_f0 = this->actor.speedXZ * 1.6f;
    phi_f2 = 0.8f;
    if (temp_f0 < 0.8f) {

    } else if (temp_f0 > 1.9f) {
        phi_f2 = 1.9f;
    } else {
        phi_f2 = temp_f0;
    }
    this->unk1A4.animPlaybackSpeed = phi_f2;
    SkelAnime_FrameUpdateMatrix(&this->unk1A4);
    if (((s32) this->unk312 <= 0) || (sp38 == 0)) {
        func_8091AC78(this);
        return;
    }
    if (((this->unk30C & 1) != 0) && ((this->actor.bgCheckFlags & 0x40) != 0)) {
        func_8091B618(this);
    }
}

void func_8091B274(Actor *arg0) {
    arg0->unk312 = 0xC8;
    Actor_SetScale(arg0, 0.001f);
    arg0->draw = NULL;
    arg0->speedXZ = 0.0f;
    arg0->unk308 = func_8091B2D8;
    arg0->unk30C = (u16) (arg0->unk30C & 0xFEFF);
    arg0->unk1C0 = 0.3f;
}

void func_8091B2D8(EnInsect *this, GlobalContext *globalCtx) {
    EnInsect *temp_a0;
    EnInsect *temp_a0_2;
    f32 temp_f0;
    s16 temp_v0;
    f32 phi_f2;

    temp_v0 = this->unk312;
    if ((temp_v0 == 0x14) && ((this->unk30C & 4) == 0)) {
        this->actor.draw = EnInsect_Draw;
        return;
    }
    if (temp_v0 == 0) {
        if ((this->unk30C & 4) != 0) {
            Actor_MarkForDeath(&this->actor);
            return;
        }
        temp_a0 = this;
        this = this;
        Actor_SetScale(&temp_a0->actor, 0.01f);
        func_8091AC78(this);
        return;
    }
    temp_a0_2 = this;
    if ((s32) temp_v0 < 0x14) {
        temp_f0 = this->actor.scale.x + 0.001f;
        if (temp_f0 > 0.01f) {
            phi_f2 = 0.01f;
        } else {
            phi_f2 = temp_f0;
        }
        this = this;
        Actor_SetScale(&temp_a0_2->actor, phi_f2);
        SkelAnime_FrameUpdateMatrix(&this->unk1A4);
    }
}

void func_8091B3D0(Actor *arg0) {
    Actor *temp_a0;
    u16 temp_t0;
    u16 temp_t1;

    arg0->unk312 = 0x3C;
    temp_a0 = arg0;
    arg0->unk1C0 = 1.9f;
    arg0 = arg0;
    Audio_PlayActorSound2(temp_a0, 0x39E9U);
    Math_Vec3f_Copy(&arg0->home.pos, &arg0->world.pos);
    arg0->unk308 = func_8091B440;
    temp_t0 = arg0->unk30C & 0xFEFF;
    temp_t1 = temp_t0 | 8;
    arg0->unk30C = temp_t0;
    arg0->unk30C = temp_t1;
}

void func_8091B440(EnInsect *this, GlobalContext *globalCtx) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp2C;
    f32 temp_f0;
    f32 phi_f2;

    Math_SmoothStepToF(&this->actor.speedXZ, 0.0f, 0.1f, 0.5f, 0.0f);
    Math_StepToS(&this->actor.shape.rot.x, 0x2AAA, 0x160);
    temp_f0 = this->actor.scale.x - 0.0002f;
    if (temp_f0 < 0.001f) {
        phi_f2 = 0.001f;
    } else {
        phi_f2 = temp_f0;
    }
    Actor_SetScale(&this->actor, phi_f2);
    this->actor.shape.yOffset -= 0.8f;
    this->actor.world.pos.x = (Rand_ZeroOne() + this->actor.home.pos.x) - 0.5f;
    this->actor.world.pos.z = (Rand_ZeroOne() + this->actor.home.pos.z) - 0.5f;
    SkelAnime_FrameUpdateMatrix(&this->unk1A4);
    if (((s32) this->unk312 >= 0x15) && (Rand_ZeroOne() < 0.1f)) {
        sp34 = Math_SinS(this->actor.shape.rot.y) * -0.6f;
        sp38 = Math_SinS(this->actor.shape.rot.x) * 0.6f;
        sp3C = Math_CosS(this->actor.shape.rot.y) * -0.6f;
        sp2C = Rand_ZeroOne();
        func_800B1210(globalCtx, &this->actor.world.pos, (Vec3f *) &sp34, &D_8091BDCC, (s16) (s32) ((sp2C * 5.0f) + 8.0f), (s16) (s32) ((Rand_ZeroOne() * 5.0f) + 8.0f));
    }
    if ((s32) this->unk312 <= 0) {
        Actor_MarkForDeath(&this->actor);
    }
}

void func_8091B618(EnInsect *arg0) {
    s16 temp_v0;

    arg0 = arg0;
    temp_v0 = Rand_S16Offset(0x78, 0x32);
    arg0->unk310 = 0;
    arg0->unk312 = temp_v0;
    arg0->actionFunc = func_8091B670;
    arg0->unk30C &= 0xFEFF;
    arg0->unk30E = arg0->unk310;
}

void func_8091B670(EnInsect *this, GlobalContext *globalCtx) {
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 temp_f0;
    s16 temp_a0;
    s16 temp_a0_2;
    s32 temp_f16;
    s32 temp_f8;
    s32 temp_v0;
    s32 temp_v0_2;
    f32 phi_f2;
    s16 phi_v0;
    s16 phi_v0_2;

    if ((s32) this->unk312 >= 0x51) {
        Math_StepToF(&this->actor.speedXZ, 0.6f, 0.08f);
    } else {
        Math_StepToF(&this->actor.speedXZ, 0.0f, 0.02f);
    }
    this->actor.world.pos.y += this->actor.yDistToWater;
    this->actor.velocity.y = 0.0f;
    temp_f0 = (f32) this->unk312 * 0.018f;
    phi_f2 = 0.1f;
    if (temp_f0 < 0.1f) {

    } else if (temp_f0 > 1.9f) {
        phi_f2 = 1.9f;
    } else {
        phi_f2 = temp_f0;
    }
    this->unk1A4.animPlaybackSpeed = phi_f2;
    SkelAnime_FrameUpdateMatrix(&this->unk1A4);
    if ((s32) this->unk312 >= 0x51) {
        this->unk30E += Rand_S16Offset(-0x32, 0x64);
        this->unk310 += Rand_S16Offset(-0x12C, 0x258);
    }
    temp_a0 = this->unk30E;
    temp_f16 = (s32) (this->unk1A4.animPlaybackSpeed * 200.0f);
    temp_v0 = -(s32) (s16) temp_f16;
    phi_v0 = (s16) temp_v0;
    if ((s32) temp_a0 < temp_v0) {

    } else {
        phi_v0 = temp_a0;
        if ((s32) (s16) temp_f16 < (s32) temp_a0) {
            phi_v0 = (s16) temp_f16;
        }
    }
    this->unk30E = phi_v0;
    temp_a0_2 = this->unk310;
    this->actor.world.rot.y += this->unk30E;
    temp_f8 = (s32) (this->unk1A4.animPlaybackSpeed * 1000.0f);
    temp_v0_2 = -(s32) (s16) temp_f8;
    phi_v0_2 = (s16) temp_v0_2;
    if ((s32) temp_a0_2 < temp_v0_2) {

    } else {
        phi_v0_2 = temp_a0_2;
        if ((s32) (s16) temp_f8 < (s32) temp_a0_2) {
            phi_v0_2 = (s16) temp_f8;
        }
    }
    this->unk310 = phi_v0_2;
    this->actor.shape.rot.y += this->unk310;
    Math_ScaledStepToS(&this->actor.world.rot.x, 0, 0xBB8);
    this->actor.shape.rot.x = this->actor.world.rot.x;
    if (Rand_ZeroOne() < 0.03f) {
        sp40 = this->actor.world.pos.x;
        sp44 = this->actor.world.pos.y + this->actor.yDistToWater;
        sp48 = this->actor.world.pos.z;
        EffectSsGRipple_Spawn(globalCtx, (Vec3f *) &sp40, 0x28, 0xC8, (s16) 4);
    }
    if (((s32) this->unk312 <= 0) || (((this->unk30C & 4) != 0) && ((s32) this->unk314 <= 0))) {
        func_8091B928(this);
        return;
    }
    if ((this->actor.bgCheckFlags & 0x40) == 0) {
        func_8091AC78(this);
    }
}

void func_8091B928(EnInsect *arg0) {
    u16 temp_t0;
    u16 temp_t2;

    arg0->unk312 = 0x64;
    arg0->actor.velocity.y = 0.0f;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.minVelocityY = -0.8f;
    temp_t0 = arg0->unk30C & 0xFFFE;
    temp_t2 = temp_t0 & 0xFEFF;
    arg0->unk30C = temp_t0;
    arg0->unk30C = temp_t2;
    arg0->actionFunc = func_8091B984;
    arg0->unk30C = temp_t2 | 8;
    arg0->actor.gravity = -0.04f;
}

void func_8091B984(EnInsect *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 phi_f2;

    this->actor.shape.rot.x += -0x1F4;
    this->actor.shape.rot.y += 0xC8;
    temp_f0 = this->actor.scale.x - 0.00005f;
    if (temp_f0 < 0.001f) {
        phi_f2 = 0.001f;
    } else {
        phi_f2 = temp_f0;
    }
    Actor_SetScale(&this->actor, phi_f2);
    temp_f0_2 = this->actor.yDistToWater;
    if ((temp_f0_2 > 5.0f) && (temp_f0_2 < 30.0f) && (Rand_ZeroOne() < 0.3f)) {
        EffectSsBubble_Spawn(globalCtx, &this->actor.world.pos, -5.0f, 5.0f, 5.0f, (Rand_ZeroOne() * 0.04f) + 0.02f);
    }
    if ((s32) this->unk312 <= 0) {
        Actor_MarkForDeath(&this->actor);
    }
}

void EnInsect_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnInsect *this = (EnInsect *) thisx;
    Actor *temp_v0;
    f32 temp_v0_4;
    s16 temp_v0_2;
    s16 temp_v0_3;
    u16 temp_v1;
    s32 phi_v0;

    temp_v0 = this->actor.child;
    if ((temp_v0 != 0) && (temp_v0->update == 0) && (this != temp_v0)) {
        this->actor.child = NULL;
    }
    temp_v0_2 = this->unk312;
    if ((s32) temp_v0_2 > 0) {
        this->unk312 = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk314;
    if ((s32) temp_v0_3 > 0) {
        this->unk314 = temp_v0_3 - 1;
    }
    this->actionFunc(this, globalCtx);
    if (this->actor.update != 0) {
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
        temp_v1 = this->unk30C;
        if ((temp_v1 & 0x100) != 0) {
            if ((temp_v1 & 1) != 0) {
                if ((this->actor.bgCheckFlags & 1) != 0) {
                    func_8091A9E4(&this->actor);
                    goto block_14;
                }
            } else {
                func_8091A9E4(&this->actor);
block_14:
            }
        }
        phi_v0 = 0;
        if ((this->unk30C & 1) != 0) {
            phi_v0 = 4;
        }
        if (phi_v0 != 0) {
            Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 8.0f, 5.0f, 0.0f, phi_v0 | 0x40);
        }
        if (Actor_HasParent(&this->actor, globalCtx) != 0) {
            this->actor.parent = NULL;
            func_8091B274(&this->actor);
        } else if ((this->actor.xzDistToPlayer < 50.0f) && (func_8091B2D8 != this->actionFunc)) {
            if (((this->unk30C & 0x20) == 0) && ((s32) this->unk314 < 0xB4)) {
                temp_v0_4 = this->unk144.animPlaybackSpeed;
                temp_v0_4->unk30 = (s16) (s32) this->actor.world.pos.x;
                temp_v0_4->unk32 = (s16) (s32) this->actor.world.pos.y;
                temp_v0_4->unk34 = (s16) (s32) this->actor.world.pos.z;
                CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk144);
            }
            if (((this->unk30C & 8) == 0) && ((s32) D_8091BD60 < 4) && (func_8091A8F4(this, globalCtx) != 0) && (func_800B8A1C(&this->actor, globalCtx, 0xBA, 60.0f, 30.0f) != 0)) {
                D_8091BD60 += 1;
            }
        }
        Actor_SetHeight(&this->actor, 0.0f);
    }
}

void EnInsect_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnInsect *this = (EnInsect *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_Draw(globalCtx, this->unk1A4.skeleton, this->unk1A4.limbDrawTbl, NULL, NULL, NULL);
    D_8091BD60 = 0;
}

