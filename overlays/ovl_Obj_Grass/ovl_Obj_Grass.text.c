typedef struct ObjGrass {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ char pad144[0x2804];               /* maybe part of actor[32]? */
    /* 0x2948 */ ColliderCylinder unk2948;          /* inferred */
    /* 0x2994 */ char pad2994[0x8F4];               /* maybe part of unk2948[31]? */
    /* 0x3288 */ s16 unk3288;                       /* inferred */
    /* 0x328A */ s16 unk328A;                       /* inferred */
    /* 0x328C */ s16 unk328C;                       /* inferred */
    /* 0x328E */ s16 unk328E;                       /* inferred */
    /* 0x3290 */ s16 unk3290;                       /* inferred */
    /* 0x3292 */ char pad3292[0xE];                 /* maybe part of unk3290[8]? */
} ObjGrass;                                         /* size = 0x32A0 */

struct _mips2c_stack_ObjGrass_Destroy {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_ObjGrass_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjGrass_Init {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_ObjGrass_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A9110 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809A91FC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A92D0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A9314 {
    /* 0x00 */ char pad0[0xB0];
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
};                                                  /* size = 0xC8 */

struct _mips2c_stack_func_809A9790 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809A983C {
    /* 0x00 */ char pad0[0x48];
    /* 0x48 */ void **sp48;                         /* inferred */
    /* 0x4C */ char pad4C[0x34];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_809A9DB8 {
    /* 0x00 */ char pad0[0x6C];
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ char pad8C[0x4];
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ char pad98[0x8];                     /* maybe part of sp94[3]? */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ char padA8[0x10];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_809AA278 {
    /* 0x00 */ char pad0[0x70];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_809AA54C {
    /* 0x00 */ char pad0[0x48];
    /* 0x48 */ Vec3f *sp48;                         /* inferred */
    /* 0x4C */ ObjGrass *sp4C;                      /* inferred */
    /* 0x50 */ char pad50[0x20];                    /* maybe part of sp4C[9]? */
    /* 0x70 */ ? sp70;                              /* inferred */
    /* 0x70 */ char pad70[0x2];
    /* 0x72 */ s16 sp72;                            /* inferred */
    /* 0x74 */ char pad74[0x8];                     /* maybe part of sp72[5]? */
    /* 0x7C */ s32 sp7C;                            /* inferred */
    /* 0x80 */ char pad80[0xC];                     /* maybe part of sp7C[4]? */
    /* 0x8C */ ObjGrass *sp8C;                      /* inferred */
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_809AA798 {
    /* 0x00 */ char pad0[0x48];
    /* 0x48 */ void *sp48;                          /* inferred */
    /* 0x4C */ ObjGrass *sp4C;                      /* inferred */
    /* 0x50 */ char pad50[0x1C];                    /* maybe part of sp4C[8]? */
    /* 0x6C */ ? sp6C;                              /* inferred */
    /* 0x6C */ char pad6C[0x2];
    /* 0x6E */ s16 sp6E;                            /* inferred */
    /* 0x70 */ char pad70[0x8];                     /* maybe part of sp6E[5]? */
    /* 0x78 */ s32 sp78;                            /* inferred */
    /* 0x7C */ char pad7C[0x8];                     /* maybe part of sp78[3]? */
    /* 0x84 */ ObjGrass *sp84;                      /* inferred */
};                                                  /* size = 0x88 */

s32 func_809A9110(GlobalContext *arg0, Vec3f *arg1); /* static */
void func_809A91FC(f32 *arg0);                      /* static */
void func_809A92D0(Vec3f *arg0, GlobalContext *arg1); /* static */
void func_809A9314(Vec3f *arg0, GlobalContext *arg1); /* static */
void func_809A9790(ObjGrass *arg0, GlobalContext *arg1); /* static */
void func_809A983C(ObjGrass *arg0, GlobalContext *arg1); /* static */
void func_809A9DB8(ObjGrass *arg0);                 /* static */
void func_809AA278(ObjGrass *arg0, GlobalContext *arg1); /* static */
void func_809AA54C(ObjGrass *arg0, GlobalContext *arg1); /* static */
void func_809AA798(ObjGrass *arg0, GraphicsContext **arg1); /* static */
extern ? func_809AAE60;
static ? D_809AA9F0;                                /* unable to generate initializer */
static ? D_809AAA68;                                /* unable to generate initializer */
static ? D_809AAAE0;                                /* unable to generate initializer */
static ColliderCylinderInit D_809AAB20 = {
    {0xA, 0, 9, 0x29, 0x20, 1},
    {0, {0, 0, 0}, {0x580C71C, 0, 0}, 0, 1, 1},
    {6, 0x2C, 0, {0, 0, 0}},
};
static ? D_809AAB4C;                                /* unable to generate initializer */
static ? D_809AAB7C;                                /* unable to generate initializer */
static ? D_809AAB8C;                                /* unable to generate initializer */
static ? D_809AAB94;                                /* unable to generate initializer */
static void *D_809AADA0;
static f32 D_809AADB0;
static void *D_809AADC0[20];
static f32 D_809AAE10[20];

s32 func_809A9110(GlobalContext *arg0, Vec3f *arg1) {
    f32 sp2C;
    f32 sp20;

    SkinMatrix_Vec3fMtxFMultXYZW(arg0 + 0x187B0, arg1, (Vec3f *) &sp20, &sp2C);
    if ((arg0->unk_187F0.z * -130.13191f) < sp28) {
        if (sp2C < 1.0f) {
            sp2C = 1.0f;
        }
        if (((fabsf(sp20) - (130.13191f * arg0->unk_187F0.x)) < sp2C) && ((fabsf(sp24) - (130.13191f * arg0->unk_187F0.y)) < sp2C)) {
            return 1;
        }
        goto block_6;
    }
block_6:
    return 0;
}

void func_809A91FC(f32 *arg0) {
    MtxF *temp_v0;
    MtxF *temp_v1;
    f32 *temp_a0;
    f32 temp_f18;
    f32 temp_f18_2;
    s32 temp_a1;
    void *temp_a0_2;
    void *temp_v1_2;
    f32 phi_f18;
    f32 *phi_a0;
    MtxF *phi_v1;
    s32 phi_a1;
    f32 phi_f18_2;
    f32 *phi_a0_2;
    MtxF *phi_v1_2;

    temp_v0 = SysMatrix_GetCurrentState();
    temp_f18 = temp_v0->mf[0][0];
    phi_f18 = temp_f18;
    phi_a0 = arg0;
    phi_v1 = temp_v0;
    phi_a1 = 4;
    phi_f18_2 = temp_f18;
    phi_a0_2 = arg0;
    phi_v1_2 = temp_v0;
    if (4 != 0x10) {
        do {
            temp_f18_2 = phi_v1->mf[1][0];
            temp_a1 = phi_a1 + 4;
            phi_v1->mf[0][0] = phi_f18 + phi_a0->unk0;
            temp_a0 = phi_a0 + 0x10;
            temp_v1 = phi_v1 + 0x10;
            temp_v1->unk-C = (f32) (phi_v1->mf[0][1] + phi_a0->unk4);
            temp_v1->unk-8 = (f32) (phi_v1->mf[0][2] + temp_a0->unk-8);
            temp_v1->unk-4 = (f32) (phi_v1->mf[0][3] + temp_a0->unk-4);
            phi_f18 = temp_f18_2;
            phi_a0 = temp_a0;
            phi_v1 = temp_v1;
            phi_a1 = temp_a1;
            phi_f18_2 = temp_f18_2;
            phi_a0_2 = temp_a0;
            phi_v1_2 = temp_v1;
        } while (temp_a1 != 0x10);
    }
    temp_a0_2 = phi_a0_2 + 0x10;
    temp_v1_2 = phi_v1_2 + 0x10;
    temp_v1_2->unk-10 = (f32) (phi_f18_2 + *phi_a0_2);
    temp_v1_2->unk-C = (f32) (phi_v1_2->mf[0][1] + temp_a0_2->unk-C);
    temp_v1_2->unk-8 = (f32) (phi_v1_2->mf[0][2] + temp_a0_2->unk-8);
    temp_v1_2->unk-4 = (f32) (phi_v1_2->mf[0][3] + temp_a0_2->unk-4);
}

void func_809A92D0(Vec3f *arg0, GlobalContext *arg1) {
    s8 temp_v0;

    temp_v0 = arg0->unkE;
    if ((temp_v0 & 0x10) == 0) {
        Item_DropCollectibleRandom(arg1, NULL, arg0, (s16) ((s32) (temp_v0 << 0x14) >> 0x10));
    }
}

void func_809A9314(Vec3f *arg0, GlobalContext *arg1) {
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    ? *temp_s0;
    f32 *temp_s2;
    f32 *temp_s4;
    ? *phi_s0;

    temp_s4 = &spBC;
    temp_s2 = &spB0;
    phi_s0 = &D_809AAB4C;
    do {
        spB0 = arg0->x + (phi_s0->unk0 * 8.0f);
        spB4 = arg0->y + (phi_s0->unk4 * 8.0f) + 10.0f;
        spB8 = arg0->z + (phi_s0->unk8 * 8.0f);
        spBC = (Rand_ZeroOne() - 0.5f) * 8.0f;
        spC0 = Rand_ZeroOne() * 10.0f;
        spC4 = (Rand_ZeroOne() - 0.5f) * 8.0f;
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s2, (Vec3f *) temp_s4, (Vec3f *) temp_s2, (s16) -0x64, (s16) 0x40, (s16) 0x28, (s16) 3, (s16) 0, (s16) (s32) *(&D_809AAB7C + (((s32) (Rand_ZeroOne() * 111.1f) & 7) * 2)), (s16) 0, (s16) 0, 0x50, (s16) -1, (s16) 1, (Gfx *) &D_040527F0);
        spB0 = arg0->x + (phi_s0->unk0 * 16.0f);
        spB4 = arg0->y + (phi_s0->unk4 * 16.0f) + 10.0f;
        spB8 = arg0->z + (phi_s0->unk8 * 16.0f);
        spBC = (Rand_ZeroOne() - 0.5f) * 6.0f;
        spC0 = Rand_ZeroOne() * 10.0f;
        spC4 = (Rand_ZeroOne() - 0.5f) * 6.0f;
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s2, (Vec3f *) temp_s4, (Vec3f *) temp_s2, (s16) -0x64, (s16) 0x40, (s16) 0x28, (s16) 3, (s16) 0, (s16) (s32) *(&D_809AAB7C + (((s32) (Rand_ZeroOne() * 111.1f) % 7) * 2)), (s16) 0, (s16) 0, 0x50, (s16) -1, (s16) 1, (Gfx *) &D_040528B0);
        temp_s0 = phi_s0 + 0xC;
        phi_s0 = temp_s0;
    } while (temp_s0 != &D_809AAB7C);
}

void ObjGrass_Init(ObjGrass *this, GlobalContext *globalCtx) {
    s32 temp_s1;
    ColliderCylinder *phi_s0;
    s32 phi_s1;
    ObjGrass *this = (ObjGrass *) thisx;

    Actor_SetScale((Actor *) this, 0.4f);
    phi_s0 = &this->unk2948;
    phi_s1 = 0;
    do {
        Collider_InitCylinder(globalCtx, phi_s0);
        Collider_SetCylinder(globalCtx, phi_s0, (Actor *) this, &D_809AAB20);
        temp_s1 = phi_s1 + 0x50;
        phi_s0 += 0x50;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x640);
    this->actor.colChkInfo.mass = 0xFF;
    this->unk3288 = (s16) (Rand_Next() >> 0x10);
    this->unk328A = (s16) (Rand_Next() >> 0x10);
    this->unk328C = (s16) (Rand_Next() >> 0x10);
    this->unk328E = (s16) (Rand_Next() >> 0x10);
    this->unk3290 = (s16) (Rand_Next() >> 0x10);
}

void ObjGrass_Destroy(ObjGrass *this, GlobalContext *globalCtx) {
    s32 temp_a0;
    s32 temp_s0;
    void **temp_v0;
    ColliderCylinder *phi_s1;
    s32 phi_s0;
    ObjGrass *phi_v1;
    s32 phi_a0;
    ObjGrass *this = (ObjGrass *) thisx;

    phi_s1 = &this->unk2948;
    phi_s0 = 0;
    do {
        Collider_DestroyCylinder(globalCtx, phi_s1);
        temp_s0 = phi_s0 + 0x50;
        phi_s1 += 0x50;
        phi_s0 = temp_s0;
    } while (temp_s0 < 0x640);
    phi_v1 = this;
    phi_a0 = 0;
    do {
        temp_a0 = phi_a0 + 4;
        temp_v0 = phi_v1 + 0x3298;
        phi_a0 = temp_a0;
        if (phi_v1->unk3298 != 0) {
            (*temp_v0)->unk190 = 0;
            *temp_v0 = NULL;
        }
        phi_v1 += 4;
    } while (temp_a0 != 8);
}

void func_809A9790(ObjGrass *arg0, GlobalContext *arg1) {
    Vec3f *temp_s0;
    s32 temp_s2;
    ObjGrass *phi_s1;
    s32 phi_s2;

    phi_s1 = arg0;
    phi_s2 = 0;
    do {
        temp_s0 = phi_s1->unk2994;
        if ((temp_s0 != 0) && ((phi_s1->unk2948.base.acFlags & 2) != 0)) {
            func_809A9314(temp_s0, arg1);
            func_809A92D0(temp_s0, arg1);
            temp_s0->unkF = (u8) (temp_s0->unkF | 4);
            Audio_PlaySoundAtPosition(arg1, temp_s0, 0x14, 0x284EU);
        }
        temp_s2 = phi_s2 + 0x50;
        phi_s1 += 0x50;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x640);
}

void func_809A983C(ObjGrass *arg0, GlobalContext *arg1) {
    void **sp48;
    CollisionCheckContext *temp_s4_3;
    ObjGrass *temp_a2;
    Vec3f *temp_s3_2;
    Vec3f *temp_s5;
    f32 *temp_a1;
    f32 *temp_a2_3;
    f32 *temp_v1;
    f32 *temp_v1_3;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_v0_3;
    s16 temp_v1_5;
    s32 *temp_v0_5;
    s32 *temp_v0_7;
    s32 temp_a0_2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s2_3;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 temp_s5_2;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t1;
    s32 temp_t1_2;
    u32 temp_v0;
    u32 temp_v0_2;
    void **temp_a0;
    void **temp_s3;
    void **temp_t4;
    void *temp_s0_3;
    void *temp_s1;
    void *temp_s6;
    void *temp_s7;
    void *temp_v0_4;
    void *temp_v0_6;
    void *temp_v0_8;
    void *temp_v1_2;
    void *temp_v1_4;
    void **phi_s3;
    f32 *phi_v0;
    void **phi_a0;
    f32 *phi_v0_2;
    ObjGrass *phi_v1;
    void *phi_v0_3;
    s32 phi_s2;
    s32 phi_s4;
    s32 phi_v0_4;
    s32 phi_v0_5;
    Vec3f *phi_s1;
    f32 *phi_a1;
    s32 phi_s2_2;
    s32 phi_s2_3;
    f32 *phi_v1_2;
    s32 *phi_v0_6;
    s32 phi_s0;
    void *phi_v1_3;
    void *phi_v0_7;
    f32 *phi_a1_2;
    s32 phi_a2;
    s32 phi_s4_2;
    void *phi_s4_3;
    f32 *phi_a2_2;
    s32 phi_s0_2;
    s32 phi_s0_3;
    f32 *phi_v1_4;
    s32 *phi_v0_8;
    s32 phi_a0_2;
    void *phi_v1_5;
    void *phi_v0_9;
    f32 *phi_a2_3;
    s32 phi_a3;
    s32 phi_v0_10;
    s32 phi_s2_4;
    ObjGrass *phi_s2_5;
    void **phi_s3_2;
    Collider *phi_s1_2;
    s32 phi_s5;
    s32 phi_s0_4;
    s32 phi_a2_4;
    s32 phi_a0_3;
    s32 phi_a3_2;

    temp_a2 = arg0;
    temp_s7 = arg1->actorCtx.actorList[2].first;
    phi_s3 = D_809AADC0;
    phi_v0 = D_809AAE10;
    do {
        temp_v0 = phi_v0 + 4;
        temp_s3 = phi_s3 + 4;
        temp_s3->unk-4 = 0;
        temp_v0->unk-4 = 422500.0f;
        phi_s3 = temp_s3;
        phi_v0 = (f32 *) temp_v0;
    } while (temp_v0 < (u32) &func_809AAE60);
    phi_a0 = &D_809AADA0;
    phi_v0_2 = &D_809AADB0;
    do {
        temp_v0_2 = phi_v0_2 + 4;
        temp_a0 = phi_a0 + 4;
        temp_a0->unk-4 = 0;
        temp_v0_2->unk-4 = 422500.0f;
        phi_a0 = temp_a0;
        phi_v0_2 = (f32 *) temp_v0_2;
    } while (temp_v0_2 < (u32) D_809AADC0);
    temp_v0_3 = temp_a2->unk2944;
    phi_v1 = temp_a2;
    phi_s4 = 0;
    phi_v0_5 = (s32) temp_v0_3;
    phi_v0_4 = (s32) temp_v0_3;
    if ((s32) temp_v0_3 > 0) {
        do {
            temp_s4 = phi_s4 + 1;
            temp_s1 = phi_v1 + 0x144;
            phi_s2 = 0;
            phi_s4 = temp_s4;
            if ((s32) phi_v1->unk240 > 0) {
                phi_v0_3 = temp_s1;
                do {
                    temp_s2 = phi_s2 + 1;
                    temp_v0_4 = phi_v0_3 + 0x14;
                    temp_v0_4->unk7 = (s8) (phi_v0_3->unk1B & 0xFFFD);
                    phi_v0_3 = temp_v0_4;
                    phi_s2 = temp_s2;
                } while (temp_s2 < (s32) temp_s1->unkFC);
                phi_v0_4 = (s32) temp_a2->unk2944;
            }
            phi_v1 += 0x100;
            phi_v0_5 = phi_v0_4;
        } while (temp_s4 < phi_v0_4);
    }
    arg0 = temp_a2;
    phi_s4_2 = 0;
    if (phi_v0_5 > 0) {
        arg0 = temp_a2;
        phi_s1 = temp_a2 + 0x144;
        do {
            temp_f0 = Math3D_DistanceSquared(phi_s1, temp_s7 + 0x24);
            phi_a1 = &D_809AADB0;
            phi_s2_2 = 0;
            phi_a2_4 = 0;
loop_14:
            phi_s2_3 = phi_s2_2;
            phi_a1_2 = phi_a1;
            phi_a2 = phi_a2_4;
            if (!(temp_f0 < *phi_a1)) {
                temp_s2_2 = phi_s2_2 + 1;
                temp_a2_2 = phi_a2_4 + 4;
                temp_a1 = phi_a1 + 4;
                phi_a1 = temp_a1;
                phi_s2_2 = temp_s2_2;
                phi_s2_3 = temp_s2_2;
                phi_a1_2 = temp_a1;
                phi_a2 = temp_a2_2;
                phi_a2_4 = temp_a2_2;
                if (temp_s2_2 != 4) {
                    goto loop_14;
                }
            }
            if (phi_s2_3 < 4) {
                phi_s0 = 2;
                phi_s0_4 = 2;
                if (phi_s2_3 < 3) {
                    temp_t0 = -(s32) (((2 - phi_s2_3) + 1) & 3);
                    if (temp_t0 != 0) {
                        temp_a3 = 2 * 4;
                        phi_v1_2 = temp_a3 + &D_809AADB0;
                        phi_v0_6 = &D_809AADA0 + temp_a3;
                        do {
                            temp_s0 = phi_s0 - 1;
                            temp_v1 = phi_v1_2 - 4;
                            temp_v0_5 = phi_v0_6 - 4;
                            temp_v1->unk8 = (f32) *phi_v1_2;
                            temp_v0_5->unk8 = (s32) *phi_v0_6;
                            phi_v1_2 = temp_v1;
                            phi_v0_6 = temp_v0_5;
                            phi_s0 = temp_s0;
                            phi_s0_4 = temp_s0;
                        } while ((temp_t0 + 2) != temp_s0);
                        if ((temp_s0 + 1) != phi_s2_3) {
                            goto block_22;
                        }
                    } else {
block_22:
                        temp_a3_2 = phi_s0_4 * 4;
                        phi_v1_3 = temp_a3_2 + &D_809AADB0;
                        phi_v0_7 = &D_809AADA0 + temp_a3_2;
                        do {
                            temp_v0_6 = phi_v0_7 - 0x10;
                            temp_v1_2 = phi_v1_3 - 0x10;
                            temp_v1_2->unk10 = (f32) phi_v1_3->unk-4;
                            temp_v0_6->unk10 = (s32) phi_v0_7->unk-4;
                            temp_v1_2->unkC = (f32) phi_v1_3->unk-8;
                            temp_v0_6->unkC = (s32) phi_v0_7->unk-8;
                            temp_v1_2->unk8 = (f32) phi_v1_3->unk-C;
                            temp_v0_6->unk8 = (s32) phi_v0_7->unk-C;
                            temp_v1_2->unk14 = (f32) phi_v1_3->unk0;
                            temp_v0_6->unk14 = (s32) phi_v0_7->unk0;
                            phi_v1_3 = temp_v1_2;
                            phi_v0_7 = temp_v0_6;
                        } while (temp_v0_6 != (((phi_s2_3 - 1) * 4) + &D_809AADA0));
                    }
                }
                *phi_a1_2 = temp_f0;
                *(&D_809AADA0 + phi_a2) = phi_s1;
            }
            temp_s4_2 = phi_s4_2 + 1;
            phi_s1 += 0x100;
            phi_s4_2 = temp_s4_2;
        } while (temp_s4_2 < (s32) arg0->unk2944);
    }
    arg0->unk3294 = NULL;
    sp48 = &D_809AADA0;
    do {
        temp_s6 = *sp48;
        if (temp_s6 != 0) {
            phi_s4_3 = temp_s6;
            phi_s2_4 = 0;
            if ((s32) temp_s6->unkFC > 0) {
                do {
                    temp_s3_2 = phi_s4_3 + 0xC;
                    temp_s5 = temp_s7 + 0x24;
                    if ((phi_s4_3->unk1B & 4) == 0) {
                        temp_f0_2 = Math3D_DistanceSquared(temp_s3_2, temp_s5);
                        phi_a2_2 = D_809AAE10;
                        phi_s0_2 = 0;
                        phi_a3_2 = 0;
loop_31:
                        phi_s0_3 = phi_s0_2;
                        phi_a2_3 = phi_a2_2;
                        phi_a3 = phi_a3_2;
                        if (!(temp_f0_2 < *phi_a2_2)) {
                            temp_s0_2 = phi_s0_2 + 1;
                            temp_a3_3 = phi_a3_2 + 4;
                            temp_a2_3 = phi_a2_2 + 4;
                            phi_a2_2 = temp_a2_3;
                            phi_s0_2 = temp_s0_2;
                            phi_s0_3 = temp_s0_2;
                            phi_a2_3 = temp_a2_3;
                            phi_a3 = temp_a3_3;
                            phi_a3_2 = temp_a3_3;
                            if (temp_s0_2 != 0x14) {
                                goto loop_31;
                            }
                        }
                        if (phi_s0_3 < 0x14) {
                            phi_a0_2 = 0x12;
                            phi_a0_3 = 0x12;
                            if (phi_s0_3 < 0x13) {
                                temp_t0_2 = -(s32) (((0x12 - phi_s0_3) + 1) & 3);
                                if (temp_t0_2 != 0) {
                                    temp_t1 = 0x12 * 4;
                                    phi_v1_4 = temp_t1 + D_809AAE10;
                                    phi_v0_8 = temp_t1 + D_809AADC0;
                                    do {
                                        temp_a0_2 = phi_a0_2 - 1;
                                        temp_v1_3 = phi_v1_4 - 4;
                                        temp_v0_7 = phi_v0_8 - 4;
                                        temp_v1_3->unk8 = (f32) *phi_v1_4;
                                        temp_v0_7->unk8 = (s32) *phi_v0_8;
                                        phi_v1_4 = temp_v1_3;
                                        phi_v0_8 = temp_v0_7;
                                        phi_a0_2 = temp_a0_2;
                                        phi_a0_3 = temp_a0_2;
                                    } while ((temp_t0_2 + 0x12) != temp_a0_2);
                                    if ((temp_a0_2 + 1) != phi_s0_3) {
                                        goto block_39;
                                    }
                                } else {
block_39:
                                    temp_t1_2 = phi_a0_3 * 4;
                                    phi_v1_5 = temp_t1_2 + D_809AAE10;
                                    phi_v0_9 = temp_t1_2 + D_809AADC0;
                                    do {
                                        temp_v0_8 = phi_v0_9 - 0x10;
                                        temp_v1_4 = phi_v1_5 - 0x10;
                                        temp_v1_4->unk10 = (f32) phi_v1_5->unk-4;
                                        temp_v0_8->unk10 = (s32) phi_v0_9->unk-4;
                                        temp_v1_4->unkC = (f32) phi_v1_5->unk-8;
                                        temp_v0_8->unkC = (s32) phi_v0_9->unk-8;
                                        temp_v1_4->unk8 = (f32) phi_v1_5->unk-C;
                                        temp_v0_8->unk8 = (s32) phi_v0_9->unk-C;
                                        temp_v1_4->unk14 = (f32) phi_v1_5->unk0;
                                        temp_v0_8->unk14 = (s32) phi_v0_9->unk0;
                                        phi_v1_5 = temp_v1_4;
                                        phi_v0_9 = temp_v0_8;
                                    } while (temp_v0_8 != (((phi_s0_3 - 1) * 4) + D_809AADC0));
                                }
                            }
                            *phi_a2_3 = temp_f0_2;
                            *(D_809AADC0 + phi_a3) = temp_s3_2;
                            if (temp_f0_2 < 2500.0f) {
                                temp_v1_5 = temp_s7->shape.rot.y - Math_Vec3f_Yaw(temp_s5, temp_s3_2);
                                phi_v0_10 = (s32) temp_v1_5;
                                if ((s32) temp_v1_5 < 0) {
                                    phi_v0_10 = -(s32) temp_v1_5;
                                }
                                if (phi_v0_10 < 0x2000) {
                                    arg0->unk3294 = temp_s3_2;
                                }
                            }
                        }
                    }
                    temp_s2_3 = phi_s2_4 + 1;
                    phi_s4_3 += 0x14;
                    phi_s2_4 = temp_s2_3;
                } while (temp_s2_3 < (s32) temp_s6->unkFC);
            }
        }
        temp_t4 = sp48 + 4;
        sp48 = temp_t4;
    } while ((u32) temp_t4 < (u32) &D_809AADB0);
    phi_s2_5 = arg0;
    phi_s3_2 = D_809AADC0;
    phi_s1_2 = arg0 + 0x2948;
    phi_s5 = 0;
    do {
        phi_s2_5->unk2948.base.acFlags &= 0xFFFD;
        phi_s2_5->unk2948.base.ocFlags1 &= 0xFFFD;
        temp_s0_3 = *phi_s3_2;
        if (temp_s0_3 != 0) {
            temp_s4_3 = arg1 + 0x18884;
            phi_s1_2->unk46 = (s16) (s32) temp_s0_3->unk0;
            phi_s1_2->unk48 = (s16) (s32) temp_s0_3->unk4;
            phi_s1_2->unk4A = (s16) (s32) temp_s0_3->unk8;
            CollisionCheck_SetAC(arg1, temp_s4_3, phi_s1_2);
            CollisionCheck_SetOC(arg1, temp_s4_3, phi_s1_2);
            temp_s0_3->unkF = (u8) (temp_s0_3->unkF | 2);
            phi_s1_2->unk4C = temp_s0_3;
        } else {
            phi_s1_2->unk4C = NULL;
        }
        temp_s5_2 = phi_s5 + 0x50;
        phi_s2_5 += 0x50;
        phi_s3_2 += 4;
        phi_s1_2 += 0x50;
        phi_s5 = temp_s5_2;
    } while (temp_s5_2 != 0x640);
}

void func_809A9DB8(ObjGrass *arg0) {
    f32 spA4;
    f32 spA0;
    f32 sp94;
    f32 sp90;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    ObjGrass *temp_v0;
    f32 *temp_a1;
    f32 *temp_a2;
    f32 *temp_a3;
    f32 *temp_t0;
    f32 *temp_t1;
    f32 *temp_t3;
    f32 *temp_v1;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s32 temp_t2;
    ObjGrass *phi_v0;
    s32 phi_a0;

    arg0->unk3288 += 0x46;
    arg0->unk328A += 0x12C;
    arg0->unk328C += 0x2BC;
    arg0->unk328E += 0x514;
    arg0->unk3290 += 0x22C4;
    temp_f24 = Math_SinS(arg0->unk3288);
    temp_f28 = Math_SinS(arg0->unk328A);
    temp_f26 = Math_SinS(arg0->unk328C);
    spA4 = Math_SinS(arg0->unk328E) * 1.2f;
    spA0 = Math_SinS(arg0->unk3290) * 1.5f;
    temp_f22 = Math_CosS(arg0->unk3288);
    temp_f20 = Math_CosS(arg0->unk328A);
    sp94 = Math_CosS(arg0->unk328C);
    temp_f14 = Math_CosS(arg0->unk328E) * 1.3f;
    sp90 = temp_f14;
    temp_f16 = Math_CosS(arg0->unk3290) * 1.7f;
    temp_f14_2 = temp_f14;
    temp_v1 = &sp6C;
    temp_f18 = spA4 - temp_f20;
    sp6C = (temp_f24 - temp_f20) * temp_f26 * temp_f22 * temp_f24 * 0.0015f;
    sp70 = (temp_f28 - sp94) * spA4 * temp_f20 * temp_f24 * 0.0015f;
    sp74 = (temp_f26 - temp_f14_2) * sp94 * temp_f24 * temp_f22 * 0.0015f;
    sp78 = temp_f18 * temp_f14_2 * temp_f28 * temp_f22 * 0.0015f;
    sp7C = (temp_f24 - sp94) * temp_f24 * temp_f28 * spA0 * 0.0015f;
    sp80 = (temp_f28 - temp_f14_2) * temp_f26 * spA4 * spA0 * 0.0015f;
    sp84 = (temp_f26 - temp_f22) * temp_f22 * temp_f20 * temp_f16 * 0.0015f;
    sp88 = temp_f18 * sp94 * temp_f14_2 * temp_f16 * 0.0015f;
    phi_v0 = arg0;
    phi_a0 = 0;
    do {
        temp_t1 = &temp_v1[(phi_a0 + 1) & 7];
        temp_t2 = phi_a0 + 4;
        temp_a3 = &temp_v1[(phi_a0 + 2) & 7];
        temp_a1 = &temp_v1[(phi_a0 + 3) & 7];
        temp_a2 = &temp_v1[temp_t2 & 7];
        temp_f2 = *temp_a3;
        phi_v0->unk2F88 = sp70 * 0.2f;
        phi_v0->unk2F94 = 0.0f;
        phi_v0->unk2F8C = temp_v1[phi_a0 & 7];
        phi_v0->unk2F90 = *temp_t1;
        phi_v0->unk2F98 = temp_f2;
        phi_v0->unk2FA4 = 0.0f;
        phi_v0->unk2FA0 = temp_f2;
        phi_v0->unk2FA8 = *temp_a1;
        phi_v0->unk2FAC = *temp_a2;
        phi_v0->unk2F9C = sp6C;
        phi_v0->unk2FB4 = 0.0f;
        phi_v0->unk2FB8 = 0.0f;
        phi_v0->unk2FBC = 0.0f;
        phi_v0->unk2FC0 = 0.0f;
        phi_v0->unk2FC4 = 0.0f;
        phi_v0->unk2FB0 = sp78 * 0.2f;
        temp_t0 = &temp_v1[(phi_a0 + 5) & 7];
        temp_f2_2 = *temp_a1;
        phi_v0->unk2FD4 = 0.0f;
        phi_v0->unk2FD8 = temp_f2_2;
        phi_v0->unk2FC8 = sp70 * 0.2f;
        phi_v0->unk2FD0 = *temp_a3;
        phi_v0->unk2FCC = *temp_t1;
        phi_v0->unk2FE4 = 0.0f;
        phi_v0->unk2FEC = *temp_t0;
        phi_v0->unk2FE8 = *temp_a2;
        phi_v0->unk2FE0 = temp_f2_2;
        phi_v0->unk2FDC = sp6C;
        phi_v0->unk3004 = 0.0f;
        phi_v0->unk3000 = 0.0f;
        phi_v0->unk2FFC = 0.0f;
        phi_v0->unk2FF8 = 0.0f;
        phi_v0->unk2FF4 = 0.0f;
        phi_v0->unk2FF0 = sp78 * 0.2f;
        temp_t3 = &temp_v1[(phi_a0 + 6) & 7];
        temp_f2_3 = *temp_a2;
        phi_v0->unk3014 = 0.0f;
        phi_v0->unk3018 = temp_f2_3;
        phi_v0->unk3008 = sp70 * 0.2f;
        phi_v0->unk3010 = *temp_a1;
        phi_v0->unk300C = *temp_a3;
        phi_v0->unk3024 = 0.0f;
        phi_v0->unk302C = *temp_t3;
        phi_v0->unk3028 = *temp_t0;
        phi_v0->unk3020 = temp_f2_3;
        phi_v0->unk301C = sp6C;
        phi_v0->unk3044 = 0.0f;
        phi_v0->unk3040 = 0.0f;
        phi_v0->unk303C = 0.0f;
        phi_v0->unk3038 = 0.0f;
        phi_v0->unk3034 = 0.0f;
        phi_v0->unk3030 = sp78 * 0.2f;
        temp_f2_4 = *temp_t0;
        phi_v0->unk3054 = 0.0f;
        phi_v0->unk3058 = temp_f2_4;
        phi_v0->unk3048 = sp70 * 0.2f;
        phi_v0->unk3050 = *temp_a2;
        phi_v0->unk304C = *temp_a1;
        phi_v0->unk3064 = 0.0f;
        phi_v0->unk306C = temp_v1[(phi_a0 + 7) & 7];
        phi_v0->unk3068 = *temp_t3;
        phi_v0->unk3060 = temp_f2_4;
        phi_v0->unk305C = sp6C;
        phi_v0->unk3084 = 0.0f;
        phi_v0->unk3080 = 0.0f;
        phi_v0->unk307C = 0.0f;
        phi_v0->unk3078 = 0.0f;
        phi_v0->unk3074 = 0.0f;
        temp_v0 = phi_v0 + 0x100;
        temp_v0->unk2F70 = sp78 * 0.2f;
        phi_v0 = temp_v0;
        phi_a0 = temp_t2;
    } while (temp_t2 != 0xC);
}

void ObjGrass_Update(ObjGrass *this, GlobalContext *globalCtx) {
    ObjGrass *this = (ObjGrass *) thisx;
    func_809A9790(this, globalCtx);
    func_809A983C(this, globalCtx);
    func_809A9DB8(this);
}

void func_809AA278(ObjGrass *arg0, GlobalContext *arg1) {
    Vec3f *temp_s6;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f22;
    s32 temp_fp;
    s32 temp_s2;
    Vec3f *phi_s6;
    Vec3f *phi_s1;
    Vec3f *phi_s0;
    s32 phi_s2;
    s32 phi_fp;

    temp_s6 = arg0 + 0x144;
    phi_s6 = temp_s6;
    phi_fp = 0;
    if ((s32) arg0->unk2944 > 0) {
        arg0 = arg0;
        do {
            temp_f0 = Math3D_DistanceSquared(phi_s6, (arg1 + (arg1->activeCamera * 4))->unk800 + 0x5C);
            temp_f22 = temp_f0;
            if ((temp_f0 < 1638400.0f) && (func_809A9110(arg1, phi_s6) != 0)) {
                phi_s6->unkFE = (u8) (phi_s6->unkFE | 1);
                phi_s2 = 0;
                if ((s32) phi_s6->unkFC > 0) {
                    phi_s1 = phi_s6;
                    phi_s0 = phi_s6 + 0xC;
                    do {
                        if ((phi_s1->unk1B & 4) != 0) {
                            phi_s0->unk10 = 0xFF;
                            phi_s0->unkF = (u8) (phi_s0->unkF & ~1);
                        } else {
                            phi_s0->unkF = (u8) (phi_s0->unkF | 1);
                            if (temp_f22 < 960400.0f) {
                                phi_s0->unk10 = 0xFF;
                            } else {
                                temp_f0_2 = Math3D_DistanceSquared(phi_s0, (arg1 + (arg1->activeCamera * 4))->unk800 + 0x5C);
                                if ((temp_f0_2 <= 1166400.0f) || (((phi_s0->unkF & 8) != 0) && (temp_f0_2 < 1392400.0f))) {
                                    phi_s0->unk10 = 0xFF;
                                } else if (temp_f0_2 >= 1392400.0f) {
                                    phi_s0->unk10 = 0;
                                } else {
                                    phi_s0->unk10 = (s8) (u32) ((1180.0f - sqrtf(temp_f0_2)) * 2.55f);
                                }
                            }
                        }
                        temp_s2 = phi_s2 + 1;
                        phi_s1 += 0x14;
                        phi_s0 += 0x14;
                        phi_s2 = temp_s2;
                    } while (temp_s2 < (s32) phi_s6->unkFC);
                }
            } else {
                phi_s6->unkFE = (u8) (phi_s6->unkFE & ~1);
            }
            temp_fp = phi_fp + 1;
            phi_s6 += 0x100;
            phi_fp = temp_fp;
        } while (temp_fp < (s32) arg0->unk2944);
    }
}

void func_809AA54C(ObjGrass *arg0, GlobalContext *arg1) {
    ObjGrass *sp8C;
    s32 sp7C;
    s16 sp72;
    ? sp70;
    ObjGrass *sp4C;
    Vec3f *sp48;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s4;
    Lights *temp_s0;
    Lights *temp_v0_3;
    s32 temp_s3;
    s32 temp_v1;
    void *temp_s0_2;
    ObjGrass *phi_v0;
    s32 phi_v1;
    Vec3f *phi_a2;
    Vec3f *phi_s2;
    s32 phi_s3;

    sp8C = arg0;
    sp70.unk0 = (s32) D_809AAB8C.unk0;
    sp70.unk4 = (u16) D_809AAB8C.unk4;
    temp_a0 = arg1->state.gfxCtx;
    temp_s4 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s4->polyOpa.p;
    temp_s4->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w1 = -1;
    temp_v0->words.w0 = 0xFA000000;
    temp_v0_2 = temp_s4->polyOpa.p;
    temp_s4->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = (u32) &D_809AA9F0;
    phi_v0 = arg0;
    phi_v1 = 0;
    phi_a2 = arg0 + 0x144;
    if ((s32) arg0->unk2944 > 0) {
        do {
            sp4C = phi_v0;
            sp7C = phi_v1;
            sp48 = phi_a2;
            phi_s3 = 0;
            if ((phi_v0->unk242 & 1) != 0) {
                sp48 = phi_a2;
                sp7C = phi_v1;
                sp4C = phi_v0;
                temp_v0_3 = LightContext_NewLights(arg1 + 0x818, arg1->state.gfxCtx);
                temp_s0 = temp_v0_3;
                Lights_BindAll(temp_v0_3, arg1->lightCtx.listHead, phi_a2, arg1);
                Lights_Draw(temp_s0, arg1->state.gfxCtx);
                phi_s2 = sp48;
                if ((s32) sp48->unkFC > 0) {
                    do {
                        temp_s0_2 = phi_s2 + 0xC;
                        if (((phi_s2->unk1B & 1) != 0) && (temp_s0_2->unk10 == 0xFF)) {
                            sp72 = temp_s0_2->unkC;
                            SysMatrix_SetStateRotationAndTranslation(temp_s0_2->unk0, temp_s0_2->unk4, temp_s0_2->unk8, (Vec3s *) &sp70);
                            Matrix_Scale(arg0->actor.scale.x, arg0->actor.scale.y, arg0->actor.scale.z, 1);
                            if ((temp_s0_2->unkF & 2) != 0) {
                                func_809A91FC(arg0 + (phi_s3 << 6) + 0x2F88);
                            }
                            temp_v0_4 = temp_s4->polyOpa.p;
                            temp_s4->polyOpa.p = temp_v0_4 + 8;
                            temp_v0_4->words.w0 = 0xDA380003;
                            temp_v0_4->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
                            temp_v0_5 = temp_s4->polyOpa.p;
                            temp_s4->polyOpa.p = temp_v0_5 + 8;
                            temp_v0_5->words.w1 = (u32) &D_809AAAE0;
                            temp_v0_5->words.w0 = 0xDE000000;
                        }
                        temp_s3 = phi_s3 + 1;
                        phi_s2 += 0x14;
                        phi_s3 = temp_s3;
                    } while (temp_s3 < (s32) phi_a2->unkFC);
                }
            }
            temp_v1 = sp7C + 1;
            phi_v0 = sp4C + 0x100;
            phi_v1 = temp_v1;
            phi_a2 = sp48 + 0x100;
        } while (temp_v1 < (s32) sp8C->unk2944);
    }
}

void func_809AA798(ObjGrass *arg0, GraphicsContext **arg1) {
    ObjGrass *sp84;
    s32 sp78;
    s16 sp6E;
    ? sp6C;
    ObjGrass *sp4C;
    void *sp48;
    Gfx *temp_v0;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s3;
    s32 temp_s6;
    s32 temp_t5;
    u8 temp_v0_2;
    void *temp_s0;
    void *phi_s4;
    s32 phi_s6;

    sp84 = arg0;
    sp6C.unk0 = (s32) D_809AAB94.unk0;
    sp6C.unk4 = (u16) D_809AAB94.unk4;
    temp_a0 = *arg1;
    temp_s3 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = temp_s3->polyXlu.p;
    temp_s3->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w1 = (u32) &D_809AAA68;
    temp_v0->words.w0 = 0xDE000000;
    sp78 = 0;
    if ((s32) arg0->unk2944 > 0) {
        sp4C = arg0;
        sp48 = arg0 + 0x144;
        do {
            if ((sp4C->unk242 & 1) != 0) {
                phi_s4 = sp48;
                phi_s6 = 0;
                if ((s32) sp48->unkFC > 0) {
                    do {
                        temp_s0 = phi_s4 + 0xC;
                        if ((phi_s4->unk1B & 1) != 0) {
                            temp_v0_2 = temp_s0->unk10;
                            if (((s32) temp_v0_2 > 0) && ((s32) temp_v0_2 < 0xFF)) {
                                sp6E = temp_s0->unkC;
                                SysMatrix_SetStateRotationAndTranslation(temp_s0->unk0, temp_s0->unk4, temp_s0->unk8, (Vec3s *) &sp6C);
                                Matrix_Scale(arg0->actor.scale.x, arg0->actor.scale.y, arg0->actor.scale.z, 1);
                                temp_v0_3 = temp_s3->polyXlu.p;
                                temp_s3->polyXlu.p = temp_v0_3 + 8;
                                temp_v0_3->words.w0 = 0xDA380003;
                                temp_v0_3->words.w1 = Matrix_NewMtx(*arg1);
                                temp_v0_4 = temp_s3->polyXlu.p;
                                temp_s3->polyXlu.p = temp_v0_4 + 8;
                                temp_v0_4->words.w0 = 0xFA000000;
                                temp_v0_4->words.w1 = temp_s0->unk10 | ~0xFF;
                                temp_v0_5 = temp_s3->polyXlu.p;
                                temp_s3->polyXlu.p = temp_v0_5 + 8;
                                temp_v0_5->words.w1 = (u32) &D_809AAAE0;
                                temp_v0_5->words.w0 = 0xDE000000;
                            }
                        }
                        temp_s6 = phi_s6 + 1;
                        phi_s4 += 0x14;
                        phi_s6 = temp_s6;
                    } while (temp_s6 < (s32) sp48->unkFC);
                }
            }
            temp_t5 = sp78 + 1;
            sp48 += 0x100;
            sp4C += 0x100;
            sp78 = temp_t5;
        } while (temp_t5 < (s32) sp84->unk2944);
    }
}

void ObjGrass_Draw(ObjGrass *this, GlobalContext *globalCtx) {
    ObjGrass *this = (ObjGrass *) thisx;
    func_809AA278(this, globalCtx);
    func_809AA54C(this, globalCtx);
    func_809AA798(this, (GraphicsContext **) globalCtx);
}
