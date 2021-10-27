struct _mips2c_stack_DebugDisplay_AddObject {};     /* size 0x0 */

struct _mips2c_stack_DebugDisplay_DrawObjects {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800E9470 {};              /* size 0x0 */

struct _mips2c_stack_func_800E95F4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800E97D8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800E992C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x8];                    /* maybe part of sp1C[3]? */
    /* 0x28 */ GraphicsContext *sp28;               /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800E99B0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

? func_800E9470();                                  /* static */
void func_800E95F4(void *arg0, u32 arg1, GraphicsContext **arg2); /* static */
void func_800E97D8(void *arg0, u32 arg1, GraphicsContext **arg2); /* static */
void func_800E992C(GraphicsContext **arg0, void *arg1); /* static */
u32 func_800E99B0(GraphicsContext *arg0, void *arg1, GraphicsContext *); /* static */
static ? D_801BAFF8;                                /* unable to generate initializer */
static ? D_801BB010;                                /* unable to generate initializer */
static ? D_801BB018;                                /* unable to generate initializer */
static ? D_801BB050;                                /* unable to generate initializer */
static ? D_801BB058;                                /* unable to generate initializer */
static s16 D_801BB068[18] = {0x14, 0, 0, 0xFFEC, 0, 0, 0, 0x14, 0, 0, 0xFFEC, 0, 0, 0, 0x14, 0, 0, 0xFFEC};
static ? D_801BB08C;                                /* unable to generate initializer */
static Gfx *D_801F3F70;
RSPMatrix D_801D1DE0 = {
    {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};

? func_800E9470(void) {
    D_801F3F70 = NULL;
    return 0;
}

void DebugDisplay_AddObject(f32 posX, f32 posY, f32 posZ, s16 rotX, s16 rotY, s16 rotZ, f32 scaleX, f32 scaleY, f32 scaleZ, u8 red, u8 green, u8 blue, u8 alpha, s16 type, GraphicsContext *gfxCtx) {
    Gfx *temp_a0;
    Gfx *temp_v1;

    temp_v1 = D_801F3F70;
    temp_a0 = gfxCtx->polyOpa.d - 0x30;
    gfxCtx->polyOpa.d = temp_a0;
    D_801F3F70 = temp_a0;
    temp_a0->words.w0 = (bitwise u32) posX;
    D_801F3F70->words.w1 = (bitwise u32) posY;
    D_801F3F70[1].words.w0 = (bitwise u32) posZ;
    D_801F3F70[1].texture.s = (u16) rotX;
    D_801F3F70[1].texture.t = (u16) rotY;
    D_801F3F70->unk_10 = rotZ;
    D_801F3F70[2].words.w1 = (bitwise u32) scaleX;
    D_801F3F70[3].words.w0 = (bitwise u32) scaleY;
    D_801F3F70[3].words.w1 = (bitwise u32) scaleZ;
    D_801F3F70[4].texture.cmd = red;
    D_801F3F70[4].texture.lodscale = green;
    D_801F3F70[4].texture.tile = blue;
    D_801F3F70[4].texture.on = alpha;
    D_801F3F70[4].texture.s = (u16) type;
    D_801F3F70[5].words.w0 = (u32) temp_v1;
}

void DebugDisplay_DrawObjects(GlobalContext *globalCtx) {
    Gfx *temp_s0;
    Gfx *temp_s0_2;
    void *temp_v0;
    Gfx *phi_s0;

    temp_s0 = D_801F3F70;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
        do {
            temp_v0 = &D_801BB018 + (phi_s0[4].texture.s * 8);
            *(&D_801BB010 + (temp_v0->unk_0 * 4))(phi_s0, temp_v0->unk_4, globalCtx);
            temp_s0_2 = phi_s0[5].words.w0;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 0);
    }
}

