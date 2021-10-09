struct _mips2c_stack_TransitionCircle_Destroy {};   /* size 0x0 */

struct _mips2c_stack_TransitionCircle_Draw {
    /* 0x00 */ char pad_0[0x4C];
    /* 0x4C */ void *sp4C;                          /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_TransitionCircle_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_TransitionCircle_IsDone {};    /* size 0x0 */

struct _mips2c_stack_TransitionCircle_SetColor {};  /* size 0x0 */

struct _mips2c_stack_TransitionCircle_SetType {};   /* size 0x0 */

struct _mips2c_stack_TransitionCircle_Start {};     /* size 0x0 */

struct _mips2c_stack_TransitionCircle_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80164C14 {
    /* 0x00 */ s32 sp0;                             /* inferred */
    /* 0x04 */ char pad_4[0x74];
};                                                  /* size = 0x78 */

void TransitionCircle_Destroy(s32 arg0);            /* static */
void TransitionCircle_Draw(void *arg0, void **arg1); /* static */
void TransitionCircle_Init(void *arg0);             /* static */
u8 TransitionCircle_IsDone(void *arg0);             /* static */
void TransitionCircle_SetColor(s32 *arg0, s32 arg1); /* static */
void TransitionCircle_SetType(void *arg0, s32 arg1); /* static */
void TransitionCircle_Start(void *arg0);            /* static */
void TransitionCircle_Update(void *arg0);           /* static */
void func_80164C14(void **arg0, s32 arg1, s32 arg2, ? arg3, s32 arg4, s32 arg5, f32 arg6); /* static */
static ? D_801D0D00;                                /* unable to generate initializer */
static ? D_801DE890;                                /* unable to generate initializer; const */
s16 D_801FBBCC;
s16 D_801FBBCE;
s32 gScreenHeight = 0xF0;
s32 gScreenWidth = 0x140;

void TransitionCircle_Start(void *arg0) {
    arg0->unk_8 = 0.1f;
    if (arg0->unk_14 == 0) {
        arg0->unk_10 = 0.0f;
        arg0->unk_C = 1.0f;
    } else {
        arg0->unk_C = 0.0f;
        arg0->unk_10 = 1.0f;
    }
    arg0->unk_4 = (f32) arg0->unk_C;
}

void TransitionCircle_Init(void *arg0) {
    bzero(arg0, 0x20);
    arg0->unk_15 = 1;
    arg0->unk_18 = &D_801DE890;
    arg0->unk_1C = 6;
    arg0->unk_1D = 6;
    arg0->unk_1E = 4;
    arg0->unk_1F = 0;
}

void TransitionCircle_Destroy(s32 arg0) {

}

void TransitionCircle_Update(void *arg0) {
    f32 temp_a1;
    f32 temp_a2;
    void *temp_a3;

    temp_a3 = arg0;
    temp_a1 = temp_a3->unk_10;
    temp_a2 = temp_a3->unk_8;
    arg0 = temp_a3;
    arg0->unk_16 = Math_StepToF(temp_a3 + 4, temp_a1, temp_a2);
}

void TransitionCircle_SetColor(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void TransitionCircle_SetType(void *arg0, s32 arg1) {
    if ((arg1 & 0x80) != 0) {
        arg0->unk_15 = (s8) (arg1 & 1);
        return;
    }
    if (arg1 == 1) {
        arg0->unk_14 = 1;
        return;
    }
    arg0->unk_14 = 0;
}

void func_80164C14(void **arg0, s32 arg1, s32 arg2, ? arg3, s32 arg4, s32 arg5, f32 arg6) {
    s32 sp0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f16;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t5;
    s32 temp_t9;
    s32 temp_v1;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    s32 phi_t3;
    s32 phi_t5;
    s32 phi_t2;
    f32 phi_f0;
    f32 phi_f2;
    s32 phi_v1;
    s32 phi_a0;

    temp_v0 = *arg0;
    temp_a0 = (arg2 & 7) << 0x15;
    temp_v0->unk_0 = (s32) (temp_a0 | 0xFD000000 | 0x100000);
    temp_v0->unk_4 = arg1;
    temp_v0_2 = temp_v0 + 8;
    temp_a1 = temp_a0 | 0xF5000000;
    temp_a2 = (arg5 & 0xF) << 0xE;
    temp_a3 = (arg4 & 0xF) * 0x10;
    temp_v0_2->unk_0 = (s32) (temp_a1 | 0x100000);
    temp_v0_2->unk_4 = (s32) (temp_a2 | 0x70C0000 | 0x300 | temp_a3);
    temp_v0_3 = temp_v0_2 + 8;
    temp_v0_3->unk_0 = 0xE6000000;
    temp_v0_3->unk_4 = 0;
    temp_v0_4 = temp_v0_3 + 8;
    temp_a0_2 = 1 << arg5;
    temp_v1 = 1 << arg4;
    temp_v0_4->unk_0 = 0xF3000000;
    temp_v0_5 = temp_v0_4 + 8;
    temp_t5 = ((s32) ((temp_v1 * temp_a0_2) + 3) >> 2) - 1;
    if (temp_t5 < 0x7FF) {
        phi_t2 = temp_t5;
    } else {
        phi_t2 = 0x7FF;
    }
    temp_t9 = temp_v1 / 0x10;
    sp0 = temp_t9;
    if (temp_t9 <= 0) {
        phi_t3 = 1;
    } else {
        phi_t3 = sp0;
    }
    temp_v0_6 = temp_v0_5 + 8;
    if (sp0 <= 0) {
        phi_t5 = 1;
    } else {
        phi_t5 = sp0;
    }
    temp_v0_4->unk_4 = (s32) ((((s32) (phi_t3 + 0x7FF) / phi_t5) & 0xFFF) | 0x7000000 | ((phi_t2 & 0xFFF) << 0xC));
    temp_v0_5->unk_0 = 0xE7000000;
    temp_v0_5->unk_4 = 0;
    temp_v0_6->unk_4 = (s32) (temp_a2 | 0xC0000 | 0x300 | temp_a3);
    temp_v0_6->unk_0 = (s32) (temp_a1 | ((((s32) ((temp_v1 >> 1) + 7) >> 3) & 0x1FF) << 9));
    temp_v0_7 = temp_v0_6 + 8;
    temp_v0_7->unk_4 = (s32) (((((temp_v1 - 1) * 4) & 0xFFF) << 0xC) | (((temp_a0_2 - 1) * 4) & 0xFFF));
    temp_v0_7->unk_0 = 0xF2000000;
    temp_v0_8 = temp_v0_7 + 8;
    temp_v0_8->unk_0 = (s32) (((((0xA0 - temp_v1) * 4) & 0xFFF) << 0xC) | 0xF2000000 | (((0x78 - temp_a0_2) * 4) & 0xFFF));
    temp_v0_8->unk_4 = (s32) (((((temp_v1 + 0x9F) * 4) & 0xFFF) << 0xC) | (((temp_a0_2 + 0x77) * 4) & 0xFFF));
    temp_v0_9 = temp_v0_8 + 8;
    temp_v0_10 = temp_v0_9 + 8;
    temp_f12 = 1.0f - (1.0f / arg6);
    temp_f0 = (temp_f12 * 160.0f) + 70.0f;
    temp_f16 = (temp_f12 * 120.0f) + 50.0f;
    phi_f0 = temp_f0;
    phi_f2 = temp_f16;
    if (temp_f0 < -1023.0f) {
        phi_f0 = -1023.0f;
    }
    phi_v1 = 0;
    if (temp_f16 < -1023.0f) {
        phi_f2 = -1023.0f;
    }
    if ((phi_f0 <= -1023.0f) || (phi_f2 <= -1023.0f)) {
        phi_a0 = 0;
    } else {
        phi_v1 = (s32) (((320.0f - (2.0f * phi_f0)) / (f32) gScreenWidth) * 1024.0f);
        phi_a0 = (s32) (((240.0f - (2.0f * phi_f2)) / (f32) gScreenHeight) * 1024.0f);
    }
    temp_v0_9->unk_0 = (s32) ((((D_801FBBCC * 4) & 0xFFF) << 0xC) | 0xE4000000 | ((D_801FBBCE * 4) & 0xFFF));
    temp_v0_9->unk_4 = 0;
    temp_v0_10->unk_0 = 0xE1000000;
    temp_v0_11 = temp_v0_10 + 8;
    temp_v0_10->unk_4 = (s32) (((s32) (phi_f0 * 32.0f) << 0x10) | ((s32) (phi_f2 * 32.0f) & 0xFFFF));
    temp_v0_11->unk_0 = 0xF1000000;
    temp_v0_11->unk_4 = (s32) ((phi_v1 << 0x10) | (phi_a0 & 0xFFFF));
    temp_v0_12 = temp_v0_11 + 8;
    temp_v0_12->unk_0 = 0xE7000000;
    temp_v0_12->unk_4 = 0;
    *arg0 = temp_v0_12 + 8;
}

void TransitionCircle_Draw(void *arg0, void **arg1) {
    void *sp4C;
    void *temp_t1;
    void *temp_t4;
    void *temp_t4_2;
    void *temp_t8;
    void *temp_t8_2;
    void *temp_v0;

    sp4C = *arg1;
    temp_t8 = sp4C;
    sp4C = temp_t8 + 8;
    temp_t8->unk_4 = 0;
    temp_t8->unk_0 = 0xE7000000;
    temp_t1 = sp4C;
    sp4C = temp_t1 + 8;
    temp_t1->unk_4 = &D_801D0D00;
    temp_t1->unk_0 = 0xDE000000;
    temp_v0 = sp4C;
    sp4C = temp_v0 + 8;
    temp_v0->unk_0 = (s32) (arg0->unk_3 | 0xFA000000);
    temp_v0->unk_4 = (s32) ((arg0->unk_0 << 0x18) | (arg0->unk_1 << 0x10) | (arg0->unk_2 << 8) | 1);
    temp_t8_2 = sp4C;
    if (arg0->unk_15 == 0) {
        temp_t4 = sp4C;
        sp4C = temp_t4 + 8;
        temp_t4->unk_4 = 0xFF39F6FB;
        temp_t4->unk_0 = 0xFCFF9DFF;
    } else {
        sp4C = temp_t8_2 + 8;
        temp_t8_2->unk_0 = 0xFCFFEDFF;
        temp_t8_2->unk_4 = 0xFFD996CB;
    }
    func_80164C14(&sp4C, arg0->unk_18, 4, 0, (s32) arg0->unk_1C, (s32) arg0->unk_1D, arg0->unk_4);
    temp_t4_2 = sp4C;
    sp4C = temp_t4_2 + 8;
    temp_t4_2->unk_4 = 0;
    temp_t4_2->unk_0 = 0xE7000000;
    *arg1 = sp4C;
}

u8 TransitionCircle_IsDone(void *arg0) {
    return arg0->unk_16;
}
