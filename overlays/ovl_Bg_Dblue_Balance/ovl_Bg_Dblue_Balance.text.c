typedef struct Actor {
    /* 0x000 */ s16 id;
    /* 0x002 */ u8 category;
    /* 0x003 */ s8 room;
    /* 0x004 */ u32 flags;
    /* 0x008 */ PosRot home;
    /* 0x01C */ s16 params;
    /* 0x01E */ s8 objBankIndex;
    /* 0x01F */ s8 targetMode;
    /* 0x020 */ s16 unk20;
    /* 0x022 */ char pad_22[0x2];
    /* 0x024 */ PosRot world;
    /* 0x038 */ s8 cutscene;
    /* 0x039 */ s8 unk39;
    /* 0x03A */ s8 unk_3A;                          /* inferred */
    /* 0x03B */ s8 unk_3B;                          /* inferred */
    /* 0x03C */ PosRot focus;
    /* 0x050 */ u16 sfx;
    /* 0x052 */ char pad_52[0x2];
    /* 0x054 */ f32 targetArrowOffset;
    /* 0x058 */ Vec3f scale;
    /* 0x064 */ Vec3f velocity;
    /* 0x070 */ f32 speedXZ;
    /* 0x074 */ f32 gravity;
    /* 0x078 */ f32 minVelocityY;
    /* 0x07C */ CollisionPoly *wallPoly;
    /* 0x080 */ CollisionPoly *floorPoly;
    /* 0x084 */ u8 wallBgId;
    /* 0x085 */ u8 floorBgId;
    /* 0x086 */ s16 wallYaw;
    /* 0x088 */ f32 floorHeight;
    /* 0x08C */ f32 yDistToWater;
    /* 0x090 */ u16 bgCheckFlags;
    /* 0x092 */ s16 yawTowardsPlayer;
    /* 0x094 */ f32 xyzDistToPlayerSq;
    /* 0x098 */ f32 xzDistToPlayer;
    /* 0x09C */ f32 yDistToPlayer;
    /* 0x0A0 */ CollisionCheckInfo colChkInfo;
    /* 0x0BC */ ActorShape shape;
    /* 0x0EC */ Vec3f projectedPos;
    /* 0x0F8 */ f32 projectedW;
    /* 0x0FC */ f32 uncullZoneForward;
    /* 0x100 */ f32 uncullZoneScale;
    /* 0x104 */ f32 uncullZoneDownward;
    /* 0x108 */ Vec3f prevPos;
    /* 0x114 */ u8 isTargeted;
    /* 0x115 */ u8 targetPriority;
    /* 0x116 */ u16 textId;
    /* 0x118 */ u16 freezeTimer;
    /* 0x11A */ u16 colorFilterParams;
    /* 0x11C */ u8 colorFilterTimer;
    /* 0x11D */ u8 isDrawn;
    /* 0x11E */ u8 dropFlag;
    /* 0x11F */ u8 hintId;
    /* 0x120 */ Actor *parent;
    /* 0x124 */ Actor *child;
    /* 0x128 */ Actor *prev;
    /* 0x12C */ Actor *next;
    /* 0x130 */ void (*init)(Actor *, GlobalContext *);
    /* 0x134 */ void (*destroy)(Actor *, GlobalContext *);
    /* 0x138 */ void (*update)(Actor *, GlobalContext *);
    /* 0x13C */ void (*draw)(Actor *, GlobalContext *);
    /* 0x140 */ ActorOverlay *overlayEntry;
} Actor;                                            /* size = 0x144 */

typedef struct BgDblueBalance {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ void *unk_15C;                      /* inferred */
    /* 0x160 */ void *unk_160;                      /* inferred */
    /* 0x164 */ void *unk_164;                      /* inferred */
    /* 0x168 */ void (*actionFunc)(BgDblueBalance *, GlobalContext *);
    /* 0x16C */ u32 unk_16C;                        /* inferred */
    /* 0x170 */ u32 unk_170;                        /* inferred */
    /* 0x174 */ s16 unk_174;                        /* inferred */
    /* 0x176 */ s16 unk_176;                        /* inferred */
    /* 0x178 */ s16 unk_178;                        /* inferred */
    /* 0x17A */ s16 unk_17A;                        /* inferred */
    /* 0x17C */ s8 unk_17C;                         /* inferred */
    /* 0x17D */ s8 unk_17D;                         /* inferred */
    /* 0x17E */ char pad_17E[0x1];
    /* 0x17F */ s8 unk_17F;                         /* inferred */
    /* 0x180 */ char pad_180[0x2];                  /* maybe part of unk_17F[3]? */
    /* 0x182 */ s8 unk_182;                         /* inferred */
    /* 0x183 */ u8 unk_183;                         /* inferred */
    /* 0x184 */ s16 unk_184;                        /* inferred */
    /* 0x186 */ s8 unk_186;                         /* inferred */
    /* 0x187 */ s8 unk_187;                         /* inferred */
    /* 0x188 */ char pad_188[0xA0];                 /* maybe part of unk_187[161]? */
    /* 0x228 */ f32 unk_228;                        /* inferred */
} BgDblueBalance;                                   /* size = 0x22C */

