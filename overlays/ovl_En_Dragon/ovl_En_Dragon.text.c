void func_80B5EAA0(EnDragon *arg0, s32 arg1);       /* static */
void func_80B5EB40(EnDragon *arg0, GlobalContext *arg1, f32 arg2, f32 arg3, f32); /* static */
void func_80B5EDF0(EnDragon *arg0, s16);            /* static */
void func_80B5EF88(EnDragon *arg0);                 /* static */
void func_80B5F3A4(EnDragon *arg0, GlobalContext *arg1, s32 arg2, f32 arg3, f32 arg5, f32, f32, f32); /* static */
void func_80B5F888(EnDragon *arg0);                 /* static */
void func_80B60138(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80B6043C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80B60494(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern FlexSkeletonHeader D_06004398;
extern AnimationHeader D_060048B8;
static s32 D_80B605D0 = 0;
static DamageTable D_80B605F4 = {
    {
        0,
        0,
        0,
        0xF1,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
        0,
        0,
        0,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static ColliderJntSphElementInit D_80B60614 = {
    {
        {1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
        {0xD, {{0, 0, 0}, 0}, 1},
    },
    {
        {1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
        {0xC, {{0, 0, 0}, 0}, 1},
    },
    {
        {1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
        {0xC, {{0, 0, 0}, 0}, 1},
    },
    {
        {1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
        {0xA, {{0, 0, 0}, 0}, 1},
    },
    {
        {1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
        {0xA, {{0, 0, 0}, 0}, 1},
    },
    {{1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1}, {9, {{0, 0, 0}, 0}, 1}},
    {{1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1}, {9, {{0, 0, 0}, 0}, 1}},
    {{1, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1}, {9, {{0, 0, 0}, 0}, 1}},
};
static ColliderJntSphInit D_80B60734 = {{6, 0, 9, 9, 0x10, 0}, 8, &D_80B60614};
static ? D_80B60744;                                /* unable to generate initializer */
static ? D_80B60754;                                /* unable to generate initializer */
static ? D_80B60758;                                /* unable to generate initializer */
static ? D_80B60764;                                /* unable to generate initializer */
static Vec3f D_80B60770;                            /* type too large by 8; unable to generate initializer */
static f32 D_80B60774 = 0.0f;
static f32 D_80B60778 = 0.0f;
static Vec3f D_80B6077C;                            /* type too large by 8; unable to generate initializer */
static f32 D_80B60780 = 0.1f;
static ? D_80B60788;                                /* unable to generate initializer */
static ? D_80B60790;                                /* unable to generate initializer */
static ? D_80B607E8;                                /* unable to generate initializer */
static ? D_80B607F0;                                /* unable to generate initializer */
static ? D_80B60848;                                /* unable to generate initializer */
static ? D_80B60858;                                /* unable to generate initializer */
static ? D_80B60878;                                /* unable to generate initializer */

typedef struct EnDragon {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0x5A];                 /* maybe part of unk188[16]? */
    /* 0x01E8 */ Vec3s unk1E8;                      /* inferred */
    /* 0x01EE */ char pad1EE[0x5A];                 /* maybe part of unk1E8[16]? */
    /* 0x0248 */ void (*actionFunc)(EnDragon *, GlobalContext *);
    /* 0x024C */ s32 unk24C;                        /* inferred */
    /* 0x0250 */ u32 unk250;                        /* inferred */
    /* 0x0254 */ Vec3f unk254;                      /* inferred */
    /* 0x0260 */ Vec3f unk260;                      /* inferred */
    /* 0x026C */ Vec3f unk26C;                      /* inferred */
    /* 0x0278 */ char pad278[0x18];                 /* maybe part of unk26C[3]? */
    /* 0x0290 */ Vec3f unk290;                      /* inferred */
    /* 0x029C */ Vec3f unk29C;                      /* inferred */
    /* 0x02A8 */ s16 unk2A8;                        /* inferred */
    /* 0x02AA */ char pad2AA[0x4];                  /* maybe part of unk2A8[3]? */
    /* 0x02AE */ s16 unk2AE;                        /* inferred */
    /* 0x02B0 */ s16 unk2B0;                        /* inferred */
    /* 0x02B2 */ s16 unk2B2;                        /* inferred */
    /* 0x02B4 */ s16 unk2B4;                        /* inferred */
    /* 0x02B6 */ s16 unk2B6;                        /* inferred */
    /* 0x02B8 */ s16 unk2B8;                        /* inferred */
    /* 0x02BA */ s16 unk2BA;                        /* inferred */
    /* 0x02BC */ char pad2BC[0x2];                  /* maybe part of unk2BA[2]? */
    /* 0x02BE */ s16 unk2BE;                        /* inferred */
    /* 0x02C0 */ s16 unk2C0;                        /* inferred */
    /* 0x02C2 */ s16 unk2C2;                        /* inferred */
    /* 0x02C4 */ char pad2C4[0x4];                  /* maybe part of unk2C2[3]? */
    /* 0x02C8 */ s16 unk2C8;                        /* inferred */
    /* 0x02CA */ s16 unk2CA;                        /* inferred */
    /* 0x02CC */ s16 unk2CC;                        /* inferred */
    /* 0x02CE */ char pad2CE[0x2];                  /* maybe part of unk2CC[2]? */
    /* 0x02D0 */ f32 unk2D0;                        /* inferred */
    /* 0x02D4 */ f32 unk2D4;                        /* inferred */
    /* 0x02D8 */ char pad2D8[0x4];                  /* maybe part of unk2D4[2]? */
    /* 0x02DC */ ColliderJntSph unk2DC;             /* inferred */
    /* 0x02FC */ ColliderJntSphElement unk2FC;      /* inferred */
    /* 0x033C */ char pad33C[0x1C0];                /* maybe part of unk2FC[8]? */
} EnDragon;                                         /* size 0x4FC */

void EnDragon_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnDragon *this = (EnDragon *) thisx;
    ColliderJntSphElement *temp_v0;
    f32 temp_f0;

    SkelAnime_InitSV(globalCtx, &this->unk144, &D_06004398, &D_060048B8, &this->unk188, &this->unk1E8, 0x10);
    this->actor.colChkInfo.health = 4;
    this->actor.colChkInfo.damageTable = &D_80B605F4;
    this->actor.targetMode = 0xA;
    Collider_InitAndSetJntSph(globalCtx, &this->unk2DC, &this->actor, &D_80B60734, &this->unk2FC);
    this->unk2DC.elements->unk1F8 = 1.0f;
    temp_v0 = this->unk2DC.elements;
    temp_f0 = temp_v0->unk1F8;
    temp_v0->unk1B8 = temp_f0;
    this->unk2DC.elements->unk178 = temp_f0;
    this->unk2DC.elements->unk138 = temp_f0;
    this->unk2DC.elements->unkF8 = temp_f0;
    this->unk2DC.elements->unkB8 = temp_f0;
    this->unk2DC.elements->unk78 = temp_f0;
    this->unk2DC.elements->dim.scale = temp_f0;
    this->unk2DC.elements->dim.modelSphere.radius = 0x96;
    this->unk2DC.elements->dim.modelSphere.center.x = 0x1A4;
    this->unk2DC.elements->unk6E = 0xA0;
    this->unk2DC.elements->unk68 = 0x276;
    this->unk2DC.elements->unkAE = 0x82;
    this->unk2DC.elements->unkA8 = 0x276;
    this->unk2DC.elements->unkEE = 0xAA;
    this->unk2DC.elements->unkE8 = 0x398;
    this->unk2DC.elements->unk12E = 0x96;
    this->unk2DC.elements->unk128 = 0x212;
    this->unk2DC.elements->unk16E = 0x8C;
    this->unk2DC.elements->unk168 = 0x2DA;
    this->unk2DC.elements->unk1AE = 0x78;
    this->unk2DC.elements->unk1A8 = 0x1AE;
    this->unk2DC.elements->unk1EE = 0x6E;
    this->unk2DC.elements->unk1E8 = 0xA0;
    this->actor.colChkInfo.mass = 0xFF;
    this->unk250 = ((s32) this->actor.params >> 7) & 0x1F;
    this->unk2BA = 0;
    this->actor.hintId = 0xE;
    this->actor.flags &= 0xF7FFFFFF;
    this->unk2D4 = 0.5f;
    func_80B5EDF0(this, 0xA0);
}

void EnDragon_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnDragon *this = (EnDragon *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk2DC);
}

void func_80B5EAA0(EnDragon *arg0, s32 arg1) {
    AnimationHeaderCommon **sp30;
    AnimationHeaderCommon **temp_v1;
    s32 temp_t0;
    f32 phi_f0;

    arg0->unk24C = arg1;
    temp_v1 = (arg1 * 4) + &D_80B60744;
    sp30 = temp_v1;
    temp_t0 = arg0->unk24C;
    arg0->unk2D0 = (f32) SkelAnime_GetFrameCount(*temp_v1);
    phi_f0 = 0.0f;
    if (temp_t0 == 3) {
        phi_f0 = arg0->unk2D0;
    }
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) *temp_v1, 1.0f, phi_f0, arg0->unk2D0, (u8) (s32) *(&D_80B60754 + temp_t0), -4.0f);
}

void func_80B5EB40(EnDragon *arg0, GlobalContext *arg1, s32 arg2, f32 arg3) {
    Vec3f sp9C;
    Vec3f *temp_s1;
    f32 temp_f20;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 phi_v0;
    s32 phi_s0;
    s32 phi_s1;
    s32 phi_s7;

    temp_v0 = (s32) randPlusMinusPoint5Scaled(5.0f) + 0xA;
    phi_v0 = temp_v0;
    phi_s1 = 0;
    phi_s7 = temp_v0;
    if (arg0->unk2BA == 6) {
        temp_v0_2 = (s32) randPlusMinusPoint5Scaled(5.0f) + 0xA;
        phi_v0 = temp_v0_2;
        phi_s1 = 1;
        phi_s7 = temp_v0_2;
    }
    phi_s0 = 0;
    if (phi_v0 > 0) {
        temp_v0_3 = phi_s1 * 4;
        temp_s1 = &sp9C;
        do {
            Math_Vec3f_Copy(temp_s1, (Vec3f *) &arg2);
            D_80B60770.x = Rand_ZeroFloat(1.0f) * 23.0f;
            D_80B60774 = Rand_ZeroFloat(1.0f) * 10.0f;
            D_80B60778 = Rand_ZeroFloat(1.0f) * 23.0f;
            temp_f20 = (f32) phi_s0 * 30.0f;
            sp9C.x += randPlusMinusPoint5Scaled(temp_f20);
            sp9C.y += randPlusMinusPoint5Scaled(5.0f);
            sp9C.z += randPlusMinusPoint5Scaled(temp_f20);
            D_80B60780 = Rand_ZeroFloat(1.0f) * 20.0f * 3.0f;
            EffectSsDtBubble_SpawnCustomColor(arg1, temp_s1, &D_80B60770, &D_80B6077C, temp_v0_3 + &D_80B60758, temp_v0_3 + &D_80B60764, (s16) Rand_S16Offset(0x17C, 0xF0), (s16) 0x1E, (s16) 0);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != phi_s7);
    }
}

void func_80B5ED90(EnDragon *this, GlobalContext *globalCtx) {
    if (this->unk2B4 == 0) {
        func_800B8D50(globalCtx, &this->actor, 10.0f, this->actor.world.rot.y, 10.0f, 8U);
        func_80B5EDF0(this);
    }
}

void func_80B5EDF0(EnDragon *arg0) {
    func_80B5EAA0((EnDragon *)3);
    arg0->unk2BE = 0;
    arg0->unk2CC = 0;
    arg0->unk2B8 = 0;
    arg0->unk2CA = 0;
    arg0->unk2B4 = 0x1E;
    arg0->actionFunc = func_80B5EE3C;
}

void func_80B5EE3C(EnDragon *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    f32 temp_f2;

    SkelAnime_FrameUpdateMatrix(&this->unk144);
    if (this->unk2BA == 1) {
        func_80B5EF88(this);
        return;
    }
    if ((this->unk2B4 != 0) && (fabsf(this->actor.world.pos.x - this->actor.home.pos.x) > 101.0f) && (fabsf(this->actor.world.pos.z - this->actor.home.pos.z) > 101.0f)) {
        this->actor.speedXZ = -100.0f;
        return;
    }
    temp_f2 = this->actor.home.pos.x;
    temp_f0 = fabsf(this->actor.world.pos.x - temp_f2);
    this->actor.speedXZ = 0.0f;
    if ((temp_f0 > 4.0f) && (fabsf(this->actor.world.pos.z - this->actor.home.pos.z) > 4.0f)) {
        Math_ApproachF(&this->actor.world.pos.x, temp_f2, 0.3f, 200.0f);
        Math_ApproachF(&this->actor.world.pos.z, this->actor.home.pos.z, 0.3f, 200.0f);
        return;
    }
    if (this->unk2BA != 0) {
        this->unk2BA = 0;
    }
}

void func_80B5EF88(Actor *arg0) {
    arg0->unk2BE = 0;
    arg0->unk2B0 = (s16) arg0->unk2BE;
    Audio_PlayActorSound2(arg0, 0x3963U);
    arg0->unk2AE = 0xFA;
    arg0->unk248 = func_80B5EFD0;
}

void func_80B5EFD0(EnDragon *this, GlobalContext *globalCtx) {
    Actor *sp4C;
    f32 sp48;
    Vec3f sp38;
    Vec3f *sp30;
    PosRot *sp2C;
    PosRot *temp_a1;
    Vec3f *temp_v0;
    f32 temp_f0;
    s32 phi_v1;

    temp_v0 = &this->unk254;
    sp4C = globalCtx->actorCtx.actorList[2].first;
    sp48 = this->unk144.animCurrentFrame;
    sp30 = temp_v0;
    func_80B5EB40(this, subroutine_arg2, temp_v0->y, temp_v0->z);
    if ((s32) this->unk2BA >= 3) {
        Audio_PlayActorSound2(&this->actor, 0x3857U);
        func_80B5EDF0(this);
        return;
    }
    if (this->unk2AE == 0) {
        this->unk2BA = 4;
        Audio_PlayActorSound2(&this->actor, 0x3857U);
        func_80B5EDF0(this);
        return;
    }
    if (this->unk2BE == 0) {
        Math_Vec3f_Copy(&sp38, &this->unk260);
        Audio_PlayActorSound2(&this->actor, 0x3053U);
        sp38.x += Math_SinS(this->actor.world.rot.y) * -530.0f;
        sp38.z += Math_CosS(this->actor.world.rot.y) * -530.0f;
        this->actor.speedXZ = 40.0f;
        Math_SmoothStepToS(&this->unk2A8, 0xFA0, 5, 0xBB8, (s16) 0x14);
        if ((fabsf(this->actor.world.pos.x - sp38.x) < 51.0f) && (fabsf(this->actor.world.pos.z - sp38.z) < 51.0f) && (this->actor.speedXZ = 0.0f, Math_ApproachF(&this->actor.world.pos.x, sp38.x, 0.3f, 50.0f), Math_ApproachF(&this->actor.world.pos.z, sp38.z, 0.3f, 50.0f), (fabsf(this->actor.world.pos.x - sp38.x) < 4.0f)) && (fabsf(this->actor.world.pos.z - sp38.z) < 4.0f)) {
            if (this->unk24C != 1) {
                func_80B5EAA0(this, 1);
            }
            this->unk2BE = 1;
            return;
        }
        // Duplicate return node #29. Try simplifying control flow for better match
        return;
    }
    Math_SmoothStepToS(&this->unk2A8, 0, 5, 0xBB8, (s16) 0x14);
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    if (this->unk2BE == 1) {
        if (!(sp48 < this->unk2D0)) {
            this->unk2BE = 2;
            goto block_15;
        }
        // Duplicate return node #29. Try simplifying control flow for better match
        return;
    }
block_15:
    temp_a1 = &sp4C->world;
    sp2C = temp_a1;
    if ((s32) (s16) (Math_Vec3f_Yaw(sp30, &temp_a1->pos) - this->actor.shape.rot.y) < 0) {
        phi_v1 = (s32) (s16) (Math_Vec3f_Yaw(sp30, &temp_a1->pos) - this->actor.shape.rot.y) * -0x10000;
    } else {
        phi_v1 = (Math_Vec3f_Yaw(sp30, &temp_a1->pos) - this->actor.shape.rot.y) << 0x10;
    }
    if ((phi_v1 >> 0x10) < 0x5000) {
        if ((this->unk2D0 <= sp48) && (this->unk2B2 == 0)) {
            if (this->unk24C != 1) {
                func_80B5EAA0(this, 1);
            }
            this->unk2BE = 2;
        }
        this->unk2B0 = 0;
        return;
    }
    if (this->unk2BE == 2) {
        func_80B5EAA0(this, 0);
        temp_f0 = Rand_ZeroFloat(20.0f);
        this->unk2BE = 3;
        this->unk2B2 = (s16) (s32) (temp_f0 + this->unk2D0);
    }
    this->unk2B0 += 1;
    if ((s32) this->unk2B0 >= 0x3D) {
        this->unk2BA = 4;
        Audio_PlayActorSound2(&this->actor, 0x3857U);
        func_80B5EDF0(this);
    }
}

void func_80B5F3A4(EnDragon *arg0, GlobalContext *arg1, s32 arg2, f32 arg3, f32 arg5) {
    Vec3f *sp24;
    Vec3f *sp20;
    Vec3f *temp_a0;
    Vec3f *temp_a2;

    arg0->unk2C8 = ActorCutscene_GetCurrentCamera((s16) arg0->actor.cutscene);
    temp_a0 = arg0 + 0x278;
    sp24 = temp_a0;
    Math_Vec3f_Copy(temp_a0, (Vec3f *) &arg2);
    temp_a2 = arg0 + 0x284;
    sp20 = temp_a2;
    Math_Vec3f_Copy(temp_a2, (Vec3f *) &arg5);
    Play_CameraSetAtEye(arg1, arg0->unk2C8, temp_a2, sp24);
}

void func_80B5F418(EnDragon *this, GlobalContext *globalCtx) {
    Actor *sp34;
    Vec3f sp28;
    s16 temp_v0;

    sp34 = globalCtx->actorCtx.actorList[2].first;
    if (ActorCutscene_GetCanPlayNext(this->unk2C0) == 0) {
        ActorCutscene_SetIntentToPlay(this->unk2C0);
        return;
    }
    ActorCutscene_StartAndSetUnkLinkFields(this->unk2C0, &this->actor);
    Math_Vec3f_Copy(&sp28, &this->unk260);
    sp28.x += Math_SinS(this->actor.world.rot.y) * -530.0f;
    sp28.z += Math_CosS(this->actor.world.rot.y) * -530.0f;
    Math_Vec3f_Copy(&this->actor.world.pos, &sp28);
    temp_v0 = Math_Vec3f_Yaw(&sp34->world.pos, &this->unk254);
    sp34->shape.rot.y = temp_v0;
    sp34->world.rot.y = temp_v0;
    this->unk2BE = 0;
    this->unk2CA = 0;
    this->unk2B8 = 0;
    func_80B5EAA0(this, 3);
    this->actionFunc = func_80B5F508;
}

void func_80B5F508(EnDragon *this, GlobalContext *globalCtx) {
    Actor *sp5C;
    Vec3f sp50;
    Vec3f sp44;
    Vec3f *sp3C;
    Vec3f *sp38;
    PosRot *sp34;
    Vec3f *temp_a1;

    sp5C = globalCtx->actorCtx.actorList[2].first;
    this->unk2C8 = ActorCutscene_GetCurrentCamera((s16) this->actor.cutscene);
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    if (this->unk2CA == 0) {
        temp_a1 = &this->unk26C;
        if (this->unk2B8 == 0) {
            sp3C = temp_a1;
            Math_Vec3f_Copy(&sp5C->world.pos, temp_a1);
            Math_Vec3f_Copy(&this->unk290, temp_a1);
            this->unk2B8 = 1;
        } else {
            Math_Vec3f_Copy(&sp5C->world.pos, &this->unk290);
        }
        Math_Vec3f_Copy(&sp50, &this->unk260);
        sp50.x += Math_SinS(this->actor.world.rot.y) * -930.0f;
        sp50.z += Math_CosS(this->actor.world.rot.y) * -930.0f;
        Math_Vec3f_Copy(&this->actor.world.pos, &sp50);
        this->unk2A8 = 0x1450;
        this->actor.speedXZ = 60.0f;
    }
    this->unk2CA += 1;
    sp34 = &this->actor.world;
    sp38 = &this->unk260;
    Math_SmoothStepToS(&this->actor.shape.rot.z, *(&D_80B60848 + (this->unk250 * 2)), 0xA, 0x1F4, (s16) 0x14);
    func_80B5EB40(this, globalCtx, subroutine_arg2, this->unk254.y, this->unk254.z);
    Math_Vec3f_Copy(&sp50, sp38);
    sp50.x += Math_SinS(this->actor.world.rot.y) * *(&D_80B60788 + (this->unk250 * 0xC));
    sp50.y += (&D_80B60788 + (this->unk250 * 0xC))->unk4;
    sp50.z += Math_CosS(this->actor.world.rot.y) * *(&D_80B60790 + (this->unk250 * 0xC));
    Math_Vec3f_Copy(&sp44, &sp34->pos);
    sp44.x += Math_SinS(this->actor.world.rot.y) * *(&D_80B607E8 + (this->unk250 * 0xC));
    sp44.y += (&D_80B607E8 + (this->unk250 * 0xC))->unk4;
    sp44.z += Math_CosS(this->actor.world.rot.y) * *(&D_80B607F0 + (this->unk250 * 0xC));
    func_80B5F3A4(this, globalCtx, subroutine_arg2, sp50.y, sp50.z, sp44.x, sp44.y, sp44.z);
    if (*(&D_80B60858 + (this->unk250 * 4)) < (s32) this->unk2CA) {
        if (this->unk2BE == 0) {
            func_800B7298(globalCtx, &this->actor, 6U);
            this->unk2BE = 1;
        }
        ((? (*)(GlobalContext *, Actor *)) globalCtx->unk_18770)(globalCtx, sp5C);
        sp5C->parent = &this->actor;
        sp5C->unkAE8 = 0x32;
        this->unk2BA = 2;
        Audio_PlayActorSound2(&this->actor, 0x3943U);
        func_80B5F888(this);
    }
}

void func_80B5F888(EnDragon *arg0) {
    if (arg0->unk24C != 1) {
        func_80B5EAA0((EnDragon *)1);
    }
    arg0->unk2B0 = 0;
    arg0->unk2CA = 0;
    arg0->unk2BE = 0;
    arg0->actionFunc = func_80B5F8D8;
}

void func_80B5F8D8(EnDragon *this, GlobalContext *globalCtx) {
    f32 sp58;
    Vec3f sp4C;
    Vec3f sp40;
    PosRot *sp34;
    PosRot *sp30;
    Actor *temp_s1;
    ColliderJntSphElement *temp_v0_4;
    PosRot *temp_a1;
    f32 temp_f16;
    f32 temp_f6;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;

    temp_s1 = globalCtx->actorCtx.actorList[2].first;
    sp58 = this->unk144.animCurrentFrame;
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    Math_SmoothStepToS(&this->actor.shape.rot.z, 0, 0xA, 0x1388, (s16) 0);
    if ((globalCtx->gameplayFrames & 0xF) == 0) {
        globalCtx->damagePlayer(globalCtx, -2);
        func_800B8E58(&this->actor, (temp_s1->unkA68->unk92 + 0x6805) & 0xFFFF);
        Audio_PlayActorSound2(&this->actor, 0x38D7U);
        CollisionCheck_GreenBlood(globalCtx, NULL, &temp_s1->world.pos);
    }
    temp_a1 = &this->actor.world;
    sp34 = &temp_s1->world;
    sp30 = temp_a1;
    Math_Vec3f_Copy(&sp4C, &temp_a1->pos);
    temp_f16 = sp4C.x + (Math_SinS(this->actor.world.rot.y) * 3000.0f);
    sp4C.y += 600.0f;
    sp4C.x = temp_f16;
    sp4C.z += Math_CosS(this->actor.world.rot.y) * 3000.0f;
    Math_Vec3f_Copy(&sp40, &temp_a1->pos);
    temp_f6 = sp40.x + (Math_SinS(this->actor.world.rot.y) * 1200.0f);
    sp40.y += -100.0f;
    sp40.x = temp_f6;
    sp40.z += Math_CosS(this->actor.world.rot.y) * 1200.0f;
    func_80B5F3A4(this, globalCtx, subroutine_arg2, sp4C.y, sp4C.z, sp40.x, sp40.y, sp40.z);
    temp_v0 = this->actor.world.rot.y;
    temp_s1->shape.rot.y = temp_v0;
    temp_s1->world.rot.y = temp_v0;
    temp_v0_2 = this->actor.world.rot.x;
    temp_s1->shape.rot.x = temp_v0_2;
    temp_s1->world.rot.x = temp_v0_2;
    temp_v0_3 = this->actor.world.rot.z - 0x36B0;
    temp_s1->shape.rot.z = temp_v0_3;
    temp_s1->world.rot.z = temp_v0_3;
    Math_Vec3f_Copy(&sp34->pos, &this->unk26C);
    this->unk2A8 = 0xC8;
    Math_Vec3f_Copy(&sp4C, &this->unk260);
    sp4C.x += Math_SinS(this->actor.world.rot.y) * -530.0f;
    sp4C.z += Math_CosS(this->actor.world.rot.y) * -530.0f;
    Math_ApproachF(&sp30->pos.x, sp4C.x, 0.3f, 200.0f);
    Math_ApproachF(&this->actor.world.pos.y, sp4C.y, 0.3f, 200.0f);
    Math_ApproachF(&this->actor.world.pos.z, sp4C.z, 0.3f, 200.0f);
    if (((s32) this->unk2BE <= 0) && (this->unk2D0 <= sp58)) {
        Audio_PlayActorSound2(&this->actor, 0x38D7U);
        if (this->unk24C != 1) {
            func_80B5EAA0(this, 1);
        }
        this->unk2BE += 1;
    }
    if (((this->unk2BE != 0) && (this->unk2D0 <= sp58)) || ((temp_s1->unkA70 & 0x80) == 0) || (temp_v0_4 = this->unk2DC.elements, ((temp_v0_4->info.bumperFlags & 2) != 0)) || ((temp_v0_4->unk56 & 2) != 0) || ((temp_v0_4->unk96 & 2) != 0)) {
        temp_s1->parent = NULL;
        this->unk2B6 = 0x1E;
        ActorCutscene_Stop(this->unk2C0);
        if ((temp_s1->unkA70 & 0x80) != 0) {
            temp_s1->unkAE8 = 0x64;
        }
        this->actor.flags &= 0xFFEFFFFF;
        if ((this->unk2BE != 0) && (this->unk2D0 <= sp58)) {
            this->unk2B4 = 3;
            this->actionFunc = func_80B5ED90;
            return;
        }
        func_80B5EDF0(this);
        // Duplicate return node #19. Try simplifying control flow for better match
    }
}

void func_80B5FCC0(EnDragon *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCanPlayNext(this->unk2C2) == 0) {
        ActorCutscene_SetIntentToPlay(this->unk2C2);
        return;
    }
    ActorCutscene_StartAndSetUnkLinkFields(this->unk2C2, &this->actor);
    this->unk2D0 = (f32) SkelAnime_GetFrameCount(&D_060048B8.common);
    SkelAnime_ChangeAnim(&this->unk144, &D_060048B8, 1.0f, 0.0f, 0.0f, (u8) 2, 0.0f);
    this->unk2B4 = 0x14;
    this->actionFunc = func_80B5FD68;
}

void func_80B5FD68(EnDragon *this, GlobalContext *globalCtx) {
    Vec3f sp54;
    Vec3f *sp48;
    GameInfo *temp_v0;
    Vec3f *temp_v1;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f2;
    s32 temp_t7;
    u32 temp_t4;

    SkelAnime_FrameUpdateMatrix(&this->unk144);
    this->unk2A8 = 0xFA0;
    this->actor.shape.rot.z += 0x1000;
    temp_v1 = &this->unk254;
    sp48 = temp_v1;
    func_80B5EB40(this, globalCtx, subroutine_arg2, temp_v1->y, temp_v1->z);
    if ((this->unk2B4 != 0) && (fabsf(this->actor.world.pos.x - this->actor.home.pos.x) > 121.0f) && (fabsf(this->actor.world.pos.z - this->actor.home.pos.z) > 121.0f)) {
        this->actor.speedXZ = -120.0f;
        if (((this->unk250 & 1) == 0) && (Rand_ZeroOne() < 0.5f) && (((globalCtx->gameplayFrames == 0) & 0x1F) != 0)) {
            Item_DropCollectibleRandom(globalCtx, NULL, sp48, 0x90);
        }
        this->unk2BA = 6;
        return;
    }
    temp_f2 = this->actor.home.pos.x;
    temp_f0 = fabsf(this->actor.world.pos.x - temp_f2);
    this->actor.speedXZ = 0.0f;
    if ((temp_f0 > 20.0f) && (fabsf(this->actor.world.pos.z - this->actor.home.pos.z) > 20.0f)) {
        Math_ApproachF(&this->actor.world.pos.x, temp_f2, 0.3f, 300.0f);
        Math_ApproachF(&this->actor.world.pos.z, this->actor.home.pos.z, 0.3f, 300.0f);
        return;
    }
    temp_t7 = D_80B605D0 + 1;
    D_80B605D0 = temp_t7;
    if (temp_t7 >= (gGameInfo->data[2439] + 8)) {
        Math_Vec3f_Copy(&sp54, &this->actor.parent->world.pos);
        temp_v0 = gGameInfo;
        sp54.x += Math_SinS((s16) (this->actor.parent->world.rot.y + 0x8000)) * (500.0f + (f32) temp_v0->data[2438]);
        sp54.y += -100.0f + (f32) temp_v0->data[2433];
        temp_f16 = sp54.z + (Math_CosS((s16) (this->actor.parent->world.rot.y + 0x8000)) * (500.0f + (f32) gGameInfo->data[2438]));
        sp54.z = temp_f16;
        if (Actor_SpawnAsChildAndCutscene(&globalCtx->actorCtx, globalCtx, 0x205, sp54.x, sp54.y, temp_f16, (s16) 0, (s16) (s32) this->actor.shape.rot.y, (s16) 0, 0x4000, (u32) this->actor.cutscene, (s32) this->actor.unk20, NULL) != 0) {
            gSaveContext.weekEventReg[13] |= 1;
            temp_t4 = this->unk250;
            switch (temp_t4) {
            case 0:
                gSaveContext.weekEventReg[83] |= 0x10;
                break;
            case 1:
                gSaveContext.weekEventReg[83] |= 0x20;
                break;
            case 2:
                gSaveContext.weekEventReg[83] |= 0x40;
                break;
            case 3:
                gSaveContext.weekEventReg[83] |= 0x80;
                break;
            case 4:
                gSaveContext.weekEventReg[84] |= 1;
                break;
            case 5:
                gSaveContext.weekEventReg[84] |= 2;
                break;
            case 6:
                gSaveContext.weekEventReg[84] |= 4;
                break;
            case 7:
                gSaveContext.weekEventReg[84] |= 8;
                break;
            }
        }
    }
    Actor_MarkForDeath(&this->actor);
}

void func_80B60138(Actor *arg0, GlobalContext *arg1) {
    void *sp34;
    u32 sp30;
    u32 temp_t4;
    u32 temp_t6;
    void *temp_v0;

    sp34 = arg1->actorCtx.actorList[2].first;
    if ((arg0->unk2BA == 1) && ((temp_v0 = arg0->unk2F8, ((temp_v0->unk96 & 2) != 0)) || ((temp_v0->unkD6 & 2) != 0) || ((temp_v0->unk116 & 2) != 0) || ((temp_v0->unk156 & 2) != 0) || ((temp_v0->unk196 & 2) != 0) || ((temp_v0->unk1D6 & 2) != 0))) {
        Actor_ApplyDamage(arg0);
        func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x19);
        if ((s32) arg0->colChkInfo.health > 0) {
            Audio_PlayActorSound2(arg0, 0x38D1U);
            arg0->unk2BA = 3;
        } else {
            Enemy_StartFinishingBlow(arg1, arg0);
            Audio_PlayActorSound2(arg0, 0x38D0U);
            temp_t4 = arg0->flags | 0x8000000;
            temp_t6 = temp_t4 & ~1;
            arg0->flags = temp_t4;
            arg0->flags = temp_t6;
            arg0->unk2BA = 5;
            arg0->flags = temp_t6 | 0x100000;
            arg0->unk248 = func_80B5FCC0;
        }
    }
    if ((arg0->unk2BA == 1) && (arg0->unk2B6 == 0) && (sp34->unkD5C == 0) && ((arg0->unk2F8->unk17 & 2) != 0) && (!(func_800B64FC(arg1, 1000.0f, &arg0->world.pos, &sp30) >= 0.0f) || (sp30 != 1))) {
        arg0->speedXZ = 0.0f;
        arg0->unk2BA = 2;
        arg0->flags |= 0x100000;
        arg0->unk248 = func_80B5F418;
    }
}

void EnDragon_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnDragon *this = (EnDragon *) thisx;
    CollisionCheckContext *sp24;
    ColliderJntSph *sp20;
    ColliderJntSph *temp_a2;
    CollisionCheckContext *temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;

    temp_v0 = this->unk2AE;
    if (temp_v0 != 0) {
        this->unk2AE = temp_v0 - 1;
    }
    temp_v0_2 = this->unk2B4;
    if (temp_v0_2 != 0) {
        this->unk2B4 = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk2B2;
    if (temp_v0_3 != 0) {
        this->unk2B2 = temp_v0_3 - 1;
    }
    temp_v0_4 = this->unk2B6;
    if (temp_v0_4 != 0) {
        this->unk2B6 = temp_v0_4 - 1;
    }
    func_80B60138(&this->actor, globalCtx);
    this->actor.shape.rot.y = this->actor.world.rot.y;
    Math_Vec3f_Copy(&this->actor.focus.pos, &this->unk29C);
    Math_Vec3s_Copy(&this->actor.focus.rot, &this->actor.world.rot);
    Actor_SetScale(&this->actor, this->unk2D4);
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    if (this->unk2BA != 2) {
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->unk2DC.base);
    }
    if ((s32) this->unk2BA < 3) {
        temp_a1 = &globalCtx->colChkCtx;
        temp_a2 = &this->unk2DC;
        sp20 = temp_a2;
        sp24 = temp_a1;
        CollisionCheck_SetAC(globalCtx, temp_a1, &temp_a2->base);
        CollisionCheck_SetAT(globalCtx, temp_a1, &temp_a2->base);
    }
}

s32 func_80B6043C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0xF) {
        arg4->x += arg5->unk2AC;
        arg4->y += arg5->unk2AA;
        arg4->z += arg5->unk2A8;
    }
    return 0;
}

void func_80B60494(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 *temp_a0;

    sp18.unk0 = D_80B60878.unk0;
    sp18.unk4 = (s32) D_80B60878.unk4;
    sp18.unk8 = (s32) D_80B60878.unk8;
    if (arg1 == 0xF) {
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x254);
        temp_a0 = &sp18;
        sp18 = 0x43AF0000;
        sp1C = -120.0f;
        sp20 = -60.0f;
        SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, arg4 + 0x26C);
    }
    if (arg1 == 0xB) {
        SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x29C);
    }
    Collider_UpdateSpheres(arg1, arg4 + 0x2DC);
}

void EnDragon_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnDragon *this = (EnDragon *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80B6043C, func_80B60494, &this->actor);
}

