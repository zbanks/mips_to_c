typedef struct ObjChan {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(ObjChan *, GlobalContext *);
    /* 0x148 */ ColliderCylinder unk_148;           /* inferred */
    /* 0x194 */ u8 unk_194;                         /* inferred */
    /* 0x195 */ char pad_195[0x1];
    /* 0x196 */ s16 unk_196;                        /* inferred */
    /* 0x198 */ char pad_198[0x12];                 /* maybe part of unk_196[10]? */
    /* 0x1AA */ u8 unk_1AA;                         /* inferred */
    /* 0x1AB */ char pad_1AB[0x1];
    /* 0x1AC */ void *unk_1AC;                      /* inferred */
    /* 0x1B0 */ char pad_1B0[0x10];                 /* maybe part of unk_1AC[5]? */
    /* 0x1C0 */ Vec3f unk_1C0;                      /* inferred */
    /* 0x1CC */ f32 unk_1CC;                        /* inferred */
    /* 0x1D0 */ f32 unk_1D0;                        /* inferred */
    /* 0x1D4 */ s16 unk_1D4;                        /* inferred */
    /* 0x1D6 */ char pad_1D6[0x2];
    /* 0x1D8 */ f32 unk_1D8;                        /* inferred */
    /* 0x1DC */ s16 unk_1DC;                        /* inferred */
    /* 0x1DE */ s16 unk_1DE;                        /* inferred */
    /* 0x1E0 */ s16 unk_1E0;                        /* inferred */
    /* 0x1E2 */ char pad_1E2[0x2];
} ObjChan;                                          /* size = 0x1E4 */

struct _mips2c_stack_ObjChan_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjChan_Draw {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_ObjChan_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_ObjChan_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BB9A1C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BB9B40 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BB9C08 {
    /* 0x00 */ char pad_0[0x84];
    /* 0x84 */ ? sp84;                              /* inferred */
    /* 0x84 */ char pad_84[0x4];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ char pad_8C[0x4];
    /* 0x90 */ u32 sp90;                            /* inferred */
    /* 0x94 */ CollisionPoly *sp94;                 /* inferred */
    /* 0x98 */ s16 sp98;                            /* inferred */
    /* 0x9A */ s16 sp9A;                            /* inferred */
    /* 0x9C */ s16 sp9C;                            /* inferred */
    /* 0x9E */ char pad_9E[0x2];
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ char pad_AC[0xC];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_80BB9F24 {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ PosRot *sp48;                        /* inferred */
    /* 0x4C */ char pad_4C[0xC];                    /* maybe part of sp48[4]? */
    /* 0x58 */ ? sp58;                              /* inferred */
    /* 0x58 */ char pad_58[0x8];
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x14];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_80BBA2FC {};              /* size 0x0 */

struct _mips2c_stack_func_80BBA314 {
    /* 0x00 */ char pad_0[0x4C];
    /* 0x4C */ s32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80BBA488 {
    /* 0x00 */ char pad_0[0xA4];
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ char pad_AC[0x24];                   /* maybe part of spA8[10]? */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ f32 spDC;                            /* inferred */
    /* 0xE0 */ f32 spE0;                            /* inferred */
    /* 0xE4 */ f32 spE4;                            /* inferred */
    /* 0xE8 */ char pad_E8[0x8];
};                                                  /* size = 0xF0 */

struct _mips2c_stack_func_80BBA894 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ GraphicsContext *sp18;               /* inferred */
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BBA930 {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ GraphicsContext *sp44;               /* inferred */
    /* 0x48 */ Gfx *sp48;                           /* inferred */
    /* 0x4C */ s32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

? func_80BB9A1C(Actor *arg0, f32 arg1);             /* static */
void func_80BB9B40(f32 *arg0, Vec3s *arg1, Vec3f *arg2, Vec3s *arg3, s16 arg4); /* static */
void func_80BB9C08(ObjChan *arg0, GlobalContext *arg1); /* static */
void func_80BBA2FC(ObjChan *arg0, GlobalContext *arg1); /* static */
void func_80BBA488(ObjChan *arg0, GlobalContext *arg1); /* static */
void func_80BBA894(Actor *this, GlobalContext *globalCtx); /* static */
void func_80BBA930(ObjChan *arg0, GlobalContext *arg1); /* static */
extern ? D_06000A10;
extern ? D_06000AF0;
extern Gfx D_06001960;
extern ? D_06002358;
static ColliderCylinderInit D_80BBAB30 = {
    {0xC, 0, 9, 0, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0},
    {0x30, 0x4C, 0xFFC4, {0, 0, 0}},
};
static InitChainEntry D_80BBAB5C;                   /* unable to generate initializer */
static ? D_80BBAB60;                                /* unable to generate initializer */
static ? D_80BBAB78;                                /* unable to generate initializer */
static s32 D_80BBAC90;

void ObjChan_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    s16 temp_t2;
    s32 temp_v0;
    ObjChan *this = (ObjChan *) thisx;

    if ((((s32) this->actor.params >> 0xC) & 0xF) == 0) {
        if (D_80BBAC90 != 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->actor.room = -1;
        D_80BBAC90 = 1;
        goto block_4;
    }
block_4:
    Actor_ProcessInitChain((Actor *) this, &D_80BBAB5C);
    temp_a1 = &this->unk_148;
    sp20 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80BBAB30);
    func_8013E3B8((Actor *) this, (s16 []) &this->unk_1E0, 2);
    temp_v0 = ((s32) this->actor.params >> 0xC) & 0xF;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            return;
        }
        this->actor.draw = func_80BBA894;
        func_80BBA2FC(this, globalCtx);
        return;
    }
    temp_t2 = this->actor.shape.rot.y;
    this->actor.shape.rot.y = 0;
    this->unk_1DE = temp_t2;
    func_80BB9C08(this, globalCtx);
}

void ObjChan_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjChan *this = (ObjChan *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_148);
}