struct _mips2c_stack_BgDblueBalance_Destroy {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_BgDblueBalance_Draw {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x8];                    /* maybe part of sp24[3]? */
    /* 0x30 */ GraphicsContext *sp30;               /* inferred */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ void *sp38;                          /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_BgDblueBalance_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ u32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_BgDblueBalance_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B823B0 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B82454 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ ActorContext *sp38;                  /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x4];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80B8259C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ WaterBox *sp30;                      /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B8264C {
    /* 0x00 */ char pad_0[0x78];
    /* 0x78 */ ? sp78;                              /* inferred */
    /* 0x78 */ char pad_78[0x8];
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ char pad_84[0xC];
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_80B828E4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B8296C {
    /* 0x00 */ char pad_0[0x60];
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0x4];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80B82B00 {};              /* size 0x0 */

struct _mips2c_stack_func_80B82DC4 {};              /* size 0x0 */

struct _mips2c_stack_func_80B82DE0 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ void *sp3C;                          /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ void *sp5C;                          /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ char pad_64[0x4];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0x4];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad_74[0x14];                   /* maybe part of sp70[6]? */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ char pad_8C[0x4];
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_80B8330C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B83344 {};              /* size 0x0 */

struct _mips2c_stack_func_80B8335C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B833A8 {};              /* size 0x0 */

struct _mips2c_stack_func_80B833C4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s16 sp24;                            /* inferred */
    /* 0x26 */ s16 sp26;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B83518 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B83758 {
    /* 0x00 */ char pad_0[0x4C];
    /* 0x4C */ GraphicsContext *sp4C;               /* inferred */
    /* 0x50 */ char pad_50[0x20];
};                                                  /* size = 0x70 */

? func_8019FB0C(void *, void *, ?, f32, ?);         /* extern */
? func_801A7328(Vec3f *, ?);                        /* extern */
void func_80B823B0(BgDblueBalance *arg0);           /* static */
s32 func_80B82454(BgDblueBalance *arg0, GlobalContext *arg1); /* static */
void func_80B8259C(BgDblueBalance *arg0, GlobalContext *arg1); /* static */
void func_80B8264C(BgDblueBalance *arg0);           /* static */
void func_80B828E4(BgDblueBalance *arg0, GlobalContext *arg1); /* static */
void func_80B8296C(GlobalContext *arg0, f32 *arg1, f32 arg2); /* static */
s32 func_80B82B00(s16 arg0, s16 arg1, s16 arg2);    /* static */
void func_80B82DC4(BgDblueBalance *arg0);           /* static */
void func_80B8330C(DynaPolyActor *arg0, ? arg1);    /* static */
void func_80B83344(BgDblueBalance *arg0);           /* static */
void func_80B833A8(BgDblueBalance *arg0);           /* static */
void func_80B83518(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B83758(void *arg0, GlobalContext *arg1); /* static */
extern ? D_0600CD10;
extern void D_0600CE00;
extern ? D_0600D110;
extern void D_0600D250;
static ? D_80B83A20;                                /* unable to generate initializer */
static ? D_80B83A74;                                /* unable to generate initializer */
static s8 D_80B83A90[2] = {0, 4};
static ? D_80B83A92;                                /* unable to generate initializer */
static s8 D_80B83A94[4] = {0, 2, 4, 6};
static InitChainEntry D_80B83A98[2];                /* unable to generate initializer */
static void *D_80B83C70;
static void *D_80B83C74;

void func_80B823B0(BgDblueBalance *arg0) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 *temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;

    SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, 0);
    Matrix_RotateY(arg0->actor.shape.rot.y, 1U);
    SysMatrix_InsertZRotation_s(arg0->actor.shape.rot.z, 1);
    sp2C = 0.0f;
    sp30 = 0.0f;
    sp28 = -138.28f;
    temp_v0 = arg0->unk_15C;
    if (temp_v0 != 0) {
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp28, temp_v0 + 0x24);
    }
    temp_a0 = &sp28;
    sp28 = 138.28f;
    temp_v0_2 = arg0->unk_160;
    if (temp_v0_2 != 0) {
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, temp_v0_2 + 0x24);
    }
}

