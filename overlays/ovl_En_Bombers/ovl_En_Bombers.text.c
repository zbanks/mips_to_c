typedef struct EnBombers {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x78];                 /* maybe part of unk_188[21]? */
    /* 0x206 */ Vec3s unk_206;                      /* inferred */
    /* 0x20C */ char pad_20C[0x78];                 /* maybe part of unk_206[21]? */
    /* 0x284 */ void (*actionFunc)(EnBombers *, GlobalContext *);
    /* 0x288 */ s16 unk_288;                        /* inferred */
    /* 0x28A */ s16 unk_28A;                        /* inferred */
    /* 0x28C */ char pad_28C[0x2];
    /* 0x28E */ s16 unk_28E;                        /* inferred */
    /* 0x290 */ s16 unk_290;                        /* inferred */
    /* 0x292 */ char pad_292[0x2];
    /* 0x294 */ Vec3f unk_294;                      /* inferred */
    /* 0x2A0 */ s16 unk_2A0;                        /* inferred */
    /* 0x2A2 */ char pad_2A2[0x2];
    /* 0x2A4 */ s16 unk_2A4;                        /* inferred */
    /* 0x2A6 */ s16 unk_2A6;                        /* inferred */
    /* 0x2A8 */ s16 unk_2A8;                        /* inferred */
    /* 0x2AA */ s16 unk_2AA;                        /* inferred */
    /* 0x2AC */ s16 unk_2AC;                        /* inferred */
    /* 0x2AE */ char pad_2AE[0x6];                  /* maybe part of unk_2AC[4]? */
    /* 0x2B4 */ f32 unk_2B4;                        /* inferred */
    /* 0x2B8 */ s16 unk_2B8;                        /* inferred */
    /* 0x2BA */ s16 unk_2BA;                        /* inferred */
    /* 0x2BC */ s16 unk_2BC;                        /* inferred */
    /* 0x2BE */ s16 unk_2BE;                        /* inferred */
    /* 0x2C0 */ char pad_2C0[0x8];                  /* maybe part of unk_2BE[5]? */
    /* 0x2C8 */ ColliderCylinder unk_2C8;           /* inferred */
} EnBombers;                                        /* size = 0x314 */

