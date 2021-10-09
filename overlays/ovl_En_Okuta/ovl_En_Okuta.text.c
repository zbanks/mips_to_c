s32 func_800C9D50(CollisionContext *, CollisionPoly *, u8); /* extern */
void func_8086E084(Actor *arg0);                    /* static */
void func_8086E0F0(Actor *arg0, GlobalContext *arg1); /* static */
void func_8086E168(EnOkuta *arg0, GlobalContext *arg1); /* static */
void func_8086E214(Vec3f *arg0, Vec3f *arg1, s16 arg2, GlobalContext *arg3, ?, GlobalContext *); /* static */
void func_8086E27C(EnOkuta *arg0, GlobalContext *arg1); /* static */
void func_8086E2C0(EnOkuta *arg0, GlobalContext *arg1); /* static */
f32 func_8086E378(EnOkuta *arg0);                   /* static */
void func_8086E3B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_8086E4FC(EnOkuta *arg0);                  /* static */
void func_8086E5E8(EnOkuta *arg0, GlobalContext *arg1); /* static */
void func_8086E7A8(EnOkuta *arg0);                  /* static */
void func_8086E8E8(EnOkuta *arg0);                  /* static */
void func_8086EAE0(EnOkuta *arg0, GlobalContext *arg1); /* static */
void func_8086EE8C(Actor *arg0);                    /* static */
void func_8086EF90(EnOkuta *arg0);                  /* static */
void func_8086F2FC(Actor *arg0, GlobalContext *arg1); /* static */
void func_8086F4F4(EnOkuta *arg0);                  /* static */
void func_8086F8FC(EnOkuta *arg0);                  /* static */
void func_8086FCA4(Actor *arg0, GlobalContext *arg1); /* static */
void func_808700C0(Actor *this, GlobalContext *globalCtx); /* static */
s32 func_80870254(Vec3s *arg0, f32 arg1, Vec3f *arg2, Vec3s *); /* static */
s32 func_808704DC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_808705C8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_0600044C;
extern Gfx D_06003250;
extern SkeletonHeader D_060033D0;
extern AnimationHeader D_06003958;
extern AnimationHeader D_06003B24;
extern AnimationHeader D_06003EE4;
extern AnimationHeader D_06004204;
extern AnimationHeader D_0600466C;
static Gfx D_80870870 = {{{0xFA000000, 0xC89BFF}}, {{0xDF000000, 0}}};
static ColliderCylinderInit D_808708A0 = {
    {0xA, 0x11, 9, 0x39, 0x20, 1},
    {4, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 9, 1, 1},
    {0xD, 0x14, 0, {0, 0, 0}},
};
static ColliderCylinderInit D_808708CC;             /* type too large by 12; unable to generate initializer */
static s16 D_808708EC = 0x14;
static s16 D_808708EE = {0x28, 0xFFE2, 0, 0, 0};
static CollisionCheckInfoInit D_808708F8 = {4, 0xF, 0x3C, 0x64};
static DamageTable D_80870900 = {
    {
        0,
        1,
        0,
        1,
        1,
        1,
        0,
        1,
        1,
        1,
        0,
        1,
        0x32,
        0x42,
        1,
        1,
        1,
        2,
        0,
        0,
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
static InitChainEntry D_80870920;                   /* unable to generate initializer */
static Color_RGBA8 D_80870928 = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_8087092C = {0x96, 0x96, 0x96, 0xFF};
static Vec3f D_80870930 = {0.0f, -0.5f, 0.0f};
static Color_RGBA8 D_8087093C = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80870940 = {0x96, 0x96, 0x96, 0};
static ? D_80870944;                                /* unable to generate initializer */
static Vec3f D_80870954 = {
    {1500.0f, 1000.0f, 0.0f},
    {-1500.0f, 1000.0f, 0.0f},
    {0.0f, 1500.0f, -2000.0f},
};
static ? D_80870978;                                /* unable to generate initializer */

typedef struct EnOkuta {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ void (*actionFunc)(EnOkuta *, GlobalContext *);
    /* 0x018C */ u8 unk18C;                         /* inferred */
    /* 0x018D */ char pad18D[0x1];                  /* maybe part of unk18C[2]? */
    /* 0x018E */ s16 unk18E;                        /* inferred */
    /* 0x0190 */ s16 unk190;                        /* inferred */
    /* 0x0192 */ Vec3s unk192;                      /* inferred */
    /* 0x0198 */ char pad198[0x5A];                 /* maybe part of unk192[16]? */
    /* 0x01F2 */ Vec3s unk1F2;                      /* inferred */
    /* 0x01F8 */ char pad1F8[0x5C];
    /* 0x0254 */ f32 unk254;                        /* inferred */
    /* 0x0258 */ f32 unk258;                        /* inferred */
    /* 0x025C */ f32 unk25C;                        /* inferred */
    /* 0x0260 */ f32 unk260;                        /* inferred */
    /* 0x0264 */ f32 unk264;                        /* inferred */
    /* 0x0268 */ f32 unk268;                        /* inferred */
    /* 0x026C */ f32 unk26C;                        /* inferred */
    /* 0x0270 */ Vec3f unk270;                      /* inferred */
    /* 0x027C */ char pad27C[0x6C];                 /* maybe part of unk270[10]? */
    /* 0x02E8 */ ColliderCylinder unk2E8;           /* inferred */
} EnOkuta;                                          /* size 0x334 */

void EnOkuta_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnOkuta *this = (EnOkuta *) thisx;
    WaterBox *sp3C;
    f32 sp38;
    s32 sp34;
    CollisionContext *sp30;
    CollisionContext *temp_a0;
    s16 temp_t6;
    s16 temp_v0;
    s16 temp_v0_2;
    u32 temp_t4;

    Actor_ProcessInitChain(&this->actor, &D_80870920);
    temp_t6 = this->actor.params;
    this->actor.params &= 0xFF;
    temp_v0 = this->actor.params;
    this->unk190 = ((s32) temp_t6 >> 8) & 0xFF;
    if ((temp_v0 == 0) || (temp_v0 == 1)) {
        SkelAnime_Init(globalCtx, &this->unk144, &D_060033D0, &D_0600466C, &this->unk192, &this->unk1F2, 0x10);
        Collider_InitAndSetCylinder(globalCtx, &this->unk2E8, &this->actor, &D_808708CC);
        CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_80870900, &D_808708F8);
        temp_v0_2 = this->unk190;
        temp_a0 = &globalCtx->colCtx;
        if ((temp_v0_2 == 0xFF) || (temp_v0_2 == 0)) {
            this->unk190 = 1;
        }
        sp30 = temp_a0;
        this->actor.floorHeight = func_800C411C(temp_a0, &this->actor.floorPoly, &sp34, &this->actor, &this->actor.world.pos);
        if ((func_800CA1E8(globalCtx, sp30, this->actor.world.pos.x, this->actor.world.pos.z, &sp38, &sp3C) == 0) || (sp38 <= this->actor.floorHeight)) {
            Actor_MarkForDeath(&this->actor);
        } else {
            this->actor.home.pos.y = sp38;
        }
        if (this->actor.params == 1) {
            this->unk2E8.base.colType = 0xC;
            this->unk2E8.base.acFlags |= 4;
        }
        this->actor.targetMode = 5;
        func_8086E4FC(this);
        return;
    }
    ActorShape_Init(&this->actor.shape, 1100.0f, func_800B3FC0, 18.0f);
    temp_t4 = this->actor.flags & ~1;
    this->actor.flags = temp_t4;
    this->actor.flags = temp_t4 | 0x10;
    Collider_InitAndSetCylinder(globalCtx, &this->unk2E8, &this->actor, &D_808708A0);
    func_800BC154(globalCtx, &globalCtx->actorCtx, &this->actor, 6U);
    this->unk18E = 0x16;
    this->actor.shape.rot.y = 0;
    this->actor.world.rot.x = (s16) -(s32) this->actor.shape.rot.x;
    this->actor.shape.rot.x = 0;
    this->actionFunc = func_8086F694;
    this->actor.update = func_808700C0;
    this->actor.speedXZ = 10.0f;
}

