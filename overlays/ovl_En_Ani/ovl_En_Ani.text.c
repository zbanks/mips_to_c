typedef struct EnAni {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ ColliderCylinder unk_190;           /* inferred */
    /* 0x1DC */ SkelAnime unk_1DC;                  /* inferred */
    /* 0x220 */ Vec3s unk_220;                      /* inferred */
    /* 0x226 */ char pad_226[0x5A];                 /* maybe part of unk_220[16]? */
    /* 0x280 */ Vec3s unk_280;                      /* inferred */
    /* 0x286 */ char pad_286[0x5A];                 /* maybe part of unk_280[16]? */
    /* 0x2E0 */ Vec3s unk_2E0;                      /* inferred */
    /* 0x2E6 */ Vec3s unk_2E6;                      /* inferred */
    /* 0x2EC */ u16 unk_2EC;                        /* inferred */
    /* 0x2EE */ s16 unk_2EE;                        /* inferred */
    /* 0x2F0 */ s16 unk_2F0;                        /* inferred */
    /* 0x2F2 */ char pad_2F2[0x2];
    /* 0x2F4 */ void (*actionFunc)(EnAni *, GlobalContext *);
    /* 0x2F8 */ s16 unk_2F8;                        /* inferred */
    /* 0x2FA */ char pad_2FA[0x2];
    /* 0x2FC */ void (*unk_2FC)(EnAni *, GlobalContext *); /* inferred */
} EnAni;                                            /* size = 0x300 */

