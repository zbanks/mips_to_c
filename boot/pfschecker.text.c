s32 __osCheckId();                                  /* extern */
s32 __osGetId(void *);                              /* extern */
s32 __osPfsRWInode(void *, ? *, ?, s32);            /* extern */
s32 __osPfsSelectBank(void *, ?);                   /* extern */
s32 corrupted(void *arg0, s32 arg1, ? *arg2);       /* static */
s32 corrupted_init(void *arg0, ? *arg1);            /* static */
s32 osPfsChecker(void *arg0);                       /* static */



s32 osPfsChecker(void *arg0) {
    u16 sp4BC;
    ? sp3BC;
    ? sp2BC;
    u16 sp2A2;
    u8 sp29C;
    ? sp27C;
    ? sp78;
    s32 sp74;
    u16 sp60;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 temp_s4_3;
    s32 temp_s4_4;
    s32 temp_s4_5;
    s32 temp_s7;
    s32 temp_t8;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    u16 *temp_a0_2;
    u16 temp_at;
    u16 temp_at_2;
    u32 temp_v1_3;
    void *temp_v1;
    void *temp_v1_2;
    s32 phi_v0;
    s32 phi_s4;
    u8 phi_s1;
    s32 phi_fp;
    s32 phi_s7;
    s32 phi_s0;
    s32 phi_a0;
    s32 phi_s4_2;
    s32 phi_s6;
    s32 phi_a1;
    u16 *phi_v0_2;
    void *phi_v1;
    s32 phi_s4_3;
    void *phi_v0_3;
    void *phi_v1_2;
    s32 phi_s4_4;
    s32 phi_s4_5;
    void *phi_v1_3;
    ? *phi_a0_2;
    s32 phi_s4_6;
    s32 phi_s7_2;
    s32 phi_fp_2;
    s32 phi_fp_3;
    s32 phi_s7_3;
    s32 phi_s4_7;

    sp74 = 0;
    temp_v0_8 = __osCheckId();
    phi_v0 = temp_v0_8;
    phi_s7_2 = temp_v0_8;
    phi_fp_2 = 0xFE;
    if (temp_v0_8 == 2) {
        temp_v0_9 = __osGetId(arg0);
        phi_v0 = temp_v0_9;
        phi_s7_2 = temp_v0_9;
    }
    if (phi_v0 != 0) {
        return phi_s7_2;
    }
    temp_v0_7 = corrupted_init(arg0, &sp78);
    if (temp_v0_7 != 0) {
        return temp_v0_7;
    }
    phi_s4 = 0;
    phi_s4_3 = 0;
    phi_s4_5 = 0;
    phi_s4_6 = 0;
    phi_s4_7 = 0;
    if (arg0->unk50 > 0) {
loop_7:
        temp_v0_6 = __osContRamRead(arg0->unk4, arg0->unk8, (arg0->unk5C + phi_s4) & 0xFFFF, &sp29C);
        temp_s7 = temp_v0_6;
        phi_fp = phi_fp_2;
        phi_s7_3 = temp_s7;
        if (temp_v0_6 != 0) {
            return temp_v0_6;
        }
        if ((sp2A0 != 0) || ((s32) sp29C != 0)) {
            if ((sp2A0 == 0) || ((s32) sp29C == 0)) {
                phi_a0 = -1;
                goto block_29;
            }
            sp4BC = sp2A2;
            phi_s0 = 0;
            phi_a0 = 0;
            if (((s32) sp4BC >= arg0->unk60) && ((s32) (u8) sp4BC < (s32) arg0->unk64) && ((s32) sp4BD > 0) && (phi_s1 = 0xFFU, (((s32) sp4BD < 0x80) != 0))) {
loop_18:
                phi_s7 = phi_s7_3;
                phi_fp_3 = phi_fp;
                phi_fp_3 = phi_fp;
                if ((u8) sp4BC != phi_s1) {
                    phi_s1 = (u8) sp4BC;
                    if ((u8) sp4BC != phi_fp) {
                        phi_s7 = __osPfsRWInode(arg0, &sp2BC, 0, (u8) sp4BC & 0xFF);
                        phi_fp_3 = (u8) sp4BC & 0xFF;
                    }
                    phi_s7_3 = phi_s7;
                    if ((phi_s7 != 0) && (phi_s7 != 3)) {
                        return phi_s7;
                    }
                    goto block_24;
                }
block_24:
                temp_a0 = corrupted(arg0, subroutine_arg1, &sp78) - phi_s0;
                phi_fp = phi_fp_3;
                phi_a0 = temp_a0;
                phi_fp_2 = phi_fp_3;
                if ((temp_a0 != 0) || (sp4BC = *(&sp2BC + (sp4BD * 2)), phi_s0 = 1, (((s32) sp4BC < arg0->unk60) != 0)) || ((s32) (u8) sp4BC >= (s32) arg0->unk64) || ((s32) sp4BD <= 0) || ((s32) sp4BD >= 0x80)) {
                    goto block_29;
                }
                goto loop_18;
            }
block_29:
            if ((phi_a0 != 0) || (sp4BC != 1)) {
                bzero((void *) &sp29C, 0x20);
                if ((arg0->unk65 != 0) && (temp_v0_5 = __osPfsSelectBank(arg0, 0), (temp_v0_5 != 0))) {
                    return temp_v0_5;
                }
                temp_v0_4 = __osContRamWrite(arg0->unk4, arg0->unk8, (arg0->unk5C + phi_s4) & 0xFFFF, &sp29C, 0);
                if (temp_v0_4 != 0) {
                    return temp_v0_4;
                }
                sp74 += 1;
                goto block_37;
            }
            goto block_37;
        }
block_37:
        temp_s4 = phi_s4 + 1;
        phi_s4 = temp_s4;
        if (temp_s4 >= arg0->unk50) {
            goto block_39;
        }
        goto loop_7;
    }
block_39:
    phi_s4_2 = 0;
    if (arg0->unk50 > 0) {
loop_40:
        temp_v0_3 = __osContRamRead(arg0->unk4, arg0->unk8, (arg0->unk5C + phi_s4_2) & 0xFFFF, &sp29C);
        if (temp_v0_3 != 0) {
            return temp_v0_3;
        }
        temp_a0_2 = (phi_s4_2 * 2) + &sp27C;
        if ((sp2A0 != 0) && ((s32) sp29C != 0) && ((s32) sp2A2 >= (s32) arg0->unk62)) {
            *temp_a0_2 = sp2A2;
        } else {
            *temp_a0_2 = 0;
        }
        temp_s4_2 = phi_s4_2 + 1;
        phi_s4_2 = temp_s4_2;
        if (temp_s4_2 >= arg0->unk50) {
            goto block_48;
        }
        goto loop_40;
    }
block_48:
    phi_s6 = 0;
    if ((s32) arg0->unk64 > 0) {
loop_50:
        temp_v0_2 = __osPfsRWInode(arg0, &sp2BC, 0, phi_s6 & 0xFF);
        if ((temp_v0_2 != 0) && (temp_v0_2 != 3)) {
            return temp_v0_2;
        }
        if (phi_s6 > 0) {
            phi_a1 = 1;
        } else {
            phi_a1 = arg0->unk60;
        }
        temp_a3 = phi_a1 & 3;
        if (phi_a1 > 0) {
            if (temp_a3 != 0) {
                temp_a2 = 0 * 2;
                phi_v0_2 = &sp2BC + temp_a2;
                phi_v1 = &sp3BC + temp_a2;
                do {
                    temp_s4_3 = phi_s4_3 + 1;
                    temp_v1 = phi_v1 + 2;
                    temp_v1->unk-2 = (u16) *phi_v0_2;
                    phi_v0_2 += 2;
                    phi_v1 = temp_v1;
                    phi_s4_3 = temp_s4_3;
                    phi_s4_5 = temp_s4_3;
                    phi_s4_7 = temp_s4_3;
                } while (temp_a3 != temp_s4_3);
                if (temp_s4_3 != phi_a1) {
                    goto block_61;
                }
            } else {
block_61:
                temp_a2_2 = phi_s4_7 * 2;
                phi_v0_3 = &sp2BC + temp_a2_2;
                phi_v1_2 = &sp3BC + temp_a2_2;
                phi_s4_4 = phi_s4_7;
                do {
                    temp_s4_4 = phi_s4_4 + 4;
                    temp_v1_2 = phi_v1_2 + 8;
                    temp_v1_2->unk-6 = (u16) phi_v0_3->unk2;
                    temp_v1_2->unk-4 = (u16) phi_v0_3->unk4;
                    temp_v1_2->unk-2 = (u16) phi_v0_3->unk6;
                    temp_v1_2->unk-8 = (u16) phi_v0_3->unk0;
                    phi_v0_3 += 8;
                    phi_v1_2 = temp_v1_2;
                    phi_s4_4 = temp_s4_4;
                    phi_s4_5 = temp_s4_4;
                } while (temp_s4_4 != phi_a1);
            }
        }
        if (phi_s4_5 < 0x80) {
            phi_v1_3 = &sp3BC + (phi_s4_5 * 2);
            do {
                temp_v1_3 = phi_v1_3 + 2;
                temp_v1_3->unk-2 = 3;
                phi_v1_3 = (void *) temp_v1_3;
            } while (temp_v1_3 < (u32) &sp4BC);
        }
        if (arg0->unk50 > 0) {
            phi_a0_2 = &sp27C;
            do {
                if ((phi_s6 == phi_a0_2->unk0) && ((s32) (u16) phi_a0_2->unk0 >= (s32) arg0->unk62)) {
loop_70:
                    temp_v0_10 = phi_a0_2->unk1 * 2;
                    temp_at = *(&sp2BC + temp_v0_10);
                    sp60 = temp_at;
                    *(&sp3BC + temp_v0_10) = temp_at;
                    temp_at_2 = sp60;
                    phi_a0_2->unk0 = temp_at_2;
                    if (phi_s6 == phi_a0_2->unk0) {
                        if ((temp_at_2 & 0xFFFF) >= (s32) arg0->unk62) {
                            goto loop_70;
                        }
                    }
                }
                temp_s4_5 = phi_s4_6 + 1;
                phi_a0_2 += 2;
                phi_s4_6 = temp_s4_5;
            } while (temp_s4_5 < arg0->unk50);
        }
        temp_v0 = __osPfsRWInode(arg0, &sp3BC, 1, phi_s6 & 0xFF);
        if (temp_v0 != 0) {
            return temp_v0;
        }
        temp_t8 = (phi_s6 + 1) & 0xFF;
        phi_s6 = temp_t8;
        if (temp_t8 >= (s32) arg0->unk64) {
            goto block_76;
        }
        goto loop_50;
    }
block_76:
    if (sp74 != 0) {
        arg0->unk0 = (s32) (arg0->unk0 | 2);
        return 0;
    }
    arg0->unk0 = (s32) (arg0->unk0 & ~2);
    return 0;
}

