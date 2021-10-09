typedef struct BgDblueElevator {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ void (*actionFunc)(BgDblueElevator *, GlobalContext *);
    /* 0x160 */ char pad160[0x8];                   /* maybe part of actionFunc[3]? */
    /* 0x168 */ s8 unk168;                          /* inferred */
    /* 0x169 */ s8 unk169;                          /* inferred */
    /* 0x16A */ char pad16A[0x6];                   /* maybe part of unk169[7]? */
} BgDblueElevator;                                  /* size = 0x170 */

struct _mips2c_stack_BgDblueElevator_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgDblueElevator_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgDblueElevator_Init {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[0x4];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_BgDblueElevator_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B91F20 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad2C[0x4];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B91F74 {
    /* 0x00 */ char pad0[0x98];
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ char pad9C[0x8];                     /* maybe part of sp98[3]? */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ char padA8[0x4];
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ char padBC[0x4];
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_80B922C0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B922FC {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B924DC {};              /* size 0x0 */

struct _mips2c_stack_func_80B924F8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B9257C {};              /* size 0x0 */

struct _mips2c_stack_func_80B925B8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B92644 {};              /* size 0x0 */

struct _mips2c_stack_func_80B92660 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ void *sp30;                          /* inferred */
    /* 0x34 */ char pad34[0x8];                     /* maybe part of sp30[3]? */
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad3C[0xC];
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad54[0x4];
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ s32 sp5C;                            /* inferred */
    /* 0x60 */ char pad60[0x10];
};                                                  /* size = 0x70 */

s8 func_800C9EBC(GlobalContext *, s32, s32, s32, void *, ? *, ? *); /* extern */
void func_80B91F20(BgDblueElevator *arg0, GlobalContext *arg1, s32); /* static */
void func_80B91F74(void *arg0, GlobalContext *arg1, s32); /* static */
? func_80B922C0(void *arg0, GlobalContext *arg1);   /* static */
s32 func_80B922FC(void *arg0, GlobalContext *arg1); /* static */
void func_80B924DC(BgDblueElevator *arg0);          /* static */
void func_80B924F8(BgDblueElevator *arg0);          /* static */
void func_80B9257C(GlobalContext *arg0);            /* static */
void func_80B925B8(BgDblueElevator *arg0);          /* static */
void func_80B92644(BgDblueElevator *arg0);          /* static */
void func_80B92660(GlobalContext *arg0, s32 arg1);  /* static */
extern Gfx D_060002C8;
extern CollisionHeader D_060005C4;
static ? D_80B92960;                                /* unable to generate initializer */
static ? D_80B92964;                                /* unable to generate initializer */
static ? D_80B9296C;                                /* unable to generate initializer */
static ? D_80B929D0;                                /* unable to generate initializer */
static ? D_80B929D8;                                /* unable to generate initializer */
static ? D_80B929DE;                                /* unable to generate initializer */
static s8 D_80B929E0[2] = {0, 2};
static ? D_80B929E3;                                /* unable to generate initializer */
static s8 D_80B929E4[6] = {0, 1, 2, 3, 4, 5};
static ? D_80B929EA;                                /* unable to generate initializer */
static InitChainEntry D_80B929EC[5];                /* unable to generate initializer */

void func_80B91F20(BgDblueElevator *arg0, GlobalContext *arg1) {
    ? sp30;
    ? sp2C;

    arg0->unk16B = func_800C9EBC(arg1, arg1 + 0x830, arg0->actor.world.pos.x, arg0->actor.world.pos.z, arg0 + 0x16C, &sp30, &sp2C);
}

void func_80B91F74(void *arg0, GlobalContext *arg1) {
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA4;
    f32 sp98;
    ? *temp_s6;
    f32 *temp_s1;
    f32 *temp_s4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f20;
    f32 temp_f20_2;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_s0;
    s8 *temp_s0_2;
    s8 *temp_s0_3;
    ? *phi_s6;
    s32 phi_s0;
    ? *phi_s7;
    s8 *phi_s0_2;
    f32 phi_f20;
    f32 phi_f20_2;
    s8 *phi_s0_3;

    SysMatrix_StatePush();
    Matrix_RotateY(arg0->unkBE, 0U);
    temp_s4 = &spB0;
    temp_s1 = &spA4;
    phi_s6 = &D_80B929D8;
    phi_s7 = &D_80B929D0;
    do {
        temp_v1 = phi_s6->unk0;
        temp_v0 = phi_s7->unk0;
        sp98 = (f32) (phi_s6->unk2 - temp_v1);
        phi_s0 = 0;
loop_2:
        temp_f0 = (f32) phi_s0;
        spB0 = (temp_f0 * (f32) (phi_s7->unk2 - temp_v0) * 0.14285715f) + (f32) temp_v0;
        spB4 = arg0->unk16C;
        spB8 = (temp_f0 * sp98 * 0.14285715f) + (f32) temp_v1;
        spB0 += (Rand_ZeroOne() - 0.5f) * 20.0f;
        spB8 += (Rand_ZeroOne() - 0.5f) * 20.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_s4, (Vec3f *) temp_s1);
        spA4 += arg0->unk24;
        spAC += arg0->unk2C;
        EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s1, NULL, NULL, (s16) 0, (s16) (s32) ((Rand_ZeroOne() * 400.0f) + 210.0f));
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
        if (temp_s0 != 7) {
            goto loop_2;
        }
        temp_s6 = phi_s6 + 2;
        phi_s6 = temp_s6;
        phi_s7 += 2;
    } while ((u32) temp_s6 < (u32) &D_80B929DE);
    phi_s0_2 = D_80B929E0;
    do {
        spB0 = ((Rand_ZeroOne() - 0.5f) * 60.0f) + arg0->unk24;
        spB4 = arg0->unk16C;
        spB8 = ((Rand_ZeroOne() - 0.5f) * 60.0f) + arg0->unk2C;
        EffectSsGRipple_Spawn(arg1, (Vec3f *) temp_s4, 0x3E8, 0xBB8, (s16) (s32) *phi_s0_2);
        temp_s0_2 = phi_s0_2 + 1;
        phi_s0_2 = temp_s0_2;
    } while ((u32) temp_s0_2 < (u32) &D_80B929E3);
    phi_s0_3 = D_80B929E4;
    do {
        temp_f0_2 = Rand_ZeroOne();
        temp_f20 = 1.0f - (temp_f0_2 * temp_f0_2);
        phi_f20 = temp_f20;
        if (Rand_Next() > 0) {
            phi_f20 = -temp_f20;
        }
        spB0 = (phi_f20 * 100.0f) + arg0->unk24;
        spB4 = arg0->unk16C;
        temp_f0_3 = Rand_ZeroOne();
        temp_f20_2 = 1.0f - (temp_f0_3 * temp_f0_3);
        phi_f20_2 = temp_f20_2;
        if (Rand_Next() > 0) {
            phi_f20_2 = -temp_f20_2;
        }
        spB8 = (phi_f20_2 * 100.0f) + arg0->unk2C;
        EffectSsGRipple_Spawn(arg1, (Vec3f *) temp_s4, 0x190, 0x320, (s16) (s32) *phi_s0_3);
        temp_s0_3 = phi_s0_3 + 1;
        phi_s0_3 = temp_s0_3;
    } while (temp_s0_3 != &D_80B929EA);
    SysMatrix_StatePop();
}

