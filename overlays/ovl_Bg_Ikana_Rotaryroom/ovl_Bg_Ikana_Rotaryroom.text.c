typedef struct BgIkanaRotaryroom {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ ColliderJntSph unk_15C;             /* inferred */
    /* 0x17C */ ColliderJntSphElement unk_17C;      /* inferred */
    /* 0x1BC */ char pad_1BC[0x40];
    /* 0x1FC */ void *unk_1FC;                      /* inferred */
    /* 0x200 */ ? (*unk_200)(BgIkanaRotaryroom *, GlobalContext *, BgIkanaRotaryroom *); /* inferred */
    /* 0x204 */ void *unk_204;                      /* inferred */
    /* 0x208 */ char pad_208[0x370];                /* maybe part of unk_204[221]? */
    /* 0x578 */ ? (*unk_578)(BgIkanaRotaryroom *, GlobalContext *, BgIkanaRotaryroom *); /* inferred */
    /* 0x57C */ char pad_57C[0x4];
    /* 0x580 */ void (*actionFunc)(BgIkanaRotaryroom *, GlobalContext *);
    /* 0x584 */ char pad_584[0x4];
} BgIkanaRotaryroom;                                /* size = 0x588 */

struct _mips2c_stack_BgIkanaRotaryroom_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgIkanaRotaryroom_Draw {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_BgIkanaRotaryroom_Init {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderJntSph *sp2C;                /* inferred */
    /* 0x30 */ CollisionHeader **sp30;              /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_BgIkanaRotaryroom_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B802E0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderJntSph *sp20;                /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B80358 {};              /* size 0x0 */

struct _mips2c_stack_func_80B80440 {
    /* 0x00 */ char pad_0[0x50];
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x4];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80B80550 {
    /* 0x00 */ char pad_0[0x60];
    /* 0x60 */ s16 sp60;                            /* inferred */
    /* 0x62 */ s16 sp62;                            /* inferred */
    /* 0x64 */ s16 sp64;                            /* inferred */
    /* 0x66 */ char pad_66[0x2];
    /* 0x68 */ ? sp68;                              /* inferred */
    /* 0x68 */ char pad_68[0x4C];
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ char pad_C0[0x4];
    /* 0xC4 */ s32 spC4;                            /* inferred */
    /* 0xC8 */ s32 spC8;                            /* inferred */
    /* 0xCC */ char pad_CC[0x4];
};                                                  /* size = 0xD0 */

struct _mips2c_stack_func_80B80778 {
    /* 0x00 */ char pad_0[0x58];
    /* 0x58 */ void *sp58;                          /* inferred */
    /* 0x5C */ char pad_5C[0xC];                    /* maybe part of sp58[4]? */
    /* 0x68 */ ? sp68;                              /* inferred */
    /* 0x68 */ char pad_68[0x10];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_80B80894 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ MtxF *sp2C;                          /* inferred */
    /* 0x30 */ char pad_30[0x28];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80B80C88 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0x6C];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_80B80F08 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0xC];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ void *sp40;                          /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B81010 {
    /* 0x00 */ char pad_0[0x78];
    /* 0x78 */ ? sp78;                              /* inferred */
    /* 0x78 */ char pad_78[0x4];
    /* 0x7C */ ? sp7C;                              /* inferred */
    /* 0x7C */ char pad_7C[0x8];
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ char pad_90[0x18];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_80B81234 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Vec3f *sp2C;                         /* inferred */
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ char pad_34[0x8];                    /* maybe part of sp30[3]? */
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ s32 sp64;                            /* inferred */
    /* 0x68 */ char pad_68[0x10];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_80B814B8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B81570 {
    /* 0x00 */ char pad_0[0x64];
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0x4];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80B816A4 {};              /* size 0x0 */

struct _mips2c_stack_func_80B818B4 {};              /* size 0x0 */

struct _mips2c_stack_func_80B818C8 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B81978 {};              /* size 0x0 */

struct _mips2c_stack_func_80B8198C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B819DC {};              /* size 0x0 */

struct _mips2c_stack_func_80B819F0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B81A64 {};              /* size 0x0 */

struct _mips2c_stack_func_80B81A80 {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
    /* 0x28 */ char pad_28[0x10];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B81B84 {};              /* size 0x0 */

struct _mips2c_stack_func_80B81BA0 {
    /* 0x00 */ char pad_0[0x2A];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];                    /* maybe part of sp2A[3]? */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B81DAC {};              /* size 0x0 */

struct _mips2c_stack_func_80B81DC8 {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

f32 func_800C4188(void *, void *, ? *, ? *, s32, f32 *); /* extern */
void func_80B802E0(BgIkanaRotaryroom *arg0);        /* static */
void func_80B80358(f32 *arg0);                      /* static */
void func_80B80440(BgIkanaRotaryroom *arg0, GlobalContext *arg1); /* static */
void func_80B80550(BgIkanaRotaryroom *arg0, GlobalContext *arg1); /* static */
void *func_80B80778(Actor *arg0, void *arg1, s16 *arg2); /* static */
void func_80B80894(Actor *arg0, void *arg1, Actor *, void *); /* static */
void func_80B80C88(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B80F08(BgIkanaRotaryroom *arg0, GlobalContext *arg1, BgIkanaRotaryroom *); /* static */
void func_80B81010(void *arg0, void *arg1);         /* static */
void func_80B81234(void *arg0, void *arg1);         /* static */
void func_80B81570(BgIkanaRotaryroom *arg0, GlobalContext *arg1); /* static */
s32 func_80B816A4(Actor *arg0, s32, Actor *);       /* static */
void func_80B818B4(BgIkanaRotaryroom *arg0);        /* static */
void func_80B818C8(void *arg0, GlobalContext *arg1); /* static */
void func_80B81978(void *arg0);                     /* static */
void func_80B8198C(void *arg0, ? arg1);             /* static */
void func_80B819DC(void *arg0);                     /* static */
void func_80B819F0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B81A64(Actor *arg0);                    /* static */
void func_80B81A80(Actor *arg0, void *arg1);        /* static */
void func_80B81B84(Actor *arg0, s32, Actor *);      /* static */
void func_80B81BA0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B81DAC(Actor *arg0);                    /* static */
void func_80B81DC8(Actor *arg0, void *arg1);        /* static */
extern Gfx D_06004710;
extern Gfx D_060048A0;
extern Gfx D_06007360;
extern Gfx D_06007448;
extern void D_06007B68;
static ColliderJntSphElementInit D_80B820E0[2] = {
    {
        {4, {0, 0, 0}, {0x2000, 0, 0}, 0, 1, 0},
        {0, {{0xF286, 0x1C2, 0}, 0x3C}, 0x64},
    },
    {{4, {0, 0, 0}, {0x2000, 0, 0}, 0, 1, 0}, {0, {{0xD7A, 0x1C2, 0}, 0x3C}, 0x64}},
};
static ColliderJntSphInit D_80B82128 = {{0xA, 0, 9, 0, 0, 0}, 2, &D_80B820E0};
static ColliderJntSphElementInit D_80B82138 = {
    {4, {0, 0, 0}, {0x2000, 0, 0}, 0, 1, 0},
    {0, {{0xF15A, 0x4B0, 0}, 0x3C}, 0x64},
};
static ColliderJntSphInit D_80B8215C = {{0xA, 0, 9, 0, 0, 0}, 1, &D_80B82138};
static ? D_80B8216C;                                /* unable to generate initializer */
static ? D_80B82178;                                /* unable to generate initializer */
static ? D_80B82184;                                /* unable to generate initializer */
static ? D_80B821C4;                                /* unable to generate initializer */
static ? D_80B82200;                                /* unable to generate initializer */
static InitChainEntry D_80B82214;                   /* unable to generate initializer */
static ? D_80B82218;                                /* unable to generate initializer */
static ? D_80B8221C;                                /* unable to generate initializer */

void func_80B802E0(BgIkanaRotaryroom *arg0) {
    ColliderJntSph *sp20;
    ColliderJntSph *temp_a1;

    SysMatrix_SetStateRotationAndTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, arg0 + 0xBC);
    Matrix_Scale(arg0->actor.scale.x, arg0->actor.scale.y, arg0->actor.scale.z, 1);
    temp_a1 = arg0 + 0x15C;
    sp20 = temp_a1;
    Collider_UpdateSpheres(0, temp_a1);
    if ((arg0->actor.params & 1) == 0) {
        Collider_UpdateSpheres(1, temp_a1);
    }
}

void func_80B80358(f32 *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 phi_f2;
    f32 phi_f2_2;
    f32 phi_f2_3;

    temp_f0 = arg0->unk_0;
    if (temp_f0 >= 0.0f) {
        phi_f2 = 0.5f;
    } else {
        phi_f2 = -0.5f;
    }
    temp_f12 = arg0[1];
    arg0->unk_0 = temp_f0 + phi_f2;
    if (temp_f12 >= 0.0f) {
        phi_f2_2 = 0.5f;
    } else {
        phi_f2_2 = -0.5f;
    }
    temp_f0_2 = arg0[2];
    arg0[1] = temp_f12 + phi_f2_2;
    if (temp_f0_2 >= 0.0f) {
        phi_f2_3 = 0.5f;
    } else {
        phi_f2_3 = -0.5f;
    }
    arg0[2] = temp_f0_2 + phi_f2_3;
    arg0->unk_0 = (f32) (s32) arg0->unk_0;
    arg0[1] = (f32) (s32) arg0[1];
    arg0[2] = (f32) (s32) arg0[2];
}

void func_80B80440(BgIkanaRotaryroom *arg0, GlobalContext *arg1) {
    f32 sp50;

    SysMatrix_StatePush();
    SysMatrix_SetStateRotationAndTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, arg0 + 0xBC);
    if (Flags_GetSwitch(arg1, ((s32) arg0->actor.params >> 8) & 0x7F) != 0) {
        SysMatrix_InsertTranslation(D_80B82178.unk_0, D_80B82178.unk_4, D_80B82178.unk_8, 1);
    } else {
        SysMatrix_InsertTranslation(D_80B8216C.unk_0, D_80B8216C.unk_4, D_80B8216C.unk_8, 1);
    }
    SysMatrix_GetStateTranslation((Vec3f *) &sp50);
    func_80B80358(&sp50);
    arg0->unk_204 = Actor_SpawnAsChildAndCutscene(&arg1->actorCtx, arg1, 0x218, sp50, sp54, sp58, (s16) (s32) arg0->actor.shape.rot.x, (s16) (s32) arg0->actor.shape.rot.y, (s16) (s32) arg0->actor.shape.rot.z, -1, ActorCutscene_GetAdditionalCutscene((s16) arg0->actor.cutscene), (s32) arg0->actor.unk20, NULL);
    SysMatrix_StatePop();
}

void func_80B80550(BgIkanaRotaryroom *arg0, GlobalContext *arg1) {
    s32 spC8;
    s32 spC4;
    f32 spB4;
    ? sp68;
    s16 sp64;
    s16 sp62;
    s16 sp60;
    Actor *temp_s2;
    Actor *temp_s2_2;
    Vec3f *temp_s6;
    s16 *temp_a3;
    s16 temp_v0;
    s32 temp_s3;
    void *temp_s1;
    Actor *phi_s2;
    Vec3f *phi_s4;
    void *phi_s0;
    s32 phi_s3;

    temp_v0 = arg0->actor.params;
    spC8 = temp_v0 & 1;
    if (Flags_GetSwitch(arg1, ((s32) temp_v0 >> 1) & 0x7F) != 0) {
        spC4 = 1;
    } else {
        spC4 = 0;
    }
    temp_s2 = arg1->actorCtx.actorList[10].first;
    SysMatrix_StatePush();
    temp_a3 = &sp60;
    sp60 = arg0->actor.home.rot.x + 0x8000;
    sp62 = arg0->actor.home.rot.y;
    sp64 = arg0->actor.home.rot.z;
    SysMatrix_SetStateRotationAndTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, (Vec3s *) temp_a3);
    if (temp_s2 != 0) {
        phi_s2 = temp_s2;
        do {
            temp_s6 = phi_s2 + 0x24;
            if (phi_s2->id == 0x1E) {
                temp_s1 = (spC8 << 5) + &D_80B82184;
                Math_Vec3f_Diff(temp_s6, arg0 + 0x24, (Vec3f *) &spB4);
                phi_s4 = temp_s1 + 4;
                phi_s0 = temp_s1;
                phi_s3 = 0;
                do {
                    if ((Math3D_DistanceSquared((Vec3f *) &spB4, phi_s4) < 62500.0f) && (phi_s0->unk_0 != spC4) && (phi_s0->unk_1 == 0)) {
                        SysMatrix_StatePush();
                        SysMatrix_InsertTranslation(spB4, spB8, spBC, 1);
                        Matrix_RotateY((s16) (phi_s2->shape.rot.y - arg0->actor.home.rot.y), 1U);
                        SysMatrix_InsertXRotation_s((s16) (phi_s2->shape.rot.x - arg0->actor.home.rot.x), 1);
                        SysMatrix_InsertZRotation_s((s16) (phi_s2->shape.rot.z - arg0->actor.home.rot.z), 1);
                        SysMatrix_GetStateTranslation(temp_s6);
                        func_80B80358((f32 *) temp_s6);
                        SysMatrix_CopyCurrentState((MtxF *) &sp68);
                        func_8018219C((MtxF *) &sp68, phi_s2 + 0xBC, 0);
                        SysMatrix_StatePop();
                    }
                    temp_s3 = phi_s3 + 0x10;
                    phi_s4 = (Vec3f *) &phi_s4[1].y;
                    phi_s0 += 0x10;
                    phi_s3 = temp_s3;
                } while (temp_s3 != 0x20);
            }
            temp_s2_2 = phi_s2->next;
            phi_s2 = temp_s2_2;
        } while (temp_s2_2 != 0);
    }
    SysMatrix_StatePop();
}

void *func_80B80778(Actor *arg0, void *arg1, s16 *arg2) {
    ? sp68;
    void *sp58;
    s32 temp_s1;
    s32 temp_s3;
    void *phi_s0;
    s32 phi_s1;

    sp58 = NULL;
    temp_s3 = arg0->params & 1;
    if (*arg2 == 0x1E) {
        SysMatrix_StatePush();
        phi_s0 = (temp_s3 << 5) + &D_80B82184;
        phi_s1 = 0;
loop_2:
        if ((phi_s0->unk_1 == 0) && (SysMatrix_SetStateRotationAndTranslation(arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, arg0 + 0xBC), SysMatrix_MultiplyVector3fByState(phi_s0 + 4, (Vec3f *) &sp68), (Math3D_DistanceSquared(arg2 + 0x24, (Vec3f *) &sp68) < 62500.0f))) {
            sp58 = phi_s0;
        } else {
            temp_s1 = phi_s1 + 0x10;
            phi_s0 += 0x10;
            phi_s1 = temp_s1;
            if (temp_s1 != 0x20) {
                goto loop_2;
            }
        }
        SysMatrix_StatePop();
    }
    return sp58;
}

void func_80B80894(Actor *arg0, void *arg1) {
    MtxF *sp2C;
    Actor *temp_v0;
    Actor *temp_v0_3;
    Actor *temp_v0_5;
    s16 *temp_s0_2;
    s16 *temp_s0_3;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    void *temp_s0;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s0_8;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v0_6;
    Actor *phi_v0;
    s32 phi_s1;
    s16 *phi_s0;
    s32 phi_s1_2;
    Actor *phi_v0_2;
    s32 phi_s1_3;
    void *phi_s0_2;
    s32 phi_s1_4;
    Actor *phi_v0_3;
    s32 phi_s1_5;
    void *phi_s0_3;
    s32 phi_s1_6;

    temp_s0 = arg0->unk_204;
    SysMatrix_StatePush();
    SysMatrix_InsertZRotation_s((s16) ((s32) arg0->shape.rot.z * -1), 0);
    SysMatrix_InsertXRotation_s((s16) ((s32) arg0->shape.rot.x * -1), 1);
    Matrix_RotateY((s16) ((s32) arg0->shape.rot.y * -1), 1U);
    SysMatrix_InsertTranslation(-arg0->world.pos.x, -arg0->world.pos.y, -arg0->world.pos.z, 1);
    if (temp_s0 != 0) {
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(temp_s0->unk_24, temp_s0->unk_28, temp_s0->unk_2C, 1);
        Matrix_RotateY(temp_s0->unk_BE, 1U);
        SysMatrix_InsertXRotation_s(temp_s0->unk_BC, 1);
        SysMatrix_InsertZRotation_s(temp_s0->unk_C0, 1);
        SysMatrix_CopyCurrentState(arg0 + 0x208);
        SysMatrix_StatePop();
    }
    phi_v0 = arg0;
    phi_s1 = 0;
    phi_s1_2 = 0;
    phi_s1_4 = 0;
    phi_s1_6 = 0;
    do {
        temp_s1 = phi_s1 + 1;
        temp_v0 = phi_v0 + 0x44;
        temp_v0->unk_204 = 0;
        phi_v0 = temp_v0;
        phi_s1 = temp_s1;
    } while (temp_s1 < 2);
    temp_s0_2 = arg1->unk_1D2C;
    phi_s0 = temp_s0_2;
    if (temp_s0_2 != 0) {
        do {
            if ((func_80B80778(arg0, arg1, phi_s0) != 0) && (phi_s1_2 < 2)) {
                temp_v0_2 = arg0 + (phi_s1_2 * 0x44);
                temp_v0_2->unk_248 = phi_s0;
                sp2C = temp_v0_2 + 0x24C;
                SysMatrix_StatePush();
                SysMatrix_InsertTranslation(phi_s0->unk_24, phi_s0->unk_28, phi_s0->unk_2C, 1);
                Matrix_RotateY(phi_s0[95], 1U);
                SysMatrix_InsertXRotation_s(phi_s0[94], 1);
                SysMatrix_InsertZRotation_s(phi_s0[96], 1);
                SysMatrix_CopyCurrentState(sp2C);
                SysMatrix_StatePop();
                phi_s1_2 += 1;
            }
            temp_s0_3 = phi_s0->unk_12C;
            phi_s0 = temp_s0_3;
        } while (temp_s0_3 != 0);
    }
    phi_v0_2 = arg0;
    phi_s1_3 = 0;
    do {
        temp_s1_2 = phi_s1_3 + 1;
        temp_v0_3 = phi_v0_2 + 0x44;
        temp_v0_3[2].flags = 0;
        phi_v0_2 = temp_v0_3;
        phi_s1_3 = temp_s1_2;
    } while (temp_s1_2 < 4);
    temp_s0_4 = arg1->unk_1D08;
    phi_s0_2 = temp_s0_4;
    if (temp_s0_4 != 0) {
        do {
            if ((phi_s0_2->unk_0 == 0x21) && (phi_s0_2->unk_138 != 0) && (phi_s1_4 < 4)) {
                temp_v0_4 = arg0 + (phi_s1_4 * 0x44);
                temp_v0_4->unk_2D0 = phi_s0_2;
                sp2C = temp_v0_4 + 0x2D4;
                SysMatrix_StatePush();
                SysMatrix_InsertTranslation(phi_s0_2->unk_24, phi_s0_2->unk_28, phi_s0_2->unk_2C, 1);
                Matrix_RotateY(phi_s0_2->unk_BE, 1U);
                SysMatrix_InsertXRotation_s(phi_s0_2->unk_BC, 1);
                SysMatrix_InsertZRotation_s(phi_s0_2->unk_C0, 1);
                SysMatrix_CopyCurrentState(sp2C);
                SysMatrix_StatePop();
                phi_s1_4 += 1;
            }
            temp_s0_5 = phi_s0_2->unk_12C;
            phi_s0_2 = temp_s0_5;
        } while (temp_s0_5 != 0);
    }
    phi_v0_3 = arg0;
    phi_s1_5 = 0;
    do {
        temp_s1_3 = phi_s1_5 + 1;
        temp_v0_5 = phi_v0_3 + 0x50;
        temp_v0_5[2].prevPos.x = 0.0f;
        phi_v0_3 = temp_v0_5;
        phi_s1_5 = temp_s1_3;
    } while (temp_s1_3 < 4);
    temp_s0_6 = arg1->unk_1CF0;
    phi_s0_3 = temp_s0_6;
    if (temp_s0_6 != 0) {
        do {
            if ((phi_s0_3->unk_138 != 0) && (phi_s0_3->unk_0 != 0x170) && (phi_s1_6 < 4)) {
                temp_v0_6 = arg0 + (phi_s1_6 * 0x50);
                temp_v0_6->unk_3E0 = phi_s0_3;
                temp_v0_6->unk_424 = (unaligned s32) phi_s0_3->unk_BC;
                temp_v0_6->unk_42C = 0.0f;
                temp_v0_6->unk_428 = (u16) phi_s0_3->unk_C0;
                sp2C = temp_v0_6 + 0x3E4;
                SysMatrix_StatePush();
                SysMatrix_InsertTranslation(phi_s0_3->unk_24, phi_s0_3->unk_28, phi_s0_3->unk_2C, 1);
                Matrix_RotateY(phi_s0_3->unk_BE, 1U);
                SysMatrix_InsertXRotation_s(phi_s0_3->unk_BC, 1);
                SysMatrix_InsertZRotation_s((s16) phi_s0_3->unk_C0, 1);
                SysMatrix_CopyCurrentState(sp2C);
                SysMatrix_StatePop();
                phi_s1_6 += 1;
            }
            temp_s0_7 = phi_s0_3->unk_12C;
            phi_s0_3 = temp_s0_7;
        } while (temp_s0_7 != 0);
    }
    temp_s0_8 = arg1->unk_1CCC;
    if (temp_s0_8->unk_138 != 0) {
        arg0->unk_560 = (unaligned s32) temp_s0_8->unk_BC;
        arg0->unk_564 = (u16) temp_s0_8->unk_C0;
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(temp_s0_8->unk_24, temp_s0_8->unk_28, temp_s0_8->unk_2C, 1);
        Matrix_RotateY(temp_s0_8->unk_BE, 1U);
        SysMatrix_InsertXRotation_s(temp_s0_8->unk_BC, 1);
        SysMatrix_InsertZRotation_s((s16) temp_s0_8->unk_C0, 1);
        SysMatrix_CopyCurrentState(arg0 + 0x520);
        SysMatrix_StatePop();
    }
    SysMatrix_StatePop();
}

void func_80B80C88(Actor *arg0, GlobalContext *arg1) {
    ? sp3C;
    Vec3f *temp_s0;
    Vec3f *temp_s0_2;
    Vec3f *temp_s0_3;
    Vec3f *temp_s0_4;
    Vec3f *temp_s0_5;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s3_3;
    void *temp_s1_5;
    Actor *phi_s2;
    s32 phi_s3;
    Actor *phi_s2_2;
    s32 phi_s3_2;
    Actor *phi_s2_3;
    s32 phi_s3_3;

    temp_s1 = arg0->unk_204;
    SysMatrix_StatePush();
    SysMatrix_SetStateRotationAndTranslation(arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, arg0 + 0xBC);
    if (temp_s1 != 0) {
        SysMatrix_StatePush();
        SysMatrix_InsertMatrix(arg0 + 0x208, 1);
        temp_s0 = temp_s1 + 0x24;
        SysMatrix_GetStateTranslation(temp_s0);
        func_80B80358((f32 *) temp_s0);
        SysMatrix_CopyCurrentState((MtxF *) &sp3C);
        func_8018219C((MtxF *) &sp3C, temp_s1 + 0xBC, 0);
        SysMatrix_StatePop();
    }
    phi_s2 = arg0;
    phi_s3 = 0;
    phi_s3_2 = 0;
    phi_s3_3 = 0;
    do {
        temp_s1_2 = phi_s2[1].uncullZoneDownward;
        if (temp_s1_2 != 0) {
            SysMatrix_StatePush();
            SysMatrix_InsertMatrix(phi_s2 + 0x24C, 1);
            temp_s0_2 = temp_s1_2 + 0x24;
            SysMatrix_GetStateTranslation(temp_s0_2);
            func_80B80358((f32 *) temp_s0_2);
            SysMatrix_CopyCurrentState((MtxF *) &sp3C);
            func_8018219C((MtxF *) &sp3C, temp_s1_2 + 0xBC, 0);
            SysMatrix_StatePop();
        }
        temp_s3 = phi_s3 + 0x44;
        phi_s2 += 0x44;
        phi_s3 = temp_s3;
    } while (temp_s3 < 0x88);
    phi_s2_2 = arg0;
    do {
        temp_s1_3 = phi_s2_2->unk_2D0;
        if (temp_s1_3 != 0) {
            SysMatrix_StatePush();
            SysMatrix_InsertMatrix(phi_s2_2 + 0x2D4, 1);
            temp_s0_3 = temp_s1_3 + 0x24;
            SysMatrix_GetStateTranslation(temp_s0_3);
            func_80B80358((f32 *) temp_s0_3);
            SysMatrix_CopyCurrentState((MtxF *) &sp3C);
            func_8018219C((MtxF *) &sp3C, temp_s1_3 + 0xBC, 0);
            SysMatrix_StatePop();
        }
        temp_s3_2 = phi_s3_2 + 0x44;
        phi_s2_2 += 0x44;
        phi_s3_2 = temp_s3_2;
    } while (temp_s3_2 < 0x110);
    phi_s2_3 = arg0;
    do {
        temp_s1_4 = phi_s2_3->unk_3E0;
        if (temp_s1_4 != 0) {
            SysMatrix_StatePush();
            SysMatrix_InsertMatrix(phi_s2_3 + 0x3E4, 1);
            temp_s0_4 = temp_s1_4 + 0x24;
            SysMatrix_GetStateTranslation(temp_s0_4);
            func_80B80358((f32 *) temp_s0_4);
            SysMatrix_CopyCurrentState((MtxF *) &sp3C);
            func_8018219C((MtxF *) &sp3C, temp_s1_4 + 0xBC, 0);
            SysMatrix_StatePop();
        }
        temp_s3_3 = phi_s3_3 + 0x50;
        phi_s2_3 += 0x50;
        phi_s3_3 = temp_s3_3;
    } while (temp_s3_3 != 0x140);
    temp_s1_5 = arg1->actorCtx.actorList[2].first;
    if (temp_s1_5 != 0) {
        SysMatrix_StatePush();
        SysMatrix_InsertMatrix(arg0 + 0x520, 1);
        temp_s0_5 = temp_s1_5 + 0x24;
        SysMatrix_GetStateTranslation(temp_s0_5);
        Math_Vec3f_Copy(temp_s1_5 + 8, temp_s0_5);
        func_80B80358((f32 *) temp_s0_5);
        SysMatrix_CopyCurrentState((MtxF *) &sp3C);
        func_8018219C((MtxF *) &sp3C, temp_s1_5 + 0xBC, 0);
        SysMatrix_StatePop();
        temp_s1_5->freezeTimer = 2;
    }
    SysMatrix_StatePop();
}

s32 func_80B80F08(BgIkanaRotaryroom *arg0, GlobalContext *arg1) {
    void *sp40;
    ? sp34;
    ? sp28;
    s32 sp24;
    void *temp_v0;

    temp_v0 = arg0->unk_204;
    sp24 = 0;
    if (temp_v0 != 0) {
        sp40 = temp_v0;
        SysMatrix_StatePush();
        SysMatrix_SetStateRotationAndTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, arg0 + 0xBC);
        SysMatrix_InsertTranslation(D_80B82178.unk_0, D_80B82178.unk_4, D_80B82178.unk_8, 1);
        SysMatrix_GetStateTranslation((Vec3f *) &sp34);
        SysMatrix_SetStateRotationAndTranslation(temp_v0->world.pos.x, temp_v0->world.pos.y + temp_v0[1].world.pos.z, temp_v0->world.pos.z, temp_v0 + 0xBC);
        SysMatrix_GetStateTranslation((Vec3f *) &sp28);
        SysMatrix_StatePop();
        if (Math3D_DistanceSquared((Vec3f *) &sp34, (Vec3f *) &sp28) < 3.0f) {
            if (Flags_GetSwitch(arg1, ((s32) arg0->actor.params >> 8) & 0x7F) == 0) {
                sp24 = 1;
            }
            Actor_SetSwitchFlag(arg1, ((s32) arg0->actor.params >> 8) & 0x7F);
        }
    }
    return sp24;
}

void func_80B81010(void *arg0, void *arg1) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    ? sp7C;
    ? sp78;
    f32 *temp_t8;
    f32 temp_f0;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s2_3;
    s32 temp_s4;
    s32 temp_s4_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *phi_s3;
    s32 phi_s2;
    s32 phi_s4;
    s32 phi_s7;
    void *phi_s3_2;
    s32 phi_s4_2;

