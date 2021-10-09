? func_800FD698(GlobalContext *, s16, s16, f32);    /* extern */
? func_8016119C(Camera *, ? *);                     /* extern */
? func_80161998(? *, ? *);                          /* extern */
? func_8016566C(s16, s16);                          /* extern */
? func_80165690();                                  /* extern */
? func_8016981C(GlobalContext *, s32, f32 *, f32 *, ? *); /* extern */
? func_80169940(GlobalContext *, s16, f32);         /* extern */
? func_80169988(GlobalContext *, s16, ?);           /* extern */
? func_801A75E8(?);                                 /* extern */
void func_80A90730(EnTest6 *arg0, GlobalContext *arg1); /* static */
void func_80A90C08(s16 arg0);                       /* static */
void func_80A90C34();                               /* static */
void func_80A90C54(GlobalContext *arg0, f32 arg1);  /* static */
void func_80A90D20(GlobalContext *arg0);            /* static */
void func_80A90D34(s32 arg0, GlobalContext *arg1, void *arg2); /* static */
void func_80A90FC0(s32 arg0, GlobalContext *arg1, void *arg2); /* static */
void func_80A91690(GlobalContext *arg0, ? arg1);    /* static */
void func_80A916F0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A920C8(GlobalContext *arg0, void *arg1); /* static */
void func_80A92118(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A93298(void *arg0, void *arg1);         /* static */
void func_80A9369C(void *arg0, void *arg1);         /* static */
void func_80A939E8(void *arg0, void *arg1);         /* static */
extern ? func_80A94A30;
static ? D_80A93E80;                                /* unable to generate initializer */
static ? D_80A9402C;                                /* unable to generate initializer */
static Color_RGB8 D_80A94048 = {0xE6, 0xE6, 0xDC};
static Color_RGB8 D_80A9404C = {0x78, 0x78, 0x64};
static Color_RGB8 D_80A94050 = {0, 0, 0};
static s16 D_80A94054 = 0x1F4;
static s16 D_80A94058 = 0x5DC;
static ? D_80A9405C;                                /* unable to generate initializer */
static Color_RGB8 D_80A94068 = {0xE1, 0xE6, 0xE1};
static Color_RGB8 D_80A9406C = {0x78, 0x78, 0x64};
static Color_RGB8 D_80A94070 = {0, 0, 0};
static s16 D_80A94074 = 0x3AC;
static s16 D_80A94078 = 0x7D0;
static ? D_80A94910;

typedef struct EnTest6 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(EnTest6 *, GlobalContext *);
    /* 0x0148 */ char pad148[0x4];                  /* maybe part of actionFunc[2]? */
    /* 0x014C */ f32 unk14C;                        /* inferred */
    /* 0x0150 */ f32 unk150;                        /* inferred */
    /* 0x0154 */ f32 unk154;                        /* inferred */
    /* 0x0158 */ f32 unk158;                        /* inferred */
    /* 0x015C */ f32 unk15C;                        /* inferred */
    /* 0x0160 */ f32 unk160;                        /* inferred */
    /* 0x0164 */ LightNode *unk164;                 /* inferred */
    /* 0x0168 */ LightInfo unk168;                  /* inferred */
    /* 0x0176 */ char pad176[0x16];
    /* 0x018C */ ? unk18C;                          /* inferred */
    /* 0x018D */ char pad18D[0x77];
    /* 0x0204 */ f32 unk204;                        /* inferred */
    /* 0x0208 */ f32 unk208;                        /* inferred */
    /* 0x020C */ f32 unk20C;                        /* inferred */
    /* 0x0210 */ f32 unk210;                        /* inferred */
    /* 0x0214 */ char pad214[0x40];                 /* maybe part of unk210[17]? */
    /* 0x0254 */ void *unk254;                      /* inferred */
    /* 0x0258 */ f32 unk258;                        /* inferred */
    /* 0x025C */ f32 unk25C;                        /* inferred */
    /* 0x0260 */ f32 unk260;                        /* inferred */
    /* 0x0264 */ f32 unk264;                        /* inferred */
    /* 0x0268 */ f32 unk268;                        /* inferred */
    /* 0x026C */ f32 unk26C;                        /* inferred */
    /* 0x0270 */ f32 unk270;                        /* inferred */
    /* 0x0274 */ s16 unk274;                        /* inferred */
    /* 0x0276 */ s16 unk276;                        /* inferred */
    /* 0x0278 */ s16 unk278;                        /* inferred */
    /* 0x027A */ s16 unk27A;                        /* inferred */
    /* 0x027C */ s16 unk27C;                        /* inferred */
    /* 0x027E */ char pad27E[0x2];                  /* maybe part of unk27C[2]? */
    /* 0x0280 */ s16 unk280;                        /* inferred */
    /* 0x0282 */ s16 unk282;                        /* inferred */
    /* 0x0284 */ s16 unk284;                        /* inferred */
    /* 0x0286 */ s16 unk286;                        /* inferred */
} EnTest6;                                          /* size 0x288 */

void func_80A90730(EnTest6 *arg0, GlobalContext *arg1) {
    s32 sp44;
    ? *temp_s0;
    f32 temp_f16;
    s16 temp_v1;
    s32 temp_v0_3;
    u8 temp_v0_2;
    void *temp_v0;
    s32 phi_v0;
    u8 phi_v0_2;
    s32 phi_s0;
    u8 phi_v0_3;
    s32 phi_s0_2;
    u8 phi_v0_4;
    s32 phi_s0_3;
    u8 phi_v0_5;
    s32 phi_s0_4;
    ? *phi_s0_5;
    f32 phi_f24;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_v1 = arg0->actor.params;
    arg0->actor.home.pos.x = temp_v0->world.pos.x;
    arg0->actor.home.pos.y = temp_v0->world.pos.y;
    arg0->actor.home.pos.z = temp_v0->world.pos.z;
    arg0->unk14 = (unaligned s32) temp_v0->unkBC;
    arg0->actor.home.rot.z = temp_v0->shape.rot.z;
    if ((temp_v1 != 0x18) && (temp_v1 != 0x19)) {
        if (temp_v1 != 0x1A) {
            temp_v0_2 = gSaveContext.eventInf[7];
            phi_v0_2 = temp_v0_2;
            phi_s0 = 0;
            phi_f24 = -900.0f;
            if ((temp_v0_2 & 1) != 0) {
                phi_v0 = 0;
                do {
                    sp44 = phi_v0;
                    temp_v0_3 = phi_v0 + 1;
                    *(&D_80A94910 + ((s32) (Rand_ZeroOne() * 12.0f) * 0x18)) = 5;
                    phi_v0 = temp_v0_3;
                } while (temp_v0_3 != 6);
                *(&D_80A94910 + ((s32) (Rand_ZeroOne() * 12.0f) * 0x18)) = 5;
                *(&D_80A94910 + ((s32) (Rand_ZeroOne() * 12.0f) * 0x18)) = 6;
                phi_v0_2 = gSaveContext.eventInf[7];
                phi_s0 = 1;
            }
            phi_v0_3 = phi_v0_2;
            phi_s0_2 = phi_s0;
            if ((phi_v0_2 & 0x10) != 0) {
                *(&D_80A94910 + ((s32) (Rand_ZeroOne() * 12.0f) * 0x18)) = 1;
                *(&D_80A94910 + ((s32) (Rand_ZeroOne() * 12.0f) * 0x18)) = 1;
                if ((phi_s0 & 1) == 0) {
                    *(&D_80A94910 + ((s32) (Rand_ZeroOne() * 12.0f) * 0x18)) = 1;
                    *(&D_80A94910 + ((s32) (Rand_ZeroOne() * 12.0f) * 0x18)) = 1;
                }
                phi_v0_3 = gSaveContext.eventInf[7];
                phi_s0_2 = phi_s0 | 0x10;
            }
            phi_v0_4 = phi_v0_3;
            phi_s0_3 = phi_s0_2;
            if ((phi_v0_3 & 2) != 0) {
                *(&D_80A94910 + ((s32) (Rand_ZeroOne() * 12.0f) * 0x18)) = 2;
                *(&D_80A94910 + ((s32) (Rand_ZeroOne() * 12.0f) * 0x18)) = 2;
                if ((phi_s0_2 & 1) == 0) {
                    *(&D_80A94910 + ((s32) (Rand_ZeroOne() * 12.0f) * 0x18)) = 2;
                    *(&D_80A94910 + ((s32) (Rand_ZeroOne() * 12.0f) * 0x18)) = 2;
                }
                phi_v0_4 = gSaveContext.eventInf[7];
                phi_s0_3 = phi_s0_2 | 2;
            }
            phi_v0_5 = phi_v0_4;
            phi_s0_4 = phi_s0_3;
            if ((phi_v0_4 & 4) != 0) {
                *(&D_80A94910 + ((s32) (Rand_ZeroOne() * 12.0f) * 0x18)) = 3;
                if ((phi_s0_3 & 0x13) == 0) {
                    *(&D_80A94910 + ((s32) (Rand_ZeroOne() * 12.0f) * 0x18)) = 3;
                }
                phi_v0_5 = gSaveContext.eventInf[7];
                phi_s0_4 = phi_s0_3 | 4;
            }
            if ((phi_v0_5 & 8) != 0) {
                *(&D_80A94910 + ((s32) (Rand_ZeroOne() * 12.0f) * 0x18)) = 4;
                if ((phi_s0_4 & 0x13) == 0) {
                    *(&D_80A94910 + ((s32) (Rand_ZeroOne() * 12.0f) * 0x18)) = 4;
                }
            }
            phi_s0_5 = &D_80A94910;
            do {
                phi_s0_5->unk8 = (f32) (((2.0f * Rand_ZeroOne()) - 1.0f) * 80.0f);
                phi_s0_5->unk10 = (f32) (((2.0f * Rand_ZeroOne()) - 1.0f) * 80.0f);
                temp_f16 = (((2.0f * Rand_ZeroOne()) - 1.0f) * 40.0f) + phi_f24;
                phi_s0_5->unk4 = -10.0f;
                phi_s0_5->unkC = temp_f16;
                if (phi_s0_5->unk0 < 5) {
                    phi_s0_5->unk14 = func_80A90D34;
                } else {
                    phi_s0_5->unk14 = func_80A90FC0;
                }
                temp_s0 = phi_s0_5 + 0x18;
                phi_s0_5 = temp_s0;
                phi_f24 += 50.0f;
            } while (temp_s0 != &func_80A94A30);
            return;
        }
        func_80A920C8(arg1);
        ActorCutscene_SetIntentToPlay(arg1->unk_1879C[8]);
        return;
    }
    func_80A91690(arg1);
    ActorCutscene_SetIntentToPlay(arg1->unk_1879C[8]);
}