? func_80BB9A1C(Actor *arg0, f32 arg1) {
    f32 sp24;
    f32 sp20;
    f32 temp_f6;
    s32 temp_cond;

    sp20 = Math_SinS(arg0->unk_1D4) * arg0->unk_1D0;
    temp_f6 = (Math_CosS(arg0->unk_1D4) * 0.03834952f * arg0->unk_1D0) + arg1;
    temp_cond = temp_f6 == 0.0f;
    sp24 = temp_f6;
    if (!temp_cond) {
        arg0->unk_1D4 = (s16) (s32) (func_80086B30(sp20 * 0.03834952f, temp_f6) * 10430.378f);
    } else if (sp20 >= 0.0f) {
        arg0->unk_1D4 = 0x4000;
    } else {
        arg0->unk_1D4 = -0x4000;
    }
    if (Math_CosS(arg0->unk_1D4) != 0.0f) {
        arg0->unk_1D0 = (f32) (sp24 / (Math_CosS(arg0->unk_1D4) * 0.03834952f));
    } else {
        arg0->unk_1D0 = sp20;
    }
    return 0;
}

void func_80BB9B40(f32 *arg0, Vec3s *arg1, Vec3f *arg2, Vec3s *arg3, s16 arg4) {
    f32 sp1C;

    Matrix_RotateY(arg3->y, 0U);
    SysMatrix_InsertXRotation_s(arg3->x, 1);
    SysMatrix_InsertZRotation_s(arg3->z, 1);
    Matrix_RotateY(arg4, 1U);
    SysMatrix_GetStateTranslationAndScaledX(-280.0f, (Vec3f *) &sp1C);
    arg0->unk_0 = arg2->x + sp1C;
    arg0->unk_4 = (f32) (arg2->y + sp20);
    arg0->unk_8 = (f32) (arg2->z + sp24);
    Math_Vec3s_Copy(arg1, arg3);
    arg1->y += arg4;
}

