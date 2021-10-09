typedef struct EnBomjimb {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x78];                 /* maybe part of unk_188[21]? */
    /* 0x206 */ Vec3s unk_206;                      /* inferred */
    /* 0x20C */ char pad_20C[0x78];                 /* maybe part of unk_206[21]? */
    /* 0x284 */ void (*actionFunc)(EnBomjimb *, GlobalContext *);
    /* 0x288 */ char pad_288[0x2];
    /* 0x28A */ s16 unk_28A;                        /* inferred */
    /* 0x28C */ char pad_28C[0x4];                  /* maybe part of unk_28A[3]? */
    /* 0x290 */ s16 unk_290;                        /* inferred */
    /* 0x292 */ char pad_292[0x2];
    /* 0x294 */ Vec3f unk_294;                      /* inferred */
    /* 0x2A0 */ Vec3f unk_2A0;                      /* inferred */
    /* 0x2AC */ s16 unk_2AC;                        /* inferred */
    /* 0x2AE */ s16 unk_2AE;                        /* inferred */
    /* 0x2B0 */ s16 unk_2B0;                        /* inferred */
    /* 0x2B2 */ s16 unk_2B2;                        /* inferred */
    /* 0x2B4 */ f32 unk_2B4;                        /* inferred */
    /* 0x2B8 */ f32 unk_2B8;                        /* inferred */
    /* 0x2BC */ char pad_2BC[0x4];
    /* 0x2C0 */ s16 unk_2C0;                        /* inferred */
    /* 0x2C2 */ s16 unk_2C2;                        /* inferred */
    /* 0x2C4 */ s16 unk_2C4;                        /* inferred */
    /* 0x2C6 */ s16 unk_2C6;                        /* inferred */
    /* 0x2C8 */ s16 unk_2C8;                        /* inferred */
    /* 0x2CA */ s16 unk_2CA;                        /* inferred */
    /* 0x2CC */ s16 unk_2CC;                        /* inferred */
    /* 0x2CE */ char pad_2CE[0x2];
    /* 0x2D0 */ s32 unk_2D0;                        /* inferred */
    /* 0x2D4 */ s16 unk_2D4;                        /* inferred */
    /* 0x2D6 */ s16 unk_2D6;                        /* inferred */
    /* 0x2D8 */ char pad_2D8[0x4];                  /* maybe part of unk_2D6[3]? */
    /* 0x2DC */ s32 unk_2DC;                        /* inferred */
    /* 0x2E0 */ u8 unk_2E0;                         /* inferred */
    /* 0x2E1 */ char pad_2E1[0x3];                  /* maybe part of unk_2E0[4]? */
    /* 0x2E4 */ Actor *unk_2E4;                     /* inferred */
    /* 0x2E8 */ ColliderCylinder unk_2E8;           /* inferred */
} EnBomjimb;                                        /* size = 0x334 */

struct _mips2c_stack_EnBomjimb_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnBomjimb_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnBomjimb_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnBomjimb_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ CollisionCheckContext *sp2C;         /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80C0113C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C011CC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C012E0 {};              /* size 0x0 */

