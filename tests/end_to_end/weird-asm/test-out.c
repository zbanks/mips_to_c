Warning: missing "jr $ra" in last block (.label).

? test();                                           /* static */

struct _mips2c_stack_test {
    char pad0[0x34];
};                                                  /* size 0x34 */
? test(void) {
    return 0x1233FFFF;
}