s32 func_80B82454(BgDblueBalance *arg0, GlobalContext *arg1) {
    s32 sp58;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp3C;
    ActorContext *sp38;
    Actor *temp_v0;
    Actor *temp_v0_2;
    ActorContext *temp_a0_2;
    f32 *temp_a0;
    f32 *temp_a0_3;

    sp58 = 1;
    SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, 0);
    Matrix_RotateY(arg0->actor.shape.rot.y, 1U);
    SysMatrix_InsertZRotation_s(arg0->actor.shape.rot.z, 1);
    temp_a0 = &sp48;
    sp4C = 0.0f;
    sp50 = 0.0f;
    sp48 = -138.28f;
    SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, (Vec3f *) &sp3C);
    temp_a0_2 = arg1 + 0x1CA0;
    sp38 = temp_a0_2;
    temp_v0 = Actor_Spawn(temp_a0_2, arg1, 0x21B, sp3C, sp40, sp44, (s16) 0, (s16) (s32) arg0->actor.shape.rot.y, (s16) 0, (s16) 0x100);
    arg0->unk_15C = temp_v0;
    if (temp_v0 == 0) {
        sp58 = 0;
    } else {
        arg0->unk_15C->unk_164 = arg0;
    }
    temp_a0_3 = &sp48;
    sp48 = 138.28f;
    SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0_3, (Vec3f *) &sp3C);
    temp_v0_2 = Actor_Spawn(sp38, arg1, 0x21B, sp3C, sp40, sp44, (s16) 0, (s16) (s32) arg0->actor.shape.rot.y, (s16) 0, (s16) 0x200);
    arg0->unk_160 = temp_v0_2;
    if (temp_v0_2 == 0) {
        sp58 = 0;
    } else {
        arg0->unk_160->unk_164 = arg0;
    }
    return sp58;
}

void func_80B8259C(BgDblueBalance *arg0, GlobalContext *arg1) {
    WaterBox *sp30;
    f32 sp2C;
    f32 temp_f0;

    if (func_800CA1E8(arg1, arg1 + 0x830, arg0->actor.world.pos.x, arg0->actor.world.pos.z, &sp2C, &sp30) != 0) {
        arg0->actor.yDistToWater = sp2C - arg0->actor.world.pos.y;
        temp_f0 = arg0->actor.yDistToWater;
        arg0->unk_228 = sp2C;
        if ((temp_f0 < 150.0f) && (temp_f0 > -150.0f)) {
            arg0->unk_182 = 1;
            return;
        }
        goto block_5;
    }
block_5:
    arg0->unk_182 = 0;
}

void func_80B8264C(BgDblueBalance *arg0) {
    ? sp78;
    f32 temp_f0;
    s32 temp_s1;
    u8 temp_v0;
    u8 temp_v0_2;
    s16 phi_s2;
    Vec3f *phi_s0;
    s32 phi_s1;

    if (arg0->unk_170 != 0) {
        temp_v0 = arg0->unk_183;
        if ((s32) temp_v0 < 8) {
            arg0->unk_183 = 0;
        } else {
            arg0->unk_183 = temp_v0 - 7;
        }
    } else {
        temp_v0_2 = arg0->unk_183;
        if ((s32) temp_v0_2 >= 0xFB) {
            arg0->unk_183 = 0xFF;
        } else {
            arg0->unk_183 = temp_v0_2 + 4;
        }
    }
    SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, 0);
    Matrix_RotateY(arg0->actor.shape.rot.y, 1U);
    phi_s2 = 0;
    phi_s0 = arg0 + 0x188;
    phi_s1 = 0;
    do {
        phi_s0->unk_C = (s16) (arg0->actor.shape.rot.x + phi_s2);
        SysMatrix_StatePush();
        SysMatrix_InsertXRotation_s(phi_s0->unk_C, 0);
        SysMatrix_InsertTranslation(-545.0f, 0.0f, 270.0f, 1);
        SysMatrix_GetStateTranslation((Vec3f *) &sp78);
        SysMatrix_StatePop();
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp78, phi_s0);
        temp_s1 = phi_s1 + 1;
        phi_s2 = (s16) (phi_s2 + 0x2000);
        phi_s1 = temp_s1;
        if (sp80 > 135.0f) {
            temp_f0 = (sp80 - 135.0f) * 1.8962963f;
            if (temp_f0 > 255.0f) {
                phi_s0->unk_E = 0xFFU;
                phi_s0[1].y = 0.1f;
            } else if (temp_f0 < 1.0f) {
                phi_s0->unk_E = 0U;
                phi_s0[1].y = 0.0f;
            } else {
                phi_s0->unk_E = (u8) (u32) temp_f0;
                phi_s0[1].y = temp_f0 * 0.000390625f;
            }
        } else {
            phi_s0->unk_E = 0U;
        }
        phi_s0 = (Vec3f *) &phi_s0[1].z;
    } while (temp_s1 != 8);
}

