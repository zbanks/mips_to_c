typedef struct EnCow {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ ColliderCylinder unk_190;           /* inferred */
    /* 0x1DC */ SkelAnime unk_1DC;                  /* inferred */
    /* 0x220 */ Vec3s unk_220;                      /* inferred */
    /* 0x226 */ char pad_226[0x1E];                 /* maybe part of unk_220[6]? */
    /* 0x244 */ Vec3s unk_244;                      /* inferred */
    /* 0x24A */ char pad_24A[0x1E];                 /* maybe part of unk_244[6]? */
    /* 0x268 */ s16 unk_268;                        /* inferred */
    /* 0x26A */ s16 unk_26A;                        /* inferred */
    /* 0x26C */ char pad_26C[0x2];
    /* 0x26E */ u16 unk_26E;                        /* inferred */
    /* 0x270 */ u16 unk_270;                        /* inferred */
    /* 0x272 */ s16 unk_272;                        /* inferred */
    /* 0x274 */ void (*actionFunc)(EnCow *, GlobalContext *);
} EnCow;                                            /* size = 0x278 */

struct _mips2c_stack_EnCow_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnCow_Draw {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnCow_Init {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ SkelAnime *sp40;                     /* inferred */
    /* 0x44 */ char pad_44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EnCow_Update {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ PosRot *sp30;                        /* inferred */
    /* 0x34 */ CollisionCheckContext *sp34;         /* inferred */
    /* 0x38 */ char pad_38[0x8];                    /* maybe part of sp34[3]? */
    /* 0x40 */ Actor *sp40;                         /* inferred */
    /* 0x44 */ s16 sp44;                            /* inferred */
    /* 0x46 */ s16 sp46;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_8099C290 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8099C328 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8099C41C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8099C880 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8099CAA8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8099CB20 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8099CB68 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8099CBCC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8099CC68 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8099CCF8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8099CDA0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8099CFAC {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8099D3C0 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8099D4AC {};              /* size 0x0 */

struct _mips2c_stack_func_8099D4FC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8099D59C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

? func_801A5080(?);                                 /* extern */
s32 func_801A5100(GlobalContext *);                 /* extern */
void func_8099C290(f32 *arg0, s16 arg1, EnCow *);   /* static */
void func_8099C328(EnCow *arg0);                    /* static */
void func_8099C41C(EnCow *arg0);                    /* static */
void func_8099C880(EnCow *arg0, GlobalContext *arg1); /* static */
void func_8099D3C0(Actor *this, GlobalContext *globalCtx); /* static */
s32 func_8099D4AC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_8099D4FC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_8099D59C(Actor *this, GlobalContext *globalCtx); /* static */
extern AnimationHeader D_060001CC;
extern FlexSkeletonHeader D_06004010;
extern AnimationHeaderCommon D_06004264;
extern AnimationHeader D_06004348;
extern FlexSkeletonHeader D_06004C30;
extern AnimationHeaderCommon D_06004E98;
extern s32 D_801BDAA4;
static ColliderCylinderInit D_8099D610 = {
    {0xA, 0, 0x11, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x1E, 0x28, 0, {0, 0, 0}},
};
static Vec3f D_8099D63C = {0.0f, -1300.0f, 1100.0f};

void func_8099C290(f32 *arg0, s16 arg1) {
    f32 sp24;
    f32 sp20;

    sp20 = Math_CosS(arg1);
    sp24 = (Math_SinS(arg1) * arg0[2]) + (sp20 * arg0->unk_0);
    sp20 = Math_SinS(arg1);
    arg0[2] = (Math_CosS(arg1) * arg0[2]) + (-sp20 * arg0->unk_0);
    arg0->unk_0 = sp24;
}

void func_8099C328(EnCow *arg0) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    EnCow *temp_a2;
    f32 *temp_a0;
    s16 temp_a1;

    temp_a2 = arg0;
    sp20 = 0.0f;
    sp1C = 0.0f;
    sp24 = 30.0f;
    temp_a1 = temp_a2->actor.shape.rot.y;
    arg0 = temp_a2;
    func_8099C290(&sp1C, temp_a1, temp_a2);
    temp_a0 = &sp1C;
    arg0->unk_144.dim.pos.y = (s16) (s32) arg0->actor.world.pos.y;
    arg0->unk_144.dim.pos.x = (s16) (s32) (arg0->actor.world.pos.x + sp1C);
    arg0->unk_144.dim.pos.z = (s16) (s32) (arg0->actor.world.pos.z + sp24);
    sp1C = 0.0f;
    sp20 = 0.0f;
    sp24 = -20.0f;
    func_8099C290(temp_a0, arg0->actor.shape.rot.y, arg0);
    arg0->unk_190.dim.pos.y = (s16) (s32) arg0->actor.world.pos.y;
    arg0->unk_190.dim.pos.x = (s16) (s32) (arg0->actor.world.pos.x + sp1C);
    arg0->unk_190.dim.pos.z = (s16) (s32) (arg0->actor.world.pos.z + sp24);
}

void func_8099C41C(EnCow *arg0) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    EnCow *temp_a2;
    s16 temp_a1;

    temp_a2 = arg0;
    sp20 = 57.0f;
    sp24 = -36.0f;
    sp1C = 0.0f;
    temp_a1 = temp_a2->actor.shape.rot.y;
    arg0 = temp_a2;
    func_8099C290(&sp1C, temp_a1, temp_a2);
    arg0->actor.world.pos.x += sp1C;
    arg0->actor.world.pos.y += 57.0f;
    arg0->actor.world.pos.z += sp24;
}

void EnCow_Init(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *sp40;
    SkelAnime *temp_a1;
    SkelAnime *temp_a1_2;
    s32 temp_v0;
    EnCow *this = (EnCow *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 72.0f);
    temp_v0 = this->actor.params & 0xF;
    temp_a1 = &this->unk_1DC;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 == 2) {
                goto block_3;
            }
            goto block_9;
        }
        temp_a1_2 = &this->unk_1DC;
        sp40 = temp_a1_2;
        SkelAnime_InitSV(globalCtx, temp_a1_2, &D_06004C30, NULL, &this->unk_220, &this->unk_244, 6);
        SkelAnime_ChangeAnimDefaultRepeat(sp40, &D_06004348);
        this->actor.update = func_8099D3C0;
        this->actor.draw = func_8099D59C;
        this->actionFunc = func_8099CFAC;
        func_8099C41C(this);
        this->actor.flags &= -2;
        this->unk_270 = (u16) (u32) (Rand_ZeroFloat(1000.0f) + 40.0f);
        goto block_9;
    }
