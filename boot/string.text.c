struct _mips2c_stack_memcpy {};                     /* size 0x0 */

struct _mips2c_stack_strchr {};                     /* size 0x0 */

struct _mips2c_stack_strlen {};                     /* size 0x0 */

s8 *strchr(s8 *__s, s32 __c) {
    s8 *temp_a0;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 phi_v1;
    s8 *phi_a0;
    s8 *phi_a0_2;

    temp_v1 = (u8) *__s;
    phi_v1 = temp_v1;
    phi_a0 = __s;
    phi_a0_2 = __s;
    if ((__c & 0xFF) != temp_v1) {
loop_1:
        if (phi_v1 == 0) {
            return NULL;
        }
        temp_v1_2 = phi_a0->unk1;
        temp_a0 = phi_a0 + 1;
        phi_v1 = temp_v1_2;
        phi_a0 = temp_a0;
        phi_a0_2 = temp_a0;
        if ((__c & 0xFF) == temp_v1_2) {
            /* Duplicate return node #4. Try simplifying control flow for better match */
            return phi_a0_2;
        }
        goto loop_1;
    }
    return phi_a0_2;
}

u32 strlen(s8 *__s) {
    s8 *temp_v1;
    s8 *phi_v1;
    s8 *phi_v1_2;

    phi_v1 = __s;
    phi_v1_2 = __s;
    if ((u8) *__s != 0) {
        do {
            temp_v1 = phi_v1 + 1;
            phi_v1 = temp_v1;
            phi_v1_2 = temp_v1;
        } while (phi_v1->unk1 != 0);
    }
    return phi_v1_2 - __s;
}

void *memcpy(void *__dest, void *__src, u32 __n) {
    u32 temp_a2;
    void *temp_v0;
    void *phi_v1;
    void *phi_v0;
    u32 phi_a2;

    phi_v1 = __src;
    phi_v0 = __dest;
    phi_a2 = __n;
    if (__n != 0) {
        do {
            temp_a2 = phi_a2 - 1;
            temp_v0 = phi_v0 + 1;
            temp_v0->unk-1 = (u8) *phi_v1;
            phi_v1 += 1;
            phi_v0 = temp_v0;
            phi_a2 = temp_a2;
        } while (temp_a2 != 0);
    }
    return __dest;
}
