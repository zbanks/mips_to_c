typedef struct {
    /* 0x00000 */ View view;
    /* 0x00168 */ Font font;
    /* 0x11EF4 */ char pad_11EF4[0x10];
    /* 0x11F04 */ u16 unk11F04;
    /* 0x11F06 */ char pad_11F06[0x4];              /* maybe part of unk11F04[3]? */
    /* 0x11F0A */ u8 unk11F0A;
    /* 0x11F0B */ char pad_11F0B[0x5];              /* maybe part of unk11F0A[6]? */
    /* 0x11F10 */ s32 unk11F10;
    /* 0x11F14 */ char pad_11F14[0xE];              /* maybe part of unk11F10[4]? */
    /* 0x11F22 */ u8 unk11F22;
    /* 0x11F23 */ char pad_11F23[0xFD];             /* maybe part of unk11F22[254]? */
    /* 0x12020 */ u8 unk12020;
    /* 0x12021 */ u8 choiceIndex;
    /* 0x12022 */ char pad_12022[0x1];
    /* 0x12023 */ s8 unk12023;
    /* 0x12024 */ char pad_12024[0x6];              /* maybe part of unk12023[7]? */
    /* 0x1202A */ u16 unk1202A;
    /* 0x1202C */ char pad_1202C[0x2];
    /* 0x1202E */ u16 unk1202E;
    /* 0x12030 */ char pad_12030[0x14];             /* maybe part of unk1202E[11]? */
    /* 0x12044 */ s16 unk12044;
    /* 0x12046 */ char pad_12046[0x24];             /* maybe part of unk12044[19]? */
    /* 0x1206A */ s16 unk1206A;
    /* 0x1206C */ s32 unk1206C;
    /* 0x12070 */ char pad_12070[0x8];              /* maybe part of unk1206C[3]? */
    /* 0x12078 */ s32 bankRupeesSelected;
    /* 0x1207C */ s32 bankRupees;
    /* 0x12080 */ char pad_12080[0x4];
    /* 0x12084 */ void *unk_12084;                  /* inferred */
    /* 0x12088 */ char pad_12088[0x10];             /* maybe part of unk_12084[5]? */
    /* 0x12098 */ f32 unk_12098;                    /* inferred */
    /* 0x1209C */ char pad_1209C[0x15];             /* maybe part of unk_12098[6]? */
    /* 0x120B1 */ u8 unk120B1;
    /* 0x120B2 */ char pad_120B2[0x2E];             /* maybe part of unk120B1[47]? */
} MessageContext;                                   /* size = 0x120E0 */

struct _mips2c_stack_func_801588D0 {};              /* size 0x0 */

struct _mips2c_stack_func_80158988 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80158A24 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80158C04 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80158D98 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80158FB0 {
    /* 0x00 */ char pad_0[0x54];
    /* 0x54 */ s16 sp54;                            /* inferred */
    /* 0x56 */ s16 sp56;                            /* inferred */
    /* 0x58 */ s16 sp58;                            /* inferred */
    /* 0x5A */ s16 sp5A;                            /* inferred */
    /* 0x5C */ char pad_5C[0x4];                    /* maybe part of sp5A[3]? */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0xC];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_8015926C {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ s16 sp48;                            /* inferred */
    /* 0x4A */ char pad_4A[0x16];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80159438 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ u32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8015966C {
    /* 0x000 */ char pad_0[0x50];
    /* 0x050 */ s32 sp50;                           /* inferred */
    /* 0x054 */ s32 sp54;                           /* inferred */
    /* 0x058 */ char pad_58[0x4];
    /* 0x05C */ Font *sp5C;                         /* inferred */
    /* 0x060 */ char pad_60[0xCA];                  /* maybe part of sp5C[51]? */
    /* 0x12A */ s16 sp12A;                          /* inferred */
    /* 0x12C */ s16 sp12C;                          /* inferred */
    /* 0x12E */ s16 sp12E;                          /* inferred */
    /* 0x130 */ s16 sp130;                          /* inferred */
    /* 0x132 */ char pad_132[0x2];
    /* 0x134 */ u32 *sp134;                         /* inferred */
    /* 0x138 */ char pad_138[0x2];
    /* 0x13A */ u16 sp13A;                          /* inferred */
    /* 0x13C */ char pad_13C[0xC];
};                                                  /* size = 0x148 */

struct _mips2c_stack_func_8015B198 {
    /* 0x00 */ char pad_0[0x70];
    /* 0x70 */ void *sp70;                          /* inferred */
    /* 0x74 */ char pad_74[0x4];
    /* 0x78 */ s32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0x14];                   /* maybe part of sp78[6]? */
    /* 0x90 */ s32 sp90;                            /* inferred */
    /* 0x94 */ u32 sp94;                            /* inferred */
    /* 0x98 */ char pad_98[0xC];                    /* maybe part of sp94[4]? */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ ? spA8;                              /* inferred */
    /* 0xA8 */ char pad_A8[0x14];
    /* 0xBC */ s32 spBC;                            /* inferred */
    /* 0xC0 */ char pad_C0[0x6];                    /* maybe part of spBC[2]? */
    /* 0xC6 */ s16 spC6;                            /* inferred */
    /* 0xC8 */ s16 spC8;                            /* inferred */
    /* 0xCA */ s16 spCA;                            /* inferred */
    /* 0xCC */ s16 spCC;                            /* inferred */
    /* 0xCE */ s16 spCE;                            /* inferred */
    /* 0xD0 */ s16 spD0;                            /* inferred */
    /* 0xD2 */ char pad_D2[0x8];                    /* maybe part of spD0[5]? */
    /* 0xDA */ s16 spDA;                            /* inferred */
    /* 0xDC */ void *spDC;                          /* inferred */
    /* 0xE0 */ void *spE0;                          /* inferred */
    /* 0xE4 */ char pad_E4[0x4];
};                                                  /* size = 0xE8 */

