struct _mips2c_stack_EnDaiku2_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnDaiku2_Draw {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ GraphicsContext *sp30;               /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnDaiku2_Init {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnDaiku2_PostLimbDraw {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnDaiku2_Update {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BE61D0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BE6408 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BE64C0 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ Vec3f *sp2C;                         /* inferred */
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad30[0xC];
    /* 0x3C */ Actor *sp3C;                         /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BE65B4 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BE66E4 {
    /* 0x00 */ char pad0[0x5C];
    /* 0x5C */ PosRot *sp5C;                        /* inferred */
    /* 0x60 */ char pad60[0x10];                    /* maybe part of sp5C[5]? */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ ? sp88;                              /* inferred */
    /* 0x88 */ char pad88[0x4];
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ char pad90[0x8];                     /* maybe part of sp8C[3]? */
    /* 0x98 */ s32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_80BE6B40 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BE6BC0 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BE6CFC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BE6D40 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ char pad30[0xA];                     /* maybe part of sp2C[3]? */
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ char pad3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80BE6EB0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BE6EF0 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ s16 *sp30;                           /* inferred */
    /* 0x34 */ char pad34[0xC];                     /* maybe part of sp30[4]? */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad40[0x1C];
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80BE71A0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BE71D8 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BE7504 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BE7600 {};              /* size 0x0 */

struct _mips2c_stack_func_80BE7718 {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

void EnDaiku2_PostLimbDraw(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80BE61D0(Actor *arg0, EnDaiku2 *);        /* static */
void func_80BE6408(EnDaiku2 *arg0, s16 arg1, EnDaiku2 *); /* static */
s32 func_80BE64C0(Actor *arg0, GlobalContext *arg1, GlobalContext *); /* static */
extern ? D_060009E0;
extern AnimationHeaderCommon D_06002134;
extern AnimationHeader D_06002FA0;
extern ? D_06009638;
extern ? D_0600A390;
extern FlexSkeletonHeader D_0600A850;
static ColliderCylinderInit D_80BE7900 = {
    {0xA, 0, 0, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1},
    {0x14, 0x3C, 0, {0, 0, 0}},
};
static ? D_80BE7958;                                /* unable to generate initializer */
static ? sAnimations;                               /* unable to generate initializer */
static ? sTextIds;                                  /* unable to generate initializer */

void func_80BE61D0(Actor *arg0) {
    Path *temp_a0;
    s16 temp_a1;
    void *temp_a2;

    if (arg0->unk27A != -1) {
        temp_a0 = arg0->unk258;
        temp_a2 = arg0 + 0x268;
        if (temp_a0 != 0) {
            temp_a1 = arg0->unk25C;
            arg0 = arg0;
            if (func_8013D68C(temp_a0, temp_a1, temp_a2) == 0) {
                Actor_MarkForDeath(arg0);
            }
        }
    }
}

void EnDaiku2_Init(EnDaiku2 *this, GlobalContext *globalCtx) {
    s32 sp30;
    s16 temp_a1;
    s16 temp_v1;
    EnDaiku2 *this = (EnDaiku2 *) thisx;

    sp30 = gSaveContext.day;
    this->actor.colChkInfo.mass = 0xFF;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 40.0f);
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_0600A850, &D_06002FA0, this->jointTable, this->morphTable, 0x11);
    this->actor.targetMode = 0;
    Collider_InitAndSetCylinder(globalCtx, &this->collider, (Actor *) this, &D_80BE7900);
    temp_v1 = this->actor.params;
    this->unk_278 = temp_v1 & 0x7F;
    this->unk_27A = ((s32) temp_v1 >> 7) & 0x3F;
    this->unk_258 = func_8013D648(globalCtx, this->unk_27A, 0x3F);
    this->unk_280 = ((s32) this->actor.params >> 0xF) & 1;
    Actor_SetScale((Actor *) this, 0.01f);
    if (this->unk_280 == 0) {
        if (sp30 == 3) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        temp_a1 = this->unk_278;
        if (temp_a1 == 0x7F) {
            this->unk_278 = -1;
        } else if (Flags_GetSwitch(globalCtx, (s32) temp_a1) != 0) {
            this->unk_25C = this->unk_258->count - 1;
            func_80BE61D0((Actor *) this);
            Math_Vec3f_Copy((Vec3f *) &this->actor.world, &this->unk_268);
        }
        goto block_9;
    }
    if (sp30 != 3) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
block_9:
    this->actor.gravity = -3.0f;
    Math_Vec3f_Copy(&this->unk_268, (Vec3f *) &this->actor.world);
    func_80BE65B4(this, globalCtx);
}

void EnDaiku2_Destroy(EnDaiku2 *this, GlobalContext *globalCtx) {
    EnDaiku2 *this = (EnDaiku2 *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void func_80BE6408(EnDaiku2 *arg0, s16 arg1) {
    f32 sp34;
    s16 temp_v1;
    f32 phi_f0;

    arg0->unk_276 = arg1;
    sp34 = 1.0f;
    temp_v1 = arg0->unk_276;
    arg0->unk_284 = (f32) SkelAnime_GetFrameCount(*(&sAnimations + (arg0->unk_276 * 4)));
    phi_f0 = 1.0f;
    if (temp_v1 == 3) {
        phi_f0 = 2.0f;
    }
    SkelAnime_ChangeAnim(arg0 + 0x144, *(&sAnimations + (temp_v1 * 4)), phi_f0, 0.0f, arg0->unk_284, (u8) (s32) *(&D_80BE7958 + temp_v1), -4.0f);
}

s32 func_80BE64C0(Actor *arg0, GlobalContext *arg1) {
    Actor *sp3C;
    ? sp30;
    Vec3f *sp2C;
    Vec3f *temp_a1;
    s16 temp_a1_2;

    temp_a1 = arg0 + 0x24;
    sp2C = temp_a1;
    Math_Vec3f_Copy((Vec3f *) &sp30, temp_a1);
    Math_Vec3f_Copy(sp2C, arg0 + 8);
    sp3C = func_800BE0B8(arg1, arg0, -1, 3U, (f32) gGameInfo->data[2407] + 240.0f);
    Math_Vec3f_Copy(sp2C, (Vec3f *) &sp30);
    temp_a1_2 = arg0->unk278;
    if (((s32) temp_a1_2 >= 0) && (sp3C = sp3C, (Flags_GetSwitch(arg1, (s32) temp_a1_2) == 0)) && (sp3C != 0) && (sp3C->id == 9)) {
        if (sp3C->unk1F9 == 0) {
            arg0->textId = 0x32D3;
            return 1;
        }
        arg0->textId = 0x32D4;
        return 1;
    }
    return 0;
}

void func_80BE65B4(EnDaiku2 *this, GlobalContext *globalCtx) {
    s16 temp_a1;
    s32 temp_v0;

    temp_v0 = gSaveContext.day - 1;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {

            } else {
                this->unk_28A = 4;
                this->unk_264 = 1.0f;
                func_80BE6408(this, 0xA);
            }
        } else {
            this->unk_28A = 2;
            if ((gSaveContext.weekEventReg[64] & 4) != 0) {
                this->unk_28A = 7;
            }
            func_80BE6408(this, 8);
        }
    } else {
        this->unk_28A = 0;
        if ((gSaveContext.weekEventReg[64] & 2) != 0) {
            this->unk_28A = 6;
        }
        func_80BE6408(this, 8);
    }
    temp_a1 = this->unk_278;
    this->unk_264 = 1.0f;
    if (((s32) temp_a1 >= 0) && (Flags_GetSwitch(globalCtx, (s32) temp_a1) != 0)) {
        this->unk_28A = 5;
        if (this->unk_276 != 0xA) {
            func_80BE6408(this, 0xA);
        }
    }
    this->unk_288 = 0;
    this->actionFunc = func_80BE66E4;
}

void func_80BE66E4(EnDaiku2 *this, GlobalContext *globalCtx) {
    f32 sp9C;
    s32 sp98;
    f32 sp8C;
    ? sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    PosRot *sp5C;
    SkelAnime *temp_s0_2;
    f32 *temp_s1;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f4;
    s16 temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_s0;
    s32 phi_s0;
    s32 phi_v1;

    sp98 = gSaveContext.day - 1;
    sp9C = this->skelAnime.animCurrentFrame;
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.home.rot.y, 1, 0xBB8, (s16) 0);
    if (sp98 != 2) {
        temp_a1 = this->unk_278;
        if (((s32) temp_a1 >= 0) && (Flags_GetSwitch(globalCtx, (s32) temp_a1) != 0)) {
            this->unk_28A = 5;
            if (this->unk_276 != 0xA) {
                func_80BE6408(this, 0xA);
            }
        }
    }
    this->actor.textId = *(&sTextIds + (this->unk_28A * 2));
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        func_80BE6B40(this, globalCtx);
        return;
    }
    if ((this->unk_28A != 5) && (sp98 != 2) && (func_80BE64C0((Actor *) this, globalCtx) != 0)) {
        func_80BE6CFC(this);
        return;
    }
    func_800B8614((Actor *) this, globalCtx, 80.0f);
    if ((this->unk_276 == 8) && (func_801378B8(&this->skelAnime, 6.0f) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x2852U);
        sp5C = &this->actor.world;
        temp_s1 = &sp70;
        phi_s0 = 0;
        do {
            Math_Vec3f_Copy((Vec3f *) temp_s1, (Vec3f *) sp5C);
            temp_f4 = sp74 + 40.0f;
            sp70 += Math_SinS(this->actor.world.rot.y) * 70.0f;
            sp74 = temp_f4;
            sp78 += Math_CosS(this->actor.world.rot.y) * 70.0f;
            sp70 += randPlusMinusPoint5Scaled(5.0f);
            sp74 = temp_f4 + randPlusMinusPoint5Scaled(5.0f);
            temp_f10 = sp78 + randPlusMinusPoint5Scaled(5.0f);
            sp8C = -1.0f;
            sp78 = temp_f10;
            sp7C = (Rand_ZeroOne() - 0.5f) * 4.0f;
            sp80 = (Rand_ZeroOne() * 10.0f) + 4.0f;
            sp84 = (Rand_ZeroOne() - 0.5f) * 4.0f;
            func_80BE7504(this, (Vec3f *) temp_s1, (Vec3f *) &sp7C, (Vec3f *) &sp88, 0.01f - (Rand_ZeroFloat(1.0f) * 0.005f), (s16) 0x28);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != 0xA);
    }
    temp_v0 = this->actor.yawTowardsPlayer - this->actor.home.rot.y;
    phi_v1 = temp_v0 << 0x10;
    if ((s32) temp_v0 < 0) {
        phi_v1 = (s32) temp_v0 * -0x10000;
    }
    if ((phi_v1 >> 0x10) >= 0x2891) {
        if (sp98 != 2) {
            temp_v0_2 = this->unk_276;
            if ((temp_v0_2 == 5) || (temp_v0_2 == 9)) {
                func_80BE6408(this, 0xA, (EnDaiku2 *)0xA);
                return;
            }
            if ((temp_v0_2 == (EnDaiku2 *)0xA) && (this->unk_284 <= sp9C)) {
                temp_s0_2 = &this->skelAnime;
                temp_f0 = (f32) SkelAnime_GetFrameCount(&D_06002134);
                this->unk_284 = temp_f0;
                SkelAnime_ChangeAnim(temp_s0_2, (AnimationHeader *) &D_06002134, -1.0f, temp_f0, 0.0f, (u8) 2, -4.0f);
                this->unk_276 = 0xB;
                return;
            }
            if ((temp_v0_2 == 0xB) && (sp9C <= 0.0f)) {
                func_80BE6408(this, 8, (EnDaiku2 *)0xA);
                return;
            }
            /* Duplicate return node #35. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #35. Try simplifying control flow for better match */
        return;
    }
    if (sp98 != 2) {
        temp_v0_3 = this->unk_276;
        if ((temp_v0_3 != 9) && (temp_v0_3 != (EnDaiku2 *)0xA)) {
            func_80BE6408(this, 9, (EnDaiku2 *)0xA);
            return;
        }
        if ((temp_v0_3 == 9) && (this->unk_284 <= sp9C)) {
            func_80BE6408(this, 0xA, (EnDaiku2 *)0xA);
        }
        /* Duplicate return node #35. Try simplifying control flow for better match */
    }
}

void func_80BE6B40(EnDaiku2 *this, GlobalContext *globalCtx) {
    s16 temp_a1;

    this->unk_288 = 1;
    if ((gSaveContext.day != 3) && (temp_a1 = this->unk_278, this = this, (Flags_GetSwitch(globalCtx, (s32) temp_a1) != 0))) {
        this->actionFunc = func_80BE6BC0;
        return;
    }
    this = this;
    func_80BE6408(this, 5, this);
    this->actionFunc = func_80BE6BC0;
}

void func_80BE6BC0(EnDaiku2 *this, GlobalContext *globalCtx) {
    s32 sp2C;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_a1;

    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xBB8, (s16) 0);
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        temp_a1 = gSaveContext.day - 1;
        sp2C = temp_a1;
        func_801477B4(globalCtx);
        temp_v0 = this->unk_288;
        if (temp_v0 == 2) {
            this->actionFunc = func_80BE6D40;
            return;
        }
        if (temp_v0 == 3) {
            this->actionFunc = func_80BE6EF0;
            return;
        }
        temp_v0_2 = this->unk_28A;
        if ((temp_v0_2 == 0) || (temp_v0_2 == 2)) {
            this->unk_28A = temp_v0_2 + 1;
            func_80151938(globalCtx, *(&sTextIds + (this->unk_28A * 2)));
            return;
        }
        if (temp_a1 != 0) {
            if (temp_a1 != 1) {

            } else {
                gSaveContext.weekEventReg[64] |= 4;
            }
        } else {
            gSaveContext.weekEventReg[64] |= 2;
        }
        func_80BE65B4(this, globalCtx);
        /* Duplicate return node #15. Try simplifying control flow for better match */
    }
}

void func_80BE6CFC(EnDaiku2 *this) {
    func_80BE6408((EnDaiku2 *)3);
    this->unk_288 = 2;
    this->actionFunc = func_80BE6D40;
    this->unk_264 = 0.0f;
}

void func_80BE6D40(EnDaiku2 *this, GlobalContext *globalCtx) {
    s16 sp3A;
    PosRot *sp2C;
    Path *temp_v0;
    PosRot *temp_a0;
    f32 temp_f12;
    f32 temp_f2;

    temp_a0 = &this->actor.world;
    sp2C = temp_a0;
    sp3A = Math_Vec3f_Yaw((Vec3f *) temp_a0, &this->unk_268);
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->actionFunc = func_80BE6BC0;
        return;
    }
    Math_SmoothStepToS(&this->actor.world.rot.y, sp3A, 1, 0x7D0, (s16) 0xA);
    Math_ApproachF((f32 *) sp2C, this->unk_268.x, 0.5f, fabsf(Math_SinS(this->actor.world.rot.y) * 6.0f));
    Math_ApproachF(&this->actor.world.pos.z, this->unk_268.z, 0.5f, fabsf(Math_CosS(this->actor.world.rot.y) * 6.0f));
    temp_f2 = this->actor.world.pos.x - this->unk_268.x;
    temp_f12 = this->actor.world.pos.z - this->unk_268.z;
    if ((sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < 4.0f) && (temp_v0 = this->unk_258, (temp_v0 != 0))) {
        this->unk_25C += 1;
        if ((s32) this->unk_25C >= (s32) temp_v0->count) {
            func_80BE6EB0(this);
            return;
        }
        func_80BE61D0((bitwise Actor *) temp_f12, this);
        goto block_7;
    }
block_7:
    func_800B8614((Actor *) this, globalCtx, 80.0f);
}

void func_80BE6EB0(EnDaiku2 *this) {
    func_80BE6408((EnDaiku2 *)2);
    this->unk_274 = 0;
    this->unk_288 = 3;
    this->actionFunc = func_80BE6EF0;
}

void func_80BE6EF0(EnDaiku2 *this, GlobalContext *globalCtx) {
    f32 sp5C;
    ? sp40;
    s16 *sp30;
    PosRot *sp2C;
    Vec3f *sp28;
    PosRot *temp_a0_2;
    Vec3f *temp_a1;
    f32 temp_f12;
    f32 temp_f2;
    s16 *temp_a0;
    s16 temp_a1_2;
    s16 temp_v0;

    sp5C = this->skelAnime.animCurrentFrame;
    temp_a0 = &this->actor.world.rot.y;
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->actionFunc = func_80BE6BC0;
        return;
    }
    sp30 = temp_a0;
    Math_SmoothStepToS(temp_a0, this->actor.home.rot.y, 1, 0xBB8, (s16) 0);
    temp_a0_2 = &this->actor.world;
    temp_a1 = &this->unk_268;
    if (this->unk_284 <= sp5C) {
        this->unk_274 = 1;
    }
    if (this->unk_274 != 0) {
        sp2C = temp_a0_2;
        sp28 = temp_a1;
        Math_SmoothStepToS(sp30, Math_Vec3f_Yaw((Vec3f *) temp_a0_2, temp_a1), 1, 0x7D0, (s16) 0xA);
        Math_ApproachF((f32 *) temp_a0_2, this->unk_268.x, 0.5f, fabsf(Math_SinS(this->actor.world.rot.y) * 4.0f));
        Math_ApproachF(&this->actor.world.pos.z, this->unk_268.z, 0.5f, fabsf(Math_CosS(this->actor.world.rot.y) * 4.0f));
        temp_f2 = this->actor.world.pos.x - this->unk_268.x;
        temp_f12 = this->actor.world.pos.z - this->unk_268.z;
        if ((sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < 4.0f) && (this->unk_258 != 0)) {
            if (func_80BE64C0((bitwise Actor *) temp_f12, (GlobalContext *) this, globalCtx) == 0) {
                if (this->unk_276 != 3) {
                    func_80BE6408(this, 3);
                }
                temp_a1_2 = this->unk_278;
                if (((s32) temp_a1_2 >= 0) && (Flags_GetSwitch(globalCtx, (s32) temp_a1_2) != 0)) {
                    this->unk_28A = 5;
                    if (this->unk_276 != 0xA) {
                        func_80BE6408(this, 0xA);
                    }
                    func_80BE65B4(this, globalCtx);
                    return;
                }
                this->unk_25C += -1;
                if ((s32) this->unk_25C < 0) {
                    this->unk_25C = 0;
                    func_80BE71A0(this);
                    return;
                }
                func_80BE61D0((Actor *) this);
                goto block_22;
            }
            goto block_22;
        }
        if (func_80BE64C0((bitwise Actor *) temp_f12, (GlobalContext *) this, globalCtx) != 0) {
            Math_Vec3f_Copy((Vec3f *) &sp40, sp28);
            temp_v0 = this->unk_25C;
            this->unk_25C = temp_v0 + 1;
            if ((s32) this->unk_25C < (s32) this->unk_258->count) {
                func_80BE61D0((Actor *) this, (EnDaiku2 *) &sp40);
                func_80BE6CFC(this);
                return;
            }
            this->unk_25C = temp_v0;
            Math_Vec3f_Copy(sp28, (Vec3f *) &sp40);
            goto block_22;
        }
        goto block_22;
    }
block_22:
    func_800B8614((Actor *) this, globalCtx, 80.0f);
}

