typedef struct EnGb2 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x42];                 /* maybe part of unk_188[12]? */
    /* 0x1D0 */ Vec3s unk_1D0;                      /* inferred */
    /* 0x1D6 */ char pad_1D6[0x42];                 /* maybe part of unk_1D0[12]? */
    /* 0x218 */ void (*actionFunc)(EnGb2 *, GlobalContext *);
    /* 0x21C */ ColliderCylinder unk_21C;           /* inferred */
    /* 0x268 */ s32 unk_268;                        /* inferred */
    /* 0x26C */ u16 unk_26C;                        /* inferred */
    /* 0x26E */ u16 unk_26E;                        /* inferred */
    /* 0x270 */ Vec3s unk_270;                      /* inferred */
    /* 0x276 */ Vec3s unk_276;                      /* inferred */
    /* 0x27C */ s16 unk_27C;                        /* inferred */
    /* 0x27E */ s16 unk_27E;                        /* inferred */
    /* 0x280 */ s16 unk_280;                        /* inferred */
    /* 0x282 */ s16 unk_282;                        /* inferred */
    /* 0x284 */ char pad_284[0x2];
    /* 0x286 */ s16 unk_286;                        /* inferred */
    /* 0x288 */ s16 unk_288;                        /* inferred */
    /* 0x28A */ u8 unk_28A;                         /* inferred */
    /* 0x28B */ char pad_28B[0x1];
    /* 0x28C */ s32 unk_28C;                        /* inferred */
    /* 0x290 */ s16 unk_290;                        /* inferred */
    /* 0x292 */ char pad_292[0x2];
} EnGb2;                                            /* size = 0x294 */

