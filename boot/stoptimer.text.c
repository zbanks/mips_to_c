struct _mips2c_stack_osStopTimer {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ u64 *sp24;                           /* inferred */
    /* 0x28 */ OSTimer *sp28;                       /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

OSTimer D_8009E590;
OSTimer *__osTimerList = &D_8009E590;

s32 osStopTimer(OSTimer *t) {
    OSTimer *sp28;
    u64 *sp24;
    OSTimer *temp_t7_2;
    OSTimer *temp_t9;
    u32 temp_s0;
    u32 temp_t5;
    u32 temp_t7;
    u64 *temp_t1;

    if (t->next == 0) {
        return -1;
    }
    temp_t9 = t->next;
    temp_s0 = __osDisableInt();
    sp28 = temp_t9;
    if (temp_t9 != __osTimerList) {
        temp_t1 = &temp_t9->value;
        sp24 = temp_t1;
        temp_t5 = t->unk14;
        temp_t7 = temp_t1->unk4 + temp_t5;
        temp_t1->unk0 = (s32) ((temp_t7 < temp_t5) + temp_t1->unk0 + t->unk10);
        temp_t1->unk4 = temp_t7;
    }
    t->prev->next = t->next;
    t->next->prev = t->prev;
    t->next = NULL;
    t->prev = NULL;
    temp_t7_2 = __osTimerList;
    if (temp_t7_2->next == temp_t7_2) {
        __osSetCompare(0U);
    }
    __osRestoreInt(temp_s0);
    return 0;
}
