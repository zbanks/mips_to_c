typedef struct EnHorseLinkChild {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ s32 unk_148;                        /* inferred */
    /* 0x14C */ ? unk_14C;                          /* inferred */
    /* 0x14C */ char pad_14C[0x4C];
    /* 0x198 */ SkelAnime unk_198;                  /* inferred */
    /* 0x1DC */ char pad_1DC[0x8];
    /* 0x1E4 */ u8 unk_1E4;                         /* inferred */
    /* 0x1E5 */ char pad_1E5[0x3];                  /* maybe part of unk_1E4[4]? */
    /* 0x1E8 */ s32 unk_1E8;                        /* inferred */
    /* 0x1EC */ ColliderCylinder unk_1EC;           /* inferred */
    /* 0x238 */ ColliderJntSph unk_238;             /* inferred */
    /* 0x258 */ ColliderJntSphElement unk_258;      /* inferred */
    /* 0x298 */ char pad_298[0x4];
} EnHorseLinkChild;                                 /* size = 0x29C */

struct _mips2c_stack_EnHorseLinkChild_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnHorseLinkChild_Draw {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnHorseLinkChild_Init {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderJntSph *sp2C;                /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnHorseLinkChild_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808DE5C0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808DE660 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808DE728 {};              /* size 0x0 */

struct _mips2c_stack_func_808DE9A8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808DEA0C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808DEA54 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808DEB14 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 *sp34;                           /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808DECA0 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808DED40 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 *sp30;                           /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x10];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808DEFE8 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808DF088 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0xA];                    /* maybe part of sp24[3]? */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ Actor *sp34;                         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808DF194 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 *sp30;                           /* inferred */
    /* 0x34 */ PosRot *sp34;                        /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ u32 sp48;                            /* inferred */
    /* 0x4C */ s32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ Actor *sp54;                         /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_808DF560 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808DF620 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x2];
    /* 0x36 */ s16 sp36;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808DF788 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808DF838 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 *sp30;                           /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x10];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808DFC3C {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_808DFDC8 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x10];
};                                                  /* size = 0x30 */

? func_800F415C(Actor *, PosRot *, ?);              /* extern */
? func_80138258(EnHorseLinkChild *, GlobalContext *, ? *, void (*)(void *, GlobalContext *, ?), ? (*)(void *, void **, s32, ?), s32); /* extern */
? func_80138300(?, u8, f32 *, f32 *);               /* extern */
? func_8013859C(GlobalContext *, ? *, ? *, ? *);    /* extern */
? func_80138700(GlobalContext *, ? *);              /* extern */
void func_808DE5C0(EnHorseLinkChild *arg0, EnHorseLinkChild *); /* static */
void func_808DE660(EnHorseLinkChild *arg0);         /* static */
f32 func_808DE728(Actor *arg0, s32);                /* static */
void func_808DE9A8(Actor *arg0, Actor *);           /* static */
void func_808DEA0C(Actor *arg0, ? arg1);            /* static */
void func_808DEA54(Actor *arg0, s32 arg1);          /* static */
void func_808DEB14(Actor *arg0, void *arg1);        /* static */
void func_808DECA0(Actor *arg0);                    /* static */
void func_808DED40(Actor *arg0, void *arg1);        /* static */
void func_808DEFE8(EnHorseLinkChild *arg0);         /* static */
void func_808DF088(Actor *arg0, void *arg1);        /* static */
void func_808DF194(Actor *arg0, void *arg1);        /* static */
void func_808DF560(Actor *arg0);                    /* static */
void func_808DF620(Actor *arg0, void *arg1);        /* static */
void func_808DF788(Actor *arg0);                    /* static */
void func_808DF838(Actor *arg0, void *arg1);        /* static */
void func_808DFC3C(void *arg0, GlobalContext *arg1, ? arg2); /* static */
? func_808DFDC8(void *arg0, void **arg1, s32 arg2, ? arg3); /* static */
extern ? D_06002F98;
extern ? D_0600A480;
extern s32 D_801BDAA4;
static AnimationHeader *D_808DFEC0[2] = {(AnimationHeader *)0x6006D44, (AnimationHeader *)0x6007468};
static AnimationHeaderCommon *D_808DFEC8[3] = {
    (AnimationHeaderCommon *)0x6007D50,
    (AnimationHeaderCommon *)0x60043AC,
    (AnimationHeaderCommon *)0x6002F98,
};
static ColliderJntSphElementInit D_808DFED4 = {{0, {0, 0, 0}, {0, 0, 0}, 0, 0, 1}, {0xD, {{0, 0, 0}, 0xA}, 0x64}};
static ColliderJntSphInit D_808DFEF8 = {{0xA, 0, 9, 0x39, 0x12, 0}, 1, &D_808DFED4};
static CollisionCheckInfoInit D_808DFF08 = {0xA, 0x23, 0x64, 0xFE};
static ? D_808DFF10;                                /* unable to generate initializer */
static ? D_808DFF18;                                /* unable to generate initializer */
static InitChainEntry D_808DFF2C;                   /* unable to generate initializer */
static ? D_808DFF30;                                /* unable to generate initializer */
static ? D_808DFF48;                                /* unable to generate initializer */
static ? D_808DFF54;                                /* unable to generate initializer */