struct _mips2c_stack_func_80C012FC {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C013B4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C013F0 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Actor *sp1C;                         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C01494 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C014E4 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ PosRot *sp38;                        /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ u32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad_60[0x1C];
    /* 0x7C */ CollisionPoly *sp7C;                 /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ Actor *sp84;                         /* inferred */
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_80C01984 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80C01A24 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C01B40 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C01B74 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C01C18 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C01CD0 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ char pad_30[0xC];                    /* maybe part of sp2C[4]? */
    /* 0x3C */ f32 sp3C;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80C01FD4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C0201C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C02108 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C0217C {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ CollisionContext *sp3C;              /* inferred */
    /* 0x40 */ PosRot *sp40;                        /* inferred */
    /* 0x44 */ char pad_44[0xC];                    /* maybe part of sp40[4]? */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ Actor *sp54;                         /* inferred */
    /* 0x58 */ CollisionPoly *sp58;                 /* inferred */
    /* 0x5C */ s32 sp5C;                            /* inferred */
    /* 0x60 */ u32 sp60;                            /* inferred */
    /* 0x64 */ ? sp64;                              /* inferred */
    /* 0x64 */ char pad_64[0xC];
    /* 0x70 */ CollisionPoly *sp70;                 /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80C0250C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C02570 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s16 *sp28;                           /* inferred */
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C0267C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C02704 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C02740 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ EnBomjimb *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C02A14 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Actor *sp1C;                         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C02BCC {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C02CA4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C02DAC {};              /* size 0x0 */

struct _mips2c_stack_func_80C02FA8 {};              /* size 0x0 */

void func_80C0113C(EnBomjimb *arg0, s32 arg1, f32 arg2, EnBomjimb *); /* static */
void func_80C011CC(Actor *arg0);                    /* static */
void func_80C012E0(EnBomjimb *arg0, EnBomjimb *);   /* static */
s32 func_80C012FC(EnBomjimb *arg0, GlobalContext *arg1); /* static */
s32 func_80C013B4(EnBomjimb *arg0);                 /* static */
s32 func_80C013F0(EnBomjimb *arg0, GlobalContext *arg1); /* static */
void func_80C01494(EnBomjimb *arg0);                /* static */
void func_80C01984(EnBomjimb *arg0, GlobalContext *arg1); /* static */
void func_80C01B40(EnBomjimb *arg0);                /* static */
void func_80C01C18(EnBomjimb *arg0, GlobalContext *arg1, Actor *, EnBomjimb *); /* static */
void func_80C01FD4(EnBomjimb *arg0);                /* static */
void func_80C02108(EnBomjimb *arg0);                /* static */
void func_80C0250C(EnBomjimb *arg0);                /* static */
void func_80C0267C(EnBomjimb *arg0);                /* static */
void func_80C02740(EnBomjimb *arg0, GlobalContext *arg1, EnBomjimb *); /* static */
void func_80C02CA4(EnBomjimb *arg0, GlobalContext *arg1); /* static */
s32 func_80C02FA8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
extern AnimationHeader D_060064B8;
extern FlexSkeletonHeader D_0600F82C;
static Actor *D_80C03170 = NULL;
static ColliderCylinderInit D_80C03194 = {
    {0xA, 0, 9, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x14, 0x1E, 0, {0, 0, 0}},
};
static ? D_80C031C0;                                /* unable to generate initializer */
static ? D_80C03218;                                /* unable to generate initializer */
static ? D_80C03230;                                /* unable to generate initializer */
static ? D_80C03260;                                /* unable to generate initializer */
static ? D_80C03274;                                /* unable to generate initializer */
static ? D_80C03280;                                /* unable to generate initializer */

void EnBomjimb_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_v1;
    u16 temp_t2;
    EnBomjimb *this = (EnBomjimb *) thisx;

    this->actor.colChkInfo.mass = 0xFF;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 19.0f);
    this->actor.gravity = -2.0f;
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_0600F82C, &D_060064B8, &this->unk_188, &this->unk_206, 0x15);
    Collider_InitAndSetCylinder(globalCtx, &this->unk_2E8, (Actor *) this, &D_80C03194);
    this->actor.targetMode = 6;
    Actor_SetScale((Actor *) this, 0.01f);
    temp_v0 = this->actor.params;
    this->unk_2C6 = ((s32) temp_v0 >> 4) & 0xF;
    this->unk_2B2 = ((s32) temp_v0 >> 8) & 0xFF;
    if (this->unk_2C6 != 0) {
        this->unk_2C8 = (temp_v0 & 0xF) + 1;
    }
    if ((s32) this->unk_2C8 < 0) {
        this->unk_2C8 = 0;
    }
    if ((s32) this->unk_2C6 < 0) {
        this->unk_2C6 = 0;
    }
    temp_v1 = gSaveContext.weekEventReg[73] & 0x10;
    if ((temp_v1 != 0) || ((gSaveContext.weekEventReg[85] & 2) != 0)) {
        temp_t2 = (u16) this->unk_2C8;
        switch (temp_t2) {
        case 0:
            if ((gSaveContext.weekEventReg[11] & 1) != 0) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            goto block_20;
        case 1:
            if ((gSaveContext.weekEventReg[11] & 2) != 0) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            goto block_20;
        case 2:
            if ((gSaveContext.weekEventReg[11] & 4) != 0) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            goto block_20;
        case 3:
            if ((gSaveContext.weekEventReg[11] & 8) != 0) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            goto block_20;
        case 4:
            if ((gSaveContext.weekEventReg[11] & 0x10) != 0) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            goto block_20;
        }
    } else {
    default:
block_20:
        if (((temp_v1 == 0) && ((gSaveContext.weekEventReg[85] & 2) == 0)) || ((gSaveContext.weekEventReg[75] & 0x40) != 0)) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        Math_Vec3f_Copy(&this->unk_2A0, (Vec3f *) &this->actor.home);
        temp_v0_2 = this->unk_2C6;
        if ((temp_v0_2 == 0) || (temp_v0_2 == 1) || (temp_v0_2 != 2)) {
            func_80C01494(this);
            return;
        }
        func_80C01984(this, globalCtx);
    }
}

void EnBomjimb_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBomjimb *this = (EnBomjimb *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_2E8);
}

void func_80C0113C(EnBomjimb *arg0, s32 arg1, f32 arg2) {
    f32 temp_f0;
    s32 temp_v1;

    arg0->unk_2DC = arg1;
    temp_f0 = (f32) SkelAnime_GetFrameCount(*(&D_80C031C0 + (arg1 * 4)));
    temp_v1 = arg0->unk_2DC;
    arg0->unk_2B8 = temp_f0;
    SkelAnime_ChangeAnim(arg0 + 0x144, *(&D_80C031C0 + (temp_v1 * 4)), arg2, 0.0f, temp_f0, (u8) (s32) *(&D_80C03218 + temp_v1), -4.0f);
}

