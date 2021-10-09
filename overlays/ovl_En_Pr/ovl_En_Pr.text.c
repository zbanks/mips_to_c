void func_80A3242C(EnPr *arg0, s32 arg1);           /* static */
s32 func_80A324E0(EnPr *arg0, GlobalContext *arg1); /* static */
s32 func_80A325E4(EnPr *arg0, EnPr *);              /* static */
void func_80A326F0(EnPr *arg0, EnPr *, GlobalContext *); /* static */
void func_80A32854(f32 arg0, f32, EnPr *);          /* static */
void func_80A3295C(EnPr *arg0);                     /* static */
void func_80A32AF8(f32 arg0, f32, EnPr *);          /* static */
void func_80A32CDC(EnPr *arg0);                     /* static */
void func_80A32E60(Actor *arg0);                    /* static */
void func_80A33098(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A3357C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80A335B4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_060021E8;
extern FlexSkeletonHeader D_060038B8;
static DamageTable D_80A338A0 = {
    {
        0,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0x42,
        0,
        0,
        0xF1,
        0,
        0,
        0x51,
        0,
        0,
        0xF1,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static ? D_80A338C0;                                /* unable to generate initializer */
static ColliderCylinderInit D_80A338F4 = {
    {0xA, 0x11, 9, 0, 0x10, 1},
    {4, {0x20000000, 0, 4}, {0xF7CFFFFF, 0, 0}, 1, 1, 0},
    {0x12, 0x14, 5, {0, 0, 0}},
};
static ? D_80A33920;                                /* unable to generate initializer */
static ? D_80A33934;                                /* unable to generate initializer */
static ? D_80A3393C;                                /* unable to generate initializer */

typedef struct EnPr {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0x36];                 /* maybe part of unk188[10]? */
    /* 0x01C4 */ Vec3s unk1C4;                      /* inferred */
    /* 0x01CA */ char pad1CA[0x36];                 /* maybe part of unk1C4[10]? */
    /* 0x0200 */ void (*actionFunc)(EnPr *, GlobalContext *);
    /* 0x0204 */ u8 unk204;                         /* inferred */
    /* 0x0205 */ char pad205[0x1];                  /* maybe part of unk204[2]? */
    /* 0x0206 */ s16 unk206;                        /* inferred */
    /* 0x0208 */ s16 unk208;                        /* inferred */
    /* 0x020A */ s16 unk20A;                        /* inferred */
    /* 0x020C */ s16 unk20C;                        /* inferred */
    /* 0x020E */ s16 unk20E;                        /* inferred */
    /* 0x0210 */ s16 unk210;                        /* inferred */
    /* 0x0212 */ s16 unk212;                        /* inferred */
    /* 0x0214 */ s16 unk214;                        /* inferred */
    /* 0x0216 */ s16 unk216;                        /* inferred */
    /* 0x0218 */ char pad218[0x4];                  /* maybe part of unk216[3]? */
    /* 0x021C */ s32 unk21C;                        /* inferred */
    /* 0x0220 */ char pad220[0xC];                  /* maybe part of unk21C[4]? */
    /* 0x022C */ s16 unk22C;                        /* inferred */
    /* 0x022E */ s16 unk22E;                        /* inferred */
    /* 0x0230 */ s16 unk230;                        /* inferred */
    /* 0x0232 */ char pad232[0x2];                  /* maybe part of unk230[2]? */
    /* 0x0234 */ f32 unk234;                        /* inferred */
    /* 0x0238 */ f32 unk238;                        /* inferred */
    /* 0x023C */ Vec3f unk23C;                      /* inferred */
    /* 0x0248 */ char pad248[0x6C];                 /* maybe part of unk23C[10]? */
    /* 0x02B4 */ f32 unk2B4;                        /* inferred */
    /* 0x02B8 */ f32 unk2B8;                        /* inferred */
    /* 0x02BC */ f32 unk2BC;                        /* inferred */
    /* 0x02C0 */ f32 unk2C0;                        /* inferred */
    /* 0x02C4 */ f32 unk2C4;                        /* inferred */
    /* 0x02C8 */ f32 unk2C8;                        /* inferred */
    /* 0x02CC */ f32 unk2CC;                        /* inferred */
    /* 0x02D0 */ s16 unk2D0;                        /* inferred */
    /* 0x02D2 */ s16 unk2D2;                        /* inferred */
    /* 0x02D4 */ Vec3f unk2D4;                      /* inferred */
    /* 0x02D8 */ f32 unk2D8;                        /* overlap; inferred */
    /* 0x02DC */ char pad2DC[0x4];                  /* maybe part of unk2D8[2]? */
    /* 0x02E0 */ Vec3f unk2E0;                      /* inferred */
    /* 0x02EC */ char pad2EC[0xC];                  /* maybe part of unk2E0[2]? */
    /* 0x02F8 */ EnPr *unk2F8;                      /* inferred */
    /* 0x02FC */ ColliderCylinder unk2FC;           /* inferred */
} EnPr;                                             /* size 0x348 */

void EnPr_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnPr *this = (EnPr *) thisx;
    Actor *temp_v0;
    f32 temp_f0;
    s16 temp_v0_2;
    s32 temp_s1;
    s32 temp_s4;
    s32 phi_s4;
    s32 phi_v0;

    this->actor.colChkInfo.health = 3;
    this->actor.colChkInfo.mass = 0x32;
    this->actor.hintId = 0x5C;
    Collider_InitAndSetCylinder(globalCtx, &this->unk2FC, &this->actor, &D_80A338F4);
    this->unk208 = 0xFF;
    this->unk2CC = 0.01f;
    Actor_SetScale(&this->actor, 0.01f);
    this->actor.targetMode = 3;
    this->unk2B8 = this->actor.world.pos.y;
    this->actor.colChkInfo.damageTable = &D_80A338A0;
    this->actor.shape.yOffset = 1500.0f;
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_060038B8, &D_060021E8, &this->unk188, &this->unk1C4, 0xA);
    temp_f0 = (f32) this->actor.world.rot.z * 20.0f;
    this->unk2C8 = temp_f0;
    phi_v0 = 0;
    if (temp_f0 < 80.0f) {
        this->unk2C8 = 80.0f;
    }
    this->actor.world.rot.z = 0;
    temp_s4 = ((s32) this->actor.params >> 8) & 0xFF;
    phi_s4 = temp_s4;
    if (temp_s4 >= 0x15) {
        phi_s4 = 0x14;
    } else if (temp_s4 < 0) {
        phi_s4 = 0;
    }
    this->unk2F8 = this;
    if (phi_s4 > 0) {
        do {
            temp_s1 = phi_v0 + 1;
            temp_v0 = Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, 0x181, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) (s32) this->actor.world.rot.y, (s16) 0, temp_s1);
            if (temp_v0 != 0) {
                temp_v0->unk220 = (EnPr *) this->unk2F8;
                this->unk2F8 = (EnPr *) temp_v0;
            }
            phi_v0 = temp_s1;
        } while (temp_s1 != phi_s4);
    }
    temp_v0_2 = this->actor.world.rot.y;
    this->unk2D0 = 0xFF;
    this->unk20E = 0x1E;
    this->unk216 = temp_v0_2;
    this->unk214 = temp_v0_2;
    this->unk2B4 = this->actor.world.pos.y;
    func_80A326F0(this);
}

