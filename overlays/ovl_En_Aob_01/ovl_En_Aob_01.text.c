typedef struct EnAob01 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnAob01 *, GlobalContext *);
    /* 0x148 */ SkelAnime unk148;                   /* inferred */
    /* 0x18C */ ColliderCylinder unk18C;            /* inferred */
    /* 0x19F */ u8 unk19F;                          /* overlap; inferred */
    /* 0x1A0 */ char pad1A0[0x70];                  /* maybe part of unk19F[113]? */
    /* 0x210 */ u16 unk210;                         /* inferred */
    /* 0x212 */ Vec3s unk212;                       /* inferred */
    /* 0x218 */ char pad218[0x5A];                  /* maybe part of unk212[16]? */
    /* 0x272 */ Vec3s unk272;                       /* inferred */
    /* 0x278 */ char pad278[0x5A];                  /* maybe part of unk272[16]? */
    /* 0x2D2 */ u16 unk2D2;                         /* inferred */
    /* 0x2D4 */ ? unk2D4;                           /* inferred */
    /* 0x2D4 */ char pad2D4[0x4];
    /* 0x2D8 */ u16 unk2D8;                         /* inferred */
    /* 0x2DA */ ? unk2DA;                           /* inferred */
    /* 0x2DA */ char pad2DA[0x4];
    /* 0x2DE */ u16 unk2DE;                         /* inferred */
    /* 0x2E0 */ ? unk2E0;                           /* inferred */
    /* 0x2E0 */ char pad2E0[0x4];
    /* 0x2E4 */ u16 unk2E4;                         /* inferred */
    /* 0x2E6 */ ? unk2E6;                           /* inferred */
    /* 0x2E6 */ char pad2E6[0x4];
    /* 0x2EA */ u16 unk2EA;                         /* inferred */
    /* 0x2EC */ ? unk2EC;                           /* inferred */
    /* 0x2EC */ char pad2EC[0x4];
    /* 0x2F0 */ u16 unk2F0;                         /* inferred */
    /* 0x2F2 */ ? unk2F2;                           /* inferred */
    /* 0x2F2 */ char pad2F2[0x4];
    /* 0x2F6 */ u16 unk2F6;                         /* inferred */
    /* 0x2F8 */ char pad2F8[0xFC];                  /* maybe part of unk2F6[127]? */
    /* 0x3F4 */ Actor *unk3F4;                      /* inferred */
    /* 0x3F8 */ char pad3F8[0x38];                  /* maybe part of unk3F4[15]? */
    /* 0x430 */ s16 unk430;                         /* inferred */
    /* 0x432 */ s16 unk432;                         /* inferred */
    /* 0x434 */ s32 unk434;                         /* inferred */
    /* 0x438 */ char pad438[0x4];
    /* 0x43C */ s32 unk43C;                         /* inferred */
    /* 0x440 */ s16 unk440;                         /* inferred */
    /* 0x442 */ char pad442[0x2];
} EnAob01;                                          /* size = 0x444 */

struct _mips2c_stack_EnAob01_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnAob01_Draw {
    /* 0x00 */ char pad0[0x40];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad48[0x8];                     /* maybe part of sp44[3]? */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad5C[0x14];
};                                                  /* size = 0x70 */

