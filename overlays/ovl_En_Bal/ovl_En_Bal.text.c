void func_80A61A18(EnBal *arg0, EnBal *);           /* static */
void func_80A61A44(EnBal *arg0);                    /* static */
s32 func_80A61A6C(GlobalContext *arg0, Actor *arg1); /* static */
void func_80A61ADC(EnBal *arg0);                    /* static */
void func_80A61B5C(EnBal *arg0, GlobalContext *arg1); /* static */
void func_80A61C9C(Actor *arg0);                    /* static */
void func_80A61CE4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A61DF8(Actor *arg0);                    /* static */
void func_80A61E5C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A62128(Actor *arg0);                    /* static */
void func_80A621C4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A62260(Actor *arg0);                    /* static */
void func_80A622A0(EnBal *arg0, ? arg1);            /* static */
void func_80A623CC(EnBal *arg0);                    /* static */
void func_80A624DC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A62818(Actor *arg0);                    /* static */
void func_80A62830(EnBal *arg0, GlobalContext *arg1); /* static */
void func_80A629C4(EnBal *arg0);                    /* static */
void func_80A62AC4();                               /* static */
s32 func_80A62B30(SkelAnime *, ActorAnimationEntry *); /* static */
void func_80A62B78(EnBal *arg0, GlobalContext *arg1); /* static */
void func_80A62CF0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A62DCC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A62ED0(Actor *arg0);                    /* static */
void func_80A62FAC(EnBal *arg0, GlobalContext *arg1); /* static */
void func_80A63158(EnBal *arg0, GlobalContext *arg1); /* static */
void func_80A634B4(Actor *arg0);                    /* static */
void func_80A634C8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A635DC(Actor *arg0);                    /* static */
void func_80A635F0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A636AC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A637FC(EnBal *arg0, GlobalContext *arg1); /* static */
void func_80A63884(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A63A10(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80A63B94(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeaderCommon D_060005FC;
extern ? D_06000C78;
extern FlexSkeletonHeader D_0600A6D0;
extern AnimationHeader D_0600B604;
extern ? D_0600CB78;
extern ? D_0600D530;
static DamageTable D_80A63CE0 = {
    {
        0,
        0,
        0,
        0,
        0xE1,
        0xE1,
        0xF1,
        0xF1,
        1,
        1,
        1,
        0x22,
        0x32,
        0x42,
        0xF1,
        0,
        0xE1,
        2,
        0,
        0,
        0,
        0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
};
static CollisionCheckInfoInit2 D_80A63D00 = {1, 0, 0, 0, 0xFF};
static ColliderJntSphElementInit D_80A63D0C = {
    {0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {6, {{0x960, 0, 0}, 0x32}, 0x64},
};
static ColliderJntSphInit D_80A63D30 = {{0xA, 0x11, 9, 0x39, 0x10, 0}, 1, &D_80A63D0C};
static ? D_80A63D40;                                /* unable to generate initializer */
static ActorAnimationEntry D_80A63D58 = {
    {(AnimationHeader *)0x60005FC, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x6000840, 1.5f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x6000840, 1.5f, 0.0f, 0.0f, 2, -4.0f},
    {(AnimationHeader *)0x600A7DC, 1.0f, 0.0f, 0.0f, 2, -4.0f},
    {(AnimationHeader *)0x600B1E8, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x600B604, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x600C498, 1.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x600C8D8, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x600C8D8, 1.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x600C498, 1.0f, 23.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x600D530, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x6000C78, 1.0f, 0.0f, 0.0f, 0, -2.0f},
    {(AnimationHeader *)0x600CB78, 1.0f, 0.0f, 0.0f, 0, -2.0f},
    {(AnimationHeader *)0x6001804, 1.0f, 0.0f, 0.0f, 0, -2.0f},
};
static ? D_80A63EA8;                                /* unable to generate initializer */
static Vec3f D_80A63EB4;                            /* type too large by 8; unable to generate initializer */
static f32 D_80A63EB8 = 0.0f;
static f32 D_80A63EBC = 0.0f;
static Vec3f D_80A63EC0;                            /* type too large by 8; unable to generate initializer */
static f32 D_80A63EC4 = 0.0f;
static Color_RGBA8 D_80A63ECC = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80A63ED0 = {0x64, 0xC8, 0, 0xFF};
static Vec3f D_80A63ED4;                            /* type too large by 8; unable to generate initializer */
static f32 D_80A63ED8 = 0.0f;
static f32 D_80A63EDC = 0.0f;
static Vec3f D_80A63EE0 = {0.0f, 0.0f, 0.0f};
static Color_RGBA8 D_80A63EEC = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80A63EF0 = {0xC6, 0xC6, 0xC6, 0xFF};
static s32 D_80A63EF4 = 0;
static Vec3f D_80A63EF8 = {1000.0f, 0.0f, 0.0f};
static ? D_80A63F04;                                /* unable to generate initializer */

typedef struct EnBal {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 (*unk144)(GlobalContext *, Actor *); /* inferred */
    /* 0x0148 */ SkelAnime unk148;                  /* inferred */
    /* 0x018C */ void (*actionFunc)(EnBal *, GlobalContext *);
    /* 0x0190 */ SkelAnime unk190;                  /* inferred */
    /* 0x01D4 */ char pad1D4[0x1C];
    /* 0x01F0 */ f32 unk1F0;                        /* inferred */
    /* 0x01F4 */ f32 unk1F4;                        /* inferred */
    /* 0x01F8 */ f32 unk1F8;                        /* inferred */
    /* 0x01FC */ s32 unk1FC;                        /* inferred */
    /* 0x0200 */ Vec3s unk200;                      /* inferred */
    /* 0x0206 */ char pad206[0xC0];                 /* maybe part of unk200[33]? */
    /* 0x02C6 */ Vec3s unk2C6;                      /* inferred */
    /* 0x02CC */ char pad2CC[0xCC];                 /* maybe part of unk2C6[35]? */
    /* 0x0398 */ s16 unk398;                        /* inferred */
    /* 0x039A */ s16 unk39A;                        /* inferred */
    /* 0x039C */ s16 unk39C;                        /* inferred */
    /* 0x039E */ s16 unk39E;                        /* inferred */
    /* 0x03A0 */ s16 unk3A0;                        /* inferred */
    /* 0x03A2 */ char pad3A2[0x2];                  /* maybe part of unk3A0[2]? */
    /* 0x03A4 */ s16 unk3A4;                        /* inferred */
    /* 0x03A6 */ s16 unk3A6;                        /* inferred */
    /* 0x03A8 */ s16 unk3A8;                        /* inferred */
    /* 0x03AA */ char pad3AA[0x4];                  /* maybe part of unk3A8[3]? */
    /* 0x03AE */ s16 unk3AE;                        /* inferred */
    /* 0x03B0 */ s16 unk3B0;                        /* inferred */
    /* 0x03B2 */ s8 unk3B2;                         /* inferred */
    /* 0x03B3 */ char pad3B3[0x1];                  /* maybe part of unk3B2[2]? */
} EnBal;                                            /* size 0x3B4 */

typedef struct {
    /* 0x0000 */ View view;
    /* 0x0168 */ Font font;
    /* 0x11EF4 */ s8 unk_11EF4[16];
    /* 0x11F04 */ u16 unk11F04;
    /* 0x11F06 */ char pad11F06[0x4];               /* maybe part of unk11F04[3]? */
    /* 0x11F0A */ u8 unk11F0A;
    /* 0x11F0B */ char pad11F0B[0x5];               /* maybe part of unk11F0A[6]? */
    /* 0x11F10 */ s32 unk11F10;
    /* 0x11F14 */ char pad11F14[0xE];
    /* 0x11F22 */ u8 unk11F22;
    /* 0x11F23 */ char pad11F23[0xFD];              /* maybe part of unk11F22[254]? */
    /* 0x12020 */ u8 unk12020;
    /* 0x12021 */ u8 choiceIndex;
    /* 0x12022 */ char pad12022[0x1];               /* maybe part of choiceIndex[2]? */
    /* 0x12023 */ s8 unk12023;
    /* 0x12024 */ char pad12024[0x6];               /* maybe part of unk12023[7]? */
    /* 0x1202A */ u16 unk1202A;
    /* 0x1202C */ char pad1202C[0x2];               /* maybe part of unk1202A[2]? */
    /* 0x1202E */ u16 unk1202E;
    /* 0x12030 */ char pad12030[0x14];              /* maybe part of unk1202E[11]? */
    /* 0x12044 */ s16 unk12044;
    /* 0x12046 */ char pad12046[0x24];              /* maybe part of unk12044[19]? */
    /* 0x1206A */ s16 unk1206A;
    /* 0x1206C */ s32 unk1206C;
    /* 0x12070 */ s32 unk12070;                     /* inferred */
    /* 0x12074 */ char pad12074[0x4];               /* maybe part of unk12070[2]? */
    /* 0x12078 */ s32 bankRupeesSelected;
    /* 0x1207C */ s32 bankRupees;
    /* 0x12080 */ char pad12080[0x31];
    /* 0x120B1 */ u8 unk120B1;
    /* 0x120B2 */ char pad120B2[0x2E];              /* maybe part of unk120B1[47]? */
} MessageContext;                                   /* size 0x120E0 */

void EnBal_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnBal *this = (EnBal *) thisx;
    f32 sp34;
    SkelAnime *sp30;
    SkelAnime *temp_a1;
    SkelAnime *temp_a1_2;

    sp34 = (f32) SkelAnime_GetFrameCount(&D_060005FC);
    this->actor.targetMode = 1;
    this->unk3AE = this->actor.params & 0xFF;
    this->actor.uncullZoneForward = 3000.0f;
    Actor_SetScale(&this->actor, 0.02f);
    temp_a1 = &this->unk148;
    sp30 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_0600A6D0, (AnimationHeader *) &D_060005FC, &this->unk200, &this->unk2C6, 0x21);
    if (gSaveContext.magicAcquired != 0) {
        SkelAnime_ChangeAnim(sp30, &D_0600B604, 1.0f, 0.0f, sp34, (u8) 0, -10.0f);
    }
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 0.0f);
    this->unk39E = 0;
    this->unk3A0 = 0;
    this->unk3A4 = 0;
    this->unk3A8 = 0;
    this->unk39C = 0;
    this->unk3B0 = 0;
    this->unk3B2 = 0;
    this->unk1FC = 0;
    this->unk398 = 0x3C;
    this->unk39A = 0;
    temp_a1_2 = &this->unk190;
    sp30 = temp_a1_2;
    Collider_InitJntSph(globalCtx, (ColliderJntSph *) temp_a1_2);
    Collider_SetJntSph(globalCtx, (ColliderJntSph *) temp_a1_2, &this->actor, &D_80A63D30, (ColliderJntSphElement *) &this->unk190.limbDrawTbl);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80A63CE0, &D_80A63D00);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 4U);
    this->unk144 = func_80A61A6C;
    if (gSaveContext.magicAcquired == 0) {
        this->actor.world.pos.y = this->actor.floorHeight;
        func_80A61A44(this);
        func_80A623CC(this);
        return;
    }
    func_80A61ADC(this);
}

