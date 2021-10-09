struct _mips2c_stack_EnFg_AddDust {
    /* 0x00 */ char pad0[0x8];
    /* 0x08 */ ? sp8;                               /* inferred */
    /* 0x08 */ char pad8[0xC];
    /* 0x14 */ ? sp14;                              /* inferred */
    /* 0x14 */ char pad14[0xC];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnFg_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnFg_Draw {
    /* 0x00 */ char pad0[0x38];
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ Gfx *sp3C;                           /* inferred */
    /* 0x40 */ char pad40[0xC];                     /* maybe part of sp3C[4]? */
    /* 0x4C */ GraphicsContext *sp4C;               /* inferred */
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad50[0x20];
};                                                  /* size = 0x70 */

struct _mips2c_stack_EnFg_DrawDust {
    /* 0x00 */ char pad0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnFg_Init {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnFg_OverrideLimbDraw {};      /* size 0x0 */

struct _mips2c_stack_EnFg_PostLimbDraw {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad2C[0x8];                     /* maybe part of sp28[3]? */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad34[0x14];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnFg_Update {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnFg_UpdateAnimation {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnFg_UpdateDust {};            /* size 0x0 */

struct _mips2c_stack_func_80A2D348 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ Collider *sp18;                      /* inferred */
    /* 0x1C */ CollisionCheckContext *sp1C;         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A2D3D4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2D400 {};              /* size 0x0 */

struct _mips2c_stack_func_80A2D42C {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A2D4B8 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s16 sp20;                            /* inferred */
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A2D778 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad24[0x8];                     /* maybe part of sp20[3]? */
    /* 0x2C */ s16 sp2C;                            /* inferred */
    /* 0x2E */ s16 sp2E;                            /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A2D9CC {};              /* size 0x0 */

struct _mips2c_stack_func_80A2D9DC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

s32 EnFg_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void EnFg_PostLimbDraw(GraphicsContext **arg0, s32 arg1, u32 *arg2, Vec3s *arg3, Actor *arg4); /* static */
s32 EnFg_UpdateAnimation(SkelAnime *arg0, s16 arg1); /* static */
void func_80A2D348(EnFg *arg0, GlobalContext *arg1); /* static */
void func_80A2D3D4(EnFg *arg0, GlobalContext *arg1); /* static */
u8 func_80A2D400(void *arg0);                       /* static */
s32 func_80A2D42C(Actor *arg0);                     /* static */
void func_80A2D4B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A2D778(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A2D9CC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A2D9DC(Actor *arg0, GlobalContext *arg1); /* static */
extern void D_060059A0;
extern ? D_0600B328;
extern ? D_0600B338;
extern FlexSkeletonHeader D_0600B538;
static ColliderCylinderInit D_80A2E500 = {
    {0, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0x10AA, 0, 0}, 0, 5, 1},
    {8, 0xA, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80A2E52C = {1, 0, 0, 0, 0xFF};
static DamageTable D_80A2E538 = {
    {
        0,
        0x11,
        0,
        1,
        0,
        0xE1,
        0x11,
        0xF0,
        0,
        0,
        0,
        0,
        0x31,
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
static ? D_80A2E558;                                /* unable to generate initializer */
static ? D_80A2E598;                                /* unable to generate initializer */
static ? D_80A2E5A4;                                /* unable to generate initializer */
static ? D_80A2E5BC;                                /* unable to generate initializer */
static ? D_80A2E5C8;                                /* unable to generate initializer */
static ? D_80A2E5D4;                                /* unable to generate initializer */

s32 EnFg_UpdateAnimation(SkelAnime *arg0, s16 arg1) {
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
        if ((s32) arg1 < 4) {
            temp_v1 = temp_t6 + &D_80A2E558;
            temp_t0 = temp_v1->unkA;
            phi_t0 = temp_t0;
            if ((s32) temp_t0 < 0) {
                sp2C = temp_v1;
                sp30 = 1;
                phi_t0 = SkelAnime_GetFrameCount(temp_v1->unk0);
            }
            sp30 = 1;
            SkelAnime_ChangeAnim(arg0, (temp_t6 + &D_80A2E558)->unk0, (temp_t6 + &D_80A2E558)->unk4, (f32) (temp_t6 + &D_80A2E558)->unk8, (f32) phi_t0, (u8) (s32) (temp_t6 + &D_80A2E558)->unkC, (f32) (temp_t6 + &D_80A2E558)->unkE);
            phi_t1 = 1;
        }
    }
    return phi_t1;
}

void func_80A2D348(EnFg *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp1C;
    Collider *sp18;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;

    if (arg0->actor.colChkInfo.health != 0) {
        temp_a2 = arg0 + 0x18C;
        arg0->collider.dim.pos.x = (s16) (s32) arg0->actor.world.pos.x;
        arg0->collider.dim.pos.y = (s16) (s32) arg0->actor.world.pos.y;
        arg0->collider.dim.pos.z = (s16) (s32) arg0->actor.world.pos.z;
        sp18 = temp_a2;
        temp_a1 = arg1 + 0x18884;
        sp1C = temp_a1;
        CollisionCheck_SetAC(arg1, temp_a1, temp_a2);
        CollisionCheck_SetOC(arg1, temp_a1, temp_a2);
    }
}

void func_80A2D3D4(EnFg *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x148);
}

u8 func_80A2D400(void *arg0) {
    u8 temp_v0;
    u8 temp_v1;

    temp_v0 = arg0->unkB8;
    temp_v1 = arg0->unkB7;
    if ((s32) temp_v0 >= (s32) temp_v1) {
        arg0->unkB7 = 0U;
    } else {
        arg0->unkB7 = (u8) (temp_v1 - temp_v0);
    }
    return arg0->unkB7;
}

s32 func_80A2D42C(Actor *arg0) {
    s32 sp1C;
    u8 temp_a1;
    u8 temp_v0;
    s32 phi_v1;
    s32 phi_v1_2;

    temp_a1 = arg0->unk19D;
    phi_v1_2 = 0;
    if ((temp_a1 & 2) != 0) {
        temp_v0 = arg0->colChkInfo.damageEffect;
        if (temp_v0 != 1) {
            phi_v1 = 5;
            if (temp_v0 != 3) {
                if (temp_v0 != 0xE) {
                    if (temp_v0 != 0xF) {
                        phi_v1 = 1;
                    } else {
                        phi_v1 = 3;
                    }
                } else {
                    phi_v1 = 4;
                }
            }
        } else {
            phi_v1 = 2;
        }
        arg0->unk19D = (u8) (temp_a1 & 0xFFFD);
        sp1C = phi_v1;
        func_80A2D400((void *) temp_a1);
        phi_v1_2 = phi_v1;
    }
    return phi_v1_2;
}

void func_80A2D4B8(Actor *arg0, GlobalContext *arg1) {
    s16 sp22;
    s16 sp20;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    s16 temp_a0;
    s16 temp_v1;
    s32 temp_v0;
    void *temp_v0_2;
    s16 phi_v0;

    temp_v0 = func_80A2D42C(arg0);
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                if (temp_v0 != 4) {
                    temp_v1 = arg0->unk2F8;
                    if (temp_v1 == 0) {
                        phi_v0 = 0;
                    } else {
                        arg0->unk2F8 = (s16) (temp_v1 - 1);
                        phi_v0 = arg0->unk2F8;
                    }
                    if (phi_v0 == 0) {
                        Audio_PlayActorSound2(arg0, 0x28B1U);
                        EnFg_UpdateAnimation(arg0 + 0x148, 3);
                        arg0->velocity.y = 10.0f;
                        arg0->unk2F8 = Rand_S16Offset(0x1E, 0x1E);
                        arg0->unk144 = func_80A2D778;
                    }
                } else {
                    temp_v0_2 = arg0->unk194;
                    arg0->flags &= -2;
                    arg0->unk164 = 0.0f;
                    temp_a0 = temp_v0_2->unk32;
                    sp22 = temp_a0;
                    sp20 = temp_v0_2->unk30;
                    arg0->scale.x = fabsf(Math_CosS(temp_a0) * 0.01f);
                    arg0->scale.y = fabsf(Math_CosS(sp20) * 0.01f);
                    temp_f12 = arg0->scale.x;
                    arg0->scale.z = fabsf(Math_SinS(temp_a0) * 0.01f);
                    if (temp_f12 < 0.001f) {
                        arg0->scale.x = 0.001f;
                    } else {
                        arg0->scale.x = temp_f12;
                    }
                    temp_f0 = arg0->scale.y;
                    if (temp_f0 < 0.001f) {
                        arg0->scale.y = 0.001f;
                    } else {
                        arg0->scale.y = temp_f0;
                    }
                    temp_f0_2 = arg0->scale.z;
                    if (temp_f0_2 < 0.001f) {
                        arg0->scale.z = 0.001f;
                    } else {
                        arg0->scale.z = temp_f0_2;
                    }
                    arg0->unk144 = func_80A2D9CC;
                }
            }
        } else {
            arg0->flags &= -2;
            Audio_PlayActorSound2(arg0, 0x28E4U);
            arg0->unk164 = 0.0f;
            arg0->shape.shadowDraw = NULL;
            arg0->scale.x *= 1.5f;
            arg0->scale.z *= 1.5f;
            arg0->world.pos.y = arg0->floorHeight + 2.0f;
            arg0->unk144 = func_80A2D9CC;
            arg0->scale.y = 0.001f;
        }
    } else {
        arg0->flags &= -2;
        Audio_PlayActorSound2(arg0, 0x28E3U);
        arg0->params = 5;
        arg0->unk164 = 0.0f;
        arg0->world.rot.y = Math_Vec3f_Yaw(arg0->unk194 + 0x24, (Vec3f *) &arg0->world);
        arg0->unkBC = (unaligned s32) arg0->unk30;
        arg0->velocity.y = 10.0f;
        arg0->shape.rot.z = (s16) (u16) arg0->world.rot.z;
        arg0->speedXZ = 3.0f;
        arg0->unk2FA = 1;
        arg0->unk2F8 = 0;
        arg0->unk144 = func_80A2D9DC;
        arg0->gravity = -0.8f;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
}

void func_80A2D778(Actor *arg0, GlobalContext *arg1) {
    s16 sp2E;
    s16 sp2C;
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    s16 temp_a0_2;
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = func_80A2D42C(arg0);
    if (temp_v0 != 1) {
        if (temp_v0 != 3) {
            temp_a0 = arg0 + 0x148;
            if (temp_v0 == 4) {
                temp_v1 = arg0->unk194;
                arg0->flags &= -2;
                arg0->unk164 = 0.0f;
                temp_a0_2 = temp_v1->unk32;
                sp2E = temp_a0_2;
                sp2C = temp_v1->unk30;
                arg0->scale.x = fabsf(Math_CosS(temp_a0_2) * 0.01f);
                arg0->scale.y = fabsf(Math_CosS(sp2C) * 0.01f);
                temp_f12 = arg0->scale.x;
                arg0->scale.z = fabsf(Math_SinS(temp_a0_2) * 0.01f);
                if (temp_f12 < 0.001f) {
                    arg0->scale.x = 0.001f;
                } else {
                    arg0->scale.x = temp_f12;
                }
                temp_f0 = arg0->scale.y;
                if (temp_f0 < 0.001f) {
                    arg0->scale.y = 0.001f;
                } else {
                    arg0->scale.y = temp_f0;
                }
                temp_f0_2 = arg0->scale.z;
                if (temp_f0_2 < 0.001f) {
                    arg0->scale.z = 0.001f;
                } else {
                    arg0->scale.z = temp_f0_2;
                }
                arg0->unk144 = func_80A2D9CC;
                return;
            }
            sp20 = temp_a0;
            if (func_801378B8(temp_a0, 8.0f) != 0) {
                arg0->unk160 = 8.0f;
                arg0->unk164 = 0.0f;
            }
            if ((arg0->velocity.y <= 0.0f) && ((arg0->bgCheckFlags & 1) != 0)) {
                EnFg_UpdateAnimation(temp_a0, 0);
                arg0->unk144 = func_80A2D4B8;
                arg0->velocity.y = 0.0f;
                return;
            }
            Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return;
        }
        return;
    }
    arg0->flags &= -2;
    Audio_PlayActorSound2(arg0, 0x28E3U);
    EnFg_UpdateAnimation(arg0 + 0x148, 0);
    arg0->params = 5;
    arg0->unk164 = 0.0f;
    arg0->world.rot.y = Math_Vec3f_Yaw(arg0->unk194 + 0x24, (Vec3f *) &arg0->world);
    arg0->unkBC = (unaligned s32) arg0->unk30;
    arg0->velocity.y = 10.0f;
    arg0->shape.rot.z = (s16) (u16) arg0->world.rot.z;
    arg0->speedXZ = 3.0f;
    arg0->unk2FA = 1;
    arg0->unk2F8 = 0;
    arg0->unk144 = func_80A2D9DC;
    arg0->gravity = -0.8f;
}

void func_80A2D9CC(Actor *arg0, GlobalContext *arg1) {

}

void func_80A2D9DC(Actor *arg0, GlobalContext *arg1) {
    EnFgEffectDust *temp_a0;
    Vec3f *temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v1;

    if ((arg0->velocity.y <= 0.0f) && ((arg0->bgCheckFlags & 1) != 0)) {
        arg0->unk2FA = (s16) (arg0->unk2FA + 1);
        temp_v0 = arg0->unk2FA;
        if ((s32) temp_v0 < 4) {
            arg0->shape.rot.x += 0x1000;
            arg0->velocity.y = 10.0f / (f32) temp_v0;
            return;
        }
        arg0->unk144 = func_80A2D9CC;
        return;
    }
    temp_a0 = arg0 + 0x2FC;
    temp_a1 = arg0 + 0x24;
    if ((arg0->bgCheckFlags & 8) != 0) {
        arg0->world.rot.y = arg0->wallYaw;
        arg0->unkBC = (unaligned s32) arg0->unk30;
        arg0->shape.rot.z = arg0->world.rot.z;
    }
    temp_v0_2 = arg0->unk2F8;
    if (temp_v0_2 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk2F8 = (s16) (temp_v0_2 - 1);
        phi_v1 = arg0->unk2F8;
    }
    if (phi_v1 == 0) {
        arg0 = arg0;
        EnFg_AddDust(temp_a0, temp_a1);
    }
    arg0->shape.rot.x += 0x1000;
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
}

void EnFg_Init(EnFg *this, GlobalContext *globalCtx) {
    SkelAnime *sp30;
    ColliderCylinder *temp_a1_2;
    SkelAnime *temp_a1;
    EnFg *this = (EnFg *) thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 10.0f);
    temp_a1 = &this->skelAnime;
    sp30 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_0600B538, NULL, this->limbDrawTbl, this->transitionDrawTbl, 0x18);
    EnFg_UpdateAnimation(sp30, 0);
    temp_a1_2 = &this->collider;
    sp30 = (SkelAnime *) temp_a1_2;
    Collider_InitCylinder(globalCtx, temp_a1_2);
    Collider_SetCylinder(globalCtx, temp_a1_2, (Actor *) this, &D_80A2E500);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80A2E538, &D_80A2E52C);
    this->actor.flags |= 0x4000;
    Actor_SetScale((Actor *) this, 0.01f);
    this->actionFunc = (void (*)(EnFg *, GlobalContext *)) func_80A2D4B8;
    this->actor.gravity = -1.6f;
}

void EnFg_Destroy(EnFg *this, GlobalContext *globalCtx) {
    EnFg *this = (EnFg *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnFg_Update(EnFg *this, GlobalContext *globalCtx) {
    GameInfo *temp_v0_2;
    u32 temp_v0;
    EnFg *this = (EnFg *) thisx;

    temp_v0 = this->actor.flags;
    if (((temp_v0 & 0x2000) != 0x2000) && ((temp_v0 & 0x8000) != 0x8000)) {
        this->actionFunc(this, globalCtx);
        temp_v0_2 = gGameInfo;
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, (f32) temp_v0_2->data[1536], (f32) temp_v0_2->data[1537], 0.0f, 5U);
    }
    func_80A2D3D4(this, globalCtx);
    EnFg_UpdateDust(this->dustEffect);
    func_80A2D348(this, globalCtx);
}

s32 EnFg_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if ((arg1 == 7) || (arg1 == 8)) {
        *arg2 = NULL;
    }
    if ((arg5->unkB7 == 0) && ((arg1 == 5) || (arg1 == 9))) {
        *arg2 = NULL;
    }
    return 0;
}

void EnFg_PostLimbDraw(GraphicsContext **arg0, s32 arg1, u32 *arg2, Vec3s *arg3, Actor *arg4) {
    ? sp34;
    Gfx *sp28;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_s0;

    sp34.unk0 = (s32) D_80A2E598.unk0;
    sp34.unk4 = (s32) D_80A2E598.unk4;
    sp34.unk8 = (s32) D_80A2E598.unk8;
    if ((arg1 == 7) || (arg1 == 8)) {
        temp_s0 = *arg0;
        SysMatrix_StatePush();
        SysMatrix_NormalizeXYZ(arg0 + 0x187FC);
        temp_v0 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp28 = temp_v0;
        sp28->words.w1 = Matrix_NewMtx(*arg0);
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->words.w1 = *arg2;
        SysMatrix_StatePop();
    }
    if (arg1 == 4) {
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp34, arg4 + 0x3C);
    }
}

void EnFg_Draw(EnFg *this, GlobalContext *globalCtx) {
    ? sp50;
    GraphicsContext *sp4C;
    Gfx *sp3C;
    Gfx *sp38;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    void *temp_v1;
    EnFg *this = (EnFg *) thisx;

    sp50.unk0 = (s32) D_80A2E5A4.unk0;
    sp50.unk4 = (s32) D_80A2E5A4.unk4;
    sp50.unkC = (s32) D_80A2E5A4.unkC;
    sp50.unk8 = (s32) D_80A2E5A4.unk8;
    sp50.unk10 = (s32) D_80A2E5A4.unk10;
    sp50.unk14 = (s32) D_80A2E5A4.unk14;
    SysMatrix_StatePush();
    EnFg_DrawDust(globalCtx, this->dustEffect);
    SysMatrix_StatePop();
    temp_a0 = globalCtx->state.gfxCtx;
    sp4C = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp4C->polyOpa.p;
    sp4C->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    temp_v0_2 = sp4C->polyOpa.p;
    sp4C->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFB000000;
    temp_v1 = (this->actor.params * 4) + &sp50;
    temp_v0_2->words.w1 = temp_v1->unk3 | (temp_v1->unk0 << 0x18) | (temp_v1->unk1 << 0x10) | (temp_v1->unk2 << 8);
    temp_v0_3 = sp4C->polyOpa.p;
    sp4C->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060020;
    sp4C = sp4C;
    sp3C = temp_v0_3;
    sp3C->words.w1 = Lib_SegmentedToVirtual(&D_060059A0);
    temp_v0_4 = sp4C->polyOpa.p;
    sp4C->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDB060024;
    sp38 = temp_v0_4;
    sp38->words.w1 = Lib_SegmentedToVirtual(&D_060059A0);
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, EnFg_OverrideLimbDraw, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) EnFg_PostLimbDraw, (Actor *) this);
}

void EnFg_AddDust(EnFgEffectDust *dustEffect, Vec3f *worldPos) {
    ? sp14;
    ? sp8;
    s32 temp_v0;
    EnFgEffectDust *phi_a0;
    s32 phi_v0;

    sp14.unk0 = (s32) D_80A2E5BC.unk0;
    sp14.unk4 = (s32) D_80A2E5BC.unk4;
    sp14.unk8 = (s32) D_80A2E5BC.unk8;
    sp8.unk0 = (s32) D_80A2E5C8.unk0;
    sp8.unk4 = (s32) D_80A2E5C8.unk4;
    sp8.unk8 = (s32) D_80A2E5C8.unk8;
    phi_a0 = dustEffect;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_a0->type == 0) {
        phi_a0->type = 1;
        phi_a0->timer = 0x10;
        phi_a0->pos.x = worldPos->x;
        phi_a0->pos.y = worldPos->y;
        phi_a0->pos.z = worldPos->z;
        phi_a0->velocity.x = sp14.unk0;
        phi_a0->velocity.y = sp14.unk4;
        phi_a0->velocity.z = sp14.unk8;
        phi_a0->unk_20.x = sp8.unk0;
        phi_a0->unk_20.y = sp8.unk4;
        phi_a0->unk_20.z = sp8.unk8;
        phi_a0->xyScale = 0.4f;
        return;
    }
    phi_a0 += 0x3C;
    if (temp_v0 == 0xA) {
        return;
    }
    goto loop_1;
}

