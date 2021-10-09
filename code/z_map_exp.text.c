struct _mips2c_stack_func_8010A000 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8010A074 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8010A0A4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8010A0F0 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8010A164 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8010A194 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8010A208 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8010A238 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8010A2AC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8010A2DC {};              /* size 0x0 */

struct _mips2c_stack_func_8010A33C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8010A410 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8010A430 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8010A54C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8010A580 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad_24[0xA];                    /* maybe part of sp20[3]? */
    /* 0x2E */ s16 sp2E;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];                    /* maybe part of sp2E[5]? */
    /* 0x38 */ void *sp38;                          /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

s32 convert_scene_number_among_shared_scenes(s16);  /* extern */
s32 func_80102EF0(GlobalContext *);                 /* extern */
? func_80105294();                                  /* extern */
s32 func_80105318();                                /* extern */
? func_80105A40();                                  /* extern */
? func_80105B34(GlobalContext *);                   /* extern */
? func_80105C40(s16);                               /* extern */
s32 func_80106530(GlobalContext *);                 /* extern */
? func_80106644(s16, s16, s16);                     /* extern */
s16 func_80109124(s16);                             /* extern */
s32 func_8010A074(GlobalContext *arg0);             /* static */
? func_8010A0A4(GlobalContext *arg0);               /* static */
s32 func_8010A0F0(void *arg0);                      /* static */
s32 func_8010A164(GlobalContext *);                 /* static */
s32 func_8010A194(void *arg0);                      /* static */
s32 func_8010A208(GlobalContext *);                 /* static */
u16 func_8010A238(GlobalContext *arg0);             /* static */
s32 func_8010A2AC(GlobalContext *);                 /* static */
void func_8010A410();                               /* static */
void func_8010A430(GlobalContext *arg0);            /* static */
void func_8010A54C();                               /* static */
void func_8010A580(GlobalContext *arg0);            /* static */
static s16 D_801BF550 = 0;
static s16 D_801BF554 = 0;
static s16 D_801BF558 = 0;
static s32 D_801BF55C[9] = {0x1B, 0x21, 0x49, 0x16, 0x18, 0x1F, 0x44, 0x5F, 0x36};
static s32 D_801BF580[5] = {0x1B, 0x21, 0x49, 0x16, 0x18};
static s32 D_801BF594[4] = {0x1F, 0x44, 0x5F, 0x36};
static s32 D_801BF5A4[3] = {0x2B, 0x6A, 0x35};
static s16 D_801BF5B0 = 0x63;
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
SaveContext gSaveContext;

s32 func_8010A000(GlobalContext *globalCtx) {
    s32 temp_s0;
    s32 *phi_s1;
    s32 phi_s0;

    phi_s1 = D_801BF55C;
    phi_s0 = 0;
loop_1:
    if (convert_scene_number_among_shared_scenes(globalCtx->sceneNum) == *phi_s1) {
        return phi_s0;
    }
    temp_s0 = phi_s0 + 1;
    phi_s1 += 4;
    phi_s0 = temp_s0;
    if (temp_s0 == 9) {
        return -1;
    }
    goto loop_1;
}

s32 func_8010A074(GlobalContext *arg0) {
    if (func_8010A000(arg0) == -1) {
        return 0;
    }
    return 1;
}

? func_8010A0A4(GlobalContext *arg0) {
    if ((func_8010A000(arg0) == -1) || (func_80102EF0(arg0) == 0)) {
        return 0;
    }
    return 1;
}

s32 func_8010A0F0(void *arg0) {
    s32 temp_s0;
    s32 *phi_s1;
    s32 phi_s0;

    phi_s1 = D_801BF580;
    phi_s0 = 0;
loop_1:
    if (convert_scene_number_among_shared_scenes(arg0->unk_A4) == *phi_s1) {
        return phi_s0;
    }
    temp_s0 = phi_s0 + 1;
    phi_s1 += 4;
    phi_s0 = temp_s0;
    if (temp_s0 == 5) {
        return -1;
    }
    goto loop_1;
}

s32 func_8010A164(void) {
    if (func_8010A0F0() == -1) {
        return 0;
    }
    return 1;
}

s32 func_8010A194(void *arg0) {
    s32 temp_s0;
    s32 *phi_s1;
    s32 phi_s0;

    phi_s1 = D_801BF594;
    phi_s0 = 0;
loop_1:
    if (convert_scene_number_among_shared_scenes(arg0->unk_A4) == *phi_s1) {
        return phi_s0;
    }
    temp_s0 = phi_s0 + 1;
    phi_s1 += 4;
    phi_s0 = temp_s0;
    if (temp_s0 == 4) {
        return -1;
    }
    goto loop_1;
}

s32 func_8010A208(void) {
    if (func_8010A194() == -1) {
        return 0;
    }
    return 1;
}

u16 func_8010A238(GlobalContext *arg0) {
    u16 temp_s0;
    s32 *phi_s1;
    u16 phi_s0;

    phi_s1 = D_801BF5A4;
    phi_s0 = 0U;
loop_1:
    if (convert_scene_number_among_shared_scenes(arg0->sceneNum) == *phi_s1) {
        return phi_s0;
    }
    temp_s0 = phi_s0 + 1;
    phi_s1 += 4;
    phi_s0 = temp_s0;
    if (temp_s0 == 3) {
        return -1U;
    }
    goto loop_1;
}

