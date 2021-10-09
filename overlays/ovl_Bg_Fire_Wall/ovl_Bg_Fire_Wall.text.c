s32 func_809AC5C0(Actor *arg0, void *arg1);         /* static */
void func_809AC760(Actor *arg0, GlobalContext *arg1); /* static */
void func_809AC7F8(Actor *arg0, GlobalContext *arg1); /* static */
void func_809ACB28(Actor *arg0, GraphicsContext **arg1); /* static */
extern ? D_06000040;
static ColliderCylinderInit D_809ACC60 = {
    {0xA, 0x11, 0, 9, 0x20, 1},
    {0, {0x20000000, 1, 4}, {0xF7CFFFFF, 0, 0}, 0x19, 0, 1},
    {0x22, 0x55, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit D_809ACC8C = {1, 0x50, 0x64, 0xFF};
static ? D_809ACC94;                                /* unable to generate initializer */

typedef struct BgFireWall {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(BgFireWall *, GlobalContext *);
    /* 0x0148 */ s16 unk148;                        /* inferred */
    /* 0x014A */ s16 unk14A;                        /* inferred */
    /* 0x014C */ s16 unk14C;                        /* inferred */
    /* 0x014E */ char pad14E[0x6];                  /* maybe part of unk14C[4]? */
    /* 0x0154 */ f32 unk154;                        /* inferred */
    /* 0x0158 */ f32 unk158;                        /* inferred */
    /* 0x015C */ f32 unk15C;                        /* inferred */
    /* 0x0160 */ f32 unk160;                        /* inferred */
    /* 0x0164 */ ColliderCylinder unk164;           /* inferred */
} BgFireWall;                                       /* size 0x1B0 */

void BgFireWall_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgFireWall *this = (BgFireWall *) thisx;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;

    temp_a1 = &this->unk164;
    this->unk14C = this->actor.params;
    this->actor.scale.y = 0.005f;
    sp20 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &D_809ACC60);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, NULL, &D_809ACC8C);
    this->actor.scale.z = 0.12f;
    this->actor.scale.x = 0.12f;
    this->unk15C = 0.09f;
    this->unk158 = 0.1f;
    this->unk160 = 300.0f;
    this->unk148 = Rand_S16Offset(0, 7);
    this->actor.flags |= 0x10;
    this->actionFunc = func_809AC638;
    this->unk164.dim.pos.y = (s16) (s32) this->actor.world.pos.y;
}

void BgFireWall_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgFireWall *this = (BgFireWall *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk164);
}