void func_80A90C08(s16 arg0) {
    func_8016566C(arg0, arg0);
}

void func_80A90C34(void) {
    func_80165690();
}

void func_80A90C54(GlobalContext *arg0, f32 arg1) {
    arg0->envCtx.unk_E5 = 1;
    arg0->envCtx.unk_E6[0] = 0xFA;
    arg0->envCtx.unk_E6[1] = 0xFA;
    arg0->envCtx.unk_E6[2] = 0xFA;
    arg0->envCtx.unk_E6[3] = (u8) (u32) (255.0f * arg1);
}

void func_80A90D20(GlobalContext *arg0) {
    arg0->envCtx.unk_E5 = 0;
}

void func_80A90D34(s32 arg0, GlobalContext *arg1, void *arg2) {
    Gfx *sp28;
    Gfx *sp24;
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
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;

    temp_s0 = arg1->state.gfxCtx;
    if (arg2->unk0 != 0) {
        temp_f0 = arg2->unk4;
        SysMatrix_InsertTranslation(arg2->unk8 * temp_f0, arg2->unkC, arg2->unk10 * temp_f0, 0);
        temp_f12 = arg2->unk4 * 0.02f;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        temp_v0 = func_801660B8(arg1, temp_s0->polyOpa.p);
        temp_s0->polyOpa.p = temp_v0;
        temp_s0->polyOpa.p = func_8012C724(temp_v0);
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDB060020;
        sp28 = temp_v0_2;
        sp28->words.w1 = Lib_SegmentedToVirtual(*(&D_80A9402C + (arg2->unk0 * 4)));
        temp_v0_3 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDA380003;
        sp24 = temp_v0_3;
        sp24->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_4 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = (u32) D_0405F6F0;
        temp_v0_4->words.w0 = 0xDE000000;
    }
    temp_f0_2 = arg2->unk4;
    SysMatrix_InsertTranslation(arg2->unk8 * temp_f0_2, arg2->unkC, arg2->unk10 * temp_f0_2, 0);
    temp_f12_2 = 2.0f * arg2->unk4;
    Matrix_Scale(temp_f12_2, temp_f12_2, temp_f12_2, 1);
    SysMatrix_InsertMatrix(&arg1->mf_187FC, 1);
    SysMatrix_InsertZRotation_s((s16) (arg1->state.frames << 9), 1);
    SysMatrix_InsertTranslation(0.0f, 0.0f, 2.0f, 1);
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xDA380003;
    temp_v0_5->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    func_8012C2DC(arg1->state.gfxCtx);
    temp_v0_6 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xFA008080;
    temp_v0_6->words.w1 = 0xD2D2E680;
    temp_v0_7 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = -0x100;
    temp_v0_7->words.w0 = 0xFB000000;
    temp_v0_8 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_8 + 8;
    temp_v0_8->words.w1 = 0;
    temp_v0_8->words.w0 = 0xD9FCFFFF;
    temp_v0_9 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_9 + 8;
    temp_v0_9->words.w0 = 0xDE000000;
    temp_v0_9->words.w1 = (u32) D_04054A90;
    temp_v0_10 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_10 + 8;
    temp_v0_10->words.w1 = 0x30000;
    temp_v0_10->words.w0 = 0xD9FFFFFF;
}

void func_80A90FC0(s32 arg0, GlobalContext *arg1, void *arg2) {
    void *sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    Gfx *sp4C;
    Gfx *sp48;
    void *sp28;
    MtxF *sp24;
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
    GraphicsContext *temp_a3;
    GraphicsContext *temp_a3_2;
    GraphicsContext *temp_s0;
    f32 *temp_a0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    void *temp_a0_2;
    void *temp_t0;
    void *temp_v1;

    temp_a3 = arg1->state.gfxCtx;
    temp_a0 = &sp64;
    temp_t0 = temp_a3->polyOpa.d - 0x10;
    temp_a3->polyOpa.d = temp_t0;
    sp64 = arg2->unk8 * arg2->unk4;
    sp68 = arg2->unkC;
    sp28 = temp_t0;
    sp6C = arg2->unk10 * arg2->unk4;
    func_800BCBF4((Vec3f *) temp_a0, arg1);
    temp_v1 = MIPS2C_ERROR(Read from unset register $v0);
    temp_a3_2 = arg1->state.gfxCtx;
    temp_s0 = temp_a3_2;
    if (temp_t0 != 0) {
        sp70 = temp_v1;
        sp28 = temp_t0;
        func_8012C28C(temp_a3_2);
        temp_t0->words.w0 = ((temp_v1->unk0 & 0xFFF) << 0xC) | 0xF2000000 | (temp_v1->unk4 & 0xFFF);
        temp_t0->words.w1 = (((temp_v1->unk0 + 0x3C) & 0xFFF) << 0xC) | 0x1000000 | ((temp_v1->unk4 + 0x3C) & 0xFFF);
        temp_a0_2 = temp_t0 + 8;
        temp_a0_2->unk0 = 0xDF000000;
        temp_a0_2->unk4 = 0;
        temp_v0 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w1 = (u32) temp_t0;
        temp_v0->words.w0 = 0xDB06001C;
        SysMatrix_InsertTranslation(sp64, sp68, sp6C, 0);
        temp_f12 = arg2->unk4 * 0.018f;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        SysMatrix_InsertMatrix(&arg1->mf_187FC, 1);
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDA380003;
        sp4C = temp_v0_2;
        sp4C->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_3 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDB060020;
        sp48 = temp_v0_3;
        sp48->words.w1 = Lib_SegmentedToVirtual(*(&D_80A9402C + (arg2->unk0 * 4)));
        temp_v0_4 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = (u32) D_040622C0;
        temp_v0_4->words.w0 = 0xDE000000;
    }
    temp_f0 = arg2->unk4;
    sp24 = &arg1->mf_187FC;
    SysMatrix_InsertTranslation(arg2->unk8 * temp_f0, arg2->unkC, arg2->unk10 * temp_f0, 0);
    temp_f12_2 = arg2->unk4 * 2.5f;
    Matrix_Scale(temp_f12_2, temp_f12_2, temp_f12_2, 1);
    SysMatrix_InsertMatrix(sp24, 1);
    SysMatrix_InsertZRotation_s((s16) (arg1->state.frames << 8), 1);
    SysMatrix_InsertTranslation(0.0f, 0.0f, 4.0f, 1);
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xDA380003;
    temp_v0_5->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    func_8012C2DC(arg1->state.gfxCtx);
    temp_v0_6 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xFA008080;
    temp_v0_6->words.w1 = 0xDCDCE6C0;
    temp_v0_7 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w0 = 0xFB000000;
    temp_v0_7->words.w1 = 0x80808000;
    temp_v0_8 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_8 + 8;
    temp_v0_8->words.w1 = 0;
    temp_v0_8->words.w0 = 0xD9FCFFFF;
    temp_v0_9 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_9 + 8;
    temp_v0_9->words.w0 = 0xDE000000;
    temp_v0_9->words.w1 = (u32) D_04054A90;
    temp_v0_10 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_10 + 8;
    temp_v0_10->words.w1 = 0x30000;
    temp_v0_10->words.w0 = 0xD9FFFFFF;
}

void EnTest6_SetupAction(EnTest6 *this, void (*actionFunc)(EnTest6 *, GlobalContext *)) {
    EnTest6 *self = (EnTest6 *) this;
    self->actionFunc = actionFunc;
}