struct _mips2c_stack_EnGb2_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnGb2_Draw {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnGb2_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ ColliderCylinder *sp30;              /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnGb2_Update {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B0F5E0 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Collider *sp18;                      /* inferred */
    /* 0x1C */ CollisionCheckContext *sp1C;         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B0F660 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B0F6DC {};              /* size 0x0 */

struct _mips2c_stack_func_80B0F728 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B0F7FC {};              /* size 0x0 */

struct _mips2c_stack_func_80B0F8F8 {};              /* size 0x0 */

struct _mips2c_stack_func_80B0F97C {};              /* size 0x0 */

struct _mips2c_stack_func_80B0FA04 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B0FA48 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B0FB24 {};              /* size 0x0 */

struct _mips2c_stack_func_80B0FBF0 {
    /* 0x00 */ char pad_0[0x68];
    /* 0x68 */ ? sp68;                              /* inferred */
    /* 0x68 */ char pad_68[0x10];
    /* 0x78 */ ? sp78;                              /* inferred */
    /* 0x78 */ char pad_78[0x18];
    /* 0x90 */ ? sp90;                              /* inferred */
    /* 0x90 */ char pad_90[0x30];
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_80B0FD8C {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B0FE18 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B0FE7C {};              /* size 0x0 */

struct _mips2c_stack_func_80B0FEBC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B0FFA8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B10240 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B10344 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B10584 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B10634 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B10868 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B10924 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B109DC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B10A48 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B10B5C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B10DAC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B10E98 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B11048 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B110F8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B111AC {};              /* size 0x0 */

struct _mips2c_stack_func_80B11268 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B11344 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B1179C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B117FC {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ? sp18;                              /* inferred */
    /* 0x18 */ char pad_18[0x10];
};                                                  /* size = 0x28 */

void func_80B0F5E0(EnGb2 *arg0, GlobalContext *arg1); /* static */
s32 func_80B0F660(EnGb2 *arg0, GlobalContext *arg1); /* static */
void func_80B0F6DC(EnGb2 *arg0);                    /* static */
void func_80B0F728(EnGb2 *arg0, GlobalContext *);   /* static */
u16 func_80B0F7FC(EnGb2 *arg0);                     /* static */
u16 func_80B0F8F8(EnGb2 *arg0);                     /* static */
u16 func_80B0F97C(EnGb2 *arg0);                     /* static */
void func_80B0FA04(EnGb2 *arg0);                    /* static */
s32 func_80B0FA48(EnGb2 *arg0, GlobalContext *arg1); /* static */
u16 func_80B0FB24(EnGb2 *arg0);                     /* static */
void func_80B0FBF0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B0FD8C(Actor *arg0, GlobalContext *arg1, EnGb2 *); /* static */
void func_80B0FE18(GlobalContext *arg0);            /* static */
void func_80B0FE7C(GlobalContext *arg0);            /* static */
void func_80B110F8(EnGb2 *this, GlobalContext *globalCtx); /* static */
s32 func_80B1179C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor, Gfx **gfx); /* static */
void func_80B117FC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **gfx); /* static */
extern AnimationHeader D_0600049C;
extern FlexSkeletonHeader D_06007230;
static ? D_80B119B0;                                /* unable to generate initializer */
static ? D_80B11A00;                                /* unable to generate initializer */
static ColliderCylinderInitType1 D_80B11A40 = {
    {0xA, 0, 0, 0x39, 1},
    {0, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0x28, 0x4B, 0, {0, 0, 0}},
};
static s32 D_80B11A6C[12] = {
    0x42F00000,
    0,
    0x44480000,
    0xC2F00000,
    0,
    0x443B8000,
    0x42700000,
    0,
    0x443B8000,
    0xC2700000,
    0,
    0x44480000,
};
static ? D_80B11A9C;                                /* unable to generate initializer */
static ? D_80B11AB4;                                /* unable to generate initializer */
static InitChainEntry D_80B11AC4[2];                /* unable to generate initializer */
static ? D_80B11ACC;                                /* unable to generate initializer */

void func_80B0F5E0(EnGb2 *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp1C;
    Collider *sp18;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;

    temp_a2 = arg0 + 0x21C;
    arg0->unk_21C.dim.pos.x = (s16) (s32) arg0->actor.world.pos.x;
    arg0->unk_21C.dim.pos.y = (s16) (s32) arg0->actor.world.pos.y;
    arg0->unk_21C.dim.pos.z = (s16) (s32) arg0->actor.world.pos.z;
    sp18 = temp_a2;
    temp_a1 = arg1 + 0x18884;
    sp1C = temp_a1;
    CollisionCheck_SetAC(arg1, temp_a1, temp_a2);
    CollisionCheck_SetOC(arg1, temp_a1, temp_a2);
}

s32 func_80B0F660(EnGb2 *arg0, GlobalContext *arg1) {
    Actor *temp_v0;
    Actor *temp_v1;
    Actor *phi_s0;

    phi_s0 = NULL;
loop_1:
    temp_v0 = func_ActorCategoryIterateById(arg1, phi_s0, 4, 0x1DE);
    if (temp_v0 != 0) {
        if (temp_v0 != arg0) {
            return 1;
        }
        temp_v1 = temp_v0->next;
        if (temp_v1 != 0) {
            phi_s0 = temp_v1;
            goto loop_1;
        }
        goto block_6;
    }
block_6:
    return 0;
}

void func_80B0F6DC(EnGb2 *arg0) {
    u8 temp_v0;

    temp_v0 = gSaveContext.weekEventReg[54];
    if ((temp_v0 & 0x20) == 0) {
        gSaveContext.weekEventReg[54] = temp_v0 | 0x20;
        arg0->unk_26E = 0x14D0;
    } else {
        arg0->unk_26E = 0x14D1;
    }
    arg0->unk_288 = 0x1E;
    arg0->actionFunc = func_80B0FEBC;
}

void func_80B0F728(EnGb2 *arg0) {
    u8 temp_t1;
    u8 temp_t9;
    u8 temp_v1;

    temp_v1 = gSaveContext.eventInf[4];
    if ((temp_v1 & 0x10) != 0) {
        func_80B0FBF0();
        arg0->unk_26E = 0x14E1;
        if ((gSaveContext.eventInf[4] & 0x80) != 0) {
            arg0->unk_288 = 0xA;
        } else {
            arg0->unk_288 = 0x1E;
        }
    } else if ((temp_v1 & 0x20) != 0) {
        func_80B0FBF0();
        arg0->unk_26E = 0x14E0;
        arg0->unk_26C |= 2;
    } else {
        arg0->unk_26E = 0x14DC;
    }
    temp_t9 = gSaveContext.eventInf[4] & 0xEF;
    temp_t1 = temp_t9 & 0xDF;
    gSaveContext.eventInf[4] = temp_t9;
    gSaveContext.eventInf[4] = temp_t1;
    gSaveContext.eventInf[4] = temp_t1 & 0xBF;
    arg0->actionFunc = func_80B10584;
}

u16 func_80B0F7FC(EnGb2 *arg0) {
    u16 temp_t6;

    temp_t6 = arg0->unk_26E;
    switch (temp_t6) {
    case 5328:
        return 0x14D1U;
    case 5329:
        if ((gSaveContext.eventInf[4] & 0x80) != 0) {
            return 0x14E4U;
        }
        if ((s32) gSaveContext.health >= 0x31) {
            return 0x14D2U;
        }
        arg0->unk_26C |= 2;
        return 0x14D3U;
    case 5348:
        if ((s32) gSaveContext.health >= 0x31) {
            return 0x14D2U;
        }
        arg0->unk_26C |= 2;
        return 0x14D3U;
    case 5330:
        if ((gSaveContext.eventInf[4] & 0x80) != 0) {
            return 0x14E5U;
        }
        return 0x14D4U;
    case 5332:
    case 5349:
        return 0x14D5U;
    case 5336:
        return 0x14D9U;
    case 5337:
        return 0x14DAU;
    default:
        return 0U;
    }
}

u16 func_80B0F8F8(EnGb2 *arg0) {
    u16 temp_v0;

    temp_v0 = arg0->unk_26E;
    if (temp_v0 != 0x14DC) {
        if (temp_v0 != 0x14DD) {
            if (temp_v0 != 0x14DE) {
                if (temp_v0 != 0x14E1) {
                    return 0U;
                }
                return 0x14E2U;
            }
            arg0->unk_26C |= 2;
            gSaveContext.weekEventReg[54] |= 0x80;
            return 0x14DFU;
        }
        return 0x14DEU;
    }
    arg0->unk_26C |= 2;
    return 0x14DDU;
}

u16 func_80B0F97C(EnGb2 *arg0) {
    u16 temp_t6;

    temp_t6 = arg0->unk_26E;
    switch (temp_t6) {
    case 5365:
        return 0x14F6U;
    case 5366:
        return 0x14F7U;
    case 5367:
        gSaveContext.weekEventReg[76] |= 0x80;
        arg0->unk_26C |= 2;
        return 0x14F8U;
    case 5369:
        return 0x14FAU;
    case 5370:
        arg0->unk_26C |= 2;
        return 0x14FBU;
    default:
        return 0U;
    }
}

void func_80B0FA04(EnGb2 *arg0) {
    s16 temp_a0;

    arg0->unk_282 = (s16) arg0->actor.cutscene;
    temp_a0 = arg0->unk_282;
    arg0 = arg0;
    arg0->unk_284 = ActorCutscene_GetAdditionalCutscene(temp_a0);
    arg0->unk_286 = ActorCutscene_GetAdditionalCutscene(arg0->unk_284);
}

s32 func_80B0FA48(EnGb2 *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    arg0 = arg0;
    temp_v0 = Player_GetMask(arg1);
    if (temp_v0 != 6) {
        if (temp_v0 != 0xC) {
            if (temp_v0 != 0xF) {
                if ((gSaveContext.weekEventReg[80] & 0x20) == 0) {
                    arg0->unk_26E = 0x14EF;
                    return 0;
                }
                arg0->unk_26E = 0x14F4;
                return 1;
            }
            if ((gSaveContext.weekEventReg[80] & 0x40) == 0) {
                arg0->unk_26E = 0x14EB;
                return 0;
            }
            arg0->unk_26E = 0x14EE;
            return 1;
        }
        arg0->unk_26E = 0x14E6;
        arg0->unk_26C |= 4;
        return 0;
    }
    arg0->unk_26E = 0x14E6;
    arg0->unk_26C |= 8;
    return 0;
}

u16 func_80B0FB24(EnGb2 *arg0) {
    u16 temp_t6;
    u16 temp_v0;

    temp_t6 = arg0->unk_26E;
    switch (temp_t6) {
    case 5350:
        temp_v0 = arg0->unk_26C;
        if ((temp_v0 & 4) != 0) {
            return 0x14E7U;
        }
        if ((temp_v0 & 8) != 0) {
            return 0x14E9U;
        }
    case 5351:
        arg0->unk_26C |= 2;
        return 0x14E8U;
    case 5353:
        arg0->unk_26C |= 2;
        return 0x14EAU;
    case 5355:
        return 0x14ECU;
    case 5356:
        arg0->unk_26C |= 2;
        return 0x14EDU;
    case 5359:
        return 0x14F0U;
    case 5360:
        return 0x14F1U;
    case 5361:
        return 0x14F2U;
    case 5362:
        arg0->unk_26C |= 2;
        return 0x14F3U;
    default:
        return 0U;
    }
}

void func_80B0FBF0(Actor *arg0, GlobalContext *arg1) {
    ? sp90;
    ? sp78;
    ? sp68;
    ? *temp_t9;
    s16 temp_s0;
    s32 *temp_t6;
    void *temp_v0;
    void *temp_v1;
    s32 *phi_t6;
    ? *phi_t9;
    s16 phi_s0;

    phi_t6 = D_80B11A6C;
    phi_t9 = &sp90;
    do {
        temp_t6 = phi_t6 + 0xC;
        temp_t9 = phi_t9 + 0xC;
        temp_t9->unk_-C = (s32) *phi_t6;
        temp_t9->unk_-8 = (s32) temp_t6->unk_-8;
        temp_t9->unk_-4 = (s32) temp_t6->unk_-4;
        phi_t6 = temp_t6;
        phi_t9 = temp_t9;
    } while (temp_t6 != (D_80B11A6C + 0x30));
    sp78.unk_0 = (s32) D_80B11A9C.unk_0;
    sp78.unk_4 = (s32) D_80B11A9C.unk_4;
    sp78.unk_8 = (s32) D_80B11A9C.unk_8;
    sp78.unk_C = (s32) D_80B11A9C.unk_C;
    sp78.unk_10 = (s32) D_80B11A9C.unk_10;
    sp78.unk_14 = (s32) D_80B11A9C.unk_14;
    sp68.unk_0 = (s32) D_80B11AB4.unk_0;
    sp68.unk_4 = (s32) D_80B11AB4.unk_4;
    sp68.unk_8 = (s32) D_80B11AB4.unk_8;
    sp68.unk_C = (s32) D_80B11AB4.unk_C;
    phi_s0 = 0;
    do {
        temp_v1 = &sp78 + (phi_s0 * 6);
        temp_v0 = &sp90 + (phi_s0 * 0xC);
        Actor_SpawnAsChild(arg1 + 0x1CA0, arg0, arg1, 0x1E8, temp_v0->unk_0, temp_v0->unk_4, temp_v0->unk_8, (s16) (s32) temp_v1->unk_0, (s16) (s32) temp_v1->unk_2, (s16) (s32) temp_v1->unk_4, *(&sp68 + (phi_s0 * 4)));
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while ((s32) temp_s0 < 4);
}

void func_80B0FD8C(Actor *arg0, GlobalContext *arg1) {
    void *temp_v0;

    arg0->unk_280 = (s16) (arg0->unk_280 + 1);
    arg0[1].child = arg0->child;
    temp_v0 = (arg0->unk_280 * 0x14) + &D_80B119B0;
    Actor_SpawnAsChild(arg1 + 0x1CA0, arg0, arg1, 0x1E8, temp_v0->unk_4, temp_v0->unk_8, temp_v0->unk_C, (s16) 0, (s16) 0, (s16) 0, (s32) temp_v0->unk_10);
}

void func_80B0FE18(GlobalContext *arg0) {
    arg0 = arg0;
    func_800FD750(0x38);
    arg0->nextEntranceIndex = 0x9C10;
    arg0->unk_1887F = 0x40;
    gSaveContext.nextTransition = 0x40;
    arg0->sceneLoadFlag = 0x14;
}

void func_80B0FE7C(GlobalContext *arg0) {
    arg0->nextEntranceIndex = 0x9C20;
    arg0->unk_1887F = 0x40;
    gSaveContext.nextTransition = 0x40;
    arg0->sceneLoadFlag = 0x14;
}

void func_80B0FEBC(EnGb2 *this, GlobalContext *globalCtx) {
    EnGb2 *temp_a0;
    EnGb2 *temp_a2;
    GlobalContext *temp_a1;
    u16 temp_a1_2;

    temp_a0 = this;
    temp_a1 = globalCtx;
    if ((globalCtx->msgCtx.unk1202A == 3) && (globalCtx->msgCtx.unk1202E == 7)) {
        globalCtx->msgCtx.unk1202A = 4;
        gSaveContext.eventInf[4] |= 0x80;
        this->unk_26E = 0x14D1;
        this->unk_288 = 0xA;
    }
    this = this;
    globalCtx = globalCtx;
    temp_a2 = this;
    if (func_800B84D0((Actor *) temp_a0, temp_a1) != 0) {
        temp_a1_2 = temp_a2->unk_26E;
        this = temp_a2;
        func_801518B0(globalCtx, temp_a1_2, (Actor *) temp_a2);
        this->actionFunc = func_80B0FFA8;
        return;
    }
    if ((temp_a2->actor.xzDistToPlayer < 300.0f) || (temp_a2->actor.isTargeted != 0)) {
        func_800B863C((Actor *) temp_a2, globalCtx);
    }
}

void func_80B0FFA8(EnGb2 *this, GlobalContext *globalCtx) {
    u16 temp_v0_2;
    u16 temp_v0_3;
    u8 temp_v0;
    u8 temp_v0_4;
    u8 temp_v0_5;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (temp_v0 == 5) {
        if (func_80147624(globalCtx) != 0) {
            if ((this->unk_26C & 2) != 0) {
                globalCtx->msgCtx.unk11F22 = 0x43;
                globalCtx->msgCtx.unk12023 = 4;
                this->unk_26E = 0x14D1;
                this->unk_288 = 0x1E;
                gSaveContext.eventInf[4] &= 0x7F;
                this->actionFunc = func_80B0FEBC;
                this->unk_26C &= 0xFFFD;
                return;
            }
            temp_v0_2 = func_80B0F7FC(this);
            this->unk_26E = temp_v0_2;
            func_801518B0(globalCtx, temp_v0_2 & 0xFFFF, (Actor *) this);
            return;
        }
        /* Duplicate return node #21. Try simplifying control flow for better match */
        return;
    }
    if ((temp_v0 == 4) && (func_80147624(globalCtx) != 0)) {
        temp_v0_3 = this->unk_26E;
        if (temp_v0_3 == 0x14D5) {
            temp_v0_4 = globalCtx->msgCtx.choiceIndex;
            if (temp_v0_4 != 0) {
                if (temp_v0_4 != 1) {
                    return;
                }
                func_8019F230();
                this->unk_26E = 0x14D6;
                this->unk_26C |= 2;
                func_801518B0(globalCtx, 0x14D6U & 0xFFFF, (Actor *) this);
                return;
            }
            if ((s32) gSaveContext.rupees < (s32) this->unk_288) {
                play_sound(0x4806U);
                this->unk_26E = 0x14D7;
                this->unk_26C |= 2;
                func_801518B0(globalCtx, 0x14D7U & 0xFFFF, (Actor *) this);
                return;
            }
            func_8019F208();
            this->unk_26E = 0x14D8;
            func_801518B0(globalCtx, 0x14D8U & 0xFFFF, (Actor *) this);
            return;
        }
        if (temp_v0_3 == 0x14DA) {
            temp_v0_5 = globalCtx->msgCtx.choiceIndex;
            if (temp_v0_5 != 0) {
                if (temp_v0_5 != 1) {
                    return;
                }
                func_8019F230();
                this->unk_26E = 0x14DB;
                this->unk_26C |= 2;
                func_801518B0(globalCtx, 0x14DBU & 0xFFFF, (Actor *) this);
                /* Duplicate return node #21. Try simplifying control flow for better match */
                return;
            }
            func_8019F208();
            func_801159EC((s16) ((s32) this->unk_288 * -1));
            globalCtx->msgCtx.unk11F22 = 0x43;
            globalCtx->msgCtx.unk12023 = 4;
            func_800B7298(globalCtx, NULL, 7U);
            this->actionFunc = func_80B11344;
            return;
        }
        /* Duplicate return node #21. Try simplifying control flow for better match */
    }
}

void func_80B10240(EnGb2 *this, GlobalContext *globalCtx) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = (this->unk_280 * 0x14) + &D_80B119B0;
    this->unk_27C = temp_v1->unk_0;
    this->unk_282 = (s16) this->actor.cutscene;
    this->unk_268 = 0;
    this->unk_27E = temp_v1->unk_10;
    if (ActorCutscene_GetCanPlayNext(this->unk_282) != 0) {
        ActorCutscene_Start(this->unk_282, (Actor *) this);
        temp_v1_2 = (this->unk_280 * 0x14) + &D_80B119B0;
        Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, this->unk_27C, temp_v1_2->unk_4, temp_v1_2->unk_8, temp_v1_2->unk_C, (s16) 0, (s16) 0, (s16) 0, (s32) this->unk_27E);
        if (this->unk_280 == 0) {
            func_8010E9F0(1, 0xB4);
        }
        this->actionFunc = func_80B10344;
        return;
    }
    ActorCutscene_SetIntentToPlay(this->unk_282);
}

void func_80B10344(EnGb2 *this, GlobalContext *globalCtx) {
    EnGb2 *temp_a0;
    EnGb2 *temp_a2;
    s16 temp_v0;
    s16 temp_v0_3;
    u16 temp_t0;
    u16 temp_v1_2;
    u8 temp_t0_2;
    u8 temp_t9;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v1;
    void *temp_v1_3;
    void *temp_v1_4;
    s16 phi_v0;
    EnGb2 *phi_a2;
    EnGb2 *phi_a2_2;

    temp_a2 = this;
    temp_v0 = temp_a2->unk_280;
    temp_a0 = temp_a2;
    phi_v0 = temp_v0;
    phi_a2 = temp_a2;
    if (temp_v0 == 1) {
        this = temp_a2;
        func_80B0FD8C((Actor *) temp_a0, globalCtx, temp_a2);
        phi_v0 = this->unk_280;
        phi_a2 = this;
    }
    phi_a2_2 = phi_a2;
    if (phi_v0 == 2) {
        temp_v1 = phi_a2->unk_268;
        if ((temp_v1 != 0) && (temp_v1->unk_138 == 0)) {
            phi_a2->unk_268 = NULL;
            phi_a2->unk_26C |= 0x400;
        }
    }
    temp_v0_2 = phi_a2->actor.child;
    if ((temp_v0_2 != 0) && (temp_v0_2->update == 0)) {
        phi_a2->actor.child = NULL;
        phi_a2->unk_26C |= 0x200;
    }
    temp_v1_2 = phi_a2->unk_26C;
    if ((temp_v1_2 & 0x200) != 0) {
        temp_v0_3 = phi_a2->unk_280;
        if (temp_v0_3 == 3) {
            phi_a2->unk_26C = temp_v1_2 & 0xFDFF;
            gSaveContext.unk_3DD0[1] = 5;
            this = phi_a2;
            func_800FE498();
            gSaveContext.eventInf[4] |= 0x40;
            func_80B0FE7C(globalCtx);
            phi_a2_2 = this;
        } else if (temp_v0_3 == 2) {
            if ((temp_v1_2 & 0x400) != 0) {
                temp_t0 = temp_v1_2 & 0xFDFF;
                phi_a2->unk_26C = temp_t0;
                phi_a2->unk_280 = temp_v0_3 + 1;
                phi_a2->unk_26C = temp_t0 & 0xFBFF;
                phi_a2->actionFunc = func_80B10240;
            }
        } else {
            phi_a2->unk_280 = temp_v0_3 + 1;
            phi_a2->unk_26C = temp_v1_2 & 0xFDFF;
            phi_a2->actionFunc = func_80B10240;
        }
    }
    if ((s32) gSaveContext.health < 0x31) {
        gSaveContext.unk_3DD0[1] = 5;
        temp_t0_2 = gSaveContext.eventInf[4] | 0x40;
        gSaveContext.eventInf[4] = temp_t0_2;
        gSaveContext.eventInf[4] = temp_t0_2 | 0x20;
        temp_v1_3 = phi_a2_2->unk_268;
        if ((temp_v1_3 != 0) && (temp_v1_3->unk_138 == 0)) {
            phi_a2_2->unk_268 = NULL;
        }
        temp_v0_4 = phi_a2_2->actor.child;
        if ((temp_v0_4 != 0) && (temp_v0_4->update == 0)) {
            phi_a2_2->actor.child = NULL;
        }
        func_80B0FE7C(globalCtx);
        return;
    }
    if ((gSaveContext.unk_3DE8 == 0) && (gSaveContext.unk_3DEC == 0)) {
        gSaveContext.unk_3DD0[1] = 5;
        temp_t9 = gSaveContext.eventInf[4] | 0x40;
        gSaveContext.eventInf[4] = temp_t9;
        gSaveContext.eventInf[4] = temp_t9 | 0x10;
        temp_v1_4 = phi_a2_2->unk_268;
        if ((temp_v1_4 != 0) && (temp_v1_4->unk_138 == 0)) {
            phi_a2_2->unk_268 = NULL;
        }
        temp_v0_5 = phi_a2_2->actor.child;
        if ((temp_v0_5 != 0) && (temp_v0_5->update == 0)) {
            phi_a2_2->actor.child = NULL;
        }
        func_80B0FE7C(globalCtx);
    }
}

void func_80B10584(EnGb2 *this, GlobalContext *globalCtx) {
    EnGb2 *temp_a0;
    EnGb2 *temp_a3;
    u16 temp_a1;

    temp_a0 = this;
    this = this;
    temp_a3 = this;
    if (func_800B84D0((Actor *) temp_a0, globalCtx) != 0) {
        temp_a1 = temp_a3->unk_26E;
        this = temp_a3;
        func_801518B0(globalCtx, temp_a1, (Actor *) temp_a3);
        this->actor.flags &= 0xFFFEFFFF;
        this->actionFunc = func_80B10634;
        return;
    }
    if (temp_a3->actor.xzDistToPlayer < 300.0f) {
        temp_a3->actor.flags |= 0x10000;
        func_800B8614((Actor *) temp_a3, globalCtx, 300.0f);
    }
}

void func_80B10634(EnGb2 *this, GlobalContext *globalCtx) {
    u16 temp_v0_2;
    u16 temp_v0_3;
    u8 temp_v0;
    u8 temp_v0_4;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (temp_v0 == 5) {
        if (func_80147624(globalCtx) != 0) {
            if ((this->unk_26C & 2) != 0) {
                globalCtx->msgCtx.unk11F22 = 0x43;
                globalCtx->msgCtx.unk12023 = 4;
                temp_v0_2 = this->unk_26E;
                this->unk_26C &= 0xFFFD;
                if (temp_v0_2 == 0x14DD) {
                    this->unk_26E = 0x14DE;
                    this->actionFunc = func_80B10924;
                    return;
                }
                if (temp_v0_2 == 0x14DF) {
                    this->actionFunc = func_80B10A48;
                    return;
                }
                this->unk_26E = 0x14D1;
                this->unk_288 = 0x1E;
                gSaveContext.eventInf[4] &= 0x7F;
                this->actionFunc = func_80B0FEBC;
                return;
            }
            temp_v0_3 = func_80B0F8F8(this);
            this->unk_26E = temp_v0_3;
            func_801518B0(globalCtx, temp_v0_3 & 0xFFFF, (Actor *) this);
            return;
        }
        /* Duplicate return node #18. Try simplifying control flow for better match */
        return;
    }
    if ((temp_v0 == 4) && (func_80147624(globalCtx) != 0)) {
        temp_v0_4 = globalCtx->msgCtx.choiceIndex;
        if (temp_v0_4 != 0) {
            if (temp_v0_4 != 1) {
                return;
            }
            func_8019F230();
            this->unk_26E = 0x14E3;
            this->unk_26C |= 2;
            func_801518B0(globalCtx, 0x14E3U & 0xFFFF, (Actor *) this);
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return;
        }
        if ((s32) gSaveContext.rupees < (s32) this->unk_288) {
            play_sound(0x4806U);
            this->unk_26E = 0x14D7;
            this->unk_26C |= 2;
            func_801518B0(globalCtx, 0x14D7U & 0xFFFF, (Actor *) this);
            return;
        }
        func_8019F208();
        func_801159EC((s16) ((s32) this->unk_288 * -1));
        globalCtx->msgCtx.unk11F22 = 0x43;
        globalCtx->msgCtx.unk12023 = 4;
        func_800B7298(globalCtx, NULL, 7U);
        this->actionFunc = func_80B11344;
    }
}

void func_80B10868(EnGb2 *this, GlobalContext *globalCtx) {
    s16 temp_a0;

    this = this;
    if (ActorCutscene_GetCurrentIndex() != this->unk_286) {
        temp_a0 = (this + (this->unk_290 * 2))->unk_282;
        this = this;
        if (ActorCutscene_GetCanPlayNext(temp_a0) != 0) {
            this->actionFunc = func_80B10A48;
            ActorCutscene_StartAndSetFlag((this + (this->unk_290 * 2))->unk_282, (Actor *) this);
            return;
        }
        ActorCutscene_SetIntentToPlay((this + (this->unk_290 * 2))->unk_282);
        return;
    }
    this->unk_290 = 1;
    ActorCutscene_SetIntentToPlay((this + (this->unk_290 * 2))->unk_282);
}

void func_80B10924(EnGb2 *this, GlobalContext *globalCtx) {
    s32 sp24;
    s32 phi_a2;

    phi_a2 = 0xC;
    if ((gSaveContext.weekEventReg[54] & 0x40) != 0) {
        phi_a2 = 5;
    }
    sp24 = phi_a2;
    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        this->actor.parent = NULL;
        if (phi_a2 == 0xC) {
            gSaveContext.weekEventReg[54] |= 0x40;
        } else {
            func_801159EC(0x32);
        }
        this->actionFunc = func_80B109DC;
        return;
    }
    func_800B8A1C((Actor *) this, globalCtx, phi_a2, 300.0f, 300.0f);
}