block_3:
    sp40 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06004010, NULL, &this->unk_220, &this->unk_244, 6);
    SkelAnime_ChangeAnimDefaultRepeat(sp40, &D_060001CC);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_144, (Actor *) this, &D_8099D610);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_190, (Actor *) this, &D_8099D610);
    func_8099C328(this);
    this->actionFunc = func_8099CDA0;
    if (((gSaveContext.weekEventReg[22] & 1) == 0) && (((s32) gSaveContext.day % 5) != 1) && ((this->actor.params & 0xF) == 2)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0xF3, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) (s32) this->actor.shape.rot.y, (s16) 0, 1);
    this->unk_270 = (u16) (u32) (Rand_ZeroFloat(1000.0f) + 40.0f);
    this->unk_272 = 0;
    this->actor.targetMode = 6;
    D_801BDAA4 = 0;
    func_801A5080(4);
block_9:
    this->actor.colChkInfo.mass = 0xFF;
    Actor_SetScale((Actor *) this, 0.01f);
    this->unk_26E = 0;
    gSaveContext.weekEventReg[87] &= 0xFE;
}

void EnCow_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *temp_a1;
    EnCow *this = (EnCow *) thisx;

    temp_a1 = &this->unk_144;
    if (this->actor.params == 0) {
        this = this;
        Collider_DestroyCylinder(globalCtx, temp_a1);
        Collider_DestroyCylinder(globalCtx, &this->unk_190);
    }
}