void EnTest6_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnTest6 *this = (EnTest6 *) thisx;
    EnTest6 *temp_s2;
    LightContext *temp_s5;
    s16 temp_v0;
    s32 temp_s3;
    LightInfo *phi_s0;
    EnTest6 *phi_s2;
    s32 phi_s3;

    temp_v0 = this->actor.params;
    if (((temp_v0 == 0x18) || (temp_v0 == 0x19) || (temp_v0 == 0x1A)) && (globalCtx->unk_1879C[8] == -1)) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    temp_s5 = &globalCtx->lightCtx;
    phi_s0 = &this->unk168;
    phi_s2 = this;
    phi_s3 = 0;
    do {
        Lights_PointNoGlowSetInfo(phi_s0, (s16) (s32) this->actor.world.pos.x, (s16) ((s32) this->actor.world.pos.y - 0x14), (s16) (s32) this->actor.world.pos.z, (u8) 0xFF, (u8) 0xFF, (u8) 0xB4, (s16) -1);
        temp_s3 = phi_s3 + 1;
        temp_s2 = phi_s2 + 0x14;
        temp_s2->unk150 = LightContext_InsertLight(globalCtx, temp_s5, phi_s0);
        phi_s0 += 0x14;
        phi_s2 = temp_s2;
        phi_s3 = temp_s3;
    } while (temp_s3 != 2);
    this->unk286 = 0;
    this->unk274 = 0;
    this->unk278 = 0;
    this->unk276 = 0x63;
    func_80A90730(this, globalCtx);
    EnTest6_SetupAction(this, func_80A9156C);
}

void EnTest6_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTest6 *this = (EnTest6 *) thisx;
    s32 temp_s0;
    EnTest6 *phi_s1;
    s32 phi_s0;

    globalCtx->envCtx.unk_8C.ambientColor[0] = 0;
    globalCtx->envCtx.unk_8C.ambientColor[1] = 0;
    globalCtx->envCtx.unk_8C.ambientColor[2] = 0;
    globalCtx->envCtx.unk_8C.diffuseColor1[0] = 0;
    globalCtx->envCtx.unk_8C.diffuseColor1[1] = 0;
    globalCtx->envCtx.unk_8C.diffuseColor1[2] = 0;
    globalCtx->envCtx.unk_8C.diffuseColor2[0] = 0;
    globalCtx->envCtx.unk_8C.diffuseColor2[1] = 0;
    globalCtx->envCtx.unk_8C.diffuseColor2[2] = 0;
    globalCtx->envCtx.unk_8C.fogColor[0] = 0;
    globalCtx->envCtx.unk_8C.fogColor[1] = 0;
    globalCtx->envCtx.unk_8C.fogColor[2] = 0;
    globalCtx->envCtx.unk_8C.fogNear = 0;
    globalCtx->envCtx.unk_8C.fogFar = 0;
    globalCtx->envCtx.unk_E5 = 0;
    phi_s1 = this;
    phi_s0 = 0;
    do {
        LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, phi_s1->unk164);
        temp_s0 = phi_s0 + 0x14;
        phi_s1 += 0x14;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x28);
}

void func_80A9156C(EnTest6 *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->actor.params;
    if ((temp_v0 != 0x18) && (temp_v0 != 0x19)) {
        if (temp_v0 != 0x1A) {
            gSaveContext.daysElapsed = 0;
            gSaveContext.day = 0;
            gSaveContext.time = 0x3FFF;
            EnTest6_SetupAction(this, func_80A92950);
            return;
        }
        if (ActorCutscene_GetCanPlayNext(globalCtx->unk_1879C[8]) == 0) {
            ActorCutscene_SetIntentToPlay(globalCtx->unk_1879C[8]);
            return;
        }
        ActorCutscene_Start(globalCtx->unk_1879C[8], NULL);
        this->unk284 = ActorCutscene_GetCurrentCamera(globalCtx->unk_1879C[8]);
        EnTest6_SetupAction(this, func_80A92188);
        return;
    }
    if (ActorCutscene_GetCanPlayNext(globalCtx->unk_1879C[8]) == 0) {
        ActorCutscene_SetIntentToPlay(globalCtx->unk_1879C[8]);
        return;
    }
    ActorCutscene_Start(globalCtx->unk_1879C[8], NULL);
    this->unk284 = ActorCutscene_GetCurrentCamera(globalCtx->unk_1879C[8]);
    EnTest6_SetupAction(this, func_80A91760);
}

void func_80A91690(GlobalContext *arg0, ? arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk1C;
    arg0->unk274 = 0x5A;
    arg0->unk27A = 0x64;
    arg0->unk286 = 0;
    if (temp_v0 == 0x19) {
        play_sound(0x485DU);
        return;
    }
    if (temp_v0 == 0x18) {
        play_sound(0x485EU);
    }
}

void func_80A916F0(Actor *arg0, GlobalContext *arg1) {
    s16 temp_a0;

    arg1->actorCtx.actorList[2].first->unk118 = 0;
    arg1->unk_18844 = 0;
    temp_a0 = arg1->unk_1879C[8];
    arg1 = arg1;
    ActorCutscene_Stop(temp_a0);
    func_800B7298(arg1, NULL, 6U);
    func_80A90C34();
    Quake2_ClearType(0x20);
    Actor_MarkForDeath(arg0);
}

