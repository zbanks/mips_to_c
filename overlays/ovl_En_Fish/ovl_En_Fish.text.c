f32 func_8091D630(f32 *arg0, PosRot *arg1);         /* static */
void func_8091D660(EnFish *arg0, EnFish *);         /* static */
void func_8091D6C4(Actor *arg0);                    /* static */
void func_8091D728(EnFish *arg0);                   /* static */
void func_8091D7C4(Actor *arg0);                    /* static */
void func_8091D840(Actor *arg0, GlobalContext *arg1, s32 arg2, f32 arg3); /* static */
void func_8091D904(Actor *arg0);                    /* static */
void *func_8091D944(Actor *arg0, void *arg1);       /* static */
s32 func_8091DA14(Actor *arg1, GlobalContext *);    /* static */
void func_8091DD48(EnFish *arg0);                   /* static */
s32 func_8091DDF4(Actor *arg0, GlobalContext *arg1); /* static */
void func_8091DEE4(EnFish *arg0);                   /* static */
void func_8091DF68(EnFish *arg0, GlobalContext *arg1); /* static */
void func_8091E070(EnFish *arg0);                   /* static */
void func_8091E128(EnFish *arg0, GlobalContext *arg1); /* static */
void func_8091E2E0(EnFish *arg0);                   /* static */
void func_8091E34C(EnFish *arg0, GlobalContext *arg1); /* static */
void func_8091E5EC(EnFish *arg0);                   /* static */
void func_8091E658(EnFish *arg0, GlobalContext *arg1); /* static */
void func_8091E810(EnFish *arg0);                   /* static */
void func_8091E880(Actor *arg0, GlobalContext *arg1); /* static */
void func_8091E9A4(Actor *arg0);                    /* static */
void func_8091EAF0(Actor *arg0, GlobalContext *arg1); /* static */
void func_8091ECF4(Actor *arg0);                    /* static */
void func_8091ED70(Actor *arg0);                    /* static */
void func_8091EF30(Actor *arg0);                    /* static */
void func_8091EFE8(Actor *arg0);                    /* static */
void func_8091F344(EnFish *arg0);                   /* static */
void func_8091F3BC(EnFish *arg0, GlobalContext *arg1); /* static */
void func_8091F5A4(Actor *arg0, GlobalContext *arg1); /* static */
void func_8091F830(Actor *arg0);                    /* static */
void func_8091F994(Actor *this, GlobalContext *globalCtx); /* static */
extern FlexSkeletonHeader D_0402F028;
static ColliderJntSphElementInit D_8091FA60 = {{0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1}, {0, {{0, 0, 0}, 5}, 0x64}};
static ColliderJntSphInit D_8091FA84 = {{0xA, 0, 0, 0x39, 0x10, 0}, 1, &D_8091FA60};
static ? D_8091FA94;                                /* unable to generate initializer */
static InitChainEntry D_8091FAC0;                   /* unable to generate initializer */
static ? D_8091FACC;                                /* unable to generate initializer */
static ? D_8091FAD4;                                /* unable to generate initializer */
static ? D_8091FADC;                                /* unable to generate initializer */
static ? D_8091FAE8;                                /* unable to generate initializer */

typedef struct EnFish {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderJntSph unk144;             /* inferred */
    /* 0x0164 */ ColliderJntSphElement unk164;      /* inferred */
    /* 0x01A4 */ SkelAnime unk1A4;                  /* inferred */
    /* 0x01E8 */ Vec3s unk1E8;                      /* inferred */
    /* 0x01EE */ char pad1EE[0x24];                 /* maybe part of unk1E8[7]? */
    /* 0x0212 */ Vec3s unk212;                      /* inferred */
    /* 0x0218 */ char pad218[0x24];                 /* maybe part of unk212[7]? */
    /* 0x023C */ void (*unk23C)(EnFish *, GlobalContext *); /* inferred */
    /* 0x0240 */ s16 unk240;                        /* inferred */
    /* 0x0242 */ s16 unk242;                        /* inferred */
    /* 0x0244 */ s16 unk244;                        /* inferred */
    /* 0x0246 */ s16 unk246;                        /* inferred */
    /* 0x0248 */ s32 unk248;                        /* inferred */
    /* 0x024C */ f32 unk24C;                        /* inferred */
    /* 0x0250 */ f32 unk250;                        /* inferred */
    /* 0x0254 */ f32 unk254;                        /* inferred */
    /* 0x0258 */ f32 unk258;                        /* inferred */
    /* 0x025C */ f32 unk25C;                        /* inferred */
    /* 0x0260 */ f32 unk260;                        /* inferred */
    /* 0x0264 */ s16 unk264;                        /* inferred */
    /* 0x0266 */ s16 unk266;                        /* inferred */
    /* 0x0268 */ s16 unk268;                        /* inferred */
    /* 0x026A */ s16 unk26A;                        /* inferred */
    /* 0x026C */ s16 unk26C;                        /* inferred */
    /* 0x026E */ s16 unk26E;                        /* inferred */
    /* 0x0270 */ s16 unk270;                        /* inferred */
    /* 0x0272 */ s16 unk272;                        /* inferred */
    /* 0x0274 */ s16 unk274;                        /* inferred */
    /* 0x0276 */ s8 unk276;                         /* inferred */
    /* 0x0277 */ char pad277[0x1];                  /* maybe part of unk276[2]? */
    /* 0x0278 */ s8 unk278;                         /* inferred */
    /* 0x0279 */ char pad279[0x3];                  /* maybe part of unk278[4]? */
} EnFish;                                           /* size 0x27C */

f32 func_8091D630(f32 *arg0, PosRot *arg1) {
    f32 temp_f12;
    f32 temp_f2;

    temp_f2 = arg0->unk0 - arg1->pos.x;
    temp_f12 = arg0->unk8 - arg1->pos.z;
    return (temp_f2 * temp_f2) + (temp_f12 * temp_f12);
}

