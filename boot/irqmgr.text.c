s32 gIrqMgrResetStatus = 0;
u64 sIrqMgrResetTime = 0;
s32 sIrqMgrRetraceCount = 0;
u64 sIrqMgrRetraceTime = 0;



void IrqMgr_AddClient(IrqMgr *irqmgr, IrqMgrClient *add, OSMesgQueue *msgQ) {
    u32 temp_a0;

    temp_a0 = osSetIntMask(1U);
    add->queue = msgQ;
    add->next = irqmgr->callbacks;
    irqmgr->callbacks = add;
    osSetIntMask(temp_a0);
    if ((s32) irqmgr->prenmiStage > 0) {
        osSendMesg(add->queue, (void *) &irqmgr->prenmiMsg, 0);
    }
    if ((s32) irqmgr->prenmiStage >= 2) {
        osSendMesg(add->queue, (void *) &irqmgr->nmiMsg, 0);
    }
}

void IrqMgr_RemoveClient(IrqMgr *irqmgr, IrqMgrClient *remove) {
    IrqMgrClient *sp1C;
    IrqMgrClient *sp18;
    IrqMgrClient *temp_v1;
    IrqMgrClient *temp_v1_2;
    IrqMgrClient *phi_v1;
    IrqMgrClient *phi_a2;

    temp_v1 = irqmgr->callbacks;
    sp18 = NULL;
    sp1C = temp_v1;
    phi_v1 = temp_v1;
    phi_a2 = sp18;
    if (temp_v1 != 0) {
loop_1:
        if (phi_v1 == remove) {
            if (phi_a2 != 0) {
                phi_a2->next = remove->next;
            } else {
                irqmgr->callbacks = remove->next;
            }
        } else {
            temp_v1_2 = phi_v1->next;
            phi_v1 = temp_v1_2;
            phi_a2 = phi_v1;
            if (temp_v1_2 != 0) {
                goto loop_1;
            }
        }
    }
    osSetIntMask(osSetIntMask(1U));
}

void IrqMgr_SendMesgForClient(IrqMgr *irqmgr, void *msg) {
    IrqMgrClient *temp_s0;
    IrqMgrClient *temp_s0_2;
    IrqMgrClient *phi_s0;

    temp_s0 = irqmgr->callbacks;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
        do {
            osSendMesg(phi_s0->queue, msg, 0);
            temp_s0_2 = phi_s0->next;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 0);
    }
}

void IrqMgr_JamMesgForClient(IrqMgr *irqmgr, void *msg) {
    IrqMgrClient *temp_s0;
    IrqMgrClient *temp_s0_2;
    OSMesgQueue *temp_a0;
    IrqMgrClient *phi_s0;

    temp_s0 = irqmgr->callbacks;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
        do {
            temp_a0 = phi_s0->queue;
            if (temp_a0->validCount < temp_a0->msgCount) {
                osSendMesg(temp_a0, msg, 0);
            }
            temp_s0_2 = phi_s0->next;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 0);
    }
}

void IrqMgr_HandlePreNMI(IrqMgr *irqmgr) {
    s32 temp_v0;
    u32 temp_v1;
    u64 temp_ret;

    gIrqMgrResetStatus = 1;
    irqmgr->prenmiStage = 1;
    temp_ret = osGetTime();
    temp_v0 = temp_ret;
    temp_v1 = (u32) temp_ret;
    irqmgr->unk250 = temp_v0;
    irqmgr->unk254 = temp_v1;
    sIrqMgrResetTime.unk0 = temp_v0;
    sIrqMgrResetTime.unk4 = temp_v1;
    osSetTimer(&irqmgr->prenmiTimer, 0U, 0x141DD76U, NULL, NULL, &irqmgr->irqQueue, 0x29F);
    IrqMgr_JamMesgForClient(irqmgr, (void *) &irqmgr->prenmiMsg);
}

void IrqMgr_CheckStack(void) {
    StackCheck_Check(NULL);
}

