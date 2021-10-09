void func_80BF5E00(Actor *arg0, ? *arg1, s16 arg2, f32 arg3); /* static */
void func_80BF5E68(Actor *arg0, ? *arg1, s16 arg2, f32 arg3); /* static */
void func_80BF5EBC(EnOsk *arg0, GlobalContext *arg1); /* static */
void func_80BF5F70(Actor *arg0);                    /* static */
void func_80BF609C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BF6314(Actor *arg0);                    /* static */
void func_80BF6478(Actor *arg0);                    /* static */
void func_80BF67A8(Actor *arg0);                    /* static */
void func_80BF68E0(Actor *arg0);                    /* static */
void func_80BF6C54(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_060000B8;
extern FlexSkeletonHeader D_060038F0;
extern AnimationHeader D_06006808;
extern FlexSkeletonHeader D_06007B48;
extern AnimationHeader D_06009F00;
extern FlexSkeletonHeader D_0600B490;
static ? D_80BF6FA0;                                /* unable to generate initializer */
static ? D_80BF6FB4;                                /* unable to generate initializer */
static ? D_80BF6FE4;                                /* unable to generate initializer */
static Vec3f D_80BF7018 = {0.0f, 0.5f, 0.0f};
static Vec3f D_80BF7024 = {0.0f, 0.0f, 0.0f};

typedef struct EnOsk {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0x60];                 /* maybe part of unk188[17]? */
    /* 0x01EE */ Vec3s unk1EE;                      /* inferred */
    /* 0x01F4 */ char pad1F4[0x60];                 /* maybe part of unk1EE[17]? */
    /* 0x0254 */ s16 unk254;                        /* inferred */
    /* 0x0256 */ s16 unk256;                        /* inferred */
    /* 0x0258 */ u16 unk258;                        /* inferred */
    /* 0x025A */ char pad25A[0x2];                  /* maybe part of unk258[2]? */
    /* 0x025C */ f32 unk25C;                        /* inferred */
    /* 0x0260 */ void (*actionFunc)(EnOsk *, GlobalContext *);
} EnOsk;                                            /* size 0x264 */

void EnOsk_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnOsk *this = (EnOsk *) thisx;
    SkelAnime *temp_s1;
    SkelAnime *temp_s1_2;
    SkelAnime *temp_s1_3;
    s32 temp_v0;

    Actor_SetScale(&this->actor, 0.013f);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 10.0f);
    temp_v0 = this->actor.params & 0xF;
    this->actionFunc = func_80BF5F60;
    this->unk254 = -1;
    this->unk256 = -1;
    this->actor.flags &= -2;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            Actor_SetScale(&this->actor, 0.017f);
            temp_s1 = &this->unk144;
            SkelAnime_InitSV(globalCtx, temp_s1, &D_060038F0, &D_060000B8, &this->unk188, &this->unk1EE, 0x11);
            SkelAnime_ChangeAnimDefaultRepeat(temp_s1, &D_060000B8);
            this->actionFunc = func_80BF61EC;
            this->unk258 = 0x212;
            this->actor.home.rot.z = 0;
            this->unk25C = 0.0f;
            return;
        }
        temp_s1_2 = &this->unk144;
        SkelAnime_InitSV(globalCtx, temp_s1_2, &D_0600B490, &D_06009F00, &this->unk188, &this->unk1EE, 7);
        SkelAnime_ChangeAnimDefaultRepeat(temp_s1_2, &D_06006808);
        this->actionFunc = func_80BF6A20;
        this->unk258 = 0x211;
        return;
    }
    temp_s1_3 = &this->unk144;
    SkelAnime_InitSV(globalCtx, temp_s1_3, &D_06007B48, &D_06006808, &this->unk188, &this->unk1EE, 7);
    SkelAnime_ChangeAnimDefaultRepeat(temp_s1_3, &D_06006808);
    this->actionFunc = func_80BF656C;
    this->unk258 = 0x210;
}

