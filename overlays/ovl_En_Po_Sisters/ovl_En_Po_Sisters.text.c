typedef struct EnPoSisters {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ void (*actionFunc)(EnPoSisters *, GlobalContext *);
    /* 0x18C */ u8 unk_18C;                         /* inferred */
    /* 0x18D */ u8 unk_18D;                         /* inferred */
    /* 0x18E */ u8 unk_18E;                         /* inferred */
    /* 0x18F */ s8 unk_18F;                         /* inferred */
    /* 0x190 */ u8 unk_190;                         /* inferred */
    /* 0x191 */ u8 unk_191;                         /* inferred */
    /* 0x192 */ s16 unk_192;                        /* inferred */
    /* 0x194 */ s16 unk_194;                        /* inferred */
    /* 0x196 */ Vec3s unk_196;                      /* inferred */
    /* 0x19C */ char pad_19C[0x42];                 /* maybe part of unk_196[12]? */
    /* 0x1DE */ Vec3s unk_1DE;                      /* inferred */
    /* 0x1E4 */ char pad_1E4[0x42];                 /* maybe part of unk_1DE[12]? */
    /* 0x226 */ u8 unk_226;                         /* inferred */
    /* 0x227 */ u8 unk_227;                         /* inferred */
    /* 0x228 */ u8 unk_228;                         /* inferred */
    /* 0x229 */ u8 unk_229;                         /* inferred */
    /* 0x22A */ char pad_22A[0x2];                  /* maybe part of unk_229[3]? */
    /* 0x22C */ f32 unk_22C;                        /* inferred */
    /* 0x230 */ f32 unk_230;                        /* inferred */
    /* 0x234 */ f32 unk_234;                        /* inferred */
    /* 0x238 */ char pad_238[0x4];
    /* 0x23C */ f32 unk_23C;                        /* inferred */
    /* 0x240 */ char pad_240[0x4C];                 /* maybe part of unk_23C[20]? */
    /* 0x28C */ Vec3f unk_28C;                      /* inferred */
    /* 0x298 */ char pad_298[0x54];                 /* maybe part of unk_28C[8]? */
    /* 0x2EC */ f32 unk_2EC;                        /* inferred */
    /* 0x2F0 */ f32 unk_2F0;                        /* inferred */
    /* 0x2F4 */ f32 unk_2F4;                        /* inferred */
    /* 0x2F8 */ LightNode *unk_2F8;                 /* inferred */
    /* 0x2FC */ LightInfo unk_2FC;                  /* inferred */
    /* 0x30A */ char pad_30A[0x2];
    /* 0x30C */ ColliderCylinder unk_30C;           /* inferred */
    /* 0x358 */ MtxF unk_358;                       /* inferred */
} EnPoSisters;                                      /* size = 0x398 */

struct _mips2c_stack_EnPoSisters_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnPoSisters_Draw {
    /* 0x00 */ char pad_0[0x74];
    /* 0x74 */ Gfx *sp74;                           /* inferred */
    /* 0x78 */ void (*sp78)(EnPoSisters *, GlobalContext *); /* inferred */
    /* 0x7C */ char pad_7C[0x4];
    /* 0x80 */ void (*sp80)(EnPoSisters *, GlobalContext *); /* inferred */
    /* 0x84 */ char pad_84[0x60];                   /* maybe part of sp80[25]? */
    /* 0xE4 */ EnPoSisters *spE4;                   /* inferred */
};                                                  /* size = 0xE8 */

struct _mips2c_stack_EnPoSisters_Init {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ LightInfo *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnPoSisters_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ char pad_30[0xC];                    /* maybe part of sp2C[4]? */
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0xC];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80B1A648 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B1A768 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B1A894 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B1A9B0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B1AA88 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B1AAE8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B1AB5C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B1ABB8 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ SkelAnime *sp1C;                     /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B1AC40 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B1ACB8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 *sp24;                           /* inferred */
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B1AE28 {};              /* size 0x0 */

struct _mips2c_stack_func_80B1AE3C {
    /* 0x00 */ char pad_0[0x22];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B1AF8C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B1B020 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B1B0E0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B1B168 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B1B280 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B1B2F0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B1B3A8 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B1B444 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B1B5B4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B1B628 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B1B70C {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B1B7BC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B1B860 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B1B940 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B1BA3C {};              /* size 0x0 */

struct _mips2c_stack_func_80B1BA90 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B1BC4C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B1BCA0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B1BCF0 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ ActorContext *sp40;                  /* inferred */
    /* 0x44 */ Actor *sp44;                         /* inferred */
    /* 0x48 */ Actor *sp48;                         /* inferred */
    /* 0x4C */ Actor *sp4C;                         /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80B1BE4C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B1BF2C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Actor *sp1C;                         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B1C030 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B1C0A4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B1C2E8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B1C340 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B1C408 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B1C974 {};              /* size 0x0 */

struct _mips2c_stack_func_80B1CB44 {};              /* size 0x0 */

struct _mips2c_stack_func_80B1CD34 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ s8 *sp34;                            /* inferred */
    /* 0x38 */ void *sp38;                          /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ s32 *sp40;                           /* inferred */
    /* 0x44 */ char pad_44[0xC];
};                                                  /* size = 0x50 */

void func_80B1A648(void *arg0, s32 arg1, void *arg2); /* static */
void func_80B1A768(EnPoSisters *arg0, GlobalContext *arg1, EnPoSisters *); /* static */
void func_80B1A894(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B1A9B0(EnPoSisters *arg0, GlobalContext *); /* static */
void func_80B1AA88(EnPoSisters *arg0);              /* static */
void func_80B1AB5C(EnPoSisters *arg0);              /* static */
void func_80B1AC40(EnPoSisters *arg0, EnPoSisters *); /* static */
void func_80B1AE28(EnPoSisters *arg0);              /* static */
void func_80B1AF8C(EnPoSisters *arg0);              /* static */
void func_80B1B0E0(EnPoSisters *arg0);              /* static */
void func_80B1B280(EnPoSisters *arg0);              /* static */
void func_80B1B3A8(Actor *arg0);                    /* static */
void func_80B1B5B4(EnPoSisters *arg0);              /* static */
void func_80B1B70C(EnPoSisters *arg0);              /* static */
void func_80B1B860(EnPoSisters *arg0, GlobalContext *arg1, Actor *); /* static */
void func_80B1BA3C(EnPoSisters *arg0);              /* static */
void func_80B1BC4C(EnPoSisters *arg0, GlobalContext *arg1); /* static */
void func_80B1BCF0(EnPoSisters *arg0, GlobalContext *arg1); /* static */
void func_80B1BE4C(EnPoSisters *arg0, GlobalContext *arg1, EnPoSisters *); /* static */
void func_80B1C030(EnPoSisters *arg0);              /* static */
void func_80B1C2E8(EnPoSisters *arg0);              /* static */
void func_80B1C408(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B1C974(EnPoSisters *arg0);              /* static */
s32 func_80B1CB44(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, s16 *arg4, Actor *arg5, Gfx **arg6); /* static */
void func_80B1CD34(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, s32 **arg5); /* static */
extern AnimationHeader D_06000114;
extern AnimationHeader D_060008C0;
extern AnimationHeader D_06000A54;
extern AnimationHeader D_06000D40;
extern AnimationHeaderCommon D_0600119C;
extern AnimationHeader D_060014CC;
extern ? D_060027B0;
extern ? D_060046E0;
extern SkeletonHeader D_060065C8;
static ? D_80B1DA30;                                /* unable to generate initializer */
static ? D_80B1DA40;                                /* unable to generate initializer */
static ColliderCylinderInit D_80B1DA70 = {
    {3, 0x11, 9, 0x39, 0x10, 1},
    {0, {0xF7CFFFFF, 0, 8}, {0xF7CBFFFE, 0, 0}, 1, 5, 1},
    {0x12, 0x3C, 0xF, {0, 0, 0}},
};
static CollisionCheckInfoInit D_80B1DA9C = {6, 0x19, 0x3C, 0x32};
static DamageTable D_80B1DAA4 = {
    {
        0xF0,
        1,
        1,
        1,
        1,
        1,
        0,
        1,
        1,
        1,
        0,
        1,
        1,
        0x42,
        1,
        1,
        1,
        2,
        0x10,
        0,
        0,
        0,
        1,
        1,
        0xE1,
        0,
        0,
        0,
        0,
        0,
        0,
        1,
    },
};
static InitChainEntry D_80B1DAC4[2];                /* unable to generate initializer */
static ? D_80B1DACC;                                /* unable to generate initializer */
static ? D_80B1DADC;                                /* unable to generate initializer */
static ? D_80B1DAEC;                                /* unable to generate initializer */
static Vec3f D_80B1DAFC = {1000.0f, -1700.0f, 0.0f};
static ? D_80B1DB08;                                /* unable to generate initializer */
static ? D_80B1DB10;                                /* unable to generate initializer */
static ? D_80B1DB11;                                /* unable to generate initializer */
static ? D_80B1DB12;                                /* unable to generate initializer */
static ? D_80B1DB13;                                /* unable to generate initializer */

void EnPoSisters_Init(Actor *thisx, GlobalContext *globalCtx) {
    LightInfo *sp34;
    LightInfo *temp_a2;
    u8 temp_t6;
    EnPoSisters *this = (EnPoSisters *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80B1DAC4);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 50.0f);
    SkelAnime_Init(globalCtx, &this->unk_144, &D_060065C8, &D_060014CC, &this->unk_196, &this->unk_1DE, 0xC);
    this->unk_226 = 0xFF;
    this->unk_227 = 0xFF;
    this->unk_228 = 0xD2;
    this->unk_229 = 0xFF;
    temp_a2 = &this->unk_2FC;
    sp34 = temp_a2;
    this->unk_2F8 = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, temp_a2);
    Lights_PointGlowSetInfo(sp34, (s16) (s32) this->actor.home.pos.x, (s16) (s32) this->actor.home.pos.y, (s16) (s32) this->actor.home.pos.z, (u8) 0, (u8) 0, (u8) 0, (s16) 0);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_30C, (Actor *) this, &D_80B1DA70);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_80B1DAA4, &D_80B1DA9C);
    temp_t6 = ((s32) this->actor.params >> 8) & 3;
    this->unk_18C = temp_t6;
    this->actor.hintId = temp_t6 + 0x50;
    this->unk_18D = ((s32) this->actor.params >> 0xA) & 3;
    this->unk_18E = 0x20;
    this->unk_18F = 0x14;
    this->unk_190 = 1;
    this->unk_191 = 0x20;
    this->actor.flags &= -2;
    this->unk_2EC = 110.0f;
    if ((this->actor.params & 0x1000) != 0) {
        func_80B1AA88(this);
    } else if (this->unk_18C == 0) {
        if (this->unk_18D == 0) {
            this->actor.colChkInfo.health = 8;
            this->unk_30C.info.toucher.damage = 0x10;
            this->unk_30C.base.ocFlags1 = 9;
            func_80B1BCF0(this, globalCtx);
            func_80B1C2E8(this);
        } else {
            this->unk_30C.info.elemType = 4;
            this->actor.flags &= -0x4201;
            this->unk_30C.info.bumper.dmgFlags |= 0x40001;
            this->unk_30C.base.ocFlags1 = 0;
            func_80B1BE4C(this, NULL);
        }
    } else {
        func_80B1C2E8(this);
    }
    this->actor.params &= 0xFF;
}

