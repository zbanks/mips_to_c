

s32 osEPiReadIo(OSPiHandle *arg0, u32 arg1, u32 *arg2) {
    s32 sp1C;
    s32 temp_v0;

    __osPiGetAccess();
    temp_v0 = osEPiRawReadIo(arg0, arg1, arg2);
    sp1C = temp_v0;
    __osPiRelAccess();
    return temp_v0;
}