    phi_s4 = 0;
    phi_s3_2 = arg0;
    phi_s4_2 = 0;
    phi_s7 = 1;
    if (ActorCutscene_GetCurrentIndex() == arg0->unk_38) {
        phi_s3 = arg0;
        do {
            temp_s0 = phi_s3->unk_3E0;
            temp_s1 = phi_s3 + 0x3E0;
            if (temp_s0 != 0) {
                temp_s2 = Math_ScaledStepToS(temp_s0 + 0xBC, temp_s1->unk_44, 0xBB8) & 1;
                temp_s2_2 = temp_s2 & Math_ScaledStepToS(temp_s0 + 0xBE, temp_s1->unk_46, 0xBB8);
                temp_s2_3 = temp_s2_2 & Math_ScaledStepToS(temp_s0 + 0xC0, temp_s1->unk_48, 0xBB8);
                temp_s1->unk_4C = (f32) (temp_s1->unk_4C - 2.0f);
                if (temp_s1->unk_4C < -30.0f) {
                    temp_s1->unk_4C = -30.0f;
                }
                Math_Vec3f_Copy(temp_s0 + 0x108, temp_s0 + 0x24);
                temp_t8 = &sp84;
                temp_s0->unk_28 = (f32) (temp_s0->unk_28 + temp_s1->unk_4C);
                sp84 = temp_s0->unk_108;
                sp88 = temp_s0->unk_10C + 50.0f;
                sp8C = temp_s0->unk_110;
                temp_f0 = func_800C4188(arg1, arg1 + 0x830, &sp7C, &sp78, 0, temp_t8);
                if (temp_s0->unk_28 <= temp_f0) {
                    temp_s0->unk_28 = temp_f0;
                    phi_s2 = temp_s2_3;
                } else {
                    phi_s2 = 0;
                }
                if (phi_s2 != 0) {
                    temp_s1->unk_0 = 0;
                } else {
                    phi_s7 = 0;
                }
            }
            temp_s4 = phi_s4 + 0x50;
            phi_s3 += 0x50;
            phi_s4 = temp_s4;
        } while (temp_s4 != 0x140);
        if (phi_s7 != 0) {
            arg0->unk_578 = 0;
            return;
        }
        /* Duplicate return node #18. Try simplifying control flow for better match */
        return;
    }
    do {
        temp_s0_2 = phi_s3_2->unk_3E0;
        if (temp_s0_2 != 0) {
            temp_s0_2->unk_BC = (unaligned s32) phi_s3_2->unk_424;
            temp_s0_2->unk_C0 = (u16) phi_s3_2->unk_428;
            Math_Vec3f_Copy(temp_s0_2 + 0x108, temp_s0_2 + 0x24);
        }
        temp_s4_2 = phi_s4_2 + 0x50;
        phi_s3_2 += 0x50;
        phi_s4_2 = temp_s4_2;
    } while (temp_s4_2 != 0x140);
    arg0->unk_578 = 0;
}