struct _mips2c_stack_EnBombers_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnBombers_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnBombers_Init {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnBombers_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80C03824 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C038B4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C039A8 {};              /* size 0x0 */

struct _mips2c_stack_func_80C03ACC {};              /* size 0x0 */

struct _mips2c_stack_func_80C03AF4 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ PosRot *sp38;                        /* inferred */
    /* 0x3C */ char pad_3C[0xC];                    /* maybe part of sp38[4]? */
    /* 0x48 */ u32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x8];                    /* maybe part of sp48[3]? */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ ? sp6C;                              /* inferred */
    /* 0x6C */ char pad_6C[0xC];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ CollisionPoly *sp7C;                 /* inferred */
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80C03F64 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C03FAC {
    /* 0x00 */ char pad_0[0x2A];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C042F8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C04354 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C043C8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C045B4 {};              /* size 0x0 */

void func_80C03824(EnBombers *arg0, s32 arg1, f32 arg2); /* static */
void func_80C038B4(Actor *arg0);                    /* static */
void func_80C039A8(EnBombers *arg0, GlobalContext *arg1); /* static */
void func_80C03ACC(EnBombers *arg0, s16);           /* static */
void func_80C03F64(EnBombers *arg0);                /* static */
void func_80C042F8(EnBombers *arg0);                /* static */
s32 func_80C045B4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
extern AnimationHeader D_060064B8;
extern FlexSkeletonHeader D_0600F82C;
static ColliderCylinderInit D_80C04770 = {
    {0xA, 0, 0, 9, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1},
    {0xA, 0x1E, 0, {0, 0, 0}},
};
static ? D_80C0479C;                                /* unable to generate initializer */
static ? D_80C047E0;                                /* unable to generate initializer */
static ? D_80C04818;                                /* unable to generate initializer */
static ? D_80C0482C;                                /* unable to generate initializer */
static ? D_80C04838;                                /* unable to generate initializer */

void EnBombers_Init(Actor *thisx, GlobalContext *globalCtx) {
    Actor *temp_v0_3;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_4;
    s8 temp_s0;
    u8 temp_t1;
    u8 temp_t3;
    u8 temp_t5;
    u8 temp_t9;
    s16 phi_s0;
    Actor *phi_s1;
    EnBombers *this = (EnBombers *) thisx;

    this->actor.colChkInfo.mass = 0xFF;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 19.0f);
    this->actor.gravity = -1.0f;
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_0600F82C, &D_060064B8, &this->unk_188, &this->unk_206, 0x15);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_2C8, (Actor *) this, &D_80C04770);
    this->actor.targetMode = 0;
    Actor_SetScale((Actor *) this, 0.01f);
    temp_v0 = this->actor.params;
    this->unk_2BC = ((s32) temp_v0 >> 4) & 0xF;
    this->unk_2BE = temp_v0 & 0xF;
    if (this->unk_2BC == 0) {
        if (((gSaveContext.weekEventReg[73] & 0x10) != 0) || ((gSaveContext.weekEventReg[85] & 2) != 0)) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->unk_2BE += 1;
        func_80C03ACC(this);
        return;
    }
    if ((((gSaveContext.weekEventReg[73] & 0x10) != 0) || ((gSaveContext.weekEventReg[85] & 2) != 0)) && (((temp_v0_2 = this->unk_2BE, (temp_v0_2 == 0)) && ((gSaveContext.weekEventReg[76] & 1) != 0)) || ((temp_v0_2 == 1) && ((gSaveContext.weekEventReg[76] & 2) != 0)) || ((temp_v0_2 == 2) && ((gSaveContext.weekEventReg[76] & 4) != 0)) || ((temp_v0_2 == 3) && ((gSaveContext.weekEventReg[76] & 8) != 0)) || ((temp_v0_2 == 4) && ((gSaveContext.weekEventReg[76] & 0x10) != 0)))) {
        if ((gSaveContext.weekEventReg[75] & 0x40) != 0) {
            if (temp_v0_2 == 0) {
                temp_v0_3 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x11C, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) (s32) this->actor.world.rot.y, (s16) 0, (s16) 0);
                if (temp_v0_3 != 0) {
                    temp_s0 = this->actor.cutscene;
                    phi_s0 = (s16) temp_s0;
                    phi_s1 = temp_v0_3;
                    if (temp_s0 != -1) {
                        do {
                            phi_s1->unk_2CC = phi_s0;
                            temp_v0_4 = ActorCutscene_GetAdditionalCutscene(phi_s0);
                            phi_s0 = temp_v0_4;
                            phi_s1 += 2;
                        } while (temp_v0_4 != -1);
                    }
                    temp_t9 = gSaveContext.weekEventReg[76] & 0xFE;
                    temp_t1 = temp_t9 & 0xFD;
                    gSaveContext.weekEventReg[76] = temp_t9;
                    temp_t3 = temp_t1 & 0xFB;
                    gSaveContext.weekEventReg[76] = temp_t1;
                    temp_t5 = temp_t3 & 0xF7;
                    gSaveContext.weekEventReg[76] = temp_t3;
                    gSaveContext.weekEventReg[76] = temp_t5;
                    gSaveContext.weekEventReg[76] = temp_t5 & 0xEF;
                }
            }
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        func_80C042F8(this);
        return;
    }
    Actor_MarkForDeath((Actor *) this);
}

void EnBombers_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBombers *this = (EnBombers *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_2C8);
}

void func_80C03824(EnBombers *arg0, s32 arg1, f32 arg2) {
    f32 temp_f0;
    s32 temp_v1;

    arg0->unk_2C4 = arg1;
    temp_f0 = (f32) SkelAnime_GetFrameCount(*(&D_80C0479C + (arg1 * 4)));
    temp_v1 = arg0->unk_2C4;
    arg0->unk_2B0 = temp_f0;
    SkelAnime_ChangeAnim(arg0 + 0x144, *(&D_80C0479C + (temp_v1 * 4)), arg2, 0.0f, temp_f0, (u8) (s32) *(&D_80C047E0 + temp_v1), -10.0f);
}

