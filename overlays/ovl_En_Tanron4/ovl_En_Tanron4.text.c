typedef struct EnTanron4 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s16 unk144;                         /* inferred */
    /* 0x146 */ char pad146[0x14];                  /* maybe part of unk144[11]? */
    /* 0x15A */ s16 unk15A;                         /* inferred */
    /* 0x15C */ char pad15C[0x4];                   /* maybe part of unk15A[3]? */
    /* 0x160 */ f32 unk160;                         /* inferred */
    /* 0x164 */ SkelAnime unk164;                   /* inferred */
    /* 0x1A8 */ Vec3s unk1A8;                       /* inferred */
    /* 0x1AE */ char pad1AE[0x3C];                  /* maybe part of unk1A8[11]? */
    /* 0x1EA */ Vec3s unk1EA;                       /* inferred */
    /* 0x1F0 */ char pad1F0[0x3C];                  /* maybe part of unk1EA[11]? */
    /* 0x22C */ void (*actionFunc)(EnTanron4 *, GlobalContext *);
} EnTanron4;                                        /* size = 0x230 */

struct _mips2c_stack_EnTanron4_Destroy {};          /* size 0x0 */

struct _mips2c_stack_EnTanron4_Draw {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnTanron4_Init {
    /* 0x00 */ char pad0[0x70];
};                                                  /* size = 0x70 */

struct _mips2c_stack_EnTanron4_Update {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BE3DC0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BE3DFC {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ char pad2C[0x6];                     /* maybe part of sp28[2]? */
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ s16 sp34;                            /* inferred */
    /* 0x36 */ s16 sp36;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80BE4268 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BE42A4 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ void *sp34;                          /* inferred */
    /* 0x38 */ char pad38[0x2];
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ s16 sp3C;                            /* inferred */
    /* 0x3E */ s16 sp3E;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

void func_80BE3DC0(EnTanron4 *arg0);                /* static */
void func_80BE3DFC(void *arg0, ? arg1);             /* static */
void func_80BE4268(EnTanron4 *arg0);                /* static */
void func_80BE42A4(void *arg0, ? arg1);             /* static */
extern AnimationHeader D_06000168;
extern FlexSkeletonHeader D_06000E68;

void EnTanron4_Init(EnTanron4 *this, GlobalContext *globalCtx) {
    ActorContext *temp_s3;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    s16 temp_v0;
    s32 temp_s0;
    u16 temp_v0_2;
    s32 phi_s0;
    EnTanron4 *this = (EnTanron4 *) thisx;

    SkelAnime_InitSV(globalCtx, &this->unk164, &D_06000E68, &D_06000168, &this->unk1A8, &this->unk1EA, 0xB);
    this->actor.flags &= -2;
    this->actor.speedXZ = (f32) gGameInfo->data[1296] + 3.0f;
    this->actor.uncullZoneForward = (f32) gGameInfo->data[1318] + 10000.0f;
    this->unk144 = (s16) (s32) Rand_ZeroFloat(10.0f);
    if (this->actor.params == 0x64) {
        func_80BE4268(this);
        return;
    }
    func_80BE3DC0(this);
    temp_v0 = this->actor.params;
    if ((s32) temp_v0 >= 0) {
        phi_s0 = 0;
        if ((s32) temp_v0 > 0) {
            temp_s3 = &globalCtx->actorCtx;
            do {
                temp_f20 = randPlusMinusPoint5Scaled(500.0f);
                temp_f22 = randPlusMinusPoint5Scaled(100.0f);
                temp_f24 = randPlusMinusPoint5Scaled(500.0f);
                Actor_Spawn(temp_s3, globalCtx, 0x267, temp_f20 + this->actor.world.pos.x, temp_f22 + this->actor.world.pos.y, temp_f24 + this->actor.world.pos.z, (s16) 0, (s16) (s32) Rand_ZeroFloat(65536.0f), (s16) 0, (s16) -1);
                temp_s0 = phi_s0 + 1;
                phi_s0 = temp_s0;
            } while (temp_s0 < (s32) this->actor.params);
        }
    }
    temp_v0_2 = gSaveContext.time;
    if (((s32) temp_v0_2 >= 0xD556) || ((s32) temp_v0_2 < 0x2AAA)) {
        this->unk160 = 1500.0f;
        this->actor.world.pos.y += 1500.0f;
    }
}

void EnTanron4_Destroy(EnTanron4 *this, GlobalContext *globalCtx) {
    EnTanron4 *this = (EnTanron4 *) thisx;

}

void func_80BE3DC0(EnTanron4 *arg0) {
    arg0->actionFunc = func_80BE3DFC;
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x164, &D_06000168, 0.0f);
}

void func_80BE3DFC(EnTanron4 *arg0, GlobalContext *arg1) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s16 sp36;
    s16 sp34;
    s16 sp32;
    SkelAnime *sp28;
    SkelAnime *temp_a0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f14;
    f32 temp_f8;
    s32 temp_v0_2;
    u16 temp_v0;
    u8 temp_v1;
    s16 phi_v1;

