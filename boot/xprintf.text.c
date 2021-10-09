s8 spaces[];                                        /* unable to generate initializer */
s8 zeroes[];                                        /* unable to generate initializer */
u32 D_8009930C[6] = {1, 2, 4, 8, 0x10, 0};          /* const */



s32 _Printf(void *(*pfn)(void *, s8 *, u32), void *arg, s8 *fmt, s8 *ap) {
    u8 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    s32 spC4;
    _Pft spA0;
    u8 sp74;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s1_5;
    s32 temp_t2;
    s32 temp_t2_2;
    s32 temp_t3;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 temp_v0_3;
    s8 *temp_s2;
    s8 *temp_v0_5;
    s8 *temp_v0_6;
    u8 *temp_s2_2;
    u8 *temp_s2_3;
    u8 *temp_s2_4;
    u8 *temp_s2_5;
    u8 *temp_s2_6;
    u8 *temp_s2_7;
    u8 *temp_s2_8;
    u8 temp_a1;
    u8 temp_a1_2;
    u8 temp_a1_3;
    u8 temp_a1_4;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_s3;
    void *temp_s3_2;
    void *temp_s3_3;
    void *temp_s3_4;
    void *temp_s3_5;
    void *temp_s3_6;
    void *temp_s3_7;
    void *temp_s3_8;
    void *temp_s3_9;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_4;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    s8 *phi_a3;
    s8 *phi_s2;
    s8 *phi_s2_2;
    void *phi_s3;
    u8 phi_s0;
    s8 *phi_s0_2;
    u8 *phi_s2_3;
    u8 *phi_s2_4;
    u8 phi_a1;
    u8 *phi_s2_5;
    u8 phi_a1_2;
    u8 *phi_s2_6;
    u8 phi_a1_3;
    u8 *phi_s2_7;
    s32 phi_a1_4;
    u8 *phi_s2_8;
    u8 *phi_s2_9;
    u8 *phi_s2_10;
    u32 phi_s1;
    s32 phi_s0_3;
    void *phi_s3_2;
    void *phi_s3_3;
    u32 phi_s1_2;
    s32 phi_s0_4;
    void *phi_s3_4;
    void *phi_s3_5;
    u32 phi_s1_3;
    s32 phi_s0_5;
    void *phi_s3_6;
    void *phi_s3_7;
    u32 phi_s1_4;
    s32 phi_s0_6;
    void *phi_s3_8;
    u32 phi_s1_5;
    s32 phi_s0_7;
    void *phi_s3_9;
    void *phi_s3_10;
    void *phi_s3_11;
    void *phi_s3_12;
    void *phi_s3_13;
    void *phi_s3_14;
    void *phi_s3_15;
    void *phi_s3_16;
    void *phi_s3_17;
    void *phi_s3_18;
    void *phi_s3_19;

    spCC = 0;
    phi_a3 = fmt;
    phi_s3 = arg;
loop_1:
    temp_v0 = *phi_a3;
    phi_s2 = phi_a3;
    phi_s2_2 = phi_a3;
    phi_s0 = temp_v0;
    phi_s3_10 = phi_s3;
    if ((temp_v0 != 0) && (temp_v0 != 0x25)) {
loop_3:
        temp_v0_2 = phi_s2->unk1;
        temp_s2 = phi_s2 + 1;
        phi_s2 = temp_s2;
        phi_s2_2 = temp_s2;
        phi_s0 = temp_v0_2;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 != 0x25) {
                goto loop_3;
            }
        }
    }
    temp_v0_3 = phi_s2_2 - phi_a3;
    if (temp_v0_3 > 0) {
        temp_v0_4 = pfn(phi_s3, phi_a3, (u32) temp_v0_3);
        temp_s3 = temp_v0_4;
        phi_s3_10 = temp_s3;
        if (temp_v0_4 != 0) {
            spCC += temp_v0_3;
            goto block_9;
        }
        return spCC;
    }
