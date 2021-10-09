typedef struct EnGamelupy {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ void (*actionFunc)(EnGamelupy *, GlobalContext *);
    /* 0x194 */ s32 unk_194;                        /* inferred */
    /* 0x198 */ s16 *unk_198;                       /* inferred */
    /* 0x19C */ s16 unk_19C;                        /* inferred */
    /* 0x19E */ s16 unk_19E;                        /* inferred */
    /* 0x1A0 */ s16 unk_1A0;                        /* inferred */
    /* 0x1A2 */ char pad_1A2[0x2];
} EnGamelupy;                                       /* size = 0x1A4 */

struct _mips2c_stack_EnGamelupy_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnGamelupy_Draw {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x10];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnGamelupy_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnGamelupy_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AF6854 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad_4C[0xC];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80AF6944 {};              /* size 0x0 */

struct _mips2c_stack_func_80AF6958 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF6994 {};              /* size 0x0 */

struct _mips2c_stack_func_80AF69A8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF6A38 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF6A78 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AF6B40 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ColliderCylinder *sp1C;              /* inferred */
};                                                  /* size = 0x20 */

s16 *func_800B6680(GlobalContext *, ?, GlobalContext *); /* extern */
void func_80AF6854(EnGamelupy *arg0, GlobalContext *arg1); /* static */
void func_80AF6944(EnGamelupy *arg0);               /* static */
void func_80AF6994(EnGamelupy *arg0);               /* static */
void func_80AF6A38(EnGamelupy *arg0, EnGamelupy *); /* static */
void func_80AF6B40(Actor *arg0, GlobalContext *arg1); /* static */
static ColliderCylinderInit D_80AF6CF0 = {
    {0xA, 0, 0, 0xD, 0x20, 1},
    {4, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0xA, 0x1E, 0, {0, 0, 0}},
};
static ? D_80AF6D1C;                                /* unable to generate initializer */
static Color_RGBA8 D_80AF6D30 = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80AF6D34 = {0x64, 0xC8, 0, 0xFF};

void EnGamelupy_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    EnGamelupy *this = (EnGamelupy *) thisx;

    Actor_SetScale((Actor *) this, 0.03f);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 10.0f);
    temp_a1 = &this->unk_144;
    this->actor.shape.yOffset = 700.0f;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80AF6CF0);
    this->actor.gravity = -0.5f;
    this->actor.shape.rot.y = Rand_Next();
    this->unk_19C = 0;
    this->unk_19E = 0;
    this->unk_1A0 = 0x7D0;
    if (this->actor.params == 1) {
        this->unk_194 = 1;
    } else {
        this->unk_194 = 0;
    }
    func_80AF6944(this);
}

void EnGamelupy_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnGamelupy *this = (EnGamelupy *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_144);
}

void func_80AF6854(EnGamelupy *arg0, GlobalContext *arg1) {
    ? sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 temp_f2;
    f32 temp_f6;
    f32 temp_f6_2;

    sp4C.unk_0 = (s32) arg0->actor.world.pos.x;
    sp4C.unk_4 = (s32) arg0->actor.world.pos.y;
    sp4C.unk_8 = (s32) arg0->actor.world.pos.z;
    temp_f6 = Math_SinS(arg0->unk_19E) * 3.0f;
    sp38 = 5.5f;
    sp34 = temp_f6;
    temp_f2 = Math_CosS(arg0->unk_19E) * 3.0f;
    temp_f6_2 = -0.05f * temp_f2;
    sp40 = -0.05f * sp34;
    sp48 = temp_f6_2;
    sp3C = temp_f2;
    sp44 = -0.4f;
    EffectSsKiraKira_SpawnDispersed(arg1, (Vec3f *) &sp4C, (Vec3f *) &sp34, (Vec3f *) &sp40, &D_80AF6D30, &D_80AF6D34, (s16) 0xBB8, 0x28);
    arg0->unk_19E += arg0->unk_1A0;
}

void func_80AF6944(EnGamelupy *arg0) {
    arg0->actionFunc = func_80AF6958;
}

void func_80AF6958(EnGamelupy *this, GlobalContext *globalCtx) {
    s16 *temp_v0;

    temp_v0 = func_800B6680(globalCtx, 0x1D2, globalCtx);
    if (temp_v0 != 0) {
        this->unk_198 = temp_v0;
        func_80AF6994(this);
    }
}

void func_80AF6994(EnGamelupy *arg0) {
    arg0->actionFunc = func_80AF69A8;
}

void func_80AF69A8(EnGamelupy *this, GlobalContext *globalCtx) {
    EnGamelupy *temp_a0;
    EnGamelupy *temp_a1;
    s16 *temp_v0;

    if ((this->unk_144.base.ocFlags1 & 2) != 0) {
        temp_v0 = this->unk_198;
        *temp_v0 += 0x32;
        if (this->unk_194 == 1) {
            this = this;
            func_801159EC(5);
        } else {
            this = this;
            func_801159EC(1);
        }
        temp_a1 = this;
        temp_a0 = temp_a1;
        this = temp_a1;
        func_80AF6A38(temp_a0, temp_a1);
    }
    this->actor.shape.rot.y += 0x1F4;
}

void func_80AF6A38(Actor *arg0) {
    arg0->unk_19C = 0;
    arg0->gravity = 0.0f;
    Audio_PlayActorSound2(arg0, 0x4803U);
    arg0->unk_190 = func_80AF6A78;
}

void func_80AF6A78(EnGamelupy *this, GlobalContext *globalCtx) {
    Actor *temp_v1;
    s16 temp_v0;

    temp_v0 = this->unk_19C;
    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if ((s32) temp_v0 >= 0x1F) {
        Actor_MarkForDeath((Actor *) this);
    } else {
        this->unk_19C = temp_v0 + 1;
        this->actor.world.pos.x = temp_v1->world.pos.x;
        this->actor.world.pos.y = temp_v1->world.pos.y;
        this->actor.world.pos.z = temp_v1->world.pos.z;
        this->actor.world.pos.y += 40.0f;
        globalCtx = globalCtx;
        Actor_SetScale((Actor *) this, (30.0f - (f32) this->unk_19C) * 0.001f);
        func_80AF6854(this, globalCtx);
    }
    this->actor.shape.rot.y += 0x3E8;
}

void func_80AF6B40(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x144;
    sp1C = temp_a2;
    Collider_UpdateCylinder(arg0, temp_a2);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, (Collider *) temp_a2);
}

void EnGamelupy_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnGamelupy *this = (EnGamelupy *) thisx;
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 32.0f, 30.0f, 0.0f, 0xCU);
    func_80AF6B40((Actor *) this, globalCtx);
}

void EnGamelupy_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp24;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    EnGamelupy *this = (EnGamelupy *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    func_800B8050((Actor *) this, globalCtx, 0);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_v0;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060020;
    sp20 = temp_v0_2;
    sp20->words.w1 = Lib_SegmentedToVirtual(*(&D_80AF6D1C + (this->unk_194 * 4)));
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) D_040622C0;
    temp_v0_3->words.w0 = 0xDE000000;
}
