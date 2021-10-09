s32 func_80182CBC();                                /* extern */
s32 func_80182CCC(void *, void *, PreRenderParams *); /* extern */
? guS2DInitBg(void *, void *, PreRenderParams *);   /* extern */
static ? D_801ABAB0;                                /* unable to generate initializer */
static ? D_801E3BB0;                                /* unable to generate initializer; const */
SlowlyTask D_801F6E00;
s32 D_801F6FC0;
s8 D_801F7FE8;
u8 slowlyStack[4096];
StackEntry slowlyStackEntry;



void PreRender_SetValuesSave(PreRender *this, u32 width, u32 height, void *fbuf, void *zbuf, void *cvg) {
    this->widthSave = (u16) width;
    this->heightSave = (u16) height;
    this->fbufSave = (u16 *) fbuf;
    this->cvgSave = (u8 *) cvg;
    this->ulxSave = 0;
    this->ulySave = 0;
    this->lrxSave = width - 1;
    this->lrySave = height - 1;
    this->zbufSave = (u16 *) zbuf;
}

void PreRender_Init(PreRender *this) {
    bzero((void *) this, 0x50);
    func_80174AA0(&this->alloc);
}

void PreRender_SetValues(PreRender *this, u32 width, u32 height, void *fbuf, void *zbuf) {
    this->width = (u16) width;
    this->height = (u16) height;
    this->fbuf = (u16 *) fbuf;
    this->ulx = 0;
    this->uly = 0;
    this->lrx = width - 1;
    this->lry = height - 1;
    this->zbuf = (u16 *) zbuf;
}

void PreRender_Destroy(PreRender *this) {
    func_80174BA0(&this->alloc);
}

