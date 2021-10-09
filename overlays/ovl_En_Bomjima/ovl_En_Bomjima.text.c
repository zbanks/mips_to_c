CRASHED

typedef struct EnBomjima {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x188 */ Vec3s unk188;                       /* inferred */
    /* 0x18E */ char pad18E[0x78];                  /* maybe part of unk188[21]? */
    /* 0x206 */ Vec3s unk206;                       /* inferred */
    /* 0x20C */ char pad20C[0x78];                  /* maybe part of unk206[21]? */
    /* 0x284 */ void (*actionFunc)(EnBomjima *, GlobalContext *);
    /* 0x288 */ s16 unk288;                         /* inferred */
    /* 0x28A */ s16 unk28A;                         /* inferred */
    /* 0x28C */ char pad28C[0x2];
    /* 0x28E */ s16 unk28E;                         /* inferred */
    /* 0x290 */ s16 unk290;                         /* inferred */
    /* 0x292 */ char pad292[0x2];
    /* 0x294 */ s16 unk294;                         /* inferred */
    /* 0x296 */ char pad296[0x4];                   /* maybe part of unk294[3]? */
    /* 0x29A */ s16 unk29A;                         /* inferred */
    /* 0x29C */ char pad29C[0x4];                   /* maybe part of unk29A[3]? */
    /* 0x2A0 */ s16 unk2A0;                         /* inferred */
    /* 0x2A2 */ s16 unk2A2;                         /* inferred */
    /* 0x2A4 */ Vec3f unk2A4;                       /* inferred */
    /* 0x2B0 */ Vec3f unk2B0;                       /* inferred */
    /* 0x2BC */ s16 unk2BC;                         /* inferred */
    /* 0x2BE */ s16 unk2BE;                         /* inferred */
    /* 0x2C0 */ s16 unk2C0;                         /* inferred */
    /* 0x2C2 */ s16 unk2C2;                         /* inferred */
    /* 0x2C4 */ s16 unk2C4;                         /* inferred */
    /* 0x2C6 */ s16 unk2C6;                         /* inferred */
    /* 0x2C8 */ s16 unk2C8;                         /* inferred */
    /* 0x2CA */ s16 unk2CA;                         /* inferred */
    /* 0x2CC */ f32 unk2CC;                         /* inferred */
    /* 0x2D0 */ char pad2D0[0x4];
    /* 0x2D4 */ s16 unk2D4;                         /* inferred */
    /* 0x2D6 */ s16 unk2D6;                         /* inferred */
    /* 0x2D8 */ char pad2D8[0x4];                   /* maybe part of unk2D6[3]? */
    /* 0x2DC */ s16 unk2DC;                         /* inferred */
    /* 0x2DE */ s16 unk2DE;                         /* inferred */
    /* 0x2E0 */ s16 unk2E0;                         /* inferred */
    /* 0x2E2 */ s16 unk2E2;                         /* inferred */
    /* 0x2E4 */ s16 unk2E4;                         /* inferred */
    /* 0x2E6 */ s16 unk2E6;                         /* inferred */
    /* 0x2E8 */ s16 unk2E8;                         /* inferred */
    /* 0x2EA */ s16 unk2EA;                         /* inferred */
    /* 0x2EC */ s32 unk2EC;                         /* inferred */
    /* 0x2F0 */ Actor *unk2F0;                      /* inferred */
    /* 0x2F4 */ s16 unk2F4;                         /* inferred */
    /* 0x2F6 */ char pad2F6[0x2];
    /* 0x2F8 */ ColliderCylinder unk2F8;            /* inferred */
} EnBomjima;                                        /* size = 0x344 */

