typedef struct EnScRuppe {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk144;            /* inferred */
    /* 0x156 */ u8 unk156;                          /* overlap; inferred */
    /* 0x157 */ char pad157[0x39];                  /* maybe part of unk156[58]? */
    /* 0x190 */ void (*actionFunc)(EnScRuppe *, GlobalContext *);
    /* 0x194 */ s16 unk194;                         /* inferred */
    /* 0x196 */ s16 unk196;                         /* inferred */
} EnScRuppe;                                        /* size = 0x198 */

struct _mips2c_stack_EnScRuppe_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnScRuppe_Draw {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad28[0x10];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnScRuppe_Init {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnScRuppe_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD6910 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BD697C {};              /* size 0x0 */

struct _mips2c_stack_func_80BD6A8C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BD6B18 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

void func_80BD6910(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BD697C(s16 arg0);                        /* static */
static ? D_80BD6E10;                                /* unable to generate initializer */
static ? D_80BD6E14;                                /* unable to generate initializer */
static ColliderCylinderInit D_80BD6E40 = {
    {0xA, 0, 0, 0xD, 0x20, 1},
    {4, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0xA, 0x1E, 0, {0, 0, 0}},
};

void func_80BD6910(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x144;
    sp24 = temp_a2;
    Collider_UpdateCylinder(arg0, temp_a2);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, (Collider *) temp_a2);
    Actor_UpdateBgCheckInfo(arg1, arg0, 32.0f, 30.0f, 0.0f, 4U);
}

s32 func_80BD697C(s16 arg0) {
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_5;
    u8 temp_v1_6;

    switch (arg0) {
    case 0:
        temp_v1 = gSaveContext.weekEventReg[53];
        if ((temp_v1 & 4) != 0) {
            gSaveContext.weekEventReg[53] = temp_v1 & 0xFB;
            return 1;
        }
    default:
        return 0;
    case 1:
        temp_v1_2 = gSaveContext.weekEventReg[53];
        if ((temp_v1_2 & 0x80) != 0) {
            gSaveContext.weekEventReg[53] = temp_v1_2 & 0x7F;
            return 1;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return 0;
    case 2:
        temp_v1_3 = gSaveContext.weekEventReg[54];
        if ((temp_v1_3 & 1) != 0) {
            gSaveContext.weekEventReg[54] = temp_v1_3 & 0xFE;
            return 1;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return 0;
    case 3:
        temp_v1_4 = gSaveContext.weekEventReg[54];
        if ((temp_v1_4 & 2) != 0) {
            gSaveContext.weekEventReg[54] = temp_v1_4 & 0xFD;
            return 1;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return 0;
    case 4:
        temp_v1_5 = gSaveContext.weekEventReg[54];
        if ((temp_v1_5 & 4) != 0) {
            gSaveContext.weekEventReg[54] = temp_v1_5 & 0xFB;
            return 1;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return 0;
    case 5:
        temp_v1_6 = gSaveContext.weekEventReg[54];
        if ((temp_v1_6 & 8) != 0) {
            gSaveContext.weekEventReg[54] = temp_v1_6 & 0xF7;
            return 1;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return 0;
    }
}

void func_80BD6A8C(EnScRuppe *this, GlobalContext *globalCtx) {
    EnScRuppe *temp_a0;

    temp_a0 = this;
    if ((this->unk156 & 2) != 0) {
        this->unk194 = 0;
        this->actor.gravity = 0.0f;
        this = this;
        Audio_PlayActorSound2((Actor *) temp_a0, 0x4803U);
        func_801159EC(*(&D_80BD6E14 + (this->unk196 * 8)));
        this->actionFunc = func_80BD6B18;
    }
    (Actor *) this->shape.rot.y += 0x1F4;
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

void func_80BD6B18(EnScRuppe *this, GlobalContext *globalCtx) {
    Actor *temp_v1;
    s16 temp_v0;

    temp_v0 = this->unk194;
    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if ((s32) temp_v0 >= 0x1F) {
        if (func_80BD697C(this->unk196) != 0) {
            Actor_MarkForDeath((Actor *) this);
        }
    } else {
        this->unk194 = temp_v0 + 1;
        this->actor.world.pos.x = temp_v1->world.pos.x;
        this->actor.world.pos.y = temp_v1->world.pos.y;
        this->actor.world.pos.z = temp_v1->world.pos.z;
        this->actor.world.pos.y += 40.0f;
        Actor_SetScale((Actor *) this, (30.0f - (f32) this->unk194) * 0.001f);
    }
    this->actor.shape.rot.y += 0x3E8;
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
}

void EnScRuppe_Init(EnScRuppe *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    s16 temp_v0;
    EnScRuppe *this = (EnScRuppe *) thisx;

    temp_a1 = &this->unk144;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_InitAndSetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80BD6E40);
    Actor_SetScale((Actor *) this, 0.03f);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 10.0f);
    this->unk196 = this->actor.params & 0x1F;
    temp_v0 = this->unk196;
    if (((s32) temp_v0 < 0) || ((s32) temp_v0 >= 5)) {
        this->unk196 = 0;
    }
    this->actor.speedXZ = 0.0f;
    this->actionFunc = func_80BD6A8C;
    this->actor.gravity = -0.5f;
    this->actor.shape.yOffset = 700.0f;
}

void EnScRuppe_Destroy(EnScRuppe *this, GlobalContext *globalCtx) {
    EnScRuppe *this = (EnScRuppe *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk144);
}

void EnScRuppe_Update(EnScRuppe *this, GlobalContext *globalCtx) {
    EnScRuppe *this = (EnScRuppe *) thisx;
    this->actionFunc(this, globalCtx);
    func_80BD6910((Actor *) this, globalCtx);
}

void EnScRuppe_Draw(EnScRuppe *this, GlobalContext *globalCtx) {
    Gfx *sp24;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    EnScRuppe *this = (EnScRuppe *) thisx;

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
    sp20->words.w1 = Lib_SegmentedToVirtual(*(&D_80BD6E10 + (this->unk196 * 8)));
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) D_040622C0;
    temp_v0_3->words.w0 = 0xDE000000;
}
