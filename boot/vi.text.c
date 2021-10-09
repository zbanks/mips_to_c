struct _mips2c_stack___osViInit {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

extern __OSViContext D_80098060 + 0x30;
extern s32 D_A4400000;
__OSViContext D_80098060[2] = {
    {0, 0, NULL, NULL, 0, NULL, NULL, {0.0f, 0, 0}, {0.0f, 0, 0}},
    {0, 0, NULL, NULL, 0, NULL, NULL, {0.0f, 0, 0}, {0.0f, 0, 0}},
};
__OSViContext *__osViCurr = D_80098060;
__OSViContext *__osViNext = &D_80098060 + 0x30;
OSViMode osViModeMpalLan1 = {
    0x1E,
    {0x311E, 0x140, 0x4651E39, 0x20D, 0x40C11, 0xC190C1A, 0x6C02EC, 0x200, 0},
    {{0x280, 0x400, 0x2501FF, 0xE0204, 2}, {0x280, 0x400, 0x2501FF, 0xE0204, 2}},
};
OSViMode osViModeNtscLan1 = {
    2,
    {0x311E, 0x140, 0x3E52239, 0x20D, 0xC15, 0xC150C15, 0x6C02EC, 0x200, 0},
    {{0x280, 0x400, 0x2501FF, 0xE0204, 2}, {0x280, 0x400, 0x2501FF, 0xE0204, 2}},
};
OSViMode osViModePalLan1 = {
    0x10,
    {0x311E, 0x140, 0x4541E3A, 0x271, 0x170C69, 0xC6F0C6D, 0x800300, 0x200, 0},
    {{0x280, 0x400, 0x5F0239, 0x9026B, 2}, {0x280, 0x400, 0x5F0239, 0x9026B, 2}},
};

void __osViInit(void) {
    __OSViContext *temp_t7;
    __OSViContext *temp_v1_2;
    u32 temp_v1;

    bzero((void *) D_80098060, 0x60);
    temp_t7 = D_80098060 + 0x30;
    __osViCurr = D_80098060;
    __osViNext = temp_t7;
    temp_t7->retraceCount = 1;
    __osViCurr->retraceCount = 1;
    __osViNext->framep = (void *)0x80000000;
    __osViCurr->framep = (void *)0x80000000;
    temp_v1 = osTvType;
    if (temp_v1 == 0) {
        __osViNext->modep = &osViModePalLan1;
    } else if (temp_v1 == 2) {
        __osViNext->modep = &osViModeMpalLan1;
    } else {
        __osViNext->modep = &osViModeNtscLan1;
    }
    __osViNext->state = 0x20;
    temp_v1_2 = __osViNext;
    temp_v1_2->control = temp_v1_2->modep->comRegs.ctrl;
    if ((u32) *(u32 *)0xA4400010 >= 0xBU) {
        do {

        } while ((u32) *(u32 *)0xA4400010 >= 0xBU);
    }
    D_A4400000 = 0;
    __osViSwapContext();
}