void EnBal_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBal *this = (EnBal *) thisx;
    Collider_InitJntSph(globalCtx, (ColliderJntSph *) &this->unk190);
}

void func_80A61A18(EnBal *arg0) {
    arg0->unk190.animPlaybackSpeed->unk3C = 6;
    arg0->unk190.animPlaybackSpeed->unk2E = 0x28;
    arg0->unk190.animPlaybackSpeed->unk28 = 0x898;
}

void func_80A61A44(EnBal *arg0) {
    arg0->unk190.animPlaybackSpeed->unk3C = 0x16;
    arg0->unk190.animPlaybackSpeed->unk2E = 0x19;
    arg0->unk190.animPlaybackSpeed->unk28 = 0;
}

s32 func_80A61A6C(GlobalContext *arg0, Actor *arg1) {
    s32 temp_v0;

    temp_v0 = func_8013A530(arg0, arg1, 8, arg1 + 0x3C, arg1 + 0xBC, 10.0f, 400.0f, (s16) 0x4000);
    if (temp_v0 == 0) {
        arg1->unk39A = 1;
        arg1->unk3A6 = 3;
    }
    return temp_v0;
}

void func_80A61ADC(EnBal *arg0) {
    EnBal *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk3A8 = 0;
    arg0 = temp_a3;
    func_80A61A18(temp_a3, temp_a3);
    func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 0);
    arg0->actor.focus.pos.x = arg0->actor.world.pos.x;
    arg0->actor.focus.pos.y = arg0->actor.world.pos.y;
    arg0->actor.focus.pos.y = arg0->actor.world.pos.y + 100.0f;
    arg0->actionFunc = func_80A61B5C;
    arg0->actor.focus.pos.z = arg0->actor.world.pos.z;
}

