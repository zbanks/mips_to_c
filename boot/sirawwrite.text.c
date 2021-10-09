struct _mips2c_stack___osSiRawWriteIo {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

s32 __osSiRawWriteIo(u32 devAddr, u32 data) {
    if (__osSiDeviceBusy() != 0) {
        return -1;
    }
    *(devAddr | 0xA0000000) = data;
    return 0;
}
