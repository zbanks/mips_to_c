? func_800E0308(Camera *, Actor *);                 /* extern */
? func_8013AD9C(s16, s16, void *, void *, s32, s32); /* extern */
Actor *func_80BDE1A0(GlobalContext *arg0, GlobalContext *arg1, s32 arg2, s16 arg3); /* static */
void func_80BDE250(EnAl *arg0);                     /* static */
s32 func_80BDE27C(Actor *arg0, s32 arg1);           /* static */
void func_80BDE318(Actor *arg0, GlobalContext *arg1); /* static */
Actor *func_80BDE384(EnAl *arg0, GlobalContext *arg1); /* static */
s32 func_80BDE408(Actor *arg0, s16 arg1);           /* static */
s8 func_80BDE484(Actor *arg0, s32 arg1);            /* static */
s32 func_80BDE4E0(Actor *arg0, s16 *arg1, s16 arg2, Actor *); /* static */
s32 func_80BDE678(Actor *arg0, s16 *arg1, s16 arg2, Actor *); /* static */
s32 func_80BDE7FC(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BDE92C(GlobalContext *arg0, GlobalContext *arg1); /* static */
s32 func_80BDEA14(GlobalContext *arg0, GlobalContext *arg1); /* static */
? *func_80BDEABC(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BDEC2C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BDED20(void *arg0);                     /* static */
void func_80BDEE5C(EnAl *arg0);                     /* static */
void func_80BDEF3C(Actor *arg0, ? arg1);            /* static */
void func_80BDEFE4(Actor *arg0, ? arg1);            /* static */
? func_80BDF064(GlobalContext *arg0, GlobalContext *arg1); /* static */
s32 func_80BDF244(GlobalContext *arg0, GlobalContext *arg1, ? arg2); /* static */
s32 func_80BDF308(Actor *arg0, ? arg1, u8 *arg2);   /* static */
s32 func_80BDF390(EnAl *arg0, u8 *arg2, struct_80133038_arg2 *); /* static */
void func_80BDF414(Actor *arg0, ? arg1);            /* static */
void func_80BDF568(Actor *arg0, ? arg1);            /* static */
void func_80BDF578(Actor *arg0, GlobalContext *);   /* static */
s32 func_80BDF914(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_80BDF950(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80BDFA34(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern FlexSkeletonHeader D_0600A0D8;
static void D_80BDFC70;                             /* unable to generate initializer */
static ? D_80BDFCBC;                                /* unable to generate initializer */
static ? D_80BDFD14;                                /* unable to generate initializer */
static ? D_80BDFDD0;                                /* unable to generate initializer */
static ? D_80BDFDE8;                                /* unable to generate initializer */
static ? D_80BDFDF8;                                /* unable to generate initializer */
static ? D_80BDFE7C;                                /* unable to generate initializer */
static ? D_80BDFE84;                                /* unable to generate initializer */
static ? D_80BDFE8C;                                /* unable to generate initializer */
static ? D_80BDFED4;                                /* unable to generate initializer */
static ? D_80BDFF24;                                /* unable to generate initializer */
static ColliderCylinderInit D_80BDFFB8 = {
    {1, 0, 0, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0xE, 0x3E, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80BDFFE4 = {0, 0, 0, 0, 0xFF};
static ActorAnimationEntryS D_80BDFFF0 = {
    {(AnimationHeader *)0x6000C54, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x600DBE0, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600DBE0, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x600ACA0, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600ACA0, -1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600CA28, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x600BCA4, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600A764, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
};
static Vec3f D_80BE0070 = {1000.0f, 0.0f, 0.0f};
static ? D_80BE007C;                                /* unable to generate initializer */
static ? D_80BE0094;                                /* unable to generate initializer */

typedef struct EnAl {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ void (*actionFunc)(EnAl *, GlobalContext *);
    /* 0x018C */ char pad18C[0x4];                  /* maybe part of actionFunc[2]? */
    /* 0x0190 */ MtxF unk190;                       /* inferred */
    /* 0x01D0 */ char pad1D0[0x140];                /* maybe part of unk190[6]? */
    /* 0x0310 */ ColliderCylinder unk310;           /* inferred */
    /* 0x035C */ u8 unk35C;                         /* inferred */
    /* 0x035D */ char pad35D[0x3];                  /* maybe part of unk35C[4]? */
    /* 0x0360 */ s32 *unk360;                       /* inferred */
    /* 0x0364 */ s32 unk364;                        /* inferred */
    /* 0x0368 */ Actor *unk368;                     /* inferred */
    /* 0x036C */ char pad36C[0x12];
    /* 0x037E */ Vec3s unk37E;                      /* inferred */
    /* 0x0384 */ char pad384[0x9C];                 /* maybe part of unk37E[27]? */
    /* 0x0420 */ Vec3s unk420;                      /* inferred */
    /* 0x0426 */ char pad426[0x9C];                 /* maybe part of unk420[27]? */
    /* 0x04C2 */ u16 unk4C2;                        /* inferred */
    /* 0x04C4 */ char pad4C4[0x4];                  /* maybe part of unk4C2[3]? */
    /* 0x04C8 */ f32 unk4C8;                        /* inferred */
    /* 0x04CC */ char pad4CC[0x8];                  /* maybe part of unk4C8[3]? */
    /* 0x04D4 */ f32 unk4D4;                        /* inferred */
    /* 0x04D8 */ char pad4D8[0x4];                  /* maybe part of unk4D4[2]? */
    /* 0x04DC */ s16 unk4DC;                        /* inferred */
    /* 0x04DE */ s16 unk4DE;                        /* inferred */
    /* 0x04E0 */ s16 unk4E0;                        /* inferred */
    /* 0x04E2 */ s16 unk4E2;                        /* inferred */
    /* 0x04E4 */ char pad4E4[0x8];                  /* maybe part of unk4E2[5]? */
    /* 0x04EC */ void *unk4EC;                      /* inferred */
    /* 0x04F0 */ s32 unk4F0;                        /* inferred */
    /* 0x04F4 */ char pad4F4[0x4];                  /* maybe part of unk4F0[2]? */
    /* 0x04F8 */ s32 unk4F8;                        /* inferred */
    /* 0x04FC */ char pad4FC[0x4];                  /* maybe part of unk4F8[2]? */
} EnAl;                                             /* size 0x500 */

Actor *func_80BDE1A0(GlobalContext *arg0, GlobalContext *arg1, s32 arg2, s16 arg3) {
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

void func_80BDE250(EnAl *arg0) {
    arg0->unk144.animPlaybackSpeed = arg0->unk4C8;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
}

s32 func_80BDE27C(Actor *arg0, s32 arg1) {
    SkelAnime *temp_a0;
    s32 temp_t0;
    s32 temp_v0;
    s32 phi_v1;
    s32 phi_t0;

    phi_v1 = 0;
    phi_t0 = 0;
    if ((arg1 == 1) || (arg1 == 2)) {
        temp_v0 = arg0->unk4F8;
        if ((temp_v0 != 1) && (temp_v0 != 2)) {
            goto block_6;
        }
    } else if (arg1 != arg0->unk4F8) {
block_6:
        phi_v1 = 1;
    }
    temp_a0 = arg0 + 0x144;
    if (phi_v1 != 0) {
        arg0->unk4F8 = arg1;
        arg0 = arg0;
        temp_t0 = func_8013BC6C(temp_a0, &D_80BDFFF0, arg1);
        arg0->unk4C8 = (f32) arg0->unk160;
        phi_t0 = temp_t0;
    }
    return phi_t0;
}

void func_80BDE318(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    Actor *temp_a0;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x310;
    temp_a1 = temp_a2;
    sp1C = temp_a2;
    temp_a0 = arg0;
    arg0 = arg0;
    Collider_UpdateCylinder(temp_a0, temp_a1);
    arg0->unk352 = (s16) (s32) (arg0->focus.pos.y - arg0->world.pos.y);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, &temp_a2->base);
}

Actor *func_80BDE384(EnAl *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    Actor *phi_v1;

    temp_v0 = arg0->unk35C;
    if (temp_v0 != 2) {
        if (temp_v0 != 3) {
            phi_v1 = arg1->actorCtx.actorList[2].first;
        } else {
            phi_v1 = arg0->unk368;
        }
    } else if (((gSaveContext.weekEventReg[89] & 8) == 0) && ((gSaveContext.weekEventReg[85] & 0x80) != 0)) {
        phi_v1 = func_80BDE1A0((GlobalContext *)4, (GlobalContext *)0x1D5);
    } else {
        phi_v1 = arg1->actorCtx.actorList[2].first;
    }
    return phi_v1;
}

s32 func_80BDE408(Actor *arg0, s16 arg1) {
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

s8 func_80BDE484(Actor *arg0, s32 arg1) {
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

s32 func_80BDE4E0(Actor *arg0, s16 *arg1, s16 arg2) {
    s32 sp44;
    s16 sp42;
    Vec3f sp34;
    Vec3f sp28;
    s32 temp_lo;
    s32 temp_v0_2;
    void *temp_v0;

    sp44 = 0;
    temp_v0 = arg0->unk368;
    if ((temp_v0 == 0) || (temp_v0->unk138 == 0)) {
        return 1;
    }
    if (arg2 == *arg1) {
        Audio_PlayActorSound2(arg0, 0x2892U);
        func_80BDE27C(arg0, 3);
        arg0->unk4E8 = 0;
        *arg1 += 1;
    }
    if ((arg2 + 1) == *arg1) {
        Math_Vec3f_Copy(&sp28, arg0->unk368 + 0x24);
        Math_Vec3f_Copy(&sp34, &arg0->world.pos);
        temp_v0_2 = Math_Vec3f_Yaw(&sp34, &sp28);
        temp_lo = temp_v0_2 / 0x16C;
        sp42 = (s16) temp_v0_2;
        arg0->unk4E8 = (s16) (arg0->unk4E8 + 1);
        if ((temp_lo != ((s32) arg0->world.rot.y / 0x16C)) && ((s32) arg0->unk4E8 < 0x14)) {
            Math_ApproachS(&arg0->world.rot.y, sp42, 3, 0x2AA8);
        } else {
            func_80BDE27C(arg0, 5);
            arg0->unk4E8 = 0;
            arg0->world.rot.y = sp42;
            *arg1 += 1;
            sp44 = 1;
        }
    }
    return sp44;
}

s32 func_80BDE678(Actor *arg0, s16 *arg1, s16 arg2) {
    s32 sp24;
    s16 sp22;
    s16 temp_v0_2;
    void *temp_v0;
    s16 phi_v0;

    sp24 = 0;
    temp_v0 = arg0->unk368;
    if ((temp_v0 == 0) || (temp_v0->unk138 == 0)) {
        return 1;
    }
    temp_v0_2 = *arg1;
    phi_v0 = temp_v0_2;
    if (arg2 == temp_v0_2) {
        arg1 = arg1;
        Audio_PlayActorSound2(arg0, 0x2892U);
        func_80BDE27C(arg0, 4);
        arg0->unk4E8 = 0;
        *arg1 += 1;
        phi_v0 = *arg1;
    }
    if ((arg2 + 1) == phi_v0) {
        sp22 = arg0->home.rot.y;
        arg0->unk4E8 = (s16) (arg0->unk4E8 + 1);
        if ((((s32) sp22 / 0x16C) != ((s32) arg0->world.rot.y / 0x16C)) && ((s32) arg0->unk4E8 < 0x14)) {
            Math_ApproachS(&arg0->world.rot.y, sp22, 3, 0x2AA8);
        } else {
            arg1 = arg1;
            func_80BDE27C(arg0, 2);
            arg0->unk4E8 = 0;
            arg0->world.rot.y = sp22;
            *arg1 += 1;
            sp24 = 1;
        }
    }
    return sp24;
}

s32 func_80BDE7FC(Actor *arg0, GlobalContext *arg1) {
    s16 sp2A;
    s32 sp20;
    Actor *temp_v0;
    s16 temp_a1;
    u16 temp_t6;
    s32 phi_v1;

    temp_t6 = arg0->unk4E6;
    temp_a1 = func_80BDE484(arg0, 0);
    phi_v1 = 0;
    switch (temp_t6) {
    case 0:
        sp20 = 0;
        sp2A = temp_a1;
        if (func_80BDE408(arg0, temp_a1) != 0) {
        case 2:
        case 4:
        case 6:
        case 8:
            temp_v0 = arg0->child;
            if ((temp_v0 != 0) && (temp_v0->update != 0)) {
                func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(temp_a1)), arg0->child);
            }
            arg0->unk4E6 = (u16) ((s16) arg0->unk4E6 + 1);
            phi_v1 = 1;
        }
        break;
    case 1:
    case 3:
    case 5:
    case 7:
        func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(temp_a1)), arg0);
        arg0->unk4E6 = (u16) ((s16) arg0->unk4E6 + 1);
        phi_v1 = 1;
        break;
    case 9:
        ActorCutscene_Stop(temp_a1);
        arg0->unk4E6 = (u16) ((s16) arg0->unk4E6 + 1);
        phi_v1 = 1;
        break;
    }
    return phi_v1;
}

s32 func_80BDE92C(GlobalContext *arg0, GlobalContext *arg1) {
    Actor *sp1C;
    Actor *temp_v0;
    s16 temp_v1;

    sp1C = func_80BDE1A0(arg1, (GlobalContext *)4, 0xA4);
    temp_v0 = func_80BDE1A0(arg0, arg1, 4, 0x234);
    if ((sp1C == 0) || (sp1C->update == 0) || (temp_v0 == 0) || (temp_v0->update == 0)) {
        arg0->subCameras[0].childCamIdx += 1;
        return 1;
    }
    temp_v1 = arg0->subCameras[0].childCamIdx;
    switch (temp_v1) {
    case 0:
    case 1:
    case 3:
    case 5:
    case 8:
    case 10:
    case 11:
    case 13:
    case 15:
    case 17:
        arg0->view.projection.m[0][3] = (s32) sp1C;
        arg0->subCameras[0].childCamIdx = temp_v1 + 1;
        break;
    case 7:
    case 9:
    case 12:
        arg0->view.projection.m[0][3] = (s32) temp_v0;
        arg0->subCameras[0].childCamIdx = temp_v1 + 1;
        break;
    case 2:
    case 4:
    case 6:
    case 14:
    case 16:
        arg0->subCameras[0].childCamIdx = temp_v1 + 1;
        break;
    default:
        arg0->subCameras[0].childCamIdx = temp_v1 + 1;
        break;
    }
    return 1;
}

s32 func_80BDEA14(GlobalContext *arg0, GlobalContext *arg1) {
    s32 sp18;
    s16 temp_v0;
    s32 phi_v1;

    temp_v0 = arg0->subCameras[0].childCamIdx;
    phi_v1 = 0;
    if ((temp_v0 != 0) && (temp_v0 != 1)) {
        if ((temp_v0 != 2) && (temp_v0 != 3)) {

        } else {
            sp18 = 0;
            if (func_80BDE678(arg0 + 0x4E6, (s16 *)2) != 0) {
                goto block_10;
            }
        }
    } else {
        if ((gSaveContext.weekEventReg[75] & 2) != 0) {
            goto block_10;
        }
        sp18 = 0;
        if (func_80BDE4E0(arg0 + 0x4E6, NULL) != 0) {
block_10:
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

? *func_80BDEABC(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v0_2;
    u8 temp_v0;

    temp_v0 = arg0->unk35C;
    if (temp_v0 == 3) {
        arg0->unk4EC = func_80BDE92C;
        return &D_80BDFD14;
    }
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            return NULL;
        }
        if (((gSaveContext.weekEventReg[89] & 8) == 0) && ((gSaveContext.weekEventReg[85] & 0x80) != 0)) {
            arg0->unk4EC = (s32 (*)(GlobalContext *, GlobalContext *)) func_80BDE7FC;
            return &D_80BDFCBC;
        }
        arg0->unk4EC = func_80BDEA14;
        arg0 = arg0;
        if (Player_GetMask(arg1) != 2) {
            return &D_80BDFDE8;
        }
        temp_v0_2 = arg0->unk4C2;
        if ((temp_v0_2 & 0x800) != 0) {
            return &D_80BDFED4;
        }
        if ((temp_v0_2 & 0x1000) != 0) {
            return &D_80BDFF24;
        }
        return &D_80BDFDF8;
    }
    if (arg1->actorCtx.actorList[2].first->unk14B == 3) {
        return &D_80BDFDD0;
    }
    if (gSaveContext.inventory.items[gItemSlots[0x37]] != 0x37) {
        return &D_80BDFE8C;
    }
    if (Player_GetMask(arg1) == 2) {
        return &D_80BDFE7C;
    }
    return &D_80BDFE84;
}

s32 func_80BDEC2C(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    s32 sp20;
    s8 temp_v0;
    u16 temp_t9;
    void *temp_a2;
    s32 phi_v1;

    temp_a2 = arg1->actorCtx.actorList[2].first;
    phi_v1 = 0;
    if ((arg0->unk4C2 & 7) != 0) {
        sp20 = 0;
        sp24 = temp_a2;
        phi_v1 = sp20;
        if (func_800B84D0(arg0, arg1) != 0) {
            temp_t9 = arg0->unk4C2 & ~0x1800;
            arg0->unk4C2 = temp_t9;
            temp_v0 = temp_a2->unkA87;
            if (temp_v0 == 0x33) {
                arg0->unk4C2 = (u16) (temp_t9 | 0x800);
                arg0->unk4F4 = (s32) temp_a2->unkA87;
            } else if (temp_v0 != 0) {
                arg0->unk4C2 = (u16) (arg0->unk4C2 | 0x1000);
                arg0->unk4F4 = (s32) temp_a2->unkA87;
            }
            func_8013AED4(arg0 + 0x4C2, 0U, 7U);
            arg0->unk4E6 = 0;
            arg0->unk4EC = 0;
            arg0->child = arg0->unk368;
            arg0->unk360 = func_80BDEABC(arg0, arg1);
            arg0->unk4C2 = (u16) (arg0->unk4C2 | 0x20);
            arg0->unk188 = func_80BDF6C4;
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

void func_80BDED20(void *arg0) {
    Vec3f sp40;
    Vec3f sp34;
    s16 temp_v0;
    s16 temp_v0_3;
    void *temp_v0_2;
    s16 phi_v1;
    s16 phi_v1_2;

    Math_Vec3f_Copy(&sp40, arg0->unk368 + 0x24);
    Math_Vec3f_Copy(&sp34, arg0 + 0x24);
    Math_ApproachS(arg0 + 0x4DE, (s16) (Math_Vec3f_Yaw(&sp34, &sp40) - arg0->unkBE), 4, 0x2AA8);
    temp_v0 = arg0->unk4DE;
    if ((s32) temp_v0 < -0x1FFE) {
        arg0->unk4DE = -0x1FFE;
    } else {
        phi_v1 = temp_v0;
        if ((s32) temp_v0 >= 0x1FFF) {
            phi_v1 = 0x1FFE;
        }
        arg0->unk4DE = phi_v1;
    }
    Math_Vec3f_Copy(&sp34, arg0 + 0x3C);
    temp_v0_2 = arg0->unk368;
    if (temp_v0_2->unk0 == 0) {
        sp40.y = temp_v0_2->unkC44 + 3.0f;
    } else {
        Math_Vec3f_Copy(&sp40, temp_v0_2 + 0x3C);
    }
    Math_ApproachS(arg0 + 0x4DC, Math_Vec3f_Pitch(&sp34, &sp40), 4, 0x2AA8);
    temp_v0_3 = arg0->unk4DC;
    if ((s32) temp_v0_3 < -0x1554) {
        arg0->unk4DC = -0x1554;
        return;
    }
    phi_v1_2 = temp_v0_3;
    if ((s32) temp_v0_3 >= 0x1555) {
        phi_v1_2 = 0x1554;
    }
    arg0->unk4DC = phi_v1_2;
}

void func_80BDEE5C(EnAl *arg0) {
    s16 temp_v0_2;
    s16 temp_v0_4;
    u16 temp_t2;
    u16 temp_t3;
    u16 temp_v0_3;
    void *temp_v0;
    s16 phi_v1;
    s16 phi_v1_2;

    if (((arg0->unk4C2 & 0x20) != 0) && (temp_v0 = arg0->unk368, (temp_v0 != 0)) && (temp_v0->update != 0)) {
        temp_v0_2 = arg0->unk4E2;
        if (temp_v0_2 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk4E2 = temp_v0_2 - 1;
            phi_v1 = arg0->unk4E2;
        }
        if (phi_v1 == 0) {
            func_80BDED20();
            temp_t2 = arg0->unk4C2 & 0xFDFF;
            temp_t3 = temp_t2 | 0x80;
            arg0->unk4C2 = temp_t2;
            arg0->unk4C2 = temp_t3;
            return;
        }
        goto block_8;
    }
block_8:
    temp_v0_3 = arg0->unk4C2;
    if ((temp_v0_3 & 0x80) != 0) {
        arg0->unk4C2 = temp_v0_3 & 0xFF7F;
        arg0->unk4DC = 0;
        arg0->unk4DE = 0;
        arg0->unk4E2 = 0x14;
        return;
    }
    temp_v0_4 = arg0->unk4E2;
    if (temp_v0_4 == 0) {
        phi_v1_2 = 0;
    } else {
        arg0->unk4E2 = temp_v0_4 - 1;
        phi_v1_2 = arg0->unk4E2;
    }
    if (phi_v1_2 == 0) {
        arg0->unk4C2 |= 0x200;
    }
}

void func_80BDEF3C(Actor *arg0, ? arg1) {
    s16 temp_v0;
    u16 temp_t4;
    u16 temp_t8;

    temp_v0 = arg0->unk4E4;
    if (temp_v0 == 0) {
        func_80BDE27C(arg0, 7);
        temp_t8 = arg0->unk4C2 & 0xFFDF;
        arg0->unk4C2 = temp_t8;
        arg0->unk4C2 = (u16) (temp_t8 | 0x200);
        arg0->unk4E4 = (s16) (arg0->unk4E4 + 1);
        return;
    }
    if ((temp_v0 == 1) && (func_801378B8((SkelAnime *) (arg0 + 0x144), arg0->unk154) != 0)) {
        func_80BDE27C(arg0, 0);
        temp_t4 = arg0->unk4C2 & 0xFDFF;
        arg0->unk4C2 = temp_t4;
        arg0->unk4C2 = (u16) (temp_t4 | 0x20);
        arg0->unk4E4 = (s16) (arg0->unk4E4 + 1);
    }
}

void func_80BDEFE4(Actor *arg0, ? arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk4E4;
    if (temp_v0 == 0) {
        func_80BDE27C(arg0, 6);
        arg0->unk4E4 = (s16) (arg0->unk4E4 + 1);
        return;
    }
    if ((temp_v0 == 1) && (func_801378B8((SkelAnime *) (arg0 + 0x144), arg0->unk154) != 0)) {
        func_80BDE27C(arg0, 5);
        arg0->unk4E4 = (s16) (arg0->unk4E4 + 1);
    }
}

? func_80BDF064(GlobalContext *arg0, GlobalContext *arg1) {
    void *sp24;
    u16 sp22;
    Actor *sp1C;
    ? (*temp_v0_3)(GlobalContext *, GlobalContext *);
    Actor *temp_v0;
    GlobalContext *temp_a0;
    u16 temp_v0_2;
    GlobalContext *phi_a0;
    GlobalContext *phi_a0_2;

    sp24 = arg1->actorCtx.actorList[2].first;
    sp22 = arg1->msgCtx.unk11F04;
    sp1C = func_80BDE1A0((GlobalContext *)4, (GlobalContext *)0xA4);
    temp_v0 = func_80BDE1A0(arg0, arg1, 4, 0x234);
    temp_a0 = arg0;
    phi_a0 = temp_a0;
    phi_a0_2 = temp_a0;
    if ((sp24->unkA6C & 0x40) != 0) {
        temp_a0->unk4C2 = (u16) (temp_a0->unk4C2 | 0x400);
        if (sp22 != (u16) temp_a0->subCameras[0].data2) {
            switch (sp22) {
            case 10918:
            case 10927:
            case 10932:
                if ((sp1C != 0) && (sp1C->update != 0)) {
                    temp_a0->unk368 = sp1C;
                }
                break;
            case 10925:
            case 10928:
                if ((temp_v0 != 0) && (temp_v0->update != 0)) {
                    temp_a0->unk368 = temp_v0;
                }
                break;
            }
            if ((s32) sp22 >= 0x2AB5) {
                if ((sp22 != 0x2AE6) && (sp22 != 0x2AE8) && (sp22 != 0x2AE9)) {
                    if (sp22 != 0x2B19) {
                        if (sp22 != 0x2B1E) {
                            if ((sp22 != 0x2B20) && (sp22 != 0x2B3C)) {

                            } else {
                                goto block_28;
                            }
                        } else {
                            goto block_27;
                        }
                    } else {
block_28:
                        arg0 = temp_a0;
                        func_80BDE27C((Actor *) temp_a0, 5);
                        phi_a0 = arg0;
                    }
                } else {
                    goto block_26;
                }
            } else if ((sp22 != 0x27A6) && (sp22 != 0x27A8) && (sp22 != 0x27AA)) {
                if ((sp22 == 0x2AA1) || (sp22 == 0x2AA2) || (sp22 == 0x2AA7) || (sp22 == 0x2AB4)) {
block_26:
                    temp_a0->view.viewing.m[3][1] = (s32) func_80BDEF3C;
                    temp_a0->subCameras[0].flags2 = 0;
                }
            } else {
block_27:
                temp_a0->view.viewing.m[3][1] = (s32) func_80BDEFE4;
                temp_a0->subCameras[0].flags2 = 0;
            }
        }
        phi_a0->subCameras[0].data2 = sp22;
        phi_a0_2 = phi_a0;
    } else {
        temp_v0_2 = temp_a0->unk4C2;
        if ((temp_v0_2 & 0x400) != 0) {
            temp_a0->subCameras[0].data2 = 0;
            temp_a0->unk4C2 = (u16) (temp_v0_2 & 0xFBFF);
        }
    }
    temp_v0_3 = phi_a0_2->view.viewing.m[3][1];
    if (temp_v0_3 != 0) {
        temp_v0_3(phi_a0_2, arg1);
    }
    return 0;
}

s32 func_80BDF244(GlobalContext *arg0, GlobalContext *arg1, ? arg2) {
    s32 sp24;
    Actor *sp20;
    Actor *temp_v0;

    sp24 = 0;
    sp20 = func_80BDE1A0(arg0, arg1, 4, 0xA4);
    temp_v0 = func_80BDE1A0(arg0, arg1, 4, 0x234);
    if ((sp20 != 0) && (sp20->update != 0) && (temp_v0 != 0) && (temp_v0->update != 0)) {
        func_80BDE27C((Actor *) arg0, 0);
        func_8013AED4(arg0 + 0x4C2, 3U, 7U);
        arg0->unk4C2 = (u16) (arg0->unk4C2 | 0x20);
        arg0->unk368 = sp20;
        sp24 = 1;
    }
    return sp24;
}

s32 func_80BDF308(Actor *arg0, ? arg1, u8 *arg2) {
    u16 *temp_a0;
    u8 temp_v0;

    temp_a0 = arg0 + 0x4C2;
    arg0 = arg0;
    func_8013AED4(temp_a0, 3U, 7U);
    temp_v0 = *arg2;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {

        } else {
            arg0->unk4F0 = 0;
            arg0->unk4EA = 0;
            func_80BDE27C(arg0, 2);
        }
    } else {
        func_80BDE27C(arg0, 0);
    }
    return 1;
}

s32 func_80BDF390(EnAl *arg0, u8 *arg2) {
    u8 temp_v0;
    s32 phi_v1;
    s32 phi_v0;

    arg0->actor.flags |= 1;
    arg0->actor.targetMode = 0;
    arg0->unk4F0 = 0;
    arg0->unk4C2 = 0;
    arg0->unk4D4 = 40.0f;
    temp_v0 = *arg2;
    if ((temp_v0 != 1) && (temp_v0 != 2)) {
        if (temp_v0 != 3) {
            phi_v1 = 0;
        } else {
            phi_v0 = func_80BDF244();
            goto block_6;
        }
    } else {
        phi_v0 = func_80BDF308();
block_6:
        phi_v1 = phi_v0;
    }
    return phi_v1;
}

void func_80BDF414(Actor *arg0, ? arg1) {
    Actor *temp_a0;
    Actor *temp_a3;
    s16 *temp_a1_2;
    s16 temp_a1;
    s16 temp_v0;
    s16 phi_a1;
    Actor *phi_a3;
    s32 phi_v1;
    s32 phi_v1_2;
    Actor *phi_a3_2;

    temp_a3 = arg0;
    temp_a1 = temp_a3->unk4EA;
    phi_a1 = temp_a1;
    phi_a3 = temp_a3;
    phi_a3_2 = temp_a3;
    switch (temp_a1) {
    case 0:
    case 1:
        if ((gSaveContext.weekEventReg[89] & 8) == 0) {
            temp_a0 = temp_a3;
            if ((gSaveContext.weekEventReg[85] & 0x80) != 0) {
                temp_a1_2 = temp_a3 + 0x4EA;
                arg0 = temp_a3;
                func_80BDE4E0(temp_a0, temp_a1_2, 0, temp_a3);
                phi_a3_2 = arg0;
block_8:
                phi_a1 = phi_a3_2->unk4EA;
                phi_a3 = phi_a3_2;
            }
        }
        break;
    case 2:
        if ((gSaveContext.weekEventReg[89] & 8) != 0) {
            temp_a3->unk4EA = (s16) (temp_a1 + 1);
            goto block_8;
        }
        break;
    case 3:
    case 4:
        arg0 = temp_a3;
        func_80BDE678(temp_a3, temp_a3 + 0x4EA, 3, temp_a3);
        phi_a3_2 = arg0;
        goto block_8;
    }
    temp_v0 = phi_a3->world.rot.y - phi_a3->yawTowardsPlayer;
    if (phi_a1 == 0) {
        phi_v1 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = -(s32) temp_v0;
        }
        if (phi_v1 < 0x5800) {
            goto block_13;
        }
        goto block_18;
    }
block_13:
    if (phi_a1 == 5) {
        phi_v1_2 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1_2 = -(s32) temp_v0;
        }
        if (phi_v1_2 < 0x5800) {
            goto block_17;
        }
        goto block_18;
    }
block_17:
    if (phi_a1 == 2) {
block_18:
        func_8013AED4(phi_a3 + 0x4C2, 3U, 7U);
        return;
    }
    func_8013AED4(phi_a3 + 0x4C2, 0U, 7U);
}

void func_80BDF568(Actor *arg0, ? arg1) {

}

void func_80BDF578(Actor *arg0) {
    u8 temp_v0;

    temp_v0 = arg0->unk35C;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 == 3) {
                goto block_3;
            }
        } else {
            func_80BDF414(arg0);
        }
    } else {
block_3:
        func_80BDF568(arg0);
    }
    Math_ApproachS(&arg0->shape.rot.y, arg0->world.rot.y, 3, 0x2AA8);
}

void func_80BDF5E8(EnAl *this, GlobalContext *globalCtx) {
    struct_80133038_arg2 sp20;

    this->unk4E0 = gSaveContext.unk_14 + gGameInfo->data[15];
    if ((func_80133038(globalCtx, &D_80BDFC70, &sp20) == 0) || ((sp20.unk0 != this->unk35C) && (func_80BDF390(this, (u8 *) globalCtx, &sp20) == 0))) {
        this->actor.shape.shadowDraw = NULL;
        this->actor.flags &= -2;
        sp20.unk0 = 0;
    } else {
        this->actor.shape.shadowDraw = func_800B3FC0;
        this->actor.flags |= 1;
    }
    this->unk35C = sp20.unk0;
    this->unk368 = func_80BDE384(this, globalCtx);
    func_80BDF578(&this->actor, globalCtx);
}

void func_80BDF6C4(EnAl *this, GlobalContext *globalCtx) {
    u16 temp_t9;

    if (func_8010BF58(&this->actor, globalCtx, this->unk360, this->unk4EC, &this->unk364) != 0) {
        func_8013AED4(&this->unk4C2, 3U, 7U);
        temp_t9 = this->unk4C2 & 0xFFDF;
        this->unk4C2 = temp_t9;
        this->unk4C2 = temp_t9 | 0x200;
        this->actor.child = NULL;
        this->unk4E2 = 0x14;
        this->unk364 = 0;
        this->actionFunc = func_80BDF5E8;
        return;
    }
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.world.rot.y, 3, 0x2AA8);
}

void EnAl_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnAl *this = (EnAl *) thisx;
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_0600A0D8, NULL, &this->unk37E, &this->unk420, 0x1B);
    this->unk4F8 = -1;
    func_80BDE27C(&this->actor, 1);
    Collider_InitAndSetCylinder(globalCtx, &this->unk310, &this->actor, &D_80BDFFB8);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80BDFFE4);
    Actor_SetScale(&this->actor, 0.01f);
    this->unk35C = 0;
    this->actionFunc = func_80BDF5E8;
    func_80BDF5E8(this, globalCtx);
}

