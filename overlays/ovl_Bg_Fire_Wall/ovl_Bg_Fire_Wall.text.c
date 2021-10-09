typedef struct BgFireWall {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(BgFireWall *, GlobalContext *);
    /* 0x148 */ s16 unk_148;                        /* inferred */
    /* 0x14A */ s16 unk_14A;                        /* inferred */
    /* 0x14C */ s16 unk_14C;                        /* inferred */
    /* 0x14E */ char pad_14E[0xA];                  /* maybe part of unk_14C[6]? */
    /* 0x158 */ f32 unk_158;                        /* inferred */
    /* 0x15C */ f32 unk_15C;                        /* inferred */
    /* 0x160 */ f32 unk_160;                        /* inferred */
    /* 0x164 */ ColliderCylinder unk_164;           /* inferred */
} BgFireWall;                                       /* size = 0x1B0 */

struct _mips2c_stack_BgFireWall_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgFireWall_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_BgFireWall_Update {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ CollisionCheckContext *sp28;         /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809AC5C0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809AC638 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AC68C {};              /* size 0x0 */

struct _mips2c_stack_func_809AC6C0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AC760 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809AC7F8 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_809AC970 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809ACB28 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x8];                    /* maybe part of sp24[3]? */
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

s32 func_809AC5C0(Actor *arg0, void *arg1);         /* static */
void func_809AC760(Actor *arg0, GlobalContext *arg1); /* static */
void func_809AC7F8(Actor *arg0, GlobalContext *arg1); /* static */
void func_809ACB28(void *arg0, GraphicsContext **arg1); /* static */
extern ? D_06000040;
static ColliderCylinderInit D_809ACC60 = {
    {0xA, 0x11, 0, 9, 0x20, 1},
    {0, {0x20000000, 1, 4}, {0xF7CFFFFF, 0, 0}, 0x19, 0, 1},
    {0x22, 0x55, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit D_809ACC8C = {1, 0x50, 0x64, 0xFF};
static ? D_809ACC94;                                /* unable to generate initializer */

void BgFireWall_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    BgFireWall *this = (BgFireWall *) thisx;

    temp_a1 = &this->unk_164;
    this->unk_14C = this->actor.params;
    this->actor.scale.y = 0.005f;
    sp20 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_809ACC60);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, NULL, &D_809ACC8C);
    this->actor.scale.z = 0.12f;
    this->actor.scale.x = 0.12f;
    this->unk_15C = 0.09f;
    this->unk_158 = 0.1f;
    this->unk_160 = 300.0f;
    this->unk_148 = Rand_S16Offset(0, 7);
    this->actor.flags |= 0x10;
    this->actionFunc = func_809AC638;
    this->unk_164.dim.pos.y = (s16) (s32) this->actor.world.pos.y;
}

void BgFireWall_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgFireWall *this = (BgFireWall *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_164);
}