void func_80A91760(EnTest6 *this, GlobalContext *globalCtx) {
    Camera *sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp58;
    s32 sp50;
    f32 sp4C;
    EnTest6 *sp3C;
    Actor *temp_s2;
    Camera *temp_s3;
    EnTest6 *temp_v0_3;
    EnTest6 *temp_v0_8;
    GlobalContext *temp_a2;
    f32 *temp_a3;
    f32 *temp_v0_4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f6;
    f32 temp_f8;
    s16 temp_a0;
    s16 temp_s0;
    s16 temp_v0;
    s16 temp_v0_10;
    s16 temp_v0_12;
    s16 temp_v0_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    u16 temp_v0_11;
    void *temp_a0_2;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_9;
    EnTest6 *phi_v0;
    s32 phi_v1;
    s16 phi_s0;
    s32 phi_s0_2;
    EnTest6 *phi_v0_2;
    s32 phi_v1_2;
    s32 phi_s0_3;
    s16 phi_v1_3;
    s16 phi_v1_4;
    s32 phi_v1_5;
    s16 phi_a0;

    temp_a2 = globalCtx;
    temp_s2 = temp_a2->actorCtx.actorList[2].first;
    globalCtx = temp_a2;
    temp_s3 = Play_GetCamera(temp_a2, this->unk284);
    sp78 = Play_GetCamera(globalCtx, 0);
    temp_a0 = this->unk274;
    if (temp_a0 != 0x5A) {
        if (temp_a0 != 0x5B) {
            if (temp_a0 != 0x5F) {
                if (temp_a0 != 0x63) {

                } else {
                    this->unk15C -= this->unk14C;
                    func_800FD59C(globalCtx, &D_80A9404C, this->unk15C);
                    func_800FD5E0(globalCtx, &D_80A94050, this->unk15C);
                    func_800FD654(globalCtx, &D_80A94048, this->unk15C);
                    func_800FD698(globalCtx, D_80A94054, D_80A94058, this->unk15C);
                }
            } else {
                if ((s32) this->unk27A >= 0x51) {
                    this->unk282 += 0x19;
                }
                if ((s32) this->unk27A < 0x14) {
                    this->unk282 += -0x19;
                }
                func_800FD59C(globalCtx, &D_80A9404C, this->unk15C);
                func_800FD5E0(globalCtx, &D_80A94050, this->unk15C);
                func_800FD654(globalCtx, &D_80A94048, this->unk15C);
                temp_v0 = this->unk282;
                func_800FD698(globalCtx, (s16) (D_80A94054 + temp_v0), (s16) (D_80A94058 + temp_v0), this->unk15C);
                temp_v0_2 = this->unk27C;
                this->unk278 -= temp_v0_2;
                phi_s0 = this->unk278;
                if (this->actor.params == 0x18) {
                    this->unk27C = temp_v0_2 + 8;
                    this->unk150 += this->unk14C;
                } else {
                    this->unk27C = temp_v0_2 - 8;
                    this->unk150 -= this->unk14C;
                }
                phi_v0 = this;
                phi_v1 = 0;
                do {
                    temp_s0 = phi_s0 + 0x2AAA;
                    sp3C = phi_v0;
                    sp50 = phi_v1;
                    phi_v0->unk20C = (Math_SinS(temp_s0) * this->unk150) + temp_s2->world.pos.x;
                    phi_v0->unk210 = temp_s2->world.pos.y;
                    temp_v1 = phi_v1 + 1;
                    temp_v0_3 = phi_v0 + 0xC;
                    temp_v0_3->unk208 = (Math_CosS(temp_s0) * this->unk150) + temp_s2->world.pos.z;
                    phi_v0 = temp_v0_3;
                    phi_v1 = temp_v1;
                    phi_s0 = temp_s0;
                } while (temp_v1 < 6);
                if (this->unk254 != 0) {
                    phi_s0_2 = 0;
                    do {
                        temp_v0_4 = this->unk254 + phi_s0_2;
                        *temp_v0_4 += 2.0f * ((2.0f * Rand_ZeroOne()) - 1.0f);
                        if (this->actor.params == 0x18) {
                            temp_v0_5 = this->unk254 + phi_s0_2;
                            temp_v0_5->unk4 = (f32) (temp_v0_5->unk4 + 1.0f);
                        } else {
                            temp_v0_6 = this->unk254 + phi_s0_2;
                            temp_v0_6->unk4 = (f32) (temp_v0_6->unk4 - 1.0f);
                        }
                        temp_v0_7 = this->unk254 + phi_s0_2;
                        temp_s0_2 = phi_s0_2 + 0xC;
                        temp_v0_7->unk8 = (f32) (temp_v0_7->unk8 + (2.0f * ((2.0f * Rand_ZeroOne()) - 1.0f)));
                        phi_s0_2 = temp_s0_2;
                    } while (temp_s0_2 != 0x300);
                }
                if (this->unk27A == 0xA) {
                    this->unk14C = 0.1f;
                    func_80A90C34();
                    Quake2_ClearType(0x20);
                    globalCtx->unk_18844 = 0;
                    temp_a0_2 = this->unk254;
                    if (temp_a0_2 != 0) {
                        zelda_free(temp_a0_2);
                    }
                    this->unk274 = 0x63;
                }
            }
        } else {
            this->unk15C += this->unk14C;
            func_800FD59C(globalCtx, &D_80A9404C, this->unk15C);
            func_800FD5E0(globalCtx, &D_80A94050, this->unk15C);
            func_800FD654(globalCtx, &D_80A94048, this->unk15C);
            func_800FD698(globalCtx, D_80A94054, D_80A94058, this->unk15C);
            if (this->unk27A == 0x5A) {
                this->unk282 = 0;
                if (this->actor.params == 0x18) {
                    this->unk27C = 0x200;
                    this->unk150 = 0.0f;
                    sp4C = -100.0f;
                } else {
                    this->unk27C = 0x570;
                    this->unk150 = 110.0f;
                    sp4C = 100.0f;
                }
                this->unk14C = 1.0f;
                phi_v0_2 = this;
                phi_v1_2 = 0;
                do {
                    temp_v1_2 = phi_v1_2 + 1;
                    phi_v0_2->unk20C = temp_s2->world.pos.x;
                    temp_v0_8 = phi_v0_2 + 0xC;
                    temp_v0_8->unk204 = temp_s2->world.pos.y;
                    temp_v0_8->unk208 = temp_s2->world.pos.z;
                    phi_v0_2 = temp_v0_8;
                    phi_v1_2 = temp_v1_2;
                } while (temp_v1_2 < 6);
                temp_v0_9 = zelda_malloc(0x300U);
                this->unk254 = temp_v0_9;
                if (temp_v0_9 != 0) {
                    phi_s0_3 = 0;
                    do {
                        temp_f2 = temp_s3->eye.x;
                        *(this->unk254 + phi_s0_3) = (((2.0f * Rand_ZeroOne()) - 1.0f) * 40.0f) + temp_f2 + ((temp_s3->at.x - temp_f2) * 0.2f);
                        temp_f12 = temp_s3->eye.y;
                        (this->unk254 + phi_s0_3)->unk4 = (f32) ((((2.0f * Rand_ZeroOne()) - 1.0f) * 120.0f) + temp_f12 + ((temp_s3->at.y - temp_f12) * 0.2f) + sp4C);
                        temp_f14 = temp_s3->eye.z;
                        temp_s0_3 = phi_s0_3 + 0xC;
                        (this->unk254 + phi_s0_3)->unk8 = (f32) ((((2.0f * Rand_ZeroOne()) - 1.0f) * 40.0f) + temp_f14 + ((temp_s3->at.z - temp_f14) * 0.2f));
                        phi_s0_3 = temp_s0_3;
                    } while (temp_s0_3 != 0x300);
                }
                func_80A90C08(0x78);
                Quake2_SetType(0x20);
                Quake2_SetCountdown(0x50);
                globalCtx->unk_18844 = 1;
                this->unk274 = 0x5F;
            }
        }
    } else {
        this->unk276 = 2;
        this->unk15C = 0.0f;
        this->unk282 = 0;
        this->unk278 = 0;
        this->unk274 = 0x5B;
        this->unk14C = 0.1f;
    }
    if (this->unk286 != 0) {
        func_800B7298(globalCtx, NULL, 7U);
        goto block_47;
    }
    if (this->unk27A == 0x5A) {
        func_800B7298(globalCtx, NULL, 0x42U);
    }
    phi_v1_3 = this->unk27A;
    if (this->unk27A == 0x46) {
        func_800B7298(globalCtx, NULL, 0x52U);
        phi_v1_3 = this->unk27A;
    }
    phi_v1_4 = phi_v1_3;
    if (phi_v1_3 == 0x1E) {
        func_800B7298(globalCtx, NULL, 0x51U);
        phi_v1_4 = this->unk27A;
    }
    phi_v1_5 = (s32) phi_v1_4;
    if (phi_v1_4 == 5) {
        func_800B7298(globalCtx, NULL, 0x4AU);
block_47:
        phi_v1_5 = (s32) this->unk27A;
    }
    if (phi_v1_5 >= 0x51) {
        temp_f0 = temp_s3->fov;
        temp_s3->fov = temp_f0 + ((90.0f - temp_f0) / (f32) (phi_v1_5 - 0x50));
    } else if (phi_v1_5 >= 0x3D) {
        temp_f2_2 = temp_s3->at.x;
        temp_f0_2 = 1.0f / (f32) (phi_v1_5 - 0x3C);
        sp6C = temp_f2_2 + ((temp_s2->world.pos.x - temp_f2_2) * temp_f0_2);
        temp_f12_2 = temp_s3->at.y;
        sp70 = temp_f12_2 + (((temp_s2->focus.pos.y - temp_f12_2) - 20.0f) * temp_f0_2);
        temp_f14_2 = temp_s3->at.z;
        sp74 = temp_f14_2 + ((temp_s2->world.pos.z - temp_f14_2) * temp_f0_2);
        sp4C = temp_f0_2;
        temp_f8 = Math_SinS(temp_s2->world.rot.y) * 80.0f;
        temp_f6 = sp70 + 20.0f;
        sp58 = temp_f6;
        temp_f0_3 = Math_CosS(temp_s2->world.rot.y);
        temp_f2_3 = temp_s3->eye.x;
        temp_f16 = sp4C * 0.75f;
        temp_a3 = &sp60;
        sp60 = temp_f2_3 + (((temp_f8 + sp6C) - temp_f2_3) * temp_f16);
        temp_f12_3 = temp_s3->eye.y;
        sp64 = temp_f12_3 + ((temp_f6 - temp_f12_3) * temp_f16);
        temp_f14_3 = temp_s3->eye.z;
        sp68 = temp_f14_3 + ((((temp_f0_3 * 80.0f) + sp74) - temp_f14_3) * temp_f16);
        Play_CameraSetAtEye(globalCtx, this->unk284, (Vec3f *) &sp6C, (Vec3f *) temp_a3);
    } else if ((phi_v1_5 < 0xB) && (phi_v1_5 > 0)) {
        temp_f0_4 = temp_s3->fov;
        temp_s3->fov = temp_f0_4 + ((sp78->fov - temp_f0_4) / (f32) phi_v1_5);
    }
    temp_v0_10 = this->unk286;
    if (temp_v0_10 != 0) {
        func_80A90C54(globalCtx, (f32) temp_v0_10 * 0.05f);
        temp_f0_5 = temp_s3->fov;
        temp_s3->fov = temp_f0_5 + ((sp78->fov - temp_f0_5) * 0.05f);
        this->unk286 += 1;
        if ((s32) this->unk286 >= 0x14) {
            this->unk27A = 1;
        }
    } else {
        temp_v1_3 = this->unk27A;
        if (((s32) temp_v1_3 < 0x3D) && ((s32) temp_v1_3 >= 0x29) && ((temp_v0_11 = globalCtx->state.input[0].press.button, (~(temp_v0_11 | 0xFFFF7FFF) == 0)) || (~(temp_v0_11 | ~0x4000) == 0))) {
            temp_v0_12 = this->actor.params;
            this->unk286 = 1;
            if (temp_v0_12 == 0x19) {
                func_801A75E8(0x485D);
            } else if (temp_v0_12 == 0x18) {
                func_801A75E8(0x485E);
            }
        }
    }
    temp_v1_4 = this->unk27A;
    if (temp_v1_4 == 0) {
        phi_a0 = 0;
    } else {
        this->unk27A = temp_v1_4 - 1;
        phi_a0 = this->unk27A;
    }
    if (phi_a0 == 0) {
        func_80A916F0(&this->actor, globalCtx);
        globalCtx->msgCtx.unk1202A = 4;
    }
}

void func_80A920C8(GlobalContext *arg0, void *arg1) {
    void *temp_v0;

    temp_v0 = arg1->unk1CCC;
    arg0->unk27A = 0x78;
    arg0->unk286 = 0;
    arg0->view.viewing.m[0][2] = 0;
    arg0->state.destroy = temp_v0->unk24;
    arg0->state.nextGameStateInit = temp_v0->unk28;
    arg0->state.nextGameStateSize = temp_v0->unk2C;
    arg0->unk14 = (unaligned s32) temp_v0->unkBC;
    arg0->unk18 = (u16) temp_v0->unkC0;
}

void func_80A92118(Actor *arg0, GlobalContext *arg1) {
    s16 temp_a0;

    arg1->actorCtx.actorList[2].first->unk118 = 0;
    arg1->unk_18844 = 0;
    temp_a0 = arg1->unk_1879C[8];
    arg1 = arg1;
    ActorCutscene_Stop(temp_a0);
    func_800B7298(arg1, NULL, 6U);
    func_80A90C34();
    Quake2_ClearType(0x20);
    Actor_MarkForDeath(arg0);
}

