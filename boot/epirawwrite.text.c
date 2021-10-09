struct _mips2c_stack___osEPiRawWriteIo {};          /* size 0x0 */

extern s32 D_A4600014;
extern s32 D_A4600018;
extern s32 D_A460001C;
extern s32 D_A4600020;
extern s32 D_A4600024;
extern s32 D_A4600028;
extern s32 D_A460002C;
extern s32 D_A4600030;
OSPiHandle D_8009D130;
OSPiHandle D_8009D1A8;
OSPiHandle *__osCurrentHandle[4] = {&D_8009D130, &D_8009D1A8, NULL, NULL};

s32 __osEPiRawWriteIo(OSPiHandle *handle, u32 devAddr, u32 data) {
    OSPiHandle *temp_v1;
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
    temp_v0 = handle->domain;
    temp_v1 = __osCurrentHandle[temp_v0];
    if (handle->type != temp_v1->type) {
        if (temp_v0 == 0) {
            temp_v0_2 = handle->latency;
            if (temp_v0_2 != temp_v1->latency) {
                D_A4600014 = (s32) temp_v0_2;
            }
            temp_v0_3 = handle->pageSize;
            if (temp_v0_3 != temp_v1->pageSize) {
                D_A460001C = (s32) temp_v0_3;
            }
            temp_v0_4 = handle->relDuration;
            if (temp_v0_4 != temp_v1->relDuration) {
                D_A4600020 = (s32) temp_v0_4;
            }
            temp_v0_5 = handle->pulse;
            if (temp_v0_5 != temp_v1->pulse) {
                D_A4600018 = (s32) temp_v0_5;
            }
        } else {
            temp_v0_6 = handle->latency;
            if (temp_v0_6 != temp_v1->latency) {
                D_A4600024 = (s32) temp_v0_6;
            }
            temp_v0_7 = handle->pageSize;
            if (temp_v0_7 != temp_v1->pageSize) {
                D_A460002C = (s32) temp_v0_7;
            }
            temp_v0_8 = handle->relDuration;
            if (temp_v0_8 != temp_v1->relDuration) {
                D_A4600030 = (s32) temp_v0_8;
            }
            temp_v0_9 = handle->pulse;
            if (temp_v0_9 != temp_v1->pulse) {
                D_A4600028 = (s32) temp_v0_9;
            }
        }
        temp_v1->type = handle->type;
        temp_v1->latency = handle->latency;
        temp_v1->pageSize = handle->pageSize;
        temp_v1->relDuration = handle->relDuration;
        temp_v1->pulse = handle->pulse;
    }
    *(handle->baseAddress | devAddr | 0xA0000000) = data;
    return 0;
}
