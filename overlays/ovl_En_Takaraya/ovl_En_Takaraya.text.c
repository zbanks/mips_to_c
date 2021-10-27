typedef struct EnTakaraya {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x8A];                 /* maybe part of unk_188[24]? */
    /* 0x218 */ Vec3s unk_218;                      /* inferred */
    /* 0x21E */ char pad_21E[0x8A];                 /* maybe part of unk_218[24]? */
    /* 0x2A8 */ void (*actionFunc)(EnTakaraya *, GlobalContext *);
    /* 0x2AC */ u8 unk_2AC;                         /* inferred */
    /* 0x2AD */ u8 unk_2AD;                         /* inferred */
    /* 0x2AE */ char pad_2AE[0x4];                  /* maybe part of unk_2AD[5]? */
    /* 0x2B2 */ s16 unk_2B2;                        /* inferred */
    /* 0x2B4 */ Vec3s unk_2B4;                      /* inferred */
    /* 0x2BA */ char pad_2BA[0x2];
} EnTakaraya;                                       /* size = 0x2BC */

struct _mips2c_stack_EnTakaraya_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTakaraya_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ GraphicsContext *sp30;               /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnTakaraya_Init {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnTakaraya_Update {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x10];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80ADED8C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ADEDF8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ADEE4C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80ADEF74 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80ADF03C {};              /* size 0x0 */

struct _mips2c_stack_func_80ADF050 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80ADF2D4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ADF338 {
    /* 0x00 */ char pad_0[0x2A];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ void *sp48;                          /* inferred */
    /* 0x4C */ char pad_4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80ADF4E0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ADF520 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80ADF608 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ADF654 {};              /* size 0x0 */

struct _mips2c_stack_func_80ADF6DC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ADF730 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ADF7B8 {};              /* size 0x0 */

struct _mips2c_stack_func_80ADF7CC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80ADF94C {};              /* size 0x0 */

struct _mips2c_stack_func_80ADF984 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

? func_800B8FC0(EnTakaraya *, ?);                   /* extern */
void func_80ADED8C(EnTakaraya *arg0);               /* static */
void func_80ADEDF8(EnTakaraya *arg0);               /* static */
void func_80ADEE4C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80ADEF74(EnTakaraya *arg0, GlobalContext *arg1); /* static */
void func_80ADF03C(Actor *arg0);                    /* static */
void func_80ADF050(EnTakaraya *arg0, GlobalContext *arg1); /* static */
void func_80ADF2D4(EnTakaraya *arg0);               /* static */
void func_80ADF338(void *arg0, GlobalContext *arg1); /* static */
void func_80ADF4E0(void *arg0);                     /* static */
void func_80ADF520(Actor *arg0, GlobalContext *arg1); /* static */
void func_80ADF608(Actor *arg0, GlobalContext *arg1); /* static */
void func_80ADF654(void *arg0, void *arg1);         /* static */
void func_80ADF6DC(EnTakaraya *arg0);               /* static */
void func_80ADF730(Actor *arg0, GlobalContext *arg1); /* static */
void func_80ADF7B8(Actor *arg0);                    /* static */
void func_80ADF7CC(EnTakaraya *arg0, GlobalContext *arg1); /* static */
s32 func_80ADF94C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, s16 *arg4, Actor *arg5); /* static */
void func_80ADF984(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern AnimationHeader D_06000968;
extern AnimationHeader D_06001384;
extern FlexSkeletonHeader D_06008FC8;
extern AnimationHeader D_06009890;
extern AnimationHeader D_0600A280;
extern AnimationHeader D_0600AD98;
static void *D_80ADFB00[4] = {(void *)0x6006F58, (void *)0x6007358, (void *)0x6007758, (void *)0x6007358};
static void *D_80ADFB10[4] = {(void *)0x6007B58, (void *)0x6007F58, (void *)0x6007758, (void *)0x6007F58};
static InitChainEntry D_80ADFB20[2];                /* unable to generate initializer */
static s32 D_80ADFB28 = 0;
static ? D_80ADFB2C;                                /* unable to generate initializer */
static ? D_80ADFB38;                                /* unable to generate initializer */
static ? D_80ADFB39;                                /* unable to generate initializer */
static ? D_80ADFB44;                                /* unable to generate initializer */
static ? D_80ADFB50;                                /* unable to generate initializer */

void EnTakaraya_Init(Actor *thisx, GlobalContext *globalCtx) {
    u8 temp_t4;
    u8 temp_v0;
    void **temp_s0;
    void **phi_s1;
    void **phi_s0;
    EnTakaraya *this = (EnTakaraya *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80ADFB20);
    ActorShape_Init(&this->actor.shape, -60.0f, NULL, 0.0f);
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_06008FC8, &D_06009890, &this->unk_188, &this->unk_218, 0x18);
    this->unk_2B2 = ((s32) this->actor.params >> 8) & 0xFF;
    this->actor.params &= 0xFF;
    phi_s1 = D_80ADFB00;
    if (D_80ADFB28 == 0) {
        phi_s0 = D_80ADFB10;
        do {
            *phi_s1 = Lib_SegmentedToVirtual(*phi_s1);
            temp_s0 = phi_s0 + 4;
            temp_s0->unk_-4 = Lib_SegmentedToVirtual(*phi_s0);
            phi_s1 += 4;
            phi_s0 = temp_s0;
        } while (temp_s0 != D_80ADFB20);
        D_80ADFB28 = 1;
    }
    this->unk_2AC = 2;
    if (gSaveContext.entranceIndex == 0x2810) {
        func_801A2C20();
        if (gSaveContext.unk_3DD0[4] == 6) {
            this->actor.textId = 0x77A;
            gSaveContext.unk_3DD0[4] = 5;
            func_80ADF6DC(this);
            return;
        }
        this->actor.textId = 0x77C;
        temp_v0 = gSaveContext.weekEventReg[63];
        temp_t4 = temp_v0 & 0xFE;
        if ((temp_v0 & 2) != 0) {
            gSaveContext.weekEventReg[63] = temp_t4;
            gSaveContext.weekEventReg[63] = temp_t4 & 0xFD;
            func_80ADEDF8(this);
            return;
        }
        func_80ADF6DC(this);
        return;
    }
    func_80ADEDF8(this);
}

void EnTakaraya_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTakaraya *this = (EnTakaraya *) thisx;
    Actor_UnsetSwitchFlag(globalCtx, 5);
    if (this->unk_2AD == 0) {
        gSaveContext.unk_3DD0[4] = 5;
        gSaveContext.weekEventReg[63] &= 0xFE;
    }
}