struct _mips2c_stack_EnAob01_Init {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ ColliderCylinder *sp34;              /* inferred */
    /* 0x38 */ SkelAnime *sp38;                     /* inferred */
    /* 0x3C */ char pad3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnAob01_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809C10B0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809C1124 {};              /* size 0x0 */

struct _mips2c_stack_func_809C1158 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809C11EC {
    /* 0x00 */ char pad0[0x60];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_809C1304 {
    /* 0x00 */ char pad0[0x78];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_809C1424 {
    /* 0x00 */ char pad0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809C14D0 {
    /* 0x00 */ char pad0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809C15BC {
    /* 0x00 */ char pad0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809C165C {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ Collider *sp18;                      /* inferred */
    /* 0x1C */ CollisionCheckContext *sp1C;         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809C16DC {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809C1C9C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809C1D64 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809C1EC8 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809C2060 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809C21E0 {
    /* 0x00 */ char pad0[0x2F];
    /* 0x2F */ u8 sp2F;                             /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809C2504 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809C2594 {};              /* size 0x0 */

struct _mips2c_stack_func_809C25E4 {};              /* size 0x0 */

struct _mips2c_stack_func_809C2680 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809C26E4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809C2730 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809C2788 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809C2824 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809C28B8 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809C2A64 {
    /* 0x00 */ char pad0[0x2F];
    /* 0x2F */ u8 sp2F;                             /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809C2BE4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809C2C9C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809C2D0C {
    /* 0x00 */ char pad0[0x2F];
    /* 0x2F */ u8 sp2F;                             /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809C2EC4 {};              /* size 0x0 */

struct _mips2c_stack_func_809C2F34 {};              /* size 0x0 */

struct _mips2c_stack_func_809C2FA0 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad34[0x10];
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_809C33D8 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
    /* 0x28 */ char pad28[0x4];
    /* 0x2C */ s32 *sp2C;                           /* inferred */
    /* 0x30 */ char pad30[0x8];                     /* maybe part of sp2C[3]? */
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad38[0x10];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_809C35B4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809C35F4 {};              /* size 0x0 */

s32 func_800F2178(s16);                             /* extern */
void func_809C10B0(EnAob01 *arg0, s32 arg1);        /* static */
void func_809C1124();                               /* static */
void func_809C1158(EnAob01 *arg0, GlobalContext *arg1); /* static */
void func_809C11EC(EnAob01 *arg0, GlobalContext *arg1); /* static */
void func_809C1304(EnAob01 *arg0, GlobalContext *arg1); /* static */
s32 func_809C1424(EnAob01 *arg0);                   /* static */
s32 func_809C14D0(EnAob01 *arg0);                   /* static */
s32 func_809C15BC(EnAob01 *arg0);                   /* static */
void func_809C165C(EnAob01 *arg0, GlobalContext *arg1); /* static */
void func_809C16DC(Actor *arg0, GlobalContext *arg1); /* static */
void func_809C1EC8(EnAob01 *arg0, GlobalContext *arg1); /* static */
s32 func_809C2504(EnAob01 *arg0, void *arg1);       /* static */
? func_809C2594(EnAob01 *arg0, GlobalContext *arg1); /* static */
s32 func_809C25E4(void *arg0, void *arg1);          /* static */
s32 func_809C2680(EnAob01 *arg0);                   /* static */
s32 func_809C2EC4(EnAob01 *arg0, GlobalContext *arg1); /* static */
void func_809C2F34(EnAob01 *arg0, GlobalContext *arg1); /* static */
void func_809C2FA0();                               /* static */
s32 func_809C33D8(void **arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_809C35B4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_809C35F4(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern FlexSkeletonHeader D_06000180;
extern Gfx D_06003D18;
static ActorAnimationEntry D_809C3790[6] = {
    {(AnimationHeader *)0x6007758, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x60068B4, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x600700C, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x60058EC, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x6006040, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6007758, 1.0f, 0.0f, 0.0f, 0, -6.0f},
};
static ColliderCylinderInit D_809C3820 = {
    {0xA, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x12, 0x40, 0, {0, 0, 0}},
};
static ? D_809C384C;                                /* unable to generate initializer */
static s16 D_809C392C[16] = {0xFA0, 4, 1, 3, 0x1770, 4, 1, 6, 0xFA0, 4, 1, 3, 0x1770, 4, 1, 6};
static ? D_809C394C;                                /* unable to generate initializer */
static ? D_809C395C;                                /* unable to generate initializer */
static Vec3f D_809C3968 = {0.0f, 0.0f, 0.0f};
static ?32 D_809C3A50 = 0xC586A000;                 /* const */
static ?32 D_809C3A54 = 0x44CA8000;                 /* const */

void func_809C10B0(EnAob01 *arg0, s32 arg1) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk3F0;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk3F0 = temp_v0 - 1;
        phi_v1 = arg0->unk3F0;
    }
    if (phi_v1 == 0) {
        arg0->unk3EE += 1;
        if ((s32) arg0->unk3EE >= arg1) {
            arg0->unk3EE = 0;
            arg0 = arg0;
            arg0->unk3F0 = Rand_S16Offset(0x1E, 0x1E);
        }
    }
}

void func_809C1124(void) {
    u16 temp_t8;

    temp_t8 = (u16) gGameInfo->data[15] + gSaveContext.time;
    gSaveContext.time = temp_t8;
    gSaveContext.time = gSaveContext.unk16 + temp_t8;
}

void func_809C1158(EnAob01 *arg0, GlobalContext *arg1) {
    Path *temp_v0;
    s32 temp_s0;
    u8 temp_s0_2;
    s16 phi_s0;
    s16 phi_s1;

    temp_s0 = (s32) (arg0->actor.params & 0x7E00) >> 9;
    phi_s0 = (s16) temp_s0;
    phi_s1 = 0;
    if (temp_s0 != 0x3F) {
        do {
            temp_v0 = func_8013D648(arg1, phi_s0, 0x3F);
            (arg0 + (phi_s1 * 4))->unk1D8 = temp_v0;
            temp_s0_2 = temp_v0->unk1;
            phi_s0 = (s16) temp_s0_2;
            phi_s1 = (s16) (phi_s1 + 1);
        } while (temp_s0_2 != 0xFF);
    }
}

void func_809C11EC(EnAob01 *arg0, GlobalContext *arg1) {
    s16 temp_s0;
    void *temp_v0;
    s16 phi_s0;

    func_809C1158(arg0, arg1);
    phi_s0 = 0;
    do {
        temp_v0 = &D_809C384C + (phi_s0 * 0x10);
        temp_s0 = phi_s0 + 1;
        (arg0 + (phi_s0 * 4))->unk3F8 = Actor_SpawnAsChildAndCutscene(&arg1->actorCtx, arg1, 0xE2, temp_v0->unk0, temp_v0->unk4, temp_v0->unk8, (s16) 0, (s16) (s32) ((f32) temp_v0->unkC * 182.04445f), (s16) 0, ((arg0 + (temp_v0->unkE * 4))->unk1D8->unk1 << 0xA) | (phi_s0 << 5), 0xFFFFU, (s32) arg0->actor.unk20, NULL);
        phi_s0 = temp_s0;
    } while ((s32) temp_s0 < 0xE);
}

void func_809C1304(EnAob01 *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    s16 temp_s0;
    s16 phi_s0;

    phi_s0 = 0;
    do {
        temp_f0 = (f32) phi_s0;
        temp_s0 = phi_s0 + 1;
        (arg0 + (phi_s0 * 4))->unk3F8 = Actor_SpawnAsChildAndCutscene(arg1 + 0x1CA0, arg1, 0x1EE, (temp_f0 * 15.0f) + -3897.0f, 130.0f, 1290.0f - (temp_f0 * 10.0f), (s16) 0, (s16) 0x1555, (s16) 0, (phi_s0 << 5) | (arg0->actor.params & 0x7E00), 0xFFFFU, (s32) arg0->actor.unk20, NULL);
        phi_s0 = temp_s0;
    } while ((s32) temp_s0 < 0xE);
}

s32 func_809C1424(EnAob01 *arg0) {
    s16 sp1E;
    s32 temp_t8;
    s32 temp_v1;

    sp1E = (s16) (s32) arg0->unk148.animCurrentFrame;
    temp_t8 = arg0->unk43C;
    arg0 = arg0;
    temp_v1 = arg0->unk43C;
    if (temp_v1 == 1) {
        if (sp1E == SkelAnime_GetFrameCount(*(D_809C3790 + (temp_t8 * 0x18)))) {
            arg0->unk43C = 2;
            func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) D_809C3790, 2);
            return 1;
        }
        goto block_5;
    }
    if (temp_v1 == 2) {
        return 1;
    }
block_5:
    return 0;
}

s32 func_809C14D0(EnAob01 *arg0) {
    s16 sp1E;
    AnimationHeader *temp_a0;
    s16 temp_v0;
    s32 temp_f6;
    s32 temp_v1;

    temp_f6 = (s32) arg0->unk148.animCurrentFrame;
    temp_a0 = D_809C3790[arg0->unk43C].animation;
    sp1E = (s16) temp_f6;
    arg0 = arg0;
    temp_v0 = SkelAnime_GetFrameCount((AnimationHeaderCommon *) temp_a0);
    temp_v1 = arg0->unk43C;
    if ((temp_v1 == 0) || (temp_v1 == 5)) {
        if ((s16) temp_f6 == temp_v0) {
            arg0->unk43C = 3;
            func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) D_809C3790, 3);
            return 1;
        }
        goto block_9;
    }
    if (temp_v1 == 3) {
        if ((s16) temp_f6 == temp_v0) {
            arg0->unk43C = 4;
            func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) D_809C3790, 4);
            return 1;
        }
        goto block_9;
    }
    if (temp_v1 == 4) {
        return 1;
    }
block_9:
    return 0;
}

s32 func_809C15BC(EnAob01 *arg0) {
    s16 sp1E;
    s32 temp_t8;
    s32 temp_v1;

    sp1E = (s16) (s32) arg0->unk148.animCurrentFrame;
    temp_t8 = arg0->unk43C;
    arg0 = arg0;
    temp_v1 = arg0->unk43C;
    if ((temp_v1 != 0) && (temp_v1 != 5)) {
        if (sp1E == SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_809C3790[temp_t8].animation)) {
            arg0->unk43C = 5;
            func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) D_809C3790, 5);
            return 1;
        }
        return 0;
    }
    return 1;
}

void func_809C165C(EnAob01 *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp1C;
    Collider *sp18;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;

    temp_a2 = arg0 + 0x18C;
    arg0->unk18C.dim.pos.x = (s16) (s32) arg0->actor.world.pos.x;
    arg0->unk18C.dim.pos.y = (s16) (s32) arg0->actor.world.pos.y;
    arg0->unk18C.dim.pos.z = (s16) (s32) arg0->actor.world.pos.z;
    sp18 = temp_a2;
    temp_a1 = arg1 + 0x18884;
    sp1C = temp_a1;
    CollisionCheck_SetAC(arg1, temp_a1, temp_a2);
    CollisionCheck_SetOC(arg1, temp_a1, temp_a2);
}

void func_809C16DC(Actor *arg0, GlobalContext *arg1) {
    s32 sp1C;
    Actor *temp_a3;
    s32 temp_v0_4;
    s32 temp_v1_2;
    u16 temp_t1;
    u16 temp_t7;
    u16 temp_t9;
    u16 temp_t9_2;
    u16 temp_t9_3;
    u16 temp_t9_4;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_5;
    u8 temp_v0_10;
    u8 temp_v0_11;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
    u8 temp_v0_9;
    u8 temp_v1;
    s32 phi_t2;
    Actor *phi_a3;

    temp_a3 = arg0;
    temp_t7 = temp_a3->unk210;
    sp1C = (s32) temp_t7;
    phi_a3 = temp_a3;
    phi_a3 = temp_a3;
    if ((s32) temp_t7 > 0) {
        switch (temp_t7) {
        case 13600:
        case 13615:
        case 13616:
        case 13617:
        case 13618:
        case 13619:
        case 13620:
            temp_a3->unk210 = 0x3521U;
            sp1C = 0x3521U & 0xFFFF;
            goto block_68;
        case 13601:
            temp_v0 = temp_a3->unk2D2;
            if ((temp_v0 & 2) != 0) {
                temp_a3->unk2D2 = (u16) (temp_v0 & 0xFFFD);
                temp_v1 = arg1->actorCtx.actorList[2].first->unk14B;
                if (temp_v1 != 1) {
                    if (temp_v1 != 2) {
                        if (temp_v1 != 3) {
                            if (temp_v1 != 4) {

                            } else if ((s32) gSaveContext.rupees < 0xA) {
                                temp_a3->unk210 = 0x3524U;
                                temp_a3->unk2D2 = (u16) (temp_a3->unk2D2 | 0x10);
                            } else {
                                temp_a3->unk210 = 0x3522U;
                                temp_t9 = temp_a3->unk2D2 | 4;
                                temp_a3->unk2D2 = temp_t9;
                                temp_a3->unk2D2 = (u16) (temp_t9 | 0x10);
                            }
                        } else {
                            temp_a3->unk210 = 0x354AU;
                            temp_a3->unk2D2 = (u16) (temp_a3->unk2D2 | 0x10);
                        }
                    } else {
                        temp_a3->unk210 = 0x3549U;
                        temp_a3->unk2D2 = (u16) (temp_a3->unk2D2 | 0x10);
                    }
                } else {
                    temp_a3->unk210 = 0x3548U;
                    temp_a3->unk2D2 = (u16) (temp_a3->unk2D2 | 0x10);
                }
            } else {
                temp_a3->unk2D2 = (u16) (temp_v0 | 0x10);
                temp_a3->unk210 = 0x3535U;
            }
            sp1C = (s32) temp_a3->unk210;
            goto block_68;
        case 13602:
        case 13603:
            temp_v0_2 = temp_a3->unk2D2;
            temp_t9_2 = temp_v0_2 | 0x40;
            if ((temp_v0_2 & 8) != 0) {
                temp_a3->unk210 = 0x3525U;
                sp1C = 0x3525U & 0xFFFF;
            } else {
                temp_a3->unk2D2 = temp_t9_2;
                temp_a3->unk210 = 0x3523U;
                temp_a3->unk2D2 = (u16) (temp_t9_2 | 0x10);
                temp_a3->unk43C = 1;
                arg0 = temp_a3;
                func_800BDC5C(temp_a3 + 0x148, (ActorAnimationEntry []) D_809C3790, 1);
                phi_t2 = (s32) arg0->unk210;
                phi_a3 = arg0;
block_67:
                sp1C = phi_t2;
            }
            goto block_68;
        case 13605:
        case 13606:
            temp_v0_3 = temp_a3->unk2D2;
            if ((temp_v0_3 & 4) != 0) {
                if ((temp_v0_3 & 8) != 0) {
                    temp_a3->unk210 = 0x3525U;
                    sp1C = 0x3525U & 0xFFFF;
                } else {
                    temp_t9_3 = temp_v0_3 | 0x40;
                    temp_a3->unk2D2 = temp_t9_3;
                    temp_a3->unk210 = 0x3523U;
                    temp_a3->unk2D2 = (u16) (temp_t9_3 | 0x10);
                    temp_a3->unk43C = 1;
                    arg0 = temp_a3;
                    func_800BDC5C(temp_a3 + 0x148, (ActorAnimationEntry []) D_809C3790, 1);
                    phi_t2 = (s32) arg0->unk210;
                    phi_a3 = arg0;
                    goto block_67;
                }
            } else if ((temp_v0_3 & 2) != 0) {
                temp_a3->unk2D2 = (u16) (temp_v0_3 & 0xFFFD);
                temp_a3->unk210 = 0x3527U;
                sp1C = 0x3527U & 0xFFFF;
            } else {
                temp_t9_4 = temp_v0_3 | 0x40;
                temp_t1 = temp_t9_4 | 4;
                temp_a3->unk2D2 = temp_t9_4;
                temp_a3->unk2D2 = temp_t1;
                temp_a3->unk210 = 0x3526U;
                temp_a3->unk2D2 = (u16) (temp_t1 | 0x10);
                temp_a3->unk43C = 1;
                arg0 = temp_a3;
                func_800BDC5C(temp_a3 + 0x148, (ActorAnimationEntry []) D_809C3790, 1);
                sp1C = (s32) arg0->unk210;
                phi_a3 = arg0;
            }
            goto block_68;
        case 13607:
            temp_a3->unk210 = 0x3528U;
            sp1C = 0x3528U & 0xFFFF;
            goto block_68;
        case 13608:
            temp_v0_4 = temp_a3->unk434;
            if ((s32) gSaveContext.rupees < temp_v0_4) {
                temp_a3->unk210 = 0x3536U;
                temp_a3->unk43C = 1;
                temp_a3->unk2D2 = (u16) (temp_a3->unk2D2 | 0x40);
                arg0 = temp_a3;
                func_800BDC5C(temp_a3 + 0x148, (ActorAnimationEntry []) D_809C3790, 1);
                phi_t2 = (s32) arg0->unk210;
                phi_a3 = arg0;
                goto block_67;
            }
            if (temp_v0_4 == 0) {
                temp_a3->unk210 = 0x3537U;
                temp_a3->unk2D2 = (u16) (temp_a3->unk2D2 | 0x40);
                temp_a3->unk43C = 1;
                arg0 = temp_a3;
                func_800BDC5C(temp_a3 + 0x148, (ActorAnimationEntry []) D_809C3790, 1);
                sp1C = (s32) arg0->unk210;
                phi_a3 = arg0;
            } else {
                gSaveContext.unk_3F5C = temp_v0_4;
                arg1->msgCtx.bankRupees = temp_a3->unk434;
                temp_a3->unk210 = 0x3529U;
                sp1C = 0x3529U & 0xFFFF;
            }
            goto block_68;
        case 13609:
            temp_v0_5 = temp_a3->unk2D2;
            if ((temp_v0_5 & 2) != 0) {
                temp_a3->unk2D2 = (u16) (temp_v0_5 & 0xFFFD);
                arg0 = temp_a3;
                func_801159EC((s16) ((s32) temp_a3->unk434 * -1));
                func_800B7298(arg1, NULL, 7U);
                arg1->msgCtx.unk11F22 = 0x43;
                arg1->msgCtx.unk12023 = 4;
                arg0->unk144 = func_809C1C9C;
                return;
            }
            temp_a3->unk210 = 0x3528U;
            sp1C = 0x3528U & 0xFFFF;
            goto block_68;
        case 13622:
        case 13623:
            temp_a3->unk210 = 0x3528U;
            phi_t2 = 0x3528U & 0xFFFF;
            goto block_67;
        }
    } else {
        if (temp_t7 == 0) {
        case 13604:
        case 13621:
        case 13640:
        case 13641:
        case 13642:
            temp_v1_2 = gSaveContext.day;
            if (temp_v1_2 != 1) {
                if (temp_v1_2 != 2) {
                    if (temp_v1_2 != 3) {

                    } else {
                        if (gSaveContext.isNight == 0) {
                            temp_v0_6 = gSaveContext.weekEventReg[65];
                            if ((temp_v0_6 & 8) == 0) {
                                gSaveContext.weekEventReg[65] = temp_v0_6 | 8;
                                temp_a3->unk210 = 0x3533U;
                            } else {
                                temp_a3->unk210 = 0x352FU;
                            }
                        } else {
                            temp_v0_7 = gSaveContext.weekEventReg[65];
                            if ((temp_v0_7 & 0x10) == 0) {
                                gSaveContext.weekEventReg[65] = temp_v0_7 | 0x10;
                                temp_a3->unk210 = 0x3534U;
                            } else {
                                temp_a3->unk210 = 0x352FU;
                            }
                        }
                        sp1C = (s32) temp_a3->unk210;
                    }
                } else {
                    if (gSaveContext.isNight == 0) {
                        temp_v0_8 = gSaveContext.weekEventReg[65];
                        if ((temp_v0_8 & 2) == 0) {
                            gSaveContext.weekEventReg[65] = temp_v0_8 | 2;
                            temp_a3->unk210 = 0x3531U;
                        } else {
                            temp_a3->unk210 = 0x352FU;
                        }
                    } else {
                        temp_v0_9 = gSaveContext.weekEventReg[65];
                        if ((temp_v0_9 & 4) == 0) {
                            gSaveContext.weekEventReg[65] = temp_v0_9 | 4;
                            temp_a3->unk210 = 0x3532U;
                        } else {
                            temp_a3->unk210 = 0x352FU;
                        }
                    }
                    sp1C = (s32) temp_a3->unk210;
                }
            } else {
                if (gSaveContext.isNight == 0) {
                    temp_v0_10 = gSaveContext.weekEventReg[64];
                    if ((temp_v0_10 & 0x80) == 0) {
                        gSaveContext.weekEventReg[64] = temp_v0_10 | 0x80;
                        temp_a3->unk210 = 0x3520U;
                    } else {
                        temp_a3->unk210 = 0x352FU;
                    }
                } else {
                    temp_v0_11 = gSaveContext.weekEventReg[65];
                    if ((temp_v0_11 & 1) == 0) {
                        gSaveContext.weekEventReg[65] = temp_v0_11 | 1;
                        temp_a3->unk210 = 0x3530U;
                    } else {
                        temp_a3->unk210 = 0x352FU;
                    }
                }
                sp1C = (s32) temp_a3->unk210;
            }
        }
    default:
block_68:
        func_801518B0(arg1, unksp1E, phi_a3);
    }
}

void func_809C1C9C(EnAob01 *this, GlobalContext *globalCtx) {
    u8 temp_t7;
    u8 temp_t9;

    if (gSaveContext.rupeeAccumulator == 0) {
        temp_t9 = gSaveContext.weekEventReg[63] | 1;
        gSaveContext.weekEventReg[63] = temp_t9;
        gSaveContext.weekEventReg[63] = temp_t9 & 0xFD;
        this->unk2D2 |= 0x20;
        this = this;
        func_800FD750(0x40);
        globalCtx->nextEntranceIndex = 0x7C10;
        globalCtx->unk_1887F = 0x40;
        gSaveContext.nextTransition = 0x40;
        temp_t7 = (gSaveContext.eventInf[0] & 0xF8) | 2;
        gSaveContext.eventInf[0] = temp_t7;
        gSaveContext.eventInf[0] = (temp_t7 & 7) | (this->unk432 * 8);
        globalCtx->sceneLoadFlag = 0x14;
    }
}

void func_809C1D64(EnAob01 *this, GlobalContext *globalCtx) {
    u16 temp_t0;
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (temp_v0 == 4) {
        if (func_80147624(globalCtx) != 0) {
            temp_v0_2 = globalCtx->msgCtx.choiceIndex;
            if (temp_v0_2 != 0) {
                if (temp_v0_2 != 1) {
                    return;
                }
                func_8019F230();
                this->unk210 = 0x3535;
                func_801518B0(globalCtx, 0x3535U & 0xFFFF, (Actor *) this);
                return;
            }
            if ((s32) gSaveContext.rupees < 0xA) {
                play_sound(0x4806U);
                this->unk210 = 0x3524;
                func_801518B0(globalCtx, 0x3524U & 0xFFFF, (Actor *) this);
                return;
            }
            func_8019F208();
            this->unk210 = 0x3522;
            temp_t0 = this->unk2D2 | 4;
            this->unk2D2 = temp_t0;
            this->unk2D2 = temp_t0 | 0x10;
            func_801518B0(globalCtx, 0x3522U & 0xFFFF, (Actor *) this);
            this->actionFunc = func_809C21E0;
            return;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return;
    }
    if ((temp_v0 == 5) && (func_80147624(globalCtx) != 0)) {
        globalCtx->msgCtx.unk11F22 = 0x43;
        globalCtx->msgCtx.unk12023 = 4;
        this->unk210 = 0;
        this->actionFunc = func_809C2060;
    }
}

void func_809C1EC8(EnAob01 *arg0, GlobalContext *arg1) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void *temp_s1;

    temp_s1 = arg1->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    if (func_8013D5E8(arg0->actor.shape.rot.y, 0x36B0, arg0->actor.yawTowardsPlayer) != 0) {
        sp30 = temp_s1->world.pos.x;
        sp34 = temp_s1->unkC44 + 3.0f;
        sp38 = temp_s1->world.pos.z;
        func_8013D2E0((Vec3f *) &sp30, arg0 + 0x3C, arg0 + 0xBC, arg0 + 0x2D4, arg0 + 0x2DA, arg0 + 0x2E0, D_809C392C);
    } else {
        Math_SmoothStepToS(arg0 + 0x2D4, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2D6, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2DA, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2DC, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2E0, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2E2, 0, 4, 0x3E8, (s16) 1);
    }
    func_809C10B0(arg0, 3);
    func_8013D9C8(arg1, arg0 + 0x2F8, arg0 + 0x318, 0x10);
    func_809C165C(arg0, arg1);
    if ((temp_s1->unkA6C & 0x20) != 0) {
        func_809C1124();
    }
}

void func_809C2060(EnAob01 *this, GlobalContext *globalCtx) {
    u16 temp_t5;
    u16 temp_v0;

    if (func_809C15BC(this) != 0) {
        if ((func_809C2EC4(this, globalCtx) != 0) && ((this->unk2D2 & 0x100) == 0)) {
            if ((this->unk19F & 1) != 0) {
                this->actor.flags |= 0x10000;
                func_800B8614((Actor *) this, globalCtx, 100.0f);
                this->unk2D2 |= 8;
                this->actionFunc = func_809C21E0;
                return;
            }
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return;
        }
        if ((func_800B84D0((Actor *) this, globalCtx) != 0) && (temp_v0 = this->unk2D2, ((temp_v0 & 0x100) != 0))) {
            this->unk2E6 = (unaligned s32) this->unk2D4;
            this->unk2EC = (unaligned s32) this->unk2DA;
            this->unk2F2 = (unaligned s32) this->unk2E0;
            this->unk2D2 = temp_v0 & 0xFEFF;
            this->unk2EA = this->unk2D8;
            this->unk2F0 = this->unk2DE;
            this->unk2F6 = this->unk2E4;
            func_809C16DC((Actor *) this, globalCtx);
            this->actionFunc = func_809C21E0;
            return;
        }
        temp_t5 = this->unk2D2 & ~0x100;
        this->unk2D2 = temp_t5;
        if ((this->actor.xzDistToPlayer < 100.0f) && ((this->unk19F & 1) == 0)) {
            this->unk2D2 = temp_t5 | 0x100;
            func_800B8614((Actor *) this, globalCtx, 100.0f);
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
    }
}

void func_809C21E0(EnAob01 *this, GlobalContext *globalCtx) {
    u8 sp2F;
    s32 temp_v0_4;
    u16 temp_t5;
    u16 temp_t5_2;
    u16 temp_v0;
    u16 temp_v0_2;
    u8 temp_v0_3;

    sp2F = func_80152498(&globalCtx->msgCtx);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 4, 0xFA0, (s16) 1);
    if (((this->unk2D2 & 8) != 0) && (func_809C2EC4(this, globalCtx) == 0)) {
        temp_v0 = this->unk210;
        if ((temp_v0 != 0) && (temp_v0 != 0x3535) && (temp_v0 != 0x3524) && (temp_v0 != 0x3548) && (temp_v0 != 0x3549) && (temp_v0 != 0x354A)) {
            this->unk210 = 0x3523;
        }
        this->actor.textId = 0;
        this->unk2D2 &= 0xFFF7;
        this->actor.flags &= 0xFFFEFFFF;
        this->actionFunc = func_809C2060;
        return;
    }
    if ((this->unk2D2 & 0x40) != 0) {
        if (func_809C1424(this) == 0) {
            return;
        }
        goto block_14;
    }
    if (func_809C15BC(this) != 0) {
block_14:
        if ((this->unk2D2 & 8) != 0) {
            if (func_800B84D0((Actor *) this, globalCtx) != 0) {
                this->actor.flags &= 0xFFFEFFFF;
                func_80123E90(globalCtx, (Actor *) this);
                temp_v0_2 = this->unk2D2;
                temp_t5 = temp_v0_2 | 0x10;
                if ((temp_v0_2 & 4) != 0) {
                    func_809C16DC((Actor *) this, globalCtx);
                    this->unk2D2 &= 0xFFFB;
                } else {
                    this->unk2D2 = temp_t5;
                    this->unk2D2 = temp_t5 | 0x40;
                    this->unk43C = 1;
                    func_800BDC5C(&this->unk148, (ActorAnimationEntry []) D_809C3790, 1);
                    func_801518B0(globalCtx, 0x354BU, (Actor *) this);
                }
                this->unk2D2 &= 0xFFF7;
                return;
            }
            /* Duplicate return node #35. Try simplifying control flow for better match */
            return;
        }
        if (sp2F == 4) {
            if (func_80147624(globalCtx) != 0) {
                this->unk2D2 &= 0xFFBF;
                temp_v0_3 = globalCtx->msgCtx.choiceIndex;
                if (temp_v0_3 != 0) {
                    if (temp_v0_3 != 1) {
                        return;
                    }
                    func_8019F230();
                    func_809C16DC((Actor *) this, globalCtx);
                    return;
                }
                func_8019F208();
                this->unk2D2 |= 2;
                func_809C16DC((Actor *) this, globalCtx);
                return;
            }
            /* Duplicate return node #35. Try simplifying control flow for better match */
            return;
        }
        if (sp2F == 5) {
            if (func_80147624(globalCtx) != 0) {
                temp_t5_2 = this->unk2D2 & 0xFFBF;
                temp_v0_4 = temp_t5_2 & 0xFFFF;
                this->unk2D2 = temp_t5_2;
                if ((temp_v0_4 & 0x10) != 0) {
                    this->unk2D2 = temp_v0_4 & 0xFFEF;
                    globalCtx->msgCtx.unk11F22 = 0x43;
                    globalCtx->msgCtx.unk12023 = 4;
                    this->actionFunc = func_809C2060;
                    return;
                }
                func_809C16DC((Actor *) this, globalCtx);
                return;
            }
            /* Duplicate return node #35. Try simplifying control flow for better match */
            return;
        }
        if ((sp2F == 0xE) && (func_80147624(globalCtx) != 0)) {
            this->unk2D2 &= 0xFFBF;
            this->unk434 = globalCtx->msgCtx.bankRupeesSelected;
            func_809C16DC((Actor *) this, globalCtx);
        }
        /* Duplicate return node #35. Try simplifying control flow for better match */
    }
}

s32 func_809C2504(EnAob01 *arg0, void *arg1) {
    void *temp_s0;
    void *temp_s0_2;
    void *phi_s0;

    temp_s0 = arg1->unk1CE4;
    phi_s0 = temp_s0;
    if (temp_s0 != 0) {
loop_1:
        if ((phi_s0->unk0 == 0x1EE) && (func_800F2178(arg0->unk430) == phi_s0->unk1E8)) {
            ActorCutscene_Stop(arg0->unk430);
            arg0->unk3F4 = phi_s0;
            arg0->unk430 = ActorCutscene_GetAdditionalCutscene(arg0->unk430);
            return 1;
        }
        temp_s0_2 = phi_s0->next;
        phi_s0 = temp_s0_2;
        if (temp_s0_2 == 0) {
            goto block_5;
        }
        goto loop_1;
    }
block_5:
    return 0;
}

? func_809C2594(EnAob01 *arg0, GlobalContext *arg1) {
    void *temp_v1;
    void *temp_v1_2;
    void *phi_v1;

    temp_v1 = arg1->actorCtx.actorList[4].first;
    phi_v1 = temp_v1;
    if (temp_v1 != 0) {
loop_1:
        if ((phi_v1->id == 0x1EE) && (phi_v1->unk292 == phi_v1->unk290)) {
            arg0->unk3F4 = phi_v1;
            return 1;
        }
        temp_v1_2 = phi_v1->next;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 == 0) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return 0;
        }
        goto loop_1;
    }
    return 0;
}

