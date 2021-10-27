typedef struct BgIngate {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ void (*actionFunc)(BgIngate *, GlobalContext *);
    /* 0x160 */ u16 unk_160;                        /* inferred */
    /* 0x162 */ char pad_162[0x2];
    /* 0x164 */ Path *unk_164;                      /* inferred */
    /* 0x168 */ char pad_168[0x4];
    /* 0x16C */ s16 unk_16C;                        /* inferred */
    /* 0x16E */ char pad_16E[0x22];                 /* maybe part of unk_16C[18]? */
} BgIngate;                                         /* size = 0x190 */

struct _mips2c_stack_BgIngate_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgIngate_Draw {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_BgIngate_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0xC];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ void *sp38;                          /* inferred */
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_BgIngate_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80953A90 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80953B40 {};              /* size 0x0 */

struct _mips2c_stack_func_80953BEC {
    /* 0x000 */ char pad_0[0x3C];
    /* 0x03C */ Vec3f *sp3C;                        /* inferred */
    /* 0x040 */ s32 *sp40;                          /* inferred */
    /* 0x044 */ s32 *sp44;                          /* inferred */
    /* 0x048 */ void *sp48;                         /* inferred */
    /* 0x04C */ char pad_4C[0x4];
    /* 0x050 */ ?32 sp50;                           /* inferred */
    /* 0x054 */ char pad_54[0x4];
    /* 0x058 */ ?32 sp58;                           /* inferred */
    /* 0x05C */ ? sp5C;                             /* inferred */
    /* 0x05C */ char pad_5C[0xC];
    /* 0x068 */ ? sp68;                             /* inferred */
    /* 0x068 */ char pad_68[0xC];
    /* 0x074 */ ? sp74;                             /* inferred */
    /* 0x074 */ char pad_74[0x424];
};                                                  /* size = 0x498 */

struct _mips2c_stack_func_80953DA8 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Camera *sp1C;                        /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80953E38 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80953EA4 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80953F14 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80953F8C {};              /* size 0x0 */

struct _mips2c_stack_func_80953F9C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Camera *sp20;                        /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809541B8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809542A0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80954340 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809543D4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

Actor *func_80953A90(BgIngate *arg0, GlobalContext *arg1, s32 arg2, s16 arg3); /* static */
void func_80953B40(Actor *arg0);                    /* static */
? func_80953BEC(Actor *arg0);                       /* static */
? func_80953DA8(Actor *arg0, GlobalContext *arg1);  /* static */
void func_80953E38(GlobalContext *arg0);            /* static */
void func_80953EA4(Actor *arg0, GlobalContext *arg1, u8, Actor *); /* static */
void func_80953F14(Actor *arg0, GlobalContext *arg1, u8, Actor *); /* static */
void func_80953F8C(BgIngate *arg0, GlobalContext *arg1); /* static */
void func_80953F9C(Actor *arg0, GlobalContext *arg1); /* static */
void func_809541B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_809542A0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80954340(Actor *arg0, GlobalContext *arg1); /* static */
void func_809543D4(Actor *arg0, GlobalContext *arg1); /* static */
extern ? D_060006B0;
extern CollisionHeader D_060016DC;

Actor *func_80953A90(BgIngate *arg0, GlobalContext *arg1, s32 arg2, s16 arg3) {
    Actor *temp_v0;
    Actor *temp_v1;
    Actor *phi_s0;
    Actor *phi_s0_2;

    phi_s0 = NULL;
    phi_s0_2 = NULL;
loop_1:
    temp_v0 = func_ActorCategoryIterateById(arg1, phi_s0, arg2 & 0xFF & 0xFF, (s32) arg3);
    phi_s0_2 = temp_v0;
    if ((temp_v0 != 0) && ((temp_v0 == arg0) || (temp_v0->update == 0))) {
        temp_v1 = temp_v0->next;
        if (temp_v1 == 0) {

        } else {
            phi_s0 = temp_v1;
            goto loop_1;
        }
    }
    return phi_s0_2;
}

