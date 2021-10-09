void func_80B24630(SkelAnime *arg0, ? *arg1, s32 arg2, EnRacedog *); /* static */
void func_80B246F4(Actor *arg0, GlobalContext *arg1); /* static */
s16 func_80B2478C(Path *arg0, s32 arg1, PosRot *arg2, f32 *arg3); /* static */
void func_80B248B8(EnRacedog *arg0, f32 *arg1);     /* static */
void func_80B24E14(EnRacedog *arg0);                /* static */
void func_80B24F08(EnRacedog *arg0);                /* static */
void func_80B251EC(EnRacedog *arg0);                /* static */
void func_80B252F8(EnRacedog *arg0);                /* static */
void func_80B2538C(EnRacedog *arg0);                /* static */
void func_80B25448(EnRacedog *arg0);                /* static */
s32 func_80B25490(EnRacedog *arg0, ? *arg1, EnRacedog *); /* static */
void func_80B255AC(EnRacedog *arg0, GlobalContext *arg1); /* static */
void func_80B256BC(EnRacedog *arg0);                /* static */
void func_80B2583C(Actor *arg0);                    /* static */
void func_80B258D8(Actor *arg0, GraphicsContext **arg1, s32); /* static */
s32 func_80B25A74(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_80B25A90(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern ? D_06000550;
extern ? D_06000618;
extern FlexSkeletonHeader D_060080F0;
static s16 D_80B25D40 = 0;
static s16 D_80B25D44 = 0xFFFF;
static s16 D_80B25D48 = 0;
static s16 D_80B25D4C = 0xFFFF;
static ? D_80B25D50;                                /* unable to generate initializer */
static ? D_80B25D54;                                /* unable to generate initializer */
static ? D_80B25D88;                                /* unable to generate initializer */
static ? D_80B25D90;                                /* unable to generate initializer */
static ? D_80B25D94;                                /* unable to generate initializer */
static ? D_80B25D96;                                /* unable to generate initializer */
static ? D_80B25E68;                                /* unable to generate initializer */
static s16 D_80B25E72 = {0xFFFF, 0, 0x353E};
static ? D_80B25E78;                                /* unable to generate initializer */
static ColliderCylinderInit D_80B25E98 = {
    {0xA, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0xD, 0x13, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80B25EC4 = {0, 0, 0, 0, 1};
static DamageTable D_80B25ED0 = {
    {
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
};
static ? D_80B25EF0;                                /* unable to generate initializer */
static f32 D_80B25EF4 = {
    1.0f,
    9.1834e-41f,
    0.0f,
    2.4098943e-35f,
    1.0f,
    9.1834e-41f,
    9.1827e-41f,
    2.409458e-35f,
};
static f32 D_80B25F14 = {
    1.0f,
    9.1834e-41f,
    0.0f,
    2.4081173e-35f,
    1.0f,
    9.1834e-41f,
    9.1827e-41f,
    2.4097405e-35f,
    1.0f,
    9.1834e-41f,
    9.477416e-38f,
    2.4097405e-35f,
    1.0f,
    9.1834e-41f,
    1.5163866e-36f,
    2.4086086e-35f,
    1.0f,
    9.1834e-41f,
    9.477416e-38f,
    2.408829e-35f,
    1.0f,
    9.1834e-41f,
    9.1827e-41f,
    2.4086086e-35f,
    1.0f,
    3.8e-44f,
    9.477416e-38f,
    2.4086086e-35f,
    1.0f,
    2.663228e-39f,
    9.477416e-38f,
    2.4086086e-35f,
    1.0f,
    4.959192e-39f,
    9.477416e-38f,
    2.4098943e-35f,
    -1.5f,
    nanf,
    9.1827e-41f,
    2.4089828e-35f,
    1.0f,
    9.1834e-41f,
    9.403955e-38f,
    2.4093605e-35f,
    1.2f,
    9.1834e-41f,
    9.403955e-38f,
    2.4091573e-35f,
    1.2f,
    9.1834e-41f,
    9.403955e-38f,
    2.4098943e-35f,
    0.5f,
    9.1834e-41f,
    0.0f,
};
static InitChainEntry D_80B25FF0;                   /* unable to generate initializer */
static ? D_80B25FF4;                                /* unable to generate initializer */
static ? D_80B26000;                                /* unable to generate initializer */

typedef struct EnRacedog {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(EnRacedog *, GlobalContext *);
    /* 0x0148 */ char pad148[0x4];                  /* maybe part of actionFunc[2]? */
    /* 0x014C */ SkelAnime unk14C;                  /* inferred */
    /* 0x0190 */ ColliderCylinder unk190;           /* inferred */
    /* 0x01DC */ char pad1DC[0x4];
    /* 0x01E0 */ Path *unk1E0;                      /* inferred */
    /* 0x01E4 */ char pad1E4[0x4];                  /* maybe part of unk1E0[2]? */
    /* 0x01E8 */ s32 unk1E8;                        /* inferred */
    /* 0x01EC */ Vec3s unk1EC;                      /* inferred */
    /* 0x01F2 */ char pad1F2[0x48];                 /* maybe part of unk1EC[13]? */
    /* 0x023A */ Vec3s unk23A;                      /* inferred */
    /* 0x0240 */ char pad240[0x48];                 /* maybe part of unk23A[13]? */
    /* 0x0288 */ s16 unk288;                        /* inferred */
    /* 0x028A */ s16 unk28A;                        /* inferred */
    /* 0x028C */ s16 unk28C;                        /* inferred */
    /* 0x028E */ char pad28E[0x2];                  /* maybe part of unk28C[2]? */
    /* 0x0290 */ s16 unk290;                        /* inferred */
    /* 0x0292 */ s16 unk292;                        /* inferred */
    /* 0x0294 */ char pad294[0x4];                  /* maybe part of unk292[3]? */
    /* 0x0298 */ f32 unk298;                        /* inferred */
    /* 0x029C */ s16 unk29C;                        /* inferred */
    /* 0x029E */ char pad29E[0x2];                  /* maybe part of unk29C[2]? */
    /* 0x02A0 */ f32 unk2A0;                        /* inferred */
    /* 0x02A4 */ f32 unk2A4;                        /* inferred */
    /* 0x02A8 */ f32 unk2A8;                        /* inferred */
    /* 0x02AC */ f32 unk2AC;                        /* inferred */
    /* 0x02B0 */ char pad2B0[0x8];                  /* maybe part of unk2AC[3]? */
    /* 0x02B8 */ s32 unk2B8;                        /* inferred */
    /* 0x02BC */ s32 unk2BC;                        /* inferred */
    /* 0x02C0 */ s32 unk2C0;                        /* inferred */
    /* 0x02C4 */ f32 unk2C4;                        /* inferred */
} EnRacedog;                                        /* size 0x2C8 */

void func_80B24630(SkelAnime *arg0, ? *arg1, s32 arg2) {
    s16 temp_v0;
    void *temp_s0;
    f32 phi_f0;

    temp_s0 = arg1 + (arg2 * 0x10);
    temp_v0 = temp_s0->unkA;
    if ((s32) temp_v0 < 0) {
        phi_f0 = (f32) SkelAnime_GetFrameCount(temp_s0->unk0);
    } else {
        phi_f0 = (f32) temp_v0;
    }
    SkelAnime_ChangeAnim(arg0, (AnimationHeader *) temp_s0->unk0, ((f32) gGameInfo->data[2488] * 0.1f) + temp_s0->unk4, (f32) temp_s0->unk8, phi_f0, (u8) (s32) temp_s0->unkC, (f32) temp_s0->unkE);
}

void func_80B246F4(Actor *arg0, GlobalContext *arg1) {
    CollisionCheckContext *temp_a1;
    GlobalContext *temp_a0;

    temp_a1 = arg1 + 0x18884;
    arg0->unk1D6 = (s16) (s32) arg0->world.pos.x;
    temp_a0 = arg1;
    arg0->unk1D8 = (s16) (s32) arg0->world.pos.y;
    arg0->unk1DA = (s16) (s32) arg0->world.pos.z;
    arg1 = arg1;
    CollisionCheck_SetOC(temp_a0, temp_a1, arg0 + 0x190);
    Actor_UpdateBgCheckInfo(arg1, arg0, 26.0f, 10.0f, 0.0f, 5U);
}

s16 func_80B2478C(Path *arg0, s32 arg1, PosRot *arg2, f32 *arg3) {
    void *sp24;
    f32 sp20;
    f32 sp1C;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f2;
    f32 phi_f16;
    f32 phi_f18;
    f32 phi_f14;

    if (arg0 != 0) {
        sp24 = (arg1 * 6) + Lib_SegmentedToVirtual(arg0->points);
        temp_f14 = (randPlusMinusPoint5Scaled(100.0f) + (f32) sp24->unk0) - arg2->pos.x;
        sp20 = temp_f14;
        temp_f14_2 = temp_f14;
        temp_f12 = arg2->pos.z;
        temp_f2 = (f32) sp24->unk4;
        sp1C = (randPlusMinusPoint5Scaled(100.0f) + temp_f2) - temp_f12;
        phi_f16 = (f32) sp24->unk0 - arg2->pos.x;
        phi_f18 = temp_f2 - temp_f12;
        phi_f14 = temp_f14_2;
    } else {
        sp1C = 0.0f;
        phi_f16 = 0.0f;
        phi_f18 = 0.0f;
        phi_f14 = 0.0f;
    }
    *arg3 = (phi_f16 * phi_f16) + (phi_f18 * phi_f18);
    return (s16) (s32) (Math_Acot2F(sp1C, phi_f14) * 10430.378f);
}

void func_80B248B8(EnRacedog *arg0, f32 *arg1) {
    void *temp_v0;

    temp_v0 = arg0->actor.floorPoly;
    if (temp_v0 != 0) {
        *arg1 = -Math_Acot2F(1.0f, -((f32) temp_v0->normal.z * 0.00003051851f) * ((f32) temp_v0->normal.y * 0.00003051851f));
    }
}

void EnRacedog_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnRacedog *this = (EnRacedog *) thisx;
    ColliderCylinder *sp34;
    SkelAnime *sp30;
    ColliderCylinder *temp_a1_2;
    SkelAnime *temp_a1;
    s32 temp_v0;
    u32 temp_t1;
    void *temp_t1_2;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 24.0f);
    temp_a1 = &this->unk14C;
    sp30 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_060080F0, NULL, &this->unk1EC, &this->unk23A, 0xD);
    temp_a1_2 = &this->unk190;
    sp34 = temp_a1_2;
    Collider_InitCylinder(globalCtx, temp_a1_2);
    Collider_SetCylinder(globalCtx, temp_a1_2, &this->actor, &D_80B25E98);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80B25ED0, &D_80B25EC4);
    Actor_ProcessInitChain(&this->actor, &D_80B25FF0);
    this->unk1E0 = func_8013D648(globalCtx, (s16) ((s32) (this->actor.params & 0xFC00) >> 0xA), 0x3F);
    Actor_SetScale(&this->actor, 0.0075f);
    temp_v0 = (s32) (this->actor.params & 0x3E0) >> 5;
    this->actor.gravity = -3.0f;
    if (temp_v0 < 0xE) {
        this->unk290 = (s16) temp_v0;
    } else {
        Actor_MarkForDeath(&this->actor);
    }
    this->unk2BC = 0xFF;
    this->unk2C0 = 0x32;
    this->unk288 = 0xC;
    this->unk2A0 = 0.0f;
    this->unk2A4 = 0.0f;
    this->unk2A8 = 0.0f;
    this->unk2C4 = 1.0f;
    if (((s32) *(&D_80B25D96 + (this->unk290 * 0x10)) >= 0x353F) && (this->unk290 == (s16) (s32) Rand_ZeroFloat(20.0f))) {
        this->unk28C = 5;
    } else {
        this->unk28C = 0;
    }
    this->unk28A = 0x3C;
    this->unk28A += this->unk28C;
    this->unk29C = 0;
    this->unk2B8 = -1;
    this->unk298 = *(&D_80B25D50 + (*(&D_80B25D90 + (this->unk290 * 0x10)) * 8));
    func_80B24E14(this);
    temp_t1 = this->actor.flags | 0x10;
    this->actor.flags = temp_t1;
    this->actor.flags = temp_t1 | 0x20;
    temp_t1_2 = ((s16) ((s32) (gSaveContext.eventInf[0] & 0xF8) >> 3) * 0x10) + &D_80B25D88;
    D_80B25E68.unk0 = (s32) temp_t1_2->unk0;
    D_80B25E68.unk4 = (s32) temp_t1_2->unk4;
    D_80B25E68.unk8 = (s32) temp_t1_2->unk8;
    D_80B25E68.unkC = (s32) temp_t1_2->unkC;
    this->unk292 = D_80B25E68.unkA;
    func_80B24630(sp30, &D_80B25EF0, 0);
    D_80B25EF4 = Rand_ZeroFloat(0.5f) + 1.0f;
    this->actionFunc = func_80B24C14;
}

void EnRacedog_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnRacedog *this = (EnRacedog *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk190);
}

