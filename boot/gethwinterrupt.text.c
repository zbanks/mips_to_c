__osHwInt __osHwIntTable[];                         /* unable to generate initializer */



void __osGetHWIntrRoutine(s32 idx, OSMesgQueue **outQueue, void **outMsg) {
    *outQueue = __osHwIntTable[idx].queue;
    *outMsg = *(&__osHwIntTable->msg + (idx * 8));
}

