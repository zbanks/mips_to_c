? func_800BE3D0(EnSnowman *, s16, ActorShape *);    /* extern */
void func_80B16FC0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B17144(EnSnowman *arg0, GlobalContext *arg1); /* static */
void func_80B173D0(EnSnowman *arg0);                /* static */
void func_80B177EC(EnSnowman *arg0, GlobalContext *arg1); /* static */
void func_80B179D0(EnSnowman *arg0);                /* static */
void func_80B17CE8(EnSnowman *arg0);                /* static */
void func_80B17EB4(EnSnowman *arg0);                /* static */
void func_80B17F4C(EnSnowman *arg0, GlobalContext *arg1, EnSnowman *); /* static */
void func_80B180A4(Actor *arg0);                    /* static */
void func_80B18380(Actor *arg0);                    /* static */
void func_80B183C4(Actor *arg0);                    /* static */
void func_80B18600(EnSnowman *arg0);                /* static */
void func_80B18908(EnSnowman *arg0);                /* static */
void func_80B189D4(Actor *arg0);                    /* static */
void func_80B18A28(Actor *arg0, PosRot *arg1, s16 arg2); /* static */
void func_80B18B30(EnSnowman *arg0, Actor *arg1, Actor *, Actor *); /* static */
void func_80B18BB4(Actor *arg0, GlobalContext *arg1, f32 *arg2); /* static */
void func_80B18F50(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B19474(Actor *this, GlobalContext *globalCtx); /* static */
void func_80B19718(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80B19948(Actor *thisx, GlobalContext *globalCtx); /* static */
void func_80B19998(Actor *thisx, GlobalContext *globalCtx); /* static */
extern AnimationHeader D_06000404;
extern AnimationHeader D_060007B4;
extern FlexSkeletonHeader D_060045A0;
extern AnimationHeader D_06004628;
extern AnimationHeader D_060046D8;
extern FlexSkeletonHeader D_06004A90;
extern AnimationHeader D_06004F14;
extern AnimationHeader D_0600544C;
extern AnimationHeader D_0600554C;
extern AnimationHeader D_060058CC;
static ColliderCylinderInit D_80B19A00 = {
    {4, 0, 9, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 5, 1},
    {0x3C, 0x50, 0, {0, 0, 0}},
};
static ColliderCylinderInit D_80B19A2C = {
    {0xA, 0x11, 9, 0x38, 0x10, 1},
    {0, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 0x19, 1, 1},
    {0x3C, 0x50, 0, {0, 0, 0}},
};
static DamageTable D_80B19A58 = {
    {
        0x10,
        1,
        1,
        1,
        1,
        1,
        0,
        0xF1,
        2,
        1,
        1,
        0x22,
        1,
        0x42,
        1,
        0x10,
        1,
        2,
        0x10,
        0x50,
        0,
        0,
        1,
        1,
        1,
        0,
        0,
        0,
        0,
        0,
        0,
        1,
    },
};
static CollisionCheckInfoInit D_80B19A78 = {2, 0x3C, 0x50, 0x96};
static Color_RGBA8 D_80B19A80 = {0xFA, 0xFA, 0xFA, 0xFF};
static Color_RGBA8 D_80B19A84 = {0xB4, 0xB4, 0xB4, 0xFF};
static Vec3f D_80B19A88 = {0.0f, 1.5f, 0.0f};
static ? D_80B19A94;                                /* unable to generate initializer */
static Gfx *D_80B19AA0 = {(Gfx *)0x6005CB0, (Gfx *)0x6006190, (Gfx *)0x6006620};
static InitChainEntry D_80B19AAC;                   /* unable to generate initializer */
static Vec3f D_80B19AB8 = {0.0f, -1.0f, 0.0f};
static Vec3f D_80B19AC4 = {0.0f, -0.5f, 0.0f};
static ? D_80B19AD0;                                /* unable to generate initializer */
static ? D_80B19ADA;                                /* unable to generate initializer */
static Vec3f D_80B19ADC = {
    {2000.0f, 3000.0f, 0.0f},
    {2000.0f, -2000.0f, 0.0f},
    {3000.0f, 0.0f, 0.0f},
    {1000.0f, 0.0f, 3000.0f},
    {1000.0f, 0.0f, -3000.0f},
};
static ? D_80B19B18;                                /* unable to generate initializer */

typedef struct EnSnowman {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ SkelAnime unk188;                  /* inferred */
    /* 0x01CC */ Vec3s unk1CC;                      /* inferred */
    /* 0x01D2 */ char pad1D2[0x42];                 /* maybe part of unk1CC[12]? */
    /* 0x0214 */ Vec3s unk214;                      /* inferred */
    /* 0x021A */ char pad21A[0x42];                 /* maybe part of unk214[12]? */
    /* 0x025C */ Vec3s unk25C;                      /* inferred */
    /* 0x0262 */ char pad262[0xC];                  /* maybe part of unk25C[3]? */
    /* 0x026E */ Vec3s unk26E;                      /* inferred */
    /* 0x0274 */ char pad274[0xC];                  /* maybe part of unk26E[3]? */
    /* 0x0280 */ void (*actionFunc)(EnSnowman *, GlobalContext *);
    /* 0x0284 */ void (*unk284)(EnSnowman *, GlobalContext *); /* inferred */
    /* 0x0288 */ u8 unk288;                         /* inferred */
    /* 0x0289 */ u8 unk289;                         /* inferred */
    /* 0x028A */ u8 unk28A;                         /* inferred */
    /* 0x028B */ u8 unk28B;                         /* inferred */
    /* 0x028C */ s16 unk28C;                        /* inferred */
    /* 0x028E */ s16 unk28E;                        /* inferred */
    /* 0x0290 */ s16 unk290;                        /* inferred */
    /* 0x0292 */ char pad292[0x2];                  /* maybe part of unk290[2]? */
    /* 0x0294 */ f32 unk294;                        /* inferred */
    /* 0x0298 */ f32 unk298;                        /* inferred */
    /* 0x029C */ f32 unk29C;                        /* inferred */
    /* 0x02A0 */ f32 unk2A0;                        /* inferred */
    /* 0x02A4 */ f32 unk2A4;                        /* inferred */
    /* 0x02A8 */ f32 unk2A8;                        /* inferred */
    /* 0x02AC */ char pad2AC[0x8];                  /* maybe part of unk2A8[3]? */
    /* 0x02B4 */ f32 unk2B4;                        /* inferred */
    /* 0x02B8 */ f32 unk2B8;                        /* inferred */
    /* 0x02BC */ f32 unk2BC;                        /* inferred */
    /* 0x02C0 */ Vec3f unk2C0;                      /* inferred */
    /* 0x02CC */ char pad2CC[0x60];                 /* maybe part of unk2C0[9]? */
    /* 0x032C */ ColliderCylinder unk32C;           /* inferred */
} EnSnowman;                                        /* size 0x378 */

void EnSnowman_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnSnowman *this = (EnSnowman *) thisx;
    s32 sp54;
    Actor *sp50;
    ActorContext *sp48;
    Actor *temp_a0_2;
    Actor *temp_a1;
    Actor *temp_v0_2;
    ActorContext *temp_a0;
    f32 temp_f2;
    f32 temp_f6;
    s16 temp_v0;
    s32 temp_cond;
    s32 temp_v1;
    s32 phi_v1;

    Actor_ProcessInitChain(&this->actor, &D_80B19AAC);
    temp_v0 = this->actor.params;
    temp_v1 = ((s32) temp_v0 >> 8) & 0xFF;
    phi_v1 = temp_v1;
    if (temp_v1 == 0xFF) {
        phi_v1 = 0;
    }
    this->actor.params = temp_v0 & 7;
    if ((s32) this->actor.params < 3) {
        sp54 = phi_v1;
        SkelAnime_InitSV(globalCtx, &this->unk144, &D_060045A0, &D_0600554C, &this->unk1CC, &this->unk214, 0xC);
        SkelAnime_InitSV(globalCtx, &this->unk188, &D_06004A90, &D_060046D8, &this->unk25C, &this->unk26E, 3);
        CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_80B19A58, &D_80B19A78);
        Collider_InitAndSetCylinder(globalCtx, &this->unk32C, &this->actor, &D_80B19A00);
        temp_a0 = &globalCtx->actorCtx;
        if (this->actor.params == 1) {
            this->actor.flags |= 0x400;
            sp48 = temp_a0;
            Actor_SpawnAsChild(temp_a0, &this->actor, globalCtx, 0x1E6, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, 2);
            temp_v0_2 = Actor_SpawnAsChildAndCutscene(temp_a0, globalCtx, 0x1E6, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, 2, -1U, (s32) this->actor.unk20, NULL);
            temp_a1 = this->actor.child;
            this->actor.parent = temp_v0_2;
            if ((temp_a1 == 0) || (temp_v0_2 == 0)) {
                if (temp_a1 != 0) {
                    Actor_MarkForDeath(temp_a1);
                }
                temp_a0_2 = this->actor.parent;
                if (temp_a0_2 != 0) {
                    Actor_MarkForDeath(temp_a0_2);
                }
                Actor_MarkForDeath(&this->actor);
                return;
            }
            temp_v0_2->child = &this->actor;
            this->actor.child->child = this->actor.parent;
            this->actor.parent->parent = this->actor.child;
            Actor_SetScale(&this->actor, 0.02f);
            goto block_12;
        }
block_12:
        this->unk294 = this->actor.scale.x * 100.0f;
        this->unk29C = (this->unk294 * 240.0f) + ((f32) sp54 * 0.1f * 40.0f);
        if (this->actor.params == 2) {
            func_80B18908(this);
            return;
        }
        func_80B173D0(this);
        return;
    }
    sp50 = globalCtx->actorCtx.actorList[2].first;
    this->actor.flags &= -2;
    Collider_InitAndSetCylinder(globalCtx, &this->unk32C, &this->actor, &D_80B19A2C);
    this->actor.world.rot.y = Actor_YawBetweenActors(&this->actor, sp50);
    temp_f2 = (Actor_XZDistanceBetweenActors(&this->actor, sp50) * 0.035f) + -5.0f;
    temp_cond = temp_f2 > 3.5f;
    this->actor.velocity.y = temp_f2;
    if (temp_cond) {
        this->actor.velocity.y = 3.5f;
    } else {
        this->actor.velocity.y = this->actor.velocity.y;
    }
    if (this->actor.params == 3) {
        this->actor.speedXZ = 15.0f;
    } else {
        this->actor.speedXZ = 22.5f;
        this->actor.velocity.y *= 1.5f;
    }
    temp_f6 = this->actor.world.pos.x + (this->actor.speedXZ * Math_SinS(this->actor.world.rot.y));
    this->actor.world.pos.y += this->actor.velocity.y;
    this->actor.world.pos.x = temp_f6;
    this->actor.world.pos.z += this->actor.speedXZ * Math_CosS(this->actor.world.rot.y);
    if (this->actor.params == 3) {
        this->unk32C.dim.radius = 8;
        this->unk32C.dim.height = 0xC;
        this->unk32C.dim.yShift = -6;
        ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 10.0f);
    } else {
        this->unk32C.dim.radius = 0x32;
        this->unk32C.dim.height = 0x7A;
        this->unk32C.dim.yShift = -8;
        this->unk32C.info.toucher.damage = 0x10;
        this->actor.world.pos.y -= 32.0f;
        Actor_SetScale(&this->actor, 0.006f);
        ActorShape_Init(&this->actor.shape, 5333.3335f, func_800B3FC0, 170.0f);
        this->actor.gravity = -1.5f;
    }
    this->actor.flags |= 0x10;
    this->actor.update = func_80B19474;
    this->actor.draw = func_80B19998;
    this->unk28C = 5;
}