void func_80B24C14(EnRacedog *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = this->unk28A;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        this->unk28A = temp_v0 - 1;
        phi_v1 = this->unk28A;
    }
    if (phi_v1 == 0) {
        this = this;
        this->unk28A = Rand_S16Offset(0x32, 0x32);
        if (this->unk28C == 0) {
            this = this;
            play_sound(0x4835U);
        }
        this = this;
        func_80B24630(this + 0x14C, &D_80B25EF0, 2, this);
        this->actionFunc = func_80B24CB4;
    }
}

void func_80B24CB4(EnRacedog *this, GlobalContext *globalCtx) {
    f32 sp30;
    Path *sp2C;
    Path *temp_t7;
    s32 temp_t4;
    s16 phi_a1;

    temp_t7 = this->unk1E0;
    this->unk190.dim.radius = 0xF;
    sp2C = temp_t7;
    if (temp_t7 != 0) {
        phi_a1 = func_80B2478C(temp_t7, this->unk1E8, &this->actor.world, &sp30);
        if ((this->actor.bgCheckFlags & 8) != 0) {
            phi_a1 = this->actor.wallYaw;
        }
        Math_SmoothStepToS(&this->actor.world.rot.y, phi_a1, 4, 0x3E8, (s16) 1);
        this->actor.shape.rot.y = this->actor.world.rot.y;
        if (sp30 <= 2500.0f) {
            temp_t4 = this->unk1E8 + 1;
            this->unk1E8 = temp_t4;
            if (temp_t4 >= (this->unk1E0->count - 1)) {
                this->unk1E8 = 0;
            }
        }
        func_80B24F08(this);
        if ((this->unk1E8 >= (((s32) this->unk1E0->count / 4) * 3)) && (D_80B25D4C == this->unk290)) {
            D_80B25D48 += 1;
        }
        func_80B252F8(this);
        func_80B2538C(this);
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    }
    func_80B25448(this);
    func_80B256BC(this);
    func_80B255AC(this, globalCtx);
}