struct _mips2c_stack_EnAni_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnAni_Draw {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ GraphicsContext *sp3C;               /* inferred */
    /* 0x40 */ char pad_40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnAni_Init {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ ColliderCylinder *sp3C;              /* inferred */
    /* 0x40 */ SkelAnime *sp40;                     /* inferred */
    /* 0x44 */ char pad_44[0xC];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EnAni_Update {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ColliderCylinder *sp34;              /* inferred */
    /* 0x38 */ CollisionCheckContext *sp38;         /* inferred */
    /* 0x3C */ ColliderCylinder *sp3C;              /* inferred */
    /* 0x40 */ char pad_40[0x10];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_809679D0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80967A48 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80967AB4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80967D20 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80967DA0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80967DCC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80967E34 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80967E90 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80967F20 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80967FA4 {
    /* 0x00 */ char pad_0[0x32];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809680B0 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80968164 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80968504 {};              /* size 0x0 */

struct _mips2c_stack_func_8096854C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_809679D0(EnAni *arg0, GlobalContext *);   /* static */
void func_80967A48(void *arg0);                     /* static */
void func_80967AB4(void *arg0);                     /* static */
void func_80967D20(Actor *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_80967DA0(EnAni *arg0, GlobalContext *arg1); /* static */
void func_80967DCC(void *arg0, void *arg1);         /* static */
void func_80967E34(Actor *arg0, GlobalContext *arg1); /* static */
void func_80967E90(void *arg0, ? arg1);             /* static */
void func_80967F20(void *arg0, ? arg1);             /* static */
void func_80967FA4(Actor *arg0, void *arg1);        /* static */
void func_809680B0(void *arg0, ? arg1);             /* static */
void func_80968164(EnAni *arg0, GlobalContext *arg1); /* static */
s32 func_80968504(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_8096854C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeaderCommon D_060007FC;
extern AnimationHeaderCommon D_06000C14;
extern AnimationHeaderCommon D_060011CC;
extern AnimationHeaderCommon D_06001D48;
extern AnimationHeader D_060027A0;
extern FlexSkeletonHeader D_060028A0;
extern AnimationHeader D_06009220;
extern AnimationHeader D_06009D34;
static ColliderCylinderInit D_80968670 = {
    {0xA, 0, 0x11, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x1E, 0x28, 0, {0, 0, 0}},
};
static InitChainEntry D_8096869C[2];                /* unable to generate initializer */
static Vec3f D_809686A4 = {800.0f, 500.0f, 0.0f};
static ? D_809686B0;                                /* unable to generate initializer */

void func_809679D0(EnAni *arg0) {
    s16 temp_v1;
    s16 phi_v0;
    s16 phi_v1;

    temp_v1 = arg0->unk_2FA;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        arg0->unk_2FA = temp_v1 - 1;
        phi_v0 = arg0->unk_2FA;
    }
    phi_v1 = arg0->unk_2FA;
    if (phi_v0 == 0) {
        arg0 = arg0;
        arg0->unk_2FA = Rand_S16Offset(0x3C, 0x3C);
        phi_v1 = arg0->unk_2FA;
    }
    arg0->unk_2F8 = phi_v1;
    if ((s32) arg0->unk_2F8 >= 3) {
        arg0->unk_2F8 = 0;
    }
}

void func_80967A48(void *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = arg0->unk_2FA;
    if ((s32) temp_v0 > 0) {
        arg0->unk_2FA = (s16) (temp_v0 - 1);
        return;
    }
    temp_v0_2 = arg0->unk_2F8;
    if ((s32) temp_v0_2 < 2) {
        arg0->unk_2F8 = (s16) (temp_v0_2 + 1);
        return;
    }
    arg0->unk_2F4 = func_80967AB4;
    arg0 = arg0;
    arg0->unk_2FA = Rand_S16Offset(0x14, 0x14);
}

void func_80967AB4(void *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = arg0->unk_2FA;
    if ((s32) temp_v0 > 0) {
        arg0->unk_2FA = (s16) (temp_v0 - 1);
        return;
    }
    temp_v0_2 = arg0->unk_2F8;
    if ((s32) temp_v0_2 > 0) {
        arg0->unk_2F8 = (s16) (temp_v0_2 - 1);
        return;
    }
    arg0->unk_2F4 = func_80967A48;
    arg0 = arg0;
    arg0->unk_2FA = Rand_S16Offset(0xA, 0xA);
}

void EnAni_Init(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *sp40;
    ColliderCylinder *sp3C;
    ColliderCylinder *temp_a1_2;
    SkelAnime *temp_a1;
    EnAni *this = (EnAni *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_8096869C);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 24.0f);
    temp_a1 = &this->unk_1DC;
    sp40 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_060028A0, &D_06009D34, &this->unk_220, &this->unk_280, 0x10);
    SkelAnime_ChangeAnimDefaultStop(sp40, &D_06009D34);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_144, (Actor *) this, &D_80968670);
    temp_a1_2 = &this->unk_190;
    sp3C = temp_a1_2;
    Collider_InitAndSetCylinder(globalCtx, temp_a1_2, (Actor *) this, &D_80968670);
    Collider_UpdateCylinder((Actor *) this, temp_a1_2);
    this->actor.colChkInfo.mass = 0xFF;
    this->unk_2EC = 0;
    this->unk_2EE = 0;
    this->unk_2F0 = 0;
    this->actionFunc = func_809679D0;
    if ((this->actor.params & 0xFF) == 1) {
        SkelAnime_ChangeAnim(sp40, (AnimationHeader *) &D_06001D48, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06001D48), (u8) 2, 0.0f);
        this->unk_2FC = func_80968164;
        this->actor.velocity.y = 0.0f;
        this->actor.minVelocityY = 0.0f;
        this->actor.gravity = 0.0f;
        this->actor.flags |= 0x10;
        this->unk_2EC |= 4;
        gSaveContext.eventInf[1] &= 0xEF;
        return;
    }
    this->unk_190.dim.radius = 0x3C;
    this->unk_2FC = func_80967DA0;
    this->actor.velocity.y = -25.0f;
    this->actor.minVelocityY = -25.0f;
    this->actor.gravity = -5.0f;
}

void EnAni_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnAni *this = (EnAni *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_144);
    Collider_DestroyCylinder(globalCtx, &this->unk_190);
}

void func_80967D20(Actor *arg0, GlobalContext *arg1, s32 arg2) {
    s16 temp_v0;
    s32 phi_v1;

    arg0->textId = arg2 & 0xFFFF;
    temp_v0 = arg0->yawTowardsPlayer - arg0->shape.rot.y;
    if ((arg0->unk_2EC & 2) == 0) {
        phi_v1 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = -(s32) temp_v0;
        }
        if (phi_v1 < 0x4301) {
            goto block_4;
        }
    } else {
block_4:
        if (arg0->xzDistToPlayer < 100.0f) {
            func_800B8614(arg0, arg1, 120.0f);
        }
    }
}

void func_80967DA0(EnAni *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x1DC);
}