void func_8091D660(EnFish *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x1A4, (AnimationHeader *) &D_0402F0EC, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0402F0EC), (u8) 1, 2.0f);
}

void func_8091D6C4(Actor *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x1A4, (AnimationHeader *) &D_0402E65C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0402E65C), (u8) 1, 2.0f);
}

void func_8091D728(EnFish *arg0) {
    f32 temp_f0;
    f32 temp_f2;
    f32 phi_f0;

    temp_f0 = arg0->unk25C;
    temp_f2 = arg0->unk258 * temp_f0;
    arg0->actor.scale.x = arg0->unk250 * temp_f0;
    arg0->actor.scale.y = arg0->unk254 * temp_f0;
    arg0->actor.scale.z = temp_f2;
    if (temp_f2 > 0.00001f) {
        phi_f0 = 1.0f / arg0->actor.scale.z;
    } else {
        phi_f0 = 0.0f;
    }
    arg0->unk264 = (s16) (s32) (16.0f * phi_f0);
    arg0->unk266 = (s16) (s32) (12.0f * phi_f0);
}

void func_8091D7C4(Actor *arg0) {
    s16 *sp20;
    s16 *temp_a0;
    s16 temp_a1;

    temp_a0 = arg0 + 0x30;
    sp20 = temp_a0;
    Math_ScaledStepToS(temp_a0, arg0->unk268, arg0->unk26E);
    Math_ScaledStepToS(arg0 + 0x32, arg0->unk26A, arg0->unk270);
    temp_a1 = arg0->unk26C;
    if (temp_a1 != arg0->world.rot.z) {
        Math_ScaledStepToS(arg0 + 0x34, temp_a1, arg0->unk272);
    }
    arg0->unkBC = (unaligned s32) sp20->unk0;
    arg0->shape.rot.z = sp20->unk4;
}

void func_8091D840(Actor *arg0, GlobalContext *arg1, s32 arg2, f32 arg3) {
    s32 temp_s0;
    s32 phi_s0;

    phi_s0 = 0;
    if (arg2 > 0) {
        do {
            EffectSsBubble_Spawn(arg1, arg0 + 0x24, 0.0f, arg3, arg3, (Rand_ZeroOne() * 0.09f) + 0.06f);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != arg2);
    }
}

void func_8091D904(Actor *arg0) {
    arg0->unk242 = 0x190;
    arg0->unk25C = (f32) (arg0->unk260 * 0.1f);
    func_8091D728();
    arg0->draw = NULL;
}

void *func_8091D944(Actor *arg0, void *arg1) {
    f32 temp_f0;
    void *temp_s0;
    void *temp_s0_2;
    void *phi_s0;
    void *phi_s1;
    f32 phi_f20;
    void *phi_s1_2;
    void *phi_s1_3;

    temp_s0 = arg1->unk1D08;
    phi_s0 = temp_s0;
    phi_s1 = NULL;
    phi_f20 = 3.4028235e38f;
    phi_s1_2 = NULL;
    if (temp_s0 != 0) {
        do {
            phi_s1_3 = phi_s1;
            phi_s1_3 = phi_s1;
            if ((phi_s0->unk0 == 0x17) && (phi_s0->unk1C == 2) && (arg0->room == phi_s0->unk3)) {
                temp_f0 = Math3D_DistanceSquared(phi_s0 + 0x24, arg0 + 0x24);
                if (phi_s1 == 0) {
                    phi_s1_3 = phi_s0;
                    goto block_8;
                }
                if (temp_f0 < phi_f20) {
block_8:
                    phi_f20 = temp_f0;
                }
            }
            temp_s0_2 = phi_s0->unk12C;
            phi_s0 = temp_s0_2;
            phi_s1 = phi_s1_3;
            phi_s1_2 = phi_s1_3;
        } while (temp_s0_2 != 0);
    }
    return phi_s1_2;
}

s32 func_8091DA14(Actor *arg1) {
    s32 temp_v0;
    s32 phi_v0;

    temp_v0 = arg1->unkA4 == 0x2F;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        phi_v0 = func_8091D944() != 0;
    }
    return phi_v0;
}

void EnFish_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnFish *this = (EnFish *) thisx;
    s16 sp36;
    ColliderJntSph *sp30;
    ColliderJntSph *temp_a1;
    f32 temp_f0;

    temp_a1 = &this->unk144;
    sp30 = temp_a1;
    sp36 = this->actor.params;
    Collider_InitJntSph(globalCtx, temp_a1);
    if (sp36 == 2) {
        this->actor.draw = NULL;
        this->actor.update = func_8091F994;
        return;
    }
    Actor_ProcessInitChain(&this->actor, &D_8091FAC0);
    this->unk250 = 1.0f;
    this->unk254 = 1.0f;
    if (sp36 == -1) {
        this->unk258 = (Rand_ZeroOne() * 0.9f) + 0.6f;
        this->unk25C = ((Rand_ZeroOne() * 1.2f) + 0.6f) * 0.01f;
    } else {
        this->unk258 = 1.0f;
        this->unk25C = 0.01f;
    }
    this->unk260 = this->unk25C;
    func_8091D728(this);
    temp_f0 = this->unk258 * this->unk25C * 100.0f;
    if (temp_f0 < 1.02f) {
        this->unk278 = 2;
    } else if (temp_f0 < 2.0f) {
        this->unk278 = 1;
    } else {
        this->unk278 = 0;
    }
    SkelAnime_InitSV(globalCtx, &this->unk1A4, &D_0402F028, (AnimationHeader *) &D_0402F0EC, &this->unk1E8, &this->unk212, 7);
    Collider_SetJntSph(globalCtx, sp30, &this->actor, &D_8091FA84, &this->unk164);
    this->actor.colChkInfo.mass = (u8) (u32) (this->unk25C * 30.0f);
    this->unk244 = (s16) (Rand_Next() >> 0x10);
    this->unk246 = (s16) (Rand_Next() >> 0x10);
    if (sp36 == 0) {
        this->actor.flags |= 0x10;
        ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 8.0f);
        func_8091E810(this);
        return;
    }
    if (sp36 == 1) {
        func_8091F344(this);
        return;
    }
    func_8091E070(this);
}

