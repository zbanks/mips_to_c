s32 func_80122F9C(GlobalContext *, Actor *, Actor *); /* extern */
s32 func_80122FCC(GlobalContext *, Actor *, Actor *); /* extern */
s32 func_80124190(Actor *, Actor *, GlobalContext *); /* extern */
void func_80B26538(EnKendoJs *arg0);                /* static */
void func_80B2654C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B26758(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B269A4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B26AE8(Actor *arg0);                    /* static */
void func_80B26AFC(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B26BF8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B26EB4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B26F14(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B26F6C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B2701C(Actor *arg0);                    /* static */
void func_80B27030(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B2714C(Actor *arg0);                    /* static */
void func_80B27188(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B273D0(Actor *arg0);                    /* static */
void func_80B2740C(void *arg0, GlobalContext *arg1); /* static */
void func_80B274BC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B276C4(Actor *arg0);                    /* static */
void func_80B276D8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B27760(Actor *arg0, GlobalContext *);   /* static */
void func_80B27774(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B2783C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B27880(EnKendoJs *arg0, GlobalContext *arg1); /* static */
s32 func_80B278C4(GlobalContext *arg0, s32 arg1, f32 arg2, f32 arg3); /* static */
void func_80B279AC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B279F0(Actor *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_80B27A90(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B27B54(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80B27B8C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *actor); /* static */
extern ? D_0600016C;
extern ? D_060003DC;
extern AnimationHeader D_06000F4C;
extern FlexSkeletonHeader D_06006990;
static ColliderCylinderInit D_80B27C30 = {
    {0xA, 0, 0, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1},
    {0x12, 0x1E, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80B27C5C = {0, 0, 0, 0, 0xFF};
static ActorAnimationEntry D_80B27C68 = {
    {(AnimationHeader *)0x6000C7C, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x6000F4C, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x600016C, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x60003DC, 1.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x6000AD4, 1.0f, 0.0f, 0.0f, 0, -8.0f},
};
static ? D_80B27CE0;                                /* unable to generate initializer */
static ? D_80B27CF4;                                /* unable to generate initializer */
static ? D_80B27D00;                                /* unable to generate initializer */
static ? D_80B27D10;                                /* unable to generate initializer */

typedef struct EnKendoJs {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderCylinder unk144;           /* inferred */
    /* 0x0190 */ SkelAnime unk190;                  /* inferred */
    /* 0x01D4 */ void (*actionFunc)(EnKendoJs *, GlobalContext *);
    /* 0x01D8 */ Vec3s unk1D8;                      /* inferred */
    /* 0x01DE */ char pad1DE[0x48];                 /* maybe part of unk1D8[13]? */
    /* 0x0226 */ Vec3s unk226;                      /* inferred */
    /* 0x022C */ char pad22C[0x48];                 /* maybe part of unk226[13]? */
    /* 0x0274 */ void *unk274;                      /* inferred */
    /* 0x0278 */ Vec3s unk278;                      /* inferred */
    /* 0x027E */ Vec3s unk27E;                      /* inferred */
    /* 0x0284 */ char pad284[0x2];
    /* 0x0286 */ s16 unk286;                        /* inferred */
    /* 0x0288 */ char pad288[0x2];                  /* maybe part of unk286[2]? */
    /* 0x028A */ s16 unk28A;                        /* inferred */
    /* 0x028C */ s16 unk28C;                        /* inferred */
    /* 0x028E */ s16 unk28E;                        /* inferred */
    /* 0x0290 */ char pad290[0x4];                  /* maybe part of unk28E[3]? */
} EnKendoJs;                                        /* size 0x294 */

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

void EnKendoJs_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnKendoJs *this = (EnKendoJs *) thisx;
    ColliderCylinder *sp3C;
    SkelAnime *sp38;
    ColliderCylinder *temp_a1;
    SkelAnime *temp_a1_2;
    s16 temp_v1;
    u16 temp_v0;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 36.0f);
    temp_a1 = &this->unk144;
    sp3C = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &D_80B27C30);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80B27C5C);
    temp_a1_2 = &this->unk190;
    sp38 = temp_a1_2;
    SkelAnime_InitSV(globalCtx, temp_a1_2, &D_06006990, &D_06000F4C, &this->unk1D8, &this->unk226, 0xD);
    if ((((s32) gSaveContext.day % 5) == 3) && ((temp_v0 = gSaveContext.time, (((s32) temp_v0 < 0xF556) == 0)) || ((s32) temp_v0 < 0x4000))) {
        if ((this->actor.params & 0xFF) != 1) {
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0xA8, this->actor.home.pos.x, this->actor.home.pos.y, this->actor.home.pos.z - 10.0f, (s16) (s32) this->actor.home.rot.x, (s16) (s32) this->actor.home.rot.y, (s16) (s32) this->actor.home.rot.z, (s16) 0x10);
            Actor_MarkForDeath(&this->actor);
        } else {
            func_800BDC5C(sp38, (ActorAnimationEntry []) &D_80B27C68, 4);
        }
    } else if ((this->actor.params & 0xFF) == 1) {
        Actor_MarkForDeath(&this->actor);
    }
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 4U);
    temp_v1 = this->actor.params;
    if ((temp_v1 & 0xFF) != 1) {
        this->unk274 = Lib_SegmentedToVirtual((void *) globalCtx->setupPathList[(s32) (temp_v1 & 0xFF00) >> 8].points);
    }
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->actor.flags &= -2;
    this->actor.child = NULL;
    this->unk28A = 0;
    this->actor.focus.pos.y += 30.0f;
    this->unk28C = 0;
    this->unk28E = 0;
    this->unk286 = 0;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    func_80B26538(this);
}

void EnKendoJs_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnKendoJs *this = (EnKendoJs *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk144);
    gSaveContext.weekEventReg[82] &= 0xF7;
}

void func_80B26538(EnKendoJs *arg0) {
    arg0->actionFunc = func_80B2654C;
}

void func_80B2654C(Actor *arg0, GlobalContext *arg1) {
    s32 sp30;
    u16 sp2E;
    u16 *sp24;
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    GlobalContext *temp_a0_3;
    GlobalContext *temp_a1;
    s32 temp_hi;
    u16 *temp_v1_2;
    u16 *temp_v1_3;
    u16 temp_a1_2;
    u8 temp_v1;
    s32 phi_v0;
    s32 phi_t0;
    s32 phi_v0_2;

    temp_a1 = arg1;
    arg1 = arg1;
    if (func_800B84D0(arg0, temp_a1) != 0) {
        temp_hi = (s32) gSaveContext.day % 5;
        phi_t0 = 0;
        if (temp_hi != 0) {
            phi_t0 = temp_hi - 1;
        }
        if ((arg0->params & 0xFF) == 1) {
            func_801518B0(arg1, 0x273CU, arg0);
            arg0->unk288 = 0x273C;
        } else {
            temp_v1 = gSaveContext.playerForm;
            if (temp_v1 != 4) {
                if (temp_v1 != 1) {
                    phi_v0 = 2;
                    if (temp_v1 != 2) {
                        if (temp_v1 != 3) {
                            phi_v0 = 0;
                        } else {
                            phi_v0 = 0;
                        }
                    }
                } else {
                    phi_v0 = 1;
                }
                temp_v1_2 = (phi_v0 * 6) + (phi_t0 * 2) + &D_80B27CE0;
                sp24 = temp_v1_2;
                func_801518B0(arg1, *temp_v1_2, arg0);
                arg0->unk288 = (s16) *temp_v1_2;
            } else {
                temp_a0 = arg1;
                arg1 = arg1;
                sp30 = phi_t0;
                if ((Player_GetMask(temp_a0) != 0) && (temp_a0_2 = arg1, arg1 = arg1, sp30 = phi_t0, ((Player_GetMask(temp_a0_2) < 0x14) != 0))) {
                    temp_a0_3 = arg1;
                    arg1 = arg1;
                    temp_a1_2 = (Player_GetMask(temp_a0_3) + 0x273C) & 0xFFFF;
                    sp2E = temp_a1_2;
                    func_801518B0(arg1, temp_a1_2, arg0);
                    arg0->unk288 = (s16) temp_a1_2;
                } else {
                    if (arg0->unk28A == 0) {
                        arg0->unk28A = 1;
                        phi_v0_2 = 0;
                    } else {
                        phi_v0_2 = 1;
                    }
                    temp_v1_3 = (phi_v0_2 * 6) + (phi_t0 * 2) + &D_80B27CF4;
                    sp24 = temp_v1_3;
                    func_801518B0(arg1, *temp_v1_3, arg0);
                    arg0->unk288 = (s16) *temp_v1_3;
                }
            }
        }
        func_80B26AE8(arg0);
        return;
    }
    func_800B8614(arg0, arg1, 100.0f);
}

void func_80B26758(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    u8 temp_v0;
    void *temp_v1;
    s16 phi_t5;

    if ((func_80147624(arg1) != 0) && (arg0->unk288 == 0x2716)) {
        temp_v1 = arg1 + 0x10000;
        temp_v0 = arg1->msgCtx.choiceIndex;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {
                if (temp_v0 != 2) {
                    return;
                }
                func_8019F230();
                func_801518B0(arg1, 0x2717U, arg0);
                phi_t5 = 0x2717;
                goto block_17;
            }
            if (((s32) (gSaveContext.equips.equipment & *gEquipMasks) >> *gEquipShifts) == 0) {
                play_sound(0x4806U);
                func_801518B0(arg1, 0x272CU, arg0);
                arg0->unk288 = 0x272C;
                func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) &D_80B27C68, 2);
                return;
            }
            if ((s32) gSaveContext.rupees < arg1->msgCtx.unk12070) {
                play_sound(0x4806U);
                func_801518B0(arg1, 0x2718U, arg0);
                arg0->unk288 = 0x2718;
                return;
            }
            sp24 = temp_v1;
            func_8019F208();
            func_801159EC((s16) ((s32) arg1->msgCtx.unk12070 * -1));
            func_801518B0(arg1, 0x273AU, arg0);
            arg0->unk288 = 0x273A;
            return;
        }
        if (((s32) (gSaveContext.equips.equipment & *gEquipMasks) >> *gEquipShifts) == 0) {
            play_sound(0x4806U);
            func_801518B0(arg1, 0x272CU, arg0);
            arg0->unk288 = 0x272C;
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) &D_80B27C68, 2);
            return;
        }
        if ((s32) gSaveContext.rupees < arg1->msgCtx.unk1206C) {
            play_sound(0x4806U);
            func_801518B0(arg1, 0x2718U, arg0);
            arg0->unk288 = 0x2718;
            return;
        }
        sp24 = temp_v1;
        func_8019F208();
        func_801159EC((s16) ((s32) arg1->msgCtx.unk1206C * -1));
        func_801518B0(arg1, 0x2719U, arg0);
        phi_t5 = 0x2719;