void func_80C038B4(Actor *arg0) {
    Actor *temp_s0_2;
    SkelAnime *temp_s0;

    temp_s0 = arg0 + 0x144;
    if ((arg0->unk_2C4 == 2) && ((func_801378B8(temp_s0, 9.0f) != 0) || (func_801378B8(temp_s0, 10.0f) != 0) || (func_801378B8(temp_s0, 17.0f) != 0) || (func_801378B8(temp_s0, 18.0f) != 0))) {
        Audio_PlayActorSound2(arg0, 0x292CU);
    }
    temp_s0_2 = arg0 + 0x144;
    if ((arg0->unk_2C4 == 0xF) && ((func_801378B8((SkelAnime *) temp_s0_2, 0.0f) != 0) || (func_801378B8((SkelAnime *) temp_s0_2, 2.0f) != 0) || (func_801378B8((SkelAnime *) temp_s0_2, 4.0f) != 0) || (func_801378B8((SkelAnime *) temp_s0_2, 6.0f) != 0))) {
        Audio_PlayActorSound2(arg0, 0x292CU);
    }
}

void func_80C039A8(EnBombers *arg0, GlobalContext *arg1) {
    s16 temp_v0_2;
    u8 temp_v0;
    u8 temp_v1;

    arg0->unk_2A6 = 5;
    temp_v1 = arg1->actorCtx.actorList[2].first->unk_14B;
    if (temp_v1 != 1) {
        if (temp_v1 != 2) {
            if (temp_v1 != 3) {
                if ((temp_v1 == 4) && (arg0->actor.textId = 0x73D, ((gSaveContext.weekEventReg[84] & 0x80) != 0))) {
                    arg0->actor.textId = 0x74B;
                    return;
                }
                /* Duplicate return node #21. Try simplifying control flow for better match */
                return;
            }
            temp_v0 = gSaveContext.weekEventReg[73];
            if ((temp_v0 & 0x20) != 0) {
                arg0->actor.textId = 0x75A;
                return;
            }
            if ((temp_v0 & 0x40) != 0) {
                temp_v0_2 = arg0->unk_2BE;
                arg0->actor.textId = 0x749;
                if (((temp_v0_2 == 1) && ((gSaveContext.weekEventReg[74] & 1) != 0)) || ((temp_v0_2 == 2) && ((gSaveContext.weekEventReg[74] & 2) != 0)) || ((temp_v0_2 == 3) && ((gSaveContext.weekEventReg[74] & 4) != 0)) || ((temp_v0_2 == 4) && ((gSaveContext.weekEventReg[74] & 8) != 0))) {
                    arg0->actor.textId = 0x74A;
                    return;
                }
                /* Duplicate return node #21. Try simplifying control flow for better match */
                return;
            }
            arg0->actor.textId = 0x744;
            return;
        }
        arg0->actor.textId = 0x73F;
        return;
    }
    arg0->actor.textId = 0x73E;
}

void func_80C03ACC(EnBombers *arg0) {
    arg0->unk_2C8.dim.radius = 0xA;
    arg0->unk_2C8.dim.height = 0x1E;
    arg0->unk_2C0 = 0;
    arg0->actionFunc = func_80C03AF4;
}