void func_80A61B5C(EnBal *arg0, GlobalContext *arg1) {
    SkelAnime *sp20;
    SkelAnime *temp_a0;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0;

    arg0->unk39E += 0x320;
    arg0->actor.focus.pos.y = arg0->actor.world.pos.y + 100.0f;
    arg0->unk3A8 += 0x3E8;
    temp_f2 = (Math_CosS(arg0->unk39E) * 0.1f) + 1.0f;
    arg0->unk1F8 = temp_f2;
    arg0->unk1F4 = temp_f2;
    temp_f2_2 = (Math_SinS(arg0->unk39E) * 0.1f) + 1.0f;
    arg0->unk1F0 = temp_f2_2 * temp_f2_2;
    arg0->actor.world.pos.y = (Math_SinS(arg0->unk39E) * 50.0f) + arg0->actor.home.pos.y;
    if (arg0->unk39A == 1) {
        temp_a0 = arg0 + 0x148;
        if (&D_0600CB78 != arg0->unk148.animCurrentSeg) {
            func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 0xC);
            return;
        }
        sp20 = temp_a0;
        if (func_801378B8(temp_a0, arg0->unk148.animFrameCount) != 0) {
            temp_v0 = arg0->unk3A6;
            if (temp_v0 != 0) {
                arg0->unk3A6 = temp_v0 - 1;
                return;
            }
            arg0->unk39A = 0;
            arg0->unk1FC = 0;
            func_800BDC5C(temp_a0, (ActorAnimationEntry []) &D_80A63D58, 0);
            // Duplicate return node #7. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #7. Try simplifying control flow for better match
    }
}

void func_80A61C9C(Actor *arg0) {
    func_80A61A44();
    arg0->unk3A8 = 0;
    Audio_PlayActorSound2(arg0, 0x2949U);
    arg0->unk3A4 = 1;
    arg0->unk18C = func_80A61CE4;
}

void func_80A61CE4(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s8 temp_a2;

    arg0->focus.pos.x = arg0->world.pos.x;
    temp_a2 = arg0->cutscene;
    arg0->focus.pos.y = arg0->world.pos.y + 20.0f;
    arg0->focus.pos.z = arg0->world.pos.z + 30.0f;
    if (temp_a2 != -1) {
        if (ActorCutscene_GetCanPlayNext((s16) temp_a2) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
            func_800E02AC(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera((s16) arg0->cutscene)), arg0);
        } else {
            ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
        }
    }
    temp_v0 = arg0->unk3A8;
    if ((s32) temp_v0 >= 0x1F) {
        arg0->unk3A8 = 0;
        func_80A61DF8(arg0);
        return;
    }
    if ((s32) temp_v0 >= 0xB) {
        arg0->unk164 = 0.0f;
        if ((s32) arg0->unk398 >= 7) {
            arg0->unk398 = 6;
        }
        arg0->unk3A8 = (s16) (arg0->unk3A8 + 1);
        return;
    }
    arg0->unk3A8 = (s16) (temp_v0 + 1);
}

void func_80A61DF8(Actor *arg0) {
    Actor *temp_a0;

    temp_a0 = arg0;
    arg0 = arg0;
    Audio_PlayActorSound2(temp_a0, 0x6977U);
    func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 1);
    arg0->unk39A = 1;
    arg0->unk3A4 = 2;
    arg0->unk18C = func_80A61E5C;
}

void func_80A61E5C(Actor *arg0, GlobalContext *arg1) {
    Vec3f sp3C;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;

    sp3C.x = arg0->world.pos.x;
    sp3C.y = arg0->world.pos.y;
    sp3C.z = arg0->world.pos.z;
    arg0->focus.pos.x = arg0->world.pos.x;
    temp_v0 = arg0->unk3A8;
    arg0->focus.pos.y = arg0->world.pos.y + 20.0f;
    arg0->focus.pos.z = arg0->world.pos.z + 30.0f;
    if (temp_v0 == 0x1E) {
        arg0->gravity = -1.5f;
        Math_SmoothStepToS(arg0 + 0xBE, arg0->world.rot.y, 5, 0x3000, (s16) 0x100);
        Math_SmoothStepToS(arg0 + 0xC0, arg0->world.rot.z, 5, 0x3000, (s16) 0x100);
    } else if ((s32) temp_v0 < 0x1E) {
        arg0->unk3A8 = (s16) (temp_v0 + 1);
        arg0->shape.rot.y = (s32) (Math_CosS(arg0->unk39E) * 2500.0f) + arg0->world.rot.y;
        temp_v0_2 = arg0->unk3A8;
        arg0->shape.rot.z = (s32) (Math_SinS(arg0->unk39E) * 2500.0f) + arg0->world.rot.z;
        if (temp_v0_2 == 0x19) {
            arg0->unk39A = 0;
            arg0->unk1FC = 0;
            func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 2);
        } else if (temp_v0_2 == 0x1D) {
            arg0->velocity.y = -12.0f;
        }
    }
    if ((arg0->bgCheckFlags & 2) != 0) {
        Audio_PlayActorSound2(arg0, 0x6978U);
        Audio_PlayActorSound2(arg0, 0x387AU);
    }
    if ((arg0->bgCheckFlags & 1) != 0) {
        temp_v0_3 = arg0->unk3A8;
        arg0->colChkInfo.health = 0;
        if ((s32) temp_v0_3 >= 0x51) {
            arg0->shape.yOffset = 0.0f;
            func_80A623CC((EnBal *) arg0);
        } else if (temp_v0_3 == 0x1E) {
            func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 3);
            arg0->unkBC = (unaligned s32) arg0->unk30;
            arg0->shape.rot.z = (s16) (u16) arg0->world.rot.z;
            func_800BBDAC(arg1, arg0, &sp3C, 10.0f, 0x1E, 5.0f, (s16) 0, (s16) 0, (u8) 0);
            arg0->unk3A8 = (s16) (arg0->unk3A8 + 1);
        } else {
            if ((arg1->gameplayFrames & 1) != 0) {
                arg0->shape.yOffset = 20.0f;
            } else {
                arg0->shape.yOffset = 0.0f;
            }
            arg0->unk3A8 = (s16) (arg0->unk3A8 + 1);
        }
    } else if (arg0->velocity.y < 0.0f) {
        func_800B9010(arg0, 0x20A0U);
    }
    arg0->unk39E = (s16) (arg0->unk39E + 0xBB8);
}

