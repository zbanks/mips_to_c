

s32 __osSiRawReadIo(u32 devAddr, u32 *data) {
    if (__osSiDeviceBusy() != 0) {
        return -1;
    }
    *data = *(devAddr | 0xA0000000);
    return 0;
}

