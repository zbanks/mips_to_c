? *func_8018B640(? *, ?);                           /* extern */
s32 func_8018C380(?, ?, u8);                        /* extern */
? func_8018C994(s32, s32, s32);                     /* extern */
s32 func_8018F220(u8);                              /* extern */
s32 func_8018F298(u8);                              /* extern */
? func_8018F388(u8, ?);                             /* extern */
? func_8018F3B8(u8, ?);                             /* extern */
? func_8018FAD0(s32, u8, ?);                        /* extern */
s32 func_80190F64(u8, s8, void *);                  /* extern */
? func_80191460(s32, s32, void *);                  /* extern */
? func_80192AE8(u8, u8, void *);                    /* extern */
u16 func_80194668();                                /* extern */
? func_80194F84();                                  /* extern */
s32 func_801954CC(s32, s32, void *, s32);           /* extern */
void *func_80195508(u8, u8);                        /* extern */
void *func_801955DC(u8, u8, void *);                /* extern */
s32 func_801956C0(u8, s32, void *, s32);            /* extern */
? func_80195C40(void *, void *, void *);            /* extern */
? func_80195C60();                                  /* extern */
? func_80195D84(void *, void *, void *, void *);    /* extern */
? func_80195DEC(void *, ? *, ? *);                  /* extern */
? func_80195EE0(s32 *);                             /* extern */
? func_80196040(s32 *, u8);                         /* extern */
void *func_801965F0(void *);                        /* extern */
? func_80196BC8(s32 *);                             /* extern */
? func_80197048(void *);                            /* extern */
? func_80197138(void *);                            /* extern */
s8 func_801974D0(s32 arg1, s32);                    /* static */
u8 func_80197538(s32 *arg0, u8 **arg1, s32 arg2, s8 arg3); /* static */
void func_80197714(? *arg0);                        /* static */
s32 func_80197880(s32 *arg0, s32 arg1);             /* static */
void func_801979D8(void *arg0);                     /* static */
void func_80197A54(u8 *arg0, s32 arg1);             /* static */
void func_80197AA4(u8 *arg0);                       /* static */
void func_80197B14(s32 *arg0, s32 arg1);            /* static */
void func_80197C0C(void *arg0, ? arg1);             /* static */
void func_80197C8C(s32 *arg0, s32 arg1, u8 *arg2);  /* static */
void func_80197D24(u8 *arg0);                       /* static */
void func_80197D4C(s32 *arg0);                      /* static */
void func_80197E08(? *arg0, ? *arg1, void *);       /* static */
void *func_80197E48(? *arg0, void *, void *);       /* static */
void func_80197E88();                               /* static */
u8 func_80197F28(s32 arg0, s32);                    /* static */
u8 func_80197F3C(s32 arg0, s32);                    /* static */
u8 func_80197F74(u8 **arg0, s32, void *);           /* static */
void func_80197FB4(void *arg0);                     /* static */
void func_801980D0(void *arg0);                     /* static */
? func_8019815C(void *arg0, u8 arg1);               /* static */
s32 func_8019825C(void *arg0);                      /* static */
u8 func_80198640(void *arg0, u8 arg1);              /* static */
u8 func_80198CE0(void *arg0, s32 arg1);             /* static */
void func_801990F4(s32 *arg0, u8 arg1);             /* static */
s8 func_80199124(void *arg0, u8 arg1, void **arg2, void *arg3); /* static */
void func_80199198(u8 *arg0, u8 arg1);              /* static */
void func_80199244(s32 *arg0, u8 arg1);             /* static */
void func_8019A0BC(s32 *arg0);                      /* static */
void func_8019AA3C(s32 arg0);                       /* static */
void func_8019AAF0(s32 *arg0);                      /* static */
void func_8019AB40(? *arg0);                        /* static */
void func_8019AC10(s32 arg0);                       /* static */
void func_8019ACEC(? *arg0);                        /* static */
void func_8019ADBC();                               /* static */
static ? D_801D4DB4;                                /* unable to generate initializer */
static ? D_801D51B4;                                /* unable to generate initializer */
static ? D_801D55B4;                                /* unable to generate initializer */
static ? D_801D57B4;                                /* unable to generate initializer */
static ? D_801D57C4;                                /* unable to generate initializer */
static ? D_801D57D4;                                /* unable to generate initializer */
static ? D_801D6100;                                /* unable to generate initializer */
static ? D_80200C70;
static s32 D_802034D0;
static s16 D_802034F0;
static s16 D_8020352C;
static u32 D_8020360C;
static ? D_80203618;
static ? D_80203660;
static ? D_80203970;
static ? D_802050D0;
static ? D_802057B0;
static ? D_80205830;
static ? D_802084B0;
static ? D_80208530;
static ? D_80208598;
static s8 (*D_80208E6C)(s8, s32 *);



s8 func_801974D0(s32 arg1) {
    s32 temp_a1;
    u8 temp_v0;
    s8 phi_v1;
    u8 phi_v0;

    temp_a1 = arg1 & 0xFF;
    temp_v0 = *(&D_801D6100 + temp_a1);
    phi_v1 = 0;
    if ((temp_v0 & 3) == 1) {
        if ((temp_v0 & 0x80) == 0) {
            phi_v0 = func_80197F28(temp_a1);
        } else {
            phi_v0 = func_80197F3C(temp_a1);
        }
        phi_v1 = phi_v0 & 0xFFFF;
    }
    return phi_v1;
}

u8 func_80197538(s32 *arg0, u8 **arg1, s32 arg2, s8 arg3) {
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;
    void *temp_v1_2;

    switch (arg2) {
    case 255:
        temp_v0 = arg1->unk18;
        if (temp_v0 == 0) {
            return -1U;
        }
        temp_v1 = (temp_v0 - 1) & 0xFF;
        arg1->unk18 = temp_v1;
        arg1->unk0 = (arg1 + (temp_v1 * 4))->unk4;
    default:
block_25:
        return 0U;
    case 253:
        return func_80197F74(arg1);
    case 254:
        return 1U;
    case 252:
        (arg1 + (arg1->unk18 * 4))->unk4 = (u8 *) arg1->unk0;
        arg1->unk18 = (u8) (arg1->unk18 + 1);
        arg1->unk0 = arg0->unk18 + (arg3 & 0xFFFF);
        goto block_25;
    case 248:
        (arg1 + arg1->unk18)->unk14 = arg3;
        (arg1 + (arg1->unk18 * 4))->unk4 = (u8 *) arg1->unk0;
        arg1->unk18 = (u8) (arg1->unk18 + 1);
        goto block_25;
    case 247:
        temp_v1_2 = arg1 + arg1->unk18;
        temp_v1_2->unk13 = (u8) (temp_v1_2->unk13 - 1);
        temp_v0_2 = arg1->unk18;
        if ((arg1 + temp_v0_2)->unk13 != 0) {
            arg1->unk0 = *(arg1 + (temp_v0_2 * 4));
        } else {
            arg1->unk18 = (u8) (temp_v0_2 - 1);
        }
        goto block_25;
    case 246:
        arg1->unk18 = (u8) (arg1->unk18 - 1);
        goto block_25;
    case 245:
    case 249:
    case 250:
    case 251:
        if (((arg2 != 0xFA) || (arg1->unk19 == 0)) && ((arg2 != 0xF9) || ((s32) arg1->unk19 < 0)) && ((arg2 != 0xF5) || ((s32) arg1->unk19 >= 0))) {
            arg1->unk0 = arg0->unk18 + (arg3 & 0xFFFF);
        }
        goto block_25;
    case 242:
    case 243:
    case 244:
        if (((arg2 != 0xF3) || (arg1->unk19 == 0)) && ((arg2 != 0xF2) || ((s32) arg1->unk19 < 0))) {
            arg1->unk0 += arg3;
        }
        goto block_25;
    }
}

void func_80197714(? *arg0) {
    ? *temp_a1;
    ? *temp_v1;
    s32 temp_a0;
    u8 temp_t0;
    u8 temp_t0_2;
    u8 temp_t2;
    u8 temp_t4;
    u8 temp_t6;
    u8 temp_t8;
    void *temp_a0_2;
    ? *phi_v1;
    s32 phi_a0;

    temp_a1 = arg0;
    if (arg0 != (&D_80200C70 + 0x7840)) {
        temp_t0 = arg0->unk0 & 0xFF7F;
        temp_t2 = temp_t0 & 0xBF;
        arg0->unk0 = temp_t0;
        temp_t4 = temp_t2 & 0xDF;
        arg0->unk0 = temp_t2;
        temp_t6 = temp_t4 & 0xEF;
        arg0->unk0 = temp_t4;
        temp_t8 = temp_t6 & 0xF7;
        arg0->unk0 = temp_t6;
        temp_t0_2 = temp_t8 & 0xFB;
        arg0->unk0 = temp_t8;
        arg0->unk0 = temp_t0_2;
        arg0->unk1 = 0xFF;
        arg0->unk10 = 0xFF;
        arg0->unk16 = 0x800;
        arg0->unk12 = 0x800;
        arg0->unk28 = 0;
        arg0->unk0 = (u8) (temp_t0_2 & 0xFD);
        arg0->unk9 = 0;
        arg0->unkD8 = 0;
        arg0->unk7C = 0;
        arg0->unkA = 0x40;
        arg0->unkB = 0x80;
        arg0->unkD = 0;
        arg0->unkE = 0;
        arg0->unk44 = 0;
        arg0->unk8 = 0;
        arg0->unk4 = 0;
        arg0->unkC = 0;
        arg0->unk5 = 3;
        arg0->unk6 = 1;
        arg0->unk20 = 0;
        arg0->unk84 = &D_801D57D4;
        arg0->unk80 = 0xF0;
        arg0->unk81 = 0;
        arg0->unk18 = 0;
        arg0->unk14 = 0;
        arg0->unk1A = 0;
        arg0->unk1C = 0;
        arg0->unk1E = 0;
        arg0->unkD4 = 0;
        arg0->unk22 = 0;
        arg0->unkF = 0;
        arg0->unk30 = 1.0f;
        arg0->unk2C = 1.0f;
        arg0->unk3C = 1.0f;
        phi_v1 = temp_a1;
        phi_a0 = 0;
        do {
            temp_a0 = phi_a0 + 4;
            phi_v1->unkC9 = -1;
            phi_v1->unkCA = -1;
            phi_v1->unkCB = -1;
            temp_v1 = phi_v1 + 4;
            temp_v1->unkC4 = -1;
            phi_v1 = temp_v1;
            phi_a0 = temp_a0;
        } while (temp_a0 != (? *)8);
        temp_a0_2 = temp_a1 + 0x88;
        temp_a1->unk0 = (u8) (temp_a1->unk0 & 0xFFFE);
        arg0 = temp_a1;
        func_80195DEC(temp_a0_2, temp_a1, (? *)8);
        arg0->unkDC = 0;
        arg0->unkE0 = 0;
        arg0->unkD0 = 0;
    }
}

s32 func_80197880(s32 *arg0, s32 arg1) {
    void *sp1C;
    s32 temp_t7;
    u8 temp_t0;
    u8 temp_t2;
    u8 temp_t4;
    u8 temp_t4_2;
    u8 temp_t6;
    u8 temp_t6_2;
    u8 temp_t8;
    void *temp_a2;
    void *temp_a3;
    void *temp_v0;
    void *temp_v1;

    temp_t7 = arg1 * 4;
    temp_a2 = arg0 + temp_t7;
    temp_a3 = temp_a2->unk54;
    if (temp_a3 == 0) {
        sp1C = temp_a2;
        temp_v0 = func_80197E48(&D_80208598, temp_a2, temp_a3);
        temp_a2->unk54 = temp_v0;
        if (temp_v0 == 0) {
            temp_a2->unk54 = NULL;
            return -1;
        }
        goto block_4;
    }
    sp1C = temp_a2;
    func_80195C40(temp_a3, temp_a2, temp_a3);
block_4:
    temp_v1 = (arg0 + temp_t7)->unk54;
    temp_v1->unk60 = arg0;
    temp_v1->unk28 = (s32) arg0->unk80;
    temp_v1->unk28 = 0;
    temp_t4 = temp_v1->unk0 | 0x80;
    temp_v1->unk2C = (s32) arg0->unk84;
    temp_t6 = temp_t4 & 0xBF;
    temp_t8 = temp_t6 & 0xDF;
    temp_v1->unk0 = temp_t4;
    temp_v1->unk9 = (u8) arg0->unk4;
    temp_t0 = temp_t8 & 0xEF;
    temp_v1->unk0 = temp_t6;
    temp_t2 = temp_t0 & 0xF7;
    temp_v1->unk0 = temp_t8;
    temp_t4_2 = temp_t2 & 0xFB;
    temp_v1->unk0 = temp_t0;
    temp_t6_2 = temp_t4_2 & 0xFD;
    temp_v1->unk0 = temp_t2;
    temp_v1->unk0 = temp_t4_2;
    temp_v1->unk0 = temp_t6_2;
    temp_v1->unk3 = 0x80;
    temp_v1->unk8 = 0x80;
    temp_v1->unk0 = (u8) (temp_t6_2 & 0xFE);
    temp_v1->unk1 = 0;
    temp_v1->unk30 = 0;
    temp_v1->unk7C = 0;
    temp_v1->unk6 = 0x40;
    temp_v1->unk22 = 0;
    temp_v1->unk1A = 0;
    temp_v1->unk1C = 0;
    temp_v1->unk1E = 0;
    temp_v1->unk3C = 0;
    temp_v1->unk58 = 0;
    temp_v1->unk2 = 0xFF;
    temp_v1->unkA = 0xFFFF;
    temp_v1->unk10 = 0x800;
    temp_v1->unkC = 0x800;
    temp_v1->unk12 = 0;
    temp_v1->unkE = 0;
    temp_v1->unk14 = 0;
    temp_v1->unk16 = 0;
    temp_v1->unk18 = 0;
    temp_v1->unk40 = 1.0f;
    temp_v1->unk44 = 1.0f;
    temp_v1->unk48 = 0.0f;
    return 0;
}