void func_80A62128(Actor *arg0) {
    ? sp1C;
    Actor *temp_a3;

    temp_a3 = arg0;
    sp1C.unk0 = (s32) D_80A63EA8.unk0;
    sp1C.unk4 = (s32) D_80A63EA8.unk4;
    sp1C.unk8 = (s32) D_80A63EA8.unk8;
    arg0 = temp_a3;
    func_800BDC5C(temp_a3 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 0);
    arg0->unk3A4 = 4;
    arg0->unk39C = 0;
    arg0->unk39A = 0;
    arg0->unk1FC = 0;
    arg0->unk1F0 = (s32) sp1C.unk0;
    arg0->unk1F4 = (s32) sp1C.unk4;
    arg0->unk39E = 0;
    arg0->unk3A8 = 0;
    arg0->unk18C = func_80A621C4;
    arg0->unk1F8 = (s32) sp1C.unk8;
}

void func_80A621C4(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;

    if (Math_SmoothStepToF(arg0 + 0x1F0, 1.0f, 0.05f, 0.03f, 0.01f) == 0.0f) {
        func_80A62260(arg0);
    }
    func_80A62CF0(arg0, arg1);
    func_800B9010(arg0, 0x214AU);
    temp_f0 = arg0->unk1F0 * 1.1f;
    arg0->unk1F8 = temp_f0;
    arg0->unk1F4 = temp_f0;
}

void func_80A62260(Actor *arg0) {
    arg0->unk3A4 = 5;
    func_80A61A18();
    arg0->unk18C = func_80A622A0;
    arg0->gravity = 0.0f;
}

void func_80A622A0(EnBal *arg0, ? arg1) {
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_v0;

    if ((s32) arg0->unk3A8 < 0x1F4) {
        temp_f2 = (Math_CosS(arg0->unk39E) * 0.1f) + 1.0f;
        arg0->unk1F8 = temp_f2;
        arg0->unk1F4 = temp_f2;
        temp_f2_2 = (Math_SinS(arg0->unk39E) * 0.1f) + 1.0f;
        arg0->unk1F0 = temp_f2_2 * temp_f2_2;
        arg0->actor.world.pos.y *= (f32) (0x1F4 - arg0->unk3A8);
        temp_v0 = arg0->unk3A8;
        arg0->actor.world.pos.y += (f32) temp_v0 * (arg0->actor.home.pos.y + (50.0f * Math_SinS(arg0->unk39E)));
        arg0->actor.world.pos.y *= 0.002f;
        if ((s32) temp_v0 < 0x64) {
            arg0->unk3A8 = temp_v0 + 1;
        } else {
            arg0->unk3A8 = temp_v0 + 0xA;
        }
        arg0->unk39E += 0x320;
        return;
    }
    func_80A61ADC(arg0);
}

void func_80A623CC(EnBal *arg0) {
    if (func_80A61E5C == arg0->actionFunc) {
        arg0->unk39A = 0;
        arg0->unk1FC = 0;
        arg0->unk3A6 = 3;
        func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 0xA);
    } else if ((Rand_Next() & 1) != 0) {
        arg0->unk3A6 = 0;
        func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 5);
    } else {
        arg0->unk3A6 = 0;
        arg0->unk39A = 1;
        func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 0xB);
    }
    arg0->unk39C = 0;
    if (arg0->unk3AE == 0) {
        if (gSaveContext.magicAcquired == 0) {
            arg0->unk3A8 = 0x12D;
        } else if (arg0->unk3B0 == 1) {
            arg0->unk3B0 = 0;
            arg0->unk3A8 = 0x122;
        } else {
            goto block_11;
        }
    } else {
block_11:
        arg0->unk3A8 = 0;
    }
    arg0->actionFunc = func_80A624DC;
}