s32 corrupted_init(void *arg0, ? *arg1) {
    ? sp15A;
    u16 sp158;
    ? sp58;
    ? *temp_v1;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    u16 *temp_a0;
    u16 *temp_a1;
    void *temp_v0_3;
    void *temp_v0_5;
    void *temp_v0_6;
    ? *phi_v1;
    s32 phi_v0;
    s32 phi_s0;
    s32 phi_s7;
    s32 phi_s1;
    u16 *phi_a1;
    u16 *phi_a0;
    s32 phi_v0_2;

    phi_v1 = arg1;
    phi_v0 = 0;
    do {
        temp_v0_2 = phi_v0 + 4;
        phi_v1->unk102 = 0;
        phi_v1->unk103 = 0;
        phi_v1->unk104 = 0;
        temp_v1 = phi_v1 + 4;
        temp_v1->unkFD = 0;
        phi_v1 = temp_v1;
        phi_v0 = temp_v0_2;
    } while (temp_v0_2 != 0x100);
    arg1->unk100 = 0xFF;
    phi_s0 = 0;
    phi_s7 = 0;
    if ((s32) arg0->unk64 > 0) {
loop_4:
        if (phi_s0 > 0) {
            phi_s1 = 1;
        } else {
            phi_s1 = arg0->unk60;
        }
        temp_v0 = __osPfsRWInode(arg0, &sp58, 0, phi_s7 & 0xFF);
        if ((temp_v0 != 0) && (temp_v0 != 3)) {
            return temp_v0;
        }
        phi_v0_2 = phi_s1;
        if (phi_s1 < 0x80) {
            if (((0x80 - phi_s1) & 1) != 0) {
                sp158 = *(&sp58 + (phi_s1 * 2));
                if (((s32) sp158 >= arg0->unk60) && (phi_s0 != (u8) sp158)) {
                    temp_v0_3 = arg1 + (((s32) (sp159 & 0x7F) / 4) + (((s32) (u8) sp158 % 8) << 5));
                    temp_v0_3->unk101 = (u8) (temp_v0_3->unk101 | (1 << (phi_s0 % 8)));
                }
                temp_v0_4 = phi_s1 + 1;
                phi_v0_2 = temp_v0_4;
                if (temp_v0_4 != 0x80) {
                    goto block_16;
                }
            } else {
block_16:
                temp_a1 = &sp58 + (phi_v0_2 * 2);
                phi_a1 = temp_a1;
                phi_a0 = temp_a1 + 2;
                do {
                    sp158 = *phi_a1;
                    if (((s32) sp158 >= arg0->unk60) && (phi_s0 != (u8) sp158)) {
                        temp_v0_5 = arg1 + (((s32) (sp159 & 0x7F) / 4) + (((s32) (u8) sp158 % 8) << 5));
                        temp_v0_5->unk101 = (u8) (temp_v0_5->unk101 | (1 << (phi_s0 % 8)));
                    }
                    temp_a0 = phi_a0 + 4;
                    sp158 = *phi_a0;
                    phi_a0 = temp_a0;
                    if (((s32) sp158 >= arg0->unk60) && (phi_s0 != (u8) sp158)) {
                        temp_v0_6 = arg1 + (((s32) (sp159 & 0x7F) / 4) + (((s32) (u8) sp158 % 8) << 5));
                        temp_v0_6->unk101 = (u8) (temp_v0_6->unk101 | (1 << (phi_s0 % 8)));
                    }
                    phi_a1 += 4;
                } while (temp_a0 != &sp15A);
            }
        }
        temp_s0 = (phi_s7 + 1) & 0xFF;
        phi_s0 = temp_s0;
        phi_s7 = temp_s0;
        if (temp_s0 >= (s32) arg0->unk64) {
            goto block_25;
        }
        goto loop_4;
    }
block_25:
    return 0;
}