void func_80ADED8C(EnTakaraya *arg0) {
    u8 temp_t6;
    u8 temp_v0;

    temp_v0 = arg0->unk_2AC;
    temp_t6 = temp_v0 + 1;
    if (temp_v0 != 0) {
        arg0->unk_2AC = temp_t6;
        if ((temp_t6 & 0xFF) == 4) {
            arg0->unk_2AC = 0;
            return;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return;
    }
    if (Rand_ZeroOne() < 0.02f) {
        arg0->unk_2AC += 1;
    }
}

void func_80ADEDF8(EnTakaraya *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    if (&D_06001384 == arg0->unk_144.animCurrentSeg) {
        arg0 = arg0;
        SkelAnime_ChangeAnimTransitionStop(temp_a0, &D_0600AD98, 5.0f);
    }
    arg0->actionFunc = func_80ADEE4C;
}

void func_80ADEE4C(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    u16 temp_v0;

    temp_a0 = arg0 + 0x144;
    sp20 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        if (&D_0600A280 == arg0[1].home.pos.x) {
            SkelAnime_ChangeAnimTransitionStop(sp20, &D_0600AD98, 5.0f);
        } else {
            SkelAnime_ChangeAnimTransitionRepeat(sp20, &D_06009890, -4.0f);
        }
    }
    if (func_800B84D0(arg0, arg1) != 0) {
        if (Text_GetFaceReaction(arg1, 0x2DU) == 0) {
            SkelAnime_ChangeAnimTransitionStop(sp20, &D_0600A280, -4.0f);
        }
        func_80ADF03C(arg0);
        return;
    }
    if (Actor_IsActorFacingLink(arg0, 0x2000) != 0) {
        temp_v0 = Text_GetFaceReaction(arg1, 0x2DU);
        arg0->textId = temp_v0;
        if ((temp_v0 & 0xFFFF) == 0) {
            arg0->textId = *(&D_80ADFB2C + (gSaveContext.playerForm * 2));
        }
        arg0->unk_2B0 = (s16) (gSaveContext.playerForm + arg0->unk_2B2);
        func_800B8614(arg0, arg1, 120.0f);
    }
}

