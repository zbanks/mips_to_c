struct _mips2c_stack_ActorCutscene_ClearNextCutscenes {}; /* size 0x0 */

struct _mips2c_stack_ActorCutscene_ClearWaiting {}; /* size 0x0 */

struct _mips2c_stack_ActorCutscene_End {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s16 sp20;                            /* inferred */
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ ActorCutscene *sp24;                 /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_ActorCutscene_GetAdditionalCutscene {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ActorCutscene_GetCanPlayNext {}; /* size 0x0 */

struct _mips2c_stack_ActorCutscene_GetCurrentCamera {}; /* size 0x0 */

struct _mips2c_stack_ActorCutscene_GetCurrentIndex {}; /* size 0x0 */

struct _mips2c_stack_ActorCutscene_GetCutscene {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ActorCutscene_GetCutsceneImpl {}; /* size 0x0 */

struct _mips2c_stack_ActorCutscene_GetLength {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ActorCutscene_Init {};         /* size 0x0 */

struct _mips2c_stack_ActorCutscene_MarkNextCutscenes {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_ActorCutscene_SetIntentToPlay {}; /* size 0x0 */

struct _mips2c_stack_ActorCutscene_SetReturnCamera {}; /* size 0x0 */

struct _mips2c_stack_ActorCutscene_Start {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ Camera *sp24;                        /* inferred */
    /* 0x28 */ Camera *sp28;                        /* inferred */
    /* 0x2C */ ActorCutscene *sp2C;                 /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_ActorCutscene_StartAndSetFlag {
    /* 0x00 */ char pad_0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_ActorCutscene_StartAndSetUnkLinkFields {
    /* 0x00 */ char pad_0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_ActorCutscene_Stop {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ActorCutscene_Update {
    /* 0x00 */ char pad_0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800F1460 {
    /* 0x00 */ char pad_0[0x1E];
    /* 0x1E */ u16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800F15D8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800F2138 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800F2178 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800F21CC {};              /* size 0x0 */

struct _mips2c_stack_func_800F22C4 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s16 sp28;                            /* inferred */
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

? func_800DE308(void *, ?);                         /* extern */
void ActorCutscene_ClearNextCutscenes();            /* static */
void ActorCutscene_ClearWaiting();                  /* static */
void ActorCutscene_End();                           /* static */
s16 ActorCutscene_MarkNextCutscenes();              /* static */
s16 ActorCutscene_Update();                         /* static */
s16 func_800F2138(s16 arg0);                        /* static */
u8 func_800F2178(s16 arg0);                         /* static */
s16 func_800F21CC();                                /* static */
static ? D_801F4E08;
static ? D_801F4E20;
s16 D_801BD8C6 = 0;
s16 actorCutsceneCount;
s16 actorCutsceneCurrent = 0xFFFF;
s16 actorCutsceneCurrentCamera = 0;
u8 actorCutsceneNextCutscenes[16];
s16 actorCutsceneReturnCamera = 0;
u8 actorCutsceneWaiting[16];
ActorCutscene *actorCutscenes;
GlobalContext *actorCutscenesGlobalCtxt = NULL;
ActorCutscene actorCutscenesGlobalCutscenes[8] = {
    {0xFF9C, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFF, 0xFF, 0xFFFF, 0xFF, 0xFF},
    {0xFF9C, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFF, 0xFF, 0xFFFF, 0xFF, 0xFF},
    {0xFF9C, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFF, 0xFF, 0xFFFF, 0xFF, 0xFF},
    {2, 0xFFFF, 0xFFE7, 0xFFFF, 0xFFFF, 0xFF, 0xFF, 0, 0, 0x20},
    {0x7FFD, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFF, 0xFF, 0xFFFF, 0, 0xFF},
    {0x7FFC, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFF, 0xFF, 0xFFFF, 0, 0xFF},
    {0x7FFE, 0xFFFE, 0xFFF2, 0xFFFF, 0xFFFF, 0, 0xFF, 0xFFFF, 0, 0x20},
    {0, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0, 0xFF, 0xFFFF, 0, 0x20},
};

s16 func_800F1460(s16 param_1) {
    u16 sp1E;
    u16 phi_a0;

    switch (param_1) {
    case 0:
        phi_a0 = 2U;
        break;
    case 1:
    default:
        phi_a0 = 0x32U;
        break;
    case 2:
        phi_a0 = 5U;
        break;
    case 3:
        phi_a0 = 0xEU;
        break;
    case 4:
        phi_a0 = 0xFU;
        break;
    case 5:
        phi_a0 = 0x10U;
        break;
    case 6:
        phi_a0 = 0x11U;
        break;
    case 7:
        phi_a0 = 4U;
        break;
    }
    sp1E = phi_a0;
    Interface_ChangeAlpha(phi_a0);
    return (s16) phi_a0;
}

ActorCutscene *ActorCutscene_GetCutsceneImpl(s16 index) {
    if ((s32) index < 0x78) {
        return &actorCutscenes[index];
    }
    return &actorCutscenesGlobalCutscenes[(s16) (index - 0x78)];
}

void ActorCutscene_Init(GlobalContext *globalCtx, ActorCutscene *cutscenes, s32 num) {
    u8 *temp_a3;
    u8 *temp_v1;
    u8 *phi_v1;
    u8 *phi_a3;

    actorCutscenes = cutscenes;
    actorCutsceneCount = (s16) num;
    phi_v1 = actorCutsceneWaiting;
    phi_a3 = actorCutsceneNextCutscenes;
    do {
        temp_a3 = phi_a3 + 4;
        phi_v1->unk_1 = 0;
        temp_a3->unk_-3 = 0;
        phi_v1->unk_2 = 0;
        temp_a3->unk_-2 = 0;
        phi_v1->unk_3 = 0;
        temp_a3->unk_-1 = 0;
        temp_v1 = phi_v1 + 4;
        temp_v1->unk_-4 = 0;
        temp_a3->unk_-4 = 0;
        phi_v1 = temp_v1;
        phi_a3 = temp_a3;
    } while (temp_a3 != &D_801F4E20);
    actorCutsceneCurrent.unk_4 = -1;
    actorCutsceneCurrent.unk_10 = globalCtx;
    actorCutsceneCurrent.unk_2 = -1;
    actorCutsceneCurrent.unk_8 = 0;
    actorCutsceneCurrent.unk_6 = 0;
    actorCutsceneCurrent.unk_16 = 0;
    actorCutsceneCurrent.unk_0 = actorCutsceneCurrent.unk_4;
}

void func_800F15D8(Camera *camera) {
    Camera *temp_a1;

    if (camera != 0) {
        temp_a1 = camera;
        camera = camera;
        memcpy((void *) &actorCutscenesGlobalCtxt->subCameras[2], (void *) temp_a1, 0x178U);
        actorCutsceneCurrent.unk_10->unk_7EC = (s16) camera->thisIdx;
        func_800DE308(actorCutsceneCurrent.unk_10 + 0x688, 0x100);
        D_801BD8C6 = 1;
    }
}

void ActorCutscene_ClearWaiting(void) {
    u8 *temp_v1;
    u8 *phi_v1;

    phi_v1 = actorCutsceneWaiting;
    do {
        temp_v1 = phi_v1 + 4;
        temp_v1->unk_-3 = 0;
        temp_v1->unk_-2 = 0;
        temp_v1->unk_-1 = 0;
        temp_v1->unk_-4 = 0;
        phi_v1 = temp_v1;
    } while (temp_v1 != &D_801F4E08);
}

void ActorCutscene_ClearNextCutscenes(void) {
    u8 *temp_v1;
    u8 *phi_v1;

    phi_v1 = actorCutsceneNextCutscenes;
    do {
        temp_v1 = phi_v1 + 4;
        temp_v1->unk_-3 = 0;
        temp_v1->unk_-2 = 0;
        temp_v1->unk_-1 = 0;
        temp_v1->unk_-4 = 0;
        phi_v1 = temp_v1;
    } while (temp_v1 != &D_801F4E20);
}

s16 ActorCutscene_MarkNextCutscenes(void) {
    s16 temp_s0;
    s16 temp_v1;
    s32 temp_s2;
    s32 temp_s3;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *phi_s6;
    s16 phi_s1;
    s32 phi_s3;
    s32 phi_s2;
    s32 phi_s4;
    s32 phi_fp;
    s32 phi_a1;
    u8 *phi_a2;
    s16 phi_s5;
    s32 phi_s4_2;
    s32 phi_fp_2;
    s16 phi_s5_2;

    phi_s6 = actorCutsceneWaiting;
    phi_s3 = 0;
    phi_a1 = -1;
    phi_s4 = 0x7FFF;
    phi_fp_2 = -1;
    phi_a1 = -1;
    phi_a2 = actorCutsceneNextCutscenes;
    phi_s5_2 = 0;
    do {
        phi_s1 = 1;
        phi_s2 = 0;
loop_2:
        temp_s0 = (phi_s3 * 8) | phi_s2;
        phi_fp = phi_fp_2;
        phi_s5 = phi_s5_2;
        phi_s4_2 = phi_s4;
        phi_fp = phi_fp_2;
        phi_s4_2 = phi_s4;
        if ((*phi_s6 & phi_s1) != 0) {
            temp_v1 = ActorCutscene_GetCutsceneImpl(temp_s0)->priority;
            phi_a2 = actorCutsceneNextCutscenes;
            if (temp_v1 == -1) {
                temp_v0 = &actorCutsceneNextCutscenes[phi_s3];
                *temp_v0 |= phi_s1;
            } else if (((s32) temp_v1 < phi_s4) && ((s32) temp_v1 > 0)) {
                phi_fp = (s32) temp_s0;
                phi_s4_2 = (s32) temp_v1;
            }
            phi_s5 = phi_s5_2 + 1;
        }
        temp_s2 = phi_s2 + 1;
        phi_s1 = (s16) (phi_s1 * 2);
        phi_s2 = temp_s2;
        phi_s4 = phi_s4_2;
        phi_s4 = phi_s4_2;
        phi_fp_2 = phi_fp;
        phi_s5_2 = phi_s5;
        phi_fp_2 = phi_fp;
        phi_s5_2 = phi_s5;
        if (temp_s2 != 8) {
            goto loop_2;
        }
        temp_s3 = phi_s3 + 1;
        phi_s6 += 1;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x10);
    if (phi_fp != phi_a1) {
        temp_v0_2 = phi_a2 + (phi_fp >> 3);
        *temp_v0_2 |= 1 << (phi_fp & 7);
    }
    return phi_s5;
}

void ActorCutscene_End(void) {
    ActorCutscene *sp24;
    s16 sp22;
    s16 sp20;
    ActorCutscene *temp_v0_2;
    Camera *temp_a3;
    Camera *temp_a3_2;
    Camera *temp_a3_3;
    Camera *temp_a3_4;
    Camera *temp_a3_5;
    GlobalContext *temp_v1_4;
    GlobalContext *temp_v1_5;
    GlobalContext *temp_v1_6;
    GlobalContext *temp_v1_7;
    s16 temp_a1;
    s16 temp_t1;
    s32 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    void *temp_v0;
    Camera *phi_a3;

    temp_v1 = actorCutsceneCurrent.unk_C;
    if (temp_v1 != 1) {
        if (temp_v1 == 2) {
            temp_v0 = actorCutsceneCurrent.unk_8;
            temp_v0->unk_4 = (s32) (temp_v0->unk_4 & 0xFFEFFFFF);
            goto block_3;
        }
    } else {
block_3:
        func_800B7298(actorCutsceneCurrent.unk_10, NULL, 6U);
        actorCutsceneCurrent.unk_C = 0;
    }
    temp_v0_2 = ActorCutscene_GetCutsceneImpl(actorCutsceneCurrent.unk_0);
    sp24 = temp_v0_2;
    temp_v1_2 = temp_v0_2->sound;
    if (temp_v1_2 != 1) {
        if (temp_v1_2 != 2) {

        } else {
            play_sound(0x4802U);
        }
    } else {
        play_sound(0x4807U);
    }
    temp_v1_3 = sp24->unkE;
    if (temp_v1_3 != 0) {
        if (temp_v1_3 != 1) {
            if (temp_v1_3 == 2) {
                func_801699D4(actorCutsceneCurrent.unk_10, actorCutsceneCurrent.unk_14, actorCutsceneCurrent.unk_6);
                temp_v1_4 = actorCutsceneCurrent.unk_10;
                temp_a3 = temp_v1_4->cameraPtrs[actorCutsceneCurrent.unk_14];
                temp_a3->flags2 = (temp_v1_4->cameraPtrs[actorCutsceneCurrent.unk_6]->flags2 & 0x100) | (temp_a3->flags2 & 0xFEFF);
                ActorCutscene_SetIntentToPlay(0x7E);
            } else {
                goto block_13;
            }
        } else {
            temp_v1_5 = actorCutsceneCurrent.unk_10;
            temp_a3_2 = temp_v1_5->cameraPtrs[actorCutsceneCurrent.unk_14];
            temp_t1 = temp_a3_2->flags2;
            phi_a3 = temp_a3_2;
            if (actorCutsceneCurrent.unk_16 != 0) {
                sp22 = temp_a3_2->thisIdx;
                sp20 = temp_t1;
                memcpy((void *) temp_a3_2, (void *) &temp_v1_5->subCameras[2], 0x178U);
                temp_v1_6 = actorCutsceneCurrent.unk_10;
                temp_a3_3 = temp_v1_6->cameraPtrs[actorCutsceneCurrent.unk_14];
                temp_a3_3->flags2 = (temp_v1_6->cameraPtrs[actorCutsceneCurrent.unk_6]->flags2 & 0x100) | (temp_a3_3->flags2 & 0xFEFF);
                temp_a3_4 = actorCutsceneCurrent.unk_10->cameraPtrs[actorCutsceneCurrent.unk_14];
                temp_a3_4->flags2 = (temp_a3_4->flags2 & 0xFFFB) | (temp_t1 & 4);
                actorCutsceneCurrent.unk_16 = 0;
                phi_a3 = actorCutsceneCurrent.unk_10->cameraPtrs[actorCutsceneCurrent.unk_14];
            }
            phi_a3->thisIdx = temp_a3_2->thisIdx;
        }
    } else {
block_13:
        func_801699D4(actorCutsceneCurrent.unk_10, actorCutsceneCurrent.unk_14, actorCutsceneCurrent.unk_6);
        temp_v1_7 = actorCutsceneCurrent.unk_10;
        temp_a3_5 = temp_v1_7->cameraPtrs[actorCutsceneCurrent.unk_14];
        temp_a3_5->flags2 = (temp_v1_7->cameraPtrs[actorCutsceneCurrent.unk_6]->flags2 & 0x100) | (temp_a3_5->flags2 & 0xFEFF);
    }
    temp_a1 = actorCutsceneCurrent.unk_6;
    if (temp_a1 != 0) {
        func_80169600(actorCutsceneCurrent.unk_10, temp_a1);
        func_80169590(actorCutsceneCurrent.unk_10, actorCutsceneCurrent.unk_14, 7);
    }
    actorCutsceneCurrent.unk_0 = -1;
    actorCutsceneCurrent.unk_4 = -1;
    actorCutsceneCurrent.unk_2 = -1;
    actorCutsceneCurrent.unk_8 = NULL;
    actorCutsceneCurrent.unk_6 = 0;
}

s16 ActorCutscene_Update(void) {
    s16 sp1E;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v1;
    s16 phi_v1;

    sp1E = 0;
    if (ActorCutscene_GetCanPlayNext(0x7E) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields(0x7E, actorCutscenesGlobalCtxt->actorCtx.actorList[2].first);
    }
    temp_v1 = actorCutsceneCurrent.unk_4;
    phi_v1 = temp_v1;
    if (temp_v1 == -1) {
        temp_a0 = actorCutsceneCurrent.unk_0;
        if (temp_a0 != -1) {
            temp_v0 = actorCutsceneCurrent.unk_2;
            if ((s32) temp_v0 > 0) {
                actorCutsceneCurrent.unk_2 = (s16) (temp_v0 - 1);
            }
            sp1E = 1;
            if (actorCutsceneCurrent.unk_2 == 0) {
                ActorCutscene_Stop(temp_a0);
                phi_v1 = actorCutsceneCurrent.unk_4;
            }
        }
    }
    if (phi_v1 != -1) {
        ActorCutscene_End();
        sp1E = 2;
    }
    ActorCutscene_ClearNextCutscenes();
    if (actorCutsceneCurrent.unk_0 == -1) {
        if ((ActorCutscene_MarkNextCutscenes() == 0) && (sp1E != 0)) {
            ShrinkWindow_SetLetterboxTarget(0);
        } else if (sp1E == 0) {
            func_800F15D8(Play_GetCamera(actorCutsceneCurrent.unk_10, actorCutsceneCurrent.unk_14));
        }
    }
    return sp1E;
}

void ActorCutscene_SetIntentToPlay(s16 index) {
    u8 *temp_v0;

    if ((s32) index >= 0) {
        temp_v0 = &actorCutsceneWaiting[(s32) index >> 3];
        *temp_v0 |= 1 << (index & 7);
    }
}

s16 ActorCutscene_GetCanPlayNext(s16 index) {
    s16 phi_v1;

    if (index == 0x7F) {
        if (actorCutsceneCurrent == -1) {
            return 0x7F;
        }
        return 0;
    }
    if ((s32) index < 0) {
        return -1;
    }
    phi_v1 = 0;
    if ((actorCutsceneNextCutscenes[(s32) index >> 3] & (1 << (index & 7))) != 0) {
        phi_v1 = 1;
    }
    return phi_v1;
}

s16 ActorCutscene_StartAndSetUnkLinkFields(s16 index, Actor *actor) {
    s16 sp1E;
    s32 temp_v0;

    temp_v0 = ActorCutscene_Start(index, actor);
    sp1E = (s16) temp_v0;
    if (temp_v0 >= 0) {
        func_800B7298(actorCutscenesGlobalCtxt, NULL, 7U);
        if (actorCutsceneCurrent.unk_2 == 0) {
            ActorCutscene_Stop(actorCutsceneCurrent.unk_0);
        }
        actorCutsceneCurrent.unk_C = 1;
    }
    return sp1E;
}

s16 ActorCutscene_StartAndSetFlag(s16 index, Actor *actor) {
    s16 sp1E;
    s32 temp_v0;

    temp_v0 = ActorCutscene_Start(index, actor);
    sp1E = (s16) temp_v0;
    if (temp_v0 >= 0) {
        func_800B7298(actorCutscenesGlobalCtxt, NULL, 7U);
        if (actorCutsceneCurrent.unk_2 == 0) {
            ActorCutscene_Stop(actorCutsceneCurrent.unk_0);
        }
        if (actor != 0) {
            actor->flags |= 0x100000;
            actorCutsceneCurrent.unk_C = 2;
        } else {
            actorCutsceneCurrent.unk_C = 1;
        }
    }
    return sp1E;
}

s16 ActorCutscene_Start(s16 index, Actor *actor) {
    ActorCutscene *sp2C;
    Camera *sp28;
    Camera *sp24;
    s32 sp20;
    ActorCutscene *temp_v0;
    Camera *temp_v0_2;
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_v1;

    temp_a0 = index;
    sp20 = 0;
    if (((s32) temp_a0 < 0) || (actorCutsceneCurrent.unk_0 != -1)) {
        return temp_a0;
    }
    actorCutsceneCurrent.unk_C = 0;
    index = temp_a0;
    temp_v0 = ActorCutscene_GetCutsceneImpl(temp_a0);
    sp2C = temp_v0;
    ShrinkWindow_SetLetterboxTarget((s8) temp_v0->letterboxSize);
    func_800F1460(sp2C->unkC);
    if (index == 0x7F) {
        sp20 = 1;
    } else if (sp2C->unk6 != -1) {
        sp20 = 1;
    } else if ((index != 0x7D) && (index != 0x7C)) {
        sp20 = 2;
    }
    if (sp20 != 0) {
        actorCutsceneCurrent.unk_14 = Play_GetActiveCameraIndex(actorCutsceneCurrent.unk_10);
        actorCutsceneCurrent.unk_6 = func_801694DC(actorCutsceneCurrent.unk_10);
        sp28 = Play_GetCamera(actorCutsceneCurrent.unk_10, actorCutsceneCurrent.unk_6);
        temp_v0_2 = Play_GetCamera(actorCutsceneCurrent.unk_10, actorCutsceneCurrent.unk_14);
        sp24 = temp_v0_2;
        temp_v1 = temp_v0_2->setting;
        if ((temp_v1 == 0x2C) || (temp_v1 == 0x2D) || (temp_v1 == 0x56)) {
            if (func_800F21CC() != index) {
                func_800E0348(sp24);
            } else {
                Camera_ClearFlags(sp24, 4);
            }
        }
        memcpy((void *) sp28, (void *) sp24, 0x178U);
        sp28->thisIdx = actorCutsceneCurrent.unk_6;
        Camera_ClearFlags(sp28, 0x41);
        func_80169590(actorCutsceneCurrent.unk_10, actorCutsceneCurrent.unk_14, 1);
        func_80169590(actorCutsceneCurrent.unk_10, actorCutsceneCurrent.unk_6, 7);
        actorCutsceneCurrent.unk_8 = actor;
        sp28->target = actor;
        sp28->flags1 = 0;
        if (sp20 == 1) {
            func_800DFAC8(sp28, 0xA);
            func_800EDDCC(actorCutsceneCurrent.unk_10, (u32) sp2C->unk_7);
            actorCutsceneCurrent.unk_2 = (s16) sp2C->length;
        } else {
            temp_a1 = sp2C->unk4;
            if (temp_a1 != -1) {
                func_800DFB14(sp28, (u32) temp_a1);
            } else {
                func_800DFAC8(sp28, 0xA);
            }
            actorCutsceneCurrent.unk_2 = (s16) sp2C->length;
        }
    }
    actorCutsceneCurrent.unk_0 = index;
    return index;
}

s16 ActorCutscene_Stop(s16 index) {
    ActorCutscene *temp_v0;
    s16 temp_a0;
    s16 phi_a1;

    if ((s32) index < 0) {
        return index;
    }
    index = index;
    temp_v0 = ActorCutscene_GetCutsceneImpl(actorCutsceneCurrent.unk_0);
    phi_a1 = index;
    if (((s32) actorCutsceneCurrent.unk_2 > 0) && (temp_v0->unk6 == -1)) {
        return -2;
    }
    if ((index != 0x7F) && (temp_v0->unk6 != -1)) {
        return -3;
    }
    if (index == 0x7F) {
        phi_a1 = actorCutsceneCurrent.unk_0;
    }
    temp_a0 = actorCutsceneCurrent.unk_0;
    if (phi_a1 == temp_a0) {
        actorCutsceneCurrent.unk_4 = temp_a0;
        return actorCutsceneCurrent.unk_4;
    }
    return -1;
}

s16 ActorCutscene_GetCurrentIndex(void) {
    return actorCutsceneCurrent;
}

ActorCutscene *ActorCutscene_GetCutscene(s16 index) {
    return ActorCutscene_GetCutsceneImpl(index);
}

s16 ActorCutscene_GetAdditionalCutscene(s16 index) {
    if ((s32) index < 0) {
        return -1;
    }
    return ActorCutscene_GetCutsceneImpl(index)->additionalCutscene;
}

s16 ActorCutscene_GetLength(s16 index) {
    if ((s32) index < 0) {
        return -1;
    }
    return ActorCutscene_GetCutsceneImpl(index)->length;
}

s16 func_800F2138(s16 arg0) {
    if ((s32) arg0 < 0) {
        return -1;
    }
    return ActorCutscene_GetCutsceneImpl(arg0)->unk6;
}

u8 func_800F2178(s16 arg0) {
    if ((s32) arg0 < 0) {
        return -1U;
    }
    return ActorCutscene_GetCutsceneImpl(arg0)->unkB;
}

s16 ActorCutscene_GetCurrentCamera(s16 index) {
    return actorCutsceneCurrentCamera;
}

s16 func_800F21CC(void) {
    s16 temp_a1;
    s16 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    u8 temp_a1_2;
    void *temp_a3;
    ActorCutscene *phi_a0;
    s16 phi_v1;
    ActorCutscene *phi_a0_2;
    s16 phi_v1_2;

    temp_v0 = actorCutsceneCount;
    phi_v1 = 0;
    if ((s32) temp_v0 > 0) {
        phi_a0 = actorCutscenes;
loop_2:
        temp_a1 = phi_a0->unk6;
        if ((temp_a1 != -1) && (temp_a3 = actorCutsceneCurrent.unk_10, (((s32) temp_a1 < (s32) temp_a3->unk_1F24) != 0)) && (temp_a3->unk_18B48 == (temp_a3->unk_1F74 + (temp_a1 * 8))->unk_6)) {
            return phi_v1;
        }
        temp_v1 = phi_v1 + 1;
        phi_a0 += 0x10;
        phi_v1 = (s16) temp_v1;
        if (temp_v1 >= (s32) temp_v0) {
            goto block_8;
        }
        goto loop_2;
    }
block_8:
    phi_v1_2 = 0;
    if ((s32) temp_v0 > 0) {
        phi_a0_2 = actorCutscenes;
loop_10:
        temp_a1_2 = phi_a0_2->unkB;
        if (((s32) temp_a1_2 >= 0x64) && ((actorCutsceneCurrent.unk_10->unk_18B48 + 0x64) == temp_a1_2)) {
            return phi_v1_2;
        }
        temp_v1_2 = phi_v1_2 + 1;
        phi_a0_2 += 0x10;
        phi_v1_2 = (s16) temp_v1_2;
        if (temp_v1_2 >= (s32) temp_v0) {
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return -1;
        }
        goto loop_10;
    }
    return -1;
}

s32 func_800F22C4(s16 param_1, Actor *actor) {
    s16 sp2A;
    s16 sp28;
    s32 phi_v0;

    if ((actorCutsceneCurrent.unk_0 == -1) || (param_1 == -1)) {
        return 4;
    }
    func_800B8898(actorCutsceneCurrent.unk_10, actor, &sp2A, &sp28);
    if (((s32) sp2A >= 0x29) && ((s32) sp2A < 0x118) && ((s32) sp28 >= 0x29) && ((s32) sp28 < 0xC8) && (OLib_Vec3fDist((Vec3f *) &actor->focus, Play_GetCamera(actorCutsceneCurrent.unk_10, actorCutsceneCurrent.unk_6) + 0x5C) < 700.0f)) {
        return 1;
    }
    if ((s32) actorCutsceneCurrent.unk_2 < 6) {
        return 2;
    }
    phi_v0 = 3;
    if (param_1 == actorCutsceneCurrent.unk_0) {
        phi_v0 = 0;
    }
    return phi_v0;
}

void ActorCutscene_SetReturnCamera(s16 index) {
    actorCutsceneReturnCamera = index;
}
