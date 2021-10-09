typedef struct EnHintSkb {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderJntSph unk_144;             /* inferred */
    /* 0x164 */ ColliderJntSphElement unk_164;      /* inferred */
    /* 0x1A4 */ char pad_1A4[0x40];
    /* 0x1E4 */ SkelAnime unk_1E4;                  /* inferred */
    /* 0x228 */ void (*actionFunc)(EnHintSkb *, GlobalContext *);
    /* 0x22C */ Vec3f unk_22C;                      /* inferred */
    /* 0x238 */ char pad_238[0x9C];                 /* maybe part of unk_22C[14]? */
    /* 0x2D4 */ f32 unk_2D4;                        /* inferred */
    /* 0x2D8 */ f32 unk_2D8;                        /* inferred */
    /* 0x2DC */ s32 unk_2DC;                        /* inferred */
    /* 0x2E0 */ Vec3s unk_2E0;                      /* inferred */
    /* 0x2E6 */ char pad_2E6[0x72];                 /* maybe part of unk_2E0[20]? */
    /* 0x358 */ Vec3s unk_358;                      /* inferred */
    /* 0x35E */ char pad_35E[0x7E];                 /* maybe part of unk_358[22]? */
    /* 0x3DC */ s16 unk_3DC;                        /* inferred */
    /* 0x3DE */ s16 unk_3DE;                        /* inferred */
    /* 0x3E0 */ s16 unk_3E0;                        /* inferred */
    /* 0x3E2 */ s16 unk_3E2;                        /* inferred */
    /* 0x3E4 */ s16 unk_3E4;                        /* inferred */
    /* 0x3E6 */ u16 unk_3E6;                        /* inferred */
    /* 0x3E8 */ u8 unk_3E8;                         /* inferred */
    /* 0x3E9 */ u8 unk_3E9;                         /* inferred */
    /* 0x3EA */ char pad_3EA[0x2];                  /* maybe part of unk_3E9[3]? */
} EnHintSkb;                                        /* size = 0x3EC */