void func_80B828E4(BgDblueBalance *arg0, GlobalContext *arg1) {
    s16 temp_a1;
    u8 temp_v0;
    u8 temp_v0_2;

    temp_a1 = arg0->actor.params;
    arg0 = arg0;
    if ((Flags_GetSwitch(arg1, temp_a1 & 0x7F) != 0) && ((s32) arg0->unk_17D <= 0)) {
        temp_v0 = arg0->unk_183;
        if ((s32) temp_v0 >= 0xFC) {
            arg0->unk_183 = 0xFF;
            return;
        }
        arg0->unk_183 = temp_v0 + 3;
        return;
    }
    temp_v0_2 = arg0->unk_183;
    if ((s32) temp_v0_2 < 7) {
        arg0->unk_183 = 0;
        return;
    }
    arg0->unk_183 = temp_v0_2 - 6;
}

void func_80B8296C(GlobalContext *arg0, f32 *arg1, f32 arg2) {
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 *temp_s4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    s8 *temp_s0;
    s8 *temp_s0_2;
    s8 *phi_s0;
    f32 phi_f20;
    f32 phi_f20_2;
    s8 *phi_s0_2;

    temp_f20 = arg2 * 2.0f;
    temp_s4 = &sp60;
    phi_s0 = D_80B83A90;
    do {
        sp60 = ((Rand_ZeroOne() - 0.5f) * temp_f20) + arg1->unk_0;
        sp64 = arg1[1];
        sp68 = ((Rand_ZeroOne() - 0.5f) * temp_f20) + arg1[2];
        EffectSsGRipple_Spawn(arg0, (Vec3f *) temp_s4, 0x1F4, 0x7D0, (s16) (s32) *phi_s0);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while ((u32) temp_s0 < (u32) &D_80B83A92);
    phi_s0_2 = D_80B83A94;
    do {
        temp_f0 = Rand_ZeroOne();
        temp_f20_2 = 1.0f - (temp_f0 * temp_f0);
        phi_f20 = temp_f20_2;
        if (Rand_Next() > 0) {
            phi_f20 = -temp_f20_2;
        }
        sp60 = (phi_f20 * arg2) + arg1->unk_0;
        sp64 = arg1[1];
        temp_f0_2 = Rand_ZeroOne();
        temp_f20_3 = 1.0f - (temp_f0_2 * temp_f0_2);
        phi_f20_2 = temp_f20_3;
        if (Rand_Next() > 0) {
            phi_f20_2 = -temp_f20_3;
        }
        sp68 = (phi_f20_2 * arg2) + arg1[2];
        EffectSsGRipple_Spawn(arg0, (Vec3f *) temp_s4, 0x190, 0x320, (s16) (s32) *phi_s0_2);
        temp_s0_2 = phi_s0_2 + 1;
        phi_s0_2 = temp_s0_2;
    } while (temp_s0_2 != D_80B83A98);
}

s32 func_80B82B00(s16 arg0, s16 arg1, s16 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 phi_v0;

    temp_v0 = (s32) arg0 < (s32) arg2;
    phi_v0 = temp_v0;
    if ((s32) arg0 < (s32) arg1) {
        temp_v0_2 = (s32) arg0 < (s32) arg2;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 != 0) {
            return ((s32) arg1 < (s32) arg2) ^ 1;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return phi_v0;
    }
    if (temp_v0 == 0) {
        phi_v0 = ((s32) arg1 < (s32) arg2) ^ 1;
    }
    return phi_v0;
}

void BgDblueBalance_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp2C;
    u32 sp24;
    void *sp20;
    s16 temp_v0;
    void *temp_v1;
    void *phi_v1;
    s16 phi_v0;
    BgDblueBalance *this = (BgDblueBalance *) thisx;

    temp_v0 = this->actor.params;
    sp2C = ((s32) temp_v0 >> 8) & 3;
    sp24 = Flags_GetSwitch(globalCtx, temp_v0 & 0x7F);
    Actor_ProcessInitChain((Actor *) this, D_80B83A98);
    temp_v1 = (sp2C * 0x1C) + &D_80B83A20;
    this->actor.flags = temp_v1->unk_8;
    this->actor.uncullZoneScale = temp_v1->unk_C;
    this->actor.uncullZoneDownward = temp_v1->unk_10;
    this->actor.update = temp_v1->unk_14;
    this->actor.draw = temp_v1->unk_18;
    sp20 = temp_v1;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, temp_v1->unk_4);
    phi_v1 = temp_v1;
    if (temp_v1 == &D_80B83A74) {
        sp20 = temp_v1;
        D_80B83C70 = Lib_SegmentedToVirtual(&D_0600CE00);
        goto block_4;
    }
    if (temp_v1 == &D_80B83A20) {
        sp20 = temp_v1;
        D_80B83C74 = Lib_SegmentedToVirtual(&D_0600D250);
block_4:
        phi_v1 = sp20;
    }
    if (phi_v1 == &D_80B83A20) {
        phi_v0 = 0x1C72;
        if (sp24 != 0) {
            this->actor.shape.rot.z = -0x1C72;
            phi_v0 = -0x1C72;
        } else {
            this->actor.shape.rot.z = 0x1C72;
        }
        this->unk_174 = phi_v0;
        func_80B82454(this, globalCtx);
        func_80B8259C(this, globalCtx);
        func_80B82DC4(this);
        return;
    }
    if (phi_v1 == &D_80B83A74) {
        this->unk_16C = sp24;
        this->unk_170 = sp24;
        if (sp24 != 0) {
            func_80B83344(this);
            return;
        }
        this->unk_178 = 0x1F4;
        func_80B833A8(this);
        /* Duplicate return node #14. Try simplifying control flow for better match */
    }
}

