typedef struct EnNb {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ void (*actionFunc)(EnNb *, GlobalContext *);
    /* 0x18C */ char pad_18C[0x4];
    /* 0x190 */ ColliderCylinder unk_190;           /* inferred */
    /* 0x1DC */ u8 unk_1DC;                         /* inferred */
    /* 0x1DD */ char pad_1DD[0x3];                  /* maybe part of unk_1DC[4]? */
    /* 0x1E0 */ s32 *unk_1E0;                       /* inferred */
    /* 0x1E4 */ s32 unk_1E4;                        /* inferred */
    /* 0x1E8 */ Actor *unk_1E8;                     /* inferred */
    /* 0x1EC */ char pad_1EC[0x16];                 /* maybe part of unk_1E8[6]? */
    /* 0x202 */ Vec3s unk_202;                      /* inferred */
    /* 0x208 */ char pad_208[0x2A];                 /* maybe part of unk_202[8]? */
    /* 0x232 */ Vec3s unk_232;                      /* inferred */
    /* 0x238 */ char pad_238[0x2A];                 /* maybe part of unk_232[8]? */
    /* 0x262 */ u16 unk_262;                        /* inferred */
    /* 0x264 */ char pad_264[0x10];                 /* maybe part of unk_262[9]? */
    /* 0x274 */ f32 unk_274;                        /* inferred */
    /* 0x278 */ char pad_278[0x8];                  /* maybe part of unk_274[3]? */
    /* 0x280 */ s16 unk_280;                        /* inferred */
    /* 0x282 */ s16 unk_282;                        /* inferred */
    /* 0x284 */ char pad_284[0x8];                  /* maybe part of unk_282[5]? */
    /* 0x28C */ void *unk_28C;                      /* inferred */
    /* 0x290 */ s32 unk_290;                        /* inferred */
    /* 0x294 */ char pad_294[0x8];                  /* maybe part of unk_290[3]? */
} EnNb;                                             /* size = 0x29C */