void func_80B24E14(EnRacedog *arg0) {
    s16 temp_v0;
    s16 temp_v1;
    void *temp_v0_2;
    void *temp_v0_3;
    s16 phi_v1;
    void *phi_v0;

    temp_v0 = arg0->unk290;
    if (((s32) temp_v0 % 2) != 0) {
        (&D_80B25D88 + (temp_v0 * 0x10))->unkE = (s16) (((s32) ((&gSaveContext.weekEventReg[42])[(s32) temp_v0 / 2] & 0xF0) >> 4) + 0x3539);
    } else {
        (&D_80B25D88 + (temp_v0 * 0x10))->unkE = (s16) (((&gSaveContext.weekEventReg[42])[(s32) temp_v0 / 2] & 0xF) + 0x3539);
    }
    temp_v0_2 = &D_80B25D88 + (arg0->unk290 * 0x10);
    temp_v1 = temp_v0_2->unkE;
    phi_v1 = temp_v1;
    phi_v0 = temp_v0_2;
    if (((s32) temp_v1 >= 0x3547) || ((s32) temp_v1 < 0x3539)) {
        temp_v0_2->unkE = 0x353E;
        temp_v0_3 = (arg0->unk290 * 0x10) + &D_80B25D88;
        phi_v1 = temp_v0_3->unkE;
        phi_v0 = temp_v0_3;
    }
    if (phi_v1 == 0x3547) {
        phi_v0->unkE = 0x3538;
    }
}

