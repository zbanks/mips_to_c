typedef struct BgDyYoseizo {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(BgDyYoseizo *, GlobalContext *);
    /* 0x0148 */ SkelAnime unk_148;                 /* inferred */
    /* 0x018C */ Vec3s unk_18C;                     /* inferred */
    /* 0x0192 */ char pad_192[0xA2];                /* maybe part of unk_18C[28]? */
    /* 0x0234 */ Vec3s unk_234;                     /* inferred */
    /* 0x023A */ char pad_23A[0xAE];                /* maybe part of unk_234[30]? */
    /* 0x02E8 */ Actor *unk_2E8;                    /* inferred */
    /* 0x02EC */ f32 unk_2EC;                       /* inferred */
    /* 0x02F0 */ f32 unk_2F0;                       /* inferred */
    /* 0x02F4 */ f32 unk_2F4;                       /* inferred */
    /* 0x02F8 */ s16 unk_2F8;                       /* inferred */
    /* 0x02FA */ s16 unk_2FA;                       /* inferred */
    /* 0x02FC */ s16 unk_2FC;                       /* inferred */
    /* 0x02FE */ s16 unk_2FE;                       /* inferred */
    /* 0x0300 */ s16 unk_300;                       /* inferred */
    /* 0x0302 */ u16 unk_302;                       /* inferred */
    /* 0x0304 */ char pad_304[0x3200];              /* maybe part of unk_302[6401]? */
} BgDyYoseizo;                                      /* size = 0x3504 */

struct _mips2c_stack_BgDyYoseizo_Destroy {};        /* size 0x0 */

struct _mips2c_stack_BgDyYoseizo_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_BgDyYoseizo_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A0A96C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A0A9E4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A0AA40 {
    /* 0x00 */ char pad_0[0xAC];
    /* 0xAC */ u8 spAC;                             /* inferred */
    /* 0xAD */ u8 spAD;                             /* inferred */
    /* 0xAE */ u8 spAE;                             /* inferred */
    /* 0xAF */ char pad_AF[0x1];
    /* 0xB0 */ u8 spB0;                             /* inferred */
    /* 0xB1 */ u8 spB1;                             /* inferred */
    /* 0xB2 */ u8 spB2;                             /* inferred */
    /* 0xB3 */ char pad_B3[0x1];
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
    /* 0xC8 */ f32 spC8;                            /* inferred */
    /* 0xCC */ f32 spCC;                            /* inferred */
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
};                                                  /* size = 0xD8 */

