struct _mips2c_stack_TransitionWipe1_Destroy {};    /* size 0x0 */

struct _mips2c_stack_TransitionWipe1_Draw {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ Mtx *sp30;                           /* inferred */
    /* 0x34 */ char pad34[0x44];                    /* maybe part of sp30[18]? */
    /* 0x78 */ void *sp78;                          /* inferred */
    /* 0x7C */ Gfx *sp7C;                           /* inferred */
};                                                  /* size = 0x80 */

struct _mips2c_stack_TransitionWipe1_Init {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_TransitionWipe1_IsDone {};     /* size 0x0 */

struct _mips2c_stack_TransitionWipe1_SetColor {};   /* size 0x0 */

struct _mips2c_stack_TransitionWipe1_SetEnvColor {}; /* size 0x0 */

struct _mips2c_stack_TransitionWipe1_SetType {};    /* size 0x0 */

struct _mips2c_stack_TransitionWipe1_Start {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_TransitionWipe1_Update {};     /* size 0x0 */

? guScale(void *, f32, f32, ?);                     /* extern */
? guTranslate(void *, ?, ?, ?);                     /* extern */
static ? D_80AC65B0;                                /* unable to generate initializer */

void TransitionWipe1_Start(void *thisx) {
    thisx->unkA = 0;
    if (thisx->unk8 != 0) {
        thisx->unkE = 0x14D;
    } else {
        thisx->unkE = 0x264;
    }
    guPerspective(thisx + 0x18, thisx + 0x10, 60.0f, 1.3333334f, 10.0f, 12800.0f, 1.0f);
    guLookAt(thisx + 0x58, 0.0f, 0.0f, 400.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
}

void *TransitionWipe1_Init(void *thisx) {
    bzero(thisx, 0x218);
    return thisx;
}

void TransitionWipe1_Destroy(void *thisx) {

}

void TransitionWipe1_Update(void *thisx, s32 updateRate) {
    u16 temp_t0;
    u16 temp_t8;

    if (thisx->unk8 != 0) {
        temp_t0 = thisx->unkE + ((s32) (gSaveContext.unk_3F51 * 3) / updateRate);
        thisx->unkE = temp_t0;
        if ((temp_t0 & 0xFFFF) >= 0x264) {
            thisx->unkE = 0x264U;
            thisx->unkA = 1;
            return;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return;
    }
    temp_t8 = thisx->unkE - ((s32) (gSaveContext.unk_3F51 * 3) / updateRate);
    thisx->unkE = temp_t8;
    if ((temp_t8 & 0xFFFF) < 0x14E) {
        thisx->unkE = 0x14DU;
        thisx->unkA = 1;
    }
}

void TransitionWipe1_Draw(void *thisx, Gfx **gfxP) {
    Gfx *sp7C;
    void *sp78;
    Mtx *sp30;
    void *sp2C;
    Gfx **temp_a0_4;
    Gfx *temp_t0;
    Gfx *temp_t0_2;
    Gfx *temp_t1;
    Gfx *temp_t1_2;
    Gfx *temp_t2;
    Gfx *temp_t3;
    Gfx *temp_t5;
    Gfx *temp_t5_2;
    Gfx *temp_t6;
    Gfx *temp_t9;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Mtx *temp_a0_2;
    u8 temp_v0;
    void *temp_a0;
    void *temp_a0_3;

    sp7C = *gfxP;
    temp_v0 = thisx->unk9;
    temp_a0 = thisx + (temp_v0 * 0xC0) + 0x98;
    thisx->unk9 = (u8) (temp_v0 ^ 1);
    sp78 = temp_a0;
    guScale(temp_a0, 0.56f, 0.56f, 0x3F800000);
    temp_a0_2 = temp_a0 + 0x40;
    sp30 = temp_a0_2;
    guRotate(temp_a0_2, 0.0f, 0.0f, 0.0f, 1.0f);
    temp_a0_3 = temp_a0 + 0x80;
    sp2C = temp_a0_3;
    guTranslate(temp_a0_3, 0, 0, 0);
    temp_t0 = sp7C;
    temp_a0_4 = &sp7C;
    sp7C = temp_t0 + 8;
    temp_t0->words.w1 = 0;
    temp_t0->words.w0 = 0xE7000000;
    temp_v0_2 = Gfx_BranchTexScroll(temp_a0_4, (u32) thisx->unkC, (u32) thisx->unkE, 0, 0);
    temp_t3 = sp7C;
    sp7C = temp_t3 + 8;
    temp_t3->words.w1 = (u32) temp_v0_2;
    temp_t3->words.w0 = 0xDB060020;
    temp_v0_3 = sp7C;
    sp7C = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xFA000080;
    temp_v0_3->words.w1 = (thisx->unk0 << 0x18) | (thisx->unk1 << 0x10) | (thisx->unk2 << 8) | 0xFF;
    temp_t2 = sp7C;
    sp7C = temp_t2 + 8;
    temp_t2->words.w1 = (u32) (thisx + 0x18);
    temp_t2->words.w0 = 0xDA380007;
    temp_t6 = sp7C;
    sp7C = temp_t6 + 8;
    temp_t6->words.w0 = 0xDB0E0000;
    temp_t6->words.w1 = (u32) thisx->unk10;
    temp_t9 = sp7C;
    sp7C = temp_t9 + 8;
    temp_t9->words.w1 = (u32) (thisx + 0x58);
    temp_t9->words.w0 = 0xDA380005;
    temp_t1 = sp7C;
    sp7C = temp_t1 + 8;
    temp_t1->words.w0 = 0xDA380003;
    temp_t1->words.w1 = (u32) sp78;
    temp_t5 = sp7C;
    sp7C = temp_t5 + 8;
    temp_t5->words.w0 = 0xDA380001;
    temp_t5->words.w1 = (u32) sp30;
    temp_t0_2 = sp7C;
    sp7C = temp_t0_2 + 8;
    temp_t0_2->words.w0 = 0xDA380001;
    temp_t0_2->words.w1 = (u32) sp2C;
    temp_t1_2 = sp7C;
    sp7C = temp_t1_2 + 8;
    temp_t1_2->words.w1 = (u32) &D_80AC65B0;
    temp_t1_2->words.w0 = 0xDE000000;
    temp_t5_2 = sp7C;
    sp7C = temp_t5_2 + 8;
    temp_t5_2->words.w1 = 0;
    temp_t5_2->words.w0 = 0xE7000000;
    *gfxP = sp7C;
}

s32 TransitionWipe1_IsDone(void *thisx) {
    return (s32) thisx->unkA;
}

void TransitionWipe1_SetType(void *thisx, s32 type) {
    if (type == 1) {
        thisx->unk8 = 1U;
    } else {
        thisx->unk8 = 0U;
    }
    if (thisx->unk8 != 0) {
        thisx->unkE = 0x14D;
        return;
    }
    thisx->unkE = 0x264;
}

void TransitionWipe1_SetColor(void *thisx, u32 color) {
    *thisx = color;
}

void TransitionWipe1_SetEnvColor(void *thisx, u32 color) {
    thisx->unk4 = color;
}