void EnOsk_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnOsk *this = (EnOsk *) thisx;

}

void func_80BF5E00(Actor *arg0, ? *arg1, s16 arg2, f32 arg3) {
    AnimationHeader *temp_a1;

    if (arg2 != arg0->unk254) {
        temp_a1 = *(arg1 + (arg2 * 4));
        arg2 = arg2;
        SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x144, temp_a1, arg3);
        arg0->unk254 = arg2;
    }
}

void func_80BF5E68(Actor *arg0, ? *arg1, s16 arg2, f32 arg3) {
    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, *(arg1 + (arg2 * 4)), arg3);
    arg0->unk254 = arg2;
}

void func_80BF5EBC(EnOsk *arg0, GlobalContext *arg1) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;

    sp2C = randPlusMinusPoint5Scaled(30.0f) + arg0->actor.world.pos.x;
    sp34 = randPlusMinusPoint5Scaled(30.0f) + arg0->actor.world.pos.z;
    sp30 = randPlusMinusPoint5Scaled(30.0f) + arg0->actor.world.pos.y;
    func_800B3030(arg1, (Vec3f *) &sp2C, &D_80BF7018, &D_80BF7018, (s16) 0x64, (s16) 0, 2);
}

void func_80BF5F60(EnOsk *this, GlobalContext *globalCtx) {

}

void func_80BF5F70(Actor *arg0) {
    s16 temp_v0;
    s16 phi_v0;

    temp_v0 = arg0->unk256;
    phi_v0 = temp_v0;
    if ((temp_v0 != 1) && (temp_v0 != 6)) {
        arg0->draw = EnOsk_Draw;
        Actor_SetScale(arg0, 0.017f);
        phi_v0 = arg0->unk256;
    }
    switch (phi_v0) {
    case 1:
        arg0->draw = NULL;
        return;
    case 2:
        func_80BF5E00(arg0, &D_80BF6FA0, 3, -5.0f);
        return;
    case 3:
        func_80BF5E00(arg0, &D_80BF6FA0, 2, -5.0f);
        return;
    case 4:
        func_80BF5E00(arg0, &D_80BF6FA0, 1, -5.0f);
        return;
    case 5:
        func_80BF5E00(arg0, &D_80BF6FA0, 0, -5.0f);
        return;
    case 6:
        func_80BF5E00(arg0, &D_80BF6FA0, 1, -5.0f);
        return;
    case 7:
        arg0 = arg0;
        func_80BF5E00(arg0, &D_80BF6FA0, 4, -5.0f);
        arg0->home.rot.z = 1;
        // fallthrough
    default:
        return;
    }
}

void func_80BF609C(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    s16 temp_v0;

    if (arg0->draw != 0) {
        temp_a0 = arg0 + 0x144;
        if (arg0->home.rot.z != 0) {
            if (arg1->msgCtx.unk11F04 == 0x1531) {
                arg0->home.rot.z = 0;
                return;
            }
            // Duplicate return node #18. Try simplifying control flow for better match
            return;
        }
        sp20 = temp_a0;
        if (func_801378B8(temp_a0, 5.0f) != 0) {
            arg0->unk25C = Rand_ZeroFloat(3.0f);
        }
        temp_v0 = arg0->unk254;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {
                if (temp_v0 != 2) {
                    return;
                }
                if ((func_801378B8(sp20, arg0->unk25C) != 0) || (func_801378B8(sp20, arg0->unk25C + 6.0f) != 0)) {
                    Audio_PlayActorSound2(arg0, 0x3A90U);
                }
                // Duplicate return node #18. Try simplifying control flow for better match
                return;
            }
            if (func_801378B8(sp20, arg0->unk25C) != 0) {
                Audio_PlayActorSound2(arg0, 0x3A90U);
                return;
            }
            // Duplicate return node #18. Try simplifying control flow for better match
            return;
        }
        if ((func_801378B8(sp20, arg0->unk25C) != 0) || (func_801378B8(sp20, arg0->unk25C + 8.0f) != 0)) {
            Audio_PlayActorSound2(arg0, 0x3A90U);
            return;
        }
        // Duplicate return node #18. Try simplifying control flow for better match
    }
}