void func_8016FDB8(PreRender *this, Gfx **gfxp, void *buf, void *bufSave, u32 arg4) {
    Gfx *sp64;
    Gfx **temp_a0;
    Gfx *temp_t1;
    Gfx *temp_t3;
    Gfx *temp_t7;
    Gfx *temp_t8;
    Gfx *temp_v0;
    f32 temp_f4;
    f32 temp_f6;
    u16 temp_t0;
    u16 temp_t5;
    f32 phi_f6;
    f32 phi_f4;
    u32 phi_v0;

    temp_a0 = &sp64;
    sp64 = *gfxp;
    temp_t8 = sp64;
    sp64 = temp_t8 + 8;
    temp_t8->words.w1 = 0;
    temp_t8->words.w0 = 0xE7000000;
    temp_t1 = sp64;
    sp64 = temp_t1 + 8;
    temp_t1->words.w1 = (u32) bufSave;
    temp_t1->words.w0 = ((this->width - 1) & 0xFFF) | 0xFF100000;
    temp_v0 = sp64;
    sp64 = temp_v0 + 8;
    temp_v0->words.w0 = 0xED000000;
    temp_t0 = this->width;
    temp_f6 = (f32) temp_t0;
    phi_f6 = temp_f6;
    if ((s32) temp_t0 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_t5 = this->height;
    temp_f4 = (f32) temp_t5;
    phi_f4 = temp_f4;
    if ((s32) temp_t5 < 0) {
        phi_f4 = temp_f4 + 4294967296.0f;
    }
    temp_v0->words.w1 = (((s32) (phi_f6 * 4.0f) & 0xFFF) << 0xC) | ((s32) (phi_f4 * 4.0f) & 0xFFF);
    phi_v0 = 0x18U;
    if (arg4 == 1) {
        phi_v0 = 0x1CU;
    }
    func_80172758(temp_a0, buf, NULL, this->width, (u16) (s32) this->height, (u8) 0, (u8) 2, (u16) 0, (u16) 0, 0.0f, 0.0f, 1.0f, 1.0f, phi_v0);
    temp_t3 = sp64;
    sp64 = temp_t3 + 8;
    temp_t3->words.w1 = 0;
    temp_t3->words.w0 = 0xE7000000;
    temp_t7 = sp64;
    sp64 = temp_t7 + 8;
    temp_t7->words.w0 = ((this->width - 1) & 0xFFF) | 0xFF100000;
    temp_t7->words.w1 = (u32) this->fbuf;
    *gfxp = sp64;
}

void func_8016FF70(PreRender *this, Gfx **gfxp, void *buf, void *bufSave) {
    func_8016FDB8(this, gfxp, buf, bufSave, 0U);
}

void func_8016FF90(PreRender *this, Gfx **gfxp, void *buf, void *bufSave, s32 envR, s32 envG, s32 envB, s32 envA) {
    Gfx *sp6C;
    Gfx **temp_a0;
    Gfx *temp_t0;
    Gfx *temp_t1;
    Gfx *temp_t1_2;
    Gfx *temp_t5;
    Gfx *temp_t6;
    Gfx *temp_t6_2;
    Gfx *temp_t8;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    f32 temp_f4;
    f32 temp_f6;
    u16 temp_t3;
    u16 temp_t9;
    f32 phi_f6;
    f32 phi_f4;

    temp_a0 = &sp6C;
    sp6C = *gfxp;
    temp_t8 = sp6C;
    sp6C = temp_t8 + 8;
    temp_t8->words.w1 = 0;
    temp_t8->words.w0 = 0xE7000000;
    if (envA == 0xFF) {
        temp_t1 = sp6C;
        sp6C = temp_t1 + 8;
        temp_t1->words.w0 = 0xEF000CF0;
        temp_t1->words.w1 = 0xF0A4004;
    } else {
        temp_t5 = sp6C;
        sp6C = temp_t5 + 8;
        temp_t5->words.w0 = 0xEF000CA0;
        temp_t5->words.w1 = 0x504344;
    }
    temp_v0 = sp6C;
    sp6C = temp_v0 + 8;
    temp_v0->words.w0 = 0xFB000000;
    temp_v0->words.w1 = (envR << 0x18) | ((envG & 0xFF) << 0x10) | ((envB & 0xFF) << 8) | (envA & 0xFF);
    temp_t6 = sp6C;
    sp6C = temp_t6 + 8;
    temp_t6->words.w1 = -0x403;
    temp_t6->words.w0 = 0xFC12FE25;
    temp_t0 = sp6C;
    sp6C = temp_t0 + 8;
    temp_t0->words.w1 = (u32) bufSave;
    temp_t0->words.w0 = ((this->width - 1) & 0xFFF) | 0xFF100000;
    temp_v0_2 = sp6C;
    sp6C = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xED000000;
    temp_t9 = this->width;
    temp_f6 = (f32) temp_t9;
    phi_f6 = temp_f6;
    if ((s32) temp_t9 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_t3 = this->height;
    temp_f4 = (f32) temp_t3;
    phi_f4 = temp_f4;
    if ((s32) temp_t3 < 0) {
        phi_f4 = temp_f4 + 4294967296.0f;
    }
    temp_v0_2->words.w1 = (((s32) (phi_f6 * 4.0f) & 0xFFF) << 0xC) | ((s32) (phi_f4 * 4.0f) & 0xFFF);
    func_80172758(temp_a0, buf, NULL, this->width, (u16) (s32) this->height, (u8) 0, (u8) 2, (u16) 0, (u16) 0, 0.0f, 0.0f, 1.0f, 1.0f, 0xBU);
    temp_t1_2 = sp6C;
    sp6C = temp_t1_2 + 8;
    temp_t1_2->words.w1 = 0;
    temp_t1_2->words.w0 = 0xE7000000;
    temp_t6_2 = sp6C;
    sp6C = temp_t6_2 + 8;
    temp_t6_2->words.w0 = ((this->width - 1) & 0xFFF) | 0xFF100000;
    temp_t6_2->words.w1 = (u32) this->fbuf;
    *gfxp = sp6C;
}

void func_80170200(PreRender *this, Gfx **gfxp, void *buf, void *bufSave) {
    func_8016FF90(this, gfxp, buf, bufSave, 0xFF, 0xFF, 0xFF, 0xFF);
}

void func_8017023C(PreRender *this, Gfx **gfxp, void *buf, void *bufSave) {
    Gfx *temp_v1;
    Gfx *temp_v1_16;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    f32 temp_f4;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t1;
    s32 temp_t3_2;
    s32 temp_t4;
    s32 temp_v0;
    u16 temp_t3;
    u16 temp_t9;
    void *temp_v1_10;
    void *temp_v1_11;
    void *temp_v1_12;
    void *temp_v1_13;
    void *temp_v1_14;
    void *temp_v1_15;
    void *temp_v1_17;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;
    f32 phi_f4;
    s32 phi_t3;
    s32 phi_t5;
    Gfx *phi_v1;
    s32 phi_t0;
    s32 phi_t5_2;
    Gfx *phi_v1_2;

    temp_v1 = *gfxp;
    temp_v1->words.w0 = 0xE7000000;
    temp_v1->words.w1 = 0;
    temp_v1_2 = temp_v1 + 8;
    temp_v1_2->words.w0 = 0xEF000CF0;
    temp_v1_2->words.w1 = 0xF0A0004;
    temp_v1_3 = temp_v1_2 + 8;
    temp_v1_3->words.w0 = 0xFCFFFFFF;
    temp_v1_3->words.w1 = 0xFFFCFE7F;
    temp_v1_4 = temp_v1_3 + 8;
    temp_v1_4->words.w0 = ((this->width - 1) & 0xFFF) | 0xFF880000;
    temp_v1_4->words.w1 = (u32) bufSave;
    temp_v1_5 = temp_v1_4 + 8;
    temp_v1_5->words.w0 = 0xED000000;
    temp_v1_6 = temp_v1_5 + 8;
    temp_t9 = this->height;
    temp_f4 = (f32) temp_t9;
    phi_f4 = temp_f4;
    phi_v1 = temp_v1_6;
    phi_v1_2 = temp_v1_6;
    if ((s32) temp_t9 < 0) {
        phi_f4 = temp_f4 + 4294967296.0f;
    }
    temp_v1_5->words.w1 = (((s32) ((f32) this->width * 4.0f) & 0xFFF) << 0xC) | ((s32) (phi_f4 * 4.0f) & 0xFFF);
    temp_t3 = this->height;
    phi_t3 = (s32) temp_t3;
    phi_t5 = 0x1000 / (s32) (this->width * 2);
    phi_t0 = 0;
    if ((s32) temp_t3 > 0) {
        do {
            temp_v0 = this->width - 1;
            phi_t5_2 = phi_t5;
            if (phi_t3 < phi_t5) {
                phi_t5_2 = phi_t3;
            }
            phi_v1->words.w0 = (temp_v0 & 0xFFF) | 0xFD700000;
            temp_v1_7 = phi_v1 + 8;
            phi_v1->words.w1 = buf;
            temp_a3 = ((((s32) ((temp_v0 * 2) + 9) >> 3) & 0x1FF) << 9) | 0xF5700000;
            temp_v1_7->unk0 = temp_a3;
            temp_v1_8 = temp_v1_7 + 8;
            temp_v1_7->unk4 = 0x7000000;
            temp_v1_8->unk0 = 0xE6000000;
            temp_v1_8->unk4 = 0;
            temp_v1_9 = temp_v1_8 + 8;
            temp_t4 = phi_t0 + phi_t5_2;
            temp_t1 = temp_t4 - 1;
            temp_a0 = ((temp_v0 * 4) & 0xFFF) << 0xC;
            temp_a1 = (phi_t0 * 4) & 0xFFF;
            temp_a2 = (temp_t1 * 4) & 0xFFF;
            temp_v1_9->unk4 = (s32) (temp_a0 | 0x7000000 | temp_a2);
            temp_v1_9->unk0 = (s32) (temp_a1 | 0xF4000000);
            temp_v1_10 = temp_v1_9 + 8;
            temp_v1_10->unk0 = 0xE7000000U;
            temp_v1_10->unk4 = 0;
            temp_v1_11 = temp_v1_10 + 8;
            temp_v1_11->unk0 = temp_a3;
            temp_v1_11->unk4 = 0;
            temp_v1_12 = temp_v1_11 + 8;
            temp_v1_12->unk4 = (s32) (temp_a0 | temp_a2);
            temp_v1_12->unk0 = (s32) (temp_a1 | 0xF2000000);
            temp_v1_13 = temp_v1_12 + 8;
            temp_v1_13->unk0 = (s32) (((((temp_v0 + 1) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((temp_t1 + 1) * 4) & 0xFFF));
            temp_v1_13->unk4 = temp_a1;
            temp_v1_14 = temp_v1_13 + 8;
            temp_v1_14->unk0 = 0xE1000000;
            temp_v1_14->unk4 = (s32) ((phi_t0 << 5) & 0xFFFF);
            temp_v1_15 = temp_v1_14 + 8;
            temp_v1_15->unk0 = 0xF1000000;
            temp_v1_15->unk4 = 0x4000400;
            temp_v1_16 = temp_v1_15 + 8;
            temp_t3_2 = phi_t3 - phi_t5_2;
            phi_t3 = temp_t3_2;
            phi_t5 = phi_t5_2;
            phi_v1 = temp_v1_16;
            phi_t0 = temp_t4;
            phi_v1_2 = temp_v1_16;
        } while (temp_t3_2 > 0);
    }
    phi_v1_2->words.w0 = 0xE7000000;
    phi_v1_2->words.w1 = 0;
    temp_v1_17 = phi_v1_2 + 8;
    temp_v1_17->unk0 = (s32) (((this->width - 1) & 0xFFF) | 0xFF100000);
    temp_v1_17->unk4 = (u16 *) this->fbuf;
    *gfxp = temp_v1_17 + 8;
}

void func_8017057C(PreRender *this, Gfx **gfxp) {
    u16 *temp_a2;
    u16 *temp_a3;

    temp_a3 = this->zbufSave;
    if (temp_a3 != 0) {
        temp_a2 = this->zbuf;
        if (temp_a2 != 0) {
            func_8016FF70(this, gfxp, (void *) temp_a2, (void *) temp_a3);
        }
    }
}

void func_801705B4(PreRender *this, Gfx **gfxp) {
    u16 *temp_a2;
    u16 *temp_a3;

    temp_a3 = this->fbufSave;
    if (temp_a3 != 0) {
        temp_a2 = this->fbuf;
        if (temp_a2 != 0) {
            func_80170200(this, gfxp, (void *) temp_a2, (void *) temp_a3);
        }
    }
}

void func_801705EC(PreRender *this, Gfx **gfxp) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    f32 temp_f4;
    f32 temp_f6;
    u16 temp_t3;
    u16 temp_t8;
    f32 phi_f6;
    f32 phi_f4;

    temp_v0 = *gfxp;
    temp_v0->words.w0 = 0xE7000000;
    temp_v0->words.w1 = 0;
    temp_v0_2 = temp_v0 + 8;
    temp_v0_2->words.w1 = -0xF8;
    temp_v0_2->words.w0 = 0xF9000000;
    temp_v0_3 = temp_v0_2 + 8;
    temp_v0_3->words.w1 = -1;
    temp_v0_3->words.w0 = 0xEE000000;
    temp_v0_4 = temp_v0_3 + 8;
    temp_v0_4->words.w0 = 0xEF000CF0;
    temp_v0_4->words.w1 = 0xFA54044;
    temp_v0_5 = temp_v0_4 + 8;
    temp_v0_5->words.w0 = 0xED000000;
    temp_t3 = this->width;
    temp_v0_6 = temp_v0_5 + 8;
    temp_f6 = (f32) temp_t3;
    phi_f6 = temp_f6;
    if ((s32) temp_t3 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_t8 = this->height;
    temp_f4 = (f32) temp_t8;
    phi_f4 = temp_f4;
    if ((s32) temp_t8 < 0) {
        phi_f4 = temp_f4 + 4294967296.0f;
    }
    temp_v0_5->words.w1 = (((s32) (phi_f6 * 4.0f) & 0xFFF) << 0xC) | ((s32) (phi_f4 * 4.0f) & 0xFFF);
    temp_v0_6->words.w0 = ((this->width & 0x3FF) << 0xE) | 0xF6000000 | ((this->height & 0x3FF) * 4);
    temp_v0_6->words.w1 = 0;
    temp_v0_7 = temp_v0_6 + 8;
    temp_v0_7->words.w0 = 0xE7000000;
    temp_v0_7->words.w1 = 0;
    *gfxp = temp_v0_7 + 8;
}

void func_80170730(PreRender *this, Gfx **gfxp) {
    u8 *temp_a3;

    func_801705EC(this, gfxp);
    temp_a3 = this->cvgSave;
    if (temp_a3 != 0) {
        func_8017023C(this, gfxp, (void *) this->fbuf, (void *) temp_a3);
    }
}

void func_80170774(PreRender *this, Gfx **gfxp) {
    func_8016FF70(this, gfxp, (void *) this->zbufSave, (void *) this->zbuf);
}

void func_80170798(PreRender *this, Gfx **gfxp) {
    Gfx *temp_v0;
    Gfx *temp_v0_22;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a2;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_t5_2;
    u16 temp_t5;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_15;
    void *temp_v0_16;
    void *temp_v0_17;
    void *temp_v0_18;
    void *temp_v0_19;
    void *temp_v0_20;
    void *temp_v0_21;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    s32 phi_t5;
    s32 phi_s2;
    Gfx *phi_v0;
    s32 phi_a1;
    s32 phi_s2_2;
    Gfx *phi_v0_2;

    if (this->cvgSave != 0) {
        temp_v0 = *gfxp;
        temp_v0->words.w0 = 0xE7000000;
        temp_v0->words.w1 = 0;
        temp_v0_2 = temp_v0 + 8;
        temp_v0_2->words.w1 = -0xE0;
        temp_v0_2->words.w0 = 0xFB000000;
        temp_v0_3 = temp_v0_2 + 8;
        temp_v0_3->words.w0 = 0xEF100CF0;
        temp_v0_3->words.w1 = 0xF0A100C;
        temp_v0_4 = temp_v0_3 + 8;
        temp_v0_4->words.w0 = 0xFCFFE5FF;
        temp_v0_4->words.w1 = 0xFFFCFA38;
        temp_v0_5 = temp_v0_4 + 8;
        phi_v0 = temp_v0_5;
        phi_v0_2 = temp_v0_5;
        phi_s2 = 4;
        if ((s32) this->width >= 0x141) {
            phi_s2 = 2;
        }
        temp_t5 = this->height;
        phi_t5 = (s32) temp_t5;
        phi_a1 = 0;
        if ((s32) temp_t5 > 0) {
            do {
                temp_a0 = this->width - 1;
                phi_s2_2 = phi_s2;
                if (phi_t5 < phi_s2) {
                    phi_s2_2 = phi_t5;
                }
                phi_v0->words.w0 = (temp_a0 & 0xFFF) | 0xFD100000;
                temp_v0_6 = phi_v0 + 8;
                phi_v0->words.w1 = this->fbufSave;
                temp_a0_2 = ((((s32) ((temp_a0 * 2) + 9) >> 3) & 0x1FF) << 9) | 0xF5100000;
                temp_v0_6->unk0 = temp_a0_2;
                temp_v0_6->unk4 = 0x7000000;
                temp_v0_7 = temp_v0_6 + 8;
                temp_v0_7->unk0 = 0xE6000000;
                temp_v0_7->unk4 = 0;
                temp_v0_8 = temp_v0_7 + 8;
                temp_s3 = phi_a1 + phi_s2_2;
                temp_s1 = temp_s3 - 1;
                temp_t2 = ((temp_a0 * 4) & 0xFFF) << 0xC;
                temp_t4 = (phi_a1 * 4) & 0xFFF;
                temp_t3 = (temp_s1 * 4) & 0xFFF;
                temp_t0 = temp_t4 | 0xF4000000;
                temp_t1 = temp_t2 | 0x7000000 | temp_t3;
                temp_v0_8->unk4 = temp_t1;
                temp_v0_8->unk0 = temp_t0;
                temp_v0_9 = temp_v0_8 + 8;
                temp_v0_9->unk0 = 0xE7000000U;
                temp_v0_9->unk4 = 0;
                temp_v0_10 = temp_v0_9 + 8;
                temp_v0_10->unk0 = temp_a0_2;
                temp_v0_10->unk4 = 0;
                temp_v0_11 = temp_v0_10 + 8;
                temp_a2 = temp_t4 | 0xF2000000;
                temp_v0_11->unk4 = (s32) (temp_t2 | temp_t3);
                temp_v0_11->unk0 = temp_a2;
                temp_v0_12 = temp_v0_11 + 8;
                temp_v0_12->unk0 = (s32) (((this->width - 1) & 0xFFF) | 0xFD880000);
                temp_v0_13 = temp_v0_12 + 8;
                temp_v0_12->unk4 = (u8 *) this->cvgSave;
                temp_a0_3 = ((((s32) (temp_a0 + 8) >> 3) & 0x1FF) << 9) | 0xF5880000 | 0x160;
                temp_v0_13->unk0 = temp_a0_3;
                temp_v0_13->unk4 = 0x7000000;
                temp_v0_14 = temp_v0_13 + 8;
                temp_v0_14->unk0 = 0xE6000000;
                temp_v0_14->unk4 = 0;
                temp_v0_15 = temp_v0_14 + 8;
                temp_v0_15->unk0 = temp_t0;
                temp_v0_15->unk4 = temp_t1;
                temp_v0_16 = temp_v0_15 + 8;
                temp_v0_16->unk0 = 0xE7000000U;
                temp_v0_16->unk4 = 0;
                temp_v0_17 = temp_v0_16 + 8;
                temp_v0_17->unk0 = temp_a0_3;
                temp_v0_17->unk4 = 0x1000000;
                temp_v0_18 = temp_v0_17 + 8;
                temp_v0_18->unk4 = (s32) (0x1000000 | temp_t2 | temp_t3);
                temp_v0_18->unk0 = temp_a2;
                temp_v0_19 = temp_v0_18 + 8;
                temp_v0_19->unk0 = (s32) (((((temp_a0 + 1) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((temp_s1 + 1) * 4) & 0xFFF));
                temp_v0_19->unk4 = temp_t4;
                temp_v0_20 = temp_v0_19 + 8;
                temp_v0_20->unk0 = 0xE1000000;
                temp_v0_20->unk4 = (s32) ((phi_a1 << 5) & 0xFFFF);
                temp_v0_21 = temp_v0_20 + 8;
                temp_v0_21->unk0 = 0xF1000000;
                temp_v0_21->unk4 = 0x4000400;
                temp_v0_22 = temp_v0_21 + 8;
                temp_t5_2 = phi_t5 - phi_s2_2;
                phi_t5 = temp_t5_2;
                phi_s2 = phi_s2_2;
                phi_v0 = temp_v0_22;
                phi_a1 = temp_s3;
                phi_v0_2 = temp_v0_22;
            } while (temp_t5_2 > 0);
        }
        phi_v0_2->words.w0 = 0xE7000000;
        phi_v0_2->words.w1 = 0;
        *gfxp = phi_v0_2 + 8;
    }
}

void func_80170AE0(PreRender *this, Gfx **gfxp, s32 alpha) {
    func_8016FF90(this, gfxp, (void *) this->fbufSave, (void *) this->fbuf, 0xFF, 0xFF, 0xFF, alpha);
}

void func_80170B28(PreRender *this, Gfx **gfxp) {
    func_8016FF70(this, gfxp, (void *) this->fbufSave, (void *) this->fbuf);
}

void PreRender_AntiAliasAlgorithm(PreRender *this, s32 x, s32 y) {
    s32 sp138;
    ? sp134;
    ? spF8;
    ? spBC;
    ? sp80;
    u16 sp58;
    u8 sp55;
    u8 sp54;
    s32 sp44;
    s32 *sp2C;
    ? *temp_s6;
    ? *temp_t3;
    ? *temp_t4;
    ? *temp_t5;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t2;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_13;
    s32 temp_v0_14;
    s32 temp_v0_15;
    s32 temp_v0_16;
    s32 temp_v0_17;
    s32 temp_v0_18;
    s32 temp_v0_19;
    s32 temp_v0_20;
    s32 temp_v0_21;
    s32 temp_v0_22;
    s32 temp_v0_23;
    s32 temp_v0_24;
    s32 temp_v0_25;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1;
    s32 temp_v1_2;
    u32 temp_t7;
    u32 temp_t8;
    u32 temp_t8_2;
    u8 temp_t6;
    u8 temp_t8_3;
    s32 phi_t0;
    s32 phi_v0;
    s32 phi_a0;
    ? *phi_t3;
    ? *phi_t4;
    ? *phi_t5;
    ? *phi_s6;
    s32 *phi_s6_2;
    s32 phi_s2;
    s32 phi_t0_2;
    s32 phi_s3;
    s32 phi_s4;
    s32 phi_t5_2;
    s32 phi_s0;
    s32 phi_s1;
    s32 phi_s2_2;
    s32 phi_t5_3;
    s32 phi_s3_2;
    s32 phi_s0_2;
    s32 phi_s4_2;
    s32 phi_s1_2;

    phi_t0 = 0;
    phi_t3 = &spF8;
    phi_t4 = &spBC;
    phi_t5 = &sp80;
    phi_s6 = &sp134;
    do {
        temp_v1 = ((phi_t0 % 5) + x) - 2;
        temp_a3 = ((phi_t0 / 5) + y) - 1;
        phi_v0 = temp_v1;
        phi_a0 = temp_a3;
        if (temp_v1 < 0) {
            phi_v0 = 0;
        } else {
            temp_t2 = this->width - 1;
            if (temp_t2 < temp_v1) {
                phi_v0 = temp_t2;
            }
        }
        if (temp_a3 < 0) {
            phi_a0 = 0;
        } else {
            temp_v1_2 = this->height - 1;
            if (temp_v1_2 < temp_a3) {
                phi_a0 = temp_v1_2;
            }
        }
        temp_t0 = phi_t0 + 1;
        temp_t3 = phi_t3 + 4;
        temp_t4 = phi_t4 + 4;
        temp_t5 = phi_t5 + 4;
        temp_s6 = phi_s6 + 4;
        sp58 = (&this->fbufSave[phi_v0])[phi_a0 * this->width];
        temp_t8 = (u32) sp58 >> 0x1B;
        temp_t3->unk-4 = (s32) ((temp_t8 * 8) | ((s32) temp_t8 >> 2));
        temp_t7 = (u32) ((s32) sp58 << 5) >> 0x1B;
        temp_t4->unk-4 = (s32) ((temp_t7 * 8) | ((s32) temp_t7 >> 2));
        temp_t8_2 = (u32) ((s32) sp58 << 0xA) >> 0x1B;
        temp_t5->unk-4 = (s32) ((temp_t8_2 * 8) | ((s32) temp_t8_2 >> 2));
        temp_s6->unk-4 = (s32) ((s32) (&this->cvgSave[phi_v0])[phi_a0 * this->width] >> 5);
        phi_t0 = temp_t0;
        phi_t3 = temp_t3;
        phi_t4 = temp_t4;
        phi_t5 = temp_t5;
        phi_s6 = temp_s6;
    } while (temp_t0 < 0xF);
    sp44 = 4;
    phi_s6_2 = &sp138;
    phi_s2 = sp114;
    phi_t0_2 = 1;
    phi_s3 = spD8;
    phi_s4 = sp9C;
    phi_t5_2 = sp114;
    phi_s0 = spD8;
    phi_s1 = sp9C;
    do {
        phi_s6_2 += 8;
        phi_s2_2 = phi_s2;
        phi_t5_3 = phi_t5_2;
        phi_s3_2 = phi_s3;
        phi_s0_2 = phi_s0;
        phi_s4_2 = phi_s4;
        phi_s1_2 = phi_s1;
        phi_s2_2 = phi_s2;
        phi_t5_3 = phi_t5_2;
        phi_s3_2 = phi_s3;
        phi_s0_2 = phi_s0;
        phi_s4_2 = phi_s4;
        phi_s1_2 = phi_s1;
        phi_s2_2 = phi_s2;
        phi_t5_3 = phi_t5_2;
        phi_s3_2 = phi_s3;
        phi_s0_2 = phi_s0;
        phi_s4_2 = phi_s4;
        if (*phi_s6_2 == 7) {
            temp_a0 = *(&spF8 + sp44);
            sp2C = &sp80 + sp44;
            if (phi_s2 < temp_a0) {
                if ((phi_t0_2 != 1) && (spFC >= temp_a0) && (sp138 == 7)) {
                    phi_s2_2 = temp_a0;
                }
                if ((phi_t0_2 != 3) && (sp104 >= temp_a0) && (sp140 == 7)) {
                    phi_s2_2 = temp_a0;
                }
                if ((phi_t0_2 != 5) && (sp10C >= temp_a0) && (sp148 == 7)) {
                    phi_s2_2 = temp_a0;
                }
                if (phi_t0_2 != 7) {
                    temp_v0 = 7 * 4;
                    if ((*(&spF8 + temp_v0) >= temp_a0) && (*(&sp134 + temp_v0) == 7)) {
                        phi_s2_2 = temp_a0;
                    }
                }
                temp_v0_2 = 7 * 4;
                if ((phi_t0_2 != 9) && ((&spF8 + temp_v0_2)->unk8 >= temp_a0) && ((&sp134 + temp_v0_2)->unk8 == 7)) {
                    phi_s2_2 = temp_a0;
                }
                temp_v0_3 = 7 * 4;
                if ((phi_t0_2 != 0xB) && ((&spF8 + temp_v0_3)->unk10 >= temp_a0) && ((&sp134 + temp_v0_3)->unk10 == 7)) {
                    phi_s2_2 = temp_a0;
                }
                temp_v0_4 = 7 * 4;
                if ((phi_t0_2 != 0xD) && ((&spF8 + temp_v0_4)->unk18 >= temp_a0) && ((&sp134 + temp_v0_4)->unk18 == 7)) {
                    phi_s2_2 = temp_a0;
                }
            }
            temp_a1 = *(&spBC + sp44);
            if (phi_s3 < temp_a1) {
                if ((phi_t0_2 != 1) && (spC0 >= temp_a1) && (sp138 == 7)) {
                    phi_s3_2 = temp_a1;
                }
                if ((phi_t0_2 != 3) && (spC8 >= temp_a1) && (sp140 == 7)) {
                    phi_s3_2 = temp_a1;
                }
                if ((phi_t0_2 != 5) && (spD0 >= temp_a1) && (sp148 == 7)) {
                    phi_s3_2 = temp_a1;
                }
                if (phi_t0_2 != 7) {
                    temp_v0_5 = 7 * 4;
                    if ((*(&spBC + temp_v0_5) >= temp_a1) && (*(&sp134 + temp_v0_5) == 7)) {
                        phi_s3_2 = temp_a1;
                    }
                }
                temp_v0_6 = 7 * 4;
                if ((phi_t0_2 != 9) && ((&spBC + temp_v0_6)->unk8 >= temp_a1) && ((&sp134 + temp_v0_6)->unk8 == 7)) {
                    phi_s3_2 = temp_a1;
                }
                temp_v0_7 = 7 * 4;
                if ((phi_t0_2 != 0xB) && ((&spBC + temp_v0_7)->unk10 >= temp_a1) && ((&sp134 + temp_v0_7)->unk10 == 7)) {
                    phi_s3_2 = temp_a1;
                }
                temp_v0_8 = 7 * 4;
                if ((phi_t0_2 != 0xD) && ((&spBC + temp_v0_8)->unk18 >= temp_a1) && ((&sp134 + temp_v0_8)->unk18 == 7)) {
                    phi_s3_2 = temp_a1;
                }
            }
            temp_a2 = *sp2C;
            if (phi_s4 < temp_a2) {
                if ((phi_t0_2 != 1) && (sp84 >= temp_a2) && (sp138 == 7)) {
                    phi_s4_2 = temp_a2;
                }
                if ((phi_t0_2 != 3) && (sp8C >= temp_a2) && (sp140 == 7)) {
                    phi_s4_2 = temp_a2;
                }
                if ((phi_t0_2 != 5) && (sp94 >= temp_a2) && (sp148 == 7)) {
                    phi_s4_2 = temp_a2;
                }
                if (phi_t0_2 != 7) {
                    temp_v0_9 = 7 * 4;
                    if ((*(&sp80 + temp_v0_9) >= temp_a2) && (*(&sp134 + temp_v0_9) == 7)) {
                        phi_s4_2 = temp_a2;
                    }
                }
                temp_v0_10 = 7 * 4;
                if ((phi_t0_2 != 9) && ((&sp80 + temp_v0_10)->unk8 >= temp_a2) && ((&sp134 + temp_v0_10)->unk8 == 7)) {
                    phi_s4_2 = temp_a2;
                }
                temp_v0_11 = 7 * 4;
                if ((phi_t0_2 != 0xB) && ((&sp80 + temp_v0_11)->unk10 >= temp_a2) && ((&sp134 + temp_v0_11)->unk10 == 7)) {
                    phi_s4_2 = temp_a2;
                }
                temp_v0_12 = 7 * 4;
                if ((phi_t0_2 != 0xD) && ((&sp80 + temp_v0_12)->unk18 >= temp_a2) && ((&sp134 + temp_v0_12)->unk18 == 7)) {
                    phi_s4_2 = temp_a2;
                }
            }
            if (temp_a0 < phi_t5_2) {
                if ((phi_t0_2 != 1) && (temp_a0 >= spFC) && (sp138 == 7)) {
                    phi_t5_3 = temp_a0;
                }
                if ((phi_t0_2 != 3) && (temp_a0 >= sp104) && (sp140 == 7)) {
                    phi_t5_3 = temp_a0;
                }
                if ((phi_t0_2 != 5) && (temp_a0 >= sp10C) && (sp148 == 7)) {
                    phi_t5_3 = temp_a0;
                }
                if (phi_t0_2 != 7) {
                    temp_v0_13 = 7 * 4;
                    if ((temp_a0 >= *(&spF8 + temp_v0_13)) && (*(&sp134 + temp_v0_13) == 7)) {
                        phi_t5_3 = temp_a0;
                    }
                }
                temp_v0_14 = 7 * 4;
                if ((phi_t0_2 != 9) && (temp_a0 >= (&spF8 + temp_v0_14)->unk8) && ((&sp134 + temp_v0_14)->unk8 == 7)) {
                    phi_t5_3 = temp_a0;
                }
                temp_v0_15 = 7 * 4;
                if ((phi_t0_2 != 0xB) && (temp_a0 >= (&spF8 + temp_v0_15)->unk10) && ((&sp134 + temp_v0_15)->unk10 == 7)) {
                    phi_t5_3 = temp_a0;
                }
                temp_v0_16 = 7 * 4;
                if ((phi_t0_2 != 0xD) && (temp_a0 >= (&spF8 + temp_v0_16)->unk18) && ((&sp134 + temp_v0_16)->unk18 == 7)) {
                    phi_t5_3 = temp_a0;
                }
            }
            if (temp_a1 < phi_s0) {
                if ((phi_t0_2 != 1) && (temp_a1 >= spC0) && (sp138 == 7)) {
                    phi_s0_2 = temp_a1;
                }
                if ((phi_t0_2 != 3) && (temp_a1 >= spC8) && (sp140 == 7)) {
                    phi_s0_2 = temp_a1;
                }
                if ((phi_t0_2 != 5) && (temp_a1 >= spD0) && (sp148 == 7)) {
                    phi_s0_2 = temp_a1;
                }
                if (phi_t0_2 != 7) {
                    temp_v0_17 = 7 * 4;
                    if ((temp_a1 >= *(&spBC + temp_v0_17)) && (*(&sp134 + temp_v0_17) == 7)) {
                        phi_s0_2 = temp_a1;
                    }
                }
                temp_v0_18 = 7 * 4;
                if ((phi_t0_2 != 9) && (temp_a1 >= (&spBC + temp_v0_18)->unk8) && ((&sp134 + temp_v0_18)->unk8 == 7)) {
                    phi_s0_2 = temp_a1;
                }
                temp_v0_19 = 7 * 4;
                if ((phi_t0_2 != 0xB) && (temp_a1 >= (&spBC + temp_v0_19)->unk10) && ((&sp134 + temp_v0_19)->unk10 == 7)) {
                    phi_s0_2 = temp_a1;
                }
                temp_v0_20 = 7 * 4;
                if ((phi_t0_2 != 0xD) && (temp_a1 >= (&spBC + temp_v0_20)->unk18) && ((&sp134 + temp_v0_20)->unk18 == 7)) {
                    phi_s0_2 = temp_a1;
                }
            }
            if (temp_a2 < phi_s1) {
                if ((phi_t0_2 != 1) && (temp_a2 >= sp84) && (sp138 == 7)) {
                    phi_s1_2 = temp_a2;
                }
                if ((phi_t0_2 != 3) && (temp_a2 >= sp8C) && (sp140 == 7)) {
                    phi_s1_2 = temp_a2;
                }
                if ((phi_t0_2 != 5) && (temp_a2 >= sp94) && (sp148 == 7)) {
                    phi_s1_2 = temp_a2;
                }
                if (phi_t0_2 != 7) {
                    temp_v0_21 = 7 * 4;
                    if ((temp_a2 >= *(&sp80 + temp_v0_21)) && (*(&sp134 + temp_v0_21) == 7)) {
                        phi_s1_2 = temp_a2;
                    }
                }
                temp_v0_22 = 7 * 4;
                if ((phi_t0_2 != 9) && (temp_a2 >= (&sp80 + temp_v0_22)->unk8) && ((&sp134 + temp_v0_22)->unk8 == 7)) {
                    phi_s1_2 = temp_a2;
                }
                temp_v0_23 = 7 * 4;
                if ((phi_t0_2 != 0xB) && (temp_a2 >= (&sp80 + temp_v0_23)->unk10) && ((&sp134 + temp_v0_23)->unk10 == 7)) {
                    phi_s1_2 = temp_a2;
                }
                temp_v0_24 = 7 * 4;
                if ((phi_t0_2 != 0xD) && (temp_a2 >= (&sp80 + temp_v0_24)->unk18) && ((&sp134 + temp_v0_24)->unk18 == 7)) {
                    phi_s1_2 = temp_a2;
                }
            }
        }
        temp_t0_2 = phi_t0_2 + 2;
        sp44 += 8;
        phi_s2 = phi_s2_2;
        phi_t0_2 = temp_t0_2;
        phi_s3 = phi_s3_2;
        phi_s4 = phi_s4_2;
        phi_t5_2 = phi_t5_3;
        phi_s0 = phi_s0_2;
        phi_s1 = phi_s1_2;
    } while (temp_t0_2 != 0xF);
    temp_v0_25 = 7 - sp150;
    sp54 = (((u32) (((s32) ((((phi_s2_2 + phi_t5_3) - (sp114 * 2)) * temp_v0_25) + 4) >> 3) + sp114) >> 3) * 8) | (sp54 & 0xFF07);
    sp54 = ((((u32) (((s32) ((((phi_s3_2 + phi_s0_2) - (spD8 * 2)) * temp_v0_25) + 4) >> 3) + spD8) >> 3) << 6) & 0x7C0) | ((u16) sp54 & 0xF83F);
    temp_t8_3 = ((((u32) (((s32) ((((phi_s4_2 + phi_s1_2) - (sp9C * 2)) * temp_v0_25) + 4) >> 3) + sp9C) >> 3) * 2) & 0x3E) | (sp55 & 0xFFC1);
    temp_t6 = temp_t8_3 | 1;
    sp55 = temp_t8_3;
    sp55 = temp_t6;
    (&this->fbufSave[x])[y * this->width] = (u16) sp54;
}

void PreRender_ApplyAntiAliasingFilter(PreRender *this) {
    s32 temp_s0;
    s32 temp_s2;
    u16 temp_v0;
    s32 phi_v1;
    s32 phi_s0;
    s32 phi_s2;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s32 phi_v0;

    temp_v0 = this->height;
    phi_s2 = 0;
    phi_v0 = (s32) temp_v0;
    if ((s32) temp_v0 > 0) {
        phi_v1 = (s32) this->width;
        do {
            phi_s0 = 0;
            phi_v1_2 = phi_v1;
            if (phi_v1 > 0) {
                do {
                    phi_v1_3 = phi_v1_2;
                    if ((((s32) (&this->cvgSave[phi_s0])[phi_s2 * phi_v1_2] >> 5) + 1) != 8) {
                        PreRender_AntiAliasAlgorithm(this, phi_s0, phi_s2);
                        phi_v1_3 = (s32) this->width;
                    }
                    temp_s0 = phi_s0 + 1;
                    phi_s0 = temp_s0;
                    phi_v1_2 = phi_v1_3;
                    phi_v1 = phi_v1_3;
                } while (temp_s0 < phi_v1_3);
                phi_v0 = (s32) this->height;
            }
            temp_s2 = phi_s2 + 1;
            phi_s2 = temp_s2;
        } while (temp_s2 < phi_v0);
    }
}

u32 func_801716C4(u8 *arg0, u8 *arg1, u8 *arg2) {
    s32 sp44;
    s32 sp40;
    s32 sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    s32 sp28;
    s32 *temp_s3;
    u32 temp_s0;
    u8 *temp_a3;
    u8 *temp_t0;
    u8 *temp_t1;
    u8 *temp_t2;
    u8 *temp_t3;
    u8 *temp_t4;
    u8 *temp_t5;
    u8 *temp_v0;
    u8 *temp_v1;
    u32 phi_s0;
    s32 *phi_s2;
    u32 phi_s1;

    temp_s3 = &sp28;
    sp28 = 0;
    sp2C = 0;
    sp30 = 0;
    sp34 = 0;
    sp38 = 0;
    sp3C = 0;
    sp40 = 0;
    sp44 = 0;
    temp_v0 = temp_s3 + arg0->unk0;
    *temp_v0 += 1;
    temp_v1 = temp_s3 + arg0->unk1;
    *temp_v1 += 1;
    temp_a3 = temp_s3 + arg0->unk2;
    *temp_a3 += 1;
    temp_t0 = temp_s3 + arg1->unk0;
    *temp_t0 += 1;
    temp_t1 = temp_s3 + arg1->unk1;
    *temp_t1 += 1;
    temp_t2 = temp_s3 + arg1->unk2;
    *temp_t2 += 1;
    temp_t3 = temp_s3 + arg2->unk0;
    *temp_t3 += 1;
    temp_t4 = temp_s3 + arg2->unk1;
    *temp_t4 += 1;
    temp_t5 = temp_s3 + arg2->unk2;
    *temp_t5 += 1;
    phi_s0 = 0U;
    phi_s2 = &sp28;
    phi_s1 = 0U;
loop_1:
    temp_s0 = phi_s0 + *phi_s2;
    phi_s0 = temp_s0;
    phi_s2 += 1;
    if (temp_s0 < 5U) {
        phi_s1 += 1;
        goto loop_1;
    }
    return phi_s1;
}

void func_801717F8(PreRender *this) {
    ? *spDC;
    ? *spD8;
    ? *spD4;
    ? *spD0;
    void *spCC;
    void *spC8;
    void *spC4;
    void *spC0;
    void *spBC;
    void *spB8;
    u16 spB0;
    u8 spAD;
    u8 spAC;
    s32 sp80;
    u32 sp78;
    s32 sp74;
    s32 sp70;
    ? sp10;
    ? **temp_v0;
    ? *temp_v1_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s1;
    s32 temp_s4_2;
    s32 temp_t1;
    s32 temp_t1_2;
    u16 *temp_v0_2;
    u16 temp_s6;
    u32 temp_s4;
    u32 temp_s7;
    u32 temp_t7;
    u8 *temp_a2;
    u8 *temp_a2_2;
    u8 *temp_t5;
    u8 temp_t7_2;
    u8 temp_t8;
    void **temp_a0;
    void **temp_v1;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_a3_3;
    void *temp_ra;
    void *temp_s5;
    void *temp_s5_2;
    void *temp_v1_3;
    s32 phi_s0;
    u32 phi_s4;
    s32 phi_s0_2;
    u16 *phi_v0;
    ? *phi_v1;
    void *phi_a0;
    void *phi_a1;
    u8 *phi_a2;
    void *phi_a3;
    s32 phi_s0_3;
    u16 *phi_v0_2;
    void *phi_v1_2;
    void *phi_a0_2;
    void *phi_a1_2;
    u8 *phi_a2_2;
    void *phi_a3_2;
    s32 phi_s0_4;
    s32 phi_s0_5;
    s32 phi_s4_2;
    s32 phi_s0_6;

    temp_s6 = this->width;
    spD4 = temp_s6 + &sp10;
    spD8 = (temp_s6 * 2) + &sp10;
    spC4 = (temp_s6 * 3) + &sp10;
    spC8 = (temp_s6 * 4) + &sp10;
    spCC = (temp_s6 * 5) + &sp10;
    spB8 = (temp_s6 * 6) + &sp10;
    spD0 = &sp10;
    spBC = (temp_s6 * 7) + &sp10;
    spC0 = (temp_s6 * 8) + &sp10;
    phi_s4 = 0U;
    do {
        phi_s0 = 0;
        phi_s0_2 = 0;
        phi_s0_3 = 0;
        phi_s0_6 = 0;
        if (temp_s6 != 0) {
            temp_t1 = temp_s6 & 3;
            temp_a0 = &(&spB8)[phi_s4];
            temp_v1 = &(&spC4)[phi_s4];
            temp_v0 = &(&spD0)[phi_s4];
            if (temp_t1 != 0) {
                do {
                    spB0 = (&this->fbufSave[phi_s0])[phi_s4 * this->width];
                    *(*temp_v0 + phi_s0) = (s8) ((u32) spB0 >> 0x1B);
                    *(*temp_v1 + phi_s0) = (s8) ((u32) ((s32) spB0 << 5) >> 0x1B);
                    temp_s0 = phi_s0 + 1;
                    *(*temp_a0 + phi_s0) = (s8) ((u32) ((s32) spB0 << 0xA) >> 0x1B);
                    phi_s0 = temp_s0;
                    phi_s0_2 = temp_s0;
                } while (temp_t1 != temp_s0);
                if (temp_s0 != temp_s6) {
                    goto loop_6;
                }
            } else {
                do {
loop_6:
                    spB0 = (&this->fbufSave[phi_s0_2])[phi_s4 * this->width];
                    *(*temp_v0 + phi_s0_2) = (s8) ((u32) spB0 >> 0x1B);
                    *(*temp_v1 + phi_s0_2) = (s8) ((u32) ((s32) spB0 << 5) >> 0x1B);
                    *(*temp_a0 + phi_s0_2) = (s8) ((u32) ((s32) spB0 << 0xA) >> 0x1B);
                    spB0 = (&this->fbufSave[phi_s0_2])[phi_s4 * this->width].unk2;
                    (*temp_v0 + phi_s0_2)->unk1 = (s8) ((u32) spB0 >> 0x1B);
                    (*temp_v1 + phi_s0_2)->unk1 = (s8) ((u32) ((s32) spB0 << 5) >> 0x1B);
                    (*temp_a0 + phi_s0_2)->unk1 = (s8) ((u32) ((s32) spB0 << 0xA) >> 0x1B);
                    spB0 = (&this->fbufSave[phi_s0_2])[phi_s4 * this->width].unk4;
                    (*temp_v0 + phi_s0_2)->unk2 = (s8) ((u32) spB0 >> 0x1B);
                    (*temp_v1 + phi_s0_2)->unk2 = (s8) ((u32) ((s32) spB0 << 5) >> 0x1B);
                    (*temp_a0 + phi_s0_2)->unk2 = (s8) ((u32) ((s32) spB0 << 0xA) >> 0x1B);
                    spB0 = (&this->fbufSave[phi_s0_2])[phi_s4 * this->width].unk6;
                    (*temp_v0 + phi_s0_2)->unk3 = (s8) ((u32) spB0 >> 0x1B);
                    (*temp_v1 + phi_s0_2)->unk3 = (s8) ((u32) ((s32) spB0 << 5) >> 0x1B);
                    temp_s0_2 = phi_s0_2 + 4;
                    (*temp_a0 + phi_s0_2)->unk3 = (s8) ((u32) ((s32) spB0 << 0xA) >> 0x1B);
                    phi_s0_2 = temp_s0_2;
                } while (temp_s0_2 != temp_s6);
            }
        }
        temp_s4 = phi_s4 + 1;
        phi_s4 = temp_s4;
    } while (temp_s4 < 2U);
    temp_t7 = this->height - 1;
    sp78 = temp_t7;
    phi_s4_2 = 1;
    if (temp_t7 >= 2U) {
        sp80 = temp_s6 * 2;
        sp70 = temp_s6 * 2;
        sp74 = (s32) temp_s6;
        temp_s7 = temp_s6 - 1;
        spDC = &sp10;
        do {
            temp_t5 = &this->cvgSave[sp74];
            temp_ra = this->fbufSave + sp70;
            if (temp_s6 != 0) {
                temp_t1_2 = temp_s6 & 3;
                temp_s5 = (temp_s6 * 9) + spDC;
                if (temp_t1_2 != 0) {
                    phi_v0 = temp_ra + (0 * 2);
                    phi_v1 = spD8;
                    phi_a0 = spCC;
                    phi_a1 = spC0;
                    phi_a2 = temp_t5;
                    phi_a3 = temp_s5;
                    do {
                        temp_s0_3 = phi_s0_3 + 1;
                        spB0 = *phi_v0;
                        temp_v1_2 = phi_v1 + 1;
                        temp_a0_2 = phi_a0 + 1;
                        temp_v1_2->unk-1 = (s8) ((u32) spB0 >> 0x1B);
                        temp_a1 = phi_a1 + 1;
                        temp_a2 = phi_a2 + 1;
                        temp_a0_2->unk-1 = (s8) ((u32) ((s32) spB0 << 5) >> 0x1B);
                        temp_a3 = phi_a3 + 1;
                        temp_a1->unk-1 = (s8) ((u32) ((s32) spB0 << 0xA) >> 0x1B);
                        temp_a3->unk-1 = (s8) (((s32) temp_a2->unk-1 >> 5) == 7);
                        phi_v0 += 2;
                        phi_v1 = temp_v1_2;
                        phi_a0 = temp_a0_2;
                        phi_a1 = temp_a1;
                        phi_a2 = temp_a2;
                        phi_a3 = temp_a3;
                        phi_s0_3 = temp_s0_3;
                        phi_s0_6 = temp_s0_3;
                    } while (temp_t1_2 != temp_s0_3);
                    if (temp_s0_3 != temp_s6) {
                        goto block_15;
                    }
                } else {
block_15:
                    phi_v0_2 = temp_ra + (phi_s0_6 * 2);
                    phi_v1_2 = spD8 + phi_s0_6;
                    phi_a0_2 = spCC + phi_s0_6;
                    phi_a1_2 = spC0 + phi_s0_6;
                    phi_a2_2 = &temp_t5[phi_s0_6];
                    phi_a3_2 = phi_s0_6 + temp_s5;
                    phi_s0_4 = phi_s0_6;
                    do {
                        temp_s0_4 = phi_s0_4 + 4;
                        temp_v0_2 = phi_v0_2 + 8;
                        spB0 = *phi_v0_2;
                        temp_v1_3 = phi_v1_2 + 4;
                        temp_a0_3 = phi_a0_2 + 4;
                        temp_v1_3->unk-4 = (s8) ((u32) spB0 >> 0x1B);
                        temp_a1_2 = phi_a1_2 + 4;
                        temp_a2_2 = phi_a2_2 + 4;
                        temp_a0_3->unk-4 = (s8) ((u32) ((s32) spB0 << 5) >> 0x1B);
                        temp_a3_2 = phi_a3_2 + 4;
                        temp_a1_2->unk-4 = (s8) ((u32) ((s32) spB0 << 0xA) >> 0x1B);
                        temp_a3_2->unk-4 = (s8) (((s32) temp_a2_2->unk-4 >> 5) == 7);
                        spB0 = temp_v0_2->unk-6;
                        temp_v1_3->unk-3 = (s8) ((u32) spB0 >> 0x1B);
                        temp_a0_3->unk-3 = (s8) ((u32) ((s32) spB0 << 5) >> 0x1B);
                        temp_a1_2->unk-3 = (s8) ((u32) ((s32) spB0 << 0xA) >> 0x1B);
                        temp_a3_2->unk-3 = (s8) (((s32) temp_a2_2->unk-3 >> 5) == 7);
                        spB0 = temp_v0_2->unk-4;
                        temp_v1_3->unk-2 = (s8) ((u32) spB0 >> 0x1B);
                        temp_a0_3->unk-2 = (s8) ((u32) ((s32) spB0 << 5) >> 0x1B);
                        temp_a1_2->unk-2 = (s8) ((u32) ((s32) spB0 << 0xA) >> 0x1B);
                        temp_a3_2->unk-2 = (s8) (((s32) temp_a2_2->unk-2 >> 5) == 7);
                        spB0 = temp_v0_2->unk-2;
                        temp_v1_3->unk-1 = (s8) ((u32) spB0 >> 0x1B);
                        temp_a0_3->unk-1 = (s8) ((u32) ((s32) spB0 << 5) >> 0x1B);
                        temp_a1_2->unk-1 = (s8) ((u32) ((s32) spB0 << 0xA) >> 0x1B);
                        temp_a3_2->unk-1 = (s8) (((s32) temp_a2_2->unk-1 >> 5) == 7);
                        phi_v0_2 = temp_v0_2;
                        phi_v1_2 = temp_v1_3;
                        phi_a0_2 = temp_a0_3;
                        phi_a1_2 = temp_a1_2;
                        phi_a2_2 = temp_a2_2;
                        phi_a3_2 = temp_a3_2;
                        phi_s0_4 = temp_s0_4;
                    } while (temp_s0_4 != temp_s6);
                }
            }
            phi_s0_5 = 1;
            if (temp_s7 >= 2U) {
                temp_s5_2 = (temp_s6 * 9) + spDC;
                do {
                    temp_s1 = phi_s0_5 - 1;
                    temp_a3_3 = temp_s5_2 + phi_s0_5;
                    if ((*(temp_s1 + temp_s5_2) == 0) || (temp_a3_3->unk0 == 0) || (temp_a3_3->unk1 == 0)) {
                        spAC = (func_801716C4(spD0 + temp_s1, spD4 + temp_s1, spD8 + temp_s1) * 8) | (spAC & 0xFF07);
                        spAC = ((func_801716C4(spC4 + temp_s1, spC8 + temp_s1, spCC + temp_s1) << 6) & 0x7C0) | ((u16) spAC & 0xF83F);
                        temp_t8 = ((func_801716C4(spB8 + temp_s1, spBC + temp_s1, spC0 + temp_s1) * 2) & 0x3E) | (spAD & 0xFFC1);
                        temp_t7_2 = temp_t8;
                        spAD = temp_t8;
                        spAD = temp_t7_2 | 1;
                        (&this->fbufSave[phi_s0_5])[phi_s4_2 * this->width] = (u16) spAC;
                    }
                    temp_s0_5 = phi_s0_5 + 1;
                    phi_s0_5 = temp_s0_5;
                } while (temp_s0_5 != temp_s7);
            }
            spD0 = spD4;
            spC4 = spC8;
            spB8 = spBC;
            spD4 = spD8;
            spC8 = spCC;
            spBC = spC0;
            sp74 += temp_s6;
            temp_s4_2 = phi_s4_2 + 1;
            sp70 += sp80;
            phi_s4_2 = temp_s4_2;
        } while (temp_s4_2 != sp78);
    }
}

void PreRender_ApplyFilters(PreRender *this) {
    if ((this->cvgSave == 0) || (this->fbufSave == 0)) {
        this->unk_4D = 0;
        return;
    }
    this->unk_4D = 1;
    PreRender_ApplyAntiAliasingFilter(this);
    func_801717F8(this);
    this->unk_4D = 2;
}

void PreRender_ApplyFiltersSlowlyInit(PreRender *this) {
    if ((this->cvgSave != 0) && (this->fbufSave != 0)) {
        if (D_801F6FC0 != 0) {
            StackCheck_Cleanup(&slowlyStackEntry);
            Slowly_Stop(&D_801F6E00);
        }
        this->unk_4D = 1;
        StackCheck_Init(&slowlyStackEntry, (void *) slowlyStack, (void *) &D_801F7FE8, 0U, 0x100, "slowly");
        Slowly_Start(&D_801F6E00, (void *) &D_801F7FE8, PreRender_ApplyFilters, (void *) this, NULL);
        D_801F6FC0 = 1;
    }
}

void PreRender_ApplyFiltersSlowlyDestroy(PreRender *this) {
    if (D_801F6FC0 != 0) {
        StackCheck_Cleanup(&slowlyStackEntry);
        Slowly_Stop(&D_801F6E00);
        D_801F6FC0 = 0;
    }
}

void func_801720C4(PreRender *this) {
    if ((this->cvgSave != 0) && (this->fbufSave != 0)) {
        PreRender_ApplyFilters(this);
    }
}

void func_801720FC(PreRenderParams *params, Gfx **gfxp) {
    void *sp6C;
    void *sp68;
    s32 sp64;
    Gfx *sp60;
    s32 sp5C;
    void *sp1C;
    Gfx **temp_a0;
    Gfx *temp_a1;
    PreRenderParams *temp_a2;
    f32 temp_f6;
    f32 temp_f8;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t4;
    s32 temp_t8;
    u32 temp_v1;
    void *temp_a1_10;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_a1_5;
    void *temp_a1_6;
    void *temp_a1_7;
    void *temp_a1_8;
    void *temp_a1_9;
    void *temp_v0;
    s32 phi_t0;
    Gfx *phi_a1;
    void *phi_a1_2;
    void *phi_a1_3;
    f32 phi_f6;
    f32 phi_f8;
    void *phi_a1_4;
    void *phi_a1_5;
    void *phi_a1_6;
    void *phi_a0;
    PreRenderParams *phi_a2;
    Gfx *phi_a1_7;

    temp_v1 = params->flags;
    temp_a0 = &sp60;
    temp_t1 = temp_v1 & 8;
    temp_t1_2 = temp_t1 != 0;
    if ((temp_v1 & 4) != 0) {
        phi_t0 = 1;
    } else {
        phi_t0 = 0;
    }
    sp5C = temp_t1_2;
    sp64 = phi_t0;
    params = params;
    sp60 = *gfxp;
    temp_v0 = Graph_DlistAlloc(temp_a0, 0x28U);
    temp_a2 = params;
    temp_v0->unk0 = 0;
    temp_v0->unk2 = (s16) ((temp_a2->width * 4) + 1);
    temp_v0->unk8 = 0U;
    temp_v0->unk4 = (s16) (s32) (temp_a2->x * 4.0f);
    temp_v0->unkA = (s16) ((temp_a2->height * 4) + 1);
    temp_v0->unkC = (s16) (s32) (temp_a2->y * 4.0f);
    temp_v0->unk14 = 0xFFF4;
    temp_v0->unk10 = (void *) temp_a2->timg;
    temp_v0->unk16 = (u8) temp_a2->fmt;
    temp_v0->unk18 = 0;
    temp_v0->unk1A = 0;
    temp_v0->unk17 = (u8) temp_a2->siz;
    phi_a1 = sp60;
    phi_a2 = temp_a2;
    if (temp_t1_2 != 0) {
        temp_a1 = sp60 + 8;
        sp60->words.w0 = 0xE1000000;
        sp60->words.w1 = (u32) (&D_801E3BB0 - 0x80000000);
        temp_a1->words.w0 = 0xDD0007FF;
        temp_a1->words.w1 = (u32) (&D_801ABAB0 - 0x80000000);
        phi_a1 = temp_a1 + 8;
    }
    if ((temp_a2->fmt == 2) && (temp_a2->tlut != 0)) {
        phi_a1->words.w0 = 0xFD100000;
        temp_a1_2 = phi_a1 + 8;
        phi_a1->words.w1 = temp_a2->tlut;
        temp_a1_2->unk0 = 0xE8000000;
        temp_a1_2->unk4 = 0;
        temp_a1_3 = temp_a1_2 + 8;
        temp_a1_3->unk0 = 0xF5000100;
        temp_a1_3->unk4 = 0x7000000;
        temp_a1_4 = temp_a1_3 + 8;
        temp_a1_4->unk0 = 0xE6000000;
        temp_a1_4->unk4 = 0;
        temp_a1_5 = temp_a1_4 + 8;
        temp_a1_5->unk0 = 0xF0000000;
        temp_a1_6 = temp_a1_5 + 8;
        temp_a1_5->unk4 = (s32) ((((temp_a2->unk_10 - 1) & 0x3FF) << 0xE) | 0x7000000);
        temp_a1_6->unk0 = 0xE7000000;
        temp_a1_6->unk4 = 0;
        phi_a1_2 = temp_a1_6 + 8;
    } else {
        phi_a1->words.w0 = 0xE7000000;
        phi_a1->words.w1 = NULL;
        phi_a1_2 = phi_a1 + 8;
    }
    phi_a1_4 = phi_a1_2;
    if ((temp_a2->flags & 0x10) != 0) {
        temp_v0->unk6 = (s16) (temp_a2->width * 4);
        temp_v0->unkE = (s16) (temp_a2->height * 4);
        sp5C = temp_t1_2;
        sp64 = phi_t0;
        params = temp_a2;
        sp6C = phi_a1_2;
        sp68 = temp_v0;
        guS2DInitBg(temp_v0, phi_a1_2, temp_a2);
        phi_a1_3 = phi_a1_2;
        phi_a0 = temp_v0;
        phi_a2 = params;
        if ((params->flags & 1) == 0) {
            phi_a1_2->unk0 = (s32) (((params->tt | 0x200000) & 0xFFFFFF) | 0xEF000000);
            phi_a1_2->unk4 = phi_t0;
            phi_a1_3 = phi_a1_2 + 8;
        }
        phi_a1_3->unk0 = 0xA000000;
        phi_a1_3->unk4 = temp_v0;
        phi_a1_6 = phi_a1_3 + 8;
    } else {
        temp_t8 = temp_a2->width * 4;
        temp_f6 = (f32) temp_t8;
        phi_f6 = temp_f6;
        if (temp_t8 < 0) {
            phi_f6 = temp_f6 + 4294967296.0f;
        }
        temp_v0->unk6 = (s16) (u32) (phi_f6 * temp_a2->xScale);
        temp_t4 = temp_a2->height * 4;
        temp_f8 = (f32) temp_t4;
        phi_f8 = temp_f8;
        if (temp_t4 < 0) {
            phi_f8 = temp_f8 + 4294967296.0f;
        }
        temp_v0->unkE = (s16) (u32) (phi_f8 * temp_a2->yScale);
        temp_v0->unk1C = (s16) (u32) (1024.0f / temp_a2->xScale);
        temp_v0->unk1E = (s16) (u32) (1024.0f / temp_a2->yScale);
        temp_v0->unk20 = (s32) temp_v0->unk8;
        phi_a0 = phi_a1_2;
        if ((temp_a2->flags & 1) == 0) {
            phi_a1_2->unk4 = (s32) (phi_t0 | 0xA03008);
            phi_a1_2->unk0 = (s32) (((temp_a2->tt | 0xCF0) & 0xFFFFFF) | 0xEF000000);
            phi_a1_4 = phi_a1_2 + 8;
        }
        phi_a1_5 = phi_a1_4;
        if ((temp_a2->flags & 2) == 0) {
            phi_a1_4->unk0 = 0xFCFFFFFF;
            phi_a1_4->unk4 = 0xFFFCFC7E;
            phi_a1_5 = phi_a1_4 + 8;
        }
        phi_a1_5->unk4 = 0xC;
        phi_a1_5->unk0 = 0xB000000;
        temp_a1_7 = phi_a1_5 + 8;
        temp_a1_7->unk0 = 0x9000000;
        temp_a1_7->unk4 = temp_v0;
        phi_a1_6 = temp_a1_7 + 8;
    }
    phi_a1_6->unk0 = 0xE7000000;
    phi_a1_6->unk4 = 0;
    temp_a1_8 = phi_a1_6 + 8;
    phi_a1_7 = (Gfx *) temp_a1_8;
    if ((temp_t1 != 0) != 0) {
        temp_a1_8->unk0 = 0xE1000000;
        temp_a1_9 = temp_a1_8 + 8;
        sp6C = temp_a1_9;
        sp1C = temp_a1_8;
        temp_a1_8->unk4 = func_80182CCC(phi_a0, temp_a1_9, phi_a2);
        temp_a1_9->unk0 = 0xDD0007FF;
        temp_a1_10 = temp_a1_9 + 8;
        sp6C = temp_a1_10;
        sp1C = temp_a1_9;
        temp_a1_9->unk4 = func_80182CBC();
        phi_a1_7 = (Gfx *) temp_a1_10;
    }
    *gfxp = phi_a1_7;
}

void func_80172758(Gfx **gfxp, void *timg, void *tlut, u16 width, u16 height, u8 fmt, u8 siz, u16 tt, u16 arg8, f32 x, f32 y, f32 xScale, f32 yScale, u32 flags) {
    u32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    u16 sp30;
    u16 sp2E;
    u8 sp2D;
    u8 sp2C;
    u16 sp2A;
    s16 sp28;
    void *sp24;
    void *sp20;
    void **temp_a0;

    sp24 = tlut;
    sp28 = width & 0xFFFF;
    temp_a0 = &sp20;
    sp20 = timg;
    sp2A = height;
    sp2C = fmt;
    sp2D = siz;
    sp2E = tt;
    sp30 = arg8;
    sp34 = x;
    sp38 = y;
    sp3C = xScale;
    sp40 = yScale;
    sp44 = flags;
    func_801720FC((PreRenderParams *) temp_a0, gfxp);
}