void func_80967DCC(void *arg0, void *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x1DC);
    if ((func_80152498(arg1 + 0x4908) == 2) && (arg1->unk_1680C == 0x6DE)) {
        arg0->unk_2FC = func_80967E34;
    }
}

void func_80967E34(Actor *arg0, GlobalContext *arg1) {
    SkelAnime_FrameUpdateMatrix(arg0 + 0x1DC);
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->unk_2FC = func_80967DCC;
        return;
    }
    func_80967D20(arg0, arg1, 0x6DE);
}

void func_80967E90(void *arg0, ? arg1) {
    SkelAnime *sp28;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x1DC;
    sp28 = temp_a0;
    arg0 = arg0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        arg0->unk_2F4 = func_80967AB4;
        arg0->unk_2FC = func_80967E34;
        SkelAnime_ChangeAnim(sp28, (AnimationHeader *) &D_060011CC, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_060011CC), (u8) 0, 0.0f);
    }
}

void func_80967F20(void *arg0, ? arg1) {
    SkelAnime *sp28;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x1DC;
    sp28 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        arg0->unk_2FC = func_80967E90;
        SkelAnime_ChangeAnim(sp28, (AnimationHeader *) &D_06000C14, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06000C14), (u8) 2, 0.0f);
    }
}

void func_80967FA4(Actor *arg0, void *arg1) {
    s16 sp32;
    s16 temp_v0;
    s32 temp_a0;

    if ((arg0->bgCheckFlags & 1) != 0) {
        arg0->unk_2FC = func_80967F20;
        arg0->flags &= -0x11;
        arg0->velocity.x = 0.0f;
        arg0->velocity.z = 0.0f;
        SkelAnime_ChangeAnim(arg0 + 0x1DC, &D_06009220, 1.0f, 0.0f, 16.0f, (u8) 2, 0.0f);
        arg0->unk_2EC = (u16) (arg0->unk_2EC | 2);
        temp_v0 = Quake_Add(arg1->unk_800, 3U);
        temp_a0 = temp_v0 << 0x10;
        sp32 = temp_v0;
        Quake_SetSpeed((s16) (temp_a0 >> 0x10), 0x6978);
        Quake_SetQuakeValues(sp32, 7, 0, 0, (s16) 0);
        Quake_SetCountdown(sp32, 0x14);
        Audio_PlayActorSound2(arg0, 0x180AU);
    }
    Math_SmoothStepToS(&arg0->shape.rot.y, arg0->yawTowardsPlayer, 2, 0x7D0, (s16) 0x100);
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_809680B0(void *arg0, ? arg1) {
    SkelAnime *sp30;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x1DC;
    sp30 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        arg0->unk_78 = -20.0f;
        arg0->unk_74 = -5.0f;
        arg0->unk_68 = 0.0f;
        arg0->unk_6C = -4.0f;
        SkelAnime_ChangeAnim(temp_a0, &D_06009220, 0.0f, 0.0f, 0.0f, (u8) 2, 5.0f);
        arg0->unk_2FC = func_80967FA4;
        gSaveContext.eventInf[1] |= 0x10;
    }
}

void func_80968164(EnAni *arg0, GlobalContext *arg1) {
    SkelAnime *temp_s1;
    s16 temp_v0;

    temp_s1 = arg0 + 0x1DC;
    if (SkelAnime_FrameUpdateMatrix(temp_s1) != 0) {
        temp_v0 = arg0->unk_2F0;
        if ((s32) temp_v0 > 0) {
            arg0->unk_2F0 = temp_v0 - 1;
            if ((s32) arg0->unk_2F0 > 0) {
                SkelAnime_ChangeAnimDefaultStop(temp_s1, &D_060027A0);
            } else {
                SkelAnime_ChangeAnimDefaultStop(temp_s1, (AnimationHeader *) &D_06001D48);
            }
        } else if (Rand_ZeroFloat(1.0f) < 0.4f) {
            SkelAnime_ChangeAnimDefaultStop(temp_s1, &D_060027A0);
            arg0->unk_2F0 = 2;
        } else {
            SkelAnime_ChangeAnimDefaultStop(temp_s1, (AnimationHeader *) &D_06001D48);
        }
    }
    if (arg0->actor.home.rot.x != 0) {
        arg0->unk_2FC = func_809680B0;
        arg0->unk_2EC |= 8;
        SkelAnime_ChangeAnim(temp_s1, (AnimationHeader *) &D_060007FC, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_060007FC), (u8) 2, -5.0f);
    }
}

