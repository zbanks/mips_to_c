

s64 __d_to_ll(f64 d, ? d_lo) {
    MIPS2C_ERROR(unknown instruction: trunc.l.d $f4, $f12);
    return (s64) MIPS2C_ERROR(unknown instruction: dmfc1 $v0, $f4) >> 0x20;
}

s64 __f_to_ll(f32 f) {
    MIPS2C_ERROR(unknown instruction: trunc.l.s $f4, $f12);
    return (s64) MIPS2C_ERROR(unknown instruction: dmfc1 $v0, $f4) >> 0x20;
}

u64 __d_to_ull(f64 d, ? d_lo) {
    s32 temp_v0;
    s64 phi_v0;

    MIPS2C_ERROR(unknown instruction: cvt.l.d $f4, $f12);
    if ((MIPS2C_ERROR(cfc1) & 0x78) != 0) {
        MIPS2C_ERROR(unknown instruction: cvt.l.d $f4, $f4);
        if ((MIPS2C_ERROR(cfc1) & 0x78) == 0) {
            phi_v0 = MIPS2C_ERROR(unknown instruction: dmfc1 $v0, $f4) | (bitwise s32) D_800994C0;
        } else {
            goto block_3;
        }
    } else {
        temp_v0 = MIPS2C_ERROR(unknown instruction: dmfc1 $v0, $f4);
        phi_v0 = (s64) temp_v0;
        if (temp_v0 < 0) {
block_3:
            phi_v0 = -1;
        }
    }
    return (u64) (phi_v0 >> 0x20);
}

u64 __f_to_ull(f32 f) {
    s32 temp_v0;
    s64 phi_v0;

    MIPS2C_ERROR(unknown instruction: cvt.l.s $f4, $f12);
    if ((MIPS2C_ERROR(cfc1) & 0x78) != 0) {
        MIPS2C_ERROR(unknown instruction: cvt.l.s $f4, $f4);
        if ((MIPS2C_ERROR(cfc1) & 0x78) == 0) {
            phi_v0 = MIPS2C_ERROR(unknown instruction: dmfc1 $v0, $f4) | (bitwise s32) D_800994C8;
        } else {
            goto block_3;
        }
    } else {
        temp_v0 = MIPS2C_ERROR(unknown instruction: dmfc1 $v0, $f4);
        phi_v0 = (s64) temp_v0;
        if (temp_v0 < 0) {
block_3:
            phi_v0 = -1;
        }
    }
    return (u64) (phi_v0 >> 0x20);
}

f64 __ll_to_d(s64 l, s64 l_unk4) {
    MIPS2C_ERROR(unknown instruction: dmtc1 $t6, $f4);
    return MIPS2C_ERROR(unknown instruction: cvt.d.l $f0, $f4);
}

f32 __ll_to_f(s64 l, s64 l_unk4) {
    MIPS2C_ERROR(unknown instruction: dmtc1 $t6, $f4);
    return MIPS2C_ERROR(unknown instruction: cvt.s.l $f0, $f4);
}

f64 __ull_to_d(u64 l, u64 l_unk4) {
    f64 temp_f0;
    f64 phi_f0;

    temp_f0 = MIPS2C_ERROR(unknown instruction: cvt.d.l $f0, $f4);
    phi_f0 = temp_f0;
    if (MIPS2C_ERROR(unknown instruction: dmtc1 $t6, $f4) < 0) {
        phi_f0 = temp_f0 + 4294967296.0;
    }
    return phi_f0;
}

f32 __ull_to_f(u64 l, u64 l_unk4) {
    f32 temp_f0;
    f32 phi_f0;

    temp_f0 = MIPS2C_ERROR(unknown instruction: cvt.s.l $f0, $f4);
    phi_f0 = temp_f0;
    if (MIPS2C_ERROR(unknown instruction: dmtc1 $t6, $f4) < 0) {
        phi_f0 = temp_f0 + 4294967296.0f;
    }
    return phi_f0;
}