block_17:
        arg0->unk288 = phi_t5;
        // Duplicate return node #18. Try simplifying control flow for better match
    }
}

void func_80B269A4(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    GlobalContext *temp_a3;
    s16 temp_t7;
    void *temp_t6;

    temp_a3 = arg1;
    temp_t6 = temp_a3->actorCtx.actorList[2].first;
    arg1 = temp_a3;
    sp24 = temp_t6;
    if (func_80147624(temp_a3) != 0) {
        temp_t7 = arg0->unk288;
        switch (temp_t7) {
        case 10000:
        case 10001:
        case 10002:
        case 10003:
        case 10004:
        case 10005:
            func_801518B0(arg1, 0x2716U, arg0);
            arg0->unk288 = 0x2716;
            return;
        case 10009:
            func_801477B4(arg1);
            sp24->unkA6C = (s32) (sp24->unkA6C | 0x20);
            func_80B2701C(arg0);
            return;
        case 10010:
            func_801477B4(arg1);
            func_80B2714C(arg0);
            return;
        case 10042:
            func_801518B0(arg1, 0x273BU, arg0);
            arg0->unk288 = 0x273B;
            return;
        case 10043:
            temp_a0 = arg1;
            arg1 = arg1;
            func_801477B4(temp_a0);
            func_80112AFC(arg1);
            sp24->unkA6C = (s32) (sp24->unkA6C | 0x20);
            func_80B273D0(arg0);
            return;
        case 10029:
            temp_a0_2 = arg1;
            arg1 = arg1;
            func_801477B4(temp_a0_2);
            gSaveContext.minigameState = 3;
            func_80B276C4(arg0);
            func_80B276D8(arg0, arg1);
            // Duplicate return node #9. Try simplifying control flow for better match
            return;
        }
    } else {
    default:
    }
}

