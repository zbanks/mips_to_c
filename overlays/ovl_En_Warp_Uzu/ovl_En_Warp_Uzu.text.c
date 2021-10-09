extern Gfx D_06000EC0;
static ColliderCylinderInit D_80A664C0 = {
    {0, 0, 0x19, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x19, 0x2B, 0xFFEC, {0, 0, 0}},
};
static InitChainEntry D_80A664EC;                   /* unable to generate initializer */
static Vec3f D_80A664FC = {0.0f, 53.0f, -29.0f};



void EnWarpUzu_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnWarpUzu *this = (EnWarpUzu *) thisx;
    EnWarpUzu *temp_a0;

    temp_a0 = this;
    this = this;
    Actor_ProcessInitChain(&temp_a0->actor, &D_80A664EC);
    Collider_InitAndSetCylinder(globalCtx, &this->collider, &this->actor, &D_80A664C0);
    this->actor.targetMode = 0;
    func_80A66208(this, globalCtx);
}

void EnWarpUzu_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnWarpUzu *this = (EnWarpUzu *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void func_80A66208(EnWarpUzu *this, GlobalContext *globalCtx) {
    Vec3f sp24;

    this->actor.textId = 0;
    Matrix_RotateY(this->actor.shape.rot.y, 0U);
    SysMatrix_MultiplyVector3fByState(&D_80A664FC, &sp24);
    Math_Vec3f_Sum(&this->actor.world.pos, &sp24, &this->actor.focus.pos);
    Math_Vec3s_Copy(&this->actor.focus.rot, &this->actor.shape.rot);
    this->actionFunc = func_80A66278;
}

void func_80A66278(EnWarpUzu *this, GlobalContext *globalCtx) {
    Actor *sp24;
    s16 temp_v0;
    s32 phi_a0;
    s32 phi_v1;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        func_80A66384(this, globalCtx);
        return;
    }
    if ((s32) (s16) (Actor_YawBetweenActors(&this->actor, sp24) - this->actor.shape.rot.y) >= 0) {
        phi_a0 = (Actor_YawBetweenActors(&this->actor, sp24) - this->actor.shape.rot.y) << 0x10;
    } else {
        phi_a0 = (s32) (s16) (Actor_YawBetweenActors(&this->actor, sp24) - this->actor.shape.rot.y) * -0x10000;
    }
    temp_v0 = sp24->shape.rot.y - this->actor.shape.rot.y;
    if ((s32) temp_v0 >= 0) {
        phi_v1 = temp_v0 << 0x10;
    } else {
        phi_v1 = (s32) temp_v0 * -0x10000;
    }
    if (((phi_a0 >> 0x10) >= 0x2AAB) && ((phi_v1 >> 0x10) < 0x238E)) {
        func_800B8614(&this->actor, globalCtx, 70.0f);
    }
}

void func_80A66384(EnWarpUzu *this, GlobalContext *globalCtx) {
    globalCtx->nextEntranceIndex = 0x22A0;
    gSaveContext.respawn[0].entranceIndex = globalCtx->nextEntranceIndex;
    func_80169EFC(globalCtx);
    gSaveContext.respawnFlag = -2;
    this->actionFunc = EnWarpUzu_DoNothing;
}

void EnWarpUzu_DoNothing(EnWarpUzu *this, GlobalContext *globalCtx) {
    EnWarpUzu *self = (EnWarpUzu *) this;

}

void EnWarpUzu_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnWarpUzu *this = (EnWarpUzu *) thisx;
    ColliderCylinder *sp1C;
    ColliderCylinder *temp_a2;
    EnWarpUzu *temp_a0;
    EnWarpUzu *temp_a3;

    temp_a3 = this;
    temp_a0 = temp_a3;
    temp_a3->actor.uncullZoneForward = 1000.0f;
    this = temp_a3;
    temp_a3->actionFunc(temp_a0, globalCtx);
    temp_a2 = &this->collider;
    sp1C = temp_a2;
    Collider_UpdateCylinder(&this->actor, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
}

void EnWarpUzu_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnWarpUzu *this = (EnWarpUzu *) thisx;
    func_800BDFC0(globalCtx, &D_06000EC0);
}

