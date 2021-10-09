extern __OSViContext D_80098060 + 0x30;
__OSViContext *__osViNext = &D_80098060 + 0x30;



void osViSetSpecialFeatures(u32 func) {
    __OSViContext *temp_v0;
    __OSViContext *temp_v0_10;
    __OSViContext *temp_v0_11;
    __OSViContext *temp_v0_2;
    __OSViContext *temp_v0_3;
    __OSViContext *temp_v0_4;
    __OSViContext *temp_v0_5;
    __OSViContext *temp_v0_6;
    __OSViContext *temp_v0_7;
    __OSViContext *temp_v0_8;
    __OSViContext *temp_v0_9;
    u32 temp_a0;

    if ((func & 1) != 0) {
        temp_v0 = __osViNext;
        temp_v0->control |= 8;
    }
    if ((func & 2) != 0) {
        temp_v0_2 = __osViNext;
        temp_v0_2->control &= -9;
    }
    if ((func & 4) != 0) {
        temp_v0_3 = __osViNext;
        temp_v0_3->control |= 4;
    }
    if ((func & 8) != 0) {
        temp_v0_4 = __osViNext;
        temp_v0_4->control &= -5;
    }
    if ((func & 0x10) != 0) {
        temp_v0_5 = __osViNext;
        temp_v0_5->control |= 0x10;
    }
    if ((func & 0x20) != 0) {
        temp_v0_6 = __osViNext;
        temp_v0_6->control &= -0x11;
    }
    if ((func & 0x40) != 0) {
        temp_v0_7 = __osViNext;
        temp_v0_7->control |= 0x10000;
        temp_v0_8 = __osViNext;
        temp_v0_8->control &= -0x301;
    }
    if ((func & 0x80) != 0) {
        temp_v0_9 = __osViNext;
        temp_v0_9->control &= 0xFFFEFFFF;
        temp_v0_10 = __osViNext;
        temp_v0_10->control |= temp_v0_10->modep->comRegs.ctrl & 0x300;
    }
    temp_v0_11 = __osViNext;
    temp_a0 = __osDisableInt();
    temp_v0_11->state |= 8;
    __osRestoreInt(temp_a0);
}

