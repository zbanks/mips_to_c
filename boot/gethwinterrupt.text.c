struct _mips2c_stack___osGetHWIntrRoutine {};       /* size 0x0 */

__osHwInt __osHwIntTable[5] = {{NULL, NULL}, {NULL, NULL}, {NULL, NULL}, {NULL, NULL}, {NULL, NULL}};

void __osGetHWIntrRoutine(s32 idx, OSMesgQueue **outQueue, void **outMsg) {
    *outQueue = __osHwIntTable[idx].queue;
    *outMsg = *(&__osHwIntTable->msg + (idx * 8));
}
