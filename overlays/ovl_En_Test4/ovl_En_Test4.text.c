CRASHED

typedef struct EnTest4 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s8 unk144;                          /* inferred */
    /* 0x145 */ u8 unk145;                          /* inferred */
    /* 0x146 */ u16 unk146;                         /* inferred */
    /* 0x148 */ u16 unk148;                         /* inferred */
    /* 0x14A */ u16 unk14A;                         /* inferred */
    /* 0x14C */ u8 unk14C;                          /* inferred */
    /* 0x14D */ char pad14D[0x3];                   /* maybe part of unk14C[4]? */
    /* 0x150 */ void (*actionFunc)(EnTest4 *, GlobalContext *);
} EnTest4;                                          /* size = 0x154 */

struct _mips2c_stack_EnTest4_Destroy {};            /* size 0x0 */

struct _mips2c_stack_EnTest4_Init {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnTest4_Update {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A41D70 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A41FA4 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A42198 {};              /* size 0x0 */

struct _mips2c_stack_func_80A425E4 {};              /* size 0x0 */

struct _mips2c_stack_func_80A42AB8 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ void *sp34;                          /* inferred */
    /* 0x38 */ char pad38[0x1C];                    /* maybe part of sp34[8]? */
    /* 0x54 */ Actor *sp54;                         /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80A42F20 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A430C8 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A4323C {};              /* size 0x0 */

? func_800FB758(GlobalContext *);                   /* extern */
? func_800FEAF4(EnvironmentContext *);              /* extern */
? func_8010EE74(GlobalContext *, s32, EnTest4 *);   /* extern */
s32 func_8016A168();                                /* extern */
? func_801A0124(Vec3f *, s32, s16, s16);            /* extern */
void func_80A41D70(EnTest4 *arg0, GlobalContext *arg1, Actor *); /* static */
void func_80A41FA4(EnTest4 *arg0, GlobalContext *arg1, s16, s16); /* static */
void func_80A42198(EnTest4 *arg0);                  /* static */
void func_80A425E4(EnTest4 *arg0, GlobalContext *arg1); /* static */
void func_80A430C8(EnTest4 *arg0, GlobalContext *arg1); /* static */
? func_80A431C8(EnTest4 *, GlobalContext *);        /* static */
void func_80A4323C(EnTest4 *arg0, GlobalContext *arg1); /* static */
extern s32 D_801BDA9C;
extern u8 D_801BDBB0;
extern s16 D_801F4E7A;
static s32 D_80A43340;                              /* type too large by 2; unable to generate initializer */
static ? D_80A43342;                                /* unable to generate initializer */
static ? D_80A4334A;                                /* unable to generate initializer */
static ? D_80A43352;                                /* unable to generate initializer */
static ? D_80A4335A;                                /* unable to generate initializer */
static ? D_80A43364;                                /* unable to generate initializer */
static s16 D_80A434D0;
static s16 D_80A434D4;

void func_80A41D70(EnTest4 *arg0, GlobalContext *arg1) {
    s16 *temp_v1;
    s8 temp_v0;
    u16 temp_t1;
    u16 temp_t9;
    s8 phi_v0;
    EnTest4 *phi_a2;

    temp_v0 = arg0->unk144;
    phi_v0 = temp_v0;
    phi_a2 = arg0;
    if (temp_v0 != 0) {
        arg0 = arg0;
        func_80151A68(arg1, *(&D_80A43342 + (((s32) gSaveContext.day % 5) * 2)));
        goto block_8;
    }
    if (((s32) *(&D_80A434D0 + (temp_v0 * 2)) < 0) || ((arg1->actorCtx.unk5 & 2) != 0)) {
        if ((arg1->actorCtx.unk5 & 2) != 0) {
            arg0 = arg0;
            Sram_IncrementDay();
            gSaveContext.time = 0x4000;
            func_80151A68(arg1, *(&D_80A4334A + (((s32) gSaveContext.day % 5) * 2)));
        } else {
            arg0->unk144 = 0;
            temp_t1 = gSaveContext.time + 0x2D;
            gSaveContext.time = temp_t1;
            arg0->unk146 = temp_t1;
        }
        arg0 = arg0;
        func_8010EE74(arg1, (s32) gSaveContext.day % 5, arg0);
        D_801BDBC8 = 0xFE;
        func_800FB758(arg1);
        func_800FEAF4(&arg1->envCtx);
        arg0->actionFunc = func_80A42AB8;
block_8:
        phi_v0 = arg0->unk144;
        phi_a2 = arg0;
    }
    if (gSaveContext.cutsceneTrigger == 0) {
        temp_v1 = (phi_v0 * 2) + &D_80A434D0;
        if (((s32) *temp_v1 >= 0) && ((arg1->actorCtx.unk5 & 2) == 0)) {
            phi_a2->actionFunc = func_80A42F20;
            D_80A434D4 = *temp_v1;
            phi_a2->unk145 = 0;
            gSaveContext.eventInf[1] |= 0x80;
            return;
        }
        if (phi_v0 == 0) {
            play_sound(0x2813U);
            return;
        }
        func_8019F128(0x28AEU);
        return;
    }
    phi_a2->actionFunc = func_80A42AB8;
    if (phi_v0 == 0) {
        phi_a2->unk144 = 1;
    } else {
        phi_a2->unk144 = 0;
    }
    temp_t9 = gSaveContext.time + 0x2D;
    gSaveContext.time = temp_t9;
    phi_a2->unk146 = temp_t9;
}

void func_80A41FA4(EnTest4 *arg0, GlobalContext *arg1) {
    s16 *temp_v1;
    s8 temp_v0;
    u16 temp_t3;
    s8 phi_v0;
    EnTest4 *phi_a2;

    temp_v0 = arg0->unk144;
    phi_v0 = temp_v0;
    phi_a2 = arg0;
    if (temp_v0 != 0) {
        arg0 = arg0;
        func_80151A68(arg1, *(&D_80A43352 + (((s32) gSaveContext.day % 5) * 2)));
        goto block_5;
    }
    if (((s32) *(&D_80A434D0 + (temp_v0 * 2)) < 0) || ((arg1->actorCtx.unk5 & 2) != 0)) {
        arg0 = arg0;
        Sram_IncrementDay();
        gSaveContext.time = 0x4000;
        func_8010EE74(arg1, (s32) gSaveContext.day % 5);
        func_80151A68(arg1, *(&D_80A4335A + (((s32) gSaveContext.day % 5) * 2)));
        D_801BDBC8 = 0xFE;
        func_800FB758(arg1);
        func_800FEAF4(&arg1->envCtx);
        arg0->actionFunc = func_80A42AB8;
block_5:
        phi_v0 = arg0->unk144;
        phi_a2 = arg0;
    }
    if (gSaveContext.cutsceneTrigger == 0) {
        temp_v1 = (phi_v0 * 2) + &D_80A434D0;
        if (((s32) *temp_v1 >= 0) && ((arg1->actorCtx.unk5 & 2) == 0)) {
            phi_a2->actionFunc = func_80A42F20;
            D_80A434D4 = *temp_v1;
            phi_a2->unk145 = 0;
            gSaveContext.eventInf[1] |= 0x80;
            return;
        }
        if (phi_v0 == 0) {
            play_sound(0x2813U);
            return;
        }
        func_8019F128(0x28AEU);
        return;
    }
    phi_a2->actionFunc = func_80A42AB8;
    if (phi_v0 == 0) {
        phi_a2->unk144 = 1;
    } else {
        phi_a2->unk144 = 0;
    }
    temp_t3 = gSaveContext.time + 0x2D;
    gSaveContext.time = temp_t3;
    phi_a2->unk146 = temp_t3;
}

void func_80A42198(EnTest4 *arg0) {
    u16 temp_v0;

    temp_v0 = gSaveContext.time;
    if (((s32) temp_v0 >= 0x4000) && ((s32) temp_v0 < 0xC001)) {
        if ((s32) temp_v0 < 0xBAAA) {
            arg0->unk148 = 0xBAAA;
            return;
        }
        if ((s32) temp_v0 < 0xBBBB) {
            arg0->unk148 = 0xBBBB;
            return;
        }
        if ((s32) temp_v0 < 0xBCCC) {
            arg0->unk148 = 0xBCCC;
            return;
        }
        if ((s32) temp_v0 < 0xBDDD) {
            arg0->unk148 = 0xBDDD;
            return;
        }
        if ((s32) temp_v0 < 0xBEEE) {
            arg0->unk148 = 0xBEEE;
            return;
        }
        arg0->unk148 = 0;
        return;
    }
    if ((s32) temp_v0 >= 0x4001) {
        arg0->unk148 = 0;
        return;
    }
    if ((s32) temp_v0 < 0x1C7) {
        arg0->unk148 = 0x1C7;
        return;
    }
    if ((s32) temp_v0 < 0x38E) {
        arg0->unk148 = 0x38E;
        return;
    }
    if ((s32) temp_v0 < 0x555) {
        arg0->unk148 = 0x555;
        return;
    }
    if ((s32) temp_v0 < 0x71C) {
        arg0->unk148 = 0x71C;
        return;
    }
    if ((s32) temp_v0 < 0x8E3) {
        arg0->unk148 = 0x8E3;
        return;
    }
    if ((s32) temp_v0 < 0xAAA) {
        arg0->unk148 = 0xAAA;
        return;
    }
    if ((s32) temp_v0 < 0xC71) {
        arg0->unk148 = 0xC71;
        return;
    }
    if ((s32) temp_v0 < 0xE38) {
        arg0->unk148 = 0xE38;
        return;
    }
    if ((s32) temp_v0 < 0xFFF) {
        arg0->unk148 = 0xFFF;
        return;
    }
    if ((s32) temp_v0 < 0x11C6) {
        arg0->unk148 = 0x11C6;
        return;
    }
    if ((s32) temp_v0 < 0x138D) {
        arg0->unk148 = 0x138D;
        return;
    }
    if ((s32) temp_v0 < 0x1555) {
        arg0->unk148 = 0x1555;
        return;
    }
    if ((s32) temp_v0 < 0x171C) {
        arg0->unk148 = 0x171C;
        return;
    }
    if ((s32) temp_v0 < 0x18E3) {
        arg0->unk148 = 0x18E3;
        return;
    }
    if ((s32) temp_v0 < 0x1AAA) {
        arg0->unk148 = 0x1AAA;
        return;
    }
    if ((s32) temp_v0 < 0x1C71) {
        arg0->unk148 = 0x1C71;
        return;
    }
    if ((s32) temp_v0 < 0x1E38) {
        arg0->unk148 = 0x1E38;
        return;
    }
    if ((s32) temp_v0 < 0x2000) {
        arg0->unk148 = 0x2000;
        return;
    }
    if ((s32) temp_v0 < 0x21C7) {
        arg0->unk148 = 0x21C7;
        return;
    }
    if ((s32) temp_v0 < 0x238E) {
        arg0->unk148 = 0x238E;
        return;
    }
    if ((s32) temp_v0 < 0x2555) {
        arg0->unk148 = 0x2555;
        return;
    }
    if ((s32) temp_v0 < 0x271C) {
        arg0->unk148 = 0x271C;
        return;
    }
    if ((s32) temp_v0 < 0x28E3) {
        arg0->unk148 = 0x28E3;
        return;
    }
    if ((s32) temp_v0 < 0x2AAA) {
        arg0->unk148 = 0x2AAA;
        return;
    }
    if ((s32) temp_v0 < 0x2C71) {
        arg0->unk148 = 0x2C71;
        return;
    }
    if ((s32) temp_v0 < 0x2E38) {
        arg0->unk148 = 0x2E38;
        return;
    }
    if ((s32) temp_v0 < 0x2FFF) {
        arg0->unk148 = 0x2FFF;
        return;
    }
    if ((s32) temp_v0 < 0x31C6) {
        arg0->unk148 = 0x31C6;
        return;
    }
    if ((s32) temp_v0 < 0x338D) {
        arg0->unk148 = 0x338D;
        return;
    }
    if ((s32) temp_v0 < 0x3555) {
        arg0->unk148 = 0x3555;
        return;
    }
    if ((s32) temp_v0 < 0x3638) {
        arg0->unk148 = 0x3638;
        return;
    }
    if ((s32) temp_v0 < 0x371C) {
        arg0->unk148 = 0x371C;
        return;
    }
    if ((s32) temp_v0 < 0x37FF) {
        arg0->unk148 = 0x37FF;
        return;
    }
    if ((s32) temp_v0 < 0x38E3) {
        arg0->unk148 = 0x38E3;
        return;
    }
    if ((s32) temp_v0 < 0x39C6) {
        arg0->unk148 = 0x39C6;
        return;
    }
    if ((s32) temp_v0 < 0x3AAA) {
        arg0->unk148 = 0x3AAA;
        return;
    }
    if ((s32) temp_v0 < 0x3B32) {
        arg0->unk148 = 0x3B32;
        return;
    }
    if ((s32) temp_v0 < 0x3BBB) {
        arg0->unk148 = 0x3BBB;
        return;
    }
    if ((s32) temp_v0 < 0x3C43) {
        arg0->unk148 = 0x3C43;
        return;
    }
    if ((s32) temp_v0 < 0x3CCC) {
        arg0->unk148 = 0x3CCC;
        return;
    }
    if ((s32) temp_v0 < 0x3D55) {
        arg0->unk148 = 0x3D55;
        return;
    }
    if ((s32) temp_v0 < 0x3DDD) {
        arg0->unk148 = 0x3DDD;
        return;
    }
    if ((s32) temp_v0 < 0x3E66) {
        arg0->unk148 = 0x3E66;
        return;
    }
    if ((s32) temp_v0 < 0x3EEE) {
        arg0->unk148 = 0x3EEE;
        return;
    }
    if ((s32) temp_v0 < 0x3F77) {
        arg0->unk148 = 0x3F77;
        return;
    }
    if ((s32) temp_v0 < 0x4000) {
        arg0->unk148 = 0x4000;
    }
}

void func_80A425E4(EnTest4 *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    temp_v0 = gSaveContext.time;
    gSaveContext.unk_3F64 = 1000.0f;
    if (((s32) temp_v0 >= 0x4000) && ((s32) temp_v0 < 0xC000)) {
        if ((s32) temp_v0 < 0xBAAA) {
            arg0->unk148 = 0xBAAA;
            return;
        }
        if ((s32) temp_v0 < 0xBBBB) {
            arg0->unk148 = 0xBBBB;
            return;
        }
        if ((s32) temp_v0 < 0xBCCC) {
            arg0->unk148 = 0xBCCC;
            return;
        }
        if ((s32) temp_v0 < 0xBDDD) {
            arg0->unk148 = 0xBDDD;
            return;
        }
        if ((s32) temp_v0 < 0xBEEE) {
            arg0->unk148 = 0xBEEE;
            return;
        }
        arg0->unk148 = 0x3AAA;
        return;
    }
    if ((s32) temp_v0 < 0x3AAA) {
        arg0->unk148 = 0x3AAA;
    } else if ((s32) temp_v0 < 0x3BBB) {
        arg0->unk148 = 0x3BBB;
    } else if ((s32) temp_v0 < 0x3CCC) {
        arg0->unk148 = 0x3CCC;
        gSaveContext.unk_3F64 -= 50.0f;
    } else if ((s32) temp_v0 < 0x3DDD) {
        arg0->unk148 = 0x3DDD;
        gSaveContext.unk_3F64 -= 100.0f;
    } else if ((s32) temp_v0 < 0x3EEE) {
        arg0->unk148 = 0x3EEE;
        gSaveContext.unk_3F64 -= 150.0f;
    } else if ((s32) temp_v0 < 0x4000) {
        arg0->unk148 = 0xBAAA;
        gSaveContext.unk_3F64 -= 200.0f;
    } else {
        arg0->unk148 = 0xBAAA;
    }
    if (((s32) *(&D_80A434D0 + (arg0->unk144 * 2)) < 0) || ((arg1->actorCtx.unk5 & 2) != 0) || (((s32) gSaveContext.day % 5) == 3) || ((s32) gSaveContext.time >= 0xB555)) {
        gSaveContext.unk_3F64 = 1000.0f;
    }
    if (gSaveContext.unk_3F64 != 1000.0f) {
        gSaveContext.unk_3F60 = 1;
    }
}

void EnTest4_Init(EnTest4 *this, GlobalContext *globalCtx) {
    Actor *sp24;
    ActorCutscene *temp_v0_2;
    s8 temp_v0;
    u16 temp_v0_3;
    SaveContext *phi_v1;
    EnTest4 *this = (EnTest4 *) thisx;

    temp_v0 = this->actor.cutscene;
    D_80A434D0 = (s16) temp_v0;
    if ((s32) temp_v0 >= 0) {
        sp24 = globalCtx->actorCtx.actorList[2].first;
        temp_v0_2 = ActorCutscene_GetCutscene(D_80A434D0);
        gSaveContext.eventInf[5] |= 4;
        *(&D_80A434D0 + 2) = temp_v0_2->additionalCutscene;
    } else {
        gSaveContext.eventInf[5] &= 0xFB;
        *(&D_80A434D0 + 2) = D_80A434D0;
    }
    phi_v1 = &gSaveContext;
    if ((D_80A43340 != 0) || ((gSaveContext.eventInf[2] & 0x80) != 0)) {
        Actor_MarkForDeath((Actor *) this);
        phi_v1 = &gSaveContext;
    } else {
        D_80A43340 = 1;
        this->actor.room = -1;
        gSaveContext.unk_3F60 = 0;
        gSaveContext.unk_3F64 = 1000.0f;
        if (((s32) gSaveContext.day % 5) == 0) {
            if ((s32) gSaveContext.time < 0x402D) {
                gSaveContext.time = 0x4000;
                gSaveContext.gameMode = 0;
                globalCtx->state.running = 0;
                globalCtx->state.nextGameStateInit = Daytelop_Init;
                globalCtx->state.nextGameStateSize = 0x248;
                this->unk144 = (s8) 1;
                gSaveContext.time = 0x4000;
                Actor_MarkForDeath((Actor *) this);
                phi_v1 = &gSaveContext;
            } else {
                gSaveContext.day = 1;
                gSaveContext.daysElapsed = 1;
                this->unk144 = (s8) 1;
                this->actionFunc = func_80A42AB8;
                this->unk146 = gSaveContext.time;
            }
        } else {
            temp_v0_3 = gSaveContext.time;
            if (temp_v0_3 == 0x4000) {
                this->unk144 = 0;
                sp24 = globalCtx->actorCtx.actorList[2].first;
                func_80A41D70(this, globalCtx, globalCtx->actorCtx.actorList[2].first);
                phi_v1 = &gSaveContext;
                if ((gSaveContext.cutsceneTrigger == 0) && ((s32) *(&D_80A434D0 + (this->unk144 * 2)) >= 0) && ((globalCtx->actorCtx.unk5 & 2) == 0)) {
                    globalCtx->actorCtx.actorList[2].first->unkA6C = (s32) (globalCtx->actorCtx.actorList[2].first->unkA6C | 0x200);
                }
            } else {
                if (((s32) temp_v0_3 >= 0xC001) || ((s32) temp_v0_3 < 0x4000)) {
                    this->unk144 = 0;
                } else {
                    this->unk144 = (s8) 1;
                }
                this->actionFunc = func_80A42AB8;
                this->unk146 = gSaveContext.time;
            }
        }
    }
    if (((s32) phi_v1->day % 5) == 3) {
        func_80A42198(this);
    } else {
        func_80A425E4(this, globalCtx);
    }
    this->unk14A = gSaveContext.time;
    if (((s32) *(&D_80A434D0 + (this->unk144 * 2)) < 0) || ((globalCtx->actorCtx.unk5 & 2) != 0)) {
        gSaveContext.unk_3F60 = 0;
        gSaveContext.unk_3F64 = 1000.0f;
    }
}

void EnTest4_Destroy(EnTest4 *this, GlobalContext *globalCtx) {
    EnTest4 *this = (EnTest4 *) thisx;

}

void func_80A42AB8(EnTest4 *this, GlobalContext *globalCtx) {
    Actor *sp54;
    void *sp34;
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_v0_4;
    s32 temp_hi;
    s32 temp_v1_2;
    s8 temp_v0_3;
    u16 temp_a0;
    u16 temp_t4;
    u16 temp_v0;
    u16 temp_v1;
    u8 temp_v0_2;
    SaveContext *phi_t0;
    s32 phi_v0;

    sp54 = globalCtx->actorCtx.actorList[2].first;
    if ((globalCtx->unk_18B4A == 0) && (sp34 = globalCtx + 0x18000, (func_801690CC(globalCtx) == 0)) && ((s32) globalCtx->numSetupActors <= 0) && (globalCtx->roomCtx.unk31 == 0) && (func_8016A168() == 0)) {
        temp_v0 = gSaveContext.time;
        temp_a0 = *(&D_80A43364 + (this->unk144 * 2));
        temp_v1 = this->unk148;
        temp_a2 = temp_v0 - temp_a0;
        temp_a3 = this->unk146 - temp_a0;
        phi_t0 = &gSaveContext;
        if ((temp_a2 * temp_a3) <= 0) {
            gSaveContext.unk_3CA7 = 1;
            temp_v0_2 = globalCtx->actorCtx.unk5;
            if ((temp_v0_2 & 4) != 0) {
                globalCtx->actorCtx.unk5 = temp_v0_2 & 0xFFFB;
            }
            if (temp_a0 != 0x4000) {
                func_80A41FA4(this, globalCtx, temp_a2, temp_a3);
                goto block_24;
            }
            if (temp_a0 == 0x4000) {
                temp_hi = (s32) gSaveContext.day % 5;
                if (temp_hi == 3) {
                    func_8011C808(globalCtx);
                    Actor_MarkForDeath((Actor *) this);
                    gSaveContext.eventInf[1] |= 0x80;
                    phi_t0 = &gSaveContext;
                } else {
                    if ((((s32) (&D_80A434D0)[this->unk144] < 0) || ((globalCtx->actorCtx.unk5 & 2) != 0)) && (temp_hi != 3)) {
                        func_80A41FA4(this, globalCtx, temp_a2, temp_a3);
                    } else {
                        gSaveContext.unk_3F64 = 0.0f;
                        func_80169DCC(globalCtx, 0, Entrance_CreateIndexFromSpawn(0) & 0xFFFF, (s32) sp54->unk3CE, 0xBFF, sp54 + 0x3C0, (s16) (s32) sp54->unk3CC);
                        func_80169EFC(globalCtx);
                        if ((sp54->unkA6C & 0x800000) && ((temp_v1_2 = sp54->unk390->unk150, (temp_v1_2 == 0)) || (temp_v1_2 == 2))) {
                            if (((s32) gSaveContext.day % 5) < 3) {
                                D_801BDA9C = 1;
                            } else {
                                D_801BDA9C = 0;
                            }
                        }
                        gSaveContext.respawnFlag = -4;
                        gSaveContext.eventInf[2] |= 0x80;
                        Actor_MarkForDeath((Actor *) this);
                    }
block_24:
                    phi_t0 = &gSaveContext;
                }
            }
            temp_v0_3 = this->unk144;
            if (((s32) (&D_80A434D0)[temp_v0_3] >= 0) && ((globalCtx->actorCtx.unk5 & 2) == 0)) {
                sp54->unkA6C = (s32) (sp54->unkA6C | 0x200);
                this->unk146 = phi_t0->time;
                return;
            }
            if (temp_v0_3 == 0) {
                this->unk144 = 1;
            } else {
                this->unk144 = 0;
            }
            temp_t4 = phi_t0->time + 0x2D;
            phi_t0->time = temp_t4;
            this->unk146 = temp_t4;
            return;
        }
        if (((s16) (temp_v0 - temp_v1) * (s16) (this->unk14A - temp_v1)) <= 0) {
            func_801A0124(&this->actor.projectedPos, ((s32) this->actor.params >> 5) & 0xF & 0xFF, temp_a2, temp_a3);
            this->unk14A = gSaveContext.time;
            if (((s32) gSaveContext.day % 5) == 3) {
                if ((this->unk148 == 0) && ((gSaveContext.inventory.items[0] == 0xFF) || (globalCtx->sceneNum == 0x6F))) {
                    if ((globalCtx->actorCtx.unk5 & 2) != 0) {
                        phi_v0 = 0xCFF;
                    } else {
                        phi_v0 = 0xBFF;
                    }
                    func_80169DCC(globalCtx, 1, gSaveContext.entranceIndex & 0xFFFF, (s32) sp54->unk3CE, phi_v0, sp54 + 0x3C0, (s16) (s32) sp54->unk3CC);
                    temp_v0_4 = globalCtx->sceneNum;
                    if ((temp_v0_4 == 0x29) || (temp_v0_4 == 0x2D)) {
                        globalCtx->nextEntranceIndex = 0x5400;
                    } else {
                        globalCtx->nextEntranceIndex = 0xD800;
                    }
                    gSaveContext.nextCutsceneIndex = 0xFFF1;
                    globalCtx->sceneLoadFlag = 0x14;
                    globalCtx->unk_1887F = 2;
                    sp54->unkA6C = (s32) (sp54->unkA6C | 0x200);
                    Actor_MarkForDeath((Actor *) this);
                }
                func_80A42198(this);
                return;
            }
            func_80A425E4(this, globalCtx);
            /* Duplicate return node #47. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #47. Try simplifying control flow for better match */
    }
}

void func_80A42F20(EnTest4 *this, GlobalContext *globalCtx) {
    EnTest4 *temp_a1;
    s16 temp_a0;
    s16 temp_a0_2;
    u16 temp_t2;
    u8 temp_t8;
    u8 temp_v0;
    u8 temp_v1;
    void *temp_v0_2;
    u8 phi_v0;
    EnTest4 *phi_a2;
    GlobalContext *phi_a1;

    temp_v1 = this->unk145;
    phi_a2 = this;
    phi_a1 = globalCtx;
    if (temp_v1 == 0) {
        temp_a0 = D_80A434D4;
        if ((s32) temp_a0 >= 0) {
            this = this;
            if (ActorCutscene_GetCanPlayNext(temp_a0) == 0) {
                ActorCutscene_SetIntentToPlay(D_80A434D4);
                return;
            }
            temp_a1 = this;
            this = this;
            ActorCutscene_Start(D_80A434D4, (Actor *) temp_a1);
            this->unk145 = 1;
            return;
        }
        this->unk145 = 1;
        return;
    }
    temp_t8 = temp_v1 + 1;
    if ((s32) temp_v1 < 0x3C) {
        temp_v0 = temp_t8 & 0xFF;
        this->unk145 = temp_t8;
        phi_v0 = temp_v0;
        if (temp_v0 == 0xA) {
            if (this->unk144 == 0) {
                this = this;
                play_sound(0x2813U);
            } else {
                this = this;
                func_8019F128(0x28AEU);
            }
            phi_v0 = this->unk145;
            phi_a2 = this;
            phi_a1 = globalCtx;
        }
        if (phi_v0 == 0x3C) {
            temp_v0_2 = phi_a1->actorCtx.actorList[2].first;
            temp_t2 = gSaveContext.time + 0x2D;
            gSaveContext.time = temp_t2;
            phi_a2->unk146 = temp_t2;
            phi_a1->numSetupActors = (s16) -(s32) phi_a1->numSetupActors;
            temp_v0_2->unkA6C = (s32) (temp_v0_2->unkA6C & ~0x200);
            return;
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return;
    }
    this->actionFunc = func_80A42AB8;
    if (this->unk144 == 0) {
        this->unk144 = 1;
    } else {
        this->unk144 = 0;
    }
    temp_a0_2 = D_80A434D4;
    if ((s32) temp_a0_2 >= 0) {
        ActorCutscene_Stop(temp_a0_2);
    }
    gSaveContext.unk_3F22 = 0;
    gSaveContext.eventInf[1] &= 0x7F;
    Interface_ChangeAlpha(0x32U);
}

void func_80A430C8(EnTest4 *arg0, GlobalContext *arg1) {
    s32 sp1C;
    u16 temp_v0;
    u8 temp_t4;
    u8 temp_v1;

    if ((((s32) gSaveContext.day % 5) == 2) && (temp_v0 = gSaveContext.time, (((s32) temp_v0 < 0x4AAA) == 0)) && ((s32) temp_v0 < 0xBAAA) && (arg1->envCtx.unk_F2[2] == 0)) {
        D_801BDBB0 = 1;
        sp1C = arg1 + 0x10000;
        func_800FD78C(arg1);
        arg1->envCtx.unk_E3 = 1;
        arg1->envCtx.unk_F2[0] = 0x3C;
    } else {
        temp_v1 = arg1->envCtx.unk_F2[0];
        if (temp_v1 != 0) {
            temp_t4 = temp_v1 - 1;
            if ((arg1->state.frames & 3) == 0) {
                arg1->envCtx.unk_F2[0] = temp_t4;
                if ((temp_t4 & 0xFF) == 8) {
                    func_800FD858(arg1);
                }
            }
        }
    }
    if (D_801BDBB0 == 1) {
        arg0->unk14C = 1;
    }
}

/*
Failed to decompile function func_80A431C8:

Label L80A43200 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void func_80A4323C(EnTest4 *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    temp_v0 = ((s32) arg0->actor.params >> 0xA) * 0x64;
    if (temp_v0 > 0) {
        D_801F4E7A = (s16) temp_v0;
    }
}

void EnTest4_Update(EnTest4 *this, GlobalContext *globalCtx) {
    u8 temp_v0;
    EnTest4 *this = (EnTest4 *) thisx;

    if ((globalCtx->actorCtx.actorList[2].first->unkA6C & 2) == 0) {
        this->actionFunc(this, globalCtx);
        if (func_800FE4B8(globalCtx) != 0) {
            temp_v0 = this->unk14C;
            if (temp_v0 != 0) {
                if (temp_v0 != 1) {

                } else {
                    func_80A431C8(this, globalCtx);
                }
            } else {
                func_80A430C8(this, globalCtx);
            }
        }
        func_80A4323C(this, globalCtx);
    }
}
