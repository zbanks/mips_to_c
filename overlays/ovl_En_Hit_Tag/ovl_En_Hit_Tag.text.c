typedef struct EnHitTag {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ void (*actionFunc)(EnHitTag *, GlobalContext *);
} EnHitTag;                                         /* size = 0x194 */

struct _mips2c_stack_EnHitTag_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnHitTag_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnHitTag_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BE20E8 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

static ColliderCylinderInit D_80BE21F0 = {
    {0xA, 0, 9, 9, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0},
    {0x10, 0x20, 0, {0, 0, 0}},
};

void EnHitTag_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    EnHitTag *this = (EnHitTag *) thisx;

    Actor_SetScale((Actor *) this, 1.0f);
    this->actionFunc = func_80BE20E8;
    temp_a1 = &this->unk_144;
    sp24 = temp_a1;
    Collider_InitAndSetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80BE21F0);
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    if (Flags_GetSwitch(globalCtx, (s32) (this->actor.params & 0xFE00) >> 9) != 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void EnHitTag_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnHitTag *this = (EnHitTag *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_144);
}

void func_80BE20E8(EnHitTag *this, GlobalContext *globalCtx) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    s32 temp_s0;
    s32 phi_s0;

    if ((this->unk_144.base.acFlags & 2) != 0) {
        play_sound(0x4803U);
        Actor_MarkForDeath((Actor *) this);
        sp2C = this->actor.world.pos.x;
        sp30 = this->actor.world.pos.y;
        sp34 = this->actor.world.pos.z;
        phi_s0 = 0;
        do {
            Item_DropCollectible(globalCtx, (Vec3f *) &sp2C, 0U);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != 3);
        return;
    }
    CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_144);
}

void EnHitTag_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnHitTag *this = (EnHitTag *) thisx;
    this->actionFunc(this, globalCtx);
}
