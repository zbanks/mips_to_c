? func_8010C1B0();                                  /* extern */
s32 func_80182C90(u8 *);                            /* extern */
? *func_80182CA0();                                 /* extern */
? func_801A9B10(s32, s32, ?);                       /* extern */
s32 func_801A9DCC(s32, ? *, s32, s32, s32);         /* extern */
s32 func_801AA020(s32 *, s32, ?, s32, ? *);         /* extern */
void func_800F42A0(u8 *arg0);                       /* static */
void func_800F43BC(s32 arg1, s32 arg2, s32 arg3, s32); /* static */
u16 func_800F44F4(s32 arg0);                        /* static */
void func_800F4540(u8 *arg0, u8 *arg1);             /* static */
? func_800F470C(u8 *arg0, s32 arg1, s32 arg2, u32 arg3); /* static */
static ? D_801AD370;                                /* unable to generate initializer */
static s32 D_801BDAC0 = 4;
static s32 D_801BDAC4 = 0;
static s32 D_801BDAC8 = 0;
static ? *D_801BDACC = {0, &D_801AD370, (? *)0x1000, &D_801E3F40, (? *)0x800, NULL, NULL, NULL, NULL};
static void *D_801BDAF0 = {NULL, (void *)0x20};
static ? D_801E3F40;                                /* unable to generate initializer; const */
SchedContext schedContext;



void func_800F42A0(u8 *arg0) {
    void *sp24;
    OSMesgQueue *sp18;
    OSMesgQueue *temp_t0;
    s32 *temp_t5;
    u8 *temp_a3;
    u8 *temp_t8;
    void *temp_v1;
    s32 *phi_t5;
    u8 *phi_t8;

    temp_a3 = arg0;
    temp_v1 = temp_a3->unkA4;
    temp_v1->unk0 = (s32) (temp_v1 + 0x6C0);
    temp_v1->unk4 = 4;
    temp_v1->unkC = (void *) (temp_v1 + 0x220);
    temp_v1->unk10 = (void *) (temp_v1 + 0x2A0);
    temp_v1->unk14 = (void *) (temp_v1 + 0x320);
    temp_v1->unk8 = (s32) temp_a3->unk28;
    D_801BDAC4 = 0;
    arg0 = temp_a3;
    sp24 = temp_v1;
    D_801BDAC8 = func_80182C90(temp_a3);
    D_801BDACC = func_80182CA0();
    D_801BDAF0 = temp_v1 + 0x20;
    D_801BDAF0 = temp_v1;
    temp_t0 = arg0 + 0x88;
    arg0->unk30 = 0;
    arg0->unk38 = 2;
    arg0->unk80 = temp_t0;
    arg0->unk84 = 0;
    arg0->unk3C = 0;
    phi_t5 = &D_801BDAC0;
    phi_t8 = arg0;
    do {
        temp_t5 = phi_t5 + 0xC;
        temp_t8 = phi_t8 + 0xC;
        temp_t8->unk34 = (s32) *phi_t5;
        temp_t8->unk38 = (s32) temp_t5->unk-8;
        temp_t8->unk3C = (s32) temp_t5->unk-4;
        phi_t5 = temp_t5;
        phi_t8 = temp_t8;
    } while (temp_t5 != (&D_801BDAC0 + 0x3C));
    temp_t8->unk40 = (s32) temp_t5->unk0;
    sp18 = temp_t0;
    osSendMesg(&schedContext.cmdQ, arg0 + 0x30, 1);
    Sched_SendEntryMsg(&schedContext);
    osRecvMesg(sp18, NULL, 1);
}

