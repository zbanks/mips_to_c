static void D_8009BA08;
OSPiHandle *gCartHandle = NULL;
s32 gIrqMgrResetStatus = 0;
u16 numDmaEntries;
u32 sDmaMgrDmaBuffSize = 0x2000;
OSMesgQueue sDmaMgrMsgQueue;
void *sDmaMgrMsgs[32];
u8 sDmaMgrStack[1280];
StackEntry sDmaMgrStackInfo;
OSThread sDmaMgrThread;



s32 DmaMgr_DMARomToRam(u32 src, void *dst, u32 size) {
    u32 sp70;
    u32 sp6C;
    void *sp68;
    OSMesgQueue *sp64;
    s8 sp62;
    OSIoMesg sp60;
    OSMesgQueue sp48;
    void *sp44;
    s32 sp40;
    s32 temp_v0;
    s32 temp_v0_2;
    u32 temp_s0;
    u32 temp_s1;
    u32 temp_s2;
    void *temp_s3;
    u32 phi_s1;
    void *phi_s3;
    u32 phi_s2;
    u32 phi_s1_2;
    void *phi_s3_2;
    u32 phi_s2_2;
    s32 phi_v1;

    temp_s0 = sDmaMgrDmaBuffSize;
    osInvalDCache(dst, (s32) size);
    osCreateMesgQueue(&sp48, &sp44, 1);
    phi_s1 = src;
    phi_s3 = dst;
    phi_s2 = size;
    phi_s1_2 = src;
    phi_s3_2 = dst;
    phi_s2_2 = size;
    if ((temp_s0 != 0) && (temp_s0 < size)) {
loop_3:
        sp62 = 0;
        sp64 = &sp48;
        sp6C = phi_s1;
        sp68 = phi_s3;
        sp70 = temp_s0;
        temp_v0 = osEPiStartDma(gCartHandle, &sp60, 0);
        phi_v1 = temp_v0;
        if (temp_v0 == 0) {
            osRecvMesg(&sp48, NULL, 1);
            temp_s2 = phi_s2 - temp_s0;
            temp_s1 = phi_s1 + temp_s0;
            temp_s3 = phi_s3 + temp_s0;
            phi_s1 = temp_s1;
            phi_s3 = temp_s3;
            phi_s2 = temp_s2;
            phi_s1_2 = temp_s1;
            phi_s3_2 = temp_s3;
            phi_s2_2 = temp_s2;
            if (temp_s0 >= temp_s2) {
                goto block_5;
            }
            goto loop_3;
        }
    } else {
block_5:
        sp60.hdr.pri = 0;
        sp60.hdr.retQueue = &sp48;
        sp60.devAddr = phi_s1_2;
        sp60.dramAddr = phi_s3_2;
        sp60.size = phi_s2_2;
        temp_v0_2 = osEPiStartDma(gCartHandle, &sp60, 0);
        phi_v1 = temp_v0_2;
        if (temp_v0_2 == 0) {
            sp40 = temp_v0_2;
            osRecvMesg(&sp48, NULL, 1);
            osInvalDCache(phi_s3_2, (s32) phi_s2_2);
            phi_v1 = sp40;
        }
    }
    return phi_v1;
}

void DmaMgr_DmaCallback0(OSPiHandle *pOParm1, OSIoMesg *pOParm2, s32 OParm3) {
    osEPiStartDma(pOParm1, pOParm2, OParm3);
}

DmaEntry *DmaMgr_FindDmaEntry(u32 vromAddr) {
    DmaEntry *phi_v1;

    phi_v1 = dmadata;
    if (dmadata->vromEnd != 0) {
loop_1:
        if ((vromAddr >= (u32) phi_v1->vromStart) && (vromAddr < (u32) phi_v1->vromEnd)) {
            return phi_v1;
        }
        phi_v1 += 0x10;
        if (phi_v1->unk14 == 0) {
            // Duplicate return node #5. Try simplifying control flow for better match
            return NULL;
        }
        goto loop_1;
    }
    return NULL;
}

u32 DmaMgr_TranslateVromToRom(u32 vromAddr) {
    DmaEntry *temp_v0;

    temp_v0 = DmaMgr_FindDmaEntry(vromAddr);
    if (temp_v0 != 0) {
        if (temp_v0->romEnd == 0) {
            return (temp_v0->romStart + vromAddr) - temp_v0->vromStart;
        }
        if (vromAddr == temp_v0->vromStart) {
            return temp_v0->romStart;
        }
        goto block_6;
    }
block_6:
    return -1U;
}

s32 DmaMgr_FindDmaIndex(u32 vromAddr) {
    DmaEntry *temp_v0;

    temp_v0 = DmaMgr_FindDmaEntry(vromAddr);
    if (temp_v0 != 0) {
        return (s32) (temp_v0 - dmadata) >> 4;
    }
    return -1;
}

s8 *func_800809F4(u32 param_1) {
    return "??";
}