void func_80BF61EC(EnOsk *this, GlobalContext *globalCtx) {
    f32 temp_f0;

    SkelAnime_FrameUpdateMatrix(&this->unk144);
    if (func_800EE29C(globalCtx, (u32) this->unk258) != 0) {
        func_800EDF24(&this->actor, globalCtx, func_800EE200(globalCtx, (u32) this->unk258));
        if (this->unk256 != globalCtx->csCtx.npcActions[func_800EE200(globalCtx, (u32) this->unk258)]->unk0) {
            this->unk256 = (s16) globalCtx->csCtx.npcActions[func_800EE200(globalCtx, (u32) this->unk258)]->unk0;
            func_80BF5F70(&this->actor);
        }
        func_80BF609C(&this->actor, globalCtx);
    } else {
        this->actor.draw = NULL;
    }
    if (this->unk256 == 6) {
        temp_f0 = this->actor.scale.x;
        if (temp_f0 > 0.00085000007f) {
            this->actor.scale.x = temp_f0 - 0.00085000007f;
            Actor_SetScale(&this->actor, this->actor.scale.x);
            func_80BF5EBC(this, globalCtx);
            func_800B9010(&this->actor, 0x321FU);
            return;
        }
        this->actor.draw = NULL;
        // Duplicate return node #9. Try simplifying control flow for better match
    }
}

void func_80BF6314(Actor *arg0) {
    s16 temp_v0;
    s16 phi_v0;

    temp_v0 = arg0->unk256;
    phi_v0 = temp_v0;
    if ((temp_v0 != 1) && (temp_v0 != 9)) {
        arg0->draw = EnOsk_Draw;
        Actor_SetScale(arg0, 0.013f);
        phi_v0 = arg0->unk256;
    }
    switch (phi_v0) {
    case 1:
        arg0->draw = NULL;
        return;
    case 2:
        arg0 = arg0;
        func_80BF5E00(arg0, &D_80BF6FB4, 9, -5.0f);
        Actor_SetScale(arg0, 0.0f);
        return;
    case 3:
        func_80BF5E68(arg0, &D_80BF6FB4, 2, -5.0f);
        return;
    case 4:
        func_80BF5E68(arg0, &D_80BF6FB4, 4, 0.0f);
        return;
    case 5:
        func_80BF5E68(arg0, &D_80BF6FB4, 8, -5.0f);
        return;
    case 6:
        func_80BF5E68(arg0, &D_80BF6FB4, 0xB, -5.0f);
        return;
    case 7:
        func_80BF5E68(arg0, &D_80BF6FB4, 6, -5.0f);
        return;
    case 8:
        func_80BF5E00(arg0, &D_80BF6FB4, 0, -5.0f);
        return;
    case 9:
        func_80BF5E00(arg0, &D_80BF6FB4, 0, -5.0f);
        // fallthrough
    default:
        return;
    }
}

void func_80BF6478(Actor *arg0) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s16 temp_t7;

    if (arg0->draw != 0) {
        temp_t7 = arg0->unk254;
        switch (temp_t7) {
        case 1:
            temp_a0 = arg0 + 0x144;
            sp24 = temp_a0;
            if ((func_801378B8(temp_a0, 0.0f) != 0) || (func_801378B8(temp_a0, 6.0f) != 0) || (func_801378B8(sp24, 11.0f) != 0)) {
                Audio_PlayActorSound2(arg0, 0x3A8AU);
                return;
            }
            // Duplicate return node #12. Try simplifying control flow for better match
            return;
        case 3:
            if (func_801378B8((SkelAnime *) (arg0 + 0x144), 11.0f) != 0) {
                Audio_PlayActorSound2(arg0, 0x3A8AU);
                return;
            }
            // Duplicate return node #12. Try simplifying control flow for better match
            return;
        case 4:
            if (func_801378B8((SkelAnime *) (arg0 + 0x144), 5.0f) != 0) {
                Audio_PlayActorSound2(arg0, 0x3A8AU);
                return;
            }
            // Duplicate return node #12. Try simplifying control flow for better match
            return;
        case 10:
        case 11:
            func_800B9010(arg0, 0x3244U);
            // Duplicate return node #12. Try simplifying control flow for better match
            return;
        }
    } else {
    default:
    }
}

