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

typedef struct BgIngate {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ void (*actionFunc)(BgIngate *, GlobalContext *);
    /* 0x0160 */ u16 unk160;                        /* inferred */
    /* 0x0162 */ char pad162[0x2];                  /* maybe part of unk160[2]? */
    /* 0x0164 */ Path *unk164;                      /* inferred */
    /* 0x0168 */ char pad168[0x4];                  /* maybe part of unk164[2]? */
    /* 0x016C */ s16 unk16C;                        /* inferred */
    /* 0x016E */ char pad16E[0x22];                 /* maybe part of unk16C[18]? */
} BgIngate;                                         /* size 0x190 */

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
        arg0->unk180 = 0xFA0;
        arg0->unk168 = 4;
    } else {
        arg0->unk180 = 0x7D0;
        arg0->unk168 = 1;
    }
    arg0->unk188 = 2;
    arg0->unk18C = 0;
    temp_t7 = arg0->unk160 & ~1;
    temp_t8 = temp_t7 & 0xFFFF;
    arg0->unk160 = temp_t7;
    arg0->unk184 = (s32) ((s32) arg0->unk180 / (s32) (*arg0->unk164 - 2));
    arg0->unk160 = (u16) (temp_t8 & ~2);
}

? func_80953BEC(Actor *arg0) {
    void sp74;
    Vec3f sp68;
    Vec3f sp5C;
    Vec3f sp50;
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

    func_8013AF00(&sp74, 3, arg0->unk164->count + 3);
    temp_v1 = arg0 + 0x170;
    phi_v1 = temp_v1;
    if ((arg0->unk160 & 1) == 0) {
        temp_t0 = arg0 + 0x188;
        sp50.x = D_801D15B0.x;
        temp_a1 = arg0 + 0x17C;
        sp50.y = D_801D15B0.y;
        temp_a2 = arg0 + 0x18C;
        sp50.z = D_801D15B0.z;
        sp40 = temp_t0;
        sp44 = temp_a2;
        sp48 = temp_a1;
        func_8013B6B0(arg0->unk164, temp_a1, temp_a2, arg0->unk184, arg0->unk180, temp_t0, &sp74, &sp50, (s16) (s32) arg0->unk168);
        arg0->unk160 = (u16) (arg0->unk160 | 1);
        phi_v1 = arg0 + 0x170;
        phi_a1 = temp_a1;
        phi_a2 = temp_a2;
        phi_t0 = temp_t0;
    } else {
        sp50.x = temp_v1->x;
        sp50.y = temp_v1->y;
        sp50.z = temp_v1->z;
        phi_a1 = arg0 + 0x17C;
        phi_a2 = arg0 + 0x18C;
        phi_t0 = arg0 + 0x188;
    }
    arg0->world.pos.x = sp50.x;
    arg0->world.pos.z = sp50.z;
    phi_v1->x = D_801D15B0.x;
    phi_v1->y = D_801D15B0.y;
    phi_v1->z = D_801D15B0.z;
    sp3C = phi_v1;
    if (func_8013B6B0(arg0->unk164, phi_a1, phi_a2, arg0->unk184, arg0->unk180, phi_t0, &sp74, phi_v1, (s16) (s32) arg0->unk168) != 0) {
        arg0->unk160 = (u16) (arg0->unk160 | 2);
    } else {
        sp68.x = arg0->world.pos.x;
        sp68.y = arg0->world.pos.y;
        sp68.z = arg0->world.pos.z;
        sp5C.x = phi_v1->x;
        sp5C.y = phi_v1->y;
        sp5C.z = phi_v1->z;
        temp_v0 = Math_Vec3f_Yaw(&sp68, &sp5C);
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
    temp_v0->unk3A0 = (f32) arg0->world.pos.x;
    temp_v0->unk3A8 = (f32) arg0->world.pos.z;
    arg0->unk16A = 0x1E;
    arg0->unk15C = func_80954340;
    arg0->unk160 = (u16) (arg0->unk160 & 0xFFFB);
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
    temp_v0->unkAD4 = temp_v1;
    temp_v0->focus.rot.y = temp_v1;
    arg0->unk160 = (u16) (arg0->unk160 | 0x10);
    func_80953DA8();
    temp_a0 = arg0;
    phi_a0 = temp_a0;
    if (temp_a0->unk164 != 0) {
        arg0 = temp_a0;
        func_80953B40(temp_a0);
        phi_a0 = arg0;
    }
    phi_a0->unk16E = -1;
    phi_a0->unk15C = func_80953F9C;
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
        if (((gSaveContext.eventInf[3] & 0x20) == 0) && ((arg0->unk160 & 0x10) != 0) && (arg0->unk16C == 0)) {
            arg0->textId = 0x9E3;
            func_801518B0(arg1, 0x9E3U & 0xFFFF, NULL);
            arg0->unk160 = (u16) (arg0->unk160 & 0xFFEF);
        }
        if ((arg0->unk160 & 2) != 0) {
            if (arg0->unk164->unk1 != 0xFF) {
                func_80953E38(arg1);
                func_800B7298(arg1, arg0, 7U);
                arg0->textId = 0x9E4;
                func_801518B0(arg1, 0x9E4U & 0xFFFF, NULL);
                arg0->unk16C = (s16) (arg0->unk16C + 1);
                gSaveContext.weekEventReg[90] |= 0x40;
                arg0->unk15C = func_809543D4;
            } else {
                temp_v0 = gSaveContext.eventInf[4];
                if ((gSaveContext.eventInf[3] & 0x20) == 0) {
                    gSaveContext.eventInf[4] = temp_v0 & 0xFD;
                } else {
                    gSaveContext.eventInf[4] = temp_v0 | 1;
                }
                arg0->unk15C = func_809542A0;
            }
        } else if ((ActorCutscene_GetCurrentIndex() == -1) && (arg0->unk164 != 0)) {
            Audio_PlayActorSound2(arg0, 0x211EU);
            func_80953BEC(arg0);
        }
    }
    if (ActorCutscene_GetCurrentIndex() != arg0->unk16E) {
        if (ActorCutscene_GetCurrentIndex() != -1) {
            func_800DFAC8(sp20, 1);
            sp24->unkA6C = (s32) (sp24->unkA6C | 0x20);
            arg1->actorCtx.unk5 &= 0xFFFB;
        } else {
            func_800DFAC8(sp20, 0x2F);
            sp24->unkA6C = (s32) (sp24->unkA6C & ~0x20);
        }
    }
    arg0->unk16E = ActorCutscene_GetCurrentIndex();
}

