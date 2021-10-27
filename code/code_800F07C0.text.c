struct _mips2c_stack_func_800F07C0 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800F0888 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800F0944 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800F09B4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800F0A20 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800F0A94 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800F0BB4 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x8];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x3];
    /* 0x3B */ s8 sp3B;                             /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_800F0CE4 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ Actor *sp34;                         /* inferred */
    /* 0x38 */ char pad_38[0x2];
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ s32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_800F0DD4 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ void *sp28;                          /* inferred */
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ s32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800F0E94 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800F0EEC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_800F0F28 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0xC];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x2];
    /* 0x3E */ s16 sp3E;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_800F0FF0 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0xC];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x2];
    /* 0x3E */ s16 sp3E;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_800F10AC {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Collider *sp18;                      /* inferred */
    /* 0x1C */ CollisionCheckContext *sp1C;         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_800F112C {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ u16 sp26;                            /* inferred */
    /* 0x28 */ char pad_28[0x6];                    /* maybe part of sp26[4]? */
    /* 0x2E */ u8 sp2E;                             /* inferred */
    /* 0x2F */ u8 sp2F;                             /* inferred */
};                                                  /* size = 0x30 */

s32 func_800F07C0(SkelAnime *arg0, s16 arg1, s16, Actor *); /* static */
Actor *func_800F0888(Actor *arg0, GlobalContext *arg1); /* static */
void func_800F0944(Actor *arg0, GlobalContext *arg1, s16 arg2); /* static */
? func_800F09B4(void *arg0, s32 arg1);              /* static */
void func_800F0A20(void *arg0, s32 arg1);           /* static */
s32 func_800F0A94(Actor *arg0, GlobalContext *arg1, FlexSkeletonHeader *arg2, s16 arg3); /* static */
void func_800F0BB4(Actor *arg0, GlobalContext *arg1, Actor *arg2, s16 arg3, s16 arg4); /* static */
s32 func_800F0CE4(Actor *arg0, GlobalContext *arg1, void (*arg2)(Actor *, GlobalContext *), s16 arg3, s16 arg4, f32 arg5); /* static */
s32 func_800F0DD4(Actor *arg0, GlobalContext *arg1, s16 arg2, s16 arg3); /* static */
? func_800F0E94(void *arg0, Actor *arg2, s16 arg3); /* static */
? func_800F0EEC(void *arg0, s16 arg2);              /* static */
s32 func_800F0F28(Actor *arg0, f32 arg1);           /* static */
s32 func_800F0FF0(Actor *arg0, f32 arg1);           /* static */
void func_800F10AC(void *arg0, GlobalContext *arg1); /* static */
? func_800F112C(Actor *arg0, GlobalContext *arg1, f32 arg2); /* static */
static ? D_801BC2A0;                                /* unable to generate initializer */
u32 gSegments[16];

s32 func_800F07C0(SkelAnime *arg0, s16 arg1) {
    s32 sp30;
    void *sp2C;
    s16 temp_t0;
    s32 temp_t6;
    void *temp_v1;
    s16 phi_t0;
    s32 phi_t1;

    phi_t1 = 0;
    if ((s32) arg1 >= 0) {
        temp_t6 = arg1 * 0x10;
        if ((s32) arg1 < 0x15) {
            temp_v1 = temp_t6 + &D_801BC2A0;
            temp_t0 = temp_v1->unk_A;
            phi_t0 = temp_t0;
            if ((s32) temp_t0 < 0) {
                sp2C = temp_v1;
                sp30 = 1;
                phi_t0 = SkelAnime_GetFrameCount(temp_v1->unk_0);
            }
            sp30 = 1;
            SkelAnime_ChangeAnim(arg0, (temp_t6 + &D_801BC2A0)->unk_0, (temp_t6 + &D_801BC2A0)->unk_4, (f32) (temp_t6 + &D_801BC2A0)->unk_8, (f32) phi_t0, (u8) (s32) (temp_t6 + &D_801BC2A0)->unk_C, (f32) (temp_t6 + &D_801BC2A0)->unk_E);
            phi_t1 = 1;
        }
    }
    return phi_t1;
}

Actor *func_800F0888(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_s0;
    Actor *temp_s1;
    Actor *temp_v0;
    f32 temp_f0;
    Actor *phi_s0;
    s32 phi_s2;
    f32 phi_f20;
    Actor *phi_s5;

    phi_s0 = NULL;
    phi_s2 = 0;
    phi_f20 = 0.0f;
    phi_s5 = NULL;
    do {
        temp_v0 = func_ActorCategoryIterateById(arg1, phi_s0, 0xA, 5);
        temp_s1 = temp_v0;
        temp_f0 = Actor_DistanceBetweenActors(arg0, temp_v0);
        if ((phi_s2 == 0) || (temp_f0 < phi_f20)) {
            phi_s5 = temp_s1;
            phi_s2 = 1;
            phi_f20 = temp_f0;
        }
        temp_s0 = temp_s1->next;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0);
    return phi_s5;
}

void func_800F0944(Actor *arg0, GlobalContext *arg1, s16 arg2) {
    gSegments[6] = (arg1 + (arg0[1].focus.unk_13 * 0x44))->unk_17D98 + 0x80000000;
    func_800F07C0(arg0 + 0x14C, arg2, arg2, arg0);
}

? func_800F09B4(void *arg0, s32 arg1) {
    ? phi_v1;

    phi_v1 = 0;
    if (arg0->unk_13C != 0) {
        gSegments[6] = (arg1 + (arg0->unk_193 * 0x44))->unk_17D98 + 0x80000000;
        SkelAnime_FrameUpdateMatrix(arg0 + 0x14C);
        phi_v1 = 1;
    }
    return phi_v1;
}

void func_800F0A20(void *arg0, s32 arg1) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk_3E8;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_3E8 = (s16) (temp_v0 - 1);
        phi_v1 = arg0->unk_3E8;
    }
    if (phi_v1 == 0) {
        arg0->unk_3E6 = (s16) (arg0->unk_3E6 + 1);
        if ((s32) arg0->unk_3E6 >= arg1) {
            arg0->unk_3E6 = 0;
            arg0 = arg0;
            arg0->unk_3E8 = Rand_S16Offset(0x1E, 0x1E);
        }
    }
}

