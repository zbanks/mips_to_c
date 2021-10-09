void func_80C192A0(s32 arg0, ? arg1);               /* static */
void func_80C192B0(Actor *arg0, s32 arg1);          /* static */
void func_80C19334(Actor *arg0, s32 arg1);          /* static */
void func_80C193A8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C19454(Actor *arg0, ? arg1);            /* static */
void func_80C19498(Actor *arg0, s32 arg1);          /* static */
void func_80C1950C(void *arg0, ? arg1);             /* static */
void func_80C19548(void *arg0, ? arg1);             /* static */
void func_80C19564(s32 arg0, ? arg1);               /* static */
void func_80C19590(Actor *arg0, void *arg1);        /* static */
void func_80C1965C(s32 arg0, ? arg1);               /* static */
void func_80C19688(Actor *arg0, void *arg1);        /* static */
void func_80C19754(Actor *arg0, void *arg1);        /* static */
void func_80C1985C();                               /* static */
void func_80C1987C(Actor *arg0, void *arg1);        /* static */
void func_80C199BC(Actor *arg0, ? arg1);            /* static */
void func_80C199EC(Actor *arg0, void *arg1);        /* static */
void func_80C1A038(f32 *arg0, void *);              /* static */
s32 func_80C1A070(GlobalContext *arg0, Vec3f *arg1); /* static */
void func_80C1A168(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *actor, Gfx **gfx); /* static */
void func_80C1A244(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C1A590(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80C1A650(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_80C1A670(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C1A6C8(void *arg0, GlobalContext *arg1); /* static */
void func_80C1A854(Actor *arg0, GlobalContext *arg1); /* static */
extern ? D_06000080;
extern void D_06000550;
extern void D_06000560;
extern AnimationHeader D_06001D80;
extern FlexSkeletonHeader D_06004010;
extern AnimationHeader D_06004264;
extern FlexSkeletonHeader D_06004C30;
extern FlexSkeletonHeader D_06004E50;
extern AnimationHeader D_06004E98;
extern void D_06011FC8;
extern void D_06012FC8;
extern FlexSkeletonHeader D_06013928;
extern AnimationHeader D_06016588;
static ? D_80C1AA62;                                /* unable to generate initializer */
static InitChainEntry D_80C1AA74;                   /* unable to generate initializer */
static InitChainEntry D_80C1AA88;                   /* unable to generate initializer */
static InitChainEntry D_80C1AAA0;                   /* unable to generate initializer */
static InitChainEntry D_80C1AAB0;                   /* unable to generate initializer */
static InitChainEntry D_80C1AAC8;                   /* unable to generate initializer */
static ? D_80C1AAD8;                                /* unable to generate initializer */
static ? D_80C1AAEC;                                /* unable to generate initializer */
static ? D_80C1AB00;                                /* unable to generate initializer */
static ? D_80C1AB1C;                                /* unable to generate initializer */
static ? D_80C1AB28;                                /* unable to generate initializer */
static ? D_80C1AB3C;                                /* unable to generate initializer */
static ? D_80C1AB4C;                                /* unable to generate initializer */
static MtxF D_80C1AD40;
static MtxF D_80C1AD80;

typedef struct EnInvadepohDemo {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(EnInvadepohDemo *, GlobalContext *);
    /* 0x0148 */ s32 unk148;                        /* inferred */
    /* 0x014C */ f32 unk14C;                        /* inferred */
    /* 0x0150 */ u32 unk150;                        /* inferred */
    /* 0x0154 */ s32 unk154;                        /* inferred */
    /* 0x0158 */ s32 unk158;                        /* inferred */
    /* 0x015C */ s32 unk15C;                        /* inferred */
    /* 0x0160 */ s32 unk160;                        /* inferred */
    /* 0x0164 */ s32 unk164;                        /* inferred */
    /* 0x0168 */ s32 unk168;                        /* inferred */
    /* 0x016C */ s16 unk16C;                        /* inferred */
    /* 0x016E */ char pad16E[0x2];                  /* maybe part of unk16C[2]? */
    /* 0x0170 */ SkelAnime unk170;                  /* inferred */
    /* 0x01B4 */ Vec3s unk1B4;                      /* inferred */
    /* 0x01BA */ char pad1BA[0x84];                 /* maybe part of unk1B4[23]? */
    /* 0x023E */ Vec3s unk23E;                      /* inferred */
    /* 0x0244 */ char pad244[0x84];                 /* maybe part of unk23E[23]? */
} EnInvadepohDemo;                                  /* size 0x2C8 */

void func_80C192A0(s32 arg0, ? arg1) {

}

void func_80C192B0(Actor *arg0, s32 arg1) {
    Actor *temp_a0;
    s32 temp_v0;

    temp_a0 = arg0;
    arg0 = arg0;
    Actor_ProcessInitChain(temp_a0, &D_80C1AA74);
    arg0->flags = 0x80001010;
    temp_v0 = Object_GetIndex(arg1 + 0x17D88, 0x23E);
    arg0->unk160 = temp_v0;
    if (temp_v0 < 0) {
        Actor_MarkForDeath(arg0);
        return;
    }
    arg0->unk144 = func_80C19D48;
}

void func_80C19334(Actor *arg0, s32 arg1) {
    Actor *temp_a0;
    s32 temp_v0;

    temp_a0 = arg0;
    arg0 = arg0;
    Actor_ProcessInitChain(temp_a0, &D_80C1AA88);
    temp_v0 = Object_GetIndex(arg1 + 0x17D88, 0xB7);
    arg0->unk160 = temp_v0;
    if (temp_v0 < 0) {
        Actor_MarkForDeath(arg0);
        return;
    }
    arg0->unk144 = func_80C19E04;
}

void func_80C193A8(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    Actor_ProcessInitChain(arg0, &D_80C1AAA0);
    Actor_SpawnAsChild(arg1 + 0x1CA0, arg0, arg1, 0x29A, 0.0f, 0.0f, 0.0f, (s16) 0, (s16) 0, (s16) 0, 4);
    temp_v0 = Object_GetIndex(&arg1->objectCtx, 0x146);
    arg0->unk160 = temp_v0;
    if (temp_v0 < 0) {
        Actor_MarkForDeath(arg0);
        return;
    }
    arg0->unk144 = func_80C19EC0;
}

void func_80C19454(Actor *arg0, ? arg1) {
    Actor_ProcessInitChain(arg0, &D_80C1AAB0);
    arg0->unk144 = func_80C19AB4;
    arg0->unk164 = (s32) (arg0->unk164 | 1);
}

void func_80C19498(Actor *arg0, s32 arg1) {
    Actor *temp_a0;
    s32 temp_v0;

    temp_a0 = arg0;
    arg0 = arg0;
    Actor_ProcessInitChain(temp_a0, &D_80C1AAC8);
    temp_v0 = Object_GetIndex(arg1 + 0x17D88, 0x146);
    arg0->unk160 = temp_v0;
    if (temp_v0 < 0) {
        Actor_MarkForDeath(arg0);
        return;
    }
    arg0->unk144 = func_80C19F7C;
}

void func_80C1950C(void *arg0, ? arg1) {
    Actor *temp_a1;

    temp_a1 = arg0->unk124;
    if (temp_a1 != 0) {
        temp_a1->parent = NULL;
    }
    Actor_MarkForDeath(arg0->unk124);
}

void func_80C19548(void *arg0, ? arg1) {
    void *temp_v0;

    temp_v0 = arg0->unk120;
    if (temp_v0 != 0) {
        temp_v0->unk124 = 0;
    }
}

void func_80C19564(s32 arg0, ? arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x170);
}

void func_80C19590(Actor *arg0, void *arg1) {
    s32 sp30;
    Vec3f sp20;
    s32 temp_t4;
    void *temp_v0;

    temp_v0 = arg1->unk18864 + (arg0->unk158 * 8);
    sp30 = (s32) temp_v0->unk0;
    if (sp30 != 0) {
        Math_Vec3s_ToVec3f(&sp20, (arg0->unk15C * 6) + Lib_SegmentedToVirtual(temp_v0->unk4));
        if (Math_Vec3f_StepTo(arg0 + 0x24, &sp20, arg0->unk14C) < arg0->unk14C) {
            temp_t4 = arg0->unk15C + 1;
            arg0->unk15C = temp_t4;
            if (temp_t4 >= sp30) {
                Actor_MarkForDeath(arg0);
                return;
            }
            // Duplicate return node #5. Try simplifying control flow for better match
            return;
        }
        SkelAnime_FrameUpdateMatrix(arg0 + 0x170);
        // Duplicate return node #5. Try simplifying control flow for better match
    }
}

void func_80C1965C(s32 arg0, ? arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x170);
}

void func_80C19688(Actor *arg0, void *arg1) {
    s32 sp30;
    Vec3f sp20;
    s32 temp_t4;
    void *temp_v0;

    temp_v0 = arg1->unk18864 + (arg0->unk158 * 8);
    sp30 = (s32) temp_v0->unk0;
    if (sp30 != 0) {
        Math_Vec3s_ToVec3f(&sp20, (arg0->unk15C * 6) + Lib_SegmentedToVirtual(temp_v0->unk4));
        if (Math_Vec3f_StepTo(arg0 + 0x24, &sp20, arg0->unk14C) < arg0->unk14C) {
            temp_t4 = arg0->unk15C + 1;
            arg0->unk15C = temp_t4;
            if (temp_t4 >= sp30) {
                Actor_MarkForDeath(arg0);
                return;
            }
            // Duplicate return node #5. Try simplifying control flow for better match
            return;
        }
        SkelAnime_FrameUpdateMatrix(arg0 + 0x170);
        // Duplicate return node #5. Try simplifying control flow for better match
    }
}

void func_80C19754(Actor *arg0, void *arg1) {
    MtxF sp24;

    if (arg0->child != 0) {
        SysMatrix_StatePush();
        SysMatrix_SetStateRotationAndTranslation(arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, arg0 + 0xBC);
        SysMatrix_InsertTranslation(0.0f, 57.0f, -36.0f, 1);
        SysMatrix_InsertXRotation_s((s16) (s32) ((f32) arg0->shape.rot.x * -0.7f), 1);
        SysMatrix_InsertZRotation_s((s16) (s32) ((f32) arg0->shape.rot.z * -0.7f), 1);
        SysMatrix_GetStateTranslation(arg0->child + 0x24);
        SysMatrix_CopyCurrentState(&sp24);
        func_8018219C(&sp24, arg0->child + 0xBC, 0);
        SysMatrix_StatePop();
    }
    SkelAnime_FrameUpdateMatrix(arg0 + 0x170);
}

void func_80C1985C(void) {
    func_80C19754();
}

void func_80C1987C(Actor *arg0, void *arg1) {
    s32 sp38;
    void *sp34;
    Vec3f sp28;
    s32 temp_t1;
    s32 temp_v0_2;
    void *temp_ret;
    void *temp_v0;

    temp_v0 = arg1->unk18864 + (arg0->unk158 * 8);
    sp38 = (s32) temp_v0->unk0;
    temp_ret = Lib_SegmentedToVirtual(temp_v0->unk4);
    if (sp38 != 0) {
        temp_v0_2 = arg0->unk154;
        if (((temp_v0_2 == 2) && (arg1->unk1F34 == 0x157)) || ((temp_v0_2 == 3) && (arg1->unk1F34 == 0x1A5)) || ((temp_v0_2 == 4) && (arg1->unk1F34 == 0x209))) {
            sp34 = temp_ret;
            Audio_PlayActorSound2(arg0, 0x28DFU);
        }
        Math_Vec3s_ToVec3f(&sp28, (arg0->unk15C * 6) + temp_ret);
        if (Math_Vec3f_StepTo(&arg0->world.pos, &sp28, arg0->unk14C) < arg0->unk14C) {
            temp_t1 = arg0->unk15C + 1;
            arg0->unk15C = temp_t1;
            if (temp_t1 >= sp38) {
                Actor_MarkForDeath(arg0);
                return;
            }
            // Duplicate return node #12. Try simplifying control flow for better match
            return;
        }
        func_80C19754(arg0, arg1);
        // Duplicate return node #12. Try simplifying control flow for better match
    }
}

void func_80C199BC(Actor *arg0, ? arg1) {
    arg0->unk16C = (s16) (arg0->unk16C + 0x258);
    func_800B9010(arg0, 0x21B5U);
}

void func_80C199EC(Actor *arg0, void *arg1) {
    s32 sp30;
    Vec3f sp20;
    s32 temp_t7;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = arg1->unk18864 + (arg0->unk158 * 8);
    sp30 = (s32) temp_v0->unk0;
    temp_v0_2 = Lib_SegmentedToVirtual(temp_v0->unk4);
    if (sp30 != 0) {
        arg0->unk16C = (s16) (arg0->unk16C + 0x258);
        Math_Vec3s_ToVec3f(&sp20, (arg0->unk15C * 6) + temp_v0_2);
        if (Math_Vec3f_StepTo(arg0 + 0x24, &sp20, arg0->unk14C) < arg0->unk14C) {
            temp_t7 = arg0->unk15C + 1;
            arg0->unk15C = temp_t7;
            if (temp_t7 >= sp30) {
                Actor_MarkForDeath(arg0);
            }
        }
    }
}

void func_80C19AB4(EnInvadepohDemo *this, GlobalContext *globalCtx) {
    u16 *sp1C;
    EnInvadepohDemo *temp_a0_2;
    GlobalContext *temp_a3;
    GlobalContext *temp_a3_2;
    s32 temp_a0;
    s32 temp_t0;
    u16 *temp_v1;
    u16 temp_a1;
    u16 temp_a1_2;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u32 temp_v0;
    s32 phi_v0;
    s32 phi_a0;
    EnInvadepohDemo *phi_a2;
    GlobalContext *phi_a3;
    EnInvadepohDemo *phi_a2_2;

    temp_a3 = globalCtx;
    globalCtx = temp_a3;
    temp_a1 = *(&D_80C1AA62 + (this->unk148 * 4));
    this = this;
    temp_a3_2 = globalCtx;
    if (func_800EE29C(temp_a3, (u32) temp_a1) != 0) {
        globalCtx = temp_a3_2;
        temp_a1_2 = *(&D_80C1AA62 + (this->unk148 * 4));
        this = this;
        temp_v0 = func_800EE200(temp_a3_2, (u32) temp_a1_2);
        temp_t0 = temp_v0 * 4;
        temp_a0 = this->unk148;
        this->unk150 = temp_v0;
        temp_v1 = (globalCtx + temp_t0)->unk1F4C;
        phi_a0 = temp_a0;
        phi_a2 = this;
        phi_a3 = globalCtx;
        phi_a2_2 = this;
        phi_a3 = globalCtx;
        if (temp_a0 != 0) {
            if (temp_a0 != 1) {
                if (temp_a0 != 2) {
                    if (temp_a0 == 3) {
                        temp_v0_2 = *temp_v1;
                        phi_v0 = (s32) temp_v0_2;
                        if (temp_v0_2 != this->unk154) {
                            temp_a0_2 = this;
                            if (temp_v0_2 == 2) {
                                sp1C = temp_v1;
                                this = this;
                                globalCtx = globalCtx;
                                Audio_PlayActorSound2(&temp_a0_2->actor, 0x297CU);
                                phi_v0 = (s32) *temp_v1;
                            }
                            this->unk154 = phi_v0;
                            phi_a2_2 = this;
                            phi_a3 = globalCtx;
                            goto block_19;
                        }
                    }
                } else {
                    temp_v0_3 = *temp_v1;
                    if ((((s32) temp_v0_3 < 2) || ((temp_v0_3 - 1) == this->unk168)) && (temp_v0_3 != this->unk154)) {
                        this->unk154 = (s32) temp_v0_3;
                        goto block_19;
                    }
                }
            } else {
                temp_v0_4 = *temp_v1;
                if (temp_v0_4 != this->unk154) {
                    this->unk154 = (s32) temp_v0_4;
                    goto block_19;
                }
            }
        } else {
            temp_v0_5 = *temp_v1;
            if ((((s32) temp_v0_5 < 2) || ((temp_v0_5 - 2) == this->unk168)) && (temp_v0_5 != this->unk154)) {
                this->unk154 = (s32) temp_v0_5;
block_19:
                phi_a0 = phi_a2_2->unk148;
                phi_a2 = phi_a2_2;
            }
        }
        if (phi_a0 != 0) {
            if (phi_a0 != 1) {
                if (phi_a0 != 2) {
                    if (phi_a0 == 3) {
                        *(&D_80C1AB3C + (phi_a2->unk154 * 4))(phi_a2, phi_a3, phi_a2, phi_a3);
                        return;
                    }
                    // Duplicate return node #28. Try simplifying control flow for better match
                    return;
                }
                *(&D_80C1AB28 + (phi_a2->unk154 * 4))(phi_a2, phi_a3, phi_a2, phi_a3);
                // Duplicate return node #28. Try simplifying control flow for better match
                return;
            }
            *(&D_80C1AB1C + (phi_a2->unk154 * 4))(phi_a2, phi_a3, phi_a2, phi_a3);
            return;
        }
        *(&D_80C1AB00 + (phi_a2->unk154 * 4))(phi_a2, phi_a3, phi_a2, phi_a3);
    }
}

void func_80C19D00(EnInvadepohDemo *this, GlobalContext *globalCtx) {
    if (this->actor.parent == 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    SkelAnime_FrameUpdateMatrix(&this->unk170);
}

void func_80C19D48(EnInvadepohDemo *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a1;

    if (Object_IsLoaded(&globalCtx->objectCtx, this->unk160) != 0) {
        this->actor.objBankIndex = (s8) this->unk160;
        Actor_SetObjectSegment(globalCtx, &this->actor);
        this->unk164 |= 1;
        this->actionFunc = func_80C19AB4;
        temp_a1 = &this->unk170;
        sp34 = temp_a1;
        SkelAnime_InitSV(globalCtx, temp_a1, &D_06004E50, &D_06001D80, &this->unk1B4, &this->unk23E, 0xE);
        SkelAnime_ChangeAnimDefaultRepeat(sp34, &D_06001D80);
    }
}

void func_80C19E04(EnInvadepohDemo *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a1;

    if (Object_IsLoaded(&globalCtx->objectCtx, this->unk160) != 0) {
        this->actor.objBankIndex = (s8) this->unk160;
        Actor_SetObjectSegment(globalCtx, &this->actor);
        this->unk164 |= 1;
        this->actionFunc = func_80C19AB4;
        temp_a1 = &this->unk170;
        sp34 = temp_a1;
        SkelAnime_InitSV(globalCtx, temp_a1, &D_06013928, &D_06016588, &this->unk1B4, &this->unk23E, 0x17);
        SkelAnime_ChangeAnimDefaultRepeat(sp34, &D_06016588);
    }
}

void func_80C19EC0(EnInvadepohDemo *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a1;

    if (Object_IsLoaded(&globalCtx->objectCtx, this->unk160) != 0) {
        this->actor.objBankIndex = (s8) this->unk160;
        Actor_SetObjectSegment(globalCtx, &this->actor);
        this->unk164 |= 1;
        this->actionFunc = func_80C19AB4;
        temp_a1 = &this->unk170;
        sp34 = temp_a1;
        SkelAnime_InitSV(globalCtx, temp_a1, &D_06004010, &D_06004264, &this->unk1B4, &this->unk23E, 6);
        SkelAnime_ChangeAnimDefaultRepeat(sp34, &D_06004264);
    }
}

void func_80C19F7C(EnInvadepohDemo *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a1;

    if (Object_IsLoaded(&globalCtx->objectCtx, this->unk160) != 0) {
        this->actor.objBankIndex = (s8) this->unk160;
        Actor_SetObjectSegment(globalCtx, &this->actor);
        this->unk164 |= 1;
        this->actionFunc = func_80C19D00;
        temp_a1 = &this->unk170;
        sp34 = temp_a1;
        SkelAnime_InitSV(globalCtx, temp_a1, &D_06004C30, &D_06004E98, &this->unk1B4, &this->unk23E, 6);
        SkelAnime_ChangeAnimDefaultRepeat(sp34, &D_06004E98);
    }
}

void func_80C1A038(f32 *arg0) {
    MtxF *temp_v0;

    temp_v0 = SysMatrix_GetCurrentState();
    temp_v0->mf[3][0] = arg0->unk0;
    temp_v0->mf[3][1] = arg0->unk4;
    temp_v0->mf[3][2] = arg0->unk8;
}

s32 func_80C1A070(GlobalContext *arg0, Vec3f *arg1) {
    Vec3f sp34;
    f32 sp30;
    s32 sp24;
    f32 temp_f12;
    f32 temp_f2;

    func_800B4EDC(arg0, arg1, &sp34, &sp30);
    if ((sp34.z > 1.0f) && (temp_f2 = sp34.x * sp30, (fabsf(temp_f2) < 1.0f)) && (temp_f12 = sp34.y * sp30, (fabsf(temp_f12) < 1.0f)) && (sp24 = (s32) (sp34.z * sp30 * 16352.0f) + 0x3FE0, ((sp24 < func_80178A94((s32) ((temp_f2 * 160.0f) + 160.0f), (s32) ((temp_f12 * -120.0f) + 120.0f))) != 0))) {
        return 1;
    }
    return 0;
}

void func_80C1A168(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3) {
    if (arg1 == 0xC) {
        SysMatrix_StatePush();
        SysMatrix_InsertZRotation_s(-0x53ED, 1);
        Matrix_RotateY(-0x3830, 1U);
        Matrix_Scale(1.0f, 1.0f, 1.5f, 1);
        SysMatrix_CopyCurrentState(&D_80C1AD40);
        SysMatrix_StatePop();
        return;
    }
    if (arg1 == 0xD) {
        SysMatrix_StatePush();
        SysMatrix_InsertZRotation_s(-0x53ED, 1);
        Matrix_RotateY(-0x47D0, 1U);
        Matrix_Scale(1.0f, 1.0f, 1.5f, 1);
        SysMatrix_CopyCurrentState(&D_80C1AD80);
        SysMatrix_StatePop();
    }
}

void func_80C1A244(Actor *arg0, GlobalContext *arg1) {
    Gfx *sp9C;
    GraphicsContext *sp98;
    Vec3f sp68;
    GraphicsContext *sp54;
    Gfx *temp_s0_2;
    Gfx *temp_s0_3;
    Gfx *temp_s0_4;
    Gfx *temp_s0_5;
    Gfx *temp_s0_6;
    Gfx *temp_v0_4;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    Gfx *temp_v1_8;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_a2;
    GraphicsContext *temp_s0;
    GraphicsContext *temp_v0_3;
    Mtx *temp_v0;
    Mtx *temp_v0_2;
    Mtx *temp_v0_5;

    temp_a0 = arg1->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    func_8012C28C(arg1->state.gfxCtx);
    SysMatrix_StatePush();
    AnimatedMat_Draw(arg1, Lib_SegmentedToVirtual(&D_06000560));
    Scene_SetRenderModeXlu(arg1, 0, 1U);
    temp_v1 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w1 = 0xFF;
    temp_v1->words.w0 = 0xFB000000;
    temp_s0->polyOpa.p = SkelAnime_DrawSV2(arg1, arg0->unk174, arg0->unk190, (s32) arg0->unk172, NULL, func_80C1A168, arg0, temp_s0->polyOpa.p);
    AnimatedMat_Draw(arg1, Lib_SegmentedToVirtual(&D_06000550));
    temp_a2 = arg1->state.gfxCtx;
    temp_v1_2 = temp_a2->polyXlu.p;
    temp_v1_2->words.w0 = 0xE7000000;
    temp_v1_2->words.w1 = 0;
    temp_v1_3 = temp_v1_2 + 8;
    temp_v1_3->words.w1 = 0xF0B4643C;
    temp_v1_3->words.w0 = 0xFA0000FF;
    temp_v1_4 = temp_v1_3 + 8;
    temp_v1_4->words.w1 = -0x6A;
    temp_v1_4->words.w0 = 0xFB000000;
    temp_v1_5 = temp_v1_4 + 8;
    sp9C = temp_v1_5;
    sp98 = temp_a2;
    SysMatrix_InsertMatrix(&D_80C1AD40, 0);
    temp_v0 = Matrix_NewMtx(arg1->state.gfxCtx);
    if (temp_v0 != 0) {
        temp_v1_5->words.w0 = 0xDA380003;
        temp_v1_5->words.w1 = (u32) temp_v0;
        temp_v1_6 = temp_v1_5 + 8;
        temp_v1_6->words.w0 = 0xDE000000;
        temp_v1_6->words.w1 = (u32) &D_06000080;
        temp_v1_7 = temp_v1_6 + 8;
        sp9C = temp_v1_7;
        SysMatrix_InsertMatrix(&D_80C1AD80, 0);
        temp_v0_2 = Matrix_NewMtx(arg1->state.gfxCtx);
        if (temp_v0_2 != 0) {
            temp_v1_7->words.w0 = 0xDA380003;
            temp_v1_7->words.w1 = (u32) temp_v0_2;
            temp_v1_8 = temp_v1_7 + 8;
            temp_v1_8->words.w0 = 0xDE000000;
            temp_v1_8->words.w1 = (u32) &D_06000080;
            sp98->polyXlu.p = temp_v1_8 + 8;
        }
    }
    temp_v0_3 = arg1->state.gfxCtx;
    sp54 = temp_v0_3;
    temp_v0_4 = func_8012C868(temp_v0_3->polyXlu.p);
    temp_v0_4->words.w1 = 0x80;
    temp_v0_4->words.w0 = 0xE3001803;
    temp_s0_2 = temp_v0_4 + 8;
    temp_s0_2->words.w0 = 0xFCFF97FF;
    temp_s0_2->words.w1 = 0xFF2DFEFF;
    temp_s0_3 = temp_s0_2 + 8;
    SysMatrix_InsertMatrix(&arg1->mf_187FC, 0);
    SysMatrix_GetStateTranslationAndScaledZ(90.0f, &sp68);
    SysMatrix_InsertTranslation(arg0->world.pos.x + sp68.x, arg0->world.pos.y + sp68.y + 25.0f, arg0->world.pos.z + sp68.z, 0);
    Matrix_Scale(0.15f, 0.15f, 0.15f, 1);
    temp_s0_3->words.w0 = 0xDE000000;
    temp_s0_3->words.w1 = (u32) D_04029CB0;
    temp_s0_4 = temp_s0_3 + 8;
    temp_s0_4->words.w0 = 0xFA000000;
    temp_s0_4->words.w1 = 0xF0B46464;
    temp_s0_5 = temp_s0_4 + 8;
    temp_v0_5 = Matrix_NewMtx(arg1->state.gfxCtx);
    if (temp_v0_5 != 0) {
        temp_s0_5->words.w0 = 0xDA380003;
        temp_s0_6 = temp_s0_5 + 8;
        temp_s0_5->words.w1 = (u32) temp_v0_5;
        temp_s0_6->words.w0 = 0xDE000000;
        temp_s0_6->words.w1 = (u32) D_04029CF0;
        sp54->polyXlu.p = temp_s0_6 + 8;
    }
    SysMatrix_StatePop();
}

void func_80C1A590(Actor *arg0, GlobalContext *arg1) {
    GraphicsContext *sp34;
    Gfx *sp2C;
    Gfx *sp28;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    temp_a0 = arg1->state.gfxCtx;
    sp34 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp34->polyOpa.p;
    sp34->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp34 = sp34;
    sp2C = temp_v0;
    sp2C->words.w1 = Lib_SegmentedToVirtual(&D_06011FC8);
    temp_v0_2 = sp34->polyOpa.p;
    sp34->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp28 = temp_v0_2;
    sp28->words.w1 = Lib_SegmentedToVirtual(&D_06012FC8);
    SkelAnime_DrawSV(arg1, arg0->unk174, arg0->unk190, (s32) arg0->unk172, NULL, NULL, arg0);
}

s32 func_80C1A650(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    if (arg1 == 5) {
        *arg2 = NULL;
    }
    return 0;
}

void func_80C1A670(Actor *arg0, GlobalContext *arg1) {
    func_8012C5B0(arg1->state.gfxCtx);
    SkelAnime_DrawSV(arg1, arg0->unk174, arg0->unk190, (s32) arg0->unk172, func_80C1A650, NULL, arg0);
}

void func_80C1A6C8(void *arg0, GlobalContext *arg1) {
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    GraphicsContext *sp5C;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    GraphicsContext *temp_a0_2;
    Mtx *temp_v0;
    f32 *temp_a0;
    f32 temp_f8;
    void *temp_a2;

    temp_a2 = arg0;
    temp_a0 = &sp64;
    temp_a0->unk0 = D_801D15B0.x;
    temp_a0->unk4 = (f32) D_801D15B0.y;
    temp_a0->unk8 = (f32) D_801D15B0.z;
    sp64 = temp_a2->unk24;
    sp68 = temp_a2->unk28;
    temp_f8 = temp_a2->unk2C;
    arg0 = temp_a2;
    sp6C = temp_f8;
    func_80C1A038(temp_a0, temp_a2);
    SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
    SysMatrix_InsertZRotation_s(arg0->unk16C, 1);
    temp_a0_2 = arg1->state.gfxCtx;
    sp5C = temp_a0_2;
    func_8012C2DC(temp_a0_2);
    temp_v0 = Matrix_NewMtx(arg1->state.gfxCtx);
    if (temp_v0 != 0) {
        temp_v1 = sp5C->polyXlu.p;
        sp5C->polyXlu.p = temp_v1 + 8;
        temp_v1->words.w1 = (u32) temp_v0;
        temp_v1->words.w0 = 0xDA380003;
        temp_v1_2 = sp5C->polyXlu.p;
        sp5C->polyXlu.p = temp_v1_2 + 8;
        temp_v1_2->words.w0 = 0xFA00FF80;
        temp_v1_2->words.w1 = 0xFFFF00B4;
        temp_v1_3 = sp5C->polyXlu.p;
        sp5C->polyXlu.p = temp_v1_3 + 8;
        temp_v1_3->words.w1 = 0xFF320000;
        temp_v1_3->words.w0 = 0xFB000000;
        temp_v1_4 = sp5C->polyXlu.p;
        sp5C->polyXlu.p = temp_v1_4 + 8;
        temp_v1_4->words.w0 = 0xDE000000;
        temp_v1_4->words.w1 = (u32) D_04023210;
    }
    if (func_80C1A070(arg1, (Vec3f *) &sp64) != 0) {
        func_800F9824(arg1, &arg1->envCtx, &arg1->view, arg1->state.gfxCtx, (bitwise Vec3f) sp64.unk0, sp64.unk4, sp64.unk8, (s8) 20.0f, (s8) 9.0f, 0, 0);
    }
}

void func_80C1A854(Actor *arg0, GlobalContext *arg1) {
    func_8012C5B0(arg1->state.gfxCtx);
    SkelAnime_DrawSV(arg1, arg0->unk174, arg0->unk190, (s32) arg0->unk172, NULL, NULL, arg0);
}

void EnInvadepohDemo_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnInvadepohDemo *this = (EnInvadepohDemo *) thisx;
    f32 temp_f10;
    s16 temp_f4;
    s16 temp_v0;
    s32 temp_v1;

    temp_v0 = this->actor.params;
    temp_v1 = temp_v0 & 0xF;
    this->unk168 = ((s32) temp_v0 >> 0xB) & 7;
    this->unk148 = temp_v1;
    if ((temp_v1 < 0) || (temp_v1 >= 5)) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    if (temp_v1 == 3) {
        this->actor.world.rot.z = 0;
        temp_f4 = this->actor.shape.rot.z;
        this->actor.shape.rot.z = this->actor.world.rot.z;
        this->unk14C = (f32) temp_f4;
    } else {
        this->actor.world.rot.z = 0;
        temp_f10 = (f32) this->actor.shape.rot.z;
        this->actor.shape.rot.z = this->actor.world.rot.z;
        this->unk14C = temp_f10 / 10.0f;
    }
    this->unk164 = 0;
    this->unk154 = -1;
    this->unk16C = 0;
    this->unk158 = ((s32) this->actor.params >> 4) & 0x7F;
    this->unk15C = 0;
    this->unk160 = -1;
    *(&D_80C1AAD8 + (this->unk148 * 4))();
}

void EnInvadepohDemo_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnInvadepohDemo *this = (EnInvadepohDemo *) thisx;
    *(&D_80C1AAEC + (this->unk148 * 4))();
}

void EnInvadepohDemo_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnInvadepohDemo *this = (EnInvadepohDemo *) thisx;
    this->actionFunc(this, globalCtx);
}

void EnInvadepohDemo_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnInvadepohDemo *this = (EnInvadepohDemo *) thisx;
    if ((this->unk154 != -1) && ((this->unk164 & 1) != 0)) {
        *(&D_80C1AB4C + (this->unk148 * 4))();
    }
}