void EnOkuta_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnOkuta *this = (EnOkuta *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk2E8);
}

void func_8086E084(Actor *arg0) {
    arg0->unk18C = 0xA;
    arg0->unk258 = 0.6f;
    arg0->unk18E = 0x50;
    arg0->unk2FC = 3;
    arg0->unk25C = 0.90000004f;
    arg0->unk254 = 1.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x50);
}

void func_8086E0F0(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk18C == 0xA) {
        arg0->unk18C = 0U;
        arg0->unk254 = 0.0f;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x270), 0xA, 2, 0.3f, 0.2f);
        arg0->unk2FC = 0;
    }
}

void func_8086E168(EnOkuta *arg0, GlobalContext *arg1) {
    s32 temp_s0;
    s32 phi_s0;

    phi_s0 = 0;
    do {
        EffectSsBubble_Spawn(arg1, arg0 + 0x24, -10.0f, 10.0f, 30.0f, 0.25f);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0xA);
}

void func_8086E214(Vec3f *arg0, Vec3f *arg1, s16 arg2, GlobalContext *arg3) {
    func_800B0DE0(arg3, arg0, arg1, &D_801D15B0, &D_80870928, &D_8087092C, (s16) 0x190, (s16) (s32) arg2);
}

void func_8086E27C(EnOkuta *arg0, GlobalContext *arg1) {
    EffectSsGSplash_Spawn(arg1, arg0 + 8, NULL, NULL, (s16) 0, (s16) 0x514);
}

void func_8086E2C0(EnOkuta *arg0, GlobalContext *arg1) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 *temp_a1;
    f32 temp_f0;

    temp_f0 = arg0->actor.world.pos.y - arg0->actor.home.pos.y;
    if ((((u32) arg1->gameplayFrames % 7U) == 0) && (temp_f0 < 50.0f) && (temp_f0 >= -20.0f)) {
        temp_a1 = &sp28;
        sp28 = arg0->actor.world.pos.x;
        sp2C = arg0->actor.home.pos.y;
        sp30 = arg0->actor.world.pos.z;
        EffectSsGRipple_Spawn(arg1, (Vec3f *) temp_a1, 0xFA, 0x28A, (s16) 0);
    }
}

f32 func_8086E378(EnOkuta *arg0) {
    f32 temp_f12;
    f32 temp_f2;

    temp_f12 = arg0->actor.home.pos.y;
    temp_f2 = arg0->actor.world.pos.y + arg0->actor.yDistToPlayer + 60.0f;
    if (temp_f12 < temp_f2) {
        return temp_f12;
    }
    return temp_f2;
}

void func_8086E3B8(Actor *arg0, GlobalContext *arg1) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 *temp_a0;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f8;

    sp3C = Math_SinS(arg0->shape.rot.y);
    temp_f0 = Math_CosS(arg0->shape.rot.y);
    temp_f8 = 25.0f * temp_f0;
    sp4C = arg0->world.pos.x + (25.0f * sp3C);
    sp50 = arg0->world.pos.y - 6.0f;
    sp54 = arg0->world.pos.z + temp_f8;
    sp38 = temp_f0;
    if (Actor_Spawn(arg1 + 0x1CA0, arg1, 8, sp4C, sp50, sp54, (s16) (s32) arg0->shape.rot.x, (s16) (s32) arg0->shape.rot.y, (s16) (s32) arg0->shape.rot.z, (s16) (arg0->params + 0x10)) != 0) {
        temp_a0 = &sp4C;
        temp_a1 = &sp40;
        sp4C = arg0->world.pos.x + (40.0f * sp3C);
        sp54 = arg0->world.pos.z + (40.0f * sp38);
        sp40 = 1.5f * sp3C;
        sp44 = 0.0f;
        sp48 = 1.5f * sp38;
        sp50 = arg0->world.pos.y;
        func_8086E214((bitwise Vec3f *) 1.5f, (bitwise Vec3f *) sp3C, (s16) temp_a0, (GlobalContext *) temp_a1, 0x14, arg1);
    }
    Audio_PlayActorSound2(arg0, 0x387EU);
}