s32 func_800F0A94(Actor *arg0, GlobalContext *arg1, FlexSkeletonHeader *arg2, s16 arg3) {
    s32 sp34;

    sp34 = 0;
    if ((func_8013D8DC(arg0[1].focus.unk_13, arg1) == 1) && (func_8013D8DC(arg0->unk_190, arg1) == 1) && (func_8013D8DC(arg0->unk_191, arg1) == 1) && (func_8013D8DC(arg0[1].focus.unk_12, arg1) == 1)) {
        arg0->objBankIndex = arg0[1].focus.unk_12;
        sp34 = 1;
        ActorShape_Init(arg0 + 0xBC, 0.0f, NULL, 0.0f);
        gSegments[6] = (u32) (arg1->objectCtx.status[arg0->objBankIndex].segment + 0x80000000);
        SkelAnime_InitSV(arg1, arg0 + 0x14C, arg2, NULL, arg0 + 0x206, arg0 + 0x266, 0x10);
        func_800F0944(arg0, arg1, arg3);
    }
    return sp34;
}

void func_800F0BB4(Actor *arg0, GlobalContext *arg1, Actor *arg2, s16 arg3, s16 arg4) {
    s8 sp3B;
    ? sp2C;
    void *temp_t0;
    void *temp_t3;
    f32 phi_f0;
    s8 phi_v1;
    s16 phi_v0;

    Actor_CalcOffsetOrientedToDrawRotation(arg2, (Vec3f *) &sp2C, arg0 + 0x24);
    phi_v1 = 2;
    phi_v0 = arg4;
    if (sp34 >= 0.0f) {
        phi_f0 = 1.0f;
    } else {
        phi_f0 = -1.0f;
    }
    if ((s32) (s8) (s32) phi_f0 < 0) {
        phi_v1 = 0;
    }
    if (phi_v1 == 0) {
        phi_v0 = arg3;
    }
    sp3B = phi_v1;
    func_800F0944(arg0, arg1, phi_v0);
    temp_t0 = arg0[1].world.pos.y;
    temp_t3 = arg0[1].world.pos.y;
    arg0->unk_18A = (unaligned s32) temp_t0->unk_0;
    arg0[1].focus.rot.y = temp_t0->unk_4;
    arg0->unk_184 = (unaligned s32) temp_t3->unk_0;
    arg0->unk_181 = (u8) (arg0->unk_181 | 3);
    arg0->unk_188 = (u16) temp_t3->unk_4;
    SkelAnime_LoadAnimationType5(arg1, arg0, arg0 + 0x14C, 1.0f);
    arg2->unk_1A1 = 1;
    arg2->unk_1A0 = phi_v1;
}

