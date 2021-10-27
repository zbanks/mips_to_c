typedef struct ObjToudai {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char pad_144[0x4];
    /* 0x148 */ ? unk_148;                          /* inferred */
    /* 0x148 */ char pad_148[0xE0];
    /* 0x228 */ f32 unk_228;                        /* inferred */
    /* 0x22C */ char pad_22C[0x8];                  /* maybe part of unk_228[3]? */
    /* 0x234 */ s16 unk_234;                        /* inferred */
    /* 0x236 */ u8 unk_236;                         /* inferred */
    /* 0x237 */ char pad_237[0x1];
    /* 0x238 */ s16 unk_238;                        /* inferred */
    /* 0x23A */ char pad_23A[0x6];                  /* maybe part of unk_238[4]? */
} ObjToudai;                                        /* size = 0x240 */

struct _mips2c_stack_ObjToudai_Destroy {};          /* size 0x0 */

struct _mips2c_stack_ObjToudai_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjToudai_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjToudai_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A33B00 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A33BB4 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad_48[0xE];                    /* maybe part of sp44[4]? */
    /* 0x56 */ u8 sp56;                             /* inferred */
    /* 0x57 */ u8 sp57;                             /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80A342F4 {};              /* size 0x0 */

void func_80A33B00(ObjToudai *arg0, GraphicsContext **arg1); /* static */
void func_80A33BB4(ObjToudai *arg0, GraphicsContext **arg1); /* static */
s32 func_80A342F4(s16 arg0);                        /* static */
extern ? D_060023B0;
extern ? D_060024E8;
static void D_80A34590;                             /* unable to generate initializer */
static u8 D_80A3459F[16] = {0xFF, 0xFD, 0x4B, 3, 0x20, 1, 0xB1, 0, 0, 8, 0, 5, 0x55, 0xF5, 0xFE, 0xD3};
static u8 D_80A345AF = 0xFF;
static ? D_80A345B0;                                /* unable to generate initializer */

void func_80A33B00(ObjToudai *arg0, GraphicsContext **arg1) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, 0);
    Matrix_Scale(0.1f, 0.1f, 0.1f, 1);
    temp_a0 = *arg1;
    sp24 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp24->polyOpa.p;
    sp24->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp24 = sp24;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_2 = sp24->polyOpa.p;
    sp24->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = (u32) &D_060024E8;
    temp_v0_2->words.w0 = 0xDE000000;
}

