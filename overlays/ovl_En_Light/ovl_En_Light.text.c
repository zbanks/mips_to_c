void func_80865BF8(EnLight *arg0, GlobalContext *arg1); /* static */
void func_80865F38(Actor *this, GlobalContext *globalCtx); /* static */
extern Gfx D_0401ACF0;
static ? D_808666D0;                                /* unable to generate initializer */
static ? D_808666D7;                                /* unable to generate initializer */

typedef struct EnLight {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ u8 unk144;                         /* inferred */
    /* 0x0145 */ char pad145[0x3];                  /* maybe part of unk144[4]? */
    /* 0x0148 */ LightNode *unk148;                 /* inferred */
    /* 0x014C */ LightInfo unk14C;                  /* inferred */
    /* 0x015A */ char pad15A[0x2];
} EnLight;                                          /* size 0x15C */

void EnLight_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnLight *this = (EnLight *) thisx;
    LightInfo *sp30;
    LightInfo *temp_a0;
    LightInfo *temp_a0_2;
    f32 temp_f6;
    s16 temp_v1;
    s16 temp_v1_2;
    u8 temp_t8;
    s32 phi_v0;
    s32 phi_v0_2;
    f32 phi_f6;

    temp_v1 = this->actor.params;
    if ((temp_v1 & 0x4000) == 0) {
        temp_a0 = &this->unk14C;
        if ((gSaveContext.gameMode == 3) || ((temp_v1 & 0x2000) != 0)) {
            if ((s32) temp_v1 < 0) {
                phi_v0_2 = 1;
            } else {
                phi_v0_2 = 0x28;
            }
            sp30 = temp_a0;
            Lights_PointNoGlowSetInfo(temp_a0, (s16) (s32) this->actor.world.pos.x, (s16) (phi_v0_2 + (s32) this->actor.world.pos.y), (s16) (s32) this->actor.world.pos.z, (u8) 0xFF, (u8) 0xFF, (u8) 0xB4, (s16) -1);
        } else {
            temp_a0_2 = &this->unk14C;
            if ((s32) temp_v1 < 0) {
                phi_v0 = 1;
            } else {
                phi_v0 = 0x28;
            }
            sp30 = temp_a0_2;
            Lights_PointGlowSetInfo(temp_a0_2, (s16) (s32) this->actor.world.pos.x, (s16) (phi_v0 + (s32) this->actor.world.pos.y), (s16) (s32) this->actor.world.pos.z, (u8) 0xFF, (u8) 0xFF, (u8) 0xB4, (s16) -1);
        }
        this->unk148 = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, sp30);
    }
    temp_t8 = *(&D_808666D7 + ((this->actor.params & 0xF) * 8));
    temp_f6 = (f32) temp_t8;
    phi_f6 = temp_f6;
    if ((s32) temp_t8 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    Actor_SetScale(&this->actor, phi_f6 * 0.0001f);
    temp_v1_2 = this->actor.params;
    this->unk144 = (u8) (s32) (Rand_ZeroOne() * 255.0f);
    if ((temp_v1_2 & 0x800) != 0) {
        this->actor.update = func_80865F38;
        if (((temp_v1_2 & 0x1000) != 0) && (Flags_GetSwitch(globalCtx, (s32) (temp_v1_2 & 0x7F0) >> 4) != 0)) {
            Actor_SetScale(&this->actor, 0.0f);
            return;
        }
        // Duplicate return node #20. Try simplifying control flow for better match
        return;
    }
    if ((temp_v1_2 & 0x2000) != 0) {
        this->actor.draw = NULL;
    }
}

void EnLight_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnLight *this = (EnLight *) thisx;
    if ((this->actor.params & 0x4000) == 0) {
        LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, this->unk148);
    }
}

void func_80865BF8(EnLight *arg0, GlobalContext *arg1) {
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    s32 temp_v1;

    arg0 = arg0;
    temp_v1 = arg0->actor.parent;
    arg0->actor.shape.rot.y = func_800DFCDC((arg1 + (arg1->activeCamera * 4))->unk800) + 0x8000;
    temp_a0 = arg0 + 0x24;
    temp_a1 = temp_v1 + 0x24;
    if (temp_v1 != 0) {
        arg0 = arg0;
        Math_Vec3f_Copy(temp_a0, temp_a1);
        arg0->actor.world.pos.y += 17.0f;
    }
    arg0->unk144 += 1;
}

