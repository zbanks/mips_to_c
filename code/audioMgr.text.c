static s32 D_801D14F0 = 0xA;
GameInfo *gGameInfo;



void func_80172C30(AudioMgr *audioMgr) {
    AudioTask *temp_v0;

    temp_v0 = audioMgr->rspTask;
    if (temp_v0->taskQueue != 0) {
        osSendMesg(temp_v0->taskQueue, NULL, 1);
    }
}

void AudioMgr_HandleRetrace(AudioMgr *audioMgr) {
    AudioTask *sp9C;
    OSTimer sp78;
    void *sp74;
    AudioMgr *temp_t4;
    AudioTask *temp_s0;
    AudioTask *temp_s0_2;
    AudioTask *temp_t3;
    AudioTask *temp_t4_2;
    OSMesgQueue *temp_s1;
    s32 temp_v0;
    void *temp_t2;
    AudioTask *phi_t3;
    AudioMgr *phi_t4;
    AudioTask *phi_t4_2;
    void *phi_t2;

    if ((s32) gGameInfo->data[116] > 0) {
        audioMgr->rspTask = NULL;
    }
    if (audioMgr->cmdQ.validCount != 0) {
        do {
            osRecvMesg(&audioMgr->cmdQ, NULL, 0);
        } while (audioMgr->cmdQ.validCount != 0);
    }
    temp_s0 = audioMgr->rspTask;
    phi_t3 = temp_s0;
    phi_t4 = audioMgr;
    if (temp_s0 != 0) {
        audioMgr->audioTask.next = NULL;
        audioMgr->audioTask.flags = 2;
        audioMgr->audioTask.framebuffer = NULL;
        do {
            temp_t3 = phi_t3 + 0xC;
            temp_t4 = phi_t4 + 0xC;
            temp_t4->audioTask.state = phi_t3->task.t.type;
            temp_t4->audioTask.flags = temp_t3->unk-8;
            temp_t4->audioTask.framebuffer = temp_t3->unk-4;
            phi_t3 = temp_t3;
            phi_t4 = temp_t4;
        } while (temp_t3 != &temp_s0->task.t.yield_data_size);
        temp_t4->audioTask.list.t.type = temp_t3->task.t.type;
        audioMgr->audioTask.msgQ = &audioMgr->cmdQ;
        audioMgr->audioTask.msg = NULL;
        osSendMesg(&audioMgr->sched->cmdQ, (void *) &audioMgr->audioTask, 1);
        Sched_SendEntryMsg(audioMgr->sched);
    }
    if ((s32) gGameInfo->data[116] >= 2) {
        sp9C = NULL;
    } else {
        sp9C = func_80192BE0();
    }
    temp_s1 = &audioMgr->cmdQ;
    if (audioMgr->rspTask != 0) {
loop_13:
        osSetTimer(&sp78, 0U, 0x16E360U, NULL, NULL, temp_s1, 0x29A);
        osRecvMesg(temp_s1, &sp74, 1);
        osStopTimer(&sp78);
        if (sp74 == 0x29A) {
            temp_s0_2 = audioMgr->rspTask;
            phi_t4_2 = temp_s0_2;
            phi_t2 = sp;
            do {
                temp_t4_2 = phi_t4_2 + 0xC;
                temp_t2 = phi_t2 + 0xC;
                temp_t2->unk-4 = (s32) phi_t4_2->task.t.type;
                temp_t2->unk0 = (s32) temp_t4_2->unk-8;
                temp_t2->unk4 = (s32) temp_t4_2->unk-4;
                phi_t4_2 = temp_t4_2;
                phi_t2 = temp_t2;
            } while (temp_t4_2 != &temp_s0_2->task.t.yield_data_size);
            temp_t2->unk8 = (s32) temp_t4_2->task.t.type;
            osSyncPrintf("AUDIO SP TIMEOUT %08x %08x\n", temp_s0_2, subroutine_arg2, subroutine_arg3);
            temp_v0 = D_801D14F0;
            if (temp_v0 >= 0) {
                D_801D14F0 = temp_v0 - 1;
                Sched_SendAudioCancelMsg(audioMgr->sched);
                goto loop_13;
            }
            osSyncPrintf("audioMgr.c:もうダメ！死ぬ！\n");
            osDestroyThread(NULL);
        }
        func_80172C30(audioMgr);
    }
    audioMgr->rspTask = sp9C;
}

void AudioMgr_HandlePRENMI(AudioMgr *audioMgr) {
    Audio_PreNMI();
}

void AudioMgr_ThreadEntry(void *arg) {
    IrqMgrClient sp4C;
    void *sp48;
    OSMesgQueue *temp_s6;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 phi_s1;
    s32 phi_s1_2;
    s32 phi_s1_3;

    sp48 = NULL;
    func_801A4C30();
    func_80190B38((void *) DmaMgr_DmaCallback0);
    func_801A4D00();
    osSendMesg(arg + 0x110, NULL, 1);
    temp_s6 = arg + 0x64;
    IrqMgr_AddClient(arg->unk0, &sp4C, temp_s6);
    phi_s1_2 = 0;
    do {
        osRecvMesg(temp_s6, &sp48, 1);
        temp_v0 = *sp48;
        phi_s1 = phi_s1_2;
        phi_s1_3 = phi_s1_2;
        if (temp_v0 != 1) {
            if (temp_v0 != 3) {
                if (temp_v0 != 4) {

                } else {
                    AudioMgr_HandlePRENMI((AudioMgr *) arg);
                }
            } else {
                phi_s1 = 1;
            }
        } else {
            AudioMgr_HandleRetrace((AudioMgr *) arg);
            if (arg->unk6C != 0) {
                do {
                    osRecvMesg(temp_s6, &sp48, 1);
                    temp_v0_2 = *sp48;
                    if (temp_v0_2 != 1) {
                        if (temp_v0_2 != 3) {
                            if (temp_v0_2 == 4) {
                                AudioMgr_HandlePRENMI((AudioMgr *) arg);
                            }
                        } else {
                            phi_s1_3 = 1;
                        }
                    }
                    phi_s1 = phi_s1_3;
                } while (arg->unk6C != 0);
            }
        }
        phi_s1_2 = phi_s1;
    } while (phi_s1 == 0);
    IrqMgr_RemoveClient(arg->unk0, &sp4C);
}

void AudioMgr_Unlock(AudioMgr *audioMgr) {
    osRecvMesg(&audioMgr->lockMsgQ, NULL, 1);
}

void AudioMgr_Init(AudioMgr *audioMgr, void *stack, s32 pri, s32 id, SchedContext *sched, IrqMgr *irqMgr) {
    OSThread *sp2C;
    OSThread *temp_a0;

    bzero((void *) audioMgr, 0x2E0);
    audioMgr->sched = sched;
    audioMgr->rspTask = NULL;
    audioMgr->irqMgr = irqMgr;
    osCreateMesgQueue(&audioMgr->cmdQ, audioMgr->cmdMsgBuf, 1);
    osCreateMesgQueue(&audioMgr->interruptMsgQ, audioMgr->interruptMsgBuf, 0x1E);
    osCreateMesgQueue(&audioMgr->lockMsgQ, audioMgr->lockMsgBuf, 1);
    temp_a0 = &audioMgr->thread;
    sp2C = temp_a0;
    osCreateThread(temp_a0, id, (void *) AudioMgr_ThreadEntry, (void *) audioMgr, stack, pri);
    osStartThread(temp_a0);
}