? func_80B922C0(void *arg0, GlobalContext *arg1) {
    if (Flags_GetSwitch(arg1, arg0->unk1C & 0x7F) != 0) {
        return 0;
    }
    return 1;
}

s32 func_80B922FC(void *arg0, GlobalContext *arg1) {
    s32 phi_s0;
    s32 phi_s0_2;

    phi_s0_2 = 0;
    if (Flags_GetSwitch(arg1, arg0->unk1C & 0x7F) == 0) {
        phi_s0_2 = 1;
    }
    phi_s0 = phi_s0_2;
    if ((Flags_GetSwitch(arg1, (arg0->unk1C + 1) & 0x7F) != 0) && (Flags_GetSwitch(arg1, (arg0->unk1C + 2) & 0x7F) != 0) && (Flags_GetSwitch(arg1, (arg0->unk1C + 3) & 0x7F) != 0)) {
        phi_s0 = phi_s0_2 + 2;
    }
    return phi_s0;
}

void BgDblueElevator_Init(BgDblueElevator *this, GlobalContext *globalCtx) {
    s32 sp2C;
    s32 sp24;
    void *sp20;
    s32 temp_v0;
    void *temp_v1;
    BgDblueElevator *this = (BgDblueElevator *) thisx;

    sp2C = ((s32) this->actor.params >> 8) & 3;
    Actor_ProcessInitChain((Actor *) this, D_80B929EC);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_060005C4);
    temp_v1 = (sp2C * 0x1C) + &D_80B92960;
    sp20 = temp_v1;
    temp_v0 = temp_v1->unk4(this, globalCtx);
    if (temp_v0 == 2) {
        this->unk168 = (s8) -(s32) temp_v1->unkD;
    } else {
        this->unk168 = temp_v1->unkD;
    }
    sp24 = temp_v0;
    func_80B91F20(this, globalCtx, temp_v0);
    if ((temp_v0 == 0) || (temp_v0 == 3)) {
        func_80B924DC(this);
        return;
    }
    func_80B92644(this);
}