void func_801979D8(void *arg0) {
    u8 temp_t4;
    void *temp_v0;

    if (arg0 != 0) {
        temp_v0 = arg0->unk60;
        if ((&D_802084B0 != temp_v0) && (((u32) (*temp_v0->unk50 * 2) >> 0x1F) == 1)) {
            func_80195C60();
        } else {
            func_80195C40();
        }
        temp_t4 = arg0->unk0 & 0xFF7F;
        arg0->unk0 = temp_t4;
        arg0->unk0 = (u8) (temp_t4 | 0x40);
    }
}

void func_80197A54(u8 *arg0, s32 arg1) {
    void *sp1C;
    void *sp18;
    void *temp_a2;
    void *temp_v0;

    temp_v0 = arg0 + (arg1 * 4);
    temp_a2 = temp_v0->unk54;
    if (temp_a2 != 0) {
        sp18 = temp_v0;
        sp1C = temp_a2;
        func_80197E08(&D_80208598, temp_a2 + 0x80, temp_a2);
        func_801979D8(sp1C);
        temp_v0->unk54 = NULL;
    }
}

void func_80197AA4(u8 *arg0) {
    s32 temp_s0;
    s32 phi_s0;

    *arg0 |= 0x40;
    phi_s0 = 0;
    do {
        func_80197A54(arg0, phi_s0);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 4);
    func_80195EE0(arg0 + 0x88);
    *arg0 &= 0xFF7F;
}

void func_80197B14(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    s32 phi_a1;
    s32 phi_v0;

    phi_a1 = arg1 & 0xFFFF;
    phi_v0 = 0;
    do {
        if ((phi_a1 & 1) != 0) {
            temp_a0 = (arg0 + (phi_v0 * 4))->unk38;
            temp_a0->unk7 = (u8) arg0->unk5;
            temp_a0->unk3 = (u8) arg0->unk3;
            temp_a0->unk2 = (u8) arg0->unk2;
        }
        temp_v1 = (phi_a1 >> 1) & 0xFFFF;
        if ((temp_v1 & 1) != 0) {
            temp_a0_2 = (arg0 + (phi_v0 * 4))->unk3C;
            temp_a0_2->unk7 = (u8) arg0->unk5;
            temp_a0_2->unk3 = (u8) arg0->unk3;
            temp_a0_2->unk2 = (u8) arg0->unk2;
        }
        temp_v1_2 = (temp_v1 >> 1) & 0xFFFF;
        if ((temp_v1_2 & 1) != 0) {
            temp_a0_3 = (arg0 + (phi_v0 * 4))->unk40;
            temp_a0_3->unk7 = (u8) arg0->unk5;
            temp_a0_3->unk3 = (u8) arg0->unk3;
            temp_a0_3->unk2 = (u8) arg0->unk2;
        }
        temp_v1_3 = (temp_v1_2 >> 1) & 0xFFFF;
        if ((temp_v1_3 & 1) != 0) {
            temp_a0_4 = (arg0 + (phi_v0 * 4))->unk44;
            temp_a0_4->unk7 = (u8) arg0->unk5;
            temp_a0_4->unk3 = (u8) arg0->unk3;
            temp_a0_4->unk2 = (u8) arg0->unk2;
        }
        temp_v0 = phi_v0 + 4;
        phi_a1 = (temp_v1_3 >> 1) & 0xFFFF;
        phi_v0 = temp_v0;
    } while (temp_v0 != 0x10);
}

void func_80197C0C(void *arg0, ? arg1) {
    s32 temp_a0;
    s32 temp_s0;
    void *phi_s1;
    s32 phi_s0;

    phi_s1 = arg0;
    phi_s0 = 0;
    do {
        temp_a0 = phi_s1->unk38;
        if ((temp_a0 != (s32) &D_802084B0) == 1) {
            func_80197AA4((u8 *) temp_a0);
        }
        temp_s0 = phi_s0 + 4;
        phi_s1 += 4;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x40);
}

void func_80197C8C(s32 *arg0, s32 arg1, u8 *arg2) {
    s32 temp_s0;
    u8 *temp_s2;
    u8 temp_t1;
    u8 temp_t2;
    u8 *phi_s1;
    s32 phi_s0;

    temp_s2 = (arg0 + ((arg1 & 0xFF) * 4))->unk38;
    temp_s2->unk7C = 0;
    temp_s2->unk64 = arg2;
    temp_t1 = temp_s2->unk0 | 0x80;
    temp_t2 = temp_t1 & 0xBF;
    temp_s2->unk0 = temp_t1;
    temp_s2->unk0 = temp_t2;
    temp_s2->unk20 = 0;
    phi_s1 = temp_s2;
    phi_s0 = 0;
    do {
        if (phi_s1->unk54 != 0) {
            func_80197A54(temp_s2, phi_s0);
        }
        temp_s0 = phi_s0 + 1;
        phi_s1 += 4;
        phi_s0 = temp_s0;
    } while (temp_s0 != 4);
}

void func_80197D24(u8 *arg0) {
    *arg0 |= 0x40;
    func_80197D4C();
}

void func_80197D4C(s32 *arg0) {
    s8 temp_t1;
    u8 temp_v0;

    func_80197C0C((void *)0xFFFF);
    func_80195EE0(arg0 + 0x9C);
    if (((u32) arg0->unk0 >> 0x1F) != 0) {
        temp_t1 = (u8) arg0->unk0 & 0xFF7F;
        arg0->unk0 = temp_t1;
        arg0->unk0 = (s8) (temp_t1 | 0x40);
        if (func_8018F298(arg0->unk4) != 0) {
            func_8018F3B8(arg0->unk4, 3);
        }
        if (func_8018F220(arg0->unk5) != 0) {
            func_8018F388(arg0->unk5, 4);
        }
        temp_v0 = arg0->unk5;
        if (temp_v0 == D_80200C70.unk2C52) {
            D_80200C70.unk2C34 = 1;
            return;
        }
        if (temp_v0 == D_80200C70.unk2C5E) {
            D_80200C70.unk2C34 = 0;
        }
        // Duplicate return node #9. Try simplifying control flow for better match
    }
}

void func_80197E08(? *arg0, ? *arg1) {
    if (arg1->unk0 == 0) {
        arg0->unk0->unk4 = arg1;
        arg1->unk4 = arg0;
        arg1->unk0 = (? *) arg0->unk0;
        arg0->unk0 = arg1;
        arg0->unk8 = (s32) (arg0->unk8 + 1);
        arg1->unkC = (s32) arg0->unkC;
    }
}

void *func_80197E48(? *arg0) {
    void *temp_v1;

    temp_v1 = arg0->unk0;
    if (temp_v1 == arg0) {
        return NULL;
    }
    temp_v1->unk0->unk4 = arg0;
    arg0->unk0 = (void *) temp_v1->unk0;
    temp_v1->unk0 = NULL;
    arg0->unk8 = (s32) (arg0->unk8 - 1);
    return temp_v1->unk8;
}

void func_80197E88(void) {
    ? *temp_s1;
    ? *phi_s2;
    ? *phi_s0;
    ? *phi_s1;

    D_80200C70.unk7928 = &D_80208598;
    D_80200C70.unk792C = &D_80208598;
    D_80200C70.unk7930 = 0;
    D_80200C70.unk7934 = 0;
    phi_s2 = &D_802057B0;
    phi_s0 = &D_80200C70;
    phi_s1 = &D_80205830;
    do {
        phi_s0->unk4BC8 = phi_s2;
        phi_s0->unk4BC0 = 0;
        func_80197E08(&D_80208598, phi_s1);
        temp_s1 = phi_s1 + 0x90;
        phi_s2 += 0x90;
        phi_s0 += 0x90;
        phi_s1 = temp_s1;
    } while (temp_s1 != &D_80208530);
}

u8 func_80197F28(u8 **arg0) {
    u8 *temp_a1;
    u8 temp_v0;

    temp_a1 = *arg0;
    temp_v0 = *temp_a1;
    *arg0 = temp_a1 + 1;
    return temp_v0;
}

u8 func_80197F3C(u8 **arg0) {
    u8 *temp_a1;
    u8 *temp_t6;
    u8 temp_v1;

    temp_a1 = *arg0;
    temp_v1 = *temp_a1;
    temp_t6 = temp_a1 + 1;
    *arg0 = temp_t6;
    *arg0 = temp_t6 + 1;
    return (u8) (s16) (*temp_t6 | (s16) (temp_v1 << 8));
}

u8 func_80197F74(u8 **arg0) {
    u8 *temp_t6;
    u8 *temp_v0;
    u8 temp_v1;
    u8 phi_v1;

    temp_v0 = *arg0;
    temp_v1 = *temp_v0;
    temp_t6 = temp_v0 + 1;
    *arg0 = temp_t6;
    phi_v1 = temp_v1;
    if ((temp_v1 & 0x80) != 0) {
        *arg0 = temp_t6 + 1;
        phi_v1 = (*temp_t6 | ((temp_v1 << 8) & 0x7F00)) & 0xFFFF;
    }
    return phi_v1;
}

void func_80197FB4(void *arg0) {
    s16 temp_v1;
    s32 temp_v0_2;
    u32 temp_v0;
    u32 temp_v0_5;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 phi_v0;
    u8 phi_s0;

    temp_v0 = arg0->unk0;
    if ((temp_v0 >> 0x1F) != 0) {
        temp_v1 = arg0->unk1A;
        if ((s32) temp_v1 >= 2) {
            arg0->unk1A = (s16) (temp_v1 - 1);
            if (((temp_v0 * 4) >= 0) && ((s32) arg0->unk1C >= (s32) arg0->unk1A)) {
                func_80195C40();
                arg0->unk0 = (s8) ((u8) arg0->unk0 | 0x20);
                return;
            }
            // Duplicate return node #17. Try simplifying control flow for better match
            return;
        }
        func_801980D0(arg0);
loop_6:
        temp_v0_2 = func_8019825C(arg0);
        if (temp_v0_2 != -1) {
            temp_v0_3 = func_80198CE0(arg0, temp_v0_2);
            phi_v0 = temp_v0_3;
            phi_s0 = temp_v0_3;
            if ((temp_v0_3 != -1) || (arg0->unk1A != 0)) {
                if (temp_v0_3 != -1) {
                    temp_v0_4 = func_80198640(arg0, temp_v0_3);
                    phi_v0 = temp_v0_4;
                    phi_s0 = temp_v0_4;
                }
                if (phi_v0 != -1) {
                    func_8019815C(arg0, phi_s0);
                }
                temp_v0_5 = arg0->unk0;
                if ((((u32) (temp_v0_5 * 4) >> 0x1F) == 1) && ((arg0->unk3C != 0) || ((temp_v0_5 * 8) < 0))) {
                    func_80195C40(arg0);
                }
            } else {
                goto loop_6;
            }
        }
        // Duplicate return node #17. Try simplifying control flow for better match
    }
}

