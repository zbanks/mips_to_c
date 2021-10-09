CRASHED

/*
Failed to decompile function func_80B00B8C:

Label L80B00C64 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/
void func_80AFEB38(EnTalkGibud *arg0);              /* static */
void func_80AFEB7C(EnTalkGibud *arg0, GlobalContext *arg1); /* static */
void func_80AFEC08(EnTalkGibud *arg0);              /* static */
void func_80AFEC4C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AFED08(Actor *arg0);                    /* static */
void func_80AFED7C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AFEFD4(Actor *arg0);                    /* static */
void func_80AFF030(Actor *arg0, void *arg1);        /* static */
void func_80AFF22C(Actor *arg0, Actor *);           /* static */
void func_80AFF288(void *arg0, ? arg1);             /* static */
void func_80AFF330(void *arg0);                     /* static */
void func_80AFF378(Actor *arg0, ? arg1);            /* static */
void func_80AFF45C(Actor *arg0);                    /* static */
void func_80AFF4AC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AFF618(Actor *arg0);                    /* static */
void func_80AFF6A0(void *arg0, ? arg1);             /* static */
void func_80AFF700(Actor *arg0);                    /* static */
void func_80AFF76C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AFF880(Actor *arg0);                    /* static */
void func_80AFF8E4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AFF9CC(Actor *arg0, s16, s16);          /* static */
void func_80AFFA68(EnTalkGibud *arg0, ? arg1);      /* static */
void func_80AFFAB0(Actor *arg0, GlobalContext *arg1, Actor *, GlobalContext *); /* static */
void func_80AFFC10(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80AFFC9C(Actor *arg0, GlobalContext *arg1, s32 arg2, Actor *); /* static */
void func_80AFFD3C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AFFE3C(Actor *arg0);                    /* static */
void func_80AFFE94(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AFFFA4(Actor *arg0);                    /* static */
void func_80AFFFBC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B000FC(Actor *arg0);                    /* static */
void func_80B00158(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B00384(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B0040C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B00484(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B004D0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B005EC(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B00760(Actor *arg0, void *arg1, void *); /* static */
void func_80B008BC(EnTalkGibud *arg0, GlobalContext *arg1); /* static */
void func_80B008FC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B0094C(Actor *arg0, GlobalContext *arg1); /* static */
? func_80B00B8C(EnTalkGibud *, GlobalContext *);    /* static */
void func_80B00C94(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B00D9C(EnTalkGibud *arg0, GlobalContext *arg1); /* static */
s32 func_80B00F08(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5, Gfx **gfx); /* static */
void func_80B00F64(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **gfx); /* static */
extern FlexSkeletonHeader D_060053E8;
extern AnimationHeaderCommon D_06009298;
extern AnimationHeader D_0600ABE0;
extern FlexSkeletonHeader D_06010B88;
static ActorAnimationEntry D_80B01200 = {
    {(AnimationHeader *)0x6006678, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x6006B08, 0.5f, 0.0f, 0.0f, 3, 0.0f},
    {(AnimationHeader *)0x6006EEC, 1.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x60073A4, 0.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x6007BBC, 1.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x60081A8, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x6009298, 1.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x6009900, 1.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x600A450, 1.0f, 0.0f, 0.0f, 2, -8.0f},
    {(AnimationHeader *)0x600ABE0, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x60113EC, 0.4f, 0.0f, 0.0f, 1, -8.0f},
    {(AnimationHeader *)0x601216C, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x60118D8, 1.0f, 0.0f, 0.0f, 0, -8.0f},
    {(AnimationHeader *)0x6011DB8, 1.0f, 0.0f, 0.0f, 0, -8.0f},
};
static ColliderCylinderInit D_80B01350 = {
    {0, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7EFFFFF, 0, 0}, 0, 5, 1},
    {0x14, 0x46, 0, {0, 0, 0}},
};
static DamageTable D_80B0137C = {
    {
        0,
        0xF2,
        0,
        0xF1,
        0xD0,
        0xD0,
        0xF2,
        0xD0,
        0xF1,
        0xF1,
        0xF1,
        0x21,
        0xD0,
        0x42,
        0xF1,
        0x10,
        0xD0,
        0xF2,
        0,
        0xC0,
        0,
        0xE0,
        0xF1,
        0xF1,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static CollisionCheckInfoInit2 D_80B0139C = {8, 0, 0, 0, 0xFE};
static ? D_80B013A8;                                /* unable to generate initializer */
static InitChainEntry D_80B01448;                   /* unable to generate initializer */
static ? D_80B01454;                                /* unable to generate initializer */
static ? D_80B01460;                                /* unable to generate initializer */

typedef struct EnTalkGibud {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderCylinder unk144;           /* inferred */
    /* 0x0190 */ SkelAnime unk190;                  /* inferred */
    /* 0x01D4 */ void (*actionFunc)(EnTalkGibud *, GlobalContext *);
    /* 0x01D8 */ f32 unk1D8;                        /* inferred */
    /* 0x01DC */ f32 unk1DC;                        /* inferred */
    /* 0x01E0 */ f32 unk1E0;                        /* inferred */
    /* 0x01E4 */ f32 unk1E4;                        /* inferred */
    /* 0x01E8 */ f32 unk1E8;                        /* inferred */
    /* 0x01EC */ f32 unk1EC;                        /* inferred */
    /* 0x01F0 */ f32 unk1F0;                        /* inferred */
    /* 0x01F4 */ f32 unk1F4;                        /* inferred */
    /* 0x01F8 */ f32 unk1F8;                        /* inferred */
    /* 0x01FC */ char pad1FC[0x90];                 /* maybe part of unk1F8[37]? */
    /* 0x028C */ s32 unk28C;                        /* inferred */
    /* 0x0290 */ s32 unk290;                        /* inferred */
    /* 0x0294 */ s32 unk294;                        /* inferred */
    /* 0x0298 */ s32 unk298;                        /* inferred */
    /* 0x029C */ f32 unk29C;                        /* inferred */
    /* 0x02A0 */ f32 unk2A0;                        /* inferred */
    /* 0x02A4 */ Vec3s unk2A4;                      /* inferred */
    /* 0x02AA */ char pad2AA[0x96];                 /* maybe part of unk2A4[26]? */
    /* 0x0340 */ Vec3s unk340;                      /* inferred */
    /* 0x0346 */ char pad346[0xA4];
    /* 0x03EA */ s16 unk3EA;                        /* inferred */
    /* 0x03EC */ s16 unk3EC;                        /* inferred */
    /* 0x03EE */ s16 unk3EE;                        /* inferred */
    /* 0x03F0 */ s16 unk3F0;                        /* inferred */
    /* 0x03F2 */ s16 unk3F2;                        /* inferred */
    /* 0x03F4 */ s16 unk3F4;                        /* inferred */
    /* 0x03F6 */ u8 unk3F6;                         /* inferred */
    /* 0x03F7 */ char pad3F7[0x1];                  /* maybe part of unk3F6[2]? */
} EnTalkGibud;                                      /* size 0x3F8 */

void EnTalkGibud_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnTalkGibud *this = (EnTalkGibud *) thisx;
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a1;
    PosRot *temp_t0;
    s32 temp_a1_3;
    s32 temp_v0;
    s32 temp_v1;
    void *temp_a0;
    void *temp_a1_2;
    void *temp_a2;
    void *temp_a3;
    void *phi_a0;
    void *phi_a1;
    void *phi_a2;
    void *phi_a3;
    s32 phi_v1;
    s32 phi_v0;
    s32 phi_a1_2;

    Actor_ProcessInitChain(&this->actor, &D_80B01448);
    this->actor.targetMode = 0;
    this->actor.hintId = 0x2D;
    this->actor.textId = 0;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 28.0f);
    SkelAnime_InitSV(globalCtx, &this->unk190, &D_060053E8, &D_0600ABE0, &this->unk2A4, &this->unk340, 0x1A);
    temp_a1 = &this->unk144;
    sp30 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &D_80B01350);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80B0137C, &D_80B0139C);
    this->unk3EA = 0;
    this->unk3EC = 0;
    this->unk3EE = 0;
    this->unk294 = 0;
    this->unk3F0 = 0;
    this->unk3F6 = 0;
    this->unk3F4 = 0;
    this->unk3F2 = 0;
    this->unk290 = this->actor.params & 0xF;
    this->unk298 = (s32) (this->actor.params & 0xFF0) >> 4;
    this->unk29C = 0.0f;
    this->unk2A0 = 0.0f;
    temp_t0 = &this->actor.world;
    this->unk1D8 = D_801D15B0.x;
    this->unk1DC = D_801D15B0.y;
    this->unk1E0 = D_801D15B0.z;
    this->unk1E4 = D_801D15B0.x;
    this->unk1E8 = D_801D15B0.y;
    this->unk1EC = D_801D15B0.z;
    this->unk1F0 = D_801D15B0.x;
    this->unk1F4 = D_801D15B0.y;
    this->unk1F8 = D_801D15B0.z;
    phi_a0 = temp_t0 + 0x1D8;
    phi_a1 = temp_t0 + 0x1E4;
    phi_a2 = temp_t0 + 0x1F0;
    phi_a3 = temp_t0 + 0x1FC;
    phi_v1 = 3;
    do {
        temp_v1 = phi_v1 + 4;
        temp_a0 = phi_a0 + 0x30;
        temp_a0->unk-30 = (f32) D_801D15B0.x;
        temp_a1_2 = phi_a1 + 0x30;
        temp_a2 = phi_a2 + 0x30;
        temp_a0->unk-2C = (f32) D_801D15B0.y;
        temp_a3 = phi_a3 + 0x30;
        temp_a0->unk-28 = (f32) D_801D15B0.z;
        temp_a1_2->unk-30 = (f32) D_801D15B0.x;
        temp_a1_2->unk-2C = (f32) D_801D15B0.y;
        temp_a1_2->unk-28 = (f32) D_801D15B0.z;
        temp_a2->unk-30 = (f32) D_801D15B0.x;
        temp_a2->unk-2C = (f32) D_801D15B0.y;
        temp_a2->unk-28 = (f32) D_801D15B0.z;
        temp_a3->unk-30 = (f32) D_801D15B0.x;
        temp_a3->unk-2C = (f32) D_801D15B0.y;
        temp_a3->unk-28 = (f32) D_801D15B0.z;
        phi_a0 = temp_a0;
        phi_a1 = temp_a1_2;
        phi_a2 = temp_a2;
        phi_a3 = temp_a3;
        phi_v1 = temp_v1;
    } while (temp_v1 != 0xF);
    temp_v0 = this->unk290;
    phi_v0 = temp_v0;
    if (temp_v0 < 0) {
        this->unk290 = 0;
        phi_v0 = 0;
    }
    if (phi_v0 >= 0xA) {
        this->unk290 = 9;
    }
    temp_a1_3 = this->unk298;
    phi_a1_2 = temp_a1_3;
    if (temp_a1_3 == 0xFF) {
        this->unk298 = -1;
        phi_a1_2 = -1;
    }
    if ((phi_a1_2 != -1) && (Flags_GetSwitch(globalCtx, phi_a1_2) != 0)) {
        Actor_MarkForDeath(&this->actor);
    }
    func_80AFEB38(this);
}

void EnTalkGibud_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTalkGibud *this = (EnTalkGibud *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk144);
}

void func_80AFEB38(EnTalkGibud *arg0) {
    func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) &D_80B01200, 9);
    arg0->actionFunc = func_80AFEB7C;
}

void func_80AFEB7C(EnTalkGibud *arg0, GlobalContext *arg1) {
    if ((arg0->actor.xzDistToPlayer <= 150.0f) && (func_800B715C(arg1) != 0)) {
        func_80AFEC08(arg0);
    }
    Math_SmoothStepToS(arg0 + 0x3E0, 0, 1, 0x64, (s16) 0);
    Math_SmoothStepToS(arg0 + 0x3E6, 0, 1, 0x64, (s16) 0);
}

void func_80AFEC08(EnTalkGibud *arg0) {
    func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) &D_80B01200, 9);
    arg0->actionFunc = func_80AFEC4C;
}