void func_800F43BC(u16 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v1;
    u16 *temp_a0;
    u16 *temp_v0;
    u16 *phi_a0;
    u16 *phi_v0;
    s32 phi_v1;

    phi_a0 = arg0;
    phi_v0 = (((arg3 * 0x140) + arg2) << 5) + arg1;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 2;
        temp_a0 = phi_a0 + 0x40;
        *phi_v0 = *phi_a0;
        temp_v0 = phi_v0 + 0x500;
        temp_v0->unk-4FE = (u16) temp_a0->unk-3E;
        temp_v0->unk-4FC = (u16) temp_a0->unk-3C;
        temp_v0->unk-4FA = (u16) temp_a0->unk-3A;
        temp_v0->unk-4F8 = (u16) temp_a0->unk-38;
        temp_v0->unk-4F6 = (u16) temp_a0->unk-36;
        temp_v0->unk-4F4 = (u16) temp_a0->unk-34;
        temp_v0->unk-4F2 = (u16) temp_a0->unk-32;
        temp_v0->unk-4F0 = (u16) temp_a0->unk-30;
        temp_v0->unk-4EE = (u16) temp_a0->unk-2E;
        temp_v0->unk-4EC = (u16) temp_a0->unk-2C;
        temp_v0->unk-4EA = (u16) temp_a0->unk-2A;
        temp_v0->unk-4E8 = (u16) temp_a0->unk-28;
        temp_v0->unk-4E6 = (u16) temp_a0->unk-26;
        temp_v0->unk-4E4 = (u16) temp_a0->unk-24;
        temp_v0->unk-4E2 = (u16) temp_a0->unk-22;
        temp_v0->unk-280 = (u16) temp_a0->unk-20;
        temp_v0->unk-27E = (u16) temp_a0->unk-1E;
        temp_v0->unk-27C = (u16) temp_a0->unk-1C;
        temp_v0->unk-27A = (u16) temp_a0->unk-1A;
        temp_v0->unk-278 = (u16) temp_a0->unk-18;
        temp_v0->unk-276 = (u16) temp_a0->unk-16;
        temp_v0->unk-274 = (u16) temp_a0->unk-14;
        temp_v0->unk-272 = (u16) temp_a0->unk-12;
        temp_v0->unk-270 = (u16) temp_a0->unk-10;
        temp_v0->unk-26E = (u16) temp_a0->unk-E;
        temp_v0->unk-26C = (u16) temp_a0->unk-C;
        temp_v0->unk-26A = (u16) temp_a0->unk-A;
        temp_v0->unk-268 = (u16) temp_a0->unk-8;
        temp_v0->unk-266 = (u16) temp_a0->unk-6;
        temp_v0->unk-264 = (u16) temp_a0->unk-4;
        temp_v0->unk-262 = (u16) temp_a0->unk-2;
        phi_a0 = temp_a0;
        phi_v0 = temp_v0;
        phi_v1 = temp_v1;
    } while (temp_v1 != 0x10);
}

u16 func_800F44F4(s32 arg0) {
    if ((arg0 & 1) == 0) {
        return arg0->unk0;
    }
    return (((s32) (arg0->unk2 | (arg0->unk1 << 8)) >> 8) | (((u8) arg0->unk0 | (arg0->unk-1 << 8)) << 8)) & 0xFFFF;
}

void func_800F4540(u8 *arg0, u8 *arg1) {
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 temp_v0;
    u8 temp_v0_2;
    s32 phi_s2;
    u8 *phi_s0;

    arg1->unk0 = 0;
    arg1->unk10 = 0U;
    phi_s2 = 0;
    phi_s0 = arg0;
loop_1:
    if (phi_s2 == 0) {
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
        if (*phi_s0 == 0xFF) {
            temp_v0 = *temp_s0;
            temp_s0_2 = temp_s0 + 1;
            phi_s0 = temp_s0_2;
            if ((s32) temp_v0 > 0) {
                switch (temp_v0) {
                case 224:
                    phi_s0 = temp_s0_2 + func_800F44F4((s32) temp_s0_2);
                    break;
                case 225:
                    phi_s0 = temp_s0_2 + func_800F44F4((s32) temp_s0_2);
                    break;
                case 226:
                    phi_s0 = temp_s0_2 + func_800F44F4((s32) temp_s0_2);
                    break;
                case 219:
                    (arg1 + (arg1->unk0 * 4))->unk4 = (void *) (temp_s0_2 + 2);
                    arg1->unk0 += 1;
                    phi_s0 = temp_s0_2 + func_800F44F4((s32) temp_s0_2);
                    break;
                case 196:
                    (arg1 + (arg1->unk10 * 4))->unk14 = (void *) (temp_s0_2 + 2);
                    arg1->unk10 = (u8) (arg1->unk10 + 1);
                    phi_s0 = temp_s0_2 + func_800F44F4((s32) temp_s0_2);
                    break;
                case 221:
                    phi_s0 = temp_s0_2 + func_800F44F4((s32) temp_s0_2);
                    break;
                case 192:
                    temp_v0_2 = temp_s0_2->unk9;
                    if (temp_v0_2 == 0x21) {
                        arg1->unk28 = 0;
                    } else if (temp_v0_2 == 0x22) {
                        arg1->unk28 = 2;
                    }
                    phi_s0 = temp_s0_2 + func_800F44F4((s32) temp_s0_2);
                    break;
                case 218:
                    temp_s0_3 = temp_s0_2 + func_800F44F4((s32) temp_s0_2);
                    arg1->unk24 = temp_s0_3;
                    phi_s0 = temp_s0_3;
                    break;
                case 217:
                    phi_s2 = 1;
                    break;
                }
            } else if (temp_v0 != 0) {
            default:
                phi_s0 = temp_s0_2 + func_800F44F4((s32) temp_s0_2);
            }
        }
        goto loop_1;
    }
}