struct _mips2c_stack_EnBomjima_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnBomjima_Draw {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnBomjima_Init {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnBomjima_Update {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BFE494 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BFE524 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BFE65C {};              /* size 0x0 */

struct _mips2c_stack_func_80BFE67C {
    /* 0x00 */ char pad0[0x38];
    /* 0x38 */ s16 *sp38;                           /* inferred */
    /* 0x3C */ Vec3f *sp3C;                         /* inferred */
    /* 0x40 */ Vec3f *sp40;                         /* inferred */
    /* 0x44 */ char pad44[0x8];                     /* maybe part of sp40[3]? */
    /* 0x4C */ u32 sp4C;                            /* inferred */
    /* 0x50 */ CollisionPoly *sp50;                 /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad58[0x4];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad64[0x4];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ ? sp6C;                              /* inferred */
    /* 0x6C */ char pad6C[0x18];
    /* 0x84 */ f32 sp84;                            /* inferred */
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_80BFEA94 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BFEB1C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BFEB64 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad38[0x6];                     /* maybe part of sp34[2]? */
    /* 0x3E */ s16 sp3E;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad4C[0x8];                     /* maybe part of sp48[3]? */
    /* 0x54 */ Actor *sp54;                         /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80BFEFF0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BFF03C {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BFF120 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BFF174 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ Actor *sp28;                         /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BFF3F0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BFF430 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BFF4F4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BFF52C {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BFF6CC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BFF754 {
    /* 0x00 */ char pad0[0xA0];
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ char padAC[0x4];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_80BFF9B0 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ Actor *sp1C;                         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BFFB40 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BFFBC4 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BFFCFC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BFFD48 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BFFE48 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BFFF54 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C0011C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C00168 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C00234 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C00284 {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C007F4 {};              /* size 0x0 */

? func_80BFE32C(EnBomjima *, GlobalContext *, s16); /* static */
void func_80BFE494(EnBomjima *arg0, s32 arg1, f32 arg2, EnBomjima *); /* static */
void func_80BFE524(Actor *arg0);                    /* static */
void func_80BFE65C(EnBomjima *arg0, EnBomjima *);   /* static */
void func_80BFE67C(EnBomjima *arg0, GlobalContext *arg1); /* static */
void func_80BFEB1C(EnBomjima *arg0);                /* static */
void func_80BFEFF0(EnBomjima *arg0);                /* static */
void func_80BFF120(EnBomjima *arg0);                /* static */
void func_80BFF3F0(EnBomjima *arg0);                /* static */
void func_80BFF4F4(EnBomjima *arg0);                /* static */
void func_80BFFCFC(EnBomjima *arg0);                /* static */
void func_80C0011C(EnBomjima *arg0);                /* static */
void func_80C00234(EnBomjima *arg0);                /* static */
s32 func_80C007F4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
extern AnimationHeader D_060064B8;
extern FlexSkeletonHeader D_0600F82C;
static s32 D_80C009F0 = 0;
static s32 D_80C009F4 = 0;
static ColliderCylinderInit D_80C00A18 = {
    {0xA, 0, 0, 9, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1},
    {0xA, 0x1E, 0, {0, 0, 0}},
};
static ? D_80C00A54;                                /* unable to generate initializer */
static ? D_80C00A70;                                /* unable to generate initializer */
static ? D_80C00A8C;                                /* unable to generate initializer */
static ? D_80C00A94;                                /* unable to generate initializer */
static ? D_80C00AE4;                                /* unable to generate initializer */
static ? D_80C00AF8;                                /* unable to generate initializer */
static ? D_80C00B28;                                /* unable to generate initializer */
static ? D_80C00B3C;                                /* unable to generate initializer */
static ? D_80C00B48;                                /* unable to generate initializer */

void EnBomjima_Init(EnBomjima *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s8 temp_s0;
    s16 phi_s0;
    EnBomjima *phi_s1;
    EnBomjima *this = (EnBomjima *) thisx;

    this->actor.colChkInfo.mass = 0xFF;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 19.0f);
    this->actor.gravity = -3.0f;
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_0600F82C, &D_060064B8, &this->unk188, &this->unk206, 0x15);
    Collider_InitAndSetCylinder(globalCtx, &this->unk2F8, (Actor *) this, &D_80C00A18);
    gSaveContext.weekEventReg[83] &= 0xFB;
    temp_v1 = this->actor.params;
    this->actor.targetMode = 0;
    this->unk2E6 = ((s32) temp_v1 >> 4) & 0xF;
    this->unk2E4 = temp_v1 & 0xF;
    Actor_SetScale((Actor *) this, 0.01f);
    temp_v0 = this->unk2E6;
    if (temp_v0 == 0) {
        temp_s0 = this->actor.cutscene;
        phi_s0 = (s16) temp_s0;
        phi_s1 = this;
        if (temp_s0 != -1) {
            do {
                phi_s1->unk2D4 = phi_s0;
                temp_v0_2 = ActorCutscene_GetAdditionalCutscene(phi_s0);
                phi_s0 = temp_v0_2;
                phi_s1 += 2;
            } while (temp_v0_2 != -1);
        }
        this->actionFunc = func_80BFEA94;
    } else if (temp_v0 == 2) {
        func_80BFFCFC(this);
    }
    if (((gSaveContext.weekEventReg[75] & 0x40) != 0) || ((gSaveContext.weekEventReg[73] & 0x10) != 0) || ((gSaveContext.weekEventReg[85] & 2) != 0)) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void EnBomjima_Destroy(EnBomjima *this, GlobalContext *globalCtx) {
    EnBomjima *this = (EnBomjima *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk2F8);
}

/*
Failed to decompile function func_80BFE32C:

Label L80BFE400 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void func_80BFE494(EnBomjima *arg0, s32 arg1, f32 arg2) {
    f32 temp_f0;
    s32 temp_v1;

    arg0->unk2EC = arg1;
    temp_f0 = (f32) SkelAnime_GetFrameCount(*(&D_80C00A94 + (arg1 * 4)));
    temp_v1 = arg0->unk2EC;
    arg0->unk2CC = temp_f0;
    SkelAnime_ChangeAnim(arg0 + 0x144, *(&D_80C00A94 + (temp_v1 * 4)), arg2, 0.0f, temp_f0, (u8) (s32) *(&D_80C00AE4 + temp_v1), -4.0f);
}

void func_80BFE524(Actor *arg0) {
    Actor *temp_s0_2;
    SkelAnime *temp_s0;

    temp_s0 = arg0 + 0x144;
    if ((arg0->unk2EC == 5) && ((func_801378B8(temp_s0, 9.0f) != 0) || (func_801378B8(temp_s0, 10.0f) != 0) || (func_801378B8(temp_s0, 17.0f) != 0) || (func_801378B8(temp_s0, 18.0f) != 0))) {
        Audio_PlayActorSound2(arg0, 0x292CU);
    }
    temp_s0_2 = arg0 + 0x144;
    if ((arg0->unk2EC == 0x12) && ((func_801378B8((SkelAnime *) temp_s0_2, 0.0f) != 0) || (func_801378B8((SkelAnime *) temp_s0_2, 2.0f) != 0) || (func_801378B8((SkelAnime *) temp_s0_2, 4.0f) != 0) || (func_801378B8((SkelAnime *) temp_s0_2, 6.0f) != 0))) {
        Audio_PlayActorSound2(arg0, 0x292CU);
    }
    if ((arg0->unk2EC == 0xF) && (func_801378B8((SkelAnime *) (arg0 + 0x144), 15.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x292DU);
    }
    if ((arg0->unk2EC == 6) && (func_801378B8((SkelAnime *) (arg0 + 0x144), 8.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x292DU);
    }
}

void func_80BFE65C(EnBomjima *arg0) {
    arg0->unk2BC = 0;
    arg0->unk2C0 = 0;
    arg0->unk2BE = 0;
    arg0->unk2A2 = 0;
    arg0->unk290 = 0;
    arg0->unk29A = 0;
}

void func_80BFE67C(EnBomjima *arg0, GlobalContext *arg1) {
    f32 sp84;
    ? sp6C;
    f32 sp68;
    f32 sp60;
    f32 sp5C;
    f32 sp54;
    CollisionPoly *sp50;
    u32 sp4C;
    Vec3f *sp40;
    Vec3f *sp3C;
    s16 *sp38;
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s16 *temp_a0_2;
    s16 temp_v0;
    s16 temp_v1;
    s16 phi_v1;
    s32 phi_v1_2;

    temp_a0 = arg0 + 0x24;
    temp_a1 = arg0 + 0x2A4;
    sp3C = temp_a1;
    sp40 = temp_a0;
    sp84 = arg0->unk144.animCurrentFrame;
    arg0->unk2DC = Math_Vec3f_Yaw(temp_a0, temp_a1);
    temp_a0_2 = arg0 + 0x32;
    sp38 = temp_a0_2;
    Math_SmoothStepToS(temp_a0_2, arg0->unk2DC, 1, 0x1388, (s16) 0);
    temp_v1 = arg0->unk2A2;
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {
            return;
        }
        if (sp84 >= 0.0f) {
            arg0->unk2DC = Math_Vec3f_Yaw(sp40, sp3C);
            Math_SmoothStepToS(sp38, arg0->unk2DC, 0xA, 0x7D0, (s16) 0x14);
        }
        temp_v0 = arg0->actor.world.rot.y - arg0->unk2DC;
        phi_v1 = temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = (s16) -(s32) temp_v0;
        }
        if (((s32) phi_v1 < 0x100) && (Math_Vec3f_Copy((Vec3f *) &sp60, sp40), sp60 += Math_SinS(arg0->actor.world.rot.y) * 60.0f, sp68 += Math_CosS(arg0->actor.world.rot.y) * 60.0f, (func_800C55C4(arg1 + 0x830, sp40, (Vec3f *) &sp60, (Vec3f *) &sp6C, &sp50, 1U, 0U, 0U, 1U, &sp4C) != 0))) {
            arg0->unk2C0 = 0;
            if (Rand_ZeroOne() < 0.5f) {
                func_80BFE494(arg0, 0x13, 1.0f);
            } else {
                func_80BFE494(arg0, 0, 1.0f);
            }
            arg0->unk2A2 = 0;
            arg0->unk2D0 = 0.0f;
            return;
        }
        temp_f12 = arg0->unk2A4.x;
        temp_f2 = temp_f12 - arg0->actor.world.pos.x;
        temp_f14 = arg0->unk2A4.z - arg0->actor.world.pos.z;
        if ((arg0->unk2BE == 0) || (sqrtf((temp_f2 * temp_f2) + (temp_f14 * temp_f14)) < 4.0f)) {
            arg0->unk2C0 = Rand_S16Offset(0x14, 0x14);
            if ((arg0->unk2C0 & 1) == 0) {
                func_80BFE494(arg0, 0x13, 1.0f);
            } else {
                func_80BFE494(arg0, 0, 1.0f);
            }
            arg0->unk2A2 = 0;
            arg0->unk2D0 = 0.0f;
            return;
        }
        if (sp84 >= 0.0f) {
            Math_ApproachF((f32 *) sp40, temp_f12, 0.3f, arg0->unk2D0);
            Math_ApproachF(arg0 + 0x2C, arg0->unk2A4.z, 0.3f, arg0->unk2D0);
            Math_ApproachF(arg0 + 0x2D0, 1.0f, 0.3f, 0.5f);
        }
        /* Duplicate return node #28. Try simplifying control flow for better match */
        return;
    }
    if (arg0->unk2C0 == 0) {
        Math_Vec3f_Copy((Vec3f *) &sp54, arg0 + 8);
        sp54 += randPlusMinusPoint5Scaled(150.0f);
        sp5C += randPlusMinusPoint5Scaled(150.0f);
        if ((s32) (s16) (arg0->actor.world.rot.y - Math_Vec3f_Yaw(sp40, (Vec3f *) &sp54)) < 0) {
            phi_v1_2 = (s32) (s16) (arg0->actor.world.rot.y - Math_Vec3f_Yaw(sp40, (Vec3f *) &sp54)) * -0x10000;
        } else {
            phi_v1_2 = (arg0->actor.world.rot.y - Math_Vec3f_Yaw(sp40, (Vec3f *) &sp54)) << 0x10;
        }
        if (((phi_v1_2 >> 0x10) < 0x4000) && (func_800C55C4(arg1 + 0x830, sp40, (Vec3f *) &sp54, (Vec3f *) &sp6C, &sp50, 1U, 0U, 0U, 1U, &sp4C) == 0)) {
            func_80BFE494(arg0, 5, 1.0f);
            Math_Vec3f_Copy(sp3C, (Vec3f *) &sp54);
            arg0->unk2BE = Rand_S16Offset(0x1E, 0x32);
            arg0->unk2A2 += 1;
            return;
        }
        /* Duplicate return node #28. Try simplifying control flow for better match */
    }
}

void func_80BFEA94(EnBomjima *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    Actor *temp_v0_2;
    Vec3f *temp_a0;
    Actor *phi_v0;

    temp_v0 = globalCtx->actorCtx.actorList[6].first;
    temp_a0 = &this->unk2B0;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
loop_1:
        if (phi_v0->id != 0x282) {
            temp_v0_2 = phi_v0->next;
            phi_v0 = temp_v0_2;
            if (temp_v0_2 == 0) {
                /* Duplicate return node #7. Try simplifying control flow for better match */
                return;
            }
            goto loop_1;
        }
        this->unk2F0 = phi_v0;
        this = this;
        Math_Vec3f_Copy(temp_a0, phi_v0 + 0x24);
        if (this->unk2F4 == 0) {
            this->unk2F4 = (s16) this->unk2F0->cutscene;
        }
        func_80BFEB1C(this);
    }
}

void func_80BFEB1C(EnBomjima *arg0) {
    func_80BFE494(arg0, 1, 1.0f);
    func_80BFE65C(arg0);
    arg0->unk2A0 = 0;
    arg0->actionFunc = func_80BFEB64;
}

void func_80BFEB64(EnBomjima *this, GlobalContext *globalCtx) {
    Actor *sp54;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    s16 sp3E;
    f32 sp34;
    PosRot *sp2C;
    Actor *temp_v0_2;
    PosRot *temp_a0;
    PosRot *temp_a0_2;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f4;
    s16 temp_v1;
    s32 temp_a0_3;
    u8 temp_v0;
    s32 phi_a0;

    sp54 = globalCtx->actorCtx.actorList[2].first;
    func_80BFE32C(this, NULL);
    temp_v0 = sp54->unk14B;
    if (temp_v0 == 3) {
        if ((gSaveContext.weekEventReg[73] & 0x20) != 0) {
            this->unk2C8 = 3;
            func_80BFE32C(this, globalCtx, 3);
        } else if ((gSaveContext.weekEventReg[77] & 2) != 0) {
            this->unk2C8 = 0xB;
            func_80BFE32C(this, globalCtx, 2);
        }
    } else if (temp_v0 == 4) {
        if ((gSaveContext.weekEventReg[84] & 0x80) != 0) {
            this->unk2C8 = 0;
            func_80BFE32C(this, globalCtx, 3);
        } else if ((gSaveContext.weekEventReg[85] & 1) != 0) {
            this->unk2C8 = 0xB;
            func_80BFE32C(this, globalCtx, 2);
        }
    }
    if (Text_GetFaceReaction(globalCtx, 0x11U) != 0) {
        this->actor.textId = Text_GetFaceReaction(globalCtx, 0x11U);
    }
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->unk2DC = this->actor.yawTowardsPlayer;
        func_80C00234(this);
        return;
    }
    if (ActorCutscene_GetCurrentIndex() == -1) {
        func_800B8614((Actor *) this, globalCtx, 70.0f);
    }
    temp_v0_2 = this->unk2F0;
    if ((temp_v0_2->update == 0) || (temp_v0_2->colChkInfo.health == 0)) {
        func_80BFEFF0(this);
        return;
    }
    temp_v1 = this->unk2A2;
    if (temp_v1 != 0) {
        temp_a0 = &this->actor.world;
        if (temp_v1 != 1) {
            temp_a0_2 = &this->actor.world;
            if (temp_v1 != 2) {

            } else {
                sp2C = temp_a0_2;
                this->unk2DC = Math_Vec3f_Yaw((Vec3f *) temp_a0_2, &this->unk2A4);
                Math_ApproachF((f32 *) temp_a0_2, this->unk2A4.x, 0.3f, 2.0f);
                Math_ApproachF(&this->actor.world.pos.z, this->unk2A4.z, 0.3f, 2.0f);
                temp_f2 = this->actor.world.pos.x - this->unk2A4.x;
                temp_f12 = this->actor.world.pos.z - this->unk2A4.z;
                if (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < 4.0f) {
                    func_80BFE65C((bitwise EnBomjima *) temp_f12, this);
                }
            }
        } else {
            sp2C = temp_a0;
            this->unk2DC = Math_Vec3f_Yaw((Vec3f *) temp_a0, (Vec3f *) &temp_v0_2->world);
            if (func_801378B8(&this->unk144, 19.0f) != 0) {
                this->unk2C0 = 5;
                Audio_PlayActorSound2((Actor *) this, 0x292EU);
            }
            if (this->unk2C0 == 1) {
                sp3E = Math_Vec3f_Yaw((Vec3f *) sp2C, (Vec3f *) &this->unk2F0->world);
                if (Rand_ZeroOne() < 0.5f) {
                    phi_a0 = (sp3E + 0x4000) << 0x10;
                } else {
                    phi_a0 = (sp3E + 0xC000) << 0x10;
                }
                temp_a0_3 = phi_a0 >> 0x10;
                sp3E = (s16) temp_a0_3;
                sp34 = Math_SinS((s16) temp_a0_3);
                sp40 = ((Rand_ZeroFloat(20.0f) + 40.0f) * sp34) + this->unk2F0->world.pos.x;
                sp44 = this->unk2F0->world.pos.y - randPlusMinusPoint5Scaled(40.0f);
                sp34 = Math_CosS((s16) temp_a0_3);
                sp48 = ((Rand_ZeroFloat(20.0f) + 40.0f) * sp34) + this->unk2F0->world.pos.z;
                Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &sp40, 0x32, 0x292FU);
                EffectSsHitMark_SpawnFixedScale(globalCtx, 0, (Vec3f *) &sp40);
                this->unk2BC += 1;
                if (((s16) (s32) Rand_ZeroFloat(2.0f) + 3) < (s32) this->unk2BC) {
                    func_80BFE494(this, 5, 1.0f);
                    this->unk29A = 0;
                    Math_Vec3f_Copy(&this->unk2A4, (Vec3f *) &this->actor.home);
                    this->unk2A4.x += randPlusMinusPoint5Scaled(150.0f);
                    temp_f4 = this->unk2A4.z + randPlusMinusPoint5Scaled(150.0f);
                    this->unk2A2 += 1;
                    this->unk2A4.z = temp_f4;
                }
            }
        }
    } else {
        func_80BFE494(this, 4, 1.0f);
        this->unk29A = -0x1B58;
        this->unk2A2 += 1;
    }
    Math_SmoothStepToS(&this->actor.world.rot.y, this->unk2DC, 1, 0x1388, (s16) 0);
}

void func_80BFEFF0(EnBomjima *arg0) {
    arg0->unk2F0 = NULL;
    func_80BFE494((EnBomjima *)0x13, 0x3F800000);
    func_80BFE65C(arg0);
    arg0->unk2A0 = 1;
    arg0->actionFunc = func_80BFF03C;
}

void func_80BFF03C(EnBomjima *this, GlobalContext *globalCtx) {
    Actor *sp24;

    sp24 = globalCtx->actorCtx.actorList[2].first;
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
        ActorCutscene_SetIntentToPlay(this->unk2D4);
        return;
    }
    if (ActorCutscene_GetCanPlayNext(this->unk2D4) == 0) {
        ActorCutscene_SetIntentToPlay(this->unk2D4);
        return;
    }
    sp24->unkA6C = (s32) (sp24->unkA6C & ~0x20);
    gSaveContext.weekEventReg[83] &= 0xFB;
    this->actor.world.rot.y = func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]);
    this->unk2DC = func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]);
    ActorCutscene_StartAndSetUnkLinkFields(this->unk2D4, (Actor *) this);
    func_80BFF120(this);
}