void EnSnowman_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnSnowman *this = (EnSnowman *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk32C);
}

void func_80B16FC0(Actor *arg0, GlobalContext *arg1) {
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 *temp_s3;
    f32 temp_f20;
    s32 temp_s2;
    s16 phi_s1;
    s32 phi_s2;

    sp7C = (Rand_ZeroFloat(10.0f) * arg0->unk294) + arg0->world.pos.y;
    temp_s3 = &sp78;
    phi_s1 = 0;
    phi_s2 = 0;
    do {
        temp_f20 = (Rand_ZeroFloat(10.0f) + 20.0f) * arg0->unk294;
        sp78 = (Math_SinS(phi_s1) * temp_f20) + arg0->world.pos.x;
        sp80 = (Math_CosS(phi_s1) * temp_f20) + arg0->world.pos.z;
        func_800B0DE0(arg1, (Vec3f *) temp_s3, &D_80B19A88, &D_801D15B0, &D_80B19A80, &D_80B19A84, (s16) (s32) (arg0->unk294 * 400.0f), (s16) 0xA);
        temp_s2 = phi_s2 + 1;
        phi_s1 = (s16) (phi_s1 + 0x1000);
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x10);
}

void func_80B17144(EnSnowman *arg0, GlobalContext *arg1) {
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 *temp_fp;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    s16 temp_s0;
    s16 temp_s1;
    s32 temp_hi;
    s32 temp_s2;
    s32 phi_s2;

    temp_fp = &spA0;
    phi_s2 = 0;
    do {
        temp_s0 = Rand_S16Offset(0x1800, 0x2800);
        temp_s1 = (s16) (Rand_Next() >> 0x10);
        temp_f22 = Rand_ZeroFloat(3.0f) + 8.0f;
        temp_f20 = Math_CosS(temp_s0);
        sp94 = Math_SinS(temp_s1) * (temp_f22 * temp_f20);
        sp98 = Math_SinS(temp_s0) * temp_f22;
        temp_f20_2 = Math_CosS(temp_s0);
        sp9C = Math_CosS(temp_s1) * (temp_f22 * temp_f20_2);
        spA0 = (Rand_ZeroFloat(10.0f) * sp94) + arg0->unk2B4;
        spA4 = (Rand_ZeroFloat(8.0f) * sp98) + arg0->unk2B8;
        temp_hi = phi_s2 % 3;
        spA8 = (Rand_ZeroFloat(10.0f) * sp9C) + arg0->unk2BC;
        EffectSsHahen_Spawn(arg1, (Vec3f *) temp_fp, (Vec3f *) &sp94, &D_80B19AB8, (s16) 0, (s16) Rand_S16Offset((s16) ((temp_hi * 0x32) + 0x32), (s16) ((temp_hi * 0x19) + 0x19)), (s16) 0x1C4, (s16) 0x14, *(&D_80B19AA0 + (temp_hi * 4)));
        temp_s2 = phi_s2 + 1;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0xF);
    func_800B0DE0(arg1, arg0 + 0x2B4, &D_801D15B0, &D_801D15B0, &D_80B19A80, &D_80B19A84, (s16) 0x3E8, (s16) 0x96);
}