void func_80B81234(void *arg0, void *arg1) {
    s32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp4C;
    f32 sp44;
    ? sp40;
    ? sp3C;
    Vec3f *sp30;
    Vec3f *sp2C;
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    f32 temp_f0;
    void *temp_s0;
    void *temp_s1;

    temp_s1 = arg1->unk_1CCC;
    sp44 = *(&D_80B82200 + (temp_s1->unk_14B * 4)) * 0.5f;
    if (ActorCutscene_GetCurrentIndex() == arg0->unk_38) {
        if ((temp_s1 != 0) && (temp_s0 = arg0 + 0x520, ((s32) temp_s1->unk_118 > 0))) {
            sp58 = temp_s0->unk_4C;
            sp5C = temp_s0->unk_50 + 50.0f;
            sp60 = temp_s0->unk_54;
            sp64 = Math_ScaledStepToS(temp_s1 + 0xBC, temp_s0->unk_40, 0x7D0) & 1;
            sp64 &= Math_ScaledStepToS(temp_s1 + 0xBE, temp_s0->unk_42, 0x7D0);
            sp64 &= Math_ScaledStepToS(temp_s1 + 0xC0, temp_s0->unk_44, 0x7D0);
            temp_s0->unk_48 = (f32) (temp_s0->unk_48 - 2.1f);
            temp_s0->unk_48 = (f32) (temp_s0->unk_48 * 0.98f);
            if (temp_s0->unk_48 < -30.0f) {
                temp_s0->unk_48 = -30.0f;
            }
            temp_s0->unk_50 = (f32) (temp_s0->unk_50 + temp_s0->unk_48);
            SysMatrix_StatePush();
            Matrix_RotateY(temp_s1->unk_BE, 0U);
            SysMatrix_InsertXRotation_s(temp_s1->unk_BC, 1);
            SysMatrix_InsertZRotation_s(temp_s1->unk_C0, 1);
            SysMatrix_GetStateTranslationAndScaledY(sp44, (Vec3f *) &sp4C);
            SysMatrix_StatePop();
            temp_f0 = func_800C4188(arg1, arg1 + 0x830, &sp40, &sp3C, 0, &sp58);
            temp_a0 = temp_s1 + 8;
            temp_a1 = temp_s1 + 0x24;
            if (temp_s0->unk_50 <= temp_f0) {
                temp_s0->unk_50 = temp_f0;
            } else {
                sp64 = 0;
            }
            sp30 = temp_a0;
            sp2C = temp_a1;
            Math_Vec3f_Copy(temp_a0, temp_a1);
            temp_s1->unk_24 = (f32) (temp_s0->unk_4C - sp4C);
            temp_s1->unk_28 = (f32) ((temp_s0->unk_50 - sp50) + sp44);
            temp_s1->unk_2C = (f32) (temp_s0->unk_54 - sp54);
            if (sp64 != 0) {
                Math_Vec3f_Copy(temp_a0, temp_a1);
                arg0->unk_57C = 0;
                return;
            }
            temp_s1->unk_118 = 2U;
            return;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return;
    }
    if (temp_s1 != 0) {
        temp_s1->unk_BC = (unaligned s32) arg0->unk_560;
        temp_s1->unk_C0 = (s16) arg0->unk_564;
        Math_Vec3f_Copy(temp_s1 + 8, temp_s1 + 0x24);
    }
    arg0->unk_57C = 0;
}

void func_80B814B8(BgIkanaRotaryroom *this, GlobalContext *globalCtx) {
    Actor *temp_s0;

    temp_s0 = globalCtx->actorCtx.actorList[2].first;
    if (ActorCutscene_GetCurrentIndex() == this->actor.cutscene) {
        if ((temp_s0->bgCheckFlags & 0x100) != 0) {
            func_800B8E58(temp_s0, (temp_s0->unk_A68->unk_92 + 0x6805) & 0xFFFF);
            func_80169EFC(globalCtx);
            func_800B8E58(temp_s0, (temp_s0->unk_A68->unk_92 + 0x680C) & 0xFFFF);
            globalCtx->unk_18845 = 1;
            play_sound(0x5801U);
            this->actionFunc = NULL;
            return;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return;
    }
    this->actionFunc = NULL;
}

void func_80B81570(BgIkanaRotaryroom *arg0, GlobalContext *arg1) {
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    ? *temp_s0;
    f32 *temp_a0;
    f32 temp_f10;
    f32 temp_f18;
    f32 temp_f8;
    ? *phi_s0;

    SysMatrix_StatePush();
    Matrix_RotateY(arg0->actor.shape.rot.y, 0U);
    phi_s0 = &D_80B821C4;
    do {
        temp_a0 = &sp64;
        sp64 = (f32) phi_s0->unk_0;
        sp68 = (f32) phi_s0->unk_2;
        sp6C = (f32) phi_s0->unk_4;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, (Vec3f *) &sp70);
        temp_f8 = sp70 + arg0->actor.world.pos.x;
        sp70 = temp_f8;
        temp_f18 = sp74 + arg0->actor.world.pos.y;
        sp74 = temp_f18;
        temp_f10 = sp78 + arg0->actor.world.pos.z;
        sp78 = temp_f10;
        Actor_Spawn(arg1 + 0x1CA0, arg1, 0x170, temp_f8, temp_f18, temp_f10, (s16) 0, (s16) 0, (s16) 0, (s16) 1);
        temp_s0 = phi_s0 + 6;
        phi_s0 = temp_s0;
    } while (temp_s0 != &D_80B82200);
    SysMatrix_StatePop();
}

s32 func_80B816A4(Actor *arg0) {
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s32 phi_v1_4;

    phi_v1_4 = 0;
    if (arg0->unk_3E0 != 0) {
        phi_v1_4 = 1;
    }
    phi_v1_3 = phi_v1_4;
    if (arg0[3].velocity.x != 0) {
        phi_v1_3 = phi_v1_4 + 1;
    }
    phi_v1_2 = phi_v1_3;
    if (arg0->unk_480 != 0) {
        phi_v1_2 = phi_v1_3 + 1;
    }
    phi_v1 = phi_v1_2;
    if (arg0[3].uncullZoneDownward != 0) {
        phi_v1 = phi_v1_2 + 1;
    }
    return phi_v1;
}

void BgIkanaRotaryroom_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp34;
    CollisionHeader **sp30;
    ColliderJntSph *sp2C;
    ColliderJntSph *temp_a1;
    CollisionHeader **temp_v0;
    BgIkanaRotaryroom *this = (BgIkanaRotaryroom *) thisx;

    sp34 = this->actor.params & 1;
    Actor_ProcessInitChain((Actor *) this, &D_80B82214);
    if (Flags_GetSwitch(globalCtx, ((s32) this->actor.params >> 1) & 0x7F) != 0) {
        this->actor.shape.rot.x = -0x8000;
    } else {
        this->actor.shape.rot.x = 0;
    }
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    temp_v0 = (sp34 * 4) + &D_80B82218;
    sp30 = temp_v0;
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, *temp_v0);
    temp_a1 = &this->unk_15C;
    sp2C = temp_a1;
    Collider_InitJntSph(globalCtx, temp_a1);
    if (sp30 == &D_80B82218) {
        Collider_SetJntSph(globalCtx, temp_a1, (Actor *) this, &D_80B82128, &this->unk_17C);
    } else {
        Collider_SetJntSph(globalCtx, temp_a1, (Actor *) this, &D_80B8215C, &this->unk_17C);
    }
    func_80B802E0(this);
    if (sp30 == &D_80B8221C) {
        this->unk_1FC = Lib_SegmentedToVirtual(&D_06007B68);
    }
    if (sp30 == &D_80B82218) {
        func_80B80440(this, globalCtx);
    } else {
        func_80B81570(this, globalCtx);
    }
    func_80B80550(this, globalCtx);
    func_80B818B4(this);
}