void func_80A624DC(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    u8 sp2B;
    SkelAnime *sp20;
    SkelAnime *temp_a3;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;

    temp_v0 = arg0->unk3A8;
    if (temp_v0 == 0x12C) {
        sp2C = arg1->actorCtx.actorList[2].first;
        if (func_801378B8(arg0 + 0x148, arg0->unk158) != 0) {
            func_80A62128(arg0);
            return;
        }
        goto block_5;
    }
    if ((s32) temp_v0 < 0x12C) {
        arg0->unk3A8 = (s16) (temp_v0 + 1);
    }
block_5:
    temp_a3 = arg0 + 0x148;
    sp20 = temp_a3;
    sp2C = arg1->actorCtx.actorList[2].first;
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->unk39A = 0;
        arg0->unk1FC = 0;
        if ((gSaveContext.weekEventReg[10] & 1) != 0) {
            sp20 = temp_a3;
            sp2B = gSaveContext.playerForm;
            if (func_80A62B30(temp_a3, &D_80A63D58) == sp2B) {
                arg0->unk39C = 1;
                func_800BDC5C(temp_a3, (ActorAnimationEntry []) &D_80A63D58, 5);
                func_801518B0(arg1, 0x1D0CU, arg0);
                arg0->unk3A0 = 0x1D0C;
            } else {
                arg0->unk39C = 1;
                func_800BDC5C(temp_a3, (ActorAnimationEntry []) &D_80A63D58, 5);
                func_801518B0(arg1, 0x1D05U, arg0);
                arg0->unk3A0 = 0x1D05;
            }
            if (gSaveContext.magicAcquired == 0) {
                arg0->unk3B0 = 1;
            }
        } else {
            arg0->unk39C = 2;
            func_800BDC5C(temp_a3, (ActorAnimationEntry []) &D_80A63D58, 3);
            func_801518B0(arg1, 0x1D00U, arg0);
            arg0->unk3A0 = 0x1D00;
            if (arg0->unk3AE == 0) {
                arg0->unk3B0 = 1;
            }
        }
        func_80A62818(arg0);
        return;
    }
    if ((arg0->xzDistToPlayer < 100.0f) && (func_80A621C4 != arg0->unk18C)) {
        if (arg0->unk3A6 != 3) {
            arg0->unk39C = 1;
        } else {
            arg0->unk39C = 0;
        }
        if (((arg1->actorCtx.actorList[2].first->unkA6C << 8) >= 0) && ((arg1->actorCtx.actorList[2].first->bgCheckFlags & 0x20) == 0) && ((temp_v0_2 = arg0->unk3A8, (((s32) temp_v0_2 < 0x12C) != 0)) || (temp_v0_2 == 0x12D))) {
            sp20 = temp_a3;
            func_800B8614(arg0, arg1, 100.0f);
        }
    } else {
        arg0->unk39C = 0;
    }
    sp20 = arg0 + 0x148;
    if (func_801378B8(arg0 + 0x148, arg0->unk158) != 0) {
        temp_v0_3 = arg0->unk3A6;
        if (temp_v0_3 == 2) {
            arg0->unk39A = 0;
            arg0->unk1FC = 0;
            func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 0xA);
            arg0->unk3A6 = (s16) (arg0->unk3A6 + 1);
            return;
        }
        if (temp_v0_3 == 3) {
            sp20 = arg0 + 0x148;
            if ((Rand_Next() & 1) != 0) {
                arg0->unk39A = 0;
                arg0->unk1FC = 0;
                func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 5);
            } else {
                arg0->unk39A = 1;
                func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 0xB);
            }
            arg0->unk3A6 = 0;
            return;
        }
        arg0->unk3A6 = (s16) (temp_v0_3 + 1);
        return;
    }
    if ((arg0->unk3A6 == 3) && (func_801378B8(arg0 + 0x148, 20.0f) != 0)) {
        arg0->unk39A = 1;
    }
}

void func_80A62818(Actor *arg0) {
    arg0->unk3A8 = 0;
    arg0->unk18C = func_80A62830;
}

void func_80A62830(EnBal *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    u32 temp_v0_2;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_v0->unkA70 = (s32) (temp_v0->unkA70 | 0x100000);
    arg0->unk3B2 = 0;
    temp_v0_2 = func_80152498(arg1 + 0x4908);
    switch (temp_v0_2) {
    case 0:
    case 1:
    default:
block_15:
        break;
    case 2:
        goto block_15;
    case 3:
        if (arg0->unk3A0 != 0x1D10) {
            arg0->unk3B2 = 1;
            goto block_15;
        }
        break;
    case 4:
        func_80A62FAC(arg0, arg1);
        goto block_15;
    case 5:
        func_80A63158(arg0, arg1);
        goto block_15;
    case 6:
        if (func_80147624(arg1) != 0) {
            func_80A623CC(arg0);
        }
        goto block_15;
    case 10:
        if ((func_80147624(arg1) != 0) && (arg0->unk3A0 == 0x1D08)) {
            arg0->unk39A = 0;
            arg0->unk1FC = 0;
        }
        goto block_15;
    }
    if (arg0->unk3A0 == 0x1D07) {
        temp_f0 = arg0->unk148.animCurrentFrame;
        if ((temp_f0 > 29.0f) && (temp_f0 < 33.0f)) {
            if (func_801378B8(&arg0->unk148, 30.0f) != 0) {
                Audio_PlayActorSound2(&arg0->actor, 0x28A5U);
            }
            func_80A62B78(arg0, arg1);
        }
        if (func_801378B8(&arg0->unk148, 35.0f) != 0) {
            arg0->unk39A = 0;
            arg0->unk1FC = 0;
        }
    }
}

void func_80A629C4(EnBal *arg0) {
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f2;
    s32 temp_v0;
    f32 phi_f14;

    temp_v0 = arg0->actionFunc;
    if ((func_80A624DC != temp_v0) && (func_80A61B5C != temp_v0)) {
        temp_f2 = arg0->actor.floorHeight;
        temp_f0 = arg0->actor.home.pos.y - temp_f2;
        temp_f14 = (temp_f0 - (arg0->actor.world.pos.y - temp_f2)) / temp_f0;
        phi_f14 = temp_f14;
        if (temp_f14 < 0.0f) {
            phi_f14 = 0.0f;
        }
        arg0->actor.shape.shadowScale = 12.0f * phi_f14;
        arg0->actor.shape.shadowAlpha = (u8) (u32) (255.0f * phi_f14);
    }
}

void func_80A62AC4(void) {
    u8 temp_t8;
    u8 temp_v0;

    temp_v0 = gSaveContext.playerForm;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                if (temp_v0 == 4) {
                    temp_t8 = gSaveContext.weekEventReg[64] | 8;
                    gSaveContext.weekEventReg[64] = temp_t8;
                    gSaveContext.weekEventReg[64] = temp_t8 | 0x10;
                    return;
                }
                // Duplicate return node #7. Try simplifying control flow for better match
                return;
            }
            gSaveContext.weekEventReg[64] |= 8;
            return;
        }
        // Duplicate return node #7. Try simplifying control flow for better match
        return;
    }
    gSaveContext.weekEventReg[64] |= 0x10;
}