void func_808DE5C0(EnHorseLinkChild *arg0) {
    Vec3f *temp_a0;
    f32 temp_f0;
    s32 temp_t1;
    s32 temp_v0;

    temp_v0 = arg0->unk_1E8;
    temp_f0 = arg0->unk_198.animCurrentFrame;
    if (((f32) *(&D_808DFF10 + (temp_v0 * 4)) < temp_f0) && ((temp_a0 = arg0 + 0xEC, (temp_v0 != 0)) || !((f32) D_808DFF10.unk_4 < temp_f0))) {
        arg0 = arg0;
        func_8019F1C0(temp_a0, 0x2842U);
        temp_t1 = arg0->unk_1E8 + 1;
        arg0->unk_1E8 = temp_t1;
        if (temp_t1 >= 2) {
            arg0->unk_1E8 = 0;
        }
    }
}

void func_808DE660(EnHorseLinkChild *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk_148;
    if (temp_v0 == 2) {
        func_808DE5C0(arg0, arg0);
        return;
    }
    if (arg0->unk_198.animCurrentFrame == 0.0f) {
        if ((temp_v0 == 3) || (temp_v0 == 4)) {
            func_8019F1C0(arg0 + 0xEC, 0x2843U);
            return;
        }
        if (temp_v0 == 1) {
            arg0 = arg0;
            if (Rand_ZeroOne() > 0.5f) {
                func_8019F1C0(arg0 + 0xEC, 0x2845U);
                return;
            }
            func_8019F1C0(arg0 + 0xEC, 0x2844U);
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}

f32 func_808DE728(Actor *arg0) {
    s32 temp_v0;
    f32 phi_f2;

    temp_v0 = arg0[1].flags;
    if (temp_v0 == 2) {
        phi_f2 = *(&D_808DFF18 + (temp_v0 * 4)) * arg0->speedXZ * 0.5f;
    } else if (temp_v0 == 3) {
        phi_f2 = *(&D_808DFF18 + (temp_v0 * 4)) * arg0->speedXZ * 0.33333334f;
    } else if (temp_v0 == 4) {
        phi_f2 = *(&D_808DFF18 + (temp_v0 * 4)) * arg0->speedXZ * 0.2f;
    } else {
        phi_f2 = *(&D_808DFF18 + (temp_v0 * 4));
    }
    return phi_f2;
}

void EnHorseLinkChild_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderJntSph *sp2C;
    ColliderJntSph *temp_a1;
    s16 temp_v0;
    EnHorseLinkChild *this = (EnHorseLinkChild *) thisx;

    Actor_ProcessInitChain((Actor *) this, &D_808DFF2C);
    Actor_SetScale((Actor *) this, 0.00648f);
    this->actor.gravity = -3.5f;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B40B8, 20.0f);
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->unk_144 = 1;
    this->actor.focus.pos.y += 70.0f;
    this->actor.speedXZ = 0.0f;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    func_8013859C(globalCtx, &this->unk_14C, &D_0600A480, &D_06002F98);
    this->unk_148 = 0;
    SkelAnime_ChangeAnimDefaultStop(&this->unk_198, *D_808DFEC0);
    Collider_InitCylinder(globalCtx, &this->unk_1EC);
    temp_a1 = &this->unk_238;
    sp2C = temp_a1;
    Collider_InitJntSph(globalCtx, temp_a1);
    Collider_SetJntSph(globalCtx, temp_a1, (Actor *) this, &D_808DFEF8, &this->unk_258);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, NULL, &D_808DFF08);
    this->unk_1E8 = 0;
    this->unk_1E4 = 0;
    if (gSaveContext.sceneSetupIndex >= 4) {
        func_808DEFE8(this);
    } else {
        func_808DEFE8(this);
    }
    this->actor.shape.rot.z = 0;
    temp_v0 = this->actor.shape.rot.z;
    this->actor.world.rot.z = temp_v0;
    this->actor.home.rot.z = temp_v0;
}