struct _mips2c_stack_EnHintSkb_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnHintSkb_Draw {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnHintSkb_Init {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ColliderJntSph *sp34;                /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnHintSkb_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C1FE0C {};              /* size 0x0 */

struct _mips2c_stack_func_80C1FE20 {};              /* size 0x0 */

struct _mips2c_stack_func_80C1FE30 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C1FE80 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C1FF30 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C1FF88 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C2003C {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C200B8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C2011C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C2016C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C20274 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C20334 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80C20484 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C204F0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C20540 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C20590 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C2066C {};              /* size 0x0 */

struct _mips2c_stack_func_80C2069C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C2075C {};              /* size 0x0 */

struct _mips2c_stack_func_80C2077C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C208BC {};              /* size 0x0 */

struct _mips2c_stack_func_80C208D0 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80C20A74 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C20B88 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C20C24 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C20D64 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C20E90 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C21250 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Collider *sp24;                      /* inferred */
    /* 0x28 */ CollisionCheckContext *sp28;         /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C21320 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C21414 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C21468 {
    /* 0x00 */ char pad_0[0x84];
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_80C215E4 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80C21858 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C219D4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

void func_80C1FE0C(EnHintSkb *arg0, PosRot *, s32); /* static */
void func_80C1FE30(EnHintSkb *arg0);                /* static */
void func_80C1FF30(EnHintSkb *arg0);                /* static */
void func_80C2003C(EnHintSkb *arg0);                /* static */
void func_80C2011C(Actor *arg0);                    /* static */
void func_80C20274(Actor *arg0);                    /* static */
void func_80C20484(EnHintSkb *arg0);                /* static */
void func_80C20540(Actor *arg0);                    /* static */
void func_80C2066C(EnHintSkb *arg0);                /* static */
void func_80C2075C(EnHintSkb *arg0, PosRot *);      /* static */
void func_80C208BC(EnHintSkb *arg0);                /* static */
void func_80C20A74(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C20B88(EnHintSkb *arg0, GlobalContext *arg1); /* static */
void func_80C20C24(EnHintSkb *arg0, GlobalContext *arg1); /* static */
void func_80C20D64(EnHintSkb *arg0, GlobalContext *arg1); /* static */
void func_80C20E90(EnHintSkb *arg0, GlobalContext *arg1, EnHintSkb *); /* static */
void func_80C21250(EnHintSkb *arg0, GlobalContext *arg1); /* static */
void func_80C21320(EnHintSkb *arg0, GlobalContext *arg1); /* static */
s32 func_80C21414(EnHintSkb *arg0, PosRot *, s32);  /* static */
void func_80C21468(EnHintSkb *arg0, GlobalContext *arg1, s32, u16); /* static */
void func_80C215E4(GlobalContext *arg0, EnHintSkb *arg1, PosRot *arg2); /* static */
s32 func_80C21858(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80C219D4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06002190;
extern ? D_06003584;
extern SkeletonHeader D_06005EF8;
extern AnimationHeader D_0600697C;
static ColliderJntSphElementInit D_80C21C80[2] = {
    {{0, {0xF7CFFFFF, 0, 4}, {0, 0, 0}, 1, 0, 0}, {0xF, {{0, 0, 0}, 0xA}, 0x64}},
    {{0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 5, 1}, {1, {{0, 0, 0}, 0x14}, 0x64}},
};
static ColliderJntSphInit D_80C21CC8 = {{6, 0x11, 9, 0x39, 0x10, 0}, 2, &D_80C21C80};
static CollisionCheckInfoInit2 D_80C21CD8 = {2, 0, 0, 0, 0xFF};
static DamageTable D_80C21CE4 = {
    {
        0x10,
        0xD1,
        0,
        0xF1,
        0xC3,
        0xC3,
        0xF2,
        0x11,
        0xF2,
        0xF1,
        0xF1,
        0x23,
        0x33,
        0x42,
        0xF1,
        0x10,
        0xD1,
        0xF2,
        0x10,
        0xB0,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        2,
        4,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static ActorAnimationEntry D_80C21D04[13] = {
    {(AnimationHeader *)0x60064E0, 0.96f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6003584, 1.0f, 0.0f, 0.0f, 2, -1.0f},
    {(AnimationHeader *)0x6002190, 0.6f, 0.0f, 0.0f, 3, 4.0f},
    {(AnimationHeader *)0x6002AC8, 1.0f, 0.0f, 0.0f, 2, -4.0f},
    {(AnimationHeader *)0x600270C, 1.0f, 0.0f, 0.0f, 2, -4.0f},
    {(AnimationHeader *)0x600697C, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6006D90, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6001D1C, 1.0f, 0.0f, 0.0f, 0, -4.0f},
    {(AnimationHeader *)0x6003584, 1.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x6003584, 1.0f, 0.0f, 0.0f, 2, -16.0f},
    {(AnimationHeader *)0x6002AC8, 1.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x60015EC, 1.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x60009E4, 1.0f, 0.0f, 0.0f, 0, -8.0f},
};
static InitChainEntry D_80C21E3C[2];                /* unable to generate initializer */
static Color_RGBA8 D_80C21E44 = {0xAA, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80C21E48 = {0xC8, 0xC8, 0xFF, 0xFF};
static Vec3f D_80C21E4C = {0.0f, -1.0f, 0.0f};
static ? D_80C21E58;                                /* unable to generate initializer */
static ? D_80C21E64;                                /* unable to generate initializer */
static Vec3f D_80C21E70 = {800.0f, 1200.0f, 0.0f};

void EnHintSkb_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderJntSph *sp34;
    ColliderJntSph *temp_a1;
    EnHintSkb *this = (EnHintSkb *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 36.0f);
    SkelAnime_Init(globalCtx, &this->unk_1E4, &D_06005EF8, &D_0600697C, &this->unk_2E0, &this->unk_358, 0x14);
    temp_a1 = &this->unk_144;
    sp34 = temp_a1;
    Collider_InitJntSph(globalCtx, temp_a1);
    Collider_SetJntSph(globalCtx, temp_a1, (Actor *) this, &D_80C21CC8, &this->unk_164);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80C21CE4, &D_80C21CD8);
    Actor_ProcessInitChain((Actor *) this, D_80C21E3C);
    this->actor.hintId = 0x55;
    this->unk_3E4 = 0;
    this->unk_3DE = 0;
    this->unk_3E0 = 0;
    this->unk_3DC = 0;
    this->unk_3E9 = 0;
    func_80C1FE0C(this);
}

void EnHintSkb_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnHintSkb *this = (EnHintSkb *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk_144);
}

void func_80C1FE0C(EnHintSkb *arg0) {
    arg0->actionFunc = func_80C1FE20;
}

void func_80C1FE20(EnHintSkb *this, GlobalContext *globalCtx) {

}

void func_80C1FE30(EnHintSkb *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x1E4;
    arg0 = arg0;
    func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80C21D04, 0);
    arg0->actionFunc = func_80C1FE80;
    arg0->actor.speedXZ = 1.6f;
}

void func_80C1FE80(EnHintSkb *this, GlobalContext *globalCtx) {
    SkelAnime *sp2C;
    SkelAnime *temp_a0;

    temp_a0 = &this->unk_1E4;
    sp2C = temp_a0;
    if ((func_801378B8(temp_a0, 8.0f) != 0) || (func_801378B8(temp_a0, 15.0f) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x3830U);
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x2EE, (s16) 0);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if ((Actor_IsActorFacingLink((Actor *) this, 0x11C7) != 0) && (this->actor.xzDistToPlayer < 60.0f)) {
        func_80C1FF30(this);
    }
}

void func_80C1FF30(EnHintSkb *arg0) {
    EnHintSkb *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk_144.base.atFlags &= 0xFFFB;
    temp_a3->actor.speedXZ = 0.0f;
    arg0 = temp_a3;
    func_800BDC5C(temp_a3 + 0x1E4, (ActorAnimationEntry []) D_80C21D04, 2);
    arg0->actionFunc = func_80C1FF88;
}

void func_80C1FF88(EnHintSkb *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    u8 temp_v0;

    temp_v0 = this->unk_144.base.atFlags;
    if ((temp_v0 & 4) != 0) {
        this->unk_144.base.atFlags = temp_v0 & 0xFFF9;
        func_80C2003C(this);
    }
    temp_a0 = &this->unk_1E4;
    sp24 = temp_a0;
    if (func_801378B8(temp_a0, 3.0f) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x3831U);
    }
    if (func_801378B8(sp24, this->unk_1E4.animFrameCount) != 0) {
        if ((func_80C21414(this) != 0) && (Player_GetMask(globalCtx) != 0xF)) {
            func_80C1FF30(this);
            return;
        }
        func_80C1FE30(this);
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_80C2003C(EnHintSkb *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x1E4, &D_06002190, -0.4f, arg0->unk_1E4.animCurrentFrame - 1.0f, 0.0f, (u8) 3, 0.0f);
    arg0->unk_144.base.atFlags &= 0xFFFB;
    arg0->actionFunc = func_80C200B8;
}

void func_80C200B8(EnHintSkb *this, GlobalContext *globalCtx) {
    EnHintSkb *temp_a0;
    EnHintSkb *temp_a2;
    f32 temp_a1;

    temp_a2 = this;
    temp_a1 = temp_a2->unk_1E4.animFrameCount;
    this = temp_a2;
    if (func_801378B8(&temp_a2->unk_1E4, temp_a1) != 0) {
        temp_a0 = this;
        this = this;
        if (func_80C21414(temp_a0) != 0) {
            func_80C1FF30(this);
            return;
        }
        func_80C1FE30(this);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80C2011C(Actor *arg0) {
    if ((arg0->bgCheckFlags & 1) != 0) {
        arg0->speedXZ = 0.0f;
    }
    Audio_PlayActorSound2(arg0, 0x389EU);
    arg0->unk_228 = func_80C2016C;
}

void func_80C2016C(EnHintSkb *this, GlobalContext *globalCtx) {
    PosRot *temp_a1;
    f32 temp_f0;
    u16 temp_v0;

    temp_v0 = this->actor.bgCheckFlags;
    if ((temp_v0 & 2) != 0) {
        this->actor.speedXZ = 0.0f;
    } else if ((temp_v0 & 1) != 0) {
        temp_f0 = this->actor.speedXZ;
        if (temp_f0 < 0.0f) {
            this->actor.speedXZ = temp_f0 + 0.05f;
        }
    }
    if ((this->actor.colorFilterTimer == 0) && ((this->actor.bgCheckFlags & 1) != 0)) {
        temp_a1 = &this->actor.world;
        if (this->actor.colChkInfo.health == 0) {
            Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) temp_a1, 0x28, 0x3833U);
            func_80C20484(this);
            return;
        }
        if (&D_0600697C == this->unk_1E4.animCurrentSeg) {
            func_80C1FE0C(this, temp_a1, 0x28);
            return;
        }
        if (func_80C21414(this, temp_a1, 0x28) != 0) {
            func_80C1FF30(this);
            return;
        }
        func_80C1FE30(this);
        /* Duplicate return node #14. Try simplifying control flow for better match */
    }
}

void func_80C20274(Actor *arg0) {
    if (&D_0600697C == arg0->unk_1EC) {
        arg0->world.rot.y = arg0->yawTowardsPlayer;
        func_800BDC5C(arg0 + 0x1E4, (ActorAnimationEntry []) D_80C21D04, 8);
        arg0->gravity = -1.0f;
        arg0->speedXZ = 1.0f;
    } else {
        arg0->world.rot.y = arg0->yawTowardsPlayer;
        func_800BDC5C(arg0 + 0x1E4, (ActorAnimationEntry []) D_80C21D04, 3);
        if ((arg0->bgCheckFlags & 1) != 0) {
            arg0->speedXZ = -4.0f;
        }
    }
    Audio_PlayActorSound2(arg0, 0x3832U);
    arg0->unk_228 = func_80C20334;
}

void func_80C20334(EnHintSkb *this, GlobalContext *globalCtx) {
    ActorShape *temp_s0_2;
    f32 temp_f0;
    s32 temp_s0;
    s32 phi_s0;

    phi_s0 = 0;
    if ((this->actor.bgCheckFlags & 2) != 0) {
        do {
            func_80C215E4(globalCtx, this, &this->actor.world);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != 0xA);
        this->actor.speedXZ = 0.0f;
    }
    if ((this->actor.bgCheckFlags & 1) != 0) {
        temp_f0 = this->actor.speedXZ;
        if (temp_f0 < 0.0f) {
            this->actor.speedXZ = temp_f0 + 0.05f;
        } else if (temp_f0 != 0.0f) {
            this->actor.speedXZ = temp_f0 - 0.05f;
        }
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x9C4, (s16) 0);
    }
    temp_s0_2 = &this->actor.shape;
    Math_SmoothStepToS((s16 *) temp_s0_2, 0, 0x10, 0x7D0, (s16) 0x64);
    if ((func_801378B8(&this->unk_1E4, this->unk_1E4.animFrameCount) != 0) && ((this->actor.bgCheckFlags & 1) != 0)) {
        this->unk_30 = (unaligned s32) temp_s0_2->unk_0;
        this->actor.world.rot.z = (s16) (u16) temp_s0_2->rot.z;
        func_80C1FE30(this);
    }
}

void func_80C20484(EnHintSkb *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x1E4;
    arg0 = arg0;
    func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80C21D04, 4);
    arg0->unk_3E8 |= 4;
    if ((arg0->actor.bgCheckFlags & 1) != 0) {
        arg0->actor.speedXZ = -6.0f;
    }
    arg0->actionFunc = func_80C204F0;
}

void func_80C204F0(EnHintSkb *this, GlobalContext *globalCtx) {
    if ((this->unk_3E8 & 8) != 0) {
        Item_DropCollectibleRandom(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, 0x10);
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_80C20540(Actor *arg0) {
    if ((arg0->bgCheckFlags & 1) != 0) {
        arg0->speedXZ = 0.0f;
    }
    Audio_PlayActorSound2(arg0, 0x389EU);
    arg0->unk_228 = func_80C20590;
}

void func_80C20590(EnHintSkb *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk_3E2;
    if (temp_v0 == 0) {
        this->unk_3E2 = 0;
        this->unk_2D8 = 0.0f;
        this->unk_2D4 = 0.0f;
        if (this->actor.colChkInfo.health != 0) {
            func_800BCB70((Actor *) this, 0x4000, 0xFF, 0, (s16) 8);
            func_800BDC5C(&this->unk_1E4, (ActorAnimationEntry []) D_80C21D04, 3);
            Audio_PlayActorSound2((Actor *) this, 0x3832U);
            this->unk_3E8 |= 1;
            func_80C20274((Actor *) this);
            return;
        }
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x28, 0x3833U);
        func_80C20484(this);
        return;
    }
    if (temp_v0 == 1) {
        func_80C21468(this, globalCtx);
    }
}

void func_80C2066C(EnHintSkb *arg0) {
    if ((arg0->actor.bgCheckFlags & 1) != 0) {
        arg0->actor.speedXZ = 0.0f;
    }
    arg0->actionFunc = func_80C2069C;
}

void func_80C2069C(EnHintSkb *this, GlobalContext *globalCtx) {
    if (this->unk_3E2 == 0) {
        this->unk_3E2 = 0;
        this->unk_2D8 = 0.0f;
        this->unk_2D4 = 0.0f;
        if (this->actor.colChkInfo.health != 0) {
            func_800BCB70((Actor *) this, 0x4000, 0xFF, 0, (s16) 8);
            func_800BDC5C(&this->unk_1E4, (ActorAnimationEntry []) D_80C21D04, 3);
            Audio_PlayActorSound2((Actor *) this, 0x3832U);
            this->unk_3E8 |= 1;
            func_80C20274((Actor *) this);
            return;
        }
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x28, 0x3833U);
        func_80C20484(this);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80C2075C(EnHintSkb *arg0) {
    arg0->unk_3E0 = 0;
    arg0->actionFunc = func_80C2077C;
    arg0->actor.speedXZ = 0.0f;
}

void func_80C2077C(EnHintSkb *this, GlobalContext *globalCtx) {
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->unk_3E0 = 1;
        if (this->unk_3DC == 0) {
            this->unk_3DC = 1;
            func_801518B0(globalCtx, 0x1147U, (Actor *) this);
            this->unk_3E6 = 0x1147;
            if (&D_0600697C == this->unk_1E4.animCurrentSeg) {
                globalCtx->msgCtx.unk11F22 = 0x44;
                this->actor.speedXZ = 2.4f;
                this->actor.gravity = -1.0f;
                this->actor.velocity.y = 3.0f;
                func_800BDC5C(&this->unk_1E4, (ActorAnimationEntry []) D_80C21D04, 8);
            }
        } else {
            func_800BDC5C(&this->unk_1E4, (ActorAnimationEntry []) D_80C21D04, 0xB);
            func_801518B0(globalCtx, 0x1148U, (Actor *) this);
            this->unk_3E6 = 0x1148;
        }
        func_80C208BC(this);
        return;
    }
    if ((this->actor.xzDistToPlayer < 100.0f) && ((this->unk_144.base.acFlags & 2) == 0)) {
        func_800B8614((Actor *) this, globalCtx, 100.0f);
    }
}

void func_80C208BC(EnHintSkb *arg0) {
    arg0->actionFunc = func_80C208D0;
}

void func_80C208D0(EnHintSkb *this, GlobalContext *globalCtx) {
    SkelAnime *temp_s0_2;
    s32 temp_s0;
    u32 temp_v0;
    s32 phi_s0;

    this->unk_3DE = 0;
    temp_v0 = func_80152498(&globalCtx->msgCtx);
    switch (temp_v0) {
    case 3:
        if ((globalCtx->gameplayFrames & 1) != 0) {
            this->unk_3DE = 1;
        }
        break;
    case 4:
        func_80C20B88(this, globalCtx);
        break;
    case 5:
        func_80C20C24(this, globalCtx);
        break;
    case 6:
        if (func_80147624(globalCtx) != 0) {
            func_80C2075C(this);
        }
        break;
    }
    if (this->unk_3E6 == 0x1147) {
        phi_s0 = 0;
        if ((this->actor.bgCheckFlags & 2) != 0) {
            this->actor.speedXZ = 0.0f;
            do {
                func_80C215E4(globalCtx, this, &this->actor.world);
                temp_s0 = phi_s0 + 1;
                phi_s0 = temp_s0;
            } while (temp_s0 != 0xA);
        }
        temp_s0_2 = &this->unk_1E4;
        if ((&D_06003584 == this->unk_1E4.animCurrentSeg) && (func_801378B8(temp_s0_2, this->unk_1E4.animFrameCount) != 0)) {
            func_801518B0(globalCtx, 0x1147U, (Actor *) this);
            this->unk_3E6 = 0x1147;
            func_800BDC5C(temp_s0_2, (ActorAnimationEntry []) D_80C21D04, 0);
        }
    }
    if ((this->actor.bgCheckFlags & 1) != 0) {
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 5, 0x71C, (s16) 0xB6);
        this->actor.shape.rot.y = this->actor.world.rot.y;
    }
}

void func_80C20A74(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    temp_v0 = arg0->params & 0xFF;
    switch (temp_v0) {
    case 1:
        func_801518B0(arg1, 0x1149U, arg0);
        arg0->unk_3E6 = 0x1149;
        return;
    case 2:
        func_801518B0(arg1, 0x114AU, arg0);
        arg0->unk_3E6 = 0x114A;
        return;
    case 3:
        func_801518B0(arg1, 0x114BU, arg0);
        arg0->unk_3E6 = 0x114B;
        return;
    case 4:
        func_801518B0(arg1, 0x114CU, arg0);
        arg0->unk_3E6 = 0x114C;
        return;
    case 5:
        func_801518B0(arg1, 0x114DU, arg0);
        arg0->unk_3E6 = 0x114D;
        return;
    case 6:
        func_801518B0(arg1, 0x114EU, arg0);
        arg0->unk_3E6 = 0x114E;
        return;
    default:
        func_801518B0(arg1, 0x1149U, arg0);
        arg0->unk_3E6 = 0x1149;
        return;
    }
}

void func_80C20B88(Actor *arg0, GlobalContext *arg1) {
    if (func_80147624(arg1) != 0) {
        if (arg1->msgCtx.choiceIndex == 0) {
            func_8019F208();
            arg0->unk_3E8 = (u8) (arg0->unk_3E8 | 0x10);
            func_801518B0(arg1, 0x1150U, arg0);
            arg0->unk_3E6 = 0x1150;
            return;
        }
        func_8019F230();
        func_801518B0(arg1, 0x1152U, arg0);
        arg0->unk_3E6 = 0x1152;
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80C20C24(Actor *arg0, GlobalContext *arg1) {
    PosRot *temp_a1;
    u16 temp_t6;

    if (func_80147624(arg1) != 0) {
        temp_t6 = arg0->unk_3E6;
        switch (temp_t6) {
        case 4423:
            func_801518B0(arg1, 0x1148U, arg0);
            arg0->unk_3E6 = 0x1148U;
            func_800BDC5C(arg0 + 0x1E4, (ActorAnimationEntry []) D_80C21D04, 0xB);
            return;
        case 4424:
            func_80C20A74(arg0, arg1);
            return;
        case 4425:
        case 4426:
        case 4427:
        case 4428:
        case 4429:
        case 4430:
            func_801518B0(arg1, 0x114FU, arg0);
            arg0->unk_3E6 = 0x114FU;
            return;
        case 4434:
            func_801518B0(arg1, 0x1151U, arg0);
            arg0->unk_3E6 = 0x1151U;
            return;
        case 4432:
            func_801518B0(arg1, 0x1151U, arg0);
            arg0->unk_3E6 = 0x1151U;
            return;
        case 4433:
            func_801477B4(arg1);
            temp_a1 = &arg0->world;
            if ((arg0->unk_3E8 & 0x10) != 0) {
                Audio_PlaySoundAtPosition(arg1, (Vec3f *) temp_a1, 0x28, 0x3833U);
                func_80C20484((EnHintSkb *) arg0);
                return;
            }
            func_80C2075C((EnHintSkb *) arg0, temp_a1);
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return;
        }
    } else {
    default:
    }
}

void func_80C20D64(EnHintSkb *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;
    s32 temp_t1;
    s32 temp_t8;
    s32 temp_v0;

    temp_v0 = arg0->actionFunc;
    if ((func_80C1FE20 == temp_v0) || (func_80C2077C == temp_v0) || (func_80C1FE80 == temp_v0)) {
        if (func_80C2077C != temp_v0) {
            arg0 = arg0;
            if (Player_GetMask(arg1) == 0xF) {
                temp_t1 = arg0->actor.flags & ~5;
                arg0->actor.flags = temp_t1;
                arg0->actor.flags = temp_t1 | 9;
                arg0->actor.hintId = 0xFF;
                arg0->actor.textId = 0;
                if (func_80C1FE80 == arg0->actionFunc) {
                    temp_a0 = arg0 + 0x1E4;
                    arg0 = arg0;
                    func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80C21D04, 0xC);
                }
                func_80C2075C(arg0);
                return;
            }
            /* Duplicate return node #12. Try simplifying control flow for better match */
            return;
        }
        arg0 = arg0;
        if (Player_GetMask(arg1) != 0xF) {
            temp_t8 = arg0->actor.flags & ~9;
            arg0->actor.flags = temp_t8;
            arg0->actor.flags = temp_t8 | 5;
            arg0->actor.hintId = 0x55;
            arg0->actor.textId = 0;
            if (&D_0600697C == arg0->unk_1E4.animCurrentSeg) {
                func_80C1FE0C(arg0);
                return;
            }
            func_80C1FE30(arg0);
            /* Duplicate return node #12. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
    }
}

void func_80C20E90(EnHintSkb *arg0, GlobalContext *arg1, s32 arg2, u16 arg3) {
    void *sp2C;
    s8 temp_v0_3;
    u8 temp_t4;
    u8 temp_t9;
    u8 temp_v0;
    u8 temp_v0_2;
    s32 phi_a2;
    u16 phi_a3;

    sp2C = arg1->actorCtx.actorList[2].first;
    phi_a2 = arg2;
    phi_a3 = arg3;
    if (((arg0->actor.bgCheckFlags & 0x60) != 0) && (phi_a2 = 0x28, phi_a3 = 0x3833U, (arg0->actor.yDistToWater >= 40.0f))) {
        arg0->actor.colChkInfo.health = 0;
        Audio_PlaySoundAtPosition(arg1, arg0 + 0x24, 0x28, 0x3833U);
        func_80C20484(arg0);
        return;
    }
    temp_v0 = arg0->unk_144.base.acFlags;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_144.base.acFlags = temp_v0 & 0xFFFD;
        if (func_80C20590 == arg0->actionFunc) {
            temp_t4 = arg0->actor.colChkInfo.damageEffect;
            switch (temp_t4) {                      /* switch 1 */
            default:                                /* switch 1 */
                if ((s32) arg0->unk_3E2 >= 2) {
                    func_80C21468(arg0, arg1, phi_a2, phi_a3);
                }
                arg0->unk_3E2 = 0;
                goto block_10;
            }
        } else {
block_10:
            if ((Actor_ApplyDamage((Actor *) arg0) == 0) && (temp_v0_2 = arg0->actor.colChkInfo.damageEffect, (temp_v0_2 != 3)) && (temp_v0_2 != 4)) {
                Audio_PlaySoundAtPosition(arg1, (Vec3f *) &arg0->actor.world, 0x28, 0x3833U);
                arg0->unk_3E8 |= 4;
                func_80C20484(arg0);
                return;
            }
            temp_t9 = arg0->actor.colChkInfo.damageEffect;
            switch (temp_t9) {                      /* switch 2 */
            case 11:                                /* switch 2 */
                arg0->unk_3E9 = 0x1E;
                arg0->unk_3E2 = 0x28;
                arg0->unk_2D4 = 1.0f;
                arg0->unk_2D8 = 0.0f;
                func_800BCB70((Actor *) arg0, 0, 0x78, 0, (s16) 0x28);
                func_80C2011C((Actor *) arg0);
                return;
            case 1:                                 /* switch 2 */
                func_800BCB70((Actor *) arg0, 0, 0x78, 0, (s16) 0x28);
                func_80C2011C((Actor *) arg0);
                return;
            case 2:                                 /* switch 2 */
                arg0->unk_3E2 = 0x50;
                arg0->unk_3E9 = 0;
                arg0->unk_2D4 = 1.0f;
                arg0->unk_2D8 = 0.0f;
                func_800BCB70((Actor *) arg0, 0x4000, 0xFF, 0, (s16) 8);
                Audio_PlayActorSound2((Actor *) arg0, 0x3832U);
                arg0->unk_3E8 |= 1;
                func_80C20274((Actor *) arg0);
                return;
            case 3:                                 /* switch 2 */
                if (arg0->actor.colChkInfo.health != 0) {
                    Audio_PlayActorSound2((Actor *) arg0, 0x3832U);
                    arg0->unk_3E2 = 0x50;
                } else {
                    arg0->unk_3E2 = 3;
                }
                arg0->unk_3E9 = 0xB;
                arg0->unk_2D4 = 1.0f;
                arg0->unk_2D8 = 0.5f;
                func_800BCB70((Actor *) arg0, 0x4000, 0xFF, 0, (s16) 8);
                func_80C20540((Actor *) arg0);
                return;
            case 4:                                 /* switch 2 */
                arg0->unk_3E2 = 0x28;
                arg0->unk_3E9 = 0x14;
                arg0->unk_2D4 = 1.0f;
                arg0->unk_2D8 = 0.5f;
                func_800BCB70((Actor *) arg0, 0x4000, 0xFF, 0, (s16) 8);
                Audio_PlayActorSound2((Actor *) arg0, 0x3832U);
                func_800BDC5C(&arg0->unk_1E4, (ActorAnimationEntry []) D_80C21D04, 3);
                func_80C2066C(arg0);
                return;
            case 12:                                /* switch 2 */
            case 14:                                /* switch 2 */
                arg0->unk_3E8 |= 1;
                /* fallthrough */
            case 15:                                /* switch 2 */
                temp_v0_3 = sp2C->unk_ADA;
                if ((temp_v0_3 == 4) || (temp_v0_3 == 0xB) || (temp_v0_3 == 0x16) || (temp_v0_3 == 0x17)) {
                    arg0->unk_3E8 |= 1;
                }
                /* fallthrough */
            case 13:                                /* switch 2 */
                func_800BCB70((Actor *) arg0, 0x4000, 0xFF, 0, (s16) 8);
                Audio_PlayActorSound2((Actor *) arg0, 0x3832U);
                func_800BDC5C(&arg0->unk_1E4, (ActorAnimationEntry []) D_80C21D04, 3);
                func_80C20274((Actor *) arg0);
                /* Duplicate return node #31. Try simplifying control flow for better match */
                return;
            }
        }
    } else {
    default:                                        /* switch 2 */
    case 1:                                         /* switch 1 */
    case 3:                                         /* switch 1 */
    case 4:                                         /* switch 1 */
    case 12:                                        /* switch 1 */
    case 13:                                        /* switch 1 */
    }
}

void func_80C21250(EnHintSkb *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp28;
    Collider *sp24;
    Collider *temp_a2_2;
    ColliderJntSph *temp_a2;
    CollisionCheckContext *temp_a1;
    EnHintSkb *temp_a0;
    EnHintSkb *temp_a3;
    void (*temp_v0)(EnHintSkb *, GlobalContext *);
    void (*phi_v0)(EnHintSkb *, GlobalContext *);

    temp_a3 = arg0;
    temp_a0 = temp_a3;
    if (temp_a3->unk_3E0 != 1) {
        arg0 = temp_a3;
        func_80C20E90(temp_a0, arg1, temp_a3);
        temp_v0 = arg0->actionFunc;
        phi_v0 = temp_v0;
        if (func_80C1FF88 == temp_v0) {
            temp_a2 = &arg0->unk_144;
            arg0 = arg0;
            CollisionCheck_SetAT(arg1, &arg1->colChkCtx, (Collider *) temp_a2);
            phi_v0 = arg0->actionFunc;
        }
        temp_a1 = &arg1->colChkCtx;
        temp_a2_2 = arg0 + 0x144;
        if ((func_80C200B8 != phi_v0) && (func_80C20334 != phi_v0) && (func_80C204F0 != phi_v0)) {
            sp28 = temp_a1;
            sp24 = temp_a2_2;
            CollisionCheck_SetAC(arg1, temp_a1, temp_a2_2);
        }
        CollisionCheck_SetOC(arg1, &arg1->colChkCtx, arg0 + 0x144);
    }
}

void func_80C21320(EnHintSkb *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk_3E2;
    if ((s32) temp_v0 > 0) {
        arg0->unk_3E2 = temp_v0 - 1;
    }
    temp_v0_2 = arg0->actionFunc;
    if (func_80C20590 != temp_v0_2) {
        if ((s32) arg0->unk_3E2 < 0x14) {
            if (func_80C2069C == temp_v0_2) {
                Math_SmoothStepToF(arg0 + 0x2D8, 0.0f, 0.5f, 0.03f, 0.0f);
            } else {
                Math_SmoothStepToF(arg0 + 0x2D8, 0.0f, 0.5f, 0.01f, 0.0f);
            }
            arg0->unk_2D4 = (f32) arg0->unk_3E2 * 0.05f;
            return;
        }
        Math_SmoothStepToF(arg0 + 0x2D8, 0.5f, 0.1f, 0.02f, 0.0f);
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

s32 func_80C21414(Actor *arg0) {
    if ((Actor_IsActorFacingLink(arg0, 0x11C7) != 0) && (arg0->xzDistToPlayer < 60.0f)) {
        return 1;
    }
    return 0;
}

void func_80C21468(EnHintSkb *arg0, GlobalContext *arg1) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    Vec3f *temp_s0;
    Vec3f *temp_s2;
    f32 *temp_s5;
    s16 temp_s1;
    s16 temp_v0;
    s32 phi_s4;
    Vec3f *phi_s0;

    temp_s2 = arg0 + 0x24;
    if ((arg0->unk_3E8 & 2) != 0) {
        phi_s4 = 0xD;
    } else {
        phi_s4 = 0xE;
    }
    Audio_PlaySoundAtPosition(arg1, temp_s2, 0x1E, 0x28CBU);
    phi_s0 = arg0 + 0x22C;
    if (phi_s4 > 0) {
        temp_s5 = &sp84;
        do {
            temp_v0 = Math_Vec3f_Yaw(temp_s2, phi_s0);
            temp_s1 = temp_v0;
            sp84 = Math_SinS(temp_v0) * 3.0f;
            sp8C = Math_CosS(temp_s1) * 3.0f;
            sp88 = (Rand_ZeroOne() * 4.0f) + 4.0f;
            EffectSsEnIce_Spawn(arg1, phi_s0, 0.6f, (Vec3f *) temp_s5, &D_80C21E4C, &D_80C21E44, &D_80C21E48, 0x1E);
            temp_s0 = phi_s0 + 0xC;
            phi_s0 = temp_s0;
        } while (temp_s0 != ((phi_s4 * 0xC) + arg0 + 0x22C));
    }
}

void func_80C215E4(GlobalContext *arg0, EnHintSkb *arg1, PosRot *arg2) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp54;
    ? sp50;
    f32 sp4C;
    f32 sp44;
    f32 sp40;
    f32 temp_f12;

    sp50.unk_0 = (s32) D_80C21E58.unk_0;
    sp50.unk_4 = (s32) D_80C21E58.unk_4;
    sp50.unk_8 = (s32) D_80C21E58.unk_8;
    sp44.unk_0 = D_80C21E64.unk_0;
    sp44.unk_4 = (s32) D_80C21E64.unk_4;
    sp44.unk_8 = (s32) D_80C21E64.unk_8;
    temp_f12 = (Rand_ZeroOne() - 0.5f) * 6.28f;
    sp40 = temp_f12;
    sp60 = arg1->actor.floorHeight;
    sp5C = (sin_rad(temp_f12) * 15.0f) + arg2->pos.x;
    sp64 = (cos_rad(temp_f12) * 15.0f) + arg2->pos.z;
    sp44 = randPlusMinusPoint5Scaled(1.0f);
    sp4C = randPlusMinusPoint5Scaled(1.0f);
    sp54 += (Rand_ZeroOne() - 0.5f) * 4.0f;
    EffectSsHahen_Spawn(arg0, (Vec3f *) &sp5C, (Vec3f *) &sp50, (Vec3f *) &sp44, (s16) 0, (s16) (s32) (((Rand_ZeroOne() * 5.0f) + 12.0f) * 0.8f), (s16) -1, (s16) 0xA, NULL);
    func_800BBFB0(arg0, (Vec3f *) &sp5C, 10.0f, 1, (s16) 0x96, (s16) 0, (u8) 1);
}

void EnHintSkb_Update(Actor *thisx, GlobalContext *globalCtx) {
    void (*temp_v0)(EnHintSkb *, GlobalContext *);
    EnHintSkb *this = (EnHintSkb *) thisx;

    this->actionFunc(this, globalCtx);
    temp_v0 = this->actionFunc;
    if ((func_80C2016C != temp_v0) && (func_80C20590 != temp_v0) && (func_80C2069C != temp_v0)) {
        SkelAnime_FrameUpdateMatrix(&this->unk_1E4);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 15.0f, 30.0f, 60.0f, 0x1DU);
    func_80C21250(this, globalCtx);
    func_80C20D64(this, globalCtx);
    func_80C21320(this, globalCtx);
}

s32 func_80C21858(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    void *sp1C;
    s32 temp_f10;
    s32 temp_v0;
    void *temp_a1;
    void *temp_v1;
    void *temp_v1_2;

    if (arg1 == 0xB) {
        temp_a1 = arg0->state.gfxCtx;
        arg1 = arg1;
        sp1C = temp_a1;
        temp_v1 = temp_a1->polyOpa.p;
        temp_f10 = (s32) (fabsf(Math_SinS((s16) (arg0->state.frames * 0x1770)) * 95.0f) + 160.0f);
        temp_a1->polyOpa.p = temp_v1 + 8;
        temp_v1->words.w1 = 0;
        temp_v1->words.w0 = 0xE7000000;
        temp_v1_2 = temp_a1->polyOpa.p;
        temp_v0 = (s16) temp_f10 & 0xFF;
        temp_a1->polyOpa.p = temp_v1_2 + 8;
        temp_v1_2->words.w1 = (temp_v0 << 0x18) | (temp_v0 << 0x10) | (temp_v0 << 8) | 0xFF;
        temp_v1_2->words.w0 = 0xFB000000;
    } else {
        if (arg1 == 0xA) {
            arg1 = arg1;
            SysMatrix_GetStateTranslation(arg5 + 0x3C);
            goto block_7;
        }
        if ((arg1 == 0xC) && (arg5->unk_3DE == 1)) {
            arg1 = arg1;
            SysMatrix_InsertZRotation_s(0x71C, 1);
block_7:
        }
    }
    if (((arg1 == 0xB) || (arg1 == 0xC)) && ((arg5->unk_3E8 & 2) != 0)) {
        *arg2 = NULL;
    }
    return 0;
}

void func_80C219D4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    u8 temp_v0;
    u8 temp_v0_2;

