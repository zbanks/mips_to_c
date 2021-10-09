struct _mips2c_stack_osSetTimer {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ u64 *sp1C;                           /* inferred */
    /* 0x20 */ u32 sp20;                            /* inferred */
    /* 0x24 */ u32 sp24;                            /* inferred */
    /* 0x28 */ u32 sp28;                            /* inferred */
    /* 0x2C */ OSTimer *sp2C;                       /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ u32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

OSTimer D_8009E590;
u32 __osTimerCounter;
OSTimer *__osTimerList = &D_8009E590;

s32 osSetTimer(OSTimer *t, u64 value, u64 value_unk4, u64 interval, u64 interval_unk4, OSMesgQueue *mq, void *msg) {
    u32 sp34;
    s32 sp30;
    OSTimer *sp2C;
    u32 sp28;
    u32 sp24;
    u32 sp20;
    u64 *sp1C;
    OSTimer *temp_t2;
    OSTimer *temp_t5_2;
    u32 temp_t2_2;
    u32 temp_t5;
    u32 temp_t6;
    u32 temp_t7;
    u32 temp_v1;
    u64 temp_ret;

    t->next = NULL;
    t->prev = NULL;
    t->unk_C = (s32) interval_unk4;
    t->unk_8 = (s32) interval;
    if (((s32) value != 0) || ((s32) value_unk4 != 0)) {
        t->unk_10 = (s32) value;
        t->unk_14 = (s32) value_unk4;
    } else {
        t->unk_10 = (s32) interval;
        t->unk_14 = (s32) interval_unk4;
    }
    t->mq = mq;
    t->msg = msg;
    temp_t2 = __osTimerList;
    sp20 = __osDisableInt();
    if (temp_t2->next != temp_t2) {
        sp2C = __osTimerList->next;
        sp28 = osGetCount();
        temp_t7 = sp28 - __osTimerCounter;
        sp24 = temp_t7;
        temp_t2_2 = sp2C->unk_10;
        if ((temp_t2_2 >= 0U) && ((temp_t2_2 > 0U) || (temp_t7 < (u32) sp2C->unk_14))) {
            sp1C = &sp2C->value;
            temp_t5 = sp2C->unk_14;
            temp_t6 = (sp2C->unk_10 - 0U) - (temp_t5 < temp_t7);
            sp2C->unk_14 = (u32) (temp_t5 - temp_t7);
            sp2C->unk_10 = temp_t6;
        } else {
            sp2C->unk_14 = 1U;
            sp2C->unk_10 = 0U;
        }
    }
    temp_ret = __osInsertTimer(t);
    temp_v1 = (u32) temp_ret;
    sp30 = temp_ret;
    sp34 = temp_v1;
    temp_t5_2 = __osTimerList->next;
    __osSetTimerIntr((u64) temp_t5_2->unk_10, (u64) temp_t5_2->unk_14);
    __osRestoreInt(sp20);
    return 0;
}