void func_80ADEF74(EnTakaraya *arg0, GlobalContext *arg1) {
    u8 phi_v1;

    if (Flags_GetSwitch(arg1, (s32) arg0->unk_2B0) != 0) {
        phi_v1 = *(&D_80ADFB39 + (gSaveContext.playerForm * 2));
    } else {
        phi_v1 = *(&D_80ADFB38 + (gSaveContext.playerForm * 2));
    }
    Actor_SpawnAsChildAndCutscene(&arg1->actorCtx, arg1, 0x1BB, 0.0f, 0.0f, 0.0f, (s16) 0, (s16) 0, (s16) 5, (phi_v1 << 5) + arg0->actor.params + 0xB000, (u32) arg0->actor.cutscene, 0x3FF, NULL);
}

void func_80ADF03C(Actor *arg0) {
    arg0->unk_2A8 = func_80ADF050;
}

void func_80ADF050(EnTakaraya *arg0, GlobalContext *arg1) {
    SkelAnime *sp28;
    void *sp24;
    SkelAnime *temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    u8 temp_t1;
    u8 temp_v0_2;

    temp_a0 = arg0 + 0x144;
    sp28 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        temp_v0 = arg0->unk_144.animCurrentSeg;
        if (&D_0600AD98 == temp_v0) {
            SkelAnime_ChangeAnimDefaultStop(sp28, &D_06000968);
        } else if (&D_0600A280 == temp_v0) {
            SkelAnime_ChangeAnimDefaultRepeat(sp28, &D_06001384);
        } else {
            SkelAnime_ChangeAnimDefaultRepeat(sp28, &D_06009890);
        }
    }
    temp_v0_2 = func_80152498(arg1 + 0x4908);
    temp_v1 = temp_v0_2 & 0xFF;
    if ((temp_v0_2 == 2) || (temp_v1 == 6)) {
        if (arg0->actor.textId == 0x778) {
            func_80ADF2D4(arg0);
            return;
        }
        temp_t1 = gSaveContext.weekEventReg[63] & 0xFE;
        gSaveContext.weekEventReg[63] = temp_t1;
        gSaveContext.weekEventReg[63] = temp_t1 & 0xFD;
        func_80ADEDF8(arg0);
        return;
    }
    if ((temp_v1 == 1) && (arg0->actor.textId != 0x778)) {
        if (func_80147624(arg1) != 0) {
            SkelAnime_ChangeAnimTransitionStop(sp28, &D_0600AD98, 5.0f);
            return;
        }
        /* Duplicate return node #27. Try simplifying control flow for better match */
        return;
    }
    if ((temp_v1 == 4) && (func_80147624(arg1) != 0)) {
        if (arg1->msgCtx.choiceIndex == 0) {
            if ((s32) gSaveContext.rupees < arg1->msgCtx.unk1206C) {
                arg0->actor.textId = 0x77B;
                if (&D_06009890 == arg0->unk_144.animCurrentSeg) {
                    SkelAnime_ChangeAnimTransitionStop(sp28, &D_06000968, 5.0f);
                }
                play_sound(0x4806U);
            } else {
                sp24 = arg1 + 0x10000;
                func_8019F208();
                func_801159EC((s16) ((s32) arg1->msgCtx.unk1206C * -1));
                func_80ADEF74(arg0, arg1);
                arg0->actor.textId = 0x778;
                if (&D_06009890 != arg0->unk_144.animCurrentSeg) {
                    SkelAnime_ChangeAnimTransitionRepeat(sp28, &D_06009890, 5.0f);
                }
            }
        } else {
            func_8019F230();
            arg0->actor.textId = *(&D_80ADFB44 + (gSaveContext.playerForm * 2));
            if (&D_06009890 == arg0->unk_144.animCurrentSeg) {
                SkelAnime_ChangeAnimTransitionStop(sp28, &D_06000968, 5.0f);
            }
        }
        func_80151938(arg1, arg0->actor.textId);
    }
}

