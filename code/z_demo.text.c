CRASHED

typedef struct {
    /* 0x00 */ u16 unk0;
    /* 0x02 */ u16 startFrame;
    /* 0x04 */ u16 endFrame;
    /* 0x06 */ char pad_6[0x2];
    /* 0x08 */ u16 unk_8;                           /* inferred */
    /* 0x0A */ char pad_A[0x2];
    /* 0x0C */ s32 unk_C;                           /* inferred */
    /* 0x10 */ s32 unk_10;                          /* inferred */
    /* 0x14 */ s32 unk_14;                          /* inferred */
    /* 0x18 */ s32 unk_18;                          /* inferred */
    /* 0x1C */ s32 unk_1C;                          /* inferred */
    /* 0x20 */ s32 unk_20;                          /* inferred */
    /* 0x24 */ char pad_24[0xC];                    /* maybe part of unk_20[4]? */
} CsCmdActorAction;                                 /* size = 0x30 */

typedef struct {
    /* 0x0 */ char pad_0[0x4];
    /* 0x4 */ CsCmdUnk5A unk_4;                     /* inferred */
} CsCmdUnk5A;                                       /* size = 0x8 */

struct _mips2c_stack_Cutscene_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Cutscene_Nop800EA210 {};       /* size 0x0 */

struct _mips2c_stack_Cutscene_StepCutscene1 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_Cutscene_StepCutscene2 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EA0D4 {};              /* size 0x0 */

struct _mips2c_stack_func_800EA0EC {};              /* size 0x0 */

struct _mips2c_stack_func_800EA220 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EA258 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EA2B8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EABAC {};              /* size 0x0 */

struct _mips2c_stack_func_800EAC08 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EAC44 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EAC94 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EAD14 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EAD48 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EAD7C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EADB0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EAECC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EAF20 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800EAFE0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EB1DC {};              /* size 0x0 */

struct _mips2c_stack_func_800EB364 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800EB4B4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EB6F8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EBB68 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EBCD0 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Actor *sp34;                         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800EBD60 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EC678 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800EC6D4 {};              /* size 0x0 */

