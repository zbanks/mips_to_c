typedef struct EnMag {
    /* 0x00000 */ Actor actor;
    /* 0x00144 */ char pad_144[0x2C];
    /* 0x00170 */ Font unk_170;                     /* inferred */
    /* 0x11EFC */ char pad_11EFC[0x4];
    /* 0x11F00 */ s16 unk_11F00;                    /* inferred */
    /* 0x11F02 */ s16 unk_11F02;                    /* inferred */
    /* 0x11F04 */ s16 unk_11F04;                    /* inferred */
    /* 0x11F06 */ s16 unk_11F06;                    /* inferred */
    /* 0x11F08 */ s16 unk_11F08;                    /* inferred */
    /* 0x11F0A */ s16 unk_11F0A;                    /* inferred */
    /* 0x11F0C */ s16 unk_11F0C;                    /* inferred */
    /* 0x11F0E */ s16 unk_11F0E;                    /* inferred */
    /* 0x11F10 */ s16 unk_11F10;                    /* inferred */
    /* 0x11F12 */ s16 unk_11F12;                    /* inferred */
    /* 0x11F14 */ s16 unk_11F14;                    /* inferred */
    /* 0x11F16 */ s16 unk_11F16;                    /* inferred */
    /* 0x11F18 */ s16 unk_11F18;                    /* inferred */
    /* 0x11F1A */ s16 unk_11F1A;                    /* inferred */
    /* 0x11F1C */ s16 unk_11F1C;                    /* inferred */
    /* 0x11F1E */ s16 unk_11F1E;                    /* inferred */
    /* 0x11F20 */ s16 unk_11F20;                    /* inferred */
    /* 0x11F22 */ s16 unk_11F22;                    /* inferred */
    /* 0x11F24 */ s16 unk_11F24;                    /* inferred */
    /* 0x11F26 */ s16 unk_11F26;                    /* inferred */
    /* 0x11F28 */ s16 unk_11F28;                    /* inferred */
    /* 0x11F2A */ s16 unk_11F2A;                    /* inferred */
    /* 0x11F2C */ s16 unk_11F2C;                    /* inferred */
    /* 0x11F2E */ s16 unk_11F2E;                    /* inferred */
    /* 0x11F30 */ s16 unk_11F30;                    /* inferred */
    /* 0x11F32 */ s16 unk_11F32;                    /* inferred */
    /* 0x11F34 */ s16 unk_11F34;                    /* inferred */
    /* 0x11F36 */ char pad_11F36[0x1E];             /* maybe part of unk_11F34[16]? */
    /* 0x11F54 */ s16 unk_11F54;                    /* inferred */
    /* 0x11F56 */ s16 unk_11F56;                    /* inferred */
    /* 0x11F58 */ s16 unk_11F58;                    /* inferred */
    /* 0x11F5A */ s16 unk_11F5A;                    /* inferred */
    /* 0x11F5C */ s32 unk_11F5C;                    /* inferred */
    /* 0x11F60 */ s32 unk_11F60;                    /* inferred */
    /* 0x11F64 */ s16 unk_11F64;                    /* inferred */
    /* 0x11F66 */ s16 unk_11F66;                    /* inferred */
    /* 0x11F68 */ s16 unk_11F68;                    /* inferred */
    /* 0x11F6A */ s16 unk_11F6A;                    /* inferred */
    /* 0x11F6C */ s16 unk_11F6C;                    /* inferred */
    /* 0x11F6E */ s16 unk_11F6E;                    /* inferred */
    /* 0x11F70 */ s16 unk_11F70;                    /* inferred */
    /* 0x11F72 */ s16 unk_11F72;                    /* inferred */
    /* 0x11F74 */ char pad_11F74[0x4];              /* maybe part of unk_11F72[3]? */
} EnMag;                                            /* size = 0x11F78 */

struct _mips2c_stack_EnMag_Destroy {};              /* size 0x0 */

struct _mips2c_stack_EnMag_Draw {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ GraphicsContext *sp28;               /* inferred */
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnMag_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnMag_Update {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad_20[0x18];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8096B604 {};              /* size 0x0 */

struct _mips2c_stack_func_8096C998 {};              /* size 0x0 */

struct _mips2c_stack_func_8096CBB0 {};              /* size 0x0 */

struct _mips2c_stack_func_8096CDC8 {
    /* 0x00 */ s32 sp0;                             /* inferred */
    /* 0x04 */ char pad_4[0x8];                     /* maybe part of sp0[3]? */
    /* 0x0C */ s32 spC;                             /* inferred */
    /* 0x10 */ char pad_10[0x28];                   /* maybe part of spC[11]? */
    /* 0x38 */ void *sp38;                          /* inferred */
    /* 0x3C */ char pad_3C[0x2C];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_8096D230 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ u32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x14];                   /* maybe part of sp30[6]? */
    /* 0x48 */ u32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x70];                   /* maybe part of sp48[29]? */
    /* 0xBC */ Gfx *spBC;                           /* inferred */
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_8096D60C {};              /* size 0x0 */

struct _mips2c_stack_func_8096D74C {
    /* 0x000 */ char pad_0[0x74];
    /* 0x074 */ void *sp74;                         /* inferred */
    /* 0x078 */ char pad_78[0x140];                 /* maybe part of sp74[81]? */
    /* 0x1B8 */ s32 sp1B8;                          /* inferred */
    /* 0x1BC */ char pad_1BC[0xC];                  /* maybe part of sp1B8[4]? */
    /* 0x1C8 */ Gfx *sp1C8;                         /* inferred */
    /* 0x1CC */ char pad_1CC[0xC];
};                                                  /* size = 0x1D8 */

? func_801A3F54(?);                                 /* extern */
void func_8096B604(EnMag *arg0, EnMag *);           /* static */
void func_8096C998(Gfx **arg0, ? *arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5); /* static */
void func_8096CBB0(Gfx **arg0, ? *arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5); /* static */
void func_8096CDC8(Gfx **arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, s16 arg8, u16 arg9, u16 argA, u16 argB, EnMag *argC); /* static */
void func_8096D230(Gfx **arg0, s16 arg1, s16 arg2, u32 arg3, u32 arg4, u32 arg5); /* static */
void func_8096D60C(Gfx **arg0, void *arg1, s32 arg2, s32 arg3); /* static */
void func_8096D74C(EnMag *arg0, GlobalContext *arg1, Gfx **arg2, GraphicsContext *); /* static */
extern ? D_06000000;
extern ? D_06009000;
extern ? D_06009680;
extern ? D_06009D00;
extern ? D_06010F40;
extern ? D_06011740;
extern ? D_06011BC0;
extern ? D_06011E48;
extern u8 D_801BB12C;
static s16 D_8096E910 = 0;
static s16 D_8096E914 = 0x1E;
static s16 D_8096E918 = 0;
static s16 D_8096E91C = 0;
static s16 D_8096E920 = 0x14;
static ? D_8096E944;                                /* unable to generate initializer */
static ? D_8096E948;                                /* unable to generate initializer */
static ? D_8096E94C;                                /* unable to generate initializer */
static ? D_8096E950;                                /* unable to generate initializer */
static ? D_8096E954;                                /* unable to generate initializer */
static ? D_8096E958;                                /* unable to generate initializer */
static ? D_8096E95C;                                /* unable to generate initializer */
static ? D_8096E960;                                /* unable to generate initializer */
static ? D_8096E964;                                /* unable to generate initializer */
static ? D_8096E970;                                /* unable to generate initializer */
static ? D_8096E988;                                /* unable to generate initializer */
static ? D_8096E9A0;                                /* unable to generate initializer */
static ? D_8096E9B8;                                /* unable to generate initializer */
static ? D_8096E9C4;                                /* unable to generate initializer */
static s16 D_8096E9D0 = 0;
static ? D_8096E9D4;                                /* unable to generate initializer */

void EnMag_Init(Actor *thisx, GlobalContext *globalCtx) {
    Font *temp_a0_2;
    s16 temp_a0;
    s16 temp_a3;
    s32 temp_v1;
    void *temp_t8;
    s32 phi_v1;
    EnMag *this = (EnMag *) thisx;

    this->unk_11F54 = 6;
    this->unk_11F56 = 0xA;
    phi_v1 = 0;
    do {
        temp_v1 = (phi_v1 + 1) & 0xFFFF;
        temp_t8 = this + (phi_v1 * 2);
        temp_t8->unk_11F36 = 0;
        temp_t8->unk_11F44 = 0;
        phi_v1 = temp_v1;
    } while (temp_v1 < 6);
    this->unk_11F08 = 0xFF;
    this->unk_11F0A = 0x9B;
    this->unk_11F0C = 0xFF;
    this->unk_11F0E = 0;
    this->unk_11F10 = 0xFF;
    this->unk_11F12 = 0x9B;
    this->unk_11F06 = 0x14;
    this->unk_11F14 = 0;
    this->unk_11F18 = 0xFF;
    this->unk_11F1A = 0x9B;
    this->unk_11F1C = 0xFF;
    this->unk_11F1E = 0;
    this->unk_11F20 = 0xFF;
    this->unk_11F22 = 0x9B;
    this->unk_11F16 = 0x37;
    this->unk_11F24 = 0;
    this->unk_11F26 = 0;
    this->unk_11F2C = 0xFF;
    temp_a3 = this->unk_11F2C;
    this->unk_11F2A = temp_a3;
    this->unk_11F28 = temp_a3;
    this->unk_11F34 = 0;
    temp_a0 = this->unk_11F34;
    this->unk_11F32 = temp_a0;
    this->unk_11F30 = temp_a0;
    this->unk_11F2E = temp_a0;
    this->unk_11F02 = 0x1E;
    this->unk_11F04 = 0;
    this->unk_11F00 = this->unk_11F04;
    if (gSaveContext.unk_3F1E != 0) {
        this->unk_11F2E = 0xD2;
        this->unk_11F32 = 0xFF;
        this->unk_11F34 = 0xFF;
        this->unk_11F06 = 0x64;
        this->unk_11F14 = 0xFF;
        this->unk_11F08 = 0xFF;
        this->unk_11F0A = 0xFF;
        this->unk_11F0C = 0xFF;
        this->unk_11F0E = 0;
        this->unk_11F10 = 0xFF;
        this->unk_11F12 = 0x9B;
        this->unk_11F16 = 0x64;
        this->unk_11F24 = 0xFF;
        this->unk_11F18 = 0xFF;
        this->unk_11F1A = 0xFF;
        this->unk_11F1C = 0xFF;
        this->unk_11F1E = 0;
        this->unk_11F20 = 0xFF;
        this->unk_11F22 = 0x9B;
        gSaveContext.unk_3F1E = 0;
        this->unk_11F04 = 2;
        D_8096E910 = 0x14;
        gSaveContext.fadeDuration = 1;
        gSaveContext.unk_3F51 = 0xFF;
    }
    temp_a0_2 = &this->unk_170;
    this = this;
    Font_LoadOrderedFont(temp_a0_2);
    this->unk_11F58 = 0;
    this->unk_11F5A = 0;
    this->unk_11F5C = 0;
    this->unk_11F60 = 0;
    this->unk_11F64 = 0x19;
    this->unk_11F66 = 0x19;
    this->unk_11F68 = 0x14;
    this->unk_11F6A = 0x28;
    this->unk_11F6C = 0xA;
    this->unk_11F6E = 0xA;
    this->unk_11F70 = 0xF;
    D_8096E914 = 0x1E;
    D_8096E918 = 0;
}

void EnMag_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnMag *this = (EnMag *) thisx;

}

