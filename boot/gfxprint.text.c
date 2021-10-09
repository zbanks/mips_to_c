static ? sGfxPrintFontData;                         /* unable to generate initializer */
static ? sGfxPrintFontTLUT;                         /* unable to generate initializer */
static ? sGfxPrintUnkData;                          /* unable to generate initializer */
static ? sGfxPrintUnkTLUT;                          /* unable to generate initializer */



void GfxPrint_InitDlist(GfxPrint *printer) {
    GfxPrint *self = (GfxPrint *) printer;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_19;
    Gfx *temp_v0_20;
    Gfx *temp_v0_21;
    Gfx *temp_v0_22;
    Gfx *temp_v0_23;
    Gfx *temp_v0_24;
    Gfx *temp_v0_25;
    Gfx *temp_v0_26;
    Gfx *temp_v0_27;
    Gfx *temp_v0_28;
    Gfx *temp_v0_29;
    Gfx *temp_v0_2;
    Gfx *temp_v0_30;
    Gfx *temp_v0_31;
    Gfx *temp_v0_32;
    Gfx *temp_v0_33;
    Gfx *temp_v0_34;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    s32 temp_a3;
    s32 temp_s1;
    s32 temp_t0;
    s32 temp_t4;
    s32 phi_s0;
    s32 phi_t4;
    s32 phi_a3;

    temp_v0 = self->dlist;
    self->dlist = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    temp_v0_2 = self->dlist;
    self->dlist = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xEF00ECF0;
    temp_v0_2->words.w1 = 0x504244;
    temp_v0_3 = self->dlist;
    self->dlist = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0xFFFCF279;
    temp_v0_3->words.w0 = 0xFCFFFFFF;
    temp_v0_4 = self->dlist;
    self->dlist = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xFD500000;
    temp_v0_4->words.w1 = (u32) &sGfxPrintFontData;
    temp_v0_5 = self->dlist;
    self->dlist = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xF5500000;
    temp_v0_5->words.w1 = 0x7000000;
    temp_v0_6 = self->dlist;
    self->dlist = temp_v0_6 + 8;
    temp_v0_6->words.w1 = 0;
    temp_v0_6->words.w0 = 0xE6000000;
    temp_v0_7 = self->dlist;
    self->dlist = temp_v0_7 + 8;
    temp_v0_7->words.w0 = 0xF3000000;
    temp_v0_7->words.w1 = ((0x800 / 1) & 0xFFF) | 0x7000000U | ((0x3FF & 0xFFF) << 0xC);
    temp_v0_8 = self->dlist;
    self->dlist = temp_v0_8 + 8;
    temp_v0_8->words.w1 = 0;
    temp_v0_8->words.w0 = 0xE7000000;
    temp_v0_9 = self->dlist;
    self->dlist = temp_v0_9 + 8;
    temp_v0_9->words.w1 = 0;
    temp_v0_9->words.w0 = 0xF5400200;
    temp_v0_10 = self->dlist;
    self->dlist = temp_v0_10 + 8;
    temp_v0_10->words.w1 = 0x3C3FC;
    temp_v0_10->words.w0 = 0xF2000000;
    temp_v0_11 = self->dlist;
    self->dlist = temp_v0_11 + 8;
    temp_v0_11->words.w1 = (u32) &sGfxPrintFontTLUT;
    temp_v0_11->words.w0 = 0xFD100000;
    temp_v0_12 = self->dlist;
    self->dlist = temp_v0_12 + 8;
    temp_v0_12->words.w1 = 0;
    temp_v0_12->words.w0 = 0xE8000000;
    temp_v0_13 = self->dlist;
    self->dlist = temp_v0_13 + 8;
    temp_v0_13->words.w1 = 0x7000000;
    temp_v0_13->words.w0 = 0xF5000100;
    temp_v0_14 = self->dlist;
    self->dlist = temp_v0_14 + 8;
    temp_v0_14->words.w1 = 0;
    temp_v0_14->words.w0 = 0xE6000000;
    temp_v0_15 = self->dlist;
    self->dlist = temp_v0_15 + 8;
    temp_v0_15->words.w1 = 0x70FC000;
    temp_v0_15->words.w0 = 0xF0000000;
    temp_v0_16 = self->dlist;
    self->dlist = temp_v0_16 + 8;
    temp_v0_16->words.w1 = 0;
    temp_v0_16->words.w0 = 0xE7000000;
    phi_s0 = 2;
    phi_t4 = 1;
    do {
        temp_v0_17 = self->dlist;
        self->dlist = temp_v0_17 + 8;
        temp_s1 = (phi_s0 & 7) << 0x18;
        temp_v0_17->words.w1 = temp_s1 | ((phi_t4 & 0xF) << 0x14);
        temp_v0_17->words.w0 = 0xF5400200;
        temp_v0_18 = self->dlist;
        temp_t4 = phi_t4 + 1;
        self->dlist = temp_v0_18 + 8;
        temp_v0_18->words.w1 = temp_s1 | 0x3C000 | 0x3FC;
        temp_v0_18->words.w0 = 0xF2000000;
        phi_s0 += 2;
        phi_t4 = temp_t4;
    } while (temp_t4 < 4);
    temp_v0_19 = self->dlist;
    self->dlist = temp_v0_19 + 8;
    temp_v0_19->words.w0 = 0xFA000000;
    temp_v0_19->words.w1 = self->color.rgba;
    temp_v0_20 = self->dlist;
    self->dlist = temp_v0_20 + 8;
    temp_v0_20->words.w1 = (u32) &sGfxPrintUnkData;
    temp_v0_20->words.w0 = 0xFD480000;
    temp_v0_21 = self->dlist;
    self->dlist = temp_v0_21 + 8;
    temp_v0_21->words.w1 = 0x700C010;
    temp_v0_21->words.w0 = 0xF5480200;
    temp_v0_22 = self->dlist;
    self->dlist = temp_v0_22 + 8;
    temp_v0_22->words.w1 = 0;
    temp_v0_22->words.w0 = 0xE6000000;
    temp_v0_23 = self->dlist;
    self->dlist = temp_v0_23 + 8;
    temp_v0_23->words.w1 = 0x700201C;
    temp_v0_23->words.w0 = 0xF4000000;
    temp_v0_24 = self->dlist;
    self->dlist = temp_v0_24 + 8;
    temp_v0_24->words.w1 = 0;
    temp_v0_24->words.w0 = 0xE7000000;
    temp_v0_25 = self->dlist;
    self->dlist = temp_v0_25 + 8;
    temp_v0_25->words.w1 = 0x140C010;
    temp_v0_25->words.w0 = 0xF5400200;
    temp_v0_26 = self->dlist;
    self->dlist = temp_v0_26 + 8;
    temp_v0_26->words.w1 = 0x100401C;
    temp_v0_26->words.w0 = 0xF2000000;
    temp_v0_27 = self->dlist;
    self->dlist = temp_v0_27 + 8;
    temp_v0_27->words.w1 = (u32) &sGfxPrintUnkTLUT;
    temp_v0_27->words.w0 = 0xFD100000;
    temp_v0_28 = self->dlist;
    self->dlist = temp_v0_28 + 8;
    temp_v0_28->words.w1 = 0;
    temp_v0_28->words.w0 = 0xE8000000;
    temp_v0_29 = self->dlist;
    self->dlist = temp_v0_29 + 8;
    temp_v0_29->words.w1 = 0x7000000;
    temp_v0_29->words.w0 = 0xF5000140;
    temp_v0_30 = self->dlist;
    self->dlist = temp_v0_30 + 8;
    temp_v0_30->words.w1 = 0;
    temp_v0_30->words.w0 = 0xE6000000;
    temp_v0_31 = self->dlist;
    self->dlist = temp_v0_31 + 8;
    temp_v0_31->words.w1 = 0x703C000;
    temp_v0_31->words.w0 = 0xF0000000;
    temp_v0_32 = self->dlist;
    self->dlist = temp_v0_32 + 8;
    temp_v0_32->words.w1 = 0;
    temp_v0_32->words.w0 = 0xE7000000;
    phi_a3 = 3;
    do {
        temp_v0_33 = self->dlist;
        temp_t0 = (phi_a3 & 7) << 0x18;
        self->dlist = temp_v0_33 + 8;
        temp_v0_33->words.w1 = temp_t0 | 0x400000 | 0xC010;
        temp_v0_33->words.w0 = 0xF5400200;
        temp_v0_34 = self->dlist;
        temp_a3 = phi_a3 + 2;
        self->dlist = temp_v0_34 + 8;
        temp_v0_34->words.w1 = temp_t0 | 0x401C;
        temp_v0_34->words.w0 = 0xF2000000;
        phi_a3 = temp_a3;
    } while (temp_a3 != 9);
}

