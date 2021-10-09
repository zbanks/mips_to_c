CRASHED

struct _mips2c_stack_Rand_ZeroFloat {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_cos_rad {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80179300 {};              /* size 0x0 */

struct _mips2c_stack_func_80179400 {};              /* size 0x0 */

struct _mips2c_stack_randPlusMinusPoint5Scaled {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_sin_rad {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

static ? D_801D1570;                                /* unable to generate initializer */

f32 func_80179300(f32 n) {
    s32 temp_a1;
    s32 temp_f4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;
    f32 phi_v0_4;
    s32 phi_v0_5;

    temp_f4 = (s32) n;
    phi_v0 = temp_f4;
    phi_v0_2 = temp_f4;
    phi_v0_4 = (bitwise f32) temp_f4;
    if (temp_f4 >= 2) {
        temp_a1 = -(s32) ((temp_f4 - 1) & 3);
        if (temp_a1 != 0) {
            do {
                temp_v0 = phi_v0 - 1;
                phi_v0 = temp_v0;
                phi_v0_2 = temp_v0;
                phi_v0_4 = (bitwise f32) temp_v0;
            } while ((temp_a1 + temp_f4) != temp_v0);
            if (temp_v0 != 1) {
                goto block_4;
            }
        } else {
block_4:
            phi_v0_3 = phi_v0_2;
            phi_v0_5 = phi_v0_2;
            if (phi_v0_2 != 5) {
                do {
                    temp_v0_2 = phi_v0_3 - 4;
                    phi_v0_3 = temp_v0_2;
                    phi_v0_5 = temp_v0_2;
                } while (temp_v0_2 != 5);
            }
            phi_v0_4 = (bitwise f32) (phi_v0_5 - 4);
        }
    }
    return phi_v0_4;
}

f32 func_80179400(s32 n) {
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v0;
    s32 phi_v0_2;
    f32 phi_f2;
    f32 phi_f2_2;
    f32 phi_f2_3;

    if (n >= 0xD) {
        temp_f2 = *(&D_801D1570 + 0x30);
        phi_v0 = 0xD;
        phi_v0_2 = 0xD;
        phi_f2 = temp_f2;
        phi_f2_2 = temp_f2;
        phi_f2_3 = temp_f2;
        if (n >= 0xD) {
            temp_a1 = (n - 0xC) & 3;
            if (temp_a1 != 0) {
                do {
                    temp_v0 = phi_v0 + 1;
                    temp_f2_2 = phi_f2_2 * (f32) phi_v0;
                    phi_v0 = temp_v0;
                    phi_v0_2 = temp_v0;
                    phi_f2 = temp_f2_2;
                    phi_f2_2 = temp_f2_2;
                    phi_f2_3 = temp_f2_2;
                } while ((temp_a1 + 0xD) != temp_v0);
                if ((n + 1) != temp_v0) {
                    goto loop_5;
                }
            } else {
                do {
loop_5:
                    temp_v0_2 = phi_v0_2 + 4;
                    temp_f2_3 = phi_f2_3 * (f32) phi_v0_2 * (f32) (phi_v0_2 + 1) * (f32) (phi_v0_2 + 2) * (f32) (phi_v0_2 + 3);
                    phi_v0_2 = temp_v0_2;
                    phi_f2 = temp_f2_3;
                    phi_f2_3 = temp_f2_3;
                } while ((n + 1) != temp_v0_2);
            }
        }
    } else {
        phi_f2 = *(&D_801D1570 + (n * 4));
    }
    return phi_f2;
}

/*
Failed to decompile function pow_int:

Label L801794D4_before refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).

This label was auto-generated as the target for a branch-likely
instruction (e.g. beql); you can also try to turn that into a non-likely
branch if that's equivalent in this context, i.e., if it's okay to
execute its delay slot unconditionally.
*/

f32 sin_rad(f32 rad) {
    return (f32) sins((s16) (s32) (rad * 10430.378f) & 0xFFFF) * 0.00003051851f;
}

f32 cos_rad(f32 rad) {
    return (f32) coss((s16) (s32) (rad * 10430.378f) & 0xFFFF) * 0.00003051851f;
}

f32 Rand_ZeroFloat(f32 scale) {
    return Rand_ZeroOne() * scale;
}

f32 randPlusMinusPoint5Scaled(f32 scale) {
    return Rand_Centered() * scale;
}