void func_80BB9C08(Actor *arg0, GlobalContext *arg1) {
    f32 spA0;
    s16 sp98;
    CollisionPoly *sp94;
    u32 sp90;
    f32 sp88;
    ? sp84;
    Actor *temp_v0;
    Vec3f *temp_s0;
    Vec3f *temp_s4;
    s32 temp_a0;
    s32 temp_s0_2;
    u8 temp_t7;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    s8 phi_s0;
    u32 *phi_v1;
    s32 phi_a0;

    temp_s0 = arg0 + 0x1C0;
    temp_s4 = arg0 + 0x24;
    Math_Vec3f_Copy(temp_s0, temp_s4);
    Math_Vec3f_Copy((Vec3f *) &sp84, temp_s4);
    sp88 += 1600.0f;
    phi_s0 = 0;
    if (func_800C55C4(arg1 + 0x830, temp_s4, (Vec3f *) &sp84, temp_s0, &sp94, 0U, 0U, 1U, 1U, &sp90) != 0) {
        arg0->unk_1CC = (f32) (arg0->world.pos.y - arg0->unk_1C4);
        do {
            func_80BB9B40(&spA0, (Vec3s *) &sp98, temp_s4, arg0 + 0xBC, (s16) ((s32) ((((f32) phi_s0 * 360.0f) / 5.0f) * 182.04445f) + arg0->unk_1DE));
            temp_v0 = Actor_SpawnAsChildAndCutscene(arg1 + 0x1CA0, arg1, 0x240, spA0, spA4, spA8, (s16) (s32) sp98, (s16) (s32) sp9A, (s16) (s32) sp9C, (arg0->params & 0xFFF) | 0x1000, (u32) arg0->cutscene, (s32) arg0->unk20, arg0);
            if (temp_v0 != 0) {
                (arg0 + (phi_s0 * 4))->unk_1AC = temp_v0;
                temp_v0->unk_194 = phi_s0;
                temp_v0->cutscene = arg0->cutscene;
            } else {
                Actor_MarkForDeath(arg0);
            }
            temp_s0_2 = phi_s0 + 1;
            phi_s0 = (s8) temp_s0_2;
        } while (temp_s0_2 < 5);
        if (Flags_GetSwitch(arg1, arg0->params & 0x7F) != 0) {
            temp_v0_2 = arg0->unk_1AC;
            temp_t7 = arg0->unk_1AA | 1;
            arg0->unk_1AA = temp_t7;
            arg0->unk_1AA = (u8) (temp_t7 | 2);
            arg0->unk_1DC = 0x16C;
            arg0->unk_1D8 = 1.0f;
            if (temp_v0_2 != 0) {
                temp_v0_2->unk_1AA = (u8) (temp_v0_2->unk_1AA | 1);
                temp_v0_3 = arg0->unk_1AC;
                temp_v0_3->unk_1AA = (u8) (temp_v0_3->unk_1AA | 2);
                arg0->unk_1AC->unk_1D8 = 1.0f;
            }
            phi_v1 = &arg0->flags;
            phi_a0 = 4;
            do {
                temp_v0_4 = phi_v1->unk_1AC;
                temp_a0 = phi_a0 + 8;
                phi_a0 = temp_a0;
                if (temp_v0_4 != 0) {
                    temp_v0_4->unk_1AA = (u8) (temp_v0_4->unk_1AA | 1);
                    temp_v0_5 = phi_v1->unk_1AC;
                    temp_v0_5->unk_1AA = (u8) (temp_v0_5->unk_1AA | 2);
                    phi_v1->unk_1AC->unk_1D8 = 1.0f;
                }
                temp_v0_6 = phi_v1->unk_1B0;
                if (temp_v0_6 != 0) {
                    temp_v0_6->unk_1AA = (u8) (temp_v0_6->unk_1AA | 1);
                    temp_v0_7 = phi_v1->unk_1B0;
                    temp_v0_7->unk_1AA = (u8) (temp_v0_7->unk_1AA | 2);
                    phi_v1->unk_1B0->unk_1D8 = 1.0f;
                }
                phi_v1 += 8;
            } while (temp_a0 != 0x14);
        }
        arg0->unk_188 = 0x2D;
        arg0->unk_18A = 0x3C;
        arg0->unk_18C = -0x14;
        arg0->unk_144 = func_80BB9F24;
        return;
    }
    Actor_MarkForDeath(arg0);
}

