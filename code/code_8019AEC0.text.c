

void func_8019AEC0(void *param_1, void *param_2) {
    void *temp_a1;
    void *phi_a1;
    void *phi_a0;

    phi_a1 = param_2;
    phi_a0 = param_1;
    do {
        temp_a1 = phi_a1 + 0x10;
        phi_a0->unk0 = (s32) phi_a1->unk0;
        phi_a0->unk4 = (s32) phi_a1->unk4;
        phi_a0->unk8 = (s32) phi_a1->unk8;
        phi_a0->unkC = (s32) phi_a1->unkC;
        phi_a1 = temp_a1;
        phi_a0 += 0x10;
    } while (temp_a1 != (param_2 + 0x20));
}