void EnFg_UpdateDust(EnFgEffectDust *dustEffect) {
    EnFgEffectDust *temp_a0;
    s32 temp_v0;
    u8 temp_t1;
    u8 temp_t3;
    u8 temp_t5;
    u8 temp_t7;
    u8 temp_t7_2;
    u8 temp_t9;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_5;
    u8 temp_v1_6;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    s32 phi_a1;
    s32 phi_a1_2;
    EnFgEffectDust *phi_a0;
    s32 phi_a1_3;
    s32 phi_a1_4;
    s32 phi_a1_5;
    s32 phi_a1_6;
    s32 phi_v0;

    phi_v0 = 2;
    if (dustEffect->type == 1) {
        temp_v1 = dustEffect->timer;
        temp_t7 = temp_v1 - 1;
        if (temp_v1 == 0) {
            phi_a1 = 0;
        } else {
            dustEffect->timer = temp_t7;
            phi_a1 = temp_t7 & 0xFF;
        }
        if (phi_a1 == 0) {
            dustEffect->type = 0;
        }
        dustEffect->pos.y += dustEffect->velocity.y;
    }
    temp_a0 = dustEffect + 0x3C;
    if (dustEffect->unk3C == 1) {
        temp_v1_2 = temp_a0->timer;
        temp_t9 = temp_v1_2 - 1;
        if (temp_v1_2 == 0) {
            phi_a1_2 = 0;
        } else {
            temp_a0->timer = temp_t9;
            phi_a1_2 = temp_t9 & 0xFF;
        }
        if (phi_a1_2 == 0) {
            temp_a0->type = 0;
        }
        temp_a0->pos.y += temp_a0->velocity.y;
    }
    phi_a0 = temp_a0 + 0x3C;
    do {
        temp_v0 = phi_v0 + 4;
        phi_v0 = temp_v0;
        if (phi_a0->type == 1) {
            temp_v1_3 = phi_a0->timer;
            temp_t1 = temp_v1_3 - 1;
            if (temp_v1_3 == 0) {
                phi_a1_3 = 0;
            } else {
                phi_a0->timer = temp_t1;
                phi_a1_3 = temp_t1 & 0xFF;
            }
            if (phi_a1_3 == 0) {
                phi_a0->type = 0;
            }
            phi_a0->pos.y += phi_a0->velocity.y;
        }
        temp_a0_2 = phi_a0 + 0x3C;
        if (phi_a0->unk3C == 1) {
            temp_v1_4 = temp_a0_2->unk1;
            temp_t3 = temp_v1_4 - 1;
            if (temp_v1_4 == 0) {
                phi_a1_4 = 0;
            } else {
                temp_a0_2->unk1 = temp_t3;
                phi_a1_4 = temp_t3 & 0xFF;
            }
            if (phi_a1_4 == 0) {
                temp_a0_2->unk0 = 0;
            }
            temp_a0_2->unk18 = (f32) (temp_a0_2->unk18 + temp_a0_2->unk30);
        }
        temp_a0_3 = temp_a0_2 + 0x3C;
        if (temp_a0_2->unk3C == 1) {
            temp_v1_5 = temp_a0_3->unk1;
            temp_t5 = temp_v1_5 - 1;
            if (temp_v1_5 == 0) {
                phi_a1_5 = 0;
            } else {
                temp_a0_3->unk1 = temp_t5;
                phi_a1_5 = temp_t5 & 0xFF;
            }
            if (phi_a1_5 == 0) {
                temp_a0_3->unk0 = 0;
            }
            temp_a0_3->unk18 = (f32) (temp_a0_3->unk18 + temp_a0_3->unk30);
        }
        temp_a0_4 = temp_a0_3 + 0x3C;
        if (temp_a0_3->unk3C == 1) {
            temp_v1_6 = temp_a0_4->unk1;
            temp_t7_2 = temp_v1_6 - 1;
            if (temp_v1_6 == 0) {
                phi_a1_6 = 0;
            } else {
                temp_a0_4->unk1 = temp_t7_2;
                phi_a1_6 = temp_t7_2 & 0xFF;
            }
            if (phi_a1_6 == 0) {
                temp_a0_4->unk0 = 0;
            }
            temp_a0_4->unk18 = (f32) (temp_a0_4->unk18 + temp_a0_4->unk30);
        }
        phi_a0 = temp_a0_4 + 0x3C;
    } while (temp_v0 != 0xA);
}