void EnFish_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnFish *this = (EnFish *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk144);
}

void func_8091DD48(EnFish *arg0) {
    f32 sp18;
    f32 temp_f2;
    s16 temp_a0;

    temp_a0 = arg0->unk244;
    arg0 = arg0;
    sp18 = Math_SinS(temp_a0);
    arg0->actor.shape.yOffset += (Math_SinS(arg0->unk246) * 5.0f) + (sp18 * 10.0f);
    temp_f2 = arg0->actor.shape.yOffset;
    if (temp_f2 < -200.0f) {
        arg0->actor.shape.yOffset = -200.0f;
        return;
    }
    if (temp_f2 > 200.0f) {
        arg0->actor.shape.yOffset = 200.0f;
    }
}

s32 func_8091DDF4(Actor *arg0, GlobalContext *arg1) {
    void *sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    s16 temp_a0;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    if ((arg0->xzDistToPlayer < 50.0f) && (temp_a0 = arg0->yawTowardsPlayer, arg0 = arg0, sp28 = temp_v0, sp1C = (Math_SinS((s16) (temp_a0 + 0x8000)) * 30.0f) + temp_v0->world.pos.x, sp20 = temp_v0->world.pos.y, sp24 = (Math_CosS((s16) (arg0->yawTowardsPlayer + 0x8000)) * 30.0f) + temp_v0->world.pos.z, (func_8091D630(&sp1C, arg0 + 0x24) <= 900.0f))) {
        return 1;
    }
    return 0;
}

void func_8091DEE4(EnFish *arg0) {
    s16 temp_a1;

    arg0->actor.gravity = 0.0f;
    arg0->actor.minVelocityY = 0.0f;
    temp_a1 = *(&D_8091FACC + (arg0->unk278 * 2));
    arg0 = arg0;
    arg0->unk240 = Rand_S16Offset(5, temp_a1);
    arg0->unk248 = 0;
    arg0->unk26E = 0x190;
    arg0->unk272 = 0x190;
    arg0->unk268 = 0;
    arg0->unk26C = 0;
    func_8091D660(arg0);
    arg0->unk23C = func_8091DF68;
    arg0->unk24C = 0.0f;
}

void func_8091DF68(EnFish *arg0, void *arg1) {
    f32 temp_f0;

    func_8091DD48(arg0);
    Math_SmoothStepToF(arg0 + 0x70, 0.0f, 0.05f, 0.3f, 0.0f);
    temp_f0 = (arg0->actor.speedXZ * 1.4f) + 0.8f;
    if (temp_f0 > 2.0f) {
        arg0->unk1A4.animPlaybackSpeed = 2.0f;
    } else {
        arg0->unk1A4.animPlaybackSpeed = temp_f0;
    }
    arg0->unk270 = (s16) ((s32) arg0->unk270 >> 1);
    if ((s32) arg0->unk240 <= 0) {
        func_8091E070(arg0);
        return;
    }
    if (arg0 == arg0->actor.child) {
        func_8091E5EC(arg0);
        return;
    }
    if ((arg0->actor.xzDistToPlayer < 60.0f) || ((s32) arg0->unk276 > 0)) {
        func_8091E2E0(arg0);
    }
}

void func_8091E070(EnFish *arg0) {
    s16 phi_a1;

    arg0->actor.gravity = 0.0f;
    arg0->actor.minVelocityY = 0.0f;
    if ((Rand_Next() & 3) == 0) {
        if (((Rand_Next() & 7) == 0) && (arg0->unk278 != 0)) {
            phi_a1 = 0x50;
        } else {
            phi_a1 = 0x2D;
        }
    } else {
        phi_a1 = *(&D_8091FAD4 + (arg0->unk278 * 2));
    }
    arg0->unk240 = Rand_S16Offset(0xF, phi_a1);
    arg0->unk248 = 0;
    arg0->unk26E = 0x190;
    arg0->unk272 = 0x190;
    arg0->unk26C = 0;
    func_8091D660(arg0);
    arg0->unk23C = func_8091E128;
}

void func_8091E128(EnFish *arg0, void *arg1) {
    PosRot *sp2C;
    PosRot *sp28;
    Actor *temp_v0;
    PosRot *temp_a0;
    PosRot *temp_a1;
    f32 temp_f0;

    func_8091DD48(arg0);
    Math_SmoothStepToF(&arg0->actor.speedXZ, 1.8f, 0.08f, 0.4f, 0.0f);
    temp_a0 = &arg0->actor.world;
    temp_a1 = &arg0->actor.home;
    sp28 = temp_a1;
    sp2C = temp_a0;
    if ((func_8091D630(&temp_a0->pos.x, temp_a1) > 6400.0f) || ((s32) arg0->unk240 < 4)) {
        arg0->unk270 = arg0->unk264;
        arg0->unk26A = Math_Vec3f_Yaw(&temp_a0->pos, &temp_a1->pos);
        arg0->unk24C = 1.0f;
    } else {
        temp_v0 = arg0->actor.child;
        if ((temp_v0 != 0) && (arg0 != temp_v0)) {
            arg0->unk270 = arg0->unk264;
            arg0->unk26A = Math_Vec3f_Yaw(&temp_a0->pos, &arg0->actor.child->world.pos);
            arg0->unk24C = 1.2f;
        } else {
            arg0->unk270 = (s16) ((s32) arg0->unk270 >> 2);
            arg0->unk24C = 0.0f;
        }
    }
    temp_f0 = (arg0->actor.speedXZ * 1.5f) + 0.8f;
    if (temp_f0 > 4.0f) {
        arg0->unk1A4.animPlaybackSpeed = 4.0f;
    } else {
        arg0->unk1A4.animPlaybackSpeed = temp_f0;
    }
    if ((s32) arg0->unk240 <= 0) {
        func_8091DEE4(arg0);
        return;
    }
    if (arg0 == arg0->actor.child) {
        func_8091E5EC(arg0);
        return;
    }
    if ((arg0->actor.xzDistToPlayer < 60.0f) || ((s32) arg0->unk276 > 0)) {
        func_8091E2E0(arg0);
    }
}

