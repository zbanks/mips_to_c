struct _mips2c_stack_func_80084940 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ u32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80084968 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_80084940(void) {
    u32 sp1C;

    sp1C = __osSpGetStatus();
    osDpGetStatus();
}

void func_80084968(void) {
    func_80084940();
    osDpSetStatus(0x28U);
    __osSpSetStatus(0x4082U);
    func_80084940();
}
