void func_808BF344(Actor *arg0);                    /* static */
void func_808BF3B8(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_808BF438(EnBbfall *arg0, GlobalContext *arg1); /* static */
void func_808BF4B4(Actor *arg0, Actor *);           /* static */
void func_808BF514(EnBbfall *arg0);                 /* static */
void func_808BF578(EnBbfall *arg0);                 /* static */
void func_808BF5AC(Actor *arg0);                    /* static */
void func_808BF5E0(EnBbfall *arg0, EnBbfall *);     /* static */
void func_808BF7A0(EnBbfall *arg0);                 /* static */
void func_808BF894(EnBbfall *arg0, EnBbfall *);     /* static */
void func_808BFA18(EnBbfall *arg0);                 /* static */
void func_808BFAB4(Actor *arg0);                    /* static */
void func_808BFCCC(Actor *arg0, GlobalContext *arg1); /* static */
void func_808BFF8C(Actor *arg0);                    /* static */
void func_808C013C(Actor *arg0);                    /* static */
void func_808C01E0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_808C07D4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_808C080C(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06000184;
extern AnimationHeader D_06000444;
extern SkeletonHeader D_06001A30;
static ColliderJntSphElementInit D_808C0D30 = {
    {
        {0, {0xF7CFFFFF, 1, 8}, {0xF7CFFFFF, 0, 0}, 9, 5, 1},
        {0, {{0, 0, 0}, 0x14}, 0x64},
    },
    {
        {0, {0xF7CFFFFF, 1, 8}, {0xF7CFFFFF, 0, 0}, 9, 0, 0},
        {0, {{0, 0, 0}, 0x14}, 0x64},
    },
    {
        {0, {0xF7CFFFFF, 1, 8}, {0xF7CFFFFF, 0, 0}, 9, 0, 0},
        {0, {{0, 0, 0}, 0x14}, 0x64},
    },
};
static ColliderJntSphInit D_808C0D9C = {{3, 0x10, 9, 0x39, 0x10, 0}, 3, &D_808C0D30};
static DamageTable D_808C0DAC = {
    {
        0x10,
        1,
        0,
        1,
        1,
        1,
        0,
        0xE0,
        1,
        1,
        1,
        1,
        0x32,
        0x42,
        1,
        1,
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
static CollisionCheckInfoInit D_808C0DCC = {2, 0x14, 0x28, 0x32};
static InitChainEntry D_808C0DD4;                   /* unable to generate initializer */
static ? D_808C0DDC;                                /* unable to generate initializer */
static ? D_808C0DEB;                                /* unable to generate initializer */
static Vec3f D_808C0DEC = {1000.0f, -700.0f, 0.0f};

typedef struct EnBbfall {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0x5A];                 /* maybe part of unk188[16]? */
    /* 0x01E8 */ Vec3s unk1E8;                      /* inferred */
    /* 0x01EE */ char pad1EE[0x5A];                 /* maybe part of unk1E8[16]? */
    /* 0x0248 */ void (*actionFunc)(EnBbfall *, GlobalContext *);
    /* 0x024C */ u8 unk24C;                         /* inferred */
    /* 0x024D */ u8 unk24D;                         /* inferred */
    /* 0x024E */ char pad24E[0x1];                  /* maybe part of unk24D[2]? */
    /* 0x024F */ u8 unk24F;                         /* inferred */
    /* 0x0250 */ s16 unk250;                        /* inferred */
    /* 0x0252 */ char pad252[0x2];                  /* maybe part of unk250[2]? */
    /* 0x0254 */ f32 unk254;                        /* inferred */
    /* 0x0258 */ f32 unk258;                        /* inferred */
    /* 0x025C */ f32 unk25C;                        /* inferred */
    /* 0x0260 */ f32 unk260;                        /* inferred */
    /* 0x0264 */ f32 unk264;                        /* inferred */
    /* 0x0268 */ Vec3f unk268;                      /* inferred */
    /* 0x0274 */ Vec3f unk274;                      /* inferred */
    /* 0x0280 */ char pad280[0x30];                 /* maybe part of unk274[5]? */
    /* 0x02B0 */ Vec3f unk2B0;                      /* inferred */
    /* 0x02BC */ char pad2BC[0x28];
    /* 0x02E4 */ f32 unk2E4;                        /* inferred */
    /* 0x02E8 */ char pad2E8[0x4];                  /* maybe part of unk2E4[2]? */
    /* 0x02EC */ Vec3f unk2EC;                      /* inferred */
    /* 0x02F8 */ char pad2F8[0x8C];
    /* 0x0384 */ ColliderJntSph unk384;             /* inferred */
    /* 0x03A4 */ ColliderJntSphElement unk3A4;      /* inferred */
    /* 0x03E4 */ char pad3E4[0x80];                 /* maybe part of unk3A4[3]? */
} EnBbfall;                                         /* size 0x464 */

void EnBbfall_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnBbfall *this = (EnBbfall *) thisx;
    s32 temp_v1;
    void *temp_v0;
    s32 phi_v1;

    Actor_ProcessInitChain(&this->actor, &D_808C0DD4);
    SkelAnime_Init(globalCtx, &this->unk144, &D_06001A30, &D_06000444, &this->unk188, &this->unk1E8, 0x10);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_808C0DAC, &D_808C0DCC);
    Collider_InitAndSetJntSph(globalCtx, &this->unk384, &this->actor, &D_808C0D9C, &this->unk3A4);
    ActorShape_Init(&this->actor.shape, 1500.0f, func_800B3FC0, 35.0f);
    this->unk250 = 0;
    func_808BF5E0(this);
    Actor_SetHeight(&this->actor, 0.0f);
    phi_v1 = 0;
    do {
        temp_v0 = this->unk384.elements + phi_v1;
        temp_v1 = phi_v1 + 0x40;
        temp_v0->unk36 = (s16) temp_v0->unk2E;
        phi_v1 = temp_v1;
    } while (temp_v1 != 0xC0);
}

void EnBbfall_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBbfall *this = (EnBbfall *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk384);
}