void EnPr_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnPr *this = (EnPr *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk2FC);
}

void func_80A3242C(EnPr *arg0, s32 arg1) {
    f32 sp34;
    s32 temp_v1;
    f32 phi_f0;

    arg0->unk21C = arg1;
    sp34 = 1.0f;
    temp_v1 = arg0->unk21C;
    arg0->unk2BC = (f32) SkelAnime_GetFrameCount(*(&D_80A33920 + (arg1 * 4)));
    phi_f0 = 1.0f;
    if (temp_v1 == 2) {
        phi_f0 = 2.0f;
    }
    SkelAnime_ChangeAnim(arg0 + 0x144, *(&D_80A33920 + (temp_v1 * 4)), phi_f0, 0.0f, arg0->unk2BC, (u8) (s32) *(&D_80A33934 + temp_v1), -2.0f);
}

s32 func_80A324E0(EnPr *arg0, GlobalContext *arg1) {
    CollisionPoly *sp54;
    Vec3f sp48;
    u32 sp44;
    WaterBox *sp40;
    CollisionContext *sp3C;
    CollisionContext *temp_a0;
    f32 temp_f0;
    f32 temp_f0_2;
    s32 phi_v0;

    temp_a0 = arg1 + 0x830;
    sp3C = temp_a0;
    if (func_800C55C4(temp_a0, arg0 + 0x24, arg0 + 0x2E0, &sp48, &sp54, 1U, 0U, 0U, 1U, &sp44) != 0) {
        return 1;
    }
    if ((func_800CA1AC(arg1, sp3C, arg0->actor.world.pos.x, arg0->actor.world.pos.z, arg0 + 0x2B4, &sp40) != 0) && (temp_f0 = arg0->unk2B4 - 30.0f, (temp_f0 < arg0->actor.world.pos.y))) {
        arg0->unk2B8 = temp_f0;
        return 2;
    }
    temp_f0_2 = arg0->actor.floorHeight + 20.0f;
    phi_v0 = 0;
    if (arg0->actor.world.pos.y < temp_f0_2) {
        arg0->unk2B8 = temp_f0_2;
        phi_v0 = 2;
    }
    return phi_v0;
}

