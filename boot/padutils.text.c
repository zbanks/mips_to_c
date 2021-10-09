struct _mips2c_stack_PadUtils_CheckCur {};          /* size 0x0 */

struct _mips2c_stack_PadUtils_CheckCurExact {};     /* size 0x0 */

struct _mips2c_stack_PadUtils_CheckPressed {};      /* size 0x0 */

struct _mips2c_stack_PadUtils_CheckReleased {};     /* size 0x0 */

struct _mips2c_stack_PadUtils_GetCurButton {};      /* size 0x0 */

struct _mips2c_stack_PadUtils_GetCurX {};           /* size 0x0 */

struct _mips2c_stack_PadUtils_GetCurY {};           /* size 0x0 */

struct _mips2c_stack_PadUtils_GetPressButton {};    /* size 0x0 */

struct _mips2c_stack_PadUtils_GetRelX {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_PadUtils_GetRelXImpl {};       /* size 0x0 */

struct _mips2c_stack_PadUtils_GetRelY {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_PadUtils_GetRelYImpl {};       /* size 0x0 */

struct _mips2c_stack_PadUtils_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_PadUtils_ResetPressRel {};     /* size 0x0 */

struct _mips2c_stack_PadUtils_SetRelXY {};          /* size 0x0 */

struct _mips2c_stack_PadUtils_UpdateRelXY {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80085150 {};              /* size 0x0 */

void PadUtils_Init(Input *input) {
    bzero((void *) input, 0x18);
}

void func_80085150(void) {

}

void PadUtils_ResetPressRel(Input *input) {
    input->press.button = 0;
    input->rel.button = 0;
}

u32 PadUtils_CheckCurExact(Input *input, u16 value) {
    return input->cur.button == (value & 0xFFFF);
}

u32 PadUtils_CheckCur(Input *input, u16 key) {
    s32 temp_a1;

    temp_a1 = key & 0xFFFF;
    return (input->cur.button & temp_a1) == temp_a1;
}

u32 PadUtils_CheckPressed(Input *input, u16 key) {
    s32 temp_a1;

    temp_a1 = key & 0xFFFF;
    return (input->press.button & temp_a1) == temp_a1;
}

u32 PadUtils_CheckReleased(Input *input, u16 key) {
    s32 temp_a1;

    temp_a1 = key & 0xFFFF;
    return (input->rel.button & temp_a1) == temp_a1;
}

u16 PadUtils_GetCurButton(Input *input) {
    return input->cur.button;
}

u16 PadUtils_GetPressButton(Input *input) {
    return input->press.button;
}

s8 PadUtils_GetCurX(Input *input) {
    return input->cur.stick_x;
}

s8 PadUtils_GetCurY(Input *input) {
    return input->cur.stick_y;
}

void PadUtils_SetRelXY(Input *input, s32 x, s32 y) {
    input->rel.stick_x = (s8) x;
    input->rel.stick_y = (s8) y;
}

s8 PadUtils_GetRelXImpl(Input *input) {
    return input->rel.stick_x;
}

s8 PadUtils_GetRelYImpl(Input *input) {
    return input->rel.stick_y;
}

s8 PadUtils_GetRelX(Input *input) {
    return PadUtils_GetRelXImpl(input);
}

s8 PadUtils_GetRelY(Input *input) {
    return PadUtils_GetRelYImpl(input);
}

void PadUtils_UpdateRelXY(Input *input) {
    s32 sp1C;
    s32 temp_v0;
    s32 phi_a1;
    s32 phi_a2;

    sp1C = PadUtils_GetCurX(input);
    temp_v0 = PadUtils_GetCurY(input);
    if (sp1C >= 8) {
        if (sp1C < 0x43) {
            phi_a1 = sp1C - 7;
        } else {
            phi_a1 = 0x3C;
        }
    } else {
        phi_a1 = 0;
        if (sp1C < -7) {
            if (sp1C >= -0x42) {
                phi_a1 = sp1C + 7;
            } else {
                phi_a1 = -0x3C;
            }
        }
    }
    if (temp_v0 >= 8) {
        if (temp_v0 < 0x43) {
            phi_a2 = temp_v0 - 7;
        } else {
            phi_a2 = 0x3C;
        }
    } else {
        phi_a2 = 0;
        if (temp_v0 < -7) {
            if (temp_v0 >= -0x42) {
                phi_a2 = temp_v0 + 7;
            } else {
                phi_a2 = -0x3C;
            }
        }
    }
    PadUtils_SetRelXY(input, phi_a1, phi_a2);
}
