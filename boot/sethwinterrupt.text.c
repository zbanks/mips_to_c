__osHwInt __osHwIntTable[];                         /* unable to generate initializer */



void __osSetHWIntrRoutine(s32 arg0, OSMesgQueue *arg1, s32 arg2) {
    u32 temp_v0;

    temp_v0 = __osDisableInt();
    __osHwIntTable[arg0].queue = arg1;
    *(&__osHwIntTable->msg + (arg0 * 8)) = arg2;
    __osRestoreInt(temp_v0);
}

