typedef struct EnHata {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ SkelAnime unk15C;                   /* inferred */
    /* 0x1A0 */ Vec3s unk1A0;                       /* inferred */
    /* 0x1A6 */ char pad1A6[0x78];                  /* maybe part of unk1A0[21]? */
    /* 0x21E */ Vec3s unk21E;                       /* inferred */
    /* 0x224 */ char pad224[0x78];                  /* maybe part of unk21E[21]? */
    /* 0x29C */ s16 unk29C;                         /* inferred */
    /* 0x29E */ char pad29E[0x2];
    /* 0x2A0 */ s16 unk2A0;                         /* inferred */
    /* 0x2A2 */ char pad2A2[0x2];
    /* 0x2A4 */ f32 unk2A4;                         /* inferred */
    /* 0x2A8 */ f32 unk2A8;                         /* inferred */
    /* 0x2AC */ f32 unk2AC;                         /* inferred */
} EnHata;                                           /* size = 0x2B0 */

struct _mips2c_stack_EnHata_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnHata_Draw {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnHata_Init {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnHata_Update {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ f32 *sp24;                           /* inferred */
    /* 0x28 */ char pad28[0x8];                     /* maybe part of sp24[3]? */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_8089EC68 {};              /* size 0x0 */

s32 func_8089EC68(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
extern CollisionHeader D_060000C0;
extern AnimationHeaderCommon D_06000444;
extern SkeletonHeader D_06002FD0;

void EnHata_Init(EnHata *this, GlobalContext *globalCtx) {
    f32 sp34;
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    f32 temp_f0;
    EnHata *this = (EnHata *) thisx;

    temp_a1 = &this->unk15C;
    sp30 = temp_a1;
    SkelAnime_Init(globalCtx, temp_a1, &D_06002FD0, NULL, &this->unk1A0, &this->unk21E, 0x15);
    temp_f0 = (f32) SkelAnime_GetFrameCount(&D_06000444);
    sp34 = temp_f0;
    SkelAnime_ChangeAnim(sp30, (AnimationHeader *) &D_06000444, 1.0f, 0.0f, temp_f0, (u8) 0, 0.0f);
    this->unk15C.animCurrentFrame = (f32) (s32) Rand_ZeroFloat(sp34);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_060000C0);
    Actor_SetScale((Actor *) this, 0.013f);
    this->actor.uncullZoneScale = 500.0f;
    this->actor.uncullZoneDownward = 500.0f;
    this->actor.uncullZoneForward = 2200.0f;
}

void EnHata_Destroy(EnHata *this, GlobalContext *globalCtx) {
    EnHata *this = (EnHata *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void EnHata_Update(EnHata *this, GlobalContext *globalCtx) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 *sp24;
    f32 *temp_a0;
    f32 temp_f10;
    f32 temp_f2;
    f32 phi_f0;
    f32 phi_f0_2;
    f32 phi_f0_3;
    EnHata *this = (EnHata *) thisx;

    temp_f2 = globalCtx->envCtx.windSpeed / 120.0f;
    phi_f0 = 0.0f;
    if (temp_f2 < 0.0f) {

    } else if (temp_f2 > 1.0f) {
        phi_f0 = 1.0f;
    } else {
        phi_f0 = temp_f2;
    }
    this->unk15C.animPlaybackSpeed = 2.75f * phi_f0;
    sp30 = phi_f0;
    sp24 = globalCtx + 0x10000;
    this->unk15C.animPlaybackSpeed += 1.0f + Rand_ZeroFloat(1.25f);
    temp_a0 = &this->unk2A4;
    sp34 = (f32) globalCtx->envCtx.windDir.x;
    temp_f10 = (f32) globalCtx->envCtx.windDir.y + ((1.0f - phi_f0) * 240.0f);
    sp38 = temp_f10;
    if (temp_f10 < -118.0f) {
        sp38 = -118.0f;
    } else {
        if (sp38 > 118.0f) {
            phi_f0_2 = 118.0f;
        } else {
            phi_f0_2 = sp38;
        }
        sp38 = phi_f0_2;
    }
    sp3C = (f32) globalCtx->envCtx.windDir.z;
    phi_f0_3 = 0.1f;
    if (phi_f0 < 0.1f) {

    } else if (phi_f0 > 0.4f) {
        phi_f0_3 = 0.4f;
    } else {
        phi_f0_3 = phi_f0;
    }
    sp24 = temp_a0;
    sp30 = phi_f0_3;
    Math_ApproachF(temp_a0, sp34, phi_f0_3, 1000.0f);
    Math_ApproachF(&this->unk2A8, sp38, phi_f0_3, 1000.0f);
    Math_ApproachF(&this->unk2AC, sp3C, phi_f0_3, 1000.0f);
    sp34.unk0 = sp24->unk0;
    sp34.unk4 = (s32) sp24->unk4;
    sp34.unk8 = (s32) sp24->unk8;
    this->unk29C = Math_Vec3f_Pitch(&D_801D15B0, (Vec3f *) &sp34);
    this->unk29C = (s16) -(s32) this->unk29C;
    this->unk2A0 = Math_Vec3f_Yaw(&D_801D15B0, (Vec3f *) &sp34);
    this->unk2A0 += -0x4000;
    SkelAnime_FrameUpdateMatrix(&this->unk15C);
}

s32 func_8089EC68(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if ((arg1 == 4) || (arg1 == 0xD)) {
        arg4->y += arg5->unk29C;
        arg4->z += arg5->unk2A0;
    }
    return 0;
}

void EnHata_Draw(EnHata *this, GlobalContext *globalCtx) {
    EnHata *this = (EnHata *) thisx;
    func_8012C5B0(globalCtx->state.gfxCtx);
    SkelAnime_Draw(globalCtx, this->unk15C.skeleton, this->unk15C.limbDrawTbl, func_8089EC68, NULL, (Actor *) this);
}