void func_80B173D0(EnSnowman *arg0) {
    SkelAnime *temp_a0;
    f32 temp_f0;

    temp_a0 = arg0 + 0x188;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_060046D8);
    temp_f0 = arg0->unk294;
    arg0->actor.scale.y = arg0->actor.scale.x;
    arg0->actor.speedXZ = 2.0f;
    arg0->actor.draw = func_80B19948;
    arg0->unk28C = 0x28;
    arg0->unk28A = 0;
    arg0->actionFunc = func_80B1746C;
    arg0->unk32C.dim.radius = (s16) (s32) (temp_f0 * 30.0f);
    arg0->unk32C.dim.height = (s16) (s32) (temp_f0 * 10.0f);
}

void func_80B1746C(EnSnowman *this, GlobalContext *globalCtx) {
    Actor *sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s16 sp36;
    s32 sp2C;
    PosRot *sp28;
    Actor *temp_v0_2;
    Actor *temp_v0_3;
    Actor *temp_v1;
    PosRot *temp_a1_2;
    s16 temp_a1;
    s16 temp_v0;
    u8 temp_a0;
    f32 phi_f18;
    s32 phi_v1;
    s16 phi_t8;

    sp44 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(&this->unk188);
    if (this->actor.params == 1) {
        func_800B9010(&this->actor, 0x3169U);
    } else {
        func_800B9010(&this->actor, 0x316AU);
    }
    temp_v0 = this->unk28C;
    if ((s32) temp_v0 > 0) {
        this->unk28C = temp_v0 - 1;
    }
    if (this->unk28C == 0) {
        this->unk32C.base.acFlags |= 1;
    }
    if ((this->unk290 == 0) && (this->actor.params == 2)) {
        temp_v1 = this->actor.parent;
        temp_a0 = temp_v1->colChkInfo.health;
        if ((temp_a0 != 0) && (temp_v0_2 = this->actor.child, (temp_v0_2->colChkInfo.health != 0))) {
            sp38 = (temp_v1->world.pos.x + temp_v0_2->world.pos.x + this->actor.world.pos.x) * 0.33333334f;
            phi_f18 = (this->actor.parent->world.pos.z + this->actor.child->world.pos.z + this->actor.world.pos.z) * 0.33333334f;
            goto block_17;
        }
        if (temp_a0 != 0) {
            sp38 = (temp_v1->world.pos.x + this->actor.world.pos.x) * 0.5f;
            sp40 = (this->actor.parent->world.pos.z + this->actor.world.pos.z) * 0.5f;
        } else {
            temp_v0_3 = this->actor.child;
            if (temp_v0_3->colChkInfo.health != 0) {
                sp38 = (temp_v0_3->world.pos.x + this->actor.world.pos.x) * 0.5f;
                sp40 = (this->actor.child->world.pos.z + this->actor.world.pos.z) * 0.5f;
            } else {
                sp38 = this->actor.world.pos.x;
                phi_f18 = this->actor.world.pos.z;
block_17:
                sp40 = phi_f18;
            }
        }
        sp3C = this->actor.world.pos.y;
        func_80B18BB4(this->actor.parent, globalCtx, &sp38);
        func_80B18BB4(this->actor.child, globalCtx, &sp38);
        func_80B18BB4(&this->actor, globalCtx, &sp38);
        return;
    }
    if ((this->unk28C == 0) && (fabsf(this->actor.yDistToPlayer) < 60.0f) && (this->actor.xzDistToPlayer < this->unk29C) && (Player_GetMask(globalCtx) != 0x10) && ((sp44->unkA6C << 8) >= 0)) {
        func_80B177EC(this, globalCtx);
        return;
    }
    temp_a1 = this->unk28E;
    if (this->actor.shape.rot.y != temp_a1) {
        if (Math_ScaledStepToS(&this->actor.shape.rot.y, temp_a1, 0x100) != 0) {
            this->unk28A = 0;
        }
        this->actor.world.rot.y = this->actor.shape.rot.y;
        return;
    }
    temp_a1_2 = &this->actor.home;
    if ((this->actor.bgCheckFlags & 8) != 0) {
        phi_t8 = this->actor.wallYaw;
        goto block_37;
    }
    sp28 = temp_a1_2;
    if (Actor_XZDistanceToPoint(&this->actor, &temp_a1_2->pos) > 200.0f) {
        sp36 = Actor_YawToPoint(&this->actor, &temp_a1_2->pos);
        this->unk28E = (Rand_Next() >> 0x14) + sp36;
        return;
    }
    if (Rand_ZeroOne() < 0.02f) {
        phi_v1 = 1;
        if (Rand_ZeroOne() < 0.5f) {
            phi_v1 = -1;
        }
        sp2C = phi_v1;
        phi_t8 = this->unk28E + (((Rand_Next() >> 0x13) + 0x1000) * phi_v1);
block_37:
        this->unk28E = phi_t8;
    }
}

void func_80B177EC(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;

    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_0600554C);
    Audio_PlayActorSound2(arg0, 0x396BU);
    temp_f0 = arg0->unk294;
    arg0->draw = EnSnowman_Draw;
    arg0->unk36C = (s16) (s32) (temp_f0 * 40.0f);
    arg0->unk36E = (s16) (s32) (temp_f0 * 25.0f);
    arg0->speedXZ = 0.0f;
    arg0->shape.rot.y = arg0->yawTowardsPlayer;
    arg0->scale.y = arg0->scale.x * 0.4f;
    func_80B16FC0(arg0, arg1);
    arg0->unk33D = (u8) (arg0->unk33D & 0xFFFE);
    arg0->unk280 = func_80B178B8;
}