void func_80C03AF4(EnBombers *this, GlobalContext *globalCtx) {
    CollisionPoly *sp7C;
    f32 sp78;
    ? sp6C;
    f32 sp68;
    f32 sp60;
    f32 sp5C;
    f32 sp54;
    u32 sp48;
    PosRot *sp38;
    PosRot *temp_a0;
    PosRot *temp_a1;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v1;
    s16 phi_v0;
    s32 phi_v1;

    sp78 = this->unk_144.animCurrentFrame;
    temp_v0 = this->unk_2A0;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {

        } else {
            if (sp78 >= 0.0f) {
                this->unk_2A4 = Math_Vec3f_Yaw((Vec3f *) &this->actor.world, &this->unk_294);
                Math_SmoothStepToS(&this->actor.world.rot.y, this->unk_2A4, 0xA, 0x7D0, (s16) 0x14);
            }
            temp_a1 = &this->actor.world;
            temp_v1 = this->actor.world.rot.y - this->unk_2A4;
            phi_v0 = temp_v1;
            if ((s32) temp_v1 < 0) {
                phi_v0 = (s16) -(s32) temp_v1;
            }
            if (((s32) phi_v0 < 0x100) && (sp38 = temp_a1, Math_Vec3f_Copy((Vec3f *) &sp54, (Vec3f *) temp_a1), sp54 += Math_SinS(this->actor.world.rot.y) * 60.0f, sp5C += Math_CosS(this->actor.world.rot.y) * 60.0f, (func_800C55C4(&globalCtx->colCtx, (Vec3f *) temp_a1, (Vec3f *) &sp54, (Vec3f *) &sp6C, &sp7C, 1U, 0U, 0U, 1U, &sp48) != 0))) {
                this->unk_2A8 = 0;
                if (Rand_ZeroOne() < 0.5f) {
                    func_80C03824(this, 0x10, 1.0f);
                } else {
                    func_80C03824(this, 0, 1.0f);
                }
                this->unk_2A0 = 0;
                this->unk_2B4 = 0.0f;
            } else {
                temp_f12 = this->unk_294.x;
                temp_f2 = temp_f12 - this->actor.world.pos.x;
                temp_f14 = this->unk_294.z - this->actor.world.pos.z;
                if ((this->unk_2AA == 0) || (sqrtf((temp_f2 * temp_f2) + (temp_f14 * temp_f14)) < 4.0f)) {
                    this->unk_2A8 = Rand_S16Offset(0x14, 0x14);
                    if ((this->unk_2A8 & 1) == 0) {
                        func_80C03824(this, 0x10, 1.0f);
                    } else {
                        func_80C03824(this, 0, 1.0f);
                    }
                    this->unk_2A0 = 0;
                    this->unk_2B4 = 0.0f;
                } else if (sp78 >= 0.0f) {
                    Math_ApproachF((f32 *) &this->actor.world, temp_f12, 0.3f, this->unk_2B4);
                    Math_ApproachF(&this->actor.world.pos.z, this->unk_294.z, 0.3f, this->unk_2B4);
                    Math_ApproachF(&this->unk_2B4, 1.0f, 0.3f, 0.5f);
                }
            }
        }
    } else if (this->unk_2A8 == 0) {
        Math_Vec3f_Copy((Vec3f *) &sp60, (Vec3f *) &this->actor.home);
        sp60 += randPlusMinusPoint5Scaled(150.0f);
        temp_f0 = randPlusMinusPoint5Scaled(150.0f);
        temp_a0 = &this->actor.world;
        sp38 = temp_a0;
        sp68 += temp_f0;
        if ((s32) (s16) (this->actor.world.rot.y - Math_Vec3f_Yaw((Vec3f *) temp_a0, (Vec3f *) &sp60)) < 0) {
            phi_v1 = (s32) (s16) (this->actor.world.rot.y - Math_Vec3f_Yaw((Vec3f *) sp38, (Vec3f *) &sp60)) * -0x10000;
        } else {
            phi_v1 = (this->actor.world.rot.y - Math_Vec3f_Yaw((Vec3f *) temp_a0, (Vec3f *) &sp60)) << 0x10;
        }
        if (((phi_v1 >> 0x10) < 0x4000) && (func_800C55C4(&globalCtx->colCtx, (Vec3f *) sp38, (Vec3f *) &sp60, (Vec3f *) &sp6C, &sp7C, 1U, 0U, 0U, 1U, &sp48) == 0)) {
            func_80C03824(this, 2, 1.0f);
            Math_Vec3f_Copy(&this->unk_294, (Vec3f *) &sp60);
            this->unk_2AA = Rand_S16Offset(0x1E, 0x32);
            this->unk_2A0 += 1;
        }
    }
    if (Text_GetFaceReaction(globalCtx, 0x12U) == 0) {
        func_80C039A8(this, globalCtx);
    } else {
        this->unk_2A6 = 5;
        this->actor.textId = Text_GetFaceReaction(globalCtx, 0x12U);
    }
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->unk_2C8.dim.radius = 0x14;
        this->unk_2C8.dim.height = 0x3C;
        this->unk_2A4 = this->actor.yawTowardsPlayer;
        func_80C03F64(this);
        return;
    }
    func_800B8614((Actor *) this, globalCtx, 70.0f);
}

