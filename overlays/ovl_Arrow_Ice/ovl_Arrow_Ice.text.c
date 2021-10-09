? func_80115D5C(GlobalContext *);                   /* extern */
void func_809225D0(void *arg0, f32 *arg1, f32 arg2, ?); /* static */
extern ? D_0E0002E0;
static ? D_80924060;                                /* unable to generate initializer */
static ? D_80924110;                                /* unable to generate initializer */
static InitChainEntry D_809241F0;                   /* unable to generate initializer */

typedef struct ArrowIce {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s16 unk144;                        /* inferred */
    /* 0x0146 */ u16 unk146;                        /* inferred */
    /* 0x0148 */ u8 unk148;                         /* inferred */
    /* 0x0149 */ char pad149[0x3];                  /* maybe part of unk148[4]? */
    /* 0x014C */ f32 unk14C;                        /* inferred */
    /* 0x0150 */ f32 unk150;                        /* inferred */
    /* 0x0154 */ f32 unk154;                        /* inferred */
    /* 0x0158 */ f32 unk158;                        /* inferred */
    /* 0x015C */ f32 unk15C;                        /* inferred */
    /* 0x0160 */ void (*actionFunc)(ArrowIce *, GlobalContext *);
} ArrowIce;                                         /* size 0x164 */

void ArrowIce_SetupAction(ArrowIce *this, void (*actionFunc)(ArrowIce *, GlobalContext *)) {
    ArrowIce *self = (ArrowIce *) this;
    self->actionFunc = actionFunc;
}

void ArrowIce_Init(Actor *thisx, GlobalContext *globalCtx) {
    ArrowIce *this = (ArrowIce *) thisx;
    Actor_ProcessInitChain(&this->actor, &D_809241F0);
    this->unk144 = 0;
    this->unk158 = 1.0f;
    ArrowIce_SetupAction(this, func_809224DC);
    Actor_SetScale(&this->actor, 0.01f);
    this->unk148 = 0x64;
    this->unk146 = 0;
    this->unk15C = 0.0f;
}

void ArrowIce_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ArrowIce *this = (ArrowIce *) thisx;
    func_80115D5C(globalCtx);
}

void func_809224DC(ArrowIce *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    PosRot *sp18;
    Actor *temp_v0;
    ArrowIce *temp_a0;
    PosRot *temp_v1_2;
    s16 temp_v1;

    temp_v0 = this->actor.parent;
    if ((temp_v0 == 0) || (temp_v0->update == 0)) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    temp_v1 = this->unk144;
    if ((s32) temp_v1 < 0xA) {
        this->unk144 = temp_v1 + 1;
    }
    temp_v1_2 = &this->actor.world;
    temp_v1_2->pos.x = temp_v0->world.pos.x;
    temp_v1_2->pos.y = temp_v0->world.pos.y;
    temp_v1_2->pos.z = temp_v0->world.pos.z;
    this->unkBC = (unaligned s32) temp_v0->unkBC;
    this->actor.shape.rot.z = (s16) (u16) temp_v0->shape.rot.z;
    sp18 = temp_v1_2;
    sp1C = temp_v0;
    func_800B9010(&this->actor, 0x7EU);
    temp_a0 = this;
    if (temp_v0->parent == 0) {
        temp_a0->unk14C = temp_v1_2->pos.x;
        temp_a0->unk150 = temp_v1_2->pos.y;
        temp_a0->unk144 = 0xA;
        temp_a0->unk154 = temp_v1_2->pos.z;
        this = temp_a0;
        ArrowIce_SetupAction(temp_a0, func_809227F4);
        this->unk148 = 0xFF;
    }
}

void func_809225D0(void *arg0, f32 *arg1, f32 arg2) {
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

void func_80922628(ArrowIce *this, GlobalContext *globalCtx) {
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
    temp_v1 = this->unk146;
    temp_t6 = temp_v1 - 1;
    phi_v1 = (s32) temp_v1;
    if (temp_v1 != 0) {
        temp_v1_2 = temp_t6 & 0xFFFF;
        this->unk146 = temp_t6;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 >= 8) {
            temp_f0_2 = (f32) (temp_v1_2 - 8) * 0.041666668f;
            temp_f2 = this->unk158;
            this->unk144 = (s16) (s32) (((1.0f - (temp_f0_2 * temp_f0_2)) * phi_f12) + 10.0f);
            this->unk158 = temp_f2 + ((2.0f - temp_f2) * 0.1f);
            if (temp_v1_2 < 0x10) {
                this->unk148 = (temp_v1_2 * 0x23) - 0x118;
            }
        }
    }
    phi_v0 = phi_v1;
    if (phi_v1 >= 9) {
        temp_f0_3 = this->unk15C;
        if (temp_f0_3 < 1.0f) {
            this->unk15C = temp_f0_3 + 0.25f;
            phi_v0 = (s32) this->unk146;
        }
    } else {
        temp_f0_4 = this->unk15C;
        if (temp_f0_4 > 0.0f) {
            this->unk15C = temp_f0_4 - 0.125f;
            phi_v0 = (s32) this->unk146;
        }
    }
    phi_v0_2 = phi_v0;
    if (phi_v0 < 8) {
        this->unk148 = 0;
        phi_v0_2 = (s32) this->unk146;
    }
    if (phi_v0_2 == 0) {
        this->unk146 = 0xFF;
        Actor_MarkForDeath(&this->actor);
    }
}