void EnHorseLinkChild_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnHorseLinkChild *this = (EnHorseLinkChild *) thisx;
    func_80138700(globalCtx, &this->unk_14C);
    Collider_DestroyCylinder(globalCtx, &this->unk_1EC);
    Collider_DestroyJntSph(globalCtx, &this->unk_238);
}

void func_808DE9A8(Actor *arg0) {
    SkelAnime *temp_a0;
    s32 temp_v0;
    s32 phi_v0;

    arg0->unk_144 = 0;
    temp_a0 = arg0 + 0x198;
    temp_v0 = arg0[1].flags + 1;
    arg0[1].flags = temp_v0;
    phi_v0 = temp_v0;
    if (temp_v0 >= 5) {
        arg0[1].flags = 0;
        phi_v0 = 0;
    }
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, D_808DFEC0[phi_v0]);
    arg0[1].speedXZ = func_808DE728(arg0);
}

void func_808DEA0C(Actor *arg0, ? arg1) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x198;
    arg0->speedXZ = 0.0f;
    arg0 = arg0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        func_808DE9A8(arg0, arg0);
    }
}

void func_808DEA54(Actor *arg0, s32 arg1) {
    f32 sp30;
    s32 phi_a1;

    arg0->unk_144 = 2;
    arg0->speedXZ = 0.0f;
    phi_a1 = arg1;
    if ((arg1 != 0) && (arg1 != 1)) {
        phi_a1 = 0;
    }
    if (phi_a1 != arg0[1].flags) {
        arg0[1].flags = phi_a1;
        sp30 = func_808DE728(arg0, phi_a1);
        SkelAnime_ChangeAnim(arg0 + 0x198, D_808DFEC0[arg0[1].flags], sp30, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_808DFEC0[arg0[1].flags]), (u8) 2, -5.0f);
    }
}

