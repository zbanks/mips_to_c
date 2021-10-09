struct _mips2c_stack___osPfsDeclearPage {
    /* 0x00 */ char pad0[0x8];
    /* 0x08 */ s32 sp8;                             /* inferred */
    /* 0x0C */ s32 spC;                             /* inferred */
};                                                  /* size = 0x10 */

struct _mips2c_stack_osPfsAllocateFile {
    /* 0x000 */ char pad0[0x50];
    /* 0x050 */ s8 sp50;                            /* inferred */
    /* 0x051 */ s8 sp51;                            /* inferred */
    /* 0x052 */ char pad52[0x2];                    /* maybe part of sp51[3]? */
    /* 0x054 */ s32 sp54;                           /* inferred */
    /* 0x058 */ char pad58[0x8];                    /* maybe part of sp54[3]? */
    /* 0x060 */ s32 sp60;                           /* inferred */
    /* 0x064 */ u16 sp64;                           /* inferred */
    /* 0x066 */ u16 sp66;                           /* inferred */
    /* 0x068 */ char pad68[0x2];
    /* 0x06A */ s16 sp6A;                           /* inferred */
    /* 0x06C */ ? sp6C;                             /* inferred */
    /* 0x06C */ char pad6C[0x4];
    /* 0x070 */ ? sp70;                             /* inferred */
    /* 0x070 */ char pad70[0x10];
    /* 0x080 */ ? sp80;                             /* inferred */
    /* 0x080 */ char pad80[0x100];
    /* 0x180 */ ? sp180;                            /* inferred */
    /* 0x180 */ char pad180[0x10C];
    /* 0x28C */ s32 sp28C;                          /* inferred */
    /* 0x290 */ s32 sp290;                          /* inferred */
    /* 0x294 */ s32 sp294;                          /* inferred */
};                                                  /* size = 0x298 */

s32 __osPfsRWInode(void *, ? *, ?, s32);            /* extern */
s32 osPfsFindFile(void *, u16, void *, void *, s32 *, s32 *); /* extern */
? osPfsFreeBlocks(void *, s32 *);                   /* extern */
s32 __osPfsDeclearPage(void *arg0, ? *arg1, s32 arg2, s32 *arg3, s32 arg4, s32 *arg5, s32 *arg6); /* static */
s32 osPfsAllocateFile(void *arg0, u16 arg1, s32 arg2, void *arg3, void *arg4, s32 arg5, s32 *arg6); /* static */

s32 osPfsAllocateFile(void *arg0, u16 arg1, s32 arg2, void *arg3, void *arg4, s32 arg5, s32 *arg6) {
    s32 sp294;
    s32 sp290;
    s32 sp28C;
    ? sp180;
    ? sp80;
    ? sp70;
    ? sp6C;
    s16 sp6A;
    u16 sp66;
    u16 sp64;
    s32 sp60;
    s32 sp54;
    s8 sp51;
    s8 sp50;
    s32 temp_t2;
    s32 temp_t7;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    u16 temp_t6;
    void *temp_v0_7;
    s32 phi_s0;
    s32 phi_s4;
    s32 phi_s5;
    s32 phi_s6;
    s32 phi_s7;
    s32 phi_s4_2;
    s32 phi_s4_3;

    temp_t6 = arg1 & 0xFFFF;
    phi_s5 = 0;
    phi_s6 = 0;
    phi_s7 = 0;
    if ((temp_t6 == 0) || (arg2 == 0)) {
        return 5;
    }
    temp_t7 = (s32) (arg5 + 0xFF) / 0x100;
    arg1 = temp_t6;
    temp_v0_6 = osPfsFindFile(arg0, temp_t6, arg3, arg4, arg6);
    phi_s4 = temp_t7;
    phi_s4_2 = temp_t7;
    if ((temp_v0_6 != 0) && (temp_v0_6 != 5)) {
        return temp_v0_6;
    }
    if (*arg6 != -1) {
        return 9;
    }
    osPfsFreeBlocks(arg0, &sp54);
    if (sp54 < arg5) {
        return 7;
    }
    if (temp_t7 == 0) {
        return 5;
    }
    temp_v0_5 = osPfsFindFile(arg0, 0U, NULL, NULL, NULL, arg6);
    if ((temp_v0_5 != 0) && (temp_v0_5 != 5)) {
        return temp_v0_5;
    }
    if (*arg6 == -1) {
        return 8;
    }
    phi_s0 = 0;
    if ((s32) arg0->unk64 > 0) {
loop_18:
        temp_v0_4 = __osPfsRWInode(arg0, &sp180, 0, phi_s0 & 0xFF);
        phi_s4_3 = phi_s4;
        if (temp_v0_4 != 0) {
            return temp_v0_4;
        }
        temp_v0_3 = __osPfsDeclearPage(arg0, &sp180, phi_s4, &sp294, phi_s0, &sp290, &sp28C);
        if (temp_v0_3 != 0) {
            return temp_v0_3;
        }
        if (sp294 != -1) {
            if (phi_s5 == 0) {
                sp51 = (s8) sp294;
                sp50 = (s8) phi_s0;
                goto block_27;
            }
            temp_v0_7 = &sp80 + (phi_s6 * 2);
            temp_v0_7->unk0 = (s8) phi_s0;
            temp_v0_7->unk1 = (s8) sp294;
            temp_v0_2 = __osPfsRWInode(arg0, &sp80, 1, phi_s7 & 0xFF);
            if (temp_v0_2 != 0) {
                return temp_v0_2;
            }
block_27:
            if (sp290 < phi_s4) {
                bcopy((void *) &sp180, (void *) &sp80, 0x100U);
                phi_s4_3 = phi_s4 - sp290;
                phi_s5 += 1;
                phi_s6 = sp28C;
                phi_s7 = phi_s0 & 0xFF;
                goto block_31;
            }
            temp_v0 = __osPfsRWInode(arg0, &sp180, 1, phi_s0 & 0xFF);
            phi_s4_2 = 0;
            if (temp_v0 != 0) {
                return temp_v0;
            }
            goto block_32;
        }
block_31:
        temp_t2 = (phi_s0 + 1) & 0xFF;
        phi_s0 = temp_t2;
        phi_s4 = phi_s4_3;
        phi_s4_2 = phi_s4_3;
        if (temp_t2 >= (s32) arg0->unk64) {
            goto block_32;
        }
        goto loop_18;
    }
block_32:
    if ((phi_s4_2 > 0) || (sp294 == -1)) {
        return 3;
    }
    sp66 = (u16) sp50;
    sp6A = 0;
    sp64 = arg1;
    sp60 = arg2;
    bcopy(arg3, (void *) &sp70, 0x10U);
    bcopy(arg4, (void *) &sp6C, 4U);
    return __osContRamWrite(arg0->unk4, arg0->unk8, (*arg6 + arg0->unk5C) & 0xFFFF, (u8 *) &sp60, 0);
}

