struct _mips2c_stack_EnIn_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnIn_DoNothing {};             /* size 0x0 */

struct _mips2c_stack_EnIn_Draw {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ GraphicsContext *sp28;               /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnIn_Init {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ ColliderCylinder *sp3C;              /* inferred */
    /* 0x40 */ SkelAnime *sp40;                     /* inferred */
    /* 0x44 */ ActorShape *sp44;                    /* inferred */
    /* 0x48 */ char pad_48[0x2];
    /* 0x4A */ s16 sp4A;                            /* inferred */
    /* 0x4C */ char pad_4C[0xC];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnIn_OverrideLimbDraw {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad_24[0xC];                    /* maybe part of sp20[4]? */
    /* 0x30 */ s32 *sp30;                           /* inferred */
    /* 0x34 */ s32 *sp34;                           /* inferred */
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0x14];
    /* 0x4C */ void *sp4C;                          /* inferred */
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad_50[0x58];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_EnIn_PostLimbDraw {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0x1C];                   /* maybe part of sp24[8]? */
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0xC];
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad_50[0x10];
};                                                  /* size = 0x60 */

struct _mips2c_stack_EnIn_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808F30B0 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808F3178 {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ u8 sp26;                             /* inferred */
    /* 0x27 */ u8 sp27;                             /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808F322C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F32A0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F3310 {};              /* size 0x0 */

struct _mips2c_stack_func_808F3334 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808F33B8 {};              /* size 0x0 */

struct _mips2c_stack_func_808F3414 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808F35AC {};              /* size 0x0 */

struct _mips2c_stack_func_808F35D8 {};              /* size 0x0 */

struct _mips2c_stack_func_808F3618 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F3690 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0xE];
    /* 0x36 */ s16 sp36;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808F374C {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x20];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_808F38F8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808F395C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F39DC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F3AD4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F3B40 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808F3BD4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F3C40 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808F3CD4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F3D40 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808F3DD4 {
    /* 0x00 */ char pad_0[0x1E];
    /* 0x1E */ u16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808F4054 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808F4108 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F4150 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808F4270 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808F43E0 {};              /* size 0x0 */

struct _mips2c_stack_func_808F4414 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ void *sp34;                          /* inferred */
    /* 0x38 */ char pad_38[0x18];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_808F5674 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808F5728 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808F5994 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808F5A34 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808F5A94 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808F5B58 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808F5C98 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808F6334 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

void EnIn_DoNothing(EnIn *arg0, GlobalContext *arg1); /* static */
s32 EnIn_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void EnIn_PostLimbDraw(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
s32 func_808F30B0(SkelAnime *arg0, s16 arg1, SaveContext *); /* static */
? func_808F3178(Actor *arg0, GlobalContext *arg1);  /* static */
void func_808F322C(Actor *arg0, s32 arg1);          /* static */
void func_808F32A0(EnIn *arg0, GlobalContext *arg1); /* static */
? func_808F3310(EnIn *arg0, GlobalContext *arg1);   /* static */
? func_808F3334(Actor *arg0, GlobalContext *arg1);  /* static */
s32 func_808F33B8(s32);                             /* static */
void func_808F3414(Actor *arg0, GlobalContext *arg1); /* static */
void func_808F35AC(EnIn *arg0, GlobalContext *arg1, SaveContext *); /* static */
void func_808F35D8(Actor *arg0, GlobalContext *arg1); /* static */
void func_808F3618(SaveContext *arg0, GlobalContext *arg1); /* static */
void func_808F374C(Actor *arg0, GlobalContext *arg1); /* static */
void func_808F38F8(EnIn *arg0, GlobalContext *arg1); /* static */
void func_808F395C(Actor *arg0, GlobalContext *arg1); /* static */
void func_808F39DC(Actor *arg0, GlobalContext *arg1); /* static */
void func_808F3AD4(Actor *arg0, GlobalContext *arg1); /* static */
void func_808F3B40(Actor *arg0, GlobalContext *arg1); /* static */
void func_808F3BD4(Actor *arg0, GlobalContext *arg1); /* static */
void func_808F3C40(Actor *arg0, GlobalContext *arg1); /* static */
void func_808F3CD4(Actor *arg0, GlobalContext *arg1); /* static */
void func_808F3D40(Actor *arg0, GlobalContext *arg1); /* static */
u16 func_808F3DD4(GlobalContext *arg0, Actor *arg1, u32 arg2); /* static */
void func_808F4054(GlobalContext *arg0, Actor *arg1, u32 arg2, u16 arg3); /* static */
void func_808F4108(Actor *arg0, GlobalContext *arg1, u16 arg2, GlobalContext *); /* static */
? func_808F4150(GlobalContext *arg0, Actor *arg1, u32 arg2, MessageContext *arg3); /* static */
? func_808F4270(GlobalContext *arg0, Actor *arg1, u32 arg2, MessageContext *arg3, s32 arg4); /* static */
? func_808F43E0(Actor *arg0);                       /* static */
s32 func_808F4414(GlobalContext *arg0, Actor *arg1, u32 arg2); /* static */
s32 func_808F5674(GlobalContext *arg0, Actor *arg1, u32 arg2); /* static */
SaveContext *func_808F5728(GlobalContext *arg0, Actor *arg1, u32 arg2, s32 *arg3); /* static */
SaveContext *func_808F5B58(Actor *arg0, GlobalContext *arg1); /* static */
void func_808F5C98(Actor *arg0, GlobalContext *arg1); /* static */
void *func_808F6334(Actor *arg0, GlobalContext *arg1); /* static */
extern void D_06001C30;
extern void D_06003520;
extern ? D_06007A70;
extern ? D_06007C48;
extern FlexSkeletonHeader D_06014EA8;
extern ? D_06016484;
extern AnimationHeaderCommon D_06016A60;
extern ? D_060170DC;
extern ? D_060198A8;
extern Gfx D_0601C528;
static ColliderCylinderInit D_808F6A60 = {
    {0, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x12, 0x40, 0, {0, 0, 0}},
};
static ColliderJntSphElementInit D_808F6A8C = {{0, {0xF7CFFFFF, 0, 0}, {0, 0, 0}, 1, 0, 0}, {0xC, {{0x640, 0, 0}, 5}, 0xC8}};
static ColliderJntSphInit D_808F6AB0 = {{0xA, 0x11, 0, 0, 0x20, 0}, 1, &D_808F6A8C};
static CollisionCheckInfoInit2 D_808F6AC0 = {0, 0, 0, 0, 0xFE};
static DamageTable D_808F6ACC = {
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
static ? D_808F6AEC;                                /* unable to generate initializer */
static s16 D_808F6C0C[16] = {0xFA0, 4, 1, 3, 0x1770, 4, 1, 6, 0xFA0, 4, 1, 3, 0x1770, 4, 1, 6};
static ? D_808F6C2C;                                /* unable to generate initializer */
static InitChainEntry D_808F6C4C[2];                /* unable to generate initializer */
static s32 D_808F6C54[20] = {
    0,
    0,
    0x60149A8,
    0x6014AE0,
    0x6014C30,
    0x60145D8,
    0x6014710,
    0x6014860,
    0x6014420,
    0x6012A78,
    0x6013DE0,
    0x6013F10,
    0x6014040,
    0x60137A0,
    0x60138D0,
    0x6013A00,
    0x6012DF8,
    0x6013670,
    0x6013540,
    0x6013440,
};
static ? D_808F6CA4;                                /* unable to generate initializer */
static ? D_808F6CB4;                                /* unable to generate initializer */
static ? D_808F6CC0;                                /* unable to generate initializer */

s32 func_808F30B0(SkelAnime *arg0, s16 arg1) {
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
        if ((s32) arg1 < 0x12) {
            temp_v1 = temp_t6 + &D_808F6AEC;
            temp_t0 = temp_v1->unk_A;
            phi_t0 = temp_t0;
            if ((s32) temp_t0 < 0) {
                sp2C = temp_v1;
                sp30 = 1;
                phi_t0 = SkelAnime_GetFrameCount(temp_v1->unk_0);
            }
            sp30 = 1;
            SkelAnime_ChangeAnim(arg0, (temp_t6 + &D_808F6AEC)->unk_0, (temp_t6 + &D_808F6AEC)->unk_4, (f32) (temp_t6 + &D_808F6AEC)->unk_8, (f32) phi_t0, (u8) (s32) (temp_t6 + &D_808F6AEC)->unk_C, (f32) (temp_t6 + &D_808F6AEC)->unk_E);
            phi_t1 = 1;
        }
    }
    return phi_t1;
}

? func_808F3178(Actor *arg0, GlobalContext *arg1) {
    u8 sp27;
    u8 sp26;
    u8 temp_v0;
    u8 temp_v0_2;

    sp27 = arg0[1].colorFilterTimer;
    sp26 = arg0[1].isDrawn;
    temp_v0 = func_8013DB90(arg1, arg0 + 0x248, -6.0f);
    arg0[1].colorFilterTimer = temp_v0;
    if (((temp_v0 & 0xFF) != 0) && (sp27 == 0) && ((temp_v0 & 0xFF) != 0)) {
        Audio_PlayActorSound2(arg0, 0x802U);
    }
    temp_v0_2 = func_8013DB90(arg1, (void *) &arg0[1].prevPos.z, -6.0f);
    arg0[1].isDrawn = temp_v0_2;
    if (((temp_v0_2 & 0xFF) != 0) && (sp26 == 0) && ((temp_v0_2 & 0xFF) != 0)) {
        Audio_PlayActorSound2(arg0, 0x802U);
    }
    return 0;
}

void func_808F322C(Actor *arg0, s32 arg1) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk_484;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_484 = (s16) (temp_v0 - 1);
        phi_v1 = arg0->unk_484;
    }
    if (phi_v1 == 0) {
        arg0->unk_482 = (s16) (arg0->unk_482 + 1);
        if ((s32) arg0->unk_482 >= arg1) {
            arg0->unk_482 = 0;
            arg0 = arg0;
            arg0->unk_484 = Rand_S16Offset(0x1E, 0x1E);
        }
    }
}