void BgIkanaRotaryroom_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;
    BgIkanaRotaryroom *this = (BgIkanaRotaryroom *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk_144);
    Collider_DestroyJntSph(globalCtx, &this->unk_15C);
}

void func_80B818B4(BgIkanaRotaryroom *arg0) {
    arg0->unk_200 = func_80B818C8;
}

void func_80B818C8(BgIkanaRotaryroom *arg0, GlobalContext *arg1) {
    s32 sp20;
    s32 temp_a1;
    u8 temp_v0;

    temp_v0 = arg0->unk_15C.base.acFlags;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_15C.base.acFlags = temp_v0 & 0xFFFD;
        temp_a1 = ((s32) arg0->actor.params >> 1) & 0x7F;
        sp20 = temp_a1;
        arg0 = arg0;
        if (Flags_GetSwitch(arg1, temp_a1) != 0) {
            arg0 = arg0;
            Actor_UnsetSwitchFlag(arg1, temp_a1);
        } else {
            arg0 = arg0;
            Actor_SetSwitchFlag(arg1, temp_a1);
        }
        func_80B81978(arg0);
        return;
    }
    CollisionCheck_SetAC(arg1, &arg1->colChkCtx, arg0 + 0x15C);
}

void func_80B81978(BgIkanaRotaryroom *arg0) {
    arg0->unk_200 = func_80B8198C;
}