s32 func_809C25E4(void *arg0, void *arg1) {
    s16 temp_v0_3;
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;
    s32 phi_v1;
    s16 phi_v1_2;
    s32 phi_v1_3;
    s32 phi_v1_4;

    temp_v0 = arg1->unk1CE4;
    phi_v0 = temp_v0;
    phi_v1 = 0;
    phi_v1_2 = (s16) 0;
    phi_v1_4 = 0;
    if (temp_v0 != 0) {
        do {
            phi_v1_3 = phi_v1_4;
            if ((phi_v0->unk0 == 0x1EE) && (phi_v0->unk29C == 3)) {
                phi_v1_3 = (s32) (s16) (phi_v1_4 + 1);
            }
            temp_v0_2 = phi_v0->unk12C;
            phi_v0 = temp_v0_2;
            phi_v1 = phi_v1_3;
            phi_v1_4 = phi_v1_3;
        } while (temp_v0_2 != 0);
    }
    if (phi_v1 >= 0xE) {
        return 1;
    }
    if (phi_v1 >= 0xA) {
        temp_v0_3 = arg0->unk440;
        if (temp_v0_3 == 0) {

        } else {
            arg0->unk440 = (s16) (temp_v0_3 - 1);
            phi_v1_2 = arg0->unk440;
        }
        if (phi_v1_2 == 0) {
            return 1;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

s32 func_809C2680(EnAob01 *arg0) {
    s16 temp_a0;

    if ((ActorCutscene_GetLength(arg0->unk430) > 0) && (temp_a0 = arg0->unk430, (ActorCutscene_GetCurrentIndex() != temp_a0))) {
        arg0->unk430 = ActorCutscene_GetAdditionalCutscene(temp_a0);
        return 1;
    }
    return 0;
}

void func_809C26E4(EnAob01 *this, GlobalContext *globalCtx) {
    ActorCutscene_Stop(this->unk430);
    this->unk430 = ActorCutscene_GetAdditionalCutscene(this->unk430);
    this->actionFunc = func_809C2824;
}

void func_809C2730(EnAob01 *this, GlobalContext *globalCtx) {
    if ((func_809C2504(this) != 0) || (func_809C2680(this) != 0)) {
        ActorCutscene_SetIntentToPlay(this->unk430);
        this->actionFunc = func_809C2824;
    }
}

void func_809C2788(EnAob01 *this, GlobalContext *globalCtx) {
    this->unk2D2 |= 0x20;
    if (func_809C25E4() != 0) {
        globalCtx = globalCtx;
        if (func_801A8A50(0) != 0x41) {
            globalCtx->nextEntranceIndex = 0x7C10;
            gSaveContext.eventInf[0] = (gSaveContext.eventInf[0] & 0xF8) | 3;
            globalCtx->unk_1887F = 0x40;
            gSaveContext.nextTransition = 3;
            globalCtx->sceneLoadFlag = 0x14;
        }
    }
}

void func_809C2824(EnAob01 *this, GlobalContext *globalCtx) {
    s32 temp_v0;

    if (ActorCutscene_GetCanPlayNext(this->unk430) != 0) {
        ActorCutscene_Start(this->unk430, this->unk3F4);
        temp_v0 = func_800F2178(this->unk430);
        if (temp_v0 != 0x63) {
            if (temp_v0 == 0xFF) {
                this->actionFunc = func_809C26E4;
                return;
            }
            this->actionFunc = func_809C2730;
            return;
        }
        this->actionFunc = func_809C2788;
        return;
    }
    ActorCutscene_SetIntentToPlay(this->unk430);
}

void func_809C28B8(EnAob01 *this, GlobalContext *globalCtx) {
    s32 temp_t1;

    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->actor.flags &= 0xFFFEFFFF;
        func_80123E90(globalCtx, (Actor *) this);
        this->unk434 = gSaveContext.unk_3F5C;
        temp_t1 = (s32) (gSaveContext.eventInf[0] & 0xF8) >> 3;
        switch (temp_t1) {
        case 1:
            this->unk434 *= 3;
            this->unk210 = 0x352A;
            this->unk2D2 |= 0x80;
            func_801159EC(this->unk436);
            globalCtx->msgCtx.bankRupees = this->unk434;
            break;
        case 2:
            this->unk434 *= 2;
            this->unk210 = 0x352B;
            this->unk2D2 |= 0x80;
            func_801159EC(this->unk436);
            globalCtx->msgCtx.bankRupees = this->unk434;
            break;
        case 3:
        case 4:
        case 5:
            this->unk210 = 0x352C;
            func_801159EC(this->unk436);
            break;
        default:
            this->unk210 = 0x352D;
            this->unk43C = 1;
            this->unk2D2 |= 0x40;
            func_800BDC5C(&this->unk148, (ActorAnimationEntry []) D_809C3790, 1);
            break;
        }
        func_801518B0(globalCtx, this->unk210, (Actor *) this);
        this->actionFunc = func_809C2D0C;
        return;
    }
    if (this->actor.xzDistToPlayer < 100.0f) {
        func_800B8614((Actor *) this, globalCtx, 100.0f);
    }
}

void func_809C2A64(EnAob01 *this, GlobalContext *globalCtx) {
    u8 sp2F;
    u8 temp_v0;

    sp2F = func_80152498(&globalCtx->msgCtx);
    if (func_809C15BC(this) != 0) {
        if ((sp2F == 5) && (func_80147624(globalCtx) != 0)) {
            this->unk434 = 0;
            globalCtx->msgCtx.unk11F22 = 0x43;
            globalCtx->msgCtx.unk12023 = 4;
        }
        if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
            this->unk2D4 = (unaligned s32) this->unk2E6;
            this->unk2DA = (unaligned s32) this->unk2EC;
            this->unk2E0 = (unaligned s32) this->unk2F2;
            this->actor.parent = NULL;
            this->unk2D8 = this->unk2EA;
            this->unk2DE = this->unk2F0;
            this->unk2E4 = this->unk2F6;
            this->actor.shape.rot.y = this->actor.world.rot.y;
            temp_v0 = gSaveContext.weekEventReg[8];
            if ((temp_v0 & 0x20) != 0) {
                this->actionFunc = func_809C2BE4;
                return;
            }
            gSaveContext.weekEventReg[8] = temp_v0 | 0x20;
            this->actionFunc = func_809C2BE4;
            return;
        }
        if ((gSaveContext.weekEventReg[8] & 0x20) != 0) {
            func_800B8A1C((Actor *) this, globalCtx, 4, 300.0f, 300.0f);
            return;
        }
        func_800B8A1C((Actor *) this, globalCtx, 0xC, 300.0f, 300.0f);
        /* Duplicate return node #11. Try simplifying control flow for better match */
    }
}

void func_809C2BE4(EnAob01 *this, GlobalContext *globalCtx) {
    u8 temp_t7;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 phi_v0;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (((temp_v0 == 5) || (temp_v0 == 6)) && (func_80147624(globalCtx) != 0)) {
        temp_v0_2 = gSaveContext.weekEventReg[63];
        temp_t7 = temp_v0_2 & 0xFD;
        phi_v0 = temp_v0_2;
        if ((temp_v0_2 & 2) != 0) {
            gSaveContext.weekEventReg[63] = temp_t7;
            phi_v0 = temp_t7 & 0xFF;
        }
        if ((phi_v0 & 1) != 0) {
            gSaveContext.weekEventReg[63] = phi_v0 & 0xFE;
        }
        this->unk210 = 0;
        func_800B85E0((Actor *) this, globalCtx, 400.0f, -1);
        gSaveContext.eventInf[0] &= 0xF8;
        this->actionFunc = func_809C2C9C;
    }
}

void func_809C2C9C(EnAob01 *this, GlobalContext *globalCtx) {
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->unk210 = 0x354C;
        func_80151938(globalCtx, 0x354CU & 0xFFFF);
        this->actionFunc = func_809C1D64;
        return;
    }
    func_800B85E0((Actor *) this, globalCtx, 400.0f, -1);
}