void func_80B26AE8(Actor *arg0) {
    arg0->unk1D4 = func_80B26AFC;
}

void func_80B26AFC(Actor *arg0, GlobalContext *arg1) {
    void *sp1C;
    SkelAnime *temp_a0;
    s16 temp_v0_2;
    u32 temp_v0;
    s16 phi_v0;

    arg0 = arg0;
    sp1C = arg1->actorCtx.actorList[2].first;
    temp_v0 = func_80152498(arg1 + 0x4908);
    switch (temp_v0) {
    case 4:
        func_80B26758(arg0, arg1);
        return;
    case 5:
        func_80B269A4(arg0, arg1);
        return;
    case 6:
        arg0 = arg0;
        if (func_80147624(arg1) != 0) {
            temp_v0_2 = arg0->unk288;
            temp_a0 = arg0 + 0x190;
            phi_v0 = temp_v0_2;
            if (temp_v0_2 == 0x272C) {
                arg0 = arg0;
                func_800BDC5C(temp_a0, (ActorAnimationEntry []) &D_80B27C68, 3);
                phi_v0 = arg0->unk288;
            }
            if ((phi_v0 == 0x272E) || (phi_v0 == 0x272F) || (phi_v0 == 0x2730)) {
                gSaveContext.minigameState = 3;
            }
            sp1C->unkA6C = (s32) (sp1C->unkA6C & ~0x20);
            func_80B26538((EnKendoJs *) arg0);
        }
        // fallthrough
    default:
        return;
    }
}