void EnLight_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnLight *this = (EnLight *) thisx;
    void *sp28;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f8;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    u8 temp_t2;
    u8 temp_t4;
    u8 temp_t6;
    void *temp_t0;
    f32 phi_f8;
    f32 phi_f6;
    f32 phi_f4;
    s32 phi_v0;
    s32 phi_v1;

    temp_v0 = this->actor.params;
    if ((temp_v0 & 0x4000) == 0) {
        temp_t0 = ((temp_v0 & 0xF) * 8) + &D_808666D0;
        sp28 = temp_t0;
        temp_v0_2 = this->actor.params;
        temp_f2 = (Rand_ZeroOne() * 0.5f) + 0.5f;
        if ((s32) temp_v0_2 < 0) {
            phi_v0 = 0x64;
        } else {
            phi_v1 = 0x12C;
            if ((temp_v0_2 & 0x2000) != 0) {
                phi_v1 = 0x2DA;
            }
            phi_v0 = phi_v1;
        }
        temp_t2 = temp_t0->unk0;
        temp_f8 = (f32) temp_t2;
        phi_f8 = temp_f8;
        if ((s32) temp_t2 < 0) {
            phi_f8 = temp_f8 + 4294967296.0f;
        }
        temp_t4 = temp_t0->unk1;
        temp_f6 = (f32) temp_t4;
        phi_f6 = temp_f6;
        if ((s32) temp_t4 < 0) {
            phi_f6 = temp_f6 + 4294967296.0f;
        }
        temp_t6 = temp_t0->unk2;
        temp_f4 = (f32) temp_t6;
        phi_f4 = temp_f4;
        if ((s32) temp_t6 < 0) {
            phi_f4 = temp_f4 + 4294967296.0f;
        }
        Lights_PointSetColorAndRadius(&this->unk14C, (u32) (phi_f8 * temp_f2) & 0xFF, (u32) (phi_f6 * temp_f2) & 0xFF, (u32) (phi_f4 * temp_f2) & 0xFF, (s16) phi_v0);
    }
    func_80865BF8(this, globalCtx);
    temp_v0_3 = this->actor.params;
    if (((s32) temp_v0_3 >= 0) && ((temp_v0_3 & 0x4000) == 0)) {
        Audio_PlayActorSound2(&this->actor, 0x2031U);
    }
}