void func_809C2D0C(EnAob01 *this, GlobalContext *globalCtx) {
    u8 sp2F;
    u16 temp_t2;
    u16 temp_v1;
    u8 temp_t5;
    u8 temp_v0;
    u8 phi_v0;

    sp2F = func_80152498(&globalCtx->msgCtx);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 4, 0xFA0, (s16) 1);
    temp_v1 = this->unk2D2;
    if ((temp_v1 & 0x40) != 0) {
        if (func_809C1424(this) == 0) {
            return;
        }
        goto block_5;
    }
    if (((temp_v1 & 0x80) == 0) || (func_809C14D0(this) != 0)) {
block_5:
        if ((sp2F == 5) && (func_80147624(globalCtx) != 0)) {
            temp_t2 = this->unk2D2 & 0xFFBF;
            this->unk2D2 = temp_t2;
            this->unk2D2 = temp_t2 & 0xFF7F;
            if (this->unk434 >= 0x96) {
                this->unk210 = 0x352E;
                func_801518B0(globalCtx, 0x352EU & 0xFFFF, (Actor *) this);
                this->actionFunc = func_809C2A64;
                return;
            }
            this->unk2D4 = (unaligned s32) this->unk2E6;
            this->unk2DA = (unaligned s32) this->unk2EC;
            this->unk2E0 = (unaligned s32) this->unk2F2;
            this->unk434 = 0;
            this->unk2D8 = this->unk2EA;
            this->unk2DE = this->unk2F0;
            this->unk2E4 = this->unk2F6;
            this->actor.shape.rot.y = this->actor.world.rot.y;
            temp_v0 = gSaveContext.weekEventReg[63];
            phi_v0 = temp_v0;
            if ((temp_v0 & 2) != 0) {
                temp_t5 = temp_v0 & 0xFD;
                gSaveContext.weekEventReg[63] = temp_t5;
                phi_v0 = temp_t5 & 0xFF;
            }
            if ((phi_v0 & 1) != 0) {
                gSaveContext.weekEventReg[63] = phi_v0 & 0xFE;
            }
            this->unk210 = 0x354C;
            func_801518B0(globalCtx, 0x354CU & 0xFFFF, (Actor *) this);
            this->actionFunc = func_809C1D64;
            gSaveContext.eventInf[0] &= 0xF8;
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
    }
}