void func_809227F4(ArrowIce *this, GlobalContext *globalCtx) {
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
    temp_a0 = &this->unk14C;
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
    this->unk158 = temp_f2;
    if (temp_cond) {
        this->unk158 = 1.0f;
    }
    sp34 = temp_v0;
    func_809225D0((bitwise void *) 1.0f, temp_a0, (bitwise f32) temp_a1, 0x3D4CCCCD);
    if ((temp_v0->unk261 & 1) != 0) {
        Audio_PlayActorSound2(&this->actor, 0x183BU);
        ArrowIce_SetupAction(this, func_80922628);
        this->unk146 = 0x20;
        this->unk148 = 0xFF;
        return;
    }
    if ((s32) temp_v0->unk260 < 0x22) {
        temp_v0_2 = this->unk148;
        if ((s32) temp_v0_2 < 0x23) {
            Actor_MarkForDeath(&this->actor);
            return;
        }
        this->unk148 = temp_v0_2 - 0x19;
        // Duplicate return node #11. Try simplifying control flow for better match
    }
}

void ArrowIce_Update(Actor *thisx, GlobalContext *globalCtx) {
    ArrowIce *this = (ArrowIce *) thisx;
    u8 temp_v0;

    temp_v0 = globalCtx->msgCtx.unk11F22;
    if ((temp_v0 == 0xE) || (temp_v0 == 0x12)) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->actionFunc(this, globalCtx);
}

void ArrowIce_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ArrowIce *this = (ArrowIce *) thisx;
    ArrowIce *sp74;
    u32 sp70;
    Gfx *sp48;
    Gfx *sp40;
    Actor *temp_v1;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    Gfx *temp_v1_2;
    GraphicsContext *temp_s0;
    f32 temp_f0;
    f32 temp_f12;
    u32 temp_v1_3;
    ArrowIce *phi_v0;

    sp70 = globalCtx->state.frames;
    temp_v1 = this->actor.parent;
    if ((temp_v1 != 0) && (temp_v1->update != 0) && ((s32) this->unk146 < 0xFF)) {
        if ((temp_v1->unk261 & 2) != 0) {
            phi_v0 = this;
        } else {
            phi_v0 = (ArrowIce *) temp_v1;
        }
        temp_s0 = globalCtx->state.gfxCtx;
        sp74 = phi_v0;
        SysMatrix_InsertTranslation(phi_v0->actor.world.pos.x, phi_v0->actor.world.pos.y, phi_v0->actor.world.pos.z, 0);
        Matrix_RotateY(phi_v0->actor.shape.rot.y, 1U);
        SysMatrix_InsertXRotation_s(phi_v0->actor.shape.rot.x, 1);
        SysMatrix_InsertZRotation_s(phi_v0->actor.shape.rot.z, 1);
        Matrix_Scale(0.01f, 0.01f, 0.01f, 1);
        if (this->unk15C > 0.0f) {
            temp_s0->polyXlu.p = func_8012BFC4(temp_s0->polyXlu.p);
            temp_v0 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0 + 8;
            temp_v0->words.w0 = 0xFA000000;
            temp_f0 = this->unk15C;
            temp_v0->words.w1 = (((s32) (temp_f0 * 10.0f) & 0xFF) << 0x10) | (((s32) (50.0f * temp_f0) & 0xFF) << 8) | ((s32) (150.0f * temp_f0) & 0xFF);
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
        temp_v1_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v1_2 + 8;
        temp_v1_2->words.w0 = 0xFA008080;
        temp_v1_2->words.w1 = ((s32) ((f32) this->unk148 * 0.5f) & 0xFF) | 0xAAFFFF00;
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = 0xFF80;
        temp_v0_5->words.w0 = 0xFB000000;
        SysMatrix_InsertRotation(0x4000, 0, 0, 1);
        if (this->unk146 != 0) {
            SysMatrix_InsertTranslation(0.0f, 0.0f, 0.0f, 1);
        } else {
            SysMatrix_InsertTranslation(0.0f, 1500.0f, 0.0f, 1);
        }
        temp_f12 = (f32) this->unk144 * 0.2f;
        Matrix_Scale(temp_f12, this->unk158 * 3.0f, temp_f12, 1);
        SysMatrix_InsertTranslation(0.0f, -700.0f, 0.0f, 1);
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xDA380003;
        sp48 = temp_v0_6;
        sp48->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_7 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_7 + 8;
        temp_v0_7->words.w1 = (u32) &D_80924060;
        temp_v0_7->words.w0 = 0xDE000000;
        temp_v0_8 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_8 + 8;
        temp_v0_8->words.w0 = 0xDE000000;
        temp_v1_3 = 0x1FF - ((sp70 * 0xA) & 0x1FF);
        sp40 = temp_v0_8;
        sp40->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0x1FF - ((sp70 * 5) & 0x1FF), 0U, 0x80, 0x20, 1, temp_v1_3, temp_v1_3, 4, 0x10);
        temp_v0_9 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_9 + 8;
        temp_v0_9->words.w1 = (u32) &D_80924110;
        temp_v0_9->words.w0 = 0xDE000000;
    }
}

