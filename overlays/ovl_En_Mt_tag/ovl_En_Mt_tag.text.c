typedef struct EnMttag {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnMttag *, GlobalContext *);
    /* 0x148 */ char pad_148[0x10];                 /* maybe part of actionFunc[5]? */
    /* 0x158 */ u16 unk_158;                        /* inferred */
    /* 0x15A */ s16 unk_15A;                        /* inferred */
    /* 0x15C */ char pad_15C[0x8];                  /* maybe part of unk_15A[5]? */
    /* 0x164 */ s32 unk_164;                        /* inferred */
} EnMttag;                                          /* size = 0x168 */

struct _mips2c_stack_EnMttag_Destroy {};            /* size 0x0 */

struct _mips2c_stack_EnMttag_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnMttag_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809CF350 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809CF394 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809CF444 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809CF4EC {
    /* 0x00 */ char pad_0[0x6C];
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ char pad_78[0x10];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_809CF67C {
    /* 0x00 */ char pad_0[0x5C];
    /* 0x5C */ s32 sp5C;                            /* inferred */
    /* 0x60 */ char pad_60[0x8];                    /* maybe part of sp5C[3]? */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ char pad_70[0xC];                    /* maybe part of sp6C[4]? */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ char pad_84[0xC];                    /* maybe part of sp80[4]? */
    /* 0x90 */ s32 sp90;                            /* inferred */
    /* 0x94 */ s32 sp94;                            /* inferred */
    /* 0x98 */ s32 sp98;                            /* inferred */
    /* 0x9C */ s32 sp9C;                            /* inferred */
    /* 0xA0 */ s32 spA0;                            /* inferred */
    /* 0xA4 */ s32 spA4;                            /* inferred */
    /* 0xA8 */ s32 spA8;                            /* inferred */
    /* 0xAC */ char pad_AC[0xC];                    /* maybe part of spA8[4]? */
    /* 0xB8 */ ? spB8;                              /* inferred */
    /* 0xB8 */ char pad_B8[0x4];
    /* 0xBC */ void *spBC;                          /* inferred */
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_809CF848 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809CF8EC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809CF950 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809CF9A0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809CFA00 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809CFA54 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Actor *sp1C;                         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809CFBC4 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809CFC38 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809CFD98 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809CFE28 {
    /* 0x00 */ char pad_0[0x27];
    /* 0x27 */ u8 sp27;                             /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809CFF94 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

? Parameter_AddMagic(GlobalContext *, s16, s16);    /* extern */
s32 func_8017D668(f32, f32, s32, s32, f32, f32, f32 *, f32 *, f32 *); /* extern */
void func_809CF350(PosRot *arg0);                   /* static */
s32 func_809CF394(PosRot *arg0, GlobalContext *, EnMttag *, GlobalContext *); /* static */
s32 func_809CF444(EnMttag *arg0, GlobalContext *arg1, EnMttag *, GlobalContext *); /* static */
s32 func_809CF4EC(void *arg0, GlobalContext *arg1, s32 *arg2, f32 *arg3, f32 *arg4); /* static */
s32 func_809CF67C(EnMttag *arg0, GlobalContext *arg1); /* static */
? func_809CF848(GlobalContext *arg0, s8 arg1, u8 arg2, EnMttag *); /* static */
void func_809CF8EC(Actor *arg0, GlobalContext *arg1, EnMttag *, GlobalContext *); /* static */
void func_809CF950(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_809CFBC4(EnMttag *arg0);                   /* static */
static ? D_809D01B0;                                /* unable to generate initializer */
static ? D_809D01FC;                                /* unable to generate initializer */

void func_809CF350(PosRot *arg0) {
    Math3D_XZBoundCheck(-1261.0f, -901.0f, -1600.0f, -1520.0f, arg0->pos.x, arg0->pos.z);
}

s32 func_809CF394(PosRot *arg0) {
    if ((gSaveContext.eventInf[1] & 1) == 0) {
        if (Math3D_XZBoundCheck(-466.0f, -386.0f, -687.0f, 193.0f, arg0->pos.x, arg0->pos.z) != 0) {
            return 1;
        }
        goto block_5;
    }
    if (Math3D_XZBoundCheck(-1127.0f, -1007.0f, -867.0f, -787.0f, arg0->pos.x, arg0->pos.z) != 0) {
        return 2;
    }
block_5:
    return 0;
}

s32 func_809CF444(EnMttag *arg0, GlobalContext *arg1) {
    Actor *temp_v0;
    Actor *phi_s0;
    s32 phi_s1;
    s32 phi_s1_2;
    s32 phi_s1_3;
    s32 phi_v1;

    phi_s0 = NULL;
    phi_s1 = 0;
loop_1:
    temp_v0 = func_ActorCategoryIterateById(arg1, phi_s0, 4, 0x277);
    phi_s1_2 = phi_s1;
    phi_s1_3 = phi_s1;
    if (temp_v0 != 0) {
        (arg0 + (phi_s1 * 4))->unk_148 = temp_v0;
        phi_s1_2 = phi_s1 + 1;
        goto block_5;
    }
    if ((temp_v0 != 0) && (temp_v0->next != 0)) {
block_5:
        phi_s0 = temp_v0->next;
        phi_s1 = phi_s1_2;
        phi_s1_3 = phi_s1_2;
        if (phi_s1_2 < 4) {
            goto loop_1;
        }
    }
    if (phi_s1_3 < 4) {
        phi_v1 = 0;
    } else {
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_809CF4EC(void *arg0, GlobalContext *arg1, s32 *arg2, f32 *arg3, f32 *arg4) {
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v0;
    void *phi_s0;
    s32 phi_s4;
    s32 phi_s2;
    s32 phi_s1;
    f32 phi_f20;
    s32 phi_s2_2;

    temp_v0 = func_800C99AC(arg1 + 0x830, arg0->unk_80, (s32) arg0->unk_85);
    phi_s4 = 0;
    phi_s2 = -1;
    phi_f20 = 0.0f;
    if ((temp_v0 < 4) || (temp_v0 >= 0x13)) {
        return -1;
    }
    temp_s1 = *((temp_v0 * 4) + &D_809D01B0);
    phi_s0 = (temp_s1 * 0xC) + &D_809D01FC;
    phi_s1 = temp_s1;
    do {
        phi_s2_2 = phi_s2;
        if ((func_8017D668(arg0->unk_24, arg0->unk_2C, phi_s0->unk_-C, phi_s0->unk_-4, phi_s0->unk_C, phi_s0->unk_14, &sp74, &sp70, &sp6C) != 0) && ((phi_s4 == 0) || ((phi_s2 + 1) == phi_s1) || (sp6C < phi_f20))) {
            *arg3 = sp74;
            *arg4 = sp70;
            phi_s2_2 = phi_s1;
            phi_s4 = 1;
            phi_f20 = sp6C;
        }
        temp_s1_2 = phi_s1 + 1;
        phi_s0 += 0xC;
        phi_s2 = phi_s2_2;
        phi_s1 = temp_s1_2;
    } while (temp_s1_2 < ((temp_v0 * 4) + &D_809D01B0)->unk_4);
    *arg2 = phi_s2_2 + 1;
    return phi_s2_2;
}

s32 func_809CF67C(EnMttag *arg0, GlobalContext *arg1) {
    void *spBC;
    ? spB8;
    s32 spA8;
    s32 spA4;
    s32 sp94;
    s32 sp90;
    f32 sp80;
    f32 sp7C;
    f32 sp6C;
    f32 sp68;
    s32 sp5C;
    s32 *temp_s0;
    s32 temp_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *phi_s1;
    s32 *phi_s2;
    f32 *phi_s3;
    f32 *phi_s4;
    s32 *phi_s0;
    s32 phi_fp;
    s32 phi_fp_2;

    temp_a0 = arg1->actorCtx.actorList[2].first;
    sp5C = 0;
    spBC = temp_a0;
    spA4 = func_809CF4EC(temp_a0, arg1, &sp90, &sp7C, &sp68);
    phi_s1 = arg0 + 4;
    phi_s2 = &sp94;
    phi_s3 = &sp80;
    phi_s4 = &sp6C;
    phi_s0 = &spA8;
    phi_fp = -1;
    do {
        temp_v0 = func_809CF4EC(phi_s1->unk_144, arg1, phi_s2, phi_s3, phi_s4);
        *phi_s0 = temp_v0;
        phi_fp_2 = phi_fp;
        if (phi_fp < temp_v0) {
            phi_fp_2 = temp_v0;
        }
        temp_s0 = phi_s0 + 4;
        phi_s1 += 4;
        phi_s2 += 4;
        phi_s3 += 4;
        phi_s4 += 4;
        phi_s0 = temp_s0;
        phi_fp = phi_fp_2;
    } while ((u32) temp_s0 < (u32) &spB8);
    temp_a0_2 = arg0 + 4;
    temp_v0_2 = temp_a0_2->unk_144;
    if ((sp94 != -1) && (sp90 != -1)) {
        temp_v0_2->unk_348 = (s32) (sp94 - sp90);
    } else {
        temp_v0_2->unk_348 = 0;
    }
    temp_v0_3 = temp_a0_2->unk_148;
    if ((sp98 != -1) && (sp90 != -1)) {
        temp_v0_3->unk_348 = (s32) (sp98 - sp90);
    } else {
        temp_v0_3->unk_348 = 0;
    }
    temp_v0_4 = temp_a0_2->unk_14C;
    if ((sp9C != -1) && (sp90 != -1)) {
        temp_v0_4->unk_348 = (s32) (sp9C - sp90);
    } else {
        temp_v0_4->unk_348 = 0;
    }
    temp_v0_5 = temp_a0_2->unk_150;
    if ((spA0 != -1) && (sp90 != -1)) {
        temp_v0_5->unk_348 = (s32) (spA0 - sp90);
    } else {
        temp_v0_5->unk_348 = 0;
    }
    if ((spA4 > 0) && (spA4 < phi_fp_2) && ((spBC->bgCheckFlags & 1) != 0) && ((phi_fp_2 - spA4) >= 0x18)) {
        sp5C = 1;
    }
    return sp5C;
}

? func_809CF848(GlobalContext *arg0, s8 arg1, u8 arg2) {
    u8 temp_v1;
    u8 phi_a0;

    temp_v1 = gSaveContext.playerForm;
    if (temp_v1 == 4) {
        phi_a0 = 0U;
    } else {
        phi_a0 = temp_v1;
    }
    (&gSaveContext + (phi_a0 * 4))->unk_4C = 0x4D;
    arg0->nextEntranceIndex = 0xD020;
    if ((gSaveContext.weekEventReg[33] & 0x80) != 0) {
        gSaveContext.nextCutsceneIndex = 0xFFF0;
    } else {
        gSaveContext.nextCutsceneIndex = 0;
    }
    arg0->sceneLoadFlag = 0x14;
    arg0->unk_1887F = arg1;
    gSaveContext.nextTransition = arg2;
    func_801477B4(arg0);
    return 1;
}

void func_809CF8EC(Actor *arg0, GlobalContext *arg1) {
    gSaveContext.unk_3DD0[4] = 0;
    func_801518B0(arg1, 0xE95U, NULL);
    func_800B7298(arg1, arg0, 7U);
    func_801A89A8(0x101400FF);
    arg0->unk_144 = func_809CFE28;
}

void func_809CF950(Actor *arg0, GlobalContext *arg1) {
    func_801518B0(arg1, 0xE97U, NULL);
    func_800B7298(arg1, arg0, 7U);
    arg0->unk_144 = func_809CFF94;
}

void func_809CF9A0(EnMttag *this, GlobalContext *globalCtx) {
    EnMttag *temp_a1;
    s8 temp_a0;
    s8 temp_a0_2;

    temp_a0 = this->actor.cutscene;
    this = this;
    temp_a1 = this;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        temp_a0_2 = temp_a1->actor.cutscene;
        this = temp_a1;
        ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a0_2, (Actor *) temp_a1);
        this->actionFunc = func_809CFA00;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a1->actor.cutscene);
}

void func_809CFA00(EnMttag *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCurrentIndex() != this->actor.cutscene) {
        gSaveContext.weekEventReg[12] |= 2;
        this->actionFunc = func_809CFA54;
    }
}

void func_809CFA54(EnMttag *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    Actor *temp_v0;
    EnMttag *temp_a2;
    GlobalContext *temp_a1;
    GlobalContext *temp_a3;
    PosRot *temp_a0;
    s16 temp_v0_3;
    s32 temp_v0_2;
    s16 phi_v1;

    temp_a2 = this;
    temp_a3 = globalCtx;
    temp_v0 = temp_a3->actorCtx.actorList[2].first;
    temp_a1 = temp_a3;
    if (temp_a2->unk_158 == 1) {
        temp_a0 = &temp_v0->world;
        sp1C = temp_v0;
        this = temp_a2;
        globalCtx = temp_a3;
        temp_v0_2 = func_809CF394(temp_a0, temp_a1, temp_a2, temp_a3);
        if (temp_v0_2 != 0) {
            if (temp_v0_2 == 1) {
                this->unk_164 = 1;
            } else {
                this->unk_164 = 0;
            }
            func_809CF8EC((Actor *) this, globalCtx, this, globalCtx);
            gSaveContext.eventInf[1] |= 8;
            return;
        }
        temp_v0_3 = this->unk_15A;
        if (temp_v0_3 == 0) {
            phi_v1 = 0;
        } else {
            this->unk_15A = temp_v0_3 - 1;
            phi_v1 = this->unk_15A;
        }
        if (phi_v1 == 0x3C) {
            globalCtx = globalCtx;
            func_8010E9F0(4, 0);
            globalCtx->interfaceCtx.unk_280 = 1;
            func_801A89A8(0x8026);
            globalCtx->envCtx.unk_E4 = 0xFE;
            sp1C->unk_A6C = (s32) (sp1C->unk_A6C & ~0x20);
            return;
        }
        if (((s32) this->unk_15A < 0x3C) && (globalCtx->interfaceCtx.unk_280 == 8)) {
            this->unk_15A = 0;
            gSaveContext.eventInf[1] |= 1;
            this->actionFunc = func_809CFC38;
            return;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return;
    }
    this = temp_a2;
    if (func_809CF444(temp_a2, temp_a1, temp_a2, temp_a3) != 0) {
        this->unk_158 = 1;
    }
}

s32 func_809CFBC4(EnMttag *arg0) {
    s32 sp2C;
    s32 temp_s1;
    EnMttag *phi_s0;
    s32 phi_s1;

    sp2C = 0;
    phi_s0 = arg0;
    phi_s1 = 0;
loop_1:
    temp_s1 = phi_s1 + 4;
    phi_s1 = temp_s1;
    if ((func_809CF350(phi_s0->unk_148 + 0x24) != 0) && (phi_s0->unk_148->unk_138 != 0)) {
        sp2C = 1;
    } else {
        phi_s0 += 4;
        if (temp_s1 != 0x10) {
            goto loop_1;
        }
    }
    return sp2C;
}

void func_809CFC38(EnMttag *this, GlobalContext *globalCtx) {
    PosRot *temp_s0;
    s32 temp_v0;

    temp_s0 = &globalCtx->actorCtx.actorList[2].first->world;
    if (func_809CF350(temp_s0) != 0) {
        gSaveContext.unk_3DD0[4] = 6;
        play_sound(0x4835U);
        func_801A89A8(0x803F);
        this->unk_15A = 0x37;
        gSaveContext.eventInf[1] |= 2;
        this->actionFunc = func_809CFD98;
        return;
    }
    if (func_809CFBC4(this) != 0) {
        gSaveContext.unk_3DD0[4] = 6;
        play_sound(0x4835U);
        func_801A89A8(0x803F);
        this->unk_15A = 0x37;
        gSaveContext.eventInf[1] |= 4;
        this->actionFunc = func_809CFD98;
        return;
    }
    temp_v0 = func_809CF394(temp_s0);
    if (temp_v0 != 0) {
        if (temp_v0 == 1) {
            this->unk_164 = 1;
        } else {
            this->unk_164 = 0;
        }
        func_809CF8EC((Actor *) this, globalCtx);
        gSaveContext.eventInf[1] |= 8;
        return;
    }
    if ((func_809CF67C(this, globalCtx) != 0) && (this->unk_15A == 0)) {
        func_809CF950((Actor *) this, globalCtx);
        gSaveContext.eventInf[1] |= 8;
    }
}

void func_809CFD98(EnMttag *this, GlobalContext *globalCtx) {
    EnMttag *temp_a3;
    s16 temp_v0;
    s16 phi_v1;

    temp_a3 = this;
    temp_v0 = temp_a3->unk_15A;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        temp_a3->unk_15A = temp_v0 - 1;
        phi_v1 = temp_a3->unk_15A;
    }
    if (phi_v1 == 0) {
        if ((gSaveContext.eventInf[1] & 2) != 0) {
            this = temp_a3;
            func_809CF848(globalCtx, 3U, 3U, temp_a3);
        } else {
            this = temp_a3;
            func_809CF848(globalCtx, 2U, 2U, temp_a3);
        }
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_809CFE28(EnMttag *this, GlobalContext *globalCtx) {
    u8 sp27;
    s16 temp_a2;
    u8 temp_t1;
    u8 temp_t7;
    u8 temp_t9;
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (((temp_v0 == 5) && (sp27 = temp_v0 & 0xFF, (func_80147624(globalCtx) != 0))) || ((temp_v0 & 0xFF) == 2)) {
        if (this->unk_164 != 0) {
            globalCtx->nextEntranceIndex = 0xD010;
            if ((gSaveContext.weekEventReg[33] & 0x80) != 0) {
                gSaveContext.nextCutsceneIndex = 0xFFF0;
            } else {
                gSaveContext.nextCutsceneIndex = 0;
            }
            globalCtx->sceneLoadFlag = 0x14;
            globalCtx->unk_1887F = 2;
            gSaveContext.nextTransition = 2;
            func_801477B4(globalCtx);
            func_800B7298(globalCtx, (Actor *) this, 7U);
            temp_a2 = gSaveContext.unk_3F30;
            Parameter_AddMagic(globalCtx, (s16) (temp_a2 + (gSaveContext.doubleMagic * 0x30) + 0x30), temp_a2);
            temp_v0_2 = gSaveContext.eventInf[2];
            temp_t7 = gSaveContext.eventInf[1] & 0xFE;
            temp_t9 = temp_t7 & 0xFD;
            gSaveContext.eventInf[1] = temp_t7;
            temp_t1 = temp_t9 & 0xFB;
            gSaveContext.eventInf[1] = temp_t9;
            gSaveContext.eventInf[1] = temp_t1;
            gSaveContext.eventInf[1] = temp_t1 & 0xF7;
            gSaveContext.eventInf[2] = (temp_v0_2 & 0xF0) | ((temp_v0_2 & 0xF) + 1);
        } else {
            func_809CF848(globalCtx, 2U, 2U);
        }
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_809CFF94(EnMttag *this, GlobalContext *globalCtx) {
    u8 temp_t9;

    if ((func_80152498(&globalCtx->msgCtx) == 4) && (func_80147624(globalCtx) != 0)) {
        if (globalCtx->msgCtx.choiceIndex != 0) {
            func_8019F230();
            gSaveContext.unk_3DD0[4] = 0;
            func_809CF848(globalCtx, 2U, 2U);
            temp_t9 = gSaveContext.eventInf[1] & 0xF7;
            gSaveContext.eventInf[1] = temp_t9;
            gSaveContext.eventInf[1] = temp_t9 | 4;
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        func_8019F208();
        func_801477B4(globalCtx);
        func_800B7298(globalCtx, (Actor *) this, 6U);
        gSaveContext.eventInf[1] &= 0xF7;
        this->unk_15A = 0x64;
        this->actionFunc = func_809CFC38;
        /* Duplicate return node #5. Try simplifying control flow for better match */
    }
}

void EnMttag_Init(Actor *thisx, GlobalContext *globalCtx) {
    Actor *temp_v1;
    u8 temp_t2;
    u8 temp_t4;
    u8 temp_t6;
    EnMttag *this = (EnMttag *) thisx;

    if (gSaveContext.entranceIndex == 0xD010) {
        temp_v1 = globalCtx->actorCtx.actorList[2].first;
        temp_v1->unk_A6C = (s32) (temp_v1->unk_A6C | 0x20);
        this->unk_158 = 0;
        this->unk_15A = 0x64;
        temp_t2 = gSaveContext.eventInf[1] & 0xFE;
        temp_t4 = temp_t2 & 0xFD;
        gSaveContext.eventInf[1] = temp_t2;
        temp_t6 = temp_t4 & 0xFB;
        gSaveContext.eventInf[1] = temp_t4;
        gSaveContext.eventInf[1] = temp_t6;
        gSaveContext.eventInf[1] = temp_t6 & 0xF7;
        if ((gSaveContext.weekEventReg[12] & 2) == 0) {
            this->actionFunc = func_809CF9A0;
            return;
        }
        this->actionFunc = func_809CFA54;
        return;
    }
    Actor_MarkForDeath((Actor *) this);
}

void EnMttag_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnMttag *this = (EnMttag *) thisx;
    if (gSaveContext.unk_3DD0[4] != 6) {
        gSaveContext.unk_3DD0[4] = 5;
    }
}

void EnMttag_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnMttag *this = (EnMttag *) thisx;
    this->actionFunc(this, globalCtx);
}
