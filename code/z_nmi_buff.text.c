struct _mips2c_stack_Nmi_GetPrenmiHasStarted {};    /* size 0x0 */

struct _mips2c_stack_Nmi_Init {};                   /* size 0x0 */

struct _mips2c_stack_Nmi_SetPrenmiStart {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8010C1B0 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad20[0x18];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad3C[0x4];
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ char pad4C[0x3C];                    /* maybe part of sp48[16]? */
    /* 0x88 */ ? *sp88;                             /* inferred */
    /* 0x8C */ s32 sp8C;                            /* inferred */
};                                                  /* size = 0x90 */

s32 Nmi_GetPrenmiHasStarted();                      /* static */
void Nmi_Init();                                    /* static */
void Nmi_SetPrenmiStart();                          /* static */
void func_8010C1B0();                               /* static */
s32 *gNMIBuffer;
SchedContext schedContext;

void Nmi_Init(void) {
    s32 *temp_t2;
    s32 *temp_t5;
    s32 *temp_v0;
    s32 *temp_v0_2;
    s32 *temp_v1;
    u32 temp_t1;
    u32 temp_t9;

    gNMIBuffer = osAppNmiBuffer;
    *osAppNmiBuffer = 0;
    if (osResetType == 0) {
        gNMIBuffer->unk4 = 0;
        temp_t2 = gNMIBuffer;
        temp_t2->unk8 = 0;
        temp_t2->unkC = 0;
    } else {
        temp_v0 = gNMIBuffer;
        temp_v0->unk4 = (s32) (temp_v0->unk4 + 1);
        temp_v0_2 = gNMIBuffer;
        temp_v1 = temp_v0_2 + 8;
        temp_t9 = temp_v0_2->unk14;
        temp_t1 = temp_v1->unk4 + temp_t9;
        temp_v1->unk0 = (temp_t1 < temp_t9) + temp_v1->unk0 + temp_v0_2->unk10;
        temp_v1->unk4 = temp_t1;
    }
    temp_t5 = gNMIBuffer;
    temp_t5->unk14 = 0U;
    temp_t5->unk10 = 0;
}

void Nmi_SetPrenmiStart(void) {
    s32 *temp_t8;
    u32 temp_v1;
    u64 temp_ret;

    *gNMIBuffer = 1;
    temp_ret = osGetTime();
    temp_v1 = (u32) temp_ret;
    temp_t8 = gNMIBuffer;
    temp_t8->unk10 = temp_ret;
    temp_t8->unk14 = temp_v1;
}

s32 Nmi_GetPrenmiHasStarted(void) {
    return *gNMIBuffer;
}

void func_8010C1B0(void) {
    s32 sp8C;
    ? *sp88;
    s32 sp48;
    s32 sp44;
    s32 sp40;
    s32 sp38;
    ? sp20;
    void *sp1C;

    sp38 = 0;
    sp40 = 3;
    sp88 = &sp20;
    sp8C = 0;
    sp44 = 0;
    sp48 = 0;
    osCreateMesgQueue((OSMesgQueue *) &sp20, &sp1C, 1);
    osSendMesg(&schedContext.cmdQ, (void *) &sp38, 1);
    Sched_SendEntryMsg(&schedContext);
    osRecvMesg((OSMesgQueue *) &sp20, NULL, 1);
}