void func_8096B604(EnMag *arg0) {
    s16 temp_a3;
    s16 temp_t1;
    s16 temp_t1_2;
    s16 temp_t1_3;
    s16 temp_t1_4;
    s16 temp_t1_5;
    s16 temp_t3;
    s16 temp_t3_2;
    s16 temp_t3_3;
    s16 temp_t3_4;
    s32 temp_a2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_lo_4;
    s32 temp_lo_5;
    s32 temp_t2;
    s32 temp_t2_2;
    s32 temp_t2_3;
    s32 temp_t2_4;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;
    s32 phi_v0_4;
    s32 phi_v0_5;

    temp_t1 = *(&D_8096E944 + (D_8096E918 * 2));
    temp_a3 = arg0->unk_11F18;
    temp_a2 = temp_a3 - temp_t1;
    if (temp_a2 < 0) {
        phi_v0 = -temp_a2;
    } else {
        phi_v0 = temp_a2;
    }
    temp_lo = phi_v0 / (s32) D_8096E914;
    if ((s32) temp_a3 >= (s32) temp_t1) {
        arg0->unk_11F18 = temp_a3 - (s16) temp_lo;
    } else {
        arg0->unk_11F18 = temp_a3 + (s16) temp_lo;
    }
    temp_t1_2 = *(&D_8096E948 + (D_8096E918 * 2));
    temp_t3 = arg0->unk_11F1A;
    temp_t2 = temp_t3 - temp_t1_2;
    phi_v0_2 = temp_t2;
    if (temp_t2 < 0) {
        phi_v0_2 = -temp_t2;
    }
    temp_lo_2 = phi_v0_2 / (s32) D_8096E914;
    if ((s32) temp_t3 >= (s32) temp_t1_2) {
        arg0->unk_11F1A = temp_t3 - (s16) temp_lo_2;
    } else {
        arg0->unk_11F1A = temp_t3 + (s16) temp_lo_2;
    }
    temp_t3_2 = arg0->unk_11F1C;
    temp_t1_3 = *(&D_8096E94C + (D_8096E918 * 2));
    temp_t2_2 = temp_t3_2 - temp_t1_3;
    phi_v0_3 = temp_t2_2;
    if (temp_t2_2 < 0) {
        phi_v0_3 = -temp_t2_2;
    }
    temp_lo_3 = phi_v0_3 / (s32) D_8096E914;
    if ((s32) temp_t3_2 >= (s32) temp_t1_3) {
        arg0->unk_11F1C = temp_t3_2 - (s16) temp_lo_3;
    } else {
        arg0->unk_11F1C = temp_t3_2 + (s16) temp_lo_3;
    }
    temp_t3_3 = arg0->unk_11F1E;
    temp_t1_4 = *(&D_8096E950 + (D_8096E918 * 2));
    temp_t2_3 = temp_t3_3 - temp_t1_4;
    phi_v0_4 = temp_t2_3;
    if (temp_t2_3 < 0) {
        phi_v0_4 = -temp_t2_3;
    }
    temp_lo_4 = phi_v0_4 / (s32) D_8096E914;
    if ((s32) temp_t3_3 >= (s32) temp_t1_4) {
        arg0->unk_11F1E = temp_t3_3 - (s16) temp_lo_4;
    } else {
        arg0->unk_11F1E = temp_t3_3 + (s16) temp_lo_4;
    }
    temp_t3_4 = arg0->unk_11F22;
    temp_t1_5 = *(&D_8096E954 + (D_8096E918 * 2));
    temp_t2_4 = temp_t3_4 - temp_t1_5;
    phi_v0_5 = temp_t2_4;
    if (temp_t2_4 < 0) {
        phi_v0_5 = -temp_t2_4;
    }
    temp_lo_5 = phi_v0_5 / (s32) D_8096E914;
    if ((s32) temp_t3_4 >= (s32) temp_t1_5) {
        arg0->unk_11F22 = temp_t3_4 - (s16) temp_lo_5;
    } else {
        arg0->unk_11F22 = temp_t3_4 + (s16) temp_lo_5;
    }
    D_8096E914 += -1;
    if (D_8096E914 == 0) {
        arg0->unk_11F18 = *(&D_8096E944 + (D_8096E918 * 2));
        arg0->unk_11F1A = *(&D_8096E948 + (D_8096E918 * 2));
        arg0->unk_11F1C = *(&D_8096E94C + (D_8096E918 * 2));
        arg0->unk_11F1E = *(&D_8096E950 + (D_8096E918 * 2));
        arg0->unk_11F22 = *(&D_8096E954 + (D_8096E918 * 2));
        D_8096E914 = 0x1E;
        D_8096E918 ^= 1;
    }
}