void EnPoSisters_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    GlobalContext *temp_a0;
    LightContext *temp_a1;
    EnPoSisters *this = (EnPoSisters *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->lightCtx;
    globalCtx = globalCtx;
    LightContext_RemoveLight(temp_a0, temp_a1, this->unk_2F8);
    Collider_DestroyCylinder(globalCtx, &this->unk_30C);
}

void func_80B1A648(void *arg0, s32 arg1, void *arg2) {
    f32 temp_f20;
    f32 temp_f22;
    s32 temp_s3;
    s32 phi_s2;
    void *phi_s1;
    s32 phi_s3;

    phi_s3 = 0;
    if ((s32) arg0->unk_190 > 0) {
        temp_f22 = (f32) arg1;
        temp_f20 = temp_f22 * temp_f22 * 0.1f;
        phi_s2 = 0;
        phi_s1 = arg0 + 0x22C;
        do {
            phi_s1->unk_0 = (f32) ((Math_SinS((s16) (arg0->unk_BE + (arg0->unk_192 << 0xB) + phi_s2)) * temp_f20) + arg2->unk_0);
            temp_s3 = phi_s3 + 1;
            phi_s1->unk_8 = (f32) ((Math_CosS((s16) (arg0->unk_BE + (arg0->unk_192 << 0xB) + phi_s2)) * temp_f20) + arg2->unk_8);
            phi_s1->unk_4 = (f32) (arg2->unk_4 + temp_f22);
            phi_s2 += 0x2000;
            phi_s1 += 0xC;
            phi_s3 = temp_s3;
        } while (temp_s3 < (s32) arg0->unk_190);
    }
}

void func_80B1A768(EnPoSisters *arg0, GlobalContext *arg1) {
    f32 sp20;
    u8 temp_v0;
    void *temp_s1;

    temp_v0 = arg0->unk_18D;
    temp_s1 = arg1->actorCtx.actorList[2].first;
    if ((temp_v0 == 0) || (func_80B1B444 != arg0->actionFunc)) {
        if (((temp_s1[8].colChkInfo.acHitEffect == 0) || ((s32) temp_s1[8].colChkInfo.atHitEffect >= 0x1E)) && ((temp_s1->world.pos.y - temp_s1->floorHeight) < 1.0f)) {
            Math_StepToF(arg0 + 0x2EC, 110.0f, 3.0f);
        } else {
            Math_StepToF(arg0 + 0x2EC, 170.0f, 10.0f);
        }
        sp20 = arg0->unk_2EC;
    } else if (temp_v0 != 0) {
        sp20 = arg0->actor.parent->unk_98;
    }
    arg0->actor.world.pos.x = (Math_SinS((s16) (arg0->actor.shape.rot.y + 0x8000)) * sp20) + temp_s1->world.pos.x;
    arg0->actor.world.pos.z = (Math_CosS((s16) (arg0->actor.shape.rot.y + 0x8000)) * sp20) + temp_s1->world.pos.z;
}

void func_80B1A894(Actor *arg0, GlobalContext *arg1) {
    f32 sp24;
    s32 temp_v0_2;
    u8 temp_t8;
    u8 temp_v0;
    u8 phi_v0;
    u8 phi_v1;

    Math_ApproachF(arg0 + 0x28, arg1->actorCtx.actorList[2].first->unk_28 + 5.0f, 0.5f, 3.0f);
    temp_v0 = arg0->unk_18E;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        arg0->unk_18E = 0x20U;
        phi_v0 = 0x20U & 0xFF;
    }
    phi_v1 = phi_v0;
    if (phi_v0 != 0) {
        temp_t8 = phi_v0 - 1;
        arg0->unk_18E = temp_t8;
        phi_v1 = temp_t8 & 0xFF;
    }
    sp24 = Math_SinS((s16) ((s32) (phi_v1 << 0x1B) >> 0x10));
    arg0->world.pos.y += (2.0f + (0.5f * Rand_ZeroOne())) * sp24;
    if ((arg0->unk_229 == 0xFF) && (temp_v0_2 = arg0[1].focus.pos.z, (func_80B1B168 != temp_v0_2)) && (func_80B1B020 != temp_v0_2)) {
        if (func_80B1B628 == temp_v0_2) {
            func_800B9010(arg0, 0x3072U);
            return;
        }
        func_800B9010(arg0, 0x3071U);
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}

void func_80B1A9B0(EnPoSisters *arg0) {
    s16 temp_v0;
    s32 temp_v0_2;
    u8 temp_v1;

    if ((arg0->actor.isTargeted != 0) && (arg0->unk_229 == 0xFF)) {
        temp_v1 = arg0->unk_18F;
        if (temp_v1 != 0) {
            arg0->unk_18F = temp_v1 - 1;
            goto block_5;
        }
    } else {
        arg0->unk_18F = 0x14;
block_5:
    }
    if (arg0->unk_229 == 0) {
        temp_v0 = arg0->unk_194;
        if (temp_v0 != 0) {
            arg0->unk_194 = temp_v0 - 1;
        }
    }
    temp_v0_2 = arg0->actionFunc;
    if ((func_80B1B020 != temp_v0_2) && (func_80B1B168 != temp_v0_2) && (func_80B1B444 != temp_v0_2)) {
        if (arg0->unk_18F == 0) {
            func_80B1B70C();
            return;
        }
        if ((arg0->unk_194 == 0) && (arg0->unk_229 == 0)) {
            func_80B1B860();
        }
        /* Duplicate return node #17. Try simplifying control flow for better match */
    }
}

void func_80B1AA88(EnPoSisters *arg0) {
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x144, &D_060014CC, -3.0f);
    arg0->actor.speedXZ = 0.0f;
    arg0->unk_192 = Rand_S16Offset(0x64, 0x32);
    arg0->actionFunc = func_80B1AAE8;
}

