? func_80115D5C(GlobalContext *);                   /* extern */
void FireArrow_Lerp(void *arg0, f32 *arg1, f32 arg2, ?); /* static */
void func_80920948(ArrowFire *arg0);                /* static */
extern ? D_0E0002E0;
static ? D_809220A0;                                /* unable to generate initializer */
static ? D_80922150;                                /* unable to generate initializer */
static ColliderQuadInit D_80922230 = {
    {0xA, 9, 0, 0, 8, 3},
    {0, {0x8000000, 0, 2}, {0, 0, 0}, 1, 0, 0},
    {
        {
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
        },
    },
};
static Vec3f D_80922284 = {100.0f, 700.0f, 0.0f};
static Vec3f D_80922290 = {400.0f, 27.0f, 0.0f};
static Vec3f D_8092229C = {-100.0f, 700.0f, 0.0f};
static Vec3f D_809222A8 = {-400.0f, 27.0f, 0.0f};
static Vec3f D_809222B4 = {0.0f, 700.0f, 100.0f};
static Vec3f D_809222C0 = {0.0f, 27.0f, 400.0f};
static Vec3f D_809222CC = {0.0f, 700.0f, -100.0f};
static Vec3f D_809222D8 = {0.0f, 27.0f, -400.0f};
static InitChainEntry fireArrowActorInitVars;       /* unable to generate initializer */

typedef struct ArrowFire {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderQuad unk144;               /* inferred */
    /* 0x01C4 */ ColliderQuad unk1C4;               /* inferred */
    /* 0x0244 */ f32 unk244;                        /* inferred */
    /* 0x0248 */ f32 unk248;                        /* inferred */
    /* 0x024C */ f32 unk24C;                        /* inferred */
    /* 0x0250 */ f32 unk250;                        /* inferred */
    /* 0x0254 */ f32 unk254;                        /* inferred */
    /* 0x0258 */ void (*actionFunc)(ArrowFire *, GlobalContext *);
    /* 0x025C */ s16 unk25C;                        /* inferred */
    /* 0x025E */ u16 unk25E;                        /* inferred */
    /* 0x0260 */ u8 unk260;                         /* inferred */
    /* 0x0261 */ char pad261[0x3];                  /* maybe part of unk260[4]? */
} ArrowFire;                                        /* size 0x264 */

void ArrowFire_SetupAction(ArrowFire *this, void (*actionFunc)(ArrowFire *, GlobalContext *)) {
    ArrowFire *self = (ArrowFire *) this;
    self->actionFunc = actionFunc;
}

void ArrowFire_Init(Actor *thisx, GlobalContext *globalCtx) {
    ArrowFire *this = (ArrowFire *) thisx;
    Actor_ProcessInitChain(&this->actor, &fireArrowActorInitVars);
    this->unk25C = 0;
    this->unk250 = 1.0f;
    ArrowFire_SetupAction(this, func_80920440);
    Actor_SetScale(&this->actor, 0.01f);
    this->unk260 = 0xA0;
    this->unk25E = 0;
    this->unk254 = 0.0f;
    Collider_InitAndSetQuad(globalCtx, &this->unk144, &this->actor, &D_80922230);
    Collider_InitAndSetQuad(globalCtx, &this->unk1C4, &this->actor, &D_80922230);
}

void ArrowFire_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ArrowFire *this = (ArrowFire *) thisx;
    func_80115D5C(globalCtx);
    Collider_DestroyQuad(globalCtx, &this->unk144);
    Collider_DestroyQuad(globalCtx, &this->unk1C4);
}