void EnMag_Update(Actor *thisx, GlobalContext *globalCtx) {
    void *sp1C;
    EnMag *temp_a0_12;
    EnMag *temp_a2;
    s16 temp_a0;
    s16 temp_a0_10;
    s16 temp_a0_11;
    s16 temp_a0_13;
    s16 temp_a0_14;
    s16 temp_a0_15;
    s16 temp_a0_16;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_a0_5;
    s16 temp_a0_6;
    s16 temp_a0_7;
    s16 temp_a0_9;
    s16 temp_a1;
    s16 temp_a1_11;
    s16 temp_a1_12;
    s16 temp_a1_13;
    s16 temp_a1_2;
    s16 temp_a1_3;
    s16 temp_a1_5;
    s16 temp_a1_6;
    s16 temp_a1_7;
    s16 temp_a1_8;
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_a3_3;
    s16 temp_a3_4;
    s16 temp_v0;
    s16 temp_v0_12;
    s16 temp_v0_15;
    s16 temp_v0_17;
    s16 temp_v0_19;
    s16 temp_v0_22;
    s16 temp_v0_7;
    s32 temp_a0_8;
    s32 temp_a1_10;
    s32 temp_a1_4;
    s32 temp_a1_9;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_lo_4;
    s32 temp_lo_5;
    s32 temp_lo_6;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_13;
    s32 temp_v0_14;
    s32 temp_v0_16;
    s32 temp_v0_18;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_8;
    s32 temp_v0_9;
    u16 temp_v0_20;
    u16 temp_v0_21;
    u16 temp_v0_2;
    u8 temp_t6;
    void *temp_t0;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s32 phi_v1_4;
    s32 phi_v1_5;
    s32 phi_v1_6;
    s32 phi_v1_7;
    s32 phi_v1_8;
    s32 phi_v1_9;
    s32 phi_v1_10;
    s32 phi_v1_11;
    s32 phi_v1_12;
    s32 phi_v1_13;
    s32 phi_v1_14;
    s32 phi_v1_15;
    s32 phi_v1_16;
    s32 phi_v1_17;
    s32 phi_v1_18;
    s32 phi_v1_19;
    s32 phi_v1_20;
    s32 phi_v1_21;
    s32 phi_v1_22;
    s32 phi_v0;
    EnMag *phi_a2;
    EnMag *phi_a2_2;
    void *phi_t0;
    EnMag *this = (EnMag *) thisx;

    temp_a2 = this;
    phi_a2 = temp_a2;
    phi_a2_2 = temp_a2;
    phi_a2 = temp_a2;
    if (gSaveContext.fileNum != 0xFEDC) {
        temp_t0 = temp_a2 + 0x10000;
        temp_v0 = temp_a2->unk_11F04;
        phi_v0 = (s32) temp_v0;
        phi_t0 = temp_t0;
        if (temp_v0 == 0) {
            temp_v0_2 = globalCtx->state.input[0].press.button;
            if ((~(temp_v0_2 | ~0x1000) == 0) || (~(temp_v0_2 | 0xFFFF7FFF) == 0) || (~(temp_v0_2 | ~0x4000) == 0)) {
                this = temp_a2;
                phi_a2_2 = this;
                if (func_800F13E8(globalCtx, 4) == 0) {
                    this = this;
                    play_sound(0x4823U);
                    this->unk_11F04 = 0xA;
                    this->unk_11F00 = 0;
                    this->unk_11F02 = 0x1E;
                    D_8096E910 = 0x14;
                    gSaveContext.fadeDuration = 1;
                    gSaveContext.unk_3F51 = 0xFF;
                    phi_a2_2 = this;
                }
            }
        } else {
            switch (temp_v0) {
            case 1:
                temp_a1 = D_8096E958.unk_0;
                temp_a0 = temp_a2->unk_11F0A;
                temp_v0_3 = temp_a0 - temp_a1;
                if (temp_v0_3 < 0) {
                    phi_v1 = -temp_v0_3;
                } else {
                    phi_v1 = temp_v0_3;
                }
                temp_lo = phi_v1 / (s32) temp_a2->unk_11F64;
                if ((s32) temp_a0 >= (s32) temp_a1) {
                    temp_a2->unk_11F0A = temp_a0 - (s16) temp_lo;
                } else {
                    temp_a2->unk_11F0A = temp_a0 + (s16) temp_lo;
                }
                temp_a0_2 = temp_a2->unk_11F0E;
                temp_a1_2 = D_8096E95C.unk_0;
                temp_v0_4 = temp_a0_2 - temp_a1_2;
                phi_v1_2 = temp_v0_4;
                if (temp_v0_4 < 0) {
                    phi_v1_2 = -temp_v0_4;
                }
                temp_lo_2 = phi_v1_2 / (s32) temp_a2->unk_11F64;
                if ((s32) temp_a0_2 >= (s32) temp_a1_2) {
                    temp_a2->unk_11F0E = temp_a0_2 - (s16) temp_lo_2;
                } else {
                    temp_a2->unk_11F0E = temp_a0_2 + (s16) temp_lo_2;
                }
                temp_a0_3 = temp_a2->unk_11F12;
                temp_a1_3 = D_8096E960.unk_0;
                temp_v0_5 = temp_a0_3 - temp_a1_3;
                phi_v1_3 = temp_v0_5;
                if (temp_v0_5 < 0) {
                    phi_v1_3 = -temp_v0_5;
                }
                temp_lo_3 = phi_v1_3 / (s32) temp_a2->unk_11F64;
                if ((s32) temp_a0_3 >= (s32) temp_a1_3) {
                    temp_a2->unk_11F12 = temp_a0_3 - (s16) temp_lo_3;
                } else {
                    temp_a2->unk_11F12 = temp_a0_3 + (s16) temp_lo_3;
                }
                temp_a0_4 = temp_a2->unk_11F14;
                temp_v0_6 = temp_a0_4 - 0xFF;
                phi_v1_4 = temp_v0_6;
                if (temp_v0_6 < 0) {
                    phi_v1_4 = 0xFF - temp_a0_4;
                }
                temp_a2->unk_11F14 = temp_a0_4 + (s16) (phi_v1_4 / (s32) temp_a2->unk_11F64);
                temp_a3 = temp_a2->unk_11F06;
                temp_a1_4 = temp_a3 - 0x20;
                phi_v1_5 = temp_a1_4;
                if (temp_a1_4 < 0) {
                    phi_v1_5 = 0x20 - temp_a3;
                }
                temp_a2->unk_11F06 = temp_a3 + (s16) (phi_v1_5 / (s32) temp_a2->unk_11F64);
                temp_a2->unk_11F64 += -1;
                if (temp_a2->unk_11F64 == 0) {
                    temp_a2->unk_11F0A = D_8096E958.unk_0;
                    temp_a2->unk_11F0E = D_8096E95C.unk_0;
                    temp_a2->unk_11F12 = D_8096E960.unk_0;
                    temp_a2->unk_11F14 = 0xFF;
                    temp_a2->unk_11F04 = 2;
                    temp_a2->unk_11F72 = 5;
                }
block_112:
                phi_v0 = (s32) phi_t0->unk_1F04;
                break;
            case 2:
                temp_v0_7 = temp_a2->unk_11F72;
                if (temp_v0_7 == 0) {
                    temp_a0_5 = temp_a2->unk_11F0A;
                    temp_a1_5 = D_8096E958.unk_2;
                    temp_v0_8 = temp_a0_5 - temp_a1_5;
                    if (temp_v0_8 < 0) {
                        phi_v1_6 = -temp_v0_8;
                    } else {
                        phi_v1_6 = temp_v0_8;
                    }
                    temp_lo_4 = phi_v1_6 / (s32) temp_a2->unk_11F66;
                    if ((s32) temp_a0_5 >= (s32) temp_a1_5) {
                        temp_a2->unk_11F0A = temp_a0_5 - (s16) temp_lo_4;
                    } else {
                        temp_a2->unk_11F0A = temp_a0_5 + (s16) temp_lo_4;
                    }
                    temp_a0_6 = temp_a2->unk_11F0E;
                    temp_a1_6 = D_8096E95C.unk_2;
                    temp_v0_9 = temp_a0_6 - temp_a1_6;
                    phi_v1_7 = temp_v0_9;
                    if (temp_v0_9 < 0) {
                        phi_v1_7 = -temp_v0_9;
                    }
                    temp_lo_5 = phi_v1_7 / (s32) temp_a2->unk_11F66;
                    if ((s32) temp_a0_6 >= (s32) temp_a1_6) {
                        temp_a2->unk_11F0E = temp_a0_6 - (s16) temp_lo_5;
                    } else {
                        temp_a2->unk_11F0E = temp_a0_6 + (s16) temp_lo_5;
                    }
                    temp_a0_7 = temp_a2->unk_11F12;
                    temp_a1_7 = D_8096E960.unk_2;
                    temp_v0_10 = temp_a0_7 - temp_a1_7;
                    phi_v1_8 = temp_v0_10;
                    if (temp_v0_10 < 0) {
                        phi_v1_8 = -temp_v0_10;
                    }
                    temp_lo_6 = phi_v1_8 / (s32) temp_a2->unk_11F66;
                    if ((s32) temp_a0_7 >= (s32) temp_a1_7) {
                        temp_a2->unk_11F12 = temp_a0_7 - (s16) temp_lo_6;
                    } else {
                        temp_a2->unk_11F12 = temp_a0_7 + (s16) temp_lo_6;
                    }
                    temp_a3_2 = temp_a2->unk_11F06;
                    temp_v0_11 = temp_a3_2 - 0x80;
                    phi_v1_9 = temp_v0_11;
                    if (temp_v0_11 < 0) {
                        phi_v1_9 = 0x80 - temp_a3_2;
                    }
                    temp_a2->unk_11F06 = temp_a3_2 + (s16) (phi_v1_9 / (s32) temp_a2->unk_11F66);
                    temp_a1_8 = temp_a2->unk_11F26;
                    temp_a0_8 = temp_a1_8 - 0xFF;
                    phi_v1_10 = temp_a0_8;
                    if (temp_a0_8 < 0) {
                        phi_v1_10 = 0xFF - temp_a1_8;
                    }
                    temp_a2->unk_11F26 = temp_a1_8 + (s16) (phi_v1_10 / (s32) temp_a2->unk_11F66);
                    temp_a2->unk_11F66 += -1;
                    if (temp_a2->unk_11F66 == 0) {
                        temp_a2->unk_11F0A = D_8096E958.unk_2;
                        temp_a2->unk_11F0E = D_8096E95C.unk_2;
                        temp_a2->unk_11F12 = D_8096E960.unk_2;
                        temp_a2->unk_11F06 = 0x80;
                        temp_a2->unk_11F26 = 0xFF;
                        temp_a2->unk_11F04 = 3;
                        temp_a2->unk_11F72 = 5;
                    }
                } else {
                    temp_a2->unk_11F72 = temp_v0_7 - 1;
                }
                goto block_112;
            case 3:
                temp_v0_12 = temp_a2->unk_11F72;
                if (temp_v0_12 == 0) {
                    temp_a0_9 = temp_a2->unk_11F2E;
                    temp_v0_13 = temp_a0_9 - 0xFF;
                    phi_v1_11 = temp_v0_13;
                    if (temp_v0_13 < 0) {
                        phi_v1_11 = 0xFF - temp_a0_9;
                    }
                    temp_a2->unk_11F2E = temp_a0_9 + (s16) (phi_v1_11 / (s32) temp_a2->unk_11F68);
                    temp_a2->unk_11F68 += -1;
                    if (temp_a2->unk_11F68 == 0) {
                        temp_a2->unk_11F68 = 1;
                        temp_a2->unk_11F2E = 0xFF;
                    }
                    temp_a0_10 = temp_a2->unk_11F14;
                    temp_v0_14 = temp_a0_10 - 0x3C;
                    phi_v1_12 = temp_v0_14;
                    if (temp_v0_14 < 0) {
                        phi_v1_12 = 0x3C - temp_a0_10;
                    }
                    temp_a2->unk_11F14 = temp_a0_10 - (s16) (phi_v1_12 / (s32) temp_a2->unk_11F6A);
                    temp_a3_3 = temp_a2->unk_11F24;
                    temp_a1_9 = temp_a3_3 - 0xFF;
                    phi_v1_13 = temp_a1_9;
                    if (temp_a1_9 < 0) {
                        phi_v1_13 = 0xFF - temp_a3_3;
                    }
                    temp_a2->unk_11F24 = temp_a3_3 + (s16) (phi_v1_13 / (s32) temp_a2->unk_11F6A);
                    temp_a0_11 = temp_a2->unk_11F16;
                    temp_a1_10 = temp_a0_11 - 0x80;
                    phi_v1_14 = temp_a1_10;
                    if (temp_a1_10 < 0) {
                        phi_v1_14 = 0x80 - temp_a0_11;
                    }
                    temp_a2->unk_11F16 = temp_a0_11 + (s16) (phi_v1_14 / (s32) temp_a2->unk_11F6A);
                    temp_a2->unk_11F6A += -1;
                    if (temp_a2->unk_11F6A == 0) {
                        temp_a2->unk_11F14 = 0x3C;
                        temp_a2->unk_11F24 = 0xFF;
                        temp_a2->unk_11F16 = 0x80;
                        temp_a2->unk_11F04 = 5;
                        temp_a2->unk_11F72 = 0x14;
                    }
                } else {
                    temp_a2->unk_11F72 = temp_v0_12 - 1;
                }
                goto block_112;
            case 5:
                temp_a0_12 = temp_a2;
                this = temp_a2;
                sp1C = temp_t0;
                func_8096B604(temp_a0_12, temp_a2);
                temp_v0_15 = temp_t0->unk_1F72;
                phi_t0 = temp_t0;
                phi_a2 = this;
                if (temp_v0_15 == 0) {
                    temp_a1_11 = temp_t0->unk_1F30;
                    temp_v0_16 = temp_a1_11 - 0xFF;
                    phi_v1_15 = temp_v0_16;
                    if (temp_v0_16 < 0) {
                        phi_v1_15 = 0xFF - temp_a1_11;
                    }
                    this->unk_11F30 = temp_a1_11 + (s16) (phi_v1_15 / (s32) temp_t0->unk_1F6C);
                    this->unk_11F6C = temp_t0->unk_1F6C - 1;
                    if (temp_t0->unk_1F6C == 0) {
                        this->unk_11F24 = 0xFF;
                        this->unk_11F04 = 6;
                        this->unk_11F72 = 0x14;
                    }
                } else {
                    this->unk_11F72 = temp_v0_15 - 1;
                }
                goto block_112;
            case 6:
                this = temp_a2;
                sp1C = temp_t0;
                func_8096B604(temp_a2, temp_a2);
                temp_v0_17 = temp_t0->unk_1F72;
                phi_t0 = temp_t0;
                phi_a2 = this;
                if (temp_v0_17 == 0) {
                    temp_a0_13 = temp_t0->unk_1F34;
                    temp_v0_18 = temp_a0_13 - 0xFF;
                    phi_v1_16 = temp_v0_18;
                    if (temp_v0_18 < 0) {
                        phi_v1_16 = 0xFF - temp_a0_13;
                    }
                    this->unk_11F34 = temp_a0_13 + (s16) (phi_v1_16 / (s32) temp_t0->unk_1F6E);
                    this->unk_11F6E = temp_t0->unk_1F6E - 1;
                    if (temp_t0->unk_1F6E == 0) {
                        this->unk_11F34 = 0xFF;
                        this->unk_11F04 = 0xD;
                    }
                } else {
                    this->unk_11F72 = temp_v0_17 - 1;
                }
                goto block_112;
            case 10:
                temp_t0->unk_1F0A = (s16) D_8096E958.unk_0;
                temp_t0->unk_1F0E = (s16) D_8096E95C.unk_0;
                temp_t0->unk_1F12 = (s16) D_8096E960.unk_0;
                temp_a2->unk_11F14 = 0x3C;
                temp_a2->unk_11F06 = 0x80;
                temp_a2->unk_11F26 = 0xFF;
                temp_a2->unk_11F2E = 0xFF;
                temp_a2->unk_11F24 = 0xFF;
                temp_a2->unk_11F16 = 0x80;
                temp_a2->unk_11F30 = 0xFF;
                temp_a2->unk_11F34 = 0xFF;
                temp_a2->unk_11F04 = 0xD;
                goto block_112;
            case 13:
                this = temp_a2;
                sp1C = temp_t0;
                func_8096B604(temp_a2, temp_a2);
                temp_v0_19 = D_8096E910;
                phi_t0 = temp_t0;
                phi_a2 = this;
                if (temp_v0_19 == 0) {
                    temp_v0_20 = globalCtx->state.input[0].press.button;
                    if ((~(temp_v0_20 | ~0x1000) == 0) || (~(temp_v0_20 | 0xFFFF7FFF) == 0) || (~(temp_v0_20 | ~0x4000) == 0)) {
                        if (globalCtx->sceneLoadFlag != 0x14) {
                            this = this;
                            sp1C = temp_t0;
                            func_801A3F54(0);
                            temp_t6 = D_801BB12C + 1;
                            D_801BB12C = temp_t6;
                            if ((temp_t6 & 0xFF) >= 2) {
                                D_801BB12C = 0;
                            }
                            this = this;
                            sp1C = temp_t0;
                            play_sound(0x4823U);
                            gSaveContext.gameMode = 2;
                            globalCtx->sceneLoadFlag = 0x14;
                            globalCtx->unk_1887F = 2;
                            globalCtx->nextEntranceIndex = 0x1C00;
                            gSaveContext.cutscene = 0;
                            gSaveContext.sceneSetupIndex = 0;
                        }
                        this->unk_11F54 = 0xF;
                        this->unk_11F56 = 0x19;
                        this->unk_11F04 = 0x14;
                        phi_t0 = temp_t0;
                        phi_a2 = this;
                    }
                } else {
                    D_8096E910 = temp_v0_19 - 1;
                }
                goto block_112;
            case 20:
                temp_a0_14 = temp_t0->unk_1F14;
                phi_v1_17 = (s32) temp_a0_14;
                if ((s32) temp_a0_14 < 0) {
                    phi_v1_17 = -(s32) temp_a0_14;
                }
                temp_a2->unk_11F14 = temp_a0_14 - (s16) (phi_v1_17 / (s32) temp_t0->unk_1F70);
                temp_a1_12 = temp_t0->unk_1F26;
                phi_v1_18 = (s32) temp_a1_12;
                if ((s32) temp_a1_12 < 0) {
                    phi_v1_18 = -(s32) temp_a1_12;
                }
                temp_a2->unk_11F26 = temp_a1_12 - (s16) (phi_v1_18 / (s32) temp_t0->unk_1F70);
                temp_a3_4 = temp_t0->unk_1F24;
                phi_v1_19 = (s32) temp_a3_4;
                if ((s32) temp_a3_4 < 0) {
                    phi_v1_19 = -(s32) temp_a3_4;
                }
                temp_a2->unk_11F24 = temp_a3_4 - (s16) (phi_v1_19 / (s32) temp_t0->unk_1F70);
                temp_a0_15 = temp_t0->unk_1F2E;
                phi_v1_20 = (s32) temp_a0_15;
                if ((s32) temp_a0_15 < 0) {
                    phi_v1_20 = -(s32) temp_a0_15;
                }
                temp_a2->unk_11F2E = temp_a0_15 - (s16) (phi_v1_20 / (s32) temp_t0->unk_1F70);
                temp_a1_13 = temp_t0->unk_1F30;
                phi_v1_21 = (s32) temp_a1_13;
                if ((s32) temp_a1_13 < 0) {
                    phi_v1_21 = -(s32) temp_a1_13;
                }
                temp_a2->unk_11F30 = temp_a1_13 - (s16) (phi_v1_21 / (s32) temp_t0->unk_1F70);
                temp_a0_16 = temp_t0->unk_1F34;
                phi_v1_22 = (s32) temp_a0_16;
                if ((s32) temp_a0_16 < 0) {
                    phi_v1_22 = -(s32) temp_a0_16;
                }
                temp_a2->unk_11F34 = temp_a0_16 - (s16) (phi_v1_22 / (s32) temp_t0->unk_1F70);
                temp_a2->unk_11F70 = temp_t0->unk_1F70 - 1;
                if (temp_t0->unk_1F70 == 0) {
                    temp_a2->unk_11F14 = 0;
                    temp_a2->unk_11F26 = 0;
                    temp_a2->unk_11F2E = 0;
                    temp_a2->unk_11F30 = 0;
                    temp_a2->unk_11F24 = 0;
                    temp_a2->unk_11F34 = 0;
                    temp_a2->unk_11F04 = 0x15;
                }
                goto block_112;
            }
            phi_a2_2 = phi_a2;
            if ((phi_v0 > 0) && (phi_v0 < 0xA) && ((temp_v0_21 = globalCtx->state.input[0].press.button, (~(temp_v0_21 | ~0x1000) == 0)) || (~(temp_v0_21 | 0xFFFF7FFF) == 0) || (~(temp_v0_21 | ~0x4000) == 0))) {
                this = phi_a2;
                play_sound(0x4823U);
                this->unk_11F04 = 0xA;
                phi_a2_2 = this;
            }
        }
    }
    temp_v0_22 = phi_a2_2->unk_11F04;
    if (temp_v0_22 == 0) {
        this = phi_a2_2;
        if (func_800F13E8(globalCtx, 3) != 0) {
            this->unk_11F02 = 0x28;
            this->unk_11F04 = 1;
            return;
        }
        /* Duplicate return node #125. Try simplifying control flow for better match */
        return;
    }
    if ((s32) temp_v0_22 < 0x14) {
        this = phi_a2_2;
        if (func_800F13E8(globalCtx, 4) != 0) {
            this->unk_11F04 = 0x14;
        }
    }
}