void func_80953B40(Actor *arg0) {
    s32 temp_t8;
    u16 temp_t7;

    if ((gSaveContext.eventInf[3] & 0x20) == 0) {
        arg0[1].focus.pos.x = 0xFA0;
        arg0->unk_168 = 4;
    } else {
        arg0[1].focus.pos.x = 0x7D0;
        arg0->unk_168 = 1;
    }
    arg0[1].focus.pos.z = 3e-45.0f;
    arg0->unk_18C = 0;
    temp_t7 = arg0[1].params & ~1;
    temp_t8 = temp_t7 & 0xFFFF;
    arg0[1].params = temp_t7;
    arg0[1].focus.pos.y = (s32) arg0[1].focus.pos.x / (s32) (*arg0->unk_164 - 2);
    arg0[1].params = temp_t8 & ~2;
}

? func_80953BEC(Actor *arg0) {
    ? sp74;
    ? sp68;
    ? sp5C;
    ?32 sp50;
    void *sp48;
    s32 *sp44;
    s32 *sp40;
    Vec3f *sp3C;
    Vec3f *temp_v1;
    s16 temp_v0;
    s32 *temp_a2;
    s32 *temp_t0;
    void *temp_a1;
    Vec3f *phi_v1;
    void *phi_a1;
    s32 *phi_a2;
    s32 *phi_t0;

    func_8013AF00((void *) &sp74, 3, arg0->unk_164->count + 3);
    temp_v1 = arg0 + 0x170;
    phi_v1 = temp_v1;
    if ((arg0[1].params & 1) == 0) {
        temp_t0 = arg0 + 0x188;
        sp50.unk_0 = D_801D15B0.x;
        temp_a1 = arg0 + 0x17C;
        (&sp50)[1] = D_801D15B0.y;
        temp_a2 = arg0 + 0x18C;
        (&sp50)[2] = D_801D15B0.z;
        sp40 = temp_t0;
        sp44 = temp_a2;
        sp48 = temp_a1;
        func_8013B6B0(arg0->unk_164, temp_a1, temp_a2, arg0[1].focus.pos.y, arg0[1].focus.pos.x, temp_t0, (void *) &sp74, (Vec3f *) &sp50, (s16) (s32) arg0->unk_168);
        arg0[1].params |= 1;
        phi_v1 = arg0 + 0x170;
        phi_a1 = temp_a1;
        phi_a2 = temp_a2;
        phi_t0 = temp_t0;
    } else {
        sp50.unk_0 = temp_v1->x;
        (&sp50)[1] = temp_v1->y;
        (&sp50)[2] = temp_v1->z;
        phi_a1 = arg0 + 0x17C;
        phi_a2 = arg0 + 0x18C;
        phi_t0 = arg0 + 0x188;
    }
    arg0->world.pos.x = sp50;
    arg0->world.pos.z = sp58;
    phi_v1->x = D_801D15B0.x;
    phi_v1->y = D_801D15B0.y;
    phi_v1->z = D_801D15B0.z;
    sp3C = phi_v1;
    if (func_8013B6B0(arg0->unk_164, phi_a1, phi_a2, arg0[1].focus.pos.y, arg0[1].focus.pos.x, phi_t0, (void *) &sp74, phi_v1, (s16) (s32) arg0->unk_168) != 0) {
        arg0[1].params |= 2;
    } else {
        sp68.unk_0 = (f32) arg0->world.pos.x;
        sp68.unk_4 = (s32) arg0->world.pos.y;
        sp68.unk_8 = (f32) arg0->world.pos.z;
        sp5C.unk_0 = (f32) phi_v1->x;
        sp5C.unk_4 = (f32) phi_v1->y;
        sp5C.unk_8 = (f32) phi_v1->z;
        temp_v0 = Math_Vec3f_Yaw((Vec3f *) &sp68, (Vec3f *) &sp5C);
        arg0->world.rot.y = temp_v0;
        arg0->shape.rot.y = temp_v0;
    }
    return 0;
}