void EnAni_Update(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp3C;
    CollisionCheckContext *sp38;
    ColliderCylinder *sp34;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_a1_2;
    CollisionCheckContext *temp_a1_3;
    f32 temp_f0;
    s16 temp_v1;
    s8 temp_a0;
    u16 temp_v0;
    EnAni *this = (EnAni *) thisx;

    temp_a1 = &this->unk_144;
    sp3C = temp_a1;
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    temp_a1_2 = &this->unk_190;
    sp34 = temp_a1_2;
    Collider_UpdateCylinder((Actor *) this, temp_a1_2);
    temp_a1_3 = &globalCtx->colChkCtx;
    sp38 = temp_a1_3;
    CollisionCheck_SetOC(globalCtx, temp_a1_3, (Collider *) sp3C);
    if ((this->unk_2EC & 1) == 0) {
        CollisionCheck_SetOC(globalCtx, temp_a1_3, (Collider *) sp34);
    }
    temp_f0 = this->actor.minVelocityY;
    this->actor.velocity.y += this->actor.gravity;
    if (this->actor.velocity.y < temp_f0) {
        this->actor.velocity.y = temp_f0;
    }
    Actor_ApplyMovement((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
    this->unk_2FC(this, globalCtx);
    if ((this->actor.xzDistToPlayer < 100.0f) && ((this->unk_2EC & 4) == 0)) {
        func_800E9250(globalCtx, (Actor *) this, &this->unk_2E0, &this->unk_2E6, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
        this->unk_2E6.z = 0;
        temp_v1 = this->unk_2E6.z;
        this->unk_2E6.y = temp_v1;
        this->unk_2E6.x = temp_v1;
    } else {
        Math_SmoothStepToS((s16 *) &this->unk_2E0, 0, 6, 0x1838, (s16) 0x64);
        Math_SmoothStepToS(&this->unk_2E0.y, 0, 6, 0x1838, (s16) 0x64);
        Math_SmoothStepToS((s16 *) &this->unk_2E6, 0, 6, 0x1838, (s16) 0x64);
        Math_SmoothStepToS(&this->unk_2E6.y, 0, 6, 0x1838, (s16) 0x64);
    }
    this->actionFunc(this, MIPS2C_ERROR(Read from unset register $a1));
    temp_v0 = this->unk_2EC;
    if ((temp_v0 & 8) != 0) {
        temp_a0 = this->actor.cutscene;
        if (temp_a0 == -1) {
            this->unk_2EC = temp_v0 & 0xFFF7;
            return;
        }
        if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
            this->actor.cutscene = ActorCutscene_GetAdditionalCutscene((s16) this->actor.cutscene);
            func_800E02AC(Play_GetCamera(globalCtx, ActorCutscene_GetCurrentCamera((s16) this->actor.cutscene)), (Actor *) this);
            return;
        }
        ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        /* Duplicate return node #14. Try simplifying control flow for better match */
    }
}

s32 func_80968504(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0xF) {
        arg4->x += arg5->unk_2E2;
        arg4->z += arg5->unk_2E0;
    }
    return 0;
}

void func_8096854C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 0xF) {
        SysMatrix_MultiplyVector3fByState(&D_809686A4, arg4 + 0x3C);
    }
}

void EnAni_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp3C;
    Gfx *sp34;
    Gfx *temp_v0;
    EnAni *this = (EnAni *) thisx;

    sp3C = globalCtx->state.gfxCtx;
    SysMatrix_InsertTranslation(0.0f, 0.0f, -1000.0f, 1);
    func_8012C5B0(globalCtx->state.gfxCtx);
    temp_v0 = sp3C->polyOpa.p;
    sp3C->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp34 = temp_v0;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_809686B0 + (this->unk_2F8 * 4)));
    SkelAnime_DrawSV(globalCtx, this->unk_1DC.skeleton, this->unk_1DC.limbDrawTbl, (s32) this->unk_1DC.dListCount, func_80968504, func_8096854C, (Actor *) this);
}
