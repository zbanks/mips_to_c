typedef struct OceffStorm {
    /* 0x000 */ Actor actor;
    /* 0x144 */ u16 unk144;                         /* inferred */
    /* 0x146 */ u8 unk146;                          /* inferred */
    /* 0x147 */ u8 unk147;                          /* inferred */
    /* 0x148 */ s16 unk148;                         /* inferred */
    /* 0x14A */ s16 unk14A;                         /* inferred */
    /* 0x14C */ void (*actionFunc)(OceffStorm *, GlobalContext *);
} OceffStorm;                                       /* size = 0x150 */

struct _mips2c_stack_OceffStorm_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_OceffStorm_Draw {
    /* 0x00 */ char pad0[0x40];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad44[0x4];
    /* 0x48 */ Gfx *sp48;                           /* inferred */
    /* 0x4C */ char pad4C[0x20];                    /* maybe part of sp48[9]? */
    /* 0x6C */ s32 sp6C;                            /* inferred */
};                                                  /* size = 0x70 */

struct _mips2c_stack_OceffStorm_Init {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ Actor *sp3C;                         /* inferred */
    /* 0x40 */ char pad40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_OceffStorm_SetupAction {};     /* size 0x0 */

struct _mips2c_stack_OceffStorm_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8098176C {};              /* size 0x0 */

struct _mips2c_stack_func_80981928 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80981B48 {};              /* size 0x0 */

struct _mips2c_stack_func_80981BB8 {
    /* 0x00 */ char pad0[0x38];
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad3C[0x18];                    /* maybe part of sp38[7]? */
    /* 0x54 */ GraphicsContext *sp54;               /* inferred */
    /* 0x58 */ char pad58[0x4];
    /* 0x5C */ s32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

? func_80115D5C(GlobalContext *);                   /* extern */
s32 func_8098176C(GlobalContext *arg0);             /* static */
void func_80981BB8(Actor *this, GlobalContext *globalCtx); /* static */
static ? D_80982F90;                                /* unable to generate initializer */
static s8 D_80983047[95] = {
    0x7E,
    0xFF,
    0xDD,
    1,
    0xF4,
    0xFF,
    0xDD,
    0,
    0,
    7,
    0,
    0,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0,
    0,
    1,
    0xF4,
    0xFF,
    0xCE,
    0,
    0,
    6,
    0,
    0,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0,
    0x23,
    0,
    0,
    0xFF,
    0xDD,
    0,
    0,
    5,
    0,
    4,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0,
    0x32,
    0,
    0x96,
    0,
    0,
    0,
    0,
    4,
    0,
    2,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0,
    0x32,
    0,
    0,
    0,
    0,
    0,
    0,
    4,
    0,
    4,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0,
    0x23,
    0,
    0x96,
    0xFF,
    0xDD,
    0,
    0,
    5,
    0,
    2,
    0,
    0xFF,
    0xFF,
};
static s8 D_809830A7[63] = {
    0x7E,
    0,
    0x23,
    1,
    0xF4,
    0xFF,
    0xDD,
    0,
    0,
    5,
    0,
    0,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0,
    0x32,
    1,
    0xF4,
    0,
    0,
    0,
    0,
    4,
    0,
    0,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0,
    0,
    0,
    0,
    0xFF,
    0xCE,
    0,
    0,
    6,
    0,
    4,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0,
    0,
    0,
    0x96,
    0xFF,
    0xCE,
    0,
    0,
    6,
    0,
    2,
    0,
    0xFF,
    0xFF,
};
static u8 D_809830E7[95] = {
    0xFF,
    0xFF,
    0xDD,
    0,
    0,
    0xFF,
    0xDD,
    0,
    0,
    7,
    0,
    4,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0xFF,
    0xCE,
    0,
    0,
    0,
    0,
    0,
    0,
    8,
    0,
    4,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0xFF,
    0xCE,
    0,
    0x96,
    0,
    0,
    0,
    0,
    8,
    0,
    2,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0xFF,
    0xCE,
    1,
    0xF4,
    0,
    0,
    0,
    0,
    8,
    0,
    0,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0xFF,
    0xDD,
    0,
    0,
    0,
    0x23,
    0,
    0,
    1,
    0,
    4,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0xFF,
    0xDD,
    0,
    0x96,
    0,
    0x23,
    0,
    0,
    1,
    0,
    2,
    0,
    0xFF,
    0xFF,
};
static s8 D_80983147[95] = {
    0x7E,
    0xFF,
    0xCE,
    0,
    0x96,
    0,
    0,
    0,
    0,
    0,
    0,
    2,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0xFF,
    0xCE,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    4,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0xFF,
    0xDD,
    1,
    0xF4,
    0,
    0x23,
    0,
    0,
    1,
    0,
    0,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0xFF,
    0xCE,
    1,
    0xF4,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0,
    0,
    0,
    0,
    0,
    0x32,
    0,
    0,
    2,
    0,
    4,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0,
    0,
    0,
    0x96,
    0,
    0x32,
    0,
    0,
    2,
    0,
    2,
    0,
    0xFF,
    0xFF,
};
static u8 D_809831A7[47] = {
    0xFF,
    0,
    0,
    1,
    0xF4,
    0,
    0x32,
    0,
    0,
    2,
    0,
    0,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0,
    0x23,
    0,
    0,
    0,
    0x23,
    0,
    0,
    3,
    0,
    4,
    0,
    0xFF,
    0xFF,
    0xFF,
    0,
    0,
    0x23,
    0,
    0x96,
    0,
    0x23,
    0,
    0,
    3,
    0,
    2,
    0,
    0xFF,
    0xFF,
};
static s8 D_809831D7[17] = {0x7E, 0, 0x23, 1, 0xF4, 0, 0x23, 0, 0, 3, 0, 0, 0, 0xFF, 0xFF, 0xFF, 0};
static ? D_809831E8;                                /* unable to generate initializer */
static ? D_80983290;                                /* unable to generate initializer */

void OceffStorm_SetupAction(OceffStorm *this, void (*actionFunc)(OceffStorm *, GlobalContext *)) {
    this->actionFunc = actionFunc;
}

s32 func_8098176C(GlobalContext *arg0) {
    s16 temp_v0;
    s32 phi_v1;

    temp_v0 = arg0->sceneNum;
    phi_v1 = 0;
    if ((s32) temp_v0 >= 0x1D) {
        switch (temp_v0) {
        case 90:
            if (gSaveContext.sceneSetupIndex == 1) {
                goto block_7;
            }
            break;
        }
    } else if (temp_v0 == 0x1C) {
    case 77:
    case 80:
    case 91:
    case 92:
    case 93:
    case 107:
        if (gSaveContext.sceneSetupIndex == 0) {
block_7:
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

void OceffStorm_Init(OceffStorm *this, GlobalContext *globalCtx) {
    Actor *sp3C;
    Actor *temp_v0;
    OceffStorm *this = (OceffStorm *) thisx;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    sp3C = temp_v0;
    OceffStorm_SetupAction(this, func_80981928);
    this->unk14A = 0;
    this->unk144 = 0;
    this->unk146 = 0;
    this->unk147 = 0;
    this->actor.scale.y = 0.0f;
    this->actor.scale.z = 0.0f;
    this->actor.scale.x = 0.0f;
    this->unk148 = this->unk14A;
    if (this->actor.params == 1) {
        OceffStorm_SetupAction(this, func_80981B48);
        this->actor.draw = func_80981BB8;
        return;
    }
    this->actor.world.pos.y = temp_v0->world.pos.y;
    this->actor.world.pos.x = temp_v0->unkBEC;
    this->actor.world.pos.z = temp_v0->unkBF4;
    gSaveContext.unk_1016 = 0;
    if ((globalCtx->interfaceCtx.restrictions.songOfStorms == 0) && (func_8098176C(globalCtx) == 0)) {
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xC4, this->actor.world.pos.x, this->actor.world.pos.y - 30.0f, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 1);
    }
}

void OceffStorm_Destroy(OceffStorm *this, GlobalContext *globalCtx) {
    OceffStorm *this = (OceffStorm *) thisx;
    func_80115D5C(globalCtx);
}

void func_80981928(OceffStorm *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f6;
    s16 temp_a1;
    s16 temp_v1;
    u16 temp_a2;
    u16 temp_a2_2;
    u16 temp_a2_3;
    u16 temp_a2_4;
    u16 temp_a2_5;
    u8 temp_v0;
    u8 temp_v0_2;
    f32 phi_f6;
    f32 phi_f2;
    s32 phi_v0;
    s32 phi_v0_2;
    u16 phi_a2;

    temp_v0 = gSaveContext.playerForm;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                phi_f2 = 1.0f;
            } else {
                phi_f2 = 1.3f;
            }
        } else {
            phi_f2 = 1.2f;
        }
    } else {
        phi_f2 = 2.0f;
    }
    temp_a2 = this->unk144;
    if ((s32) temp_a2 < 0xA) {
        temp_f6 = (f32) temp_a2;
        phi_f6 = temp_f6;
        if ((s32) temp_a2 < 0) {
            phi_f6 = temp_f6 + 4294967296.0f;
        }
        this->unk146 = (u8) (s32) (phi_f6 * 10.0f);
    } else if ((s32) temp_a2 >= 0x3D) {
        this->unk146 = (u8) (s32) ((f32) (0x46 - temp_a2) * 10.0f);
    } else {
        this->unk146 = 0x64;
    }
    phi_v0 = (s32) this->unk144;
    phi_a2 = this->unk144;
    if (((s32) this->unk144 < 0xA) || ((s32) this->unk144 >= 0x3C)) {
        temp_a2_4 = this->unk144;
        this->unk147 = 0;
        phi_v0 = (s32) temp_a2_4;
        phi_a2 = temp_a2_4;
    } else if ((s32) this->unk144 < 0x29) {
        temp_v0_2 = this->unk147;
        if ((s32) temp_v0_2 < 0xC9) {
            this->unk147 = temp_v0_2 + 0xA;
        }
        temp_a2_2 = this->unk144;
        temp_f0 = 0.4f * phi_f2;
        this->actor.scale.z = temp_f0;
        this->actor.scale.x = temp_f0;
        this->actor.scale.y = 0.3f;
        phi_v0 = (s32) temp_a2_2;
        phi_a2 = temp_a2_2;
    } else if ((s32) this->unk144 >= 0x29) {
        this->unk147 = ((s32) this->unk144 * -0xA) + 0x258;
    } else {
        temp_a2_3 = this->unk144;
        temp_f0_2 = 0.4f * phi_f2;
        this->unk147 = 0xFF;
        this->actor.scale.z = temp_f0_2;
        this->actor.scale.x = temp_f0_2;
        phi_v0 = (s32) temp_a2_3;
        phi_a2 = temp_a2_3;
    }
    phi_v0_2 = phi_v0;
    if (phi_v0 >= 0x29) {
        temp_v1 = this->unk148;
        temp_a1 = this->unk14A;
        temp_f10 = (f32) temp_v1;
        temp_a2_5 = this->unk144;
        this->unk148 = temp_v1 + temp_a1;
        this->unk14A = temp_a1 + 0xA;
        this->actor.world.pos.y += temp_f10 * 0.01f;
        phi_v0_2 = (s32) temp_a2_5;
        phi_a2 = temp_a2_5;
    }
    if (phi_v0_2 < 0x46) {
        this->unk144 = phi_a2 + 1;
        return;
    }
    Actor_MarkForDeath((Actor *) this);
}

void func_80981B48(OceffStorm *this, GlobalContext *globalCtx) {
    u8 temp_v0;

    temp_v0 = this->unk146;
    if ((s32) temp_v0 < 0x64) {
        this->unk146 = temp_v0 + 5;
    }
}

void OceffStorm_Update(OceffStorm *this, GlobalContext *globalCtx) {
    OceffStorm *this = (OceffStorm *) thisx;
    this = this;
    this->actor.shape.rot.y = func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]);
    this->actionFunc(this, globalCtx);
}

