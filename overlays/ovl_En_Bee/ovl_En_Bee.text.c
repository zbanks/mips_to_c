typedef struct EnBee {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x188 */ Vec3s unk188;                       /* inferred */
    /* 0x18E */ char pad18E[0x36];                  /* maybe part of unk188[10]? */
    /* 0x1C4 */ Vec3s unk1C4;                       /* inferred */
    /* 0x1CA */ char pad1CA[0x36];                  /* maybe part of unk1C4[10]? */
    /* 0x200 */ void (*actionFunc)(EnBee *, GlobalContext *);
    /* 0x204 */ s16 unk204;                         /* inferred */
    /* 0x206 */ s16 unk206;                         /* inferred */
    /* 0x208 */ char pad208[0x4];                   /* maybe part of unk206[3]? */
    /* 0x20C */ s32 unk20C;                         /* inferred */
    /* 0x20E */ s16 unk20E;                         /* overlap; inferred */
    /* 0x210 */ s32 unk210;                         /* inferred */
    /* 0x214 */ s32 unk214;                         /* inferred */
    /* 0x218 */ s32 unk218;                         /* inferred */
    /* 0x21C */ Vec3f unk21C;                       /* inferred */
    /* 0x228 */ char pad228[0x14];                  /* maybe part of unk21C[2]? */
    /* 0x23C */ ColliderCylinder unk23C;            /* inferred */
} EnBee;                                            /* size = 0x288 */

