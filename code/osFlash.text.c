struct _mips2c_stack_func_80186A70 {
    /* 0x0 */ char pad_0[0x4];
    /* 0x4 */ u32 sp4;                              /* inferred */
};                                                  /* size = 0x8 */

struct _mips2c_stack_func_80186AB8 {};              /* size 0x0 */

struct _mips2c_stack_func_80186B28 {};              /* size 0x0 */

struct _mips2c_stack_func_80186B30 {};              /* size 0x0 */

struct _mips2c_stack_func_80186B38 {};              /* size 0x0 */

struct _mips2c_stack_func_80186B68 {};              /* size 0x0 */

struct _mips2c_stack_func_80186B70 {};              /* size 0x0 */

struct _mips2c_stack_func_80186B78 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80186CAC {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80186D60 {
    /* 0x00 */ char pad_0[0x1F];
    /* 0x1F */ u8 sp1F;                             /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80186E64 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80186EC8 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x18];
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0x24];
    /* 0x6C */ s32 sp6C;                            /* inferred */
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80187018 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80187080 {
    /* 0x00 */ char pad_0[0x1F];
    /* 0x1F */ u8 sp1F;                             /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80187124 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x18];
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0x24];
    /* 0x6C */ s32 sp6C;                            /* inferred */
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80187284 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_801872FC {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_801873BC {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x18];
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0x24];
    /* 0x6C */ s32 sp6C;                            /* inferred */
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_8018752C {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

? osEPiLinkHandle(OSPiHandle *);                    /* extern */
? osEPiReadIo(OSPiHandle *, u32, s32 *);            /* extern */
? osEPiWriteIo(OSPiHandle *, u32, s32);             /* extern */
u32 func_80186A70(s32 arg0);                        /* static */
OSPiHandle *func_80186AB8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4); /* static */
void func_80186B28();                               /* static */
void func_80186B30();                               /* static */
void func_80186B38(s32 arg0);                       /* static */
void func_80186B68();                               /* static */
void func_80186B70();                               /* static */
OSPiHandle *func_80186B78();                        /* static */
void func_80186CAC(u8 *arg0);                       /* static */
void func_80186D60(s32 *arg0, s32 *arg1);           /* static */
void func_80186E64();                               /* static */
? func_80186EC8();                                  /* static */
void func_80187018();                               /* static */
? func_80187080();                                  /* static */
? func_80187124(s32 arg0);                          /* static */
void func_80187284(s32 arg0);                       /* static */
s32 func_801872FC(OSIoMesg *arg0, s32 arg1, s32 arg2, s32 arg3); /* static */
? func_801873BC(s32 arg0);                          /* static */
s32 func_8018752C(OSIoMesg *arg0, s32 arg1, s32 arg2, void *arg3, u32 arg4, OSMesgQueue *arg5); /* static */
static void D_801FD040;
static void *D_801FD0F4;
static s32 D_801FD0F8[10];
OSIoMesg D_801FD050;
OSMesgQueue D_801FD068;
OSPiHandle D_801FD080;

u32 func_80186A70(s32 arg0) {
    u32 sp4;

    if (*D_801FD0F8 == 0) {
        sp4 = arg0 << 6;
    } else {
        sp4 = arg0 << 7;
    }
    return sp4;
}

OSPiHandle *func_80186AB8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    D_801FD080.baseAddress = arg4 | 0xA0000000;
    D_801FD080.type = D_801FD080.type + 1;
    D_801FD080.latency = arg0 & 0xFF;
    D_801FD080.pulse = arg1 & 0xFF;
    D_801FD080.pageSize = arg2 & 0xFF;
    D_801FD080.relDuration = arg3 & 0xFF;
    D_801FD080.domain = 1;
    return &D_801FD080;
}

void func_80186B28(void) {

}

void func_80186B30(void) {

}

void func_80186B38(s32 arg0) {
    D_801FD080.baseAddress = ((arg0 << 0x11) + 0x8000000) | 0xA0000000;
    D_801FD080.type = arg0 + 8;
}

void func_80186B68(void) {

}

void func_80186B70(void) {

}