void func_80B1AAE8(EnPoSisters *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;
    s16 temp_v1;
    s16 phi_v0;

    temp_a0 = &this->unk_144;
    this = this;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v1 = this->unk_192;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        this->unk_192 = temp_v1 - 1;
        phi_v0 = this->unk_192;
    }
    if (phi_v0 == 0) {
        this = this;
        this->unk_192 = Rand_S16Offset(0x64, 0x32);
        Audio_PlayActorSound2((Actor *) this, 0x38EFU);
    }
}

void func_80B1AB5C(EnPoSisters *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_060014CC, -3.0f);
    arg0->unk_192 = Rand_S16Offset(2, 3);
    arg0->actionFunc = func_80B1ABB8;
    arg0->actor.speedXZ = 0.0f;
}

void func_80B1ABB8(EnPoSisters *this, GlobalContext *globalCtx) {
    SkelAnime *sp1C;
    SkelAnime *temp_a0;
    s16 temp_v0;

    temp_a0 = &this->unk_144;
    sp1C = temp_a0;
    this = this;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801378B8(temp_a0, 0.0f) != 0) {
        temp_v0 = this->unk_192;
        if (temp_v0 != 0) {
            this->unk_192 = temp_v0 - 1;
        }
    }
    if ((this->unk_192 == 0) || (this->actor.xzDistToPlayer < 600.0f)) {
        func_80B1AC40(this);
    }
}

void func_80B1AC40(EnPoSisters *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    if (func_80B1AE3C != arg0->actionFunc) {
        arg0 = arg0;
        SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06000D40, -3.0f);
    }
    arg0 = arg0;
    arg0->unk_192 = Rand_S16Offset(0xF, 3);
    arg0->actionFunc = func_80B1ACB8;
    arg0->unk_191 |= 7;
}

void func_80B1ACB8(EnPoSisters *this, GlobalContext *globalCtx) {
    SkelAnime *sp28;
    f32 *sp24;
    PosRot *temp_a1;
    SkelAnime *temp_a0;
    f32 *temp_a0_2;
    s16 temp_v0;

    temp_a0 = &this->unk_144;
    sp28 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_a0_2 = &this->actor.speedXZ;
    sp24 = temp_a0_2;
    Math_StepToF(temp_a0_2, 1.0f, 0.2f);
    if (func_801378B8(temp_a0, 0.0f) != 0) {
        temp_v0 = this->unk_192;
        if (temp_v0 != 0) {
            this->unk_192 = temp_v0 - 1;
        }
    }
    if ((this->actor.xzDistToPlayer < 600.0f) && (fabsf(this->actor.yDistToPlayer + 5.0f) < 30.0f)) {
        func_80B1AE28(this);
    } else if ((this->unk_192 == 0) && (Math_StepToF(sp24, 0.0f, 0.2f) != 0)) {
        func_80B1AB5C(this);
    }
    temp_a1 = &this->actor.home;
    if ((this->actor.bgCheckFlags & 8) != 0) {
        Math_ScaledStepToS(&this->actor.world.rot.y, Actor_YawToPoint((Actor *) this, (Vec3f *) &this->actor.home), 0x71C);
        return;
    }
    sp28 = (SkelAnime *) temp_a1;
    if (Actor_XZDistanceToPoint((Actor *) this, (Vec3f *) temp_a1) > 600.0f) {
        Math_ScaledStepToS(&this->actor.world.rot.y, Actor_YawToPoint((Actor *) this, (Vec3f *) temp_a1), 0x71C);
    }
}

void func_80B1AE28(EnPoSisters *arg0) {
    arg0->actionFunc = func_80B1AE3C;
}

void func_80B1AE3C(EnPoSisters *this, GlobalContext *globalCtx) {
    Actor *sp24;
    s16 sp22;
    f32 temp_f2;
    s16 temp_v0;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    temp_v0 = this->actor.yawTowardsPlayer - sp24->shape.rot.y;
    sp22 = temp_v0;
    Math_StepToF(&this->actor.speedXZ, 2.0f, 0.2f);
    if ((s32) temp_v0 >= 0x3001) {
        Math_ScaledStepToS(&this->actor.world.rot.y, (s16) (this->actor.yawTowardsPlayer + 0x3000), 0x71C);
    } else if ((s32) temp_v0 < -0x3000) {
        Math_ScaledStepToS(&this->actor.world.rot.y, (s16) (this->actor.yawTowardsPlayer - 0x3000), 0x71C);
    } else {
        Math_ScaledStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 0x71C);
    }
    temp_f2 = this->actor.xzDistToPlayer;
    if ((temp_f2 < 320.0f) && (fabsf(this->actor.yDistToPlayer + 5.0f) < 30.0f)) {
        func_80B1AF8C(this);
        return;
    }
    if (temp_f2 > 720.0f) {
        func_80B1AC40(this);
    }
}

void func_80B1AF8C(EnPoSisters *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    if (arg0->unk_229 != 0) {
        arg0->unk_30C.base.colType = 9;
        arg0->unk_30C.base.acFlags |= 4;
    }
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06000114, -5.0f);
    arg0->actor.speedXZ = 0.0f;
    arg0->unk_192 = (SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06000114) * 3) + 3;
    arg0->unk_191 &= 0xFFFD;
    arg0->actionFunc = func_80B1B020;
}

void func_80B1B020(EnPoSisters *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;
    s16 temp_v0;

    temp_a0 = &this->unk_144;
    this = this;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v0 = this->unk_192;
    if (temp_v0 != 0) {
        this->unk_192 = temp_v0 - 1;
    }
    this->actor.shape.rot.y += ((s32) ((this->unk_144.animFrameCount + 1.0f) * 3.0f) - this->unk_192) * 0x180;
    if ((this->unk_192 == 0x12) || (this->unk_192 == 7)) {
        Audio_PlayActorSound2((Actor *) this, 0x38EEU);
        return;
    }
    if (this->unk_192 == 0) {
        func_80B1B0E0(this);
    }
}

void func_80B1B0E0(EnPoSisters *arg0) {
    EnPoSisters *temp_a3;
    EnPoSisters *phi_a3;

    temp_a3 = arg0;
    temp_a3->actor.speedXZ = 5.0f;
    phi_a3 = temp_a3;
    if (temp_a3->unk_18C == 0) {
        temp_a3->unk_30C.base.colType = 9;
        temp_a3->unk_30C.base.acFlags |= 4;
        arg0 = temp_a3;
        SkelAnime_ChangeAnimTransitionRepeat(temp_a3 + 0x144, &D_06000114, -5.0f);
        phi_a3 = arg0;
    }
    phi_a3->unk_192 = 5;
    phi_a3->unk_191 |= 8;
    phi_a3->actionFunc = func_80B1B168;
    phi_a3->actor.world.rot.y = phi_a3->actor.yawTowardsPlayer;
}

void func_80B1B168(EnPoSisters *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 phi_v1;

    temp_a0 = &this->unk_144;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801378B8(temp_a0, 0.0f) != 0) {
        temp_v0 = this->unk_192;
        if (temp_v0 != 0) {
            this->unk_192 = temp_v0 - 1;
        }
    }
    this->actor.shape.rot.y += (s32) (1152.0f * this->unk_144.animFrameCount);
    if (this->unk_192 == 0) {
        temp_v0_2 = this->actor.shape.rot.y - this->actor.world.rot.y;
        phi_v1 = (s32) temp_v0_2;
        if ((s32) temp_v0_2 < 0) {
            phi_v1 = -(s32) temp_v0_2;
        }
        if (phi_v1 < 0x1000) {
            if (this->unk_18C != 0) {
                this->unk_30C.base.colType = 3;
                this->unk_30C.base.acFlags &= 0xFFFB;
                func_80B1AC40(this);
            } else {
                Audio_PlayActorSound2((Actor *) this, 0x38EFU);
                func_80B1BE4C(this, globalCtx);
            }
        }
    }
    if (func_801378B8(sp24, 1.0f) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x38EEU);
    }
}

void func_80B1B280(EnPoSisters *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06000D40, -3.0f);
    arg0->actor.world.rot.y = arg0->actor.yawTowardsPlayer + 0x8000;
    if (arg0->unk_18C != 0) {
        arg0->unk_30C.base.colType = 3;
        arg0->unk_30C.base.acFlags &= 0xFFFB;
    }
    arg0->actionFunc = func_80B1B2F0;
}

void func_80B1B2F0(EnPoSisters *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    this->actor.shape.rot.y -= (s32) (this->actor.speedXZ * 10.0f * 128.0f);
    if (Math_StepToF(&this->actor.speedXZ, 0.0f, 0.1f) != 0) {
        this->actor.world.rot.y = this->actor.shape.rot.y;
        if (this->unk_18C != 0) {
            func_80B1AC40(this);
            return;
        }
        Audio_PlayActorSound2((Actor *) this, 0x38EFU);
        func_80B1BE4C(this, globalCtx);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80B1B3A8(Actor *arg0) {
    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_060008C0, -3.0f);
    if (arg0[2].yDistToWater != 0) {
        func_800BE504(arg0, arg0 + 0x30C);
    }
    if (arg0->unk_18C != 0) {
        arg0->speedXZ = 10.0f;
    }
    arg0->unk_191 = (u8) (arg0->unk_191 & 0xFFF4);
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x10);
    arg0[1].focus.pos.z = (bitwise f32) func_80B1B444;
}

