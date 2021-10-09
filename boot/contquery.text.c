struct _mips2c_stack_osContGetQuery {
    /* 0x00 */ char pad_0[0x1F];
    /* 0x1F */ u8 sp1F;                             /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_osContStartQuery {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

u8 __osContLastCmd;
OSPifRam __osContPifRam;

s32 osContStartQuery(OSMesgQueue *mq) {
    s32 sp1C;
    s32 temp_v0;

    __osSiGetAccess();
    if (__osContLastCmd != 0) {
        __osPackRequestData(0U);
        __osSiRawStartDma(1, (void *) &__osContPifRam);
        osRecvMesg(mq, NULL, 1);
    }
    temp_v0 = __osSiRawStartDma(0, (void *) &__osContPifRam);
    sp1C = temp_v0;
    __osContLastCmd = 0;
    __osSiRelAccess();
    return temp_v0;
}

void osContGetQuery(OSContStatus *data) {
    u8 sp1F;

    __osContGetInitData(&sp1F, data);
}