void func_80B8198C(BgIkanaRotaryroom *arg0, GlobalContext *arg1) {
    u8 temp_v1;
    void *temp_v0;

    temp_v0 = arg0->unk_204;
    if (temp_v0 == 0) {
        func_80B819DC();
        return;
    }
    temp_v1 = temp_v0[1].cutscene;
    if ((temp_v1 & 1) != 0) {
        temp_v0[1].cutscene = temp_v1 | 8;
        func_80B819DC();
    }
}

void func_80B819DC(void *arg0) {
    arg0->unk_200 = func_80B819F0;
}

void func_80B819F0(Actor *arg0, GlobalContext *arg1) {
    if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
        if ((s32) arg0->cutscene >= 0) {
            func_800B7298(arg1, arg0, 7U);
        }
        func_80B81A64(arg0);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
}

void func_80B81A64(Actor *arg0) {
    arg0->unk_584 = 0x19;
    arg0->unk_200 = func_80B81A80;
}

void func_80B81A80(Actor *arg0, void *arg1) {
    s16 sp26;
    Actor *temp_a0;
    Actor *temp_a0_2;
    Actor *temp_a2;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_a0_3;
    s32 temp_v1;
    Actor *phi_v0;
    s32 phi_v1;

    temp_a0 = arg0;
    arg0 = arg0;
    arg1 = arg1;
    func_800B9010(temp_a0, 0x2098U);
    temp_a2 = arg0;
    temp_a0_2 = temp_a2;
    temp_a2->unk_584 = (s16) (temp_a2->unk_584 - 1);
    temp_v0 = temp_a2->unk_584;
    if ((s32) temp_v0 <= 0) {
        arg0 = temp_a2;
        func_80B80894(temp_a0_2, arg1, temp_a2, arg1);
        phi_v0 = arg0;
        phi_v1 = 0;
        do {
            temp_v1 = phi_v1 + 0x44;
            phi_v1 = temp_v1;
            if (phi_v0->unk_2D0 != 0) {
                phi_v0->unk_2D0->unk_190 = 3;
            }
            phi_v0 += 0x44;
        } while (temp_v1 != 0x110);
        func_80B81B84(arg0, 0x110, arg0);
        return;
    }
    if (temp_v0 == 0xF) {
        temp_v0_2 = Quake_Add((arg1 + (arg1->unk_810 * 4))->unk_800, 3U);
        temp_a0_3 = temp_v0_2 << 0x10;
        sp26 = temp_v0_2;
        Quake_SetSpeed((s16) (temp_a0_3 >> 0x10), 0x7B30);
        Quake_SetQuakeValues(sp26, 6, 0, 0x64, (s16) 0);
        Quake_SetCountdown(sp26, 0x16);
    }
}