void func_80BB9F24(ObjChan *this, GlobalContext *globalCtx) {
    f32 sp60;
    ? sp58;
    PosRot *sp48;
    ActorShape *temp_s4;
    PosRot *temp_a1;
    Vec3f *temp_s3;
    f32 temp_f0;
    s32 temp_s2;
    s32 temp_s2_2;
    u8 temp_t0;
    u8 temp_t2;
    u8 temp_t4;
    u8 temp_v0;
    void *temp_s0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    ObjChan *phi_s1;
    s32 phi_s2;
    u32 *phi_s1_2;
    s32 phi_s2_2;

    temp_f0 = this->unk_1D0;
    if (temp_f0 > 0.0f) {
        this->unk_1D4 += 0x190;
        if (temp_f0 <= 400.0f) {
            this->unk_1D0 = temp_f0 * 0.99f;
        } else {
            this->unk_1D0 = temp_f0 - 1.0f;
        }
        if (this->unk_1D0 < 0.0f) {
            this->unk_1D4 = 0;
            this->unk_1D0 = 0.0f;
        }
    }
    this->actor.shape.rot.z = (s16) (s32) (Math_SinS(this->unk_1D4) * this->unk_1D0);
    if (((this->unk_1AA & 4) != 0) && (func_8013E2D4((Actor *) this, this->unk_1E0, -1, 0) != 0)) {
        temp_t4 = this->unk_1AA | 8;
        this->unk_1AA = temp_t4;
        this->unk_1AA = temp_t4 & 0xFFFB;
    }
    temp_v0 = this->unk_1AA;
    if (((temp_v0 & 8) != 0) && (this->unk_1DC == 0x16C)) {
        this->unk_1AA = temp_v0 & 0xFFF7;
        ActorCutscene_Stop(this->unk_1E0);
    }
    Matrix_RotateY(this->actor.shape.rot.y, 0U);
    SysMatrix_InsertXRotation_s(this->actor.shape.rot.x, 1);
    SysMatrix_InsertZRotation_s(this->actor.shape.rot.z, 1);
    Matrix_RotateY(this->unk_1DE, 1U);
    temp_a1 = &this->actor.world;
    sp48 = temp_a1;
    SysMatrix_GetStateTranslationAndScaledY(this->unk_1CC, (Vec3f *) temp_a1);
    Math_Vec3f_Sum((Vec3f *) sp48, &this->unk_1C0, (Vec3f *) sp48);
    Collider_UpdateCylinder((Actor *) this, &this->unk_148);
    phi_s1 = this;
    phi_s2 = 0;
    do {
        temp_s0 = phi_s1->unk_1AC;
        if (temp_s0 != 0) {
            temp_s4 = &this->actor.shape;
            func_80BB9B40(&sp60, (Vec3s *) &sp58, (Vec3f *) sp48, (Vec3s *) temp_s4, (s16) ((s32) ((((f32) phi_s2 * 360.0f) / 5.0f) * 182.04445f) + this->unk_1DE));
            temp_s3 = temp_s0 + 0x24;
            Math_Vec3f_Copy(temp_s3, (Vec3f *) &sp60);
            Math_Vec3s_Copy(temp_s0 + 0xBC, (Vec3s *) temp_s4);
            temp_s0->unk_BE = (s16) this->unk_1DE;
            Math_Vec3f_ToVec3s(temp_s0 + 0x18E, temp_s3);
        }
        temp_s2 = phi_s2 + 1;
        phi_s1 += 4;
        phi_s2 = temp_s2;
    } while (temp_s2 < 5);
    if (((this->unk_148.base.acFlags & 2) != 0) && ((this->unk_148.info.acHitInfo->toucher.dmgFlags & 0x800) != 0)) {
        Actor_SetSwitchFlag(globalCtx, this->actor.params & 0x7F);
    }
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        if ((this->unk_1AA & 1) == 0) {
            temp_v1 = this->unk_1AC;
            this->unk_1DC = 0;
            this->unk_1D8 = 0.0f;
            if (temp_v1 != 0) {
                temp_v1->unk_1AA = (u8) (temp_v1->unk_1AA | 1);
                this->unk_1AC->unk_196 = 0x14;
                this->unk_1AC->unk_1D8 = 0.0f;
            }
            phi_s1_2 = &this->actor.flags;
            phi_s2_2 = 1;
            do {
                temp_v0_2 = phi_s1_2->unk_1AC;
                if (temp_v0_2 != 0) {
                    temp_v0_2->unk_1AA = (u8) (temp_v0_2->unk_1AA | 1);
                    phi_s1_2->unk_1AC->unk_196 = (s16) ((phi_s2_2 * 5) + 0x14);
                    phi_s1_2->unk_1AC->unk_1D8 = 0.0f;
                }
                temp_v0_3 = phi_s1_2->unk_1B0;
                if (temp_v0_3 != 0) {
                    temp_v0_3->unk_1AA = (u8) (temp_v0_3->unk_1AA | 1);
                    phi_s1_2->unk_1B0->unk_196 = (s16) ((phi_s2_2 * 5) + 0x19);
                    phi_s1_2->unk_1B0->unk_1D8 = 0.0f;
                }
                temp_s2_2 = phi_s2_2 + 2;
                phi_s1_2 += 8;
                phi_s2_2 = temp_s2_2;
            } while (temp_s2_2 != 5);
            temp_t0 = this->unk_1AA | 1;
            temp_t2 = temp_t0 | 2;
            this->unk_1AA = temp_t0;
            this->unk_1AA = temp_t2;
            this->unk_1AA = temp_t2 | 4;
            return;
        }
        Math_StepToF(&this->unk_1D8, 1.0f, 0.05f);
        this->unk_1DE += this->unk_1DC;
        Math_StepToS(&this->unk_1DC, 0x16C, 5);
        func_800B9010((Actor *) this, 0x2177U);
        /* Duplicate return node #31. Try simplifying control flow for better match */
    }
}

