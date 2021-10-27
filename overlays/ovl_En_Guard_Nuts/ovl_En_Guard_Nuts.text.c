typedef struct EnGuardNuts {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x3C];                 /* maybe part of unk_188[11]? */
    /* 0x1CA */ Vec3s unk_1CA;                      /* inferred */
    /* 0x1D0 */ char pad_1D0[0x3C];                 /* maybe part of unk_1CA[11]? */
    /* 0x20C */ void (*actionFunc)(EnGuardNuts *, GlobalContext *);
    /* 0x210 */ s16 unk_210;                        /* inferred */
    /* 0x212 */ s16 unk_212;                        /* inferred */
    /* 0x214 */ s16 unk_214;                        /* inferred */
    /* 0x216 */ char pad_216[0x2];
    /* 0x218 */ s32 unk_218;                        /* inferred */
    /* 0x21C */ s16 unk_21C;                        /* inferred */
    /* 0x21E */ s16 unk_21E;                        /* inferred */
    /* 0x220 */ char pad_220[0x8];                  /* maybe part of unk_21E[5]? */
    /* 0x228 */ Vec3f unk_228;                      /* inferred */
    /* 0x234 */ s16 unk_234;                        /* inferred */
    /* 0x236 */ s16 unk_236;                        /* inferred */
    /* 0x238 */ char pad_238[0x2];
    /* 0x23A */ s16 unk_23A;                        /* inferred */
    /* 0x23C */ s16 unk_23C;                        /* inferred */
    /* 0x23E */ char pad_23E[0x6];                  /* maybe part of unk_23C[4]? */
    /* 0x244 */ ColliderCylinder unk_244;           /* inferred */
} EnGuardNuts;                                      /* size = 0x290 */

struct _mips2c_stack_EnGuardNuts_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnGuardNuts_Draw {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnGuardNuts_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnGuardNuts_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80ABB210 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80ABB29C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ABB2D4 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s16 sp28;                            /* inferred */
    /* 0x2A */ char pad_2A[0x2];
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80ABB540 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ABB590 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ MessageContext *sp2C;                /* inferred */
    /* 0x30 */ char pad_30[0x6];                    /* maybe part of sp2C[2]? */
    /* 0x36 */ s16 sp36;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80ABB854 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80ABB91C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80ABB990 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80ABBC60 {};              /* size 0x0 */

void func_80ABB210(Actor *arg0, s32 arg1, s32, s16); /* static */
void func_80ABB29C(EnGuardNuts *arg0);              /* static */
void func_80ABB2D4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80ABB540(Actor *arg0);                    /* static */
void func_80ABB590(Actor *arg0, GlobalContext *arg1); /* static */
void func_80ABB854(EnGuardNuts *arg0, GlobalContext *arg1, s32); /* static */
void func_80ABB91C(Actor *actor, Lights *mapper, GlobalContext *globalCtx); /* static */
void func_80ABB990(Actor *actor, Lights *mapper, GlobalContext *globalCtx); /* static */
s32 func_80ABBC60(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
extern ? D_06002700;
extern SkeletonHeader D_06002848;
extern AnimationHeader D_06002A08;
static ColliderCylinderInit D_80ABBDF0 = {
    {0xA, 0, 0, 9, 0x20, 1},
    {0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 9},
    {0x32, 0x32, 0, {0, 0, 0}},
};
static s32 D_80ABBE1C = 0;
static s32 D_80ABBE20 = 0;
static ? D_80ABBE24;                                /* unable to generate initializer */
static ? D_80ABBE38;                                /* unable to generate initializer */
static ? D_80ABBE4C;                                /* unable to generate initializer */
static ? D_80ABBE5C;                                /* unable to generate initializer */
static ? D_80ABBE60;                                /* unable to generate initializer */

void EnGuardNuts_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnGuardNuts *this = (EnGuardNuts *) thisx;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    SkelAnime_Init(globalCtx, &this->unk_144, &D_06002848, &D_06002A08, &this->unk_188, &this->unk_1CA, 0xB);
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.targetMode = 1;
    Collider_InitAndSetCylinder(globalCtx, &this->unk_244, (Actor *) this, &D_80ABBDF0);
    Actor_SetScale((Actor *) this, 0.015f);
    Math_Vec3f_Copy(&this->unk_228, (Vec3f *) &this->actor.world);
    this->unk_21E = (s16) D_80ABBE1C;
    D_80ABBE1C += 1;
    if ((gSaveContext.weekEventReg[23] & 0x20) == 0) {
        func_80ABB29C(this);
        return;
    }
    func_80ABB854(this, globalCtx);
}

void EnGuardNuts_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnGuardNuts *this = (EnGuardNuts *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_244);
}