void func_809541B8(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    if ((arg0->unk160 & 4) != 0) {
        if ((temp_v0->unk14B == 4) && ((temp_v0->bgCheckFlags & 1) != 0) && (arg0->xzDistToPlayer < 40.0f) && (temp_a0 = arg1, (arg0->yDistToPlayer > 15.0f))) {
            arg1 = arg1;
            func_800B7298(temp_a0, arg0, 7U);
            arg0->textId = 0x9E6;
            func_801518B0(arg1, 0x9E6U & 0xFFFF, NULL);
            arg0->unk15C = func_809543D4;
            return;
        }
        // Duplicate return node #8. Try simplifying control flow for better match
        return;
    }
    if (func_800CAF70((DynaPolyActor *) arg0) == 0) {
        arg0->unk160 = (u16) (arg0->unk160 | 4);
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
    arg0->unk15C = func_80953F8C;
    gSaveContext.weekEventReg[90] &= 0xBF;
    func_800FE498();
}

void func_80954340(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a1;
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk16A;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk16A = (s16) (temp_v0 - 1);
        phi_v1 = arg0->unk16A;
    }
    if (phi_v1 == 0) {
        temp_a1 = arg0;
        if (arg0->unk164 != 0) {
            arg0 = arg0;
            func_800B7298(arg1, temp_a1, 6U);
            arg0->unk164 = &arg1->setupPathList[arg0->unk164->unk1];
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
                    arg0->unk15C = func_809541B8;
                    arg0->unk160 = (u16) (arg0->unk160 & 0xFFFB);
                    func_800FE498();
                    func_8019F230();
                }
                func_801477B4(arg1);
                // Duplicate return node #18. Try simplifying control flow for better match
                return;
            }
            temp_a1_2 = arg0;
            if (arg1->msgCtx.choiceIndex == 0) {
                arg0 = arg0;
                func_800B7298(arg1, temp_a1_2, 6U);
                arg0->unk15C = func_809541B8;
                arg0->unk160 = (u16) (arg0->unk160 & 0xFFFB);
                func_800FE498();
                func_8019F208();
            } else {
                temp_v0_3 = arg0->unk164;
                if (temp_v0_3 != 0) {
                    arg0->unk164 = &arg1->setupPathList[temp_v0_3->unk1];
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
    BgIngate *this = (BgIngate *) thisx;
    s32 sp3C;
    void *sp38;
    Vec3f sp2C;
    Vec3f sp20;
    Path *temp_v0;
    void *temp_v0_2;
    s32 phi_a2;

    if (func_80953A90(this, globalCtx, 1, 0xA7) == 0) {
        BcCheck3_BgActorInit((DynaPolyActor *) this, 3);
        BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_060016DC);
        this->unk160 = 0;
        this->unk160 = 8;
        this->unk160 = 8U | 0x10;
        Actor_SetScale(&this->actor, 1.0f);
        this->unk164 = func_8013BB34(globalCtx, this->actor.params & 0xFF, 0);
        this->actor.room = -1;
        if ((gSaveContext.weekEventReg[20] & 2) != 0) {
            gSaveContext.weekEventReg[90] &= 0xBF;
        }
        if (((gSaveContext.eventInf[3] & 0x20) == 0) && (phi_a2 = 1, ((gSaveContext.weekEventReg[90] & 0x40) != 0))) {
            this->unk16C = 1;
            this->actionFunc = (void (*)(BgIngate *, GlobalContext *)) func_809541B8;
        } else {
            phi_a2 = (s32) 0U;
            if (globalCtx->curSpawn == 6) {
                sp3C = 0;
                func_80953F14(&this->actor, globalCtx, 0U);
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
        this->unk164 = temp_v0;
        if (temp_v0 != 0) {
            temp_v0_2 = Lib_SegmentedToVirtual((void *) temp_v0->points);
            sp38 = temp_v0_2;
            Math_Vec3s_ToVec3f(&sp2C, (Vec3s *) temp_v0_2);
            Math_Vec3s_ToVec3f(&sp20, sp38 + 6);
            this->actor.world.rot.y = Math_Vec3f_Yaw(&sp2C, &sp20);
            this->actor.shape.rot.y = this->actor.world.rot.y;
            this->actor.world.pos.y = -15.0f;
            this->actor.world.pos.x = sp2C.x;
            this->actor.world.pos.z = sp2C.z;
        }
        this->unk164 = func_8013BB34(globalCtx, this->actor.params & 0xFF, 0);
        return;
    }
    Actor_MarkForDeath(&this->actor);
}

void BgIngate_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgIngate *this = (BgIngate *) thisx;
    if ((this->unk160 & 8) != 0) {
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
    }
}

void BgIngate_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgIngate *this = (BgIngate *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgIngate_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgIngate *this = (BgIngate *) thisx;
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    temp_a0 = globalCtx->state.gfxCtx;
    sp24 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp24->polyOpa.p;
    sp24->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = sp24;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = sp24->polyOpa.p;
    sp24->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_060006B0;
    temp_v0_2->words.w0 = 0xDE000000;
}