void func_80BFF120(EnBomjima *arg0) {
    func_80BFE65C();
    arg0->unk2C4 = 0x1E;
    func_80BFE494(arg0, 6, 1.0f);
    arg0->unk2DE = 0;
    arg0->unk2A0 = 2;
    arg0->actionFunc = func_80BFF174;
}

void func_80BFF174(EnBomjima *this, GlobalContext *globalCtx) {
    f32 sp2C;
    Actor *sp28;
    s16 temp_v0;
    u8 temp_v0_2;

    sp2C = this->unk144.animCurrentFrame;
    sp28 = globalCtx->actorCtx.actorList[2].first;
    if (this->unk2C4 == 1) {
        ActorCutscene_Stop(this->unk2D4);
        this->unk2DE = 1;
    }
    if (Text_GetFaceReaction(globalCtx, 0x11U) != 0) {
        this->actor.textId = Text_GetFaceReaction(globalCtx, 0x11U);
    }
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->unk2DC = this->actor.yawTowardsPlayer;
        func_80C00234(this);
        return;
    }
    Math_SmoothStepToS(&this->actor.world.rot.y, this->unk2DC, 1, 0x1388, (s16) 0);
    if (this->unk2CC <= sp2C) {
        temp_v0 = this->unk2BC;
        if ((s32) temp_v0 < 5) {
            this->unk2BC = temp_v0 + 1;
            if (this->unk2EC != 0x13) {
                func_80BFE494(this, 0x13, 1.0f);
            }
        }
    }
    temp_v0_2 = sp28->unk14B;
    if (temp_v0_2 == 3) {
        if ((gSaveContext.weekEventReg[73] & 0x20) != 0) {
            this->unk2C8 = 3;
            func_80BFE32C(this, globalCtx, 3);
        } else {
            if ((gSaveContext.weekEventReg[77] & 2) == 0) {
                if (this->unk2E8 == 0) {
                    this->unk2C8 = 4;
                } else {
                    this->unk2C8 = 3;
                }
            } else {
                this->unk2C8 = 0xB;
            }
            func_80BFE32C(this, globalCtx, 2);
        }
    } else if (temp_v0_2 == 4) {
        if ((gSaveContext.weekEventReg[84] & 0x80) != 0) {
            this->unk2C8 = 0;
            func_80BFE32C(this, globalCtx, 3);
        } else {
            if ((gSaveContext.weekEventReg[85] & 1) == 0) {
                if (this->unk2EA == 0) {
                    this->unk2C8 = 4;
                } else {
                    this->unk2C8 = 3;
                }
            } else {
                this->unk2C8 = 0xB;
            }
            func_80BFE32C(this, globalCtx, 2);
        }
    } else if (this->unk2CA != 1) {
        func_80BFE32C(this, globalCtx, 1);
    }
    if (this->unk2DE != 0) {
        if ((s32) this->unk2BC >= 5) {
            func_80BFE67C(this, globalCtx);
        }
        func_800B8614((Actor *) this, globalCtx, 70.0f);
    }
}

