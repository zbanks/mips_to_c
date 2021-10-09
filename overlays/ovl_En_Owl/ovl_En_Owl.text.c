CRASHED

typedef struct EnOwl {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk144;            /* inferred */
    /* 0x190 */ SkelAnime unk190;                   /* inferred */
    /* 0x1D4 */ Vec3s unk1D4;                       /* inferred */
    /* 0x1DA */ char pad1DA[0x78];                  /* maybe part of unk1D4[21]? */
    /* 0x252 */ Vec3s unk252;                       /* inferred */
    /* 0x258 */ char pad258[0x78];                  /* maybe part of unk252[21]? */
    /* 0x2D0 */ SkelAnime unk2D0;                   /* inferred */
    /* 0x314 */ Vec3s unk314;                       /* inferred */
    /* 0x31A */ char pad31A[0x5A];                  /* maybe part of unk314[16]? */
    /* 0x374 */ Vec3s unk374;                       /* inferred */
    /* 0x37A */ char pad37A[0x5A];                  /* maybe part of unk374[16]? */
    /* 0x3D4 */ SkelAnime *unk3D4;                  /* inferred */
    /* 0x3D8 */ s16 unk3D8;                         /* inferred */
    /* 0x3DA */ s16 unk3DA;                         /* inferred */
    /* 0x3DC */ s16 unk3DC;                         /* inferred */
    /* 0x3DE */ s16 unk3DE;                         /* inferred */
    /* 0x3E0 */ s16 unk3E0;                         /* inferred */
    /* 0x3E2 */ s16 unk3E2;                         /* inferred */
    /* 0x3E4 */ char pad3E4[0x4];                   /* maybe part of unk3E2[3]? */
    /* 0x3E8 */ u16 unk3E8;                         /* inferred */
    /* 0x3EA */ s16 unk3EA;                         /* inferred */
    /* 0x3EC */ s16 unk3EC;                         /* inferred */
    /* 0x3EE */ char pad3EE[0x2];
    /* 0x3F0 */ f32 unk3F0;                         /* inferred */
    /* 0x3F4 */ void *unk3F4;                       /* inferred */
    /* 0x3F8 */ s32 unk3F8;                         /* inferred */
    /* 0x3FA */ s16 unk3FA;                         /* overlap; inferred */
    /* 0x3FC */ char pad3FC[0x4];                   /* maybe part of unk3FA[3]? */
    /* 0x400 */ s16 unk400;                         /* inferred */
    /* 0x402 */ char pad402[0x4];                   /* maybe part of unk400[3]? */
    /* 0x406 */ s16 unk406;                         /* inferred */
    /* 0x408 */ u8 unk408;                          /* inferred */
    /* 0x409 */ u8 unk409;                          /* inferred */
    /* 0x40A */ u8 unk40A;                          /* inferred */
    /* 0x40B */ u8 unk40B;                          /* inferred */
    /* 0x40C */ u8 unk40C;                          /* inferred */
    /* 0x40D */ u8 unk40D;                          /* inferred */
    /* 0x40E */ char pad40E[0x2];                   /* maybe part of unk40D[3]? */
    /* 0x410 */ void (*actionFunc)(EnOwl *, GlobalContext *);
    /* 0x414 */ void (*unk414)(EnOwl *, GlobalContext *); /* inferred */
} EnOwl;                                            /* size = 0x418 */

