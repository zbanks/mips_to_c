>>> Match #0  --> cvt.i.d.ficitve $r0, $f1
> map 0.1 (8)             fctiwz $t, $f  <>  fctiwz $f4, $f1                  refs: AccessRefs(refs={Register(register_name='f4'): [0.13 (20)]})
> map 0.13 (20)         stfd $t, N($r1)  <>  stfd $f4, 0x28($r1)              refs: AccessRefs(refs={MemoryAccess(base_reg=Register(register_name='r1'), offset=AsmLiteral(value=44), size=4): [0.17 (24)]})
> map 0.17 (24)    lwz $i, N + 0x4($r1)  <>  lwz $r0, 0x2c($r1)               refs: AccessRefs(refs={Register(register_name='r0'): [0.20 (27)]})
>>> Match #0  --> cvt.d.i.fictive $f2, $r3
> map 0.5 (12)        li $a, 0x43300000  <>  li $r0, 0x43300000             * refs: AccessRefs(refs={Register(register_name='r0'): [0.8 (15), 0.11 (18)]})
> map 0.11 (18)          stw $a, N($r1)  <>  stw $r0, 0x20($r1)               refs: AccessRefs(refs={MemoryAccess(base_reg=Register(register_name='r1'), offset=AsmLiteral(value=32), size=8): [0.16 (23)]})
> map 0.3 (10)     xoris $b, $i, 0x8000  <>  xoris $r3, $r3, 0x8000           refs: AccessRefs(refs={Register(register_name='r3'): [0.6 (13)]})
> map 0.6 (13)     stw $b, N + 0x4($r1)  <>  stw $r3, 0x24($r1)               refs: AccessRefs(refs={MemoryAccess(base_reg=Register(register_name='r1'), offset=AsmLiteral(value=32), size=8): [0.16 (23)]})
> map 0.15 (22)         lfd $c, K($r13)  <>  lfd $f3, %sda21($$25)($r13)      refs: AccessRefs(refs={Register(register_name='f3'): [0.19 (26)]})
> map 0.16 (23)          lfd $f, N($r1)  <>  lfd $f2, 0x20($r1)               refs: AccessRefs(refs={Register(register_name='f2'): [0.19 (26)]})
> map 0.19 (26)        fsubs $f, $f, $c  <>  fsubs $f2, $f2, $f3              refs: AccessRefs(refs={Register(register_name='f2'): [0.22 (29)]})
>>> Match #0  --> cvt.s.i.fictive $f0, $r0
> map 0.5 (12)        li $a, 0x43300000  <>  li $r0, 0x43300000               refs: AccessRefs(refs={Register(register_name='r0'): [0.8 (15)]})
> map 0.8 (15)           stw $a, N($r1)  <>  stw $r0, 0x18($r1)               refs: AccessRefs(refs={MemoryAccess(base_reg=Register(register_name='r1'), offset=AsmLiteral(value=24), size=8): [0.12 (19)]})
> map 0.4 (11)     stw $i, N + 0x4($r1)  <>  stw $r0, 0x1c($r1)               refs: AccessRefs(refs={MemoryAccess(base_reg=Register(register_name='r1'), offset=AsmLiteral(value=24), size=8): [0.12 (19)]})
> map 0.10 (17)         lfd $c, K($r13)  <>  lfd $f1, %sda21($$27)($r13)      refs: AccessRefs(refs={Register(register_name='f1'): [0.14 (21)]})
> map 0.12 (19)          lfd $f, N($r1)  <>  lfd $f0, 0x18($r1)               refs: AccessRefs(refs={Register(register_name='f0'): [0.14 (21)]})
> map 0.14 (21)        fsubs $f, $f, $c  <>  fsubs $f0, $f0, $f1              refs: AccessRefs(refs={Register(register_name='f0'): [0.21 (28)]})
extern f32 globalf;
extern s32 globali;

f32 test(s32 arg1, f32 arg9) {
    globali = arg1 + 3;
    globalf = arg9;
    return 5.0f + (arg9 + 5.0f);
}