void func_808BF344(Actor *arg0) {
    arg0->unk24F = 0xA;
    arg0->unk260 = 0.4f;
    arg0->unk250 = 0x50;
    arg0->flags &= -0x201;
    arg0->unk264 = 0.6f;
    arg0->unk25C = 1.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x50);
}

void func_808BF3B8(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk24F == 0xA) {
        arg0->unk24F = 0U;
        arg0->unk25C = 0.0f;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x2B0), 5, 2, 0.2f, 0.15f);
        arg0->flags |= 0x200;
    }
}

s32 func_808BF438(EnBbfall *arg0, GlobalContext *arg1) {
    CollisionContext *sp18;
    CollisionContext *temp_a0;
    CollisionPoly *temp_a1;
    u32 temp_v0;
    u8 temp_a2;

    temp_a1 = arg0->actor.floorPoly;
    temp_a2 = arg0->actor.floorBgId;
    temp_a0 = arg1 + 0x830;
    sp18 = temp_a0;
    arg0 = arg0;
    if ((func_800C9E88(temp_a0, temp_a1, (s32) temp_a2) == 0) && ((temp_v0 = func_800C99D4(temp_a0, arg0->actor.floorPoly, (s32) arg0->actor.floorBgId), (temp_v0 == 2)) || (temp_v0 == 3) || (temp_v0 == 9))) {
        return 1;
    }
    return 0;
}

void func_808BF4B4(Actor *arg0) {
    SkelAnime *sp1C;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    sp1C = temp_a0;
    if ((func_801378B8(temp_a0, 0.0f) != 0) || (func_801378B8(temp_a0, 5.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x38C9U);
    }
    func_800B9010(arg0, 0x30CFU);
}

void func_808BF514(EnBbfall *arg0) {
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_v1;
    s32 phi_a3;

    if ((arg0->actor.bgCheckFlags & 8) != 0) {
        temp_a1 = arg0->actor.shape.rot.y;
        temp_a2 = arg0->actor.wallYaw;
        temp_v1 = temp_a1 - temp_a2;
        phi_a3 = (s32) temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_a3 = -(s32) temp_v1;
        }
        if (phi_a3 >= 0x4001) {
            arg0->actor.shape.rot.y = ((temp_a2 * 2) - temp_a1) - 0x8000;
        }
        arg0->actor.bgCheckFlags &= 0xFFF7;
    }
}

void func_808BF578(EnBbfall *arg0) {
    void *temp_v0;
    void *temp_v0_2;

    arg0->unk384.elements->unk4 = 1;
    temp_v0 = arg0->unk384.elements;
    temp_v0->unk55 = (u8) (temp_v0->unk55 | 1);
    temp_v0_2 = arg0->unk384.elements;
    temp_v0_2->unk95 = (u8) (temp_v0_2->unk95 | 1);
}

void func_808BF5AC(Actor *arg0) {
    void *temp_v0;
    void *temp_v0_2;

    arg0->unk3A0->unk4 = 0;
    temp_v0 = arg0->unk3A0;
    temp_v0->unk55 = (u8) (temp_v0->unk55 & ~1);
    temp_v0_2 = arg0->unk3A0;
    temp_v0_2->unk95 = (u8) (temp_v0_2->unk95 & ~1);
}