void func_80ADF2D4(EnTakaraya *arg0) {
    u8 temp_t9;

    func_800B8FC0(arg0, 0x482C);
    func_801A2BB8(0x25);
    arg0->unk_2AE = 0x91;
    temp_t9 = gSaveContext.weekEventReg[63] | 1;
    gSaveContext.weekEventReg[63] = temp_t9;
    gSaveContext.weekEventReg[63] = temp_t9 & 0xFD;
    arg0->actionFunc = func_80ADF338;
}

void func_80ADF338(EnTakaraya *arg0, GlobalContext *arg1) {
    void *sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    s16 sp2A;
    f32 temp_f8;
    s16 temp_v1;
    s8 temp_a0;
    void *temp_s1;
    f32 phi_f2;

    temp_s1 = arg1->actorCtx.actorList[11].first;
    sp48 = arg1->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    temp_a0 = arg0->actor.cutscene;
    if ((ActorCutscene_GetCurrentIndex() == temp_a0) && (temp_s1 != 0)) {
        arg0->unk_2AE += -1;
        sp2A = ActorCutscene_GetCurrentCamera((s16) temp_a0);
        temp_v1 = arg0->unk_2AE;
        if ((s32) temp_v1 >= 0x1A) {
            phi_f2 = 250.0f;
        } else {
            phi_f2 = ((temp_s1->xzDistToPlayer - 250.0f) * (f32) (0x19 - temp_v1) * 0.04f) + 250.0f;
        }
        sp2C = phi_f2;
        sp3C = (Math_SinS(temp_s1->yawTowardsPlayer) * phi_f2) + temp_s1->world.pos.x;
        sp40 = sp48->world.pos.y + 120.0f;
        sp44 = (Math_CosS(temp_s1->yawTowardsPlayer) * phi_f2) + temp_s1->world.pos.z;
        temp_f8 = sp3C - (Math_SinS(temp_s1->yawTowardsPlayer) * 250.0f);
        sp34 = sp40 - 90.0f;
        sp30 = temp_f8;
        sp38 = sp44 - (Math_CosS(temp_s1->yawTowardsPlayer) * 250.0f);
        Play_CameraSetAtEye(arg1, sp2A, (Vec3f *) &sp30, (Vec3f *) &sp3C);
        return;
    }
    if ((s32) arg0->unk_2AE < 0x91) {
        func_80ADF4E0(arg0);
    }
}

void func_80ADF4E0(EnTakaraya *arg0) {
    func_8010E9F0(4, 0x2D);
    arg0->unk_2AE = 1;
    arg0->actionFunc = func_80ADF520;
}

