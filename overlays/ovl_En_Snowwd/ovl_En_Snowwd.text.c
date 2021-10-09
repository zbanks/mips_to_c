extern ? D_06000198;
extern void D_06001AA0;
static ColliderCylinderInit D_80AF7A90 = {
    {0xD, 0, 0xD, 0x39, 0x10, 1},
    {5, {0, 0, 0}, {0x100020A, 0, 0}, 0, 1, 1},
    {0x12, 0x3C, 0, {0, 0, 0}},
};
static Vec3f D_80AF7ABC = {0.0f, 0.0f, 0.0f};
static Vec3f D_80AF7AC8 = {0.0f, -4.0f, 0.0f};
static Color_RGBA8 D_80AF7AD4 = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80AF7AD8 = {0xC8, 0xC8, 0xDC, 0};

typedef struct EnSnowwd {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderCylinder unk144;           /* inferred */
    /* 0x0190 */ s16 unk190;                        /* inferred */
    /* 0x0192 */ char pad192[0x2];                  /* maybe part of unk190[2]? */
    /* 0x0194 */ void (*actionFunc)(EnSnowwd *, GlobalContext *);
} EnSnowwd;                                         /* size 0x198 */

void EnSnowwd_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnSnowwd *this = (EnSnowwd *) thisx;
    EnSnowwd *temp_a2;

    temp_a2 = this;
    temp_a2->actor.home.rot.z = 0;
    temp_a2->actor.home.rot.y = 0;
    temp_a2->unk190 = 0;
    temp_a2->actor.uncullZoneForward = 4000.0f;
    temp_a2->actor.uncullZoneScale = 2000.0f;
    temp_a2->actor.uncullZoneDownward = 2400.0f;
    this = temp_a2;
    Collider_InitAndSetCylinder(globalCtx, &temp_a2->unk144, &temp_a2->actor, &D_80AF7A90);
    Actor_SetScale(&this->actor, 1.0f);
    this->actionFunc = func_80AF76F0;
}

void EnSnowwd_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnSnowwd *this = (EnSnowwd *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk144);
}

void func_80AF76F0(EnSnowwd *this, GlobalContext *globalCtx) {
    f32 sp54;
    f32 sp4C;
    Vec3f sp48;
    ColliderCylinder *sp40;
    CollisionCheckContext *sp3C;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    PosRot *temp_t9;
    s16 temp_v0_2;
    u8 temp_v0;

    temp_v0 = this->unk144.base.acFlags;
    if ((temp_v0 & 2) != 0) {
        this->unk144.base.acFlags = temp_v0 & 0xFFFD;
        Audio_PlayActorSound2(&this->actor, 0x1837U);
    }
    if (this->actor.home.rot.y != 0) {
        this->unk190 = 0x15;
        this->actor.home.rot.y = 0;
        if (this->actor.home.rot.z == 0) {
            if (((s32) (this->actor.params & 0xF80) >> 7) < 0x10) {
                sp48.x = this->actor.world.pos.x;
                sp48.y = this->actor.world.pos.y;
                sp48.z = this->actor.world.pos.z;
                sp4C += 200.0f;
                Item_DropCollectibleRandom(globalCtx, NULL, &sp48, (s16) (((s32) (this->actor.params & 0xF80) >> 7) * 0x10));
            }
            this->actor.home.rot.z = 1;
        }
    }
    temp_a1 = &this->unk144;
    if (this->actor.xzDistToPlayer < 600.0f) {
        sp40 = temp_a1;
        Collider_UpdateCylinder(&this->actor, temp_a1);
        temp_a1_2 = &globalCtx->colChkCtx;
        sp3C = temp_a1_2;
        CollisionCheck_SetAC(globalCtx, temp_a1_2, &sp40->base);
        CollisionCheck_SetOC(globalCtx, temp_a1_2, &sp40->base);
    }
    temp_v0_2 = this->unk190;
    if ((s32) temp_v0_2 > 0) {
        this->unk190 = temp_v0_2 - 1;
        temp_t9 = &this->actor.world;
        sp3C = (CollisionCheckContext *) temp_t9;
        sp54 = Math_SinS((s16) ((this->unk190 ^ 0xFFFF) * 0x3332)) * 250.0f;
        this->actor.shape.rot.x = (s16) (s32) (Math_CosS((s16) (this->actor.yawTowardsPlayer - this->actor.shape.rot.y)) * sp54);
        this->actor.shape.rot.z = (s16) (s32) (Math_SinS((s16) (this->actor.yawTowardsPlayer - this->actor.shape.rot.y)) * sp54);
        sp48.x = temp_t9->pos.x;
        sp48.y = temp_t9->pos.y;
        sp48.z = temp_t9->pos.z;
        sp48.x += randPlusMinusPoint5Scaled(80.0f);
        sp48.y += 100.0f + Rand_ZeroFloat(30.0f);
        sp48.z += randPlusMinusPoint5Scaled(80.0f);
        func_800B0EB0(globalCtx, &sp48, &D_80AF7AC8, &D_80AF7ABC, &D_80AF7AD4, &D_80AF7AD8, (s16) 0xC8, (s16) 0xA, (s16) 0x14);
    }
}

void EnSnowwd_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnSnowwd *this = (EnSnowwd *) thisx;
    this->actionFunc(this, globalCtx);
}

void EnSnowwd_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnSnowwd *this = (EnSnowwd *) thisx;
    Gfx *sp24;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_s0;

    temp_s0 = globalCtx->state.gfxCtx;
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_v0;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    func_8012C28C(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060020;
    sp20 = temp_v0_2;
    sp20->words.w1 = Lib_SegmentedToVirtual(&D_06001AA0);
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) &D_06000198;
    temp_v0_3->words.w0 = 0xDE000000;
}