void func_808BF5E0(EnBbfall *arg0) {
    EnBbfall *temp_s0;
    Vec3f *temp_s4;
    s32 temp_s1;
    Vec3f *phi_s2;
    EnBbfall *phi_s0;
    s32 phi_s1;

    SkelAnime_ChangeAnimDefaultRepeat(arg0 + 0x144, &D_06000184);
    arg0->unk384.base.atFlags &= 0xFFFE;
    arg0->unk384.base.acFlags &= 0xFFFE;
    arg0->unk384.base.ocFlags1 &= 0xFFFE;
    arg0->unk24C = 0xFF;
    arg0->unk254 = 0.8f;
    arg0->unk258 = 1.0f;
    temp_s4 = arg0 + 0x24;
    arg0->actor.colorFilterTimer = 0;
    arg0->unk24D = 0;
    arg0->actor.colChkInfo.health = D_808C0DCC.health;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.gravity = 0.0f;
    arg0->actor.velocity.y = 0.0f;
    Math_Vec3f_Copy(temp_s4, arg0 + 8);
    arg0->actor.world.pos.y -= 90.0f;
    phi_s2 = arg0 + 0x268;
    phi_s0 = arg0;
    phi_s1 = 0;
    do {
        Math_Vec3f_Copy(phi_s2, temp_s4);
        temp_s1 = phi_s1 + 1;
        temp_s0 = phi_s0 + 0xC;
        temp_s0->unk260 = phi_s0->unk268.y - 47.0f;
        phi_s2 += 0xC;
        phi_s0 = temp_s0;
        phi_s1 = temp_s1;
    } while (temp_s1 != 6);
    arg0->actor.bgCheckFlags &= 0xFFFE;
    arg0->actor.flags &= -2;
    arg0->actionFunc = func_808BF734;
}

void func_808BF734(EnBbfall *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk250;
    if (temp_v0 != 0) {
        this->unk250 = temp_v0 - 1;
        return;
    }
    this = this;
    if ((Player_GetMask(globalCtx) != 0x10) && (this->actor.xyzDistToPlayerSq <= 62500.0f)) {
        func_808BF7A0(this);
    }
}

void func_808BF7A0(Actor *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->yawTowardsPlayer;
    arg0->unk394 = (u8) (arg0->unk394 | 1);
    arg0->unk395 = (u8) (arg0->unk395 | 1);
    arg0->unk396 = (u8) (arg0->unk396 | 1);
    arg0->gravity = -1.0f;
    arg0->world.rot.y = temp_v0;
    arg0->shape.rot.y = temp_v0;
    arg0->velocity.y = 17.0f;
    func_808BF578();
    arg0->flags |= 1;
    Audio_PlayActorSound2(arg0, 0x3A1CU);
    arg0->unk248 = func_808BF830;
}

void func_808BF830(EnBbfall *this, GlobalContext *globalCtx) {
    EnBbfall *temp_a0_2;
    EnBbfall *temp_a1;
    SkelAnime *temp_a0;
    Actor *phi_a1;

    temp_a0 = &this->unk144;
    this = this;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_a1 = this;
    temp_a0_2 = temp_a1;
    phi_a1 = &temp_a1->actor;
    if (temp_a1->actor.home.pos.y < temp_a1->actor.world.pos.y) {
        this = temp_a1;
        func_808BF894(temp_a0_2, temp_a1);
        phi_a1 = &this->actor;
    }
    func_808BF4B4(phi_a1, phi_a1);
}

void func_808BF894(EnBbfall *arg0) {
    arg0->unk24C = 0xFF;
    arg0->unk24D = 1;
    arg0->actor.bgCheckFlags &= 0xFFFE;
    arg0->actionFunc = func_808BF8DC;
    arg0->actor.speedXZ = 5.0f;
    arg0->actor.gravity = -1.0f;
}

void func_808BF8DC(EnBbfall *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 phi_f2;

    SkelAnime_FrameUpdateMatrix(&this->unk144);
    Math_StepToF(&this->unk254, 0.8f, 0.1f);
    Math_StepToF(&this->unk258, 1.0f, 0.1f);
    func_808BF514(this);
    if ((this->actor.bgCheckFlags & 1) != 0) {
        if (func_808BF438(this, globalCtx) != 0) {
            func_808BFA18(this);
        } else {
            this->actor.velocity.y *= -1.2f;
            temp_f0 = this->actor.velocity.y;
            phi_f2 = 8.0f;
            if (temp_f0 < 8.0f) {

            } else if (temp_f0 > 12.0f) {
                phi_f2 = 12.0f;
            } else {
                phi_f2 = temp_f0;
            }
            this->actor.velocity.y = phi_f2;
            this->actor.shape.rot.y += (s32) randPlusMinusPoint5Scaled(73728.0f);
        }
        this->actor.bgCheckFlags &= 0xFFFE;
    }
    this->actor.world.rot.y = this->actor.shape.rot.y;
    func_808BF4B4(&this->actor);
}

