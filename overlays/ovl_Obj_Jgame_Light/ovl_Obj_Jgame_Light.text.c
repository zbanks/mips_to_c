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

typedef struct {
    /* 0x0000 */ Actor *actor;
    /* 0x0004 */ Actor *at;
    /* 0x0008 */ Actor *ac;
    /* 0x000C */ Actor *oc;
    /* 0x0010 */ u8 atFlags;
    /* 0x0011 */ u8 acFlags;
    /* 0x0012 */ u8 ocFlags1;
    /* 0x0013 */ u8 ocFlags2;
    /* 0x0014 */ u8 colType;
    /* 0x0015 */ u8 shape;
    /* 0x0016 */ s16 unk16;                         /* inferred */
} Collider;                                         /* size 0x18 */

typedef struct ObjJgameLight {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderCylinder unk144;           /* inferred */
    /* 0x0190 */ char pad190[0x4];
    /* 0x0194 */ LightNode *unk194;                 /* inferred */
    /* 0x0198 */ ColliderCylinder unk198;           /* inferred */
    /* 0x01A8 */ f32 unk1A8;                        /* overlap; inferred */
    /* 0x01AC */ s16 unk1AC;                        /* inferred */
    /* 0x01AE */ char pad1AE[0x4];                  /* maybe part of unk1AC[3]? */
    /* 0x01B2 */ s16 unk1B2;                        /* inferred */
    /* 0x01B4 */ s16 unk1B4;                        /* inferred */
    /* 0x01B6 */ char pad1B6[0x2];                  /* maybe part of unk1B4[2]? */
    /* 0x01B8 */ u8 unk1B8;                         /* inferred */
    /* 0x01B9 */ char pad1B9[0x3];                  /* maybe part of unk1B8[4]? */
} ObjJgameLight;                                    /* size 0x1BC */

void ObjJgameLight_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjJgameLight *this = (ObjJgameLight *) thisx;
    ColliderCylinder *sp34;
    ColliderCylinder *temp_a0;
    ColliderCylinder *temp_a1;

    Actor_SetScale(&this->actor, 1.0f);
    func_800B4AEC(globalCtx, &this->actor, 50.0f);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B4B50, 1.0f);
    temp_a1 = &this->unk144;
    sp34 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &D_80C15BC0);
    temp_a0 = &this->unk198;
    sp34 = temp_a0;
    Lights_PointGlowSetInfo((LightInfo *) temp_a0, (s16) (s32) this->actor.world.pos.x, (s16) (s32) (this->actor.world.pos.y + 70.0f), (s16) (s32) this->actor.world.pos.z, (u8) 0xFF, (u8) 0xFF, (u8) 0xB4, (s16) -1);
    this->unk194 = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, (LightInfo *) sp34);
    Actor_SetHeight(&this->actor, 60.0f);
    this->actor.colChkInfo.health = 0;
    this->unk1B8 = 0;
    this->unk198.info.toucher.unk6 = 0;
    this->unk1AC = 0;
    this->unk1B2 = 0;
    this->unk1B4 = 0;
    this->unk1A8 = 0.0f;
}