void func_80AFEC4C(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    s32 phi_v0;

    temp_v1 = arg0->yawTowardsPlayer - (s16) (arg0->shape.rot.y + arg0->unk3E0 + arg0->unk3E6);
    if ((s32) temp_v1 < 0) {
        phi_v0 = -(s32) temp_v1;
    } else {
        phi_v0 = (s32) temp_v1;
    }
    if (phi_v0 < 0x2008) {
        arg1->actorCtx.actorList[2].first->unk118 = 0x3C;
        func_8013ECE0(arg0->xzDistToPlayer, 0xFFU, 0x14U, 0x96U);
        func_80123E90(arg1, arg0);
        Audio_PlayActorSound2(arg0, 0x38E5U);
        func_80AFED08(arg0);
    }
    func_80B005EC(arg0, arg1);
}

void func_80AFED08(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x190;
    arg0 = arg0;
    func_800BDC5C(temp_a0, (ActorAnimationEntry []) &D_80B01200, 0xA);
    arg0->speedXZ = 0.4f;
    if (func_80AFEC4C == arg0->unk1D4) {
        arg0->unk3EA = 0x50;
    } else {
        arg0->unk3EA = 0x14;
    }
    arg0->unk1D4 = func_80AFED7C;
}

void func_80AFED7C(Actor *arg0, GlobalContext *arg1) {
    void *sp34;
    SkelAnime *sp2C;
    SkelAnime *temp_a0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    u8 temp_v0;

    sp34 = arg1->actorCtx.actorList[2].first;
    Math_ScaledStepToS(arg0 + 0xBE, arg0->yawTowardsPlayer, 0xFA);
    arg0->unk30 = (unaligned s32) arg0->unkBC;
    arg0->world.rot.z = arg0->shape.rot.z;
    Math_SmoothStepToS(arg0 + 0x3E0, 0, 1, 0x64, (s16) 0);
    Math_SmoothStepToS(arg0 + 0x3E6, 0, 1, 0x64, (s16) 0);
    if ((func_80B0040C(arg0, arg1) != 0) && (Actor_IsActorFacingLink(arg0, 0x38E3) != 0)) {
        if ((arg0->unk3EE == 0) && (arg0->xzDistToPlayer <= 45.0f)) {
            sp34->freezeTimer = 0;
            temp_v0 = gSaveContext.playerForm;
            if ((temp_v0 == 1) || (temp_v0 == 3)) {
                func_80AFF22C(arg0, sp34);
            } else if (arg1->grabPlayer(arg1, sp34) != 0) {
                func_80AFEFD4(arg0);
            }
        } else {
            temp_v0_2 = arg0->unk3EA;
            if (temp_v0_2 == 0) {
                sp34->freezeTimer = 0x28;
                arg0->unk3EA = 0x3C;
                func_8013ECE0(arg0->xzDistToPlayer, 0xFFU, 0x14U, 0x96U);
                func_80123E90(arg1, arg0);
                Audio_PlayActorSound2(arg0, 0x38E5U);
            } else {
                arg0->unk3EA = (s16) (temp_v0_2 - 1);
            }
        }
    } else if ((arg0->unk3EE == 0) && (arg0->xzDistToPlayer <= 45.0f)) {
        func_80AFF45C(arg0);
    } else if (func_80B00484(arg0, arg1) != 0) {
        func_80AFF45C(arg0);
    }
    temp_v0_3 = arg0->unk3EE;
    temp_a0 = arg0 + 0x190;
    if ((s32) temp_v0_3 > 0) {
        arg0->unk3EE = (s16) (temp_v0_3 - 1);
    }
    sp2C = temp_a0;
    if ((func_801378B8(temp_a0, 10.0f) != 0) || (func_801378B8(temp_a0, 22.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x382EU);
        return;
    }
    if ((arg1->gameplayFrames & 0x5F) == 0) {
        Audio_PlayActorSound2(arg0, 0x38E4U);
    }
}

void func_80AFEFD4(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x190;
    arg0 = arg0;
    func_800BDC5C(temp_a0, (ActorAnimationEntry []) &D_80B01200, 2);
    arg0->unk3EA = 0;
    arg0->flags &= -2;
    arg0->unk3EC = 0;
    arg0->unk1D4 = func_80AFF030;
}

void func_80AFF030(Actor *arg0, void *arg1) {
    u16 sp32;
    SkelAnime *sp28;
    Actor *temp_s1;
    SkelAnime *temp_a3;
    SkelAnime *temp_a3_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_s1_2;
    s32 temp_v0_3;
    s32 temp_v1;

    temp_v0 = arg0->unk3EC;
    temp_s1 = arg1->unk1CCC;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                return;
            }
            if (func_801378B8(arg0 + 0x190, arg0->unk1A0) != 0) {
                arg0->unk3EE = 0x14;
                arg0->shape.yOffset = 0.0f;
                func_80AFED08(arg0);
                return;
            }
            Math_SmoothStepToF(arg0 + 0xC4, 0.0f, 1.0f, 400.0f, 0.0f);
            // Duplicate return node #21. Try simplifying control flow for better match
            return;
        }
        temp_v0_2 = arg0->unk3EA;
        if (temp_v0_2 == 0x14) {
            sp32 = temp_s1->unkA68->unk92 + 0x6805;
            arg1->unk18784(arg1, -8, arg1);
            func_800B8E58(temp_s1, sp32);
            func_8013ECE0(arg0->xzDistToPlayer, 0xF0U, 1U, 0xCU);
            arg0->unk3EA = 0;
        } else {
            arg0->unk3EA = (s16) (temp_v0_2 + 1);
        }
        temp_a3 = arg0 + 0x190;
        sp28 = temp_a3;
        if (func_801378B8(temp_a3, 0.0f) != 0) {
            sp28 = temp_a3;
            Audio_PlayActorSound2(arg0, 0x38E8U);
        }
        temp_v1 = temp_s1->unkA70;
        temp_v0_3 = temp_v1 & 0x80;
        if ((temp_v0_3 == 0) || (temp_s1->unkB62 != 0)) {
            if ((temp_s1->unkB62 != 0) && (temp_v0_3 != 0)) {
                temp_s1->unkA70 = (s32) (temp_v1 & ~0x80);
                temp_s1->unkAE8 = 0x64;
            }
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) &D_80B01200, 1);
            arg0->unk3EC = 2;
            arg0->flags |= 1;
            arg0->unk3EA = 0;
            return;
        }
        // Duplicate return node #21. Try simplifying control flow for better match
        return;
    }
    temp_a3_2 = arg0 + 0x190;
    temp_s1_2 = func_80B00760(arg0, arg1, arg1);
    sp28 = temp_a3_2;
    if ((func_801378B8(temp_a3_2, arg0->unk1A0) != 0) && (temp_s1_2 == 1)) {
        arg0->unk3EC = 1;
        func_800BDC5C(temp_a3_2, (ActorAnimationEntry []) &D_80B01200, 0);
    }
}

