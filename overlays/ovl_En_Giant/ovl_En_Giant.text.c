typedef struct EnGiant {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x5A];                 /* maybe part of unk_188[16]? */
    /* 0x1E8 */ Vec3s unk_1E8;                      /* inferred */
    /* 0x1EE */ char pad_1EE[0x5A];                 /* maybe part of unk_1E8[16]? */
    /* 0x248 */ s16 unk_248;                        /* inferred */
    /* 0x24A */ u16 unk_24A;                        /* inferred */
    /* 0x24C */ u16 unk_24C;                        /* inferred */
    /* 0x24E */ s16 unk_24E;                        /* inferred */
    /* 0x250 */ s16 unk_250;                        /* inferred */
    /* 0x252 */ char pad_252[0x2];
    /* 0x254 */ MtxF unk_254;                       /* inferred */
    /* 0x294 */ s16 unk_294;                        /* inferred */
    /* 0x296 */ s16 unk_296;                        /* inferred */
    /* 0x298 */ void (*actionFunc)(EnGiant *, GlobalContext *);
} EnGiant;                                          /* size = 0x29C */

struct _mips2c_stack_EnGiant_Destroy {};            /* size 0x0 */

struct _mips2c_stack_EnGiant_Draw {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ Gfx *sp3C;                           /* inferred */
    /* 0x40 */ char pad_40[0x10];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EnGiant_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ SkelAnime *sp30;                     /* inferred */
    /* 0x34 */ void (*sp34)(Actor *, GlobalContext *); /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ s16 sp3C;                            /* inferred */
    /* 0x3E */ char pad_3E[0x2];
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ char pad_44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnGiant_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B01990 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ AnimationHeaderCommon **sp30;        /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B01A74 {};              /* size 0x0 */

struct _mips2c_stack_func_80B01E84 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B01EE8 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ s16 sp34;                            /* inferred */
    /* 0x36 */ char pad_36[0x2];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B020A0 {};              /* size 0x0 */

struct _mips2c_stack_func_80B0211C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ SkelAnime *sp1C;                     /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B02234 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B02354 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x8];                    /* maybe part of sp1C[3]? */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B023D0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B024AC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B024D8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B02688 {};              /* size 0x0 */

struct _mips2c_stack_func_80B026C4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

f32 func_800F5A8C(u16, u16, u16, GlobalContext *);  /* extern */
void func_80B01990(EnGiant *arg0, s16 arg1, EnGiant *); /* static */
s32 func_80B01A74(EnGiant *arg0);                   /* static */
void func_80B01E84(EnGiant *arg0, s16 arg1, EnGiant *); /* static */
void func_80B01EE8(EnGiant *arg0);                  /* static */
void func_80B020A0(EnGiant *arg0);                  /* static */
void func_80B0211C(EnGiant *arg0);                  /* static */
void func_80B02234(Actor *arg0);                    /* static */
void func_80B02354(EnGiant *arg0, GlobalContext *arg1, u32 arg2); /* static */
void func_80B02688(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3); /* static */
void func_80B026C4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **gfx); /* static */
extern AnimationHeader D_06002168;
extern ? D_06007610;
extern FlexSkeletonHeader D_060079B0;
extern AnimationHeaderCommon D_060116E4;
extern AnimationHeaderCommon D_06013004;
extern AnimationHeader D_06013FE8;
static ? D_80B02950;                                /* unable to generate initializer */
static ? D_80B0298C;                                /* unable to generate initializer */

void func_80B01990(EnGiant *arg0, s16 arg1) {
    AnimationHeaderCommon **sp30;
    AnimationHeaderCommon **temp_v1;
    s16 temp_v0;

    if (((s32) arg1 >= 0) && ((s32) arg1 < 0xF)) {
        temp_v0 = arg0->unk_248;
        if (((temp_v0 == 8) && (arg1 != 8)) || ((arg1 == 8) && (temp_v0 != 8))) {
            temp_v1 = (arg1 * 4) + &D_80B02950;
            sp30 = temp_v1;
            SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) *temp_v1, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*temp_v1), (u8) 2, 10.0f);
        } else {
            SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, *(&D_80B02950 + (arg1 * 4)));
        }
        arg0->unk_248 = arg1;
    }
}