    temp_v0 = gSaveContext.time;
    if (((s32) temp_v0 >= 0xD556) || ((s32) temp_v0 < 0x2AAA)) {
        Math_ApproachF(arg0 + 0x160, 1500.0f, 1.0f, 1.0f);
    } else {
        Math_ApproachZeroF(arg0 + 0x160, 1.0f, 1.0f);
    }
    sp44 = arg0->unk14C - arg0->actor.world.pos.x;
    sp40 = (arg0->unk150 + arg0->unk160) - arg0->actor.world.pos.y;
    temp_f10 = arg0->actor.world.pos.z;
    temp_f8 = arg0->unk154;
    temp_f14 = temp_f8 - temp_f10;
    temp_f0 = sqrtf((sp44 * sp44) + (temp_f14 * temp_f14));
    sp38 = temp_f0;
    if ((arg0->unk148 == 0) || (temp_f0 < 100.0f)) {
        sp3C = temp_f14;
        arg0->unk14C = randPlusMinusPoint5Scaled(500.0f) + arg0->actor.home.pos.x;
        arg0->unk150 = randPlusMinusPoint5Scaled(100.0f) + arg0->actor.home.pos.y;
        arg0->unk154 = randPlusMinusPoint5Scaled(500.0f) + arg0->actor.home.pos.z;
        temp_f0_2 = Rand_ZeroFloat(100.0f);
        arg0->unk158 = 0;
        arg0->unk148 = (s16) (s32) (temp_f0_2 + 60.0f);
    }
    sp34 = Math_Atan2S(sp44, temp_f8 - temp_f10);
    sp36 = Math_Atan2S(sp40, sp38);
    temp_v0_2 = Math_SmoothStepToS(arg0 + 0x32, sp34, 0xA, arg0->unk158, (s16) 0);
    phi_v1 = (s16) temp_v0_2;
    if (temp_v0_2 >= 0x1001) {
        phi_v1 = 0x1000;
    } else if (temp_v0_2 < -0x1000) {
        phi_v1 = -0x1000;
    }
    sp32 = phi_v1;
    Math_ApproachS(arg0 + 0x30, sp36, 0xA, arg0->unk158);
    Math_ApproachS(arg0 + 0x34, (s16) ((s32) phi_v1 * -1), 0xA, arg0->unk158);
    Math_ApproachS(arg0 + 0x158, 0x200, 1, 0x10);
    temp_a0 = arg0 + 0x164;
    sp28 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v1 = arg0->unk14A;
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {

        } else {
            if (((arg0->unk144 & 7) == 0) && (Rand_ZeroOne() < 0.5f)) {
                arg0->unk15C = (s16) (s32) randPlusMinusPoint5Scaled((f32) gGameInfo->data[1292] + 3000.0f);
            }
            if (arg0->unk146 == 0) {
                arg0->unk14A = 0;
                arg0->unk146 = (s16) (s32) (Rand_ZeroFloat(50.0f) + 70.0f);
                SkelAnime_ChangeAnimTransitionRepeat(sp28, &D_06000168, (f32) gGameInfo->data[1291] + -10.0f);
                arg0->unk164.animCurrentFrame = (f32) gGameInfo->data[1290] + 2.0f;
            }
        }
    } else if ((arg0->unk146 == 0) && (func_801378B8(sp28, (f32) gGameInfo->data[1290] + 2.0f) != 0)) {
        arg0->unk14A = 1;
        arg0->unk146 = (s16) (s32) (Rand_ZeroFloat(50.0f) + 50.0f);
        SkelAnime_ChangeAnimTransitionRepeat(sp28, &D_06000168, (f32) gGameInfo->data[1291] + -15.0f);
        arg0->unk164.animPlaybackSpeed = 0.0f;
        arg0->unk164.animCurrentFrame = (f32) gGameInfo->data[1290] + 2.0f;
    }
    arg0->actor.shape.rot.x = (s16) -(s32) arg0->actor.world.rot.x;
    arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
    arg0->actor.shape.rot.z = arg0->actor.world.rot.z;
    Math_ApproachS(arg0 + 0x15A, arg0->unk15C, 3, (s16) (gGameInfo->data[1293] + 0x3E8));
}

void func_80BE4268(EnTanron4 *arg0) {
    arg0->actionFunc = func_80BE42A4;
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x164, &D_06000168, 0.0f);
}