block_9:
    temp_s2_2 = phi_s2_2 + 1;
    phi_s2_3 = temp_s2_2;
    phi_s2_4 = temp_s2_2;
    phi_s3_2 = phi_s3_10;
    phi_s3_3 = phi_s3_10;
    if (phi_s0 == 0) {
        return spCC;
    }
    spD0 = 0;
    temp_v0_5 = strchr(" +-#0", (s32) *temp_s2_2);
    phi_s0_2 = temp_v0_5;
    if (temp_v0_5 != 0) {
        do {
            temp_s2_3 = phi_s2_3 + 1;
            spD0 |= D_8009930C[phi_s0_2 - " +-#0"];
            temp_v0_6 = strchr(" +-#0", (s32) *temp_s2_3);
            phi_s0_2 = temp_v0_6;
            phi_s2_3 = temp_s2_3;
            phi_s2_4 = temp_s2_3;
        } while (temp_v0_6 != 0);
    }
    phi_s2_5 = phi_s2_4;
    phi_s2_6 = phi_s2_4;
    if (*phi_s2_4 == 0x2A) {
        temp_t6 = (s32) (ap + 3) & ~3;
        ap = temp_t6 + 4;
        temp_t9 = *temp_t6;
        temp_s2_4 = phi_s2_4 + 1;
        spC8 = temp_t9;
        phi_s2_6 = temp_s2_4;
        if (temp_t9 < 0) {
            spC8 = -temp_t9;
            spD0 |= 4;
        }
        phi_a1_2 = *temp_s2_4;
    } else {
        spC8 = 0;
        temp_a1 = *phi_s2_4;
        phi_a1 = temp_a1;
        phi_a1_2 = temp_a1;
        if (((s32) temp_a1 >= 0x30) && ((s32) temp_a1 < 0x3A)) {
loop_19:
            if (spC8 < 0x3E7) {
                spC8 = (phi_a1 + (spC8 * 0xA)) - 0x30;
            }
            temp_a1_2 = phi_s2_5->unk1;
            temp_s2_5 = phi_s2_5 + 1;
            phi_a1 = temp_a1_2;
            phi_s2_5 = temp_s2_5;
            phi_a1_2 = temp_a1_2;
            phi_s2_6 = temp_s2_5;
            if (((s32) temp_a1_2 >= 0x30) && ((s32) temp_a1_2 < 0x3A)) {
                goto loop_19;
            }
        }
    }
    phi_s2_8 = phi_s2_6;
    if (phi_a1_2 != 0x2E) {
        spC4 = -1;
        phi_a1_4 = (s32) phi_s2_6->unk0;
    } else {
        temp_s2_6 = phi_s2_6 + 1;
        phi_s2_7 = temp_s2_6;
        phi_s2_8 = temp_s2_6;
        if (phi_s2_6->unk1 == 0x2A) {
            temp_t8 = (s32) (ap + 3) & ~3;
            ap = temp_t8 + 4;
            temp_s2_7 = temp_s2_6 + 1;
            spC4 = *temp_t8;
            phi_a1_4 = (s32) *temp_s2_7;
            phi_s2_8 = temp_s2_7;
        } else {
            spC4 = 0;
            temp_a1_3 = *temp_s2_6;
            phi_a1_3 = temp_a1_3;
            phi_a1_4 = (s32) temp_a1_3;
            if (((s32) temp_a1_3 >= 0x30) && ((s32) temp_a1_3 < 0x3A)) {
loop_29:
                if (spC4 < 0x3E7) {
                    spC4 = (phi_a1_3 + (spC4 * 0xA)) - 0x30;
                }
                temp_a1_4 = phi_s2_7->unk1;
                temp_s2_8 = phi_s2_7 + 1;
                phi_a1_3 = temp_a1_4;
                phi_s2_7 = temp_s2_8;
                phi_a1_4 = (s32) temp_a1_4;
                phi_s2_8 = temp_s2_8;
                if (((s32) temp_a1_4 >= 0x30) && ((s32) temp_a1_4 < 0x3A)) {
                    goto loop_29;
                }
            }
        }
    }
    phi_s2_9 = phi_s2_8;
    if (strchr("hlL", phi_a1_4) != 0) {
        spD4 = *phi_s2_8;
        phi_s2_9 = phi_s2_8 + 1;
    } else {
        spD4 = 0;
    }
    phi_s2_10 = phi_s2_9;
    if ((spD4 == 0x6C) && (*phi_s2_9 == 0x6C)) {
        spD4 = 0x4C;
        phi_s2_10 = phi_s2_9 + 1;
    }
    _Putfld(&spA0, &ap, *phi_s2_10, &sp74);
    temp_t3 = (((((spA0.width - spA0.n0) - spA0.nz0) - spA0.n1) - spA0.nz1) - spA0.n2) - spA0.nz2;
    spA0.width = temp_t3;
    if (((spA0.flags & 4) == 0) && (temp_t7 = temp_t3 > 0, (temp_t7 != 0)) && (phi_s1 = (u32) temp_t3, (temp_t7 != 0))) {
loop_42:
        phi_s0_3 = (s32) phi_s1;
        phi_s3_11 = phi_s3_2;
        if (phi_s1 >= 0x21U) {
            phi_s0_3 = 0x20;
        }
        if (phi_s0_3 > 0) {
            temp_v0_7 = pfn(phi_s3_2, spaces, (u32) phi_s0_3);
            temp_s3_2 = temp_v0_7;
            phi_s3_11 = temp_s3_2;
            if (temp_v0_7 != 0) {
                spA0.nchar += phi_s0_3;
                goto block_48;
            }
            return (s32) spA0.nchar;
        }
block_48:
        temp_s1 = phi_s1 - phi_s0_3;
        phi_s1 = (u32) temp_s1;
        phi_s3_2 = phi_s3_11;
        phi_s3_3 = phi_s3_11;
        if (temp_s1 <= 0) {
            goto block_49;
        }
        goto loop_42;
    }