s32 func_80A325E4(EnPr *arg0) {
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_f16;
    s16 phi_v1;
    s16 phi_v0;
    s32 phi_v1_2;

    temp_f16 = (s32) ((f32) arg0->unk214 * 0.2f);
    phi_v1 = (s16) temp_f16;
    if ((s32) (s16) temp_f16 < 0) {
        phi_v1 = (s16) -(s32) (s16) temp_f16;
    }
    Math_SmoothStepToS(arg0 + 0x32, arg0->unk22C, 1, (s16) (phi_v1 + 1), (s16) 0);
    temp_v0 = arg0->actor.world.rot.y - arg0->unk22C;
    arg0->unk216 = temp_v0;
    temp_v1 = arg0->unk216;
    phi_v0 = temp_v0;
    if ((s32) temp_v1 >= 0x2711) {
        arg0->unk216 = 0x2710;
        phi_v0 = arg0->actor.world.rot.y - arg0->unk22C;
    } else if ((s32) temp_v1 < -0x2710) {
        arg0->unk216 = -0x2710;
        phi_v0 = arg0->actor.world.rot.y - arg0->unk22C;
    }
    phi_v1_2 = (s32) phi_v0;
    if ((s32) phi_v0 < 0) {
        phi_v1_2 = -(s32) phi_v0;
    }
    if (phi_v1_2 >= 0x101) {
        return 1;
    }
    arg0->unk216 = 0;
    return 0;
}

void func_80A326F0(EnPr *arg0) {
    if (arg0->unk21C != 0) {
        func_80A3242C(NULL);
    }
    arg0->unk206 = 0;
    arg0->actionFunc = func_80A32740;
    arg0->actor.speedXZ = 1.0f;
}

void func_80A32740(EnPr *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    Actor *temp_v1;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_v0;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    sp1C = temp_v1;
    temp_v0 = func_80A324E0();
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {

        } else {
            this->unk206 = 3;
            this->actionFunc = func_80A32A40;
        }
        temp_f14 = this->actor.home.pos.x;
        temp_f16 = this->actor.home.pos.z;
        temp_f2 = this->actor.world.pos.x - temp_f14;
        temp_f18 = this->unk2C8;
        temp_f12 = this->actor.world.pos.z - temp_f16;
        if (temp_f18 < sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12))) {
            func_80A32854(temp_f12, temp_f14, this);
            return;
        }
        if ((this->unk20E == 0) && ((temp_v1->unkA6C * 0x10) < 0)) {
            temp_f2_2 = temp_v1->world.pos.x - temp_f14;
            temp_f12_2 = temp_v1->world.pos.z - temp_f16;
            if (sqrtf((temp_f2_2 * temp_f2_2) + (temp_f12_2 * temp_f12_2)) < temp_f18) {
                func_80A32AF8(temp_f12_2, temp_f14, this);
            }
        }
        return;
    }
    func_80A3295C(this);
}

void func_80A32854(void *arg0) {
    if (arg0->unk21C != 0) {
        func_80A3242C(NULL);
    }
    arg0->unk206 = 1;
    arg0->unk200 = func_80A3289C;
}