s32 func_80A62B30(void) {
    u8 temp_v0;

    temp_v0 = gSaveContext.weekEventReg[64];
    if ((temp_v0 & 8) != 0) {
        if ((temp_v0 & 0x10) != 0) {
            return 4;
        }
        return 3;
    }
    if ((temp_v0 & 0x10) != 0) {
        return 1;
    }
    return 2;
}

void func_80A62B78(EnBal *arg0, GlobalContext *arg1) {
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 *temp_s7;
    f32 temp_f6;
    s32 temp_s0;
    s32 phi_s0;

    temp_s7 = &sp58;
    temp_s7->unk0 = arg0->actor.world.pos.x;
    temp_s7->unk4 = (s32) arg0->actor.world.pos.y;
    temp_s7->unk8 = (s32) arg0->actor.world.pos.z;
    sp5C += 30.0f;
    sp58 += 20.0f * Math_SinS(arg0->actor.shape.rot.y);
    temp_f6 = 20.0f * Math_CosS(arg0->actor.shape.rot.y);
    D_80A63EC4 = -0.4f;
    D_80A63EB8 = 5.5f;
    sp60 += temp_f6;
    phi_s0 = 0;
    do {
        D_80A63EB4.x = Rand_Centered() * 3.0f;
        D_80A63EBC = Rand_Centered() * 3.0f;
        EffectSsKiraKira_SpawnDispersed(arg1, (Vec3f *) temp_s7, &D_80A63EB4, &D_80A63EC0, &D_80A63ECC, &D_80A63ED0, (s16) 0x9C4, 0x28);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x14);
}

void func_80A62CF0(Actor *arg0, GlobalContext *arg1) {
    f32 sp38;
    Vec3f sp34;

    sp34.x = arg0->world.pos.x;
    sp34.y = arg0->world.pos.y;
    sp34.z = arg0->world.pos.z;
    sp38 += 40.0f;
    D_80A63ED4.x = randPlusMinusPoint5Scaled(10.0f);
    D_80A63EDC = randPlusMinusPoint5Scaled(10.0f);
    D_80A63ED8 = Rand_ZeroFloat(5.0f);
    func_800B0EB0(arg1, &sp34, &D_80A63ED4, &D_80A63EE0, &D_80A63EEC, &D_80A63EF0, (s16) 0x96, (s16) 0x28, (s16) 0xF);
}

s32 func_80A62DCC(Actor *arg0, GlobalContext *arg1) {
    s16 temp_t1;
    u32 temp_t2;

    temp_t1 = *(&D_80A63D40 + ((arg0->unk3AE * 4) + (arg1->msgCtx.choiceIndex * 2)));
    temp_t2 = temp_t1 & 0xFFFF;
    arg0->unk3AC = temp_t1;
    switch (temp_t2) {
    case 0:
        if ((gSaveContext.weekEventReg[35] & 1) != 0) {
            return 1;
        }
    default:
        return 0;
    case 1:
        if ((gSaveContext.weekEventReg[35] & 2) != 0) {
            return 1;
        }
        // Duplicate return node #14. Try simplifying control flow for better match
        return 0;
    case 2:
        if ((gSaveContext.weekEventReg[35] & 4) != 0) {
            return 1;
        }
        // Duplicate return node #14. Try simplifying control flow for better match
        return 0;
    case 3:
        if ((gSaveContext.weekEventReg[35] & 8) != 0) {
            return 1;
        }
        // Duplicate return node #14. Try simplifying control flow for better match
        return 0;
    case 4:
        if ((gSaveContext.weekEventReg[35] & 0x10) != 0) {
            return 1;
        }
        // Duplicate return node #14. Try simplifying control flow for better match
        return 0;
    case 5:
        if ((gSaveContext.weekEventReg[35] & 0x20) != 0) {
            return 1;
        }
        // Duplicate return node #14. Try simplifying control flow for better match
        return 0;
    }
}

void func_80A62ED0(Actor *arg0) {
    u16 temp_t8;
    s8 phi_t0;

    func_8012EF0C(arg0->unk3AC);
    temp_t8 = (u16) arg0->unk3AC;
    switch (temp_t8) {
    case 0:
        phi_t0 = gSaveContext.weekEventReg[35] | 1;
block_8:
        gSaveContext.weekEventReg[35] = phi_t0;
    default:
        return;
    case 1:
        gSaveContext.weekEventReg[35] |= 2;
        return;
    case 2:
        gSaveContext.weekEventReg[35] |= 4;
        return;
    case 3:
        gSaveContext.weekEventReg[35] |= 8;
        return;
    case 4:
        gSaveContext.weekEventReg[35] |= 0x10;
        return;
    case 5:
        phi_t0 = gSaveContext.weekEventReg[35] | 0x20;
        goto block_8;
    }
}

void func_80A62FAC(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    s32 sp20;
    u8 temp_v1;
    s32 phi_v1;

    sp24 = arg1->actorCtx.actorList[2].first;
    if (func_80147624(arg1) != 0) {
        temp_v1 = arg1->msgCtx.choiceIndex;
        if (temp_v1 != 2) {
            if (temp_v1 == 0) {
                phi_v1 = arg1->msgCtx.unk1206C;
            } else {
                phi_v1 = arg1->msgCtx.unk12070;
            }
            if ((s32) gSaveContext.rupees < phi_v1) {
                play_sound(0x4806U);
                func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 5);
                func_801518B0(arg1, 0x1D0AU, arg0);
                arg0->unk3A0 = 0x1D0A;
                return;
            }
            sp20 = phi_v1;
            if (func_80A62DCC(arg0, arg1) != 0) {
                play_sound(0x4806U);
                func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 5);
                func_801518B0(arg1, 0x1D09U, arg0);
                arg0->unk3A0 = 0x1D09;
                return;
            }
            sp20 = phi_v1;
            func_8019F208();
            func_801159EC((s16) (phi_v1 * -1));
            func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 9);
            arg0->unk39A = 1;
            func_801518B0(arg1, 0x1D0BU, arg0);
            arg0->unk3A0 = 0x1D0B;
            func_80A62ED0(arg0);
            sp24->unkA6C = (s32) (sp24->unkA6C | 0x20);
            func_80A634B4(arg0);
            return;
        }
        func_8019F230();
        func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 5);
        func_801518B0(arg1, 0x1D06U, arg0);
        arg0->unk3A0 = 0x1D06;
        // Duplicate return node #11. Try simplifying control flow for better match
    }
}