void func_801980D0(void *arg0) {
    s32 temp_v0_2;
    void *temp_v0;

    if ((arg0->unk0 * 8) >= 0) {
        func_80195C40();
        goto block_5;
    }
    temp_v0 = arg0->unk3C;
    if ((temp_v0 != 0) && (arg0 == temp_v0->unk44)) {
        func_80195C40();
block_5:
    }
    temp_v0_2 = arg0->unk30 & ~0x80;
    if ((temp_v0_2 == 1) || (temp_v0_2 == 2)) {
        arg0->unk30 = 0U;
    }
    arg0->unk0 = (u8) (arg0->unk0 | 1);
}

? func_8019815C(void *arg0, u8 arg1, void *arg2) {
    s32 temp_v0;
    u32 temp_v1;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_v0_2;
    void *phi_a2;

    temp_v0 = arg0->unk0;
    temp_v1 = (u32) (temp_v0 * 8) >> 0x1F;
    phi_a2 = arg2;
    if ((temp_v1 == (void *)1) && (((u32) (temp_v0 << 6) >> 0x1F) == (void *)1)) {

    } else {
        if ((temp_v1 == (void *)1) && (temp_a2 = arg0->unk3C, phi_a2 = temp_a2, (temp_a2 != 0)) && ((temp_v0 * 0x10) < 0) && (arg1 == (void *)1) && (arg0 == temp_a2->unk48)) {
            if (arg0->unk5C == 0) {
                func_80195D84(temp_a2, arg0, temp_a2, (void *)1);
            }
        } else {
            if (arg1 == 0) {
                func_80195C40(arg0, phi_a2, (void *)1);
            }
            temp_v0_2 = func_801965F0(arg0);
            arg0->unk3C = temp_v0_2;
            if ((temp_v0_2 != 0) && (arg0 == temp_v0_2->unk48)) {
                func_80197048(temp_v0_2);
            }
        }
        temp_a2_2 = arg0->unk3C;
        if ((temp_a2_2 != 0) && (arg0 == temp_a2_2->unk48)) {
            func_80197138(temp_a2_2);
        }
    }
    return 0;
}

s32 func_8019825C(void *arg0) {
    s32 *temp_s3;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s8 temp_v0_3;
    u8 **temp_s2;
    u8 *temp_v1_2;
    u8 *temp_v1_3;
    u8 temp_a1_2;
    u8 temp_a1_3;
    u8 temp_a1_4;
    void *temp_s4;
    s8 phi_s0;

    temp_s4 = arg0->unk60;
    temp_s2 = arg0 + 0x64;
    temp_s3 = temp_s4->unk50;
loop_1:
    temp_v0 = func_80197F28((s32) temp_s2);
    temp_s0 = temp_v0 & 0xFF;
    if (temp_v0 < 0xC1) {
        return temp_s0;
    }
    temp_a1 = temp_s0 & 0xFF;
    if (temp_v0 >= 0xF2) {
        if (func_80197538(temp_s3, temp_s2, temp_s0, func_801974D0((s32) temp_s2, temp_a1)) != 0) {
            func_801979D8(arg0);
            return -1;
        }
        goto loop_1;
    }
    temp_v1 = temp_v0 & 0xF0;
    if (temp_v0 >= 0xF1) {
        if (temp_v0 != 0xF1) {
            goto block_48;
        }
        arg0->unk8 = func_80197F28((s32) temp_s2, temp_a1);
    } else if (temp_v0 >= 0xD0) {
        if (temp_v0 != 0xF0) {
            goto block_48;
        }
        arg0->unkA = (u16) (arg0->unkA & (func_80197F3C((s32) temp_s2, temp_a1) ^ 0xFFFF));
    } else {
        switch (temp_v0) {
        case 193:
        case 202:
            temp_v1_2 = *temp_s2;
            temp_a1_2 = *temp_v1_2;
            *temp_s2 = temp_v1_2 + 1;
            if (temp_v0 == 0xC1) {
                arg0->unk4C = (f32) ((f32) (temp_a1_2 * temp_a1_2) / 16129.0f);
            } else {
                arg0->unk6 = temp_a1_2;
            }
            break;
        case 194:
        case 201:
            temp_v1_3 = *temp_s2;
            temp_a1_3 = *temp_v1_3;
            *temp_s2 = temp_v1_3 + 1;
            if (temp_v0 == 0xC9) {
                arg0->unk3 = temp_a1_3;
            } else {
                arg0->unk22 = (s16) temp_a1_3;
            }
            break;
        case 196:
        case 197:
            if (temp_v0 == 0xC4) {
                arg0->unk0 = (u8) (arg0->unk0 | 0x10);
            } else {
                arg0->unk0 = (u8) (arg0->unk0 & 0xFFEF);
            }
            arg0->unk0 = (u8) (arg0->unk0 & 0xFFFD);
            func_80195C40(arg0, (void *) temp_a1);
            break;
        case 195:
            arg0->unk24 = func_80197F74(temp_s2, temp_a1);
            break;
        case 198:
            temp_v0_2 = func_80197F28((s32) temp_s2, temp_a1);
            if (temp_v0_2 >= 0x7E) {
                if (temp_v0_2 == 0x7E) {
                    arg0->unk2 = 1;
                } else if (temp_v0_2 == 0x7F) {
                    arg0->unk2 = 0;
                } else {
                    arg0->unk2 = (s8) temp_v0_2;
                    arg0->unk58 = 0;
                }
                if (temp_v0_2 == 0xFF) {
                    arg0->unk28 = 0U;
                }
            } else {
                temp_v0_3 = func_80199124(temp_s4, temp_v0_2 & 0xFF & 0xFF, arg0 + 0x58, arg0 + 0x28);
                arg0->unk2 = temp_v0_3;
                if (temp_v0_3 == 0) {
                    arg0->unk2 = 0xFF;
                }
            }
            break;
        case 199:
            arg0->unk30 = func_80197F28((s32) temp_s2, temp_a1);
            temp_s0_2 = (func_80197F28((s32) temp_s2) + temp_s4->unk28 + arg0->unk22 + temp_s3->unkE) & 0xFF;
            phi_s0 = (s8) temp_s0_2;
            if (temp_s0_2 >= 0x80) {
                phi_s0 = 0;
            }
            arg0->unk5 = phi_s0;
            if ((arg0->unk30 & 0x80) != 0) {
                arg0->unk20 = (s16) **temp_s2;
                *temp_s2 += 1;
            } else {
                arg0->unk20 = func_80197F74(temp_s2);
            }
            break;
        case 200:
            arg0->unk30 = 0U;
            break;
        case 203:
            arg0->unk2C = (s32) (temp_s3->unk18 + (func_80197F3C((s32) temp_s2, temp_a1) & 0xFFFF));
            // fallthrough
        case 207:
            arg0->unk28 = func_80197F28((s32) temp_s2);
            break;
        case 204:
            arg0->unk0 = (u8) (arg0->unk0 | 4);
            break;
        case 205:
            arg0->unk1 = func_80197F28((s32) temp_s2, temp_a1);
            break;
        case 206:
            arg0->unk44 = (f32) *(&D_801D51B4 + (((func_80197F28((s32) temp_s2, temp_a1) + 0x80) & 0xFF) * 4));
            break;
        default:
block_48:
            if (temp_v1 != 0xD0) {
                if (temp_v1 != 0xE0) {

                } else {
                    arg0->unk3 = (u8) *(temp_s3->unk98 + (temp_v0 & 0xF));
                }
            } else {
                temp_a1_4 = *(temp_s3->unk94 + (temp_v0 & 0xF));
                arg0->unk4C = (f32) ((f32) (temp_a1_4 * temp_a1_4) / 16129.0f);
            }
            break;
        }
    }
    goto loop_1;
}

