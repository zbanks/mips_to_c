? func_80163758(? *, void *);                       /* extern */
? func_801637B4(? *, void *, s16, void *);          /* extern */
? (*func_801638D8(? *))(void *, void *);            /* extern */
void func_801639A0();                               /* static */
void func_80163A58(void *arg0);                     /* static */
void func_80163C0C(void *arg0);                     /* static */
extern ? func_808283D8;
extern ? func_8082895C;
static ? D_801D0B70;                                /* unable to generate initializer */
static ? *D_801D0BAC = NULL;
static ? (*D_801F6C00)(void *, void *);
static ? (*D_801F6C04)(void *, void *);
GameInfo *gGameInfo;



void func_801639A0(void) {
    ? *temp_a0;

    temp_a0 = D_801D0BAC;
    if ((&D_801D0B70 + 0x1C) != temp_a0) {
        if (temp_a0 != 0) {
            func_801637B4(temp_a0);
        }
        func_80163758(&D_801D0B70 + 0x1C);
    }
}

void func_801639EC(GlobalContext *globalCtx) {
    D_801F6C00 = func_801638D8(&func_8082895C);
    D_801F6C04 = func_801638D8(&func_808283D8);
    func_800F4E20(globalCtx);
}

void func_80163A38(GlobalContext *globalCtx) {
    func_800F4F28(globalCtx);
}

void func_80163A58(void *arg0) {
    void *sp1C;
    void *sp18;
    ? *temp_a0_2;
    u16 temp_a0;
    void *temp_a1;
    void *temp_a3;
    void *temp_v1;
    void *phi_a3;
    ? *phi_a0;
    void *phi_a1;
    void *phi_a3_2;

    temp_a3 = arg0;
    temp_a1 = temp_a3 + 0x10000;
    temp_v1 = temp_a3 + 0x16D30;
    phi_a3 = temp_a3;
    phi_a1 = temp_a1;
    phi_a3_2 = temp_a3;
    if ((temp_a3->unk16F1C != 0) || (temp_a3->unk16F1E != 0)) {
        temp_a0 = temp_v1->unk1EC;
        if ((temp_a0 == 1) || (temp_a0 == 0x13)) {
            sp1C = temp_v1;
            if (ShrinkWindow_GetLetterboxMagnitude() == 0) {
                gGameInfo->data[190] = 1;
                temp_v1->unk200 = 0;
                temp_v1->unk208 = 0;
                temp_v1->unk1EC = (u16) (temp_v1->unk1EC + 1);
                return;
            }
            // Duplicate return node #22. Try simplifying control flow for better match
            return;
        }
        if (temp_a0 == 8) {
            gGameInfo->data[190] = 1;
            temp_v1->unk200 = 0;
            temp_v1->unk208 = 0;
            temp_v1->unk1EC = (u16) (temp_v1->unk1EC + 1);
            return;
        }
        if ((temp_a0 == 2) || (temp_a0 == 9) || (temp_a0 == 0x14)) {
            if (gGameInfo->data[190] == 3) {
                temp_v1->unk1EC = (u16) (temp_a0 + 1);
                return;
            }
            // Duplicate return node #22. Try simplifying control flow for better match
            return;
        }
        if (temp_a0 != 0) {
            temp_a0_2 = D_801D0BAC;
            phi_a0 = temp_a0_2;
            if (&D_801D0B70 != temp_a0_2) {
                if (temp_a0_2 != 0) {
                    sp18 = temp_a1;
                    arg0 = temp_a3;
                    func_801637B4(temp_a0_2, temp_a1, 1, temp_a3);
                    phi_a3 = arg0;
                }
                sp18 = temp_a1;
                arg0 = phi_a3;
                func_80163758(&D_801D0B70, temp_a1);
                phi_a0 = D_801D0BAC;
                phi_a1 = temp_a1;
                phi_a3_2 = arg0;
            }
            if (&D_801D0B70 == phi_a0) {
                sp18 = phi_a1;
                D_801F6C00(phi_a3_2, phi_a1);
                if ((phi_a1->unk6F1C == 0) && (phi_a1->unk6F1E == 0)) {
                    func_801637B4(&D_801D0B70, phi_a1);
                    func_801639A0();
                }
            }
        }
        // Duplicate return node #22. Try simplifying control flow for better match
    }
}

void func_80163C0C(void *arg0) {
    u16 temp_v0;

    if ((gGameInfo->data[190] == 3) && (((temp_v0 = arg0->unk16F1C, (((s32) temp_v0 < 4) == 0)) && ((s32) temp_v0 < 8)) || (((s32) temp_v0 >= 0xB) && ((s32) temp_v0 < 0x1B))) && (&D_801D0B70 == D_801D0BAC)) {
        D_801F6C04();
    }
}

