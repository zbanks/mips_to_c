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
static AnimationHeaderCommon *D_80A0C4D0 = {(AnimationHeaderCommon *)0x6005238, (AnimationHeaderCommon *)0x6008090};
static AnimationHeader *D_80A0C4D8 = (AnimationHeader *)0x600D15C;
static AnimationHeader *D_80A0C4DC = (AnimationHeader *)0x6006DE4;
static AnimationHeader *D_80A0C4E0 = (AnimationHeader *)0x6005E20;
static ? D_80A0C4E4;                                /* unable to generate initializer */
static ? D_80A0C4F8;                                /* unable to generate initializer */
static ? D_80A0C50C;                                /* unable to generate initializer */
static ? D_80A0C514;                                /* unable to generate initializer */

typedef struct BgDyYoseizo {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(BgDyYoseizo *, GlobalContext *);
    /* 0x0148 */ SkelAnime unk148;                  /* inferred */
    /* 0x018C */ Vec3s unk18C;                      /* inferred */
    /* 0x0192 */ char pad192[0xA2];                 /* maybe part of unk18C[28]? */
    /* 0x0234 */ Vec3s unk234;                      /* inferred */
    /* 0x023A */ char pad23A[0xAE];                 /* maybe part of unk234[30]? */
    /* 0x02E8 */ Actor *unk2E8;                     /* inferred */
    /* 0x02EC */ f32 unk2EC;                        /* inferred */
    /* 0x02F0 */ f32 unk2F0;                        /* inferred */
    /* 0x02F4 */ f32 unk2F4;                        /* inferred */
    /* 0x02F8 */ s16 unk2F8;                        /* inferred */
    /* 0x02FA */ s16 unk2FA;                        /* inferred */
    /* 0x02FC */ s16 unk2FC;                        /* inferred */
    /* 0x02FE */ s16 unk2FE;                        /* inferred */
    /* 0x0300 */ s16 unk300;                        /* inferred */
    /* 0x0302 */ u16 unk302;                        /* inferred */
    /* 0x0304 */ char pad304[0x3200];               /* maybe part of unk302[6401]? */
} BgDyYoseizo;                                      /* size 0x3504 */

void BgDyYoseizo_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgDyYoseizo *this = (BgDyYoseizo *) thisx;
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->unk2EC = this->actor.world.pos.y + 40.0f;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    SkelAnime_InitSV(globalCtx, &this->unk148, &D_0601C8B4, &D_06008090, &this->unk18C, &this->unk234, 0x1C);
    this->actionFunc = func_80A0BB08;
    Actor_SetScale(&this->actor, 0.0f);
    this->unk2FA = 0;
    this->unk2FC = 0;
    this->unk2FE = 0;
    this->unk2F8 = 0;
    this->actor.home.rot.z = 1;
    this->unk302 = 0;
}

void BgDyYoseizo_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgDyYoseizo *this = (BgDyYoseizo *) thisx;

}

void func_80A0A96C(BgDyYoseizo *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->unk2FE;
    if (temp_v0 != 0) {
        arg0->unk2FE = temp_v0 - 1;
    }
    if (arg0->unk2FE == 0) {
        arg0->unk2FA += 1;
        if ((s32) arg0->unk2FA >= 3) {
            arg0->unk2FA = 0;
            arg0->unk2FE = (s32) Rand_ZeroFloat(60.0f) + 0x14;
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
                spB0 = temp_v0->unk0;
                spB1 = temp_v0->unk1;
                spB2 = temp_v0->unk2;
                spAC = temp_v1->unk0;
                spAD = temp_v1->unk1;
                spAE = temp_v1->unk2;
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
    Math_ApproachF(arg0 + 0x28, arg0->home.pos.y + 40.0f, arg0->unk2F0, 100.0f);
    Math_ApproachF(&sp24, 0.035f, arg0->unk2F4, 0.005f);
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
        Actor_SetScale(&this->actor, 0.0f);
        temp_v0 = this->actor.params & 0xF;
        this->unk2F8 = 0;
        this->unk2F0 = 0.0f;
        this->unk2F4 = 0.0f;
        if (temp_v0 < 4) {
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x48, this->actor.world.pos.x, this->actor.world.pos.y + 20.0f, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) (temp_v0 + 4));
        } else {
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x48, this->actor.world.pos.x, this->actor.world.pos.y + 20.0f, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
        }
        play_sound(0x4834U);
        return;
    }
    Math_ApproachF(&this->actor.world.pos.y, this->actor.home.pos.y, this->unk2F0, 100.0f);
    Math_ApproachZeroF(&sp44, this->unk2F4, 0.005f);
    Math_ApproachF(&this->unk2F0, 0.8f, 0.1f, 0.02f);
    Math_ApproachF(&this->unk2F4, 0.2f, 0.03f, 0.05f);
    temp_v0_2 = this->unk2F8;
    this->actor.shape.rot.y += temp_v0_2;
    if ((s32) temp_v0_2 < 0x1770) {
        this->unk2F8 = temp_v0_2 + 0x12C;
    }
    func_80A0AA40(&this->actor, 0, 2);
    Actor_SetScale(&this->actor, sp44);
}