void func_800E95F4(void *arg0, u32 arg1, GraphicsContext **arg2) {
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
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;

    temp_a0 = *arg2;
    temp_s1 = temp_a0;
    func_8012C6FC(temp_a0);
    temp_v0 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0[1];
    temp_v0->words.w0 = 0xFA000000;
    temp_v0->words.w1 = (arg0->unk_20 << 0x18) | (arg0->unk_21 << 0x10) | (arg0->unk_22 << 8) | arg0->unk_23;
    SysMatrix_InsertTranslation(arg0->unk_0, arg0->unk_4, arg0->unk_8, 0);
    Matrix_Scale(arg0->unk_14, arg0->unk_18, arg0->unk_1C, 1);
    SysMatrix_InsertMatrix(arg2 + 0x187FC, 1);
    SysMatrix_InsertRotation(arg0->unk_C, arg0->unk_E, arg0->unk_10, 1);
    temp_v0_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xFD900000;
    temp_v0_2->words.w1 = arg1;
    temp_v0_3 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_3[1];
    temp_v0_3->words.w1 = 0x7000000;
    temp_v0_3->words.w0 = 0xF5900000;
    temp_v0_4 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_4[1];
    temp_v0_4->words.w1 = 0;
    temp_v0_4->words.w0 = 0xE6000000;
    temp_v0_5 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_5[1];
    temp_v0_5->words.w1 = 0x707F400;
    temp_v0_5->words.w0 = 0xF3000000;
    temp_v0_6 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_6[1];
    temp_v0_6->words.w1 = 0;
    temp_v0_6->words.w0 = 0xE7000000;
    temp_v0_7 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_7[1];
    temp_v0_7->words.w1 = 0;
    temp_v0_7->words.w0 = 0xF5880400;
    temp_v0_8 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_8[1];
    temp_v0_8->words.w1 = 0x3C03C;
    temp_v0_8->words.w0 = 0xF2000000;
    temp_v0_9 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_9[1];
    temp_v0_9->words.w0 = 0xDA380003;
    temp_v0_9->words.w1 = Matrix_NewMtx(*arg2);
    temp_v0_10 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_10[1];
    temp_v0_10->words.w0 = 0xDE000000;
    temp_v0_10->words.w1 = (u32) &D_801BAFF8;
}

void func_800E97D8(void *arg0, u32 arg1, GraphicsContext **arg2) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;

    temp_a0 = *arg2;
    temp_s1 = temp_a0;
    func_8012C588(temp_a0);
    temp_v0 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0[1];
    temp_v0->words.w0 = 0xFA000000;
    temp_v0->words.w1 = (arg0->unk_20 << 0x18) | (arg0->unk_21 << 0x10) | (arg0->unk_22 << 8) | arg0->unk_23;
    temp_v0_2 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = 0x18;
    temp_v0_2->words.w0 = 0xDB020000;
    temp_v0_3 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDC08060A;
    temp_v0_3->words.w1 = (u32) &D_801BB058;
    temp_v0_4 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_4[1];
    temp_v0_4->words.w0 = 0xDC08090A;
    temp_v0_4->words.w1 = (u32) &D_801BB050;
    SysMatrix_SetStateRotationAndTranslation(arg0->unk_0, arg0->unk_4, arg0->unk_8, arg0 + 0xC);
    Matrix_Scale(arg0->unk_14, arg0->unk_18, arg0->unk_1C, 1);
    temp_v0_5 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_5[1];
    temp_v0_5->words.w0 = 0xDA380003;
    temp_v0_5->words.w1 = Matrix_NewMtx(*arg2);
    temp_v0_6 = temp_s1->polyXlu.p;
    temp_s1->polyXlu.p = &temp_v0_6[1];
    temp_v0_6->words.w0 = 0xDE000000;
    temp_v0_6->words.w1 = arg1;
}

void func_800E992C(GraphicsContext **arg0, void *arg1) {
    GraphicsContext *sp28;
    Gfx *sp1C;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a0;

    temp_a0 = *arg0;
    sp28 = temp_a0;
    func_8012C560(temp_a0);
    temp_v1 = sp28->polyXlu.p;
    sp28->polyXlu.p = &temp_v1[1];
    temp_v1->words.w0 = 0xDA380003;
    temp_v1->words.w1 = (u32) &D_801D1DE0;
    temp_v1_2 = sp28->polyXlu.p;
    sp28->polyXlu.p = &temp_v1_2[1];
    temp_v1_2->words.w0 = 0xDE000000;
    sp1C = temp_v1_2;
    sp1C->words.w1 = func_800E99B0(*arg0, arg1, sp28);
}

