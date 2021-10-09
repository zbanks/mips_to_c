typedef struct ObjComb {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(ObjComb *, GlobalContext *);
    /* 0x148 */ ColliderJntSph unk148;              /* inferred */
    /* 0x168 */ ColliderJntSphElement unk168;       /* inferred */
    /* 0x1A8 */ s16 unk1A8;                         /* inferred */
    /* 0x1AA */ s16 unk1AA;                         /* inferred */
    /* 0x1AC */ s16 unk1AC;                         /* inferred */
    /* 0x1AE */ s16 unk1AE;                         /* inferred */
    /* 0x1B0 */ s16 unk1B0;                         /* inferred */
    /* 0x1B2 */ s8 unk1B2;                          /* inferred */
    /* 0x1B3 */ s8 unk1B3;                          /* inferred */
    /* 0x1B4 */ s8 unk1B4;                          /* inferred */
    /* 0x1B5 */ s8 unk1B5;                          /* inferred */
    /* 0x1B6 */ s8 unk1B6;                          /* inferred */
    /* 0x1B7 */ s8 unk1B7;                          /* inferred */
    /* 0x1B8 */ s8 unk1B8;                          /* inferred */
    /* 0x1B9 */ char pad1B9[0x3];                   /* maybe part of unk1B8[4]? */
} ObjComb;                                          /* size = 0x1BC */

