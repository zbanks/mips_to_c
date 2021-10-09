struct _mips2c_stack_EnNnh_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnNnh_Draw {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnNnh_Init {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnNnh_Update {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ ColliderCylinder *sp1C;              /* inferred */
    /* 0x20 */ char pad20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C08828 {};              /* size 0x0 */

struct _mips2c_stack_func_80C0883C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C088A4 {};              /* size 0x0 */

struct _mips2c_stack_func_80C088B8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

extern ? D_06001510;
static ColliderCylinderInit D_80C08A00 = {
    {0xD, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x14, 0x32, 0, {0, 0, 0}},
};

void EnNnh_Init(EnNnh *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    EnNnh *this = (EnNnh *) thisx;

    Actor_SetScale((Actor *) this, 0.01f);
    temp_a1 = &this->collider;
    sp20 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80C08A00);
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->actor.targetMode = 1;
    this->actor.focus.pos.y += 30.0f;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    func_80C08828(this);
}

void EnNnh_Destroy(EnNnh *this, GlobalContext *globalCtx) {
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
    if (func_800B84D0((Actor *) this, temp_a1) != 0) {
        func_801518B0(globalCtx, 0x228U, (Actor *) this);
        func_80C088A4(this);
        return;
    }
    func_800B8614((Actor *) this, globalCtx, 100.0f);
}

void func_80C088A4(EnNnh *this) {
    this->actionFunc = func_80C088B8;
}

void func_80C088B8(EnNnh *this, GlobalContext *globalCtx) {
    if (func_800B867C((Actor *) this, globalCtx) != 0) {
        func_80C08828(this);
    }
}

void EnNnh_Update(EnNnh *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp1C;
    ColliderCylinder *temp_a2;
    EnNnh *temp_a3;
    EnNnh *this = (EnNnh *) thisx;

    temp_a3 = this;
    this = temp_a3;
    temp_a3->actionFunc(temp_a3, globalCtx);
    temp_a2 = &this->collider;
    sp1C = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
}

void EnNnh_Draw(EnNnh *this, GlobalContext *globalCtx) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    EnNnh *this = (EnNnh *) thisx;

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
