struct _mips2c_stack_func_801651B0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80165224 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80165288 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8016537C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80165438 {};              /* size 0x0 */

struct _mips2c_stack_func_80165444 {};              /* size 0x0 */

u32 func_801651B0(void *arg0, u32 arg1);            /* static */
void func_80165224(void *arg0, u32 *arg1, s32 arg2); /* static */
? func_80165288(void *arg0);                        /* static */
? func_8016537C(void *arg0);                        /* static */
void func_80165444(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4); /* static */

u32 func_801651B0(void *arg0, u32 arg1) {
    s32 temp_a0;
    u32 temp_v1;
    void *temp_v0;

    temp_a0 = arg0->unk_0;
    arg0 = arg0;
    temp_v0 = Lib_PhysicalToVirtualNull((void *) (temp_a0 & 0xFFFFFF));
    if ((temp_v0 != 0) && (temp_v1 = arg0->unk_4, ((arg1 < temp_v1) == 0)) && (arg1 < (u32) arg0->unk_8)) {
        return (temp_v0 - temp_v1) + arg1;
    }
    return arg1;
}

void func_80165224(void *arg0, u32 *arg1, s32 arg2) {
    u32 *temp_s0;
    u32 *phi_s0;

    phi_s0 = arg1;
    if (arg2 > 0) {
        do {
            temp_s0 = phi_s0 + 4;
            temp_s0->unk_-4 = func_801651B0(arg0, *phi_s0);
            phi_s0 = temp_s0;
        } while (temp_s0 != ((arg2 * 4) + arg1));
    }
}

? func_80165288(void *arg0) {
    void *sp28;
    s32 temp_v1;
    s8 temp_v0_3;
    u8 temp_v0_2;
    void *temp_v0;

    if (arg0->unk_C == 0) {
        return 3;
    }
    if (Lib_PhysicalToVirtualNull((void *) (arg0->unk_0 & 0xFFFFFF)) == 0) {
        temp_v0 = zelda_malloc(arg0->unk_8 - arg0->unk_4);
        if (temp_v0 == 0) {
            return -1;
        }
        sp28 = temp_v0;
        Load2_LoadOverlay(arg0->unk_C, arg0->unk_10, arg0->unk_4, arg0->unk_8, (u32) temp_v0);
        temp_v1 = arg0->unk_0;
        arg0->unk_0 = (s32) (((u32) (((Lib_PhysicalToVirtual(sp28) & 0xFFFFFF) ^ temp_v1) << 8) >> 8) ^ temp_v1);
        arg0->unk_0 = 1;
        return 0;
    }
    temp_v0_2 = (u8) arg0->unk_0;
    temp_v0_3 = temp_v0_2 + 1;
    if (temp_v0_2 != 0) {
        arg0->unk_0 = temp_v0_3;
        if (temp_v0_3 == 0) {
            goto block_10;
        }
        return 1;
    }
block_10:
    return 2;
}

? func_8016537C(void *arg0) {
    s32 temp_a0;
    s32 temp_v1;
    s8 temp_v0_3;
    u8 temp_v0_2;
    void *temp_a0_2;
    void *temp_v0;

    if (arg0->unk_C == 0) {
        return 3;
    }
    temp_a0 = arg0->unk_0;
    arg0 = arg0;
    temp_v0 = Lib_PhysicalToVirtualNull((void *) (temp_a0 & 0xFFFFFF));
    temp_a0_2 = temp_v0;
    if (temp_v0 != 0) {
        temp_v0_2 = (u8) arg0->unk_0;
        temp_v0_3 = temp_v0_2 - 1;
        if (temp_v0_2 != 0) {
            arg0->unk_0 = temp_v0_3;
            if (temp_v0_3 == 0) {
                arg0 = arg0;
                zelda_free(temp_a0_2);
                temp_v1 = arg0->unk_0;
                arg0->unk_0 = (s32) (((u32) (((Lib_PhysicalToVirtual(NULL) & 0xFFFFFF) ^ temp_v1) << 8) >> 8) ^ temp_v1);
                return 0;
            }
            return 1;
        }
        return 2;
    }
    return -1;
}

void func_80165438(void *param_1) {
    *param_1 = 0;
}

void func_80165444(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    arg0->unk_4 = arg1;
    arg0->unk_8 = arg2;
    arg0->unk_C = arg3;
    arg0->unk_10 = arg4;
}
