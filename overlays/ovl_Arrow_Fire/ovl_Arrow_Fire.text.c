typedef struct ArrowFire {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderQuad unk_144;               /* inferred */
    /* 0x1C4 */ ColliderQuad unk_1C4;               /* inferred */
    /* 0x244 */ f32 unk_244;                        /* inferred */
    /* 0x248 */ f32 unk_248;                        /* inferred */
    /* 0x24C */ f32 unk_24C;                        /* inferred */
    /* 0x250 */ f32 unk_250;                        /* inferred */
    /* 0x254 */ f32 unk_254;                        /* inferred */
    /* 0x258 */ void (*actionFunc)(ArrowFire *, GlobalContext *);
    /* 0x25C */ s16 unk_25C;                        /* inferred */
    /* 0x25E */ u16 unk_25E;                        /* inferred */
    /* 0x260 */ u8 unk_260;                         /* inferred */
    /* 0x261 */ char pad_261[0x3];                  /* maybe part of unk_260[4]? */
} ArrowFire;                                        /* size = 0x264 */

struct _mips2c_stack_ArrowFire_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ArrowFire_Draw {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ Gfx *sp48;                           /* inferred */
    /* 0x4C */ char pad_4C[0x20];                   /* maybe part of sp48[9]? */
    /* 0x6C */ ArrowFire *sp6C;                     /* inferred */
    /* 0x70 */ char pad_70[0x4];
    /* 0x74 */ u32 sp74;                            /* inferred */
    /* 0x78 */ char pad_78[0x8];
};                                                  /* size = 0x80 */

struct _mips2c_stack_ArrowFire_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ArrowFire_SetupAction {};      /* size 0x0 */

struct _mips2c_stack_ArrowFire_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_FireArrow_Lerp {};             /* size 0x0 */

struct _mips2c_stack_func_80920440 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ PosRot *sp18;                        /* inferred */
    /* 0x1C */ Actor *sp1C;                         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8092058C {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ CollisionCheckContext *sp18;         /* inferred */
    /* 0x1C */ char pad_1C[0xC];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809207A0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 *sp24;                           /* inferred */
    /* 0x28 */ PosRot *sp28;                        /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ Actor *sp34;                         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80920948 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0xC];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0xC];
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0xC];
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0xC];
};                                                  /* size = 0x50 */

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

void ArrowFire_SetupAction(ArrowFire *this, void (*actionFunc)(ArrowFire *, GlobalContext *)) {
    this->actionFunc = actionFunc;
}

void ArrowFire_Init(Actor *thisx, GlobalContext *globalCtx) {
    ArrowFire *this = (ArrowFire *) thisx;
    Actor_ProcessInitChain((Actor *) this, &fireArrowActorInitVars);
    this->unk_25C = 0;
    this->unk_250 = 1.0f;
    ArrowFire_SetupAction(this, func_80920440);
    Actor_SetScale((Actor *) this, 0.01f);
    this->unk_260 = 0xA0;
    this->unk_25E = 0;
    this->unk_254 = 0.0f;
    Collider_InitAndSetQuad(globalCtx, &this->unk_144, (Actor *) this, &D_80922230);
    Collider_InitAndSetQuad(globalCtx, &this->unk_1C4, (Actor *) this, &D_80922230);
}

void ArrowFire_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ArrowFire *this = (ArrowFire *) thisx;
    func_80115D5C(globalCtx);
    Collider_DestroyQuad(globalCtx, &this->unk_144);
    Collider_DestroyQuad(globalCtx, &this->unk_1C4);
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
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_v1 = this->unk_25C;
    if ((s32) temp_v1 < 0xA) {
        this->unk_25C = temp_v1 + 1;
    }
    temp_v1_2 = &this->actor.world;
    temp_v1_2->pos.x = temp_v0->world.pos.x;
    temp_v1_2->pos.y = temp_v0->world.pos.y;
    temp_v1_2->pos.z = temp_v0->world.pos.z;
    this->unk_BC = (unaligned s32) temp_v0->unk_BC;
    this->actor.shape.rot.z = (s16) (u16) temp_v0->shape.rot.z;
    sp18 = temp_v1_2;
    sp1C = temp_v0;
    func_800B9010((Actor *) this, 0x7DU);
    temp_a0 = this;
    if (temp_v0->parent == 0) {
        temp_a0->unk_244 = temp_v1_2->pos.x;
        temp_a0->unk_248 = temp_v1_2->pos.y;
        temp_a0->unk_25C = 0xA;
        temp_a0->unk_24C = temp_v1_2->pos.z;
        this = temp_a0;
        ArrowFire_SetupAction(temp_a0, func_809207A0);
        this->unk_260 = 0xFF;
    }
}

