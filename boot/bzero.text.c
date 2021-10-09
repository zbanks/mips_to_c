

void bzero(void *begin, s32 length) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *phi_a0;
    void *phi_a0_2;
    void *phi_a0_3;
    void *phi_a0_4;
    s32 phi_a1;
    void *phi_a0_5;
    void *phi_a0_6;

    phi_a0_2 = begin;
    phi_a1 = length;
    phi_a0_6 = begin;
    if (length >= 0xC) {
        temp_v1 = -(s32) begin & 3;
        temp_a1 = length - temp_v1;
        if (temp_v1 != 0) {
            *begin = (unaligned s32) 0;
            phi_a0_2 = begin + temp_v1;
        }
        temp_a3 = temp_a1 & ~0x1F;
        temp_a1_2 = temp_a1 - temp_a3;
        phi_a0 = phi_a0_2;
        phi_a0_4 = phi_a0_2;
        if (temp_a3 != 0) {
            do {
                temp_a0 = phi_a0 + 0x20;
                temp_a0->unk-20 = 0;
                temp_a0->unk-1C = 0;
                temp_a0->unk-18 = 0;
                temp_a0->unk-14 = 0;
                temp_a0->unk-10 = 0;
                temp_a0->unk-C = 0;
                temp_a0->unk-8 = 0;
                temp_a0->unk-4 = 0;
                phi_a0 = temp_a0;
                phi_a0_4 = temp_a0;
            } while (temp_a0 != (temp_a3 + phi_a0_2));
        }
        temp_a3_2 = temp_a1_2 & ~3;
        phi_a0_3 = phi_a0_4;
        phi_a1 = temp_a1_2 - temp_a3_2;
        phi_a0_6 = phi_a0_4;
        if (temp_a3_2 != 0) {
            do {
                temp_a0_2 = phi_a0_3 + 4;
                temp_a0_2->unk-4 = 0;
                phi_a0_3 = temp_a0_2;
                phi_a0_6 = temp_a0_2;
            } while (temp_a0_2 != (temp_a3_2 + phi_a0_4));
        }
    }
    phi_a0_5 = phi_a0_6;
    if (phi_a1 > 0) {
        do {
            temp_a0_3 = phi_a0_5 + 1;
            temp_a0_3->unk-1 = 0;
            phi_a0_5 = temp_a0_3;
        } while (temp_a0_3 != (phi_a1 + phi_a0_6));
    }
}