void IrqMgr_HandlePRENMI450(IrqMgr *irqmgr) {
    gIrqMgrResetStatus = 2;
    irqmgr->prenmiStage = 2;
    osSetTimer(&irqmgr->prenmiTimer, 0U, 0x15752AU, NULL, NULL, &irqmgr->irqQueue, 0x2A0);
    IrqMgr_SendMesgForClient(irqmgr, (void *) &irqmgr->nmiMsg);
}

void IrqMgr_HandlePRENMI480(IrqMgr *irqmgr) {
    osSetTimer(&irqmgr->prenmiTimer, 0U, 0x173EED8U, NULL, NULL, &irqmgr->irqQueue, 0x2A1);
    osAfterPreNMI();
}

void IrqMgr_HandlePRENMI500(IrqMgr *irqmgr) {
    IrqMgr_CheckStack();
}

void IrqMgr_HandleRetrace(IrqMgr *irqmgr) {
    u32 temp_t3;
    u32 temp_v1;
    u32 temp_v1_2;
    u64 temp_ret;
    u64 temp_ret_2;

    if ((sIrqMgrRetraceTime.unk0 == 0) && (sIrqMgrRetraceTime.unk4 == 0)) {
        if ((irqmgr->unk278 == 0) && (irqmgr->unk27C == 0)) {
            temp_ret = osGetTime();
            temp_v1 = (u32) temp_ret;
            irqmgr->unk278 = temp_ret;
            irqmgr->unk27C = temp_v1;
        } else {
            temp_ret_2 = osGetTime();
            temp_v1_2 = (u32) temp_ret_2;
            temp_t3 = irqmgr->unk27C;
            sIrqMgrRetraceTime.unk0 = (s32) ((temp_ret_2 - irqmgr->unk278) - (temp_v1_2 < temp_t3));
            sIrqMgrRetraceTime.unk4 = (s32) (temp_v1_2 - temp_t3);
        }
    }
    sIrqMgrRetraceCount += 1;
    IrqMgr_SendMesgForClient(irqmgr, (void *) irqmgr);
}

void IrqMgr_ThreadEntry(IrqMgr *irqmgr) {
    void *sp34;
    void *temp_t7;

    sp34 = NULL;
    do {
        osRecvMesg(&irqmgr->irqQueue, &sp34, 1);
        temp_t7 = sp34 - 0x29A;
        if ((u32) temp_t7 < 8U) {
            switch ((s32) temp_t7) {
            case 0:
                IrqMgr_HandleRetrace(irqmgr);
                break;
            case 3:
                IrqMgr_HandlePreNMI(irqmgr);
                break;
            case 5:
                IrqMgr_HandlePRENMI450(irqmgr);
                break;
            case 6:
                IrqMgr_HandlePRENMI480(irqmgr);
                break;
            case 7:
                IrqMgr_HandlePRENMI500(irqmgr);
                break;
            }
        }
    } while (0 == 0);
}

void IrqMgr_Init(IrqMgr *irqmgr, void *stack, s32 pri, u8 retraceCount) {
    OSMesgQueue *sp2C;
    OSMesgQueue *temp_a0;
    OSThread *temp_a0_2;

    irqmgr->callbacks = NULL;
    irqmgr->verticalRetraceMesg.type = 1;
    irqmgr->prenmiMsg.type = 4;
    irqmgr->nmiMsg.type = 3;
    irqmgr->prenmiStage = 0;
    irqmgr->unk254 = 0;
    irqmgr->unk250 = 0;
    temp_a0 = &irqmgr->irqQueue;
    sp2C = temp_a0;
    osCreateMesgQueue(temp_a0, irqmgr->irqBuffer, 8);
    osSetEventMesg(0xEU, sp2C, (void *)0x29D);
    osViSetEvent(temp_a0, (void *)0x29A, (u32) retraceCount);
    temp_a0_2 = &irqmgr->thread;
    sp2C = (OSMesgQueue *) temp_a0_2;
    osCreateThread(temp_a0_2, 0x13, (void *) IrqMgr_ThreadEntry, (void *) irqmgr, stack, pri);
    osStartThread(temp_a0_2);
}