u8 func_80198640(void *arg0, u8 arg1) {
    s32 sp74;
    void *sp60;
    void *sp40;
    u8 sp3F;
    s32 sp20;
    void *sp1C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f2;
    s16 temp_v0_4;
    s16 temp_v0_8;
    s32 temp_a3;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t5;
    s32 temp_t5_2;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 temp_v0_2;
    s32 temp_v0_5;
    s32 temp_v0_6;
    u16 temp_t4;
    u8 temp_a1;
    u8 temp_v0;
    u8 temp_v0_3;
    u8 temp_v1_2;
    void **temp_v0_9;
    void *temp_a2;
    void *temp_t0;
    void *temp_t2;
    void *temp_v0_7;
    void *temp_v1;
    void *temp_v1_3;
    s32 phi_v0;
    s32 phi_a0;
    s32 phi_a1;
    f32 phi_f0;
    f32 phi_f12;
    void *phi_a2;
    s32 phi_v1;
    s16 phi_v1_2;
    void *phi_a2_2;
    void *phi_t2;
    f32 phi_f0_2;
    f32 phi_f18;
    f32 phi_f0_3;
    s16 phi_v0_2;
    u8 phi_t3;
    f32 phi_f0_4;

    temp_v0 = arg0->unk2;
    temp_v1 = arg0->unk60;
    temp_a2 = arg0;
    temp_t2 = temp_v1->unk50;
    phi_v0 = (s32) temp_v0;
    phi_a2 = temp_a2;
    phi_t3 = (u8) 1;
    phi_a2_2 = temp_a2;
    phi_t3 = (u8) 1;
    phi_t3 = (u8) 1;
    if (temp_v0 == 0xFF) {
        if ((temp_v1->unk0 * 0x10) >= 0) {
            return -1U;
        }
        phi_v0 = (s32) temp_v1->unk26;
        goto block_4;
    }
block_4:
    if (phi_v0 != 0) {
        if (phi_v0 != 1) {
            temp_t1 = arg1 + temp_t2->unkE + temp_v1->unk28 + temp_a2->unk22;
            temp_t1_2 = temp_t1 & 0xFF;
            temp_a2->unk4 = (s8) temp_t1_2;
            if (temp_t1_2 >= 0x80) {
                temp_a2->unk0 = (u8) (temp_a2->unk0 | 0x20);
                return -1U;
            }
            if (temp_a2->unk2 == 0xFF) {
                phi_a0 = temp_v1->unk4C;
            } else {
                phi_a0 = temp_a2->unk58;
            }
            if (temp_a2->unk30 != 0) {
                temp_t0 = temp_a2 + 0x30;
                sp60 = temp_t0;
                temp_v1_2 = temp_a2->unk5;
                phi_a1 = (s32) temp_v1_2;
                if ((s32) temp_v1_2 < temp_t1_2) {
                    phi_a1 = temp_t1_2;
                }
                if (phi_a0 != 0) {
                    arg0 = temp_a2;
                    sp20 = temp_t1_2;
                    sp1C = temp_t0;
                    sp3F = (u8) temp_t1_2;
                    sp40 = temp_t2;
                    temp_v0_2 = func_801954CC(phi_a0, phi_a1, temp_a2, temp_t1_2);
                    temp_t5 = arg0->unk5C;
                    arg0->unk5C = temp_v0_2;
                    phi_a2 = arg0;
                    phi_f0_4 = temp_v0_2->unk4;
                    phi_t3 = temp_v0_2 == temp_t5;
                } else {
                    temp_a2->unk5C = NULL;
                    phi_f0_4 = 1.0f;
                    if (phi_v0 >= 0xC0) {
                        temp_a2->unk5C = (void *) (&D_80200C70 + (phi_v0 * 0x2D0) + 0xFFFDE6A0);
                    }
                }
                temp_v0_3 = *temp_t0;
                temp_f2 = *(&D_801D55B4 + ((temp_t1 & 0xFF) * 4)) * phi_f0_4;
                temp_t8 = temp_v0_3 & ~0x80;
                temp_f14 = *(&D_801D55B4 + (phi_a2->unk5 * 4)) * phi_f0_4;
                phi_a2_2 = phi_a2;
                phi_t2 = temp_v1->unk50;
                switch (temp_t8) {
                case 1:
                case 3:
                case 5:
                    phi_f0 = temp_f2;
                    phi_f12 = temp_f14;
                    break;
                case 2:
                case 4:
                    phi_f0 = temp_f14;
                    phi_f12 = temp_f2;
                    break;
                default:
                    phi_f0 = temp_f2;
                    phi_f12 = temp_f2;
                    break;
                }
                temp_t0->unk8 = (f32) ((phi_f0 / phi_f12) - 1.0f);
                if ((temp_v0_3 & 0x80) != 0) {
                    temp_v0_4 = phi_a2->unk1A;
                    temp_lo = (s32) (temp_v1->unk50->unk8 << 0xF) / (s32) D_80200C70.unk28BC;
                    phi_v1 = temp_lo;
                    if (temp_v0_4 != 0) {
                        phi_v1 = (s32) (temp_lo << 8) / (s32) (temp_v0_4 * phi_a2->unk20);
                    }
                } else {
                    phi_v1 = 0x20000 / (s32) (phi_a2->unk20 * D_80200C70.unk2878);
                }
                phi_v1_2 = (s16) phi_v1;
                if (phi_v1 >= 0x7FFF) {
                    phi_v1_2 = 0x7FFF;
                } else if (phi_v1 <= 0) {
                    phi_v1_2 = 1;
                }
                temp_t0->unk4 = phi_v1_2;
                temp_t0->unk2 = 0;
                phi_a2->unk40 = phi_f12;
                if ((*temp_t0 & ~0x80) == 5) {
                    phi_a2->unk5 = (u8) (temp_t1 & 0xFF);
                }
            } else {
                if (phi_a0 != 0) {
                    arg0 = temp_a2;
                    sp20 = temp_t1_2;
                    sp40 = temp_t2;
                    temp_v0_5 = func_801954CC(phi_a0, temp_t1_2, temp_a2, temp_t1_2);
                    temp_t5_2 = arg0->unk5C;
                    arg0->unk5C = temp_v0_5;
                    arg0->unk40 = (f32) (*(&D_801D55B4 + (temp_t1_2 * 4)) * temp_v0_5->unk4);
                    phi_a2_2 = arg0;
                    phi_t3 = temp_v0_5 == temp_t5_2;
                } else {
                    temp_a2->unk5C = NULL;
                    temp_a2->unk40 = (f32) *(&D_801D55B4 + (temp_t1_2 * 4));
                    if (phi_v0 >= 0xC0) {
                        temp_a2->unk5C = (void *) (&D_80200C70 + (phi_v0 * 0x2D0) + 0xFFFDE6A0);
                    }
                }
                phi_t2 = temp_v1->unk50;
            }
            goto block_47;
        }
        temp_a2->unk4 = arg1;
        temp_a3 = (temp_a2->unk22 << 6) + arg1;
        sp74 = 1;
        sp40 = temp_t2;
        arg0 = temp_a2;
        temp_v0_6 = func_801956C0(temp_v1->unk7, temp_a3 & 0xFFFF, temp_a2, temp_a3);
        phi_a2_2 = arg0;
        phi_t2 = temp_t2;
        if (temp_v0_6 == 0) {
            arg0->unk0 = (u8) (arg0->unk0 | 0x20);
            arg0->unk1E = (s16) (arg0->unk1A + 1);
            return -1U;
        }
        arg0->unk5C = temp_v0_6;
        arg0->unk40 = (f32) temp_v0_6->unk4;
        goto block_47;
    }
    temp_a1 = (arg1 + temp_v1->unk28 + temp_a2->unk22) & 0xFF;
    temp_a2->unk4 = temp_a1;
    sp74 = 1;
    sp40 = temp_t2;
    arg0 = temp_a2;
    temp_v0_7 = func_801955DC(temp_v1->unk7, temp_a1, temp_a2);
    phi_a2_2 = arg0;
    phi_t2 = temp_t2;
    if (temp_v0_7 == 0) {
        arg0->unk0 = (u8) (arg0->unk0 | 0x20);
        arg0->unk1E = (s16) arg0->unk1A;
        return -1U;
    }
    temp_v1_3 = temp_v0_7 + 4;
    arg0->unk2C = (s32) temp_v0_7->unkC;
    arg0->unk28 = (u8) temp_v0_7->unk0;
    if (((s32) arg0->unk0 << 5) >= 0) {
        arg0->unk6 = (u8) temp_v0_7->unk1;
    }
    arg0->unk5C = (s32) temp_v1_3;
    arg0->unk40 = (f32) temp_v1_3->unk4;
block_47:
    temp_v0_8 = phi_a2_2->unk1A;
    phi_a2_2->unk1E = temp_v0_8;
    phi_a2_2->unk40 = (f32) (phi_a2_2->unk40 * phi_a2_2->unk44);
    if (temp_v0_8 == 0) {
        temp_v0_9 = phi_a2_2->unk5C;
        if (temp_v0_9 != 0) {
            temp_t8_2 = (*temp_v0_9)->unk8->unk4;
            temp_f0 = (f32) temp_t8_2;
            phi_f0_2 = temp_f0;
            if (temp_t8_2 < 0) {
                phi_f0_2 = temp_f0 + 4294967296.0f;
            }
        } else {
            phi_f0_2 = 0.0f;
        }
        temp_t4 = phi_t2->unk8;
        temp_f18 = (f32) temp_t4;
        phi_f18 = temp_f18;
        if ((s32) temp_t4 < 0) {
            phi_f18 = temp_f18 + 4294967296.0f;
        }
        temp_f0_2 = (phi_f0_2 * phi_f18 * D_80200C70.unk2894) / phi_a2_2->unk40;
        phi_f0_3 = temp_f0_2;
        if (temp_f0_2 > 32766.0f) {
            phi_f0_3 = 32766.0f;
        }
        phi_a2_2->unk1C = 0;
        phi_a2_2->unk1A = (s16) ((s32) phi_f0_3 + 1);
        if ((phi_a2_2->unk30 != 0) && ((sp60->unk0 & 0x80) != 0)) {
            temp_lo_2 = (s32) (((s32) (phi_t2->unk8 << 0xF) / (s32) D_80200C70.unk28BC) << 8) / (s32) (phi_a2_2->unk1A * phi_a2_2->unk20);
            phi_v0_2 = (s16) temp_lo_2;
            if (temp_lo_2 >= 0x7FFF) {
                phi_v0_2 = 0x7FFF;
            } else if (temp_lo_2 <= 0) {
                phi_v0_2 = 1;
            }
            sp60->unk4 = phi_v0_2;
        }
    }
    return phi_t3;
}

u8 func_80198CE0(void *arg0, s32 arg1) {
    s16 sp3A;
    void *sp30;
    void *sp2C;
    u8 **sp1C;
    s32 sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_6;
    s16 temp_v1_5;
    s16 temp_v1_6;
    s32 temp_a1;
    s32 temp_a1_2;
    u32 temp_hi;
    u32 temp_lo;
    u32 temp_v0_4;
    u32 temp_v0_5;
    u8 **temp_a0;
    u8 **temp_a0_2;
    u8 **temp_a0_3;
    u8 **temp_a0_4;
    u8 *temp_t7;
    u8 *temp_t9;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *temp_v1_3;
    u8 temp_a3;
    u8 temp_a3_2;
    u8 temp_a3_3;
    u8 temp_t2;
    u8 temp_t3;
    u8 temp_v1_4;
    void *temp_a2;
    void *temp_t0;
    s32 phi_a3;
    s32 phi_a3_2;
    void *phi_a2;
    void *phi_t0;
    void *phi_a2_2;
    f32 phi_f2;
    u32 phi_a0;
    u8 phi_v0;
    f32 phi_f18;

    temp_t0 = arg0->unk60;
    temp_a2 = arg0;
    sp2C = temp_t0->unk50;
    phi_a2 = temp_a2;
    phi_a2_2 = temp_a2;
    if (arg1 == 0xC0) {
        temp_a0 = temp_a2 + 0x64;
        arg0 = temp_a2;
        arg0->unk1A = func_80197F74(temp_a0, (s32) temp_a2);
        temp_t2 = arg0->unk0 | 0x20;
        temp_t3 = temp_t2 & 0xFD;
        arg0->unk0 = temp_t2;
        arg0->unk0 = temp_t3;
        return -1U;
    }
    temp_a2->unk0 = (u8) (temp_a2->unk0 & 0xFFDF);
    temp_a1 = arg1 & 0xC0;
    if (((u32) (temp_t0->unk0 << 6) >> 0x1F) == 1) {
        temp_a1_2 = arg1 & 0xC0;
        if (temp_a1_2 != 0) {
            if (temp_a1_2 != 0x40) {
                if (temp_a1_2 != 0x80) {
                    phi_a3 = sp34;
                } else {
                    temp_a0_2 = temp_a2 + 0x64;
                    sp3A = temp_a2->unk26;
                    temp_v1 = *temp_a0_2;
                    temp_a3 = *temp_v1;
                    temp_t7 = temp_v1 + 1;
                    *temp_a0_2 = temp_t7;
                    temp_a2->unk3 = (u8) *temp_t7;
                    *temp_a0_2 += 1;
                    phi_a3 = (s32) temp_a3;
                }
            } else {
                temp_a0_3 = temp_a2 + 0x64;
                sp1C = temp_a0_3;
                sp18 = temp_a1_2;
                arg0 = temp_a2;
                sp30 = temp_t0;
                temp_v0 = func_80197F74(temp_a0_3, temp_a1_2, temp_a2);
                sp3A = temp_v0;
                temp_v1_2 = *temp_a0_3;
                temp_a3_2 = *temp_v1_2;
                *temp_a0_3 = temp_v1_2 + 1;
                arg0->unk3 = 0U;
                arg0->unk26 = temp_v0;
                phi_a3 = (s32) temp_a3_2;
                phi_a2 = arg0;
            }
        } else {
            temp_a0_4 = temp_a2 + 0x64;
            sp1C = temp_a0_4;
            sp18 = temp_a1_2;
            arg0 = temp_a2;
            sp30 = temp_t0;
            temp_v0_2 = func_80197F74(temp_a0_4, temp_a1_2, temp_a2);
            sp3A = temp_v0_2;
            temp_v1_3 = *temp_a0_4;
            temp_a3_3 = *temp_v1_3;
            temp_t9 = temp_v1_3 + 1;
            *temp_a0_4 = temp_t9;
            arg0->unk3 = (u8) *temp_t9;
            *temp_a0_4 += 1;
            arg0->unk26 = temp_v0_2;
            phi_a3 = (s32) temp_a3_3;
            phi_a2 = arg0;
        }
        phi_a3_2 = phi_a3;
        phi_t0 = arg0->unk60;
        phi_a2_2 = phi_a2;
        if ((phi_a3 >= 0x80) || (phi_a3 < 0)) {
            phi_a3_2 = 0x7F;
        }
        temp_f0 = (f32) phi_a3_2;
        phi_a2->unk4C = (f32) ((temp_f0 * temp_f0) / 16129.0f);
        arg1 -= arg1 & 0xC0;
    } else {
        if (temp_a1 != 0) {
            if (temp_a1 != 0x40) {
                if (temp_a1 != 0x80) {

                } else {
                    sp3A = temp_a2->unk26;
                }
            } else {
                sp3A = temp_a2->unk24;
            }
        } else {
            sp18 = temp_a1;
            arg0 = temp_a2;
            sp30 = temp_t0;
            temp_v0_3 = func_80197F74(temp_a2 + 0x64, temp_a1, temp_a2);
            sp3A = temp_v0_3;
            arg0->unk26 = temp_v0_3;
            phi_a2_2 = arg0;
        }
        arg1 -= arg1 & 0xC0;
        phi_t0 = arg0->unk60;
    }
    temp_v1_4 = phi_t0->unkD;
    if (temp_v1_4 != 0) {
        temp_v0_4 = D_8020360C;
        temp_f12 = phi_a2_2->unk4C;
        temp_hi = temp_v0_4 % (u32) temp_v1_4;
        temp_f18 = (f32) temp_hi;
        phi_f18 = temp_f18;
        if ((s32) temp_hi < 0) {
            phi_f18 = temp_f18 + 4294967296.0f;
        }
        temp_f2 = (temp_f12 * phi_f18) / 100.0f;
        phi_f2 = temp_f2;
        if ((temp_v0_4 & 0x8000) != 0) {
            phi_f2 = -temp_f2;
        }
        temp_f0_2 = temp_f12 + phi_f2;
        phi_a2_2->unk48 = temp_f0_2;
        if (temp_f0_2 < 0.0f) {
            phi_a2_2->unk48 = 0.0f;
        } else if (phi_a2_2->unk48 > 1.0f) {
            phi_a2_2->unk48 = 1.0f;
        }
    } else {
        phi_a2_2->unk48 = (f32) phi_a2_2->unk4C;
    }
    phi_a2_2->unk1A = (u16) sp3A;
    phi_a2_2->unk1C = (s16) ((s32) (phi_a2_2->unk3 * (u16) sp3A) >> 8);
    if (phi_t0->unkE != 0) {
        temp_v0_5 = D_8020360C;
        temp_v1_5 = phi_a2_2->unk1C;
        temp_lo = (u32) (temp_v1_5 * (temp_v0_5 % (u32) phi_t0->unkD)) / 0x64U;
        phi_a0 = temp_lo;
        if ((temp_v0_5 & 0x4000) != 0) {
            phi_a0 = (u32) -(s32) temp_lo;
        }
        phi_a2_2->unk1C = (s16) (temp_v1_5 + phi_a0);
        temp_v1_6 = phi_a2_2->unk1C;
        if ((s32) temp_v1_6 < 0) {
            phi_a2_2->unk1C = 0;
        } else {
            temp_v0_6 = (s16) phi_a2_2->unk1A;
            if ((s32) temp_v0_6 < (s32) temp_v1_6) {
                phi_a2_2->unk1C = temp_v0_6;
            }
        }
    }
    if ((((sp2C->unk0 * 4) < 0) && ((phi_t0->unk3 & 0x50) != 0)) || ((phi_t0->unk0 * 8) < 0)) {
        phi_a2_2->unk0 = (u8) (phi_a2_2->unk0 | 0x20);
        return -1U;
    }
    phi_v0 = (u8) arg1;
    if (sp2C->unkDC != 0) {
        phi_a2_2->unk0 = (u8) (phi_a2_2->unk0 | 0x20);
        phi_v0 = -1U;
    }
    return phi_v0;
}

