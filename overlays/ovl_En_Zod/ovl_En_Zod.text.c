typedef struct EnZod {
    /* 0x000 */ Actor actor;
    /* 0x144 */ Vec3s unk144;                       /* inferred */
    /* 0x14A */ char pad14A[0x36];                  /* maybe part of unk144[10]? */
    /* 0x180 */ Vec3s unk180;                       /* inferred */
    /* 0x186 */ char pad186[0x36];                  /* maybe part of unk180[10]? */
    /* 0x1BC */ SkelAnime unk1BC;                   /* inferred */
    /* 0x200 */ ColliderCylinder unk200;            /* inferred */
    /* 0x24C */ s16 unk24C;                         /* inferred */
    /* 0x24E */ s16 unk24E;                         /* inferred */
    /* 0x250 */ Vec3s unk250;                       /* inferred */
    /* 0x256 */ u16 unk256;                         /* inferred */
    /* 0x258 */ u16 unk258;                         /* inferred */
    /* 0x25A */ u16 unk25A;                         /* inferred */
    /* 0x25C */ s16 unk25C;                         /* inferred */
    /* 0x25E */ s16 unk25E;                         /* inferred */
    /* 0x260 */ s16 unk260;                         /* inferred */
    /* 0x262 */ s16 unk262;                         /* inferred */
    /* 0x264 */ s16 unk264;                         /* inferred */
    /* 0x266 */ s16 unk266;                         /* inferred */
    /* 0x268 */ f32 unk268;                         /* inferred */
    /* 0x26C */ f32 unk26C;                         /* inferred */
    /* 0x270 */ char pad270[0x10];                  /* maybe part of unk26C[5]? */
    /* 0x280 */ f32 unk280;                         /* inferred */
    /* 0x284 */ f32 unk284;                         /* inferred */
    /* 0x288 */ char pad288[0x10];                  /* maybe part of unk284[5]? */
    /* 0x298 */ s16 unk298;                         /* inferred */
    /* 0x29A */ u16 unk29A;                         /* inferred */
    /* 0x29C */ void (*actionFunc)(EnZod *, GlobalContext *);
} EnZod;                                            /* size = 0x2A0 */