void BgDblueElevator_Destroy(BgDblueElevator *this, GlobalContext *globalCtx) {
    BgDblueElevator *this = (BgDblueElevator *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void func_80B924DC(BgDblueElevator *arg0) {
    arg0->unk169 = 0x3C;
    arg0->actionFunc = func_80B924F8;
}

void func_80B924F8(BgDblueElevator *arg0) {
    s32 temp_v0;

    temp_v0 = *(&D_80B92964 + ((((s32) arg0->actor.params >> 8) & 3) * 0x1C))();
    if ((temp_v0 == 0) || (temp_v0 == 3)) {
        arg0->unk169 = 0x3C;
        return;
    }
    arg0->unk169 += -1;
    if ((s32) arg0->unk169 <= 0) {
        func_80B92644(arg0);
    }
}

void func_80B9257C(GlobalContext *arg0) {
    arg0->view.viewing.m[0][1] = func_80B925B8;
    arg0->unk16A = (s8) *(&D_80B9296C + ((((s32) arg0->unk1C >> 8) & 3) * 0x1C));
}

void func_80B925B8(BgDblueElevator *arg0) {
    s32 temp_v0;

    temp_v0 = *(&D_80B92964 + ((((s32) arg0->actor.params >> 8) & 3) * 0x1C))();
    if ((temp_v0 == 0) || (temp_v0 == 3)) {
        func_80B924DC(arg0);
        return;
    }
    arg0->unk16A += -1;
    if ((s32) arg0->unk16A <= 0) {
        func_80B92644(arg0);
    }
}

void func_80B92644(BgDblueElevator *arg0) {
    arg0->actionFunc = func_80B92660;
    arg0->unk160 = 0.0f;
}

void func_80B92660(GlobalContext *arg0, GlobalContext *arg1) {
    s32 sp5C;
    s32 sp58;
    f32 sp50;
    f32 sp4C;
    s32 sp48;
    ? sp3C;
    void *sp30;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    s32 *temp_a0;
    s32 temp_t6;
    s32 temp_v0;
    void *temp_v1;
    f32 phi_f12;
    f32 phi_f2;
    f32 phi_f2_2;
    void *phi_f12_2;

    temp_t6 = (((s32) arg0->unk1C >> 8) & 3) * 0x1C;
    temp_v1 = temp_t6 + &D_80B92960;
    sp30 = temp_v1;
    temp_v0 = temp_v1->unk4(arg0, arg1);
    if ((temp_v0 == 0) || (temp_v0 == 3)) {
        sp30 = temp_v1;
        sp58 = Math_StepToF(arg0 + 0x160, 0.0f, temp_v1->unk14);
    } else {
        sp58 = 0;
        sp30 = temp_v1;
        Math_StepToF(arg0 + 0x160, temp_v1->unk18, temp_v1->unk10);
    }
    if ((s32) arg0->unk168 > 0) {
        phi_f12 = (temp_t6 + &D_80B92960)->unk8;
    } else {
        phi_f12 = -(temp_t6 + &D_80B92960)->unk8;
    }
    temp_f0 = arg0->view.viewing.m[0][2];
    if (temp_f0 <= 1.1f) {
        phi_f2 = 1.1f;
    } else {
        phi_f2 = temp_f0;
    }
    sp30 = temp_t6 + &D_80B92960;
    if (Math_SmoothStepToF(arg0 + 0x164, phi_f12, 0.4f, phi_f2, 1.0f) < 0.001f) {
        sp5C = 1;
    } else {
        sp5C = 0;
    }
    if ((temp_t6 + &D_80B92960)->unk0 == 0) {
        arg0->unk28 = (f32) (arg0->view.viewing.m[0][3] + arg0->state.nextGameStateInit);
        if (((arg0->state.main & 0x40) == 0x40) && (arg0->unk16B != 0)) {
            if ((s32) arg0->unk168 > 0) {
                temp_f0_2 = arg0->view.viewing.m[1][1];
                phi_f2_2 = ((arg0->unk28 + -10.0f) - temp_f0_2) * ((arg0->unk10C + -10.0f) - temp_f0_2);
                phi_f12_2 = (bitwise void *) -10.0f;
            } else {
                temp_f0_3 = arg0->view.viewing.m[1][1];
                phi_f2_2 = ((arg0->unk28 + -30.0f) - temp_f0_3) * ((arg0->unk10C + -30.0f) - temp_f0_3);
                phi_f12_2 = (bitwise void *) -30.0f;
            }
            if (phi_f2_2 <= 0.0f) {
                func_80B91F74(phi_f12_2, arg0, arg1);
            }
        }
    } else {
        Matrix_RotateY(arg0->unkBE, 0U);
        temp_a0 = &sp48;
        sp48 = arg0->view.viewing.m[0][3];
        sp4C = 0.0f;
        sp50 = 0.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, (Vec3f *) &sp3C);
        Math_Vec3f_Sum((Vec3f *) &arg0->state.destroy, (Vec3f *) &sp3C, (Vec3f *) &arg0->state.input[0].press.errno);
    }
    if (sp58 != 0) {
        func_80B924DC((BgDblueElevator *) arg0);
        return;
    }
    if (sp5C != 0) {
        arg0->unk168 = (s8) -(s32) arg0->unk168;
        func_80B9257C(arg0);
    }
}

void BgDblueElevator_Update(BgDblueElevator *this, GlobalContext *globalCtx) {
    BgDblueElevator *this = (BgDblueElevator *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgDblueElevator_Draw(BgDblueElevator *this, GlobalContext *globalCtx) {
    BgDblueElevator *this = (BgDblueElevator *) thisx;
    func_800BDFC0(globalCtx, &D_060002C8);
}
