struct _mips2c_stack_TransitionFade_Destroy {};     /* size 0x0 */

struct _mips2c_stack_TransitionFade_Draw {};        /* size 0x0 */

struct _mips2c_stack_TransitionFade_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_TransitionFade_IsDone {};      /* size 0x0 */

struct _mips2c_stack_TransitionFade_SetColor {};    /* size 0x0 */

struct _mips2c_stack_TransitionFade_SetType {};     /* size 0x0 */

struct _mips2c_stack_TransitionFade_Start {};       /* size 0x0 */

struct _mips2c_stack_TransitionFade_Update {
    /* 0x00 */ char pad_0[0x2A];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

void TransitionFade_Destroy(s32 arg0);              /* static */
void TransitionFade_Draw(void *arg0, void **arg1);  /* static */
u8 TransitionFade_IsDone(void *arg0);               /* static */
void TransitionFade_SetColor(void *arg0, s32 arg1); /* static */
void TransitionFade_SetType(void *arg0, s32 arg1);  /* static */
void TransitionFade_Start(void *arg0);              /* static */
void TransitionFade_Update(void *arg0, s32 arg1);   /* static */
extern ? D_0E0002E0;
static ? D_801D0CB0;                                /* unable to generate initializer */
GameInfo *gGameInfo;
SaveContext gSaveContext;

void TransitionFade_Start(void *arg0) {
    u8 temp_v0;

    temp_v0 = arg0->unk_0;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {

            } else {
                goto block_7;
            }
        } else {
            arg0->unk_8 = 0;
            if (arg0->unk_2 != 0) {
                arg0->unk_7 = 0xFF;
            } else {
block_7:
                arg0->unk_7 = 0;
            }
        }
    }
    arg0->unk_1 = 0;
}

void *TransitionFade_Init(void *param_1) {
    bzero(param_1, 0xC);
    return param_1;
}

void TransitionFade_Destroy(s32 arg0) {

}

void TransitionFade_Update(void *arg0, s32 arg1) {
    s16 sp2A;
    GameInfo *temp_v0_2;
    f32 temp_f6;
    s16 temp_v1;
    s32 temp_f8;
    s32 temp_v1_2;
    u16 temp_t7;
    u8 temp_v0;
    u8 temp_v0_3;
    s32 phi_v0;
    u32 phi_v1;
    f32 phi_f6;

    temp_v0 = arg0->unk_0;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                return;
            }
            temp_v0_2 = gGameInfo;
            sp2A = (s16) arg0->unk_7;
            temp_v1 = temp_v0_2->data[1682];
            if (temp_v1 != 0) {
                if ((s32) temp_v1 < 0) {
                    arg0 = arg0;
                    if (Math_StepToS(&sp2A, 0xFF, 0xFF) != 0) {
                        gGameInfo->data[1682] = 0x96;
                    }
                } else {
                    arg0 = arg0;
                    Math_StepToS(&temp_v0_2->data[1682], 0x14, 0x3C);
                    if (Math_StepToS(&sp2A, 0, gGameInfo->data[1682]) != 0) {
                        gGameInfo->data[1682] = 0;
                        arg0->unk_1 = 1;
                    }
                }
            }
            arg0->unk_7 = (s8) sp2A;
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return;
        }
        temp_t7 = arg0->unk_8 + arg1;
        arg0->unk_8 = temp_t7;
        temp_v0_3 = gSaveContext.fadeDuration;
        temp_v1_2 = temp_t7 & 0xFFFF;
        phi_v0 = (s32) temp_v0_3;
        phi_v1 = (u32) temp_v1_2;
        if (temp_v1_2 >= (s32) temp_v0_3) {
            arg0->unk_8 = (u16) temp_v0_3;
            arg0->unk_1 = 1;
            phi_v0 = (s32) gSaveContext.fadeDuration;
            phi_v1 = temp_v0_3 & 0xFFFF;
        }
        temp_f6 = (f32) phi_v0;
        phi_f6 = temp_f6;
        if (phi_v0 < 0) {
            phi_f6 = temp_f6 + 4294967296.0f;
        }
        temp_f8 = (s32) ((255.0f * (f32) phi_v1) / phi_f6);
        if (arg0->unk_2 != 0) {
            arg0->unk_7 = (u8) (0xFF - temp_f8);
            return;
        }
        arg0->unk_7 = (u8) temp_f8;
    }
}

void TransitionFade_Draw(void *arg0, void **arg1) {
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (arg0->unk_7 != 0) {
        temp_v1 = *arg1;
        temp_v1->unk_0 = 0xDE000000;
        temp_v1->unk_4 = &D_801D0CB0;
        temp_v1_2 = temp_v1 + 8;
        temp_v1_2->unk_0 = 0xFA000000;
        temp_v0 = arg0 + 4;
        temp_v1_2->unk_4 = (s32) ((temp_v0->unk_0 << 0x18) | (temp_v0->unk_1 << 0x10) | (temp_v0->unk_2 << 8) | temp_v0->unk_3);
        temp_v1_3 = temp_v1_2 + 8;
        temp_v1_3->unk_4 = &D_0E0002E0;
        temp_v1_3->unk_0 = 0xDE000000;
        *arg1 = temp_v1_3 + 8;
    }
}

u8 TransitionFade_IsDone(void *arg0) {
    return arg0->unk_1;
}

void TransitionFade_SetColor(void *arg0, s32 arg1) {
    arg0->unk_4 = arg1;
}

void TransitionFade_SetType(void *arg0, s32 arg1) {
    if (arg1 == 1) {
        arg0->unk_0 = 1;
        arg0->unk_2 = 1;
        return;
    }
    if (arg1 == 2) {
        arg0->unk_0 = 1;
        arg0->unk_2 = 0;
        return;
    }
    if (arg1 == 3) {
        arg0->unk_0 = 2;
        return;
    }
    arg0->unk_0 = 0;
}