void func_80A0AFDC(Actor *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x148, (AnimationHeader *) D_80A0C4C8, 0.0f, 46.0f, (f32) SkelAnime_GetFrameCount(D_80A0C4C8), (u8) 2, 0.0f);
    arg0->unk144 = func_80A0AE1C;
    Audio_PlayActorSound2(arg0, 0x6858U);
    Audio_PlayActorSound2(arg0, 0x2880U);
    arg0->unk2F8 = 0;
    arg0->velocity.y = 0.0f;
    arg0->unk2F0 = 0.0f;
    arg0->unk2F4 = 0.0f;
    arg0->shape.yOffset = 0.0f;
}

void func_80A0B078(BgDyYoseizo *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a0;

    func_80A0A9E4(this, globalCtx);
    temp_a0 = &this->unk148;
    sp34 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 7)) {
        SkelAnime_ChangeAnim(sp34, (AnimationHeader *) D_80A0C4C0.unk10, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(D_80A0C4C0.unk10), (u8) 0, 0.0f);
        this->actionFunc = func_80A0B184;
        return;
    }
    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 6)) {
        func_80A0AFDC(&this->actor);
    }
}

void func_80A0B184(BgDyYoseizo *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a0;

    func_80A0A9E4(this, globalCtx);
    temp_a0 = &this->unk148;
    sp34 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 8)) {
        SkelAnime_ChangeAnim(sp34, (AnimationHeader *) D_80A0C4C0.unk14, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(D_80A0C4C0.unk14), (u8) 0, 0.0f);
        this->actionFunc = func_80A0B078;
        return;
    }
    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 6)) {
        func_80A0AFDC(&this->actor);
    }
}

void func_80A0B290(BgDyYoseizo *this, GlobalContext *globalCtx) {
    SkelAnime *sp2C;
    SkelAnime *temp_a0;

    func_80A0A9E4(this, globalCtx);
    temp_a0 = &this->unk148;
    sp2C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 7)) {
        SkelAnime_ChangeAnim(sp2C, (AnimationHeader *) D_80A0C4D0, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(D_80A0C4D0), (u8) 0, -10.0f);
        this->actionFunc = func_80A0B184;
        this->unk2FC = 0;
    }
}