s32 __osPfsDeclearPage(void *arg0, ? *arg1, s32 arg2, s32 *arg3, u8 arg4, s32 *arg5, s32 *arg6) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    void *temp_t1;
    s32 phi_v0;
    u16 *phi_v0_2;
    s32 phi_v1;
    s32 phi_v1_2;
    u16 *phi_v0_3;
    s32 phi_t0;
    s8 phi_v1_3;
    s32 phi_v1_4;
    s32 phi_t0_2;
    s32 phi_t0_3;

    if ((s32) arg4 > 0) {
        phi_v0 = 1;
    } else {
        phi_v0 = arg0->unk60;
    }
    phi_v1 = phi_v0;
    phi_v1_2 = phi_v0;
    if (phi_v0 < 0x80) {
        phi_v0_2 = arg1 + (phi_v0 * 2);
loop_5:
        phi_v1_2 = phi_v1;
        if (*phi_v0_2 != 3) {
            temp_v1 = phi_v1 + 1;
            phi_v0_2 += 2;
            phi_v1 = temp_v1;
            phi_v1_2 = temp_v1;
            if (temp_v1 != 0x80) {
                goto loop_5;
            }
        }
    }
    if (phi_v1_2 == 0x80) {
        *arg3 = -1;
    } else {
        temp_v1_2 = phi_v1_2 + 1;
        *arg5 = 1;
        phi_t0 = phi_v1_2;
        phi_v1_3 = (s8) temp_v1_2;
        phi_v1_4 = temp_v1_2;
        phi_t0_2 = phi_v1_2;
        if ((arg2 >= 2) && (temp_v1_2 < 0x80)) {
            phi_v0_3 = arg1 + (temp_v1_2 * 2);
loop_12:
            temp_t1 = arg1 + (phi_t0 * 2);
            phi_t0_3 = phi_t0;
            if (*phi_v0_3 == 3) {
                temp_t1->unk0 = arg4;
                temp_t1->unk1 = phi_v1_3;
                *arg5 += 1;
                phi_t0_3 = (s32) phi_v1_3;
            }
            temp_v1_3 = phi_v1_3 + 1;
            phi_v0_3 += 2;
            phi_t0 = phi_t0_3;
            phi_v1_3 = (s8) temp_v1_3;
            phi_v1_4 = temp_v1_3;
            phi_t0_2 = phi_t0_3;
            if ((*arg5 < arg2) && (temp_v1_3 < 0x80)) {
                goto loop_12;
            }
        }
        *arg3 = phi_v1_2;
        if ((phi_v1_4 == 0x80) && (*arg5 < arg2)) {
            *arg6 = phi_t0_2;
        } else {
            *(arg1 + (phi_t0_2 * 2)) = 1;
            *arg6 = 0;
        }
    }
    return 0;
}
