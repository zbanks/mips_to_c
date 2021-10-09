typedef struct EnDt {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x54];                 /* maybe part of unk_188[15]? */
    /* 0x1E2 */ Vec3s unk_1E2;                      /* inferred */
    /* 0x1E8 */ char pad_1E8[0x54];                 /* maybe part of unk_1E2[15]? */
    /* 0x23C */ void (*actionFunc)(EnDt *, GlobalContext *);
    /* 0x240 */ char pad_240[0x4];
    /* 0x244 */ s16 unk_244;                        /* inferred */
    /* 0x246 */ char pad_246[0x2];
    /* 0x248 */ s16 unk_248;                        /* inferred */
    /* 0x24A */ s16 unk_24A;                        /* inferred */
    /* 0x24C */ s16 unk_24C;                        /* inferred */
    /* 0x24E */ char pad_24E[0x6];                  /* maybe part of unk_24C[4]? */
    /* 0x254 */ s16 unk_254;                        /* inferred */
    /* 0x256 */ char pad_256[0x1E];                 /* maybe part of unk_254[16]? */
    /* 0x274 */ Actor *unk_274;                     /* inferred */
    /* 0x278 */ Actor *unk_278;                     /* inferred */
    /* 0x27C */ char pad_27C[0xA];                  /* maybe part of unk_278[3]? */
    /* 0x286 */ s16 unk_286;                        /* inferred */
    /* 0x288 */ char pad_288[0x4];                  /* maybe part of unk_286[3]? */
    /* 0x28C */ s16 unk_28C;                        /* inferred */
    /* 0x28E */ char pad_28E[0x2];
    /* 0x290 */ s32 unk_290;                        /* inferred */
    /* 0x294 */ ColliderCylinder unk_294;           /* inferred */
} EnDt;                                             /* size = 0x2E0 */