void EnAl_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnAl *this = (EnAl *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk310);
}

void EnAl_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnAl *this = (EnAl *) thisx;
    func_80BDEC2C(&this->actor, globalCtx);
    this->actionFunc(this, globalCtx);
    func_80BDF064((GlobalContext *) this, globalCtx);
    if (this->unk35C != 0) {
        func_80BDE250(this);
        func_80BDEE5C(this);
        func_8013C964(&this->actor, globalCtx, this->unk4D4, 30.0f, this->unk4F0, (s16) (this->unk4C2 & 7));
        func_80BDE318(&this->actor, globalCtx);
    }
}

s32 func_80BDF914(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    switch (arg1) {
    case 3:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        *arg2 = NULL;
        break;
    }
    return 0;
}

void func_80BDF950(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    switch (arg1) {
    case 3:
        SysMatrix_CopyCurrentState(arg4 + 0x190);
        return;
    case 11:
        SysMatrix_CopyCurrentState(arg4 + 0x1D0);
        return;
    case 12:
        SysMatrix_CopyCurrentState(arg4 + 0x210);
        return;
    case 13:
        SysMatrix_CopyCurrentState(arg4 + 0x250);
        return;
    case 14:
        SysMatrix_CopyCurrentState(arg4 + 0x290);
        return;
    case 15:
        SysMatrix_CopyCurrentState(arg4 + 0x2D0);
        return;
    case 16:
        SysMatrix_MultiplyVector3fByState(&D_80BE0070, arg4 + 0x3C);
        Math_Vec3s_Copy(arg4 + 0x48, arg4 + 0x30);
        // fallthrough
    default:
        return;
    }
}

