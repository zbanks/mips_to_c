struct _mips2c_stack___osSiRawReadIo {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

s32 __osSiRawReadIo(u32 devAddr, u32 *data) {
    if (__osSiDeviceBusy() != 0) {
        return -1;
    }
    *data = *(devAddr | 0xA0000000);
    return 0;
}