? func_800F470C(u8 *arg0, s32 arg1, s32 arg2, u32 arg3) {
    s32 sp27C;
    void *sp278;
    OSMesgQueue sp260;
    u8 sp1D8;
    ? sp184;
    ? sp130;
    ? spDC;
    ? sp88;
    s8 sp84;
    ? *sp80;
    ? *sp7C;
    ? *sp78;
    ? *sp74;
    s8 sp71;
    u8 sp70;
    s32 sp6C;
    ? sp58;
    s32 sp44;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s6;
    s32 phi_s6;
    s32 phi_s1;
    s32 phi_s2;
    s32 phi_s3;
    s32 phi_s0;
    s32 phi_s2_2;
    s32 phi_s2_3;
    s32 phi_s3_2;
    s32 phi_s3_3;

    if (arg3 < 0x12C0U) {
        return -1;
    }
    osCreateMesgQueue(&sp260, &sp278, 1);
    func_8010C1B0();
    sp27C = arg2;
    func_800F4540(arg0, &sp1D8);
    if (sp1D8 != 1) {
        if (sp1D8 != 2) {
            if (sp1D8 != 3) {
                return -1;
            }
            func_801A9B10(sp1DC, arg2 + 0x220, 1);
            func_801A9B10(sp1E0, arg2 + 0x2A0, 1);
            func_801A9B10(sp1E4, arg2 + 0x320, 1);
            goto block_10;
        }
        func_801A9B10(sp1DC, arg2 + 0x220, 1);
        func_801A9B10(sp1E0, arg2 + 0x2A0, 1);
        func_801A9B10(sp1E0, arg2 + 0x320, 1);
        goto block_10;
    }
    func_801A9B10(sp1DC, arg2 + 0x220, 3);
block_10:
    if (sp1E8 != 1) {
        if (sp1E8 != 4) {
            return -1;
        }
        temp_s0 = arg2 + 0x3A0;
        temp_s1 = arg2 + 0x4B0;
        if ((func_801A9DCC(sp1EC, &sp88, temp_s0, temp_s1, 1) != 0) || (func_801A9DCC(sp1F0, &spDC, temp_s0, temp_s1, 1) != 0) || (func_801A9DCC(sp1F4, &sp130, temp_s0, temp_s1, 1) != 0) || (func_801A9DCC(sp1F8, &sp184, temp_s0, temp_s1, 1) != 0)) {
            return -1;
        }
        goto block_21;
    }
    if (func_801A9DCC(sp1EC, &sp88, arg2 + 0x3A0, arg2 + 0x4B0, 4) != 0) {
        return -1;
    }
block_21:
    sp74 = &sp88;
    sp71 = 2;
    sp78 = &spDC;
    sp7C = &sp130;
    sp80 = &sp184;
    sp84 = 0;
    sp44 = arg2 + 0x6C0;
    sp6C = sp1FC;
    sp70 = sp200;
    phi_s6 = 0;
    phi_s2_2 = 0;
    phi_s2_3 = 0;
    phi_s3_2 = 0;
    do {
        phi_s2 = phi_s2_2;
        phi_s3 = phi_s3_2;
        if (func_801AA020(&sp6C, sp44, 4, (phi_s6 != 0) & 0xFF, &sp58) == 0) {
            func_800F42A0(&sp1D8);
            phi_s1 = arg2 + 0x6C0;
            phi_s0 = 0;
            do {
                func_800F43BC(phi_s1, arg1, phi_s2, phi_s3);
                temp_s2 = phi_s2 + 1;
                temp_s0_2 = phi_s0 + 0x300;
                phi_s0 = temp_s0_2;
                phi_s2_3 = temp_s2;
                phi_s3_3 = phi_s3;
                if (temp_s2 >= 0x14) {
                    phi_s3_3 = phi_s3 + 1;
                }
                phi_s1 += 0x300;
                phi_s2 = phi_s2_3;
                phi_s3 = phi_s3_3;
                phi_s2_2 = phi_s2_3;
                phi_s3_2 = phi_s3_3;
            } while (temp_s0_2 != 0xC00);
        }
        temp_s6 = phi_s6 + 4;
        phi_s6 = temp_s6;
    } while (temp_s6 != 0x12C);
    return 0;
}