block_49:
    phi_s3_12 = phi_s3_3;
    if (spA0.n0 > 0) {
        temp_v0_8 = pfn(phi_s3_3, (s8 *) &sp74, (u32) spA0.n0);
        temp_s3_3 = temp_v0_8;
        phi_s3_12 = temp_s3_3;
        if (temp_v0_8 != 0) {
            spA0.nchar += spA0.n0;
            goto block_53;
        }
        return (s32) spA0.nchar;
    }
block_53:
    temp_t5 = spA0.nz0 > 0;
    phi_s3_4 = phi_s3_12;
    phi_s3_5 = phi_s3_12;
    if ((temp_t5 != 0) && (phi_s1_2 = (u32) spA0.nz0, (temp_t5 != 0))) {
loop_55:
        phi_s0_4 = (s32) phi_s1_2;
        phi_s3_13 = phi_s3_4;
        if (phi_s1_2 >= 0x21U) {
            phi_s0_4 = 0x20;
        }
        if (phi_s0_4 > 0) {
            temp_v0_9 = pfn(phi_s3_4, zeroes, (u32) phi_s0_4);
            temp_s3_4 = temp_v0_9;
            phi_s3_13 = temp_s3_4;
            if (temp_v0_9 != 0) {
                spA0.nchar += phi_s0_4;
                goto block_61;
            }
            return (s32) spA0.nchar;
        }
block_61:
        temp_s1_2 = phi_s1_2 - phi_s0_4;
        phi_s1_2 = (u32) temp_s1_2;
        phi_s3_4 = phi_s3_13;
        phi_s3_5 = phi_s3_13;
        if (temp_s1_2 <= 0) {
            goto block_62;
        }
        goto loop_55;
    }
block_62:
    phi_s3_14 = phi_s3_5;
    if (spA0.n1 > 0) {
        temp_v0_10 = pfn(phi_s3_5, spA0.s, (u32) spA0.n1);
        temp_s3_5 = temp_v0_10;
        phi_s3_14 = temp_s3_5;
        if (temp_v0_10 != 0) {
            spA0.nchar += spA0.n1;
            goto block_66;
        }
        return (s32) spA0.nchar;
    }
block_66:
    temp_t2 = spA0.nz1 > 0;
    phi_s3_6 = phi_s3_14;
    phi_s3_7 = phi_s3_14;
    if ((temp_t2 != 0) && (phi_s1_3 = (u32) spA0.nz1, (temp_t2 != 0))) {
loop_68:
        phi_s0_5 = (s32) phi_s1_3;
        phi_s3_15 = phi_s3_6;
        if (phi_s1_3 >= 0x21U) {
            phi_s0_5 = 0x20;
        }
        if (phi_s0_5 > 0) {
            temp_v0_11 = pfn(phi_s3_6, zeroes, (u32) phi_s0_5);
            temp_s3_6 = temp_v0_11;
            phi_s3_15 = temp_s3_6;
            if (temp_v0_11 != 0) {
                spA0.nchar += phi_s0_5;
                goto block_74;
            }
            return (s32) spA0.nchar;
        }
block_74:
        temp_s1_3 = phi_s1_3 - phi_s0_5;
        phi_s1_3 = (u32) temp_s1_3;
        phi_s3_6 = phi_s3_15;
        phi_s3_7 = phi_s3_15;
        if (temp_s1_3 <= 0) {
            goto block_75;
        }
        goto loop_68;
    }