struct _mips2c_stack_func_80A0AD50 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A0AE1C {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A0AFDC {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A0B078 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A0B184 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A0B290 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A0B35C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A0B500 {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ SkelAnime *sp40;                     /* inferred */
    /* 0x44 */ char pad_44[0x10];                   /* maybe part of sp40[5]? */
    /* 0x54 */ Actor *sp54;                         /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80A0B5F0 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A0B75C {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A0B834 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A0B8CC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ char pad_30[0x6];                    /* maybe part of sp2C[2]? */
    /* 0x36 */ u16 sp36;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A0BB08 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A0BCD8 {};              /* size 0x0 */

struct _mips2c_stack_func_80A0BD40 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ GraphicsContext *sp3C;               /* inferred */
    /* 0x40 */ u32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A0BE60 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A0BF70 {
    /* 0x00 */ char pad_0[0x7C];
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ char pad_80[0x10];                   /* maybe part of sp7C[5]? */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ f32 sp94;                            /* inferred */
    /* 0x98 */ f32 sp98;                            /* inferred */
    /* 0x9C */ f32 sp9C;                            /* inferred */
    /* 0xA0 */ f32 spA0;                            /* inferred */
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ char pad_A8[0x8];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_80A0C270 {
    /* 0x00 */ char pad_0[0x50];
};                                                  /* size = 0x50 */

? Parameter_AddMagic(GlobalContext *, s16, SaveContext *); /* extern */
void func_80A0A96C(BgDyYoseizo *arg0);              /* static */
void func_80A0A9E4(BgDyYoseizo *arg0, GlobalContext *arg1); /* static */
void func_80A0AA40(Actor *arg0, s16 arg1, s32 arg2); /* static */
void func_80A0AD50(Actor *arg0);                    /* static */
void func_80A0AFDC(Actor *arg0);                    /* static */
void func_80A0B834(Actor *arg0);                    /* static */
s32 func_80A0BCD8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80A0BD40(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A0BE60(Actor *arg0, f32 *arg1, f32 *arg2, f32 *arg3, u8 *arg4, u8 *arg5, f32 arg6, s32 arg7, s32 arg8); /* static */
void func_80A0BF70(BgDyYoseizo *arg0, GlobalContext *arg1); /* static */
void func_80A0C270(Actor *arg0, GlobalContext *arg1); /* static */
extern AnimationHeader D_06008090;
extern ? D_0600D1B0;
extern ? D_0600D228;
extern void D_0601C6F4;
extern FlexSkeletonHeader D_0601C8B4;
static AnimationHeaderCommon *D_80A0C4C0 = (AnimationHeaderCommon *)0x600129C;
static AnimationHeaderCommon *D_80A0C4C4 = (AnimationHeaderCommon *)0x6002338;
static AnimationHeaderCommon *D_80A0C4C8 = (AnimationHeaderCommon *)0x600C500;
static AnimationHeaderCommon *D_80A0C4CC = (AnimationHeaderCommon *)0x60045FC;
static AnimationHeaderCommon *D_80A0C4D0[2] = {(AnimationHeaderCommon *)0x6005238, (AnimationHeaderCommon *)0x6008090};
static AnimationHeader *D_80A0C4D8 = (AnimationHeader *)0x600D15C;
static AnimationHeader *D_80A0C4DC = (AnimationHeader *)0x6006DE4;
static AnimationHeader *D_80A0C4E0 = (AnimationHeader *)0x6005E20;
static ? D_80A0C4E4;                                /* unable to generate initializer */
static ? D_80A0C4F8;                                /* unable to generate initializer */
static ? D_80A0C50C;                                /* unable to generate initializer */
static ? D_80A0C514;                                /* unable to generate initializer */

void BgDyYoseizo_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgDyYoseizo *this = (BgDyYoseizo *) thisx;
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->unk_2EC = this->actor.world.pos.y + 40.0f;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    SkelAnime_InitSV(globalCtx, &this->unk_148, &D_0601C8B4, &D_06008090, &this->unk_18C, &this->unk_234, 0x1C);
    this->actionFunc = func_80A0BB08;
    Actor_SetScale((Actor *) this, 0.0f);
    this->unk_2FA = 0;
    this->unk_2FC = 0;
    this->unk_2FE = 0;
    this->unk_2F8 = 0;
    this->actor.home.rot.z = 1;
    this->unk_302 = 0;
}

void BgDyYoseizo_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgDyYoseizo *this = (BgDyYoseizo *) thisx;

}

void func_80A0A96C(BgDyYoseizo *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->unk_2FE;
    if (temp_v0 != 0) {
        arg0->unk_2FE = temp_v0 - 1;
    }
    if (arg0->unk_2FE == 0) {
        arg0->unk_2FA += 1;
        if ((s32) arg0->unk_2FA >= 3) {
            arg0->unk_2FA = 0;
            arg0->unk_2FE = (s32) Rand_ZeroFloat(60.0f) + 0x14;
        }
    }
}

void func_80A0A9E4(BgDyYoseizo *arg0, GlobalContext *arg1) {
    arg0->actor.shape.yOffset = Math_SinS((s16) (arg1->gameplayFrames * 0x3E8)) * 15.0f;
}

void func_80A0AA40(Actor *arg0, s16 arg1, s32 arg2) {
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    u8 spB2;
    u8 spB1;
    u8 spB0;
    u8 spAE;
    u8 spAD;
    u8 spAC;
    f32 temp_f0;
    f32 temp_f24;
    f32 temp_f2;
    s32 temp_lo;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s3;
    void *temp_v0;
    void *temp_v1;
    s32 phi_s1;
    f32 phi_f22;
    s32 phi_s2;
    s32 phi_s3;

    temp_f0 = arg0->scale.y;
    if (!(temp_f0 < 0.01f)) {
        temp_f24 = temp_f0 * 3500.0f;
        spC0 = Rand_ZeroOne() - 0.5f;
        spC4 = Rand_ZeroOne() - 0.5f;
        temp_f2 = Rand_ZeroOne() - 0.5f;
        spC8 = temp_f2;
        spCC = spC0 * 10.0f;
        spD0 = spC4 * 10.0f;
        spD4 = temp_f2 * 10.0f;
        phi_s3 = 0;
        if (arg2 > 0) {
            do {
                if (arg1 != 0) {
                    if (arg1 != 2) {
                        phi_s1 = 5;
                        phi_f22 = 0.2f;
                        phi_s2 = 0x32;
                        spB4 = randPlusMinusPoint5Scaled(10.0f) + arg0->world.pos.x;
                        spB8 = ((Rand_ZeroOne() - 0.5f) * (temp_f24 * 0.1f)) + (arg0->world.pos.y + temp_f24 + 50.0f);
                        spBC = arg0->world.pos.z + 30.0f;
                    } else {
                        spCC = spC0 * 100.0f;
                        spD0 = spC4 * 100.0f;
                        spD4 = spC8 * 100.0f;
                        temp_s1 = arg0->params & 0xF;
                        spB4 = arg0->world.pos.x;
                        spB8 = ((Rand_ZeroOne() - 0.5f) * (temp_f24 * 0.5f)) + (arg0->world.pos.y + temp_f24);
                        spBC = arg0->world.pos.z + 30.0f;
                        phi_s1 = temp_s1;
                        phi_f22 = 1.0f;
                        phi_s2 = 0x5A;
                    }
                } else {
                    temp_s1_2 = arg0->params & 0xF;
                    spB4 = arg0->world.pos.x;
                    spB8 = ((Rand_ZeroOne() - 0.5f) * (temp_f24 * 0.5f)) + (arg0->world.pos.y + temp_f24);
                    spBC = arg0->world.pos.z + 30.0f;
                    phi_s1 = temp_s1_2;
                    phi_f22 = 1.0f;
                    phi_s2 = 0x5A;
                }
                temp_lo = phi_s1 * 3;
                temp_v0 = &D_80A0C4E4 + temp_lo;
                temp_v1 = &D_80A0C4F8 + temp_lo;
                spB0 = temp_v0->unk_0;
                spB1 = temp_v0->unk_1;
                spB2 = temp_v0->unk_2;
                spAC = temp_v1->unk_0;
                spAD = temp_v1->unk_1;
                spAE = temp_v1->unk_2;
                func_80A0BE60(arg0, &spB4, &spCC, &spC0, &spB0, &spAC, phi_f22, phi_s2, phi_s1);
                temp_s3 = phi_s3 + 1;
                phi_s3 = temp_s3;
            } while (temp_s3 != arg2);
        }
    }
}

void func_80A0AD50(Actor *arg0) {
    f32 sp24;

    sp24 = arg0->scale.x;
    Math_ApproachF(arg0 + 0x28, arg0->home.pos.y + 40.0f, arg0->unk_2F0, 100.0f);
    Math_ApproachF(&sp24, 0.035f, arg0->unk_2F4, 0.005f);
    Math_ApproachF(arg0 + 0x2F0, 0.8f, 0.1f, 0.02f);
    Math_ApproachF(arg0 + 0x2F4, 0.2f, 0.03f, 0.05f);
    func_80A0AA40(arg0, 0, 2);
    Actor_SetScale(arg0, sp24);
}

void func_80A0AE1C(BgDyYoseizo *this, GlobalContext *globalCtx) {
    f32 sp44;
    s16 temp_v0_2;
    s32 temp_v0;

    sp44 = this->actor.scale.x;
    if (sp44 < 0.003f) {
        this->actionFunc = func_80A0BB08;
        Actor_SetScale((Actor *) this, 0.0f);
        temp_v0 = this->actor.params & 0xF;
        this->unk_2F8 = 0;
        this->unk_2F0 = 0.0f;
        this->unk_2F4 = 0.0f;
        if (temp_v0 < 4) {
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x48, this->actor.world.pos.x, this->actor.world.pos.y + 20.0f, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) (temp_v0 + 4));
        } else {
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x48, this->actor.world.pos.x, this->actor.world.pos.y + 20.0f, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
        }
        play_sound(0x4834U);
        return;
    }
    Math_ApproachF(&this->actor.world.pos.y, this->actor.home.pos.y, this->unk_2F0, 100.0f);
    Math_ApproachZeroF(&sp44, this->unk_2F4, 0.005f);
    Math_ApproachF(&this->unk_2F0, 0.8f, 0.1f, 0.02f);
    Math_ApproachF(&this->unk_2F4, 0.2f, 0.03f, 0.05f);
    temp_v0_2 = this->unk_2F8;
    this->actor.shape.rot.y += temp_v0_2;
    if ((s32) temp_v0_2 < 0x1770) {
        this->unk_2F8 = temp_v0_2 + 0x12C;
    }
    func_80A0AA40((Actor *) this, 0, 2);
    Actor_SetScale((Actor *) this, sp44);
}

void func_80A0AFDC(Actor *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x148, (AnimationHeader *) D_80A0C4C8, 0.0f, 46.0f, (f32) SkelAnime_GetFrameCount(D_80A0C4C8), (u8) 2, 0.0f);
    arg0->unk_144 = func_80A0AE1C;
    Audio_PlayActorSound2(arg0, 0x6858U);
    Audio_PlayActorSound2(arg0, 0x2880U);
    arg0->unk_2F8 = 0;
    arg0->velocity.y = 0.0f;
    arg0->unk_2F0 = 0.0f;
    arg0->unk_2F4 = 0.0f;
    arg0->shape.yOffset = 0.0f;
}

void func_80A0B078(BgDyYoseizo *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a0;

    func_80A0A9E4(this, globalCtx);
    temp_a0 = &this->unk_148;
    sp34 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 7)) {
        SkelAnime_ChangeAnim(sp34, (AnimationHeader *) D_80A0C4C0.unk_10, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(D_80A0C4C0.unk_10), (u8) 0, 0.0f);
        this->actionFunc = func_80A0B184;
        return;
    }
    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 6)) {
        func_80A0AFDC((Actor *) this);
    }
}