void func_80ABB210(Actor *arg0, s32 arg1) {
    f32 temp_f0;
    s32 temp_v1;

    arg0[1].shape.feetPos[0].x = arg1;
    temp_f0 = (f32) SkelAnime_GetFrameCount(*(&D_80ABBE4C + (arg1 * 4)));
    temp_v1 = arg0[1].shape.feetPos[0].x;
    arg0[1].uncullZoneForward = temp_f0;
    SkelAnime_ChangeAnim(arg0 + 0x144, *(&D_80ABBE4C + (temp_v1 * 4)), 1.0f, 0.0f, temp_f0, (u8) (s32) *(&D_80ABBE5C + temp_v1), -2.0f);
}

void func_80ABB29C(EnGuardNuts *arg0) {
    func_80ABB210(NULL);
    arg0->unk_21C = 0;
    arg0->actionFunc = func_80ABB2D4;
}

void func_80ABB2D4(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    s16 sp28;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_a2;
    s32 temp_v0;
    s32 phi_a2;
    s16 phi_a1;
    s32 phi_v1;
    s32 phi_a2_2;

    sp2C = arg1->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    temp_v1 = arg0->yawTowardsPlayer - arg0->home.rot.y;
    phi_a2 = temp_v1 << 0x10;
    if ((s32) temp_v1 < 0) {
        phi_a2 = (s32) temp_v1 * -0x10000;
    }
    temp_a2 = phi_a2 >> 0x10;
    sp28 = (s16) temp_a2;
    if (func_800B84D0(arg0, arg1) != 0) {
        func_80ABB540(arg0);
        return;
    }
    if (temp_a2 >= 0x6001) {
        D_80ABBE20 = 2;
    }
    phi_v1 = 1;
    phi_a2_2 = 3;
    if (sp2C->unk_14B == 3) {
        arg0[1].shape.feetPos[0].z = 0.0f;
        if (((gSaveContext.weekEventReg[17] & 4) != 0) && (arg0->unk_224 == 0)) {
            arg0[1].shape.feetPos[0].z = 1e-44.0f;
        } else if ((gSaveContext.weekEventReg[12] & 0x40) != 0) {
            arg0[1].shape.feetPos[0].z = 6e-45.0f;
        }
    } else {
        arg0[1].shape.feetPos[0].z = (bitwise f32) 3;
    }
    arg0->textId = *(&D_80ABBE24 + ((bitwise s32) arg0[1].shape.feetPos[0].z * 2));
    temp_v0 = D_80ABBE20;
    phi_a1 = arg0->world.rot.y;
    if (temp_v0 == 2) {
        func_80ABB854((EnGuardNuts *) arg0, arg1, 3);
        return;
    }
    if (temp_v0 == 1) {
        if ((bitwise s32) arg0[1].shape.feetPos[0].x != 1) {
            func_80ABB210(arg0, 1, 3);
        }
        phi_a1 = (s16) (arg0->home.rot.y + 0x8000);
        phi_v1 = 1;
        phi_a2_2 = 3;
    }
    if (fabsf((f32) (arg0->shape.rot.y - phi_a1)) < 100.0f) {
        arg0->shape.rot.y = phi_a1;
        if ((phi_v1 == D_80ABBE20) && (phi_a2_2 != (bitwise s32) arg0[1].shape.feetPos[0].x)) {
            func_80ABB210(arg0, 3, phi_a2_2, 0xBB8);
        }
    } else {
        Math_SmoothStepToS(&arg0->shape.rot.y, phi_a1, 1, 0xBB8, (s16) 0);
    }
    if (arg0->unk_23A == 0) {
        temp_v1_2 = arg0->world.rot.y;
        temp_v0_2 = arg0->yawTowardsPlayer;
        if (fabsf((f32) temp_v1_2 - (f32) temp_v0_2) < 10000.0f) {
            arg0->unk_23C = (s16) (temp_v1_2 - temp_v0_2);
            arg0->unk_23C = (s16) -(s32) arg0->unk_23C;
        }
    }
    func_800B8614(arg0, arg1, 70.0f);
}

void func_80ABB540(Actor *arg0) {
    func_80ABB210((Actor *)1);
    arg0->unk_23C = 0;
    arg0->unk_214 = 0x10;
    arg0->unk_21C = 1;
    arg0[1].shape.shadowDraw = func_80ABB590;
    arg0->unk_23A = (s16) arg0->unk_23C;
}