void func_8086E4FC(EnOkuta *arg0) {
    arg0->actor.draw = NULL;
    arg0->actor.flags &= -2;
    arg0->actionFunc = func_8086E52C;
    arg0->actor.world.pos.y = arg0->actor.home.pos.y;
}

void func_8086E52C(EnOkuta *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    s16 temp_v0;
    s32 phi_v1;

    temp_f0 = this->actor.xzDistToPlayer;
    this->actor.world.pos.y = this->actor.home.pos.y;
    if ((temp_f0 < 480.0f) && (temp_f0 > 200.0f)) {
        if (this->actor.params == 0) {
            func_8086E5E8();
            return;
        }
        temp_v0 = this->actor.yawTowardsPlayer - this->actor.world.rot.y;
        phi_v1 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = -(s32) temp_v0;
        }
        if ((phi_v1 < 0x4000) && (globalCtx->unk_1887C == 0)) {
            func_8086E5E8();
        }
        // Duplicate return node #9. Try simplifying control flow for better match
    }
}

void func_8086E5E8(EnOkuta *arg0, GlobalContext *arg1) {
    EnOkuta *temp_a2;

    temp_a2 = arg0;
    temp_a2->actor.draw = EnOkuta_Draw;
    temp_a2->actor.flags |= 1;
    temp_a2->actor.shape.rot.y = temp_a2->actor.yawTowardsPlayer;
    arg0 = temp_a2;
    SkelAnime_ChangeAnimDefaultStop(temp_a2 + 0x144, &D_0600466C);
    func_8086E168(arg0, arg1);
    arg0->actionFunc = func_8086E658;
}

void func_8086E658(EnOkuta *this, GlobalContext *globalCtx) {
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    f32 temp_f0;

    temp_a0 = &this->unk144;
    sp20 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        if ((this->actor.xzDistToPlayer < 160.0f) && (this->actor.params == 0)) {
            func_8086E7A8(this);
        } else {
            func_8086E8E8(this);
        }
    } else {
        temp_f0 = this->unk144.animCurrentFrame;
        if (temp_f0 <= 4.0f) {
            Actor_SetScale(&this->actor, temp_f0 * 0.25f * 0.01f);
        } else if (func_801378B8(sp20, 5.0f) != 0) {
            Actor_SetScale(&this->actor, 0.01f);
        }
    }
    if (func_801378B8(sp20, 2.0f) != 0) {
        Audio_PlayActorSound2(&this->actor, 0x38C2U);
    }
    if (func_801378B8(sp20, 12.0f) != 0) {
        Audio_PlayActorSound2(&this->actor, 0x38C3U);
    }
    if ((func_801378B8(sp20, 3.0f) != 0) || (func_801378B8(sp20, 15.0f) != 0)) {
        func_8086E27C(this, globalCtx);
    }
}

void func_8086E7A8(EnOkuta *arg0) {
    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_06003B24);
    arg0->actionFunc = func_8086E7E8;
}

void func_8086E7E8(EnOkuta *this, GlobalContext *globalCtx) {
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    f32 temp_f0;

    Math_ApproachF(&this->actor.world.pos.y, this->actor.home.pos.y, 0.5f, 30.0f);
    temp_a0 = &this->unk144;
    sp20 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        Audio_PlayActorSound2(&this->actor, 0x38C5U);
        func_8086E168(this, globalCtx);
        func_8086E4FC(this);
    } else {
        temp_f0 = this->unk144.animCurrentFrame;
        if (temp_f0 >= 4.0f) {
            Actor_SetScale(&this->actor, (6.0f - temp_f0) * 0.5f * 0.01f);
        }
    }
    if (func_801378B8(sp20, 2.0f) != 0) {
        Audio_PlayActorSound2(&this->actor, 0x38C4U);
    }
    if (func_801378B8(sp20, 4.0f) != 0) {
        func_8086E27C(this, globalCtx);
    }
}

void func_8086E8E8(EnOkuta *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_06003EE4);
    if (func_8086EC00 == arg0->actionFunc) {
        arg0->unk18E = 8;
    } else {
        arg0->unk18E = 0;
    }
    arg0->actionFunc = func_8086E948;
}

void func_8086E948(EnOkuta *this, GlobalContext *globalCtx) {
    SkelAnime *sp2C;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_3;
    s32 temp_v0_2;
    s32 phi_v1;

    if (this->actor.params == 0) {
        this->actor.world.pos.y = this->actor.home.pos.y;
    } else {
        this->actor.world.pos.y = func_8086E378(this);
    }
    temp_a0 = &this->unk144;
    sp2C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801378B8(temp_a0, 0.0f) != 0) {
        temp_v0 = this->unk18E;
        if (temp_v0 != 0) {
            this->unk18E = temp_v0 - 1;
        }
    }
    if (func_801378B8(sp2C, 0.5f) != 0) {
        Audio_PlayActorSound2(&this->actor, 0x38C1U);
    }
    temp_f0 = this->actor.xzDistToPlayer;
    if ((temp_f0 > 560.0f) || ((temp_f0 < 160.0f) && (this->actor.params == 0))) {
        func_8086E7A8(this);
        return;
    }
    temp_v0_2 = Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 3, 0xE38, (s16) 0x38E);
    if (temp_v0_2 < 0) {
        phi_v1 = -(s32) (s16) temp_v0_2;
    } else {
        phi_v1 = (s32) (s16) temp_v0_2;
    }
    if ((phi_v1 < 0x38E) && (((temp_v0_3 = this->actor.params, (temp_v0_3 == 0)) && (this->unk18E == 0) && (this->actor.yDistToPlayer < 120.0f)) || ((temp_v0_3 == 1) && ((this->unk18E == 0) || (this->actor.xzDistToPlayer < 150.0f))))) {
        func_8086EAE0(this, globalCtx);
    }
}