void func_80A0B184(BgDyYoseizo *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a0;

    func_80A0A9E4(this, globalCtx);
    temp_a0 = &this->unk_148;
    sp34 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 8)) {
        SkelAnime_ChangeAnim(sp34, (AnimationHeader *) D_80A0C4C0.unk_14, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(D_80A0C4C0.unk_14), (u8) 0, 0.0f);
        this->actionFunc = func_80A0B078;
        return;
    }
    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 6)) {
        func_80A0AFDC((Actor *) this);
    }
}

void func_80A0B290(BgDyYoseizo *this, GlobalContext *globalCtx) {
    SkelAnime *sp2C;
    SkelAnime *temp_a0;

    func_80A0A9E4(this, globalCtx);
    temp_a0 = &this->unk_148;
    sp2C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 7)) {
        SkelAnime_ChangeAnim(sp2C, (AnimationHeader *) *D_80A0C4D0, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*D_80A0C4D0), (u8) 0, -10.0f);
        this->actionFunc = func_80A0B184;
        this->unk_2FC = 0;
    }
}

void func_80A0B35C(BgDyYoseizo *this, GlobalContext *globalCtx) {
    s32 temp_v0;
    s8 temp_v0_2;
    s32 phi_v1;
    s32 phi_v1_2;

    func_80A0A9E4(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->unk_148);
    if (this->unk_300 == 0x3C) {
        if (Flags_GetSwitch(globalCtx, (s32) (this->actor.params & 0xFE00) >> 9) == 0) {
            temp_v0 = this->actor.params & 0xF;
            if (temp_v0 != 0) {
                if (temp_v0 != 2) {
                    if (temp_v0 != 3) {

                    } else if (gSaveContext.doubleDefense != 1) {
                        gSaveContext.doubleDefense = 1;
                    }
                } else if (gSaveContext.doubleMagic != 1) {
                    gSaveContext.doubleMagic = 1;
                    gSaveContext.unk_3F30 = 0x60;
                    gSaveContext.magicLevel = 0;
                }
            } else if (gSaveContext.magicAcquired != 1) {
                gSaveContext.magicAcquired = 1;
                gSaveContext.unk_3F30 = 0x30;
            }
        }
        Interface_ChangeAlpha(9U);
    }
    phi_v1 = (s32) this->unk_300;
    if (((s32) this->unk_300 < 0x32) && ((this->actor.params & 0xF) == 3)) {
        temp_v0_2 = gSaveContext.inventory.dungeonKeys[9];
        if ((s32) temp_v0_2 < 0x14) {
            gSaveContext.inventory.dungeonKeys[9] = temp_v0_2 + 1;
            phi_v1 = (s32) this->unk_300;
        }
    }
    phi_v1_2 = phi_v1;
    if (phi_v1 == 0x32) {
        gSaveContext.healthAccumulator = 0x140;
        Parameter_AddMagic(globalCtx, (s16) (gSaveContext.unk_3F30 + (gSaveContext.doubleMagic * 0x30) + 0x30), &gSaveContext);
        phi_v1_2 = (s32) this->unk_300;
    }
    if (phi_v1_2 == 0) {
        this->unk_2E8->unk_14A = 1;
        this->actionFunc = func_80A0B290;
    }
}