void func_808BFA18(EnBbfall *arg0) {
    arg0->unk24D = 0;
    arg0->unk384.base.acFlags &= 0xFFFE;
    arg0->actionFunc = func_808BFA3C;
}

void func_808BFA3C(EnBbfall *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;

    temp_a0 = &this->unk144;
    this = this;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (this->actor.world.pos.y < (this->actor.floorHeight - 90.0f)) {
        this->unk250 = 0xA;
        func_808BF5E0(this, this);
        return;
    }
    func_808BF4B4(&this->actor, &this->actor);
}

void func_808BFAB4(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_06000444);
    arg0->unk394 = (u8) (arg0->unk394 | 1);
    arg0->unk250 = 0xC8;
    arg0->unk24C = 0;
    arg0->unk395 = (u8) (arg0->unk395 | 1);
    arg0->speedXZ = 2.0f;
    arg0->unk254 = 0.0f;
    arg0->unk258 = 0.0f;
    arg0->gravity = -2.0f;
    Audio_PlayActorSound2(arg0, 0x38CDU);
    arg0->unk248 = func_808BFB4C;
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_808BFB4C(EnBbfall *this, GlobalContext *globalCtx) {
    SkelAnime *sp3C;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s16 temp_v0;

    temp_a0 = &this->unk144;
    sp3C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    func_808BF514(this);
    if ((this->actor.bgCheckFlags & 1) != 0) {
        if (func_808BF438(this, globalCtx) != 0) {
            func_808BFA18(this);
            return;
        }
        Audio_PlayActorSound2(&this->actor, 0x387BU);
        if (this->unk250 == 0) {
            Audio_PlayActorSound2(&this->actor, 0x38CCU);
            func_808BF578(this);
            this->actor.velocity.y = 8.0f;
            func_808BF894(this);
            return;
        }
        temp_f0 = this->actor.velocity.y;
        if (temp_f0 < -14.0f) {
            this->actor.velocity.y = temp_f0 * -0.7f;
        } else {
            this->actor.velocity.y = 10.0f;
        }
        this->actor.bgCheckFlags &= 0xFFFE;
        func_800BBDAC(globalCtx, &this->actor, &this->actor.world.pos, 7.0f, 2, 2.0f, (s16) 0, (s16) 0, (u8) 0);
        Math_ScaledStepToS(&this->actor.shape.rot.y, (s16) (this->actor.yawTowardsPlayer + 0x8000), 0xBB8);
        goto block_9;
    }
block_9:
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if (func_801378B8(sp3C, 5.0f) != 0) {
        Audio_PlayActorSound2(&this->actor, 0x38C8U);
    }
    temp_v0 = this->unk250;
    if ((s32) temp_v0 > 0) {
        this->unk250 = temp_v0 - 1;
    }
}

void func_808BFCCC(Actor *arg0, GlobalContext *arg1) {
    Vec3f sp70;
    PosRot *temp_s4;
    f32 temp_f0;
    s32 temp_s1;
    void *temp_s0;
    Vec3f *phi_s2;
    f32 phi_f2;
    void *phi_s0;
    s32 phi_s1;

    func_800BE5CC(arg0, arg0 + 0x384, 0);
    temp_s4 = &arg0->world;
    arg0->unk250 = 0xF;
    arg0->shape.rot.x += 0x4E20;
    arg0->speedXZ = 0.0f;
    Audio_PlaySoundAtPosition(arg1, &temp_s4->pos, 0x28, 0x38CEU);
    Item_DropCollectibleRandom(arg1, arg0, &temp_s4->pos, 0x70);
    arg0->velocity.y = 0.0f;
    arg0->speedXZ = 0.0f;
    arg0->unk24E = 1;
    arg0->gravity = -1.5f;
    phi_s2 = arg0 + 0x2B0;
    phi_s0 = arg0 + 0x2EC;
    phi_s1 = 0;
    do {
        Math_Vec3f_Diff(phi_s2, &temp_s4->pos, &sp70);
        temp_f0 = Math3D_Vec3fMagnitude(&sp70);
        phi_f2 = temp_f0;
        if (temp_f0 > 1.0f) {
            phi_f2 = 2.5f / temp_f0;
        }
        phi_s0->unk0 = (f32) (sp70.x * phi_f2);
        phi_s0->unk8 = (f32) (sp70.z * phi_f2);
        temp_s1 = phi_s1 + 0xC;
        temp_s0 = phi_s0 + 0xC;
        temp_s0->unk-8 = (f32) (Rand_ZeroFloat(3.5f) + 10.0f);
        phi_s2 += 0xC;
        phi_s0 = temp_s0;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x3C);
    arg0->unk248 = func_808BFE58;
}

