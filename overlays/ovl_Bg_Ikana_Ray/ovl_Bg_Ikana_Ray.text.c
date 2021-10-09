extern Gfx D_06001100;
extern void D_06001228;
static InitChainEntry bgIkanaRayCompInit;           /* unable to generate initializer */
static ColliderCylinderInit bgIkanaRayCylinderInit = {
    {0xA, 0x21, 0, 0, 0, 1},
    {0, {0x200000, 0, 0}, {0, 0, 0}, 0x19, 0, 1},
    {0x5A, 0x1A4, 0xFE5C, {0, 0, 0}},
};



void BgIkanaRay_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgIkanaRay *this = (BgIkanaRay *) thisx;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;

    Actor_ProcessInitChain(&this->actor, &bgIkanaRayCompInit);
    temp_a1 = &this->collision;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &bgIkanaRayCylinderInit);
    Collider_UpdateCylinder(&this->actor, temp_a1);
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
    BgIkanaRay *self = (BgIkanaRay *) this;
    self->actor.draw = NULL;
    self->actor.flags |= 0x10;
    self->update = BgIkanaRay_UpdateCheckForActivation;
}

void BgIkanaRay_UpdateCheckForActivation(BgIkanaRay *this, GlobalContext *globalCtx) {
    BgIkanaRay *self = (BgIkanaRay *) this;
    if (Flags_GetSwitch(globalCtx, self->actor.params & 0x7F) != 0) {
        BgIkanaRay_SetActivated(self);
    }
}

void BgIkanaRay_SetActivated(BgIkanaRay *this) {
    BgIkanaRay *self = (BgIkanaRay *) this;
    self->actor.draw = BgIkanaRay_Draw;
    self->actor.flags &= -0x11;
    self->update = BgIkanaRay_UpdateActivated;
}

void BgIkanaRay_UpdateActivated(BgIkanaRay *this, GlobalContext *globalCtx) {
    BgIkanaRay *self = (BgIkanaRay *) this;
    CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &self->collision.base);
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

