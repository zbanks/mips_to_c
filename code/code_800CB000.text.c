s32 func_800C56E0(f32, f32, f32 *, f32 *, f32 *, f32 *, f32 *, s32, s32, ? *, void *, ? *, void *, f32); /* extern */



? func_800CB000(s32 arg0, void *arg1, s16 arg2, s16 arg3, s16 arg4) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp6C;
    f32 sp68;
    ? sp60;
    f32 sp5C;
    f32 sp4C;
    f32 sp48;
    f32 *sp44;
    f32 *temp_a0;
    f32 *temp_a1;
    f32 *temp_a1_2;
    f32 *temp_a2;
    f32 *temp_a2_2;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    f32 phi_f16;

    sp68 = Math_SinS(arg1->unk150);
    temp_f14 = Math_CosS(arg1->unk150);
    if (arg1->unk148 >= 0.0f) {
        phi_f16 = 1.0f;
    } else {
        phi_f16 = -1.0f;
    }
    temp_f0 = (f32) arg2 - 0.1f;
    temp_a0 = arg0 + 0x830;
    temp_a1 = &sp84;
    temp_f10 = arg1->unk24 + (temp_f0 * temp_f14);
    temp_a2 = &sp78;
    sp84 = temp_f10;
    sp88 = arg1->unk28 + (f32) arg4;
    sp44 = temp_a0;
    sp8C = arg1->unk2C - (temp_f0 * sp68);
    temp_f10_2 = temp_f10;
    temp_f2 = phi_f16 * ((f32) arg3 - 0.1f);
    sp7C = sp88;
    temp_f18 = temp_f2 * sp68;
    sp4C = temp_f18;
    sp78 = temp_f18 + temp_f10_2;
    sp48 = temp_f2 * temp_f14;
    sp80 = sp48 + sp8C;
    if (func_800C56E0(sp68, temp_f14, temp_a0, temp_a1, temp_a2, &sp6C, &sp5C, 1, 0, NULL, (void *)1, &sp60, arg1, 0.0f) != 0) {
        return 0;
    }
    temp_f4 = (2.0f * arg1->unk24) - sp84;
    temp_a1_2 = &sp84;
    temp_a2_2 = &sp78;
    sp84 = temp_f4;
    temp_f6 = (2.0f * arg1->unk2C) - sp8C;
    sp8C = temp_f6;
    sp78 = temp_f18 + temp_f4;
    sp80 = sp48 + temp_f6;
    if (func_800C56E0((bitwise f32) temp_a0, (bitwise f32) temp_a1_2, temp_a2_2, &sp6C, &sp5C, (f32 *)1, NULL, 0, 1, &sp60, arg1, NULL) != 0) {
        return 0;
    }
    return 1;
}