void func_80BFF3F0(EnBomjima *arg0) {
    func_80BFE494((EnBomjima *)0xF, 0x3F800000);
    arg0->unk2A0 = 3;
    arg0->actionFunc = func_80BFF430;
}

void func_80BFF430(EnBomjima *this, GlobalContext *globalCtx) {
    Actor *temp_v0;

    if (this->unk2CC <= this->unk144.animCurrentFrame) {
        temp_v0 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x282, this->unk2B0.x, this->unk2B0.y, this->unk2B0.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
        if (temp_v0 != 0) {
            temp_v0->unk150 = 0.0f;
            temp_v0->unk14C = (s16) this->unk2F4;
            func_800B86C8((Actor *) this, globalCtx, temp_v0);
            gSaveContext.weekEventReg[83] &= 0xFB;
            func_80BFE65C(this);
            func_801477B4(globalCtx);
            this->actionFunc = func_80BFEA94;
        }
    }
}

void func_80BFF4F4(EnBomjima *arg0) {
    func_80BFE65C();
    arg0->unk2A0 = 4;
    arg0->actionFunc = func_80BFF52C;
}

void func_80BFF52C(EnBomjima *this, GlobalContext *globalCtx) {
    Actor *sp24;
    Actor *sp20;

    if ((func_80152498(&globalCtx->msgCtx) == 4) && (func_80147624(globalCtx) != 0)) {
        func_801477B4(globalCtx);
        if (globalCtx->msgCtx.choiceIndex == 0) {
            sp24 = globalCtx->actorCtx.actorList[2].first;
            func_8019F208();
            func_80BFE65C(this);
            this->unk28E = 0;
            this->unk29A = 0;
            this->unk2C8 = 8;
            if (sp24->unk14B == 3) {
                this->actor.textId = *(&D_80C00A54 + (this->unk2C8 * 2));
            } else {
                this->actor.textId = *(&D_80C00A70 + (this->unk2C8 * 2));
            }
            func_80151938(globalCtx, this->actor.textId);
            play_sound(0x482CU);
            func_80BFE494(this, 0xF, 1.0f);
            this->unk2A0 = 5;
            this->actionFunc = func_80BFF6CC;
            return;
        }
        sp20 = globalCtx->actorCtx.actorList[2].first;
        func_8019F230();
        func_80BFE65C(this);
        this->unk2C8 = 0xA;
        if (sp20->unk14B == 3) {
            this->unk2E8 = 1;
            this->actor.textId = *(&D_80C00A54 + (this->unk2C8 * 2));
        } else {
            this->unk2EA = 1;
            this->actor.textId = *(&D_80C00A70 + (this->unk2C8 * 2));
        }
        func_80151938(globalCtx, this->actor.textId);
        func_80C00234(this);
        /* Duplicate return node #11. Try simplifying control flow for better match */
    }
}

