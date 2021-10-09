struct _mips2c_stack_osAfterPreNMI {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

s32 osAfterPreNMI(void) {
    return __osSpSetPc(NULL);
}