void func_80A92188(EnTest6 *this, GlobalContext *globalCtx) {
    Actor *sp50;
    s16 sp46;
    ? sp34;
    s32 *sp30;
    f32 *sp2C;
    Camera *temp_a0;
    Camera *temp_v0_2;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_a1;
    u16 temp_v0_6;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s16 phi_v0;

    sp50 = globalCtx->actorCtx.actorList[2].first;
    temp_v1 = this->unk27A;
    if ((s32) temp_v1 >= 0x74) {
        this->unk160 += 0.2f;
        func_80A90C54(globalCtx, this->unk160);
        goto block_6;
    }
    if ((s32) temp_v1 >= 0x5B) {
        this->unk160 -= 0.05f;
        func_80A90C54(globalCtx, this->unk160);
        goto block_6;
    }
    if (temp_v1 == 0x5A) {
        this->unk160 = 0.0f;
        func_80A90D20(globalCtx);
block_6:
    }
    phi_v1 = (s32) this->unk27A;
    if ((s32) this->unk27A == 1) {
        this->unk160 = 0.0f;
        func_80A90D20(globalCtx);
        goto block_13;
    }
    if ((s32) this->unk27A < 0x11) {
        this->unk160 -= 0.06666666f;
        func_80A90C54(globalCtx, this->unk160);
        goto block_13;
    }
    if ((s32) this->unk27A < 0x16) {
        this->unk160 += 0.2f;
        func_80A90C54(globalCtx, this->unk160);
block_13:
        phi_v1 = (s32) this->unk27A;
    }
    phi_v1_2 = phi_v1;
    if (phi_v1 == 0x73) {
        func_800FD59C(globalCtx, &D_80A9406C, 1.0f);
        func_800FD5E0(globalCtx, &D_80A94070, 1.0f);
        func_800FD654(globalCtx, &D_80A94068, 1.0f);
        func_800FD698(globalCtx, D_80A94074, D_80A94078, 1.0f);
        globalCtx->unk_18844 = 1;
        phi_v1_2 = (s32) this->unk27A;
    }
    if (phi_v1_2 == 0xF) {
        func_800FD59C(globalCtx, &D_80A9406C, 0.0f);
        func_800FD5E0(globalCtx, &D_80A94070, 0.0f);
        func_800FD654(globalCtx, &D_80A94068, 0.0f);
        func_800FD698(globalCtx, D_80A94074, D_80A94078, 0.0f);
        globalCtx->unk_18844 = 0;
    }
    if ((s32) this->unk286 >= 0x14) {
        func_800FD59C(globalCtx, &D_80A9406C, this->unk160);
        func_800FD5E0(globalCtx, &D_80A94070, this->unk160);
        func_800FD654(globalCtx, &D_80A94068, this->unk160);
        func_800FD698(globalCtx, D_80A94074, D_80A94078, this->unk160);
        globalCtx->unk_18844 = 0;
    }
    func_800B8F98(sp50, 0x1C0U);
    temp_v0 = this->unk27A;
    if ((s32) temp_v0 >= 0x73) {
        if (temp_v0 != 0x73) {
            if (temp_v0 != 0x77) {

            } else {
                func_80A90C08(0x32);
            }
        } else {
            func_80A90C08(0x14);
            Quake2_SetType(0x20);
            Quake2_SetCountdown(0x5A);
            this->unk274 = 2;
        }
    } else if ((s32) temp_v0 >= 0x6F) {
        if (temp_v0 != 0x72) {

        } else {
            goto block_35;
        }
    } else if ((s32) temp_v0 >= 0x4D) {
        if (temp_v0 != 0x6E) {

        } else {
            func_801A3098(0x4AU);
        }
    } else {
        switch (temp_v0) { // switch 1
        case 38: // switch 1
block_35:
            this->unk274 = 1;
            break;
        case 76: // switch 1
            this->unk274 = 3;
            break;
        case 61: // switch 1
            func_80A90C08(0x96);
            this->unk274 = 4;
            break;
        case 51: // switch 1
            func_80A90C08(0xB4);
            this->unk274 = 5;
            break;
        case 14: // switch 1
        case 15: // switch 1
            func_80A90C08(0x32);
            Quake2_ClearType(0x20);
            this->unk274 = 0;
            break;
        case 1: // switch 1
            func_80A90C34();
            if ((gSaveContext.eventInf[5] & 4) != 0) {
                this->unk274 = 9;
            }
            break;
        }
    }
    func_80A92950(this, globalCtx);
    if (this->unk27A == 0x73) {
        temp_v0_2 = Play_GetCamera(globalCtx, ActorCutscene_GetCurrentCamera(globalCtx->unk_1879C[8]));
        temp_a0 = temp_v0_2;
        this->unk258 = temp_v0_2->at.x;
        this->unk25C = temp_v0_2->at.y;
        this->unk260 = temp_v0_2->at.z;
        this->unk264 = temp_v0_2->eye.x;
        this->unk268 = temp_v0_2->eye.y;
        this->unk26C = temp_v0_2->eye.z;
        this->unk270 = temp_v0_2->fov;
        func_8016119C(temp_a0, &this->unk18C);
    }
    phi_v1_3 = (s32) this->unk27A;
    if (((s32) this->unk27A < 0x74) && ((s32) this->unk27A >= 0x10)) {
        func_80161998(&D_80A93E80, &this->unk18C);
        goto block_49;
    }
    if ((s32) this->unk27A < 0x10) {
        sp2C = &this->unk264;
        sp30 = &this->unk258;
        temp_v0_3 = ActorCutscene_GetCurrentCamera(globalCtx->unk_1879C[8]);
        temp_a1 = temp_v0_3 << 0x10;
        sp46 = temp_v0_3;
        func_8016981C(globalCtx, temp_a1 >> 0x10, sp30, sp2C, &D_80A9405C);
        func_80169940(globalCtx, sp46, this->unk270);
        func_80169988(globalCtx, sp46, 0);
block_49:
        phi_v1_3 = (s32) this->unk27A;
    }
    if (phi_v1_3 >= 0x63) {
        if (phi_v1_3 != 0x74) {

        } else {
            sp50->freezeTimer = 2;
            sp50->shape.rot.x = 0;
            sp50->shape.rot.y = 0;
            sp50->world.pos.x = 0.0f;
            sp50->world.pos.y = 0.0f;
            sp50->world.pos.z = 0.0f;
            sp50->home.pos.x = 0.0f;
            sp50->home.pos.y = 0.0f;
            sp50->home.pos.z = 0.0f;
        }
    } else if (phi_v1_3 >= 0x45) {
        if (phi_v1_3 != 0x62) {

        } else {
            func_800B7298(globalCtx, NULL, 0x40U);
        }
    } else {
        switch (phi_v1_3) { // switch 2
        case 68: // switch 2
            func_800B7298(globalCtx, NULL, 0x41U);
            break;
        case 52: // switch 2
            func_800B7298(globalCtx, NULL, 0x58U);
            break;
        case 43: // switch 2
            func_800B7298(globalCtx, NULL, 0x72U);
            break;
        case 38: // switch 2
            func_800B7298(globalCtx, NULL, 7U);
            break;
        case 14: // switch 2
            sp50->freezeTimer = 5;
            sp34.unk0 = (f32) this->actor.home.pos.x;
            sp34.unk4 = (f32) this->actor.home.pos.y;
            sp34.unk8 = (f32) this->actor.home.pos.z;
            sp50->home.pos.x = sp34.unk0;
            sp50->home.pos.y = sp34.unk4;
            sp50->home.pos.z = sp34.unk8;
            sp50->world.pos.x = sp34.unk0;
            sp50->world.pos.y = sp34.unk4;
            sp50->world.pos.z = sp34.unk8;
            sp50->unkBC = (unaligned s32) this->unk14;
            sp50->shape.rot.z = (s16) (u16) this->actor.home.rot.z;
            temp_v0_4 = sp50->shape.rot.y;
            sp50->focus.rot.y = temp_v0_4;
            sp50->unkAD4 = temp_v0_4;
            sp50->unkABC = 0.0f;
            sp50->unkAC0 = 0.0f;
            sp50->shape.yOffset = 0.0f;
            break;
        }
    }
    temp_v0_5 = this->unk286;
    if (((s32) temp_v0_5 > 0) && ((s32) temp_v0_5 < 0x14)) {
        func_80A90C54(globalCtx, (f32) temp_v0_5 * 0.05f);
        this->unk286 += 1;
        if ((s32) this->unk286 >= 0x14) {
            this->unk27A = 0xF;
            this->unk160 = 0.9333333f;
        }
        goto block_75;
    }
    temp_v1_2 = this->unk27A;
    if (((s32) temp_v1_2 < 0x60) && ((s32) temp_v1_2 >= 0x33) && ((temp_v0_6 = globalCtx->state.input[0].press.button, (~(temp_v0_6 | 0xFFFF7FFF) == 0)) || (~(temp_v0_6 | ~0x4000) == 0))) {
        this->unk286 = 1;
        this->unk27A = 0x27;
        func_801A89A8(0x111400FF);
block_75:
    }
    if (this->unk27A == 0) {
        phi_v0 = 0;
    } else {
        this->unk27A += -1;
        phi_v0 = this->unk27A;
    }
    if (phi_v0 == 0) {
        func_80A92118(&this->actor, globalCtx);
    }
}

