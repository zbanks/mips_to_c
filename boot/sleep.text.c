struct _mips2c_stack_Sleep_Cycles {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad28[0x24];
    /* 0x4C */ void *sp4C;                          /* inferred */
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad50[0x18];
};                                                  /* size = 0x68 */

struct _mips2c_stack_Sleep_Msec {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Sleep_Nsec {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Sleep_Sec {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Sleep_Usec {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void Sleep_Nsec(s64 arg0);                          /* static */
void Sleep_Sec(s64 arg0);                           /* static */

void Sleep_Cycles(u64 time, u64 time_unk4) {
    ? sp50;
    void *sp4C;
    ? sp28;

    osCreateMesgQueue((OSMesgQueue *) &sp50, &sp4C, 1);
    osSetTimer((OSTimer *) &sp28, (u64) (s32) time, (u64) (s32) time_unk4, NULL, NULL, &sp50, 0);
    osRecvMesg((OSMesgQueue *) &sp50, NULL, 1);
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