s32 func_809AC5C0(Actor *arg0, void *arg1) {
    Vec3f sp1C;
    f32 temp_f2;
    s32 phi_v0;

    Actor_CalcOffsetOrientedToDrawRotation(arg0, &sp1C, arg1->unk1CCC + 0x24);
    temp_f2 = arg0->unk160;
    phi_v0 = 0;
    if ((fabsf(sp1C.x) < temp_f2) && (fabsf(sp1C.z) < (temp_f2 + 20.0f))) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_809AC638(BgFireWall *this, GlobalContext *globalCtx) {
    if ((this->unk14C != 0) || (func_809AC5C0() != 0)) {
        this->actor.draw = func_809ACB28;
        this->unk14A = 5;
        this->actionFunc = func_809AC68C;
    }
}

void func_809AC68C(BgFireWall *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk14A;
    if (temp_v0 != 0) {
        this->unk14A = temp_v0 - 1;
    }
    if (this->unk14A == 0) {
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
    if ((this->unk14C != 0) || (this = this, temp_a3 = this, phi_a3 = temp_a3, (func_809AC5C0(&temp_a0->actor) != 0))) {
        phi_a3->unk15C = 0.09f;
        Math_StepToF(phi_a3 + 0x5C, 0.09f + phi_a3->unk154, phi_a3->unk158);
        return;
    }
    temp_a2 = temp_a3->unk158;
    this = temp_a3;
    if (Math_StepToF(&temp_a3->actor.scale.y, 0.005f, temp_a2) != 0) {
        this->actionFunc = func_809AC638;
        return;
    }
    this->unk14A = 0;
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
    Vec3f sp38;
    f32 sp30;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 phi_f0;

    Actor_CalcOffsetOrientedToDrawRotation(arg0, &sp38, arg1->actorCtx.actorList[2].first + 0x24);
    phi_f0 = -80.0f;
    if (sp38.x < -80.0f) {

    } else if (sp38.x > 80.0f) {
        phi_f0 = 80.0f;
    } else {
        phi_f0 = sp38.x;
    }
    sp38.x = phi_f0;
    temp_f0 = arg0->unk150;
    if (temp_f0 == 0.0f) {
        if (sp38.z > 0.0f) {
            sp38.z = -25.0f;
            arg0->unk150 = -1.0f;
        } else {
            sp38.z = 25.0f;
            arg0->unk150 = 1.0f;
        }
    } else {
        sp38.z = temp_f0 * 25.0f;
    }
    sp30 = Math_SinS(arg0->shape.rot.y);
    temp_f0_2 = Math_CosS(arg0->shape.rot.y);
    arg0->unk1AA = (s16) (s32) (arg0->world.pos.x + (sp38.x * temp_f0_2) + (sp38.z * sp30));
    arg0->unk1AE = (s16) (s32) ((arg0->world.pos.z - (sp38.x * sp30)) + (sp38.z * temp_f0_2));
}

void func_809AC970(BgFireWall *this, GlobalContext *globalCtx) {
    BgFireWall *temp_a3;
    f32 temp_a2;

    temp_a3 = this;
    temp_a2 = temp_a3->unk158;
    this = temp_a3;
    if (Math_StepToF(&temp_a3->actor.scale.y, 0.005f, temp_a2) != 0) {
        Actor_MarkForDeath(&this->actor);
    }
}

void BgFireWall_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgFireWall *this = (BgFireWall *) thisx;
    CollisionCheckContext *sp28;
    ColliderCylinder *sp24;
    Actor *temp_a0;
    ColliderCylinder *temp_a2;
    CollisionCheckContext *temp_a1;
    s16 temp_v0;
    s16 temp_v0_3;
    u8 temp_v0_2;

    this->actionFunc(this, globalCtx);
    temp_v0 = this->unk14C;
    if ((temp_v0 == 0) || ((temp_v0 != 0) && (this->actor.xzDistToPlayer < 240.0f))) {
        temp_v0_2 = this->unk164.base.atFlags;
        if ((temp_v0_2 & 2) != 0) {
            this->unk164.base.atFlags = temp_v0_2 & 0xFFFD;
            func_809AC760(&this->actor, globalCtx);
        }
    }
    if ((func_809AC6C0 == this->actionFunc) && ((func_800B9010(&this->actor, 0x2034U), temp_v0_3 = this->unk14C, (temp_v0_3 == 0)) || ((temp_v0_3 != 0) && (this->actor.xzDistToPlayer < 240.0f)))) {
        func_809AC7F8(&this->actor, globalCtx);
        temp_a1 = &globalCtx->colChkCtx;
        temp_a2 = &this->unk164;
        sp24 = temp_a2;
        sp28 = temp_a1;
        CollisionCheck_SetAT(globalCtx, temp_a1, &temp_a2->base);
        CollisionCheck_SetOC(globalCtx, temp_a1, &temp_a2->base);
    }
    this->unk148 = (s16) ((s32) (this->unk148 + 1) % 8);
    if (func_809AC970 != this->actionFunc) {
        temp_a0 = this->actor.parent;
        if ((temp_a0 != 0) && (temp_a0->update != 0) && (temp_a0->unk150 != 0)) {
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
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_809ACC94 + (arg0->unk148 * 4)));
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