void ObjJgameLight_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjJgameLight *this = (ObjJgameLight *) thisx;
    GlobalContext *temp_a0;

    temp_a0 = globalCtx;
    globalCtx = globalCtx;
    Collider_DestroyCylinder(temp_a0, &this->unk144);
    LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, this->unk194);
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
    if (((temp_v0 & 1) != 0) && (arg0->unk1B6 == 0)) {
        temp_v0_2 = arg0->unk1AC;
        if ((s32) temp_v0_2 < 0xA0) {
            arg0->unk1AC = (s16) (temp_v0_2 + 0x28);
        } else {
            arg0->unk1AC = 0xC8;
            arg0->unk1B6 = 1;
        }
        temp_f0 = arg0->unk1A8;
        if (temp_f0 < 0.7f) {
            arg0->unk1A8 = (f32) (temp_f0 + 0.3f);
        } else {
            arg0->unk1A8 = 1.0f;
        }
    } else if ((temp_v0 & 8) != 0) {
        temp_v0_3 = arg0->unk1AC;
        if ((s32) temp_v0_3 >= 0x29) {
            arg0->unk1AC = (s16) (temp_v0_3 - 0x28);
        } else {
            arg0->unk1AC = -1;
            if (arg0->unk1A8 == 0.0f) {
                arg0->unk1B6 = 0;
                temp_t6 = arg0->colChkInfo.health & 0xFFFE;
                arg0->colChkInfo.health = temp_t6;
                arg0->colChkInfo.health = temp_t6 & 0xFFF7;
            }
        }
        if (arg0->unk1A8 > 0.3f) {
            arg0->unk1A8 = (f32) (arg0->unk1A8 - 0.3f);
        } else {
            arg0->unk1A8 = 0.0f;
        }
    }
    if (arg0->unk1A8 > 0.1f) {
        func_800B9010(arg0, 0x2031U);
    }
    temp_a1 = ((s32) (Rand_ZeroOne() * 127.0f) + 0x80) & 0xFF;
    temp_f4 = (f32) temp_a1;
    phi_f4 = temp_f4;
    if (temp_a1 < 0) {
        phi_f4 = temp_f4 + 4294967296.0f;
    }
    Lights_PointSetColorAndRadius(arg0 + 0x198, (u8) temp_a1, (u32) (phi_f4 * 0.7f) & 0xFF, 0U, (s16) (s32) arg0->unk1AC);
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
    CollisionCheck_SetOC(arg1, temp_a1_2, &sp1C->base);
    CollisionCheck_SetAC(arg1, temp_a1_2, &sp1C->base);
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
        if ((arg0->unk1B8 & 1) == 0) {
            arg0 = arg0;
            func_8019F1C0(temp_a0, 0x2822U);
            temp_v1_2 = arg0->actor.colChkInfo.health;
            arg0->unk1B8 = temp_v1_2;
            phi_v1 = temp_v1_2;
        }
    }
    if ((phi_v1 & 2) != 0) {
        arg0->actor.colChkInfo.health = phi_v1 & 0xFFFD;
        arg0->unk1B2 = 0x12C;
        arg0->unk1B4 = 1;
    } else if ((phi_v1 & 4) != 0) {
        arg0->actor.colChkInfo.health = phi_v1 & 0xFFFB;
        arg0->unk1B2 = 0x12C;
        arg0->unk1B4 = 2;
    }
    temp_v0 = arg0->unk1B2;
    if ((s32) temp_v0 >= 0x10) {
        arg0->unk1B2 = temp_v0 - 0xF;
        return;
    }
    arg0->unk1B2 = 0;
}

void ObjJgameLight_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjJgameLight *this = (ObjJgameLight *) thisx;
    func_80C15718(this, globalCtx);
    func_80C15474(&this->actor, globalCtx);
    func_80C156C4(&this->actor, globalCtx);
    this->unk198.base.unk16 += 1;
}

void ObjJgameLight_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjJgameLight *this = (ObjJgameLight *) thisx;
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
    if ((s32) this->unk1B2 > 0) {
        func_8012C2DC(globalCtx->state.gfxCtx);
        if ((s32) this->unk1B2 >= 0x100) {
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = 0xD24020FF;
            temp_v0_3->words.w0 = 0xFA000000;
        } else {
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xFA000000;
            temp_v0_4->words.w1 = (this->unk1B2 & 0xFF) | 0xD2402000;
        }
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDA380003;
        sp5C = temp_v0_5;
        sp5C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_6 = this->unk1B4;
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
    if (this->unk1A8 != 0.0f) {
        func_8012C2DC(globalCtx->state.gfxCtx);
        sp50 = (this->unk1A8 * 27.0f) / 10000.0f;
        temp_v0_9 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_9 + 8;
        temp_v0_9->words.w0 = 0xDB060020;
        sp4C = temp_v0_9;
        sp4C->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((s32) this->unk198.base.unk16 * -0x14) & 0x1FF, 0x20, 0x80);
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