void func_8099C880(EnCow *arg0, GlobalContext *arg1) {
    s32 temp_v0_3;
    u16 temp_t5;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_4;
    s32 phi_v0;

    temp_v0 = arg0->unk_270;
    if ((s32) temp_v0 > 0) {
        arg0->unk_270 = temp_v0 - 1;
    } else {
        arg0->unk_270 = (u16) (u32) (Rand_ZeroFloat(500.0f) + 40.0f);
        SkelAnime_ChangeAnim(arg0 + 0x1DC, &D_060001CC, 1.0f, arg0->unk_1DC.animCurrentFrame, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060001CC), (u8) 2, 1.0f);
    }
    if (arg0->actor.xzDistToPlayer < 150.0f) {
        temp_v0_2 = arg0->unk_26E;
        if ((temp_v0_2 & 2) == 0) {
            arg0->unk_26E = temp_v0_2 | 2;
            if (&D_060001CC == arg0->unk_1DC.animCurrentSeg) {
                arg0->unk_270 = 0;
            }
        }
    }
    temp_t5 = arg0->unk_272 + 1;
    temp_v0_3 = temp_t5 & 0xFFFF;
    arg0->unk_272 = temp_t5;
    phi_v0 = temp_v0_3;
    if (temp_v0_3 >= 0x31) {
        arg0->unk_272 = 0;
        phi_v0 = 0 & 0xFFFF;
    }
    if (phi_v0 < 0x20) {
        arg0->actor.scale.x = ((Math_SinS((s16) ((s32) (phi_v0 << 0x1A) >> 0x10)) * 0.01f) + 1.0f) * 0.01f;
    } else {
        arg0->actor.scale.x = 0.01f;
    }
    temp_v0_4 = arg0->unk_272;
    if ((s32) temp_v0_4 >= 0x11) {
        arg0->actor.scale.y = ((Math_SinS((s16) ((temp_v0_4 << 0xA) - 0x4000)) * 0.01f) + 1.0f) * 0.01f;
        return;
    }
    arg0->actor.scale.y = 0.01f;
}

void func_8099CAA8(EnCow *this, GlobalContext *globalCtx) {
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        this->actor.flags &= 0xFFFEFFFF;
        func_801477B4(globalCtx);
        this->actionFunc = func_8099CDA0;
    }
}

void func_8099CB20(EnCow *this, GlobalContext *globalCtx) {
    if (func_800B867C((Actor *) this, globalCtx) != 0) {
        this->actor.flags &= 0xFFFEFFFF;
        this->actionFunc = func_8099CDA0;
    }
}

void func_8099CB68(EnCow *this, GlobalContext *globalCtx) {
    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        this->actor.parent = NULL;
        this->actionFunc = func_8099CB20;
        return;
    }
    func_800B8A1C((Actor *) this, globalCtx, 0x92, 10000.0f, 100.0f);
}

void func_8099CBCC(EnCow *this, GlobalContext *globalCtx) {
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        this->actor.flags &= 0xFFFEFFFF;
        func_801477B4(globalCtx);
        this->actionFunc = func_8099CB68;
        func_800B8A1C((Actor *) this, globalCtx, 0x92, 10000.0f, 100.0f);
    }
}

void func_8099CC68(EnCow *this, GlobalContext *globalCtx) {
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        if (func_80114E90() != 0) {
            func_80151938(globalCtx, 0x32C9U);
            this->actionFunc = func_8099CBCC;
            return;
        }
        func_80151938(globalCtx, 0x32CAU);
        this->actionFunc = func_8099CAA8;
        /* Duplicate return node #5. Try simplifying control flow for better match */
    }
}

void func_8099CCF8(EnCow *this, GlobalContext *globalCtx) {
    EnCow *temp_a0;
    u16 temp_v0;
    EnCow *phi_a0;

    temp_a0 = this;
    phi_a0 = temp_a0;
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        temp_v0 = temp_a0->actor.textId;
        if (temp_v0 == 0x32C8) {
            temp_a0->actionFunc = func_8099CC68;
        } else if (temp_v0 == 0x32C9) {
            temp_a0->actionFunc = func_8099CBCC;
        } else {
            temp_a0->actionFunc = func_8099CAA8;
        }
    } else {
        temp_a0->actor.flags |= 0x10000;
        this = temp_a0;
        func_800B8614((Actor *) temp_a0, globalCtx, 170.0f);
        this->actor.textId = 0x32C8;
        phi_a0 = this;
    }
    func_8099C880(phi_a0, globalCtx);
}

