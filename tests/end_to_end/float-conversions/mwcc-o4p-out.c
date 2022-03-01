>>> Match #0  --> cvt.s.i.fictive $f0, $r0
> map 0.9 (16)        li $a, 0x43300000  <>  li $r3, 0x43300000             * refs: AccessRefs(refs={Register(register_name='r3'): [0.13 (20), 0.19 (26)]})
> map 0.19 (26)          stw $a, N($r1)  <>  stw $r3, 0x8($r1)                refs: AccessRefs(refs={MemoryAccess(base_reg=Register(register_name='r1'), offset=AsmLiteral(value=8), size=8): [0.20 (27)]})
> map 0.18 (25)    stw $i, N + 0x4($r1)  <>  stw $r0, 0xc($r1)                refs: AccessRefs(refs={MemoryAccess(base_reg=Register(register_name='r1'), offset=AsmLiteral(value=8), size=8): [0.20 (27)]})
> map 0.10 (17)         lfd $c, K($r13)  <>  lfd $f1, %sda21($$23)($r13)    * refs: AccessRefs(refs={Register(register_name='f1'): [0.15 (22), 0.21 (28)]})
> map 0.20 (27)          lfd $f, N($r1)  <>  lfd $f0, 0x8($r1)                refs: AccessRefs(refs={Register(register_name='f0'): [0.21 (28)]})
> map 0.21 (28)        fsubs $f, $f, $c  <>  fsubs $f0, $f0, $f1              refs: AccessRefs(refs={Register(register_name='f0'): [0.22 (29)]})
s32 __cvt_fp2unsigned(f32);                         /* extern */
extern f64 dbl;
extern f32 flt;
extern s32 u;

void test(void) {
    s32 sp10;
    s32 sp14;
    f64 temp_f0;

    u = __cvt_fp2unsigned(flt);
    u = __cvt_fp2unsigned((f32) dbl);
    sp14 = u;
    sp10 = 0x43300000;
    temp_f0 = (bitwise f64) sp10 - 4503599627370496.0;
    dbl = temp_f0;
    flt = (f32) temp_f0;
}