void func_80B81B84(Actor *arg0) {
    arg0->unk_584 = 0x2001;
    arg0->unk_200 = func_80B81BA0;
}

void func_80B81BA0(Actor *arg0, GlobalContext *arg1) {
    s32 sp30;
    s16 sp2A;
    Actor *temp_a2;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_a0;
    s32 temp_v1;
    u8 temp_t4;
    void *temp_v0_3;
    Actor *phi_v0;
    s32 phi_v1;

    sp30 = 0;
    func_800B9010(arg0, 0x2098U);
    temp_v0 = arg0->unk_584;
    if ((s32) temp_v0 > 0) {
        arg0->unk_584 = (s16) (temp_v0 - 1);
    }
    arg0->shape.rot.x += 0x1F4;
    if ((arg0->unk_584 & 7) == 0) {
        temp_v0_2 = Quake_Add((arg1 + (arg1->activeCamera * 4))->unk_800, 3U);
        temp_a0 = temp_v0_2 << 0x10;
        sp2A = temp_v0_2;
        Quake_SetSpeed((s16) (temp_a0 >> 0x10), 0x7B30);
        Quake_SetQuakeValues(sp2A, (s16) ((s32) (Rand_ZeroOne() * 2.5f) + 3), 0, 0xA, (s16) 0);
        Quake_SetCountdown(sp2A, 0xF);
    }
    if (Flags_GetSwitch(arg1, ((s32) arg0->params >> 1) & 0x7F) != 0) {
        if ((s32) arg0->shape.rot.x < 0) {
            arg0->shape.rot.x = -0x8000;
            sp30 = 1;
        }
    } else if ((s32) arg0->shape.rot.x >= 0) {
        arg0->shape.rot.x = 0;
        sp30 = 1;
    }
    func_80B80C88(arg0, arg1);
    phi_v1 = 0;
    if (sp30 != 0) {
        temp_v0_3 = arg0->unk_204;
        temp_a2 = arg1->actorCtx.actorList[2].first;
        if (temp_v0_3 != 0) {
            temp_t4 = temp_v0_3->unk_17C & 0xFFF7;
            temp_v0_3->unk_17C = temp_t4;
            temp_v0_3->unk_17C = (u8) (temp_t4 | 4);
        }
        phi_v0 = arg0;
        do {
            temp_v1 = phi_v1 + 0x44;
            phi_v1 = temp_v1;
            if (phi_v0->unk_2D0 != 0) {
                phi_v0->unk_2D0->unk_190 = 4;
            }
            phi_v0 += 0x44;
        } while (temp_v1 != 0x110);
        arg0[4].scale.x = 0.0f;
        arg0[4].scale.y = temp_a2->world.pos.x;
        arg0[4].scale.z = temp_a2->world.pos.y - *(&D_80B82200 + (temp_a2->unk_14B * 4));
        arg0[4].velocity.x = temp_a2->world.pos.z;
        if (func_80B816A4(arg0, 0x110, temp_a2) > 0) {
            arg0[4].velocity.y = (bitwise f32) func_80B81010;
        }
        arg0[4].velocity.z = (bitwise f32) func_80B81234;
        arg0[4].speedXZ = (bitwise f32) func_80B814B8;
        func_80B802E0((BgIkanaRotaryroom *) arg0);
        func_80B81DAC(arg0);
    }
}