void DmaMgr_ProcessMsg(DmaRequest *request) {
    u32 sp34;
    void *sp30;
    u32 sp2C;
    u32 sp28;
    u32 sp24;
    s32 sp1C;
    DmaEntry *temp_a0_2;
    DmaEntry *temp_v0_2;
    DmaEntry *temp_v0_3;
    s32 temp_ret;
    s32 temp_v0;
    u32 temp_a0;
    u32 temp_a1;
    u32 temp_v1;
    s32 phi_t0;

    temp_a0 = request->vromAddr;
    sp30 = request->dramAddr;
    sp34 = temp_a0;
    sp2C = request->size;
    temp_ret = DmaMgr_FindDmaIndex(temp_a0);
    temp_v0 = temp_ret;
    phi_t0 = temp_v0;
    if ((temp_v0 >= 0) && (temp_v0 < (s32) numDmaEntries)) {
        temp_a0_2 = &dmadata[temp_v0];
        temp_a1 = temp_a0_2->romEnd;
        if (temp_a1 == 0) {
            if ((u32) temp_a0_2->vromEnd < (u32) (sp34 + sp2C)) {
                sp34 = sp34;
                sp1C = temp_v0;
                Fault_AddHungupAndCrash("../z_std_dma.c", 0x1F3U);
                phi_t0 = sp1C;
            }
            temp_v0_2 = &dmadata[phi_t0];
            DmaMgr_DMARomToRam((temp_v0_2->romStart + sp34) - temp_v0_2->vromStart, sp30, sp2C);
            return;
        }
        temp_v1 = temp_a0_2->romStart;
        sp24 = temp_a1 - temp_v1;
        sp28 = temp_v1;
        if (sp34 != temp_a0_2->vromStart) {
            sp1C = temp_v0;
            Fault_AddHungupAndCrash("../z_std_dma.c", 0x206U);
        }
        temp_v0_3 = &dmadata[temp_ret];
        if (sp2C != (temp_v0_3->vromEnd - temp_v0_3->vromStart)) {
            Fault_AddHungupAndCrash("../z_std_dma.c", 0x20DU);
        }
        osSetThreadPri(NULL, 0xA);
        Yaz0_Decompress(sp28, sp30, sp24);
        osSetThreadPri(NULL, 0x11);
        return;
    }
    Fault_AddHungupAndCrash("../z_std_dma.c", 0x22EU);
}

void DmaMgr_ThreadEntry(void *arg) {
    void *sp34;
    OSMesgQueue *temp_a0;

loop_1:
    osRecvMesg(&sDmaMgrMsgQueue, &sp34, 1);
    if (sp34 != 0) {
        DmaMgr_ProcessMsg((DmaRequest *) sp34);
        temp_a0 = sp34->unk18;
        if (temp_a0 != 0) {
            osSendMesg(temp_a0, sp34->unk1C, 0);
        }
        goto loop_1;
    }
}

s32 DmaMgr_SendRequestImpl(DmaRequest *request, void *vramStart, u32 vromStart, u32 size, s32 unused, OSMesgQueue *callback, void *callbackMesg) {
    if (gIrqMgrResetStatus >= 2) {
        return -2;
    }
    request->vromAddr = vromStart;
    request->size = size;
    request->unk14 = 0;
    request->dramAddr = vramStart;
    request->notifyQueue = callback;
    request->notifyMsg = callbackMesg;
    osSendMesg(&sDmaMgrMsgQueue, (void *) request, 1);
    return 0;
}

s32 DmaMgr_SendRequest0(void *vramStart, u32 vromStart, u32 size) {
    DmaRequest sp48;
    OSMesgQueue sp30;
    void *sp2C;
    s32 temp_v0;

    osCreateMesgQueue(&sp30, &sp2C, 1);
    temp_v0 = DmaMgr_SendRequestImpl(&sp48, vramStart, vromStart, size, 0, &sp30, NULL);
    if (temp_v0 == -1) {
        return temp_v0;
    }
    osRecvMesg(&sp30, NULL, 1);
    return 0;
}

void DmaMgr_Start(void) {
    u16 temp_v1;
    DmaEntry *phi_v0;
    u16 phi_v1;
    u16 phi_v1_2;

    DmaMgr_DMARomToRam((u32) _dmadataSegmentRomStart, (void *) dmadata, _AudiobankSegmentRomStart - _dmadataSegmentRomStart);
    phi_v0 = dmadata;
    phi_v1 = 0U;
    phi_v1_2 = 0U;
    if (dmadata->vromEnd != 0) {
        do {
            temp_v1 = phi_v1_2 + 1;
            phi_v0 += 0x10;
            phi_v1 = temp_v1;
            phi_v1_2 = temp_v1;
        } while (phi_v0->unk14 != 0);
    }
    numDmaEntries = phi_v1;
    osCreateMesgQueue(&sDmaMgrMsgQueue, sDmaMgrMsgs, 0x20);
    StackCheck_Init(&sDmaMgrStackInfo, (void *) sDmaMgrStack, &D_8009BA08, 0U, 0x100, "dmamgr");
    osCreateThread(&sDmaMgrThread, 0x12, (void *) DmaMgr_ThreadEntry, NULL, &D_8009BA08, 0x11);
    osStartThread(&sDmaMgrThread);
}

void DmaMgr_Stop(void) {
    osSendMesg(&sDmaMgrMsgQueue, NULL, 1);
}