void func_808DEB14(Actor *arg0, void *arg1) {
    f32 sp44;
    f32 sp38;
    f32 *sp34;
    f32 *temp_a0;
    f32 temp_f0;
    u32 temp_v1;
    u32 phi_v0;

    temp_f0 = Actor_XZDistanceBetweenActors(arg0, arg1->unk_1CCC);
    temp_a0 = &arg0[1].targetArrowOffset;
    sp34 = temp_a0;
    sp44 = temp_f0;
    if (SkelAnime_FrameUpdateMatrix((SkelAnime *) temp_a0) != 0) {
        if ((sp44 < 1000.0f) && (sp44 > 70.0f)) {
            func_808DECA0(arg0);
            return;
        }
        temp_v1 = arg0[1].flags;
        phi_v0 = 1U;
        if (temp_v1 == 1) {
            phi_v0 = 0U;
        }
        if (phi_v0 != temp_v1) {
            arg0[1].flags = phi_v0;
            sp38 = func_808DE728(arg0);
            SkelAnime_ChangeAnim((SkelAnime *) sp34, D_808DFEC0[arg0[1].flags], sp38, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_808DFEC0[arg0[1].flags]), (u8) 2, -5.0f);
            return;
        }
        sp38 = func_808DE728(arg0);
        SkelAnime_ChangeAnim((SkelAnime *) sp34, D_808DFEC0[arg0[1].flags], sp38, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_808DFEC0[arg0[1].flags]), (u8) 2, 0.0f);
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_808DECA0(Actor *arg0) {
    f32 sp30;

    arg0->unk_144 = 1;
    arg0[1].flags = 0;
    arg0->speedXZ = 0.0f;
    sp30 = func_808DE728(arg0);
    SkelAnime_ChangeAnim((SkelAnime *) &arg0[1].targetArrowOffset, D_808DFEC0[arg0[1].flags], sp30, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_808DFEC0[arg0[1].flags]), (u8) 2, -5.0f);
}

void func_808DED40(Actor *arg0, void *arg1) {
    f32 sp34;
    f32 *sp30;
    f32 *temp_a0_2;
    f32 temp_f0;
    s16 temp_a0;
    s16 temp_v1;
    u32 temp_v0;
    u32 phi_v0;

    temp_v0 = arg0[1].flags;
    if ((temp_v0 == 4) || (temp_v0 == 3) || (temp_v0 == 2)) {
        temp_v1 = arg0->world.rot.y;
        temp_a0 = Actor_YawBetweenActors(arg0, arg1->unk_1CCC) - temp_v1;
        if ((s32) temp_a0 >= 0x12D) {
            arg0->world.rot.y = temp_v1 + 0x12C;
        } else if ((s32) temp_a0 < -0x12C) {
            arg0->world.rot.y = temp_v1 - 0x12C;
        } else {
            arg0->world.rot.y = temp_v1 + temp_a0;
        }
        arg0->shape.rot.y = arg0->world.rot.y;
    }
    temp_a0_2 = &arg0[1].targetArrowOffset;
    sp30 = temp_a0_2;
    if (SkelAnime_FrameUpdateMatrix((SkelAnime *) temp_a0_2) != 0) {
        temp_f0 = Actor_XZDistanceBetweenActors(arg0, arg1->unk_1CCC);
        if (temp_f0 > 1000.0f) {
            func_808DEA54(arg0, 0U);
            return;
        }
        if ((temp_f0 < 1000.0f) && (temp_f0 >= 300.0f)) {
            arg0->speedXZ = 6.0f;
            phi_v0 = 4U;
            goto block_22;
        }
        if ((temp_f0 < 300.0f) && (temp_f0 >= 150.0f)) {
            arg0->speedXZ = 4.0f;
            phi_v0 = 3U;
            goto block_22;
        }
        if ((temp_f0 < 150.0f) && (phi_v0 = 2U, (temp_f0 >= 70.0f))) {
            arg0[1].colChkInfo.displacement.x = 0.0f;
            arg0->speedXZ = 2.0f;
block_22:
            if (phi_v0 != arg0[1].flags) {
                arg0[1].flags = phi_v0;
                sp34 = func_808DE728(arg0);
                SkelAnime_ChangeAnim((SkelAnime *) sp30, D_808DFEC0[arg0[1].flags], sp34, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_808DFEC0[arg0[1].flags]), (u8) 2, -5.0f);
                return;
            }
            sp34 = func_808DE728(arg0);
            SkelAnime_ChangeAnim((SkelAnime *) sp30, D_808DFEC0[arg0[1].flags], sp34, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_808DFEC0[arg0[1].flags]), (u8) 2, 0.0f);
            /* Duplicate return node #25. Try simplifying control flow for better match */
            return;
        }
        func_808DEA54(arg0, 1U);
    }
}