void func_808BFE58(EnBbfall *this, GlobalContext *globalCtx) {
    EnBbfall *temp_s1_2;
    s32 temp_s1;
    s32 temp_s2;
    Vec3f *phi_s0;
    s32 phi_s1;
    Vec3f *phi_s0_2;
    Vec3f *phi_s3;
    EnBbfall *phi_s1_2;
    s32 phi_s2;

    this->unk250 += -1;
    Math_SmoothStepToS(&this->actor.world.rot.z, 0x4000, 4, 0x1000, (s16) 0x400);
    phi_s0_2 = &this->unk2B0;
    phi_s1_2 = this;
    phi_s2 = 0;
    if (this->unk250 == 0) {
        phi_s0 = &this->unk2B0;
        phi_s1 = 0;
        do {
            func_800B3030(globalCtx, phi_s0, &D_801D15B0, &D_801D15B0, (s16) 0x28, (s16) 7, 2);
            Audio_PlaySoundAtPosition(globalCtx, phi_s0, 0xB, 0x3878U);
            temp_s1 = phi_s1 + 0xC;
            phi_s0 += 0xC;
            phi_s1 = temp_s1;
        } while (temp_s1 != 0x3C);
        Actor_MarkForDeath(&this->actor);
        return;
    }
    phi_s3 = &this->unk2EC;
    do {
        Math_Vec3f_Sum(phi_s0_2, phi_s3, phi_s0_2);
        temp_s2 = phi_s2 + 1;
        temp_s1_2 = phi_s1_2 + 0xC;
        temp_s1_2->unk2E4 = phi_s1_2->unk2EC.y + this->actor.gravity;
        phi_s0_2 += 0xC;
        phi_s3 += 0xC;
        phi_s1_2 = temp_s1_2;
        phi_s2 = temp_s2;
    } while (temp_s2 != 5);
}

void func_808BFF8C(Actor *arg0) {
    u8 temp_v0;

    arg0->unk395 = (u8) (arg0->unk395 & 0xFFFE);
    Audio_PlayActorSound2(arg0, 0x38E3U);
    func_800BE5CC(arg0, arg0 + 0x384, 0);
    temp_v0 = arg0->colChkInfo.damageEffect;
    if (temp_v0 == 5) {
        func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
        arg0->unk24F = 0x20;
        arg0->unk25C = 2.0f;
        arg0->unk260 = 0.4f;
    } else if (temp_v0 == 1) {
        func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x14);
        arg0->speedXZ = 0.0f;
    } else if (temp_v0 == 0xE) {
        arg0->speedXZ = 0.0f;
    } else {
        func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x14);
        arg0->speedXZ = 7.0f;
    }
    arg0->unk248 = func_808C00A0;
}

void func_808C00A0(EnBbfall *this, GlobalContext *globalCtx) {
    Math_SmoothStepToF(&this->actor.speedXZ, 0.0f, 1.0f, 0.5f, 0.0f);
    if (((this->actor.bgCheckFlags & 1) != 0) && (this->actor.speedXZ < 0.1f)) {
        if (func_808BF438(this, globalCtx) != 0) {
            func_808BFA18(this);
            return;
        }
        func_808BFAB4(&this->actor);
        // Duplicate return node #5. Try simplifying control flow for better match
    }
}

void func_808C013C(Actor *arg0) {
    arg0->speedXZ = 0.0f;
    if (arg0->velocity.y > 0.0f) {
        arg0->velocity.y = 0.0f;
    }
    arg0->gravity = -2.0f;
    arg0->unk248 = func_808C0178;
}

void func_808C0178(EnBbfall *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk250;
    if (temp_v0 != 0) {
        this->unk250 = temp_v0 - 1;
    }
    if (this->unk250 == 0) {
        func_808BF3B8((Actor *) globalCtx);
        if (this->actor.colChkInfo.health == 0) {
            func_808BFCCC(&this->actor, globalCtx);
            return;
        }
        func_808BFAB4(&this->actor);
        // Duplicate return node #6. Try simplifying control flow for better match
    }
}

