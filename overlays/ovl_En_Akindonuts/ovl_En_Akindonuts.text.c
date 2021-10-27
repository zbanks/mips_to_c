typedef struct EnAkindonuts {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0xA2];                 /* maybe part of unk_188[28]? */
    /* 0x230 */ Vec3s unk_230;                      /* inferred */
    /* 0x236 */ char pad_236[0xA2];                 /* maybe part of unk_230[28]? */
    /* 0x2D8 */ void (*actionFunc)(EnAkindonuts *, GlobalContext *);
    /* 0x2DC */ char pad_2DC[0x4];
    /* 0x2E0 */ ColliderCylinder unk_2E0;           /* inferred */
    /* 0x32C */ u16 unk_32C;                        /* inferred */
    /* 0x32E */ char pad_32E[0x2];
    /* 0x330 */ Path *unk_330;                      /* inferred */
    /* 0x334 */ char pad_334[0x4];
    /* 0x338 */ s16 unk_338;                        /* inferred */
    /* 0x33A */ char pad_33A[0x26];                 /* maybe part of unk_338[20]? */
    /* 0x360 */ s16 unk_360;                        /* inferred */
    /* 0x362 */ char pad_362[0xA];                  /* maybe part of unk_360[6]? */
} EnAkindonuts;                                     /* size = 0x36C */

struct _mips2c_stack_EnAkindonuts_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnAkindonuts_Draw {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnAkindonuts_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ ColliderCylinder *sp30;              /* inferred */
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnAkindonuts_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BECBE0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BECC7C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BECD10 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0xC];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];                    /* maybe part of sp44[3]? */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ void *sp5C;                          /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80BECEAC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80BECF6C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ? sp1C;                              /* inferred */
    /* 0x1C */ char pad_1C[0xC];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0xC];
    /* 0x34 */ void *sp34;                          /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80BECFBC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BED034 {};              /* size 0x0 */

struct _mips2c_stack_func_80BED090 {};              /* size 0x0 */

struct _mips2c_stack_func_80BED140 {};              /* size 0x0 */

struct _mips2c_stack_func_80BED208 {};              /* size 0x0 */

struct _mips2c_stack_func_80BED27C {};              /* size 0x0 */