void GfxPrint_SetColor(GfxPrint *printer, u32 r, u32 g, u32 b, u32 a) {
    GfxPrint *self = (GfxPrint *) printer;
    Gfx *temp_v1;
    Gfx *temp_v1_2;

    temp_v1 = self->dlist;
    self->color.r = (u8) r;
    self->color.g = (u8) g;
    self->color.b = (u8) b;
    self->dlist = temp_v1 + 8;
    self->color.a = (u8) a;
    temp_v1->words.w0 = 0xE7000000;
    temp_v1->words.w1 = 0;
    temp_v1_2 = self->dlist;
    self->dlist = temp_v1_2 + 8;
    temp_v1_2->words.w0 = 0xFA000000;
    temp_v1_2->words.w1 = self->color.rgba;
}

void GfxPrint_SetPosPx(GfxPrint *printer, s32 x, s32 y) {
    GfxPrint *self = (GfxPrint *) printer;
    self->posX = self->baseX + (x * 4);
    self->posY = self->baseY + (y * 4);
}

void GfxPrint_SetPos(GfxPrint *printer, s32 x, s32 y) {
    GfxPrint *self = (GfxPrint *) printer;
    GfxPrint_SetPosPx(self, x * 8, y * 8);
}

void GfxPrint_SetBasePosPx(GfxPrint *printer, s32 x, s32 y) {
    GfxPrint *self = (GfxPrint *) printer;
    self->baseX = x * 4;
    self->baseY = y * 4;
}

