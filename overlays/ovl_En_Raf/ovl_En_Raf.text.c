void func_80A16D40(void *arg0, ? *arg1, s32 arg2);  /* static */
void func_80A16D6C(void *arg0, ? *arg1, s16 arg2);  /* static */
void func_80A17060(EnRaf *arg0, s32 arg1);          /* static */
void func_80A1712C(EnRaf *arg0);                    /* static */
void func_80A17414(EnRaf *arg0);                    /* static */
void func_80A17530(EnRaf *arg0);                    /* static */
void func_80A17848(EnRaf *arg0, GlobalContext *arg1); /* static */
void func_80A179C8(EnRaf *arg0, GlobalContext *arg1); /* static */
void func_80A17D14(EnRaf *arg0);                    /* static */
void func_80A17DDC(EnRaf *arg0);                    /* static */
void func_80A18080(EnRaf *arg0);                    /* static */
void func_80A1859C(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
void func_80A18A90(Actor *arg0, Vec3f *arg1, f32 *arg2, f32 *arg3, f32 arg4, s32 arg5); /* static */
void func_80A18B8C(EnRaf *arg0, GlobalContext *arg1); /* static */
void func_80A18DA0(EnRaf *arg0, GlobalContext *arg1); /* static */
extern CollisionHeader D_06000108;
extern AnimationHeader D_06000A64;
extern ? D_060024E0;
extern void D_06002EF8;
extern void D_060032F8;
extern FlexSkeletonHeader D_06003428;
static ColliderCylinderInit D_80A18EE0 = {
    {0xA, 0x11, 0, 0x39, 0x10, 1},
    {0, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 0, 1},
    {0x32, 0xA, 0xFFF6, {0, 0, 0}},
};
static ? D_80A18F0C;                                /* unable to generate initializer */
static ? D_80A18F4C;                                /* unable to generate initializer */
static ? D_80A18F8C;                                /* unable to generate initializer */
static ? D_80A1918C;                                /* unable to generate initializer */
static DamageTable D_80A1939C = {
    {
        0xF0,
        0xF0,
        0,
        0xE1,
        0xF0,
        0xF0,
        0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0,
        0,
        0xF0,
        0xF0,
        0xF0,
        0,
        0xF0,
        0,
        0,
        0,
        0,
        0xF0,
    },
};
static ? D_80A193BC;                                /* unable to generate initializer */
static ? D_80A193C8;                                /* unable to generate initializer */
static ? D_80A193E0;                                /* unable to generate initializer */
static ? D_80A193E8;                                /* unable to generate initializer */
static ? D_80A193F4;                                /* unable to generate initializer */
static ? D_80A19400;                                /* unable to generate initializer */
static ? D_80A1940C;                                /* unable to generate initializer */
static s16 D_80A19418 = {0, 4, 6, 0};
static ? D_80A19420;                                /* unable to generate initializer */
static Vec3f D_80A19438 = {0.0f, 1.5f, 0.7f};
static ? D_80A19444;                                /* unable to generate initializer */
static Vec3f D_80A1945C = {1.5f, 1.2f, 0.8f};
static s16 D_80A19468 = {0, 7, 9, 0xD, 0x13, 0};
static ? D_80A19474;                                /* unable to generate initializer */
static ? D_80A194B0;                                /* unable to generate initializer */

typedef struct EnRaf {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ SkelAnime unk15C;                  /* inferred */
    /* 0x01A0 */ Vec3s unk1A0;                      /* inferred */
    /* 0x01A6 */ char pad1A6[0x42];                 /* maybe part of unk1A0[12]? */
    /* 0x01E8 */ Vec3s unk1E8;                      /* inferred */
    /* 0x01EE */ char pad1EE[0x42];                 /* maybe part of unk1E8[12]? */
    /* 0x0230 */ void (*actionFunc)(EnRaf *, GlobalContext *);
    /* 0x0234 */ Vec3f unk234;                      /* inferred */
    /* 0x0240 */ char pad240[0x84];                 /* maybe part of unk234[12]? */
    /* 0x02C4 */ Vec3f unk2C4;                      /* inferred */
    /* 0x02D0 */ char pad2D0[0xC];                  /* maybe part of unk2C4[2]? */
    /* 0x02DC */ Vec3f unk2DC;                      /* inferred */
    /* 0x02E8 */ char pad2E8[0x6A];
    /* 0x0352 */ s16 unk352;                        /* inferred */
    /* 0x0354 */ s16 unk354;                        /* inferred */
    /* 0x0356 */ s16 unk356;                        /* inferred */
    /* 0x0358 */ char pad358[0x44];                 /* maybe part of unk356[35]? */
    /* 0x039C */ s16 unk39C;                        /* inferred */
    /* 0x039E */ u8 unk39E;                         /* inferred */
    /* 0x039F */ char pad39F[0x1];                  /* maybe part of unk39E[2]? */
    /* 0x03A0 */ f32 unk3A0;                        /* inferred */
    /* 0x03A4 */ f32 unk3A4;                        /* inferred */
    /* 0x03A8 */ f32 unk3A8;                        /* inferred */
    /* 0x03AC */ f32 unk3AC;                        /* inferred */
    /* 0x03B0 */ f32 unk3B0;                        /* inferred */
    /* 0x03B4 */ s16 unk3B4;                        /* inferred */
    /* 0x03B6 */ s16 unk3B6;                        /* inferred */
    /* 0x03B8 */ s16 unk3B8;                        /* inferred */
    /* 0x03BA */ s16 unk3BA;                        /* inferred */
    /* 0x03BC */ s16 unk3BC;                        /* inferred */
    /* 0x03BE */ s16 unk3BE;                        /* inferred */
    /* 0x03C0 */ s16 unk3C0;                        /* inferred */
    /* 0x03C2 */ s16 unk3C2;                        /* inferred */
    /* 0x03C4 */ s16 unk3C4;                        /* inferred */
    /* 0x03C6 */ s16 unk3C6;                        /* inferred */
    /* 0x03C8 */ s16 unk3C8;                        /* inferred */
    /* 0x03CA */ s16 unk3CA;                        /* inferred */
    /* 0x03CC */ s16 unk3CC;                        /* inferred */
    /* 0x03CE */ s16 unk3CE;                        /* inferred */
    /* 0x03D0 */ ColliderCylinder unk3D0;           /* inferred */
    /* 0x041C */ char pad41C[0x6C8];
} EnRaf;                                            /* size 0xAE4 */

void func_80A16D40(void *arg0, ? *arg1, s32 arg2) {
    if ((arg2 < 0x40) && (*(arg1 + arg2) != 0)) {
        *(arg0 + (arg2 * 2)) = 0;
    }
}

void func_80A16D6C(void *arg0, ? *arg1, s16 arg2) {
    if (*(arg1 + arg2) != 0) {
        *(arg0 + (arg2 * 2)) = 0;
    }
}

void EnRaf_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnRaf *this = (EnRaf *) thisx;
    Vec3f sp60;
    CollisionHeader *sp54;
    s16 *temp_v0_2;
    s16 temp_a1;
    s16 temp_v0;
    s32 temp_s0;
    s32 temp_s0_2;
    Vec3f *phi_s2;
    Vec3f *phi_s1;
    s32 phi_s0;
    Vec3f *phi_s2_2;
    Vec3f *phi_s1_2;
    s32 phi_s0_2;

    sp60.x = D_80A193BC.unk0;
    sp60.y = D_80A193BC.unk4;
    sp60.z = D_80A193BC.unk8;
    sp54 = NULL;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck_RelocateMeshHeader(&D_06000108, &sp54);
    this->unk144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp54);
    Collider_InitAndSetCylinder(globalCtx, &this->unk3D0, &this->actor, &D_80A18EE0);
    this->actor.targetMode = 3;
    this->actor.colChkInfo.mass = 0xFF;
    SkelAnime_InitSV(globalCtx, &this->unk15C, &D_06003428, &D_06000A64, &this->unk1A0, &this->unk1E8, 0xC);
    phi_s2 = &this->unk2C4;
    phi_s1 = &this->unk234;
    phi_s0 = 0;
    do {
        Math_Vec3f_Copy(phi_s2, &sp60);
        Math_Vec3f_Copy(phi_s1, &sp60);
        temp_s0 = phi_s0 + 0xC;
        phi_s2 += 0xC;
        phi_s1 += 0xC;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x90);
    this->actor.colChkInfo.damageTable = &D_80A1939C;
    temp_v0 = this->actor.params;
    this->unk3C0 = temp_v0 & 0x7F;
    this->actor.colChkInfo.health = gGameInfo->data[2401] + 2;
    this->unk3BE = ((s32) temp_v0 >> 0xC) & 0xF;
    this->unk3BA = ((s32) temp_v0 >> 7) & 0x1F;
    if (this->unk3C0 == 0x7F) {
        this->unk3C0 = -1;
    }
    if (this->unk3BA == 0x1F) {
        this->unk3BA = -1;
    } else {
        this->unk3BA = 0x1E;
    }
    temp_a1 = this->unk3C0;
    if ((((s32) temp_a1 >= 0) || (this->unk3BE == 1) || ((gSaveContext.weekEventReg[12] & 1) != 0)) && ((phi_s0_2 = 0x18, (Flags_GetSwitch(globalCtx, (s32) temp_a1) != 0)) || (this->unk3BE == 1))) {
        temp_v0_2 = &this->actor.home.rot.z;
        phi_s2_2 = (Vec3f *) (temp_v0_2 + 0x234);
        phi_s1_2 = (Vec3f *) (temp_v0_2 + 0x2C4);
        do {
            Math_Vec3f_Copy(phi_s2_2, &D_801D15B0);
            Math_Vec3f_Copy(phi_s1_2, &D_801D15B0);
            temp_s0_2 = phi_s0_2 + 0xC;
            phi_s2_2 += 0xC;
            phi_s1_2 += 0xC;
            phi_s0_2 = temp_s0_2;
        } while (temp_s0_2 != 0x84);
        func_80A18080(this);
        return;
    }
    this->unk3B0 = Rand_ZeroFloat(1.0f) * 20000.0f;
    Actor_SetScale(&this->actor, 0.01f);
    func_80A1712C(this);
}