void func_80920440(ArrowFire *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    PosRot *sp18;
    Actor *temp_v0;
    ArrowFire *temp_a0;
    PosRot *temp_v1_2;
    s16 temp_v1;

    temp_v0 = this->actor.parent;
    if ((temp_v0 == 0) || (temp_v0->update == 0)) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    temp_v1 = this->unk25C;
    if ((s32) temp_v1 < 0xA) {
        this->unk25C = temp_v1 + 1;
    }
    temp_v1_2 = &this->actor.world;
    temp_v1_2->pos.x = temp_v0->world.pos.x;
    temp_v1_2->pos.y = temp_v0->world.pos.y;
    temp_v1_2->pos.z = temp_v0->world.pos.z;
    this->unkBC = (unaligned s32) temp_v0->unkBC;
    this->actor.shape.rot.z = (s16) (u16) temp_v0->shape.rot.z;
    sp18 = temp_v1_2;
    sp1C = temp_v0;
    func_800B9010(&this->actor, 0x7DU);
    temp_a0 = this;
    if (temp_v0->parent == 0) {
        temp_a0->unk244 = temp_v1_2->pos.x;
        temp_a0->unk248 = temp_v1_2->pos.y;
        temp_a0->unk25C = 0xA;
        temp_a0->unk24C = temp_v1_2->pos.z;
        this = temp_a0;
        ArrowFire_SetupAction(temp_a0, func_809207A0);
        this->unk260 = 0xFF;
    }
}

void FireArrow_Lerp(void *arg0, f32 *arg1, f32 arg2) {
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f2;

    temp_f0 = arg0->unk0;
    temp_f2 = arg0->unk4;
    temp_f14 = arg0->unk8;
    arg0->unk0 = (f32) (temp_f0 + ((arg1->unk0 - temp_f0) * arg2));
    arg0->unk4 = (f32) (temp_f2 + ((arg1->unk4 - temp_f2) * arg2));
    arg0->unk8 = (f32) (temp_f14 + ((arg1->unk8 - temp_f14) * arg2));
}

void func_8092058C(ArrowFire *this, GlobalContext *globalCtx) {
    CollisionCheckContext *sp18;
    ColliderQuad *temp_a2;
    CollisionCheckContext *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f2;
    s32 temp_v1_2;
    u16 temp_t6;
    u16 temp_v1;
    f32 phi_f12;
    s32 phi_v1;
    s32 phi_v0;
    s32 phi_v0_2;

    temp_f0 = this->actor.projectedW;
    if (temp_f0 < 50.0f) {
        phi_f12 = 10.0f;
    } else if (temp_f0 > 950.0f) {
        phi_f12 = 310.0f;
    } else {
        phi_f12 = ((temp_f0 - 50.0f) * 0.33333334f) + 10.0f;
    }
    temp_v1 = this->unk25E;
    temp_t6 = temp_v1 - 1;
    phi_v1 = (s32) temp_v1;
    if (temp_v1 != 0) {
        temp_v1_2 = temp_t6 & 0xFFFF;
        this->unk25E = temp_t6;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 >= 8) {
            temp_f0_2 = (f32) (temp_v1_2 - 8) * 0.041666668f;
            temp_f2 = this->unk250;
            this->unk25C = (s16) (s32) (((1.0f - (temp_f0_2 * temp_f0_2)) * phi_f12) + 10.0f);
            this->unk250 = temp_f2 + ((2.0f - temp_f2) * 0.1f);
            if (temp_v1_2 < 0x10) {
                this->unk260 = (temp_v1_2 * 0x23) - 0x118;
            }
        }
    }
    phi_v0 = phi_v1;
    if (phi_v1 >= 9) {
        temp_f0_3 = this->unk254;
        if (temp_f0_3 < 1.0f) {
            this->unk254 = temp_f0_3 + 0.25f;
            phi_v0 = (s32) this->unk25E;
        }
    } else {
        temp_f0_4 = this->unk254;
        if (temp_f0_4 > 0.0f) {
            this->unk254 = temp_f0_4 - 0.125f;
            phi_v0 = (s32) this->unk25E;
        }
    }
    phi_v0_2 = phi_v0;
    if (phi_v0 < 8) {
        this->unk260 = 0;
        phi_v0_2 = (s32) this->unk25E;
    }
    if (phi_v0_2 == 0) {
        this->unk25E = 0xFF;
        Actor_MarkForDeath(&this->actor);
        return;
    }
    if (phi_v0_2 >= 0xD) {
        temp_a1 = &globalCtx->colChkCtx;
        sp18 = temp_a1;
        temp_a2 = &this->unk144;
        this = this;
        CollisionCheck_SetAT(globalCtx, temp_a1, &temp_a2->base);
        CollisionCheck_SetAT(globalCtx, temp_a1, &this->unk1C4.base);
    }
}

