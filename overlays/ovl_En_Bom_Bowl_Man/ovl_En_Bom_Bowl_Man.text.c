typedef struct EnBomBowlMan {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x78];                 /* maybe part of unk_188[21]? */
    /* 0x206 */ Vec3s unk_206;                      /* inferred */
    /* 0x20C */ char pad_20C[0x78];                 /* maybe part of unk_206[21]? */
    /* 0x284 */ void (*actionFunc)(EnBomBowlMan *, GlobalContext *);
    /* 0x288 */ s16 unk_288;                        /* inferred */
    /* 0x28A */ s16 unk_28A;                        /* inferred */
    /* 0x28C */ char pad_28C[0x2];
    /* 0x28E */ s16 unk_28E;                        /* inferred */
    /* 0x290 */ s16 unk_290;                        /* inferred */
    /* 0x292 */ char pad_292[0x2];
    /* 0x294 */ Path *unk_294;                      /* inferred */
    /* 0x298 */ s16 unk_298;                        /* inferred */
    /* 0x29A */ s16 unk_29A;                        /* inferred */
    /* 0x29C */ s16 unk_29C;                        /* inferred */
    /* 0x29E */ char pad_29E[0x2];
    /* 0x2A0 */ Vec3f unk_2A0;                      /* inferred */
    /* 0x2AC */ char pad_2AC[0xC];
    /* 0x2B8 */ s16 unk_2B8;                        /* inferred */
    /* 0x2BA */ s16 unk_2BA;                        /* inferred */
    /* 0x2BC */ s16 unk_2BC;                        /* inferred */
    /* 0x2BE */ char pad_2BE[0x2];
    /* 0x2C0 */ u16 unk_2C0;                        /* inferred */
    /* 0x2C2 */ s16 unk_2C2;                        /* inferred */
    /* 0x2C4 */ f32 unk_2C4;                        /* inferred */
    /* 0x2C8 */ f32 unk_2C8;                        /* inferred */
    /* 0x2CC */ char pad_2CC[0x4];
    /* 0x2D0 */ s16 unk_2D0;                        /* inferred */
    /* 0x2D2 */ s16 unk_2D2;                        /* inferred */
    /* 0x2D4 */ s16 unk_2D4;                        /* inferred */
    /* 0x2D6 */ s16 unk_2D6;                        /* inferred */
    /* 0x2D8 */ s32 unk_2D8;                        /* inferred */
    /* 0x2DC */ char pad_2DC[0x14];                 /* maybe part of unk_2D8[6]? */
    /* 0x2F0 */ s16 unk_2F0;                        /* inferred */
    /* 0x2F2 */ s16 unk_2F2;                        /* inferred */
    /* 0x2F4 */ s16 unk_2F4;                        /* inferred */
    /* 0x2F6 */ s16 unk_2F6;                        /* inferred */
    /* 0x2F8 */ s32 unk_2F8;                        /* inferred */
} EnBomBowlMan;                                     /* size = 0x2FC */

struct _mips2c_stack_EnBomBowlMan_Destroy {};       /* size 0x0 */

struct _mips2c_stack_EnBomBowlMan_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_EnBomBowlMan_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnBomBowlMan_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809C493C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809C49CC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809C4B50 {};              /* size 0x0 */

