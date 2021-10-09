? func_801A4EB0();                                  /* extern */
s32 osProbeRumblePak(void *, void *, s32);          /* extern */
s32 osSetRumble(void *, s32);                       /* extern */
s32 osVoiceInit(void *, ? *, s32);                  /* extern */
u8 Padmgr_GetControllerBitmask();                   /* static */
void *Padmgr_GetEventCallback();                    /* static */
void Padmgr_Lock();                                 /* static */
void Padmgr_ParseState();                           /* static */
void Padmgr_Stop();                                 /* static */
void Padmgr_Unlock();                               /* static */
void Padmgr_Update();                               /* static */
void func_80174F24(? (*arg0)(s32, ?), s32 arg1);    /* static */
void func_80174F44(s32 arg0, s32 arg1);             /* static */
void func_80174F7C(? (*arg0)(s32), s32 arg1);       /* static */
void func_80174F9C(s32 arg0, s32 arg1);             /* static */
void *func_80175008();                              /* static */
void func_8017506C(void *arg0);                     /* static */
void func_801750FC();                               /* static */
void func_80175364();                               /* static */
void func_80175434();                               /* static */
void func_8017544C(s32 arg0, s8 arg1);              /* static */
void func_80175474(void *arg0);                     /* static */
s32 func_801754C0(s32 arg0);                        /* static */
void func_801759BC();                               /* static */
void func_80175AE0();                               /* static */
static s32 D_801D1538 = 1;
static ? D_801FD5B8;
static s32 controllerInputsCaptured = 0;
PadMgr D_801FB620;
PadMgr *padmgrContext = &D_801FB620;

typedef struct {
    /* 0x0000 */ u8 controllers;
    /* 0x0001 */ char pad1[0x3];                    /* maybe part of controllers[4]? */
    /* 0x0004 */ ? (*unk4)(s32, ?);                 /* inferred */
    /* 0x0008 */ s32 unk8;                          /* inferred */
    /* 0x000C */ ? (*unkC)(s32);                    /* inferred */
    /* 0x0010 */ s32 unk10;                         /* inferred */
    /* 0x0014 */ OSContStatus statuses[4];
    /* 0x0024 */ void *unk24;                       /* inferred */
    /* 0x0028 */ void *lockMesg[1];
    /* 0x002C */ void *interrupts[8];
    /* 0x004C */ OSMesgQueue siEventCallbackQueue;
    /* 0x0064 */ OSMesgQueue lock;
    /* 0x007C */ OSMesgQueue irqmgrCallbackQueue;
    /* 0x0094 */ IrqMgrClient irqmgrCallbackQueueNode;
    /* 0x009C */ IrqMgr *irqmgr;
    /* 0x00A0 */ OSThread thread;
    /* 0x0250 */ Input input[4];
    /* 0x02B0 */ OSContPad controllerState1[4];
    /* 0x02C8 */ u8 maxNumControllers;
    /* 0x02C9 */ char pad2C9[0x8];                  /* maybe part of maxNumControllers[9]? */
    /* 0x02D1 */ u8 unk2D1;                         /* inferred */
    /* 0x02D2 */ u8 unk2D2;                         /* inferred */
    /* 0x02D3 */ u8 unk2D3;                         /* inferred */
    /* 0x02D4 */ u8 unk2D4;                         /* inferred */
    /* 0x02D5 */ char pad2D5[0x1A7];                /* maybe part of unk2D4[424]? */
    /* 0x047C */ u8 unk47C;
    /* 0x047D */ u8 unk47D;
    /* 0x047E */ u8 hasStopped;
    /* 0x047F */ char pad47F[0x1];                  /* maybe part of hasStopped[2]? */
} PadMgr;                                           /* size 0x480 */

u8 Padmgr_GetControllerBitmask(void) {
    return padmgrContext->controllers;
}

void func_80174F24(? (*arg0)(s32, ?), s32 arg1) {
    padmgrContext->unk4 = arg0;
    padmgrContext->unk8 = arg1;
}

