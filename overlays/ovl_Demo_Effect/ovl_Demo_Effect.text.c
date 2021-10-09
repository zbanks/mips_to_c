? func_800F2620(? *);                               /* extern */
? func_800F2650(GlobalContext *, ? *, ? *, ? *);    /* extern */
? func_800F26C0(GlobalContext *, ? *, DemoEffect *, GlobalContext *); /* extern */
? func_800F26F0(? *, ? *, f32, ?, f32, f32);        /* extern */
s32 func_800F2728(GlobalContext *, ? *);            /* extern */
? func_800F2CD8(Actor *, GlobalContext *, Actor *, ? (*)(GraphicsContext **, void *, s32, void *), s32, s32, Actor *); /* extern */
void func_808CD998(DemoEffect *this, GlobalContext *globalCtx); /* static */
void func_808CDAD0(f32 arg0);                       /* static */
void func_808CDDE0(DemoEffect *this, GlobalContext *globalCtx); /* static */
? func_808CDE78(GraphicsContext **arg0, void *arg1, s32 arg2, void *arg3); /* static */
void func_808CDFF8(Actor *this, GlobalContext *globalCtx); /* static */
void func_808CE078(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_06000050;
extern void D_06000060;
extern ? D_060012E8;
extern s8 D_801F4E32;
extern ? D_801F4E38;
extern f32 D_801F4E44;
extern f32 D_801F4E48;
extern s16 D_801F4E4C;
static ? D_808CE2B0;                                /* unable to generate initializer */
static ? D_808CE2C0;                                /* unable to generate initializer */
static u8 D_808CE2D4 = 1;
static ? D_808CE2D5;                                /* unable to generate initializer */

typedef struct DemoEffect {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ? unk144;                          /* inferred */
    /* 0x0145 */ char pad145[0x1F];
    /* 0x0164 */ u8 unk164;                         /* inferred */
    /* 0x0165 */ char pad165[0x3];                  /* maybe part of unk164[4]? */
    /* 0x0168 */ u8 unk168;                         /* inferred */
    /* 0x0169 */ u8 unk169;                         /* inferred */
    /* 0x016A */ u8 unk16A;                         /* inferred */
    /* 0x016B */ char pad16B[0x1];                  /* maybe part of unk16A[2]? */
    /* 0x016C */ s16 unk16C;                        /* inferred */
    /* 0x016E */ char pad16E[0x2];                  /* maybe part of unk16C[2]? */
    /* 0x0170 */ void (*unk170)(DemoEffect *, GlobalContext *); /* inferred */
    /* 0x0174 */ void (*unk174)(Actor *, GlobalContext *); /* inferred */
    /* 0x0178 */ void (*actionFunc)(DemoEffect *, GlobalContext *);
} DemoEffect;                                       /* size 0x17C */

void DemoEffect_Init(Actor *thisx, GlobalContext *globalCtx) {
    DemoEffect *this = (DemoEffect *) thisx;
    u32 sp3C;
    ? sp24;
    s16 temp_a2;
    s16 temp_a3;
    u32 temp_a3_2;
    void *temp_v0;
    s32 phi_v1;

    temp_a3 = this->actor.params;
    sp24.unk0 = (s32) D_808CE2B0.unk0;
    temp_a3_2 = temp_a3 & 0xFF;
    sp24.unk8 = (s32) D_808CE2B0.unk8;
    sp24.unk4 = (s32) D_808CE2B0.unk4;
    sp24.unkC = (first 3 bytes) D_808CE2B0.unkC;
    temp_a2 = *(&D_808CE2C0 + (temp_a3_2 * 2));
    if (temp_a2 == 1) {
        phi_v1 = 0;
    } else {
        sp3C = temp_a3_2;
        phi_v1 = Object_GetIndex(&globalCtx->objectCtx, temp_a2);
    }
    if (phi_v1 >= 0) {
        this->unk164 = (u8) phi_v1;
    }
    sp3C = temp_a3 & 0xFF;
    Actor_SetScale(&this->actor, 0.2f);
    switch (temp_a3 & 0xFF) {
    case 0:
    case 1:
        this->actor.flags |= 0x2000000;
        // fallthrough
    case 2:
    case 3:
        this->unk174 = func_808CDFF8;
        this->unk170 = func_808CD998;
        this->unk168 = 0;
        this->unk169 = 0x64;
        this->unk16A = 0xFF;
        func_800F2620(&this->unk144);
block_10:
        this->unk16C = 0;
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        temp_v0 = ((temp_a3 & 0xFF) * 3) + &sp24;
        this->unk168 = temp_v0->unk-C;
        this->unk169 = temp_v0->unk-B;
        this->unk16A = temp_v0->unk-A;
        Actor_SetScale(&this->actor, 0.0f);
        this->unk174 = func_808CE078;
        this->unk170 = func_808CDDE0;
        goto block_10;
    }
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    this->actionFunc = func_808CD940;
}

void DemoEffect_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DemoEffect *this = (DemoEffect *) thisx;
    s32 temp_v0;

    temp_v0 = this->actor.params & 0xFF;
    if ((temp_v0 == 0) || (temp_v0 == 1) || (temp_v0 == 2) || (temp_v0 == 3)) {
        func_800F26C0(globalCtx, &this->unk144, this, globalCtx);
    }
}