block_75:
    phi_s3_16 = phi_s3_7;
    if (spA0.n2 > 0) {
        temp_v0_12 = pfn(phi_s3_7, &spA0.s[spA0.n1], (u32) spA0.n2);
        temp_s3_7 = temp_v0_12;
        phi_s3_16 = temp_s3_7;
        if (temp_v0_12 != 0) {
            spA0.nchar += spA0.n2;
            goto block_79;
        }
        return (s32) spA0.nchar;
    }
block_79:
    temp_t2_2 = spA0.nz2 > 0;
    phi_s3_8 = phi_s3_16;
    phi_s3_18 = phi_s3_16;
    if ((temp_t2_2 != 0) && (phi_s1_4 = (u32) spA0.nz2, (temp_t2_2 != 0))) {
loop_81:
        phi_s0_6 = (s32) phi_s1_4;
        phi_s3_17 = phi_s3_8;
        if (phi_s1_4 >= 0x21U) {
            phi_s0_6 = 0x20;
        }
        if (phi_s0_6 > 0) {
            temp_v0_13 = pfn(phi_s3_8, zeroes, (u32) phi_s0_6);
            temp_s3_8 = temp_v0_13;
            phi_s3_17 = temp_s3_8;
            if (temp_v0_13 != 0) {
                spA0.nchar += phi_s0_6;
                goto block_87;
            }
            return (s32) spA0.nchar;
        }
block_87:
        temp_s1_4 = phi_s1_4 - phi_s0_6;
        phi_s1_4 = (u32) temp_s1_4;
        phi_s3_8 = phi_s3_17;
        phi_s3_18 = phi_s3_17;
        if (temp_s1_4 <= 0) {
            goto block_88;
        }
        goto loop_81;
    }
block_88:
    temp_t9_2 = spA0.width > 0;
    phi_s3_9 = phi_s3_18;
    phi_s3 = phi_s3_18;
    if (((spA0.flags & 4) != 0) && (temp_t9_2 != 0) && (phi_s1_5 = (u32) spA0.width, (temp_t9_2 != 0))) {
loop_91:
        phi_s0_7 = (s32) phi_s1_5;
        phi_s3_19 = phi_s3_9;
        if (phi_s1_5 >= 0x21U) {
            phi_s0_7 = 0x20;
        }
        if (phi_s0_7 > 0) {
            temp_v0_14 = pfn(phi_s3_9, spaces, (u32) phi_s0_7);
            temp_s3_9 = temp_v0_14;
            phi_s3_19 = temp_s3_9;
            if (temp_v0_14 != 0) {
                spA0.nchar += phi_s0_7;
                goto block_97;
            }
            return (s32) spA0.nchar;
        }
block_97:
        temp_s1_5 = phi_s1_5 - phi_s0_7;
        phi_s1_5 = (u32) temp_s1_5;
        phi_s3_9 = phi_s3_19;
        phi_s3 = phi_s3_19;
        if (temp_s1_5 <= 0) {
            goto block_98;
        }
        goto loop_91;
    }
block_98:
    phi_a3 = phi_s2_10 + 1;
    goto loop_1;
}