struct _mips2c_stack_func_809C4B6C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809C4BC4 {
    /* 0x00 */ char pad_0[0x7C];
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ char pad_88[0x8];
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_809C4DA4 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ Actor *sp30;                         /* inferred */
    /* 0x34 */ Actor *sp34;                         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809C51B4 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Actor *sp1C;                         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809C52B4 {};              /* size 0x0 */

struct _mips2c_stack_func_809C5310 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809C53A4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809C5408 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ PosRot *sp28;                        /* inferred */
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ char pad_30[0x10];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809C5524 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809C5598 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809C5738 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ char pad_30[0x10];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809C59A4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809C59F0 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809C5AA4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809C5B1C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809C5BA0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809C5BF4 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
    /* 0x28 */ Camera *sp28;                        /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809C5F44 {};              /* size 0x0 */

? func_800E0308(Camera *, s32, Camera *);           /* extern */
void func_809C493C(Actor *arg0, s32 arg1, f32 arg2, Actor *); /* static */
void func_809C49CC(Actor *arg0);                    /* static */
void func_809C4B50(Actor *arg0);                    /* static */
void func_809C4B6C(Actor *arg0, EnBomBowlMan *);    /* static */
void func_809C4BC4(EnBomBowlMan *arg0, GlobalContext *arg1); /* static */
void func_809C52B4(EnBomBowlMan *arg0);             /* static */
void func_809C53A4(EnBomBowlMan *arg0);             /* static */
void func_809C5524(f32 arg0, EnBomBowlMan *arg1, GlobalContext *); /* static */
void func_809C59A4(EnBomBowlMan *arg0, GlobalContext *arg1); /* static */
void func_809C5BA0(EnBomBowlMan *arg0, GlobalContext *); /* static */
s32 func_809C5F44(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, s16 *arg4, Actor *arg5); /* static */
extern AnimationHeader D_060064B8;
extern FlexSkeletonHeader D_0600F82C;
static s32 D_809C6100 = 0;
static s32 D_809C6104 = 0;
static ? D_809C6128;                                /* unable to generate initializer */
static ? D_809C6178;                                /* unable to generate initializer */
static u16 D_809C618C[6] = {0x710, 0x711, 0x715, 0x716, 0x717, 0x718};
static u16 D_809C6198[4] = {0x74F, 0x750, 0x751, 0x752};
static Vec3f D_809C61A0[2] = {{-730.0f, 200.0f, -2350.0f}, {-690.0f, 200.0f, -2350.0f}};
static ? D_809C61B8;                                /* unable to generate initializer */
static ? D_809C61DC;                                /* unable to generate initializer */
static ? D_809C6200;                                /* unable to generate initializer */
static ? D_809C6214;                                /* unable to generate initializer */
static ? D_809C6220;                                /* unable to generate initializer */

void EnBomBowlMan_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    EnBomBowlMan *this = (EnBomBowlMan *) thisx;

    this->actor.colChkInfo.mass = 0xFF;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 19.0f);
    this->actor.gravity = -3.0f;
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_0600F82C, &D_060064B8, &this->unk_188, &this->unk_206, 0x15);
    temp_v0 = this->actor.params;
    this->unk_2F6 = ((s32) temp_v0 >> 4) & 0xF;
    this->unk_2F4 = temp_v0 & 0xF;
    this->actor.targetMode = 6;
    Actor_SetScale((Actor *) this, 0.01f);
    if (this->unk_2F6 == 0) {
        temp_v0_2 = this->unk_2F4;
        if (temp_v0_2 == 0) {
            func_809C4BC4(this, globalCtx);
            return;
        }
        this->unk_2F4 = temp_v0_2 - 1;
        func_809C5BA0(this, globalCtx);
        return;
    }
    this->unk_29A = ((s32) this->actor.params >> 8) & 0xFF;
    this->unk_294 = func_8013D648(globalCtx, this->unk_29A, 0x3F);
    this->unk_2C8 = 80.0f;
    if ((gSaveContext.entranceIndex == 0xD220) && ((gSaveContext.weekEventReg[73] & 0x80) != 0) && ((*(gBitFlags + 0x48) & gSaveContext.inventory.questItems) == 0)) {
        this->unk_2D6 = (s16) this->actor.cutscene;
        if (this->unk_2D6 == 0) {
            Actor_MarkForDeath((Actor *) this);
        }
        func_809C52B4(this);
        return;
    }
    Actor_MarkForDeath((Actor *) this);
}

void EnBomBowlMan_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBomBowlMan *this = (EnBomBowlMan *) thisx;

}

void func_809C493C(Actor *arg0, s32 arg1, f32 arg2) {
    f32 temp_f0;
    s32 temp_v1;

    arg0->unk_2F8 = arg1;
    temp_f0 = (f32) SkelAnime_GetFrameCount(*(&D_809C6128 + (arg1 * 4)));
    temp_v1 = arg0->unk_2F8;
    arg0->unk_2C4 = temp_f0;
    SkelAnime_ChangeAnim(arg0 + 0x144, *(&D_809C6128 + (temp_v1 * 4)), arg2, 0.0f, temp_f0, (u8) (s32) *(&D_809C6178 + temp_v1), -4.0f);
}