void func_80AFF22C(Actor *arg0) {
    func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) &D_80B01200, 7);
    Audio_PlayActorSound2(arg0, 0x38E6U);
    arg0->unk1D4 = func_80AFF288;
    arg0->speedXZ = -2.0f;
}

void func_80AFF288(void *arg0, ? arg1) {
    f32 temp_f0;

    temp_f0 = arg0->unk70;
    if (temp_f0 < 0.0f) {
        arg0->unk70 = (f32) (temp_f0 + 0.15f);
    }
    arg0->unk32 = (s16) arg0->unk92;
    Math_SmoothStepToS(arg0 + 0x3E0, 0, 1, 0x12C, (s16) 0);
    Math_SmoothStepToS(arg0 + 0x3E6, 0, 1, 0x12C, (s16) 0);
    if (func_801378B8(arg0 + 0x190, arg0->unk1A0) != 0) {
        arg0->unk32 = (s16) arg0->unkBE;
        func_80AFF330(arg0);
    }
}

void func_80AFF330(void *arg0) {
    void *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk3EA = 0;
    arg0 = temp_a3;
    func_800BDC5C(temp_a3 + 0x190, (ActorAnimationEntry []) &D_80B01200, 0xA);
    arg0->unk1D4 = func_80AFF378;
}