void func_80A3289C(EnPr *this, GlobalContext *globalCtx) {
    PosRot *temp_a0;
    PosRot *temp_a1;
    f32 temp_f12;
    f32 temp_f2;

    temp_a0 = &this->actor.world;
    temp_a1 = &this->actor.home;
    this = this;
    this->unk22C = Math_Vec3f_Yaw(&temp_a0->pos, &temp_a1->pos);
    func_80A325E4(this);
    temp_f2 = this->actor.world.pos.x - this->actor.home.pos.x;
    temp_f12 = this->actor.world.pos.z - this->actor.home.pos.z;
    if (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < ((((f32) gGameInfo->data[2453] * 0.1f) + 0.5f) * this->unk2C8)) {
        this->unk206 = 3;
        this->actionFunc = func_80A32A40;
    }
}

void func_80A3295C(EnPr *arg0) {
    arg0->unk22C = arg0->actor.world.rot.y + 0x4000;
    arg0->unk206 = 2;
    arg0->actionFunc = func_80A32984;
}

void func_80A32984(EnPr *this, GlobalContext *globalCtx) {
    if (((globalCtx->actorCtx.actorList[2].first->unkA6C * 0x10) < 0) && (this->unk20E == 0)) {
        this->unk22C = this->actor.world.rot.y;
        func_80A32AF8((bitwise f32) this);
        return;
    }
    if (func_80A325E4(this) == 0) {
        if (func_80A324E0(this, globalCtx) != 0) {
            this->unk22C += 0x1000;
            return;
        }
        if (this->unk21C != 0) {
            func_80A3242C(this, 0);
        }
        this->unk206 = 3;
        this->actionFunc = func_80A32A40;
        // Duplicate return node #9. Try simplifying control flow for better match
    }
}

void func_80A32A40(EnPr *this, GlobalContext *globalCtx) {
    Vec3f sp34;
    WaterBox *sp30;
    f32 temp_f0;

    Math_Vec3f_Copy(&sp34, &this->actor.world.pos);
    sp34.y = randPlusMinusPoint5Scaled(50.0f) + this->actor.home.pos.y;
    if (func_800CA1AC(globalCtx, &globalCtx->colCtx, this->actor.world.pos.x, this->actor.world.pos.z, &this->unk2B4, &sp30) != 0) {
        temp_f0 = this->unk2B4 - 30.0f;
        if (sp34.y < temp_f0) {
            this->unk2B8 = sp34.y;
        } else {
            this->unk2B8 = temp_f0;
        }
    }
    this->unk206 = 0;
    this->actionFunc = func_80A32740;
}

void func_80A32AF8(void *arg0) {
    arg0->unk206 = 4;
    arg0->unk200 = func_80A32B20;
    arg0->unk160 = 2.0f;
}

void func_80A32B20(EnPr *this, GlobalContext *globalCtx) {
    Actor *temp_s1;
    GameInfo *temp_v0;
    f32 temp_f12;
    f32 temp_f2;

    temp_s1 = globalCtx->actorCtx.actorList[2].first;
    this->actor.speedXZ = (f32) gGameInfo->data[2457] + 3.0f;
    temp_v0 = gGameInfo;
    Math_SmoothStepToS(&this->unk22C, this->actor.yawTowardsPlayer, (s16) (temp_v0->data[2449] + 1), (s16) (temp_v0->data[2450] + 0x3E8), (s16) (s32) temp_v0->data[2451]);
    this->unk2B8 = *(&D_80A338C0 + (gSaveContext.playerForm * 4)) + temp_s1->world.pos.y;
    func_80A324E0(this, globalCtx);
    if ((temp_s1->unkA6C * 0x10) >= 0) {
        this->unk144.animPlaybackSpeed = 1.0f;
        this->actor.speedXZ = 1.0f;
        func_80A32854((bitwise f32) this);
        return;
    }
    temp_f2 = temp_s1->world.pos.x - this->actor.home.pos.x;
    temp_f12 = temp_s1->world.pos.z - this->actor.home.pos.z;
    if (this->unk2C8 < sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12))) {
        this->unk144.animPlaybackSpeed = 1.0f;
        this->actor.speedXZ = 1.0f;
        func_80A32854(temp_f12, (bitwise f32) this);
        return;
    }
    if ((func_80A325E4((bitwise EnPr *) temp_f12, this) == 0) && (this->actor.xzDistToPlayer < 200.0f) && (fabsf(temp_s1->world.pos.y - this->actor.world.pos.y) < 80.0f)) {
        this->unk144.animPlaybackSpeed = 1.0f;
        func_80A32CDC(this);
    }
}