s32 func_809C2EC4(EnAob01 *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;

    temp_v0 = arg1->actorCtx.actorList[5].first;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
loop_1:
        if (phi_v0->id == 0xE2) {
            arg0->unk432 = phi_v0->unk288;
            temp_v1 = arg0->unk432;
            if (temp_v1 == -1) {
                return 0;
            }
            if (((s32) (phi_v0->params & 0x3E0) >> 5) == temp_v1) {
                return 1;
            }
            goto block_6;
        }
block_6:
        temp_v0_2 = phi_v0->next;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return 0;
        }
        goto loop_1;
    }
    return 0;
}

void func_809C2F34(EnAob01 *arg0, GlobalContext *arg1) {
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_v0->draw = NULL;
    temp_v0->unkA6C = (s32) (temp_v0->unkA6C | 0x20);
    temp_v0->world.pos.x = -4134.0f;
    temp_v0->world.pos.z = 1464.0f;
    temp_v0->shape.rot.y = temp_v0->world.rot.y;
    arg0->actor.world.pos.x = -4308.0f;
    arg0->actor.prevPos.y = arg0->actor.world.pos.y;
    arg0->actor.world.pos.z = 1620.0f;
    arg0->actor.prevPos.x = arg0->actor.world.pos.x;
    arg0->actor.prevPos.z = arg0->actor.world.pos.z;
}