s32 func_80B01A74(EnGiant *arg0) {
    switch (arg0->actor.params & 0xF) {
    case 2:
    case 6:
    case 10:
    case 14:
        if ((*gBitFlags & gSaveContext.inventory.questItems) == 0) {
            return 1;
        }
        return 0;
    case 0:
    case 4:
    case 8:
    case 12:
        if ((*(gBitFlags + 4) & gSaveContext.inventory.questItems) == 0) {
            return 1;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return 0;
    case 3:
    case 7:
    case 11:
    case 15:
        if ((*(gBitFlags + 8) & gSaveContext.inventory.questItems) == 0) {
            return 1;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return 0;
    case 1:
    case 5:
    case 9:
    case 13:
        if ((*(gBitFlags + 0xC) & gSaveContext.inventory.questItems) == 0) {
            return 1;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return 0;
    }
}

void EnGiant_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp40;
    s16 sp3C;
    s32 sp38;
    void (*sp34)(Actor *, GlobalContext *);
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    s32 temp_t9;
    s32 temp_v0;
    EnGiant *this = (EnGiant *) thisx;

    sp40 = this->actor.params & 0xF;
    this->actor.uncullZoneForward = 4000.0f;
    this->actor.uncullZoneScale = 2000.0f;
    this->actor.uncullZoneDownward = 2400.0f;
    Actor_SetScale((Actor *) this, 0.32f);
    temp_a1 = &this->unk_144;
    sp30 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_060079B0, &D_06002168, &this->unk_188, &this->unk_1E8, 0x10);
    func_80B01990(this, 7);
    this->unk_24C = 0;
    this->actionFunc = func_80B024D8;
    this->actor.draw = NULL;
    this->unk_24E = 0;
    this->actor.velocity.y = -10.0f;
    this->actor.minVelocityY = -10.0f;
    this->actor.gravity = -5.0f;
    switch (sp40) {                                 /* switch 1 */
    case 1:                                         /* switch 1 */
    case 5:                                         /* switch 1 */
    case 9:                                         /* switch 1 */
        this->unk_24A = 0x1C6;
        break;
    case 2:                                         /* switch 1 */
    case 6:                                         /* switch 1 */
    case 10:                                        /* switch 1 */
        this->unk_24A = 0x1C7;
        break;
    case 3:                                         /* switch 1 */
    case 7:                                         /* switch 1 */
    case 11:                                        /* switch 1 */
        this->unk_24A = 0x1C8;
        break;
    default:                                        /* switch 1 */
        this->unk_24A = 0x1C5;
        break;
    }
    sp38 = sp40;
    if ((sp40 >= 4) && (sp38 = sp40, ((sp40 < 8) != 0))) {
        if ((gSaveContext.weekEventReg[25] & 2) == 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->unk_24A = 0x1C5;
        sp38 = sp40;
        Actor_SetScale((Actor *) this, 0.32f);
        this->actionFunc = func_80B023D0;
        sp3C = SkelAnime_GetFrameCount(&D_060116E4);
        SkelAnime_ChangeAnim(sp30, (AnimationHeader *) &D_060116E4, 0.0f, (f32) sp3C - 1.0f, (f32) SkelAnime_GetFrameCount(&D_060116E4), (u8) 2, 0.0f);
        this->actor.draw = EnGiant_Draw;
        this->actor.velocity.y = 0.0f;
        this->actor.minVelocityY = 0.0f;
        this->actor.gravity = 0.0f;
        goto block_11;
    }
block_11:
    temp_v0 = sp38;
    if (temp_v0 >= 0xC) {
        sp38 = temp_v0;
        if (temp_v0 < 0x10) {
            sp34 = EnGiant_Draw;
            sp38 = temp_v0;
            Actor_SetScale((Actor *) this, 0.32f);
            this->actionFunc = func_80B024AC;
            SkelAnime_ChangeAnim(sp30, &D_06013FE8, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_06013004), (u8) 0, 0.0f);
            this->actor.velocity.y = 0.0f;
            this->actor.draw = sp34;
            this->actor.minVelocityY = 0.0f;
            this->actor.gravity = 0.0f;
            if (func_80B01A74(this) != 0) {
                Actor_MarkForDeath((Actor *) this);
            }
        }
    }
    if (sp38 >= 4) {
        this->unk_24E = 0xFF;
    }
    this->unk_250 = 0xFFFF;
    if ((sp38 >= 8) && (sp38 < 0xC)) {
        temp_t9 = gSaveContext.sceneSetupIndex;
        switch (temp_t9) {                          /* switch 2 */
        case 0:                                     /* switch 2 */
        case 10:                                    /* switch 2 */
            this->unk_250 = 0x2183;
            return;
        case 1:                                     /* switch 2 */
        case 2:                                     /* switch 2 */
        case 3:                                     /* switch 2 */
            this->unk_250 = 0x2182;
            return;
        default:                                    /* switch 2 */
            this->unk_250 = 0x2181;
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return;
        }
    }
}

void EnGiant_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnGiant *this = (EnGiant *) thisx;

}