void func_801990F4(s32 *arg0, u8 arg1) {
    s32 temp_v0;
    s8 temp_a1;
    s8 temp_v1;

    temp_v0 = arg1 & 0xFF;
    temp_v1 = temp_v0 & 0xF;
    if (temp_v1 != 0) {
        arg0->unk5 = temp_v1;
    }
    temp_a1 = (temp_v0 >> 4) & 0xFF;
    if (temp_a1 != 0) {
        arg0->unk6 = temp_a1;
    }
}

s8 func_80199124(void *arg0, u8 arg1, void **arg2, void *arg3) {
    s32 sp18;
    void *temp_v0;

    sp18 = (s32) arg1;
    temp_v0 = func_80195508(arg0->unk7, arg1);
    if (temp_v0 == 0) {
        *arg2 = NULL;
        return 0;
    }
    arg3->unk4 = (s32) temp_v0->unk4;
    arg3->unk0 = (u8) temp_v0->unk3;
    *arg2 = temp_v0;
    return (arg1 + 2) & 0xFF;
}

void func_80199198(u8 *arg0, u8 arg1) {
    s16 temp_v0;
    s32 temp_a1;

    temp_a1 = arg1 & 0xFF;
    if (temp_a1 >= 0x80) {
        arg0->unk26 = (s16) temp_a1;
        arg0->unk4C = 0;
        goto block_8;
    }
    if (temp_a1 == 0x7F) {
        arg0->unk26 = 0;
        arg0->unk4C = 1;
        goto block_8;
    }
    if (temp_a1 == 0x7E) {
        arg0->unk26 = 1;
        arg0->unk4C = 2;
        goto block_8;
    }
    temp_v0 = func_80199124((void *) temp_a1, (u8) (arg0 + 0x4C), arg0 + 0x80);
    arg0->unk26 = temp_v0;
    if (temp_v0 == 0) {
        arg0->unk0 &= 0xFFF7;
        return;
    }
block_8:
    arg0->unk0 |= 8;
}

void func_80199244(s32 *arg0, u8 arg1) {
    arg0->unk30 = (f32) ((f32) (arg1 & 0xFF) / 127.0f);
}