void func_80A0B500(BgDyYoseizo *this, GlobalContext *globalCtx) {
    Actor *sp54;
    SkelAnime *sp40;
    SkelAnime *temp_a0;

    sp54 = globalCtx->actorCtx.actorList[2].first;
    func_80A0A9E4(this);
    temp_a0 = &this->unk_148;
    sp40 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        SkelAnime_ChangeAnim(sp40, (AnimationHeader *) D_80A0C4C4, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(D_80A0C4C4), (u8) 0, 0.0f);
        this->actionFunc = func_80A0B35C;
        this->unk_2E8 = Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x175, sp54->world.pos.x, sp54->world.pos.y + 200.0f, sp54->world.pos.z, (s16) 0, (s16) 0, (s16) 0, this->actor.params & 0xF);
        this->unk_300 = 0x78;
    }
}

void func_80A0B5F0(BgDyYoseizo *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a0;

    func_80A0A9E4(this, globalCtx);
    temp_a0 = &this->unk_148;
    sp34 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        SkelAnime_ChangeAnim(sp34, (AnimationHeader *) *D_80A0C4D0, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*D_80A0C4D0), (u8) 0, 0.0f);
    }
    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 5)) {
        SkelAnime_ChangeAnim(sp34, (AnimationHeader *) D_80A0C4C0, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(D_80A0C4C0), (u8) 2, -5.0f);
        Audio_PlayActorSound2((Actor *) this, 0x6859U);
        this->unk_2FC = 1;
        this->unk_2FA = 0;
        this->actionFunc = func_80A0B500;
    }
    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 6)) {
        func_80A0AFDC((Actor *) this);
    }
    func_80A0A96C(this);
}