void func_80A32CDC(EnPr *arg0) {
    func_80A3242C((EnPr *)3);
    arg0->unk206 = 5;
    arg0->unk20A = 0x190;
    arg0->actionFunc = func_80A32D28;
    arg0->unk2C0 = 0.0f;
}

void func_80A32D28(EnPr *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    Actor *temp_v1;
    GameInfo *temp_v0;
    f32 temp_f12;
    f32 temp_f2;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if ((temp_v1->unkA6C * 0x10) >= 0) {
        this->unk144.animPlaybackSpeed = 1.0f;
        this->actor.speedXZ = 1.0f;
        func_80A32854((bitwise f32) this);
        return;
    }
    temp_v0 = gGameInfo;
    sp2C = temp_v1;
    Math_SmoothStepToS(&this->unk22C, this->actor.yawTowardsPlayer, (s16) (temp_v0->data[2449] + 1), (s16) (temp_v0->data[2450] + 0x3E8), (s16) (s32) temp_v0->data[2451]);
    func_80A325E4(this);
    this->unk2B8 = *(&D_80A338C0 + (gSaveContext.playerForm * 4)) + temp_v1->world.pos.y;
    func_80A324E0(this, globalCtx);
    temp_f2 = temp_v1->world.pos.x - this->actor.home.pos.x;
    temp_f12 = temp_v1->world.pos.z - this->actor.home.pos.z;
    if (this->unk2C8 < sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12))) {
        this->unk144.animPlaybackSpeed = 1.0f;
        this->actor.speedXZ = 1.0f;
        func_80A32854(temp_f12, (bitwise f32) this);
    }
}

void func_80A32E60(Actor *arg0) {
    func_80A3242C((EnPr *)4);
    arg0->unk206 = 6;
    arg0->unk200 = func_80A32EA4;
    arg0->speedXZ = 0.0f;
}

void func_80A32EA4(EnPr *this, GlobalContext *globalCtx) {
    EnPr *temp_a2;

    temp_a2 = this;
    if (temp_a2->unk2BC <= temp_a2->unk144.animCurrentFrame) {
        if ((s32) temp_a2->actor.colChkInfo.health <= 0) {
            temp_a2->unk206 = 7;
            temp_a2->unk20A = 0x32;
            temp_a2->actor.flags |= 0x8000000;
            temp_a2->unk2C4 = 0.0f;
            this = temp_a2;
            Enemy_StartFinishingBlow(globalCtx, &temp_a2->actor);
            Audio_PlayActorSound2(&this->actor, 0x3978U);
            this->unk216 = 0;
            this->actionFunc = func_80A32F48;
            return;
        }
        func_80A326F0(temp_a2, temp_a2, globalCtx);
        // Duplicate return node #4. Try simplifying control flow for better match
    }
}

void func_80A32F48(EnPr *this, GlobalContext *globalCtx) {
    WaterBox *sp2C;
    s16 temp_v0;

    temp_v0 = this->unk208;
    if ((s32) temp_v0 > 0) {
        this->unk208 = temp_v0 - 2;
    } else {
        this->unk208 = 0;
    }
    if (func_800CA1AC(globalCtx, &globalCtx->colCtx, this->actor.world.pos.x, this->actor.world.pos.z, &this->unk2B4, &sp2C) != 0) {
        if ((this->unk2B4 - 100.0f) < this->actor.world.pos.y) {
            this->unk212 += 0xBB8;
            this->unk2C4 = 2.0f * Math_SinS(this->unk212);
        }
        Math_ApproachF(&this->actor.world.pos.y, (this->unk2B4 - 16.0f) + this->unk2C4, 0.5f, 2.0f);
        Math_SmoothStepToS(&this->actor.world.rot.z, 0x7700, 0x12C, 0x3E8, (s16) 0x3E8);
    }
    if ((this->unk20A == 0) && (this->unk208 == 0)) {
        this->unk2D2 = 1;
    }
    if (this->unk2D2 != 0) {
        Math_SmoothStepToS(&this->unk2D0, 0, 1, 0xF, (s16) 0x32);
        if ((s32) this->unk2D0 < 2) {
            Actor_MarkForDeath(&this->actor);
        }
    }
}