void func_80199268(s32 *param_1) {
    u32 sp70;
    s16 temp_s0_9;
    s16 temp_v0_4;
    s32 *temp_s0_2;
    s32 *temp_s6;
    s32 *temp_s7;
    s32 *temp_v0_12;
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s0_10;
    s32 temp_s1_3;
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 temp_v0_8;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s8 (*temp_v0_9)(s8, s32 *);
    s8 temp_v0_11;
    s8 temp_v1_3;
    s8 temp_v1_4;
    s8 temp_v1_5;
    u16 temp_a0_2;
    u16 temp_s1;
    u16 temp_s1_2;
    u16 temp_t6;
    u16 temp_v0_7;
    u16 temp_v1;
    u32 *temp_s0;
    u32 temp_t1;
    u8 *temp_s0_5;
    u8 temp_v0_2;
    u8 temp_v1_2;
    void *temp_a0_4;
    void *temp_a1_3;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s0_8;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_6;
    u8 phi_v1;
    u32 phi_v0;
    u32 *phi_s0;
    u8 phi_s2;
    u8 phi_s2_2;
    u16 phi_s1;
    s8 phi_v0_2;
    s32 phi_s4;
    s32 *phi_s1_2;
    s32 phi_s0_2;
    s32 phi_v0_3;

    if ((param_1->unk0 * 4) < 0) {
        goto block_159;
    }
    temp_s7 = param_1->unk50;
    if (((temp_s7->unk0 * 4) >= 0) || ((param_1->unk3 & 0x80) == 0)) {
        temp_v1 = param_1->unk20;
        temp_s6 = param_1 + 0x64;
        if ((s32) temp_v1 >= 2) {
            param_1->unk20 = (u16) (temp_v1 - 1);
        } else {
        default: // switch 3
        default: // switch 1
loop_7:
            temp_v0 = func_80197F28((s32) temp_s6);
            temp_s2 = temp_v0 & 0xFF;
            if (temp_v0 >= 0xA0) {
                temp_v1_2 = *(&D_801D6100 + temp_v0);
                temp_a1 = temp_v1_2 & 3;
                phi_v1 = temp_v1_2;
                phi_s0 = &sp70;
                if ((temp_a1 & 0xFF) > 0) {
                    do {
                        if ((phi_v1 & 0x80) == 0) {
                            phi_v0 = func_80197F28((s32) temp_s6);
                        } else {
                            phi_v0 = func_80197F3C((s32) temp_s6);
                        }
                        *phi_s0 = phi_v0;
                        temp_s0 = phi_s0 + 4;
                        phi_v1 = (phi_v1 * 2) & 0xFF;
                        phi_s0 = temp_s0;
                    } while ((u32) temp_s0 < (u32) (((temp_a1 & 0xFF) * 4) + &sp70));
                }
                if (temp_s2 >= 0xF2) {
                    temp_v0_2 = func_80197538(temp_s7, (u8 **) temp_s6, temp_s2, (s8) sp70);
                    if (temp_v0_2 != 0) {
                        if (temp_v0_2 == -1) {
                            func_80197AA4((u8 *) param_1);
                        } else {
                            param_1->unk20 = (u16) temp_v0_2;
                        }
                    } else {
                        goto loop_7;
                    }
                } else {
                    switch (temp_s2) { // switch 1
                    case 234: // switch 1
                        param_1->unk0 = (s8) ((u8) param_1->unk0 | 0x20);
                        break;
                    case 241: // switch 1
                        temp_s0_2 = param_1 + 0x88;
                        func_80195EE0(temp_s0_2);
                        func_80196040(temp_s0_2, sp73);
                        goto loop_7;
                    case 240: // switch 1
                        func_80195EE0(param_1 + 0x88);
                        goto loop_7;
                    case 194: // switch 1
                        param_1->unk40 = (s32) (temp_s7->unk18 + sp72);
                        goto loop_7;
                    case 197: // switch 1
                        temp_v1_3 = temp_s6->unk19;
                        if (temp_v1_3 != -1) {
                            temp_s0_3 = param_1->unk40 + (temp_v1_3 * 2);
                            temp_s6->unk0 = temp_s7->unk18 + ((temp_s0_3->unk1 + (temp_s0_3->unk0 << 8)) & 0xFFFF);
                        }
                        goto loop_7;
                    case 235: // switch 1
                        phi_s2 = sp73;
                        if (temp_s7->unk5 != 0xFF) {
                            temp_v0_3 = D_802034D0;
                            temp_s1 = *(temp_v0_3 + (temp_s7->unk4 * 2));
                            phi_s2 = *(((temp_s1 + *(temp_s1 + temp_v0_3)) - sp73) + temp_v0_3);
                        }
                        if (func_8018C380(1, 2, phi_s2) != 0) {
                            param_1->unk7 = phi_s2;
                        }
                        sp70 = sp74;
                        // fallthrough
                    case 193: // switch 1
                        func_80199198((u8 *) param_1, sp73);
                        goto loop_7;
                    case 195: // switch 1
                        param_1->unk0 = (s8) ((u8) param_1->unk0 & 0xFFFD);
                        goto loop_7;
                    case 196: // switch 1
                        param_1->unk0 = (s8) ((u8) param_1->unk0 | 2);
                        goto loop_7;
                    case 223: // switch 1
                        func_80199244(param_1, sp73);
                        param_1->unk1 = (u8) (param_1->unk1 | 0x40);
                        goto loop_7;
                    case 224: // switch 1
                        param_1->unk1 = (u8) (param_1->unk1 | 0x40);
                        param_1->unk2C = (f32) ((f32) sp73 * 0.0078125f);
                        goto loop_7;
                    case 222: // switch 1
                        param_1->unk1 = (u8) (param_1->unk1 | 0x80);
                        param_1->unk3C = (f32) ((f32) sp72 / 32768.0f);
                        goto loop_7;
                    case 211: // switch 1
                        param_1->unk1 = (u8) (param_1->unk1 | 0x80);
                        param_1->unk3C = (f32) *(&D_801D4DB4 + (((sp73 + 0x80) & 0xFF) * 4));
                        goto loop_7;
                    case 238: // switch 1
                        param_1->unk1 = (u8) (param_1->unk1 | 0x80);
                        param_1->unk3C = (f32) *(&D_801D51B4 + (((sp73 + 0x80) & 0xFF) * 4));
                        goto loop_7;
                    case 221: // switch 1
                        param_1->unk1 = (u8) (param_1->unk1 | 0x20);
                        param_1->unkA = sp73;
                        goto loop_7;
                    case 220: // switch 1
                        param_1->unk1 = (u8) (param_1->unk1 | 0x20);
                        param_1->unkB = sp73;
                        goto loop_7;
                    case 219: // switch 1
                        param_1->unk28 = (s16) (s8) sp73;
                        goto loop_7;
                    case 218: // switch 1
                        param_1->unk84 = (s32) (temp_s7->unk18 + sp72);
                        goto loop_7;
                    case 217: // switch 1
                        param_1->unk80 = sp73;
                        goto loop_7;
                    case 216: // switch 1
                        param_1->unk14 = 0;
                        param_1->unk1C = 0;
                        param_1->unk18 = (s16) (sp73 * 8);
                        goto loop_7;
                    case 215: // switch 1
                        param_1->unk1A = 0;
                        temp_v0_4 = sp73 << 5;
                        param_1->unk16 = temp_v0_4;
                        param_1->unk12 = temp_v0_4;
                        goto loop_7;
                    case 226: // switch 1
                        param_1->unk14 = (s16) (sp73 * 8);
                        param_1->unk18 = (s16) (sp77 * 8);
                        param_1->unk1C = (s16) (sp7B * 0x10);
                        goto loop_7;
                    case 225: // switch 1
                        param_1->unk12 = (s16) (sp73 << 5);
                        param_1->unk16 = (s16) (sp77 << 5);
                        param_1->unk1A = (s16) (sp7B * 0x10);
                        goto loop_7;
                    case 227: // switch 1
                        param_1->unk1E = (s16) (sp73 * 0x10);
                        goto loop_7;
                    case 212: // switch 1
                        param_1->unk4 = sp73;
                        goto loop_7;
                    case 198: // switch 1
                        phi_s2_2 = sp73;
                        if (temp_s7->unk5 != 0xFF) {
                            temp_v0_5 = D_802034D0;
                            temp_s1_2 = *(temp_v0_5 + (temp_s7->unk4 * 2));
                            phi_s2_2 = *(((temp_s1_2 + *(temp_s1_2 + temp_v0_5)) - sp73) + temp_v0_5);
                        }
                        if (func_8018C380(1, 2, phi_s2_2) != 0) {
                            param_1->unk7 = phi_s2_2;
                        }
                        goto loop_7;
                    case 199: // switch 1
                        *(temp_s7->unk18 + sp76) = (u8) temp_s6->unk19 + sp73;
                        goto loop_7;
                    case 200: // switch 1
                    case 201: // switch 1
                    case 204: // switch 1
                        if (temp_s2 == 0xC8) {
                            temp_s6->unk19 = (s8) (temp_s6->unk19 - (s8) sp73);
                        } else if (temp_s2 == 0xCC) {
                            temp_s6->unk19 = (s8) sp73;
                        } else {
                            temp_s6->unk19 = (s8) (temp_s6->unk19 & (s8) sp73);
                        }
                        goto loop_7;
                    case 205: // switch 1
                        func_80197AA4((temp_s7 + (sp73 * 4))->unk38);
                        goto loop_7;
                    case 202: // switch 1
                        param_1->unk1 = (u8) (param_1->unk1 | 0x40);
                        param_1->unk3 = sp73;
                        goto loop_7;
                    case 203: // switch 1
                        temp_s6->unk19 = (s8) *(temp_s7->unk18 + (sp72 + temp_s6->unk19));
                        goto loop_7;
                    case 206: // switch 1
                        param_1->unk24 = sp72;
                        goto loop_7;
                    case 207: // switch 1
                        temp_v0_6 = temp_s7->unk18 + sp72;
                        temp_v0_6->unk0 = (s8) ((s32) param_1->unk24 >> 8);
                        temp_v0_6->unk1 = (s8) param_1->unk24;
                        goto loop_7;
                    case 208: // switch 1
                        if ((sp73 & 0x80) != 0) {
                            param_1->unk0 = (s8) ((u8) param_1->unk0 | 4);
                        } else {
                            param_1->unk0 = (s8) ((u8) param_1->unk0 & 0xFFFB);
                        }
                        param_1->unkD8 = (s8) (sp73 & 0x7F);
                        goto loop_7;
                    case 209: // switch 1
                        param_1->unk2 = sp73;
                        goto loop_7;
                    case 210: // switch 1
                        param_1->unk81 = sp73;
                        goto loop_7;
                    case 229: // switch 1
                        param_1->unk8 = sp73;
                        goto loop_7;
                    case 228: // switch 1
                        temp_v1_4 = temp_s6->unk19;
                        if (temp_v1_4 != -1) {
                            temp_s6[temp_s6->unk18].unk4 = (s32) temp_s6->unk0;
                            temp_s0_4 = param_1->unk40 + (temp_v1_4 * 2);
                            temp_s6->unk18 = (u8) (temp_s6->unk18 + 1);
                            temp_s6->unk0 = temp_s7->unk18 + ((temp_s0_4->unk1 + (temp_s0_4->unk0 << 8)) & 0xFFFF);
                        }
                        goto loop_7;
                    case 230: // switch 1
                        param_1->unk9 = sp73;
                        goto loop_7;
                    case 231: // switch 1
                        temp_s0_5 = temp_s7->unk18 + sp72;
                        temp_s0_6 = temp_s0_5 + 3;
                        param_1->unk3 = (u8) *temp_s0_5;
                        param_1->unk2 = (u8) temp_s0_6->unk-2;
                        func_801990F4(param_1, temp_s0_6->unk-1);
                        temp_s0_7 = temp_s0_6 + 4;
                        param_1->unk28 = (s16) temp_s0_6->unk0;
                        param_1->unkA = (u8) temp_s0_7->unk-3;
                        param_1->unkB = (u8) temp_s0_7->unk-2;
                        param_1->unk4 = (u8) temp_s0_7->unk-1;
                        param_1->unk1 = (u8) (param_1->unk1 | 0x20);
                        param_1->unk8 = (u8) temp_s0_7->unk0;
                        goto loop_7;
                    case 232: // switch 1
                        param_1->unk3 = (u8) sp70;
                        param_1->unk2 = (u8) sp74;
                        func_801990F4(param_1, sp7B);
                        param_1->unk28 = (s16) func_80197F28((s32) temp_s6);
                        param_1->unkA = func_80197F28((s32) temp_s6);
                        param_1->unkB = func_80197F28((s32) temp_s6);
                        param_1->unk4 = func_80197F28((s32) temp_s6);
                        param_1->unk8 = func_80197F28((s32) temp_s6);
                        param_1->unk1 = (u8) (param_1->unk1 | 0x20);
                        goto loop_7;
                    case 236: // switch 1
                        param_1->unk18 = 0;
                        param_1->unk14 = 0;
                        param_1->unk1C = 0;
                        param_1->unk16 = 0;
                        param_1->unk12 = 0;
                        param_1->unk1A = 0;
                        param_1->unkD4 = 0;
                        param_1->unkC = 0U;
                        param_1->unk81 = 0U;
                        param_1->unkD = 0;
                        param_1->unkE = 0;
                        param_1->unkF = 0;
                        param_1->unk22 = 0;
                        param_1->unk9 = 0U;
                        param_1->unkDC = 0U;
                        param_1->unkE0 = 0;
                        param_1->unk3C = 1.0f;
                        goto loop_7;
                    case 233: // switch 1
                        func_801990F4(param_1, sp73);
                        goto loop_7;
                    case 237: // switch 1
                        param_1->unkC = sp73;
                        goto loop_7;
                    case 176: // switch 1
                        param_1->unkD4 = (s32) (temp_s7->unk18 + sp72);
                        goto loop_7;
                    case 177: // switch 1
                        param_1->unkD4 = 0;
                        goto loop_7;
                    case 179: // switch 1
                        temp_a0 = param_1->unkD4;
                        if (temp_a0 != 0) {
                            func_8018C994(temp_a0, ((s32) sp73 >> 4) & 0xF & 0xFF, sp73 & 0xF & 0xFF);
                        }
                        goto loop_7;
                    case 178: // switch 1
                        param_1->unk24 = (u16) *(temp_s7->unk18 + (sp72 + (temp_s6->unk19 * 2)));
                        goto loop_7;
                    case 180: // switch 1
                        param_1->unk40 = (s32) (temp_s7->unk18 + param_1->unk24);
                        goto loop_7;
                    case 181: // switch 1
                        param_1->unk24 = (u16) *(param_1->unk40 + (temp_s6->unk19 * 2));
                        goto loop_7;
                    case 182: // switch 1
                        temp_s6->unk19 = (s8) *(param_1->unk40 + temp_s6->unk19);
                        goto loop_7;
                    case 183: // switch 1
                        if (sp70 == 0) {
                            param_1->unk24 = (u16) D_8020360C;
                        } else {
                            param_1->unk24 = (u16) ((u32) D_8020360C % sp70);
                        }
                        goto loop_7;
                    case 184: // switch 1
                        if (sp70 == 0) {
                            temp_s6->unk19 = (s8) D_8020360C;
                        } else {
                            temp_s6->unk19 = (s8) ((u32) D_8020360C % sp70);
                        }
                        goto loop_7;
                    case 168: // switch 1
                        temp_v0_7 = func_80194668();
                        if (sp70 == 0) {
                            param_1->unk24 = temp_v0_7;
                        } else {
                            param_1->unk24 = (u16) ((u32) temp_v0_7 % sp70);
                        }
                        temp_t6 = param_1->unk24 + sp74;
                        temp_v0_8 = temp_t6 & 0xFFFF;
                        param_1->unk24 = temp_t6;
                        param_1->unk24 = (u16) ((((temp_v0_8 / 0x100) + 0x80) << 8) | (temp_v0_8 % 0x100));
                        goto loop_7;
                    case 185: // switch 1
                        param_1->unkD = (s8) sp70;
                        goto loop_7;
                    case 186: // switch 1
                        param_1->unkE = (s8) sp70;
                        goto loop_7;
                    case 187: // switch 1
                        param_1->unkF = (s8) sp70;
                        param_1->unk22 = (s16) sp74;
                        goto loop_7;
                    case 188: // switch 1
                        param_1->unk24 = (u16) (param_1->unk24 + sp70);
                        goto loop_7;
                    case 189: // switch 1
                        param_1->unkDC = sp70;
                        goto loop_7;
                    case 190: // switch 1
                        if (sp70 < 5U) {
                            temp_v0_9 = *(&D_80203618 + (sp70 * 4));
                            if (temp_v0_9 != 0) {
                                D_80208E6C = temp_v0_9;
                                temp_s6->unk19 = temp_v0_9(temp_s6->unk19, param_1);
                            }
                        }
                        goto loop_7;
                    case 160: // switch 1
                    case 161: // switch 1
                    case 162: // switch 1
                    case 163: // switch 1
                        if ((temp_s2 == 0xA0) || (temp_s2 == 0xA2)) {
                            phi_s1 = sp72;
                        } else {
                            phi_s1 = param_1->unk24;
                        }
                        temp_v0_10 = param_1->unkD0;
                        if (temp_v0_10 != 0) {
                            if ((temp_s2 == 0xA0) || (temp_s2 == 0xA1)) {
                                temp_s6->unk19 = (s8) *(temp_v0_10 + phi_s1);
                            } else {
                                *(temp_v0_10 + phi_s1) = temp_s6->unk19;
                            }
                        }
                        goto loop_7;
                    case 164: // switch 1
                        param_1->unk10 = (s8) sp70;
                        goto loop_7;
                    case 165: // switch 1
                        temp_s6->unk19 = (s8) (temp_s6->unk19 + param_1->unk11);
                        goto loop_7;
                    case 166: // switch 1
                        *(temp_s7->unk18 + (sp76 + param_1->unk11)) = (u8) temp_s6->unk19 + sp73;
                        goto loop_7;
                    case 167: // switch 1
                        temp_v1_5 = temp_s6->unk19;
                        if ((sp70 & 0x80) == 0) {
                            phi_v0_3 = temp_v1_5 << (sp70 & 0xF);
                        } else {
                            phi_v0_3 = (s32) temp_v1_5 >> (sp70 & 0xF);
                        }
                        temp_v0_11 = phi_v0_3 & 0xFF;
                        phi_v0_2 = temp_v0_11;
                        if ((sp70 & 0x40) != 0) {
                            phi_v0_2 = ((temp_v0_11 & 0x7F) | (temp_v1_5 & 0x80)) & 0xFF;
                        }
                        temp_s6->unk19 = phi_v0_2;
                        goto loop_7;
                    }
                }
            } else {
                temp_v1_6 = temp_v0 & 0xF;
                if (temp_v0 >= 0x70) {
                    temp_a1_2 = temp_v0 & 7;
                    temp_v1_7 = temp_v0 & 0xF8;
                    phi_s4 = temp_a1_2 & 0xFF;
                    if ((temp_v1_7 != 0x70) && ((temp_a1_2 & 0xFF) >= 4)) {
                        phi_s4 = 0;
                    }
                    switch (temp_v1_7) { // switch 2
                    case 128: // switch 2
                        temp_v0_12 = param_1[phi_s4].unk54;
                        if (temp_v0_12 != 0) {
                            temp_s6->unk19 = (s8) ((u32) (*temp_v0_12 * 2) >> 0x1F);
                        } else {
                            temp_s6->unk19 = -1;
                        }
                        break;
                    case 136: // switch 2
                        temp_s1_3 = func_80197F3C((s32) temp_s6, temp_a1_2) & 0xFFFF;
                        if (func_80197880(param_1, phi_s4) == 0) {
                            param_1[phi_s4].unk54->unk64 = (s32) (temp_s7->unk18 + temp_s1_3);
                        }
                        break;
                    case 144: // switch 2
                        func_80197A54((u8 *) param_1, phi_s4);
                        break;
                    case 152: // switch 2
                        if ((temp_s6->unk19 != -1) && (func_80197880(param_1, phi_s4) != -1)) {
                            temp_s0_8 = param_1->unk40 + (temp_s6->unk19 * 2);
                            param_1[phi_s4].unk54->unk64 = (s32) (temp_s7->unk18 + ((temp_s0_8->unk1 + (temp_s0_8->unk0 << 8)) & 0xFFFF));
                        }
                        break;
                    case 112: // switch 2
                        (param_1 + phi_s4)->unkC8 = (s8) temp_s6->unk19;
                        break;
                    case 120: // switch 2
                        temp_s0_9 = func_80197F3C((s32) temp_s6, temp_a1_2);
                        if (func_80197880(param_1, phi_s4) == 0) {
                            param_1[phi_s4].unk54->unk64 = (s32) (temp_s6->unk0 + temp_s0_9);
                        }
                        break;
                    }
                    goto loop_7;
                }
                temp_t1 = temp_v0 & 0xF0;
                temp_s4 = temp_v1_6 & 0xFF;
                switch (temp_t1) { // switch 3
                case 0: // switch 3
                    temp_a0_2 = temp_v1_6 & 0xFF;
                    param_1->unk20 = temp_a0_2;
                    if (temp_a0_2 == 0) {
                        goto loop_7;
                    }
                    break;
                case 16: // switch 3
                    if ((temp_v1_6 & 0xFF) < 8) {
                        temp_v0_13 = param_1 + (temp_s2 & 0xF);
                        temp_v0_13->unkC8 = -1;
                        if (func_80190F64(param_1->unk7, temp_s6->unk19, temp_v0_13 + 0xC8) == -1) {

                        }
                    } else {
                        temp_v0_14 = param_1 + (((temp_s2 & 0xF) - 8) & 0xFF);
                        temp_v0_14->unkC8 = -1;
                        if (func_80190F64(param_1->unk7, param_1->unk24 + 0x100, temp_v0_14 + 0xC8) == -1) {

                        }
                    }
                    goto loop_7;
                case 96: // switch 3
                    temp_a0_3 = temp_v1_6 & 0xFF;
                    temp_a1_3 = param_1 + temp_a0_3;
                    temp_s6->unk19 = (s8) temp_a1_3->unkC8;
                    if (temp_a0_3 < 2) {
                        temp_a1_3->unkC8 = -1;
                    }
                    goto loop_7;
                case 80: // switch 3
                    temp_s6->unk19 = (s8) (temp_s6->unk19 - (param_1 + (temp_v1_6 & 0xFF))->unkC8);
                    goto loop_7;
                case 32: // switch 3
                    func_80197C8C(temp_s7, temp_s2 & 0xF, temp_s7->unk18 + (func_80197F3C((s32) temp_s6) & 0xFFFF));
                    goto loop_7;
                case 48: // switch 3
                    ((temp_s7 + (temp_s4 * 4))->unk38 + func_80197F28((s32) temp_s6))->unkC8 = (s8) temp_s6->unk19;
                    goto loop_7;
                case 64: // switch 3
                    temp_s6->unk19 = (s8) ((temp_s7 + (temp_s4 * 4))->unk38 + func_80197F28((s32) temp_s6))->unkC8;
                    goto loop_7;
                }
            }
        }
block_159:
        phi_s1_2 = param_1;
        phi_s0_2 = 0;
        do {
            temp_a0_4 = phi_s1_2->unk54;
            if (temp_a0_4 != 0) {
                func_80197FB4(temp_a0_4);
            }
            temp_s0_10 = phi_s0_2 + 4;
            phi_s1_2 += 4;
            phi_s0_2 = temp_s0_10;
        } while (temp_s0_10 != 0x10);
    }
}