void func_80A0B35C(BgDyYoseizo *this, GlobalContext *globalCtx) {
    s32 temp_v0;
    s8 temp_v0_2;
    s32 phi_v1;
    s32 phi_v1_2;

    func_80A0A9E4(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->unk148);
    if (this->unk300 == 0x3C) {
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
    phi_v1 = (s32) this->unk300;
    if (((s32) this->unk300 < 0x32) && ((this->actor.params & 0xF) == 3)) {
        temp_v0_2 = gSaveContext.inventory.dungeonKeys[9];
        if ((s32) temp_v0_2 < 0x14) {
            gSaveContext.inventory.dungeonKeys[9] = temp_v0_2 + 1;
            phi_v1 = (s32) this->unk300;
        }
    }
    phi_v1_2 = phi_v1;
    if (phi_v1 == 0x32) {
        gSaveContext.healthAccumulator = 0x140;
        Parameter_AddMagic(globalCtx, (s16) (gSaveContext.unk_3F30 + (gSaveContext.doubleMagic * 0x30) + 0x30), &gSaveContext);
        phi_v1_2 = (s32) this->unk300;
    }
    if (phi_v1_2 == 0) {
        this->unk2E8->unk14A = 1;
        this->actionFunc = func_80A0B290;
    }
}

void func_80A0B500(BgDyYoseizo *this, GlobalContext *globalCtx) {
    Actor *sp54;
    SkelAnime *sp40;
    SkelAnime *temp_a0;

    sp54 = globalCtx->actorCtx.actorList[2].first;
    func_80A0A9E4(this);
    temp_a0 = &this->unk148;
    sp40 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        SkelAnime_ChangeAnim(sp40, (AnimationHeader *) D_80A0C4C4, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(D_80A0C4C4), (u8) 0, 0.0f);
        this->actionFunc = func_80A0B35C;
        this->unk2E8 = Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, 0x175, sp54->world.pos.x, sp54->world.pos.y + 200.0f, sp54->world.pos.z, (s16) 0, (s16) 0, (s16) 0, this->actor.params & 0xF);
        this->unk300 = 0x78;
    }
}

void func_80A0B5F0(BgDyYoseizo *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a0;

    func_80A0A9E4(this, globalCtx);
    temp_a0 = &this->unk148;
    sp34 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        SkelAnime_ChangeAnim(sp34, (AnimationHeader *) D_80A0C4D0, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(D_80A0C4D0), (u8) 0, 0.0f);
    }
    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 5)) {
        SkelAnime_ChangeAnim(sp34, (AnimationHeader *) D_80A0C4C0, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(D_80A0C4C0), (u8) 2, -5.0f);
        Audio_PlayActorSound2(&this->actor, 0x6859U);
        this->unk2FC = 1;
        this->unk2FA = 0;
        this->actionFunc = func_80A0B500;
    }
    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 6)) {
        func_80A0AFDC(&this->actor);
    }
    func_80A0A96C(this);
}

void func_80A0B75C(BgDyYoseizo *this, GlobalContext *globalCtx) {
    SkelAnime *sp34;
    SkelAnime *temp_a0;

    func_80A0AD50(&this->actor);
    temp_a0 = &this->unk148;
    sp34 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 4)) {
        this->actor.shape.rot.y = 0;
        this->actionFunc = func_80A0B5F0;
        SkelAnime_ChangeAnim(sp34, (AnimationHeader *) D_80A0C4CC, 1.0f, 2.0f, (f32) SkelAnime_GetFrameCount(D_80A0C4CC), (u8) 2, 0.0f);
        Audio_PlayActorSound2(&this->actor, 0x6859U);
        this->unk2F8 = 0;
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
    temp_a0 = &this->unk148;
    sp24 = temp_a0;
    globalCtx = globalCtx;
    sp2C = temp_v1;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    sp36 = 0;
    if (func_800EE29C(globalCtx, 0x67U) != 0) {
        temp_a0_2 = globalCtx;
        globalCtx = globalCtx;
        sp36 = globalCtx->csCtx.npcActions[func_800EE200(temp_a0_2, 0x67U)]->unk0;
        func_800EDF24(&this->actor, globalCtx, func_800EE200(globalCtx, 0x67U));
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
    temp_v0 = this->unk302;
    if ((temp_v0 & 1) != 0) {
        if (this->unk300 == 0) {
            if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
                ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, &this->actor);
                this->unk302 &= 0xFFFE;
            } else {
                ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
            }
        }
        goto block_19;
    }
    if (((temp_v0 & 2) == 0) && (temp_v1->unkADB != 0)) {
        if (((s32) temp_v1->unkADA >= 0x1E) && (temp_t9 = temp_v0 | 1, (temp_v1->unkB08 >= 0.85f))) {
            this->unk302 = temp_t9;
            this->unk302 = temp_t9 | 2;
            if (globalCtx->msgCtx.unk11F04 == 0x59A) {
                func_801477B4(globalCtx);
            }
            this->unk300 = 0x14;
            return;
        }
        if (globalCtx->msgCtx.unk11F04 != 0x59A) {
            func_801518B0(globalCtx, 0x59AU, &this->actor);
        }
        goto block_19;
    }