void func_808DEFE8(Actor *arg0) {
    f32 sp30;

    arg0->unk_144 = 3;
    arg0[1].flags = 0;
    arg0->speedXZ = 0.0f;
    sp30 = func_808DE728(arg0);
    SkelAnime_ChangeAnim((SkelAnime *) &arg0[1].targetArrowOffset, D_808DFEC0[arg0[1].flags], sp30, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_808DFEC0[arg0[1].flags]), (u8) 2, -5.0f);
}

void func_808DF088(Actor *arg0, void *arg1) {
    Actor *sp34;
    s16 sp32;
    Vec3f *sp24;
    Actor *temp_a2;
    Vec3f *temp_a1;
    s16 temp_v1;
    s32 temp_v0;
    s32 phi_v1;
    s32 phi_v0;

    temp_v0 = arg0[1].flags;
    if ((temp_v0 == 4) || (temp_v0 == 3) || (temp_v0 == 2)) {
        temp_a2 = arg1->unk_1CCC;
        temp_a1 = arg0 + 8;
        sp24 = temp_a1;
        sp34 = temp_a2;
        if (Math3D_Distance(temp_a2 + 0x24, temp_a1) < 250.0f) {
            temp_v1 = temp_a2->shape.rot.y;
            sp32 = temp_v1;
            if (Actor_YawBetweenActors(arg0, temp_a2) > 0) {
                phi_v0 = 1;
            } else {
                phi_v0 = -1;
            }
            phi_v1 = (s32) (s16) (temp_v1 + (phi_v0 << 0xE));
        } else {
            phi_v1 = (s32) (s16) (Math_Vec3f_Yaw((Vec3f *) &arg0->world, temp_a1) - arg0->world.rot.y);
        }
        if (phi_v1 >= 0x12D) {
            arg0->world.rot.y += 0x12C;
        } else if (phi_v1 < -0x12C) {
            arg0->world.rot.y += -0x12C;
        } else {
            arg0->world.rot.y += phi_v1;
        }
        arg0->shape.rot.y = arg0->world.rot.y;
    }
}