struct _mips2c_stack_func_80BED2FC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BED35C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BED3BC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BED680 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BED8A4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BEDB88 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BEDDAC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BEE070 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BEE274 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BEE530 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BEE73C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BEE938 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BEEB20 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s16 sp24;                            /* inferred */
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BEEDC0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BEEE10 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BEEFA8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BEF18C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BEF20C {
    /* 0x00 */ char pad_0[0x22];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ s16 sp24;                            /* inferred */
    /* 0x26 */ char pad_26[0x1];
    /* 0x27 */ u8 sp27;                             /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BEF360 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BEF450 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BEF4B8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BEF518 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s16 sp24;                            /* inferred */
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BEF770 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BEF83C {
    /* 0x00 */ char pad_0[0x32];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ ?32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ ?32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BEF9F0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BEFAF0 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ u8 *sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x2];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ s16 sp38;                            /* inferred */
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BEFD74 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BEFFB4 {};              /* size 0x0 */

struct _mips2c_stack_func_80BF0178 {};              /* size 0x0 */

struct _mips2c_stack_func_80BF0190 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

? func_801149A0(?, u8);                             /* extern */
void func_80BECBE0(Actor *arg0, s16 arg1);          /* static */
void func_80BECC7C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BECD10(Actor *arg0, u8 *arg1, s32 arg2); /* static */
f32 func_80BECEAC(u8 *arg0, s32 arg1, Vec3f *arg2, s16 *arg3); /* static */
void func_80BECF6C(void *arg0);                     /* static */
s32 func_80BECFBC(Actor *arg0);                     /* static */
s32 func_80BED034(Actor *arg0);                     /* static */
void func_80BED090(GlobalContext *arg0, Actor *, u16); /* static */
s32 func_80BED140(GlobalContext *arg0, Actor *, u16); /* static */
s32 func_80BED208(Actor *arg0, Actor *, u16);       /* static */
s32 func_80BED27C(Actor *arg0, Actor *, u16);       /* static */
s32 func_80BED2FC(Actor *arg0, Actor *, u16);       /* static */
s32 func_80BED35C(Actor *arg0, Actor *, u16);       /* static */
void func_80BED3BC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BED680(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BED8A4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEDB88(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEDDAC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEE070(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEE274(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEE530(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEE73C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEE938(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEEB20(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEEDC0(void *arg0, ? arg1);             /* static */
void func_80BEEE10(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEEFA8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEF18C(void *arg0, GlobalContext *arg1); /* static */
void func_80BEF20C(void *arg0, GlobalContext *arg1); /* static */
void func_80BEF360(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEF450(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEF4B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEF518(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEF770(void *arg0, GlobalContext *arg1); /* static */
void func_80BEF83C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BEF9F0(void *arg0, ? arg1);             /* static */
void func_80BEFAF0(Actor *arg0, ? arg1);            /* static */
void func_80BEFD74(Actor *arg0, ? arg1);            /* static */
s32 func_80BEFFB4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80BF0178(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *actor); /* static */
void func_80BF0190(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern Gfx D_06001350;
extern AnimationHeader D_06005488;
extern Gfx D_06008290;
extern FlexSkeletonHeader D_0600AC70;
static ColliderCylinderInitType1 D_80BF02F0 = {
    {0xA, 0, 9, 0x39, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x1B, 0x20, 0, {0, 0, 0}},
};
static ActorAnimationEntryS D_80BF031C[23] = {
    {(AnimationHeader *)0x6005488, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600B0B4, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6004AA0, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6004E38, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x60029E8, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6005CA8, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x60038CC, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6003CC0, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60012F4, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6004700, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6001BC8, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6003438, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6001E2C, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6000994, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6002268, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6002F08, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600577C, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60029E8, 1.0f, 8, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x60029E8, 1.0f, 4, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x60029E8, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6001BC8, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60012F4, -1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6002670, 1.0f, 0, 0xFFFF, 2, 0},
};
static ? D_80BF048C;                                /* unable to generate initializer */
static ? D_80BF0494;                                /* unable to generate initializer */
static ? D_80BF049C;                                /* unable to generate initializer */
static ? D_80BF04A4;                                /* unable to generate initializer */
static ? D_80BF04AC;                                /* unable to generate initializer */
static InitChainEntry D_80BF04B4[3];                /* unable to generate initializer */

void func_80BECBE0(Actor *arg0, s16 arg1) {
    f32 sp24;

    sp24 = Math_CosS(arg0->world.rot.x) * arg0->speedXZ;
    arg0->velocity.x = Math_SinS(arg0->world.rot.y) * sp24;
    arg0->velocity.y = Math_SinS(arg0->world.rot.x) * arg0->speedXZ;
    arg0->velocity.z = Math_CosS(arg0->world.rot.y) * sp24;
    if (arg1 != 0) {
        arg0->velocity.x = 0.0f;
        arg0->velocity.z = 0.0f;
    }
    Actor_ApplyMovement(arg0);
}

void func_80BECC7C(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x2E0;
    if ((arg0->unk_32C & 4) != 0) {
        sp2C = temp_a2;
        Collider_UpdateCylinder(arg0, temp_a2);
        CollisionCheck_SetOC(arg1, arg1 + 0x18884, (Collider *) temp_a2);
    }
    if ((arg0->unk_32C & 2) != 0) {
        Actor_UpdateBgCheckInfo(arg1, arg0, 20.0f, 20.0f, 20.0f, 5U);
    }
}

s32 func_80BECD10(Actor *arg0, u8 *arg1, s32 arg2) {
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

    temp_v0 = Lib_SegmentedToVirtual(arg1->unk_4);
    temp_a2 = arg1->unk_0;
    temp_a3 = arg2 * 6;
    sp50 = 0;
    sp28 = temp_a3;
    sp5C = temp_v0;
    sp58 = (s32) temp_a2;
    Math_Vec3s_ToVec3f((Vec3f *) &sp30, temp_a3 + temp_v0);
    if (arg2 == 0) {
        phi_f12 = (f32) (sp5C->unk_6 - sp5C->unk_0);
        phi_f14 = (f32) (sp5C->unk_A - sp5C->unk_4);
    } else {
        temp_v0_2 = sp5C + temp_a3;
        if (temp_a2 == (arg2 + 1)) {
            temp_v0_3 = sp5C + (temp_a2 * 6);
            phi_f12 = (f32) (temp_v0_3->unk_-6 - temp_v0_3->unk_-C);
            phi_f14 = (f32) (temp_v0_3->unk_-2 - temp_v0_3->unk_-8);
        } else {
            phi_f12 = (f32) (temp_v0_2->unk_6 - temp_v0_2->unk_-6);
            phi_f14 = (f32) (temp_v0_2->unk_A - temp_v0_2->unk_-2);
        }
    }
    func_8017B7F8((Vec3f *) &sp30, (s16) (s32) (func_80086B30(phi_f12, phi_f14) * 10430.378f), &sp44, &sp40, &sp3C);
    if (((arg0->world.pos.x * sp44) + (sp40 * arg0->world.pos.z) + sp3C) > 0.0f) {
        sp50 = 1;
    }
    return sp50;
}

f32 func_80BECEAC(u8 *arg0, s32 arg1, Vec3f *arg2, s16 *arg3) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    s16 *temp_v1;

    if (arg0 != 0) {
        temp_v1 = (arg1 * 6) + Lib_SegmentedToVirtual(arg0->unk_4);
        sp20 = (f32) temp_v1->unk_0;
        sp24 = (f32) temp_v1[1];
        sp28 = (f32) temp_v1[2];
    }
    arg3[1] = Math_Vec3f_Yaw(arg2, (Vec3f *) &sp20);
    arg3->unk_0 = Math_Vec3f_Pitch(arg2, (Vec3f *) &sp20);
    return sp24 - arg2->y;
}

void func_80BECF6C(void *arg0) {
    void *sp34;
    ? sp28;
    ? sp1C;
    void *temp_v0;

    temp_v0 = Lib_SegmentedToVirtual(arg0->unk_4);
    sp34 = temp_v0;
    Math_Vec3s_ToVec3f((Vec3f *) &sp28, (Vec3s *) temp_v0);
    Math_Vec3s_ToVec3f((Vec3f *) &sp1C, sp34 + 6);
    Math_Vec3f_Yaw((Vec3f *) &sp28, (Vec3f *) &sp1C);
}

s32 func_80BECFBC(Actor *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->params & 3;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {
                    return 0;
                }
                func_801149A0(0x2C, gItemSlots[44]);
                return 7;
            }
            return 0x9A;
        }
        return 0x99;
    }
    return 0x98;
}

s32 func_80BED034(Actor *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->params & 3;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {
                    return 0;
                }
                return 0x5D;
            }
            return 0x5C;
        }
        return 0x1D;
    }
    return 0x35;
}

void func_80BED090(GlobalContext *arg0) {
    u8 temp_t0;
    u8 temp_t2;
    u8 temp_t6;
    u8 temp_t8;
    u8 temp_v1;

    temp_v1 = arg0->actorCtx.actorList[2].first->unk_14B;
    if (temp_v1 == 3) {
        temp_t8 = gSaveContext.weekEventReg[63] | 8;
        gSaveContext.weekEventReg[63] = temp_t8;
        gSaveContext.weekEventReg[63] = temp_t8 & 0xEF;
        return;
    }
    if (temp_v1 == 2) {
        temp_t2 = gSaveContext.weekEventReg[63] & 0xF7;
        gSaveContext.weekEventReg[63] = temp_t2;
        gSaveContext.weekEventReg[63] = temp_t2 | 0x10;
        return;
    }
    if (temp_v1 == 1) {
        temp_t6 = gSaveContext.weekEventReg[63] | 8;
        gSaveContext.weekEventReg[63] = temp_t6;
        gSaveContext.weekEventReg[63] = temp_t6 | 0x10;
        return;
    }
    if (temp_v1 == 4) {
        temp_t0 = gSaveContext.weekEventReg[63] & 0xF7;
        gSaveContext.weekEventReg[63] = temp_t0;
        gSaveContext.weekEventReg[63] = temp_t0 & 0xEF;
    }
}

s32 func_80BED140(GlobalContext *arg0) {
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v1;

    temp_v1 = arg0->actorCtx.actorList[2].first->unk_14B;
    if (temp_v1 == 3) {
        temp_v0 = gSaveContext.weekEventReg[63];
        if (((temp_v0 & 8) != 0) && ((temp_v0 & 0x10) == 0)) {
            return 1;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return 0;
    }
    if (temp_v1 == 2) {
        temp_v0_2 = gSaveContext.weekEventReg[63];
        if (((temp_v0_2 & 8) == 0) && ((temp_v0_2 & 0x10) != 0)) {
            return 1;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return 0;
    }
    if (temp_v1 == 1) {
        temp_v0_3 = gSaveContext.weekEventReg[63];
        if (((temp_v0_3 & 8) != 0) && ((temp_v0_3 & 0x10) != 0)) {
            return 1;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return 0;
    }
    if ((temp_v1 == 4) && (temp_v0_4 = gSaveContext.weekEventReg[63], ((temp_v0_4 & 8) == 0)) && ((temp_v0_4 & 0x10) == 0)) {
        return 1;
    }
    return 0;
}

s32 func_80BED208(Actor *arg0) {
    u8 temp_t6;

    temp_t6 = gItemSlots[10];
    if (gSaveContext.inventory.items[temp_t6] != 0xA) {
        return 0;
    }
    if ((s32) gSaveContext.rupees < 0xA) {
        return 1;
    }
    if ((s32) gSaveContext.inventory.ammo[temp_t6] >= 0x14) {
        return 2;
    }
    arg0->unk_364 = -0xA;
    arg0->unk_366 = 0xA;
    return 3;
}

s32 func_80BED27C(Actor *arg0) {
    u32 temp_v0;
    u32 temp_v1;
    u8 temp_a1;

    temp_v1 = gUpgradeMasks[1];
    temp_v0 = gSaveContext.inventory.upgrades;
    temp_a1 = gUpgradeShifts[1];
    if (((u32) (temp_v0 & temp_v1) >> temp_a1) == 3) {
        return 2;
    }
    if ((u32) ((u32) (temp_v0 & temp_v1) >> temp_a1) < 2U) {
        return 0;
    }
    if ((s32) gSaveContext.rupees < 0xC8) {
        return 1;
    }
    arg0->unk_364 = -0xC8;
    arg0->unk_366 = 0x58;
    return 3;
}

s32 func_80BED2FC(Actor *arg0) {
    if (func_80114E90() == 0) {
        return 2;
    }
    if ((s32) gSaveContext.rupees < 0x28) {
        return 1;
    }
    arg0->unk_364 = -0x28;
    arg0->unk_366 = 0x14;
    return 3;
}

s32 func_80BED35C(Actor *arg0) {
    if (func_80114E90() == 0) {
        return 2;
    }
    if ((s32) gSaveContext.rupees < 0x64) {
        return 1;
    }
    arg0->unk_364 = -0x64;
    arg0->unk_366 = 0x15;
    return 3;
}

void func_80BED3BC(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u16 temp_a3;
    u16 temp_t0;
    u16 temp_t1;
    u16 temp_t9;
    u8 temp_v0;
    u16 phi_a3;
    Actor *phi_a2;
    Actor *phi_a2_2;

    temp_a2 = arg0;
    temp_a3 = temp_a2[2].colChkInfo.cylYShift;
    phi_a3 = temp_a3;
    phi_a2 = temp_a2;
    phi_a2_2 = temp_a2;
    if ((s32) temp_a3 > 0) {
        switch (temp_a3) {
        case 5600:
            temp_a2[2].colChkInfo.cylYShift = 0x15E1;
            phi_a3 = 0x15E1U & 0xFFFF;
            goto block_31;
        case 5601:
            temp_a2[2].colChkInfo.cylYShift = 0x15E2;
            phi_a3 = 0x15E2U & 0xFFFF;
            goto block_31;
        case 5602:
            temp_a2[2].colChkInfo.cylYShift = 0xFF;
            phi_a3 = 0xFFU & 0xFFFF;
            goto block_31;
        case 5607:
            temp_v0 = gSaveContext.weekEventReg[61];
            phi_a3 = 0x15E8U & 0xFFFF;
            if ((temp_v0 & 0x20) == 0) {
                gSaveContext.weekEventReg[61] = temp_v0 | 0x20;
                temp_a2[2].colChkInfo.cylYShift = 0x15E8;
            } else {
                temp_a2[2].colChkInfo.cylYShift = 0x15E9;
                phi_a3 = 0x15E9U & 0xFFFF;
            }
            goto block_31;
        case 5608:
            temp_a2[2].colChkInfo.cylYShift = 0x15E9;
            phi_a3 = 0x15E9U & 0xFFFF;
            goto block_31;
        case 5609:
            temp_a2[2].colChkInfo.cylYShift = 0x15EA;
            phi_a3 = 0x15EAU & 0xFFFF;
            goto block_31;
        case 5610:
            temp_a0 = temp_a2;
            temp_t1 = temp_a2->unk_32C | 1;
            temp_v0_2 = temp_t1 & 0xFFFF;
            temp_a2->unk_32C = temp_t1;
            if ((temp_v0_2 & 8) != 0) {
                temp_a2->unk_32C = (u16) (temp_v0_2 & 0xFFF7);
                arg0 = temp_a2;
                temp_v0_3 = func_80BED208(temp_a0, temp_a2, temp_a3);
                phi_a2_2 = arg0;
                if (temp_v0_3 != 0) {
                    if (temp_v0_3 != 1) {
                        if (temp_v0_3 != 2) {
                            if (temp_v0_3 != 3) {
                                goto block_27;
                            }
                            arg0 = arg0;
                            func_8019F208();
                            temp_t9 = arg0->unk_32C & 0xFFFE;
                            temp_t0 = temp_t9 | 0x40;
                            arg0->unk_32C = temp_t9;
                            arg0->unk_32C = temp_t0;
                            arg1->msgCtx.unk11F22 = 0x43;
                            arg1->msgCtx.unk12023 = 4;
                            arg0[2].colChkInfo.cylYShift = 0x15EF;
                            arg0->unk_2D8 = func_80BEF360;
                            return;
                        }
                        arg0 = arg0;
                        play_sound(0x4806U);
                        arg0[2].colChkInfo.cylYShift = 0x15EE;
                        phi_a2_2 = arg0;
                        goto block_27;
                    }
                    arg0 = arg0;
                    play_sound(0x4806U);
                    arg0[2].colChkInfo.cylYShift = 0x15ED;
                    phi_a2_2 = arg0;
                    goto block_27;
                }
                arg0 = arg0;
                play_sound(0x4806U);
                arg0[2].colChkInfo.cylYShift = 0x15EC;
                phi_a2_2 = arg0;
                goto block_27;
            }
            if ((temp_v0_2 & 0x10) != 0) {
                temp_a2->unk_32C = (u16) (temp_v0_2 & 0xFFEF);
                temp_a2[2].colChkInfo.cylYShift = 0x15EB;
                phi_a3 = 0x15EBU & 0xFFFF;
            } else {
block_27:
                phi_a3 = phi_a2_2[2].colChkInfo.cylYShift;
                phi_a2 = phi_a2_2;
            }
            goto block_31;
        case 5604:
            temp_a2[2].colChkInfo.cylYShift = 0x15E5;
            temp_a2->unk_32C = (u16) (temp_a2->unk_32C | 1);
            phi_a3 = 0x15E5U & 0xFFFF;
            goto block_31;
        case 5605:
            temp_a2[2].colChkInfo.cylYShift = 0x15E6;
            arg0 = temp_a2;
            func_80BED090(arg1, temp_a2, temp_a3);
            gSaveContext.weekEventReg[61] |= 0x10;
            arg0->unk_32C = (u16) (arg0->unk_32C | 0x20);
            phi_a3 = arg0[2].colChkInfo.cylYShift;
            phi_a2 = arg0;
            goto block_31;
        case 5615:
            temp_a2->unk_32C = (u16) (temp_a2->unk_32C | 1);
            phi_a3 = temp_a2[2].colChkInfo.cylYShift;
            goto block_31;
        }
    } else {
        if (temp_a3 == 0) {
            phi_a3 = 0x15E7U & 0xFFFF;
            if (arg1->actorCtx.actorList[2].first->unk_14B != 3) {
                temp_a2[2].colChkInfo.cylYShift = 0x15E0;
                phi_a3 = 0x15E0U & 0xFFFF;
            } else {
                temp_a2[2].colChkInfo.cylYShift = 0x15E7;
            }
        }
    default:
block_31:
        func_801518B0(arg1, phi_a3 & 0xFFFF, phi_a2);
    }
}

void func_80BED680(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_a3;
    u16 temp_t3;
    u16 temp_t4;
    u16 temp_t5;
    u8 temp_v0_3;
    u16 phi_a3;
    Actor *phi_a2;
    Actor *phi_a2_2;

    temp_a2 = arg0;
    temp_a3 = temp_a2[2].colChkInfo.cylYShift;
    phi_a3 = temp_a3;
    phi_a2 = temp_a2;
    phi_a2_2 = temp_a2;
    if ((s32) temp_a3 > 0) {
        switch (temp_a3) {
        case 5616:
            temp_a2[2].colChkInfo.cylYShift = 0x15F1;
            phi_a3 = 0x15F1U & 0xFFFF;
            goto block_25;
        case 5617:
        case 5618:
            temp_a2[2].colChkInfo.cylYShift = 0x15F3;
            phi_a3 = 0x15F3U & 0xFFFF;
            goto block_25;
        case 5619:
            temp_a2[2].colChkInfo.cylYShift = 0x15EA;
            phi_a3 = 0x15EAU & 0xFFFF;
            goto block_25;
        case 5610:
            temp_a0 = temp_a2;
            temp_t5 = temp_a2->unk_32C | 1;
            temp_v0 = temp_t5 & 0xFFFF;
            temp_a2->unk_32C = temp_t5;
            if ((temp_v0 & 8) != 0) {
                temp_a2->unk_32C = (u16) (temp_v0 & 0xFFF7);
                arg0 = temp_a2;
                temp_v0_2 = func_80BED208(temp_a0, temp_a2, temp_a3);
                phi_a2_2 = arg0;
                if (temp_v0_2 != 0) {
                    if (temp_v0_2 != 1) {
                        if (temp_v0_2 != 2) {
                            if (temp_v0_2 != 3) {
                                goto block_23;
                            }
                            arg0 = arg0;
                            func_8019F208();
                            temp_t3 = arg0->unk_32C | 0x40;
                            temp_t4 = temp_t3 & 0xFFFE;
                            arg0->unk_32C = temp_t3;
                            arg0->unk_32C = temp_t4;
                            arg1->msgCtx.unk11F22 = 0x43;
                            arg1->msgCtx.unk12023 = 4;
                            arg0[2].colChkInfo.cylYShift = 0x15EF;
                            arg0->unk_2D8 = func_80BEF360;
                            return;
                        }
                        arg0 = arg0;
                        play_sound(0x4806U);
                        arg0[2].colChkInfo.cylYShift = 0x15EE;
                        phi_a2_2 = arg0;
                        goto block_23;
                    }
                    arg0 = arg0;
                    play_sound(0x4806U);
                    arg0[2].colChkInfo.cylYShift = 0x15ED;
                    phi_a2_2 = arg0;
                    goto block_23;
                }
                arg0 = arg0;
                play_sound(0x4806U);
                arg0[2].colChkInfo.cylYShift = 0x15EC;
                phi_a2_2 = arg0;
                goto block_23;
            }
            if ((temp_v0 & 0x10) != 0) {
                temp_a2->unk_32C = (u16) (temp_v0 & 0xFFEF);
                temp_a2[2].colChkInfo.cylYShift = 0x15EB;
                phi_a3 = 0x15EB & 0xFFFF;
            } else {
block_23:
                phi_a3 = phi_a2_2[2].colChkInfo.cylYShift;
                phi_a2 = phi_a2_2;
            }
            goto block_25;
        case 5615:
            temp_a2->unk_32C = (u16) (temp_a2->unk_32C | 1);
            phi_a3 = (u16) temp_a2[2].colChkInfo.cylYShift;
            goto block_25;
        }
    } else {
        if (temp_a3 == 0) {
            arg0 = temp_a2;
            phi_a2 = arg0;
            if ((func_80BED140(arg1, temp_a2, temp_a3) != 0) && (temp_v0_3 = gSaveContext.weekEventReg[61], phi_a3 = 0x15F0 & 0xFFFF, ((temp_v0_3 & 0x40) == 0))) {
                gSaveContext.weekEventReg[61] = temp_v0_3 | 0x40;
                arg0[2].colChkInfo.cylYShift = 0x15F0;
            } else {
                arg0[2].colChkInfo.cylYShift = 0x15F2;
                phi_a3 = 0x15F2 & 0xFFFF;
            }
        }
    default:
block_25:
        func_801518B0(arg1, phi_a3 & 0xFFFF, phi_a2);
    }
}

void func_80BED8A4(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u16 temp_a3;
    u16 temp_t2;
    u16 temp_t3;
    u16 temp_t4;
    u8 temp_v0;
    u8 temp_v0_4;
    u16 phi_a3;
    Actor *phi_a2;
    Actor *phi_a2_2;

    temp_a2 = arg0;
    temp_a3 = temp_a2[2].colChkInfo.cylYShift;
    phi_a3 = temp_a3;
    phi_a2 = temp_a2;
    phi_a2_2 = temp_a2;
    if ((s32) temp_a3 > 0) {
        switch (temp_a3) {
        case 5620:
            temp_a2[2].colChkInfo.cylYShift = 0x15F5;
            phi_a3 = 0x15F5U & 0xFFFF;
            goto block_34;
        case 5621:
            temp_a2[2].colChkInfo.cylYShift = 0x15F6;
            phi_a3 = 0x15F6U & 0xFFFF;
            goto block_34;
        case 5622:
            temp_a2[2].colChkInfo.cylYShift = 0xFF;
            phi_a3 = 0xFFU & 0xFFFF;
            goto block_34;
        case 5628:
            temp_a2[2].colChkInfo.cylYShift = 0x15FD;
            temp_a2->unk_32C = (u16) (temp_a2->unk_32C | 1);
            phi_a3 = 0x15FDU & 0xFFFF;
            goto block_34;
        case 5630:
            temp_v0 = gSaveContext.weekEventReg[62];
            phi_a3 = 0x15FFU & 0xFFFF;
            if ((temp_v0 & 1) == 0) {
                gSaveContext.weekEventReg[62] = temp_v0 | 1;
                temp_a2[2].colChkInfo.cylYShift = 0x15FF;
            } else {
                temp_a2[2].colChkInfo.cylYShift = 0x1600;
                phi_a3 = 0x1600U & 0xFFFF;
            }
            goto block_34;
        case 5631:
            temp_a2[2].colChkInfo.cylYShift = 0x1600;
            phi_a3 = 0x1600U & 0xFFFF;
            goto block_34;
        case 5632:
            temp_a2[2].colChkInfo.cylYShift = 0x15EA;
            phi_a3 = 0x15EAU & 0xFFFF;
            goto block_34;
        case 5610:
            temp_a0 = temp_a2;
            temp_t4 = temp_a2->unk_32C | 1;
            temp_v0_2 = temp_t4 & 0xFFFF;
            temp_a2->unk_32C = temp_t4;
            if ((temp_v0_2 & 8) != 0) {
                temp_a2->unk_32C = (u16) (temp_v0_2 & 0xFFF7);
                arg0 = temp_a2;
                temp_v0_3 = func_80BED27C(temp_a0, temp_a2, temp_a3);
                phi_a2_2 = arg0;
                if (temp_v0_3 != 0) {
                    if (temp_v0_3 != 1) {
                        if (temp_v0_3 != 2) {
                            if (temp_v0_3 != 3) {
                                goto block_30;
                            }
                            arg0 = arg0;
                            func_8019F208();
                            temp_t2 = arg0->unk_32C | 0x40;
                            temp_t3 = temp_t2 & 0xFFFE;
                            arg0->unk_32C = temp_t2;
                            arg0->unk_32C = temp_t3;
                            arg1->msgCtx.unk11F22 = 0x43;
                            arg1->msgCtx.unk12023 = 4;
                            arg0[2].colChkInfo.cylYShift = 0x15EF;
                            arg0->unk_2D8 = func_80BEF360;
                            return;
                        }
                        arg0 = arg0;
                        play_sound(0x4806U);
                        arg0[2].colChkInfo.cylYShift = 0x1601;
                        phi_a2_2 = arg0;
                        goto block_30;
                    }
                    arg0 = arg0;
                    play_sound(0x4806U);
                    arg0[2].colChkInfo.cylYShift = 0x1603;
                    phi_a2_2 = arg0;
                    goto block_30;
                }
                arg0 = arg0;
                play_sound(0x4806U);
                arg0[2].colChkInfo.cylYShift = 0x1602;
                phi_a2_2 = arg0;
                goto block_30;
            }
            if ((temp_v0_2 & 0x10) != 0) {
                temp_a2->unk_32C = (u16) (temp_v0_2 & 0xFFEF);
                temp_a2[2].colChkInfo.cylYShift = 0x1604;
                phi_a3 = 0x1604U & 0xFFFF;
            } else {
block_30:
                phi_a3 = phi_a2_2[2].colChkInfo.cylYShift;
                phi_a2 = phi_a2_2;
            }
            goto block_34;
        case 5625:
            temp_a2[2].colChkInfo.cylYShift = 0x15FA;
            temp_a2->unk_32C = (u16) (temp_a2->unk_32C | 1);
            phi_a3 = 0x15FAU & 0xFFFF;
            goto block_34;
        case 5626:
            temp_a2[2].colChkInfo.cylYShift = 0x15FB;
            gSaveContext.weekEventReg[61] |= 0x80;
            temp_a2->unk_32C = (u16) (temp_a2->unk_32C | 0x20);
            phi_a3 = temp_a2[2].colChkInfo.cylYShift;
            goto block_34;
        case 5615:
            temp_a2->unk_32C = (u16) (temp_a2->unk_32C | 1);
            phi_a3 = temp_a2[2].colChkInfo.cylYShift;
            goto block_34;
        }
    } else {
        if (temp_a3 == 0) {
            temp_v0_4 = arg1->actorCtx.actorList[2].first->unk_14B;
            phi_a3 = 0x15F4U & 0xFFFF;
            if (temp_v0_4 == 3) {
                temp_a2[2].colChkInfo.cylYShift = 0x15F4;
            } else if (temp_v0_4 == 1) {
                temp_a2[2].colChkInfo.cylYShift = 0x15FE;
                phi_a3 = 0x15FEU & 0xFFFF;
            } else {
                temp_a2[2].colChkInfo.cylYShift = 0x15FC;
                phi_a3 = 0x15FCU & 0xFFFF;
            }
        }
    default:
block_34:
        func_801518B0(arg1, phi_a3 & 0xFFFF, phi_a2);
    }
}

void func_80BEDB88(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_a3;
    u16 temp_t5;
    u16 temp_t6;
    u16 temp_t7;
    u8 temp_v0_3;
    u16 phi_a3;
    Actor *phi_a2;
    Actor *phi_a2_2;

    temp_a2 = arg0;
    temp_a3 = temp_a2[2].colChkInfo.cylYShift;
    phi_a3 = temp_a3;
    phi_a2 = temp_a2;
    phi_a2_2 = temp_a2;
    if ((s32) temp_a3 > 0) {
        switch (temp_a3) {
        case 5616:
            temp_a2[2].colChkInfo.cylYShift = 0x1605;
            phi_a3 = 0x1605U & 0xFFFF;
            goto block_25;
        case 5618:
        case 5637:
            temp_a2[2].colChkInfo.cylYShift = 0x1606;
            phi_a3 = 0x1606U & 0xFFFF;
            goto block_25;
        case 5638:
            temp_a2[2].colChkInfo.cylYShift = 0x15EA;
            phi_a3 = 0x15EAU & 0xFFFF;
            goto block_25;
        case 5610:
            temp_a0 = temp_a2;
            temp_t7 = temp_a2->unk_32C | 1;
            temp_v0 = temp_t7 & 0xFFFF;
            temp_a2->unk_32C = temp_t7;
            if ((temp_v0 & 8) != 0) {
                temp_a2->unk_32C = (u16) (temp_v0 & 0xFFF7);
                arg0 = temp_a2;
                temp_v0_2 = func_80BED27C(temp_a0, temp_a2, temp_a3);
                phi_a2_2 = arg0;
                if (temp_v0_2 != 0) {
                    if (temp_v0_2 != 1) {
                        if (temp_v0_2 != 2) {
                            if (temp_v0_2 != 3) {
                                goto block_23;
                            }
                            arg0 = arg0;
                            func_8019F208();
                            temp_t5 = arg0->unk_32C | 0x40;
                            temp_t6 = temp_t5 & 0xFFFE;
                            arg0->unk_32C = temp_t5;
                            arg0->unk_32C = temp_t6;
                            arg1->msgCtx.unk11F22 = 0x43;
                            arg1->msgCtx.unk12023 = 4;
                            arg0[2].colChkInfo.cylYShift = 0x15EF;
                            arg0->unk_2D8 = func_80BEF360;
                            return;
                        }
                        arg0 = arg0;
                        play_sound(0x4806U);
                        arg0[2].colChkInfo.cylYShift = 0x1601;
                        phi_a2_2 = arg0;
                        goto block_23;
                    }
                    arg0 = arg0;
                    play_sound(0x4806U);
                    arg0[2].colChkInfo.cylYShift = 0x1603;
                    phi_a2_2 = arg0;
                    goto block_23;
                }
                arg0 = arg0;
                play_sound(0x4806U);
                arg0[2].colChkInfo.cylYShift = 0x1602;
                phi_a2_2 = arg0;
                goto block_23;
            }
            if ((temp_v0 & 0x10) != 0) {
                temp_a2->unk_32C = (u16) (temp_v0 & 0xFFEF);
                temp_a2[2].colChkInfo.cylYShift = 0x15EB;
                phi_a3 = 0x15EB & 0xFFFF;
            } else {
block_23:
                phi_a3 = phi_a2_2[2].colChkInfo.cylYShift;
                phi_a2 = phi_a2_2;
            }
            goto block_25;
        case 5615:
            temp_a2->unk_32C = (u16) (temp_a2->unk_32C | 1);
            phi_a3 = (u16) temp_a2[2].colChkInfo.cylYShift;
            goto block_25;
        }
    } else {
        if (temp_a3 == 0) {
            if ((arg1->actorCtx.actorList[2].first->unk_14B == 3) && (temp_v0_3 = gSaveContext.weekEventReg[62], phi_a3 = 0x15F0 & 0xFFFF, ((temp_v0_3 & 2) == 0))) {
                gSaveContext.weekEventReg[62] = temp_v0_3 | 2;
                temp_a2[2].colChkInfo.cylYShift = 0x15F0;
            } else {
                temp_a2[2].colChkInfo.cylYShift = 0x15F2;
                phi_a3 = 0x15F2 & 0xFFFF;
            }
        }
    default:
block_25:
        func_801518B0(arg1, phi_a3 & 0xFFFF, phi_a2);
    }
}

void func_80BEDDAC(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u16 temp_a3;
    u16 temp_t1;
    u16 temp_t2;
    u16 temp_t4;
    u8 temp_v0;
    u8 temp_v0_4;
    u16 phi_a3;
    Actor *phi_a2;
    Actor *phi_a2_2;

    temp_a2 = arg0;
    temp_a3 = temp_a2[2].colChkInfo.cylYShift;
    phi_a3 = temp_a3;
    phi_a2 = temp_a2;
    phi_a2_2 = temp_a2;
    if ((s32) temp_a3 > 0) {
        switch (temp_a3) {
        case 5639:
            temp_a2[2].colChkInfo.cylYShift = 0x1608;
            phi_a3 = 0x1608U & 0xFFFF;
            goto block_32;
        case 5640:
            temp_a2[2].colChkInfo.cylYShift = 0x15E2;
            phi_a3 = 0x15E2U & 0xFFFF;
            goto block_32;
        case 5602:
            temp_a2[2].colChkInfo.cylYShift = 0xFF;
            phi_a3 = 0xFFU & 0xFFFF;
            goto block_32;
        case 5646:
            temp_a2[2].colChkInfo.cylYShift = 0x160F;
            temp_a2->unk_32C = (u16) (temp_a2->unk_32C | 1);
            phi_a3 = 0x160FU & 0xFFFF;
            goto block_32;
        case 5648:
            temp_v0 = gSaveContext.weekEventReg[62];
            phi_a3 = 0x1611U & 0xFFFF;
            if ((temp_v0 & 8) == 0) {
                gSaveContext.weekEventReg[62] = temp_v0 | 8;
                temp_a2[2].colChkInfo.cylYShift = 0x1611;
            } else {
                temp_a2[2].colChkInfo.cylYShift = 0x1612;
                phi_a3 = 0x1612U & 0xFFFF;
            }
            goto block_32;
        case 5649:
            temp_a2[2].colChkInfo.cylYShift = 0x1612;
            phi_a3 = 0x1612U & 0xFFFF;
            goto block_32;
        case 5650:
            temp_a2[2].colChkInfo.cylYShift = 0x15EA;
            phi_a3 = 0x15EAU & 0xFFFF;
            goto block_32;
        case 5610:
            temp_a0 = temp_a2;
            temp_t4 = temp_a2->unk_32C | 1;
            temp_v0_2 = temp_t4 & 0xFFFF;
            temp_a2->unk_32C = temp_t4;
            if ((temp_v0_2 & 8) != 0) {
                temp_a2->unk_32C = (u16) (temp_v0_2 & 0xFFF7);
                arg0 = temp_a2;
                temp_v0_3 = func_80BED2FC(temp_a0, temp_a2, temp_a3);
                phi_a2_2 = arg0;
                if (temp_v0_3 != 1) {
                    if (temp_v0_3 != 2) {
                        if (temp_v0_3 != 3) {
                            goto block_28;
                        }
                        arg0 = arg0;
                        func_8019F208();
                        temp_t1 = arg0->unk_32C | 0x40;
                        temp_t2 = temp_t1 & 0xFFFE;
                        arg0->unk_32C = temp_t1;
                        arg0->unk_32C = temp_t2;
                        arg1->msgCtx.unk11F22 = 0x43;
                        arg1->msgCtx.unk12023 = 4;
                        arg0[2].colChkInfo.cylYShift = 0x15EF;
                        arg0->unk_2D8 = func_80BEF360;
                        return;
                    }
                    arg0 = arg0;
                    play_sound(0x4806U);
                    arg0[2].colChkInfo.cylYShift = 0x1613;
                    phi_a2_2 = arg0;
                    goto block_28;
                }
                arg0 = arg0;
                play_sound(0x4806U);
                arg0[2].colChkInfo.cylYShift = 0x15ED;
                phi_a2_2 = arg0;
                goto block_28;
            }
            if ((temp_v0_2 & 0x10) != 0) {
                temp_a2->unk_32C = (u16) (temp_v0_2 & 0xFFEF);
                temp_a2[2].colChkInfo.cylYShift = 0x15EB;
                phi_a3 = 0x15EBU & 0xFFFF;
            } else {
block_28:
                phi_a3 = phi_a2_2[2].colChkInfo.cylYShift;
                phi_a2 = phi_a2_2;
            }
            goto block_32;
        case 5644:
            temp_a2[2].colChkInfo.cylYShift = 0x15FA;
            temp_a2->unk_32C = (u16) (temp_a2->unk_32C | 1);
            phi_a3 = 0x15FAU & 0xFFFF;
            goto block_32;
        case 5626:
            temp_a2[2].colChkInfo.cylYShift = 0x160D;
            gSaveContext.weekEventReg[62] |= 4;
            temp_a2->unk_32C = (u16) (temp_a2->unk_32C | 0x20);
            phi_a3 = temp_a2[2].colChkInfo.cylYShift;
            goto block_32;
        case 5615:
            temp_a2->unk_32C = (u16) (temp_a2->unk_32C | 1);
            phi_a3 = temp_a2[2].colChkInfo.cylYShift;
            goto block_32;
        }
    } else {
        if (temp_a3 == 0) {
            temp_v0_4 = arg1->actorCtx.actorList[2].first->unk_14B;
            phi_a3 = 0x1607U & 0xFFFF;
            if (temp_v0_4 == 1) {
                temp_a2[2].colChkInfo.cylYShift = 0x1607;
            } else if (temp_v0_4 == 2) {
                temp_a2[2].colChkInfo.cylYShift = 0x1610;
                phi_a3 = 0x1610U & 0xFFFF;
            } else {
                temp_a2[2].colChkInfo.cylYShift = 0x160E;
                phi_a3 = 0x160EU & 0xFFFF;
            }
        }
    default:
block_32:
        func_801518B0(arg1, phi_a3 & 0xFFFF, phi_a2);
    }
}

void func_80BEE070(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_a3;
    u16 temp_t4;
    u16 temp_t5;
    u16 temp_t7;
    u8 temp_v0_3;
    u16 phi_a3;
    Actor *phi_a2;
    Actor *phi_a2_2;

    temp_a2 = arg0;
    temp_a3 = temp_a2[2].colChkInfo.cylYShift;
    phi_a3 = temp_a3;
    phi_a2 = temp_a2;
    phi_a2_2 = temp_a2;
    if ((s32) temp_a3 > 0) {
        switch (temp_a3) {
        case 5652:
            temp_a2[2].colChkInfo.cylYShift = 0x1615;
            phi_a3 = 0x1615U & 0xFFFF;
            goto block_23;
        case 5653:
        case 5654:
            temp_a2[2].colChkInfo.cylYShift = 0x1617;
            phi_a3 = 0x1617U & 0xFFFF;
            goto block_23;
        case 5655:
            temp_a2[2].colChkInfo.cylYShift = 0x1618;
            phi_a3 = 0x1618U & 0xFFFF;
            goto block_23;
        case 5656:
            temp_a0 = temp_a2;
            temp_t7 = temp_a2->unk_32C | 1;
            temp_v0 = temp_t7 & 0xFFFF;
            temp_a2->unk_32C = temp_t7;
            if ((temp_v0 & 8) != 0) {
                temp_a2->unk_32C = (u16) (temp_v0 & 0xFFF7);
                arg0 = temp_a2;
                temp_v0_2 = func_80BED2FC(temp_a0, temp_a2, temp_a3);
                phi_a2_2 = arg0;
                if (temp_v0_2 != 1) {
                    if (temp_v0_2 != 2) {
                        if (temp_v0_2 != 3) {
                            goto block_21;
                        }
                        arg0 = arg0;
                        func_8019F208();
                        temp_t4 = arg0->unk_32C | 0x40;
                        temp_t5 = temp_t4 & 0xFFFE;
                        arg0->unk_32C = temp_t4;
                        arg0->unk_32C = temp_t5;
                        arg1->msgCtx.unk11F22 = 0x43;
                        arg1->msgCtx.unk12023 = 4;
                        arg0[2].colChkInfo.cylYShift = 0x161A;
                        arg0->unk_2D8 = func_80BEF360;
                        return;
                    }
                    arg0 = arg0;
                    play_sound(0x4806U);
                    arg0[2].colChkInfo.cylYShift = 0x1613;
                    phi_a2_2 = arg0;
                    goto block_21;
                }
                arg0 = arg0;
                play_sound(0x4806U);
                arg0[2].colChkInfo.cylYShift = 0x15ED;
                phi_a2_2 = arg0;
                goto block_21;
            }
            if ((temp_v0 & 0x10) != 0) {
                temp_a2->unk_32C = (u16) (temp_v0 & 0xFFEF);
                temp_a2[2].colChkInfo.cylYShift = 0x1619;
                phi_a3 = 0x1619 & 0xFFFF;
            } else {
block_21:
                phi_a3 = phi_a2_2[2].colChkInfo.cylYShift;
                phi_a2 = phi_a2_2;
            }
            goto block_23;
        case 5658:
            temp_a2->unk_32C = (u16) (temp_a2->unk_32C | 1);
            phi_a3 = (u16) temp_a2[2].colChkInfo.cylYShift;
            goto block_23;
        }
    } else {
        if (temp_a3 == 0) {
            if ((arg1->actorCtx.actorList[2].first->unk_14B == 1) && (temp_v0_3 = gSaveContext.weekEventReg[62], phi_a3 = 0x1614 & 0xFFFF, ((temp_v0_3 & 0x10) == 0))) {
                gSaveContext.weekEventReg[62] = temp_v0_3 | 0x10;
                temp_a2[2].colChkInfo.cylYShift = 0x1614;
            } else {
                temp_a2[2].colChkInfo.cylYShift = 0x1616;
                phi_a3 = 0x1616 & 0xFFFF;
            }
        }
    default:
block_23:
        func_801518B0(arg1, phi_a3 & 0xFFFF, phi_a2);
    }
}

void func_80BEE274(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u16 temp_a3;
    u16 temp_t1;
    u16 temp_t8;
    u16 temp_t9;
    u8 temp_v0;
    u16 phi_a3;
    Actor *phi_a2;
    Actor *phi_a2_2;

    temp_a2 = arg0;
    temp_a3 = temp_a2[2].colChkInfo.cylYShift;
    phi_a3 = temp_a3;
    phi_a2 = temp_a2;
    phi_a2_2 = temp_a2;
    if ((s32) temp_a3 >= 0x15E3) {
        if ((s32) temp_a3 >= 0x15EB) {
            switch (temp_a3) {
            case 5659:
                temp_a2[2].colChkInfo.cylYShift = 0x161C;
                phi_a3 = 0x161CU & 0xFFFF;
                break;
            case 5660:
                temp_a2[2].colChkInfo.cylYShift = 0x15E2;
                phi_a3 = 0x15E2U & 0xFFFF;
                break;
            case 5668:
                temp_v0 = gSaveContext.weekEventReg[62];
                phi_a3 = 0x1625U & 0xFFFF;
                if ((temp_v0 & 0x40) == 0) {
                    gSaveContext.weekEventReg[62] = temp_v0 | 0x40;
                    temp_a2[2].colChkInfo.cylYShift = 0x1625;
                } else {
                    temp_a2[2].colChkInfo.cylYShift = 0x1627;
                    phi_a3 = 0x1627U & 0xFFFF;
                }
                break;
            case 5669:
            case 5671:
                temp_a2[2].colChkInfo.cylYShift = 0x1626;
                phi_a3 = 0x1626U & 0xFFFF;
                break;
            case 5670:
                temp_a2[2].colChkInfo.cylYShift = 0x15EA;
                phi_a3 = 0x15EAU & 0xFFFF;
                break;
            case 5665:
                temp_a2[2].colChkInfo.cylYShift = 0x1622;
                temp_a2->unk_32C = (u16) (temp_a2->unk_32C | 1);
                phi_a3 = 0x1622U & 0xFFFF;
                break;
            case 5666:
                temp_a2[2].colChkInfo.cylYShift = 0x1623;
                gSaveContext.weekEventReg[62] |= 0x20;
                temp_a2->unk_32C = (u16) (temp_a2->unk_32C | 0x20);
                phi_a3 = temp_a2[2].colChkInfo.cylYShift;
                break;
            case 5673:
                temp_a2->unk_32C = (u16) (temp_a2->unk_32C | 1);
                phi_a3 = temp_a2[2].colChkInfo.cylYShift;
                break;
            }
            goto block_34;
        }
        if (temp_a3 != 0x15EA) {
            goto block_34;
        }
        temp_a0 = temp_a2;
        temp_t1 = temp_a2->unk_32C | 1;
        temp_v0_2 = temp_t1 & 0xFFFF;
        temp_a2->unk_32C = temp_t1;
        if ((temp_v0_2 & 8) != 0) {
            temp_a2->unk_32C = (u16) (temp_v0_2 & 0xFFF7);
            arg0 = temp_a2;
            temp_v0_3 = func_80BED35C(temp_a0, temp_a2, temp_a3);
            phi_a2_2 = arg0;
            if (temp_v0_3 != 1) {
                if (temp_v0_3 != 2) {
                    if (temp_v0_3 != 3) {
                        goto block_30;
                    }
                    arg0 = arg0;
                    func_8019F208();
                    temp_t8 = arg0->unk_32C | 0x40;
                    temp_t9 = temp_t8 & 0xFFFE;
                    arg0->unk_32C = temp_t8;
                    arg0->unk_32C = temp_t9;
                    arg1->msgCtx.unk11F22 = 0x43;
                    arg1->msgCtx.unk12023 = 4;
                    arg0[2].colChkInfo.cylYShift = 0x1629;
                    arg0->unk_2D8 = func_80BEF360;
                    return;
                }
                arg0 = arg0;
                play_sound(0x4806U);
                arg0[2].colChkInfo.cylYShift = 0x1613;
                phi_a2_2 = arg0;
                goto block_30;
            }
            arg0 = arg0;
            play_sound(0x4806U);
            arg0[2].colChkInfo.cylYShift = 0x15ED;
            phi_a2_2 = arg0;
            goto block_30;
        }
        if ((temp_v0_2 & 0x10) != 0) {
            temp_a2->unk_32C = (s16) (temp_v0_2 & 0xFFEF);
            temp_a2[2].colChkInfo.cylYShift = 0x1628;
            phi_a3 = 0x1628 & 0xFFFF;
        } else {
block_30:
            phi_a3 = phi_a2_2[2].colChkInfo.cylYShift;
            phi_a2 = phi_a2_2;
        }
        goto block_34;
    }
    if (temp_a3 != 0) {
        if (temp_a3 != 0x15E2) {

        } else {
            temp_a2[2].colChkInfo.cylYShift = 0xFF;
            phi_a3 = 0xFF & 0xFFFF;
        }
    } else {
        phi_a3 = 0x1624 & 0xFFFF;
        if (arg1->actorCtx.actorList[2].first->unk_14B == 2) {
            temp_a2[2].colChkInfo.cylYShift = 0x161B;
            phi_a3 = 0x161B & 0xFFFF;
        } else {
            temp_a2[2].colChkInfo.cylYShift = 0x1624;
        }
    }
block_34:
    func_801518B0(arg1, phi_a3 & 0xFFFF, phi_a2);
}

void func_80BEE530(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_a3;
    u16 temp_t3;
    u16 temp_t4;
    u16 temp_t6;
    u8 temp_v0_3;
    u16 phi_a3;
    Actor *phi_a2;
    Actor *phi_a2_2;

    temp_a2 = arg0;
    temp_a3 = temp_a2[2].colChkInfo.cylYShift;
    phi_a3 = temp_a3;
    phi_a2 = temp_a2;
    phi_a2_2 = temp_a2;
    if (temp_a3 != 0) {
        if (temp_a3 != 0x15EA) {
            if (temp_a3 != 0x15EF) {
                if (temp_a3 != 0x162A) {
                    if ((temp_a3 != 0x162B) && (temp_a3 != 0x162C)) {
                        if (temp_a3 != 0x162D) {

                        } else {
                            temp_a2[2].colChkInfo.cylYShift = 0x15EA;
                            phi_a3 = 0x15EAU & 0xFFFF;
                        }
                    } else {
                        temp_a2[2].colChkInfo.cylYShift = 0x162D;
                        phi_a3 = 0x162DU & 0xFFFF;
                    }
                } else {
                    temp_a2[2].colChkInfo.cylYShift = 0x162B;
                    phi_a3 = 0x162BU & 0xFFFF;
                }
            } else {
                temp_a2->unk_32C = (u16) (temp_a2->unk_32C | 1);
                phi_a3 = temp_a2[2].colChkInfo.cylYShift;
            }
            goto block_27;
        }
        temp_a0 = temp_a2;
        temp_t6 = temp_a2->unk_32C | 1;
        temp_v0 = temp_t6 & 0xFFFF;
        temp_a2->unk_32C = temp_t6;
        if ((temp_v0 & 8) != 0) {
            temp_a2->unk_32C = (u16) (temp_v0 & 0xFFF7);
            arg0 = temp_a2;
            temp_v0_2 = func_80BED35C(temp_a0, temp_a2, temp_a3);
            phi_a2_2 = arg0;
            if (temp_v0_2 != 1) {
                if (temp_v0_2 != 2) {
                    if (temp_v0_2 != 3) {
                        goto block_25;
                    }
                    arg0 = arg0;
                    func_8019F208();
                    temp_t3 = arg0->unk_32C | 0x40;
                    temp_t4 = temp_t3 & 0xFFFE;
                    arg0->unk_32C = temp_t3;
                    arg0->unk_32C = temp_t4;
                    arg1->msgCtx.unk11F22 = 0x43;
                    arg1->msgCtx.unk12023 = 4;
                    arg0[2].colChkInfo.cylYShift = 0x15EF;
                    arg0->unk_2D8 = func_80BEF360;
                    return;
                }
                arg0 = arg0;
                play_sound(0x4806U);
                arg0[2].colChkInfo.cylYShift = 0x1613;
                phi_a2_2 = arg0;
                goto block_25;
            }
            arg0 = arg0;
            play_sound(0x4806U);
            arg0[2].colChkInfo.cylYShift = 0x15ED;
            phi_a2_2 = arg0;
            goto block_25;
        }
        if ((temp_v0 & 0x10) != 0) {
            temp_a2->unk_32C = (s16) (temp_v0 & 0xFFEF);
            temp_a2[2].colChkInfo.cylYShift = 0x162E;
            phi_a3 = 0x162E & 0xFFFF;
        } else {
block_25:
            phi_a3 = phi_a2_2[2].colChkInfo.cylYShift;
            phi_a2 = phi_a2_2;
        }
        goto block_27;
    }
    if ((arg1->actorCtx.actorList[2].first->unk_14B == 2) && (temp_v0_3 = gSaveContext.weekEventReg[62], phi_a3 = 0x162A & 0xFFFF, ((temp_v0_3 & 0x80) == 0))) {
        gSaveContext.weekEventReg[62] = temp_v0_3 | 0x80;
        temp_a2[2].colChkInfo.cylYShift = 0x162A;
    } else {
        temp_a2[2].colChkInfo.cylYShift = 0x162C;
        phi_a3 = 0x162C & 0xFFFF;
    }
block_27:
    func_801518B0(arg1, phi_a3 & 0xFFFF, phi_a2);
}

void func_80BEE73C(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    s32 sp1C;
    s16 temp_a3;
    s32 temp_a3_2;
    s32 temp_v0;
    u16 temp_t0;
    u16 temp_t2;
    u16 temp_t4;
    u16 temp_t5;
    u16 temp_t6;
    u16 temp_t8;
    void *temp_v1;

    temp_a3 = arg0->params;
    temp_v1 = arg1->actorCtx.actorList[2].first;
    arg0 = arg0;
    temp_a3_2 = temp_a3 & 3;
    sp1C = temp_a3_2;
    sp24 = temp_v1;
    temp_v0 = func_80123810(arg1);
    if (temp_v0 > 0) {
        if (temp_v0 == 0x2B) {
            temp_t8 = *(&D_80BF048C + (temp_a3_2 * 2));
            temp_v1->textId = temp_t8;
            arg0[2].colChkInfo.cylYShift = temp_t8;
            if ((temp_t8 & 0xFFFF) == 0x15E4) {
                temp_v1->unk_A87 = (s8) temp_v0;
                arg0->unk_2D8 = func_80BEF20C;
            } else {
                arg0->unk_2D8 = func_80BEF18C;
            }
        } else if (temp_v0 == 0x2F) {
            temp_t4 = *(&D_80BF0494 + (temp_a3_2 * 2));
            temp_v1->textId = temp_t4;
            arg0[2].colChkInfo.cylYShift = temp_t4;
            if ((temp_t4 & 0xFFFF) == 0x15F9) {
                temp_v1->unk_A87 = (s8) temp_v0;
                arg0->unk_2D8 = func_80BEF20C;
            } else {
                arg0->unk_2D8 = func_80BEF18C;
            }
        } else if (temp_v0 == 0x30) {
            temp_t0 = *(&D_80BF049C + (temp_a3_2 * 2));
            temp_v1->textId = temp_t0;
            arg0[2].colChkInfo.cylYShift = temp_t0;
            if ((temp_t0 & 0xFFFF) == 0x160C) {
                temp_v1->unk_A87 = (s8) temp_v0;
                arg0->unk_2D8 = func_80BEF20C;
            } else {
                arg0->unk_2D8 = func_80BEF18C;
            }
        } else if (temp_v0 == 0x31) {
            temp_t6 = *(&D_80BF04A4 + (temp_a3_2 * 2));
            temp_v1->textId = temp_t6;
            arg0[2].colChkInfo.cylYShift = temp_t6;
            if ((temp_t6 & 0xFFFF) == 0x1621) {
                temp_v1->unk_A87 = (s8) temp_v0;
                arg0->unk_2D8 = func_80BEF20C;
            } else {
                arg0->unk_2D8 = func_80BEF18C;
            }
        } else {
            temp_t2 = *(&D_80BF04AC + (temp_a3_2 * 2));
            temp_v1->textId = temp_t2;
            arg0->unk_2D8 = func_80BEF18C;
            arg0[2].colChkInfo.cylYShift = temp_t2;
        }
        func_801477B4(arg1);
        return;
    }
    if (temp_v0 < 0) {
        temp_t5 = *(&D_80BF04AC + (temp_a3_2 * 2));
        arg0[2].colChkInfo.cylYShift = temp_t5;
        arg0 = arg0;
        func_80151938(arg1, temp_t5 & 0xFFFF);
        arg0->unk_2D8 = func_80BEF18C;
    }
}

void func_80BEE938(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    s32 temp_v0;

    temp_v1 = arg0->params;
    temp_v0 = temp_v1 & 3;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {
                    return;
                }
                if ((gSaveContext.weekEventReg[62] & 0x20) != 0) {
                    if (((s32) (temp_v1 & 4) >> 2) != 0) {
                        arg0[2].targetArrowOffset = func_80BEE530;
                        return;
                    }
                    Actor_MarkForDeath(arg0);
                    return;
                }
                if (((s32) (temp_v1 & 4) >> 2) != 0) {
                    Actor_MarkForDeath(arg0);
                    return;
                }
                arg0[2].targetArrowOffset = (bitwise f32) func_80BEE274;
                return;
            }
            if ((gSaveContext.weekEventReg[62] & 4) != 0) {
                if (((s32) (temp_v1 & 4) >> 2) != 0) {
                    arg0[2].targetArrowOffset = (bitwise f32) func_80BEE070;
                    return;
                }
                Actor_MarkForDeath(arg0);
                return;
            }
            if (((s32) (temp_v1 & 4) >> 2) != 0) {
                Actor_MarkForDeath(arg0);
                return;
            }
            arg0[2].targetArrowOffset = (bitwise f32) func_80BEDDAC;
            return;
        }
        if ((gSaveContext.weekEventReg[61] & 0x80) != 0) {
            if (((s32) (temp_v1 & 4) >> 2) != 0) {
                arg0[2].targetArrowOffset = (bitwise f32) func_80BEDB88;
                return;
            }
            Actor_MarkForDeath(arg0);
            return;
        }
        if (((s32) (temp_v1 & 4) >> 2) != 0) {
            Actor_MarkForDeath(arg0);
            return;
        }
        arg0[2].targetArrowOffset = (bitwise f32) func_80BED8A4;
        return;
    }
    if ((gSaveContext.weekEventReg[61] & 0x10) != 0) {
        if (((s32) (temp_v1 & 4) >> 2) != 0) {
            arg0[2].targetArrowOffset = (bitwise f32) func_80BED680;
            return;
        }
        Actor_MarkForDeath(arg0);
        return;
    }
    if (((s32) (temp_v1 & 4) >> 2) != 0) {
        Actor_MarkForDeath(arg0);
        return;
    }
    arg0[2].targetArrowOffset = (bitwise f32) func_80BED3BC;
}

void func_80BEEB20(Actor *arg0, GlobalContext *arg1) {
    s16 sp26;
    s16 sp24;
    f32 temp_f0;
    f32 temp_f6;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 phi_v0;
    s16 phi_v0_2;
    s16 phi_v0_3;
    s16 phi_v0_4;

    sp26 = (s16) (s32) arg0->unk_15C;
    sp24 = SkelAnime_GetFrameCount(*(D_80BF031C + (arg0[2].colChkInfo.cylRadius * 0x10)));
    Math_ApproachS(arg0 + 0xBE, arg0->yawTowardsPlayer, 2, 0xE38);
    temp_f0 = arg0->yDistToPlayer;
    phi_v0 = 0;
    phi_v0_2 = 0;
    phi_v0_3 = 0;
    phi_v0_4 = 0;
    if ((temp_f0 < 50.0f) && (temp_f0 > -50.0f)) {
        phi_v0 = 1;
    }
    if (phi_v0 != 0) {
        if (arg0->xzDistToPlayer < 200.0f) {
            phi_v0_2 = 1;
        }
        if (phi_v0_2 != 0) {
            Audio_PlayActorSound2(arg0, 0x3987U);
            arg0->unk_2D8 = func_80BEEDC0;
            arg0[2].colChkInfo.cylRadius = 3;
            arg0->unk_322 = 0x40;
            func_8013BC6C((SkelAnime *) &arg0[1], D_80BF031C, 3);
            return;
        }
        goto block_8;
    }
block_8:
    if (sp26 == sp24) {
        temp_v0 = arg0[2].colChkInfo.cylRadius;
        if ((temp_v0 == 4) || (temp_v0 == 0x12)) {
            arg0[2].colChkInfo.cylRadius = 0x11;
            arg0->unk_322 = 0;
            Audio_PlayActorSound2(arg0, 0x387DU);
            func_8013BC6C((SkelAnime *) &arg0[1], D_80BF031C, 0x11);
            return;
        }
        if (temp_v0 == 2) {
            arg0[2].colChkInfo.cylRadius = 0x10;
            arg0->unk_322 = 0x20;
            Audio_PlayActorSound2(arg0, 0x387CU);
            func_8013BC6C((SkelAnime *) &arg0[1], D_80BF031C, 0x10);
            return;
        }
        if (temp_v0 == 0x11) {
            temp_v1 = arg0[2].colChkInfo.cylHeight;
            if (temp_v1 == 0) {

            } else {
                arg0[2].colChkInfo.cylHeight = temp_v1 - 1;
                phi_v0_3 = arg0[2].colChkInfo.cylHeight;
            }
            if (phi_v0_3 == 0) {
                temp_f6 = Rand_ZeroOne() * 10.0f;
                arg0[2].colChkInfo.cylRadius = 2;
                arg0->unk_322 = 0x20;
                arg0[2].colChkInfo.cylHeight = (s16) (s32) temp_f6;
                func_8013BC6C((SkelAnime *) &arg0[1], D_80BF031C, 2);
                return;
            }
            /* Duplicate return node #26. Try simplifying control flow for better match */
            return;
        }
        if (temp_v0 == 0x10) {
            temp_v1_2 = arg0[2].colChkInfo.cylHeight;
            if (temp_v1_2 == 0) {

            } else {
                arg0[2].colChkInfo.cylHeight = temp_v1_2 - 1;
                phi_v0_4 = arg0[2].colChkInfo.cylHeight;
            }
            if (phi_v0_4 == 0) {
                arg0[2].colChkInfo.cylHeight = Rand_S16Offset(0x28, 0x28);
                arg0[2].colChkInfo.cylRadius = 0x12;
                arg0->unk_322 = 0x20;
                func_8013BC6C((SkelAnime *) &arg0[1], D_80BF031C, 0x12);
            }
        }
        /* Duplicate return node #26. Try simplifying control flow for better match */
    }
}

void func_80BEEDC0(void *arg0, ? arg1) {
    if (arg0->unk_154 == arg0->unk_15C) {
        arg0->unk_2D8 = func_80BEEE10;
        func_8013BC6C(arg0 + 0x144, D_80BF031C, 0);
    }
}

void func_80BEEE10(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;

    Math_SmoothStepToS(arg0 + 0xBE, arg0->yawTowardsPlayer, 3, 0x7D0, (s16) 0);
    arg0->world.rot.y = arg0->shape.rot.y;
    if (func_800B84D0(arg0, arg1) != 0) {
        (bitwise ? (*)(Actor *, GlobalContext *)) arg0[2].targetArrowOffset(arg0, arg1);
        arg0->unk_2D8 = func_80BEEFA8;
        return;
    }
    temp_f2 = arg0->xzDistToPlayer;
    if (temp_f2 < 100.0f) {
        temp_f0 = arg0->yDistToPlayer;
        phi_v0 = 0;
        if ((temp_f0 < 50.0f) && (temp_f0 > -50.0f)) {
            phi_v0 = 1;
        }
        if (phi_v0 == 0) {
            goto block_7;
        }
        goto block_8;
    }
block_7:
    if (arg0->isTargeted != 0) {
block_8:
        func_800B8614(arg0, arg1, 100.0f);
        return;
    }
    temp_f0_2 = arg0->yDistToPlayer;
    phi_v0_2 = 0;
    phi_v0_3 = 0;
    if ((temp_f0_2 < 50.0f) && (temp_f0_2 > -50.0f)) {
        phi_v0_2 = 1;
    }
    if (phi_v0_2 != 0) {
        if (temp_f2 < 200.0f) {
            phi_v0_3 = 1;
        }
        if (phi_v0_3 == 0) {
            goto block_16;
        }
    } else {
block_16:
        arg0[2].colChkInfo.cylRadius = 4;
        func_8013BC6C((SkelAnime *) &arg0[1], D_80BF031C, 4);
        arg0->unk_2D8 = func_80BEEB20;
    }
}

void func_80BEEFA8(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a3;
    s16 temp_a2;
    u16 temp_t5;
    u16 temp_v0_2;
    u8 temp_v0;
    u8 temp_v0_3;

    arg0 = arg0;
    temp_v0 = func_80152498(arg1 + 0x4908);
    if (temp_v0 == 5) {
        arg0 = arg0;
        temp_a3 = arg0;
        if (func_80147624(arg1) != 0) {
            temp_v0_2 = temp_a3->unk_32C;
            if ((temp_v0_2 & 1) != 0) {
                temp_a3->unk_32C = (u16) (temp_v0_2 & 0xFFFE);
                arg1->msgCtx.unk11F22 = 0x43;
                arg1->msgCtx.unk12023 = 4;
                temp_a3[2].colChkInfo.cylYShift = 0;
                temp_a3->unk_2D8 = func_80BEEE10;
                return;
            }
            temp_t5 = temp_v0_2 & 0xFFDF;
            if ((temp_v0_2 & 0x20) != 0) {
                temp_a3->unk_32C = temp_t5;
                temp_a3->flags &= -2;
                temp_a3->unk_32C = (u16) (temp_t5 & 0xFFFB);
                arg1->msgCtx.unk11F22 = 0x43;
                arg1->msgCtx.unk12023 = 4;
                temp_a3[2].colChkInfo.cylRadius = 8;
                temp_a3[2].colChkInfo.cylYShift = 0;
                temp_a2 = temp_a3[2].colChkInfo.cylRadius;
                arg0 = temp_a3;
                func_8013BC6C(temp_a3 + 0x144, D_80BF031C, (s32) temp_a2);
                arg0->unk_2D8 = func_80BEF518;
                return;
            }
            temp_a3[2].targetArrowOffset(temp_a3, arg1);
            return;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return;
    }
    if (temp_v0 == 4) {
        arg0 = arg0;
        if (func_80147624(arg1) != 0) {
            temp_v0_3 = arg1->msgCtx.choiceIndex;
            if (temp_v0_3 != 0) {
                if (temp_v0_3 != 1) {
                    return;
                }
                arg0 = arg0;
                func_8019F230();
                arg0->unk_32C = (u16) (arg0->unk_32C | 0x10);
                arg0[2].targetArrowOffset(arg0, arg1);
                return;
            }
            arg0->unk_32C = (u16) (arg0->unk_32C | 8);
            arg0[2].targetArrowOffset(arg0, arg1);
            return;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return;
    }
    if (temp_v0 == 0x10) {
        func_80BEE73C(arg0, arg1);
    }
}

void func_80BEF18C(void *arg0, GlobalContext *arg1) {
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        arg1->msgCtx.unk11F22 = 0x43;
        arg1->msgCtx.unk12023 = 4;
        arg0->unk_33C = 0;
        arg0->unk_2D8 = func_80BEEE10;
    }
}

void func_80BEF20C(void *arg0, GlobalContext *arg1) {
    u8 sp27;
    s16 sp24;
    s16 sp22;
    s16 temp_a3;
    u16 temp_v0;

    sp27 = func_80152498(arg1 + 0x4908);
    sp24 = (s16) (s32) arg0->unk_15C;
    temp_a3 = SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_80BF031C[arg0->unk_338].animationSeg);
    if (arg0->unk_356 == 0x28) {
        arg0->unk_338 = 5;
        sp22 = temp_a3;
        func_8013BC6C(arg0 + 0x144, D_80BF031C, 5);
    }
    arg0->unk_356 = (s16) (arg0->unk_356 + 1);
    if ((sp24 == temp_a3) && (arg0->unk_338 == 5)) {
        arg0->unk_338 = 6;
        func_8013BC6C(arg0 + 0x144, D_80BF031C, 6);
    }
    if ((sp27 == 5) && (func_80147624(arg1) != 0)) {
        temp_v0 = arg0->unk_32C;
        if ((temp_v0 & 1) != 0) {
            arg0->unk_32C = (u16) (temp_v0 & 0xFFFE);
            arg1->msgCtx.unk11F22 = 0x43;
            arg1->msgCtx.unk12023 = 4;
            arg0->unk_2D8 = func_80BEF360;
            return;
        }
        arg0->unk_2DC(arg0, arg1);
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}

void func_80BEF360(Actor *arg0, GlobalContext *arg1) {
    if ((arg0->unk_32C & 0x40) != 0) {
        if (Actor_HasParent(arg0, arg1) != 0) {
            arg0->parent = NULL;
            func_801159EC(arg0->unk_364);
            arg0->unk_32C = (u16) (arg0->unk_32C & 0xFFBF);
            arg0->unk_2D8 = func_80BEF450;
            return;
        }
        func_800B8A1C(arg0, arg1, func_80BED034(arg0), 300.0f, 300.0f);
        return;
    }
    if (Actor_HasParent(arg0, arg1) != 0) {
        arg0->parent = NULL;
        arg0->unk_2D8 = func_80BEF450;
        return;
    }
    func_800B8A1C(arg0, arg1, func_80BECFBC(arg0), 300.0f, 300.0f);
}

void func_80BEF450(Actor *arg0, GlobalContext *arg1) {
    if ((func_80152498(arg1 + 0x4908) == 6) && (func_80147624(arg1) != 0)) {
        func_800B85E0(arg0, arg1, 400.0f, -1);
        arg0->unk_2D8 = func_80BEF4B8;
    }
}

void func_80BEF4B8(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;

    temp_a0 = arg0;
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0 = temp_a0;
        (bitwise ? (*)(Actor *, GlobalContext *)) temp_a0[2].targetArrowOffset(temp_a0, arg1);
        arg0->unk_2D8 = func_80BEEFA8;
        return;
    }
    func_800B85E0(temp_a0, arg1, 400.0f, -1);
}

void func_80BEF518(Actor *arg0, GlobalContext *arg1) {
    s16 sp26;
    s16 sp24;
    u16 temp_t2;

    sp26 = (s16) (s32) arg0->unk_15C;
    sp24 = SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_80BF031C[arg0[2].colChkInfo.cylRadius].animationSeg);
    switch (sp26) {
    case 10:
        arg0->unk_33E = 1;
        arg0->unk_340 = 0.1f;
        arg0->unk_344 = 0.1f;
        arg0->unk_348 = 0.1f;
        break;
    case 11:
    case 12:
        arg0->unk_340 = (f32) (arg0->unk_340 + 0.15f);
        arg0->unk_348 = (f32) (arg0->unk_348 + 0.15f);
        arg0->unk_344 = (f32) (arg0->unk_344 + 0.32f);
        break;
    case 13:
        arg0->unk_340 = 0.55f;
        arg0->unk_348 = 0.55f;
        arg0->unk_344 = 1.05f;
        break;
    case 14:
        arg0->unk_340 = 1.0f;
        arg0->unk_348 = 1.0f;
        arg0->unk_344 = 2.0f;
        break;
    case 15:
    case 16:
        arg0->unk_344 = (f32) (arg0->unk_344 - 0.33f);
        break;
    case 17:
block_12:
        arg0->unk_344 = 1.0f;
        break;
    case 18:
    case 19:
        arg0->unk_344 = (f32) (arg0->unk_344 + 0.27f);
        break;
    case 20:
        arg0->unk_33E = 2;
        arg0->unk_344 = 1.8f;
        break;
    case 21:
    case 22:
    case 23:
        arg0->unk_344 = (f32) (arg0->unk_344 - 0.2f);
        break;
    case 24:
        goto block_12;
    }
    if (arg0->unk_35E == 0) {
        if (ActorCutscene_GetCanPlayNext(arg0->unk_360) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields(arg0->unk_360, arg0);
            arg0->unk_35E = 1;
            goto block_19;
        }
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        ActorCutscene_SetIntentToPlay(arg0->unk_360);
        return;
    }
block_19:
    if (sp26 == sp24) {
        arg0[2].colChkInfo.cylRadius = 0x13;
        arg0->unk_33E = 3;
        func_8013BC6C((SkelAnime *) &arg0[1], D_80BF031C, (s32) arg0[2].colChkInfo.cylRadius);
        Audio_PlayActorSound2(arg0, 0x387DU);
        temp_t2 = arg0->unk_32C & 0xFFFD;
        arg0->unk_32C = temp_t2;
        arg0->unk_32C = (u16) (temp_t2 | 0x80);
        arg0->unk_2D8 = func_80BEF770;
        arg0->unk_358 = (f32) arg0->world.pos.y;
    }
}

void func_80BEF770(void *arg0, GlobalContext *arg1) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 temp_f16;
    f32 temp_f4;
    f32 temp_f6;

    temp_f4 = arg0->unk_358;
    temp_f6 = arg0->unk_28;
    arg0->unk_352 = (s16) (arg0->unk_352 + arg0->unk_362);
    if ((arg0->unk_35C & 3) == 0) {
        sp18 = arg0->unk_24;
        sp1C = arg0->unk_358;
        temp_f16 = arg0->unk_2C;
        sp24 = temp_f4 - temp_f6;
        arg0 = arg0;
        sp20 = temp_f16;
        func_800B14D4(arg1, 20.0f, (Vec3f *) &sp18);
    }
    if ((temp_f4 - temp_f6) > 5.0f) {
        arg0->unk_33A = 0x32;
        arg0->unk_68 = 0.0f;
        arg0->unk_74 = 0.0f;
        arg0 = arg0;
        arg0->unk_368 = func_80BECF6C(arg0->unk_330);
        arg0->unk_2D8 = func_80BEF83C;
    }
}

void func_80BEF83C(Actor *arg0, GlobalContext *arg1) {
    ?32 sp3C;
    f32 sp38;
    ?32 sp34;
    s16 sp32;
    ?32 *temp_a2;
    s16 temp_v1;
    s16 phi_v0;

    sp32 = (s16) (s32) arg0->unk_15C;
    if (sp32 == SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_80BF031C[arg0[2].colChkInfo.cylRadius].animationSeg)) {
        Math_SmoothStepToS(arg0 + 0x362, 0x1C71, 3, 0x100, (s16) 0);
        arg0->unk_352 = (s16) (arg0->unk_352 + arg0->unk_362);
        arg0->shape.yOffset = 1500.0f;
    }
    Math_SmoothStepToS(arg0 + 0xBE, arg0->unk_368, 3, 0x7D0, (s16) 0);
    temp_v1 = arg0[2].colChkInfo.cylHeight;
    arg0->world.rot.y = arg0->shape.rot.y;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        arg0[2].colChkInfo.cylHeight = temp_v1 - 1;
        phi_v0 = arg0[2].colChkInfo.cylHeight;
    }
    if (phi_v0 == 0) {
        if ((arg0->unk_35C & 3) == 0) {
            sp34.unk_0 = arg0->world.pos.x;
            (&sp34)[1] = arg0->world.pos.y;
            (&sp34)[2] = arg0->world.pos.z;
            func_800B14D4(arg1, 20.0f, (Vec3f *) &sp34);
        }
        arg0->velocity.y = 5.0f;
    } else if ((arg0->unk_35C & 3) == 0) {
        temp_a2 = &sp34;
        sp34 = arg0->world.pos.x;
        sp38 = arg0->unk_358;
        sp3C = arg0->world.pos.z;
        func_800B14D4(arg1, 20.0f, (Vec3f *) temp_a2);
    }
    if ((arg0->home.pos.y + 22.5f) < arg0->world.pos.y) {
        arg0[2].colChkInfo.cylRadius = 9;
        arg0[2].shape.yOffset = 0.3f;
        func_8013BC6C(arg0 + 0x144, D_80BF031C, (s32) arg0[2].colChkInfo.cylRadius);
        Audio_PlayActorSound2(arg0, 0x3987U);
        arg0->unk_2D8 = func_80BEF9F0;
    }
}

void func_80BEF9F0(void *arg0, ? arg1) {
    f32 temp_f0;

    temp_f0 = arg0->unk_34C;
    arg0->unk_352 = (s16) (arg0->unk_352 + arg0->unk_362);
    if (temp_f0 >= 1.0f) {
        arg0->unk_34C = 1.0f;
        arg0->unk_68 = 5.0f;
    } else {
        arg0->unk_68 = 5.0f;
        arg0->unk_34C = (f32) (temp_f0 + 0.1f);
    }
    if ((arg0->unk_C + 200.0f) < arg0->unk_28) {
        Math_ApproachF(arg0 + 0x68, 0.0f, 0.2f, 1.0f);
        arg0->unk_338 = 0xA;
        func_8013BC6C(arg0 + 0x144, D_80BF031C, (s32) arg0->unk_338);
        if ((arg0->unk_1C & 3) == 2) {
            arg0->unk_32C = (u16) (arg0->unk_32C | 2);
        }
        arg0->unk_356 = 0;
        arg0->unk_2D8 = func_80BEFAF0;
    }
}

void func_80BEFAF0(Actor *arg0, ? arg1) {
    s16 sp3A;
    s16 sp38;
    f32 sp34;
    s16 sp32;
    u8 *sp2C;
    s16 temp_v0_2;
    s32 temp_v0;
    u8 *temp_t6;

    sp32 = 0;
    temp_t6 = arg0[2].colChkInfo.displacement.y;
    arg0->velocity.y = 0.0f;
    arg0->gravity = 0.0f;
    sp2C = temp_t6;
    if (temp_t6 != 0) {
        sp34 = func_80BECEAC(temp_t6, arg0[2].colChkInfo.displacement.z, arg0 + 0x24, &sp38);
        if ((arg0->bgCheckFlags & 8) != 0) {
            sp3A = arg0->wallYaw;
        }
        if ((arg0->params & 3) == 1) {
            Math_SmoothStepToS(arg0 + 0x32, sp3A, 0xA, 0x3E8, (s16) 0);
        } else {
            Math_SmoothStepToS(arg0 + 0x32, sp3A, 0xA, 0x12C, (s16) 0);
        }
        arg0->unk_350 = 0x1000;
        arg0->unk_352 = (s16) (arg0->unk_352 + arg0->unk_362);
        arg0->shape.rot.y = arg0->world.rot.y;
        arg0->world.rot.x = (s16) -(s32) sp38;
        if ((func_80BECD10(arg0, arg0[2].colChkInfo.displacement.y, arg0[2].colChkInfo.displacement.z) != 0) && (sp34 < 10.0f)) {
            temp_v0 = arg0[2].colChkInfo.displacement.z;
            if (temp_v0 >= (*arg0[2].colChkInfo.displacement.y - 1)) {
                ActorCutscene_Stop(arg0->unk_360);
                arg0->unk_2D8 = func_80BEFD74;
            } else {
                arg0[2].colChkInfo.displacement.z = temp_v0 + 1;
            }
        }
    } else if (arg0->yDistToPlayer > 500.0f) {
        ActorCutscene_Stop(arg0->unk_360);
        arg0->unk_2D8 = func_80BEFD74;
    }
    if ((arg0->params & 3) == 2) {
        if (arg0[2].colChkInfo.displacement.z >= 3) {
            sp32 = 1;
        }
        Math_ApproachF(arg0 + 0x70, 1.5f, 0.2f, 1.0f);
    } else {
        Math_ApproachF(arg0 + 0x70, 2.0f, 0.2f, 1.0f);
    }
    func_80BECBE0(arg0, sp32);
    temp_v0_2 = arg0->unk_35E;
    if (temp_v0_2 == 2) {
        if (ActorCutscene_GetCanPlayNext(arg0->unk_360) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields(arg0->unk_360, arg0);
            arg0->unk_35E = 3;
            goto block_25;
        }
        ActorCutscene_SetIntentToPlay(arg0->unk_360);
        return;
    }
    if ((temp_v0_2 == 1) && (arg0->unk_356 == 0x14)) {
        ActorCutscene_Stop(arg0->unk_360);
        arg0->unk_360 = ActorCutscene_GetAdditionalCutscene(arg0->unk_360);
        ActorCutscene_SetIntentToPlay(arg0->unk_360);
        arg0->unk_35E = 2;
    }
block_25:
    arg0->unk_356 = (s16) (arg0->unk_356 + 1);
}

void func_80BEFD74(Actor *arg0, ? arg1) {
    Actor_MarkForDeath(arg0);
}

void EnAkindonuts_Init(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a1_2;
    Path *temp_v0_2;
    SkelAnime *temp_a1;
    s16 temp_v0;
    u16 temp_t4;
    EnAkindonuts *this = (EnAkindonuts *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80BF04B4);
    temp_a1 = &this->unk_144;
    sp34 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_0600AC70, &D_06005488, &this->unk_188, &this->unk_230, 0x1C);
    temp_a1_2 = &this->unk_2E0;
    sp30 = temp_a1_2;
    Collider_InitCylinder(globalCtx, temp_a1_2);
    Collider_SetCylinderType1(globalCtx, temp_a1_2, (Actor *) this, &D_80BF02F0);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 35.0f);
    Actor_SetScale((Actor *) this, 0.01f);
    temp_v0 = this->actor.params;
    this->actor.colChkInfo.cylRadius = 0;
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.gravity = -1.0f;
    if ((((s32) (temp_v0 & 4) >> 2) == 0) && (temp_v0_2 = func_8013D648(globalCtx, (s16) ((s32) (temp_v0 & 0xFC00) >> 0xA), 0x3F), this->unk_330 = temp_v0_2, (temp_v0_2 == 0))) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    func_8013BC6C(sp34, D_80BF031C, 4);
    temp_t4 = this->unk_32C | 2;
    this->unk_32C = temp_t4;
    this->unk_32C = temp_t4 | 4;
    this->unk_338 = 4;
    this->unk_360 = (s16) this->actor.cutscene;
    func_80BEE938((Actor *) this, globalCtx);
    this->actionFunc = (void (*)(EnAkindonuts *, GlobalContext *)) func_80BEEB20;
}