void EnRaf_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnRaf *this = (EnRaf *) thisx;
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk144);
    Collider_DestroyCylinder(globalCtx, &this->unk3D0);
}

void func_80A17060(EnRaf *arg0, s32 arg1) {
    f32 sp34;
    f32 sp30;
    AnimationHeaderCommon **sp2C;
    AnimationHeaderCommon **temp_t0;
    f32 phi_f2;
    f32 phi_f0;

    temp_t0 = (arg1 * 4) + &D_80A193C8;
    sp2C = temp_t0;
    sp34 = 0.0f;
    sp30 = 1.0f;
    arg0->unk3A0 = (f32) SkelAnime_GetFrameCount(*temp_t0);
    phi_f2 = 1.0f;
    phi_f0 = 0.0f;
    if (arg1 == 0) {
        phi_f0 = arg0->unk3A0;
    } else if (arg1 == 1) {
        phi_f2 = 2.0f;
    }
    SkelAnime_ChangeAnim(arg0 + 0x15C, (AnimationHeader *) *temp_t0, phi_f2, phi_f0, arg0->unk3A0, (u8) (s32) *(&D_80A193E0 + arg1), -4.0f);
}

void func_80A1712C(EnRaf *arg0) {
    Vec3f sp3C;
    s32 temp_s0;
    Vec3f *phi_s1;
    s32 phi_s0;

    sp3C.x = D_80A193E8.unk0;
    sp3C.y = D_80A193E8.unk4;
    sp3C.z = D_80A193E8.unk8;
    func_80A17060(arg0, 0);
    phi_s1 = arg0 + 0x2DC;
    phi_s0 = 0x18;
    do {
        Math_Vec3f_Copy(phi_s1, &sp3C);
        temp_s0 = phi_s0 + 0xC;
        phi_s1 += 0xC;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x84);
    arg0->unk3C2 = 3;
    arg0->unk3C6 = 0;
    arg0->actionFunc = func_80A171D8;
}