void GfxPrint_PrintCharImpl(GfxPrint *printer, u8 c) {
    GfxPrint *self = (GfxPrint *) printer;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    s32 temp_a1;
    u8 temp_v1;

    temp_v1 = self->flag;
    temp_a1 = c & 0xFF;
    if ((temp_v1 & 8) != 0) {
        temp_v0 = self->dlist;
        self->flag = temp_v1 & 0xFFF7;
        self->dlist = temp_v0 + 8;
        temp_v0->words.w1 = 0;
        temp_v0->words.w0 = 0xE7000000;
        if ((self->flag & 2) != 0) {
            temp_v0_2 = self->dlist;
            self->dlist = temp_v0_2 + 8;
            temp_v0_2->words.w1 = 0x8000;
            temp_v0_2->words.w0 = 0xE3001001;
            temp_v0_3 = self->dlist;
            self->dlist = temp_v0_3 + 8;
            temp_v0_3->words.w1 = 0x100000;
            temp_v0_3->words.w0 = 0xE3000A01;
            temp_v0_4 = self->dlist;
            self->dlist = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xE200001C;
            temp_v0_4->words.w1 = 0xC184240;
            temp_v0_5 = self->dlist;
            self->dlist = temp_v0_5 + 8;
            temp_v0_5->words.w1 = -0x1C8;
            temp_v0_5->words.w0 = 0xFC1115FF;
        } else {
            temp_v0_6 = self->dlist;
            self->dlist = temp_v0_6 + 8;
            temp_v0_6->words.w1 = 0xC000;
            temp_v0_6->words.w0 = 0xE3001001;
            temp_v0_7 = self->dlist;
            self->dlist = temp_v0_7 + 8;
            temp_v0_7->words.w1 = 0;
            temp_v0_7->words.w0 = 0xE3000A01;
            temp_v0_8 = self->dlist;
            self->dlist = temp_v0_8 + 8;
            temp_v0_8->words.w1 = 0x504240;
            temp_v0_8->words.w0 = 0xE200001C;
            temp_v0_9 = self->dlist;
            self->dlist = temp_v0_9 + 8;
            temp_v0_9->words.w1 = -0xC07;
            temp_v0_9->words.w0 = 0xFC11FE23;
        }
    }
    if ((self->flag & 4) != 0) {
        temp_v0_10 = self->dlist;
        self->dlist = temp_v0_10 + 8;
        temp_v0_10->words.w1 = 0;
        temp_v0_10->words.w0 = 0xFA000000;
        temp_v0_11 = self->dlist;
        self->dlist = temp_v0_11 + 8;
        temp_v0_11->words.w0 = (((self->posX + 0x24) & 0xFFF) << 0xC) | 0xE4000000 | ((self->posY + 0x24) & 0xFFF);
        temp_v0_11->words.w1 = (((temp_a1 * 2) & 7) << 0x18) | (((self->posX + 4) & 0xFFF) << 0xC) | ((self->posY + 4) & 0xFFF);
        temp_v0_12 = self->dlist;
        self->dlist = temp_v0_12 + 8;
        temp_v0_12->words.w0 = 0xE1000000;
        temp_v0_12->words.w1 = ((temp_a1 & 4) << 0x16) | (((temp_a1 >> 3) << 8) & 0xFFFF);
        temp_v0_13 = self->dlist;
        self->dlist = temp_v0_13 + 8;
        temp_v0_13->words.w0 = 0xF1000000;
        temp_v0_13->words.w1 = 0x4000400;
        temp_v0_14 = self->dlist;
        self->dlist = temp_v0_14 + 8;
        temp_v0_14->words.w0 = 0xFA000000;
        temp_v0_14->words.w1 = self->color.rgba;
    }
    temp_v0_15 = self->dlist;
    self->dlist = temp_v0_15 + 8;
    temp_v0_15->words.w0 = (((self->posX + 0x20) & 0xFFF) << 0xC) | 0xE4000000 | ((self->posY + 0x20) & 0xFFF);
    temp_v0_15->words.w1 = (((temp_a1 * 2) & 7) << 0x18) | ((self->posX & 0xFFF) << 0xC) | (self->posY & 0xFFF);
    temp_v0_16 = self->dlist;
    self->dlist = temp_v0_16 + 8;
    temp_v0_16->words.w1 = ((temp_a1 & 4) << 0x16) | (((temp_a1 >> 3) << 8) & 0xFFFF);
    temp_v0_16->words.w0 = 0xE1000000;
    temp_v0_17 = self->dlist;
    self->dlist = temp_v0_17 + 8;
    temp_v0_17->words.w1 = 0x4000400;
    temp_v0_17->words.w0 = 0xF1000000;
    self->posX += 0x20;
}