void EnAkindonuts_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnAkindonuts *this = (EnAkindonuts *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_2E0);
}

void EnAkindonuts_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnAkindonuts *this = (EnAkindonuts *) thisx;
    Actor_SetHeight((Actor *) this, 60.0f);
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    this->actionFunc(this, globalCtx);
    if ((this->unk_32C & 0x80) != 0) {
        func_800B9010((Actor *) this, 0x3285U);
    }
    func_80BECC7C((Actor *) this, globalCtx);
}

s32 func_80BEFFB4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;

    temp_v0 = arg5[137].y;
    if (((temp_v0 == 4) && (arg5[138].y == 0)) || ((temp_v0 == 8) && (arg5[138].y == 0)) || (temp_v0 == 0x12) || (temp_v0 == 2) || (temp_v0 == 3) || (temp_v0 == 0x11) || (temp_v0 == 5) || (temp_v0 == 6) || (temp_v0 == 7) || (temp_v0 == 0x10)) {
        if ((arg1 == 0x10) || (arg1 == 0x15) || (arg1 == 0x1B) || (arg1 == 0x17) || (arg1 == 0x18) || (arg1 == 0xF)) {
            goto block_40;
        }
    } else if ((temp_v0 == 8) || (temp_v0 == 0x13)) {
        temp_v0_2 = arg5[138].y;
        if (temp_v0_2 != 1) {
            if ((temp_v0_2 != 2) && (temp_v0_2 != 3)) {

            } else if ((arg1 == 0x10) || (arg1 == 0x15) || (arg1 == 0x1B) || (arg1 == 0xF) || (arg1 == 0x19)) {
                goto block_40;
            }
        } else if ((arg1 == 0x10) || (arg1 == 0x15) || (arg1 == 0x1B) || (arg1 == 0x19)) {
            goto block_40;
        }
    } else if (((temp_v0 == 9) || (temp_v0 == 0xA)) && ((arg1 == 0xF) || (arg1 == 0x19))) {
block_40:
        *arg2 = NULL;
    }
    if (arg1 == 0x1A) {
        temp_v0_3 = arg5[137].y;
        if ((temp_v0_3 == 6) || (temp_v0_3 == 5) || (temp_v0_3 == 7)) {
            *arg2 = &D_06001350;
        } else {
            *arg2 = &D_06008290;
        }
    }
    return 0;
}

void func_80BF0178(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3) {

}

void func_80BF0190(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    f32 temp_f12;
    s16 temp_v0;
    s32 phi_a1;

    temp_v0 = arg2->unk_33E;
    if (((temp_v0 == 1) || (temp_v0 == 2)) && ((arg1 == 0x17) || (arg1 == 0x18))) {
        Matrix_Scale(arg2->unk_340, arg2->unk_344, arg2->unk_348, 1);
    }
    phi_a1 = arg1;
    if ((arg2[2].colChkInfo.cylRadius == 9) && ((arg1 == 0x10) || (arg1 == 0x15) || (arg1 == 0x1B))) {
        temp_f12 = arg2[2].shape.yOffset;
        arg1 = arg1;
        Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        phi_a1 = arg1;
    }
    if (phi_a1 == 0x18) {
        Matrix_RotateY(arg2->unk_352, 1U);
    }
}

void EnAkindonuts_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnAkindonuts *this = (EnAkindonuts *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    func_801343C0(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80BEFFB4, func_80BF0178, func_80BF0190, (Actor *) this);
}
