void func_800862B4();                               /* static */



void __assert(s8 *file, u32 lineNum) {
    osGetThreadId(NULL);
    Fault_AddHungupAndCrash(file, lineNum);
}

void func_800862B4(void) {
    Fault_AddHungupAndCrash("Reset", 0U);
}

