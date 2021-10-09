typedef struct ObjDhouse {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ void (*actionFunc)(ObjDhouse *, GlobalContext *);
    /* 0x0160 */ char pad160[0x1214];               /* maybe part of actionFunc[1158]? */
} ObjDhouse;                                        /* size = 0x1374 */

struct _mips2c_stack_ObjDhouse_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjDhouse_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjDhouse_Init {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjDhouse_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B12A50 {};              /* size 0x0 */

struct _mips2c_stack_func_80B12A88 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B12B38 {
    /* 0x00 */ char pad0[0x7C];
    /* 0x7C */ s32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ char pad88[0x8];                     /* maybe part of sp84[3]? */
    /* 0x90 */ CollisionPoly *sp90;                 /* inferred */
    /* 0x94 */ char pad94[0xC];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_80B12D78 {};              /* size 0x0 */

struct _mips2c_stack_func_80B12E7C {
    /* 0x00 */ char pad0[0x88];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ char padAC[0x4];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_80B13170 {
    /* 0x00 */ char pad0[0x8C];
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ char padA4[0x4];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_80B13474 {
    /* 0x00 */ char pad0[0x88];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad94[0x4];
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_80B13724 {
    /* 0x00 */ char pad0[0x6C];
    /* 0x6C */ s32 sp6C;                            /* inferred */
    /* 0x70 */ ? sp70;                              /* inferred */
    /* 0x70 */ char pad70[0x10];
    /* 0x80 */ CollisionPoly *sp80;                 /* inferred */
    /* 0x84 */ char pad84[0xC];
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_80B13908 {};              /* size 0x0 */

struct _mips2c_stack_func_80B1391C {};              /* size 0x0 */

struct _mips2c_stack_func_80B1392C {};              /* size 0x0 */

struct _mips2c_stack_func_80B13940 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B139D8 {};              /* size 0x0 */

struct _mips2c_stack_func_80B139F4 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B13C08 {
    /* 0x00 */ char pad0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B13E40 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void func_80B12A50(void *arg0, ? *arg1, f32 *arg2); /* static */
void func_80B12A88(Actor *arg0);                    /* static */
void func_80B12B38(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B12D78(Actor *arg0);                     /* static */
void func_80B12E7C(Actor *arg0, GlobalContext *arg1, void *arg2, ? *arg3); /* static */
void func_80B13170(Actor *arg0, GlobalContext *arg1, void *arg2, ? *arg3); /* static */
void func_80B13474(Actor *arg0, GlobalContext *arg1, ? *arg2); /* static */
void func_80B13724(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B13908(ObjDhouse *arg0);                /* static */
void func_80B1391C(s32 arg0, ? arg1);               /* static */
void func_80B1392C(ObjDhouse *arg0);                /* static */
void func_80B13940(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B139D8(Actor *arg0);                    /* static */
void func_80B139F4(ObjDhouse *arg0, GlobalContext *arg1); /* static */
void func_80B13C08(Actor *this, GlobalContext *globalCtx); /* static */
void func_80B13E40(Actor *this, GlobalContext *globalCtx); /* static */
extern Gfx D_06004928;
extern Gfx D_06005A78;
extern CollisionHeader D_06008040;
extern ? D_060081D8;
static ? D_80B13E90;                                /* unable to generate initializer */
static Vec3f D_80B13FA8 = {0.0f, 0.3f, 0.0f};
static InitChainEntry D_80B13FB4[4];                /* unable to generate initializer */
static Vec3f D_80B13FC4 = {160.0f, 0.0f, 240.0f};

void ObjDhouse_Init(ObjDhouse *this, GlobalContext *globalCtx) {
    ObjDhouse *this = (ObjDhouse *) thisx;
    Actor_ProcessInitChain((Actor *) this, D_80B13FB4);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        this->actor.draw = func_80B13E40;
        func_80B13908(this);
        return;
    }
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06008040);
    this->actor.flags |= 0x10;
    func_80B1392C(this);
}

void ObjDhouse_Destroy(ObjDhouse *this, GlobalContext *globalCtx) {
    ObjDhouse *this = (ObjDhouse *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void func_80B12A50(void *arg0, ? *arg1, f32 *arg2) {
    arg2->unk0 = arg0->unk0 + arg1->unk8;
    arg2->unk4 = (f32) (arg0->unk4 + arg1->unkC);
    arg2->unk8 = (f32) (arg0->unk8 + arg1->unk10);
}

void func_80B12A88(Actor *arg0) {
    Vec3f *temp_s0;
    s32 temp_s1;
    void *temp_s4;
    Vec3f *phi_s0;
    ? *phi_s2;
    s32 phi_s1;

    temp_s4 = arg0 + 0xBC;
    phi_s0 = arg0 + 0x160;
    phi_s2 = &D_80B13E90;
    phi_s1 = 0;
    do {
        Math_Vec3f_Copy(phi_s0, arg0 + 0x24);
        Math_Vec3f_Copy(phi_s0 + 0xC, phi_s2 + 0x14);
        temp_s1 = phi_s1 + 1;
        phi_s0->unk18 = (unaligned s32) temp_s4->unk0;
        temp_s0 = phi_s0 + 0x20;
        temp_s0->unk-2 = 0;
        temp_s0->unk-4 = (u16) temp_s4->unk4;
        phi_s0 = temp_s0;
        phi_s2 += 0x28;
        phi_s1 = temp_s1;
    } while (temp_s1 != 7);
}

void func_80B12B38(Actor *arg0, GlobalContext *arg1) {
    CollisionPoly *sp90;
    f32 sp80;
    s32 sp7C;
    f32 temp_f0;
    s32 temp_s5;
    s8 temp_v0;
    s8 temp_v0_2;
    void *phi_s0;
    ? *phi_s1;
    s32 phi_s3;
    s32 phi_s5;

    phi_s0 = arg0 + 0x160;
    phi_s1 = &D_80B13E90;
    phi_s5 = 0;
    do {
        temp_v0 = phi_s0->unk1E;
        if ((s32) temp_v0 >= 0) {
            phi_s3 = 0;
            if ((s32) temp_v0 >= (s32) phi_s1->unk26) {
                phi_s0->unk10 = (f32) (phi_s0->unk10 - 2.5f);
                Math_Vec3f_Scale(phi_s0 + 0xC, 0.96f);
                phi_s0->unk0 = (f32) (phi_s0->unk0 + phi_s0->unkC);
                phi_s0->unk4 = (f32) (phi_s0->unk4 + phi_s0->unk10);
                phi_s0->unk8 = (f32) (phi_s0->unk8 + phi_s0->unk14);
                phi_s0->unk18 = (s16) (phi_s0->unk18 + phi_s1->unk20);
                phi_s0->unk1A = (s16) (phi_s0->unk1A + phi_s1->unk22);
                phi_s0->unk1C = (s16) (phi_s0->unk1C + phi_s1->unk24);
                if (phi_s1->unk26 == phi_s0->unk1E) {
                    func_80B12E7C(arg0, arg1, phi_s0, phi_s1);
                }
            }
            if (phi_s0->unk10 < 0.0f) {
                func_80B12A50(phi_s0, phi_s1, &sp80);
                temp_f0 = func_800C411C(arg1 + 0x830, &sp90, &sp7C, arg0, (Vec3f *) &sp80);
                if (((sp84 - 35.0f) < temp_f0) && (temp_f0 > -31999.0f)) {
                    phi_s3 = 1;
                }
            }
            if (phi_s3 != 0) {
                phi_s0->unk1E = -1;
                func_80B13170(arg0, arg1, phi_s0, phi_s1);
            } else {
                temp_v0_2 = phi_s0->unk1E;
                if ((s32) temp_v0_2 >= 0x3D) {
                    phi_s0->unk1E = -1;
                } else {
                    phi_s0->unk1E = (s8) (temp_v0_2 + 1);
                }
            }
        }
        temp_s5 = phi_s5 + 1;
        phi_s0 += 0x20;
        phi_s1 += 0x28;
        phi_s5 = temp_s5;
    } while (temp_s5 != 7);
}

s32 func_80B12D78(Actor *arg0) {
    s32 temp_v1;
    s8 temp_a0;
    s8 temp_a0_2;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a2_4;
    void *temp_a2_5;
    void *temp_a3;
    void *temp_v0;
    void *phi_v0;
    s32 phi_a0;
    void *phi_a2;
    void *phi_v0_2;
    s32 phi_a0_2;
    s32 phi_a0_3;
    s32 phi_a0_4;
    s32 phi_v1;
    s32 phi_a1;

    temp_v0 = arg0 + 0x240;
    temp_a3 = arg0 + 0x26C;
    temp_a2 = temp_a3 + 0x2C;
    phi_v0 = temp_v0;
    phi_v1 = 4;
    phi_a1 = 0;
    if ((s32) temp_a3->unk28 < (s32) temp_v0->unk28) {
        phi_v0 = temp_a3;
        phi_a1 = 1;
    }
    temp_a0 = phi_v0->unk28;
    phi_a0 = (s32) temp_a0;
    phi_v0_2 = phi_v0;
    if ((s32) temp_a2->unk28 < (s32) temp_a0) {
        phi_a0 = (s32) temp_a2->unk28;
        phi_v0_2 = temp_a2;
        phi_a1 = 2;
    }
    temp_a2_2 = temp_a2 + 0x2C;
    if ((s32) temp_a2->unk54 < phi_a0) {
        phi_v0_2 = temp_a2_2;
        phi_a1 = 3;
    }
    phi_a2 = temp_a2_2 + 0x2C;
    do {
        temp_a0_2 = phi_v0_2->unk28;
        phi_a0_2 = (s32) temp_a0_2;
        if ((s32) phi_a2->unk28 < (s32) temp_a0_2) {
            phi_a0_2 = (s32) phi_a2->unk28;
            phi_a1 = phi_v1;
            phi_v0_2 = phi_a2;
        }
        temp_a2_3 = phi_a2 + 0x2C;
        phi_a0_3 = phi_a0_2;
        if ((s32) phi_a2->unk54 < phi_a0_2) {
            phi_a0_3 = (s32) temp_a2_3->unk28;
            phi_a1 = phi_v1 + 1;
            phi_v0_2 = temp_a2_3;
        }
        temp_a2_4 = temp_a2_3 + 0x2C;
        phi_a0_4 = phi_a0_3;
        if ((s32) temp_a2_3->unk54 < phi_a0_3) {
            phi_a0_4 = (s32) temp_a2_4->unk28;
            phi_a1 = phi_v1 + 2;
            phi_v0_2 = temp_a2_4;
        }
        temp_a2_5 = temp_a2_4 + 0x2C;
        if ((s32) temp_a2_4->unk54 < phi_a0_4) {
            phi_a1 = phi_v1 + 3;
            phi_v0_2 = temp_a2_5;
        }
        temp_v1 = phi_v1 + 4;
        phi_a2 = temp_a2_5 + 0x2C;
        phi_v1 = temp_v1;
    } while (temp_v1 != 0x64);
    return phi_a1;
}

void func_80B12E7C(Actor *arg0, GlobalContext *arg1, void *arg2, ? *arg3) {
    f32 spA0;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 *temp_s5;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f20;
    f32 temp_f2;
    s32 temp_s1;
    void *temp_s0;
    s32 phi_s1;

    Matrix_RotateY(arg0->shape.rot.y, 0U);
    SysMatrix_MultiplyVector3fXZByCurrentState(&D_80B13FC4, (Vec3f *) &sp94);
    sp98 = 100.0f;
    func_80B12A50(arg2, arg3, &spA0);
    temp_s5 = &sp88;
    phi_s1 = 0;
    do {
        temp_s0 = arg0 + (func_80B12D78(arg0) * 0x2C) + 0x240;
        temp_s0->unk0 = (f32) (Rand_ZeroOne() - 0.5f);
        temp_s0->unk4 = Rand_ZeroOne();
        temp_f12 = temp_s0->unk0;
        temp_f14 = temp_s0->unk4;
        temp_f2 = Rand_ZeroOne() - 0.5f;
        temp_s0->unk8 = temp_f2;
        temp_s0->unkC = (f32) (temp_f12 * 24.0f);
        temp_s0->unk10 = (f32) (temp_f14 * 34.0f);
        temp_s0->unk14 = (f32) (temp_f2 * 24.0f);
        temp_s0->unk0 = (f32) ((temp_f12 * 140.0f) + spA0);
        temp_s0->unk4 = (f32) (((temp_f14 - 0.2f) * 50.0f) + spA4);
        temp_s0->unk8 = (f32) ((temp_f2 * 140.0f) + spA8);
        temp_s0->unk18 = (f32) ((Rand_ZeroOne() * 0.057f) + 0.003f);
        temp_s0->unk1C = (s16) (Rand_Next() >> 0x10);
        temp_s0->unk1E = (s16) (Rand_Next() >> 0x10);
        temp_s0->unk20 = (s16) (Rand_Next() >> 0x10);
        temp_s0->unk22 = (s16) ((Rand_Next() >> 0x11) - 0x3FFF);
        temp_s0->unk24 = (s16) ((Rand_Next() >> 0x13) - 0xFFF);
        temp_s0->unk26 = (s16) ((Rand_Next() >> 0x12) - 0x1FFF);
        temp_s0->unk29 = 0;
        temp_s0->unk28 = 0x28;
        if ((phi_s1 & 1) != 0) {
            sp88 = ((Rand_ZeroOne() - 0.5f) * sp94) + temp_s0->unk0;
            sp8C = ((Rand_ZeroOne() - 0.3f) * sp98) + temp_s0->unk4;
            sp90 = ((Rand_ZeroOne() - 0.5f) * sp9C) + temp_s0->unk8;
            temp_f20 = Rand_ZeroOne();
            func_800B1210(arg1, (Vec3f *) temp_s5, &D_801D15B0, &D_80B13FA8, (s16) ((s32) (temp_f20 * 130.0f) + 0x14), (s16) ((s32) (Rand_ZeroOne() * 140.0f) + 0x3C));
        }
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0xF);
}

void func_80B13170(Actor *arg0, GlobalContext *arg1, void *arg2, ? *arg3) {
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 *temp_s6;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f6;
    s32 temp_s1;
    void *temp_s0;
    s32 phi_s1;

    func_80B12A50(arg2, arg3, &sp98);
    temp_s6 = &sp8C;
    phi_s1 = 0;
    do {
        temp_s0 = arg0 + (func_80B12D78(arg0) * 0x2C) + 0x240;
        temp_s0->unk0 = (f32) (Rand_ZeroOne() - 0.5f);
        temp_s0->unk4 = Rand_ZeroOne();
        temp_f12 = temp_s0->unk0;
        temp_f14 = temp_s0->unk4;
        temp_f2 = Rand_ZeroOne() - 0.5f;
        temp_s0->unk8 = temp_f2;
        temp_s0->unkC = (f32) (temp_f12 * 23.0f);
        temp_s0->unk14 = (f32) (temp_f2 * 23.0f);
        temp_s0->unk10 = (f32) ((temp_f14 * 19.0f) + 5.0f);
        temp_s0->unk0 = (f32) ((temp_f12 * 80.0f) + sp98);
        temp_s0->unk4 = (f32) ((temp_f14 * 23.0f) + sp9C + 15.0f);
        temp_s0->unk8 = (f32) ((temp_f2 * 80.0f) + spA0);
        temp_s0->unk1C = (s16) (Rand_Next() >> 0x10);
        temp_s0->unk1E = (s16) (Rand_Next() >> 0x10);
        temp_s0->unk20 = (s16) (Rand_Next() >> 0x10);
        temp_s0->unk22 = (s16) ((Rand_Next() >> 0x12) - 0x1FFF);
        temp_s0->unk24 = (s16) ((Rand_Next() >> 0x13) - 0xFFF);
        temp_s0->unk26 = (s16) ((Rand_Next() >> 0x12) - 0x1FFF);
        temp_s0->unk28 = 0x28;
        if (phi_s1 < 3) {
            temp_f6 = Rand_ZeroOne() * 0.06f;
            temp_s0->unk29 = 1;
            temp_s0->unk18 = (f32) (temp_f6 + 0.12f);
        } else {
            temp_f18 = Rand_ZeroOne() * 0.05f;
            temp_s0->unk29 = 0;
            temp_s0->unk18 = (f32) (temp_f18 + 0.003f);
        }
        if ((phi_s1 & 1) != 0) {
            sp8C = ((Rand_ZeroOne() - 0.5f) * 160.0f) + temp_s0->unk0;
            sp90 = (Rand_ZeroOne() * 120.0f) + temp_s0->unk4;
            sp94 = ((Rand_ZeroOne() - 0.5f) * 160.0f) + temp_s0->unk8;
            temp_f20 = Rand_ZeroOne();
            func_800B1210(arg1, (Vec3f *) temp_s6, &D_801D15B0, &D_80B13FA8, (s16) ((s32) (temp_f20 * 140.0f) + 0x14), (s16) ((s32) (Rand_ZeroOne() * 140.0f) + 0x28));
        }
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0xB);
}

void func_80B13474(Actor *arg0, GlobalContext *arg1, ? *arg2) {
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 *temp_s7;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f4;
    s32 temp_s1;
    void *temp_s0;
    s32 phi_s1;

    temp_s7 = &sp88;
    phi_s1 = 0;
    do {
        temp_s0 = arg0 + (func_80B12D78(arg0) * 0x2C) + 0x240;
        temp_s0->unk0 = (f32) (Rand_ZeroOne() - 0.5f);
        temp_s0->unk4 = Rand_ZeroOne();
        temp_f12 = temp_s0->unk0;
        temp_f14 = temp_s0->unk4;
        temp_f2 = Rand_ZeroOne() - 0.5f;
        temp_s0->unk8 = temp_f2;
        temp_s0->unkC = (f32) (temp_f12 * 18.0f);
        temp_s0->unk10 = (f32) (temp_f14 * 23.0f);
        temp_s0->unk14 = (f32) (temp_f2 * 18.0f);
        temp_s0->unk0 = (f32) ((temp_f12 * 40.0f) + arg2->unk0);
        temp_s0->unk4 = (f32) (((temp_f14 - 0.4f) * 20.0f) + arg2->unk4);
        temp_s0->unk8 = (f32) ((temp_f2 * 40.0f) + arg2->unk8);
        temp_s0->unk1C = (s16) (Rand_Next() >> 0x10);
        temp_s0->unk1E = (s16) (Rand_Next() >> 0x10);
        temp_s0->unk20 = (s16) (Rand_Next() >> 0x10);
        temp_s0->unk22 = (s16) ((Rand_Next() >> 0x12) - 0x1FFF);
        temp_s0->unk24 = (s16) ((Rand_Next() >> 0x13) - 0xFFF);
        temp_s0->unk26 = (s16) ((Rand_Next() >> 0x12) - 0x1FFF);
        temp_s0->unk28 = 0x28;
        temp_f4 = Rand_ZeroOne() * 0.07f;
        temp_s0->unk29 = 0;
        temp_s0->unk18 = (f32) (temp_f4 + 0.003f);
        sp88 = ((Rand_ZeroOne() * 70.0f) - 35.0f) + temp_s0->unk0;
        sp8C = (Rand_ZeroOne() * 60.0f) + temp_s0->unk4;
        sp90 = ((Rand_ZeroOne() * 70.0f) - 35.0f) + temp_s0->unk8;
        temp_f20 = Rand_ZeroOne();
        func_800B1210(arg1, (Vec3f *) temp_s7, &D_801D15B0, &D_80B13FA8, (s16) ((s32) (temp_f20 * 80.0f) + 0x14), (s16) ((s32) (Rand_ZeroOne() * 90.0f) + 0x28));
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
    } while (temp_s1 != 5);
}

void func_80B13724(Actor *arg0, GlobalContext *arg1) {
    CollisionPoly *sp80;
    ? sp70;
    s32 sp6C;
    f32 temp_f0;
    f32 temp_f20;
    s32 temp_s1;
    Vec3f *phi_s0;
    s32 phi_s1;

    temp_f20 = arg0->home.pos.y - 300.0f;
    phi_s0 = arg0 + 0x240;
    phi_s1 = 0;
    do {
        if ((s32) phi_s0->unk28 > 0) {
            phi_s0->unk10 = (f32) (phi_s0->unk10 - 2.2f);
            Math_Vec3f_Scale(phi_s0 + 0xC, 0.95f);
            phi_s0->y += phi_s0->unk10;
            phi_s0->x += phi_s0->unkC;
            phi_s0->z += phi_s0->unk14;
            if (phi_s0->y < temp_f20) {
                phi_s0->unk28 = 0;
            } else {
                phi_s0->unk1C = (s16) (phi_s0->unk1C + phi_s0->unk22);
                phi_s0->unk1E = (s16) (phi_s0->unk1E + phi_s0->unk24);
                phi_s0->unk20 = (s16) (phi_s0->unk20 + phi_s0->unk26);
                phi_s0->unk28 = (s8) (phi_s0->unk28 - 1);
                if ((phi_s0->unk29 & 1) != 0) {
                    temp_f0 = func_800C411C(arg1 + 0x830, &sp80, &sp6C, arg0, phi_s0);
                    if (((phi_s0->y - 20.0f) < temp_f0) && (temp_f0 > -31999.0f)) {
                        Math_Vec3f_Copy((Vec3f *) &sp70, phi_s0);
                        phi_s0->unk28 = 0;
                        func_80B13474(arg0, arg1, &sp70);
                    }
                }
            }
        }
        temp_s1 = phi_s1 + 1;
        phi_s0 += 0x2C;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x64);
}

void func_80B13908(ObjDhouse *arg0) {
    arg0->actionFunc = func_80B1391C;
}

void func_80B1391C(ObjDhouse *arg0, GlobalContext *arg1) {

}

void func_80B1392C(ObjDhouse *arg0) {
    arg0->actionFunc = func_80B13940;
}

void func_80B13940(Actor *arg0, GlobalContext *arg1) {
    s32 sp20;

    sp20 = 0;
    if (Flags_GetSwitch(arg1, arg0->params & 0x7F) != 0) {
        sp20 = 1;
        Audio_PlayActorSound2(arg0, 0x283EU);
    }
    if (sp20 != 0) {
        func_80B12A88(arg0);
        func_800C62BC(arg1, &arg1->colCtx.dyna, arg0->unk144);
        arg0->draw = func_80B13C08;
        arg0->flags |= 0x20;
        func_80B139D8(arg0);
    }
}

void func_80B139D8(Actor *arg0) {
    arg0->unk1370 = 0x78;
    arg0->unk15C = func_80B139F4;
}

void func_80B139F4(ObjDhouse *arg0, GlobalContext *arg1) {
    Camera *temp_a2;
    s16 temp_s0;
    s16 temp_s0_2;
    s16 temp_s0_3;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v1;
    s32 temp_t4;

    temp_v1 = arg0->unk1370;
    temp_a2 = (arg1 + (arg1->activeCamera * 4))->unk800;
    if (temp_v1 == 0x75) {
        temp_v0 = Quake_Add(temp_a2, 3U);
        temp_s0 = temp_v0;
        Quake_SetSpeed(temp_v0, 0x4E20);
        Quake_SetQuakeValues(temp_s0, 8, 0, 0, (s16) 0);
        Quake_SetCountdown(temp_s0, 0x11);
        goto block_6;
    }
    if (temp_v1 == 0x69) {
        temp_v0_2 = Quake_Add(temp_a2, 3U);
        temp_s0_2 = temp_v0_2;
        Quake_SetSpeed(temp_v0_2, 0x4E20);
        Quake_SetQuakeValues(temp_s0_2, 7, 0, 0, (s16) 0);
        Quake_SetCountdown(temp_s0_2, 0x14);
        goto block_6;
    }
    if (temp_v1 == 0x5A) {
        temp_v0_3 = Quake_Add(temp_a2, 3U);
        temp_s0_3 = temp_v0_3;
        Quake_SetSpeed(temp_v0_3, 0x4E20);
        Quake_SetQuakeValues(temp_s0_3, 5, 0, 0, (s16) 0);
        Quake_SetCountdown(temp_s0_3, 0x3E);
block_6:
    }
    arg0->unk1370 += -1;
    if ((s32) arg0->unk1370 <= 0) {
        arg0->actor.draw = func_80B13E40;
        temp_t4 = arg0->actor.flags & ~0x20;
        arg0->actor.flags = temp_t4;
        arg0->actor.flags = temp_t4 & ~0x10;
        func_80B13908(arg0);
        return;
    }
    func_80B12B38((Actor *) arg0, arg1);
    func_80B13724((Actor *) arg0, arg1);
}

void ObjDhouse_Update(ObjDhouse *this, GlobalContext *globalCtx) {
    ObjDhouse *this = (ObjDhouse *) thisx;
    this->actionFunc(this, globalCtx);
}

void ObjDhouse_Draw(ObjDhouse *this, GlobalContext *globalCtx) {
    ObjDhouse *this = (ObjDhouse *) thisx;
    func_800BDFC0(globalCtx, &D_06005A78);
}

void func_80B13C08(Actor *this, GlobalContext *globalCtx) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s3;
    f32 temp_f12;
    s32 temp_s4;
    s32 temp_s4_2;
    void *phi_s1;
    ? *phi_s0;
    s32 phi_s4;
    void *phi_s0_2;
    s32 phi_s4_2;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s3 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s3->polyOpa.p;
    temp_s3->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    temp_v0->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s3->polyOpa.p;
    temp_s3->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06004928;
    temp_v0_2->words.w0 = 0xDE000000;
    phi_s1 = this + 0x160;
    phi_s0 = &D_80B13E90;
    phi_s4 = 0;
    phi_s4_2 = 0;
    do {
        if ((s32) phi_s1->unk1E >= 0) {
            SysMatrix_SetStateRotationAndTranslation(phi_s1->unk0 + phi_s0->unk8, phi_s1->unk4 + phi_s0->unkC, phi_s1->unk8 + phi_s0->unk10, phi_s1 + 0x18);
            SysMatrix_InsertTranslation(-phi_s0->unk8, -phi_s0->unkC, -phi_s0->unk10, 1);
            Matrix_Scale(0.1f, 0.1f, 0.1f, 1);
            temp_v0_3 = temp_s3->polyOpa.p;
            temp_s3->polyOpa.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDA380003;
            temp_v0_3->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_4 = temp_s3->polyOpa.p;
            temp_s3->polyOpa.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDE000000;
            temp_v0_4->words.w1 = phi_s0->unk0;
            temp_v0_5 = temp_s3->polyOpa.p;
            temp_s3->polyOpa.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDE000000;
            temp_v0_5->words.w1 = phi_s0->unk4;
        }
        temp_s4 = phi_s4 + 1;
        phi_s1 += 0x20;
        phi_s0 += 0x28;
        phi_s4 = temp_s4;
    } while (temp_s4 < 7);
    phi_s0_2 = this + 0x240;
    do {
        if ((s32) phi_s0_2->unk28 > 0) {
            SysMatrix_SetStateRotationAndTranslation(phi_s0_2->unk0, phi_s0_2->unk4, phi_s0_2->unk8, phi_s0_2 + 0x1C);
            temp_f12 = phi_s0_2->unk18;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            temp_v0_6 = temp_s3->polyOpa.p;
            temp_s3->polyOpa.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xDA380003;
            temp_v0_6->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_7 = temp_s3->polyOpa.p;
            temp_s3->polyOpa.p = temp_v0_7 + 8;
            temp_v0_7->words.w1 = (u32) &D_060081D8;
            temp_v0_7->words.w0 = 0xDE000000;
        }
        temp_s4_2 = phi_s4_2 + 1;
        phi_s0_2 += 0x2C;
        phi_s4_2 = temp_s4_2;
    } while (temp_s4_2 != 0x64);
}

void func_80B13E40(Actor *this, GlobalContext *globalCtx) {
    func_800BDFC0(globalCtx, &D_06004928);
}
