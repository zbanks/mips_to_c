struct _mips2c_stack_EnDnp_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnDnp_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ GraphicsContext *sp38;               /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnDnp_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnDnp_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B3CA20 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ SkelAnime *sp1C;                     /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B3CC38 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B3CC80 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ColliderCylinder *sp18;              /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B3CD1C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B3CDA4 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x8];                    /* maybe part of sp40[3]? */
    /* 0x4C */ void *sp4C;                          /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80B3CEC0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B3CF60 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B3D044 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B3D11C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ u32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B3D2D4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B3D338 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B3D3F8 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B3D47C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B3D558 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B3D974 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x40];
    /* 0x6C */ s16 sp6C;                            /* inferred */
    /* 0x6E */ s16 sp6E;                            /* inferred */
    /* 0x70 */ s16 sp70;                            /* inferred */
    /* 0x72 */ char pad_72[0x2];
    /* 0x74 */ ? sp74;                              /* inferred */
    /* 0x74 */ char pad_74[0xC];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80B3DA88 {};              /* size 0x0 */

struct _mips2c_stack_func_80B3DAA0 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

? func_80B3CA20(Actor *arg0);                       /* static */
s32 func_80B3CC38(EnDnp *arg0, s32 arg1);           /* static */
void func_80B3CC80(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B3CD1C(EnDnp *arg0);                    /* static */
? func_80B3CDA4(void *arg0, void *arg1);            /* static */
? func_80B3CEC0(EnDnp *arg0, GlobalContext *);      /* static */
s32 func_80B3CF60(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B3D044(EnDnp *arg0, GlobalContext *arg1); /* static */
void func_80B3D47C(Actor *arg0, GlobalContext *arg1); /* static */
? func_80B3D974(s16 arg0, s16 arg1, void *arg2, s16 *arg3, s32 arg4, s32 arg5); /* static */
void func_80B3DA88(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *actor); /* static */
void func_80B3DAA0(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern FlexSkeletonHeader D_06010D60;
static ColliderCylinderInit D_80B3DC80 = {
    {1, 0, 0, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0xE, 0x26, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80B3DCAC = {0, 0, 0, 0, 0xFF};
static s32 D_80B3DE58[7] = {0x172000, 0xD040005, 0xE09670C, 0x100E0968, 0xC100E09, 0x6F0C0F09, 0x700C1000};
static ? D_80B3DE74;                                /* unable to generate initializer */
static ? D_80B3DEAC;                                /* unable to generate initializer */
static ActorAnimationEntryS sAnimations[26] = {
    {(AnimationHeader *)0x60007D8, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x60021DC, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60021DC, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60026B8, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6004D08, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x60071F4, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6007960, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6008588, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600A900, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x600AEB8, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x600B754, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x600674C, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x600BAD8, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6006B74, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6012428, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x600B324, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600B324, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60115B8, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60115B8, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600923C, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6009AA0, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x600125C, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x60017F8, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6001C1C, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60057AC, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600625C, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
};

? func_80B3CA20(Actor *arg0) {
    SkelAnime *sp1C;
    Actor *temp_a0_4;
    Actor *temp_a0_5;
    Actor *temp_a0_6;
    Actor *temp_a0_7;
    SkelAnime *temp_a0;
    SkelAnime *temp_a0_2;
    SkelAnime *temp_a0_3;
    s32 temp_v0;

    temp_v0 = arg0->unk_340;
    temp_a0 = arg0 + 0x144;
    if ((temp_v0 == 2) || (temp_v0 == 9)) {
        sp1C = temp_a0;
        arg0 = arg0;
        if ((func_801378B8(temp_a0, 1.0f) != 0) || (func_801378B8(temp_a0, 5.0f) != 0) || (func_801378B8(sp1C, 9.0f) != 0) || (func_801378B8(sp1C, 13.0f) != 0)) {
            Audio_PlayActorSound2(arg0, 0x3981U);
        }
    } else {
        temp_a0_2 = arg0 + 0x144;
        if ((temp_v0 == 0x18) || (temp_v0 == 7)) {
            arg0 = arg0;
            if (func_801378B8(temp_a0_2, 1.0f) != 0) {
                Audio_PlayActorSound2(arg0, 0x3981U);
            }
        } else {
            temp_a0_3 = arg0 + 0x144;
            if (temp_v0 == 0xE) {
                sp1C = temp_a0_3;
                arg0 = arg0;
                if (func_801378B8(temp_a0_3, 7.0f) != 0) {
                    Audio_PlayActorSound2(arg0, 0x3982U);
                }
                if (func_801378B8(sp1C, 22.0f) != 0) {
                    Audio_PlayActorSound2(arg0, 0x3983U);
                }
            } else {
                temp_a0_4 = arg0 + 0x144;
                if (temp_v0 == 8) {
                    sp1C = (SkelAnime *) temp_a0_4;
                    arg0 = arg0;
                    if (func_801378B8((SkelAnime *) temp_a0_4, 9.0f) != 0) {
                        Audio_PlayActorSound2(arg0, 0x3982U);
                    }
                    if (func_801378B8(sp1C, 18.0f) != 0) {
                        Audio_PlayActorSound2(arg0, 0x3983U);
                    }
                } else if ((temp_v0 == 0x11) && (temp_a0_5 = arg0 + 0x144, (temp_v0 == 0x12))) {
                    sp1C = (SkelAnime *) temp_a0_5;
                    arg0 = arg0;
                    if ((func_801378B8((SkelAnime *) temp_a0_5, 7.0f) != 0) || (func_801378B8((SkelAnime *) temp_a0_5, 15.0f) != 0)) {
                        Audio_PlayActorSound2(arg0, 0x3980U);
                    }
                } else {
                    temp_a0_6 = arg0 + 0x144;
                    if (temp_v0 == 0x15) {
                        arg0 = arg0;
                        if (func_801378B8((SkelAnime *) temp_a0_6, 17.0f) != 0) {
                            Audio_PlayActorSound2(arg0, 0x3980U);
                        }
                    } else {
                        temp_a0_7 = arg0 + 0x144;
                        if (temp_v0 == 0x17) {
                            arg0 = arg0;
                            if (func_801378B8((SkelAnime *) temp_a0_7, 3.0f) != 0) {
                                Audio_PlayActorSound2(arg0, 0x3980U);
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

s32 func_80B3CC38(EnDnp *arg0, s32 arg1) {
    s32 phi_v1;

    phi_v1 = 0;
    if (arg1 != arg0->unk_340) {
        arg0->unk_340 = arg1;
        phi_v1 = func_8013BC6C(arg0 + 0x144, sAnimations, arg1);
    }
    return phi_v1;
}

void func_80B3CC80(Actor *arg0, GlobalContext *arg1) {
    f32 sp1C;
    ColliderCylinder *sp18;
    Actor *temp_a3;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_a2;
    f32 temp_f0;

    temp_a3 = arg0;
    temp_a2 = temp_a3 + 0x18C;
    temp_a1 = temp_a2;
    temp_f0 = temp_a3->scale.x / 0.0085f;
    sp18 = temp_a2;
    arg0 = temp_a3;
    sp1C = temp_f0;
    Collider_UpdateCylinder(temp_a3, temp_a1);
    arg0->unk_1CC = (s16) (s32) (14.0f * temp_f0);
    arg0->unk_1CE = (s16) (s32) (38.0f * temp_f0);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, (Collider *) temp_a2);
}

void func_80B3CD1C(EnDnp *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    if ((arg0->unk_322 & 0x80) != 0) {
        temp_v0 = arg0->unk_334;
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk_334 = temp_v0 - 1;
            phi_v1 = arg0->unk_334;
        }
        if (phi_v1 == 0) {
            arg0->unk_336 += 1;
            if ((s32) arg0->unk_336 >= 4) {
                arg0 = arg0;
                arg0->unk_334 = Rand_S16Offset(0x1E, 0x1E);
                arg0->unk_336 = 0;
            }
        }
    }
}

? func_80B3CDA4(void *arg0, void *arg1) {
    void *sp4C;
    f32 sp40;
    ? sp3C;
    f32 sp34;
    ? sp30;
    s16 temp_s0;
    void *temp_v1;
    s16 phi_s0;
    s16 phi_v0;

    temp_v1 = arg1->unk_1CCC;
    temp_s0 = arg0->unk_92 - arg0->unk_BE;
    if ((s32) temp_s0 < -0x3FFC) {
        phi_s0 = -0x3FFC;
    } else {
        phi_v0 = temp_s0;
        if ((s32) temp_s0 >= 0x3FFD) {
            phi_v0 = 0x3FFC;
        }
        phi_s0 = phi_v0;
    }
    sp4C = temp_v1;
    Math_SmoothStepToS(arg0 + 0x332, phi_s0, 3, 0x2AA8, (s16) 1);
    sp30.unk_0 = (s32) temp_v1->unk_24;
    sp30.unk_4 = (s32) temp_v1->unk_28;
    sp30.unk_8 = (s32) temp_v1->unk_2C;
    sp34 = temp_v1->unk_C44 + 3.0f;
    sp3C.unk_0 = (s32) arg0->unk_24;
    sp3C.unk_4 = (s32) arg0->unk_28;
    sp3C.unk_8 = (s32) arg0->unk_2C;
    sp40 += 10.0f;
    Math_SmoothStepToS(arg0 + 0x330, Math_Vec3f_Pitch((Vec3f *) &sp3C, (Vec3f *) &sp30), 3, 0x2AA8, (s16) 1);
    return 1;
}

? func_80B3CEC0(EnDnp *arg0) {
    s16 temp_v0_2;
    u16 temp_t0;
    u16 temp_t9;
    u16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk_322;
    if ((temp_v0 & 8) != 0) {
        func_80B3CDA4();
        temp_t9 = arg0->unk_322 & 0xFFEF;
        temp_t0 = temp_t9 | 0x40;
        arg0->unk_322 = temp_t9;
        arg0->unk_322 = temp_t0;
    } else if ((temp_v0 & 0x40) != 0) {
        arg0->unk_322 = temp_v0 & 0xFFBF;
        arg0->unk_330 = 0;
        arg0->unk_332 = 0;
        arg0->unk_338 = 0x14;
    } else {
        temp_v0_2 = arg0->unk_338;
        if (temp_v0_2 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk_338 = temp_v0_2 - 1;
            phi_v1 = arg0->unk_338;
        }
        if (phi_v1 == 0) {
            arg0->unk_322 |= 0x10;
        }
    }
    return 1;
}

s32 func_80B3CF60(Actor *arg0, GlobalContext *arg1) {
    s32 sp24;
    s32 phi_v1;
    s32 phi_v1_2;

    phi_v1 = 0;
    if (((arg0->unk_322 & 7) != 0) && (sp24 = 0, phi_v1 = sp24, (func_800B84D0(arg0, arg1) != 0))) {
        func_8013AED4(arg0 + 0x322, 0U, 7U);
        arg0->unk_322 = (u16) (arg0->unk_322 | 8);
        arg0->unk_188 = func_80B3D3F8;
        goto block_6;
    }
    phi_v1_2 = phi_v1;
    if ((gSaveContext.weekEventReg[23] & 0x20) == 0) {
        sp24 = phi_v1;
        phi_v1_2 = phi_v1;
        if (Actor_HasParent(arg0, arg1) != 0) {
            func_8013AED4(arg0 + 0x322, 0U, 7U);
            arg0->unk_322 = (u16) (arg0->unk_322 & 0xFAFF);
            arg0->parent = NULL;
            arg0->unk_32E = 0;
            arg0->unk_188 = func_80B3D338;
block_6:
            phi_v1_2 = 1;
        }
    }
    return phi_v1_2;
}

s32 func_80B3D044(EnDnp *arg0, GlobalContext *arg1) {
    s32 sp1C;
    u16 *temp_a0;
    u16 *temp_a0_2;
    u16 temp_v0;
    s32 phi_v1;

    temp_a0 = arg0 + 0x322;
    phi_v1 = 0;
    if (arg1->csCtx.state != 0) {
        temp_v0 = arg0->unk_322;
        if ((temp_v0 & 0x200) == 0) {
            arg0->unk_322 = temp_v0 | 0x210;
            arg0->actor.flags &= -2;
            arg0->unk_324 = 0xFF;
        }
        arg0 = arg0;
        func_8013AED4(temp_a0, 0U, 7U);
        arg0->actionFunc = func_80B3D11C;
        phi_v1 = 1;
    } else {
        temp_a0_2 = arg0 + 0x322;
        if ((arg0->unk_322 & 0x200) != 0) {
            arg0->actor.flags |= 1;
            arg0 = arg0;
            sp1C = 0;
            func_8013AED4(temp_a0_2, 3U, 7U);
            arg0->actionFunc = func_80B3D2D4;
            arg0->unk_322 &= 0xFDEF;
        }
    }
    return phi_v1;
}

void func_80B3D11C(EnDnp *this, GlobalContext *globalCtx) {
    u32 sp24;
    s32 sp20;
    GlobalContext *temp_a0;
    s32 temp_t5;
    s32 temp_v0_2;
    u16 *temp_t7;
    u16 temp_v1;
    u32 temp_v0;
    u8 phi_v1;

    temp_a0 = globalCtx;
    if (((gSaveContext.weekEventReg[29] & 0x40) == 0) && (globalCtx->sceneNum == 0x1B) && (globalCtx->csCtx.unk_12 == 0)) {
        this->unk_322 |= 0x20;
        gSaveContext.weekEventReg[29] |= 0x40;
    }
    globalCtx = globalCtx;
    if (func_800EE29C(temp_a0, 0x65U) != 0) {
        temp_v0 = func_800EE200(globalCtx, 0x65U);
        temp_t5 = temp_v0 * 4;
        sp24 = temp_v0;
        temp_t7 = (globalCtx + temp_t5)->unk_1F4C;
        temp_v1 = *temp_t7;
        phi_v1 = (u8) temp_v1;
        if ((temp_v1 & 0xFF) != this->unk_324) {
            sp20 = (s32) temp_v1;
            func_80B3CC38(this, *(&D_80B3DE74 + (temp_v1 * 4)));
            if (this->unk_340 == 0x10) {
                this->unk_322 |= 8;
            } else {
                this->unk_322 &= 0xFFF7;
            }
            if (this->unk_340 == 0x13) {
                sp20 = (s32) temp_v1;
                Audio_PlayActorSound2((Actor *) this, 0x6937U);
            }
            phi_v1 = (u8) *temp_t7;
            if (this->unk_340 == 0x18) {
                this->unk_336 = 3;
                this->unk_334 = 0;
                this->unk_322 &= 0xFF7F;
            }
        }
        temp_v0_2 = this->unk_340;
        this->unk_324 = phi_v1;
        if (((temp_v0_2 == 0xA) || (temp_v0_2 == 0xC) || (temp_v0_2 == 5) || (temp_v0_2 == 0x13) || (temp_v0_2 == 0x16) || (temp_v0_2 == 0x18)) && (func_801378B8(&this->skelAnime, this->skelAnime.animFrameCount) != 0)) {
            func_80B3CC38(this, this->unk_340 + 1);
        }
        func_800EDF24((Actor *) this, globalCtx, sp24);
    }
}

void func_80B3D2D4(EnDnp *this, GlobalContext *globalCtx) {
    if ((this->unk_322 & 0x20) != 0) {
        Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 3, 0x2AA8);
        return;
    }
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.world.rot.y, 3, 0x2AA8);
}

void func_80B3D338(EnDnp *this, GlobalContext *globalCtx) {
    Actor *sp2C;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    if ((this->unk_32E != 0) && (func_80152498(&globalCtx->msgCtx) == 2)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (this->unk_32E == 0) {
        if (func_800B84D0((Actor *) this, globalCtx) != 0) {
            this->unk_32E = 1;
            return;
        }
        this->actor.textId = 0x971;
        sp2C->textId = 0x971;
        func_800B8500((Actor *) this, globalCtx, 9999.9f, 9999.9f, -1);
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_80B3D3F8(EnDnp *this, GlobalContext *globalCtx) {
    if (func_8010BF58((Actor *) this, globalCtx, D_80B3DE58, NULL, &this->unk_328) != 0) {
        func_8013AED4(&this->unk_322, 3U, 7U);
        this->unk_322 &= 0xFFF7;
        this->actionFunc = func_80B3D2D4;
        return;
    }
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 3, 0x2AA8);
}

void func_80B3D47C(Actor *arg0, GlobalContext *arg1) {
    u16 temp_t4;

    if ((arg0->bgCheckFlags & 1) != 0) {
        Math_SmoothStepToF(arg0 + 0x58, 0.0085f, 0.1f, 0.01f, 0.001f);
        if ((s32) (arg0->scale.x * 10000.0f) >= 0x55) {
            arg0->flags |= 1;
            func_8013AED4(arg0 + 0x322, 3U, 7U);
            temp_t4 = arg0->unk_322 & 0xFFEF;
            arg0->unk_322 = temp_t4;
            arg0->unk_322 = (u16) (temp_t4 | 0x400);
            arg0->unk_188 = func_80B3D558;
            arg0->scale.x = 0.0085f;
        }
    }
    Actor_SetScale(arg0, arg0->scale.x);
}

void func_80B3D558(EnDnp *this, GlobalContext *globalCtx) {
    s8 temp_a0;

    temp_a0 = this->actor.cutscene;
    this = this;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
        gSaveContext.weekEventReg[23] |= 0x20;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
}

void EnDnp_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_v0;
    u16 temp_t4;
    EnDnp *this = (EnDnp *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 16.0f);
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06010D60, NULL, this->jointTable, this->morphTable, 0x1A);
    this->unk_340 = -1;
    func_80B3CC38(this, 0xF);
    Collider_InitAndSetCylinder(globalCtx, &this->collider, (Actor *) this, &D_80B3DC80);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80B3DCAC);
    this->unk_322 = 0;
    temp_v0 = this->actor.params & 7;
    this->actor.targetMode = 0;
    this->unk_322 = 0x190;
    this->actor.gravity = -1.0f;
    if (temp_v0 == 1) {
        this->actor.flags &= -2;
        Actor_SetScale((Actor *) this, 0.00085000007f);
        func_8013AED4(&this->unk_322, 0U, 7U);
        this->actor.shape.rot.x = 0;
        this->actor.cutscene = 0x10;
        this->actionFunc = (void (*)(EnDnp *, GlobalContext *)) func_80B3D47C;
        this->actor.world.rot.x = this->actor.shape.rot.x;
        return;
    }
    if (((temp_v0 == 0) && (func_80114F2C(0x17) == 0) && ((gSaveContext.weekEventReg[23] & 0x20) == 0)) || (((this->actor.params & 7) == 2) && ((gSaveContext.weekEventReg[23] & 0x20) != 0))) {
        Actor_SetScale((Actor *) this, 0.0085f);
        func_8013AED4(&this->unk_322, 3U, 7U);
        temp_t4 = this->unk_322 | 0x400;
        this->unk_322 = temp_t4;
        if ((globalCtx->sceneNum == 0x1B) && ((gSaveContext.weekEventReg[29] & 0x40) != 0)) {
            this->unk_322 = temp_t4 | 0x20;
            func_80B3CC38(this, 1);
        }
        this->actionFunc = func_80B3D2D4;
        return;
    }
    Actor_MarkForDeath((Actor *) this);
}

void EnDnp_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnDnp *this = (EnDnp *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnDnp_Update(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp2C;
    f32 sp28;
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_t1;
    s32 temp_t8;
    EnDnp *this = (EnDnp *) thisx;

    if ((func_80B3CF60((Actor *) this, globalCtx) == 0) && (func_80B3D044(this, globalCtx) != 0)) {
        func_80B3D11C(this, globalCtx);
        SkelAnime_FrameUpdateMatrix(&this->skelAnime);
        func_80B3CD1C(this);
        func_80B3CEC0(this, globalCtx);
    } else {
        this->actionFunc(this, globalCtx);
        SkelAnime_FrameUpdateMatrix(&this->skelAnime);
        func_80B3CD1C(this);
        func_80B3CEC0(this, globalCtx);
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 12.0f, 0.0f, 4U);
        temp_t8 = this->collider.dim.radius + 0x32;
        temp_t1 = this->collider.dim.height + 0x1E;
        temp_f0 = (f32) temp_t8;
        temp_f2 = (f32) temp_t1;
        if (((this->unk_322 & 0x400) != 0) && ((gSaveContext.weekEventReg[23] & 0x20) == 0)) {
            sp2C = temp_f0;
            sp28 = temp_f2;
            func_800B8A1C((Actor *) this, globalCtx, 0xBA, temp_f0, temp_f2);
        }
        func_8013C964((Actor *) this, globalCtx, (f32) temp_t8, (f32) temp_t1, 0, (s16) (this->unk_322 & 7));
        Actor_SetHeight((Actor *) this, 30.0f);
        func_80B3CC80((Actor *) this, globalCtx);
    }
    if ((this->unk_322 & 0x100) != 0) {
        func_80B3CA20((Actor *) this);
    }
}

? func_80B3D974(s16 arg0, s16 arg1, void *arg2, s16 *arg3, s32 arg4, s32 arg5) {
    ? sp74;
    s16 sp70;
    s16 sp6E;
    s16 sp6C;
    ? sp2C;

    SysMatrix_MultiplyVector3fByState(&D_801D15B0, (Vec3f *) &sp74);
    SysMatrix_CopyCurrentState((MtxF *) &sp2C);
    func_8018219C((MtxF *) &sp2C, (Vec3s *) &sp6C, 0);
    arg2->unk_0 = (s32) sp74.unk_0;
    arg2->unk_4 = (s32) sp74.unk_4;
    arg2->unk_8 = (s32) sp74.unk_8;
    if (arg4 == 0) {
        if (arg5 != 0) {
            sp70 = arg0;
            sp6E = arg1;
        }
        Math_SmoothStepToS(arg3, sp6C, 3, 0x2AA8, (s16) 0xB6);
        Math_SmoothStepToS(arg3 + 2, sp6E, 3, 0x2AA8, (s16) 0xB6);
        Math_SmoothStepToS(arg3 + 4, sp70, 3, 0x2AA8, (s16) 0xB6);
    } else {
        arg3->unk_0 = sp6C;
        arg3->unk_2 = sp6E;
        arg3->unk_4 = sp70;
    }
    return 1;
}

void func_80B3DA88(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3) {

}

void func_80B3DAA0(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    u16 temp_v0;
    s32 phi_v1;
    s32 phi_v0;

    temp_v0 = arg2->unk_322;
    phi_v1 = 1;
    if ((temp_v0 & 0x10) != 0) {
        goto block_4;
    }
    phi_v1 = 0;
    phi_v1 = 0;
    if ((temp_v0 & 0x40) != 0) {
        phi_v0 = 1;
    } else {
block_4:
        phi_v0 = 0;
    }
    if (arg1 == 0xC) {
        func_80B3D974((s16) (arg2->unk_330 + 0x4000), (s16) (arg2->unk_332 + arg2->shape.rot.y + 0x4000), arg2 + 0x1D8, arg2 + 0x1E4, phi_v1, phi_v0);
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(arg2->unk_1D8, arg2->unk_1DC, arg2->unk_1E0, 0);
        Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
        Matrix_RotateY(arg2->unk_1E6, 1U);
        SysMatrix_InsertXRotation_s(arg2->unk_1E4, 1);
        SysMatrix_InsertZRotation_s(arg2->unk_1E8, 1);
        SysMatrix_StatePush();
    }
}

void EnDnp_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp38;
    Gfx *sp30;
    Gfx *temp_v0;
    GraphicsContext *temp_a0;
    EnDnp *this = (EnDnp *) thisx;

    if ((this->unk_322 & 0x100) != 0) {
        temp_a0 = globalCtx->state.gfxCtx;
        sp38 = temp_a0;
        func_8012C28C(temp_a0);
        temp_v0 = sp38->polyOpa.p;
        sp38->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060020;
        sp30 = temp_v0;
        sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80B3DEAC + (this->unk_336 * 4)));
        func_801343C0(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, NULL, func_80B3DA88, func_80B3DAA0, (Actor *) this);
    }
}