void func_80A0B75C(BgDyYoseizo *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a0;

    func_80A0AD50((Actor *) this);
    temp_a0 = &this->unk_148;
    sp34 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 4)) {
        this->actor.shape.rot.y = 0;
        this->actionFunc = func_80A0B5F0;
        SkelAnime_ChangeAnim(sp34, (AnimationHeader *) D_80A0C4CC, 1.0f, 2.0f, (f32) SkelAnime_GetFrameCount(D_80A0C4CC), (u8) 2, 0.0f);
        Audio_PlayActorSound2((Actor *) this, 0x6859U);
        this->unk_2F8 = 0;
    }
}

void func_80A0B834(Actor *arg0) {
    arg0->draw = func_80A0BD40;
    SkelAnime_ChangeAnim(arg0 + 0x148, (AnimationHeader *) D_80A0C4C8, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(D_80A0C4C8), (u8) 2, 0.0f);
    Audio_PlayActorSound2(arg0, 0x6858U);
    Audio_PlayActorSound2(arg0, 0x287FU);
    func_80A0AA40(arg0, 2, 0x1E);
}

void func_80A0B8CC(BgDyYoseizo *this, GlobalContext *globalCtx) {
    u16 sp36;
    Actor *sp2C;
    SkelAnime *sp24;
    Actor *temp_v1;
    GlobalContext *temp_a0_2;
    SkelAnime *temp_a0;
    u16 temp_t9;
    u16 temp_v0;
    s16 phi_v0;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    temp_a0 = &this->unk_148;
    sp24 = temp_a0;
    globalCtx = globalCtx;
    sp2C = temp_v1;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    sp36 = 0;
    if (func_800EE29C(globalCtx, 0x67U) != 0) {
        temp_a0_2 = globalCtx;
        globalCtx = globalCtx;
        sp36 = globalCtx->csCtx.npcActions[func_800EE200(temp_a0_2, 0x67U)]->unk0;
        func_800EDF24((Actor *) this, globalCtx, func_800EE200(globalCtx, 0x67U));
        goto block_19;
    }
    if (this->actor.home.rot.z != 0) {
        this->actor.home.pos.x = temp_v1->world.pos.x;
        this->actor.home.rot.z = 0;
        this->actor.home.pos.z = temp_v1->world.pos.z;
    } else {
        temp_v1->world.pos.x = this->actor.home.pos.x;
        temp_v1->world.pos.z = this->actor.home.pos.z;
    }
    temp_v0 = this->unk_302;
    if ((temp_v0 & 1) != 0) {
        if (this->unk_300 == 0) {
            if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
                ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
                this->unk_302 &= 0xFFFE;
            } else {
                ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
            }
        }
        goto block_19;
    }
    if (((temp_v0 & 2) == 0) && (temp_v1->unk_ADB != 0)) {
        if (((s32) temp_v1->unk_ADA >= 0x1E) && (temp_t9 = temp_v0 | 1, (temp_v1->unk_B08 >= 0.85f))) {
            this->unk_302 = temp_t9;
            this->unk_302 = temp_t9 | 2;
            if (globalCtx->msgCtx.unk11F04 == 0x59A) {
                func_801477B4(globalCtx);
            }
            this->unk_300 = 0x14;
            return;
        }
        if (globalCtx->msgCtx.unk11F04 != 0x59A) {
            func_801518B0(globalCtx, 0x59AU, (Actor *) this);
        }
        goto block_19;
    }
