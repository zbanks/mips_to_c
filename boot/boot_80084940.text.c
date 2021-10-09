

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

