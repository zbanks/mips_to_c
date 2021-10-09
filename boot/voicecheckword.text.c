

s32 osVoiceCheckWord(u8 *arg0) {
    s32 spC;
    u16 sp6;
    s32 temp_v1;
    u16 temp_t9;
    u8 temp_v0;
    u8 *phi_t3;
    u8 phi_v0;
    u16 phi_a1;
    s32 phi_a2;
    s32 phi_a2_2;

    spC = 0;
    phi_t3 = arg0;
    phi_a1 = 0U;
    phi_a2 = 0;
    phi_a2_2 = 0;
    if (*arg0 != 0) {
        phi_v0 = *arg0;
loop_2:
        temp_t9 = phi_t3->unk1 + (phi_v0 << 8);
        temp_v1 = temp_t9 & 0xFFFF;
        sp6 = temp_t9;
        if (((temp_v1 != 0x815B) && (temp_v1 < 0x829F)) || ((temp_v1 >= 0x82F2) && (temp_v1 < 0x8340)) || (temp_v1 == 0x837F) || (temp_v1 >= 0x8397)) {
            goto block_196;
        }
        if ((spC == 0) && ((temp_v1 == 0x815B) || (temp_v1 == 0x82F1) || (temp_v1 == 0x82C1) || (temp_v1 == 0x82EC) || (temp_v1 == 0x8393) || (temp_v1 == 0x8362) || (temp_v1 == 0x838E) || (temp_v1 == 0x8395) || (temp_v1 == 0x8396))) {
            goto block_196;
        }
        if (((temp_v1 == 0x829F) || (temp_v1 == 0x8340)) && (phi_a1 != 0x82D3) && (phi_a1 != 0x8374) && (phi_a1 != 0x8394)) {
            goto block_196;
        }
        if (((temp_v1 == 0x82A1) || (temp_v1 == 0x8342)) && (phi_a1 != 0x82A4) && (phi_a1 != 0x82C4) && (phi_a1 != 0x82C5) && (phi_a1 != 0x82D3) && (phi_a1 != 0x8345) && (phi_a1 != 0x8365) && (phi_a1 != 0x8366) && (phi_a1 != 0x8374) && (phi_a1 != 0x8394)) {
            goto block_196;
        }
        if (((temp_v1 == 0x82A3) || (temp_v1 == 0x8344)) && (phi_a1 != 0x82C6) && (phi_a1 != 0x82C7) && (phi_a1 != 0x82D3) && (phi_a1 != 0x8367) && (phi_a1 != 0x8368) && (phi_a1 != 0x8374) && (phi_a1 != 0x8394)) {
            goto block_196;
        }
        if (((temp_v1 == 0x82A5) || (temp_v1 == 0x8346)) && (phi_a1 != 0x82A4) && (phi_a1 != 0x82B5) && (phi_a1 != 0x82B6) && (phi_a1 != 0x82BF) && (phi_a1 != 0x82C0) && (phi_a1 != 0x82C2) && (phi_a1 != 0x82D3) && (phi_a1 != 0x8345) && (phi_a1 != 0x8356) && (phi_a1 != 0x8357) && (phi_a1 != 0x8360) && (phi_a1 != 0x8361) && (phi_a1 != 0x8363) && (phi_a1 != 0x8374) && (phi_a1 != 0x8394)) {
            goto block_196;
        }
        if (((temp_v1 == 0x82A7) || (temp_v1 == 0x8348)) && (phi_a1 != 0x82A4) && (phi_a1 != 0x82D3) && (phi_a1 != 0x8345) && (phi_a1 != 0x8374) && (phi_a1 != 0x8394)) {
            goto block_196;
        }
        if (((temp_v1 == 0x82E1) || (temp_v1 == 0x82E3) || (temp_v1 == 0x82E5) || (temp_v1 == 0x8383) || (temp_v1 == 0x8385) || (temp_v1 == 0x8387)) && (phi_a1 != 0x82AB) && (phi_a1 != 0x82B5) && (phi_a1 != 0x82BF) && (phi_a1 != 0x82C9) && (phi_a1 != 0x82D0) && (phi_a1 != 0x82DD) && (phi_a1 != 0x82E8) && (phi_a1 != 0x82AC) && (phi_a1 != 0x82B6) && (phi_a1 != 0x82C0) && (phi_a1 != 0x82D1) && (phi_a1 != 0x82D2) && (phi_a1 != 0x834C) && (phi_a1 != 0x8356) && (phi_a1 != 0x8360) && (phi_a1 != 0x836A) && (phi_a1 != 0x8371) && (phi_a1 != 0x837E) && (phi_a1 != 0x838A) && (phi_a1 != 0x834D) && (phi_a1 != 0x8357) && (phi_a1 != 0x8361) && (phi_a1 != 0x8372) && (phi_a1 != 0x8373) && (phi_a1 != 0x8394)) {
            goto block_196;
        }
        if ((temp_v1 == 0x815B) && ((phi_a1 == 0x82F1) || (phi_a1 == 0x82C1) || (phi_a1 == 0x8393) || (phi_a1 == 0x8362))) {
            goto block_196;
        }
        if (((temp_v1 == 0x82F1) || (temp_v1 == 0x8393)) && ((phi_a1 == 0x82F1) || (phi_a1 == 0x8393))) {
            goto block_196;
        }
        if (((phi_a1 == 0x82C1) || (phi_a1 == 0x8362)) && ((temp_v1 == 0x815B) || (temp_v1 == 0x82A0) || (temp_v1 == 0x82A2) || (temp_v1 == 0x82A4) || (temp_v1 == 0x82A6) || (temp_v1 == 0x82A8) || (temp_v1 == 0x82C8) || (temp_v1 == 0x82C9) || (temp_v1 == 0x82CA) || (temp_v1 == 0x82CB) || (temp_v1 == 0x82CC) || (temp_v1 == 0x82DC) || (temp_v1 == 0x82DD) || (temp_v1 == 0x82DE) || (temp_v1 == 0x82DF) || (temp_v1 == 0x82E0) || (temp_v1 == 0x82E2) || (temp_v1 == 0x82E4) || (temp_v1 == 0x82E6) || (temp_v1 == 0x82E7) || (temp_v1 == 0x82E8) || (temp_v1 == 0x82E9) || (temp_v1 == 0x82EA) || (temp_v1 == 0x82EB) || (temp_v1 == 0x82ED) || (temp_v1 == 0x82EE) || (temp_v1 == 0x82EF) || (temp_v1 == 0x82F0) || (temp_v1 == 0x82F1) || (temp_v1 == 0x829F) || (temp_v1 == 0x82A1) || (temp_v1 == 0x82A3) || (temp_v1 == 0x82A5) || (temp_v1 == 0x82A7) || (temp_v1 == 0x82E1) || (temp_v1 == 0x82E3) || (temp_v1 == 0x82E5) || (temp_v1 == 0x82C1) || (temp_v1 == 0x82EC) || (temp_v1 == 0x8341) || (temp_v1 == 0x8343) || (temp_v1 == 0x8345) || (temp_v1 == 0x8347) || (temp_v1 == 0x8349) || (temp_v1 == 0x8369) || (temp_v1 == 0x836A) || (temp_v1 == 0x836B) || (temp_v1 == 0x836C) || (temp_v1 == 0x836D) || (temp_v1 == 0x837D) || (temp_v1 == 0x837E) || (temp_v1 == 0x8380) || (temp_v1 == 0x8381) || (temp_v1 == 0x8382) || (temp_v1 == 0x8384) || (temp_v1 == 0x8386) || (temp_v1 == 0x8388) || (temp_v1 == 0x8389) || (temp_v1 == 0x838A) || (temp_v1 == 0x838B) || (temp_v1 == 0x838C) || (temp_v1 == 0x838D) || (temp_v1 == 0x838F) || (temp_v1 == 0x8390) || (temp_v1 == 0x8391) || (temp_v1 == 0x8392) || (temp_v1 == 0x8393) || (temp_v1 == 0x8340) || (temp_v1 == 0x8342) || (temp_v1 == 0x8344) || (temp_v1 == 0x8346) || (temp_v1 == 0x8348) || (temp_v1 == 0x8383) || (temp_v1 == 0x8385) || (temp_v1 == 0x8387) || (temp_v1 == 0x8362) || (temp_v1 == 0x838E))) {
block_196:
            phi_a2 = 0xE;
        }
        phi_a2_2 = phi_a2;
        phi_a2_2 = phi_a2;
        if (phi_a2 != 0) {

        } else {
            spC += 2;
            temp_v0 = phi_t3->unk2;
            phi_t3 += 2;
            phi_v0 = temp_v0;
            phi_a1 = sp6;
            if (temp_v0 == 0) {
                goto block_200;
            }
            goto loop_2;
        }
    } else {
block_200:
        if ((sp6 == 0x82C1) || (sp6 == 0x8362)) {
            phi_a2_2 = 0xE;
        }
    }
    return phi_a2_2;
}