void func_80174F44(s32 arg0, s32 arg1) {
    PadMgr *temp_v0;

    temp_v0 = padmgrContext;
    if ((arg0 == temp_v0->unk4) && (arg1 == temp_v0->unk8)) {
        temp_v0->unk4 = NULL;
        padmgrContext->unk8 = 0;
    }
}

void func_80174F7C(? (*arg0)(s32), s32 arg1) {
    padmgrContext->unkC = arg0;
    padmgrContext->unk10 = arg1;
}

void func_80174F9C(s32 arg0, s32 arg1) {
    PadMgr *temp_v0;

    temp_v0 = padmgrContext;
    if ((arg0 == temp_v0->unkC) && (arg1 == temp_v0->unk10)) {
        temp_v0->unkC = NULL;
        padmgrContext->unk10 = 0;
    }
}

void *Padmgr_GetEventCallback(void) {
    void *sp1C;

    osRecvMesg(&padmgrContext->siEventCallbackQueue, &sp1C, 1);
    return sp1C;
}

void *func_80175008(void) {
    void *sp1C;

    osRecvMesg(&padmgrContext->siEventCallbackQueue, &sp1C, 1);
    return sp1C;
}

void Padmgr_SetEventCallback(void *pvParm1) {
    osSendMesg(&padmgrContext->siEventCallbackQueue, pvParm1, 1);
}

void func_8017506C(void *arg0) {
    osSendMesg(&padmgrContext->siEventCallbackQueue, arg0, 1);
}

void Padmgr_Lock(void) {
    osRecvMesg(&padmgrContext->lock, NULL, 1);
}

void Padmgr_Unlock(void) {
    osSendMesg(&padmgrContext->lock, NULL, 1);
}

void func_801750FC(void) {
    void *sp34;
    PadMgr *temp_v1;
    PadMgr *temp_v1_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0_4;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_5;
    s32 phi_s0;
    s32 phi_s2;

    sp34 = Padmgr_GetEventCallback();
    phi_s0 = 0;
    phi_s2 = 0;
    do {
        temp_v1 = padmgrContext;
        temp_v0 = temp_v1 + phi_s0;
        if (temp_v0->unk2C9 == 1) {
            if ((temp_v1->statuses[phi_s0].status & 1) != 0) {
                if (temp_v0->unk2CD == 1) {
                    if (temp_v0->unk2D1 != 0) {
                        if ((s32) temp_v0->unk2D5 < 3) {
                            if (osSetRumble(temp_v1 + (phi_s0 * 0x68) + 0x2DC, 1) != 0) {
                                (padmgrContext + phi_s0)->unk2CD = 0;
                                phi_s2 = 1;
                            } else {
                                (padmgrContext + phi_s0)->unk2D5 = 3;
                                phi_s2 = 1;
                            }
                        }
                    } else if (temp_v0->unk2D5 != 0) {
                        if (osSetRumble(temp_v1 + (phi_s0 * 0x68) + 0x2DC, 0) != 0) {
                            (padmgrContext + phi_s0)->unk2CD = 0;
                            phi_s2 = 1;
                        } else {
                            temp_v0_2 = padmgrContext + phi_s0;
                            temp_v0_2->unk2D5 = (u8) (temp_v0_2->unk2D5 - 1);
                            phi_s2 = 1;
                        }
                    }
                }
            } else if (temp_v0->unk2CD != 0) {
                temp_v0->unk2CD = 0U;
            }
        }
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 < 4);
    if (phi_s2 == 0) {
        temp_v1_2 = padmgrContext;
        temp_s0_2 = (s32) controllerInputsCaptured % 4;
        temp_v0_3 = temp_v1_2 + temp_s0_2;
        if ((temp_v0_3->unk2C9 == 1) && ((temp_v1_2->statuses[temp_s0_2].status & 1) != 0) && (temp_v0_3->unk2CD != 1)) {
            temp_v0_4 = osProbeRumblePak(sp34, temp_v1_2 + (temp_s0_2 * 0x68) + 0x2DC, temp_s0_2);
            if (temp_v0_4 == 0) {
                (padmgrContext + temp_s0_2)->unk2CD = 1;
                (padmgrContext + temp_s0_2)->unk2D5 = 2;
            } else if (temp_v0_4 == 0xB) {
                temp_v0_5 = padmgrContext + temp_s0_2;
                if (temp_v0_5->unk2CD != 2) {
                    temp_v0_5->unk2CD = 2U;
                }
            } else if ((temp_v0_4 != 4) && (temp_v0_4 != 1)) {
                Fault_AddHungupAndCrash("../padmgr.c", 0x252U);
            }
        }
    }
    Padmgr_SetEventCallback(sp34);
}

