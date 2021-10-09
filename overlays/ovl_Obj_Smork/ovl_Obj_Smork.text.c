s32 func_80A3D680(s16 arg0);                        /* static */
void func_80A3D940(void *arg0);                     /* static */
void func_80A3D9C4(void *arg0, void *arg1);         /* static */
extern ? D_06001C00;
static void D_80A3E290;                             /* unable to generate initializer */
static u8 D_80A3E29F = {0, 0, 0, 8, 0xD5, 2, 0x5B, 0, 0, 2, 0, 3, 0xCC, 0x4D, 0x44, 0x34};
static u8 D_80A3E2AF = {0xFF, 0, 0, 0x1B, 0xAC, 1, 0x2D, 0, 0, 2, 0, 0xE9, 0xD0, 0, 0, 0};
static u8 D_80A3E2BF = {
    0,
    0xFB,
    0xAD,
    8,
    0xD5,
    0,
    0,
    0,
    0,
    0,
    0,
    4,
    0,
    0,
    0,
    0,
    0,
    5,
    0x81,
    0x14,
    5,
    1,
    0x2D,
    0,
    0,
    4,
    0x8B,
    0xF4,
    0x69,
    0,
    0,
    0,
    0,
    4,
    0x53,
    8,
    0xD5,
    0,
    0,
    0,
    0,
    4,
    0,
    4,
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
    0,
    2,
    0,
    0x10,
    0x3A,
    0x26,
    0x21,
    0x19,
    0x7E,
};

typedef struct ObjSmork {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ char pad144[0x4];
    /* 0x0148 */ void unk148;                       /* inferred */
    /* 0x0149 */ char pad149[0x7B];
    /* 0x01C4 */ s8 unk1C4;                         /* inferred */
    /* 0x01C5 */ char pad1C5[0x1];                  /* maybe part of unk1C4[2]? */
    /* 0x01C6 */ s16 unk1C6;                        /* inferred */
} ObjSmork;                                         /* size 0x1C8 */

