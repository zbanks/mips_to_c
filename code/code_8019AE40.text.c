struct _mips2c_stack_func_8019AE40 {};              /* size 0x0 */

void func_8019AE40(s32 param_1, s32 param_2, u32 param_3, s32 param_4) {
    s32 temp_a2;
    s16 *phi_t2;
    s16 *phi_t0;
    s16 *phi_t3;
    s16 *phi_t1;
    u32 phi_a2;

    phi_a2 = (u32) (param_3 & 0xFFFF) >> 1;
    phi_t0 = param_1->unk28;
    phi_t1 = param_1->unk2C;
    if (param_4 == 0) {
        phi_t0 = MIPS2C_ERROR(unknown instruction: add $t0, $t0, $t2);
        phi_t1 = MIPS2C_ERROR(unknown instruction: add $t1, $t1, $t2);
    }
    phi_t2 = MIPS2C_ERROR(unknown instruction: add $t2, $t2, $a3);
    phi_t3 = MIPS2C_ERROR(unknown instruction: add $t3, $t3, $a3);
    do {
        temp_a2 = phi_a2 - 1;
        *phi_t0 = *phi_t2;
        *phi_t1 = *phi_t3;
        phi_t2 = MIPS2C_ERROR(unknown instruction: add $t2, $t2, $t4);
        phi_t0 += 2;
        phi_t3 = MIPS2C_ERROR(unknown instruction: add $t3, $t3, $t4);
        phi_t1 += 2;
        phi_a2 = (u32) temp_a2;
    } while (temp_a2 > 0);
}