void func_80AFF378(Actor *arg0, ? arg1) {
    f32 temp_f0;
    f32 temp_f6;
    s16 temp_v0;
    s16 temp_v0_2;

    Math_SmoothStepToS(arg0 + 0x32, (s16) (arg0->yawTowardsPlayer + 0x8000), 5, 0xDAC, (s16) 0xC8);
    temp_v0 = arg0->unk3EA;
    arg0->shape.rot.y = arg0->world.rot.y;
    if ((s32) temp_v0 >= 0x3D) {
        func_80AFF45C(arg0);
        arg0->unk3EA = 0;
        return;
    }
    temp_f0 = Math_SinS((s16) (temp_v0 * 0xFA0));
    temp_v0_2 = arg0->unk3EA;
    temp_f6 = (f32) (0x3C - temp_v0_2);
    arg0->unk3EA = (s16) (temp_v0_2 + 1);
    arg0->unk3E0 = (s16) (s32) (temp_f0 * (9583.0f * (temp_f6 / 60.0f)));
}

void func_80AFF45C(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x190;
    arg0 = arg0;
    func_800BDC5C(temp_a0, (ActorAnimationEntry []) &D_80B01200, 0xA);
    arg0->unk1D4 = func_80AFF4AC;
    arg0->speedXZ = 0.4f;
}

void func_80AFF4AC(Actor *arg0, GlobalContext *arg1) {
    Vec3f *sp28;
    Vec3f *temp_a1;
    f32 temp_f0;
    u8 temp_v0;

    Math_SmoothStepToS(arg0 + 0x3E0, 0, 1, 0x64, (s16) 0);
    Math_SmoothStepToS(arg0 + 0x3E6, 0, 1, 0x64, (s16) 0);
    temp_a1 = arg0 + 8;
    sp28 = temp_a1;
    if (Actor_XZDistanceToPoint(arg0, temp_a1) < 5.0f) {
        temp_f0 = arg0->speedXZ;
        if (temp_f0 > 0.2f) {
            arg0->speedXZ = temp_f0 - 0.2f;
        } else {
            arg0->speedXZ = 0.0f;
        }
        Math_SmoothStepToS(&arg0->shape.rot.y, arg0->home.rot.y, 1, 0xC8, (s16) 0xA);
        arg0->world.rot.y = arg0->shape.rot.y;
        if (arg0->home.rot.y == arg0->world.rot.y) {
            func_80AFEB38((EnTalkGibud *) arg0);
        }
    } else {
        Math_ScaledStepToS(&arg0->shape.rot.y, Actor_YawToPoint(arg0, temp_a1), 0x1C2);
        arg0->unk30 = (unaligned s32) arg0->unkBC;
        arg0->world.rot.z = (s16) (u16) arg0->shape.rot.z;
    }
    if (func_80B0040C(arg0, arg1) != 0) {
        temp_v0 = gSaveContext.playerForm;
        if ((temp_v0 != 1) && (temp_v0 != 3) && (Actor_IsActorFacingLink(arg0, 0x38E3) != 0)) {
            func_80AFED08(arg0);
        }
    }
}

void func_80AFF618(Actor *arg0) {
    arg0->unk3EA = 0xA;
    arg0->speedXZ = 0.0f;
    arg0->world.rot.y = arg0->shape.rot.y;
    if (arg0->unk3F0 != 0) {
        func_800BCB70(arg0, 0, 0xC8, 0, (s16) 0x28);
    } else {
        func_800BCB70(arg0, 0, 0xC8, 0, (s16) 0x28);
    }
    arg0->unk1D4 = func_80AFF6A0;
}

void func_80AFF6A0(void *arg0, ? arg1) {
    s16 temp_v0;

    if (arg0->unk11C == 0) {
        if (arg0->unkB7 == 0) {
            func_80AFF880();
        } else {
            func_80AFF700();
        }
    }
    temp_v0 = arg0->unk3EA;
    if (temp_v0 != 0) {
        arg0->unk3EA = (s16) (temp_v0 - 1);
    }
}

void func_80AFF700(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x190;
    arg0 = arg0;
    func_800BDC5C(temp_a0, (ActorAnimationEntry []) &D_80B01200, 7);
    Audio_PlayActorSound2(arg0, 0x38E6U);
    arg0->unk3EA = 0;
    arg0->unk3EE = 0;
    arg0->unk1D4 = func_80AFF76C;
    arg0->world.rot.y = arg0->yawTowardsPlayer;
    arg0->speedXZ = -2.0f;
}

void func_80AFF76C(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp34;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s32 temp_t3;

    temp_f0 = arg0->speedXZ;
    temp_a0 = arg0 + 0x190;
    if (temp_f0 < 0.0f) {
        arg0->speedXZ = temp_f0 + 0.15f;
    }
    sp34 = temp_a0;
    if (func_801378B8(temp_a0, arg0->unk1A0) != 0) {
        arg0->unk3F7 = -1;
        arg0->world.rot.y = arg0->shape.rot.y;
        if (((s32) arg0->unk3F0 > 0) && (arg0->unk3F6 == 0) && (arg0->unk3F2 == 0)) {
            arg0->hintId = 0x2A;
            temp_t3 = arg0->flags & ~9;
            arg0->flags = temp_t3;
            arg0->flags = temp_t3 | 5;
            SkelAnime_InitSV(arg1, sp34, &D_06010B88, NULL, arg0 + 0x2A4, arg0 + 0x340, 0x1A);
            arg0->unk3F2 = 1;
        }
        if (func_80B00484(arg0, arg1) != 0) {
            func_80AFF45C(arg0);
            return;
        }
        func_80AFED08(arg0);
        // Duplicate return node #10. Try simplifying control flow for better match
    }
}

void func_80AFF880(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x190;
    arg0 = arg0;
    func_800BDC5C(temp_a0, (ActorAnimationEntry []) &D_80B01200, 6);
    arg0->flags &= -2;
    Audio_PlayActorSound2(arg0, 0x38E7U);
    arg0->unk3EA = 0;
    arg0->unk1D4 = func_80AFF8E4;
}

void func_80AFF8E4(Actor *arg0, GlobalContext *arg1) {
    if ((s32) arg0->unk3EA >= 0x12D) {
        func_80AFF9CC(arg0, 0, 1);
    } else {
        Math_SmoothStepToS(arg0 + 0x3E0, 0, 1, 0xFA, (s16) 0);
        Math_SmoothStepToS(arg0 + 0x3E6, 0, 1, 0xFA, (s16) 0);
        arg0->unk3EA = (s16) (arg0->unk3EA + 1);
    }
    if ((arg0->unk3EA == 0x14) && ((s32) arg0->unk3F0 > 0) && (arg0->unk3F6 == 0) && (arg0->unk3F2 == 0)) {
        SkelAnime_InitSV(arg1, arg0 + 0x190, &D_06010B88, NULL, arg0 + 0x2A4, arg0 + 0x340, 0x1A);
        arg0->unk3F2 = 1;
    }
}