struct _mips2c_stack_func_800EC924 {
    /* 0x00 */ char pad_0[0x1E];
    /* 0x1E */ u16 sp1E;                            /* inferred */
    /* 0x20 */ char pad_20[0x7];                    /* maybe part of sp1E[4]? */
    /* 0x27 */ u8 sp27;                             /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_800ECD7C {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800ED980 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800ED9C4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EDA04 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EDA84 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800EDDBC {};              /* size 0x0 */

struct _mips2c_stack_func_800EDDCC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EDE34 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_800EDF24 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EDF78 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_800EE0CC {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_800EE1D8 {};              /* size 0x0 */

struct _mips2c_stack_func_800EE200 {};              /* size 0x0 */

struct _mips2c_stack_func_800EE29C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800EE2F4 {};              /* size 0x0 */

struct _mips2c_stack_nop_800EDDB0 {};               /* size 0x0 */

f32 func_800F5A8C(u16, u16, u16, CsCmdUnk9B *, u16, GlobalContext *); /* extern */
? func_8016119C(Camera *, ? *);                     /* extern */
? func_80161998(CsCmdUnk5A *, ? *);                 /* extern */
? func_80161BE0(?);                                 /* extern */
? func_80161C0C();                                  /* extern */
? func_80165658(u32);                               /* extern */
? func_8016566C(?, CsCmdBase *);                    /* extern */
? func_80165690();                                  /* extern */
s32 func_8016A168();                                /* extern */
? func_801A25E4(u16, s32);                          /* extern */
? func_801A2C88(s32);                               /* extern */
? func_801A2D54(s32);                               /* extern */
s32 func_801A3950(?, ?, GlobalContext *);           /* extern */
? func_801A3F54(?);                                 /* extern */
? func_801A4428(?);                                 /* extern */
? func_801A4A28(u8, GlobalContext *);               /* extern */
s32 func_800EC6D4(GlobalContext *, CsCmdTextbox *); /* static */
void func_800EDDBC(s32 arg0, ? arg1);               /* static */
static u16 D_801BB124 = 0;
static u16 D_801BB128 = 0;
static u8 D_801BB12C = 0;
static s32 D_801BB160 = 0;
static u16 D_801F4D40;
static ? D_801F4D48;
static u16 D_801F4DC8;
static u16 D_801F4DCA;
static ? D_801F4DCC;
static ? D_801F4DDC;
static s8 D_801F4DE0;
static s16 D_801F4DE2;
u32 gBitFlags[32] = {
    1,
    2,
    4,
    8,
    0x10,
    0x20,
    0x40,
    0x80,
    0x100,
    0x200,
    0x400,
    0x800,
    0x1000,
    0x2000,
    0x4000,
    0x8000,
    0x10000,
    0x20000,
    0x40000,
    0x80000,
    0x100000,
    0x200000,
    0x400000,
    0x800000,
    0x1000000,
    0x2000000,
    0x4000000,
    0x8000000,
    0x10000000,
    0x20000000,
    0x40000000,
    0x80000000,
};
GameInfo *gGameInfo;
u8 gItemSlots[80] = {
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    0xA,
    0xB,
    0xC,
    0xD,
    0xE,
    0xF,
    0x10,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    0x12,
    5,
    5,
    5,
    5,
    5,
    0xB,
    0xB,
    0x11,
    0x11,
    0x11,
    0x1D,
    0x23,
    0x29,
    0x2F,
    0x28,
    0x26,
    0x19,
    0x20,
    0x1E,
    0x2C,
    0x24,
    0x25,
    0x18,
    0x27,
    0x1C,
    0x2B,
    0x21,
    0x2A,
    0x2D,
    0x1B,
    0x1F,
    0x1A,
    0x22,
    0x2E,
    1,
    1,
    1,
    0,
    0,
    0,
};
SaveContext gSaveContext;
void (*sCsStateHandlers1[5])(GlobalContext *, CutsceneContext *) = {
    Cutscene_Nop800EA210,
    func_800EA258,
    Cutscene_Nop800EA210,
    func_800ED9C4,
    Cutscene_Nop800EA210,
};
void (*sCsStateHandlers2[5])(GlobalContext *, CutsceneContext *) = {
    Cutscene_Nop800EA210,
    func_800EA2B8,
    func_800ED980,
    func_800EDA04,
    func_800ED980,
};

void Cutscene_Init(GlobalContext *globalCtx, CutsceneContext *csCtx) {
    ? *temp_v0;
    ? *phi_v0;

    csCtx->state = 0;
    csCtx->frames = 0;
    csCtx->unk_0C = 0.0f;
    globalCtx->csCtx.sceneCsCount = 0;
    globalCtx->csCtx.unk_12 = 0;
    D_801F4DCA = 0;
    D_801F4DCA = 0;
    phi_v0 = &D_801F4DCC;
    do {
        temp_v0 = phi_v0 + 8;
        temp_v0->unk_-6 = 0;
        temp_v0->unk_-4 = 0;
        temp_v0->unk_-2 = 0;
        temp_v0->unk_-8 = 0;
        phi_v0 = temp_v0;
    } while (temp_v0 != &D_801F4DDC);
    D_801F4DE0 = 0;
    func_801A3F54(0);
}

void func_800EA0D4(GlobalContext *globalCtx, CutsceneContext *csCtx) {
    csCtx->state = 1;
    csCtx->linkAction = NULL;
}

void func_800EA0EC(GlobalContext *globalCtx, CutsceneContext *csCtx) {
    if (csCtx->state != 4) {
        csCtx->state = 3;
    }
}

void Cutscene_StepCutscene1(GlobalContext *globalCtx, CutsceneContext *csCtx) {
    if (gSaveContext.cutscene < 0xFFF0) {
        sCsStateHandlers1[csCtx->state](globalCtx, csCtx);
    }
}

void Cutscene_StepCutscene2(GlobalContext *globalCtx, CutsceneContext *csCtx) {
    u8 temp_v0;
    u8 phi_v0;

    temp_v0 = gSaveContext.cutsceneTrigger;
    phi_v0 = temp_v0;
    if ((temp_v0 != 0) && (globalCtx->sceneLoadFlag == 0x14)) {
        gSaveContext.cutsceneTrigger = 0;
        phi_v0 = 0 & 0xFF;
    }
    if ((phi_v0 != 0) && (csCtx->state == 0)) {
        gSaveContext.cutscene = 0xFFFD;
        gSaveContext.cutsceneTrigger = 1;
    }
    if (gSaveContext.cutscene >= 0xFFF0) {
        func_800EDA84(globalCtx, csCtx);
        sCsStateHandlers2[csCtx->state](globalCtx, csCtx);
    }
}

void Cutscene_Nop800EA210(GlobalContext *globalCtx, CutsceneContext *csCtx) {

}

s32 func_800EA220(GlobalContext *globalCtx, CutsceneContext *csCtx, f32 target) {
    return Math_StepToF(&csCtx->unk_0C, target, 0.1f);
}

void func_800EA258(GlobalContext *globalCtx, CutsceneContext *csCtx) {
    Interface_ChangeAlpha(1U);
    ShrinkWindow_SetLetterboxTarget(0x20);
    if (func_800EA220(globalCtx, csCtx, 1.0f) != 0) {
        func_801A3F54(1);
        csCtx->state += 1;
    }
}

void func_800EA2B8(GlobalContext *globalCtx, CutsceneContext *csCtx) {
    func_800ED980(globalCtx, csCtx);
    Interface_ChangeAlpha(1U);
    ShrinkWindow_SetLetterboxTarget(0x20);
    if (func_800EA220(globalCtx, csCtx, 1.0f) != 0) {
        func_801A3F54(1);
        csCtx->state += 1;
    }
}

/*
Failed to decompile function func_800EA324:

Label L800EA37C refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void func_800EABAC(GlobalContext *globalCtx, CutsceneContext *csCtx, CsCmdEnvLighting *cmd) {
    u16 temp_v0;

    if (cmd->startFrame == csCtx->frames) {
        temp_v0 = cmd->setting;
        if (temp_v0 != 0x20) {
            globalCtx->envCtx.unk_C3 = temp_v0 - 1;
            globalCtx->envCtx.unk_DC = 1.0f;
            return;
        }
        globalCtx->envCtx.unk_C3 = 0xFF;
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_800EAC08(GlobalContext *globalCtx, CutsceneContext *csCtx, CsCmdMusicChange *cmd) {
    if (cmd->startFrame == csCtx->frames) {
        func_801A2C88((cmd->sequence - 1) & 0xFFFF);
    }
}

void func_800EAC44(GlobalContext *globalCtx, CutsceneContext *csCtx, CsCmdMusicChange *cmd) {
    u16 temp_v0;

    temp_v0 = csCtx->frames;
    if (((s32) temp_v0 >= (s32) cmd->startFrame) && ((s32) cmd->endFrame >= (s32) temp_v0)) {
        func_801A2D54((cmd->sequence - 1) & 0xFFFF);
    }
}

void func_800EAC94(GlobalContext *globalCtx, CutsceneContext *csCtx, CsCmdMusicFade *cmd) {
    s32 temp_v1_2;
    u16 temp_a0;
    u16 temp_v0;
    u16 temp_v1;

    temp_v0 = cmd->startFrame;
    temp_v1 = csCtx->frames;
    if ((temp_v0 == temp_v1) && (temp_a0 = cmd->endFrame, (((s32) temp_v1 < (s32) temp_a0) != 0))) {
        temp_v1_2 = (temp_a0 - temp_v0) & 0xFF;
        if (cmd->type == 2) {
            func_801A89A8((temp_v1_2 << 0x10) | 0x110000FF);
            return;
        }
        func_801A89A8((temp_v1_2 << 0x10) | 0x100000FF);
        /* Duplicate return node #5. Try simplifying control flow for better match */
    }
}

void func_800EAD14(GlobalContext *globalCtx, CutsceneContext *csCtx, CsCmdBase *cmd) {
    if (cmd->startFrame == csCtx->frames) {
        func_801A4A28(globalCtx->soundCtx.nightSeqIndex, globalCtx);
    }
}

void func_800EAD48(GlobalContext *globalCtx, CutsceneContext *csCtx, CsCmdBase *cmd) {
    if (cmd->startFrame == csCtx->frames) {
        func_801A4428(2);
    }
}

void func_800EAD7C(GlobalContext *globalCtx, CutsceneContext *csCtx, CsCmdBase *cmd) {
    if (cmd->startFrame == csCtx->frames) {
        func_801A4428(1);
    }
}

void func_800EADB0(GlobalContext *globalCtx, CutsceneContext *csCtx, CsCmdBase *cmd) {
    s32 temp_a1;
    u16 temp_a0;
    u16 temp_t8;
    s32 phi_a1;

    if (cmd->startFrame == csCtx->frames) {
        temp_a1 = (gSaveContext.day - 1) & 0xFF;
        phi_a1 = temp_a1;
        if (temp_a1 >= 3) {
            phi_a1 = 0;
        }
        temp_t8 = cmd->base;
        switch (temp_t8) {
        case 1:
            func_801A246C(0U, 1U);
            return;
        case 2:
            func_801A246C(0U, 0U);
            return;
        case 3:
            func_801A246C(0U, 2U);
            return;
        case 4:
            func_801A246C(4U, 1U);
            return;
        case 5:
            func_801A246C(4U, 0U);
            return;
        case 6:
            func_801A246C(4U, 2U);
            return;
        case 7:
            D_801F4D40 = func_801A8A50(0);
            return;
        case 8:
            temp_a0 = D_801F4D40;
            if (temp_a0 != 0xFFFF) {
                D_801F4D40 = temp_a0;
                func_801A25E4(temp_a0, phi_a1);
            }
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return;
        }
    } else {
    default:
    }
}

void func_800EAECC(GlobalContext *globalCtx, CutsceneContext *csCtx, CsCmdBase *cmd) {
    u16 temp_a1;
    u16 temp_v0;
    u16 temp_v1;

    temp_v1 = cmd->startFrame;
    temp_v0 = csCtx->frames;
    if (temp_v1 == temp_v0) {
        temp_a1 = cmd->endFrame;
        if ((s32) temp_v0 < (s32) temp_a1) {
            func_801A89A8((((temp_a1 - temp_v1) & 0xFF) << 0x10) | 0x140000FF);
        }
    }
}

void func_800EAF20(GlobalContext *globalCtx, CutsceneContext *csCtx, CsCmdUnk190 *cmd) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v1;

