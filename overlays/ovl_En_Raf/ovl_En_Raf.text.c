typedef struct EnRaf {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ SkelAnime unk_15C;                  /* inferred */
    /* 0x1A0 */ Vec3s unk_1A0;                      /* inferred */
    /* 0x1A6 */ char pad_1A6[0x42];                 /* maybe part of unk_1A0[12]? */
    /* 0x1E8 */ Vec3s unk_1E8;                      /* inferred */
    /* 0x1EE */ char pad_1EE[0x42];                 /* maybe part of unk_1E8[12]? */
    /* 0x230 */ void (*actionFunc)(EnRaf *, GlobalContext *);
    /* 0x234 */ Vec3f unk_234;                      /* inferred */
    /* 0x240 */ char pad_240[0x84];                 /* maybe part of unk_234[12]? */
    /* 0x2C4 */ Vec3f unk_2C4;                      /* inferred */
    /* 0x2D0 */ char pad_2D0[0xC];
    /* 0x2DC */ Vec3f unk_2DC;                      /* inferred */
    /* 0x2E8 */ char pad_2E8[0xB4];                 /* maybe part of unk_2DC[16]? */
    /* 0x39C */ s16 unk_39C;                        /* inferred */
    /* 0x39E */ u8 unk_39E;                         /* inferred */
    /* 0x39F */ char pad_39F[0x1];
    /* 0x3A0 */ f32 unk_3A0;                        /* inferred */
    /* 0x3A4 */ f32 unk_3A4;                        /* inferred */
    /* 0x3A8 */ f32 unk_3A8;                        /* inferred */
    /* 0x3AC */ f32 unk_3AC;                        /* inferred */
    /* 0x3B0 */ f32 unk_3B0;                        /* inferred */
    /* 0x3B4 */ s16 unk_3B4;                        /* inferred */
    /* 0x3B6 */ s16 unk_3B6;                        /* inferred */
    /* 0x3B8 */ s16 unk_3B8;                        /* inferred */
    /* 0x3BA */ s16 unk_3BA;                        /* inferred */
    /* 0x3BC */ s16 unk_3BC;                        /* inferred */
    /* 0x3BE */ s16 unk_3BE;                        /* inferred */
    /* 0x3C0 */ s16 unk_3C0;                        /* inferred */
    /* 0x3C2 */ s16 unk_3C2;                        /* inferred */
    /* 0x3C4 */ s16 unk_3C4;                        /* inferred */
    /* 0x3C6 */ s16 unk_3C6;                        /* inferred */
    /* 0x3C8 */ s16 unk_3C8;                        /* inferred */
    /* 0x3CA */ s16 unk_3CA;                        /* inferred */
    /* 0x3CC */ s16 unk_3CC;                        /* inferred */
    /* 0x3CE */ s16 unk_3CE;                        /* inferred */
    /* 0x3D0 */ ColliderCylinder unk_3D0;           /* inferred */
    /* 0x41C */ char pad_41C[0x6C8];                /* maybe part of unk_3D0[23]? */
} EnRaf;                                            /* size = 0xAE4 */