u32 func_800E99B0(GraphicsContext *arg0, void *arg1) {
    void *sp2C;
    void *sp28;
    void *sp24;
    void *sp20;
    s16 *temp_t0;
    s16 *temp_v0_3;
    s16 temp_t6;
    s16 temp_t6_2;
    s32 temp_a0;
    s32 temp_t4;
    void *temp_t2;
    void *temp_t2_2;
    void *temp_t2_3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v1;
    void *temp_v1_2;
    s16 phi_t6;
    void *phi_a2;
    void *phi_v1;
    s16 *phi_v0;
    s32 phi_a0;
    s16 phi_t6_2;
    void *phi_v1_2;
    s16 *phi_v0_2;
    s16 *phi_t0;
    s32 phi_t4;
    void *phi_t2;
    void *phi_ra;
    void *phi_t2_2;
    void *phi_v1_3;
    void *phi_t2_3;
    void *phi_v1_4;

    if (arg1 != 0) {
        temp_v0 = arg0->polyOpa.d - (((arg1->unk_0 << 5) - 9) & ~0xF);
        arg0->polyOpa.d = temp_v0;
        temp_v0_2 = temp_v0 - (((arg1->unk_0 * 6 * 0x10) + 0xF) & ~0xF);
        arg0->polyOpa.d = temp_v0_2;
        sp2C = temp_v0;
        sp20 = temp_v0_2;
        sp28 = temp_v0;
        sp24 = temp_v0_2;
        phi_a2 = Lib_SegmentedToVirtual(arg1->unk_4);
        phi_t4 = 0;
        phi_t2 = temp_v0;
        phi_ra = sp20;
        phi_t2_2 = temp_v0;
        phi_v1_4 = sp24;
        if ((s32) arg1->unk_0 > 0) {
            do {
                phi_t0 = D_801BB068;
                phi_ra = phi_v1_4;
                phi_v1_3 = phi_v1_4;
                phi_t2_3 = phi_t2;
loop_4:
                temp_t6 = *phi_t0;
                phi_t6 = temp_t6;
                phi_v1 = phi_v1_3;
                phi_v0 = phi_t0;
                phi_a0 = 6;
                phi_t6_2 = temp_t6;
                phi_v1_2 = phi_v1_3;
                phi_v0_2 = phi_t0;
                if (6 != 0xC) {
                    do {
                        temp_a0 = phi_a0 + 6;
                        temp_v1 = phi_v1 + 0x10;
                        temp_v0_3 = phi_v0 + 6;
                        temp_v1->unk_-10 = (s16) ((s32) (f32) phi_t6 + phi_a2->unk_0);
                        temp_v1->unk_-E = (s16) ((s32) (f32) temp_v0_3->unk_-4 + phi_a2->unk_2);
                        temp_v1->unk_-A = 0;
                        temp_v1->unk_-8 = 0;
                        temp_v1->unk_-6 = 0;
                        temp_v1->unk_-4 = 0x80;
                        temp_v1->unk_-3 = 0x80;
                        temp_v1->unk_-2 = 0x80;
                        temp_v1->unk_-1 = 0x80;
                        temp_v1->unk_-C = (s16) ((s32) (f32) temp_v0_3->unk_-2 + phi_a2->unk_4);
                        temp_t6_2 = temp_v0_3->unk_0;
                        phi_t6 = temp_t6_2;
                        phi_v1 = temp_v1;
                        phi_v0 = temp_v0_3;
                        phi_a0 = temp_a0;
                        phi_t6_2 = temp_t6_2;
                        phi_v1_2 = temp_v1;
                        phi_v0_2 = temp_v0_3;
                    } while (temp_a0 != 0xC);
                }
                temp_v0_4 = phi_v0_2 + 6;
                temp_v1_2 = phi_v1_2 + 0x10;
                temp_v1_2->unk_-10 = (s16) ((s32) (f32) phi_t6_2 + phi_a2->unk_0);
                temp_v1_2->unk_-E = (s16) ((s32) (f32) temp_v0_4->unk_-4 + phi_a2->unk_2);
                temp_v1_2->unk_-A = 0;
                temp_v1_2->unk_-8 = 0;
                temp_v1_2->unk_-6 = 0;
                temp_v1_2->unk_-4 = 0x80;
                temp_v1_2->unk_-3 = 0x80;
                temp_v1_2->unk_-2 = 0x80;
                temp_v1_2->unk_-1 = 0x80;
                temp_v1_2->unk_-C = (s16) ((s32) (f32) temp_v0_4->unk_-2 + phi_a2->unk_4);
                temp_t0 = phi_t0 + 0xC;
                phi_t0 = temp_t0;
                phi_v1_3 = temp_v1_2;
                phi_v1_4 = temp_v1_2;
                if (temp_t0 != &D_801BB08C) {
                    goto loop_4;
                }
                if (phi_t4 > 0) {
                    phi_t2->words.w0 = 0x100C018;
                    temp_t2 = phi_t2 + 8;
                    phi_t2->words.w1 = phi_ra;
                    temp_t2->unk_4 = 0xC0E;
                    temp_t2->unk_0 = 0x6000E02;
                    temp_t2_2 = temp_t2 + 8;
                    temp_t2_2->unk_0 = 0x6040610;
                    temp_t2_2->unk_4 = 0x61210;
                    temp_t2_3 = temp_t2_2 + 8;
                    temp_t2_3->unk_0 = 0x6081614;
                    temp_t2_3->unk_4 = 0x80A16;
                    phi_t2_3 = temp_t2_3 + 8;
                }
                temp_t4 = phi_t4 + 1;
                phi_a2 += 6;
                phi_t4 = temp_t4;
                phi_t2 = phi_t2_3;
                phi_t2_2 = phi_t2_3;
            } while (temp_t4 < (s32) arg1->unk_0);
        }
        phi_t2_2->words.w0 = 0xDF000000;
        phi_t2_2->words.w1 = 0;
    } else {
        temp_v0_5 = arg0->polyOpa.d - 0x10;
        arg0->polyOpa.d = temp_v0_5;
        sp2C = temp_v0_5;
        temp_v0_5->words.w0 = 0xDF000000;
        temp_v0_5->words.w1 = 0;
    }
    return (u32) sp2C;
}