s32 func_80B26BF8(Actor *arg0, GlobalContext *arg1) {
    void *sp1C;
    Actor *temp_a3;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v0_3;
    u16 temp_t6;
    void *temp_a2;

    temp_a3 = arg0;
    temp_t6 = temp_a3->unk284;
    temp_a2 = arg1->actorCtx.actorList[2].first;
    switch (temp_t6) {
    case 0:
        sp1C = temp_a2;
        if (func_80122FCC(arg1, temp_a2, temp_a3) != 0) {
            return 0;
        }
        if ((temp_a2->unkADB != 0) || ((temp_a2->unkA74 * 0x10) < 0) || (temp_a2->unkA70 & 0x80000)) {
            return 1;
        }
    default:
block_51:
        return 2;
    case 1:
        if ((temp_a2->unkA74 * 0x10) < 0) {
            return 0;
        }
        if ((temp_a2->unkADB != 0) || (temp_a2->unkA70 & 0x80000)) {
            return 1;
        }
        goto block_51;
    case 2:
        sp1C = temp_a2;
        arg0 = temp_a3;
        if (func_80122F9C(arg1, temp_a2, temp_a3) != 0) {
            return 0;
        }
        if ((temp_a2->unkADB != 0) || ((temp_a2->unkA74 * 0x10) < 0) || (temp_a2->unkA70 & 0x80000)) {
            return 1;
        }
        arg0->unk28E = 0;
        goto block_51;
    case 3:
        temp_v1 = temp_a3->unk28E;
        if ((temp_v1 == 1) && ((temp_v0 = temp_a2->unkADA, (temp_v0 == 4)) || (temp_v0 == 6))) {
            temp_a3->unk28E = 0;
            return 0;
        }
        if ((temp_v1 == 1) || ((temp_a2->unkA74 * 0x10) < 0) || (temp_a2->unkA70 & 0x80000)) {
            temp_a3->unk28E = 0;
            return 1;
        }
        goto block_51;
    case 4:
        temp_v1_2 = temp_a3->unk28E;
        if ((temp_v1_2 == 1) && ((temp_v0_2 = temp_a2->unkADA, (temp_v0_2 == 0)) || (temp_v0_2 == 2))) {
            temp_a3->unk28E = 0;
            return 0;
        }
        if ((temp_v1_2 == 1) || ((temp_a2->unkA74 * 0x10) < 0) || (temp_a2->unkA70 & 0x80000)) {
            temp_a3->unk28E = 0;
            return 1;
        }
        goto block_51;
    case 5:
        temp_v1_3 = temp_a3->unk28E;
        if ((temp_v1_3 == 1) && (temp_a2->unkADA == 0xC)) {
            temp_a3->unk28E = 0;
            return 0;
        }
        if ((temp_v1_3 == 1) || ((temp_a2->unkA74 * 0x10) < 0) || (temp_a2->unkA70 & 0x80000)) {
            temp_a3->unk28E = 0;
            return 1;
        }
        goto block_51;
    case 6:
        temp_v1_4 = temp_a3->unk28E;
        if ((temp_v1_4 == 1) && ((temp_v0_3 = temp_a2->unkADA, (temp_v0_3 == 0x11)) || (temp_v0_3 == 0x14))) {
            temp_a3->unk28E = 0;
            return 0;
        }
        if ((temp_v1_4 == 1) || ((temp_a2->unkA74 * 0x10) < 0) || (temp_a2->unkA70 & 0x80000)) {
            temp_a3->unk28E = 0;
            return 1;
        }
        goto block_51;
    }
}

