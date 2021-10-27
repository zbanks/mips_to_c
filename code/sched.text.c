struct _mips2c_stack_Sched_FaultClient {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_Sched_HandleAudioCancel {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Sched_HandleEntry {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ void *sp34;                          /* inferred */
    /* 0x38 */ OSScTask *sp38;                      /* inferred */
    /* 0x3C */ OSScTask *sp3C;                      /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_Sched_HandleGfxCancel {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Sched_HandleRDPDone {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ OSScTask *sp24;                      /* inferred */
    /* 0x28 */ OSScTask *sp28;                      /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_Sched_HandleRSPDone {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ OSScTask *sp3C;                      /* inferred */
    /* 0x40 */ OSScTask *sp40;                      /* inferred */
    /* 0x44 */ OSScTask *sp44;                      /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_Sched_HandleReset {};          /* size 0x0 */

struct _mips2c_stack_Sched_HandleRetrace {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Sched_HandleStop {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Sched_Init {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ OSThread *sp2C;                      /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_Sched_NotifyDone {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Sched_QueueTask {};            /* size 0x0 */

struct _mips2c_stack_Sched_RetraceUpdateFramebuffer {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Sched_RunTask {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ OSTask *sp18;                        /* inferred */
    /* 0x1C */ char pad_1C[0xC];
};                                                  /* size = 0x28 */

struct _mips2c_stack_Sched_Schedule {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_Sched_SendAudioCancelMsg {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Sched_SendEntryMsg {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Sched_SendGfxCancelMsg {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Sched_SwapFramebuffer {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_Sched_TaskCheckFramebuffers {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_Sched_TaskUpdateFramebuffer {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Sched_ThreadEntry {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_Sched_Yield {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

s32 Sched_TaskCheckFramebuffers(OSScTask *arg0, void *arg1); /* static */
static s32 D_801FBB04;
static s32 D_801FBB0C;
static s32 D_801FBB14;
u64 *gAudioSPDataPtr;
u32 gAudioSPDataSize;
GameInfo *gGameInfo;
u64 gRDPTotalTime;
u64 gRSPAudioTotalTime;
u64 sRDPStartTime;
u64 sRSPAudioStartTime;
u64 sRSPGFXStartTime;
u64 sRSPGFXTotalTime;
u64 sRSPOtherStartTime;
u64 sRSPOtherTotalTime;
FaultClient sSchedFaultClient;

void Sched_SwapFramebuffer(CfbInfo *cfbInfo) {
    u16 *temp_a1;

    temp_a1 = cfbInfo->swapBuffer;
    if (temp_a1 != 0) {
        osViSwapBuffer((void *) temp_a1);
        cfbInfo->updateRate2 = cfbInfo->updateRate;
        if ((gGameInfo->data[158] == 0) && (cfbInfo->viMode != 0)) {
            D_80096B20 = 1;
            osViSetMode(cfbInfo->viMode);
            osViSetSpecialFeatures(cfbInfo->features);
            osViSetXScale(cfbInfo->xScale);
            osViSetYScale(cfbInfo->yScale);
            cfbInfo->viMode = NULL;
        }
    }
    cfbInfo->unk_10 = 0;
}

void Sched_RetraceUpdateFramebuffer(SchedContext *sched, CfbInfo *cfbInfo) {
    if (sched->shouldUpdateVi != 0) {
        sched->shouldUpdateVi = 0;
        if (gIrqMgrResetStatus == 0) {
            ViConfig_UpdateVi(0U);
        }
    }
    Sched_SwapFramebuffer(cfbInfo);
}

void Sched_HandleReset(SchedContext *sched) {

}

void Sched_HandleStop(SchedContext *sched) {
    ViConfig_UpdateVi(1U);
}

void Sched_HandleAudioCancel(SchedContext *sched) {
    OSMesgQueue *temp_a0_2;
    OSScTask *temp_a0;
    OSScTask *temp_v0;
    OSScTask *temp_v0_2;
    s32 temp_s0;
    s32 phi_s0;
    s32 phi_s0_2;

    osSyncPrintf("AUDIO SP キャンセルします\n");
    temp_v0 = sched->curRSPTask;
    if ((temp_v0 != 0) && (temp_v0->list.t.type == 2)) {
        if ((*(s32 *)0xA4040010 & 1) == 0) {
            osSyncPrintf("AUDIO SP止めようとします\n", sched);
            *(s32 *)0xA4040010 = 2;
            phi_s0 = 0;
            phi_s0_2 = 0;
            if ((*(s32 *)0xA4040010 & 1) == 0) {
loop_4:
                temp_s0 = phi_s0 + 1;
                phi_s0 = temp_s0;
                phi_s0_2 = temp_s0;
                if (((phi_s0 < 0x65) ^ 1) != 0) {
                    osSyncPrintf("AUDIO SP止まりませんでした(10msタイムアウト)\n");
                } else {
                    Sleep_Usec(0x64);
                    if ((*(s32 *)0xA4040010 & 1) != 0) {
                        goto block_7;
                    }
                    goto loop_4;
                }
            } else {
block_7:
                osSyncPrintf("AUDIO SP止まりました(%d * 100us)\n", phi_s0_2);
            }
        } else {
            osSyncPrintf("AUDIO SP止まっているようです\n", sched);
        }
        osSendMesg((OSMesgQueue *) sched, (void *)0x29B, 0);
        return;
    }
    temp_a0 = sched->audioListHead;
    if (temp_a0 != 0) {
        temp_v0_2 = temp_a0->next;
        sched->audioListHead = temp_v0_2;
        if (temp_v0_2 == 0) {
            sched->audioListTail = NULL;
        }
        temp_a0_2 = temp_a0->msgQ;
        if (temp_a0_2 != 0) {
            osSendMesg(temp_a0_2, temp_a0->msg, 1);
        }
        osSyncPrintf("AUDIO SP タスクを実行待ちリストから削除しました\n");
        return;
    }
    osSyncPrintf("キャンセルすべき AUDIO SP タスクがありません\n", sched);
}

void Sched_HandleGfxCancel(SchedContext *sched) {
    OSMesgQueue *temp_a0_2;
    OSScTask *temp_a0;
    OSScTask *temp_v0;
    OSScTask *temp_v0_2;
    s32 temp_s0;
    s32 temp_v0_3;
    void *temp_a0_3;
    void *temp_s0_2;
    s32 phi_s0;
    s32 phi_s0_2;

    osSyncPrintf("GRAPH SP キャンセルします\n");
    temp_v0 = sched->curRSPTask;
    if ((temp_v0 != 0) && (temp_v0->list.t.type == 1)) {
        if ((*(s32 *)0xA4040010 & 1) == 0) {
            osSyncPrintf("GRAPH SP止めようとします\n");
            *(s32 *)0xA4040010 = 2;
            phi_s0 = 0;
            phi_s0_2 = 0;
            if ((*(s32 *)0xA4040010 & 1) == 0) {
loop_4:
                temp_s0 = phi_s0 + 1;
                phi_s0 = temp_s0;
                phi_s0_2 = temp_s0;
                if (((phi_s0 < 0x65) ^ 1) != 0) {
                    osSyncPrintf("GRAPH SP止まりませんでした(10msタイムアウト)\n");
                } else {
                    Sleep_Usec(0x64);
                    if ((*(s32 *)0xA4040010 & 1) != 0) {
                        goto block_7;
                    }
                    goto loop_4;
                }
            } else {
block_7:
                osSyncPrintf("GRAPH SP止まりました(%d * 100us)\n", phi_s0_2);
            }
        } else {
            osSyncPrintf("GRAPH SP止まっているようです\n");
        }
        osSendMesg((OSMesgQueue *) sched, (void *)0x29B, 0);
        goto block_16;
    }
    temp_a0 = sched->gfxListHead;
    if (temp_a0 != 0) {
        temp_v0_2 = temp_a0->next;
        sched->gfxListHead = temp_v0_2;
        if (temp_v0_2 == 0) {
            sched->gfxListTail = NULL;
        }
        temp_a0_2 = temp_a0->msgQ;
        if (temp_a0_2 != 0) {
            osSendMesg(temp_a0_2, temp_a0->msg, 1);
            goto block_16;
        }
    } else {
        osSyncPrintf("キャンセルすべき GRAPH SP タスクがありません\n");
block_16:
    }
    temp_v0_3 = sched->curRDPTask;
    temp_s0_2 = temp_v0_3 + 0x10;
    if ((temp_v0_3 != 0) && (temp_s0_2->unk_0 == 1)) {
        osSyncPrintf("DP止めようとします\n");
        temp_a0_3 = temp_s0_2->unk_28;
        bzero(temp_a0_3, temp_s0_2->unk_2C - temp_a0_3);
        osSendMesg((OSMesgQueue *) sched, (void *)0x29C, 0);
    }
}

void Sched_QueueTask(SchedContext *sched, OSScTask *task) {
    OSScTask *temp_v0;
    OSScTask *temp_v0_2;

    if (task->list.t.type == 2) {
        temp_v0 = sched->audioListTail;
        if (temp_v0 != 0) {
            temp_v0->next = task;
        } else {
            sched->audioListHead = task;
        }
        sched->audioListTail = task;
    } else {
        temp_v0_2 = sched->gfxListTail;
        if (temp_v0_2 != 0) {
            temp_v0_2->next = task;
        } else {
            sched->gfxListHead = task;
        }
        sched->gfxListTail = task;
    }
    task->next = NULL;
    task->state = task->flags & 3;
}

void Sched_Yield(SchedContext *sched) {
    OSScTask *temp_v0;
    u32 temp_v1;

    temp_v0 = sched->curRSPTask;
    if (temp_v0->list.t.type == 2) {
        osSyncPrintf("まだ前回のオーディオタスクが完了していないのに新たなオーディオタスクがエントリされた\n");
        return;
    }
    temp_v1 = temp_v0->state;
    if ((temp_v1 & 0x10) == 0) {
        temp_v0->state = temp_v1 | 0x10;
        osSpTaskYield();
    }
}

s32 Sched_TaskCheckFramebuffers(OSScTask *arg0, void *arg1) {
    void *sp1C;
    void *temp_v0;

    sp1C = osViGetNextFramebuffer();
    temp_v0 = osViGetCurrentFramebuffer();
    if ((arg1 == 0) || (arg0[9].framebuffer != 0) || ((temp_v0 == *arg1->unk_C) && (temp_v0 != sp1C))) {
        return 0;
    }
    return 1;
}

s32 Sched_Schedule(SchedContext *sched, OSScTask **spTask, OSScTask **dpTask, s32 state) {
    s32 sp24;
    ? *temp_t6;
    OSScTask *temp_s0;
    OSScTask *temp_t8;
    OSScTask *temp_t8_2;
    OSScTask *temp_v0;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t1_2;
    SchedContext *phi_a0;
    s32 phi_t1;

    temp_t0 = state & 2;
    temp_s0 = sched->gfxListHead;
    temp_v0 = sched->audioListHead;
    phi_a0 = sched;
    phi_t1 = state;
    if ((temp_t0 != 0) && (temp_v0 != 0)) {
        *spTask = temp_v0;
        temp_t8 = sched->audioListHead->next;
        sched->audioListHead = temp_t8;
        phi_t1 = state & ~2;
        if (temp_t8 == 0) {
            sched->audioListTail = NULL;
        }
    } else if (temp_s0 != 0) {
        if (((temp_s0->state & 0x20) != 0) || ((temp_s0->flags & 1) == 0)) {
            if (temp_t0 != 0) {
                *spTask = temp_s0;
                temp_t1_2 = state & ~2;
                temp_t8_2 = sched->gfxListHead->next;
                sched->gfxListHead = temp_t8_2;
                phi_t1 = temp_t1_2;
                phi_t1 = temp_t1_2;
                if (temp_t8_2 == 0) {
                    goto block_14;
                }
            }
        } else if ((state == 3) && ((temp_s0->framebuffer == 0) || (sp24 = state, phi_t1 = state, (Sched_TaskCheckFramebuffers(temp_s0) != 0)))) {
            temp_t1 = state & ~3;
            *dpTask = temp_s0;
            *spTask = temp_s0;
            temp_t6 = *sched->gfxListHead;
            sched->gfxListHead = temp_t6;
            phi_a0 = sched;
            phi_t1 = temp_t1;
            phi_t1 = temp_t1;
            if (temp_t6 == 0) {
block_14:
                phi_a0->gfxListTail = NULL;
            }
        }
    }
    return phi_t1;
}

void Sched_TaskUpdateFramebuffer(SchedContext *sched, OSScTask *task) {
    CfbInfo *temp_v0;

    temp_v0 = sched->curBuf;
    sched->pendingSwapBuf1 = task->framebuffer;
    if ((temp_v0 == 0) || ((s32) temp_v0->updateRate2 <= 0)) {
        Sched_RetraceUpdateFramebuffer(sched, sched->pendingSwapBuf1);
    }
}

void Sched_NotifyDone(SchedContext *sched, OSScTask *task) {
    OSMesgQueue *temp_a0;
    void *temp_a1;

    if ((task->state & 3) == 0) {
        temp_a0 = task->msgQ;
        if (temp_a0 != 0) {
            temp_a1 = task->msg;
            task = task;
            osSendMesg(temp_a0, temp_a1, 1);
        }
        if ((task->flags & 0x40) != 0) {
            Sched_TaskUpdateFramebuffer(sched, task);
        }
    }
}

void Sched_RunTask(SchedContext *sched, OSScTask *spTask, OSScTask *dpTask) {
    OSTask *sp18;
    OSTask *temp_a0;
    u32 *temp_at;
    u32 *temp_at_2;
    u32 *temp_at_3;
    u32 temp_a0_2;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v1;
    u64 temp_ret;

    if (spTask != 0) {
        temp_v0 = spTask->list.t.type;
        if (temp_v0 == 0) {
            if ((spTask->flags & 2) != 0) {
                spTask->state &= -3;
                sched->curRSPTask = NULL;
            }
            if ((spTask->flags & 1) != 0) {
                spTask->state &= -2;
                sched->curRDPTask = NULL;
            }
            Sched_NotifyDone(sched, spTask);
            return;
        }
        if ((temp_v0 != 2) && ((spTask->state & 0x20) == 0)) {
            sched = sched;
            osWritebackDCacheAll();
        }
        temp_a0 = spTask + 0x10;
        spTask->state &= -0x31;
        sched = sched;
        spTask = spTask;
        sp18 = temp_a0;
        osSpTaskLoad(temp_a0);
        temp_ret = osGetTime();
        temp_v0_2 = temp_ret;
        temp_v1 = (u32) temp_ret;
        temp_a0_2 = spTask->list.t.type;
        if (temp_a0_2 != 1) {
            temp_at = &sRSPAudioStartTime + 4;
            if (temp_a0_2 == 2) {
                *temp_at = temp_v0_2;
                *temp_at = temp_v1;
            } else {
                temp_at_2 = &sRSPOtherStartTime + 4;
                *temp_at_2 = temp_v0_2;
                *temp_at_2 = temp_v1;
            }
        } else {
            temp_at_3 = &sRSPGFXStartTime + 4;
            *temp_at_3 = temp_v0_2;
            *temp_at_3 = temp_v1;
        }
        if (spTask->list.t.type == 2) {
            gAudioSPDataPtr = spTask->list.t.data_ptr;
            gAudioSPDataSize = spTask->list.t.data_size;
        }
        spTask = spTask;
        sched = sched;
        osSpTaskStartGo(sp18);
        sched->curRSPTask = spTask;
        if ((spTask == dpTask) && (sched->curRDPTask == 0)) {
            sched->curRDPTask = dpTask;
            sRDPStartTime = *(&sRSPGFXStartTime + 4);
            sRDPStartTime = sRSPGFXStartTime;
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
    }
}

void Sched_HandleEntry(SchedContext *sched) {
    OSScTask *sp3C;
    OSScTask *sp38;
    void *sp34;
    OSMesgQueue *temp_s2;
    s32 temp_s0;
    void **temp_s3;

    temp_s3 = &sp34;
    temp_s2 = &sched->cmdQ;
    sp3C = NULL;
    sp38 = NULL;
    sp34 = NULL;
    if (osRecvMesg(temp_s2, temp_s3, 0) != -1) {
        do {
            Sched_QueueTask(sched, (OSScTask *) sp34);
        } while (osRecvMesg(temp_s2, temp_s3, 0) != -1);
    }
    if ((sched->audioListHead != 0) && (sched->curRSPTask != 0)) {
        Sched_Yield(sched);
        return;
    }
    temp_s0 = ((sched->curRSPTask == 0) * 2) | (sched->curRDPTask == 0);
    if (Sched_Schedule(sched, &sp3C, &sp38, temp_s0) != temp_s0) {
        Sched_RunTask(sched, sp3C, sp38);
    }
}

void Sched_HandleRetrace(SchedContext *sched) {
    CfbInfo *temp_a1;
    CfbInfo *temp_a1_2;
    CfbInfo *temp_v0;
    CfbInfo *temp_v0_2;
    s8 temp_v1;
    u16 *phi_v1;
    CfbInfo *phi_a1;
    s32 phi_v1_2;

    ViConfig_UpdateBlack();
    sched->retraceCount += 1;
    temp_a1 = sched->pendingSwapBuf1;
    phi_v1 = NULL;
    if (temp_a1 != 0) {
        phi_v1 = temp_a1->swapBuffer;
    }
    if (phi_v1 == osViGetCurrentFramebuffer()) {
        temp_v0 = sched->curBuf;
        if (temp_v0 != 0) {
            temp_v0->unk_10 = 0;
        }
        phi_a1 = sched->pendingSwapBuf1;
        if (sched->pendingSwapBuf1 != 0) {
            sched->pendingSwapBuf1->unk_10 = 0;
            phi_a1 = sched->pendingSwapBuf1;
        }
        sched->curBuf = phi_a1;
        sched->pendingSwapBuf1 = NULL;
    }
    temp_v0_2 = sched->curBuf;
    if (temp_v0_2 != 0) {
        temp_v1 = temp_v0_2->updateRate2;
        phi_v1_2 = (s32) temp_v1;
        if ((s32) temp_v1 > 0) {
            temp_v0_2->updateRate2 = temp_v1 - 1;
            phi_v1_2 = (s32) sched->curBuf->updateRate2;
        }
        if (phi_v1_2 <= 0) {
            temp_a1_2 = sched->pendingSwapBuf1;
            if (temp_a1_2 != 0) {
                Sched_RetraceUpdateFramebuffer(sched, temp_a1_2);
            }
        }
    }
    Sched_HandleEntry(sched);
}

void Sched_HandleRSPDone(SchedContext *sched) {
    OSScTask *sp44;
    OSScTask *sp40;
    OSScTask *sp3C;
    s32 sp38;
    OSScTask *temp_a1;
    s32 temp_a3;
    u32 temp_a0;
    u32 temp_t1;
    u32 temp_t1_2;
    u32 temp_t3;
    u32 temp_t3_2;
    u32 temp_t3_3;
    u32 temp_t5;
    u32 temp_v1;
    u64 temp_ret;
    u64 temp_v0;

    sp40 = NULL;
    sp3C = NULL;
    if (sched->curRSPTask == 0) {
        osSyncPrintf("__scHandleRSP:sc->curRSPTask == NULL\n");
        return;
    }
    temp_ret = osGetTime();
    temp_v0 = temp_ret;
    temp_v1 = (u32) temp_ret;
    temp_a0 = sched->curRSPTask->list.t.type;
    if (temp_a0 != 1) {
        if (temp_a0 == 2) {
            temp_t3 = gRSPAudioTotalTime.unk_4 + temp_v1;
            temp_t5 = *(&sRSPAudioStartTime + 4);
            gRSPAudioTotalTime.unk_0 = (s32) ((((temp_t3 < temp_v1) + gRSPAudioTotalTime.unk_0 + temp_v0) - sRSPAudioStartTime) - (temp_t3 < temp_t5));
            D_801FBB04 = temp_t3 - temp_t5;
        } else {
            temp_t1 = sRSPOtherTotalTime.unk_4 + temp_v1;
            temp_t3_2 = *(&sRSPOtherStartTime + 4);
            sRSPOtherTotalTime.unk_0 = (s32) ((((temp_t1 < temp_v1) + sRSPOtherTotalTime.unk_0 + temp_v0) - sRSPOtherStartTime) - (temp_t1 < temp_t3_2));
            D_801FBB14 = temp_t1 - temp_t3_2;
        }
    } else {
        temp_t3_3 = *(&sRSPGFXStartTime + 4);
        temp_t1_2 = sRSPGFXTotalTime.unk_4 + temp_v1;
        sRSPGFXTotalTime.unk_0 = (s32) ((((temp_t1_2 < temp_v1) + sRSPGFXTotalTime.unk_0 + temp_v0) - sRSPGFXStartTime) - (temp_t1_2 < temp_t3_3));
        D_801FBB0C = temp_t1_2 - temp_t3_3;
    }
    temp_a1 = sched->curRSPTask;
    sched->curRSPTask = NULL;
    if (temp_a1->list.t.type == 2) {
        gAudioSPDataPtr = NULL;
        gAudioSPDataSize = 0;
    }
    if (((temp_a1->state & 0x10) != 0) && (sp44 = temp_a1, (osSpTaskYielded(&temp_a1->list) != 0))) {
        temp_a1->state |= 0x20;
        temp_a1->next = sched->gfxListHead;
        sched->gfxListHead = temp_a1;
        if (sched->gfxListTail == 0) {
            sched->gfxListTail = temp_a1;
        }
    } else {
        temp_a1->state &= -3;
        Sched_NotifyDone(sched, temp_a1);
    }
    temp_a3 = ((sched->curRSPTask == 0) * 2) | (sched->curRDPTask == 0);
    sp38 = temp_a3;
    if (Sched_Schedule(sched, &sp40, &sp3C, temp_a3) != temp_a3) {
        Sched_RunTask(sched, sp40, sp3C);
    }
}

void Sched_HandleRDPDone(SchedContext *sched) {
    OSScTask *sp28;
    OSScTask *sp24;
    s32 sp20;
    OSScTask *temp_a1;
    s32 temp_a3;
    u32 temp_t9;
    u32 temp_v1;
    u64 temp_ret;

    sp28 = NULL;
    sp24 = NULL;
    if (sched->curRDPTask == 0) {
        osSyncPrintf("__scHandleRDP:sc->curRDPTask == NULL\n");
        return;
    }
    temp_ret = osGetTime();
    temp_v1 = (u32) temp_ret;
    temp_t9 = *(&sRDPStartTime + 4);
    gRDPTotalTime.unk_0 = (s32) ((temp_ret - sRDPStartTime) - (temp_v1 < temp_t9));
    gRDPTotalTime.unk_4 = (s32) (temp_v1 - temp_t9);
    temp_a1 = sched->curRDPTask;
    sched->curRDPTask = NULL;
    temp_a1->state &= -2;
    Sched_NotifyDone(sched, temp_a1);
    temp_a3 = ((sched->curRSPTask == 0) * 2) | (sched->curRDPTask == 0);
    sp20 = temp_a3;
    if (Sched_Schedule(sched, &sp28, &sp24, temp_a3) != temp_a3) {
        Sched_RunTask(sched, sp28, sp24);
    }
}

void Sched_SendEntryMsg(SchedContext *sched) {
    osSendMesg((OSMesgQueue *) sched, (void *)0x29E, 1);
}

void Sched_SendAudioCancelMsg(SchedContext *sched) {
    osSendMesg((OSMesgQueue *) sched, (void *)0x29F, 1);
}

void Sched_SendGfxCancelMsg(SchedContext *sched) {
    osSendMesg((OSMesgQueue *) sched, (void *)0x2A0, 1);
}

void Sched_FaultClient(void *param1, void *param2) {
    void *temp_a1;
    void *temp_a1_2;

    FaultDrawer_Printf("sched info\n", param1->unk_304, param1->unk_30C, param1->unk_300, param1->unk_308);
    FaultDrawer_Printf("GRAPH %08x %08x\n", param1->unk_304, param1->unk_30C);
    FaultDrawer_Printf("AUDIO %08x %08x\n\n", param1->unk_300, param1->unk_308);
    temp_a1 = param1->unk_310;
    if (temp_a1 != 0) {
        FaultDrawer_Printf("RSPTask %08x %08x %02x %02x\n%01x %08x %08x\n", temp_a1, temp_a1->unk_0, temp_a1->unk_4, temp_a1->unk_8, temp_a1->unk_10, temp_a1->unk_40, temp_a1->unk_44);
    }
    temp_a1_2 = param1->unk_314;
    if (temp_a1_2 != 0) {
        FaultDrawer_Printf("RDPTask %08x %08x %02x %02x\n", temp_a1_2, temp_a1_2->unk_0, temp_a1_2->unk_4, temp_a1_2->unk_8);
    }
}

void Sched_ThreadEntry(void *arg) {
    void *sp3C;
    s16 temp_v0;
    void *temp_t7;

    sp3C = NULL;
loop_1:
    osRecvMesg((OSMesgQueue *) arg, &sp3C, 1);
    temp_t7 = sp3C - 0x29B;
    if ((u32) temp_t7 < 6U) {
        switch ((s32) temp_t7) {
        case 4:
            Sched_HandleAudioCancel((SchedContext *) arg);
            goto loop_1;
        case 5:
            Sched_HandleGfxCancel((SchedContext *) arg);
            goto loop_1;
        case 3:
            Sched_HandleEntry((SchedContext *) arg);
            goto loop_1;
        case 0:
            Sched_HandleRSPDone((SchedContext *) arg);
            goto loop_1;
        case 1:
            Sched_HandleRDPDone((SchedContext *) arg);
            goto loop_1;
        }
    }
    temp_v0 = *sp3C;
    if (temp_v0 == 1) {
        Sched_HandleRetrace((SchedContext *) arg);
        goto loop_1;
    }
    if (temp_v0 != 3) {
        if (temp_v0 != 4) {

        } else {
            Sched_HandleReset((SchedContext *) arg);
        }
        goto loop_1;
    }
    Sched_HandleStop((SchedContext *) arg);
    goto loop_1;
}

void Sched_Init(SchedContext *sched, void *stack, s32 pri, s32 arg3, s32 arg4, IrqMgr *irqMgr) {
    OSThread *sp2C;
    OSThread *temp_a0;

    bzero((void *) sched, 0x338);
    sched->shouldUpdateVi = 1;
    osCreateMesgQueue((OSMesgQueue *) sched, sched->intBuf, 0x40);
    osCreateMesgQueue(&sched->cmdQ, sched->cmdMsgBuf, 8);
    osSetEventMesg(4U, (OSMesgQueue *) sched, (void *)0x29B);
    osSetEventMesg(9U, (OSMesgQueue *) sched, (void *)0x29C);
    IrqMgr_AddClient(irqMgr, &sched->irqClient, (OSMesgQueue *) sched);
    Fault_AddClient(&sSchedFaultClient, Sched_FaultClient, (void *) sched, NULL);
    temp_a0 = &sched->thread;
    sp2C = temp_a0;
    osCreateThread(temp_a0, 5, (void *) Sched_ThreadEntry, (void *) sched, stack, pri);
    osStartThread(temp_a0);
}