void func_808C01E0(Actor *arg0, GlobalContext *arg1) {
    u8 temp_t0;
    u8 temp_v0;
    u8 temp_v0_3;
    void *temp_v0_2;

    temp_v0 = arg0->unk395;
    if ((temp_v0 & 2) != 0) {
        arg0->unk395 = (u8) (temp_v0 & 0xFFFD);
        temp_t0 = arg0->unk394 & 0xFFF9;
        arg0->unk394 = temp_t0;
        arg0->unk394 = (u8) (temp_t0 & 0xFFFE);
        if ((arg0->unk24F != 0xA) || ((*arg0->unk3A0->unk24 & 0xDB0B3) == 0)) {
            func_800BE2B8(arg0, arg0 + 0x384);
            arg0->unk24C = 0;
            arg0->unk254 = 0.0f;
            arg0->unk258 = 0.0f;
            func_808BF5AC(arg0);
            func_808BF3B8(arg0, arg1);
            if (Actor_ApplyDamage(arg0) == 0) {
                Enemy_StartFinishingBlow(arg1, arg0);
            }
            if (arg0->colChkInfo.damageEffect == 3) {
                func_808BF344(arg0);
                if (arg0->colChkInfo.health == 0) {
                    arg0->unk250 = 3;
                    arg0->unk395 = (u8) (arg0->unk395 & 0xFFFE);
                }
                func_808C013C(arg0);
            } else if (arg0->colChkInfo.health == 0) {
                func_808BFCCC(arg0, arg1);
            } else {
                func_808BFF8C(arg0);
            }
            if (arg0->colChkInfo.damageEffect == 4) {
                temp_v0_2 = arg0->unk3A0;
                arg0->unk25C = 4.0f;
                arg0->unk24F = 0x14U;
                arg0->unk260 = 0.4f;
                Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) temp_v0_2->unkE, (f32) temp_v0_2->unk10, (f32) temp_v0_2->unk12, (s16) 0, (s16) 0, (s16) 0, (s16) 3);
                return;
            }
            // Duplicate return node #17. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #17. Try simplifying control flow for better match
        return;
    }
    temp_v0_3 = arg0->unk394;
    if ((temp_v0_3 & 4) != 0) {
        arg0->unk394 = (u8) (temp_v0_3 & 0xFFF9);
        func_808BF5AC(arg0);
        if (func_808BFB4C != arg0->unk248) {
            arg0->world.rot.y = arg0->yawTowardsPlayer + 0x8000;
            arg0->shape.rot.y = arg0->world.rot.y;
            func_808BFAB4(arg0);
        }
    }
}

