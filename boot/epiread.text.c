struct _mips2c_stack_osEPiReadIo {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

s32 osEPiReadIo(OSPiHandle *arg0, u32 arg1, u32 *arg2) {
    s32 sp1C;
    s32 temp_v0;

    __osPiGetAccess();
    temp_v0 = osEPiRawReadIo(arg0, arg1, arg2);
    sp1C = temp_v0;
    __osPiRelAccess();
    return temp_v0;
}