void EnTest6_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnTest6 *this = (EnTest6 *) thisx;
    this->actionFunc(this, globalCtx);
}

void func_80A92950(EnTest6 *this, GlobalContext *globalCtx) {
    Actor *sp3C;
    ? *temp_s0;
    Actor *temp_t6;
    GlobalContext *temp_a2;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f18_3;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f8;
    s32 temp_v1;
    s32 temp_v1_10;
    s32 temp_v1_11;
    s32 temp_v1_12;
    s32 temp_v1_13;
    s32 temp_v1_14;
    s32 temp_v1_15;
    s32 temp_v1_16;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 temp_v1_9;
    u16 temp_t6_2;
    u16 temp_t9;
    u16 temp_v0_2;
    u32 temp_t0;
    u32 temp_v0;
    void *temp_a1;
    f32 phi_f6;
    f32 phi_f18;
    f32 phi_f10;
    f32 phi_f18_2;
    f32 phi_f10_2;
    f32 phi_f8;
    f32 phi_f18_3;
    ? *phi_s0;
    f32 phi_f0;

    temp_a2 = globalCtx;
    temp_t6 = temp_a2->actorCtx.actorList[2].first;
    globalCtx = temp_a2;
    sp3C = temp_t6;
    if (func_800EE29C(temp_a2, 0x1F9U) != 0) {
        temp_v0 = func_800EE200(globalCtx, 0x1F9U);
        temp_a1 = globalCtx + (temp_v0 * 4);
        temp_t9 = globalCtx->csCtx.npcActions[temp_v0]->unk0;
        temp_t0 = temp_t9 & 0xFFFF;
        this->unk274 = (s16) temp_t9;
        switch (temp_t0) { // switch 1
        case 2: // switch 1
            this->unk276 = 0;
            this->unk278 = 0;
            this->unk27C = 0;
            sp3C->shape.shadowDraw = NULL;
            temp_v1 = temp_a1->unk1F4C->unkC;
            if (temp_v1 != 0) {
                temp_f6 = (f32) temp_v1;
                phi_f6 = temp_f6;
                if (temp_v1 < 0) {
                    phi_f6 = temp_f6 + 4294967296.0f;
                }
                this->unk154 = phi_f6;
            } else {
                this->unk154 = 150.0f;
            }
            temp_v1_2 = temp_a1->unk1F4C->unk10;
            if (temp_v1_2 != 0) {
                this->unk280 = (s16) temp_v1_2;
            } else {
                this->unk280 = 0x26;
            }
            temp_v1_3 = temp_a1->unk1F4C->unk14;
            if (temp_v1_3 != 0) {
                temp_f18 = (f32) temp_v1_3;
                phi_f18 = temp_f18;
                if (temp_v1_3 < 0) {
                    phi_f18 = temp_f18 + 4294967296.0f;
                }
                this->unk150 = phi_f18;
            } else {
                this->unk150 = 480.0f;
            }
            goto block_89;
        case 3: // switch 1
            temp_v1_4 = temp_a1->unk1F4C->unkC;
            if (temp_v1_4 != 0) {
                this->unk154 += (f32) temp_v1_4;
            }
            temp_v1_5 = temp_a1->unk1F4C->unk10;
            if (temp_v1_5 != 0) {
                this->unk280 += temp_v1_5;
            } else {
                this->unk280 += 6;
            }
            temp_v1_6 = temp_a1->unk1F4C->unk14;
            if (temp_v1_6 != 0) {
                temp_f10 = (f32) temp_v1_6;
                phi_f10 = temp_f10;
                if (temp_v1_6 < 0) {
                    phi_f10 = temp_f10 + 4294967296.0f;
                }
                this->unk158 = phi_f10;
            } else {
                this->unk158 = -32.0f;
            }
            this->unk150 += this->unk158;
            goto block_89;
        case 4: // switch 1
            temp_v1_7 = temp_a1->unk1F4C->unkC;
            if (temp_v1_7 != 0) {
                this->unk154 += (f32) temp_v1_7;
            }
            temp_v1_8 = temp_a1->unk1F4C->unk10;
            if (temp_v1_8 != 0) {
                this->unk280 += temp_v1_8;
            } else {
                this->unk280 += -4;
            }
            goto block_89;
        case 5: // switch 1
            temp_v1_9 = temp_a1->unk1F4C->unkC;
            if (temp_v1_9 != 0) {
                this->unk154 += (f32) temp_v1_9;
            }
            temp_v1_10 = temp_a1->unk1F4C->unk10;
            if (temp_v1_10 != 0) {
                this->unk280 += temp_v1_10;
            } else {
                this->unk280 += -8;
            }
            temp_v1_11 = temp_a1->unk1F4C->unk14;
            if (temp_v1_11 != 0) {
                this->unk158 += (f32) temp_v1_11;
            } else {
                this->unk158 += 20.0f;
            }
            this->unk150 += this->unk158;
            if (this->unk150 > 3500.0f) {
                this->unk150 = 3500.0f;
                this->unk274 = 0;
            }
            goto block_89;
        case 6: // switch 1
            this->unk276 = 1;
            this->unk278 = 0;
            this->unk27C = 0;
            sp3C->shape.shadowDraw = NULL;
            temp_v1_12 = temp_a1->unk1F4C->unkC;
            if (temp_v1_12 != 0) {
                temp_f18_2 = (f32) temp_v1_12;
                phi_f18_2 = temp_f18_2;
                if (temp_v1_12 < 0) {
                    phi_f18_2 = temp_f18_2 + 4294967296.0f;
                }
                this->unk154 = phi_f18_2;
            } else {
                this->unk154 = 100.0f;
            }
            temp_v1_13 = temp_a1->unk1F4C->unk10;
            if (temp_v1_13 != 0) {
                temp_f10_2 = (f32) temp_v1_13;
                phi_f10_2 = temp_f10_2;
                if (temp_v1_13 < 0) {
                    phi_f10_2 = temp_f10_2 + 4294967296.0f;
                }
                this->unk14C = phi_f10_2;
            } else {
                this->unk14C = 20.0f;
            }
            temp_v1_14 = temp_a1->unk1F4C->unk14;
            if (temp_v1_14 != 0) {
                temp_f8 = (f32) temp_v1_14;
                phi_f8 = temp_f8;
                if (temp_v1_14 < 0) {
                    phi_f8 = temp_f8 + 4294967296.0f;
                }
                this->unk150 = phi_f8;
            } else {
                this->unk150 = 300.0f;
            }
            this->unk158 = 0.0f;
            goto block_89;
        case 7: // switch 1
            temp_v1_15 = temp_a1->unk1F4C->unkC;
            if (temp_v1_15 != 0) {
                temp_f18_3 = (f32) temp_v1_15;
                phi_f18_3 = temp_f18_3;
                if (temp_v1_15 < 0) {
                    phi_f18_3 = temp_f18_3 + 4294967296.0f;
                }
                this->unk158 = phi_f18_3;
            } else {
                this->unk158 = -5.0f;
            }
            this->unk154 += this->unk158;
            goto block_89;
        case 8: // switch 1
            temp_v1_16 = temp_a1->unk1F4C->unkC;
            if (temp_v1_16 != 0) {
                this->unk158 += (f32) temp_v1_16;
            } else {
                this->unk158 += 2.0f;
            }
            this->unk154 += this->unk158;
            if (this->unk154 > 10000.0f) {
                this->unk154 = 10000.0f;
                this->unk274 = 0;
            }
            goto block_89;
        default: // switch 1
            this->unk276 = 0x63;
            return;
        case 9: // switch 1
            func_80169DCC(globalCtx, 1, gSaveContext.entranceIndex & 0xFFFF, (s32) sp3C->unk3CE, 0xBFF, sp3C + 0x3C0, (s16) (s32) sp3C->unk3CC);
            this->unk276 = 0x63;
            globalCtx->sceneLoadFlag = 0x14;
            globalCtx->nextEntranceIndex = gSaveContext.respawn[1].entranceIndex;
            globalCtx->unk_1887F = 2;
            temp_v0_2 = gSaveContext.time;
            if (((s32) temp_v0_2 >= 0xC001) || ((s32) temp_v0_2 < 0x4000)) {
                gSaveContext.respawnFlag = -0x63;
                gSaveContext.eventInf[2] |= 0x80;
            } else {
                gSaveContext.respawnFlag = 2;
            }
            globalCtx->msgCtx.unk1202A = 4;
            return;
        }
    } else {
        temp_t6_2 = (u16) this->unk274;
        switch (temp_t6_2) { // switch 2
        case 2: // switch 2
            this->unk276 = 0;
            this->unk278 = 0;
            this->unk27C = 0;
            sp3C->shape.shadowDraw = NULL;
            this->unk280 = 0x26;
            this->unk154 = 150.0f;
            this->unk150 = 480.0f;
        case 1: // switch 2
        case 1: // switch 1
block_89:
            if (this->unk276 == 1) {
                phi_s0 = &D_80A94910;
                do {
                    phi_s0->unk8 = (f32) (phi_s0->unk8 + (2.0f * ((2.0f * Rand_ZeroOne()) - 1.0f)));
                    temp_f6_2 = 2.0f * ((2.0f * Rand_ZeroOne()) - 1.0f);
                    phi_s0->unkC = (f32) (phi_s0->unkC + 3.0f);
                    temp_f12 = phi_s0->unkC;
                    phi_s0->unk10 = (f32) (phi_s0->unk10 + temp_f6_2);
                    temp_f14 = sp3C->world.pos.y;
                    if (temp_f14 < temp_f12) {
                        temp_f0 = temp_f12 - temp_f14;
                        if (temp_f0 > 550.0f) {
                            phi_f0 = 1.0f;
                        } else {
                            phi_f0 = temp_f0 / 550.0f;
                        }
                        phi_s0->unk4 = (f32) (phi_f0 * phi_f0);
                    } else {
                        phi_s0->unk4 = -10.0f;
                    }
                    temp_s0 = phi_s0 + 0x18;
                    phi_s0 = temp_s0;
                } while (temp_s0 != &func_80A94A30);
            }
            this->unk278 += 1;
            return;
        case 3: // switch 2
            this->unk158 = -32.0f;
            this->unk280 += 6;
            this->unk150 += -32.0f;
            goto block_89;
        case 4: // switch 2
            this->unk280 += -4;
            goto block_89;
        case 5: // switch 2
            this->unk280 += -8;
            this->unk158 += 20.0f;
            this->unk150 += this->unk158;
            if (this->unk150 > 3500.0f) {
                this->unk150 = 3500.0f;
                this->unk274 = 0;
            }
            goto block_89;
        case 6: // switch 2
            this->unk276 = 1;
            this->unk278 = 0;
            this->unk27C = 0;
            sp3C->shape.shadowDraw = NULL;
            this->unk154 = 100.0f;
            this->unk14C = 20.0f;
            this->unk150 = 300.0f;
            this->unk158 = 0.0f;
            goto block_89;
        case 7: // switch 2
            this->unk158 = -5.0f;
            this->unk154 += -5.0f;
            goto block_89;
        case 8: // switch 2
            this->unk158 += 2.0f;
            this->unk154 += this->unk158;
            if (this->unk154 > 10000.0f) {
                this->unk154 = 10000.0f;
                this->unk274 = 0;
            }
            goto block_89;
        default: // switch 2
            this->unk276 = 0x63;
            return;
        case 9: // switch 2
            if ((s32) gSaveContext.time >= 0x8001) {
                func_80169DCC(globalCtx, 1, gSaveContext.entranceIndex & 0xFFFF, (s32) sp3C->unk3CE, 0xBFF, sp3C + 0x3C0, (s16) (s32) sp3C->unk3CC);
                this->unk276 = 0x63;
                globalCtx->sceneLoadFlag = 0x14;
                globalCtx->nextEntranceIndex = gSaveContext.respawn[1].entranceIndex;
                globalCtx->unk_1887F = 2;
                gSaveContext.respawnFlag = 2;
                globalCtx->msgCtx.unk1202A = 4;
                return;
            }
            // Duplicate return node #99. Try simplifying control flow for better match
            return;
        }
    }
}