struct _mips2c_stack_EnDt_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnDt_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x8];                    /* maybe part of sp34[3]? */
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnDt_Init {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnDt_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BE9C74 {};              /* size 0x0 */

struct _mips2c_stack_func_80BE9CE8 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BE9D9C {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BE9DF8 {};              /* size 0x0 */

struct _mips2c_stack_func_80BE9E94 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BE9EF8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BEA088 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BEA254 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BEA394 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ char pad_28[0x8];                    /* maybe part of sp24[3]? */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ void *sp38;                          /* inferred */
    /* 0x3C */ Actor *sp3C;                         /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BEA8F0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BEAAF8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BEAB44 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BEABF8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BEAC84 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BEAD2C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BEADB8 {};              /* size 0x0 */

struct _mips2c_stack_func_80BEADD4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BEB06C {};              /* size 0x0 */

? func_800E0308(Camera *, Actor *);                 /* extern */
? func_801A1FB4(?, s32 *, ?, ?);                    /* extern */
void func_80BE9C74(Actor *arg0);                    /* static */
void func_80BE9CE8(Actor *arg0, s16 arg1, Actor *); /* static */
void func_80BE9D9C(Actor *arg0, Actor *);           /* static */
void func_80BE9DF8(Actor *arg0, Actor *);           /* static */
void func_80BE9E94(EnDt *, GlobalContext *);        /* static */
void func_80BE9EF8(GlobalContext *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_80BEA088(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEA254(Actor *arg0, GlobalContext *arg1, void *, Actor *); /* static */
void func_80BEA394(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEA8F0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEAAF8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEAB44(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEABF8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEAC84(EnDt *arg0, GlobalContext *arg1, s32); /* static */
void func_80BEAD2C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEADB8(Actor *arg0);                    /* static */
void func_80BEADD4(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BEB06C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
extern AnimationHeader D_0600112C;
extern FlexSkeletonHeader D_0600B0CC;
static ? D_80BEB1D0;                                /* unable to generate initializer */
static ? D_80BEB208;                                /* unable to generate initializer */
static s16 D_80BEB268 = 0x2ABB;
static ? D_80BEB26A;                                /* unable to generate initializer */
static ColliderCylinderInit D_80BEB29C = {
    {0xA, 0, 0, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1},
    {0x19, 0x46, 0, {0, 0, 0}},
};
static ? D_80BEB2C8;                                /* unable to generate initializer */
static ? D_80BEB2E0;                                /* unable to generate initializer */
static ? D_80BEB2E8;                                /* unable to generate initializer */
static ? D_80BEB348;                                /* unable to generate initializer */
static ? D_80BEB35C;                                /* unable to generate initializer */

void EnDt_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    s8 temp_s0;
    s16 phi_s0;
    EnDt *phi_s1;
    EnDt *this = (EnDt *) thisx;

    this->actor.colChkInfo.mass = 0xFF;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 19.0f);
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_0600B0CC, &D_0600112C, &this->unk_188, &this->unk_1E2, 0xF);
    this->actor.targetMode = 6;
    this->unk_274 = NULL;
    this->unk_278 = NULL;
    Collider_InitAndSetCylinder(globalCtx, &this->unk_294, (Actor *) this, &D_80BEB29C);
    if ((gSaveContext.day == 3) && (gSaveContext.isNight != 0)) {
        func_80BEAC84(this, globalCtx);
    } else {
        temp_s0 = this->actor.cutscene;
        phi_s0 = (s16) temp_s0;
        phi_s1 = this;
        if (temp_s0 != -1) {
            do {
                phi_s1->unk_258 = phi_s0;
                temp_v0 = ActorCutscene_GetAdditionalCutscene(phi_s0);
                phi_s0 = temp_v0;
                phi_s1 += 2;
            } while (temp_v0 != -1);
        }
    }
    this->actionFunc = func_80BE9E94;
}

void EnDt_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnDt *this = (EnDt *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_294);
}

void func_80BE9C74(Actor *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 phi_v1;

    temp_v0 = arg0->yawTowardsPlayer - arg0->world.rot.y;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    arg0->unk_28C = 0;
    if (phi_v1 < 0x4E20) {
        arg0->unk_28C = (s16) (arg0->yawTowardsPlayer - arg0->world.rot.y);
        temp_v0_2 = arg0->unk_28C;
        if ((s32) temp_v0_2 >= 0x2711) {
            arg0->unk_28C = 0x2710;
            return;
        }
        if ((s32) temp_v0_2 < -0x2710) {
            arg0->unk_28C = -0x2710;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_80BE9CE8(Actor *arg0, s16 arg1) {
    f32 sp34;
    f32 temp_f0;
    s16 temp_v1;
    s16 temp_v1_2;
    f32 phi_f2;

    arg0->unk_246 = arg1;
    temp_v1 = arg0->unk_246;
    phi_f2 = -4.0f;
    if ((temp_v1 == 2) || (temp_v1 == 5)) {
        phi_f2 = 0.0f;
    }
    sp34 = phi_f2;
    temp_v1_2 = arg0->unk_246;
    temp_f0 = (f32) SkelAnime_GetFrameCount(*(&D_80BEB2C8 + (temp_v1 * 4)));
    arg0->unk_250 = temp_f0;
    SkelAnime_ChangeAnim(arg0 + 0x144, *(&D_80BEB2C8 + (temp_v1_2 * 4)), 1.0f, 0.0f, temp_f0, (u8) (s32) *(&D_80BEB2E0 + temp_v1_2), phi_f2);
}

void func_80BE9D9C(Actor *arg0) {
    void *sp18;
    void *temp_v1;

    temp_v1 = (((arg0->unk_280 * 4) + 1) * 4) + &D_80BEB2E8;
    sp18 = temp_v1;
    func_80BE9CE8(temp_v1->unk_0);
    arg0->unk_24C = (s16) temp_v1->unk_4;
    arg0->unk_248 = (s16) *(temp_v1 + 8);
}

void func_80BE9DF8(Actor *arg0) {
    Actor *temp_v0;
    Actor *temp_v1;
    s32 temp_a3;

    temp_v0 = arg0->unk_274;
    if ((temp_v0 != 0) && (temp_v1 = arg0->unk_278, (temp_v1 != 0))) {
        temp_a3 = *(&D_80BEB208 + (arg0->unk_256 * 4));
        if (temp_a3 != 0) {
            if (temp_a3 != 1) {
                if (temp_a3 != 2) {
                    return;
                }
                temp_v0->unk_288 = arg0;
                temp_v1->unk_2A4 = arg0;
                arg0->unk_27C = arg0;
                /* Duplicate return node #9. Try simplifying control flow for better match */
                return;
            }
            temp_v0->unk_288 = temp_v1;
            temp_v1->unk_2A4 = (Actor *) arg0->unk_278;
            arg0->unk_27C = (Actor *) arg0->unk_278;
            return;
        }
        temp_v0->unk_288 = temp_v0;
        temp_v1->unk_2A4 = (Actor *) arg0->unk_274;
        arg0->unk_27C = (Actor *) arg0->unk_274;
    }
}

void func_80BE9E94(EnDt *arg0, GlobalContext *arg1) {
    Actor *temp_v0;
    Actor *temp_v0_2;
    s16 temp_v1;
    Actor *phi_v0;

    temp_v0 = arg1->actorCtx.actorList[4].first;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        do {
            temp_v1 = phi_v0->id;
            if (temp_v1 == 0x26B) {
                arg0->unk_274 = phi_v0;
            } else if (temp_v1 == (GlobalContext *)0x26C) {
                arg0->unk_278 = phi_v0;
            }
            temp_v0_2 = phi_v0->next;
            phi_v0 = temp_v0_2;
        } while (temp_v0_2 != 0);
    }
    func_80BE9EF8(arg1, (GlobalContext *)0x26C, arg1);
}

void func_80BE9EF8(Actor *arg0, GlobalContext *arg1) {
    u16 temp_t4;
    SaveContext *phi_v0;
    void (*phi_t6)(Actor *, GlobalContext *);

    arg0->unk_256 = 0;
    if ((gSaveContext.weekEventReg[60] & 0x10) == 0) {
        if ((gSaveContext.weekEventReg[63] & 0x80) != 0) {
            arg0->unk_256 = 0x15;
            arg0->unk_280 = 5;
            func_80BE9D9C(arg0);
            temp_t4 = *(&D_80BEB1D0 + (arg0->unk_256 * 2));
            arg0->textId = temp_t4;
            func_801518B0(arg1, temp_t4 & 0xFFFF, arg0);
            func_800B7298(arg1, arg0, 7U);
            arg0->unk_254 = 1;
            phi_t6 = func_80BEA394;
        } else {
            goto block_5;
        }
    } else {
        if ((gSaveContext.weekEventReg[63] & 0x80) != 0) {
            arg0->unk_256 = 0x17;
            arg0->unk_280 = 5;
            arg0->unk_290 = 1;
            func_80BE9D9C(arg0);
            func_80151BB4(arg1, 7U);
        }
block_5:
        phi_v0 = &gSaveContext;
        if (arg0->unk_280 == 0) {
            if ((gSaveContext.weekEventReg[60] & 8) != 0) {
                arg0->unk_256 = 9;
                arg0->unk_280 = 2;
            }
            func_80BE9D9C(arg0);
            phi_v0 = &gSaveContext;
            if ((gSaveContext.weekEventReg[60] & 8) == 0) {
                arg0->unk_280 = 1;
            }
        }
        arg0->textId = *(&D_80BEB1D0 + (arg0->unk_256 * 2));
        if ((phi_v0->weekEventReg[63] & 0x80) == 0) {
            func_80BE9DF8(arg0);
        }
        arg0->unk_254 = 1;
        phi_t6 = func_80BEA088;
    }
    arg0->unk_23C = phi_t6;
}

void func_80BEA088(Actor *arg0, GlobalContext *arg1) {
    void *sp1C;
    void *sp18;
    Actor *temp_a0;
    s32 temp_v0_2;
    void *temp_v0;
    void *temp_v1;
    void *phi_t0;
    void *phi_a2;
    void *phi_a2_2;
    void *phi_t0_2;
    s32 phi_v0;
    Actor *phi_a3;
    Actor *phi_a3_2;

    temp_a0 = arg0;
    sp1C = NULL;
    arg0 = arg0;
    sp18 = NULL;
    phi_t0 = sp18;
    phi_a2 = sp1C;
    phi_a2_2 = sp1C;
    phi_t0_2 = sp18;
    if (func_800B84D0(temp_a0, arg1) != 0) {
        func_80BEA254(arg0, arg1, sp1C, arg0);
        return;
    }
    if ((gSaveContext.weekEventReg[63] & 0x80) == 0) {
        temp_v0 = arg0->unk_274;
        if (temp_v0 != 0) {
            temp_v1 = arg0->unk_278;
            if (temp_v1 != 0) {
                phi_t0 = temp_v1;
                phi_a2 = temp_v0;
            }
        }
        arg0->unk_240 = 0;
        arg0->unk_256 = 0;
        sp18 = phi_t0;
        arg0 = arg0;
        sp1C = phi_a2;
        phi_a2_2 = phi_a2;
        phi_t0_2 = phi_t0;
        if (Player_GetMask(arg1) == 0xA) {
            arg0->unk_256 = 0xB;
            arg0->unk_240 = 1;
            if ((arg0->unk_274 != 0) && (arg0->unk_278 != 0)) {
                phi_a2->unk_27A = 4;
                phi_t0->unk_2A0 = 6;
            }
        } else if ((gSaveContext.weekEventReg[60] & 8) != 0) {
            arg0->unk_256 = 9;
        }
    }
    arg0->textId = *(&D_80BEB1D0 + (arg0->unk_256 * 2));
    temp_v0_2 = gSaveContext.weekEventReg[63] & 0x80;
    phi_v0 = temp_v0_2;
    phi_a3 = arg0;
    if ((temp_v0_2 == 0) && (arg0->unk_274 != 0) && (arg0->unk_278 != 0) && ((phi_a2_2->unk_28C == 1) || (phi_t0_2->unk_2AC == 1))) {
        arg0 = arg0;
        func_80BEA254(arg0, arg1, phi_a2_2, arg0);
        phi_v0 = gSaveContext.weekEventReg[63] & 0x80;
        phi_a3 = arg0;
    }
    phi_a3_2 = phi_a3;
    if (phi_v0 != 0) {
        arg0 = phi_a3;
        phi_a3_2 = arg0;
        if (Player_GetMask(arg1) == 2) {
            arg0->textId = 0x2368;
        }
    }
    func_800B8614(phi_a3_2, arg1, 150.0f);
}

void func_80BEA254(Actor *arg0, GlobalContext *arg1) {
    void *sp1C;
    void *sp18;
    Actor *temp_a0;
    s16 temp_a0_2;
    s16 temp_v1_2;
    void *temp_v0;
    void *temp_v1;
    s16 *phi_v0;
    s16 phi_a0;

    if ((gSaveContext.weekEventReg[63] & 0x80) == 0) {
        temp_v0 = arg0->unk_274;
        if (temp_v0 != 0) {
            temp_v1 = arg0->unk_278;
            if (temp_v1 != 0) {
                sp1C = temp_v0;
                sp18 = temp_v1;
            }
        }
        if ((temp_v0 != 0) && (arg0->unk_278 != 0)) {
            sp1C->unk_28C = 1;
            sp18->unk_2AC = 1;
            arg0 = arg0;
            if (Player_GetMask(arg1) == 0xA) {
                sp1C->unk_27A = 4;
                sp18->unk_2A0 = 6;
                arg0->unk_280 = 5;
                temp_a0 = arg0;
                if ((gSaveContext.weekEventReg[60] & 8) != 0) {
                    arg0->unk_280 = (s32) 4;
                }
                arg0 = arg0;
                func_80BE9D9C(temp_a0);
            }
        }
    }
    arg0->unk_270 = 0;
    phi_v0 = &D_80BEB268;
    phi_a0 = 0;
loop_11:
    temp_v1_2 = *phi_v0;
    if ((arg1->msgCtx.unk11F04 == temp_v1_2) || (arg0->textId == temp_v1_2)) {
        arg0->unk_270 = 1;
        arg0->unk_26E = phi_a0;
    } else {
        temp_a0_2 = phi_a0 + 2;
        phi_v0 += 4;
        phi_a0 = temp_a0_2;
        if (temp_a0_2 != 0x18) {
            goto loop_11;
        }
    }
    arg0->unk_254 = 2;
    arg0->unk_23C = func_80BEA394;
}

void func_80BEA394(Actor *arg0, GlobalContext *arg1) {
    Actor *sp3C;
    void *sp38;
    s32 sp34;
    s32 sp30;
    void *sp24;
    Actor *sp20;
    Actor *temp_v0_3;
    s16 temp_a0;
    s16 temp_a3_2;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s32 temp_a3;
    void *temp_v0_2;
    s32 phi_a3;
    s16 *phi_v0;
    s16 phi_a3_2;

    sp3C = NULL;
    sp38 = NULL;
    temp_v0 = *(&D_80BEB26A + (arg0->unk_26E * 2));
    sp30 = (s32) temp_v0;
    phi_a3 = (s32) temp_v0;
    if (arg0->unk_270 == 1) {
        sp34 = (s32) temp_v0;
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            sp34 = sp34;
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay((arg0 + (sp34 * 2))->unk_258);
            return;
        }
        temp_v0_2 = arg0 + (sp34 * 2);
        temp_a0 = temp_v0_2->unk_258;
        sp34 = sp34;
        sp24 = temp_v0_2;
        if (ActorCutscene_GetCanPlayNext(temp_a0) == 0) {
            ActorCutscene_SetIntentToPlay(sp24->unk_258);
            return;
        }
        sp34 = sp34;
        ActorCutscene_StartAndSetUnkLinkFields(sp24->unk_258, arg0->unk_27C);
        func_800B86C8(arg0, arg1, arg0->unk_27C);
        arg0->unk_270 = 2;
        phi_a3 = sp34;
        goto block_6;
    }
block_6:
    if (((gSaveContext.weekEventReg[63] & 0x80) == 0) && ((temp_v0_3 = arg0->unk_274, (temp_v0_3 != 0)) || (arg0->unk_278 != 0))) {
        sp3C = temp_v0_3;
        sp38 = arg0->unk_278;
    }
    if ((arg0->unk_244 == 0) && (sp34 = phi_a3, (func_80152498(&arg1->msgCtx) == 5)) && (sp34 = phi_a3, (func_80147624(arg1) != 0))) {
        temp_v1 = arg0->unk_256;
        if (temp_v1 == 0x15) {
            sp34 = phi_a3;
            func_800B7298(arg1, arg0, 6U);
            if (arg0->unk_270 == 2) {
                ActorCutscene_Stop((arg0 + (phi_a3 * 2))->unk_258);
                arg0->unk_270 = 0;
            }
            func_80BEAAF8(arg0, arg1);
            return;
        }
        if (temp_v1 == 0x14) {
            sp34 = phi_a3;
            func_801477B4(arg1);
            arg1->nextEntranceIndex = 0x10;
            Scene_SetExitFade(arg1);
            arg1->sceneLoadFlag = 0x14;
            gSaveContext.weekEventReg[63] |= 0x80;
            arg0->unk_290 = 1;
            if (arg0->unk_270 == 2) {
                ActorCutscene_Stop((arg0 + (phi_a3 * 2))->unk_258);
                arg0->unk_270 = 0;
                return;
            }
            /* Duplicate return node #53. Try simplifying control flow for better match */
            return;
        }
        if ((temp_v1 == 8) || (temp_v1 == 0xA) || (temp_v1 == 0x16) || (temp_v1 == 0x17)) {
            sp34 = phi_a3;
            gSaveContext.weekEventReg[60] |= 8;
            func_801477B4(arg1);
            if ((gSaveContext.weekEventReg[63] & 0x80) == 0) {
                if ((arg0->unk_274 != 0) && (arg0->unk_278 != 0)) {
                    sp3C->unk_28C = 2;
                    sp38->unk_2AC = 2;
                    sp3C->unk_288 = (Actor *) arg0->unk_274;
                    sp38->unk_2A4 = (void *) arg0->unk_278;
                }
                arg0->unk_27C = arg0;
            }
            if (arg0->unk_270 == 2) {
                ActorCutscene_Stop((arg0 + (phi_a3 * 2))->unk_258);
                arg0->unk_270 = 0;
            }
            func_80BE9EF8((GlobalContext *) arg0, arg1);
            return;
        }
        arg0->unk_256 = (s16) (temp_v1 + 1);
        temp_v1_2 = arg0->unk_256;
        sp24 = arg0 + (phi_a3 * 2);
        if (temp_v1_2 == 8) {
            arg1->msgCtx.unk11F10 = 0;
            func_80BE9DF8(arg0, arg0);
            func_800B86C8(arg0, arg1, arg0->unk_27C);
            func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(sp24->unk_258)), arg0->unk_27C);
            arg0->unk_244 = 2;
            arg0->unk_23C = func_80BEA8F0;
            return;
        }
        if (temp_v1_2 == 0xC) {
            if ((gSaveContext.weekEventReg[60] & 8) != 0) {
                func_80BE9D9C(arg0, arg0);
                arg0->unk_244 = 0x19;
            } else {
                func_80BE9CE8(arg0, 4);
                SkelAnime_FrameUpdateMatrix((SkelAnime *) (arg0 + 0x144));
            }
        }
        if (arg0->unk_256 == 0xD) {
            sp20 = arg0 + 0x144;
            func_80BE9CE8(arg0, 4);
            SkelAnime_FrameUpdateMatrix((SkelAnime *) sp20);
        }
        func_80BE9DF8(arg0);
        func_800B86C8(arg0, arg1, arg0->unk_27C);
        func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(sp24->unk_258)), arg0->unk_27C);
        arg0->textId = *(&D_80BEB1D0 + (arg0->unk_256 * 2));
        func_801477B4(arg1);
        func_801518B0(arg1, arg0->textId, arg0);
        phi_v0 = &D_80BEB268;
        phi_a3_2 = 0;
loop_42:
        temp_v1_3 = *phi_v0;
        if ((arg1->msgCtx.unk11F04 == temp_v1_3) || (arg0->textId == temp_v1_3)) {
            arg0->unk_26E = phi_a3_2;
        } else {
            temp_a3 = phi_a3_2 + 2;
            phi_v0 += 4;
            phi_a3_2 = (s16) temp_a3;
            if (temp_a3 < 0x18) {
                goto loop_42;
            }
        }
        temp_a3_2 = *(&D_80BEB26A + (arg0->unk_26E * 2));
        if ((arg0->unk_270 == 2) && (temp_a3_2 != sp30)) {
            arg0->unk_270 = 1;
            sp34 = (s32) temp_a3_2;
            ActorCutscene_Stop((arg0 + (sp30 * 2))->unk_258);
            ActorCutscene_SetIntentToPlay((arg0 + (temp_a3_2 * 2))->unk_258);
        }
        if ((arg0->unk_256 == 3) && (arg0->unk_274 != 0) && (arg0->unk_278 != 0)) {
            sp3C->unk_288 = arg0;
        }
        /* Duplicate return node #53. Try simplifying control flow for better match */
    }
}