void EnBbfall_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnBbfall *this = (EnBbfall *) thisx;
    Vec3f sp5C;
    s32 sp58;
    ColliderJntSphElement *temp_v0_5;
    EnBbfall *temp_v1_2;
    PosRot *temp_v1;
    Vec3f *temp_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    s16 temp_v1_4;
    s32 temp_a0;
    s32 temp_f18;
    s32 temp_f18_2;
    s32 temp_s1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1_3;
    s32 phi_v0;
    Vec3f *phi_s4;
    Vec3f *phi_s3;
    Vec3f *phi_s0;
    s16 phi_f18;
    s32 phi_a0;
    EnBbfall *phi_v1;
    f32 phi_f0;
    s16 phi_f18_2;
    s32 phi_a0_2;
    EnBbfall *phi_v1_2;
    f32 phi_f0_2;

    func_808C01E0(&this->actor, globalCtx);
    this->actionFunc(this, globalCtx);
    if (func_808BFE58 != this->actionFunc) {
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
        if (this->unk24D != 0) {
            Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 30.0f, 25.0f, 20.0f, 7U);
        }
        temp_v1 = &this->actor.focus;
        phi_v0 = 5;
        phi_s4 = temp_v1 + 0x250;
        phi_s3 = temp_v1 + 0x25C;
        phi_s0 = temp_v1 + 0x268;
        do {
            sp58 = phi_v0;
            Math_Vec3f_Diff(phi_s4, phi_s3, &sp5C);
            temp_s1 = phi_v0 - 1;
            Math_Vec3f_Scale(&sp5C, (f32) temp_s1 * 0.1f);
            Math_Vec3f_Copy(phi_s0, phi_s3);
            Math_Vec3f_Sum(phi_s0, &sp5C, phi_s0);
            phi_v0 = temp_s1;
            phi_s4 += -0xC;
            phi_s3 += -0xC;
            phi_s0 += -0xC;
        } while (temp_s1 >= 2);
        temp_s0 = &this->unk268;
        Math_Vec3f_Copy(&this->unk274, temp_s0);
        Math_Vec3f_Copy(temp_s0, &this->actor.world.pos);
        this->unk268.y += 15.0f;
        temp_f0 = this->unk258;
        this->unk268.y -= 47.0f * this->unk254;
        temp_f18 = (s32) (30.0f * temp_f0);
        phi_f18 = (s16) temp_f18;
        phi_a0 = 0;
        phi_v1 = this;
        phi_f0 = temp_f0;
        phi_f18_2 = (s16) temp_f18;
        phi_a0_2 = 0;
        phi_v1_2 = this;
        phi_f0_2 = temp_f0;
        if (0 != 0x80) {
            do {
                temp_f0_2 = phi_f0 * 0.7569f;
                temp_v0 = this->unk384.elements + phi_a0;
                temp_v0->unk36 = phi_f18;
                temp_a0 = phi_a0 + 0x40;
                temp_v0_2 = temp_v0 + 0x30;
                temp_v1_2 = phi_v1 + 0x18;
                temp_v0_2->unk0 = (s16) (s32) phi_v1->unk268.x;
                temp_f18_2 = (s32) (30.0f * temp_f0_2);
                temp_v0_2->unk2 = (s16) (s32) (temp_v1_2->unk254 + (47.0f * phi_f0));
                temp_v0_2->unk4 = (s16) (s32) temp_v1_2->unk258;
                phi_f18 = (s16) temp_f18_2;
                phi_a0 = temp_a0;
                phi_v1 = temp_v1_2;
                phi_f0 = temp_f0_2;
                phi_f18_2 = (s16) temp_f18_2;
                phi_a0_2 = temp_a0;
                phi_v1_2 = temp_v1_2;
                phi_f0_2 = temp_f0_2;
            } while (temp_a0 != 0x80);
        }
        temp_v0_3 = this->unk384.elements + phi_a0_2;
        temp_v0_3->unk36 = phi_f18_2;
        temp_v1_3 = phi_v1_2 + 0x18;
        temp_v0_4 = temp_v0_3 + 0x30;
        temp_v0_4->unk0 = (s16) (s32) phi_v1_2->unk268.x;
        temp_v0_4->unk2 = (s16) (s32) (temp_v1_3->unk254 + (47.0f * phi_f0_2));
        temp_v0_4->unk4 = (s16) (s32) temp_v1_3->unk258;
        temp_v0_5 = this->unk384.elements;
        temp_v1_4 = temp_v0_5->dim.worldSphere.radius;
        if ((s32) temp_v1_4 < 0x14) {
            temp_v0_5->dim.worldSphere.radius = 0x14;
        } else {
            temp_v0_5->dim.worldSphere.radius = temp_v1_4;
        }
        Math_Vec3s_ToVec3f(&this->actor.focus.pos, &this->unk384.elements->dim.worldSphere.center);
        if ((this->unk384.base.atFlags & 1) != 0) {
            this->actor.flags |= 0x1000000;
            CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &this->unk384.base);
        }
        if ((this->unk384.base.acFlags & 1) != 0) {
            CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->unk384.base);
        }
        if ((this->unk384.base.ocFlags1 & 1) != 0) {
            CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->unk384.base);
        }
        if (this->unk25C > 0.0f) {
            if (this->unk24F != 0xA) {
                Math_StepToF(&this->unk25C, 0.0f, 0.05f);
                temp_f0_3 = (this->unk25C + 1.0f) * 0.2f;
                this->unk260 = temp_f0_3;
                if (temp_f0_3 > 0.4f) {
                    this->unk260 = 0.4f;
                    return;
                }
                this->unk260 = this->unk260;
                return;
            }
            if (Math_StepToF(&this->unk264, 0.4f, 0.01f) == 0) {
                func_800B9010(&this->actor, 0x20B2U);
            }
            // Duplicate return node #23. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #23. Try simplifying control flow for better match
    }
}

s32 func_808C07D4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg5->unk24E == -1) {
        arg5->unk328 = (Gfx *) *arg2;
        *arg2 = NULL;
    }
    return 0;
}