void func_80BFF6CC(EnBomjima *this, GlobalContext *globalCtx) {
    if (this->unk2CC <= this->unk144.animCurrentFrame) {
        this = this;
        if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
            func_801477B4(globalCtx);
            func_80BFE494(this, 1, 1.0f);
            this->actionFunc = func_80BFF754;
        }
    }
}

void func_80BFF754(EnBomjima *this, GlobalContext *globalCtx) {
    f32 spA8;
    f32 spA4;
    f32 spA0;
    Actor *temp_s0;
    Actor *temp_s3;
    Actor *temp_v0;
    ActorContext *temp_fp;
    f32 *temp_s5;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f4;
    f32 temp_f8;
    s32 temp_s1;
    s32 temp_v0_2;
    void *temp_s0_2;
    s32 phi_s1;

    temp_s0 = globalCtx->actorCtx.actorList[2].first;
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
        ActorCutscene_SetIntentToPlay(this->unk2D6);
        return;
    }
    phi_s1 = 1;
    if (ActorCutscene_GetCanPlayNext(this->unk2D6) == 0) {
        ActorCutscene_SetIntentToPlay(this->unk2D6);
        return;
    }
    temp_s5 = &spA0;
    temp_fp = &globalCtx->actorCtx;
    do {
        Math_Vec3f_Copy((Vec3f *) temp_s5, (Vec3f *) &temp_s0->world);
        temp_f0 = 2.0f + ((f32) phi_s1 * 0.2f);
        temp_f10 = spA0 + ((spA0 - this->actor.world.pos.x) * temp_f0);
        spA0 = temp_f10;
        temp_f4 = spA4 + ((spA4 - this->actor.world.pos.y) * temp_f0);
        temp_f8 = spA8 + ((spA8 - this->actor.world.pos.z) * temp_f0);
        spA4 = temp_f4;
        spA8 = temp_f8;
        temp_v0 = Actor_SpawnAsChild(temp_fp, (Actor *) this, globalCtx, 0x27E, temp_f10, temp_f4, temp_f8, (s16) 0, (s16) 0, (s16) 0, phi_s1 + 0x20);
        temp_s3 = temp_v0;
        if (temp_v0 != 0) {
            temp_v0_2 = phi_s1 * 2;
            temp_s0_2 = (temp_v0_2 * 2) - 4 + &D_80C00AF8;
            Math_Vec3f_Copy((Vec3f *) temp_s5, (Vec3f *) &this->actor.world);
            spA0 += Math_SinS((s16) (((temp_v0_2 * 2) + &D_80C00AF8)->unk-4 + this->actor.world.rot.y)) * (f32) temp_s0_2->unk2;
            spA8 += Math_CosS((s16) (temp_s0_2->unk0 + this->actor.world.rot.y)) * (f32) temp_s0_2->unk2;
            Math_Vec3f_Copy(temp_s3 + 0x2A4, (Vec3f *) temp_s5);
        }
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
    } while (temp_s1 != 5);
    D_80C009F0 = 0;
    ActorCutscene_StartAndSetUnkLinkFields(this->unk2D6, (Actor *) this);
    this->actionFunc = func_80BFF9B0;
}