void func_80BDFA34(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    u16 temp_v0;
    s32 phi_v0;
    s32 phi_v1;

    temp_v0 = arg2->unk4C2;
    phi_v1 = 0;
    if ((temp_v0 & 0x200) == 0) {
        if ((temp_v0 & 0x80) != 0) {
            phi_v0 = 1;
            phi_v1 = 1;
        } else {
            phi_v0 = 1;
        }
    } else {
        phi_v0 = 0;
    }
    if (arg1 == 0x10) {
        func_8013AD9C((s16) (arg2->unk4DC + 0x4000), (s16) (arg2->unk4DE + arg2->shape.rot.y + 0x4000), arg2 + 0x36C, arg2 + 0x378, phi_v0, phi_v1);
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(arg2->unk36C, arg2->unk370, arg2->unk374, 0);
        Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
        Matrix_RotateY(arg2->unk37A, 1U);
        SysMatrix_InsertXRotation_s(arg2->unk378, 1);
        SysMatrix_InsertZRotation_s(arg2->unk37C, 1);
        SysMatrix_StatePush();
    }
}

void EnAl_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnAl *this = (EnAl *) thisx;
    ? *temp_s1;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s3;
    MtxF *phi_s2;
    ? *phi_s1;

    if (this->unk35C != 0) {
        temp_a0 = globalCtx->state.gfxCtx;
        temp_s3 = temp_a0;
        func_8012C28C(temp_a0);
        SysMatrix_InsertTranslation(0.0f, 0.0f, 850.0f, 1);
        func_801343C0(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80BDF914, func_80BDF950, func_80BDFA34, &this->actor);
        phi_s2 = &this->unk190;
        phi_s1 = &D_80BE007C;
        do {
            SysMatrix_SetCurrentState(phi_s2);
            temp_v0 = temp_s3->polyOpa.p;
            temp_s3->polyOpa.p = temp_v0 + 8;
            temp_v0->words.w0 = 0xDA380003;
            temp_v0->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_2 = temp_s3->polyOpa.p;
            temp_s1 = phi_s1 + 4;
            temp_s3->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xDE000000;
            temp_v0_2->words.w1 = temp_s1->unk-4;
            phi_s2 += 0x40;
            phi_s1 = temp_s1;
        } while (temp_s1 != &D_80BE0094);
    }
}