block_19:
    phi_v0 = (s16) sp36;
    if ((s16) sp36 != this->unk_2F8) {
        if ((s16) sp36 != 9) {
            if ((s16) sp36 != 0xA) {
                if ((s16) sp36 != 0xB) {

                } else {
                    SkelAnime_ChangeAnimDefaultStop(sp24, D_80A0C4E0);
                    goto block_27;
                }
            } else {
                SkelAnime_ChangeAnimDefaultRepeat(sp24, D_80A0C4DC);
                goto block_27;
            }
        } else {
            SkelAnime_ChangeAnimDefaultRepeat(sp24, D_80A0C4D8);
block_27:
            phi_v0 = (s16) sp36;
        }
        this->unk_2F8 = phi_v0;
    }
}

void func_80A0BB08(BgDyYoseizo *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;

    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 2)) {
        func_80A0B834((Actor *) this);
        this->actionFunc = func_80A0B75C;
    }
    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 7)) {
        this->actor.draw = func_80A0BD40;
        SkelAnime_ChangeAnimDefaultRepeat(&this->unk_148, (AnimationHeader *) *D_80A0C4D0);
        this->actionFunc = func_80A0B184;
        this->unk_2FC = 0;
        this->actor.world.pos.y = this->actor.home.pos.y + 40.0f;
        Actor_SetScale((Actor *) this, 0.035f);
        this->unk_2F8 = 0;
    }
    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 9)) {
        sp24 = &this->unk_148;
        Actor_SetScale((Actor *) this, 0.01f);
        SkelAnime_ChangeAnimDefaultRepeat(sp24, D_80A0C4D8);
        this->unk_2F8 = 9;
        this->actionFunc = func_80A0B8CC;
        this->actor.draw = func_80A0BD40;
    }
}

void BgDyYoseizo_Update(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    BgDyYoseizo *this = (BgDyYoseizo *) thisx;

    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    temp_v0 = this->unk_300;
    if (temp_v0 != 0) {
        this->unk_300 = temp_v0 - 1;
    }
    func_80A0BF70(this, globalCtx);
}

s32 func_80A0BCD8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 8) {
        arg4->x += arg5->unk_2E4;
    }
    if (arg1 == 0xF) {
        arg4->x += arg5->unk_2DE;
        arg4->z += arg5->unk_2E0;
    }
    return 0;
}

void func_80A0BD40(Actor *this, GlobalContext *globalCtx) {
    u32 sp40;
    GraphicsContext *sp3C;
    Gfx *sp34;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a0;
    u32 temp_v1;
    void *temp_v0;
    u32 phi_a2;

    temp_v1 = this->params & 0xF;
    phi_a2 = 0U;
    if (temp_v1 != 1) {
        if (temp_v1 != 2) {
            if ((temp_v1 != 3) && (temp_v1 != 4)) {

            } else {
                phi_a2 = temp_v1;
            }
        } else {
            phi_a2 = 1U;
        }
    } else {
        phi_a2 = 2U;
    }
    temp_a0 = globalCtx->state.gfxCtx;
    sp40 = phi_a2;
    sp3C = temp_a0;
    func_8012C28C(temp_a0);
    AnimatedMat_DrawStepOpa(globalCtx, Lib_SegmentedToVirtual(&D_0601C6F4), phi_a2);
    temp_v1_2 = sp3C->polyOpa.p;
    sp34 = temp_v1_2;
    temp_v0 = Lib_SegmentedToVirtual(*(&D_80A0C50C + (this->unk_2FC * 4)));
    temp_v1_2->words.w0 = 0xDB060024;
    temp_v1_2->words.w1 = (u32) temp_v0;
    sp3C->polyOpa.p = temp_v1_2 + 8;
    SkelAnime_DrawSV(globalCtx, this->unk_14C, this->unk_168, (s32) this->unk_14A, func_80A0BCD8, NULL, this);
    func_80A0C270(this, globalCtx);
}