void func_80B178B8(EnSnowman *this, GlobalContext *globalCtx) {
    Actor *sp24;
    f32 temp_f0;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    temp_f0 = this->actor.scale.x;
    Math_StepToF(&this->actor.scale.y, temp_f0, (temp_f0 * 0.6f) / (f32) SkelAnime_GetFrameCount(&D_0600554C.common));
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x1000);
    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        if (this->unk289 == 1) {
            func_80B17F4C(this, globalCtx);
            return;
        }
        if (((sp24->unkA6C << 8) >= 0) && (Player_GetMask(globalCtx) != 0x10)) {
            this->unk28C = 3;
            this->unk32C.base.acFlags |= 1;
            func_80B179D0(this);
            return;
        }
        this->unk32C.base.acFlags |= 1;
        this->actor.scale.y = this->actor.scale.x;
        func_80B17EB4(this);
        // Duplicate return node #7. Try simplifying control flow for better match
    }
}

void func_80B179D0(EnSnowman *arg0) {
    EnSnowman *temp_a2;

    temp_a2 = arg0;
    temp_a2->actor.scale.y = temp_a2->actor.scale.x;
    if (temp_a2->actor.params == 1) {
        temp_a2->unk298 = 15.0f;
        arg0 = temp_a2;
        SkelAnime_ChangeAnimDefaultStop(temp_a2 + 0x144, &D_06000404);
    } else {
        temp_a2->unk298 = 6.0f;
        arg0 = temp_a2;
        SkelAnime_ChangeAnimDefaultStop(temp_a2 + 0x144, &D_060007B4);
    }
    arg0->actionFunc = func_80B17A58;
}

void func_80B17A58(EnSnowman *this, GlobalContext *globalCtx) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    SkelAnime *sp34;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s16 temp_v0;

    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x1000);
    temp_v0 = this->actor.params;
    if ((temp_v0 != 1) && (this->unk288 != 0) && ((globalCtx->gameplayFrames & 1) != 0)) {
        sp3C = randPlusMinusPoint5Scaled(10.0f) + this->unk2B4;
        sp40 = randPlusMinusPoint5Scaled(10.0f) + this->unk2B8;
        sp44 = randPlusMinusPoint5Scaled(10.0f) + this->unk2BC;
        func_800B0DE0(globalCtx, (Vec3f *) &sp3C, &D_80B19A88, &D_801D15B0, &D_80B19A80, &D_80B19A84, (s16) 0x1F4, (s16) 0x1E);
    } else if (temp_v0 == 1) {
        temp_f0 = this->unk144.animCurrentFrame;
        if ((temp_f0 > 3.0f) && (temp_f0 < 14.0f) && ((globalCtx->gameplayFrames & 1) != 0)) {
            sp38 = Math_SinS(this->actor.shape.rot.y);
            sp3C = randPlusMinusPoint5Scaled(40.0f) + (this->actor.world.pos.x + (70.0f * sp38));
            sp40 = randPlusMinusPoint5Scaled(20.0f) + this->actor.world.pos.y;
            sp38 = Math_CosS(this->actor.shape.rot.y);
            sp44 = randPlusMinusPoint5Scaled(40.0f) + (this->actor.world.pos.z + (70.0f * sp38));
            func_800B0DE0(globalCtx, (Vec3f *) &sp3C, &D_80B19A88, &D_801D15B0, &D_80B19A80, &D_80B19A84, (s16) 0x3E8, (s16) 0x96);
        }
    }
    temp_a0 = &this->unk144;
    sp34 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        func_80B17CE8(this);
        return;
    }
    if (func_801378B8(temp_a0, this->unk298) != 0) {
        if (this->actor.params == 1) {
            Audio_PlayActorSound2(&this->actor, 0x3944U);
        } else {
            Audio_PlayActorSound2(&this->actor, 0x3967U);
        }
        this->unk288 = 1;
    }
}

void func_80B17CE8(EnSnowman *arg0) {
    SkelAnime *temp_a0;
    SkelAnime *temp_a0_2;

    temp_a0 = arg0 + 0x144;
    if (arg0->actor.params == 1) {
        temp_a0_2 = arg0 + 0x144;
        arg0 = arg0;
        SkelAnime_ChangeAnimDefaultStop(temp_a0_2, &D_06004F14);
        arg0->unk298 = 17.0f;
    } else {
        arg0 = arg0;
        SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_0600544C);
        arg0->unk298 = 15.0f;
    }
    arg0->unk28C += -1;
    arg0->actionFunc = func_80B17D78;
}

void func_80B17D78(EnSnowman *this, GlobalContext *globalCtx) {
    Actor *sp44;
    s32 sp40;
    SkelAnime *sp3C;
    SkelAnime *temp_a0;

    sp44 = globalCtx->actorCtx.actorList[2].first;
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x1000);
    temp_a0 = &this->unk144;
    sp3C = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        if ((this->unk28C != 0) && (Player_GetMask(globalCtx) != 0x10) && ((sp44->unkA6C << 8) >= 0)) {
            func_80B179D0(this);
            return;
        }
        this->unk28C = 0;
        func_80B17EB4(this);
        return;
    }
    if (func_801378B8(temp_a0, this->unk298) != 0) {
        this->unk288 = 0;
        if (this->actor.params == 1) {
            sp40 = 4;
            Audio_PlayActorSound2(&this->actor, 0x3A50U);
        } else {
            sp40 = 3;
            Audio_PlayActorSound2(&this->actor, 0x3968U);
        }
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x1E6, this->unk2B4, this->unk2B8, this->unk2BC, (s16) 0, (s16) (s32) this->actor.yawTowardsPlayer, (s16) 0, (s16) sp40);
    }
}

void func_80B17EB4(EnSnowman *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_060058CC);
    arg0->unk28C = 0x3C;
    arg0->actionFunc = func_80B17EFC;
}

void func_80B17EFC(EnSnowman *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;
    s16 temp_v0;

    temp_a0 = &this->unk144;
    this = this;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v0 = this->unk28C;
    if ((s32) temp_v0 > 0) {
        this->unk28C = temp_v0 - 1;
        return;
    }
    func_80B17F4C(this, globalCtx, this);
}

void func_80B17F4C(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_0600554C, -1.0f, (f32) SkelAnime_GetFrameCount(&D_0600554C.common), 0.0f, (u8) 2, -3.0f);
    func_80B16FC0(arg0, arg1);
    Audio_PlayActorSound2(arg0, 0x396CU);
    arg0->unk280 = func_80B17FE0;
}

void func_80B17FE0(EnSnowman *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    temp_f0 = this->actor.scale.x;
    Math_StepToF(&this->actor.scale.y, temp_f0 * 0.4f, (temp_f0 * 0.6f) / (f32) SkelAnime_GetFrameCount(&D_0600554C.common));
    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        if (this->unk289 == 1) {
            this->actor.draw = func_80B19948;
            this->unk32C.base.acFlags |= 1;
            func_80B18BB4(&this->actor, globalCtx, &this->unk2A8);
            return;
        }
        func_80B173D0(this);
        // Duplicate return node #4. Try simplifying control flow for better match
    }
}