void func_80B109DC(EnGb2 *this, GlobalContext *globalCtx) {
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        func_801518B0(globalCtx, this->unk_26E, (Actor *) this);
        this->actionFunc = func_80B10634;
        return;
    }
    func_800B85E0((Actor *) this, globalCtx, 300.0f, -1);
}

void func_80B10A48(EnGb2 *this, GlobalContext *globalCtx) {
    s32 temp_v0;
    u8 temp_t7;

    temp_t7 = this->unk_28A - 5;
    this->unk_28A = temp_t7;
    if ((temp_t7 & 0xFF) < 5) {
        this->unk_28A = 0;
        temp_v0 = this->actor.params & 7;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {
                if (temp_v0 != 2) {
                    return;
                }
                ActorCutscene_Stop((this + (this->unk_290 * 2))->unk_282);
                if (this->unk_26E == 0x14FB) {
                    Actor_SetSwitchFlag(globalCtx, (s32) (this->actor.params & 0x7F8) >> 3);
                    Actor_MarkForDeath((Actor *) this);
                    return;
                }
                this->actor.draw = NULL;
                this->unk_26C |= 0x100;
                this->actor.flags &= -2;
                this->actionFunc = func_80B111AC;
                /* Duplicate return node #10. Try simplifying control flow for better match */
                return;
            }
            ActorCutscene_Stop((this + (this->unk_290 * 2))->unk_282);
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_80B10B5C(EnGb2 *this, GlobalContext *globalCtx) {
    u16 temp_a1;
    u16 temp_t1;
    u16 temp_t6;
    u16 temp_t9;
    u16 temp_v0;
    u16 temp_v1;
    u16 temp_v1_2;

    if (Player_GetMask(globalCtx) != this->unk_28C) {
        this->unk_28C = Player_GetMask(globalCtx);
        temp_t9 = this->unk_26C & 0xFF7F;
        temp_t1 = temp_t9 & 0xFFDF;
        this->unk_26C = temp_t9;
        this->unk_26C = temp_t1;
        this->unk_26C = temp_t1 & 0xFFBF;
    }
    if (func_80B0FA48(this, globalCtx) != 0) {
        this->unk_26C &= 0xFFDF;
        if ((func_800B84D0((Actor *) this, globalCtx) != 0) && (temp_v1 = this->unk_26C, ((temp_v1 & 0x40) != 0))) {
            temp_a1 = this->unk_26E;
            if ((temp_a1 == 0x14EE) || (temp_a1 == 0x14F4)) {
                this->unk_26C = temp_v1 | 2;
            }
            func_801518B0(globalCtx, this->unk_26E, (Actor *) this);
            this->unk_290 = 1;
            this->unk_26C &= 0xFFBF;
            this->actionFunc = func_80B10DAC;
            return;
        }
        if ((this->actor.xzDistToPlayer < 300.0f) && (this->actor.isTargeted != 0)) {
            this->unk_26C |= 0x40;
            func_800B8614((Actor *) this, globalCtx, 300.0f);
            return;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return;
    }
    this->unk_26C &= 0xFFBF;
    if ((func_800B84D0((Actor *) this, globalCtx) != 0) && ((this->unk_26C & 0x20) != 0)) {
        this->actor.flags &= 0xFFFEFFFF;
        func_801518B0(globalCtx, this->unk_26E, (Actor *) this);
        temp_v0 = this->unk_26E;
        if (temp_v0 == 0x14EB) {
            gSaveContext.weekEventReg[80] |= 0x40;
        } else if (temp_v0 == 0x14EF) {
            gSaveContext.weekEventReg[80] |= 0x20;
        }
        temp_t6 = this->unk_26C & 0xFFDF;
        this->unk_26C = temp_t6;
        this->unk_290 = 0;
        this->unk_26C = temp_t6 | 0x80;
        this->actionFunc = func_80B10DAC;
        return;
    }
    if (this->actor.xzDistToPlayer < 300.0f) {
        temp_v1_2 = this->unk_26C;
        if ((temp_v1_2 & 0x80) == 0) {
            this->unk_26C = temp_v1_2 | 0x20;
            this->actor.flags |= 0x10000;
            func_800B8614((Actor *) this, globalCtx, 300.0f);
        }
    }
}

void func_80B10DAC(EnGb2 *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    if (ActorCutscene_GetCanPlayNext((this + (this->unk_290 * 2))->unk_282) != 0) {
        temp_v0 = this->actor.params;
        if ((temp_v0 & 7) == 1) {
            if (this->unk_290 != 2) {
                this->actionFunc = func_80B10E98;
            } else {
                Actor_SetSwitchFlag(globalCtx, (s32) (temp_v0 & 0x7F8) >> 3);
                this->actionFunc = func_80B10868;
            }
        } else {
            this->actionFunc = func_80B110F8;
        }
        ActorCutscene_StartAndSetFlag((this + (this->unk_290 * 2))->unk_282, (Actor *) this);
        return;
    }
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
    }
    ActorCutscene_SetIntentToPlay((this + (this->unk_290 * 2))->unk_282);
}

void func_80B10E98(EnGb2 *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a0_2;
    MessageContext *temp_a0;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v1;

    temp_a0 = &globalCtx->msgCtx;
    globalCtx = globalCtx;
    if ((func_80152498(temp_a0) == 5) && (temp_a0_2 = globalCtx, globalCtx = globalCtx, (func_80147624(temp_a0_2) != 0))) {
        temp_v0 = this->unk_26C;
        if ((temp_v0 & 2) != 0) {
            this->unk_26C = temp_v0 & 0xFFFD;
            globalCtx->msgCtx.unk11F22 = 0x43;
            globalCtx->msgCtx.unk12023 = 4;
            temp_v1 = this->unk_26E;
            if ((temp_v1 != 0x14E8) && (temp_v1 != 0x14EA)) {
                ActorCutscene_Stop((this + (this->unk_290 * 2))->unk_282);
                this->actionFunc = func_80B10B5C;
                return;
            }
            if (Flags_GetSwitch(globalCtx, (s32) (this->actor.params & 0x7F8) >> 3) != 0) {
                this->actionFunc = func_80B10A48;
                return;
            }
            ActorCutscene_Stop((this + (this->unk_290 * 2))->unk_282);
            this->unk_290 = 2;
            ActorCutscene_SetIntentToPlay((this + (this->unk_290 * 2))->unk_282);
            this->actionFunc = func_80B10DAC;
            return;
        }
        globalCtx = globalCtx;
        temp_v0_2 = func_80B0FB24(this);
        this->unk_26E = temp_v0_2;
        func_801518B0(globalCtx, temp_v0_2 & 0xFFFF, (Actor *) this);
        temp_v0_3 = this->unk_26E;
        if ((temp_v0_3 == 0x14E7) || (temp_v0_3 == 0x14E9) || (temp_v0_3 == 0x14EC) || (temp_v0_3 == 0x14F0)) {
            ActorCutscene_Stop((this + (this->unk_290 * 2))->unk_282);
            this->unk_290 = 1;
            ActorCutscene_SetIntentToPlay((this + (this->unk_290 * 2))->unk_282);
            this->actionFunc = func_80B10DAC;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
    }
}

void func_80B11048(EnGb2 *this, GlobalContext *globalCtx) {
    EnGb2 *temp_a0;
    EnGb2 *temp_a3;
    u16 temp_a1;

    temp_a0 = this;
    this = this;
    temp_a3 = this;
    if (func_800B84D0((Actor *) temp_a0, globalCtx) != 0) {
        temp_a3->actor.flags &= 0xFFFEFFFF;
        temp_a1 = temp_a3->unk_26E;
        this = temp_a3;
        func_801518B0(globalCtx, temp_a1, (Actor *) temp_a3);
        this->actionFunc = func_80B10DAC;
        return;
    }
    if (temp_a3->actor.xzDistToPlayer < 300.0f) {
        temp_a3->actor.flags |= 0x10000;
        func_800B8614((Actor *) temp_a3, globalCtx, 200.0f);
    }
}

void func_80B110F8(EnGb2 *this, GlobalContext *globalCtx) {
    u16 temp_v0;

    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        if ((this->unk_26C & 2) != 0) {
            globalCtx->msgCtx.unk11F22 = 0x43;
            globalCtx->msgCtx.unk12023 = 4;
            this->unk_26C &= 0xFFFD;
            this->actionFunc = func_80B10A48;
            return;
        }
        temp_v0 = func_80B0F97C(this);
        this->unk_26E = temp_v0;
        func_801518B0(globalCtx, temp_v0 & 0xFFFF, (Actor *) this);
        /* Duplicate return node #5. Try simplifying control flow for better match */
    }
}

void func_80B111AC(EnGb2 *this, GlobalContext *globalCtx) {
    s8 temp_v0;
    void *temp_v1;
    s32 phi_v0;

    temp_v0 = globalCtx->roomCtx.currRoom.num;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if ((temp_v0 != 3) && (temp_v0 != 4)) {
                if (temp_v0 != 5) {
                    phi_v0 = 0;
                } else {
                    phi_v0 = 3;
                }
            } else {
                phi_v0 = 2;
            }
        } else {
            phi_v0 = 1;
        }
        temp_v1 = (phi_v0 * 0x10) + &D_80B11A00;
        this->actor.world.pos.x = temp_v1->unk_0;
        this->actor.world.pos.y = temp_v1->unk_4;
        this->actor.world.pos.z = temp_v1->unk_8;
        this->actionFunc = func_80B11268;
        this->actor.world.rot.y = (s16) (s32) (temp_v1->unk_C * 182.04445f);
        this->actor.shape.rot.y = this->actor.world.rot.y;
    }
}

