struct _mips2c_stack_func_801323D0 {};              /* size 0x0 */

struct _mips2c_stack_func_80132428 {};              /* size 0x0 */

struct _mips2c_stack_func_80132494 {};              /* size 0x0 */

struct _mips2c_stack_func_801326B8 {};              /* size 0x0 */

struct _mips2c_stack_func_801328F0 {};              /* size 0x0 */

struct _mips2c_stack_func_80132920 {};              /* size 0x0 */

struct _mips2c_stack_func_80132938 {};              /* size 0x0 */

struct _mips2c_stack_func_80132954 {};              /* size 0x0 */

struct _mips2c_stack_func_8013296C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80132A18 {};              /* size 0x0 */

struct _mips2c_stack_func_80132A3C {};              /* size 0x0 */

struct _mips2c_stack_func_80132A80 {};              /* size 0x0 */

struct _mips2c_stack_func_80132AD8 {};              /* size 0x0 */

struct _mips2c_stack_func_80132B24 {};              /* size 0x0 */

struct _mips2c_stack_func_80132B84 {};              /* size 0x0 */

struct _mips2c_stack_func_80132D70 {};              /* size 0x0 */

struct _mips2c_stack_func_80132E9C {};              /* size 0x0 */

struct _mips2c_stack_func_80132FDC {};              /* size 0x0 */

struct _mips2c_stack_func_80133000 {};              /* size 0x0 */

struct _mips2c_stack_func_80133038 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

? func_801323D0(s32 arg0, void **arg1, ? arg2);     /* static */
? func_80132428(s32 arg0, void **arg1, ? arg2);     /* static */
? func_80132494(s32 arg0, void **arg1, ? arg2);     /* static */
? func_801326B8(s32 arg0, void **arg1, ? arg2);     /* static */
? func_801328F0(s32 arg0, void **arg1, void *arg2); /* static */
? func_80132920(s32 arg0, ? arg1, void *arg2);      /* static */
? func_80132938(s32 arg0, ? arg1, void *arg2);      /* static */
? func_80132954(s32 arg0, ? arg1, ? arg2);          /* static */
? func_8013296C(GlobalContext *arg0, void **arg1, ? arg2); /* static */
? func_80132A18(s32 arg0, void **arg1, void *arg2); /* static */
? func_80132A3C(void *arg0, void **arg1, ? arg2);   /* static */
? func_80132A80(void *arg0, void **arg1, ? arg2);   /* static */
? func_80132AD8(s32 arg0, void **arg1, ? arg2);     /* static */
? func_80132B24(s32 arg0, void **arg1, ? arg2);     /* static */
? func_80132B84(s32 arg0, void **arg1, void *arg2); /* static */
? func_80132D70(s32 arg0, void **arg1, ? arg2);     /* static */
? func_80132E9C(s32 arg0, void **arg1, ? arg2);     /* static */
? func_80132FDC(s32 arg0, void **arg1, ? arg2);     /* static */
? func_80133000(s32 arg0, void **arg1, ? arg2);     /* static */
static ? D_801C5C9C;                                /* unable to generate initializer */
void *D_801C5C50 = (void *) func_801323D0;
u8 gItemSlots[80] = {
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    0xA,
    0xB,
    0xC,
    0xD,
    0xE,
    0xF,
    0x10,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    5,
    5,
    5,
    5,
    5,
    0xB,
    0xB,
    0x11,
    0x11,
    0x11,
    0x1D,
    0x23,
    0x29,
    0x2F,
    0x28,
    0x26,
    0x19,
    0x20,
    0x1E,
    0x2C,
    0x24,
    0x25,
    0x18,
    0x27,
    0x1C,
    0x2B,
    0x21,
    0x2A,
    0x2D,
    0x1B,
    0x1F,
    0x1A,
    0x22,
    0x2E,
    1,
    1,
    1,
    0,
    0,
    0,
};
SaveContext gSaveContext;