void func_80A63158(Actor *arg0, GlobalContext *arg1) {
    s16 temp_t7;
    u16 temp_t3;

    if (((arg0->unk3A0 != 0x1D07) || (arg1 = arg1, (func_801378B8(arg0 + 0x148, arg0->unk158) != 0))) && (arg1 = arg1, (func_80147624(arg1) != 0))) {
        temp_t7 = arg0->unk3A0;
        switch (temp_t7) { // switch 1
        case 7424: // switch 1
            arg1 = arg1;
            func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 5);
            func_801518B0(arg1, 0x1D01U, arg0);
            arg0->unk3A0 = 0x1D01;
            return;
        case 7425: // switch 1
            arg0->unk39C = 1;
            func_801518B0(arg1, 0x1D02U, arg0);
            arg0->unk3A0 = 0x1D02;
            return;
        case 7426: // switch 1
            arg0->unk39A = 1;
            arg1 = arg1;
            func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 7);
            func_801518B0(arg1, 0x1D03U, arg0);
            arg0->unk3A0 = 0x1D03;
            return;
        case 7427: // switch 1
        case 7437: // switch 1
            arg0->unk39A = 0;
            arg0->unk1FC = 0;
            arg1 = arg1;
            func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 5);
            func_801518B0(arg1, 0x1D04U, arg0);
            arg0->unk3A0 = 0x1D04;
            return;
        case 7428: // switch 1
            temp_t3 = arg0->unk3AE;
            arg0->unk39C = 1;
            switch (temp_t3) { // switch 2
            case 0: // switch 2
                func_801518B0(arg1, 0x1D11U, arg0);
                arg0->unk3A0 = 0x1D11;
                return;
            case 1: // switch 2
                func_801518B0(arg1, 0x1D12U, arg0);
                arg0->unk3A0 = 0x1D12;
                return;
            case 2: // switch 2
                func_801518B0(arg1, 0x1D13U, arg0);
                arg0->unk3A0 = 0x1D13;
                return;
            case 3: // switch 2
                func_801518B0(arg1, 0x1D14U, arg0);
                arg0->unk3A0 = 0x1D14;
                return;
            case 4: // switch 2
                func_801518B0(arg1, 0x1D15U, arg0);
                arg0->unk3A0 = 0x1D15;
                return;
            case 5: // switch 2
                func_801518B0(arg1, 0x1D16U, arg0);
                arg0->unk3A0 = 0x1D16;
                return;
            default: // switch 2
                func_801518B0(arg1, 0x1D11U, arg0);
                arg0->unk3A0 = 0x1D11;
                return;
            }
            break;
        case 7429: // switch 1
        case 7436: // switch 1
            arg0->unk39C = 2;
            arg1 = arg1;
            func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 7);
            func_801518B0(arg1, 0x1D0DU, arg0);
            arg0->unk3A0 = 0x1D0D;
            return;
        case 7430: // switch 1
        case 7447: // switch 1
            arg0->unk39C = 0;
            arg1 = arg1;
            func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 6);
            arg0->unk39A = 1;
            func_801518B0(arg1, 0x1D07U, arg0);
            arg0->unk3A0 = 0x1D07;
            return;
        case 7431: // switch 1
            if ((gSaveContext.weekEventReg[10] & 1) != 0) {
                func_801477B4(arg1);
                func_80A623CC((EnBal *) arg0);
                return;
            }
            arg0->unk39A = 1;
            arg0->unk39C = 1;
            arg1 = arg1;
            func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 5);
            func_801518B0(arg1, 0x1D08U, arg0);
            arg0->unk3A0 = 0x1D08;
            gSaveContext.weekEventReg[10] |= 1;
            func_80A62AC4();
            return;
        case 7432: // switch 1
        case 7433: // switch 1
        case 7434: // switch 1
            func_801477B4(arg1);
            func_80A623CC((EnBal *) arg0);
            // Duplicate return node #24. Try simplifying control flow for better match
            return;
        }
    } else {
    default: // switch 1
    }
}

void func_80A634B4(Actor *arg0) {
    arg0->unk18C = func_80A634C8;
}

void func_80A634C8(Actor *arg0, GlobalContext *arg1) {
    u16 temp_t9;
    s32 phi_a2;

    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        func_801477B4(arg1);
        D_80A63EF4 = 1;
    }
    if ((D_80A63EF4 == 1) && (Actor_HasParent(arg0, arg1) != 0)) {
        arg0->parent = NULL;
        func_80A635DC(arg0);
        D_80A63EF4 = 0;
        return;
    }
    temp_t9 = arg0->unk3AC;
    switch (temp_t9) {
    case 0:
    default:
        phi_a2 = 0xB4;
        break;
    case 1:
        phi_a2 = 0xB5;
        break;
    case 2:
        phi_a2 = 0xB6;
        break;
    case 3:
        phi_a2 = 0xB7;
        break;
    case 4:
        phi_a2 = 0xB8;
        break;
    case 5:
        phi_a2 = 0xB9;
        break;
    }
    func_800B8A1C(arg0, arg1, phi_a2, 500.0f, 100.0f);
}

void func_80A635DC(Actor *arg0) {
    arg0->unk18C = func_80A635F0;
}

void func_80A635F0(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    sp24 = temp_v1;
    if (func_800B84D0(arg0, arg1) != 0) {
        temp_v1->unkA6C = (s32) (temp_v1->unkA6C & ~0x20);
        func_800BDC5C(arg0 + 0x148, (ActorAnimationEntry []) &D_80A63D58, 4);
        arg0->unk39A = 0;
        arg0->unk1FC = 0;
        func_801518B0(arg1, 0x1D17U, arg0);
        arg0->unk3A0 = 0x1D17;
        arg0->flags &= 0xFFFEFFFF;
        func_80A62818(arg0);
        return;
    }
    func_800B85E0(arg0, arg1, 200.0f, -1);
}