void func_80B11268(EnGb2 *this, GlobalContext *globalCtx) {
    if (globalCtx->roomCtx.currRoom.num == 1) {
        this->unk_290 = 0;
        this->unk_282 = (s16) this->actor.cutscene;
        if ((Actor_GetRoomCleared(globalCtx, 2U) != 0) && (Actor_GetRoomCleared(globalCtx, 3U) != 0) && (Actor_GetRoomCleared(globalCtx, 4U) != 0) && (Actor_GetRoomCleared(globalCtx, 5U) != 0)) {
            this->unk_28A = 0xFF;
            this->unk_26C &= 0xFEFF;
            this->actor.flags |= 1;
            this->actor.draw = EnGb2_Draw;
            this->unk_26E = 0x14F9;
            this->actionFunc = func_80B11048;
            return;
        }
        this->actionFunc = func_80B111AC;
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_80B11344(EnGb2 *this, GlobalContext *globalCtx) {
    if (gSaveContext.rupeeAccumulator == 0) {
        func_80B0FE18(globalCtx);
    }
}

void EnGb2_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a1;
    s16 temp_v1;
    s32 temp_v0;
    u32 temp_t8;
    SaveContext *phi_v0;
    EnGb2 *this = (EnGb2 *) thisx;

    if (func_80B0F660(this, globalCtx) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->actor.room = -1;
    Actor_ProcessInitChain((Actor *) this, D_80B11AC4);
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_06007230, &D_0600049C, &this->unk_188, &this->unk_1D0, 0xC);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 35.0f);
    temp_a1 = &this->unk_21C;
    sp30 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinderType1(globalCtx, temp_a1, (Actor *) this, &D_80B11A40);
    Actor_SetScale((Actor *) this, 0.01f);
    temp_v1 = this->actor.params;
    temp_v0 = temp_v1 & 7;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            this->unk_290 = 0;
            this->unk_282 = (s16) this->actor.cutscene;
            if (Flags_GetSwitch(globalCtx, (s32) (this->actor.params & 0x7F8) >> 3) != 0) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            if ((Actor_GetRoomCleared(globalCtx, 2U) != 0) && (Actor_GetRoomCleared(globalCtx, 3U) != 0) && (Actor_GetRoomCleared(globalCtx, 4U) != 0) && (Actor_GetRoomCleared(globalCtx, 5U) != 0)) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            if ((gSaveContext.weekEventReg[76] & 0x80) != 0) {
                this->actor.draw = NULL;
                this->unk_26C |= 0x100;
                this->actor.flags &= -2;
                this->actionFunc = func_80B111AC;
                return;
            }
            this->unk_28A = 0xFF;
            this->unk_26E = 0x14F5;
            this->actionFunc = func_80B11048;
            return;
        }
        if ((globalCtx->curSpawn == 1) || ((gSaveContext.weekEventReg[80] & 0x80) != 0)) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        if (Flags_GetSwitch(globalCtx, (s32) (temp_v1 & 0x7F8) >> 3) != 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->unk_28A = 0xFF;
        func_80B0FA04(this);
        this->unk_28C = Player_GetMask(globalCtx);
        this->actionFunc = func_80B10B5C;
        return;
    }
    phi_v0 = &gSaveContext;
    if ((gSaveContext.weekEventReg[54] & 0x80) != 0) {
        Actor_MarkForDeath((Actor *) this);
        goto block_10;
    }
    if ((gSaveContext.weekEventReg[52] & 0x20) != 0) {
        Actor_MarkForDeath((Actor *) this);
block_10:
        phi_v0 = &gSaveContext;
    }
    if (phi_v0->entranceIndex == 0x9C10) {
        func_800FE484();
        this->actionFunc = func_80B10240;
        return;
    }
    this->unk_28A = 0xFF;
    temp_t8 = this->actor.flags | 0x10;
    this->actor.flags = temp_t8;
    this->actor.flags = temp_t8 | 0x2000000;
    if ((phi_v0->eventInf[4] & 0x40) != 0) {
        func_80B0F728(this, globalCtx);
        return;
    }
    func_80B0FBF0((Actor *) this, globalCtx);
    func_80B0F6DC(this);
}

