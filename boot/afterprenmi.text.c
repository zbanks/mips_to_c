

s32 osAfterPreNMI(void) {
    return __osSpSetPc(NULL);
}