void func_80A0BE60(Actor *arg0, f32 *arg1, f32 *arg2, f32 *arg3, u8 *arg4, u8 *arg5, f32 arg6, s16 arg7, s16 arg8) {
    void *sp1C;
    s16 temp_v1;
    s32 temp_t3;
    void *phi_v0;
    s16 phi_v1;

    phi_v0 = arg0 + 0x304;
    phi_v1 = 0;
loop_1:
    temp_v1 = phi_v1 + 1;
    phi_v1 = temp_v1;
    if (phi_v0->unk_0 == 0) {
        phi_v0->unk_0 = 1U;
        phi_v0->unk_4 = (s32) arg1->unk_0;
        phi_v0->unk_8 = (s32) arg1->unk_4;
        phi_v0->unk_C = (s32) arg1->unk_8;
        phi_v0->unk_10 = (s32) arg2->unk_0;
        phi_v0->unk_14 = (s32) arg2->unk_4;
        phi_v0->unk_18 = (s32) arg2->unk_8;
        phi_v0->unk_1C = (s32) arg3->unk_0;
        phi_v0->unk_20 = (s32) arg3->unk_4;
        phi_v0->unk_24 = (s32) arg3->unk_8;
        phi_v0->unk_28 = (u8) arg4->unk_0;
        phi_v0->unk_29 = (u8) arg4->unk_1;
        phi_v0->unk_2E = 0;
        phi_v0->unk_2A = (u8) arg4->unk_2;
        phi_v0->unk_2B = (u8) arg5->unk_0;
        phi_v0->unk_2C = (u8) arg5->unk_1;
        phi_v0->unk_2D = (u8) arg5->unk_2;
        phi_v0->unk_30 = arg6;
        phi_v0->unk_34 = arg7;
        phi_v0->unk_38 = 0;
        phi_v0->unk_36 = arg8;
        sp1C = phi_v0;
        temp_t3 = (s32) randPlusMinusPoint5Scaled(30000.0f);
        phi_v0->unk_3C = 0;
        phi_v0->unk_3A = (s16) temp_t3;
        return;
    }
    phi_v0 += 0x40;
    if ((s32) temp_v1 >= 0xC8) {
        return;
    }
    goto loop_1;
}

void func_80A0BF70(Actor *arg0, GlobalContext *arg1) {
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp90;
    f32 sp7C;
    Vec3f *temp_s1;
    f32 *temp_a0;
    f32 *temp_s3;
    f32 *temp_s6;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2;
    s16 temp_s5;
    s16 temp_v0;
    void *temp_s2;
    void *temp_s4;
    void *phi_s0;
    s16 phi_s5;

    temp_s4 = arg1->actorCtx.actorList[2].first;
    temp_s6 = &sp7C;
    temp_s3 = &sp9C;
    phi_s0 = arg0 + 0x304;
    phi_s5 = 0;
    do {
        if (phi_s0->unk_0 != 0) {
            phi_s0->unk_3C = (s16) (phi_s0->unk_3C + 0xBB8);
            if ((s32) phi_s0->unk_36 < 5) {
                temp_f0 = phi_s0->unk_10;
                temp_f2 = phi_s0->unk_14;
                temp_f12 = phi_s0->unk_18;
                phi_s0->unk_4 = (f32) (phi_s0->unk_4 + temp_f0);
                phi_s0->unk_8 = (f32) (phi_s0->unk_8 + temp_f2);
                phi_s0->unk_C = (f32) (phi_s0->unk_C + temp_f12);
                phi_s0->unk_10 = (f32) (temp_f0 + phi_s0->unk_1C);
                phi_s0->unk_14 = (f32) (temp_f2 + phi_s0->unk_20);
                phi_s0->unk_18 = (f32) (temp_f12 + phi_s0->unk_24);
            } else {
                temp_s2 = temp_s4 + 0x24;
                Audio_PlayActorSound2(arg0, 0x207EU);
                temp_s3->unk_0 = temp_s2->unk_0;
                temp_s1 = phi_s0 + 4;
                temp_s3->unk_4 = (s32) temp_s2->unk_4;
                temp_s3->unk_8 = (s32) temp_s2->unk_8;
                spA0 = temp_s4->world.pos.y - 150.0f;
                spA4 = temp_s4->world.pos.z - 50.0f;
                temp_f20 = (f32) Math_Vec3f_Pitch(temp_s1, (Vec3f *) temp_s3);
                temp_a0 = temp_s6;
                temp_f22 = (f32) Math_Vec3f_Yaw(temp_s1, (Vec3f *) temp_s3);
                sp7C = (f32) phi_s0->unk_38;
                Math_ApproachF(temp_a0, temp_f20, 0.9f, 5000.0f);
                phi_s0->unk_38 = (s16) (s32) sp7C;
                sp7C = (f32) phi_s0->unk_3A;
                Math_ApproachF(temp_s6, temp_f22, 0.9f, 5000.0f);
                phi_s0->unk_3A = (s16) (s32) sp7C;
                SysMatrix_StatePush();
                Matrix_RotateY(phi_s0->unk_3A, 0U);
                SysMatrix_InsertXRotation_s(phi_s0->unk_38, 1);
                spA4 = 3.0f;
                spA0 = 3.0f;
                sp9C = 3.0f;
                SysMatrix_MultiplyVector3fByState((Vec3f *) temp_s3, (Vec3f *) &sp90);
                SysMatrix_StatePop();
                phi_s0->unk_4 = (f32) (phi_s0->unk_4 + sp90);
                phi_s0->unk_8 = (f32) (phi_s0->unk_8 + sp94);
                phi_s0->unk_C = (f32) (phi_s0->unk_C + sp98);
            }
        }
        temp_v0 = phi_s0->unk_34;
        temp_s5 = phi_s5 + 1;
        phi_s5 = temp_s5;
        if (temp_v0 != 0) {
            phi_s0->unk_34 = (s16) (temp_v0 - 1);
            phi_s0->unk_2E = (s16) (phi_s0->unk_2E + 0x1E);
            if ((s32) phi_s0->unk_2E >= 0x100) {
                phi_s0->unk_2E = 0xFF;
            }
        } else {
            phi_s0->unk_2E = (s16) (phi_s0->unk_2E - 0x1E);
            if ((s32) phi_s0->unk_2E <= 0) {
                phi_s0->unk_2E = 0;
                phi_s0->unk_0 = 0U;
            }
        }
        phi_s0 += 0x40;
    } while ((s32) temp_s5 < 0xC8);
}