void func_8019A0BC(s32 *arg0) {
    u8 sp6E;
    s32 sp28;
    f32 temp_f16;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s32 *temp_a0_8;
    s32 *temp_s0_2;
    s32 temp_s0;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_7;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t0_3;
    s32 temp_t1;
    s32 temp_t5;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_12;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_6;
    s8 temp_a1;
    s8 temp_a1_2;
    s8 temp_a1_4;
    u16 temp_t2;
    u16 temp_t3;
    u16 temp_v0_2;
    u16 temp_v0_6;
    u16 temp_v1_5;
    u8 **temp_s1;
    u8 *temp_a0_6;
    u8 *temp_a1_5;
    u8 *temp_a2;
    u8 *temp_a3;
    u8 temp_a0_4;
    u8 temp_a0_7;
    u8 temp_a1_3;
    u8 temp_s0_3;
    u8 temp_s0_6;
    u8 temp_v0_11;
    u8 temp_v0_4;
    u8 temp_v0_7;
    u8 temp_v0_8;
    u8 temp_v1_4;
    void *temp_a0_5;
    void *temp_v0_9;
    void *temp_v1_7;
    s32 phi_v0;
    s16 phi_v1;
    s32 phi_s0;
    s32 phi_t0;
    s32 *phi_v1_2;
    s32 phi_t1;
    s32 *phi_s1;
    s32 phi_s0_2;

    if (((u32) arg0->unk0 >> 0x1F) != 0) {
        if ((func_8018F298(arg0->unk4) == 0) || (func_8018F220(arg0->unk5) == 0)) {
            func_8018F298(arg0->unk4);
            func_8018F298(arg0->unk5);
            func_80197D4C(arg0);
            return;
        }
        func_8018F3B8(arg0->unk4, 2);
        func_8018F388(arg0->unk5, 2);
        if (((arg0->unk0 * 4) >= 0) || ((arg0->unk3 & 0x80) == 0)) {
            arg0->unkE0 = (s32) (arg0->unkE0 + 1);
            temp_a0 = D_80200C70.unk28BC;
            temp_v0 = arg0->unk8 + arg0->unkC;
            phi_v0 = temp_v0;
            if ((s32) temp_a0 < temp_v0) {
                phi_v0 = (s32) temp_a0;
            }
            temp_t2 = arg0->unkA + phi_v0;
            arg0->unkA = temp_t2;
            temp_a0_2 = D_80200C70.unk28BC;
            temp_v1 = temp_t2 & 0xFFFF;
            if ((temp_v1 >= (s32) temp_a0_2) && (arg0->unkA = (u16) (temp_v1 - temp_a0_2), arg0->unk16 = (u16) (arg0->unk16 + 1), (((u32) (arg0->unk0 << 6) >> 0x1F) != 1))) {
                temp_v0_2 = arg0->unk10;
                if ((s32) temp_v0_2 >= 2) {
                    arg0->unk10 = (u16) (temp_v0_2 - 1);
                    goto block_93;
                }
                temp_s1 = arg0 + 0x78;
                arg0->unk0 = (s8) ((u8) arg0->unk0 | 4);
loop_13:
                temp_v0_3 = func_80197F28((s32) temp_s1);
                temp_s0 = temp_v0_3 & 0xFF;
                if (temp_v0_3 >= 0xF2) {
                    temp_v0_4 = func_80197538(arg0, temp_s1, temp_s0, func_801974D0((s32) temp_s1, temp_s0 & 0xFF));
                    if (temp_v0_4 != 0) {
                        if (temp_v0_4 == -1) {
                            func_80197D4C(arg0);
                        } else {
                            arg0->unk10 = (u16) temp_v0_4;
                        }
block_93:
                        phi_s1 = arg0;
                        phi_s0_2 = 0;
                        do {
                            temp_a0_8 = phi_s1->unk38;
                            if (((u32) *temp_a0_8 >> 0x1F) != 0) {
                                func_80199268(temp_a0_8);
                            }
                            temp_s0_7 = phi_s0_2 + 4;
                            phi_s1 += 4;
                            phi_s0_2 = temp_s0_7;
                        } while (temp_s0_7 != 0x40);
                        // Duplicate return node #97. Try simplifying control flow for better match
                        return;
                    }
                    goto block_92;
                }
                temp_v1_2 = temp_v0_3 & 0xFF;
                temp_v0_5 = temp_v1_2 & 0xF0;
                if (temp_v1_2 >= 0xC0) {
                    switch (temp_v1_2) { // switch 1
                    case 241: // switch 1
                        temp_s0_2 = arg0 + 0x9C;
                        func_80195EE0(temp_s0_2);
                        func_80196040(temp_s0_2, func_80197F28((s32) temp_s1));
                        goto loop_13;
                    case 240: // switch 1
                        func_80195EE0(arg0 + 0x9C);
                        goto loop_13;
                    case 223: // switch 1
                        arg0->unkE = 0;
                        // fallthrough
                    case 222: // switch 1
                        arg0->unkE = (s16) (arg0->unkE + func_80197F28((s32) temp_s1));
                        goto loop_13;
                    case 221: // switch 1
                        temp_t3 = func_80197F28((s32) temp_s1) * 0x30;
                        arg0->unk8 = temp_t3;
                        temp_a0_3 = D_8020352C;
                        temp_v1_3 = temp_t3 & 0xFFFF;
                        phi_v1 = (s16) temp_v1_3;
                        if ((s32) temp_a0_3 < temp_v1_3) {
                            arg0->unk8 = (u16) temp_a0_3;
                            phi_v1 = temp_a0_3 & 0xFFFF;
                        }
                        if ((s32) phi_v1 <= 0) {
                            arg0->unk8 = 1U;
                        } else {
                            goto block_92;
                        }
                        goto loop_13;
                    case 220: // switch 1
                        arg0->unkC = (s16) (func_80197F28((s32) temp_s1) * 0x30);
                        goto loop_13;
                    case 218: // switch 1
                        temp_s0_3 = func_80197F28((s32) temp_s1) & 0xFF;
                        temp_v0_6 = func_80197F3C((s32) temp_s1);
                        if ((temp_s0_3 != 0) && (temp_s0_3 != 1)) {
                            if (temp_s0_3 != 2) {

                            } else {
                                temp_f16 = (f32) (temp_v0_6 & 0xFFFF);
                                arg0->unk12 = temp_v0_6;
                                arg0->unk1 = temp_s0_3;
                                arg0->unk20 = (f32) ((0.0f - arg0->unk1C) / temp_f16);
                            }
                        } else if (arg0->unk1 != 2) {
                            arg0->unk14 = temp_v0_6;
                            arg0->unk1 = temp_s0_3;
                        } else {
                            goto block_92;
                        }
                        goto loop_13;
                    case 219: // switch 1
                        temp_v0_7 = func_80197F28((s32) temp_s1);
                        temp_v1_4 = arg0->unk1;
                        if (temp_v1_4 != 0) {
                            if (temp_v1_4 != 1) {
                                if (temp_v1_4 != 2) {

                                } else {
                                    goto block_92;
                                }
                            } else {
                                arg0->unk1 = 0U;
                                arg0->unk1C = 0.0f;
                                goto block_42;
                            }
                        } else {
block_42:
                            temp_v1_5 = arg0->unk14;
                            arg0->unk12 = temp_v1_5;
                            if (temp_v1_5 != 0) {
                                arg0->unk20 = (f32) ((((f32) temp_v0_7 / 127.0f) - arg0->unk1C) / (f32) (temp_v1_5 & 0xFFFF));
                            } else {
                                arg0->unk1C = (f32) ((f32) temp_v0_7 / 127.0f);
                            }
                        }
                        goto loop_13;
                    case 217: // switch 1
                        arg0->unk2C = (f32) ((f32) func_80197F28((s32) temp_s1) / 127.0f);
                        goto loop_13;
                    case 215: // switch 1
                        func_80197B14(arg0, func_80197F3C((s32) temp_s1) & 0xFFFF);
                        goto loop_13;
                    case 214: // switch 1
                        func_80197F3C((s32) temp_s1);
                        goto loop_13;
                    case 213: // switch 1
                        arg0->unk28 = (f32) ((f32) func_80197F28((s32) temp_s1) / 127.0f);
                        goto loop_13;
                    case 212: // switch 1
                        arg0->unk0 = (s8) ((u8) arg0->unk0 | 0x20);
                        goto loop_13;
                    case 211: // switch 1
                        arg0->unk3 = func_80197F28((s32) temp_s1);
                        goto loop_13;
                    case 209: // switch 1
                    case 210: // switch 1
                        temp_v1_6 = arg0->unk18 + (func_80197F3C((s32) temp_s1) & 0xFFFF);
                        if (temp_s0 == 0xD2) {
                            arg0->unk94 = temp_v1_6;
                        } else {
                            arg0->unk98 = temp_v1_6;
                        }
                        goto loop_13;
                    case 208: // switch 1
                        arg0->unk2 = func_80197F28((s32) temp_s1);
                        goto loop_13;
                    case 206: // switch 1
                        temp_v0_8 = func_80197F28((s32) temp_s1);
                        if (temp_v0_8 == 0) {
                            temp_s1->unk19 = (s8) ((u32) D_8020360C >> 2);
                        } else {
                            temp_s1->unk19 = (s8) ((u32) ((u32) D_8020360C >> 2) % (u32) (temp_v0_8 & 0xFF));
                        }
                        goto loop_13;
                    case 205: // switch 1
                        temp_a1 = temp_s1->unk19;
                        if ((temp_a1 != -1) && (temp_a0_4 = temp_s1->unk18, temp_t5 = func_80197F3C((s32) temp_s1) & 0xFFFF, (temp_a0_4 != 3))) {
                            temp_s1[temp_a0_4].unk4 = (u8 *) temp_s1->unk0;
                            temp_v0_9 = arg0->unk18 + (temp_t5 + (temp_a1 * 2));
                            temp_s1->unk18 = (u8) (temp_s1->unk18 + 1);
                            temp_s1->unk0 = arg0->unk18 + ((temp_v0_9->unk1 + (temp_v0_9->unk0 << 8)) & 0xFFFF);
                        } else {
                            goto block_92;
                        }
                        goto loop_13;
                    case 204: // switch 1
                        temp_s1->unk19 = func_80197F28((s32) temp_s1);
                        goto loop_13;
                    case 201: // switch 1
                        temp_s1->unk19 = (s8) (temp_s1->unk19 & func_80197F28((s32) temp_s1));
                        goto loop_13;
                    case 200: // switch 1
                        temp_s1->unk19 = (s8) (temp_s1->unk19 - func_80197F28((s32) temp_s1));
                        goto loop_13;
                    case 199: // switch 1
                        temp_s0_4 = func_80197F28((s32) temp_s1) & 0xFF;
                        *(arg0->unk18 + (func_80197F3C((s32) temp_s1) & 0xFFFF)) = (u8) temp_s1->unk19 + temp_s0_4;
                        goto loop_13;
                    case 194: // switch 1
                        temp_a1_2 = temp_s1->unk19;
                        if (temp_a1_2 != -1) {
                            temp_v0_10 = arg0->unk18;
                            temp_a0_5 = temp_v0_10 + ((func_80197F3C((s32) temp_s1) & 0xFFFF) + (temp_a1_2 * 2));
                            temp_s1->unk0 = temp_v0_10 + ((temp_a0_5->unk1 + (temp_a0_5->unk0 << 8)) & 0xFFFF);
                        } else {
                            goto block_92;
                        }
                        goto loop_13;
                    case 198: // switch 1
                        arg0->unk0 = (s8) ((u8) arg0->unk0 | 2);
                        return;
                    case 197: // switch 1
                        arg0->unk16 = func_80197F3C((s32) temp_s1);
                        goto loop_13;
                    case 239: // switch 1
                        func_80197F3C((s32) temp_s1);
                        func_80197F28((s32) temp_s1);
                        goto loop_13;
                    case 196: // switch 1
                        temp_v0_11 = func_80197F28((s32) temp_s1);
                        phi_s0 = temp_v0_11 & 0xFF;
                        if (((temp_v0_11 != 0xFF) || (phi_s0 = (s32) arg0->unk7, (arg0->unk1 != 2))) && (temp_a1_3 = func_80197F28((s32) temp_s1), sp28 = phi_s0, func_8018FAD0(phi_s0, temp_a1_3, 0), (arg0->unk7 == sp28))) {
                            return;
                        }
                        goto block_92;
                    case 195: // switch 1
                        temp_a1_4 = temp_s1->unk19;
                        if (temp_a1_4 != -1) {
                            phi_t0 = (s32) *(arg0->unk18 + ((func_80197F3C((s32) temp_s1) & 0xFFFF) + (temp_a1_4 * 2)));
                            phi_v1_2 = arg0;
                            phi_t1 = 0;
                            do {
                                temp_a0_6 = phi_v1_2->unk38;
                                *temp_a0_6 = ((phi_t0 * 0x10) & 0x10) | (*temp_a0_6 & 0xFFEF);
                                temp_a1_5 = phi_v1_2->unk3C;
                                temp_t0 = (phi_t0 >> 1) & 0xFFFF;
                                *temp_a1_5 = ((temp_t0 * 0x10) & 0x10) | (*temp_a1_5 & 0xFFEF);
                                temp_a2 = phi_v1_2->unk40;
                                temp_t0_2 = (temp_t0 >> 1) & 0xFFFF;
                                *temp_a2 = ((temp_t0_2 * 0x10) & 0x10) | (*temp_a2 & 0xFFEF);
                                temp_a3 = phi_v1_2->unk44;
                                temp_t0_3 = (temp_t0_2 >> 1) & 0xFFFF;
                                temp_t1 = phi_t1 + 4;
                                *temp_a3 = ((temp_t0_3 * 0x10) & 0x10) | (*temp_a3 & 0xFFEF);
                                phi_t0 = (temp_t0_3 >> 1) & 0xFFFF;
                                phi_v1_2 += 0x10;
                                phi_t1 = temp_t1;
                            } while (temp_t1 != 0x10);
                        } else {
                            goto block_92;
                        }
                        goto loop_13;
                    }
                } else {
                    temp_a0_7 = temp_v1_2 & 0xF;
                    sp6E = temp_a0_7;
                    if (temp_v0_5 > 0) {
                        switch (temp_v0_5) { // switch 2
                        case 80: // switch 2
                            temp_s1->unk19 = (s8) (temp_s1->unk19 - (arg0 + (temp_a0_7 & 0xFF))->unk158);
                            break;
                        case 112: // switch 2
                            (arg0 + (temp_a0_7 & 0xFF))->unk158 = (s8) temp_s1->unk19;
                            break;
                        case 128: // switch 2
                            temp_v0_12 = temp_a0_7 & 0xFF;
                            temp_v1_7 = arg0 + temp_v0_12;
                            temp_s1->unk19 = (s8) temp_v1_7->unk158;
                            if (temp_v0_12 < 2) {
                                temp_v1_7->unk158 = -1;
                            } else {
                                goto block_92;
                            }
                            break;
                        case 64: // switch 2
                            func_80197AA4(arg0[temp_s0 & 0xF].unk38);
                            break;
                        case 144: // switch 2
                            func_80197C8C(arg0, temp_s0 & 0xF, arg0->unk18 + (func_80197F3C((s32) temp_s1) & 0xFFFF));
                            break;
                        case 160: // switch 2
                            func_80197C8C(arg0, temp_s0 & 0xF, &temp_s1->unk0[func_80197F3C((s32) temp_s1)]);
                            break;
                        case 176: // switch 2
                            temp_s0_5 = func_80197F28((s32) temp_s1) & 0xFF;
                            func_80191460(temp_s0_5, arg0->unk18 + (func_80197F3C((s32) temp_s1) & 0xFFFF), arg0 + sp6E + 0x158);
                            break;
                        case 96: // switch 2
                            temp_s0_6 = func_80197F28((s32) temp_s1);
                            func_80192AE8(temp_s0_6, func_80197F28((s32) temp_s1), arg0 + sp6E + 0x158);
                            goto block_92;
                        }
                    } else if (temp_v0_5 == 0) {
                        temp_s1->unk19 = (s8) (((u32) *arg0[temp_a0_7 & 0xFF].unk38 >> 0x1F) ^ 1);
                    } else {
                    default: // switch 2
                    default: // switch 1
block_92:
                    }
                    goto loop_13;
                }
            } else {
                // Duplicate return node #97. Try simplifying control flow for better match
            }
        } else {
            // Duplicate return node #97. Try simplifying control flow for better match
        }
    }
}

