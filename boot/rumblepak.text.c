CRASHED

struct _mips2c_stack_osProbeRumblePak {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ u8 sp24;                             /* inferred */
    /* 0x25 */ char pad_25[0x1E];                   /* maybe part of sp24[31]? */
    /* 0x43 */ u8 sp43;                             /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_osSetRumble {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

s32 __osPfsSelectBank(void *, ?);                   /* extern */
s32 osProbeRumblePak(OSMesgQueue *arg0, void *arg1, s32 arg2); /* static */
s32 osSetRumble(void *arg0, s32 arg1);              /* static */
? osSetUpMempakWrite(s32, void *);                  /* static */
static ? D_8009CDB0;
u8 __osContLastCmd;

s32 osSetRumble(void *arg0, s32 arg1) {
    void *sp24;
    s32 temp_t2;
    s32 temp_v1;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_v0;
    void *phi_v0;
    s32 phi_v1;
    s32 phi_s0;

    temp_t0 = (arg0->unk_8 << 6) + &D_8009CDB0;
    if ((arg0->unk_0 & 8) == 0) {
        return 5;
    }
    arg1 = arg1;
    sp24 = temp_t0;
    __osSiGetAccess();
    (&D_8009CDB0 + (arg0->unk_8 << 6))->unk_3C = 1;
    temp_t0_2 = temp_t0 + arg0->unk_8;
    phi_v0 = temp_t0_2;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 4;
        phi_v0->unk_7 = (s8) arg1;
        phi_v0->unk_8 = (s8) arg1;
        phi_v0->unk_9 = (s8) arg1;
        temp_v0 = phi_v0 + 4;
        temp_v0->unk_2 = (s8) arg1;
        phi_v0 = temp_v0;
        phi_v1 = temp_v1;
    } while (temp_v1 != 0x20);
    __osContLastCmd = 0xFE;
    sp24 = temp_t0_2;
    arg1 = arg1;
    __osSiRawStartDma(1, &D_8009CDB0 + (arg0->unk_8 << 6));
    osRecvMesg(arg0->unk_4, NULL, 1);
    __osSiRawStartDma(0, (arg0->unk_8 << 6) + &D_8009CDB0);
    osRecvMesg(arg0->unk_4, NULL, 1);
    temp_t2 = temp_t0_2->unk_2 & 0xC0;
    phi_s0 = temp_t2;
    if (temp_t2 == 0) {
        if (arg1 == 0) {
            if (temp_t0_2->unk_26 != 0) {
                goto block_9;
            }
        } else if (temp_t0_2->unk_26 != 0xEB) {
block_9:
            phi_s0 = 4;
        }
    }
    __osSiRelAccess();
    return phi_s0;
}

/*
Failed to decompile function osSetUpMempakWrite:

Label L800898B8 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

s32 osProbeRumblePak(OSMesgQueue *arg0, void *arg1, s32 arg2) {
    u8 sp24;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s32 phi_v1_4;

    arg1->unk_4 = arg0;
    arg1->unk_65 = 0xFF;
    arg1->unk_0 = 0;
    arg1->unk_8 = arg2;
    temp_v0 = __osPfsSelectBank(arg1, 0xFE);
    phi_v0 = temp_v0;
    phi_v1_4 = temp_v0;
    if (temp_v0 == 2) {
        temp_v0_2 = __osPfsSelectBank(arg1, 0x80);
        phi_v0 = temp_v0_2;
        phi_v1_4 = temp_v0_2;
    }
    if (phi_v0 != 0) {
        return phi_v1_4;
    }
    temp_v0_3 = __osContRamRead(arg0, arg2, 0x400U, &sp24);
    phi_v1 = temp_v0_3;
    if (temp_v0_3 == 2) {
        phi_v1 = 4;
    }
    if (phi_v1 != 0) {
        return phi_v1;
    }
    if (sp43 == 0xFE) {
        return 0xB;
    }
    temp_v0_4 = __osPfsSelectBank(arg1, 0x80);
    phi_v1_2 = temp_v0_4;
    if (temp_v0_4 == 2) {
        phi_v1_2 = 4;
    }
    if (phi_v1_2 != 0) {
        return phi_v1_2;
    }
    temp_v0_5 = __osContRamRead(arg0, arg2, 0x400U, &sp24);
    phi_v1_3 = temp_v0_5;
    if (temp_v0_5 == 2) {
        phi_v1_3 = 4;
    }
    if (phi_v1_3 != 0) {
        return phi_v1_3;
    }
    if (sp43 != 0x80) {
        return 0xB;
    }
    if ((arg1->unk_0 & 8) == 0) {
        osSetUpMempakWrite(arg2, (arg2 << 6) + &D_8009CDB0);
    }
    arg1->unk_0 = 8;
    return 0;
}
