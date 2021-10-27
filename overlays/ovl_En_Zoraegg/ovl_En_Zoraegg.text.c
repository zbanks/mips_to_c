typedef struct EnZoraegg {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x24];                 /* maybe part of unk_188[7]? */
    /* 0x1B2 */ Vec3s unk_1B2;                      /* inferred */
    /* 0x1B8 */ char pad_1B8[0x24];                 /* maybe part of unk_1B2[7]? */
    /* 0x1DC */ void *unk_1DC;                      /* inferred */
    /* 0x1E0 */ f32 unk_1E0;                        /* inferred */
    /* 0x1E4 */ f32 unk_1E4;                        /* inferred */
    /* 0x1E8 */ s16 unk_1E8;                        /* inferred */
    /* 0x1EA */ u16 unk_1EA;                        /* inferred */
    /* 0x1EC */ s8 unk_1EC;                         /* inferred */
    /* 0x1ED */ u8 unk_1ED;                         /* inferred */
    /* 0x1EE */ s8 unk_1EE;                         /* inferred */
    /* 0x1EF */ s8 unk_1EF;                         /* inferred */
    /* 0x1F0 */ u16 unk_1F0;                        /* inferred */
    /* 0x1F2 */ char pad_1F2[0x2];
    /* 0x1F4 */ s16 unk_1F4;                        /* inferred */
    /* 0x1F6 */ char pad_1F6[0x2];
    /* 0x1F8 */ void (*actionFunc)(EnZoraegg *, GlobalContext *);
} EnZoraegg;                                        /* size = 0x1FC */

struct _mips2c_stack_EnZoraegg_Destroy {};          /* size 0x0 */

struct _mips2c_stack_EnZoraegg_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnZoraegg_Init {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x8];                    /* maybe part of sp34[3]? */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x18];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnZoraegg_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B31590 {};              /* size 0x0 */

struct _mips2c_stack_func_80B319A8 {};              /* size 0x0 */

struct _mips2c_stack_func_80B319D0 {};              /* size 0x0 */

struct _mips2c_stack_func_80B31A34 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B31C40 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B31CB4 {};              /* size 0x0 */

struct _mips2c_stack_func_80B31D14 {};              /* size 0x0 */

struct _mips2c_stack_func_80B31D64 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ ? sp24;                              /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B31E00 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ? sp20;                              /* inferred */
    /* 0x20 */ char pad_20[0x10];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B32084 {};              /* size 0x0 */

struct _mips2c_stack_func_80B32094 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B320E0 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B321D0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B32228 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B322BC {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Actor *sp1C;                         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B32390 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Actor *sp20;                         /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B324B0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B32644 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ SkelAnime *sp20;                     /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B326F4 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B32820 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B32928 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B32A88 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B32B10 {};              /* size 0x0 */

struct _mips2c_stack_func_80B32B3C {};              /* size 0x0 */

struct _mips2c_stack_func_80B32B70 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B32BB8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B32C34 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ WaterBox *sp34;                      /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B32D08 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ WaterBox *sp44;                      /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80B32F04 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x1C];                   /* maybe part of sp24[8]? */
    /* 0x44 */ GraphicsContext *sp44;               /* inferred */
    /* 0x48 */ char pad_48[0x4];
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad_4C[0xC];
    /* 0x58 */ Gfx *sp58;                           /* inferred */
    /* 0x5C */ char pad_5C[0x4];
    /* 0x60 */ s16 sp60;                            /* inferred */
    /* 0x62 */ s16 sp62;                            /* inferred */
    /* 0x64 */ char pad_64[0x10];                   /* maybe part of sp62[9]? */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0x4];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80B331C8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x8];                    /* maybe part of sp24[3]? */
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80B3336C {};              /* size 0x0 */