void func_80865F38(Actor *this, GlobalContext *globalCtx) {
    void *sp38;
    f32 sp30;
    s32 sp2C;
    f32 temp_f10;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    s16 temp_v0;
    u8 temp_t0_2;
    u8 temp_t1;
    u8 temp_t2;
    u8 temp_t4;
    u8 temp_t6;
    void *temp_t0;
    f32 phi_f6;
    f32 phi_f6_2;
    f32 phi_f18;
    f32 phi_f6_3;
    f32 phi_f10;

    temp_t0 = ((this->params & 0xF) * 8) + &D_808666D0;
    sp38 = temp_t0;
    temp_t1 = temp_t0->unk7;
    temp_f6 = (f32) temp_t1;
    phi_f6 = temp_f6;
    if ((s32) temp_t1 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    sp2C = 0;
    sp30 = this->scale.x / (phi_f6 * 0.0001f);
    temp_v0 = this->params;
    if ((temp_v0 & 0x1000) != 0) {
        if (Flags_GetSwitch(globalCtx, (s32) (temp_v0 & 0x7F0) >> 4) != 0) {
            Math_StepToF(&sp30, 1.0f, 0.05f);
            sp2C = 1;
        } else {
            if (sp30 < 0.1f) {
                Actor_SetScale(this, 0.0f);
                sp30 = 0.0f;
            }
            Math_StepToF(&sp30, 0.0f, 0.05f);
        }
    } else if (Flags_GetSwitch(globalCtx, (s32) (temp_v0 & 0x7F0) >> 4) != 0) {
        if (sp30 < 0.1f) {
            Actor_SetScale(this, 0.0f);
            sp30 = 0.0f;
        }
        Math_StepToF(&sp30, 0.0f, 0.05f);
    } else {
        Math_StepToF(&sp30, 1.0f, 0.05f);
        sp2C = 1;
    }
    temp_t6 = sp38->unk7;
    temp_f6_2 = (f32) temp_t6;
    phi_f6_2 = temp_f6_2;
    if ((s32) temp_t6 < 0) {
        phi_f6_2 = temp_f6_2 + 4294967296.0f;
    }
    Actor_SetScale(this, phi_f6_2 * 0.0001f * sp30);
    if ((this->params & 0x4000) == 0) {
        temp_t0_2 = sp38->unk0;
        temp_f2 = (Rand_ZeroOne() * 0.5f) + 0.5f;
        temp_f18 = (f32) temp_t0_2;
        phi_f18 = temp_f18;
        if ((s32) temp_t0_2 < 0) {
            phi_f18 = temp_f18 + 4294967296.0f;
        }
        temp_t2 = sp38->unk1;
        temp_f6_3 = (f32) temp_t2;
        phi_f6_3 = temp_f6_3;
        if ((s32) temp_t2 < 0) {
            phi_f6_3 = temp_f6_3 + 4294967296.0f;
        }
        temp_t4 = sp38->unk2;
        temp_f10 = (f32) temp_t4;
        phi_f10 = temp_f10;
        if ((s32) temp_t4 < 0) {
            phi_f10 = temp_f10 + 4294967296.0f;
        }
        Lights_PointSetColorAndRadius(this + 0x14C, (u32) (phi_f18 * temp_f2) & 0xFF, (u32) (phi_f6_3 * temp_f2) & 0xFF, (u32) (phi_f10 * temp_f2) & 0xFF, (s16) (s32) (300.0f * sp30));
    }
    func_80865BF8((EnLight *) this, globalCtx);
    if (((s32) this->params >= 0) && (sp2C == 1)) {
        Audio_PlayActorSound2(this, 0x2031U);
    }
}

void EnLight_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnLight *this = (EnLight *) thisx;
    void *sp6C;
    Gfx *sp68;
    Gfx *sp5C;
    Gfx *sp50;
    Gfx *sp44;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    u8 temp_v1;
    void *temp_t0;

    temp_t0 = ((this->actor.params & 0xF) * 8) + &D_808666D0;
    temp_a0 = globalCtx->state.gfxCtx;
    sp6C = temp_t0;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    if ((s32) this->actor.params >= 0) {
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060020;
        sp6C = temp_t0;
        sp5C = temp_v0;
        sp5C->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((s32) this->unk144 * -0x14) & 0x1FF, 0x20, 0x80);
        sp68 = D_0407D590;
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFA008080;
        temp_v0_2->words.w1 = (temp_t0->unk0 << 0x18) | (temp_t0->unk1 << 0x10) | (temp_t0->unk2 << 8) | temp_t0->unk3;
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFB000000;
        temp_v0_3->words.w1 = (temp_t0->unk4 << 0x18) | (temp_t0->unk5 << 0x10) | (temp_t0->unk6 << 8);
    } else {
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDB060020;
        temp_v1 = this->unk144;
        sp50 = temp_v0_4;
        sp50->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x10, 0x20, 1, (temp_v1 * 2) & 0x3F, ((s32) temp_v1 * -6) & 0x7F, 0x10, 0x20);
        sp68 = &D_0401ACF0;
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = 0xFFC80000;
        temp_v0_5->words.w0 = 0xFA00C0C0;
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w1 = 0xFF000000;
        temp_v0_6->words.w0 = 0xFB000000;
    }
    Matrix_RotateY((s16) ((func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) - this->actor.shape.rot.y) + 0x8000), 1U);
    if ((this->actor.params & 1) != 0) {
        SysMatrix_InsertYRotation_f(3.1415927f, 1);
    }
    Matrix_Scale(1.0f, 1.0f, 1.0f, 1);
    temp_v0_7 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w0 = 0xDA380003;
    sp44 = temp_v0_7;
    sp44->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_8 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_8 + 8;
    temp_v0_8->words.w0 = 0xDE000000;
    temp_v0_8->words.w1 = (u32) sp68;
}