void func_80A33098(Actor *arg0, GlobalContext *arg1) {
    void *sp3C;
    s16 temp_v0;
    s16 temp_v0_3;
    u8 temp_v0_2;

    temp_v0 = arg0->unk206;
    if ((temp_v0 != 7) && (temp_v0 != 6)) {
        temp_v0_2 = arg0->unk30D;
        if ((temp_v0_2 & 2) != 0) {
            arg0->unk30D = (u8) (temp_v0_2 & 0xFFFD);
            if (arg0->colChkInfo.damageEffect == 4) {
                arg0->unk22E = 0x28;
                arg0->unk230 = 0x14;
                sp3C = arg1->actorCtx.actorList[2].first;
                Actor_Spawn(arg1 + 0x1CA0, arg1, 0xA2, arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
            }
            if (((arg1->actorCtx.actorList[2].first->unkA6C * 0x10) < 0) && (arg0->colChkInfo.damageEffect == 5)) {
                arg0->unk22E = 0x28;
                arg0->unk230 = 0x1F;
            }
            temp_v0_3 = arg0->unk206;
            if ((temp_v0_3 != 6) && (temp_v0_3 != 7)) {
                Actor_ApplyDamage(arg0);
                func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 8);
                Audio_PlayActorSound2(arg0, 0x3977U);
                func_80A32E60(arg0);
            }
        }
    }
}

void EnPr_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnPr *this = (EnPr *) thisx;
    Vec3f sp50;
    Vec3f sp40;
    PosRot *sp38;
    ColliderCylinder *sp34;
    ColliderCylinder *temp_a1_2;
    CollisionCheckContext *temp_a1_3;
    PosRot *temp_a1;
    f32 temp_f8;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v1;
    s32 temp_s0;
    s32 phi_s0;

    SkelAnime_FrameUpdateMatrix(&this->unk144);
    temp_v1 = this->unk20A;
    if (temp_v1 != 0) {
        this->unk20A = temp_v1 - 1;
    }
    temp_v0 = this->unk20E;
    if (temp_v0 != 0) {
        this->unk20E = temp_v0 - 1;
    }
    temp_v0_2 = this->unk20C;
    if (temp_v0_2 != 0) {
        this->unk20C = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk210;
    if (temp_v0_3 != 0) {
        this->unk210 = temp_v0_3 - 1;
    }
    this->actionFunc(this, globalCtx);
    Actor_SetHeight(&this->actor, 20.0f);
    func_80A33098(&this->actor, globalCtx);
    temp_a1 = &this->actor.world;
    sp38 = temp_a1;
    Math_Vec3f_Copy(&this->unk2E0, &temp_a1->pos);
    temp_f8 = this->unk2E0.x + (Math_SinS(this->actor.world.rot.y) * 70.0f);
    this->unk2E0.y = this->unk2D8 - 10.0f;
    this->unk2E0.x = temp_f8;
    this->unk2E0.z += Math_CosS(this->actor.world.rot.y) * 70.0f;
    Math_SmoothStepToS(&this->unk214, this->unk216, 1, 0x7D0, (s16) 0);
    if (this->unk210 == 0) {
        this->unk210 = Rand_S16Offset(0xA, 0x1E);
        this->unk204 = 1;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    if (this->unk206 != 7) {
        Math_ApproachF(&this->actor.world.pos.y, this->unk2B8, 0.3f, (f32) gGameInfo->data[2411] + 1.0f);
        Math_Vec3f_Copy(&sp50, &sp38->pos);
        sp50.y = this->unk2B8;
        if (fabsf(this->actor.world.pos.y - this->unk2B8) > 8.0f) {
            Math_SmoothStepToS(&this->actor.world.rot.x, (s16) (s32) ((f32) Math_Vec3f_Pitch(&sp38->pos, &sp50) * 0.3f), 1, (s16) (gGameInfo->data[2448] + 0x1F4), (s16) 0);
        } else {
            Math_SmoothStepToS(&this->actor.world.rot.x, 0, 1, (s16) (gGameInfo->data[2452] + 0x1F4), (s16) 0);
        }
    }
    sp38 = (PosRot *) &this->actor.world.rot;
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 30.0f, 20.0f, 0x1DU);
    Math_Vec3s_Copy(&this->actor.shape.rot, (Vec3s *) sp38);
    temp_a1_2 = &this->unk2FC;
    if (this->unk206 != 7) {
        sp34 = temp_a1_2;
        Collider_UpdateCylinder(&this->actor, temp_a1_2);
        temp_a1_3 = &globalCtx->colChkCtx;
        sp38 = (PosRot *) temp_a1_3;
        CollisionCheck_SetAC(globalCtx, temp_a1_3, &sp34->base);
        CollisionCheck_SetAT(globalCtx, temp_a1_3, &sp34->base);
        if (this->unk204 != 0) {
            Math_Vec3f_Copy(&sp40, &this->unk2D4);
            this->unk204 = 0;
            sp40.x += randPlusMinusPoint5Scaled(20.0f);
            sp40.y += randPlusMinusPoint5Scaled(5.0f);
            sp40.z += randPlusMinusPoint5Scaled(20.0f);
            phi_s0 = 0;
            if (((s32) Rand_ZeroFloat(5.0f) + 5) > 0) {
                do {
                    EffectSsBubble_Spawn(globalCtx, &sp40, 0.0f, 5.0f, 5.0f, Rand_ZeroFloat(0.03f) + 0.07f);
                    temp_s0 = phi_s0 + 1;
                    phi_s0 = temp_s0;
                } while (temp_s0 < ((s32) Rand_ZeroFloat(5.0f) + 5));
            }
        }
    }
}

