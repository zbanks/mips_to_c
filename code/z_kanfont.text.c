u8 kanfontOrdering[92] = {
    0x10,
    0x11,
    0x12,
    0x13,
    0x14,
    0x15,
    0x16,
    0x17,
    0x18,
    0x19,
    0x21,
    0x22,
    0x23,
    0x24,
    0x25,
    0x26,
    0x27,
    0x28,
    0x29,
    0x2A,
    0x2B,
    0x2C,
    0x2D,
    0x2E,
    0x2F,
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
    0x3A,
    0x41,
    0x42,
    0x43,
    0x44,
    0x45,
    0x46,
    0x47,
    0x48,
    0x49,
    0x4A,
    0x4B,
    0x4C,
    0x4D,
    0x4E,
    0x4F,
    0x50,
    0x51,
    0x52,
    0x53,
    0x54,
    0x55,
    0x56,
    0x57,
    0x58,
    0x59,
    0x5A,
    0,
    0xD,
    0xE,
    0x1A,
    0x61,
    0x66,
    0x6A,
    0x6D,
    0x6F,
    0x73,
    0x76,
    0x77,
    0x78,
    0x79,
    0x7A,
    0x7B,
    0x7C,
    0x7D,
    0x7E,
    0x7F,
    0x80,
    0x81,
    0x84,
    0x86,
    0x87,
    0x88,
    0x89,
    0x8A,
    0x8B,
    0x8C,
};



void Font_LoadChar(GlobalContext *globalCtx, u16 codePointIndex, s32 offset) {

}

void Font_LoadCharNES(GlobalContext *globalCtx, u8 codePointIndex, s32 offset) {
    DmaMgr_SendRequest0(globalCtx + (globalCtx->msgCtx.font.unk_11D88 * 0x3C00) + offset + 0x4A70, (u32) &_nes_font_staticSegmentRomStart[(codePointIndex << 7) - 0x1000], 0x80U);
}

void Font_LoadMessageBoxEndIcon(Font *font, u16 icon) {
    DmaMgr_SendRequest0((void *) font->iconBuf, (u32) &_message_staticSegmentRomStart[(icon << 7) + 0x5000], 0x80U);
}

void Font_LoadOrderedFont(Font *font) {
    u8 temp_v0;
    u8 *phi_s0;
    void *phi_s1;
    s32 phi_v1;

    phi_s0 = kanfontOrdering;
    phi_s1 = (void *) font->fontBuf;
loop_1:
    temp_v0 = *phi_s0;
    phi_v1 = temp_v0 << 7;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    }
    DmaMgr_SendRequest0(phi_s1, (u32) &_nes_font_staticSegmentRomStart[phi_v1], 0x80U);
    phi_s1 += 0x80;
    if (*phi_s0 != 0x8C) {
        phi_s0 += 1;
        goto loop_1;
    }
}