void func_809C49CC(Actor *arg0) {
    Actor *temp_s0_2;
    Actor *temp_s0_3;
    SkelAnime *temp_s0;

    temp_s0 = arg0 + 0x144;
    if ((arg0->unk_2F8 == 5) && ((func_801378B8(temp_s0, 9.0f) != 0) || (func_801378B8(temp_s0, 10.0f) != 0) || (func_801378B8(temp_s0, 17.0f) != 0) || (func_801378B8(temp_s0, 18.0f) != 0))) {
        Audio_PlayActorSound2(arg0, 0x292CU);
    }
    temp_s0_2 = arg0 + 0x144;
    if ((arg0->unk_2F8 == 0xB) && ((func_801378B8((SkelAnime *) temp_s0_2, 4.0f) != 0) || (func_801378B8((SkelAnime *) temp_s0_2, 8.0f) != 0) || (func_801378B8((SkelAnime *) temp_s0_2, 12.0f) != 0))) {
        Audio_PlayActorSound2(arg0, 0x292CU);
    }
    temp_s0_3 = arg0 + 0x144;
    if ((arg0->unk_2F8 == 0x12) && ((func_801378B8((SkelAnime *) temp_s0_3, 0.0f) != 0) || (func_801378B8((SkelAnime *) temp_s0_3, 2.0f) != 0) || (func_801378B8((SkelAnime *) temp_s0_3, 4.0f) != 0) || (func_801378B8((SkelAnime *) temp_s0_3, 6.0f) != 0))) {
        Audio_PlayActorSound2(arg0, 0x292CU);
    }
    if ((arg0->unk_2F8 == 0xF) && (func_801378B8((SkelAnime *) (arg0 + 0x144), 15.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x292DU);
    }
    if ((arg0->unk_2F8 == 6) && (func_801378B8((SkelAnime *) (arg0 + 0x144), 8.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x292DU);
    }
}

void func_809C4B50(Actor *arg0) {
    arg0->unk_2B8 = 0;
    arg0->unk_2BC = 0;
    arg0->unk_2BA = 0;
    arg0->unk_29E = 0;
    arg0->unk_290 = 0;
}

void func_809C4B6C(Actor *arg0) {
    Path *temp_a0;
    s16 temp_a1;
    void *temp_a2;

    if (arg0->unk_29A != -1) {
        temp_a0 = arg0->unk_294;
        temp_a2 = arg0 + 0x2A0;
        if (temp_a0 != 0) {
            temp_a1 = arg0->unk_298;
            arg0 = arg0;
            if (func_8013D68C(temp_a0, temp_a1, temp_a2) == 0) {
                Actor_MarkForDeath(arg0);
            }
        }
    }
}

void func_809C4BC4(Actor *arg0, GlobalContext *arg1) {
    f32 sp7C;
    Actor *temp_v0;
    Vec3f *temp_s1;
    s16 temp_v0_2;
    s8 temp_s0;
    SaveContext *phi_s4;
    Vec3f *phi_s1;

    func_809C4B50(arg0);
    func_809C493C(arg0, 0, 1.0f);
    phi_s4 = &gSaveContext;
    phi_s1 = D_809C61A0;
    do {
        Math_Vec3f_Copy((Vec3f *) &sp7C, arg0 + 8);
        temp_s0 = phi_s4->bomberCode[0];
        if (temp_s0 == 1) {
            Math_Vec3f_Copy(arg0 + 0x24, phi_s1);
            (arg0 + (temp_s0 * 4))->unk_2D8 = arg0;
        } else {
            Math_Vec3f_Copy((Vec3f *) &sp7C, phi_s1);
            temp_v0 = Actor_SpawnAsChild(arg1 + 0x1CA0, arg0, arg1, 0x11C, sp7C, sp80, sp84, (s16) 0, (s16) (s32) arg0->world.rot.y, (s16) 0, (s32) temp_s0);
            if (temp_v0 != 0) {
                if (phi_s1 == &D_809C61B8) {
                    arg0->unk_2D8 = temp_v0;
                }
                (arg0 + (temp_s0 * 4))->unk_2D8 = temp_v0;
            }
        }
        temp_s1 = phi_s1 + 0xC;
        phi_s4 += 1;
        phi_s1 = temp_s1;
    } while (temp_s1 != &D_809C61DC);
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
        ActorCutscene_SetIntentToPlay(arg0->unk_2D0);
    } else if (ActorCutscene_GetCanPlayNext(arg0->unk_2D0) == 0) {
        ActorCutscene_SetIntentToPlay(arg0->unk_2D0);
    }
    func_809C493C(arg0, 3, 1.0f);
    temp_v0_2 = arg0->yawTowardsPlayer;
    arg0->unk_2D4 = temp_v0_2;
    arg0->unk_290 = temp_v0_2;
    gSaveContext.weekEventReg[73] &= 0xEF;
    gSaveContext.weekEventReg[85] &= 0xFD;
    arg0->unk_29C = 0;
    arg0->unk_284 = func_809C4DA4;
}

void func_809C4DA4(EnBomBowlMan *this, GlobalContext *globalCtx) {
    Actor *sp34;
    Actor *sp30;
    s32 sp28;
    s16 temp_v0;
    s16 temp_v1;
    u16 temp_t4;

    Math_SmoothStepToS(&this->unk_290, this->unk_2D4, 1, 0x1388, (s16) 0);
    if (this->unk_2B8 == 0) {
        sp34 = globalCtx->actorCtx.actorList[2].first;
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay(this->unk_2D0);
            return;
        }
        if (ActorCutscene_GetCanPlayNext(this->unk_2D0) == 0) {
            ActorCutscene_SetIntentToPlay(this->unk_2D0);
            return;
        }
        ActorCutscene_StartAndSetUnkLinkFields(this->unk_2D0, (Actor *) this);
        temp_v1 = this->actor.yawTowardsPlayer;
        this->unk_2B8 = 1;
        this->unk_2C0 = 0;
        this->unk_2D4 = temp_v1;
        this->unk_290 = temp_v1;
        if (sp34->unk_14B == 4) {
            func_801518B0(globalCtx, *D_809C618C, (Actor *) this);
        } else {
            func_801518B0(globalCtx, *D_809C6198, (Actor *) this);
        }
        goto block_8;
    }
block_8:
    if ((this->unk_2BC == 0) && (func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        sp28 = 0;
        sp30 = globalCtx->actorCtx.actorList[2].first;
        func_801477B4(globalCtx);
        temp_t4 = this->unk_2C0;
        switch (temp_t4) {
        case 0:
            this->unk_2C0 = 1;
            D_809C6104 = (s32) 1U;
            func_800E0308(Play_GetCamera(globalCtx, ActorCutscene_GetCurrentCamera(this->unk_2D0)), this->unk_2D8);
            this->unk_2D4 = 0;
            this->unk_2BC = 0xA;
            func_809C493C((Actor *) this, 0x11, 1.0f);
        default:
block_31:
            if (sp28 == 0) {
                temp_v0 = (s16) this->unk_2C0;
                if (sp30->unk_14B == 4) {
                    func_80151938(globalCtx, *(D_809C618C + (temp_v0 * 2)));
                    return;
                }
                func_80151938(globalCtx, *(D_809C6198 + (temp_v0 * 2)));
                /* Duplicate return node #35. Try simplifying control flow for better match */
                return;
            }
            /* Duplicate return node #35. Try simplifying control flow for better match */
            return;
        case 1:
            D_809C6104 = 0;
            func_809C493C((Actor *) this, 3, 1.0f);
            this->unk_2C0 = 2;
            this->unk_2D4 = this->actor.yawTowardsPlayer;
            if ((sp30->unk_14B == 4) && ((*(gBitFlags + 0x48) & gSaveContext.inventory.questItems) != 0)) {
                this->unk_2C0 = 4;
            }
            goto block_31;
        case 2:
            if (sp30->unk_14B == 4) {
                this->unk_2B8 = 2;
                ActorCutscene_Stop(this->unk_2D0);
                func_809C59A4(this, globalCtx);
                sp28 = 1;
            } else {
                this->unk_2C0 = 3;
                globalCtx->msgCtx.unk11F10 = 0;
                func_809C493C((Actor *) this, 1, 1.0f);
                D_809C6100 = 1;
                if (ActorCutscene_GetCurrentIndex() == 0x7C) {
                    ActorCutscene_Stop(0x7C);
                    ActorCutscene_SetIntentToPlay(this->unk_2D2);
                } else if (ActorCutscene_GetCanPlayNext(this->unk_2D2) == 0) {
                    ActorCutscene_SetIntentToPlay(this->unk_2D2);
                }
                ActorCutscene_Stop(this->unk_2D0);
                this->actionFunc = func_809C5B1C;
                sp28 = 1;
            }
            goto block_31;
        case 3:
            if (sp30->unk_14B == 4) {
                this->unk_2C0 = 4;
                goto block_31;
            }
            this->actionFunc = func_809C51B4;
            return;
        case 4:
            if (this->unk_2B8 != 2) {
                ActorCutscene_Stop(this->unk_2D0);
            }
            globalCtx->msgCtx.unk11F10 = 0;
            func_809C493C((Actor *) this, 1, 1.0f);
            D_809C6100 = 1;
            this->actionFunc = func_809C5B1C;
            sp28 = 1;
            goto block_31;
        case 5:
            func_80151BB4(globalCtx, 0x24U);
            func_80151BB4(globalCtx, 0x25U);
            func_80151BB4(globalCtx, 0U);
            this->actionFunc = func_809C51B4;
            sp28 = 1;
            goto block_31;
        }
    }
}

void func_809C51B4(EnBomBowlMan *this, GlobalContext *globalCtx) {
    Actor *sp1C;

    sp1C = globalCtx->actorCtx.actorList[2].first;
    if ((globalCtx->msgCtx.unk120B1 == 0) && ((globalCtx->msgCtx.unk11F22 == 0) || (func_80152498(&globalCtx->msgCtx) == 6))) {
        globalCtx = globalCtx;
        globalCtx->nextEntranceIndex = Entrance_CreateIndexFromSpawn(6);
        gSaveContext.nextCutsceneIndex = 0;
        globalCtx->sceneLoadFlag = 0x14;
        globalCtx->unk_1887F = 0x56;
        gSaveContext.nextTransition = 3;
        gSaveContext.weekEventReg[75] &= 0xBF;
        if (sp1C->unk_14B == 4) {
            gSaveContext.weekEventReg[84] |= 0x80;
            gSaveContext.weekEventReg[77] &= 0xFD;
            return;
        }
        gSaveContext.weekEventReg[73] |= 0x20;
        gSaveContext.weekEventReg[85] &= 0xFE;
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_809C52B4(EnBomBowlMan *arg0) {
    s32 temp_t7;
    s32 temp_t9;

    arg0->actor.draw = NULL;
    temp_t7 = arg0->actor.flags | 0x10;
    temp_t9 = temp_t7 | 0x8000000;
    arg0->actor.flags = temp_t7;
    arg0->actor.flags = temp_t9;
    arg0->actor.flags = temp_t9 & ~1;
    arg0->actor.world.pos.x = 1340.0f;
    arg0->unk_29C = 3;
    arg0->actionFunc = func_809C5310;
    arg0->actor.world.pos.z = -1795.0f;
}

void func_809C5310(EnBomBowlMan *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    EnBomBowlMan *temp_a1;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    if (temp_v0->world.pos.x < 1510.0f) {
        if (temp_v0->unk_14B != 3) {
            temp_a1 = this;
            if (this->actor.xzDistToPlayer < this->unk_2C8) {
                this = this;
                func_800B7298(globalCtx, (Actor *) temp_a1, 7U);
                func_809C53A4(this);
                return;
            }
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return;
        }
        Actor_MarkForDeath((Actor *) this);
        /* Duplicate return node #5. Try simplifying control flow for better match */
    }
}

void func_809C53A4(EnBomBowlMan *arg0) {
    arg0->actor.draw = EnBomBowlMan_Draw;
    arg0->actor.world.pos.x = 1360.0f;
    arg0->actor.world.pos.z = -1870.0f;
    func_809C493C((Actor *)0x12, 0x3F800000);
    arg0->unk_29C = 3;
    arg0->actionFunc = func_809C5408;
}

void func_809C5408(EnBomBowlMan *this, GlobalContext *globalCtx) {
    PosRot *sp2C;
    PosRot *sp28;
    Actor *temp_s0;
    PosRot *temp_a0;
    PosRot *temp_a1;
    f32 temp_f12;
    f32 temp_f2;

    temp_a0 = &this->actor.world;
    temp_s0 = globalCtx->actorCtx.actorList[2].first;
    sp2C = temp_a0;
    temp_a1 = &temp_s0->world;
    sp28 = temp_a1;
    Math_SmoothStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw((Vec3f *) temp_a0, (Vec3f *) temp_a1), 1, 0x1388, (s16) 0);
    Math_SmoothStepToS(&temp_s0->shape.rot.y, Math_Vec3f_Yaw((Vec3f *) sp28, (Vec3f *) sp2C), 1, 0x1388, (s16) 0);
    temp_s0->world.rot.y = temp_s0->shape.rot.y;
    Math_ApproachF((f32 *) temp_a0, 1350.0f, 0.3f, 2.0f);
    Math_ApproachF(&this->actor.world.pos.z, -1800.0f, 0.3f, 2.0f);
    temp_f2 = this->actor.world.pos.x - 1350.0f;
    temp_f12 = this->actor.world.pos.z + 1800.0f;
    if (sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < 4.0f) {
        func_809C5524(temp_f12, this, globalCtx);
    }
}

void func_809C5524(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->textId = 0x730;
    temp_a0 = temp_a3;
    if ((gSaveContext.weekEventReg[85] & 2) == 0) {
        temp_a3->textId = 0x72F;
    }
    arg0 = temp_a3;
    func_809C493C(temp_a0, 3, 1.0f, temp_a3);
    func_801518B0(arg1, arg0->textId, arg0);
    arg0->unk_284 = func_809C5598;
}

void func_809C5598(EnBomBowlMan *this, GlobalContext *globalCtx) {
    u16 temp_a1;
    u16 phi_a1;

    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        func_801477B4(globalCtx);
        temp_a1 = this->actor.textId;
        phi_a1 = temp_a1;
        if ((temp_a1 == 0x72F) || (temp_a1 == 0x730)) {
            this->actor.textId = 0x731;
            phi_a1 = 0x731U & 0xFFFF;
            goto block_19;
        }
        if (temp_a1 == 0x731) {
            this->actor.textId = 0x732;
            phi_a1 = 0x732U & 0xFFFF;
            goto block_19;
        }
        if (temp_a1 == 0x732) {
            this->actor.textId = 0x733;
            phi_a1 = 0x733U & 0xFFFF;
            goto block_19;
        }
        if (temp_a1 == 0x733) {
            this->actor.textId = 0x734;
            phi_a1 = 0x734U & 0xFFFF;
            goto block_19;
        }
        if (temp_a1 == 0x734) {
            this->actor.textId = 0x715;
            phi_a1 = 0x715U & 0xFFFF;
            goto block_19;
        }
        if (temp_a1 == 0x715) {
            func_800B7298(globalCtx, (Actor *) this, 6U);
            func_809C493C((Actor *) this, 0x11, 1.0f);
            func_809C59A4(this, globalCtx);
            return;
        }
        if (temp_a1 == 0x716) {
            this->actor.textId = 0x735;
            phi_a1 = 0x735U & 0xFFFF;
            goto block_19;
        }
        if (temp_a1 == 0x735) {
            this->unk_2C2 = 0;
            func_809C493C((Actor *) this, 0x11, 1.0f);
            func_80151BB4(globalCtx, 0x24U);
            func_80151BB4(globalCtx, 0x25U);
            func_80151BB4(globalCtx, 0U);
            func_800B7298(globalCtx, (Actor *) this, 7U);
            this->actionFunc = func_809C5738;
            return;
        }
block_19:
        func_80151938(globalCtx, phi_a1);
        /* Duplicate return node #20. Try simplifying control flow for better match */
    }
}

void func_809C5738(EnBomBowlMan *this, GlobalContext *globalCtx) {
    PosRot *sp2C;
    Path *temp_v0;
    PosRot *temp_a0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v1;

    temp_a0 = &this->actor.world;
    sp2C = temp_a0;
    temp_v1 = this->unk_2C2;
    if (temp_v1 == 0) {
        if ((globalCtx->msgCtx.unk120B1 == 0) && ((globalCtx->msgCtx.unk11F22 == 0) || (func_80152498(&globalCtx->msgCtx) == 6))) {
            this->unk_2C2 = 1;
            func_809C4B6C((Actor *) this);
            if (ActorCutscene_GetCurrentIndex() == 0x7C) {
                ActorCutscene_Stop(0x7C);
                ActorCutscene_SetIntentToPlay(this->unk_2D6);
                return;
            }
            if (ActorCutscene_GetCanPlayNext(this->unk_2D6) == 0) {
                ActorCutscene_SetIntentToPlay(this->unk_2D6);
                return;
            }
            ActorCutscene_StartAndSetUnkLinkFields(this->unk_2D6, (Actor *) this);
            this->unk_2C2 = 2;
            func_809C493C((Actor *) this, 0x12, 1.0f);
            return;
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return;
    }
    if (temp_v1 == 1) {
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
            ActorCutscene_SetIntentToPlay(this->unk_2D6);
            return;
        }
        if (ActorCutscene_GetCanPlayNext(this->unk_2D6) == 0) {
            ActorCutscene_SetIntentToPlay(this->unk_2D6);
            return;
        }
        ActorCutscene_StartAndSetUnkLinkFields(this->unk_2D6, (Actor *) this);
        this->unk_2C2 = 2;
        func_809C493C((Actor *) this, 0x12, 1.0f);
        return;
    }
    Math_SmoothStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw((Vec3f *) temp_a0, &this->unk_2A0), 1, 0x7D0, (s16) 0xA);
    Math_ApproachF((f32 *) sp2C, this->unk_2A0.x, 0.5f, 6.0f);
    Math_ApproachF(&this->actor.world.pos.z, this->unk_2A0.z, 0.5f, 6.0f);
    temp_f2 = this->actor.world.pos.x - this->unk_2A0.x;
    temp_f12 = this->actor.world.pos.z - this->unk_2A0.z;
    if ((sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) < 4.0f) && (temp_v0 = this->unk_294, (temp_v0 != 0))) {
        this->unk_298 += 1;
        if ((s32) this->unk_298 >= (s32) temp_v0->count) {
            gSaveContext.weekEventReg[84] |= 0x80;
            gSaveContext.weekEventReg[83] &= 0xFB;
            ActorCutscene_Stop(this->unk_2D6);
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        func_809C4B6C((bitwise Actor *) temp_f12, this);
        /* Duplicate return node #20. Try simplifying control flow for better match */
    }
}