s32 func_80A3357C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 2) {
        arg4->y += arg5->unk214;
    }
    return 0;
}

void func_80A335B4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f sp24;
    s32 temp_t3;

    sp24.x = D_80A3393C.unk0;
    sp24.y = D_80A3393C.unk4;
    sp24.z = D_80A3393C.unk8;
    if (arg1 == 2) {
        SysMatrix_InsertTranslation(0.0f, 0.0f, 0.0f, 1);
        SysMatrix_MultiplyVector3fByState(&sp24, arg4 + 0x2D4);
    }
    if ((arg1 == 0) || (arg1 == 1) || (arg1 == 2) || (arg1 == 3) || (arg1 == 4) || (arg1 == 5) || (arg1 == 6) || (arg1 == 7) || (arg1 == 8) || (arg1 == 9)) {
        SysMatrix_GetStateTranslation(arg4 + (arg4->unk228 * 0xC) + 0x23C);
        temp_t3 = arg4->unk228 + 1;
        arg4->unk228 = temp_t3;
        if (temp_t3 >= 0xA) {
            arg4->unk228 = 0;
        }
    }
}

void EnPr_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnPr *this = (EnPr *) thisx;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    s16 temp_v0_4;
    s32 temp_v1;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    if (this->unk2D2 == 0) {
        temp_v0 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w1 = 0;
        temp_v0->words.w0 = 0xE7000000;
        temp_v0_2 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFA000000;
        temp_v1 = this->unk208 & 0xFF;
        temp_v0_2->words.w1 = (temp_v1 << 0x18) | (temp_v1 << 0x10) | (temp_v1 << 8) | (this->unk2D0 & 0xFF);
        temp_v0_3 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFB000000;
        temp_v0_3->words.w1 = this->unk2D0 & 0xFF;
        Scene_SetRenderModeXlu(globalCtx, 0, 1U);
        SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80A3357C, func_80A335B4, &this->actor);
    } else {
        temp_v1_2 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v1_2 + 8;
        temp_v1_2->words.w1 = 0;
        temp_v1_2->words.w0 = 0xE7000000;
        temp_v1_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v1_3 + 8;
        temp_v1_3->words.w0 = 0xFB000000;
        temp_v1_3->words.w1 = this->unk2D0 & 0xFF;
        Scene_SetRenderModeXlu(globalCtx, 1, 2U);
        temp_s1->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, NULL, NULL, &this->actor, temp_s1->polyXlu.p);
    }
    temp_v0_4 = this->unk22E;
    if (temp_v0_4 != 0) {
        this->unk238 = 0.8f;
        this->unk234 = 0.8f;
        func_800BE680(globalCtx, &this->actor, (Vec3f []) &this->unk23C, 0xA, 0.8f, 0.8f, (f32) temp_v0_4 * 0.05f, (u8) (s32) this->unk230);
    }
}

