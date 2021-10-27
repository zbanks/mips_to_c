typedef struct DmAh {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ void (*actionFunc)(DmAh *, GlobalContext *);
    /* 0x18C */ char pad_18C[0x24];                 /* maybe part of actionFunc[10]? */
    /* 0x1B0 */ Vec3s unk_1B0;                      /* inferred */
    /* 0x1B6 */ char pad_1B6[0x60];                 /* maybe part of unk_1B0[17]? */
    /* 0x216 */ Vec3s unk_216;                      /* inferred */
    /* 0x21C */ char pad_21C[0x60];                 /* maybe part of unk_216[17]? */
    /* 0x27C */ u16 unk_27C;                        /* inferred */
    /* 0x27E */ u8 unk_27E;                         /* inferred */
    /* 0x27F */ char pad_27F[0x1];
    /* 0x280 */ Actor *unk_280;                     /* inferred */
    /* 0x284 */ s16 unk_284;                        /* inferred */
    /* 0x286 */ char pad_286[0xE];                  /* maybe part of unk_284[8]? */
    /* 0x294 */ s32 unk_294;                        /* inferred */
    /* 0x298 */ s32 unk_298;                        /* inferred */
    /* 0x29C */ s32 unk_29C;                        /* inferred */
} DmAh;                                             /* size = 0x2A0 */

struct _mips2c_stack_DmAh_Destroy {};               /* size 0x0 */

