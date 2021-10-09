struct _mips2c_stack_osViBlack {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

extern __OSViContext D_80098060 + 0x30;
__OSViContext *__osViNext = &D_80098060 + 0x30;

void osViBlack(u8 active) {
    __OSViContext *temp_v0;
    __OSViContext *temp_v0_2;

    if (active != 0) {
        temp_v0 = __osViNext;
        temp_v0->state |= 0x20;
    } else {
        temp_v0_2 = __osViNext;
        temp_v0_2->state &= 0xFFDF;
    }
    __osRestoreInt(__osDisableInt());
}
