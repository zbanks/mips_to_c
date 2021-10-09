? func_800E0308(Camera *, Actor *);                 /* extern */
? func_8013AD9C(s16, s16, void *, void *, s32, s32); /* extern */
? func_8016A268(GlobalContext *, ?, ?, ?, s32, s32); /* extern */
Actor *func_80BBFDB0(EnNb *arg0, GlobalContext *arg1, s32 arg2, s16 arg3); /* static */
void func_80BBFE60(EnNb *arg0);                     /* static */
s32 func_80BBFE8C(EnNb *arg0, s32 arg1);            /* static */
void func_80BBFF24(Actor *arg0, GlobalContext *arg1); /* static */
Actor *func_80BBFF90(EnNb *arg0, GlobalContext *arg1); /* static */
s32 func_80BBFFD4(Actor *arg0, s16 arg1);           /* static */
s8 func_80BC0050(Actor *arg0, s32 arg1);            /* static */
s32 func_80BC00AC(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BC01DC(Actor *arg0, GlobalContext *arg1); /* static */
? *func_80BC045C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BC04FC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BC05A8(Vec3s *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_80BC06C4(void *arg0);                     /* static */
void func_80BC0800(EnNb *arg0);                     /* static */
void func_80BC08E0(EnNb *arg0, GlobalContext *arg1); /* static */
void func_80BC0978(EnNb *arg0, GlobalContext *arg1); /* static */
? func_80BC0A18(EnNb *arg0, GlobalContext *arg1);   /* static */
s32 func_80BC0B98(EnNb *arg0, ? arg2);              /* static */
s32 func_80BC0C0C(EnNb *arg0, ? arg1, ? arg2);      /* static */
s32 func_80BC0C80(EnNb *arg0, u8 *arg2, u8 *);      /* static */
? func_80BC0D08(EnNb *arg0, ? arg1);                /* static */
void func_80BC0D1C(EnNb *arg0, GlobalContext *);    /* static */
s32 func_80BC1174(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80BC11B4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80BC1278(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern FlexSkeletonHeader D_06008C40;
static void D_80BC13F0;                             /* unable to generate initializer */
static ? D_80BC1464;                                /* unable to generate initializer */
static ? D_80BC1574;                                /* unable to generate initializer */
static ? D_80BC15C8;                                /* unable to generate initializer */
static ColliderCylinderInit D_80BC15F0 = {
    {1, 0, 0, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0xA, 0x44, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80BC161C = {0, 0, 0, 0, 0xFF};
static ActorAnimationEntryS D_80BC1628 = {
    {(AnimationHeader *)0x6000990, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6000990, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6000290, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6000290, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x600052C, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60006D4, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
};

typedef struct EnNb {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ void (*actionFunc)(EnNb *, GlobalContext *);
    /* 0x018C */ void (*unk18C)(EnNb *, GlobalContext *); /* inferred */
    /* 0x0190 */ ColliderCylinder unk190;           /* inferred */
    /* 0x01DC */ u8 unk1DC;                         /* inferred */
    /* 0x01DD */ char pad1DD[0x3];                  /* maybe part of unk1DC[4]? */
    /* 0x01E0 */ s32 *unk1E0;                       /* inferred */
    /* 0x01E4 */ s32 unk1E4;                        /* inferred */
    /* 0x01E8 */ Actor *unk1E8;                     /* inferred */
    /* 0x01EC */ char pad1EC[0x16];
    /* 0x0202 */ Vec3s unk202;                      /* inferred */
    /* 0x0208 */ char pad208[0x2A];                 /* maybe part of unk202[8]? */
    /* 0x0232 */ Vec3s unk232;                      /* inferred */
    /* 0x0238 */ char pad238[0x2A];                 /* maybe part of unk232[8]? */
    /* 0x0262 */ u16 unk262;                        /* inferred */
    /* 0x0264 */ u16 unk264;                        /* inferred */
    /* 0x0266 */ char pad266[0x2];                  /* maybe part of unk264[2]? */
    /* 0x0268 */ f32 unk268;                        /* inferred */
    /* 0x026C */ char pad26C[0x8];                  /* maybe part of unk268[3]? */
    /* 0x0274 */ f32 unk274;                        /* inferred */
    /* 0x0278 */ char pad278[0x4];                  /* maybe part of unk274[2]? */
    /* 0x027C */ s16 unk27C;                        /* inferred */
    /* 0x027E */ s16 unk27E;                        /* inferred */
    /* 0x0280 */ s16 unk280;                        /* inferred */
    /* 0x0282 */ s16 unk282;                        /* inferred */
    /* 0x0284 */ s16 unk284;                        /* inferred */
    /* 0x0286 */ char pad286[0x6];                  /* maybe part of unk284[4]? */
    /* 0x028C */ void *unk28C;                      /* inferred */
    /* 0x0290 */ s32 unk290;                        /* inferred */
    /* 0x0294 */ char pad294[0x8];                  /* maybe part of unk290[3]? */
} EnNb;                                             /* size 0x29C */

Actor *func_80BBFDB0(EnNb *arg0, GlobalContext *arg1, s32 arg2, s16 arg3) {
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

void func_80BBFE60(EnNb *arg0) {
    arg0->unk144.animPlaybackSpeed = arg0->unk268;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
}

s32 func_80BBFE8C(EnNb *arg0, s32 arg1) {
    SkelAnime *temp_a0;
    s32 temp_t0;
    s32 temp_v0;
    s32 phi_v1;
    s32 phi_t0;

    phi_v1 = 0;
    phi_t0 = 0;
    if ((arg1 == 0) || (arg1 == 1)) {
        temp_v0 = arg0->unk290;
        if ((temp_v0 != 0) && (temp_v0 != 1)) {
            goto block_6;
        }
    } else if (arg1 != arg0->unk290) {
block_6:
        phi_v1 = 1;
    }
    temp_a0 = arg0 + 0x144;
    if (phi_v1 != 0) {
        arg0->unk290 = arg1;
        arg0 = arg0;
        temp_t0 = func_8013BC6C(temp_a0, &D_80BC1628, arg1);
        arg0->unk268 = arg0->unk144.animPlaybackSpeed;
        phi_t0 = temp_t0;
    }
    return phi_t0;
}

void func_80BBFF24(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    Actor *temp_a0;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x190;
    temp_a1 = temp_a2;
    sp1C = temp_a2;
    temp_a0 = arg0;
    arg0 = arg0;
    Collider_UpdateCylinder(temp_a0, temp_a1);
    arg0->unk1D2 = (s16) (s32) (arg0->focus.pos.y - arg0->world.pos.y);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, &temp_a2->base);
}

Actor *func_80BBFF90(EnNb *arg0, GlobalContext *arg1) {
    Actor *phi_v1;

    if (arg0->unk1DC == 2) {
        phi_v1 = func_80BBFDB0((EnNb *)4, (GlobalContext *)0x202);
    } else {
        phi_v1 = arg1->actorCtx.actorList[2].first;
    }
    return phi_v1;
}

s32 func_80BBFFD4(Actor *arg0, s16 arg1) {
    s32 sp1C;

    sp1C = 0;
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
        ActorCutscene_SetIntentToPlay(arg1);
    } else if (ActorCutscene_GetCanPlayNext(arg1) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields(arg1, arg0);
        sp1C = 1;
    } else {
        ActorCutscene_SetIntentToPlay(arg1);
    }
    return sp1C;
}

s8 func_80BC0050(Actor *arg0, s32 arg1) {
    s16 temp_v0;
    s32 temp_s0;
    s8 temp_s1;
    s16 phi_s1;
    s32 phi_s0;
    s8 phi_s1_2;

    temp_s1 = arg0->cutscene;
    phi_s1 = (s16) temp_s1;
    phi_s0 = 0;
    phi_s1_2 = temp_s1;
    if (arg1 > 0) {
        do {
            temp_v0 = ActorCutscene_GetAdditionalCutscene(phi_s1);
            temp_s0 = phi_s0 + 1;
            phi_s1 = temp_v0;
            phi_s0 = temp_s0;
            phi_s1_2 = (s8) temp_v0;
        } while (temp_s0 != arg1);
    }
    return phi_s1_2;
}

s32 func_80BC00AC(Actor *arg0, GlobalContext *arg1) {
    s16 sp2A;
    s32 sp24;
    Actor *temp_v0;
    s16 temp_a0;
    s16 temp_a1;
    s32 phi_v1;

    temp_a0 = arg0->unk288;
    temp_a1 = func_80BC0050(arg0, 0);
    phi_v1 = 0;
    switch (temp_a0) {
    case 0:
        sp24 = 0;
        sp2A = temp_a1;
        if (func_80BBFFD4(arg0, temp_a1) != 0) {
        case 2:
        case 4:
        case 6:
        case 8:
            func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(temp_a1)), arg0);
            arg0->unk288 = (s16) (arg0->unk288 + 1);
            phi_v1 = 1;
        }
        break;
    case 1:
    case 3:
    case 5:
    case 7:
        temp_v0 = arg0->child;
        if ((temp_v0 != 0) && (temp_v0->update != 0)) {
            func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(temp_a1)), arg0->child);
        }
        arg0->unk288 = (s16) (arg0->unk288 + 1);
        phi_v1 = 1;
        break;
    case 9:
        ActorCutscene_Stop(temp_a1);
        arg0->unk288 = (s16) (arg0->unk288 + 1);
        phi_v1 = 1;
        break;
    }
    return phi_v1;
}

s32 func_80BC01DC(Actor *arg0, GlobalContext *arg1) {
    s32 sp2C;
    s32 temp_v0;
    u16 temp_t6;
    s32 phi_v1;
    s16 phi_v1_2;

    sp2C = 0;
    temp_t6 = arg0->unk288;
    switch (temp_t6) {
    case 0:
        if (Player_GetMask(arg1) == 3) {
            arg0->unk288 = 1U;
        } else {
            arg0->unk288 = 5U;
        }
        break;
    case 1:
        func_8016A268(arg1, 1, 0, 0, 0, 0);
        arg0->unk286 = 0x28;
        arg0->unk288 = (u16) ((s16) arg0->unk288 + 1);
        break;
    case 2:
        temp_v0 = 0x14 - arg0->unk286;
        phi_v1 = temp_v0;
        if (temp_v0 < 0) {
            phi_v1 = -temp_v0;
        }
        gGameInfo->data[548] = (s16) (s32) (255.0f - (((f32) phi_v1 / 20.0f) * 255.0f));
        if (arg0->unk286 == 0x14) {
            if ((gSaveContext.eventInf[4] & 4) != 0) {
                arg1->interfaceCtx.unk_31B = 0;
            } else {
                arg1->interfaceCtx.unk_31B = 1;
            }
            arg1->interfaceCtx.unk_31A = 6;
            gGameInfo->data[1435] = 0xFF;
        }
        if (arg0->unk286 == 0) {
            phi_v1_2 = 0;
        } else {
            arg0->unk286 = (s16) (arg0->unk286 - 1);
            phi_v1_2 = arg0->unk286;
        }
        if (phi_v1_2 == 0) {
            arg0->unk288 = (u16) ((s16) arg0->unk288 + 1);
        }
        break;
    case 3:
        arg1->interfaceCtx.unk_31A = 4;
        arg0->unk288 = (u16) ((s16) arg0->unk288 + 1);
        sp2C = 1;
        break;
    case 4:
        arg1->interfaceCtx.unk_31A = 5;
        arg0->unk288 = (u16) ((s16) arg0->unk288 + 1);
        // fallthrough
    case 5:
        if ((gSaveContext.eventInf[4] & 4) == 0) {
            gSaveContext.time = 0x5555;
            Sram_IncrementDay();
        } else {
            func_800FE658(120.0f);
        }
        arg0->unk288 = (u16) ((s16) arg0->unk288 + 1);
        arg1->nextEntranceIndex = 0xBC20;
        gSaveContext.nextCutsceneIndex = 0;
        arg1->sceneLoadFlag = 0x14;
        arg1->unk_1887F = 2;
        gSaveContext.nextTransition = 6;
        gSaveContext.eventInf[4] |= 8;
        break;
    }
    return sp2C;
}

? *func_80BC045C(Actor *arg0, GlobalContext *arg1) {
    if ((gSaveContext.eventInf[4] & 8) != 0) {
        arg0->unk28C = func_80BC01DC;
        goto block_7;
    }
    if (arg0->unk1DC == 2) {
        arg0->unk28C = func_80BC00AC;
        return &D_80BC1574;
    }
    arg0 = arg0;
    if (Player_GetMask(arg1) == 2) {
        return &D_80BC15C8;
    }
    arg0->unk28C = func_80BC01DC;
block_7:
    return &D_80BC1464;
}

s32 func_80BC04FC(Actor *arg0, GlobalContext *arg1) {
    s32 sp24;
    s32 phi_v1;

    phi_v1 = 0;
    if ((arg0->unk262 & 7) != 0) {
        sp24 = 0;
        phi_v1 = sp24;
        if (func_800B84D0(arg0, arg1) != 0) {
            arg0->unk262 = (u16) (arg0->unk262 | 0x20);
            func_8013AED4(arg0 + 0x262, 0U, 7U);
            arg0->unk288 = 0;
            arg0->unk28C = 0;
            arg0->child = arg0->unk1E8;
            arg0->unk1E0 = func_80BC045C(arg0, arg1);
            arg0->unk262 = (u16) (arg0->unk262 | 0x20);
            arg0->unk188 = func_80BC0EAC;
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

void func_80BC05A8(Vec3s *arg0, GlobalContext *arg1) {
    void *sp2C;
    s32 sp28;
    s32 temp_v0;
    u16 temp_a0;

    sp2C = arg1->actorCtx.actorList[2].first;
    temp_v0 = func_80152498(arg1 + 0x4908);
    sp28 = temp_v0;
    temp_a0 = arg1->msgCtx.unk11F04;
    if ((arg0 == sp2C->unkA88) && (((s32) temp_a0 < 0xFF) || ((s32) temp_a0 >= 0x201)) && (temp_v0 == 3) && (arg0->unk298 == 3)) {
        if (((u32) arg1->state.frames % 3U) == 0) {
            if (arg0->unk26C == 120.0f) {
                arg0->unk26C = 0.0f;
            } else {
                arg0->unk26C = 120.0f;
            }
        }
    } else {
        arg0->unk26C = 0.0f;
    }
    Math_SmoothStepToF(arg0 + 0x270, arg0->unk26C, 0.8f, 40.0f, 10.0f);
    SysMatrix_InsertTranslation(arg0->unk270, 0.0f, 0.0f, 1);
    arg0->unk298 = sp28;
}

void func_80BC06C4(void *arg0) {
    Vec3f sp40;
    Vec3f sp34;
    s16 temp_v0;
    s16 temp_v0_3;
    void *temp_v0_2;
    s16 phi_v1;
    s16 phi_v1_2;

    Math_Vec3f_Copy(&sp40, arg0->unk1E8 + 0x24);
    Math_Vec3f_Copy(&sp34, arg0 + 0x24);
    Math_ApproachS(arg0 + 0x27E, (s16) (Math_Vec3f_Yaw(&sp34, &sp40) - arg0->unkBE), 4, 0x2AA8);
    temp_v0 = arg0->unk27E;
    if ((s32) temp_v0 < -0x1FFE) {
        arg0->unk27E = -0x1FFE;
    } else {
        phi_v1 = temp_v0;
        if ((s32) temp_v0 >= 0x1FFF) {
            phi_v1 = 0x1FFE;
        }
        arg0->unk27E = phi_v1;
    }
    Math_Vec3f_Copy(&sp34, arg0 + 0x3C);
    temp_v0_2 = arg0->unk1E8;
    if (temp_v0_2->unk0 == 0) {
        sp40.y = temp_v0_2->unkC44 + 3.0f;
    } else {
        Math_Vec3f_Copy(&sp40, temp_v0_2 + 0x3C);
    }
    Math_ApproachS(arg0 + 0x27C, Math_Vec3f_Pitch(&sp34, &sp40), 4, 0x2AA8);
    temp_v0_3 = arg0->unk27C;
    if ((s32) temp_v0_3 < -0x1554) {
        arg0->unk27C = -0x1554;
        return;
    }
    phi_v1_2 = temp_v0_3;
    if ((s32) temp_v0_3 >= 0x1555) {
        phi_v1_2 = 0x1554;
    }
    arg0->unk27C = phi_v1_2;
}

void func_80BC0800(EnNb *arg0) {
    s16 temp_v0_2;
    s16 temp_v0_4;
    u16 temp_t2;
    u16 temp_t3;
    u16 temp_v0_3;
    void *temp_v0;
    s16 phi_v1;
    s16 phi_v1_2;

    if (((arg0->unk262 & 0x20) != 0) && (temp_v0 = arg0->unk1E8, (temp_v0 != 0)) && (temp_v0->update != 0)) {
        temp_v0_2 = arg0->unk282;
        if (temp_v0_2 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk282 = temp_v0_2 - 1;
            phi_v1 = arg0->unk282;
        }
        if (phi_v1 == 0) {
            func_80BC06C4();
            temp_t2 = arg0->unk262 & 0xFBFF;
            temp_t3 = temp_t2 | 0x100;
            arg0->unk262 = temp_t2;
            arg0->unk262 = temp_t3;
            return;
        }
        goto block_8;
    }
block_8:
    temp_v0_3 = arg0->unk262;
    if ((temp_v0_3 & 0x100) != 0) {
        arg0->unk262 = temp_v0_3 & 0xFEFF;
        arg0->unk27C = 0;
        arg0->unk27E = 0;
        arg0->unk282 = 0x14;
        return;
    }
    temp_v0_4 = arg0->unk282;
    if (temp_v0_4 == 0) {
        phi_v1_2 = 0;
    } else {
        arg0->unk282 = temp_v0_4 - 1;
        phi_v1_2 = arg0->unk282;
    }
    if (phi_v1_2 == 0) {
        arg0->unk262 |= 0x400;
    }
}

void func_80BC08E0(EnNb *arg0, ? arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk284;
    if (temp_v0 == 0) {
        func_80BBFE8C(arg0, 2);
        arg0->unk262 |= 0x400;
        arg0->unk284 += 1;
        return;
    }
    if ((temp_v0 == 1) && (func_801378B8(arg0 + 0x144, arg0->unk144.animFrameCount) != 0)) {
        func_80BBFE8C(arg0, 1);
        arg0->unk262 &= 0xFBFF;
        arg0->unk284 += 1;
    }
}

void func_80BC0978(EnNb *arg0, ? arg1) {
    s16 temp_v0;
    u16 temp_t8;

    temp_v0 = arg0->unk284;
    if (temp_v0 == 0) {
        func_80BBFE8C(arg0, 5);
        temp_t8 = arg0->unk262 & 0xFFDF;
        arg0->unk262 = temp_t8;
        arg0->unk262 = temp_t8 | 0x400;
        arg0->unk284 += 1;
        return;
    }
    if ((temp_v0 == 1) && (func_801378B8(arg0 + 0x144, arg0->unk144.animFrameCount) != 0)) {
        func_80BBFE8C(arg0, 3);
        arg0->unk262 &= 0xFBFF;
        arg0->unk284 += 1;
    }
}

? func_80BC0A18(EnNb *arg0, GlobalContext *arg1) {
    u16 sp1A;
    ? (*temp_v0_2)(EnNb *, GlobalContext *);
    u16 temp_v0;
    EnNb *phi_a0;

    sp1A = arg1->msgCtx.unk11F04;
    phi_a0 = arg0;
    if ((arg1->actorCtx.actorList[2].first->unkA6C & 0x40) != 0) {
        arg0->unk262 |= 0x80;
        if (sp1A != arg0->unk264) {
            if ((s32) sp1A >= 0x28CE) {
                if ((s32) sp1A >= 0x28D0) {
                    switch (sp1A) {
                    case 10500:
                    case 10507:
                        arg0->unk18C = func_80BC08E0;
                        arg0->unk284 = 0;
                        break;
                    }
                } else if (sp1A != 0x28CF) {

                } else {
                    arg0->unk262 |= 0x20;
                    func_80BBFE8C((EnNb *)3);
                    goto block_17;
                }
            } else if (sp1A != 0x28C7) {
                if (sp1A != 0x28CB) {
                    if (sp1A != 0x28CD) {

                    } else {
                        arg0->unk18C = func_80BC0978;
                        arg0->unk284 = 0;
                    }
                } else {
                    func_80BBFE8C((EnNb *)4);
                    goto block_17;
                }
            } else {
            case 10497:
            case 10498:
            case 10502:
            case 10509:
            case 10514:
                func_80BBFE8C((EnNb *)3);
block_17:
            }
        }
        arg0->unk264 = sp1A;
        phi_a0 = arg0;
    } else {
        temp_v0 = arg0->unk262;
        if ((temp_v0 & 0x80) != 0) {
            arg0->unk18C = NULL;
            arg0->unk264 = 0;
            arg0->unk262 = temp_v0 & 0xFF7F;
            func_80BBFE8C((EnNb *)1);
            phi_a0 = arg0;
        }
    }
    temp_v0_2 = phi_a0->unk18C;
    if (temp_v0_2 != 0) {
        temp_v0_2(phi_a0, arg1);
    }
    return 0;
}

s32 func_80BC0B98(EnNb *arg0, ? arg2) {
    s32 sp24;
    s32 phi_v1;

    sp24 = 0;
    phi_v1 = sp24;
    if (func_80BBFDB0(arg0, (GlobalContext *)4, 0x202) != 0) {
        func_8013AED4(arg0 + 0x262, 3U, 7U);
        arg0->unk262 |= 0x20;
        func_80BBFE8C(arg0, 0);
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80BC0C0C(EnNb *arg0, ? arg1, ? arg2) {
    if ((gSaveContext.eventInf[4] & 8) == 0) {
        func_8013AED4(arg0 + 0x262, 3U, 7U);
    } else {
        func_8013AED4(arg0 + 0x262, 4U, 7U);
    }
    func_80BBFE8C(arg0, 0);
    return 1;
}

s32 func_80BC0C80(EnNb *arg0, u8 *arg2) {
    u8 temp_v0;
    s32 phi_v1;
    s32 phi_v0;

    arg0->actor.flags |= 1;
    arg0->actor.targetMode = 0;
    arg0->unk262 = 0;
    arg0->unk274 = 40.0f;
    temp_v0 = *arg2;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if ((temp_v0 != 3) && (temp_v0 != 4)) {
                phi_v1 = 0;
            } else {
                goto block_5;
            }
        } else {
            phi_v0 = func_80BC0B98();
            goto block_7;
        }
    } else {
block_5:
        phi_v0 = func_80BC0C0C();
block_7:
        phi_v1 = phi_v0;
    }
    return phi_v1;
}

? func_80BC0D08(EnNb *arg0, ? arg1) {
    return 0;
}

void func_80BC0D1C(EnNb *arg0) {
    u8 temp_v0;

    temp_v0 = arg0->unk1DC;
    if ((temp_v0 == 1) || (temp_v0 == 2) || (temp_v0 == 3) || (temp_v0 == 4)) {
        func_80BC0D08(arg0);
    }
    Math_ApproachS(arg0 + 0xBE, arg0->actor.world.rot.y, 3, 0x2AA8);
}

void func_80BC0D84(EnNb *this, GlobalContext *globalCtx) {
    u8 sp20;
    u8 *temp_a2;

    temp_a2 = &sp20;
    this->unk280 = gSaveContext.unk_14 + gGameInfo->data[15];
    if ((gSaveContext.eventInf[4] & 8) != 0) {
        sp20 = 1;
        func_80BC0C80(this, (u8 *) globalCtx, temp_a2);
        this->actor.shape.shadowDraw = func_800B3FC0;
        this->actor.flags |= 1;
    } else if ((func_80133038(globalCtx, &D_80BC13F0, (struct_80133038_arg2 *) &sp20) == 0) || ((sp20 != this->unk1DC) && (func_80BC0C80(this, (u8 *) globalCtx, &sp20) == 0))) {
        this->actor.shape.shadowDraw = NULL;
        this->actor.flags &= -2;
        sp20 = 0;
    } else {
        this->actor.shape.shadowDraw = func_800B3FC0;
        this->actor.flags |= 1;
    }
    this->unk1DC = sp20;
    this->unk1E8 = func_80BBFF90(this, globalCtx);
    func_80BC0D1C(this, globalCtx);
}

void func_80BC0EAC(EnNb *this, GlobalContext *globalCtx) {
    u8 temp_t9;
    u8 temp_v0;

    if (func_8010BF58(&this->actor, globalCtx, this->unk1E0, this->unk28C, &this->unk1E4) != 0) {
        temp_v0 = gSaveContext.eventInf[4];
        temp_t9 = temp_v0 & 0xFB;
        if ((temp_v0 & 8) != 0) {
            gSaveContext.eventInf[4] = temp_t9;
            gSaveContext.eventInf[4] = temp_t9 & 0xF7;
        }
        func_8013AED4(&this->unk262, 3U, 7U);
        if (this->unk1DC != 2) {
            this->unk262 &= 0xFFDF;
        }
        this->actor.child = NULL;
        this->unk262 |= 0x400;
        this->unk282 = 0x14;
        this->unk1E4 = 0;
        this->actionFunc = func_80BC0D84;
    }
}

void EnNb_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnNb *this = (EnNb *) thisx;
    u8 temp_t2;
    u8 temp_v0;

    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_06008C40, NULL, &this->unk202, &this->unk232, 8);
    this->unk290 = -1;
    func_80BBFE8C(this, 0);
    Collider_InitAndSetCylinder(globalCtx, &this->unk190, &this->actor, &D_80BC15F0);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80BC161C);
    Actor_SetScale(&this->actor, 0.01f);
    this->unk262 = 0;
    temp_v0 = gSaveContext.eventInf[4];
    temp_t2 = temp_v0 & 0xFB;
    if ((temp_v0 & 8) != 0) {
        func_8013AED4(&this->unk262, 4U, 7U);
    } else {
        gSaveContext.eventInf[4] = temp_t2;
        gSaveContext.eventInf[4] = temp_t2 & 0xF7;
    }
    this->actionFunc = func_80BC0D84;
    func_80BC0D84(this, globalCtx);
}

void EnNb_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnNb *this = (EnNb *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk190);
    globalCtx->interfaceCtx.unk_31A = 3;
}

void EnNb_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnNb *this = (EnNb *) thisx;
    func_80BC04FC(&this->actor, globalCtx);
    this->actionFunc(this, globalCtx);
    func_80BC0A18(this, globalCtx);
    if (this->unk1DC != 0) {
        func_80BBFE60(this);
        func_80BC0800(this);
        if (Actor_IsActorFacingLink(&this->actor, 0x38E0) != 0) {
            func_8013C964(&this->actor, globalCtx, this->unk274, 30.0f, 0, (s16) (this->unk262 & 7));
        }
        func_80BBFF24(&this->actor, globalCtx);
    }
}