s32 func_800F0CE4(Actor *arg0, GlobalContext *arg1, void (*arg2)(Actor *, GlobalContext *), s16 arg3, s16 arg4, f32 arg5) {
    s32 sp3C;
    s16 sp3A;
    Actor *sp34;
    void *sp28;
    Actor *temp_a2_2;
    Actor *temp_v0;
    s16 temp_v0_2;
    s32 temp_a0;
    s32 temp_v0_3;
    void *temp_a2;

    sp3C = 0;
    temp_a2 = arg0 + 0x24;
    sp28 = temp_a2;
    if (func_8013D68C(arg0[1].colChkInfo.damageTable, arg0->unk_1E8, temp_a2) != 0) {
        temp_v0 = func_800F0888(arg0, arg1);
        temp_a2_2 = temp_v0;
        if (temp_v0 != 0) {
            sp3C = 1;
            sp34 = temp_v0;
            func_800F0BB4(arg0, arg1, temp_a2_2, arg3, (s16) (s32) arg4);
            temp_v0_2 = Math_Vec3f_Yaw((Vec3f *) sp28, (Vec3f *) &sp34->world);
            temp_a0 = temp_v0_2 << 0x10;
            sp3A = temp_v0_2;
            arg0->world.pos.x += arg5 * Math_SinS((s16) (temp_a0 >> 0x10));
            arg0->world.pos.z += arg5 * Math_CosS(sp3A);
            temp_v0_3 = -(s32) temp_v0_2;
            arg0->world.rot.y = (s16) temp_v0_3;
            arg0->shape.rot.y = (s16) temp_v0_3;
            arg0->draw = arg2;
        }
    }
    return sp3C;
}

s32 func_800F0DD4(Actor *arg0, GlobalContext *arg1, s16 arg2, s16 arg3) {
    s32 sp34;
    Actor *sp2C;
    void *sp28;
    Actor *temp_a2_2;
    Actor *temp_v0;
    void *temp_a2;

    sp34 = 0;
    arg0->unk_1E8 = 0;
    temp_a2 = arg0 + 0x24;
    sp28 = temp_a2;
    if (func_8013D68C(arg0[1].colChkInfo.damageTable, arg0->unk_1E8, temp_a2) != 0) {
        temp_v0 = func_800F0888(arg0, arg1);
        temp_a2_2 = temp_v0;
        if (temp_v0 != 0) {
            sp34 = 1;
            sp2C = temp_v0;
            func_800F0BB4(arg0, arg1, temp_a2_2, arg2, (s16) (s32) arg3);
            arg0->shape.rot.y = Math_Vec3f_Yaw((Vec3f *) sp28, (Vec3f *) &sp2C->world);
            arg0->flags &= -2;
            arg0->world.rot.y = arg0->shape.rot.y;
            arg0->gravity = 0.0f;
        }
    }
    return sp34;
}

? func_800F0E94(void *arg0, Actor *arg2, s16 arg3) {
    arg0->unk_74 = arg2;
    arg0->unk_4 = (s32) (arg0->unk_4 | 1);
    func_800F0944(arg2, (GlobalContext *) arg3, arg3);
    arg0->unk_1E8 = (s16) (arg0->unk_1E8 + 1);
    return 0;
}