void func_80BBA2FC(ObjChan *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80BBA314;
}

void func_80BBA314(ObjChan *this, GlobalContext *globalCtx) {
    s32 sp4C;
    u8 temp_v0;
    u8 temp_v0_2;
    s32 phi_v1;

    phi_v1 = 0;
    if (((this->unk_148.base.acFlags & 2) != 0) && ((this->unk_148.info.acHitInfo->toucher.dmgFlags & 0x4004000) != 0)) {
        phi_v1 = 1;
    }
    temp_v0 = this->unk_1AA;
    if ((temp_v0 & 2) != 0) {
        sp4C = phi_v1;
        Math_StepToF(&this->unk_1D8, 1.0f, 0.05f);
    } else if ((temp_v0 & 1) != 0) {
        this->unk_196 += -1;
        if ((s32) this->unk_196 <= 0) {
            this->unk_1AA |= 2;
        }
    }
    if (phi_v1 != 0) {
        func_80BBA488(this, globalCtx);
        (this->actor.parent + (this->unk_194 * 4))->unk_1AC = 0;
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x14, 0x2978U);
        func_80BB9A1C(this->actor.parent, 40.0f);
        if (this->unk_194 == 4) {
            temp_v0_2 = gSaveContext.weekEventReg[37];
            if ((temp_v0_2 & 0x10) == 0) {
                gSaveContext.weekEventReg[37] = temp_v0_2 | 0x10;
                Actor_SpawnAsChildAndCutscene(&globalCtx->actorCtx, globalCtx, 0xB9, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, 0x8000, (u32) this->actor.cutscene, (s32) this->actor.unk20, NULL);
            }
        }
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_80BBA488(ObjChan *arg0, GlobalContext *arg1) {
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spA8;
    f32 spA4;
    Vec3f *temp_s3;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    s32 temp_s2;
    s16 phi_s1;
    s32 phi_s0;
    s32 phi_s2;

    spA4 = 110.0f + (f32) 0;
    spA8 = (f32) 0 + 15.0f;
    temp_s3 = arg0 + 0x24;
    temp_s5 = &spD0;
    temp_s4 = &spDC;
    phi_s1 = 0;
    phi_s2 = 0;
    do {
        temp_f20 = Math_SinS(phi_s1);
        temp_f22 = Math_CosS(phi_s1);
        spDC = temp_f20 * 8.0f;
        temp_f18 = (Rand_ZeroOne() * 12.0f) + 2.0f;
        spE4 = temp_f22 * 8.0f;
        spE0 = temp_f18;
        spD0 = spDC * 0.23f;
        temp_f16 = (Rand_ZeroOne() * 5.0f) + 2.5f;
        spD8 = spE4 * 0.23f;
        spD4 = temp_f16;
        temp_f0 = Rand_ZeroOne();
        if (temp_f0 < 0.2f) {
            phi_s0 = 0x60;
        } else {
            phi_s0 = 0x20;
            if (temp_f0 < 0.6f) {
                phi_s0 = 0x40;
            }
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s4, (Vec3f *) temp_s5, temp_s3, (s16) -0x104, (s16) phi_s0, (s16) 0x14, (s16) 0, (s16) 0, (s16) (s32) (spA8 + (Rand_ZeroOne() * spA4)), (s16) 0, (s16) 0, 0x32, (s16) -1, (s16) 0xF9, &D_06001960);
        temp_s2 = phi_s2 + 1;
        phi_s1 = (s16) (phi_s1 + 0x4E20);
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x12);
    func_800BBFB0(arg1, temp_s3, 30.0f, 2, (s16) 0x14, (s16) 0x32, (u8) 1);
    func_800BBFB0(arg1, temp_s3, 30.0f, 2, (s16) 0xA, (s16) 0x50, (u8) 1);
}

void ObjChan_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjChan *temp_a3;
    ObjChan *this = (ObjChan *) thisx;

    temp_a3 = this;
    this = temp_a3;
    temp_a3->actionFunc(temp_a3, globalCtx);
    CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_148);
}