struct _mips2c_stack_func_80B333DC {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B33480 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ GraphicsContext *sp28;               /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ GraphicsContext *sp38;               /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad_44[0x4];
    /* 0x48 */ GraphicsContext *sp48;               /* inferred */
    /* 0x4C */ char pad_4C[0xC];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80B33818 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ GraphicsContext *sp38;               /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

? func_8012300C(GlobalContext *, ?, EnZoraegg *, GlobalContext *); /* extern */
void func_80B31590(EnZoraegg *arg0);                /* static */
s32 func_80B319A8(GlobalContext *arg0, GlobalContext *); /* static */
void func_80B319D0(GlobalContext *arg0, s32 arg1);  /* static */
void func_80B31A34(Actor *arg0);                    /* static */
void func_80B31C40(Actor *arg0, GlobalContext *arg1); /* static */
void *func_80B31CB4(GlobalContext *arg0, EnZoraegg *, GlobalContext *); /* static */
Actor *func_80B31D14(GlobalContext *arg0, GlobalContext *); /* static */
void func_80B31D64(Actor *arg0, GlobalContext *arg1, s32 arg2, f32 arg3); /* static */
void func_80B31E00(Actor *arg0);                    /* static */
void func_80B32084(EnZoraegg *arg0, GlobalContext *arg1); /* static */
void func_80B32094(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B320E0(EnZoraegg *arg0, GlobalContext *arg1); /* static */
void func_80B321D0(void *arg0, GlobalContext *arg1); /* static */
void func_80B32228(EnZoraegg *arg0, GlobalContext *arg1); /* static */
void func_80B322BC(EnZoraegg *arg0, GlobalContext *arg1); /* static */
void func_80B32390(EnZoraegg *arg0, GlobalContext *arg1); /* static */
void func_80B324B0(EnZoraegg *arg0, GlobalContext *arg1); /* static */
void func_80B32644(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B326F4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B32820(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B32928(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B32A88(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B32B10(EnZoraegg *arg0, GlobalContext *arg1); /* static */
void func_80B32B3C(EnZoraegg *arg0, GlobalContext *arg1); /* static */
void func_80B32B70(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B32BB8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B32C34(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B32D08(EnZoraegg *arg0, GlobalContext *arg1); /* static */
void func_80B32F04(GlobalContext *arg0, GraphicsContext **arg1); /* static */
void func_80B331C8(GlobalContext *arg0, GraphicsContext **arg1); /* static */
s32 func_80B3336C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80B333DC(GraphicsContext **arg0, u32 *arg1, f32 arg2); /* static */
void func_80B33480(GraphicsContext **arg0, s32 arg1, u32 *arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80B33818(Actor *arg0, GlobalContext *arg1); /* static */
extern AnimationHeader D_060005D4;
extern AnimationHeader D_06001E08;
extern FlexSkeletonHeader D_06004C90;
extern AnimationHeaderCommon D_06004D20;
extern AnimationHeader D_06004E04;
extern AnimationHeader D_06004FE4;
extern AnimationHeader D_06005098;
extern ? D_06005250;
static ? D_80B33930;                                /* unable to generate initializer */
static ? D_80B33940;                                /* unable to generate initializer */
static ? D_80B33950;                                /* unable to generate initializer */

void func_80B31590(EnZoraegg *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;

    temp_v0 = arg0->actor.home.rot.x;
    arg0->actor.shape.yOffset = 0.0f;
    if (temp_v0 == 0) {
        arg0->actor.scale.x = 0.4f;
    } else {
        arg0->actor.scale.x = (f32) temp_v0 * 0.04f;
    }
    temp_v0_2 = arg0->actor.home.rot.z;
    if (temp_v0_2 == 0) {
        arg0->actor.scale.z = 0.4f;
    } else {
        arg0->actor.scale.z = (f32) temp_v0_2 * 0.04f;
    }
    arg0->actor.shape.rot.z = 0;
    temp_v0_3 = arg0->actor.shape.rot.z;
    arg0->actor.scale.y = 0.4f;
    arg0->actor.draw = NULL;
    arg0->actor.shape.rot.y = temp_v0_3;
    arg0->actor.shape.rot.x = temp_v0_3;
}

void EnZoraegg_Init(Actor *thisx, GlobalContext *globalCtx) {
    ? sp40;
    SkelAnime *sp34;
    SkelAnime *temp_a1;
    s16 temp_v0;
    u32 temp_v1;
    u32 phi_v1;
    EnZoraegg *this = (EnZoraegg *) thisx;

    sp40.unk_0 = (s32) D_80B33930.unk_0;
    sp40.unk_8 = (s32) D_80B33930.unk_8;
    sp40.unk_4 = (s32) D_80B33930.unk_4;
    sp40.unk_C = (u16) D_80B33930.unk_C;
    Actor_SetScale((Actor *) this, 0.006f);
    temp_a1 = &this->unk_144;
    sp34 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06004C90, &D_06005098, &this->unk_188, &this->unk_1B2, 7);
    SkelAnime_ChangeAnimDefaultRepeat(sp34, &D_06005098);
    ActorShape_Init(&this->actor.shape, 1100.0f, NULL, 0.0f);
    temp_v0 = this->actor.params;
    temp_v1 = temp_v0 & 0x1F;
    this->actionFunc = func_80B32084;
    this->unk_1ED = 0xFF;
    this->unk_1EC = 0;
    this->unk_1EA = 0;
    this->unk_1E0 = 1.0f;
    this->actor.velocity.y = -10.0f;
    this->actor.minVelocityY = -10.0f;
    this->actor.gravity = -5.0f;
    this->unk_1E4 = 0.0f;
    phi_v1 = temp_v1;
    switch (temp_v1) {                              /* switch 1 */
    case 0:                                         /* switch 1 */
        if (Flags_GetSwitch(globalCtx, (s32) (temp_v0 & 0xFE00) >> 9) != 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        phi_v1 = this->actor.params & 0x1F;
    default:                                        /* switch 1 */
block_12:
        switch (phi_v1) {                           /* switch 2 */
        case 0:                                     /* switch 2 */
            this->actionFunc = func_80B320E0;
            this->actor.flags |= 9;
            this->actor.targetMode = 3;
            return;
        case 1:                                     /* switch 2 */
            this->actionFunc = func_80B322BC;
            func_80B31590(this);
            return;
        case 2:                                     /* switch 2 */
            this->actionFunc = func_80B32390;
            func_80B31590(this);
            return;
        case 3:                                     /* switch 2 */
        case 4:                                     /* switch 2 */
        case 5:                                     /* switch 2 */
        case 6:                                     /* switch 2 */
        case 7:                                     /* switch 2 */
        case 8:                                     /* switch 2 */
        case 9:                                     /* switch 2 */
            this->unk_1F0 = (sp + (phi_v1 * 2))->unk_3A;
            SkelAnime_ChangeAnimDefaultStop(sp34, &D_06001E08);
            this->unk_1EC = 1;
            this->unk_1EE = 0;
            this->unk_1EF = 0;
            this->actionFunc = func_80B32B10;
            if (((this->actor.params & 0x1F) - 3) >= func_80B319A8(globalCtx)) {
                this->actionFunc = func_80B32B3C;
                this->actor.draw = NULL;
                return;
            }
        default:                                    /* switch 2 */
            return;
        case 10:                                    /* switch 2 */
        case 11:                                    /* switch 2 */
        case 12:                                    /* switch 2 */
        case 13:                                    /* switch 2 */
        case 14:                                    /* switch 2 */
        case 15:                                    /* switch 2 */
        case 16:                                    /* switch 2 */
            this->unk_1EC = 2;
            this->actionFunc = func_80B324B0;
            this->unk_1F0 = (sp + (phi_v1 * 2))->unk_2C;
            SkelAnime_ChangeAnimDefaultRepeat(sp34, &D_06004FE4);
            this->unk_1EE = 0;
            this->unk_1ED = 0;
            this->unk_1EA |= 3;
            return;
        case 17:                                    /* switch 2 */
            Actor_SetScale((Actor *) this, 0.0006f);
            this->actionFunc = func_80B32D08;
            this->actor.shape.rot.x = 0;
            this->actor.minVelocityY = -10.0f;
            this->actor.world.pos.y -= this->actor.shape.yOffset * this->actor.scale.y;
            this->actor.velocity.y = 0.0f;
            this->actor.gravity = -1.0f;
            /* Duplicate return node #21. Try simplifying control flow for better match */
            return;
        }
        break;
    case 17:                                        /* switch 1 */
        if (func_80B319A8(globalCtx) >= 7) {
            Actor_MarkForDeath((Actor *) this);
            this->actor.home.rot.z = 1;
            return;
        }
        phi_v1 = this->actor.params & 0x1F;
        goto block_12;
    case 3:                                         /* switch 1 */
    case 4:                                         /* switch 1 */
    case 5:                                         /* switch 1 */
    case 6:                                         /* switch 1 */
    case 7:                                         /* switch 1 */
    case 8:                                         /* switch 1 */
    case 9:                                         /* switch 1 */
        if ((gSaveContext.weekEventReg[19] & 0x40) != 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        goto block_12;
    case 10:                                        /* switch 1 */
    case 11:                                        /* switch 1 */
    case 12:                                        /* switch 1 */
    case 13:                                        /* switch 1 */
    case 14:                                        /* switch 1 */
    case 15:                                        /* switch 1 */
    case 16:                                        /* switch 1 */
        if ((gSaveContext.weekEventReg[19] & 0x40) == 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        goto block_12;
    }
}

void EnZoraegg_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnZoraegg *this = (EnZoraegg *) thisx;

}

s32 func_80B319A8(GlobalContext *arg0) {
    return *(&gSaveContext.roomInf[0][5] + (arg0->sceneNum * 0x1C)) & 7;
}

void func_80B319D0(GlobalContext *arg0, s32 arg1) {
    void *temp_v0;
    void *temp_v0_2;

    if ((arg1 < 8) && (arg1 >= 0)) {
        temp_v0 = &gSaveContext + (arg0->sceneNum * 0x1C);
        temp_v0->unk_10C = (s32) (temp_v0->unk_10C & ~7);
        temp_v0_2 = &gSaveContext + (arg0->sceneNum * 0x1C);
        temp_v0_2->unk_10C = (s32) (temp_v0_2->unk_10C | arg1);
    }
}

void func_80B31A34(Actor *arg0) {
    s32 sp1C;
    s32 temp_f6;

    if ((arg0->unk_1EA & 1) != 0) {
        arg0->unk_1EF = 0x64;
        arg0->unk_1EE = 0x64;
        return;
    }
    temp_f6 = (s32) arg0->unk_15C;
    if (temp_f6 < 6) {
        arg0->unk_1EE = 0;
        arg0->unk_1EF = 0;
        return;
    }
    if (temp_f6 < 0x5D) {
        sp1C = temp_f6;
        arg0 = arg0;
        arg0->unk_1EE = (s8) (u32) (Math_SinS((s16) ((temp_f6 * 0xBC) - 0x468)) * 100.0f);
        if (temp_f6 >= 0x59) {
            arg0 = arg0;
            arg0->unk_1EF = (s8) (u32) (Math_SinS((s16) ((temp_f6 << 0xC) + 0xFFFA7000)) * 100.0f);
            return;
        }
        arg0->unk_1EF = 0;
        return;
    }
    arg0->unk_1EF = 0x64;
    arg0->unk_1EE = 0x64;
}

void func_80B31C40(Actor *arg0, GlobalContext *arg1) {
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    Math_Vec3f_Copy((Vec3f *) &arg0->focus, (Vec3f *) &arg0->world);
    arg0->focus.pos.y += 10.0f;
    Actor_UpdateBgCheckInfo(arg1, arg0, 0.0f, 0.0f, 0.0f, 4U);
}

void *func_80B31CB4(GlobalContext *arg0) {
    void *temp_v1;
    void *temp_v1_2;
    void *phi_v1;

    temp_v1 = arg0->actorCtx.actorList[7].first;
    phi_v1 = temp_v1;
    if (temp_v1 != 0) {
loop_1:
        if ((phi_v1->id == 0x1F5) && ((phi_v1->params & 0x1F) == 0x11) && (phi_v1->home.rot.z == 0)) {
            phi_v1->home.rot.z = 1;
            return phi_v1;
        }
        temp_v1_2 = phi_v1->next;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 == 0) {
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return NULL;
        }
        goto loop_1;
    }
    return NULL;
}

Actor *func_80B31D14(GlobalContext *arg0) {
    Actor *temp_v1;
    Actor *temp_v1_2;
    Actor *phi_v1;

    temp_v1 = arg0->actorCtx.actorList[7].first;
    phi_v1 = temp_v1;
    if (temp_v1 != 0) {
loop_1:
        if ((phi_v1->id == 0x1F5) && ((phi_v1->params & 0x1F) == 3)) {
            return phi_v1;
        }
        temp_v1_2 = phi_v1->next;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 == 0) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return NULL;
        }
        goto loop_1;
    }
    return NULL;
}

void func_80B31D64(Actor *arg0, GlobalContext *arg1, s32 arg2, f32 arg3) {
    f32 sp28;
    ? sp24;
    Vec3f *sp20;
    Vec3f *temp_t6;

    temp_t6 = arg0 + 0x24;
    sp20 = temp_t6;
    sp24.unk_0 = (s32) temp_t6->x;
    sp24.unk_4 = (s32) temp_t6->y;
    sp24.unk_8 = (s32) temp_t6->z;
    sp28 += arg3;
    if ((arg1->gameplayFrames & arg2) == 0) {
        EffectSsBubble_Spawn(arg1, sp20, 0.0f, 0.0f, 10.0f, 0.13f);
    }
}

void func_80B31E00(Actor *arg0) {
    ? sp20;
    s16 temp_v0;
    f32 phi_f8;
    s32 phi_v0;

    sp20.unk_0 = (s32) D_80B33940.unk_0;
    sp20.unk_4 = (s32) D_80B33940.unk_4;
    sp20.unk_8 = (s32) D_80B33940.unk_8;
    sp20.unk_C = (s32) D_80B33940.unk_C;
    temp_v0 = arg0->unk_1E8;
    if ((s32) temp_v0 < 0x70) {
        if ((s32) temp_v0 >= 0xB) {
            arg0->unk_1ED = (s8) (s32) ((112.0f - (f32) temp_v0) * 2.5f);
        }
    } else {
        arg0->unk_1ED = 0;
    }
    phi_v0 = (s32) arg0->unk_1E8;
    phi_v0 = (s32) arg0->unk_1E8;
    if ((s32) arg0->unk_1E8 < 0xA) {
        arg0[1].yDistToPlayer = *(&sp20 + (((s32) arg0->unk_1E8 & 3) * 4));
    } else if ((s32) arg0->unk_1E8 < 0x16) {
        arg0 = arg0;
        arg0[1].yDistToPlayer = (Math_SinS((s16) (s32) (((f32) (s32) arg0->unk_1E8 - 10.0f) * 1365.3334f)) * 0.8f) + 1.0f;
        phi_v0 = (s32) arg0->unk_1E8;
    } else if ((s32) arg0->unk_1E8 < 0x1A) {
        arg0 = arg0;
        arg0[1].yDistToPlayer = (Math_CosS((s16) (s32) (((f32) (s32) arg0->unk_1E8 - 22.0f) * 4096.0f)) * 0.8f) + 1.0f;
        phi_v0 = (s32) arg0->unk_1E8;
    } else if ((s32) arg0->unk_1E8 < 0x20) {
        arg0[1].yDistToPlayer = *(&sp20 + ((((s32) arg0->unk_1E8 - 1) & 3) * 4));
    } else if ((s32) arg0->unk_1E8 < 0x2F) {
        arg0[1].yDistToPlayer = 1.0f;
        phi_v0 = (s32) arg0->unk_1E8;
    } else {
        if ((s32) arg0->unk_1E8 < 0x35) {
            phi_f8 = *(&sp20 + ((((s32) arg0->unk_1E8 - 2) & 3) * 4));
            goto block_20;
        }
        if ((s32) arg0->unk_1E8 < 0x4A) {
            arg0[1].yDistToPlayer = 1.0f - (((f32) (s32) arg0->unk_1E8 - 53.0f) * 0.00952381f);
        } else if ((s32) arg0->unk_1E8 < 0x70) {
            phi_f8 = (arg0[1].yDistToPlayer * 0.9f) + 0.15f;
            phi_v0 = (s32) arg0->unk_1E8;
block_20:
            arg0[1].yDistToPlayer = phi_f8;
        }
    }
    if ((phi_v0 == 0x6F) || (phi_v0 == 0x20)) {
        Audio_PlayActorSound2(arg0, 0x29AEU);
    }
}

void func_80B32084(EnZoraegg *arg0, GlobalContext *arg1) {

}

void func_80B32094(Actor *arg0, GlobalContext *arg1) {
    if (func_80152498(arg1 + 0x4908) == 2) {
        arg0->unk_1F8 = func_80B320E0;
    }
    func_80B31C40(arg0, arg1);
}

void func_80B320E0(EnZoraegg *arg0, GlobalContext *arg1) {
    if (Actor_HasParent((Actor *) arg0, arg1) != 0) {
        Actor_SetSwitchFlag(arg1, (s32) (arg0->actor.params & 0xFE00) >> 9);
        Actor_MarkForDeath((Actor *) arg0);
    } else if (func_800B84D0((Actor *) arg0, arg1) != 0) {
        arg0->actionFunc = (void (*)(EnZoraegg *, GlobalContext *)) func_80B32094;
        func_801518B0(arg1, 0x24BU, (Actor *) arg0);
    } else {
        func_800B8A1C((Actor *) arg0, arg1, 0xBA, 80.0f, 60.0f);
        if (arg0->actor.isTargeted != 0) {
            func_800B8614((Actor *) arg0, arg1, 110.0f);
        }
    }
    arg0->actor.targetMode = 3;
    arg0->actor.flags |= 9;
    func_80B31C40((Actor *) arg0, arg1);
}

void func_80B321D0(void *arg0, GlobalContext *arg1) {
    if (ActorCutscene_GetCurrentIndex() != arg0->unk_38) {
        arg0->unk_1F8 = func_80B322BC;
        func_80B319D0(arg1, func_80B319A8(arg1) + 1);
    }
}

void func_80B32228(EnZoraegg *arg0, GlobalContext *arg1) {
    void *sp20;
    s16 temp_v0;

    sp20 = arg1->actorCtx.actorList[2].first;
    if (ActorCutscene_GetCanPlayNext((s16) arg0->actor.cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->actor.cutscene, arg0->unk_1DC);
        arg0->actionFunc = func_80B321D0;
        return;
    }
    temp_v0 = arg0->unk_1E8;
    if ((s32) temp_v0 > 0) {
        arg0->unk_1E8 = temp_v0 - 1;
    } else if (temp_v0 == 0) {
        ActorCutscene_Stop((s16) sp20->unk_A86);
        sp20->unk_A86 = -1;
        arg0->unk_1E8 = (s16) -1;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
}

void func_80B322BC(EnZoraegg *arg0, GlobalContext *arg1) {
    Actor *sp1C;
    Actor *temp_v0;
    EnZoraegg *temp_a2;
    GlobalContext *temp_a0;
    GlobalContext *temp_a3;
    EnZoraegg *phi_a2;
    GlobalContext *phi_a3;

    temp_a2 = arg0;
    temp_a3 = arg1;
    temp_a0 = temp_a3;
    phi_a2 = temp_a2;
    phi_a3 = temp_a3;
    if ((temp_a2->actor.cutscene != -1) && (sp1C = temp_a3->actorCtx.actorList[2].first, arg0 = temp_a2, arg1 = temp_a3, temp_v0 = func_80B31CB4(temp_a0, temp_a2, temp_a3), arg0->unk_1DC = temp_v0, phi_a2 = arg0, phi_a3 = arg1, (temp_v0 != 0))) {
        arg0->unk_1E8 = 3;
        arg0->actionFunc = func_80B32228;
        return;
    }
    if ((fabsf(temp_a3->actorCtx.actorList[2].first->world.pos.x - phi_a2->actor.world.pos.x) < (100.0f * phi_a2->actor.scale.x)) && (fabsf(temp_a3->actorCtx.actorList[2].first->world.pos.z - phi_a2->actor.world.pos.z) < (100.0f * phi_a2->actor.scale.z))) {
        func_8012300C(phi_a3, 0x19, phi_a2, phi_a3);
    }
}

void func_80B32390(EnZoraegg *arg0, GlobalContext *arg1) {
    Actor *sp20;
    Actor *temp_v0;
    Actor *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    sp20 = temp_v1;
    if (ActorCutscene_GetCanPlayNext((s16) arg0->actor.cutscene) != 0) {
        temp_v0 = func_80B31D14(arg1, arg1);
        if (temp_v0 != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->actor.cutscene, temp_v0);
            gSaveContext.eventInf[3] |= 8;
            Actor_MarkForDeath((Actor *) arg0);
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    sp20 = temp_v1;
    if ((func_80B319A8(arg1, arg1) >= 7) && (fabsf(temp_v1->world.pos.x - arg0->actor.world.pos.x) < (100.0f * arg0->actor.scale.x)) && (fabsf(temp_v1->world.pos.z - arg0->actor.world.pos.z) < (100.0f * arg0->actor.scale.z)) && (fabsf(temp_v1->world.pos.y - arg0->actor.world.pos.y) < 30.0f)) {
        ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
    }
}

void func_80B324B0(EnZoraegg *arg0, GlobalContext *arg1) {
    SkelAnime *sp20;
    SkelAnime *temp_a0;

    temp_a0 = &arg0->unk_144;
    sp20 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_800EE29C(arg1, (u32) arg0->unk_1F0) != 0) {
        if ((arg0->unk_1EA & 4) != 0) {
            if ((func_800EE29C(arg1, (u32) arg0->unk_1F0) != 0) && (arg1->csCtx.npcActions[func_800EE200(arg1, (u32) arg0->unk_1F0)]->unk0 == 3)) {
                SkelAnime_ChangeAnimDefaultRepeat(sp20, &D_06004FE4);
                arg0->unk_1EA &= 0xFFFB;
            }
        } else if ((func_800EE29C(arg1, (u32) arg0->unk_1F0) != 0) && (arg1->csCtx.npcActions[func_800EE200(arg1, (u32) arg0->unk_1F0)]->unk0 == 4)) {
            SkelAnime_ChangeAnimDefaultRepeat(sp20, &D_06004E04);
            arg0->unk_1EA |= 4;
        }
        func_800EDF24((Actor *) arg0, arg1, func_800EE200(arg1, (u32) arg0->unk_1F0));
        if (((arg0->unk_1EA & 4) != 0) && (func_801378B8(sp20, arg0->unk_1E4) != 0)) {
            Audio_PlayActorSound2((Actor *) arg0, 0x29B0U);
            arg0->unk_1E4 = Rand_ZeroFloat(5.0f);
            return;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return;
    }
    if ((arg0->unk_1EA & 4) != 0) {
        SkelAnime_ChangeAnimDefaultRepeat(sp20, &D_06004FE4);
        arg0->unk_1EA &= 0xFFFB;
    }
}

void func_80B32644(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    u8 temp_v0;

    temp_a0 = arg0 + 0x144;
    sp20 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_06004FE4);
        arg0->unk_1EE = 0U;
        arg0->unk_1EA = (u16) (arg0->unk_1EA | 2);
    }
    if (func_800EE29C(arg1, (u32) arg0->unk_1F0) == 0) {
        arg0->unk_1F8 = func_80B324B0;
        return;
    }
    func_800EDF24(arg0, arg1, func_800EE200(arg1, (u32) arg0->unk_1F0));
    temp_v0 = arg0->unk_1EE;
    if ((s32) temp_v0 >= 0x1A) {
        arg0->unk_1EE = (u8) (temp_v0 - 0x19);
        return;
    }
    arg0->unk_1EE = 0U;
}

void func_80B326F4(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp34;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    sp34 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if ((func_800EE29C(arg1, (u32) arg0->unk_1F0) != 0) && (arg1->csCtx.npcActions[func_800EE200(arg1, (u32) arg0->unk_1F0)]->unk0 == 3)) {
        SkelAnime_ChangeAnim(sp34, (AnimationHeader *) &D_06004D20, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06004D20), (u8) 2, 5.0f);
        arg0->unk_1E8 = 0;
        arg0->unk_1F8 = func_80B32644;
        gSaveContext.weekEventReg[19] |= 0x40;
        arg0->unk_1EC = 2;
        arg0->unk_1EE = 0x64;
        Audio_PlayActorSound2(arg0, 0x29BCU);
    }
    func_800EDF24(arg0, arg1, func_800EE200(arg1, (u32) arg0->unk_1F0));
    if (func_801378B8(sp34, 4.0f) != 0) {
        Audio_PlayActorSound2(arg0, 0x29B0U);
    }
}

void func_80B32820(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *temp_s1;

    temp_s1 = arg0 + 0x144;
    if (SkelAnime_FrameUpdateMatrix(temp_s1) != 0) {
        if ((s32) arg0->unk_1E8 >= 2) {
            arg0->unk_1F8 = func_80B326F4;
            SkelAnime_ChangeAnim(temp_s1, &D_06005098, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06005098), (u8) 0, 10.0f);
            arg0->unk_1E8 = 0;
            SkelAnime_FrameUpdateMatrix(temp_s1);
            return;
        }
        SkelAnime_ChangeAnimDefaultStop(temp_s1, &D_060005D4);
        arg0->unk_1E8 = (s16) (arg0->unk_1E8 + 1);
        SkelAnime_FrameUpdateMatrix(temp_s1);
        goto block_4;
    }
block_4:
    func_800EDF24(arg0, arg1, func_800EE200(arg1, (u32) arg0->unk_1F0));
    if (func_801378B8(temp_s1, 16.0f) != 0) {
        Audio_PlayActorSound2(arg0, 0x29AFU);
    }
}

void func_80B32928(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = arg0->unk_1E8;
    temp_a0 = arg0 + 0x144;
    if ((s32) temp_v0 < 0x70) {
        arg0->unk_1E8 = (s16) (temp_v0 + 1);
    }
    sp24 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_060005D4);
        arg0->unk_1EA = (u16) (arg0->unk_1EA | 1);
        arg0->unk_1F8 = func_80B32820;
        arg0->unk_1E8 = 0;
        arg0->velocity.y = 0.0f;
        return;
    }
    func_80B31A34(arg0);
    func_80B31E00(arg0);
    temp_v0_2 = arg0->unk_1E8;
    if ((s32) temp_v0_2 < 0x70) {
        if (((s32) temp_v0_2 >= 0x45) && ((s32) temp_v0_2 < 0x48)) {
            func_80B31D64(arg0, arg1, 0, 0.0f);
            func_80B31D64(arg0, arg1, 0, 0.0f);
            func_80B31D64(arg0, arg1, 0, 0.0f);
        } else {
            func_80B31D64(arg0, arg1, 0xD, 0.0f);
        }
    }
    func_800EDF24(arg0, arg1, func_800EE200(arg1, (u32) arg0->unk_1F0));
    if ((func_801378B8(sp24, 97.0f) != 0) || (func_801378B8(sp24, 101.0f) != 0) || (func_801378B8(sp24, 105.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x29B0U);
    }
}

void func_80B32A88(Actor *arg0, GlobalContext *arg1) {
    if ((func_800EE29C(arg1, (u32) arg0->unk_1F0) != 0) && (arg1->csCtx.npcActions[func_800EE200(arg1, (u32) arg0->unk_1F0)]->unk0 == 2)) {
        arg0->unk_1E8 = 0;
        arg0->unk_1F8 = func_80B32928;
    }
    func_80B31D64(arg0, arg1, 0xD, 0.0f);
}

void func_80B32B10(EnZoraegg *arg0, GlobalContext *arg1) {
    if ((gSaveContext.eventInf[3] & 8) != 0) {
        arg0->actionFunc = (void (*)(EnZoraegg *, GlobalContext *)) func_80B32A88;
    }
}

void func_80B32B3C(EnZoraegg *arg0, GlobalContext *arg1) {
    if ((gSaveContext.eventInf[3] & 8) != 0) {
        arg0->actionFunc = (void (*)(EnZoraegg *, GlobalContext *)) func_80B32A88;
        arg0->actor.draw = EnZoraegg_Draw;
    }
}

void func_80B32B70(Actor *arg0, GlobalContext *arg1) {
    func_80B31C40(arg0, arg1);
    if (func_800EE29C(arg1, 0x1C9U) != 0) {
        Actor_MarkForDeath(arg0);
    }
}

void func_80B32BB8(Actor *arg0, GlobalContext *arg1) {
    func_80B31C40(arg0, arg1);
    func_80B31D64(arg0, arg1, 0xD, 0.0f);
    if ((arg0->bgCheckFlags & 1) != 0) {
        arg0->unk_1F8 = func_80B32B70;
    }
    if (func_800EE29C(arg1, 0x1C9U) != 0) {
        Actor_MarkForDeath(arg0);
    }
}

void func_80B32C34(Actor *arg0, GlobalContext *arg1) {
    WaterBox *sp34;
    f32 sp30;
    f32 *temp_t6;

    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    Math_Vec3f_Copy((Vec3f *) &arg0->focus, (Vec3f *) &arg0->world);
    temp_t6 = &sp30;
    arg0->focus.pos.y += 10.0f;
    sp30 = arg0->world.pos.y;
    if (func_800CA1AC(arg1, arg1 + 0x830, arg0->world.pos.x, arg0->world.pos.z, temp_t6, &sp34) != 0) {
        if ((arg0->world.pos.y + 50.0f) < sp30) {
            arg0->unk_1F8 = func_80B32BB8;
        }
        func_80B31D64(arg0, arg1, 0, -20.0f);
        func_80B31D64(arg0, arg1, 0, -20.0f);
    }
}

void func_80B32D08(EnZoraegg *arg0, GlobalContext *arg1) {
    WaterBox *sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 *temp_a1;
    f32 *temp_t6;
    f32 temp_f0;

    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) arg0);
    Math_Vec3f_Copy((Vec3f *) &arg0->actor.focus, (Vec3f *) &arg0->actor.world);
    temp_t6 = &sp40;
    arg0->actor.focus.pos.y += 10.0f;
    sp40 = arg0->actor.world.pos.y;
    if (func_800CA1AC(arg1, &arg1->colCtx, arg0->actor.world.pos.x, arg0->actor.world.pos.z, temp_t6, &sp44) != 0) {
        temp_a1 = &sp34;
        if (arg0->actor.world.pos.y < sp40) {
            sp38 = sp40;
            sp34 = arg0->actor.world.pos.x;
            sp3C = arg0->actor.world.pos.z;
            EffectSsGRipple_Spawn(arg1, (Vec3f *) temp_a1, 0x96, 0x1F4, (s16) 0);
            EffectSsGSplash_Spawn(arg1, (Vec3f *) &sp34, NULL, NULL, (s16) 0, (s16) 0xC8);
            Audio_PlayActorSound2((Actor *) arg0, 0x28C5U);
            arg0->actionFunc = (void (*)(EnZoraegg *, GlobalContext *)) func_80B32C34;
            arg0->actor.velocity.y = -1.0f;
            arg0->actor.minVelocityY = -1.0f;
            arg0->actor.gravity = -1.0f;
        }
    }
    temp_f0 = arg0->actor.scale.x;
    if (temp_f0 < 0.006f) {
        Actor_SetScale((Actor *) arg0, temp_f0 + 0.0012f);
    }
    if (arg0->actor.scale.x > 0.006f) {
        Actor_SetScale((Actor *) arg0, 0.006f);
    }
}

void EnZoraegg_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnZoraegg *temp_a2;
    s16 temp_v1;
    s16 phi_v0;
    s16 phi_v1;
    EnZoraegg *this = (EnZoraegg *) thisx;

    temp_a2 = this;
    this = temp_a2;
    temp_a2->actionFunc(temp_a2, globalCtx);
    temp_v1 = this->unk_1F4;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        this->unk_1F4 = temp_v1 - 1;
        phi_v0 = this->unk_1F4;
    }
    phi_v1 = this->unk_1F4;
    if (phi_v0 == 0) {
        this = this;
        this->unk_1F4 = Rand_S16Offset(0x3C, 0x3C);
        phi_v1 = this->unk_1F4;
    }
    this->unk_1F2 = phi_v1;
    if ((s32) this->unk_1F2 >= 3) {
        this->unk_1F2 = 0;
    }
}