void func_80B24F08(EnRacedog *arg0) {
    s16 temp_v1_2;
    s32 temp_a0;
    s32 temp_v0;
    u8 temp_v1;
    void *temp_v0_2;
    void *temp_v0_3;
    void *phi_v0;
    f32 phi_f0;

    temp_v0 = arg0->unk1E8;
    temp_v1 = *arg0->unk1E0;
    if (arg0->unk2B8 < temp_v0) {
        arg0->unk2B8 = temp_v0;
        if (temp_v0 == 0) {
            arg0->unk298 = *(&D_80B25D50 + (*(&D_80B25D90 + (arg0->unk290 * 0x10)) * 8));
        } else {
            temp_a0 = (s32) temp_v1 / 4;
            if (temp_v0 < temp_a0) {
                if (*(&D_80B25D90 + (arg0->unk290 * 0x10)) == 5) {
                    temp_v0_2 = (arg0->unk290 * 0x10) + &D_80B25D88;
                    arg0->unk298 = randPlusMinusPoint5Scaled(1.0f) + *(&D_80B25D50 + (temp_v0_2->unk8 * 8));
                    phi_v0 = temp_v0_2;
                } else {
                    arg0->unk298 = randPlusMinusPoint5Scaled(1.0f) + 5.0f;
                    phi_v0 = (arg0->unk290 * 0x10) + &D_80B25D88;
                }
                if (((s32) phi_v0->unkE < 0x353E) && (D_80B25D4C != arg0->unk290)) {
                    arg0->unk298 *= phi_v0->unk4;
                }
            } else if (temp_v0 < (temp_a0 * 3)) {
                if (temp_v0 < (s32) *(&D_80B25D94 + (arg0->unk290 * 0x10))) {
                    arg0->unk298 = randPlusMinusPoint5Scaled(1.0f) + 5.0f;
                } else {
                    temp_v1_2 = arg0->unk290;
                    temp_v0_3 = (temp_v1_2 * 0x10) + &D_80B25D88;
                    arg0->unk298 = randPlusMinusPoint5Scaled(1.0f) + *(&D_80B25D54 + (temp_v0_3->unk8 * 8));
                    if (((s32) temp_v0_3->unkE < 0x353E) && (D_80B25D4C != temp_v1_2)) {
                        arg0->unk298 *= temp_v0_3->unk4;
                    }
                }
            } else if (temp_v0 < (s32) temp_v1) {
                func_80B251EC(arg0);
            } else {
                arg0->unk298 = randPlusMinusPoint5Scaled(1.0f) + 5.0f;
            }
        }
    }
    if ((arg0->unk1E8 != 0) || (arg0->unk29C != 0)) {
        arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
    }
    Math_ApproachF(arg0 + 0x70, arg0->unk298, 0.5f, 3.0f);
    if (arg0->unk292 == arg0->unk290) {
        phi_f0 = 7.5f;
        if (arg0->actor.speedXZ > 7.5f) {
            goto block_28;
        }
    } else {
        phi_f0 = 7.0f;
        if (arg0->actor.speedXZ > 7.0f) {
block_28:
            arg0->actor.speedXZ = phi_f0;
        }
    }
}

