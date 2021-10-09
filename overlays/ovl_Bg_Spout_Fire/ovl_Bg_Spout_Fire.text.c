s32 func_80A60C24(Actor *arg0, void *arg1);         /* static */
void func_80A60DA0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A60E08(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A61040(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_06000040;
static ColliderCylinderInit D_80A61160 = {
    {0xA, 0x11, 0, 9, 0x20, 1},
    {0, {0x20000000, 1, 4}, {0xF7CFFFFF, 0, 0}, 0x19, 0, 1},
    {0x1E, 0x53, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit D_80A6118C = {1, 0x50, 0x64, 0xFF};
static void *D_80A61194 = {
    (void *)0x6003CA0,
    (void *)0x60040A0,
    (void *)0x60044A0,
    (void *)0x60048A0,
    (void *)0x6004CA0,
    (void *)0x60050A0,
    (void *)0x60054A0,
    (void *)0x60058A0,
};
static s32 D_80A611B4 = 0;

typedef struct BgSpoutFire {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(BgSpoutFire *, GlobalContext *);
    /* 0x0148 */ s16 unk148;                        /* inferred */
    /* 0x014A */ s16 unk14A;                        /* inferred */
    /* 0x014C */ ColliderCylinder unk14C;           /* inferred */
} BgSpoutFire;                                      /* size 0x198 */

void BgSpoutFire_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgSpoutFire *this = (BgSpoutFire *) thisx;
    void **temp_s0;
    void **phi_s0;

    this->actor.scale.z = 0.13499999f;
    this->actor.scale.x = 0.13499999f;
    this->unk14A = 0;
    this->actor.scale.y = 0.01f;
    Collider_InitAndSetCylinder(globalCtx, &this->unk14C, &this->actor, &D_80A61160);
    this->unk14C.dim.pos.y = (s16) (s32) this->actor.world.pos.y;
    CollisionCheck_SetInfo(&this->actor.colChkInfo, NULL, &D_80A6118C);
    phi_s0 = &D_80A61194;
    if (D_80A611B4 == 0) {
        do {
            temp_s0 = phi_s0 + 4;
            temp_s0->unk-4 = Lib_SegmentedToVirtual(*phi_s0);
            phi_s0 = temp_s0;
        } while (temp_s0 != &D_80A611B4);
        D_80A611B4 = 1;
    }
    this->actionFunc = func_80A60C94;
}

void BgSpoutFire_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgSpoutFire *this = (BgSpoutFire *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk14C);
}

s32 func_80A60C24(Actor *arg0, void *arg1) {
    Vec3f sp18;
    s32 phi_v0;

    Actor_CalcOffsetOrientedToDrawRotation(arg0, &sp18, arg1->unk1CCC + 0x24);
    phi_v0 = 0;
    if ((fabsf(sp18.x) < 100.0f) && (fabsf(sp18.z) < 120.0f)) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_80A60C94(BgSpoutFire *this, GlobalContext *globalCtx) {
    if (func_80A60C24() != 0) {
        this->actor.draw = func_80A61040;
        this->unk148 = 5;
        this->actionFunc = func_80A60CDC;
    }
}

void func_80A60CDC(BgSpoutFire *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk148;
    if (temp_v0 != 0) {
        this->unk148 = temp_v0 - 1;
    }
    if (this->unk148 == 0) {
        this->actionFunc = func_80A60D10;
    }
}

void func_80A60D10(BgSpoutFire *this, GlobalContext *globalCtx) {
    BgSpoutFire *temp_a0;
    f32 *temp_a0_2;

    temp_a0 = this;
    this = this;
    if (func_80A60C24(&temp_a0->actor) != 0) {
        Math_StepToF(&this->actor.scale.y, 0.1f, 0.024999999f);
        return;
    }
    temp_a0_2 = &this->actor.scale.y;
    this = this;
    if (Math_StepToF(temp_a0_2, 0.01f, 0.01f) != 0) {
        this->actor.draw = NULL;
        this->actionFunc = func_80A60C94;
        return;
    }
    this->unk148 = 0;
}

void func_80A60DA0(Actor *arg0, GlobalContext *arg1) {
    s16 phi_a3;

    if (Actor_IsActorFacingLink(arg0, 0x4000) != 0) {
        phi_a3 = arg0->shape.rot.y;
    } else {
        phi_a3 = (s16) (arg0->shape.rot.y + 0x8000);
    }
    func_800B8D98(arg1, arg0, 5.0f, phi_a3, 1.0f);
}

void func_80A60E08(Actor *arg0, GlobalContext *arg1) {
    Vec3f sp30;
    f32 sp28;
    f32 temp_f0;
    s16 temp_v0;
    f32 phi_f0;

    Actor_CalcOffsetOrientedToDrawRotation(arg0, &sp30, arg1->actorCtx.actorList[2].first + 0x24);
    phi_f0 = -74.25f;
    if (sp30.x < -74.25f) {

    } else if (sp30.x > 74.25f) {
        phi_f0 = 74.25f;
    } else {
        phi_f0 = sp30.x;
    }
    sp30.x = phi_f0;
    temp_v0 = arg0->unk148;
    if (temp_v0 == 0) {
        if (sp30.z > 0.0f) {
            sp30.z = -25.0f;
            arg0->unk148 = -1;
        } else {
            sp30.z = 25.0f;
            arg0->unk148 = 1;
        }
    } else {
        sp30.z = (f32) temp_v0 * 25.0f;
    }
    sp28 = Math_SinS(arg0->shape.rot.y);
    temp_f0 = Math_CosS(arg0->shape.rot.y);
    arg0->unk192 = (s16) (s32) (arg0->world.pos.x + (sp30.x * temp_f0) + (sp30.z * sp28));
    arg0->unk196 = (s16) (s32) ((arg0->world.pos.z - (sp30.x * sp28)) + (sp30.z * temp_f0));
}

void BgSpoutFire_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgSpoutFire *this = (BgSpoutFire *) thisx;
    CollisionCheckContext *sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a2;
    CollisionCheckContext *temp_a1;
    u8 temp_v0;

    temp_v0 = this->unk14C.base.atFlags;
    this->unk14A = (s16) ((s32) (this->unk14A + 1) % 8);
    if ((temp_v0 & 2) != 0) {
        this->unk14C.base.atFlags = temp_v0 & 0xFFFD;
        func_80A60DA0(&this->actor, globalCtx);
    }
    this->actionFunc(this, globalCtx);
    if (func_80A60D10 == this->actionFunc) {
        func_80A60E08(&this->actor, globalCtx);
        temp_a1 = &globalCtx->colChkCtx;
        temp_a2 = &this->unk14C;
        sp20 = temp_a2;
        sp24 = temp_a1;
        CollisionCheck_SetAT(globalCtx, temp_a1, &temp_a2->base);
        CollisionCheck_SetOC(globalCtx, temp_a1, &temp_a2->base);
        func_800B9010(&this->actor, 0x2034U);
    }
}

void func_80A61040(Actor *this, GlobalContext *globalCtx) {
    Gfx *sp20;
    GraphicsContext *sp1C;
    Gfx *temp_v0_2;
    Gfx *temp_v1;
    GraphicsContext *temp_v0;

    temp_v0 = globalCtx->state.gfxCtx;
    sp1C = temp_v0;
    temp_v0_2 = Gfx_CallSetupDL(temp_v0->polyXlu.p, 0x14U);
    temp_v1 = temp_v0_2;
    sp1C->polyXlu.p = temp_v0_2;
    temp_v0_2->words.w0 = 0xDB060020;
    temp_v0_2->words.w1 = (u32) (&D_80A61194)[this->unk14A];
    temp_v0_2->unk8 = 0xFA000001;
    temp_v0_2->unkC = 0xFFFF0096;
    temp_v0_2->unk14 = 0xFF0000FF;
    temp_v0_2->unk10 = 0xFB000000;
    sp20 = temp_v1;
    SysMatrix_InsertTranslation(-55.0f, 0.0f, 0.0f, 1);
    temp_v1->unk18 = 0xDA380003;
    sp20 = temp_v1;
    temp_v1->unk1C = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v1->unk24 = &D_06000040;
    temp_v1->unk20 = 0xDE000000;
    sp1C->polyXlu.p = temp_v1 + 0x28;
}