void func_80175364(void) {
    PadMgr *temp_v0_2;
    s32 temp_lo;
    s32 temp_s0;
    void *temp_v0;
    s32 phi_s0;

    temp_v0 = Padmgr_GetEventCallback();
    phi_s0 = 0;
    do {
        temp_v0_2 = padmgrContext;
        if ((temp_v0_2 + phi_s0)->unk2C9 == 1) {
            temp_lo = phi_s0 * 0x68;
            if (osProbeRumblePak(temp_v0, temp_v0_2 + temp_lo + 0x2DC, phi_s0) == 0) {
                osSetRumble(padmgrContext + temp_lo + 0x2DC, 0);
            }
        }
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 4);
    Padmgr_SetEventCallback(temp_v0);
}

void func_80175434(void) {
    padmgrContext->unk47C = 0xC;
}

void func_8017544C(s32 arg0, s8 arg1) {
    (padmgrContext + arg0)->unk2D1 = arg1;
    padmgrContext->unk47D = 0x18;
}

void func_80175474(void *arg0) {
    padmgrContext->unk2D1 = arg0->unk0;
    padmgrContext->unk2D2 = arg0->unk1;
    padmgrContext->unk2D3 = arg0->unk2;
    padmgrContext->unk2D4 = arg0->unk3;
    padmgrContext->unk47D = 0x18;
}

s32 func_801754C0(s32 arg0) {
    return (padmgrContext + arg0)->unk2CD == 1;
}