void func_809C2FA0(void) {
    ? sp44;
    ? sp34;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_v1_2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v1;
    u8 temp_a0;
    u8 temp_a3;
    u8 temp_t4;
    u8 temp_t5;
    void *temp_a0_2;
    s32 phi_s0;
    s32 phi_a1;
    s32 phi_s0_2;
    s32 phi_a1_2;
    s32 phi_s0_3;

    sp34.unk0 = (s32) D_809C394C.unk0;
    sp34.unk4 = (s32) D_809C394C.unk4;
    sp34.unk8 = (s32) D_809C394C.unk8;
    sp34.unkC = (u16) D_809C394C.unkC;
    phi_s0 = 0;
    phi_s0_2 = 0;
    phi_s0_3 = 0;
    do {
        temp_v0 = &sp34 + phi_s0;
        temp_s0 = (phi_s0 + 1) & 0xFF;
        temp_a0 = *temp_v0;
        temp_v1 = &sp34 + ((u32) Rand_ZeroFloat(14.0f) & 0xFF);
        *temp_v0 = *temp_v1;
        *temp_v1 = temp_a0;
        phi_s0 = temp_s0;
    } while (temp_s0 < 0xE);
    phi_a1 = 0;
    phi_a1_2 = 0;
    do {
        temp_s0_2 = (phi_s0_2 + 1) & 0xFF;
        (&gSaveContext + phi_a1)->unkF22 = 0;
        *(&sp44 + phi_s0_2) = 0;
        phi_a1 = temp_s0_2;
        phi_s0_2 = temp_s0_2;
    } while (temp_s0_2 < 7);
    do {
        temp_a3 = *(&sp34 + phi_s0_3);
        if ((phi_a1_2 % 2) != 0) {
            temp_v1_2 = (phi_a1_2 / 2) & 0xFF;
            temp_v0_2 = &sp44 + temp_v1_2;
            temp_a0_2 = &gSaveContext + temp_v1_2;
            temp_t4 = *temp_v0_2 | (temp_a3 * 0x10);
            temp_t5 = temp_t4 | temp_a0_2->unkF22;
            *temp_v0_2 = temp_t4;
            temp_a0_2->unkF22 = temp_t5;
        } else {
            temp_v0_3 = &sp44 + ((phi_a1_2 / 2) & 0xFF);
            *temp_v0_3 |= temp_a3;
        }
        temp_s0_3 = (phi_s0_3 + 1) & 0xFF;
        phi_a1_2 = temp_s0_3;
        phi_s0_3 = temp_s0_3;
    } while (temp_s0_3 < 0xE);
}