void func_8086EAE0(EnOkuta *arg0, GlobalContext *arg1) {
    void (*sp24)(EnOkuta *, GlobalContext *);
    f32 temp_f0;

    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_0600044C);
    if (func_8086EC00 != arg0->actionFunc) {
        if (arg0->actor.params == 0) {
            arg0->unk18E = arg0->unk190;
        } else {
            arg0->unk18E = (s16) (s32) (((560.0f - arg0->actor.xzDistToPlayer) * 0.005f) + 1.0f);
        }
    }
    if (arg0->actor.params == 0) {
        temp_f0 = arg0->actor.yDistToPlayer + 20.0f;
        arg0->unk260 = temp_f0;
        if (temp_f0 < 10.0f) {
            arg0->unk260 = 10.0f;
        } else {
            arg0->unk260 = arg0->unk260;
        }
        if (arg0->unk260 > 50.0f) {
            sp24 = func_8086EC00;
            func_8086E27C(arg0, arg1);
            Audio_PlayActorSound2(&arg0->actor, 0x38C2U);
        }
    }
    arg0->actionFunc = func_8086EC00;
}

void func_8086EC00(EnOkuta *this, GlobalContext *globalCtx) {
    f32 sp44;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    s16 sp32;
    SkelAnime *sp28;
    Actor *temp_v0_2;
    SkelAnime *temp_a0;
    f32 *temp_a1;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0;
    s32 temp_v0_3;
    s16 phi_v0;
    s16 phi_v1;

    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 3, 0x71C);
    temp_a0 = &this->unk144;
    sp28 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        temp_v0 = this->unk18E;
        if (temp_v0 != 0) {
            this->unk18E = temp_v0 - 1;
        }
        if (this->unk18E == 0) {
            if ((this->actor.params != 1) || (this->actor.xzDistToPlayer > 150.0f)) {
                func_8086E8E8(this);
            } else {
                func_8086EAE0(this, globalCtx);
            }
        } else {
            func_8086EAE0(this, globalCtx);
        }
    } else {
        if (this->actor.params == 0) {
            temp_f2 = this->unk144.animCurrentFrame;
            if (temp_f2 < 13.0f) {
                this->actor.world.pos.y = (sin_rad(0.2617889f * temp_f2) * this->unk260) + this->actor.home.pos.y;
            }
            if ((this->unk260 > 50.0f) && (func_801378B8(sp28, 13.0f) != 0)) {
                func_8086E27C(this, globalCtx);
                Audio_PlayActorSound2(&this->actor, 0x38C3U);
            }
        } else {
            temp_f2_2 = this->unk144.animCurrentFrame;
            this->actor.world.pos.y = func_8086E378(this);
            if (temp_f2_2 < 13.0f) {
                temp_v0_2 = globalCtx->actorCtx.actorList[2].first;
                temp_a1 = &sp34;
                sp34 = temp_v0_2->world.pos.x;
                sp38 = temp_v0_2->world.pos.y + 20.0f;
                sp44 = temp_f2_2;
                sp3C = temp_v0_2->world.pos.z;
                temp_v0_3 = Actor_PitchToPoint(&this->actor, (Vec3f *) temp_a1);
                if (temp_v0_3 < -0x2AAA) {
                    phi_v0 = -0x2AAA;
                } else {
                    phi_v1 = (s16) temp_v0_3;
                    if ((s32) (s16) temp_v0_3 > 0) {
                        phi_v1 = 0;
                    }
                    phi_v0 = phi_v1;
                }
                sp32 = phi_v0;
                this->actor.shape.rot.x = (s16) (s32) (sin_rad(0.2617889f * temp_f2_2) * (f32) phi_v0);
            }
        }
        if (func_801378B8(sp28, 6.0f) != 0) {
            func_8086E3B8(&this->actor, globalCtx);
        }
    }
    if ((this->actor.params == 0) && (this->actor.xzDistToPlayer < 160.0f)) {
        func_8086E7A8(this);
    }
}

void func_8086EE8C(Actor *arg0) {
    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_06004204, -5.0f);
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0xB);
    arg0->unk2F9 = (u8) (arg0->unk2F9 & 0xFFFE);
    Actor_SetScale(arg0, 0.01f);
    Audio_PlayActorSound2(arg0, 0x38C6U);
    arg0->unk188 = func_8086EF14;
}

void func_8086EF14(EnOkuta *this, GlobalContext *globalCtx) {
    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        if (this->actor.colChkInfo.health == 0) {
            func_8086EF90(this);
        } else {
            this->unk2E8.base.acFlags |= 1;
            func_8086E8E8(this);
        }
    }
    Math_ApproachF(&this->actor.world.pos.y, this->actor.home.pos.y, 0.5f, 5.0f);
}

void func_8086EF90(EnOkuta *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_06003958, -3.0f);
    arg0->unk18E = 0;
    arg0->actor.flags &= -2;
    arg0->actionFunc = func_8086EFE8;
}