s32 func_809AC5C0(Actor *arg0, void *arg1) {
    f32 sp1C;
    f32 temp_f2;
    s32 phi_v0;

    Actor_CalcOffsetOrientedToDrawRotation(arg0, (Vec3f *) &sp1C, arg1->unk_1CCC + 0x24);
    temp_f2 = arg0->unk_160;
    phi_v0 = 0;
    if ((fabsf(sp1C) < temp_f2) && (fabsf(sp24) < (temp_f2 + 20.0f))) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_809AC638(BgFireWall *this, GlobalContext *globalCtx) {
    if ((this->unk_14C != 0) || (func_809AC5C0() != 0)) {
        this->actor.draw = func_809ACB28;
        this->unk_14A = 5;
        this->actionFunc = func_809AC68C;
    }
}

void func_809AC68C(BgFireWall *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk_14A;
    if (temp_v0 != 0) {
        this->unk_14A = temp_v0 - 1;
    }
    if (this->unk_14A == 0) {
        this->actionFunc = func_809AC6C0;
    }
}

void func_809AC6C0(BgFireWall *this, GlobalContext *globalCtx) {
    BgFireWall *temp_a0;
    BgFireWall *temp_a3;
    f32 temp_a2;
    BgFireWall *phi_a3;

    temp_a0 = this;
    phi_a3 = this;
    if ((this->unk_14C != 0) || (this = this, temp_a3 = this, phi_a3 = temp_a3, (func_809AC5C0((Actor *) temp_a0) != 0))) {
        phi_a3->unk_15C = 0.09f;
        Math_StepToF(phi_a3 + 0x5C, 0.09f + phi_a3->unk_154, phi_a3->unk_158);
        return;
    }
    temp_a2 = temp_a3->unk_158;
    this = temp_a3;
    if (Math_StepToF(&temp_a3->actor.scale.y, 0.005f, temp_a2) != 0) {
        this->actionFunc = func_809AC638;
        return;
    }
    this->unk_14A = 0;
}

void func_809AC760(Actor *arg0, GlobalContext *arg1) {
    GameInfo *temp_v0;
    s16 phi_a3;

    if (Actor_IsActorFacingLink(arg0, 0x4000) != 0) {
        phi_a3 = arg0->shape.rot.y;
    } else {
        phi_a3 = (s16) (arg0->shape.rot.y + 0x8000);
    }
    temp_v0 = gGameInfo;
    func_800B8D98(arg1, arg0, (f32) temp_v0->data[2448] + 10.0f, phi_a3, (f32) temp_v0->data[2449] + 5.0f);
}

void func_809AC7F8(Actor *arg0, GlobalContext *arg1) {
    f32 sp40;
    f32 sp38;
    f32 sp30;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 phi_f0;

    Actor_CalcOffsetOrientedToDrawRotation(arg0, (Vec3f *) &sp38, arg1->actorCtx.actorList[2].first + 0x24);
    phi_f0 = -80.0f;
    if (sp38 < -80.0f) {

    } else if (sp38 > 80.0f) {
        phi_f0 = 80.0f;
    } else {
        phi_f0 = sp38;
    }
    sp38 = phi_f0;
    temp_f0 = arg0->unk_150;
    if (temp_f0 == 0.0f) {
        if (sp40 > 0.0f) {
            sp40 = -25.0f;
            arg0->unk_150 = -1.0f;
        } else {
            sp40 = 25.0f;
            arg0->unk_150 = 1.0f;
        }
    } else {
        sp40 = temp_f0 * 25.0f;
    }
    sp30 = Math_SinS(arg0->shape.rot.y);
    temp_f0_2 = Math_CosS(arg0->shape.rot.y);
    arg0->unk_1AA = (s16) (s32) (arg0->world.pos.x + (sp38 * temp_f0_2) + (sp40 * sp30));
    arg0->unk_1AE = (s16) (s32) ((arg0->world.pos.z - (sp38 * sp30)) + (sp40 * temp_f0_2));
}

void func_809AC970(BgFireWall *this, GlobalContext *globalCtx) {
    BgFireWall *temp_a3;
    f32 temp_a2;

    temp_a3 = this;
    temp_a2 = temp_a3->unk_158;
    this = temp_a3;
    if (Math_StepToF(&temp_a3->actor.scale.y, 0.005f, temp_a2) != 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void BgFireWall_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp28;
    ColliderCylinder *sp24;
    Actor *temp_a0;
    ColliderCylinder *temp_a2;
    CollisionCheckContext *temp_a1;
    s16 temp_v0;
    s16 temp_v0_3;
    u8 temp_v0_2;
    BgFireWall *this = (BgFireWall *) thisx;

    this->actionFunc(this, globalCtx);
    temp_v0 = this->unk_14C;
    if ((temp_v0 == 0) || ((temp_v0 != 0) && (this->actor.xzDistToPlayer < 240.0f))) {
        temp_v0_2 = this->unk_164.base.atFlags;
        if ((temp_v0_2 & 2) != 0) {
            this->unk_164.base.atFlags = temp_v0_2 & 0xFFFD;
            func_809AC760((Actor *) this, globalCtx);
        }
    }
    if ((func_809AC6C0 == this->actionFunc) && ((func_800B9010((Actor *) this, 0x2034U), temp_v0_3 = this->unk_14C, (temp_v0_3 == 0)) || ((temp_v0_3 != 0) && (this->actor.xzDistToPlayer < 240.0f)))) {
        func_809AC7F8((Actor *) this, globalCtx);
        temp_a1 = &globalCtx->colChkCtx;
        temp_a2 = &this->unk_164;
        sp24 = temp_a2;
        sp28 = temp_a1;
        CollisionCheck_SetAT(globalCtx, temp_a1, (Collider *) temp_a2);
        CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) temp_a2);
    }
    this->unk_148 = (s16) ((s32) (this->unk_148 + 1) % 8);
    if (func_809AC970 != this->actionFunc) {
        temp_a0 = this->actor.parent;
        if ((temp_a0 != 0) && (temp_a0->update != 0) && (temp_a0->unk_150 != 0)) {
            this->actionFunc = func_809AC970;
        }
    }
}

void func_809ACB28(Actor *arg0, GraphicsContext **arg1) {
    Gfx *sp30;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_s0;

    temp_s0 = *arg1;
    temp_s0->polyXlu.p = Gfx_CallSetupDL(temp_s0->polyXlu.p, 0x14U);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp30 = temp_v0;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_809ACC94 + (arg0->unk_148 * 4)));
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0xFFFF0096;
    temp_v0_2->words.w0 = 0xFA000001;
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xFB000000;
    temp_v0_3->words.w1 = 0xFF0000FF;
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDA380003;
    sp24 = temp_v0_4;
    sp24->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) &D_06000040;
    temp_v0_5->words.w0 = 0xDE000000;
}
