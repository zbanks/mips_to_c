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

typedef struct EnGamelupy {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderCylinder unk144;           /* inferred */
    /* 0x0190 */ void (*actionFunc)(EnGamelupy *, GlobalContext *);
    /* 0x0194 */ s32 unk194;                        /* inferred */
    /* 0x0198 */ s16 *unk198;                       /* inferred */
    /* 0x019C */ s16 unk19C;                        /* inferred */
    /* 0x019E */ s16 unk19E;                        /* inferred */
    /* 0x01A0 */ s16 unk1A0;                        /* inferred */
    /* 0x01A2 */ char pad1A2[0x2];                  /* maybe part of unk1A0[2]? */
} EnGamelupy;                                       /* size 0x1A4 */

void EnGamelupy_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnGamelupy *this = (EnGamelupy *) thisx;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;

    Actor_SetScale(&this->actor, 0.03f);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 10.0f);
    temp_a1 = &this->unk144;
    this->actor.shape.yOffset = 700.0f;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &D_80AF6CF0);
    this->actor.gravity = -0.5f;
    this->actor.shape.rot.y = Rand_Next();
    this->unk19C = 0;
    this->unk19E = 0;
    this->unk1A0 = 0x7D0;
    if (this->actor.params == 1) {
        this->unk194 = 1;
    } else {
        this->unk194 = 0;
    }
    func_80AF6944(this);
}

void EnGamelupy_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnGamelupy *this = (EnGamelupy *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk144);
}

void func_80AF6854(EnGamelupy *arg0, GlobalContext *arg1) {
    Vec3f sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 temp_f2;
    f32 temp_f6;
    f32 temp_f6_2;

    sp4C.x = arg0->actor.world.pos.x;
    sp4C.y = arg0->actor.world.pos.y;
    sp4C.z = arg0->actor.world.pos.z;
    temp_f6 = Math_SinS(arg0->unk19E) * 3.0f;
    sp38 = 5.5f;
    sp34 = temp_f6;
    temp_f2 = Math_CosS(arg0->unk19E) * 3.0f;
    temp_f6_2 = -0.05f * temp_f2;
    sp40 = -0.05f * sp34;
    sp48 = temp_f6_2;
    sp3C = temp_f2;
    sp44 = -0.4f;
    EffectSsKiraKira_SpawnDispersed(arg1, &sp4C, (Vec3f *) &sp34, (Vec3f *) &sp40, &D_80AF6D30, &D_80AF6D34, (s16) 0xBB8, 0x28);
    arg0->unk19E += arg0->unk1A0;
}

void func_80AF6944(EnGamelupy *arg0) {
    arg0->actionFunc = func_80AF6958;
}

void func_80AF6958(EnGamelupy *this, GlobalContext *globalCtx) {
    s16 *temp_v0;

    temp_v0 = func_800B6680(globalCtx, 0x1D2, globalCtx);
    if (temp_v0 != 0) {
        this->unk198 = temp_v0;
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

    if ((this->unk144.base.ocFlags1 & 2) != 0) {
        temp_v0 = this->unk198;
        *temp_v0 += 0x32;
        if (this->unk194 == 1) {
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
    arg0->unk19C = 0;
    arg0->gravity = 0.0f;
    Audio_PlayActorSound2(arg0, 0x4803U);
    arg0->unk190 = func_80AF6A78;
}

void func_80AF6A78(EnGamelupy *this, GlobalContext *globalCtx) {
    Actor *temp_v1;
    s16 temp_v0;

    temp_v0 = this->unk19C;
    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if ((s32) temp_v0 >= 0x1F) {
        Actor_MarkForDeath(&this->actor);
    } else {
        this->unk19C = temp_v0 + 1;
        this->actor.world.pos.x = temp_v1->world.pos.x;
        this->actor.world.pos.y = temp_v1->world.pos.y;
        this->actor.world.pos.z = temp_v1->world.pos.z;
        this->actor.world.pos.y += 40.0f;
        globalCtx = globalCtx;
        Actor_SetScale(&this->actor, (30.0f - (f32) this->unk19C) * 0.001f);
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
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, &temp_a2->base);
}

void EnGamelupy_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnGamelupy *this = (EnGamelupy *) thisx;
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 32.0f, 30.0f, 0.0f, 0xCU);
    func_80AF6B40(&this->actor, globalCtx);
}

void EnGamelupy_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnGamelupy *this = (EnGamelupy *) thisx;
    Gfx *sp24;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    func_800B8050(&this->actor, globalCtx, 0);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_v0;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060020;
    sp20 = temp_v0_2;
    sp20->words.w1 = Lib_SegmentedToVirtual(*(&D_80AF6D1C + (this->unk194 * 4)));
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) D_040622C0;
    temp_v0_3->words.w0 = 0xDE000000;
}