s32 corrupted(void *arg0, u8 arg1, ? *arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 phi_v0;
    u8 phi_s2;
    s32 phi_s0;
    s32 phi_s1;
    u16 *phi_v1;
    s32 phi_s0_2;
    s32 phi_v0_2;
    s32 phi_s0_3;
    s32 phi_s0_4;
    s32 phi_s0_5;
    s32 phi_s0_6;

    phi_s2 = 0U;
    phi_s0 = 0;
    phi_s0_4 = 0;
    if ((s32) arg0->unk64 > 0) {
        phi_v0 = 0;
loop_2:
        phi_s0_3 = phi_s0;
        phi_s0_5 = phi_s0;
        phi_s0_6 = phi_s0;
        if (phi_v0 > 0) {
            phi_s1 = 1;
        } else {
            phi_s1 = arg0->unk60;
        }
        if ((arg1 == phi_v0) || (((arg2 + (((s32) arg1 / 4) + (((s32) arg1 % 8) << 5)))->unk101 & (1 << (phi_v0 % 8))) != 0)) {
            if (arg2->unk100 != phi_v0) {
                temp_v0 = __osPfsRWInode(arg0, arg2, 0, phi_s2 & 0xFF);
                if ((temp_v0 != 0) && (temp_v0 != 3)) {
                    return temp_v0;
                }
                arg2->unk100 = phi_s2;
                goto block_12;
            }
block_12:
            if (phi_s0 < 2) {
                temp_v0_2 = phi_s1 * 2;
                phi_v0_2 = temp_v0_2;
                if (phi_s1 < 0x80) {
                    phi_v1 = arg2 + temp_v0_2;
loop_15:
                    temp_v0_3 = phi_v0_2 + 2;
                    phi_s0_2 = phi_s0_6;
                    phi_v0_2 = temp_v0_3;
                    if ((u16) arg1 == *phi_v1) {
                        phi_s0_2 = phi_s0_6 + 1;
                    }
                    phi_v1 += 2;
                    phi_s0_3 = phi_s0_2;
                    phi_s0_6 = phi_s0_2;
                    if ((phi_s0_2 < 2) && (temp_v0_3 < 0x100)) {
                        goto loop_15;
                    }
                }
            }
            phi_s0_5 = phi_s0_3;
            if (phi_s0_3 >= 2) {
                return 2;
            }
            goto block_21;
        }
block_21:
        temp_v0_4 = (phi_s2 + 1) & 0xFF;
        phi_v0 = temp_v0_4;
        phi_s2 = (u8) temp_v0_4;
        phi_s0 = phi_s0_5;
        phi_s0_4 = phi_s0_5;
        if (temp_v0_4 >= (s32) arg0->unk64) {
            goto block_22;
        }
        goto loop_2;
    }
block_22:
    return phi_s0_4;
}