void func_80B01E84(EnGiant *arg0, s16 arg1) {
    s16 temp_v0;
    s16 temp_v1;

    temp_v1 = arg0->unk_248;
    temp_v0 = arg1 + 1;
    if (temp_v0 != temp_v1) {
        if (arg1 != temp_v1) {
            func_80B01990((EnGiant *) arg1, temp_v0);
            return;
        }
        func_80B01990((EnGiant *) temp_v0, temp_v0);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80B01EE8(EnGiant *arg0) {
    s16 sp34;
    u16 temp_t6;

    temp_t6 = arg0->unk_24C;
    switch (temp_t6) {
    case 1:
        func_80B01990(arg0, 7);
        return;
    case 2:
        func_80B01990(arg0, 8);
        return;
    case 5:
        func_80B01990(arg0, 5);
        return;
    case 6:
        func_80B01990(arg0, 2);
        return;
    case 7:
        func_80B01990(arg0, 7);
        arg0->unk_24E = 0;
        return;
    case 8:
        func_80B01990(arg0, 9);
        return;
    case 9:
        func_80B01990(arg0, 0xB);
        return;
    case 10:
        func_80B01990(arg0, 0xC);
        return;
    case 11:
        func_80B01990(arg0, 0xE);
        return;
    case 12:
        func_80B01990(arg0, 7);
        return;
    case 13:
        func_80B01990(arg0, 8);
        return;
    case 14:
        if (arg0->unk_248 != 8) {
            func_80B01990(arg0, 8);
            return;
        }
    default:
        return;
    case 15:
        sp34 = SkelAnime_GetFrameCount(&D_060116E4);
        SkelAnime_ChangeAnim(&arg0->unk_144, (AnimationHeader *) &D_060116E4, 0.0f, (f32) sp34 - 1.0f, (f32) SkelAnime_GetFrameCount(&D_060116E4), (u8) 2, 0.0f);
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return;
    }
}

void func_80B020A0(EnGiant *arg0) {
    s16 temp_v0_2;
    s16 temp_v0_3;
    u16 temp_v0;

    temp_v0 = arg0->unk_24C;
    if (temp_v0 != 6) {
        if (temp_v0 != 0xE) {
            temp_v0_2 = arg0->unk_24E;
            if ((s32) temp_v0_2 < 0xFF) {
                arg0->unk_24E = temp_v0_2 + 8;
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return;
        }
        arg0->unk_24E += -0xC;
        return;
    }
    if ((arg0->unk_144.animCurrentFrame >= 90.0f) && (temp_v0_3 = arg0->unk_24E, ((s32) temp_v0_3 > 0))) {
        arg0->unk_24E = temp_v0_3 - 0xC;
    }
}

void func_80B0211C(EnGiant *arg0) {
    SkelAnime *sp1C;
    EnGiant *temp_a0_2;
    EnGiant *temp_a2;
    SkelAnime *temp_a0;
    s16 temp_a1;
    u16 temp_t7;

    temp_a0 = arg0 + 0x144;
    sp1C = temp_a0;
    arg0 = arg0;
    temp_a2 = arg0;
    if ((SkelAnime_FrameUpdateMatrix(temp_a0) != 0) && ((temp_a1 = temp_a2->unk_248, temp_a0_2 = temp_a2, (temp_a1 != 2)) || (temp_a2->unk_24C != 6))) {
        arg0 = temp_a2;
        func_80B01990(temp_a0_2, temp_a1, temp_a2);
        temp_t7 = arg0->unk_24C;
        switch (temp_t7) {
        case 3:
            func_80B01E84(arg0, 0, arg0);
            break;
        case 4:
            func_80B01E84(arg0, 3, arg0);
            break;
        case 5:
            func_80B01E84(arg0, 5, arg0);
            break;
        case 6:
            func_80B01E84(arg0, 2, arg0);
            break;
        case 8:
            func_80B01990(arg0, 0xA, arg0);
            break;
        case 9:
        case 11:
            func_80B01990(arg0, 7, arg0);
            break;
        case 10:
            func_80B01990(arg0, 0xD, arg0);
            break;
        }
        SkelAnime_FrameUpdateMatrix(sp1C);
    }
}

void func_80B02234(Actor *arg0) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s16 temp_v0;
    u16 temp_a1;

    if ((arg0->draw != 0) && ((s32) arg0->unk_24E > 0)) {
        temp_a0 = arg0 + 0x144;
        if ((arg0->unk_248 == 8) && ((sp24 = temp_a0, (func_801378B8(temp_a0, 40.0f) != 0)) || (func_801378B8(temp_a0, 100.0f) != 0))) {
            Audio_PlayActorSound2(arg0, 0x294EU);
        }
        if ((arg0->unk_248 == 2) && (func_801378B8((SkelAnime *) (arg0 + 0x144), 40.0f) != 0)) {
            Audio_PlayActorSound2(arg0, 0x294DU);
        }
        temp_a1 = arg0->unk_250;
        temp_v0 = arg0->unk_248;
        if ((temp_a1 != 0xFFFF) && (((temp_v0 == 9) && (arg0->unk_15C >= 18.0f)) || (temp_v0 == 0xA))) {
            func_800B9010(arg0, temp_a1);
        }
        if (((arg0->unk_248 == 0xC) && (arg0->unk_15C >= 18.0f)) || (arg0->unk_248 == 0xD)) {
            func_800B9010(arg0, 0x2180U);
        }
    }
}

void func_80B02354(EnGiant *arg0, GlobalContext *arg1, u32 arg2) {
    f32 sp28;
    f32 sp1C;
    f32 temp_f2;
    void *temp_v0;

    temp_v0 = (arg1 + (arg2 * 4))->unk_1F4C;
    temp_f2 = (f32) temp_v0->unk_10;
    sp1C = (f32) temp_v0->unk_1C;
    sp28 = temp_f2;
    arg0->actor.world.pos.y = ((sp1C - temp_f2) * func_800F5A8C(temp_v0->unk_4, temp_v0->unk_2, arg1->csCtx.frames, arg1)) + temp_f2;
}

void func_80B023D0(EnGiant *this, GlobalContext *globalCtx) {
    if (func_800EE29C(globalCtx, (u32) this->unk_24A) != 0) {
        func_80B02354(this, globalCtx, func_800EE200(globalCtx, (u32) this->unk_24A));
        if (this->unk_24C != globalCtx->csCtx.npcActions[func_800EE200(globalCtx, (u32) this->unk_24A)]->unk0) {
            this->unk_24C = globalCtx->csCtx.npcActions[func_800EE200(globalCtx, (u32) this->unk_24A)]->unk0;
            func_80B01EE8(this);
        }
        func_80B020A0(this);
    }
    func_80B02234((Actor *) this);
    if (this->unk_24C == 5) {
        func_800B9010((Actor *) this, 0x1063U);
    }
    func_80B0211C(this);
}

void func_80B024AC(EnGiant *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
}

void func_80B024D8(EnGiant *this, GlobalContext *globalCtx) {
    this->actor.draw = EnGiant_Draw;
    if (func_800EE29C(globalCtx, (u32) this->unk_24A) != 0) {
        func_800EDF24((Actor *) this, globalCtx, func_800EE200(globalCtx, (u32) this->unk_24A));
        if (this->unk_24C != globalCtx->csCtx.npcActions[func_800EE200(globalCtx, (u32) this->unk_24A)]->unk0) {
            this->unk_24C = globalCtx->csCtx.npcActions[func_800EE200(globalCtx, (u32) this->unk_24A)]->unk0;
            func_80B01EE8(this);
        }
        func_80B020A0(this);
    }
    if (((this->actor.params & 0xF) < 4) && (func_80B01A74(this) != 0)) {
        this->actor.draw = NULL;
    }
    func_80B02234((Actor *) this);
    func_80B0211C(this);
}

void EnGiant_Update(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v1;
    s16 phi_v0;
    s16 phi_v1;
    EnGiant *this = (EnGiant *) thisx;

    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
    temp_v1 = this->unk_296;
    if (temp_v1 == 0) {
        phi_v0 = 0;
    } else {
        this->unk_296 = temp_v1 - 1;
        phi_v0 = this->unk_296;
    }
    phi_v1 = this->unk_296;
    if (phi_v0 == 0) {
        this->unk_296 = Rand_S16Offset(0x3C, 0x3C);
        phi_v1 = this->unk_296;
    }
    this->unk_294 = phi_v1;
    if ((s32) this->unk_294 >= 3) {
        this->unk_294 = 0;
    }
}

void func_80B02688(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3) {
    void *temp_a0;
    void *temp_v0;

    if (arg1 == 1) {
        temp_v0 = *arg0;
        temp_a0 = temp_v0->unk_2B0;
        temp_v0->unk_2B0 = (void *) (temp_a0 + 8);
        temp_a0->unk_4 = &D_06007610;
        temp_a0->unk_0 = 0xDE000000;
    }
}

void func_80B026C4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 1) {
        SysMatrix_CopyCurrentState(arg4 + 0x254);
    }
}