void BgDblueBalance_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp1C;
    Actor *temp_v0_2;
    Actor *temp_v0_3;
    s32 temp_a2;
    s32 temp_v0;
    void *temp_v0_4;
    void *temp_v0_5;
    BgDblueBalance *this = (BgDblueBalance *) thisx;

    temp_a2 = this->unk_144;
    temp_v0 = ((s32) this->actor.params >> 8) & 3;
    sp1C = temp_v0;
    this = this;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, temp_a2);
    if (temp_v0 == 0) {
        temp_v0_2 = this->unk_15C;
        if (temp_v0_2 != 0) {
            temp_v0_2->unk_164 = 0;
        }
        temp_v0_3 = this->unk_160;
        if (temp_v0_3 != 0) {
            temp_v0_3->unk_164 = 0;
            return;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return;
    }
    if (temp_v0 == 1) {
        temp_v0_4 = this->unk_164;
        if (temp_v0_4 != 0) {
            temp_v0_4->unk_15C = 0;
            return;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return;
    }
    if (temp_v0 == 2) {
        temp_v0_5 = this->unk_164;
        if (temp_v0_5 != 0) {
            temp_v0_5->unk_160 = 0;
        }
    }
}

void func_80B82DC4(BgDblueBalance *arg0) {
    arg0->unk_17D = 0x14;
    arg0->actionFunc = func_80B82DE0;
}

void func_80B82DE0(BgDblueBalance *this, GlobalContext *globalCtx) {
    f32 sp88;
    f32 sp70;
    f32 sp60;
    Actor *sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp40;
    Actor *sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    Actor *temp_v0_2;
    Actor *temp_v1;
    f32 *temp_a1;
    f32 *temp_a1_2;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_a0;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v1_2;
    s8 temp_v0;
    s32 phi_a0;
    s32 phi_a1;
    s32 phi_v1;
    s32 phi_a0_2;
    f32 phi_f2;

    sp88 = Math_CosS((s16) (s32) ((f32) this->actor.shape.rot.z * 2.2499313f));
    if (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) != 0) {
        temp_v0 = this->unk_17D;
        if ((s32) temp_v0 > 0) {
            this->unk_17D = temp_v0 - 1;
        } else {
            this->unk_174 = -0x1C72;
            this->unk_176 = (s32) (sp88 * -300.0f) - 0x3C;
        }
    } else {
        temp_v0_2 = this->unk_160;
        temp_v1 = this->unk_15C;
        this->unk_17D = 0x14;
        phi_a0 = 0;
        phi_a1 = 1;
        if (temp_v0_2 != 0) {
            if (temp_v0_2->unk_181 != 0) {
                phi_a0 = 4;
            } else if (temp_v0_2->unk_180 != 0) {
                phi_a0 = 2;
            }
        }
        if (temp_v1 != 0) {
            if (temp_v1->unk_181 != 0) {
                phi_a1 = 5;
            } else if (temp_v1->unk_180 != 0) {
                phi_a1 = 3;
            }
        }
        if (phi_a0 < phi_a1) {
            this->unk_174 = 0x1C72;
            this->unk_176 = (s32) (sp88 * 370.0f) + 0x50;
        } else {
            this->unk_174 = -0x1C72;
            this->unk_176 = (s32) (sp88 * -160.0f) - 0x50;
        }
    }
    temp_a0 = this->unk_174;
    temp_v0_3 = this->actor.shape.rot.z;
    temp_v1_2 = temp_v0_3 - temp_a0;
    if (temp_a0 == temp_v0_3) {
        this->unk_178 = 0;
        this->unk_17C = 0;
        return;
    }
    phi_v1 = (s32) temp_v1_2;
    phi_a0_2 = 0x28;
    if ((s32) temp_v1_2 < 0) {
        phi_v1 = (s32) (s16) ((s32) temp_v1_2 * -1);
    }
    if (((s32) this->unk_17C > 0) && (phi_v1 < 0x7D0)) {
        phi_a0_2 = 3;
    } else {
        this->unk_17C = 0;
    }
    temp_v0_4 = this->unk_176;
    if ((s32) temp_v0_4 >= 0) {
        this->unk_178 += phi_a0_2;
        if ((s32) temp_v0_4 < (s32) this->unk_178) {
            this->unk_178 = temp_v0_4;
            goto block_30;
        }
    } else {
        this->unk_178 -= phi_a0_2;
        if ((s32) this->unk_178 < (s32) temp_v0_4) {
            this->unk_178 = temp_v0_4;
block_30:
        }
    }
    temp_f2 = (f32) this->unk_178;
    if ((temp_f2 * (f32) this->unk_17A) <= 0.0f) {
        sp70 = temp_f2;
        func_801A7328(&this->actor.projectedPos, 0x216F);
    }
    temp_f0 = fabsf((f32) this->unk_178 * 0.0022222223f);
    phi_f2 = temp_f0;
    if (temp_f0 > 1.0f) {
        phi_f2 = 1.0f;
    }
    func_8019FAD8(&this->actor.projectedPos, 0x216FU, phi_f2 + 1.0f);
    this->actor.shape.rot.z += this->unk_178;
    temp_v0_5 = this->actor.shape.rot.z;
    if ((s32) temp_v0_5 >= 0x1C72) {
        if ((s32) this->unk_17C < 2) {
            this->actor.shape.rot.z = 0x1C71;
            this->unk_17C += 1;
            this->unk_178 = (s16) (s32) ((f32) this->unk_178 * -0.6f);
            if (this->unk_182 != 0) {
                Audio_PlayActorSound2((Actor *) this, 0x2864U);
                sp5C = this->unk_15C;
                SysMatrix_StatePush();
                Matrix_RotateY((s16) (this->actor.shape.rot.y - 0x4000), 0U);
                SysMatrix_GetStateTranslationAndScaledZ(45.0f, (Vec3f *) &sp60);
                SysMatrix_StatePop();
                temp_a1 = &sp50;
                sp50 = sp5C->world.pos.x + sp60;
                sp54 = this->unk_228;
                sp58 = sp5C->world.pos.z + sp68;
                func_80B8296C(globalCtx, temp_a1, 70.0f);
            } else {
                Audio_PlayActorSound2((Actor *) this, 0x2871U);
            }
        } else {
            this->actor.shape.rot.z = 0x1C72;
            goto block_47;
        }
    } else if ((s32) temp_v0_5 < -0x1C71) {
        if ((s32) this->unk_17C < 2) {
            this->actor.shape.rot.z = -0x1C71;
            this->unk_17C += 1;
            this->unk_178 = (s16) (s32) ((f32) this->unk_178 * -0.6f);
            if (this->unk_182 != 0) {
                Audio_PlayActorSound2((Actor *) this, 0x2864U);
                sp3C = this->unk_160;
                SysMatrix_StatePush();
                Matrix_RotateY((s16) (this->actor.shape.rot.y + 0x4000), 0U);
                SysMatrix_GetStateTranslationAndScaledZ(30.0f, (Vec3f *) &sp40);
                SysMatrix_StatePop();
                temp_a1_2 = &sp30;
                sp30 = sp3C->world.pos.x + sp40;
                sp34 = this->unk_228;
                sp38 = sp3C->world.pos.z + sp48;
                func_80B8296C(globalCtx, temp_a1_2, 47.0f);
            } else {
                Audio_PlayActorSound2((Actor *) this, 0x2871U);
            }
        } else {
            this->actor.shape.rot.z = -0x1C72;
block_47:
            this->unk_178 = 0;
        }
    }
    func_80B823B0(this);
}