void func_80B1B444(EnPoSisters *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    s32 temp_f18;
    u8 temp_v0;
    s16 phi_v0;
    u8 phi_v0_2;

    if ((SkelAnime_FrameUpdateMatrix(&this->unk_144) != 0) && ((this->actor.flags & 0x8000) == 0)) {
        if (this->actor.colChkInfo.health != 0) {
            if (this->unk_18C != 0) {
                func_80B1B5B4(this);
            } else if (this->unk_18D != 0) {
                func_80B1BE4C(this, NULL);
            } else {
                func_80B1BE4C(this, globalCtx);
            }
        } else {
            func_80B1BA3C(this);
        }
    }
    temp_v0 = this->unk_18D;
    if (temp_v0 != 0) {
        if (temp_v0 == 2) {
            phi_v0 = 0x800;
        } else {
            phi_v0 = 0x400;
        }
        Math_ScaledStepToS(&this->actor.shape.rot.y, this->actor.parent->shape.rot.y, phi_v0);
        temp_f0 = this->unk_144.animFrameCount;
        temp_f18 = (s32) (((temp_f0 - this->unk_144.animCurrentFrame) * 255.0f) / temp_f0);
        if (temp_f18 < 0) {
            this->unk_229 = 0;
        } else {
            phi_v0_2 = (u8) temp_f18;
            if (temp_f18 >= 0x100) {
                phi_v0_2 = 0xFFU;
            }
            this->unk_229 = phi_v0_2;
        }
        this->actor.world.pos.y = this->actor.parent->world.pos.y;
        func_80B1A768(this, globalCtx);
        return;
    }
    if (this->unk_18C != 0) {
        Math_StepToF(&this->actor.speedXZ, 0.0f, 0.5f);
    }
}

void func_80B1B5B4(EnPoSisters *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06000A54, -3.0f);
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y + 0x8000;
    arg0->unk_192 = 5;
    arg0->unk_191 |= 0xB;
    arg0->actionFunc = func_80B1B628;
    arg0->actor.speedXZ = 5.0f;
}

void func_80B1B628(EnPoSisters *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s16 temp_v0;

    temp_a0 = &this->unk_144;
    sp24 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    Math_ScaledStepToS(&this->actor.world.rot.y, (s16) (this->actor.yawTowardsPlayer + 0x8000), 0x71C);
    if (func_801378B8(temp_a0, 0.0f) != 0) {
        temp_v0 = this->unk_192;
        if (temp_v0 != 0) {
            this->unk_192 = temp_v0 - 1;
        }
    }
    if ((this->actor.bgCheckFlags & 8) != 0) {
        this->unk_191 |= 2;
        this->actor.world.rot.y = this->actor.shape.rot.y;
        func_80B1B70C(this);
        return;
    }
    if ((this->unk_192 == 0) && (this->actor.xzDistToPlayer > 480.0f)) {
        this->actor.world.rot.y = this->actor.shape.rot.y;
        func_80B1AC40(this);
    }
}

void func_80B1B70C(Actor *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_0600119C, 1.5f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_0600119C), (u8) 2, -3.0f);
    arg0[1].sfx = 0x64;
    arg0->unk_191 = (u8) (arg0->unk_191 & 0xFFFA);
    arg0->speedXZ = 0.0f;
    arg0->world.rot.y = arg0->shape.rot.y;
    Audio_PlayActorSound2(arg0, 0x3874U);
    Audio_PlayActorSound2(arg0, 0x38EFU);
    arg0[1].focus.pos.z = (bitwise f32) func_80B1B7BC;
}

void func_80B1B7BC(EnPoSisters *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;
    f32 temp_f0;
    s32 temp_f18;
    u8 phi_v1;

    temp_a0 = &this->unk_144;
    this = this;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        this->unk_229 = 0;
        this->unk_30C.info.bumper.dmgFlags = 0x40001;
        func_80B1AC40(this, this);
        return;
    }
    temp_f0 = this->unk_144.animFrameCount;
    temp_f18 = (s32) (((temp_f0 - this->unk_144.animCurrentFrame) * 255.0f) / temp_f0);
    if (temp_f18 < 0) {
        this->unk_229 = 0;
        return;
    }
    phi_v1 = (u8) temp_f18;
    if (temp_f18 >= 0x100) {
        phi_v1 = 0xFFU;
    }
    this->unk_229 = phi_v1;
}

void func_80B1B860(EnPoSisters *arg0, GlobalContext *arg1) {
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_0600119C, 1.5f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_0600119C), (u8) 2, -3.0f);
    if (arg0->unk_18C == 0) {
        arg0->unk_2EC = 110.0f;
        func_80B1A768(arg0, arg1);
        arg0->unk_229 = 0;
        arg0->actor.draw = EnPoSisters_Draw;
    } else {
        arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
    }
    arg0->unk_192 = 0xF;
    arg0->actor.speedXZ = 0.0f;
    Audio_PlayActorSound2((Actor *) arg0, 0x3873U);
    arg0->unk_191 &= 0xFFFE;
    arg0->actionFunc = func_80B1B940;
}

void func_80B1B940(EnPoSisters *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;
    s16 temp_v0;
    s32 temp_f18;
    u8 phi_v1;

    temp_a0 = &this->unk_144;
    this = this;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        this->unk_229 = 0xFF;
        if (this->unk_18C != 0) {
            temp_v0 = this->unk_192;
            this->unk_191 |= 1;
            this->unk_30C.info.bumper.dmgFlags = 0xF7CBFFFE;
            if (temp_v0 != 0) {
                this->unk_192 = temp_v0 - 1;
            }
            if (this->unk_192 == 0) {
                this->unk_18F = 0x14;
                func_80B1AC40(this);
                return;
            }
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return;
        }
        func_80B1C030(this);
        return;
    }
    temp_f18 = (s32) ((this->unk_144.animCurrentFrame * 255.0f) / this->unk_144.animFrameCount);
    if (temp_f18 < 0) {
        this->unk_229 = 0;
    } else {
        phi_v1 = (u8) temp_f18;
        if (temp_f18 >= 0x100) {
            phi_v1 = 0xFFU;
        }
        this->unk_229 = phi_v1;
    }
    if (this->unk_18C == 0) {
        func_80B1A768(this, globalCtx, this);
    }
}

void func_80B1BA3C(EnPoSisters *arg0) {
    arg0->unk_192 = 0;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.world.pos.y += 42.0f;
    arg0->actor.flags &= -2;
    arg0->unk_191 = 0;
    arg0->actionFunc = func_80B1BA90;
    arg0->actor.shape.yOffset = -6000.0f;
}

void func_80B1BA90(EnPoSisters *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    s16 temp_v0_4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    void *temp_a0;
    void *temp_a1;
    void *temp_v1;
    void *phi_a0;
    void *phi_v1;
    s32 phi_v0;

    temp_v0 = this->unk_190 + 1;
    this->unk_192 += 1;
    if (temp_v0 >= 9) {
        this->unk_190 = 8;
    } else {
        this->unk_190 = (u8) temp_v0;
    }
    temp_v0_2 = this->unk_190 - 1;
    phi_v0 = temp_v0_2;
    if (temp_v0_2 > 0) {
        temp_a1 = this + (temp_v0_2 * 0xC);
        phi_a0 = temp_a1 + 0x220;
        phi_v1 = temp_a1 + 0x22C;
        do {
            temp_v0_3 = phi_v0 - 1;
            temp_v1 = phi_v1 - 0xC;
            temp_v1->unk_C = (s32) phi_a0->unk_0;
            temp_a0 = phi_a0 - 0xC;
            temp_v1->unk_10 = (s32) phi_a0->unk_4;
            temp_v1->unk_14 = (s32) temp_a0->unk_14;
            phi_a0 = temp_a0;
            phi_v1 = temp_v1;
            phi_v0 = temp_v0_3;
        } while (temp_v0_3 > 0);
    }
    this->unk_22C = (Math_SinS((s16) ((this->actor.shape.rot.y + (this->unk_192 * 0x3000)) - 0x4000)) * (3000.0f * this->actor.scale.x)) + this->actor.world.pos.x;
    temp_v0_4 = this->unk_192;
    this->unk_234 = (Math_CosS((s16) ((this->actor.shape.rot.y + (this->unk_192 * 0x3000)) - 0x4000)) * (3000.0f * this->actor.scale.x)) + this->actor.world.pos.z;
    if ((s32) temp_v0_4 < 8) {
        this->unk_230 = this->unk_23C - 9.0f;
    } else {
        this->unk_230 = this->unk_23C + 2.0f;
        if ((s32) temp_v0_4 >= 0x10) {
            if (Math_StepToF((f32 *) &this->actor.scale, 0.0f, 0.001f) != 0) {
                func_80B1BC4C(this, globalCtx);
            }
            temp_f0 = this->actor.scale.x;
            this->actor.scale.z = temp_f0;
            this->actor.scale.y = temp_f0;
        }
    }
    if (this->unk_192 == 0x10) {
        Audio_PlayActorSound2((Actor *) this, 0x3877U);
    }
}