? func_80953DA8(Actor *arg0, GlobalContext *arg1) {
    Camera *sp1C;
    Camera *temp_a3;
    Camera *temp_v0;
    Camera *phi_a3;

    temp_v0 = Play_GetCamera(arg1, 0);
    temp_a3 = temp_v0;
    phi_a3 = temp_a3;
    if ((gSaveContext.eventInf[3] & 0x20) != 0) {
        sp1C = temp_v0;
        func_800B7298(arg1, arg0, 7U);
        phi_a3 = sp1C;
    } else {
        gSaveContext.eventInf[4] |= 2;
    }
    func_800DFAC8(phi_a3, 0x2F);
    arg1->unk_1887C = 0x63;
    return 0;
}

void func_80953E38(GlobalContext *arg0) {
    func_800DFAC8(Play_GetCamera(arg0, 0), 1);
    if ((gSaveContext.eventInf[3] & 0x20) == 0) {
        gSaveContext.eventInf[4] &= 0xFD;
    }
    arg0->unk_1887C = -1;
}

void func_80953EA4(Actor *arg0, GlobalContext *arg1) {
    void *sp1C;
    Actor *temp_a1;
    void *temp_v0;

    temp_a1 = arg0;
    temp_v0 = arg1->actorCtx.actorList[2].first;
    arg0 = temp_a1;
    sp1C = temp_v0;
    func_800B7298(arg1, temp_a1, 0x3AU);
    temp_v0->unk_3A0 = (f32) arg0->world.pos.x;
    temp_v0[2].parent = arg0->world.pos.z;
    arg0->unk_16A = 0x1E;
    arg0->unk_15C = func_80954340;
    arg0[1].params = (u16) arg0[1].params & 0xFFFB;
}

void func_80953F14(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    s16 temp_v1;
    void *temp_v0;
    Actor *phi_a0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_v0->shape.rot.y = arg0->shape.rot.y;
    temp_v1 = temp_v0->shape.rot.y;
    temp_v0->world.rot.y = temp_v1;
    temp_v0[8].colChkInfo.cylYShift = temp_v1;
    temp_v0->focus.rot.y = temp_v1;
    arg0[1].params |= 0x10;
    func_80953DA8();
    temp_a0 = arg0;
    phi_a0 = temp_a0;
    if (temp_a0->unk_164 != 0) {
        arg0 = temp_a0;
        func_80953B40(temp_a0);
        phi_a0 = arg0;
    }
    phi_a0->unk_16E = -1;
    phi_a0->unk_15C = func_80953F9C;
}

void func_80953F8C(BgIngate *arg0, GlobalContext *arg1) {

}

void func_80953F9C(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    Camera *sp20;
    GlobalContext *temp_a2;
    u8 temp_v0;
    void *temp_t6;

    temp_a2 = arg1;
    temp_t6 = temp_a2->actorCtx.actorList[2].first;
    arg1 = temp_a2;
    sp24 = temp_t6;
    sp20 = Play_GetCamera(temp_a2, 0);
    if ((gSaveContext.eventInf[4] & 1) == 0) {
        if (((gSaveContext.eventInf[3] & 0x20) == 0) && ((arg0[1].params & 0x10) != 0) && (arg0->unk_16C == 0)) {
            arg0->textId = 0x9E3;
            func_801518B0(arg1, 0x9E3U & 0xFFFF, NULL);
            arg0[1].params &= 0xFFEF;
        }
        if ((arg0[1].params & 2) != 0) {
            if (arg0->unk_164->unk_1 != 0xFF) {
                func_80953E38(arg1);
                func_800B7298(arg1, arg0, 7U);
                arg0->textId = 0x9E4;
                func_801518B0(arg1, 0x9E4U & 0xFFFF, NULL);
                arg0->unk_16C = (s16) (arg0->unk_16C + 1);
                gSaveContext.weekEventReg[90] |= 0x40;
                arg0->unk_15C = func_809543D4;
            } else {
                temp_v0 = gSaveContext.eventInf[4];
                if ((gSaveContext.eventInf[3] & 0x20) == 0) {
                    gSaveContext.eventInf[4] = temp_v0 & 0xFD;
                } else {
                    gSaveContext.eventInf[4] = temp_v0 | 1;
                }
                arg0->unk_15C = func_809542A0;
            }
        } else if ((ActorCutscene_GetCurrentIndex() == -1) && (arg0->unk_164 != 0)) {
            Audio_PlayActorSound2(arg0, 0x211EU);
            func_80953BEC(arg0);
        }
    }
    if (ActorCutscene_GetCurrentIndex() != arg0->unk_16E) {
        if (ActorCutscene_GetCurrentIndex() != -1) {
            func_800DFAC8(sp20, 1);
            sp24->unk_A6C = (s32) (sp24->unk_A6C | 0x20);
            arg1->actorCtx.unk5 &= 0xFFFB;
        } else {
            func_800DFAC8(sp20, 0x2F);
            sp24->unk_A6C = (s32) (sp24->unk_A6C & ~0x20);
        }
    }
    arg0->unk_16E = ActorCutscene_GetCurrentIndex();
}

