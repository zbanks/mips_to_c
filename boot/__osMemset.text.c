struct _mips2c_stack___osMemset {};                 /* size 0x0 */

void *__osMemset(void *ptr, s32 val, u32 size) {
    void *phi_v0;
    s32 phi_a2;

    phi_v0 = ptr;
    phi_a2 = size - 1;
    if (size != 0) {
        do {
            *phi_v0 = (s8) val;
            phi_v0 += 1;
            phi_a2 += -1;
        } while (phi_a2 != 0);
    }
    return ptr;
}