void EnAob01_Init(EnAob01 *this, GlobalContext *globalCtx) {
    SkelAnime *sp38;
    ColliderCylinder *sp34;
    ColliderCylinder *temp_a1_2;
    SkelAnime *temp_a1;
    s32 temp_v0;
    u32 temp_t8;
    void (*phi_t1)(EnAob01 *, GlobalContext *);
    EnAob01 *this = (EnAob01 *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    temp_a1 = &this->unk148;
    sp38 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06000180, NULL, &this->unk212, &this->unk272, 0x10);
    temp_a1_2 = &this->unk18C;
    sp34 = temp_a1_2;
    Collider_InitCylinder(globalCtx, temp_a1_2);
    Collider_SetCylinder(globalCtx, temp_a1_2, (Actor *) this, &D_809C3820);
    this->unk43C = 0;
    func_800BDC5C(sp38, (ActorAnimationEntry []) D_809C3790, 0);
    Actor_SetScale((Actor *) this, 0.01f);
    temp_v0 = gSaveContext.eventInf[0] & 7;
    if (temp_v0 != 0) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                return;
            }
            func_809C2FA0();
            func_809C11EC(this, globalCtx);
            temp_t8 = this->actor.flags | 1;
            this->actor.flags = temp_t8;
            this->actor.flags = temp_t8 | 0x10000;
            phi_t1 = func_809C28B8;
            goto block_7;
        }
        this->unk440 = 0x1F4;
        func_809C1304(this, globalCtx);
        this->actor.draw = NULL;
        this->unk430 = (s16) this->actor.cutscene;
        func_809C2594(this, globalCtx);
        ActorCutscene_SetIntentToPlay(this->unk430);
        this->actor.flags &= -2;
        func_809C2F34(this, globalCtx);
        this->actionFunc = func_809C2824;
        return;
    }
    func_809C2FA0();
    func_809C11EC(this, globalCtx);
    this->actor.flags |= 1;
    phi_t1 = func_809C2060;