void func_80BF656C(EnOsk *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_t6;

    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        temp_t6 = this->unk254;
        switch (temp_t6) {
        case 2:
            func_80BF5E00(&this->actor, &D_80BF6FB4, 1, 0.0f);
            break;
        case 4:
            func_80BF5E00(&this->actor, &D_80BF6FB4, 3, 0.0f);
            break;
        case 8:
            func_80BF5E00(&this->actor, &D_80BF6FB4, 7, -5.0f);
            break;
        case 11:
            func_80BF5E00(&this->actor, &D_80BF6FB4, 0xA, -5.0f);
            break;
        case 6:
            func_80BF5E00(&this->actor, &D_80BF6FB4, 5, -5.0f);
            break;
        }
    }
    if (func_800EE29C(globalCtx, (u32) this->unk258) != 0) {
        func_800EDF24(&this->actor, globalCtx, func_800EE200(globalCtx, (u32) this->unk258));
        if (this->unk256 != globalCtx->csCtx.npcActions[func_800EE200(globalCtx, (u32) this->unk258)]->unk0) {
            this->unk256 = (s16) globalCtx->csCtx.npcActions[func_800EE200(globalCtx, (u32) this->unk258)]->unk0;
            func_80BF6314(&this->actor);
        }
        func_80BF6478(&this->actor);
    } else {
        this->actor.draw = NULL;
    }
    if (this->unk256 == 2) {
        temp_f0 = this->actor.scale.x;
        if (temp_f0 < 0.013f) {
            this->actor.scale.x = temp_f0 + 0.00065f;
            Actor_SetScale(&this->actor, this->actor.scale.x);
        }
    }
    if (this->unk256 == 9) {
        temp_f0_2 = this->actor.scale.x;
        if (temp_f0_2 > 0.00065f) {
            this->actor.scale.x = temp_f0_2 - 0.00065f;
            Actor_SetScale(&this->actor, this->actor.scale.x);
            func_80BF5EBC(this, globalCtx);
            func_800B9010(&this->actor, 0x321FU);
            return;
        }
        this->actor.draw = NULL;
        // Duplicate return node #20. Try simplifying control flow for better match
    }
}

void func_80BF67A8(Actor *arg0) {
    s16 temp_v0;
    s16 phi_v0;

    temp_v0 = arg0->unk256;
    phi_v0 = temp_v0;
    if ((temp_v0 != 1) && (temp_v0 != 8)) {
        arg0->draw = EnOsk_Draw;
        Actor_SetScale(arg0, 0.013f);
        phi_v0 = arg0->unk256;
    }
    switch (phi_v0) {
    case 1:
        arg0->draw = NULL;
        return;
    case 2:
        func_80BF5E68(arg0, &D_80BF6FE4, 2, -5.0f);
        return;
    case 3:
        func_80BF5E68(arg0, &D_80BF6FE4, 8, -5.0f);
        return;
    case 4:
        func_80BF5E68(arg0, &D_80BF6FE4, 4, -5.0f);
        return;
    case 5:
        func_80BF5E68(arg0, &D_80BF6FE4, 6, -5.0f);
        return;
    case 6:
        func_80BF5E68(arg0, &D_80BF6FE4, 0xA, -5.0f);
        return;
    case 7:
    case 8:
        func_80BF5E00(arg0, &D_80BF6FE4, 0, -5.0f);
        return;
    case 9:
        func_80BF5E68(arg0, &D_80BF6FE4, 0xC, -5.0f);
        // fallthrough
    default:
        return;
    }
}