void func_8086EFE8(EnOkuta *this, GlobalContext *globalCtx) {
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    PosRot *temp_s1;
    SkelAnime *temp_s0;
    f32 *temp_a0;
    f32 *temp_a1;
    f32 temp_f0;
    s16 temp_v0;
    s32 temp_s0_2;
    s32 phi_s0;

    temp_s0 = &this->unk144;
    if (SkelAnime_FrameUpdateMatrix(temp_s0) != 0) {
        this->unk18E += 1;
    }
    Math_ApproachF(&this->actor.world.pos.y, this->actor.home.pos.y, 0.5f, 5.0f);
    temp_a0 = &sp70;
    temp_a1 = &sp7C;
    if (this->unk18E == 5) {
        sp70 = this->actor.world.pos.x;
        sp74 = this->actor.world.pos.y + 40.0f;
        sp7C = 0.0f;
        sp84 = 0.0f;
        sp80 = -0.5f;
        sp78 = this->actor.world.pos.z;
        func_8086E214((Vec3f *) temp_a0, (Vec3f *) temp_a1, -0x14, globalCtx);
        Audio_PlayActorSound2(&this->actor, 0x38C7U);
    }
    if (func_801378B8(temp_s0, 15.0f) != 0) {
        func_8086E27C(this, globalCtx);
        Audio_PlayActorSound2(&this->actor, 0x38C3U);
    }
    temp_v0 = this->unk18E;
    if ((s32) temp_v0 < 3) {
        Actor_SetScale(&this->actor, (((f32) temp_v0 * 0.25f) + 1.0f) * 0.01f);
        return;
    }
    if ((s32) temp_v0 < 6) {
        Actor_SetScale(&this->actor, (1.5f - ((f32) (temp_v0 - 2) * 0.2333f)) * 0.01f);
        return;
    }
    if ((s32) temp_v0 < 0xB) {
        Actor_SetScale(&this->actor, (((f32) (temp_v0 - 5) * 0.04f) + 0.8f) * 0.01f);
        return;
    }
    if (Math_StepToF(&this->actor.scale.x, 0.0f, 0.0005f) != 0) {
        temp_s1 = &this->actor.world;
        Audio_PlaySoundAtPosition(globalCtx, &temp_s1->pos, 0x1E, 0x38C5U);
        Item_DropCollectibleRandom(globalCtx, &this->actor, &temp_s1->pos, 0xA0);
        phi_s0 = 0;
        do {
            sp7C = (Rand_ZeroOne() - 0.5f) * 7.0f;
            sp80 = Rand_ZeroOne() * 7.0f;
            sp84 = (Rand_ZeroOne() - 0.5f) * 7.0f;
            EffectSsDtBubble_SpawnCustomColor(globalCtx, &temp_s1->pos, (Vec3f *) &sp7C, &D_80870930, &D_8087093C, &D_80870940, (s16) Rand_S16Offset(0x64, 0x32), (s16) 0x19, (s16) 0);
            temp_s0_2 = phi_s0 + 1;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 0x14);
        Actor_MarkForDeath(&this->actor);
    }
    temp_f0 = this->actor.scale.x;
    this->actor.scale.z = temp_f0;
    this->actor.scale.y = temp_f0;
}

void func_8086F2FC(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_v0;
    u32 temp_t3;

    arg0->unk18E = 0xA;
    func_800BCB70(arg0, 0x8000, 0x80FF, 0, (s16) 0xA);
    temp_v0 = Actor_SpawnAsChild(arg1 + 0x1CA0, arg0, arg1, 0x143, arg0->world.pos.x, arg0->world.pos.y + ((f32) arg0->unk164->unk2 * arg0->scale.y) + (25.0f * arg0->unk268), arg0->world.pos.z, (s16) 0, (s16) (s32) arg0->home.rot.y, (s16) 0, 3);
    arg0->child = temp_v0;
    if (temp_v0 != 0) {
        temp_t3 = arg0->flags & ~1;
        arg0->flags = temp_t3;
        arg0->flags = temp_t3 | 0x10;
        temp_v0->cutscene = arg0->cutscene;
        arg0->unk188 = func_8086F434;
        return;
    }
    func_8086E084(arg0);
    if (Actor_ApplyDamage(arg0) == 0) {
        Enemy_StartFinishingBlow(arg1, arg0);
        arg0->unk18E = 3;
        arg0->unk2F9 = (u8) (arg0->unk2F9 & 0xFFFE);
    }
    arg0->unk188 = func_8086F4B0;
}

void func_8086F434(EnOkuta *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    f32 *temp_a0;
    f32 temp_a1;

    temp_v0 = this->actor.child;
    this->actor.colorFilterTimer = 0xA;
    temp_a0 = &this->actor.world.pos.y;
    if ((temp_v0 == 0) || (temp_v0->update == 0)) {
        temp_a1 = this->actor.home.pos.y;
        this->actor.flags |= 1;
        this = this;
        if (Math_StepToF(temp_a0, temp_a1, 10.0f) != 0) {
            this->actor.flags &= -0x11;
            func_8086E8E8(this);
        }
    }
}

void func_8086F4B0(EnOkuta *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk18E;
    if (temp_v0 != 0) {
        this->unk18E = temp_v0 - 1;
    }
    if (this->unk18E == 0) {
        func_8086E0F0();
        func_8086EE8C(&this->actor);
    }
}

void func_8086F4F4(EnOkuta *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_06004204, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06004204.common) - 3.0f, (u8) 2, -3.0f);
    arg0->unk18E = 0x14;
    arg0->actionFunc = func_8086F57C;
}

void func_8086F57C(EnOkuta *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a0;
    s16 temp_v0;

    this->unk18E += -1;
    Math_ScaledStepToS(&this->actor.shape.rot.x, 0, 0x400);
    temp_a0 = &this->unk144;
    sp34 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        SkelAnime_ChangeAnim(sp34, &D_06004204, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06004204.common) - 3.0f, (u8) 2, -3.0f);
    }
    temp_v0 = this->unk18E;
    if ((s32) temp_v0 < 0xA) {
        this->actor.shape.rot.y += (s32) (8192.0f * sin_rad((f32) temp_v0 * 0.15707964f));
    } else {
        this->actor.shape.rot.y += 0x2000;
    }
    if (this->unk18E == 0) {
        func_8086E8E8(this);
    }
}