void func_8091E2E0(EnFish *arg0) {
    arg0->actor.gravity = 0.0f;
    arg0->actor.minVelocityY = 0.0f;
    arg0 = arg0;
    arg0->unk240 = Rand_S16Offset(0xA, 0x28);
    arg0->unk248 = 0;
    arg0->unk26E = 0x190;
    arg0->unk272 = 0x190;
    arg0->unk268 = 0;
    arg0->unk26C = 0;
    func_8091D660(arg0);
    arg0->unk23C = func_8091E34C;
}

void func_8091E34C(EnFish *arg0, void *arg1) {
    s32 sp3C;
    s32 sp38;
    PosRot *sp2C;
    PosRot *sp28;
    Actor *temp_v0;
    PosRot *temp_a0;
    PosRot *temp_a1;
    f32 temp_f0;
    s16 temp_v1;
    s32 temp_v0_2;
    s32 phi_t6;

    phi_t6 = 0;
    if (arg0->actor.xzDistToPlayer < 60.0f) {
        phi_t6 = 1;
    }
    sp3C = phi_t6;
    sp38 = (s32) arg0->unk276 > 0;
    func_8091DD48(arg0);
    Math_SmoothStepToF(&arg0->actor.speedXZ, 4.2f, 0.08f, 1.4f, 0.0f);
    temp_a0 = &arg0->actor.world;
    temp_a1 = &arg0->actor.home;
    sp28 = temp_a1;
    sp2C = temp_a0;
    if (func_8091D630(&temp_a0->pos.x, temp_a1) > 25600.0f) {
        arg0->unk270 = arg0->unk264;
        arg0->unk26A = Math_Vec3f_Yaw(&temp_a0->pos, &temp_a1->pos);
        arg0->unk24C = 0.8f;
    } else {
        temp_v0 = arg0->actor.child;
        if ((temp_v0 != 0) && (arg0 != temp_v0)) {
            arg0->unk270 = arg0->unk266;
            arg0->unk26A = Math_Vec3f_Yaw(&temp_a0->pos, &arg0->actor.child->world.pos);
            arg0->unk24C = 1.0f;
        } else if (sp3C != 0) {
            arg0->unk26A = arg0->actor.yawTowardsPlayer + 0x8000;
            temp_v0_2 = arg1->unk9C;
            if ((temp_v0_2 & 0x10) == 0) {
                if ((temp_v0_2 & 0x20) == 0) {
                    arg0->unk26A += 0x2000;
                }
            } else if ((temp_v0_2 & 0x20) == 0) {
                arg0->unk26A += -0x2000;
            }
            arg0->unk270 = arg0->unk266;
            arg0->unk24C = 1.2f;
        } else if (sp38 != 0) {
            if ((arg1->unk9C & 0x10) == 0) {
                temp_v1 = arg0->unk274;
                if ((s32) (s16) (arg0->actor.shape.rot.y - temp_v1) < 0) {
                    arg0->unk26A = temp_v1 - 0x4000;
                } else {
                    arg0->unk26A = temp_v1 + 0x4000;
                }
            } else {
                arg0->unk26A = arg0->unk274 + 0x8000;
            }
            arg0->unk270 = arg0->unk266;
            arg0->unk24C = 1.2f;
        } else {
            arg0->unk270 = (s16) ((s32) arg0->unk270 >> 2);
            arg0->unk24C = 0.0f;
        }
    }
    temp_f0 = (arg0->actor.speedXZ * 1.5f) + 0.8f;
    if (temp_f0 > 4.0f) {
        arg0->unk1A4.animPlaybackSpeed = 4.0f;
    } else {
        arg0->unk1A4.animPlaybackSpeed = temp_f0;
    }
    if (((s32) arg0->unk240 <= 0) || ((sp3C == 0) && (sp38 == 0))) {
        func_8091DEE4(arg0);
        return;
    }
    if (arg0 == arg0->actor.child) {
        func_8091E5EC(arg0);
    }
}

void func_8091E5EC(EnFish *arg0) {
    EnFish *temp_a2;

    temp_a2 = arg0;
    temp_a2->actor.gravity = 0.0f;
    temp_a2->actor.minVelocityY = 0.0f;
    temp_a2->unk26E = 0x190;
    temp_a2->unk272 = 0x190;
    temp_a2->unk268 = 0;
    temp_a2->unk26C = 0;
    arg0 = temp_a2;
    func_8091D660(temp_a2, temp_a2);
    arg0->unk240 = Rand_S16Offset(0xA, 0x1E);
    arg0->unk248 = 0;
    arg0->unk23C = func_8091E658;
}