void func_80A171D8(EnRaf *this, GlobalContext *globalCtx) {
    Actor *sp24;
    Actor *temp_a0_2;
    Actor *temp_a0_3;
    Actor *temp_a3;
    EnRaf *temp_a0;
    Actor *phi_a0;

    temp_a3 = globalCtx->actorCtx.actorList[2].first;
    if (this->unk3B4 == 0) {
        if ((temp_a3->unk14B != 3) && (this->actor.xzDistToPlayer < ((f32) gGameInfo->data[2448] + 80.0f)) && (temp_a0 = this, (temp_a3->unkD5C == 0)) && (this = this, sp24 = temp_a3, (func_800CAF70((DynaPolyActor *) temp_a0) != 0)) && ((temp_a3->unkA6C * 0x10) >= 0) && (this = this, sp24 = temp_a3, (globalCtx->grabPlayer(globalCtx, (Player *) temp_a3) != 0))) {
            temp_a3->parent = &this->actor;
            this->unk39C = 0;
            if (temp_a3->unk14B == 1) {
                this->unk39C = 2;
            } else {
                temp_a3->unkAE8 = 0x32;
            }
            this->unk3BC = temp_a3->world.rot.y;
            func_80A17414(this);
            return;
        }
        if (((globalCtx->gameplayFrames & 1) != 0) && (temp_a0_2 = globalCtx->actorCtx.actorList[3].first, phi_a0 = temp_a0_2, (temp_a0_2 != 0))) {
loop_14:
            if (phi_a0 == this) {
                goto block_22;
            }
            if ((fabsf(phi_a0->world.pos.x - this->actor.world.pos.x) < 80.0f) && (fabsf(phi_a0->world.pos.y - this->actor.world.pos.y) < 30.0f) && (fabsf(phi_a0->world.pos.z - this->actor.world.pos.z) < 80.0f) && (phi_a0->update != 0) && (phi_a0->velocity.y != 0.0f)) {
                this = this;
                Actor_MarkForDeath(phi_a0);
                this->unk39C = 1;
                this->unk3D0.dim.radius = 0x1E;
                this->unk3D0.dim.height = 0x5A;
                this->unk3D0.dim.yShift = -0xA;
                func_80A17414(this);
                return;
            }
block_22:
            temp_a0_3 = phi_a0->next;
            phi_a0 = temp_a0_3;
            if (temp_a0_3 == 0) {
                // Duplicate return node #23. Try simplifying control flow for better match
                return;
            }
            goto loop_14;
        }
        // Duplicate return node #23. Try simplifying control flow for better match
    }
}

void func_80A17414(Actor *arg0) {
    func_80A17060((EnRaf *)1);
    arg0->unk3C2 = 1;
    Audio_PlayActorSound2(arg0, 0x3992U);
    arg0->unk3C6 = 1;
    arg0->unk230 = func_80A17464;
}

void func_80A17464(EnRaf *this, GlobalContext *globalCtx) {
    Actor *sp24;
    f32 sp20;
    Actor *temp_v0;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    sp20 = this->unk15C.animCurrentFrame;
    if ((this->unk39C != 1) && ((temp_v0->unkA70 & 0x80) != 0) && (this == temp_v0->parent)) {
        sp24 = temp_v0;
        Math_ApproachF(&temp_v0->world.pos.x, this->actor.world.pos.x, 0.3f, 10.0f);
        Math_ApproachF(&temp_v0->world.pos.y, this->actor.world.pos.y, 0.3f, 10.0f);
        Math_ApproachF(&temp_v0->world.pos.z, this->actor.world.pos.z, 0.3f, 10.0f);
    }
    if (this->unk3A0 <= sp20) {
        func_80A17530(this);
    }
}

void func_80A17530(EnRaf *arg0) {
    EnRaf *temp_s0;
    s32 temp_s1;
    EnRaf *phi_s0;
    s32 phi_s1;

    func_80A17060(arg0, 2);
    arg0->unk3C4 = 0;
    phi_s0 = arg0;
    phi_s1 = 0;
    do {
        phi_s0->unk354 = Rand_S16Offset(8, 8) << 8;
        phi_s0->unk356 = Rand_S16Offset(8, 8) << 8;
        temp_s1 = phi_s1 + 1;
        temp_s0 = phi_s0 + 6;
        temp_s0->unk352 = Rand_S16Offset(8, 8) << 8;
        phi_s0 = temp_s0;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0xC);
    arg0->unk3C2 = 2;
    arg0->unk3C6 = 2;
    arg0->actionFunc = func_80A175E4;
}