void BgDblueBalance_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgDblueBalance *this = (BgDblueBalance *) thisx;
    this->unk_17A = this->unk_178;
    this->actionFunc(this, globalCtx);
    func_80B828E4(this, globalCtx);
}

void func_80B8330C(DynaPolyActor *arg0, ? arg1) {
    arg0->unk_180 = func_800CAFB8(arg0);
    arg0->unk_181 = func_800CAFDC(arg0);
}

void func_80B83344(BgDblueBalance *arg0) {
    arg0->unk_178 = 0;
    arg0->actionFunc = func_80B8335C;
}

void func_80B8335C(BgDblueBalance *this, GlobalContext *globalCtx) {
    s16 temp_a1;

    temp_a1 = this->actor.params;
    this = this;
    if (Flags_GetSwitch(globalCtx, temp_a1 & 0x7F) == 0) {
        this->unk_178 = -0x14;
        func_80B833A8(this);
    }
}

void func_80B833A8(BgDblueBalance *arg0) {
    arg0->unk_186 = 0;
    arg0->unk_187 = 0;
    arg0->actionFunc = func_80B833C4;
}

void func_80B833C4(BgDblueBalance *this, GlobalContext *globalCtx) {
    s32 sp28;
    s16 sp26;
    s16 sp24;
    s16 temp_a1;
    s16 temp_v0;
    s16 temp_v1;

    sp28 = 0;
    if (this->unk_170 != 0) {
        if ((this->unk_16C == 0) && (this->unk_17F == 0)) {
            this->unk_17F = 1;
        }
        if (this->unk_186 != 0) {
            temp_v1 = this->unk_178;
            if ((s32) temp_v1 >= 0x50) {
                this->unk_178 = temp_v1 - 5;
            }
        }
    } else {
        this->unk_187 = Math_StepToS(&this->unk_178, 0x1F4, 5);
    }
    temp_v0 = this->actor.shape.rot.x;
    this->actor.shape.rot.x = temp_v0 + this->unk_178;
    temp_a1 = this->actor.shape.rot.x;
    if (this->unk_170 != 0) {
        if (this->unk_186 != 0) {
            if (func_80B82B00(temp_v0, temp_a1, this->unk_184) != 0) {
                sp28 = 1;
            }
        } else if (this->unk_187 != 0) {
            sp26 = temp_v0;
            sp24 = temp_a1;
            if (func_80B82B00(temp_v0, temp_a1, 0x2097) != 0) {
                this->unk_184 = -0x8000;
                this->unk_186 = 1;
            } else if (func_80B82B00(temp_v0, temp_a1, -0x5F69) != 0) {
                this->unk_184 = 0;
                this->unk_186 = 1;
            }
        }
    }
    func_80B8264C(this);
    if (sp28 != 0) {
        this->actor.shape.rot.x = this->unk_184;
        func_80B83344(this);
    }
}

