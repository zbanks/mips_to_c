typedef struct DemoTreLgt {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ? unk_144;                          /* inferred */
    /* 0x144 */ char pad_144[0x20];
    /* 0x164 */ s32 unk_164;                        /* inferred */
    /* 0x168 */ s32 unk_168;                        /* inferred */
    /* 0x16C */ s32 unk_16C;                        /* inferred */
    /* 0x170 */ s8 unk_170;                         /* inferred */
    /* 0x171 */ char pad_171[0x3];                  /* maybe part of unk_170[4]? */
    /* 0x174 */ s32 unk_174;                        /* inferred */
} DemoTreLgt;                                       /* size = 0x178 */

struct _mips2c_stack_DemoTreLgt_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_DemoTreLgt_Draw {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ GraphicsContext *sp2C;               /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_DemoTreLgt_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_DemoTreLgt_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808E0EE8 {};              /* size 0x0 */

struct _mips2c_stack_func_808E0EF4 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808E0F4C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808E0FE0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808E12A4 {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ GraphicsContext *sp4C;               /* inferred */
    /* 0x50 */ char pad_50[0x8];
};                                                  /* size = 0x58 */

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
static s32 D_808E14D0[2] = {0x6006A20, 0x6006E30};
static ? D_808E14D8;                                /* unable to generate initializer */

void DemoTreLgt_Init(Actor *thisx, GlobalContext *globalCtx) {
    DemoTreLgt *this = (DemoTreLgt *) thisx;
    func_800F2650(globalCtx, &this->unk_144, &D_06007D78, *D_808E14D0);
    this->unk_168 = 0xFF;
    this->unk_16C = 0xFF;
    this->unk_170 = 0;
    if (gSaveContext.playerForm == 0) {
        this->unk_174 = 0;
    } else {
        this->unk_174 = 1;
    }
    func_808E0EE8(this);
}

void DemoTreLgt_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DemoTreLgt *this = (DemoTreLgt *) thisx;
    func_800F26C0(globalCtx, &this->unk_144, this, globalCtx);
}

void func_808E0EE8(DemoTreLgt *arg0) {
    arg0->unk_164 = 0;
}

void func_808E0EF4(void *arg0, s32 arg1) {
    void *sp1C;
    void *temp_v1;

    temp_v1 = arg0->unk_120;
    if (temp_v1 != 0) {
        sp1C = temp_v1;
        arg0 = arg0;
        if (func_801378B8(temp_v1 + 0x15C, 10.0f) != 0) {
            func_808E0F4C(arg0, arg1, temp_v1->unk_174, arg0);
        }
    }
}

void func_808E0F4C(void *arg0, s32 arg1, ?32 arg2) {
    void *sp24;
    s32 temp_v0;
    void *temp_a0;
    void *temp_v1;

    arg0->unk_164 = 1;
    temp_v0 = arg0->unk_174;
    temp_a0 = arg0 + 0x144;
    temp_v1 = (temp_v0 * 0x10) + &D_808E1490;
    sp24 = temp_a0;
    func_800F26F0(arg2, temp_a0, D_808E14D0[temp_v0], 1.0f, temp_v1->unk_8 + temp_v1->unk_4, arg2, 1.0f);
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

    temp_v0 = (arg0->unk_174 * 0x10) + &D_808E1490;
    temp_f0 = arg0->unk_15C;
    temp_f2 = temp_v0->unk_4;
    phi_v0 = temp_v0;
    if (temp_f0 < temp_f2) {
        arg0[1].world.pos.x = 0xFF;
        phi_v0 = (arg0->unk_174 * 0x10) + &D_808E1490;
    } else {
        temp_f12 = temp_v0->unk_8;
        if (temp_f0 <= (temp_f12 + temp_f2)) {
            arg0[1].world.pos.x = (u32) ((((temp_f2 - temp_f0) / temp_f12) * 255.0f) + 255.0f);
        } else {
            arg0[1].world.pos.x = 0;
            phi_v0 = (arg0->unk_174 * 0x10) + &D_808E1490;
        }
    }
    temp_f2_2 = phi_v0->unk_C;
    if (temp_f0 < temp_f2_2) {
        arg0[1].world.pos.y = 0xFF;
    } else if (temp_f0 < (temp_f2_2 + 10.0f)) {
        arg0[1].world.pos.y = (u32) ((((temp_f2_2 - temp_f0) / 10.0f) * 255.0f) + 255.0f);
    } else {
        arg0[1].world.pos.y = 0;
    }
    if (temp_f0 > 30.0f) {
        temp_v0_2 = arg0->unk_170;
        temp_a0 = arg0 + 0xEC;
        if ((temp_v0_2 & 1) == 0) {
            arg0->unk_170 = (u8) (temp_v0_2 | 1);
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
    *(&D_808E14D8 + (this->unk_164 * 4))();
}

? func_808E12A4(void *arg0, ? arg1, s32 arg2, void *arg3) {
    GraphicsContext *sp4C;
    Gfx *sp44;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_t0;
    s32 temp_v1;

    temp_t0 = arg0->unk_0;
    temp_v0 = temp_t0->polyXlu.p;
    temp_t0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    temp_v1 = arg0->unk_9C;
    sp4C = temp_t0;
    sp44 = temp_v0;
    sp44->words.w1 = Gfx_TwoTexScroll(arg0->unk_0, 0, (temp_v1 * 2) & 0xFF, 0U, 0x40, 0x20, 1, (temp_v1 * -2) & 0xFF, 0U, 0x40, 0x20);
    if (arg2 == 1) {
        temp_v0_2 = temp_t0->polyXlu.p;
        temp_t0->polyXlu.p = &temp_v0_2[1];
        temp_v0_2->words.w0 = 0xFA000080;
        temp_v0_2->words.w1 = (arg3->unk_168 & 0xFF) | ~0x4BFF;
    } else if ((arg2 == 0xD) || (arg2 == 7) || (arg2 == 4) || (arg2 == 0xA)) {
        temp_v0_3 = temp_t0->polyXlu.p;
        temp_t0->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xFA000080;
        temp_v0_3->words.w1 = (arg3->unk_16C & 0xFF) | ~0x4BFF;
    }
    return 1;
}

void DemoTreLgt_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp2C;
    Gfx *temp_v1;
    GraphicsContext *temp_a2;
    DemoTreLgt *this = (DemoTreLgt *) thisx;

    temp_a2 = globalCtx->state.gfxCtx;
    if (this->unk_164 == 1) {
        sp2C = temp_a2;
        func_8012C2DC(temp_a2);
        temp_v1 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = &temp_v1[1];
        temp_v1->words.w1 = 0xC8FF0000;
        temp_v1->words.w0 = 0xFB000000;
        func_800F2CD8(this, globalCtx, &this->unk_144, func_808E12A4, 0, 1, this);
    }
}