void func_809541B8(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    if ((arg0[1].params & 4) != 0) {
        if ((temp_v0->unk_14B == 4) && ((temp_v0->bgCheckFlags & 1) != 0) && (arg0->xzDistToPlayer < 40.0f) && (temp_a0 = arg1, (arg0->yDistToPlayer > 15.0f))) {
            arg1 = arg1;
            func_800B7298(temp_a0, arg0, 7U);
            arg0->textId = 0x9E6;
            func_801518B0(arg1, 0x9E6U & 0xFFFF, NULL);
            arg0->unk_15C = func_809543D4;
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    if (func_800CAF70((DynaPolyActor *) arg0) == 0) {
        arg0[1].params = (u16) arg0[1].params | 4;
    }
}

void func_809542A0(Actor *arg0, GlobalContext *arg1) {
    if ((gSaveContext.eventInf[5] & 1) != 0) {
        arg1->nextEntranceIndex = 0xA820;
        gSaveContext.eventInf[5] &= 0xFE;
    } else {
        arg1->nextEntranceIndex = 0xA810;
    }
    gSaveContext.nextCutsceneIndex = 0;
    arg1->sceneLoadFlag = 0x14;
    arg1->unk_1887F = 3;
    gSaveContext.nextTransition = 3;
    arg0->unk_15C = func_80953F8C;
    gSaveContext.weekEventReg[90] &= 0xBF;
    func_800FE498();
}

void func_80954340(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a1;
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk_16A;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_16A = (s16) (temp_v0 - 1);
        phi_v1 = arg0->unk_16A;
    }
    if (phi_v1 == 0) {
        temp_a1 = arg0;
        if (arg0->unk_164 != 0) {
            arg0 = arg0;
            func_800B7298(arg1, temp_a1, 6U);
            arg0->unk_164 = &arg1->setupPathList[arg0->unk_164->unk1];
            func_80953F14(arg0, arg1);
            func_800FE484();
        }
    }
}

void func_809543D4(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a1;
    Actor *temp_a1_2;
    Path *temp_v0_3;
    u16 temp_v0_2;
    u8 temp_v0;

    arg0 = arg0;
    temp_v0 = func_80152498(arg1 + 0x4908);
    if (((temp_v0 == 4) || (temp_v0 == 5)) && (arg0 = arg0, (func_80147624(arg1) != 0))) {
        temp_v0_2 = arg0->textId;
        if (temp_v0_2 != 0x9E4) {
            if (temp_v0_2 != 0x9E5) {
                if (temp_v0_2 != 0x9E6) {
                    return;
                }
                temp_a1 = arg0;
                if (arg1->msgCtx.choiceIndex == 0) {
                    func_80953EA4(arg0, arg1, 6U, arg0);
                    gSaveContext.weekEventReg[90] &= 0xBF;
                    func_8019F208();
                } else {
                    arg0 = arg0;
                    func_800B7298(arg1, temp_a1, 6U);
                    arg0->unk_15C = func_809541B8;
                    arg0[1].params = (u16) arg0[1].params & 0xFFFB;
                    func_800FE498();
                    func_8019F230();
                }
                func_801477B4(arg1);
                /* Duplicate return node #18. Try simplifying control flow for better match */
                return;
            }
            temp_a1_2 = arg0;
            if (arg1->msgCtx.choiceIndex == 0) {
                arg0 = arg0;
                func_800B7298(arg1, temp_a1_2, 6U);
                arg0->unk_15C = func_809541B8;
                arg0[1].params = (u16) arg0[1].params & 0xFFFB;
                func_800FE498();
                func_8019F208();
            } else {
                temp_v0_3 = arg0->unk_164;
                if (temp_v0_3 != 0) {
                    arg0->unk_164 = &arg1->setupPathList[temp_v0_3->unk1];
                }
                func_80953F14(arg0, arg1, 6U, arg0);
                gSaveContext.weekEventReg[90] &= 0xBF;
                func_8019F230();
            }
            func_801477B4(arg1);
            return;
        }
        arg0->textId = 0x9E5;
        func_80151938(arg1, 0x9E5U & 0xFFFF);
    }
}

void BgIngate_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp3C;
    void *sp38;
    f32 sp2C;
    ? sp20;
    Path *temp_v0;
    void *temp_v0_2;
    s32 phi_a2;
    BgIngate *this = (BgIngate *) thisx;

    if (func_80953A90(this, globalCtx, 1, 0xA7) == 0) {
        BcCheck3_BgActorInit((DynaPolyActor *) this, 3);
        BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_060016DC);
        this->unk_160 = 0;
        this->unk_160 = 8;
        this->unk_160 = 8U | 0x10;
        Actor_SetScale((Actor *) this, 1.0f);
        this->unk_164 = func_8013BB34(globalCtx, this->actor.params & 0xFF, 0);
        this->actor.room = -1;
        if ((gSaveContext.weekEventReg[20] & 2) != 0) {
            gSaveContext.weekEventReg[90] &= 0xBF;
        }
        if (((gSaveContext.eventInf[3] & 0x20) == 0) && (phi_a2 = 1, ((gSaveContext.weekEventReg[90] & 0x40) != 0))) {
            this->unk_16C = 1;
            this->actionFunc = (void (*)(BgIngate *, GlobalContext *)) func_809541B8;
        } else {
            phi_a2 = (s32) 0U;
            if (globalCtx->curSpawn == 6) {
                sp3C = 0;
                func_80953F14((Actor *) this, globalCtx, 0U);
                phi_a2 = sp3C;
                if ((gSaveContext.eventInf[3] & 0x20) != 0) {
                    sp3C = sp3C;
                    func_80112AFC(globalCtx);
                    phi_a2 = sp3C;
                } else {
                    gSaveContext.eventInf[4] |= 2;
                }
            } else {
                this->actionFunc = func_80953F8C;
            }
        }
        temp_v0 = func_8013BB34(globalCtx, this->actor.params & 0xFF, phi_a2);
        this->unk_164 = temp_v0;
        if (temp_v0 != 0) {
            temp_v0_2 = Lib_SegmentedToVirtual((void *) temp_v0->points);
            sp38 = temp_v0_2;
            Math_Vec3s_ToVec3f((Vec3f *) &sp2C, (Vec3s *) temp_v0_2);
            Math_Vec3s_ToVec3f((Vec3f *) &sp20, sp38 + 6);
            this->actor.world.rot.y = Math_Vec3f_Yaw((Vec3f *) &sp2C, (Vec3f *) &sp20);
            this->actor.shape.rot.y = this->actor.world.rot.y;
            this->actor.world.pos.y = -15.0f;
            this->actor.world.pos.x = sp2C;
            this->actor.world.pos.z = sp34;
        }
        this->unk_164 = func_8013BB34(globalCtx, this->actor.params & 0xFF, 0);
        return;
    }
    Actor_MarkForDeath((Actor *) this);
}

void BgIngate_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgIngate *this = (BgIngate *) thisx;
    if ((this->unk_160 & 8) != 0) {
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
    }
}

void BgIngate_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgIngate *this = (BgIngate *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgIngate_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    BgIngate *this = (BgIngate *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp24 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp24->polyOpa.p;
    sp24->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp24 = sp24;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = sp24->polyOpa.p;
    sp24->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = (u32) &D_060006B0;
    temp_v0_2->words.w0 = 0xDE000000;
}
