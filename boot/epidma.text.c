struct _mips2c_stack_osEPiStartDma {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

OSDevMgr __osPiDevMgr = {0, NULL, NULL, NULL, NULL, NULL, NULL};

s32 osEPiStartDma(OSPiHandle *pihandle, OSIoMesg *mb, s32 direction) {
    s32 phi_v0;

    if (__osPiDevMgr.active == 0) {
        return -1;
    }
    mb->piHandle = pihandle;
    if (direction == 0) {
        mb->hdr.type = 0xF;
    } else {
        mb->hdr.type = 0x10;
    }
    if (mb->hdr.pri == 1) {
        phi_v0 = osJamMesg(osPiGetCmdQueue(), (void *) mb, 0);
    } else {
        phi_v0 = osSendMesg(osPiGetCmdQueue(), (void *) mb, 0);
    }
    return phi_v0;
}
