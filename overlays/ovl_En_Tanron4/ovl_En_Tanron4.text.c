void func_80BE3DC0(EnTanron4 *arg0);                /* static */
void func_80BE3DFC(EnTanron4 *arg0, GlobalContext *arg1); /* static */
void func_80BE4268(EnTanron4 *arg0);                /* static */
void func_80BE42A4(EnTanron4 *arg0, GlobalContext *arg1); /* static */
extern AnimationHeader D_06000168;
extern FlexSkeletonHeader D_06000E68;

typedef struct EnTanron4 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s16 unk144;                        /* inferred */
    /* 0x0146 */ s16 unk146;                        /* inferred */
    /* 0x0148 */ s16 unk148;                        /* inferred */
    /* 0x014A */ u8 unk14A;                         /* inferred */
    /* 0x014B */ char pad14B[0x1];                  /* maybe part of unk14A[2]? */
    /* 0x014C */ f32 unk14C;                        /* inferred */
    /* 0x0150 */ f32 unk150;                        /* inferred */
    /* 0x0154 */ f32 unk154;                        /* inferred */
    /* 0x0158 */ s16 unk158;                        /* inferred */
    /* 0x015A */ s16 unk15A;                        /* inferred */
    /* 0x015C */ s16 unk15C;                        /* inferred */
    /* 0x015E */ char pad15E[0x2];                  /* maybe part of unk15C[2]? */
    /* 0x0160 */ f32 unk160;                        /* inferred */
    /* 0x0164 */ SkelAnime unk164;                  /* inferred */
    /* 0x01A8 */ Vec3s unk1A8;                      /* inferred */
    /* 0x01AE */ char pad1AE[0x3C];                 /* maybe part of unk1A8[11]? */
    /* 0x01EA */ Vec3s unk1EA;                      /* inferred */
    /* 0x01F0 */ char pad1F0[0x3C];                 /* maybe part of unk1EA[11]? */
    /* 0x022C */ void (*actionFunc)(EnTanron4 *, GlobalContext *);
} EnTanron4;                                        /* size 0x230 */

void EnTanron4_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnTanron4 *this = (EnTanron4 *) thisx;
    ActorContext *temp_s3;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    s16 temp_v0;
    s32 temp_s0;
    u16 temp_v0_2;
    s32 phi_s0;

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

void EnTanron4_Destroy(Actor *thisx, GlobalContext *globalCtx) {
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

void EnTanron4_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnTanron4 *this = (EnTanron4 *) thisx;
    s16 temp_a0;
    s32 temp_v1;
    EnTanron4 *phi_v0;
    s32 phi_v1;

    Actor_SetScale(&this->actor, ((f32) gGameInfo->data[1264] * 0.001f) + 0.01f);
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
        Actor_SetVelocityXYRotation(&this->actor);
        Actor_ApplyMovement(&this->actor);
    }
}

void EnTanron4_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnTanron4 *this = (EnTanron4 *) thisx;
    if (this->unk160 < 1400.0f) {
        SysMatrix_InsertZRotation_s(this->unk15A, 1);
        SkelAnime_DrawSV(globalCtx, this->unk164.skeleton, this->unk164.limbDrawTbl, (s32) this->unk164.dListCount, NULL, NULL, &this->actor);
    }
}