void Padmgr_CalcStickEdges(Input *input) {
    f32 sp24;
    f32 sp1C;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f14;
    f32 temp_f16;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s8 temp_a2;
    s8 temp_a3;
    s8 temp_t0;
    s8 temp_t1;
    s8 temp_t2;
    s32 phi_a1;
    s32 phi_a2;
    s32 phi_a3;
    s32 phi_t0;
    f32 phi_f14;
    f32 phi_f2;
    f32 phi_f16;

    temp_t1 = input->cur.stick_x;
    temp_t2 = input->cur.stick_y;
    if (((input->press.button & 0x80) != 0) || (input->press.stick_x == 0)) {
        input->press.stick_x = 0x3D;
        input->press.errno = 0xC3;
        input->press.stick_y = 0x3F;
        input->rel.errno = 0xC1;
    }
    temp_a2 = (s8) input->press.errno;
    temp_a3 = input->press.stick_y;
    temp_t0 = (s8) input->rel.errno;
    phi_a1 = (s32) input->press.stick_x;
    phi_a2 = (s32) temp_a2;
    phi_a3 = (s32) temp_a3;
    phi_t0 = (s32) temp_t0;
    phi_a1 = (s32) input->press.stick_x;
    phi_a2 = (s32) temp_a2;
    if ((input->cur.button & 0x80) != 0) {
        temp_v0 = temp_t1 - 7;
        temp_v1 = temp_v0 - 3;
        if (temp_v0 > 0) {
            if ((s32) input->press.stick_x < temp_v1) {
                input->press.stick_x = (s8) temp_v1;
                phi_a1 = temp_v1;
            }
        } else {
            temp_v0_2 = temp_t1 + 7;
            temp_v1_2 = temp_v0_2 + 3;
            if ((temp_v0_2 < 0) && (temp_v1_2 < (s32) temp_a2)) {
                input->press.errno = (u8) temp_v1_2;
                phi_a2 = temp_v1_2;
            }
        }
        temp_v1_3 = temp_t2 - 7;
        temp_v0_3 = temp_t2 + 7;
        if (temp_v1_3 > 0) {
            temp_v0_4 = temp_v1_3 - 3;
            if ((s32) temp_a3 < temp_v0_4) {
                input->press.stick_y = (s8) temp_v0_4;
                phi_a3 = temp_v0_4;
            }
        } else {
            temp_v1_4 = temp_v0_3 + 3;
            if ((temp_v0_3 < 0) && (temp_v1_4 < (s32) temp_t0)) {
                input->rel.errno = (u8) temp_v1_4;
                phi_t0 = temp_v1_4;
            }
        }
    }
    temp_v0_5 = temp_t1 - 7;
    temp_v1_5 = temp_t2 - 7;
    if (temp_v0_5 > 0) {
        if (phi_a1 < temp_v0_5) {
            phi_f14 = 1.0f;
        } else {
            phi_f14 = (f32) temp_v0_5 / (f32) phi_a1;
        }
    } else {
        temp_v0_6 = temp_t1 + 7;
        if (temp_v0_6 < 0) {
            if (temp_v0_6 < phi_a2) {
                phi_f14 = -1.0f;
            } else {
                phi_f14 = -(f32) temp_v0_6 / (f32) phi_a2;
            }
        } else {
            phi_f14 = 0.0f;
        }
    }
    if (temp_v1_5 > 0) {
        if (phi_a3 < temp_v1_5) {
            phi_f2 = 1.0f;
        } else {
            phi_f2 = (f32) temp_v1_5 / (f32) phi_a3;
        }
    } else {
        temp_v0_7 = temp_t2 + 7;
        if (temp_v0_7 < 0) {
            if (temp_v0_7 < phi_t0) {
                phi_f2 = -1.0f;
            } else {
                phi_f2 = -(f32) temp_v0_7 / (f32) phi_t0;
            }
        } else {
            phi_f2 = 0.0f;
        }
    }
    temp_f16 = sqrtf((phi_f14 * phi_f14) + (phi_f2 * phi_f2));
    phi_f16 = temp_f16;
    if (temp_f16 > 1.0f) {
        phi_f16 = 1.0f;
    }
    sp1C = phi_f16;
    temp_f0 = Math_Acot2F((f32) temp_t2, (f32) -(s32) temp_t1);
    sp18 = temp_f0;
    temp_f14 = -__sinf(temp_f0) * sp1C;
    sp24 = temp_f14;
    temp_f0_2 = __cosf(sp18);
    input->rel.stick_x = (s8) (s32) (temp_f14 * 60.5f);
    input->rel.stick_y = (s8) (s32) (temp_f0_2 * sp1C * 60.5f);
}