struct _mips2c_stack_DmAh_Draw {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ GraphicsContext *sp40;               /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_DmAh_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_DmAh_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C1D410 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C1D458 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C1D4D0 {
    /* 0x00 */ char pad_0[0x32];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80C1D6E0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C1D78C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C1D7FC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ u32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x14];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80C1D92C {};              /* size 0x0 */

struct _mips2c_stack_func_80C1DAD4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C1DB24 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

? func_8013AD9C(s16, s16, void *, void *, s32, s32); /* extern */
s32 func_80C1D410(DmAh *arg0, s32 arg1, u32, DmAh *); /* static */
void func_80C1D458(DmAh *arg0);                     /* static */
? func_80C1D4D0(void *arg0, ? arg1);                /* static */
? func_80C1D6E0(DmAh *arg0, GlobalContext *);       /* static */
Actor *func_80C1D78C(GlobalContext *arg0);          /* static */
void func_80C1DAD4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80C1DB24(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern FlexSkeletonHeader D_06009E70;
static ActorAnimationEntryS D_80C1DDE0[2] = {
    {(AnimationHeader *)0x6001860, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6000DDC, 1.0f, 0, 0xFFFF, 0, 0},
};
static ? D_80C1DE00;                                /* unable to generate initializer */
static Vec3f D_80C1DE14 = {1000.0f, 0.0f, 0.0f};
static void *D_80C1DE20[2] = {(void *)0x6008D70, (void *)0x6009570};
static ? D_80C1DE28;                                /* unable to generate initializer */

s32 func_80C1D410(DmAh *arg0, s32 arg1) {
    s32 phi_v1;

    phi_v1 = 0;
    if (arg1 != arg0->unk_294) {
        arg0->unk_294 = arg1;
        phi_v1 = func_8013BC6C(arg0 + 0x144, D_80C1DDE0, arg1);
    }
    return phi_v1;
}

void func_80C1D458(DmAh *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk_286;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_286 = temp_v0 - 1;
        phi_v1 = arg0->unk_286;
    }
    if (phi_v1 == 0) {
        arg0->unk_284 += 1;
        if ((s32) arg0->unk_284 >= 4) {
            arg0 = arg0;
            arg0->unk_286 = Rand_S16Offset(0x1E, 0x1E);
            arg0->unk_284 = 0;
        }
    }
}

? func_80C1D4D0(void *arg0, ? arg1) {
    f32 sp44;
    ? sp40;
    ? sp34;
    s16 sp32;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    void *temp_v0_2;
    s16 phi_v0;
    s16 phi_v0_2;
    s16 phi_v0_3;
    s16 phi_v0_4;

    Math_Vec3f_Copy((Vec3f *) &sp40, arg0->unk_280 + 0x24);
    Math_Vec3f_Copy((Vec3f *) &sp34, arg0 + 0x24);
    temp_v0 = Math_Vec3f_Yaw((Vec3f *) &sp34, (Vec3f *) &sp40);
    sp32 = temp_v0;
    Math_ApproachS(arg0 + 0x28C, (s16) ((temp_v0 - arg0->unk_290) - arg0->unk_BE), 4, 0x2AA8);
    temp_v1 = arg0->unk_28C;
    if ((s32) temp_v1 < -0x1FFE) {
        arg0->unk_28C = -0x1FFE;
    } else {
        phi_v0 = temp_v1;
        if ((s32) temp_v1 >= 0x1FFF) {
            phi_v0 = 0x1FFE;
        }
        arg0->unk_28C = phi_v0;
    }
    Math_ApproachS(arg0 + 0x290, (s16) ((sp32 - arg0->unk_28C) - arg0->unk_BE), 4, 0x2AA8);
    temp_v1_2 = arg0->unk_290;
    if ((s32) temp_v1_2 < -0x1C70) {
        arg0->unk_290 = -0x1C70;
    } else {
        phi_v0_2 = temp_v1_2;
        if ((s32) temp_v1_2 >= 0x1C71) {
            phi_v0_2 = 0x1C70;
        }
        arg0->unk_290 = phi_v0_2;
    }
    temp_v0_2 = arg0->unk_280;
    if (temp_v0_2->unk_0 == 0) {
        sp44 = temp_v0_2->unk_C44 + 3.0f;
    } else {
        Math_Vec3f_Copy((Vec3f *) &sp40, temp_v0_2 + 0x3C);
    }
    Math_Vec3f_Copy((Vec3f *) &sp34, arg0 + 0x3C);
    Math_ApproachS(arg0 + 0x28A, (s16) (Math_Vec3f_Pitch((Vec3f *) &sp34, (Vec3f *) &sp40) - arg0->unk_28E), 4, 0x2AA8);
    temp_v1_3 = arg0->unk_28A;
    if ((s32) temp_v1_3 < -0x1C70) {
        arg0->unk_28A = -0x1C70;
    } else {
        phi_v0_3 = temp_v1_3;
        if ((s32) temp_v1_3 >= 0x1C71) {
            phi_v0_3 = 0x1C70;
        }
        arg0->unk_28A = phi_v0_3;
    }
    Math_ApproachS(arg0 + 0x28E, (s16) (Math_Vec3f_Pitch((Vec3f *) &sp34, (Vec3f *) &sp40) - arg0->unk_28A), 4, 0x2AA8);
    temp_v1_4 = arg0->unk_28E;
    if ((s32) temp_v1_4 < -0x1C70) {
        arg0->unk_28E = -0x1C70;
    } else {
        phi_v0_4 = temp_v1_4;
        if ((s32) temp_v1_4 >= 0x1C71) {
            phi_v0_4 = 0x1C70;
        }
        arg0->unk_28E = phi_v0_4;
    }
    return 1;
}

? func_80C1D6E0(DmAh *arg0) {
    s16 temp_v0_2;
    u16 temp_t0;
    u16 temp_t9;
    u16 temp_v0;
    s16 phi_v1;

    if (arg0->unk_280 != 0) {
        func_80C1D4D0();
        temp_t9 = arg0->unk_27C & 0xFFFE;
        temp_t0 = temp_t9 | 2;
        arg0->unk_27C = temp_t9;
        arg0->unk_27C = temp_t0;
    } else {
        temp_v0 = arg0->unk_27C;
        if ((temp_v0 & 2) != 0) {
            arg0->unk_27C = temp_v0 & 0xFFFD;
            arg0->unk_28A = 0;
            arg0->unk_28C = 0;
            arg0->unk_28E = 0;
            arg0->unk_290 = 0;
            arg0->unk_288 = 0x14;
        } else {
            temp_v0_2 = arg0->unk_288;
            if (temp_v0_2 == 0) {
                phi_v1 = 0;
            } else {
                arg0->unk_288 = temp_v0_2 - 1;
                phi_v1 = arg0->unk_288;
            }
            if (phi_v1 == 0) {
                arg0->unk_27C |= 1;
            }
        }
    }
    return 1;
}

Actor *func_80C1D78C(GlobalContext *arg0) {
    Actor *temp_v0;
    Actor *temp_v1;
    Actor *phi_s0;
    Actor *phi_s0_2;

    phi_s0 = NULL;
    phi_s0_2 = NULL;
loop_1:
    temp_v0 = func_ActorCategoryIterateById(arg0, phi_s0, 4, 0x29E);
    phi_s0_2 = temp_v0;
    if ((temp_v0 != 0) && (temp_v0->update == 0)) {
        temp_v1 = temp_v0->next;
        if (temp_v1 != 0) {
            phi_s0 = temp_v1;
            goto loop_1;
        }
    }
    return phi_s0_2;
}

void func_80C1D7FC(DmAh *this, GlobalContext *globalCtx) {
    ? sp2C;
    u32 sp24;
    DmAh *temp_a0;
    DmAh *temp_a3;
    u16 temp_v1;
    u32 temp_a2;
    u32 temp_v0;
    Actor *phi_a3;
    u32 phi_a2;

    sp2C.unk_0 = (s32) D_80C1DE00.unk_0;
    sp2C.unk_4 = (s32) D_80C1DE00.unk_4;
    sp2C.unk_8 = (s32) D_80C1DE00.unk_8;
    sp2C.unk_C = (s32) D_80C1DE00.unk_C;
    sp2C.unk_10 = (s32) D_80C1DE00.unk_10;
    if (globalCtx->csCtx.state != 0) {
        if (this->unk_29C == 0) {
            this->unk_27E = 0xFF;
            this->unk_29C = 1;
            this->unk_298 = this->unk_294;
        }
        this = this;
        if (func_800EE29C(globalCtx, 0x232U) != 0) {
            this = this;
            temp_v0 = func_800EE200(globalCtx, 0x232U);
            temp_a3 = this;
            temp_a2 = temp_v0;
            temp_v1 = globalCtx->csCtx.npcActions[temp_v0]->unk0;
            temp_a0 = temp_a3;
            phi_a3 = (Actor *) temp_a3;
            phi_a2 = temp_a2;
            if ((temp_v1 & 0xFF) != temp_a3->unk_27E) {
                temp_a3->unk_27E = (u8) temp_v1;
                this = temp_a3;
                sp24 = temp_v0;
                func_80C1D410(temp_a0, (sp + (temp_v1 * 4))->unk_2C, temp_a2, temp_a3);
                phi_a3 = (Actor *) this;
                phi_a2 = sp24;
            }
            func_800EDF24(phi_a3, globalCtx, phi_a2);
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return;
    }
    if (this->unk_29C != 0) {
        this->unk_29C = 0;
        func_80C1D410(this, this->unk_298);
    }
}

void func_80C1D92C(DmAh *this, GlobalContext *globalCtx) {

}

void DmAh_Init(Actor *thisx, GlobalContext *globalCtx) {
    DmAh *this = (DmAh *) thisx;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_06009E70, NULL, &this->unk_1B0, &this->unk_216, 0x11);
    this->unk_294 = -1;
    func_80C1D410(this, 0);
    this->actor.flags &= -2;
    Actor_SetScale((Actor *) this, 0.01f);
    this->unk_27C |= 1;
    if ((globalCtx->sceneNum == 0x61) && (globalCtx->curSpawn == 4)) {
        this->unk_280 = func_80C1D78C(globalCtx);
        func_80C1D410(this, 1);
        this->actionFunc = func_80C1D92C;
        return;
    }
    this->actionFunc = func_80C1D7FC;
}

void DmAh_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmAh *this = (DmAh *) thisx;

}

