typedef struct EnRuppecrow {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char pad_144[0x50];
    /* 0x194 */ SkelAnime unk_194;                  /* inferred */
    /* 0x1D8 */ void (*actionFunc)(EnRuppecrow *, GlobalContext *);
    /* 0x1DC */ char pad_1DC[0x4];
    /* 0x1E0 */ Vec3s unk_1E0;                      /* inferred */
    /* 0x1E6 */ char pad_1E6[0x30];                 /* maybe part of unk_1E0[9]? */
    /* 0x216 */ Vec3s unk_216;                      /* inferred */
    /* 0x21C */ char pad_21C[0x30];                 /* maybe part of unk_216[9]? */
    /* 0x24C */ Path *unk_24C;                      /* inferred */
    /* 0x250 */ char pad_250[0x4];
    /* 0x254 */ ColliderJntSph unk_254;             /* inferred */
    /* 0x274 */ ColliderJntSphElement unk_274;      /* inferred */
    /* 0x2B4 */ char pad_2B4[0x50];                 /* maybe part of unk_274[2]? */
} EnRuppecrow;                                      /* size = 0x304 */

struct _mips2c_stack_EnRuppecrow_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnRuppecrow_Draw {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnRuppecrow_Init {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ColliderJntSph *sp34;                /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnRuppecrow_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BE2260 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BE2330 {
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

struct _mips2c_stack_func_80BE24CC {
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

struct _mips2c_stack_func_80BE2668 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BE2728 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BE2794 {};              /* size 0x0 */

struct _mips2c_stack_func_80BE2808 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BE2874 {
    /* 0x00 */ char pad_0[0x3A];
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];                    /* maybe part of sp3A[3]? */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80BE2B80 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s16 sp30;                            /* inferred */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BE2D4C {};              /* size 0x0 */

struct _mips2c_stack_func_80BE2E18 {};              /* size 0x0 */

struct _mips2c_stack_func_80BE2F6C {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BE30F4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BE3178 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BE32DC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BE3354 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BE348C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BE35A4 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ PosRot *sp34;                        /* inferred */
};                                                  /* size = 0x38 */

? func_80BE2260(Actor *arg0, GlobalContext *arg1);  /* static */
s32 func_80BE2330(Actor *arg0, u8 *arg1, s32 arg2); /* static */
s32 func_80BE24CC(Actor *arg0, u8 *arg1, s32 arg2); /* static */
f32 func_80BE2668(u8 *arg0, s32 arg1, Vec3f *arg2, s16 *arg3); /* static */
void func_80BE2728(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BE2794(GlobalContext *arg0);             /* static */
void func_80BE2808(EnRuppecrow *arg0);              /* static */
void func_80BE2874(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BE2B80(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BE2D4C(GlobalContext *arg0);             /* static */
void func_80BE2E18(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BE2F6C(Actor *arg0);                    /* static */
void func_80BE30F4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BE3178(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BE32DC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BE3354(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BE348C(Actor *arg0, void *arg1);        /* static */
void func_80BE35A4(Actor *arg0, GlobalContext *arg1); /* static */
extern AnimationHeader D_060000F0;
extern FlexSkeletonHeader D_060010C0;
static ? D_80BE39B0;                                /* unable to generate initializer */
static ColliderJntSphInit D_80BE39D4;               /* type too large by 4; unable to generate initializer */
static ? *D_80BE39E0 = &D_80BE39B0;
static CollisionCheckInfoInit D_80BE39E4 = {1, 0xF, 0x1E, 0x1E};
static DamageTable D_80BE39EC = {
    {
        0x10,
        1,
        1,
        1,
        1,
        1,
        0,
        1,
        1,
        1,
        1,
        0x22,
        0x32,
        0x42,
        1,
        1,
        1,
        2,
        0x10,
        0,
        0,
        0,
        1,
        1,
        1,
        0,
        0,
        0,
        0,
        0,
        0,
        1,
    },
};
static InitChainEntry D_80BE3A0C[5];                /* unable to generate initializer */

? func_80BE2260(Actor *arg0, GlobalContext *arg1) {
    CollisionCheckContext *temp_a1;
    GlobalContext *temp_a0;

    temp_a1 = arg1 + 0x18884;
    temp_a0 = arg1;
    arg0->unk_270->unk_30 = (s16) (s32) arg0->world.pos.x;
    arg0->unk_270->unk_32 = (s16) (s32) ((f32) D_80BE39E0->unk_1C + arg0->world.pos.y);
    arg0->unk_270->unk_34 = (s16) (s32) arg0->world.pos.z;
    arg1 = arg1;
    CollisionCheck_SetAC(temp_a0, temp_a1, arg0 + 0x254);
    Actor_UpdateBgCheckInfo(arg1, arg0, 12.0f, 25.0f, 50.0f, 7U);
    return 1;
}

s32 func_80BE2330(Actor *arg0, u8 *arg1, s32 arg2) {
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
    if (((arg0->world.pos.x * sp44) + (sp40 * arg0->world.pos.z) + sp3C) > 0.0f) {
        sp50 = 1;
    }
    return sp50;
}

s32 func_80BE24CC(Actor *arg0, u8 *arg1, s32 arg2) {
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
        phi_f12 = (f32) (sp5C->unk_0 - sp5C->unk_6);
        phi_f14 = (f32) (sp5C->unk_4 - sp5C->unk_A);
    } else {
        temp_v0_2 = sp5C + temp_a3;
        if (temp_a2 == (arg2 + 1)) {
            temp_v0_3 = sp5C + (temp_a2 * 6);
            phi_f12 = (f32) (temp_v0_3->unk_-C - temp_v0_3->unk_-6);
            phi_f14 = (f32) (temp_v0_3->unk_-8 - temp_v0_3->unk_-2);
        } else {
            phi_f12 = (f32) (temp_v0_2->unk_-6 - temp_v0_2->unk_6);
            phi_f14 = (f32) (temp_v0_2->unk_-2 - temp_v0_2->unk_A);
        }
    }
    func_8017B7F8((Vec3f *) &sp30, (s16) (s32) (func_80086B30(phi_f12, phi_f14) * 10430.378f), &sp44, &sp40, &sp3C);
    if (((arg0->world.pos.x * sp44) + (sp40 * arg0->world.pos.z) + sp3C) > 0.0f) {
        sp50 = 1;
    }
    return sp50;
}

f32 func_80BE2668(u8 *arg0, s32 arg1, Vec3f *arg2, s16 *arg3) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    s16 *temp_v1;

    if (arg0 != 0) {
        temp_v1 = (arg1 * 6) + Lib_SegmentedToVirtual(arg0->unk_4);
        sp20 = (f32) temp_v1->unk_0;
        sp24 = (f32) temp_v1->unk_2;
        sp28 = (f32) temp_v1->unk_4;
    }
    arg3->unk_2 = Math_Vec3f_Yaw(arg2, (Vec3f *) &sp20);
    arg3->unk_0 = Math_Vec3f_Pitch(arg2, (Vec3f *) &sp20);
    return sp24 - arg2->y;
}

void func_80BE2728(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk_2C4 == 0xA) {
        arg0->unk_2C4 = 0U;
        arg0->unk_2C8 = 0.0f;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x2D4), 4, 2, 0.2f, 0.2f);
    }
}

s32 func_80BE2794(GlobalContext *arg0) {
    u8 temp_v1;
    void *temp_v0;

    temp_v0 = arg0->actorCtx.actorList[2].first;
    temp_v1 = temp_v0->unk_14B;
    if (temp_v1 != 1) {
        if (temp_v1 != 2) {
            if (temp_v1 != 3) {
                if (temp_v1 != 4) {
                    return 0;
                }
                if (temp_v0->unk_A6C & 0x800000) {
                    return 1;
                }
                return 0;
            }
            return 0;
        }
        return 0;
    }
    return 1;
}

void func_80BE2808(EnRuppecrow *arg0) {
    Actor *temp_a0;
    s16 temp_s0;
    s16 phi_s0;

    phi_s0 = 0;
    do {
        temp_a0 = (arg0 + (phi_s0 * 4))->unk_144;
        if ((temp_a0 != 0) && (temp_a0->unk_152 == 0)) {
            Actor_MarkForDeath(temp_a0);
        }
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while ((s32) temp_s0 < 0x14);
}

void func_80BE2874(Actor *arg0, GlobalContext *arg1) {
    f32 sp40;
    s16 sp3A;
    Actor *temp_v0_10;
    Actor *temp_v0_3;
    Actor *temp_v0_4;
    Actor *temp_v0_5;
    Actor *temp_v0_6;
    Actor *temp_v0_7;
    Actor *temp_v0_8;
    Actor *temp_v0_9;
    s16 temp_v0;
    s16 temp_v0_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    f32 phi_f0;

    temp_v0 = arg0->unk_2BC;
    sp3A = temp_v0;
    if ((arg1->actorCtx.actorList[2].first->unk_A74 & 0x1000) == 0) {
        if ((temp_v0 & 1) != 0) {
            phi_f0 = 10.0f;
        } else {
            phi_f0 = -10.0f;
        }
    } else {
        phi_f0 = 0.0f;
    }
    sp40 = phi_f0;
    if ((func_80BE2794(arg1) != 0) && (temp_v0_2 = arg0->unk_2BC, (((s32) temp_v0_2 % 5) == 4))) {
        if (temp_v0_2 == 0x13) {
            temp_v0_3 = Actor_Spawn(arg1 + 0x1CA0, arg1, 0xE, arg0->world.pos.x + phi_f0, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 2);
            temp_s0 = arg0 + (sp3A * 4);
            temp_s0->unk_144 = temp_v0_3;
            temp_v0_3->gravity = -5.0f;
            temp_s0->unk_144->velocity.y = 0.0f;
            Audio_PlayActorSound2(arg0, 0x28D9U);
            temp_s0->unk_144->unk_152 = 0x3C;
            temp_v0_4 = temp_s0->unk_144;
            temp_v0_4->flags |= 0x10;
        } else {
            temp_v0_5 = Actor_Spawn(arg1 + 0x1CA0, arg1, 0xE, arg0->world.pos.x + phi_f0, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 1);
            temp_s0_2 = arg0 + (sp3A * 4);
            temp_s0_2->unk_144 = temp_v0_5;
            temp_v0_5->gravity = -5.0f;
            temp_s0_2->unk_144->velocity.y = 0.0f;
            Audio_PlayActorSound2(arg0, 0x28D9U);
            temp_s0_2->unk_144->unk_152 = 0x3C;
            temp_v0_6 = temp_s0_2->unk_144;
            temp_v0_6->flags |= 0x10;
        }
    } else if (arg0->unk_2BC == 0x13) {
        temp_v0_7 = Actor_Spawn(&arg1->actorCtx, arg1, 0xE, arg0->world.pos.x + phi_f0, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 2);
        temp_s0_3 = arg0 + (sp3A * 4);
        temp_s0_3->unk_144 = temp_v0_7;
        temp_v0_7->gravity = -5.0f;
        temp_s0_3->unk_144->velocity.y = 0.0f;
        Audio_PlayActorSound2(arg0, 0x28D9U);
        temp_s0_3->unk_144->unk_152 = 0x3C;
        temp_v0_8 = temp_s0_3->unk_144;
        temp_v0_8->flags |= 0x10;
    } else {
        temp_v0_9 = Actor_Spawn(&arg1->actorCtx, arg1, 0xE, arg0->world.pos.x + phi_f0, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
        temp_s0_4 = arg0 + (sp3A * 4);
        temp_s0_4->unk_144 = temp_v0_9;
        temp_v0_9->gravity = -5.0f;
        temp_s0_4->unk_144->velocity.y = 0.0f;
        Audio_PlayActorSound2(arg0, 0x28D9U);
        temp_s0_4->unk_144->unk_152 = 0x3C;
        temp_v0_10 = temp_s0_4->unk_144;
        temp_v0_10->flags |= 0x10;
    }
    arg0->unk_2BC = (s16) (arg0->unk_2BC + 1);
}

void func_80BE2B80(Actor *arg0, GlobalContext *arg1) {
    s16 sp32;
    s16 sp30;
    s32 temp_v0;
    s32 temp_v0_2;

    func_80BE2668(arg0->unk_24C, arg0->unk_250, arg0 + 0x24, &sp30);
    if ((arg0->bgCheckFlags & 8) != 0) {
        sp32 = arg0->wallYaw;
    }
    Math_SmoothStepToS(arg0 + 0x32, sp32, 4, 0x3E8, (s16) 1);
    arg0->shape.rot.y = arg0->world.rot.y;
    Math_SmoothStepToS(arg0 + 0x30, (s16) ((s32) sp30 * -1), 4, 0x3E8, (s16) 1);
    if ((arg0->unk_2B4 & 1) != 0) {
        if (func_80BE24CC(arg0, arg0->unk_24C, arg0->unk_250) != 0) {
            temp_v0 = arg0->unk_250;
            if (temp_v0 <= 0) {
                arg0->unk_250 = (s32) (*arg0->unk_24C - 1);
            } else {
                arg0->unk_250 = (s32) (temp_v0 - 1);
            }
            if ((func_80BE3354 == arg0->unk_1D8) && ((func_80BE2794(arg1) == 0) || (((s32) arg0->unk_250 % 2) == 0))) {
                func_80BE2874(arg0, arg1);
                return;
            }
            /* Duplicate return node #19. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return;
    }
    if (func_80BE2330(arg0, arg0->unk_24C, arg0->unk_250) != 0) {
        temp_v0_2 = arg0->unk_250;
        if (temp_v0_2 >= (*arg0->unk_24C - 1)) {
            arg0->unk_250 = 0;
        } else {
            arg0->unk_250 = (s32) (temp_v0_2 + 1);
        }
        if ((func_80BE3354 == arg0->unk_1D8) && ((func_80BE2794(arg1) == 0) || (((s32) arg0->unk_250 % 2) == 0))) {
            func_80BE2874(arg0, arg1);
        }
    }
}

s32 func_80BE2D4C(GlobalContext *arg0) {
    u16 temp_v0;
    u8 temp_a0;

    if (arg0->msgCtx.unk1202A == 3) {
        temp_a0 = arg0->actorCtx.actorList[2].first->unk_14B;
        if (temp_a0 != 1) {
            if (temp_a0 != 2) {
                if (temp_a0 != 3) {
                    if (temp_a0 != 4) {
                        /* Duplicate return node #18. Try simplifying control flow for better match */
                        return 0;
                    }
                    temp_v0 = arg0->msgCtx.unk1202E;
                    if (temp_v0 == 0) {
                        return 1;
                    }
                    if (temp_v0 == 1) {
                        return 1;
                    }
                    if (temp_v0 == 2) {
                        return 1;
                    }
                    /* Duplicate return node #18. Try simplifying control flow for better match */
                    return 0;
                }
                if (arg0->msgCtx.unk1202E == 0) {
                    return 1;
                }
                /* Duplicate return node #18. Try simplifying control flow for better match */
                return 0;
            }
            if (arg0->msgCtx.unk1202E == 2) {
                return 1;
            }
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return 0;
        }
        if (arg0->msgCtx.unk1202E == 1) {
            return 1;
        }
        /* Duplicate return node #18. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

void func_80BE2E18(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f2;
    u8 temp_v1;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_v1 = temp_v0->unk_14B;
    if (temp_v1 != 1) {
        if (temp_v1 != 2) {
            if (temp_v1 != 3) {
                if (temp_v1 != 4) {

                } else if (temp_v0->unk_A6C & 0x800000) {
                    arg0->unk_2B8 = 16.0f;
                } else {
                    arg0->unk_2B8 = 7.0f;
                }
            } else {
                arg0->unk_2B8 = 7.0f;
            }
        } else {
            arg0->unk_2B8 = 7.0f;
        }
    } else if ((temp_v0->unk_A74 & 0x1000) != 0) {
        arg0->unk_2B8 = 19.0f;
    } else {
        arg0->unk_2B8 = 7.0f;
    }
    temp_f0 = arg0->unk_2B8;
    temp_f2 = arg0->xzDistToPlayer;
    arg0->unk_1B0 = (f32) (temp_f0 / 6.0f);
    if (temp_f2 > 800.0f) {
        arg0->unk_2B8 = (f32) (temp_f0 * 0.5f);
        return;
    }
    if (temp_f2 > 500.0f) {
        arg0->unk_2B8 = (f32) (temp_f0 * 0.8f);
        return;
    }
    if (temp_f2 < 150.0f) {
        arg0->unk_2B8 = (f32) (temp_f0 * 1.2f);
    }
}

void func_80BE2F6C(Actor *arg0) {
    f32 temp_f6;
    u8 temp_v0;

    temp_f6 = arg0->speedXZ * Math_CosS(arg0->world.rot.x);
    arg0->velocity.y = 0.0f;
    arg0->speedXZ = temp_f6;
    SkelAnime_ChangeAnim(arg0 + 0x194, &D_060000F0, 0.4f, 0.0f, 0.0f, (u8) 1, -3.0f);
    arg0->shape.yOffset = 0.0f;
    arg0->targetArrowOffset = 0.0f;
    arg0->bgCheckFlags &= 0xFFFE;
    arg0->world.pos.y += 20.0f * (arg0->scale.x * 100.0f);
    Audio_PlayActorSound2(arg0, 0x38EBU);
    temp_v0 = arg0->colChkInfo.damageEffect;
    arg0->unk_2CC = 0.5f;
    if (temp_v0 == 3) {
        arg0->unk_2C4 = 0xA;
        arg0->unk_2C8 = 1.0f;
        arg0->unk_2D0 = 0.75f;
    } else if (temp_v0 == 4) {
        arg0->unk_2C4 = 0x14;
        arg0->unk_2C8 = 5.0f;
    } else if (temp_v0 == 2) {
        arg0->unk_2C4 = 0;
        arg0->unk_2C8 = 5.0f;
    }
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x28);
    if ((arg0->flags & 0x8000) != 0) {
        arg0->speedXZ = 0.0f;
    }
    arg0->flags |= 0x10;
    arg0->unk_265 = (u8) (arg0->unk_265 & 0xFFFE);
    arg0->unk_1D8 = func_80BE35A4;
}

void func_80BE30F4(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a1_2;
    u8 temp_v0;
    void *temp_a1;

    temp_v0 = arg0->unk_265;
    temp_a0 = arg0;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_265 = (u8) (temp_v0 & 0xFFFD);
        temp_a1 = arg0->unk_270;
        arg0 = arg0;
        func_800BE258(temp_a0, temp_a1);
        temp_a1_2 = arg0;
        if (arg0->colChkInfo.damageEffect != 1) {
            arg0->colChkInfo.health = 0;
            arg0->flags &= -2;
            arg0 = arg0;
            Enemy_StartFinishingBlow(arg1, temp_a1_2);
            func_80BE2F6C(arg0);
        }
    }
}

void func_80BE3178(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    s32 temp_v0;

    sp24 = arg1->actorCtx.actorList[2].first;
    func_80BE2B80(arg0);
    if ((arg0->xzDistToPlayer < 1000.0f) && (func_80BE2D4C(arg1) != 0)) {
        if (Actor_IsActorFacingLink(arg0, 0x4000) != 0) {
            temp_v0 = arg0->unk_250;
            arg0->unk_2B4 = (u16) (arg0->unk_2B4 | 1);
            if (temp_v0 > 0) {
                arg0->unk_250 = (s32) (temp_v0 - 1);
            } else {
                arg0->unk_250 = (s32) (*arg0->unk_24C - 1);
            }
        }
        ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
        arg0->unk_1D8 = func_80BE32DC;
    }
    if ((sp24->unk_A70 * 0x10) < 0) {
        Math_ApproachF(&arg0->speedXZ, 0.0f, 0.1f, 1.0f);
    } else {
        Math_ApproachF(&arg0->speedXZ, 6.0f, 0.1f, 0.1f);
    }
    Actor_SetVelocityAndMoveXYRotation(arg0);
    arg0->unk_2BE = (s16) (arg0->unk_2BE + 0x1000);
    arg0->shape.yOffset = Math_SinS(arg0->unk_2BE) * 500.0f;
    if (((u32) arg1->state.frames % 0x2BU) == 0) {
        Audio_PlayActorSound2(arg0, 0x38B6U);
    }
}

void func_80BE32DC(Actor *arg0, GlobalContext *arg1) {
    func_80BE2B80(arg0, arg1);
    if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
        ActorCutscene_Start((s16) arg0->cutscene, arg0);
        func_80BE2E18(arg0, arg1);
        arg0->unk_1D8 = func_80BE3354;
    } else {
        ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
    }
    Actor_SetVelocityAndMoveXYRotation(arg0);
}

void func_80BE3354(Actor *arg0, GlobalContext *arg1) {
    func_80BE2B80(arg0, arg1);
    if ((s32) arg0->unk_2BC >= 0x14) {
        arg0->unk_2B8 = 6.0f;
        arg0->gravity = 0.0f;
        Math_ApproachF(&arg0->speedXZ, 6.0f, 0.2f, 0.5f);
        Math_ApproachF(&arg0->velocity.y, 3.0f, 0.2f, 0.5f);
        arg0->unk_1D8 = func_80BE348C;
        arg0->unk_1B0 = 1.0f;
        Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
        return;
    }
    if (ActorCutscene_GetCurrentIndex() != arg0->cutscene) {
        func_80BE2E18(arg0, arg1);
        Math_ApproachF(&arg0->speedXZ, arg0->unk_2B8, 0.2f, 0.5f);
    }
    Actor_SetVelocityAndMoveXYRotation(arg0);
    arg0->unk_2BE = (s16) (arg0->unk_2BE + 0x1000);
    arg0->shape.yOffset = Math_SinS(arg0->unk_2BE) * 500.0f;
    if (((u32) arg1->state.frames % 0x2BU) == 0) {
        Audio_PlayActorSound2(arg0, 0x38B6U);
    }
}

void func_80BE348C(Actor *arg0, void *arg1) {
    if ((arg0->bgCheckFlags & 8) != 0) {
        arg0->world.rot.y = (s16) -(s32) arg0->world.rot.y;
    }
    Math_ApproachF(arg0 + 0x70, arg0->unk_2B8, 0.1f, 0.1f);
    Math_ApproachF(arg0 + 0x68, 3.0f, 0.2f, 0.5f);
    if ((arg0->world.pos.y > 1000.0f) || (arg0->xzDistToPlayer > 2000.0f)) {
        Actor_MarkForDeath(arg0);
        return;
    }
    arg0->unk_2BE = (s16) (arg0->unk_2BE + 0x800);
    arg0->shape.yOffset = Math_SinS(arg0->unk_2BE) * 500.0f;
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    if (((u32) arg1->unk_9C % 0x2BU) == 0) {
        Audio_PlayActorSound2(arg0, 0x38B6U);
    }
}

void func_80BE35A4(Actor *arg0, GlobalContext *arg1) {
    PosRot *sp34;
    PosRot *temp_a1;
    f32 temp_f0;

    Math_StepToF(arg0 + 0x70, 0.0f, 0.5f);
    if (arg0->unk_2C4 != 0xA) {
        Math_StepToF(arg0 + 0x2C8, 0.0f, 0.05f);
        temp_f0 = (arg0->unk_2C8 + 1.0f) * 0.25f;
        arg0->unk_2CC = temp_f0;
        if (temp_f0 > 0.5f) {
            arg0->unk_2CC = 0.5f;
        } else {
            arg0->unk_2CC = (f32) arg0->unk_2CC;
        }
    } else if (Math_StepToF(arg0 + 0x2D0, 0.5f, 0.0125f) == 0) {
        func_800B9010(arg0, 0x20B2U);
    }
    arg0->colorFilterTimer = 0x28;
    if ((arg0->flags & 0x8000) == 0) {
        if (arg0->unk_2C4 != 0xA) {
            Math_ScaledStepToS((s16 *) &arg0->shape, 0x4000, 0x200);
            arg0->shape.rot.z += 0x1780;
        }
        if (((arg0->bgCheckFlags & 1) != 0) || (arg0->floorHeight == -32000.0f)) {
            func_80BE2728(arg0, arg1);
            temp_a1 = &arg0->world;
            sp34 = temp_a1;
            func_800B3030(arg1, (Vec3f *) temp_a1, &D_801D15B0, &D_801D15B0, (s16) (s32) (arg0->scale.x * 10000.0f), (s16) 0, 0);
            Audio_PlaySoundAtPosition(arg1, (Vec3f *) temp_a1, 0xB, 0x3878U);
            Actor_MarkForDeath(arg0);
            return;
        }
        goto block_12;
    }
block_12:
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
}

void EnRuppecrow_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderJntSph *sp34;
    ColliderJntSph *temp_a1;
    Path *temp_v0;
    EnRuppecrow *this = (EnRuppecrow *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80BE3A0C);
    SkelAnime_InitSV(globalCtx, &this->unk_194, &D_060010C0, &D_060000F0, &this->unk_1E0, &this->unk_216, 9);
    ActorShape_Init(&this->actor.shape, 2000.0f, func_800B3FC0, 20.0f);
    temp_a1 = &this->unk_254;
    sp34 = temp_a1;
    Collider_InitJntSph(globalCtx, temp_a1);
    Collider_InitAndSetJntSph(globalCtx, temp_a1, (Actor *) this, &D_80BE39D4, &this->unk_274);
    this->unk_254.elements->dim.worldSphere.radius = D_80BE39E0->unk_20;
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_80BE39EC, &D_80BE39E4);
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.flags |= 0x2000000;
    temp_v0 = func_8013D648(globalCtx, (s16) ((s32) (this->actor.params & 0xFC00) >> 0xA), 0x3F);
    this->unk_24C = temp_v0;
    if (temp_v0 != 0) {
        this->actionFunc = (void (*)(EnRuppecrow *, GlobalContext *)) func_80BE3178;
        return;
    }
    Actor_MarkForDeath((Actor *) this);
}

void EnRuppecrow_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnRuppecrow *this = (EnRuppecrow *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk_254);
}

void EnRuppecrow_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnRuppecrow *this = (EnRuppecrow *) thisx;
    func_80BE30F4((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    func_80BE2808(this);
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    SkelAnime_FrameUpdateMatrix(&this->unk_194);
    func_80BE2260((Actor *) this, globalCtx);
}

void EnRuppecrow_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnRuppecrow *this = (EnRuppecrow *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk_194.skeleton, this->unk_194.limbDrawTbl, (s32) this->unk_194.dListCount, NULL, NULL, (Actor *) this);
}
