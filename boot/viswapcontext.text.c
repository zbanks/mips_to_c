struct _mips2c_stack___osViSwapContext {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ u32 sp34;                            /* inferred */
    /* 0x38 */ u32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ OSViMode *sp44;                      /* inferred */
};                                                  /* size = 0x48 */

extern __OSViContext D_80098060 + 0x30;
extern u32 D_A4400000;
extern s32 D_A4400008;
extern s32 D_A440000C;
extern s32 D_A4400010;
extern s32 D_A4400014;
extern s32 D_A4400018;
extern s32 D_A440001C;
extern u32 D_A4400020;
extern s32 D_A440002C;
extern u32 D_A4400030;
extern u32 D_A4400034;
__OSViContext D_80098060[2] = {
    {0, 0, NULL, NULL, 0, NULL, NULL, {0.0f, 0, 0}, {0.0f, 0, 0}},
    {0, 0, NULL, NULL, 0, NULL, NULL, {0.0f, 0, 0}, {0.0f, 0, 0}},
};
s32 __additional_scanline = 0;
__OSViContext *__osViCurr = D_80098060;
__OSViContext *__osViNext = &D_80098060 + 0x30;

void __osViSwapContext(void) {
    OSViMode *sp44;
    u32 sp38;
    u32 sp34;
    s32 sp2C;
    void *sp24;
    OSViMode *temp_a1;
    __OSViContext *temp_s0;
    __OSViContext *temp_t2;
    __OSViContext *temp_t2_2;
    __OSViContext *temp_t3;
    f32 temp_f8;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_v0_2;
    u16 temp_v1;
    u32 temp_a0;
    u32 temp_v0;
    f32 phi_f8;
    u32 phi_a3;
    u32 phi_a0;
    u32 *phi_t7;
    __OSViContext *phi_t3;
    __OSViContext *phi_t2;

    temp_s0 = __osViNext;
    temp_a1 = temp_s0->modep;
    sp2C = D_A4400010 & 1;
    sp44 = temp_a1;
    temp_t0 = sp2C * 0x14;
    temp_a0 = temp_a1->fldRegs[sp2C].origin + osVirtualToPhysical(temp_s0->framep);
    phi_a0 = temp_a0;
    if ((temp_s0->state & 2) != 0) {
        temp_s0->x.scale |= temp_a1->comRegs.xScale & ~0xFFF;
    } else {
        temp_s0->x.scale = temp_a1->comRegs.xScale;
    }
    if ((temp_s0->state & 4) != 0) {
        temp_t1 = temp_a1->fldRegs[sp2C].yScale & 0xFFF;
        temp_f8 = (f32) temp_t1;
        phi_f8 = temp_f8;
        if (temp_t1 < 0) {
            phi_f8 = temp_f8 + 4294967296.0f;
        }
        temp_v0 = (u32) (temp_s0->y.factor * phi_f8);
        temp_s0->y.scale = temp_v0;
        temp_s0->y.scale = temp_v0 | (temp_a1->fldRegs[sp2C].yScale & ~0xFFF);
    } else {
        temp_s0->y.scale = temp_a1->fldRegs[sp2C].yScale;
    }
    temp_v0_2 = __additional_scanline;
    sp34 = (temp_a1->fldRegs[sp2C].vStart - (temp_v0_2 << 0x10)) + temp_v0_2;
    temp_v1 = temp_s0->state;
    phi_a3 = temp_a1->comRegs.hStart;
    if ((temp_v1 & 0x20) != 0) {
        phi_a3 = 0U;
    }
    if ((temp_v1 & 0x40) != 0) {
        temp_s0->y.scale = 0;
        sp38 = phi_a3;
        sp24 = temp_a1 + temp_t0;
        sp44 = temp_a1;
        phi_a0 = osVirtualToPhysical(temp_s0->framep);
    }
    if ((temp_s0->state & 0x80) == 0) {
        phi_t7 = &D_A4400020;
    } else {
        temp_s0->y.scale = (temp_s0->y.offset << 0x10) & 0x3FF0000;
        sp38 = phi_a3;
        sp24 = temp_a1 + temp_t0;
        sp44 = temp_s0->modep;
        phi_a0 = osVirtualToPhysical(temp_s0->framep);
        phi_t7 = (u32 *)0xA4400000;
    }
    *phi_t7 = phi_a0;
    D_A4400008 = temp_s0->modep->comRegs.width;
    D_A4400014 = temp_s0->modep->comRegs.burst;
    D_A4400018 = temp_s0->modep->comRegs.vSync;
    D_A440001C = temp_s0->modep->comRegs.hSync;
    *phi_t7 = temp_s0->modep->comRegs.leap;
    D_A4400034 = phi_a3;
    D_A4400000 = sp34;
    D_A440002C = (temp_a1 + temp_t0)->unk_34;
    D_A440000C = (temp_a1 + temp_t0)->unk_38;
    D_A4400030 = temp_s0->x.scale;
    D_A4400034 = temp_s0->y.scale;
    D_A4400000 = temp_s0->control;
    temp_t2 = __osViCurr;
    __osViCurr = temp_s0;
    __osViNext = temp_t2;
    phi_t3 = temp_s0;
    phi_t2 = temp_t2;
    do {
        temp_t3 = phi_t3 + 0xC;
        temp_t2_2 = phi_t2 + 0xC;
        temp_t2_2->unk_-C = (s32) *phi_t3;
        temp_t2_2->unk_-8 = (s32) temp_t3->unk_-8;
        temp_t2_2->unk_-4 = (s32) temp_t3->unk_-4;
        phi_t3 = temp_t3;
        phi_t2 = temp_t2_2;
    } while (temp_t3 != &temp_s0[1]);
}