OSPiHandle *func_80186B78(void) {
    s32 sp1C;
    s32 sp18;

    osCreateMesgQueue(&D_801FD068, &D_801FD0F4, 1);
    if (D_801FD080.baseAddress == 0xA8000000) {
        return &D_801FD080;
    }
    D_801FD080.type = 8;
    D_801FD080.baseAddress = 0xA8000000;
    D_801FD080.latency = 5;
    D_801FD080.pulse = 0xC;
    D_801FD080.pageSize = 0xF;
    D_801FD080.relDuration = 2;
    D_801FD080.domain = 1;
    D_801FD080.speed = 0;
    bzero((void *) &D_801FD080.transferInfo, 0x60);
    osEPiLinkHandle(&D_801FD080);
    func_80186D60(&sp1C, &sp18);
    if ((sp18 == 0xC2001E) || (sp18 == 0xC20001) || (sp18 == 0xC20000)) {
        *D_801FD0F8 = 0;
    } else {
        *D_801FD0F8 = 1;
    }
    return &D_801FD080;
}

void func_80186CAC(u8 *arg0) {
    s32 sp1C;

    osEPiWriteIo(&D_801FD080, D_801FD080.baseAddress | 0x10000, 0xD2000000);
    osEPiReadIo(&D_801FD080, D_801FD080.baseAddress, &sp1C);
    osEPiWriteIo(&D_801FD080, D_801FD080.baseAddress | 0x10000, 0xD2000000);
    osEPiReadIo(&D_801FD080, D_801FD080.baseAddress, &sp1C);
    *arg0 = sp1C & 0xFF;
}

void func_80186D60(s32 *arg0, s32 *arg1) {
    u8 sp1F;

    func_80186CAC(&sp1F);
    osEPiWriteIo(&D_801FD080, D_801FD080.baseAddress | 0x10000, 0xE1000000);
    D_801FD050.hdr.pri = 0;
    D_801FD050.hdr.retQueue = &D_801FD068;
    D_801FD050.dramAddr = &D_801FD040;
    D_801FD050.devAddr = 0;
    D_801FD050.size = 8;
    osInvalDCache(&D_801FD040, 0x10);
    osEPiStartDma(&D_801FD080, &D_801FD050, 0);
    osRecvMesg(&D_801FD068, NULL, 1);
    *arg0 = D_801FD040.unk_0;
    *arg1 = D_801FD040.unk_4;
}

void func_80186E64(void) {
    osEPiWriteIo(&D_801FD080, D_801FD080.baseAddress | 0x10000, 0xD2000000);
    osEPiWriteIo(&D_801FD080, D_801FD080.baseAddress, 0);
}

? func_80186EC8(void) {
    s32 sp6C;
    ? sp48;
    ? sp30;
    void *sp2C;
    s32 temp_t5;

    osEPiWriteIo(&D_801FD080, D_801FD080.baseAddress | 0x10000, 0x3C000000);
    osEPiWriteIo(&D_801FD080, D_801FD080.baseAddress | 0x10000, 0x78000000);
    osCreateMesgQueue((OSMesgQueue *) &sp30, &sp2C, 1);
    do {
        osSetTimer((OSTimer *) &sp48, 0U, 0xABA95U, NULL, NULL, &sp30, &sp2C);
        osRecvMesg((OSMesgQueue *) &sp30, &sp2C, 1);
        osEPiReadIo(&D_801FD080, D_801FD080.baseAddress, &sp6C);
    } while ((sp6C & 2) == 2);
    osEPiReadIo(&D_801FD080, D_801FD080.baseAddress, &sp6C);
    func_80186E64();
    temp_t5 = sp6C & 0xFF;
    if ((temp_t5 == 8) || (temp_t5 == 0x48) || ((sp6C & 8) == 8)) {
        return 0;
    }
    return -1;
}

void func_80187018(void) {
    osEPiWriteIo(&D_801FD080, D_801FD080.baseAddress | 0x10000, 0x3C000000);
    osEPiWriteIo(&D_801FD080, D_801FD080.baseAddress | 0x10000, 0x78000000);
}

? func_80187080(void) {
    u8 sp1F;
    s32 temp_t9;

    func_80186CAC(&sp1F);
    if ((sp1F & 2) == 2) {
        return 2;
    }
    func_80186CAC(&sp1F);
    func_80186E64();
    temp_t9 = sp1F & 0xFF;
    if ((temp_t9 == 8) || (temp_t9 == 0x48) || ((sp1F & 8) == 8)) {
        return 0;
    }
    return -1;
}