void func_8091E658(EnFish *arg0, void *arg1) {
    void *sp48;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s16 sp32;
    PosRot *sp2C;
    PosRot *sp28;
    PosRot *temp_a0;
    PosRot *temp_a1;
    f32 temp_f0;
    s32 temp_a0_2;
    s32 phi_a0;

    sp48 = arg1->unk1CCC;
    func_8091DD48(arg0);
    Math_SmoothStepToF(&arg0->actor.speedXZ, 1.8f, 0.1f, 0.5f, 0.0f);
    temp_a0 = &arg0->actor.world;
    temp_a1 = &arg0->actor.home;
    sp28 = temp_a1;
    sp2C = temp_a0;
    if (func_8091D630(&temp_a0->pos.x, temp_a1) > 6400.0f) {
        arg0->unk270 = arg0->unk264;
        arg0->unk26A = Math_Vec3f_Yaw(&sp2C->pos, &temp_a1->pos);
        arg0->unk24C = 1.0f;
    } else {
        if ((arg1->unk9C & 0x40) == 0) {
            phi_a0 = (arg0->actor.yawTowardsPlayer + 0x9000) << 0x10;
        } else {
            phi_a0 = (arg0->actor.yawTowardsPlayer + 0x7000) << 0x10;
        }
        temp_a0_2 = phi_a0 >> 0x10;
        sp32 = (s16) temp_a0_2;
        sp38 = (Math_SinS((s16) temp_a0_2) * 20.0f) + sp48->unk24;
        sp3C = sp48->unk28;
        sp40 = (Math_CosS((s16) temp_a0_2) * 20.0f) + sp48->unk2C;
        arg0->unk270 = arg0->unk264;
        arg0->unk26A = Math_Vec3f_Yaw(&sp2C->pos, (Vec3f *) &sp38);
        arg0->unk24C = 1.2f;
    }
    temp_f0 = (arg0->actor.speedXZ * 1.5f) + 0.8f;
    if (temp_f0 > 4.0f) {
        arg0->unk1A4.animPlaybackSpeed = 4.0f;
    } else {
        arg0->unk1A4.animPlaybackSpeed = temp_f0;
    }
    if ((s32) arg0->unk240 <= 0) {
        func_8091DEE4(arg0);
    }
}

void func_8091E810(EnFish *arg0) {
    arg0->unk270 = 0;
    arg0->unk26A = 0;
    arg0->actor.gravity = -1.0f;
    arg0->actor.minVelocityY = -10.0f;
    arg0->actor.shape.yOffset = 0.0f;
    func_8091D6C4();
    arg0->unk248 = 5;
    arg0->unk23C = func_8091E880;
    arg0->unk240 = 0x12C;
    arg0->unk24C = 0.0f;
}

void func_8091E880(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    Math_SmoothStepToF(arg0 + 0x70, 0.0f, 0.1f, 0.1f, 0.0f);
    temp_v0 = arg0->bgCheckFlags;
    arg0->unk26E = 0x43;
    arg0->unk272 = 0x43;
    arg0->unk268 = 0x4000;
    arg0->unk26C = -0x4000;
    if ((temp_v0 & 1) != 0) {
        arg0->unk240 = 0x190;
        func_8091E9A4(arg0);
        return;
    }
    if ((temp_v0 & 0x20) != 0) {
        Audio_PlayActorSound2(arg0, 0x28C5U);
        func_8091D840(arg0, arg1, 0xA, 15.0f);
        if (func_8091DA14(arg0, arg1) != 0) {
            func_8091EF30(arg0);
            return;
        }
        func_8091ECF4(arg0);
        return;
    }
    if (((s32) arg0->unk240 <= 0) && (arg0->params == 0) && (arg0->floorHeight < -31990.0f)) {
        Actor_MarkForDeath(arg0);
    }
}

void func_8091E9A4(Actor *arg0) {
    s32 sp24;
    f32 temp_f0;
    s32 phi_v0;

    arg0->gravity = -1.0f;
    arg0->minVelocityY = -10.0f;
    temp_f0 = Rand_ZeroOne();
    if (temp_f0 < 0.1f) {
        arg0->velocity.y = (Rand_ZeroOne() * 3.0f) + 2.5f;
        phi_v0 = 1;
    } else if (temp_f0 < 0.2f) {
        arg0->velocity.y = (Rand_ZeroOne() * 1.2f) + 0.2f;
        phi_v0 = 1;
    } else {
        arg0->velocity.y = 0.0f;
        phi_v0 = 0;
        if (Rand_ZeroOne() < 0.2f) {
            phi_v0 = 1;
        }
    }
    arg0->shape.yOffset = 300.0f;
    sp24 = phi_v0;
    func_8091D6C4(arg0);
    arg0->unk23C = func_8091EAF0;
    arg0->unk248 = 5;
    arg0->unk24C = 0.0f;
    if ((phi_v0 != 0) && (arg0->draw != 0)) {
        Audio_PlayActorSound2(arg0, 0x2869U);
    }
}

void func_8091EAF0(Actor *arg0, GlobalContext *arg1) {
    s32 sp40;
    f32 sp38;
    f32 sp34;
    s32 sp2C;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_a1;
    s32 temp_f6;
    s32 temp_v0;
    u16 temp_v0_4;
    s16 phi_v1;

    temp_v0 = arg1->state.frames;
    sp40 = temp_v0;
    Math_SmoothStepToF(arg0 + 0x70, Rand_ZeroOne() * 0.2f, 0.1f, 0.1f, 0.0f);
    temp_a1 = temp_v0 & 4;
    temp_f6 = (s32) ((f32) ((s32) ((((temp_v0 >> 5) & 2) | ((temp_v0 >> 2) & 1)) << 0x1B) >> 0x10) * 0.3f);
    phi_v1 = (s16) temp_f6;
    if (temp_a1 != 0) {
        phi_v1 = (s16) (temp_f6 * -1);
    }
    arg0->unk268 = phi_v1;
    arg0->unk26E = 0xA6B;
    arg0->unk26C = 0x4000;
    arg0->unk272 = 0x29B;
    sp2C = temp_a1;
    sp34 = Math_SinS(arg0->unk246);
    sp38 = Math_SinS(arg0->unk244);
    arg0->unk270 = (s16) (s32) (Rand_ZeroOne() * ((sp38 * 1333.0f) + (sp34 * 667.0f)));
    temp_v0_2 = arg0->unk270;
    if ((s32) temp_v0_2 >= 0) {
        arg0->unk26A = (s16) (arg0->world.rot.y + 0x4000);
    } else {
        arg0->unk270 = (s16) -(s32) temp_v0_2;
        arg0->unk26A = (s16) (arg0->world.rot.y - 0x4000);
    }
    temp_v0_3 = arg0->unk240;
    if ((s32) temp_v0_3 <= 0) {
        Actor_MarkForDeath(arg0);
        return;
    }
    if ((s32) temp_v0_3 < 0x3D) {
        if (sp2C != 0) {
            arg0->draw = EnFish_Draw;
            return;
        }
        arg0->draw = NULL;
        return;
    }
    temp_v0_4 = arg0->bgCheckFlags;
    if ((temp_v0_4 & 0x20) != 0) {
        if (func_8091DA14(arg0, arg1) != 0) {
            func_8091EF30(arg0);
            return;
        }
        func_8091ECF4(arg0);
        return;
    }
    if ((temp_v0_4 & 1) != 0) {
        func_8091E9A4(arg0);
    }
}

