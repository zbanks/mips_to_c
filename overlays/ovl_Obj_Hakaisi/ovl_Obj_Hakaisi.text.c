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
    /* 0x03A */ char pad_3A[0x2];                   /* maybe part of unk39[3]? */
    /* 0x03C */ PosRot focus;
    /* 0x050 */ u16 sfx;
    /* 0x052 */ s16 unk_52;                         /* inferred */
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

typedef struct ObjHakaisi {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ void (*actionFunc)(ObjHakaisi *, GlobalContext *);
    /* 0x160 */ Vec3f unk_160;                      /* inferred */
    /* 0x16C */ char pad_16C[0x24];                 /* maybe part of unk_160[4]? */
    /* 0x190 */ s32 unk_190;                        /* inferred */
    /* 0x194 */ s16 unk_194;                        /* inferred */
    /* 0x196 */ s16 unk_196;                        /* inferred */
    /* 0x198 */ s16 unk_198;                        /* inferred */
    /* 0x19A */ s16 unk_19A;                        /* inferred */
    /* 0x19C */ char pad_19C[0x4];                  /* maybe part of unk_19A[3]? */
} ObjHakaisi;                                       /* size = 0x1A0 */

struct _mips2c_stack_ObjHakaisi_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjHakaisi_Draw {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_ObjHakaisi_Init {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad_3C[0x40];
    /* 0x7C */ CollisionHeader *sp7C;               /* inferred */
    /* 0x80 */ char pad_80[0x8];
};                                                  /* size = 0x88 */

struct _mips2c_stack_ObjHakaisi_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B1444C {};              /* size 0x0 */

struct _mips2c_stack_func_80B14460 {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B14510 {};              /* size 0x0 */

struct _mips2c_stack_func_80B14524 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B14558 {};              /* size 0x0 */

struct _mips2c_stack_func_80B1456C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B145F4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B14648 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B149A8 {};              /* size 0x0 */

struct _mips2c_stack_func_80B149C0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B14A24 {
    /* 0x00 */ char pad_0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80B14B6C {
    /* 0x00 */ char pad_0[0x6C];
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ char pad_78[0x8];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80B14CF8 {
    /* 0x00 */ char pad_0[0x94];
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ char pad_B8[0x8];
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_80B14F4C {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B151E0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B15254 {};              /* size 0x0 */

struct _mips2c_stack_func_80B15264 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x6];                    /* maybe part of sp28[2]? */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B15330 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ PosRot *sp30;                        /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0x44];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_80B1544C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B154A0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

void func_80B1444C(ObjHakaisi *arg0);               /* static */
void func_80B14460(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B14510(Actor *arg0);                    /* static */
void func_80B14524(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B14558(Actor *arg0);                    /* static */
void func_80B1456C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B145F4(Actor *arg0);                    /* static */
void func_80B14648(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B149A8(Actor *arg0);                    /* static */
void func_80B149C0(void *arg0, ? arg1);             /* static */
void func_80B14A24(Actor *arg0, GlobalContext *arg1, f32 arg2, f32 arg3, f32 arg4); /* static */
void func_80B14B6C(Actor *arg0, GlobalContext *arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5); /* static */
void func_80B14CF8(GlobalContext *arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4, s32 arg5, s32 arg6); /* static */
void func_80B14F4C(Actor *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_80B151E0(ObjHakaisi *arg0, GlobalContext *arg1); /* static */
void func_80B15254(s32 arg0, ? arg1);               /* static */
void func_80B15264(Actor *arg0);                    /* static */
void func_80B15330(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B1544C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B154A0(void *arg0, GraphicsContext **arg1); /* static */
extern ? D_06001F10;
extern Gfx D_060021B0;
extern ? D_06002650;
extern ? D_060029C0;
extern ? D_06002CC0;
extern CollisionHeader D_06002FC4;
static Vec3f D_80B155B0 = {0.0f, 25.0f, 30.0f};
static Vec3f D_80B155BC[3] = {{0.0f, 65.0f, 8.0f}, {0.0f, 35.0f, 8.0f}, {0.0f, 15.0f, 8.0f}};
static ? D_80B155E0;                                /* unable to generate initializer */
static ? D_80B155EC;                                /* unable to generate initializer */
static Color_RGBA8 D_80B155F8 = {0xAA, 0x82, 0x5A, 0xFF};
static Color_RGBA8 D_80B155FC = {0x64, 0x3C, 0x14, 0};
static Vec3f D_80B15600 = {1.0f, 0.0f, 0.0f};

void ObjHakaisi_Init(Actor *thisx, GlobalContext *globalCtx) {
    CollisionHeader *sp7C;
    ? sp3C;
    ActorShape *temp_s0;
    Vec3f *temp_s0_2;
    s32 temp_a1;
    u32 temp_t7;
    s32 phi_a1;
    Vec3f *phi_s0;
    Vec3f *phi_s1;
    ObjHakaisi *this = (ObjHakaisi *) thisx;

    sp7C = NULL;
    temp_t7 = this->actor.params & 0xFF;
    switch (temp_t7) {
    case 0:
        this->actor.textId = 0x13F9;
block_8:
        Actor_SetScale((Actor *) this, 1.0f);
        this->actor.targetMode = 0;
        this->actor.colChkInfo.health = 0x1E;
        if ((this->actor.params & 0xFF) == 3) {
            this->actor.draw = NULL;
            func_80B1444C(this);
            return;
        }
        BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
        BgCheck_RelocateMeshHeader(&D_06002FC4, &sp7C);
        temp_a1 = (s32) (this->actor.params & 0xFF00) >> 8;
        this->unk_144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp7C);
        this->unk_19A = 0;
        this->unk_198 = 0;
        this->unk_190 = temp_a1;
        this->unk_196 = (s16) this->actor.cutscene;
        phi_a1 = temp_a1;
        if (temp_a1 == 0xFF) {
            this->unk_190 = -1;
            phi_a1 = -1;
        }
        if ((phi_a1 != -1) && (Flags_GetSwitch(globalCtx, phi_a1) != 0)) {
            Actor_MarkForDeath((Actor *) this);
        }
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
        if (this->actor.floorPoly == 0) {
            Actor_MarkForDeath((Actor *) this);
        }
        func_800C0094(this->actor.floorPoly, this->actor.world.pos.x, this->actor.floorHeight, this->actor.world.pos.z, (MtxF *) &sp3C);
        SysMatrix_SetCurrentState((MtxF *) &sp3C);
        Matrix_RotateY(this->actor.shape.rot.y, 1U);
        Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, 1);
        SysMatrix_CopyCurrentState((MtxF *) &sp3C);
        temp_s0 = &this->actor.shape;
        func_8018219C((MtxF *) &sp3C, (Vec3s *) temp_s0, 1);
        this->unk_30 = (unaligned s32) temp_s0->unk_0;
        this->actor.world.rot.z = (s16) (u16) temp_s0->rot.z;
        SysMatrix_SetStateRotationAndTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (Vec3s *) temp_s0);
        Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, 1);
        SysMatrix_MultiplyVector3fByState(&D_80B155B0, (Vec3f *) &this->actor.focus);
        phi_s0 = D_80B155BC;
        phi_s1 = &this->unk_160;
        do {
            SysMatrix_MultiplyVector3fByState(phi_s0, phi_s1);
            temp_s0_2 = &phi_s0[1];
            phi_s0 = temp_s0_2;
            phi_s1 = &phi_s1[1];
        } while (temp_s0_2 != &D_80B155E0);
        func_80B1444C(this);
        return;
    case 1:
        this->actor.textId = 0x13FA;
        goto block_8;
    case 2:
        this->actor.textId = 0x13FB;
        goto block_8;
    case 3:
        this->actor.textId = 0x13FC;
        goto block_8;
    case 4:
    case 5:
        func_80B151E0(this, globalCtx);
        return;
    default:
        this->actor.textId = 0x1412;
        goto block_8;
    }
}

void ObjHakaisi_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjHakaisi *this = (ObjHakaisi *) thisx;
    if ((this->actor.params & 0xFF) != 3) {
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
    }
}

void func_80B1444C(ObjHakaisi *arg0) {
    arg0->actionFunc = func_80B14460;
}

void func_80B14460(Actor *arg0, GlobalContext *arg1) {
    s16 sp26;
    s16 temp_v1;
    s32 phi_v0;

    temp_v1 = arg0->shape.rot.y - arg0->yawTowardsPlayer;
    sp26 = temp_v1;
    if (func_800B84D0(arg0, arg1) != 0) {
        func_80B14510(arg0);
    } else if (arg0->textId != 0) {
        phi_v0 = (s32) temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_v0 = -(s32) temp_v1;
        }
        if (phi_v0 < 0x2000) {
            func_800B8614(arg0, arg1, 100.0f);
        }
    }
    if (arg0->unk_198 == 1) {
        func_80B14558(arg0);
    }
}

void func_80B14510(Actor *arg0) {
    arg0->unk_15C = func_80B14524;
}

void func_80B14524(Actor *arg0, GlobalContext *arg1) {
    if (func_800B867C(arg0, arg1) != 0) {
        func_80B1444C((ObjHakaisi *) arg0);
    }
}

void func_80B14558(Actor *arg0) {
    arg0->unk_15C = func_80B1456C;
}

void func_80B1456C(Actor *arg0, GlobalContext *arg1) {
    s16 temp_a2;

    temp_a2 = arg0[1].unk_52;
    if (temp_a2 != -1) {
        if (ActorCutscene_GetCanPlayNext(temp_a2) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields(arg0[1].unk_52, arg0);
        } else {
            ActorCutscene_SetIntentToPlay(arg0[1].unk_52);
        }
    }
    if ((s32) arg0->colChkInfo.health < 0x1E) {
        func_80B145F4(arg0);
        func_800C62BC(arg1, arg1 + 0x880, arg0->unk_144);
    }
}

void func_80B145F4(Actor *arg0) {
    s32 temp_t7;

    arg0->unk_19A = 0;
    temp_t7 = arg0->flags | 0x8000000;
    arg0->flags = temp_t7;
    arg0->flags = temp_t7 & ~1;
    Audio_PlayActorSound2(arg0, 0x2810U);
    arg0->unk_15C = func_80B14648;
}

void func_80B14648(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t2;
    void *temp_t3;
    void *temp_t3_2;
    void *temp_t5;
    void *temp_t7;
    void *temp_t7_2;
    void *temp_t8;
    void *temp_t8_2;

    if ((s32) arg0->unk_19A < 2) {
        temp_t8 = arg0 + (arg0[1].sfx * 0xC);
        func_80B14CF8(arg1, subroutine_arg1, temp_t8->unk_164, temp_t8->unk_168, 0x64, 0x1E, 5);
    }
    arg0->unk_19A = (s16) (arg0->unk_19A + 1);
    if (arg0->colChkInfo.health == 0) {
        temp_t7 = arg0 + (arg0[1].sfx * 0xC);
        func_80B14A24(arg0, arg1, subroutine_arg2, temp_t7->unk_164, temp_t7->unk_168);
        temp_t2 = arg0 + (arg0[1].sfx * 0xC);
        func_80B14A24(arg0, arg1, subroutine_arg2, temp_t2->unk_164, temp_t2->unk_168);
        temp_t7_2 = arg0 + (arg0[1].sfx * 0xC);
        func_80B14B6C(arg0, arg1, subroutine_arg2, temp_t7_2->unk_164, temp_t7_2->unk_168, 0x46);
        Actor_SetSwitchFlag(arg1, arg0->unk_190);
        arg0->draw = NULL;
        func_80B149A8(arg0);
    }
    temp_v0 = arg0->unk_19E;
    if ((s32) arg0->colChkInfo.health != temp_v0) {
        if (((s32) temp_v0 >= 0x15) && ((s32) arg0->colChkInfo.health < 0x15)) {
            temp_t3 = arg0 + (arg0[1].sfx * 0xC);
            func_80B14A24(arg0, arg1, subroutine_arg2, temp_t3->unk_164, temp_t3->unk_168);
            temp_t8_2 = arg0 + (arg0[1].sfx * 0xC);
            func_80B14A24(arg0, arg1, subroutine_arg2, temp_t8_2->unk_164, temp_t8_2->unk_168);
            func_80B14F4C(arg0, arg1, 0);
            temp_t3_2 = arg0 + (arg0[1].sfx * 0xC);
            func_80B14B6C(arg0, arg1, subroutine_arg2, temp_t3_2->unk_164, temp_t3_2->unk_168, 0x28);
            arg0[1].sfx = 1;
        } else if (((s32) temp_v0 >= 0xB) && ((s32) arg0->colChkInfo.health < 0xB)) {
            temp_t0 = arg0 + (arg0[1].sfx * 0xC);
            func_80B14A24(arg0, arg1, subroutine_arg2, temp_t0->unk_164, temp_t0->unk_168);
            temp_t5 = arg0 + (arg0[1].sfx * 0xC);
            func_80B14A24(arg0, arg1, subroutine_arg2, temp_t5->unk_164, temp_t5->unk_168);
            temp_t0_2 = arg0 + (arg0[1].sfx * 0xC);
            func_80B14B6C(arg0, arg1, subroutine_arg2, temp_t0_2->unk_164, temp_t0_2->unk_168, 0x3C);
            arg0[1].sfx = 2;
        }
        arg0->unk_19A = 0;
        arg0->shape.yOffset -= 3.0f;
    }
    Math_ApproachZeroF(arg0 + 0xC4, 0.8f, 100.0f);
    arg0->unk_19E = (u8) arg0->colChkInfo.health;
}

void func_80B149A8(Actor *arg0) {
    arg0->unk_19A = 0;
    arg0->unk_15C = func_80B149C0;
}

void func_80B149C0(void *arg0, ? arg1) {
    s16 temp_a0;
    s16 temp_v0;

    temp_v0 = arg0->unk_19A;
    if ((s32) temp_v0 < 0x3C) {
        arg0->unk_19A = (s16) (temp_v0 + 1);
        return;
    }
    temp_a0 = arg0->unk_196;
    if (temp_a0 != -1) {
        arg0 = arg0;
        if (ActorCutscene_GetCanPlayNext(temp_a0) == 0) {
            ActorCutscene_Stop(arg0->unk_196);
        }
    }
}

void func_80B14A24(Actor *arg0, GlobalContext *arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 *temp_s4;
    s32 temp_s0;
    s32 phi_s0;

    temp_s4 = &arg2;
    func_80B14CF8(arg1, subroutine_arg1, temp_s4[1], temp_s4[2], 0x64, 0x1E, 5);
    phi_s0 = 0;
    do {
        arg2 += Rand_Centered() * 20.0f;
        arg3 += Rand_ZeroOne() * 5.0f;
        arg4 += Rand_Centered() * 20.0f;
        EffectSsHahen_SpawnBurst(arg1, (Vec3f *) temp_s4, 5.0f, 0, (s16) 0x14, (s16) 0xF, (s16) 3, (s16) 0x1C2, (s16) 0xA, &D_060021B0);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 5);
}

void func_80B14B6C(Actor *arg0, GlobalContext *arg1, f32 arg2, f32 arg3, f32 arg4, s16 arg5) {
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 *temp_s3;
    s16 temp_s1;
    s16 temp_v0;
    s32 temp_s0;
    s32 phi_s0;

    Audio_PlayActorSound2(arg0, 0x2810U);
    temp_s3 = &sp6C;
    phi_s0 = 0;
    do {
        temp_v0 = Rand_Next();
        temp_s1 = temp_v0;
        sp6C = (Math_SinS(temp_v0) * 15.0f) + arg2;
        sp70 = (Rand_ZeroOne() * 3.0f) + arg3;
        sp74 = (Math_CosS(temp_s1) * 15.0f) + arg4;
        EffectSsHahen_SpawnBurst(arg1, (Vec3f *) temp_s3, 10.0f, 0, (s16) (s32) arg5, (s16) 0x1E, (s16) 2, (s16) 0x1C2, (s16) 0xF, &D_060021B0);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 5);
    func_80B14CF8(arg1, subroutine_arg1, (&arg2)[1], (&arg2)[2], 0x64, 0x32, 0x14);
}

void func_80B14CF8(GlobalContext *arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4, s16 arg5, s32 arg6) {
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 *temp_fp;
    f32 *temp_s6;
    f32 *temp_s7;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2;
    s16 temp_s0;
    s16 temp_v0;
    s32 temp_s1;
    s32 phi_s1;

    temp_s6 = &spA0;
    temp_s7 = &sp94;
    temp_s6->unk_0 = D_80B155E0.unk_0;
    temp_s6[1] = D_80B155E0.unk_4;
    temp_fp = &spAC;
    temp_s6[2] = D_80B155E0.unk_8;
    temp_s7->unk_0 = D_80B155EC.unk_0;
    temp_s7[1] = D_80B155EC.unk_4;
    temp_s7[2] = D_80B155EC.unk_8;
    phi_s1 = 0;
    if (arg6 > 0) {
        do {
            temp_f20 = Rand_ZeroOne() * 30.0f;
            temp_f22 = Rand_ZeroOne() * 1.5f;
            temp_v0 = Rand_Next();
            temp_s0 = temp_v0;
            spAC = (Math_SinS(temp_v0) * temp_f20) + arg1;
            spB0 = (Rand_Centered() * 4.0f) + arg2;
            spB4 = (Math_CosS(temp_s0) * temp_f20) + arg3;
            temp_f18 = spA0 + (temp_f22 * Math_SinS(temp_s0));
            spA0 = temp_f18;
            spA4 += Rand_Centered() + 0.5f;
            temp_f2 = spA8 + (temp_f22 * Math_CosS(temp_s0));
            sp94 = -0.1f * temp_f18;
            sp98 = -0.1f * spA4;
            spA8 = temp_f2;
            sp9C = -0.1f * temp_f2;
            func_800B0EB0(arg0, (Vec3f *) temp_fp, (Vec3f *) temp_s6, (Vec3f *) temp_s7, &D_80B155F8, &D_80B155FC, (s16) (s32) arg4, (s16) (s32) arg5, (s16) 0xA);
            temp_s1 = phi_s1 + 1;
            phi_s1 = temp_s1;
        } while (temp_s1 != arg6);
    }
}

void func_80B14F4C(Actor *arg0, GlobalContext *arg1, s32 arg2) {
    if (arg2 == 0) {
        Actor_Spawn(arg1 + 0x1CA0, arg1, 0x1E3, arg0->world.pos.x, arg0->world.pos.y + 55.0f, arg0->world.pos.z - 10.0f, (s16) (s32) arg0->shape.rot.x, (s16) (s32) arg0->shape.rot.y, (s16) (s32) arg0->shape.rot.z, (s16) 4);
        return;
    }
    Actor_Spawn(&arg1->actorCtx, arg1, 0x1E3, arg0->world.pos.x + 20.0f, arg0->world.pos.y + 30.0f, arg0->world.pos.z - 10.0f, (s16) (s32) arg0->shape.rot.x, (s16) (s32) arg0->shape.rot.y, (s16) (s32) arg0->shape.rot.z, (s16) 5);
}

void ObjHakaisi_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjHakaisi *this = (ObjHakaisi *) thisx;
    this->actionFunc(this, globalCtx);
}

void ObjHakaisi_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp30;
    Gfx *sp28;
    Gfx *sp20;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s16 temp_v0;
    ObjHakaisi *this = (ObjHakaisi *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = this->unk_194;
    if (temp_v0 == 0) {
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = &temp_v0_2[1];
        temp_v0_2->words.w0 = 0xDA380003;
        sp30 = temp_v0_2;
        sp30->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_3 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = &temp_v0_3[1];
        temp_v0_3->words.w1 = (u32) &D_06002650;
        temp_v0_3->words.w0 = 0xDE000000;
        return;
    }
    if (temp_v0 == 1) {
        Matrix_Scale(0.1f, 0.1f, 0.1f, 1);
        temp_v0_4 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = &temp_v0_4[1];
        temp_v0_4->words.w0 = 0xDA380003;
        sp28 = temp_v0_4;
        sp28->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_5 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = &temp_v0_5[1];
        temp_v0_5->words.w1 = (u32) &D_060029C0;
        temp_v0_5->words.w0 = 0xDE000000;
        return;
    }
    Matrix_Scale(0.1f, 0.1f, 0.1f, 1);
    temp_v0_6 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_6[1];
    temp_v0_6->words.w0 = 0xDA380003;
    sp20 = temp_v0_6;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_7 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_7[1];
    temp_v0_7->words.w1 = (u32) &D_06002CC0;
    temp_v0_7->words.w0 = 0xDE000000;
}

void func_80B151E0(Actor *arg0, GlobalContext *arg1) {
    arg0->update = func_80B1544C;
    arg0->draw = func_80B154A0;
    arg0->destroy = func_80B15254;
    Actor_SetScale(arg0, 0.1f);
    arg0->shape.yOffset = 100.0f;
    arg0->flags &= -2;
    func_80B15264(arg0);
}

void func_80B15254(Actor *arg0, GlobalContext *arg1) {

}

void func_80B15264(Actor *arg0) {
    s16 sp32;
    s32 sp28;
    s32 sp24;
    f32 temp_f16;

    sp32 = Rand_Next();
    sp24 = Rand_Next();
    sp28 = Rand_Next();
    SysMatrix_InsertRotation(unksp26, unksp2A, Rand_Next(), 0);
    SysMatrix_MultiplyVector3fByState(&D_80B15600, arg0 + 0x184);
    arg0->gravity = -1.0f;
    arg0->unk_19C = (s16) (Rand_Next() >> 0x12);
    arg0->velocity.x = Math_SinS(sp32) * 4.0f;
    temp_f16 = Math_CosS(sp32) * 4.0f;
    arg0->unk_15C = func_80B15330;
    arg0->velocity.y = 7.0f;
    arg0->velocity.z = temp_f16;
}

void func_80B15330(Actor *arg0, GlobalContext *arg1) {
    ? sp34;
    PosRot *sp30;
    PosRot *temp_v0;

    arg0->velocity.y += arg0->gravity;
    Actor_ApplyMovement(arg0);
    temp_v0 = &arg0->world;
    if ((arg0->bgCheckFlags & 2) != 0) {
        sp30 = temp_v0;
        func_80B14B6C(arg0, arg1, subroutine_arg2, temp_v0->pos.y, temp_v0->pos.z, 0x28);
        func_80B14CF8(arg1, subroutine_arg1, temp_v0->pos.y, temp_v0->pos.z, 0x64, 0x1E, 0xA);
        Actor_MarkForDeath(arg0);
    }
    SysMatrix_InsertRotationAroundUnitVector_s(arg0->unk_19C, (Vec3f *) &arg0[1].focus.pos.y, 0);
    Matrix_RotateY(arg0->shape.rot.y, 1U);
    SysMatrix_InsertXRotation_s(arg0->shape.rot.x, 1);
    SysMatrix_InsertZRotation_s(arg0->shape.rot.z, 1);
    SysMatrix_CopyCurrentState((MtxF *) &sp34);
    func_8018219C((MtxF *) &sp34, (Vec3s *) &arg0->shape, 0);
}

void func_80B1544C(Actor *arg0, GlobalContext *arg1) {
    arg0->unk_15C(arg1);
    Actor_UpdateBgCheckInfo(arg1, arg0, 0.0f, 0.0f, 0.0f, 4U);
}

void func_80B154A0(Actor *arg0, GraphicsContext **arg1) {
    Gfx *sp2C;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    temp_a0 = *arg1;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    if ((arg0->params & 0xFF) == 4) {
        temp_v0 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDA380003;
        sp2C = temp_v0;
        sp2C->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = &temp_v0_2[1];
        temp_v0_2->words.w1 = (u32) &D_06001F10;
        temp_v0_2->words.w0 = 0xDE000000;
        return;
    }
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDA380003;
    sp24 = temp_v0_3;
    sp24->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_4[1];
    temp_v0_4->words.w1 = (u32) &D_060021B0;
    temp_v0_4->words.w0 = 0xDE000000;
}