void func_808DF194(Actor *arg0, void *arg1) {
    Actor *sp54;
    f32 sp50;
    s32 sp4C;
    u32 sp48;
    f32 sp44;
    f32 sp38;
    PosRot *sp34;
    f32 *sp30;
    Actor *temp_a1;
    PosRot *temp_a1_2;
    f32 *temp_a0;
    s32 temp_a3;
    s32 temp_v0;
    u32 temp_a0_2;
    u32 temp_v1;
    u32 phi_v1;

    func_808DF088(arg0, arg1);
    temp_a1 = arg1->unk_1CCC;
    sp54 = temp_a1;
    sp50 = Actor_XZDistanceBetweenActors(arg0, temp_a1);
    temp_v1 = arg0[1].flags;
    temp_a0 = &arg0[1].targetArrowOffset;
    sp30 = temp_a0;
    sp48 = temp_v1;
    temp_v0 = SkelAnime_FrameUpdateMatrix((SkelAnime *) temp_a0);
    temp_a3 = temp_v0;
    phi_v1 = temp_v1;
    if ((temp_v0 != 0) || (temp_a0_2 = arg0[1].flags, (temp_a0_2 == 1U)) || (temp_a0_2 == 0)) {
        temp_a1_2 = &arg0->home;
        if ((gSaveContext.weekEventReg[1] & 0x20) != 0) {
            sp34 = temp_a1_2;
            sp4C = temp_a3;
            sp44 = Math3D_Distance((Vec3f *) &arg0->world, (Vec3f *) temp_a1_2);
            if (Math3D_Distance((Vec3f *) &sp54->world, (Vec3f *) temp_a1_2) > 250.0f) {
                if (sp44 >= 300.0f) {
                    arg0->speedXZ = 6.0f;
                    phi_v1 = 4U;
                } else if ((sp44 < 300.0f) && (sp44 >= 150.0f)) {
                    arg0->speedXZ = 4.0f;
                    phi_v1 = 3U;
                } else if ((sp44 < 150.0f) && (sp44 >= 70.0f)) {
                    arg0[1].colChkInfo.displacement.x = 0.0f;
                    arg0->speedXZ = 2.0f;
                    phi_v1 = 2U;
                } else {
                    arg0->speedXZ = 0.0f;
                    if (arg0[1].flags == 0) {
                        if (temp_a3 == 1U) {
                            phi_v1 = 1U;
                        } else {
                            phi_v1 = 0U;
                        }
                    } else if (temp_a3 == 1U) {
                        phi_v1 = 0U;
                    } else {
                        phi_v1 = 1U;
                    }
                }
            } else if (sp50 < 200.0f) {
                arg0->speedXZ = 6.0f;
                phi_v1 = 4U;
            } else if (sp50 < 300.0f) {
                arg0->speedXZ = 4.0f;
                phi_v1 = 3U;
            } else if (sp50 < 400.0f) {
                arg0[1].colChkInfo.displacement.x = 0.0f;
                arg0->speedXZ = 2.0f;
                phi_v1 = 2U;
            } else {
                arg0->speedXZ = 0.0f;
                if (arg0[1].flags == 0) {
                    if (temp_a3 == 1U) {
                        phi_v1 = 1U;
                    } else {
                        phi_v1 = 0U;
                    }
                } else if (temp_a3 == 1U) {
                    phi_v1 = 0U;
                } else {
                    phi_v1 = 1U;
                }
            }
        } else {
            arg0->speedXZ = 0.0f;
            if (arg0[1].flags == 0) {
                if (temp_v0 == 1U) {
                    phi_v1 = 1U;
                } else {
                    phi_v1 = 0U;
                }
            } else {
                phi_v1 = 1U;
                if (temp_v0 == 1U) {
                    phi_v1 = 0U;
                }
            }
        }
    }
    if ((phi_v1 != arg0[1].flags) || (temp_a3 == 1U)) {
        arg0[1].flags = phi_v1;
        sp38 = func_808DE728(arg0);
        SkelAnime_ChangeAnim((SkelAnime *) sp30, D_808DFEC0[arg0[1].flags], sp38, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_808DFEC0[arg0[1].flags]), (u8) 2, -5.0f);
        return;
    }
    sp38 = func_808DE728(arg0);
    SkelAnime_ChangeAnim((SkelAnime *) sp30, D_808DFEC0[arg0[1].flags], sp38, arg0[1].velocity.z, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_808DFEC0[arg0[1].flags]), (u8) 2, 0.0f);
}

void func_808DF560(Actor *arg0) {
    f32 sp30;

    arg0->unk_144 = 5;
    if (Rand_ZeroOne() > 0.5f) {
        arg0[1].flags = 0;
    } else {
        arg0[1].flags = 1;
    }
    D_801BDAA4 = 0;
    sp30 = func_808DE728(arg0);
    SkelAnime_ChangeAnim((SkelAnime *) &arg0[1].targetArrowOffset, D_808DFEC0[arg0[1].flags], sp30, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_808DFEC0[arg0[1].flags]), (u8) 2, 0.0f);
}