void func_8091ECF4(Actor *arg0) {
    arg0->home.pos.x = arg0->world.pos.x;
    arg0->gravity = 0.0f;
    arg0->minVelocityY = 0.0f;
    arg0->shape.yOffset = 0.0f;
    arg0->flags |= 0x10;
    arg0->unk240 = 0xC8;
    arg0->home.pos.y = arg0->world.pos.y;
    arg0->home.pos.z = arg0->world.pos.z;
    func_8091D660();
    arg0->unk23C = func_8091ED70;
    arg0->unk248 = 5;
    arg0->unk24C = 0.0f;
}

void func_8091ED70(Actor *arg0) {
    s16 sp2E;
    f32 temp_f0;
    u16 temp_v0;

    if ((s32) arg0->unk240 >= 0xBF) {
        func_8091D840(arg0, (GlobalContext *)2, 0x41C80000);
    }
    Math_SmoothStepToF(&arg0->speedXZ, 2.8f, 0.1f, 0.4f, 0.0f);
    temp_v0 = arg0->bgCheckFlags;
    if (((temp_v0 & 8) != 0) || ((temp_v0 & 0x20) == 0)) {
        sp2E = Math_Vec3f_Yaw(&arg0->world.pos, &arg0->home.pos);
        arg0->home.rot.y = Rand_S16Offset(-0x64, 0x64) + sp2E;
        arg0->speedXZ *= 0.5f;
    }
    arg0->unk268 = 0;
    arg0->unk26C = 0;
    arg0->unk26E = 0x3E8;
    arg0->unk270 = 0x7D0;
    arg0->unk272 = 0x29B;
    arg0->unk26A = (s16) arg0->home.rot.y;
    if ((arg0->bgCheckFlags & 1) != 0) {
        Math_StepToF(&arg0->world.pos.y, arg0->home.pos.y - 4.0f, 2.0f);
    } else {
        Math_StepToF(&arg0->world.pos.y, arg0->home.pos.y - 10.0f, 2.0f);
    }
    if ((s32) arg0->unk240 < 0x64) {
        arg0->unk25C = (f32) (arg0->unk25C * 0.982f);
        func_8091D728((EnFish *) arg0);
    }
    temp_f0 = (arg0->speedXZ * 1.5f) + 1.0f;
    if (temp_f0 > 4.8f) {
        arg0->unk1C0 = 4.8f;
    } else {
        arg0->unk1C0 = temp_f0;
    }
    if ((s32) arg0->unk240 <= 0) {
        Actor_MarkForDeath(arg0);
    }
}

void func_8091EF30(Actor *arg0) {
    arg0->gravity = -2.0f;
    arg0->minVelocityY = -10.0f;
    arg0->shape.yOffset = 0.0f;
    if (arg0->velocity.y < -1.0f) {
        arg0->velocity.y = -1.0f;
    }
    arg0->flags |= 0x10;
    arg0->home.pos.y = arg0->world.pos.y - 20.0f;
    arg0->home.pos.x = arg0->world.pos.x;
    arg0->home.pos.z = arg0->world.pos.z;
    func_8091D660();
    arg0->unk240 = 0xF;
    arg0->unk279 = 0xA;
    arg0->unk23C = func_8091EFE8;
    arg0->unk248 = 5;
    arg0->unk24C = 0.0f;
}

