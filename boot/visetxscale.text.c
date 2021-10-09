extern __OSViContext D_80098060 + 0x30;
__OSViContext *__osViNext = &D_80098060 + 0x30;



void osViSetXScale(f32 value) {
    __OSViContext *temp_v1;
    __OSViContext *temp_v1_2;
    f32 temp_f10;
    s32 temp_t0;
    u32 temp_a0;
    f32 phi_f10;

    temp_a0 = __osDisableInt();
    __osViNext->x.factor = value;
    temp_v1 = __osViNext;
    temp_v1->state |= 2;
    temp_v1_2 = __osViNext;
    temp_t0 = temp_v1_2->modep->comRegs.xScale & 0xFFF;
    temp_f10 = (f32) temp_t0;
    phi_f10 = temp_f10;
    if (temp_t0 < 0) {
        phi_f10 = temp_f10 + 4294967296.0f;
    }
    temp_v1_2->x.scale = (u32) (temp_v1_2->x.factor * phi_f10) & 0xFFF;
    __osRestoreInt(temp_a0);
}