void func_80BE71A0(EnDaiku2 *this) {
    func_80BE6408(this, 9);
    this->actionFunc = func_80BE71D8;
}

void func_80BE71D8(EnDaiku2 *this, GlobalContext *globalCtx) {
    f32 sp1C;
    f32 temp_f0;
    s16 temp_v0;

    temp_f0 = this->skelAnime.animCurrentFrame;
    sp1C = temp_f0;
    if (func_80BE64C0((Actor *) globalCtx) != 0) {
        func_80BE6CFC(this);
        return;
    }
    temp_v0 = this->unk_276;
    if ((temp_v0 == 9) && (this->unk_284 <= temp_f0)) {
        func_80BE6408(this, 0);
        return;
    }
    if ((temp_v0 == 0) && (this->unk_284 <= temp_f0)) {
        func_80BE6408(this, 5);
        return;
    }
    if ((temp_v0 == 5) && (this->unk_284 <= temp_f0)) {
        func_80BE65B4(this, globalCtx);
    }
}

void EnDaiku2_Update(EnDaiku2 *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    EnDaiku2 *this = (EnDaiku2 *) thisx;

    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    this->actionFunc(this, globalCtx);
    this->actor.shape.rot.y = this->actor.world.rot.y;
    Actor_SetHeight((Actor *) this, 65.0f);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Math_ApproachF(&this->unk_260, this->unk_264, 0.3f, 2.0f);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 50.0f, 0x1DU);
    temp_a2 = &this->collider;
    sp2C = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    func_80BE7600(this, globalCtx);
}