void func_809C59A4(Actor *arg0, GlobalContext *arg1) {
    func_800B8A1C(arg0, arg1, 0x50, 300.0f, 300.0f);
    arg0->unk_29C = 1;
    arg0->unk_284 = func_809C59F0;
}

void func_809C59F0(EnBomBowlMan *this, GlobalContext *globalCtx) {
    EnBomBowlMan *temp_a0;

    temp_a0 = this;
    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        temp_a0->actor.parent = NULL;
        if (temp_a0->unk_2F6 == 0) {
            temp_a0->unk_2C0 = 3;
            temp_a0->actor.textId = D_809C618C[(s16) temp_a0->unk_2C0];
        } else {
            temp_a0->actor.textId = 0x716;
        }
        this = temp_a0;
        func_800B8500((Actor *) temp_a0, globalCtx, 400.0f, 400.0f, -1);
        this->actionFunc = func_809C5AA4;
        return;
    }
    func_800B8A1C((Actor *) temp_a0, globalCtx, 0x50, 300.0f, 300.0f);
}

void func_809C5AA4(EnBomBowlMan *this, GlobalContext *globalCtx) {
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        if (this->unk_2F6 == 0) {
            this->actionFunc = func_809C4DA4;
            return;
        }
        this->actionFunc = func_809C5598;
        return;
    }
    func_800B8500((Actor *) this, globalCtx, 400.0f, 400.0f, -1);
}