void func_80AFF9CC(Actor *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x190, (AnimationHeader *) &D_06009298, -1.0f, (f32) SkelAnime_GetFrameCount(&D_06009298), 0.0f, (u8) 2, -8.0f);
    arg0->flags |= 1;
    Audio_PlayActorSound2(arg0, 0x3ADBU);
    arg0->unk3EA = 0;
    arg0->unk1D4 = func_80AFFA68;
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_80AFFA68(EnTalkGibud *arg0, ? arg1) {
    EnTalkGibud *temp_a2;
    f32 temp_a1;

    temp_a2 = arg0;
    temp_a1 = temp_a2->unk190.animFrameCount;
    arg0 = temp_a2;
    if (func_801378B8(temp_a2 + 0x190, temp_a1) != 0) {
        arg0->actor.colChkInfo.health = 8;
        func_80AFEB38(arg0);
    }
}

void func_80AFFAB0(Actor *arg0, GlobalContext *arg1) {
    u32 temp_t6;

    temp_t6 = arg0->unk290;
    switch (temp_t6) {
    case 0:
        func_801518B0(arg1, 0x138CU, arg0);
        arg0->unk3DC = 0x138C;
        return;
    case 1:
        func_801518B0(arg1, 0x138DU, arg0);
        arg0->unk3DC = 0x138D;
        return;
    case 2:
        func_801518B0(arg1, 0x138EU, arg0);
        arg0->unk3DC = 0x138E;
        return;
    case 3:
        func_801518B0(arg1, 0x138FU, arg0);
        arg0->unk3DC = 0x138F;
        return;
    case 4:
        func_801518B0(arg1, 0x1390U, arg0);
        arg0->unk3DC = 0x1390;
        return;
    case 5:
        func_801518B0(arg1, 0x1391U, arg0);
        arg0->unk3DC = 0x1391;
        return;
    case 6:
        func_801518B0(arg1, 0x1392U, arg0);
        arg0->unk3DC = 0x1392;
        return;
    case 7:
        func_801518B0(arg1, 0x1393U, arg0);
        arg0->unk3DC = 0x1393;
        return;
    case 8:
        func_801518B0(arg1, 0x1394U, arg0);
        arg0->unk3DC = 0x1394;
        return;
    case 9:
        func_801518B0(arg1, 0x1395U, arg0);
        arg0->unk3DC = 0x1395;
        // fallthrough
    default:
        return;
    }
}

void func_80AFFC10(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0;
    s16 temp_t6;

    temp_a0 = arg1;
    arg1 = arg1;
    if (func_80147624(temp_a0) != 0) {
        temp_t6 = arg0->unk3DC;
        switch (temp_t6) {
        case 5000:
            func_80AFFAB0(arg0, arg1, arg0, arg1);
            return;
        case 5004:
        case 5005:
        case 5006:
        case 5007:
        case 5008:
        case 5009:
        case 5010:
        case 5011:
        case 5012:
        case 5013:
            func_801518B0(arg1, 0xFFU, arg0);
            arg0->unk3DC = 0xFF;
            // Duplicate return node #5. Try simplifying control flow for better match
            return;
        }
    } else {
    default:
    }
}

s32 func_80AFFC9C(Actor *arg0, GlobalContext *arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = (arg0->unk290 * 0x10) + &D_80B013A8;
    if (arg2 == temp_v0->unk0) {
        if (temp_v0->unkC == 0) {
            if ((s32) gSaveContext.inventory.ammo[gItemSlots[temp_v0->unk4]] >= temp_v0->unk8) {
                return 0;
            }
            return 1;
        }
        if (func_80114F2C((s32) temp_v0->unk7) != 0) {
            return 0;
        }
        goto block_7;
    }
block_7:
    return 2;
}

void func_80AFFD3C(Actor *arg0, GlobalContext *arg1) {
    void *sp1C;
    Actor *temp_a0;
    Actor *temp_a3;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    if (arg0->unk294 == 0) {
        sp1C = temp_v1;
        arg0 = arg0;
        temp_v0 = func_80123810(arg1);
        temp_a3 = arg0;
        if (temp_v0 != 0) {
            temp_a3->unk294 = temp_v0;
        }
        temp_a2 = temp_a3->unk294;
        temp_a0 = temp_a3;
        if (temp_a2 > 0) {
            sp1C = temp_v1;
            arg0 = temp_a3;
            temp_v0_2 = func_80AFFC9C(temp_a0, arg1, temp_a2, temp_a3);
            if (temp_v0_2 != 0) {
                if (temp_v0_2 != 1) {
                    if (temp_v0_2 != 2) {

                    } else {
                        temp_v1->textId = 0x1389;
                        arg0->unk3DC = 0x1389;
                    }
                } else {
                    temp_v1->textId = 0x138B;
                    arg0->unk3DC = 0x138B;
                }
            } else {
                temp_v1->textId = 0x138A;
                arg0->unk3DC = 0x138A;
            }
            func_801477B4(arg1);
            return;
        }
        if (temp_a2 < 0) {
            arg0 = temp_a3;
            func_801518B0(arg1, 0x1389U, temp_a3);
            arg0->unk3DC = 0x1389;
        }
        // Duplicate return node #14. Try simplifying control flow for better match
    }
}

void func_80AFFE3C(Actor *arg0) {
    SkelAnime *temp_a0;

    arg0->unk3F4 = 0;
    if (func_80AFFFBC != arg0->unk1D4) {
        temp_a0 = arg0 + 0x190;
        arg0 = arg0;
        func_800BDC5C(temp_a0, (ActorAnimationEntry []) &D_80B01200, 9);
    }
    arg0->unk1D4 = func_80AFFE94;
}

void func_80AFFE94(Actor *arg0, GlobalContext *arg1) {
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->unk3F4 = 1;
        func_801518B0(arg1, 0x1388U, arg0);
        arg0->unk3DC = 0x1388;
        Audio_PlayActorSound2(arg0, 0x38E5U);
        func_80AFFFA4(arg0);
        return;
    }
    if ((arg0->xzDistToPlayer < 100.0f) && ((arg0->unk155 & 2) == 0)) {
        func_800E9250(arg1, arg0, arg0 + 0x3DE, arg0 + 0x3E4, (bitwise Vec3f) arg0->focus.pos.x, arg0->focus.pos.y, arg0->focus.pos.z);
        func_800B8614(arg0, arg1, 100.0f);
        return;
    }
    Math_SmoothStepToS(arg0 + 0x3E0, 0, 1, 0x64, (s16) 0);
    Math_SmoothStepToS(arg0 + 0x3E6, 0, 1, 0x64, (s16) 0);
}