void FireArrow_Lerp(void *arg0, f32 *arg1, f32 arg2) {
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f2;

    temp_f0 = arg0->unk_0;
    temp_f2 = arg0->unk_4;
    temp_f14 = arg0->unk_8;
    arg0->unk_0 = (f32) (temp_f0 + ((arg1->unk_0 - temp_f0) * arg2));
    arg0->unk_4 = (f32) (temp_f2 + ((arg1[1] - temp_f2) * arg2));
    arg0->unk_8 = (f32) (temp_f14 + ((arg1[2] - temp_f14) * arg2));
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
    temp_v1 = this->unk_25E;
    temp_t6 = temp_v1 - 1;
    phi_v1 = (s32) temp_v1;
    if (temp_v1 != 0) {
        temp_v1_2 = temp_t6 & 0xFFFF;
        this->unk_25E = temp_t6;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 >= 8) {
            temp_f0_2 = (f32) (temp_v1_2 - 8) * 0.041666668f;
            temp_f2 = this->unk_250;
            this->unk_25C = (s16) (s32) (((1.0f - (temp_f0_2 * temp_f0_2)) * phi_f12) + 10.0f);
            this->unk_250 = temp_f2 + ((2.0f - temp_f2) * 0.1f);
            if (temp_v1_2 < 0x10) {
                this->unk_260 = (temp_v1_2 * 0x23) - 0x118;
            }
        }
    }
    phi_v0 = phi_v1;
    if (phi_v1 >= 9) {
        temp_f0_3 = this->unk_254;
        if (temp_f0_3 < 1.0f) {
            this->unk_254 = temp_f0_3 + 0.25f;
            phi_v0 = (s32) this->unk_25E;
        }
    } else {
        temp_f0_4 = this->unk_254;
        if (temp_f0_4 > 0.0f) {
            this->unk_254 = temp_f0_4 - 0.125f;
            phi_v0 = (s32) this->unk_25E;
        }
    }
    phi_v0_2 = phi_v0;
    if (phi_v0 < 8) {
        this->unk_260 = 0;
        phi_v0_2 = (s32) this->unk_25E;
    }
    if (phi_v0_2 == 0) {
        this->unk_25E = 0xFF;
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (phi_v0_2 >= 0xD) {
        temp_a1 = &globalCtx->colChkCtx;
        sp18 = temp_a1;
        temp_a2 = &this->unk_144;
        this = this;
        CollisionCheck_SetAT(globalCtx, temp_a1, (Collider *) temp_a2);
        CollisionCheck_SetAT(globalCtx, temp_a1, (Collider *) &this->unk_1C4);
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
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_a1 = &this->actor.world;
    temp_a0 = &this->unk_244;
    temp_a1->pos.x = temp_v0->world.pos.x;
    temp_a1->pos.y = temp_v0->world.pos.y;
    temp_a1->pos.z = temp_v0->world.pos.z;
    this->unk_BC = (unaligned s32) temp_v0->unk_BC;
    this->actor.shape.rot.z = (s16) (u16) temp_v0->shape.rot.z;
    sp28 = temp_a1;
    sp24 = temp_a0;
    sp34 = temp_v0;
    temp_f2 = Math_Vec3f_DistXYZ((Vec3f *) temp_a0, (Vec3f *) temp_a1) * 0.041666668f;
    temp_cond = temp_f2 < 1.0f;
    this->unk_250 = temp_f2;
    if (temp_cond) {
        this->unk_250 = 1.0f;
    }
    sp34 = temp_v0;
    FireArrow_Lerp((bitwise void *) 1.0f, temp_a0, (bitwise f32) temp_a1, 0x3D4CCCCD);
    if ((temp_v0[1].isDrawn & 1) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x183AU);
        ArrowFire_SetupAction(this, func_8092058C);
        this->unk_25E = 0x20;
        this->unk_260 = 0xFF;
        return;
    }
    if ((s32) temp_v0[1].colorFilterTimer < 0x22) {
        temp_v0_2 = this->unk_260;
        if ((s32) temp_v0_2 < 0x23) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->unk_260 = temp_v0_2 - 0x19;
        /* Duplicate return node #11. Try simplifying control flow for better match */
    }
}