void func_808F32A0(EnIn *arg0, GlobalContext *arg1) {
    arg0->colliderCylinder.dim.pos.x = (s16) (s32) arg0->actor.world.pos.x;
    arg0->colliderCylinder.dim.pos.y = (s16) (s32) arg0->actor.world.pos.y;
    arg0->colliderCylinder.dim.pos.z = (s16) (s32) arg0->actor.world.pos.z;
    if (arg0->unk23D == 0) {
        CollisionCheck_SetOC(arg1, arg1 + 0x18884, arg0 + 0x1EC);
    }
}

? func_808F3310(EnIn *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    temp_v0 = arg0->colliderCylinder.base.acFlags;
    if ((temp_v0 & 2) != 0) {
        arg0->colliderCylinder.base.acFlags = temp_v0 & 0xFFFD;
    }
    return 0;
}

? func_808F3334(Actor *arg0, GlobalContext *arg1) {
    u8 temp_t9;
    u8 temp_v0;

    temp_v0 = arg0->unk_19C;
    if ((temp_v0 & 2) != 0) {
        temp_t9 = temp_v0 & 0xFFFD;
        arg0->unk_19C = temp_t9;
        if ((temp_t9 & 4) != 0) {
            return 0;
        }
        Audio_PlayActorSound2(arg1->actorCtx.actorList[2].first, 0x83EU);
        func_800B8D98(arg1, arg0, 3.0f, arg0->yawTowardsPlayer, 6.0f);
        goto block_4;
    }
block_4:
    return 1;
}

s32 func_808F33B8(void) {
    s32 temp_v0;
    s32 temp_v1;
    u16 temp_a0;
    s32 phi_v1;

    temp_v0 = gSaveContext.day;
    if (((temp_v0 == 1) && (temp_a0 = gSaveContext.time, ((((s32) temp_a0 < 0x3AAA) ^ 1) != 0)) && ((s32) temp_a0 < 0x4001)) || (temp_v1 = (temp_v0 < 2) ^ 1, phi_v1 = temp_v1, (temp_v1 != 0))) {
        phi_v1 = (gSaveContext.weekEventReg[22] & 1) == 0;
    }
    return phi_v1;
}

void func_808F3414(Actor *arg0, GlobalContext *arg1) {
    void *sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;

    if (arg0->unk_23D == 0) {
        sp3C = arg1->actorCtx.actorList[2].first;
        arg0[3].shape.shadowDraw = SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
    }
    sp3C = arg1->actorCtx.actorList[2].first;
    if (func_8013D5E8(arg0->shape.rot.y, 0x2710, arg0->yawTowardsPlayer) != 0) {
        sp30 = arg1->actorCtx.actorList[2].first->world.pos.x;
        sp34 = arg1->actorCtx.actorList[2].first[9].shape.feetPos[1].x + 3.0f;
        sp38 = arg1->actorCtx.actorList[2].first->world.pos.z;
        func_8013D2E0((Vec3f *) &sp30, arg0 + 0x3C, arg0 + 0xBC, arg0 + 0x352, arg0 + 0x358, arg0 + 0x35E, D_808F6C0C);
    } else {
        Math_SmoothStepToS(arg0 + 0x352, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x354, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x358, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x35A, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x35E, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x360, 0, 4, 0x3E8, (s16) 1);
    }
    func_808F322C(arg0, 3);
    func_808F3178(arg0, arg1);
    func_8013D9C8(arg1, arg0 + 0x376, (s16 *) &arg0[2].textId, 0x14);
}

void func_808F35AC(EnIn *arg0, GlobalContext *arg1) {
    void *temp_v0;

    temp_v0 = arg0->unk4A4;
    arg0->unk4AC |= 0x10;
    if (temp_v0 != 0) {
        temp_v0->unk4AC |= 0x10;
    }
}

void func_808F35D8(Actor *arg0, GlobalContext *arg1) {
    void *temp_v0;

    temp_v0 = arg0[3].shape.feetPos[0].y;
    arg0[3].shape.feetPos[1].x &= -0x11;
    if (temp_v0 != 0) {
        temp_v0->unk_4AC = (s32) (temp_v0->unk_4AC & ~0x10);
    }
}

void EnIn_DoNothing(EnIn *arg0, GlobalContext *arg1) {

}

void func_808F3618(SaveContext *arg0, GlobalContext *arg1) {
    SaveContext *temp_a2;
    SkelAnime *temp_a0;
    s32 temp_v0;
    s32 phi_v0;
    SaveContext *phi_a2;

    temp_a2 = arg0;
    temp_a0 = temp_a2 + 0x148;
    temp_v0 = (s32) (temp_a2->unk_1C & 0x7E00) >> 9;
    phi_v0 = temp_v0;
    phi_a2 = temp_a2;
    if (temp_v0 != 0x3F) {
        arg0 = temp_a2;
        func_808F30B0(temp_a0, 9, temp_a2);
        phi_v0 = (s32) (arg0->unk_1C & 0x7E00) >> 9;
        phi_a2 = arg0;
    }
    if (phi_v0 != 0x3F) {
        phi_a2->roomInf[2][5] = func_808F3690;
        return;
    }
    phi_a2->roomInf[2][5] = EnIn_DoNothing;
}

void func_808F3690(EnIn *arg0, GlobalContext *arg1) {
    s16 sp36;
    ? sp28;

    Math_SmoothStepToF(&arg0->actor.speedXZ, 1.0f, 0.4f, 1000.0f, 0.0f);
    sp36 = (s16) (s32) (arg0->actor.speedXZ * 400.0f);
    if ((func_8013D68C(arg0->path, arg0->unk244, (void *) &sp28) != 0) && (func_8013D768((Actor *) arg0, (void *) &sp28, sp36) != 0)) {
        arg0->unk244 += 1;
        if ((s32) arg0->unk244 >= (s32) arg0->path->count) {
            arg0->unk244 = 0;
        }
    }
}

void func_808F374C(Actor *arg0, GlobalContext *arg1) {
    ? sp40;
    Vec3f *sp38;
    Vec3f *temp_a0;
    Vec3f *temp_t2;
    s16 temp_v0_2;
    s32 temp_v0;

    sp40.unk_0 = (s32) D_808F6C2C.unk_0;
    sp40.unk_4 = (s32) D_808F6C2C.unk_4;
    sp40.unk_C = (s32) D_808F6C2C.unk_C;
    sp40.unk_8 = (s32) D_808F6C2C.unk_8;
    sp40.unk_10 = (s32) D_808F6C2C.unk_10;
    sp40.unk_14 = (s32) D_808F6C2C.unk_14;
    sp40.unk_1C = (s32) D_808F6C2C.unk_1C;
    sp40.unk_18 = (s32) D_808F6C2C.unk_18;
    temp_v0 = arg0[1].home.pos.y;
    if ((&D_06016484 == temp_v0) || (&D_060170DC == temp_v0)) {
        temp_a0 = arg0 + 0xEC;
        if (func_801378B8(arg0 + 0x148, 8.0f) != 0) {
            sp38 = temp_a0;
            func_8019F88C(temp_a0, 0x6856U, 2);
            if (Rand_ZeroOne() < 0.3f) {
                func_8019F1C0(temp_a0, 0x1844U);
            }
            func_8019F1C0(sp38, 0x181EU);
        }
    }
    temp_t2 = arg0 + 0x148;
    sp38 = temp_t2;
    if ((&D_060198A8 == arg0[1].home.pos.y) && (func_801378B8((SkelAnime *) temp_t2, 20.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x6854U);
    }
    if (SkelAnime_FrameUpdateMatrix((SkelAnime *) sp38) != 0) {
        arg0[3].shape.rot.x = (s16) ((s32) arg0[3].shape.rot.x % 8);
        temp_v0_2 = arg0[3].shape.rot.x;
        arg0->unk_486 = temp_v0_2;
        SkelAnime_ChangeAnim((SkelAnime *) sp38, (sp + (arg0[3].shape.rot.x * 4))->unk_40, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((sp + (temp_v0_2 * 4))->unk_40), (u8) 2, -10.0f);
    }
}

void func_808F38F8(EnIn *arg0, GlobalContext *arg1) {
    Actor *temp_v0;

    arg0->unk4A4 = NULL;
loop_1:
    temp_v0 = func_ActorCategoryIterateById(arg1, arg0->unk4A4, 4, 0x67);
    arg0->unk4A4 = temp_v0;
    if (temp_v0 == 0) {
block_3:
        arg0->unk4A4 = arg0->unk4A4->next;
        goto loop_1;
    }
    if (arg0 == temp_v0) {
        goto block_3;
    }
}

void func_808F395C(Actor *arg0, GlobalContext *arg1) {
    if (arg0[3].shape.feetPos[1].y == 0) {
        arg0->unk_144 = func_808F5A94;
    }
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->flags &= 0xFFFEFFFF;
        arg0->unk_144 = func_808F5A34;
        arg0->unk_48C = 1;
        return;
    }
    func_800B8614(arg0, arg1, 200.0f);
}