void func_808DF620(Actor *arg0, void *arg1) {
    s16 sp36;
    f32 *sp30;
    f32 *temp_a0_2;
    s16 temp_a0;
    u32 temp_v1;

    if (D_801BDAA4 != 0) {
        D_801BDAA4 = 0;
        func_8019F1C0(arg0 + 0xEC, 0x2844U);
        func_808DF788(arg0);
        return;
    }
    arg0->speedXZ = 0.0f;
    temp_a0 = Actor_YawBetweenActors(arg0, arg1->unk_1CCC) - arg0->world.rot.y;
    sp36 = temp_a0;
    if ((Math_CosS(temp_a0) < 0.7071f) && (arg0[1].flags == 2)) {
        func_800F415C(arg0, &arg1->unk_1CCC->world, 0x12C);
    }
    temp_a0_2 = &arg0[1].targetArrowOffset;
    sp30 = temp_a0_2;
    if (SkelAnime_FrameUpdateMatrix((SkelAnime *) temp_a0_2) != 0) {
        if (Math_CosS(sp36) < 0.0f) {
            arg0[1].flags = 2;
            temp_v1 = arg0[1].flags;
            SkelAnime_ChangeAnim((SkelAnime *) sp30, D_808DFEC0[temp_v1], *(&D_808DFF18 + (temp_v1 * 4)), 0.0f, (f32) SkelAnime_GetFrameCount(*D_808DFEC8), (u8) 2, -5.0f);
            return;
        }
        func_808DF560(arg0);
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_808DF788(Actor *arg0) {
    f32 sp30;

    arg0[1].xzDistToPlayer = 0.0f;
    arg0->unk_144 = 4;
    arg0[1].flags = 2;
    arg0[1].yDistToPlayer = 0.0f;
    arg0->speedXZ = 2.0f;
    sp30 = func_808DE728(arg0);
    SkelAnime_ChangeAnim((SkelAnime *) &arg0[1].targetArrowOffset, D_808DFEC0[arg0[1].flags], sp30, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_808DFEC0[arg0[1].flags]), (u8) 2, -5.0f);
}

void func_808DF838(Actor *arg0, void *arg1) {
    f32 sp34;
    f32 *sp30;
    f32 *temp_a0;
    s32 temp_t8;
    u32 temp_v0;
    f32 phi_f0;
    u32 phi_v0;

    temp_t8 = arg0[1].xzDistToPlayer + 1;
    arg0[1].xzDistToPlayer = temp_t8;
    if (temp_t8 >= 0x12D) {
        arg0[1].yDistToPlayer = 1;
    }
    temp_v0 = arg0[1].flags;
    if ((temp_v0 == 4) || (temp_v0 == 3) || (temp_v0 == 2)) {
        if (arg0[1].yDistToPlayer == 0) {
            func_800F415C(arg0, arg1->unk_1CCC + 0x24, 0x12C);
        } else {
            func_800F415C(arg0, arg0 + 8, 0x12C);
        }
    }
    temp_a0 = &arg0[1].targetArrowOffset;
    sp30 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix((SkelAnime *) temp_a0) != 0) {
        if ((bitwise s32) arg0[1].yDistToPlayer == 0) {
            phi_f0 = Actor_XZDistanceBetweenActors(arg0, arg1->unk_1CCC);
        } else {
            phi_f0 = Math3D_Distance((Vec3f *) &arg0->world, (Vec3f *) &arg0->home);
        }
        if ((bitwise s32) arg0[1].yDistToPlayer == 0) {
            if (phi_f0 >= 300.0f) {
                arg0->speedXZ = 6.0f;
                phi_v0 = 4U;
            } else if (phi_f0 >= 150.0f) {
                arg0->speedXZ = 4.0f;
                phi_v0 = 3U;
            } else {
                arg0[1].colChkInfo.displacement.x = 0.0f;
                arg0->speedXZ = 2.0f;
                phi_v0 = 2U;
            }
            goto block_25;
        }
        if (phi_f0 >= 300.0f) {
            arg0->speedXZ = 6.0f;
            phi_v0 = 4U;
            goto block_25;
        }
        if (phi_f0 >= 150.0f) {
            arg0->speedXZ = 4.0f;
            phi_v0 = 3U;
            goto block_25;
        }
        if (phi_f0 >= 70.0f) {
            arg0[1].colChkInfo.displacement.x = 0.0f;
            arg0->speedXZ = 2.0f;
            phi_v0 = 2U;
block_25:
            if (phi_v0 != arg0[1].flags) {
                arg0[1].flags = phi_v0;
                sp34 = func_808DE728(arg0);
                SkelAnime_ChangeAnim((SkelAnime *) sp30, D_808DFEC0[arg0[1].flags], sp34, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_808DFEC0[arg0[1].flags]), (u8) 2, -5.0f);
                return;
            }
            sp34 = func_808DE728(arg0);
            SkelAnime_ChangeAnim((SkelAnime *) sp30, D_808DFEC0[arg0[1].flags], sp34, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_808DFEC0[arg0[1].flags]), (u8) 2, 0.0f);
            /* Duplicate return node #28. Try simplifying control flow for better match */
            return;
        }
        func_808DF560(arg0);
    }
}