void func_808CD940(DemoEffect *this, GlobalContext *globalCtx) {
    u8 temp_a1;

    temp_a1 = this->unk164;
    this = this;
    if (Object_IsLoaded(&globalCtx->objectCtx, (s32) temp_a1) != 0) {
        this->actor.objBankIndex = (s8) this->unk164;
        this->actor.draw = this->unk174;
        this->actionFunc = this->unk170;
    }
}

void func_808CD998(DemoEffect *this, GlobalContext *globalCtx) {
    s32 sp34;
    ? *sp2C;
    ? *temp_a1;
    s32 temp_v1;

    temp_a1 = &this->unk144;
    temp_v1 = this->actor.params & 0xFF;
    sp34 = temp_v1;
    sp2C = temp_a1;
    func_800F2650(globalCtx, temp_a1, &D_060012E8, &D_06000050);
    sp34 = temp_v1;
    func_800F26F0(sp2C, &D_06000050, 1.0f, 0x426C0000, 1.0f, 1.7f);
    func_800F2728(globalCtx, temp_a1);
    this->actionFunc = func_808CDCEC;
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {
            if (temp_v1 != 2) {
                if (temp_v1 != 3) {
                    Actor_SetScale(&this->actor, 0.014f);
                    return;
                }
                Actor_SetScale(&this->actor, 0.28f);
                return;
            }
            Actor_SetScale(&this->actor, 0.16800001f);
            return;
        }
        Actor_SetScale(&this->actor, 0.08400001f);
        return;
    }
    Actor_SetScale(&this->actor, 0.16800001f);
}

void func_808CDAD0(f32 arg0) {
    s8 sp26;
    s8 sp25;
    u8 sp24;
    s32 temp_v1;
    u8 *temp_a2;
    u8 temp_a1;
    u8 temp_a1_2;
    u8 temp_a1_3;
    u8 temp_a1_4;
    u8 temp_t0;
    void *temp_v0;
    ? *phi_a0;
    s32 phi_v1;

    temp_v0 = Lib_SegmentedToVirtual(&D_06000060);
    temp_t0 = D_808CE2D4;
    temp_a2 = &sp24;
    sp24 = 0;
    sp25 = (s8) (s32) (202.0f * arg0);
    sp26 = (s8) (s32) (255.0f * arg0);
    phi_a0 = &D_808CE2D5;
    phi_v1 = 1;
    if (temp_t0 != 0) {
        temp_v0->unkF = (u8) temp_a2[temp_t0];
    }
    do {
        temp_a1 = phi_a0->unk0;
        if (temp_a1 != 0) {
            (temp_v0 + (phi_v1 * 0x10))->unkF = (u8) (&sp24)[temp_a1];
        }
        temp_a1_2 = phi_a0->unk1;
        if (temp_a1_2 != 0) {
            (temp_v0 + (phi_v1 * 0x10))->unk1F = (u8) (&sp24)[temp_a1_2];
        }
        temp_a1_3 = phi_a0->unk2;
        if (temp_a1_3 != 0) {
            (temp_v0 + (phi_v1 * 0x10))->unk2F = (u8) (&sp24)[temp_a1_3];
        }
        temp_a1_4 = phi_a0->unk3;
        if (temp_a1_4 != 0) {
            (temp_v0 + (phi_v1 * 0x10))->unk3F = (u8) (&sp24)[temp_a1_4];
        }
        temp_v1 = phi_v1 + 4;
        phi_a0 += 4;
        phi_v1 = temp_v1;
    } while (temp_v1 != 0x15);
}

void func_808CDBDC(DemoEffect *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f12;
    s16 temp_v1;
    s32 temp_v0;
    f32 phi_f2;

    this->unk16C += 1;
    temp_v1 = this->unk16C;
    temp_v0 = this->actor.params & 0xFF;
    if ((s32) temp_v1 < 0x65) {
        temp_f12 = (f32) (0x64 - temp_v1) * 0.01f;
        temp_f0 = temp_f12 * 0.14f;
        phi_f2 = temp_f0;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {
                if (temp_v0 != 2) {
                    if (temp_v0 != 3) {

                    } else {
                        phi_f2 = 2.0f * temp_f0;
                    }
                } else {
                    phi_f2 = temp_f0 * 1.2f;
                }
            } else {
                phi_f2 = temp_f0 * 0.6f;
            }
        } else {
            phi_f2 = temp_f0 * 1.2f;
        }
        this->actor.scale.x = phi_f2;
        this->actor.scale.z = phi_f2;
        func_808CDAD0(temp_f12);
        func_800B8FE8(&this->actor, 0x209DU);
        return;
    }
    func_808CDAD0(1.0f);
    Actor_MarkForDeath(&this->actor);
}