void func_808F39DC(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    u8 temp_t2;
    u8 temp_t7;
    u8 temp_v1;
    u8 temp_v1_2;
    s16 phi_a2;

    phi_a2 = 0;
    phi_a2 = 0;
    if (gSaveContext.day != 3) {
        temp_v1 = gSaveContext.weekEventReg[92];
        temp_v0 = temp_v1 & 7;
        temp_t7 = temp_v1 & 0xF8;
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {

            } else {
                phi_a2 = 0x3476;
            }
        } else {
            phi_a2 = 0x347A;
        }
        gSaveContext.weekEventReg[92] = temp_t7;
        gSaveContext.weekEventReg[92] = (temp_t7 & 0xFFF8) | temp_t7;
    } else {
        temp_v1_2 = gSaveContext.weekEventReg[92];
        temp_v0_2 = temp_v1_2 & 7;
        temp_t2 = temp_v1_2 & 0xF8;
        if (temp_v0_2 != 2) {
            if (temp_v0_2 != 3) {

            } else {
                phi_a2 = 0x3499;
            }
        } else {
            phi_a2 = 0x349D;
        }
        gSaveContext.weekEventReg[92] = temp_t2;
        gSaveContext.weekEventReg[92] = (temp_t2 & 0xFFF8) | temp_t2;
    }
    arg0->flags |= 0x10000;
    arg0->textId = phi_a2;
    arg0->unk_144 = func_808F395C;
    if (arg0[3].shape.feetPos[1].y == 2) {
        Audio_PlayActorSound2(arg0, 0x6855U);
        return;
    }
    Audio_PlayActorSound2(arg0, 0x687CU);
}

void func_808F3AD4(Actor *arg0, GlobalContext *arg1) {
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->flags &= 0xFFFEFFFF;
        arg0->unk_48C = 1;
        arg0->unk_144 = func_808F5A94;
        return;
    }
    func_800B85E0(arg0, arg1, 200.0f, -1);
}

void func_808F3B40(Actor *arg0, GlobalContext *arg1) {
    u16 phi_v0;

    if (Actor_HasParent(arg0, arg1) != 0) {
        arg0->parent = NULL;
        arg0->flags |= 0x10000;
        arg0->unk_144 = func_808F3AD4;
        phi_v0 = 0x34A4U;
        if (gSaveContext.day != 3) {
            phi_v0 = 0x3481U;
        }
        arg0->textId = phi_v0;
        return;
    }
    func_800B8A1C(arg0, arg1, 0x92, 500.0f, 100.0f);
}

void func_808F3BD4(Actor *arg0, GlobalContext *arg1) {
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->flags &= 0xFFFEFFFF;
        arg0->unk_48C = 1;
        arg0->unk_144 = func_808F5A94;
        return;
    }
    func_800B85E0(arg0, arg1, 200.0f, -1);
}

void func_808F3C40(Actor *arg0, GlobalContext *arg1) {
    u16 phi_v0;

    if (Actor_HasParent(arg0, arg1) != 0) {
        arg0->parent = NULL;
        arg0->flags |= 0x10000;
        arg0->unk_144 = func_808F3BD4;
        phi_v0 = 0x3492U;
        if (gSaveContext.day != 3) {
            phi_v0 = 0x346AU;
        }
        arg0->textId = phi_v0;
        return;
    }
    func_800B8A1C(arg0, arg1, 0x92, 500.0f, 100.0f);
}

void func_808F3CD4(Actor *arg0, GlobalContext *arg1) {
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->flags &= 0xFFFEFFFF;
        arg0->unk_48C = 1;
        arg0->unk_144 = func_808F5A94;
        return;
    }
    func_800B85E0(arg0, arg1, 200.0f, -1);
}

void func_808F3D40(Actor *arg0, GlobalContext *arg1) {
    u16 phi_v0;

    if (Actor_HasParent(arg0, arg1) != 0) {
        arg0->parent = NULL;
        arg0->unk_144 = func_808F3CD4;
        phi_v0 = 0x34A0U;
        if (gSaveContext.day != 3) {
            phi_v0 = 0x347DU;
        }
        arg0->textId = phi_v0;
        arg0->flags |= 0x10000;
        return;
    }
    func_800B8A1C(arg0, arg1, 0x81, 500.0f, 100.0f);
}

u16 func_808F3DD4(GlobalContext *arg0, Actor *arg1, u32 arg2) {
    u16 sp1E;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u16 phi_v1;
    u16 phi_v1_2;

    sp1E = 0;
    phi_v1 = sp1E;
    if (Player_GetMask(arg0) == 8) {
        if ((gSaveContext.weekEventReg[63] & 0x40) == 0) {
            return 0x34A9U;
        }
        phi_v1_2 = 0x34AFU;
        if ((arg1[3].shape.feetPos[1].x & 8) != 0) {
            return 0x34B1U;
        }
        goto block_49;
    }
    switch (arg2) {
    case 0:
        temp_v0 = gSaveContext.playerForm;
        if ((temp_v0 == 2) || (temp_v0 == 1)) {
            phi_v1 = 0x345CU;
        } else if (temp_v0 == 3) {
            phi_v1 = 0x3460U;
        } else if ((gSaveContext.weekEventReg[15] & 8) == 0) {
            phi_v1 = 0x3458U;
        } else {
            phi_v1 = 0x345BU;
        }
        break;
    case 1:
        if ((gSaveContext.weekEventReg[15] & 0x10) == 0) {
            phi_v1 = 0x3463U;
        } else {
            phi_v1 = 0x346BU;
        }
        break;
    case 3:
        temp_v0_2 = gSaveContext.playerForm;
        if (temp_v0_2 == 3) {
            phi_v1 = 0x3485U;
        } else if ((temp_v0_2 == 2) || (temp_v0_2 == 1)) {
            phi_v1 = 0x3484U;
        } else if ((gSaveContext.weekEventReg[56] & 4) == 0) {
            phi_v1 = 0x346DU;
        } else {
            phi_v1 = 0x3482U;
        }
        break;
    case 4:
        temp_v0_3 = gSaveContext.playerForm;
        if ((temp_v0_3 == 2) || (temp_v0_3 == 1)) {
            phi_v1 = 0x348AU;
        } else if (temp_v0_3 == 3) {
            phi_v1 = 0x348BU;
        } else if ((gSaveContext.weekEventReg[16] & 1) == 0) {
            phi_v1 = 0x3486U;
        } else {
            phi_v1 = 0x3489U;
        }
        break;
    case 5:
        if (func_808F33B8() != 0) {
            phi_v1 = 0x34B3U;
        } else if ((gSaveContext.weekEventReg[16] & 2) == 0) {
            phi_v1 = 0x348EU;
        } else {
            phi_v1 = 0x3493U;
        }
        break;
    case 7:
        temp_v0_4 = gSaveContext.playerForm;
        if (temp_v0_4 == 3) {
            phi_v1 = 0x34A8U;
        } else if ((temp_v0_4 == 2) || (temp_v0_4 == 1)) {
            phi_v1 = 0x34A7U;
        } else {
            phi_v1 = 0x34A5U;
            if ((gSaveContext.weekEventReg[16] & 4) == 0) {
                phi_v1 = 0x3495U;
            }
        }
        break;
    }
    phi_v1_2 = phi_v1;
    if (phi_v1 == 0) {
        phi_v1_2 = 1U;
    }
block_49:
    return phi_v1_2;
}

