? func_80174F24(void (*)(s32), ?);                  /* extern */
? func_80174F44(void (*)(s32), ?);                  /* extern */
? func_80175474(? *);                               /* extern */
? func_801754C0(?);                                 /* extern */
? func_80182CE0(? *);                               /* extern */
? func_80183020(? *);                               /* extern */
? func_80183058(? *);                               /* extern */
void func_8013EC10(s32 arg0);                       /* static */
void func_8013EC44(f32 arg0, s32 arg1, s32 arg2, s32 arg3); /* static */
void func_8013EE04();                               /* static */
void func_8013EE24();                               /* static */
void func_8013EE38();                               /* static */
void func_8013EE48(s32 arg0);                       /* static */
static ? D_801F69D0;
static ? D_801F6A10;
static s8 D_801F6AD4;
static s8 D_801F6AD5;
static s8 D_801F6ADA;



void func_8013EC10(s32 arg0) {
    func_80182CE0(&D_801F69D0);
    func_80175474(&D_801F69D0);
}

void func_8013EC44(f32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 temp_a1;
    s8 temp_a3;
    s32 phi_v0;

    temp_a3 = arg3 & 0xFF;
    temp_a1 = arg1 & 0xFF;
    if (arg0 > 1000000.0f) {
        phi_v0 = 0x3E8;
    } else {
        phi_v0 = (s32) sqrtf(arg0);
    }
    if ((phi_v0 < 0x3E8) && (temp_a1 != 0) && (temp_a3 != 0)) {
        temp_a0 = temp_a1 - ((s32) (phi_v0 * 0xFF) / 0x3E8);
        if (temp_a0 > 0) {
            D_801F6ADA = (s8) temp_a0;
            D_801F69D0.unk10B = (s8) (arg2 & 0xFF);
            D_801F69D0.unk10C = temp_a3;
        }
    }
}

void func_8013ECE0(f32 xyzDistToPlayerSq, u8 arg1, u8 arg2, u8 arg3) {
    ? *temp_a1_2;
    s32 temp_a0;
    s32 temp_a1;
    s8 temp_a3;
    s32 phi_v0;
    ? *phi_a1;

    temp_a3 = arg3 & 0xFF;
    temp_a1 = arg1 & 0xFF;
    if (xyzDistToPlayerSq > 1000000.0f) {
        phi_v0 = 0x3E8;
    } else {
        phi_v0 = (s32) sqrtf(xyzDistToPlayerSq);
    }
    if ((phi_v0 < 0x3E8) && (temp_a1 != 0) && (temp_a3 != 0)) {
        phi_a1 = &D_801F69D0;
loop_7:
        if (phi_a1->unk4 == 0) {
            temp_a0 = temp_a1 - ((s32) (phi_v0 * 0xFF) / 0x3E8);
            if (temp_a0 > 0) {
                phi_a1->unk4 = (u8) temp_a0;
                phi_a1->unk44 = (s8) (arg2 & 0xFF);
                phi_a1->unk84 = temp_a3;
                return;
            }
            // Duplicate return node #11. Try simplifying control flow for better match
            return;
        }
        temp_a1_2 = phi_a1 + 1;
        phi_a1 = temp_a1_2;
        if (temp_a1_2 == &D_801F6A10) {
            // Duplicate return node #11. Try simplifying control flow for better match
            return;
        }
        goto loop_7;
    }
}

void func_8013ED9C(void) {
    func_80183020(&D_801F69D0);
    func_80174F24(func_8013EC10, 0);
}

void func_8013EDD0(void) {
    func_80174F44(func_8013EC10, 0);
    func_80183058(&D_801F69D0);
}

void func_8013EE04(void) {
    func_801754C0(0);
}

void func_8013EE24(void) {
    D_801F6AD4 = 2;
}

void func_8013EE38(void) {
    D_801F6AD4 = 0;
}

void func_8013EE48(s32 arg0) {
    D_801F6AD5 = arg0 != 0;
}

