void Sleep_Nsec(s64 arg0);                          /* static */
void Sleep_Sec(s64 arg0);                           /* static */



void Sleep_Cycles(u64 time, u64 time_unk4) {
    OSMesgQueue sp50;
    void *sp4C;
    OSTimer sp28;

    osCreateMesgQueue(&sp50, &sp4C, 1);
    osSetTimer(&sp28, (u64) (s32) time, (u64) (s32) time_unk4, NULL, NULL, &sp50, 0);
    osRecvMesg(&sp50, NULL, 1);
}

void Sleep_Nsec(s64 arg0) {
    s64 temp_ret;
    u64 temp_ret_2;

    temp_ret = __ll_mul(0, arg0, 0, 3);
    temp_ret_2 = __ull_div(temp_ret, (u64) (u32) (u64) temp_ret, 0U, 0x40U);
    Sleep_Cycles(temp_ret_2, (u64) (u32) temp_ret_2);
}

void Sleep_Usec(s32 arg0) {
    s64 temp_ret;
    u64 temp_ret_2;

    temp_ret = __ll_mul(0, (s64) arg0, 0, 0xBB8);
    temp_ret_2 = __ull_div(temp_ret, (u64) (u32) (u64) temp_ret, 0U, 0x40U);
    Sleep_Cycles(temp_ret_2, (u64) (u32) temp_ret_2);
}

void Sleep_Msec(u32 param_1) {
    s64 temp_ret;
    u64 temp_ret_2;

    temp_ret = __ll_mul(0, (s64) param_1, 0, 0x2CB4178);
    temp_ret_2 = __ull_div(temp_ret, (u64) (u32) (u64) temp_ret, 0U, 0x3E8U);
    Sleep_Cycles(temp_ret_2, (u64) (u32) temp_ret_2);
}

void Sleep_Sec(s64 arg0) {
    s64 temp_ret;

    temp_ret = __ll_mul(0, arg0, 0, 0x2CB4178);
    Sleep_Cycles(temp_ret, (u64) (u32) (u64) temp_ret);
}

