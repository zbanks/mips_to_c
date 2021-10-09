typedef struct {
    /* 0x00 */ Actor *actor;
    /* 0x04 */ Actor *at;
    /* 0x08 */ Actor *ac;
    /* 0x0C */ Actor *oc;
    /* 0x10 */ u8 atFlags;
    /* 0x11 */ u8 acFlags;
    /* 0x12 */ u8 ocFlags1;
    /* 0x13 */ u8 ocFlags2;
    /* 0x14 */ u8 colType;
    /* 0x15 */ u8 shape;
    /* 0x16 */ s16 unk_16;                          /* inferred */
} Collider;                                         /* size = 0x18 */

typedef struct {
    /* 0x0 */ u32 dmgFlags;
    /* 0x4 */ u8 effect;
    /* 0x5 */ u8 damage;
    /* 0x6 */ s16 unk_6;                            /* inferred */
} ColliderTouch;                                    /* size = 0x8 */

typedef struct ObjJgameLight {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ char pad_190[0x4];
    /* 0x194 */ LightNode *unk_194;                 /* inferred */
    /* 0x198 */ ColliderCylinder unk_198;           /* inferred */
} ObjJgameLight;                                    /* size = 0x1BC */

struct _mips2c_stack_ObjJgameLight_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjJgameLight_Draw {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad_44[0x8];                    /* maybe part of sp40[3]? */
    /* 0x4C */ Gfx *sp4C;                           /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x8];                    /* maybe part of sp50[3]? */
    /* 0x5C */ Gfx *sp5C;                           /* inferred */
    /* 0x60 */ char pad_60[0xC];                    /* maybe part of sp5C[4]? */
    /* 0x6C */ Gfx *sp6C;                           /* inferred */
    /* 0x70 */ char pad_70[0x10];
};                                                  /* size = 0x80 */

struct _mips2c_stack_ObjJgameLight_Init {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ColliderCylinder *sp34;              /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_ObjJgameLight_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C15474 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C156C4 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ CollisionCheckContext *sp18;         /* inferred */
    /* 0x1C */ ColliderCylinder *sp1C;              /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C15718 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_80C15474(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C156C4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C15718(ObjJgameLight *arg0, GlobalContext *arg1); /* static */
extern ? D_060003A0;
static ColliderCylinderInit D_80C15BC0 = {
    {9, 0, 0xD, 0x39, 0x20, 1},
    {2, {0x100000, 0, 0}, {0xF6CFFFFF, 0, 0}, 0, 5, 1},
    {0xC, 0x2D, 0, {0, 0, 0}},
};
static ? D_80C16030;                                /* unable to generate initializer */
static ? D_80C160B0;                                /* unable to generate initializer */

void ObjJgameLight_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp34;
    ColliderCylinder *temp_a0;
    ColliderCylinder *temp_a1;
    ObjJgameLight *this = (ObjJgameLight *) thisx;

    Actor_SetScale((Actor *) this, 1.0f);
    func_800B4AEC(globalCtx, (Actor *) this, 50.0f);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B4B50, 1.0f);
    temp_a1 = &this->unk_144;
    sp34 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80C15BC0);
    temp_a0 = &this->unk_198;
    sp34 = temp_a0;
    Lights_PointGlowSetInfo((LightInfo *) temp_a0, (s16) (s32) this->actor.world.pos.x, (s16) (s32) (this->actor.world.pos.y + 70.0f), (s16) (s32) this->actor.world.pos.z, (u8) 0xFF, (u8) 0xFF, (u8) 0xB4, (s16) -1);
    this->unk_194 = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, (LightInfo *) sp34);
    Actor_SetHeight((Actor *) this, 60.0f);
    this->actor.colChkInfo.health = 0;
    this->unk_1B8 = 0;
    this->unk_198.info.toucher.unk_6 = 0;
    this->unk_1AC = 0;
    this->unk_1B2 = 0;
    this->unk_1B4 = 0;
    this->unk_1A8 = 0.0f;
}

void ObjJgameLight_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    GlobalContext *temp_a0;
    ObjJgameLight *this = (ObjJgameLight *) thisx;

    temp_a0 = globalCtx;
    globalCtx = globalCtx;
    Collider_DestroyCylinder(temp_a0, &this->unk_144);
    LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, this->unk_194);
}

void func_80C15474(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f4;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_a1;
    u8 temp_t6;
    u8 temp_v0;
    f32 phi_f4;

    temp_v0 = arg0->colChkInfo.health;
    if (((temp_v0 & 1) != 0) && (arg0->unk_1B6 == 0)) {
        temp_v0_2 = arg0->unk_1AC;
        if ((s32) temp_v0_2 < 0xA0) {
            arg0->unk_1AC = (s16) (temp_v0_2 + 0x28);
        } else {
            arg0->unk_1AC = 0xC8;
            arg0->unk_1B6 = 1;
        }
        temp_f0 = arg0->unk_1A8;
        if (temp_f0 < 0.7f) {
            arg0->unk_1A8 = (f32) (temp_f0 + 0.3f);
        } else {
            arg0->unk_1A8 = 1.0f;
        }
    } else if ((temp_v0 & 8) != 0) {
        temp_v0_3 = arg0->unk_1AC;
        if ((s32) temp_v0_3 >= 0x29) {
            arg0->unk_1AC = (s16) (temp_v0_3 - 0x28);
        } else {
            arg0->unk_1AC = -1;
            if (arg0->unk_1A8 == 0.0f) {
                arg0->unk_1B6 = 0;
                temp_t6 = arg0->colChkInfo.health & 0xFFFE;
                arg0->colChkInfo.health = temp_t6;
                arg0->colChkInfo.health = temp_t6 & 0xFFF7;
            }
        }
        if (arg0->unk_1A8 > 0.3f) {
            arg0->unk_1A8 = (f32) (arg0->unk_1A8 - 0.3f);
        } else {
            arg0->unk_1A8 = 0.0f;
        }
    }
    if (arg0->unk_1A8 > 0.1f) {
        func_800B9010(arg0, 0x2031U);
    }
    temp_a1 = ((s32) (Rand_ZeroOne() * 127.0f) + 0x80) & 0xFF;
    temp_f4 = (f32) temp_a1;
    phi_f4 = temp_f4;
    if (temp_a1 < 0) {
        phi_f4 = temp_f4 + 4294967296.0f;
    }
    Lights_PointSetColorAndRadius(arg0 + 0x198, (u8) temp_a1, (u32) (phi_f4 * 0.7f) & 0xFF, 0U, (s16) (s32) arg0->unk_1AC);
}