void ObjChan_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp24;
    Gfx *sp20;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_s0;
    ObjChan *this = (ObjChan *) thisx;

    temp_s0 = globalCtx->state.gfxCtx;
    Matrix_RotateY(this->unk_1DE, 1U);
    temp_v1 = Gfx_CallSetupDL(temp_s0->polyOpa.p, 0x19U);
    temp_v1->words.w0 = 0xDA380003;
    sp24 = temp_v1;
    temp_v1->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v1->unk_C = &D_06000AF0;
    temp_v1->unk_8 = 0xDE000000;
    temp_s0->polyOpa.p = temp_v1 + 0x10;
    temp_v1_2 = func_8012C2B4(temp_s0->polyXlu.p);
    temp_v1_2->words.w0 = 0xDA380003;
    sp20 = temp_v1_2;
    temp_v1_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v1_2->unk_C = &D_06000A10;
    temp_v1_2->unk_8 = 0xDE000000;
    temp_s0->polyXlu.p = temp_v1_2 + 0x10;
    SysMatrix_StatePush();
    if ((this->unk_1AA & 2) != 0) {
        func_80BBA930(this, globalCtx);
    }
    SysMatrix_StatePop();
}

void func_80BBA894(Actor *this, GlobalContext *globalCtx) {
    Gfx *sp1C;
    GraphicsContext *sp18;
    Gfx *temp_v1;
    GraphicsContext *temp_v0;

    temp_v0 = globalCtx->state.gfxCtx;
    sp18 = temp_v0;
    temp_v1 = Gfx_CallSetupDL(temp_v0->polyOpa.p, 0x19U);
    temp_v1->words.w0 = 0xDA380003;
    sp1C = temp_v1;
    temp_v1->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v1->unk_C = &D_06002358;
    temp_v1->unk_8 = 0xDE000000;
    sp18->polyOpa.p = temp_v1 + 0x10;
    if ((this->unk_1AA & 2) != 0) {
        func_80BBA930((ObjChan *) this, globalCtx);
    }
}

void func_80BBA930(ObjChan *arg0, GlobalContext *arg1) {
    s32 sp4C;
    Gfx *sp48;
    GraphicsContext *sp44;
    Gfx *temp_v1;
    f32 temp_f0;
    void *temp_v0;

    sp44 = arg1->state.gfxCtx;
    sp4C = arg1->gameplayFrames;
    Matrix_RotateY((s16) (((func_800DFCDC((arg1 + (arg1->activeCamera * 4))->unk_800) - arg0->actor.shape.rot.y) - arg0->unk_1DE) + 0x8000), 1U);
    temp_v0 = ((((s32) arg0->actor.params >> 0xC) & 0xF) * 0xC) + &D_80BBAB60;
    temp_f0 = arg0->unk_1D8;
    Matrix_Scale(temp_v0->unk_0 * temp_f0, temp_v0->unk_4 * temp_f0, 1.0f, 1);
    SysMatrix_InsertTranslation(0.0f, *(&D_80BBAB78 + ((((s32) arg0->actor.params >> 0xC) & 0xF) * 4)), 0.0f, 1);
    temp_v1 = func_8012C2B4(sp44->polyXlu.p);
    temp_v1->words.w0 = 0xDA380003;
    sp48 = temp_v1;
    temp_v1->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    temp_v1->unk_8 = 0xDB060020;
    sp48 = temp_v1;
    temp_v1->unk_C = Gfx_TwoTexScroll(arg1->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, sp4C * -0x14, 0x20, 0x80);
    temp_v1->unk_14 = 0xFFFF00FF;
    temp_v1->unk_10 = 0xFA008080;
    temp_v1->unk_1C = 0xFF000000;
    temp_v1->unk_18 = 0xFB000000;
    temp_v1->unk_20 = 0xDE000000;
    temp_v1->unk_24 = D_0407D590;
    sp44->polyXlu.p = temp_v1 + 0x28;
}
