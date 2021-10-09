struct _mips2c_stack_Yaz0_Decompress {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ s8 sp30;                             /* inferred */
    /* 0x31 */ char pad31[0x4F];                    /* maybe part of sp30[80]? */
    /* 0x80 */ s8 sp80;                             /* inferred */
    /* 0x81 */ char pad81[0x57];
};                                                  /* size = 0xD8 */

struct _mips2c_stack_Yaz0_DecompressImpl {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_Yaz0_FirstDMA {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ u32 sp18;                            /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Yaz0_NextDMA {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ u32 sp2C;                            /* inferred */
    /* 0x30 */ u32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

u8 *D_8009BE20;
u8 *sYaz0CurDataEnd;
u32 sYaz0CurRomStart;
u32 sYaz0CurSize;
u8 sYaz0DataBuffer[1024];
u8 *sYaz0MaxPtr;

void *Yaz0_FirstDMA(void) {
    u32 sp18;
    u32 temp_a0;
    u32 temp_v1;
    u8 *temp_v0;
    u32 phi_a2;

    temp_v0 = sYaz0CurDataEnd;
    sYaz0MaxPtr = temp_v0 - 0x19;
    temp_a0 = sYaz0CurSize;
    temp_v1 = temp_v0 - sYaz0DataBuffer;
    phi_a2 = temp_v1;
    if (temp_a0 < temp_v1) {
        phi_a2 = temp_a0;
    }
    sp18 = phi_a2;
    DmaMgr_DMARomToRam(sYaz0CurRomStart, (void *) sYaz0DataBuffer, phi_a2);
    sYaz0CurRomStart += phi_a2;
    sYaz0CurSize -= phi_a2;
    return (void *) sYaz0DataBuffer;
}

void *Yaz0_NextDMA(void *curSrcPos) {
    u32 sp30;
    u32 sp2C;
    s32 sp28;
    void *sp24;
    s32 temp_v0;
    u32 temp_a2;
    u32 temp_a3;
    u32 temp_t3;
    u32 temp_v0_2;
    void *temp_a1;
    void *phi_s0;
    u32 phi_a2;

    temp_a3 = sYaz0CurDataEnd - curSrcPos;
    temp_v0 = temp_a3 & 7;
    phi_s0 = (void *) sYaz0DataBuffer;
    if (temp_v0 != 0) {
        phi_s0 = (sYaz0DataBuffer - temp_v0) + 8;
    }
    sp30 = temp_a3;
    bcopy(curSrcPos, phi_s0, temp_a3);
    temp_v0_2 = sYaz0CurSize;
    temp_a2 = (sYaz0CurDataEnd - phi_s0) - temp_a3;
    phi_a2 = temp_a2;
    if (temp_v0_2 < temp_a2) {
        phi_a2 = temp_v0_2;
    }
    temp_a1 = phi_s0 + temp_a3;
    if (phi_a2 != 0) {
        sp24 = temp_a1;
        sp2C = phi_a2;
        DmaMgr_DMARomToRam(sYaz0CurRomStart, temp_a1, phi_a2);
        temp_t3 = sYaz0CurSize - phi_a2;
        sYaz0CurRomStart += phi_a2;
        sYaz0CurSize = temp_t3;
        if (temp_t3 == 0) {
            sYaz0MaxPtr = temp_a1 + phi_a2;
        }
    } else {
        sp28 = osGetThreadPri(NULL);
        osSetThreadPri(NULL, 0x7F);
        osSyncPrintf("圧縮展開異常\n");
        osSetThreadPri(NULL, sp28);
    }
    return phi_s0;
}

s32 Yaz0_DecompressImpl(u8 *hdr, u8 *dst) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 temp_v1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    s32 phi_a2;
    u32 phi_s1;
    u8 phi_a3;
    void *phi_s1_2;
    u8 *phi_s0;
    s32 phi_v1;
    void *phi_v0;
    u8 *phi_s0_2;
    s32 phi_v1_2;
    void *phi_v0_2;
    u8 *phi_s0_3;
    s32 phi_v1_3;
    u8 *phi_s0_4;
    s32 phi_a2_2;
    void *phi_s1_3;