void func_80B26EB4(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;
    s16 temp_t6;
    s16 temp_t9;
    s16 temp_v0;

    temp_a2 = arg0;
    temp_t6 = temp_a2->unk284;
    arg0 = temp_a2;
    func_801518B0(arg1, *(&D_80B27D00 + (temp_t6 * 2)), temp_a2);
    temp_v0 = arg0->unk284;
    temp_t9 = *(&D_80B27D00 + (temp_v0 * 2));
    arg0->unk284 = (s16) (temp_v0 + 1);
    arg0->unk288 = temp_t9;
}

void func_80B26F14(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;
    s16 temp_t6;

    temp_a2 = arg0;
    temp_t6 = temp_a2->unk284;
    arg0 = temp_a2;
    func_801518B0(arg1, *(&D_80B27D10 + (temp_t6 * 2)), temp_a2);
    arg0->unk288 = (s16) *(&D_80B27D10 + (arg0->unk284 * 2));
}

s32 func_80B26F6C(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a3;
    s16 temp_v0;
    s32 temp_a0;
    s32 temp_a2;

    temp_a3 = arg1;
    temp_v0 = arg0->unk288;
    temp_a2 = temp_a3->actorCtx.actorList[2].first;
    temp_a0 = temp_a2;
    if (temp_v0 != 0x271D) {
        if (temp_v0 != 0x2721) {
            goto block_7;
        }
        if (arg0->unk292 != 0) {
            func_801518B0(temp_a3, 0x272BU, arg0);
            arg0->unk288 = 0x272B;
            return 1;
        }
        goto block_7;
    }
    arg1 = temp_a3;
    if (func_80124190(temp_a0, temp_a2, temp_a3) != 0) {
        func_801518B0(arg1, 0x272AU, arg0);
        arg0->unk288 = 0x272A;
        return 1;
    }
block_7:
    return 0;
}

void func_80B2701C(Actor *arg0) {
    arg0->unk1D4 = func_80B27030;
}