void func_8086F694(EnOkuta *this, GlobalContext *globalCtx) {
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    Actor *sp50;
    Vec3s sp48;
    f32 *temp_a1;
    f32 temp_f16;
    f32 temp_f2;
    u16 temp_v0;
    u8 temp_t6;
    u8 temp_v0_2;
    u8 temp_v0_3;

    this->unk18E += -1;
    if ((s32) this->unk18E < 0) {
        temp_f2 = this->actor.velocity.x;
        temp_f16 = this->actor.velocity.z;
        this->actor.velocity.y -= 0.5f;
        sp50 = globalCtx->actorCtx.actorList[2].first;
        this->actor.world.rot.x = Math_FAtan2F(sqrtf((temp_f2 * temp_f2) + (temp_f16 * temp_f16)), this->actor.velocity.y);
    }
    temp_v0 = this->actor.bgCheckFlags;
    this->actor.home.rot.z += 0x1554;
    if (((temp_v0 & 8) != 0) || ((temp_v0 & 1) != 0) || ((temp_v0 & 0x10) != 0) || ((this->unk2E8.base.atFlags & 2) != 0) || ((this->unk2E8.base.acFlags & 2) != 0) || ((this->unk2E8.base.ocFlags1 & 2) != 0) || (this->actor.floorHeight == -32000.0f)) {
        temp_a1 = &sp54;
        if ((globalCtx->actorCtx.actorList[2].first->unk144 == 1) && (temp_v0_2 = this->unk2E8.base.atFlags, ((temp_v0_2 & 2) != 0)) && ((temp_v0_2 & 0x10) != 0) && (temp_t6 = temp_v0_2 & 0xFFE9, ((temp_v0_2 & 4) != 0))) {
            this->unk2E8.base.atFlags = temp_t6;
            this->unk2E8.base.atFlags = temp_t6 | 8;
            this->unk2E8.info.toucher.dmgFlags = 0x400000;
            this->unk2E8.info.toucher.damage = 2;
            func_8018219C(globalCtx->actorCtx.actorList[2].first + 0xD04, &sp48, 0);
            this->actor.world.rot.y = sp48.y + 0x8000;
            this->unk18E = 0x16;
            return;
        }
        sp54 = this->actor.world.pos.x;
        sp58 = this->actor.world.pos.y + 11.0f;
        sp5C = this->actor.world.pos.z;
        EffectSsHahen_SpawnBurst(globalCtx, (Vec3f *) temp_a1, 6.0f, 0, (s16) 1, (s16) 2, (s16) 0xF, (s16) 5, (s16) 0xA, &D_06003250);
        Audio_PlaySoundAtPosition(globalCtx, &this->actor.world.pos, 0x14, 0x38C0U);
        temp_v0_3 = this->unk2E8.base.atFlags;
        if (((temp_v0_3 & 2) != 0) && ((temp_v0_3 & 0x10) != 0) && ((temp_v0_3 & 4) == 0) && (this->actor.params == 0x11)) {
            func_800B8D98(globalCtx, &this->actor, 8.0f, this->actor.world.rot.y, 6.0f);
        }
        Actor_MarkForDeath(&this->actor);
        return;
    }
    if (this->unk18E == -0x12C) {
        Actor_MarkForDeath(&this->actor);
    }
}

void func_8086F8FC(EnOkuta *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s32 temp_v0;
    f32 phi_f4;
    f32 phi_f16;
    f32 phi_f16_2;

    temp_v0 = arg0->actionFunc;
    temp_f14 = arg0->unk144.animCurrentFrame;
    if (func_8086E658 == temp_v0) {
        if (temp_f14 < 8.0f) {
            arg0->unk26C = 1.0f;
            arg0->unk268 = 1.0f;
            phi_f16_2 = 1.0f;
            goto block_27;
        }
        if (temp_f14 < 10.0f) {
            arg0->unk26C = 1.0f;
            arg0->unk264 = 1.0f;
            arg0->unk268 = ((temp_f14 - 7.0f) * 0.4f) + 1.0f;
            return;
        }
        if (temp_f14 < 14.0f) {
            temp_f0 = temp_f14 - 9.0f;
            temp_f2 = (temp_f0 * 0.075f) + 1.0f;
            arg0->unk26C = temp_f2;
            arg0->unk264 = temp_f2;
            arg0->unk268 = 1.8f - (temp_f0 * 0.25f);
            return;
        }
        temp_f0_2 = temp_f14 - 13.0f;
        temp_f2_2 = 1.3f - (temp_f0_2 * 0.05f);
        arg0->unk26C = temp_f2_2;
        arg0->unk264 = temp_f2_2;
        arg0->unk268 = (temp_f0_2 * 0.0333f) + 0.8f;
        return;
    }
    if (func_8086E7E8 == temp_v0) {
        if (temp_f14 < 3.0f) {
            arg0->unk268 = 1.0f;
            phi_f16 = 1.0f;
        } else {
            if (temp_f14 < 4.0f) {
                phi_f4 = (temp_f14 - 2.0f) + 1.0f;
            } else {
                phi_f4 = 2.0f - ((temp_f14 - 3.0f) * 0.333f);
            }
            arg0->unk268 = phi_f4;
            phi_f16 = 1.0f;
        }
        arg0->unk26C = phi_f16;
        phi_f16_2 = phi_f16;
        goto block_27;
    }
    if (func_8086EC00 == temp_v0) {
        if (temp_f14 < 5.0f) {
            temp_f0_3 = (temp_f14 * 0.125f) + 1.0f;
            arg0->unk26C = temp_f0_3;
            arg0->unk268 = temp_f0_3;
            arg0->unk264 = temp_f0_3;
            return;
        }
        if (temp_f14 < 7.0f) {
            temp_f0_4 = 1.5f - ((temp_f14 - 4.0f) * 0.35f);
            arg0->unk26C = temp_f0_4;
            arg0->unk268 = temp_f0_4;
            arg0->unk264 = temp_f0_4;
            return;
        }
        if (temp_f14 < 17.0f) {
            arg0->unk268 = 0.8f;
            temp_f0_5 = ((temp_f14 - 6.0f) * 0.05f) + 0.8f;
            arg0->unk26C = temp_f0_5;
            arg0->unk264 = temp_f0_5;
            return;
        }
        temp_f0_6 = temp_f14 - 16.0f;
        temp_f2_3 = 1.3f - (temp_f0_6 * 0.1f);
        arg0->unk26C = temp_f2_3;
        arg0->unk264 = temp_f2_3;
        arg0->unk268 = (temp_f0_6 * 0.0666f) + 0.8f;
        return;
    }
    if (func_8086E948 == temp_v0) {
        arg0->unk26C = 1.0f;
        arg0->unk264 = 1.0f;
        arg0->unk268 = (sin_rad(0.19634955f * temp_f14) * 0.2f) + 1.0f;
        return;
    }
    arg0->unk26C = 1.0f;
    arg0->unk268 = 1.0f;
    phi_f16_2 = 1.0f;
block_27:
    arg0->unk264 = phi_f16_2;
}

