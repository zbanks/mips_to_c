struct _mips2c_stack_TransitionTriforce_Destroy {}; /* size 0x0 */

struct _mips2c_stack_TransitionTriforce_Draw {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ Mtx *sp24;                           /* inferred */
    /* 0x28 */ char pad28[0x48];                    /* maybe part of sp24[19]? */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad74[0xC];                     /* maybe part of sp70[4]? */
    /* 0x80 */ void *sp80;                          /* inferred */
    /* 0x84 */ Gfx *sp84;                           /* inferred */
};                                                  /* size = 0x88 */

struct _mips2c_stack_TransitionTriforce_Init {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_TransitionTriforce_IsDone {};  /* size 0x0 */

struct _mips2c_stack_TransitionTriforce_SetColor {}; /* size 0x0 */

struct _mips2c_stack_TransitionTriforce_SetType {}; /* size 0x0 */

struct _mips2c_stack_TransitionTriforce_Start {};   /* size 0x0 */

struct _mips2c_stack_TransitionTriforce_Update {};  /* size 0x0 */

struct _mips2c_stack_func_80AC5280 {};              /* size 0x0 */

? guScale(void *, f32, f32, ?);                     /* extern */
? guTranslate(void *, ?, ?, ?);                     /* extern */
void func_80AC5280(void *arg0, s32 arg1);           /* static */
static ? D_80AC5630;                                /* unable to generate initializer */
static ? D_80AC5660;                                /* unable to generate initializer */

void TransitionTriforce_Start(void *thisx) {
    s32 temp_v0;

    temp_v0 = thisx->unkC;
    if ((temp_v0 == 1) || (temp_v0 == 2)) {
        thisx->unk4 = 1.0f;
        return;
    }
    thisx->unk4 = 0.03f;
}

void *TransitionTriforce_Init(void *thisx) {
    bzero(thisx, 0x1E0);
    guOrtho(thisx + 0x18, -160.0f, 160.0f, -120.0f, 120.0f, -1000.0f, 1000.0f, 1.0f);
    thisx->unkC = 2;
    thisx->unk4 = 1.0f;
    thisx->unk10 = 1;
    thisx->unk8 = 0.015f;
    return thisx;
}

void TransitionTriforce_Destroy(void *thisx) {

}

void TransitionTriforce_Update(void *thisx, s32 updateRate) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    s32 temp_v0;
    s32 temp_v1;
    f32 phi_f0;
    s32 phi_v0;

    phi_v0 = updateRate;
    if (updateRate > 0) {
        do {
            temp_v1 = thisx->unkC;
            temp_v0 = phi_v0 - 1;
            phi_v0 = temp_v0;
            if (temp_v1 == 1) {
                temp_f0 = thisx->unk4 * (1.0f - thisx->unk8);
                phi_f0 = temp_f0;
                if (temp_f0 < 0.03f) {
                    thisx->unk4 = 0.03f;
                } else {
                    goto block_17;
                }
            } else if (temp_v1 == 2) {
                temp_f0_2 = thisx->unk4 - thisx->unk8;
                phi_f0 = temp_f0_2;
                if (temp_f0_2 < 0.03f) {
                    thisx->unk4 = 0.03f;
                } else {
                    goto block_17;
                }
            } else if (temp_v1 == 3) {
                temp_f0_3 = thisx->unk4 / (1.0f - thisx->unk8);
                phi_f0 = temp_f0_3;
                if (temp_f0_3 > 1.0f) {
                    thisx->unk4 = 1.0f;
                } else {
                    goto block_17;
                }
            } else if (temp_v1 == 4) {
                temp_f0_4 = thisx->unk4 + thisx->unk8;
                phi_f0 = temp_f0_4;
                if (temp_f0_4 > 1.0f) {
                    thisx->unk4 = 1.0f;
                } else {
block_17:
                    thisx->unk4 = phi_f0;
                }
            }
        } while (temp_v0 != 0);
    }
}

void TransitionTriforce_SetColor(void *thisx, u32 color) {
    *thisx = color;
}

void TransitionTriforce_SetType(void *thisx, s32 type) {
    thisx->unk10 = type;
}

void func_80AC5280(void *arg0, s32 arg1) {
    arg0->unkC = arg1;
}

