s16 D_801FBBCC;
s16 D_801FBBCE;



void func_801420C0(void *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0xFF;
    arg0->unk9 = 0xFF;
    arg0->unkA = 0xFF;
    arg0->unkB = 0xFF;
    arg0->unkC = 0;
    arg0->unkD = 0;
    arg0->unkE = 0;
    arg0->unkF = 0xFF;
}

void func_801420F4(void *arg0) {

}

void func_80142100(void *arg0, Gfx **gfx, u32 arg2) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_lo;
    s32 temp_t1;
    void *temp_v1_10;
    void *temp_v1_11;
    void *temp_v1_12;
    void *temp_v1_13;
    void *temp_v1_14;
    void *temp_v1_15;
    void *temp_v1_16;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;
    Gfx *phi_v1;
    s32 phi_v0;
    void *phi_v1_2;
    s32 phi_a3;
    void *phi_v1_3;

    temp_lo = 0x1000 / (s32) (D_801FBBCC * 2);
    temp_v1 = *gfx;
    phi_v0 = 0;
    if (arg0->unk0 == 0) {
        phi_v0 = 3;
    }
    if (arg2 != 0) {
        temp_v1->words.w0 = 0xE7000000;
        temp_v1_2 = temp_v1 + 8;
        temp_v1->words.w1 = 0;
        phi_v1 = temp_v1_2;
        if (arg0->unk4 == 1) {
            temp_v1_2->words.w0 = 0xDE000000;
            temp_v1_2->words.w1 = (u32) &D_0E0001C8;
            phi_v1 = temp_v1_2 + 8;
        }
        phi_v1->words.w1 = 0xF0A4004;
        phi_v1->words.w0 = 0xEF000C30;
        temp_v1_3 = phi_v1 + 8;
        temp_v1_3->unk0 = 0xFC30B261;
        temp_v1_3->unk4 = 0x5566DB6D;
        temp_v1_4 = temp_v1_3 + 8;
        temp_v1_4->unk0 = 0xFA000000;
        temp_v1_5 = temp_v1_4 + 8;
        temp_v1_4->unk4 = (s32) arg0->unk8;
        temp_v1_5->unk0 = 0xFB000000;
        temp_v1_6 = temp_v1_5 + 8;
        temp_v1_5->unk4 = (s32) arg0->unkC;
        temp_a0 = (phi_v0 & 7) << 0x15;
        phi_v1_2 = temp_v1_6;
        phi_a3 = 0;
        phi_v1_3 = temp_v1_6;
        if (((D_801FBBCE - temp_lo) + 1) > 0) {
            temp_t1 = temp_a0 | 0xF5000000 | 0x100000;
            do {
                phi_v1_2->unk0 = (s32) (temp_a0 | 0xFD000000 | 0x100000 | ((D_801FBBCC - 1) & 0xFFF));
                temp_a0_2 = (phi_a3 * 4) & 0xFFF;
                temp_v1_7 = phi_v1_2 + 8;
                phi_v1_2->unk4 = arg2;
                temp_v1_7->unk4 = 0x7080200;
                temp_v1_7->unk0 = (s32) (temp_t1 | ((((s32) ((D_801FBBCC * 2) + 7) >> 3) & 0x1FF) << 9));
                temp_v1_8 = temp_v1_7 + 8;
                temp_v1_8->unk0 = 0xE6000000;
                temp_v1_8->unk4 = 0;
                temp_v1_9 = temp_v1_8 + 8;
                temp_v1_9->unk0 = (s32) (temp_a0_2 | 0xF4000000);
                temp_a2 = phi_a3 + temp_lo;
                temp_a1 = ((temp_a2 - 1) * 4) & 0xFFF;
                temp_v1_9->unk4 = (s32) (((((D_801FBBCC - 1) * 4) & 0xFFF) << 0xC) | 0x7000000 | temp_a1);
                temp_v1_10 = temp_v1_9 + 8;
                temp_v1_10->unk0 = 0xE7000000;
                temp_v1_10->unk4 = 0;
                temp_v1_11 = temp_v1_10 + 8;
                temp_v1_12 = temp_v1_11 + 8;
                temp_v1_11->unk0 = (s32) (temp_t1 | ((((s32) ((D_801FBBCC * 2) + 7) >> 3) & 0x1FF) << 9));
                temp_v1_11->unk4 = 0x80200;
                temp_v1_12->unk0 = (s32) (temp_a0_2 | 0xF2000000);
                temp_v1_13 = temp_v1_12 + 8;
                temp_v1_12->unk4 = (s32) (((((D_801FBBCC - 1) * 4) & 0xFFF) << 0xC) | temp_a1);
                temp_v1_13->unk4 = temp_a0_2;
                temp_v1_13->unk0 = (s32) ((((D_801FBBCC * 4) & 0xFFF) << 0xC) | 0xE4000000 | ((temp_a2 * 4) & 0xFFF));
                temp_v1_14 = temp_v1_13 + 8;
                temp_v1_14->unk0 = 0xE1000000;
                temp_v1_14->unk4 = (s32) ((phi_a3 << 5) & 0xFFFF);
                temp_v1_15 = temp_v1_14 + 8;
                temp_v1_15->unk0 = 0xF1000000;
                temp_v1_15->unk4 = 0x4000400;
                temp_v1_16 = temp_v1_15 + 8;
                phi_v1_2 = temp_v1_16;
                phi_a3 = temp_a2;
                phi_v1_3 = temp_v1_16;
            } while ((D_801FBBCE - temp_lo) >= temp_a2);
        }
        phi_v1_3->unk0 = 0xE7000000;
        phi_v1_3->unk4 = 0;
        *gfx = phi_v1_3 + 8;
    }
}