void func_8086FCA4(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = arg0->unk2F9;
    if (((temp_v0 & 2) != 0) && ((arg0->unk2F9 = (u8) (temp_v0 & 0xFFFD), (arg0->unk18C != 0xA)) || ((*arg0->unk324 & 0xDB0B3) == 0))) {
        func_800BE258(arg0, arg0 + 0x300);
        func_8086E0F0(arg0, arg1);
        temp_v0_2 = arg0->colChkInfo.damageEffect;
        if (temp_v0_2 == 3) {
            func_8086F2FC(arg0, arg1);
            return;
        }
        if (temp_v0_2 == 4) {
            arg0->unk254 = 4.0f;
            arg0->unk18C = 0x14U;
            arg0->unk258 = 0.6f;
            Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) arg0->unk30E, (f32) arg0->unk310, (f32) arg0->unk312, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
        }
        if (Actor_ApplyDamage(arg0) == 0) {
            Enemy_StartFinishingBlow(arg1, arg0);
        }
        func_8086EE8C(arg0);
        // Duplicate return node #10. Try simplifying control flow for better match
    }
}

void EnOkuta_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnOkuta *this = (EnOkuta *) thisx;
    CollisionCheckContext *sp2C;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    f32 temp_f0;
    s32 temp_v0;
    void (*temp_v0_2)(EnOkuta *, GlobalContext *);

    if (this->actor.params == 0) {
        func_8086FCA4(&this->actor, globalCtx);
    } else {
        temp_v0 = this->unk2E8.base.atFlags & 2;
        if ((temp_v0 != 0) || ((this->unk2E8.base.acFlags & 2) != 0)) {
            if (temp_v0 != 0) {
                func_800B8D98(globalCtx, &this->actor, 8.0f, this->actor.world.rot.y, 6.0f);
            }
            func_8086F4F4(this);
        }
    }
    this->actionFunc(this, globalCtx);
    if (func_8086F434 != this->actionFunc) {
        func_8086F8FC(this);
        temp_a1 = &this->unk2E8;
        this->unk2E8.dim.height = (s16) (s32) ((((f32) D_808708EE * this->unk268) - (f32) this->unk2E8.dim.yShift) * this->actor.scale.y * 100.0f);
        sp28 = temp_a1;
        Collider_UpdateCylinder(&this->actor, temp_a1);
        temp_v0_2 = this->actionFunc;
        if ((func_8086E658 == temp_v0_2) || (func_8086E7E8 == temp_v0_2)) {
            this->unk2E8.dim.pos.y = (s16) (s32) (this->actor.world.pos.y + ((f32) this->unk144.limbDrawTbl->y * this->actor.scale.y));
            this->unk2E8.dim.radius = (s16) (s32) ((f32) D_808708EC * this->actor.scale.x * 100.0f);
        }
        if (this->actor.draw != 0) {
            if (this->actor.params == 1) {
                CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &sp28->base);
            }
            temp_a1_2 = &globalCtx->colChkCtx;
            if ((this->unk2E8.base.acFlags & 1) != 0) {
                sp2C = temp_a1_2;
                CollisionCheck_SetAC(globalCtx, temp_a1_2, &sp28->base);
            }
            CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &sp28->base);
            func_8086E2C0(this, globalCtx);
        }
        Actor_SetHeight(&this->actor, 15.0f);
        if (this->unk254 > 0.0f) {
            if (this->unk18C != 0xA) {
                Math_StepToF(&this->unk254, 0.0f, 0.05f);
                temp_f0 = (this->unk254 + 1.0f) * 0.3f;
                this->unk258 = temp_f0;
                if (temp_f0 > 0.6f) {
                    this->unk258 = 0.6f;
                    return;
                }
                this->unk258 = this->unk258;
                return;
            }
            if (Math_StepToF(&this->unk25C, 0.6f, 0.015000001f) == 0) {
                func_800B9010(&this->actor, 0x20B2U);
            }
            // Duplicate return node #24. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #24. Try simplifying control flow for better match
    }
}

void func_808700C0(Actor *this, GlobalContext *globalCtx) {
    Vec3f sp38;
    s32 sp34;
    PosRot *sp30;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a1_2;
    CollisionCheckContext *temp_a1_3;
    PosRot *temp_a1;

    sp34 = 0;
    if ((globalCtx->actorCtx.actorList[2].first->unkA6C & 0x300002C2) == 0) {
        this->unk188(this, globalCtx);
        Actor_SetVelocityAndMoveXYRotation(this);
        temp_a1 = &this->world;
        sp30 = temp_a1;
        Math_Vec3f_Copy(&sp38, &temp_a1->pos);
        Actor_UpdateBgCheckInfo(globalCtx, this, 10.0f, 15.0f, 30.0f, 7U);
        if (((this->bgCheckFlags & 8) != 0) && (func_800C9D50(&globalCtx->colCtx, this->wallPoly, this->wallBgId) != 0)) {
            sp34 = 1;
            this->bgCheckFlags &= 0xFFF7;
        }
        if (((this->bgCheckFlags & 1) != 0) && (func_800C9D50(&globalCtx->colCtx, this->floorPoly, this->floorBgId) != 0)) {
            sp34 = 1;
            this->bgCheckFlags &= 0xFFFE;
        }
        if ((sp34 != 0) && ((this->bgCheckFlags & 9) == 0)) {
            Math_Vec3f_Copy(&sp30->pos, &sp38);
        }
        temp_a1_2 = this + 0x2E8;
        sp2C = temp_a1_2;
        Collider_UpdateCylinder(this, temp_a1_2);
        this->flags |= 0x1000000;
        temp_a1_3 = &globalCtx->colChkCtx;
        sp30 = (PosRot *) temp_a1_3;
        CollisionCheck_SetAT(globalCtx, temp_a1_3, &sp2C->base);
        CollisionCheck_SetAC(globalCtx, temp_a1_3, &sp2C->base);
        CollisionCheck_SetOC(globalCtx, temp_a1_3, &sp2C->base);
    }
}

