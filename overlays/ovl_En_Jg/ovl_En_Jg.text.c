CRASHED

typedef struct EnJg {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char pad144[0x8];
    /* 0x14C */ ColliderCylinder unk14C;            /* inferred */
    /* 0x198 */ SkelAnime unk198;                   /* inferred */
    /* 0x1DC */ void (*actionFunc)(EnJg *, GlobalContext *);
    /* 0x1E0 */ Path *unk1E0;                       /* inferred */
    /* 0x1E4 */ char pad1E4[0x8];                   /* maybe part of unk1E0[3]? */
    /* 0x1EC */ Vec3s unk1EC;                       /* inferred */
    /* 0x1F2 */ Vec3s unk1F2;                       /* inferred */
    /* 0x1F8 */ Vec3s unk1F8;                       /* inferred */
    /* 0x1FE */ char pad1FE[0xCC];                  /* maybe part of unk1F8[35]? */
    /* 0x2CA */ Vec3s unk2CA;                       /* inferred */
    /* 0x2D0 */ char pad2D0[0xCE];                  /* maybe part of unk2CA[35]? */
    /* 0x39E */ s16 unk39E;                         /* inferred */
    /* 0x3A0 */ s16 unk3A0;                         /* inferred */
    /* 0x3A2 */ s16 unk3A2;                         /* inferred */
    /* 0x3A4 */ char pad3A4[0x24];                  /* maybe part of unk3A2[19]? */
    /* 0x3C8 */ s16 unk3C8;                         /* inferred */
    /* 0x3CA */ char pad3CA[0x4];                   /* maybe part of unk3C8[3]? */
    /* 0x3CE */ s16 unk3CE;                         /* inferred */
    /* 0x3D0 */ char pad3D0[0x4];                   /* maybe part of unk3CE[3]? */
} EnJg;                                             /* size = 0x3D4 */