struct _mips2c_stack_EnNb_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnNb_Draw {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnNb_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnNb_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BBFDB0 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BBFE60 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BBFE8C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BBFF24 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ColliderCylinder *sp1C;              /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BBFF90 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BBFFD4 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BC0050 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BC00AC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x2];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BC01DC {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BC045C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC04FC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BC05A8 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BC06C4 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80BC0800 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC08E0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BC0978 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BC0A18 {
    /* 0x00 */ char pad_0[0x1A];
    /* 0x1A */ u16 sp1A;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BC0B98 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BC0C0C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC0C80 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC0D08 {};              /* size 0x0 */

struct _mips2c_stack_func_80BC0D1C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC0D84 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ u8 sp20;                             /* inferred */
    /* 0x21 */ char pad_21[0xF];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BC0EAC {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BC1174 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC11B4 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BC1278 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

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
void func_80BC08E0(EnNb *arg0, ? arg1);             /* static */
void func_80BC0978(EnNb *arg0, ? arg1);             /* static */
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
static ActorAnimationEntryS D_80BC1628[6] = {
    {(AnimationHeader *)0x6000990, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6000990, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6000290, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6000290, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x600052C, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60006D4, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
};

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
    arg0->unk_144.animPlaybackSpeed = arg0->unk_268;
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
        temp_v0 = arg0->unk_290;
        if ((temp_v0 != 0) && (temp_v0 != 1)) {
            goto block_6;
        }
    } else if (arg1 != arg0->unk_290) {
block_6:
        phi_v1 = 1;
    }
    temp_a0 = arg0 + 0x144;
    if (phi_v1 != 0) {
        arg0->unk_290 = arg1;
        arg0 = arg0;
        temp_t0 = func_8013BC6C(temp_a0, D_80BC1628, arg1);
        arg0->unk_268 = arg0->unk_144.animPlaybackSpeed;
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
    arg0->unk_1D2 = (s16) (s32) (arg0->focus.pos.y - arg0->world.pos.y);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, (Collider *) temp_a2);
}

Actor *func_80BBFF90(EnNb *arg0, GlobalContext *arg1) {
    Actor *phi_v1;

    if (arg0->unk_1DC == 2) {
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

    temp_a0 = arg0->unk_288;
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
            arg0->unk_288 = (s16) (arg0->unk_288 + 1);
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
        arg0->unk_288 = (s16) (arg0->unk_288 + 1);
        phi_v1 = 1;
        break;
    case 9:
        ActorCutscene_Stop(temp_a1);
        arg0->unk_288 = (s16) (arg0->unk_288 + 1);
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
    temp_t6 = arg0->unk_288;
    switch (temp_t6) {
    case 0:
        if (Player_GetMask(arg1) == 3) {
            arg0->unk_288 = 1U;
        } else {
            arg0->unk_288 = 5U;
        }
        break;
    case 1:
        func_8016A268(arg1, 1, 0, 0, 0, 0);
        arg0->unk_286 = 0x28;
        arg0->unk_288 = (u16) ((s16) arg0->unk_288 + 1);
        break;
    case 2:
        temp_v0 = 0x14 - arg0->unk_286;
        phi_v1 = temp_v0;
        if (temp_v0 < 0) {
            phi_v1 = -temp_v0;
        }
        gGameInfo->data[548] = (s16) (s32) (255.0f - (((f32) phi_v1 / 20.0f) * 255.0f));
        if (arg0->unk_286 == 0x14) {
            if ((gSaveContext.eventInf[4] & 4) != 0) {
                arg1->interfaceCtx.unk_31B = 0;
            } else {
                arg1->interfaceCtx.unk_31B = 1;
            }
            arg1->interfaceCtx.unk_31A = 6;
            gGameInfo->data[1435] = 0xFF;
        }
        if (arg0->unk_286 == 0) {
            phi_v1_2 = 0;
        } else {
            arg0->unk_286 = (s16) (arg0->unk_286 - 1);
            phi_v1_2 = arg0->unk_286;
        }
        if (phi_v1_2 == 0) {
            arg0->unk_288 = (u16) ((s16) arg0->unk_288 + 1);
        }
        break;
    case 3:
        arg1->interfaceCtx.unk_31A = 4;
        arg0->unk_288 = (u16) ((s16) arg0->unk_288 + 1);
        sp2C = 1;
        break;
    case 4:
        arg1->interfaceCtx.unk_31A = 5;
        arg0->unk_288 = (u16) ((s16) arg0->unk_288 + 1);
        /* fallthrough */
    case 5:
        if ((gSaveContext.eventInf[4] & 4) == 0) {
            gSaveContext.time = 0x5555;
            Sram_IncrementDay();
        } else {
            func_800FE658(120.0f);
        }
        arg0->unk_288 = (u16) ((s16) arg0->unk_288 + 1);
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
        arg0->unk_28C = func_80BC01DC;
        goto block_7;
    }
    if (arg0->unk_1DC == 2) {
        arg0->unk_28C = func_80BC00AC;
        return &D_80BC1574;
    }
    arg0 = arg0;
    if (Player_GetMask(arg1) == 2) {
        return &D_80BC15C8;
    }
    arg0->unk_28C = func_80BC01DC;
block_7:
    return &D_80BC1464;
}

s32 func_80BC04FC(Actor *arg0, GlobalContext *arg1) {
    s32 sp24;
    s32 phi_v1;

    phi_v1 = 0;
    if ((arg0->unk_262 & 7) != 0) {
        sp24 = 0;
        phi_v1 = sp24;
        if (func_800B84D0(arg0, arg1) != 0) {
            arg0->unk_262 = (u16) (arg0->unk_262 | 0x20);
            func_8013AED4(arg0 + 0x262, 0U, 7U);
            arg0->unk_288 = 0;
            arg0->unk_28C = 0;
            arg0->child = arg0->unk_1E8;
            arg0->unk_1E0 = func_80BC045C(arg0, arg1);
            arg0->unk_262 = (u16) (arg0->unk_262 | 0x20);
            arg0->unk_188 = func_80BC0EAC;
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
    if ((arg0 == sp2C->unk_A88) && (((s32) temp_a0 < 0xFF) || ((s32) temp_a0 >= 0x201)) && (temp_v0 == 3) && (arg0->unk_298 == 3)) {
        if (((u32) arg1->state.frames % 3U) == 0) {
            if (arg0->unk_26C == 120.0f) {
                arg0->unk_26C = 0.0f;
            } else {
                arg0->unk_26C = 120.0f;
            }
        }
    } else {
        arg0->unk_26C = 0.0f;
    }
    Math_SmoothStepToF(arg0 + 0x270, arg0->unk_26C, 0.8f, 40.0f, 10.0f);
    SysMatrix_InsertTranslation(arg0->unk_270, 0.0f, 0.0f, 1);
    arg0->unk_298 = sp28;
}

void func_80BC06C4(void *arg0) {
    f32 sp44;
    ? sp40;
    ? sp34;
    s16 temp_v0;
    s16 temp_v0_3;
    void *temp_v0_2;
    s16 phi_v1;
    s16 phi_v1_2;

    Math_Vec3f_Copy((Vec3f *) &sp40, arg0->unk_1E8 + 0x24);
    Math_Vec3f_Copy((Vec3f *) &sp34, arg0 + 0x24);
    Math_ApproachS(arg0 + 0x27E, (s16) (Math_Vec3f_Yaw((Vec3f *) &sp34, (Vec3f *) &sp40) - arg0->unk_BE), 4, 0x2AA8);
    temp_v0 = arg0->unk_27E;
    if ((s32) temp_v0 < -0x1FFE) {
        arg0->unk_27E = -0x1FFE;
    } else {
        phi_v1 = temp_v0;
        if ((s32) temp_v0 >= 0x1FFF) {
            phi_v1 = 0x1FFE;
        }
        arg0->unk_27E = phi_v1;
    }
    Math_Vec3f_Copy((Vec3f *) &sp34, arg0 + 0x3C);
    temp_v0_2 = arg0->unk_1E8;
    if (temp_v0_2->unk_0 == 0) {
        sp44 = temp_v0_2->unk_C44 + 3.0f;
    } else {
        Math_Vec3f_Copy((Vec3f *) &sp40, temp_v0_2 + 0x3C);
    }
    Math_ApproachS(arg0 + 0x27C, Math_Vec3f_Pitch((Vec3f *) &sp34, (Vec3f *) &sp40), 4, 0x2AA8);
    temp_v0_3 = arg0->unk_27C;
    if ((s32) temp_v0_3 < -0x1554) {
        arg0->unk_27C = -0x1554;
        return;
    }
    phi_v1_2 = temp_v0_3;
    if ((s32) temp_v0_3 >= 0x1555) {
        phi_v1_2 = 0x1554;
    }
    arg0->unk_27C = phi_v1_2;
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

    if (((arg0->unk_262 & 0x20) != 0) && (temp_v0 = arg0->unk_1E8, (temp_v0 != 0)) && (temp_v0->update != 0)) {
        temp_v0_2 = arg0->unk_282;
        if (temp_v0_2 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk_282 = temp_v0_2 - 1;
            phi_v1 = arg0->unk_282;
        }
        if (phi_v1 == 0) {
            func_80BC06C4();
            temp_t2 = arg0->unk_262 & 0xFBFF;
            temp_t3 = temp_t2 | 0x100;
            arg0->unk_262 = temp_t2;
            arg0->unk_262 = temp_t3;
            return;
        }
        goto block_8;
    }
block_8:
    temp_v0_3 = arg0->unk_262;
    if ((temp_v0_3 & 0x100) != 0) {
        arg0->unk_262 = temp_v0_3 & 0xFEFF;
        arg0->unk_27C = 0;
        arg0->unk_27E = 0;
        arg0->unk_282 = 0x14;
        return;
    }
    temp_v0_4 = arg0->unk_282;
    if (temp_v0_4 == 0) {
        phi_v1_2 = 0;
    } else {
        arg0->unk_282 = temp_v0_4 - 1;
        phi_v1_2 = arg0->unk_282;
    }
    if (phi_v1_2 == 0) {
        arg0->unk_262 |= 0x400;
    }
}

void func_80BC08E0(EnNb *arg0, ? arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk_284;
    if (temp_v0 == 0) {
        func_80BBFE8C(arg0, 2);
        arg0->unk_262 |= 0x400;
        arg0->unk_284 += 1;
        return;
    }
    if ((temp_v0 == 1) && (func_801378B8(arg0 + 0x144, arg0->unk_144.animFrameCount) != 0)) {
        func_80BBFE8C(arg0, 1);
        arg0->unk_262 &= 0xFBFF;
        arg0->unk_284 += 1;
    }
}

void func_80BC0978(EnNb *arg0, ? arg1) {
    s16 temp_v0;
    u16 temp_t8;

    temp_v0 = arg0->unk_284;
    if (temp_v0 == 0) {
        func_80BBFE8C(arg0, 5);
        temp_t8 = arg0->unk_262 & 0xFFDF;
        arg0->unk_262 = temp_t8;
        arg0->unk_262 = temp_t8 | 0x400;
        arg0->unk_284 += 1;
        return;
    }
    if ((temp_v0 == 1) && (func_801378B8(arg0 + 0x144, arg0->unk_144.animFrameCount) != 0)) {
        func_80BBFE8C(arg0, 3);
        arg0->unk_262 &= 0xFBFF;
        arg0->unk_284 += 1;
    }
}

? func_80BC0A18(EnNb *arg0, GlobalContext *arg1) {
    u16 sp1A;
    ? (*temp_v0_2)(EnNb *, GlobalContext *);
    u16 temp_v0;
    EnNb *phi_a0;

    sp1A = arg1->msgCtx.unk11F04;
    phi_a0 = arg0;
    if ((arg1->actorCtx.actorList[2].first->unk_A6C & 0x40) != 0) {
        arg0->unk_262 |= 0x80;
        if (sp1A != arg0->unk_264) {
            if ((s32) sp1A >= 0x28CE) {
                if ((s32) sp1A >= 0x28D0) {
                    switch (sp1A) {
                    case 10500:
                    case 10507:
                        arg0->unk_18C = func_80BC08E0;
                        arg0->unk_284 = 0;
                        break;
                    }
                } else if (sp1A != 0x28CF) {

                } else {
                    arg0->unk_262 |= 0x20;
                    func_80BBFE8C((EnNb *)3);
                    goto block_17;
                }
            } else if (sp1A != 0x28C7) {
                if (sp1A != 0x28CB) {
                    if (sp1A != 0x28CD) {

                    } else {
                        arg0->unk_18C = func_80BC0978;
                        arg0->unk_284 = 0;
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
        arg0->unk_264 = sp1A;
        phi_a0 = arg0;
    } else {
        temp_v0 = arg0->unk_262;
        if ((temp_v0 & 0x80) != 0) {
            arg0->unk_18C = NULL;
            arg0->unk_264 = 0;
            arg0->unk_262 = temp_v0 & 0xFF7F;
            func_80BBFE8C((EnNb *)1);
            phi_a0 = arg0;
        }
    }
    temp_v0_2 = phi_a0->unk_18C;
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
        arg0->unk_262 |= 0x20;
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
    arg0->unk_262 = 0;
    arg0->unk_274 = 40.0f;
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

    temp_v0 = arg0->unk_1DC;
    if ((temp_v0 == 1) || (temp_v0 == 2) || (temp_v0 == 3) || (temp_v0 == 4)) {
        func_80BC0D08(arg0);
    }
    Math_ApproachS(arg0 + 0xBE, arg0->actor.world.rot.y, 3, 0x2AA8);
}

void func_80BC0D84(EnNb *this, GlobalContext *globalCtx) {
    u8 sp20;
    u8 *temp_a2;

    temp_a2 = &sp20;
    this->unk_280 = gSaveContext.unk_14 + gGameInfo->data[15];
    if ((gSaveContext.eventInf[4] & 8) != 0) {
        sp20 = 1;
        func_80BC0C80(this, (u8 *) globalCtx, temp_a2);
        this->actor.shape.shadowDraw = func_800B3FC0;
        this->actor.flags |= 1;
    } else if ((func_80133038(globalCtx, &D_80BC13F0, (struct_80133038_arg2 *) &sp20) == 0) || ((sp20 != this->unk_1DC) && (func_80BC0C80(this, (u8 *) globalCtx, &sp20) == 0))) {
        this->actor.shape.shadowDraw = NULL;
        this->actor.flags &= -2;
        sp20 = 0;
    } else {
        this->actor.shape.shadowDraw = func_800B3FC0;
        this->actor.flags |= 1;
    }
    this->unk_1DC = sp20;
    this->unk_1E8 = func_80BBFF90(this, globalCtx);
    func_80BC0D1C(this, globalCtx);
}

void func_80BC0EAC(EnNb *this, GlobalContext *globalCtx) {
    u8 temp_t9;
    u8 temp_v0;

    if (func_8010BF58((Actor *) this, globalCtx, this->unk_1E0, this->unk_28C, &this->unk_1E4) != 0) {
        temp_v0 = gSaveContext.eventInf[4];
        temp_t9 = temp_v0 & 0xFB;
        if ((temp_v0 & 8) != 0) {
            gSaveContext.eventInf[4] = temp_t9;
            gSaveContext.eventInf[4] = temp_t9 & 0xF7;
        }
        func_8013AED4(&this->unk_262, 3U, 7U);
        if (this->unk_1DC != 2) {
            this->unk_262 &= 0xFFDF;
        }
        this->actor.child = NULL;
        this->unk_262 |= 0x400;
        this->unk_282 = 0x14;
        this->unk_1E4 = 0;
        this->actionFunc = func_80BC0D84;
    }
}

void EnNb_Init(Actor *thisx, GlobalContext *globalCtx) {
    u8 temp_t2;
    u8 temp_v0;
    EnNb *this = (EnNb *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_06008C40, NULL, &this->unk_202, &this->unk_232, 8);
    this->unk_290 = -1;
    func_80BBFE8C(this, 0);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_190, (Actor *) this, &D_80BC15F0);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80BC161C);
    Actor_SetScale((Actor *) this, 0.01f);
    this->unk_262 = 0;
    temp_v0 = gSaveContext.eventInf[4];
    temp_t2 = temp_v0 & 0xFB;
    if ((temp_v0 & 8) != 0) {
        func_8013AED4(&this->unk_262, 4U, 7U);
    } else {
        gSaveContext.eventInf[4] = temp_t2;
        gSaveContext.eventInf[4] = temp_t2 & 0xF7;
    }
    this->actionFunc = func_80BC0D84;
    func_80BC0D84(this, globalCtx);
}

void EnNb_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnNb *this = (EnNb *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_190);
    globalCtx->interfaceCtx.unk_31A = 3;
}

void EnNb_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnNb *this = (EnNb *) thisx;
    func_80BC04FC((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    func_80BC0A18(this, globalCtx);
    if (this->unk_1DC != 0) {
        func_80BBFE60(this);
        func_80BC0800(this);
        if (Actor_IsActorFacingLink((Actor *) this, 0x38E0) != 0) {
            func_8013C964((Actor *) this, globalCtx, this->unk_274, 30.0f, 0, (s16) (this->unk_262 & 7));
        }
        func_80BBFF24((Actor *) this, globalCtx);
    }
}

s32 func_80BC1174(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg1 == 5) {
        func_80BC05A8(arg5, arg0, arg0);
    }
    return 0;
}

void func_80BC11B4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    f32 sp18;

    if ((ActorCutscene_GetCurrentIndex() == -1) && (arg1 == 5)) {
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, (Vec3f *) &sp18);
        Math_ApproachF(arg4 + 0x3C, sp18, 0.6f, 10000.0f);
        Math_ApproachF(arg4 + 0x40, sp1C, 0.6f, 10000.0f);
        Math_ApproachF(arg4 + 0x44, sp20, 0.6f, 10000.0f);
        Math_Vec3s_Copy(arg4 + 0x48, arg4 + 0x30);
    }
}

void func_80BC1278(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    u16 temp_v0;
    s32 phi_v0;
    s32 phi_v1;

    temp_v0 = arg2->unk_262;
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
        func_8013AD9C((s16) (arg2->unk_27C + 0x4000), (s16) (arg2->unk_27E + arg2->shape.rot.y + 0x4000), arg2 + 0x1F0, arg2 + 0x1FC, phi_v0, phi_v1);
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(arg2->unk_1F0, arg2->unk_1F4, arg2->unk_1F8, 0);
        Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
        Matrix_RotateY(arg2->unk_1FE, 1U);
        SysMatrix_InsertXRotation_s(arg2->unk_1FC, 1);
        SysMatrix_InsertZRotation_s(arg2->unk_200, 1);
        SysMatrix_StatePush();
    }
}

void EnNb_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnNb *this = (EnNb *) thisx;
    if (this->unk_1DC != 0) {
        func_8012C5B0(globalCtx->state.gfxCtx);
        func_801343C0(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80BC1174, func_80BC11B4, func_80BC1278, (Actor *) this);
    }
}