void func_80BFF9B0(EnBomjima *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    Actor *temp_v1;
    EnBomjima *temp_a0;
    EnBomjima *temp_a3;
    u16 temp_a1;
    u8 temp_t0;
    u8 temp_t0_2;
    u8 temp_t2;
    u8 temp_t2_2;
    u8 temp_t4;
    u8 temp_t4_2;
    u8 temp_t6;
    u8 temp_t6_2;
    u8 temp_t6_3;

    temp_a3 = this;
    temp_a0 = temp_a3;
    if (D_80C009F0 >= 4) {
        temp_v1 = globalCtx->actorCtx.actorList[2].first;
        D_80C009F0 = 0;
        temp_a3->unk2C8 = 9;
        if (temp_v1->unk14B == 3) {
            gSaveContext.weekEventReg[73] |= 0x10;
            gSaveContext.weekEventReg[77] |= 2;
        } else {
            temp_t6 = gSaveContext.weekEventReg[85] | 2;
            gSaveContext.weekEventReg[85] = temp_t6;
            gSaveContext.weekEventReg[85] = temp_t6 | 1;
        }
        gSaveContext.unk_FE6 = 0;
        gSaveContext.unk_FE7[0] = 0;
        temp_t0 = gSaveContext.weekEventReg[11] & 0xFE;
        temp_t2 = temp_t0 & 0xFD;
        gSaveContext.weekEventReg[11] = temp_t0;
        temp_t4 = temp_t2 & 0xFB;
        gSaveContext.weekEventReg[11] = temp_t2;
        temp_t6_2 = temp_t4 & 0xF7;
        gSaveContext.weekEventReg[11] = temp_t4;
        temp_t0_2 = gSaveContext.weekEventReg[76] & 0xFE;
        temp_t2_2 = temp_t0_2 & 0xFD;
        gSaveContext.weekEventReg[11] = temp_t6_2;
        gSaveContext.weekEventReg[76] = temp_t0_2;
        temp_t4_2 = temp_t2_2 & 0xFB;
        gSaveContext.weekEventReg[76] = temp_t2_2;
        temp_t6_3 = temp_t4_2 & 0xF7;
        gSaveContext.weekEventReg[11] = temp_t6_2 & 0xEF;
        gSaveContext.weekEventReg[76] = temp_t4_2;
        gSaveContext.weekEventReg[76] = temp_t6_3;
        gSaveContext.weekEventReg[76] = temp_t6_3 & 0xEF;
        gSaveContext.unk_FE7[1] = 0;
        gSaveContext.unk_FE7[2] = 0;
        gSaveContext.unk_FE7[3] = 0;
        gSaveContext.unk_FE7[4] = 0;
        sp1C = temp_v1;
        this = temp_a3;
        func_80BFE494(temp_a0, 3, 1.0f, temp_a3);
        this->unk2C8 = 9;
        if (temp_v1->unk14B == 3) {
            this->actor.textId = *(&D_80C00A54 + (this->unk2C8 * 2));
        } else {
            this->actor.textId = *(&D_80C00A70 + (this->unk2C8 * 2));
        }
        temp_a1 = this->actor.textId;
        this = this;
        func_80151938(globalCtx, temp_a1);
        this->actionFunc = func_80BFFB40;
    }
}

void func_80BFFB40(EnBomjima *this, GlobalContext *globalCtx) {
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        func_801477B4(globalCtx);
        func_80BFE494(this, 0xF, 1.0f);
        D_80C009F0 = 0x64;
        this->unk2DC = 0;
        this->actionFunc = func_80BFFBC4;
    }
}

void func_80BFFBC4(EnBomjima *this, GlobalContext *globalCtx) {
    if ((this->unk2EC != 1) && (this->unk2CC <= this->unk144.animCurrentFrame)) {
        func_80BFE494(this, 1, 1.0f);
    }
    if ((D_80C009F4 != 0) && (this->unk2C2 == 0)) {
        this->unk2C2 = Rand_S16Offset(5, 5);
    }
    if (this->unk2C2 == 1) {
        this->unk2DC = -0x2710;
    }
    Math_SmoothStepToS(&this->unk290, this->unk2DC, 1, 0x1388, (s16) 0);
    if (D_80C009F0 >= 0x68) {
        D_80C009F0 = 0;
        func_801477B4(globalCtx);
        globalCtx->nextEntranceIndex = Entrance_CreateIndexFromSpawn(6);
        gSaveContext.nextCutsceneIndex = 0;
        globalCtx->sceneLoadFlag = 0x14;
        globalCtx->unk_1887F = 0x56;
        gSaveContext.nextTransition = 3;
        ActorCutscene_Stop(this->unk2D6);
    }
}

