typedef struct EnSnowwd {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ s16 unk_190;                        /* inferred */
    /* 0x192 */ char pad_192[0x2];
    /* 0x194 */ void (*actionFunc)(EnSnowwd *, GlobalContext *);
} EnSnowwd;                                         /* size = 0x198 */

struct _mips2c_stack_EnSnowwd_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnSnowwd_Draw {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnSnowwd_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnSnowwd_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF76F0 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ CollisionCheckContext *sp3C;         /* inferred */
    /* 0x40 */ ColliderCylinder *sp40;              /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x8];
};                                                  /* size = 0x60 */

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

void EnSnowwd_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnSnowwd *temp_a2;
    EnSnowwd *this = (EnSnowwd *) thisx;

    temp_a2 = this;
    temp_a2->actor.home.rot.z = 0;
    temp_a2->actor.home.rot.y = 0;
    temp_a2->unk_190 = 0;
    temp_a2->actor.uncullZoneForward = 4000.0f;
    temp_a2->actor.uncullZoneScale = 2000.0f;
    temp_a2->actor.uncullZoneDownward = 2400.0f;
    this = temp_a2;
    Collider_InitAndSetCylinder(globalCtx, &temp_a2->unk_144, (Actor *) temp_a2, &D_80AF7A90);
    Actor_SetScale((Actor *) this, 1.0f);
    this->actionFunc = func_80AF76F0;
}

void EnSnowwd_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnSnowwd *this = (EnSnowwd *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_144);
}

void func_80AF76F0(EnSnowwd *this, GlobalContext *globalCtx) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    ColliderCylinder *sp40;
    CollisionCheckContext *sp3C;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    PosRot *temp_t9;
    s16 temp_v0_2;
    u8 temp_v0;

    temp_v0 = this->unk_144.base.acFlags;
    if ((temp_v0 & 2) != 0) {
        this->unk_144.base.acFlags = temp_v0 & 0xFFFD;
        Audio_PlayActorSound2((Actor *) this, 0x1837U);
    }
    if (this->actor.home.rot.y != 0) {
        this->unk_190 = 0x15;
        this->actor.home.rot.y = 0;
        if (this->actor.home.rot.z == 0) {
            if (((s32) (this->actor.params & 0xF80) >> 7) < 0x10) {
                sp48.unk_0 = this->actor.world.pos.x;
                (&sp48)[1] = this->actor.world.pos.y;
                (&sp48)[2] = this->actor.world.pos.z;
                sp4C += 200.0f;
                Item_DropCollectibleRandom(globalCtx, NULL, (Vec3f *) &sp48, (s16) (((s32) (this->actor.params & 0xF80) >> 7) * 0x10));
            }
            this->actor.home.rot.z = 1;
        }
    }
    temp_a1 = &this->unk_144;
    if (this->actor.xzDistToPlayer < 600.0f) {
        sp40 = temp_a1;
        Collider_UpdateCylinder((Actor *) this, temp_a1);
        temp_a1_2 = &globalCtx->colChkCtx;
        sp3C = temp_a1_2;
        CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) sp40);
        CollisionCheck_SetOC(globalCtx, temp_a1_2, (Collider *) sp40);
    }
    temp_v0_2 = this->unk_190;
    if ((s32) temp_v0_2 > 0) {
        this->unk_190 = temp_v0_2 - 1;
        temp_t9 = &this->actor.world;
        sp3C = (CollisionCheckContext *) temp_t9;
        sp54 = Math_SinS((s16) ((this->unk_190 ^ 0xFFFF) * 0x3332)) * 250.0f;
        this->actor.shape.rot.x = (s16) (s32) (Math_CosS((s16) (this->actor.yawTowardsPlayer - this->actor.shape.rot.y)) * sp54);
        this->actor.shape.rot.z = (s16) (s32) (Math_SinS((s16) (this->actor.yawTowardsPlayer - this->actor.shape.rot.y)) * sp54);
        sp48.unk_0 = temp_t9->pos.x;
        (&sp48)[1] = temp_t9->pos.y;
        (&sp48)[2] = temp_t9->pos.z;
        sp48 += randPlusMinusPoint5Scaled(80.0f);
        sp4C += 100.0f + Rand_ZeroFloat(30.0f);
        sp50 += randPlusMinusPoint5Scaled(80.0f);
        func_800B0EB0(globalCtx, (Vec3f *) &sp48, &D_80AF7AC8, &D_80AF7ABC, &D_80AF7AD4, &D_80AF7AD8, (s16) 0xC8, (s16) 0xA, (s16) 0x14);
    }
}

void EnSnowwd_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnSnowwd *this = (EnSnowwd *) thisx;
    this->actionFunc(this, globalCtx);
}

void EnSnowwd_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp24;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_s0;
    EnSnowwd *this = (EnSnowwd *) thisx;

    temp_s0 = globalCtx->state.gfxCtx;
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_v0;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    func_8012C28C(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xDB060020;
    sp20 = temp_v0_2;
    sp20->words.w1 = Lib_SegmentedToVirtual(&D_06001AA0);
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w1 = (u32) &D_06000198;
    temp_v0_3->words.w0 = 0xDE000000;
}