void func_809207A0(ArrowFire *this, GlobalContext *globalCtx) {
    Actor *sp34;
    PosRot *sp28;
    f32 *sp24;
    Actor *temp_v0;
    PosRot *temp_a1;
    f32 *temp_a0;
    f32 temp_f2;
    s32 temp_cond;
    u8 temp_v0_2;

    temp_v0 = this->actor.parent;
    if ((temp_v0 == 0) || (temp_v0->update == 0)) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    temp_a1 = &this->actor.world;
    temp_a0 = &this->unk244;
    temp_a1->pos.x = temp_v0->world.pos.x;
    temp_a1->pos.y = temp_v0->world.pos.y;
    temp_a1->pos.z = temp_v0->world.pos.z;
    this->unkBC = (unaligned s32) temp_v0->unkBC;
    this->actor.shape.rot.z = (s16) (u16) temp_v0->shape.rot.z;
    sp28 = temp_a1;
    sp24 = temp_a0;
    sp34 = temp_v0;
    temp_f2 = Math_Vec3f_DistXYZ((Vec3f *) temp_a0, &temp_a1->pos) * 0.041666668f;
    temp_cond = temp_f2 < 1.0f;
    this->unk250 = temp_f2;
    if (temp_cond) {
        this->unk250 = 1.0f;
    }
    sp34 = temp_v0;
    FireArrow_Lerp((bitwise void *) 1.0f, temp_a0, (bitwise f32) temp_a1, 0x3D4CCCCD);
    if ((temp_v0->unk261 & 1) != 0) {
        Audio_PlayActorSound2(&this->actor, 0x183AU);
        ArrowFire_SetupAction(this, func_8092058C);
        this->unk25E = 0x20;
        this->unk260 = 0xFF;
        return;
    }
    if ((s32) temp_v0->unk260 < 0x22) {
        temp_v0_2 = this->unk260;
        if ((s32) temp_v0_2 < 0x23) {
            Actor_MarkForDeath(&this->actor);
            return;
        }
        this->unk260 = temp_v0_2 - 0x19;
        // Duplicate return node #11. Try simplifying control flow for better match
    }
}

void ArrowFire_Update(Actor *thisx, GlobalContext *globalCtx) {
    ArrowFire *this = (ArrowFire *) thisx;
    u8 temp_v0;

    temp_v0 = globalCtx->msgCtx.unk11F22;
    if ((temp_v0 == 0xE) || (temp_v0 == 0x12)) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->actionFunc(this, globalCtx);
}

void func_80920948(ArrowFire *arg0) {
    Vec3f sp44;
    Vec3f sp38;
    Vec3f sp2C;
    Vec3f sp20;

    SysMatrix_MultiplyVector3fByState(&D_80922284, &sp44);
    SysMatrix_MultiplyVector3fByState(&D_80922290, &sp38);
    SysMatrix_MultiplyVector3fByState(&D_8092229C, &sp2C);
    SysMatrix_MultiplyVector3fByState(&D_809222A8, &sp20);
    Collider_SetQuadVertices(arg0 + 0x144, &sp44, &sp38, &sp2C, &sp20);
    SysMatrix_MultiplyVector3fByState(&D_809222B4, &sp44);
    SysMatrix_MultiplyVector3fByState(&D_809222C0, &sp38);
    SysMatrix_MultiplyVector3fByState(&D_809222CC, &sp2C);
    SysMatrix_MultiplyVector3fByState(&D_809222D8, &sp20);
    Collider_SetQuadVertices(arg0 + 0x1C4, &sp44, &sp38, &sp2C, &sp20);
}

