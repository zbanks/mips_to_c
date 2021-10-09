struct _mips2c_stack___osMemcpy {};                 /* size 0x0 */

void *__osMemcpy(void *dst, void *src, u32 size) {
    s32 temp_t0;
    void *temp_v0;
    void *phi_v1;
    void *phi_v0;
    s32 phi_a3;
    u8 *phi_v1_2;
    u8 *phi_v0_2;
    s32 phi_a3_2;

    phi_v1 = src;
    phi_v0 = dst;
    if (dst == src) {
        return dst;
    }
    temp_t0 = size - 1;
    if ((u32) dst < (u32) src) {
        phi_a3 = size - 1;
        if (size != 0) {
            do {
                temp_v0 = phi_v0 + 1;
                temp_v0->unk_-1 = (u8) *phi_v1;
                phi_v1 += 1;
                phi_v0 = temp_v0;
                phi_a3 += -1;
            } while (phi_a3 != 0);
        }
    } else {
        phi_v1_2 = src + temp_t0;
        phi_v0_2 = dst + temp_t0;
        phi_a3_2 = size - 1;
        if (size != 0) {
            do {
                *phi_v0_2 = *phi_v1_2;
                phi_v1_2 += -1;
                phi_v0_2 += -1;
                phi_a3_2 += -1;
            } while (phi_a3_2 != 0);
        }
    }
    return dst;
}