void func_80ADF520(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    if (func_801690CC(arg1) == 0) {
        if (Actor_GetChestFlag(arg1, (u32) arg0->params) != 0) {
            Actor_SetSwitchFlag(arg1, (s32) arg0->unk_2B0);
            arg1->actorCtx.chestFlags &= ~(1 << arg0->params);
            arg0->unk_2AE = 0;
            gSaveContext.unk_3DD0[4] = 6;
            func_80ADF608(arg0, arg1);
            return;
        }
        if ((gSaveContext.unk_3DE0[4] == 0) && (*(&gSaveContext + 0x3E04) == 0)) {
            arg0->unk_2AE = 0x32;
            func_801518B0(arg1, 0x77DU, arg0);
            gSaveContext.unk_3DD0[4] = 5;
            func_80ADF608(arg0, arg1);
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_80ADF608(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a1;

    temp_a1 = arg0;
    arg0 = temp_a1;
    func_800B7298(arg1, temp_a1, 7U);
    arg0->unk_2AD = 1;
    arg0->unk_2A8 = func_80ADF654;
}

void func_80ADF654(void *arg0, void *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk_2AE;
    if ((s32) temp_v0 > 0) {
        arg0->unk_2AE = (s16) (temp_v0 - 1);
        return;
    }
    if (gSaveContext.unk_3DD0[4] == 6) {
        arg1->unk_1887F = 0x50;
        gSaveContext.nextTransition = 3;
    } else {
        arg1->unk_1887F = 0x40;
        gSaveContext.nextTransition = 2;
    }
    gSaveContext.nextCutsceneIndex = 0;
    arg1->unk_1887A = 0x2810;
    arg1->unk_18875 = 0x14;
}

void func_80ADF6DC(EnTakaraya *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_06001384);
    arg0->unk_2AC = 0;
    arg0->actor.flags |= 0x10000;
    arg0->actionFunc = func_80ADF730;
}

void func_80ADF730(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->flags &= 0xFFFEFFFF;
        func_80ADF7B8(arg0);
        return;
    }
    arg0->unk_2B0 = (s16) (gSaveContext.playerForm + arg0->unk_2B2);
    func_800B8614(arg0, arg1, 120.0f);
}

void func_80ADF7B8(Actor *arg0) {
    arg0->unk_2A8 = func_80ADF7CC;
}

void func_80ADF7CC(EnTakaraya *arg0, GlobalContext *arg1) {
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    u16 temp_t5;
    u8 temp_t1;

    temp_a0 = arg0 + 0x144;
    sp20 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        if (arg0->actor.textId == 0x77A) {
            if ((gSaveContext.weekEventReg[63] & 2) != 0) {
                func_801477B4(arg1);
                temp_t1 = gSaveContext.weekEventReg[63] & 0xFE;
                gSaveContext.weekEventReg[63] = temp_t1;
                gSaveContext.weekEventReg[63] = temp_t1 & 0xFD;
                func_80ADEDF8(arg0);
                return;
            }
            arg0->actor.textId = 0x77C;
            func_80151938(arg1, 0x77CU & 0xFFFF);
            return;
        }
        temp_t5 = *(&D_80ADFB50 + (gSaveContext.playerForm * 2));
        arg0->actor.textId = temp_t5;
        func_80151938(arg1, temp_t5 & 0xFFFF);
        SkelAnime_ChangeAnimTransitionStop(sp20, &D_0600AD98, 5.0f);
        func_80ADF03C((Actor *) arg0);
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void EnTakaraya_Update(Actor *thisx, GlobalContext *globalCtx) {
    ? sp30;
    EnTakaraya *this = (EnTakaraya *) thisx;

    this->actionFunc(this, globalCtx);
    func_800E9250(globalCtx, (Actor *) this, &this->unk_2B4, (Vec3s *) &sp30, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
    func_80ADED8C(this);
}

s32 func_80ADF94C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, s16 *arg4, Actor *arg5) {
    if (arg1 == 5) {
        *arg4 += arg5->unk_2B6;
    }
    return 0;
}

void func_80ADF984(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    if (arg1 == 5) {
        Matrix_RotateY((s16) (0x400 - arg2->unk_2B4), 1U);
        SysMatrix_GetStateTranslationAndScaledX(500.0f, arg2 + 0x3C);
    }
}

void EnTakaraya_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp30;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a0;
    u8 temp_v0;
    EnTakaraya *this = (EnTakaraya *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp30 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = gSaveContext.playerForm;
    if ((temp_v0 == 3) || (temp_v0 == 4)) {
        temp_v1_2 = sp30->polyOpa.p;
        sp30->polyOpa.p = &temp_v1_2[1];
        temp_v1_2->words.w0 = 0xDB060020;
        temp_v1_2->words.w1 = (u32) D_80ADFB10[this->unk_2AC];
    } else {
        temp_v1 = sp30->polyOpa.p;
        sp30->polyOpa.p = &temp_v1[1];
        temp_v1->words.w0 = 0xDB060020;
        temp_v1->words.w1 = (u32) D_80ADFB00[this->unk_2AC];
    }
    func_801343C0(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, (s32 (*)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *)) func_80ADF94C, NULL, func_80ADF984, (Actor *) this);
}