void func_80B1BC4C(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a1;
    Vec3f *temp_a2;

    temp_a1 = arg0;
    temp_a1[1].focus.unk_12 = 0;
    temp_a2 = temp_a1 + 0x24;
    temp_a1->world.pos.y = temp_a1[1].projectedPos.x;
    arg0 = temp_a1;
    Item_DropCollectibleRandom(arg1, temp_a1, temp_a2, 0x80);
    arg0[1].focus.pos.z = (bitwise f32) func_80B1BCA0;
}

void func_80B1BCA0(EnPoSisters *this, GlobalContext *globalCtx) {
    s16 temp_a1;

    this->unk_192 += 1;
    temp_a1 = this->unk_192;
    if (temp_a1 == 0x20) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    func_80B1A648((void *) temp_a1, (s32) &this->actor.world);
}

void func_80B1BCF0(Actor *arg0, GlobalContext *arg1) {
    Actor *sp4C;
    Actor *sp48;
    Actor *sp44;
    ActorContext *sp40;
    Actor *temp_ret;
    Actor *temp_v0;
    ActorContext *temp_a0;
    GlobalContext *temp_a2;

    temp_a2 = arg1;
    temp_a0 = temp_a2 + 0x1CA0;
    arg1 = temp_a2;
    sp40 = temp_a0;
    sp4C = Actor_SpawnAsChild(temp_a0, arg0, temp_a2, 0x1E8, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, 0x400);
    sp48 = Actor_SpawnAsChild(temp_a0, arg0, arg1, 0x1E8, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, 0x800);
    temp_ret = Actor_SpawnAsChild(temp_a0, arg0, arg1, 0x1E8, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, 0xC00);
    temp_v0 = temp_ret;
    if ((sp4C == 0) || (sp48 == 0) || (temp_v0 == 0)) {
        if (sp4C != 0) {
            sp44 = temp_v0;
            Actor_MarkForDeath(sp4C);
        }
        if (sp48 != 0) {
            sp44 = temp_ret;
            Actor_MarkForDeath(sp48);
        }
        if (temp_ret != 0) {
            Actor_MarkForDeath(temp_ret);
        }
        Actor_MarkForDeath(arg0);
    }
}

void func_80B1BE4C(EnPoSisters *arg0, GlobalContext *arg1) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;

    arg0->actor.draw = NULL;
    arg0->actor.flags &= -2;
    arg0->unk_194 = 0x64;
    arg0->unk_191 = 0x20;
    arg0->unk_30C.base.colType = 3;
    arg0->unk_30C.base.acFlags &= 0xFFFB;
    if (arg1 != 0) {
        sp34 = arg0->actor.world.pos.x;
        sp38 = arg0->actor.world.pos.y + 45.0f;
        sp3C = arg0->actor.world.pos.z;
        func_800B3030(arg1, (Vec3f *) &sp34, &D_801D15B0, &D_801D15B0, (s16) 0x96, (s16) 0, 3);
    }
    Lights_PointSetColorAndRadius(arg0 + 0x2FC, 0U, 0U, 0U, (s16) 0);
    arg0->actionFunc = func_80B1BF2C;
}

void func_80B1BF2C(EnPoSisters *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    Actor *temp_a2;
    Actor *temp_v0;
    f32 temp_a1;
    s16 temp_v0_2;
    u8 temp_v1;

    temp_v1 = this->unk_18D;
    temp_v0 = this->actor.parent;
    temp_a2 = globalCtx->actorCtx.actorList[2].first;
    if (temp_v1 == 0) {
        temp_v0_2 = this->unk_194;
        if (temp_v0_2 != 0) {
            this->unk_194 = temp_v0_2 - 1;
        }
        if (this->unk_194 == 0) {
            sp1C = temp_a2;
            globalCtx = globalCtx;
            this->actor.shape.rot.y = ((s32) Rand_ZeroFloat(4.0f) << 0xE) + this->actor.yawTowardsPlayer;
            this->actor.world.pos.y = temp_a2->world.pos.y + 5.0f;
            func_80B1B860(this, globalCtx, temp_a2);
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return;
    }
    temp_a1 = temp_v0[1].focus.pos.z;
    if (func_80B1B940 == (bitwise s32) temp_a1) {
        this->actor.shape.rot.y = temp_v0->shape.rot.y + (temp_v1 << 0xE);
        this->actor.world.pos.y = temp_a2->world.pos.y + 5.0f;
        func_80B1B860((EnPoSisters *) globalCtx, (GlobalContext *) temp_a2, (Actor *) globalCtx);
        return;
    }
    if (func_80B1BA90 == (bitwise s32) temp_a1) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_80B1C030(EnPoSisters *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06000D40, -3.0f);
    arg0->unk_229 = 0xFF;
    arg0->unk_192 = 0x12C;
    arg0->unk_194 = 3;
    arg0->unk_191 |= 9;
    arg0->actor.flags |= 1;
    arg0->actionFunc = func_80B1C0A4;
}

void func_80B1C0A4(EnPoSisters *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_a0_2;
    s32 temp_v0_2;
    u8 temp_v1;
    u8 temp_v1_2;
    s32 phi_a0;
    EnPoSisters *phi_a2;
    s32 phi_v0;
    s32 phi_v0_2;
    EnPoSisters *phi_a2_2;

    temp_v0 = this->unk_192;
    phi_a2 = this;
    if (temp_v0 != 0) {
        this->unk_192 = temp_v0 - 1;
    }
    phi_v0 = (s32) this->unk_192;
    if ((s32) this->unk_194 > 0) {
        temp_a0 = &this->unk_144;
        if ((s32) this->unk_192 >= 0x10) {
            this = this;
            SkelAnime_FrameUpdateMatrix(temp_a0);
            temp_v1 = this->unk_18D;
            phi_a2 = this;
            if (temp_v1 == 0) {
                temp_v1_2 = this->unk_18E;
                temp_v0_2 = 0x10 - temp_v1_2;
                phi_a0 = temp_v0_2;
                if (temp_v0_2 < 0) {
                    phi_a0 = -temp_v0_2;
                }
                if (phi_a0 < 0xE) {
                    temp_a0_2 = (s32) (temp_v1_2 << 0x1B) >> 0x10;
                    this = this;
                    this->actor.shape.rot.y += (s32) ((f32) (0x580 - (this->unk_194 * 0x180)) * fabsf(Math_SinS((s16) temp_a0_2)));
                }
                temp_v0_3 = this->unk_192;
                phi_a2 = this;
                if (((s32) temp_v0_3 >= 0x11C) || ((s32) temp_v0_3 < 0x1F)) {
                    this->unk_191 |= 0x40;
                } else {
                    this->unk_191 &= 0xFFBF;
                }
                phi_v0 = (s32) this->unk_192;
            } else {
                this->actor.shape.rot.y = this->actor.parent->shape.rot.y + (temp_v1 << 0xE);
                phi_v0 = (s32) this->unk_192;
            }
        }
    }
    phi_v0_2 = phi_v0;
    phi_a2_2 = phi_a2;
    if (phi_a2->unk_18D == 0) {
        if ((phi_v0 >= 0x11C) || ((phi_v0 < 0x1F) && (phi_v0 >= 0x10))) {
            phi_a2->unk_191 |= 0x40;
            phi_v0_2 = (s32) phi_a2->unk_192;
        } else {
            phi_a2->unk_191 &= 0xFFBF;
            phi_v0_2 = (s32) phi_a2->unk_192;
        }
    }
    if (phi_v0_2 == 0) {
        if (phi_a2->unk_18D == 0) {
            this = phi_a2;
            func_80B1B0E0(phi_a2);
        } else {
            this = phi_a2;
            func_80B1BE4C(phi_a2, globalCtx, phi_a2);
        }
        goto block_33;
    }
    if (phi_a2->unk_18D != 0) {
        if (func_80B1B444 == (bitwise s32) phi_a2->actor.parent[1].focus.pos.z) {
            this = phi_a2;
            func_80B1B3A8((Actor *) phi_a2);
            goto block_33;
        }
    } else {
        temp_v0_4 = phi_a2->unk_194;
        if (temp_v0_4 == 0) {
            phi_a2->unk_194 = -0xF;
        } else if ((s32) temp_v0_4 < 0) {
            phi_a2->unk_194 = temp_v0_4 + 1;
            if (phi_a2->unk_194 == 0) {
                this = phi_a2;
                func_80B1B0E0(phi_a2);
block_33:
                phi_a2_2 = this;
            }
        }
    }
    func_80B1A768(phi_a2_2, globalCtx, phi_a2_2);
}

void func_80B1C2E8(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, (AnimationHeader *) &D_0600119C);
    Audio_PlayActorSound2(arg0, 0x3873U);
    arg0->unk_229 = 0;
    arg0->unk_191 = 0x20;
    arg0[1].focus.pos.z = (bitwise f32) func_80B1C340;
}