void func_80C011CC(Actor *arg0) {
    SkelAnime *sp24;
    Actor *temp_a0_2;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    if ((arg0->unk_2DC == 5) && ((sp24 = temp_a0, (func_801378B8(temp_a0, 9.0f) != 0)) || (func_801378B8(temp_a0, 10.0f) != 0) || (func_801378B8(sp24, 17.0f) != 0) || (func_801378B8(sp24, 18.0f) != 0))) {
        Audio_PlayActorSound2(arg0, 0x292CU);
    }
    temp_a0_2 = arg0 + 0x144;
    if ((arg0->unk_2DC == 0x13) && ((sp24 = (SkelAnime *) temp_a0_2, (func_801378B8((SkelAnime *) temp_a0_2, 2.0f) != 0)) || (func_801378B8((SkelAnime *) temp_a0_2, 6.0f) != 0))) {
        Audio_PlayActorSound2(arg0, 0x292CU);
    }
    if ((arg0->unk_2DC == 0x12) && (func_801378B8((SkelAnime *) (arg0 + 0x144), 15.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x292DU);
    }
    if ((arg0->unk_2DC == 7) && (func_801378B8((SkelAnime *) (arg0 + 0x144), 8.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x292DU);
    }
}

void func_80C012E0(EnBomjimb *arg0) {
    arg0->unk_2C0 = 0;
    arg0->unk_2AE = 0;
    arg0->unk_2B0 = 0;
    arg0->unk_2CC = 0;
    arg0->unk_290 = 0;
}

s32 func_80C012FC(EnBomjimb *arg0, GlobalContext *arg1) {
    void *sp1C;

    arg0 = arg0;
    sp1C = arg1->actorCtx.actorList[2].first;
    if ((func_801690CC(arg1) == 0) && (arg0->actor.xzDistToPlayer < 40.0f) && (fabsf(sp1C->world.pos.y - arg0->actor.world.pos.y) < 50.0f) && (arg1->msgCtx.unk11F10 == 0)) {
        arg0->actor.speedXZ = 0.0f;
        func_80C02740(arg0, arg1, arg0);
        return 1;
    }
    return 0;
}

s32 func_80C013B4(EnBomjimb *arg0) {
    s32 phi_v0;

    phi_v0 = 0;
    if ((arg0->unk_2E8.base.acFlags & 2) != 0) {
        func_80C0267C();
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 func_80C013F0(EnBomjimb *arg0, GlobalContext *arg1) {
    Actor *sp1C;
    Actor *temp_a2;

    if (((arg0->unk_2E8.base.ocFlags1 & 2) != 0) && (temp_a2 = arg0->unk_2E8.base.oc, (temp_a2->id == 0x81)) && (D_80C03170 == 0) && (temp_a2->update != 0) && (sp1C = temp_a2, arg0 = arg0, (Actor_HasParent(temp_a2, arg1) == 0))) {
        D_80C03170 = temp_a2;
        arg0->unk_2E4 = temp_a2;
        func_80C01C18(arg0, arg1, temp_a2, arg0);
        return 1;
    }
    return 0;
}

void func_80C01494(EnBomjimb *arg0) {
    EnBomjimb *temp_a0;
    EnBomjimb *temp_a2;

    temp_a2 = arg0;
    temp_a0 = temp_a2;
    arg0 = temp_a2;
    func_80C012E0(temp_a0, temp_a2);
    Math_Vec3f_Copy(arg0 + 0x2A0, arg0 + 0x24);
    arg0->unk_2CA = 3;
    arg0->actionFunc = func_80C014E4;
}

void func_80C014E4(EnBomjimb *this, GlobalContext *globalCtx) {
    Actor *sp84;
    f32 sp80;
    CollisionPoly *sp7C;
    ? sp60;
    f32 sp5C;
    f32 sp54;
    f32 sp50;
    f32 sp48;
    u32 sp44;
    PosRot *sp38;
    PosRot *temp_a0;
    PosRot *temp_a1;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;
    f32 phi_f0;

    sp84 = globalCtx->actorCtx.actorList[2].first;
    sp80 = this->unk_144.animCurrentFrame;
    if ((func_80C012FC(this) == 0) && (func_80C013B4(this) == 0) && (func_80C013F0(this, globalCtx) == 0)) {
        temp_v0 = this->unk_2CC;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {

            } else {
                if (sp80 >= 0.0f) {
                    this->unk_2D6 = Math_Vec3f_Yaw((Vec3f *) &this->actor.world, &this->unk_294);
                    Math_SmoothStepToS(&this->actor.world.rot.y, this->unk_2D6, 0xA, 0x7D0, (s16) 0x14);
                }
                temp_a1 = &this->actor.world;
                temp_v1 = this->actor.world.rot.y - this->unk_2D6;
                phi_v0 = temp_v1;
                if ((s32) temp_v1 < 0) {
                    phi_v0 = (s16) -(s32) temp_v1;
                }
                if (((s32) phi_v0 < 0x100) && (sp38 = temp_a1, Math_Vec3f_Copy((Vec3f *) &sp54, (Vec3f *) temp_a1), sp54 += Math_SinS(this->actor.world.rot.y) * 60.0f, sp5C += Math_CosS(this->actor.world.rot.y) * 60.0f, (func_800C55C4(&globalCtx->colCtx, (Vec3f *) temp_a1, (Vec3f *) &sp54, (Vec3f *) &sp60, &sp7C, 1U, 0U, 0U, 1U, &sp44) != 0))) {
                    this->unk_2AE = 0;
                    if (Rand_ZeroOne() < 0.5f) {
                        func_80C0113C(this, 0x14, 1.0f);
                    } else {
                        func_80C0113C(this, 0, 1.0f);
                    }
                    this->unk_2CC = 0;
                    this->unk_2B4 = 0.0f;
                } else {
                    temp_f12 = this->unk_294.x;
                    temp_f2 = temp_f12 - this->actor.world.pos.x;
                    temp_f14 = this->unk_294.z - this->actor.world.pos.z;
                    if ((this->unk_2B0 == 0) || (sqrtf((temp_f2 * temp_f2) + (temp_f14 * temp_f14)) < 4.0f)) {
                        this->unk_2AE = Rand_S16Offset(0x14, 0x14);
                        if ((this->unk_2AE & 1) == 0) {
                            func_80C0113C(this, 0x14, 1.0f);
                        } else {
                            func_80C0113C(this, 0, 1.0f);
                        }
                        this->unk_2CC = 0;
                        this->unk_2B4 = 0.0f;
                    } else if (sp80 >= 0.0f) {
                        Math_ApproachF((f32 *) &this->actor.world, temp_f12, 0.3f, this->unk_2B4);
                        Math_ApproachF(&this->actor.world.pos.z, this->unk_294.z, 0.3f, this->unk_2B4);
                        Math_ApproachF(&this->unk_2B4, 1.0f, 0.3f, 0.5f);
                    }
                }
            }
        } else if (this->unk_2AE == 0) {
            Math_Vec3f_Copy((Vec3f *) &sp48, (Vec3f *) &this->actor.home);
            sp48 += randPlusMinusPoint5Scaled(150.0f);
            temp_f0 = randPlusMinusPoint5Scaled(150.0f);
            temp_a0 = &this->actor.world;
            sp38 = temp_a0;
            sp50 += temp_f0;
            if ((s32) (s16) (this->actor.world.rot.y - Math_Vec3f_Yaw((Vec3f *) temp_a0, (Vec3f *) &sp48)) < 0) {
                phi_v1 = (s32) (s16) (this->actor.world.rot.y - Math_Vec3f_Yaw((Vec3f *) sp38, (Vec3f *) &sp48)) * -0x10000;
            } else {
                phi_v1 = (this->actor.world.rot.y - Math_Vec3f_Yaw((Vec3f *) temp_a0, (Vec3f *) &sp48)) << 0x10;
            }
            if (((phi_v1 >> 0x10) < 0x4000) && (func_800C55C4(&globalCtx->colCtx, (Vec3f *) sp38, (Vec3f *) &sp48, (Vec3f *) &sp60, &sp7C, 1U, 0U, 0U, 1U, &sp44) == 0)) {
                func_80C0113C(this, 5, 1.0f);
                Math_Vec3f_Copy(&this->unk_294, (Vec3f *) &sp48);
                this->unk_2B0 = Rand_S16Offset(0x1E, 0x32);
                this->unk_2CC += 1;
            }
        }
        if (sp84->unk_A74 != 0x1000000) {
            temp_v0_2 = this->actor.yawTowardsPlayer - this->actor.world.rot.y;
            phi_v1_2 = temp_v0_2 << 0x10;
            phi_f0 = 200.0f;
            if ((s32) temp_v0_2 < 0) {
                phi_v1_2 = (s32) temp_v0_2 * -0x10000;
            }
            if ((phi_v1_2 >> 0x10) >= 0x2891) {
                phi_f0 = 150.0f;
            }
            if (this->actor.xzDistToPlayer < phi_f0) {
                func_80C02108(this);
            }
        }
    }
}

void func_80C01984(EnBomjimb *arg0, GlobalContext *arg1) {
    Actor *temp_v0;

    func_80C012E0(arg0);
    temp_v0 = Actor_Spawn(arg1 + 0x1CA0, arg1, 0x11, arg0->actor.world.pos.x, arg0->actor.world.pos.y + 30.0f, arg0->actor.world.pos.z, (s16) 0, (s16) (s32) arg0->actor.world.rot.y, (s16) 0, (s16) 2);
    arg0->unk_2E4 = temp_v0;
    if (temp_v0 != 0) {
        func_80C0113C(arg0, 0xB, 1.0f);
    }
    arg0->unk_2CA = 0;
    arg0->actionFunc = func_80C01A24;
}

void func_80C01A24(EnBomjimb *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    u8 temp_v1;

    temp_v1 = this->unk_2E8.base.acFlags;
    this->actor.gravity = -0.1f;
    if ((temp_v1 & 2) != 0) {
        temp_v0 = this->unk_2E4;
        this->unk_2E8.base.acFlags = temp_v1 & 0xFFFD;
        if ((temp_v0 != 0) && (temp_v0->update != 0)) {
            temp_v0->unk_2C4 = 90000.0f;
        }
        this->actor.speedXZ = 0.0f;
        this->unk_2E4 = NULL;
        this->actor.gravity = -2.0f;
        func_80C02108(this);
        return;
    }
    if ((this->actor.xzDistToPlayer < 200.0f) && (fabsf(globalCtx->actorCtx.actorList[2].first->world.pos.y - this->actor.world.pos.y) < 40.0f)) {
        this->unk_2C0 = 1;
    }
    if (this->unk_2C0 != 0) {
        Math_ApproachF(&this->actor.speedXZ, 6.0f, 0.5f, 2.0f);
    }
    if ((this->unk_2C0 != 0) && ((this->actor.bgCheckFlags & 1) == 0)) {
        func_80C01B40(this);
    }
}

void func_80C01B40(EnBomjimb *arg0) {
    func_80C012E0();
    arg0->unk_2CA = 0;
    arg0->actionFunc = func_80C01B74;
}

void func_80C01B74(EnBomjimb *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    u8 temp_v1;

    Math_ApproachF(&this->actor.speedXZ, 6.0f, 0.5f, 2.0f);
    temp_v1 = this->unk_2E8.base.acFlags;
    if (((temp_v1 & 2) != 0) || ((this->actor.bgCheckFlags & 1) != 0)) {
        temp_v0 = this->unk_2E4;
        this->unk_2E8.base.acFlags = temp_v1 & 0xFFFD;
        if ((temp_v0 != 0) && (temp_v0->update != 0)) {
            temp_v0->unk_2C4 = 90000.0f;
        }
        this->actor.speedXZ = 0.0f;
        this->unk_2E4 = NULL;
        this->actor.gravity = -2.0f;
        func_80C02108(this);
    }
}

void func_80C01C18(EnBomjimb *arg0, GlobalContext *arg1) {
    void *temp_v0;
    void *temp_v0_2;

    func_80C012E0();
    temp_v0 = arg0->unk_2E4;
    if ((temp_v0 != 0) && (temp_v0->update != 0)) {
        temp_v0->velocity.y = 8.0f;
        arg0->unk_2E4->shape.rot.z = 0xFA0 - ((s16) (arg1->gameplayFrames & 2) * 0xFA0);
        temp_v0_2 = arg0->unk_2E4;
        arg0->unk_294.y = arg0->actor.world.pos.y;
        arg0->unk_294.x = temp_v0_2->world.pos.x;
        arg0->unk_294.z = temp_v0_2->world.pos.z;
    }
    arg0->actor.speedXZ = 0.0f;
    arg0->unk_2CA = 2;
    arg0->actionFunc = func_80C01CD0;
}

void func_80C01CD0(EnBomjimb *this, GlobalContext *globalCtx) {
    f32 sp3C;
    PosRot *sp2C;
    Vec3f *sp28;
    Actor *temp_a2;
    Actor *temp_a2_2;
    Actor *temp_a2_3;
    Actor *temp_a2_4;
    Actor *temp_a2_5;
    Actor *temp_a2_6;
    PosRot *temp_a0;
    Vec3f *temp_a1;
    f32 temp_f12;
    f32 temp_f2;
    Actor *phi_a2;

    temp_a2 = this->unk_2E4;
    if ((temp_a2 != 0) && ((temp_a2->update == 0) || (sp3C = this->unk_144.animCurrentFrame, (Actor_HasParent(temp_a2, globalCtx) != 0)))) {
        this->actor.draw = EnBomjimb_Draw;
        D_80C03170 = NULL;
        this->unk_2E4 = NULL;
        func_80C02108(this);
        return;
    }
    temp_a0 = &this->actor.world;
    temp_a1 = &this->unk_294;
    if (this->unk_2DC != 7) {
        sp2C = temp_a0;
        sp28 = temp_a1;
        Math_SmoothStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw((Vec3f *) temp_a0, temp_a1), 1, 0xBB8, (s16) 0);
        Math_ApproachF((f32 *) temp_a0, this->unk_294.x, 0.3f, 2.0f);
        Math_ApproachF(&this->actor.world.pos.z, this->unk_294.z, 0.3f, 2.0f);
        temp_f2 = this->actor.world.pos.x - this->unk_294.x;
        temp_f12 = this->actor.world.pos.z - this->unk_294.z;
        if (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < 3.0f) {
            func_80C0113C((bitwise EnBomjimb *) temp_f12, (s32) this, 1e-44.0f, (EnBomjimb *)0x3F800000);
            Math_Vec3f_Copy((Vec3f *) sp2C, sp28);
        }
    } else if (this->unk_2B8 <= this->unk_144.animCurrentFrame) {
        this->actor.draw = NULL;
    }
    if ((this->unk_2C0 == 0) && ((this->unk_2E4->bgCheckFlags & 1) != 0)) {
        Audio_PlayActorSound2((Actor *) this, 0x28ABU);
        this->unk_2C0 = 1;
    }
    if (this->unk_2AE == 0) {
        if (this->actor.draw == 0) {
            this->unk_2AE = Rand_S16Offset(0x14, 0x1E);
            this->unk_2E4->shape.rot.z = 0x3E8;
            return;
        }
        temp_a2_2 = this->unk_2E4;
        this->unk_2AE = 0xA;
        if ((temp_a2_2 != 0) && (temp_a2_2->update != 0)) {
            if ((globalCtx->gameplayFrames & 0xF) == 0) {
                temp_a2_2->shape.rot.z = (s16) -(s32) temp_a2_2->shape.rot.z;
                temp_a2_3 = this->unk_2E4;
                temp_a2_3->shape.rot.z = (s16) (s32) ((f32) temp_a2_3->shape.rot.z * 0.1f);
            }
            phi_a2 = this->unk_2E4;
            if (fabsf((f32) this->unk_2E4->shape.rot.z) < 100.0f) {
                goto block_23;
            }
        }
        /* Duplicate return node #24. Try simplifying control flow for better match */
        return;
    }
    if (this->actor.draw == 0) {
        temp_a2_4 = this->unk_2E4;
        temp_a2_4->shape.rot.z = (s16) -(s32) temp_a2_4->shape.rot.z;
        temp_a2_5 = this->unk_2E4;
        temp_a2_5->shape.rot.z = (s16) (s32) ((f32) temp_a2_5->shape.rot.z * 0.1f);
        temp_a2_6 = this->unk_2E4;
        phi_a2 = temp_a2_6;
        if (fabsf((f32) temp_a2_6->shape.rot.z) < 100.0f) {
block_23:
            phi_a2->shape.rot.z = 0;
        }
    }
}

void func_80C01FD4(EnBomjimb *arg0) {
    arg0->actor.textId = 0x72D;
    func_80C0113C((EnBomjimb *)9, 0x3F800000);
    arg0->unk_2CA = 4;
    arg0->actionFunc = func_80C0201C;
}

void func_80C0201C(EnBomjimb *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 phi_v1;

    temp_v0 = this->actor.yawTowardsPlayer - this->actor.world.rot.y;
    phi_v1 = temp_v0 << 0x10;
    if ((s32) temp_v0 < 0) {
        phi_v1 = (s32) temp_v0 * -0x10000;
    }
    this->unk_290 = 0;
    if ((this->actor.xzDistToPlayer < 200.0f) && ((phi_v1 >> 0x10) < 0x61A8)) {
        this->unk_290 = this->actor.yawTowardsPlayer - this->actor.world.rot.y;
        temp_v0_2 = this->unk_290;
        if ((s32) temp_v0_2 >= 0x2711) {
            this->unk_290 = 0x2710;
        } else if ((s32) temp_v0_2 < -0x2710) {
            this->unk_290 = -0x2710;
        }
    }
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->unk_2CA = 0xA;
        this->actionFunc = func_80C02A14;
        return;
    }
    func_800B8614((Actor *) this, globalCtx, 40.0f);
}

void func_80C02108(EnBomjimb *arg0) {
    s16 temp_v0;

    func_80C0113C(arg0, 6, 1.0f);
    temp_v0 = arg0->actor.yawTowardsPlayer;
    arg0->unk_2D6 = temp_v0 + 0x8000;
    arg0->actor.world.rot.y = temp_v0;
    func_80C012E0(arg0);
    Math_Vec3f_Copy(&arg0->unk_2A0, (Vec3f *) &arg0->actor.world);
    arg0->unk_2D4 = 0;
    arg0->unk_2CA = 5;
    arg0->actionFunc = func_80C0217C;
}

void func_80C0217C(EnBomjimb *this, GlobalContext *globalCtx) {
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    CollisionPoly *sp70;
    ? sp64;
    u32 sp60;
    s32 sp5C;
    CollisionPoly *sp58;
    Actor *sp54;
    s32 sp50;
    PosRot *sp40;
    CollisionContext *sp3C;
    CollisionContext *temp_a0;
    PosRot *temp_a1;
    f32 temp_f16;
    f32 temp_f16_2;
    s16 temp_v0;

    sp5C = (s32) this->actor.floorBgId;
    sp58 = this->actor.floorPoly;
    sp50 = 0;
    sp54 = globalCtx->actorCtx.actorList[2].first;
    if ((func_80C012FC(this) == 0) && (func_80C013B4(this) == 0) && (func_80C013F0(this, globalCtx) == 0)) {
        if (sp54->unk_A74 == 0x1000000) {
            Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xBB8, (s16) 0);
            func_80C01494(this);
            return;
        }
        if (this->unk_2DC == 6) {
            if (this->unk_2B8 <= this->unk_144.animCurrentFrame) {
                func_80C0113C(this, 0x13, 2.0f);
                return;
            }
            /* Duplicate return node #28. Try simplifying control flow for better match */
            return;
        }
        Math_ApproachF(&this->actor.speedXZ, 8.0f, 0.5f, 2.0f);
        temp_a1 = &this->actor.world;
        sp40 = temp_a1;
        Math_Vec3f_Copy((Vec3f *) &sp74, (Vec3f *) temp_a1);
        temp_f16 = sp74 + (Math_SinS(this->actor.world.rot.y) * 50.0f);
        sp78 += 20.0f;
        sp74 = temp_f16;
        temp_f16_2 = Math_CosS(this->actor.world.rot.y) * 50.0f;
        temp_a0 = &globalCtx->colCtx;
        sp3C = temp_a0;
        sp7C += temp_f16_2;
        if (func_800C55C4(temp_a0, (Vec3f *) temp_a1, (Vec3f *) &sp74, (Vec3f *) &sp64, &sp70, 1U, 0U, 0U, 1U, &sp60) != 0) {
            temp_v0 = (this->actor.world.rot.y - this->actor.yawTowardsPlayer) - 0x8000;
            this->unk_2D6 = temp_v0;
            if ((s32) temp_v0 < 0) {
                this->unk_2D6 += (s32) Rand_ZeroFloat(512.0f) + 0x4000;
                if (this->unk_2D0 != 0) {
                    this->unk_2D6 += (s32) Rand_ZeroFloat(512.0f) + 0x4000;
                }
                this->unk_2D0 = 1;
            } else {
                this->unk_2D6 -= (s32) Rand_ZeroFloat(512.0f) + 0x4000;
                if (this->unk_2D0 != 0) {
                    this->unk_2D6 -= (s32) Rand_ZeroFloat(512.0f) + 0x4000;
                }
                this->unk_2D0 = 1;
            }
            sp50 = 1;
        }
        if (sp50 == 0) {
            this->unk_2D0 = 0;
            if (this->actor.xzDistToPlayer < 60.0f) {
                this->unk_2D6 = this->actor.yawTowardsPlayer + 0x8000;
            }
        }
        this->actor.world.rot.y = this->unk_2D6 + this->unk_2D4;
        if (func_800C99AC(sp3C, sp58, sp5C) != 0) {
            if ((s32) (s16) ((this->actor.world.rot.y - this->actor.yawTowardsPlayer) - 0x8000) < 0) {
                this->unk_2D4 += -0x1000;
            } else {
                this->unk_2D4 += 0x1000;
            }
            this->actor.world.rot.y = this->unk_2D6 + this->unk_2D4;
            return;
        }
        this->unk_2D4 = 0;
        if ((sp50 == 0) && (this->actor.xzDistToPlayer > 200.0f)) {
            func_80C0250C(this);
        }
        /* Duplicate return node #28. Try simplifying control flow for better match */
    }
}