    phi_a2 = 0;
    phi_s0 = dst;
    phi_a3 = 0U;
    if (hdr->unk0 != 0x59617A30) {
        return -1;
    }
    temp_s2 = &dst[hdr->unk4];
    phi_s1 = (u32) (hdr + 0x10);
    do {
        phi_s1_2 = (void *) phi_s1;
        phi_s0_2 = phi_s0;
        phi_s0_3 = phi_s0;
        phi_a2_2 = phi_a2;
        phi_s1_3 = (void *) phi_s1;
        if (phi_a2 == 0) {
            if (((u32) sYaz0MaxPtr < phi_s1) && (sYaz0CurSize != 0)) {
                phi_s1_3 = Yaz0_NextDMA((void *) phi_s1);
            }
            phi_a3 = *phi_s1_3;
            phi_s1_2 = phi_s1_3 + 1;
            phi_a2_2 = 8;
        }
        phi_a3 *= 2;
        if ((phi_a3 & 0x80) != 0) {
            temp_s0 = phi_s0 + 1;
            temp_s0->unk-1 = (u8) phi_s1_2->unk0;
            phi_s0_4 = temp_s0;
            phi_s1 = (u32) (phi_s1_2 + 1);
        } else {
            temp_v1 = phi_s1_2->unk0;
            temp_s1 = phi_s1_2 + 2;
            temp_a1 = (s32) temp_v1 >> 4;
            temp_v0 = phi_s0 - (phi_s1_2->unk1 | ((temp_v1 & 0xF) << 8));
            phi_v0 = temp_v0;
            phi_v0_2 = temp_v0;
            phi_s1 = (u32) temp_s1;
            if (temp_a1 == 0) {
                phi_v1 = *temp_s1 + 0x12;
                phi_s1 = (u32) (temp_s1 + 1);
            } else {
                phi_v1 = temp_a1 + 2;
            }
            temp_a1_2 = -(s32) (phi_v1 & 3);
            phi_v1_2 = phi_v1;
            phi_v1_3 = phi_v1;
            if (temp_a1_2 != 0) {
                do {
                    temp_v1_2 = phi_v1_2 - 1;
                    temp_s0_2 = phi_s0_2 + 1;
                    temp_v0_2 = phi_v0 + 1;
                    temp_s0_2->unk-1 = (u8) phi_v0->unk-1;
                    phi_v0 = temp_v0_2;
                    phi_s0_2 = temp_s0_2;
                    phi_v1_2 = temp_v1_2;
                    phi_v0_2 = temp_v0_2;
                    phi_s0_3 = temp_s0_2;
                    phi_v1_3 = temp_v1_2;
                    phi_s0_4 = temp_s0_2;
                } while ((temp_a1_2 + phi_v1) != temp_v1_2);
                if (temp_v1_2 != 0) {
                    goto loop_16;
                }
            } else {
                do {
loop_16:
                    temp_v1_3 = phi_v1_3 - 4;
                    temp_s0_3 = phi_s0_3 + 4;
                    temp_s0_3->unk-4 = (u8) phi_v0_2->unk-1;
                    temp_v0_3 = phi_v0_2 + 4;
                    temp_s0_3->unk-3 = (u8) phi_v0_2->unk0;
                    temp_s0_3->unk-2 = (u8) temp_v0_3->unk-3;
                    temp_s0_3->unk-1 = (u8) temp_v0_3->unk-2;
                    phi_v0_2 = temp_v0_3;
                    phi_s0_3 = temp_s0_3;
                    phi_v1_3 = temp_v1_3;
                    phi_s0_4 = temp_s0_3;
                } while (temp_v1_3 != 0);
            }
        }
        phi_a2 = phi_a2_2 - 1;
        phi_s0 = phi_s0_4;
    } while (phi_s0_4 != temp_s2);
    D_8009BE20 = temp_s2;
    return 0;
}

void Yaz0_Decompress(u32 romStart, void *dst, u32 size) {
    s8 sp80;
    s8 sp30;
    s32 temp_v0_2;
    u8 *temp_v0;

    temp_v0 = sYaz0CurDataEnd;
    if ((temp_v0 != 0) && (temp_v0 != 0)) {
        do {
            Sleep_Usec(0xA);
        } while (sYaz0CurDataEnd != 0);
    }
    sYaz0CurDataEnd = (u8 *) &sYaz0CurDataEnd;
    sYaz0CurRomStart = romStart;
    sYaz0CurSize = size;
    temp_v0_2 = Yaz0_DecompressImpl(Yaz0_FirstDMA(), (u8 *) dst);
    if (temp_v0_2 != 0) {
        sprintf(&sp80, "slidma slidstart_szs ret=%d", temp_v0_2);
        sprintf(&sp30, "src:%08lx dst:%08lx siz:%08lx", romStart, dst, size);
        Fault_AddHungupAndCrashImpl(&sp80, &sp30);
    }
    sYaz0CurDataEnd = NULL;
}
