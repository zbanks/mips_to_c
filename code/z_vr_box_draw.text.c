struct _mips2c_stack_func_801435A0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80143624 {};              /* size 0x0 */

struct _mips2c_stack_func_80143668 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80143A04 {};              /* size 0x0 */

void func_801435A0(void *arg0, f32 arg1, f32 arg2, f32 arg3); /* static */
void func_80143624(void *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5, u8 arg6); /* static */
void func_80143668(void *arg0, GraphicsContext *arg1, s16 arg2, s16 arg3, f32 arg4, f32 arg5, f32 arg6); /* static */
void func_80143A04(s32 arg0);                       /* static */
static RSPMatrix *D_801F6AE0;

void func_801435A0(void *arg0, f32 arg1, f32 arg2, f32 arg3) {
    SysMatrix_InsertTranslation(arg1, arg2, arg3, 0);
    Matrix_Scale(1.0f, 1.0f, 1.0f, 1);
    SysMatrix_RotateStateAroundXAxis(arg0->unk_208);
    SysMatrix_InsertYRotation_f(arg0->unk_20C, 1);
    SysMatrix_InsertZRotation_f(arg0->unk_210, 1);
    SysMatrix_GetStateAsRSPMatrix(D_801F6AE0);
}

void func_80143624(void *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5, u8 arg6) {
    arg0->unk_222 = (s8) (arg1 & 0xFF);
    arg0->unk_223 = (s8) (arg2 & 0xFF);
    arg0->unk_224 = (s8) (arg3 & 0xFF);
    arg0->unk_225 = arg4;
    arg0->unk_226 = arg5;
    arg0->unk_227 = arg6;
}

void func_80143668(void *arg0, GraphicsContext *arg1, s16 arg2, s16 arg3, f32 arg4, f32 arg5, f32 arg6) {
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_19;
    Gfx *temp_v0_20;
    Gfx *temp_v0_21;
    Gfx *temp_v0_22;
    Gfx *temp_v0_23;
    Gfx *temp_v0_24;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;

    func_8012C6AC(arg1);
    temp_v0 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB06002C;
    temp_v0->words.w1 = arg0->unk_178;
    temp_v0_2 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0x80008000;
    temp_v0_2->words.w0 = 0xD7000002;
    temp_v0_3 = arg1->polyOpa.d - 0x40;
    arg1->polyOpa.d = temp_v0_3;
    D_801F6AE0 = (RSPMatrix *) temp_v0_3;
    SysMatrix_InsertTranslation(arg4, arg5, arg6, 0);
    Matrix_Scale(1.0f, 1.0f, 1.0f, 1);
    SysMatrix_RotateStateAroundXAxis(arg0->unk_208);
    SysMatrix_InsertYRotation_f(arg0->unk_20C, 1);
    SysMatrix_InsertZRotation_f(arg0->unk_210, 1);
    SysMatrix_GetStateAsRSPMatrix(D_801F6AE0);
    temp_v0_4 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDA380003;
    temp_v0_4->words.w1 = (u32) D_801F6AE0;
    temp_v0_5 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = 0;
    temp_v0_5->words.w0 = 0xE3001801;
    temp_v0_6 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0_6 + 8;
    temp_v0_6->words.w1 = 0x2000;
    temp_v0_6->words.w0 = 0xE3001201;
    temp_v0_7 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0_7 + 8;
    temp_v0_7->words.w0 = 0xFD100000;
    temp_v0_7->words.w1 = arg0->unk_178;
    temp_v0_8 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0_8 + 8;
    temp_v0_8->words.w1 = 0;
    temp_v0_8->words.w0 = 0xE8000000;
    temp_v0_9 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0_9 + 8;
    temp_v0_9->words.w1 = 0x7000000;
    temp_v0_9->words.w0 = 0xF5000100;
    temp_v0_10 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0_10 + 8;
    temp_v0_10->words.w1 = 0;
    temp_v0_10->words.w0 = 0xE6000000;
    temp_v0_11 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0_11 + 8;
    temp_v0_11->words.w1 = 0x73FC000;
    temp_v0_11->words.w0 = 0xF0000000;
    temp_v0_12 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0_12 + 8;
    temp_v0_12->words.w1 = 0;
    temp_v0_12->words.w0 = 0xE7000000;
    temp_v0_13 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0_13 + 8;
    temp_v0_13->words.w1 = 0x8000;
    temp_v0_13->words.w0 = 0xE3001001;
    temp_v0_14 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0_14 + 8;
    temp_v0_14->words.w1 = 0xC00;
    temp_v0_14->words.w0 = 0xE3001402;
    temp_v0_15 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0_15 + 8;
    temp_v0_15->words.w0 = 0xFC252660;
    temp_v0_15->words.w1 = 0x15FC9378;
    temp_v0_16 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0_16 + 8;
    temp_v0_16->words.w0 = 0xFA000000;
    temp_v0_16->words.w1 = (arg0->unk_222 << 0x18) | (arg0->unk_223 << 0x10) | (arg0->unk_224 << 8) | (arg3 & 0xFF);
    temp_v0_17 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0_17 + 8;
    temp_v0_17->words.w0 = 0xFB000000;
    temp_v0_17->words.w1 = (arg0->unk_225 << 0x18) | (arg0->unk_226 << 0x10) | (arg0->unk_227 << 8);
    temp_v0_18 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0_18 + 8;
    temp_v0_18->words.w0 = 0xDE000000;
    temp_v0_18->words.w1 = arg0->unk_17C;
    temp_v0_19 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0_19 + 8;
    temp_v0_19->words.w0 = 0xDE000000;
    temp_v0_19->words.w1 = arg0->unk_17C + 0x960;
    temp_v0_20 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0_20 + 8;
    temp_v0_20->words.w0 = 0xDE000000;
    temp_v0_20->words.w1 = arg0->unk_17C + 0x12C0;
    temp_v0_21 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0_21 + 8;
    temp_v0_21->words.w0 = 0xDE000000;
    temp_v0_21->words.w1 = arg0->unk_17C + 0x1C20;
    temp_v0_22 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0_22 + 8;
    temp_v0_22->words.w0 = 0xDE000000;
    temp_v0_22->words.w1 = arg0->unk_17C + 0x2580;
    if (arg2 == 5) {
        temp_v0_23 = arg1->polyOpa.p;
        arg1->polyOpa.p = temp_v0_23 + 8;
        temp_v0_23->words.w0 = 0xDE000000;
        temp_v0_23->words.w1 = arg0->unk_17C + 0x2EE0;
    }
    temp_v0_24 = arg1->polyOpa.p;
    arg1->polyOpa.p = temp_v0_24 + 8;
    temp_v0_24->words.w1 = 0;
    temp_v0_24->words.w0 = 0xE7000000;
}

void func_80143A04(s32 arg0) {

}
