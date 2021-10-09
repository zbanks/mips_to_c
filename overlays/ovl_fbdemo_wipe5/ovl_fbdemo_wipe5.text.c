struct _mips2c_stack_TransitionWipe5_Destroy {};    /* size 0x0 */

struct _mips2c_stack_TransitionWipe5_Draw {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x28];                   /* maybe part of sp24[11]? */
    /* 0x50 */ ? *sp50;                             /* inferred */
    /* 0x54 */ char pad_54[0x8];                    /* maybe part of sp50[3]? */
    /* 0x5C */ Gfx *sp5C;                           /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_TransitionWipe5_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_TransitionWipe5_IsDone {};     /* size 0x0 */

struct _mips2c_stack_TransitionWipe5_SetColor {};   /* size 0x0 */

struct _mips2c_stack_TransitionWipe5_SetEnvColor {}; /* size 0x0 */

struct _mips2c_stack_TransitionWipe5_SetType {};    /* size 0x0 */

struct _mips2c_stack_TransitionWipe5_Start {};      /* size 0x0 */

struct _mips2c_stack_TransitionWipe5_Update {};     /* size 0x0 */

? func_8014116C(Gfx **, ? *, ? *, s32, s32, s32);   /* extern */
u32 func_80182CBC();                                /* extern */
u32 func_80182CCC();                                /* extern */
extern ? D_0F000000;
extern ? D_801ABAB0;
extern ? D_801E3BB0;
extern ? *D_801FBB90;

void TransitionWipe5_Start(void *thisx) {
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = thisx->unk_12;
    thisx->unk_13 = 0;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            thisx->unk_8 = 0.2f;
        } else {
            thisx->unk_8 = 0.05f;
        }
    } else {
        thisx->unk_8 = 0.02f;
    }
    temp_v0_2 = thisx->unk_11;
    if (temp_v0_2 != 0) {
        if (temp_v0_2 != 1) {
            thisx->unk_0 = 0xA0A0A0FF;
            return;
        }
        thisx->unk_0 = 0xA0A0A0FF;
        return;
    }
    thisx->unk_0 = 0xFF;
}

void *TransitionWipe5_Init(void *thisx) {
    bzero(thisx, 0x14);
    return thisx;
}

void TransitionWipe5_Destroy(void *thisx) {

}

void TransitionWipe5_Update(void *thisx, s32 updateRate) {
    if (thisx->unk_10 == 0) {
        thisx->unk_13 = 1;
        return;
    }
    thisx->unk_C = (f32) (thisx->unk_C + ((thisx->unk_8 * 3.0f) / (f32) updateRate));
    if (thisx->unk_C >= 1.0f) {
        thisx->unk_C = 1.0f;
        thisx->unk_13 = 1;
    }
}

void TransitionWipe5_Draw(void *thisx, Gfx **gfxP) {
    Gfx *sp5C;
    ? *sp50;
    Gfx *sp24;
    Gfx **temp_a0;
    Gfx **temp_a0_2;
    Gfx *temp_t1;
    Gfx *temp_t1_2;
    Gfx *temp_t3;
    Gfx *temp_t3_2;
    Gfx *temp_t4;
    Gfx *temp_t4_2;
    Gfx *temp_t4_3;
    Gfx *temp_t7;
    Gfx *temp_t7_2;
    Gfx *temp_t8;
    Gfx *temp_t8_2;
    s32 temp_a3;
    s32 temp_f18;
    s32 temp_t0;

    sp50 = D_801FBB90;
    sp5C = *gfxP;
    temp_t1 = sp5C;
    temp_a3 = gScreenWidth;
    temp_t0 = gScreenHeight;
    temp_f18 = (s32) ((1.0f - thisx->unk_C) * 255.0f);
    sp5C = temp_t1 + 8;
    temp_t1->words.w1 = 0;
    temp_t1->words.w0 = 0xE7000000;
    temp_t4 = sp5C;
    sp5C = temp_t4 + 8;
    temp_t4->words.w1 = (u32) (&D_801E3BB0 - 0x80000000);
    temp_t4->words.w0 = 0xE1000000;
    temp_t8 = sp5C;
    sp5C = temp_t8 + 8;
    temp_t8->words.w1 = (u32) (&D_801ABAB0 - 0x80000000);
    temp_t8->words.w0 = 0xDD0007FF;
    temp_a0 = &sp5C;
    if (thisx->unk_10 == 0) {
        temp_t4_2 = sp5C;
        temp_a0_2 = &sp5C;
        sp5C = temp_t4_2 + 8;
        temp_t4_2->words.w1 = 0;
        temp_t4_2->words.w0 = 0xEF200000;
        func_8014116C(temp_a0_2, &D_0F000000, sp50, temp_a3, temp_t0, 1);
    } else {
        temp_t3 = sp5C;
        if (temp_f18 == 0xFF) {
            temp_t8_2 = sp5C;
            sp5C = temp_t8_2 + 8;
            temp_t8_2->words.w0 = 0xEF000CF0;
            temp_t8_2->words.w1 = 0xF0A4004;
        } else {
            sp5C = temp_t3 + 8;
            temp_t3->words.w0 = 0xEF000CA0;
            temp_t3->words.w1 = 0x504344;
        }
        temp_t7 = sp5C;
        sp5C = temp_t7 + 8;
        temp_t7->words.w0 = 0xFB000000;
        temp_t7->words.w1 = (temp_f18 & 0xFF) | ~0xFF;
        temp_t3_2 = sp5C;
        sp5C = temp_t3_2 + 8;
        temp_t3_2->words.w1 = -0x403;
        temp_t3_2->words.w0 = 0xFC12FE25;
        func_8014116C(temp_a0, sp50, &D_0F000000, temp_a3, temp_t0, 0);
    }
    temp_t7_2 = sp5C;
    sp5C = temp_t7_2 + 8;
    temp_t7_2->words.w1 = 0;
    temp_t7_2->words.w0 = 0xE7000000;
    temp_t1_2 = sp5C;
    sp5C = temp_t1_2 + 8;
    temp_t1_2->words.w0 = 0xE1000000;
    sp24 = temp_t1_2;
    sp24->words.w1 = func_80182CCC();
    temp_t4_3 = sp5C;
    sp5C = temp_t4_3 + 8;
    temp_t4_3->words.w0 = 0xDD0007FF;
    sp24 = temp_t4_3;
    sp24->words.w1 = func_80182CBC();
    *gfxP = sp5C;
}

s32 TransitionWipe5_IsDone(void *thisx) {
    return (s32) thisx->unk_13;
}

void TransitionWipe5_SetType(void *thisx, s32 type) {
    if ((type & 0x80) != 0) {
        thisx->unk_11 = 0;
        thisx->unk_12 = (s8) (type & 1);
        return;
    }
    if (type == 1) {
        thisx->unk_10 = 1;
        return;
    }
    thisx->unk_10 = 0;
}

void TransitionWipe5_SetColor(void *thisx, u32 color) {
    *thisx = color;
}

void TransitionWipe5_SetEnvColor(void *thisx, u32 color) {
    thisx->unk_4 = color;
}
