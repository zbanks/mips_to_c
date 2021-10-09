struct _mips2c_stack___assert {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800862B4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void func_800862B4();                               /* static */

void __assert(s8 *file, u32 lineNum) {
    osGetThreadId(NULL);
    Fault_AddHungupAndCrash(file, lineNum);
}

void func_800862B4(void) {
    Fault_AddHungupAndCrash("Reset", 0U);
}