void ArrowFire_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ArrowFire *this = (ArrowFire *) thisx;
    u32 sp74;
    ArrowFire *sp6C;
    Gfx *sp48;
    Gfx *sp40;
    Actor *temp_v1;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s0;
    f32 temp_f0;
    f32 temp_f12;
    ArrowFire *phi_v0;

    sp74 = globalCtx->state.frames;
    temp_v1 = this->actor.parent;
    if ((temp_v1 != 0) && (temp_v1->update != 0) && ((s32) this->unk25E < 0xFF)) {
        if ((temp_v1->unk261 & 2) != 0) {
            phi_v0 = this;
        } else {
            phi_v0 = (ArrowFire *) temp_v1;
        }
        temp_s0 = globalCtx->state.gfxCtx;
        sp6C = phi_v0;
        SysMatrix_InsertTranslation(phi_v0->actor.world.pos.x, phi_v0->actor.world.pos.y, phi_v0->actor.world.pos.z, 0);
        Matrix_RotateY(phi_v0->actor.shape.rot.y, 1U);
        SysMatrix_InsertXRotation_s(phi_v0->actor.shape.rot.x, 1);
        SysMatrix_InsertZRotation_s(phi_v0->actor.shape.rot.z, 1);
        Matrix_Scale(0.01f, 0.01f, 0.01f, 1);
        if (this->unk254 > 0.0f) {
            temp_s0->polyXlu.p = func_8012BFC4(temp_s0->polyXlu.p);
            temp_v0 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0 + 8;
            temp_v0->words.w0 = 0xFA000000;
            temp_f0 = this->unk254;
            temp_v0->words.w1 = ((s32) (temp_f0 * 40.0f) << 0x18) | ((s32) (150.0f * temp_f0) & 0xFF);
            temp_v0_2 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_2 + 8;
            temp_v0_2->words.w1 = 0x30;
            temp_v0_2->words.w0 = 0xE3001A01;
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = 0xC0;
            temp_v0_3->words.w0 = 0xE3001801;
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDE000000;
            temp_v0_4->words.w1 = (u32) &D_0E0002E0;
        }
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xFA008080;
        temp_v0_5->words.w1 = this->unk260 | 0xFFC80000;
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w1 = 0xFF000080;
        temp_v0_6->words.w0 = 0xFB000000;
        SysMatrix_InsertRotation(0x4000, 0, 0, 1);
        if (this->unk25E != 0) {
            SysMatrix_InsertTranslation(0.0f, 0.0f, 0.0f, 1);
        } else {
            SysMatrix_InsertTranslation(0.0f, 1500.0f, 0.0f, 1);
        }
        temp_f12 = (f32) this->unk25C * 0.2f;
        Matrix_Scale(temp_f12, this->unk250 * 4.0f, temp_f12, 1);
        SysMatrix_InsertTranslation(0.0f, -700.0f, 0.0f, 1);
        temp_v0_7 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xDA380003;
        sp48 = temp_v0_7;
        sp48->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        func_80920948(this);
        temp_v0_8 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_8 + 8;
        temp_v0_8->words.w1 = (u32) &D_809220A0;
        temp_v0_8->words.w0 = 0xDE000000;
        temp_v0_9 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_9 + 8;
        temp_v0_9->words.w0 = 0xDE000000;
        sp40 = temp_v0_9;
        sp40->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0xFF - ((sp74 * 2) & 0xFF), 0U, 0x40, 0x20, 1, 0xFF - (sp74 & 0xFF), 0x1FF - ((sp74 * 0xA) & 0x1FF), 0x40, 0x40);
        temp_v0_10 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_10 + 8;
        temp_v0_10->words.w1 = (u32) &D_80922150;
        temp_v0_10->words.w0 = 0xDE000000;
    }
}