void EnDaiku2_PostLimbDraw(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;

    temp_a0 = *arg0;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    if (arg1 == 0xE) {
        temp_f12 = arg4->unk260;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        temp_v0 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp20 = temp_v0;
        sp20->words.w1 = Matrix_NewMtx(*arg0);
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = (u32) &D_06009638;
        temp_v0_2->words.w0 = 0xDE000000;
    }
    if (arg1 == 0xF) {
        temp_v0_3 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = (u32) &D_0600A390;
        temp_v0_3->words.w0 = 0xDE000000;
    }
}

void EnDaiku2_Draw(EnDaiku2 *this, GlobalContext *globalCtx) {
    GraphicsContext *sp30;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    EnDaiku2 *this = (EnDaiku2 *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp30 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v1 = sp30->polyOpa.p;
    sp30->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xFB000000;
    temp_v1->words.w1 = 0xF59B00FF;
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, NULL, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) EnDaiku2_PostLimbDraw, (Actor *) this);
    func_80BE7718(this, globalCtx);
}

void func_80BE7504(EnDaiku2 *this, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, f32 arg4, s16 arg5) {
    s16 temp_v0;
    EnDaiku2Particle *phi_s0;
    s16 phi_v0;

    phi_s0 = this->particles;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_s0->isEnabled == 0) {
        phi_s0->isEnabled = 1;
        phi_s0->unk_04.x = arg1->x;
        phi_s0->unk_04.y = arg1->y;
        phi_s0->unk_04.z = arg1->z;
        phi_s0->unk_10.x = arg2->x;
        phi_s0->unk_10.y = arg2->y;
        phi_s0->unk_10.z = arg2->z;
        phi_s0->unk_1C.x = arg3->x;
        phi_s0->unk_1C.y = arg3->y;
        phi_s0->unk_1C.z = arg3->z;
        phi_s0->unk_30 = arg4;
        phi_s0->unk_34 = arg5;
        phi_s0->unk_28.x = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        phi_s0->unk_28.y = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        phi_s0->unk_28.z = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        return;
    }
    phi_s0 += 0x38;
    if ((s32) temp_v0 >= 0x32) {
        return;
    }
    goto loop_1;
}