void func_80B180A4(Actor *arg0) {
    u32 temp_t1;
    u32 temp_t3;

    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x32);
    temp_t1 = arg0->flags & ~1;
    temp_t3 = temp_t1 | 0x10;
    arg0->flags = temp_t1;
    arg0->unk33D = (u8) (arg0->unk33D & 0xFFFE);
    arg0->unk28C = 0x32;
    arg0->flags = temp_t3;
    arg0->unk280 = func_80B18124;
    arg0->speedXZ = 0.0f;
    arg0->scale.y = arg0->scale.x;
}

void func_80B18124(EnSnowman *this, GlobalContext *globalCtx) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_2;
    f32 phi_f2;
    f32 phi_f2_2;
    s16 phi_v0;

    this->unk28C += -1;
    temp_v0 = this->unk28C;
    if (((s32) temp_v0 >= 0x26) && ((temp_v0 & 1) == 0)) {
        sp40 = (f32) (temp_v0 - 0x26) * 0.083333336f;
        sp3C = randPlusMinusPoint5Scaled(1.5f) * sp40;
        sp44 = randPlusMinusPoint5Scaled(1.5f) * sp40;
        sp40 += 0.8f;
        if (sp3C >= 0.0f) {
            phi_f2 = 1.0f;
        } else {
            phi_f2 = -1.0f;
        }
        sp2C = phi_f2;
        sp30 = (Rand_ZeroFloat(20.0f) * phi_f2 * this->unk294) + this->actor.world.pos.x;
        if (sp44 >= 0.0f) {
            phi_f2_2 = 1.0f;
        } else {
            phi_f2_2 = -1.0f;
        }
        sp2C = phi_f2_2;
        sp38 = (Rand_ZeroFloat(20.0f) * phi_f2_2 * this->unk294) + this->actor.world.pos.z;
        sp34 = this->actor.world.pos.y + 3.0f;
        EffectSsIceSmoke_Spawn(globalCtx, (Vec3f *) &sp30, (Vec3f *) &sp3C, &D_801D15B0, (s16) (s32) (this->unk294 * 300.0f));
    }
    phi_v0 = this->unk28C;
    if (this->unk28C == 0) {
        Item_DropCollectibleRandom(globalCtx, &this->actor, &this->actor.world.pos, 0x60);
        temp_v0_2 = this->actor.params;
        if (temp_v0_2 == 2) {
            func_80B18908(this);
        } else if (temp_v0_2 == 1) {
            Actor_MarkForDeath(this->actor.parent);
            Actor_MarkForDeath(this->actor.child);
            Actor_MarkForDeath(&this->actor);
        } else {
            Actor_MarkForDeath(&this->actor);
        }
        phi_v0 = this->unk28C;
    }
    temp_f0 = this->unk294;
    temp_f2 = (f32) phi_v0 * 0.0002f * temp_f0;
    this->actor.scale.y = temp_f2;
    temp_f12 = (temp_f0 * 0.0139999995f) - (0.4f * temp_f2);
    this->actor.scale.x = temp_f12;
    this->actor.scale.z = temp_f12;
}

void func_80B18380(Actor *arg0) {
    void (*temp_v1)(EnSnowman *, GlobalContext *);

    temp_v1 = arg0->unk280;
    if (func_80B183A4 != temp_v1) {
        arg0->unk284 = temp_v1;
    }
    arg0->unk280 = func_80B183A4;
}

void func_80B183A4(EnSnowman *this, GlobalContext *globalCtx) {
    if (this->actor.colorFilterTimer == 0) {
        this->actionFunc = this->unk284;
    }
}

void func_80B183C4(Actor *arg0) {
    SkelAnime_ChangeAnimDefaultRepeat(arg0 + 0x144, &D_06004628);
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x14);
    arg0->unk33D = (u8) (arg0->unk33D & 0xFFFE);
    arg0->unk28C = 0x14;
    arg0->draw = EnSnowman_Draw;
    arg0->scale.y = arg0->scale.x;
    arg0->speedXZ = 10.0f;
    func_800BE504(arg0, arg0 + 0x32C);
    if (arg0->params == 1) {
        Audio_PlayActorSound2(arg0, 0x39FAU);
    } else {
        Audio_PlayActorSound2(arg0, 0x39F9U);
    }
    arg0->unk280 = func_80B1848C;
}

void func_80B1848C(EnSnowman *this, GlobalContext *globalCtx) {
    PosRot *sp20;
    PosRot *temp_a1;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v1;

    SkelAnime_FrameUpdateMatrix(&this->unk144);
    temp_v0 = this->unk28C;
    if ((s32) temp_v0 >= 0xB) {
        phi_v1 = 0xA;
    } else {
        phi_v1 = temp_v0;
    }
    this->actor.shape.rot.y += phi_v1 * 0x300;
    Math_StepToF(&this->actor.speedXZ, 0.0f, 0.5f);
    if (this->actor.params == 1) {
        Math_StepToF(&this->actor.scale.y, 0.012999999f, 0.00070000003f);
        temp_f0 = this->actor.scale.y;
        this->actor.scale.x = temp_f0;
        this->actor.scale.z = temp_f0;
    }
    temp_v0_2 = this->unk28C;
    if ((s32) temp_v0_2 > 0) {
        this->unk28C = temp_v0_2 - 1;
        return;
    }
    if (this->actor.params == 1) {
        Audio_PlayActorSound2(&this->actor, 0x396DU);
        func_80B16FC0(&this->actor, globalCtx);
        temp_a1 = &this->actor.world;
        this->unk2A0 = 0.0f;
        sp20 = temp_a1;
        func_80B18A28(this->actor.parent, temp_a1, this->actor.shape.rot.y + 0x5555);
        func_80B18A28(this->actor.child, temp_a1, this->actor.shape.rot.y - 0x5555);
        func_80B18A28(&this->actor, temp_a1, this->actor.shape.rot.y);
        Math_Vec3f_Copy((Vec3f *) &this->unk2B4, &temp_a1->pos);
        func_80B17144(this, globalCtx);
        return;
    }
    if (this->actor.colChkInfo.health != 0) {
        this->unk32C.base.acFlags |= 1;
        func_80B17F4C(this, globalCtx);
        return;
    }
    func_80B18600(this);
}

void func_80B18600(EnSnowman *arg0) {
    arg0->actionFunc = func_80B1861C;
    arg0->unk2A0 = 0.0f;
}