struct _mips2c_stack_ObjComb_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjComb_Draw {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_ObjComb_Init {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ ColliderJntSph *sp28;                /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_ObjComb_Update {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8098CE40 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8098CEAC {
    /* 0x00 */ char pad0[0xA8];
    /* 0xA8 */ Vec3f *spA8;                         /* inferred */
    /* 0xAC */ char padAC[0x18];                    /* maybe part of spA8[7]? */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ f32 spDC;                            /* inferred */
    /* 0xE0 */ f32 spE0;                            /* inferred */
    /* 0xE4 */ f32 spE4;                            /* inferred */
};                                                  /* size = 0xE8 */

struct _mips2c_stack_func_8098D19C {
    /* 0x00 */ char pad0[0xA8];
    /* 0xA8 */ Vec3f *spA8;                         /* inferred */
    /* 0xAC */ char padAC[0x18];                    /* maybe part of spA8[7]? */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ f32 spDC;                            /* inferred */
    /* 0xE0 */ f32 spE0;                            /* inferred */
    /* 0xE4 */ f32 spE4;                            /* inferred */
};                                                  /* size = 0xE8 */

struct _mips2c_stack_func_8098D47C {
    /* 0x00 */ char pad0[0xBC];
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ ? spC8;                              /* inferred */
    /* 0xC8 */ char padC8[0xC];
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ f32 spDC;                            /* inferred */
};                                                  /* size = 0xE0 */

struct _mips2c_stack_func_8098D6E0 {
    /* 0x00 */ char pad0[0x70];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad7C[0x4];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_8098D870 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8098D8C8 {
    /* 0x00 */ char pad0[0x50];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_8098D99C {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8098DA74 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8098DC44 {};              /* size 0x0 */

struct _mips2c_stack_func_8098DC60 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8098DE58 {};              /* size 0x0 */

struct _mips2c_stack_func_8098DEA0 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8098E098 {};              /* size 0x0 */

struct _mips2c_stack_func_8098E0B8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

s32 func_800F2138(s8);                              /* extern */
s32 func_8098CE40(Actor *arg0, GlobalContext *arg1); /* static */
void func_8098CEAC(ObjComb *arg0, GlobalContext *arg1); /* static */
void func_8098D19C(ObjComb *arg0, GlobalContext *arg1); /* static */
void func_8098D47C(ObjComb *arg0, GlobalContext *arg1); /* static */
void func_8098D6E0(ObjComb *arg0, GlobalContext *arg1); /* static */
void func_8098D870(void *arg0, GlobalContext *arg1); /* static */
void func_8098D8C8(void *arg0, GlobalContext *arg1); /* static */
void func_8098D99C(Actor *arg0, GlobalContext *arg1); /* static */
void func_8098DA74(ObjComb *arg0, GlobalContext *); /* static */
void func_8098DC44(ObjComb *arg0);                  /* static */
void func_8098DE58(ObjComb *arg0);                  /* static */
void func_8098E098(ObjComb *arg0);                  /* static */
extern ? D_06000CB0;
extern Gfx D_06001040;
static ColliderJntSphElementInit D_8098E440 = {{0, {0, 0, 0}, {0x5CBFFBE, 0, 0}, 0, 1, 1}, {0, {{0, 0, 0}, 0xF}, 0x64}};
static ColliderJntSphInit D_8098E464 = {{0xA, 0, 9, 9, 0x20, 0}, 1, &D_8098E440};
static InitChainEntry D_8098E474[7];                /* unable to generate initializer */

s32 func_8098CE40(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_a2;
    s32 phi_v0;

    temp_v0 = ((arg0->params & 0x1F) * 4) | 0xFF01;
    phi_a2 = -1;
    if ((temp_v0 & 3) != 0) {
        phi_a2 = ((s32) (temp_v0 & 0x3FC) >> 2) & 0xFF;
    }
    temp_v0_2 = (phi_a2 < 0) == 1;
    phi_v0 = temp_v0_2;
    if (temp_v0_2 == 0) {
        phi_v0 = Actor_GetChestFlag(arg1, (u32) phi_a2) == 0;
    }
    return phi_v0;
}

void func_8098CEAC(ObjComb *arg0, GlobalContext *arg1) {
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    Vec3f *spA8;
    f32 *temp_s5;
    f32 *temp_s6;
    f32 *temp_s7;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f6;
    s16 temp_s2;
    s32 temp_f10;
    s32 temp_s3;
    s16 phi_s2;
    s32 phi_s3;
    s32 phi_s0;
    s32 phi_v0;
    s32 phi_s1;

    spA8 = arg0 + 0x24;
    temp_s7 = &spC4;
    temp_s6 = &spDC;
    temp_s5 = &spD0;
    phi_s2 = 0;
    phi_s3 = 0;
    do {
        temp_s2 = phi_s2 + 0x4E20;
        temp_f20 = Rand_ZeroOne() * 10.0f;
        temp_f6 = Math_SinS(temp_s2) * temp_f20;
        spDC = temp_f6;
        spE0 = (f32) (phi_s3 - 0xF) * 0.7f;
        spE4 = Math_CosS(temp_s2) * temp_f20;
        Math_Vec3f_Sum((Vec3f *) temp_s6, spA8, (Vec3f *) temp_s5);
        spC4 = (Rand_ZeroOne() - 0.5f) + (temp_f6 * 0.5f);
        spC8 = (Rand_ZeroOne() - 0.5f) + (spE0 * 0.6f);
        spCC = (Rand_ZeroOne() - 0.5f) + (spE4 * 0.5f);
        temp_f10 = (s32) ((Rand_ZeroOne() * 72.0f) + 25.0f);
        phi_s2 = temp_s2;
        phi_s0 = -0xC8;
        if ((s32) (s16) temp_f10 < 0x28) {
            phi_s1 = 0x28;
        } else {
            phi_s0 = -0x154;
            if ((s32) (s16) temp_f10 < 0x46) {
                phi_s0 = -0x118;
                phi_s1 = 0x1E;
            } else {
                phi_s1 = 0x14;
            }
        }
        temp_f0 = Rand_ZeroOne();
        if (temp_f0 < 0.1f) {
            phi_v0 = 0x60;
        } else {
            phi_v0 = 0x20;
            if (temp_f0 < 0.8f) {
                phi_v0 = 0x40;
            }
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s5, (Vec3f *) temp_s7, (Vec3f *) temp_s5, (s16) phi_s0, (s16) phi_v0, (s16) phi_s1, (s16) 4, (s16) 0, (s16) (s32) (s16) temp_f10, (s16) 0, (s16) 0, 0x3C, (s16) -1, (s16) 0x1B9, &D_06001040);
        temp_s3 = phi_s3 + 1;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x1F);
    spD0 = arg0->actor.world.pos.x;
    spD4 = arg0->actor.world.pos.y - 10.0f;
    spD8 = arg0->actor.world.pos.z;
    func_800BBFB0(arg1, (Vec3f *) temp_s5, 40.0f, 6, (s16) 0x46, (s16) 0x3C, (u8) 1);
}

void func_8098D19C(ObjComb *arg0, GlobalContext *arg1) {
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    Vec3f *spA8;
    f32 *temp_s5;
    f32 *temp_s6;
    f32 *temp_s7;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f4;
    s16 temp_s2;
    s32 temp_f8;
    s32 temp_s3;
    s16 phi_s2;
    s32 phi_s3;
    s32 phi_s0;
    s32 phi_v0;
    s32 phi_s1;

    spA8 = arg0 + 0x24;
    temp_s7 = &spC4;
    temp_s6 = &spDC;
    temp_s5 = &spD0;
    phi_s2 = 0;
    phi_s3 = 0;
    do {
        temp_s2 = phi_s2 + 0x4E20;
        temp_f20 = Rand_ZeroOne() * 10.0f;
        temp_f4 = Math_SinS(temp_s2) * temp_f20;
        spDC = temp_f4;
        spE0 = (f32) phi_s3 * 0.7f;
        spE4 = Math_CosS(temp_s2) * temp_f20;
        Math_Vec3f_Sum((Vec3f *) temp_s6, spA8, (Vec3f *) temp_s5);
        spC4 = (Rand_ZeroOne() - 0.5f) + (temp_f4 * 0.5f);
        spC8 = (Rand_ZeroOne() * 0.5f) + (spE0 * 0.5f);
        spCC = (Rand_ZeroOne() - 0.5f) + (spE4 * 0.5f);
        temp_f8 = (s32) ((Rand_ZeroOne() * 72.0f) + 25.0f);
        phi_s2 = temp_s2;
        phi_s0 = -0xC8;
        if ((s32) (s16) temp_f8 < 0x28) {
            phi_s1 = 0x28;
        } else {
            phi_s0 = -0x154;
            if ((s32) (s16) temp_f8 < 0x46) {
                phi_s0 = -0x118;
                phi_s1 = 0x1E;
            } else {
                phi_s1 = 0x14;
            }
        }
        temp_f0 = Rand_ZeroOne();
        if (temp_f0 < 0.1f) {
            phi_v0 = 0x60;
        } else {
            phi_v0 = 0x20;
            if (temp_f0 < 0.8f) {
                phi_v0 = 0x40;
            }
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s5, (Vec3f *) temp_s7, (Vec3f *) temp_s5, (s16) phi_s0, (s16) phi_v0, (s16) phi_s1, (s16) 4, (s16) 0, (s16) (s32) (s16) temp_f8, (s16) 0, (s16) 0, 0x3C, (s16) -1, (s16) 0x1B9, &D_06001040);
        temp_s3 = phi_s3 + 1;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x1F);
    spD0 = arg0->actor.world.pos.x;
    spD4 = arg0->actor.world.pos.y + 20.0f;
    spD8 = arg0->actor.world.pos.z;
    func_800BBFB0(arg1, (Vec3f *) temp_s5, 40.0f, 6, (s16) 0x46, (s16) 0x3C, (u8) 1);
}

void func_8098D47C(ObjComb *arg0, GlobalContext *arg1) {
    f32 spDC;
    f32 spD8;
    f32 spD4;
    ? spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 *temp_fp;
    f32 *temp_s7;
    f32 temp_f10;
    f32 temp_f20;
    f32 temp_f4;
    s16 temp_s1;
    s32 temp_f10_2;
    s32 temp_s2;
    s16 phi_s1;
    s32 phi_s2;
    s32 phi_s0;
    s32 phi_v0;

    temp_fp = &spBC;
    temp_s7 = &spD4;
    phi_s1 = 0;
    phi_s2 = 0;
    do {
        temp_s1 = phi_s1 + 0x4E20;
        temp_f20 = Rand_ZeroOne() * 10.0f;
        temp_f4 = Math_SinS(temp_s1) * temp_f20;
        spD4 = temp_f4;
        temp_f10 = (f32) phi_s2 * 0.25f;
        spD8 = temp_f10;
        spDC = Math_CosS(temp_s1) * temp_f20;
        Math_Vec3f_Sum((Vec3f *) temp_s7, arg0 + 0x24, (Vec3f *) &spC8);
        spBC = (Rand_ZeroOne() - 0.5f) + (temp_f4 * 0.5f);
        spC0 = Rand_ZeroOne() + (temp_f10 * 0.6f) + 6.0f;
        spC4 = (Rand_ZeroOne() - 0.5f) + (spDC * 0.5f);
        temp_f10_2 = (s32) ((Rand_ZeroOne() * 72.0f) + 25.0f);
        phi_s1 = temp_s1;
        if ((s32) (s16) temp_f10_2 < 0x28) {
            phi_s0 = -0x64;
        } else {
            phi_s0 = -0xF0;
            if ((s32) (s16) temp_f10_2 < 0x46) {
                phi_s0 = -0xB4;
            }
        }
        if (Rand_ZeroOne() < 0.2f) {
            phi_v0 = 0x40;
        } else {
            phi_v0 = 0x20;
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) &spC8, (Vec3f *) temp_fp, (Vec3f *) &spC8, (s16) phi_s0, (s16) phi_v0, (s16) 0x28, (s16) 0, (s16) 0, (s16) (s32) (s16) temp_f10_2, (s16) 0, (s16) 0, 0x50, (s16) -1, (s16) 0x1B9, &D_06001040);
        temp_s2 = phi_s2 + 1;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x15);
}

void func_8098D6E0(ObjComb *arg0, GlobalContext *arg1) {
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 *temp_s3;
    f32 temp_f0;
    f32 temp_f20;
    s32 temp_s1;
    s32 phi_s0;
    s32 phi_s1;

    sp74 = arg0->actor.world.pos.y + arg0->actor.yDistToWater;
    temp_s3 = &sp70;
    phi_s0 = 0;
    phi_s1 = 0;
    do {
        temp_f0 = Rand_ZeroOne();
        temp_f20 = ((1.0f - (temp_f0 * temp_f0)) * 14.0f) + 4.0f;
        sp70 = (Math_SinS((s16) ((s32) (Rand_ZeroOne() * 8000.0f) + phi_s0)) * temp_f20) + arg0->actor.world.pos.x;
        sp78 = (Math_CosS((s16) ((s32) (Rand_ZeroOne() * 8000.0f) + phi_s0)) * temp_f20) + arg0->actor.world.pos.z;
        EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s3, NULL, NULL, (s16) 0, (s16) 0xC8);
        temp_s1 = phi_s1 + 1;
        phi_s0 += 0x2000;
        phi_s1 = temp_s1;
    } while (temp_s1 != 8);
    sp70 = arg0->actor.world.pos.x;
    sp78 = arg0->actor.world.pos.z;
    EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s3, NULL, NULL, (s16) 0, (s16) 0x12C);
}

void func_8098D870(void *arg0, GlobalContext *arg1) {
    s16 temp_a0;
    s32 temp_v0;

    temp_a0 = arg0->unk1C;
    arg0 = arg0;
    temp_v0 = func_800A8150(temp_a0 & 0x3F);
    if (temp_v0 >= 0) {
        Item_DropCollectible(arg1, arg0 + 0x24, ((((s32) arg0->unk1C >> 8) & 0x7F) << 8) | temp_v0);
    }
}

void func_8098D8C8(void *arg0, GlobalContext *arg1) {
    s32 temp_s1;
    s32 temp_s4;
    s32 phi_s5;
    s32 phi_s1;

    temp_s4 = arg0->unk1C & 0xF;
    if (func_8098DC60 == arg0->unk144) {
        phi_s5 = 2;
    } else {
        phi_s5 = 1;
    }
    arg0->unk1B6 = 0;
    phi_s1 = 0;
    if (temp_s4 > 0) {
        do {
            temp_s1 = phi_s1 + 1;
            phi_s1 = temp_s1;
            if (Actor_Spawn(arg1 + 0x1CA0, arg1, 0x204, arg0->unk24, arg0->unk28, arg0->unk2C, (s16) 0, (s16) 0, (s16) 0, (s16) phi_s5) != 0) {
                arg0->unk1B6 = 1;
            }
        } while (temp_s1 != temp_s4);
    }
}

void func_8098D99C(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_v0;

    if (func_8098CE40(arg0) != 0) {
        temp_v0 = Actor_Spawn(arg1 + 0x1CA0, arg1, 0x50, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) (s32) arg0->home.rot.y, (s16) 0, (s16) (((arg0->params & 0x1F) * 4) | 0xFF01));
        if (temp_v0 != 0) {
            temp_v0->parent = arg0;
            if (func_8098DC60 == arg0->unk144) {
                temp_v0->velocity.y = 8.0f;
                temp_v0->speedXZ = 2.0f;
            } else {
                temp_v0->velocity.y = 10.0f;
                temp_v0->speedXZ = 2.0f;
            }
            arg0->unk1B6 = 1;
            play_sound(0x4807U);
        }
    }
}

void func_8098DA74(ObjComb *arg0) {
    s16 temp_v0;
    s32 temp_v1;

    temp_v0 = arg0->actor.params;
    temp_v1 = (((s32) temp_v0 >> 0xE) & 2) | (((s32) temp_v0 >> 7) & 1);
    if (temp_v1 == 0) {
        func_8098D870();
        return;
    }
    if (temp_v1 == 1) {
        func_8098D8C8();
        return;
    }
    func_8098D99C();
}

void ObjComb_Init(ObjComb *this, GlobalContext *globalCtx) {
    s32 sp2C;
    ColliderJntSph *sp28;
    ColliderJntSph *temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    ObjComb *this = (ObjComb *) thisx;

    temp_v0 = this->actor.params;
    sp2C = (((s32) temp_v0 >> 0xE) & 2) | (((s32) temp_v0 >> 7) & 1);
    Actor_ProcessInitChain((Actor *) this, D_8098E474);
    temp_a1 = &this->unk148;
    sp28 = temp_a1;
    Collider_InitJntSph(globalCtx, temp_a1);
    if ((sp2C == 1) && ((((s32) this->actor.params >> 4) & 1) != 0) && ((gSaveContext.weekEventReg[83] & 2) != 0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    Collider_SetJntSph(globalCtx, temp_a1, (Actor *) this, &D_8098E464, &this->unk168);
    if (sp2C == 0) {
        temp_v0_2 = this->actor.params;
        if (func_800A81A4(globalCtx, temp_v0_2 & 0x3F, ((s32) temp_v0_2 >> 8) & 0x7F) != 0) {
            this->unk1B7 = 1;
            this->actor.flags |= 0x10;
        }
    }
    if ((sp2C != 2) || (func_8098CE40((Actor *) this, globalCtx) == 0)) {
        this->unk1B8 = -1;
    }
    func_8098DC44(this);
}

void ObjComb_Destroy(ObjComb *this, GlobalContext *globalCtx) {
    ObjComb *this = (ObjComb *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk148);
}

void func_8098DC44(ObjComb *arg0) {
    arg0->unk1AC = 0x2EE0;
    arg0->actionFunc = func_8098DC60;
}

void func_8098DC60(ObjComb *this, GlobalContext *globalCtx) {
    s32 temp_a0;
    s8 temp_v0;
    u32 temp_v1;

    this->unk1AA += this->unk1AC;
    if (this->unk1B3 != 0) {
        this->unk148.base.acFlags &= 0xFFFD;
    }
    this->unk1A8 += -0x32;
    if ((s32) this->unk1A8 < 0) {
        this->unk1A8 = 0;
    }
    if (this->unk1B3 != 0) {
        temp_v1 = this->unk148.elements->info.acHitInfo->toucher.dmgFlags;
        if ((temp_v1 & 0x182C29C) != 0) {
            func_8098CEAC(this, globalCtx);
            func_8098DA74(this, globalCtx);
            Actor_MarkForDeath((Actor *) this);
        } else {
            temp_a0 = temp_v1 & 0x13820;
            if (temp_a0 != 0) {
                this->unk1A8 = 0xDAC;
                this->unk1AC = 0x36B0;
            } else {
                this->unk1A8 = 0x5DC;
                this->unk1AC = 0x2EE0;
            }
            if (((s32) this->unk1B2 <= 0) && (temp_a0 != 0)) {
                if (this->unk1B5 == 0) {
                    this->unk1B5 = 1;
                    this->actor.flags |= 0x10;
                }
                this->unk1B2 = 0x14;
            }
        }
    } else {
        temp_v0 = this->unk1B8;
        if ((s32) temp_v0 >= 0) {
            if (temp_v0 == 0) {
                Audio_PlayActorSound2((Actor *) this, 0x39DAU);
                if (Rand_ZeroOne() < 0.1f) {
                    this->unk1B8 = Rand_S16Offset(0x28, 0x50);
                } else {
                    this->unk1B8 = 8;
                }
            } else {
                this->unk1B8 = temp_v0 - 1;
            }
        }
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk148);
    }
    if (this->actor.update != 0) {
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk148);
    }
    this->actor.shape.rot.x = (s32) (Math_SinS(this->unk1AA) * (f32) this->unk1A8) + this->actor.home.rot.x;
}

void func_8098DE58(ObjComb *arg0) {
    arg0->actor.flags |= 0x10;
    arg0->unk1B4 = 0x64;
    arg0->actionFunc = func_8098DEA0;
    arg0->actor.minVelocityY = -20.0f;
    arg0->actor.gravity = -1.5f;
    arg0->actor.speedXZ = 0.0f;
}

void func_8098DEA0(ObjComb *this, GlobalContext *globalCtx) {
    u16 temp_v0;

    temp_v0 = this->actor.bgCheckFlags;
    this->unk1B4 += -1;
    if (((temp_v0 & 1) != 0) || ((s32) this->unk1B4 <= 0)) {
        func_8098DA74(this, globalCtx);
        if (((this->actor.bgCheckFlags & 0x20) != 0) && (this->actor.yDistToWater > 30.0f)) {
            func_8098D47C(this, globalCtx);
        } else {
            func_8098D19C(this, globalCtx);
        }
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x28, 0x293CU);
        func_8098E098(this);
        return;
    }
    if ((temp_v0 & 0x40) != 0) {
        func_8098D6E0(this, globalCtx);
    }
    if ((this->actor.bgCheckFlags & 0x20) != 0) {
        this->actor.gravity = -0.5f;
        this->unk1AE = (s16) ((s32) this->unk1AE >> 1);
        this->unk1B0 = (s16) ((s32) this->unk1B0 >> 1);
        this->actor.velocity.y *= 0.8f;
    } else {
        this->actor.gravity = -1.5f;
        this->unk1AE += 0x1F4;
        this->actor.velocity.y *= 0.96f;
        if ((s32) this->unk1AE >= 0x7D1) {
            this->unk1AE = 0x7D0;
        }
        this->unk1B0 += 0xC8;
        if ((s32) this->unk1B0 >= 0x259) {
            this->unk1B0 = 0x258;
        }
        func_800B9010((Actor *) this, 0x20A0U);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    this->actor.shape.rot.x += this->unk1AE;
    this->actor.shape.rot.y += this->unk1B0;
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 12.0f, 0.0f, 5U);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk148);
}

