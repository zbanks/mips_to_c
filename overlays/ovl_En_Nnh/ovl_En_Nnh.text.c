extern ? D_06001510;
static ColliderCylinderInit D_80C08A00 = {
    {0xD, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x14, 0x32, 0, {0, 0, 0}},
};



void EnNnh_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnNnh *this = (EnNnh *) thisx;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;

    Actor_SetScale(&this->actor, 0.01f);
    temp_a1 = &this->collider;
    sp20 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &D_80C08A00);
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->actor.targetMode = 1;
    this->actor.focus.pos.y += 30.0f;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    func_80C08828(this);
}

void EnNnh_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnNnh *this = (EnNnh *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void func_80C08828(EnNnh *this) {
    this->actionFunc = func_80C0883C;
}

void func_80C0883C(EnNnh *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a1;

    temp_a1 = globalCtx;
    globalCtx = globalCtx;
    if (func_800B84D0(&this->actor, temp_a1) != 0) {
        func_801518B0(globalCtx, 0x228U, &this->actor);
        func_80C088A4(this);
        return;
    }
    func_800B8614(&this->actor, globalCtx, 100.0f);
}

void func_80C088A4(EnNnh *this) {
    this->actionFunc = func_80C088B8;
}

void func_80C088B8(EnNnh *this, GlobalContext *globalCtx) {
    if (func_800B867C(&this->actor, globalCtx) != 0) {
        func_80C08828(this);
    }
}

void EnNnh_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnNnh *this = (EnNnh *) thisx;
    ColliderCylinder *sp1C;
    ColliderCylinder *temp_a2;
    EnNnh *temp_a3;

    temp_a3 = this;
    this = temp_a3;
    temp_a3->actionFunc(temp_a3, globalCtx);
    temp_a2 = &this->collider;
    sp1C = temp_a2;
    Collider_UpdateCylinder(&this->actor, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
}

void EnNnh_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnNnh *this = (EnNnh *) thisx;
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    temp_a0 = globalCtx->state.gfxCtx;
    sp24 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp24->polyOpa.p;
    sp24->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = sp24;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = sp24->polyOpa.p;
    sp24->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06001510;
    temp_v0_2->words.w0 = 0xDE000000;
}