void Padmgr_ParseState(void) {
    PadMgr *temp_v0;
    s32 temp_s1;
    s32 temp_v1_2;
    u16 temp_a0;
    u16 temp_t6;
    u16 temp_t8;
    u16 temp_v0_4;
    u8 temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    Input *phi_s0;
    s32 phi_s1;
    OSContPad *phi_s2;
    u16 phi_v0;
    u16 phi_v0_2;

    temp_v0 = padmgrContext;
    phi_s0 = temp_v0->input;
    phi_s1 = 0;
    phi_s2 = temp_v0->controllerState1;
    if ((s32) temp_v0->maxNumControllers > 0) {
        do {
            temp_v1 = phi_s0 + 6;
            temp_v1->unk0 = (unaligned s32) phi_s0->unk0;
            temp_v1->unk4 = (u16) phi_s0->unk4;
            if ((padmgrContext + phi_s1)->unk2C9 == 1) {
                temp_v0_2 = phi_s2->errno;
                if (temp_v0_2 != 0) {
                    if (temp_v0_2 != 4) {
                        if (temp_v0_2 != 8) {
                            Fault_AddHungupAndCrash("../padmgr.c", 0x44AU);
                        } else {
                            phi_s0->cur.button = 0;
                            phi_s0->cur.stick_x = 0;
                            phi_s0->cur.stick_y = 0;
                            phi_s0->cur.errno = phi_s2->errno;
                            temp_v0_3 = padmgrContext + phi_s1;
                            if (temp_v0_3->unk2C9 != 0) {
                                temp_v0_3->unk2C9 = 0U;
                                (padmgrContext + phi_s1)->unk2CD = 0;
                                (padmgrContext + phi_s1)->unk2D5 = 0xFF;
                            }
                        }
                    } else {
                        phi_s0->unk0 = (unaligned s32) temp_v1->unk0;
                        phi_s0->unk4 = (u16) temp_v1->unk4;
                    }
                } else {
                    phi_s0->unk0 = (unaligned s32) phi_s2->unk0;
                    phi_s0->unk4 = (u16) phi_s2->unk4;
                }
            } else {
                phi_s0->cur.button = 0;
                phi_s0->cur.stick_x = 0;
                phi_s0->cur.stick_y = 0;
                phi_s0->cur.errno = phi_s2->errno;
            }
            temp_v0_4 = phi_s0->cur.button;
            temp_t6 = temp_v0_4 & 0xF3FF;
            phi_v0 = temp_v0_4;
            if ((temp_v0_4 & 0xC00) == 0xC00) {
                phi_s0->cur.button = temp_t6;
                phi_v0 = temp_t6 & 0xFFFF;
            }
            temp_t8 = phi_v0 & 0xFCFF;
            phi_v0_2 = phi_v0;
            if ((phi_v0 & 0x300) == 0x300) {
                phi_s0->cur.button = temp_t8;
                phi_v0_2 = temp_t8 & 0xFFFF;
            }
            temp_a0 = phi_s0->prev.button;
            temp_v1_2 = temp_a0 ^ phi_v0_2;
            phi_s0->press.button |= temp_v1_2 & phi_v0_2;
            phi_s0->rel.button |= temp_v1_2 & temp_a0;
            Padmgr_CalcStickEdges(phi_s0);
            temp_s1 = phi_s1 + 1;
            phi_s0 += 0x18;
            phi_s1 = temp_s1;
            phi_s2 += 6;
        } while (temp_s1 < (s32) padmgrContext->maxNumControllers);
    }
}

void func_801759BC(void) {
    PadMgr *temp_v0;
    s32 temp_s0;
    s32 temp_s2;
    u8 temp_v1;
    void *temp_s1;
    void *temp_v0_2;
    PadMgr *phi_v0;
    s32 phi_s0;
    s32 phi_v1;

    temp_v0 = padmgrContext;
    temp_v1 = temp_v0->maxNumControllers;
    phi_v0 = temp_v0;
    phi_s0 = 0;
    phi_v1 = (s32) temp_v1;
    if ((s32) temp_v1 > 0) {
        do {
            if ((phi_v0 + phi_s0)->unk2C9 == 4) {
                temp_v0_2 = Padmgr_GetEventCallback();
                temp_s1 = temp_v0_2;
                temp_s2 = osVoiceInit(temp_v0_2, &D_801FD5B8, phi_s0);
                Padmgr_SetEventCallback(temp_s1);
                if (temp_s2 != 0) {

                } else {
                    (padmgrContext + phi_s0)->unk2C9 = 5;
                    D_801D1538 = 2;
                    func_801A4EB0();
                }
                phi_v1 = (s32) padmgrContext->maxNumControllers;
                phi_v0 = padmgrContext;
            }
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 < phi_v1);
    }
    if (D_801D1538 == 1) {
        D_801D1538 = 0;
    }
}