void func_80A33BB4(ObjToudai *arg0, GraphicsContext **arg1) {
    u8 sp57;
    u8 sp56;
    Gfx *sp44;
    Gfx *sp40;
    ? *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    f32 temp_f0;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f18_3;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    u8 temp_t0;
    u8 temp_t2;
    u8 temp_t3;
    u8 temp_t5;
    u8 temp_t6;
    u8 temp_t9;
    f32 phi_f2;
    f32 phi_f18;
    f32 phi_f4;
    ? *phi_v0;
    f32 phi_f18_2;
    void *phi_v1;
    f32 phi_f4_2;
    f32 phi_f18_3;
    f32 phi_f4_3;

    arg0->unk_22C += 1.8f;
    arg0->unk_230 += 0.6f;
    sp57 = (u8) (u32) arg0->unk_22C;
    sp56 = (u8) (u32) arg0->unk_230;
    temp_f0 = arg0->unk_228;
    phi_v0 = &D_80A345B0;
    phi_v1 = arg0 + 0x20;
    if (temp_f0 < 0.0f) {
        arg0->unk_228 = 0.0f;
    } else {
        if (temp_f0 > 1.0f) {
            phi_f2 = 1.0f;
        } else {
            phi_f2 = temp_f0;
        }
        arg0->unk_228 = phi_f2;
    }
    temp_t0 = *D_80A3459F;
    temp_f18 = (f32) temp_t0;
    phi_f18 = temp_f18;
    if ((s32) temp_t0 < 0) {
        phi_f18 = temp_f18 + 4294967296.0f;
    }
    arg0->unk_157 = (s8) (u32) (phi_f18 * arg0->unk_228);
    temp_t3 = D_80A345AF;
    temp_f4 = (f32) temp_t3;
    phi_f4 = temp_f4;
    if ((s32) temp_t3 < 0) {
        phi_f4 = temp_f4 + 4294967296.0f;
    }
    arg0->unk_167 = (s8) (u32) (phi_f4 * arg0->unk_228);
    do {
        temp_t6 = phi_v0->unk_F;
        temp_f18_2 = (f32) temp_t6;
        phi_f18_2 = temp_f18_2;
        if ((s32) temp_t6 < 0) {
            phi_f18_2 = temp_f18_2 + 4294967296.0f;
        }
        phi_v1->unk_157 = (s8) (u32) (phi_f18_2 * arg0->unk_228);
        temp_t9 = phi_v0->unk_1F;
        temp_f4_2 = (f32) temp_t9;
        phi_f4_2 = temp_f4_2;
        if ((s32) temp_t9 < 0) {
            phi_f4_2 = temp_f4_2 + 4294967296.0f;
        }
        phi_v1->unk_167 = (s8) (u32) (phi_f4_2 * arg0->unk_228);
        temp_t2 = phi_v0->unk_2F;
        temp_f18_3 = (f32) temp_t2;
        phi_f18_3 = temp_f18_3;
        if ((s32) temp_t2 < 0) {
            phi_f18_3 = temp_f18_3 + 4294967296.0f;
        }
        phi_v1->unk_177 = (s8) (u32) (phi_f18_3 * arg0->unk_228);
        temp_t5 = phi_v0->unk_3F;
        temp_v0 = phi_v0 + 0x40;
        temp_f4_3 = (f32) temp_t5;
        phi_v0 = temp_v0;
        phi_f4_3 = temp_f4_3;
        if ((s32) temp_t5 < 0) {
            phi_f4_3 = temp_f4_3 + 4294967296.0f;
        }
        phi_v1->unk_187 = (s8) (u32) (phi_f4_3 * arg0->unk_228);
        phi_v1 += 0x40;
    } while (temp_v0 != &D_80A34670);
    if (arg0->unk_228 > 0.0f) {
        SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, 0);
        Matrix_RotateY(arg0->actor.shape.rot.y, 1U);
        Matrix_Scale(0.1f, 0.1f, 0.1f, 1);
        temp_a0 = *arg1;
        temp_s1 = temp_a0;
        func_8012C28C(temp_a0);
        temp_v0_2 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_2[1];
        temp_v0_2->words.w0 = 0xDB060020;
        sp44 = temp_v0_2;
        sp44->words.w1 = Gfx_TwoTexScroll(*arg1, 0, 0U, (u32) sp57, 0x20, 0x80, 1, 0U, (u32) sp56, 0x20, 0x20);
        temp_v0_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xDB060024;
        sp40 = temp_v0_3;
        sp40->words.w1 = Lib_SegmentedToVirtual(arg0 + 0x148);
        temp_v0_4 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_4[1];
        temp_v0_4->words.w0 = 0xDA380003;
        temp_v0_4->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_5 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xDE000000;
        temp_v0_5->words.w1 = (u32) &D_060023B0;
    }
}

s32 func_80A342F4(s16 arg0) {
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
    if (temp_lo >= 0x11) {
        if ((temp_lo == 0x11) && (((s32) (s16) temp_f18 % 0x3C) < (s32) arg0)) {
            return 0;
        }
        phi_v1 = 2;
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return phi_v1;
    }
    if ((temp_lo < 6) && (phi_v1 = 1, (temp_lo == 5)) && (((s32) (s16) temp_f18 % 0x3C) < (s32) arg0)) {
        return 0;
    }
    return phi_v1;
}

void ObjToudai_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjToudai *this = (ObjToudai *) thisx;
    Lib_MemCpy((void *) &this->unk_148, &D_80A34590, 0xE0U);
}

void ObjToudai_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjToudai *this = (ObjToudai *) thisx;

}

void ObjToudai_Update(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_v0;
    f32 phi_f0;
    ObjToudai *this = (ObjToudai *) thisx;

    temp_v0 = func_80A342F4(this->unk_238);
    if (this->unk_236 != temp_v0) {
        this->unk_236 = temp_v0 & 0xFF;
        this->unk_238 = Rand_S16Offset(0, 0x32);
    }
    if (this->unk_236 == 0) {
        phi_f0 = 0.0f;
    } else {
        phi_f0 = 1.0f;
    }
    Math_ApproachF(&this->unk_228, phi_f0, 0.01f, 1000.0f);
    this->unk_234 += 0x64;
    this->actor.shape.rot.y = (s32) (Math_SinS(this->unk_234) * 16000.0f) + this->actor.world.rot.y;
}

void ObjToudai_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjToudai *this = (ObjToudai *) thisx;
    func_80A33B00(this, (GraphicsContext **) globalCtx);
    func_80A33BB4(this, (GraphicsContext **) globalCtx);
}