void func_80AFFFA4(Actor *arg0) {
    arg0->unk294 = 0;
    arg0->unk1D4 = func_80AFFFBC;
}

void func_80AFFFBC(Actor *arg0, GlobalContext *arg1) {
    Player *sp24;
    u32 temp_t4;
    u32 temp_t6;
    u32 temp_v0;
    void *temp_v0_2;

    sp24 = arg1->actorCtx.actorList[2].first;
    temp_v0 = func_80152498(arg1 + 0x4908);
    switch (temp_v0) {
    case 5:
        func_80AFFC10(arg0, arg1);
        break;
    case 6:
        if (func_80147624(arg1) != 0) {
            if (arg0->unk3DC == 0x138A) {
                temp_v0_2 = (arg0->unk290 * 0x10) + &D_80B013A8;
                if (temp_v0_2->unkC == 0) {
                    func_80115A14((s32) temp_v0_2->unk6, (s16) ((s32) temp_v0_2->unk8 * -1));
                } else {
                    func_80123D50(arg1, sp24, 0x12, 0x15);
                }
                temp_t4 = sp24->stateFlags1 | 0x20;
                temp_t6 = temp_t4 | 0x20000000;
                sp24->stateFlags1 = temp_t4;
                sp24->stateFlags1 = temp_t6;
                arg0->flags |= 0x100000;
                func_80B000FC(arg0);
            } else {
                func_80AFFE3C(arg0);
            }
        }
        break;
    case 16:
        func_80AFFD3C(arg0, arg1);
        break;
    }
    func_80B00384(arg0, arg1);
}

void func_80B000FC(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x190;
    arg0 = arg0;
    func_800BDC5C(temp_a0, (ActorAnimationEntry []) &D_80B01200, 9);
    arg0->flags &= -2;
    arg0->unk3EA = 0x28;
    arg0->unk1D4 = func_80B00158;
}

void func_80B00158(Actor *arg0, GlobalContext *arg1) {
    f32 sp98;
    f32 sp90;
    Vec3f sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 *temp_s1;
    f32 *temp_s4;
    s16 temp_v0;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_t1;
    void *temp_s2;
    void *temp_s7;
    s32 phi_s3;
    s32 phi_s0;

    temp_s4 = &sp90;
    temp_s7 = arg1->actorCtx.actorList[2].first;
    temp_s4->unk0 = D_80B01454.unk0;
    temp_s4->unk4 = (s32) D_80B01454.unk4;
    temp_s4->unk8 = (s32) D_80B01454.unk8;
    sp84.x = D_80B01460.unk0;
    sp84.y = D_80B01460.unk4;
    sp84.z = D_80B01460.unk8;
    temp_v0 = arg0->unk3EA;
    if ((s32) temp_v0 > 0) {
        phi_s3 = (s32) temp_v0;
        if ((s32) temp_v0 >= 4) {
            phi_s3 = 3;
        }
        phi_s0 = 0;
        if (phi_s3 > 0) {
            temp_s2 = arg0 + 0x24;
            temp_s1 = &sp78;
            do {
                temp_s1->unk0 = temp_s2->unk0;
                temp_s1->unk4 = (s32) temp_s2->unk4;
                temp_s1->unk8 = (s32) temp_s2->unk8;
                sp78 += Rand_Centered() * 20.0f;
                sp7C += 50.0f + (Rand_Centered() * 50.0f);
                sp80 += Rand_Centered() * 20.0f;
                sp90 += Rand_Centered() * 1.5f;
                sp98 += Rand_Centered() * 1.5f;
                func_800B3030(arg1, (Vec3f *) temp_s1, (Vec3f *) temp_s4, &sp84, (s16) 0x64, (s16) 0, 1);
                temp_s0 = phi_s0 + 1;
                phi_s0 = temp_s0;
            } while (temp_s0 != phi_s3);
        }
        func_800B9010(arg0, 0x321FU);
        temp_s7->unkA6C = (s32) (temp_s7->unkA6C | 0x20000000);
        arg0->unk3EA = (s16) (arg0->unk3EA - 1);
        return;
    }
    temp_a1 = arg0->unk298;
    if (temp_a1 != -1) {
        Actor_SetSwitchFlag(arg1, temp_a1);
    }
    temp_t1 = temp_s7->unkA6C & ~0x20;
    temp_s7->unkA6C = temp_t1;
    temp_s7->unkA6C = (s32) (temp_t1 & 0xDFFFFFFF);
    Actor_MarkForDeath(arg0);
}

void func_80B00384(Actor *arg0, GlobalContext *arg1) {
    s16 sp1E;
    Actor *temp_a3;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_v0;

    temp_a3 = arg0;
    temp_a1 = temp_a3->yawTowardsPlayer;
    arg0 = temp_a3;
    sp1E = temp_a1;
    Math_ScaledStepToS(temp_a3 + 0xBE, temp_a1, 0x320);
    temp_v0 = arg0->shape.rot.y;
    temp_a1_2 = temp_a1 - temp_v0;
    arg0->world.rot.y = temp_v0;
    sp1E = temp_a1_2;
    Math_ScaledStepToS(arg0 + 0x3E6, temp_a1_2, 0x258);
    Math_ScaledStepToS(arg0 + 0x3E0, (s16) (temp_a1_2 - arg0->unk3E6), 0x190);
}