void func_80B1861C(EnSnowman *this, GlobalContext *globalCtx) {
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    PosRot *temp_s0_2;
    f32 *temp_fp;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    s16 temp_s0;
    s16 temp_s1;
    s32 temp_hi;
    s32 temp_s2;
    s32 phi_s2;

    temp_fp = &spA0;
    phi_s2 = 0;
    do {
        temp_s0 = Rand_S16Offset(0x1000, 0x3000);
        temp_s1 = (s16) (Rand_Next() >> 0x10);
        temp_f22 = Rand_ZeroFloat(2.0f) + 4.0f;
        temp_f20 = Math_CosS(temp_s0);
        spAC = Math_SinS(temp_s1) * (temp_f22 * temp_f20);
        spB0 = Math_SinS(temp_s0) * temp_f22;
        temp_f20_2 = Math_CosS(temp_s0);
        spB4 = Math_CosS(temp_s1) * (temp_f22 * temp_f20_2);
        spA0 = (Rand_ZeroFloat(6.0f) * spAC) + this->actor.world.pos.x;
        spA4 = (Rand_ZeroFloat(3.0f) * spB0) + this->actor.world.pos.y;
        temp_hi = phi_s2 % 3;
        spA8 = (Rand_ZeroFloat(6.0f) * spB4) + this->actor.world.pos.z;
        EffectSsHahen_Spawn(globalCtx, (Vec3f *) temp_fp, (Vec3f *) &spAC, &D_80B19AC4, (s16) 0, (s16) Rand_S16Offset((s16) ((temp_hi * 0x14) + 0x14), (s16) ((temp_hi * 0xA) + 0xA)), (s16) 0x1C4, (s16) 0x14, *(&D_80B19AA0 + (temp_hi * 4)));
        temp_s2 = phi_s2 + 1;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0xF);
    temp_s0_2 = &this->actor.world;
    func_800B0DE0(globalCtx, &temp_s0_2->pos, &D_801D15B0, &D_801D15B0, &D_80B19A80, &D_80B19A84, (s16) 0x1F4, (s16) 0x1E);
    Audio_PlaySoundAtPosition(globalCtx, &temp_s0_2->pos, 0x1E, 0x396FU);
    Item_DropCollectibleRandom(globalCtx, &this->actor, &temp_s0_2->pos, 0x60);
    if (this->actor.params == 2) {
        func_80B18908(this);
        return;
    }
    Actor_MarkForDeath(&this->actor);
}

void func_80B18908(Actor *arg0) {
    u8 temp_t8;
    void *temp_a0;
    void *temp_v1;

    temp_t8 = arg0->unk33D & ~2;
    arg0->unk33D = temp_t8;
    arg0->unk33D = (u8) (temp_t8 & ~2);
    arg0->draw = NULL;
    if (arg0->unk289 == 1) {
        arg0->unk289 = 2U;
    }
    temp_a0 = arg0->parent;
    arg0->flags &= -0x12;
    if ((temp_a0 != 0) && (func_80B189C4 == temp_a0->unk280)) {
        temp_v1 = arg0->child;
        if ((temp_v1 != 0) && (func_80B189C4 == temp_v1->unk280)) {
            func_80B189D4(temp_a0);
            func_80B189D4(arg0->child);
            Actor_MarkForDeath(arg0);
        }
    }
    arg0->unk280 = func_80B189C4;
}

void func_80B189C4(EnSnowman *this, GlobalContext *globalCtx) {

}

void func_80B189D4(Actor *arg0) {
    arg0->unk33D = (u8) (arg0->unk33D & ~3);
    arg0->unk33E = (u8) (arg0->unk33E & ~3);
    arg0->unk280 = func_80B18A04;
}

void func_80B18A04(EnSnowman *this, GlobalContext *globalCtx) {
    Actor_MarkForDeath(&this->actor);
}

void func_80B18A28(Actor *arg0, PosRot *arg1, s32 arg2) {
    s32 sp24;

    arg0->flags |= 1;
    Actor_SetScale(arg0, 0.01f);
    arg0->shape.rot.y = (s16) arg2;
    arg0->unk289 = 0;
    arg0->colChkInfo.health = 2;
    arg0->unk294 = 1.0f;
    arg0->world.rot.y = arg0->shape.rot.y;
    sp24 = (s32) (s16) arg2;
    arg0->world.pos.x = (Math_SinS((s16) arg2) * 40.0f) + arg1->pos.x;
    arg0->world.pos.y = arg1->pos.y;
    arg0->world.pos.z = (Math_CosS((s16) arg2) * 40.0f) + arg1->pos.z;
    arg0->unk290 = 0x258;
    arg0->params = 2;
    arg0->flags &= -0x401;
    arg0->unk33E = (u8) (arg0->unk33E | 1);
    arg0->unk33D = (u8) (arg0->unk33D & 0xFFFE);
    func_80B173D0((EnSnowman *) arg0);
}

void func_80B18B30(EnSnowman *arg0, Actor *arg1) {
    Actor *temp_a0;
    u8 temp_t1;
    u8 temp_t2;
    u8 temp_t3;
    u8 temp_t4;

    temp_a0 = arg1;
    arg0 = arg0;
    arg1 = arg1;
    Audio_PlayActorSound2(temp_a0, 0x396EU);
    arg1->unk298 = (f32) (arg1->unk298 + 0.005f);
    arg0->unk289 = 3;
    temp_t1 = arg0->unk32C.base.ocFlags1 & 0xFFFD;
    temp_t3 = arg0->unk32C.base.acFlags & 0xFFFD;
    temp_t2 = temp_t1 & 0xFFFE;
    temp_t4 = temp_t3 & 0xFFFE;
    arg0->unk32C.base.ocFlags1 = temp_t1;
    arg0->unk32C.base.acFlags = temp_t3;
    arg0->unk32C.base.ocFlags1 = temp_t2;
    arg0->unk32C.base.acFlags = temp_t4;
    arg0->unk298 = 0.0f;
}

void func_80B18BB4(EnSnowman *arg0, GlobalContext *arg1, Vec3f *arg2) {
    Vec3f *temp_a0;

    if (arg0->actor.colChkInfo.health == 0) {
        arg0->unk289 = 2;
        return;
    }
    temp_a0 = arg0 + 0x2A8;
    arg0->actor.flags |= 0x10;
    arg0 = arg0;
    Math_Vec3f_Copy(temp_a0, arg2);
    arg0->unk289 = 1;
    if (func_80B17FE0 != arg0->actionFunc) {
        arg0->unk290 = 0x190;
        arg0->unk298 = 0.01f;
    }
    if (func_80B19948 == arg0->actor.draw) {
        arg0->actionFunc = func_80B18C7C;
        arg0->actor.speedXZ = 3.0f;
        return;
    }
    arg0->unk288 = 0;
    arg0->actor.speedXZ = 0.0f;
    func_80B17F4C(arg0, arg1);
}

