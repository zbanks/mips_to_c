struct _mips2c_stack_BgIkanaRay_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgIkanaRay_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgIkanaRay_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_BgIkanaRay_SetActivated {};    /* size 0x0 */

struct _mips2c_stack_BgIkanaRay_SetDeactivated {};  /* size 0x0 */

struct _mips2c_stack_BgIkanaRay_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgIkanaRay_UpdateActivated {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgIkanaRay_UpdateCheckForActivation {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

extern Gfx D_06001100;
extern void D_06001228;
static InitChainEntry bgIkanaRayCompInit[5];        /* unable to generate initializer */
static ColliderCylinderInit bgIkanaRayCylinderInit = {
    {0xA, 0x21, 0, 0, 0, 1},
    {0, {0x200000, 0, 0}, {0, 0, 0}, 0x19, 0, 1},
    {0x5A, 0x1A4, 0xFE5C, {0, 0, 0}},
};

void BgIkanaRay_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    BgIkanaRay *this = (BgIkanaRay *) thisx;

    Actor_ProcessInitChain((Actor *) this, bgIkanaRayCompInit);
    temp_a1 = &this->collision;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &bgIkanaRayCylinderInit);
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    this->animatedTextures = Lib_SegmentedToVirtual(&D_06001228);
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        BgIkanaRay_SetActivated(this);
        return;
    }
    BgIkanaRay_SetDeactivated(this);
}

void BgIkanaRay_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgIkanaRay *this = (BgIkanaRay *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collision);
}

void BgIkanaRay_SetDeactivated(BgIkanaRay *this) {
    this->actor.draw = NULL;
    this->actor.flags |= 0x10;
    this->update = BgIkanaRay_UpdateCheckForActivation;
}

void BgIkanaRay_UpdateCheckForActivation(BgIkanaRay *this, GlobalContext *globalCtx) {
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        BgIkanaRay_SetActivated(this);
    }
}

void BgIkanaRay_SetActivated(BgIkanaRay *this) {
    this->actor.draw = BgIkanaRay_Draw;
    this->actor.flags &= -0x11;
    this->update = BgIkanaRay_UpdateActivated;
}

void BgIkanaRay_UpdateActivated(BgIkanaRay *this, GlobalContext *globalCtx) {
    CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->collision);
}

void BgIkanaRay_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgIkanaRay *this = (BgIkanaRay *) thisx;
    this->update(this, globalCtx);
}

void BgIkanaRay_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgIkanaRay *this = (BgIkanaRay *) thisx;
    AnimatedMat_Draw(globalCtx, this->animatedTextures);
    func_800BE03C(globalCtx, &D_06001100);
}