? func_80187124(s32 arg0) {
    s32 sp6C;
    ? sp48;
    ? sp30;
    void *sp2C;
    s32 temp_t6;

    osEPiWriteIo(&D_801FD080, D_801FD080.baseAddress | 0x10000, arg0 | 0x4B000000);
    osEPiWriteIo(&D_801FD080, D_801FD080.baseAddress | 0x10000, 0x78000000);
    osCreateMesgQueue((OSMesgQueue *) &sp30, &sp2C, 1);
    do {
        osSetTimer((OSTimer *) &sp48, 0U, 0x8F0D1U, NULL, NULL, &sp30, &sp2C);
        osRecvMesg((OSMesgQueue *) &sp30, &sp2C, 1);
        osEPiReadIo(&D_801FD080, D_801FD080.baseAddress, &sp6C);
    } while ((sp6C & 2) == 2);
    osEPiReadIo(&D_801FD080, D_801FD080.baseAddress, &sp6C);
    func_80186E64();
    temp_t6 = sp6C & 0xFF;
    if ((temp_t6 == 8) || (temp_t6 == 0x48) || ((sp6C & 8) == 8)) {
        return 0;
    }
    return -1;
}

void func_80187284(s32 arg0) {
    osEPiWriteIo(&D_801FD080, D_801FD080.baseAddress | 0x10000, arg0 | 0x4B000000);
    osEPiWriteIo(&D_801FD080, D_801FD080.baseAddress | 0x10000, 0x78000000);
}

s32 func_801872FC(OSIoMesg *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp1C;
    s32 temp_v0;

    osEPiWriteIo(&D_801FD080, D_801FD080.baseAddress | 0x10000, 0xB4000000);
    arg0->hdr.pri = (u8) arg1;
    arg0->hdr.retQueue = arg3;
    arg0->dramAddr = arg2;
    arg0->devAddr = 0;
    arg0->size = 0x80;
    temp_v0 = osEPiStartDma(&D_801FD080, arg0, 1);
    sp1C = temp_v0;
    return temp_v0;
}

? func_801873BC(s32 arg0) {
    s32 sp6C;
    ? sp48;
    ? sp30;
    void *sp2C;
    s32 temp_t7;

    if (*D_801FD0F8 == 1) {
        osEPiWriteIo(&D_801FD080, D_801FD080.baseAddress | 0x10000, 0xB4000000);
    }
    osEPiWriteIo(&D_801FD080, D_801FD080.baseAddress | 0x10000, arg0 | 0xA5000000);
    osCreateMesgQueue((OSMesgQueue *) &sp30, &sp2C, 1);
    do {
        osSetTimer((OSTimer *) &sp48, 0U, 0x249FU, NULL, NULL, &sp30, &sp2C);
        osRecvMesg((OSMesgQueue *) &sp30, &sp2C, 1);
        osEPiReadIo(&D_801FD080, D_801FD080.baseAddress, &sp6C);
    } while ((sp6C & 1) == 1);
    osEPiReadIo(&D_801FD080, D_801FD080.baseAddress, &sp6C);
    func_80186E64();
    temp_t7 = sp6C & 0xFF;
    if ((temp_t7 == 4) || (temp_t7 == 0x44) || ((sp6C & 4) == 4)) {
        return 0;
    }
    return -1;
}

s32 func_8018752C(OSIoMesg *arg0, s32 arg1, s32 arg2, void *arg3, u32 arg4, OSMesgQueue *arg5) {
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 temp_v0;

    osEPiWriteIo(&D_801FD080, D_801FD080.baseAddress | 0x10000, 0xF0000000);
    osEPiReadIo(&D_801FD080, D_801FD080.baseAddress, &sp20);
    arg0->hdr.pri = (u8) arg1;
    arg0->hdr.retQueue = arg5;
    arg0->dramAddr = arg3;
    sp1C = (arg2 + arg4) - 1;
    if ((sp1C & 0xF00) != (arg2 & 0xF00)) {
        sp18 = 0x100 - (arg2 & 0xFF);
        arg4 -= sp18;
        arg0->size = sp18 << 7;
        arg0->devAddr = func_80186A70(arg2);
        osEPiStartDma(&D_801FD080, arg0, 0);
        osRecvMesg(arg5, NULL, 1);
        arg2 = (arg2 + 0x100) & 0xF00;
        arg0->dramAddr += arg0->size;
    }
    if (arg4 >= 0x101U) {
        do {
            sp18 = 0x100;
            arg4 += -0x100;
            arg0->size = sp18 << 7;
            arg0->devAddr = func_80186A70(arg2);
            osEPiStartDma(&D_801FD080, arg0, 0);
            osRecvMesg(arg5, NULL, 1);
            arg2 += 0x100;
            arg0->dramAddr += arg0->size;
        } while (arg4 >= 0x101U);
    }
    arg0->size = arg4 << 7;
    arg0->devAddr = func_80186A70(arg2);
    temp_v0 = osEPiStartDma(&D_801FD080, arg0, 0);
    sp24 = temp_v0;
    return temp_v0;
}
