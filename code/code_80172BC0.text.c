struct _mips2c_stack_func_80172BC0 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

? func_801A7084(u8);                                /* extern */
static ? D_801DFC77;                                /* unable to generate initializer; const */
u8 D_801DFC70[7] = {0, 1, 2, 3, 4, 5, 6};           /* const */

void func_80172BC0(void) {
    u8 *temp_s0;
    u8 *phi_s0;

    phi_s0 = D_801DFC70;
    do {
        if (*phi_s0 != 4) {
            func_801A7084(*phi_s0);
        }
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while ((u32) temp_s0 < (u32) &D_801DFC77);
}