void DmAh_Update(Actor *thisx, GlobalContext *globalCtx) {
    DmAh *this = (DmAh *) thisx;
    this->actionFunc(this, globalCtx);
    func_80C1D6E0(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    func_80C1D458(this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 12.0f, 0.0f, 4U);
}

void func_80C1DAD4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 7) {
        SysMatrix_MultiplyVector3fByState(&D_80C1DE14, arg4 + 0x3C);
        Math_Vec3s_Copy(arg4 + 0x48, arg4 + 0x30);
    }
}

void func_80C1DB24(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    u16 temp_v0;
    s32 phi_v1;
    s32 phi_v0;

    temp_v0 = arg2->unk_27C;
    phi_v1 = 0;
    if ((temp_v0 & 1) == 0) {
        if ((temp_v0 & 2) != 0) {
            phi_v1 = 1;
            phi_v0 = 1;
        } else {
            phi_v1 = 1;
            phi_v0 = 0;
        }
    } else {
        phi_v0 = 0;
    }
    if (arg1 == 7) {
        func_8013AD9C((s16) (arg2->unk_28A + arg2->unk_28E + 0x4000), (s16) (arg2->unk_28C + arg2->unk_290 + arg2->shape.rot.y + 0x4000), arg2 + 0x18C, arg2 + 0x1A4, phi_v1, phi_v0);
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(arg2->unk_18C, arg2->unk_190, arg2->unk_194, 0);
        Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
        Matrix_RotateY(arg2->unk_1A6, 1U);
        SysMatrix_InsertXRotation_s(arg2->unk_1A4, 1);
        SysMatrix_InsertZRotation_s(arg2->unk_1A8, 1);
        SysMatrix_StatePush();
        return;
    }
    if (arg1 == 2) {
        func_8013AD9C((s16) (arg2->unk_28E + 0x4000), (s16) (arg2->unk_290 + arg2->shape.rot.y + 0x4000), arg2 + 0x198, arg2 + 0x1AA, phi_v1, phi_v0);
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(arg2[1].targetArrowOffset, arg2[1].scale.x, arg2[1].scale.y, 0);
        Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
        Matrix_RotateY(arg2->unk_1AC, 1U);
        SysMatrix_InsertXRotation_s(arg2->unk_1AA, 1);
        SysMatrix_InsertZRotation_s(arg2->unk_1AE, 1);
        SysMatrix_StatePush();
    }
}

void DmAh_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp40;
    Gfx *sp38;
    Gfx *sp34;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    DmAh *this = (DmAh *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp40 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp40->polyOpa.p;
    sp40->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDB060020;
    sp40 = sp40;
    sp38 = temp_v0;
    sp38->words.w1 = Lib_SegmentedToVirtual(*(&D_80C1DE28 + (this->unk_284 * 4)));
    temp_v0_2 = sp40->polyOpa.p;
    sp40->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xDB060024;
    sp34 = temp_v0_2;
    sp34->words.w1 = Lib_SegmentedToVirtual(*D_80C1DE20);
    func_801343C0(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, NULL, func_80C1DAD4, func_80C1DB24, (Actor *) this);
}