void func_80B81DAC(Actor *arg0) {
    arg0->unk_584 = 0x14;
    arg0->unk_200 = func_80B81DC8;
}

void func_80B81DC8(Actor *arg0, void *arg1) {
    s16 sp26;
    Actor *temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_a0_2;
    s16 phi_v0;

    temp_v0 = arg0->unk_584;
    temp_a0 = arg0;
    phi_v0 = temp_v0;
    if ((s32) temp_v0 >= 0xB) {
        arg0 = arg0;
        arg1 = arg1;
        func_800B9010(temp_a0, 0x2098U);
        phi_v0 = arg0->unk_584;
    }
    arg0->unk_584 = (s16) (phi_v0 - 1);
    temp_v0_2 = arg0->unk_584;
    if ((s32) temp_v0_2 <= 0) {
        arg0 = arg0;
        ActorCutscene_Stop((s16) arg0->cutscene);
        func_80B818B4((BgIkanaRotaryroom *) arg0);
        return;
    }
    if (temp_v0_2 == 0x13) {
        temp_v0_3 = Quake_Add((arg1 + (arg1->unk_810 * 4))->unk_800, 3U);
        temp_a0_2 = temp_v0_3 << 0x10;
        sp26 = temp_v0_3;
        Quake_SetSpeed((s16) (temp_a0_2 >> 0x10), 0x4E20);
        Quake_SetQuakeValues(sp26, 5, 0, 0x28, (s16) 0x3C);
        Quake_SetCountdown(sp26, 0x11);
    }
}