struct _mips2c_stack_EnOwl_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnOwl_Draw {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ GraphicsContext *sp34;               /* inferred */
    /* 0x38 */ char pad38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnOwl_Init {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ EnOwl *sp34;                         /* inferred */
    /* 0x38 */ void (*sp38)(EnOwl *, GlobalContext *); /* inferred */
    /* 0x3C */ char pad3C[0x1C];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnOwl_Update {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ char pad30[0x6];                     /* maybe part of sp2C[2]? */
    /* 0x36 */ s16 sp36;                            /* inferred */
    /* 0x38 */ char pad38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8095A510 {};              /* size 0x0 */

struct _mips2c_stack_func_8095A920 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8095A978 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8095A9FC {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8095AA70 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8095AAD0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8095AB1C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8095AB4C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8095ABA8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8095ABF0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8095AC50 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8095ACEC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8095AD54 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8095AE00 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8095AE60 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8095AEC0 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8095AF2C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8095AFEC {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8095B06C {};              /* size 0x0 */

struct _mips2c_stack_func_8095B0C8 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8095B158 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8095B1E4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8095B254 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8095B2F8 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8095B3DC {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8095B480 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8095B574 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8095B650 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8095B6C8 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8095B76C {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x2];
    /* 0x4A */ s16 sp4A;                            /* inferred */
    /* 0x4C */ char pad4C[0x4];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_8095B960 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8095B9FC {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8095BA84 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8095BE0C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8095BF20 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8095BF58 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8095BF78 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8095C09C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8095C1C8 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8095C258 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8095C328 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8095C408 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8095C484 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8095C510 {};              /* size 0x0 */

struct _mips2c_stack_func_8095C568 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8095CCF4 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8095CE18 {};              /* size 0x0 */

struct _mips2c_stack_func_8095CF44 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8095D074 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad24[0xC];                     /* maybe part of sp20[4]? */
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8095D24C {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

f32 func_80122524(EnOwl *, void *, s16, s16 *);     /* extern */
void func_8095A510(EnOwl *arg0, GlobalContext *arg1); /* static */
void func_8095A920(EnOwl *arg0, GlobalContext *arg1, GlobalContext *); /* static */
s32 func_8095A978(Actor *arg0, GlobalContext *arg1, u16 arg2, f32 arg3, f32 arg4); /* static */
? func_8095A9FC(Actor *arg0, GlobalContext *arg1, u16 arg2); /* static */
void func_8095AA70(EnOwl *arg0);                    /* static */
void func_8095AAD0(EnOwl *arg0, GlobalContext *arg1); /* static */
void func_8095AB4C(EnOwl *arg0);                    /* static */
void func_8095ABA8(Actor *arg0);                    /* static */
void func_8095AC50(Actor *arg0, GlobalContext *arg1); /* static */
void func_8095ACEC(EnOwl *arg0, s32);               /* static */
? func_8095B06C(EnOwl *arg0);                       /* static */
void func_8095B0C8(EnOwl *arg0);                    /* static */
void func_8095B158(Actor *arg0);                    /* static */
void func_8095B1E4(Actor *arg0, ? arg1);            /* static */
void func_8095B3DC(EnOwl *arg0, GlobalContext *arg1); /* static */
void func_8095B480(EnOwl *arg0, GlobalContext *arg1); /* static */
void func_8095B574(EnOwl *arg0, GlobalContext *arg1); /* static */
void func_8095B9FC(EnOwl *arg0, GlobalContext *arg1); /* static */
void func_8095BF58(EnOwl *arg0, GlobalContext *arg1); /* static */
void func_8095BF78(Actor *arg0, GlobalContext *arg1); /* static */
void func_8095C09C(EnOwl *arg0, ? arg1);            /* static */
void func_8095C258(EnOwl *arg0, GlobalContext *arg1); /* static */
void func_8095C328(EnOwl *arg0, GlobalContext *arg1); /* static */
void func_8095C408(void *arg0);                     /* static */
void func_8095C484(EnOwl *arg0, GlobalContext *arg1); /* static */
s32 func_8095C510(EnOwl *arg0, s16);                /* static */
void func_8095C568(Actor *arg0);                    /* static */
void func_8095CCF4(Actor *this, GlobalContext *globalCtx); /* static */
s32 func_8095CE18(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_8095CF44(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_8095D074(Actor *this, GlobalContext *globalCtx); /* static */
void func_8095D24C(EnOwl *arg0, void (*arg1)(EnOwl *, GlobalContext *), void (*arg2)(EnOwl *, GlobalContext *), SkelAnime *arg3, AnimationHeader *arg4, f32 arg5); /* static */
extern AnimationHeaderCommon D_06001168;
extern ? D_06001200;
extern AnimationHeader D_06001ADC;
extern FlexSkeletonHeader D_0600C5F8;
extern AnimationHeaderCommon D_0600C6D4;
extern SkelAnime D_0600CB94;
extern AnimationHeader D_0600CDB0;
extern FlexSkeletonHeader D_060105C0;
static ColliderCylinderInit D_8095D2F0 = {
    {0xA, 0, 0x11, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x1E, 0x28, 0, {0, 0, 0}},
};
static InitChainEntry D_8095D31C[4];                /* unable to generate initializer */
static ? D_8095D32C;                                /* unable to generate initializer */
static EnOwl func_8095C1C8;

void func_8095A510(EnOwl *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    temp_v0 = (s32) (arg0->actor.params & 0xF000) >> 0xC;
    arg0->unk3FC = temp_v0;
    if (temp_v0 == 0xF) {
        arg0->unk3FC = -1;
        arg0->unk3F4 = NULL;
        return;
    }
    arg0->unk3F8 = 0;
    arg0->unk3F4 = arg1->setupPathList + (arg0->unk3FC * 8);
}

void EnOwl_Init(EnOwl *this, GlobalContext *globalCtx) {
    void (*sp38)(EnOwl *, GlobalContext *);
    EnOwl *sp34;
    SkelAnime *temp_s0;
    s16 temp_v0;
    s32 temp_a1;
    s32 temp_s0_2;
    void (*temp_v1)(EnOwl *, GlobalContext *);
    s16 phi_s0;
    EnOwl *phi_a2;
    void (*phi_v1)(EnOwl *, GlobalContext *);
    EnOwl *this = (EnOwl *) thisx;

    phi_s0 = (s16) this->actor.cutscene;
    phi_a2 = this;
    phi_v1 = NULL;
    do {
        phi_a2->unk400 = phi_s0;
        if (phi_s0 != -1) {
            this->actor.cutscene = (s8) phi_s0;
            sp34 = phi_a2;
            sp38 = phi_v1;
            phi_s0 = ActorCutscene_GetAdditionalCutscene((s16) this->actor.cutscene);
        }
        temp_v1 = phi_v1 + 2;
        phi_a2 += 2;
        phi_v1 = temp_v1;
    } while (temp_v1 != 6);
    this->actor.cutscene = (s8) this->unk400;
    Actor_ProcessInitChain((Actor *) this, D_8095D31C);
    if (((s32) (this->actor.params & 0xF80) >> 7) == 0x1E) {
        Actor_SetScale((Actor *) this, 0.1f);
        this->actor.update = func_8095CCF4;
        this->actor.draw = func_8095D074;
        this->actor.flags &= -2;
        this->unk3D8 = 0;
        this->unk3DA = 0x320;
        this->unk3DC = 0x12C;
        return;
    }
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 36.0f);
    SkelAnime_InitSV(globalCtx, &this->unk190, &D_0600C5F8, &D_06001ADC, &this->unk1D4, &this->unk252, 0x15);
    temp_s0 = &this->unk2D0;
    SkelAnime_InitSV(globalCtx, temp_s0, &D_060105C0, &D_0600CDB0, &this->unk314, &this->unk374, 0x10);
    Collider_InitAndSetCylinder(globalCtx, &this->unk144, (Actor *) this, &D_8095D2F0);
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.minVelocityY = -10.0f;
    this->actor.targetArrowOffset = 500.0f;
    sp38 = func_8095BF58;
    func_8095D24C(this, func_8095BF58, func_8095C484, temp_s0, &D_0600CDB0, 0.0f);
    temp_v0 = this->actor.params;
    temp_s0_2 = (s32) (temp_v0 & 0xF80) >> 7;
    this->unk3E8 = 0;
    this->unk40D = 0;
    this->unk40A = 0;
    this->unk409 = 4;
    this->unk408 = 0;
    this->unk40B = 0;
    this->unk40C = 4;
    this->unk406 = -1;
    temp_a1 = temp_v0 & 0x7F;
    if (temp_s0_2 != 1) {
        if (temp_s0_2 != 2) {
            if (temp_s0_2 != 3) {
                goto block_17;
            }
            if ((*(gBitFlags + 0x3C) & gSaveContext.inventory.questItems) != 0) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            goto block_17;
        }
        if (gSaveContext.inventory.items[14] == 0xE) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        goto block_17;
    }
    if ((temp_a1 < 0x7F) && (Flags_GetSwitch(globalCtx, temp_a1) != 0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
block_17:
    this->unk3DA = 0;
    this->unk3F0 = this->actor.home.pos.y;
    this->unk3EC = this->actor.home.rot.y;
    func_8095A510(this, globalCtx);
    if (temp_s0_2 != 1) {
        if (temp_s0_2 != 2) {
            if (temp_s0_2 != 3) {
                if (temp_s0_2 != 0x3E8) {
                    this->unk3DA = 0x20;
                    this->unk3E8 |= 2;
                    this->actionFunc = sp38;
                    return;
                }
                this->actionFunc = func_8095BF20;
                return;
            }
            this->actionFunc = func_8095AFEC;
            return;
        }
        this->actionFunc = func_8095BE0C;
        if ((gSaveContext.weekEventReg[9] & 0x20) != 0) {
            this->actor.textId = 0xBF0;
            return;
        }
        this->actor.textId = 0xBEA;
        return;
    }
    this->actionFunc = func_8095AEC0;
}

void EnOwl_Destroy(EnOwl *this, GlobalContext *globalCtx) {
    EnOwl *this = (EnOwl *) thisx;
    if (((s32) (this->actor.params & 0xF80) >> 7) != 0x1E) {
        Collider_DestroyCylinder(globalCtx, &this->unk144);
    }
}

void func_8095A920(EnOwl *arg0, GlobalContext *arg1) {
    arg0->actor.world.rot.y = Math_Vec3f_Yaw(arg0 + 0x24, arg1->actorCtx.actorList[2].first + 0x24);
    Math_SmoothStepToS(arg0 + 0xBE, arg0->actor.world.rot.y, 6, 0x3E8, (s16) 0xC8);
}

s32 func_8095A978(Actor *arg0, GlobalContext *arg1, u16 arg2, f32 arg3, f32 arg4) {
    if (func_800B84D0(arg0, arg1) != 0) {
        return 1;
    }
    arg0->textId = arg2;
    if (arg0->xzDistToPlayer < arg3) {
        arg0->flags |= 0x10000;
        func_800B8500(arg0, arg1, arg3, arg4, 0);
    }
    return 0;
}

? func_8095A9FC(Actor *arg0, GlobalContext *arg1, u16 arg2) {
    if (func_800B84D0(arg0, arg1) != 0) {
        return 1;
    }
    arg0->textId = arg2;
    if (arg0->xzDistToPlayer < 120.0f) {
        func_800B8500(arg0, arg1, 350.0f, 1000.0f, 0);
    }
    return 0;
}

void func_8095AA70(EnOwl *arg0) {
    func_8095D24C(&func_8095C1C8, func_8095C484, arg0 + 0x190, &D_0600CB94, NULL);
    arg0->unk3E0 = 0;
    arg0->unk3E2 = Rand_S16Offset(0x3C, 0x3C);
}

void func_8095AAD0(EnOwl *arg0, GlobalContext *arg1) {
    s32 temp_a1;
    s32 temp_a2;

    temp_a2 = arg0->actor.params & 0x7F;
    temp_a1 = temp_a2;
    if (temp_a2 < 0x7F) {
        arg0 = arg0;
        Actor_SetSwitchFlag(arg1, temp_a1);
    }
    func_8095AA70(arg0);
}

void func_8095AB1C(EnOwl *this, GlobalContext *globalCtx) {
    if ((this->unk3DA & 0x3F) == 0) {
        func_8095AAD0();
    }
}

void func_8095AB4C(EnOwl *arg0) {
    if (randPlusMinusPoint5Scaled(1.0f) < 0.0f) {
        arg0->unk3E8 |= 0x20;
        return;
    }
    arg0->unk3E8 &= 0xFFDF;
}

void func_8095ABA8(Actor *arg0) {
    func_8095AB4C();
    arg0->unk40B = 0;
    arg0->unk3DE = 0;
    arg0->unk3E8 = (u16) (arg0->unk3E8 | 0x10);
    arg0->unk40C = 4;
    arg0->unk408 = 0;
    arg0->unk40A = 0;
    arg0->unk409 = 4;
}

void func_8095ABF0(EnOwl *this, GlobalContext *globalCtx) {
    if (func_800B867C((Actor *) this, globalCtx) != 0) {
        func_801A89A8(0x110000FF);
        func_8095AAD0(this, globalCtx);
        this->actor.flags &= 0xFFFEFFFF;
    }
}

void func_8095AC50(Actor *arg0, GlobalContext *arg1) {
    if (func_800B867C(arg0, arg1) != 0) {
        func_801A89A8(0x110000FF);
        if ((arg0->unk3DA & 0x3F) == 0) {
            func_8095AAD0((EnOwl *) arg0, arg1);
        } else {
            arg0->unk3E8 = (u16) (arg0->unk3E8 & 0xFFFD);
            func_8095ABA8(arg0);
            arg0->unk410 = func_8095AB1C;
        }
        arg0->flags &= 0xFFFEFFFF;
    }
}

void func_8095ACEC(EnOwl *arg0) {
    s16 temp_a0;

    arg0->unk3E8 &= 0xFFBF;
    if ((s32) arg0->unk406 >= 0) {
        arg0 = arg0;
        temp_a0 = (arg0 + (arg0->unk406 * 2))->unk400;
        if (ActorCutscene_GetCurrentIndex() == temp_a0) {
            arg0 = arg0;
            ActorCutscene_Stop(temp_a0);
        }
        arg0->unk406 = -1;
    }
}

void func_8095AD54(EnOwl *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a0_2;
    MessageContext *temp_a0;
    u8 temp_v0;

    temp_a0 = &globalCtx->msgCtx;
    globalCtx = globalCtx;
    if ((func_80152498(temp_a0) == 4) && (temp_a0_2 = globalCtx, globalCtx = globalCtx, (func_80147624(temp_a0_2) != 0))) {
        temp_v0 = globalCtx->msgCtx.choiceIndex;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {
                return;
            }
            func_80151938(globalCtx, 0x7D3U);
            this->actionFunc = func_8095ABF0;
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return;
        }
        func_80151938(globalCtx, 0x7D1U);
        this->actionFunc = func_8095AE00;
    }
}

void func_8095AE00(EnOwl *this, GlobalContext *globalCtx) {
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        func_80151938(globalCtx, 0x7D2U);
        this->actionFunc = func_8095AD54;
    }
}

void func_8095AE60(EnOwl *this, GlobalContext *globalCtx) {
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        func_80151938(globalCtx, 0x7D1U);
        this->actionFunc = func_8095AE00;
    }
}

void func_8095AEC0(EnOwl *this, GlobalContext *globalCtx) {
    func_8095A920(this, globalCtx);
    if (func_8095A978((Actor *) this, globalCtx, 0x7D0U, 360.0f, 200.0f) != 0) {
        func_801A3098(0x45U);
        this->actionFunc = func_8095AE60;
    }
}

void func_8095AF2C(EnOwl *this, GlobalContext *globalCtx) {
    s32 temp_a1;
    u16 temp_v0_2;
    u8 temp_v0;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (temp_v0 != 5) {
        if (temp_v0 != 6) {
            return;
        }
        func_8095ACEC(this);
        this->actionFunc = func_8095ABF0;
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    if (func_80147624(globalCtx) != 0) {
        temp_v0_2 = globalCtx->msgCtx.unk11F04;
        temp_a1 = temp_v0_2 + 1;
        if (temp_v0_2 == 0xBFE) {
            func_8095ACEC(this, temp_a1);
            func_801477B4(globalCtx);
            this->actionFunc = func_8095ABF0;
            return;
        }
        func_80151938(globalCtx, temp_a1 & 0xFFFF);
    }
}

void func_8095AFEC(EnOwl *this, GlobalContext *globalCtx) {
    func_8095A920(this, globalCtx);
    if (func_8095A978((Actor *) this, globalCtx, 0xBF6U, 200.0f, 100.0f) != 0) {
        func_801A3098(0x45U);
        this->actionFunc = func_8095AF2C;
        this->unk406 = 0;
        this->unk3E8 |= 0x40;
    }
}

? func_8095B06C(EnOwl *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;

    temp_f0 = arg0->actor.world.pos.y;
    temp_f12 = arg0->unk3F0;
    temp_f2 = temp_f0 + 2.0f;
    if (temp_f2 < temp_f12) {
        arg0->actor.world.pos.y = temp_f2;
        return 0;
    }
    temp_f2_2 = temp_f0 - 2.0f;
    if (temp_f12 < temp_f2_2) {
        arg0->actor.world.pos.y = temp_f2_2;
        return 0;
    }
    return 1;
}

void func_8095B0C8(EnOwl *arg0) {
    void *sp18;
    s16 temp_t0;
    s16 temp_t9;
    void *temp_a0;
    void *temp_v1;

    temp_a0 = arg0->unk3F4->unk4;
    arg0 = arg0;
    temp_v1 = Lib_SegmentedToVirtual(temp_a0) + (arg0->unk3F8 * 6);
    temp_t9 = temp_v1->unk4;
    temp_t0 = temp_v1->unk0;
    sp18 = temp_v1;
    arg0->unk3EC = Math_FAtan2F((f32) temp_t9 - arg0->actor.world.pos.z, (f32) temp_t0 - arg0->actor.world.pos.x);
    arg0->unk3F0 = (f32) temp_v1->unk2;
}

void func_8095B158(Actor *arg0) {
    SkelAnime *temp_s0;

    temp_s0 = arg0 + 0x190;
    if ((func_801378B8(temp_s0, 2.0f) != 0) || (func_801378B8(temp_s0, 9.0f) != 0) || (func_801378B8(temp_s0, 23.0f) != 0) || (func_801378B8(temp_s0, 40.0f) != 0) || (func_801378B8(temp_s0, 58.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x3926U);
    }
}

void func_8095B1E4(Actor *arg0, ? arg1) {
    f32 temp_f0;

    temp_f0 = arg0->speedXZ;
    if (temp_f0 < 6.0f) {
        arg0->speedXZ = temp_f0 + 1.0f;
    }
    if (arg0->xzDistToPlayer > 6000.0f) {
        Actor_MarkForDeath(arg0);
    }
}

void func_8095B254(EnOwl *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    temp_f0 = this->actor.speedXZ;
    if (temp_f0 < 6.0f) {
        this->actor.speedXZ = temp_f0 + 1.0f;
    }
    if ((this->unk3E8 & 1) != 0) {
        func_8095D24C((EnOwl *) func_8095B1E4, func_8095C328, (void (*)(EnOwl *, GlobalContext *)) &this->unk190, (SkelAnime *) &D_06001ADC, NULL);
        this->unk3EA = 6;
        this->actor.flags |= 0x20;
    }
    func_8095B158((Actor *) this);
}

void func_8095B2F8(EnOwl *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;

    func_8095B06C(this);
    if (this->unk190.animCurrentFrame >= 18.0f) {
        Math_SmoothStepToS(&this->actor.world.rot.y, this->unk3EC, 2, 0x200, (s16) 0x80);
        this->actor.shape.rot.y = this->actor.world.rot.y;
    }
    if ((this->unk3EC == this->actor.shape.rot.y) && ((this->unk3E8 & 1) != 0)) {
        this->actionFunc = func_8095B254;
        temp_a0 = this->unk3D4;
        SkelAnime_ChangeAnim(temp_a0, temp_a0->animCurrentSeg, 1.0f, 19.0f, (f32) SkelAnime_GetFrameCount(&D_06001168), (u8) 2, 0.0f);
        this->unk414 = func_8095C484;
    }
    func_8095B158((Actor *) this);
}

void func_8095B3DC(EnOwl *arg0, GlobalContext *arg1) {
    if ((arg0->unk3E8 & 1) != 0) {
        arg0->actionFunc = func_8095B2F8;
        SkelAnime_ChangeAnim(arg0->unk3D4, (AnimationHeader *) &D_06001168, 1.0f, 0.0f, 35.0f, (u8) 2, 0.0f);
        arg0->unk414 = func_8095C408;
        arg0->unk3EC = 0x5500;
        arg0->actor.world.pos.y += 100.0f;
        arg0->unk3F0 = arg0->actor.world.pos.y;
    }
}

void func_8095B480(EnOwl *arg0, GlobalContext *arg1) {
    if ((arg1->actorCtx.actorList[2].first->unkA74 * 8) < 0) {
        arg0->actor.textId = 0xBF1;
        func_8095D24C(arg0, func_8095BF58, func_8095C484, arg0 + 0x2D0, &D_0600CDB0, 0.0f);
        arg0->unk3E0 = 0;
        arg0->unk3E8 &= 0xFFF7;
        arg0->unk3E2 = Rand_S16Offset(0x3C, 0x3C);
        arg0->actor.home.rot.x = 0;
        arg0->unk3E8 |= 8;
        func_8095ACEC(arg0);
        arg0->actor.world.pos.x = arg0->actor.home.pos.x;
        arg0->unk3F0 = arg0->actor.home.pos.y;
        arg0->unk3EC = arg0->actor.home.rot.y;
        arg0->actor.world.pos.z = arg0->actor.home.pos.z;
        arg0->actor.world.pos.y = arg0->actor.home.pos.y;
        func_8095A510(arg0, arg1);
        arg0->actionFunc = func_8095BE0C;
        arg0->actor.speedXZ = 0.0f;
    }
}

void func_8095B574(EnOwl *arg0, GlobalContext *arg1) {
    func_8095A920(arg0, arg1);
    if (func_800B84D0((Actor *) arg0, arg1) != 0) {
        arg0->actionFunc = func_8095BA84;
        func_801A3098(0x45U);
        arg0->unk406 = 2;
        arg0->unk3E8 |= 0x40;
    } else if (arg0->actor.xzDistToPlayer < 200.0f) {
        arg0->actor.flags |= 0x10000;
        func_800B8500((Actor *) arg0, arg1, 200.0f, 400.0f, 0);
    } else {
        arg0->actor.flags &= 0xFFFEFFFF;
    }
    func_8095B480(arg0, arg1);
}

void func_8095B650(EnOwl *this, GlobalContext *globalCtx) {
    if ((this->unk3E8 & 1) != 0) {
        func_8095D24C((EnOwl *) func_8095B574, func_8095C484, (void (*)(EnOwl *, GlobalContext *)) &this->unk2D0, (SkelAnime *) &D_0600CDB0, NULL);
        this->actor.textId = 0xBF5;
        this->unk3E8 &= 0xFFF7;
    }
    func_8095B480(this, globalCtx);
}

void func_8095B6C8(EnOwl *this, GlobalContext *globalCtx) {
    if ((this->unk3E8 & 1) != 0) {
        SkelAnime_ChangeAnim(this->unk3D4, (AnimationHeader *) &D_0600CB94, -1.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_0600CB94), 0.0f, (u8) 2, 0.0f);
        this->unk414 = func_8095C484;
        this->actionFunc = func_8095B650;
    }
    func_8095B158((Actor *) this);
    func_8095B480(this, globalCtx);
}

void func_8095B76C(EnOwl *this, GlobalContext *globalCtx) {
    s16 sp4A;
    f32 sp44;
    f32 temp_f0;
    s16 *temp_v1;
    s32 temp_t4;

    sp44 = func_80122524(this, this->unk3F4, this->unk3FA, &sp4A);
    Math_SmoothStepToS(&this->actor.world.rot.y, sp4A, 6, 0x800, (s16) 0x200);
    temp_f0 = this->actor.speedXZ;
    this->actor.shape.rot.y = this->actor.world.rot.y;
    if (sp44 < (temp_f0 * temp_f0)) {
        this->actor.speedXZ = 0.0f;
        temp_v1 = Lib_SegmentedToVirtual(this->unk3F4->unk4) + (this->unk3F8 * 6);
        temp_t4 = this->unk3F8 + 1;
        this->actor.world.pos.x = (f32) temp_v1->unk0;
        this->unk3F8 = temp_t4;
        this->actor.world.pos.z = (f32) temp_v1->unk4;
        if (temp_t4 >= (s32) this->unk3F4->unk0) {
            this->actionFunc = func_8095B6C8;
            return;
        }
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xAF, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0xF00);
        this->actor.home.rot.x += 1;
        if ((s32) this->actor.home.rot.x >= 3) {
            func_8095ACEC(this);
        }
        func_8095B0C8(this);
        goto block_12;
    }
    if (sp44 < 441.0f) {
        if (temp_f0 > 1.0f) {
            this->actor.speedXZ = temp_f0 - 1.0f;
        } else {
            this->actor.speedXZ = 1.0f;
        }
    } else if (temp_f0 < 6.0f) {
        this->actor.speedXZ = temp_f0 + 1.0f;
    }
block_12:
    func_8095B06C(this);
    func_8095B158((Actor *) this);
    func_8095B480(this, globalCtx);
}

void func_8095B960(EnOwl *this, GlobalContext *globalCtx) {
    if (this->unk190.animCurrentFrame >= 18.0f) {
        Math_SmoothStepToS(&this->actor.world.rot.y, this->unk3EC, 2, 0x200, (s16) 0x80);
        this->actor.shape.rot.y = this->actor.world.rot.y;
    }
    func_8095B06C(this);
    if (this->unk3EC == this->actor.shape.rot.y) {
        this->actionFunc = func_8095B76C;
    }
    func_8095B158((Actor *) this);
    func_8095B480(this, globalCtx);
}

void func_8095B9FC(EnOwl *arg0, GlobalContext *arg1) {
    if ((arg0->unk3E8 & 1) != 0) {
        arg0->actionFunc = func_8095B960;
        SkelAnime_ChangeAnim(arg0->unk3D4, (AnimationHeader *) &D_06001168, 1.0f, 0.0f, 35.0f, (u8) 2, 0.0f);
        arg0->unk414 = func_8095C408;
        func_8095B0C8(arg0);
    }
}

void func_8095BA84(EnOwl *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    GlobalContext *temp_a1;
    GlobalContext *temp_a2;
    u16 temp_t8;
    u16 temp_v0_2;
    u8 temp_v0;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;

    temp_a2 = globalCtx;
    temp_a1 = temp_a2;
    globalCtx = temp_a2;
    func_8095A920(this, temp_a1, temp_a2);
    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (temp_v0 != 4) {
        temp_a0 = globalCtx;
        if (temp_v0 != 5) {
            return;
        }
        globalCtx = globalCtx;
        if (func_80147624(temp_a0) != 0) {
            temp_t8 = globalCtx->msgCtx.unk11F04;
            switch (temp_t8) {
            case 3050:
                gSaveContext.weekEventReg[9] |= 0x20;
                func_80151938(globalCtx, 0xBEBU);
                return;
            case 3051:
            case 3056:
                func_80151938(globalCtx, 0xBECU);
                return;
            case 3053:
            case 3060:
                func_80151938(globalCtx, 0xBEEU);
                return;
            case 3054:
                func_801477B4(globalCtx);
                func_801A89A8(0x110000FF);
                func_8095D24C(this, func_8095B9FC, func_8095C484, &this->unk190, (AnimationHeader *) &D_0600CB94, 0.0f);
                this->unk3E0 = 0;
                this->unk3E2 = Rand_S16Offset(0x3C, 0x3C);
                this->unk3E8 |= 8;
                this->actor.flags &= 0xFFFEFFFF;
                this->actor.home.rot.x = 0;
                func_8095ACEC(this);
                this->unk406 = 0;
                this->unk3E8 |= 0x40;
                return;
            case 3055:
            case 3059:
                func_801477B4(globalCtx);
                func_801A89A8(0x110000FF);
                func_8095ACEC(this);
                this->actor.flags &= 0xFFFEFFFF;
                this->actor.textId = 0xBF0;
                this->actionFunc = func_8095BE0C;
                return;
            case 3057:
                func_80151938(globalCtx, 0xBF2U);
                return;
            case 3061:
                func_801477B4(globalCtx);
                func_801A89A8(0x110000FF);
                this->actor.flags &= 0xFFFEFFFF;
                func_8095D24C(this, func_8095B3DC, func_8095C484, &this->unk190, (AnimationHeader *) &D_0600CB94, 0.0f);
                this->unk3E0 = 0;
                this->unk3E2 = Rand_S16Offset(0x3C, 0x3C);
                this->unk3E8 |= 8;
                func_8095ACEC(this);
                /* Duplicate return node #29. Try simplifying control flow for better match */
                return;
            }
        } else {
            /* Duplicate return node #29. Try simplifying control flow for better match */
        }
    } else {
        temp_a0_2 = globalCtx;
        globalCtx = globalCtx;
        if (func_80147624(temp_a0_2) != 0) {
            temp_v0_2 = globalCtx->msgCtx.unk11F04;
            if (temp_v0_2 != 0xBEC) {
                if (temp_v0_2 != 0xBF2) {
                    return;
                }
                temp_v0_3 = globalCtx->msgCtx.choiceIndex;
                if (temp_v0_3 != 0) {
                    if (temp_v0_3 != 1) {
                        return;
                    }
                    globalCtx = globalCtx;
                    func_8019F230();
                    func_80151938(globalCtx, 0xBF3U);
                    return;
                }
                globalCtx = globalCtx;
                func_8019F208();
                func_80151938(globalCtx, 0xBF4U);
                return;
            }
            temp_v0_4 = globalCtx->msgCtx.choiceIndex;
            if (temp_v0_4 != 0) {
                if (temp_v0_4 != 1) {
                    return;
                }
                globalCtx = globalCtx;
                func_8019F230();
                func_80151938(globalCtx, 0xBEFU);
                return;
            }
            globalCtx = globalCtx;
            func_8019F208();
            temp_v0_5 = gSaveContext.weekEventReg[9];
            if ((temp_v0_5 & 0x40) != 0) {
                func_80151938(globalCtx, 0xBF4U);
                return;
            }
            gSaveContext.weekEventReg[9] = temp_v0_5 | 0x40;
            func_80151938(globalCtx, 0xBEDU);
            return;
        }
    default:
    }
}

void func_8095BE0C(EnOwl *arg0, GlobalContext *arg1) {
    func_8095A920(arg0, arg1);
    if (func_800B84D0((Actor *) arg0, arg1) != 0) {
        arg0->actionFunc = func_8095BA84;
        func_801A3098(0x45U);
        arg0->unk406 = 1;
        arg0->unk3E8 |= 0x40;
        return;
    }
    if (arg0->actor.textId == 0xBF0) {
        if (arg0->actor.isTargeted != 0) {
            func_800B8500((Actor *) arg0, arg1, 200.0f, 200.0f, 0);
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    if (arg0->actor.xzDistToPlayer < 200.0f) {
        arg0->actor.flags |= 0x10000;
        func_800B8500((Actor *) arg0, arg1, 200.0f, 200.0f, 0);
        return;
    }
    arg0->actor.flags &= 0xFFFEFFFF;
}

void func_8095BF20(EnOwl *arg0, GlobalContext *arg1) {
    func_8095A9FC((Actor *) arg0, (GlobalContext *)0x7D0);
    arg0->actionFunc = func_8095ABF0;
}

void func_8095BF58(EnOwl *arg0, GlobalContext *arg1) {
    func_8095A920();
}

void func_8095BF78(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;

    arg0->flags |= 0x20;
    if (arg0->xzDistToPlayer > 6000.0f) {
        Actor_MarkForDeath(arg0);
    }
    Math_SmoothStepToS(&arg0->world.rot.y, arg0->unk3EC, 2, 0x80, (s16) 0x40);
    temp_f0 = arg0->speedXZ;
    arg0->shape.rot.y = arg0->world.rot.y;
    if (temp_f0 < 16.0f) {
        arg0->speedXZ = temp_f0 + 0.5f;
    }
    if ((arg0->unk3E4 + 1000.0f) < arg0->world.pos.y) {
        temp_f0_2 = arg0->velocity.y;
        if (temp_f0_2 > 0.0f) {
            arg0->velocity.y = temp_f0_2 - 0.4f;
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return;
    }
    temp_f0_3 = arg0->velocity.y;
    if (temp_f0_3 < 4.0f) {
        arg0->velocity.y = temp_f0_3 + 0.2f;
    }
}

void func_8095C09C(EnOwl *arg0, ? arg1) {
    if (arg0->unk190.animCurrentFrame > 10.0f) {
        Math_SmoothStepToS(arg0 + 0x32, arg0->unk3EC, 2, 0x400, (s16) 0x40);
        arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
    }
    if (arg0->unk190.animCurrentFrame > 45.0f) {
        arg0->actor.velocity.y = 2.0f;
        arg0->actor.gravity = 0.0f;
        arg0->actor.speedXZ = 8.0f;
    } else if (arg0->unk190.animCurrentFrame > 17.0f) {
        arg0->actor.velocity.y = 6.0f;
        arg0->actor.gravity = 0.0f;
        arg0->actor.speedXZ = 4.0f;
    }
    if ((arg0->unk3E8 & 1) != 0) {
        func_8095D24C(arg0, (void (*)(EnOwl *, GlobalContext *)) func_8095BF78, func_8095C328, arg0 + 0x190, &D_06001ADC, 0.0f);
        arg0->unk3EA = 6;
        arg0->unk3EC += 0x2000;
    }
    func_8095B158((Actor *) arg0);
}

/*
Internal error while decompiling function func_8095C1C8:

Traceback (most recent call last):
  File "main.py", line 0, in run
    raise function_info
  File "main.py", line 0, in run
    info = translate_to_ast(function, options, global_info)
  File "translate.py", line 0, in translate_to_ast
    assert fn_sig is not None, "fn_type is known to be a function"
AssertionError: fn_type is known to be a function
*/

void func_8095C258(EnOwl *arg0) {
    s16 temp_v1;

    SkelAnime_FrameUpdateMatrix(arg0->unk3D4);
    temp_v1 = arg0->unk3EA;
    if ((s32) temp_v1 > 0) {
        arg0->unk3EA = temp_v1 - 1;
        arg0->actor.shape.rot.z = (s16) (s32) (Math_SinS((s16) (arg0->unk3EA * 0x333)) * 1000.0f);
        return;
    }
    arg0->unk414 = func_8095C328;
    arg0->unk3EA = 6;
    SkelAnime_ChangeAnim(arg0->unk3D4, &D_06001ADC, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06001ADC), (u8) 2, 5.0f);
}

void func_8095C328(EnOwl *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;
    s16 temp_v0;

    if (SkelAnime_FrameUpdateMatrix(arg0->unk3D4) != 0) {
        temp_v0 = arg0->unk3EA;
        if ((s32) temp_v0 > 0) {
            arg0->unk3EA = temp_v0 - 1;
            temp_a0 = arg0->unk3D4;
            SkelAnime_ChangeAnim(temp_a0, temp_a0->animCurrentSeg, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) arg0->unk3D4->animCurrentSeg), (u8) 2, 0.0f);
            return;
        }
        arg0->unk3EA = 0xA0;
        arg0->unk414 = func_8095C258;
        SkelAnime_ChangeAnim(arg0->unk3D4, (AnimationHeader *) &D_0600C6D4, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_0600C6D4), (u8) 0, 5.0f);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_8095C408(EnOwl *arg0) {
    SkelAnime *temp_a0;

    if (SkelAnime_FrameUpdateMatrix(arg0->unk3D4) != 0) {
        temp_a0 = arg0->unk3D4;
        SkelAnime_ChangeAnim(temp_a0, temp_a0->animCurrentSeg, 1.0f, 18.0f, 35.0f, (u8) 2, 0.0f);
        arg0->unk3E8 |= 1;
        return;
    }
    arg0->unk3E8 &= 0xFFFE;
}

void func_8095C484(EnOwl *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;

    if (SkelAnime_FrameUpdateMatrix(arg0->unk3D4) != 0) {
        temp_a0 = arg0->unk3D4;
        SkelAnime_ChangeAnim(temp_a0, temp_a0->animCurrentSeg, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) arg0->unk3D4->animCurrentSeg), (u8) 2, 0.0f);
        arg0->unk3E8 |= 1;
        return;
    }
    arg0->unk3E8 &= 0xFFFE;
}

s32 func_8095C510(EnOwl *arg0) {
    s16 temp_a1;
    u16 temp_v0;
    s32 phi_v1;

    temp_v0 = arg0->unk3E8;
    phi_v1 = 0;
    if ((temp_v0 & 2) != 0) {
        phi_v1 = 0x20;
    }
    temp_a1 = arg0->unk3DA;
    if (phi_v1 == (temp_a1 & 0x3F)) {
        return 1;
    }
    if ((temp_v0 & 0x20) != 0) {
        arg0->unk3DA = temp_a1 + 4;
        return 0;
    }
    arg0->unk3DA = temp_a1 - 4;
    return 0;
}

void func_8095C568(Actor *arg0) {
    s16 temp_v1;
    u16 temp_v0;

    temp_v0 = arg0->unk3E8;
    if ((temp_v0 & 0x40) != 0) {
        temp_v1 = arg0->unk406;
        if (((s32) temp_v1 < 0) || ((s32) (arg0 + (temp_v1 * 2))->unk400 < 0)) {
            arg0->unk3E8 = (u16) (temp_v0 & 0xFFBF);
            return;
        }
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay((arg0 + (arg0->unk406 * 2))->unk400);
            return;
        }
        if (ActorCutscene_GetCanPlayNext((arg0 + (arg0->unk406 * 2))->unk400) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((arg0 + (arg0->unk406 * 2))->unk400, arg0);
            arg0->unk3E8 = (u16) (arg0->unk3E8 & 0xFFBF);
            return;
        }
        ActorCutscene_SetIntentToPlay((arg0 + (arg0->unk406 * 2))->unk400);
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void EnOwl_Update(EnOwl *this, GlobalContext *globalCtx) {
    s16 sp36;
    ColliderCylinder *sp2C;
    ColliderCylinder *temp_a2;
    f32 temp_f10_2;
    s16 temp_a1;
    s16 temp_v1;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s32 temp_f10;
    s32 temp_f18;
    s32 temp_f4;
    s32 temp_f6;
    s32 temp_f6_2;
    s32 temp_f8;
    s32 temp_v0_4;
    u16 temp_v0_2;
    u8 temp_t3;
    u8 temp_v0_3;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
    u8 temp_v0_9;
    u8 temp_v1_2;
    void (*temp_v0)(EnOwl *, GlobalContext *);
    s16 phi_v0;
    s16 phi_v1;
    u8 phi_v1_2;
    s16 phi_a1;
    s16 phi_a1_2;
    s32 phi_v0_2;
    s32 phi_v0_3;
    s32 phi_a1_3;
    s32 phi_a1_4;
    EnOwl *this = (EnOwl *) thisx;

    if (this->actor.draw != 0) {
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    }
    temp_v0 = this->unk414;
    if (temp_v0 != 0) {
        temp_v0(this, MIPS2C_ERROR(Read from unset register $a1));
    }
    this->actionFunc(this, globalCtx);
    func_8095C568((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 10.0f, 10.0f, 10.0f, 4U);
    temp_a2 = &this->unk144;
    sp2C = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    if (this->actor.update != 0) {
        if ((&D_06001ADC == this->unk190.animCurrentSeg) && (func_801378B8(&this->unk190, 4.0f) != 0)) {
            Audio_PlayActorSound2((Actor *) this, 0x3926U);
        }
        if ((this->unk3E8 & 2) != 0) {
            this->unk3E0 = 2;
        } else {
            temp_v1 = this->unk3E2;
            if (temp_v1 == 0) {
                phi_v0 = 0;
            } else {
                this->unk3E2 = temp_v1 - 1;
                phi_v0 = this->unk3E2;
            }
            phi_v1 = this->unk3E2;
            if (phi_v0 == 0) {
                this->unk3E2 = Rand_S16Offset(0x3C, 0x3C);
                phi_v1 = this->unk3E2;
            }
            this->unk3E0 = phi_v1;
            if ((s32) this->unk3E0 >= 3) {
                this->unk3E0 = 0;
            }
        }
        temp_v0_2 = this->unk3E8;
        if ((temp_v0_2 & 8) == 0) {
            phi_a1 = 0;
            phi_a1_2 = 0;
            phi_a1_4 = (s32) 0;
            if ((temp_v0_2 & 0x10) != 0) {
                temp_v0_3 = this->unk408;
                if (temp_v0_3 != 0) {
                    if (temp_v0_3 != 1) {
                        if (temp_v0_3 != 2) {

                        } else {
                            sp36 = 0;
                            if (func_8095C510(this, 0) != 0) {
                                this->unk3E8 &= 0xFFEF;
                                sp36 = 0;
                                temp_f10 = (s32) Rand_ZeroFloat(20.0f);
                                this->unk408 = 0;
                                this->unk40A = temp_f10 + 0x3C;
                                func_8095AB4C(this);
                            }
                        }
                    } else {
                        temp_t3 = this->unk409 - 1;
                        temp_v0_4 = temp_t3 & 0xFF;
                        this->unk409 = temp_t3;
                        if (temp_v0_4 != 0) {
                            phi_a1_4 = (s32) (s16) (s32) (Math_CosS((s16) ((s32) (temp_v0_4 << 0x1D) >> 0x10)) * 4096.0f);
                        } else {
                            if ((this->unk3E8 & 2) != 0) {
                                this->unk3DA = 0;
                            } else {
                                this->unk3DA = 0x20;
                            }
                            if ((this->unk3E8 & 0x20) != 0) {
                                this->unk3DA += -4;
                            } else {
                                this->unk3DA += 4;
                            }
                            this->unk408 += 1;
                        }
                        phi_a1_2 = (s16) phi_a1_4;
                        if ((this->unk3E8 & 0x20) != 0) {
                            phi_a1_2 = (s16) (phi_a1_4 * -1);
                        }
                    }
                } else {
                    this->unk408 = 1;
                    this->unk409 = 6;
                }
            } else {
                temp_v0_5 = this->unk40A;
                if ((s32) temp_v0_5 > 0) {
                    this->unk40A = temp_v0_5 - 1;
                } else {
                    temp_v1_2 = this->unk408;
                    phi_v1_2 = temp_v1_2;
                    if (temp_v1_2 == 0) {
                        sp36 = 0;
                        phi_v1_2 = 1U & 0xFF;
                        if (Rand_ZeroOne() < 0.3f) {
                            this->unk408 = 4;
                            this->unk409 = 0xC;
                            phi_v1_2 = 4U & 0xFF;
                        } else {
                            this->unk408 = 1;
                            this->unk409 = 4;
                        }
                    }
                    this->unk409 += -1;
                    phi_a1_3 = (s32) 0;
                    if (phi_v1_2 != 1) {
                        if (phi_v1_2 != 2) {
                            if (phi_v1_2 != 3) {
                                if (phi_v1_2 != 4) {

                                } else {
                                    temp_f18 = (s32) (Math_SinS((s16) (this->unk409 << 0xD)) * 5000.0f);
                                    phi_a1_3 = (s32) (s16) temp_f18;
                                    if ((s32) this->unk409 <= 0) {
                                        sp36 = (s16) temp_f18;
                                        temp_f4 = (s32) Rand_ZeroFloat(20.0f);
                                        this->unk408 = 0;
                                        this->unk40A = temp_f4 + 0x3C;
                                        func_8095AB4C(this);
                                        goto block_56;
                                    }
                                }
                            } else {
                                temp_f6 = (s32) (Math_SinS((s16) (this->unk409 << 0xC)) * 5000.0f);
                                phi_a1_3 = (s32) (s16) temp_f6;
                                if ((s32) this->unk409 <= 0) {
                                    sp36 = (s16) temp_f6;
                                    temp_f8 = (s32) Rand_ZeroFloat(20.0f);
                                    this->unk408 = 0;
                                    this->unk40A = temp_f8 + 0x3C;
                                    func_8095AB4C(this);
block_56:
                                    phi_a1_3 = (s32) sp36;
                                }
                            }
                        } else {
                            phi_a1_3 = 0x1388;
                            if ((s32) this->unk409 <= 0) {
                                this->unk408 = 3;
                                this->unk409 = 4;
                            }
                        }
                    } else {
                        temp_f6_2 = (s32) (Math_SinS((s16) (((s32) this->unk409 * -0x1000) + 0x4000)) * 5000.0f);
                        phi_a1_3 = (s32) (s16) temp_f6_2;
                        if ((s32) this->unk409 <= 0) {
                            sp36 = (s16) temp_f6_2;
                            temp_a1 = (s16) temp_f6_2;
                            temp_f10_2 = Rand_ZeroFloat(15.0f) + 5.0f;
                            this->unk408 = 2;
                            this->unk409 = (u8) (s32) temp_f10_2;
                            phi_a1_3 = (s32) temp_a1;
                        }
                    }
                    phi_a1 = (s16) phi_a1_3;
                    if ((this->unk3E8 & 0x20) != 0) {
                        phi_a1 = (s16) (phi_a1_3 * -1);
                    }
                }
                temp_v0_6 = this->unk40D;
                phi_a1_2 = phi_a1;
                if ((s32) temp_v0_6 > 0) {
                    this->unk40D = temp_v0_6 - 1;
                } else {
                    temp_v0_7 = this->unk40B;
                    this->unk40C += -1;
                    if (temp_v0_7 != 0) {
                        if (temp_v0_7 != 1) {
                            if (temp_v0_7 != 2) {

                            } else {
                                temp_v0_8 = this->unk40C;
                                this->unk3DE = temp_v0_8 * 0x5DC;
                                if ((s32) temp_v0_8 <= 0) {
                                    this->unk40B = 0;
                                    this->unk40C = 4;
                                    sp36 = phi_a1;
                                    this->unk40D = (s32) Rand_ZeroFloat(40.0f) + 0xA0;
                                    phi_a1_2 = phi_a1;
                                }
                            }
                        } else {
                            this->unk3DE = 0x1770;
                            if ((s32) this->unk40C <= 0) {
                                this->unk40B = 2;
                                this->unk40C = 4;
                            }
                        }
                    } else {
                        temp_v0_9 = this->unk40C;
                        this->unk3DE = ((s32) temp_v0_9 * -0x5DC) + 0x1770;
                        if ((s32) temp_v0_9 <= 0) {
                            this->unk40B = 1;
                            sp36 = phi_a1;
                            this->unk40C = (u8) (s32) (Rand_ZeroFloat(15.0f) + 5.0f);
                            phi_a1_2 = phi_a1;
                        }
                    }
                }
            }
            this->unk3DC = (this->unk3DA << 0xA) + phi_a1_2;
            temp_v1_3 = this->unk3DC;
            phi_v0_2 = -(s32) temp_v1_3;
            if ((s32) temp_v1_3 >= 0) {
                phi_v0_2 = (s32) temp_v1_3;
            }
            this->unk3D8 = (s16) (phi_v0_2 >> 3);
            return;
        }
        this->unk3DE = 0;
        if ((temp_v0_2 & 2) != 0) {
            this->unk3DC = -0x8000;
        } else {
            this->unk3DC = 0;
        }
        temp_v1_4 = this->unk3DC;
        phi_v0_3 = -(s32) temp_v1_4;
        if ((s32) temp_v1_4 >= 0) {
            phi_v0_3 = (s32) temp_v1_4;
        }
        this->unk3D8 = (s16) (phi_v0_3 >> 3);
        /* Duplicate return node #80. Try simplifying control flow for better match */
    }
}

void func_8095CCF4(Actor *this, GlobalContext *globalCtx) {
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_2;

    if ((globalCtx->actorCtx.actorList[2].first->unkA74 * 8) < 0) {
        Actor_MarkForDeath(this);
        return;
    }
    temp_f2 = this->world.pos.y;
    if (temp_f2 < (this->unk3F0 - 1000.0f)) {
        Actor_MarkForDeath(this);
        return;
    }
    this->world.pos.y = temp_f2 - 1.0f;
    Actor_UpdateBgCheckInfo(globalCtx, this, 10.0f, 10.0f, 10.0f, 4U);
    if ((this->bgCheckFlags & 1) != 0) {
        temp_v0 = this->unk3DC;
        this->unk3DA = (s16) (((s32) this->unk3DA >> 3) * 7);
        if ((s32) temp_v0 > 0) {
            this->unk3DC = (s16) (temp_v0 - 1);
            goto block_8;
        }
        Actor_MarkForDeath(this);
        return;
    }
block_8:
    temp_v0_2 = this->unk3DA;
    this->unk3D8 = (s16) (this->unk3D8 + temp_v0_2);
    this->unk3DA = (s16) (temp_v0_2 - ((s32) this->unk3D8 >> 6));
}

s32 func_8095CE18(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 != 2) {
        if (arg1 != 3) {
            if (arg1 != 4) {
                if (arg1 != 5) {

                } else if ((arg5->unk3E8 & 8) == 0) {
                    arg4->y += (s32) ((f32) arg5->unk3D8 * 1.5f);
                }
            } else if ((arg5->unk3E8 & 8) == 0) {
                arg4->y -= (s32) ((f32) arg5->unk3D8 * 1.5f);
            }
        } else {
            arg4->x += arg5->unk3DC;
            arg4->z += arg5->unk3D8;
            arg4->z -= arg5->unk3DE;
        }
    } else {
        arg4->z += arg5->unk3DE;
    }
    return 0;
}

void func_8095CF44(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    f32 sp20;
    f32 sp1C;
    f32 sp18;

    sp20 = 0.0f;
    if ((arg4->unk3E8 & 2) != 0) {
        sp18 = 700.0f;
        sp1C = 400.0f;
    } else {
        sp1C = 0.0f;
        sp18 = 1400.0f;
    }
    if (arg1 == 3) {
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp18, arg4 + 0x3C);
    }
}

void EnOwl_Draw(EnOwl *this, GlobalContext *globalCtx) {
    GraphicsContext *sp34;
    Gfx *sp2C;
    Gfx *temp_v0;
    GraphicsContext *temp_a0;
    SkelAnime *temp_v0_2;
    EnOwl *this = (EnOwl *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp34 = temp_a0;
    func_8012C5B0(temp_a0);
    temp_v0 = sp34->polyOpa.p;
    sp34->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp2C = temp_v0;
    sp2C->words.w1 = Lib_SegmentedToVirtual(*(&D_8095D32C + (this->unk3E0 * 4)));
    temp_v0_2 = this->unk3D4;
    SkelAnime_DrawSV(globalCtx, temp_v0_2->skeleton, temp_v0_2->limbDrawTbl, (s32) temp_v0_2->dListCount, func_8095CE18, func_8095CF44, (Actor *) this);
}

void func_8095D074(Actor *this, GlobalContext *globalCtx) {
    Gfx *sp30;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_s0;

    temp_s0 = globalCtx->state.gfxCtx;
    SysMatrix_InsertTranslation(0.0f, 500.0f, 0.0f, 1);
    SysMatrix_InsertXRotation_s((s16) (this->unk3D8 - 0x4000), 1);
    SysMatrix_InsertTranslation(0.0f, 0.0f, -500.0f, 1);
    if ((s32) this->unk3DC >= 0x20) {
        temp_v0 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp30 = temp_v0;
        sp30->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        func_8012C28C(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xE200001C;
        temp_v0_2->words.w1 = 0xC8113078;
        temp_v0_3 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = 0xFF;
        temp_v0_3->words.w0 = 0xFB000000;
        temp_v0_4 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDE000000;
        temp_v0_4->words.w1 = (u32) &D_06001200;
        return;
    }
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0xDA380003;
    sp20 = temp_v0_5;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0_6 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_6 + 8;
    temp_v0_6->words.w0 = 0xE200001C;
    temp_v0_6->words.w1 = 0xC81041C8;
    temp_v0_7 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_7 + 8;
    temp_v0_7->words.w0 = 0xFB000000;
    temp_v0_7->words.w1 = (this->unk3DC * 8) & 0xFF;
    temp_v0_8 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_8 + 8;
    temp_v0_8->words.w1 = (u32) &D_06001200;
    temp_v0_8->words.w0 = 0xDE000000;
}

void func_8095D24C(EnOwl *arg0, void (*arg1)(EnOwl *, GlobalContext *), void (*arg2)(EnOwl *, GlobalContext *), SkelAnime *arg3, AnimationHeaderCommon *arg4, f32 arg5) {
    arg0->unk3D4 = arg3;
    SkelAnime_ChangeAnim(arg0->unk3D4, (AnimationHeader *) arg4, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(arg4), (u8) 2, arg5);
    arg0->actionFunc = arg1;
    arg0->unk414 = arg2;
}