void func_80A0C270(Actor *arg0, GlobalContext *arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    f32 temp_f12;
    f32 temp_f22;
    s16 temp_s4;
    void *phi_s0;
    s32 phi_s3;
    s16 phi_s4;

    temp_a0 = arg1->state.gfxCtx;
    temp_f22 = *(&D_80A0C514 + ((arg1->gameplayFrames & 7) * 4));
    temp_s1 = temp_a0;
    func_8012C2DC(temp_a0);
    phi_s0 = arg0 + 0x304;
    phi_s3 = 0;
    phi_s4 = 0;
    do {
        if (phi_s0->unk_0 == 1) {
            if (phi_s3 == 0) {
                temp_v0 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = temp_v0 + 8;
                temp_v0->words.w1 = (u32) &D_0600D1B0;
                temp_v0->words.w0 = 0xDE000000;
                temp_v0_2 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = 0;
                temp_v0_2->words.w0 = 0xE7000000;
                phi_s3 = (phi_s3 + 1) & 0xFF;
            }
            temp_v0_3 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xFA000000;
            temp_v0_3->words.w1 = (phi_s0->unk_28 << 0x18) | (phi_s0->unk_29 << 0x10) | (phi_s0->unk_2A << 8) | (phi_s0->unk_2E & 0xFF);
            temp_v0_4 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xFB000000;
            temp_v0_4->words.w1 = (phi_s0->unk_2B << 0x18) | (phi_s0->unk_2C << 0x10) | (phi_s0->unk_2D << 8);
            SysMatrix_InsertTranslation(phi_s0->unk_4, phi_s0->unk_8, phi_s0->unk_C, 0);
            SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
            temp_f12 = phi_s0->unk_30;
            Matrix_Scale(temp_f12, temp_f12 * temp_f22, 1.0f, 1);
            SysMatrix_InsertZRotation_s(phi_s0->unk_3C, 1);
            temp_v0_5 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDA380003;
            temp_v0_5->words.w1 = Matrix_NewMtx(temp_s1);
            temp_v0_6 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w1 = (u32) &D_0600D228;
            temp_v0_6->words.w0 = 0xDE000000;
        }
        temp_s4 = phi_s4 + 1;
        phi_s0 += 0x40;
        phi_s4 = temp_s4;
    } while ((s32) temp_s4 < 0xC8);
}