void func_8091EFE8(Actor *arg0) {
    void *sp3C;
    f32 sp34;
    f32 sp30;
    s16 sp2E;
    s16 sp2C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    s16 temp_v1_2;
    s32 temp_a0;
    s32 temp_lo;
    s8 temp_v0_3;
    u16 temp_v0_2;
    u32 temp_v1;
    void *temp_v0;
    s32 phi_v1;
    s16 phi_v1_2;

    temp_v0 = func_8091D944(arg0);
    sp3C = temp_v0;
    if (temp_v0 == 0) {
        Actor_MarkForDeath(arg0);
        return;
    }
    if ((s32) arg0->unk240 <= 0) {
        arg0->unk240 = Rand_S16Offset(5, 0x23);
    }
    if (arg0->unk277 == 0) {
        Math_SmoothStepToF(&arg0->speedXZ, 2.8f, 0.1f, 0.4f, 0.0f);
        if ((s32) arg0->unk240 < 6) {
            arg0->speedXZ *= 0.75f;
        }
    }
    temp_v0_2 = arg0->bgCheckFlags;
    if (((temp_v0_2 & 8) != 0) && ((temp_v0_2 & 0x20) == 0)) {
        arg0->speedXZ *= 0.5f;
    }
    if ((Rand_Next() >> 0x1B) != 0) {
        if ((arg0->bgCheckFlags & 8) != 0) {
            if ((Rand_Next() >> 0x1E) != 0) {
                goto block_14;
            }
            goto block_15;
        }
block_14:
        if ((arg0->bgCheckFlags & 0x20) == 0) {
            goto block_15;
        }
    } else {
block_15:
        temp_f0 = Rand_ZeroOne();
        sp34 = (1.0f - (temp_f0 * temp_f0)) * (f32) sp3C->unk14;
        temp_f16 = Rand_ZeroOne() * (f32) sp3C->unk18;
        sp30 = temp_f16;
        temp_v1 = Rand_Next() >> 0x10;
        temp_a0 = temp_v1 << 0x10;
        sp2E = (s16) temp_v1;
        arg0->home.pos.x = (Math_SinS((s16) (temp_a0 >> 0x10)) * sp34) + sp3C->unk24;
        arg0->home.pos.y = sp3C->unk28 + temp_f16;
        arg0->home.pos.z = (Math_CosS(sp2E) * sp34) + sp3C->unk2C;
        sp2C = Math_Vec3f_Yaw(&arg0->world.pos, &arg0->home.pos);
        arg0->home.rot.y = Rand_S16Offset(-0x64, 0x64) + sp2C;
    }
    arg0->unk268 = Math_Vec3f_Pitch(&arg0->world.pos, &arg0->home.pos);
    arg0->unk26C = 0;
    temp_v1_2 = arg0->unk268 - arg0->shape.rot.x;
    arg0->unk26A = (s16) arg0->home.rot.y;
    phi_v1 = (s32) temp_v1_2;
    if ((s32) temp_v1_2 < 0) {
        phi_v1 = -(s32) temp_v1_2;
    }
    temp_lo = phi_v1 / 0xB;
    phi_v1_2 = (s16) temp_lo;
    if (temp_lo >= 0x321) {
        phi_v1_2 = 0x320;
    } else if (temp_lo < 0x64) {
        phi_v1_2 = 0x64;
    }
    temp_v0_3 = arg0->unk279;
    if ((s32) temp_v0_3 > 0) {
        arg0->unk279 = (s8) (temp_v0_3 - 1);
        arg0->unk26E = 0x3E8;
    } else {
        arg0->unk26E = phi_v1_2;
    }
    if ((s32) arg0->unk240 < 0xA) {
        arg0->unk270 = 0x190;
    } else {
        arg0->unk270 = 0x7D0;
    }
    temp_f12 = arg0->world.pos.y;
    temp_f2 = arg0->home.pos.y;
    arg0->unk272 = 0x29B;
    if (fabsf(temp_f12 - temp_f2) < 2.0f) {
        arg0->gravity = 0.0f;
    } else if (temp_f2 < temp_f12) {
        arg0->gravity = -0.15f;
    } else {
        arg0->gravity = 0.15f;
    }
    arg0->velocity.y *= 0.8f;
    temp_f0_2 = (arg0->speedXZ * 1.5f) + 1.0f;
    if (temp_f0_2 > 4.8f) {
        arg0->unk1C0 = 4.8f;
        return;
    }
    arg0->unk1C0 = temp_f0_2;
}

void func_8091F344(EnFish *arg0) {
    arg0->actor.gravity = 0.0f;
    arg0->actor.minVelocityY = 0.0f;
    arg0 = arg0;
    arg0->unk240 = Rand_S16Offset(5, 0x23);
    arg0->unk248 = 1;
    arg0->unk268 = 0;
    arg0->unk26C = 0;
    arg0->unk26E = 0x5DC;
    arg0->unk272 = 0;
    func_8091D660(arg0);
    arg0->unk23C = func_8091F3BC;
    arg0->unk24C = 0.0f;
}

void func_8091F3BC(EnFish *arg0, GlobalContext *arg1) {
    s32 sp40;
    ? *sp3C;
    PosRot *sp2C;
    PosRot *sp28;
    PosRot *temp_a0;
    PosRot *temp_a1;
    f32 temp_f2;
    s32 temp_v0;
    ? *phi_v1;
    f32 phi_f0;
    f32 phi_f0_2;

    temp_v0 = arg1->gameplayFrames;
    if ((arg0->actor.xzDistToPlayer < 60.0f) || ((temp_v0 & 0x1FF) < 0x14)) {
        if ((s32) arg0->unk240 < 0xC) {
            phi_v1 = &D_8091FAE8;
        } else {
            phi_v1 = &D_8091FADC;
        }
    } else {
        phi_v1 = &D_8091FADC;
        if ((s32) arg0->unk240 < 4) {
            phi_v1 = &D_8091FAE8;
        }
    }
    sp40 = temp_v0;
    sp3C = phi_v1;
    func_8091DD48(arg0);
    Math_StepToF(&arg0->actor.world.pos.y, arg0->actor.home.pos.y, 2.0f);
    Math_SmoothStepToF(&arg0->actor.speedXZ, phi_v1->unk0, phi_v1->unk4, phi_v1->unk8, 0.0f);
    temp_a0 = &arg0->actor.world;
    temp_a1 = &arg0->actor.home;
    arg0->unk24C = 0.0f;
    sp28 = temp_a1;
    sp2C = temp_a0;
    if (func_8091D630(&temp_a0->pos.x, temp_a1) > 225.0f) {
        arg0->unk26A = Math_Vec3f_Yaw(&temp_a0->pos, &temp_a1->pos);
        arg0->unk270 = 0x85;
        phi_f0 = 0.4f;
    } else if ((s32) arg0->unk240 < 4) {
        arg0->unk26A = sp40 << 7;
        arg0->unk270 = 0x43;
        phi_f0 = 0.4f;
    } else {
        arg0->unk270 = 0;
        phi_f0 = 0.0f;
    }
    temp_f2 = arg0->actor.speedXZ + 0.4f + phi_f0;
    if (temp_f2 < 0.5f) {
        arg0->unk1A4.animPlaybackSpeed = 0.5f;
    } else {
        if (temp_f2 > 1.6f) {
            phi_f0_2 = 1.6f;
        } else {
            phi_f0_2 = temp_f2;
        }
        arg0->unk1A4.animPlaybackSpeed = phi_f0_2;
    }
    if ((s32) arg0->unk240 <= 0) {
        arg0->unk240 = Rand_S16Offset(5, 0x50);
    }
}