void func_80ABB590(Actor *arg0, GlobalContext *arg1) {
    s16 sp36;
    MessageContext *sp2C;
    MessageContext *temp_a0;
    f32 temp_v0;
    f32 temp_v0_2;
    s16 temp_v1;
    s32 temp_t6;
    s16 phi_v0;

    phi_v0 = arg0->yawTowardsPlayer;
    if (D_80ABBE20 == 1) {
        phi_v0 = (s16) (arg0->home.rot.y + 0x8000);
    }
    if (fabsf((f32) (arg0->shape.rot.y - phi_v0)) < 100.0f) {
        arg0->shape.rot.y = phi_v0;
        if ((arg0->unk_15C < arg0[1].uncullZoneForward) || (arg0[1].shape.feetPos[0].z >= 7)) {
            SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
        }
    } else {
        sp36 = phi_v0;
        SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
        Math_SmoothStepToS(arg0 + 0xBE, sp36, 1, 0xBB8, (s16) 0);
    }
    temp_a0 = arg1 + 0x4908;
    sp2C = temp_a0;
    if (func_80152498(temp_a0) == 5) {
        arg0->unk_23C = 0;
        arg0->unk_23A = 0;
        if ((arg0[1].shape.feetPos[0].z == 3) && (arg0[1].shape.feetPos[0].x == 0)) {
            func_80ABB210(arg0, 0);
        }
        if (func_80147624(arg1) != 0) {
            temp_v0 = arg0[1].shape.feetPos[0].z;
            temp_v1 = *(&D_80ABBE38 + ((bitwise s32) temp_v0 * 2));
            if (temp_v1 != 1) {
                temp_t6 = (bitwise s32) temp_v0 + 1;
                if (temp_v1 == 2) {
                    func_801477B4(arg1);
                    D_80ABBE20 = 2;
                    gSaveContext.weekEventReg[12] |= 0x40;
                    func_80ABB854((EnGuardNuts *) arg0, arg1);
                    return;
                }
                arg0[1].shape.feetPos[0].z = (bitwise f32) temp_t6;
                func_801518B0(arg1, *(&D_80ABBE24 + (temp_t6 * 2)), arg0);
                if (*(&D_80ABBE38 + ((bitwise s32) arg0[1].shape.feetPos[0].z * 2)) == 2) {
                    D_80ABBE20 = 1;
                }
                arg0->unk_214 = 0x10;
                return;
            }
            if ((bitwise s32) temp_v0 != 3) {
                arg0->unk_23A = 0;
                arg0->unk_23C = (s16) arg0->unk_23A;
                func_801477B4(arg1);
                arg0->unk_21C = 4;
                arg0[1].shape.shadowDraw = func_80ABB990;
                return;
            }
            func_801477B4(arg1);
            func_80ABB29C((EnGuardNuts *) arg0);
            return;
        }
        /* Duplicate return node #30. Try simplifying control flow for better match */
        return;
    }
    if ((func_80152498(temp_a0) >= 3) && (D_80ABBE20 == 0)) {
        temp_v0_2 = arg0[1].shape.feetPos[0].z;
        if (((bitwise s32) temp_v0_2 == 0) || ((bitwise s32) temp_v0_2 == 3) || ((bitwise s32) temp_v0_2 >= 7)) {
            if (arg0->unk_214 == 0) {
                arg0->unk_214 = 2;
                arg0->unk_23C = (s16) (arg0->unk_23C ^ 0x2000);
                return;
            }
            /* Duplicate return node #30. Try simplifying control flow for better match */
            return;
        }
        if (arg0->unk_214 == 0) {
            arg0->unk_214 = 2;
            arg0->unk_23A = (s16) (arg0->unk_23A ^ 0x2000);
        }
        /* Duplicate return node #30. Try simplifying control flow for better match */
    }
}

void func_80ABB854(Actor *arg0, GlobalContext *arg1) {
    f32 sp40;
    ? sp3C;

    func_80ABB210(arg0, 2);
    Math_Vec3f_Copy((Vec3f *) &sp3C, (Vec3f *) &arg0->world);
    sp40 = arg0->floorHeight;
    EffectSsHahen_SpawnBurst(arg1, (Vec3f *) &sp3C, 4.0f, 0, (s16) 0xA, (s16) 3, (s16) 0xF, (s16) -1, (s16) 0xA, NULL);
    arg0->unk_23C = 0;
    arg0->flags |= 0x8000000;
    arg0->unk_23A = (s16) arg0->unk_23C;
    Audio_PlayActorSound2(arg0, 0x387DU);
    Audio_PlayActorSound2(arg0, 0x387CU);
    arg0[1].shape.shadowDraw = func_80ABB91C;
}