void func_80B83518(Actor *arg0, GlobalContext *arg1) {
    s8 temp_v0;

    arg0[1].world.pos.z = Flags_GetSwitch(arg1, arg0->params & 0x7F);
    arg0[1].world.pos.x(arg0, arg1);
    temp_v0 = arg0[1].unk_3B;
    if (temp_v0 == 2) {
        arg0[1].unk_3A += -1;
        if ((s32) arg0[1].unk_3A <= 0) {
            ActorCutscene_Stop((s16) arg0->cutscene);
            arg0[1].unk_3B = 0;
        }
    } else if ((temp_v0 != 0) && (temp_v0 == 1)) {
        if (ActorCutscene_GetCanPlayNext((s16) arg0->cutscene) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
            arg0[1].unk_3B = 2;
            arg0[1].unk_3A = 0x50;
        } else {
            ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
        }
    }
    arg0[1].world.pos.y = arg0[1].world.pos.z;
}

void BgDblueBalance_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Actor *sp38;
    Gfx *sp34;
    GraphicsContext *sp30;
    Gfx *sp24;
    Actor *temp_v0;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    GraphicsContext *temp_a2;
    BgDblueBalance *this = (BgDblueBalance *) thisx;

    func_800BDFC0(globalCtx, *(((((s32) this->actor.params >> 8) & 3) * 0x1C) + &D_80B83A20));
    if (((((s32) this->actor.params >> 8) & 3) == 0) && (this->unk_160 != 0)) {
        AnimatedMat_Draw(globalCtx, (AnimatedMaterial *) D_80B83C74);
        temp_v0 = this->unk_160;
        sp38 = temp_v0;
        SysMatrix_SetStateRotationAndTranslation(temp_v0->world.pos.x, temp_v0->world.pos.y, temp_v0->world.pos.z, temp_v0 + 0xBC);
        SysMatrix_InsertTranslation(30.0f, 15.0f, 0.0f, 1);
        Matrix_Scale(temp_v0->scale.x, temp_v0->scale.y, temp_v0->scale.z, 1);
        temp_a2 = globalCtx->state.gfxCtx;
        temp_v1 = temp_a2->polyXlu.p;
        temp_v1->words.w0 = 0xDE000000;
        temp_v1->words.w1 = (u32) &sSetupDL[150];
        temp_v1_2 = &temp_v1[1];
        temp_v1_2->words.w0 = 0xDA380003;
        temp_v1_3 = &temp_v1_2[1];
        sp30 = temp_a2;
        sp24 = temp_v1_2;
        sp34 = temp_v1_3;
        temp_v1_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v1_3->words.w0 = 0xFB000000;
        temp_v1_4 = &temp_v1_3[1];
        temp_v1_3->words.w1 = (u32) this->unk_183;
        temp_v1_4->words.w1 = (u32) &D_0600D110;
        temp_v1_4->words.w0 = 0xDE000000;
        temp_a2->polyXlu.p = &temp_v1_4[1];
    }
}