void func_80BFFCFC(EnBomjima *arg0) {
    func_80BFE65C(arg0);
    func_80BFE494(arg0, 0x12, 1.0f);
    arg0->unk2A0 = 6;
    arg0->actionFunc = func_80BFFD48;
}

void func_80BFFD48(EnBomjima *this, GlobalContext *globalCtx) {
    PosRot *sp2C;
    PosRot *temp_a0;
    f32 temp_f12;
    f32 temp_f2;

    temp_a0 = &this->actor.world;
    sp2C = temp_a0;
    this->unk2DC = Math_Vec3f_Yaw((Vec3f *) temp_a0, &this->unk2A4);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->unk2DC, 1, 0x1388, (s16) 0);
    Math_ApproachF((f32 *) temp_a0, this->unk2A4.x, 0.3f, 4.0f);
    Math_ApproachF(&this->actor.world.pos.z, this->unk2A4.z, 0.3f, 4.0f);
    temp_f2 = this->actor.world.pos.x - this->unk2A4.x;
    temp_f12 = this->actor.world.pos.z - this->unk2A4.z;
    if (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < 4.0f) {
        D_80C009F0 += 1;
        this->unk2DC = this->actor.parent->world.rot.y;
        func_80BFE494((bitwise EnBomjima *) temp_f12, (s32) this, 0.0f, (EnBomjima *)0x3F800000);
        this->actionFunc = func_80BFFE48;
    }
}

void func_80BFFE48(EnBomjima *this, GlobalContext *globalCtx) {
    Math_SmoothStepToS(&this->actor.world.rot.y, this->unk2DC, 1, 0x1388, (s16) 0);
    Math_ApproachF((f32 *) &this->actor.world, this->unk2A4.x, 0.3f, 4.0f);
    Math_ApproachF(&this->actor.world.pos.z, this->unk2A4.z, 0.3f, 4.0f);
    if (D_80C009F0 >= 0x64) {
        if (this->unk2E4 != 4) {
            func_80BFE494(this, 0xF, 1.0f);
            this->unk2DC = 0;
            func_80BFE65C(this);
            this->actionFunc = func_80BFFF54;
            return;
        }
        Math_SmoothStepToS(&this->unk290, 0x2710, 1, 0x1388, (s16) 0);
        if (D_80C009F0 >= 0x67) {
            this->unk2DC = 0;
            func_80BFE494(this, 0xF, 1.0f);
            func_80BFE65C(this);
            this->actionFunc = func_80BFFF54;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
    }
}

void func_80BFFF54(EnBomjima *this, GlobalContext *globalCtx) {
    f32 sp2C;

    sp2C = this->unk144.animCurrentFrame;
    Math_SmoothStepToS(&this->unk290, this->unk2DC, 1, 0x1388, (s16) 0);
    if ((D_80C009F4 != 0) && (this->unk2C2 == 0)) {
        this->unk2C2 = Rand_S16Offset(5, 5);
    }
    if (this->unk2C2 == 1) {
        this->unk2DC = -0x2710;
    }
    if (this->unk2E4 != 4) {
        if ((this->unk2EC != 0) && (this->unk2CC <= sp2C)) {
            D_80C009F0 += 1;
            func_80BFE494(this, 0, 1.0f);
            goto block_12;
        }
    } else if ((this->unk2EC != 8) && (this->unk2CC <= sp2C)) {
        func_80BFE494(this, 8, 1.0f);
        D_80C009F4 = 1;
block_12:
    }
    if (this->unk2EC == 8) {
        if ((D_80C009F4 == 1) && (func_801378B8(&this->unk144, 7.0f) != 0)) {
            Audio_PlayActorSound2((Actor *) this, 0x2896U);
            D_80C009F4 = 2;
        }
        if ((this->unk2CC <= sp2C) && (this->unk2C0 == 0)) {
            this->unk2C0 = 0xA;
        }
        if (this->unk2C0 == 1) {
            D_80C009F0 = D_80C009F0 + 1;
        }
    }
}

void func_80C0011C(EnBomjima *arg0) {
    func_80BFE65C(arg0);
    func_80BFE494(arg0, 0, 1.0f);
    arg0->unk2A0 = 7;
    arg0->actionFunc = func_80C00168;
}

void func_80C00168(EnBomjima *this, GlobalContext *globalCtx) {
    u8 temp_v1;

    temp_v1 = globalCtx->actorCtx.actorList[2].first->unk14B;
    if (temp_v1 == 4) {
        this->unk2C8 = 4;
    } else if (temp_v1 == 3) {
        this->unk2C8 = 7;
    }
    func_80BFE32C(this, globalCtx, 0);
    func_80BFE67C(this, globalCtx);
    if (Text_GetFaceReaction(globalCtx, 0x11U) != 0) {
        this->actor.textId = Text_GetFaceReaction(globalCtx, 0x11U);
    }
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->unk2DC = this->actor.yawTowardsPlayer;
        func_80C00234(this);
        return;
    }
    func_800B8614((Actor *) this, globalCtx, 70.0f);
}

void func_80C00234(EnBomjima *arg0) {
    func_80BFE494((EnBomjima *)3, 0x3F800000);
    arg0->unk2F8.dim.radius = 0xF;
    arg0->unk2F8.dim.height = 0x28;
    func_80BFE65C(arg0);
    arg0->actionFunc = func_80C00284;
}

