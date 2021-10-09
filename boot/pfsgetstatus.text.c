CRASHED

/*
Failed to decompile function __osPfsRequestOneChannel:

Label L8008B508 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/
/*
Failed to decompile function __osPfsGetOneChannelData:

Label L8008B584 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/
? __osPfsGetOneChannelData(s32, ? *);               /* static */
s32 __osPfsGetStatus(OSMesgQueue *arg0, s32 arg1);  /* static */
? __osPfsRequestOneChannel(s32, ?);                 /* static */
static s8 D_80097F04 = 0xFA;
OSPifRam __osPfsPifRam;



s32 __osPfsGetStatus(OSMesgQueue *arg0, s32 arg1) {
    s32 sp2C;
    void *sp28;
    ? sp24;
    s32 temp_v1;
    s32 phi_v0;

    D_80097F04 = 0xFA;
    __osPfsRequestOneChannel(arg1, 0);
    __osSiRawStartDma(1, (void *) &__osPfsPifRam);
    osRecvMesg(arg0, &sp28, 1);
    sp2C = __osSiRawStartDma(0, (void *) &__osPfsPifRam);
    osRecvMesg(arg0, &sp28, 1);
    __osPfsGetOneChannelData(arg1, &sp24);
    temp_v1 = sp26 & 1;
    if ((temp_v1 != 0) && ((sp26 & 2) != 0)) {
        return 2;
    }
    if ((sp27 != 0) || (temp_v1 == 0)) {
        return 1;
    }
    phi_v0 = sp2C;
    if ((sp26 & 4) != 0) {
        phi_v0 = 4;
    }
    return phi_v0;
}





