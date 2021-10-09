typedef struct ObjEntotu {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char pad_144[0x4];
    /* 0x148 */ ? unk_148;                          /* inferred */
    /* 0x148 */ char pad_148[0x7C];
    /* 0x1C4 */ s8 unk_1C4;                         /* inferred */
    /* 0x1C5 */ char pad_1C5[0x1];
    /* 0x1C6 */ s16 unk_1C6;                        /* inferred */
} ObjEntotu;                                        /* size = 0x1C8 */

struct _mips2c_stack_ObjEntotu_Destroy {};          /* size 0x0 */

struct _mips2c_stack_ObjEntotu_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjEntotu_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjEntotu_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A34700 {};              /* size 0x0 */

struct _mips2c_stack_func_80A349C0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A34A44 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A34B28 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad_48[0xE];                    /* maybe part of sp44[4]? */
    /* 0x56 */ u8 sp56;                             /* inferred */
    /* 0x57 */ u8 sp57;                             /* inferred */
};                                                  /* size = 0x58 */

s32 func_80A34700(s16 arg0);                        /* static */
void func_80A349C0(void *arg0);                     /* static */
void func_80A34A44(ObjEntotu *arg0, GlobalContext *arg1); /* static */
void func_80A34B28(ObjEntotu *arg0, GlobalContext *arg1); /* static */
extern ? D_06000158;
extern ? D_06001C00;
static void D_80A35410;                             /* unable to generate initializer */
static u8 D_80A3541F[16] = {0, 0, 0, 8, 0xD5, 2, 0x5B, 0, 0, 2, 0, 3, 0xCC, 0x4D, 0x44, 0x34};
static u8 D_80A3542F[16] = {0xFF, 0, 0, 0x1B, 0xAC, 1, 0x2D, 0, 0, 2, 0, 0xE9, 0xD0, 0, 0, 0};
static u8 D_80A3543F[65] = {
    0,
    0xFB,
    0xAD,
    8,
    0xD5,
    0,
    0,
    0,
    0,
    0,
    0,
    4,
    0,
    0,
    0,
    0,
    0,
    5,
    0x81,
    0x14,
    5,
    1,
    0x2D,
    0,
    0,
    4,
    0x8B,
    0xF4,
    0x69,
    0,
    0,
    0,
    0,
    4,
    0x53,
    8,
    0xD5,
    0,
    0,
    0,
    0,
    4,
    0,
    4,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    2,
    0,
    0x10,
    0x3A,
    0x26,
    0x21,
    0x19,
    0x7E,
};

s32 func_80A34700(s16 arg0) {
    f32 temp_f6;
    s32 temp_f18;
    s32 temp_lo;
    u16 temp_t6;
    f32 phi_f6;
    s32 phi_v1;

    temp_t6 = gSaveContext.time;
    temp_f6 = (f32) temp_t6;
    phi_f6 = temp_f6;
    phi_v1 = 0;
    if ((s32) temp_t6 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_f18 = (s32) (phi_f6 * 0.021972656f);
    temp_lo = (s32) (s16) temp_f18 / 0x3C;
    if (temp_lo >= 0x10) {
        if ((temp_lo == 0x10) && (((s32) (s16) temp_f18 % 0x3C) < (s32) arg0)) {
            return 0;
        }
        if (temp_lo >= 0x14) {
            return 0;
        }
        if ((temp_lo == 0x13) && ((s32) arg0 < ((s32) (s16) temp_f18 % 0x3C))) {
            return 0;
        }
        phi_v1 = 3;
        /* Duplicate return node #31. Try simplifying control flow for better match */
        return phi_v1;
    }
    if (temp_lo >= 0xB) {
        if ((temp_lo == 0xB) && (((s32) (s16) temp_f18 % 0x3C) < (s32) arg0)) {
            return 0;
        }
        if (temp_lo >= 0xE) {
            return 0;
        }
        if ((temp_lo == 0xD) && ((s32) arg0 < ((s32) (s16) temp_f18 % 0x3C))) {
            return 0;
        }
        phi_v1 = 2;
        /* Duplicate return node #31. Try simplifying control flow for better match */
        return phi_v1;
    }
    if (temp_lo >= 6) {
        if ((temp_lo == 6) && (((s32) (s16) temp_f18 % 0x3C) < (s32) arg0)) {
            return 0;
        }
        if (temp_lo >= 9) {
            return 0;
        }
        phi_v1 = 1;
        if ((temp_lo == 8) && ((s32) arg0 < ((s32) (s16) temp_f18 % 0x3C))) {
            return 0;
        }
        /* Duplicate return node #31. Try simplifying control flow for better match */
        return phi_v1;
    }
    return phi_v1;
}

void func_80A349C0(void *arg0) {
    s32 temp_v0;
    f32 phi_f0;

    temp_v0 = func_80A34700(arg0->unk_1C6);
    if (arg0->unk_1C4 != temp_v0) {
        arg0->unk_1C4 = (u8) (temp_v0 & 0xFF);
        arg0->unk_1C6 = Rand_S16Offset(0, 0x3B);
    }
    if (arg0->unk_1C4 == 0) {
        phi_f0 = 0.0f;
    } else {
        phi_f0 = 1.0f;
    }
    Math_ApproachF(arg0 + 0x1B8, phi_f0, 0.02f, 1000.0f);
}

void func_80A34A44(ObjEntotu *arg0, GlobalContext *arg1) {
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, 0);
    arg0->actor.shape.rot.y = func_800DFCDC((arg1 + (arg1->activeCamera * 4))->unk_800) + 0x8000;
    Matrix_RotateY(arg0->actor.shape.rot.y, 1U);
    Matrix_Scale(0.1f, 0.1f, 0.0f, 1);
    temp_a0 = arg1->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_v0;
    sp24->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06000158;
    temp_v0_2->words.w0 = 0xDE000000;
}