void ArrowFire_Update(Actor *thisx, GlobalContext *globalCtx) {
    u8 temp_v0;
    ArrowFire *this = (ArrowFire *) thisx;

    temp_v0 = globalCtx->msgCtx.unk11F22;
    if ((temp_v0 == 0xE) || (temp_v0 == 0x12)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->actionFunc(this, globalCtx);
}

void func_80920948(ArrowFire *arg0) {
    ? sp44;
    ? sp38;
    ? sp2C;
    ? sp20;

    SysMatrix_MultiplyVector3fByState(&D_80922284, (Vec3f *) &sp44);
    SysMatrix_MultiplyVector3fByState(&D_80922290, (Vec3f *) &sp38);
    SysMatrix_MultiplyVector3fByState(&D_8092229C, (Vec3f *) &sp2C);
    SysMatrix_MultiplyVector3fByState(&D_809222A8, (Vec3f *) &sp20);
    Collider_SetQuadVertices(arg0 + 0x144, (Vec3f *) &sp44, (Vec3f *) &sp38, (Vec3f *) &sp2C, (Vec3f *) &sp20);
    SysMatrix_MultiplyVector3fByState(&D_809222B4, (Vec3f *) &sp44);
    SysMatrix_MultiplyVector3fByState(&D_809222C0, (Vec3f *) &sp38);
    SysMatrix_MultiplyVector3fByState(&D_809222CC, (Vec3f *) &sp2C);
    SysMatrix_MultiplyVector3fByState(&D_809222D8, (Vec3f *) &sp20);
    Collider_SetQuadVertices(arg0 + 0x1C4, (Vec3f *) &sp44, (Vec3f *) &sp38, (Vec3f *) &sp2C, (Vec3f *) &sp20);
}

void ArrowFire_Draw(Actor *thisx, GlobalContext *globalCtx) {
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
    ArrowFire *this = (ArrowFire *) thisx;

    sp74 = globalCtx->state.frames;
    temp_v1 = this->actor.parent;
    if ((temp_v1 != 0) && (temp_v1->update != 0) && ((s32) this->unk_25E < 0xFF)) {
        if ((temp_v1[1].isDrawn & 2) != 0) {
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
        if (this->unk_254 > 0.0f) {
            temp_s0->polyXlu.p = func_8012BFC4(temp_s0->polyXlu.p);
            temp_v0 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0[1];
            temp_v0->words.w0 = 0xFA000000;
            temp_f0 = this->unk_254;
            temp_v0->words.w1 = ((s32) (temp_f0 * 40.0f) << 0x18) | ((s32) (150.0f * temp_f0) & 0xFF);
            temp_v0_2 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_2[1];
            temp_v0_2->words.w1 = 0x30;
            temp_v0_2->words.w0 = 0xE3001A01;
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_3[1];
            temp_v0_3->words.w1 = 0xC0;
            temp_v0_3->words.w0 = 0xE3001801;
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_4[1];
            temp_v0_4->words.w0 = 0xDE000000;
            temp_v0_4->words.w1 = (u32) &D_0E0002E0;
        }
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xFA008080;
        temp_v0_5->words.w1 = this->unk_260 | 0xFFC80000;
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_6[1];
        temp_v0_6->words.w1 = 0xFF000080;
        temp_v0_6->words.w0 = 0xFB000000;
        SysMatrix_InsertRotation(0x4000, 0, 0, 1);
        if (this->unk_25E != 0) {
            SysMatrix_InsertTranslation(0.0f, 0.0f, 0.0f, 1);
        } else {
            SysMatrix_InsertTranslation(0.0f, 1500.0f, 0.0f, 1);
        }
        temp_f12 = (f32) this->unk_25C * 0.2f;
        Matrix_Scale(temp_f12, this->unk_250 * 4.0f, temp_f12, 1);
        SysMatrix_InsertTranslation(0.0f, -700.0f, 0.0f, 1);
        temp_v0_7 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_7[1];
        temp_v0_7->words.w0 = 0xDA380003;
        sp48 = temp_v0_7;
        sp48->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        func_80920948(this);
        temp_v0_8 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_8[1];
        temp_v0_8->words.w1 = (u32) &D_809220A0;
        temp_v0_8->words.w0 = 0xDE000000;
        temp_v0_9 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_9[1];
        temp_v0_9->words.w0 = 0xDE000000;
        sp40 = temp_v0_9;
        sp40->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0xFF - ((sp74 * 2) & 0xFF), 0U, 0x40, 0x20, 1, 0xFF - (sp74 & 0xFF), 0x1FF - ((sp74 * 0xA) & 0x1FF), 0x40, 0x40);
        temp_v0_10 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_10[1];
        temp_v0_10->words.w1 = (u32) &D_80922150;
        temp_v0_10->words.w0 = 0xDE000000;
    }
}
