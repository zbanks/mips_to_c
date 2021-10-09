CRASHED

struct _mips2c_stack_FaultDrawer_ColorToPrintColor {}; /* size 0x0 */

struct _mips2c_stack_FaultDrawer_DrawChar {};       /* size 0x0 */

struct _mips2c_stack_FaultDrawer_DrawText {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
    /* 0x18 */ char pad_18[0x8];
};                                                  /* size = 0x20 */

struct _mips2c_stack_FaultDrawer_FillScreen {
    /* 0x00 */ char pad_0[0x10];
    /* 0x10 */ s32 sp10;                            /* inferred */
    /* 0x14 */ char pad_14[0x8];                    /* maybe part of sp10[3]? */
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_FaultDrawer_FormatStringFunc {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_FaultDrawer_Init {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_FaultDrawer_Printf {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
    /* 0x18 */ char pad_18[0x8];
};                                                  /* size = 0x20 */

struct _mips2c_stack_FaultDrawer_SetBackColor {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_FaultDrawer_SetCharPad {};     /* size 0x0 */

struct _mips2c_stack_FaultDrawer_SetCursor {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_FaultDrawer_SetDrawerFB {};    /* size 0x0 */

struct _mips2c_stack_FaultDrawer_SetFontColor {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_FaultDrawer_SetForeColor {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_FaultDrawer_SetInputCallback {}; /* size 0x0 */

struct _mips2c_stack_FaultDrawer_SetOsSyncPrintfEnabled {}; /* size 0x0 */

struct _mips2c_stack_FaultDrawer_UpdatePrintColor {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

struct _mips2c_stack_FaultDrawer_VPrintf {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ s32 sp14;                            /* inferred */
};                                                  /* size = 0x18 */

FaultDrawer *sFaultDrawContext = &sFaultDrawerStruct;
FaultDrawer sFaultDrawerDefault = {
    (u16 *)0x803DA800,
    0x140,
    0xF0,
    0x10,
    0xDF,
    0x16,
    0x129,
    0xFFFF,
    0,
    0x16,
    0x10,
    (u32 *) sFaultDrawerFont,
    8,
    8,
    0,
    0,
    {1, 0xF801, 0x7C1, 0xFFC1, 0x3F, 0xF83F, 0x7FF, 0xFFFF, 0x7BDF, 0xB5AD},
    0,
    0,
    NULL,
};
FaultDrawer sFaultDrawerStruct;
u8 sFaultDrawerFont[8][128] = {
    {
        0,
        0xDF,
        0xFD,
        0,
        0xA,
        0xEE,
        0xFF,
        0xA0,
        0xD,
        0xF2,
        0x2D,
        0xD0,
        6,
        0x61,
        0x1D,
        0xC0,
        1,
        0x12,
        0x2D,
        0xD0,
        6,
        0x71,
        0x99,
        0,
        1,
        0x1E,
        0xED,
        0x10,
        7,
        0x7E,
        0xF7,
        0,
        1,
        0x56,
        0x29,
        0x90,
        5,
        0x58,
        0x97,
        0x60,
        0xD,
        0xD2,
        0x29,
        0x90,
        5,
        0x59,
        0x97,
        0x70,
        4,
        0xDF,
        0xFD,
        0x40,
        2,
        0x6E,
        0xF7,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        8,
        0xBF,
        0xFB,
        0,
        0xE,
        0xFF,
        0xFF,
        0xC0,
        0xB,
        0xF0,
        0xF,
        0xB0,
        0xF,
        0xF0,
        3,
        0x30,
        0xF,
        0xF0,
        0xF,
        0xF0,
        0xF,
        0xF0,
        2,
        0x20,
        0xC,
        0xFB,
        0xBF,
        0x60,
        0xF,
        0xFC,
        0xCE,
        0x20,
        0xD,
        0xD4,
        0x4F,
        0xF0,
        0xF,
        0xF0,
        2,
        0x20,
        0xF,
        0xF0,
        0xF,
        0xF0,
        0xF,
        0xF0,
        3,
        0x30,
        0xC,
        0xFB,
        0xBF,
        0x40,
        0xE,
        0xF7,
        0x77,
        0x40,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
    {
        0,
        0xDF,
        0xFD,
        0,
        0xA,
        0xEE,
        0xFF,
        0xA0,
        0xD,
        0xF2,
        0x2D,
        0xD0,
        6,
        0x61,
        0x1D,
        0xC0,
        1,
        0x12,
        0x2D,
        0xD0,
        6,
        0x71,
        0x99,
        0,
        1,
        0x1E,
        0xED,
        0x10,
        7,
        0x7E,
        0xF7,
        0,
        1,
        0x56,
        0x29,
        0x90,
        5,
        0x58,
        0x97,
        0x60,
        0xD,
        0xD2,
        0x29,
        0x90,
        5,
        0x59,
        0x97,
        0x70,
        4,
        0xDF,
        0xFD,
        0x40,
        2,
        0x6E,
        0xF7,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        8,
        0xBF,
        0xFB,
        0,
        0,
        0xD,
        0xE0,
        0,
        0xB,
        0xF0,
        0xF,
        0xB0,
        0,
        0x5D,
        0xE6,
        0,
        0xF,
        0xF0,
        0xF,
        0xF0,
        5,
        0x5C,
        0xC6,
        0x60,
        0xC,
        0xFB,
        0xBF,
        0x60,
        0x77,
        0x3F,
        0xF3,
        0x77,
        0xD,
        0xD4,
        0x4F,
        0xF0,
        0xBB,
        0x3F,
        0xF3,
        0xBB,
        0xF,
        0xF0,
        0xF,
        0xF0,
        9,
        0x9C,
        0xCA,
        0xA0,
        0xC,
        0xFB,
        0xBF,
        0x40,
        0,
        0x9D,
        0xEA,
        0,
        0,
        0,
        0,
        0,
        0,
        0xD,
        0xE0,
        0,
    },
    {
        4,
        0xC2,
        0x2C,
        0x40,
        2,
        0x8D,
        0x50,
        0x20,
        0xC,
        0xCA,
        0xAC,
        0xC0,
        0x21,
        0xF9,
        0x17,
        0x10,
        4,
        0xC2,
        0x2C,
        0x40,
        0x12,
        0x49,
        0x34,
        0,
        0,
        0x82,
        8,
        0,
        1,
        0x97,
        0x51,
        0x10,
        8,
        0x8A,
        0x88,
        0x80,
        4,
        0x61,
        0x52,
        0x41,
        0,
        0x80,
        8,
        0,
        0x43,
        0x11,
        0x75,
        0x30,
        0,
        0xA2,
        8,
        0,
        0x60,
        5,
        0x56,
        0,
        0,
        0,
        0,
        0,
        4,
        0x40,
        0,
        0x40,
        0,
        0x22,
        0x11,
        0,
        0,
        0,
        0,
        0x80,
        0,
        0xF,
        0xB0,
        0,
        0,
        0,
        8,
        0x80,
        4,
        0xD,
        0xA4,
        0,
        0,
        0,
        0x88,
        0,
        8,
        0xCD,
        0xE8,
        0x80,
        2,
        0x2A,
        0xA2,
        0x20,
        8,
        0xCD,
        0xE8,
        0x80,
        2,
        0xAA,
        0x22,
        0x20,
        4,
        0xD,
        0xA4,
        0,
        0xC,
        0xD1,
        0,
        0,
        0,
        0xF,
        0xB0,
        0,
        0x8C,
        0x51,
        0,
        0,
        0,
        0x22,
        0x11,
        0,
        0x81,
        0x10,
        0,
        0,
    },
    {
        0,
        0xDF,
        0xFD,
        0,
        0xA,
        0xEE,
        0xFF,
        0xA0,
        0xD,
        0xF2,
        0x2D,
        0xD0,
        6,
        0x61,
        0x1D,
        0xC0,
        1,
        0x12,
        0x2D,
        0xD0,
        6,
        0x71,
        0x99,
        0,
        1,
        0x1E,
        0xED,
        0x10,
        7,
        0x7E,
        0xF7,
        0,
        1,
        0x56,
        0x29,
        0x90,
        5,
        0x58,
        0x97,
        0x60,
        0xD,
        0xD2,
        0x29,
        0x90,
        5,
        0x59,
        0x97,
        0x70,
        4,
        0xDF,
        0xFD,
        0x40,
        2,
        0x6E,
        0xF7,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0x33,
        0x33,
        0,
        4,
        0x48,
        0x99,
        0x80,
        3,
        0x3C,
        0xC3,
        0x30,
        0,
        0xCD,
        0x10,
        0x88,
        3,
        0x3C,
        0xC3,
        0x30,
        2,
        0xBF,
        0x62,
        0xA8,
        0,
        0x33,
        0x33,
        0x20,
        1,
        0x10,
        0x4C,
        0x80,
        1,
        0x10,
        3,
        0x30,
        0,
        0x15,
        0xC8,
        0,
        3,
        0x3C,
        0xC3,
        0x30,
        2,
        0x67,
        0x32,
        0x20,
        0,
        0x3F,
        0xF3,
        0,
        4,
        0x40,
        0x99,
        0,
        0,
        0x88,
        0,
        0,
        0,
        0,
        0,
        0,
    },
    {
        5,
        0xDF,
        0xFD,
        0x10,
        7,
        0xFF,
        0xFF,
        0x60,
        0x1C,
        0xE0,
        0xE,
        0xC1,
        0xF,
        0xF0,
        9,
        0x90,
        0x1E,
        0xE1,
        0x16,
        0x61,
        0xF,
        0xF0,
        1,
        0x10,
        0x1E,
        0xF4,
        0x56,
        0x21,
        0xF,
        0xF6,
        0x67,
        0x10,
        0x1E,
        0xF2,
        0x36,
        0x61,
        0xF,
        0xF0,
        0x89,
        0x90,
        0x1E,
        0xF1,
        0xF,
        0xE1,
        0xF,
        0xF0,
        9,
        0x90,
        0x16,
        0xEC,
        0xCE,
        0x21,
        7,
        0xFB,
        0xBB,
        0x20,
        1,
        0x11,
        0x11,
        0x10,
        0,
        0,
        0,
        0,
        9,
        0xB6,
        0x6F,
        0xD0,
        0x27,
        0xD8,
        0x8E,
        0x60,
        9,
        0x92,
        0xED,
        0x10,
        0x2F,
        0xF0,
        0x2E,
        0xE0,
        9,
        0x9A,
        0xE5,
        0x10,
        0x2F,
        0xF6,
        0x2E,
        0xE0,
        9,
        0x9B,
        0x75,
        0x10,
        0x2F,
        0xD6,
        0x4E,
        0xE0,
        0xD,
        0xDA,
        0xE5,
        0x10,
        0x2F,
        0xD0,
        0x4E,
        0xE0,
        0xD,
        0xD2,
        0xED,
        0x10,
        0x2F,
        0xD0,
        0xE,
        0xE0,
        9,
        0xF6,
        0x6F,
        0x90,
        0x27,
        0xD9,
        0x9F,
        0x70,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
    {
        7,
        0xFF,
        0xFF,
        0,
        0x8F,
        0x71,
        0x1F,
        0xF0,
        0x2F,
        0xD0,
        0xF,
        0xF0,
        0x8F,
        0x71,
        0x1F,
        0xF0,
        0x2F,
        0xD0,
        7,
        0x70,
        0x8E,
        0x61,
        0x1E,
        0xE0,
        0x27,
        0xDD,
        0xDF,
        0x60,
        0x8E,
        0x69,
        0x1E,
        0xE0,
        0x27,
        0x76,
        0x4A,
        0xA0,
        0x8E,
        0xE9,
        0x9E,
        0xE0,
        0x2F,
        0xD0,
        0x6E,
        0x80,
        0x8A,
        0xE7,
        0xFE,
        0xA0,
        7,
        0xFA,
        0x8E,
        0x60,
        0x88,
        0x27,
        0x7A,
        0x80,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        7,
        0x7C,
        0xCF,
        0xF0,
        0x13,
        0x26,
        0x60,
        0x11,
        7,
        0x7C,
        0xCF,
        0xF0,
        3,
        0x76,
        0x65,
        0x10,
        2,
        0x39,
        0xD7,
        0x20,
        4,
        0x53,
        0x35,
        0x40,
        0,
        0x2F,
        0xF2,
        0,
        1,
        0x13,
        0x31,
        0x10,
        0,
        0x5F,
        0xB1,
        0,
        0,
        3,
        0x30,
        0,
        5,
        0x5E,
        0xE5,
        0x50,
        1,
        0x13,
        0x31,
        0x10,
        5,
        0x5E,
        0xED,
        0xD0,
        2,
        0x23,
        0x30,
        0,
        0,
        8,
        0x88,
        0x80,
        0x8A,
        0xAB,
        0xB8,
        0x88,
    },
    {
        0,
        0,
        0x11,
        0,
        0,
        4,
        0x45,
        0x10,
        4,
        0x62,
        0x33,
        0x20,
        0,
        0x44,
        1,
        0x10,
        4,
        0xC8,
        0x9A,
        0xA0,
        0,
        0xEE,
        0xAB,
        0x10,
        0xC,
        0xE6,
        0x67,
        0x20,
        0xE,
        0xF5,
        0x5F,
        0xB0,
        0xE,
        0xE0,
        6,
        0x60,
        0xB,
        0xF6,
        0x2B,
        0x90,
        0xE,
        0xE0,
        6,
        0x60,
        3,
        0xFC,
        0x89,
        0x90,
        4,
        0xEE,
        0xEE,
        0xA0,
        0,
        0x77,
        0x3B,
        0xB0,
        0,
        0,
        0,
        0,
        8,
        0x88,
        0x88,
        0,
        9,
        0x90,
        0,
        0,
        0,
        0x11,
        0x10,
        0,
        9,
        0x92,
        0x24,
        0x40,
        0,
        1,
        0x10,
        0,
        9,
        0x90,
        0x88,
        0,
        0x26,
        0xEF,
        0xDE,
        0x20,
        9,
        0x9B,
        0xB5,
        0x40,
        0x2E,
        0xC3,
        0x3C,
        0xE2,
        0xD,
        0x9A,
        0x25,
        0x50,
        0x2E,
        0xC3,
        0x3C,
        0xE2,
        0xD,
        0xDA,
        0xA5,
        0x50,
        0x2E,
        0xC3,
        0x3C,
        0xE2,
        9,
        0xD6,
        0xED,
        0x10,
        0x26,
        0xCB,
        0xBC,
        0x62,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
    {
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        1,
        0x10,
        0,
        5,
        0xFB,
        0xFF,
        0xE0,
        0x8E,
        0x61,
        0x16,
        0xE8,
        0xF,
        0xF4,
        3,
        0x30,
        0x8F,
        0x71,
        0x17,
        0xF8,
        7,
        0xFC,
        0x8B,
        0x30,
        0x8E,
        0x69,
        0x96,
        0xE8,
        5,
        0x73,
        0x3B,
        0xA0,
        0x8A,
        0x6D,
        0xD6,
        0xA8,
        0xD,
        0xD8,
        0x8A,
        0x20,
        8,
        0xA7,
        0x79,
        0xB2,
        1,
        0x10,
        2,
        0x20,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0x80,
        0x8A,
        1,
        0x10,
        0,
        0,
        0,
        8,
        0,
        0x80,
        0xA1,
        0x10,
        0,
        7,
        0x74,
        0x4F,
        0x70,
        0x80,
        0xA9,
        0x90,
        0,
        2,
        0x31,
        0xDF,
        0x20,
        0x84,
        0xE6,
        0,
        4,
        0,
        0x27,
        0xDA,
        0x20,
        0xC8,
        0xAA,
        0x4C,
        0x40,
        0,
        0x57,
        0x3B,
        0x20,
        0,
        0xA1,
        0x18,
        0,
        5,
        0x54,
        0x6F,
        0x50,
        0,
        0xA9,
        0x98,
        0,
        2,
        0x22,
        0x20,
        0x80,
        2,
        0,
        0x18,
        0x88,
    },
}; /* const */

void FaultDrawer_SetOsSyncPrintfEnabled(u32 enabled) {
    sFaultDrawContext->osSyncPrintfEnabled = (u8) enabled;
}

/*
Failed to decompile function FaultDrawer_DrawRecImpl:

Label L80083F94 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void FaultDrawer_DrawChar(s8 c) {
    FaultDrawer *temp_v1;
    s32 temp_a0;
    s32 temp_a1_2;
    s32 temp_t3;
    u16 temp_a1;
    u16 temp_t1;
    u16 temp_v0;
    u16 temp_v0_3;
    u8 temp_a0_2;
    u8 temp_v0_2;
    s32 phi_a0;
    u32 phi_a2;
    u32 *phi_a3;
    FaultDrawer *phi_v1;
    u16 *phi_t0;
    s32 phi_t3;
    s32 phi_a0_2;
    s32 phi_a1;
    s32 phi_v0;
    FaultDrawer *phi_v1_2;
    FaultDrawer *phi_v1_3;
    u16 phi_t1;
    FaultDrawer *phi_v1_4;

    temp_a0 = c & 0xFF;
    temp_v1 = sFaultDrawContext;
    temp_a1 = temp_v1->cursorY;
    temp_t1 = temp_v1->w;
    temp_v0 = temp_v1->cursorX;
    phi_a3 = &temp_v1->font[((temp_a0 / 8) * 0x10) + ((s32) (temp_a0 & 4) >> 2)];
    phi_t0 = &(&temp_v1->fb[temp_t1 * temp_a1])[temp_v0];
    phi_v1_2 = temp_v1;
    phi_t1 = temp_t1;
    if ((s32) temp_v0 >= (s32) temp_v1->xStart) {
        temp_a0_2 = temp_v1->charW;
        phi_a0 = (s32) temp_a0_2;
        if (((s32) temp_v1->xEnd >= ((temp_a0_2 + temp_v0) - 1)) && ((s32) temp_a1 >= (s32) temp_v1->yStart)) {
            temp_v0_2 = temp_v1->charH;
            phi_v0 = (s32) temp_v0_2;
            if ((s32) temp_v1->yEnd >= ((temp_v0_2 + temp_a1) - 1)) {
                phi_a1 = 0;
                if ((s32) temp_v0_2 > 0) {
                    do {
                        phi_a2 = 0x10000000 << (temp_a0 % 4);
                        phi_v1 = phi_v1_2;
                        phi_t3 = 0;
                        phi_a0_2 = phi_a0;
                        if (phi_a0 > 0) {
                            do {
                                phi_v1_3 = phi_v1;
                                if ((phi_a2 & *phi_a3) != 0) {
                                    *(phi_t0 + (phi_t3 * 2)) = phi_v1->foreColor;
                                    phi_v1_4 = sFaultDrawContext;
                                    goto block_11;
                                }
                                temp_v0_3 = phi_v1->backColor;
                                if ((temp_v0_3 & 1) != 0) {
                                    *(phi_t0 + (phi_t3 * 2)) = temp_v0_3;
                                    phi_v1_4 = sFaultDrawContext;
block_11:
                                    phi_a0_2 = (s32) phi_v1_4->charW;
                                    phi_v1_3 = phi_v1_4;
                                }
                                temp_t3 = phi_t3 + 1;
                                phi_a2 = phi_a2 >> 4;
                                phi_v1 = phi_v1_3;
                                phi_t3 = temp_t3;
                                phi_a0 = phi_a0_2;
                                phi_v1_2 = phi_v1_3;
                            } while (temp_t3 < phi_a0_2);
                            phi_v0 = (s32) phi_v1_3->charH;
                            phi_t1 = phi_v1_3->w;
                        }
                        temp_a1_2 = phi_a1 + 1;
                        phi_a3 += 8;
                        phi_t0 += phi_t1 * 2;
                        phi_a1 = temp_a1_2;
                    } while (temp_a1_2 < phi_v0);
                }
            }
        }
    }
}

s32 FaultDrawer_ColorToPrintColor(u16 color) {
    FaultDrawer *temp_a1;
    s32 temp_a0;
    s32 temp_v1;
    u16 *phi_a0;
    s32 phi_v1;

    temp_a0 = color & 0xFFFF;
    temp_a1 = sFaultDrawContext;
    if (temp_a0 == temp_a1->printColors[0]) {
        return 0;
    }
    phi_a0 = &temp_a1->w;
    phi_v1 = 2;
    if (temp_a0 == temp_a1->printColors[1]) {
        return 1;
    }
loop_4:
    if (temp_a0 == phi_a0->unk_20) {
        return phi_v1;
    }
    if (temp_a0 == phi_a0->unk_22) {
        return phi_v1 + 1;
    }
    if (temp_a0 == phi_a0->unk_24) {
        return phi_v1 + 2;
    }
    if (temp_a0 == phi_a0->unk_26) {
        return phi_v1 + 3;
    }
    temp_v1 = phi_v1 + 4;
    phi_a0 += 8;
    phi_v1 = temp_v1;
    if (temp_v1 == 0xA) {
        return -1;
    }
    goto loop_4;
}

void FaultDrawer_UpdatePrintColor(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_t1;
    void *phi_t1;

    phi_t1 = sp;
    do {
        temp_t1 = phi_t1 - 8;
        temp_t1->unk_0 = 0xFFFA5A5A;
        temp_t1->unk_4 = 0xFFFA5A5A;
        phi_t1 = temp_t1;
    } while (temp_t1 != sp);
    if (sFaultDrawContext->osSyncPrintfEnabled != 0) {
        osSyncPrintf("\x1b[m");
        temp_v0 = FaultDrawer_ColorToPrintColor(sFaultDrawContext->foreColor);
        if ((temp_v0 >= 0) && (temp_v0 < 8)) {
            osSyncPrintf("\x1b[3%dm", temp_v0);
        }
        temp_v0_2 = FaultDrawer_ColorToPrintColor(sFaultDrawContext->backColor);
        if ((temp_v0_2 >= 0) && (temp_v0_2 < 8)) {
            osSyncPrintf("\x1b[4%dm", temp_v0_2);
        }
    }
}

void FaultDrawer_SetForeColor(u16 color) {
    void *temp_t8;
    void *phi_t8;

    phi_t8 = sp;
    do {
        temp_t8 = phi_t8 - 8;
        temp_t8->unk_0 = 0xFFFA5A5A;
        temp_t8->unk_4 = 0xFFFA5A5A;
        phi_t8 = temp_t8;
    } while (temp_t8 != sp);
    sFaultDrawContext->foreColor = color & 0xFFFF;
    FaultDrawer_UpdatePrintColor();
}

void FaultDrawer_SetBackColor(u16 color) {
    void *temp_t8;
    void *phi_t8;

    phi_t8 = sp;
    do {
        temp_t8 = phi_t8 - 8;
        temp_t8->unk_0 = 0xFFFA5A5A;
        temp_t8->unk_4 = 0xFFFA5A5A;
        phi_t8 = temp_t8;
    } while (temp_t8 != sp);
    sFaultDrawContext->backColor = color & 0xFFFF;
    FaultDrawer_UpdatePrintColor();
}

void FaultDrawer_SetFontColor(u16 color) {
    void *temp_t7;
    void *phi_t7;

    phi_t7 = sp;
    do {
        temp_t7 = phi_t7 - 8;
        temp_t7->unk_0 = 0xFFFA5A5A;
        temp_t7->unk_4 = 0xFFFA5A5A;
        phi_t7 = temp_t7;
    } while (temp_t7 != sp);
    FaultDrawer_SetForeColor(((color & 0xFFFF) | 1) & 0xFFFF);
}

void FaultDrawer_SetCharPad(s8 padW, s8 padH) {
    sFaultDrawContext->charWPad = padW;
    sFaultDrawContext->charHPad = padH;
}

void FaultDrawer_SetCursor(s32 x, s32 y) {
    FaultDrawer *temp_v0;
    void *temp_t3;
    void *phi_t3;
    FaultDrawer *phi_v0;

    phi_t3 = sp;
    do {
        temp_t3 = phi_t3 - 8;
        temp_t3->unk_0 = 0xFFFA5A5A;
        temp_t3->unk_4 = 0xFFFA5A5A;
        phi_t3 = temp_t3;
    } while (temp_t3 != sp);
    temp_v0 = sFaultDrawContext;
    phi_v0 = temp_v0;
    if (temp_v0->osSyncPrintfEnabled != 0) {
        osSyncPrintf("\x1b[%d;%dH", (s32) (y - temp_v0->yStart) / (s32) (temp_v0->charH + temp_v0->charHPad), (s32) (x - temp_v0->xStart) / (s32) (temp_v0->charW + temp_v0->charWPad));
        phi_v0 = sFaultDrawContext;
    }
    phi_v0->cursorX = (u16) x;
    sFaultDrawContext->cursorY = (u16) y;
}

void FaultDrawer_FillScreen(void) {
    s32 sp10;
    FaultDrawer *temp_v0;
    FaultDrawer *temp_v0_2;
    void *temp_t0;
    void *phi_t0;
    FaultDrawer *phi_v0;

    phi_t0 = sp;
    do {
        temp_t0 = phi_t0 - 8;
        temp_t0->unk_0 = 0xFFFA5A5A;
        temp_t0->unk_4 = 0xFFFA5A5A;
        phi_t0 = temp_t0;
    } while (temp_t0 != sp);
    temp_v0 = sFaultDrawContext;
    phi_v0 = temp_v0;
    if (temp_v0->osSyncPrintfEnabled != 0) {
        osSyncPrintf("\x1b[2J");
        phi_v0 = sFaultDrawContext;
    }
    sp10 = phi_v0->backColor | 1;
    FaultDrawer_DrawRecImpl((s32) phi_v0->xStart, (s32) phi_v0->yStart, (s32) phi_v0->xEnd, (s32) phi_v0->yEnd);
    temp_v0_2 = sFaultDrawContext;
    FaultDrawer_SetCursor((s32) temp_v0_2->xStart, (s32) temp_v0_2->yStart);
}

FaultDrawer *FaultDrawer_FormatStringFunc(FaultDrawer *arg, s8 *str, s32 count) {
    FaultDrawer *temp_v0;
    FaultDrawer *temp_v0_2;
    FaultDrawer *temp_v0_3;
    FaultDrawer *temp_v0_4;
    FaultDrawer *temp_v0_5;
    s32 temp_s2;
    u8 temp_a0;
    u8 temp_a1;
    void (*temp_v1)();
    void *temp_t4;
    void *phi_t4;
    s8 *phi_s1;
    s32 phi_s2;

    phi_t4 = sp;
    do {
        temp_t4 = phi_t4 - 8;
        temp_t4->unk_0 = 0xFFFA5A5A;
        temp_t4->unk_4 = 0xFFFA5A5A;
        phi_t4 = temp_t4;
    } while (temp_t4 != sp);
    phi_s1 = str;
    phi_s2 = count;
    if (count != 0) {
        do {
            temp_v0 = sFaultDrawContext;
            if (temp_v0->escCode != 0) {
                temp_v0->escCode = 0;
                temp_a1 = *phi_s1;
                if (((s32) temp_a1 >= 0x31) && ((s32) temp_a1 < 0x3A)) {
                    FaultDrawer_SetForeColor((sFaultDrawContext + (temp_a1 * 2))->unk_-40);
                }
            } else {
                temp_a0 = *phi_s1;
                if (temp_a0 != 0xA) {
                    if (temp_a0 != 0x1A) {
                        if (temp_v0->osSyncPrintfEnabled != 0) {
                            osSyncPrintf("%c", temp_a0);
                        }
                        FaultDrawer_DrawChar((s8) *phi_s1);
                        temp_v0_2 = sFaultDrawContext;
                        temp_v0_2->cursorX = temp_v0_2->cursorX + temp_v0_2->charW + temp_v0_2->charWPad;
                    } else {
                        temp_v0->escCode = 1;
                    }
                } else {
                    if (temp_v0->osSyncPrintfEnabled != 0) {
                        osSyncPrintf("\n", temp_a0);
                    }
                    sFaultDrawContext->cursorX = sFaultDrawContext->w;
                }
            }
            temp_v0_3 = sFaultDrawContext;
            if ((s32) temp_v0_3->cursorX >= (temp_v0_3->xEnd - temp_v0_3->charW)) {
                temp_v0_3->cursorX = temp_v0_3->xStart;
                temp_v0_4 = sFaultDrawContext;
                temp_v0_4->cursorY = temp_v0_4->cursorY + temp_v0_4->charH + temp_v0_4->charHPad;
                temp_v0_5 = sFaultDrawContext;
                if ((s32) temp_v0_5->cursorY >= (temp_v0_5->yEnd - temp_v0_5->charH)) {
                    temp_v1 = temp_v0_5->inputCallback;
                    if (temp_v1 != 0) {
                        temp_v1();
                        FaultDrawer_FillScreen();
                    }
                    sFaultDrawContext->cursorY = sFaultDrawContext->yStart;
                }
            }
            temp_s2 = phi_s2 - 1;
            phi_s1 += 1;
            phi_s2 = temp_s2;
        } while (temp_s2 != 0);
    }
    osWritebackDCacheAll();
    return arg;
}

void FaultDrawer_VPrintf(s8 *str, s8 *args) {
    void *temp_t7;
    void *phi_t7;

    phi_t7 = sp;
    do {
        temp_t7 = phi_t7 - 8;
        temp_t7->unk_0 = 0xFFFA5A5A;
        temp_t7->unk_4 = 0xFFFA5A5A;
        phi_t7 = temp_t7;
    } while (temp_t7 != sp);
    _Printf((void *(*)(void *, s8 *, u32)) FaultDrawer_FormatStringFunc, (void *) sFaultDrawContext, str, args);
}

void FaultDrawer_Printf(s8 *fmt, s8 arg1, ? arg2, ? arg3, ...) {
    void *temp_t7;
    void *phi_t7;

    phi_t7 = sp;
    do {
        temp_t7 = phi_t7 - 8;
        temp_t7->unk_0 = 0xFFFA5A5A;
        temp_t7->unk_4 = 0xFFFA5A5A;
        phi_t7 = temp_t7;
    } while (temp_t7 != sp);
    FaultDrawer_VPrintf(fmt, &arg1);
}

void FaultDrawer_DrawText(s32 x, s32 y, s8 *fmt, s8 arg3, ...) {
    void *temp_t7;
    void *phi_t7;

    phi_t7 = sp;
    do {
        temp_t7 = phi_t7 - 8;
        temp_t7->unk_0 = 0xFFFA5A5A;
        temp_t7->unk_4 = 0xFFFA5A5A;
        phi_t7 = temp_t7;
    } while (temp_t7 != sp);
    FaultDrawer_SetCursor(x, y);
    FaultDrawer_VPrintf(fmt, &arg3);
}

void FaultDrawer_SetDrawerFB(void *fb, u16 w, u16 h) {
    sFaultDrawContext->fb = (u16 *) fb;
    sFaultDrawContext->w = w & 0xFFFF;
    sFaultDrawContext->h = h & 0xFFFF;
}

void FaultDrawer_SetInputCallback(void (*func)()) {
    sFaultDrawContext->inputCallback = func;
}

void FaultDrawer_Init(void) {
    void *temp_t2;
    void *phi_t2;

    phi_t2 = sp;
    do {
        temp_t2 = phi_t2 - 8;
        temp_t2->unk_0 = 0xFFFA5A5A;
        temp_t2->unk_4 = 0xFFFA5A5A;
        phi_t2 = temp_t2;
    } while (temp_t2 != sp);
    sFaultDrawContext = &sFaultDrawerStruct;
    bcopy((void *) &sFaultDrawerDefault, (void *) &sFaultDrawerStruct, 0x3CU);
    sFaultDrawContext->fb = (osMemSize | 0x80000000) + 0xFFFDA800;
}
