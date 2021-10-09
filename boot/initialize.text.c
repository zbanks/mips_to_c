struct _mips2c_stack___createSpeedParam {};         /* size 0x0 */

struct _mips2c_stack___osInitialize_autodetect {};  /* size 0x0 */

struct _mips2c_stack_osInitialize {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ u32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ u32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

extern s32 D_8000000C;
extern s32 D_A4500008;
extern s32 D_A4500010;
extern s32 D_A4500014;
extern s32 D_A4600014;
extern s32 D_A4600018;
extern s32 D_A460001C;
extern s32 D_A4600020;
extern s32 D_A4600024;
extern s32 D_A4600028;
extern s32 D_A460002C;
extern s32 D_A4600030;
static s32 D_8009CF70;
OSPiHandle D_8009D130;
OSPiHandle D_8009D1A8;
u64 osClockRate = 0x3B9ACA0;
s32 osViClock = 0x2E6D354;

void __createSpeedParam(void) {
    D_8009D130.type = 7;
    D_8009D130.latency = (u8) D_A4600014;
    D_8009D130.pulse = (u8) D_A4600018;
    D_8009D130.pageSize = (u8) D_A460001C;
    D_8009D130.relDuration = (u8) D_A4600020;
    D_8009D1A8.type = 7;
    D_8009D1A8.latency = (u8) D_A4600024;
    D_8009D1A8.pulse = (u8) D_A4600028;
    D_8009D1A8.pageSize = (u8) D_A460002C;
    D_8009D1A8.relDuration = (u8) D_A4600030;
}

void osInitialize(void) {
    u32 sp2C;
    u32 sp24;
    s32 sp20;
    s64 temp_ret;
    u32 *temp_at;
    u32 temp_v1;
    u32 temp_v1_2;
    u64 temp_ret_2;

    D_8009CF70 = 1;
    __osSetSR(__osGetSR() | 0x20000000);
    __osSetFpcCsr(0x1000800U);
    __osSetWatchLo(0x4900000U);
    if (__osSiRawReadIo(0x1FC007FCU, &sp2C) != 0) {
        do {

        } while (__osSiRawReadIo(0x1FC007FCU, &sp2C) != 0);
    }
    if (__osSiRawWriteIo(0x1FC007FCU, sp2C | 8) != 0) {
        do {

        } while (__osSiRawWriteIo(0x1FC007FCU, sp2C | 8) != 0);
    }
    D_8000000C = __osExceptionPreamble.unk_0;
    D_8000000C = __osExceptionPreamble.unk_4;
    D_8000000C = __osExceptionPreamble.unk_8;
    D_8000000C = __osExceptionPreamble.unk_C;
    (void *)0x80000080->unk_0 = (s32) __osExceptionPreamble.unk_0;
    (void *)0x80000080->unk_4 = (s32) __osExceptionPreamble.unk_4;
    (void *)0x80000080->unk_8 = (s32) __osExceptionPreamble.unk_8;
    (void *)0x80000080->unk_C = (s32) __osExceptionPreamble.unk_C;
    (void *)0x80000100->unk_0 = (s32) __osExceptionPreamble.unk_0;
    (void *)0x80000100->unk_4 = (s32) __osExceptionPreamble.unk_4;
    (void *)0x80000100->unk_8 = (s32) __osExceptionPreamble.unk_8;
    (void *)0x80000100->unk_C = (s32) __osExceptionPreamble.unk_C;
    (void *)0x80000180->unk_0 = (s32) __osExceptionPreamble.unk_0;
    (void *)0x80000180->unk_4 = (s32) __osExceptionPreamble.unk_4;
    (void *)0x80000180->unk_8 = (s32) __osExceptionPreamble.unk_8;
    (void *)0x80000180->unk_C = (s32) __osExceptionPreamble.unk_C;
    osWritebackDCache((void *)0x80000000, 0x190);
    osInvalICache((void *)0x80000000, 0x190);
    __createSpeedParam();
    osUnmapTLBAll();
    osMapTLBRdb();
    temp_ret = __ll_mul((s64) osClockRate, (s64) *(&osClockRate + 4), 0, 3);
    temp_v1 = (u32) (u64) temp_ret;
    sp20 = temp_ret;
    sp24 = temp_v1;
    temp_ret_2 = __ull_div((u64) sp20, (u64) sp24, 0U, 4U);
    temp_v1_2 = (u32) temp_ret_2;
    temp_at = &osClockRate + 4;
    *temp_at = temp_ret_2;
    *temp_at = temp_v1_2;
    if (osResetType == 0) {
        bzero((void *) osAppNmiBuffer, 0x40);
    }
    if (osTvType == 0) {
        osViClock = 0x2F5B2D2;
    } else if (osTvType == 2) {
        osViClock = 0x2E6025C;
    } else {
        osViClock = 0x2E6D354;
    }
    if ((__osGetCause() & 0x1000) != 0) {
loop_12:
        goto loop_12;
    }
    D_A4500008 = 1;
    D_A4500010 = 0x3FFF;
    D_A4500014 = 0xF;
}

void __osInitialize_autodetect(void) {

}