struct _mips2c_stack_EnRaf_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnRaf_Draw {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnRaf_Init {
    /* 0x00 */ char pad_0[0x54];
    /* 0x54 */ CollisionHeader *sp54;               /* inferred */
    /* 0x58 */ char pad_58[0x8];                    /* maybe part of sp54[3]? */
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad_60[0x10];
};                                                  /* size = 0x70 */

struct _mips2c_stack_EnRaf_Update {
    /* 0x00 */ char pad_0[0x6C];
    /* 0x6C */ ? sp6C;                              /* inferred */
    /* 0x6C */ char pad_6C[0x4];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad_74[0x4];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ WaterBox *sp7C;                      /* inferred */
    /* 0x80 */ char pad_80[0x8];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_80A16D40 {};              /* size 0x0 */

struct _mips2c_stack_func_80A16D6C {};              /* size 0x0 */

struct _mips2c_stack_func_80A17060 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ AnimationHeaderCommon **sp2C;        /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A1712C {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A171D8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A17414 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A17464 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A17530 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A175E4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ PosRot *sp24;                        /* inferred */
    /* 0x28 */ char pad_28[0x8];                    /* maybe part of sp24[3]? */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A17848 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A178A0 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A179C8 {
    /* 0x00 */ char pad_0[0x80];
    /* 0x80 */ ActorContext *sp80;                  /* inferred */
    /* 0x84 */ char pad_84[0x10];                   /* maybe part of sp80[5]? */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_80A17C6C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A17D14 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A17D54 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A17DDC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A17E1C {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A18080 {};              /* size 0x0 */

struct _mips2c_stack_func_80A180B4 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A1859C {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A18A90 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A18B8C {
    /* 0x00 */ char pad_0[0x68];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80A18DA0 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

void func_80A16D40(void *arg0, ? *arg1, s32 arg2);  /* static */
void func_80A16D6C(void *arg0, ? *arg1, s16 arg2);  /* static */
void func_80A17060(EnRaf *arg0, s32 arg1);          /* static */
void func_80A1712C(EnRaf *arg0);                    /* static */
void func_80A17414(EnRaf *arg0);                    /* static */
void func_80A17530(EnRaf *arg0);                    /* static */
void func_80A17848(EnRaf *arg0, GlobalContext *arg1); /* static */
void func_80A179C8(EnRaf *arg0, GlobalContext *arg1); /* static */
void func_80A17D14(EnRaf *arg0);                    /* static */
void func_80A17DDC(EnRaf *arg0);                    /* static */
void func_80A18080(EnRaf *arg0);                    /* static */
void func_80A1859C(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
void func_80A18A90(Actor *arg0, Vec3f *arg1, f32 *arg2, f32 *arg3, f32 arg4, s32 arg5); /* static */
void func_80A18B8C(EnRaf *arg0, GlobalContext *arg1); /* static */
void func_80A18DA0(EnRaf *arg0, GlobalContext *arg1); /* static */
extern CollisionHeader D_06000108;
extern AnimationHeader D_06000A64;
extern ? D_060024E0;
extern void D_06002EF8;
extern void D_060032F8;
extern FlexSkeletonHeader D_06003428;
static ColliderCylinderInit D_80A18EE0 = {
    {0xA, 0x11, 0, 0x39, 0x10, 1},
    {0, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 0, 1},
    {0x32, 0xA, 0xFFF6, {0, 0, 0}},
};
static ? D_80A18F0C;                                /* unable to generate initializer */
static ? D_80A18F4C;                                /* unable to generate initializer */
static ? D_80A18F8C;                                /* unable to generate initializer */
static ? D_80A1918C;                                /* unable to generate initializer */
static DamageTable D_80A1939C = {
    {
        0xF0,
        0xF0,
        0,
        0xE1,
        0xF0,
        0xF0,
        0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0xF0,
        0,
        0,
        0xF0,
        0xF0,
        0xF0,
        0,
        0xF0,
        0,
        0,
        0,
        0,
        0xF0,
    },
};
static ? D_80A193BC;                                /* unable to generate initializer */
static ? D_80A193C8;                                /* unable to generate initializer */
static ? D_80A193E0;                                /* unable to generate initializer */
static ? D_80A193E8;                                /* unable to generate initializer */
static ? D_80A193F4;                                /* unable to generate initializer */
static ? D_80A19400;                                /* unable to generate initializer */
static ? D_80A1940C;                                /* unable to generate initializer */
static s16 D_80A19418[4] = {0, 4, 6, 0};
static ? D_80A19420;                                /* unable to generate initializer */
static Vec3f D_80A19438 = {0.0f, 1.5f, 0.7f};
static ? D_80A19444;                                /* unable to generate initializer */
static Vec3f D_80A1945C = {1.5f, 1.2f, 0.8f};
static s16 D_80A19468[6] = {0, 7, 9, 0xD, 0x13, 0};
static ? D_80A19474;                                /* unable to generate initializer */
static ? D_80A194B0;                                /* unable to generate initializer */

void func_80A16D40(void *arg0, ? *arg1, s32 arg2) {
    if ((arg2 < 0x40) && (*(arg1 + arg2) != 0)) {
        *(arg0 + (arg2 * 2)) = 0;
    }
}

void func_80A16D6C(void *arg0, ? *arg1, s16 arg2) {
    if (*(arg1 + arg2) != 0) {
        *(arg0 + (arg2 * 2)) = 0;
    }
}

void EnRaf_Init(Actor *thisx, GlobalContext *globalCtx) {
    ? sp60;
    CollisionHeader *sp54;
    s16 *temp_v0_2;
    s16 temp_a1;
    s16 temp_v0;
    s32 temp_s0;
    s32 temp_s0_2;
    Vec3f *phi_s2;
    Vec3f *phi_s1;
    s32 phi_s0;
    Vec3f *phi_s2_2;
    Vec3f *phi_s1_2;
    s32 phi_s0_2;
    EnRaf *this = (EnRaf *) thisx;

    sp60.unk_0 = (s32) D_80A193BC.unk_0;
    sp60.unk_4 = (s32) D_80A193BC.unk_4;
    sp60.unk_8 = (s32) D_80A193BC.unk_8;
    sp54 = NULL;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck_RelocateMeshHeader(&D_06000108, &sp54);
    this->unk_144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp54);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_3D0, (Actor *) this, &D_80A18EE0);
    this->actor.targetMode = 3;
    this->actor.colChkInfo.mass = 0xFF;
    SkelAnime_InitSV(globalCtx, &this->unk_15C, &D_06003428, &D_06000A64, &this->unk_1A0, &this->unk_1E8, 0xC);
    phi_s2 = &this->unk_2C4;
    phi_s1 = &this->unk_234;
    phi_s0 = 0;
    do {
        Math_Vec3f_Copy(phi_s2, (Vec3f *) &sp60);
        Math_Vec3f_Copy(phi_s1, (Vec3f *) &sp60);
        temp_s0 = phi_s0 + 0xC;
        phi_s2 = &phi_s2[1];
        phi_s1 = &phi_s1[1];
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x90);
    this->actor.colChkInfo.damageTable = &D_80A1939C;
    temp_v0 = this->actor.params;
    this->unk_3C0 = temp_v0 & 0x7F;
    this->actor.colChkInfo.health = gGameInfo->data[2401] + 2;
    this->unk_3BE = ((s32) temp_v0 >> 0xC) & 0xF;
    this->unk_3BA = ((s32) temp_v0 >> 7) & 0x1F;
    if (this->unk_3C0 == 0x7F) {
        this->unk_3C0 = -1;
    }
    if (this->unk_3BA == 0x1F) {
        this->unk_3BA = -1;
    } else {
        this->unk_3BA = 0x1E;
    }
    temp_a1 = this->unk_3C0;
    if ((((s32) temp_a1 >= 0) || (this->unk_3BE == 1) || ((gSaveContext.weekEventReg[12] & 1) != 0)) && ((phi_s0_2 = 0x18, (Flags_GetSwitch(globalCtx, (s32) temp_a1) != 0)) || (this->unk_3BE == 1))) {
        temp_v0_2 = &this->actor.home.rot.z;
        phi_s2_2 = (Vec3f *) &temp_v0_2[282];
        phi_s1_2 = (Vec3f *) &temp_v0_2[354];
        do {
            Math_Vec3f_Copy(phi_s2_2, &D_801D15B0);
            Math_Vec3f_Copy(phi_s1_2, &D_801D15B0);
            temp_s0_2 = phi_s0_2 + 0xC;
            phi_s2_2 = &phi_s2_2[1];
            phi_s1_2 = &phi_s1_2[1];
            phi_s0_2 = temp_s0_2;
        } while (temp_s0_2 != 0x84);
        func_80A18080(this);
        return;
    }
    this->unk_3B0 = Rand_ZeroFloat(1.0f) * 20000.0f;
    Actor_SetScale((Actor *) this, 0.01f);
    func_80A1712C(this);
}

void EnRaf_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;
    EnRaf *this = (EnRaf *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk_144);
    Collider_DestroyCylinder(globalCtx, &this->unk_3D0);
}

void func_80A17060(EnRaf *arg0, s32 arg1) {
    f32 sp34;
    f32 sp30;
    AnimationHeaderCommon **sp2C;
    AnimationHeaderCommon **temp_t0;
    f32 phi_f2;
    f32 phi_f0;

    temp_t0 = (arg1 * 4) + &D_80A193C8;
    sp2C = temp_t0;
    sp34 = 0.0f;
    sp30 = 1.0f;
    arg0->unk_3A0 = (f32) SkelAnime_GetFrameCount(*temp_t0);
    phi_f2 = 1.0f;
    phi_f0 = 0.0f;
    if (arg1 == 0) {
        phi_f0 = arg0->unk_3A0;
    } else if (arg1 == 1) {
        phi_f2 = 2.0f;
    }
    SkelAnime_ChangeAnim(arg0 + 0x15C, (AnimationHeader *) *temp_t0, phi_f2, phi_f0, arg0->unk_3A0, (u8) (s32) *(&D_80A193E0 + arg1), -4.0f);
}

void func_80A1712C(EnRaf *arg0) {
    ? sp3C;
    s32 temp_s0;
    Vec3f *phi_s1;
    s32 phi_s0;

    sp3C.unk_0 = (s32) D_80A193E8.unk_0;
    sp3C.unk_4 = (s32) D_80A193E8.unk_4;
    sp3C.unk_8 = (s32) D_80A193E8.unk_8;
    func_80A17060(arg0, 0);
    phi_s1 = arg0 + 0x2DC;
    phi_s0 = 0x18;
    do {
        Math_Vec3f_Copy(phi_s1, (Vec3f *) &sp3C);
        temp_s0 = phi_s0 + 0xC;
        phi_s1 = &phi_s1[1];
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x84);
    arg0->unk_3C2 = 3;
    arg0->unk_3C6 = 0;
    arg0->actionFunc = func_80A171D8;
}

void func_80A171D8(EnRaf *this, GlobalContext *globalCtx) {
    Actor *sp24;
    Actor *temp_a0_2;
    Actor *temp_a0_3;
    Actor *temp_a3;
    EnRaf *temp_a0;
    Actor *phi_a0;

    temp_a3 = globalCtx->actorCtx.actorList[2].first;
    if (this->unk_3B4 == 0) {
        if ((temp_a3->unk_14B != 3) && (this->actor.xzDistToPlayer < ((f32) gGameInfo->data[2448] + 80.0f)) && (temp_a0 = this, (temp_a3->unk_D5C == 0)) && (this = this, sp24 = temp_a3, (func_800CAF70((DynaPolyActor *) temp_a0) != 0)) && ((temp_a3->unk_A6C * 0x10) >= 0) && (this = this, sp24 = temp_a3, (globalCtx->grabPlayer(globalCtx, (Player *) temp_a3) != 0))) {
            temp_a3->parent = (Actor *) this;
            this->unk_39C = 0;
            if (temp_a3->unk_14B == 1) {
                this->unk_39C = 2;
            } else {
                temp_a3->unk_AE8 = 0x32;
            }
            this->unk_3BC = temp_a3->world.rot.y;
            func_80A17414(this);
            return;
        }
        if (((globalCtx->gameplayFrames & 1) != 0) && (temp_a0_2 = globalCtx->actorCtx.actorList[3].first, phi_a0 = temp_a0_2, (temp_a0_2 != 0))) {
loop_14:
            if (phi_a0 == this) {
                goto block_22;
            }
            if ((fabsf(phi_a0->world.pos.x - this->actor.world.pos.x) < 80.0f) && (fabsf(phi_a0->world.pos.y - this->actor.world.pos.y) < 30.0f) && (fabsf(phi_a0->world.pos.z - this->actor.world.pos.z) < 80.0f) && (phi_a0->update != 0) && (phi_a0->velocity.y != 0.0f)) {
                this = this;
                Actor_MarkForDeath(phi_a0);
                this->unk_39C = 1;
                this->unk_3D0.dim.radius = 0x1E;
                this->unk_3D0.dim.height = 0x5A;
                this->unk_3D0.dim.yShift = -0xA;
                func_80A17414(this);
                return;
            }
block_22:
            temp_a0_3 = phi_a0->next;
            phi_a0 = temp_a0_3;
            if (temp_a0_3 == 0) {
                /* Duplicate return node #23. Try simplifying control flow for better match */
                return;
            }
            goto loop_14;
        }
        /* Duplicate return node #23. Try simplifying control flow for better match */
    }
}

void func_80A17414(Actor *arg0) {
    func_80A17060((EnRaf *)1);
    arg0->unk_3C2 = 1;
    Audio_PlayActorSound2(arg0, 0x3992U);
    arg0->unk_3C6 = 1;
    arg0[1].projectedPos.x = (bitwise f32) func_80A17464;
}

void func_80A17464(EnRaf *this, GlobalContext *globalCtx) {
    Actor *sp24;
    f32 sp20;
    Actor *temp_v0;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    sp20 = this->unk_15C.animCurrentFrame;
    if ((this->unk_39C != 1) && ((temp_v0->unk_A70 & 0x80) != 0) && (this == temp_v0->parent)) {
        sp24 = temp_v0;
        Math_ApproachF((f32 *) &temp_v0->world, this->actor.world.pos.x, 0.3f, 10.0f);
        Math_ApproachF(&temp_v0->world.pos.y, this->actor.world.pos.y, 0.3f, 10.0f);
        Math_ApproachF(&temp_v0->world.pos.z, this->actor.world.pos.z, 0.3f, 10.0f);
    }
    if (this->unk_3A0 <= sp20) {
        func_80A17530(this);
    }
}

void func_80A17530(EnRaf *arg0) {
    EnRaf *temp_s0;
    s32 temp_s1;
    EnRaf *phi_s0;
    s32 phi_s1;

    func_80A17060(arg0, 2);
    arg0->unk_3C4 = 0;
    phi_s0 = arg0;
    phi_s1 = 0;
    do {
        phi_s0->unk_354 = Rand_S16Offset(8, 8) << 8;
        phi_s0->unk_356 = Rand_S16Offset(8, 8) << 8;
        temp_s1 = phi_s1 + 1;
        temp_s0 = phi_s0 + 6;
        temp_s0->unk_352 = Rand_S16Offset(8, 8) << 8;
        phi_s0 = temp_s0;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0xC);
    arg0->unk_3C2 = 2;
    arg0->unk_3C6 = 2;
    arg0->actionFunc = func_80A175E4;
}

void func_80A175E4(EnRaf *this, GlobalContext *globalCtx) {
    f32 sp30;
    PosRot *sp24;
    Actor *temp_s1;
    s16 temp_v0;

    temp_s1 = globalCtx->actorCtx.actorList[2].first;
    sp30 = this->unk_15C.animCurrentFrame;
    Math_ApproachF(&this->unk_3A4, ((f32) gGameInfo->data[2451] / 100.0f) + 0.2f, 0.2f, 0.03f);
    if (((temp_s1->unk_A70 & 0x80) != 0) && (this->unk_39C != 1) && (this == temp_s1->parent)) {
        Math_ApproachF((f32 *) &temp_s1->world, this->actor.world.pos.x, 0.3f, 10.0f);
        Math_ApproachF(&temp_s1->world.pos.y, this->actor.world.pos.y, 0.3f, 10.0f);
        Math_ApproachF(&temp_s1->world.pos.z, this->actor.world.pos.z, 0.3f, 10.0f);
    }
    if (this->unk_3A0 <= sp30) {
        if (gGameInfo->data[2452] == 0) {
            this->unk_3C4 += 1;
        }
        Audio_PlayActorSound2((Actor *) this, 0x3850U);
        temp_v0 = this->unk_39C;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {
                if (temp_v0 != 2) {
                    return;
                }
                if ((gGameInfo->data[2454] + 4) < (s32) this->unk_3C4) {
                    temp_s1->parent = NULL;
                    temp_s1->unk_AE8 = 0x3E8;
                    func_80A179C8(this, globalCtx);
                }
                /* Duplicate return node #18. Try simplifying control flow for better match */
                return;
            }
            Actor_ApplyDamage((Actor *) this);
            if ((gGameInfo->data[2454] + 4) < (s32) this->unk_3C4) {
                func_80A179C8(this, globalCtx);
                return;
            }
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return;
        }
        sp24 = &temp_s1->world;
        globalCtx->damagePlayer(globalCtx, -2);
        func_800B8E58((Actor *) this, (temp_s1->unk_A68->unk_92 + 0x6805) & 0xFFFF);
        CollisionCheck_GreenBlood(globalCtx, NULL, (Vec3f *) sp24);
        if (((gGameInfo->data[2453] + 5) < (s32) this->unk_3C4) || ((temp_s1->unk_A70 & 0x80) == 0)) {
            temp_s1->freezeTimer = 0xA;
            func_80A17848(this, globalCtx);
            return;
        }
        /* Duplicate return node #18. Try simplifying control flow for better match */
    }
}

void func_80A17848(EnRaf *arg0, GlobalContext *arg1) {
    void *sp1C;

    sp1C = arg1->actorCtx.actorList[2].first;
    func_80A17060((EnRaf *)3, (s32) arg1);
    sp1C->freezeTimer = 0xA;
    arg0->unk_3C2 = 3;
    arg0->unk_3C6 = 3;
    arg0->actionFunc = func_80A178A0;
}

void func_80A178A0(EnRaf *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    f32 sp28;
    Actor *temp_v1;
    GameInfo *temp_v0;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    sp28 = this->unk_15C.animCurrentFrame;
    sp2C = temp_v1;
    if (func_801378B8(&this->unk_15C, 10.0f) != 0) {
        temp_v1->freezeTimer = 0;
        temp_v1->parent = NULL;
        Audio_PlayActorSound2((Actor *) this, 0x3994U);
        temp_v0 = gGameInfo;
        func_800B8D50(globalCtx, (Actor *) this, (f32) temp_v0->data[2455] + 3.0f, (s16) (this->unk_3BC + 0x8000), (f32) temp_v0->data[2456] + 10.0f, 0U);
    } else if (sp28 < 10.0f) {
        temp_v1->freezeTimer = 0xA;
    }
    if (this->unk_3A0 <= sp28) {
        this->unk_3C2 = 3;
        this->unk_3C6 = 0;
        this->unk_3B4 = 0x14;
        this->actionFunc = func_80A171D8;
    }
}

void func_80A179C8(Actor *arg0, GlobalContext *arg1) {
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp98;
    f32 sp94;
    ActorContext *sp80;
    ActorContext *temp_a0;
    Vec3f *temp_s1;
    f32 *temp_s3;
    f32 *temp_s5;
    f32 temp_f0;
    f32 temp_f6;
    s16 temp_a1;
    s32 temp_s0;
    s32 temp_s2;
    s32 phi_s2;
    Vec3f *phi_s1;
    s32 phi_s0;

    temp_s3 = &spAC;
    temp_s5 = &spA0;
    temp_s3->unk_0 = D_80A193F4.unk_0;
    temp_s1 = arg0 + 0x24;
    temp_s3[1] = D_80A193F4.unk_4;
    temp_s3[2] = D_80A193F4.unk_8;
    temp_s5->unk_0 = D_80A19400.unk_0;
    temp_s5[1] = D_80A19400.unk_4;
    temp_s5[2] = D_80A19400.unk_8;
    arg0->unk_3C6 = 4;
    Math_Vec3f_Copy((Vec3f *) &sp94, temp_s1);
    temp_f0 = sp98 + 10.0f;
    temp_a0 = arg1 + 0x1CA0;
    sp80 = temp_a0;
    sp98 = temp_f0;
    Actor_Spawn(temp_a0, arg1, 0xA2, sp94, temp_f0, sp9C, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
    Audio_PlayActorSound2(arg0, 0x180EU);
    Audio_PlayActorSound2(arg0, 0x3851U);
    temp_a1 = arg0->unk_3C0;
    if ((s32) temp_a1 >= 0) {
        Actor_SetSwitchFlag(arg1, (s32) temp_a1);
    }
    arg0->unk_3C2 = 0;
    phi_s2 = 0;
    if ((gGameInfo->data[2457] + 0x1E) > 0) {
        do {
            temp_f6 = Rand_ZeroOne() - 0.5f;
            spA4 = -0.3f;
            spA0 = temp_f6 * 0.5f;
            spA8 = (Rand_ZeroOne() - 0.5f) * 0.5f;
            spAC = Rand_ZeroOne() - 0.5f;
            spB0 = Rand_ZeroOne() * 10.0f;
            spB4 = Rand_ZeroOne() - 0.5f;
            func_80A18A90(arg0, temp_s1, temp_s3, temp_s5, (Rand_ZeroFloat(1.0f) / 500.0f) + 0.002f, 0x5A);
            temp_s2 = phi_s2 + 1;
            phi_s2 = temp_s2;
        } while (temp_s2 < (gGameInfo->data[2457] + 0x1E));
    }
    phi_s1 = (Vec3f *) &arg0[2].targetArrowOffset;
    phi_s0 = 0x18;
    do {
        Math_Vec3f_Copy(phi_s1, &D_801D15B0);
        temp_s0 = phi_s0 + 0xC;
        phi_s1 = &phi_s1[1];
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x84);
    arg0->unk_3B4 = 5;
    if (arg0->unk_39C == 1) {
        func_800BC154(arg1, sp80, arg0, 5U);
        arg0->flags |= 5;
    }
    arg0[1].projectedPos.x = (bitwise f32) func_80A17C6C;
}

void func_80A17C6C(EnRaf *this, GlobalContext *globalCtx) {
    if (this->unk_3B4 == 0) {
        this->unk_3D0.dim.radius = 0x32;
        this->unk_3D0.dim.height = 0xA;
        func_800BC154(globalCtx, &globalCtx->actorCtx, (Actor *) this, 6U);
        this->actor.flags &= -6;
        func_80A18080(this);
        return;
    }
    if (this->unk_39C == 1) {
        this->unk_3D0.dim.radius = 0x50;
        this->unk_3D0.dim.height = 0x32;
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_3D0);
    }
}

void func_80A17D14(EnRaf *arg0) {
    func_80A17060((EnRaf *)4);
    arg0->unk_3C4 = 0;
    arg0->unk_3C6 = 5;
    arg0->actionFunc = func_80A17D54;
}

void func_80A17D54(EnRaf *this, GlobalContext *globalCtx) {
    s16 temp_a1;

    if (this->unk_3A0 <= this->unk_15C.animCurrentFrame) {
        this->unk_3C4 += 1;
        if ((gGameInfo->data[2402] + 2) < (s32) this->unk_3C4) {
            temp_a1 = this->unk_3C0;
            if ((s32) temp_a1 >= 0) {
                this = this;
                Actor_SetSwitchFlag(globalCtx, (s32) temp_a1);
            }
            func_80A17DDC(this);
        }
    }
}

void func_80A17DDC(EnRaf *arg0) {
    func_80A17060((EnRaf *)5);
    arg0->unk_3C6 = 6;
    arg0->unk_3B6 = 0;
    arg0->actionFunc = func_80A17E1C;
}

void func_80A17E1C(EnRaf *this, GlobalContext *globalCtx) {
    GameInfo *temp_v0;
    GameInfo *temp_v0_4;
    s16 *temp_v0_7;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s32 temp_s0;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 phi_s4;
    s32 phi_s4_2;
    Vec3f *phi_s1;
    Vec3f *phi_s2;
    s32 phi_s0;

    if (this->unk_3A0 <= this->unk_15C.animCurrentFrame) {
        this->unk_3B6 += 1;
        temp_v0 = gGameInfo;
        if ((s32) this->unk_3B6 < (temp_v0->data[2403] + 0x69)) {
            phi_s4 = 0;
            if ((temp_v0->data[2404] + 5) > 0) {
                do {
                    func_80A16D6C(Lib_SegmentedToVirtual(&D_06002EF8), &D_80A18F8C, this->unk_3C8);
                    func_80A16D40(Lib_SegmentedToVirtual(&D_060032F8), &D_80A18F0C, (s32) this->unk_3CA);
                    temp_v0_2 = this->unk_3C8;
                    if ((s32) temp_v0_2 < 0x200) {
                        this->unk_3C8 = temp_v0_2 + 1;
                    }
                    temp_v0_3 = this->unk_3CA;
                    if ((s32) temp_v0_3 < 0x40) {
                        this->unk_3CA = temp_v0_3 + 1;
                    }
                    temp_s4 = phi_s4 + 1;
                    phi_s4 = temp_s4;
                } while (temp_s4 < (gGameInfo->data[2404] + 5));
            }
        }
    }
    temp_v0_4 = gGameInfo;
    if ((temp_v0_4->data[2405] + 0x32) < (s32) this->unk_3B6) {
        phi_s4_2 = 0;
        if ((temp_v0_4->data[2406] + 5) > 0) {
            do {
                func_80A16D6C(Lib_SegmentedToVirtual(&D_06002EF8), &D_80A1918C, this->unk_3CC);
                func_80A16D40(Lib_SegmentedToVirtual(&D_060032F8), &D_80A18F4C, (s32) this->unk_3CE);
                temp_v0_5 = this->unk_3CC;
                if ((s32) temp_v0_5 < 0x200) {
                    this->unk_3CC = temp_v0_5 + 1;
                }
                temp_v0_6 = this->unk_3CE;
                if ((s32) temp_v0_6 < 0x40) {
                    this->unk_3CE = temp_v0_6 + 1;
                }
                temp_s4_2 = phi_s4_2 + 1;
                phi_s4_2 = temp_s4_2;
            } while (temp_s4_2 < (gGameInfo->data[2406] + 5));
        }
    }
    temp_v0_7 = &this->actor.home.rot.z;
    phi_s1 = (Vec3f *) &temp_v0_7[282];
    phi_s0 = 0x18;
    if ((gGameInfo->data[2407] + 0xA0) < (s32) this->unk_3B6) {
        phi_s2 = (Vec3f *) &temp_v0_7[354];
        do {
            Math_Vec3f_Copy(phi_s1, &D_801D15B0);
            Math_Vec3f_Copy(phi_s2, &D_801D15B0);
            temp_s0 = phi_s0 + 0xC;
            phi_s1 = &phi_s1[1];
            phi_s2 = &phi_s2[1];
            phi_s0 = temp_s0;
        } while (temp_s0 != 0x84);
        func_80A18080(this);
    }
}

void func_80A18080(EnRaf *arg0) {
    if (arg0->unk_3C6 == 4) {
        arg0->unk_3B4 = 0x5A;
    } else {
        arg0->unk_3C6 = 7;
    }
    arg0->actionFunc = func_80A180B4;
}

void func_80A180B4(EnRaf *this, GlobalContext *globalCtx) {
    ? sp3C;
    s16 temp_v0;
    s32 temp_s0;
    Vec3f *phi_s1;
    s32 phi_s0;

    sp3C.unk_0 = (s32) D_80A1940C.unk_0;
    sp3C.unk_4 = (s32) D_80A1940C.unk_4;
    sp3C.unk_8 = (s32) D_80A1940C.unk_8;
    if (this->unk_3B4 == 0) {
        this->unk_3C6 = 7;
    }
    temp_v0 = this->unk_3BA;
    if ((s32) temp_v0 >= 0) {
        if (temp_v0 != 0) {
            this->unk_3BA = temp_v0 - 1;
        }
        if (this->unk_3BA == 0) {
            func_80A17060(this, 3);
            phi_s1 = &this->unk_2DC;
            phi_s0 = 0x18;
            do {
                Math_Vec3f_Copy(phi_s1, (Vec3f *) &sp3C);
                temp_s0 = phi_s0 + 0xC;
                phi_s1 = &phi_s1[1];
                phi_s0 = temp_s0;
            } while (temp_s0 != 0x84);
            this->unk_3BA = ((s32) this->actor.params >> 7) & 0x1F;
            this->unk_3C2 = 3;
            this->unk_3C6 = 0;
            this->unk_3BA += 0x1E;
            this->actionFunc = func_80A171D8;
        }
    }
}

void EnRaf_Update(Actor *thisx, GlobalContext *globalCtx) {
    WaterBox *sp7C;
    f32 sp78;
    f32 sp70;
    ? sp6C;
    ColliderCylinder *temp_s0;
    f32 *temp_t9;
    f32 temp_f8;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_s5;
    f32 *phi_s3;
    EnRaf *phi_s0;
    f32 *phi_s2;
    f32 *phi_s1;
    s32 phi_s5;
    EnRaf *this = (EnRaf *) thisx;

    SkelAnime_FrameUpdateMatrix(&this->unk_15C);
    temp_v1 = this->unk_3B8;
    if (temp_v1 != 0) {
        this->unk_3B8 = temp_v1 - 1;
    }
    temp_v0 = this->unk_3B4;
    if (temp_v0 != 0) {
        this->unk_3B4 = temp_v0 - 1;
    }
    this->actionFunc(this, globalCtx);
    if ((this->unk_3C6 == 0) && ((gSaveContext.weekEventReg[12] & 1) != 0)) {
        this->unk_3C2 = 0;
        func_80A17D14(this);
        return;
    }
    if (func_800CAF70((DynaPolyActor *) this) != 0) {
        if ((this->unk_3AC > -0.1f) && (this->unk_39E == 0)) {
            this->unk_39E = 1;
            this->unk_3AC = -20.0f;
            Audio_PlayActorSound2((Actor *) this, 0x38C5U);
        }
    } else {
        this->unk_39E = 0;
    }
    this->unk_3B0 += 3000.0f;
    this->unk_3A8 = 2.0f * Math_SinS((s16) (s32) this->unk_3B0);
    if (this->unk_3BE != 2) {
        temp_t9 = &sp78;
        sp78 = (f32) gGameInfo->data[2460] + (this->actor.world.pos.y - 60.0f);
        if (func_800CA1AC(globalCtx, &globalCtx->colCtx, this->actor.world.pos.x, this->actor.world.pos.z, temp_t9, &sp7C) != 0) {
            temp_f8 = sp78 - (this->unk_3A8 + (f32) gGameInfo->data[2459]);
            sp78 = temp_f8;
            Math_ApproachF(&this->actor.world.pos.y, this->unk_3AC + temp_f8, 0.5f, 40.0f);
            if (this->unk_3B8 == 0) {
                this->unk_3B8 = 0x1E;
                if (this->unk_3C2 == 2) {
                    this->unk_3B8 = 0xA;
                }
                Math_Vec3f_Copy((Vec3f *) &sp6C, (Vec3f *) &this->actor.world);
                sp70 = sp78;
                EffectSsGRipple_Spawn(globalCtx, (Vec3f *) &sp6C, 0x28A, 0xC4E, (s16) 0);
            }
        }
    } else {
        Math_ApproachF(&this->actor.world.pos.y, (this->actor.home.pos.y + this->unk_3AC) - this->unk_3A8, 0.5f, 40.0f);
    }
    Math_ApproachZeroF(&this->unk_3AC, 0.3f, 2.0f);
    if (this->unk_3C6 == 4) {
        func_80A18B8C(this, globalCtx);
    }
    phi_s3 = (f32 *) &this->unk_234;
    phi_s0 = this;
    phi_s2 = &this->unk_234.y;
    phi_s1 = &this->unk_234.z;
    phi_s5 = 0;
    do {
        if ((s32) this->unk_3C6 < 4) {
            Math_ApproachF(phi_s3, phi_s0->unk_2C4.x, 0.4f, 0.5f);
            Math_ApproachF(phi_s2, phi_s0->unk_2C4.y, 0.4f, 0.5f);
            Math_ApproachF(phi_s1, phi_s0->unk_2C4.z, 0.4f, 0.5f);
        } else {
            Math_ApproachF(phi_s3, phi_s0->unk_2C4.x, 1.0f, 1.0f);
            Math_ApproachF(phi_s2, phi_s0->unk_2C4.y, 1.0f, 1.0f);
            Math_ApproachF(phi_s1, phi_s0->unk_2C4.z, 1.0f, 1.0f);
        }
        temp_s5 = phi_s5 + 0xC;
        phi_s3 = &phi_s3[3];
        phi_s0 += 0xC;
        phi_s2 = &phi_s2[3];
        phi_s1 = &phi_s1[3];
        phi_s5 = temp_s5;
    } while (temp_s5 != 0x90);
    temp_s0 = &this->unk_3D0;
    Collider_UpdateCylinder((Actor *) this, temp_s0);
    if ((s32) this->unk_3C6 < 4) {
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_s0);
    }
}

void func_80A1859C(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    s16 temp_v0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_v0_2;
    s32 temp_v0_3;
    void *temp_s0_3;
    void *temp_s6;
    void *temp_s6_2;
    s16 *phi_s1;
    s32 phi_s0;
    s16 *phi_s1_2;
    s32 phi_s0_2;
    s16 *phi_s1_3;
    s32 phi_s0_3;
    s16 *phi_s1_4;
    s32 phi_s0_4;
    void *phi_s6;

    temp_v0 = arg2->unk_3C2;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                phi_s6 = arg2 + (arg1 * 0xC);
            } else {
                if ((arg1 == 3) || (arg1 == 9) || (arg1 == 6)) {
                    phi_s1 = D_80A19468;
                    phi_s0 = 0;
                    do {
                        if ((s16) (s32) arg2->unk_174 == *phi_s1) {
                            Math_Vec3f_Copy(arg2 + (arg1 * 0xC) + 0x2C4, (phi_s0 * 0xC) + &D_80A19474);
                        }
                        temp_s0 = phi_s0 + 1;
                        phi_s1 += 2;
                        phi_s0 = temp_s0;
                    } while (temp_s0 != 5);
                }
                temp_v0_2 = arg1 * 0xC;
                temp_s6 = arg2 + temp_v0_2;
                phi_s6 = temp_s6;
                if ((arg1 == 4) || (temp_v0_2 == 0x78) || (temp_v0_2 == 0x54)) {
                    phi_s1_2 = D_80A19468;
                    phi_s0_2 = 0;
                    do {
                        if ((s16) (s32) arg2->unk_174 == *phi_s1_2) {
                            Math_Vec3f_Copy(temp_s6 + 0x2C4, (phi_s0_2 * 0xC) + &D_80A194B0);
                        }
                        temp_s0_2 = phi_s0_2 + 1;
                        phi_s1_2 += 2;
                        phi_s0_2 = temp_s0_2;
                    } while (temp_s0_2 != 4);
                }
            }
        } else {
            if ((arg1 == 3) || (arg1 == 9) || (arg1 == 6)) {
                Math_Vec3f_Copy(arg2 + (arg1 * 0xC) + 0x2C4, &D_80A19438);
            } else if ((arg1 == 4) || (arg1 == 0xA) || (arg1 == 7)) {
                Math_Vec3f_Copy(arg2 + (arg1 * 0xC) + 0x2C4, &D_80A1945C);
            }
            phi_s6 = arg2 + (arg1 * 0xC);
            if ((arg1 >= 2) && (arg1 < 0xB)) {
                temp_s0_3 = arg2 + (arg1 * 6);
                Matrix_RotateY((s16) (temp_s0_3->unk_356 * arg0->gameplayFrames), 1U);
                SysMatrix_InsertXRotation_s((s16) (temp_s0_3->unk_354 * arg0->gameplayFrames), 1);
                SysMatrix_InsertZRotation_s((s16) (temp_s0_3->unk_358 * arg0->gameplayFrames), 1);
                Matrix_Scale(arg2->unk_3A4 + 1.0f, 1.0f, 1.0f, 1);
                SysMatrix_InsertZRotation_s((s16) ((s32) (temp_s0_3->unk_358 * arg0->gameplayFrames) * -1), 1);
                SysMatrix_InsertXRotation_s((s16) ((s32) (temp_s0_3->unk_354 * arg0->gameplayFrames) * -1), 1);
                Matrix_RotateY((s16) ((s32) (temp_s0_3->unk_356 * arg0->gameplayFrames) * -1), 1U);
            }
        }
    } else {
        if ((arg1 == 3) || (arg1 == 9) || (arg1 == 6)) {
            phi_s1_3 = D_80A19418;
            phi_s0_3 = 0;
            do {
                if ((s16) (s32) arg2->unk_174 == *phi_s1_3) {
                    Math_Vec3f_Copy(arg2 + (arg1 * 0xC) + 0x2C4, (phi_s0_3 * 0xC) + &D_80A19420);
                }
                temp_s0_4 = phi_s0_3 + 1;
                phi_s1_3 += 2;
                phi_s0_3 = temp_s0_4;
            } while (temp_s0_4 != 3);
        }
        temp_v0_3 = arg1 * 0xC;
        temp_s6_2 = arg2 + temp_v0_3;
        phi_s6 = temp_s6_2;
        if ((arg1 == 4) || (temp_v0_3 == 0x78) || (temp_v0_3 == 0x54)) {
            phi_s1_4 = D_80A19418;
            phi_s0_4 = 0;
            do {
                if ((s16) (s32) arg2->unk_174 == *phi_s1_4) {
                    Math_Vec3f_Copy(temp_s6_2 + 0x2C4, (phi_s0_4 * 0xC) + &D_80A19444);
                }
                temp_s0_5 = phi_s0_4 + 1;
                phi_s1_4 += 2;
                phi_s0_4 = temp_s0_5;
            } while (temp_s0_5 != 3);
        }
    }
    Matrix_Scale(phi_s6->unk_234, phi_s6->unk_238, phi_s6->unk_23C, 1);
}

