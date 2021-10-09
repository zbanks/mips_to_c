struct _mips2c_stack_func_800F23E0 {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ f32 sp4;                             /* inferred */
    /* 0x08 */ char pad_8[0x30];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800F2478 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

f32 func_800F23E0(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32); /* static */
f32 func_800F2478(f32 arg0, void *arg1, s32 arg2);  /* static */

f32 func_800F23E0(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 sp4;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;

    temp_f2 = arg0 * arg0;
    temp_f16 = temp_f2 * arg0;
    temp_f18 = 2.0f * temp_f16;
    sp4 = temp_f2 * 3.0f;
    return (((temp_f18 - sp4) + 1.0f) * arg2) + ((sp4 - temp_f18) * arg3) + (((temp_f16 - (2.0f * temp_f2)) + arg0) * arg4 * arg1) + ((temp_f16 - temp_f2) * arg5 * arg1);
}

f32 func_800F2478(f32 arg0, void *arg1, s32 arg2) {
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f2;
    s32 temp_a0;
    u16 temp_a2;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *phi_v0;
    s32 phi_v1;

    if (arg0 <= (f32) arg1->unk_2) {
        return arg1->unk_8;
    }
    temp_v0 = arg1 + (arg2 * 0xC);
    phi_v1 = 0;
    if ((f32) temp_v0->unk_-A <= arg0) {
        return temp_v0->unk_-4;
    }
    phi_v0 = arg1;
loop_5:
    if (!(arg0 < (f32) phi_v0->unk_E)) {
        phi_v0 += 0xC;
        phi_v1 += 1;
        goto loop_5;
    }
    temp_a2 = phi_v0->unk_0;
    if ((temp_a2 & 1) != 0) {
        return phi_v0->unk_8;
    }
    temp_a0 = phi_v1 + 1;
    if ((temp_a2 & 2) != 0) {
        temp_f2 = phi_v0->unk_8;
        temp_f16_2 = (f32) phi_v0->unk_2;
        temp_v1_2 = arg1 + (temp_a0 * 0xC);
        return ((temp_v1_2->unk_8 - temp_f2) * ((arg0 - temp_f16_2) / ((f32) temp_v1_2->unk_2 - temp_f16_2))) + temp_f2;
    }
    temp_f16 = (f32) phi_v0->unk_2;
    temp_v1 = arg1 + (temp_a0 * 0xC);
    temp_f0 = (f32) temp_v1->unk_2 - temp_f16;
    return func_800F23E0((arg0 - temp_f16) / temp_f0, temp_f0 * 0.033333335f, (bitwise f32) temp_a0, phi_v0->unk_8, temp_v1->unk_8, (f32) phi_v0->unk_6, (f32) temp_v1->unk_4);
}
