

s32 __osSiRawWriteIo(u32 devAddr, u32 data) {
    if (__osSiDeviceBusy() != 0) {
        return -1;
    }
    *(devAddr | 0xA0000000) = data;
    return 0;
}