void func_80B27030(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    f32 sp28;
    ? sp20;

    sp2C = arg1->actorCtx.actorList[2].first;
    sp20.unk0 = (s32) arg0->world.pos.x;
    sp20.unk4 = (s32) arg0->world.pos.y;
    sp20.unk8 = (s32) arg0->world.pos.z;
    sp28 += 200.0f;
    if (func_80B278C4(arg1, subroutine_arg1, sp20.unk4, sp20.unk8) != 0) {
        arg0->flags |= 0x10000;
        if (func_800B84D0(arg0, arg1) != 0) {
            arg0->flags &= 0xFFFEFFFF;
            sp2C->unkA6C = (s32) (sp2C->unkA6C & ~0x20);
            func_80B279F0(arg0, arg1, 0);
            func_801518B0(arg1, 0x271AU, arg0);
            arg0->unk288 = 0x271A;
            func_80B26AE8(arg0);
            return;
        }
        func_800B8614(arg0, arg1, 800.0f);
        // Duplicate return node #4. Try simplifying control flow for better match
    }
}

void func_80B2714C(Actor *arg0) {
    gSaveContext.weekEventReg[82] |= 8;
    arg0->unk28C = 1;
    arg0->unk290 = 0;
    arg0->unk284 = 0;
    arg0->unk286 = 1;
    arg0->unk1D4 = func_80B27188;
}

void func_80B27188(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    SkelAnime *sp24;
    SkelAnime *temp_a0;
    s32 temp_v0;

    sp2C = arg1->actorCtx.actorList[2].first;
    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        if (arg0->unk288 == 0x2729) {
            func_80B26F14(arg0, arg1);
        } else if (func_80B26F6C(arg0, arg1) == 0) {
            if (&D_0600016C == arg0->unk198) {
                func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) &D_80B27C68, 3);
            }
            arg0->unk286 = 2;
            func_801477B4(arg1);
            sp2C->unkA6C = (s32) (sp2C->unkA6C & ~0x20);
        }
        goto block_11;
    }
    if (arg0->unk286 == 2) {
        arg0->unk286 = 1;
block_11:
    }
    if (arg0->unk286 == 1) {
        temp_v0 = func_80B26BF8(arg0, arg1);
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {
                if (arg0->unk28C == 0) {
                    arg0->unk290 = (s16) (arg0->unk290 + 1);
                    if (arg0->unk290 == 0x1E) {
                        arg0->unk290 = 0;
                        func_80B279F0(arg0, arg1, 0);
                    }
                }
            } else {
                sp24 = arg0 + 0x190;
                Audio_PlayActorSound2(arg0, 0x4806U);
                arg0->unk286 = 0;
                sp2C->unkA6C = (s32) (sp2C->unkA6C | 0x20);
                func_801518B0(arg1, 0x2729U, arg0);
                arg0->unk288 = 0x2729;
                func_800BDC5C(sp24, (ActorAnimationEntry []) &D_80B27C68, 2);
            }
        } else {
            arg0->unk286 = 0;
            Audio_PlayActorSound2(arg0, 0x4807U);
            sp2C->unkA6C = (s32) (sp2C->unkA6C | 0x20);
            func_80B26EB4(arg0, arg1);
        }
        temp_a0 = arg0 + 0x190;
        if (&D_060003DC == arg0->unk198) {
            sp24 = temp_a0;
            if (func_801378B8(temp_a0, arg0->unk1A0) != 0) {
                func_800BDC5C(temp_a0, (ActorAnimationEntry []) &D_80B27C68, 1);
            }
        }
        if (arg0->unk284 == 7) {
            gSaveContext.weekEventReg[82] &= 0xF7;
            func_80B26AE8(arg0);
        }
    }
}

void func_80B273D0(Actor *arg0) {
    gSaveContext.weekEventReg[82] |= 8;
    arg0->unk290 = 0x78;
    arg0->unk284 = 0;
    arg0->unk286 = 1;
    arg0->unk1D4 = func_80B2740C;
}