void EnRaf_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnRaf *this = (EnRaf *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);
    func_801343C0(globalCtx, this->unk_15C.skeleton, this->unk_15C.limbDrawTbl, (s32) this->unk_15C.dListCount, NULL, NULL, func_80A1859C, (Actor *) this);
    if (this->unk_3C6 == 4) {
        func_80A18DA0(this, globalCtx);
    }
}

void func_80A18A90(Actor *arg0, Vec3f *arg1, f32 *arg2, f32 *arg3, f32 arg4, s16 arg5) {
    s16 temp_v0;
    void *phi_s0;
    s16 phi_v0;

    phi_s0 = arg0 + 0x41C;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_s0->unk_0 == 0) {
        phi_s0->unk_0 = 1U;
        phi_s0->unk_4 = (s32) arg1->x;
        phi_s0->unk_8 = (s32) arg1->y;
        phi_s0->unk_C = (s32) arg1->z;
        phi_s0->unk_10 = (s32) arg2->unk_0;
        phi_s0->unk_14 = (s32) arg2[1];
        phi_s0->unk_18 = (s32) arg2[2];
        phi_s0->unk_1C = (s32) arg3->unk_0;
        phi_s0->unk_20 = (s32) arg3[1];
        phi_s0->unk_24 = (s32) arg3[2];
        phi_s0->unk_30 = arg4;
        phi_s0->unk_34 = arg5;
        phi_s0->unk_28 = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        phi_s0->unk_2A = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        phi_s0->unk_2C = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        return;
    }
    phi_s0 += 0x38;
    if ((s32) temp_v0 >= 0x1F) {
        return;
    }
    goto loop_1;
}