block_19:
    phi_v0 = (s16) sp36;
    if ((s16) sp36 != this->unk2F8) {
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
        this->unk2F8 = phi_v0;
    }
}

void func_80A0BB08(BgDyYoseizo *this, GlobalContext *globalCtx) {
    SkelAnime *sp24;

    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 2)) {
        func_80A0B834(&this->actor);
        this->actionFunc = func_80A0B75C;
    }
    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 7)) {
        this->actor.draw = func_80A0BD40;
        SkelAnime_ChangeAnimDefaultRepeat(&this->unk148, (AnimationHeader *) D_80A0C4D0);
        this->actionFunc = func_80A0B184;
        this->unk2FC = 0;
        this->actor.world.pos.y = this->actor.home.pos.y + 40.0f;
        Actor_SetScale(&this->actor, 0.035f);
        this->unk2F8 = 0;
    }
    if ((func_800EE29C(globalCtx, 0x67U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x67U)]->unk0 == 9)) {
        sp24 = &this->unk148;
        Actor_SetScale(&this->actor, 0.01f);
        SkelAnime_ChangeAnimDefaultRepeat(sp24, D_80A0C4D8);
        this->unk2F8 = 9;
        this->actionFunc = func_80A0B8CC;
        this->actor.draw = func_80A0BD40;
    }
}

void BgDyYoseizo_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgDyYoseizo *this = (BgDyYoseizo *) thisx;
    s16 temp_v0;

    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    temp_v0 = this->unk300;
    if (temp_v0 != 0) {
        this->unk300 = temp_v0 - 1;
    }
    func_80A0BF70(this, globalCtx);
}

