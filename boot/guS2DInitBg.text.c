

void guS2DInitBg(void *arg0) {
    s16 temp_lo;
    s16 temp_t0;
    s16 temp_t3;
    s16 temp_t4;
    s16 temp_t5;
    s16 temp_t8;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_t2;
    s32 temp_t9;
    u32 temp_lo_2;
    s32 phi_v0;

    phi_v0 = 0x200;
    if (arg0->unk16 == 2) {
        phi_v0 = 0x100;
    }
    temp_t9 = (6 - arg0->unk17) & 0xFFFF;
    if (arg0->unk14 == 0x33) {
        temp_t2 = (s32) arg0->unk2 >> temp_t9;
        temp_a1 = temp_t2 & 0xFFFF;
        temp_t4 = (phi_v0 / temp_a1) * 4;
        temp_t5 = temp_a1 * 2;
        temp_lo = (temp_t4 & 0xFFFF) * (temp_t5 & 0xFFFF);
        arg0->unk1C = (s16) temp_t2;
        arg0->unk1E = temp_t4;
        arg0->unk24 = temp_t5;
        arg0->unk26 = temp_lo;
        arg0->unk20 = (s16) (((s32) (temp_lo & 0xFFFF) >> 1) - 1);
        arg0->unk22 = (s16) ((0x7FF / temp_a1) + 1);
        return;
    }
    temp_t8 = ((s32) arg0->unk6 >> temp_t9) + 3;
    temp_t0 = (phi_v0 / (s32) (temp_t8 & 0xFFFF)) * 4;
    temp_t3 = ((s32) arg0->unk2 >> temp_t9) * 2;
    temp_a2 = temp_t0 & 0xFFFF;
    temp_lo_2 = temp_a2 * (temp_t3 & 0xFFFF);
    arg0->unk1C = temp_t8;
    arg0->unk1E = temp_t0;
    arg0->unk24 = temp_t3;
    arg0->unk26 = (s16) (temp_lo_2 >> 0x10);
    arg0->unk20 = (s16) (temp_lo_2 & 0xFFFF);
    arg0->unk22 = (s16) (temp_a2 - 1);
}

