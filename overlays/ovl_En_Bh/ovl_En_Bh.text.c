typedef struct EnBh {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x1E];                 /* maybe part of unk_188[6]? */
    /* 0x1AC */ Vec3s unk_1AC;                      /* inferred */
    /* 0x1B2 */ char pad_1B2[0x1E];                 /* maybe part of unk_1AC[6]? */
    /* 0x1D0 */ f32 unk_1D0;                        /* inferred */
    /* 0x1D4 */ f32 unk_1D4;                        /* inferred */
    /* 0x1D8 */ f32 unk_1D8;                        /* inferred */
    /* 0x1DC */ s16 unk_1DC;                        /* inferred */
    /* 0x1DE */ s16 unk_1DE;                        /* inferred */
    /* 0x1E0 */ s16 unk_1E0;                        /* inferred */
    /* 0x1E2 */ s16 unk_1E2;                        /* inferred */
    /* 0x1E4 */ s16 unk_1E4;                        /* inferred */
    /* 0x1E6 */ char pad_1E6[0x2];
    /* 0x1E8 */ void (*actionFunc)(EnBh *, GlobalContext *);
} EnBh;                                             /* size = 0x1EC */

struct _mips2c_stack_EnBh_Destroy {};               /* size 0x0 */

struct _mips2c_stack_EnBh_Draw {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnBh_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnBh_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C22DEC {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ char pad_30[0x2];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ s16 sp34;                            /* inferred */
    /* 0x36 */ s16 sp36;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

void func_80C22DEC(EnBh *, GlobalContext *);        /* static */
extern AnimationHeader D_06000074;
extern FlexSkeletonHeader D_06001E60;

void EnBh_Init(Actor *thisx, GlobalContext *globalCtx) {
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    EnBh *this = (EnBh *) thisx;

    this->actor.flags &= -2;
    Actor_SetScale((Actor *) this, 0.01f);
    temp_a1 = &this->unk_144;
    sp30 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06001E60, &D_06000074, &this->unk_188, &this->unk_1AC, 6);
    SkelAnime_ChangeAnimDefaultRepeat(sp30, &D_06000074);
    this->actionFunc = func_80C22DEC;
}

void EnBh_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBh *this = (EnBh *) thisx;

}

void func_80C22DEC(EnBh *arg0, GlobalContext *arg1) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s16 sp36;
    s16 sp34;
    s16 sp32;
    SkelAnime *sp2C;
    SkelAnime *temp_a0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f14;
    f32 temp_f6;
    f32 temp_f8;
    s16 temp_v0_2;
    s32 temp_v0;
    s16 phi_v1;

    temp_f10 = arg0->unk_1D0 - arg0->actor.world.pos.x;
    arg0->actor.speedXZ = 3.0f;
    sp44 = temp_f10;
    sp40 = arg0->unk_1D4 - arg0->actor.world.pos.y;
    temp_f8 = arg0->actor.world.pos.z;
    temp_f6 = arg0->unk_1D8;
    temp_f14 = temp_f6 - temp_f8;
    temp_f0 = sqrtf((temp_f10 * temp_f10) + (temp_f14 * temp_f14));
    sp38 = temp_f0;
    if ((arg0->unk_1DE == 0) || (temp_f0 < 100.0f)) {
        sp3C = temp_f14;
        arg0->unk_1D0 = randPlusMinusPoint5Scaled(300.0f) + arg0->actor.home.pos.x;
        arg0->unk_1D4 = randPlusMinusPoint5Scaled(100.0f) + arg0->actor.home.pos.y;
        arg0->unk_1D8 = randPlusMinusPoint5Scaled(300.0f) + arg0->actor.home.pos.z;
        temp_f0_2 = Rand_ZeroFloat(50.0f);
        arg0->unk_1E0 = 0;
        arg0->unk_1DE = (s16) (s32) (temp_f0_2 + 30.0f);
    }
    sp34 = Math_Atan2S(sp44, temp_f6 - temp_f8);
    sp36 = Math_Atan2S(sp40, sp38);
    temp_v0 = Math_SmoothStepToS(&arg0->actor.world.rot.y, sp34, 0xA, arg0->unk_1E0, (s16) 0);
    phi_v1 = (s16) temp_v0;
    if (temp_v0 >= 0x1001) {
        phi_v1 = 0x1000;
    } else if (temp_v0 < -0x1000) {
        phi_v1 = -0x1000;
    }
    sp32 = phi_v1;
    Math_ApproachS((s16 *) &arg0->actor.world.rot, sp36, 0xA, arg0->unk_1E0);
    Math_ApproachS(&arg0->actor.world.rot.z, (s16) ((s32) phi_v1 * -1), 0xA, arg0->unk_1E0);
    Math_ApproachS(&arg0->unk_1E0, 0x200, 1, 0x10);
    temp_a0 = &arg0->unk_144;
    if ((s32) arg0->unk_144.animPlaybackSpeed == 0) {
        temp_v0_2 = arg0->unk_1DC;
        if (temp_v0_2 == 0) {
            arg0->unk_144.animPlaybackSpeed = 1.0f;
            arg0->unk_1DC = (s16) (s32) (Rand_ZeroFloat(70.0f) + 50.0f);
        } else if (((temp_v0_2 & 7) == 7) && (Rand_ZeroOne() < 0.5f)) {
            arg0->unk_1E4 = (s16) (s32) randPlusMinusPoint5Scaled(3000.0f);
        }
    } else {
        sp2C = temp_a0;
        SkelAnime_FrameUpdateMatrix(temp_a0);
        if ((arg0->unk_1DC == 0) && (func_801378B8(temp_a0, 6.0f) != 0)) {
            arg0->unk_144.animPlaybackSpeed = 0.0f;
            arg0->unk_1DC = (s16) (s32) (Rand_ZeroFloat(50.0f) + 50.0f);
        }
    }
    arg0->actor.shape.rot.x = (s16) -(s32) arg0->actor.world.rot.x;
    arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
    arg0->actor.shape.rot.z = arg0->actor.world.rot.z;
    Math_ApproachS(&arg0->unk_1E2, arg0->unk_1E4, 3, 0x3E8);
}

void EnBh_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnBh *temp_a0;
    EnBh *temp_a2;
    s16 temp_v0;
    s16 temp_v0_2;
    EnBh *this = (EnBh *) thisx;

    temp_a0 = this;
    this = this;
    Actor_SetVelocityAndMoveXYRotation((Actor *) temp_a0);
    temp_a2 = this;
    temp_v0 = temp_a2->unk_1DE;
    if (temp_v0 != 0) {
        temp_a2->unk_1DE = temp_v0 - 1;
    }
    temp_v0_2 = temp_a2->unk_1DC;
    if (temp_v0_2 != 0) {
        temp_a2->unk_1DC = temp_v0_2 - 1;
    }
    this = temp_a2;
    temp_a2->actionFunc(temp_a2, globalCtx);
    Math_Vec3f_Copy((Vec3f *) &this->actor.focus, (Vec3f *) &this->actor.world);
}

void EnBh_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnBh *this = (EnBh *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SysMatrix_InsertZRotation_s(this->unk_1E2, 1);
    SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, NULL, NULL, (Actor *) this);
}
