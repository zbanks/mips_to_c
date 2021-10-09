struct _mips2c_stack_proutSprintf {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_sprintf {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_vsprintf {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void *proutSprintf(void *s, s8 *buf, u32 n) {
    return memcpy(s, (void *) buf, n) + n;
}

s32 vsprintf(s8 *dst, s8 *fmt, s8 *args) {
    s32 temp_v0;

    temp_v0 = _Printf(proutSprintf, (void *) dst, fmt, args);
    if (temp_v0 >= 0) {
        dst[temp_v0] = 0;
    }
    return temp_v0;
}

s32 sprintf(s8 *s, s8 *fmt, s8 arg2, ? arg3, ...) {
    s32 temp_v0;

    temp_v0 = _Printf(proutSprintf, (void *) s, fmt, &arg2);
    if (temp_v0 >= 0) {
        s[temp_v0] = 0;
    }
    return temp_v0;
}
