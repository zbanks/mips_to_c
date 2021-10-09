void Check_DrawExpansionPakErrorMessage();          /* static */
void Check_DrawRegionLockErrorMessage();            /* static */
void Check_ExpansionPak();                          /* static */
void Check_RegionIsSupported();                     /* static */
extern ? D_01000000;
extern ? D_01000680;
extern ? D_01001280;



void Check_WriteRGBA16Pixel(u16 *buffer, u32 x, u32 y, u16 value) {
    if ((value & 1) != 0) {
        (&buffer[x])[y * 0x140] = value;
    }
}

void Check_WriteI4Pixel(u16 *buffer, u32 x, u32 y, u32 value) {
    Check_WriteRGBA16Pixel(buffer, x, y, (value * 0x1084) + 0x843);
}

void Check_DrawI4Texture(u16 *buffer, u32 x, u32 y, u32 width, u32 height, u8 *texture) {
    s32 temp_fp;
    s32 temp_s2;
    u32 temp_s5;
    u8 *temp_s4;
    u32 phi_s1;
    s32 phi_fp;
    u8 *phi_s4;
    u32 phi_s3;
    s32 phi_s2;
    u8 *phi_s4_2;

    phi_fp = 0;
    phi_s4_2 = texture;
    if ((s32) height > 0) {
        do {
            phi_s4 = phi_s4_2;
            phi_s2 = 0;
            if ((s32) width > 0) {
                temp_s5 = y + phi_fp;
                phi_s1 = x;
                phi_s3 = x + 1;
                do {
                    Check_WriteI4Pixel(buffer, phi_s1, temp_s5, (u32) ((s32) *phi_s4 >> 4));
                    Check_WriteI4Pixel(buffer, phi_s3, temp_s5, *phi_s4 & 0xF);
                    temp_s2 = phi_s2 + 2;
                    temp_s4 = phi_s4 + 1;
                    phi_s1 += 2;
                    phi_s4 = temp_s4;
                    phi_s3 += 2;
                    phi_s2 = temp_s2;
                    phi_s4_2 = temp_s4;
                } while (temp_s2 < (s32) width);
            }
            temp_fp = phi_fp + 1;
            phi_fp = temp_fp;
        } while (temp_fp != height);
    }
}

void Check_ClearRGBA16(s16 *buffer) {
    u32 temp_s0;
    u32 temp_s2;
    u32 phi_s0;
    u32 phi_s2;

    phi_s2 = 0U;
    do {
        phi_s0 = 0U;
loop_2:
        Check_WriteRGBA16Pixel((u16 *) buffer, phi_s0, phi_s2, 1U);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
        if (temp_s0 != 0x140) {
            goto loop_2;
        }
        temp_s2 = phi_s2 + 1;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0xF0);
}

void Check_DrawExpansionPakErrorMessage(void) {
    DmaMgr_SendRequest0((void *)0x803D9580, (u32) _memerrmsgSegmentRomStart, &D_01001280 - &D_01000000);
    Check_ClearRGBA16((s16 *)0x803DA800);
    Check_DrawI4Texture((u16 *)0x803DA800, 0x60U, 0x47U, 0x80U, 0x25U, (u8 *)0x803D9580);
    Check_DrawI4Texture((u16 *)0x803DA800, 0x60U, 0x7FU, 0x80U, 0x25U, (u8 *)0x803D9EC0);
    osWritebackDCacheAll();
    osViSwapBuffer((void *)0x803DA800);
    osViBlack(0U);
}

void Check_DrawRegionLockErrorMessage(void) {
    DmaMgr_SendRequest0((void *)0x803D9580, (u32) _locerrmsgSegmentRomStart, &D_01000680 - &D_01000000);
    Check_ClearRGBA16((s16 *)0x803DA800);
    Check_DrawI4Texture((u16 *)0x803DA800, 0x38U, 0x70U, 0xD0U, 0x10U, (u8 *)0x803D9580);
    osWritebackDCacheAll();
    osViSwapBuffer((void *)0x803DA800);
    osViBlack(0U);
}

void Check_ExpansionPak(void) {
    if ((u32) osMemSize < 0x800000U) {
        Check_DrawExpansionPakErrorMessage();
        osDestroyThread(NULL);
loop_2:
        goto loop_2;
    }
}

void Check_RegionIsSupported(void) {
    u32 temp_v1;
    s32 phi_v0;

    temp_v1 = osTvType;
    phi_v0 = 0;
    if ((temp_v1 == 1) || (temp_v1 == 2)) {
        phi_v0 = 1;
    }
    if (phi_v0 == 0) {
        Check_DrawRegionLockErrorMessage();
        osDestroyThread(NULL);
loop_5:
        goto loop_5;
    }
}

