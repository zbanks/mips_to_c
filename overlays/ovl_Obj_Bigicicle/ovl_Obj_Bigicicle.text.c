typedef struct ObjBigicicle {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(ObjBigicicle *, GlobalContext *);
    /* 0x148 */ u8 unk148;                          /* inferred */
    /* 0x149 */ u8 unk149;                          /* inferred */
    /* 0x14A */ s16 unk14A;                         /* inferred */
    /* 0x14C */ ColliderCylinder unk14C;            /* inferred */
    /* 0x198 */ ColliderCylinder unk198;            /* inferred */
} ObjBigicicle;                                     /* size = 0x1E4 */

struct _mips2c_stack_ObjBigicicle_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjBigicicle_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjBigicicle_Init {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_ObjBigicicle_Update {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ ColliderCylinder *sp30;              /* inferred */
    /* 0x34 */ ColliderCylinder *sp34;              /* inferred */
    /* 0x38 */ CollisionCheckContext *sp38;         /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad50[0x8];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80AE8DE4 {
    /* 0x00 */ char pad0[0x8C];
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ char padA4[0x4];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_80AE8FD4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AE9090 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AE9180 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AE9258 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AE939C {
    /* 0x00 */ char pad0[0x8C];
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ char padA4[0x4];
};                                                  /* size = 0xA8 */

void func_80AE8DE4(ObjBigicicle *arg0, GlobalContext *arg1); /* static */
extern Gfx D_060009B0;
extern Gfx D_060014F0;
static ColliderCylinderInit D_80AE9820 = {
    {0xC, 0, 9, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0x3820, 0, 0}, 0, 1, 1},
    {0x17, 0x44, 0xFFD8, {0, 0, 0}},
};
static ColliderCylinderInit D_80AE984C = {
    {0xC, 0, 0xD, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x1F, 0x5A, 0xFF6A, {0, 0, 0}},
};
static void *D_80AE9878 = (void *)0x6001678;
static Vec3f D_80AE987C = {0.0f, -1.0f, 0.0f};
static InitChainEntry D_80AE9888[2];                /* unable to generate initializer */
static s32 D_80AE9890 = 0;
static Color_RGBA8 D_80AE9894 = {0xFA, 0xFA, 0xFA, 0xFF};
static Color_RGBA8 D_80AE9898 = {0xB4, 0xB4, 0xB4, 0xFF};
static ? D_80AE989C;                                /* unable to generate initializer */
static ? D_80AE98A8;                                /* unable to generate initializer */

void ObjBigicicle_Init(ObjBigicicle *this, GlobalContext *globalCtx) {
    f32 sp30;
    f32 sp28;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_a1_2;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_t7;
    s32 temp_v0;
    s32 phi_v0;
    ObjBigicicle *this = (ObjBigicicle *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80AE9888);
    temp_v0 = ((s32) this->actor.params >> 8) & 0xFF;
    phi_v0 = temp_v0;
    if ((temp_v0 == 0) || (temp_v0 == 0xFF)) {
        phi_v0 = 0x3C;
    }
    temp_f2 = (f32) phi_v0;
    sp28 = temp_f2;
    Actor_SetScale((Actor *) this, temp_f2 * 0.001f);
    this->actor.params &= 0xFF;
    this->actor.colChkInfo.mass = 0xFF;
    temp_a1 = &this->unk14C;
    temp_f0 = temp_f2 * 0.016666668f;
    sp24 = temp_a1;
    sp30 = temp_f0;
    Collider_InitAndSetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80AE9820);
    temp_a1_2 = &this->unk198;
    this->unk14C.dim.radius = (s16) (s32) ((f32) this->unk14C.dim.radius * temp_f0);
    this->unk14C.dim.height = (s16) (s32) ((f32) this->unk14C.dim.height * temp_f0);
    this->unk14C.dim.yShift = (s16) (s32) ((f32) this->unk14C.dim.yShift * temp_f0);
    sp28 = (bitwise f32) temp_a1_2;
    Collider_InitAndSetCylinder(globalCtx, temp_a1_2, (Actor *) this, &D_80AE984C);
    this->unk198.dim.radius = (s16) (s32) ((f32) this->unk198.dim.radius * temp_f0);
    this->unk198.dim.height = (s16) (s32) ((f32) this->unk198.dim.height * temp_f0);
    this->unk198.dim.yShift = (s16) (s32) ((f32) this->unk198.dim.yShift * temp_f0);
    if (Flags_GetSwitch(globalCtx, (s32) this->actor.params) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_t7 = this->actor.shape.rot.x;
    this->actor.shape.rot.x = 0x4000;
    this->unk148 = (u8) temp_t7;
    Collider_UpdateCylinder((Actor *) this, sp24);
    Collider_UpdateCylinder((Actor *) this, (bitwise ColliderCylinder *) sp28);
    if (D_80AE9890 == 0) {
        D_80AE9878 = Lib_SegmentedToVirtual(D_80AE9878);
        D_80AE9890 = 1;
    }
    this->unk149 = 0;
    this->actionFunc = func_80AE8FD4;
}

void ObjBigicicle_Destroy(ObjBigicicle *this, GlobalContext *globalCtx) {
    ObjBigicicle *this = (ObjBigicicle *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk14C);
    Collider_DestroyCylinder(globalCtx, &this->unk198);
}

void func_80AE8DE4(ObjBigicicle *arg0, GlobalContext *arg1) {
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 *temp_s2;
    f32 *temp_s7;
    f32 temp_f20;
    s32 temp_s1;
    s32 phi_s1;

    temp_f20 = arg0->actor.scale.x * 16.666666f;
    temp_s7 = &sp98;
    temp_s2 = &sp8C;
    phi_s1 = 0;
    do {
        sp98 = (randPlusMinusPoint5Scaled(4.0f) * temp_f20) + arg0->actor.world.pos.x;
        sp9C = ((Rand_ZeroFloat(20.0f) - 35.0f) * temp_f20) + arg0->actor.world.pos.y;
        spA0 = (randPlusMinusPoint5Scaled(4.0f) * temp_f20) + arg0->actor.world.pos.z;
        sp8C = randPlusMinusPoint5Scaled(13.0f);
        sp90 = Rand_ZeroFloat(2.0f);
        sp94 = randPlusMinusPoint5Scaled(13.0f);
        EffectSsHahen_Spawn(arg1, (Vec3f *) temp_s7, (Vec3f *) temp_s2, &D_80AE987C, (s16) 2, (s16) (s32) ((Rand_ZeroFloat(20.0f) + 30.0f) * temp_f20), (s16) 0x1AD, (s16) 0x28, &D_060009B0);
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0xA);
    sp98 = arg0->actor.world.pos.x;
    sp9C = arg0->actor.world.pos.y - (25.0f * temp_f20);
    spA0 = arg0->actor.world.pos.z;
    Audio_PlaySoundAtPosition(arg1, (Vec3f *) temp_s7, 0x28, 0x288BU);
}

void func_80AE8FD4(ObjBigicicle *this, GlobalContext *globalCtx) {
    ObjBigicicle *temp_a0;
    ObjBigicicle *temp_a2;

    temp_a2 = this;
    if (((temp_a2->unk14C.base.acFlags & 2) != 0) || (((temp_a2->unk198.base.acFlags & 2) != 0) && ((temp_a2->unk198.info.acHitInfo->toucher.dmgFlags & 0x3820) != 0))) {
        if ((temp_a2->unk148 == 0) || (temp_a0 = temp_a2, (temp_a2->unk149 == 1))) {
            this = temp_a2;
            ActorCutscene_SetIntentToPlay((s16) temp_a2->actor.cutscene);
            this->actionFunc = func_80AE9090;
            return;
        }
        this = temp_a2;
        func_80AE8DE4(temp_a0, (GlobalContext *) temp_a2);
        this->unk14A = 0x32;
        this->unk149 += 1;
        this->actionFunc = func_80AE9180;
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_80AE9090(ObjBigicicle *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    s32 temp_f10;

    if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
        this->unk149 += 1;
        func_80AE8DE4(this, globalCtx);
        if (this->unk149 == 2) {
            temp_f0 = this->actor.scale.y * 2100.0f;
            this->actor.flags |= 0x10;
            temp_f10 = (s32) temp_f0;
            this->actor.shape.yOffset = 2100.0f;
            this->actionFunc = func_80AE9258;
            this->actor.world.pos.y -= temp_f0;
            this->unk14C.dim.yShift += (s16) temp_f10;
            this->unk198.dim.yShift += (s16) temp_f10;
            return;
        }
        this->unk14A = 0x32;
        this->actionFunc = func_80AE9180;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
}

void func_80AE9180(ObjBigicicle *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    this->unk14A += -1;
    temp_v0 = this->unk14A;
    if ((s32) temp_v0 > 0) {
        this->unk14A = temp_v0 - 1;
        this->actor.shape.rot.x = (s32) (randPlusMinusPoint5Scaled(1408.0f) * 0.02f * (f32) this->unk14A) + 0x4000;
        this->actor.shape.rot.z = (s16) (s32) (randPlusMinusPoint5Scaled(1408.0f) * 0.02f * (f32) this->unk14A);
        return;
    }
    this->actor.shape.rot.x = 0x4000;
    this->actor.shape.rot.z = 0;
    ActorCutscene_Stop((s16) this->actor.cutscene);
    this->actionFunc = func_80AE8FD4;
}

void func_80AE9258(ObjBigicicle *this, GlobalContext *globalCtx) {
    Actor *temp_s0;
    Actor *temp_s0_2;
    f32 temp_f0;
    Actor *phi_s0;

    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
    temp_s0 = globalCtx->actorCtx.actorList[7].first;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
loop_1:
        if ((phi_s0->id == 0x8E) && (temp_f0 = this->actor.world.pos.y - phi_s0->world.pos.y, (temp_f0 < (f32) phi_s0->unk18E)) && (temp_f0 > 0.0f) && (Actor_XZDistanceBetweenActors((Actor *) this, phi_s0) < (f32) phi_s0->unk18C)) {
            Actor_SetSwitchFlag(globalCtx, (s32) this->actor.params);
            this->actionFunc = func_80AE939C;
            return;
        }
        temp_s0_2 = phi_s0->next;
        phi_s0 = temp_s0_2;
        if (temp_s0_2 == 0) {
            goto block_7;
        }
        goto loop_1;
    }
block_7:
    if ((this->actor.bgCheckFlags & 1) != 0) {
        this->actionFunc = func_80AE939C;
        return;
    }
    Collider_UpdateCylinder((Actor *) this, &this->unk14C);
    Collider_UpdateCylinder((Actor *) this, &this->unk198);
}

void func_80AE939C(ObjBigicicle *this, GlobalContext *globalCtx) {
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 *temp_s3;
    f32 *temp_s4;
    f32 temp_f0;
    f32 temp_f20;
    s32 temp_s0;
    s32 phi_s0;

    temp_f20 = this->actor.scale.x * 16.666666f;
    temp_s4 = &sp8C;
    temp_s3 = &sp98;
    phi_s0 = 0;
    do {
        sp8C = randPlusMinusPoint5Scaled(15.0f);
        sp90 = Rand_ZeroFloat(7.0f) + 3.0f;
        temp_f0 = randPlusMinusPoint5Scaled(15.0f);
        sp94 = temp_f0;
        sp98 = this->actor.world.pos.x + (sp8C * 5.0f * temp_f20);
        sp9C = this->actor.world.pos.y + (sp90 * 7.0f * temp_f20);
        spA0 = this->actor.world.pos.z + (temp_f0 * 5.0f * temp_f20);
        EffectSsHahen_Spawn(globalCtx, (Vec3f *) temp_s3, (Vec3f *) temp_s4, &D_80AE987C, (s16) 2, (s16) (s32) ((Rand_ZeroFloat(30.0f) + 40.0f) * temp_f20), (s16) 0x1AD, (s16) 0x1E, &D_060009B0);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x14);
    Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x28, 0x28FAU);
    ActorCutscene_Stop((s16) this->actor.cutscene);
    Actor_MarkForDeath((Actor *) this);
}

void ObjBigicicle_Update(ObjBigicicle *this, GlobalContext *globalCtx) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp3C;
    CollisionCheckContext *sp38;
    ColliderCylinder *sp34;
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a2;
    ColliderCylinder *temp_a2_2;
    CollisionCheckContext *temp_a1;
    s32 phi_v0;
    s32 phi_v0_2;
    ObjBigicicle *this = (ObjBigicicle *) thisx;

