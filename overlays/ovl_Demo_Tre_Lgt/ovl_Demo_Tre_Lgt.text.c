? func_800F2650(GlobalContext *, ? *, ? *, s32);    /* extern */
? func_800F26C0(GlobalContext *, ? *, DemoTreLgt *, GlobalContext *); /* extern */
? func_800F26F0(?32, void *, s32, f32, f32, ?32, f32); /* extern */
s32 func_800F2728(s32, void *, Actor *);            /* extern */
? func_800F2CD8(DemoTreLgt *, GlobalContext *, ? *, ? (*)(void *, ?, s32, void *), s32, s32, DemoTreLgt *); /* extern */
void func_808E0EE8(DemoTreLgt *arg0);               /* static */
void func_808E0EF4(void *arg0, s32 arg1);           /* static */
void func_808E0F4C(void *arg0, s32 arg1, ?32 arg2, void *); /* static */
void func_808E0FE0(Actor *arg0, s32 arg1);          /* static */
? func_808E12A4(void *arg0, ? arg1, s32 arg2, void *arg3); /* static */
extern ? D_06007D78;
static ? D_808E1490;                                /* unable to generate initializer */
static s32 D_808E14D0 = {0x6006A20, 0x6006E30};
static ? D_808E14D8;                                /* unable to generate initializer */



void DemoTreLgt_Init(Actor *thisx, GlobalContext *globalCtx) {
    DemoTreLgt *this = (DemoTreLgt *) thisx;
    func_800F2650(globalCtx, &this->unk144, &D_06007D78, D_808E14D0);
    this->unk168 = 0xFF;
    this->unk16C = 0xFF;
    this->unk170 = 0;
    if (gSaveContext.playerForm == 0) {
        this->unk174 = 0;
    } else {
        this->unk174 = 1;
    }
    func_808E0EE8(this);
}

void DemoTreLgt_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DemoTreLgt *this = (DemoTreLgt *) thisx;
    func_800F26C0(globalCtx, &this->unk144, this, globalCtx);
}

void func_808E0EE8(DemoTreLgt *arg0) {
    arg0->unk164 = 0;
}

void func_808E0EF4(void *arg0, s32 arg1) {
    void *sp1C;
    void *temp_v1;

    temp_v1 = arg0->unk120;
    if (temp_v1 != 0) {
        sp1C = temp_v1;
        arg0 = arg0;
        if (func_801378B8(temp_v1 + 0x15C, 10.0f) != 0) {
            func_808E0F4C(arg0, arg1, temp_v1->unk174, arg0);
        }
    }
}

void func_808E0F4C(void *arg0, s32 arg1, ?32 arg2) {
    void *sp24;
    s32 temp_v0;
    void *temp_a0;
    void *temp_v1;

    arg0->unk164 = 1;
    temp_v0 = arg0->unk174;
    temp_a0 = arg0 + 0x144;
    temp_v1 = (temp_v0 * 0x10) + &D_808E1490;
    sp24 = temp_a0;
    func_800F26F0(arg2, temp_a0, (&D_808E14D0)[temp_v0], 1.0f, temp_v1->unk8 + temp_v1->unk4, arg2, 1.0f);
    func_800F2728(arg1, sp24);
}

void func_808E0FE0(Actor *arg0, s32 arg1) {
    Vec3f *temp_a0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;
    u8 temp_v0_2;
    void *temp_v0;
    void *phi_v0;

    temp_v0 = (arg0->unk174 * 0x10) + &D_808E1490;
    temp_f0 = arg0->unk15C;
    temp_f2 = temp_v0->unk4;
    phi_v0 = temp_v0;
    if (temp_f0 < temp_f2) {
        arg0->unk168 = 0xFFU;
        phi_v0 = (arg0->unk174 * 0x10) + &D_808E1490;
    } else {
        temp_f12 = temp_v0->unk8;
        if (temp_f0 <= (temp_f12 + temp_f2)) {
            arg0->unk168 = (u32) ((((temp_f2 - temp_f0) / temp_f12) * 255.0f) + 255.0f);
        } else {
            arg0->unk168 = 0U;
            phi_v0 = (arg0->unk174 * 0x10) + &D_808E1490;
        }
    }
    temp_f2_2 = phi_v0->unkC;
    if (temp_f0 < temp_f2_2) {
        arg0->unk16C = 0xFFU;
    } else if (temp_f0 < (temp_f2_2 + 10.0f)) {
        arg0->unk16C = (u32) ((((temp_f2_2 - temp_f0) / 10.0f) * 255.0f) + 255.0f);
    } else {
        arg0->unk16C = 0U;
    }
    if (temp_f0 > 30.0f) {
        temp_v0_2 = arg0->unk170;
        temp_a0 = arg0 + 0xEC;
        if ((temp_v0_2 & 1) == 0) {
            arg0->unk170 = (u8) (temp_v0_2 | 1);
            arg0 = arg0;
            func_8019F1C0(temp_a0, 0x2884U);
        }
    }
    arg0 = arg0;
    if (func_800F2728(arg1, arg0 + 0x144, arg0) != 0) {
        Actor_MarkForDeath(arg0);
    }
}

void DemoTreLgt_Update(Actor *thisx, GlobalContext *globalCtx) {
    DemoTreLgt *this = (DemoTreLgt *) thisx;
    *(&D_808E14D8 + (this->unk164 * 4))();
}

? func_808E12A4(void *arg0, ? arg1, s32 arg2, void *arg3) {
    GraphicsContext *sp4C;
    Gfx *sp44;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_t0;
    s32 temp_v1;

    temp_t0 = arg0->unk0;
    temp_v0 = temp_t0->polyXlu.p;
    temp_t0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    temp_v1 = arg0->unk9C;
    sp4C = temp_t0;
    sp44 = temp_v0;
    sp44->words.w1 = Gfx_TwoTexScroll(arg0->unk0, 0, (temp_v1 * 2) & 0xFF, 0U, 0x40, 0x20, 1, (temp_v1 * -2) & 0xFF, 0U, 0x40, 0x20);
    if (arg2 == 1) {
        temp_v0_2 = temp_t0->polyXlu.p;
        temp_t0->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFA000080;
        temp_v0_2->words.w1 = (arg3->unk168 & 0xFF) | ~0x4BFF;
    } else if ((arg2 == 0xD) || (arg2 == 7) || (arg2 == 4) || (arg2 == 0xA)) {
        temp_v0_3 = temp_t0->polyXlu.p;
        temp_t0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFA000080;
        temp_v0_3->words.w1 = (arg3->unk16C & 0xFF) | ~0x4BFF;
    }
    return 1;
}

void DemoTreLgt_Draw(Actor *thisx, GlobalContext *globalCtx) {
    DemoTreLgt *this = (DemoTreLgt *) thisx;
    GraphicsContext *sp2C;
    Gfx *temp_v1;
    GraphicsContext *temp_a2;

    temp_a2 = globalCtx->state.gfxCtx;
    if (this->unk164 == 1) {
        sp2C = temp_a2;
        func_8012C2DC(temp_a2);
        temp_v1 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = temp_v1 + 8;
        temp_v1->words.w1 = 0xC8FF0000;
        temp_v1->words.w0 = 0xFB000000;
        func_800F2CD8(this, globalCtx, &this->unk144, func_808E12A4, 0, 1, this);
    }
}

