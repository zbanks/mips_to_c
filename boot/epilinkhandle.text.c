OSPiHandle *__osPiTable = NULL;



? osEPiLinkHandle(OSPiHandle *arg0) {
    u32 temp_a0;

    temp_a0 = __osDisableInt();
    arg0->next = __osPiTable;
    __osPiTable = arg0;
    __osRestoreInt(temp_a0);
    return 0;
}