    temp_v0 = cmd->unk0;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            return;
        }
        temp_v0_2 = csCtx->frames;
        temp_v1 = cmd->startFrame;
        if (((s32) temp_v0_2 >= (s32) temp_v1) && ((s32) cmd->endFrame >= (s32) temp_v0_2) && ((temp_v1 == temp_v0_2) || ((globalCtx->state.frames & 0x3F) == 0))) {
            func_8013ECE0(0.0f, cmd->unk6, cmd->unk7, cmd->unk8);
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return;
    }
    if (cmd->startFrame == csCtx->frames) {
        func_8013ECE0(0.0f, cmd->unk6, cmd->unk7, cmd->unk8);
    }
}

void func_800EAFE0(GlobalContext *globalCtx, CutsceneContext *csCtx, CsCmdUnk9B *cmd) {
    CsCmdUnk9B *temp_a3;
    f32 temp_f0;
    u16 temp_a0;
    u16 temp_a1;
    u16 temp_v0;
    u16 temp_v0_2;

    temp_a3 = cmd;
    temp_v0 = csCtx->frames;
    if (((s32) temp_v0 >= (s32) temp_a3->startFrame) && ((s32) temp_a3->endFrame >= (s32) temp_v0) && ((globalCtx->envCtx.unk_E5 = 1, temp_a1 = temp_a3->startFrame, temp_a0 = temp_a3->endFrame, cmd = temp_a3, temp_f0 = func_800F5A8C(temp_a0, temp_a1, csCtx->frames, temp_a3), temp_v0_2 = cmd->unk0, (temp_v0_2 == 1)) || (temp_v0_2 == 2))) {
        globalCtx->envCtx.unk_E6[0] = cmd->unk6;
        globalCtx->envCtx.unk_E6[1] = cmd->unk7;
        globalCtx->envCtx.unk_E6[2] = cmd->unk8;
        if (cmd->unk0 == 2) {
            globalCtx->envCtx.unk_E6[3] = (u8) (u32) ((1.0f - temp_f0) * 255.0f);
            return;
        }
        globalCtx->envCtx.unk_E6[3] = (u8) (u32) (255.0f * temp_f0);
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_800EB1DC(GlobalContext *globalCtx, CutsceneContext *csCtx, CsCmdDayTime *cmd) {
    u16 temp_a0;

    if (cmd->startFrame == csCtx->frames) {
        temp_a0 = ((u32) (((f32) cmd->hour * 60.0f) / 0.021972656f) & 0xFFFF) + (u32) ((f32) (cmd->minute + 1) / 0.021972656f);
        gSaveContext.time = temp_a0;
        gSaveContext.environmentTime = temp_a0;
    }
}

void func_800EB364(GlobalContext *globalCtx, CutsceneContext *csCtx, CsCmdBase *cmd) {
    s32 temp_a0;
    u8 temp_t3;

    csCtx->state = 4;
    func_80165690();
    func_801A3F54(0);
    gSaveContext.unk_3F48 = 1;
    if ((gSaveContext.gameMode != 0) && (cmd->startFrame != csCtx->frames)) {
        gSaveContext.unk_3F1E = 1;
    }
    gSaveContext.cutscene = 0;
    if (cmd->base == 1) {
        globalCtx->nextEntranceIndex = (u16) globalCtx->csCtx.sceneCsList[globalCtx->csCtx.unk_12].unk4;
        gSaveContext.nextCutsceneIndex = 0;
        globalCtx->sceneLoadFlag = 0x14;
        if (gSaveContext.gameMode != 1) {
            Scene_SetExitFade(globalCtx);
        } else {
            temp_t3 = D_801BB12C + 1;
            D_801BB12C = temp_t3;
            if ((temp_t3 & 0xFF) >= 2) {
                D_801BB12C = 0;
            }
            globalCtx->unk_1887F = 4;
        }
        temp_a0 = globalCtx->nextEntranceIndex & 0xF;
        if (temp_a0 > 0) {
            gSaveContext.nextCutsceneIndex = temp_a0 + 0xFFEF;
        }
        globalCtx->nextEntranceIndex &= 0xFFF0;
    }
}

void func_800EB4B4(GlobalContext *globalCtx, CutsceneContext *csCtx, CsCmdBase *cmd) {
    s16 temp_v0_2;
    u16 temp_v0;

    temp_v0 = cmd->base;
    if (temp_v0 == 1) {
        if (cmd->startFrame == csCtx->frames) {
            func_800EB364(globalCtx, csCtx, cmd);
            return;
        }
        /* Duplicate return node #18. Try simplifying control flow for better match */
        return;
    }
    if ((temp_v0 == 2) && (cmd->startFrame == csCtx->frames)) {
        func_80165690();
        temp_v0_2 = D_801F4DE2;
        if (temp_v0_2 != 0x1F) {
            if (temp_v0_2 != 0x36) {
                if (temp_v0_2 != 0x44) {
                    if (temp_v0_2 != 0x5F) {
                        return;
                    }
                    gSaveContext.weekEventReg[55] |= 0x80;
                    globalCtx->nextEntranceIndex = 0x6A80;
                    gSaveContext.nextCutsceneIndex = 0xFFF0;
                    globalCtx->sceneLoadFlag = 0x14;
                    globalCtx->unk_1887F = 3;
                    return;
                }
                if ((gSaveContext.weekEventReg[33] & 0x80) != 0) {
                    globalCtx->nextEntranceIndex = 0xAE70;
                    globalCtx->sceneLoadFlag = 0x14;
                    globalCtx->unk_1887F = 3;
                    return;
                }
                globalCtx->nextEntranceIndex = 0xAE00;
                gSaveContext.nextCutsceneIndex = 0xFFF0;
                globalCtx->sceneLoadFlag = 0x14;
                globalCtx->unk_1887F = 3;
                return;
            }
            gSaveContext.weekEventReg[52] |= 0x20;
            globalCtx->nextEntranceIndex = 0x2000;
            gSaveContext.nextCutsceneIndex = 0xFFF1;
            globalCtx->sceneLoadFlag = 0x14;
            globalCtx->unk_1887F = 3;
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return;
        }
        if ((gSaveContext.weekEventReg[20] & 2) != 0) {
            globalCtx->nextEntranceIndex = 0x3010;
            globalCtx->sceneLoadFlag = 0x14;
            globalCtx->unk_1887F = 3;
            return;
        }
        globalCtx->nextEntranceIndex = 0x8600;
        gSaveContext.nextCutsceneIndex = 0xFFF0;
        globalCtx->sceneLoadFlag = 0x14;
        globalCtx->unk_1887F = 3;
    }
}

void func_800EB6F8(GlobalContext *globalCtx, CutsceneContext *csCtx, CsCmdBase *cmd) {
    GlobalContext *temp_a3;
    u16 temp_t9;

    temp_a3 = globalCtx;
    if (((s32) csCtx->frames >= (s32) cmd->startFrame) && (globalCtx = temp_a3, (func_801A3950(0, 1, temp_a3) != 0xFF))) {
        temp_t9 = cmd->base;
        switch (temp_t9) {
        case 1:
            func_800EB364(globalCtx, csCtx, cmd);
            return;
        case 2:
            if (gSaveContext.inventory.items[gItemSlots[67]] == 0x43) {
                globalCtx->nextEntranceIndex = 0x2400;
                gSaveContext.nextCutsceneIndex = 0xFFF0;
            } else {
                globalCtx->nextEntranceIndex = 0x1C00;
                gSaveContext.nextCutsceneIndex = 0xFFF9;
            }
            globalCtx->sceneLoadFlag = 0x14;
            return;
        case 3:
            if (gSaveContext.inventory.items[gItemSlots[64]] == 0x40) {
                globalCtx->nextEntranceIndex = 0x4600;
                gSaveContext.nextCutsceneIndex = 0xFFF0;
            } else {
                globalCtx->nextEntranceIndex = 0x1C10;
                gSaveContext.nextCutsceneIndex = 0xFFF9;
            }
            globalCtx->sceneLoadFlag = 0x14;
            return;
        case 4:
            if (gSaveContext.inventory.items[gItemSlots[60]] == 0x3C) {
                globalCtx->nextEntranceIndex = 0x6400;
                gSaveContext.nextCutsceneIndex = 0xFFF1;
            } else {
                globalCtx->nextEntranceIndex = 0x1C20;
                gSaveContext.nextCutsceneIndex = 0xFFF9;
            }
            globalCtx->sceneLoadFlag = 0x14;
            return;
        case 5:
            if (gSaveContext.inventory.items[gItemSlots[71]] == 0x47) {
                globalCtx->nextEntranceIndex = 0xD400;
                gSaveContext.nextCutsceneIndex = 0xFFF0;
            } else {
                globalCtx->nextEntranceIndex = 0x1C30;
                gSaveContext.nextCutsceneIndex = 0xFFF9;
            }
            globalCtx->sceneLoadFlag = 0x14;
            return;
        case 6:
            if (gSaveContext.inventory.items[gItemSlots[61]] == 0x3D) {
                globalCtx->nextEntranceIndex = 0x2400;
                gSaveContext.nextCutsceneIndex = 0xFFF1;
            } else {
                globalCtx->nextEntranceIndex = 0x1C50;
                gSaveContext.nextCutsceneIndex = 0xFFF9;
            }
            globalCtx->sceneLoadFlag = 0x14;
            return;
        case 7:
            if (gSaveContext.inventory.items[gItemSlots[70]] == 0x46) {
                globalCtx->nextEntranceIndex = 0x2400;
                gSaveContext.nextCutsceneIndex = 0xFFF3;
            } else {
                globalCtx->nextEntranceIndex = 0x1C60;
                gSaveContext.nextCutsceneIndex = 0xFFF9;
            }
            globalCtx->sceneLoadFlag = 0x14;
            return;
        case 8:
            globalCtx->nextEntranceIndex = 0x2000;
            gSaveContext.nextCutsceneIndex = 0xFFF3;
            globalCtx->sceneLoadFlag = 0x14;
            return;
        case 9:
            if (gSaveContext.inventory.items[gItemSlots[63]] == 0x3F) {
                globalCtx->nextEntranceIndex = 0x5400;
                gSaveContext.nextCutsceneIndex = 0xFFF8;
            } else {
                globalCtx->nextEntranceIndex = 0x1C70;
                gSaveContext.nextCutsceneIndex = 0xFFF9;
            }
            globalCtx->sceneLoadFlag = 0x14;
            return;
        case 10:
            if (gSaveContext.inventory.items[gItemSlots[57]] == 0x39) {
                globalCtx->nextEntranceIndex = 0x7E00;
                gSaveContext.nextCutsceneIndex = 0xFFF0;
            } else {
                globalCtx->nextEntranceIndex = 0x1C40;
                gSaveContext.nextCutsceneIndex = 0xFFF9;
            }
            globalCtx->sceneLoadFlag = 0x14;
            return;
        case 11:
            if (gSaveContext.inventory.items[gItemSlots[62]] == 0x3E) {
                globalCtx->nextEntranceIndex = 0x5410;
                gSaveContext.nextCutsceneIndex = 0xFFF8;
            } else {
                globalCtx->nextEntranceIndex = 0x1C80;
                gSaveContext.nextCutsceneIndex = 0xFFF9;
            }
            globalCtx->sceneLoadFlag = 0x14;
            /* Duplicate return node #42. Try simplifying control flow for better match */
            return;
        }
    } else {
    default:
    }
}

void func_800EBB68(GlobalContext *globalCtx, CutsceneContext *csCtx, CsCmdBase *cmd) {
    CsCmdBase *temp_a3;
    f32 temp_f0;
    u16 temp_v0;
    u16 temp_v1;
    CsCmdUnk9B *phi_a3;

    temp_a3 = cmd;
    temp_v1 = temp_a3->startFrame;
    temp_v0 = csCtx->frames;
    phi_a3 = (CsCmdUnk9B *) temp_a3;
    if (((s32) temp_v0 >= (s32) temp_v1) && ((s32) temp_a3->endFrame >= (s32) temp_v0)) {
        if ((temp_v1 == temp_v0) && (temp_a3->base == 1)) {
            cmd = temp_a3;
            func_8016566C(0xB4, temp_a3);
            phi_a3 = (CsCmdUnk9B *) cmd;
        }
        if (phi_a3->unk0 == 2) {
            temp_f0 = func_800F5A8C(phi_a3->endFrame, phi_a3->startFrame, csCtx->frames, phi_a3);
            if (temp_f0 >= 0.9f) {
                func_80165690();
                return;
            }
            func_80165658((u32) ((1.0f - temp_f0) * 180.0f));
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_800EBCD0(GlobalContext *globalCtx, CutsceneContext *csCtx, CsCmdBase *cmd) {
    Actor *sp34;
    Actor *temp_v1;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if ((cmd->startFrame == csCtx->frames) && (cmd->base == 1)) {
        gSaveContext.hasTatl = 1;
        if ((bitwise s32) temp_v1[8].scale.z == 0) {
            sp34 = temp_v1;
            temp_v1[8].scale.z = (bitwise f32) Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x10, temp_v1->world.pos.x, temp_v1->world.pos.y, temp_v1->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
        }
    }
}

void func_800EBD60(GlobalContext *globalCtx, CutsceneContext *csCtx, CsCmdBase *cmd) {
    CsCmdBase *temp_a3;
    f32 temp_f0;
    u16 temp_a0;
    u16 temp_a1;
    u16 temp_t2;
    u16 temp_v0;
    u32 temp_t4;
    u32 temp_t7;
    s8 phi_t8;
    void *phi_v0;

    temp_a3 = cmd;
    temp_v0 = csCtx->frames;
    if (((s32) temp_v0 >= (s32) temp_a3->startFrame) && ((s32) temp_a3->endFrame >= (s32) temp_v0)) {
        globalCtx->envCtx.unk_E5 = 1;
        temp_a1 = temp_a3->startFrame;
        temp_a0 = temp_a3->endFrame;
        cmd = temp_a3;
        temp_f0 = func_800F5A8C(temp_a0, temp_a1, csCtx->frames, (CsCmdUnk9B *) temp_a3);
        temp_t2 = cmd->base;
        switch (temp_t2) {
        case 1:
        case 5:
            globalCtx->envCtx.unk_E6[0] = 0xA0;
            globalCtx->envCtx.unk_E6[1] = 0xA0;
            globalCtx->envCtx.unk_E6[2] = 0xA0;
            phi_v0 = globalCtx + 0x10000;
            if (cmd->base == 1) {
                globalCtx->envCtx.unk_E6[3] = (u8) (u32) (255.0f * temp_f0);
                if (temp_f0 == 0.0f) {
                    func_8019F128(0x2846U);
                    return;
                }
                /* Duplicate return node #24. Try simplifying control flow for better match */
                return;
            }
            phi_t8 = (s8) (u32) ((1.0f - temp_f0) * 255.0f);
block_23:
            phi_v0->unk_70ED = phi_t8;
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return;
        case 2:
        case 6:
            globalCtx->envCtx.unk_E6[0] = 0;
            globalCtx->envCtx.unk_E6[1] = 0;
            globalCtx->envCtx.unk_E6[2] = 0xFF;
            if (cmd->base == 2) {
                globalCtx->envCtx.unk_E6[3] = (u8) (u32) (255.0f * temp_f0);
                return;
            }
            globalCtx->envCtx.unk_E6[3] = (u8) (u32) ((1.0f - temp_f0) * 255.0f);
            return;
        case 3:
        case 7:
            globalCtx->envCtx.unk_E6[0] = 0xFF;
            globalCtx->envCtx.unk_E6[1] = 0;
            globalCtx->envCtx.unk_E6[2] = 0;
            phi_v0 = globalCtx + 0x10000;
            if (cmd->base == 3) {
                phi_t8 = (s8) (u32) ((1.0f - temp_f0) * 255.0f);
                goto block_23;
            }
            globalCtx->envCtx.unk_E6[3] = (u8) (u32) (255.0f * temp_f0);
            return;
        case 4:
        case 8:
            globalCtx->envCtx.unk_E6[0] = 0;
            globalCtx->envCtx.unk_E6[1] = 0xFF;
            globalCtx->envCtx.unk_E6[2] = 0;
            if (cmd->base == 4) {
                globalCtx->envCtx.unk_E6[3] = (u8) (u32) ((1.0f - temp_f0) * 255.0f);
                return;
            }
            globalCtx->envCtx.unk_E6[3] = (u8) (u32) (255.0f * temp_f0);
            return;
        case 9:
            gSaveContext.unk_3F48 = 1;
            return;
        case 10:
        case 11:
            globalCtx->envCtx.unk_E6[0] = 0;
            globalCtx->envCtx.unk_E6[1] = 0;
            globalCtx->envCtx.unk_E6[2] = 0;
            if (cmd->base == 0xA) {
                globalCtx->envCtx.unk_E6[3] = (u8) (u32) ((1.0f - temp_f0) * 255.0f);
                return;
            }
            globalCtx->envCtx.unk_E6[3] = (u8) (u32) (255.0f * temp_f0);
            return;
        case 12:
            temp_t4 = (u32) ((1.0f - temp_f0) * 160.0f);
            globalCtx->envCtx.unk_E6[0] = (u8) temp_t4;
            globalCtx->envCtx.unk_E6[1] = (u8) temp_t4;
            globalCtx->envCtx.unk_E6[2] = (u8) temp_t4;
            globalCtx->envCtx.unk_E6[3] = 0xFF;
            return;
        case 13:
            temp_t7 = (u32) (160.0f * temp_f0);
            globalCtx->envCtx.unk_E6[0] = (u8) temp_t7;
            globalCtx->envCtx.unk_E6[1] = (u8) temp_t7;
            globalCtx->envCtx.unk_E6[2] = (u8) temp_t7;
            phi_t8 = 0xFF;
            phi_v0 = globalCtx + 0x10000;
            goto block_23;
        }
    } else {
    default:
    }
}

s32 func_800EC678(GlobalContext *globalCtx, CsCmdUnk5A *cmd) {
    s32 sp1C;

    sp1C = 0;
    bcopy((void *) cmd, (void *) &sp1C, 4U);
    cmd = &cmd->unk_4;
    if (func_8016A168() == 0) {
        func_80161998(cmd, &D_801F4D48);
    }
    return sp1C + 4;
}

s32 func_800EC6D4(void) {
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

    phi_v1_20 = 0;
    if (gSaveContext.inventory.items[gItemSlots[54]] == 0x36) {
        phi_v1_20 = 1;
    }
    phi_v1_19 = phi_v1_20;
    if (gSaveContext.inventory.items[gItemSlots[55]] == 0x37) {
        phi_v1_19 = phi_v1_20 + 1;
    }
    phi_v1_18 = phi_v1_19;
    if (gSaveContext.inventory.items[gItemSlots[56]] == 0x38) {
        phi_v1_18 = phi_v1_19 + 1;
    }
    phi_v1_17 = phi_v1_18;
    if (gSaveContext.inventory.items[gItemSlots[57]] == 0x39) {
        phi_v1_17 = phi_v1_18 + 1;
    }
    phi_v1_16 = phi_v1_17;
    if (gSaveContext.inventory.items[gItemSlots[58]] == 0x3A) {
        phi_v1_16 = phi_v1_17 + 1;
    }
    phi_v1_15 = phi_v1_16;
    if (gSaveContext.inventory.items[gItemSlots[59]] == 0x3B) {
        phi_v1_15 = phi_v1_16 + 1;
    }
    phi_v1_14 = phi_v1_15;
    if (gSaveContext.inventory.items[gItemSlots[60]] == 0x3C) {
        phi_v1_14 = phi_v1_15 + 1;
    }
    phi_v1_13 = phi_v1_14;
    if (gSaveContext.inventory.items[gItemSlots[61]] == 0x3D) {
        phi_v1_13 = phi_v1_14 + 1;
    }
    phi_v1_12 = phi_v1_13;
    if (gSaveContext.inventory.items[gItemSlots[62]] == 0x3E) {
        phi_v1_12 = phi_v1_13 + 1;
    }
    phi_v1_11 = phi_v1_12;
    if (gSaveContext.inventory.items[gItemSlots[63]] == 0x3F) {
        phi_v1_11 = phi_v1_12 + 1;
    }
    phi_v1_10 = phi_v1_11;
    if (gSaveContext.inventory.items[gItemSlots[64]] == 0x40) {
        phi_v1_10 = phi_v1_11 + 1;
    }
    phi_v1_9 = phi_v1_10;
    if (gSaveContext.inventory.items[gItemSlots[65]] == 0x41) {
        phi_v1_9 = phi_v1_10 + 1;
    }
    phi_v1_8 = phi_v1_9;
    if (gSaveContext.inventory.items[gItemSlots[66]] == 0x42) {
        phi_v1_8 = phi_v1_9 + 1;
    }
    phi_v1_7 = phi_v1_8;
    if (gSaveContext.inventory.items[gItemSlots[67]] == 0x43) {
        phi_v1_7 = phi_v1_8 + 1;
    }
    phi_v1_6 = phi_v1_7;
    if (gSaveContext.inventory.items[gItemSlots[68]] == 0x44) {
        phi_v1_6 = phi_v1_7 + 1;
    }
    phi_v1_5 = phi_v1_6;
    if (gSaveContext.inventory.items[gItemSlots[69]] == 0x45) {
        phi_v1_5 = phi_v1_6 + 1;
    }
    phi_v1_4 = phi_v1_5;
    if (gSaveContext.inventory.items[gItemSlots[70]] == 0x46) {
        phi_v1_4 = phi_v1_5 + 1;
    }
    phi_v1_3 = phi_v1_4;
    if (gSaveContext.inventory.items[gItemSlots[71]] == 0x47) {
        phi_v1_3 = phi_v1_4 + 1;
    }
    phi_v1_2 = phi_v1_3;
    if (gSaveContext.inventory.items[gItemSlots[72]] == 0x48) {
        phi_v1_2 = phi_v1_3 + 1;
    }
    phi_v1 = phi_v1_2;
    if (gSaveContext.inventory.items[gItemSlots[73]] == 0x49) {
        phi_v1 = phi_v1_2 + 1;
    }
    return phi_v1;
}

void func_800EC924(GlobalContext *globalCtx, CutsceneContext *csCtx, CsCmdTextbox *cmd) {
    u8 sp27;
    u16 sp1E;
    CsCmdTextbox *temp_a3;
    s32 temp_v1_2;
    u16 temp_a0;
    u16 temp_a1;
    u16 temp_a1_2;
    u16 temp_a1_3;
    u16 temp_a1_4;
    u16 temp_t0;
    u16 temp_v0_2;
    u16 temp_v1;
    u32 temp_v0;
    u8 temp_v0_3;
    CutsceneContext *phi_a2;

    temp_a3 = cmd;
    temp_t0 = csCtx->frames;
    if (((s32) temp_a3->startFrame < (s32) temp_t0) && (temp_a0 = temp_a3->endFrame, (((s32) temp_a0 < (s32) temp_t0) == 0))) {
        if (temp_a3->type != 2) {
            if (temp_a3->base != D_801BB124) {
                if (D_801BB160 == 3) {
                    csCtx->frames = temp_t0 - 1;
                }
                D_801BB160 = 1;
                D_801BB124 = temp_a3->base;
                temp_v1 = temp_a3->type;
                if (temp_v1 == 4) {
                    temp_v0 = gSaveContext.inventory.questItems;
                    if (((gBitFlags->unk_0 & temp_v0) != 0) && ((gBitFlags[1] & temp_v0) != 0) && ((gBitFlags[2] & temp_v0) != 0) && ((gBitFlags[3] & temp_v0) != 0)) {
                        temp_a1 = temp_a3->textId1;
                        if (temp_a1 != 0xFFFF) {
                            func_801518B0(globalCtx, temp_a1, NULL);
                            return;
                        }
                        /* Duplicate return node #53. Try simplifying control flow for better match */
                        return;
                    }
                    func_801518B0(globalCtx, temp_a3->base, NULL);
                    return;
                }
                if (temp_v1 == 5) {
                    cmd = temp_a3;
                    if (func_800EC6D4(globalCtx, temp_a3) == 0x14) {
                        temp_a1_2 = cmd->textId1;
                        if (temp_a1_2 != 0xFFFF) {
                            func_801518B0(globalCtx, temp_a1_2, NULL);
                            return;
                        }
                        /* Duplicate return node #53. Try simplifying control flow for better match */
                        return;
                    }
                    func_801518B0(globalCtx, cmd->base, NULL);
                    return;
                }
                func_801518B0(globalCtx, temp_a3->base, NULL);
                return;
            }
            goto block_22;
        }
        temp_v0_2 = temp_a3->base;
        if (temp_v0_2 != D_801BB128) {
            D_801BB160 = 2;
            D_801BB128 = temp_v0_2;
            func_80152434(globalCtx, temp_a3->base);
            return;
        }
block_22:
        if ((s32) temp_t0 >= (s32) temp_a0) {
            sp1E = temp_t0;
            cmd = temp_a3;
            temp_v0_3 = func_80152498(&globalCtx->msgCtx);
            sp27 = temp_v0_3;
            phi_a2 = csCtx;
            if (temp_v0_3 != 2) {
                temp_v1_2 = temp_v0_3 & 0xFF;
                if ((temp_v1_2 != 0) && (temp_v1_2 != 7) && (temp_v1_2 != 8)) {
                    csCtx->frames += -1;
                    if (temp_v1_2 == 4) {
                        cmd = cmd;
                        if (func_80147624(globalCtx) != 0) {
                            if (globalCtx->msgCtx.choiceIndex == 0) {
                                if (cmd->base == 0x33BD) {
                                    cmd = cmd;
                                    func_8019F230();
                                }
                                temp_a1_3 = cmd->textId1;
                                if (temp_a1_3 != 0xFFFF) {
                                    cmd = cmd;
                                    func_80151938(globalCtx, temp_a1_3);
                                    if (cmd->type == 3) {
                                        D_801BB160 = 3;
                                        if (cmd->textId2 != 0xFFFF) {
                                            csCtx->frames += 1;
                                        }
                                    }
                                } else {
                                    cmd = cmd;
                                    func_801477B4(globalCtx);
                                    csCtx->frames += 1;
                                }
                            } else {
                                if (cmd->base == 0x33BD) {
                                    cmd = cmd;
                                    func_8019F208();
                                }
                                temp_a1_4 = cmd->textId2;
                                if (temp_a1_4 != 0xFFFF) {
                                    cmd = cmd;
                                    func_80151938(globalCtx, temp_a1_4);
                                    if (cmd->type == 3) {
                                        D_801BB160 = 3;
                                        if (cmd->textId1 != 0xFFFF) {
                                            csCtx->frames += 1;
                                        }
                                    }
                                } else {
                                    cmd = cmd;
                                    func_801477B4(globalCtx);
                                    csCtx->frames += 1;
                                }
                            }
                        }
                    }
                    phi_a2 = csCtx;
                    if (sp27 == 5) {
                        cmd = cmd;
                        phi_a2 = csCtx;
                        if (func_80147624(globalCtx) != 0) {
                            func_80152434(globalCtx, cmd->base);
                            phi_a2 = csCtx;
                        }
                    }
                }
            }
            if ((sp27 == 2) && (D_801BB160 == 3)) {
                phi_a2->frames += -1;
                D_801BB124 = D_801BB124 + 1;
            }
            if (phi_a2->frames == sp1E) {
                Interface_ChangeAlpha(1U);
                D_801BB124 = 0;
                D_801BB128 = 0;
                func_80161C0C();
                return;
            }
            func_80161BE0(1);
            /* Duplicate return node #53. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #53. Try simplifying control flow for better match */
    }
}

void func_800ECD7C(CutsceneContext *csCtx, u8 **cutscenePtr, s16 index) {
    s32 sp30;
    s32 temp_a1;
    u16 temp_a0_2;
    u8 *temp_a0;
    u8 *temp_v0;
    s32 phi_a1;

    temp_a0 = *cutscenePtr;
    cutscenePtr = cutscenePtr;
    bcopy((void *) temp_a0, (void *) &sp30, 4U);
    *cutscenePtr = &(*cutscenePtr)[4];
    phi_a1 = 0;
    if (sp30 > 0) {
        do {
            temp_v0 = *cutscenePtr;
            temp_a0_2 = csCtx->frames;
            if (((s32) temp_a0_2 >= (s32) temp_v0->unk_2) && ((s32) temp_a0_2 < (s32) temp_v0->unk_4)) {
                csCtx->npcActions[index] = (CsCmdActorAction *) temp_v0;
            }
            *cutscenePtr += 0x30;
            temp_a1 = phi_a1 + 1;
            phi_a1 = temp_a1;
        } while (temp_a1 < sp30);
    }
}

/*
Failed to decompile function Cutscene_ProcessCommands:

Label L800ED934 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void func_800ED980(GlobalContext *globalCtx, CutsceneContext *csCtx) {
    if (gSaveContext.cutscene >= 0xFFF0) {
        csCtx->frames += 1;
        Cutscene_ProcessCommands(globalCtx, csCtx, (u8 *) globalCtx->csCtx.segment, MIPS2C_ERROR(Read from unset register $a3));
    }
}

void func_800ED9C4(GlobalContext *globalCtx, CutsceneContext *csCtx) {
    if (func_800EA220(globalCtx, csCtx, 0.0f) != 0) {
        func_801A3F54(0);
        csCtx->state = 0;
    }
}

void func_800EDA04(GlobalContext *globalCtx, CutsceneContext *csCtx) {
    s16 temp_v0;
    s16 phi_v0;

    if (func_800EA220(globalCtx, csCtx, 0.0f) != 0) {
        csCtx->linkAction = NULL;
        phi_v0 = 0;
        do {
            temp_v0 = phi_v0 + 1;
            csCtx->npcActions[phi_v0] = NULL;
            phi_v0 = temp_v0;
        } while ((s32) temp_v0 < 0xA);
        gSaveContext.cutscene = 0;
        gSaveContext.gameMode = 0;
        csCtx = csCtx;
        ActorCutscene_Stop(0x7F);
        func_801A3F54(0);
        csCtx->state = 0;
    }
}

void func_800EDA84(GlobalContext *globalCtx, CutsceneContext *csCtx) {
    s16 temp_v0;
    s32 temp_v0_2;
    u8 temp_t4;
    s16 phi_v0;

    if ((gSaveContext.cutsceneTrigger != 0) && (csCtx->state == 0) && (func_801233E4(globalCtx) == 0)) {
        gSaveContext.cutscene = 0xFFFD;
    }
    if (gSaveContext.cutscene >= 0xFFF0) {
        phi_v0 = 0;
        if (csCtx->state == 0) {
            D_801BB124 = 0;
            D_801BB128 = 0;
            csCtx->linkAction = NULL;
            do {
                temp_v0 = phi_v0 + 1;
                csCtx->npcActions[phi_v0] = NULL;
                phi_v0 = temp_v0;
            } while ((s32) temp_v0 < 0xA);
            temp_t4 = csCtx->state + 1;
            csCtx->state = temp_t4;
            if ((temp_t4 & 0xFF) == 1) {
                func_801A3F54(1);
                csCtx->frames = 0xFFFF;
                temp_v0_2 = ActorCutscene_GetCurrentCamera(0x7F);
                csCtx->unk_14 = temp_v0_2;
                func_8016119C(Play_GetCamera(globalCtx, (s16) temp_v0_2), &D_801F4D48);
                csCtx->unk_18 = 0xFFFF;
                if (gSaveContext.cutsceneTrigger == 0) {
                    Interface_ChangeAlpha(1U);
                    ShrinkWindow_SetLetterboxTarget(0x20);
                    ShrinkWindow_SetLetterboxMagnitude(0x20);
                    csCtx->state += 1;
                }
                func_800ED980(globalCtx, csCtx);
            }
            gSaveContext.cutsceneTrigger = 0;
        }
    }
}

/*
Failed to decompile function func_800EDBE0:

Label L800EDD44 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void nop_800EDDB0(GlobalContext *globalCtx) {

}

void func_800EDDBC(s32 arg0, ? arg1) {

}

void func_800EDDCC(GlobalContext *globalCtx, u32 uParm2) {
    u16 temp_a1;
    u32 temp_a0;

    temp_a1 = uParm2 & 0xFF;
    if (gGameInfo->data[2591] == 0) {
        globalCtx->csCtx.unk_12 = temp_a1;
        temp_a0 = globalCtx->csCtx.sceneCsList[temp_a1].data;
        globalCtx = globalCtx;
        globalCtx->csCtx.segment = Lib_SegmentedToVirtual((void *) temp_a0);
    }
    gSaveContext.cutsceneTrigger = 1;
}

void func_800EDE34(Actor *actor, GlobalContext *globalCtx, s32 param_3) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    CsCmdActorAction *temp_v0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;

    temp_v0 = globalCtx->csCtx.npcActions[param_3];
    temp_f2 = (f32) temp_v0->unk_C;
    sp18 = (f32) temp_v0->unk_18;
    temp_f12 = (f32) temp_v0->unk_10;
    temp_f14 = (f32) temp_v0->unk_14;
    sp1C = (f32) temp_v0->unk_1C;
    sp20 = (f32) temp_v0->unk_20;
    sp2C = temp_f14;
    sp28 = temp_f12;
    sp24 = temp_f2;
    temp_f0 = func_800F5A8C((bitwise u16) temp_f12, (bitwise u16) temp_f14, temp_v0->endFrame, (CsCmdUnk9B *) temp_v0->startFrame, globalCtx->csCtx.frames, globalCtx);
    actor->world.pos.x = ((sp18 - temp_f2) * temp_f0) + temp_f2;
    actor->world.pos.y = ((sp1C - temp_f12) * temp_f0) + temp_f12;
    actor->world.pos.z = ((sp20 - temp_f14) * temp_f0) + temp_f14;
}

void func_800EDF24(Actor *actor, GlobalContext *globalCtx, u32 arg2) {
    func_800EDE34(actor, globalCtx, (s32) arg2);
    actor->world.rot.y = (s16) globalCtx->csCtx.npcActions[arg2]->unk_8;
    actor->shape.rot.y = actor->world.rot.y;
}

void func_800EDF78(Actor *actor, GlobalContext *globalCtx, s32 iParm3) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    CsCmdActorAction *temp_v1;
    f32 temp_f0;
    f32 temp_f18;
    f32 temp_f6;

    temp_f6 = (f32) globalCtx->csCtx.npcActions[iParm3]->unk_C;
    sp44 = temp_f6;
    sp48 = (f32) globalCtx->csCtx.npcActions[iParm3]->unk_10;
    temp_f18 = (f32) globalCtx->csCtx.npcActions[iParm3]->unk_14;
    sp4C = temp_f18;
    sp38 = (f32) globalCtx->csCtx.npcActions[iParm3]->unk_18;
    sp3C = (f32) globalCtx->csCtx.npcActions[iParm3]->unk_1C;
    sp40 = (f32) globalCtx->csCtx.npcActions[iParm3]->unk_20;
    temp_v1 = globalCtx->csCtx.npcActions[iParm3];
    temp_f0 = func_800F5A8C(temp_v1->endFrame, temp_v1->startFrame, globalCtx->csCtx.frames, (CsCmdUnk9B *) globalCtx);
    actor->world.pos.x = ((sp38 - temp_f6) * temp_f0) + temp_f6;
    actor->world.pos.y = ((sp3C - sp48) * temp_f0) + sp48;
    actor->world.pos.z = ((sp40 - temp_f18) * temp_f0) + temp_f18;
    Math_SmoothStepToS(&actor->world.rot.y, Math_Vec3f_Yaw((Vec3f *) &sp44, (Vec3f *) &sp38), 0xA, 0x3E8, (s16) 1);
    actor->shape.rot.y = actor->world.rot.y;
}

void func_800EE0CC(Actor *actor, GlobalContext *globalCtx, s32 iParm3) {
    f32 sp4C;
    f32 sp44;
    f32 sp40;
    f32 sp38;
    CsCmdActorAction *temp_v1;
    f32 temp_f0;
    f32 temp_f6;

    sp44 = (f32) globalCtx->csCtx.npcActions[iParm3]->unk_C;
    sp4C = (f32) globalCtx->csCtx.npcActions[iParm3]->unk_14;
    sp38 = (f32) globalCtx->csCtx.npcActions[iParm3]->unk_18;
    temp_f6 = (f32) globalCtx->csCtx.npcActions[iParm3]->unk_20;
    sp40 = temp_f6;
    temp_v1 = globalCtx->csCtx.npcActions[iParm3];
    temp_f0 = func_800F5A8C(temp_v1->endFrame, temp_v1->startFrame, globalCtx->csCtx.frames, (CsCmdUnk9B *) globalCtx);
    actor->world.pos.x = ((sp38 - sp44) * temp_f0) + sp44;
    actor->world.pos.z = ((temp_f6 - sp4C) * temp_f0) + sp4C;
    Math_SmoothStepToS(&actor->world.rot.y, Math_Vec3f_Yaw((Vec3f *) &sp44, (Vec3f *) &sp38), 0xA, 0x3E8, (s16) 1);
    actor->shape.rot.y = actor->world.rot.y;
}

s32 func_800EE1D8(GlobalContext *globalCtx) {
    s32 temp_v0;
    s32 phi_v1;

    temp_v0 = gSaveContext.sceneSetupIndex;
    phi_v1 = 0;
    if (temp_v0 > 0) {
        phi_v1 = temp_v0;
    }
    return phi_v1;
}

u32 func_800EE200(GlobalContext *globalCtx, u32 uParm2) {
    s32 temp_a1;
    u32 temp_v0;
    ? *phi_a1;
    u32 phi_v0;
    u32 phi_v1;

    temp_a1 = uParm2 & 0xFFFF;
    phi_v1 = -1U;
    if (temp_a1 == D_801F4DC8) {
        phi_v1 = 0U;
    }
    phi_a1 = &D_801F4DCC;
    phi_v0 = 2U;
    if (temp_a1 == D_801F4DCA) {
        phi_v1 = 1U;
    }
    do {
        if (temp_a1 == phi_a1->unk_0) {
            phi_v1 = phi_v0;
        }
        if (temp_a1 == phi_a1->unk_2) {
            phi_v1 = phi_v0 + 1;
        }
        if (temp_a1 == phi_a1->unk_4) {
            phi_v1 = phi_v0 + 2;
        }
        if (temp_a1 == phi_a1->unk_6) {
            phi_v1 = phi_v0 + 3;
        }
        temp_v0 = phi_v0 + 4;
        phi_a1 += 8;
        phi_v0 = temp_v0;
    } while (temp_v0 != 0xA);
    return phi_v1;
}

u32 func_800EE29C(GlobalContext *globalCtx, u32 uParm2) {
    u32 temp_v0;

    if ((globalCtx->csCtx.state != 0) && (temp_v0 = func_800EE200(globalCtx, uParm2 & 0xFFFF), (temp_v0 != -1))) {
        return globalCtx->csCtx.npcActions[temp_v0] != 0;
    }
    return 0U;
}

u32 func_800EE2F4(GlobalContext *globalCtx) {
    s32 temp_v1;
    s32 phi_v1;

    temp_v1 = gSaveContext.cutsceneTrigger != 0;
    phi_v1 = temp_v1;
    if (temp_v1 == 0) {
        phi_v1 = globalCtx->csCtx.state != 0;
    }
    return phi_v1 & 0xFF;
}