void func_8098E098(ObjComb *arg0) {
    arg0->actor.draw = NULL;
    arg0->unk1B4 = 0x14;
    arg0->actionFunc = func_8098E0B8;
}

void func_8098E0B8(ObjComb *this, GlobalContext *globalCtx) {
    s8 temp_v0;

    this->unk1B4 += -1;
    temp_v0 = this->unk1B4;
    if ((s32) temp_v0 <= 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if ((temp_v0 == 0xA) && (this->unk1B6 != 0) && (this->unk1B5 == 2) && ((s32) this->actor.cutscene >= 0)) {
        this = this;
        if (ActorCutscene_GetCurrentIndex() == this->actor.cutscene) {
            func_800B7298(globalCtx, (Actor *) this, 4U);
        }
    }
}

void ObjComb_Update(ObjComb *this, GlobalContext *globalCtx) {
    s16 temp_v0_3;
    s8 temp_v0_2;
    u8 temp_v0;
    ObjComb *this = (ObjComb *) thisx;

    temp_v0 = this->unk148.base.acFlags;
    this->unk1B3 = (temp_v0 & 2) != 0;
    if (this->unk1B3 != 0) {
        this->unk148.base.acFlags = temp_v0 & 0xFFFD;
    }
    temp_v0_2 = this->unk1B2;
    if ((s32) temp_v0_2 > 0) {
        this->unk1B2 = temp_v0_2 - 1;
        if (this->unk1B2 == 0) {
            func_8098DE58(this);
        }
    }
    this->actionFunc(this, globalCtx);
    if (this->actor.update == 0) {
        if ((this->unk1B5 == 2) && (func_800F2138(this->actor.cutscene) == -1)) {
            ActorCutscene_Stop((s16) this->actor.cutscene);
            this->unk1B5 = 0;
            return;
        }
        /* Duplicate return node #21. Try simplifying control flow for better match */
        return;
    }
    if (this->unk1B5 != 0) {
        Actor_SetHeight((Actor *) this, 0.0f);
        if (this->unk1B5 == 1) {
            if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
                ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
                if ((s32) this->actor.cutscene >= 0) {
                    func_800B7298(globalCtx, (Actor *) this, 1U);
                }
                temp_v0_3 = this->actor.params;
                if ((((((s32) temp_v0_3 >> 0xE) & 2) | (((s32) temp_v0_3 >> 7) & 1)) == 1) && ((((s32) temp_v0_3 >> 4) & 1) != 0)) {
                    gSaveContext.weekEventReg[83] |= 2;
                }
                this->unk1B5 = 2;
            } else {
                ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
            }
        }
    }
    if (this->unk1B7 != 0) {
        globalCtx->actorCtx.unk5 |= 8;
        this->actor.flags |= 0x10;
    }
}

void ObjComb_Draw(ObjComb *this, GlobalContext *globalCtx) {
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    ObjComb *this = (ObjComb *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y + (118.0f * this->actor.scale.y), this->actor.world.pos.z, 0);
    Matrix_RotateY(this->actor.shape.rot.y, 1U);
    SysMatrix_InsertXRotation_s(this->actor.shape.rot.x, 1);
    SysMatrix_InsertZRotation_s(this->actor.shape.rot.z, 1);
    SysMatrix_InsertTranslation(0.0f, -(this->actor.scale.y * 118.0f), 0.0f, 1);
    Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, 1);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp20 = temp_v0;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06000CB0;
    temp_v0_2->words.w0 = 0xDE000000;
    Collider_UpdateSpheres(0, &this->unk148);
}