    if ((arg4->unk_3E8 & 8) == 0) {
        arg2 = arg2;
        Collider_UpdateSpheres(arg1, arg4 + 0x144);
        if ((arg1 == 0xB) && (temp_v0 = arg4->unk_3E8, ((temp_v0 & 1) != 0)) && ((temp_v0 & 2) == 0)) {
            func_800BBCEC(arg4, arg0, 1, arg2);
            arg4->unk_3E8 = (u8) (arg4->unk_3E8 | 2);
        } else {
            temp_v0_2 = arg4->unk_3E8;
            if (((temp_v0_2 & 4) != 0) && ((temp_v0_2 & 8) == 0) && ((arg1 != 0xB) || ((temp_v0_2 & 1) == 0)) && (arg1 != 0xC)) {
                func_800BBCEC(arg4, arg0, 1, arg2);
            }
        }
        if (arg4->unk_3E2 != 0) {
            if ((arg1 == 2) || (arg1 == 4) || (arg1 == 5) || (arg1 == 6) || (arg1 == 7) || (arg1 == 8) || (arg1 == 9) || (arg1 == 0xD) || (arg1 == 0xE) || (arg1 == 0xF) || (arg1 == 0x10) || (arg1 == 0x11) || (arg1 == 0x12)) {
                SysMatrix_GetStateTranslation(arg4 + (arg4->unk_2DC * 0xC) + 0x22C);
                arg4->unk_2DC = (s32) (arg4->unk_2DC + 1);
                return;
            }
            if ((arg1 == 0xB) && ((arg4->unk_3E8 & 2) == 0)) {
                SysMatrix_MultiplyVector3fByState(&D_80C21E70, arg4 + (arg4->unk_2DC * 0xC) + 0x22C);
                arg4->unk_2DC = (s32) (arg4->unk_2DC + 1);
            }
            /* Duplicate return node #29. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #29. Try simplifying control flow for better match */
    }
}

void EnHintSkb_Draw(Actor *thisx, GlobalContext *globalCtx) {
    u8 temp_v0;
    EnHintSkb *this = (EnHintSkb *) thisx;

    this->unk_2DC = 0;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_Draw(globalCtx, this->unk_1E4.skeleton, this->unk_1E4.limbDrawTbl, func_80C21858, func_80C219D4, (Actor *) this);
    if ((s32) this->unk_3E2 > 0) {
        func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk_22C, this->unk_2DE, this->unk_2D8, 0.5f, this->unk_2D4, (u8) (s32) this->unk_3E9);
    }
    temp_v0 = this->unk_3E8;
    if ((temp_v0 & 4) != 0) {
        this->unk_3E8 = temp_v0 | 8;
    }
}