void EnGiant_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp3C;
    Gfx *sp34;
    Gfx *temp_a1;
    Gfx *temp_a1_2;
    Gfx *temp_a1_3;
    Gfx *temp_a1_4;
    Gfx *temp_a1_5;
    Gfx *temp_s1;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s16 temp_v0;
    EnGiant *this = (EnGiant *) thisx;

    temp_v0 = this->unk_24E;
    if ((s32) temp_v0 > 0) {
        temp_a0 = globalCtx->state.gfxCtx;
        temp_s0 = temp_a0;
        if ((s32) temp_v0 >= 0xFF) {
            func_8012C28C(temp_a0);
            temp_v0_2 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xDB060020;
            sp3C = temp_v0_2;
            sp3C->words.w1 = Lib_SegmentedToVirtual(*(&D_80B0298C + (this->unk_294 * 4)));
            temp_v0_3 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = 0xFF;
            temp_v0_3->words.w0 = 0xFB000000;
            Scene_SetRenderModeXlu(globalCtx, 0, 1U);
            SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, NULL, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80B02688, (Actor *) this);
            return;
        }
        if ((s32) temp_v0 > 0) {
            if ((s32) temp_v0 >= 0x81) {
                temp_a1 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_a1 + 8;
                func_8012C2B4(temp_a1);
                Scene_SetRenderModeXlu(globalCtx, 2, 2U);
            } else {
                temp_a1_2 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_a1_2 + 8;
                func_8012C304(temp_a1_2);
                Scene_SetRenderModeXlu(globalCtx, 1, 2U);
            }
            temp_a1_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_a1_3 + 8;
            temp_a1_3->words.w0 = 0xDB060020;
            sp34 = temp_a1_3;
            sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_80B0298C + (this->unk_294 * 4)));
            temp_a1_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_a1_4 + 8;
            temp_a1_4->words.w0 = 0xFB000000;
            temp_a1_4->words.w1 = this->unk_24E & 0xFF;
            temp_s0->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, NULL, func_80B026C4, (Actor *) this, temp_s0->polyXlu.p);
            SysMatrix_InsertMatrix(&this->unk_254, 0);
            temp_s1 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_s1 + 8;
            temp_s1->words.w0 = 0xDA380003;
            temp_s1->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_a1_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_a1_5 + 8;
            temp_a1_5->words.w0 = 0xDE000000;
            temp_a1_5->words.w1 = (u32) &D_06007610;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}