void func_80A93298(void *arg0, void *arg1) {
    GraphicsContext *sp5C;
    ? *temp_s0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_v0;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    s16 temp_s3;
    s16 temp_s3_2;
    s16 temp_s4;
    s16 temp_s4_2;
    s32 temp_s5;
    s16 phi_s3;
    f32 phi_f24;
    s16 phi_s2;
    s16 phi_s4;
    s32 phi_s5;
    ? *phi_s0;

    temp_v0 = arg1->unk0;
    temp_s3 = arg0->unk27C;
    arg0->unk148 = (Gfx *) temp_v0->polyOpa.p;
    sp5C = temp_v0;
    temp_f2 = arg0->unk154;
    temp_f12 = temp_f2 / 200.0f;
    temp_s4 = (s32) (Math_SinS(arg1->unk9E) * 12000.0f) + temp_s3 + 0x4E20;
    arg0->unk27C = (s16) (arg0->unk27C + (s32) temp_f2);
    arg0->unk27E = (s16) (s32) (temp_f12 * 256.0f);
    phi_s3 = temp_s3;
    phi_f24 = 0.0f;
    phi_s2 = (s16) (s32) ((f32) (s16) ((arg1->unk9C & 0x3C) << 0xA) * temp_f12);
    phi_s4 = temp_s4;
    phi_s5 = 0;
    do {
        temp_s3_2 = phi_s3 + 0x1000;
        temp_f20 = Math_CosS(temp_s3_2) * arg0->unk150;
        SysMatrix_InsertTranslation(temp_f20, phi_f24, Math_SinS(temp_s3_2) * arg0->unk150, 0);
        SysMatrix_InsertXRotation_s(0x4000, 1);
        Matrix_Scale(0.8f, 0.8f, 0.8f, 1);
        SysMatrix_InsertZRotation_s(phi_s2, 1);
        temp_v0_2 = arg0->unk148;
        arg0->unk148 = (Gfx *) (temp_v0_2 + 8);
        temp_v0_2->words.w0 = 0xDA380003;
        temp_v0_2->words.w1 = Matrix_NewMtx(arg1->unk0);
        temp_v0_3 = arg0->unk148;
        arg0->unk148 = (Gfx *) (temp_v0_3 + 8);
        temp_v0_3->words.w0 = 0xFA0000FF;
        temp_v0_3->words.w1 = 0x1C1C1CFF;
        temp_v0_4 = arg0->unk148;
        arg0->unk148 = (Gfx *) (temp_v0_4 + 8);
        temp_v0_4->words.w1 = -1;
        temp_v0_4->words.w0 = 0xFB000000;
        temp_v0_5 = arg0->unk148;
        arg0->unk148 = (Gfx *) (temp_v0_5 + 8);
        temp_v0_5->words.w0 = 0xE200001C;
        temp_v0_5->words.w1 = 0xC8112078;
        temp_v0_6 = arg0->unk148;
        temp_s4_2 = phi_s4 + 0x1000;
        arg0->unk148 = (Gfx *) (temp_v0_6 + 8);
        temp_v0_6->words.w1 = &D_0407AFB0;
        temp_v0_6->words.w0 = 0xDE000000;
        temp_f20_2 = Math_CosS(temp_s4_2) * arg0->unk150;
        SysMatrix_InsertTranslation(temp_f20_2, phi_f24, Math_SinS(temp_s4_2) * arg0->unk150, 0);
        SysMatrix_InsertXRotation_s(0x4000, 1);
        Matrix_Scale(0.8f, 0.8f, 0.8f, 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) phi_s2 * -1), 1);
        temp_v0_7 = arg0->unk148;
        arg0->unk148 = (Gfx *) (temp_v0_7 + 8);
        temp_v0_7->words.w0 = 0xDA380003;
        temp_v0_7->words.w1 = Matrix_NewMtx(arg1->unk0);
        temp_v0_8 = arg0->unk148;
        arg0->unk148 = (Gfx *) (temp_v0_8 + 8);
        temp_v0_8->words.w0 = 0xFA0000FF;
        temp_v0_8->words.w1 = 0x1C1C1CFF;
        temp_v0_9 = arg0->unk148;
        arg0->unk148 = (Gfx *) (temp_v0_9 + 8);
        temp_v0_9->words.w1 = -1;
        temp_v0_9->words.w0 = 0xFB000000;
        temp_v0_10 = arg0->unk148;
        arg0->unk148 = (Gfx *) (temp_v0_10 + 8);
        temp_v0_10->words.w0 = 0xE200001C;
        temp_v0_10->words.w1 = 0xC8112078;
        temp_v0_11 = arg0->unk148;
        temp_s5 = phi_s5 + 1;
        arg0->unk148 = (Gfx *) (temp_v0_11 + 8);
        temp_v0_11->words.w1 = &D_0407AFB0;
        temp_v0_11->words.w0 = 0xDE000000;
        phi_s3 = temp_s3_2;
        phi_f24 -= arg0->unk14C;
        phi_s2 = (s16) (phi_s2 + arg0->unk27E);
        phi_s4 = temp_s4_2;
        phi_s5 = temp_s5;
    } while (temp_s5 < 0x40);
    sp5C->polyOpa.p = arg0->unk148;
    phi_s0 = &D_80A94910;
    do {
        if (phi_s0->unk4 > 0.0f) {
            phi_s0->unk14(arg0, arg1, phi_s0);
        }
        temp_s0 = phi_s0 + 0x18;
        phi_s0 = temp_s0;
    } while (temp_s0 != &func_80A94A30);
}