s32 func_80B0040C(Actor *arg0, GlobalContext *arg1) {
    Actor *sp1C;
    Actor *temp_a0;
    s32 phi_v0;

    temp_a0 = arg1->actorCtx.actorList[2].first;
    sp1C = temp_a0;
    phi_v0 = 0;
    if ((Actor_DistanceToPoint(temp_a0, arg0 + 8) < 150.0f) && ((temp_a0->unkA6C & 0x2C6080) == 0) && ((temp_a0->unkA70 & 0x4080) == 0)) {
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 func_80B00484(Actor *arg0, GlobalContext *arg1) {
    s32 phi_v0;

    phi_v0 = 0;
    if (Actor_DistanceToPoint(arg1->actorCtx.actorList[2].first, arg0 + 8) >= 150.0f) {
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_80B004D0(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    u32 temp_t4;
    u32 temp_t9;

    temp_v0 = arg0->unk1D4;
    if ((func_80AFF030 != temp_v0) && (func_80AFF8E4 != temp_v0) && (func_80B00158 != temp_v0) && (func_80AFFA68 != temp_v0) && (func_80AFF76C != temp_v0) && (func_80AFFFBC != temp_v0)) {
        if (func_80AFFE94 != temp_v0) {
            arg0 = arg0;
            if (Player_GetMask(arg1) == 0xC) {
                temp_t4 = arg0->flags & ~5;
                arg0->flags = temp_t4;
                arg0->flags = temp_t4 | 9;
                arg0->hintId = 0xFF;
                arg0->textId = 0;
                func_80AFFE3C(arg0);
                return;
            }
            // Duplicate return node #14. Try simplifying control flow for better match
            return;
        }
        arg0 = arg0;
        if (Player_GetMask(arg1) != 0xC) {
            temp_t9 = arg0->flags & ~9;
            arg0->flags = temp_t9;
            arg0->flags = temp_t9 | 5;
            if (arg0->unk3F2 == 1) {
                arg0->hintId = 0x2A;
            } else {
                arg0->hintId = 0x2D;
            }
            arg0->textId = 0;
            func_80AFF45C(arg0);
        }
        // Duplicate return node #14. Try simplifying control flow for better match
    }
}

void func_80B005EC(Actor *arg0, GlobalContext *arg1) {
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v1;
    s32 phi_a2;
    s32 phi_a3;
    s32 phi_v0;
    s32 phi_a3_2;
    s32 phi_a3_3;
    s32 phi_a3_4;
    s16 phi_a3_5;
    s16 phi_a3_6;
    s16 phi_a3_7;
    s16 phi_a3_8;

    temp_a1 = arg0->unk3E6;
    temp_v1 = arg0->yawTowardsPlayer - arg0->shape.rot.y;
    temp_v0 = temp_v1 - temp_a1;
    if ((s32) temp_v0 < -0x1F4) {
        phi_a2 = -0x1F4;
    } else {
        phi_a3_7 = temp_v0;
        if ((s32) temp_v0 >= 0x1F5) {
            phi_a3_7 = 0x1F4;
        }
        phi_a2 = (s32) phi_a3_7;
    }
    temp_v0_2 = temp_v0 - arg0->unk3E0;
    if ((s32) temp_v0_2 < -0x1F4) {
        phi_v0 = -0x1F4;
    } else {
        phi_a3_8 = temp_v0_2;
        if ((s32) temp_v0_2 >= 0x1F5) {
            phi_a3_8 = 0x1F4;
        }
        phi_v0 = (s32) phi_a3_8;
    }
    if ((s32) temp_v1 >= 0) {
        phi_a3 = phi_a2;
        if (phi_a2 < 0) {
            phi_a3 = -phi_a2;
        }
        arg0->unk3E6 = (s16) (temp_a1 + phi_a3);
        if (phi_v0 < 0) {
            phi_a3_2 = -phi_v0;
        } else {
            phi_a3_2 = phi_v0;
        }
        arg0->unk3E0 = (s16) (arg0->unk3E0 + phi_a3_2);
    } else {
        phi_a3_3 = phi_a2;
        if (phi_a2 < 0) {
            phi_a3_3 = -phi_a2;
        }
        arg0->unk3E6 = (s16) (temp_a1 - phi_a3_3);
        if (phi_v0 < 0) {
            phi_a3_4 = -phi_v0;
        } else {
            phi_a3_4 = phi_v0;
        }
        arg0->unk3E0 = (s16) (arg0->unk3E0 - phi_a3_4);
    }
    temp_a1_2 = arg0->unk3E6;
    if ((s32) temp_a1_2 < -0x495F) {
        arg0->unk3E6 = -0x495F;
    } else {
        phi_a3_5 = temp_a1_2;
        if ((s32) temp_a1_2 >= 0x4960) {
            phi_a3_5 = 0x495F;
        }
        arg0->unk3E6 = phi_a3_5;
    }
    temp_v0_3 = arg0->unk3E0;
    if ((s32) temp_v0_3 < -0x256F) {
        arg0->unk3E0 = -0x256F;
        return;
    }
    phi_a3_6 = temp_v0_3;
    if ((s32) temp_v0_3 >= 0x2570) {
        phi_a3_6 = 0x256F;
    }
    arg0->unk3E0 = phi_a3_6;
}

s32 func_80B00760(Actor *arg0, void *arg1) {
    f32 sp48;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s32 temp_s0_2;
    s32 temp_s0_3;
    void *temp_s0;
    s32 phi_v0;

    temp_s0 = arg1->unk1CCC;
    sp38 = 0.0f;
    sp40.unk0 = temp_s0->unk24;
    sp40.unk4 = (s32) temp_s0->unk28;
    sp40.unk8 = (s32) temp_s0->unk2C;
    sp40 -= 25.0f * Math_SinS(temp_s0->unkBE);
    sp48 -= 25.0f * Math_CosS(temp_s0->unkBE);
    sp3C = Math_Vec3f_StepTo(arg0 + 0x24, (Vec3f *) &sp40, 10.0f);
    temp_s0_2 = Math_SmoothStepToS(arg0 + 0xBE, temp_s0->unkBE, 1, 0x1770, (s16) 0x64) << 0x10;
    arg0->world.rot.y = arg0->shape.rot.y;
    temp_s0_3 = temp_s0_2 >> 0x10;
    if (gSaveContext.playerForm == 4) {
        sp38 = Math_SmoothStepToF(arg0 + 0xC4, -1500.0f, 1.0f, 150.0f, 0.0f);
    }
    if (sp3C == 0.0f) {
        phi_v0 = temp_s0_3;
        if (temp_s0_3 < 0) {
            phi_v0 = -temp_s0_3;
        }
        if ((phi_v0 < 0x64) && (sp38 == 0.0f)) {
            return 1;
        }
        goto block_8;
    }
block_8:
    return 0;
}

void func_80B008BC(EnTalkGibud *arg0, GlobalContext *arg1) {
    if (func_80AFF6A0 != arg0->actionFunc) {
        SkelAnime_FrameUpdateMatrix(arg0 + 0x190);
    }
}

void func_80B008FC(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk1D4;
    if ((func_80AFED7C == temp_v0) || (func_80AFF4AC == temp_v0) || (func_80AFF76C == temp_v0)) {
        Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    }
}

void func_80B0094C(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    s32 temp_v0_2;
    u8 temp_t8;
    u8 temp_v0;
    void *temp_v1;

    temp_v0 = arg0->unk155;
    temp_v1 = arg1->actorCtx.actorList[2].first;
    if ((temp_v0 & 2) != 0) {
        arg0->unk155 = (u8) (temp_v0 & 0xFFFD);
        sp2C = temp_v1;
        Actor_ApplyDamage(arg0);
        temp_t8 = arg0->colChkInfo.damageEffect;
        switch (temp_t8) {
        case 15:
            sp2C = temp_v1;
            func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 8);
            if (temp_v1->unkADC != 0) {
                arg0->unk3F7 = (s8) temp_v1->unkADD;
            }
            arg0->shape.yOffset = 0.0f;
            if (arg0->colChkInfo.health == 0) {
                func_80AFF880(arg0);
                return;
            }
            func_80AFF700(arg0);
            return;
        case 14:
            if (arg0->unk3F2 == 1) {
                arg0->colChkInfo.health = 0;
                arg0->shape.yOffset = 0.0f;
                func_80AFF880(arg0);
                return;
            }
            // Duplicate return node #25. Try simplifying control flow for better match
            return;
        case 2:
            func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 8);
            if (arg0->colChkInfo.health == 0) {
                func_80AFF880(arg0);
            } else {
                func_80AFF700(arg0);
            }
            arg0->unk3F0 = 0xB4;
            arg0->unk3F6 = 0;
            arg0->unk29C = 1.0f;
            return;
        case 4:
            func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 8);
            if (arg0->colChkInfo.health == 0) {
                func_80AFF880(arg0);
            } else {
                func_80AFF700(arg0);
            }
            arg0->unk3F0 = 0x3C;
            arg0->unk3F6 = 0x14;
            arg0->unk29C = 1.0f;
            return;
        case 12:
            temp_v0_2 = arg0->unk1D4;
            if ((func_80AFF030 != temp_v0_2) && ((func_80AFF6A0 != temp_v0_2) || (arg0->unk3EA == 0))) {
                arg0->unk3F0 = 0x28;
                arg0->unk3F6 = 0x1E;
                arg0->unk29C = 1.0f;
                func_80AFF618(arg0);
                return;
            }
            // Duplicate return node #25. Try simplifying control flow for better match
            return;
        case 1:
            if ((func_80AFF6A0 != arg0->unk1D4) || (arg0->unk3EA == 0)) {
                func_80AFF618(arg0);
            }
            // Duplicate return node #25. Try simplifying control flow for better match
            return;
        }
    } else {
    default:
    }
}



void func_80B00C94(Actor *arg0, GlobalContext *arg1) {
    void *sp34;
    f32 sp30;
    f32 sp28;
    Vec3f *sp20;
    Actor *temp_a1;
    Vec3f *temp_v0;
    s16 temp_a0;

    temp_a1 = arg0;
    arg0 = temp_a1;
    sp34 = arg1->actorCtx.actorList[2].first;
    Actor_UpdateBgCheckInfo(arg1, temp_a1, 30.0f, 20.0f, 35.0f, 0x1DU);
    if ((func_80AFF030 == arg0->unk1D4) && (arg0->unk3EC == 0) && ((arg0->bgCheckFlags & 8) != 0)) {
        temp_v0 = sp34 + 0x24;
        sp28.unk0 = sp34->world.pos.x;
        sp28.unk4 = (s32) temp_v0->y;
        sp28.unk8 = (s32) temp_v0->z;
        temp_a0 = arg0->wallYaw;
        arg0 = arg0;
        sp20 = temp_v0;
        sp28 += 10.0f * Math_SinS(temp_a0);
        sp30 += 10.0f * Math_CosS(arg0->wallYaw);
        Math_Vec3f_StepTo(sp20, (Vec3f *) &sp28, 5.0f);
    }
}

void func_80B00D9C(EnTalkGibud *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk3F0;
    if ((s32) temp_v0 > 0) {
        arg0->unk3F0 = temp_v0 - 1;
    }
    if ((s32) arg0->unk3F0 < 0x14) {
        Math_SmoothStepToF(arg0 + 0x2A0, 0.0f, 0.5f, 0.03f, 0.0f);
        arg0->unk29C = (f32) arg0->unk3F0 * 0.05f;
        return;
    }
    Math_SmoothStepToF(arg0 + 0x2A0, 0.5f, 0.1f, 0.02f, 0.0f);
}

void EnTalkGibud_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnTalkGibud *this = (EnTalkGibud *) thisx;
    func_80B004D0(&this->actor, globalCtx);
    func_80B0094C(&this->actor, globalCtx);
    this->actionFunc(this, globalCtx);
    func_80B008BC(this, globalCtx);
    func_80B008FC(&this->actor, globalCtx);
    func_80B00B8C(this, globalCtx);
    func_80B00C94(&this->actor, globalCtx);
    func_80B00D9C(this, globalCtx);
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    this->actor.focus.pos.y += 50.0f;
}