void func_80175AE0(void) {
    s8 sp54;
    s32 temp_s0;
    s32 temp_v1;
    s8 temp_s4;
    void *temp_a0;
    void *temp_v0;
    PadMgr *phi_a1;
    s32 phi_s2;
    s32 phi_s0;
    s8 phi_s4;
    PadMgr *phi_a1_2;
    s8 phi_s4_2;

    phi_a1 = padmgrContext;
    phi_s2 = 0;
    phi_s0 = 0;
    phi_s4_2 = 0;
    do {
        temp_a0 = phi_a1 + phi_s2;
        temp_v0 = phi_a1 + phi_s0;
        phi_s4 = phi_s4_2;
        phi_a1_2 = phi_a1;
        phi_s4 = phi_s4_2;
        if (temp_a0->unk17 == 0) {
            temp_v1 = temp_a0->unk14 & 0x1F07;
            if (temp_v1 != 2) {
                if (temp_v1 != 5) {
                    if (temp_v1 != 0x100) {
                        if (temp_v0->unk2C9 == 0) {
                            temp_v0->unk2C9 = 0xFFU;
                            sprintf(&sp54, "知らない種類のコントローラ(%04x)を認識しました", (padmgrContext + phi_s2)->unk14);
                            goto block_16;
                        }
                    } else if (temp_v0->unk2C9 == 0) {
                        temp_v0->unk2C9 = 4U;
                        (padmgrContext + phi_s0)->unk2CD = 0;
                        goto block_16;
                    }
                } else {
                    temp_s4 = phi_s4_2 | (1 << phi_s0);
                    phi_s4 = temp_s4;
                    phi_s4 = temp_s4;
                    if (temp_v0->unk2C9 == 0) {
                        temp_v0->unk2C9 = 1U;
                        goto block_16;
                    }
                }
            } else if (temp_v0->unk2C9 == 0) {
                temp_v0->unk2C9 = 3U;
                goto block_16;
            }
        } else if (temp_v0->unk2C9 != 0) {
            temp_v0->unk2C9 = 0U;
            (padmgrContext + phi_s0)->unk2CD = 0;
            (padmgrContext + phi_s0)->unk2D5 = 0xFFU;
block_16:
            phi_a1_2 = padmgrContext;
        }
        temp_s0 = phi_s0 + 1;
        phi_a1 = phi_a1_2;
        phi_s2 += 4;
        phi_s0 = temp_s0;
        phi_s4_2 = phi_s4;
    } while (temp_s0 != 4);
    phi_a1_2->controllers = phi_s4;
}

void Padmgr_Update(void) {
    void *sp1C;
    ? (*temp_a1)(s32, ?);
    ? (*temp_v0_2)(s32);
    PadMgr *temp_v1;
    PadMgr *temp_v1_2;
    PadMgr *temp_v1_3;
    PadMgr *temp_v1_4;
    PadMgr *temp_v1_5;
    void *temp_v0;

    temp_v0 = Padmgr_GetEventCallback();
    sp1C = temp_v0;
    osContStartReadData((OSMesgQueue *) temp_v0);
    temp_v1 = padmgrContext;
    temp_a1 = temp_v1->unk4;
    if (temp_a1 != 0) {
        temp_a1(temp_v1->unk8, temp_a1);
    }
    osRecvMesg((OSMesgQueue *) sp1C, NULL, 1);
    osContGetReadData(padmgrContext->controllerState1);
    bzero((void *) &padmgrContext->controllerState1[1], 0x12);
    temp_v1_2 = padmgrContext;
    if (temp_v1_2->hasStopped != 0) {
        bzero((void *) temp_v1_2->controllerState1, 0x18);
    }
    osContStartQuery((OSMesgQueue *) sp1C);
    osRecvMesg((OSMesgQueue *) sp1C, NULL, 1);
    osContGetQuery(padmgrContext->statuses);
    Padmgr_SetEventCallback(sp1C);
    func_80175AE0();
    Padmgr_Lock();
    Padmgr_ParseState();
    temp_v1_3 = padmgrContext;
    temp_v0_2 = temp_v1_3->unkC;
    if (temp_v0_2 != 0) {
        temp_v0_2(temp_v1_3->unk10);
    }
    Padmgr_Unlock();
    if (D_801D1538 != 0) {
        func_801759BC();
    }
    if (gFaultStruct.msgId != 0) {
        func_80175364();
    } else {
        temp_v1_4 = padmgrContext;
        if ((s32) temp_v1_4->unk47C > 0) {
            temp_v1_4->unk47C += -1;
            func_80175364();
        } else if (temp_v1_4->unk47D == 0) {
            func_80175364();
        } else if (temp_v1_4->hasStopped == 0) {
            func_801750FC();
            temp_v1_5 = padmgrContext;
            temp_v1_5->unk47D += -1;
        }
    }
    controllerInputsCaptured += 1;
}