s32 func_80A3D680(s16 arg0) {
    f32 temp_f6;
    s32 temp_f18;
    s32 temp_lo;
    u16 temp_t6;
    f32 phi_f6;
    s32 phi_v1;

    temp_t6 = gSaveContext.time;
    temp_f6 = (f32) temp_t6;
    phi_f6 = temp_f6;
    phi_v1 = 0;
    if ((s32) temp_t6 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_f18 = (s32) (phi_f6 * 0.021972656f);
    temp_lo = (s32) (s16) temp_f18 / 0x3C;
    if (temp_lo >= 0x10) {
        if ((temp_lo == 0x10) && (((s32) (s16) temp_f18 % 0x3C) < (s32) arg0)) {
            return 0;
        }
        if (temp_lo >= 0x14) {
            return 0;
        }
        if ((temp_lo == 0x13) && ((s32) arg0 < ((s32) (s16) temp_f18 % 0x3C))) {
            return 0;
        }
        phi_v1 = 3;
        // Duplicate return node #31. Try simplifying control flow for better match
        return phi_v1;
    }
    if (temp_lo >= 0xB) {
        if ((temp_lo == 0xB) && (((s32) (s16) temp_f18 % 0x3C) < (s32) arg0)) {
            return 0;
        }
        if (temp_lo >= 0xE) {
            return 0;
        }
        if ((temp_lo == 0xD) && ((s32) arg0 < ((s32) (s16) temp_f18 % 0x3C))) {
            return 0;
        }
        phi_v1 = 2;
        // Duplicate return node #31. Try simplifying control flow for better match
        return phi_v1;
    }
    if (temp_lo >= 6) {
        if ((temp_lo == 6) && (((s32) (s16) temp_f18 % 0x3C) < (s32) arg0)) {
            return 0;
        }
        if (temp_lo >= 9) {
            return 0;
        }
        phi_v1 = 1;
        if ((temp_lo == 8) && ((s32) arg0 < ((s32) (s16) temp_f18 % 0x3C))) {
            return 0;
        }
        // Duplicate return node #31. Try simplifying control flow for better match
        return phi_v1;
    }
    return phi_v1;
}

void func_80A3D940(void *arg0) {
    s32 temp_v0;
    f32 phi_f0;

    temp_v0 = func_80A3D680(arg0->unk1C6);
    if (arg0->unk1C4 != temp_v0) {
        arg0->unk1C4 = (u8) (temp_v0 & 0xFF);
        arg0->unk1C6 = Rand_S16Offset(0, 0x3B);
    }
    if (arg0->unk1C4 == 0) {
        phi_f0 = 0.0f;
    } else {
        phi_f0 = 1.0f;
    }
    Math_ApproachF(arg0 + 0x1B8, phi_f0, 0.02f, 1000.0f);
}

void func_80A3D9C4(void *arg0, void *arg1) {
    u8 sp57;
    u8 sp56;
    Gfx *sp44;
    Gfx *sp40;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0_2;
    GraphicsContext *temp_s1;
    f32 temp_f0;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f6_4;
    s32 temp_a0;
    u8 temp_t0;
    u8 temp_t3;
    u8 temp_t4;
    u8 temp_t7;
    void *temp_v0;
    void *temp_v1;
    f32 phi_f2;
    f32 phi_f6;
    f32 phi_f6_2;
    f32 phi_f6_3;
    f32 phi_f6_4;

    arg0->unk1BC = (f32) (arg0->unk1BC + 1.8f);
    temp_a0 = 3 * 0x10;
    arg0->unk1C0 = (f32) (arg0->unk1C0 + 0.6f);
    sp57 = 0x7F - (u32) arg0->unk1BC;
    sp56 = 0x7F - (u32) arg0->unk1C0;
    temp_f0 = arg0->unk1B8;
    temp_v1 = temp_a0 + &D_80A3E290;
    if (temp_f0 < 0.0f) {
        arg0->unk1B8 = 0.0f;
    } else {
        if (temp_f0 > 1.0f) {
            phi_f2 = 1.0f;
        } else {
            phi_f2 = temp_f0;
        }
        arg0->unk1B8 = phi_f2;
    }
    arg0->unk157 = (s8) (u32) ((f32) D_80A3E29F * arg0->unk1B8);
    arg0->unk167 = (s8) (u32) ((f32) D_80A3E2AF * arg0->unk1B8);
    arg0->unk177 = (s8) (u32) ((f32) D_80A3E2BF * arg0->unk1B8);
    temp_t4 = temp_v1->unkF;
    temp_v0 = arg0 + temp_a0;
    temp_f6 = (f32) temp_t4;
    phi_f6 = temp_f6;
    if ((s32) temp_t4 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_v0->unk157 = (s8) (u32) (phi_f6 * arg0->unk1B8);
    temp_t7 = temp_v1->unk1F;
    temp_f6_2 = (f32) temp_t7;
    phi_f6_2 = temp_f6_2;
    if ((s32) temp_t7 < 0) {
        phi_f6_2 = temp_f6_2 + 4294967296.0f;
    }
    temp_v0->unk167 = (s8) (u32) (phi_f6_2 * arg0->unk1B8);
    temp_t0 = temp_v1->unk2F;
    temp_f6_3 = (f32) temp_t0;
    phi_f6_3 = temp_f6_3;
    if ((s32) temp_t0 < 0) {
        phi_f6_3 = temp_f6_3 + 4294967296.0f;
    }
    temp_v0->unk177 = (s8) (u32) (phi_f6_3 * arg0->unk1B8);
    temp_t3 = temp_v1->unk3F;
    temp_f6_4 = (f32) temp_t3;
    phi_f6_4 = temp_f6_4;
    if ((s32) temp_t3 < 0) {
        phi_f6_4 = temp_f6_4 + 4294967296.0f;
    }
    temp_v0->unk187 = (s8) (u32) (phi_f6_4 * arg0->unk1B8);
    if (arg0->unk1B8 > 0.0f) {
        SysMatrix_InsertTranslation(arg0->unk24, arg0->unk28, arg0->unk2C, 0);
        arg0->unkBE = (s16) (func_800DFCDC((arg1 + (arg1->unk810 * 4))->unk800) + 0x8000);
        Matrix_RotateY(arg0->unkBE, 1U);
        Matrix_Scale(0.1f, 0.1f, 0.0f, 1);
        temp_a0_2 = arg1->unk0;
        temp_s1 = temp_a0_2;
        func_8012C28C(temp_a0_2);
        temp_v0_2 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDB060020;
        sp44 = temp_v0_2;
        sp44->words.w1 = Gfx_TwoTexScroll(arg1->unk0, 0, 0U, (u32) sp57, 0x20, 0x20, 1, 0U, (u32) sp56, 0x20, 0x20);
        temp_v0_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDB060024;
        sp40 = temp_v0_3;
        sp40->words.w1 = Lib_SegmentedToVirtual(arg0 + 0x148);
        temp_v0_4 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDA380003;
        temp_v0_4->words.w1 = Matrix_NewMtx(arg1->unk0);
        temp_v0_5 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDE000000;
        temp_v0_5->words.w1 = (u32) &D_06001C00;
    }
}

void ObjSmork_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjSmork *this = (ObjSmork *) thisx;
    Lib_MemCpy(&this->unk148, &D_80A3E290, 0x70U);
    this->unk1C6 = Rand_S16Offset(0, 0x3B);
    this->unk1C4 = 0;
}

void ObjSmork_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjSmork *this = (ObjSmork *) thisx;

}

void ObjSmork_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjSmork *this = (ObjSmork *) thisx;
    func_80A3D940();
}

void ObjSmork_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjSmork *this = (ObjSmork *) thisx;
    func_80A3D9C4();
}