    this->actionFunc(this, globalCtx);
    if (Rand_ZeroOne() < 0.05f) {
        sp3C = Rand_ZeroFloat(65.0f);
        phi_v0 = 1;
        phi_v0_2 = 1;
        if (Rand_ZeroOne() < 0.5f) {
            phi_v0 = -1;
        }
        sp44 = ((f32) phi_v0 * (215.0f + sp3C) * this->actor.scale.x) + this->actor.world.pos.x;
        sp48 = ((((Rand_ZeroFloat(1400.0f) + -150.0f) - 2100.0f) + this->actor.shape.yOffset) * this->actor.scale.y) + this->actor.world.pos.y;
        sp3C = Rand_ZeroFloat(65.0f);
        if (Rand_ZeroOne() < 0.5f) {
            phi_v0_2 = -1;
        }
        sp4C = ((f32) phi_v0_2 * (215.0f + sp3C) * this->actor.scale.z) + this->actor.world.pos.z;
        EffectSsKiraKira_SpawnDispersed(globalCtx, (Vec3f *) &sp44, &D_801D15B0, &D_801D15B0, &D_80AE9894, &D_80AE9898, (s16) 0x7D0, 5);
    }
    temp_a1 = &globalCtx->colChkCtx;
    temp_a2 = &this->unk14C;
    sp30 = temp_a2;
    sp38 = temp_a1;
    CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2);
    temp_a2_2 = &this->unk198;
    sp34 = temp_a2_2;
    CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2_2);
    CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_a2);
    CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_a2_2);
}

void ObjBigicicle_Draw(ObjBigicicle *this, GlobalContext *globalCtx) {
    ObjBigicicle *this = (ObjBigicicle *) thisx;
    func_800BE03C(globalCtx, *(&D_80AE989C + (this->unk149 * 4)));
    func_800BE03C(globalCtx, *(&D_80AE98A8 + (this->unk149 * 4)));
    AnimatedMat_Draw(globalCtx, (AnimatedMaterial *) D_80AE9878);
    func_800BE03C(globalCtx, &D_060014F0);
}