void func_80BEA8F0(Actor *arg0, GlobalContext *arg1) {
    s32 sp2C;
    s32 sp28;
    void *sp20;
    s16 *temp_v1_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1_3;
    s32 temp_t7;
    s32 temp_v1;
    u16 temp_t5;
    s16 *phi_a0;
    s16 phi_v1;

    temp_v0 = arg0->unk_244;
    if (temp_v0 != 0) {
        if (temp_v0 == 1) {
            if ((arg0->unk_256 == 8) || (arg0->unk_280 == 4)) {
                func_80BE9D9C(arg0);
            }
            temp_t7 = arg0->unk_280 + 1;
            arg0->unk_280 = temp_t7;
            if (temp_t7 >= 6) {
                arg0->unk_280 = 5;
                return;
            }
            /* Duplicate return node #19. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return;
    }
    if (arg0->unk_250 <= arg0->unk_15C) {
        sp28 = (s32) *(&D_80BEB26A + (arg0->unk_26E * 2));
        func_80BE9D9C(arg0);
        func_801477B4(arg1);
        temp_t5 = *(&D_80BEB1D0 + (arg0->unk_256 * 2));
        arg0->textId = temp_t5;
        func_801518B0(arg1, temp_t5 & 0xFFFF, arg0);
        if (arg0->unk_256 == 8) {
            func_80151BB4(arg1, 7U);
        }
        phi_a0 = &D_80BEB268;
        phi_v1 = 0;
        do {
            temp_v0_2 = *phi_a0;
            if ((arg1->msgCtx.unk11F04 == temp_v0_2) || (arg0->textId == temp_v0_2)) {
                arg0->unk_26E = phi_v1;
            }
            temp_v1 = phi_v1 + 1;
            phi_a0 += 2;
            phi_v1 = (s16) temp_v1;
        } while (temp_v1 < 0x18);
        temp_v1_2 = &D_80BEB26A + (arg0->unk_26E * 2);
        temp_v1_3 = *temp_v1_2;
        if ((arg0->unk_270 == 2) && (temp_v1_3 != sp28)) {
            arg0->unk_270 = 1;
            sp2C = (s32) temp_v1_3;
            ActorCutscene_Stop((arg0 + (sp28 * 2))->unk_258);
            ActorCutscene_SetIntentToPlay((arg0 + (temp_v1_3 * 2))->unk_258);
        }
        sp20 = arg0 + (*temp_v1_2 * 2);
        func_80BE9DF8(arg0);
        func_800B86C8(arg0, arg1, arg0->unk_27C);
        func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(sp20->unk_258)), arg0->unk_27C);
        arg0->unk_23C = func_80BEA394;
    }
}

void func_80BEAAF8(Actor *arg0, GlobalContext *arg1) {
    func_800B8A1C(arg0, arg1, 0xC, 300.0f, 300.0f);
    arg0->unk_254 = 3;
    arg0->unk_23C = func_80BEAB44;
}

void func_80BEAB44(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;

    temp_a0 = arg0;
    if (Actor_HasParent(arg0, arg1) != 0) {
        temp_a0->unk_256 = 0x16;
        temp_a0->parent = NULL;
        temp_a0->textId = *(&D_80BEB1D0 + (temp_a0->unk_256 * 2));
        arg0 = temp_a0;
        func_800B8500(temp_a0, arg1, 400.0f, 400.0f, -1);
        gSaveContext.weekEventReg[60] |= 0x10;
        arg0->unk_23C = func_80BEABF8;
        return;
    }
    func_800B8A1C(temp_a0, arg1, 0xC, 300.0f, 300.0f);
}

void func_80BEABF8(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    if (func_800B84D0(arg0, arg1) != 0) {
        func_80151BB4(arg1, 0x26U);
        func_80151BB4(arg1, 7U);
        arg0->unk_23C = func_80BEA394;
        return;
    }
    func_800B8500(arg0, arg1, 400.0f, 400.0f, -1);
}

void func_80BEAC84(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a2;

    temp_a2 = arg0;
    temp_a0 = temp_a2;
    arg0 = temp_a2;
    func_80BE9CE8(temp_a0, 3, temp_a2);
    arg0->unk_248 = 1;
    arg0->unk_256 = 0x18;
    func_80151BB4(arg1, 7U);
    if ((gSaveContext.weekEventReg[60] & 0x40) != 0) {
        arg0->unk_256 = 0x1A;
    }
    arg0->unk_24C = 3;
    arg0->unk_248 = 1;
    arg0->unk_254 = 4;
    arg0->unk_23C = func_80BEAD2C;
    arg0->textId = *(&D_80BEB1D0 + (arg0->unk_256 * 2));
}

void func_80BEAD2C(Actor *arg0, GlobalContext *arg1) {
    func_80BE9C74(arg0);
    if (func_800B84D0(arg0, arg1) != 0) {
        func_80BEADB8(arg0);
        return;
    }
    if (((gSaveContext.weekEventReg[63] & 0x80) != 0) && (Player_GetMask(arg1) == 2)) {
        arg0->textId = 0x2368;
    }
    func_800B8614(arg0, arg1, 150.0f);
}

void func_80BEADB8(Actor *arg0) {
    arg0->unk_254 = 5;
    arg0->unk_23C = func_80BEADD4;
}

void func_80BEADD4(Actor *arg0, GlobalContext *arg1) {
    func_80BE9C74(arg0);
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        func_801477B4(arg1);
        if ((gSaveContext.weekEventReg[60] & 0x40) == 0) {
            arg0->unk_256 = 0x19;
            func_80151938(arg1, *(&D_80BEB1D0 + (arg0->unk_256 * 2)));
            gSaveContext.weekEventReg[60] |= 0x40;
            return;
        }
        func_80BEAC84((EnDt *) arg0, arg1);
        /* Duplicate return node #5. Try simplifying control flow for better match */
    }
}

void EnDt_Update(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_v0_2;
    EnDt *this = (EnDt *) thisx;

    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    Actor_SetScale((Actor *) this, 0.01f);
    temp_v0 = this->unk_254;
    if ((temp_v0 != 4) && (temp_v0 != 5) && (gSaveContext.day == 3) && (gSaveContext.isNight != 0)) {
        func_80BEAC84(this, globalCtx, 3);
    }
    if (((gSaveContext.weekEventReg[63] & 0x80) == 0) && ((temp_v0_2 = gSaveContext.day, (temp_v0_2 != 3)) || ((temp_v0_2 == 3) && (gSaveContext.isNight == 0)))) {
        func_801A1FB4(3, &D_801DB4A4, 0x31, 0x447A0000);
        Audio_PlayActorSound2((Actor *) this, 0x205DU);
    }
    temp_v0_3 = this->unk_24A;
    if (temp_v0_3 != 0) {
        this->unk_24A = temp_v0_3 - 1;
    }
    temp_v0_4 = this->unk_244;
    if (temp_v0_4 != 0) {
        this->unk_244 = temp_v0_4 - 1;
    }
    if (this->unk_290 != 0) {
        func_80BE9C74((Actor *) this);
    }
    if ((this->unk_248 == 0) && (this->unk_24A == 0)) {
        this->unk_24C += 1;
        if ((s32) this->unk_24C >= 3) {
            this->unk_24C = 0;
            this->unk_24A = (s32) Rand_ZeroFloat(60.0f) + 0x14;
        }
    }
    this->actionFunc(this, globalCtx);
    this->actor.shape.rot.y = this->actor.world.rot.y;
    Math_SmoothStepToS(&this->unk_286, this->unk_28C, 1, 0xBB8, (s16) 0);
    Actor_SetHeight((Actor *) this, 60.0f);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    temp_a2 = &this->unk_294;
    sp2C = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
}

s32 func_80BEB06C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0xC) {
        arg4->y += -(s32) arg5->unk_286;
    }
    return 0;
}

void EnDt_Draw(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp40;
    Gfx *sp34;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    s16 temp_v0_2;
    EnDt *this = (EnDt *) thisx;

    sp40 = 0;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp34 = temp_v0;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_80BEB348 + (this->unk_24C * 4)));
    temp_v0_2 = this->unk_24C;
    if ((s32) temp_v0_2 < 3) {
        sp40 = (s32) temp_v0_2;
    }
    temp_v0_3 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060024;
    sp30 = temp_v0_3;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80BEB35C + (sp40 * 4)));
    SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80BEB06C, NULL, (Actor *) this);
}