void func_8099CDA0(EnCow *this, GlobalContext *globalCtx) {
    EnCow *temp_a0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    u16 temp_a1;
    u16 temp_v0;
    u8 temp_v0_4;
    s32 phi_v1;
    s32 phi_v1_2;
    GlobalContext *phi_a1;

    temp_v0 = globalCtx->msgCtx.unk1202A;
    phi_a1 = globalCtx;
    if ((temp_v0 == 0) || (temp_v0 == 4)) {
        if (D_801BDAA4 != 0) {
            temp_a1 = this->unk_26E;
            phi_a1 = (GlobalContext *) temp_a1;
            if ((temp_a1 & 4) != 0) {
                this->unk_26E = temp_a1 & 0xFFFB;
                D_801BDAA4 = 0;
                goto block_12;
            }
            if (this->actor.xzDistToPlayer < 150.0f) {
                temp_v0_2 = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
                phi_v1 = (s32) temp_v0_2;
                if ((s32) temp_v0_2 < 0) {
                    phi_v1 = -(s32) temp_v0_2;
                }
                if (phi_v1 < 0x61A8) {
                    D_801BDAA4 = 0;
                    this->actionFunc = func_8099CCF8;
                    this->actor.flags |= 0x10000;
                    func_800B8614((Actor *) this, globalCtx, 170.0f);
                    this->actor.textId = 0x32C8;
                    func_8099C880(this, globalCtx);
                    return;
                }
                goto block_10;
            }
block_10:
            this->unk_26E = temp_a1 | 4;
            goto block_12;
        }
        this->unk_26E &= 0xFFFB;
        goto block_12;
    }
block_12:
    if (this->actor.xzDistToPlayer < 150.0f) {
        temp_v0_3 = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        phi_v1_2 = (s32) temp_v0_3;
        if ((s32) temp_v0_3 < 0) {
            phi_v1_2 = -(s32) temp_v0_3;
        }
        if (phi_v1_2 < 0x61A8) {
            if (func_801A5100(phi_a1) == 4) {
                temp_v0_4 = gSaveContext.weekEventReg[87];
                if ((temp_v0_4 & 1) == 0) {
                    gSaveContext.weekEventReg[87] = temp_v0_4 | 1;
                    this = this;
                    temp_a0 = this;
                    if (func_80114E90() != 0) {
                        temp_a0->actor.textId = 0x32C9;
                    } else {
                        temp_a0->actor.textId = 0x32CA;
                    }
                    temp_a0->actor.flags |= 0x10000;
                    this = temp_a0;
                    func_800B8614((Actor *) temp_a0, globalCtx, 170.0f);
                    this->actionFunc = func_8099CCF8;
                }
            } else {
                gSaveContext.weekEventReg[87] &= 0xFE;
            }
        }
    }
    func_8099C880(this, globalCtx);
}

void func_8099CFAC(EnCow *this, GlobalContext *globalCtx) {
    s16 temp_v0_2;
    u16 temp_v0;
    u16 temp_v0_3;
    s32 phi_v1;

    temp_v0 = this->unk_270;
    if ((s32) temp_v0 > 0) {
        this->unk_270 = temp_v0 - 1;
    } else {
        this->unk_270 = (u16) (u32) (Rand_ZeroFloat(200.0f) + 40.0f);
        SkelAnime_ChangeAnim(&this->unk_1DC, &D_06004348, 1.0f, this->unk_1DC.animCurrentFrame, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06004348), (u8) 2, 1.0f);
    }
    if (this->actor.xzDistToPlayer < 150.0f) {
        temp_v0_2 = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        phi_v1 = (s32) temp_v0_2;
        if ((s32) temp_v0_2 < 0) {
            phi_v1 = -(s32) temp_v0_2;
        }
        if (phi_v1 >= 0x61A9) {
            temp_v0_3 = this->unk_26E;
            if ((temp_v0_3 & 2) == 0) {
                this->unk_26E = temp_v0_3 | 2;
                if (&D_06004348 == this->unk_1DC.animCurrentSeg) {
                    this->unk_270 = 0;
                }
            }
        }
    }
}

