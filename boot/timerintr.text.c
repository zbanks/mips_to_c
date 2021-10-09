OSTimer D_8009E590;
u32 __osBaseCounter;
u64 __osCurrentTime;
u32 __osTimerCounter;
OSTimer *__osTimerList = &D_8009E590;
u32 __osViIntrCount;



void __osTimerServicesInit(void) {
    OSTimer *temp_t1;
    OSTimer *temp_t4;
    OSTimer *temp_t8;
    OSTimer *temp_t9;

    __osCurrentTime = 0;
    __osCurrentTime = 0;
    temp_t8 = __osTimerList;
    __osBaseCounter = 0;
    __osViIntrCount = 0;
    temp_t8->prev = temp_t8;
    temp_t9 = __osTimerList;
    temp_t9->next = temp_t9->prev;
    temp_t1 = __osTimerList;
    temp_t1->unk10 = 0;
    temp_t1->unk14 = 0;
    temp_t4 = __osTimerList;
    temp_t4->unk8 = (s32) temp_t4->unk10;
    temp_t4->unkC = (s32) temp_t4->unk14;
    __osTimerList->mq = NULL;
    __osTimerList->msg = NULL;
}

void __osTimerInterrupt(void) {
    OSTimer *sp24;
    u32 sp20;
    u32 sp1C;
    u64 *sp18;
    OSMesgQueue *temp_t6_3;
    OSTimer *temp_t6;
    OSTimer *temp_t8;
    OSTimer *temp_t9;
    u32 temp_t0;
    u32 temp_t3;
    u32 temp_t6_2;
    u32 temp_t8_2;
    u32 temp_t9_2;

    temp_t6 = __osTimerList;
    if (temp_t6->next != temp_t6) {
loop_1:
        temp_t8 = __osTimerList;
        temp_t9 = temp_t8->next;
        sp24 = temp_t9;
        if (temp_t9 == temp_t8) {
            __osSetCompare(0U);
            __osTimerCounter = 0;
            return;
        }
        sp20 = osGetCount();
        sp1C = sp20 - __osTimerCounter;
        __osTimerCounter = sp20;
        temp_t6_2 = sp24->unk10;
        if ((temp_t6_2 >= 0U) && ((temp_t6_2 > 0U) || (sp1C < (u32) sp24->unk14))) {
            sp18 = &sp24->value;
            temp_t3 = sp24->unk14;
            temp_t0 = (sp24->unk10 - 0U) - (temp_t3 < sp1C);
            sp24->unk14 = (u32) (temp_t3 - sp1C);
            sp24->unk10 = temp_t0;
            __osSetTimerIntr((u64) sp24->unk10, (u64) sp24->unk14);
            return;
        }
        sp24->prev->next = sp24->next;
        sp24->next->prev = sp24->prev;
        sp24->next = NULL;
        sp24->prev = NULL;
        temp_t6_3 = sp24->mq;
        if (temp_t6_3 != 0) {
            osSendMesg(temp_t6_3, sp24->msg, 0);
        }
        temp_t8_2 = sp24->unk8;
        temp_t9_2 = sp24->unkC;
        if ((temp_t8_2 != 0) || (temp_t9_2 != 0)) {
            sp24->unk10 = temp_t8_2;
            sp24->unk14 = temp_t9_2;
            __osInsertTimer(sp24);
        }
        goto loop_1;
    }
}

void __osSetTimerIntr(u64 tim, u64 tim_unk4) {
    u32 sp24;
    s32 sp20;
    u32 sp1C;
    u32 temp_t7;

    if (((s32) tim == 0) && ((u32) tim_unk4 < 0x1D4U)) {
        tim_unk4 = 0x1D4;
        tim = 0;
    }
    sp1C = __osDisableInt();
    __osTimerCounter = osGetCount();
    temp_t7 = __osTimerCounter + (u32) tim_unk4;
    sp20 = (temp_t7 < (u32) tim_unk4) + (s32) tim;
    sp24 = temp_t7;
    __osSetCompare(temp_t7);
    __osRestoreInt(sp1C);
}

u64 __osInsertTimer(OSTimer *t) {
    OSTimer *sp34;
    u32 sp2C;
    u32 sp28;
    u32 sp24;
    u32 *sp20;
    u64 *sp1C;
    OSTimer *temp_t3;
    OSTimer *temp_t6;
    OSTimer *temp_t7;
    s32 temp_t0_3;
    u32 temp_t0;
    u32 temp_t0_2;
    u32 temp_t1;
    u32 temp_t2;
    u32 temp_t5;
    u32 temp_t5_2;
    u32 temp_t6_2;
    u32 temp_t7_2;

    temp_t6 = __osTimerList;
    sp24 = __osDisableInt();
    temp_t7 = temp_t6->next;
    sp34 = temp_t7;
    temp_t1 = t->unk14;
    temp_t0 = t->unk10;
    sp2C = temp_t1;
    sp28 = temp_t0;
    if (temp_t7 != temp_t6) {
        temp_t2 = temp_t7->unk10;
        if ((temp_t0 >= temp_t2) && ((temp_t2 < temp_t0) || ((u32) temp_t7->unk14 < temp_t1))) {
loop_4:
            sp20 = &sp28;
            temp_t5 = sp28.unk4;
            temp_t7_2 = sp34->unk14;
            temp_t0_2 = (sp28.unk0 - sp34->unk10) - (temp_t5 < temp_t7_2);
            sp28.unk4 = (u32) (temp_t5 - temp_t7_2);
            sp28.unk0 = temp_t0_2;
            temp_t3 = sp34->next;
            sp34 = temp_t3;
            if (temp_t3 != __osTimerList) {
                temp_t6_2 = temp_t3->unk10;
                if ((temp_t6_2 < sp28) || ((sp28 >= temp_t6_2) && ((u32) temp_t3->unk14 < sp2C))) {
                    goto loop_4;
                }
            }
        }
    }
    t->unk10 = sp28;
    t->unk14 = sp2C;
    if (sp34 != __osTimerList) {
        sp1C = &sp34->value;
        temp_t5_2 = sp34->unk14;
        temp_t0_3 = (sp34->unk10 - sp28) - (temp_t5_2 < sp2C);
        sp34->unk14 = (u32) (temp_t5_2 - sp2C);
        sp34->unk10 = temp_t0_3;
    }
    t->next = sp34;
    t->prev = sp34->prev;
    sp34->prev->next = t;
    sp34->prev = t;
    __osRestoreInt(sp24);
    return (u64) sp28;
}