void func_80A636AC(Actor *arg0, GlobalContext *arg1) {
    Vec3f sp38;
    s16 temp_v0;
    s16 temp_v0_3;
    s32 temp_v0_2;
    void *temp_v1;

    temp_v0 = arg0->unk39C;
    if (temp_v0 == 1) {
        temp_v0_2 = arg0->unk150;
        if ((&D_0600D530 != temp_v0_2) && (&D_06000C78 != temp_v0_2)) {
            func_800E9250(arg1, arg0, arg0 + 0x38C, arg0 + 0x392, (Vec3f) arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z);
        } else {
            func_800E8F08(arg0 + 0x38C, arg0 + 0x392);
        }
        goto block_9;
    }
    if (temp_v0 == 2) {
        temp_v1 = arg1->actorCtx.actorList[2].first->unkA80;
        if (temp_v1 != 0) {
            sp38.x = temp_v1->unk24;
            sp38.y = temp_v1->unk28;
            sp38.z = temp_v1->unk2C;
            func_800E8FA4(arg0, &sp38, arg0 + 0x38C, arg0 + 0x392);
        }
    } else {
        func_800E8F08(arg0 + 0x38C, arg0 + 0x392);
block_9:
    }
    if (arg0->unk39A == 1) {
        arg0->unk1FC = 1;
        return;
    }
    temp_v0_3 = arg0->unk398;
    if ((s32) temp_v0_3 >= 4) {
        arg0->unk398 = (s16) (temp_v0_3 - 1);
        return;
    }
    if (temp_v0_3 != 0) {
        arg0->unk1FC = 1;
        arg0->unk398 = (s16) (temp_v0_3 - 1);
        return;
    }
    arg0->unk1FC = 0;
    arg0->unk398 = 0x3C;
}

void func_80A637FC(EnBal *arg0, GlobalContext *arg1) {
    Collider *temp_a2;
    s32 temp_v0;

    temp_v0 = arg0->actionFunc;
    if ((func_80A61B5C == temp_v0) || ((func_80A622A0 == temp_v0) && ((s32) arg0->unk3A8 >= 0x33))) {
        temp_a2 = arg0 + 0x190;
        arg0 = arg0;
        CollisionCheck_SetAC(arg1, arg1 + 0x18884, temp_a2);
    }
    CollisionCheck_SetOC(arg1, &arg1->colChkCtx, arg0 + 0x190);
}

void func_80A63884(Actor *arg0, GlobalContext *arg1) {
    if ((arg0->unk1A1 & 2) != 0) {
        Actor_Spawn(arg1 + 0x1CA0, arg1, 0xA2, arg0->world.pos.x, arg0->world.pos.y + 100.0f, arg0->world.pos.z, (s16) 0xFF, (s16) 0xFF, (s16) 0xC8, (s16) 2);
        arg0->unk1A1 = (u8) (arg0->unk1A1 & 0xFFFD);
        func_80A61C9C(arg0);
    }
}

void EnBal_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnBal *this = (EnBal *) thisx;
    this->actionFunc(this, globalCtx);
    func_80A63884(&this->actor, globalCtx);
    func_80A637FC(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->unk148);
    if (func_80A61B5C != this->actionFunc) {
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 32.0f, 30.0f, 60.0f, 6U);
    }
    func_80A636AC(&this->actor, globalCtx);
    if ((func_80A62830 == this->actionFunc) && (this->unk3A0 != 0x1D10)) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 5, 0x1000, (s16) 0x100);
        this->actor.world.rot.y = this->actor.shape.rot.y;
    }
    func_80A629C4(this);
}

s32 func_80A63A10(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    s16 sp28;
    s16 sp24;
    s16 temp_a2;
    s16 temp_v0;
    s32 temp_f18;

    if (arg1 == 6) {
        temp_v0 = arg5->unk3A4;
        if ((temp_v0 == 0) || (temp_v0 == 4) || (temp_v0 == 5)) {
            sp24 = (s16) (s32) (Math_SinS(arg5->unk3A8) * 3640.0f);
            temp_f18 = (s32) (Math_CosS(arg5->unk3A8) * 3640.0f);
            temp_a2 = (s16) temp_f18;
            sp28 = (s16) temp_f18;
            SysMatrix_InsertRotation(sp24, 0, temp_a2, 1);
            Matrix_Scale(arg5->unk1F0, arg5->unk1F4, arg5->unk1F8, 1);
            SysMatrix_InsertZRotation_s((s16) ((s32) sp28 * -1), 1);
            SysMatrix_InsertXRotation_s((s16) ((s32) sp24 * -1), 1);
        } else {
            *arg2 = NULL;
        }
    }
    if (arg1 == 0x16) {
        arg4->x += arg5->unk38E;
        arg4->y -= arg5->unk38C;
        if ((arg5->unk3B2 == 1) && ((arg0->state.frames & 2) == 0)) {
            SysMatrix_InsertTranslation(20.0f, 0.0f, 0.0f, 1);
        }
    }
    return 0;
}

void func_80A63B94(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Collider_UpdateSpheres(arg1, arg4 + 0x190);
    if (arg1 == 0x16) {
        SysMatrix_MultiplyVector3fByState(&D_80A63EF8, arg4 + 0x3C);
    }
}

void EnBal_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnBal *this = (EnBal *) thisx;
    GraphicsContext *sp30;
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    s32 temp_a0_2;

    temp_a0 = globalCtx->state.gfxCtx;
    sp30 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v1 = sp30->polyOpa.p;
    sp30->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDB060020;
    temp_a0_2 = *(&D_80A63F04 + (this->unk1FC * 4));
    temp_v1->words.w1 = (temp_a0_2 & 0xFFFFFF) + gSegments[(u32) (temp_a0_2 * 0x10) >> 0x1C] + 0x80000000;
    SkelAnime_DrawSV(globalCtx, this->unk148.skeleton, this->unk148.limbDrawTbl, (s32) this->unk148.dListCount, func_80A63A10, func_80A63B94, &this->actor);
}