void EnCow_Update(Actor *thisx, GlobalContext *globalCtx) {
    s16 sp46;
    s16 sp44;
    Actor *sp40;
    CollisionCheckContext *sp34;
    PosRot *sp30;
    Actor *temp_t6;
    CollisionCheckContext *temp_a1;
    GlobalContext *temp_a3;
    PosRot *temp_a0_2;
    PosRot *temp_a0_3;
    PosRot *temp_a1_2;
    PosRot *temp_a1_3;
    SkelAnime *temp_a0;
    s16 temp_v1;
    s32 phi_v1;
    s16 phi_v1_2;
    s16 phi_a1;
    EnCow *this = (EnCow *) thisx;

    temp_a3 = globalCtx;
    temp_t6 = temp_a3->actorCtx.actorList[2].first;
    temp_a1 = &temp_a3->colChkCtx;
    sp34 = temp_a1;
    globalCtx = temp_a3;
    sp40 = temp_t6;
    CollisionCheck_SetOC(temp_a3, temp_a1, (Collider *) &this->unk_144);
    CollisionCheck_SetOC(globalCtx, temp_a1, (Collider *) &this->unk_190);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
    temp_a0 = &this->unk_1DC;
    sp34 = (CollisionCheckContext *) temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        if (&D_060001CC == this->unk_1DC.animCurrentSeg) {
            Audio_PlayActorSound2((Actor *) this, 0x28DFU);
            SkelAnime_ChangeAnim((SkelAnime *) sp34, (AnimationHeader *) &D_06004264, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06004264), (u8) 2, 1.0f);
        } else {
            SkelAnime_ChangeAnim((SkelAnime *) sp34, &D_060001CC, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060001CC), (u8) 0, 1.0f);
        }
    }
    this->actionFunc(this, globalCtx);
    temp_a1_2 = &sp40->world;
    temp_a0_2 = &this->actor.world;
    if (this->actor.xzDistToPlayer < 150.0f) {
        sp34 = (CollisionCheckContext *) temp_a0_2;
        sp30 = temp_a1_2;
        if (Math_Vec3f_Yaw((Vec3f *) temp_a0_2, (Vec3f *) temp_a1_2) < 0) {
            phi_v1 = -Math_Vec3f_Yaw((Vec3f *) temp_a0_2, (Vec3f *) temp_a1_2);
        } else {
            phi_v1 = Math_Vec3f_Yaw((Vec3f *) temp_a0_2, (Vec3f *) temp_a1_2);
        }
        if (phi_v1 < 0xC000) {
            temp_a0_3 = &this->actor.focus;
            temp_a1_3 = &sp40->focus;
            sp30 = temp_a1_3;
            sp34 = (CollisionCheckContext *) temp_a0_3;
            sp46 = Math_Vec3f_Pitch((Vec3f *) temp_a0_3, (Vec3f *) temp_a1_3);
            temp_v1 = Math_Vec3f_Yaw((Vec3f *) temp_a0_3, (Vec3f *) temp_a1_3) - this->actor.shape.rot.y;
            phi_v1_2 = temp_v1;
            phi_a1 = sp46;
            if ((s32) sp46 >= 0x1001) {
                phi_a1 = 0x1000;
            } else if ((s32) sp46 < -0x1000) {
                phi_a1 = -0x1000;
            }
            if ((s32) temp_v1 >= 0x2501) {
                phi_v1_2 = 0x2500;
            } else if ((s32) temp_v1 < -0x2500) {
                phi_v1_2 = -0x2500;
            }
            sp44 = phi_v1_2;
        } else {
            goto block_18;
        }
    } else {
block_18:
        sp44 = 0;
        phi_a1 = 0;
    }
    Math_SmoothStepToS(&this->unk_268, phi_a1, 0xA, 0xC8, (s16) 0xA);
    Math_SmoothStepToS(&this->unk_26A, sp44, 0xA, 0xC8, (s16) 0xA);
}

void func_8099D3C0(Actor *this, GlobalContext *globalCtx) {
    f32 *sp30;
    f32 *temp_a0;

    temp_a0 = &this[1].xzDistToPlayer;
    sp30 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix((SkelAnime *) temp_a0) != 0) {
        if (&D_06004348 == this[1].colChkInfo.damageTable) {
            SkelAnime_ChangeAnim((SkelAnime *) sp30, (AnimationHeader *) &D_06004E98, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06004E98), (u8) 2, 1.0f);
            this[1].init(this, globalCtx);
            return;
        }
        SkelAnime_ChangeAnim((SkelAnime *) sp30, &D_06004348, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06004348), (u8) 0, 1.0f);
        /* Duplicate return node #4. Try simplifying control flow for better match */
        this[1].init(this, globalCtx);
        return;
    }
    this[1].init(this, globalCtx);
}

s32 func_8099D4AC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 2) {
        arg4->y += arg5->unk_26A;
        arg4->x += arg5->unk_268;
    }
    if (arg1 == 5) {
        *arg2 = NULL;
    }
    return 0;
}

void func_8099D4FC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 2) {
        SysMatrix_MultiplyVector3fByState(&D_8099D63C, arg4 + 0x3C);
    }
}

void EnCow_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnCow *this = (EnCow *) thisx;
    func_8012C5B0(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk_1DC.skeleton, this->unk_1DC.limbDrawTbl, (s32) this->unk_1DC.dListCount, func_8099D4AC, func_8099D4FC, (Actor *) this);
}

void func_8099D59C(Actor *this, GlobalContext *globalCtx) {
    func_8012C5B0(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, (bitwise void **) this[1].yDistToPlayer, this->unk_1FC, (s32) this->unk_1DE, NULL, NULL, this);
}