void TransitionTriforce_Draw(void *thisx, Gfx **gfxP) {
    Gfx *sp84;
    void *sp80;
    f32 sp70;
    Mtx *sp24;
    void *sp20;
    Gfx *temp_v1;
    Gfx *temp_v1_10;
    Gfx *temp_v1_11;
    Gfx *temp_v1_12;
    Gfx *temp_v1_13;
    Gfx *temp_v1_14;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    Gfx *temp_v1_8;
    Gfx *temp_v1_9;
    Mtx *temp_a0_2;
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    void *temp_a0;
    void *temp_a0_3;
    Gfx *phi_v1;

    temp_f0 = thisx->unk4;
    temp_v1 = *gfxP;
    temp_f2 = temp_f0 * 0.625f;
    sp70 = temp_f0 * 360.0f;
    temp_v0 = thisx->unk58;
    temp_a0 = thisx + (temp_v0 * 0xC0) + 0x60;
    thisx->unk58 = (s32) (temp_v0 ^ 1);
    sp80 = temp_a0;
    sp84 = temp_v1;
    guScale(temp_a0, temp_f2, temp_f2, 0x3F800000);
    temp_a0_2 = temp_a0 + 0x40;
    sp24 = temp_a0_2;
    guRotate(temp_a0_2, sp70, 0.0f, 0.0f, 1.0f);
    temp_a0_3 = temp_a0 + 0x80;
    sp20 = temp_a0_3;
    guTranslate(temp_a0_3, 0, 0, 0);
    temp_v1->words.w0 = 0xE7000000;
    temp_v1->words.w1 = 0;
    temp_v1_2 = temp_v1 + 8;
    temp_v1_2->words.w0 = 0xDE000000;
    temp_v1_2->words.w1 = (u32) &D_80AC5630;
    temp_v1_3 = temp_v1_2 + 8;
    temp_v1_3->words.w0 = 0xFA000000;
    temp_v1_4 = temp_v1_3 + 8;
    temp_v1_3->words.w1 = thisx->unk0;
    temp_v1_4->words.w0 = 0xFCFFFFFF;
    temp_v1_4->words.w1 = 0xFFFDF6FB;
    temp_v1_5 = temp_v1_4 + 8;
    temp_v1_5->words.w1 = (u32) (thisx + 0x18);
    temp_v1_5->words.w0 = 0xDA380007;
    temp_v1_6 = temp_v1_5 + 8;
    temp_v1_6->words.w0 = 0xDA380003;
    temp_v1_7 = temp_v1_6 + 8;
    temp_v1_6->words.w1 = (u32) sp80;
    temp_v1_7->words.w0 = 0xDA380001;
    temp_v1_8 = temp_v1_7 + 8;
    temp_v1_7->words.w1 = (u32) sp24;
    temp_v1_8->words.w0 = 0xDA380001;
    temp_v1_8->words.w1 = (u32) temp_a0_3;
    temp_v1_9 = temp_v1_8 + 8;
    temp_v1_9->words.w0 = 0x100A014;
    temp_v1_9->words.w1 = (u32) &D_80AC5660;
    temp_v1_10 = temp_v1_9 + 8;
    sp84 = temp_v1_10;
    phi_v1 = temp_v1_10;
    if (TransitionTriforce_IsDone(thisx) == 0) {
        temp_v0_2 = thisx->unk10;
        if (temp_v0_2 != 1) {
            if (temp_v0_2 != 2) {

            } else {
                temp_v1_10->words.w1 = 0x40C;
                temp_v1_10->words.w0 = 0x606080A;
                temp_v1_11 = temp_v1_10 + 8;
                temp_v1_11->words.w0 = 0x6000C0E;
                temp_v1_11->words.w1 = 0x2000E;
                temp_v1_12 = temp_v1_11 + 8;
                temp_v1_12->words.w0 = 0x6020E10;
                temp_v1_12->words.w1 = 0x21012;
                temp_v1_13 = temp_v1_12 + 8;
                temp_v1_13->words.w0 = 0x6021204;
                temp_v1_13->words.w1 = 0x4120C;
                phi_v1 = temp_v1_13 + 8;
            }
        } else {
            temp_v1_10->words.w0 = 0x600080A;
            temp_v1_10->words.w1 = 0x80206;
            temp_v1_14 = temp_v1_10 + 8;
            temp_v1_14->words.w0 = 0x50A0604;
            temp_v1_14->words.w1 = 0;
            phi_v1 = temp_v1_14 + 8;
        }
    } else {
        temp_v0_3 = thisx->unk10;
        if ((temp_v0_3 != 1) && (temp_v0_3 == 2)) {
            temp_v1_10->words.w0 = 0x70C0E10;
            temp_v1_10->words.w1 = 0xC1012;
            phi_v1 = temp_v1_10 + 8;
        }
    }
    phi_v1->words.w0 = 0xE7000000;
    phi_v1->words.w1 = 0;
    *gfxP = phi_v1 + 8;
}

s32 TransitionTriforce_IsDone(void *thisx) {
    s32 temp_v0;
    s32 phi_v0;
    s32 phi_v0_2;

    temp_v0 = thisx->unkC;
    if ((temp_v0 == 1) || (temp_v0 == 2)) {
        phi_v0_2 = 0;
        if (thisx->unk4 <= 0.03f) {
            phi_v0_2 = 1;
        }
        return phi_v0_2;
    }
    if ((temp_v0 == 3) || (temp_v0 == 4)) {
        phi_v0 = 0;
        if (thisx->unk4 >= 1.0f) {
            phi_v0 = 1;
        }
        return phi_v0;
    }
    return 0;
}