void func_80B251EC(EnRacedog *arg0) {
    f32 *temp_v1;
    f32 temp_f0;
    f32 *phi_v1;

    temp_v1 = (arg0->unk290 * 0x10) + &D_80B25D88;
    phi_v1 = temp_v1;
    if (*temp_v1 == -1.0f) {
        temp_f0 = (f32) D_80B25D48;
        if (temp_f0 < 100.0f) {
            *temp_v1 = 200.0f / (200.0f - temp_f0);
            phi_v1 = (arg0->unk290 * 0x10) + &D_80B25D88;
        } else {
            *temp_v1 = 2.0f;
            phi_v1 = (arg0->unk290 * 0x10) + &D_80B25D88;
        }
    }
    if ((s32) phi_v1->unkE < 0x3542) {
        arg0->unk298 = *(&D_80B25D54 + (phi_v1->unk8 * 8)) * phi_v1->unk0;
    }
    if (((s32) phi_v1->unkE < 0x353E) && (D_80B25D4C != arg0->unk290)) {
        arg0->unk298 *= phi_v1->unk4;
    }
}

void func_80B252F8(EnRacedog *arg0) {
    s16 temp_v1;
    s32 phi_v0;

    if ((arg0->unk1E8 >= 9) && (arg0->unk29C == 0)) {
        arg0->unk29C = 1;
    }
    phi_v0 = arg0->unk1E8;
    if ((arg0->unk1E8 >= 0xB) && (arg0->unk29C == 1)) {
        arg0->unk29C = 2;
        phi_v0 = arg0->unk1E8;
    }
    temp_v1 = D_80B25D44;
    if (((phi_v0 >= (s32) temp_v1) || ((s32) arg0->unk29C <= 0)) && ((s32) temp_v1 < phi_v0)) {
        D_80B25D44 = (s16) phi_v0;
        D_80B25D4C = arg0->unk290;
    }
}