void func_80BE7600(EnDaiku2 *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f8;
    s16 temp_a0;
    s16 temp_a0_2;
    s32 temp_v1;
    void *temp_v0;
    EnDaiku2Particle *phi_v0;
    s32 phi_v1;

    phi_v0 = this->particles;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 2;
        phi_v1 = temp_v1;
        if (phi_v0->isEnabled != 0) {
            temp_f0 = phi_v0->unk_10.y;
            phi_v0->unk_04.x += phi_v0->unk_10.x;
            temp_a0 = phi_v0->unk_34;
            phi_v0->unk_28.x += 0x100;
            phi_v0->unk_28.z += 0x130;
            phi_v0->unk_04.y += temp_f0;
            phi_v0->unk_04.z += phi_v0->unk_10.z;
            phi_v0->unk_10.y = temp_f0 + phi_v0->unk_1C.y;
            if (temp_a0 != 0) {
                phi_v0->unk_34 = temp_a0 - 1;
            } else {
                phi_v0->isEnabled = 0;
            }
        }
        temp_v0 = phi_v0 + 0x38;
        if (phi_v0->unk38 != 0) {
            temp_f0_2 = temp_v0->unk14;
            temp_f8 = temp_v0->unk8 + temp_f0_2;
            temp_v0->unk4 = (f32) (temp_v0->unk4 + temp_v0->unk10);
            temp_a0_2 = temp_v0->unk34;
            temp_v0->unk2C = (s16) (temp_v0->unk2C + 0x130);
            temp_v0->unk28 = (s16) (temp_v0->unk28 + 0x100);
            temp_v0->unk14 = (f32) (temp_f0_2 + temp_v0->unk20);
            temp_v0->unkC = (f32) (temp_v0->unkC + temp_v0->unk18);
            temp_v0->unk8 = temp_f8;
            if (temp_a0_2 != 0) {
                temp_v0->unk34 = (s16) (temp_a0_2 - 1);
            } else {
                temp_v0->unk0 = 0;
            }
        }
        phi_v0 = temp_v0 + 0x38;
    } while (temp_v1 != 0x32);
}