void func_80B2740C(void *arg0, GlobalContext *arg1) {
    void *sp24;
    f32 sp20;
    ? sp18;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    sp18.unk0 = (s32) arg0->unk24;
    sp18.unk4 = (f32) arg0->unk28;
    sp18.unk8 = (f32) arg0->unk2C;
    sp20 += 300.0f;
    sp24 = temp_v1;
    if (func_80B278C4(arg1, subroutine_arg1, sp18.unk4, sp18.unk8) != 0) {
        arg0->unk28C = 0;
        temp_v1->unkA6C = (s32) (temp_v1->unkA6C & ~0x20);
        arg0->unk1D4 = func_80B274BC;
    }
}

void func_80B274BC(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    s16 temp_v0;
    s8 temp_v0_2;

    sp24 = arg1->actorCtx.actorList[2].first;
    temp_v0 = arg0->unk290;
    if ((s32) temp_v0 >= 0x8C) {
        if (arg0->unk284 == 5) {
            if (gSaveContext.minigameScore == 0x1E) {
                func_801518B0(arg1, 0x272DU, arg0);
                arg0->unk288 = 0x272D;
            } else {
                func_801518B0(arg1, 0x272EU, arg0);
                arg0->unk288 = 0x272E;
            }
            sp24->unkA6C = (s32) (sp24->unkA6C | 0x20);
            gSaveContext.weekEventReg[82] = gSaveContext.weekEventReg[82] & 0xF7;
            func_80B26AE8(arg0);
            return;
        }
        play_sound(0x482CU);
        func_80B279F0(arg0, arg1, ((s32) (Rand_Next() & 0xFF) % 3) + 1);
        func_80B279F0(arg0, arg1, ((s32) (Rand_Next() & 0xFF) % 3) + 4);
        arg0->unk290 = 0;
        arg0->unk284 = (s16) (arg0->unk284 + 1);
        goto block_10;
    }
    if (temp_v0 == 0x78) {
        func_80B27A90(arg0, arg1);
        arg0->unk290 = (s16) (arg0->unk290 + 1);
    } else {
        arg0->unk290 = (s16) (temp_v0 + 1);
    }
block_10:
    if (arg0->unk28E == 1) {
        temp_v0_2 = sp24->unkADA;
        if ((temp_v0_2 == 0x11) || (temp_v0_2 == 0x14)) {
            arg1->interfaceCtx.unk_25C = 3;
            if ((s32) gSaveContext.minigameScore >= 0x1B) {
                sp24->unkA6C = (s32) (sp24->unkA6C | 0x20);
            }
        } else if (temp_v0_2 == 0xC) {
            arg1->interfaceCtx.unk_25C = 2;
        } else {
            arg1->interfaceCtx.unk_25C = 1;
        }
        Audio_PlayActorSound2(arg0, 0x4807U);
        arg0->unk28E = 0;
    }
    func_80B2783C(arg0, arg1);
}

void func_80B276C4(Actor *arg0) {
    arg0->unk1D4 = func_80B276D8;
}

void func_80B276D8(Actor *arg0, GlobalContext *arg1) {
    if (Actor_HasParent(arg0, arg1) != 0) {
        arg0->parent = NULL;
        func_80B27760(arg0, arg1);
        return;
    }
    if ((gSaveContext.weekEventReg[63] & 0x20) == 0) {
        func_800B8A1C(arg0, arg1, 0xC, 800.0f, 100.0f);
        return;
    }
    func_800B8A1C(arg0, arg1, 4, 800.0f, 100.0f);
}

void func_80B27760(Actor *arg0) {
    arg0->unk1D4 = func_80B27774;
}

void func_80B27774(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    u8 temp_v0;

    sp24 = arg1->actorCtx.actorList[2].first;
    if (func_800B84D0(arg0, arg1) != 0) {
        temp_v0 = gSaveContext.weekEventReg[63];
        if ((temp_v0 & 0x20) == 0) {
            gSaveContext.weekEventReg[63] = temp_v0 | 0x20;
            func_801518B0(arg1, 0x272FU, arg0);
            arg0->unk288 = 0x272F;
        } else {
            func_801518B0(arg1, 0x2730U, arg0);
            arg0->unk288 = 0x2730;
        }
        func_80B26AE8(arg0);
        sp24->unkA6C = (s32) (sp24->unkA6C & ~0x20);
        return;
    }
    func_800B85E0(arg0, arg1, 1000.0f, -1);
}

