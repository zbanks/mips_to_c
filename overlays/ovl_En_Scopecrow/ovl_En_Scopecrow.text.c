typedef struct EnScopecrow {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ void (*actionFunc)(EnScopecrow *, GlobalContext *);
    /* 0x18C */ Vec3s unk_18C;                      /* inferred */
    /* 0x192 */ char pad_192[0x30];                 /* maybe part of unk_18C[9]? */
    /* 0x1C2 */ Vec3s unk_1C2;                      /* inferred */
    /* 0x1C8 */ char pad_1C8[0x30];                 /* maybe part of unk_1C2[9]? */
    /* 0x1F8 */ u8 *unk_1F8;                        /* inferred */
    /* 0x1FC */ s32 unk_1FC;                        /* inferred */
    /* 0x200 */ ColliderJntSph unk_200;             /* inferred */
    /* 0x220 */ ColliderJntSphElement unk_220;      /* inferred */
    /* 0x260 */ s16 unk_260;                        /* inferred */
    /* 0x262 */ s16 unk_262;                        /* inferred */
    /* 0x264 */ s16 unk_264;                        /* inferred */
    /* 0x266 */ char pad_266[0x2];
} EnScopecrow;                                      /* size = 0x268 */

struct _mips2c_stack_EnScopecrow_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnScopecrow_Draw {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnScopecrow_Init {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ ColliderJntSph *sp38;                /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad_4C[0xC];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnScopecrow_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BCD000 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BCD09C {};              /* size 0x0 */

struct _mips2c_stack_func_80BCD1AC {};              /* size 0x0 */

struct _mips2c_stack_func_80BCD2BC {
    /* 0x00 */ char pad_0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80BCD334 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0xC];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];                    /* maybe part of sp44[3]? */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ void *sp5C;                          /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80BCD4D0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BCD590 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BCD640 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ u8 *sp2C;                            /* inferred */
    /* 0x30 */ s16 sp30;                            /* inferred */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

f32 func_800C3FA0(CollisionContext *, ? *, f32 *);  /* extern */
void func_80BCD000(EnScopecrow *arg0, GlobalContext *arg1); /* static */
s32 func_80BCD09C(s16 arg0, s16);                   /* static */
s32 func_80BCD1AC(s16 arg0);                        /* static */
void func_80BCD2BC(EnScopecrow *arg0, GlobalContext *arg1); /* static */
s32 func_80BCD334(EnScopecrow *arg0, u8 *arg1, s32 arg2); /* static */
f32 func_80BCD4D0(u8 *arg0, s32 arg1, Vec3f *arg2, s16 *arg3); /* static */
extern AnimationHeader D_060000F0;
extern FlexSkeletonHeader D_060010C0;
static ? D_80BCDB70;                                /* unable to generate initializer */
static ColliderJntSphInit D_80BCDB94;               /* type too large by 4; unable to generate initializer */
static ? *D_80BCDBA0 = &D_80BCDB70;

void func_80BCD000(EnScopecrow *arg0, GlobalContext *arg1) {
    arg0->unk_200.elements->unk_30 = (s16) (s32) arg0->actor.world.pos.x;
    arg0->unk_200.elements->dim.worldSphere.center.y = (s16) (s32) ((f32) D_80BCDBA0->unk_1C + arg0->actor.world.pos.y);
    arg0->unk_200.elements->dim.worldSphere.center.z = (s16) (s32) arg0->actor.world.pos.z;
    CollisionCheck_SetAC(arg1, arg1 + 0x18884, arg0 + 0x200);
}

s32 func_80BCD09C(s16 arg0) {
    switch (arg0) {
    case 0:
        if ((gSaveContext.weekEventReg[53] & 4) != 0) {
            return 1;
        }
        return 0;
    case 1:
        if ((gSaveContext.weekEventReg[53] & 0x80) != 0) {
            return 1;
        }
        return 0;
    case 2:
        if ((gSaveContext.weekEventReg[54] & 1) != 0) {
            return 1;
        }
        return 0;
    case 3:
        if ((gSaveContext.weekEventReg[54] & 2) != 0) {
            return 1;
        }
        return 0;
    case 4:
        if ((gSaveContext.weekEventReg[54] & 4) != 0) {
            return 1;
        }
        return 0;
    case 5:
        if ((gSaveContext.weekEventReg[54] & 8) != 0) {
            return 1;
        }
        return 0;
    default:
        return 0;
    }
}

s32 func_80BCD1AC(s16 arg0) {
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_5;
    u8 temp_v1_6;

    switch (arg0) {
    case 0:
        temp_v1 = gSaveContext.weekEventReg[53];
        if ((temp_v1 & 4) == 0) {
            gSaveContext.weekEventReg[53] = temp_v1 | 4;
            return 1;
        }
    default:
        return 0;
    case 1:
        temp_v1_2 = gSaveContext.weekEventReg[53];
        if ((temp_v1_2 & 0x80) == 0) {
            gSaveContext.weekEventReg[53] = temp_v1_2 | 0x80;
            return 1;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return 0;
    case 2:
        temp_v1_3 = gSaveContext.weekEventReg[54];
        if ((temp_v1_3 & 1) == 0) {
            gSaveContext.weekEventReg[54] = temp_v1_3 | 1;
            return 1;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return 0;
    case 3:
        temp_v1_4 = gSaveContext.weekEventReg[54];
        if ((temp_v1_4 & 2) == 0) {
            gSaveContext.weekEventReg[54] = temp_v1_4 | 2;
            return 1;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return 0;
    case 4:
        temp_v1_5 = gSaveContext.weekEventReg[54];
        if ((temp_v1_5 & 4) == 0) {
            gSaveContext.weekEventReg[54] = temp_v1_5 | 4;
            return 1;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return 0;
    case 5:
        temp_v1_6 = gSaveContext.weekEventReg[54];
        if ((temp_v1_6 & 8) == 0) {
            gSaveContext.weekEventReg[54] = temp_v1_6 | 8;
            return 1;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return 0;
    }
}

void func_80BCD2BC(EnScopecrow *arg0, GlobalContext *arg1) {
    Actor_SpawnAsChildAndCutscene(arg1 + 0x1CA0, arg1, 0x25A, arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, (s16) (s32) arg0->actor.shape.rot.x, (s16) (s32) arg0->actor.shape.rot.y, (s16) (s32) arg0->actor.shape.rot.z, (s32) arg0->actor.params, (u32) arg0->actor.cutscene, (s32) arg0->actor.unk20, NULL);
}

s32 func_80BCD334(EnScopecrow *arg0, u8 *arg1, s32 arg2) {
    void *sp5C;
    s32 sp58;
    s32 sp50;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    ? sp30;
    s32 sp28;
    s32 temp_a3;
    u8 temp_a2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    f32 phi_f12;
    f32 phi_f14;

    temp_v0 = Lib_SegmentedToVirtual(arg1->unk_4);
    temp_a2 = arg1->unk_0;
    temp_a3 = arg2 * 6;
    sp50 = 0;
    sp28 = temp_a3;
    sp5C = temp_v0;
    sp58 = (s32) temp_a2;
    Math_Vec3s_ToVec3f((Vec3f *) &sp30, temp_a3 + temp_v0);
    if (arg2 == 0) {
        phi_f12 = (f32) (sp5C->unk_6 - sp5C->unk_0);
        phi_f14 = (f32) (sp5C->unk_A - sp5C->unk_4);
    } else {
        temp_v0_2 = sp5C + temp_a3;
        if (temp_a2 == (arg2 + 1)) {
            temp_v0_3 = sp5C + (temp_a2 * 6);
            phi_f12 = (f32) (temp_v0_3->unk_-6 - temp_v0_3->unk_-C);
            phi_f14 = (f32) (temp_v0_3->unk_-2 - temp_v0_3->unk_-8);
        } else {
            phi_f12 = (f32) (temp_v0_2->unk_6 - temp_v0_2->unk_-6);
            phi_f14 = (f32) (temp_v0_2->unk_A - temp_v0_2->unk_-2);
        }
    }
    func_8017B7F8((Vec3f *) &sp30, (s16) (s32) (func_80086B30(phi_f12, phi_f14) * 10430.378f), &sp44, &sp40, &sp3C);
    if (((arg0->actor.world.pos.x * sp44) + (sp40 * arg0->actor.world.pos.z) + sp3C) > 0.0f) {
        sp50 = 1;
    }
    return sp50;
}

f32 func_80BCD4D0(u8 *arg0, s32 arg1, Vec3f *arg2, s16 *arg3) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    s16 *temp_v1;

    if (arg0 != 0) {
        temp_v1 = (arg1 * 6) + Lib_SegmentedToVirtual(arg0->unk_4);
        sp20 = (f32) temp_v1->unk_0;
        sp24 = (f32) temp_v1[1];
        sp28 = (f32) temp_v1[2];
    }
    arg3[1] = Math_Vec3f_Yaw(arg2, (Vec3f *) &sp20);
    arg3->unk_0 = Math_Vec3f_Pitch(arg2, (Vec3f *) &sp20);
    return sp24 - arg2->y;
}

void func_80BCD590(EnScopecrow *this, GlobalContext *globalCtx) {
    f32 sp1C;

    func_80169474(globalCtx, (Vec3f *) &this->actor.world, (Vec3f *) &sp1C);
    if ((sp1C >= 130.0f) && (sp1C < 190.0f) && (sp20 >= 90.0f) && (sp20 < 150.0f)) {
        this->actor.draw = EnScopecrow_Draw;
        this->actionFunc = func_80BCD640;
    }
}

void func_80BCD640(EnScopecrow *this, GlobalContext *globalCtx) {
    s16 sp32;
    s16 sp30;
    u8 *sp2C;
    s32 temp_v0;
    u8 *temp_t6;

    temp_t6 = this->unk_1F8;
    sp2C = temp_t6;
    if (temp_t6 != 0) {
        func_80BCD4D0(temp_t6, this->unk_1FC, (Vec3f *) &this->actor.world, &sp30);
        if ((this->actor.bgCheckFlags & 8) != 0) {
            sp32 = this->actor.wallYaw;
        }
        Math_SmoothStepToS(&this->actor.world.rot.y, sp32, 4, 0x3E8, (s16) 1);
        this->actor.shape.rot.y = this->actor.world.rot.y;
        Math_SmoothStepToS((s16 *) &this->actor.world.rot, (s16) ((s32) sp30 * -1), 4, 0x3E8, (s16) 1);
        if (func_80BCD334(this, this->unk_1F8, this->unk_1FC) != 0) {
            if ((this->unk_262 == this->unk_1FC) && (func_80BCD1AC(this->unk_260) != 0)) {
                func_80BCD2BC(this, globalCtx);
            }
            temp_v0 = this->unk_1FC;
            if (temp_v0 >= (*this->unk_1F8 - 1)) {
                Actor_MarkForDeath((Actor *) this);
            } else {
                this->unk_1FC = temp_v0 + 1;
            }
        }
    }
    Math_ApproachF(&this->actor.speedXZ, 6.0f, 0.2f, 1.0f);
    Actor_SetVelocityAndMoveXYRotation((Actor *) this);
    this->unk_264 += 0x1000;
    this->actor.shape.yOffset = Math_SinS(this->unk_264) * 500.0f;
}

void EnScopecrow_Init(Actor *thisx, GlobalContext *globalCtx) {
    ? sp4C;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    ColliderJntSph *sp38;
    ColliderJntSph *temp_a1;
    f32 *temp_a2_2;
    f32 temp_f0;
    s16 *temp_v1;
    s16 temp_a2;
    s16 temp_v0_2;
    s16 temp_v0_4;
    u8 *temp_v0;
    u8 *temp_v0_3;
    EnScopecrow *this = (EnScopecrow *) thisx;

    this->unk_260 = this->actor.params & 0x1F;
    temp_a2 = this->unk_260;
    if (((s32) temp_a2 < 0) || ((s32) temp_a2 >= 6)) {
        this->unk_260 = 0;
    }
    if (func_80BCD09C(this->unk_260, this->unk_260) != 0) {
        temp_v0 = func_8013D648(globalCtx, (s16) ((s32) (this->actor.params & 0xFC00) >> 0xA), 0x3F);
        this->unk_1F8 = temp_v0;
        this->unk_262 = (s16) ((s32) (this->actor.params & 0x3E0) >> 5);
        if (temp_v0 != 0) {
            temp_v0_2 = this->unk_262;
            if (((s32) temp_v0_2 <= 0) || ((*this->unk_1F8 - 1) < (s32) temp_v0_2)) {
                this->unk_262 = *this->unk_1F8 - 1;
            }
            temp_a2_2 = &sp3C;
            temp_v1 = (this->unk_262 * 6) + Lib_SegmentedToVirtual(this->unk_1F8->unk_4);
            sp3C = (f32) temp_v1->unk_0;
            sp40 = (f32) temp_v1[1];
            sp44 = (f32) temp_v1[2];
            this->actor.world.pos.x = temp_a2_2->unk_0;
            this->actor.world.pos.y = temp_a2_2[1];
            this->actor.world.pos.z = temp_a2_2[2];
            temp_f0 = func_800C3FA0(&globalCtx->colCtx, &sp4C, temp_a2_2);
            this->actor.world.pos.y = temp_f0;
            if (temp_f0 == -32000.0f) {
                Actor_MarkForDeath((Actor *) this);
            }
            func_80BCD2BC(this, globalCtx);
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if ((globalCtx->actorCtx.unk5 & 2) != 0) {
        SkelAnime_InitSV(globalCtx, &this->unk_144, &D_060010C0, &D_060000F0, &this->unk_18C, &this->unk_1C2, 9);
        ActorShape_Init(&this->actor.shape, 2000.0f, func_800B3FC0, 20.0f);
        temp_a1 = &this->unk_200;
        sp38 = temp_a1;
        Collider_InitJntSph(globalCtx, temp_a1);
        Collider_InitAndSetJntSph(globalCtx, temp_a1, (Actor *) this, &D_80BCDB94, &this->unk_220);
        this->unk_200.elements->dim.worldSphere.radius = D_80BCDBA0->unk_20;
        Actor_SetScale((Actor *) this, 0.03f);
        temp_v0_3 = func_8013D648(globalCtx, (s16) ((s32) (this->actor.params & 0xFC00) >> 0xA), 0x3F);
        this->unk_1F8 = temp_v0_3;
        this->unk_262 = (s16) ((s32) (this->actor.params & 0x3E0) >> 5);
        if (temp_v0_3 != 0) {
            temp_v0_4 = this->unk_262;
            if (((s32) temp_v0_4 <= 0) || ((*this->unk_1F8 - 1) < (s32) temp_v0_4)) {
                this->unk_262 = *this->unk_1F8 - 1;
            }
            this->actor.draw = NULL;
            this->actor.gravity = 0.0f;
            this->actionFunc = func_80BCD590;
            return;
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    Actor_MarkForDeath((Actor *) this);
}

void EnScopecrow_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnScopecrow *this = (EnScopecrow *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk_200);
}

void EnScopecrow_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnScopecrow *this = (EnScopecrow *) thisx;
    this->actionFunc(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    func_80BCD000(this, globalCtx);
}

void EnScopecrow_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnScopecrow *this = (EnScopecrow *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, NULL, NULL, (Actor *) this);
}