struct _mips2c_stack_EnJg_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnJg_Draw {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnJg_Init {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ ColliderCylinder *sp34;              /* inferred */
    /* 0x38 */ char pad38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnJg_Update {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B73A90 {};              /* size 0x0 */

struct _mips2c_stack_func_80B73AE4 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ Collider *sp28;                      /* inferred */
    /* 0x2C */ CollisionCheckContext *sp2C;         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B73B98 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B73C58 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad30[0xC];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x8];                     /* maybe part of sp44[3]? */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ char pad54[0x4];
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ void *sp5C;                          /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80B73DF4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B73E3C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B73F1C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B7406C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7408C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B74134 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B741F8 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B742F8 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ s16 sp24;                            /* inferred */
    /* 0x26 */ char pad26[0x1];
    /* 0x27 */ u8 sp27;                             /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B74440 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ u8 *sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B747C8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B74840 {
    /* 0x00 */ char pad0[0x3E];
    /* 0x3E */ s16 sp3E;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B749D0 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B74AD8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B74B54 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B74BC8 {
    /* 0x00 */ char pad0[0x4C];
    /* 0x4C */ SkelAnime *sp4C;                     /* inferred */
    /* 0x50 */ char pad50[0x8];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80B74E5C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B750A0 {};              /* size 0x0 */

struct _mips2c_stack_func_80B7517C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B751F8 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ s16 sp24;                            /* inferred */
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B75658 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B75708 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

? func_800E0308(s32, Actor *);                      /* extern */
Actor *func_80B73A90(GlobalContext *arg0, u8 arg1); /* static */
void func_80B73AE4(Actor *arg0, GlobalContext *arg1); /* static */
s16 func_80B73B98(u8 *arg0, s32 arg1, void *arg2, f32 *arg3); /* static */
s32 func_80B73C58(Actor *arg0, u8 *arg1, s32 arg2); /* static */
s8 func_80B73DF4(void *arg0);                       /* static */
void func_80B73E3C(Actor *arg0, Actor *);           /* static */
void func_80B73F1C(EnJg *arg0, GlobalContext *arg1); /* static */
void func_80B7406C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B7408C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B74134(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B741F8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B742F8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B74440(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B74550(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B747C8(void *arg0, ? arg1);             /* static */
void func_80B74840(EnJg *arg0, GlobalContext *arg1); /* static */
void func_80B749D0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B74AD8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B74B54(Actor *arg0, ? arg1);            /* static */
void func_80B74BC8(EnJg *arg0, GlobalContext *arg1); /* static */
u16 func_80B74E5C(Actor *arg0);                     /* static */
u16 func_80B750A0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B7517C(EnJg *arg0, GlobalContext *arg1); /* static */
void func_80B751F8(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B75658(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80B75708(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_0601ADC0;
extern FlexSkeletonHeader D_0601AFF0;
static ColliderCylinderInit D_80B75820 = {
    {0xA, 0, 0, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x3C, 0x50, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80B7584C = {0, 0x32, 0x50, 0, 0xFF};
static DamageTable D_80B75858 = {
    {
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
};
static ActorAnimationEntryS D_80B75878[19] = {
    {(AnimationHeader *)0x601ADC0, 1.0f, 0, 0xFFFF, 0, 0xFFF6},
    {(AnimationHeader *)0x6009440, 1.0f, 0, 0xFFFF, 0, 0xFFF6},
    {(AnimationHeader *)0x600BDD8, 1.0f, 0, 0xFFFF, 0, 0xFFF6},
    {(AnimationHeader *)0x600C7A8, 1.0f, 0, 0xFFFF, 0, 0xFFF6},
    {(AnimationHeader *)0x600DB54, 1.0f, 0, 0xFFFF, 2, 0xFFF6},
    {(AnimationHeader *)0x600E8FC, 1.0f, 0, 0xFFFF, 0, 0xFFF6},
    {(AnimationHeader *)0x601436C, 1.0f, 0, 0xFFFF, 0, 0xFFF6},
    {(AnimationHeader *)0x600DB54, 2.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600DB54, -2.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6009440, -1.0f, 0, 0xFFFF, 0, 0xFFF6},
    {(AnimationHeader *)0x6011F50, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x60129F4, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6013DD8, 1.0f, 1, 0x2C, 2, 0},
    {(AnimationHeader *)0x60077CC, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600D630, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x600FE48, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6018CE4, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x601ADC0, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600A07C, 1.0f, 0, 0xFFFF, 0, 0},
};
static Vec3f D_80B759A8 = {0.0f, 0.0f, 0.0f};
static Vec3f D_80B759B4 = {0.0f, 0.0f, 0.0f};
static Vec3f D_80B759C0 = {1000.0f, -500.0f, 0.0f};
static Vec3f D_80B759CC = {0.0f, 0.0f, 0.75f};
static Vec3f D_80B759D8 = {0.0f, 0.0f, -0.07f};

Actor *func_80B73A90(GlobalContext *arg0, u8 arg1) {
    Actor *temp_v1;
    Actor *temp_v1_2;
    Actor *phi_v1;

    temp_v1 = arg0->actorCtx.actorList[4].first;
    phi_v1 = temp_v1;
    if (temp_v1 != 0) {
loop_1:
        if ((phi_v1->id == 0x242) && ((arg1 & 0xFF) == (phi_v1->params & 0xF))) {
            return phi_v1;
        }
        temp_v1_2 = phi_v1->next;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 == 0) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return NULL;
        }
        goto loop_1;
    }
    return NULL;
}

void func_80B73AE4(Actor *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp2C;
    Collider *sp28;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;
    GlobalContext *temp_a0;

    temp_a1 = arg1 + 0x18884;
    arg0->unk192 = (s16) (s32) arg0->world.pos.x;
    temp_a2 = arg0 + 0x14C;
    arg0->unk194 = (s16) (s32) arg0->world.pos.y;
    temp_a0 = arg1;
    arg0->unk196 = (s16) (s32) arg0->world.pos.z;
    arg1 = arg1;
    sp28 = temp_a2;
    sp2C = temp_a1;
    CollisionCheck_SetAC(temp_a0, temp_a1, temp_a2);
    CollisionCheck_SetOC(arg1, temp_a1, temp_a2);
    Actor_UpdateBgCheckInfo(arg1, arg0, 0.0f, 30.0f, 30.0f, 7U);
}

s16 func_80B73B98(u8 *arg0, s32 arg1, void *arg2, f32 *arg3) {
    void *temp_v1;
    f32 phi_f14;
    f32 phi_f12;

    if (arg0 != 0) {
        temp_v1 = (arg1 * 6) + Lib_SegmentedToVirtual(arg0->unk4);
        phi_f14 = (f32) temp_v1->unk0 - arg2->unk0;
        phi_f12 = (f32) temp_v1->unk4 - arg2->unk8;
    } else {
        phi_f14 = 0.0f;
        phi_f12 = 0.0f;
    }
    *arg3 = (phi_f14 * phi_f14) + (phi_f12 * phi_f12);
    return (s16) (s32) (Math_Acot2F(phi_f12, phi_f14) * 10430.378f);
}

s32 func_80B73C58(Actor *arg0, u8 *arg1, s32 arg2) {
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

    temp_v0 = Lib_SegmentedToVirtual(arg1->unk4);
    temp_a2 = arg1->unk0;
    temp_a3 = arg2 * 6;
    sp50 = 0;
    sp28 = temp_a3;
    sp5C = temp_v0;
    sp58 = (s32) temp_a2;
    Math_Vec3s_ToVec3f((Vec3f *) &sp30, temp_a3 + temp_v0);
    if (arg2 == 0) {
        phi_f12 = (f32) (sp5C->unk6 - sp5C->unk0);
        phi_f14 = (f32) (sp5C->unkA - sp5C->unk4);
    } else {
        temp_v0_2 = sp5C + temp_a3;
        if (temp_a2 == (arg2 + 1)) {
            temp_v0_3 = sp5C + (temp_a2 * 6);
            phi_f12 = (f32) (temp_v0_3->unk-6 - temp_v0_3->unk-C);
            phi_f14 = (f32) (temp_v0_3->unk-2 - temp_v0_3->unk-8);
        } else {
            phi_f12 = (f32) (temp_v0_2->unk6 - temp_v0_2->unk-6);
            phi_f14 = (f32) (temp_v0_2->unkA - temp_v0_2->unk-2);
        }
    }
    func_8017B7F8((Vec3f *) &sp30, (s16) (s32) (func_80086B30(phi_f12, phi_f14) * 10430.378f), &sp44, &sp40, &sp3C);
    if (((arg0->world.pos.x * sp44) + (sp40 * arg0->world.pos.z) + sp3C) > 0.0f) {
        sp50 = 1;
    }
    return sp50;
}

s8 func_80B73DF4(void *arg0) {
    if ((s32) (s16) (arg0->unk92 - arg0->unkBE) > 0) {
        return arg0->unk38;
    }
    return ActorCutscene_GetAdditionalCutscene((s16) arg0->unk38);
}

void func_80B73E3C(Actor *arg0) {
    u16 temp_t9;

    ActorCutscene_Stop(arg0->unk3C8);
    if (arg0->unk3D0 == 0xA) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            arg0->unk1DC = func_80B74134;
        } else {
            arg0->unk3C8 = 0x7C;
        }
    } else {
        arg0->unk3C8 = ActorCutscene_GetAdditionalCutscene(arg0->unk3C8);
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
    }
    ActorCutscene_SetIntentToPlay(arg0->unk3C8);
    temp_t9 = arg0->unk3CE;
    arg0->unk1DC = func_80B741F8;
    switch (temp_t9) {
    case 3536:
    case 3538:
    case 3539:
    case 3540:
    case 3542:
        arg0->unk3CC = (u16) (arg0->unk3CC | 1);
        return;
    default:
        arg0->unk3CC = (u16) (arg0->unk3CC & 0xFFFE);
        return;
    }
}

void func_80B73F1C(EnJg *arg0, GlobalContext *arg1) {
    u16 temp_t6;

    temp_t6 = arg0->unk3CE;
    switch (temp_t6) {
    case 3500:
        arg0->unk39E = 3;
        func_8013BC6C(arg0 + 0x198, D_80B75878, (s32) arg0->unk39E);
        arg0->actionFunc = func_80B74550;
        return;
    case 3501:
        arg0->unk39E = 4;
        func_8013BC6C(arg0 + 0x198, D_80B75878, (s32) arg0->unk39E);
        arg0->actionFunc = func_80B742F8;
        return;
    case 3511:
        arg0->unk39E = 4;
        func_8013BC6C(arg0 + 0x198, D_80B75878, (s32) arg0->unk39E);
        arg0->actionFunc = func_80B74550;
        return;
    case 3502:
    case 3507:
    case 3510:
    case 3514:
    case 3517:
    case 3524:
        arg0->unk39E = 0;
        func_8013BC6C(arg0 + 0x198, D_80B75878, (s32) arg0->unk39E);
        arg0->actionFunc = func_80B74550;
        return;
    case 3504:
    case 3515:
    case 3516:
    case 3526:
        arg0->unk39E = 6;
        func_8013BC6C(arg0 + 0x198, D_80B75878, (s32) arg0->unk39E);
        arg0->actionFunc = func_80B74550;
        return;
    case 3508:
    case 3509:
        arg0->unk39E = 2;
        func_8013BC6C(arg0 + 0x198, D_80B75878, (s32) arg0->unk39E);
        arg0->actionFunc = func_80B74550;
        /* fallthrough */
    default:
        return;
    }
}

void func_80B7406C(void) {
    func_80B751F8();
}

void func_80B7408C(Actor *arg0, GlobalContext *arg1) {
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->unk3CC = (u16) (arg0->unk3CC | 4);
        func_801518B0(arg1, arg0->unk3CE, arg0);
        arg0->unk1DC = func_80B74134;
        return;
    }
    if ((arg0->xzDistToPlayer < 100.0f) || (arg0->isTargeted != 0)) {
        func_800B863C(arg0, arg1);
        arg0->unk3CE = func_80B750A0(arg0, arg1);
    }
}

void func_80B74134(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v0;
    u16 temp_v0_2;

    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        temp_v0 = arg0->unk3CE;
        if ((temp_v0 == 0xDCC) || (temp_v0 == 0xDDD) || (temp_v0 == 0xDE0)) {
            arg1->msgCtx.unk11F22 = 0x43;
            arg1->msgCtx.unk12023 = 4;
            arg0->unk3CC = (u16) (arg0->unk3CC & 0xFFFB);
            arg0->unk1DC = func_80B7408C;
            return;
        }
        temp_v0_2 = func_80B74E5C(arg0);
        arg0->unk3CE = temp_v0_2;
        func_801518B0(arg1, temp_v0_2 & 0xFFFF, arg0);
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_80B741F8(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_v0;
    u16 temp_t6;

    if (ActorCutscene_GetCanPlayNext(arg0->unk3C8) != 0) {
        temp_t6 = arg0->unk3CE;
        switch (temp_t6) {
        case 3536:
        case 3538:
        case 3539:
        case 3540:
        case 3542:
            temp_v0 = func_80B73A90(arg1, arg0->unk3D0);
            arg0->unk144 = temp_v0;
            ActorCutscene_Start(arg0->unk3C8, temp_v0);
            func_800E0308(arg1->cameraPtrs[0], arg0->unk144);
            break;
        default:
            ActorCutscene_Start(arg0->unk3C8, arg0);
            func_800E0308(arg1->cameraPtrs[0], arg0->unk144);
            break;
        }
        arg0->unk1DC = func_80B74134;
        return;
    }
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        if (arg0->unk3D0 == 0xA) {
            arg0->unk1DC = func_80B74134;
        } else {
            ActorCutscene_Stop(0x7C);
        }
    }
    ActorCutscene_SetIntentToPlay(arg0->unk3C8);
}

void func_80B742F8(Actor *arg0, GlobalContext *arg1) {
    u8 sp27;
    s16 sp24;
    s16 temp_v1;

    sp27 = func_80152498(arg1 + 0x4908);
    sp24 = (s16) (s32) arg0->unk1B0;
    temp_v1 = arg0->unk39E;
    if (temp_v1 == 4) {
        if (sp24 == SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_80B75878[arg0->unk39E].animationSeg)) {
            arg0->unk39E = 5;
            func_8013BC6C(arg0 + 0x198, D_80B75878, (s32) arg0->unk39E);
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return;
    }
    if (temp_v1 == 5) {
        if ((sp27 == 5) && (func_80147624(arg1) != 0)) {
            arg1->msgCtx.unk11F22 = 0x43;
            arg1->msgCtx.unk12023 = 4;
            arg0->unk39E = 1;
            arg0->unk3CC = (u16) (arg0->unk3CC & 0xFFFB);
            func_8013BC6C(arg0 + 0x198, D_80B75878, (s32) arg0->unk39E);
            arg0->unk1DC = func_80B74440;
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return;
    }
    if (temp_v1 == 1) {
        Math_ApproachF(arg0 + 0x70, 0.0f, 0.2f, 1.0f);
        func_80B751F8(arg0, arg1);
    }
}

void func_80B74440(Actor *arg0, GlobalContext *arg1) {
    f32 sp30;
    u8 *sp2C;
    s32 temp_v0;
    u8 *temp_t6;
    s16 phi_a1;

    temp_t6 = arg0->unk1E0;
    sp2C = temp_t6;
    if (temp_t6 != 0) {
        phi_a1 = func_80B73B98(temp_t6, arg0->unk1E4, arg0 + 0x24, &sp30);
        if ((arg0->bgCheckFlags & 8) != 0) {
            phi_a1 = arg0->wallYaw;
        }
        Math_SmoothStepToS(arg0 + 0x32, phi_a1, 4, 0x3E8, (s16) 1);
        arg0->shape.rot.y = arg0->world.rot.y;
        if (func_80B73C58(arg0, arg0->unk1E0, arg0->unk1E4) != 0) {
            temp_v0 = arg0->unk1E4;
            if (temp_v0 >= (*arg0->unk1E0 - 1)) {
                arg0->unk39E = 1;
                arg0->unk1DC = func_80B742F8;
            } else {
                arg0->unk1E4 = (s32) (temp_v0 + 1);
                Math_ApproachF(arg0 + 0x70, 0.5f, 0.2f, 1.0f);
            }
        } else {
            Math_ApproachF(arg0 + 0x70, 0.5f, 0.2f, 1.0f);
        }
    }
    func_80B751F8(arg0, arg1);
}

/*
Failed to decompile function func_80B74550:

Label L80B74674 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void func_80B747C8(void *arg0, ? arg1) {
    s16 temp_a2;
    void *temp_a3;

    temp_a3 = arg0;
    if (temp_a3->unk39E != 1) {
        temp_a3->unk39E = 1;
        temp_a3->unk3A2 = 0x3E8;
        temp_a2 = temp_a3->unk39E;
        arg0 = temp_a3;
        func_8013BC6C(temp_a3 + 0x198, D_80B75878, (s32) temp_a2);
        arg0->unk1DC = func_80B74440;
        return;
    }
    temp_a3->unk3A2 = 0x3E8;
    temp_a3->unk1DC = func_80B74440;
}

void func_80B74840(EnJg *arg0, GlobalContext *arg1) {
    s16 sp3E;
    Actor *temp_v0_2;
    Actor *temp_v0_3;
    f32 temp_f10;
    s16 temp_v0;

    sp3E = (s16) (s32) arg0->unk198.animCurrentFrame;
    temp_v0 = SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_80B75878[arg0->unk39E].animationSeg);
    if (arg0->unk3A0 == 1) {
        temp_f10 = (f32) temp_v0;
        arg0->unk3A0 = 2;
        arg0->unk3A2 = 0x3E8;
        arg0->unk198.animCurrentFrame = temp_f10;
        temp_v0_2 = Actor_Spawn(arg1 + 0x1CA0, arg1, 0x8E, arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, (s16) (s32) arg0->actor.world.rot.x, (s16) (s32) arg0->actor.world.rot.y, (s16) (s32) arg0->actor.world.rot.z, (s16) 0xFF50);
        arg0->unk39E = 8;
        arg0->unk148 = temp_v0_2;
        func_8013BC6C(arg0 + 0x198, D_80B75878, (s32) arg0->unk39E);
        goto block_5;
    }
    if (arg0->unk39E == 7) {
        arg0->unk3A0 = 2;
        if (sp3E == temp_v0) {
            arg0->unk3A2 = 0x3E8;
            temp_v0_3 = Actor_Spawn(&arg1->actorCtx, arg1, 0x8E, arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, (s16) (s32) arg0->actor.world.rot.x, (s16) (s32) arg0->actor.world.rot.y, (s16) (s32) arg0->actor.world.rot.z, (s16) 0xFF50);
            arg0->unk39E = 8;
            arg0->unk148 = temp_v0_3;
            func_8013BC6C(arg0 + 0x198, D_80B75878, (s32) arg0->unk39E);
block_5:
            arg0->actionFunc = func_80B749D0;
        }
    }
}

void func_80B749D0(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    GlobalContext *temp_a1;
    SkelAnime *temp_a0;

    temp_a1 = arg1;
    if (arg0->unk148->unk138 == 0) {
        arg0->unk148 = NULL;
        temp_a0 = arg0 + 0x198;
        if ((arg0->unk39E == 8) && (sp24 = temp_a0, (func_801378B8(temp_a0, 0.0f) != 0))) {
            arg0->unk39E = 0;
            if (arg0->unk3CE == 0xDAC) {
                func_8013BC6C(temp_a0, D_80B75878, (s32) arg0->unk39E);
                arg0->unk1DC = func_80B7406C;
                return;
            }
            arg0->unk3A2 = 0x3E8;
            func_8013BC6C(temp_a0, D_80B75878, (s32) arg0->unk39E);
            arg0->unk1DC = func_80B74440;
            return;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return;
    }
    arg1 = arg1;
    if (func_800B84D0(arg0, temp_a1) != 0) {
        func_801518B0(arg1, 0x236U, arg0);
        arg0->unk1DC = func_80B74AD8;
        return;
    }
    if (arg0->isTargeted != 0) {
        func_800B863C(arg0, arg1);
    }
}

void func_80B74AD8(Actor *arg0, GlobalContext *arg1) {
    if ((func_80152498(arg1 + 0x4908) == 6) && (func_80147624(arg1) != 0)) {
        arg1->msgCtx.unk11F22 = 0x43;
        arg1->msgCtx.unk12023 = 4;
        arg0->unk1DC = func_80B749D0;
    }
}

void func_80B74B54(Actor *arg0, ? arg1) {
    if (ActorCutscene_GetCanPlayNext(arg0->unk3C8) != 0) {
        ActorCutscene_Start(arg0->unk3C8, arg0);
        arg0->unk1DC = func_80B74BC8;
        return;
    }
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
    }
    ActorCutscene_SetIntentToPlay(arg0->unk3C8);
}

void func_80B74BC8(EnJg *arg0, GlobalContext *arg1) {
    SkelAnime *sp4C;
    Actor *temp_a0_2;
    SkelAnime *temp_a0_3;
    u16 temp_a0;
    u16 temp_t1;
    u32 temp_v0;
    u8 temp_v0_2;
    void *temp_v1;

    if (func_800EE29C(arg1, 0x1D6U) != 0) {
        temp_v0 = func_800EE200(arg1, 0x1D6U);
        temp_v1 = arg1 + (temp_v0 * 4);
        temp_a0 = arg1->csCtx.npcActions[temp_v0]->unk0;
        if (arg0->unk3CB != temp_a0) {
            arg0->unk3CB = (u8) temp_a0;
            temp_t1 = *temp_v1->unk1F4C;
            switch (temp_t1) {
            case 1:
                temp_a0_2 = arg0->unk1E8;
                arg0->unk3CA = 0x11;
                if (temp_a0_2 != 0) {
                    Actor_MarkForDeath(temp_a0_2);
                    arg0->unk1E8 = NULL;
                }
                break;
            case 2:
                arg0->unk3CA = 0xA;
                break;
            case 3:
                arg0->unk3CA = 0xB;
                break;
            case 4:
                arg0->unk3CA = 0xC;
                break;
            case 5:
                arg0->unk3CA = 0xD;
                break;
            case 6:
                arg0->unk3CA = 0xE;
                break;
            case 7:
                arg0->unk3CA = 0xF;
                break;
            case 8:
                arg0->unk3CA = 0x10;
                break;
            case 9:
                arg0->unk3CA = 0x12;
                break;
            default:
                arg0->unk3CA = 0;
                break;
            }
            func_8013BC6C(arg0 + 0x198, D_80B75878, (s32) arg0->unk3CA);
        }
        if (((arg0->unk3CC & 8) == 0) && (((arg0->unk3CA == 0xA) && (func_801378B8(arg0 + 0x198, 14.0f) != 0) && (arg0->unk3A0 != 3)) || (((temp_v0_2 = arg0->unk3CA, (temp_v0_2 == 0xB)) || (temp_v0_2 == 0xC)) && (arg0->unk3A0 == 3)))) {
            arg0->unk3CC |= 8;
            arg0->unk1E8 = Actor_SpawnAsChildAndCutscene(&arg1->actorCtx, arg1, 0x226, arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, (s16) (s32) arg0->actor.shape.rot.x, (s16) (s32) arg0->actor.shape.rot.y, (s16) (s32) arg0->actor.shape.rot.z, (s32) arg0->actor.params, (u32) arg0->actor.cutscene, (s32) arg0->actor.unk20, NULL);
        }
        temp_a0_3 = arg0 + 0x198;
        if (arg0->unk3CA == 0xA) {
            sp4C = temp_a0_3;
            if (func_801378B8(temp_a0_3, 23.0f) != 0) {
                func_8019F1C0(&D_80B759A8, 0x295DU);
                return;
            }
            if (func_801378B8(temp_a0_3, 38.0f) != 0) {
                func_8019F1C0(&D_80B759A8, 0x295FU);
                return;
            }
            /* Duplicate return node #30. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #30. Try simplifying control flow for better match */
        return;
    }
    arg0->unk3CB = 0x63;
    arg0->unk3A2 = 0x3E8;
    gSaveContext.weekEventReg[24] |= 0x40;
    arg0->actionFunc = func_80B7406C;
}

u16 func_80B74E5C(Actor *arg0) {
    Actor *temp_a1;
    u16 temp_t6;
    u8 temp_v0;

    temp_a1 = arg0;
    temp_t6 = temp_a1->unk3CE;
    switch (temp_t6) {
    case 3500:
        return 0xDADU;
    case 3502:
        return 0xDB0U;
    case 3504:
        return 0xDB3U;
    case 3507:
        return 0xDB4U;
    case 3510:
        return 0xDB7U;
    case 3511:
        return 0xDBAU;
    case 3514:
        return 0xDBBU;
    case 3515:
    case 3516:
        return 0xDC6U;
    case 3531:
        return 0xDCCU;
    case 3550:
        return 0xDDFU;
    case 3551:
        return 0xDE0U;
    case 3533:
        return 0xDCEU;
    case 3534:
        return 0xDCFU;
    case 3535:
        temp_a1->unk3D0 = 3U;
        arg0 = temp_a1;
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            arg0 = arg0;
            ActorCutscene_Stop(0x7C);
        }
        arg0 = arg0;
        ActorCutscene_SetIntentToPlay(arg0->unk3C8);
        arg0->unk1DC = func_80B741F8;
        return 0xDD0U;
    case 3536:
        func_80B73E3C(temp_a1, temp_a1);
        return 0xDD1U;
    case 3537:
        temp_v0 = temp_a1->unk3D0;
        if (temp_v0 != 3) {
            if (temp_v0 != 4) {
                if (temp_v0 != 5) {
                    return 0xDD4U;
                }
                temp_a1->unk3D0 = 6U;
                func_80B73E3C(temp_a1, temp_a1);
                return 0xDD4U;
            }
            temp_a1->unk3D0 = 5U;
            func_80B73E3C(temp_a1, temp_a1);
            return 0xDD3U;
        }
        temp_a1->unk3D0 = 4U;
        func_80B73E3C(temp_a1, temp_a1);
        return 0xDD2U;
    case 3538:
        func_80B73E3C(temp_a1, temp_a1);
        return 0xDD1U;
    case 3539:
        func_80B73E3C(temp_a1, temp_a1);
        return 0xDD1U;
    case 3540:
        func_80B73E3C(temp_a1, temp_a1);
        return 0xDD5U;
    case 3541:
        temp_a1->unk3D0 = 7U;
        func_80B73E3C(temp_a1, temp_a1);
        return 0xDD6U;
    case 3542:
        func_80B73E3C(temp_a1, temp_a1);
        return 0xDD7U;
    case 3543:
        temp_a1->unk3D0 = 0xAU;
        arg0 = temp_a1;
        func_80B73E3C(temp_a1, temp_a1);
        arg0->unk3CC = (u16) (arg0->unk3CC & 0xFFFE);
        return 0xDD8U;
    case 3544:
        return 0xDD9U;
    case 3545:
        return 0xDDAU;
    case 3546:
        return 0xDDBU;
    case 3547:
        return 0xDDCU;
    case 3548:
        gSaveContext.weekEventReg[77] |= 0x80;
        return 0xDDDU;
    default:
        return 0U;
    }
}

u16 func_80B750A0(Actor *arg0, GlobalContext *arg1) {
    u32 temp_v1;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    if ((arg0->params & 1) == 0) {
        if (temp_v0->unk14B == 1) {
            if (((gSaveContext.weekEventReg[24] & 0x10) != 0) || (temp_v1 = gSaveContext.inventory.questItems, ((gBitFlags->unk1C & temp_v1) != 0)) || ((gBitFlags->unk60 & temp_v1) != 0)) {
                return 0xDBCU;
            }
            return 0xDB6U;
        }
        if ((gSaveContext.weekEventReg[24] & 0x20) != 0) {
            return 0xDB5U;
        }
        return 0xDAEU;
    }
    if (temp_v0->unk14B == 1) {
        if ((gSaveContext.weekEventReg[77] & 0x80) != 0) {
            return 0xDDEU;
        }
        return 0xDCDU;
    }
    return 0xDCBU;
}

void func_80B7517C(EnJg *arg0, GlobalContext *arg1) {
    if ((arg1->state.frames & 7) == 0) {
        EffectSsIceSmoke_Spawn(arg1, arg0 + 0x3A4, arg0 + 0x3B0, arg0 + 0x3BC, (s16) (s32) (s16) (s32) ((Rand_ZeroOne() * 20.0f) + 30.0f));
    }
}

void func_80B751F8(Actor *arg0, GlobalContext *arg1) {
    s16 sp26;
    s16 sp24;
    u16 temp_a1;

    sp26 = (s16) (s32) arg0->unk1B0;
    sp24 = SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_80B75878[arg0->unk39E].animationSeg);
    if (func_800B84D0(arg0, arg1) != 0) {
        temp_a1 = arg0->unk3CE;
        arg0->unk3CC = (u16) (arg0->unk3CC | 4);
        arg0->speedXZ = 0.0f;
        if (temp_a1 == 0xDAC) {
            arg0->unk3A0 = 0;
            goto block_7;
        }
        if (temp_a1 == 0xDAE) {
            gSaveContext.weekEventReg[24] |= 0x20;
            goto block_7;
        }
        if (temp_a1 == 0xDB6) {
            gSaveContext.weekEventReg[24] |= 0x10;
block_7:
        }
        func_801518B0(arg1, arg0->unk3CE, arg0);
        arg0->unk1DC = func_80B73F1C;
        return;
    }
    if ((arg0->xzDistToPlayer < 100.0f) || (arg0->isTargeted != 0)) {
        func_800B863C(arg0, arg1);
        if (arg0->unk3A0 == 0) {
            arg0->unk3CE = func_80B750A0(arg0, arg1);
        }
    }
    arg0->unk3A2 = (s16) (arg0->unk3A2 - 1);
    if (((s32) arg0->unk3A2 <= 0) && (sp26 == sp24)) {
        arg0->unk39E = 7;
        func_8013BC6C(arg0 + 0x198, D_80B75878, (s32) arg0->unk39E);
        func_8019F1C0(&D_80B759A8, 0x295CU);
        arg0->unk1DC = func_80B74840;
    }
}

void EnJg_Init(EnJg *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp34;
    SkelAnime *sp30;
    ColliderCylinder *temp_a1_2;
    SkelAnime *temp_a1;
    s16 temp_v0;
    EnJg *this = (EnJg *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    temp_a1 = &this->unk198;
    sp30 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_0601AFF0, &D_0601ADC0, &this->unk1F8, &this->unk2CA, 0x23);
    temp_a1_2 = &this->unk14C;
    sp34 = temp_a1_2;
    Collider_InitCylinder(globalCtx, temp_a1_2);
    Collider_SetCylinder(globalCtx, temp_a1_2, (Actor *) this, &D_80B75820);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80B75858, &D_80B7584C);
    Actor_SetScale((Actor *) this, 0.01f);
    temp_v0 = this->actor.params;
    if ((temp_v0 & 1) == 0) {
        if ((globalCtx->sceneNum == 8) && (gSaveContext.sceneSetupIndex == 7) && (globalCtx->csCtx.unk_12 == 0)) {
            this->unk39E = 0;
            this->unk3A0 = 3;
            func_8013BC6C(sp30, D_80B75878, (s32) this->unk39E);
            this->actionFunc = func_80B74BC8;
            return;
        }
        this->unk1E0 = func_8013D648(globalCtx, (s16) ((s32) (temp_v0 & 0xFC00) >> 0xA), 0x3F);
        this->unk39E = 4;
        this->unk3A0 = 1;
        this->unk3A2 = 0x3E8;
        this->unk3CE = 0xDAC;
        func_8013BC6C(sp30, D_80B75878, (s32) this->unk39E);
        this->actionFunc = func_80B74840;
        return;
    }
    this->unk39E = 0;
    this->unk3C8 = (s16) this->actor.cutscene;
    func_8013BC6C(sp30, D_80B75878, (s32) this->unk39E);
    this->actionFunc = (void (*)(EnJg *, GlobalContext *)) func_80B7408C;
}

void EnJg_Destroy(EnJg *this, GlobalContext *globalCtx) {
    EnJg *this = (EnJg *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk14C);
}

void EnJg_Update(EnJg *this, GlobalContext *globalCtx) {
    void (*temp_v0)(EnJg *, GlobalContext *);
    EnJg *this = (EnJg *) thisx;

    temp_v0 = this->actionFunc;
    if ((func_80B749D0 != temp_v0) && (func_80B74AD8 != temp_v0)) {
        func_80B73AE4((Actor *) this, globalCtx);
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        SkelAnime_FrameUpdateMatrix(&this->unk198);
        if ((this->unk3A0 != 3) && ((this->actor.params & 1) == 0)) {
            func_80B7517C(this, globalCtx);
        }
        func_800E9250(globalCtx, (Actor *) this, &this->unk1EC, &this->unk1F2, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
    }
    this->actionFunc(this, globalCtx);
}

s32 func_80B75658(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg1 == 1) {
        if ((arg5->unk3CC & 4) != 0) {
            Math_SmoothStepToS(arg5 + 0x39C, (s16) (arg5->unk92 - arg5->unkBE), 5, 0x1000, (s16) 0x100);
            Matrix_RotateY(arg5->unk39C, 1U);
        } else {
            Math_SmoothStepToS(arg5 + 0x39C, 0, 5, 0x1000, (s16) 0x100);
            Matrix_RotateY(arg5->unk39C, 1U);
        }
    }
    return 0;
}

void func_80B75708(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 0x15) {
        arg1 = arg1;
        SysMatrix_MultiplyVector3fByState(&D_80B759B4, arg4 + 0x3C);
    }
    if (arg1 == 0x16) {
        SysMatrix_MultiplyVector3fByState(&D_80B759C0, arg4 + 0x3A4);
        Matrix_RotateY(arg4->shape.rot.y, 0U);
        SysMatrix_MultiplyVector3fByState(&D_80B759CC, arg4 + 0x3B0);
        SysMatrix_MultiplyVector3fByState(&D_80B759D8, arg4 + 0x3BC);
    }
}

void EnJg_Draw(EnJg *this, GlobalContext *globalCtx) {
    EnJg *this = (EnJg *) thisx;
    SkelAnime_DrawSV(globalCtx, this->unk198.skeleton, this->unk198.limbDrawTbl, (s32) this->unk198.dListCount, func_80B75658, func_80B75708, (Actor *) this);
}