void EnHorseLinkChild_Update(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    u8 temp_t3;
    u8 temp_v0;
    u8 temp_v0_2;
    EnHorseLinkChild *this = (EnHorseLinkChild *) thisx;

    *(&D_808DFF30 + (this->unk_144 * 4))(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 55.0f, 100.0f, 0x1DU);
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    this->actor.focus.pos.y += 70.0f;
    temp_a2 = &this->unk_1EC;
    if ((Rand_ZeroOne() < 0.025f) && (temp_v0 = this->unk_1E4, (temp_v0 == 0))) {
        this->unk_1E4 = temp_v0 + 1;
    } else {
        temp_v0_2 = this->unk_1E4;
        temp_t3 = temp_v0_2 + 1;
        if ((s32) temp_v0_2 > 0) {
            this->unk_1E4 = temp_t3;
            if ((temp_t3 & 0xFF) >= 4) {
                this->unk_1E4 = 0;
            }
        }
    }
    sp2C = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    func_808DE660(this);
}

void func_808DFC3C(void *arg0, GlobalContext *arg1, ? arg2) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp40;
    f32 *temp_a2;
    s32 temp_s2;
    void *temp_v0;
    s32 phi_s0;
    s32 phi_s2;

    phi_s0 = 0;
    phi_s2 = 0;
    if (arg0->unk_250 > 0) {
        do {
            temp_a2 = &sp4C;
            sp4C = (f32) (arg0->unk_254 + phi_s0)->unk_28;
            sp50 = (f32) (arg0->unk_254 + phi_s0)->unk_2A;
            sp54 = (f32) (arg0->unk_254 + phi_s0)->unk_2C;
            func_80138300(arg2, (arg0->unk_254 + phi_s0)->unk_3C, temp_a2, &sp40);
            temp_s2 = phi_s2 + 1;
            (arg0->unk_254 + phi_s0)->unk_30 = (s16) (s32) sp40;
            (arg0->unk_254 + phi_s0)->unk_32 = (s16) (s32) sp44;
            (arg0->unk_254 + phi_s0)->unk_34 = (s16) (s32) sp48;
            temp_v0 = arg0->unk_254 + phi_s0;
            temp_v0->unk_36 = (s16) (s32) (temp_v0->unk_38 * (f32) temp_v0->unk_2E);
            phi_s0 += 0x40;
            phi_s2 = temp_s2;
        } while (temp_s2 < arg0->unk_250);
    }
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, arg0 + 0x238);
}

? func_808DFDC8(void *arg0, void **arg1, s32 arg2, ? arg3) {
    s32 *sp1C;
    s32 *temp_v0;
    void *temp_v1;

    temp_v1 = *arg1;
    if (arg2 == 0xD) {
        temp_v0 = temp_v1->unk_2B0;
        temp_v1->unk_2B0 = (s32 *) (temp_v0 + 8);
        *temp_v0 = 0xDB060020;
        sp1C = temp_v0;
        sp1C[1] = Lib_SegmentedToVirtual(*(&D_808DFF48 + (*(&D_808DFF54 + arg0->unk_1E4) * 4)));
    }
    return 1;
}

void EnHorseLinkChild_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnHorseLinkChild *this = (EnHorseLinkChild *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    func_80138258(this, globalCtx, &this->unk_14C, func_808DFC3C, func_808DFDC8, 1);
}