void func_808F4054(GlobalContext *arg0, Actor *arg1, u32 arg2, u16 arg3) {
    s32 sp18;
    s32 temp_a3;

    temp_a3 = arg3 & 0xFFFF;
    if ((temp_a3 == 0x34AE) || (temp_a3 == 0x34B0) || (temp_a3 == 0x34B2)) {
        sp18 = temp_a3;
        func_80151BB4(arg0, 0x11U);
    }
    switch (arg2) {
    case 1:
    case 5:
    case 7:
        if ((arg3 & 0xFFFF) == 0x3473) {
            func_808F35D8(arg1, arg0);
            return;
        }
    default:
        return;
    case 2:
        if ((arg3 & 0xFFFF) == 0x3473) {
            func_808F35D8(arg1, arg0);
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return;
    }
}

void func_808F4108(Actor *arg0, GlobalContext *arg1, u16 arg2) {
    func_800B86C8(arg0, arg1, arg0[3].shape.feetPos[0].y);
    arg0->textId = 0;
    arg0[3].shape.feetPos[0].y->unk_116 = arg2;
    arg0[3].shape.feetPos[0].y->unk_48C = 2;
    arg0->unk_48C = 0;
}

? func_808F4150(GlobalContext *arg0, Actor *arg1, u32 arg2, MessageContext *arg3) {
    s32 temp_v0;

    if (arg3->choiceIndex == 0) {
        func_8019F208();
        temp_v0 = arg0->msgCtx.unk1206C;
        if ((s32) gSaveContext.rupees >= temp_v0) {
            func_801159EC((s16) (temp_v0 * -1));
            if ((gSaveContext.weekEventReg[57] & 1) == 0) {
                func_808F4108(arg1, arg0, 0x3474U);
            } else if (((bitwise s32) arg1[3].shape.feetPos[1].x & 8) != 0) {
                func_808F4108(arg1, arg0, 0x3475U);
            } else {
                func_800E8EA0(arg0, arg1, 0x3475U);
            }
        } else {
            play_sound(0x4806U);
            func_800E8EA0(arg0, arg1, 0x3473U);
        }
    } else {
        func_8019F230();
        func_800E8EA0(arg0, arg1, 0x3472U);
    }
    return 0;
}

? func_808F4270(GlobalContext *arg0, Actor *arg1, u32 arg2, MessageContext *arg3, s32 arg4) {
    s32 sp18;
    s32 temp_v0;
    s32 phi_v1;

    temp_v0 = arg0->msgCtx.unk1206C;
    phi_v1 = 0xA;
    if (temp_v0 != 0xFFFF) {
        phi_v1 = temp_v0;
    }
    if (arg3->choiceIndex == 0) {
        sp18 = phi_v1;
        func_8019F208();
        if ((s32) gSaveContext.rupees >= phi_v1) {
            func_801159EC((s16) (phi_v1 * -1));
            if ((gSaveContext.weekEventReg[57] & 1) == 0) {
                if (arg4 != 0) {
                    func_800E8EA0(arg0, arg1, 0x3474U);
                } else {
                    func_808F4108(arg1, arg0, 0x3474U, arg0);
                }
            } else if (arg4 != 0) {
                func_800E8EA0(arg0, arg1, 0x3475U);
            } else {
                func_808F4108(arg1, arg0, 0x3475U, arg0);
            }
        } else {
            play_sound(0x4806U);
            if (arg4 != 0) {
                func_800E8EA0(arg0, arg1, 0x3473U);
            } else {
                func_808F4108(arg1, arg0, 0x3473U, arg0);
            }
        }
    } else {
        func_8019F230();
        func_800E8EA0(arg0, arg1, 0x3472U);
    }
    return 0;
}

? func_808F43E0(Actor *arg0) {
    u8 temp_t0;
    u8 temp_v1;

    arg0->unk_48C = 0;
    arg0->textId = 0;
    temp_v1 = gSaveContext.weekEventReg[92] & 0xF8;
    temp_t0 = (temp_v1 & 0xFFF8) | temp_v1;
    gSaveContext.weekEventReg[92] = temp_v1;
    gSaveContext.weekEventReg[92] = temp_t0;
    return 0;
}

s32 func_808F4414(GlobalContext *arg0, Actor *arg1, u32 arg2) {
    void *sp34;
    MessageContext *temp_a3;
    MessageContext *temp_a3_2;
    u16 temp_v1;
    u8 temp_t1;
    u8 temp_t5;
    u8 temp_t6;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_t0;
    void *temp_t0_2;
    s32 phi_v0;
    SaveContext *phi_v1;
    s8 phi_t7;
    s32 phi_s2;

    temp_v1 = arg1->textId;
    phi_s2 = 1;
    phi_s2 = 1;
    switch (temp_v1) {                              /* switch 1 */
    case 13487:                                     /* switch 1 */
        sp34 = (void *) temp_v1;
        func_800E8EA0(arg0, arg1, 0x34B0U);
        phi_s2 = 0;
block_10:
        phi_v0 = (s32) arg1->textId;
        phi_v1 = &gSaveContext;
        break;
    case 13481:                                     /* switch 1 */
        sp34 = (void *) temp_v1;
        func_808F4108(arg1, arg0, 0x34AAU);
        gSaveContext.weekEventReg[63] |= 0x40;
        phi_v0 = (s32) temp_v1;
        phi_v1 = &gSaveContext;
        phi_s2 = 0;
        break;
    case 13482:                                     /* switch 1 */
        sp34 = (void *) temp_v1;
        func_808F4108(arg1, arg0, 0x34ABU);
        phi_s2 = 0;
        goto block_10;
    case 13483:                                     /* switch 1 */
        sp34 = (void *) temp_v1;
        func_808F4108(arg1, arg0, 0x34ACU);
        phi_s2 = 0;
        goto block_10;
    case 13484:                                     /* switch 1 */
        sp34 = (void *) temp_v1;
        func_808F4108(arg1, arg0, 0x34ADU);
        phi_s2 = 0;
        goto block_10;
    case 13485:                                     /* switch 1 */
        sp34 = (void *) temp_v1;
        func_800E8EA0(arg0, arg1, 0x34AEU);
        phi_s2 = 0;
        goto block_10;
    case 13489:                                     /* switch 1 */
        sp34 = (void *) temp_v1;
        func_800E8EA0(arg0, arg1, 0x34B2U);
        phi_s2 = 0;
        goto block_10;
    default:                                        /* switch 1 */
        goto block_10;
    }
    switch (arg2) {                                 /* switch 2 */
    case 0:                                         /* switch 2 */
        switch (phi_v0) {                           /* switch 3 */
        case 13400:                                 /* switch 3 */
            phi_v1->weekEventReg[15] |= 8;
            func_800E8EA0(arg0, arg1, 0x3459U);
            phi_s2 = 0;
            break;
        case 13401:                                 /* switch 3 */
            func_800E8EA0(arg0, arg1, 0x345AU);
            phi_s2 = 0;
            break;
        case 13402:                                 /* switch 3 */
            func_80151BB4(arg0, 0x11U);
            break;
        case 13403:                                 /* switch 3 */
            func_80151BB4(arg0, 0x11U);
            break;
        case 13404:                                 /* switch 3 */
            func_800E8EA0(arg0, arg1, 0x345DU);
            phi_s2 = 0;
            break;
        case 13405:                                 /* switch 3 */
            func_800E8EA0(arg0, arg1, 0x345EU);
            phi_s2 = 0;
            break;
        case 13406:                                 /* switch 3 */
            func_800E8EA0(arg0, arg1, 0x345FU);
            phi_s2 = 0;
            break;
        case 13407:                                 /* switch 3 */
            func_80151BB4(arg0, 0x11U);
            break;
        case 13408:                                 /* switch 3 */
            func_800E8EA0(arg0, arg1, 0x3461U);
            phi_s2 = 0;
            break;
        case 13409:                                 /* switch 3 */
            func_800E8EA0(arg0, arg1, 0x3462U);
            phi_s2 = 0;
            break;
        case 13410:                                 /* switch 3 */
            func_80151BB4(arg0, 0x11U);
            break;
        }
        break;
    case 1:                                         /* switch 2 */
        switch (phi_v0) {                           /* switch 4 */
        case 13411:                                 /* switch 4 */
            phi_v1->weekEventReg[15] |= 0x10;
            func_800E8EA0(arg0, arg1, 0x3464U);
            phi_s2 = 0;
            break;
        case 13412:                                 /* switch 4 */
            func_800E8EA0(arg0, arg1, 0x3465U);
            phi_s2 = 0;
            break;
        case 13413:                                 /* switch 4 */
            func_800E8EA0(arg0, arg1, 0x3466U);
            phi_s2 = 0;
            break;
        case 13414:                                 /* switch 4 */
            if (arg0->msgCtx.choiceIndex == 0) {
                func_8019F208();
                temp_t0 = arg0 + 0x10000;
                if ((s32) gSaveContext.rupees >= arg0->msgCtx.unk1206C) {
                    sp34 = temp_t0;
                    if (func_80114E90() != 0) {
                        arg1->unk_144 = func_808F3C40;
                        sp34 = temp_t0;
                        func_800B8A1C(arg1, arg0, 0x92, 500.0f, 100.0f);
                        func_801159EC((s16) ((s32) arg0->msgCtx.unk1206C * -1));
                    } else {
                        func_800E8EA0(arg0, arg1, 0x3469U);
                        phi_s2 = 0;
                    }
                } else {
                    play_sound(0x4806U);
                    func_800E8EA0(arg0, arg1, 0x3468U);
                    phi_s2 = 0;
                }
            } else {
                func_8019F230();
                func_800E8EA0(arg0, arg1, 0x3467U);
                phi_s2 = 0;
            }
            break;
        case 13415:                                 /* switch 4 */
        case 13416:                                 /* switch 4 */
        case 13417:                                 /* switch 4 */
            func_80151BB4(arg0, 0x11U);
            break;
        case 13419:                                 /* switch 4 */
            func_800E8EA0(arg0, arg1, 0x346CU);
            phi_s2 = 0;
            break;
        case 13420:                                 /* switch 4 */
            func_800E8EA0(arg0, arg1, 0x3466U);
            phi_s2 = 0;
            break;
        case 13418:                                 /* switch 4 */
            arg1->unk_144 = (void (*)(Actor *, GlobalContext *)) func_808F5A94;
            func_80151BB4(arg0, 0x11U);
            break;
        }
        break;
    case 2:                                         /* switch 2 */
        switch (phi_v0) {                           /* switch 5 */
        case 13422:                                 /* switch 5 */
            func_808F4108(arg1, arg0, 0x346FU);
            phi_s2 = 0;
            break;
        case 13424:                                 /* switch 5 */
            func_800E8EA0(arg0, arg1, 0x3471U);
            phi_s2 = 0;
            break;
        case 13443:                                 /* switch 5 */
            func_800E8EA0(arg0, arg1, 0x3471U);
            phi_s2 = 0;
            break;
        case 13425:                                 /* switch 5 */
            func_808F4150(arg0, arg1, arg2, &arg0->msgCtx);
            phi_s2 = 0;
            break;
        case 13426:                                 /* switch 5 */
            func_808F43E0(arg1);
            gSaveContext.weekEventReg[56] &= 0xF7;
            func_80151BB4(arg0, 0x11U);
            break;
        case 13427:                                 /* switch 5 */
            phi_v1->weekEventReg[56] &= 0xF7;
            func_80151BB4(arg0, 0x11U);
            break;
        case 13429:                                 /* switch 5 */
            temp_v0 = phi_v1->weekEventReg[92] & 0xF8;
            temp_t5 = (temp_v0 & 0xFFF8) | 1 | temp_v0;
            phi_v1->weekEventReg[92] = temp_v0;
            phi_v1->weekEventReg[92] = temp_t5;
            func_800FD750(0x40);
            arg0->nextEntranceIndex = 0xCE50;
            arg0->unk_1887F = 5;
            arg0->sceneLoadFlag = 0x14;
            gSaveContext.weekEventReg[57] |= 1;
            break;
        case 13432:                                 /* switch 5 */
            temp_a3 = &arg0->msgCtx;
            if (temp_a3->choiceIndex == 0) {
                func_808F4150(arg0, arg1, arg2, temp_a3);
                phi_s2 = 0;
            } else {
                func_8019F230();
                gSaveContext.weekEventReg[56] &= 0xF7;
                func_808F4108(arg1, arg0, 0x3479U);
                phi_s2 = 0;
            }
            break;
        case 13435:                                 /* switch 5 */
            func_808F4108(arg1, arg0, 0x347CU);
            gSaveContext.weekEventReg[56] &= 0xF7;
            phi_s2 = 0;
            break;
        }
        break;
    case 3:                                         /* switch 2 */
        switch (phi_v0) {                           /* switch 6 */
        case 13421:                                 /* switch 6 */
            func_808F4108(arg1, arg0, 0x346EU);
            temp_t1 = gSaveContext.weekEventReg[56] | 4;
            gSaveContext.weekEventReg[56] = temp_t1;
            gSaveContext.weekEventReg[56] = temp_t1 | 8;
            phi_s2 = 0;
            break;
        case 13423:                                 /* switch 6 */
            func_808F4108(arg1, arg0, 0x3470U);
            phi_s2 = 0;
            break;
        case 13442:                                 /* switch 6 */
            func_808F4108(arg1, arg0, 0x3483U);
            gSaveContext.weekEventReg[56] |= 8;
            phi_s2 = 0;
            break;
        case 13444:                                 /* switch 6 */
            func_80151BB4(arg0, 0x11U);
            break;
        case 13445:                                 /* switch 6 */
            func_80151BB4(arg0, 0x11U);
            break;
        case 13428:                                 /* switch 6 */
            func_808F4108(arg1, arg0, 0x3475U);
            phi_s2 = 0;
            break;
        case 13430:                                 /* switch 6 */
            func_800E8EA0(arg0, arg1, 0x3477U);
            func_808F30B0((SkelAnime *) &arg1[1].flags, 1);
            func_808F30B0((bitwise s32) arg1[3].shape.feetPos[0].y + 0x148, 7);
            phi_s2 = 0;
            break;
        case 13431:                                 /* switch 6 */
            phi_v1->weekEventReg[56] |= 8;
            func_808F4108(arg1, arg0, 0x3478U);
            phi_s2 = 0;
            break;
        case 13434:                                 /* switch 6 */
            func_808F30B0((SkelAnime *) &arg1[1].flags, 1);
            func_808F30B0((bitwise s32) arg1[3].shape.feetPos[0].y + 0x148, 7);
            if (gSaveContext.inventory.items[gItemSlots[59]] == 0x3B) {
                func_800E8EA0(arg0, arg1, 0x347EU);
                phi_s2 = 0;
            } else {
                gSaveContext.weekEventReg[56] |= 8;
                func_808F4108(arg1, arg0, 0x347BU);
                phi_s2 = 0;
            }
            break;
        case 13438:                                 /* switch 6 */
            func_808F35D8(arg1, arg0);
            if (func_80114E90() != 0) {
                arg1->unk_144 = func_808F3B40;
                func_800B8A1C(arg1, arg0, 0x92, 500.0f, 100.0f);
            } else {
                func_800E8EA0(arg0, arg1, 0x347FU);
                phi_s2 = 0;
            }
            break;
        case 13439:                                 /* switch 6 */
            func_800E8EA0(arg0, arg1, 0x3480U);
            phi_s2 = 0;
            break;
        case 13440:                                 /* switch 6 */
            func_808F43E0(arg1);
            func_80151BB4(arg0, 0x11U);
            break;
        case 13433:                                 /* switch 6 */
            func_808F43E0(arg1);
            func_808F35D8(arg1, arg0);
            func_80151BB4(arg0, 0x11U);
            break;
        case 13436:                                 /* switch 6 */
            arg1->unk_144 = func_808F3D40;
            func_800B8A1C(arg1, arg0, 0x81, 500.0f, 100.0f);
            func_808F35D8(arg1, arg0);
            break;
        case 13441:                                 /* switch 6 */
            arg1->unk_144 = (void (*)(Actor *, GlobalContext *)) func_808F5A34;
            func_808F43E0(arg1);
            func_80151BB4(arg0, 0x11U);
            break;
        case 13437:                                 /* switch 6 */
            arg1->unk_144 = (void (*)(Actor *, GlobalContext *)) func_808F5A34;
            func_808F43E0(arg1);
            func_80151BB4(arg0, 0x11U);
            func_80151BB4(arg0, 0x2FU);
            break;
        }
        break;
    case 4:                                         /* switch 2 */
        switch (phi_v0) {                           /* switch 7 */
        case 13446:                                 /* switch 7 */
            func_800E8EA0(arg0, arg1, 0x3487U);
            gSaveContext.weekEventReg[16] |= 1;
            phi_s2 = 0;
            break;
        case 13447:                                 /* switch 7 */
            func_800E8EA0(arg0, arg1, 0x3488U);
            phi_s2 = 0;
            break;
        case 13448:                                 /* switch 7 */
            func_80151BB4(arg0, 0x11U);
            break;
        case 13449:                                 /* switch 7 */
            func_80151BB4(arg0, 0x11U);
            break;
        case 13450:                                 /* switch 7 */
            func_80151BB4(arg0, 0x11U);
            break;
        case 13451:                                 /* switch 7 */
            func_800E8EA0(arg0, arg1, 0x348CU);
            phi_s2 = 0;
            break;
        case 13452:                                 /* switch 7 */
            func_800E8EA0(arg0, arg1, 0x348DU);
            phi_s2 = 0;
            break;
        case 13453:                                 /* switch 7 */
            func_80151BB4(arg0, 0x11U);
            break;
        }
        break;
    case 5:                                         /* switch 2 */
        if (phi_v0 >= 0x346A) {
            if (phi_v0 >= 0x3495) {
                if (phi_v0 != 0x34B3) {

                } else {
                    goto block_96;
                }
            } else {
                switch (phi_v0) {                   /* switch 8 */
                case 13454:                         /* switch 8 */
block_96:
                    func_800E8EA0(arg0, arg1, 0x348FU);
                    gSaveContext.weekEventReg[16] |= 2;
                    phi_s2 = 0;
                    break;
                case 13459:                         /* switch 8 */
                    func_800E8EA0(arg0, arg1, 0x3494U);
                    phi_s2 = 0;
                    break;
                case 13455:                         /* switch 8 */
                case 13460:                         /* switch 8 */
                    func_800E8EA0(arg0, arg1, 0x3490U);
                    phi_s2 = 0;
                    break;
                case 13456:                         /* switch 8 */
                    if (arg0->msgCtx.choiceIndex == 0) {
                        func_8019F208();
                        temp_t0_2 = arg0 + 0x10000;
                        if ((s32) gSaveContext.rupees >= arg0->msgCtx.unk1206C) {
                            sp34 = temp_t0_2;
                            if (func_80114E90() != 0) {
                                arg1->unk_144 = func_808F3C40;
                                sp34 = temp_t0_2;
                                func_800B8A1C(arg1, arg0, 0x92, 500.0f, 100.0f);
                                func_801159EC((s16) ((s32) arg0->msgCtx.unk1206C * -1));
                            } else {
                                func_800E8EA0(arg0, arg1, 0x3469U);
                                phi_s2 = 0;
                            }
                        } else {
                            play_sound(0x4806U);
                            func_800E8EA0(arg0, arg1, 0x3468U);
                            phi_s2 = 0;
                        }
                    } else {
                        func_8019F230();
                        func_800E8EA0(arg0, arg1, 0x3491U);
                        phi_s2 = 0;
                    }
                    break;
                case 13458:                         /* switch 8 */
                    arg1->unk_144 = (void (*)(Actor *, GlobalContext *)) func_808F5A94;
                    func_80151BB4(arg0, 0x11U);
                    break;
                }
            }
        } else if ((phi_v0 == 0x3468) || (phi_v0 == 0x3469)) {
        case 13457:                                 /* switch 8 */
            func_80151BB4(arg0, 0x11U);
        }
        break;
    case 7:                                         /* switch 2 */
        if (phi_v0 >= 0x3475) {
            if (phi_v0 >= 0x3476) {
                switch (phi_v0) {                   /* switch 9 */
                case 13480:                         /* switch 9 */
                    func_80151BB4(arg0, 0x11U);
                    break;
                case 13479:                         /* switch 9 */
                    func_80151BB4(arg0, 0x11U);
                    break;
                case 13461:                         /* switch 9 */
                    func_808F4108(arg1, arg0, 0x3496U);
                    gSaveContext.weekEventReg[16] |= 4;
                    gSaveContext.weekEventReg[56] |= 8;
                    phi_s2 = 0;
                    break;
                case 13463:                         /* switch 9 */
                    func_808F4108(arg1, arg0, 0x3498U);
                    phi_s2 = 0;
                    break;
                case 13476:                         /* switch 9 */
                    arg1->unk_144 = (void (*)(Actor *, GlobalContext *)) func_808F5A34;
                    func_808F43E0(arg1);
                    func_80151BB4(arg0, 0x11U);
                    break;
                case 13477:                         /* switch 9 */
                    func_808F4108(arg1, arg0, 0x34A6U);
                    phi_t7 = gSaveContext.weekEventReg[56] | 8;
block_153:
                    gSaveContext.weekEventReg[56] = phi_t7;
                    phi_s2 = 0;
                    break;
                case 13469:                         /* switch 9 */
                    func_808F30B0((SkelAnime *) &arg1[1].flags, 1);
                    func_808F30B0((bitwise s32) arg1[3].shape.feetPos[0].y + 0x148, 7);
                    if (gSaveContext.inventory.items[gItemSlots[59]] == 0x3B) {
                        func_800E8EA0(arg0, arg1, 0x34A1U);
                        phi_s2 = 0;
                    } else {
                        gSaveContext.weekEventReg[56] |= 8;
                        func_808F4108(arg1, arg0, 0x349EU);
                        phi_s2 = 0;
                    }
                    break;
                case 13471:                         /* switch 9 */
                    arg1->unk_144 = func_808F3D40;
                    func_800B8A1C(arg1, arg0, 0x81, 500.0f, 100.0f);
                    func_808F35D8(arg1, arg0);
                    break;
                case 13472:                         /* switch 9 */
                    arg1->unk_144 = (void (*)(Actor *, GlobalContext *)) func_808F5A34;
                    func_80151BB4(arg0, 0x11U);
                    func_80151BB4(arg0, 0x2FU);
                    func_808F43E0(arg1);
                    break;
                case 13473:                         /* switch 9 */
                    func_808F35D8(arg1, arg0);
                    if (func_80114E90() != 0) {
                        arg1->unk_144 = func_808F3B40;
                        func_800B8A1C(arg1, arg0, 0x92, 500.0f, 100.0f);
                    } else {
                        func_800E8EA0(arg0, arg1, 0x34A2U);
                        phi_s2 = 0;
                    }
                    break;
                case 13474:                         /* switch 9 */
                    func_800E8EA0(arg0, arg1, 0x34A3U);
                    phi_s2 = 0;
                    break;
                case 13475:                         /* switch 9 */
                    func_808F43E0(arg1);
                    func_80151BB4(arg0, 0x11U);
                    break;
                case 13465:                         /* switch 9 */
                    func_800E8EA0(arg0, arg1, 0x349AU);
                    func_808F30B0((SkelAnime *) &arg1[1].flags, 1);
                    func_808F30B0((bitwise s32) arg1[3].shape.feetPos[0].y + 0x148, 7);
                    phi_s2 = 0;
                    break;
                case 13466:                         /* switch 9 */
                    func_800E8EA0(arg0, arg1, 0x349BU);
                    phi_s2 = 0;
                    break;
                case 13467:                         /* switch 9 */
                    temp_a3_2 = &arg0->msgCtx;
                    if (temp_a3_2->choiceIndex == 0) {
                        func_808F4270(arg0, arg1, arg2, temp_a3_2, 1);
                        phi_s2 = 0;
                    } else {
                        func_8019F230();
                        func_800E8EA0(arg0, arg1, 0x349CU);
                        phi_s2 = 0;
                    }
                    break;
                case 13468:                         /* switch 9 */
                    func_808F43E0(arg1);
                    func_808F35D8(arg1, arg0);
                    func_80151BB4(arg0, 0x11U);
                    break;
                }
            } else if (phi_v0 != 0x3475) {

            } else {
                temp_v0_2 = phi_v1->weekEventReg[92] & 0xF8;
                temp_t6 = (temp_v0_2 & 0xFFF8) | 1 | temp_v0_2;
                phi_v1->weekEventReg[92] = temp_v0_2;
                phi_v1->weekEventReg[92] = temp_t6;
                func_800FD750(0x40);
                arg0->nextEntranceIndex = 0xCE50;
                arg0->unk_1887F = 5;
                arg0->sceneLoadFlag = 0x14;
                gSaveContext.weekEventReg[57] |= 1;
            }
        } else if (phi_v0 != 0x3473) {
            if (phi_v0 != 0x3474) {

            } else {
                func_800E8EA0(arg0, arg1, 0x3475U);
                phi_s2 = 0;
            }
        } else {
            phi_v1->weekEventReg[56] &= 0xF7;
            func_80151BB4(arg0, 0x11U);
        }
        break;
    case 6:                                         /* switch 2 */
        if (phi_v0 != 0x3471) {
            if (phi_v0 != 0x3472) {
                if (phi_v0 != 0x3496) {
                    if (phi_v0 != 0x3498) {
                        if (phi_v0 != 0x349E) {
                            if (phi_v0 != 0x34A6) {

                            } else {
                                goto block_149;
                            }
                        } else {
                            func_808F4108(arg1, arg0, 0x349FU);
                            phi_t7 = gSaveContext.weekEventReg[56] & 0xF7;
                            goto block_153;
                        }
                    } else {
block_149:
                        func_800E8EA0(arg0, arg1, 0x3471U);
                        phi_s2 = 0;
                    }
                } else {
                    func_808F4108(arg1, arg0, 0x3497U);
                    phi_s2 = 0;
                }
            } else {
                func_808F43E0(arg1);
                gSaveContext.weekEventReg[56] &= 0xF7;
                func_80151BB4(arg0, 0x11U);
            }
        } else {
            func_808F4270(arg0, arg1, arg2, &arg0->msgCtx, 0);
            phi_s2 = 0;
        }
        break;
    }
    return phi_s2;
}

s32 func_808F5674(GlobalContext *arg0, Actor *arg1, u32 arg2) {
    s32 sp20;
    u8 temp_v0;

    sp20 = 0;
    temp_v0 = func_80152498(arg0 + 0x4908);
    if (temp_v0 != 2) {
        if ((temp_v0 != 4) && (temp_v0 != 5)) {

        } else if ((func_80147624(arg0) != 0) && (func_808F4414(arg0, arg1, arg2) != 0)) {
            func_801477B4(arg0);
            sp20 = 1;
        }
    } else {
        func_808F4054(arg0, arg1, arg2, arg1->textId);
        sp20 = 1;
    }
    return sp20;
}

SaveContext *func_808F5728(GlobalContext *arg0, Actor *arg1, u32 arg2, s32 *arg3) {
    f32 temp_f0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v1;
    s32 temp_v0;
    s32 phi_v1;
    u16 phi_v0;

    temp_v0 = *arg3;
    if (temp_v0 == 4) {
        goto block_35;
    }
    if (temp_v0 == 2) {
        func_801518B0(arg0, arg1->textId, arg1);
        *arg3 = 1;
        return NULL;
    }
    if (temp_v0 == 3) {
        func_80151938(arg0, arg1->textId);
        *arg3 = 1;
        return NULL;
    }
    if (func_800B84D0(arg1, arg0) != 0) {
        *arg3 = 1;
        return (SaveContext *)1;
    }
    if (*arg3 == 1) {
        func_808F5994((EnIn *) arg1, arg0, (Vec3f *) &arg0->actorCtx.actorList[2].first->world, 0xC80);
    } else {
        temp_v0_2 = arg1->world.rot.y;
        temp_v1 = arg1->home.rot.y - temp_v0_2;
        if ((s32) temp_v1 >= 0x321) {
            arg1->world.rot.y = temp_v0_2 + 0x320;
        } else if ((s32) temp_v1 < -0x320) {
            arg1->world.rot.y = temp_v0_2 - 0x320;
        } else {
            arg1->world.rot.y = temp_v0_2 + temp_v1;
        }
        arg1->shape.rot.y = arg1->world.rot.y;
    }
    if (*arg3 == 1) {
        if (func_808F5674(arg0, arg1, arg2) != 0) {
            *arg3 = 0;
        }
    } else if (func_800B8934(arg0, arg1) == 0) {

    } else {
        temp_v0_3 = arg1->yawTowardsPlayer - arg1->shape.rot.y;
        phi_v1 = temp_v0_3 << 0x10;
        if ((s32) temp_v0_3 < 0) {
            phi_v1 = (s32) temp_v0_3 * -0x10000;
        }
        if ((phi_v1 >> 0x10) >= 0x4300) {

        } else {
            temp_f0 = arg1->xyzDistToPlayerSq;
            if ((temp_f0 > 25600.0f) && (arg1->isTargeted == 0)) {

            } else if (temp_f0 <= 6400.0f) {
                if (func_800B8614(arg1, arg0, 80.0f) != 0) {
                    phi_v0 = func_808F3DD4(arg0, arg1, arg2);
                    goto block_34;
                }
            } else if (func_800B863C(arg1, arg0) != 0) {
                phi_v0 = func_808F3DD4(arg0, arg1, arg2);
block_34:
                arg1->textId = phi_v0;
            }
        }
    }
block_35:
    return NULL;
}

s32 func_808F5994(EnIn *this, GlobalContext *globalCtx, Vec3f *arg2, s16 arg3) {
    s32 sp24;
    s16 temp_a0;
    s16 temp_v1;
    s32 phi_t0;

    arg3 = arg3;
    sp24 = 0;
    temp_v1 = this->actor.world.rot.y;
    temp_a0 = Math_Vec3f_Yaw((Vec3f *) &this->actor.world, arg2) - temp_v1;
    phi_t0 = sp24;
    if ((s32) arg3 < (s32) temp_a0) {
        this->actor.world.rot.y = temp_v1 + arg3;
    } else if ((s32) temp_a0 < -(s32) arg3) {
        this->actor.world.rot.y = temp_v1 - arg3;
    } else {
        this->actor.world.rot.y = temp_v1 + temp_a0;
        phi_t0 = 1;
    }
    this->actor.shape.rot.y = this->actor.world.rot.y;
    return phi_t0;
}

void func_808F5A34(EnIn *this, GlobalContext *globalCtx) {
    if (gSaveContext.day != 3) {
        func_808F5728(globalCtx, (Actor *) this, 3U, &this->unk48C);
        return;
    }
    func_808F5728(globalCtx, (Actor *) this, 7U, &this->unk48C);
}

void func_808F5A94(EnIn *this, GlobalContext *globalCtx) {
    if (func_800F41E4(globalCtx, &globalCtx->actorCtx) != 0) {
        if (gSaveContext.day == 3) {
            func_808F5728(globalCtx, (Actor *) this, 7U, &this->unk48C);
            return;
        }
        func_808F5728(globalCtx, (Actor *) this, 3U, &this->unk48C);
        return;
    }
    if (gSaveContext.day == 3) {
        func_808F5728(globalCtx, (Actor *) this, 5U, &this->unk48C);
        return;
    }
    func_808F5728(globalCtx, (Actor *) this, 1U, &this->unk48C);
}

SaveContext *func_808F5B58(Actor *arg0, GlobalContext *arg1) {
    SaveContext *phi_v0;

    if (func_800F41E4(arg1, arg1 + 0x1CA0) != 0) {
        if (((Player_GetMask(arg1) == 8) && ((gSaveContext.weekEventReg[63] & 0x40) != 0)) || (phi_v0 = &gSaveContext, ((gSaveContext.weekEventReg[56] & 8) != 0))) {
            if (gSaveContext.day == 3) {
                return func_808F5728(arg1, arg0, 6U, arg0 + 0x48C);
            }
            return func_808F5728(arg1, arg0, 2U, (s32 *) &arg0[3].shape.rot.z);
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return phi_v0;
    }
    if ((Player_GetMask(arg1) != 8) || ((phi_v0 = &gSaveContext, (Player_GetMask(arg1) == 8)) && (phi_v0 = &gSaveContext, ((gSaveContext.weekEventReg[63] & 0x40) != 0)))) {
        if (gSaveContext.day == 3) {
            return func_808F5728(arg1, arg0, 4U, (s32 *) &arg0[3].shape.rot.z);
        }
        phi_v0 = func_808F5728(arg1, arg0, 0U, (s32 *) &arg0[3].shape.rot.z);
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return phi_v0;
    }
    return phi_v0;
}

void func_808F5C98(Actor *arg0, GlobalContext *arg1) {
    f32 temp_v0;

    if (arg0[3].shape.feetPos[1].y == 0) {
        arg0->unk_144 = func_808F5B58;
    }
    if (((Player_GetMask(arg1) == 8) && ((gSaveContext.weekEventReg[63] & 0x40) != 0)) || ((gSaveContext.weekEventReg[56] & 8) != 0)) {
        if (gSaveContext.day != 3) {
            func_808F5728(arg1, arg0, 2U, arg0 + 0x48C);
        } else {
            func_808F5728(arg1, arg0, 6U, (s32 *) &arg0[3].shape.rot.z);
        }
    }
    temp_v0 = arg0[3].shape.feetPos[0].z;
    if ((bitwise s32) temp_v0 == 2) {
        if ((bitwise s32) arg0[3].shape.feetPos[1].y == 2) {
            Audio_PlayActorSound2(arg0, 0x6855U);
        } else {
            Audio_PlayActorSound2(arg0, 0x687CU);
        }
        arg0[3].shape.feetPos[0].z = 4e-45.0f;
        return;
    }
    if ((bitwise s32) temp_v0 < 3) {
        arg0[3].shape.feetPos[0].z = (bitwise f32) ((bitwise s32) temp_v0 + 1);
    }
}

void EnIn_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 sp4A;
    ActorShape *sp44;
    SkelAnime *sp40;
    ColliderCylinder *sp3C;
    ActorShape *temp_a0;
    ColliderCylinder *temp_a1_2;
    ColliderJntSph *temp_a1_3;
    SkelAnime *temp_a1;
    s16 temp_v1;
    s32 temp_v0;
    void (*phi_t6)(EnIn *, GlobalContext *);
    EnIn *this = (EnIn *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_808F6C4C);
    temp_a0 = &this->actor.shape;
    sp44 = temp_a0;
    ActorShape_Init(temp_a0, 0.0f, func_800B3FC0, 30.0f);
    temp_a1 = &this->skelAnime;
    sp40 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06014EA8, NULL, this->limbDrawTbl, this->transitionDrawTbl, 0x14);
    func_808F30B0(sp40, 0);
    temp_a1_2 = &this->colliderCylinder;
    sp3C = temp_a1_2;
    Collider_InitCylinder(globalCtx, temp_a1_2);
    Collider_SetCylinder(globalCtx, temp_a1_2, (Actor *) this, &D_808F6A60);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_808F6ACC, &D_808F6AC0);
    this->unk48A = 0;
    this->unk48C = 0;
    this->unk4AC = 0;
    temp_v1 = this->actor.params & 0x1FF;
    this->unk4B0 = gSaveContext.weekEventReg[92] & 7;
    if ((temp_v1 == 2) || (temp_v1 == 4)) {
        this->unk4AC |= 8;
    }
    if ((temp_v1 == 1) || (temp_v1 == 2)) {
        ActorShape_Init(sp44, 0.0f, NULL, 0.0f);
        this->unk488 = 1;
        SkelAnime_ChangeAnim(sp40, (AnimationHeader *) &D_06016A60, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06016A60), (u8) 2, 0.0f);
        Actor_SetScale((Actor *) this, 0.01f);
        this->unk23C = 0;
        this->unk23D = 1;
        phi_t6 = (void (*)(EnIn *, GlobalContext *)) func_808F374C;
        goto block_30;
    }
    temp_a1_3 = &this->colliderJntSph;
    sp44 = (ActorShape *) temp_a1_3;
    sp4A = temp_v1;
    Collider_InitJntSph(globalCtx, temp_a1_3);
    Collider_SetJntSph(globalCtx, temp_a1_3, (Actor *) this, &D_808F6AB0, &this->colliderJntSphElement);
    Actor_SetScale((Actor *) this, 0.01f);
    this->actor.gravity = -4.0f;
    this->path = func_8013D648(globalCtx, (s16) ((s32) (this->actor.params & 0x7E00) >> 9), 0x3F);
    this->unk23D = 0;
    if ((temp_v1 == 3) || (temp_v1 == 4)) {
        temp_v0 = gSaveContext.weekEventReg[92] & 7;
        if ((temp_v0 == 2) || (temp_v0 == 3)) {
            gSaveContext.weekEventReg[56] &= 0xF7;
            this->unk4A8 = 0;
            this->unk4AC |= 2;
            func_808F35AC(this, globalCtx, &gSaveContext);
            this->unk23C = 0;
            D_801BDAA0 = 0;
            if ((gSaveContext.weekEventReg[92] & 7) == 2) {
                func_808F30B0(sp40, 6);
            } else {
                func_808F30B0(sp40, 4);
            }
            if ((gSaveContext.weekEventReg[92] & 7) == 2) {
                this->skelAnime.animCurrentFrame = ((Rand_ZeroOne() * 0.6f) + 0.2f) * this->skelAnime.animFrameCount;
            }
            if ((this->unk4AC & 8) != 0) {
                this->actionFunc = (void (*)(EnIn *, GlobalContext *)) func_808F39DC;
                return;
            }
            this->actionFunc = (void (*)(EnIn *, GlobalContext *)) func_808F5C98;
            return;
        }
        if (temp_v0 != 1) {
            gSaveContext.weekEventReg[56] &= 0xF7;
            this->unk23C = 0;
            this->unk4AC |= 2;
            if (temp_v1 == 4) {
                if (func_808F33B8(3) != 0) {
                    func_808F30B0(sp40, 0);
                    this->actionFunc = func_808F5A94;
                    return;
                }
                if ((gSaveContext.weekEventReg[52] & 1) != 0) {
                    Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xA8, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.shape.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) (s32) this->actor.shape.rot.z, (s16) 0xF);
                    Actor_MarkForDeath((Actor *) this);
                    return;
                }
                func_808F30B0(sp40, 0);
                this->actionFunc = func_808F5A94;
                return;
            }
            if ((gSaveContext.weekEventReg[52] & 1) != 0) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            func_808F30B0(sp40, 7, &gSaveContext);
            this->actionFunc = (void (*)(EnIn *, GlobalContext *)) func_808F5B58;
            return;
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    phi_t6 = (void (*)(EnIn *, GlobalContext *)) func_808F3618;
block_30:
    this->actionFunc = phi_t6;
}