void func_80B2538C(EnRacedog *arg0) {
    EnRacedog *temp_a0;
    EnRacedog *temp_a2;

    temp_a2 = arg0;
    temp_a0 = temp_a2;
    arg0 = temp_a2;
    if ((func_80B25490(temp_a0, &D_80B25E78, temp_a2) != 0) && (arg0->unk29C == 2)) {
        D_80B25D40 += 1;
        if (D_80B25D40 == 1) {
            arg0 = arg0;
            func_801A89A8(0x8041);
            play_sound(0x4835U);
        }
        arg0->unk29C = 3;
        if (arg0->unk292 == arg0->unk290) {
            gSaveContext.eventInf[0] = (gSaveContext.eventInf[0] & 7) | (D_80B25D40 * 8);
        }
    }
}

void func_80B25448(EnRacedog *arg0) {
    if (arg0->actor.speedXZ < 3.0f) {
        D_80B25F14 = 0.9f;
        return;
    }
    D_80B25F14 = 1.0f;
}

s32 func_80B25490(EnRacedog *arg0, ? *arg1) {
    f32 sp2C;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2;
    f32 temp_f8;
    s32 phi_v0;

    temp_f22 = arg0->actor.world.pos.z;
    temp_f20 = arg0->actor.world.pos.x;
    temp_f12 = temp_f22 - arg1->unk4;
    temp_f14 = temp_f20 - arg1->unk8;
    temp_f2 = temp_f20 - arg1->unk0;
    sp2C = temp_f22 - arg1->unk14;
    temp_f16 = temp_f22 - arg1->unkC;
    temp_f18 = temp_f20 - arg1->unk10;
    sp20 = temp_f20 - arg1->unk18;
    temp_f8 = temp_f22 - arg1->unk1C;
    sp24 = temp_f8;
    temp_f0 = (temp_f2 * temp_f16) - (temp_f14 * temp_f12);
    sp1C = temp_f0;
    if ((sp1C * ((temp_f14 * sp2C) - (temp_f18 * temp_f16))) < 0.0f) {
        return 0;
    }
    if ((temp_f0 * ((temp_f18 * temp_f8) - (sp20 * sp2C))) < 0.0f) {
        return 0;
    }
    phi_v0 = 1;
    if ((temp_f0 * ((sp20 * temp_f12) - (temp_f2 * sp24))) < 0.0f) {
        phi_v0 = 0;
    }
    return phi_v0;
}