void func_80ABB91C(Actor *actor, Lights *mapper, GlobalContext *globalCtx) {
    f32 sp1C;
    Actor *temp_a1;
    f32 temp_f4;
    s16 temp_v0;

    temp_a1 = actor;
    temp_f4 = temp_a1->unk_15C;
    actor = temp_a1;
    sp1C = temp_f4;
    SkelAnime_FrameUpdateMatrix((SkelAnime *) &temp_a1[1]);
    if (actor[1].uncullZoneForward <= sp1C) {
        temp_v0 = actor->home.rot.y;
        actor->unk_21C = 3;
        actor[1].shape.shadowDraw = func_80ABB990;
        actor->world.rot.y = temp_v0;
        actor->shape.rot.y = temp_v0;
    }
}

void func_80ABB990(Actor *actor, Lights *mapper, GlobalContext *globalCtx) {
    f32 sp44;
    ? sp40;
    s16 temp_v0;
    s32 phi_v1;

    if ((gSaveContext.weekEventReg[23] & 0x20) == 0) {
        temp_v0 = actor->yawTowardsPlayer - actor->home.rot.y;
        phi_v1 = temp_v0 << 0x10;
        if ((s32) temp_v0 < 0) {
            phi_v1 = (s32) temp_v0 * -0x10000;
        }
        if (((phi_v1 >> 0x10) < 0x4000) && ((D_80ABBE20 == 0) || (actor->xzDistToPlayer > 150.0f))) {
            Math_Vec3f_Copy((Vec3f *) &sp40, (Vec3f *) &actor->world);
            sp44 = actor->floorHeight;
            EffectSsHahen_SpawnBurst((GlobalContext *) mapper, (Vec3f *) &sp40, 4.0f, 0, (s16) 0xA, (s16) 3, (s16) 0xF, (s16) -1, (s16) 0xA, NULL);
            Audio_PlayActorSound2(actor, 0x387CU);
            D_80ABBE20 = 0;
            if ((bitwise s32) actor[1].shape.feetPos[0].z == 9) {
                actor->unk_224 = 1;
            }
            actor->flags &= 0xF7FFFFFF;
            func_80ABB29C((EnGuardNuts *) actor);
        }
    }
}

void EnGuardNuts_Update(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *sp2C;
    ColliderCylinder *temp_a2;
    SkelAnime *temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    EnGuardNuts *this = (EnGuardNuts *) thisx;

    if (this->unk_212 == 0) {
        this->unk_210 += 1;
        if ((s32) this->unk_210 >= 3) {
            this->unk_210 = 0;
            this->unk_212 = (s32) Rand_ZeroFloat(60.0f) + 0x14;
        }
    }
    temp_a0 = &this->unk_144;
    if ((this->unk_218 == 1) && ((sp2C = temp_a0, (func_801378B8(temp_a0, 1.0f) != 0)) || (func_801378B8(temp_a0, 5.0f) != 0))) {
        Audio_PlayActorSound2((Actor *) this, 0x387FU);
    }
    this->actionFunc(this, globalCtx);
    Actor_SetHeight((Actor *) this, 40.0f);
    Math_SmoothStepToS(&this->unk_234, this->unk_23A, 1, 0xBB8, (s16) 0);
    Math_SmoothStepToS(&this->unk_236, this->unk_23C, 1, 0xBB8, (s16) 0);
    temp_v1 = this->unk_212;
    if (temp_v1 != 0) {
        this->unk_212 = temp_v1 - 1;
    }
    temp_v0 = this->unk_214;
    if (temp_v0 != 0) {
        this->unk_214 = temp_v0 - 1;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 60.0f, 0x1DU);
    temp_v0_2 = this->unk_21C;
    if ((temp_v0_2 != 3) && (temp_v0_2 != 4)) {
        temp_a2 = &this->unk_244;
        sp2C = (SkelAnime *) temp_a2;
        Collider_UpdateCylinder((Actor *) this, temp_a2);
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    }
}

s32 func_80ABBC60(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 2) {
        arg4->x += arg5->unk_234;
        arg4->y += arg5->unk_236;
        arg4->z += arg5->unk_238;
    }
    return 0;
}

void EnGuardNuts_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp28;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    EnGuardNuts *this = (EnGuardNuts *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDB060020;
    sp28 = temp_v0;
    sp28->words.w1 = Lib_SegmentedToVirtual(*(&D_80ABBE60 + (this->unk_210 * 4)));
    SkelAnime_Draw(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, func_80ABBC60, NULL, (Actor *) this);
    SysMatrix_InsertTranslation(this->unk_228.x, this->actor.floorHeight, this->unk_228.z, 0);
    Matrix_Scale(0.015f, 0.015f, 0.015f, 1);
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xDA380003;
    temp_v0_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_3 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_3->words.w1 = (u32) &D_06002700;
}