void func_80BF68E0(Actor *arg0) {
    SkelAnime *sp24;
    Actor *temp_a0_2;
    SkelAnime *temp_a0;
    s16 temp_t7;

    if (arg0->draw != 0) {
        temp_t7 = arg0->unk254;
        switch (temp_t7) {
        case 1:
        case 7:
            temp_a0 = arg0 + 0x144;
            sp24 = temp_a0;
            if ((func_801378B8(temp_a0, 0.0f) != 0) || (sp24 = temp_a0, (func_801378B8(temp_a0, 6.0f) != 0)) || (func_801378B8(temp_a0, 11.0f) != 0)) {
                Audio_PlayActorSound2(arg0, 0x3A8AU);
                return;
            }
            // Duplicate return node #16. Try simplifying control flow for better match
            return;
        case 2:
            if (func_801378B8((SkelAnime *) (arg0 + 0x144), 4.0f) != 0) {
                Audio_PlayActorSound2(arg0, 0x3A8AU);
                return;
            }
            // Duplicate return node #16. Try simplifying control flow for better match
            return;
        case 4:
            if (func_801378B8((SkelAnime *) (arg0 + 0x144), 5.0f) != 0) {
                Audio_PlayActorSound2(arg0, 0x3A8AU);
                return;
            }
            // Duplicate return node #16. Try simplifying control flow for better match
            return;
        case 5:
            temp_a0_2 = arg0 + 0x144;
            sp24 = (SkelAnime *) temp_a0_2;
            if ((func_801378B8((SkelAnime *) temp_a0_2, 6.0f) != 0) || (func_801378B8((SkelAnime *) temp_a0_2, 11.0f) != 0)) {
                Audio_PlayActorSound2(arg0, 0x3A8AU);
                return;
            }
            // Duplicate return node #16. Try simplifying control flow for better match
            return;
        case 8:
            if (func_801378B8((SkelAnime *) (arg0 + 0x144), 13.0f) != 0) {
                Audio_PlayActorSound2(arg0, 0x3A8AU);
            }
            // Duplicate return node #16. Try simplifying control flow for better match
            return;
        }
    } else {
    default:
    }
}

void func_80BF6A20(EnOsk *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    s16 temp_t6;

    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        temp_t6 = this->unk254;
        switch (temp_t6) {
        case 2:
            func_80BF5E00(&this->actor, &D_80BF6FE4, 1, -5.0f);
            break;
        case 8:
            func_80BF5E00(&this->actor, &D_80BF6FE4, 7, -5.0f);
            break;
        case 4:
            func_80BF5E00(&this->actor, &D_80BF6FE4, 3, -5.0f);
            break;
        case 6:
            func_80BF5E00(&this->actor, &D_80BF6FE4, 5, -5.0f);
            break;
        case 10:
            func_80BF5E00(&this->actor, &D_80BF6FE4, 9, -5.0f);
            break;
        case 12:
            func_80BF5E00(&this->actor, &D_80BF6FE4, 0xB, -5.0f);
            break;
        }
    }
    if (func_800EE29C(globalCtx, (u32) this->unk258) != 0) {
        func_800EDF24(&this->actor, globalCtx, func_800EE200(globalCtx, (u32) this->unk258));
        if (this->unk256 != globalCtx->csCtx.npcActions[func_800EE200(globalCtx, (u32) this->unk258)]->unk0) {
            this->unk256 = (s16) globalCtx->csCtx.npcActions[func_800EE200(globalCtx, (u32) this->unk258)]->unk0;
            func_80BF67A8(&this->actor);
        }
        func_80BF68E0(&this->actor);
    } else {
        this->actor.draw = NULL;
    }
    if (this->unk256 == 8) {
        temp_f0 = this->actor.scale.x;
        if (temp_f0 > 0.00065f) {
            this->actor.scale.x = temp_f0 - 0.00065f;
            Actor_SetScale(&this->actor, this->actor.scale.x);
            func_80BF5EBC(this, globalCtx);
            func_800B9010(&this->actor, 0x321FU);
            return;
        }
        this->actor.draw = NULL;
        // Duplicate return node #18. Try simplifying control flow for better match
    }
}

