struct _mips2c_stack_EnDnq_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnDnq_Draw {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnDnq_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnDnq_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A52530 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A5257C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A52604 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ColliderCylinder *sp1C;              /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A52648 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A526F8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A52944 {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A52A78 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A52B68 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A52C6C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ? sp1C;                              /* inferred */
    /* 0x1C */ char pad_1C[0xC];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0xC];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0x14];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A52CF8 {};              /* size 0x0 */

struct _mips2c_stack_func_80A52D44 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A52DC8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A52FB8 {
    /* 0x00 */ char pad_0[0x2E];
    /* 0x2E */ s16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A53038 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ u32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

void func_80A52530(GlobalContext *arg0, Actor *arg1); /* static */
s32 func_80A5257C(EnDnq *arg0, s32 arg1);           /* static */
void func_80A52604(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A52648(EnDnq *arg0, GlobalContext *arg1); /* static */
? func_80A526F8(EnDnq *arg0);                       /* static */
? func_80A52944(EnDnq *arg0);                       /* static */
? func_80A52A78(EnDnq *arg0, GlobalContext *arg1);  /* static */
? func_80A52B68(EnDnq *arg0, GlobalContext *arg1);  /* static */
void func_80A52C6C(EnDnq *arg0, GlobalContext *arg1); /* static */
? *func_80A52CF8(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A52D44(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A52DC8(EnDnq *arg0, GlobalContext *arg1); /* static */
void func_80A53038(EnDnq *arg0, GlobalContext *arg1); /* static */
extern FlexSkeletonHeader D_0600EB48;
static ? D_80A53400;                                /* unable to generate initializer */
static ? D_80A53420;                                /* unable to generate initializer */
static ? D_80A53438;                                /* unable to generate initializer */
static ColliderCylinderInit D_80A53464 = {
    {1, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x22, 0x50, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80A53490 = {1, 0, 0, 0, 0xFF};
static ActorAnimationEntryS D_80A5349C[20] = {
    {(AnimationHeader *)0x6008328, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6008328, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6007528, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x60006F0, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6000BF8, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6002690, 0.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6002690, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6003408, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6006984, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6005E18, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6005A14, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6005284, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6001AEC, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6001100, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6004EA0, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x600F504, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60047B8, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6003DBC, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6005A14, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6003DBC, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
};
static ? D_80A535DC;                                /* unable to generate initializer */
static ? D_80A535F0;                                /* unable to generate initializer */
static ? D_80A535FC;                                /* unable to generate initializer */

void func_80A52530(GlobalContext *arg0, Actor *arg1) {
    func_8013A530(arg0, arg1, 0xA, arg1 + 0x3C, arg1 + 0x30, 120.0f, 480.0f, (s16) 0x38E3);
}

s32 func_80A5257C(EnDnq *arg0, s32 arg1) {
    s32 temp_v0;
    s32 phi_v1;
    s32 phi_t0;

    phi_v1 = 0;
    phi_t0 = 0;
    if ((arg1 == 0) || (arg1 == 1)) {
        temp_v0 = arg0->unk_398;
        if ((temp_v0 != 0) && (temp_v0 != 1)) {
            goto block_6;
        }
    } else if (arg1 != arg0->unk_398) {
block_6:
        phi_v1 = 1;
    }
    if (phi_v1 != 0) {
        arg0->unk_398 = arg1;
        phi_t0 = func_8013BC6C(arg0 + 0x148, D_80A5349C, arg1);
    }
    return phi_t0;
}

void func_80A52604(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x190;
    sp1C = temp_a2;
    Collider_UpdateCylinder(arg0, temp_a2);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, (Collider *) temp_a2);
}

s32 func_80A52648(EnDnq *arg0, GlobalContext *arg1) {
    s32 sp1C;
    u16 temp_v0;
    u16 temp_v0_2;
    s32 phi_v1;

    phi_v1 = 0;
    if (arg1->csCtx.state != 0) {
        temp_v0 = arg0->unk_37C;
        if ((temp_v0 & 0x20) == 0) {
            arg0->unk_1DC = 0xFF;
            arg0->unk_37C = temp_v0 | 0x20;
            arg0->actor.flags &= -2;
        }
        func_8013AED4(arg0 + 0x37C, 0U, 7U);
        phi_v1 = 1;
    } else {
        temp_v0_2 = arg0->unk_37C;
        if ((temp_v0_2 & 0x20) != 0) {
            arg0->unk_1DC = 0xFF;
            arg0->unk_37C = temp_v0_2 & 0xFFDF;
            arg0->actor.flags |= 1;
            sp1C = 0;
            func_8013AED4(arg0 + 0x37C, 3U, 7U);
        }
    }
    return phi_v1;
}

? func_80A526F8(EnDnq *arg0) {
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_t2;
    s16 phi_v1;
    s16 phi_v1_2;
    s16 phi_v1_3;

    if (arg0->unk_386 == 0) {
        func_80A5257C(arg0, 8);
        temp_f0 = Rand_ZeroOne();
        arg0->unk_388 = 0;
        arg0->unk_386 = 1;
        arg0->unk_38C = ((s32) (temp_f0 * 100.0f) % 4) + 3;
    } else if (func_801378B8(arg0 + 0x148, arg0->skelAnime.animFrameCount) != 0) {
        temp_t2 = arg0->unk_398;
        switch (temp_t2) {
        case 8:
            temp_v0 = arg0->unk_38C;
            if (temp_v0 == 0) {
                phi_v1 = 0;
            } else {
                arg0->unk_38C = temp_v0 - 1;
                phi_v1 = arg0->unk_38C;
            }
            if (phi_v1 == 0) {
                func_80A5257C(arg0, 9);
            }
            break;
        case 9:
            func_80A5257C(arg0, 0xA);
            arg0->unk_38C = ((s32) (Rand_ZeroOne() * 100.0f) % 3) + 2;
            break;
        case 10:
            temp_v0_2 = arg0->unk_38C;
            if (temp_v0_2 == 0) {
                phi_v1_2 = 0;
            } else {
                arg0->unk_38C = temp_v0_2 - 1;
                phi_v1_2 = arg0->unk_38C;
            }
            if (phi_v1_2 == 0) {
                arg0->unk_388 += 1;
                if ((arg0->unk_38C != 0) || ((s32) arg0->unk_388 < 2)) {
                    func_80A5257C(arg0, 0xB);
                } else {
                    func_80A5257C(arg0, 0x11);
                    arg0->unk_38C = 4;
                }
            }
            break;
        case 11:
            func_80A5257C(arg0, 8);
            arg0->unk_38C = ((s32) (Rand_ZeroOne() * 100.0f) % 4) + 3;
            break;
        case 17:
            temp_v0_3 = arg0->unk_38C;
            if (temp_v0_3 == 0) {
                phi_v1_3 = 0;
            } else {
                arg0->unk_38C = temp_v0_3 - 1;
                phi_v1_3 = arg0->unk_38C;
            }
            if (phi_v1_3 == 0) {
                arg0->unk_386 = 0;
            }
            break;
        }
        if (arg0->unk_386 != 0) {
            arg0->skelAnime.animCurrentFrame = 0.0f;
        }
    }
    arg0->unk_38A = 0;
    return 0;
}

? func_80A52944(EnDnq *arg0) {
    s16 sp26;
    s16 temp_v0;
    s16 phi_v1;

    phi_v1 = 0;
    if (arg0->unk_386 == 0) {
        func_80A5257C(arg0, 0xC);
        arg0->unk_38C = 1;
        arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
        arg0->unk_386 = 1;
        arg0->actor.shape.rot.y += (s16) (arg0->unk_38C << 0xD);
    } else {
        sp26 = 0;
        if (func_801378B8(arg0 + 0x148, arg0->skelAnime.animFrameCount) != 0) {
            arg0->unk_386 += 1;
            temp_v0 = arg0->unk_386;
            if ((s32) temp_v0 >= 6) {
                func_80A5257C(arg0, 0xC);
                arg0->unk_386 = 1;
                phi_v1 = (s16) (arg0->unk_38C << 0xD);
            } else if ((s32) temp_v0 < 4) {
                arg0->unk_38C = (s16) -(s32) arg0->unk_38C;
                arg0->skelAnime.animCurrentFrame = 0.0f;
                phi_v1 = (s16) (arg0->unk_38C << 0xD);
            } else {
                sp26 = 0;
                func_80A5257C(arg0, 0xD);
                arg0->skelAnime.animCurrentFrame = 0.0f;
            }
            arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
            arg0->actor.shape.rot.y += phi_v1;
        }
    }
    arg0->unk_38A = 0;
    return 0;
}

? func_80A52A78(EnDnq *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    if (arg0->unk_38A == 0) {
        arg0->unk_38C = 0;
        arg0->unk_38A = 1;
        arg0->unk_388 = (s16) ((u32) arg1->state.frames % 5U);
    }
    temp_v0 = arg0->unk_38C;
    arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
    if (temp_v0 != 0) {
        arg0->unk_38C = temp_v0 - 1;
    }
    if (func_801378B8(arg0 + 0x148, arg0->skelAnime.animFrameCount) != 0) {
        if (arg0->unk_38C == 0) {
            arg0->unk_38C = Rand_S16Offset(0x14, 0x14);
            arg0->unk_388 += 3;
            arg0->unk_388 = (s16) ((s32) arg0->unk_388 % 5);
        }
        func_80A5257C(arg0, *(&D_80A535DC + (arg0->unk_388 * 4)));
        arg0->skelAnime.animCurrentFrame = 0.0f;
    }
    arg0->unk_386 = 0;
    return 0;
}

? func_80A52B68(EnDnq *arg0, GlobalContext *arg1) {
    u16 temp_v1;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_v1 = arg1->msgCtx.unk11F04;
    if (((temp_v0->unk_A6C & 0x40) != 0) && (arg0 == temp_v0->unk_A88)) {
        switch (temp_v1) {
        case 2203:
            func_80A5257C(arg0, 0x12);
            break;
        case 2206:
            func_80A5257C(arg0, 0x13);
            break;
        case 2200:
        case 2207:
            func_80A5257C(arg0, 0x10);
            break;
        case 2201:
        case 2205:
            func_80A5257C(arg0, 0xE);
            break;
        case 2202:
        case 2204:
            func_80A5257C(arg0, 0xF);
            break;
        }
        arg0->unk_39C = 1;
    } else if (arg0->unk_39C != 0) {
        func_80A5257C(arg0, 0);
        arg0->unk_39C = 0;
        arg0->unk_37E = 0;
        arg0->unk_386 = 0;
    }
    return 0;
}

void func_80A52C6C(EnDnq *arg0, GlobalContext *arg1) {
    ? sp34;
    ? sp28;
    ? sp1C;

    sp34.unk_0 = (s32) D_80A535F0.unk_0;
    sp34.unk_8 = (s32) D_80A535F0.unk_8;
    sp34.unk_4 = (s32) D_80A535F0.unk_4;
    Math_Vec3f_Copy((Vec3f *) &sp1C, arg1->actorCtx.actorList[2].first + 0x24);
    Lib_Vec3f_TranslateAndRotateY(arg0 + 0x24, arg0->actor.world.rot.y, (Vec3f *) &sp34, (Vec3f *) &sp28);
    Math_Vec3f_Copy(arg0 + 0x370, (Vec3f *) &sp28);
    arg0->actor.xzDistToPlayer = Math_Vec3f_DistXZ((Vec3f *) &sp28, (Vec3f *) &sp1C);
}

? *func_80A52CF8(Actor *arg0, GlobalContext *arg1) {
    if ((gSaveContext.weekEventReg[23] & 0x20) != 0) {
        return &D_80A53438;
    }
    if (arg0->unk_3A4 != 0) {
        return &D_80A53420;
    }
    return &D_80A53400;
}

s32 func_80A52D44(Actor *arg0, GlobalContext *arg1) {
    s32 sp24;
    s32 phi_v1;

    phi_v1 = 0;
    if ((arg0->unk_37C & 7) != 0) {
        sp24 = 0;
        phi_v1 = sp24;
        if (func_800B84D0(arg0, arg1) != 0) {
            func_8013AED4(arg0 + 0x37C, 0U, 7U);
            arg0->unk_380 = func_80A52CF8(arg0, arg1);
            arg0->unk_18C = func_80A52FB8;
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

void func_80A52DC8(EnDnq *arg0, GlobalContext *arg1) {
    void *sp24;
    s16 temp_v0;
    s16 phi_v1;

    sp24 = arg1->actorCtx.actorList[2].first;
    if ((s32) (s16) (arg0->actor.yawTowardsPlayer - arg0->actor.world.rot.y) < 0x3801) {
        func_8013AED4(arg0 + 0x37C, 3U, 7U);
    } else {
        func_8013AED4(arg0 + 0x37C, 0U, 7U);
    }
    if ((gSaveContext.weekEventReg[23] & 0x20) == 0) {
        arg0->unk_390 = 70.0f;
        if ((func_80114F2C(0x17) != 0) && (func_801690CC(arg1) == 0) && (func_80152498(&arg1->msgCtx) == 0) && (ActorCutscene_GetCurrentIndex() == -1)) {
            temp_v0 = arg0->unk_384;
            if (temp_v0 == 0) {
                phi_v1 = 0;
            } else {
                arg0->unk_384 = temp_v0 - 1;
                phi_v1 = arg0->unk_384;
            }
            if ((phi_v1 == 0) && ((gSaveContext.weekEventReg[29] & 0x40) != 0)) {
                func_801518B0(arg1, 0x969U, NULL);
                arg0->unk_384 = 0xC8;
            }
        }
        arg0->unk_394 = arg0->actor.xzDistToPlayer;
        func_80A52C6C(arg0, arg1);
        if (arg0->actor.xzDistToPlayer < arg0->unk_390) {
            sp24->unk_B2B = 0x1A;
        }
        arg0->actor.xzDistToPlayer = arg0->unk_394;
        if ((gSaveContext.weekEventReg[83] & 8) != 0) {
            func_80A52A78(arg0, arg1);
            return;
        }
        if (arg0->unk_3A4 == 0) {
            Math_ApproachS(arg0 + 0xBE, arg0->actor.world.rot.y, 3, 0x2AA8);
            func_80A526F8(arg0);
            return;
        }
        func_80A52944(arg0);
        return;
    }
    Math_ApproachS(arg0 + 0xBE, arg0->actor.world.rot.y, 3, 0x2AA8);
    arg0->unk_390 = 70.0f;
}

void func_80A52FB8(EnDnq *this, GlobalContext *globalCtx) {
    s16 sp2E;

    sp2E = this->actor.yawTowardsPlayer;
    if (func_8010BF58((Actor *) this, globalCtx, this->unk_380, NULL, &this->unk_1E0) != 0) {
        func_8013AED4(&this->unk_37C, 3U, 7U);
        this->unk_386 = 0;
        this->actionFunc = func_80A52DC8;
        return;
    }
    Math_ApproachS(&this->actor.shape.rot.y, sp2E, 3, 0x2AA8);
}

void func_80A53038(EnDnq *arg0, GlobalContext *arg1) {
    u32 sp24;
    s32 sp20;
    s32 temp_t7;
    s32 temp_v0_2;
    u16 temp_v1;
    u32 temp_v0;

    if (func_800EE29C(arg1, 0x69U) != 0) {
        temp_v0 = func_800EE200(arg1, 0x69U);
        temp_t7 = temp_v0 * 4;
        sp24 = temp_v0;
        temp_v1 = *(arg1 + temp_t7)->unk_1F4C;
        if ((temp_v1 & 0xFF) != arg0->unk_1DC) {
            sp20 = (s32) temp_v1;
            func_80A5257C(arg0, *(&D_80A535FC + (temp_v1 * 4)));
            arg0->unk_1DC = (u8) temp_v1;
        }
        if ((arg0->unk_398 == 4) && (func_801378B8(&arg0->skelAnime, 2.0f) != 0)) {
            Audio_PlayActorSound2((Actor *) arg0, 0x39F6U);
        }
        temp_v0_2 = arg0->unk_398;
        if (((temp_v0_2 == 3) || (temp_v0_2 == 6)) && (func_801378B8(&arg0->skelAnime, arg0->skelAnime.animFrameCount) != 0)) {
            func_80A5257C(arg0, arg0->unk_398 + 1);
        }
        func_800EDF24((Actor *) arg0, arg1, sp24);
    }
}

void EnDnq_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnDnq *this = (EnDnq *) thisx;
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 14.0f);
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_0600EB48, NULL, this->jointTable, this->morphTable, 0x21);
    this->unk_398 = -1;
    func_80A5257C(this, 0);
    Collider_InitAndSetCylinder(globalCtx, &this->collider, (Actor *) this, &D_80A53464);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80A53490);
    Actor_SetScale((Actor *) this, 0.02f);
    this->actor.targetMode = 1;
    this->unk_386 = 0;
    this->unk_37C = 0;
    func_8013AED4(&this->unk_37C, 3U, 7U);
    if ((gSaveContext.weekEventReg[9] & 0x80) != 0) {
        this->unk_3A4 = 1;
    } else {
        this->unk_3A4 = 0;
    }
    this->unk_144 = (void (*)(GlobalContext *, EnDnq *)) func_80A52530;
    this->actionFunc = func_80A52DC8;
}

void EnDnq_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnDnq *this = (EnDnq *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnDnq_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnDnq *this = (EnDnq *) thisx;
    if ((func_80A52D44((Actor *) this, globalCtx) == 0) && (func_80A52648(this, globalCtx) != 0)) {
        func_80A53038(this, globalCtx);
        SkelAnime_FrameUpdateMatrix(&this->skelAnime);
        return;
    }
    this->actionFunc(this, globalCtx);
    func_80A52B68(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 12.0f, 0.0f, 4U);
    this->unk_394 = this->actor.xzDistToPlayer;
    func_80A52C6C(this, globalCtx);
    func_8013C964((Actor *) this, globalCtx, this->unk_390, fabsf(this->actor.yDistToPlayer) + 1.0f, 0, (s16) (this->unk_37C & 7));
    this->actor.xzDistToPlayer = this->unk_394;
    Actor_SetHeight((Actor *) this, 46.0f);
    func_80A52604((Actor *) this, globalCtx);
}

void EnDnq_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnDnq *this = (EnDnq *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, NULL, NULL, (Actor *) this);
}