s32 func_8010A2AC(void) {
    if (func_8010A238() == -1) {
        return 0;
    }
    return 1;
}

void func_8010A2DC(GlobalContext *globalCtx) {
    Actor *temp_v0;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    D_801BF550 = (s16) (s32) temp_v0->world.pos.x;
    D_801BF554 = (s16) (s32) temp_v0->world.pos.z;
    D_801BF558 = (s16) ((s32) (0x7FFF - temp_v0->shape.rot.y) / 0x400);
}

void func_8010A33C(GlobalContext *globalCtx, s16 param_2) {
    s32 sp1C;
    InterfaceContext *temp_v1;
    void *temp_a0;

    sp1C = (s32) gSaveContext.mapIndex;
    func_80105C40(param_2);
    if ((s32) param_2 >= 0) {
        if (func_8010A074(globalCtx) != 0) {
            temp_a0 = (convert_scene_number_among_shared_scenes(globalCtx->sceneNum) * 0x1C) + &gSaveContext;
            temp_a0->unk_110 = (s32) (temp_a0->unk_110 | gBitFlags[param_2]);
            temp_v1 = &globalCtx->interfaceCtx;
            temp_v1->mapRoomNum = param_2;
            temp_v1->unk_27A = (s16) sp1C;
        }
    } else {
        globalCtx->interfaceCtx.mapRoomNum = 0;
    }
    if (gSaveContext.unk_3F58 != 2) {
        gSaveContext.unk_3F58 = 0;
    }
}

void func_8010A410(void) {
    func_80105A40();
}

void func_8010A430(GlobalContext *arg0) {
    void *sp28;
    void *sp24;
    s16 temp_v1_2;
    u16 temp_v0;
    void *temp_v1;
    u16 phi_a2;

    sp24 = arg0 + 0x18000;
    func_80105C40((s16) arg0->roomCtx.currRoom.num);
    temp_v1 = arg0 + 0x169E8;
    temp_v1->unk_278 = -1;
    temp_v1->unk_27A = -1;
    sp28 = temp_v1;
    temp_v1->unk_17C = THA_AllocEndAlign16(arg0 + 0x74, 0x1000U);
    if (func_8010A2AC(arg0) != 0) {
        gSaveContext.mapIndex = func_8010A238(arg0);
        return;
    }
    if (func_8010A074(arg0) != 0) {
        temp_v0 = func_8010A000(arg0);
        gSaveContext.mapIndex = temp_v0;
        temp_v1_2 = arg0->sceneNum;
        phi_a2 = temp_v0;
        if (temp_v1_2 != 0x1F) {
            if (temp_v1_2 != 0x36) {
                if (temp_v1_2 != 0x44) {
                    if (temp_v1_2 != 0x5F) {

                    } else {
                        phi_a2 = 2U;
                    }
                } else {
                    phi_a2 = 1U;
                }
            } else {
                phi_a2 = 3U;
            }
        } else {
            phi_a2 = 0U;
        }
        gSaveContext.unk_48C8 = phi_a2;
        func_8010A33C(arg0, (s16) sp24->unk_6E0);
    }
}

void func_8010A54C(void) {
    func_80106644(D_801BF550, D_801BF554, D_801BF558);
}

void func_8010A580(GlobalContext *arg0) {
    void *sp38;
    s16 sp2E;
    void *sp20;
    GameInfo *temp_v0;
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_v0_2;
    void *temp_v1;

    sp20 = arg0 + 0x10000;
    sp38 = arg0->actorCtx.actorList[2].first;
    if (((s32) arg0->pauseCtx.state < 4) && (~(arg0->state.input[0].press.button | ~0x20) == 0) && (func_801690CC(arg0) == 0) && (func_80106530(arg0) == 0)) {
        if (gGameInfo->data[1439] == 0) {
            play_sound(0x4813U);
        } else {
            play_sound(0x4814U);
        }
        temp_v0 = gGameInfo;
        temp_v0->data[1439] ^= 1;
    }
    func_80105B34(arg0);
    if ((sp20->unk_6F1C == 0) && (sp20->unk_6F1E == 0)) {
        if (func_8010A164(arg0) != 0) {
            temp_v0_2 = func_80109124((s16) (s32) sp38->world.pos.y);
            if ((temp_v0_2 != -1) && (sp2E = temp_v0_2, temp_a0 = 4 - temp_v0_2, temp_v1 = (convert_scene_number_among_shared_scenes(arg0->sceneNum) * 0x1C) + &gSaveContext, temp_v1->unk_10C = (s32) (temp_v1->unk_10C | gBitFlags[temp_a0]), gGameInfo->data[1438] = temp_a0, temp_a1 = arg0->interfaceCtx.mapRoomNum, (D_801BF5B0 != temp_a1))) {
                D_801BF5B0 = temp_a1;
                return;
            }
            /* Duplicate return node #16. Try simplifying control flow for better match */
            return;
        }
        if (func_8010A208(arg0) != 0) {
            func_80105294();
            gGameInfo->data[1438] = 4 - func_80105318();
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
    }
}
