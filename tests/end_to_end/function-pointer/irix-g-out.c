struct _mips2c_stack_test {
    char pad0[0x18];
};                                                  /* size 0x18 */
s32 test(s32 (*arg0)(s32), s32 arg1) {
    return arg0(arg1) + 1;
}