void func_80A18B8C(EnRaf *arg0, GlobalContext *arg1) {
    Vec3f *temp_s1;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v0;
    s32 temp_s3;
    void *phi_s0;
    s32 phi_s3;

    phi_s0 = arg0 + 0x41C;
    phi_s3 = 0;
    do {
        if (phi_s0->unk_0 != 0) {
            temp_f0 = phi_s0->unk_10;
            temp_f2 = phi_s0->unk_14;
            temp_f12 = phi_s0->unk_18;
            phi_s0->unk_4 = (f32) (phi_s0->unk_4 + temp_f0);
            phi_s0->unk_8 = (f32) (phi_s0->unk_8 + temp_f2);
            phi_s0->unk_C = (f32) (phi_s0->unk_C + temp_f12);
            phi_s0->unk_28 = (s16) (phi_s0->unk_28 + 0xBB8);
            phi_s0->unk_2A = (s16) (phi_s0->unk_2A + 0xBB8);
            phi_s0->unk_2C = (s16) (phi_s0->unk_2C + 0xBB8);
            phi_s0->unk_10 = (f32) (temp_f0 + phi_s0->unk_1C);
            phi_s0->unk_14 = (f32) (temp_f2 + phi_s0->unk_20);
            phi_s0->unk_18 = (f32) (temp_f12 + phi_s0->unk_24);
            if (arg0->unk_3BE != 2) {
                if (phi_s0->unk_8 < (arg0->actor.world.pos.y - 10.0f)) {
                    temp_s1 = phi_s0 + 4;
                    EffectSsGSplash_Spawn(arg1, temp_s1, NULL, NULL, (s16) 0, (s16) (s32) (phi_s0->unk_30 * 200000.0f));
                    Audio_PlaySoundAtPosition(arg1, temp_s1, 0x32, 0x2817U);
                    phi_s0->unk_0 = 0U;
                }
            } else if (phi_s0->unk_8 < (arg0->actor.world.pos.y - 10.0f)) {
                Math_ApproachZeroF(phi_s0 + 0x30, 0.2f, 0.001f);
                if (phi_s0->unk_30 <= 0.0001f) {
                    phi_s0->unk_34 = 0;
                }
            }
            temp_v0 = phi_s0->unk_34;
            if (temp_v0 != 0) {
                phi_s0->unk_34 = (s16) (temp_v0 - 1);
            } else {
                phi_s0->unk_0 = 0U;
            }
        }
        temp_s3 = phi_s3 + 1;
        phi_s0 += 0x38;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x1F);
}