void func_80B255AC(Actor *arg0, GlobalContext *arg1) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s32 phi_v0;

    phi_v0 = 3;
    if (arg0->speedXZ > 6.0f) {
        phi_v0 = 2;
    }
    if (((s32) (arg0->unk290 + (s16) (s32) arg0->unk164) % phi_v0) == 0) {
        sp38 = randPlusMinusPoint5Scaled(15.0f) + arg0->world.pos.x;
        sp3C = arg0->world.pos.y;
        sp40 = randPlusMinusPoint5Scaled(15.0f) + arg0->world.pos.z;
        func_800BBDAC(arg1, arg0, (Vec3f *) &sp38, 10.0f, 0, 2.0f, (s16) 0x12C, (s16) 0, (u8) 1);
    }
}

void func_80B256BC(Actor *arg0) {
    s32 temp_f6;

    temp_f6 = (s32) arg0->unk164;
    if (((s16) temp_f6 == 1) || ((s16) temp_f6 == 7)) {
        Audio_PlayActorSound2(arg0, 0x28EFU);
    }
}

void EnRacedog_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnRacedog *this = (EnRacedog *) thisx;
    f32 sp2C;
    f32 *sp28;
    f32 *temp_a0;
    f32 temp_f0;

    sp2C.unk0 = D_80B25FF4.unk0;
    sp2C.unk4 = (s32) D_80B25FF4.unk4;
    sp2C.unk8 = (s32) D_80B25FF4.unk8;
    this->unk292 = D_80B25E72;
    this->actionFunc(this, globalCtx);
    func_80B246F4(&this->actor, globalCtx);
    func_80B248B8(this, &sp2C);
    temp_a0 = &this->unk2AC;
    sp28 = temp_a0;
    Math_ApproachF(temp_a0, sp2C, 0.2f, 0.1f);
    if (this->unk2A0 > 0.0f) {
        temp_f0 = this->unk2AC;
        if ((temp_f0 < 0.0f) && (temp_f0 > -0.1f)) {
            this->unk14C.animCurrentFrame = 4.0f;
            this->actor.velocity.y = 5.5f;
        }
    }
    if ((this->actor.bgCheckFlags & 1) == 0) {
        this->unk14C.animCurrentFrame = 0.0f;
    }
    this->unk2A0 = sp28->unk0;
    this->unk2A4 = sp28->unk4;
    this->unk2A8 = sp28->unk8;
    SkelAnime_FrameUpdateMatrix(&this->unk14C);
}

void func_80B2583C(Actor *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    if ((s32) arg0->unk288 >= 7) {
        arg0->unk2BC = (s32) (arg0->unk2BC - 0x10);
        arg0->unk2C0 = (s32) (arg0->unk2C0 + 8);
        arg0->unk2C4 = (f32) (arg0->unk2C4 + 0.05f);
    } else {
        arg0->unk2BC = (s32) (arg0->unk2BC + 0x10);
        arg0->unk2C0 = (s32) (arg0->unk2C0 - 8);
        arg0->unk2C4 = (f32) (arg0->unk2C4 - 0.05f);
    }
    temp_v0 = arg0->unk288;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk288 = (s16) (temp_v0 - 1);
        phi_v1 = arg0->unk288;
    }
    if (phi_v1 == 0) {
        arg0->unk288 = 0xC;
    }
}

