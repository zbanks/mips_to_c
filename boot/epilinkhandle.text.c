struct _mips2c_stack_osEPiLinkHandle {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

OSPiHandle *__osPiTable = NULL;

? osEPiLinkHandle(OSPiHandle *arg0) {
    u32 temp_a0;

    temp_a0 = __osDisableInt();
    arg0->next = __osPiTable;
    __osPiTable = arg0;
    __osRestoreInt(temp_a0);
    return 0;
}
