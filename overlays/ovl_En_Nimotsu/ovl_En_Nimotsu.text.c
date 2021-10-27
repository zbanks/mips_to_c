typedef struct EnNimotsu {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char pad_144[0x48];
    /* 0x18C */ ColliderCylinder unk_18C;           /* inferred */
    /* 0x1D8 */ u16 unk_1D8;                        /* inferred */
    /* 0x1DA */ s16 unk_1DA;                        /* inferred */
} EnNimotsu;                                        /* size = 0x1DC */

struct _mips2c_stack_EnNimotsu_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnNimotsu_Draw {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ GraphicsContext *sp2C;               /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EnNimotsu_Init {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ColliderCylinder *sp18;              /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnNimotsu_Update {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x8];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80BE1C80 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
};                                                  /* size = 0x28 */

void func_80BE1C80(Actor *arg0, GlobalContext *arg1); /* static */
extern ? D_06013380;
static ColliderCylinderInit D_80BE1FB0 = {
    {0xA, 0, 0, 0x39, 0x20, 1},
    {4, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0xA, 0x1E, 0, {0, 0, 0}},
};

void func_80BE1C80(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x18C;
    sp24 = temp_a2;
    Collider_UpdateCylinder(arg0, temp_a2);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, (Collider *) temp_a2);
    Actor_UpdateBgCheckInfo(arg1, arg0, 32.0f, 30.0f, 0.0f, 4U);
}

void EnNimotsu_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp18;
    ColliderCylinder *temp_a1;
    EnNimotsu *this = (EnNimotsu *) thisx;

    temp_a1 = &this->unk_18C;
    sp18 = temp_a1;
    this = this;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_InitAndSetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80BE1FB0);
    this->unk_1DA = 0xA;
    this->actor.gravity = -0.5f;
    Actor_SetScale((Actor *) this, 0.01f);
}

void EnNimotsu_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnNimotsu *this = (EnNimotsu *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_18C);
}

void EnNimotsu_Update(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    s16 temp_v1;
    s16 phi_v0;
    EnNimotsu *this = (EnNimotsu *) thisx;

    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    if (((this->unk_1D8 & 1) == 0) && ((this->actor.bgCheckFlags & 1) != 0)) {
        temp_v1 = this->unk_1DA;
        if (temp_v1 == 0) {
            phi_v0 = 0;
        } else {
            this->unk_1DA = temp_v1 - 1;
            phi_v0 = this->unk_1DA;
        }
        if (phi_v0 == 0) {
            this->unk_1D8 |= 1;
        }
        if (((u32) globalCtx->state.frames % 3U) == 0) {
            sp44 = randPlusMinusPoint5Scaled(15.0f) + this->actor.world.pos.x;
            sp48 = this->actor.world.pos.y;
            sp4C = randPlusMinusPoint5Scaled(15.0f) + this->actor.world.pos.z;
            func_800BBDAC(globalCtx, (Actor *) this, (Vec3f *) &sp44, 20.0f, 0, 2.0f, (s16) 0, (s16) 0, (u8) 0);
        }
    }
    func_80BE1C80((Actor *) this, globalCtx);
}

void EnNimotsu_Draw(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    GraphicsContext *sp2C;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    f32 *temp_a0_2;
    f32 *temp_a1;
    EnNimotsu *this = (EnNimotsu *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp2C = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp2C->polyOpa.p;
    sp2C->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp2C = sp2C;
    sp24 = temp_v0;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = sp2C->polyOpa.p;
    sp2C->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = (u32) &D_06013380;
    temp_v0_2->words.w0 = 0xDE000000;
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_a0_2 = &sp3C;
    temp_a1 = &sp30;
    sp3C = this->actor.world.pos.x + 7.0f;
    sp40 = this->actor.world.pos.y;
    sp30 = 0.2f;
    sp34 = 0.2f;
    sp38 = 0.2f;
    sp44 = this->actor.world.pos.z + 2.0f;
    func_800BC620((Vec3f *) temp_a0_2, (Vec3f *) temp_a1, 0xFF, globalCtx);
}