void func_808C080C(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    GraphicsContext *sp30;
    Gfx *sp28;
    s8 *sp20;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    MtxF *temp_v0_4;
    s8 *temp_v1;
    s8 *temp_v1_2;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v0_3;

    temp_v0 = arg4->unk24E;
    if (temp_v0 == 0) {
        temp_v0_2 = *(&D_808C0DDC + arg1);
        if (temp_v0_2 != -1) {
            if (temp_v0_2 == 0) {
                SysMatrix_GetStateTranslationAndScaledX(1000.0f, arg4 + 0x2B0);
                return;
            }
            if (temp_v0_2 == 3) {
                SysMatrix_GetStateTranslationAndScaledX(-1000.0f, arg4 + 0x2D4);
                SysMatrix_MultiplyVector3fByState(&D_808C0DEC, arg4 + 0x2E0);
                return;
            }
            SysMatrix_GetStateTranslation(arg4 + (temp_v0_2 * 0xC) + 0x2B0);
            return;
        }
        // Duplicate return node #14. Try simplifying control flow for better match
        return;
    }
    if ((s32) temp_v0 > 0) {
        temp_v1 = arg1 + &D_808C0DDC;
        temp_v0_3 = *temp_v1;
        if (temp_v0_3 != -1) {
            sp20 = temp_v1;
            SysMatrix_GetStateTranslation(arg4 + (temp_v0_3 * 0xC) + 0x2B0);
        }
        if ((arg1 + &D_808C0DDC) == &D_808C0DEB) {
            arg4->unk24E = -1;
            return;
        }
        // Duplicate return node #14. Try simplifying control flow for better match
        return;
    }
    temp_v1_2 = arg1 + &D_808C0DDC;
    if (*temp_v1_2 != -1) {
        sp20 = temp_v1_2;
        sp30 = *arg0;
        temp_v0_4 = SysMatrix_GetCurrentState();
        temp_v0_4->mf[3][0] = (arg4 + (*temp_v1_2 * 0xC))->unk2B0;
        temp_v0_4->mf[3][1] = (arg4 + (*temp_v1_2 * 0xC))->unk2B4;
        temp_v0_4->mf[3][2] = (arg4 + (*temp_v1_2 * 0xC))->unk2B8;
        SysMatrix_InsertZRotation_s(arg4->world.rot.z, 1);
        temp_v0_5 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDA380003;
        sp28 = temp_v0_5;
        sp28->words.w1 = Matrix_NewMtx(*arg0);
        temp_v0_6 = sp30->polyOpa.p;
        sp30->polyOpa.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xDE000000;
        temp_v0_6->words.w1 = arg4->unk328;
    }
}

void EnBbfall_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnBbfall *this = (EnBbfall *) thisx;
    Gfx *sp74;
    void *sp70;
    EnBbfall *temp_s0;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_s1;
    MtxF *temp_s5;
    Vec3s *temp_a2;
    s32 temp_s3;
    s32 temp_s4;
    void **temp_a1;
    s32 phi_s6;
    s32 phi_s4;
    u8 phi_s3;
    Vec3f *phi_s2;

    temp_s0 = this;
    temp_s1 = globalCtx->state.gfxCtx;
    temp_v0 = temp_s1->polyOpa.p;
    temp_v0->words.w1 = (u32) (sSetupDL + 0x4B0);
    temp_v0->words.w0 = 0xDE000000;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_a2 = temp_s0->unk144.limbDrawTbl;
    temp_a1 = temp_s0->unk144.skeleton;
    this = temp_s0;
    SkelAnime_Draw(globalCtx, temp_a1, temp_a2, func_808C07D4, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_808C080C, &temp_s0->actor);
    if ((s32) this->unk24C > 0) {
        func_8012C2DC(globalCtx->state.gfxCtx);
        Matrix_RotateY((s16) ((func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) - this->actor.shape.rot.y) + 0x8000), 1U);
        Matrix_Scale(this->unk258, this->unk254, 1.0f, 1);
        temp_v0_2 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = 0xFF000000;
        temp_v0_2->words.w0 = 0xFB000000;
        temp_s5 = SysMatrix_GetCurrentState();
        sp74 = D_0407D590;
        sp70 = globalCtx + 0x18000;
        phi_s6 = 0;
        phi_s4 = -0x14;
        phi_s3 = this->unk24C;
        phi_s2 = &this->unk268;
loop_2:
        temp_v0_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDB060020;
        temp_v0_3->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((sp70->unk840 + phi_s6) * phi_s4) & 0x1FF, 0x20, 0x80);
        temp_v0_4 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xFA008080;
        temp_v0_4->words.w1 = (phi_s3 & 0xFF) | 0xFFFF0000;
        temp_s5->mf[3][0] = phi_s2->x;
        temp_s5->mf[3][1] = phi_s2->y;
        temp_s5->mf[3][2] = phi_s2->z;
        temp_v0_5 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDA380003;
        temp_v0_5->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_6 = temp_s1->polyXlu.p;
        temp_s3 = phi_s3 - 0x23;
        temp_s1->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xDE000000;
        temp_v0_6->words.w1 = (u32) sp74;
        phi_s3 = (u8) temp_s3;
        if (temp_s3 < 0) {

        } else {
            Matrix_Scale(0.87f, 0.87f, 1.0f, 1);
            temp_s4 = phi_s4 + 2;
            phi_s6 += 0xA;
            phi_s4 = temp_s4;
            phi_s2 += 0xC;
            if (temp_s4 != -8) {
                goto loop_2;
            }
        }
    }
    func_800BE680(globalCtx, &this->actor, (Vec3f []) (&this->actor + 0x2B0), 5, this->actor.unk260, this->actor.unk264, this->actor.unk25C, (u8) (s32) this->actor.unk24F);
}

