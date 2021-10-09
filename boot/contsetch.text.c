struct _mips2c_stack_osContSetCh {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

u8 __osContLastCmd;
u8 __osMaxControllers;

s32 osContSetCh(u8 ch) {
    __osSiGetAccess();
    if ((s32) ch >= 5) {
        __osMaxControllers = 4;
    } else {
        __osMaxControllers = ch;
    }
    __osContLastCmd = 0xFE;
    __osSiRelAccess();
    return 0;
}