void EnGb2_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnGb2 *this = (EnGb2 *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_21C);
}

void EnGb2_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnGb2 *this = (EnGb2 *) thisx;
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    this->actionFunc(this, globalCtx);
    if ((this->unk_26C & 0x100) == 0) {
        func_80B0F5E0(this, globalCtx);
    }
    func_800E9250(globalCtx, (Actor *) this, &this->unk_270, &this->unk_276, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
}

s32 func_80B1179C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg1 == 7) {
        arg1 = arg1;
        Matrix_RotateY(arg5[104].y, 1U);
    }
    if (arg1 == 1) {
        *arg2 = NULL;
    }
    return 0;
}

void func_80B117FC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? sp18;

    sp18.unk_0 = (s32) D_80B11ACC.unk_0;
    sp18.unk_4 = (s32) D_80B11ACC.unk_4;
    sp18.unk_8 = (s32) D_80B11ACC.unk_8;
    if (arg1 == 7) {
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp18, arg4 + 0x3C);
    }
}

void EnGb2_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a2;
    GraphicsContext *temp_s1;
    EnGb2 *this = (EnGb2 *) thisx;

    temp_a2 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a2;
    if (this->unk_28A == 0xFF) {
        func_8012C28C(temp_a2);
        temp_v1 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v1[1];
        temp_v1->words.w1 = -1;
        temp_v1->words.w0 = 0xFB000000;
        Scene_SetRenderModeXlu(globalCtx, 0, 1U);
        temp_s1->polyOpa.p = SkelAnime_DrawSV2(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80B1179C, func_80B117FC, (Actor *) this, temp_s1->polyOpa.p);
        return;
    }
    func_8012C2DC(temp_a2);
    temp_v1_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = &temp_v1_2[1];
    temp_v1_2->words.w0 = 0xFB000000;
    temp_v1_2->words.w1 = this->unk_28A | ~0xFF;
    Scene_SetRenderModeXlu(globalCtx, 1, 2U);
    temp_s1->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80B1179C, func_80B117FC, (Actor *) this, temp_s1->polyXlu.p);
}