s32 func_80870254(Vec3s *arg0, f32 arg1, Vec3f *arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_v0;

    temp_v0 = arg0->unk188;
    if (func_8086E948 == temp_v0) {
        arg2->y = 1.0f;
        arg2->z = 1.0f;
        arg2->x = (sin_rad(0.19634955f * arg1) * 0.4f) + 1.0f;
        goto block_18;
    }
    if (func_8086EC00 == temp_v0) {
        if (arg1 < 5.0f) {
            arg2->z = 1.0f;
            temp_f0 = (arg1 * 0.25f) + 1.0f;
            arg2->y = temp_f0;
            arg2->x = temp_f0;
        } else if (arg1 < 7.0f) {
            temp_f0_2 = (arg1 - 4.0f) * 0.5f;
            temp_f2 = 2.0f - temp_f0_2;
            arg2->y = temp_f2;
            arg2->x = temp_f2;
            arg2->z = temp_f0_2 + 1.0f;
        } else {
            arg2->x = 1.0f;
            arg2->y = 1.0f;
            arg2->z = 2.0f - ((arg1 - 6.0f) * 0.0769f);
        }
        goto block_18;
    }
    if (func_8086EFE8 == temp_v0) {
        if ((arg1 >= 35.0f) || (arg1 < 25.0f)) {
            return 0;
        }
        if (arg1 < 27.0f) {
            arg2->z = 1.0f;
            temp_f0_3 = ((arg1 - 24.0f) * 0.5f) + 1.0f;
            arg2->y = temp_f0_3;
            arg2->x = temp_f0_3;
        } else if (arg1 < 30.0f) {
            temp_f0_4 = (arg1 - 26.0f) * 0.333f;
            temp_f2_2 = 2.0f - temp_f0_4;
            arg2->y = temp_f2_2;
            arg2->x = temp_f2_2;
            arg2->z = temp_f0_4 + 1.0f;
        } else {
            arg2->x = 1.0f;
            arg2->y = 1.0f;
            arg2->z = 2.0f - ((arg1 - 29.0f) * 0.2f);
        }
block_18:
        return 1;
    }
    return 0;
}

s32 func_808704DC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    Vec3f sp1C;
    f32 temp_f0;
    f32 phi_f0;
    s32 phi_v1;

    temp_f0 = arg5->unk15C;
    phi_f0 = temp_f0;
    phi_v1 = 0;
    if (func_8086EFE8 == arg5->unk188) {
        phi_f0 = temp_f0 + (f32) arg5->unk18E;
    }
    if (arg1 == 0xE) {
        if ((arg5->unk264 != 1.0f) || (arg5->unk268 != 1.0f) || (arg5->unk26C != 1.0f)) {
            Math_Vec3f_Copy(&sp1C, arg5 + 0x264);
            phi_v1 = 1;
        }
    } else if (arg1 == 0xF) {
        phi_v1 = func_80870254(arg5, phi_f0, &sp1C, arg5);
    }
    if (phi_v1 != 0) {
        Matrix_Scale(sp1C.x, sp1C.y, sp1C.z, 1);
    }
    return 0;
}

void func_808705C8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f *temp_s0;
    s8 temp_s2;
    Vec3f *phi_s0;
    Vec3f *phi_s1;

    temp_s2 = *(&D_80870944 + arg1);
    if (temp_s2 != -1) {
        if (temp_s2 == 5) {
            SysMatrix_GetStateTranslationAndScaledX(1500.0f, arg4 + (temp_s2 * 0xC) + 0x270);
            return;
        }
        if (temp_s2 == 6) {
            SysMatrix_GetStateTranslationAndScaledY(2800.0f, arg4 + (temp_s2 * 0xC) + 0x270);
            phi_s0 = &D_80870954;
            phi_s1 = arg4 + ((temp_s2 + 1) * 0xC) + 0x270;
            do {
                SysMatrix_MultiplyVector3fByState(phi_s0, phi_s1);
                temp_s0 = phi_s0 + 0xC;
                phi_s0 = temp_s0;
                phi_s1 += 0xC;
            } while (temp_s0 != &D_80870978);
            return;
        }
        SysMatrix_GetStateTranslation(arg4 + (temp_s2 * 0xC) + 0x270);
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void EnOkuta_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnOkuta *this = (EnOkuta *) thisx;
    Gfx *sp34;
    GraphicsContext *sp30;
    Gfx *temp_v1;
    GraphicsContext *temp_t0;
    s16 temp_v0;

    temp_t0 = globalCtx->state.gfxCtx;
    temp_v1 = temp_t0->polyOpa.p;
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) (sSetupDL + 0x4B0);
    temp_v0 = this->actor.params;
    if ((s32) temp_v0 < 0x10) {
        if (temp_v0 == 0) {
            temp_v1->unk8 = 0xDB060020;
            temp_v1->unkC = D_801AEFA0;
        } else {
            temp_v1->unk8 = 0xDB060020;
            temp_v1->unkC = &D_80870870;
        }
        temp_t0->polyOpa.p = temp_v1 + 0x10;
        SkelAnime_Draw(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, func_808704DC, func_808705C8, &this->actor);
    } else {
        sp34 = temp_v1;
        sp30 = temp_t0;
        SysMatrix_InsertMatrix(&globalCtx->mf_187FC, 1);
        SysMatrix_InsertZRotation_s(this->actor.home.rot.z, 1);
        temp_v1->unk8 = 0xDA380003;
        sp30 = temp_t0;
        sp34 = temp_v1;
        temp_v1->unkC = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v1->unk14 = &D_06003250;
        temp_v1->unk10 = 0xDE000000;
        temp_t0->polyOpa.p = temp_v1 + 0x18;
    }
    func_800BE680(globalCtx, &this->actor, (Vec3f []) &this->unk270, 0xA, this->unk258 * this->actor.scale.y * 100.0f, this->unk25C, this->unk254, (u8) (s32) this->unk18C);
}