void _Putfld(_Pft *px, s8 **pap, u8 code, u8 *ac) {
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t8;
    s32 temp_v0_9;
    s32 temp_v1;
    s8 *temp_a0;
    s8 *temp_a0_2;
    s8 *temp_a0_3;
    s8 *temp_t1;
    s8 *temp_t1_2;
    s8 *temp_t2;
    s8 *temp_t2_2;
    s8 *temp_t3_2;
    s8 *temp_t4_2;
    s8 *temp_t6_3;
    s8 *temp_t6_4;
    s8 *temp_t7;
    s8 *temp_t7_3;
    s8 *temp_t9;
    s8 *temp_t9_2;
    s8 *temp_t9_3;
    s8 *temp_v0_5;
    s8 *temp_v0_6;
    u32 temp_v0_2;
    u32 temp_v0_7;
    u8 temp_v0;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_8;
    void *temp_t7_2;
    s8 *phi_v0;
    s8 *phi_v0_2;
    s8 *phi_a0;
    s8 *phi_a0_2;

    temp_t6 = code & 0xFF;
    px->n0 = 0;
    px->nz0 = 0;
    px->n1 = 0;
    px->nz1 = 0;
    px->n2 = 0;
    px->nz2 = 0;
    if (temp_t6 >= 0x26) {
        switch (temp_t6) {
        case 99:
            temp_t1 = ((s32) (*pap + 3) & ~3) + 4;
            *pap = temp_t1;
            ac[px->n0] = (u8) temp_t1->unk-4;
            px->n0 += 1;
            return;
        case 100:
        case 105:
            temp_v0 = px->qual;
            if (temp_v0 == 0x6C) {
                temp_t1_2 = ((s32) (*pap + 3) & ~3) + 4;
                *pap = temp_t1_2;
                temp_t4 = temp_t1_2->unk-4;
                px->unk0 = (s32) (temp_t4 >> 0x1F);
                px->unk4 = temp_t4;
            } else if (temp_v0 == 0x4C) {
                temp_t9 = ((s32) (*pap + 7) & ~7) + 8;
                *pap = temp_t9;
                px->unk4 = (s32) temp_t9->unk-4;
                px->unk0 = (s32) temp_t9->unk-8;
            } else {
                temp_t7 = ((s32) (*pap + 3) & ~3) + 4;
                *pap = temp_t7;
                temp_t8 = temp_t7->unk-4;
                px->unk0 = (s32) (temp_t8 >> 0x1F);
                px->unk4 = temp_t8;
            }
            if (px->qual == 0x68) {
                temp_t3 = px->unk4;
                px->unk0 = (s32) ((s32) (s16) temp_t3 >> 0x1F);
                px->unk4 = (s32) (s16) temp_t3;
            }
            temp_t0 = px->unk0;
            if (temp_t0 <= 0) {
                if (temp_t0 >= 0) {
                    goto block_17;
                }
                ac[px->n0] = 0x2D;
                px->n0 += 1;
            } else {
block_17:
                temp_v0_2 = px->flags;
                if ((temp_v0_2 & 2) != 0) {
                    ac[px->n0] = 0x2B;
                    px->n0 += 1;
                } else if ((temp_v0_2 & 1) != 0) {
                    ac[px->n0] = 0x20;
                    px->n0 += 1;
                }
            }
            px->s = (s8 *) &ac[px->n0];
            _Litob(px, temp_t6 & 0xFF);
            return;
        case 88:
        case 111:
        case 117:
        case 120:
            temp_v0_3 = px->qual;
            if (temp_v0_3 == 0x6C) {
                temp_t4_2 = ((s32) (*pap + 3) & ~3) + 4;
                *pap = temp_t4_2;
                temp_t6_2 = temp_t4_2->unk-4;
                px->unk0 = (s32) (temp_t6_2 >> 0x1F);
                px->unk4 = temp_t6_2;
            } else if (temp_v0_3 == 0x4C) {
                temp_t2 = ((s32) (*pap + 7) & ~7) + 8;
                *pap = temp_t2;
                px->unk4 = (s32) temp_t2->unk-4;
                px->unk0 = (s32) temp_t2->unk-8;
            } else {
                temp_t9_2 = ((s32) (*pap + 3) & ~3) + 4;
                *pap = temp_t9_2;
                temp_t0_2 = temp_t9_2->unk-4;
                px->unk0 = (s32) (temp_t0_2 >> 0x1F);
                px->unk4 = temp_t0_2;
            }
            temp_v0_4 = px->qual;
            if (temp_v0_4 == 0x68) {
                px->unk0 = 0;
                px->unk4 = (s32) (px->unk4 & 0xFFFF);
            } else if (temp_v0_4 == 0) {
                px->unk0 = 0;
                px->unk4 = (s32) px->unk4;
            }
            if (((px->flags & 8) != 0) && ((ac[px->n0] = 0x30, px->n0 += 1, (temp_t6 == 0x78)) || (temp_t6 == 0x58))) {
                ac[px->n0] = (u8) temp_t6;
                px->n0 += 1;
            }
            px->s = (s8 *) &ac[px->n0];
            _Litob(px, temp_t6 & 0xFF);
            return;
        case 69:
        case 71:
        case 101:
        case 102:
        case 103:
            if (px->qual == 0x4C) {
                temp_v0_5 = *pap;
                if (((s32) temp_v0_5 & 1) != 0) {
                    *pap = temp_v0_5 + 7;
                    phi_v0 = &temp_v0_5[7].unk-16;
                } else {
                    if (((s32) temp_v0_5 & 2) != 0) {
                        *pap = temp_v0_5 + 0xA;
                        phi_a0 = &temp_v0_5[0xA].unk-28;
                    } else {
                        temp_a0 = ((s32) (temp_v0_5 + 7) & ~7) + 8;
                        *pap = temp_a0;
                        phi_a0 = temp_a0;
                    }
                    phi_v0 = phi_a0;
                }
                px->v.ll = phi_v0->unk-8;
            } else {
                temp_v0_6 = *pap;
                if (((s32) temp_v0_6 & 1) != 0) {
                    *pap = temp_v0_6 + 7;
                    phi_v0_2 = &temp_v0_6[7].unk-16;
                } else {
                    if (((s32) temp_v0_6 & 2) != 0) {
                        *pap = temp_v0_6 + 0xA;
                        phi_a0_2 = &temp_v0_6[0xA].unk-28;
                    } else {
                        temp_a0_2 = ((s32) (temp_v0_6 + 7) & ~7) + 8;
                        *pap = temp_a0_2;
                        phi_a0_2 = temp_a0_2;
                    }
                    phi_v0_2 = phi_a0_2;
                }
                px->v.ll = phi_v0_2->unk-8;
            }
            if (((u16) px->unk0 & 0x8000) != 0) {
                ac[px->n0] = 0x2D;
                px->n0 += 1;
            } else {
                temp_v0_7 = px->flags;
                if ((temp_v0_7 & 2) != 0) {
                    ac[px->n0] = 0x2B;
                    px->n0 += 1;
                } else if ((temp_v0_7 & 1) != 0) {
                    ac[px->n0] = 0x20;
                    px->n0 += 1;
                }
            }
            px->s = (s8 *) &ac[px->n0];
            _Ldtob(px, temp_t6 & 0xFF);
            return;
        case 110:
            temp_v0_8 = px->qual;
            if (temp_v0_8 == 0x68) {
                temp_t6_3 = ((s32) (*pap + 3) & ~3) + 4;
                *pap = temp_t6_3;
                *temp_t6_3->unk-4 = (s16) px->nchar;
                return;
            }
            if (temp_v0_8 == 0x6C) {
                temp_t2_2 = ((s32) (*pap + 3) & ~3) + 4;
                *pap = temp_t2_2;
                *temp_t2_2->unk-4 = px->nchar;
                return;
            }
            if (temp_v0_8 == 0x4C) {
                temp_t9_3 = ((s32) (*pap + 3) & ~3) + 4;
                *pap = temp_t9_3;
                temp_t7_2 = temp_t9_3->unk-4;
                temp_t7_2->unk0 = 0;
                temp_t7_2->unk4 = (u32) px->nchar;
                return;
            }
            temp_t6_4 = ((s32) (*pap + 3) & ~3) + 4;
            *pap = temp_t6_4;
            *temp_t6_4->unk-4 = px->nchar;
            return;
        case 112:
            temp_t7_3 = ((s32) (*pap + 3) & ~3) + 4;
            *pap = temp_t7_3;
            temp_t5 = temp_t7_3->unk-4;
            px->unk0 = (s32) (temp_t5 >> 0x1F);
            px->s = (s8 *) &ac[px->n0];
            px->unk4 = temp_t5;
            _Litob(px, 0x78U);
            return;
        case 115:
            temp_t3_2 = ((s32) (*pap + 3) & ~3) + 4;
            *pap = temp_t3_2;
            temp_a0_3 = temp_t3_2->unk-4;
            px->s = temp_a0_3;
            temp_v0_9 = strlen(temp_a0_3);
            temp_v1 = px->prec;
            px->n1 = temp_v0_9;
            if ((temp_v1 >= 0) && (temp_v1 < temp_v0_9)) {
                px->n1 = temp_v1;
                return;
            }
            // Duplicate return node #71. Try simplifying control flow for better match
            return;
        }
    } else {
        if (temp_t6 != 0x25) {
        default:
            ac[px->n0] = (u8) temp_t6;
            px->n0 += 1;
            return;
        }
        ac[px->n0] = 0x25;
        px->n0 += 1;
    }
}