s32 func_80A0BCD8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 8) {
        arg4->x += arg5->unk2E4;
    }
    if (arg1 == 0xF) {
        arg4->x += arg5->unk2DE;
        arg4->z += arg5->unk2E0;
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
    temp_v0 = Lib_SegmentedToVirtual(*(&D_80A0C50C + (this->unk2FC * 4)));
    temp_v1_2->words.w0 = 0xDB060024;
    temp_v1_2->words.w1 = (u32) temp_v0;
    sp3C->polyOpa.p = temp_v1_2 + 8;
    SkelAnime_DrawSV(globalCtx, this->unk14C, this->unk168, (s32) this->unk14A, func_80A0BCD8, NULL, this);
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
    if (phi_v0->unk0 == 0) {
        phi_v0->unk0 = 1U;
        phi_v0->unk4 = (s32) arg1->unk0;
        phi_v0->unk8 = (s32) arg1->unk4;
        phi_v0->unkC = (s32) arg1->unk8;
        phi_v0->unk10 = (s32) arg2->unk0;
        phi_v0->unk14 = (s32) arg2->unk4;
        phi_v0->unk18 = (s32) arg2->unk8;
        phi_v0->unk1C = (s32) arg3->unk0;
        phi_v0->unk20 = (s32) arg3->unk4;
        phi_v0->unk24 = (s32) arg3->unk8;
        phi_v0->unk28 = (u8) arg4->unk0;
        phi_v0->unk29 = (u8) arg4->unk1;
        phi_v0->unk2E = 0;
        phi_v0->unk2A = (u8) arg4->unk2;
        phi_v0->unk2B = (u8) arg5->unk0;
        phi_v0->unk2C = (u8) arg5->unk1;
        phi_v0->unk2D = (u8) arg5->unk2;
        phi_v0->unk30 = arg6;
        phi_v0->unk34 = arg7;
        phi_v0->unk38 = 0;
        phi_v0->unk36 = arg8;
        sp1C = phi_v0;
        temp_t3 = (s32) randPlusMinusPoint5Scaled(30000.0f);
        phi_v0->unk3C = 0;
        phi_v0->unk3A = (s16) temp_t3;
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
    Vec3f sp9C;
    Vec3f sp90;
    f32 sp7C;
    Vec3f *temp_s1;
    Vec3f *temp_s3;
    f32 *temp_a0;
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
        if (phi_s0->unk0 != 0) {
            phi_s0->unk3C = (s16) (phi_s0->unk3C + 0xBB8);
            if ((s32) phi_s0->unk36 < 5) {
                temp_f0 = phi_s0->unk10;
                temp_f2 = phi_s0->unk14;
                temp_f12 = phi_s0->unk18;
                phi_s0->unk4 = (f32) (phi_s0->unk4 + temp_f0);
                phi_s0->unk8 = (f32) (phi_s0->unk8 + temp_f2);
                phi_s0->unkC = (f32) (phi_s0->unkC + temp_f12);
                phi_s0->unk10 = (f32) (temp_f0 + phi_s0->unk1C);
                phi_s0->unk14 = (f32) (temp_f2 + phi_s0->unk20);
                phi_s0->unk18 = (f32) (temp_f12 + phi_s0->unk24);
            } else {
                temp_s2 = temp_s4 + 0x24;
                Audio_PlayActorSound2(arg0, 0x207EU);
                temp_s3->x = temp_s2->unk0;
                temp_s1 = phi_s0 + 4;
                temp_s3->y = temp_s2->unk4;
                temp_s3->z = temp_s2->unk8;
                spA0 = temp_s4->world.pos.y - 150.0f;
                spA4 = temp_s4->world.pos.z - 50.0f;
                temp_f20 = (f32) Math_Vec3f_Pitch(temp_s1, temp_s3);
                temp_a0 = temp_s6;
                temp_f22 = (f32) Math_Vec3f_Yaw(temp_s1, temp_s3);
                sp7C = (f32) phi_s0->unk38;
                Math_ApproachF(temp_a0, temp_f20, 0.9f, 5000.0f);
                phi_s0->unk38 = (s16) (s32) sp7C;
                sp7C = (f32) phi_s0->unk3A;
                Math_ApproachF(temp_s6, temp_f22, 0.9f, 5000.0f);
                phi_s0->unk3A = (s16) (s32) sp7C;
                SysMatrix_StatePush();
                Matrix_RotateY(phi_s0->unk3A, 0U);
                SysMatrix_InsertXRotation_s(phi_s0->unk38, 1);
                sp9C.z = 3.0f;
                sp9C.y = 3.0f;
                sp9C.x = 3.0f;
                SysMatrix_MultiplyVector3fByState(temp_s3, &sp90);
                SysMatrix_StatePop();
                phi_s0->unk4 = (f32) (phi_s0->unk4 + sp90.x);
                phi_s0->unk8 = (f32) (phi_s0->unk8 + sp90.y);
                phi_s0->unkC = (f32) (phi_s0->unkC + sp90.z);
            }
        }
        temp_v0 = phi_s0->unk34;
        temp_s5 = phi_s5 + 1;
        phi_s5 = temp_s5;
        if (temp_v0 != 0) {
            phi_s0->unk34 = (s16) (temp_v0 - 1);
            phi_s0->unk2E = (s16) (phi_s0->unk2E + 0x1E);
            if ((s32) phi_s0->unk2E >= 0x100) {
                phi_s0->unk2E = 0xFF;
            }
        } else {
            phi_s0->unk2E = (s16) (phi_s0->unk2E - 0x1E);
            if ((s32) phi_s0->unk2E <= 0) {
                phi_s0->unk2E = 0;
                phi_s0->unk0 = 0U;
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
        if (phi_s0->unk0 == 1) {
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
            temp_v0_3->words.w1 = (phi_s0->unk28 << 0x18) | (phi_s0->unk29 << 0x10) | (phi_s0->unk2A << 8) | (phi_s0->unk2E & 0xFF);
            temp_v0_4 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xFB000000;
            temp_v0_4->words.w1 = (phi_s0->unk2B << 0x18) | (phi_s0->unk2C << 0x10) | (phi_s0->unk2D << 8);
            SysMatrix_InsertTranslation(phi_s0->unk4, phi_s0->unk8, phi_s0->unkC, 0);
            SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
            temp_f12 = phi_s0->unk30;
            Matrix_Scale(temp_f12, temp_f12 * temp_f22, 1.0f, 1);
            SysMatrix_InsertZRotation_s(phi_s0->unk3C, 1);
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

