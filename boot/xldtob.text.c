CRASHED

struct _mips2c_stack__Genld {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack__Ldunscale {};                 /* size 0x0 */

s16 _Ldunscale(s16 *arg0, void *arg1);              /* static */

/*
Failed to decompile function _Ldtob:

Label L800945BC refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

s16 _Ldunscale(s16 *arg0, void *arg1) {
    s32 temp_t6;
    u16 temp_a2;

    temp_a2 = arg1->unk0;
    temp_t6 = (s32) (temp_a2 & 0x7FF0) >> 4;
    if ((s16) temp_t6 == 0x7FF) {
        *arg0 = 0;
        if (((arg1->unk0 & 0xF) != 0) || (arg1->unk2 != 0) || (arg1->unk4 != 0) || (arg1->unk6 != 0)) {
            return 2;
        }
        return 1;
    }
    if ((s32) (s16) temp_t6 > 0) {
        arg1->unk0 = (u16) ((temp_a2 & 0x800F) | 0x3FF0);
        *arg0 = (s16) temp_t6 - 0x3FE;
        return -1;
    }
    if ((s32) (s16) temp_t6 < 0) {
        return 2;
    }
    *arg0 = 0;
    return 0;
}

void _Genld(_Pft *px, u8 code, u8 *p, s16 nsig, s16 xexp) {
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_t0;
    s16 temp_t0_2;
    s32 temp_t4;
    s32 temp_t4_2;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s8 *temp_s1;
    s32 phi_a3;
    s32 phi_v0;
    void *phi_s1;
    s16 phi_a3_2;
    s32 phi_t0;
    s32 phi_t0_2;
    s8 *phi_s1_2;
    s32 phi_t0_3;
    s8 *phi_s1_3;
    s32 phi_v0_2;
    s32 phi_v1;
    s16 phi_t0_4;
    s32 phi_a3_3;
    s16 phi_a3_4;

    phi_a3 = (s32) nsig;
    phi_s1 = (void *) p;
    if ((s32) nsig <= 0) {
        phi_a3 = 1;
        phi_s1 = (void *) "0";
    }
    phi_a3_3 = phi_a3;
    if ((code == 0x66) || (((code == 0x67) || (code == 0x47)) && ((s32) xexp >= -4) && ((s32) xexp < px->prec))) {
        temp_t0 = xexp + 1;
        phi_t0_4 = temp_t0;
        if (code != 0x66) {
            temp_v0_2 = px->prec;
            phi_v0_2 = temp_v0_2;
            if (((px->flags & 8) == 0) && (phi_a3 < temp_v0_2)) {
                px->prec = phi_a3;
                phi_v0_2 = phi_a3;
            }
            temp_t4 = phi_v0_2 - temp_t0;
            px->prec = temp_t4;
            if (temp_t4 < 0) {
                px->prec = 0;
            }
        }
        if ((s32) temp_t0 <= 0) {
            temp_v1 = -(s32) temp_t0;
            px->s[px->n1] = 0x30;
            px->n1 += 1;
            phi_v1 = temp_v1;
            if ((px->prec > 0) || ((px->flags & 8) != 0)) {
                px->s[px->n1] = 0x2E;
                px->n1 += 1;
            }
            if (px->prec < temp_v1) {
                temp_t0_2 = px->prec * -1;
                phi_v1 = -(s32) temp_t0_2;
                phi_t0_4 = temp_t0_2;
            }
            temp_t4_2 = px->prec + phi_t0_4;
            px->nz1 = phi_v1;
            px->prec = temp_t4_2;
            if (temp_t4_2 < phi_a3) {
                phi_a3_3 = (s32) (s16) temp_t4_2;
            }
            px->n2 = phi_a3_3;
            nsig = (s16) phi_a3_3;
            memcpy((void *) &px->s[px->n1], phi_s1, (u32) phi_a3_3);
            px->nz2 = px->prec - nsig;
        } else if (phi_a3 < (s32) temp_t0) {
            xexp = temp_t0;
            nsig = (s16) phi_a3;
            memcpy((void *) &px->s[px->n1], phi_s1, (u32) phi_a3);
            px->n1 += nsig;
            px->nz1 = xexp - nsig;
            if ((px->prec > 0) || ((px->flags & 8) != 0)) {
                px->s[px->n1] = 0x2E;
                px->n2 += 1;
            }
            px->nz2 = px->prec;
        } else {
            xexp = temp_t0;
            nsig = (s16) phi_a3;
            memcpy((void *) &px->s[px->n1], phi_s1, (u32) temp_t0);
            temp_a3_2 = nsig - xexp;
            px->n1 += xexp;
            phi_a3_4 = temp_a3_2;
            if ((px->prec > 0) || ((px->flags & 8) != 0)) {
                px->s[px->n1] = 0x2E;
                px->n1 += 1;
            }
            if (px->prec < (s32) temp_a3_2) {
                phi_a3_4 = (s16) px->prec;
            }
            nsig = phi_a3_4;
            memcpy((void *) &px->s[px->n1], xexp + phi_s1, (u32) phi_a3_4);
            px->n1 += nsig;
            px->nz1 = px->prec - nsig;
        }
    } else {
        if ((code == 0x67) || (code == 0x47)) {
            temp_v0 = px->prec;
            phi_v0 = temp_v0;
            if (phi_a3 < temp_v0) {
                px->prec = phi_a3;
                phi_v0 = phi_a3;
            }
            temp_t9 = phi_v0 - 1;
            px->prec = temp_t9;
            if (temp_t9 < 0) {
                px->prec = 0;
            }
            if (code == 0x67) {
                code = 0x65U;
            } else {
                code = 0x45U;
            }
        }
        px->s[px->n1] = (s8) *phi_s1;
        px->n1 += 1;
        if ((px->prec > 0) || ((px->flags & 8) != 0)) {
            px->s[px->n1] = 0x2E;
            px->n1 += 1;
        }
        if (px->prec > 0) {
            temp_a3 = phi_a3 - 1;
            phi_a3_2 = temp_a3;
            if (px->prec < (s32) temp_a3) {
                phi_a3_2 = (s16) px->prec;
            }
            xexp = xexp;
            nsig = phi_a3_2;
            memcpy((void *) &px->s[px->n1], phi_s1 + 1, (u32) phi_a3_2);
            px->n1 += nsig;
            px->nz1 = px->prec - nsig;
        }
        temp_s1 = &px->s[px->n1];
        temp_s1[1].unk-1 = code;
        phi_t0 = (s32) xexp;
        if ((s32) xexp >= 0) {
            temp_s1[1] = 0x2B;
        } else {
            temp_s1[1] = 0x2D;
            phi_t0 = (s32) (s16) ((s32) xexp * -1);
        }
        phi_t0_2 = phi_t0;
        phi_s1_2 = &temp_s1[1].unk1;
        phi_t0_3 = phi_t0;
        phi_s1_3 = &temp_s1[1].unk1;
        if (phi_t0 >= 0x64) {
            if (phi_t0 >= 0x3E8) {
                temp_s1[1].unk1 = (phi_t0 / 0x3E8) + 0x30;
                phi_t0_2 = (s32) (s16) (phi_t0 % 0x3E8);
                phi_s1_2 = &temp_s1[1].unk1 + 1;
            }
            *phi_s1_2 = (phi_t0_2 / 0x64) + 0x30;
            phi_t0_3 = (s32) (s16) (phi_t0_2 % 0x64);
            phi_s1_3 = phi_s1_2 + 1;
        }
        phi_s1_3->unk0 = (phi_t0_3 / 0xA) + 0x30;
        phi_s1_3->unk1 = (s8) ((s16) (phi_t0_3 % 0xA) + 0x30);
        px->n2 = ((phi_s1_3 + 2) - px->s) - px->n1;
    }
    if ((px->flags & 0x14) == 0x10) {
        temp_v1_2 = px->width;
        temp_v0_3 = px->n0 + px->n1 + px->nz1 + px->n2 + px->nz2;
        if (temp_v0_3 < temp_v1_2) {
            px->nz0 = temp_v1_2 - temp_v0_3;
        }
    }
}