void func_80A175E4(EnRaf *this, GlobalContext *globalCtx) {
    f32 sp30;
    PosRot *sp24;
    Actor *temp_s1;
    s16 temp_v0;

    temp_s1 = globalCtx->actorCtx.actorList[2].first;
    sp30 = this->unk15C.animCurrentFrame;
    Math_ApproachF(&this->unk3A4, ((f32) gGameInfo->data[2451] / 100.0f) + 0.2f, 0.2f, 0.03f);
    if (((temp_s1->unkA70 & 0x80) != 0) && (this->unk39C != 1) && (this == temp_s1->parent)) {
        Math_ApproachF(&temp_s1->world.pos.x, this->actor.world.pos.x, 0.3f, 10.0f);
        Math_ApproachF(&temp_s1->world.pos.y, this->actor.world.pos.y, 0.3f, 10.0f);
        Math_ApproachF(&temp_s1->world.pos.z, this->actor.world.pos.z, 0.3f, 10.0f);
    }
    if (this->unk3A0 <= sp30) {
        if (gGameInfo->data[2452] == 0) {
            this->unk3C4 += 1;
        }
        Audio_PlayActorSound2(&this->actor, 0x3850U);
        temp_v0 = this->unk39C;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {
                if (temp_v0 != 2) {
                    return;
                }
                if ((gGameInfo->data[2454] + 4) < (s32) this->unk3C4) {
                    temp_s1->parent = NULL;
                    temp_s1->unkAE8 = 0x3E8;
                    func_80A179C8(this, globalCtx);
                }
                // Duplicate return node #18. Try simplifying control flow for better match
                return;
            }
            Actor_ApplyDamage(&this->actor);
            if ((gGameInfo->data[2454] + 4) < (s32) this->unk3C4) {
                func_80A179C8(this, globalCtx);
                return;
            }
            // Duplicate return node #18. Try simplifying control flow for better match
            return;
        }
        sp24 = &temp_s1->world;
        globalCtx->damagePlayer(globalCtx, -2);
        func_800B8E58(&this->actor, (temp_s1->unkA68->unk92 + 0x6805) & 0xFFFF);
        CollisionCheck_GreenBlood(globalCtx, NULL, &sp24->pos);
        if (((gGameInfo->data[2453] + 5) < (s32) this->unk3C4) || ((temp_s1->unkA70 & 0x80) == 0)) {
            temp_s1->freezeTimer = 0xA;
            func_80A17848(this, globalCtx);
            return;
        }
        // Duplicate return node #18. Try simplifying control flow for better match
    }
}

void func_80A17848(EnRaf *arg0, GlobalContext *arg1) {
    void *sp1C;

    sp1C = arg1->actorCtx.actorList[2].first;
    func_80A17060((EnRaf *)3, (s32) arg1);
    sp1C->freezeTimer = 0xA;
    arg0->unk3C2 = 3;
    arg0->unk3C6 = 3;
    arg0->actionFunc = func_80A178A0;
}

void func_80A178A0(EnRaf *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    f32 sp28;
    Actor *temp_v1;
    GameInfo *temp_v0;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    sp28 = this->unk15C.animCurrentFrame;
    sp2C = temp_v1;
    if (func_801378B8(&this->unk15C, 10.0f) != 0) {
        temp_v1->freezeTimer = 0;
        temp_v1->parent = NULL;
        Audio_PlayActorSound2(&this->actor, 0x3994U);
        temp_v0 = gGameInfo;
        func_800B8D50(globalCtx, &this->actor, (f32) temp_v0->data[2455] + 3.0f, (s16) (this->unk3BC + 0x8000), (f32) temp_v0->data[2456] + 10.0f, 0U);
    } else if (sp28 < 10.0f) {
        temp_v1->freezeTimer = 0xA;
    }
    if (this->unk3A0 <= sp28) {
        this->unk3C2 = 3;
        this->unk3C6 = 0;
        this->unk3B4 = 0x14;
        this->actionFunc = func_80A171D8;
    }
}

void func_80A179C8(Actor *arg0, GlobalContext *arg1) {
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    Vec3f sp94;
    ActorContext *sp80;
    ActorContext *temp_a0;
    Vec3f *temp_s1;
    f32 *temp_s3;
    f32 *temp_s5;
    f32 temp_f0;
    f32 temp_f6;
    s16 temp_a1;
    s32 temp_s0;
    s32 temp_s2;
    s32 phi_s2;
    Vec3f *phi_s1;
    s32 phi_s0;

    temp_s3 = &spAC;
    temp_s5 = &spA0;
    temp_s3->unk0 = D_80A193F4.unk0;
    temp_s1 = arg0 + 0x24;
    temp_s3->unk4 = (s32) D_80A193F4.unk4;
    temp_s3->unk8 = (s32) D_80A193F4.unk8;
    temp_s5->unk0 = D_80A19400.unk0;
    temp_s5->unk4 = (s32) D_80A19400.unk4;
    temp_s5->unk8 = (s32) D_80A19400.unk8;
    arg0->unk3C6 = 4;
    Math_Vec3f_Copy(&sp94, temp_s1);
    temp_f0 = sp94.y + 10.0f;
    temp_a0 = arg1 + 0x1CA0;
    sp80 = temp_a0;
    sp94.y = temp_f0;
    Actor_Spawn(temp_a0, arg1, 0xA2, sp94.x, temp_f0, sp94.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
    Audio_PlayActorSound2(arg0, 0x180EU);
    Audio_PlayActorSound2(arg0, 0x3851U);
    temp_a1 = arg0->unk3C0;
    if ((s32) temp_a1 >= 0) {
        Actor_SetSwitchFlag(arg1, (s32) temp_a1);
    }
    arg0->unk3C2 = 0;
    phi_s2 = 0;
    if ((gGameInfo->data[2457] + 0x1E) > 0) {
        do {
            temp_f6 = Rand_ZeroOne() - 0.5f;
            spA4 = -0.3f;
            spA0 = temp_f6 * 0.5f;
            spA8 = (Rand_ZeroOne() - 0.5f) * 0.5f;
            spAC = Rand_ZeroOne() - 0.5f;
            spB0 = Rand_ZeroOne() * 10.0f;
            spB4 = Rand_ZeroOne() - 0.5f;
            func_80A18A90(arg0, temp_s1, temp_s3, temp_s5, (Rand_ZeroFloat(1.0f) / 500.0f) + 0.002f, 0x5A);
            temp_s2 = phi_s2 + 1;
            phi_s2 = temp_s2;
        } while (temp_s2 < (gGameInfo->data[2457] + 0x1E));
    }
    phi_s1 = arg0 + 0x2DC;
    phi_s0 = 0x18;
    do {
        Math_Vec3f_Copy(phi_s1, &D_801D15B0);
        temp_s0 = phi_s0 + 0xC;
        phi_s1 += 0xC;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x84);
    arg0->unk3B4 = 5;
    if (arg0->unk39C == 1) {
        func_800BC154(arg1, sp80, arg0, 5U);
        arg0->flags |= 5;
    }
    arg0->unk230 = func_80A17C6C;
}

void func_80A17C6C(EnRaf *this, GlobalContext *globalCtx) {
    if (this->unk3B4 == 0) {
        this->unk3D0.dim.radius = 0x32;
        this->unk3D0.dim.height = 0xA;
        func_800BC154(globalCtx, &globalCtx->actorCtx, &this->actor, 6U);
        this->actor.flags &= -6;
        func_80A18080(this);
        return;
    }
    if (this->unk39C == 1) {
        this->unk3D0.dim.radius = 0x50;
        this->unk3D0.dim.height = 0x32;
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &this->unk3D0.base);
    }
}