void func_80BE7718(EnDaiku2 *this, GlobalContext *globalCtx) {
    EnDaiku2Particle *temp_s1;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_fp;
    GraphicsContext *temp_s2;
    ObjectContext *temp_s0;
    f32 temp_f12;
    s32 temp_s3;
    s32 temp_v0;
    EnDaiku2Particle *phi_s1;
    s32 phi_s3;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = this->particles;
    temp_fp = temp_a0;
    temp_s2 = temp_a0;
    func_8012C28C(temp_a0);
    temp_s0 = &globalCtx->objectCtx;
    temp_v0 = Object_GetIndex(temp_s0, 0x12A);
    if ((temp_v0 >= 0) && (Object_IsLoaded(temp_s0, temp_v0) != 0)) {
        temp_v0_2 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = 0;
        temp_v0_2->words.w0 = 0xE7000000;
        temp_v0_3 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDB060018;
        temp_v0_3->words.w1 = (u32) globalCtx->objectCtx.status[temp_v0].segment;
        phi_s1 = temp_s1;
        phi_s3 = 0;
        do {
            if (phi_s1->isEnabled != 0) {
                SysMatrix_StatePush();
                SysMatrix_InsertTranslation(phi_s1->unk_04.x, phi_s1->unk_04.y, phi_s1->unk_04.z, 0);
                SysMatrix_InsertXRotation_s(phi_s1->unk_28.x, 1);
                Matrix_RotateY(phi_s1->unk_28.y, 1U);
                SysMatrix_InsertZRotation_s(phi_s1->unk_28.z, 1);
                temp_f12 = phi_s1->unk_30;
                Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
                temp_v0_4 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = temp_v0_4 + 8;
                temp_v0_4->words.w0 = 0xDA380003;
                temp_v0_4->words.w1 = Matrix_NewMtx(temp_fp);
                temp_v0_5 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = temp_v0_5 + 8;
                temp_v0_5->words.w1 = (u32) &D_060009E0;
                temp_v0_5->words.w0 = 0xDE000000;
                SysMatrix_StatePop();
            }
            temp_s3 = phi_s3 + 1;
            phi_s1 += 0x38;
            phi_s3 = temp_s3;
        } while (temp_s3 != 0x32);
    }
}