void EnIn_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnIn *this = (EnIn *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->colliderCylinder);
}

void EnIn_Update(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_v1;
    EnIn *this = (EnIn *) thisx;

    func_808F3310(this, globalCtx);
    func_808F3334((Actor *) this, globalCtx);
    temp_v1 = this->unk4AC;
    if ((temp_v1 & 2) != 0) {
        this->unk4AC = temp_v1 & ~2;
        func_808F38F8(this, globalCtx);
    }
    if (Player_GetMask(globalCtx) == 8) {
        this->unk4AC |= 0x40;
    } else {
        this->unk4AC &= -0x41;
    }
    this->actionFunc(this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
    func_808F3414((Actor *) this, globalCtx);
    func_808F32A0(this, globalCtx);
}

void *func_808F6334(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    s32 sp20;
    f32 temp_f2;
    u16 temp_v0;
    u8 temp_v1;
    f32 phi_f0;
    f32 phi_f0_2;
    void *phi_v0;

    sp24 = arg1->actorCtx.actorList[2].first;
    temp_v1 = func_80152498(arg1 + 0x4908);
    if (arg0[3].projectedPos.z != 0.0f) {
        phi_f0 = 40.0f;
    } else {
        phi_f0 = -40.0f;
    }
    arg0[3].projectedW += phi_f0;
    temp_f2 = arg0[3].projectedW;
    if (temp_f2 < 0.0f) {
        arg0[3].projectedW = 0.0f;
    } else {
        if (temp_f2 > 80.0f) {
            phi_f0_2 = 80.0f;
        } else {
            phi_f0_2 = temp_f2;
        }
        arg0[3].projectedW = phi_f0_2;
    }
    arg1 = arg1;
    sp20 = (s32) temp_v1;
    SysMatrix_InsertTranslation(arg0[3].projectedW, 0.0f, 0.0f, 1);
    phi_v0 = arg1 + 0x10000;
    if ((arg0 == sp24[8].velocity.y) && ((temp_v0 = arg1->msgCtx.unk11F04, (((s32) temp_v0 < 0xFF) != 0)) || (phi_v0 = (void *)3, (((s32) temp_v0 < 0x201) == 0))) && (phi_v0 = (void *)3, phi_v0 = (void *)3, (temp_v1 == (void *)3)) && (phi_v0 = (void *)3, (arg0[3].uncullZoneForward == (void *)3))) {
        if ((arg1->state.frames & 1) == 0) {
            if (arg0[3].projectedPos.z != 0.0f) {
                phi_v0 = (void *)3;
                goto block_18;
            }
            arg0[3].projectedPos.z = 1.0f;
        }
    } else {
block_18:
        arg0[3].projectedPos.z = 0.0f;
    }
    arg0[3].uncullZoneForward = (s32) temp_v1;
    return phi_v0;
}

s32 EnIn_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    ? sp50;
    void *sp4C;
    ? sp38;
    s32 *sp34;
    s32 *sp30;
    void *sp20;
    ? *temp_t9;
    Gfx *temp_v0;
    s32 *temp_t6;
    s32 *temp_v0_2;
    s32 *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;
    s32 *phi_t6;
    ? *phi_t9;
    u32 phi_a2;

    phi_t6 = D_808F6C54;
    phi_t9 = &sp50;
    do {
        temp_t6 = phi_t6 + 0xC;
        temp_t9 = phi_t9 + 0xC;
        temp_t9->unk_-C = (s32) *phi_t6;
        temp_t9->unk_-8 = (s32) temp_t6->unk_-8;
        temp_t9->unk_-4 = (s32) temp_t6->unk_-4;
        phi_t6 = temp_t6;
        phi_t9 = temp_t9;
    } while (temp_t6 != (D_808F6C54 + 0x48));
    temp_t9->unk_0 = (s32) temp_t6->unk_0;
    temp_t9->unk_4 = (s32) temp_t6[1];
    if ((arg5->unk_23C != 0) && (arg1 != 0x10)) {
        temp_v0 = *(&sp50 + (arg1 * 4));
        if (temp_v0 != 0) {
            *arg2 = temp_v0;
        }
    }
    if (((arg5[3].shape.feetPos[1].x & 4) != 0) && (arg1 == 0x10)) {
        *arg2 = &D_0601C528;
    }
    temp_v1 = arg0->state.gfxCtx;
    if (arg1 == 0x10) {
        sp38.unk_0 = (s32) D_808F6CA4.unk_0;
        sp38.unk_4 = (s32) D_808F6CA4.unk_4;
        sp38.unk_8 = (s32) D_808F6CA4.unk_8;
        sp38.unk_C = (s32) D_808F6CA4.unk_C;
        temp_v0_2 = temp_v1->polyOpa.p;
        temp_v1->polyOpa.p = temp_v0_2 + 8;
        *temp_v0_2 = 0xDB060020;
        sp4C = temp_v1;
        sp34 = temp_v0_2;
        sp34[1] = Lib_SegmentedToVirtual(*(&sp38 + (arg5->unk_482 * 4)));
        temp_v0_3 = temp_v1->polyOpa.p;
        temp_v1->polyOpa.p = temp_v0_3 + 8;
        *temp_v0_3 = (void *)0xDB060024;
        sp30 = temp_v0_3;
        sp30[1] = Lib_SegmentedToVirtual(&D_06003520);
    } else {
        phi_a2 = 0U;
        if ((arg5[3].shape.feetPos[1].x & 8) != 0) {
            phi_a2 = 1U;
        }
        AnimatedMat_DrawStep(arg0, Lib_SegmentedToVirtual(&D_06001C30), phi_a2);
    }
    if (arg1 == 0x10) {
        SysMatrix_InsertTranslation(1500.0f, 0.0f, 0.0f, 1);
        SysMatrix_InsertXRotation_s(arg5[2].shape.unk_16, 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) arg5->unk_358 * -1), 1);
        SysMatrix_InsertTranslation(-1500.0f, 0.0f, 0.0f, 1);
        func_808F6334(arg5, arg0);
    }
    if (arg1 == 9) {
        Matrix_RotateY(arg5->unk_360, 1U);
        SysMatrix_InsertXRotation_s(arg5->unk_35E, 1);
    }
    if ((arg1 == 9) || (arg1 == 0xA) || (arg1 == 0xD)) {
        temp_v1_2 = arg5 + (arg1 * 2);
        sp20 = temp_v1_2;
        arg4->y += (s32) (Math_SinS(temp_v1_2->unk_376) * 200.0f);
        arg4->z += (s32) (Math_CosS(temp_v1_2->unk_39E) * 200.0f);
    }
    if ((arg5[3].shape.feetPos[1].x & 0x40) != 0) {
        if (arg1 == 0x12) {
            arg4->x = 0x1F40;
            arg4->y = -0x3E8;
            arg4->z = 0x1D4C;
        } else if (arg1 == 0x11) {
            arg4->x = -0x1F40;
            arg4->y = 0x3E8;
            arg4->z = 0x1D4C;
        } else if (arg1 == 0x13) {
            arg4->x = 0;
            arg4->y = 0x7FFF;
            arg4->z = -0x2328;
        }
    }
    return 0;
}

