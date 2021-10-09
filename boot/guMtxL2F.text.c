struct _mips2c_stack_guMtxL2F {};                   /* size 0x0 */

void guMtxL2F(MtxF *m1, Mtx *m2) {
    Mtx *temp_a1;
    MtxF *temp_a0;
    s32 temp_t0;
    u32 temp_t1;
    Mtx *phi_a1;
    MtxF *phi_a0;

    phi_a1 = m2;
    phi_a0 = m1;
    do {
        temp_t0 = phi_a1->m[0][0];
        temp_t1 = phi_a1->m[2][0];
        temp_a1 = phi_a1 + 4;
        temp_a0 = phi_a0 + 8;
        temp_a0->unk-8 = (f32) ((f32) ((temp_t0 & 0xFFFF0000) | (temp_t1 >> 0x10)) * 0.000015258789f);
        temp_a0->unk-4 = (f32) ((f32) ((temp_t0 << 0x10) | (temp_t1 & 0xFFFF)) * 0.000015258789f);
        phi_a1 = temp_a1;
        phi_a0 = temp_a0;
    } while (temp_a1 != m2->m[2]);
}