block_7:
    this->actionFunc = phi_t1;
}

void EnAob01_Destroy(EnAob01 *this, GlobalContext *globalCtx) {
    EnAob01 *this = (EnAob01 *) thisx;
    if ((this->unk2D2 & 0x20) == 0) {
        gSaveContext.weekEventReg[63] &= 0xFE;
    }
    Collider_DestroyCylinder(globalCtx, &this->unk18C);
}

void EnAob01_Update(EnAob01 *this, GlobalContext *globalCtx) {
    EnAob01 *this = (EnAob01 *) thisx;
    this->actionFunc(this, globalCtx);
    func_809C1EC8(this, globalCtx);
}

s32 func_809C33D8(void **arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    ? sp38;
    s32 *sp2C;
    void *sp24;
    s32 *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    sp38.unk0 = (s32) D_809C395C.unk0;
    sp38.unk4 = (s32) D_809C395C.unk4;
    sp38.unk8 = (s32) D_809C395C.unk8;
    if (arg1 == 0xF) {
        temp_v1 = *arg0;
        *arg2 = &D_06003D18;
        temp_v0 = temp_v1->unk2B0;
        temp_v1->unk2B0 = (s32 *) (temp_v0 + 8);
        *temp_v0 = 0xDB060028;
        sp2C = temp_v0;
        sp2C->unk4 = Lib_SegmentedToVirtual(*(&sp38 + (arg5->unk3EE * 4)));
    }
    if (arg1 == 0xF) {
        SysMatrix_InsertTranslation(1500.0f, 0.0f, 0.0f, 1);
        SysMatrix_InsertXRotation_s(arg5->unk2DC, 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) arg5->unk2DA * -1), 1);
        SysMatrix_InsertTranslation(-1500.0f, 0.0f, 0.0f, 1);
    }
    if (arg1 == 8) {
        SysMatrix_InsertXRotation_s((s16) ((s32) arg5->unk2E2 * -1), 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) arg5->unk2E0 * -1), 1);
    }
    if ((arg1 == 8) || (arg1 == 9) || (arg1 == 0xC)) {
        temp_v1_2 = arg5 + (arg1 * 2);
        sp24 = temp_v1_2;
        arg4->y += (s16) (s32) Math_SinS(temp_v1_2->unk2F8) * 0xC8;
        arg4->z += (s16) (s32) Math_CosS(temp_v1_2->unk318) * 0xC8;
    }
    return 0;
}

void func_809C35B4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 0xF) {
        SysMatrix_MultiplyVector3fByState(&D_809C3968, arg4 + 0x3C);
    }
}

void func_809C35F4(GlobalContext *arg0, s32 arg1, Actor *arg2) {

}

void EnAob01_Draw(EnAob01 *this, GlobalContext *globalCtx) {
    ? sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    Gfx *sp44;
    Gfx *sp40;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 *temp_a1;
    EnAob01 *this = (EnAob01 *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp44 = temp_v0;
    sp44->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, 0x32, 0x50, 0, 0);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp40 = temp_v0_2;
    sp40->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, 0x32, 0x50, 0, 0);
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0;
    temp_v0_3->words.w0 = 0xE7000000;
    func_801343C0(globalCtx, this->unk148.skeleton, this->unk148.limbDrawTbl, (s32) this->unk148.dListCount, (s32 (*)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *)) func_809C33D8, func_809C35B4, func_809C35F4, (Actor *) this);
    if (this->actor.draw != 0) {
        func_8012C2DC(globalCtx->state.gfxCtx);
        sp5C.unk0 = (f32) this->actor.world.pos.x;
        temp_a1 = &sp50;
        sp5C.unk4 = (f32) this->actor.world.pos.y;
        sp5C.unk8 = (f32) this->actor.world.pos.z;
        sp50 = 0.5f;
        sp54 = 0.5f;
        sp58 = 0.5f;
        func_800BC620((Vec3f *) &sp5C, (Vec3f *) temp_a1, 0xFF, globalCtx);
    }
}