void func_80B32F04(GlobalContext *arg0, GraphicsContext **arg1) {
    f32 sp78;
    f32 sp74;
    s16 sp62;
    s16 sp60;
    Gfx *sp58;
    ? sp4C;
    GraphicsContext *sp44;
    f32 sp24;
    Vec3f *sp20;
    Gfx *temp_a1_2;
    Gfx *temp_a1_3;
    Gfx *temp_a1_4;
    Gfx *temp_a1_5;
    Gfx *temp_a1_6;
    Gfx *temp_v0_2;
    GraphicsContext *temp_v0;
    Vec3f *temp_a1;
    f32 temp_f2;
    void *temp_t9;

    SysMatrix_StatePush();
    temp_a1 = arg0 + 0x3C;
    temp_t9 = (arg1 + (arg1->unk_810 * 4))->unk_800;
    sp4C.unk_0 = (s32) temp_t9->unk_5C;
    sp4C.unk_4 = (s32) temp_t9->unk_60;
    sp4C.unk_8 = (s32) temp_t9->unk_64;
    sp20 = temp_a1;
    sp62 = Math_Vec3f_Yaw((Vec3f *) &sp4C, temp_a1);
    sp60 = (s16) -Math_Vec3f_Pitch((Vec3f *) &sp4C, temp_a1);
    sp24 = Math_SinS(sp62);
    sp74 = -(Math_CosS(sp60) * (15.0f * sp24));
    sp78 = -(Math_SinS(sp60) * 15.0f);
    sp24 = Math_CosS(sp62);
    SysMatrix_InsertTranslation(arg0->unk_24 + sp74, arg0->unk_28 + sp78 + 6.0f, arg0->unk_2C - (Math_CosS(sp60) * (15.0f * sp24)), 0);
    temp_f2 = ((Math_SinS((s16) (arg1[25104] << 0xE)) + 1.0f) * 0.1f) + 9.0f;
    Matrix_Scale(arg0->unk_58 * temp_f2, arg0->unk_5C * temp_f2, arg0->unk_60 * temp_f2, 1);
    temp_v0 = arg1->unk_0;
    sp44 = temp_v0;
    temp_v0_2 = func_8012C868(temp_v0->polyXlu.p);
    temp_v0_2->words.w1 = 0x80;
    temp_v0_2->words.w0 = 0xE3001803;
    temp_a1_2 = &temp_v0_2[1];
    temp_a1_2->words.w0 = 0xFCFF97FF;
    temp_a1_2->words.w1 = 0xFF2DFEFF;
    temp_a1_3 = &temp_a1_2[1];
    temp_a1_3->words.w0 = 0xDE000000;
    temp_a1_3->words.w1 = (u32) D_04029CB0;
    temp_a1_4 = &temp_a1_3[1];
    temp_a1_4->words.w0 = 0xFA000000;
    temp_a1_5 = &temp_a1_4[1];
    temp_a1_4->words.w1 = ((s32) ((f32) arg0->unk_1ED * 0.39215687f) & 0xFF) | 0x78B4C800;
    temp_a1_5->words.w0 = 0xDA380003;
    temp_a1_6 = &temp_a1_5[1];
    sp58 = temp_a1_6;
    temp_a1_5->words.w1 = Matrix_NewMtx(arg1->unk_0);
    temp_a1_6->words.w0 = 0xDE000000;
    temp_a1_6->words.w1 = (u32) D_04029CF0;
    sp44->polyXlu.p = &temp_a1_6[1];
    SysMatrix_StatePop();
}

