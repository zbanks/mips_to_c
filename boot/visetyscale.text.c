struct _mips2c_stack_osViSetYScale {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

extern __OSViContext D_80098060 + 0x30;
__OSViContext *__osViNext = &D_80098060 + 0x30;

void osViSetYScale(f32 value) {
    __OSViContext *temp_v1;
    u32 temp_a0;

    temp_a0 = __osDisableInt();
    __osViNext->y.factor = value;
    temp_v1 = __osViNext;
    temp_v1->state |= 4;
    __osRestoreInt(temp_a0);
}