void func_80B1C340(EnPoSisters *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;
    s32 temp_f16;
    u8 phi_v1;

    temp_a0 = &this->unk_144;
    this = this;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        this->unk_229 = 0xFF;
        this->actor.flags |= 1;
        this->unk_191 |= 0x18;
        if (this->unk_18C == 0) {
            func_80B1BE4C(this, globalCtx, this);
            return;
        }
        func_80B1AC40(this);
        return;
    }
    temp_f16 = (s32) (255.0f * (this->unk_144.animCurrentFrame / this->unk_144.animFrameCount));
    if (temp_f16 < 0) {
        this->unk_229 = 0;
        return;
    }
    phi_v1 = (u8) temp_f16;
    if (temp_f16 >= 0x100) {
        phi_v1 = 0xFFU;
    }
    this->unk_229 = phi_v1;
}

void func_80B1C408(Actor *arg0, GlobalContext *arg1) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    Actor *temp_v0_2;
    f32 *temp_a1;
    u8 temp_v0;
    u8 temp_v0_3;

    temp_v0 = arg0->unk_31D;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_31D = (u8) (temp_v0 & 0xFFFD);
        func_800BE258(arg0, arg0 + 0x324);
        if (arg0->unk_18D != 0) {
            temp_v0_2 = arg0->parent;
            temp_v0_2[1].sfx = (s16) temp_v0_2[1].sfx - 1;
            Audio_PlayActorSound2(arg0, 0x38EFU);
            func_80B1BE4C((EnPoSisters *) arg0, arg1);
            if (Rand_ZeroOne() < 0.2f) {
                temp_a1 = &sp3C;
                sp3C = arg0->world.pos.x;
                sp40 = arg0->world.pos.y;
                sp44 = arg0->world.pos.z;
                Item_DropCollectible(arg1, (Vec3f *) temp_a1, 5U);
                return;
            }
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return;
        }
        if (arg0->unk_320 != 9) {
            temp_v0_3 = arg0->colChkInfo.damageEffect;
            if (temp_v0_3 == 0xF) {
                arg0->unk_191 = (u8) (arg0->unk_191 | 2);
                arg0->world.rot.y = arg0->shape.rot.y;
                func_80B1B860((EnPoSisters *) arg0, arg1);
                return;
            }
            if ((arg0->unk_18C == 0) && (temp_v0_3 == 0xE) && (func_80B1C0A4 == (bitwise s32) arg0[1].focus.pos.z)) {
                if ((s16) arg0[1].sfx == 0) {
                    arg0[1].sfx = -0x2D;
                    return;
                }
                /* Duplicate return node #18. Try simplifying control flow for better match */
                return;
            }
            if (Actor_ApplyDamage(arg0) != 0) {
                Audio_PlayActorSound2(arg0, 0x3875U);
            } else {
                Enemy_StartFinishingBlow(arg1, arg0);
                Audio_PlayActorSound2(arg0, 0x3886U);
            }
            if (arg0->colChkInfo.damageEffect == 4) {
                arg0[2].velocity.y = 4.0f;
                arg0[2].velocity.z = 0.5f;
                Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) arg0->unk_332, (f32) arg0->unk_334, (f32) arg0->unk_336, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
            }
            func_80B1B3A8(arg0);
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #18. Try simplifying control flow for better match */
    }
}

void EnPoSisters_Update(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp48;
    f32 sp44;
    f32 sp40;
    s32 sp3C;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s32 temp_v0_4;
    s32 temp_v1;
    u8 temp_t1;
    u8 temp_v0;
    u8 temp_v0_2;
    void (*temp_v0_3)(EnPoSisters *, GlobalContext *);
    f32 phi_f0;
    EnPoSisters *this = (EnPoSisters *) thisx;

    temp_v0 = this->unk_30C.base.atFlags;
    if ((temp_v0 & 2) != 0) {
        this->unk_30C.base.atFlags = temp_v0 & 0xFFFD;
        func_80B1B280(this);
    }
    func_80B1C408((Actor *) this, globalCtx);
    if ((this->unk_191 & 4) != 0) {
        func_80B1A9B0(this, globalCtx);
    }
    this->actionFunc(this, globalCtx);
    if ((this->unk_191 & 8) != 0) {
        func_80B1A894((Actor *) this, globalCtx);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    if ((this->unk_191 & 0x10) != 0) {
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 0.0f, 5U);
    } else {
        sp40 = this->actor.world.pos.x;
        sp44 = this->actor.world.pos.y + 10.0f;
        sp48 = this->actor.world.pos.z;
        this->actor.floorHeight = func_800C411C(&globalCtx->colCtx, &this->actor.floorPoly, &sp3C, (Actor *) this, (Vec3f *) &sp40);
    }
    this->actor.shape.shadowAlpha = this->unk_229;
    Actor_SetHeight((Actor *) this, 40.0f);
    if (this->unk_2F0 > 0.0f) {
        Math_StepToF(&this->unk_2F0, 0.0f, 0.05f);
        temp_v0_2 = this->unk_229;
        if (temp_v0_2 != 0xFF) {
            temp_f0 = (f32) temp_v0_2;
            phi_f0 = temp_f0;
            if ((s32) temp_v0_2 < 0) {
                phi_f0 = temp_f0 + 4294967296.0f;
            }
            temp_f2 = phi_f0 * 0.003921569f;
            if (temp_f2 < phi_f0) {
                this->unk_2F0 = temp_f2;
            }
        }
        temp_f0_2 = (this->unk_2F0 + 1.0f) * 0.25f;
        this->unk_2F4 = temp_f0_2;
        if (temp_f0_2 > 0.5f) {
            this->unk_2F4 = 0.5f;
        } else {
            this->unk_2F4 = this->unk_2F4;
        }
    }
    temp_a1 = &this->unk_30C;
    if ((this->unk_191 & 0x1F) != 0) {
        sp2C = temp_a1;
        Collider_UpdateCylinder((Actor *) this, temp_a1);
        temp_v0_3 = this->actionFunc;
        if ((func_80B1B168 == temp_v0_3) || (func_80B1B020 == temp_v0_3)) {
            temp_t1 = this->unk_190 + 1;
            temp_v0_4 = temp_t1 & 0xFF;
            this->unk_190 = temp_t1;
            if (temp_v0_4 >= 9) {
                this->unk_190 = 8;
            } else {
                this->unk_190 = (u8) temp_v0_4;
            }
            goto block_29;
        }
        if (func_80B1BA90 != temp_v0_3) {
            temp_v1 = this->unk_190 - 1;
            if (temp_v1 <= 0) {
                this->unk_190 = 1;
            } else {
                this->unk_190 = (u8) temp_v1;
            }
block_29:
        }
        if (func_80B1B168 == this->actionFunc) {
            this->actor.flags |= 0x1000000;
            CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) sp2C);
        }
        if ((this->unk_191 & 1) != 0) {
            CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp2C);
        }
        if (func_80B1BF2C != this->actionFunc) {
            CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) sp2C);
        }
        if (func_80B1B628 == this->actionFunc) {
            this->actor.shape.rot.y = this->actor.world.rot.y + 0x8000;
            return;
        }
        if ((this->unk_191 & 2) != 0) {
            this->actor.shape.rot.y = this->actor.world.rot.y;
        }
        /* Duplicate return node #40. Try simplifying control flow for better match */
    }
}