void func_80B2783C(Actor *arg0, GlobalContext *arg1) {
    s8 temp_a2;

    temp_a2 = arg0->cutscene;
    if (temp_a2 != -1) {
        func_800DFB14(arg1->cameraPtrs[0], (u32) ActorCutscene_GetCutscene((s16) temp_a2)->unk4);
    }
}

void func_80B27880(EnKendoJs *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_f0 = arg0->actor.world.pos.z + 70.0f;
    if (((arg0->actor.params & 0xFF) != 1) && (temp_v0->world.pos.z < temp_f0)) {
        temp_v0->world.pos.z = temp_f0;
    }
}

s32 func_80B278C4(GlobalContext *arg0, s32 arg1, f32 arg2, f32 arg3) {
    f32 sp28;
    s16 sp22;
    Vec3f *sp1C;
    Vec3f *temp_a0;
    f32 temp_f0;
    f32 phi_f0;
    s32 phi_v0;

    temp_a0 = arg0->actorCtx.actorList[2].first + 0x24;
    sp1C = temp_a0;
    sp22 = Math_Vec3f_Yaw(temp_a0, (Vec3f *) &arg1);
    temp_f0 = Math_Vec3f_DistXZ(temp_a0, (Vec3f *) &arg1);
    if (temp_f0 < 20.0f) {
        phi_f0 = 10.0f;
    } else if (temp_f0 < 40.0f) {
        phi_f0 = 40.0f;
    } else {
        phi_f0 = 80.0f;
    }
    arg0->actorCtx.unk268 = 1;
    sp28 = temp_f0;
    func_800B6F20(arg0, (s32) (arg0 + 0x1F0C), phi_f0, sp22);
    phi_v0 = 0;
    if (temp_f0 < 20.0f) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_80B279AC(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x144;
    sp1C = temp_a2;
    Collider_UpdateCylinder(arg0, temp_a2);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, &temp_a2->base);
}

void func_80B279F0(Actor *arg0, GlobalContext *arg1, s32 arg2) {
    Actor *temp_a1;
    f32 temp_f0;
    s16 temp_f6;
    s16 temp_f8;
    void *temp_v0;

    temp_a1 = arg0;
    temp_v0 = temp_a1->unk274 + (arg2 * 6);
    temp_f6 = temp_v0->unk2;
    temp_f8 = temp_v0->unk4;
    temp_f0 = (f32) temp_v0->unk0;
    arg0 = temp_a1;
    Actor_SpawnAsChild(arg1 + 0x1CA0, temp_a1, arg1, 0x1F8, temp_f0, (f32) temp_f6, (f32) temp_f8, (s16) 0, (s16) 0, (s16) 0, 0);
    arg0->unk28C = (s16) (arg0->unk28C + 1);
}

void func_80B27A90(Actor *arg0, GlobalContext *arg1) {
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;

    temp_v0 = arg1->actorCtx.actorList[6].first;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        do {
            if (phi_v0->id == 0x1F8) {
                phi_v0->unk220 = 1;
            }
            temp_v0_2 = phi_v0->next;
            phi_v0 = temp_v0_2;
        } while (temp_v0_2 != 0);
    }
    arg0->unk28C = 0;
}

void EnKendoJs_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnKendoJs *this = (EnKendoJs *) thisx;
    this->actionFunc(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->unk190);
    func_800E9250(globalCtx, &this->actor, &this->unk278, &this->unk27E, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
    func_80B279AC(&this->actor, globalCtx);
    func_80B27880(this, globalCtx);
}

s32 func_80B27B54(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0xC) {
        arg4->y -= arg5->unk27A;
    }
    return 0;
}

void func_80B27B8C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3) {

}

void EnKendoJs_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnKendoJs *this = (EnKendoJs *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk190.skeleton, this->unk190.limbDrawTbl, (s32) this->unk190.dListCount, func_80B27B54, func_80B27B8C, &this->actor);
}

