struct _mips2c_stack___osSetHWIntrRoutine {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

__osHwInt __osHwIntTable[5] = {{NULL, NULL}, {NULL, NULL}, {NULL, NULL}, {NULL, NULL}, {NULL, NULL}};

void __osSetHWIntrRoutine(s32 arg0, OSMesgQueue *arg1, s32 arg2) {
    u32 temp_v0;

    temp_v0 = __osDisableInt();
    __osHwIntTable[arg0].queue = arg1;
    *(&__osHwIntTable->msg + (arg0 * 8)) = arg2;
    __osRestoreInt(temp_v0);
}