void func_80B1C974(EnPoSisters *arg0) {
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    u8 temp_v1;

    temp_v0 = arg0->unk_144.animCurrentSeg;
    if (&D_06000114 == temp_v0) {
        temp_v0_2 = arg0->unk_226 + 5;
        if (temp_v0_2 >= 0x100) {
            arg0->unk_226 = 0xFF;
        } else {
            arg0->unk_226 = (u8) temp_v0_2;
        }
        temp_v0_3 = arg0->unk_227 - 5;
        if (temp_v0_3 < 0x32) {
            arg0->unk_227 = 0x32;
        } else {
            arg0->unk_227 = (u8) temp_v0_3;
        }
        temp_v0_4 = arg0->unk_228 - 5;
        if (temp_v0_4 < 0) {
            arg0->unk_228 = 0;
            return;
        }
        arg0->unk_228 = (u8) temp_v0_4;
        return;
    }
    if (&D_06000A54 == temp_v0) {
        temp_v0_5 = arg0->unk_226 + 5;
        if (temp_v0_5 >= 0x51) {
            arg0->unk_226 = 0x50;
        } else {
            arg0->unk_226 = (u8) temp_v0_5;
        }
        temp_v0_6 = arg0->unk_227 + 5;
        if (temp_v0_6 >= 0x100) {
            arg0->unk_227 = 0xFF;
        } else {
            arg0->unk_227 = (u8) temp_v0_6;
        }
        temp_v0_7 = arg0->unk_228 + 5;
        if (temp_v0_7 >= 0xE2) {
            arg0->unk_228 = 0xE1;
            return;
        }
        arg0->unk_228 = (u8) temp_v0_7;
        return;
    }
    if (&D_060008C0 == temp_v0) {
        if ((arg0->actor.colorFilterTimer & 2) != 0) {
            arg0->unk_226 = 0;
            arg0->unk_227 = 0;
            arg0->unk_228 = 0;
            return;
        }
        arg0->unk_226 = 0x50;
        arg0->unk_227 = 0xFF;
        arg0->unk_228 = 0xE1;
        return;
    }
    temp_v0_8 = arg0->unk_226 + 5;
    if (temp_v0_8 >= 0x100) {
        arg0->unk_226 = 0xFF;
    } else {
        arg0->unk_226 = (u8) temp_v0_8;
    }
    temp_v0_9 = arg0->unk_227 + 5;
    if (temp_v0_9 >= 0x100) {
        arg0->unk_227 = 0xFF;
    } else {
        arg0->unk_227 = (u8) temp_v0_9;
    }
    temp_v1 = arg0->unk_228;
    temp_v0_10 = temp_v1 + 5;
    if ((s32) temp_v1 >= 0xD3) {
        temp_v0_11 = temp_v1 - 5;
        if (temp_v0_11 < 0xD2) {
            arg0->unk_228 = 0xD2;
            return;
        }
        arg0->unk_228 = (u8) temp_v0_11;
        return;
    }
    if (temp_v0_10 >= 0xD3) {
        arg0->unk_228 = 0xD2;
        return;
    }
    arg0->unk_228 = (u8) temp_v0_10;
}

s32 func_80B1CB44(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, s16 *arg4, Actor *arg5, Gfx **arg6) {
    Gfx *temp_a1;
    Gfx *temp_a1_2;
    Gfx *temp_a1_3;
    Gfx *temp_a1_4;
    s16 temp_a0;
    void *temp_v1;

    if ((arg1 == 1) && ((arg5->unk_191 & 0x40) != 0)) {
        temp_a0 = arg5[1].focus.unk_12;
        if ((s32) temp_a0 >= 0x11C) {
            *arg4 = *arg4 + (temp_a0 << 0xC) + 0xFFEE4000;
        } else {
            *arg4 = *arg4 + (temp_a0 << 0xC) + 0xFFFF1000;
        }
    }
    if ((arg5->unk_229 == 0) || (arg1 == 8) || ((func_80B1BA90 == arg5[1].focus.pos.z) && ((s32) arg5[1].focus.unk_12 >= 8))) {
        *arg2 = NULL;
    } else if (arg1 == 9) {
        *arg2 = *(&D_80B1DACC + (arg5->unk_18C * 4));
    } else if (arg1 == 0xA) {
        *arg2 = *(&D_80B1DADC + (arg5->unk_18C * 4));
        temp_a1 = *arg6;
        *arg6 = temp_a1 + 8;
        temp_a1->words.w1 = 0;
        temp_a1->words.w0 = 0xE7000000;
        temp_a1_2 = *arg6;
        *arg6 = temp_a1_2 + 8;
        temp_a1_2->words.w0 = 0xFB000000;
        temp_a1_2->words.w1 = (arg5->unk_226 << 0x18) | (arg5->unk_227 << 0x10) | (arg5->unk_228 << 8) | arg5->unk_229;
    } else if (arg1 == 0xB) {
        temp_v1 = (arg5->unk_18C * 4) + &D_80B1DAEC;
        temp_a1_3 = *arg6;
        *arg6 = temp_a1_3 + 8;
        temp_a1_3->words.w1 = 0;
        temp_a1_3->words.w0 = 0xE7000000;
        temp_a1_4 = *arg6;
        *arg6 = temp_a1_4 + 8;
        temp_a1_4->words.w0 = 0xFB000000;
        temp_a1_4->words.w1 = (temp_v1->unk_0 << 0x18) | (temp_v1->unk_1 << 0x10) | (temp_v1->unk_2 << 8) | arg5->unk_229;
    }
    return 0;
}

void func_80B1CD34(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, s32 **arg5) {
    s32 *sp40;
    void *sp38;
    s8 *sp34;
    f32 temp_f2;
    f32 temp_f6;
    f32 temp_f8;
    s32 *temp_v0_2;
    s32 *temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s8 *temp_a2;
    s8 temp_v0;
    u8 temp_t2;
    u8 temp_t5;
    void *temp_a0;
    void *temp_a1;
    void *temp_v0_6;
    void *temp_v1;
    s8 *phi_a2;
    void *phi_a0;
    void *phi_v1;
    s32 phi_v0;
    f32 phi_f8;
    f32 phi_f6;

    temp_a2 = arg1 + &D_80B1DB08;
    temp_v0 = *temp_a2;
    phi_a2 = temp_a2;
    if (temp_v0 != -1) {
        sp34 = temp_a2;
        SysMatrix_GetStateTranslation(arg4 + (temp_v0 * 0xC) + 0x28C);
        goto block_8;
    }
    if (temp_a2 == &D_80B1DB11) {
        sp34 = temp_a2;
        SysMatrix_GetStateTranslationAndScaledY(-2500.0f, arg4 + 0x2BC);
        SysMatrix_GetStateTranslationAndScaledY(3000.0f, arg4 + 0x2C8);
        goto block_8;
    }
    if (temp_a2 == &D_80B1DB12) {
        sp34 = temp_a2;
        SysMatrix_GetStateTranslationAndScaledY(-4000.0f, arg4 + 0x2D4);
        goto block_8;
    }
    if (temp_a2 == &D_80B1DB13) {
        sp34 = temp_a2;
        SysMatrix_GetStateTranslationAndScaledX(3000.0f, arg4 + 0x2E0);
block_8:
        phi_a2 = sp34;
    }
    if ((func_80B1BA90 == arg4[1].focus.pos.z) && ((s32) arg4[1].focus.unk_12 >= 8) && (phi_a2 == &D_80B1DB11)) {
        temp_v0_2 = *arg5;
        *arg5 = temp_v0_2 + 8;
        *temp_v0_2 = 0xDA380003;
        sp34 = phi_a2;
        sp40 = temp_v0_2;
        sp40[1] = Matrix_NewMtx(*arg0);
        temp_v0_3 = *arg5;
        *arg5 = temp_v0_3 + 8;
        temp_v0_3->unk_0 = (Mtx *)0xDE000000;
        temp_v0_3[1] = &D_060046E0;
    }
    if (phi_a2 == &D_80B1DB10) {
        if ((arg4->unk_191 & 0x20) != 0) {
            temp_v0_4 = arg4->unk_190 - 1;
            phi_v0 = temp_v0_4;
            if (temp_v0_4 > 0) {
                temp_a1 = arg4 + (temp_v0_4 * 0xC);
                phi_a0 = temp_a1 + 0x220;
                phi_v1 = temp_a1 + 0x22C;
                do {
                    temp_v0_5 = phi_v0 - 1;
                    temp_v1 = phi_v1 - 0xC;
                    temp_v1->unk_C = (s32) phi_a0->unk_0;
                    temp_a0 = phi_a0 - 0xC;
                    temp_v1->unk_10 = (s32) phi_a0->unk_4;
                    temp_v1->unk_14 = (s32) temp_a0->unk_14;
                    phi_a0 = temp_a0;
                    phi_v1 = temp_v1;
                    phi_v0 = temp_v0_5;
                } while (temp_v0_5 > 0);
            }
            SysMatrix_MultiplyVector3fByState(&D_80B1DAFC, arg4 + 0x22C);
        }
        if ((s32) arg4->unk_190 > 0) {
            temp_v0_6 = (arg4->unk_18C * 4) + &D_80B1DA30;
            sp38 = temp_v0_6;
            temp_f2 = Rand_ZeroFloat(0.3f) + 0.7f;
            if (func_80B1BCA0 == arg4[1].focus.pos.z) {
                if ((s32) temp_v0_6->unk_0 < 0) {

                }
                if ((s32) temp_v0_6->unk_1 < 0) {

                }
                temp_t2 = temp_v0_6->unk_2;
                temp_f8 = (f32) temp_t2;
                phi_f8 = temp_f8;
                if ((s32) temp_t2 < 0) {
                    phi_f8 = temp_f8 + 4294967296.0f;
                }
                Lights_PointNoGlowSetInfo(arg4 + 0x2FC, (s16) (s32) arg4[1].shape.feetPos[1].z, (s16) (s32) (arg4[1].projectedPos.x + 15.0f), (s16) (s32) arg4[1].projectedPos.y, (u8) (u32) (phi_f8 * temp_f2), (u8) 0xC8);
            } else {
                if ((s32) temp_v0_6->unk_0 < 0) {

                }
                if ((s32) temp_v0_6->unk_1 < 0) {

                }
                temp_t5 = temp_v0_6->unk_2;
                temp_f6 = (f32) temp_t5;
                phi_f6 = temp_f6;
                if ((s32) temp_t5 < 0) {
                    phi_f6 = temp_f6 + 4294967296.0f;
                }
                Lights_PointGlowSetInfo(arg4 + 0x2FC, (s16) (s32) arg4[1].shape.feetPos[1].z, (s16) (s32) (arg4[1].projectedPos.x + 15.0f), (s16) (s32) arg4[1].projectedPos.y, (u8) (u32) (phi_f6 * temp_f2), (u8) 0xC8);
            }
        } else {
            Lights_PointSetColorAndRadius(arg4 + 0x2FC, 0U, 0U, 0U, (s16) 0);
        }
        if ((arg4->unk_191 & 0x80) == 0) {
            SysMatrix_CopyCurrentState(arg4 + 0x358);
        }
    }
}

