struct _mips2c_stack_osSetTime {};                  /* size 0x0 */

u64 __osCurrentTime;

void osSetTime(u64 ticks, u64 ticks_unk4) {
    __osCurrentTime = (s32) ticks;
    *(&__osCurrentTime + 4) = (s32) ticks_unk4;
}