void func_80A34B28(ObjEntotu *arg0, GlobalContext *arg1) {
    u8 sp57;
    u8 sp56;
    Gfx *sp44;
    Gfx *sp40;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0_2;
    GraphicsContext *temp_s1;
    f32 temp_f0;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f6_4;
    s32 temp_a0;
    u8 temp_t0;
    u8 temp_t3;
    u8 temp_t4;
    u8 temp_t7;
    void *temp_v0;
    void *temp_v1;
    f32 phi_f2;
    f32 phi_f6;
    f32 phi_f6_2;
    f32 phi_f6_3;
    f32 phi_f6_4;

    arg0->unk_1BC += 1.8f;
    temp_a0 = 3 * 0x10;
    arg0->unk_1C0 += 0.6f;
    sp57 = 0x7F - (u32) arg0->unk_1BC;
    sp56 = 0x7F - (u32) arg0->unk_1C0;
    temp_f0 = arg0->unk_1B8;
    temp_v1 = temp_a0 + &D_80A35410;
    if (temp_f0 < 0.0f) {
        arg0->unk_1B8 = 0.0f;
    } else {
        if (temp_f0 > 1.0f) {
            phi_f2 = 1.0f;
        } else {
            phi_f2 = temp_f0;
        }
        arg0->unk_1B8 = phi_f2;
    }
    arg0->unk_157 = (s8) (u32) ((f32) *D_80A3541F * arg0->unk_1B8);
    arg0->unk_167 = (s8) (u32) ((f32) *D_80A3542F * arg0->unk_1B8);
    arg0->unk_177 = (s8) (u32) ((f32) *D_80A3543F * arg0->unk_1B8);
    temp_t4 = temp_v1->unk_F;
    temp_v0 = arg0 + temp_a0;
    temp_f6 = (f32) temp_t4;
    phi_f6 = temp_f6;
    if ((s32) temp_t4 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_v0->unk_157 = (s8) (u32) (phi_f6 * arg0->unk_1B8);
    temp_t7 = temp_v1->unk_1F;
    temp_f6_2 = (f32) temp_t7;
    phi_f6_2 = temp_f6_2;
    if ((s32) temp_t7 < 0) {
        phi_f6_2 = temp_f6_2 + 4294967296.0f;
    }
    temp_v0->unk_167 = (s8) (u32) (phi_f6_2 * arg0->unk_1B8);
    temp_t0 = temp_v1->unk_2F;
    temp_f6_3 = (f32) temp_t0;
    phi_f6_3 = temp_f6_3;
    if ((s32) temp_t0 < 0) {
        phi_f6_3 = temp_f6_3 + 4294967296.0f;
    }
    temp_v0->unk_177 = (s8) (u32) (phi_f6_3 * arg0->unk_1B8);
    temp_t3 = temp_v1->unk_3F;
    temp_f6_4 = (f32) temp_t3;
    phi_f6_4 = temp_f6_4;
    if ((s32) temp_t3 < 0) {
        phi_f6_4 = temp_f6_4 + 4294967296.0f;
    }
    temp_v0->unk_187 = (s8) (u32) (phi_f6_4 * arg0->unk_1B8);
    if (arg0->unk_1B8 > 0.0f) {
        SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, 0);
        arg0->actor.shape.rot.y = func_800DFCDC((arg1 + (arg1->activeCamera * 4))->unk_800) + 0x8000;
        Matrix_RotateY(arg0->actor.shape.rot.y, 1U);
        Matrix_Scale(0.1f, 0.1f, 0.0f, 1);
        temp_a0_2 = arg1->state.gfxCtx;
        temp_s1 = temp_a0_2;
        func_8012C28C(temp_a0_2);
        temp_v0_2 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDB060020;
        sp44 = temp_v0_2;
        sp44->words.w1 = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, 0U, (u32) sp57, 0x20, 0x20, 1, 0U, (u32) sp56, 0x20, 0x20);
        temp_v0_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDB060024;
        sp40 = temp_v0_3;
        sp40->words.w1 = Lib_SegmentedToVirtual(arg0 + 0x148);
        temp_v0_4 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDA380003;
        temp_v0_4->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_5 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDE000000;
        temp_v0_5->words.w1 = (u32) &D_06001C00;
    }
}

void ObjEntotu_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjEntotu *this = (ObjEntotu *) thisx;
    Lib_MemCpy((void *) &this->unk_148, &D_80A35410, 0x70U);
    this->unk_1C6 = Rand_S16Offset(0, 0x3B);
    this->unk_1C4 = 0;
}

void ObjEntotu_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjEntotu *this = (ObjEntotu *) thisx;

}

void ObjEntotu_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjEntotu *this = (ObjEntotu *) thisx;
    func_80A349C0();
}

void ObjEntotu_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjEntotu *this = (ObjEntotu *) thisx;
    func_80A34B28(this, globalCtx);
    func_80A34A44(this, globalCtx);
}