? func_801323D0(s32 arg0, void **arg1, ? arg2) {
    s32 temp_a0;
    void *temp_v1;

    temp_v1 = *arg1;
    temp_a0 = ((temp_v1->unk_1 << 8) | temp_v1->unk_2) & 0xFFFF;
    if ((gSaveContext.weekEventReg[temp_a0 >> 8] & temp_a0 & 0xFF) != 0) {
        *arg1 = temp_v1 + temp_v1->unk_3;
    }
    return 0;
}

? func_80132428(s32 arg0, void **arg1, ? arg2) {
    s32 temp_a0;
    void *temp_v1;

    temp_v1 = *arg1;
    temp_a0 = ((temp_v1->unk_1 << 8) | temp_v1->unk_2) & 0xFFFF;
    if ((gSaveContext.weekEventReg[temp_a0 >> 8] & temp_a0 & 0xFF) != 0) {
        *arg1 = temp_v1 + (s16) ((temp_v1->unk_3 << 8) | temp_v1->unk_4);
    }
    return 0;
}

? func_80132494(s32 arg0, void **arg1, ? arg2) {
    f32 temp_f16;
    f32 temp_f4;
    f32 temp_f6;
    s32 temp_t0;
    u8 temp_t1;
    u8 temp_t6;
    u8 temp_t7;
    void *temp_a0;
    f32 phi_f6;
    f32 phi_f16;
    f32 phi_f4;
    s32 phi_v0;

    temp_a0 = *arg1;
    temp_t6 = temp_a0->unk_1;
    temp_f6 = (f32) temp_t6;
    phi_f6 = temp_f6;
    phi_v0 = 0;
    if ((s32) temp_t6 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_t7 = temp_a0->unk_2;
    temp_f16 = (f32) temp_t7;
    phi_f16 = temp_f16;
    if ((s32) temp_t7 < 0) {
        phi_f16 = temp_f16 + 4294967296.0f;
    }
    temp_t1 = temp_a0->unk_4;
    temp_f4 = (f32) temp_t1;
    phi_f4 = temp_f4;
    if ((s32) temp_t1 < 0) {
        phi_f4 = temp_f4 + 4294967296.0f;
    }
    temp_t0 = (gSaveContext.time - 0x3FFC) & 0xFFFF;
    if ((temp_t0 >= (((u32) (((phi_f6 * 60.0f) + phi_f16) * 45.5f) - 0x3FFC) & 0xFFFF)) && ((((u32) ((((f32) temp_a0->unk_3 * 60.0f) + phi_f4) * 45.5f) - 0x3FFD) & 0xFFFF) >= temp_t0)) {
        phi_v0 = 1;
    }
    if (phi_v0 == 1) {
        *arg1 = temp_a0 + temp_a0->unk_5;
    }
    return 0;
}

? func_801326B8(s32 arg0, void **arg1, ? arg2) {
    f32 temp_f16;
    f32 temp_f4;
    f32 temp_f6;
    s32 temp_t0;
    u8 temp_t1;
    u8 temp_t6;
    u8 temp_t7;
    void *temp_a0;
    f32 phi_f6;
    f32 phi_f16;
    f32 phi_f4;
    s32 phi_v0;

    temp_a0 = *arg1;
    temp_t6 = temp_a0->unk_1;
    temp_f6 = (f32) temp_t6;
    phi_f6 = temp_f6;
    phi_v0 = 0;
    if ((s32) temp_t6 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_t7 = temp_a0->unk_2;
    temp_f16 = (f32) temp_t7;
    phi_f16 = temp_f16;
    if ((s32) temp_t7 < 0) {
        phi_f16 = temp_f16 + 4294967296.0f;
    }
    temp_t1 = temp_a0->unk_4;
    temp_f4 = (f32) temp_t1;
    phi_f4 = temp_f4;
    if ((s32) temp_t1 < 0) {
        phi_f4 = temp_f4 + 4294967296.0f;
    }
    temp_t0 = (gSaveContext.time - 0x3FFC) & 0xFFFF;
    if ((temp_t0 >= (((u32) (((phi_f6 * 60.0f) + phi_f16) * 45.5f) - 0x3FFC) & 0xFFFF)) && ((((u32) ((((f32) temp_a0->unk_3 * 60.0f) + phi_f4) * 45.5f) - 0x3FFD) & 0xFFFF) >= temp_t0)) {
        phi_v0 = 1;
    }
    if (phi_v0 == 1) {
        *arg1 = temp_a0 + (s16) ((temp_a0->unk_5 << 8) | temp_a0->unk_6);
    }
    return 0;
}

? func_801328F0(s32 arg0, void **arg1, void *arg2) {
    void *temp_v1;

    temp_v1 = *arg1;
    arg2->unk_C = 1;
    arg2->unk_0 = (s8) ((temp_v1->unk_1 << 8) | temp_v1->unk_2);
    return 1;
}

? func_80132920(s32 arg0, ? arg1, void *arg2) {
    arg2->unk_C = 0;
    return 1;
}

? func_80132938(s32 arg0, ? arg1, void *arg2) {
    arg2->unk_C = 1;
    return 1;
}

? func_80132954(s32 arg0, ? arg1, ? arg2) {
    return 0;
}

? func_8013296C(GlobalContext *arg0, void **arg1, ? arg2) {
    void *sp1C;
    u8 temp_v1;
    void *temp_v0;
    void *phi_v0;

    temp_v0 = *arg1;
    temp_v1 = temp_v0->unk_1;
    phi_v0 = temp_v0;
    if (((temp_v1 != 0) || (gSaveContext.inventory.items[gItemSlots[0x2D]] != 0x2D)) && ((temp_v1 != 1) || (gSaveContext.inventory.items[gItemSlots[0x2F]] != 0x2F))) {
        if (temp_v1 == 2) {
            sp1C = temp_v0;
            if (Player_GetMask(arg0) == 7) {
                phi_v0 = *arg1;
                goto block_7;
            }
        }
    } else {
block_7:
        *arg1 = phi_v0 + (*arg1)->unk_2;
    }
    return 0;
}

? func_80132A18(s32 arg0, void **arg1, void *arg2) {
    arg2->unk_C = 1;
    arg2->unk_0 = (u8) (*arg1)->unk_1;
    return 1;
}

? func_80132A3C(void *arg0, void **arg1, ? arg2) {
    void *temp_v1;

    temp_v1 = *arg1;
    if ((s16) ((temp_v1->unk_1 << 8) | temp_v1->unk_2) != arg0->unk_A4) {
        *arg1 = temp_v1 + temp_v1->unk_3;
    }
    return 0;
}

? func_80132A80(void *arg0, void **arg1, ? arg2) {
    void *temp_v1;

    temp_v1 = *arg1;
    if ((s16) ((temp_v1->unk_1 << 8) | temp_v1->unk_2) != arg0->unk_A4) {
        *arg1 = temp_v1 + (s16) ((temp_v1->unk_3 << 8) | temp_v1->unk_4);
    }
    return 0;
}

? func_80132AD8(s32 arg0, void **arg1, ? arg2) {
    void *temp_v1;

    temp_v1 = *arg1;
    if ((s16) ((temp_v1->unk_1 << 8) | temp_v1->unk_2) != *(&gSaveContext + 0x1A)) {
        *arg1 = temp_v1 + temp_v1->unk_3;
    }
    return 0;
}

? func_80132B24(s32 arg0, void **arg1, ? arg2) {
    void *temp_v1;

    temp_v1 = *arg1;
    if ((s16) ((temp_v1->unk_1 << 8) | temp_v1->unk_2) != *(&gSaveContext + 0x1A)) {
        *arg1 = temp_v1 + (s16) ((temp_v1->unk_3 << 8) | temp_v1->unk_4);
    }
    return 0;
}

? func_80132B84(s32 arg0, void **arg1, void *arg2) {
    f32 temp_f16;
    f32 temp_f4;
    f32 temp_f6;
    u8 temp_t0;
    u8 temp_t6;
    u8 temp_t7;
    void *temp_v1;
    f32 phi_f6;
    f32 phi_f16;
    f32 phi_f4;

    temp_v1 = *arg1;
    temp_t6 = temp_v1->unk_1;
    temp_f6 = (f32) temp_t6;
    phi_f6 = temp_f6;
    if ((s32) temp_t6 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_t7 = temp_v1->unk_2;
    temp_f16 = (f32) temp_t7;
    phi_f16 = temp_f16;
    if ((s32) temp_t7 < 0) {
        phi_f16 = temp_f16 + 4294967296.0f;
    }
    temp_t0 = temp_v1->unk_4;
    temp_f4 = (f32) temp_t0;
    phi_f4 = temp_f4;
    if ((s32) temp_t0 < 0) {
        phi_f4 = temp_f4 + 4294967296.0f;
    }
    arg2->unk_4 = (s32) (((u32) (((phi_f6 * 60.0f) + phi_f16) * 45.5f) - 0x3FFC) & 0xFFFF);
    arg2->unk_0 = (u8) temp_v1->unk_5;
    arg2->unk_8 = (s32) (((u32) ((((f32) temp_v1->unk_3 * 60.0f) + phi_f4) * 45.5f) - 0x3FFD) & 0xFFFF);
    arg2->unk_C = 1;
    return 1;
}

? func_80132D70(s32 arg0, void **arg1, ? arg2) {
    f32 temp_f18;
    f32 temp_f6;
    u8 temp_t6;
    u8 temp_t7;
    void *temp_v1;
    f32 phi_f6;
    f32 phi_f18;

    temp_v1 = *arg1;
    temp_t6 = temp_v1->unk_1;
    temp_f6 = (f32) temp_t6;
    phi_f6 = temp_f6;
    if ((s32) temp_t6 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_t7 = temp_v1->unk_2;
    temp_f18 = (f32) temp_t7;
    phi_f18 = temp_f18;
    if ((s32) temp_t7 < 0) {
        phi_f18 = temp_f18 + 4294967296.0f;
    }
    if (((gSaveContext.time - 0x3FFC) & 0xFFFF) < (((u32) (((phi_f6 * 60.0f) + phi_f18) * 45.5f) - 0x3FFC) & 0xFFFF)) {
        *arg1 = temp_v1 + temp_v1->unk_3;
    }
    return 0;
}

? func_80132E9C(s32 arg0, void **arg1, ? arg2) {
    f32 temp_f18;
    f32 temp_f6;
    u8 temp_t6;
    u8 temp_t7;
    void *temp_v1;
    f32 phi_f6;
    f32 phi_f18;

    temp_v1 = *arg1;
    temp_t6 = temp_v1->unk_1;
    temp_f6 = (f32) temp_t6;
    phi_f6 = temp_f6;
    if ((s32) temp_t6 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_t7 = temp_v1->unk_2;
    temp_f18 = (f32) temp_t7;
    phi_f18 = temp_f18;
    if ((s32) temp_t7 < 0) {
        phi_f18 = temp_f18 + 4294967296.0f;
    }
    if (((gSaveContext.time - 0x3FFC) & 0xFFFF) < (((u32) (((phi_f6 * 60.0f) + phi_f18) * 45.5f) - 0x3FFC) & 0xFFFF)) {
        *arg1 = temp_v1 + (s16) ((temp_v1->unk_3 << 8) | temp_v1->unk_4);
    }
    return 0;
}

? func_80132FDC(s32 arg0, void **arg1, ? arg2) {
    void *temp_v1;

    temp_v1 = *arg1;
    *arg1 = temp_v1 + temp_v1->unk_1;
    return 0;
}

? func_80133000(s32 arg0, void **arg1, ? arg2) {
    void *temp_v1;

    temp_v1 = *arg1;
    *arg1 = temp_v1 + (s16) ((temp_v1->unk_1 << 8) | temp_v1->unk_2);
    return 0;
}

s32 func_80133038(GlobalContext *globalCtx, void *arg1, struct_80133038_arg2 *arg2) {
    u8 temp_s0;
    u8 temp_v0;

    do {
        temp_v0 = *arg1;
        temp_s0 = *(&D_801C5C9C + temp_v0);
        arg1 += temp_s0;
    } while (((s32 (*)(GlobalContext *, void **, struct_80133038_arg2 *)) (&D_801C5C50)[temp_v0])(globalCtx, &arg1, arg2) == 0);
    return arg2->unk_C;
}