void func_8019AA3C(s32 arg0) {
    s16 temp_v0;
    s32 *temp_s0;
    u32 temp_s2;
    ? *phi_s1;
    u32 phi_s2;
    u32 phi_v0;

    temp_v0 = D_80200C70.unk2880;
    D_80200C70.unk7924 = (s32) (((D_80200C70.unk2878 - arg0) - 1) * D_80200C70.unk28B8);
    phi_s1 = &D_80200C70;
    phi_s2 = 0U;
    phi_v0 = (u32) temp_v0;
    if (temp_v0 != 0) {
        do {
            temp_s0 = phi_s1 + 0x4460;
            if (((u32) phi_s1->unk4460 >> 0x1F) == 1) {
                func_8019A0BC(temp_s0);
                func_80196BC8(temp_s0);
                phi_v0 = (u32) D_802034F0;
            }
            temp_s2 = phi_s2 + 1;
            phi_s1 += 0x160;
            phi_s2 = temp_s2;
        } while (temp_s2 < phi_v0);
    }
    func_80194F84();
}

void func_8019AAF0(s32 *arg0) {
    s32 temp_t8;

    if (arg0->unkDC > 0) {
        do {
            func_8019A0BC(arg0);
            func_80196BC8(arg0);
            temp_t8 = arg0->unkDC - 1;
            arg0->unkDC = temp_t8;
        } while (temp_t8 > 0);
    }
}

void func_8019AB40(? *arg0) {
    s32 temp_s0;
    ? *phi_s1;
    s32 phi_s0;

    func_80197D4C();
    arg0->unk0 = (u8) (arg0->unk0 & 0xFFFD);
    arg0->unk10 = 0;
    arg0->unk1 = 1;
    arg0->unk12 = 0;
    arg0->unk14 = 0;
    arg0->unkA = 0;
    arg0->unk8 = 0x1680;
    arg0->unkC = 0;
    arg0->unkE = 0;
    arg0->unk2 = 0;
    arg0->unk94 = &D_801D57B4;
    arg0->unk98 = &D_801D57C4;
    arg0->unkE0 = 0;
    arg0->unk16 = 0;
    arg0->unk1C = 1.0f;
    arg0->unk20 = 0.0f;
    arg0->unk24 = 0.0f;
    arg0->unk28 = 0.5f;
    phi_s1 = arg0;
    phi_s0 = 0;
    do {
        func_80197714(phi_s1->unk38);
        temp_s0 = phi_s0 + 4;
        phi_s1 += 4;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x40);
}

void func_8019AC10(s32 arg0) {
    ? *temp_v0;
    ? *temp_v1;
    s8 temp_s1;
    void *temp_s2;
    void *phi_s0;
    s8 phi_s1;

    temp_s2 = (arg0 * 0x160) + 0x4460 + &D_80200C70;
    phi_s0 = temp_s2;
    phi_s1 = 0;
    do {
        temp_v0 = func_8018B640(&D_80203660, 0xE4);
        phi_s0->unk38 = temp_v0;
        if (temp_v0 == 0) {
            phi_s0->unk38 = &D_802084B0;
        } else {
            temp_v1 = phi_s0->unk38;
            temp_v1->unk50 = temp_s2;
            temp_v1->unk11 = phi_s1;
            temp_v1->unk0 = (u8) (temp_v1->unk0 & 0xFF7F);
            temp_v1->unk58 = 0;
            temp_v1->unk5C = 0;
            temp_v1->unk60 = 0;
            temp_v1->unk54 = 0;
        }
        func_80197714(phi_s0->unk38);
        temp_s1 = phi_s1 + 1;
        phi_s0 += 4;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x10);
}

void func_8019ACEC(? *arg0) {
    ? *temp_a2;
    ? *temp_v1;
    ? *temp_v1_2;
    s32 temp_a0;
    s32 temp_a1;
    u8 temp_t0;
    u8 temp_t2;
    u8 temp_t4;
    u8 temp_t8;
    ? *phi_v1;
    s32 phi_a1;
    ? *phi_v1_2;
    s32 phi_a0;

    temp_a2 = arg0;
    phi_v1 = arg0;
    phi_a1 = 0;
    do {
        temp_a1 = phi_a1 + 4;
        phi_v1->unk3C = &D_802084B0;
        phi_v1->unk40 = &D_802084B0;
        phi_v1->unk44 = &D_802084B0;
        temp_v1 = phi_v1 + 0x10;
        temp_v1->unk28 = &D_802084B0;
        phi_v1 = temp_v1;
        phi_a1 = temp_a1;
    } while (temp_a1 != 0x10);
    temp_t8 = temp_a2->unk0 & 0xFF7F;
    temp_t0 = temp_t8 & 0xDF;
    temp_a2->unk0 = temp_t8;
    temp_t2 = temp_t0 & 0xF7;
    temp_a2->unk0 = temp_t0;
    temp_t4 = temp_t2 & 0xEF;
    temp_a2->unk0 = temp_t2;
    temp_a2->unk0 = temp_t4;
    temp_a2->unk0 = (u8) (temp_t4 & 0xFE);
    phi_v1_2 = temp_a2;
    phi_a0 = 0;
    do {
        temp_a0 = phi_a0 + 4;
        phi_v1_2->unk159 = -1;
        phi_v1_2->unk15A = -1;
        phi_v1_2->unk15B = -1;
        temp_v1_2 = phi_v1_2 + 4;
        temp_v1_2->unk154 = -1;
        phi_v1_2 = temp_v1_2;
        phi_a0 = temp_a0;
    } while (temp_a0 != (? *)8);
    temp_a2->unk3 = 0x60;
    temp_a2->unk2C = 1.0f;
    temp_a2->unk34 = 1.0f;
    arg0 = temp_a2;
    func_80195DEC(temp_a2 + 0x9C, (? *)8, temp_a2);
    func_8019AB40(arg0);
}

void func_8019ADBC(void) {
    ? *temp_s0;
    ? *temp_v0;
    ? *phi_v0;
    ? *phi_s0;

    func_80197E88();
    phi_v0 = &D_80200C70;
    do {
        temp_v0 = phi_v0 + 0x90;
        temp_v0->unk4B10 = 0;
        temp_v0->unk4AB0 = (s8) (phi_v0->unk4B40 & 0xFF7F);
        phi_v0 = temp_v0;
    } while ((u32) temp_v0 < (u32) &D_80203970);
    phi_s0 = &D_802050D0;
    do {
        func_8019ACEC(phi_s0);
        temp_s0 = phi_s0 + 0x160;
        phi_s0 = temp_s0;
    } while (temp_s0 != &D_802057B0);
}