void func_80981BB8(Actor *this, GlobalContext *globalCtx) {
    s32 sp5C;
    GraphicsContext *sp54;
    Gfx *sp38;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_v1;
    s32 temp_t1;
    u32 temp_a3;

    temp_t1 = globalCtx->state.frames & 0xFFF;
    temp_v1 = globalCtx->state.gfxCtx;
    temp_v0 = temp_v1->polyXlu.p;
    temp_v1->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    sp5C = temp_t1;
    sp54 = temp_v1;
    temp_v1->polyXlu.p = func_8012C3A4(temp_v1->polyXlu.p);
    temp_v0_2 = temp_v1->polyXlu.p;
    temp_v1->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0x20;
    temp_v0_2->words.w0 = 0xE3001A01;
    temp_v0_3 = temp_v1->polyXlu.p;
    temp_v1->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0x80;
    temp_v0_3->words.w0 = 0xE3001801;
    temp_v0_4 = temp_v1->polyXlu.p;
    temp_v1->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xFA008080;
    temp_v0_4->words.w1 = this->unk146 | 0xC8C89600;
    temp_v0_5 = temp_v1->polyXlu.p;
    temp_v1->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) &D_80982F90;
    temp_v0_5->words.w0 = 0xDE000000;
    temp_v0_6 = temp_v1->polyXlu.p;
    temp_a3 = temp_t1 * 4;
    temp_v1->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xDE000000;
    sp54 = temp_v1;
    sp38 = temp_v0_6;
    sp38->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, temp_t1 * 8, temp_a3, 0x40, 0x40, 1, temp_a3, temp_a3, 0x40, 0x40);
    temp_v0_7 = temp_v1->polyXlu.p;
    temp_v1->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = 0;
    temp_v0_7->words.w0 = 0xE45003C0;
    temp_v0_8 = temp_v1->polyXlu.p;
    temp_v1->polyXlu.p = temp_v0_8 + 8;
    temp_v0_8->words.w1 = 0;
    temp_v0_8->words.w0 = 0xE1000000;
    temp_v0_9 = temp_v1->polyXlu.p;
    temp_v1->polyXlu.p = temp_v0_9 + 8;
    temp_v0_9->words.w1 = 0x8CFF74;
    temp_v0_9->words.w0 = 0xF1000000;
}