void func_80B83758(void *arg0, GlobalContext *arg1) {
    GraphicsContext *sp4C;
    Gfx *temp_s1;
    GraphicsContext *temp_t5;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f6;
    s16 temp_v0;
    s32 temp_s3;
    u8 temp_t0;
    void *temp_s1_2;
    void *temp_s1_3;
    void *phi_f12;
    f32 phi_f0;
    void *phi_s0;
    f32 phi_f6;
    Gfx *phi_s1;
    s32 phi_s3;
    Gfx *phi_s1_2;
    f32 phi_f2;

    temp_v0 = arg0->unk_178;
    phi_f12 = arg0;
    phi_f12 = arg0;
    if (temp_v0 != 0) {
        if (temp_v0 == 0x1F4) {
            phi_f0 = 1.0f;
        } else {
            temp_f0 = (f32) temp_v0 * 0.002f;
            phi_f2 = 0.0f;
            if (temp_f0 < 0.0f) {

            } else {
                phi_f12 = (bitwise void *) 1.0f;
                if (temp_f0 > 1.0f) {
                    phi_f2 = 1.0f;
                } else {
                    phi_f2 = temp_f0;
                }
            }
            phi_f0 = phi_f2;
        }
        func_8019FB0C(phi_f12, arg0 + 0xEC, 0x216A, phi_f0, 0x20);
    }
    if ((arg0->unk_4 & 0x40) != 0) {
        func_800BDFC0(arg1, *(((((s32) arg0->unk_1C >> 8) & 3) * 0x1C) + &D_80B83A20));
        if (arg0->unk_183 != 0) {
            AnimatedMat_Draw(arg1, (AnimatedMaterial *) D_80B83C70);
            temp_t5 = arg1->state.gfxCtx;
            sp4C = temp_t5;
            temp_s1 = temp_t5->polyXlu.p;
            temp_s1->words.w0 = 0xDE000000;
            temp_s1->words.w1 = (u32) &sSetupDL[150];
            phi_s0 = arg0 + 0x188;
            phi_s1 = &temp_s1[1];
            phi_s3 = 0;
            do {
                phi_s1_2 = phi_s1;
                if (phi_s0->unk_E != 0) {
                    SysMatrix_InsertTranslation(phi_s0->unk_0, phi_s0->unk_4, phi_s0->unk_8, 0);
                    Matrix_RotateY(arg0->unk_BE, 1U);
                    SysMatrix_InsertXRotation_s(phi_s0->unk_C, 1);
                    temp_f12 = phi_s0->unk_10;
                    Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
                    temp_s1_2 = phi_s1 + 8;
                    temp_t0 = arg0->unk_183;
                    temp_f6 = (f32) temp_t0;
                    phi_f6 = temp_f6;
                    if ((s32) temp_t0 < 0) {
                        phi_f6 = temp_f6 + 4294967296.0f;
                    }
                    phi_s1->words.w1 = (s32) ((f32) phi_s0->unk_E * phi_f6 * 0.003921569f) & 0xFF;
                    phi_s1->words.w0 = 0xFB000000;
                    temp_s1_2->unk_0 = 0xDA380003;
                    temp_s1_3 = temp_s1_2 + 8;
                    temp_s1_2->unk_4 = Matrix_NewMtx(arg1->state.gfxCtx);
                    temp_s1_3->unk_0 = 0xDE000000;
                    temp_s1_3->unk_4 = &D_0600CD10;
                    phi_s1_2 = temp_s1_3 + 8;
                }
                temp_s3 = phi_s3 + 1;
                phi_s0 += 0x14;
                phi_s1 = phi_s1_2;
                phi_s3 = temp_s3;
            } while (temp_s3 != 8);
            sp4C->polyXlu.p = phi_s1_2;
        }
    }
}