void func_80B258D8(Actor *arg0, GraphicsContext **arg1) {
    Vec3s sp48;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    s32 phi_v0;

    sp48.unk0 = (s32) D_801D15BC.unk0;
    sp48.z = (u16) D_801D15BC.z;
    phi_v0 = 0;
    if (arg0->unk292 == arg0->unk290) {
        phi_v0 = 1;
    }
    if (phi_v0 != 0) {
        temp_a0 = *arg1;
        temp_s0 = temp_a0;
        func_8012C28C(temp_a0);
        func_80B2583C(arg0);
        SysMatrix_SetStateRotationAndTranslation(arg0->world.pos.x, arg0->world.pos.y + 40.0f, arg0->world.pos.z, &sp48);
        temp_v0 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w1 = 0;
        temp_v0->words.w0 = 0xE7000000;
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFA0000FF;
        temp_v0_2->words.w1 = ((arg0->unk2BC & 0xFF) << 0x10) | 0xFF000000 | 0xFF;
        temp_v0_3 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFB000000;
        temp_v0_3->words.w1 = ((arg0->unk2C0 & 0xFF) << 0x10) | 0xFF000000 | 0xFF;
        temp_f12 = 2.0f * arg0->unk2C4;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        temp_v0_4 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDA380003;
        temp_v0_4->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_5 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = (u32) &D_06000618;
        temp_v0_5->words.w0 = 0xDE000000;
        temp_v0_6 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_6 + 8;
        temp_v0_6->words.w1 = (u32) &D_06000550;
        temp_v0_6->words.w0 = 0xDE000000;
    }
}

s32 func_80B25A74(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    return 0;
}

void func_80B25A90(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f sp1C;

    sp1C.x = D_80B26000.unk0;
    sp1C.y = D_80B26000.unk4;
    sp1C.z = D_80B26000.unk8;
    if (arg1 == 5) {
        arg1 = arg1;
        SysMatrix_MultiplyVector3fByState(&sp1C, arg4 + 0x3C);
    }
    if (arg1 == 0xC) {
        func_80B258D8(arg4, arg0, arg1);
    }
}

void EnRacedog_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnRacedog *this = (EnRacedog *) thisx;
    GraphicsContext *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_a0;
    s16 temp_t1;

    temp_a0 = globalCtx->state.gfxCtx;
    sp30 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp30->polyOpa.p;
    sp30->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    temp_t1 = *(&D_80B25D90 + (this->unk290 * 0x10));
    switch (temp_t1) {
    case 3:
        temp_v0_2 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = -0x3800;
        temp_v0_2->words.w0 = 0xFB000000;
        break;
    case 1:
        temp_v0_3 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = -0x100;
        temp_v0_3->words.w0 = 0xFB000000;
        break;
    case 5:
        temp_v0_4 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xFB000000;
        temp_v0_4->words.w1 = 0x4F4F8F00;
        break;
    case 6:
        temp_v0_5 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xFB000000;
        temp_v0_5->words.w1 = 0xFFCF2F00;
        break;
    case 4:
        temp_v0_6 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xFB000000;
        temp_v0_6->words.w1 = 0x8F4F2F00;
        break;
    case 2:
        temp_v0_7 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xFB000000;
        temp_v0_7->words.w1 = 0x8F8F8F00;
        break;
    default:
        temp_v0_8 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0_8 + 8;
        temp_v0_8->words.w1 = -0x3800;
        temp_v0_8->words.w0 = 0xFB000000;
        break;
    }
    SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
    SysMatrix_RotateStateAroundXAxis(this->unk2AC);
    SysMatrix_InsertZRotation_s(this->actor.shape.rot.z, 1);
    Matrix_RotateY(this->actor.shape.rot.y, 1U);
    Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, 1);
    SkelAnime_DrawSV(globalCtx, this->unk14C.skeleton, this->unk14C.limbDrawTbl, (s32) this->unk14C.dListCount, func_80B25A74, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80B25A90, &this->actor);
}