void func_8091F5A4(Actor *arg0, GlobalContext *arg1) {
    ? (*temp_v0_3)(Actor *, GlobalContext *);
    s16 temp_v0;
    s16 temp_v0_4;
    u32 temp_v1;
    void *temp_v0_2;
    void *temp_v0_5;
    s32 phi_v1;
    f32 phi_f0;

    temp_v0 = arg0->unk240;
    if ((s32) temp_v0 > 0) {
        arg0->unk240 = (s16) (temp_v0 - 1);
    }
    temp_v0_2 = arg0->child;
    arg0->unk244 = (s16) (arg0->unk244 + 0x111);
    arg0->unk246 = (s16) (arg0->unk246 + 0x500);
    if ((temp_v0_2 != 0) && (temp_v0_2->update == 0) && (arg0 != temp_v0_2)) {
        arg0->child = NULL;
    }
    temp_v0_3 = arg0->unk23C;
    if ((temp_v0_3 == 0) || (temp_v0_3(arg0, arg1), (arg0->update != 0))) {
        temp_v0_4 = arg0->unk26A - arg0->shape.rot.y;
        phi_v1 = (s32) temp_v0_4;
        if ((s32) temp_v0_4 < 0) {
            phi_v1 = -(s32) temp_v0_4;
        }
        if ((phi_v1 >= 0x3001) && ((s32) arg0->unk270 >= 0x3E9)) {
            arg0->unk1C0 = (f32) (arg0->unk1C0 + arg0->unk24C);
        }
        SkelAnime_FrameUpdateMatrix(arg0 + 0x1A4);
        func_8091D7C4(arg0);
        Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
        temp_v1 = arg0->unk248;
        if (temp_v1 != 0) {
            phi_f0 = (f32) gGameInfo->data[2401] + 10.0f;
            if (arg1->sceneNum != 0x2F) {
                phi_f0 = 6.0f;
            }
            Actor_UpdateBgCheckInfo(arg1, arg0, 17.5f, phi_f0, 0.0f, temp_v1);
        }
        if ((arg0->xzDistToPlayer < 70.0f) && (func_8091EFE8 != arg0->unk23C)) {
            temp_v0_5 = arg0->unk160;
            temp_v0_5->unk30 = (s16) (s32) arg0->world.pos.x;
            temp_v0_5->unk32 = (s16) (s32) arg0->world.pos.y;
            temp_v0_5->unk34 = (s16) (s32) arg0->world.pos.z;
            temp_v0_5->unk36 = (s16) (s32) (arg0->unk25C * 500.0f);
            CollisionCheck_SetOC(arg1, &arg1->colChkCtx, (Collider *) (arg0 + 0x144));
        }
        Actor_SetHeight(arg0, arg0->shape.yOffset * 0.01f);
        if (Actor_HasParent(arg0, arg1) != 0) {
            arg0->parent = NULL;
            if (arg0->params == 0) {
                Actor_MarkForDeath(arg0);
                return;
            }
            func_8091D904(arg0);
            return;
        }
        if (func_8091DDF4(arg0, arg1) != 0) {
            func_800B8A1C(arg0, arg1, 0xBA, 80.0f, 25.0f);
        }
        // Duplicate return node #26. Try simplifying control flow for better match
    }
}

void func_8091F830(Actor *arg0) {
    ? (*temp_v0_2)();
    Actor *temp_v0;
    f32 temp_f0;
    s16 temp_v0_3;

    if (arg0->params == 1) {
        Actor_MarkForDeath(arg0);
        return;
    }
    temp_v0 = arg0->child;
    if ((temp_v0 != 0) && (temp_v0->update == 0) && (arg0 != temp_v0)) {
        arg0->child = NULL;
    }
    temp_v0_2 = arg0->unk23C;
    if ((temp_v0_2 == 0) || (temp_v0_2(), (arg0->update != 0))) {
        arg0 = arg0;
        func_8091D7C4(arg0);
        Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
        temp_v0_3 = arg0->unk242;
        if (temp_v0_3 == 0x14) {
            arg0->draw = EnFish_Draw;
            return;
        }
        if (temp_v0_3 == 0) {
            arg0->unk25C = (f32) arg0->unk260;
            func_8091D728((EnFish *) arg0);
            return;
        }
        if ((s32) temp_v0_3 < 0x14) {
            temp_f0 = arg0->unk260;
            arg0->unk25C = (f32) (arg0->unk25C + (0.1f * temp_f0));
            if (temp_f0 < arg0->unk25C) {
                arg0->unk25C = temp_f0;
            }
            func_8091D728((EnFish *) arg0);
        }
        // Duplicate return node #16. Try simplifying control flow for better match
    }
}

void EnFish_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnFish *this = (EnFish *) thisx;
    s16 temp_v0;
    s8 temp_v0_2;

    temp_v0 = this->unk242;
    if ((s32) temp_v0 > 0) {
        this->unk242 = temp_v0 - 1;
        func_8091F830();
    } else {
        func_8091F5A4();
    }
    temp_v0_2 = this->unk276;
    if ((s32) temp_v0_2 > 0) {
        this->unk276 = temp_v0_2 - 1;
    }
}

void func_8091F994(Actor *this, GlobalContext *globalCtx) {

}

void EnFish_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnFish *this = (EnFish *) thisx;
    void *sp30;
    GraphicsContext *sp2C;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    void *temp_a2;

    temp_a2 = (this->unk278 * 3) + &D_8091FA94;
    temp_a0 = globalCtx->state.gfxCtx;
    sp30 = temp_a2;
    sp2C = temp_a0;
    func_8012C28C(temp_a0);
    temp_v1 = sp2C->polyOpa.p;
    sp2C->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xFA000000;
    temp_v1->words.w1 = (temp_a2->unk0 << 0x18) | (temp_a2->unk1 << 0x10) | (temp_a2->unk2 << 8) | 0xFF;
    SkelAnime_DrawSV(globalCtx, this->unk1A4.skeleton, this->unk1A4.limbDrawTbl, (s32) this->unk1A4.dListCount, NULL, NULL, NULL);
}