void func_80A17D14(EnRaf *arg0) {
    func_80A17060((EnRaf *)4);
    arg0->unk3C4 = 0;
    arg0->unk3C6 = 5;
    arg0->actionFunc = func_80A17D54;
}

void func_80A17D54(EnRaf *this, GlobalContext *globalCtx) {
    s16 temp_a1;

    if (this->unk3A0 <= this->unk15C.animCurrentFrame) {
        this->unk3C4 += 1;
        if ((gGameInfo->data[2402] + 2) < (s32) this->unk3C4) {
            temp_a1 = this->unk3C0;
            if ((s32) temp_a1 >= 0) {
                this = this;
                Actor_SetSwitchFlag(globalCtx, (s32) temp_a1);
            }
            func_80A17DDC(this);
        }
    }
}

void func_80A17DDC(EnRaf *arg0) {
    func_80A17060((EnRaf *)5);
    arg0->unk3C6 = 6;
    arg0->unk3B6 = 0;
    arg0->actionFunc = func_80A17E1C;
}

void func_80A17E1C(EnRaf *this, GlobalContext *globalCtx) {
    GameInfo *temp_v0;
    GameInfo *temp_v0_4;
    s16 *temp_v0_7;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s32 temp_s0;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 phi_s4;
    s32 phi_s4_2;
    Vec3f *phi_s1;
    Vec3f *phi_s2;
    s32 phi_s0;

    if (this->unk3A0 <= this->unk15C.animCurrentFrame) {
        this->unk3B6 += 1;
        temp_v0 = gGameInfo;
        if ((s32) this->unk3B6 < (temp_v0->data[2403] + 0x69)) {
            phi_s4 = 0;
            if ((temp_v0->data[2404] + 5) > 0) {
                do {
                    func_80A16D6C(Lib_SegmentedToVirtual(&D_06002EF8), &D_80A18F8C, this->unk3C8);
                    func_80A16D40(Lib_SegmentedToVirtual(&D_060032F8), &D_80A18F0C, (s32) this->unk3CA);
                    temp_v0_2 = this->unk3C8;
                    if ((s32) temp_v0_2 < 0x200) {
                        this->unk3C8 = temp_v0_2 + 1;
                    }
                    temp_v0_3 = this->unk3CA;
                    if ((s32) temp_v0_3 < 0x40) {
                        this->unk3CA = temp_v0_3 + 1;
                    }
                    temp_s4 = phi_s4 + 1;
                    phi_s4 = temp_s4;
                } while (temp_s4 < (gGameInfo->data[2404] + 5));
            }
        }
    }
    temp_v0_4 = gGameInfo;
    if ((temp_v0_4->data[2405] + 0x32) < (s32) this->unk3B6) {
        phi_s4_2 = 0;
        if ((temp_v0_4->data[2406] + 5) > 0) {
            do {
                func_80A16D6C(Lib_SegmentedToVirtual(&D_06002EF8), &D_80A1918C, this->unk3CC);
                func_80A16D40(Lib_SegmentedToVirtual(&D_060032F8), &D_80A18F4C, (s32) this->unk3CE);
                temp_v0_5 = this->unk3CC;
                if ((s32) temp_v0_5 < 0x200) {
                    this->unk3CC = temp_v0_5 + 1;
                }
                temp_v0_6 = this->unk3CE;
                if ((s32) temp_v0_6 < 0x40) {
                    this->unk3CE = temp_v0_6 + 1;
                }
                temp_s4_2 = phi_s4_2 + 1;
                phi_s4_2 = temp_s4_2;
            } while (temp_s4_2 < (gGameInfo->data[2406] + 5));
        }
    }
    temp_v0_7 = &this->actor.home.rot.z;
    phi_s1 = (Vec3f *) (temp_v0_7 + 0x234);
    phi_s0 = 0x18;
    if ((gGameInfo->data[2407] + 0xA0) < (s32) this->unk3B6) {
        phi_s2 = (Vec3f *) (temp_v0_7 + 0x2C4);
        do {
            Math_Vec3f_Copy(phi_s1, &D_801D15B0);
            Math_Vec3f_Copy(phi_s2, &D_801D15B0);
            temp_s0 = phi_s0 + 0xC;
            phi_s1 += 0xC;
            phi_s2 += 0xC;
            phi_s0 = temp_s0;
        } while (temp_s0 != 0x84);
        func_80A18080(this);
    }
}