void func_80B331C8(GlobalContext *arg0, GraphicsContext **arg1) {
    Gfx *sp30;
    Gfx *sp24;
    Gfx *temp_a1;
    Gfx *temp_a1_2;
    Gfx *temp_a1_3;
    Gfx *temp_a1_4;
    Gfx *temp_a1_5;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_s0;
    f32 temp_f12;

    temp_s0 = *arg1;
    SysMatrix_StatePush();
    temp_f12 = arg0->view.quakeRot.x;
    Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
    if ((s32) arg0->unk_1ED >= 0xFE) {
        func_8012C28C(*arg1);
        temp_v0 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDA380003;
        sp30 = temp_v0;
        sp30->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = &temp_v0_2[1];
        temp_v0_2->words.w1 = 0xC8112078;
        temp_v0_2->words.w0 = 0xE200001C;
        temp_v0_3 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xDE000000;
        temp_v0_3->words.w1 = (u32) &D_06005250;
    } else {
        temp_a1 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_a1[1];
        func_8012C304(temp_a1);
        temp_a1_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_a1_2[1];
        temp_a1_2->words.w0 = 0xDA380003;
        sp24 = temp_a1_2;
        sp24->words.w1 = Matrix_NewMtx(*arg1);
        temp_a1_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_a1_3[1];
        temp_a1_3->words.w1 = 0xC81049D8;
        temp_a1_3->words.w0 = 0xE200001C;
        temp_a1_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_a1_4[1];
        temp_a1_4->words.w0 = 0xFB000000;
        temp_a1_4->words.w1 = (u32) arg0->unk_1ED;
        temp_a1_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_a1_5[1];
        temp_a1_5->words.w1 = (u32) &D_06005250;
        temp_a1_5->words.w0 = 0xDE000000;
    }
    SysMatrix_StatePop();
    func_80B32F04(arg0, arg1);
}

