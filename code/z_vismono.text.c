struct _mips2c_stack_VisMono_Draw {
    /* 0x00 */ char pad0[0x54];
    /* 0x54 */ void *sp54;                          /* inferred */
    /* 0x58 */ void *sp58;                          /* inferred */
    /* 0x5C */ Gfx *sp5C;                           /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_801418B0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80141900 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80141924 {};              /* size 0x0 */

struct _mips2c_stack_func_80141C34 {};              /* size 0x0 */

struct _mips2c_stack_func_8014204C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void func_80141924(void *arg0);                     /* static */
void *func_80141C34(void *arg0);                    /* static */
void func_8014204C(void *arg0);                     /* static */
extern ? D_0F000000;

void func_801418B0(void *arg0) {
    bzero(arg0, 0x18);
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0xFF;
    arg0->unk9 = 0xFF;
    arg0->unkA = 0xFF;
    arg0->unkB = 0xFF;
    arg0->unkC = 0;
    arg0->unkD = 0;
    arg0->unkE = 0;
    arg0->unkF = 0;
}

void func_80141900(void *arg0) {
    SystemArena_Free(arg0->unk14);
}

void func_80141924(void *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v0;
    void *temp_v1;
    s32 phi_v0;
    void *phi_v1;

    phi_v0 = 0;
    phi_v1 = arg0;
    do {
        temp_a0 = phi_v0 + 1;
        temp_a1 = phi_v0 + 2;
        temp_a2 = phi_v0 + 3;
        temp_v0 = phi_v0 + 4;
        temp_v1 = phi_v1 + 8;
        temp_v1->unk-8 = (s16) ((((s32) (((((phi_v0 >> 3) & 0x1F) * 2) + (((phi_v0 * 4) & 0x1F) * 4)) * 0xFF) / 0xD9) << 8) | ((s32) (((((phi_v0 >> 6) & 0x1F) * 4) + ((phi_v0 >> 1) & 0x1F)) * 0xFF) / 0xD9));
        temp_v1->unk-6 = (s16) ((((s32) (((((temp_a0 >> 3) & 0x1F) * 2) + (((temp_a0 * 4) & 0x1F) * 4)) * 0xFF) / 0xD9) << 8) | ((s32) (((((temp_a0 >> 6) & 0x1F) * 4) + ((temp_a0 >> 1) & 0x1F)) * 0xFF) / 0xD9));
        temp_v1->unk-4 = (s16) ((((s32) (((((temp_a1 >> 3) & 0x1F) * 2) + (((temp_a1 * 4) & 0x1F) * 4)) * 0xFF) / 0xD9) << 8) | ((s32) (((((temp_a1 >> 6) & 0x1F) * 4) + ((temp_a1 >> 1) & 0x1F)) * 0xFF) / 0xD9));
        temp_v1->unk-2 = (s16) ((((s32) (((((temp_a2 >> 3) & 0x1F) * 2) + (((temp_a2 * 4) & 0x1F) * 4)) * 0xFF) / 0xD9) << 8) | ((s32) (((((temp_a2 >> 6) & 0x1F) * 4) + ((temp_a2 >> 1) & 0x1F)) * 0xFF) / 0xD9));
        phi_v0 = temp_v0;
        phi_v1 = temp_v1;
    } while (temp_v0 != 0x100);
}

void *func_80141C34(void *arg0) {
    s32 temp_v1;
    void *temp_a0;
    void *temp_a0_10;
    void *temp_a0_11;
    void *temp_a0_12;
    void *temp_a0_13;
    void *temp_a0_14;
    void *temp_a0_15;
    void *temp_a0_16;
    void *temp_a0_17;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    void *phi_a0;
    ? *phi_a3;
    s32 phi_a1;

    arg0->unk0 = 0xE7000000;
    arg0->unk4 = 0;
    temp_a0_2 = arg0 + 8;
    temp_a0_2->unk0 = 0xEF90CCF0;
    temp_a0_2->unk4 = 0xC184344;
    temp_a0_3 = temp_a0_2 + 8;
    temp_a0_3->unk0 = 0xFC64FE60;
    temp_a0_3->unk4 = 0xF5FCFD7B;
    phi_a0 = temp_a0_3 + 8;
    phi_a3 = &D_0F000000;
    phi_a1 = 0;
    do {
        phi_a0->unk0 = 0xFD500000;
        phi_a0->unk4 = phi_a3;
        temp_a0_4 = phi_a0 + 8;
        temp_a0_4->unk0 = 0xF5500000;
        temp_a0_4->unk4 = 0x7080200;
        temp_a0_5 = temp_a0_4 + 8;
        temp_a0_5->unk0 = 0xE6000000;
        temp_a0_5->unk4 = 0;
        temp_a0_6 = temp_a0_5 + 8;
        temp_a0_6->unk4 = (s32) (((0x3BF & 0xFFF) << 0xC) | 0x7000000 | 0x1A);
        temp_a0_6->unk0 = 0xF3000000;
        temp_a0_7 = temp_a0_6 + 8;
        temp_a0_7->unk0 = 0xE7000000;
        temp_a0_7->unk4 = 0;
        temp_a0_8 = temp_a0_7 + 8;
        temp_a0_8->unk0 = 0xF548A000;
        temp_a0_8->unk4 = 0x80200;
        temp_a0_9 = temp_a0_8 + 8;
        temp_a0_9->unk0 = 0xF2000000;
        temp_a0_9->unk4 = 0x9FC008;
        temp_a0_10 = temp_a0_9 + 8;
        temp_a0_10->unk0 = 0xF548A000;
        temp_a0_10->unk4 = 0x80200;
        temp_a0_11 = temp_a0_10 + 8;
        temp_a0_11->unk0 = 0xF2008000;
        temp_a0_11->unk4 = 0xA04008;
        temp_a0_12 = temp_a0_11 + 8;
        temp_a0_12->unk4 = 0x1180200;
        temp_a0_12->unk0 = 0xF548A000;
        temp_a0_13 = temp_a0_12 + 8;
        temp_a0_13->unk0 = 0xF2004000;
        temp_a0_13->unk4 = 0x1A00008;
        temp_a0_14 = temp_a0_13 + 8;
        temp_v1 = phi_a1 + 3;
        temp_a0_14->unk0 = (s32) (((temp_v1 * 4) & 0xFFF) | 0xE4500000);
        temp_a0_14->unk4 = (s32) ((phi_a1 * 4) & 0xFFF);
        temp_a0_15 = temp_a0_14 + 8;
        temp_a0_15->unk4 = 0x400000;
        temp_a0_15->unk0 = 0xE1000000;
        temp_a0_16 = temp_a0_15 + 8;
        temp_a0_16->unk0 = 0xF1000000;
        temp_a0_16->unk4 = 0x8000400;
        temp_a0_17 = temp_a0_16 + 8;
        phi_a0 = temp_a0_17;
        phi_a3 += 0x780;
        phi_a1 = temp_v1;
    } while (temp_v1 < 0xEE);
    temp_a0_17->unk0 = 0xE7000000;
    temp_a0_17->unk4 = 0;
    temp_a0 = temp_a0_17 + 8;
    temp_a0->unk0 = 0xDF000000;
    temp_a0->unk4 = 0;
    return temp_a0 + 8;
}

void VisMono_Draw(void *arg0, Gfx **gfx, u32 arg2) {
    Gfx *sp5C;
    void *sp58;
    void *sp54;
    Gfx *temp_t0;
    Gfx *temp_t1;
    Gfx *temp_t1_2;
    Gfx *temp_t3;
    Gfx *temp_t3_2;
    Gfx *temp_t4;
    Gfx *temp_t5;
    Gfx *temp_t6;
    Gfx *temp_t7;
    Gfx *temp_t7_2;
    Gfx *temp_t8;
    Gfx *temp_t9;
    u32 temp_v0_3;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_4;
    void *phi_a2;
    u32 phi_v1;

    sp5C = *gfx;
    temp_v0 = arg0->unk10;
    if (temp_v0 != 0) {
        sp58 = temp_v0;
    } else {
        arg0 = arg0;
        temp_v0_2 = Graph_DlistAlloc(&sp5C, 0x200U);
        sp58 = temp_v0_2;
        func_80141924(temp_v0_2);
    }
    temp_v0_3 = arg0->unk14;
    phi_a2 = arg0;
    if (temp_v0_3 != 0) {
        phi_v1 = temp_v0_3;
    } else {
        arg0 = arg0;
        temp_v0_4 = Graph_DlistAlloc(&sp5C, 0x2338U);
        temp_a0 = temp_v0_4;
        sp54 = temp_v0_4;
        func_80141C34(temp_a0);
        phi_a2 = arg0;
        phi_v1 = (u32) sp54;
    }
    temp_t8 = sp5C;
    sp5C = temp_t8 + 8;
    temp_t8->words.w1 = 0;
    temp_t8->words.w0 = 0xE7000000;
    if (phi_a2->unk4 == 1) {
        temp_t1 = sp5C;
        sp5C = temp_t1 + 8;
        temp_t1->words.w0 = 0xDE000000;
        temp_t1->words.w1 = (u32) &D_0E0001C8;
    }
    temp_t5 = sp5C;
    sp5C = temp_t5 + 8;
    temp_t5->words.w0 = 0xFA000000;
    temp_t5->words.w1 = phi_a2->unk8;
    temp_t9 = sp5C;
    sp5C = temp_t9 + 8;
    temp_t9->words.w0 = 0xFB000000;
    temp_t9->words.w1 = phi_a2->unkC;
    temp_t3 = sp5C;
    sp5C = temp_t3 + 8;
    temp_t3->words.w0 = 0xFD100000;
    temp_t3->words.w1 = (u32) sp58;
    temp_t7 = sp5C;
    sp5C = temp_t7 + 8;
    temp_t7->words.w1 = 0;
    temp_t7->words.w0 = 0xE8000000;
    temp_t0 = sp5C;
    sp5C = temp_t0 + 8;
    temp_t0->words.w1 = 0x7000000;
    temp_t0->words.w0 = 0xF5000100;
    temp_t4 = sp5C;
    sp5C = temp_t4 + 8;
    temp_t4->words.w1 = 0;
    temp_t4->words.w0 = 0xE6000000;
    temp_t7_2 = sp5C;
    sp5C = temp_t7_2 + 8;
    temp_t7_2->words.w1 = 0x73FC000;
    temp_t7_2->words.w0 = 0xF0000000;
    temp_t1_2 = sp5C;
    sp5C = temp_t1_2 + 8;
    temp_t1_2->words.w1 = 0;
    temp_t1_2->words.w0 = 0xE7000000;
    temp_t3_2 = sp5C;
    sp5C = temp_t3_2 + 8;
    temp_t3_2->words.w1 = phi_v1;
    temp_t3_2->words.w0 = 0xDE000000;
    temp_t6 = sp5C;
    sp5C = temp_t6 + 8;
    temp_t6->words.w1 = 0;
    temp_t6->words.w0 = 0xE7000000;
    *gfx = sp5C;
}

void func_8014204C(void *arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0;
    void *temp_v0_2;

    if (arg0->unk10 == 0) {
        temp_v0 = SystemArena_Malloc(0x200U);
        temp_a0 = temp_v0;
        arg0->unk10 = temp_v0;
        func_80141924(temp_a0);
    }
    if (arg0->unk14 == 0) {
        temp_v0_2 = SystemArena_Malloc(0x2338U);
        temp_a0_2 = temp_v0_2;
        arg0->unk14 = temp_v0_2;
        func_80141C34(temp_a0_2);
    }
}