void GfxPrint_PrintChar(GfxPrint *printer, u8 c) {
    GfxPrint *self = (GfxPrint *) printer;
    s32 temp_a1;
    u8 temp_t4;
    u8 temp_t8;
    u8 phi_a1;
    u8 phi_t9;
    s32 phi_a1_2;

    temp_a1 = c & 0xFF;
    phi_a1 = (u8) temp_a1;
    if (temp_a1 == 0x20) {
        self->posX += 0x20;
        return;
    }
    if ((temp_a1 >= 0x21) && (temp_a1 < 0x7F)) {
        GfxPrint_PrintCharImpl(self, (u8) temp_a1);
        return;
    }
    if ((temp_a1 >= 0xA0) && (temp_a1 < 0xE0)) {
        if ((self->flag & 1) != 0) {
            phi_a1_2 = temp_a1 + 0x20;
            if (temp_a1 < 0xC0) {
                phi_a1_2 = temp_a1 - 0x20;
            }
            phi_a1 = phi_a1_2 & 0xFF;
        }
        GfxPrint_PrintCharImpl(self, phi_a1);
        return;
    }
    if (temp_a1 >= 0xB) {
        if (temp_a1 >= 0xE) {
            switch (temp_a1) {
            case 141:
                phi_t9 = self->flag | 1;
block_29:
                self->flag = phi_t9;
                // Duplicate return node #30. Try simplifying control flow for better match
                return;
            case 140:
                self->flag &= 0xFFFE;
                return;
            case 139:
                temp_t4 = self->flag | 2;
                self->flag = temp_t4;
                self->flag = temp_t4 | 8;
                return;
            case 138:
                temp_t8 = self->flag & 0xFFFD;
                self->flag = temp_t8;
                phi_t9 = temp_t8 | 8;
                goto block_29;
            }
        } else {
            if (temp_a1 != 0xD) {
                return;
            }
            goto block_22;
        }
    } else {
        if (temp_a1 != 0) {
            if (temp_a1 != 9) {
                if (temp_a1 == 0xA) {
                    self->posY += 0x20;
block_22:
                    self->posX = self->baseX;
                    return;
                }
                // Duplicate return node #30. Try simplifying control flow for better match
                return;
            }
            do {
                GfxPrint_PrintCharImpl(self, 0x20U);
            } while (((s32) (self->posX - self->baseX) % 0x100) != 0);
            return;
        }
    default:
    }
}