void func_80C0250C(EnBomjimb *arg0) {
    func_80C0113C((EnBomjimb *)0xF, 0x3F800000);
    arg0->unk_2D4 = 0;
    arg0->actor.speedXZ = 0.0f;
    arg0->unk_2D6 = arg0->actor.yawTowardsPlayer + 0x8000;
    func_80C012E0(arg0);
    arg0->unk_2CA = 6;
    arg0->actionFunc = func_80C02570;
}

void func_80C02570(EnBomjimb *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    s16 *sp28;
    f32 temp_f0;
    s16 *temp_a0;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    if ((func_80C012FC(this) == 0) && (func_80C013B4(this) == 0) && (temp_a0 = &this->actor.world.rot.y, (func_80C013F0(this, globalCtx) == 0))) {
        sp28 = temp_a0;
        Math_SmoothStepToS(temp_a0, this->actor.yawTowardsPlayer, 1, 0x1388, (s16) 0);
        temp_f0 = this->actor.xzDistToPlayer;
        if (temp_f0 < 200.0f) {
            this->unk_2D6 = this->actor.yawTowardsPlayer + 0x8000;
            func_80C0113C(this, 0x13, 2.0f);
            this->actionFunc = func_80C0217C;
            return;
        }
        if ((sp2C->unk_A74 == 0x1000000) || (temp_f0 > 410.0f)) {
            Math_SmoothStepToS(temp_a0, this->actor.yawTowardsPlayer, 1, 0xBB8, (s16) 0);
            func_80C01494(this);
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_80C0267C(EnBomjimb *arg0) {
    s32 temp_t9;

    func_80C012E0(arg0);
    func_80C0113C(arg0, 8, 1.0f);
    arg0->unk_2AE = 0x28;
    arg0->unk_2C2 = 0;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.world.rot.y = arg0->actor.yawTowardsPlayer;
    temp_t9 = (s32) Rand_ZeroFloat(60.0f);
    arg0->unk_2CA = 7;
    arg0->actionFunc = func_80C02704;
    arg0->unk_2C4 = temp_t9 + 0x14;
}

void func_80C02704(EnBomjimb *this, GlobalContext *globalCtx) {
    if ((func_80C012FC() == 0) && (this->unk_2AE == 0)) {
        func_80C0250C(this);
    }
}

void func_80C02740(EnBomjimb *arg0, GlobalContext *arg1) {
    EnBomjimb *sp24;
    Actor *temp_v0;
    EnBomjimb *temp_a3;
    u16 temp_t8;
    u8 temp_v1;

    temp_a3 = arg1->actorCtx.actorList[2].first;
    sp24 = temp_a3;
    func_80C012E0(arg0, temp_a3);
    func_80C0113C(arg0, 0x15, 1.0f);
    temp_v1 = temp_a3->unk_14B;
    if ((temp_v1 != 3) && (temp_v1 != 4)) {
        sp24 = temp_a3;
        func_80C0113C(arg0, 0x11, 1.0f, temp_a3);
        func_801518B0(arg1, 0x72EU, (Actor *) arg0);
        temp_a3->actor.freezeTimer = 3;
        temp_a3->unk_A6C = (s32) (temp_a3->unk_A6C | 0x10000000);
        func_80C012E0(arg0);
        arg0->unk_2CA = 9;
        arg0->actionFunc = func_80C02BCC;
        return;
    }
    if (((temp_v1 == 3) && ((gSaveContext.weekEventReg[73] & 0x10) == 0)) || ((temp_v1 == 4) && ((gSaveContext.weekEventReg[85] & 2) == 0))) {
        sp24 = temp_a3;
        func_80C0113C(arg0, 0x11, 1.0f, temp_a3);
        func_801518B0(arg1, 0x72EU, (Actor *) arg0);
        temp_a3->actor.freezeTimer = 3;
        temp_a3->unk_A6C = (s32) (temp_a3->unk_A6C | 0x10000000);
        func_80C012E0(arg0);
        arg0->unk_2CA = 9;
        arg0->actionFunc = func_80C02BCC;
        return;
    }
    func_801518B0(arg1, *(&D_80C03230 + (gSaveContext.unk_FE6 * 2)), (Actor *) arg0);
    gSaveContext.unk_FE7[gSaveContext.unk_FE6] = arg0->unk_2C8 + 1;
    gSaveContext.unk_FE6 += 1;
    if ((s32) gSaveContext.unk_FE6 >= 5) {
        func_801A3098(0x922U);
    } else {
        Audio_PlayActorSound2((Actor *) arg0, 0x4823U);
    }
    temp_t8 = (u16) arg0->unk_2C8;
    switch (temp_t8) {
    case 0:
        gSaveContext.weekEventReg[76] |= 1;
        gSaveContext.weekEventReg[11] |= 1;
        break;
    case 1:
        gSaveContext.weekEventReg[76] |= 2;
        gSaveContext.weekEventReg[11] |= 2;
        break;
    case 2:
        gSaveContext.weekEventReg[76] |= 4;
        gSaveContext.weekEventReg[11] |= 4;
        break;
    case 3:
        gSaveContext.weekEventReg[76] |= 8;
        gSaveContext.weekEventReg[11] |= 8;
        break;
    case 4:
        gSaveContext.weekEventReg[76] |= 0x10;
        gSaveContext.weekEventReg[11] |= 0x10;
        break;
    }
    if (func_801690CC(arg1) == 0) {
        temp_v0 = arg1->actorCtx.actorList[2].first;
        temp_v0->freezeTimer = 3;
        temp_v0->unk_A6C = (s32) (temp_v0->unk_A6C | 0x10000000);
    }
    arg0->unk_2CA = 8;
    arg0->actionFunc = func_80C02A14;
}

void func_80C02A14(EnBomjimb *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    Actor *temp_v1;
    EnBomjimb *temp_a0_2;
    SkelAnime *temp_a0;
    s16 temp_v0_2;
    s32 temp_v0;

    temp_v0 = this->unk_2DC;
    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if (temp_v0 == 0x15) {
        temp_v1->freezeTimer = 3;
        if (this->unk_2B8 <= this->unk_144.animCurrentFrame) {
            func_80C0113C(this, 9, 1.0f, this);
            return;
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return;
    }
    if ((this->unk_2CA == 8) && (temp_v0 == 9)) {
        temp_v1->freezeTimer = 3;
        temp_a0 = &this->unk_144;
        if (this->unk_2E0 == 0) {
            sp1C = temp_v1;
            this = this;
            if (func_801378B8(temp_a0, 7.0f) != 0) {
                temp_a0_2 = this;
                sp1C = temp_v1;
                this = this;
                Audio_PlayActorSound2((Actor *) temp_a0_2, 0x2896U);
                this->unk_2E0 = 1;
            }
        }
    }
    if ((this->unk_2DC == 0xF) && (this->unk_2CA == 8)) {
        globalCtx->actorCtx.actorList[2].first->freezeTimer = 3;
    }
    sp1C = globalCtx->actorCtx.actorList[2].first;
    this = this;
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (sp1C = globalCtx->actorCtx.actorList[2].first, this = this, (func_80147624(globalCtx) != 0))) {
        sp1C = globalCtx->actorCtx.actorList[2].first;
        this = this;
        func_801477B4(globalCtx);
        temp_v0_2 = this->unk_2CA;
        if ((temp_v0_2 == 8) && ((s32) gSaveContext.unk_FE6 >= 5)) {
            func_80C02CA4(this, globalCtx);
            return;
        }
        if (temp_v0_2 == 8) {
            globalCtx->actorCtx.actorList[2].first->unk_A6C = (s32) (globalCtx->actorCtx.actorList[2].first->unk_A6C & 0xEFFFFFFF);
        }
        func_80C01FD4(this);
        /* Duplicate return node #19. Try simplifying control flow for better match */
    }
}

void func_80C02BCC(EnBomjimb *this, GlobalContext *globalCtx) {
    Actor *sp2C;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x1388, (s16) 0);
    if (this->unk_2C0 == 0) {
        sp2C->freezeTimer = 3;
        if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
            func_801477B4(globalCtx);
            this->unk_2C0 = 1;
            sp2C->unk_A6C = (s32) (sp2C->unk_A6C & 0xEFFFFFFF);
            return;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return;
    }
    if (this->actor.xzDistToPlayer > 200.0f) {
        func_80C01494(this);
    }
}

void func_80C02CA4(EnBomjimb *arg0, GlobalContext *arg1) {
    if (gGameInfo->data[2413] == 0) {
        arg1->nextEntranceIndex = *(arg1->setupExitList + (arg0->unk_2B2 * 2));
        gSaveContext.nextCutsceneIndex = 0;
        Scene_SetExitFade(arg1);
        arg1->sceneLoadFlag = 0x14;
    } else {
        arg1->nextEntranceIndex = Entrance_CreateIndexFromSpawn(5);
        gSaveContext.nextCutsceneIndex = 0;
        arg1->sceneLoadFlag = 0x14;
        arg1->unk_1887F = 0x56;
        gSaveContext.nextTransition = 3;
    }
    gSaveContext.weekEventReg[75] |= 0x40;
    gSaveContext.weekEventReg[83] |= 4;
    arg0->actionFunc = func_80C02DAC;
}

void func_80C02DAC(EnBomjimb *this, GlobalContext *globalCtx) {
    globalCtx->actorCtx.actorList[2].first->freezeTimer = 3;
}

void EnBomjimb_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp2C;
    ColliderCylinder *sp28;
    Actor *temp_v0_4;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    EnBomjimb *this = (EnBomjimb *) thisx;

    temp_v0 = this->unk_2B0;
    if (temp_v0 != 0) {
        this->unk_2B0 = temp_v0 - 1;
    }
    temp_v0_2 = this->unk_2AE;
    if (temp_v0_2 != 0) {
        this->unk_2AE = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk_2AC;
    if (temp_v0_3 != 0) {
        this->unk_2AC = temp_v0_3 - 1;
    }
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    this->actor.shape.rot.y = this->actor.world.rot.y;
    func_80C011CC((Actor *) this);
    Actor_SetHeight((Actor *) this, 20.0f);
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    if (this->unk_2CA == 0) {
        temp_v0_4 = this->unk_2E4;
        if ((temp_v0_4 != 0) && (temp_v0_4->update != 0)) {
            Math_Vec3f_Copy((Vec3f *) &temp_v0_4->world, (Vec3f *) &this->actor.world);
            if ((this->actor.bgCheckFlags & 1) != 0) {
                this->unk_2E4->world.pos.y = this->actor.world.pos.y + 35.0f;
            } else {
                this->unk_2E4->world.pos.y = this->actor.world.pos.y + 25.0f;
            }
        }
    }
    Math_SmoothStepToS(&this->unk_28A, this->unk_290, 1, 0x1388, (s16) 0);
    if (this->unk_2C4 == 0) {
        this->unk_2C2 += 1;
        if ((s32) this->unk_2C2 >= 3) {
            this->unk_2C2 = 0;
            this->unk_2C4 = (s32) Rand_ZeroFloat(60.0f) + 0x14;
        }
    }
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 50.0f, 0x1DU);
    temp_a1 = &this->unk_2E8;
    sp28 = temp_a1;
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    temp_a1_2 = &globalCtx->colChkCtx;
    sp2C = temp_a1_2;
    CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) sp28);
    if (this->unk_2CA != 2) {
        CollisionCheck_SetOC(globalCtx, temp_a1_2, (Collider *) sp28);
    }
}

s32 func_80C02FA8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0xF) {
        *arg2 = NULL;
    }
    if (arg1 == 0x11) {
        arg4->x += arg5->unk_28A;
        arg4->z += arg5->unk_288;
    }
    if ((arg1 == 0x13) && (arg5->unk_2C8 != 0)) {
        *arg2 = NULL;
    }
    if ((arg1 == 0x14) && (arg5->unk_2C8 == 0)) {
        *arg2 = NULL;
    }
    return 0;
}

void EnBomjimb_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp38;
    Gfx *sp34;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    EnBomjimb *this = (EnBomjimb *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp38 = temp_v0;
    sp38->words.w1 = Lib_SegmentedToVirtual(*(&D_80C03274 + (this->unk_2C2 * 4)));
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp34 = temp_v0_2;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_80C03280 + (this->unk_2C8 * 4)));
    temp_v0_3 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060028;
    sp30 = temp_v0_3;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80C03260 + (this->unk_2C8 * 4)));
    Scene_SetRenderModeXlu(globalCtx, 0, 1U);
    SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80C02FA8, NULL, (Actor *) this);
}