void func_808CDCEC(DemoEffect *this, GlobalContext *globalCtx) {
    ? *sp24;
    ? *temp_a1;

    func_800B8FE8(&this->actor, 0x209DU);
    temp_a1 = &this->unk144;
    sp24 = temp_a1;
    if (func_800F2728(globalCtx, temp_a1) != 0) {
        func_800F26F0(sp24, &D_06000050, 1.0f, 0x42700000, 59.0f, 0.0f);
        this->actionFunc = func_808CDBDC;
        this->unk16C = 0;
    }
}

void func_808CDD70(DemoEffect *this, GlobalContext *globalCtx) {
    Actor_SetScale(&this->actor, this->actor.scale.x - 0.02f);
    this->unk16C += 1;
    if (this->actor.scale.x < 0.02f) {
        Actor_MarkForDeath(&this->actor);
    }
}

void func_808CDDE0(DemoEffect *this, GlobalContext *globalCtx) {
    Actor_SetScale(&this->actor, (this->actor.scale.x * 0.5f) + 0.2f);
    this->unk16C += 1;
    if ((s32) this->unk16C >= 3) {
        this->actionFunc = func_808CDD70;
    }
}

void DemoEffect_Update(Actor *thisx, GlobalContext *globalCtx) {
    DemoEffect *this = (DemoEffect *) thisx;
    this->actionFunc(this, globalCtx);
}

? func_808CDE78(GraphicsContext **arg0, void *arg1, s32 arg2, void *arg3) {
    s32 sp4C;
    GraphicsContext *sp48;
    Gfx *sp38;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    s32 temp_t1;
    void *temp_v0_4;

    temp_t1 = arg0->unk18840;
    temp_a0 = arg0->unk0;
    sp4C = temp_t1;
    sp48 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = sp48->polyXlu.p;
    sp48->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xFA000080;
    temp_v0->words.w1 = 0xAAFFFFFF;
    temp_v0_2 = sp48->polyXlu.p;
    sp48->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFB000000;
    temp_v0_2->words.w1 = (arg3->unk16A << 8) | (arg3->unk168 << 0x18) | (arg3->unk169 << 0x10) | 0xFF;
    temp_v0_3 = sp48->polyXlu.p;
    sp48->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060020;
    sp38 = temp_v0_3;
    sp38->words.w1 = Gfx_TwoTexScroll(arg0->unk0, 0, (temp_t1 * 6) & 0x3FF, 0xFF - ((temp_t1 * 0x10) & 0xFF), 0x100, 0x40, 1, (temp_t1 * 4) & 0x1FF, 0x7F - ((temp_t1 * 0xC) & 0x7F), 0x80, 0x20);
    if (arg2 == 0) {
        temp_v0_4 = arg1->unk1C;
        temp_v0_4->unk0 = 0x400;
        temp_v0_4->unk2 = 0x400;
        temp_v0_4->unk4 = (s16) temp_v0_4->unk0;
    }
    return 1;
}

void func_808CDFF8(Actor *this, GlobalContext *globalCtx) {
    GraphicsContext *sp2C;
    GraphicsContext *temp_v1;

    temp_v1 = globalCtx->state.gfxCtx;
    sp2C = temp_v1;
    temp_v1->polyXlu.p = Gfx_CallSetupDL(temp_v1->polyXlu.p, 0x19U);
    Matrix_Scale(2.0f, 2.0f, 2.0f, 1);
    func_800F2CD8(this, globalCtx, this + 0x144, func_808CDE78, 0, 1, this);
}

void func_808CE078(Actor *this, GlobalContext *globalCtx) {
    s16 sp46;
    Gfx *sp30;
    Gfx *sp28;
    s32 *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    sp46 = this->unk16C << 0xA;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w1 = -1;
    temp_v0->words.w0 = 0xFA008080;
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFB000000;
    temp_v0_2->words.w1 = (this->unk16A << 8) | (this->unk168 << 0x18) | (this->unk169 << 0x10) | 0xFF;
    SysMatrix_InsertMatrix(&globalCtx->mf_187FC, 1);
    SysMatrix_StatePush();
    SysMatrix_InsertZRotation_s(sp46, 1);
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDA380003;
    sp30 = temp_v0_3;
    sp30->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) &D_04023288;
    temp_v0_4->words.w0 = 0xDE000000;
    sp20 = &D_04023288;
    SysMatrix_StatePop();
    SysMatrix_InsertZRotation_s((s16) ((s32) sp46 * -1), 1);
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xDA380003;
    sp28 = temp_v0_5;
    sp28->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_6 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xDE000000;
    temp_v0_6->words.w1 = (u32) sp20;
    D_801F4E32 = 1;
    D_801F4E38.unk0 = (f32) this->world.pos.x;
    D_801F4E38.unk4 = (f32) this->world.pos.y;
    D_801F4E38.unk8 = (f32) this->world.pos.z;
    D_801F4E44 = this->scale.x * 60.0f;
    D_801F4E48 = this->scale.x * 50.0f;
    D_801F4E4C = (s16) (s32) (this->scale.x * 250.0f);
}