s32 func_80BC1174(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg1 == 5) {
        func_80BC05A8(arg5, arg0, arg0);
    }
    return 0;
}

void func_80BC11B4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f sp18;

    if ((ActorCutscene_GetCurrentIndex() == -1) && (arg1 == 5)) {
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, &sp18);
        Math_ApproachF(arg4 + 0x3C, sp18.x, 0.6f, 10000.0f);
        Math_ApproachF(arg4 + 0x40, sp18.y, 0.6f, 10000.0f);
        Math_ApproachF(arg4 + 0x44, sp18.z, 0.6f, 10000.0f);
        Math_Vec3s_Copy(arg4 + 0x48, arg4 + 0x30);
    }
}

void func_80BC1278(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    u16 temp_v0;
    s32 phi_v0;
    s32 phi_v1;

    temp_v0 = arg2->unk262;
    phi_v1 = 0;
    if ((temp_v0 & 0x400) == 0) {
        if ((temp_v0 & 0x100) != 0) {
            phi_v0 = 1;
            phi_v1 = 1;
        } else {
            phi_v0 = 1;
        }
    } else {
        phi_v0 = 0;
    }
    if (arg1 == 5) {
        func_8013AD9C((s16) (arg2->unk27C + 0x4000), (s16) (arg2->unk27E + arg2->shape.rot.y + 0x4000), arg2 + 0x1F0, arg2 + 0x1FC, phi_v0, phi_v1);
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(arg2->unk1F0, arg2->unk1F4, arg2->unk1F8, 0);
        Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
        Matrix_RotateY(arg2->unk1FE, 1U);
        SysMatrix_InsertXRotation_s(arg2->unk1FC, 1);
        SysMatrix_InsertZRotation_s(arg2->unk200, 1);
        SysMatrix_StatePush();
    }
}

void EnNb_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnNb *this = (EnNb *) thisx;
    if (this->unk1DC != 0) {
        func_8012C5B0(globalCtx->state.gfxCtx);
        func_801343C0(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80BC1174, func_80BC11B4, func_80BC1278, &this->actor);
    }
}