void BgIkanaRotaryroom_Update(Actor *thisx, GlobalContext *globalCtx) {
    ? (*temp_v0_3)(BgIkanaRotaryroom *, GlobalContext *, BgIkanaRotaryroom *);
    ? (*temp_v0_4)(BgIkanaRotaryroom *, GlobalContext *, BgIkanaRotaryroom *);
    ? (*temp_v0_5)(BgIkanaRotaryroom *, GlobalContext *, BgIkanaRotaryroom *);
    Actor *temp_v0;
    Actor *temp_v0_2;
    BgIkanaRotaryroom *temp_a0_4;
    BgIkanaRotaryroom *temp_a0_5;
    BgIkanaRotaryroom *temp_a2;
    BgIkanaRotaryroom *temp_a2_2;
    BgIkanaRotaryroom *temp_a2_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    void **temp_a0;
    void **temp_a0_2;
    void **temp_a0_3;
    BgIkanaRotaryroom *phi_v0;
    s32 phi_v1;
    BgIkanaRotaryroom *phi_v0_2;
    s32 phi_v1_2;
    BgIkanaRotaryroom *phi_v0_3;
    s32 phi_v1_3;
    BgIkanaRotaryroom *phi_a2;
    BgIkanaRotaryroom *phi_a2_2;
    BgIkanaRotaryroom *this = (BgIkanaRotaryroom *) thisx;

    temp_a2 = this;
    temp_v0 = temp_a2->unk_204;
    phi_v1 = 0;
    phi_v1_2 = 0;
    phi_v1_3 = 0;
    if ((temp_v0 != 0) && (temp_v0->update == 0)) {
        temp_a2->unk_204 = NULL;
    }
    phi_v0 = temp_a2;
    do {
        temp_v1 = phi_v1 + 0x44;
        temp_a0 = phi_v0 + 0x248;
        phi_v1 = temp_v1;
        if ((phi_v0->unk_248 != 0) && ((*temp_a0)->unk_138 == 0)) {
            *temp_a0 = NULL;
        }
        phi_v0 += 0x44;
    } while (temp_v1 < 0x88);
    phi_v0_2 = temp_a2;
    do {
        temp_v1_2 = phi_v1_2 + 0x44;
        temp_a0_2 = phi_v0_2 + 0x2D0;
        phi_v1_2 = temp_v1_2;
        if ((phi_v0_2->unk_2D0 != 0) && ((*temp_a0_2)->unk_138 == 0)) {
            *temp_a0_2 = NULL;
        }
        phi_v0_2 += 0x44;
    } while (temp_v1_2 < 0x110);
    phi_v0_3 = temp_a2;
    do {
        temp_v1_3 = phi_v1_3 + 0x50;
        temp_a0_3 = phi_v0_3 + 0x3E0;
        phi_v1_3 = temp_v1_3;
        if ((phi_v0_3->unk_3E0 != 0) && ((*temp_a0_3)->unk_138 == 0)) {
            *temp_a0_3 = NULL;
        }
        phi_v0_3 += 0x50;
    } while (temp_v1_3 != 0x140);
    temp_a0_4 = temp_a2;
    this = temp_a2;
    temp_a2_2 = this;
    if (func_80B80F08(temp_a0_4, globalCtx, temp_a2) != 0) {
        temp_v0_2 = temp_a2_2->unk_204;
        if (temp_v0_2 != 0) {
            temp_v0_2[1].unk_3A = 1;
        }
    }
    this = temp_a2_2;
    temp_a2_2->unk_200(temp_a2_2, globalCtx, temp_a2_2);
    temp_a2_3 = this;
    temp_v0_3 = temp_a2_3->unk_578;
    temp_a0_5 = temp_a2_3;
    phi_a2 = temp_a2_3;
    if (temp_v0_3 != 0) {
        this = temp_a2_3;
        temp_v0_3(temp_a0_5, globalCtx, temp_a2_3);
        phi_a2 = this;
    }
    temp_v0_4 = phi_a2->unk_57C;
    phi_a2_2 = phi_a2;
    if (temp_v0_4 != 0) {
        this = phi_a2;
        temp_v0_4(phi_a2, globalCtx, phi_a2);
        phi_a2_2 = this;
    }
    temp_v0_5 = phi_a2_2->actionFunc;
    if (temp_v0_5 != 0) {
        temp_v0_5(phi_a2_2, globalCtx, phi_a2_2);
    }
}

void BgIkanaRotaryroom_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgIkanaRotaryroom *this = (BgIkanaRotaryroom *) thisx;
    if ((this->actor.params & 1) == 0) {
        func_800BDFC0(globalCtx, &D_060048A0);
        func_800BE03C(globalCtx, &D_06004710);
        return;
    }
    AnimatedMat_Draw(globalCtx, (AnimatedMaterial *) this->unk_1FC);
    func_800BDFC0(globalCtx, &D_06007448);
    func_800BE03C(globalCtx, &D_06007360);
}