? func_800F0EEC(void *arg0, s16 arg2) {
    func_800F0944((Actor *) arg2);
    arg0->unk_1E8 = (s16) (arg0->unk_1E8 - 1);
    return 0;
}

s32 func_800F0F28(Actor *arg0, f32 arg1) {
    s16 sp3E;
    s32 sp38;
    ? sp2C;

    sp38 = 0;
    Math_SmoothStepToF(arg0 + 0x70, arg1, 0.4f, 1000.0f, 0.0f);
    sp3E = (s16) (s32) (arg0->speedXZ * 400.0f);
    if ((func_8013D68C(arg0[1].colChkInfo.damageTable, arg0->unk_1E8, (void *) &sp2C) != 0) && (func_8013D768(arg0, (void *) &sp2C, sp3E) != 0)) {
        arg0->unk_1E8 = (s16) (arg0->unk_1E8 + 1);
        if ((s32) arg0->unk_1E8 >= (s32) arg0[1].colChkInfo.damageTable->attack[0]) {
            sp38 = 1;
        }
    }
    return sp38;
}

s32 func_800F0FF0(Actor *arg0, f32 arg1) {
    s16 sp3E;
    s32 sp38;
    ? sp2C;

    sp38 = 0;
    Math_SmoothStepToF(arg0 + 0x70, arg1, 0.4f, 1000.0f, 0.0f);
    sp3E = (s16) (s32) (arg0->speedXZ * 400.0f);
    if ((func_8013D68C(arg0[1].colChkInfo.damageTable, arg0->unk_1E8, (void *) &sp2C) != 0) && (func_8013D768(arg0, (void *) &sp2C, sp3E) != 0)) {
        arg0->unk_1E8 = (s16) (arg0->unk_1E8 - 1);
        if ((s32) arg0->unk_1E8 < 0) {
            sp38 = 1;
        }
    }
    return sp38;
}

void func_800F10AC(void *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp1C;
    Collider *sp18;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;

    temp_a2 = arg0 + 0x194;
    arg0->unk_1DA = (s16) (s32) arg0->unk_24;
    arg0->unk_1DC = (s16) (s32) arg0->unk_28;
    arg0->unk_1DE = (s16) (s32) arg0->unk_2C;
    sp18 = temp_a2;
    temp_a1 = arg1 + 0x18884;
    sp1C = temp_a1;
    CollisionCheck_SetAC(arg1, temp_a1, temp_a2);
    CollisionCheck_SetOC(arg1, temp_a1, temp_a2);
}

? func_800F112C(Actor *arg0, GlobalContext *arg1, f32 arg2) {
    u8 sp2F;
    u8 sp2E;
    u16 sp26;
    u8 temp_v0;
    u8 temp_v0_2;
    s32 phi_v0;

    sp2F = arg0->unk_204;
    sp2E = arg0->unk_205;
    if ((arg0->bgCheckFlags & 0x20) != 0) {
        phi_v0 = 5;
        if (arg0->yDistToWater < 20.0f) {
            phi_v0 = 4;
        }
        sp26 = phi_v0 + 0x800;
    } else {
        sp26 = func_800C9BDC(arg1 + 0x830, arg0->floorPoly, (s32) arg0->floorBgId) + 0x800;
    }
    temp_v0 = func_8013DB90(arg1, arg0 + 0x1EC, arg2);
    arg0->unk_204 = temp_v0;
    if (((temp_v0 & 0xFF) != 0) && (sp2F == 0) && ((temp_v0 & 0xFF) != 0)) {
        Audio_PlayActorSound2(arg0, sp26);
    }
    temp_v0_2 = func_8013DB90(arg1, (void *) &arg0[1].colChkInfo.cylYShift, arg2);
    arg0->unk_205 = temp_v0_2;
    if (((temp_v0_2 & 0xFF) != 0) && (sp2E == 0) && ((temp_v0_2 & 0xFF) != 0)) {
        Audio_PlayActorSound2(arg0, sp26);
    }
    return 0;
}