struct _mips2c_stack_EnZod_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnZod_Draw {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnZod_Init {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad38[0x10];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnZod_Update {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ ColliderCylinder *sp30;              /* inferred */
    /* 0x34 */ char pad34[0x4];
    /* 0x38 */ s16 sp38;                            /* inferred */
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ s16 sp3C;                            /* inferred */
    /* 0x3E */ char pad3E[0xA];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80BAF1EC {
    /* 0x00 */ char pad0[0x26];
    /* 0x26 */ u16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BAF2B4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BAF338 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ AnimationHeaderCommon **sp30;        /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BAF3E0 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BAF4D8 {};              /* size 0x0 */

struct _mips2c_stack_func_80BAF7CC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BAF99C {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BAFA44 {
    /* 0x00 */ char pad0[0x1E];
    /* 0x1E */ u16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BAFADC {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BAFB84 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BAFC00 {};              /* size 0x0 */

struct _mips2c_stack_func_80BAFC10 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BAFD00 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BAFDB4 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BAFE34 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BAFF14 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BB0128 {};              /* size 0x0 */

struct _mips2c_stack_func_80BB0170 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BB01B0 {
    /* 0x00 */ char pad0[0x74];
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ char pad78[0x24];                    /* maybe part of sp74[10]? */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ char padA0[0x24];                    /* maybe part of sp9C[10]? */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ char padC8[0x28];
};                                                  /* size = 0xF0 */

? func_801A1FB4(?, f32 *, ?, ?);                    /* extern */
void func_80BAF1EC(EnZod *arg0, GlobalContext *arg1); /* static */
s32 func_80BAF2B4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BAF338(EnZod *arg0, s16 arg1, u8 arg2, u16); /* static */
void func_80BAF3E0(EnZod *arg0, GlobalContext *);   /* static */
void func_80BAF4D8(EnZod *arg0);                    /* static */
void func_80BAF7CC(EnZod *arg0, GlobalContext *arg1); /* static */
void func_80BAF99C(EnZod *arg0, GlobalContext *arg1); /* static */
void func_80BAFA44(EnZod *arg0, GlobalContext *arg1); /* static */
void func_80BAFADC(EnZod *arg0, GlobalContext *arg1); /* static */
void func_80BAFB84(EnZod *arg0, GlobalContext *arg1); /* static */
void func_80BAFC00(EnZod *arg0, GlobalContext *arg1); /* static */
void func_80BAFC10(EnZod *arg0, GlobalContext *arg1); /* static */
void func_80BAFD00(EnZod *arg0, GlobalContext *arg1); /* static */
void func_80BAFDB4(EnZod *arg0, GlobalContext *arg1); /* static */
void func_80BAFE34(EnZod *arg0, GlobalContext *arg1); /* static */
void func_80BAFF14(EnZod *arg0, GlobalContext *arg1); /* static */
s32 func_80BB0128(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80BB0170(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80BB01B0(EnZod *arg0, GraphicsContext **arg1); /* static */
extern AnimationHeader D_06000D94;
extern void D_06007650;
extern FlexSkeletonHeader D_0600D658;
static ColliderCylinderInit D_80BB0540 = {
    {0xA, 0, 0x11, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x3C, 0x28, 0, {0, 0, 0}},
};
static ? D_80BB056C;                                /* unable to generate initializer */
static Vec3f D_80BB0580 = {1300.0f, 1100.0f, 0.0f};
static s32 D_80BB058C[10] = {
    0,
    0xC5282000,
    0x45106000,
    0x45730000,
    0xC5820000,
    0xC5098000,
    0xC3E78000,
    0x44AEA000,
    0x45555000,
    0x43C28000,
};
static s32 D_80BB05B4[10] = {
    0,
    0x45C5F800,
    0x45D17800,
    0x45B33800,
    0x4541A000,
    0x45515000,
    0x456A4000,
    0x45686000,
    0x453A4000,
    0x44BF4000,
};
static s32 D_80BB05DC[10] = {
    0,
    0x4587F000,
    0x45480000,
    0x44C26000,
    0x4533A000,
    0x4573D000,
    0x45939000,
    0x4587C000,
    0x45480000,
    0x4552D000,
};
static u32 D_80BB0604[10] = {
    0x600A460,
    0x600A550,
    0x600A5E0,
    0x600A670,
    0x600A700,
    0x600A8F8,
    0x600AAF0,
    0x600ACE8,
    0x600AEE0,
    0x600B0D8,
};
static ? D_80BB062C;                                /* unable to generate initializer */

void EnZod_Init(EnZod *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_v0_4;
    void *temp_v0_3;
    EnZod *this = (EnZod *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 60.0f);
    this->actor.colChkInfo.mass = 0xFF;
    Actor_SetScale((Actor *) this, 0.01f);
    temp_a1 = &this->unk1BC;
    sp34 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_0600D658, &D_06000D94, &this->unk144, &this->unk180, 0xA);
    SkelAnime_ChangeAnimDefaultRepeat(sp34, &D_06000D94);
    Collider_InitAndSetCylinder(globalCtx, &this->unk200, (Actor *) this, &D_80BB0540);
    this->unk260 = 0;
    temp_v0 = this->unk260;
    this->unk266 = 0x12C;
    this->unk25E = temp_v0;
    this->unk25C = temp_v0;
    temp_v0_2 = this->unk266;
    this->unk256 = 0;
    this->unk25A = -1;
    this->unk258 = -1;
    this->actor.textId = 0;
    this->unk298 = 0;
    this->actor.minVelocityY = -4.0f;
    this->actor.gravity = -4.0f;
    this->unk264 = temp_v0_2;
    this->unk262 = temp_v0_2;
    temp_v0_3 = this + (2 * 4);
    this->unk280 = 0.01f;
    this->unk284 = 0.01f;
    this->unk26C = 0.0f;
    this->unk268 = 0.0f;
    temp_v0_3->unk28C = 0.01f;
    temp_v0_3->unk274 = 0.0f;
    temp_v0_3->unk288 = 0.01f;
    temp_v0_3->unk270 = 0.0f;
    temp_v0_3->unk284 = 0.01f;
    temp_v0_3->unk26C = 0.0f;
    temp_v0_3->unk268 = 0.0f;
    temp_v0_3->unk280 = 0.01f;
    func_80BAF338(this, 3, 2U, -1U);
    temp_v0_4 = this->actor.params & 0xF;
    this->actionFunc = func_80BAF99C;
    if (temp_v0_4 != 1) {
        if (temp_v0_4 != 2) {
            if ((gSaveContext.weekEventReg[55] & 0x80) != 0) {
                Actor_MarkForDeath((Actor *) this);
            }
            this->actor.flags |= 0x10;
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return;
        }
        this->actionFunc = func_80BAFF14;
        this->unk29A = -1;
        this->unk256 |= 2;
        return;
    }
    if ((gSaveContext.weekEventReg[78] & 1) != 0) {
        this->actionFunc = func_80BAFDB4;
        func_80BAF338(this, 0, 2U, -1U);
        this->actor.flags |= 0x10;
        ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        return;
    }
    this->actionFunc = func_80BAFB84;
    if ((gSaveContext.weekEventReg[55] & 0x80) == 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void EnZod_Destroy(EnZod *this, GlobalContext *globalCtx) {
    EnZod *this = (EnZod *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk200);
}

void func_80BAF1EC(EnZod *arg0, GlobalContext *arg1) {
    u16 sp26;
    u8 temp_v0;
    u8 temp_v0_2;
    u16 phi_a3;

    if (gSaveContext.playerForm != 2) {
        temp_v0 = gSaveContext.weekEventReg[32];
        phi_a3 = 0x1227U;
        if ((temp_v0 & 8) != 0) {
            phi_a3 = 0x1229U;
        } else {
            gSaveContext.weekEventReg[32] = temp_v0 | 8;
        }
    } else if ((arg0->unk256 & 1) != 0) {
        phi_a3 = 0x1225U;
    } else {
        temp_v0_2 = gSaveContext.weekEventReg[32];
        phi_a3 = 0x1219U;
        if ((temp_v0_2 & 0x10) != 0) {
            phi_a3 = 0x1226U;
        } else {
            gSaveContext.weekEventReg[32] = temp_v0_2 | 0x10;
        }
        arg0->unk256 |= 1;
    }
    sp26 = phi_a3;
    func_80BAF338(arg0, 0, 2U, phi_a3);
    func_801518B0(arg1, sp26, (Actor *) arg0);
}

s32 func_80BAF2B4(Actor *arg0, GlobalContext *arg1) {
    if ((arg0->yDistToPlayer < 30.0f) && (arg0->xzDistToPlayer < 200.0f) && (Actor_IsLinkFacingActor(arg0, 0x3000, arg1) != 0) && (Actor_IsActorFacingLink(arg0, 0x3000) != 0)) {
        return 1;
    }
    return 0;
}

void func_80BAF338(EnZod *arg0, s16 arg1, u8 arg2) {
    AnimationHeaderCommon **sp30;
    AnimationHeaderCommon **temp_v1;
    s16 phi_s0;

    phi_s0 = arg1;
    if (((s32) arg1 < 0) || ((s32) arg1 >= 5)) {
        phi_s0 = 3;
    }
    temp_v1 = (phi_s0 * 4) + &D_80BB056C;
    sp30 = temp_v1;
    SkelAnime_ChangeAnim(arg0 + 0x1BC, (AnimationHeader *) *temp_v1, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*temp_v1), (u8) (s32) arg2, -5.0f);
    arg0->unk258 = phi_s0;
    arg0->unk25A = phi_s0;
}

void func_80BAF3E0(EnZod *arg0) {
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    s16 temp_a1;
    s16 temp_a3;
    s16 temp_v0;

    temp_a0 = arg0 + 0x1BC;
    sp20 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        temp_a1 = arg0->unk258;
        temp_a3 = arg0->unk25A;
        if (temp_a1 == temp_a3) {
            func_80BAF338(arg0, temp_a1, 2U, (u16) temp_a3);
            temp_v0 = (s16) arg0->unk258;
            if (temp_v0 != 3) {
                if (temp_v0 != 4) {

                } else if (Rand_ZeroFloat(1.0f) < 0.8f) {
                    arg0->unk25A = 3;
                }
            } else if (Rand_ZeroFloat(1.0f) < 0.2f) {
                arg0->unk25A = 4;
            }
        } else {
            func_80BAF338(arg0, temp_a3, 2U, (u16) temp_a3);
        }
        SkelAnime_FrameUpdateMatrix(sp20);
    }
}

void func_80BAF4D8(EnZod *arg0) {
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_a2;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_f6;
    s32 temp_v0;
    s32 temp_v0_2;
    EnZod *phi_v1;
    s32 phi_a2;
    s32 phi_v0;
    EnZod *phi_a1;
    s32 phi_v0_2;

    phi_v1 = arg0;
    phi_v0 = 0;
    phi_v0_2 = 0;
    do {
        temp_a1 = phi_v1->unk262;
        phi_v1->unk25C += temp_a1;
        phi_v1->unk262 = temp_a1 - (s32) ((f32) phi_v1->unk25C * 0.1f);
        temp_a1_2 = phi_v1->unk262;
        phi_a2 = (s32) temp_a1_2;
        if ((s32) temp_a1_2 < 0) {
            phi_a2 = -(s32) temp_a1_2;
        }
        if (phi_a2 >= 0x65) {
            phi_v1->unk262 = (s16) (s32) ((f32) temp_a1_2 * 0.9f);
        }
        if (phi_v0 != 0) {
            if (phi_v0 != 1) {

            } else if ((arg0->unk258 == 4) && ((s32) arg0->unk1BC.animCurrentFrame == 0x13)) {
                goto block_13;
            }
        } else if ((arg0->unk258 == 4) && ((s32) arg0->unk1BC.animCurrentFrame == 7)) {
block_13:
            phi_v1->unk262 = -0x3E8;
        }
        temp_v0 = phi_v0 + 1;
        phi_v1 += 2;
        phi_v0 = temp_v0;
    } while (temp_v0 < 3);
    phi_a1 = arg0;
    do {
        temp_f2 = phi_a1->unk280;
        phi_a1->unk268 += temp_f2;
        phi_a1->unk280 = temp_f2 - (phi_a1->unk268 * 0.8f);
        temp_f2_2 = phi_a1->unk280;
        if (fabsf(temp_f2_2) > 0.01f) {
            phi_a1->unk280 = temp_f2_2 * 0.5f;
        }
        if (phi_v0_2 != 0) {
            if (phi_v0_2 != 2) {
                if (phi_v0_2 != 3) {
                    if (phi_v0_2 != 4) {

                    } else if ((arg0->unk258 == 4) && ((s32) arg0->unk1BC.animCurrentFrame == 0x13)) {
                        phi_a1->unk280 = 0.15f;
                    }
                } else {
                    temp_a2 = arg0->unk258;
                    if (temp_a2 != 3) {
                        if (temp_a2 != 4) {

                        } else if ((s32) arg0->unk1BC.animCurrentFrame == 1) {
                            phi_a1->unk280 = 0.1f;
                        }
                    } else {
                        temp_f6 = (s32) arg0->unk1BC.animCurrentFrame;
                        if ((temp_f6 == 1) || (temp_f6 == 7) || (temp_f6 == 0xC) || (temp_f6 == 0x13)) {
                            phi_a1->unk280 = 0.03f;
                        }
                    }
                }
            } else {
                temp_v1 = arg0->unk258;
                if (((temp_v1 == 3) && ((s32) arg0->unk1BC.animCurrentFrame == 0x13)) || ((temp_v1 == 4) && ((s32) arg0->unk1BC.animCurrentFrame == 8))) {
                    phi_a1->unk280 = 0.1f;
                }
            }
        } else {
            temp_v1_2 = arg0->unk258;
            if (((temp_v1_2 == 3) || (temp_v1_2 == 4)) && ((s32) arg0->unk1BC.animCurrentFrame == 1)) {
                phi_a1->unk280 = 0.1f;
            }
        }
        temp_v0_2 = phi_v0_2 + 1;
        phi_a1 += 4;
        phi_v0_2 = temp_v0_2;
    } while (temp_v0_2 != 6);
}

void func_80BAF7CC(EnZod *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    GlobalContext *temp_a2;
    u16 temp_v0_2;
    u8 temp_v0;
    u8 temp_v0_3;

    temp_a2 = arg1;
    arg1 = temp_a2;
    func_80BAF3E0(arg0, temp_a2);
    temp_v0 = func_80152498(arg1 + 0x4908);
    if (temp_v0 != 4) {
        temp_a0 = arg1;
        if (temp_v0 != 5) {
            return;
        }
        arg1 = arg1;
        if (func_80147624(temp_a0) != 0) {
            temp_v0_2 = arg1->msgCtx.unk11F04;
            switch (temp_v0_2) {
            case 4634:
            case 4635:
            case 4636:
            case 4640:
            case 4641:
            case 4647:
                func_80151938(arg1, (temp_v0_2 + 1) & 0xFFFF);
                return;
            case 4633:
                func_80151938(arg1, (temp_v0_2 + 1) & 0xFFFF);
                arg0->unk25A = 2;
                return;
            case 4637:
                func_80151938(arg1, (temp_v0_2 + 1) & 0xFFFF);
                arg0->unk25A = 1;
                return;
            case 4643:
                func_80151938(arg1, (temp_v0_2 + 1) & 0xFFFF);
                arg0->unk25A = 0;
                return;
            case 4638:
            case 4646:
                func_80151938(arg1, 0x121FU);
                arg0->unk25A = 1;
                return;
            default:
                func_801477B4(arg1);
                arg0->actionFunc = func_80BAF99C;
                func_80BAF338(arg0, 3, 2U);
                /* Duplicate return node #19. Try simplifying control flow for better match */
                return;
            }
        } else {
            /* Duplicate return node #19. Try simplifying control flow for better match */
        }
    } else {
        temp_a0_2 = arg1;
        arg1 = arg1;
        if ((func_80147624(temp_a0_2) != 0) && (arg1->msgCtx.unk11F04 == 0x121F)) {
            temp_v0_3 = arg1->msgCtx.choiceIndex;
            if (temp_v0_3 != 0) {
                if (temp_v0_3 != 1) {
                    return;
                }
                arg1 = arg1;
                func_8019F230();
                func_80151938(arg1, 0x1223U);
                return;
            }
            arg1 = arg1;
            func_8019F208();
            func_80151938(arg1, 0x1220U);
        }
    }
}

void func_80BAF99C(EnZod *arg0, GlobalContext *arg1) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 *temp_a1;

    func_80BAF3E0(arg0);
    if (func_800B84D0((Actor *) arg0, arg1) != 0) {
        func_80BAF1EC(arg0, arg1);
        arg0->actionFunc = func_80BAF7CC;
    } else if (func_80BAF2B4((Actor *) arg0, arg1) != 0) {
        func_800B8614((Actor *) arg0, arg1, 210.0f);
    }
    temp_a1 = &sp20;
    sp20 = arg0->actor.projectedPos.x;
    sp24 = arg0->actor.projectedPos.y;
    sp28 = arg0->actor.projectedPos.z;
    func_801A1FB4(3, temp_a1, 0x6D, 0x442F0000);
}

void func_80BAFA44(EnZod *arg0, GlobalContext *arg1) {
    u16 sp1E;
    u8 temp_v0;
    u16 phi_a3;

    if (gSaveContext.playerForm == 2) {
        if ((gSaveContext.weekEventReg[79] & 1) != 0) {
            phi_a3 = 0x1253U;
        } else {
            temp_v0 = gSaveContext.weekEventReg[78];
            phi_a3 = 0x1251U;
            if ((temp_v0 & 0x20) != 0) {
                phi_a3 = 0x1252U;
            } else {
                gSaveContext.weekEventReg[78] = temp_v0 | 0x20;
            }
        }
    } else {
        phi_a3 = 0x1250U;
    }
    sp1E = phi_a3;
    func_80BAF338(arg0, 0, 2U, phi_a3);
    func_801518B0(arg1, sp1E, (Actor *) arg0);
}

void func_80BAFADC(EnZod *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    func_80BAF3E0(arg0);
    temp_v0 = func_80152498(arg1 + 0x4908);
    if (temp_v0 != 2) {
        if ((temp_v0 == 5) && (func_80147624(arg1) != 0)) {
            func_801477B4(arg1);
            arg0->actionFunc = func_80BAFB84;
            func_80BAF338(arg0, 3, 2U);
            return;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return;
    }
    arg0->actionFunc = func_80BAFB84;
    func_80BAF338(arg0, 3, 2U);
}

void func_80BAFB84(EnZod *arg0, GlobalContext *arg1) {
    func_80BAF3E0(arg0);
    if (func_800B84D0((Actor *) arg0, arg1) != 0) {
        func_80BAFA44(arg0, arg1);
        arg0->actionFunc = func_80BAFADC;
        return;
    }
    if (func_80BAF2B4((Actor *) arg0, arg1) != 0) {
        func_800B8614((Actor *) arg0, arg1, 210.0f);
    }
}

void func_80BAFC00(EnZod *arg0, GlobalContext *arg1) {

}

void func_80BAFC10(EnZod *arg0, GlobalContext *arg1) {
    s8 temp_a0;

    func_80BAF3E0(arg0);
    if (ActorCutscene_GetCanPlayNext((s16) arg0->actor.cutscene) != 0) {
        ActorCutscene_Start((s16) arg0->actor.cutscene, (Actor *) arg0);
        arg0->actor.cutscene = ActorCutscene_GetAdditionalCutscene((s16) arg0->actor.cutscene);
        temp_a0 = arg0->actor.cutscene;
        if (temp_a0 == -1) {
            arg0->actionFunc = func_80BAFC00;
            arg1->nextEntranceIndex = *(arg1->setupExitList + (((s32) (arg0->actor.params & 0xFE00) >> 9) * 2));
            arg1->unk_1887F = 5;
            arg1->sceneLoadFlag = 0x14;
            gSaveContext.weekEventReg[78] &= 0xFE;
            return;
        }
        ActorCutscene_SetIntentToPlay((s16) temp_a0);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
}

void func_80BAFD00(EnZod *arg0, GlobalContext *arg1) {
    func_80BAF3E0(arg0);
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        func_801477B4(arg1);
        func_80BAF338(arg0, 3, 2U);
        arg0->actionFunc = func_80BAFC10;
        ActorCutscene_Stop((s16) arg0->actor.cutscene);
        arg0->actor.cutscene = ActorCutscene_GetAdditionalCutscene((s16) arg0->actor.cutscene);
        ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
        gSaveContext.weekEventReg[79] |= 1;
        func_801A89A8(0x8064);
    }
}

void func_80BAFDB4(EnZod *arg0, GlobalContext *arg1) {
    func_80BAF3E0(arg0);
    if (ActorCutscene_GetCanPlayNext((s16) arg0->actor.cutscene) != 0) {
        ActorCutscene_Start((s16) arg0->actor.cutscene, (Actor *) arg0);
        func_800B7298(arg1, NULL, 0x44U);
        func_801518B0(arg1, 0x103AU, (Actor *) arg0);
        arg0->actionFunc = func_80BAFD00;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
}

void func_80BAFE34(EnZod *arg0, GlobalContext *arg1) {
    EnZod *temp_a0;
    EnZod *temp_a2;
    s16 temp_v0;

    temp_a2 = arg0;
    temp_a0 = temp_a2;
    arg0 = temp_a2;
    func_80BAF3E0(temp_a0, (GlobalContext *) temp_a2);
    temp_v0 = (s16) arg0->unk29A;
    if ((s32) temp_v0 < 0x31F) {
        arg0->unk29A = temp_v0 + 0xC8;
    } else {
        arg0->unk29A = temp_v0 + 0x1E;
    }
    if ((s32) (s16) arg0->unk29A >= 0x3E8) {
        arg0->unk29A = 0x3E7;
    }
    arg0 = arg0;
    if (func_800EE29C(arg1, 0x203U) != 0) {
        arg0 = arg0;
        if (arg1->csCtx.npcActions[func_800EE200(arg1, 0x203U)]->unk0 == 1) {
            arg0->actionFunc = func_80BAFF14;
            arg0->unk29A = -1;
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return;
    }
    arg0->actionFunc = func_80BAFF14;
    arg0->unk29A = -1;
}

void func_80BAFF14(EnZod *arg0, GlobalContext *arg1) {
    func_80BAF3E0(arg0);
    if ((func_800EE29C(arg1, 0x203U) != 0) && (arg1->csCtx.npcActions[func_800EE200(arg1, 0x203U)]->unk0 == 4)) {
        arg0->actionFunc = func_80BAFE34;
    }
}

void EnZod_Update(EnZod *this, GlobalContext *globalCtx) {
    s16 sp3C;
    s16 sp3A;
    s16 sp38;
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a2;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 phi_v0;
    s16 phi_v1;
    EnZod *this = (EnZod *) thisx;

    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    temp_a2 = &this->unk200;
    sp30 = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 10.0f, 10.0f, 10.0f, 4U);
    this->actionFunc(this, globalCtx);
    func_80BAF4D8(this);
    temp_v1 = this->unk24E;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        this->unk24E = temp_v1 - 1;
        phi_v0 = this->unk24E;
    }
    phi_v1 = this->unk24E;
    if (phi_v0 == 0) {
        this->unk24E = Rand_S16Offset(0x3C, 0x3C);
        phi_v1 = this->unk24E;
    }
    this->unk24C = phi_v1;
    if ((s32) this->unk24C >= 3) {
        this->unk24C = 0;
    }
    sp3C = 0;
    sp3A = 0;
    sp38 = 0;
    if (func_80BAF2B4((Actor *) this, globalCtx) != 0) {
        func_800E9250(globalCtx, (Actor *) this, &this->unk250, (Vec3s *) &sp38, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
        temp_v1_2 = this->unk250.x;
        if ((s32) temp_v1_2 >= 0xBB9) {
            this->unk250.x = 0xBB8;
            return;
        }
        if ((s32) temp_v1_2 < -0xBB8) {
            this->unk250.x = -0xBB8;
            return;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return;
    }
    Math_SmoothStepToS((s16 *) &this->unk250, 0, 6, 0x1838, (s16) 0x64);
    Math_SmoothStepToS(&this->unk250.y, 0, 6, 0x1838, (s16) 0x64);
}

s32 func_80BB0128(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 3) {
        arg4->x += arg5->unk252;
        arg4->z += arg5->unk250;
    }
    return 0;
}

void func_80BB0170(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 3) {
        SysMatrix_MultiplyVector3fByState(&D_80BB0580, arg4 + 0x3C);
    }
}

void func_80BB01B0(EnZod *arg0, GraphicsContext **arg1) {
    f32 spC4;
    f32 sp9C;
    f32 sp74;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_s2;
    f32 *temp_t0;
    f32 *temp_t1;
    f32 *temp_t6;
    f32 temp_f12;
    s32 *temp_t2;
    s32 *temp_t7;
    s32 *temp_t7_2;
    s32 temp_s1;
    s32 *phi_t7;
    f32 *phi_t6;
    s32 *phi_t2;
    f32 *phi_t1;
    s32 *phi_t7_2;
    f32 *phi_t0;
    f32 *phi_s4;
    f32 *phi_s5;
    f32 *phi_s6;
    s32 phi_s1;
    s32 phi_s3;
    u32 *phi_s7;

    phi_t7 = D_80BB058C;
    phi_t6 = &spC4;
    do {
        temp_t7 = phi_t7 + 0xC;
        temp_t6 = phi_t6 + 0xC;
        temp_t6->unk-C = (s32) *phi_t7;
        temp_t6->unk-8 = (s32) temp_t7->unk-8;
        temp_t6->unk-4 = (s32) temp_t7->unk-4;
        phi_t7 = temp_t7;
        phi_t6 = temp_t6;
    } while (temp_t7 != (D_80BB058C + 0x24));
    temp_t6->unk0 = temp_t7->unk0;
    phi_t2 = D_80BB05B4;
    phi_t1 = &sp9C;
    do {
        temp_t2 = phi_t2 + 0xC;
        temp_t1 = phi_t1 + 0xC;
        temp_t1->unk-C = (s32) *phi_t2;
        temp_t1->unk-8 = (s32) temp_t2->unk-8;
        temp_t1->unk-4 = (s32) temp_t2->unk-4;
        phi_t2 = temp_t2;
        phi_t1 = temp_t1;
    } while (temp_t2 != (D_80BB05B4 + 0x24));
    temp_t1->unk0 = temp_t2->unk0;
    phi_t7_2 = D_80BB05DC;
    phi_t0 = &sp74;
    do {
        temp_t7_2 = phi_t7_2 + 0xC;
        temp_t0 = phi_t0 + 0xC;
        temp_t0->unk-C = (s32) *phi_t7_2;
        temp_t0->unk-8 = (s32) temp_t7_2->unk-8;
        temp_t0->unk-4 = (s32) temp_t7_2->unk-4;
        phi_t7_2 = temp_t7_2;
        phi_t0 = temp_t0;
    } while (temp_t7_2 != (D_80BB05DC + 0x24));
    temp_t0->unk0 = temp_t7_2->unk0;
    temp_s2 = *arg1;
    phi_s4 = &spC4;
    phi_s5 = &sp9C;
    phi_s6 = &sp74;
    phi_s1 = 0;
    phi_s3 = 0;
    phi_s7 = D_80BB0604;
    do {
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(*phi_s4, *phi_s5, *phi_s6, 1);
        switch (phi_s1) {
        case 1:
        case 2:
        case 3:
            SysMatrix_InsertXRotation_s((arg0 + (phi_s1 * 2))->unk25A, 1);
            break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            temp_f12 = (arg0 + -phi_s3)->unk28C + 1.0f;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            break;
        }
        temp_v0 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        temp_v0->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_2 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->words.w1 = *phi_s7;
        SysMatrix_StatePop();
        temp_s1 = phi_s1 + 1;
        phi_s4 += 4;
        phi_s5 += 4;
        phi_s6 += 4;
        phi_s1 = temp_s1;
        phi_s3 += 4;
        phi_s7 += 4;
    } while (temp_s1 != 0xA);
}

void EnZod_Draw(EnZod *this, GlobalContext *globalCtx) {
    Gfx *sp30;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    EnZod *this = (EnZod *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    if ((this->unk256 & 2) != 0) {
        temp_s1->polyOpa.p = Gfx_SetFog(temp_s1->polyOpa.p, 0, 0, 0, 0, (s32) (s16) this->unk29A, 0x3E8);
    }
    temp_v1 = temp_s1->polyOpa.p;
    temp_v1->words.w0 = 0xDB060020;
    sp30 = temp_v1;
    temp_v1->words.w1 = Lib_SegmentedToVirtual(*(&D_80BB062C + (this->unk24C * 4)));
    temp_v1->unk8 = 0xDB060024;
    sp30 = temp_v1;
    temp_v1->unkC = Lib_SegmentedToVirtual(&D_06007650);
    temp_s1->polyOpa.p = temp_v1 + 0x10;
    func_80BB01B0(this, (GraphicsContext **) globalCtx);
    SkelAnime_DrawSV(globalCtx, this->unk1BC.skeleton, this->unk1BC.limbDrawTbl, (s32) this->unk1BC.dListCount, func_80BB0128, func_80BB0170, (Actor *) this);
    if ((this->unk256 & 2) != 0) {
        temp_s1->polyOpa.p = func_801660B8(globalCtx, temp_s1->polyOpa.p);
    }
}
