struct _mips2c_stack___osStrcmp {};                 /* size 0x0 */

s32 __osStrcmp(s8 *str1, s8 *str2) {
    u8 temp_v0;
    u8 temp_v1;

loop_0:
    temp_v0 = (u8) *str1;
    temp_v1 = (u8) *str2;
    if (temp_v1 != temp_v0) {
        return temp_v0 - temp_v1;
    }
    if (temp_v0 == 0) {
        return 0;
    }
    goto loop_0;
}