void func_809C5B1C(EnBomBowlMan *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
        ActorCutscene_SetIntentToPlay(this->unk_2D2);
        return;
    }
    if (ActorCutscene_GetCanPlayNext(this->unk_2D2) == 0) {
        ActorCutscene_SetIntentToPlay(this->unk_2D2);
        return;
    }
    ActorCutscene_StartAndSetUnkLinkFields(this->unk_2D2, (Actor *) this);
    func_809C5BA0(this);
}

void func_809C5BA0(EnBomBowlMan *arg0) {
    if (arg0->unk_2F4 != 0) {
        func_809C493C(NULL, 0x3F800000);
    } else {
        arg0->unk_2F8 = 0;
    }
    arg0->unk_29C = 2;
    arg0->actionFunc = func_809C5BF4;
}

void func_809C5BF4(EnBomBowlMan *this, GlobalContext *globalCtx) {
    f32 sp2C;
    Camera *sp28;
    Actor *sp24;
    Camera *temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    sp2C = this->unk_144.animCurrentFrame;
    if ((D_809C6104 != 0) && (this->unk_2F8 != 0xF)) {
        func_809C493C((Actor *) this, 0xF, 1.0f);
    }
    if ((this->unk_2F8 == 0xF) && (this->unk_2C4 <= sp2C)) {
        func_809C493C((Actor *) this, 0, 1.0f);
    }
    temp_v1 = D_809C6100;
    if (temp_v1 != 0) {
        if ((this->unk_2F8 == 0) && (temp_v1 == (this->unk_2F4 + 1))) {
            func_809C493C((Actor *) this, 0xB, 1.0f);
        }
        if ((this->unk_2F8 == 0xB) && (this->unk_2C4 <= sp2C)) {
            func_809C493C((Actor *) this, 0xC, 1.0f);
            D_809C6100 += 1;
        }
        if (this->unk_2F4 == 0) {
            temp_v0 = Play_GetCamera(globalCtx, ActorCutscene_GetCurrentCamera(this->unk_2D2));
            temp_v1_2 = D_809C6100;
            if (temp_v1_2 >= 6) {
                sp28 = temp_v0;
                sp24 = globalCtx->actorCtx.actorList[2].first;
                func_801477B4(globalCtx);
                func_800E0308(sp28, this->unk_2D8);
                func_809C493C((Actor *) this, 0xD, 1.0f);
                D_809C6100 = 0;
                if (sp24->unk_14B == 4) {
                    this->unk_2C0 = 5;
                    func_801518B0(globalCtx, D_809C618C[(s16) this->unk_2C0], (Actor *) this);
                } else {
                    this->unk_2C0 = 3;
                    func_801518B0(globalCtx, D_809C6198[(s16) this->unk_2C0], (Actor *) this);
                }
                this->unk_29C = 0;
                this->actionFunc = func_809C4DA4;
                return;
            }
            func_800E0308(temp_v0, (this + ((temp_v1_2 - 1) * 4))->unk_2DC, temp_v0);
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
    }
}

void EnBomBowlMan_Update(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v0_2;
    EnBomBowlMan *this = (EnBomBowlMan *) thisx;

    temp_v0 = this->unk_2BA;
    if (temp_v0 != 0) {
        this->unk_2BA = temp_v0 - 1;
    }
    temp_v0_2 = this->unk_2BC;
    if (temp_v0_2 != 0) {
        this->unk_2BC = temp_v0_2 - 1;
    }
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    this->actor.shape.rot.y = this->actor.world.rot.y;
    func_809C49CC((Actor *) this);
    Actor_SetHeight((Actor *) this, 20.0f);
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Math_SmoothStepToS(&this->unk_28A, this->unk_290, 1, 0x1388, (s16) 0);
    Math_SmoothStepToS(&this->unk_288, this->unk_28E, 1, 0x3E8, (s16) 0);
    if (this->unk_2F2 == 0) {
        this->unk_2F0 += 1;
        if ((s32) this->unk_2F0 >= 3) {
            this->unk_2F0 = 0;
            this->unk_2F2 = (s32) Rand_ZeroFloat(60.0f) + 0x14;
        }
    }
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 50.0f, 0x1DU);
}