void GfxPrint_PrintStringWithSize(GfxPrint *printer, void *buffer, u32 charSize, u32 charCount) {
    GfxPrint *self = (GfxPrint *) printer;
    s32 temp_lo;
    s32 temp_s1;
    void *phi_s0;
    s32 phi_s1;

    temp_lo = charSize * charCount;
    phi_s0 = buffer;
    phi_s1 = temp_lo;
    if (temp_lo != 0) {
        do {
            GfxPrint_PrintChar(self, *phi_s0);
            temp_s1 = phi_s1 - 1;
            phi_s0 += 1;
            phi_s1 = temp_s1;
        } while (temp_s1 != 0);
    }
}

void GfxPrint_PrintString(GfxPrint *printer, s8 *str) {
    GfxPrint *self = (GfxPrint *) printer;
    s8 *temp_s1;
    u8 temp_s0;
    u8 temp_s0_2;
    u8 phi_s0;
    s8 *phi_s1;

    temp_s0 = (u8) *str;
    phi_s0 = temp_s0;
    phi_s1 = str;
    if (temp_s0 != 0) {
        do {
            temp_s1 = phi_s1 + 1;
            GfxPrint_PrintChar(self, phi_s0 & 0xFF);
            temp_s0_2 = *temp_s1;
            phi_s0 = temp_s0_2;
            phi_s1 = temp_s1;
        } while (temp_s0_2 != 0);
    }
}

GfxPrint *GfxPrint_Callback(GfxPrint *printer, s8 *str, u32 size) {
    GfxPrint *self = (GfxPrint *) printer;
    GfxPrint_PrintStringWithSize(self, (void *) str, 1U, size);
    return self;
}

void GfxPrint_Init(GfxPrint *printer) {
    GfxPrint *self = (GfxPrint *) printer;
    u8 temp_t1;
    u8 temp_t3;
    u8 temp_t5;
    u8 temp_t9;

    temp_t9 = self->flag & 0xFF7F;
    temp_t1 = temp_t9 & 0xFFFE;
    self->flag = temp_t9;
    temp_t3 = temp_t1 & 0xFFFD;
    self->flag = temp_t1;
    temp_t5 = temp_t3 | 4;
    self->flag = temp_t3;
    self->flag = temp_t5;
    self->callback = GfxPrint_Callback;
    self->dlist = NULL;
    self->posX = 0;
    self->posY = 0;
    self->baseX = 0;
    self->baseY = 0;
    self->color.rgba = 0;
    self->flag = temp_t5 | 8;
}

void GfxPrint_Destroy(GfxPrint *printer) {
    GfxPrint *self = (GfxPrint *) printer;

}

void GfxPrint_Open(GfxPrint *printer, Gfx *dList) {
    GfxPrint *self = (GfxPrint *) printer;
    u8 temp_v0;

    temp_v0 = self->flag;
    if ((temp_v0 & 0x80) == 0) {
        self->flag = temp_v0 | 0x80;
        self->dlist = dList;
        GfxPrint_InitDlist(self);
    }
}

Gfx *GfxPrint_Close(GfxPrint *printer) {
    GfxPrint *self = (GfxPrint *) printer;
    Gfx *temp_v0;

    temp_v0 = self->dlist;
    self->dlist = NULL;
    self->flag &= 0xFF7F;
    return temp_v0;
}

s32 GfxPrint_VPrintf(GfxPrint *printer, s8 *fmt, s8 *args) {
    GfxPrint *self = (GfxPrint *) printer;
    return PrintUtils_VPrintf((void *(**)(void *, s8 *, u32)) self, fmt, args);
}

s32 GfxPrint_Printf(GfxPrint *printer, s8 *fmt, s8 arg2, ? arg3, ...) {
    GfxPrint *self = (GfxPrint *) printer;
    return GfxPrint_VPrintf(self, fmt, &arg2);
}

