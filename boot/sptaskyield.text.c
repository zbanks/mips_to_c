struct _mips2c_stack_osSpTaskYield {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void osSpTaskYield(void) {
    __osSpSetStatus(0x400U);
}