void OceffStorm_Draw(OceffStorm *this, GlobalContext *globalCtx) {
    s32 sp6C;
    Gfx *sp48;
    Gfx *sp40;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s32 temp_t1;
    s32 temp_v0_5;
    u8 temp_v1;
    OceffStorm *this = (OceffStorm *) thisx;

    temp_t1 = globalCtx->state.frames & 0xFFF;
    temp_a0 = globalCtx->state.gfxCtx;
    sp6C = temp_t1;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w1 = -0x3701;
    temp_v0->words.w0 = 0xFA008080;
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFB000000;
    temp_v0_2->words.w1 = 0x96960080;
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0x20;
    temp_v0_3->words.w0 = 0xE3001A01;
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = 0x80;
    temp_v0_4->words.w0 = 0xE3001801;
    temp_v0_5 = (s32) this->unk147 >> 1;
    *D_809831D7 = (s8) temp_v0_5;
    *D_80983147 = (s8) temp_v0_5;
    *D_809830A7 = (s8) temp_v0_5;
    *D_80983047 = (s8) temp_v0_5;
    temp_v1 = this->unk147;
    *D_809831A7 = temp_v1;
    *D_809830E7 = temp_v1;
    temp_v0_6 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xDA380003;
    sp6C = temp_t1;
    sp48 = temp_v0_6;
    sp48->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_7 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w1 = (u32) &D_809831E8;
    temp_v0_7->words.w0 = 0xDE000000;
    temp_v0_8 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_8 + 8;
    temp_v0_8->words.w0 = 0xDE000000;
    sp40 = temp_v0_8;
    sp40->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, temp_t1 * 4, temp_t1 * -8, 0x20, 0x20, 1, temp_t1 * 8, temp_t1 * -0xC, 0x20, 0x20);
    temp_v0_9 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_9 + 8;
    temp_v0_9->words.w1 = (u32) &D_80983290;
    temp_v0_9->words.w0 = 0xDE000000;
    func_80981BB8((Actor *) this, globalCtx);
}