void func_80B18C7C(EnSnowman *this, GlobalContext *globalCtx) {
    Actor *sp34;
    Actor *sp30;
    f32 *sp24;
    Actor *temp_v0;
    Actor *temp_v0_2;
    Actor *temp_v1;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;

    SkelAnime_FrameUpdateMatrix(&this->unk188);
    temp_a1 = &this->unk2A8;
    sp34 = this->actor.parent;
    sp24 = temp_a1;
    sp30 = this->actor.child;
    Math_ScaledStepToS(&this->actor.shape.rot.y, Actor_YawToPoint(&this->actor, (Vec3f *) temp_a1), 0x1000);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if (this->unk289 == 1) {
        if ((this->unk32C.base.ocFlags1 & 2) != 0) {
            temp_v0 = this->actor.parent;
            temp_v1 = this->unk32C.base.oc;
            if ((temp_v0 == temp_v1) && (sp34->unk289 == 1)) {
                if (this->actor.scale.x < temp_v0->scale.x) {
                    func_80B18B30(this, sp34, sp34);
                } else {
                    func_80B18B30((EnSnowman *) sp34, &this->actor, sp34);
                }
            } else {
                temp_v0_2 = this->actor.child;
                if ((temp_v0_2 == temp_v1) && (sp30->unk289 == 1)) {
                    if (this->actor.scale.x < temp_v0_2->scale.x) {
                        func_80B18B30(this, sp30, sp34, sp30);
                    } else {
                        func_80B18B30((EnSnowman *) sp30, &this->actor, sp34, sp30);
                    }
                }
            }
        }
        if (sp34->unk289 == 2) {
            func_80B18B30((EnSnowman *) sp34, &this->actor, sp34);
        }
        if (sp30->unk289 == 2) {
            func_80B18B30((EnSnowman *) sp30, &this->actor);
        }
    }
    if ((this->unk290 == 0) && (sp34->unk298 > 0.0f) && (sp30->unk298 > 0.0f) && (this->unk298 < 0.011f) && (this->unk289 != 3)) {
        this->unk289 = 2;
        this->unk298 = 0.0f;
    }
    if (Actor_XZDistanceToPoint(&this->actor, (Vec3f *) sp24) < 20.0f) {
        this->actor.speedXZ = 0.0f;
    }
    if (Math_StepToF(&this->actor.scale.x, this->unk298, 0.0005f) != 0) {
        temp_f0 = this->unk298;
        if (temp_f0 < 0.01f) {
            func_80B18908(this);
        } else if (temp_f0 > 0.018f) {
            Actor_SetScale(&this->actor, 0.02f);
            this->actor.params = 1;
            this->actor.flags |= 0x400;
            this->unk32C.base.ocFlags1 |= 1;
            this->unk289 = 3;
            this->unk294 = 2.0f;
            func_80B173D0(this);
        }
    }
    temp_f0_2 = this->actor.scale.x;
    this->actor.scale.y = temp_f0_2;
    this->actor.scale.z = temp_f0_2;
}

void func_80B18F50(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v1;
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = arg0->unk33D;
    if (((temp_v0 & 2) != 0) && ((arg0->unk33D = (u8) (temp_v0 & 0xFFFD), func_800BE258(arg0, arg0 + 0x344), temp_v0_2 = arg0->colChkInfo.damageEffect, (temp_v0_2 != 0xF)) || (arg0->params != 1))) {
        if (temp_v0_2 == 2) {
            Enemy_StartFinishingBlow(arg1, arg0);
            Actor_ApplyDamage(arg0);
            func_80B180A4(arg0);
        } else {
            temp_v1 = arg0->unk280;
            if ((func_80B1746C == temp_v1) || (func_80B18C7C == temp_v1)) {
                func_80B177EC((EnSnowman *) arg0, arg1);
            } else if (temp_v0_2 == 1) {
                func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
                Audio_PlayActorSound2(arg0, 0x389EU);
                func_80B18380(arg0);
            } else if (temp_v0_2 == 5) {
                func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
                arg0->unk28B = 0x20;
                arg0->unk2A4 = 0.55f;
                arg0->unk2A0 = 2.0f;
                Audio_PlayActorSound2(arg0, 0x389EU);
                func_80B18380(arg0);
            } else if (arg0->params == 1) {
                if (arg0->unk288 == 1) {
                    arg0->unk288 = 0U;
                    func_80B17144((EnSnowman *) arg0, arg1);
                }
                func_80B183C4(arg0);
            } else {
                if (Actor_ApplyDamage(arg0) == 0) {
                    Enemy_StartFinishingBlow(arg1, arg0);
                }
                func_80B183C4(arg0);
            }
        }
        if (arg0->colChkInfo.damageEffect == 4) {
            arg0->unk2A4 = 0.55f;
            arg0->unk28B = 0x14;
            arg0->unk2A0 = 4.0f;
            Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) arg0->unk352, (f32) arg0->unk354, (f32) arg0->unk356, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
        }
    }
}

void EnSnowman_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnSnowman *this = (EnSnowman *) thisx;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a1;
    CollisionPoly *temp_v0_2;
    CollisionPoly *temp_v0_3;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_v0;
    f32 phi_f0;
    f32 phi_f0_2;

    if (func_80B189C4 != this->actionFunc) {
        temp_v0 = this->unk290;
        if (temp_v0 != 0) {
            this->unk290 = temp_v0 - 1;
        }
        func_80B18F50(&this->actor, globalCtx);
        this->actionFunc(this, globalCtx);
        if (func_80B18A04 != this->actionFunc) {
            Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
            if ((this->actor.params == 1) && (func_80B17A58 == this->actionFunc)) {
                temp_f0 = (this->unk144.animCurrentFrame * 0.016666668f) + 1.0f;
                phi_f0_2 = temp_f0;
                if (temp_f0 > 1.3f) {
                    phi_f0_2 = 1.3f;
                }
                phi_f0 = phi_f0_2 * (f32) this->unk32C.dim.radius;
            } else {
                phi_f0 = (f32) this->unk32C.dim.radius;
            }
            Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 30.0f, phi_f0, 0.0f, 0x1DU);
            temp_v0_2 = this->actor.floorPoly;
            if ((temp_v0_2 != 0) && (((f32) temp_v0_2->normal.y * 0.00003051851f) < 0.7f)) {
                Math_Vec3f_Copy(&this->actor.world.pos, &this->actor.prevPos);
                if (this->unk28A == 0) {
                    temp_v0_3 = this->actor.floorPoly;
                    this->unk28E = Math_FAtan2F((f32) temp_v0_3->normal.z * 0.00003051851f, (f32) temp_v0_3->normal.x * 0.00003051851f);
                    this->unk28A = 1;
                }
            } else {
                func_800BE3D0(this, this->actor.shape.rot.y, &this->actor.shape);
            }
            temp_a1 = &this->unk32C;
            sp28 = temp_a1;
            Collider_UpdateCylinder(&this->actor, temp_a1);
            if ((this->unk32C.base.acFlags & 1) != 0) {
                CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &sp28->base);
            }
            CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &sp28->base);
            if (EnSnowman_Draw == this->actor.draw) {
                Actor_SetHeight(&this->actor, this->actor.scale.y * 1800.0f);
            } else {
                Actor_SetHeight(&this->actor, this->actor.scale.y * 720.0f);
            }
            if (this->unk2A0 > 0.0f) {
                Math_StepToF(&this->unk2A0, 0.0f, 0.05f);
                temp_f0_2 = (this->unk2A0 + 1.0f) * 0.275f;
                this->unk2A4 = temp_f0_2;
                if (temp_f0_2 > 0.55f) {
                    this->unk2A4 = 0.55f;
                    return;
                }
                this->unk2A4 = this->unk2A4;
                // Duplicate return node #24. Try simplifying control flow for better match
                return;
            }
            // Duplicate return node #24. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #24. Try simplifying control flow for better match
    }
}