void EnIn_PostLimbDraw(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? sp50;
    ? sp44;
    Vec3f *sp24;
    Vec3f *temp_a1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    s32 phi_a2;
    s32 phi_a2_2;

    sp50.unk_0 = (s32) D_808F6CB4.unk_0;
    sp50.unk_4 = (s32) D_808F6CB4.unk_4;
    sp50.unk_8 = (s32) D_808F6CB4.unk_8;
    sp44.unk_0 = (s32) D_808F6CC0.unk_0;
    sp44.unk_4 = (s32) D_808F6CC0.unk_4;
    sp44.unk_8 = (s32) D_808F6CC0.unk_8;
    if (arg1 == 0x10) {
        arg1 = arg1;
        temp_a1 = arg4 + 0x4B4;
        sp24 = temp_a1;
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp50, temp_a1);
        Math_Vec3f_Copy(arg4 + 0x3C, temp_a1);
    }
    phi_a2_2 = arg1;
    if (arg4->unk_23D == 0) {
        arg1 = arg1;
        Collider_UpdateSpheres(arg1, arg4 + 0x18C);
        if (arg1 == 4) {
            arg1 = arg1;
            SysMatrix_MultiplyVector3fByState((Vec3f *) &sp44, arg4 + 0x248);
        }
        phi_a2 = arg1;
        if (arg1 == 7) {
            arg1 = arg1;
            SysMatrix_MultiplyVector3fByState((Vec3f *) &sp44, arg4 + 0x254);
            phi_a2 = arg1;
        }
        phi_a2_2 = phi_a2;
        if ((arg4->unk_23C == 0) && ((arg4[3].shape.feetPos[1].x & 8) == 0)) {
            temp_a0 = *arg0;
            if (phi_a2 == 0xC) {
                temp_v1 = temp_a0->unk_2B0;
                temp_a0->unk_2B0 = (void *) (temp_v1 + 8);
                temp_v1->unk_0 = 0xDE000000;
                temp_v1->unk_4 = &D_06007A70;
            }
            if (phi_a2 == 0xF) {
                temp_v1_2 = temp_a0->unk_2B0;
                temp_a0->unk_2B0 = (void *) (temp_v1_2 + 8);
                temp_v1_2->unk_4 = &D_06007C48;
                temp_v1_2->unk_0 = 0xDE000000;
            }
        }
    }
    if ((arg4[3].shape.feetPos[1].x & 0x20) != 0) {
        temp_a0_2 = *arg0;
        if (phi_a2_2 == 0xC) {
            temp_v1_3 = temp_a0_2->unk_2B0;
            temp_a0_2->unk_2B0 = (void *) (temp_v1_3 + 8);
            temp_v1_3->unk_4 = &D_06007C48;
            temp_v1_3->unk_0 = 0xDE000000;
        }
    }
}

void EnIn_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp28;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    EnIn *this = (EnIn *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp28 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v1 = sp28->polyOpa.p;
    sp28->polyOpa.p = &temp_v1[1];
    temp_v1->words.w1 = 0;
    temp_v1->words.w0 = 0xE7000000;
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, EnIn_OverrideLimbDraw, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) EnIn_PostLimbDraw, (Actor *) this);
}