void func_80C156C4(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    CollisionCheckContext *sp18;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;

    temp_a1 = arg0 + 0x144;
    sp1C = temp_a1;
    Collider_UpdateCylinder(arg0, temp_a1);
    temp_a1_2 = arg1 + 0x18884;
    sp18 = temp_a1_2;
    CollisionCheck_SetOC(arg1, temp_a1_2, (Collider *) sp1C);
    CollisionCheck_SetAC(arg1, temp_a1_2, (Collider *) sp1C);
}

void func_80C15718(ObjJgameLight *arg0, GlobalContext *arg1) {
    Vec3f *temp_a0;
    s16 temp_v0;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 phi_v1;

    temp_v1 = arg0->actor.colChkInfo.health;
    phi_v1 = temp_v1;
    if ((temp_v1 & 1) != 0) {
        temp_a0 = arg0 + 0xEC;
        if ((arg0->unk_1B8 & 1) == 0) {
            arg0 = arg0;
            func_8019F1C0(temp_a0, 0x2822U);
            temp_v1_2 = arg0->actor.colChkInfo.health;
            arg0->unk_1B8 = temp_v1_2;
            phi_v1 = temp_v1_2;
        }
    }
    if ((phi_v1 & 2) != 0) {
        arg0->actor.colChkInfo.health = phi_v1 & 0xFFFD;
        arg0->unk_1B2 = 0x12C;
        arg0->unk_1B4 = 1;
    } else if ((phi_v1 & 4) != 0) {
        arg0->actor.colChkInfo.health = phi_v1 & 0xFFFB;
        arg0->unk_1B2 = 0x12C;
        arg0->unk_1B4 = 2;
    }
    temp_v0 = arg0->unk_1B2;
    if ((s32) temp_v0 >= 0x10) {
        arg0->unk_1B2 = (s16) (temp_v0 - 0xF);
        return;
    }
    arg0->unk_1B2 = 0;
}

void ObjJgameLight_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjJgameLight *this = (ObjJgameLight *) thisx;
    func_80C15718(this, globalCtx);
    func_80C15474((Actor *) this, globalCtx);
    func_80C156C4((Actor *) this, globalCtx);
    this->unk_198.base.unk_16 += 1;
}

void ObjJgameLight_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp6C;
    Gfx *sp5C;
    f32 sp50;
    Gfx *sp4C;
    Gfx *sp40;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s16 temp_v0_6;
    ObjJgameLight *this = (ObjJgameLight *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp6C = temp_v0;
    sp6C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_060003A0;
    temp_v0_2->words.w0 = 0xDE000000;
    if ((s32) this->unk_1B2 > 0) {
        func_8012C2DC(globalCtx->state.gfxCtx);
        if ((s32) this->unk_1B2 >= 0x100) {
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = 0xD24020FF;
            temp_v0_3->words.w0 = 0xFA000000;
        } else {
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xFA000000;
            temp_v0_4->words.w1 = (this->unk_1B2 & 0xFF) | 0xD2402000;
        }
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDA380003;
        sp5C = temp_v0_5;
        sp5C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_6 = this->unk_1B4;
        if (temp_v0_6 == 1) {
            temp_v0_7 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w1 = (u32) &D_80C160B0;
            temp_v0_7->words.w0 = 0xDE000000;
        } else if (temp_v0_6 == 2) {
            temp_v0_8 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_8 + 8;
            temp_v0_8->words.w1 = (u32) &D_80C16030;
            temp_v0_8->words.w0 = 0xDE000000;
        }
    }
    if (this->unk_1A8 != 0.0f) {
        func_8012C2DC(globalCtx->state.gfxCtx);
        sp50 = (this->unk_1A8 * 27.0f) / 10000.0f;
        temp_v0_9 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_9 + 8;
        temp_v0_9->words.w0 = 0xDB060020;
        sp4C = temp_v0_9;
        sp4C->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((s32) this->unk_198.base.unk_16 * -0x14) & 0x1FF, 0x20, 0x80);
        temp_v0_10 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_10 + 8;
        temp_v0_10->words.w1 = 0xFFFF00FF;
        temp_v0_10->words.w0 = 0xFA008080;
        temp_v0_11 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_11 + 8;
        temp_v0_11->words.w1 = 0xFF000000;
        temp_v0_11->words.w0 = 0xFB000000;
        SysMatrix_InsertTranslation(0.0f, 52.0f, 0.0f, 1);
        Matrix_RotateY((s16) ((func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) - this->actor.shape.rot.y) + 0x8000), 1U);
        Matrix_Scale(sp50, sp50, sp50, 1);
        temp_v0_12 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_12 + 8;
        temp_v0_12->words.w0 = 0xDA380003;
        sp40 = temp_v0_12;
        sp40->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_13 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_13 + 8;
        temp_v0_13->words.w1 = (u32) D_0407D590;
        temp_v0_13->words.w0 = 0xDE000000;
    }
}