void Padmgr_Stop(void) {
    padmgrContext->hasStopped = 1;
    func_80175434();
}

void func_80175E68(Input *input, s32 param_2) {
    s32 temp_s2;
    s32 temp_v0;
    u16 temp_a1;
    u16 temp_v1;
    Input *phi_s1;
    Input *phi_s0;
    s32 phi_s2;

    phi_s1 = padmgrContext->input;
    phi_s0 = input;
    phi_s2 = 0;
    do {
        if (param_2 != 0) {
            phi_s0->unk0 = (unaligned s32) phi_s1->unk0;
            phi_s0->cur.errno = (unaligned s32) phi_s1->cur.errno;
            phi_s0->prev.stick_x = (unaligned s32) phi_s1->prev.stick_x;
            phi_s0->unkC = (unaligned s32) phi_s1->unkC;
            phi_s0->press.errno = (unaligned s32) phi_s1->press.errno;
            phi_s0->rel.stick_x = (unaligned s32) phi_s1->rel.stick_x;
            phi_s1->press.button = 0;
            phi_s1->rel.button = 0;
        } else {
            phi_s0->unk6 = (unaligned s32) phi_s0->unk0;
            temp_v1 = phi_s0->prev.button;
            phi_s0->unkA = (u16) phi_s0->unk4;
            phi_s0->unk0 = (unaligned s32) phi_s1->unk0;
            temp_a1 = phi_s0->cur.button;
            temp_v0 = temp_v1 ^ temp_a1;
            phi_s0->press.button = temp_a1 & temp_v0;
            phi_s0->rel.button = temp_v1 & temp_v0;
            phi_s0->unk4 = (u16) phi_s1->unk4;
            PadUtils_UpdateRelXY(phi_s0);
        }
        temp_s2 = phi_s2 + 1;
        phi_s1 += 0x18;
        phi_s0 += 0x18;
        phi_s2 = temp_s2;
    } while (temp_s2 != 4);
}

void Padmgr_GetInput(Input *input, s32 param_2) {
    Padmgr_Lock();
    func_80175E68(input, param_2);
    Padmgr_Unlock();
}

void Padmgr_GetInput2(Input *input, s32 param_2) {
    Padmgr_Lock();
    func_80175E68(input, param_2);
    Padmgr_Unlock();
}