struct _mips2c_stack_EnBee_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnBee_Draw {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnBee_Init {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnBee_Update {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ CollisionCheckContext *sp2C;         /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B5A854 {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ Vec3f *sp3C;                         /* inferred */
    /* 0x40 */ char pad40[0x6];                     /* maybe part of sp3C[2]? */
    /* 0x46 */ s16 sp46;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad54[0x4];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80B5A9E8 {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B5ABC4 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B5AC3C {
    /* 0x00 */ char pad0[0x88];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad94[0x4];
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_80B5AF80 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ PosRot *sp34;                        /* inferred */
};                                                  /* size = 0x38 */

? func_801A7328(void *, ?);                         /* extern */
void func_80B5A854(EnBee *arg0);                    /* static */
void func_80B5ABC4(EnBee *arg0);                    /* static */
void func_80B5AF80(Actor *arg0, GlobalContext *arg1); /* static */
extern AnimationHeader D_0600005C;
extern SkeletonHeader D_06001398;
static s32 D_80B5B1F0 = 0;
static DamageTable D_80B5B214 = {
    {
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF2,
        0xF2,
        0xF2,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static ColliderCylinderInit D_80B5B234 = {
    {0xA, 0x11, 0xD, 1, 0x10, 1},
    {0, {0xF7CFFFFF, 8, 2}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {6, 0xD, 0xFFFC, {0, 0, 0}},
};

void EnBee_Init(EnBee *this, GlobalContext *globalCtx) {
    EnBee *this = (EnBee *) thisx;
    this->actor.colChkInfo.mass = 0xA;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 19.0f);
    SkelAnime_Init(globalCtx, &this->unk144, &D_06001398, &D_0600005C, &this->unk188, &this->unk1C4, 0xA);
    this->actor.colChkInfo.health = 1;
    this->actor.colChkInfo.damageTable = &D_80B5B214;
    this->actor.targetMode = 6;
    Collider_InitAndSetCylinder(globalCtx, &this->unk23C, (Actor *) this, &D_80B5B234);
    this->unk218 = D_80B5B1F0;
    D_80B5B1F0 += 1;
    this->actor.shape.shadowScale = 12.0f;
    if (ActorCutscene_GetCurrentIndex() != -1) {
        func_800BC154(globalCtx, &globalCtx->actorCtx, (Actor *) this, 7U);
    }
    this->actor.hintId = 0xC;
    func_80B5A854(this);
}

void EnBee_Destroy(EnBee *this, GlobalContext *globalCtx) {
    EnBee *this = (EnBee *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk23C);
}

void func_80B5A854(EnBee *arg0) {
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    s16 sp46;
    Vec3f *sp3C;
    Vec3f *temp_a1;
    s16 temp_a0;
    s16 temp_a0_2;

    SkelAnime_ChangeAnim(arg0 + 0x144, &D_0600005C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0600005C), (u8) 0, -10.0f);
    temp_a1 = arg0 + 8;
    sp3C = temp_a1;
    Math_Vec3f_Copy((Vec3f *) &sp48, temp_a1);
    temp_a0 = (arg0->unk218 * 0x700) + 0x2000;
    sp46 = temp_a0;
    sp48 += Math_SinS(temp_a0) * 50.0f;
    sp4C = Rand_ZeroFloat(50.0f) + (arg0->actor.floorHeight + 30.0f);
    sp50 += Math_CosS(temp_a0) * 50.0f;
    Math_Vec3f_Copy(arg0 + 0x21C, (Vec3f *) &sp48);
    Math_Vec3f_Copy((Vec3f *) &sp48, temp_a1);
    temp_a0_2 = temp_a0 - 0x4000;
    sp3C = (Vec3f *) temp_a0_2;
    sp48 += Math_SinS(temp_a0_2) * 50.0f;
    sp4C = Rand_ZeroFloat(50.0f) + (arg0->actor.floorHeight + 30.0f);
    sp50 += Math_CosS(unksp3E) * 50.0f;
    Math_Vec3f_Copy(arg0 + 0x228, (Vec3f *) &sp48);
    arg0->unk204 = Rand_S16Offset(0x14, 0x1E);
    arg0->unk208 = 0;
    arg0->actionFunc = func_80B5A9E8;
}

void func_80B5A9E8(EnBee *this, GlobalContext *globalCtx) {
    f32 sp44;
    f32 sp3C;
    s32 temp_t0;

    if ((this->actor.category != 5) && (ActorCutscene_GetCurrentIndex() == -1)) {
        func_800BC154(globalCtx, &globalCtx->actorCtx, (Actor *) this, 5U);
    }
    Math_Vec3f_Copy((Vec3f *) &sp3C, this + (this->unk214 * 0xC) + 0x21C);
    sp3C += Math_SinS(this->unk20E) * 30.0f;
    sp44 += Math_CosS(this->unk20E) * 30.0f;
    if ((this->unk218 & 1) == 0) {
        this->unk20C += (s16) ((s32) randPlusMinusPoint5Scaled(1000.0f) + 0xFA0);
    } else {
        this->unk20C -= (s16) ((s32) randPlusMinusPoint5Scaled(1000.0f) + 0xFA0);
    }
    this->unk210 += 0x3E8;
    this->actor.velocity.y = Math_SinS(this->unk212);
    if (this->unk20C >= 0x10001) {
        this->unk20C = 0;
        temp_t0 = this->unk214 + 1;
        this->unk214 = temp_t0;
        this->unk214 = temp_t0 & 1;
    }
    Math_SmoothStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw((Vec3f *) &this->actor.world, (Vec3f *) &sp3C), 1, 0x7D0, (s16) 0);
    Math_ApproachF(&this->actor.speedXZ, 3.0f, 0.3f, 1.0f);
    if ((this->unk204 == 0) && (this->actor.params != 0)) {
        func_80B5ABC4(this);
    }
}

void func_80B5ABC4(EnBee *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_0600005C, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0600005C), (u8) 0, -10.0f);
    arg0->unk208 = 1;
    arg0->actionFunc = func_80B5AC3C;
}

void func_80B5AC3C(EnBee *this, GlobalContext *globalCtx) {
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    Actor *temp_s3;
    f32 *temp_s5;
    f32 temp_f20;
    f32 temp_f20_2;
    s32 temp_s1;
    s32 temp_t9;
    s32 temp_v0;
    f32 phi_f22;
    Vec3f *phi_s2;
    s32 phi_s1;

    temp_s5 = &sp88;
    temp_s3 = globalCtx->actorCtx.actorList[2].first;
    Math_Vec3f_Copy((Vec3f *) temp_s5, (Vec3f *) &temp_s3->world);
    phi_f22 = (f32) ((this->unk218 * 0x700) + 0x2000);
    phi_s2 = &this->unk21C;
    phi_s1 = 0;
    do {
        temp_f20 = randPlusMinusPoint5Scaled(20.0f);
        sp88 += Math_SinS((s16) (s32) ((f32) this->actor.yawTowardsPlayer + (f32) this->unk20C + phi_f22)) * (temp_f20 + 30.0f);
        sp8C = (Math_SinS(this->unk212) * 10.0f) + (temp_s3->floorHeight + 40.0f);
        temp_f20_2 = randPlusMinusPoint5Scaled(20.0f);
        sp90 += Math_CosS((s16) (s32) ((f32) this->actor.yawTowardsPlayer + (f32) this->unk20C + phi_f22)) * (temp_f20_2 + 30.0f);
        Math_Vec3f_Copy(phi_s2, (Vec3f *) temp_s5);
        temp_s1 = phi_s1 + 0xC;
        phi_f22 -= 16384.0f;
        phi_s2 += 0xC;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x18);
    Math_Vec3f_Copy((Vec3f *) temp_s5, this + (this->unk214 * 0xC) + 0x21C);
    temp_v0 = this->unk218;
    if ((temp_v0 & 1) == 0) {
        this->unk20C = this->unk20C + (this->unk218 * 0x700) + (s32) randPlusMinusPoint5Scaled((f32) (temp_v0 * 0x700) * 0.5f);
    } else {
        this->unk20C = (this->unk20C - (this->unk218 * 0x700)) - (s32) randPlusMinusPoint5Scaled((f32) (temp_v0 * 0x700) * 0.5f);
    }
    this->unk210 = this->unk210 + (s32) randPlusMinusPoint5Scaled(500.0f) + 0x3E8;
    if (this->unk20C >= 0x10001) {
        this->unk20C = 0;
        temp_t9 = this->unk214 + 1;
        this->unk214 = temp_t9;
        this->unk214 = temp_t9 & 1;
    }
    Math_SmoothStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw((Vec3f *) &this->actor.world, (Vec3f *) temp_s5), 1, 0x1388, (s16) 0);
    Math_ApproachF(&this->actor.world.pos.y, sp8C, 0.3f, 3.0f);
    Math_ApproachF(&this->actor.speedXZ, 5.0f, 0.3f, 1.0f);
}

void func_80B5AF80(Actor *arg0, GlobalContext *arg1) {
    PosRot *sp34;
    PosRot *temp_a1;

    if ((arg0->unk206 == 0) && ((arg0->unk24C & 2) != 0)) {
        func_801A7328(arg0 + 0xEC, 0x304A);
        arg0->unk206 = 5;
    }
    if ((arg0->unk24D & 2) != 0) {
        Enemy_StartFinishingBlow(arg1, arg0);
        temp_a1 = &arg0->world;
        arg0->speedXZ = 0.0f;
        sp34 = temp_a1;
        Audio_PlaySoundAtPosition(arg1, (Vec3f *) temp_a1, 0xA, 0x393BU);
        arg0->colChkInfo.health = 0;
        Audio_PlaySoundAtPosition(arg1, (Vec3f *) temp_a1, 0x32, 0x3878U);
        func_800B3030(arg1, (Vec3f *) temp_a1, &D_801D15B0, &D_801D15B0, (s16) 0x64, (s16) 0, 2);
        Actor_MarkForDeath(arg0);
    }
}

void EnBee_Update(EnBee *this, GlobalContext *globalCtx) {
    CollisionCheckContext *sp2C;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    s16 temp_v0;
    s16 temp_v0_2;
    EnBee *this = (EnBee *) thisx;

    SkelAnime_FrameUpdateMatrix(&this->unk144);
    if (this->actor.category == 5) {
        temp_v0 = this->unk204;
        if (temp_v0 != 0) {
            this->unk204 = temp_v0 - 1;
        }
        temp_v0_2 = this->unk206;
        if (temp_v0_2 != 0) {
            this->unk206 = temp_v0_2 - 1;
        }
    }
    Audio_PlayActorSound2((Actor *) this, 0x304AU);
    func_80B5AF80((Actor *) this, globalCtx);
    Math_Vec3s_Copy((Vec3s *) &this->actor.shape, &this->actor.world.rot);
    Actor_SetHeight((Actor *) this, 0.0f);
    Actor_SetScale((Actor *) this, 0.01f);
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 10.0f, 40.0f, 40.0f, 0x1DU);
    temp_a1 = &this->unk23C;
    sp28 = temp_a1;
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    temp_a1_2 = &globalCtx->colChkCtx;
    sp2C = temp_a1_2;
    CollisionCheck_SetOC(globalCtx, temp_a1_2, (Collider *) sp28);
    CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) sp28);
    CollisionCheck_SetAT(globalCtx, temp_a1_2, (Collider *) sp28);
}

void EnBee_Draw(EnBee *this, GlobalContext *globalCtx) {
    EnBee *this = (EnBee *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);
    SkelAnime_Draw(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, NULL, NULL, (Actor *) this);
}
