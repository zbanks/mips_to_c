struct _mips2c_stack___osStrcpy {};                 /* size 0x0 */

s8 *__osStrcpy(s8 *dst, s8 *src) {
    s8 *temp_v1;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 phi_v0;
    s8 *phi_v1;
    s8 *phi_a1;
    s8 *phi_v1_2;

    temp_v0 = (u8) *src;
    phi_v0 = temp_v0;
    phi_v1 = dst;
    phi_a1 = src;
    phi_v1_2 = dst;
    if (temp_v0 != 0) {
        do {
            *phi_v1 = phi_v0;
            temp_v0_2 = phi_a1->unk_1;
            temp_v1 = phi_v1 + 1;
            phi_v0 = temp_v0_2;
            phi_v1 = temp_v1;
            phi_a1 += 1;
            phi_v1_2 = temp_v1;
        } while (temp_v0_2 != 0);
    }
    *phi_v1_2 = 0;
    return dst;
}