s32 func_809C5F44(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, s16 *arg4, Actor *arg5) {
    if (arg1 == 0xF) {
        *arg2 = NULL;
    }
    if (arg1 == 0x11) {
        *arg4 += arg5->unk_28A;
    }
    if ((arg1 == 0x13) && (arg5->unk_2F6 == 2)) {
        *arg2 = NULL;
    }
    if ((arg1 == 0x14) && (arg5->unk_2F6 == 0)) {
        *arg2 = NULL;
    }
    return 0;
}

void EnBomBowlMan_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp38;
    Gfx *sp34;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    EnBomBowlMan *this = (EnBomBowlMan *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp38 = temp_v0;
    sp38->words.w1 = Lib_SegmentedToVirtual(*(&D_809C6214 + (this->unk_2F0 * 4)));
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    sp34 = temp_v0_2;
    sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_809C6220 + (this->unk_2F4 * 4)));
    temp_v0_3 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060028;
    sp30 = temp_v0_3;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_809C6200 + (this->unk_2F4 * 4)));
    Scene_SetRenderModeXlu(globalCtx, 0, 1U);
    SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, (s32 (*)(GlobalContext *, s32, Gfx **, Vec3f *, Vec3s *, Actor *)) func_809C5F44, NULL, (Actor *) this);
}