void func_80BE42A4(EnTanron4 *arg0, GlobalContext *arg1) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    s16 sp3E;
    s16 sp3C;
    s16 sp3A;
    void *sp34;
    SkelAnime *sp2C;
    SkelAnime *temp_a0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f14;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f8;
    s32 temp_v0;
    u8 temp_v1;
    s16 phi_v1;

    sp34 = arg0->actor.parent;
    temp_f8 = arg0->unk14C - arg0->actor.world.pos.x;
    sp4C = temp_f8;
    sp48 = arg0->unk150 - arg0->actor.world.pos.y;
    temp_f6 = arg0->actor.world.pos.z;
    temp_f4 = arg0->unk154;
    temp_f14 = temp_f4 - temp_f6;
    temp_f0 = sqrtf((temp_f8 * temp_f8) + (temp_f14 * temp_f14));
    sp40 = temp_f0;
    if ((arg0->unk148 == 0) || (temp_f0 < 100.0f)) {
        sp44 = temp_f14;
        arg0->unk14C = randPlusMinusPoint5Scaled((f32) gGameInfo->data[1330] + 200.0f) + sp34->world.pos.x;
        arg0->unk150 = randPlusMinusPoint5Scaled((f32) gGameInfo->data[1329] + 100.0f) + (sp34->world.pos.y + (f32) gGameInfo->data[1328] + 100.0f);
        arg0->unk154 = randPlusMinusPoint5Scaled((f32) gGameInfo->data[1330] + 200.0f) + sp34->world.pos.z;
        temp_f0_2 = Rand_ZeroFloat(100.0f);
        arg0->unk158 = 0;
        arg0->unk148 = (s16) (s32) (temp_f0_2 + 60.0f);
    }
    sp3C = Math_Atan2S(sp4C, temp_f4 - temp_f6);
    sp3E = Math_Atan2S(sp48, sp40);
    temp_v0 = Math_SmoothStepToS(arg0 + 0x32, sp3C, 0xA, arg0->unk158, (s16) 0);
    phi_v1 = (s16) temp_v0;
    if (temp_v0 >= 0x1001) {
        phi_v1 = 0x1000;
    } else if (temp_v0 < -0x1000) {
        phi_v1 = -0x1000;
    }
    sp3A = phi_v1;
    Math_ApproachS(arg0 + 0x30, sp3E, 0xA, arg0->unk158);
    Math_ApproachS(arg0 + 0x34, (s16) ((s32) phi_v1 * -1), 0xA, arg0->unk158);
    Math_ApproachS(arg0 + 0x158, 0x200, 1, 0x10);
    temp_a0 = arg0 + 0x164;
    sp2C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v1 = arg0->unk14A;
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {

        } else {
            if (((arg0->unk144 & 7) == 0) && (Rand_ZeroOne() < 0.5f)) {
                arg0->unk15C = (s16) (s32) randPlusMinusPoint5Scaled((f32) gGameInfo->data[1292] + 3000.0f);
            }
            if (arg0->unk146 == 0) {
                arg0->unk14A = 0;
                arg0->unk146 = (s16) (s32) (Rand_ZeroFloat(50.0f) + 70.0f);
                SkelAnime_ChangeAnimTransitionRepeat(sp2C, &D_06000168, (f32) gGameInfo->data[1291] + -10.0f);
                arg0->unk164.animCurrentFrame = (f32) gGameInfo->data[1290] + 2.0f;
            }
        }
    } else if ((arg0->unk146 == 0) && (func_801378B8(sp2C, (f32) gGameInfo->data[1290] + 2.0f) != 0)) {
        arg0->unk14A = 1;
        arg0->unk146 = (s16) (s32) (Rand_ZeroFloat(50.0f) + 50.0f);
        SkelAnime_ChangeAnimTransitionRepeat(sp2C, &D_06000168, (f32) gGameInfo->data[1291] + -15.0f);
        arg0->unk164.animPlaybackSpeed = 0.0f;
        arg0->unk164.animCurrentFrame = (f32) gGameInfo->data[1290] + 2.0f;
    }
    arg0->actor.shape.rot.x = (s16) -(s32) arg0->actor.world.rot.x;
    arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
    arg0->actor.shape.rot.z = arg0->actor.world.rot.z;
    Math_ApproachS(arg0 + 0x15A, arg0->unk15C, 3, (s16) (gGameInfo->data[1293] + 0x3E8));
}

void EnTanron4_Update(EnTanron4 *this, GlobalContext *globalCtx) {
    s16 temp_a0;
    s32 temp_v1;
    EnTanron4 *phi_v0;
    s32 phi_v1;
    EnTanron4 *this = (EnTanron4 *) thisx;

    Actor_SetScale((Actor *) this, ((f32) gGameInfo->data[1264] * 0.001f) + 0.01f);
    phi_v1 = 0;
    if (gGameInfo->data[1311] == 0) {
        this->unk144 += 1;
        phi_v0 = this;
        do {
            temp_a0 = phi_v0->unk146;
            temp_v1 = phi_v1 + 2;
            phi_v1 = temp_v1;
            if (temp_a0 != 0) {
                phi_v0->unk146 = temp_a0 - 1;
            }
            phi_v0 += 2;
        } while (temp_v1 != 4);
        this->actionFunc(this, globalCtx);
        Actor_SetVelocityXYRotation((Actor *) this);
        Actor_ApplyMovement((Actor *) this);
    }
}

void EnTanron4_Draw(EnTanron4 *this, GlobalContext *globalCtx) {
    EnTanron4 *this = (EnTanron4 *) thisx;
    if (this->unk160 < 1400.0f) {
        SysMatrix_InsertZRotation_s(this->unk15A, 1);
        SkelAnime_DrawSV(globalCtx, this->unk164.skeleton, this->unk164.limbDrawTbl, (s32) this->unk164.dListCount, NULL, NULL, (Actor *) this);
    }
}