void Padmgr_ThreadEntry(PadMgr *padmgr) {
    void *sp54;
    PadMgr *temp_v0;
    PadMgr *temp_v0_2;
    PadMgr *temp_v0_4;
    s16 temp_v0_3;
    PadMgr *phi_v0;
    s32 phi_s0;
    s32 phi_s0_2;
    s32 phi_s0_3;
    s32 phi_s1;
    PadMgr *phi_v0_2;
    s32 phi_s0_4;
    s32 phi_s1_2;
    s32 phi_s1_3;

    temp_v0 = padmgrContext;
    sp54 = NULL;
    osCreateMesgQueue(&temp_v0->irqmgrCallbackQueue, temp_v0->interrupts, 8);
    temp_v0_2 = padmgrContext;
    IrqMgr_AddClient(temp_v0_2->irqmgr, &temp_v0_2->irqmgrCallbackQueueNode, &temp_v0_2->irqmgrCallbackQueue);
    phi_v0 = padmgrContext;
    phi_s0_4 = 0;
    phi_s1_2 = 0;
    do {
loop_1:
        osRecvMesg(phi_v0 + 0x7C, &sp54, 1);
        temp_v0_3 = *sp54;
        phi_s0 = phi_s0_4;
        phi_s1 = phi_s1_2;
        phi_s1_3 = phi_s1_2;
        if (temp_v0_3 != 1) {
            if (temp_v0_3 != 3) {
                if (temp_v0_3 != 4) {

                } else {
                    phi_s0 = phi_s0_4 | 2;
                }
            } else {
                phi_s0 = phi_s0_4 | 4;
            }
        } else {
            phi_s0 = phi_s0_4 | 1;
        }
        temp_v0_4 = padmgrContext;
        phi_v0 = temp_v0_4;
        phi_s0_2 = phi_s0;
        phi_v0_2 = temp_v0_4;
        phi_s0_4 = phi_s0;
        phi_s0_4 = phi_s0;
        if (temp_v0_4->irqmgrCallbackQueue.validCount != 0) {
            goto loop_1;
        }
        if (phi_s0 != 0) {
            do {
                phi_s0_3 = phi_s0_2;
                if ((phi_s0_2 & 4) != 0) {
                    phi_s0_3 = phi_s0_2 & ~4;
                    phi_s1_3 = 1;
                } else if ((phi_s0_2 & 2) != 0) {
                    Padmgr_Stop();
                    phi_s0_3 = phi_s0_2 & ~2;
                } else if ((phi_s0_2 & 1) != 0) {
                    Padmgr_Update();
                    phi_s0_3 = phi_s0_2 & ~1;
                }
                phi_s0_2 = phi_s0_3;
                phi_s1 = phi_s1_3;
                phi_s0_4 = phi_s0_3;
            } while (phi_s0_3 != 0);
            phi_v0_2 = padmgrContext;
        }
        phi_v0 = phi_v0_2;
        phi_s1_2 = phi_s1;
    } while (phi_s1 == 0);
    IrqMgr_RemoveClient(phi_v0_2->irqmgr, phi_v0_2 + 0x94);
}

void Padmgr_Start(OSMesgQueue *siEventCallbackQueue, IrqMgr *irqmgr, s32 threadId, s32 threadPri, void *stack) {
    PadMgr *temp_a3;
    PadMgr *temp_a3_2;
    PadMgr *temp_a3_3;
    PadMgr *temp_a3_4;

    bzero((void *) padmgrContext, 0x480);
    padmgrContext->irqmgr = irqmgr;
    temp_a3 = padmgrContext;
    osCreateMesgQueue(&temp_a3->siEventCallbackQueue, &temp_a3->unk24, 1);
    temp_a3_2 = padmgrContext;
    osCreateMesgQueue(&temp_a3_2->lock, temp_a3_2->lockMesg, 1);
    Padmgr_Unlock();
    temp_a3_3 = padmgrContext;
    func_80086620(siEventCallbackQueue, temp_a3_3, temp_a3_3->statuses);
    padmgrContext->maxNumControllers = 4;
    osContSetCh(padmgrContext->maxNumControllers);
    Padmgr_SetEventCallback((void *) siEventCallbackQueue);
    temp_a3_4 = padmgrContext;
    osCreateThread(&temp_a3_4->thread, threadId, (void *) Padmgr_ThreadEntry, (void *) temp_a3_4, stack, threadPri);
    osStartThread(&padmgrContext->thread);
}

