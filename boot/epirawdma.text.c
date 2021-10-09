extern u32 D_A4600000;
extern s32 D_A4600004;
extern s32 D_A4600008;
extern s32 D_A460000C;
extern s32 D_A4600014;
extern s32 D_A4600018;
extern s32 D_A460001C;
extern s32 D_A4600020;
extern s32 D_A4600024;
extern s32 D_A4600028;
extern s32 D_A460002C;
extern s32 D_A4600030;
OSPiHandle *__osCurrentHandle[];                    /* unable to generate initializer */



s32 osEPiRawStartDma(OSPiHandle *arg0, s32 arg1, u32 arg2, void *arg3, u32 arg4) {
    OSPiHandle *temp_a0;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
    u8 temp_v0_9;

    if ((*(s32 *)0xA4600010 & 3) != 0) {
        do {

        } while ((*(s32 *)0xA4600010 & 3) != 0);
    }
    temp_v0 = arg0->domain;
    temp_a0 = __osCurrentHandle[temp_v0];
    if (arg0->type != temp_a0->type) {
        if (temp_v0 == 0) {
            temp_v0_2 = arg0->latency;
            if (temp_v0_2 != temp_a0->latency) {
                D_A4600014 = (s32) temp_v0_2;
            }
            temp_v0_3 = arg0->pageSize;
            if (temp_v0_3 != temp_a0->pageSize) {
                D_A460001C = (s32) temp_v0_3;
            }
            temp_v0_4 = arg0->relDuration;
            if (temp_v0_4 != temp_a0->relDuration) {
                D_A4600020 = (s32) temp_v0_4;
            }
            temp_v0_5 = arg0->pulse;
            if (temp_v0_5 != temp_a0->pulse) {
                D_A4600018 = (s32) temp_v0_5;
            }
        } else {
            temp_v0_6 = arg0->latency;
            if (temp_v0_6 != temp_a0->latency) {
                D_A4600024 = (s32) temp_v0_6;
            }
            temp_v0_7 = arg0->pageSize;
            if (temp_v0_7 != temp_a0->pageSize) {
                D_A460002C = (s32) temp_v0_7;
            }
            temp_v0_8 = arg0->relDuration;
            if (temp_v0_8 != temp_a0->relDuration) {
                D_A4600030 = (s32) temp_v0_8;
            }
            temp_v0_9 = arg0->pulse;
            if (temp_v0_9 != temp_a0->pulse) {
                D_A4600028 = (s32) temp_v0_9;
            }
        }
        temp_a0->type = arg0->type;
        temp_a0->latency = arg0->latency;
        temp_a0->pageSize = arg0->pageSize;
        temp_a0->relDuration = arg0->relDuration;
        temp_a0->pulse = arg0->pulse;
    }
    D_A4600000 = osVirtualToPhysical(arg3);
    D_A4600004 = (arg0->baseAddress | arg2) & 0x1FFFFFFF;
    if (arg1 != 0) {
        if (arg1 != 1) {
            return -1;
        }
        D_A4600008 = arg4 - 1;
        goto block_27;
    }
    D_A460000C = arg4 - 1;
block_27:
    return 0;
}