s32 func_80B3336C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    u8 temp_v0;

    temp_v0 = arg5->unk_1EC;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {

        } else if ((arg1 != 1) && (arg1 != 3)) {
            goto block_9;
        }
    } else if ((arg1 != 1) && (arg1 != 3) && (arg1 != 4)) {
block_9:
        *arg2 = NULL;
    }
    return 0;
}

void func_80B333DC(GraphicsContext **arg0, u32 *arg1, f32 arg2) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a1;

    arg2 = arg2;
    SysMatrix_StatePush();
    Matrix_Scale(arg2, arg2, arg2, 1);
    temp_a1 = *arg0;
    temp_v0 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_a1;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(*arg0);
    temp_v0_2 = temp_a1->polyOpa.p;
    temp_a1->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = *arg1;
    SysMatrix_StatePop();
}

void func_80B33480(GraphicsContext **arg0, s32 arg1, u32 *arg2, Vec3s *arg3, Actor *arg4) {
    GraphicsContext *sp48;
    Gfx *sp40;
    GraphicsContext *sp38;
    Gfx *sp30;
    GraphicsContext *sp28;
    Gfx *sp20;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_a1;
    GraphicsContext *temp_a1_2;
    GraphicsContext *temp_a1_3;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 temp_f6;
    u8 temp_t0;
    u8 temp_t6;
    u8 temp_t8;
    u8 temp_t8_2;
    u8 temp_t8_3;
    u8 temp_v0;
    f32 phi_f18;
    f32 phi_f2;
    f32 phi_f10;
    f32 phi_f18_2;
    f32 phi_f6;

    temp_v0 = arg4->unk_1EC;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            return;
        }
        if (arg1 != 2) {
            if (arg1 != 4) {
                if ((arg1 != 5) && (arg1 != 6)) {
                    return;
                }
                temp_t6 = arg4->unk_1EE;
                temp_f18 = (f32) temp_t6;
                phi_f18 = temp_f18;
                if ((s32) temp_t6 < 0) {
                    phi_f18 = temp_f18 + 4294967296.0f;
                }
                func_80B333DC(arg0, arg2, phi_f18 * 0.01f);
                return;
            }
            temp_t8 = arg4->unk_1EE;
            temp_f2 = (f32) temp_t8;
            phi_f2 = temp_f2;
            if ((s32) temp_t8 < 0) {
                phi_f2 = temp_f2 + 4294967296.0f;
            }
            temp_f0 = 1.0f / ((phi_f2 * 0.005f) + 0.5f);
            Matrix_Scale(1.0f, ((phi_f2 * 0.0035f) + 0.65f) * temp_f0, temp_f0, 1);
            temp_a1 = *arg0;
            temp_v0_2 = temp_a1->polyOpa.p;
            temp_a1->polyOpa.p = &temp_v0_2[1];
            temp_v0_2->words.w0 = 0xDA380003;
            sp28 = temp_a1;
            sp20 = temp_v0_2;
            sp20->words.w1 = Matrix_NewMtx(*arg0);
            temp_v0_3 = temp_a1->polyOpa.p;
            temp_a1->polyOpa.p = &temp_v0_3[1];
            temp_v0_3->words.w0 = 0xDE000000;
            temp_v0_3->words.w1 = *arg2;
            SysMatrix_StatePop();
            return;
        }
        temp_t0 = arg4->unk_1EE;
        temp_f10 = (f32) temp_t0;
        phi_f10 = temp_f10;
        if ((s32) temp_t0 < 0) {
            phi_f10 = temp_f10 + 4294967296.0f;
        }
        temp_f20 = (phi_f10 * 0.005f) + 0.5f;
        SysMatrix_StatePush();
        Matrix_Scale(1.0f, temp_f20, temp_f20, 1);
        temp_a1_2 = *arg0;
        temp_v0_4 = temp_a1_2->polyOpa.p;
        temp_a1_2->polyOpa.p = &temp_v0_4[1];
        temp_v0_4->words.w0 = 0xDA380003;
        sp38 = temp_a1_2;
        sp30 = temp_v0_4;
        sp30->words.w1 = Matrix_NewMtx(*arg0);
        temp_v0_5 = temp_a1_2->polyOpa.p;
        temp_a1_2->polyOpa.p = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xDE000000;
        temp_v0_5->words.w1 = *arg2;
        return;
    }
    if (arg1 != 2) {
        if (arg1 != 4) {
            if ((arg1 != 5) && (arg1 != 6)) {
                return;
            }
            temp_t8_2 = arg4->unk_1EF;
            temp_f18_2 = (f32) temp_t8_2;
            phi_f18_2 = temp_f18_2;
            if ((s32) temp_t8_2 < 0) {
                phi_f18_2 = temp_f18_2 + 4294967296.0f;
            }
            func_80B333DC(arg0, arg2, phi_f18_2 * 0.01f);
            return;
        }
        SysMatrix_StatePop();
        return;
    }
    temp_t8_3 = arg4->unk_1EE;
    temp_f6 = (f32) temp_t8_3;
    phi_f6 = temp_f6;
    if ((s32) temp_t8_3 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    temp_f20_2 = phi_f6 * 0.01f;
    SysMatrix_StatePush();
    Matrix_Scale(temp_f20_2, temp_f20_2, temp_f20_2, 1);
    temp_a1_3 = *arg0;
    temp_v0_6 = temp_a1_3->polyOpa.p;
    temp_a1_3->polyOpa.p = &temp_v0_6[1];
    temp_v0_6->words.w0 = 0xDA380003;
    sp48 = temp_a1_3;
    sp40 = temp_v0_6;
    sp40->words.w1 = Matrix_NewMtx(*arg0);
    temp_v0_7 = temp_a1_3->polyOpa.p;
    temp_a1_3->polyOpa.p = &temp_v0_7[1];
    temp_v0_7->words.w0 = 0xDE000000;
    temp_v0_7->words.w1 = *arg2;
}

void func_80B33818(Actor *arg0, GlobalContext *arg1) {
    GraphicsContext *sp38;
    Gfx *sp30;
    Gfx *temp_v0;
    GraphicsContext *temp_a0;

    temp_a0 = arg1->state.gfxCtx;
    sp38 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp38->polyOpa.p;
    sp38->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDB060020;
    sp30 = temp_v0;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80B33950 + (arg0->unk_1F2 * 4)));
    SkelAnime_DrawSV(arg1, arg0[1].flags, arg0->unk_164, (s32) arg0[1].category, func_80B3336C, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80B33480, arg0);
}

void EnZoraegg_Draw(Actor *thisx, GlobalContext *globalCtx) {
    u8 temp_v0;
    u8 phi_v0;
    EnZoraegg *this = (EnZoraegg *) thisx;

    temp_v0 = this->unk_1ED;
    phi_v0 = temp_v0;
    if ((s32) temp_v0 > 0) {
        func_80B331C8(globalCtx);
        phi_v0 = this->unk_1ED;
    }
    if (phi_v0 != 0xFF) {
        func_80B33818((Actor *) this, globalCtx);
    }
}
