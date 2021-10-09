struct _mips2c_stack___osDevMgrMain {
    /* 0x00 */ char pad0[0x54];
    /* 0x54 */ u32 sp54;                            /* inferred */
    /* 0x58 */ char pad58[0x14];                    /* maybe part of sp54[6]? */
    /* 0x6C */ void *sp6C;                          /* inferred */
    /* 0x70 */ void *sp70;                          /* inferred */
    /* 0x74 */ void *sp74;                          /* inferred */
};                                                  /* size = 0x78 */

extern s32 D_A4600010;

void __osDevMgrMain(void *arg) {
    void *sp74;
    void *sp70;
    void *sp6C;
    u32 sp54;
    OSPiHandle *temp_a0;
    OSPiHandle *temp_a0_2;
    __OSBlockInfo *temp_s1_2;
    __OSTranxInfo *temp_s0_2;
    s32 temp_v0;
    u16 temp_t0;
    u16 temp_t1;
    void *temp_s0;
    void *temp_s1;
    s32 phi_s2;
    s32 phi_s0;

    sp74 = NULL;
loop_1:
    osRecvMesg(arg->unk8, &sp74, 1);
    temp_a0 = sp74->unk14;
    if ((temp_a0 != 0) && (temp_a0->type == 2) && ((temp_v0 = temp_a0->transferInfo.cmdType, temp_s0 = temp_a0 + 0x14, (temp_v0 == 0)) || (temp_v0 == 1))) {
        temp_s0->unk8 = -1;
        temp_s1 = temp_s0 + (temp_s0->unk6 * 0x24) + 0x18;
        phi_s2 = 0;
        phi_s2 = 0;
        if (temp_s0->unk4 != 3) {
            temp_s1->unk4 = (s32) (temp_s1->unk4 - temp_s1->unkC);
        }
        if ((temp_s0->unk4 == 2) && (sp74->unk14->transferInfo.cmdType == 0)) {
            phi_s2 = 1;
        }
        osRecvMesg(arg->unk10, &sp6C, 1);
        __osResetGlobalIntMask(0x100401U);
        __osEPiRawWriteIo(sp74->unk14, 0x5000510U, temp_s0->unk10 | 0x80000000);
loop_11:
        osRecvMesg(arg->unkC, &sp70, 1);
        temp_a0_2 = sp74->unk14;
        temp_s0_2 = &temp_a0_2->transferInfo;
        temp_t0 = temp_s0_2->blockNum;
        temp_s1_2 = &temp_s0_2->block[temp_t0];
        if (temp_s0_2->block[temp_t0].errStatus == 0x1D) {
            __osEPiRawWriteIo(temp_a0_2, 0x5000510U, temp_s0_2->bmCtlShadow | 0x10000000);
            __osEPiRawWriteIo(sp74->unk14, 0x5000510U, temp_s0_2->bmCtlShadow);
            osEPiRawReadIo(sp74->unk14, 0x5000508U, &sp54);
            if (sp54 & 0x2000000) {
                __osEPiRawWriteIo(sp74->unk14, 0x5000510U, temp_s0_2->bmCtlShadow | 0x1000000);
            }
            temp_s1_2->errStatus = 4;
            D_A4600010 = 2;
            __osSetGlobalIntMask(0x100C01U);
        }
        osSendMesg(sp74->unk4, sp74, 0);
        if ((phi_s2 == 1) && (sp74->unk14->transferInfo.block[0].errStatus == 0)) {
            goto loop_11;
        }
        osSendMesg(arg->unk10, NULL, 0);
        if (sp74->unk14->transferInfo.blockNum == 1) {
            osYieldThread();
        }
        goto loop_1;
    }
    temp_t1 = sp74->unk0;
    switch (temp_t1) {
    case 11:
        osRecvMesg(arg->unk10, &sp6C, 1);
        phi_s0 = arg->unk14(0, sp74->unkC, sp74->unk8, sp74->unk10);
        break;
    case 12:
        osRecvMesg(arg->unk10, &sp6C, 1);
        phi_s0 = arg->unk14(1, sp74->unkC, sp74->unk8, sp74->unk10);
        break;
    case 15:
        osRecvMesg(arg->unk10, &sp6C, 1);
        phi_s0 = arg->unk18(sp74->unk14, 0, sp74->unkC, sp74->unk8, sp74->unk10);
        break;
    case 16:
        osRecvMesg(arg->unk10, &sp6C, 1);
        phi_s0 = arg->unk18(sp74->unk14, 1, sp74->unkC, sp74->unk8, sp74->unk10);
        break;
    case 10:
        osSendMesg(sp74->unk4, sp74, 0);
        phi_s0 = -1;
        break;
    default:
        phi_s0 = -1;
        break;
    }
    if (phi_s0 != 0) {
        goto loop_1;
    }
    osRecvMesg(arg->unkC, &sp70, 1);
    osSendMesg(sp74->unk4, sp74, 0);
    osSendMesg(arg->unk10, NULL, 0);
    goto loop_1;
}