void func_80A18080(EnRaf *arg0) {
    if (arg0->unk3C6 == 4) {
        arg0->unk3B4 = 0x5A;
    } else {
        arg0->unk3C6 = 7;
    }
    arg0->actionFunc = func_80A180B4;
}

void func_80A180B4(EnRaf *this, GlobalContext *globalCtx) {
    Vec3f sp3C;
    s16 temp_v0;
    s32 temp_s0;
    Vec3f *phi_s1;
    s32 phi_s0;

    sp3C.x = D_80A1940C.unk0;
    sp3C.y = D_80A1940C.unk4;
    sp3C.z = D_80A1940C.unk8;
    if (this->unk3B4 == 0) {
        this->unk3C6 = 7;
    }
    temp_v0 = this->unk3BA;
    if ((s32) temp_v0 >= 0) {
        if (temp_v0 != 0) {
            this->unk3BA = temp_v0 - 1;
        }
        if (this->unk3BA == 0) {
            func_80A17060(this, 3);
            phi_s1 = &this->unk2DC;
            phi_s0 = 0x18;
            do {
                Math_Vec3f_Copy(phi_s1, &sp3C);
                temp_s0 = phi_s0 + 0xC;
                phi_s1 += 0xC;
                phi_s0 = temp_s0;
            } while (temp_s0 != 0x84);
            this->unk3BA = ((s32) this->actor.params >> 7) & 0x1F;
            this->unk3C2 = 3;
            this->unk3C6 = 0;
            this->unk3BA += 0x1E;
            this->actionFunc = func_80A171D8;
        }
    }
}

void EnRaf_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnRaf *this = (EnRaf *) thisx;
    WaterBox *sp7C;
    f32 sp78;
    Vec3f sp6C;
    ColliderCylinder *temp_s0;
    f32 *temp_t9;
    f32 temp_f8;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_s5;
    f32 *phi_s3;
    EnRaf *phi_s0;
    f32 *phi_s2;
    f32 *phi_s1;
    s32 phi_s5;

    SkelAnime_FrameUpdateMatrix(&this->unk15C);
    temp_v1 = this->unk3B8;
    if (temp_v1 != 0) {
        this->unk3B8 = temp_v1 - 1;
    }
    temp_v0 = this->unk3B4;
    if (temp_v0 != 0) {
        this->unk3B4 = temp_v0 - 1;
    }
    this->actionFunc(this, globalCtx);
    if ((this->unk3C6 == 0) && ((gSaveContext.weekEventReg[12] & 1) != 0)) {
        this->unk3C2 = 0;
        func_80A17D14(this);
        return;
    }
    if (func_800CAF70((DynaPolyActor *) this) != 0) {
        if ((this->unk3AC > -0.1f) && (this->unk39E == 0)) {
            this->unk39E = 1;
            this->unk3AC = -20.0f;
            Audio_PlayActorSound2(&this->actor, 0x38C5U);
        }
    } else {
        this->unk39E = 0;
    }
    this->unk3B0 += 3000.0f;
    this->unk3A8 = 2.0f * Math_SinS((s16) (s32) this->unk3B0);
    if (this->unk3BE != 2) {
        temp_t9 = &sp78;
        sp78 = (f32) gGameInfo->data[2460] + (this->actor.world.pos.y - 60.0f);
        if (func_800CA1AC(globalCtx, &globalCtx->colCtx, this->actor.world.pos.x, this->actor.world.pos.z, temp_t9, &sp7C) != 0) {
            temp_f8 = sp78 - (this->unk3A8 + (f32) gGameInfo->data[2459]);
            sp78 = temp_f8;
            Math_ApproachF(&this->actor.world.pos.y, this->unk3AC + temp_f8, 0.5f, 40.0f);
            if (this->unk3B8 == 0) {
                this->unk3B8 = 0x1E;
                if (this->unk3C2 == 2) {
                    this->unk3B8 = 0xA;
                }
                Math_Vec3f_Copy(&sp6C, &this->actor.world.pos);
                sp6C.y = sp78;
                EffectSsGRipple_Spawn(globalCtx, &sp6C, 0x28A, 0xC4E, (s16) 0);
            }
        }
    } else {
        Math_ApproachF(&this->actor.world.pos.y, (this->actor.home.pos.y + this->unk3AC) - this->unk3A8, 0.5f, 40.0f);
    }
    Math_ApproachZeroF(&this->unk3AC, 0.3f, 2.0f);
    if (this->unk3C6 == 4) {
        func_80A18B8C(this, globalCtx);
    }
    phi_s3 = &this->unk234.x;
    phi_s0 = this;
    phi_s2 = &this->unk234.y;
    phi_s1 = &this->unk234.z;
    phi_s5 = 0;
    do {
        if ((s32) this->unk3C6 < 4) {
            Math_ApproachF(phi_s3, phi_s0->unk2C4.x, 0.4f, 0.5f);
            Math_ApproachF(phi_s2, phi_s0->unk2C4.y, 0.4f, 0.5f);
            Math_ApproachF(phi_s1, phi_s0->unk2C4.z, 0.4f, 0.5f);
        } else {
            Math_ApproachF(phi_s3, phi_s0->unk2C4.x, 1.0f, 1.0f);
            Math_ApproachF(phi_s2, phi_s0->unk2C4.y, 1.0f, 1.0f);
            Math_ApproachF(phi_s1, phi_s0->unk2C4.z, 1.0f, 1.0f);
        }
        temp_s5 = phi_s5 + 0xC;
        phi_s3 += 0xC;
        phi_s0 += 0xC;
        phi_s2 += 0xC;
        phi_s1 += 0xC;
        phi_s5 = temp_s5;
    } while (temp_s5 != 0x90);
    temp_s0 = &this->unk3D0;
    Collider_UpdateCylinder(&this->actor, temp_s0);
    if ((s32) this->unk3C6 < 4) {
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_s0->base);
    }
}