void EnFg_DrawDust(GlobalContext *globalCtx, EnFgEffectDust *dustEffect) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    MtxF *temp_s3;
    f32 temp_f12;
    f32 temp_f6;
    s16 temp_s4;
    u8 temp_t0;
    EnFgEffectDust *phi_s2;
    s32 phi_s6;
    f32 phi_f6;
    s16 phi_s4;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    phi_s2 = dustEffect;
    phi_s6 = 0;
    phi_s4 = 0;
    do {
        temp_s3 = &globalCtx->mf_187FC;
        if (phi_s2->type != 0) {
            if (phi_s6 == 0) {
                temp_s0->polyXlu.p = Gfx_CallSetupDL(temp_s0->polyXlu.p, 0U);
                temp_v0 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0 + 8;
                temp_v0->words.w1 = (u32) &D_0600B328;
                temp_v0->words.w0 = 0xDE000000;
                temp_v0_2 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = 0;
                temp_v0_2->words.w0 = 0xFB000000;
                phi_s6 = 1;
            }
            temp_t0 = phi_s2->timer;
            temp_f6 = (f32) temp_t0;
            phi_f6 = temp_f6;
            if ((s32) temp_t0 < 0) {
                phi_f6 = temp_f6 + 4294967296.0f;
            }
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = (s16) (s32) (phi_f6 * 15.9375f) & 0xFF;
            temp_v0_3->words.w0 = 0xFA000000;
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w1 = 0;
            temp_v0_4->words.w0 = 0xE7000000;
            SysMatrix_InsertTranslation(phi_s2->pos.x, phi_s2->pos.y, phi_s2->pos.z, 0);
            SysMatrix_NormalizeXYZ(temp_s3);
            temp_f12 = phi_s2->xyScale;
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDA380003;
            temp_v0_5->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_6 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xDB060020;
            temp_v0_6->words.w1 = Lib_SegmentedToVirtual(*(&D_80A2E5D4 + ((s16) (s32) ((f32) phi_s2->timer * 0.5f) * 4)));
            temp_v0_7 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w1 = (u32) &D_0600B338;
            temp_v0_7->words.w0 = 0xDE000000;
        }
        temp_s4 = phi_s4 + 1;
        phi_s2 += 0x3C;
        phi_s4 = temp_s4;
    } while ((s32) temp_s4 < 0xA);
}