s32 func_8010A0A4(GlobalContext *);                 /* extern */
? func_8014995C(GlobalContext *, void *, u32 **, Font *); /* extern */
? func_8014AAD0(GlobalContext *);                   /* extern */
? func_8014CFDC(GlobalContext *);                   /* extern */
void func_80158988(GlobalContext *arg0, u8 arg1, s32 *arg2, f32 *arg3, s16 arg4); /* static */
void func_80158A24(GlobalContext *arg0, s16 *arg1, s32 *arg2, f32 *arg3); /* static */
void func_80158C04(GlobalContext *arg0, s16 *arg1, s32 *arg2, f32 *arg3); /* static */
void func_80158D98(GlobalContext *arg0, s16 *arg1, s32 *arg2, f32 *arg3, s16 arg4); /* static */
void func_80158FB0(GlobalContext *arg0, s32 arg1, s32 *arg2, f32 *arg3, s16 *arg4); /* static */
void func_8015926C(GlobalContext *arg0, s32 *arg1, f32 *arg2, s16 *arg3); /* static */
void func_80159438(s32 arg0, u32 arg1, ? *arg2, s16); /* static */
void func_8015966C(GlobalContext *arg0, u32 **arg1, s32 arg2); /* static */
void func_8015B198(GlobalContext *arg0);            /* static */
static ? D_801D03F0;                                /* unable to generate initializer */
static ? D_801D0470;                                /* unable to generate initializer */
static ? D_801D0710;                                /* unable to generate initializer */
static ? D_801D07C4;                                /* unable to generate initializer */
static ? D_801D07DC;                                /* unable to generate initializer */
static ? D_801D080C;                                /* unable to generate initializer */
static ? D_801D083C;                                /* unable to generate initializer */
static ? D_801D086C;                                /* unable to generate initializer */
static ? D_801D089C;                                /* unable to generate initializer */
static ? D_801D08CC;                                /* unable to generate initializer */
static ? D_801D08D8;                                /* unable to generate initializer */
static ? D_801D08E4;                                /* unable to generate initializer */
static ? D_801D08E8;                                /* unable to generate initializer */
static ? D_801D0900;                                /* unable to generate initializer */
static ? D_801E201C;                                /* unable to generate initializer; const */
s8 D_801D06F0[24] = {
    0x52,
    0x75,
    0x70,
    0x65,
    0x65,
    0x28,
    0x73,
    0x29,
    0x52,
    0x75,
    0x62,
    0x69,
    0x6E,
    0x28,
    0x65,
    0x29,
    0x52,
    0x75,
    0x62,
    0x69,
    0x73,
    0,
    0,
    0,
};
s8 D_801D0714[16] = {
    0x47,
    0x72,
    0x65,
    0x61,
    0x74,
    0x20,
    0x42,
    0x61,
    0x79,
    0x20,
    0x43,
    0x6F,
    0x61,
    0x73,
    0x74,
    0,
};
GameInfo *gGameInfo;
s16 gItemPrices[50] = {
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
    0,
    0,
    0,
    0,
    0,
    0,
    0x14,
    0x14,
    0x14,
    0x14,
    0,
    0x14,
    5,
    0x14,
    0x14,
    0x32,
    0x32,
    0xC8,
    0x14,
    0x14,
    0x14,
    0xC8,
    5,
    0,
    0xC8,
    0x14,
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
SaveContext gSaveContext;

void func_801588D0(GlobalContext *globalCtx, s16 param_2) {
    Font *temp_v0_2;
    Font *temp_v0_4;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    u16 temp_v0;
    u16 temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;
    u16 phi_v0;
    void *phi_v1;

    temp_v1 = globalCtx->msgCtx.unk_12084;
    temp_v0 = temp_v1->unk_0;
    temp_a2 = temp_v1->unk_4;
    phi_v0 = temp_v0;
    phi_v1 = temp_v1;
    if (temp_v0 != 0xFFFF) {
loop_1:
        if ((param_2 & 0xFFFF) == phi_v0) {
            temp_a1 = phi_v1->unk_4;
            temp_v0_2 = &globalCtx->msgCtx.font;
            temp_v0_2->messageStart = temp_a1 - temp_a2;
            temp_v0_2->messageEnd = phi_v1->unk_C - temp_a1;
            return;
        }
        temp_v0_3 = phi_v1->unk_8;
        phi_v0 = temp_v0_3;
        phi_v1 += 8;
        if (temp_v0_3 == 0xFFFF) {
            /* Duplicate return node #4. Try simplifying control flow for better match */
            temp_v1_2 = globalCtx->msgCtx.unk_12084;
            temp_v0_4 = &globalCtx->msgCtx.font;
            temp_a1_2 = temp_v1_2->unk_4;
            temp_v0_4->messageStart = temp_a1_2 - temp_a2;
            temp_v0_4->messageEnd = temp_v1_2->unk_C - temp_a1_2;
            return;
        }
        goto loop_1;
    }
    temp_v1_2 = globalCtx->msgCtx.unk_12084;
    temp_v0_4 = &globalCtx->msgCtx.font;
    temp_a1_2 = temp_v1_2->unk_4;
    temp_v0_4->messageStart = temp_a1_2 - temp_a2;
    temp_v0_4->messageEnd = temp_v1_2->unk_C - temp_a1_2;
}

void func_80158988(GlobalContext *arg0, u8 arg1, s32 *arg2, f32 *arg3, s16 arg4) {
    s32 sp20;
    f32 sp1C;
    MessageContext *temp_v0;
    f32 temp_f0;
    s32 temp_a2;

    temp_a2 = *arg2;
    temp_f0 = *arg3;
    sp20 = temp_a2;
    sp1C = temp_f0;
    Font_LoadCharNES(arg0, arg1, temp_a2);
    temp_v0 = &arg0->msgCtx;
    (temp_v0 + arg4)->unk_11F24 = arg1;
    *arg2 = temp_a2 + 0x80;
    *arg3 = temp_f0 + (16.0f * temp_v0->unk_12098);
}

void func_80158A24(GlobalContext *arg0, s16 *arg1, s32 *arg2, f32 *arg3) {
    f32 sp30;
    MessageContext *temp_s3;
    s16 temp_s0;
    s16 temp_s0_2;
    s16 temp_s0_3;
    s16 temp_s0_4;
    s16 temp_s0_5;
    s16 temp_s0_6;
    s16 temp_s0_7;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s1_5;
    s32 temp_s1_6;

    temp_s0 = *arg1;
    temp_s1 = *arg2;
    sp30 = *arg3;
    (arg0 + temp_s0)->unk_1682C = 0x20;
    temp_s0_2 = temp_s0 + 1;
    Font_LoadCharNES(arg0, 0x52U, temp_s1);
    temp_s3 = &arg0->msgCtx;
    temp_s0_3 = temp_s0_2 + 1;
    temp_s1_2 = temp_s1 + 0x80;
    (temp_s3 + temp_s0_2)->unk_11F24 = 0x52;
    Font_LoadCharNES(arg0, 0x75U, temp_s1_2);
    temp_s0_4 = temp_s0_3 + 1;
    temp_s1_3 = temp_s1_2 + 0x80;
    (temp_s3 + temp_s0_3)->unk_11F24 = 0x75;
    Font_LoadCharNES(arg0, 0x70U, temp_s1_3);
    temp_s0_5 = temp_s0_4 + 1;
    temp_s1_4 = temp_s1_3 + 0x80;
    (temp_s3 + temp_s0_4)->unk_11F24 = 0x70;
    Font_LoadCharNES(arg0, 0x65U, temp_s1_4);
    temp_s0_6 = temp_s0_5 + 1;
    temp_s1_5 = temp_s1_4 + 0x80;
    (temp_s3 + temp_s0_5)->unk_11F24 = 0x65;
    Font_LoadCharNES(arg0, 0x65U, temp_s1_5);
    temp_s0_7 = temp_s0_6 + 1;
    temp_s1_6 = temp_s1_5 + 0x80;
    (temp_s3 + temp_s0_6)->unk_11F24 = 0x65;
    Font_LoadCharNES(arg0, 0x73U, temp_s1_6);
    (temp_s3 + temp_s0_7)->unk_11F24 = 0x73;
    *arg1 = temp_s0_7;
    *arg2 = temp_s1_6 + 0x80;
    *arg3 = sp30 + (16.0f * temp_s3->unk_12098 * 6.0f);
}

void func_80158C04(GlobalContext *arg0, s16 *arg1, s32 *arg2, f32 *arg3) {
    f32 sp40;
    f32 temp_f0;
    s16 temp_s2;
    s16 temp_s2_2;
    s16 temp_s2_3;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s3_2;
    u8 temp_v0;
    u8 temp_v0_2;
    s32 phi_s0;
    s32 phi_s3;
    s16 phi_s2;
    s16 phi_s2_2;
    s32 phi_s3_2;
    f32 phi_f0;
    u8 phi_v0;

    temp_s2 = *arg1;
    temp_s3 = *arg2;
    temp_f0 = *arg3;
    (arg0 + temp_s2)->unk_1682C = 0x20;
    temp_s2_2 = temp_s2 + 1;
    temp_v0 = (&D_801D0710 + gSaveContext.language)->unk_-1;
    phi_s0 = 0;
    phi_s3 = temp_s3;
    phi_s2 = temp_s2_2;
    phi_s2_2 = temp_s2_2;
    phi_s3_2 = temp_s3;
    phi_f0 = temp_f0;
    phi_v0 = temp_v0;
    if ((s32) temp_v0 > 0) {
        sp40 = temp_f0;
        do {
            Font_LoadCharNES(arg0, (D_801D06F0 + (gSaveContext.language * 8) + phi_s0)->unk_-8, phi_s3);
            (arg0 + 0x4908 + phi_s2)->unk_11F24 = (u8) (D_801D06F0 + (gSaveContext.language * 8) + phi_s0)->unk_-8;
            temp_s0 = (phi_s0 + 1) & 0xFF;
            temp_s2_3 = phi_s2 + 1;
            temp_v0_2 = (&D_801D0710 + gSaveContext.language)->unk_-1;
            temp_s3_2 = phi_s3 + 0x80;
            phi_s0 = temp_s0;
            phi_s3 = temp_s3_2;
            phi_s2 = temp_s2_3;
            phi_s2_2 = temp_s2_3;
            phi_s3_2 = temp_s3_2;
            phi_v0 = temp_v0_2;
        } while (temp_s0 < (s32) temp_v0_2);
        phi_f0 = sp40;
    }
    *arg1 = phi_s2_2 - 1;
    *arg2 = phi_s3_2;
    *arg3 = phi_f0 + (16.0f * (arg0 + 0x10000)->unk_69A0 * (f32) (phi_v0 + 1));
}

void func_80158D98(GlobalContext *arg0, s16 *arg1, s32 *arg2, f32 *arg3, s16 arg4) {
    MessageContext *temp_s2;
    f32 temp_f20;
    s16 temp_s0;
    s16 temp_s0_2;
    s16 temp_s0_3;
    s16 temp_s0_4;
    s16 temp_s0_5;
    s16 temp_s0_6;
    s16 temp_s0_7;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s1_5;
    s32 temp_s1_6;
    s16 phi_s0;
    s32 phi_s1;
    f32 phi_f20;

    temp_s0 = *arg1;
    temp_s1 = *arg2;
    temp_f20 = *arg3;
    (arg0 + temp_s0)->unk_1682C = 0x20;
    temp_s0_2 = temp_s0 + 1;
    Font_LoadCharNES(arg0, 0x52U, temp_s1);
    temp_s2 = &arg0->msgCtx;
    temp_s0_3 = temp_s0_2 + 1;
    temp_s1_2 = temp_s1 + 0x80;
    (temp_s2 + temp_s0_2)->unk_11F24 = 0x52;
    Font_LoadCharNES(arg0, 0x75U, temp_s1_2);
    temp_s0_4 = temp_s0_3 + 1;
    temp_s1_3 = temp_s1_2 + 0x80;
    (temp_s2 + temp_s0_3)->unk_11F24 = 0x75;
    Font_LoadCharNES(arg0, 0x70U, temp_s1_3);
    temp_s0_5 = temp_s0_4 + 1;
    temp_s1_4 = temp_s1_3 + 0x80;
    (temp_s2 + temp_s0_4)->unk_11F24 = 0x70;
    Font_LoadCharNES(arg0, 0x65U, temp_s1_4);
    temp_s0_6 = temp_s0_5 + 1;
    temp_s1_5 = temp_s1_4 + 0x80;
    (temp_s2 + temp_s0_5)->unk_11F24 = 0x65;
    Font_LoadCharNES(arg0, 0x65U, temp_s1_5);
    (temp_s2 + temp_s0_6)->unk_11F24 = 0x65;
    temp_s1_6 = temp_s1_5 + 0x80;
    phi_s0 = temp_s0_6;
    phi_s1 = temp_s1_6;
    if (arg4 != 1) {
        temp_s0_7 = temp_s0_6 + 1;
        Font_LoadCharNES(arg0, 0x73U, temp_s1_6);
        (temp_s2 + temp_s0_7)->unk_11F24 = 0x73;
        phi_s0 = temp_s0_7;
        phi_s1 = temp_s1_6 + 0x80;
        phi_f20 = temp_f20 + (16.0f * temp_s2->unk_12098 * 6.0f);
    } else {
        phi_f20 = temp_f20 + (16.0f * temp_s2->unk_12098 * 5.0f);
    }
    *arg1 = phi_s0;
    *arg2 = phi_s1;
    *arg3 = phi_f20;
}

void func_80158FB0(GlobalContext *arg0, s32 arg1, s32 *arg2, f32 *arg3, s16 *arg4) {
    f32 sp60;
    s16 sp5A;
    s16 sp58;
    s16 sp56;
    s16 sp54;
    f32 temp_f0;
    s16 *temp_s1;
    s16 temp_s0;
    s16 temp_s2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_f6;
    s32 temp_hi;
    s32 temp_s3;
    void *temp_s4;
    u32 phi_a0;
    s16 phi_v0;
    s16 phi_v1;
    s16 phi_v0_2;
    s16 phi_v1_2;
    s16 phi_s0;
    s32 phi_s3;
    s16 phi_s2;
    s16 phi_s2_2;
    s32 phi_s3_2;

    sp60 = *arg3;
    phi_s3 = *arg2;
    phi_s2 = *arg4;
    if ((arg1 & 0xFF) == 0xCF) {
        phi_a0 = (-(s32) (((s32) gSaveContext.day % 5) << 0x10) - ((gSaveContext.time - 0x4000) & 0xFFFF)) + 0x40000;
    } else {
        phi_a0 = 0x10000 - ((gSaveContext.time - 0x4000) & 0xFFFF);
    }
    temp_f0 = (f32) phi_a0 * 0.021972656f;
    sp54 = 0;
    temp_f6 = (s32) (temp_f0 / 60.0f);
    sp56 = (s16) temp_f6;
    phi_v0 = (s16) temp_f6;
    phi_v1 = 0;
    phi_v1_2 = 0;
    phi_s0 = 0;
    if ((s32) (s16) temp_f6 >= 0xA) {
        do {
            temp_v0 = phi_v0 - 0xA;
            temp_v1 = phi_v1 + 1;
            phi_v0 = temp_v0;
            phi_v1 = temp_v1;
        } while ((s32) temp_v0 >= 0xA);
        sp54 = temp_v1;
        sp56 = temp_v0;
    }
    temp_hi = (s32) temp_f0 % 0x3C;
    sp5A = (s16) temp_hi;
    sp58 = 0;
    phi_v0_2 = (s16) temp_hi;
    if ((s32) (s16) temp_hi >= 0xA) {
        do {
            temp_v0_2 = phi_v0_2 - 0xA;
            temp_v1_2 = phi_v1_2 + 1;
            phi_v0_2 = temp_v0_2;
            phi_v1_2 = temp_v1_2;
        } while ((s32) temp_v0_2 >= 0xA);
        sp58 = temp_v1_2;
        sp5A = temp_v0_2;
    }
    temp_s4 = arg0 + 0x4908;
    do {
        temp_s1 = &(&sp54)[phi_s0];
        Font_LoadCharNES(arg0, (*temp_s1 + 0x30) & 0xFF, phi_s3);
        temp_s2 = phi_s2 + 1;
        temp_s3 = phi_s3 + 0x80;
        (temp_s4 + phi_s2)->unk_11F24 = (s8) (*temp_s1 + 0x30);
        phi_s2_2 = temp_s2;
        phi_s3_2 = temp_s3;
        if (phi_s0 == 1) {
            Font_LoadCharNES(arg0, 0x3A & 0xFF, temp_s3);
            (temp_s4 + temp_s2)->unk_11F24 = 0x3A;
            phi_s2_2 = (s16) (temp_s2 + 1);
            phi_s3_2 = temp_s3 + 0x80;
        }
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
        phi_s3 = phi_s3_2;
        phi_s2 = phi_s2_2;
    } while ((s32) temp_s0 < 4);
    sp60 += 5.0f * (16.0f * temp_s4->unk_12098);
    *arg4 = phi_s2_2 - 1;
    *arg2 = phi_s3_2;
    *arg3 = sp60;
}

void func_8015926C(GlobalContext *arg0, s32 *arg1, f32 *arg2, s16 *arg3) {
    s16 sp48;
    f32 temp_f20;
    f32 temp_f20_2;
    s16 temp_a3;
    s16 temp_s1;
    s16 temp_s2;
    s16 temp_s2_2;
    s32 temp_s3;
    u8 *temp_v1;
    u8 temp_t3;
    u8 temp_v0;
    void *temp_s0;
    void *temp_s4;
    s16 phi_v0;
    s16 phi_s1;
    s16 phi_s2;
    s16 phi_a3;
    GlobalContext *phi_a0;
    s32 phi_s3;
    s16 phi_s2_2;
    s32 phi_s3_2;
    f32 phi_f20;
    s16 phi_a3_2;
    GlobalContext *phi_a0_2;
    GlobalContext *phi_a0_3;
    s32 phi_s3_3;
    f32 phi_f20_2;
    u8 phi_v0_2;

    temp_s2 = *arg3;
    temp_s3 = *arg1;
    temp_f20 = *arg2;
    if ((func_8010A0A4(arg0) != 0) || (arg0->sceneNum == 0x4F)) {
        phi_v0 = 0xA;
    } else {
        phi_v0 = arg0->pauseCtx.unk_238[4];
    }
    temp_a3 = *(&D_801D07C4 + (phi_v0 * 2));
    temp_s4 = arg0 + 0x4908;
    phi_s1 = 0;
    phi_a3 = temp_a3;
    phi_a0 = arg0;
    phi_s2_2 = temp_s2;
    phi_s3_2 = temp_s3;
    phi_f20 = temp_f20;
    phi_a3_2 = temp_a3;
    phi_a0_2 = arg0;
    if ((s32) temp_a3 > 0) {
        phi_s2 = temp_s2;
        phi_s3 = temp_s3;
        phi_f20_2 = temp_f20;
        do {
            temp_v1 = (phi_v0 * 0x10) + D_801D0714 + phi_s1;
            temp_t3 = *temp_v1;
            temp_s0 = temp_s4 + phi_s2;
            temp_v0 = temp_t3 & 0xFF;
            temp_s0->unk_11F24 = temp_t3;
            phi_a0_3 = phi_a0;
            phi_s3_3 = phi_s3;
            phi_v0_2 = temp_v0;
            if (temp_v0 != 0x20) {
                sp48 = phi_a3;
                Font_LoadCharNES(phi_a0, *temp_v1, phi_s3);
                phi_a0_3 = arg0;
                phi_s3_3 = phi_s3 + 0x80;
                phi_v0_2 = temp_s0->unk_11F24;
            }
            temp_s1 = phi_s1 + 1;
            temp_s2_2 = phi_s2 + 1;
            temp_f20_2 = phi_f20_2 + ((&D_801D0470 + (phi_v0_2 * 4))->unk_-80 * temp_s4->unk_12098);
            phi_s1 = temp_s1;
            phi_s2 = temp_s2_2;
            phi_a3 = (s16) (s32) phi_a3;
            phi_a0 = phi_a0_3;
            phi_s3 = phi_s3_3;
            phi_s2_2 = temp_s2_2;
            phi_s3_2 = phi_s3_3;
            phi_f20 = temp_f20_2;
            phi_a3_2 = (s16) (s32) phi_a3;
            phi_a0_2 = phi_a0_3;
            phi_f20_2 = temp_f20_2;
        } while ((s32) temp_s1 < (s32) phi_a3);
    }
    *arg3 = phi_s2_2 - 1;
    *arg1 = phi_s3_2;
    *arg2 = phi_f20 + ((f32) (phi_a3_2 - 1) * (16.0f * phi_a0_2->msgCtx.unk_12098));
}

void func_80159438(s32 arg0, u32 arg1, ? *arg2) {
    u32 sp24;
    s32 sp20;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t2;
    s32 temp_t2_2;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t8;
    u32 temp_a1;
    u32 temp_a1_2;
    u32 temp_t7;

    sp20 = arg0;
    sp24 = arg1;
    arg2->unk_0 = (s16) (u32) __ull_div((u64) arg0, (u64) arg1, 0U, 0x8CA0U);
    temp_t2 = arg2->unk_0 * 0x8CA0;
    temp_a0 = (sp20 - (temp_t2 >> 0x1F)) - (sp24 < (u32) temp_t2);
    temp_a1 = sp24 - temp_t2;
    sp24 = temp_a1;
    sp20 = temp_a0;
    arg2->unk_2 = (s16) (u32) __ull_div((u64) temp_a0, (u64) temp_a1, 0U, 0x1770U);
    temp_t0 = arg2->unk_2 * 0x1770;
    temp_t6 = (sp20 - (temp_t0 >> 0x1F)) - (sp24 < (u32) temp_t0);
    sp24 -= temp_t0;
    sp20 = temp_t6;
    arg2->unk_4 = 0x27;
    arg2->unk_6 = (s16) (u32) __ull_div((u64) sp20, (u64) sp24, 0U, 0x3E8U);
    temp_t8 = arg2->unk_6 * 0x3E8;
    temp_a0_2 = (sp20 - (temp_t8 >> 0x1F)) - (sp24 < (u32) temp_t8);
    temp_a1_2 = sp24 - temp_t8;
    sp24 = temp_a1_2;
    sp20 = temp_a0_2;
    arg2->unk_8 = (s16) (u32) __ull_div((u64) temp_a0_2, (u64) temp_a1_2, 0U, 0x64U);
    temp_t2_2 = arg2->unk_8 * 0x64;
    temp_t6_2 = (sp20 - (temp_t2_2 >> 0x1F)) - (sp24 < (u32) temp_t2_2);
    sp24 -= temp_t2_2;
    sp20 = temp_t6_2;
    arg2->unk_A = 0x22;
    arg2->unk_C = (s16) (u32) __ull_div((u64) sp20, (u64) sp24, 0U, 0xAU);
    temp_t0_2 = arg2->unk_C * 0xA;
    sp20 = (sp20 - (temp_t0_2 >> 0x1F)) - (sp24 < (u32) temp_t0_2);
    temp_t7 = sp24 - temp_t0_2;
    sp24 = temp_t7;
    arg2->unk_E = (s16) temp_t7;
    arg2->unk_0 = (s16) (arg2->unk_0 + 0x30);
    arg2->unk_2 = (s16) (arg2->unk_2 + 0x30);
    arg2->unk_6 = (s16) (arg2->unk_6 + 0x30);
    arg2->unk_8 = (s16) (arg2->unk_8 + 0x30);
    arg2->unk_C = (s16) (arg2->unk_C + 0x30);
    arg2->unk_E = (s16) (arg2->unk_E + 0x30);
}

void func_8015966C(GlobalContext *arg0, u32 **arg1, s32 arg2) {
    u16 sp13A;
    u32 *sp134;
    s16 sp130;
    s16 sp12E;
    s16 sp12C;
    s16 sp12A;
    Font *sp5C;
    s32 sp54;
    s32 sp50;
    Font *temp_a3;
    Font *temp_a3_2;
    Font *temp_a3_3;
    Font *temp_a3_4;
    s16 temp_v0_25;
    s16 temp_v0_26;
    s16 temp_v0_27;
    s16 temp_v0_28;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v1;
    s16 temp_v1_3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s3_3;
    s32 temp_t2_3;
    s32 temp_v1_2;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_7;
    u16 temp_v0_17;
    u16 temp_v0_22;
    u16 temp_v0_24;
    u16 temp_v0_29;
    u16 temp_v0_9;
    u32 *temp_t1;
    u32 *temp_t1_2;
    u32 *temp_t1_3;
    u32 *temp_t1_4;
    u32 *temp_t1_5;
    u32 *temp_t2_2;
    u32 *temp_t3;
    u32 *temp_t3_2;
    u32 *temp_t3_3;
    u32 *temp_t3_4;
    u32 *temp_t3_5;
    u32 *temp_t3_6;
    u32 *temp_t4;
    u32 *temp_t4_2;
    u32 *temp_t4_3;
    u32 *temp_t4_4;
    u32 *temp_t4_5;
    u32 *temp_t5;
    u32 *temp_t5_2;
    u32 *temp_t5_3;
    u32 *temp_t5_4;
    u32 *temp_t5_5;
    u32 *temp_t5_6;
    u32 *temp_t5_7;
    u32 *temp_t6;
    u32 *temp_t6_2;
    u32 *temp_t7;
    u32 *temp_t7_2;
    u32 *temp_t7_3;
    u32 *temp_t7_4;
    u32 *temp_t7_5;
    u32 *temp_t7_6;
    u32 *temp_t7_7;
    u32 *temp_t8;
    u32 *temp_t8_2;
    u32 *temp_t8_3;
    u32 *temp_t8_4;
    u32 *temp_t8_5;
    u32 *temp_t8_6;
    u32 *temp_t9;
    u32 *temp_t9_2;
    u32 *temp_t9_3;
    u32 *temp_t9_4;
    u32 *temp_v0_2;
    u32 *temp_v0_3;
    u32 *temp_v0_4;
    u32 *temp_v0_5;
    u8 temp_v0;
    u8 temp_v0_10;
    u8 temp_v0_13;
    u8 temp_v0_18;
    u8 temp_v0_19;
    u8 temp_v0_20;
    u8 temp_v0_21;
    u8 temp_v0_8;
    u8 temp_v1_8;
    void *temp_s1;
    void *temp_t1_6;
    void *temp_t2;
    void *temp_t3_7;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_14;
    void *temp_v0_15;
    void *temp_v0_16;
    void *temp_v0_23;
    void *phi_s0;
    s32 phi_s3;
    void *phi_at;
    s16 phi_t4;
    void *phi_at_2;
    s32 phi_v1;
    s32 phi_t0;
    s32 phi_s3_2;
    s32 phi_v0;
    s32 phi_s3_3;
    void *phi_s2;
    s32 phi_a1;

    temp_s2 = arg2 & 0xFFFF;
    temp_s1 = arg0 + 0x4908;
    sp134 = *arg1;
    arg0->msgCtx.unk_11FF4 = arg0->msgCtx.unk_11F1A + arg0->msgCtx.unk_11FF8;
    arg0->msgCtx.unk_11FF6 = arg0->msgCtx.unk_11FFA;
    sp130 = 0;
    phi_s0 = temp_s1 + 0x10000;
    if (arg0->msgCtx.unk_12090 == 0) {
        temp_s1->unk_11FF6 = (s16) temp_s1->unk_11FFA;
        phi_s0 = temp_s1 + 0x10000;
    } else {
        temp_s1->unk_11FF6 = 0x30;
    }
    if (phi_s0->unk_1F16 != 0xFE) {
        sp5C = arg0 + 0x10000;
        func_80149F74(arg0, &sp134);
    }
    temp_s1->unk_12018 = (s16) phi_s0->unk_20C8;
    temp_s1->unk_1201A = (s16) phi_s0->unk_20CA;
    temp_s1->unk_1201C = (s16) phi_s0->unk_20CC;
    sp13A = 0;
    temp_s3 = temp_s2 & 0xFFFF;
    phi_s3 = temp_s3;
    phi_s3_3 = temp_s3;
    if (temp_s2 < (s32) phi_s0->unk_1FEE) {
        sp5C = arg0 + 0x10000;
loop_7:
        temp_t2 = temp_s1 + phi_s3;
        temp_v0 = temp_t2->unk_11F24;
        phi_s3_2 = phi_s3;
        phi_s3_2 = phi_s3;
        phi_s3_2 = phi_s3;
        if ((s32) temp_v0 >= 0x21) {
            switch (temp_v0) {                      /* switch 1 */
            case 193:                               /* switch 1 */
                temp_s1->unk_11FF4 = 0x2D;
                phi_s2 = temp_s1 + 0x10000;
                if (phi_s0->unk_1F22 == 6) {
                    play_sound(0U);
                }
                temp_t1 = sp134;
                sp134 = temp_t1 + 8;
                temp_t1->unk_4 = 0;
                temp_t1->unk_0 = 0xE7000000;
                temp_t4 = sp134;
                sp134 = temp_t4 + 8;
                temp_t4->unk_0 = 0xFC119623;
                temp_t4->unk_4 = 0xFF2FFFFF;
                temp_t8 = sp134;
                sp134 = temp_t8 + 8;
                temp_t8->unk_0 = 0xFA000000;
                temp_t8->unk_4 = (s32) (phi_s0->unk_201E & 0xFF);
                temp_t4_2 = sp134;
                sp134 = temp_t4_2 + 8;
                temp_t4_2->unk_0 = 0xFD900000;
                temp_t4_2->unk_4 = (s32) (phi_s0->unk_1EF8 + 0x1000);
                temp_t9 = sp134;
                sp134 = temp_t9 + 8;
                temp_t9->unk_4 = 0x7000000;
                temp_t9->unk_0 = 0xF5900000;
                temp_t4_3 = sp134;
                sp134 = temp_t4_3 + 8;
                temp_t4_3->unk_4 = 0;
                temp_t4_3->unk_0 = 0xE6000000;
                temp_t7 = sp134;
                sp134 = temp_t7 + 8;
                temp_t7->unk_4 = 0x747F156;
                temp_t7->unk_0 = 0xF3000000;
                temp_t2_2 = sp134;
                sp134 = temp_t2_2 + 8;
                temp_t2_2->unk_4 = 0;
                temp_t2_2->unk_0 = 0xE7000000;
                temp_t5 = sp134;
                sp134 = temp_t5 + 8;
                temp_t5->unk_4 = 0;
                temp_t5->unk_0 = 0xF5800C00;
                temp_t8_2 = sp134;
                sp134 = temp_t8_2 + 8;
                temp_t8_2->unk_4 = 0x17C0BC;
                temp_t8_2->unk_0 = 0xF2000000;
                temp_v0_2 = sp134;
                sp134 = temp_v0_2 + 8;
                temp_v0_2->unk_0 = ((((phi_s0->unk_1FF4 + 0x60) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((phi_s0->unk_2012 + 0x31) * 4) & 0xFFF);
                temp_v0_2->unk_4 = (s32) ((((phi_s0->unk_1FF4 * 4) & 0xFFF) << 0xC) | (((phi_s0->unk_2012 + 1) * 4) & 0xFFF));
                temp_t7_2 = sp134;
                sp134 = temp_t7_2 + 8;
                temp_t7_2->unk_0 = 0xE1000000;
                temp_t7_2->unk_4 = 0;
                temp_t3 = sp134;
                sp134 = temp_t3 + 8;
                temp_t3->unk_0 = 0xF1000000;
                temp_t3->unk_4 = 0x4000400;
                temp_t5_2 = sp134;
                sp134 = temp_t5_2 + 8;
                temp_t5_2->unk_0 = 0xFD900000;
                temp_t5_2->unk_4 = (s32) (phi_s0->unk_1EF8 + 0x1900);
                temp_t3_2 = sp134;
                sp134 = temp_t3_2 + 8;
                temp_t3_2->unk_4 = 0x7000000;
                temp_t3_2->unk_0 = 0xF5900000;
                temp_t5_3 = sp134;
                sp134 = temp_t5_3 + 8;
                temp_t5_3->unk_4 = 0;
                temp_t5_3->unk_0 = 0xE6000000;
                temp_t8_3 = sp134;
                sp134 = temp_t8_3 + 8;
                temp_t8_3->unk_4 = 0x747F156;
                temp_t8_3->unk_0 = 0xF3000000;
                temp_t1_2 = sp134;
                sp134 = temp_t1_2 + 8;
                temp_t1_2->unk_4 = 0;
                temp_t1_2->unk_0 = 0xE7000000;
                temp_t6 = sp134;
                sp134 = temp_t6 + 8;
                temp_t6->unk_4 = 0;
                temp_t6->unk_0 = 0xF5800C00;
                temp_t9_2 = sp134;
                sp134 = temp_t9_2 + 8;
                temp_t9_2->unk_4 = 0x17C0BC;
                temp_t9_2->unk_0 = 0xF2000000;
                temp_v0_3 = sp134;
                sp134 = temp_v0_3 + 8;
                temp_v0_3->unk_0 = ((((phi_s0->unk_1FF4 + 0xC1) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((phi_s0->unk_2012 + 0x31) * 4) & 0xFFF);
                temp_v0_3->unk_4 = (s32) (((((phi_s0->unk_1FF4 + 0x60) * 4) & 0xFFF) << 0xC) | (((phi_s0->unk_2012 + 1) * 4) & 0xFFF));
                temp_t9_3 = sp134;
                sp134 = temp_t9_3 + 8;
                temp_t9_3->unk_0 = 0xE1000000;
                temp_t9_3->unk_4 = 0;
                temp_t5_4 = sp134;
                sp134 = temp_t5_4 + 8;
                temp_t5_4->unk_0 = 0xF1000000;
                temp_t5_4->unk_4 = 0x4000400;
                temp_t7_3 = sp134;
                sp134 = temp_t7_3 + 8;
                temp_t7_3->unk_4 = 0;
                temp_t7_3->unk_0 = 0xE7000000;
                temp_t3_3 = sp134;
                sp134 = temp_t3_3 + 8;
                temp_t3_3->unk_0 = 0xFA000000;
                temp_t3_3->unk_4 = (s32) ((phi_s0->unk_201E & 0xFF) | 0xFF3C0000);
                temp_t7_4 = sp134;
                sp134 = temp_t7_4 + 8;
                temp_t7_4->unk_0 = 0xFD900000;
                temp_t7_4->unk_4 = (s32) (phi_s0->unk_1EF8 + 0x1000);
                temp_t5_5 = sp134;
                sp134 = temp_t5_5 + 8;
                temp_t5_5->unk_4 = 0x7000000;
                temp_t5_5->unk_0 = 0xF5900000;
                temp_t7_5 = sp134;
                sp134 = temp_t7_5 + 8;
                temp_t7_5->unk_4 = 0;
                temp_t7_5->unk_0 = 0xE6000000;
                temp_t3_4 = sp134;
                sp134 = temp_t3_4 + 8;
                temp_t3_4->unk_4 = 0x747F156;
                temp_t3_4->unk_0 = 0xF3000000;
                temp_t6_2 = sp134;
                sp134 = temp_t6_2 + 8;
                temp_t6_2->unk_4 = 0;
                temp_t6_2->unk_0 = 0xE7000000;
                temp_t8_4 = sp134;
                sp134 = temp_t8_4 + 8;
                temp_t8_4->unk_4 = 0;
                temp_t8_4->unk_0 = 0xF5800C00;
                temp_t1_3 = sp134;
                sp134 = temp_t1_3 + 8;
                temp_t1_3->unk_4 = 0x17C0BC;
                temp_t1_3->unk_0 = 0xF2000000;
                temp_v0_4 = sp134;
                sp134 = temp_v0_4 + 8;
                temp_v0_4->unk_0 = ((((phi_s0->unk_1FF4 + 0x60) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((phi_s0->unk_2012 + 0x30) * 4) & 0xFFF);
                temp_v0_4->unk_4 = (s32) ((((phi_s0->unk_1FF4 * 4) & 0xFFF) << 0xC) | ((phi_s0->unk_2012 * 4) & 0xFFF));
                temp_t9_4 = sp134;
                sp134 = temp_t9_4 + 8;
                temp_t9_4->unk_0 = 0xE1000000;
                temp_t9_4->unk_4 = 0;
                temp_t5_6 = sp134;
                sp134 = temp_t5_6 + 8;
                temp_t5_6->unk_0 = 0xF1000000;
                temp_t5_6->unk_4 = 0x4000400;
                temp_t4_4 = sp134;
                sp134 = temp_t4_4 + 8;
                temp_t4_4->unk_0 = 0xFD900000;
                temp_t4_4->unk_4 = (s32) (phi_s0->unk_1EF8 + 0x1900);
                temp_t5_7 = sp134;
                sp134 = temp_t5_7 + 8;
                temp_t5_7->unk_4 = 0x7000000;
                temp_t5_7->unk_0 = 0xF5900000;
                temp_t4_5 = sp134;
                sp134 = temp_t4_5 + 8;
                temp_t4_5->unk_4 = 0;
                temp_t4_5->unk_0 = 0xE6000000;
                temp_t3_5 = sp134;
                sp134 = temp_t3_5 + 8;
                temp_t3_5->unk_4 = 0x747F156;
                temp_t3_5->unk_0 = 0xF3000000;
                temp_t7_6 = sp134;
                sp134 = temp_t7_6 + 8;
                temp_t7_6->unk_4 = 0;
                temp_t7_6->unk_0 = 0xE7000000;
                temp_t8_5 = sp134;
                sp134 = temp_t8_5 + 8;
                temp_t8_5->unk_4 = 0;
                temp_t8_5->unk_0 = 0xF5800C00;
                temp_t1_4 = sp134;
                sp134 = temp_t1_4 + 8;
                temp_t1_4->unk_4 = 0x17C0BC;
                temp_t1_4->unk_0 = 0xF2000000;
                temp_v0_5 = sp134;
                sp134 = temp_v0_5 + 8;
                temp_v0_5->unk_0 = ((((phi_s0->unk_1FF4 + 0xC0) * 4) & 0xFFF) << 0xC) | 0xE4000000 | (((phi_s0->unk_2012 + 0x30) * 4) & 0xFFF);
                temp_v0_5->unk_4 = (s32) (((((phi_s0->unk_1FF4 + 0x60) * 4) & 0xFFF) << 0xC) | ((phi_s0->unk_2012 * 4) & 0xFFF));
                temp_t3_6 = sp134;
                sp134 = temp_t3_6 + 8;
                temp_t3_6->unk_0 = 0xE1000000;
                temp_t3_6->unk_4 = 0;
                temp_t7_7 = sp134;
                sp134 = temp_t7_7 + 8;
                temp_t7_7->unk_0 = 0xF1000000;
                temp_t7_7->unk_4 = 0x4000400;
                temp_t8_6 = sp134;
                sp134 = temp_t8_6 + 8;
                temp_t8_6->unk_4 = 0;
                temp_t8_6->unk_0 = 0xE7000000;
                temp_t1_5 = sp134;
                sp134 = temp_t1_5 + 8;
                temp_t1_5->unk_0 = 0xFCFF97FF;
                temp_t1_5->unk_4 = 0xFF2DFEFF;
                temp_s1->unk_11FF4 = (s16) (phi_s0->unk_1FF4 + 0x20);
                goto block_210;
            case 194:                               /* switch 1 */
                temp_s1->unk_12020 = 0x10;
                phi_s2 = temp_s1 + 0x10000;
                if (phi_s0->unk_1F22 == 6) {
                    temp_s1->unk_11F06 = (u16) phi_s0->unk_1F04;
                    temp_s1->unk_12023 = 4;
                    Font_LoadMessageBoxEndIcon(&arg0->msgCtx.font, 2U);
                    if (phi_s0->unk_20D8 != 3) {
                        temp_v0_6 = phi_s0->unk_2006;
                        phi_s0->unk_1FFE = (s16) (temp_v0_6 + 0xE);
                        phi_s0->unk_2000 = (s16) (temp_v0_6 + 0x1A);
                        phi_s0->unk_2002 = (s16) (temp_v0_6 + 0x26);
                    }
                }
                goto block_210;
            case 195:                               /* switch 1 */
                temp_s1->unk_12020 = 0x11;
                phi_s2 = temp_s1 + 0x10000;
                if (phi_s0->unk_1F22 == 6) {
                    temp_s1->unk_11F06 = (u16) phi_s0->unk_1F04;
                    temp_s1->unk_12023 = 4;
                    Font_LoadMessageBoxEndIcon(&arg0->msgCtx.font, 2U);
                    if (phi_s0->unk_20D8 != 3) {
                        temp_v0_7 = phi_s0->unk_2006;
                        phi_s0->unk_1FFE = (s16) (temp_v0_7 + 0xE);
                        phi_s0->unk_2000 = (s16) (temp_v0_7 + 0x1A);
                        phi_s0->unk_2002 = (s16) (temp_v0_7 + 0x26);
                    }
                }
                goto block_210;
            case 204:                               /* switch 1 */
                temp_s1->unk_12020 = 0x60;
                phi_s2 = temp_s1 + 0x10000;
                if (phi_s0->unk_1F22 == 6) {
                    Font_LoadMessageBoxEndIcon(&arg0->msgCtx.font, 1U);
                }
                goto block_210;
            case 208:                               /* switch 1 */
                temp_s1->unk_12020 = 0x61;
                phi_s2 = temp_s1 + 0x10000;
                if (phi_s0->unk_1F22 == 6) {
                    Font_LoadMessageBoxEndIcon(&arg0->msgCtx.font, 1U);
                }
                goto block_210;
            case 209:                               /* switch 1 */
                temp_s1->unk_12020 = 0x62;
                phi_s2 = temp_s1 + 0x10000;
                if (phi_s0->unk_1F22 == 6) {
                    Font_LoadMessageBoxEndIcon(&arg0->msgCtx.font, 1U);
                }
                goto block_210;
            case 210:                               /* switch 1 */
                phi_s2 = temp_s1 + 0x10000;
                if (phi_s0->unk_1F22 == 6) {
                    temp_s1->unk_11F22 = 0x42;
                    temp_s1->unk_12020 = 0x41;
                    Font_LoadMessageBoxEndIcon(&arg0->msgCtx.font, 0U);
                    play_sound(0x482EU);
                }
                goto block_210;
            case 213:                               /* switch 1 */
                temp_s1->unk_12020 = 0x63;
                phi_s2 = temp_s1 + 0x10000;
                if (phi_s0->unk_1F22 == 6) {
                    Font_LoadMessageBoxEndIcon(&arg0->msgCtx.font, 1U);
                }
                goto block_210;
            case 224:                               /* switch 1 */
                if (phi_s0->unk_1F22 == 6) {
                    temp_s1->unk_11F22 = 0x42;
                    temp_s1->unk_12020 = 0x42;
                    Font_LoadMessageBoxEndIcon(&arg0->msgCtx.font, 1U);
                    play_sound(0x482EU);
                }
                goto block_217;
            }
        } else if ((u32) temp_v0 < 0x21U) {
            switch (*(&D_801E201C + (temp_v0 * 4))) { /* switch 2; unable to parse jump table */
            case 0:                                 /* switch 2 */
                phi_s2 = temp_s1 + 0x10000;
                if ((sp5C->charBuf[1][13088] != 0) || (temp_v0_8 = phi_s0->unk_1F0A, (temp_v0_8 == 0xD))) {
                    temp_s1->unk_10000 = 0;
                    temp_s1->unk_1201A = (s16) phi_s0->unk_201C;
                    phi_at = temp_s1 + 0x10000;
                } else if (temp_v0_8 == 5) {
                    temp_s1->unk_1201C = 0;
                    temp_s1->unk_1201A = (s16) phi_s0->unk_201C;
                    phi_at = temp_s1 + 0x10000;
                } else {
                    temp_s1->unk_1201C = 0xFF;
                    temp_s1->unk_1201A = (s16) phi_s0->unk_201C;
                    phi_at = temp_s1 + 0x10000;
                }
                phi_at->unk_2018 = phi_s0->unk_201C;
                temp_v0_9 = phi_s0->unk_1FEE;
                if (temp_v0_9 == (phi_s3 + 1)) {
                    temp_s1->unk_11FEE = (s16) (temp_v0_9 + 1);
                }
                goto block_210;
            case 1:                                 /* switch 2 */
            case 2:                                 /* switch 2 */
            case 3:                                 /* switch 2 */
            case 4:                                 /* switch 2 */
            case 5:                                 /* switch 2 */
            case 6:                                 /* switch 2 */
            case 7:                                 /* switch 2 */
            case 8:                                 /* switch 2 */
                temp_v0_10 = phi_s0->unk_1F22;
                phi_s2 = temp_s1 + 0x10000;
                if (((s32) temp_v0_10 >= 0x4A) && ((s32) temp_v0_10 < 0x50) && (temp_v0 == 2)) {
                    temp_s1->unk_11FEE = (u16) phi_s0->unk_1FF0;
                    if (phi_s0->unk_20D6 != 0) {
                        temp_s1->unk_120D4 = (s16) (phi_s0->unk_20D4 + 0x19);
                        if ((s32) phi_s0->unk_20D4 >= 0x64) {
                            temp_s1->unk_120D6 = 0;
                            goto block_29;
                        }
                    } else {
                        temp_s1->unk_120D4 = (s16) (phi_s0->unk_20D4 - 0x19);
                        if ((s32) phi_s0->unk_20D4 < -0x63) {
                            temp_s1->unk_120D6 = 1;
block_29:
                        }
                    }
                    temp_v0_11 = ((s16) (temp_v0 - 1) * 6) + &D_801D07DC;
                    temp_a0 = temp_v0_11->unk_0 + phi_s0->unk_20D4;
                    if (temp_a0 < 0) {
                        temp_s1->unk_12018 = 0;
                    } else {
                        temp_s1->unk_12018 = (s16) temp_a0;
                    }
                    temp_v1 = temp_v0_11->unk_2;
                    temp_a0_2 = temp_v1 + phi_s0->unk_20D4;
                    if (temp_a0_2 >= 0xFF) {
                        temp_s1->unk_1201A = temp_v1;
                    } else {
                        temp_s1->unk_1201A = (s16) temp_a0_2;
                    }
                    temp_v1_2 = temp_v0_11->unk_4 + phi_s0->unk_20D4;
                    if (temp_v1_2 < 0) {
                        temp_s1->unk_1201C = 0;
                    } else {
                        temp_s1->unk_1201C = (s16) temp_v1_2;
                    }
                } else if (sp5C->charBuf[1][13088] != 0) {
                    temp_v0_12 = ((s16) (temp_v0 - 1) * 6) + &D_801D089C;
                    temp_s1->unk_12018 = (s16) temp_v0_12->unk_0;
                    temp_s1->unk_1201A = (s16) temp_v0_12->unk_2;
                    temp_s1->unk_1201C = (s16) temp_v0_12->unk_4;
                } else {
                    temp_v0_13 = phi_s0->unk_1F0A;
                    if (temp_v0_13 == 1) {
                        temp_v0_14 = ((s16) (temp_v0 - 1) * 6) + &D_801D07DC;
                        temp_s1->unk_12018 = (s16) temp_v0_14->unk_0;
                        temp_s1->unk_1201A = (s16) temp_v0_14->unk_2;
                        temp_s1->unk_1201C = (s16) temp_v0_14->unk_4;
                    } else if (temp_v0_13 == 0xD) {
                        temp_v0_15 = ((s16) (temp_v0 - 1) * 6) + &D_801D086C;
                        temp_s1->unk_12018 = (s16) temp_v0_15->unk_0;
                        temp_s1->unk_1201A = (s16) temp_v0_15->unk_2;
                        temp_s1->unk_1201C = (s16) temp_v0_15->unk_4;
                    } else {
                        temp_v0_16 = ((s16) (temp_v0 - 1) * 6) + &D_801D080C;
                        temp_s1->unk_12018 = (s16) temp_v0_16->unk_0;
                        temp_s1->unk_1201A = (s16) temp_v0_16->unk_2;
                        temp_s1->unk_1201C = (s16) temp_v0_16->unk_4;
                    }
                }
                temp_v0_17 = phi_s0->unk_1FEE;
                if (temp_v0_17 == (phi_s3 + 1)) {
                    temp_s1->unk_11FEE = (s16) (temp_v0_17 + 1);
                }
                goto block_210;
            case 32:                                /* switch 2 */
                temp_s1->unk_11FF4 = (s16) (phi_s0->unk_1FF4 + 6);
                phi_v0 = (s32) temp_s1->unk_11FEE;
                goto block_211;
            case 17:                                /* switch 2 */
                temp_s1->unk_11FF6 = (s16) (phi_s0->unk_1FF6 + phi_s0->unk_1FFC);
                /* fallthrough */
            case 19:                                /* switch 2 */
                temp_v1_3 = sp130 + 1;
                temp_s1->unk_11FF4 = (s16) ((temp_s1 + (temp_v1_3 * 2))->unk_11F1A + phi_s0->unk_1FF8);
                temp_v0_18 = phi_s0->unk_2022;
                sp130 = temp_v1_3;
                phi_s2 = temp_s1 + 0x10000;
                if (temp_v0_18 == 1) {
                    if (sp5C->charBuf[1][13088] == 0) {
                        temp_s1->unk_11FF4 = (s16) (phi_s0->unk_1FF4 + 0x10);
                    } else {
                        temp_s1->unk_11FF4 = (s16) (phi_s0->unk_1FF4 + 0x32);
                    }
                } else if (temp_v0_18 == 2) {
                    if (phi_s0->unk_20D8 != 3) {
                        if (sp5C->charBuf[1][13088] == 0) {
                            phi_t4 = phi_s0->unk_1FF4 + 0xA;
                            phi_at_2 = temp_s1 + 0x10000;
                            goto block_64;
                        }
                        temp_s1->unk_11FF4 = (s16) (phi_s0->unk_1FF4 + 0x39);
                    } else if ((s32) sp130 >= 2) {
                        if (sp5C->charBuf[1][13088] == 0) {
                            temp_s1->unk_11FF4 = (s16) (phi_s0->unk_1FF4 + 0xA);
                        } else {
                            phi_t4 = phi_s0->unk_1FF4 + 0x39;
                            phi_at_2 = temp_s1 + 0x10000;
block_64:
                            phi_at_2->unk_1FF4 = phi_t4;
                        }
                    }
                }
                goto block_210;
            case 16:                                /* switch 2 */
            case 18:                                /* switch 2 */
                if (phi_s0->unk_1F22 == 6) {
                    if (phi_s0->unk_2094 == 0) {
                        sp5C = &arg0->msgCtx.font;
                        play_sound(0U);
                        temp_s1->unk_11F22 = 0x41;
                        Font_LoadMessageBoxEndIcon(sp5C, 0U);
                    } else {
                        temp_s1->unk_11F22 = 4;
                        temp_s1->unk_11FF2 = 0;
                        temp_s1->unk_11FEC = (s16) (phi_s0->unk_1FEC + 1);
                    }
                    temp_s1->unk_120CE = (s16) phi_s0->unk_2018;
                    temp_s1->unk_120D0 = (s16) phi_s0->unk_201A;
                    temp_s1->unk_120D2 = (s16) phi_s0->unk_201C;
                }
                *arg1 = sp134;
                return;
            case 23:                                /* switch 2 */
                phi_s2 = temp_s1 + 0x10000;
                if ((phi_s0->unk_1FEE == (phi_s3 + 1)) && ((temp_v0_19 = phi_s0->unk_1F22, phi_v1 = phi_s3 & 0xFFFF, (temp_v0_19 == 6)) || (((s32) temp_v0_19 >= 0xA) && ((s32) temp_v0_19 < 0x27)))) {
loop_76:
                    temp_v0_20 = (temp_s1 + phi_v1)->unk_11F24;
                    if ((temp_v0_20 != 0x18) && (temp_v0_20 != 0x1A) && (temp_v0_20 != 0x19) && (temp_v0_20 != 0xE0) && (temp_v0_20 != 0x10) && (temp_v0_20 != 0x12)) {
                        phi_v1 = (phi_v1 + 1) & 0xFFFF;
                        goto loop_76;
                    }
                    temp_t2_3 = phi_v1 - 1;
                    temp_s1->unk_11FEE = (s16) (temp_t2_3 + 1);
                    phi_s3_2 = temp_t2_3 & 0xFFFF;
                }
                goto block_210;
            case 24:                                /* switch 2 */
                phi_v0 = (s32) temp_s1->unk_11FEE;
                goto block_211;
            case 27:                                /* switch 2 */
                temp_v1_4 = phi_s3 + 1;
                if (phi_s0->unk_1F22 == 6) {
                    temp_s1->unk_12023 = (s8) (((temp_s1 + (temp_v1_4 & 0xFFFF))->unk_11F24 << 8) | (temp_s1 + ((temp_v1_4 + 1) & 0xFFFF))->unk_11F24);
                    temp_s1->unk_11F22 = 8;
                }
                *arg1 = sp134;
                return;
            case 28:                                /* switch 2 */
                if (phi_s0->unk_1F22 == 6) {
                    temp_s1->unk_11F22 = 0x42;
                    temp_v1_5 = phi_s3 + 1;
                    if (phi_s0->unk_1F0C == 3) {
                        temp_s1->unk_12020 = 0x55;
                    } else {
                        temp_s1->unk_12020 = 0x50;
                    }
                    temp_s1->unk_12023 = (s8) (((temp_s1 + (temp_v1_5 & 0xFFFF))->unk_11F24 << 8) | (temp_s1 + ((temp_v1_5 + 1) & 0xFFFF))->unk_11F24);
                    Font_LoadMessageBoxEndIcon(&arg0->msgCtx.font, 1U);
                    if (arg0->csCtx.state == 0) {
                        func_8011552C(arg0, 3);
                    }
                }
                *arg1 = sp134;
                return;
            case 29:                                /* switch 2 */
                if (phi_s0->unk_1F22 == 6) {
                    temp_v1_6 = phi_s3 + 1;
                    temp_s1->unk_11F22 = 0x42;
                    temp_s1->unk_12020 = 0x52;
                    temp_s1->unk_12023 = (s8) (((temp_s1 + (temp_v1_6 & 0xFFFF))->unk_11F24 << 8) | (temp_s1 + ((temp_v1_6 + 1) & 0xFFFF))->unk_11F24);
                    Font_LoadMessageBoxEndIcon(&arg0->msgCtx.font, 1U);
                    if (arg0->csCtx.state == 0) {
                        func_8011552C(arg0, 3);
                    }
                }
                *arg1 = sp134;
                return;
            case 30:                                /* switch 2 */
                temp_v1_7 = phi_s3 + 1;
                phi_s2 = temp_s1 + 0x10000;
                phi_a1 = phi_s3;
                if (phi_s0->unk_1FEE == temp_v1_7) {
                    temp_t3_7 = temp_s1 + phi_s3;
                    if (phi_s0->unk_1F22 == 6) {
                        sp50 = phi_s3;
                        sp54 = temp_v1_7;
                        play_sound(((temp_t3_7->unk_11F25 << 8) | temp_t3_7->unk_11F26) & 0xFFFF);
                        phi_a1 = sp50;
                    }
                }
                if (phi_s0->unk_1FEE == (phi_s3 + 1)) {
                    temp_s1->unk_11FEE = (s16) (phi_s0->unk_1FEE + 2);
                }
                phi_s3_2 = (phi_a1 + 2) & 0xFFFF;
                goto block_210;
            case 31:                                /* switch 2 */
                phi_s2 = temp_s1 + 0x10000;
                if ((phi_s0->unk_1FEE == (phi_s3 + 1)) && (phi_s0->unk_1F22 == 6)) {
                    temp_t1_6 = temp_s1 + phi_s3;
                    temp_s1->unk_11F22 = 9;
                    temp_s1->unk_12024 = (s16) ((temp_t1_6->unk_11F25 << 8) | temp_t1_6->unk_11F26);
                }
                phi_s3_2 = (phi_s3 + 2) & 0xFFFF;
                goto block_210;
            case 10:                                /* switch 2 */
                temp_s3_2 = (phi_s3 + 1) & 0xFFFF;
                temp_v0_21 = (temp_s1 + temp_s3_2)->unk_11F24;
                phi_s3_2 = temp_s3_2;
                phi_s2 = temp_s1 + 0x10000;
                switch (temp_v0_21) {               /* switch 3 */
                    temp_s1->unk_12026 = (s16) temp_v0_21;
                    temp_v0_22 = phi_s0->unk_1FEE;
                    if (temp_v0_22 == (temp_s3_2 + 1)) {
                        temp_s1->unk_11FEE = (s16) (temp_v0_22 + 1);
                    }
                    break;
                }
                goto block_210;
            case 21:                                /* switch 2 */
            case 191:                               /* switch 1 */
                if (phi_s0->unk_1F22 == 6) {
                    if (phi_s0->unk_1F0A == 3) {
                        func_8014AAD0(arg0);
                        goto block_217;
                    }
                    temp_s1->unk_11F22 = 0x42;
                    temp_a3 = &arg0->msgCtx.font;
                    if (phi_s0->unk_2020 == 0) {
                        sp5C = temp_a3;
                        sp54 = (s32) temp_v0;
                        play_sound(0x482EU);
                        if (temp_v0 == 0xBF) {
                            Font_LoadMessageBoxEndIcon(temp_a3, 1U);
                        } else {
                            Font_LoadMessageBoxEndIcon(temp_a3, 0U);
                        }
                        if (arg0->csCtx.state == 0) {
                            func_8011552C(arg0, 3);
                        }
                    } else {
                        play_sound(0U);
                    }
                    goto block_151;
                }
block_151:
                *arg1 = sp134;
                return;
            case 26:                                /* switch 2 */
                if (phi_s0->unk_1F22 == 6) {
                    play_sound(0U);
                    temp_s1->unk_11F22 = 0x42;
                    temp_s1->unk_12020 = 0x30;
                }
                *arg1 = sp134;
                return;
            case 25:                                /* switch 2 */
                if (phi_s0->unk_1F22 == 6) {
                    temp_s1->unk_11F22 = 0x42;
                    temp_s1->unk_12020 = 0x40;
                    Font_LoadMessageBoxEndIcon(&arg0->msgCtx.font, 0U);
                    play_sound(0x482EU);
                }
                *arg1 = sp134;
                return;
            }
        } else {
        case 9:                                     /* switch 2 */
        case 11:                                    /* switch 2 */
        case 12:                                    /* switch 2 */
        case 13:                                    /* switch 2 */
        case 14:                                    /* switch 2 */
        case 15:                                    /* switch 2 */
        case 20:                                    /* switch 2 */
        case 22:                                    /* switch 2 */
        default:                                    /* switch 1 */
            phi_s2 = temp_s1 + 0x10000;
            if (temp_v0 != 0x8145) {
                if ((temp_v0 != 0x8148) && (temp_v0 != 0x8149)) {
                    if ((temp_v0 != 0x8169) && (temp_v0 != 0x8175)) {

                    } else {
                        temp_s1->unk_11FF4 = (s16) (phi_s0->unk_1FF4 - (s32) (6.0f * phi_s0->unk_2098));
                    }
                } else {
                    temp_s1->unk_11FF4 = (s16) (phi_s0->unk_1FF4 - (s32) (2.0f * phi_s0->unk_2098));
                }
            } else {
                temp_s1->unk_11FF4 = (s16) (phi_s0->unk_1FF4 - (s32) (3.0f * phi_s0->unk_2098));
            }
            if ((phi_s0->unk_1F22 == 6) && (phi_s0->unk_1FEE == (phi_s3 + 1))) {
                sp54 = (s32) temp_v0;
                play_sound(0U);
            }
            phi_t0 = (s32) temp_t2->unk_11F24;
            if (((s32) temp_t2->unk_11F24 >= 0xB0) && ((s32) temp_t2->unk_11F24 < 0xBC)) {
                temp_v0_23 = (s32) temp_t2->unk_11F24 + &D_801D08CC;
                sp12E = phi_s0->unk_2018;
                sp12C = phi_s0->unk_201A;
                temp_a3_2 = &arg0->msgCtx.font;
                sp12A = phi_s0->unk_201C;
                temp_s1->unk_12018 = (s16) *(&D_801D083C + (temp_v0_23->unk_-B0 * 6));
                temp_s1->unk_1201A = (s16) (&D_801D083C + (temp_v0_23->unk_-B0 * 6))->unk_2;
                temp_s1->unk_1201C = (s16) (&D_801D083C + (temp_v0_23->unk_-B0 * 6))->unk_4;
                sp54 = (s32) temp_t2->unk_11F24;
                func_8014995C(arg0, temp_a3_2 + (temp_a3_2->unk_11D88 * 0x3C00) + sp13A, &sp134, temp_a3_2);
                temp_s1->unk_12018 = sp12E;
                temp_s1->unk_1201A = sp12C;
                temp_s1->unk_1201C = sp12A;
                phi_t0 = (s32) temp_t2->unk_11F24;
            } else {
                temp_a3_3 = &arg0->msgCtx.font;
                if ((s32) phi_s0->unk_1F22 >= 0x4D) {
                    temp_v0_24 = phi_s0->unk_1FF0;
                    if ((phi_s3 < (temp_v0_24 - 6)) || (phi_s3 >= (temp_v0_24 - 4))) {
                        temp_a3_4 = &arg0->msgCtx.font;
                        sp54 = (s32) temp_t2->unk_11F24;
                        func_8014995C(arg0, temp_a3_4 + (temp_a3_4->unk_11D88 * 0x3C00) + sp13A, &sp134, temp_a3_4);
                        goto block_181;
                    }
                } else {
                    sp54 = (s32) temp_t2->unk_11F24;
                    func_8014995C(arg0, temp_a3_3 + (temp_a3_3->unk_11D88 * 0x3C00) + sp13A, &sp134, temp_a3_3);
block_181:
                    phi_t0 = sp54;
                }
            }
            sp13A += 0x80;
            if ((phi_t0 != 0x8141) && (phi_t0 != 0x8142)) {
                if (phi_t0 != 0x8144) {
                    if (phi_t0 != 0x8145) {
                        if (phi_t0 != 0x8168) {
                            if ((phi_t0 != 0x816A) && (phi_t0 != 0x8176)) {
                                if (phi_t0 != 0x8194) {
                                    temp_v1_8 = phi_s0->unk_2020;
                                    if (((temp_v1_8 == 0x62) && (temp_v0_25 = phi_s0->unk_20C0, ((phi_s3 < (s32) temp_v0_25) == 0)) && ((temp_v0_25 + 4) >= phi_s3)) || ((temp_v1_8 == 0x63) && (temp_v0_26 = phi_s0->unk_20C0, ((phi_s3 < (s32) temp_v0_26) == 0)) && ((temp_v0_26 + 2) >= phi_s3)) || ((temp_v1_8 == 0x60) && (temp_v0_27 = phi_s0->unk_20C0, ((phi_s3 < (s32) temp_v0_27) == 0)) && ((temp_v0_27 + 2) >= phi_s3)) || ((temp_v1_8 == 0x61) && (temp_v0_28 = phi_s0->unk_20C0, ((phi_s3 < (s32) temp_v0_28) == 0)) && ((temp_v0_28 + 1) >= phi_s3))) {
                                        temp_s1->unk_11FF4 = (s16) (phi_s0->unk_1FF4 + (s32) (16.0f * phi_s0->unk_2098));
                                    } else {
                                        temp_s1->unk_11FF4 = (s16) (phi_s0->unk_1FF4 + (s32) (*(&D_801D03F0 + (phi_t0 * 4)) * phi_s0->unk_2098));
                                    }
                                } else {
                                    temp_s1->unk_11FF4 = (s16) (phi_s0->unk_1FF4 + (s32) (14.0f * phi_s0->unk_2098));
                                }
                            } else {
                                temp_s1->unk_11FF4 = (s16) (phi_s0->unk_1FF4 + (s32) (10.0f * phi_s0->unk_2098));
                            }
                        } else {
                            goto block_193;
                        }
                    } else {
                        temp_s1->unk_11FF4 = (s16) (phi_s0->unk_1FF4 + (s32) (15.0f * phi_s0->unk_2098));
                    }
                } else {
                    temp_s1->unk_11FF4 = (s16) (phi_s0->unk_1FF4 + (s32) (8.0f * phi_s0->unk_2098));
                }
            } else {
block_193:
                temp_s1->unk_11FF4 = (s16) (phi_s0->unk_1FF4 + (s32) (12.0f * phi_s0->unk_2098));
            }
block_210:
            phi_v0 = (s32) phi_s2->unk_1FEE;
block_211:
            temp_s3_3 = (phi_s3_2 + 1) & 0xFFFF;
            phi_s3 = temp_s3_3;
            phi_s3_3 = temp_s3_3;
            if (temp_s3_3 >= phi_v0) {
                goto block_212;
            }
            goto loop_7;
        }
    } else {
block_212:
        temp_v0_29 = phi_s0->unk_2024;
        if (temp_v0_29 == 0) {
            temp_s1->unk_11FEE = (s16) (phi_s3_3 + 1);
            temp_s1->unk_12024 = 0;
            if (phi_s0->unk_1F22 == 9) {
                temp_s1->unk_11F22 = 6;
            }
        } else {
            temp_s1->unk_12024 = (s16) (temp_v0_29 - 1);
        }
block_217:
        *arg1 = sp134;
    }
}

void func_8015B198(GlobalContext *arg0) {
    void *spE0;
    void *spDC;
    s16 spDA;
    s16 spD0;
    s16 spCE;
    s16 spCC;
    s16 spCA;
    s16 spC8;
    s16 spC6;
    s32 spBC;
    ? spA8;
    f32 spA4;
    u32 sp94;
    s32 sp90;
    s32 sp78;
    void *sp70;
    GameInfo *temp_v0_18;
    GameInfo *temp_v0_19;
    GameInfo *temp_v0_20;
    f32 temp_f0;
    s16 *temp_s0_10;
    s16 *temp_s0_12;
    s16 *temp_s0_14;
    s16 *temp_s0_15;
    s16 *temp_s0_2;
    s16 *temp_s0_3;
    s16 *temp_s0_4;
    s16 *temp_s0_5;
    s16 *temp_s0_6;
    s16 *temp_s0_7;
    s16 *temp_s0_9;
    s16 *temp_s5;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_a1_3;
    s16 temp_a1_4;
    s16 temp_a1_5;
    s16 temp_a1_6;
    s16 temp_a1_7;
    s16 temp_a1_8;
    s16 temp_a3;
    s16 temp_a3_10;
    s16 temp_a3_11;
    s16 temp_a3_12;
    s16 temp_a3_13;
    s16 temp_a3_14;
    s16 temp_a3_15;
    s16 temp_a3_16;
    s16 temp_a3_17;
    s16 temp_a3_18;
    s16 temp_a3_19;
    s16 temp_a3_20;
    s16 temp_a3_22;
    s16 temp_a3_23;
    s16 temp_a3_24;
    s16 temp_a3_26;
    s16 temp_a3_27;
    s16 temp_a3_28;
    s16 temp_a3_29;
    s16 temp_a3_2;
    s16 temp_a3_30;
    s16 temp_a3_31;
    s16 temp_a3_32;
    s16 temp_a3_33;
    s16 temp_a3_34;
    s16 temp_a3_3;
    s16 temp_a3_4;
    s16 temp_a3_5;
    s16 temp_a3_6;
    s16 temp_a3_7;
    s16 temp_a3_8;
    s16 temp_a3_9;
    s16 temp_s0;
    s16 temp_s0_11;
    s16 temp_s0_8;
    s16 temp_s1;
    s16 temp_s1_10;
    s16 temp_s1_11;
    s16 temp_s1_12;
    s16 temp_s1_13;
    s16 temp_s1_14;
    s16 temp_s1_15;
    s16 temp_s1_16;
    s16 temp_s1_17;
    s16 temp_s1_18;
    s16 temp_s1_19;
    s16 temp_s1_20;
    s16 temp_s1_21;
    s16 temp_s1_22;
    s16 temp_s1_23;
    s16 temp_s1_24;
    s16 temp_s1_25;
    s16 temp_s1_26;
    s16 temp_s1_27;
    s16 temp_s1_28;
    s16 temp_s1_29;
    s16 temp_s1_2;
    s16 temp_s1_30;
    s16 temp_s1_3;
    s16 temp_s1_4;
    s16 temp_s1_5;
    s16 temp_s1_6;
    s16 temp_s1_7;
    s16 temp_s1_8;
    s16 temp_s1_9;
    s16 temp_t0;
    s16 temp_t2;
    s16 temp_t2_2;
    s16 temp_t2_3;
    s16 temp_t2_4;
    s16 temp_t3;
    s16 temp_t3_2;
    s16 temp_t3_3;
    s16 temp_t3_4;
    s16 temp_t3_5;
    s16 temp_t4;
    s16 temp_t4_2;
    s16 temp_t4_3;
    s16 temp_t4_5;
    s16 temp_t4_6;
    s16 temp_t5;
    s16 temp_t5_2;
    s16 temp_t5_3;
    s16 temp_t5_4;
    s16 temp_t5_5;
    s16 temp_t6;
    s16 temp_t6_2;
    s16 temp_t6_3;
    s16 temp_t6_4;
    s16 temp_t6_5;
    s16 temp_t6_6;
    s16 temp_t6_7;
    s16 temp_t7_10;
    s16 temp_t7_11;
    s16 temp_t7_2;
    s16 temp_t7_3;
    s16 temp_t7_4;
    s16 temp_t7_5;
    s16 temp_t7_6;
    s16 temp_t7_7;
    s16 temp_t7_8;
    s16 temp_t7_9;
    s16 temp_t8;
    s16 temp_t8_2;
    s16 temp_t8_3;
    s16 temp_t9;
    s16 temp_t9_3;
    s16 temp_v0;
    s16 temp_v0_10;
    s16 temp_v0_12;
    s16 temp_v0_13;
    s16 temp_v0_21;
    s16 temp_v0_22;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v0_9;
    s16 temp_v1_4;
    s32 temp_a0;
    s32 temp_a0_5;
    s32 temp_a1_2;
    s32 temp_f10;
    s32 temp_f8;
    s32 temp_hi;
    s32 temp_t7;
    s32 temp_t9_2;
    s32 temp_v1;
    s8 temp_a0_2;
    u16 temp_t4_4;
    u16 temp_v0_2;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u32 temp_a1;
    u32 temp_a1_9;
    u32 temp_a3_21;
    u32 temp_a3_25;
    u32 temp_v0_15;
    u32 temp_v0_3;
    u8 *temp_v0_4;
    u8 temp_s2;
    u8 temp_s2_2;
    u8 temp_s2_3;
    u8 temp_v0_11;
    u8 temp_v0_16;
    u8 temp_v0_17;
    u8 temp_v0_23;
    u8 temp_v0_5;
    void *temp_s0_13;
    void *temp_s3;
    void *temp_s6;
    void *temp_t0_2;
    void *temp_t3_6;
    void *temp_t6_8;
    void *temp_t8_4;
    void *temp_v0_14;
    void *temp_v1_5;
    s16 phi_s0;
    s32 phi_s0_2;
    s16 phi_s1;
    u8 phi_v1;
    u8 phi_s2;
    s16 phi_a3;
    s16 phi_s1_2;
    s32 phi_s2_2;
    s16 phi_a3_2;
    s16 phi_s1_3;
    s16 phi_a3_3;
    s32 phi_a3_4;
    s32 phi_a3_5;
    s32 phi_a3_6;
    s32 phi_a3_7;
    s16 phi_s1_4;
    s16 phi_a3_8;
    s16 phi_a3_9;
    s32 phi_s2_3;
    s16 phi_s1_5;
    s16 phi_s1_6;
    s32 phi_s2_4;
    s16 phi_a3_10;
    s16 phi_a3_11;
    s32 phi_a3_12;
    s32 phi_a3_13;
    s16 phi_s1_7;
    s32 phi_s2_5;
    s16 phi_s1_8;
    s32 phi_s2_6;
    s16 phi_s1_9;
    s32 phi_s2_7;
    s16 phi_a3_14;
    s16 phi_s1_10;
    s16 phi_a3_15;
    s32 phi_a3_16;
    s32 phi_a3_17;
    s32 phi_a3_18;
    s32 phi_a3_19;
    s16 phi_s1_11;
    s16 phi_a3_20;
    s16 phi_a3_21;
    s32 phi_s2_8;
    s16 phi_s1_12;
    s16 phi_s1_13;
    s8 phi_s2_9;
    s16 phi_s1_14;
    s16 phi_s1_15;
    s16 phi_s1_16;
    s16 phi_s1_17;
    s16 phi_a3_22;
    s16 phi_a3_23;
    s32 phi_s2_10;
    s16 phi_a3_24;
    s32 phi_a3_25;
    s32 phi_a3_26;
    s32 phi_a3_27;
    s32 phi_a3_28;
    s16 phi_s1_18;
    s16 phi_a3_29;
    s16 phi_a3_30;
    s32 phi_s2_11;
    u8 *phi_v0;
    s16 phi_a3_31;
    s32 phi_a3_32;
    s32 phi_a3_33;
    s32 phi_a3_34;
    s32 phi_a3_35;
    s16 phi_s1_19;
    s32 phi_s2_12;
    s16 phi_s1_20;
    s16 phi_s0_3;
    s16 phi_s1_21;
    s32 phi_s2_13;
    s16 phi_a3_36;
    s32 phi_a3_37;
    s32 phi_a3_38;
    s32 phi_a3_39;
    s32 phi_a3_40;
    s16 phi_s1_22;
    s16 phi_a3_41;
    s16 phi_a3_42;
    s32 phi_s2_14;
    s16 phi_a3_43;
    s32 phi_a3_44;
    s32 phi_a3_45;
    s32 phi_a3_46;
    s32 phi_a3_47;
    s16 phi_s1_23;
    s16 phi_a3_48;
    s16 phi_a3_49;
    s32 phi_s2_15;
    s16 phi_s1_24;
    u16 phi_v1_2;
    s16 phi_s0_4;
    s32 phi_s0_5;
    s16 phi_s1_25;
    s16 phi_v1_3;
    s16 phi_a3_50;
    s32 phi_a3_51;
    s32 phi_a3_52;
    s16 phi_s1_26;
    s16 phi_s1_27;
    s32 phi_s2_16;
    f32 phi_f20;
    s32 phi_v0_2;
    s16 phi_a0;
    s16 phi_a3_53;
    s32 phi_a3_54;
    s32 phi_a3_55;
    s32 phi_a3_56;
    s32 phi_a3_57;
    s16 phi_s1_28;
    s16 phi_a3_58;
    s16 phi_a3_59;
    s32 phi_s2_17;
    s16 phi_s1_29;
    s16 phi_s1_30;
    s32 phi_s2_18;
    s16 phi_t1;
    void *phi_at;
    u8 phi_s2_19;
    u8 phi_v1_4;
    f32 phi_f20_2;
    s16 phi_a0_2;
    s32 phi_a0_3;

    temp_s3 = arg0 + 0x4A70;
    spE0 = temp_s3;
    spDA = 0;
    spC6 = 0;
    spBC = 0;
    spD0 = 0;
    spDC = arg0->actorCtx.actorList[2].first;
    arg0->msgCtx.unk_12024 = 0;
    arg0->msgCtx.unk_12026 = arg0->msgCtx.unk_12024;
    arg0->msgCtx.unk_1209C = 0;
    spA4 = 0.0f;
    arg0->msgCtx.font.unk_11D88 = (arg0->msgCtx.font.unk_11D88 ^ 1) & 1;
    func_8014CFDC(arg0);
    temp_s6 = arg0 + 0x4908;
    sp70 = temp_s6 + 0x10000;
    temp_s5 = &spC8;
loop_1:
    temp_s2 = (temp_s3 + sp70->unk_1FEC)->unk_11880;
    (temp_s6 + spDA)->unk_11F24 = temp_s2;
    if (temp_s2 != 0x10) {
        temp_a3 = spCE;
        phi_a3 = temp_a3;
        phi_a3_14 = temp_a3;
        phi_a3_22 = temp_a3;
        if (temp_s2 != 0x12) {
            spCE = temp_a3;
            if (temp_s2 != 0x1B) {
                spCE = temp_a3;
                if (temp_s2 != 0x1C) {
                    spCE = temp_a3;
                    if (temp_s2 != 0x1D) {
                        spCE = temp_a3;
                        if (temp_s2 != 0x19) {
                            spCE = temp_a3;
                            if (temp_s2 != 0xE0) {
                                spCE = temp_a3;
                                if (temp_s2 != 0xBF) {
                                    spCE = temp_a3;
                                    if (temp_s2 != 0x15) {
                                        if (temp_s2 == 0x1A) {
                                            spCE = temp_a3;
                                        } else {
                                            phi_s0 = 8;
                                            phi_s0_4 = 8;
                                            if (temp_s2 == 0x16) {
                                                phi_s1 = 0;
loop_52:
                                                phi_s0_2 = (s32) phi_s0;
                                                if (*(&gSaveContext + 0x2B + phi_s0) == 0x3E) {
                                                    temp_s0 = phi_s0 - 1;
                                                    phi_s0 = temp_s0;
                                                    phi_s0_2 = (s32) temp_s0;
                                                    if ((s32) temp_s0 > 0) {
                                                        goto loop_52;
                                                    }
                                                }
                                                if (phi_s0_2 > 0) {
                                                    spCE = temp_a3;
                                                    do {
                                                        temp_s2_2 = (u8) gSaveContext.playerName[phi_s1];
                                                        phi_v1 = temp_s2_2;
                                                        phi_s2 = temp_s2_2;
                                                        if (temp_s2_2 == 0x3E) {
                                                            phi_v1 = 0x20U;
                                                            phi_s2 = 0x20U;
                                                        } else if (temp_s2_2 == 0x40) {
                                                            phi_v1 = 0x2EU;
                                                            phi_s2 = 0x2EU;
                                                        } else if (temp_s2_2 == 0x3F) {
                                                            phi_v1 = 0x2DU;
                                                            phi_s2 = 0x2DU;
                                                        } else {
                                                            if ((s32) temp_s2_2 < 0xA) {
                                                                phi_s2_19 = (temp_s2_2 + 0x30) & 0xFF;
                                                                goto block_68;
                                                            }
                                                            if ((s32) temp_s2_2 < 0x24) {
                                                                phi_s2_19 = (temp_s2_2 + 0x37) & 0xFF;
                                                                goto block_68;
                                                            }
                                                            if ((s32) temp_s2_2 < 0x3E) {
                                                                phi_s2_19 = (temp_s2_2 + 0x3D) & 0xFF;
block_68:
                                                                phi_v1 = phi_s2_19;
                                                                phi_s2 = phi_s2_19;
                                                            }
                                                        }
                                                        spCE = spCE;
                                                        if (phi_v1 != 0x20) {
                                                            Font_LoadCharNES(arg0, phi_s2 & 0xFF, spBC);
                                                            spBC += 0x80;
                                                        }
                                                        temp_s1 = phi_s1 + 1;
                                                        (temp_s6 + spDA)->unk_11F24 = phi_s2;
                                                        spDA += 1;
                                                        phi_s1 = temp_s1;
                                                    } while ((s32) temp_s1 < phi_s0_2);
                                                    phi_a3 = spCE;
                                                }
                                                spCE = phi_a3;
                                                spDA += -1;
                                            } else if (temp_s2 == 0xC1) {
                                                spCE = temp_a3;
                                                spC6 = 2;
                                                spD0 = 2;
                                                DmaMgr_SendRequest0(sp70->unk_1EF8 + 0x1000, (u32) _message_texture_staticSegmentRomStart, 0x900U);
                                                DmaMgr_SendRequest0(sp70->unk_1EF8 + 0x1900, (u32) (_message_texture_staticSegmentRomStart + 0x900), 0x900U);
                                                temp_s6->unk_12012 = (s16) (sp70->unk_206A + 8);
                                                temp_s6->unk_11F18 = 1;
                                                temp_s6->unk_12010 = (s16) gGameInfo->data[1391];
                                            } else if (temp_s2 == 0xC2) {
                                                spCE = temp_a3;
                                                temp_s6->unk_11F18 = 0;
                                                temp_s6->unk_12022 = 2;
                                            } else if (temp_s2 == 0xC3) {
                                                spCE = temp_a3;
                                                temp_s6->unk_11F18 = 0;
                                                temp_s6->unk_12022 = 3;
                                                temp_s6->unk_11FF8 = (s16) (sp70->unk_1FF8 + 0x16);
                                            } else if (temp_s2 == 0xC4) {
                                                temp_a0 = (&gSaveContext.pictoPhoto[1244])[temp_s2];
                                                temp_a1 = *(&gSaveContext + 0x37C4 + (temp_s2 * 8));
                                                spCE = temp_a3;
                                                sp90 = temp_a0;
                                                sp94 = temp_a1;
                                                func_80159438(temp_a0, temp_a1, &spA8, temp_a3);
                                                phi_s1_2 = 0;
                                                phi_s2_2 = 0;
                                                do {
                                                    if ((phi_s1_2 == 1) || ((sp + (phi_s1_2 * 2))->unk_AE != 0x30)) {
                                                        phi_s2_2 = 1;
                                                    }
                                                    if (phi_s2_2 != 0) {
                                                        func_80158988(arg0, (sp + (phi_s1_2 * 2))->unk_AF, &spBC, &spA4, (s16) (s32) spDA);
                                                        spDA += 1;
                                                    }
                                                    temp_s1_2 = phi_s1_2 + 1;
                                                    phi_s1_2 = temp_s1_2;
                                                } while ((s32) temp_s1_2 < 5);
                                                spDA += -1;
                                            } else {
                                                spCE = temp_a3;
                                                if ((temp_s2 != 0xC5) && (spCE = temp_a3, (temp_s2 != 0xC6)) && (spCE = temp_a3, (temp_s2 != 0xC7)) && (spCE = temp_a3, (temp_s2 != 0xC8))) {
                                                    if (temp_s2 == 0xC9) {
                                                        spCE = temp_a3;
                                                        goto block_95;
                                                    }
                                                    if (temp_s2 == 0xCA) {
                                                        spC8 = 0;
                                                        temp_f0 = (f32) gSaveContext.time * 0.021972656f;
                                                        temp_f8 = (s32) (temp_f0 / 60.0f);
                                                        spCA = (s16) temp_f8;
                                                        phi_s1_3 = 0;
                                                        if ((s32) (s16) temp_f8 >= 0xA) {
                                                            do {
                                                                temp_t9 = spCA - 0xA;
                                                                spC8 += 1;
                                                                spCA = temp_t9;
                                                            } while ((s32) temp_t9 >= 0xA);
                                                        }
                                                        spCC = 0;
                                                        temp_hi = (s32) temp_f0 % 0x3C;
                                                        spCE = (s16) temp_hi;
                                                        phi_a3_2 = (s16) temp_hi;
                                                        if ((s32) (s16) temp_hi >= 0xA) {
                                                            do {
                                                                temp_a3_2 = phi_a3_2 - 0xA;
                                                                spCC += 1;
                                                                phi_a3_2 = temp_a3_2;
                                                            } while ((s32) temp_a3_2 >= 0xA);
                                                            spCE = temp_a3_2;
                                                        }
                                                        do {
                                                            temp_s0_2 = &temp_s5[phi_s1_3];
                                                            Font_LoadCharNES(arg0, (*temp_s0_2 + 0x30) & 0xFF, spBC);
                                                            spBC += 0x80;
                                                            (temp_s6 + spDA)->unk_11F24 = (s8) (*temp_s0_2 + 0x30);
                                                            spDA += 1;
                                                            if (phi_s1_3 == 1) {
                                                                Font_LoadCharNES(arg0, 0x22U, spBC);
                                                                spBC += 0x80;
                                                                (temp_s6 + spDA)->unk_11F24 = 0x22;
                                                                spDA += 1;
                                                            } else if (phi_s1_3 == 3) {
                                                                Font_LoadCharNES(arg0, 0x27U, spBC);
                                                                spBC += 0x80;
                                                                (temp_s6 + spDA)->unk_11F24 = 0x27;
                                                            }
                                                            temp_s1_3 = phi_s1_3 + 1;
                                                            phi_s1_3 = temp_s1_3;
                                                        } while ((s32) temp_s1_3 < 4);
                                                        spA4 += 6.0f * (16.0f * sp70->unk_2098);
                                                    } else if (temp_s2 == 0xCB) {
                                                        spCE = temp_a3;
                                                        spCC = 0;
                                                        spCA = 0;
                                                        spC8 = 0;
                                                        temp_v0 = Actor_GetAllChestFlag(arg0);
                                                        phi_a3_3 = temp_v0;
                                                        phi_a3_4 = (s32) temp_v0;
                                                        phi_s1_4 = 0;
                                                        phi_s2_3 = 0;
                                                        if ((s32) temp_v0 >= 0x3E8) {
                                                            do {
                                                                temp_a3_3 = phi_a3_3 - 0x3E8;
                                                                spC8 += 1;
                                                                phi_a3_3 = temp_a3_3;
                                                                phi_a3_4 = (s32) temp_a3_3;
                                                            } while ((s32) temp_a3_3 >= 0x3E8);
                                                        }
                                                        phi_a3_5 = phi_a3_4;
                                                        phi_a3_6 = phi_a3_4;
                                                        if (phi_a3_4 >= 0x64) {
                                                            do {
                                                                temp_a3_4 = phi_a3_5 - 0x64;
                                                                spCA += 1;
                                                                phi_a3_5 = (s32) temp_a3_4;
                                                                phi_a3_6 = (s32) temp_a3_4;
                                                            } while ((s32) temp_a3_4 >= 0x64);
                                                        }
                                                        phi_a3_7 = phi_a3_6;
                                                        phi_a3_8 = (s16) phi_a3_6;
                                                        if (phi_a3_6 >= 0xA) {
                                                            do {
                                                                temp_a3_5 = phi_a3_7 - 0xA;
                                                                spCC += 1;
                                                                phi_a3_7 = (s32) temp_a3_5;
                                                                phi_a3_8 = temp_a3_5;
                                                            } while ((s32) temp_a3_5 >= 0xA);
                                                        }
                                                        do {
                                                            phi_a3_9 = phi_a3_8;
                                                            if (phi_s1_4 != 3) {
                                                                spCE = phi_a3_8;
                                                                if (temp_s5[phi_s1_4] != 0) {
                                                                    phi_a3_9 = spCE;
                                                                    goto block_127;
                                                                }
                                                            } else {
block_127:
                                                                spCE = phi_a3_9;
                                                                phi_s2_3 = 1;
                                                            }
                                                            if (phi_s2_3 != 0) {
                                                                temp_s0_3 = &temp_s5[phi_s1_4];
                                                                Font_LoadCharNES(arg0, (*temp_s0_3 + 0x30) & 0xFF, spBC);
                                                                spBC += 0x80;
                                                                (temp_s6 + spDA)->unk_11F24 = (s8) (*temp_s0_3 + 0x30);
                                                                spDA += 1;
                                                                spA4 += 16.0f * sp70->unk_2098;
                                                            }
                                                            temp_s1_4 = phi_s1_4 + 1;
                                                            phi_s1_4 = temp_s1_4;
                                                            phi_a3_8 = spCE;
                                                        } while ((s32) temp_s1_4 < 4);
                                                        spCE = spCE;
                                                        spDA += -1;
                                                    } else if (temp_s2 == 0xCC) {
                                                        spCE = temp_a3;
                                                        spDA += 1;
                                                        temp_s6->unk_120BE = spC6;
                                                        temp_s6->unk_120C0 = spDA;
                                                        temp_s6->unk_120C2 = 2;
                                                        temp_s6->unk_12078 = 0;
                                                        temp_s6->unk_120C4 = spBC;
                                                        spC8 = 0;
                                                        spCA = 0;
                                                        spCC = 0;
                                                        phi_s1_5 = 0;
                                                        do {
                                                            func_80158988(arg0, (temp_s5[phi_s1_5] + 0x30) & 0xFF, &spBC, &spA4, (s16) (s32) spDA);
                                                            temp_s1_5 = phi_s1_5 + 1;
                                                            spDA += 1;
                                                            phi_s1_5 = temp_s1_5;
                                                        } while ((s32) temp_s1_5 < 3);
                                                        func_80158C04(arg0, &spDA, &spBC, &spA4);
                                                    } else if (temp_s2 == 0xCD) {
                                                        spCE = temp_a3;
                                                        spCA = 0;
                                                        spC8 = 0;
                                                        temp_t7 = sp70->unk_2078;
                                                        spCC = (s16) temp_t7;
                                                        phi_s1_6 = 0;
                                                        phi_s2_4 = 0;
                                                        if ((s32) (s16) temp_t7 >= 0x64) {
                                                            do {
                                                                temp_t2 = spCC - 0x64;
                                                                spC8 += 1;
                                                                spCC = temp_t2;
                                                            } while ((s32) temp_t2 >= 0x64);
                                                        }
                                                        if ((s32) spCC >= 0xA) {
                                                            do {
                                                                temp_t5 = spCC - 0xA;
                                                                spCA += 1;
                                                                spCC = temp_t5;
                                                            } while ((s32) temp_t5 >= 0xA);
                                                        }
                                                        do {
                                                            if ((phi_s1_6 == 2) || (temp_s5[phi_s1_6] != 0)) {
                                                                phi_s2_4 = 1;
                                                            }
                                                            if (phi_s2_4 != 0) {
                                                                func_80158988(arg0, (temp_s5[phi_s1_6] + 0x30) & 0xFF, &spBC, &spA4, (s16) (s32) spDA);
                                                                spDA += 1;
                                                            }
                                                            temp_s1_6 = phi_s1_6 + 1;
                                                            phi_s1_6 = temp_s1_6;
                                                        } while ((s32) temp_s1_6 < 3);
                                                        func_80158D98(arg0, &spDA, &spBC, &spA4, (s16) sp70->unk_2078);
                                                    } else if (temp_s2 == 0xCE) {
                                                        spCE = temp_a3;
                                                        spCC = 0;
                                                        spCA = 0;
                                                        spC8 = 0;
                                                        temp_t9_2 = sp70->unk_207C;
                                                        spCE = (s16) temp_t9_2;
                                                        phi_s1_7 = 0;
                                                        phi_s2_5 = 0;
                                                        if ((s32) (s16) temp_t9_2 >= 0x3E8) {
                                                            phi_a3_10 = (s16) temp_t9_2;
                                                            do {
                                                                temp_a3_6 = phi_a3_10 - 0x3E8;
                                                                spC8 += 1;
                                                                phi_a3_10 = temp_a3_6;
                                                            } while ((s32) temp_a3_6 >= 0x3E8);
                                                            spCE = temp_a3_6;
                                                        }
                                                        phi_a3_11 = spCE;
                                                        phi_a3_12 = (s32) spCE;
                                                        if ((s32) spCE >= 0x64) {
                                                            do {
                                                                temp_a3_7 = phi_a3_11 - 0x64;
                                                                spCA += 1;
                                                                phi_a3_11 = temp_a3_7;
                                                                phi_a3_12 = (s32) temp_a3_7;
                                                            } while ((s32) temp_a3_7 >= 0x64);
                                                        }
                                                        spCE = (s16) phi_a3_12;
                                                        phi_a3_13 = phi_a3_12;
                                                        if (phi_a3_12 >= 0xA) {
                                                            do {
                                                                temp_a3_8 = phi_a3_13 - 0xA;
                                                                spCC += 1;
                                                                phi_a3_13 = (s32) temp_a3_8;
                                                            } while ((s32) temp_a3_8 >= 0xA);
                                                            spCE = temp_a3_8;
                                                        }
                                                        do {
                                                            if ((phi_s1_7 == 3) || (temp_s5[phi_s1_7] != 0)) {
                                                                phi_s2_5 = 1;
                                                            }
                                                            if (phi_s2_5 != 0) {
                                                                func_80158988(arg0, (temp_s5[phi_s1_7] + 0x30) & 0xFF, &spBC, &spA4, (s16) (s32) spDA);
                                                                spDA += 1;
                                                            }
                                                            temp_s1_7 = phi_s1_7 + 1;
                                                            phi_s1_7 = temp_s1_7;
                                                        } while ((s32) temp_s1_7 < 4);
                                                        func_80158D98(arg0, &spDA, &spBC, &spA4, (s16) sp70->unk_207C);
                                                    } else if (temp_s2 == 0xCF) {
                                                        spCE = temp_a3;
                                                        func_80158FB0(arg0, temp_s2 & 0xFF, &spBC, &spA4, &spDA);
                                                    } else if (temp_s2 == 0xC) {
                                                        spCE = temp_a3;
                                                        spCA = 0;
                                                        spC8 = 0;
                                                        spCC = (s16) gSaveContext.inventory.strayFairies[gSaveContext.unk_48C8];
                                                        phi_s1_8 = 0;
                                                        phi_s2_6 = 0;
                                                        if ((s32) spCC >= 0x64) {
                                                            do {
                                                                temp_t5_2 = spCC - 0x64;
                                                                spC8 += 1;
                                                                spCC = temp_t5_2;
                                                            } while ((s32) temp_t5_2 >= 0x64);
                                                        }
                                                        if ((s32) spCC >= 0xA) {
                                                            do {
                                                                temp_t7_2 = spCC - 0xA;
                                                                spCA += 1;
                                                                spCC = temp_t7_2;
                                                            } while ((s32) temp_t7_2 >= 0xA);
                                                        }
                                                        do {
                                                            if ((phi_s1_8 == 2) || (temp_s5[phi_s1_8] != 0)) {
                                                                phi_s2_6 = 1;
                                                            }
                                                            if (phi_s2_6 != 0) {
                                                                func_80158988(arg0, (temp_s5[phi_s1_8] + 0x30) & 0xFF, &spBC, &spA4, (s16) (s32) spDA);
                                                                spDA += 1;
                                                            }
                                                            temp_s1_8 = phi_s1_8 + 1;
                                                            phi_s1_8 = temp_s1_8;
                                                        } while ((s32) temp_s1_8 < 3);
                                                        temp_v0_2 = gSaveContext.unk_48C8;
                                                        temp_a1_2 = temp_v0_2 & 0xFFFF;
                                                        temp_v1 = temp_v0_2 & 0xFFFF;
                                                        if ((gSaveContext.inventory.strayFairies[temp_a1_2] == 1) || (gSaveContext.inventory.strayFairies[temp_v1] == 0x15)) {
                                                            func_80158988(arg0, 0x73U, &spBC, &spA4, (s16) (s32) spDA);
                                                            temp_t4_3 = spDA + 1;
                                                            temp_t7_5 = temp_t4_3;
                                                            spDA = temp_t4_3;
                                                            func_80158988(arg0, 0x74U, &spBC, &spA4, (s16) (s32) temp_t7_5);
                                                        } else if ((gSaveContext.inventory.strayFairies[temp_a1_2] == 2) || (gSaveContext.inventory.strayFairies[temp_v1] == 0x16)) {
                                                            func_80158988(arg0, 0x6EU, &spBC, &spA4, (s16) (s32) spDA);
                                                            temp_t4_2 = spDA + 1;
                                                            temp_t7_4 = temp_t4_2;
                                                            spDA = temp_t4_2;
                                                            func_80158988(arg0, 0x64U, &spBC, &spA4, (s16) (s32) temp_t7_4);
                                                        } else if ((gSaveContext.inventory.strayFairies[temp_a1_2] == 3) || (gSaveContext.inventory.strayFairies[temp_v1] == 0x17)) {
                                                            func_80158988(arg0, 0x72U, &spBC, &spA4, (s16) (s32) spDA);
                                                            temp_t4 = spDA + 1;
                                                            temp_t7_3 = temp_t4;
                                                            spDA = temp_t4;
                                                            func_80158988(arg0, 0x64U, &spBC, &spA4, (s16) (s32) temp_t7_3);
                                                        } else {
                                                            func_80158988(arg0, 0x74U, &spBC, &spA4, (s16) (s32) spDA);
                                                            temp_t5_3 = spDA + 1;
                                                            temp_t6 = temp_t5_3;
                                                            spDA = temp_t5_3;
                                                            func_80158988(arg0, 0x68U, &spBC, &spA4, (s16) (s32) temp_t6);
                                                        }
                                                    } else if (temp_s2 == 0xD) {
                                                        spCE = temp_a3;
                                                        spCA = 0;
                                                        spC8 = 0;
                                                        spCC = func_8012F22C(arg0->sceneNum);
                                                        phi_s1_9 = 0;
                                                        phi_s2_7 = 0;
                                                        if ((s32) spCC >= 0x64) {
                                                            do {
                                                                temp_t7_6 = spCC - 0x64;
                                                                spC8 += 1;
                                                                spCC = temp_t7_6;
                                                            } while ((s32) temp_t7_6 >= 0x64);
                                                        }
                                                        if ((s32) spCC >= 0xA) {
                                                            do {
                                                                temp_t3 = spCC - 0xA;
                                                                spCA += 1;
                                                                spCC = temp_t3;
                                                            } while ((s32) temp_t3 >= 0xA);
                                                        }
                                                        do {
                                                            if ((phi_s1_9 == 2) || (temp_s5[phi_s1_9] != 0)) {
                                                                phi_s2_7 = 1;
                                                            }
                                                            if (phi_s2_7 != 0) {
                                                                func_80158988(arg0, (temp_s5[phi_s1_9] + 0x30) & 0xFF, &spBC, &spA4, (s16) (s32) spDA);
                                                                spDA += 1;
                                                            }
                                                            temp_s1_9 = phi_s1_9 + 1;
                                                            phi_s1_9 = temp_s1_9;
                                                        } while ((s32) temp_s1_9 < 3);
                                                        if ((func_8012F22C(arg0->sceneNum) == 1) || (func_8012F22C(arg0->sceneNum) == 0x15)) {
                                                            func_80158988(arg0, 0x73U, &spBC, &spA4, (s16) (s32) spDA);
                                                            temp_t7_8 = spDA + 1;
                                                            temp_t8_2 = temp_t7_8;
                                                            spDA = temp_t7_8;
                                                            func_80158988(arg0, 0x74U, &spBC, &spA4, (s16) (s32) temp_t8_2);
                                                        } else if ((func_8012F22C(arg0->sceneNum) == 2) || (func_8012F22C(arg0->sceneNum) == 0x16)) {
                                                            func_80158988(arg0, 0x6EU, &spBC, &spA4, (s16) (s32) spDA);
                                                            temp_t6_3 = spDA + 1;
                                                            temp_t3_3 = temp_t6_3;
                                                            spDA = temp_t6_3;
                                                            func_80158988(arg0, 0x64U, &spBC, &spA4, (s16) (s32) temp_t3_3);
                                                        } else if ((func_8012F22C(arg0->sceneNum) == 3) || (func_8012F22C(arg0->sceneNum) == 0x17)) {
                                                            func_80158988(arg0, 0x72U, &spBC, &spA4, (s16) (s32) spDA);
                                                            temp_t7_7 = spDA + 1;
                                                            temp_t8 = temp_t7_7;
                                                            spDA = temp_t7_7;
                                                            func_80158988(arg0, 0x64U, &spBC, &spA4, (s16) (s32) temp_t8);
                                                        } else {
                                                            func_80158988(arg0, 0x74U, &spBC, &spA4, (s16) (s32) spDA);
                                                            temp_t6_2 = spDA + 1;
                                                            temp_t3_2 = temp_t6_2;
                                                            spDA = temp_t6_2;
                                                            func_80158988(arg0, 0x68U, &spBC, &spA4, (s16) (s32) temp_t3_2);
                                                        }
                                                    } else if (temp_s2 == 0xE) {
                                                        temp_t4_4 = gSaveContext.minigameScore;
                                                        spC8 = 0;
                                                        spCA = (s16) temp_t4_4;
                                                        phi_s1_10 = 0;
                                                        if ((s32) (s16) temp_t4_4 >= 0xA) {
                                                            do {
                                                                temp_t0 = spCA - 0xA;
                                                                spC8 += 1;
                                                                spCA = temp_t0;
                                                            } while ((s32) temp_t0 >= 0xA);
                                                        }
                                                        do {
                                                            spCE = phi_a3_14;
                                                            if ((phi_s1_10 == 1) || (temp_s5[phi_s1_10] != 0)) {
                                                                func_80158988(arg0, (temp_s5[phi_s1_10] + 0x30) & 0xFF, &spBC, &spA4, (s16) (s32) spDA);
                                                                spDA += 1;
                                                            }
                                                            temp_s1_10 = phi_s1_10 + 1;
                                                            phi_a3_14 = spCE;
                                                            phi_s1_10 = temp_s1_10;
                                                        } while ((s32) temp_s1_10 < 2);
                                                        spCE = spCE;
                                                        spDA += -1;
                                                    } else if (temp_s2 == 0xF) {
                                                        temp_a3_9 = (s16) gSaveContext.minigameScore;
                                                        spCC = 0;
                                                        spCA = 0;
                                                        spC8 = 0;
                                                        phi_a3_15 = temp_a3_9;
                                                        phi_a3_16 = (s32) temp_a3_9;
                                                        phi_s1_11 = 0;
                                                        phi_s2_8 = 0;
                                                        if ((s32) temp_a3_9 >= 0x3E8) {
                                                            do {
                                                                temp_a3_10 = phi_a3_15 - 0x3E8;
                                                                spC8 += 1;
                                                                phi_a3_15 = temp_a3_10;
                                                                phi_a3_16 = (s32) temp_a3_10;
                                                            } while ((s32) temp_a3_10 >= 0x3E8);
                                                        }
                                                        phi_a3_17 = phi_a3_16;
                                                        phi_a3_18 = phi_a3_16;
                                                        if (phi_a3_16 >= 0x64) {
                                                            do {
                                                                temp_a3_11 = phi_a3_17 - 0x64;
                                                                spCA += 1;
                                                                phi_a3_17 = (s32) temp_a3_11;
                                                                phi_a3_18 = (s32) temp_a3_11;
                                                            } while ((s32) temp_a3_11 >= 0x64);
                                                        }
                                                        phi_a3_19 = phi_a3_18;
                                                        phi_a3_20 = (s16) phi_a3_18;
                                                        if (phi_a3_18 >= 0xA) {
                                                            do {
                                                                temp_a3_12 = phi_a3_19 - 0xA;
                                                                spCC += 1;
                                                                phi_a3_19 = (s32) temp_a3_12;
                                                                phi_a3_20 = temp_a3_12;
                                                            } while ((s32) temp_a3_12 >= 0xA);
                                                        }
                                                        do {
                                                            phi_a3_21 = phi_a3_20;
                                                            if (phi_s1_11 != 3) {
                                                                spCE = phi_a3_20;
                                                                if (temp_s5[phi_s1_11] != 0) {
                                                                    phi_a3_21 = spCE;
                                                                    goto block_227;
                                                                }
                                                            } else {
block_227:
                                                                spCE = phi_a3_21;
                                                                phi_s2_8 = 1;
                                                            }
                                                            if (phi_s2_8 != 0) {
                                                                func_80158988(arg0, (temp_s5[phi_s1_11] + 0x30) & 0xFF, &spBC, &spA4, (s16) (s32) spDA);
                                                                spDA += 1;
                                                            }
                                                            temp_s1_11 = phi_s1_11 + 1;
                                                            phi_s1_11 = temp_s1_11;
                                                            phi_a3_20 = spCE;
                                                        } while ((s32) temp_s1_11 < 4);
                                                        spCE = spCE;
                                                        spDA += -1;
                                                    } else if (temp_s2 == 0xD0) {
                                                        spCE = temp_a3;
                                                        spDA += 1;
                                                        temp_s6->unk_120BE = spC6;
                                                        temp_s6->unk_120C0 = spDA;
                                                        temp_s6->unk_120C2 = 0;
                                                        temp_s6->unk_12078 = 0;
                                                        temp_s6->unk_120C4 = spBC;
                                                        spC8 = 0;
                                                        spCA = 0;
                                                        spCC = 0;
                                                        phi_s1_12 = 0;
                                                        do {
                                                            func_80158988(arg0, (temp_s5[phi_s1_12] + 0x30) & 0xFF, &spBC, &spA4, (s16) (s32) spDA);
                                                            temp_s1_12 = phi_s1_12 + 1;
                                                            spDA += 1;
                                                            phi_s1_12 = temp_s1_12;
                                                        } while ((s32) temp_s1_12 < 2);
                                                        func_80158A24(arg0, &spDA, &spBC, &spA4);
                                                    } else if (temp_s2 == 0xD1) {
                                                        spCE = temp_a3;
                                                        spDA += 1;
                                                        temp_s6->unk_120BE = spC6;
                                                        temp_s6->unk_120C0 = spDA;
                                                        temp_s6->unk_120C2 = 0;
                                                        temp_s6->unk_12078 = 0;
                                                        temp_s6->unk_120C4 = spBC;
                                                        phi_s1_13 = 0;
                                                        do {
                                                            (temp_s6 + (phi_s1_13 * 2))->unk_12054 = 1;
                                                            func_80158988(arg0, 0x31U, &spBC, &spA4, (s16) (s32) spDA);
                                                            temp_s1_13 = phi_s1_13 + 1;
                                                            spDA += 1;
                                                            phi_s1_13 = temp_s1_13;
                                                        } while ((s32) temp_s1_13 < 5);
                                                        spDA += -1;
                                                    } else if (temp_s2 == 0xD3) {
                                                        temp_v0_3 = gSaveContext.unk_14;
                                                        spCE = temp_a3;
                                                        phi_s1_14 = 0;
                                                        if (temp_v0_3 == 0x12) {
                                                            phi_s2_9 = 0;
                                                        } else if (temp_v0_3 == 0) {
                                                            phi_s2_9 = 1;
                                                        } else {
                                                            phi_s2_9 = 2;
                                                        }
                                                        do {
                                                            temp_v0_4 = (phi_s2_9 * 4) + &D_801D08D8 + phi_s1_14;
                                                            (temp_s6 + spDA)->unk_11F24 = (u8) *temp_v0_4;
                                                            Font_LoadCharNES(arg0, *temp_v0_4, spBC);
                                                            temp_s1_14 = phi_s1_14 + 1;
                                                            spDA += 1;
                                                            spBC += 0x80;
                                                            phi_s1_14 = temp_s1_14;
                                                        } while ((s32) temp_s1_14 < 4);
                                                        spDA += -1;
                                                        spA4 += 3.0f * (16.0f * sp70->unk_2098);
                                                        temp_s6->unk_12021 = phi_s2_9;
                                                    } else if (temp_s2 == 0xD4) {
                                                        spCE = temp_a3;
                                                        func_8015926C(arg0, &spBC, &spA4, &spDA);
                                                    } else if (temp_s2 == 0xD5) {
                                                        spCE = temp_a3;
                                                        spDA += 1;
                                                        temp_s6->unk_120BE = spC6;
                                                        temp_s6->unk_120C0 = spDA;
                                                        temp_s6->unk_120C2 = 0;
                                                        temp_s6->unk_12078 = 0;
                                                        temp_s6->unk_120C4 = spBC;
                                                        phi_s1_15 = 0;
                                                        do {
                                                            (temp_s6 + (phi_s1_15 * 2))->unk_12054 = 1;
                                                            Font_LoadCharNES(arg0, 0x31U, spBC);
                                                            spBC += 0x80;
                                                            (temp_s6 + spDA)->unk_11F24 = 0x31;
                                                            temp_s1_15 = phi_s1_15 + 1;
                                                            spDA += 1;
                                                            spA4 += 16.0f * sp70->unk_2098;
                                                            phi_s1_15 = temp_s1_15;
                                                        } while ((s32) temp_s1_15 < 3);
                                                        spDA += -1;
                                                    } else if (temp_s2 == 0xD6) {
                                                        spCE = temp_a3;
                                                        phi_s1_16 = 0;
                                                        do {
                                                            (temp_s6 + spDA)->unk_11F24 = (u8) *(&D_801D08E4 + gSaveContext.spiderHouseMaskOrder[phi_s1_16]);
                                                            temp_t2_2 = spDA + 1;
                                                            temp_t6_4 = temp_t2_2;
                                                            spDA = temp_t2_2;
                                                            func_80158988(arg0, (phi_s1_16 + 0x31) & 0xFF, &spBC, &spA4, (s16) (s32) temp_t6_4);
                                                            temp_s1_16 = phi_s1_16 + 1;
                                                            spDA += 1;
                                                            phi_s1_16 = temp_s1_16;
                                                        } while ((s32) temp_s1_16 < 6);
                                                        (temp_s6 + spDA)->unk_11F24 = 0;
                                                    } else if (((s32) temp_s2 >= 0xD7) && ((s32) temp_s2 < 0xDB)) {
                                                        spCA = 0;
                                                        temp_t2_3 = 0xF - *(&gSaveContext - 3 + temp_s2);
                                                        spC8 = 0;
                                                        spCC = temp_t2_3;
                                                        phi_s1_17 = 0;
                                                        phi_s2_10 = 0;
                                                        if ((s32) temp_t2_3 >= 0x64) {
                                                            do {
                                                                temp_t5_4 = spCC - 0x64;
                                                                spC8 += 1;
                                                                spCC = temp_t5_4;
                                                            } while ((s32) temp_t5_4 >= 0x64);
                                                        }
                                                        if ((s32) spCC >= 0xA) {
                                                            do {
                                                                temp_t9_3 = spCC - 0xA;
                                                                spCA += 1;
                                                                spCC = temp_t9_3;
                                                            } while ((s32) temp_t9_3 >= 0xA);
                                                        }
                                                        do {
                                                            phi_a3_23 = phi_a3_22;
                                                            if (phi_s1_17 != 2) {
                                                                spCE = phi_a3_22;
                                                                if (temp_s5[phi_s1_17] != 0) {
                                                                    phi_a3_23 = spCE;
                                                                    goto block_268;
                                                                }
                                                            } else {
block_268:
                                                                spCE = phi_a3_23;
                                                                phi_s2_10 = 1;
                                                            }
                                                            if (phi_s2_10 != 0) {
                                                                temp_s0_4 = &temp_s5[phi_s1_17];
                                                                Font_LoadCharNES(arg0, (*temp_s0_4 + 0x30) & 0xFF, spBC);
                                                                spBC += 0x80;
                                                                (temp_s6 + spDA)->unk_11F24 = (s8) (*temp_s0_4 + 0x30);
                                                                spDA += 1;
                                                                spA4 += 16.0f * sp70->unk_2098;
                                                            }
                                                            temp_s1_17 = phi_s1_17 + 1;
                                                            phi_s1_17 = temp_s1_17;
                                                            phi_a3_22 = spCE;
                                                        } while ((s32) temp_s1_17 < 3);
                                                        spCE = spCE;
                                                    } else if (temp_s2 == 0xDB) {
                                                        temp_a3_13 = (s16) gSaveContext.minigameScore;
                                                        spCC = 0;
                                                        spCA = 0;
                                                        spC8 = 0;
                                                        phi_a3_24 = temp_a3_13;
                                                        phi_a3_25 = (s32) temp_a3_13;
                                                        phi_s1_18 = 0;
                                                        phi_s2_11 = 0;
                                                        if ((s32) temp_a3_13 >= 0x3E8) {
                                                            do {
                                                                temp_a3_14 = phi_a3_24 - 0x3E8;
                                                                spC8 += 1;
                                                                phi_a3_24 = temp_a3_14;
                                                                phi_a3_25 = (s32) temp_a3_14;
                                                            } while ((s32) temp_a3_14 >= 0x3E8);
                                                        }
                                                        phi_a3_26 = phi_a3_25;
                                                        phi_a3_27 = phi_a3_25;
                                                        if (phi_a3_25 >= 0x64) {
                                                            do {
                                                                temp_a3_15 = phi_a3_26 - 0x64;
                                                                spCA += 1;
                                                                phi_a3_26 = (s32) temp_a3_15;
                                                                phi_a3_27 = (s32) temp_a3_15;
                                                            } while ((s32) temp_a3_15 >= 0x64);
                                                        }
                                                        phi_a3_28 = phi_a3_27;
                                                        phi_a3_29 = (s16) phi_a3_27;
                                                        if (phi_a3_27 >= 0xA) {
                                                            do {
                                                                temp_a3_16 = phi_a3_28 - 0xA;
                                                                spCC += 1;
                                                                phi_a3_28 = (s32) temp_a3_16;
                                                                phi_a3_29 = temp_a3_16;
                                                            } while ((s32) temp_a3_16 >= 0xA);
                                                        }
                                                        do {
                                                            phi_a3_30 = phi_a3_29;
                                                            if (phi_s1_18 != 3) {
                                                                spCE = phi_a3_29;
                                                                if (temp_s5[phi_s1_18] != 0) {
                                                                    phi_a3_30 = spCE;
                                                                    goto block_283;
                                                                }
                                                            } else {
block_283:
                                                                spCE = phi_a3_30;
                                                                phi_s2_11 = 1;
                                                            }
                                                            if (phi_s2_11 != 0) {
                                                                temp_s0_5 = &temp_s5[phi_s1_18];
                                                                Font_LoadCharNES(arg0, (*temp_s0_5 + 0x30) & 0xFF, spBC);
                                                                spBC += 0x80;
                                                                (temp_s6 + spDA)->unk_11F24 = (s8) (*temp_s0_5 + 0x30);
                                                                spDA += 1;
                                                                spA4 += 16.0f * sp70->unk_2098;
                                                            }
                                                            temp_s1_18 = phi_s1_18 + 1;
                                                            phi_s1_18 = temp_s1_18;
                                                            phi_a3_29 = spCE;
                                                        } while ((s32) temp_s1_18 < 4);
                                                        spCE = spCE;
                                                        spDA += -1;
                                                    } else {
                                                        spCE = temp_a3;
                                                        if (temp_s2 != 0xDC) {
                                                            if (temp_s2 == 0xDD) {
                                                                spCE = temp_a3;
                                                                goto block_291;
                                                            }
                                                            if (temp_s2 == 0xDE) {
                                                                spCE = temp_a3;
                                                                spCC = 0;
                                                                spCA = 0;
                                                                spC8 = 0;
                                                                temp_a0_2 = spDC->unk_146;
                                                                phi_s1_19 = 0;
                                                                phi_s2_12 = 0;
                                                                if (temp_a0_2 == 0) {
                                                                    temp_v0_5 = gSaveContext.playerForm;
                                                                    if (temp_v0_5 == 4) {
                                                                        phi_v1_4 = 0U;
                                                                    } else {
                                                                        phi_v1_4 = temp_v0_5;
                                                                    }
                                                                    phi_v0 = &gSaveContext.equips.buttonItems[0][(phi_v1_4 * 4) + temp_a0_2];
                                                                } else {
                                                                    phi_v0 = &gSaveContext.equips.buttonItems[0][temp_a0_2];
                                                                }
                                                                temp_a3_17 = gItemPrices[*phi_v0 & 0xFF];
                                                                phi_a3_31 = temp_a3_17;
                                                                phi_a3_32 = (s32) temp_a3_17;
                                                                if ((s32) temp_a3_17 >= 0x3E8) {
                                                                    do {
                                                                        temp_a3_18 = phi_a3_31 - 0x3E8;
                                                                        spC8 += 1;
                                                                        phi_a3_31 = temp_a3_18;
                                                                        phi_a3_32 = (s32) temp_a3_18;
                                                                    } while ((s32) temp_a3_18 >= 0x3E8);
                                                                }
                                                                phi_a3_33 = phi_a3_32;
                                                                phi_a3_34 = phi_a3_32;
                                                                if (phi_a3_32 >= 0x64) {
                                                                    do {
                                                                        temp_a3_19 = phi_a3_33 - 0x64;
                                                                        spCA += 1;
                                                                        phi_a3_33 = (s32) temp_a3_19;
                                                                        phi_a3_34 = (s32) temp_a3_19;
                                                                    } while ((s32) temp_a3_19 >= 0x64);
                                                                }
                                                                spCE = (s16) phi_a3_34;
                                                                phi_a3_35 = phi_a3_34;
                                                                if (phi_a3_34 >= 0xA) {
                                                                    do {
                                                                        temp_a3_20 = phi_a3_35 - 0xA;
                                                                        spCC += 1;
                                                                        phi_a3_35 = (s32) temp_a3_20;
                                                                    } while ((s32) temp_a3_20 >= 0xA);
                                                                    spCE = temp_a3_20;
                                                                }
                                                                do {
                                                                    if ((phi_s1_19 == 3) || (temp_s5[phi_s1_19] != 0)) {
                                                                        phi_s2_12 = 1;
                                                                    }
                                                                    if (phi_s2_12 != 0) {
                                                                        temp_s0_6 = &temp_s5[phi_s1_19];
                                                                        Font_LoadCharNES(arg0, (*temp_s0_6 + 0x30) & 0xFF, spBC);
                                                                        spBC += 0x80;
                                                                        (temp_s6 + spDA)->unk_11F24 = (s8) (*temp_s0_6 + 0x30);
                                                                        spDA += 1;
                                                                        spA4 += 16.0f * sp70->unk_2098;
                                                                    }
                                                                    temp_s1_19 = phi_s1_19 + 1;
                                                                    phi_s1_19 = temp_s1_19;
                                                                } while ((s32) temp_s1_19 < 4);
                                                                func_80158A24(arg0, &spDA, &spBC, &spA4);
                                                            } else if (temp_s2 == 0xDF) {
                                                                spCE = temp_a3;
                                                                phi_s1_20 = 0;
                                                                do {
                                                                    temp_s0_7 = &temp_s5[phi_s1_20];
                                                                    *temp_s0_7 = (s16) gSaveContext.bomberCode[phi_s1_20];
                                                                    Font_LoadCharNES(arg0, (*temp_s0_7 + 0x30) & 0xFF, spBC);
                                                                    temp_s1_20 = phi_s1_20 + 1;
                                                                    spBC += 0x80;
                                                                    (temp_s6 + spDA)->unk_11F24 = (s8) (*temp_s0_7 + 0x30);
                                                                    spDA += 1;
                                                                    spA4 += 16.0f * sp70->unk_2098;
                                                                    phi_s1_20 = temp_s1_20;
                                                                } while ((s32) temp_s1_20 < 5);
                                                                spDA += -1;
                                                            } else if (((s32) temp_s2 >= 0xE1) && (temp_t5_5 = temp_s2 - 0xE1, (((s32) temp_s2 < 0xE7) != 0))) {
                                                                spCE = temp_a3;
                                                                (temp_s6 + spDA)->unk_11F24 = (u8) *(&D_801D08E4 + gSaveContext.spiderHouseMaskOrder[temp_t5_5]);
                                                                temp_s2_3 = *(&D_801D0900 + gSaveContext.spiderHouseMaskOrder[temp_t5_5]);
                                                                spDA += 1;
                                                                phi_s0_3 = 0;
                                                                if ((s32) temp_s2_3 > 0) {
                                                                    do {
                                                                        func_80158988(arg0, *(&D_801D08E8 + ((gSaveContext.spiderHouseMaskOrder[temp_t5_5] * 6) + phi_s0_3)), &spBC, &spA4, (s16) (s32) spDA);
                                                                        temp_s0_8 = phi_s0_3 + 1;
                                                                        spDA += 1;
                                                                        phi_s0_3 = temp_s0_8;
                                                                    } while ((s32) temp_s0_8 < (s32) temp_s2_3);
                                                                }
                                                                (temp_s6 + spDA)->unk_11F24 = 0;
                                                            } else if (temp_s2 == 0xE7) {
                                                                spCE = temp_a3;
                                                                spC8 = 0;
                                                                temp_f10 = (s32) (((f32) ((-(s32) (((s32) gSaveContext.day % 5) << 0x10) - ((gSaveContext.time - 0x4000) & 0xFFFF)) + 0x40000) * 0.021972656f) / 60.0f);
                                                                spCA = (s16) temp_f10;
                                                                phi_s1_21 = 0;
                                                                phi_s2_13 = 0;
                                                                if ((s32) (s16) temp_f10 >= 0xA) {
                                                                    do {
                                                                        temp_t7_9 = spCA - 0xA;
                                                                        spC8 += 1;
                                                                        spCA = temp_t7_9;
                                                                    } while ((s32) temp_t7_9 >= 0xA);
                                                                }
                                                                do {
                                                                    if ((phi_s1_21 == 1) || (temp_s5[phi_s1_21] != 0)) {
                                                                        phi_s2_13 = 1;
                                                                    }
                                                                    if (phi_s2_13 != 0) {
                                                                        func_80158988(arg0, (temp_s5[phi_s1_21] + 0x30) & 0xFF, &spBC, &spA4, (s16) (s32) spDA);
                                                                        spDA += 1;
                                                                    }
                                                                    temp_s1_21 = phi_s1_21 + 1;
                                                                    phi_s1_21 = temp_s1_21;
                                                                } while ((s32) temp_s1_21 < 2);
                                                                (temp_s6 + spDA)->unk_11F24 = 0x20;
                                                                temp_t6_5 = spDA + 1;
                                                                temp_t4_5 = temp_t6_5;
                                                                spDA = temp_t6_5;
                                                                func_80158988(arg0, 0x68U, &spBC, &spA4, (s16) (s32) temp_t4_5);
                                                                temp_t7_10 = spDA + 1;
                                                                temp_t2_4 = temp_t7_10;
                                                                spDA = temp_t7_10;
                                                                func_80158988(arg0, 0x6FU, &spBC, &spA4, (s16) (s32) temp_t2_4);
                                                                temp_t3_4 = spDA + 1;
                                                                temp_t6_6 = temp_t3_4;
                                                                spDA = temp_t3_4;
                                                                func_80158988(arg0, 0x75U, &spBC, &spA4, (s16) (s32) temp_t6_6);
                                                                temp_t4_6 = spDA + 1;
                                                                temp_t7_11 = temp_t4_6;
                                                                spDA = temp_t4_6;
                                                                func_80158988(arg0, 0x72U, &spBC, &spA4, (s16) (s32) temp_t7_11);
                                                                if ((spC8 != 0) || (spCA != 1)) {
                                                                    temp_t3_5 = spDA + 1;
                                                                    temp_t6_7 = temp_t3_5;
                                                                    spDA = temp_t3_5;
                                                                    func_80158988(arg0, 0x73U, &spBC, &spA4, (s16) (s32) temp_t6_7);
                                                                }
                                                            } else if (temp_s2 == 0xE8) {
                                                                spCE = temp_a3;
                                                                func_80158FB0(arg0, temp_s2 & 0xFF, &spBC, &spA4, &spDA);
                                                            } else {
                                                                spCE = temp_a3;
                                                                if ((temp_s2 != 0xF0) && (spCE = temp_a3, (temp_s2 != 0xF1)) && (spCE = temp_a3, (temp_s2 != 0xF2))) {
                                                                    if (temp_s2 == 0xF8) {
                                                                        spCE = temp_a3;
                                                                        goto block_345;
                                                                    }
                                                                    spCE = temp_a3;
                                                                    if ((temp_s2 != 0xF7) && (spCE = temp_a3, (temp_s2 != 0xF9)) && (spCE = temp_a3, (temp_s2 != 0xFA)) && (spCE = temp_a3, (temp_s2 != 0xFB))) {
                                                                        if (temp_s2 == 0xFC) {
                                                                            spCE = temp_a3;
                                                                            goto block_376;
                                                                        }
                                                                        if ((temp_s2 == 0xF3) || (temp_s2 == 0xF4) || (temp_s2 == 0xF5)) {
                                                                            temp_a0_4 = *(&gSaveContext + 0xB1E + (temp_s2 * 4));
                                                                            spCC = 0;
                                                                            spCA = 0;
                                                                            spC8 = 0;
                                                                            phi_a3_50 = temp_a0_4;
                                                                            phi_a3_51 = (s32) temp_a0_4;
                                                                            phi_s1_26 = 0;
                                                                            if ((s32) temp_a0_4 >= 0x3C) {
                                                                                do {
                                                                                    temp_t8_3 = spCA + 1;
                                                                                    spCA = temp_t8_3;
                                                                                    if ((s32) temp_t8_3 >= 0xA) {
                                                                                        spCA = temp_t8_3 - 0xA;
                                                                                        spC8 += 1;
                                                                                    }
                                                                                    temp_a3_30 = phi_a3_50 - 0x3C;
                                                                                    phi_a3_50 = temp_a3_30;
                                                                                    phi_a3_51 = (s32) temp_a3_30;
                                                                                } while ((s32) temp_a3_30 >= 0x3C);
                                                                            }
                                                                            spCE = (s16) phi_a3_51;
                                                                            phi_a3_52 = phi_a3_51;
                                                                            if (phi_a3_51 >= 0xA) {
                                                                                do {
                                                                                    temp_a3_31 = phi_a3_52 - 0xA;
                                                                                    spCC += 1;
                                                                                    phi_a3_52 = (s32) temp_a3_31;
                                                                                } while ((s32) temp_a3_31 >= 0xA);
                                                                                spCE = temp_a3_31;
                                                                            }
                                                                            do {
                                                                                temp_s0_12 = &temp_s5[phi_s1_26];
                                                                                Font_LoadCharNES(arg0, (*temp_s0_12 + 0x30) & 0xFF, spBC);
                                                                                spBC += 0x80;
                                                                                (temp_s6 + spDA)->unk_11F24 = (s8) (*temp_s0_12 + 0x30);
                                                                                spDA += 1;
                                                                                if (phi_s1_26 == 1) {
                                                                                    Font_LoadCharNES(arg0, 0x22U, spBC);
                                                                                    spBC += 0x80;
                                                                                    (temp_s6 + spDA)->unk_11F24 = 0x22;
                                                                                    spDA += 1;
                                                                                } else if (phi_s1_26 == 3) {
                                                                                    Font_LoadCharNES(arg0, 0x27U, spBC);
                                                                                    spBC += 0x80;
                                                                                    (temp_s6 + spDA)->unk_11F24 = 0x27;
                                                                                }
                                                                                temp_s1_26 = phi_s1_26 + 1;
                                                                                phi_s1_26 = temp_s1_26;
                                                                            } while ((s32) temp_s1_26 < 4);
                                                                            spA4 += 4.0f * (16.0f * sp70->unk_2098);
                                                                        } else if (temp_s2 == 0xF6) {
                                                                            temp_a3_21 = gSaveContext.roomInf[127][6];
                                                                            spCC = 0;
                                                                            spCA = 0;
                                                                            spC8 = 0;
                                                                            phi_a3_36 = (s16) temp_a3_21;
                                                                            phi_a3_37 = (s32) (s16) temp_a3_21;
                                                                            phi_s1_22 = 0;
                                                                            phi_s2_14 = 0;
                                                                            if ((s32) (s16) temp_a3_21 >= 0x3E8) {
                                                                                do {
                                                                                    temp_a3_22 = phi_a3_36 - 0x3E8;
                                                                                    spC8 += 1;
                                                                                    phi_a3_36 = temp_a3_22;
                                                                                    phi_a3_37 = (s32) temp_a3_22;
                                                                                } while ((s32) temp_a3_22 >= 0x3E8);
                                                                            }
                                                                            phi_a3_38 = phi_a3_37;
                                                                            phi_a3_39 = phi_a3_37;
                                                                            if (phi_a3_37 >= 0x64) {
                                                                                do {
                                                                                    temp_a3_23 = phi_a3_38 - 0x64;
                                                                                    spCA += 1;
                                                                                    phi_a3_38 = (s32) temp_a3_23;
                                                                                    phi_a3_39 = (s32) temp_a3_23;
                                                                                } while ((s32) temp_a3_23 >= 0x64);
                                                                            }
                                                                            phi_a3_40 = phi_a3_39;
                                                                            phi_a3_41 = (s16) phi_a3_39;
                                                                            if (phi_a3_39 >= 0xA) {
                                                                                do {
                                                                                    temp_a3_24 = phi_a3_40 - 0xA;
                                                                                    spCC += 1;
                                                                                    phi_a3_40 = (s32) temp_a3_24;
                                                                                    phi_a3_41 = temp_a3_24;
                                                                                } while ((s32) temp_a3_24 >= 0xA);
                                                                            }
                                                                            do {
                                                                                phi_a3_42 = phi_a3_41;
                                                                                if (phi_s1_22 != 3) {
                                                                                    spCE = phi_a3_41;
                                                                                    if (temp_s5[phi_s1_22] != 0) {
                                                                                        phi_a3_42 = spCE;
                                                                                        goto block_417;
                                                                                    }
                                                                                } else {
block_417:
                                                                                    spCE = phi_a3_42;
                                                                                    phi_s2_14 = 1;
                                                                                }
                                                                                if (phi_s2_14 != 0) {
                                                                                    temp_s0_9 = &temp_s5[phi_s1_22];
                                                                                    Font_LoadCharNES(arg0, (*temp_s0_9 + 0x30) & 0xFF, spBC);
                                                                                    spBC += 0x80;
                                                                                    (temp_s6 + spDA)->unk_11F24 = (s8) (*temp_s0_9 + 0x30);
                                                                                    spDA += 1;
                                                                                    spA4 += 16.0f * sp70->unk_2098;
                                                                                }
                                                                                temp_s1_22 = phi_s1_22 + 1;
                                                                                phi_s1_22 = temp_s1_22;
                                                                                phi_a3_41 = spCE;
                                                                            } while ((s32) temp_s1_22 < 4);
                                                                            spCE = spCE;
                                                                            spDA += -1;
                                                                        } else if ((temp_s2 == 0xFD) || (temp_s2 == 0xFE) || (temp_s2 == 0xFF)) {
                                                                            temp_a0_3 = temp_s2 - 0xFD;
                                                                            phi_s1_25 = 0;
loop_426:
                                                                            phi_s0_5 = (s32) phi_s0_4;
                                                                            if (((temp_a0_3 * 8) + &gSaveContext + phi_s0_4)->unk_DD == 0x3E) {
                                                                                temp_s0_11 = phi_s0_4 - 1;
                                                                                phi_s0_4 = temp_s0_11;
                                                                                phi_s0_5 = (s32) temp_s0_11;
                                                                                if ((s32) temp_s0_11 > 0) {
                                                                                    goto loop_426;
                                                                                }
                                                                            }
                                                                            spCE = temp_a3;
                                                                            if (phi_s0_5 > 0) {
                                                                                spCE = temp_a3;
                                                                                do {
                                                                                    (temp_s6 + spDA + phi_s1_25)->unk_11F24 = 0xFD;
                                                                                    phi_v1_3 = 0;
loop_431:
                                                                                    temp_v0_14 = phi_v1_3 + (temp_s3 + (((temp_a0_3 * 8) + &gSaveContext + phi_s1_25)->unk_DE << 7) + 0x7880);
                                                                                    *(temp_s3 + (temp_s3->unk_11D88 * 0x3C00) + spBC + phi_v1_3) = temp_v0_14->unk_0;
                                                                                    (temp_s3 + (temp_s3->unk_11D88 * 0x3C00) + spBC + phi_v1_3)->unk_1 = (u8) temp_v0_14->unk_1;
                                                                                    (temp_s3 + (temp_s3->unk_11D88 * 0x3C00) + spBC + phi_v1_3)->unk_2 = (u8) temp_v0_14->unk_2;
                                                                                    temp_v1_4 = phi_v1_3 + 4;
                                                                                    (temp_s3 + (temp_s3->unk_11D88 * 0x3C00) + spBC + phi_v1_3)->unk_3 = (u8) temp_v0_14->unk_3;
                                                                                    temp_a3_29 = spCE;
                                                                                    phi_v1_3 = temp_v1_4;
                                                                                    if ((s32) temp_v1_4 < 0x80) {
                                                                                        goto loop_431;
                                                                                    }
                                                                                    temp_s1_25 = phi_s1_25 + 1;
                                                                                    spCE = temp_a3_29;
                                                                                    spBC += 0x80;
                                                                                    phi_s1_25 = temp_s1_25;
                                                                                } while ((s32) temp_s1_25 < phi_s0_5);
                                                                                spCE = temp_a3_29;
                                                                            }
                                                                            spDA = (spDA + phi_s0_5) - 1;
                                                                            spA4 += (f32) phi_s0_5 * (16.0f * sp70->unk_2098);
                                                                        } else if (temp_s2 == 0xB) {
                                                                            spCC = 0;
                                                                            temp_a3_25 = (u32) (gSaveContext.roomInf[127][3] & 0xFFFF0000) >> 0x10;
                                                                            spCA = 0;
                                                                            spC8 = 0;
                                                                            phi_a3_43 = (s16) temp_a3_25;
                                                                            phi_a3_44 = (s32) (s16) temp_a3_25;
                                                                            phi_s1_23 = 0;
                                                                            phi_s2_15 = 0;
                                                                            if ((s32) (s16) temp_a3_25 >= 0x3E8) {
                                                                                do {
                                                                                    temp_a3_26 = phi_a3_43 - 0x3E8;
                                                                                    spC8 += 1;
                                                                                    phi_a3_43 = temp_a3_26;
                                                                                    phi_a3_44 = (s32) temp_a3_26;
                                                                                } while ((s32) temp_a3_26 >= 0x3E8);
                                                                            }
                                                                            phi_a3_45 = phi_a3_44;
                                                                            phi_a3_46 = phi_a3_44;
                                                                            if (phi_a3_44 >= 0x64) {
                                                                                do {
                                                                                    temp_a3_27 = phi_a3_45 - 0x64;
                                                                                    spCA += 1;
                                                                                    phi_a3_45 = (s32) temp_a3_27;
                                                                                    phi_a3_46 = (s32) temp_a3_27;
                                                                                } while ((s32) temp_a3_27 >= 0x64);
                                                                            }
                                                                            phi_a3_47 = phi_a3_46;
                                                                            phi_a3_48 = (s16) phi_a3_46;
                                                                            if (phi_a3_46 >= 0xA) {
                                                                                do {
                                                                                    temp_a3_28 = phi_a3_47 - 0xA;
                                                                                    spCC += 1;
                                                                                    phi_a3_47 = (s32) temp_a3_28;
                                                                                    phi_a3_48 = temp_a3_28;
                                                                                } while ((s32) temp_a3_28 >= 0xA);
                                                                            }
                                                                            do {
                                                                                phi_a3_49 = phi_a3_48;
                                                                                if (phi_s1_23 != 3) {
                                                                                    spCE = phi_a3_48;
                                                                                    if (temp_s5[phi_s1_23] != 0) {
                                                                                        phi_a3_49 = spCE;
                                                                                        goto block_445;
                                                                                    }
                                                                                } else {
block_445:
                                                                                    spCE = phi_a3_49;
                                                                                    phi_s2_15 = 1;
                                                                                }
                                                                                if (phi_s2_15 != 0) {
                                                                                    temp_s0_10 = &temp_s5[phi_s1_23];
                                                                                    Font_LoadCharNES(arg0, (*temp_s0_10 + 0x30) & 0xFF, spBC);
                                                                                    spBC += 0x80;
                                                                                    (temp_s6 + spDA)->unk_11F24 = (s8) (*temp_s0_10 + 0x30);
                                                                                    spDA += 1;
                                                                                    spA4 += 16.0f * sp70->unk_2098;
                                                                                }
                                                                                temp_s1_23 = phi_s1_23 + 1;
                                                                                phi_s1_23 = temp_s1_23;
                                                                                phi_a3_48 = spCE;
                                                                            } while ((s32) temp_s1_23 < 4);
                                                                            spCE = spCE;
                                                                            spDA += -1;
                                                                        } else if (temp_s2 == 0x14) {
                                                                            spCE = temp_a3;
                                                                            spDA += -1;
                                                                            temp_v1_2 = sp70->unk_1FEC;
                                                                            phi_s1_24 = 0;
                                                                            phi_v1_2 = temp_v1_2;
                                                                            if ((s32) (temp_s3 + temp_v1_2)->unk_11881 > 0) {
                                                                                do {
                                                                                    temp_s1_24 = phi_s1_24 + 1;
                                                                                    temp_v0_6 = spDA + 1;
                                                                                    temp_t0_2 = temp_s6 + temp_v0_6 + 0x10000;
                                                                                    spDA = temp_v0_6;
                                                                                    temp_t0_2->unk_1F24 = 0x20;
                                                                                    spA4 += 6.0f;
                                                                                    temp_v1_3 = sp70->unk_1FEC;
                                                                                    phi_s1_24 = temp_s1_24;
                                                                                    phi_v1_2 = temp_v1_3;
                                                                                } while ((s32) temp_s1_24 < (s32) (spE0 + temp_v1_3)->unk_11881);
                                                                            }
                                                                            temp_s6->unk_11FEC = (s16) (phi_v1_2 + 1);
                                                                        } else {
                                                                            spCE = temp_a3;
                                                                            if (temp_s2 != 0x13) {
                                                                                if (temp_s2 == 0x11) {
                                                                                    spCE = temp_a3;
                                                                                    goto block_458;
                                                                                }
                                                                                if ((temp_s2 == 0x17) || (temp_s2 == 0x18) || (temp_s2 == 0x1A)) {
                                                                                    spCE = temp_a3;
                                                                                } else if (temp_s2 == 0xA) {
                                                                                    spCE = temp_a3;
                                                                                    spDA += 1;
                                                                                } else if (temp_s2 == 0x1C) {
                                                                                    spCE = temp_a3;
                                                                                    temp_s6->unk_1209C = 1;
                                                                                    temp_v0_7 = spDA + 1;
                                                                                    spDA = temp_v0_7;
                                                                                    temp_a1_3 = (sp70->unk_1FEC + 1) & 0xFFFF;
                                                                                    temp_s6->unk_11FEC = temp_a1_3;
                                                                                    (temp_s6 + temp_v0_7)->unk_11F24 = (u8) (temp_s3 + temp_a1_3)->unk_11880;
                                                                                    temp_v0_8 = temp_v0_7 + 1;
                                                                                    spDA = temp_v0_8;
                                                                                    temp_a1_4 = (sp70->unk_1FEC + 1) & 0xFFFF;
                                                                                    temp_s6->unk_11FEC = temp_a1_4;
                                                                                    (temp_s6 + temp_v0_8)->unk_11F24 = (u8) (temp_s3 + temp_a1_4)->unk_11880;
                                                                                } else if (temp_s2 == 0x1E) {
                                                                                    spCE = temp_a3;
                                                                                    temp_v0_9 = spDA + 1;
                                                                                    spDA = temp_v0_9;
                                                                                    temp_a1_5 = (sp70->unk_1FEC + 1) & 0xFFFF;
                                                                                    temp_s6->unk_11FEC = temp_a1_5;
                                                                                    (temp_s6 + temp_v0_9)->unk_11F24 = (u8) (temp_s3 + temp_a1_5)->unk_11880;
                                                                                    temp_v0_10 = temp_v0_9 + 1;
                                                                                    spDA = temp_v0_10;
                                                                                    temp_a1_6 = (sp70->unk_1FEC + 1) & 0xFFFF;
                                                                                    temp_s6->unk_11FEC = temp_a1_6;
                                                                                    (temp_s6 + temp_v0_10)->unk_11F24 = (u8) (temp_s3 + temp_a1_6)->unk_11880;
                                                                                    if ((sp70->unk_2094 != 0) || (temp_v0_11 = sp70->unk_1F0A, (temp_v0_11 == 1)) || (temp_v0_11 == 3) || (temp_v0_11 == 6) || (temp_v0_11 == 8) || (temp_v0_11 == 9) || (temp_v0_11 == 0xB) || (sp70->unk_1F0C == 3)) {
                                                                                        temp_t6_8 = temp_s6 + spDA;
                                                                                        play_sound(((temp_t6_8->unk_11F23 << 8) | temp_t6_8->unk_11F24) & 0xFFFF);
                                                                                    }
                                                                                } else if (temp_s2 == 0x1F) {
                                                                                    spCE = temp_a3;
                                                                                    temp_v0_12 = spDA + 1;
                                                                                    spDA = temp_v0_12;
                                                                                    temp_a1_7 = (sp70->unk_1FEC + 1) & 0xFFFF;
                                                                                    temp_s6->unk_11FEC = temp_a1_7;
                                                                                    (temp_s6 + temp_v0_12)->unk_11F24 = (u8) (temp_s3 + temp_a1_7)->unk_11880;
                                                                                    temp_v0_13 = temp_v0_12 + 1;
                                                                                    spDA = temp_v0_13;
                                                                                    temp_a1_8 = (sp70->unk_1FEC + 1) & 0xFFFF;
                                                                                    temp_s6->unk_11FEC = temp_a1_8;
                                                                                    (temp_s6 + temp_v0_13)->unk_11F24 = (u8) (temp_s3 + temp_a1_8)->unk_11880;
                                                                                } else if ((temp_s2 != 0x20) && ((s32) temp_s2 >= 9)) {
                                                                                    spCE = temp_a3;
                                                                                    sp78 = (s32) temp_s2;
                                                                                    Font_LoadCharNES(arg0, temp_s2 & 0xFF, spBC);
                                                                                    spBC += 0x80;
                                                                                    spA4 += *(&D_801D03F0 + (temp_s2 * 4)) * sp70->unk_2098;
                                                                                } else {
                                                                                    spCE = temp_a3;
                                                                                    if (temp_s2 == 0x20) {
                                                                                        spCE = temp_a3;
                                                                                        spA4 += 6.0f;
                                                                                    }
                                                                                }
                                                                            } else {
block_458:
                                                                                temp_t3_6 = temp_s6 + (spC6 * 2);
                                                                                temp_t3_6->unk_11F1A = 0;
                                                                                if (sp70->unk_1F18 != 0) {
                                                                                    temp_t3_6->unk_11F1A = (s16) (s32) (((sp70->unk_2098 * 16.0f * 16.0f) - spA4) * 0.5f);
                                                                                }
                                                                                spC6 += 1;
                                                                                spA4 = 0.0f;
                                                                                if (temp_s2 == 0x11) {
                                                                                    spD0 += 1;
                                                                                }
                                                                                spCE = spCE;
                                                                            }
                                                                        }
                                                                    } else {
block_376:
                                                                        phi_s1_27 = 0;
                                                                        phi_s2_16 = 0;
                                                                        phi_f20_2 = 8.0f;
                                                                        if (temp_s2 == 0xF7) {
                                                                            func_80159438(0, gSaveContext.roomInf[127][1], &spA8, temp_a3);
                                                                        } else if (temp_s2 == 0xF9) {
                                                                            func_80159438(0, gSaveContext.roomInf[127][4], &spA8, temp_a3);
                                                                        } else {
                                                                            func_80159438(0, (&gSaveContext.roomInf[87][2])[temp_s2], &spA8, temp_a3);
                                                                        }
                                                                        do {
                                                                            phi_f20 = phi_f20_2;
                                                                            if ((phi_s1_27 == 4) || ((phi_s1_27 != 2) && (phi_s1_27 != 5) && ((sp + (phi_s1_27 * 2))->unk_A8 != 0))) {
                                                                                phi_s2_16 = 1;
                                                                            }
                                                                            if (phi_s2_16 != 0) {
                                                                                temp_s0_13 = (phi_s1_27 * 2) + &spA8;
                                                                                Font_LoadCharNES(arg0, temp_s0_13->unk_1, spBC);
                                                                                spBC += 0x80;
                                                                                (temp_s6 + spDA)->unk_11F24 = (s8) temp_s0_13->unk_0;
                                                                                spDA += 1;
                                                                            } else {
                                                                                phi_f20 = phi_f20_2 - 1.0f;
                                                                            }
                                                                            temp_s1_27 = phi_s1_27 + 1;
                                                                            phi_s1_27 = temp_s1_27;
                                                                            phi_f20_2 = phi_f20;
                                                                        } while ((s32) temp_s1_27 < 8);
                                                                        spDA += -1;
                                                                        spA4 += phi_f20 * (16.0f * sp70->unk_2098);
                                                                    }
                                                                } else {
block_345:
                                                                    phi_s1_28 = 0;
                                                                    phi_s2_17 = 0;
                                                                    if (temp_s2 == 0xF8) {
                                                                        phi_a0_2 = (s16) gSaveContext.roomInf[127][3];
                                                                    } else {
                                                                        phi_a0_2 = *(&gSaveContext + 0xB1E + (temp_s2 * 4));
                                                                    }
                                                                    phi_a0 = phi_a0_2;
                                                                    if (temp_s2 == 0xF2) {
                                                                        if (gSaveContext.linkAge != 0) {
                                                                            phi_v0_2 = 5;
                                                                        } else {
                                                                            phi_v0_2 = 0x11;
                                                                        }
                                                                        if (phi_v0_2 == 5) {
                                                                            phi_a0_3 = (phi_a0_2 & 0x7F) << 0x10;
                                                                        } else {
                                                                            phi_a0_3 = ((s16) ((u32) (gSaveContext.roomInf[127][(temp_s3 + sp70->unk_1FEC)->unk_11880] & 0xFF000000) >> 0x18) & 0x7F) << 0x10;
                                                                        }
                                                                        phi_a0 = (s16) (phi_a0_3 >> 0x10);
                                                                    }
                                                                    spCC = 0;
                                                                    spCA = 0;
                                                                    spC8 = 0;
                                                                    phi_a3_53 = phi_a0;
                                                                    phi_a3_54 = (s32) phi_a0;
                                                                    if ((s32) phi_a0 >= 0x3E8) {
                                                                        do {
                                                                            temp_a3_32 = phi_a3_53 - 0x3E8;
                                                                            spC8 += 1;
                                                                            phi_a3_53 = temp_a3_32;
                                                                            phi_a3_54 = (s32) temp_a3_32;
                                                                        } while ((s32) temp_a3_32 >= 0x3E8);
                                                                    }
                                                                    phi_a3_55 = phi_a3_54;
                                                                    phi_a3_56 = phi_a3_54;
                                                                    if (phi_a3_54 >= 0x64) {
                                                                        do {
                                                                            temp_a3_33 = phi_a3_55 - 0x64;
                                                                            spCA += 1;
                                                                            phi_a3_55 = (s32) temp_a3_33;
                                                                            phi_a3_56 = (s32) temp_a3_33;
                                                                        } while ((s32) temp_a3_33 >= 0x64);
                                                                    }
                                                                    phi_a3_57 = phi_a3_56;
                                                                    phi_a3_58 = (s16) phi_a3_56;
                                                                    if (phi_a3_56 >= 0xA) {
                                                                        do {
                                                                            temp_a3_34 = phi_a3_57 - 0xA;
                                                                            spCC += 1;
                                                                            phi_a3_57 = (s32) temp_a3_34;
                                                                            phi_a3_58 = temp_a3_34;
                                                                        } while ((s32) temp_a3_34 >= 0xA);
                                                                    }
                                                                    do {
                                                                        phi_a3_59 = phi_a3_58;
                                                                        if (phi_s1_28 != 3) {
                                                                            spCE = phi_a3_58;
                                                                            if (temp_s5[phi_s1_28] != 0) {
                                                                                phi_a3_59 = spCE;
                                                                                goto block_365;
                                                                            }
                                                                        } else {
block_365:
                                                                            spCE = phi_a3_59;
                                                                            phi_s2_17 = 1;
                                                                        }
                                                                        if (phi_s2_17 != 0) {
                                                                            temp_s0_14 = &temp_s5[phi_s1_28];
                                                                            Font_LoadCharNES(arg0, (*temp_s0_14 + 0x30) & 0xFF, spBC);
                                                                            spBC += 0x80;
                                                                            (temp_s6 + spDA)->unk_11F24 = (s8) (*temp_s0_14 + 0x30);
                                                                            spDA += 1;
                                                                            spA4 += 16.0f * sp70->unk_2098;
                                                                        }
                                                                        temp_s1_28 = phi_s1_28 + 1;
                                                                        phi_s1_28 = temp_s1_28;
                                                                        phi_a3_58 = spCE;
                                                                    } while ((s32) temp_s1_28 < 4);
                                                                    spCE = spCE;
                                                                    spDA += -1;
                                                                }
                                                            }
                                                        } else {
block_291:
                                                            phi_s1_29 = 0;
                                                            if (temp_s2 == 0xDC) {
                                                                temp_v1_5 = (((s32) gSaveContext.day % 5) * 3) + &gSaveContext;
                                                                spC8 = (s16) temp_v1_5->unk_FE9;
                                                                spCA = (s16) temp_v1_5->unk_FEA;
                                                                spCC = (s16) temp_v1_5->unk_FEB;
                                                            } else {
                                                                temp_v0_15 = gSaveContext.roomInf[127][5];
                                                                spC8 = (s16) ((u32) (temp_v0_15 & 0xF00) >> 8);
                                                                spCA = (s16) ((u32) (temp_v0_15 & 0xF0) >> 4);
                                                                spCC = temp_v0_15 & 0xF;
                                                            }
                                                            do {
                                                                temp_s0_15 = &temp_s5[phi_s1_29];
                                                                Font_LoadCharNES(arg0, (*temp_s0_15 + 0x30) & 0xFF, spBC);
                                                                temp_s1_29 = phi_s1_29 + 1;
                                                                spBC += 0x80;
                                                                (temp_s6 + spDA)->unk_11F24 = (s8) (*temp_s0_15 + 0x30);
                                                                spDA += 1;
                                                                spA4 += 16.0f * sp70->unk_2098;
                                                                phi_s1_29 = temp_s1_29;
                                                            } while ((s32) temp_s1_29 < 3);
                                                            spDA += -1;
                                                        }
                                                    }
                                                } else {
block_95:
                                                    temp_a0_5 = (&gSaveContext.pictoPhoto[1244])[temp_s2];
                                                    temp_a1_9 = *(&gSaveContext + 0x37C4 + (temp_s2 * 8));
                                                    sp90 = temp_a0_5;
                                                    sp94 = temp_a1_9;
                                                    func_80159438(temp_a0_5, temp_a1_9, &spA8, temp_a3);
                                                    phi_s1_30 = 0;
                                                    phi_s2_18 = 0;
                                                    do {
                                                        if ((phi_s1_30 == 4) || ((phi_s1_30 != 2) && (phi_s1_30 != 5) && ((sp + (phi_s1_30 * 2))->unk_A8 != 0x30))) {
                                                            phi_s2_18 = 1;
                                                        }
                                                        if (phi_s2_18 != 0) {
                                                            func_80158988(arg0, (sp + (phi_s1_30 * 2))->unk_A9, &spBC, &spA4, (s16) (s32) spDA);
                                                            spDA += 1;
                                                        }
                                                        temp_s1_30 = phi_s1_30 + 1;
                                                        phi_s1_30 = temp_s1_30;
                                                    } while ((s32) temp_s1_30 < 8);
                                                    spDA += -1;
                                                }
                                            }
                                            spDA += 1;
                                            temp_s6->unk_11FEC = (s16) (sp70->unk_1FEC + 1);
                                            goto loop_1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    temp_s6->unk_11F22 = 6;
    temp_s6->unk_11FEE = 1;
    if (sp70->unk_1F0A == 3) {
        temp_s6->unk_11FFA = (s16) (sp70->unk_206A + 2);
    } else {
        temp_s6->unk_11FFA = (s16) (sp70->unk_206A + 8);
    }
    temp_t8_4 = temp_s6 + (spC6 * 2);
    temp_t8_4->unk_11F1A = 0;
    if (sp70->unk_1F18 != 0) {
        temp_t8_4->unk_11F1A = (s16) ((s32) (s16) (s32) ((sp70->unk_2098 * 16.0f * 16.0f) - spA4) / 2);
    }
    spA4 = 0.0f;
    if (temp_s2 == 0x12) {
        temp_v0_16 = sp70->unk_1F0A;
        if ((temp_v0_16 != 3) && (temp_v0_16 != 4)) {
            if ((s32) spD0 < 2) {
                temp_s6->unk_11FFA = (s16) (gGameInfo->data[1354] + sp70->unk_206A);
            } else if (spD0 == 2) {
                temp_s6->unk_11FFA = (s16) (gGameInfo->data[1355] + sp70->unk_206A);
            } else if (spD0 == 3) {
                temp_s6->unk_11FFA = (s16) (gGameInfo->data[1356] + sp70->unk_206A);
            }
        }
    } else {
        temp_v0_17 = sp70->unk_1F0A;
        if ((temp_v0_17 != 3) && (temp_v0_17 != 4)) {
            if (spD0 == 0) {
                temp_v0_18 = gGameInfo;
                phi_t1 = temp_v0_18->data[1354] + sp70->unk_206A + temp_v0_18->data[1357];
                phi_at = temp_s6 + 0x10000;
                goto block_35;
            }
            if (spD0 == 1) {
                temp_v0_19 = gGameInfo;
                temp_s6->unk_11FFA = (s16) (temp_v0_19->data[1355] + sp70->unk_206A + temp_v0_19->data[1357]);
            } else if (spD0 == 2) {
                temp_v0_20 = gGameInfo;
                phi_t1 = temp_v0_20->data[1356] + sp70->unk_206A + temp_v0_20->data[1357];
                phi_at = temp_s6 + 0x10000;
block_35:
                phi_at->unk_1FFA = phi_t1;
            }
        }
    }
    if ((temp_s2 == 0x1B) || (temp_s2 == 0x1C) || (temp_s2 == 0x1D)) {
        temp_v0_21 = spDA + 1;
        spDA = temp_v0_21;
        (temp_s6 + temp_v0_21)->unk_11F24 = (u8) (temp_s3 + sp70->unk_1FEC)->unk_11881;
        temp_v0_22 = temp_v0_21 + 1;
        spDA = temp_v0_22;
        (temp_s6 + temp_v0_22)->unk_11F24 = (u8) (temp_s3 + sp70->unk_1FEC)->unk_11882;
        temp_s6->unk_11FEC = (s16) (sp70->unk_1FEC + 3);
    }
    temp_s6->unk_11FF0 = spDA;
    temp_s6->unk_120D8 = spD0;
    if ((sp70->unk_2094 != 0) || (temp_v0_23 = sp70->unk_1F0A, (temp_v0_23 == 1)) || (temp_v0_23 == 3) || (temp_v0_23 == 6) || (temp_v0_23 == 8) || (temp_v0_23 == 9) || (temp_v0_23 == 0xB) || (sp70->unk_1F0C == 3)) {
        temp_s6->unk_11FEE = (u16) sp70->unk_1FF0;
    }
    temp_s6->unk_120C8 = (s16) sp70->unk_20CE;
    temp_s6->unk_120CA = (s16) sp70->unk_20D0;
    temp_s6->unk_120CC = (s16) sp70->unk_20D2;
}