void func_80A1859C(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    s16 temp_v0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_v0_2;
    s32 temp_v0_3;
    void *temp_s0_3;
    void *temp_s6;
    void *temp_s6_2;
    s16 *phi_s1;
    s32 phi_s0;
    s16 *phi_s1_2;
    s32 phi_s0_2;
    s16 *phi_s1_3;
    s32 phi_s0_3;
    s16 *phi_s1_4;
    s32 phi_s0_4;
    void *phi_s6;

    temp_v0 = arg2->unk3C2;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                phi_s6 = arg2 + (arg1 * 0xC);
            } else {
                if ((arg1 == 3) || (arg1 == 9) || (arg1 == 6)) {
                    phi_s1 = &D_80A19468;
                    phi_s0 = 0;
                    do {
                        if ((s16) (s32) arg2->unk174 == *phi_s1) {
                            Math_Vec3f_Copy(arg2 + (arg1 * 0xC) + 0x2C4, (phi_s0 * 0xC) + &D_80A19474);
                        }
                        temp_s0 = phi_s0 + 1;
                        phi_s1 += 2;
                        phi_s0 = temp_s0;
                    } while (temp_s0 != 5);
                }
                temp_v0_2 = arg1 * 0xC;
                temp_s6 = arg2 + temp_v0_2;
                phi_s6 = temp_s6;
                if ((arg1 == 4) || (temp_v0_2 == 0x78) || (temp_v0_2 == 0x54)) {
                    phi_s1_2 = &D_80A19468;
                    phi_s0_2 = 0;
                    do {
                        if ((s16) (s32) arg2->unk174 == *phi_s1_2) {
                            Math_Vec3f_Copy(temp_s6 + 0x2C4, (phi_s0_2 * 0xC) + &D_80A194B0);
                        }
                        temp_s0_2 = phi_s0_2 + 1;
                        phi_s1_2 += 2;
                        phi_s0_2 = temp_s0_2;
                    } while (temp_s0_2 != 4);
                }
            }
        } else {
            if ((arg1 == 3) || (arg1 == 9) || (arg1 == 6)) {
                Math_Vec3f_Copy(arg2 + (arg1 * 0xC) + 0x2C4, &D_80A19438);
            } else if ((arg1 == 4) || (arg1 == 0xA) || (arg1 == 7)) {
                Math_Vec3f_Copy(arg2 + (arg1 * 0xC) + 0x2C4, &D_80A1945C);
            }
            phi_s6 = arg2 + (arg1 * 0xC);
            if ((arg1 >= 2) && (arg1 < 0xB)) {
                temp_s0_3 = arg2 + (arg1 * 6);
                Matrix_RotateY((s16) (temp_s0_3->unk356 * arg0->gameplayFrames), 1U);
                SysMatrix_InsertXRotation_s((s16) (temp_s0_3->unk354 * arg0->gameplayFrames), 1);
                SysMatrix_InsertZRotation_s((s16) (temp_s0_3->unk358 * arg0->gameplayFrames), 1);
                Matrix_Scale(arg2->unk3A4 + 1.0f, 1.0f, 1.0f, 1);
                SysMatrix_InsertZRotation_s((s16) ((s32) (temp_s0_3->unk358 * arg0->gameplayFrames) * -1), 1);
                SysMatrix_InsertXRotation_s((s16) ((s32) (temp_s0_3->unk354 * arg0->gameplayFrames) * -1), 1);
                Matrix_RotateY((s16) ((s32) (temp_s0_3->unk356 * arg0->gameplayFrames) * -1), 1U);
            }
        }
    } else {
        if ((arg1 == 3) || (arg1 == 9) || (arg1 == 6)) {
            phi_s1_3 = &D_80A19418;
            phi_s0_3 = 0;
            do {
                if ((s16) (s32) arg2->unk174 == *phi_s1_3) {
                    Math_Vec3f_Copy(arg2 + (arg1 * 0xC) + 0x2C4, (phi_s0_3 * 0xC) + &D_80A19420);
                }
                temp_s0_4 = phi_s0_3 + 1;
                phi_s1_3 += 2;
                phi_s0_3 = temp_s0_4;
            } while (temp_s0_4 != 3);
        }
        temp_v0_3 = arg1 * 0xC;
        temp_s6_2 = arg2 + temp_v0_3;
        phi_s6 = temp_s6_2;
        if ((arg1 == 4) || (temp_v0_3 == 0x78) || (temp_v0_3 == 0x54)) {
            phi_s1_4 = &D_80A19418;
            phi_s0_4 = 0;
            do {
                if ((s16) (s32) arg2->unk174 == *phi_s1_4) {
                    Math_Vec3f_Copy(temp_s6_2 + 0x2C4, (phi_s0_4 * 0xC) + &D_80A19444);
                }
                temp_s0_5 = phi_s0_4 + 1;
                phi_s1_4 += 2;
                phi_s0_4 = temp_s0_5;
            } while (temp_s0_5 != 3);
        }
    }
    Matrix_Scale(phi_s6->unk234, phi_s6->unk238, phi_s6->unk23C, 1);
}