void func_80C00284(EnBomjima *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    f32 sp28;
    Actor *temp_v0_8;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s32 temp_v0_7;
    u16 temp_t0;
    u8 temp_v0_2;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    sp28 = this->unk144.animCurrentFrame;
    Math_SmoothStepToS(&this->actor.world.rot.y, this->unk2DC, 1, 0x1388, (s16) 0);
    if (((this->unk2A0 == 0) || (temp_v0 = this->unk2C8, (temp_v0 == 0xA)) || (temp_v0 == 0xB) || (this->unk2CA == 1)) && (this->unk2CC <= sp28)) {
        if ((this->unk2BC & 1) == 0) {
            func_80BFE494(this, 3, 1.0f);
        } else {
            func_80BFE494(this, 0x10, 1.0f);
        }
        this->unk2BC += 1;
        this->unk2BC &= 1;
    }
    temp_v0_2 = sp2C->unk14B;
    if ((temp_v0_2 != 1) && (temp_v0_2 != 2)) {
        if (temp_v0_2 == 4) {
            this->unk28E = -0xFA0;
        }
    } else {
        this->unk28E = -0x1770;
    }
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        this->unk2F8.dim.radius = 0xA;
        this->unk2F8.dim.height = 0x1E;
        if ((this->unk2A0 == 4) || (temp_v0_3 = this->unk2CA, (temp_v0_3 == 1)) || ((temp_v0_3 == 3) && ((s32) this->unk2C8 >= 2))) {
            this->unk28E = 0;
            temp_v0_7 = sp2C->unkA6C;
            if ((temp_v0_7 & 0x20) != 0) {
                sp2C->unkA6C = (s32) (temp_v0_7 & ~0x20);
            }
            temp_v0_8 = this->unk2F0;
            if ((temp_v0_8 == 0) || (temp_v0_8->update == 0) || ((s32) temp_v0_8->colChkInfo.health <= 0)) {
                func_80BFF3F0(this);
                return;
            }
            func_80BFE65C(this);
            func_801477B4(globalCtx);
            this->actionFunc = func_80BFEA94;
            return;
        }
        func_801477B4(globalCtx);
        temp_v0_4 = this->unk2CA;
        if (temp_v0_4 != 0) {
            if (temp_v0_4 != 2) {
                if (temp_v0_4 != 3) {
                    return;
                }
                this->unk2C8 += 1;
                temp_t0 = *(&D_80C00A8C + (this->unk2C8 * 2));
                this->actor.textId = temp_t0;
                func_80151938(globalCtx, temp_t0 & 0xFFFF);
                if ((s32) this->unk2C8 >= 2) {
                    func_80BFE494(this, 0x11, 1.0f);
                }
                /* Duplicate return node #50. Try simplifying control flow for better match */
                return;
            }
            temp_v0_5 = this->unk2C8;
            if (temp_v0_5 == 0xA) {
                func_80BFE65C(this);
                this->unk28E = 0;
                func_80BFE494(this, 1, 1.0f);
                this->unk2A0 = 2;
                this->actionFunc = func_80BFF174;
                return;
            }
            this->unk2C8 = temp_v0_5 + 1;
            if (sp2C->unk14B == 3) {
                if ((this->unk2E8 != 0) && (this->unk2C8 == 4)) {
                    this->unk2C8 = 6;
                }
                this->actor.textId = *(&D_80C00A54 + (this->unk2C8 * 2));
            } else {
                if ((this->unk2EA != 0) && (this->unk2C8 == 4)) {
                    this->unk2C8 = 6;
                }
                this->actor.textId = *(&D_80C00A70 + (this->unk2C8 * 2));
            }
            func_80151938(globalCtx, this->actor.textId);
            temp_v0_6 = this->unk2C8;
            if ((temp_v0_6 == 7) || (temp_v0_6 == 0xC)) {
                func_80BFF4F4(this);
                return;
            }
            /* Duplicate return node #50. Try simplifying control flow for better match */
            return;
        }
        this->unk28E = 0;
        if (this->unk2A0 == 7) {
            func_80C0011C(this);
            return;
        }
        func_80BFEB1C(this);
    }
}

void EnBomjima_Update(EnBomjima *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    EnBomjima *this = (EnBomjima *) thisx;

    temp_v0 = this->unk2BE;
    if (temp_v0 != 0) {
        this->unk2BE = temp_v0 - 1;
    }
    temp_v0_2 = this->unk2C2;
    if (temp_v0_2 != 0) {
        this->unk2C2 = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk2C0;
    if (temp_v0_3 != 0) {
        this->unk2C0 = temp_v0_3 - 1;
    }
    temp_v0_4 = this->unk2C6;
    if (temp_v0_4 != 0) {
        this->unk2C6 = temp_v0_4 - 1;
    }
    temp_v0_5 = this->unk2C4;
    if (temp_v0_5 != 0) {
        this->unk2C4 = temp_v0_5 - 1;
    }
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    this->actor.shape.rot.y = this->actor.world.rot.y;
    func_80BFE524((Actor *) this);
    Actor_SetHeight((Actor *) this, 20.0f);
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Math_SmoothStepToS(&this->unk28A, this->unk290, 1, 0x1388, (s16) 0);
    Math_SmoothStepToS(&this->unk288, this->unk28E, 1, 0x3E8, (s16) 0);
    Math_SmoothStepToS(&this->unk294, this->unk29A, 1, 0x3E8, (s16) 0);
    if (this->unk2E2 == 0) {
        this->unk2E0 += 1;
        if ((s32) this->unk2E0 >= 3) {
            this->unk2E0 = 0;
            this->unk2E2 = (s32) Rand_ZeroFloat(60.0f) + 0x14;
        }
    }
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 50.0f, 0x1DU);
    temp_a2 = &this->unk2F8;
    this->actor.uncullZoneForward = 500.0f;
    sp2C = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
}

s32 func_80C007F4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 8) {
        arg4->z += arg5->unk294;
    }
    if ((arg1 == 0xF) && (arg5->unk2E6 == 2)) {
        *arg2 = NULL;
    }
    if (arg1 == 0x11) {
        arg4->x += arg5->unk28A;
        arg4->z += arg5->unk288;
    }
    if ((arg1 == 0x13) && (arg5->unk2E6 == 2)) {
        *arg2 = NULL;
    }
    if ((arg1 == 0x14) && (arg5->unk2E6 == 0)) {
        *arg2 = NULL;
    }
    return 0;
}

void EnBomjima_Draw(EnBomjima *this, GlobalContext *globalCtx) {
    Gfx *sp38;
    Gfx *sp34;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    EnBomjima *this = (EnBomjima *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp38 = temp_v0;
    sp38->words.w1 = Lib_SegmentedToVirtual(*(&D_80C00B3C + (this->unk2E0 * 4)));
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp34 = temp_v0_2;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_80C00B48 + (this->unk2E4 * 4)));
    temp_v0_3 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060028;
    sp30 = temp_v0_3;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80C00B28 + (this->unk2E4 * 4)));
    Scene_SetRenderModeXlu(globalCtx, 0, 1U);
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80C007F4, NULL, (Actor *) this);
}
