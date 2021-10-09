f32 func_80122524(void *arg0, void *arg1, s16 arg2, s16 *arg3); /* static */
void func_801225CC(void *arg0, void *arg1);         /* static */



s32 func_801224E0(s32 param_1, s16 param_2, s16 param_3) {
    s32 phi_v1;

    phi_v1 = 0;
    if (param_2 != param_3) {
        phi_v1 = param_1->unk18864 + (param_2 * 8);
    }
    return phi_v1;
}

f32 func_80122524(void *arg0, void *arg1, s16 arg2, s16 *arg3) {
    f32 sp1C;
    f32 sp18;
    f32 temp_f12;
    f32 temp_f14;
    void *temp_v1;

    if (arg1 == 0) {
        return -1.0f;
    }
    temp_v1 = (arg2 * 6) + Lib_SegmentedToVirtual(arg1->unk4);
    temp_f12 = (f32) temp_v1->unk0 - arg0->unk24;
    temp_f14 = (f32) temp_v1->unk4 - arg0->unk2C;
    sp1C = temp_f12;
    sp18 = temp_f14;
    *arg3 = Math_Atan2S(temp_f12, temp_f14);
    return (temp_f12 * temp_f12) + (temp_f14 * temp_f14);
}

void func_801225CC(void *arg0, void *arg1) {
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_2;

    if (arg0 != 0) {
        temp_a0 = arg0->unk4;
        arg0 = arg0;
        temp_v1 = Lib_SegmentedToVirtual(temp_a0) + (arg0->unk0 * 6);
        temp_v1_2 = temp_v1 - 6;
        arg1->unk0 = (f32) temp_v1->unk-6;
        arg1->unk4 = (f32) temp_v1_2->unk2;
        arg1->unk8 = (f32) temp_v1_2->unk4;
    }
}

