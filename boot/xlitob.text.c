struct _mips2c_stack__Litob {
    /* 0x00 */ char pad0[0x38];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ s32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x4];
    /* 0x4C */ s32 sp4C;                            /* inferred */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ s32 sp54;                            /* inferred */
    /* 0x58 */ char pad58[0x4];
    /* 0x5C */ s32 sp5C;                            /* inferred */
    /* 0x60 */ s32 sp60;                            /* inferred */
    /* 0x64 */ s32 sp64;                            /* inferred */
    /* 0x68 */ char pad68[0x8];                     /* maybe part of sp64[3]? */
    /* 0x70 */ s32 sp70;                            /* inferred */
    /* 0x74 */ char pad74[0x4];
    /* 0x78 */ ? sp78;                              /* inferred */
    /* 0x78 */ char pad78[0x18];
};                                                  /* size = 0x90 */

s8 ldigs[20] = {
    0x30,
    0x31,
    0x32,
    0x33,
    0x34,
    0x35,
    0x36,
    0x37,
    0x38,
    0x39,
    0x61,
    0x62,
    0x63,
    0x64,
    0x65,
    0x66,
    0,
    0,
    0,
    0,
};
s8 udigs[28] = {
    0x30,
    0x31,
    0x32,
    0x33,
    0x34,
    0x35,
    0x36,
    0x37,
    0x38,
    0x39,
    0x41,
    0x42,
    0x43,
    0x44,
    0x45,
    0x46,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};

void _Litob(_Pft *px, u8 code) {
    ? sp78;
    s32 sp70;
    s32 sp64;
    s32 sp60;
    s32 sp50;
    s32 sp4C;
    s32 sp44;
    s32 sp40;
    s32 sp3C;
    s32 sp38;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 temp_t8_3;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 temp_v0;
    s32 temp_v0_3;
    u32 temp_v1;
    u64 temp_ret;
    u64 temp_v0_2;
    s32 phi_t1;
    s8 *phi_s3;
    s32 phi_s0;
    s32 phi_s0_2;
    s32 phi_s0_3;
    s32 phi_t0;

    temp_v0 = code & 0xFF;
    if (temp_v0 == 0x58) {
        phi_s3 = udigs;
    } else {
        phi_s3 = ldigs;
    }
    phi_s0 = 0x18;
    if (temp_v0 == 0x6F) {
        phi_t1 = 8;
    } else {
        phi_t0 = 0x10;
        if ((temp_v0 != 0x78) && (temp_v0 != 0x58)) {
            phi_t0 = 0xA;
        }
        phi_t1 = phi_t0;
    }
    temp_t8 = px->unk0;
    temp_t9 = px->unk4;
    sp60 = temp_t8;
    sp40 = temp_t8;
    sp44 = temp_t9;
    sp64 = temp_t9;
    if (((temp_v0 == 0x64) || (temp_v0 == 0x69)) && (sp40 <= 0)) {
        if (sp40 >= 0) {

        } else {
            temp_t8_2 = ~sp60 + (sp64 == 0);
            sp64 = -sp64;
            sp60 = temp_t8_2;
        }
    }
    if ((sp60 != 0) || (sp64 != 0) || (px->prec != 0)) {
        sp4C = 0x17;
        sp70 = phi_t1;
        *(&sp78 + 0x17) = *((u32) __ull_rem((u64) sp60, (u64) sp64, (u64) (phi_t1 >> 0x1F), (u64) phi_t1) + phi_s3);
        phi_s0 = 0x17;
    }
    sp70 = phi_t1;
    temp_ret = __ull_div((u64) sp60, (u64) sp64, (u64) (phi_t1 >> 0x1F), (u64) phi_t1);
    temp_v0_2 = temp_ret;
    temp_v1 = (u32) temp_ret;
    px->unk4 = (s32) temp_v1;
    px->unk0 = (s32) temp_v0_2;
    phi_s0_2 = phi_s0;
    phi_s0_3 = phi_s0;
    if (((s32) temp_v0_2 >= 0) && (((s32) temp_v0_2 > 0) || (temp_v1 != 0)) && (phi_s0 > 0)) {
        sp3C = phi_t1;
        sp38 = phi_t1 >> 0x1F;
        sp40 = px->unk0;
        sp44 = px->unk4;
loop_24:
        lldiv((s64) (lldiv_t *) &sp50, (s64) sp40, (s64) sp44, sp38, sp3C);
        temp_a0 = phi_s0_2 - 1;
        px->unk0 = sp50;
        px->unk4 = sp54;
        *(&sp78 + temp_a0) = *(sp5C + phi_s3);
        temp_t8_3 = px->unk0;
        temp_t9_2 = px->unk4;
        sp40 = temp_t8_3;
        sp44 = temp_t9_2;
        phi_s0_2 = temp_a0;
        phi_s0_3 = temp_a0;
        if ((temp_t8_3 >= 0) && ((temp_t8_3 > 0) || (temp_t9_2 != 0))) {
            if (temp_a0 > 0) {
                goto loop_24;
            }
        }
    }
    temp_a2 = 0x18 - phi_s0_3;
    px->n1 = temp_a2;
    memcpy((void *) px->s, &sp78 + phi_s0_3, (u32) temp_a2);
    temp_a1 = px->n1;
    temp_a0_2 = px->prec;
    if (temp_a1 < temp_a0_2) {
        px->nz0 = temp_a0_2 - temp_a1;
    }
    if ((temp_a0_2 < 0) && ((px->flags & 0x14) == 0x10)) {
        temp_v0_3 = px->nz0;
        temp_s0 = ((px->width - px->n0) - temp_v0_3) - temp_a1;
        if (temp_s0 > 0) {
            px->nz0 = temp_v0_3 + temp_s0;
        }
    }
}