void EnRaf_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnRaf *this = (EnRaf *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);
    func_801343C0(globalCtx, this->unk15C.skeleton, this->unk15C.limbDrawTbl, (s32) this->unk15C.dListCount, NULL, NULL, func_80A1859C, &this->actor);
    if (this->unk3C6 == 4) {
        func_80A18DA0(this, globalCtx);
    }
}

void func_80A18A90(Actor *arg0, Vec3f *arg1, f32 *arg2, f32 *arg3, f32 arg4, s16 arg5) {
    s16 temp_v0;
    void *phi_s0;
    s16 phi_v0;

    phi_s0 = arg0 + 0x41C;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_s0->unk0 == 0) {
        phi_s0->unk0 = 1U;
        phi_s0->unk4 = (s32) arg1->x;
        phi_s0->unk8 = (s32) arg1->y;
        phi_s0->unkC = (s32) arg1->z;
        phi_s0->unk10 = (s32) arg2->unk0;
        phi_s0->unk14 = (s32) arg2->unk4;
        phi_s0->unk18 = (s32) arg2->unk8;
        phi_s0->unk1C = (s32) arg3->unk0;
        phi_s0->unk20 = (s32) arg3->unk4;
        phi_s0->unk24 = (s32) arg3->unk8;
        phi_s0->unk30 = arg4;
        phi_s0->unk34 = arg5;
        phi_s0->unk28 = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        phi_s0->unk2A = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        phi_s0->unk2C = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        return;
    }
    phi_s0 += 0x38;
    if ((s32) temp_v0 >= 0x1F) {
        return;
    }
    goto loop_1;
}

void func_80A18B8C(EnRaf *arg0, GlobalContext *arg1) {
    Vec3f *temp_s1;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v0;
    s32 temp_s3;
    void *phi_s0;
    s32 phi_s3;

    phi_s0 = arg0 + 0x41C;
    phi_s3 = 0;
    do {
        if (phi_s0->unk0 != 0) {
            temp_f0 = phi_s0->unk10;
            temp_f2 = phi_s0->unk14;
            temp_f12 = phi_s0->unk18;
            phi_s0->unk4 = (f32) (phi_s0->unk4 + temp_f0);
            phi_s0->unk8 = (f32) (phi_s0->unk8 + temp_f2);
            phi_s0->unkC = (f32) (phi_s0->unkC + temp_f12);
            phi_s0->unk28 = (s16) (phi_s0->unk28 + 0xBB8);
            phi_s0->unk2A = (s16) (phi_s0->unk2A + 0xBB8);
            phi_s0->unk2C = (s16) (phi_s0->unk2C + 0xBB8);
            phi_s0->unk10 = (f32) (temp_f0 + phi_s0->unk1C);
            phi_s0->unk14 = (f32) (temp_f2 + phi_s0->unk20);
            phi_s0->unk18 = (f32) (temp_f12 + phi_s0->unk24);
            if (arg0->unk3BE != 2) {
                if (phi_s0->unk8 < (arg0->actor.world.pos.y - 10.0f)) {
                    temp_s1 = phi_s0 + 4;
                    EffectSsGSplash_Spawn(arg1, temp_s1, NULL, NULL, (s16) 0, (s16) (s32) (phi_s0->unk30 * 200000.0f));
                    Audio_PlaySoundAtPosition(arg1, temp_s1, 0x32, 0x2817U);
                    phi_s0->unk0 = 0U;
                }
            } else if (phi_s0->unk8 < (arg0->actor.world.pos.y - 10.0f)) {
                Math_ApproachZeroF(phi_s0 + 0x30, 0.2f, 0.001f);
                if (phi_s0->unk30 <= 0.0001f) {
                    phi_s0->unk34 = 0;
                }
            }
            temp_v0 = phi_s0->unk34;
            if (temp_v0 != 0) {
                phi_s0->unk34 = (s16) (temp_v0 - 1);
            } else {
                phi_s0->unk0 = 0U;
            }
        }
        temp_s3 = phi_s3 + 1;
        phi_s0 += 0x38;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x1F);
}

void func_80A18DA0(EnRaf *arg0, GlobalContext *arg1) {
    Gfx *temp_s1;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    f32 temp_f12;
    s16 temp_s3;
    void *phi_s0;
    s16 phi_s3;

    temp_a0 = arg1->state.gfxCtx;
    temp_s2 = temp_a0;
    func_8012C28C(temp_a0);
    phi_s0 = arg0 + 0x41C;
    phi_s3 = 0;
    do {
        if (phi_s0->unk0 != 0) {
            SysMatrix_InsertTranslation(phi_s0->unk4, phi_s0->unk8, phi_s0->unkC, 0);
            temp_f12 = phi_s0->unk30;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            SysMatrix_InsertXRotation_s(phi_s0->unk28, 1);
            Matrix_RotateY(phi_s0->unk2A, 1U);
            SysMatrix_InsertZRotation_s(phi_s0->unk2C, 1);
            temp_s1 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_s1 + 8;
            temp_s1->words.w0 = 0xDA380003;
            temp_s1->words.w1 = Matrix_NewMtx(temp_s2);
            temp_v1 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v1 + 8;
            temp_v1->words.w1 = (u32) &D_060024E0;
            temp_v1->words.w0 = 0xDE000000;
        }
        temp_s3 = phi_s3 + 1;
        phi_s0 += 0x38;
        phi_s3 = temp_s3;
    } while ((s32) temp_s3 < 0x1F);
}