void func_80B19474(Actor *this, GlobalContext *globalCtx) {
    ColliderCylinder *temp_s0;
    CollisionCheckContext *temp_s1;
    Gfx **temp_s1_2;
    PosRot *temp_s3;
    PosRot *temp_s3_2;
    s16 temp_v0;
    u16 temp_v0_2;
    s32 phi_s0;
    Gfx **phi_s1;
    Vec3f *phi_s3;

    temp_v0 = this->unk28C;
    if ((s32) temp_v0 > 0) {
        this->unk28C = (s16) (temp_v0 - 1);
    } else {
        this->unk33E = (u8) (this->unk33E | 1);
    }
    temp_v0_2 = this->bgCheckFlags;
    if (((temp_v0_2 & 8) != 0) || ((temp_v0_2 & 1) != 0) || ((temp_v0_2 & 0x10) != 0) || ((this->unk33C & 2) != 0) || ((this->unk33D & 2) != 0) || ((this->unk33E & 2) != 0)) {
        temp_s3 = &this->world;
        phi_s3 = &temp_s3->pos;
        if (this->params == 3) {
            temp_s3_2 = &this->world;
            phi_s0 = 0xA;
            phi_s1 = &D_80B19AA0;
            phi_s3 = &temp_s3_2->pos;
            do {
                EffectSsHahen_SpawnBurst(globalCtx, &temp_s3_2->pos, 5.0f, 0, (s16) phi_s0, (s16) (phi_s0 >> 1), (s16) 3, (s16) 0x1C4, (s16) 0x14, *phi_s1);
                temp_s1_2 = phi_s1 + 4;
                phi_s0 = (s32) (s16) (phi_s0 * 2);
                phi_s1 = temp_s1_2;
            } while (temp_s1_2 != &D_80B19AAC);
            func_800B0DE0(globalCtx, &temp_s3_2->pos, &D_801D15B0, &D_801D15B0, &D_80B19A80, &D_80B19A84, (s16) 0x1F4, (s16) 0x1E);
            Audio_PlaySoundAtPosition(globalCtx, &temp_s3_2->pos, 0x14, 0x28FDU);
        } else {
            Math_Vec3f_Copy(this + 0x2B4, &temp_s3->pos);
            func_80B17144((EnSnowman *) this, globalCtx);
            Audio_PlaySoundAtPosition(globalCtx, &temp_s3->pos, 0x14, 0x28F5U);
        }
        Audio_PlaySoundAtPosition(globalCtx, phi_s3, 0x14, 0x1837U);
        Actor_MarkForDeath(this);
        return;
    }
    this->shape.rot.x += 0xF00;
    Actor_SetVelocityAndMoveYRotationAndGravity(this);
    Actor_UpdateBgCheckInfo(globalCtx, this, 30.0f, (f32) this->unk36C * 0.6f, (f32) (this->unk36E - this->unk370), 0x1FU);
    temp_s0 = this + 0x32C;
    Collider_UpdateCylinder(this, temp_s0);
    temp_s1 = &globalCtx->colChkCtx;
    CollisionCheck_SetAT(globalCtx, temp_s1, &temp_s0->base);
    CollisionCheck_SetAC(globalCtx, temp_s1, &temp_s0->base);
    CollisionCheck_SetOC(globalCtx, temp_s1, &temp_s0->base);
}

void func_80B19718(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    s8 *sp2C;
    GraphicsContext *temp_s1;
    Vec3f *temp_s0;
    s32 *temp_s0_2;
    s8 *temp_t7;
    s8 temp_v0;
    Vec3f *phi_s0;
    Vec3f *phi_s1;

    temp_t7 = arg1 + &D_80B19AD0;
    sp2C = temp_t7;
    temp_v0 = *temp_t7;
    if (temp_v0 != -1) {
        if (temp_v0 == 4) {
            phi_s0 = &D_80B19ADC;
            phi_s1 = arg4 + 0x2F0;
            do {
                SysMatrix_MultiplyVector3fByState(phi_s0, phi_s1);
                temp_s0 = phi_s0 + 0xC;
                phi_s0 = temp_s0;
                phi_s1 += 0xC;
            } while (temp_s0 != &D_80B19B18);
        } else {
            SysMatrix_GetStateTranslation(arg4 + (temp_v0 * 0xC) + 0x2C0);
        }
    }
    if ((sp2C == &D_80B19ADA) && (arg4->unk288 == 1)) {
        temp_s1 = *arg0;
        temp_s0_2 = temp_s1->polyOpa.p;
        if (arg4->params != 1) {
            SysMatrix_InsertTranslation(800.0f, -600.0f, 0.0f, 1);
        } else {
            SysMatrix_InsertTranslation(300.0f, -2300.0f, -1900.0f, 1);
            Matrix_Scale(0.3f, 0.3f, 0.3f, 1);
        }
        temp_s0_2->unk0 = 0xDA380003;
        temp_s0_2->unk4 = Matrix_NewMtx(*arg0);
        temp_s0_2->unk8 = 0xDE000000;
        temp_s0_2->unkC = (s32) *(&D_80B19A94 + (arg4->params * 4));
        temp_s1->polyOpa.p = temp_s0_2 + 0x10;
        SysMatrix_GetStateTranslation(arg4 + 0x2B4);
    }
}

void EnSnowman_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnSnowman *this = (EnSnowman *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, NULL, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80B19718, &this->actor);
    func_800BE680(globalCtx, &this->actor, (Vec3f []) &this->unk2C0, 9, this->unk2A4 * this->unk294, 0.0f, this->unk2A0, (u8) (s32) this->unk28B);
}

void func_80B19948(Actor *thisx, GlobalContext *globalCtx) {
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, thisx->unk18C, thisx->unk1A8, (s32) thisx->unk18A, NULL, NULL, thisx);
}

void func_80B19998(Actor *thisx, GlobalContext *globalCtx) {
    func_800BDFC0(globalCtx, *(&D_80B19A88 + (thisx->params * 4)));
}