void EnPoSisters_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnPoSisters *spE4;
    void (*sp80)(EnPoSisters *, GlobalContext *);
    void (*sp78)(EnPoSisters *, GlobalContext *);
    Gfx *sp74;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s3;
    f32 temp_f20;
    s32 temp_s2;
    s32 temp_v0;
    u8 temp_v0_2;
    void *temp_s1;
    void *temp_s7;
    s32 phi_s5;
    EnPoSisters *phi_s1;
    s32 phi_s2;
    f32 phi_f20;
    f32 phi_f0;
    f32 phi_f2;
    EnPoSisters *this = (EnPoSisters *) thisx;

    spE4 = this;
    temp_v0 = this->unk_18C * 4;
    temp_s1 = temp_v0 + &D_80B1DA40;
    temp_s7 = temp_v0 + &D_80B1DA30;
    temp_s3 = globalCtx->state.gfxCtx;
    func_80B1C974(this);
    func_8012C28C(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0_2 = this->unk_229;
    if ((temp_v0_2 == 0xFF) || (temp_v0_2 == 0)) {
        temp_v0_5 = temp_s3->polyOpa.p;
        temp_s3->polyOpa.p = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xFB000000;
        temp_v0_5->words.w1 = (this->unk_226 << 0x18) | (this->unk_227 << 0x10) | (this->unk_228 << 8) | this->unk_229;
        temp_v0_6 = temp_s3->polyOpa.p;
        temp_s3->polyOpa.p = &temp_v0_6[1];
        temp_v0_6->words.w1 = (u32) D_801AEFA0;
        temp_v0_6->words.w0 = 0xDB060024;
        temp_s3->polyOpa.p = SkelAnime_Draw2(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32 (*)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *, Gfx **)) func_80B1CB44, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *, Gfx **)) func_80B1CD34, (Actor *) this, temp_s3->polyOpa.p);
    } else {
        temp_v0_3 = temp_s3->polyXlu.p;
        temp_s3->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xFB000000;
        temp_v0_3->words.w1 = this->unk_229 | ~0xFF;
        temp_v0_4 = temp_s3->polyXlu.p;
        temp_s3->polyXlu.p = &temp_v0_4[1];
        temp_v0_4->words.w1 = (u32) D_801AEF88;
        temp_v0_4->words.w0 = 0xDB060024;
        temp_s3->polyXlu.p = SkelAnime_Draw2(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32 (*)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *, Gfx **)) func_80B1CB44, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *, Gfx **)) func_80B1CD34, (Actor *) this, temp_s3->polyXlu.p);
    }
    if ((this->unk_191 & 0x80) == 0) {
        SysMatrix_SetCurrentState(&this->unk_358);
        temp_v0_7 = temp_s3->polyOpa.p;
        temp_s3->polyOpa.p = &temp_v0_7[1];
        temp_v0_7->words.w0 = 0xDA380003;
        temp_v0_7->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_8 = temp_s3->polyOpa.p;
        temp_s3->polyOpa.p = &temp_v0_8[1];
        temp_v0_8->words.w0 = 0xDE000000;
        temp_v0_8->words.w1 = (u32) &D_060027B0;
    }
    temp_v0_9 = temp_s3->polyXlu.p;
    temp_s3->polyXlu.p = &temp_v0_9[1];
    temp_v0_9->words.w0 = 0xDB060020;
    temp_v0_9->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((s32) globalCtx->gameplayFrames * -0x14) & 0x1FF, 0x20, 0x80);
    temp_v0_10 = temp_s3->polyXlu.p;
    temp_s3->polyXlu.p = &temp_v0_10[1];
    temp_v0_10->words.w0 = 0xFB000000;
    temp_v0_10->words.w1 = (temp_s1->unk_0 << 0x18) | (temp_s1->unk_1 << 0x10) | (temp_s1->unk_2 << 8) | temp_s1->unk_3;
    if (func_80B1BCA0 == this->actionFunc) {
        phi_s5 = ((s32) (((s32) this->unk_192 * -0xFF) + 0x1FE0) / 0x20) & 0xFF;
        phi_f20 = 0.0056000003f;
    } else {
        phi_s5 = 0;
        phi_f20 = this->actor.scale.x * 0.5f;
    }
    phi_s2 = 0;
    if ((s32) this->unk_190 > 0) {
        sp78 = func_80B1BA90;
        sp74 = D_0407D590;
        sp80 = func_80B1BCA0;
        phi_s1 = this;
        do {
            if (sp80 != this->actionFunc) {
                phi_s5 = ((phi_s2 * -0x1F) + 0xF8) & 0xFF;
            }
            temp_v0_11 = temp_s3->polyXlu.p;
            temp_s3->polyXlu.p = &temp_v0_11[1];
            temp_v0_11->words.w1 = 0;
            temp_v0_11->words.w0 = 0xE7000000;
            temp_v0_12 = temp_s3->polyXlu.p;
            temp_s3->polyXlu.p = &temp_v0_12[1];
            temp_v0_12->words.w0 = 0xFA008080;
            temp_v0_12->words.w1 = (temp_s7->unk_0 << 0x18) | (temp_s7->unk_1 << 0x10) | (temp_s7->unk_2 << 8) | (phi_s5 & 0xFF);
            sp80 = sp80;
            SysMatrix_InsertTranslation(phi_s1->unk_22C, phi_s1->unk_230, phi_s1->unk_234, 0);
            SysMatrix_InsertRotation(0, (s16) (func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x8000), 0, 1);
            if (sp78 == this->actionFunc) {
                temp_f20 = ((f32) (this->unk_192 - phi_s2) * 0.025f) + 0.5f;
                if (temp_f20 < 0.5f) {
                    phi_f0 = 0.5f;
                } else {
                    if (temp_f20 > 0.8f) {
                        phi_f2 = 0.8f;
                    } else {
                        phi_f2 = temp_f20;
                    }
                    phi_f0 = phi_f2;
                }
                phi_f20 = phi_f0 * 0.007f;
            }
            Matrix_Scale(phi_f20, phi_f20, phi_f20, 1);
            temp_v0_13 = temp_s3->polyXlu.p;
            temp_s3->polyXlu.p = &temp_v0_13[1];
            temp_v0_13->words.w0 = 0xDA380003;
            temp_v0_13->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_14 = temp_s3->polyXlu.p;
            temp_s3->polyXlu.p = &temp_v0_14[1];
            temp_v0_14->words.w0 = 0xDE000000;
            temp_v0_14->words.w1 = (u32) sp74;
            temp_s2 = phi_s2 + 1;
            phi_s1 += 0xC;
            phi_s2 = temp_s2;
        } while (temp_s2 < (s32) spE4->unk_190);
    }
    func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk_28C, 8, this->actor.scale.x * 142.85713f * this->unk_2F4, 0.0f, this->unk_2F0, (u8) 0x14);
}
