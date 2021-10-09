struct _mips2c_stack_guMtxF2L {};                   /* size 0x0 */

void guMtxF2L(f32 (*mf)[4], Mtx *m) {
    Mtx *temp_a1;
    s32 temp_f18;
    s32 temp_f8;
    f32 (*phi_a0)[4];
    Mtx *phi_a1;

    phi_a0 = mf;
    phi_a1 = m;
    do {
        temp_a1 = phi_a1 + 4;
        temp_f8 = (s32) (phi_a0[0][0] * 65536.0f);
        temp_f18 = (s32) (phi_a0[0][1] * 65536.0f);
        temp_a1->unk_-4 = (s32) ((temp_f8 & 0xFFFF0000) | ((u32) temp_f18 >> 0x10));
        temp_a1->m[1][3] = (temp_f8 << 0x10) | (temp_f18 & 0xFFFF);
        phi_a0 += 8;
        phi_a1 = temp_a1;
    } while (temp_a1 != m->m[2]);
}