void EnOsk_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnOsk *this = (EnOsk *) thisx;
    this->actionFunc(this, globalCtx);
}

void func_80BF6C54(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 1) {
        SysMatrix_MultiplyVector3fByState(&D_80BF7024, arg4 + 0x3C);
    }
}

void EnOsk_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnOsk *this = (EnOsk *) thisx;
    Gfx *sp8C;
    f32 sp84;
    f32 sp80;
    GraphicsContext *sp6C;
    Gfx *sp64;
    s16 sp62;
    s16 sp60;
    Vec3f sp54;
    f32 sp38;
    PosRot *sp34;
    Camera *temp_t7;
    Gfx *temp_a1_2;
    Gfx *temp_a1_3;
    Gfx *temp_a1_4;
    Gfx *temp_a1_5;
    Gfx *temp_a1_6;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    PosRot *temp_a1;
    f32 temp_f2;

    temp_a0 = globalCtx->state.gfxCtx;
    sp6C = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp6C->polyOpa.p;
    sp6C->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp64 = temp_v0;
    sp64->words.w1 = Gfx_PrimColor(globalCtx->state.gfxCtx, 0x80, 0xFF, 0xFF, 0xFF, 0xFF);
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, NULL, func_80BF6C54, &this->actor);
    temp_a1 = &this->actor.focus;
    temp_t7 = globalCtx->cameraPtrs[globalCtx->activeCamera];
    sp54.x = temp_t7->eye.x;
    sp54.y = temp_t7->eye.y;
    sp54.z = temp_t7->eye.z;
    sp34 = temp_a1;
    sp62 = Math_Vec3f_Yaw(&sp54, &temp_a1->pos);
    sp60 = (s16) -Math_Vec3f_Pitch(&sp54, &temp_a1->pos);
    sp38 = Math_SinS(sp62);
    sp80 = -(Math_CosS(sp60) * (15.0f * sp38));
    sp84 = -(Math_SinS(sp60) * 15.0f);
    sp38 = Math_CosS(sp62);
    SysMatrix_InsertTranslation(this->actor.focus.pos.x + sp80, this->actor.focus.pos.y + sp84, this->actor.focus.pos.z - (Math_CosS(sp60) * (15.0f * sp38)), 0);
    temp_f2 = ((Math_SinS((s16) (globalCtx->gameplayFrames << 0xE)) + 1.0f) * 0.1f) + 2.0f;
    Matrix_Scale(this->actor.scale.x * temp_f2, this->actor.scale.y * temp_f2, this->actor.scale.z * temp_f2, 1);
    temp_v0_2 = func_8012C868(sp6C->polyXlu.p);
    temp_v0_2->words.w1 = 0x80;
    temp_v0_2->words.w0 = 0xE3001803;
    temp_a1_2 = temp_v0_2 + 8;
    temp_a1_2->words.w0 = 0xFCFF97FF;
    temp_a1_2->words.w1 = 0xFF2DFEFF;
    temp_a1_3 = temp_a1_2 + 8;
    temp_a1_3->words.w0 = 0xDE000000;
    temp_a1_3->words.w1 = (u32) D_04029CB0;
    temp_a1_4 = temp_a1_3 + 8;
    temp_a1_4->words.w0 = 0xFA000000;
    temp_a1_4->words.w1 = 0x8200FF64;
    temp_a1_5 = temp_a1_4 + 8;
    temp_a1_5->words.w0 = 0xDA380003;
    temp_a1_6 = temp_a1_5 + 8;
    sp8C = temp_a1_6;
    temp_a1_5->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_a1_6->words.w0 = 0xDE000000;
    temp_a1_6->words.w1 = (u32) D_04029CF0;
    sp6C->polyXlu.p = temp_a1_6 + 8;
}