void func_80C03F64(EnBombers *arg0) {
    arg0->unk_2A4 = arg0->actor.yawTowardsPlayer;
    func_80C03824((EnBombers *)1, 0x3F800000);
    arg0->unk_2C0 = 1;
    arg0->actionFunc = func_80C03FAC;
}

void func_80C03FAC(EnBombers *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    s16 sp2A;
    s16 temp_v1_2;
    u16 temp_v0;
    u8 temp_v1;
    s16 phi_a1;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    Math_SmoothStepToS(&this->actor.world.rot.y, this->unk_2A4, 1, 0x1388, (s16) 0);
    temp_v1 = sp2C->unk_14B;
    if ((temp_v1 != 1) && (temp_v1 != 2)) {
        if (temp_v1 == 4) {
            this->unk_28E = -0xFA0;
        }
    } else {
        this->unk_28E = -0x1770;
    }
    if ((this->unk_2A6 == func_80152498(&globalCtx->msgCtx)) && (func_80147624(globalCtx) != 0)) {
        sp2A = 0;
        func_801477B4(globalCtx);
        temp_v0 = this->actor.textId;
        this->unk_2A6 = 5;
        phi_a1 = sp2A;
        if ((temp_v0 == 0x73D) || (temp_v0 == 0x73E) || (temp_v0 == 0x73F)) {
            this->actor.textId = 0x740;
            this->unk_2A6 = 4;
            phi_a1 = 1;
        } else if (temp_v0 == 0x740) {
            if (globalCtx->msgCtx.choiceIndex == 0) {
                func_8019F208();
                this->actor.textId = 0x742;
                phi_a1 = 1;
            } else {
                func_8019F230();
                this->actor.textId = 0x741;
                phi_a1 = 1;
            }
        } else if (temp_v0 == 0x742) {
            this->actor.textId = 0x737;
            phi_a1 = 1;
        } else if (temp_v0 == 0x737) {
            this->actor.textId = 0x743;
            phi_a1 = 1;
        } else if (temp_v0 == 0x74B) {
            this->actor.textId = 0x74C;
            this->unk_2A6 = 4;
            phi_a1 = 1;
        } else if (temp_v0 == 0x74C) {
            if (globalCtx->msgCtx.choiceIndex == 1) {
                func_8019F230();
                this->actor.textId = 0x737;
                phi_a1 = 1;
            } else {
                func_8019F208();
                this->actor.textId = 0x74D;
                func_80C03824(this, 0xE, 1.0f);
                phi_a1 = 1;
            }
        } else if (temp_v0 == 0x744) {
            if ((gSaveContext.day - 1) == 2) {
                this->actor.textId = 0x746;
                phi_a1 = 1;
            } else {
                this->actor.textId = 0x745;
                phi_a1 = 1;
            }
        } else if ((temp_v0 == 0x745) || (temp_v0 == 0x746)) {
            this->actor.textId = 0x747;
            phi_a1 = 1;
        } else if (temp_v0 == 0x747) {
            this->actor.textId = 0x748;
            phi_a1 = 1;
        } else if (temp_v0 == 0x748) {
            temp_v1_2 = this->unk_2BE;
            if (temp_v1_2 != 1) {
                if (temp_v1_2 != 2) {
                    if (temp_v1_2 != 3) {
                        if (temp_v1_2 != 4) {

                        } else {
                            gSaveContext.weekEventReg[74] |= 8;
                        }
                    } else {
                        gSaveContext.weekEventReg[74] |= 4;
                    }
                } else {
                    gSaveContext.weekEventReg[74] |= 2;
                }
            } else {
                gSaveContext.weekEventReg[74] |= 1;
            }
            gSaveContext.weekEventReg[73] |= 0x40;
        }
        if (phi_a1 != 0) {
            if (phi_a1 != 1) {
                return;
            }
            func_80151938(globalCtx, this->actor.textId);
            /* Duplicate return node #50. Try simplifying control flow for better match */
            return;
        }
        this->unk_28E = 0;
        func_80C03ACC(this, phi_a1);
    }
}