void func_80A9369C(void *arg0, void *arg1) {
    s16 sp78;
    void *sp70;
    GraphicsContext *sp68;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a3;
    LightInfo *temp_s1;
    f32 temp_f20;
    f32 temp_f22;
    s16 temp_v0;
    s32 temp_s3;
    s32 temp_v1_2;
    u8 temp_v1;
    void *temp_a2;
    s16 phi_s2;
    f32 phi_f26;
    s32 phi_s3;

    temp_a2 = arg1->unk1CCC;
    temp_a3 = arg1->unk0;
    arg0->unk148 = (Gfx *) temp_a3->polyOpa.p;
    arg0->unk27C = (s16) (arg0->unk27C + (s32) arg0->unk154);
    temp_v0 = arg0->unk27C;
    arg0->unk27E = (s16) (temp_v0 * 2);
    sp78 = (arg1->unk9C & 0x3C) << 0xA;
    temp_v1 = temp_a2->unk14B;
    phi_s2 = (s16) (temp_v0 + 0x4000);
    phi_s3 = 0;
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {
            if (temp_v1 != 2) {
                if (temp_v1 != 3) {
                    phi_f26 = temp_a2->unk28 + 40.0f;
                } else {
                    goto block_9;
                }
            } else {
                phi_f26 = temp_a2->unk28 + 40.0f;
            }
        } else {
            phi_f26 = temp_a2->unk28 + 40.0f;
        }
    } else {
block_9:
        phi_f26 = temp_a2->unk28 + 40.0f;
    }
    sp70 = temp_a2;
    sp68 = temp_a3;
    do {
        temp_f20 = Math_CosS(phi_s2) * arg0->unk150;
        temp_f22 = Math_SinS(phi_s2) * arg0->unk150;
        SysMatrix_InsertZRotation_s(arg0->unk27E, 0);
        SysMatrix_InsertTranslation(phi_f26, temp_f20, temp_f22, 1);
        Matrix_Scale(0.85f, 0.85f, 0.85f, 1);
        SysMatrix_InsertXRotation_s(phi_s2, 1);
        SysMatrix_InsertZRotation_s(sp78, 1);
        temp_v0_2 = arg0->unk148;
        arg0->unk148 = (Gfx *) (temp_v0_2 + 8);
        temp_v0_2->words.w0 = 0xDA380003;
        temp_v0_2->words.w1 = Matrix_NewMtx(arg1->unk0);
        temp_v0_3 = arg0->unk148;
        arg0->unk148 = (Gfx *) (temp_v0_3 + 8);
        temp_v0_3->words.w0 = 0xFA0000FF;
        temp_v1_2 = arg0->unk280 & 0xFF;
        temp_v0_3->words.w1 = (temp_v1_2 << 0x18) | (temp_v1_2 << 0x10) | (temp_v1_2 << 8) | 0xFF;
        temp_v0_4 = arg0->unk148;
        temp_s3 = phi_s3 + 1;
        arg0->unk148 = (Gfx *) (temp_v0_4 + 8);
        temp_v0_4->words.w1 = 0xEBEEEBFF;
        temp_v0_4->words.w0 = 0xFB000000;
        temp_v0_5 = arg0->unk148;
        arg0->unk148 = (Gfx *) (temp_v0_5 + 8);
        temp_v0_5->words.w1 = 0xC8112078;
        temp_v0_5->words.w0 = 0xE200001C;
        temp_v0_6 = arg0->unk148;
        arg0->unk148 = (Gfx *) (temp_v0_6 + 8);
        temp_v0_6->words.w1 = &D_0407AFB0;
        temp_v0_6->words.w0 = 0xDE000000;
        phi_s2 = (s16) (phi_s2 + 0x505);
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x33);
    temp_s1 = arg0 + 0x168;
    Lights_PointSetPosition(temp_s1, (s16) (s32) sp70->unk24, (s16) (s32) (sp70->unk28 - 10.0f), (s16) (s32) sp70->unk2C);
    Lights_PointSetColorAndRadius(temp_s1, 0x64U, 0xFAU, 0x64U, (s16) 0xC8);
    sp68->polyOpa.p = arg0->unk148;
}

void func_80A939E8(void *arg0, void *arg1) {
    void *sp90;
    s32 *sp50;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s3;
    LightInfo *temp_s0;
    LightInfo *temp_s0_2;
    f32 temp_f20;
    s16 temp_t6;
    s32 temp_s4;
    s32 temp_s5;
    void *temp_v0;
    void *temp_v0_7;
    void *phi_s2;
    s32 phi_s5;
    s32 phi_s5_2;
    s32 phi_s4;

    temp_v0 = arg1->unk1CCC;
    temp_t6 = arg0->unk274;
    temp_s3 = arg1->unk0;
    switch (temp_t6) {
    case 91:
    case 93:
        temp_s0 = arg0 + 0x168;
        Lights_PointSetPosition(temp_s0, (s16) (s32) temp_v0->unk24, (s16) (s32) (temp_v0->unk28 - 10.0f), (s16) (s32) temp_v0->unk2C);
        Lights_PointSetColorAndRadius(temp_s0, 0xF5U, 0xF5U, 0xC8U, (s16) (s32) arg0->unk282);
        return;
    case 95:
        arg0->unk148 = (Gfx *) temp_s3->polyXlu.p;
        sp90 = temp_v0;
        sp50 = &D_0407AFB0;
        phi_s2 = arg0;
        phi_s5 = 0;
        phi_s5_2 = 0;
        do {
            SysMatrix_InsertTranslation(phi_s2->unk20C, phi_s2->unk210, phi_s2->unk214, 0);
            Matrix_Scale(0.3f, 0.3f, 0.3f, 1);
            SysMatrix_InsertXRotation_s(-0x4000, 1);
            SysMatrix_InsertZRotation_s(arg0->unk278, 1);
            temp_v0_2 = arg0->unk148;
            arg0->unk148 = (Gfx *) (temp_v0_2 + 8);
            temp_v0_2->words.w0 = 0xDA380003;
            temp_v0_2->words.w1 = Matrix_NewMtx(arg1->unk0);
            temp_v0_3 = arg0->unk148;
            arg0->unk148 = (Gfx *) (temp_v0_3 + 8);
            temp_v0_3->words.w1 = 0x1C1C1CFF;
            temp_v0_3->words.w0 = 0xFA0000FF;
            temp_v0_4 = arg0->unk148;
            arg0->unk148 = (Gfx *) (temp_v0_4 + 8);
            temp_v0_4->words.w0 = 0xFB000000;
            temp_v0_4->words.w1 = (arg0->unk282 & 0xFF) | 0xF5F5C800;
            temp_v0_5 = arg0->unk148;
            arg0->unk148 = (Gfx *) (temp_v0_5 + 8);
            temp_v0_5->words.w1 = 0xC81049D8;
            temp_v0_5->words.w0 = 0xE200001C;
            temp_v0_6 = arg0->unk148;
            temp_s5 = phi_s5 + 0xC;
            arg0->unk148 = (Gfx *) (temp_v0_6 + 8);
            temp_v0_6->words.w0 = 0xDE000000;
            temp_v0_6->words.w1 = sp50;
            temp_s3->polyXlu.p = arg0->unk148;
            phi_s2 += 0xC;
            phi_s5 = temp_s5;
        } while (temp_s5 < 0x48);
        phi_s4 = 0;
        if (arg0->unk254 != 0) {
            sp50 = arg1 + 0x187FC;
            do {
                temp_v0_7 = arg0->unk254 + phi_s5_2;
                temp_f20 = Rand_ZeroOne() * 0.0025f;
                SysMatrix_InsertTranslation(temp_v0_7->unk0, temp_v0_7->unk4, temp_v0_7->unk8, 0);
                Matrix_Scale(temp_f20, temp_f20, temp_f20, 1);
                temp_v0_8 = temp_s3->polyXlu.p;
                temp_s3->polyXlu.p = temp_v0_8 + 8;
                temp_v0_8->words.w0 = 0xFA000080;
                temp_v0_8->words.w1 = (((s32) arg0->unk282 >> 1) & 0xFF) | 0x80808000;
                temp_v0_9 = temp_s3->polyXlu.p;
                temp_s3->polyXlu.p = temp_v0_9 + 8;
                temp_v0_9->words.w0 = 0xFB000000;
                temp_v0_9->words.w1 = (arg0->unk282 & 0xFF) | 0xE6E6B400;
                func_8012C2DC(arg1->unk0);
                SysMatrix_InsertMatrix((MtxF *) sp50, 1);
                SysMatrix_InsertZRotation_s((s16) (arg0->unk278 + (phi_s4 * 4)), 1);
                temp_v0_10 = temp_s3->polyXlu.p;
                temp_s3->polyXlu.p = temp_v0_10 + 8;
                temp_v0_10->words.w0 = 0xDA380003;
                temp_v0_10->words.w1 = Matrix_NewMtx(arg1->unk0);
                temp_v0_11 = temp_s3->polyXlu.p;
                temp_s4 = phi_s4 + 1;
                temp_s3->polyXlu.p = temp_v0_11 + 8;
                temp_v0_11->words.w1 = (u32) D_04023210;
                temp_v0_11->words.w0 = 0xDE000000;
                phi_s5_2 += 0xC;
                phi_s4 = temp_s4;
            } while (temp_s4 != 0x40);
        }
        temp_s0_2 = arg0 + 0x168;
        Lights_PointSetPosition(temp_s0_2, (s16) (s32) sp90->unk24, (s16) (s32) (sp90->unk28 - 10.0f), (s16) (s32) sp90->unk2C);
        Lights_PointSetColorAndRadius(temp_s0_2, 0xFAU, 0xFAU, 0x64U, (s16) (s32) arg0->unk282);
        // fallthrough
    default:
        return;
    }
}

void EnTest6_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnTest6 *this = (EnTest6 *) thisx;
    s16 temp_v0;

    if (this->unk274 != 0) {
        temp_v0 = this->unk276;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {
                if (temp_v0 != 2) {
                    return;
                }
                func_80A939E8();
                // Duplicate return node #8. Try simplifying control flow for better match
                return;
            }
            func_80A93298();
            return;
        }
        func_80A9369C();
    }
}