void func_80A18DA0(EnRaf *arg0, GlobalContext *arg1) {
    Gfx *temp_s1;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    f32 temp_f12;
    s16 temp_s3;
    void *phi_s0;
    s16 phi_s3;

    temp_a0 = arg1->state.gfxCtx;
    temp_s2 = temp_a0;
    func_8012C28C(temp_a0);
    phi_s0 = arg0 + 0x41C;
    phi_s3 = 0;
    do {
        if (phi_s0->unk_0 != 0) {
            SysMatrix_InsertTranslation(phi_s0->unk_4, phi_s0->unk_8, phi_s0->unk_C, 0);
            temp_f12 = phi_s0->unk_30;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            SysMatrix_InsertXRotation_s(phi_s0->unk_28, 1);
            Matrix_RotateY(phi_s0->unk_2A, 1U);
            SysMatrix_InsertZRotation_s(phi_s0->unk_2C, 1);
            temp_s1 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = &temp_s1[1];
            temp_s1->words.w0 = 0xDA380003;
            temp_s1->words.w1 = Matrix_NewMtx(temp_s2);
            temp_v1 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = &temp_v1[1];
            temp_v1->words.w1 = (u32) &D_060024E0;
            temp_v1->words.w0 = 0xDE000000;
        }
        temp_s3 = phi_s3 + 1;
        phi_s0 += 0x38;
        phi_s3 = temp_s3;
    } while ((s32) temp_s3 < 0x1F);
}