void func_80C042F8(EnBombers *arg0) {
    if (arg0->unk_2C4 != 6) {
        func_80C03824((EnBombers *)6, 0x3F800000);
    }
    arg0->actor.textId = 0x72D;
    arg0->unk_28E = 0x1F40;
    arg0->unk_2C0 = 2;
    arg0->actionFunc = func_80C04354;
}

void func_80C04354(EnBombers *this, GlobalContext *globalCtx) {
    Math_SmoothStepToS(&this->unk_288, this->unk_28E, 1, 0x3E8, (s16) 0);
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->unk_28E = 0;
        this->actionFunc = func_80C043C8;
        return;
    }
    func_800B8614((Actor *) this, globalCtx, 70.0f);
}

void func_80C043C8(EnBombers *this, GlobalContext *globalCtx) {
    Math_SmoothStepToS(&this->unk_288, this->unk_28E, 1, 0x3E8, (s16) 0);
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        func_801477B4(globalCtx);
        func_80C042F8(this);
    }
}

void EnBombers_Update(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    EnBombers *this = (EnBombers *) thisx;

    temp_v0 = this->unk_2AA;
    if (temp_v0 != 0) {
        this->unk_2AA = temp_v0 - 1;
    }
    temp_v0_2 = this->unk_2A8;
    if (temp_v0_2 != 0) {
        this->unk_2A8 = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk_2AC;
    if (temp_v0_3 != 0) {
        this->unk_2AC = temp_v0_3 - 1;
    }
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    this->actor.shape.rot.y = this->actor.world.rot.y;
    func_80C038B4((Actor *) this);
    Actor_SetHeight((Actor *) this, 20.0f);
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Math_SmoothStepToS(&this->unk_28A, this->unk_290, 1, 0x1388, (s16) 0);
    Math_SmoothStepToS(&this->unk_288, this->unk_28E, 1, 0x1388, (s16) 0);
    if (this->unk_2BA == 0) {
        this->unk_2B8 += 1;
        if ((s32) this->unk_2B8 >= 3) {
            this->unk_2B8 = 0;
            this->unk_2BA = (s32) Rand_ZeroFloat(60.0f) + 0x14;
        }
    }
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 50.0f, 0x1DU);
    temp_a2 = &this->unk_2C8;
    this->actor.uncullZoneForward = 500.0f;
    sp2C = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
}

s32 func_80C045B4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0xF) {
        *arg2 = NULL;
    }
    if (arg1 == 0x11) {
        arg4->x += arg5->unk_28A;
        arg4->z += arg5->unk_288;
    }
    if (arg1 == 0x13) {
        *arg2 = NULL;
    }
    return 0;
}

void EnBombers_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp38;
    Gfx *sp34;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    EnBombers *this = (EnBombers *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp38 = temp_v0;
    sp38->words.w1 = Lib_SegmentedToVirtual(*(&D_80C0482C + (this->unk_2B8 * 4)));
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp34 = temp_v0_2;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_80C04838 + (this->unk_2BE * 4)));
    temp_v0_3 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060028;
    sp30 = temp_v0_3;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80C04818 + (this->unk_2BE * 4)));
    Scene_SetRenderModeXlu(globalCtx, 0, 1U);
    SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80C045B4, NULL, (Actor *) this);
}