s32 func_80B00F08(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0xC) {
        arg4->y += arg5->unk3E6;
    } else if (arg1 == 0x17) {
        arg4->y += arg5->unk3E0;
    }
    return 0;
}

void func_80B00F64(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if ((arg4->unk3F0 != 0) && ((arg1 == 3) || (arg1 == 4) || (arg1 == 6) || (arg1 == 8) || (arg1 == 9) || (arg1 == 0xB) || (arg1 == 0xE) || (arg1 == 0x10) || (arg1 == 0x11) || (arg1 == 0x12) || (arg1 == 0x14) || (arg1 == 0x15) || (arg1 == 0x16) || (arg1 == 0x18) || (arg1 == 0x19))) {
        SysMatrix_GetStateTranslation(arg4 + (arg4->unk28C * 0xC) + 0x1D8);
        arg4->unk28C = (s32) (arg4->unk28C + 1);
    }
}

void EnTalkGibud_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnTalkGibud *this = (EnTalkGibud *) thisx;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    GraphicsContext *temp_s1;

    temp_s1 = globalCtx->state.gfxCtx;
    this->unk28C = 0;
    if (this->actor.shape.shadowAlpha == 0xFF) {
        func_8012C28C(globalCtx->state.gfxCtx);
        temp_v1 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v1 + 8;
        temp_v1->words.w0 = 0xFB000000;
        temp_v1->words.w1 = (u32) this->actor.shape.shadowAlpha;
        temp_v1_2 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v1_2 + 8;
        temp_v1_2->words.w1 = (u32) D_801AEFA0;
        temp_v1_2->words.w0 = 0xDB060020;
        temp_s1->polyOpa.p = SkelAnime_DrawSV2(globalCtx, this->unk190.skeleton, this->unk190.limbDrawTbl, (s32) this->unk190.dListCount, func_80B00F08, func_80B00F64, &this->actor, temp_s1->polyOpa.p);
    } else {
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v1_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v1_3 + 8;
        temp_v1_3->words.w0 = 0xFB000000;
        temp_v1_3->words.w1 = (u32) this->actor.shape.shadowAlpha;
        temp_v1_4 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v1_4 + 8;
        temp_v1_4->words.w1 = (u32) D_801AEF88;
        temp_v1_4->words.w0 = 0xDB060020;
        temp_s1->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk190.skeleton, this->unk190.limbDrawTbl, (s32) this->unk190.dListCount, func_80B00F08, func_80B00F64, &this->actor, temp_s1->polyXlu.p);
    }
    if ((s32) this->unk3F0 > 0) {
        func_800BE680(globalCtx, &this->actor, (Vec3f []) (Vec3f *) &this->unk1D8, 0xF, this->unk2A0, 0.5f, this->unk29C, (u8) (s32) this->unk3F6);
    }
}

