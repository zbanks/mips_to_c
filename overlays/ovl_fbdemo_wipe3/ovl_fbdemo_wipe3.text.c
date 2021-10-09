struct _mips2c_stack_TransitionWipe3_Destroy {};    /* size 0x0 */

struct _mips2c_stack_TransitionWipe3_Draw {
    /* 0x00 */ char pad0[0x60];
    /* 0x60 */ void *sp60;                          /* inferred */
    /* 0x64 */ Gfx *sp64;                           /* inferred */
};                                                  /* size = 0x68 */

struct _mips2c_stack_TransitionWipe3_Init {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_TransitionWipe3_IsDone {};     /* size 0x0 */

struct _mips2c_stack_TransitionWipe3_SetColor {};   /* size 0x0 */

struct _mips2c_stack_TransitionWipe3_SetEnvColor {}; /* size 0x0 */

struct _mips2c_stack_TransitionWipe3_SetType {};    /* size 0x0 */

struct _mips2c_stack_TransitionWipe3_Start {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_TransitionWipe3_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AC68B4 {};              /* size 0x0 */

? guScale(void *, f32, f32, f32);                   /* extern */
void func_80AC68B4(void *arg0, f32 arg1);           /* static */
static ? D_80AC8280;                                /* unable to generate initializer */
static ? D_80AC8350;                                /* unable to generate initializer */

void TransitionWipe3_Start(void *thisx) {
    u8 temp_v0;

    thisx->unk18 = 0;
    thisx->unk1C = (s32) *(&D_80AC8350 + ((thisx->unk17 & 7) * 4));
    if (thisx->unk16 == 0) {
        thisx->unk10 = 0x14;
    } else {
        thisx->unk10 = 0xA;
    }
    temp_v0 = thisx->unk15;
    if (temp_v0 == 0) {
        thisx->unk0 = 0xFF;
    } else if (temp_v0 == 1) {
        thisx->unk0 = -1;
    } else {
        thisx->unk0 = 0xA0A0A0FF;
    }
    if (thisx->unk14 != 0) {
        thisx->unkC = 0;
    } else {
        thisx->unkC = 0x1F4;
        if (thisx->unk17 == 2) {
            func_8019F128(0x5804U);
        }
    }
    guPerspective(thisx + 0x20, thisx + 0x1A, 60.0f, 1.3333334f, 10.0f, 12800.0f, 1.0f);
    guLookAt(thisx + 0x60, 0.0f, 0.0f, 400.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
}

void *TransitionWipe3_Init(void *thisx) {
    bzero(thisx, 0x120);
    return thisx;
}

void TransitionWipe3_Destroy(void *thisx) {

}

void func_80AC68B4(void *arg0, f32 arg1) {
    arg0->unkC = (s32) (500.0f * arg1);
}

void TransitionWipe3_Update(void *thisx, s32 updateRate) {
    s32 temp_t1;
    s32 temp_t9;
    s32 temp_v0;
    s32 phi_v0;

    if (thisx->unk14 != 0) {
        temp_v0 = thisx->unkC;
        phi_v0 = temp_v0;
        if ((temp_v0 == 0) && (thisx->unk17 == 2)) {
            thisx = thisx;
            func_8019F128(0x5803U);
            phi_v0 = thisx->unkC;
        }
        temp_t1 = phi_v0 + ((s32) (thisx->unk10 * 3) / updateRate);
        thisx->unkC = temp_t1;
        if (temp_t1 >= 0x1F4) {
            thisx->unkC = 0x1F4;
            thisx->unk18 = 1;
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    temp_t9 = thisx->unkC - ((s32) (thisx->unk10 * 3) / updateRate);
    thisx->unkC = temp_t9;
    if (temp_t9 <= 0) {
        thisx->unkC = 0;
        thisx->unk18 = 1;
    }
}

void TransitionWipe3_Draw(void *thisx, Gfx **gfxP) {
    Gfx *sp64;
    void *sp60;
    Gfx **temp_a0;
    Gfx *temp_t1;
    Gfx *temp_t1_2;
    Gfx *temp_t2;
    Gfx *temp_t3;
    Gfx *temp_t3_2;
    Gfx *temp_t5;
    Gfx *temp_t6;
    Gfx *temp_t7;
    Gfx *temp_t7_2;
    Gfx *temp_t9;
    Gfx *temp_t9_2;
    Gfx *temp_v0_2;
    u8 temp_v0;

    temp_a0 = &sp64;
    sp64 = *gfxP;
    temp_v0 = thisx->unk19;
    sp60 = thisx + (temp_v0 << 6) + 0xA0;
    thisx->unk19 = (u8) (temp_v0 ^ 1);
    temp_t2 = sp64;
    sp64 = temp_t2 + 8;
    temp_t2->words.w1 = 0;
    temp_t2->words.w0 = 0xE7000000;
    temp_v0_2 = Gfx_BranchTexScroll(temp_a0, thisx->unk8, thisx->unkC, 0x10, 0x40);
    temp_t6 = sp64;
    sp64 = temp_t6 + 8;
    temp_t6->words.w1 = (u32) temp_v0_2;
    temp_t6->words.w0 = 0xDB060024;
    temp_t9 = sp64;
    sp64 = temp_t9 + 8;
    temp_t9->words.w0 = 0xDB060020;
    temp_t9->words.w1 = thisx->unk1C;
    temp_t3 = sp64;
    sp64 = temp_t3 + 8;
    temp_t3->words.w0 = 0xFA000000;
    temp_t3->words.w1 = thisx->unk0;
    temp_t7 = sp64;
    sp64 = temp_t7 + 8;
    temp_t7->words.w0 = 0xFB000000;
    temp_t7->words.w1 = thisx->unk0;
    temp_t1 = sp64;
    sp64 = temp_t1 + 8;
    temp_t1->words.w1 = (u32) (thisx + 0x20);
    temp_t1->words.w0 = 0xDA380007;
    temp_t5 = sp64;
    sp64 = temp_t5 + 8;
    temp_t5->words.w0 = 0xDB0E0000;
    temp_t5->words.w1 = (u32) thisx->unk1A;
    temp_t9_2 = sp64;
    sp64 = temp_t9_2 + 8;
    temp_t9_2->words.w1 = (u32) (thisx + 0x60);
    temp_t9_2->words.w0 = 0xDA380005;
    if (14.8f != 1.0f) {
        guScale(sp60, 14.8f, 14.8f, 1.0f);
        temp_t3_2 = sp64;
        sp64 = temp_t3_2 + 8;
        temp_t3_2->words.w0 = 0xDA380003;
        temp_t3_2->words.w1 = (u32) sp60;
    }
    temp_t7_2 = sp64;
    sp64 = temp_t7_2 + 8;
    temp_t7_2->words.w0 = 0xDE000000;
    temp_t7_2->words.w1 = (u32) &D_80AC8280;
    temp_t1_2 = sp64;
    sp64 = temp_t1_2 + 8;
    temp_t1_2->words.w1 = 0;
    temp_t1_2->words.w0 = 0xE7000000;
    *gfxP = sp64;
}

s32 TransitionWipe3_IsDone(void *thisx) {
    return (s32) thisx->unk18;
}

void TransitionWipe3_SetType(void *thisx, s32 type) {
    if ((type & 0x80) != 0) {
        thisx->unk16 = (s8) (type & 1);
        thisx->unk17 = (s8) ((type >> 1) & 7);
        thisx->unk15 = (s8) ((type >> 4) & 3);
        return;
    }
    if (type == 1) {
        thisx->unk14 = 1;
        return;
    }
    thisx->unk14 = 0;
}

void TransitionWipe3_SetColor(void *thisx, u32 color) {
    *thisx = color;
}

void TransitionWipe3_SetEnvColor(void *thisx, u32 color) {
    thisx->unk4 = color;
}