void func_8096C998(Gfx **arg0, ? *arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5) {
    Gfx *temp_v0;
    s32 temp_a1;
    s32 temp_t1;
    void *temp_v0_10;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    s32 phi_t2;
    s32 phi_t3;
    s32 phi_t0;

    temp_v0 = *arg0;
    temp_v0->words.w0 = 0xFD900000;
    temp_v0->words.w1 = arg1;
    temp_v0_2 = temp_v0 + 8;
    temp_v0_2->unk_0 = 0xF5900000;
    temp_v0_2->unk_4 = 0x7000000;
    temp_v0_3 = temp_v0_2 + 8;
    temp_v0_3->unk_0 = 0xE6000000;
    temp_v0_3->unk_4 = 0;
    temp_v0_4 = temp_v0_3 + 8;
    temp_v0_4->unk_0 = 0xF3000000;
    temp_v0_5 = temp_v0_4 + 8;
    temp_a1 = ((s32) ((arg2 * arg3) + 1) >> 1) - 1;
    if (temp_a1 < 0x7FF) {
        phi_t0 = temp_a1;
    } else {
        phi_t0 = 0x7FF;
    }
    temp_t1 = (s32) arg2 / 8;
    if (temp_t1 <= 0) {
        phi_t2 = 1;
    } else {
        phi_t2 = temp_t1;
    }
    if (temp_t1 <= 0) {
        phi_t3 = 1;
    } else {
        phi_t3 = temp_t1;
    }
    temp_v0_4->unk_4 = (s32) ((((s32) (phi_t2 + 0x7FF) / phi_t3) & 0xFFF) | 0x7000000 | ((phi_t0 & 0xFFF) << 0xC));
    temp_v0_5->unk_0 = 0xE7000000;
    temp_v0_5->unk_4 = 0;
    temp_v0_6 = temp_v0_5 + 8;
    temp_v0_6->unk_0 = (s32) (((((s32) (arg2 + 7) >> 3) & 0x1FF) << 9) | 0xF5880000);
    temp_v0_6->unk_4 = 0;
    temp_v0_7 = temp_v0_6 + 8;
    temp_v0_7->unk_0 = 0xF2000000;
    temp_v0_7->unk_4 = (s32) (((((arg2 - 1) * 4) & 0xFFF) << 0xC) | (((arg3 - 1) * 4) & 0xFFF));
    temp_v0_8 = temp_v0_7 + 8;
    temp_v0_8->unk_0 = (s32) (((((arg4 + arg2) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((arg5 + arg3) * 4) & 0xFFF));
    temp_v0_8->unk_4 = (s32) ((((arg4 * 4) & 0xFFF) << 0xC) | ((arg5 * 4) & 0xFFF));
    temp_v0_9 = temp_v0_8 + 8;
    temp_v0_9->unk_0 = 0xE1000000;
    temp_v0_9->unk_4 = 0;
    temp_v0_10 = temp_v0_9 + 8;
    temp_v0_10->unk_0 = 0xF1000000;
    temp_v0_10->unk_4 = 0x4000400;
    *arg0 = temp_v0_10 + 8;
}

void func_8096CBB0(Gfx **arg0, ? *arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5) {
    Gfx *temp_v0;
    s32 temp_a1;
    s32 temp_t1;
    void *temp_v0_10;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    s32 phi_t2;
    s32 phi_t3;
    s32 phi_t0;

    temp_v0 = *arg0;
    temp_v0->words.w0 = 0xFD700000;
    temp_v0->words.w1 = arg1;
    temp_v0_2 = temp_v0 + 8;
    temp_v0_2->unk_0 = 0xF5700000;
    temp_v0_2->unk_4 = 0x7000000;
    temp_v0_3 = temp_v0_2 + 8;
    temp_v0_3->unk_0 = 0xE6000000;
    temp_v0_3->unk_4 = 0;
    temp_v0_4 = temp_v0_3 + 8;
    temp_v0_4->unk_0 = 0xF3000000;
    temp_v0_5 = temp_v0_4 + 8;
    temp_a1 = ((s32) ((arg2 * arg3) + 1) >> 1) - 1;
    if (temp_a1 < 0x7FF) {
        phi_t0 = temp_a1;
    } else {
        phi_t0 = 0x7FF;
    }
    temp_t1 = (s32) arg2 / 8;
    if (temp_t1 <= 0) {
        phi_t2 = 1;
    } else {
        phi_t2 = temp_t1;
    }
    if (temp_t1 <= 0) {
        phi_t3 = 1;
    } else {
        phi_t3 = temp_t1;
    }
    temp_v0_4->unk_4 = (s32) ((((s32) (phi_t2 + 0x7FF) / phi_t3) & 0xFFF) | 0x7000000 | ((phi_t0 & 0xFFF) << 0xC));
    temp_v0_5->unk_0 = 0xE7000000;
    temp_v0_5->unk_4 = 0;
    temp_v0_6 = temp_v0_5 + 8;
    temp_v0_6->unk_0 = (s32) (((((s32) (arg2 + 7) >> 3) & 0x1FF) << 9) | 0xF5680000);
    temp_v0_6->unk_4 = 0;
    temp_v0_7 = temp_v0_6 + 8;
    temp_v0_7->unk_0 = 0xF2000000;
    temp_v0_7->unk_4 = (s32) (((((arg2 - 1) * 4) & 0xFFF) << 0xC) | (((arg3 - 1) * 4) & 0xFFF));
    temp_v0_8 = temp_v0_7 + 8;
    temp_v0_8->unk_0 = (s32) (((((arg4 + arg2) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((arg5 + arg3) * 4) & 0xFFF));
    temp_v0_8->unk_4 = (s32) ((((arg4 * 4) & 0xFFF) << 0xC) | ((arg5 * 4) & 0xFFF));
    temp_v0_9 = temp_v0_8 + 8;
    temp_v0_9->unk_0 = 0xE1000000;
    temp_v0_9->unk_4 = 0;
    temp_v0_10 = temp_v0_9 + 8;
    temp_v0_10->unk_0 = 0xF1000000;
    temp_v0_10->unk_4 = 0x4000400;
    *arg0 = temp_v0_10 + 8;
}

void func_8096CDC8(Gfx **arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, s16 arg8, u16 arg9, u16 argA, u16 argB, EnMag *argC) {
    void *sp38;
    s32 spC;
    s32 sp0;
    Gfx *temp_v0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_a0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_15;
    void *temp_v0_16;
    void *temp_v0_17;
    void *temp_v0_18;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    s32 phi_a0;
    s32 phi_v1;
    s32 phi_a1;
    s32 phi_a0_2;
    s32 phi_v1_2;
    s32 phi_a1_2;

    temp_v0 = *arg0;
    temp_v0->words.w0 = 0xFD900000;
    temp_v0->words.w1 = arg1;
    temp_v0_2 = temp_v0 + 8;
    temp_v0_2->unk_0 = 0xF5900000;
    temp_v0_2->unk_4 = 0x7000000;
    temp_v0_3 = temp_v0_2 + 8;
    temp_v0_3->unk_0 = 0xE6000000;
    temp_v0_3->unk_4 = 0;
    temp_v0_4 = temp_v0_3 + 8;
    temp_v0_4->unk_0 = 0xF3000000;
    temp_v0_5 = temp_v0_4 + 8;
    temp_v1 = ((s32) ((arg3 * arg4) + 3) >> 2) - 1;
    if (temp_v1 < 0x7FF) {
        phi_a1 = temp_v1;
    } else {
        phi_a1 = 0x7FF;
    }
    temp_t8 = (s32) arg3 / 0x10;
    spC = temp_t8;
    if (temp_t8 <= 0) {
        phi_a0 = 1;
    } else {
        phi_a0 = spC;
    }
    if (spC <= 0) {
        phi_v1 = 1;
    } else {
        phi_v1 = spC;
    }
    temp_v0_4->unk_4 = (s32) ((((s32) (phi_a0 + 0x7FF) / phi_v1) & 0xFFF) | 0x7000000 | ((phi_a1 & 0xFFF) << 0xC));
    temp_v0_5->unk_0 = 0xE7000000;
    temp_v0_5->unk_4 = 0;
    temp_v0_6 = temp_v0_5 + 8;
    temp_v0_6->unk_0 = (s32) (((((s32) (((s32) arg3 >> 1) + 7) >> 3) & 0x1FF) << 9) | 0xF5800000);
    temp_v0_6->unk_4 = 0;
    temp_v0_7 = temp_v0_6 + 8;
    temp_v0_7->unk_4 = (s32) (((((arg3 - 1) * 4) & 0xFFF) << 0xC) | (((arg4 - 1) * 4) & 0xFFF));
    temp_v0_7->unk_0 = 0xF2000000;
    temp_v0_8 = temp_v0_7 + 8;
    temp_v0_8->unk_0 = 0xFD900000U;
    temp_v0_8->unk_4 = arg2;
    temp_v0_9 = temp_v0_8 + 8;
    arg3 = arg3;
    temp_v0_9->unk_0 = 0xF5900100;
    temp_a2 = (argA & 0xF) << 0xA;
    temp_a3 = arg9 & 0xF;
    temp_v0_9->unk_4 = (s32) (temp_a2 | 0x7014000 | 0x50 | temp_a3);
    temp_v0_10 = temp_v0_9 + 8;
    temp_v0_10->unk_0 = 0xE6000000;
    temp_v0_10->unk_4 = 0;
    temp_v0_11 = temp_v0_10 + 8;
    sp38 = temp_v0_11;
    temp_v0_12 = temp_v0_11 + 8;
    sp38->unk_0 = 0xF3000000;
    temp_v1_2 = ((s32) ((arg5 * arg6) + 1) >> 1) - 1;
    if (temp_v1_2 < 0x7FF) {
        phi_a1_2 = temp_v1_2;
    } else {
        phi_a1_2 = 0x7FF;
    }
    temp_t8_2 = (s32) arg5 / 8;
    sp0 = temp_t8_2;
    if (temp_t8_2 <= 0) {
        phi_a0_2 = 1;
    } else {
        phi_a0_2 = sp0;
    }
    if (sp0 <= 0) {
        phi_v1_2 = 1;
    } else {
        phi_v1_2 = sp0;
    }
    sp38->unk_4 = (s32) ((((s32) (phi_a0_2 + 0x7FF) / phi_v1_2) & 0xFFF) | 0x7000000 | ((phi_a1_2 & 0xFFF) << 0xC));
    temp_v0_12->unk_0 = 0xE7000000;
    temp_v0_12->unk_4 = 0;
    temp_v0_13 = temp_v0_12 + 8;
    temp_v0_13->unk_4 = (s32) (temp_a2 | 0x1014000 | 0x50 | temp_a3);
    temp_v0_13->unk_0 = (s32) (((((s32) (arg5 + 7) >> 3) & 0x1FF) << 9) | 0xF5880000 | 0x100);
    temp_v0_14 = temp_v0_13 + 8;
    temp_v0_14->unk_4 = (s32) (((((arg5 - 1) * 4) & 0xFFF) << 0xC) | 0x1000000 | (((arg6 - 1) * 4) & 0xFFF));
    temp_v0_14->unk_0 = 0xF2000000;
    temp_v0_15 = temp_v0_14 + 8;
    temp_a0 = argC + (argB * 2);
    temp_v0_16 = temp_v0_15 + 8;
    temp_v0_15->unk_0 = (s32) ((temp_a0->unk_11F44 & 0x7F) | 0xF2000000 | ((temp_a0->unk_11F36 & 0x7F) << 0xC));
    temp_v0_15->unk_4 = (s32) ((((temp_a0->unk_11F44 & 0x7F) + 0xF) & 0xFFF) | 0x1000000 | ((((temp_a0->unk_11F36 & 0x7F) + 0xF) & 0xFFF) << 0xC));
    temp_v0_17 = temp_v0_16 + 8;
    temp_v0_16->unk_0 = (s32) (((((arg7 + arg3) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((arg8 + arg4) * 4) & 0xFFF));
    temp_v0_16->unk_4 = (s32) ((((arg7 * 4) & 0xFFF) << 0xC) | ((arg8 * 4) & 0xFFF));
    temp_v0_17->unk_0 = 0xE1000000;
    temp_v0_17->unk_4 = 0;
    temp_v0_18 = temp_v0_17 + 8;
    temp_v0_18->unk_0 = 0xF1000000;
    temp_v0_18->unk_4 = 0x4000400;
    *arg0 = temp_v0_18 + 8;
}

void func_8096D230(Gfx **arg0, s16 arg1, s16 arg2, u32 arg3, u32 arg4, u32 arg5) {
    Gfx *spBC;
    u32 sp48;
    u32 sp30;
    s32 sp2C;
    s32 sp28;
    s32 sp24;
    Gfx **temp_a0;
    Gfx *temp_t6;
    Gfx *temp_t6_2;
    Gfx *temp_t6_3;
    Gfx *temp_t6_4;
    Gfx *temp_t7;
    Gfx *temp_t7_2;
    Gfx *temp_t8;
    Gfx *temp_t8_2;
    Gfx *temp_t8_3;
    Gfx *temp_t8_4;
    Gfx *temp_t9;
    Gfx *temp_t9_2;
    Gfx *temp_t9_3;
    Gfx *temp_t9_4;
    Gfx *temp_t9_5;
    Gfx *temp_v0;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    s32 temp_a0_2;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3_2;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_ra;
    s32 temp_t5;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    u32 temp_a3;
    u32 temp_lo;
    u32 temp_t3;
    s32 phi_s0;
    u32 phi_t2;
    s32 phi_a2;
    s32 phi_t0;
    u32 phi_t1;
    s32 phi_a1;
    s32 phi_a3;

    temp_a0 = &spBC;
    spBC = *arg0;
    func_8012CA0C(temp_a0);
    temp_a3 = arg4 * 4;
    temp_lo = 0x1000U / temp_a3;
    temp_t8 = spBC;
    temp_a2 = arg4 * arg5 * 4;
    temp_v1 = arg4 - 1;
    temp_t5 = arg4 * temp_lo * 4;
    temp_lo_2 = temp_a2 / temp_t5;
    phi_s0 = temp_lo_2;
    phi_t2 = arg3;
    phi_t0 = arg2 - (arg5 >> 1);
    phi_t1 = temp_lo;
    if ((temp_a2 % temp_t5) != 0) {
        phi_s0 = temp_lo_2 + 1;
    }
    spBC = &temp_t8[1];
    temp_t8->words.w1 = 0;
    temp_t8->words.w0 = 0xE7000000;
    temp_t7 = spBC;
    spBC = &temp_t7[1];
    temp_t7->words.w1 = 0;
    temp_t7->words.w0 = 0xE8000000;
    temp_t9 = spBC;
    spBC = &temp_t9[1];
    temp_t3 = ((((u32) ((arg4 * 2) + 7) >> 3) & 0x1FF) << 9) | 0xF5180000;
    temp_t9->words.w0 = temp_t3;
    temp_t9->words.w1 = 0x7080200;
    temp_t8_2 = spBC;
    spBC = &temp_t8_2[1];
    temp_t8_2->words.w1 = 0;
    temp_t8_2->words.w0 = 0xE8000000;
    temp_t6 = spBC;
    spBC = &temp_t6[1];
    temp_t6->words.w1 = 0x80200;
    temp_t6->words.w0 = temp_t3;
    sp48 = temp_a3;
    temp_v0 = spBC;
    spBC = &temp_v0[1];
    temp_ra = ((temp_v1 * 4) & 0xFFF) << 0xC;
    temp_v0->words.w0 = 0xF2000000;
    temp_v0->words.w1 = temp_ra | (((temp_lo - 1) * 4) & 0xFFF);
    phi_a1 = temp_a2 - temp_t5;
    phi_a3 = 0;
    if (phi_s0 > 0) {
        temp_v0_2 = arg1 - (arg4 >> 1);
        sp30 = (temp_v1 & 0xFFF) | 0xFD180000;
        sp2C = temp_ra | 0x7000000;
        sp24 = ((temp_v0_2 * 4) & 0xFFF) << 0xC;
        sp28 = ((((arg4 + temp_v0_2) * 4) & 0xFFF) << 0xC) | 0xE4000000;
        phi_a2 = ((temp_lo - 1) * 4) & 0xFFF;
        do {
            temp_a0_2 = phi_a1 - temp_t5;
            temp_t6_2 = spBC;
            spBC = &temp_t6_2[1];
            temp_t6_2->words.w1 = phi_t2;
            temp_t6_2->words.w0 = sp30;
            temp_t9_2 = spBC;
            spBC = &temp_t9_2[1];
            temp_t9_2->words.w1 = 0;
            temp_t9_2->words.w0 = 0xE6000000;
            temp_t8_3 = spBC;
            spBC = &temp_t8_3[1];
            temp_t8_3->words.w0 = 0xF4000000;
            temp_t8_3->words.w1 = sp2C | phi_a2;
            temp_v0_3 = spBC;
            temp_v1_2 = phi_t0 + phi_t1;
            spBC = &temp_v0_3[1];
            temp_v0_3->words.w0 = sp28 | ((temp_v1_2 * 4) & 0xFFF);
            temp_v0_3->words.w1 = sp24 | ((phi_t0 * 4) & 0xFFF);
            temp_t9_3 = spBC;
            temp_a3_2 = phi_a3 + 1;
            spBC = &temp_t9_3[1];
            temp_t9_3->words.w1 = 0;
            temp_t9_3->words.w0 = 0xE1000000;
            temp_v0_4 = spBC;
            spBC = &temp_v0_4[1];
            temp_v0_4->words.w0 = 0xF1000000;
            temp_v0_4->words.w1 = 0x4000400;
            phi_t2 += temp_t5;
            phi_t0 = temp_v1_2;
            phi_a3 = temp_a3_2;
            if (temp_a0_2 < 0) {
                if (phi_a1 > 0) {
                    temp_lo_3 = phi_a1 / (s32) sp48;
                    temp_t9_4 = spBC;
                    spBC = &temp_t9_4[1];
                    temp_t9_4->words.w0 = 0xE7000000;
                    temp_t9_4->words.w1 = 0;
                    temp_t8_4 = spBC;
                    spBC = &temp_t8_4[1];
                    temp_t8_4->words.w1 = 0;
                    temp_t8_4->words.w0 = 0xE8000000;
                    temp_t6_3 = spBC;
                    spBC = &temp_t6_3[1];
                    temp_t6_3->words.w1 = 0x7080200;
                    temp_t6_3->words.w0 = temp_t3;
                    temp_t9_5 = spBC;
                    temp_a2_2 = ((temp_lo_3 - 1) * 4) & 0xFFF;
                    spBC = &temp_t9_5[1];
                    temp_t9_5->words.w1 = 0;
                    temp_t9_5->words.w0 = 0xE8000000;
                    temp_t7_2 = spBC;
                    spBC = &temp_t7_2[1];
                    temp_t7_2->words.w1 = 0x80200;
                    temp_t7_2->words.w0 = temp_t3;
                    temp_t6_4 = spBC;
                    spBC = &temp_t6_4[1];
                    temp_t6_4->words.w1 = temp_ra | temp_a2_2;
                    temp_t6_4->words.w0 = 0xF2000000;
                    phi_a2 = temp_a2_2;
                    phi_t1 = (u32) temp_lo_3;
                    phi_a1 = temp_a0_2;
                }
            } else {
                phi_a1 = temp_a0_2;
            }
        } while (temp_a3_2 != phi_s0);
    }
    *arg0 = spBC;
}

void func_8096D60C(Gfx **arg0, void *arg1, s32 arg2, s32 arg3) {
    Gfx *temp_v0;
    void *temp_v0_10;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;

    temp_v0 = *arg0;
    temp_v0->words.w0 = 0xFD900000;
    temp_v0->words.w1 = arg1;
    temp_v0_2 = temp_v0 + 8;
    temp_v0_2->unk_0 = 0xF5900000;
    temp_v0_2->unk_4 = 0x7080200;
    temp_v0_3 = temp_v0_2 + 8;
    temp_v0_3->unk_0 = 0xE6000000;
    temp_v0_3->unk_4 = 0;
    temp_v0_4 = temp_v0_3 + 8;
    temp_v0_4->unk_0 = 0xF3000000;
    temp_v0_4->unk_4 = 0x703F800;
    temp_v0_5 = temp_v0_4 + 8;
    temp_v0_5->unk_0 = 0xE7000000;
    temp_v0_5->unk_4 = 0;
    temp_v0_6 = temp_v0_5 + 8;
    temp_v0_6->unk_0 = 0xF5800200;
    temp_v0_6->unk_4 = 0x80200;
    temp_v0_7 = temp_v0_6 + 8;
    temp_v0_7->unk_0 = 0xF2000000;
    temp_v0_7->unk_4 = 0x3C03C;
    temp_v0_8 = temp_v0_7 + 8;
    temp_v0_8->unk_0 = (s32) (((((arg2 + 0xA) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((arg3 + 0xA) * 4) & 0xFFF));
    temp_v0_8->unk_4 = (s32) ((((arg2 * 4) & 0xFFF) << 0xC) | ((arg3 * 4) & 0xFFF));
    temp_v0_9 = temp_v0_8 + 8;
    temp_v0_9->unk_0 = 0xE1000000;
    temp_v0_9->unk_4 = 0;
    temp_v0_10 = temp_v0_9 + 8;
    temp_v0_10->unk_0 = 0xF1000000;
    temp_v0_10->unk_4 = 0x6590659;
    *arg0 = temp_v0_10 + 8;
}

void func_8096D74C(EnMag *arg0, GlobalContext *arg1, Gfx **arg2) {
    Gfx *sp1C8;
    s32 sp1B8;
    void *sp74;
    Gfx **temp_a0;
    Gfx **temp_a0_2;
    Gfx **temp_a0_3;
    Gfx **temp_a0_4;
    Gfx **temp_a0_5;
    Gfx **temp_a0_6;
    Gfx *temp_t5;
    Gfx *temp_t5_10;
    Gfx *temp_t5_11;
    Gfx *temp_t5_12;
    Gfx *temp_t5_13;
    Gfx *temp_t5_14;
    Gfx *temp_t5_2;
    Gfx *temp_t5_3;
    Gfx *temp_t5_4;
    Gfx *temp_t5_5;
    Gfx *temp_t5_6;
    Gfx *temp_t5_7;
    Gfx *temp_t5_8;
    Gfx *temp_t5_9;
    Gfx *temp_t6;
    Gfx *temp_t6_10;
    Gfx *temp_t6_11;
    Gfx *temp_t6_12;
    Gfx *temp_t6_13;
    Gfx *temp_t6_2;
    Gfx *temp_t6_3;
    Gfx *temp_t6_4;
    Gfx *temp_t6_5;
    Gfx *temp_t6_6;
    Gfx *temp_t6_7;
    Gfx *temp_t6_8;
    Gfx *temp_t6_9;
    Gfx *temp_t7;
    Gfx *temp_t7_10;
    Gfx *temp_t7_11;
    Gfx *temp_t7_12;
    Gfx *temp_t7_13;
    Gfx *temp_t7_14;
    Gfx *temp_t7_2;
    Gfx *temp_t7_3;
    Gfx *temp_t7_4;
    Gfx *temp_t7_5;
    Gfx *temp_t7_6;
    Gfx *temp_t7_7;
    Gfx *temp_t7_8;
    Gfx *temp_t7_9;
    Gfx *temp_t8;
    Gfx *temp_t8_10;
    Gfx *temp_t8_11;
    Gfx *temp_t8_12;
    Gfx *temp_t8_13;
    Gfx *temp_t8_14;
    Gfx *temp_t8_15;
    Gfx *temp_t8_16;
    Gfx *temp_t8_17;
    Gfx *temp_t8_2;
    Gfx *temp_t8_3;
    Gfx *temp_t8_4;
    Gfx *temp_t8_5;
    Gfx *temp_t8_6;
    Gfx *temp_t8_7;
    Gfx *temp_t8_8;
    Gfx *temp_t8_9;
    Gfx *temp_t9;
    Gfx *temp_t9_2;
    Gfx *temp_t9_3;
    Gfx *temp_t9_4;
    Gfx *temp_t9_5;
    Gfx *temp_t9_6;
    Gfx *temp_t9_7;
    Gfx *temp_t9_8;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    Gfx *temp_v1_3;
    s16 temp_a1;
    s16 temp_a1_3;
    s16 temp_v0_14;
    s16 temp_v0_16;
    s16 temp_v1_4;
    s16 temp_v1_6;
    s32 temp_a1_2;
    s32 temp_a1_4;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s7;
    s32 temp_s7_2;
    s32 temp_s7_3;
    s32 temp_s7_4;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_v0_12;
    s32 temp_v0_13;
    s32 temp_v0_15;
    s32 temp_v1_2;
    u32 temp_s5;
    u32 temp_s5_2;
    u32 temp_v1_5;
    void *temp_s1_3;
    void *temp_v0_4;
    void *temp_v1;
    s32 phi_s0;
    s32 phi_s2;
    s32 phi_s1;
    s32 phi_s7;
    s32 phi_s0_2;
    s32 phi_s2_2;
    s32 phi_s1_2;
    s32 phi_s7_2;
    void *phi_v1;
    s32 phi_a1;
    s32 phi_a1_2;
    s32 phi_s7_3;
    s32 phi_s2_3;
    s32 phi_s0_3;
    s32 phi_s7_4;
    s32 phi_s2_4;
    s32 phi_s0_4;
    s32 phi_a0;
    s32 phi_a0_2;

    sp1C8 = *arg2;
    temp_v0 = sp1C8;
    sp1C8 = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060018;
    temp_v0->words.w1 = (arg1 + (arg0->actor.objBankIndex * 0x44))->unk_17D98;
    func_8012C680(&sp1C8);
    temp_t6 = sp1C8;
    sp1C8 = &temp_t6[1];
    temp_t6->words.w1 = 0;
    temp_t6->words.w0 = 0xE7000000;
    temp_t9 = sp1C8;
    sp1C8 = &temp_t9[1];
    temp_t9->words.w1 = 0x100000;
    temp_t9->words.w0 = 0xE3000A01;
    temp_t8 = sp1C8;
    sp1C8 = &temp_t8[1];
    temp_t8->words.w1 = 1;
    temp_t8->words.w0 = 0xE2001E01;
    temp_t7 = sp1C8;
    sp1C8 = &temp_t7[1];
    temp_t7->words.w0 = 0xE200001C;
    temp_t7->words.w1 = 0xC184340;
    temp_t6_2 = sp1C8;
    sp1C8 = &temp_t6_2[1];
    temp_t6_2->words.w0 = 0xFC272C60;
    temp_t6_2->words.w1 = 0x350CE37F;
    temp_v0_2 = sp1C8;
    temp_v1 = arg0 + 0x10000;
    sp1C8 = &temp_v0_2[1];
    temp_v0_2->words.w0 = (arg0->unk_11F06 & 0xFF) | 0xFA000000;
    temp_v0_2->words.w1 = ((arg0->unk_11F0C & 0xFF) << 8) | (arg0->unk_11F08 << 0x18) | ((arg0->unk_11F0A & 0xFF) << 0x10) | (arg0->unk_11F14 & 0xFF);
    temp_v0_3 = sp1C8;
    sp1C8 = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xFB000000;
    temp_v0_3->words.w1 = ((arg0->unk_11F12 & 0xFF) << 8) | (arg0->unk_11F0E << 0x18) | ((arg0->unk_11F10 & 0xFF) << 0x10) | 0xFF;
    sp74 = temp_v1;
    if (arg0->unk_11F06 != 0) {
        sp1B8 = 0x26;
        sp74 = temp_v1;
        phi_s7 = 0;
        phi_s0 = 0;
        do {
            phi_s2 = 0x39;
            phi_s1 = 0;
loop_3:
            temp_v1_2 = phi_s0 * 2;
            temp_v0_4 = arg0 + temp_v1_2;
            temp_v0_4->unk_11F36 = (s16) (temp_v0_4->unk_11F36 + *(&D_8096E9B8 + temp_v1_2));
            temp_t0 = phi_s0 * 4;
            temp_v0_4->unk_11F44 = (s16) (temp_v0_4->unk_11F44 + *(&D_8096E9C4 + temp_v1_2));
            func_8096CDC8(&sp1C8, *(&D_8096E970 + temp_t0), *(&D_8096E9A0 + temp_t0), 0x40, (s16) 0x40, (s16) 0x20, (s16) 0x20, (s16) phi_s2, (s16) (s32) (s16) sp1B8, (u16) 1, (u16) 1, (u16) phi_s0, arg0);
            temp_s1 = (phi_s1 + 1) & 0xFFFF;
            temp_s0 = (phi_s0 + 1) & 0xFFFF;
            phi_s0 = temp_s0;
            phi_s2 += 0x40;
            phi_s1 = temp_s1;
            phi_s0 = temp_s0;
            if (temp_s1 < 3) {
                goto loop_3;
            }
            temp_s7 = (phi_s7 + 1) & 0xFFFF;
            sp1B8 += 0x40;
            phi_s7 = temp_s7;
        } while (temp_s7 < 2);
    }
    func_8012C680(&sp1C8);
    if (sp74->unk_1F26 != 0) {
        temp_t8_2 = sp1C8;
        sp1C8 = &temp_t8_2[1];
        temp_t8_2->words.w0 = 0xFC309661;
        temp_t8_2->words.w1 = 0x552EFF7F;
        temp_v0_5 = sp1C8;
        sp1C8 = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xFA000000;
        temp_a0 = &sp1C8;
        temp_v0_5->words.w1 = (sp74->unk_1F26 & 0xFF) | ~0xFF;
        temp_v0_6 = sp1C8;
        sp1C8 = &temp_v0_6[1];
        temp_v0_6->words.w0 = 0xFB000000;
        temp_v0_6->words.w1 = ((sp74->unk_1F2C & 0xFF) << 8) | (sp74->unk_1F28 << 0x18) | ((sp74->unk_1F2A & 0xFF) << 0x10) | 0xFF;
        func_8096D230(temp_a0, 0x7C, 0x67, (u32) &D_06011E48, 0x80U, 0x70U);
    }
    temp_t8_3 = sp1C8;
    sp1C8 = &temp_t8_3[1];
    temp_t8_3->words.w1 = 0;
    temp_t8_3->words.w0 = 0xE7000000;
    temp_t5 = sp1C8;
    sp1C8 = &temp_t5[1];
    temp_t5->words.w1 = 0x100000;
    temp_t5->words.w0 = 0xE3000A01;
    temp_t7_2 = sp1C8;
    sp1C8 = &temp_t7_2[1];
    temp_t7_2->words.w1 = 1;
    temp_t7_2->words.w0 = 0xE2001E01;
    temp_t6_3 = sp1C8;
    sp1C8 = &temp_t6_3[1];
    temp_t6_3->words.w0 = 0xE200001C;
    temp_t6_3->words.w1 = 0xC184340;
    temp_t8_4 = sp1C8;
    sp1C8 = &temp_t8_4[1];
    temp_t8_4->words.w0 = 0xFC272C60;
    temp_t8_4->words.w1 = 0x350CE37F;
    temp_v0_7 = sp1C8;
    sp1C8 = &temp_v0_7[1];
    temp_v0_7->words.w0 = (sp74->unk_1F16 & 0xFF) | 0xFA000000;
    temp_v0_7->words.w1 = ((sp74->unk_1F1C & 0xFF) << 8) | (sp74->unk_1F18 << 0x18) | ((sp74->unk_1F1A & 0xFF) << 0x10) | (sp74->unk_1F24 & 0xFF);
    temp_v0_8 = sp1C8;
    sp1C8 = &temp_v0_8[1];
    temp_v0_8->words.w0 = 0xFB000000;
    temp_v0_8->words.w1 = ((sp74->unk_1F22 & 0xFF) << 8) | (sp74->unk_1F1E << 0x18) | ((sp74->unk_1F20 & 0xFF) << 0x10) | 0xFF;
    phi_v1 = sp74;
    if (sp74->unk_1F16 != 0) {
        sp1B8 = 0x26;
        phi_s7_2 = 0;
        phi_s0_2 = 0;
        do {
            phi_s2_2 = 0x39;
            phi_s1_2 = 0;
loop_10:
            temp_t0_2 = phi_s0_2 * 4;
            func_8096CDC8(&sp1C8, *(&D_8096E988 + temp_t0_2), *(&D_8096E9A0 + temp_t0_2), 0x40, (s16) 0x40, (s16) 0x20, (s16) 0x20, (s16) phi_s2_2, (s16) (s32) unksp1BA, (u16) 1, (u16) 1, (u16) phi_s0_2, arg0);
            temp_s1_2 = (phi_s1_2 + 1) & 0xFFFF;
            temp_s0_2 = (phi_s0_2 + 1) & 0xFFFF;
            phi_s0_2 = temp_s0_2;
            phi_s2_2 += 0x40;
            phi_s1_2 = temp_s1_2;
            phi_s0_2 = temp_s0_2;
            if (temp_s1_2 < 3) {
                goto loop_10;
            }
            temp_s7_2 = (phi_s7_2 + 1) & 0xFFFF;
            sp1B8 += 0x40;
            phi_s7_2 = temp_s7_2;
        } while (temp_s7_2 < 2);
        phi_v1 = sp74;
    }
    if (phi_v1->unk_1F30 != 0) {
        func_8012C680(&sp1C8);
        temp_t5_2 = sp1C8;
        sp1C8 = &temp_t5_2[1];
        temp_t5_2->words.w1 = 0;
        temp_t5_2->words.w0 = 0xE2001E01;
        temp_t8_5 = sp1C8;
        temp_a0_2 = &sp1C8;
        sp1C8 = &temp_t8_5[1];
        temp_t8_5->words.w1 = 0xFF2FFFFF;
        temp_t8_5->words.w0 = 0xFC119623;
        if ((s32) sp74->unk_1F2E < 0x64) {
            temp_t7_3 = sp1C8;
            sp1C8 = &temp_t7_3[1];
            temp_t7_3->words.w0 = 0xE200001C;
            temp_t7_3->words.w1 = 0x504340;
        } else {
            temp_t5_3 = sp1C8;
            sp1C8 = &temp_t5_3[1];
            temp_t5_3->words.w0 = 0xE200001C;
            temp_t5_3->words.w1 = 0x504240;
        }
        temp_t6_4 = sp1C8;
        sp1C8 = &temp_t6_4[1];
        temp_t6_4->words.w0 = 0xFA000000;
        temp_t6_4->words.w1 = sp74->unk_1F30 & 0xFF;
        temp_t6_5 = sp1C8;
        sp1C8 = &temp_t6_5[1];
        temp_t6_5->words.w1 = 0x640064FF;
        temp_t6_5->words.w0 = 0xFB000000;
        func_8096C998(temp_a0_2, &D_06009680, 0x68, 0x10, (s16) 0x97, (s16) 0x7C);
    }
    func_8012C680(&sp1C8);
    temp_t5_4 = sp1C8;
    sp1C8 = &temp_t5_4[1];
    temp_t5_4->words.w1 = 0;
    temp_t5_4->words.w0 = 0xE2001E01;
    temp_t8_6 = sp1C8;
    sp1C8 = &temp_t8_6[1];
    temp_t8_6->words.w1 = 0xFF2FFFFF;
    temp_t8_6->words.w0 = 0xFC119623;
    temp_a0_3 = &sp1C8;
    if ((s32) sp74->unk_1F2E < 0x64) {
        temp_t7_4 = sp1C8;
        sp1C8 = &temp_t7_4[1];
        temp_t7_4->words.w0 = 0xE200001C;
        temp_t7_4->words.w1 = 0x504340;
    } else {
        temp_t5_5 = sp1C8;
        sp1C8 = &temp_t5_5[1];
        temp_t5_5->words.w0 = 0xE200001C;
        temp_t5_5->words.w1 = 0x504240;
    }
    temp_v0_9 = sp1C8;
    sp1C8 = &temp_v0_9[1];
    temp_v0_9->words.w0 = 0xFA000078;
    temp_v0_9->words.w1 = (sp74->unk_1F30 & 0xFF) | 0xD066DE00;
    func_8096C998(temp_a0_3, &D_06009000, 0x68, 0x10, (s16) 0x97, (s16) 0x7C);
    func_8012C680(&sp1C8);
    temp_t9_2 = sp1C8;
    sp1C8 = &temp_t9_2[1];
    temp_t9_2->words.w1 = 0;
    temp_t9_2->words.w0 = 0xE2001E01;
    temp_t5_6 = sp1C8;
    temp_a0_4 = &sp1C8;
    sp1C8 = &temp_t5_6[1];
    temp_t5_6->words.w1 = 0xFF2FFFFF;
    temp_t5_6->words.w0 = 0xFC119623;
    temp_v0_10 = sp1C8;
    if (sp74->unk_1F2E != 0) {
        sp1C8 = &temp_v0_10[1];
        temp_v0_10->words.w0 = 0xFA000000;
        temp_v0_10->words.w1 = (sp74->unk_1F2E & 0xFF) | ~0xFF;
        func_8096D230(temp_a0_4, 0xB1, 0x69, (u32) &D_06000000, 0x90U, 0x40U);
        temp_t8_7 = sp1C8;
        temp_a0_5 = &sp1C8;
        sp1C8 = &temp_t8_7[1];
        temp_t8_7->words.w1 = 0;
        temp_t8_7->words.w0 = 0xE7000000;
        if ((s32) sp74->unk_1F2E < 0x64) {
            temp_t8_8 = sp1C8;
            sp1C8 = &temp_t8_8[1];
            temp_t8_8->words.w0 = 0xE200001C;
            temp_t8_8->words.w1 = 0x504340;
        } else {
            temp_t9_3 = sp1C8;
            sp1C8 = &temp_t9_3[1];
            temp_t9_3->words.w0 = 0xE200001C;
            temp_t9_3->words.w1 = 0x504240;
        }
        temp_v0_11 = sp1C8;
        sp1C8 = &temp_v0_11[1];
        temp_v0_11->words.w0 = 0xFA000000;
        temp_v0_11->words.w1 = (sp74->unk_1F2E & 0xFF) | 0xD066DE00;
        func_8096C998(temp_a0_5, &D_06009D00, 0x48, 8, (s16) 0x9E, (s16) 0x47);
    }
    func_8012C680(&sp1C8);
    temp_t9_4 = sp1C8;
    temp_a0_6 = &sp1C8;
    if (sp74->unk_1F34 != 0) {
        sp1C8 = &temp_t9_4[1];
        temp_t9_4->words.w1 = 0;
        temp_t9_4->words.w0 = 0xE2001E01;
        temp_t5_7 = sp1C8;
        sp1C8 = &temp_t5_7[1];
        temp_t5_7->words.w1 = 0xFF2FFFFF;
        temp_t5_7->words.w0 = 0xFC119623;
        temp_v1_3 = sp1C8;
        sp1C8 = &temp_v1_3[1];
        temp_v1_3->words.w0 = 0xFA000000;
        temp_v0_12 = sp74->unk_1F34 & 0xFF;
        temp_v1_3->words.w1 = (temp_v0_12 << 0x18) | (temp_v0_12 << 0x10) | (temp_v0_12 << 8) | temp_v0_12;
        func_8096CBB0(temp_a0_6, &D_06010F40, 0x80, 0x10, (s16) 0x5E, (s16) 0xC6);
    }
    if (gSaveContext.fileNum == 0xFEDC) {
        temp_a1 = D_8096E9D0;
        temp_v1_4 = *(&D_8096E9D4 + (D_8096E91C * 2));
        temp_v0_13 = temp_a1 - temp_v1_4;
        temp_t8_9 = sp1C8;
        if (temp_v0_13 < 0) {
            phi_a0 = -temp_v0_13;
        } else {
            phi_a0 = temp_v0_13;
        }
        temp_lo = phi_a0 / (s32) D_8096E920;
        if ((s32) temp_a1 >= (s32) temp_v1_4) {
            phi_a1 = (temp_a1 - (s16) temp_lo) << 0x10;
        } else {
            phi_a1 = (temp_a1 + (s16) temp_lo) << 0x10;
        }
        temp_a1_2 = phi_a1 >> 0x10;
        sp1C8 = &temp_t8_9[1];
        temp_t8_9->words.w1 = 0;
        temp_t8_9->words.w0 = 0xE7000000;
        temp_t5_8 = sp1C8;
        sp1C8 = &temp_t5_8[1];
        temp_t5_8->words.w1 = 1;
        temp_t5_8->words.w0 = 0xE2001E01;
        temp_t6_6 = sp1C8;
        sp1C8 = &temp_t6_6[1];
        temp_t6_6->words.w0 = 0xFCFF97FF;
        temp_t6_6->words.w1 = 0xFF2DFEFF;
        temp_t8_10 = sp1C8;
        temp_s5 = temp_a1_2 & 0xFF;
        sp1C8 = &temp_t8_10[1];
        temp_t8_10->words.w1 = temp_s5;
        temp_t8_10->words.w0 = 0xFA000000;
        D_8096E9D0 = (s16) temp_a1_2;
        temp_t7_5 = sp1C8;
        sp1C8 = &temp_t7_5[1];
        temp_t7_5->words.w1 = (u32) &D_06011740;
        temp_t7_5->words.w0 = 0xFD900000;
        temp_t6_7 = sp1C8;
        sp1C8 = &temp_t6_7[1];
        temp_t6_7->words.w1 = 0x7000000;
        temp_t6_7->words.w0 = 0xF5900000;
        temp_t7_6 = sp1C8;
        sp1C8 = &temp_t7_6[1];
        temp_t7_6->words.w1 = 0;
        temp_t7_6->words.w0 = 0xE6000000;
        temp_t8_11 = sp1C8;
        sp1C8 = &temp_t8_11[1];
        temp_t8_11->words.w1 = 0x723F080;
        temp_t8_11->words.w0 = 0xF3000000;
        temp_t7_7 = sp1C8;
        sp1C8 = &temp_t7_7[1];
        temp_t7_7->words.w1 = 0;
        temp_t7_7->words.w0 = 0xE7000000;
        temp_t8_12 = sp1C8;
        sp1C8 = &temp_t8_12[1];
        temp_t8_12->words.w1 = 0;
        temp_t8_12->words.w0 = 0xF5802000;
        temp_t7_8 = sp1C8;
        sp1C8 = &temp_t7_8[1];
        temp_t7_8->words.w1 = 0x3FC020;
        temp_t7_8->words.w0 = 0xF2000000;
        temp_t6_8 = sp1C8;
        sp1C8 = &temp_t6_8[1];
        temp_t6_8->words.w0 = 0xE44902E4;
        temp_t6_8->words.w1 = 0x902C0;
        temp_t8_13 = sp1C8;
        sp1C8 = &temp_t8_13[1];
        temp_t8_13->words.w1 = 0;
        temp_t8_13->words.w0 = 0xE1000000;
        temp_t5_9 = sp1C8;
        sp1C8 = &temp_t5_9[1];
        temp_t5_9->words.w1 = 0x4000400;
        temp_t5_9->words.w0 = 0xF1000000;
        temp_t9_5 = sp1C8;
        temp_v1_5 = temp_s5 | 0xCDFFFF00;
        sp1C8 = &temp_t9_5[1];
        temp_t9_5->words.w1 = temp_v1_5;
        temp_t9_5->words.w0 = 0xFA000000;
        temp_t5_10 = sp1C8;
        sp1C8 = &temp_t5_10[1];
        temp_t5_10->words.w0 = 0xE448C2E0;
        temp_t5_10->words.w1 = 0x8C2BC;
        temp_t6_9 = sp1C8;
        sp1C8 = &temp_t6_9[1];
        temp_t6_9->words.w1 = 0;
        temp_t6_9->words.w0 = 0xE1000000;
        temp_t7_9 = sp1C8;
        sp1C8 = &temp_t7_9[1];
        temp_t7_9->words.w1 = 0x4000400;
        temp_t7_9->words.w0 = 0xF1000000;
        temp_t8_14 = sp1C8;
        sp1C8 = &temp_t8_14[1];
        temp_t8_14->words.w1 = temp_s5;
        temp_t8_14->words.w0 = 0xFA000000;
        temp_t7_10 = sp1C8;
        sp1C8 = &temp_t7_10[1];
        temp_t7_10->words.w1 = (u32) &D_06011BC0;
        temp_t7_10->words.w0 = 0xFD900000;
        temp_t6_10 = sp1C8;
        sp1C8 = &temp_t6_10[1];
        temp_t6_10->words.w1 = 0x7000000;
        temp_t6_10->words.w0 = 0xF5900000;
        temp_t7_11 = sp1C8;
        sp1C8 = &temp_t7_11[1];
        temp_t7_11->words.w1 = 0;
        temp_t7_11->words.w0 = 0xE6000000;
        temp_t8_15 = sp1C8;
        sp1C8 = &temp_t8_15[1];
        temp_t8_15->words.w1 = 0x71430E4;
        temp_t8_15->words.w0 = 0xF3000000;
        temp_t7_12 = sp1C8;
        sp1C8 = &temp_t7_12[1];
        temp_t7_12->words.w1 = 0;
        temp_t7_12->words.w0 = 0xE7000000;
        temp_t6_11 = sp1C8;
        sp1C8 = &temp_t6_11[1];
        temp_t6_11->words.w1 = 0;
        temp_t6_11->words.w0 = 0xF5801200;
        temp_t9_6 = sp1C8;
        sp1C8 = &temp_t9_6[1];
        temp_t9_6->words.w1 = 0x23C020;
        temp_t9_6->words.w0 = 0xF2000000;
        temp_t5_11 = sp1C8;
        sp1C8 = &temp_t5_11[1];
        temp_t5_11->words.w0 = 0xE43B0318;
        temp_t5_11->words.w1 = 0x1702F4;
        temp_t6_12 = sp1C8;
        sp1C8 = &temp_t6_12[1];
        temp_t6_12->words.w1 = 0;
        temp_t6_12->words.w0 = 0xE1000000;
        temp_t7_13 = sp1C8;
        sp1C8 = &temp_t7_13[1];
        temp_t7_13->words.w1 = 0x4000400;
        temp_t7_13->words.w0 = 0xF1000000;
        temp_t8_16 = sp1C8;
        sp1C8 = &temp_t8_16[1];
        temp_t8_16->words.w1 = temp_v1_5;
        temp_t8_16->words.w0 = 0xFA000000;
        temp_t7_14 = sp1C8;
        sp1C8 = &temp_t7_14[1];
        temp_t7_14->words.w0 = 0xE43AC314;
        temp_t7_14->words.w1 = 0x16C2F0;
        temp_t5_12 = sp1C8;
        sp1C8 = &temp_t5_12[1];
        temp_t5_12->words.w1 = 0;
        temp_t5_12->words.w0 = 0xE1000000;
        temp_t9_7 = sp1C8;
        sp1C8 = &temp_t9_7[1];
        temp_t9_7->words.w1 = 0x4000400;
        temp_t9_7->words.w0 = 0xF1000000;
        D_8096E920 += -1;
        if (D_8096E920 == 0) {
            temp_v0_14 = D_8096E91C;
            D_8096E9D0 = *(&D_8096E9D4 + (temp_v0_14 * 2));
            if (gSaveContext.fileNum == 0xFEDC) {
                D_8096E920 = 0x28;
            } else {
                D_8096E920 = 0x14;
            }
            D_8096E91C = temp_v0_14 ^ 1;
        }
    } else if (sp74->unk_1F34 != 0) {
        temp_a1_3 = D_8096E9D0;
        temp_v1_6 = *(&D_8096E9D4 + (D_8096E91C * 2));
        temp_v0_15 = temp_a1_3 - temp_v1_6;
        temp_t9_8 = sp1C8;
        if (temp_v0_15 < 0) {
            phi_a0_2 = -temp_v0_15;
        } else {
            phi_a0_2 = temp_v0_15;
        }
        temp_lo_2 = phi_a0_2 / (s32) D_8096E920;
        if ((s32) temp_a1_3 >= (s32) temp_v1_6) {
            phi_a1_2 = (temp_a1_3 - (s16) temp_lo_2) << 0x10;
        } else {
            phi_a1_2 = (temp_a1_3 + (s16) temp_lo_2) << 0x10;
        }
        temp_a1_4 = phi_a1_2 >> 0x10;
        sp1C8 = &temp_t9_8[1];
        temp_t9_8->words.w1 = 0;
        temp_t9_8->words.w0 = 0xE7000000;
        temp_t5_13 = sp1C8;
        sp1C8 = &temp_t5_13[1];
        temp_t5_13->words.w0 = 0xFCFF97FF;
        temp_t5_13->words.w1 = 0xFF2DFEFF;
        temp_t6_13 = sp1C8;
        temp_s5_2 = temp_a1_4 & 0xFF;
        sp1C8 = &temp_t6_13[1];
        temp_t6_13->words.w1 = temp_s5_2;
        temp_t6_13->words.w0 = 0xFA000000;
        D_8096E9D0 = (s16) temp_a1_4;
        temp_s1_3 = arg0 + 0x170;
        phi_s7_3 = 0;
        phi_s2_3 = 0x78;
        phi_s0_3 = 0;
        phi_s7_4 = 0;
        phi_s0_4 = 0;
        do {
            func_8096D60C(&sp1C8, (*(&D_8096E964 + phi_s7_3) << 7) + temp_s1_3 + 0x7880, phi_s2_3, 0xAF);
            temp_s2 = phi_s2_3 + 7;
            phi_s2_3 = temp_s2;
            if (phi_s0_3 == 4) {
                phi_s2_3 = temp_s2 + 5;
            }
            temp_s7_3 = (phi_s7_3 + 1) & 0xFFFF;
            phi_s7_3 = temp_s7_3;
            phi_s0_3 = temp_s7_3;
        } while (temp_s7_3 < 0xA);
        temp_t5_14 = sp1C8;
        sp1C8 = &temp_t5_14[1];
        temp_t5_14->words.w1 = 0;
        temp_t5_14->words.w0 = 0xE7000000;
        temp_t8_17 = sp1C8;
        sp1C8 = &temp_t8_17[1];
        temp_t8_17->words.w0 = 0xFA000000;
        temp_t8_17->words.w1 = temp_s5_2 | 0xFF1E1E00;
        phi_s2_4 = 0x77;
        do {
            func_8096D60C(&sp1C8, (*(&D_8096E964 + phi_s7_4) << 7) + temp_s1_3 + 0x7880, phi_s2_4, 0xAE);
            temp_s2_2 = phi_s2_4 + 7;
            phi_s2_4 = temp_s2_2;
            if (phi_s0_4 == 4) {
                phi_s2_4 = temp_s2_2 + 5;
            }
            temp_s7_4 = (phi_s7_4 + 1) & 0xFFFF;
            phi_s7_4 = temp_s7_4;
            phi_s0_4 = temp_s7_4;
        } while (temp_s7_4 < 0xA);
        D_8096E920 += -1;
        if (D_8096E920 == 0) {
            temp_v0_16 = D_8096E91C;
            D_8096E9D0 = *(&D_8096E9D4 + (temp_v0_16 * 2));
            if (gSaveContext.fileNum == 0xFEDC) {
                D_8096E920 = 0x28;
            } else {
                D_8096E920 = 0x14;
            }
            D_8096E91C = temp_v0_16 ^ 1;
        }
    }
    *arg2 = sp1C8;
}

void EnMag_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp30;
    Gfx *sp2C;
    GraphicsContext *sp28;
    Gfx *temp_a0;
    Gfx *temp_t0;
    Gfx *temp_v1;
    GraphicsContext *temp_a3;
    EnMag *this = (EnMag *) thisx;

    temp_a3 = globalCtx->state.gfxCtx;
    temp_a0 = temp_a3->polyOpa.p;
    sp28 = temp_a3;
    sp2C = temp_a0;
    sp30 = Graph_GfxPlusOne(temp_a0);
    temp_v1 = temp_a3->overlay.p;
    temp_a3->overlay.p = &temp_v1[1];
    temp_v1->words.w0 = 0xDE000000;
    temp_v1->words.w1 = (u32) sp30;
    sp28 = temp_a3;
    func_8096D74C(this, globalCtx, &sp30, temp_a3);
    temp_t0 = sp30;
    sp30 = &temp_t0[1];
    temp_t0->words.w1 = 0;
    temp_t0->words.w0 = 0xDF000000;
    sp28 = temp_a3;
    Graph_BranchDlist(temp_a0, sp30);
    temp_a3->polyOpa.p = sp30;
}
