typedef struct EnSyatekiDekunuts {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x188 */ void (*actionFunc)(EnSyatekiDekunuts *, GlobalContext *);
    /* 0x18C */ ColliderCylinder unk18C;            /* inferred */
    /* 0x1D8 */ s16 unk1D8;                         /* inferred */
    /* 0x1DA */ s16 unk1DA;                         /* inferred */
    /* 0x1DC */ s16 unk1DC;                         /* inferred */
    /* 0x1DE */ char pad1DE[0x4];                   /* maybe part of unk1DC[3]? */
    /* 0x1E2 */ s16 unk1E2;                         /* inferred */
    /* 0x1E4 */ void *unk1E4;                       /* inferred */
    /* 0x1E8 */ s16 unk1E8;                         /* inferred */
    /* 0x1EA */ s16 unk1EA;                         /* inferred */
    /* 0x1EC */ s16 unk1EC;                         /* inferred */
    /* 0x1EE */ s16 unk1EE;                         /* inferred */
    /* 0x1F0 */ s16 unk1F0;                         /* inferred */
    /* 0x1F2 */ s16 unk1F2;                         /* inferred */
    /* 0x1F4 */ Vec3s unk1F4;                       /* inferred */
    /* 0x1FA */ char pad1FA[0x36];                  /* maybe part of unk1F4[10]? */
    /* 0x230 */ Vec3s unk230;                       /* inferred */
    /* 0x236 */ char pad236[0x3A];                  /* maybe part of unk230[10]? */
} EnSyatekiDekunuts;                                /* size = 0x270 */

struct _mips2c_stack_EnSyatekiDekunuts_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnSyatekiDekunuts_Draw {
    /* 0x00 */ char pad0[0x6C];
    /* 0x6C */ EnSyatekiDekunuts *sp6C;             /* inferred */
};                                                  /* size = 0x70 */

struct _mips2c_stack_EnSyatekiDekunuts_Init {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ ColliderCylinder *sp3C;              /* inferred */
    /* 0x40 */ char pad40[0x14];                    /* maybe part of sp3C[6]? */
    /* 0x54 */ EnSyatekiDekunuts *sp54;             /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnSyatekiDekunuts_Update {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A2BE54 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2BF18 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ Actor *sp1C;                         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A2BFC4 {
    /* 0x00 */ char pad0[0x4];
    /* 0x04 */ ? sp4;                               /* inferred */
    /* 0x04 */ char pad4[0x10];
    /* 0x14 */ f32 sp14;                            /* inferred */
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A2C0F8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2C150 {};              /* size 0x0 */

struct _mips2c_stack_func_80A2C168 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2C1AC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2C208 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A2C27C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2C2E0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2C33C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2C3AC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2C3F0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2C478 {};              /* size 0x0 */

struct _mips2c_stack_func_80A2C48C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2C4D0 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A2C5DC {
    /* 0x00 */ char pad0[0x3C];
    /* 0x3C */ SkelAnime *sp3C;                     /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ Actor *sp4C;                         /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80A2C8A0 {};              /* size 0x0 */

? EffectSsExtra_Spawn(GlobalContext *, void *, ? *, ? *, s32, s32); /* extern */
void func_80A2BE54(EnSyatekiDekunuts *arg0);        /* static */
void func_80A2BFC4(s16 arg0);                       /* static */
void func_80A2C150(EnSyatekiDekunuts *arg0);        /* static */
void func_80A2C1AC(Actor *arg0);                    /* static */
void func_80A2C27C(EnSyatekiDekunuts *arg0);        /* static */
void func_80A2C33C(EnSyatekiDekunuts *this, GlobalContext *globalCtx); /* static */
void func_80A2C3AC(void *arg0);                     /* static */
void func_80A2C478(EnSyatekiDekunuts *arg0, EnSyatekiDekunuts *); /* static */
void func_80A2C4D0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A2C8A0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
extern ? D_06001E50;
extern SkeletonHeader D_06002468;
extern AnimationHeader D_06002A5C;
extern AnimationHeader D_06003180;
static ColliderCylinderInit D_80A2CAB0 = {
    {6, 0, 9, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0},
    {0x30, 0x50, 0, {0, 0, 0}},
};
static ? D_80A2CADC;                                /* unable to generate initializer */
static ActorAnimationEntry D_80A2CAE8[7] = {
    {(AnimationHeader *)0x6003180, 1.0f, 0.0f, 0.0f, 2, -1.0f},
    {(AnimationHeader *)0x6002A5C, 1.0f, 0.0f, 0.0f, 2, -1.0f},
    {(AnimationHeader *)0x600326C, 1.0f, 0.0f, 0.0f, 0, -1.0f},
    {(AnimationHeader *)0x6002FA4, 1.0f, 0.0f, 0.0f, 0, -1.0f},
    {(AnimationHeader *)0x600259C, 1.0f, 0.0f, 0.0f, 2, -1.0f},
    {(AnimationHeader *)0x6002BD4, 1.0f, 0.0f, 0.0f, 2, -1.0f},
    {(AnimationHeader *)0x6002DD4, 1.0f, 0.0f, 0.0f, 2, -1.0f},
};
static InitChainEntry D_80A2CB90[3];                /* unable to generate initializer */
static s32 D_80A2CB9C = 1;
static ? D_80A2CBA0;                                /* unable to generate initializer */
static ? D_80A2CBAC;                                /* unable to generate initializer */
static Color_RGBA8 D_80A2CBB8 = {0xFF, 0xFF, 0xFF, 0xFF};
static Color_RGBA8 D_80A2CBBC = {0x96, 0x96, 0x96, 0};

void EnSyatekiDekunuts_Init(EnSyatekiDekunuts *this, GlobalContext *globalCtx) {
    EnSyatekiDekunuts *sp54;
    ColliderCylinder *sp3C;
    ColliderCylinder *temp_a1;
    Path *temp_s0;
    Path *temp_s0_2;
    Path *temp_s0_3;
    s32 temp_v0;
    s32 phi_v0;
    Path *phi_s0;
    s32 phi_v0_2;
    Path *phi_s0_2;
    Path *phi_s0_3;
    Path *phi_s0_4;
    EnSyatekiDekunuts *this = (EnSyatekiDekunuts *) thisx;

    sp54 = this;
    temp_a1 = &this->unk18C;
    temp_s0 = this->actor.parent->unk18C;
    sp3C = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80A2CAB0);
    if ((this->actor.params & 0xF) == 1) {
        Actor_SetScale((Actor *) this, 0.01f);
        this->unk1CC = (unaligned s32) D_80A2CADC.unk0;
        this->unk1D0 = (unaligned s32) D_80A2CADC.unk4;
        this->unk1D4 = (unaligned s32) D_80A2CADC.unk8;
        phi_v0 = 3;
    } else {
        Actor_SetScale((Actor *) this, 0.02f);
        phi_v0 = 1;
    }
    phi_s0_3 = temp_s0;
    if (phi_v0 != temp_s0->unk2) {
        phi_s0 = temp_s0;
        do {
            temp_s0_2 = &globalCtx->setupPathList[phi_s0->unk1];
            phi_s0 = temp_s0_2;
            phi_s0_3 = temp_s0_2;
        } while (phi_v0 != temp_s0_2->unk2);
    }
    phi_v0_2 = 0;
    phi_s0_2 = phi_s0_3;
    phi_s0_4 = phi_s0_3;
    if (((s32) (this->actor.params & 0xFF00) >> 8) > 0) {
        do {
            temp_v0 = phi_v0_2 + 1;
            temp_s0_3 = &globalCtx->setupPathList[phi_s0_4->unk1];
            phi_v0_2 = temp_v0;
            phi_s0_2 = temp_s0_3;
            phi_s0_4 = temp_s0_3;
        } while (temp_v0 < ((s32) (sp54->actor.params & 0xFF00) >> 8));
    }
    if (D_80A2CB9C == 1) {
        this->unk1EC = 1;
        D_80A2CB9C = 0;
    } else {
        this->unk1EC = 0;
    }
    Actor_ProcessInitChain((Actor *) this, D_80A2CB90);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 35.0f);
    SkelAnime_Init(globalCtx, &this->unk144, &D_06002468, &D_06002A5C, &this->unk1F4, &this->unk230, 0xA);
    if (phi_s0_2 == 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->unk1E4 = Lib_SegmentedToVirtual(phi_s0_2->points);
    this->unk1E8 = (s16) ((s32) (this->actor.params & 0xF0) >> 4);
    this->unk1D8 = 0;
    this->unk1DC = 0;
    this->unk1DA = 0;
    this->unk1EA = (s16) phi_s0_2->count;
    func_80A2BE54(this);
}

void EnSyatekiDekunuts_Destroy(EnSyatekiDekunuts *this, GlobalContext *globalCtx) {
    EnSyatekiDekunuts *this = (EnSyatekiDekunuts *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk18C);
}

void func_80A2BE54(EnSyatekiDekunuts *arg0) {
    SkelAnime *temp_a0;
    void *temp_v0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimPlaybackStop(temp_a0, &D_06003180, 0.0f);
    temp_v0 = arg0 + 8;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.world.pos.x = temp_v0->unk0;
    arg0->actor.world.pos.y = temp_v0->unk4;
    arg0->actor.world.pos.z = temp_v0->unk8;
    arg0->unk30 = (s32) temp_v0->unkC;
    arg0->unk34 = (s32) temp_v0->unk10;
    arg0->actor.prevPos.x = temp_v0->unk0;
    arg0->actor.prevPos.y = temp_v0->unk4;
    arg0->unkBC = (unaligned s32) arg0->unk30;
    arg0->unk1D8 = 0;
    arg0->unk1DC = 0;
    arg0->actor.prevPos.z = temp_v0->unk8;
    arg0->actor.shape.rot.z = (u16) arg0->actor.world.rot.z;
    if ((arg0->actor.params & 0xF) != 1) {
        arg0->unk1E2 = 1;
    }
    arg0->actionFunc = func_80A2BF18;
}

void func_80A2BF18(EnSyatekiDekunuts *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    Actor *temp_v0;
    s16 temp_v1;

    temp_v0 = this->actor.parent;
    temp_v1 = temp_v0->unk26A;
    if ((temp_v1 == 1) && (this->unk1E2 == 1) && ((temp_v0->unk272 & (1 << this->unk1E8)) != 0)) {
        sp1C = temp_v0;
        func_80A2BFC4(1);
    } else if (temp_v1 != 1) {
        this->unk1E2 = 1;
    }
    if ((this->actor.parent->unk272 == 0) && (this->actor.parent->unk274 == 0) && ((this->actor.params & 0xF) != 1)) {
        this->unk1E2 = 1;
    }
}

void func_80A2BFC4(void *arg0) {
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    ? sp4;
    s16 temp_v1;
    void *temp_v0;

    arg0->unk1D8 = 0;
    temp_v0 = arg0->unk120;
    sp14 = (f32) *(arg0->unk1E4 + (arg0->unk1E8 * 6));
    sp18 = (f32) (arg0->unk1E4 + (arg0->unk1E8 * 6))->unk2;
    sp1C = (f32) (arg0->unk1E4 + (arg0->unk1E8 * 6))->unk4;
    sp4.unk0 = (f32) sp14.unk0;
    sp4.unk4 = (s32) sp14.unk4;
    sp4.unk8 = (s32) sp14.unk8;
    arg0->unk108 = (f32) sp4.unk0;
    temp_v1 = arg0->unk92;
    arg0->unk10C = (s32) sp4.unk4;
    arg0->unk110 = (s32) sp4.unk8;
    arg0->unk24 = (f32) sp4.unk0;
    arg0->unk28 = (s32) sp4.unk4;
    arg0->unk32 = temp_v1;
    arg0->unkBE = temp_v1;
    arg0->unk2C = (s32) sp4.unk8;
    arg0->unk1EE = (s16) (0x8C - (temp_v0->unk27C * 0x14));
    if ((temp_v0->unk27C & 1) != 0) {
        arg0->unk1F0 = 1;
        arg0->unk1F2 = 0;
    } else {
        arg0->unk1F0 = 0;
    }
    arg0->unk188 = func_80A2C0F8;
}

void func_80A2C0F8(EnSyatekiDekunuts *this, GlobalContext *globalCtx) {
    Actor *temp_a0;
    s16 temp_v0;

    temp_v0 = this->unk1DA;
    if ((s32) temp_v0 >= 0x15) {
        temp_a0 = this->actor.parent;
        this = this;
        Audio_PlayActorSound2(temp_a0, 0x3880U);
        this->unk1DA = 0;
        func_80A2C150(this);
        return;
    }
    this->unk1DA = temp_v0 + 1;
}

void func_80A2C150(EnSyatekiDekunuts *arg0) {
    arg0->unk1D8 = 0;
    arg0->actionFunc = func_80A2C168;
}

void func_80A2C168(EnSyatekiDekunuts *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk1DA;
    if ((s32) temp_v0 >= 0x15) {
        func_80A2C1AC();
        this->unk1DA = 0;
        return;
    }
    this->unk1DA = temp_v0 + 1;
}

void func_80A2C1AC(Actor *arg0) {
    Actor *temp_a0;
    s16 temp_v0;

    temp_a0 = arg0;
    arg0 = arg0;
    Audio_PlayActorSound2(temp_a0, 0x387CU);
    func_800BDC5C((SkelAnime *) (arg0 + 0x144), (ActorAnimationEntry []) D_80A2CAE8, 0);
    temp_v0 = arg0->yawTowardsPlayer;
    arg0->unk188 = func_80A2C208;
    arg0->shape.rot.y = temp_v0;
    arg0->world.rot.y = temp_v0;
}

void func_80A2C208(EnSyatekiDekunuts *this, GlobalContext *globalCtx) {
    if (func_801378B8(&this->unk144, this->unk144.animFrameCount) != 0) {
        func_80A2C27C(this);
    }
    if (this->unk1F0 == 1) {
        Math_SmoothStepToS(&this->unk1F2, -0x8000, 5, 0x1000, (s16) 0x100);
    }
    this->unk1D8 += 1;
}

void func_80A2C27C(EnSyatekiDekunuts *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80A2CAE8, 3);
    if ((arg0->actor.params & 0xF) != 1) {
        arg0->actionFunc = func_80A2C2E0;
        return;
    }
    arg0->actionFunc = func_80A2C33C;
}

void func_80A2C2E0(EnSyatekiDekunuts *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 phi_v0;

    temp_v0 = this->unk1D8;
    phi_v0 = temp_v0;
    if (((s32) this->unk1EE < (s32) temp_v0) || (this->actor.parent->unk26A != 1)) {
        func_80A2C3AC();
        phi_v0 = this->unk1D8;
    }
    this->unk1D8 = phi_v0 + 1;
}

void func_80A2C33C(EnSyatekiDekunuts *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    if (((gSaveContext.unk_3DE0[1] == 0) && (*(&gSaveContext + 0x3DEC) == 0)) || (this->actor.parent->unk26A != 1)) {
        func_80A2C3AC();
    }
    temp_v0 = this->unk1D8;
    if ((s32) temp_v0 < 0xB) {
        this->unk1D8 = temp_v0 + 1;
    }
}

void func_80A2C3AC(void *arg0) {
    func_800BDC5C(arg0 + 0x144, (ActorAnimationEntry []) D_80A2CAE8, 1);
    arg0->unk188 = func_80A2C3F0;
}

void func_80A2C3F0(EnSyatekiDekunuts *this, GlobalContext *globalCtx) {
    SkelAnime *temp_a0;
    f32 temp_a1;

    if (this->actor.parent->unk26A == 1) {
        temp_a0 = &this->unk144;
        if (((s32) this->unk1D8 >= 0xA1) && (temp_a1 = this->unk144.animFrameCount, this = this, (func_801378B8(temp_a0, temp_a1) != 0))) {
            this->unk1D8 = 0;
            func_80A2C150(this);
            return;
        }
        this->unk1D8 += 1;
        return;
    }
    func_80A2C478(this, this);
}

void func_80A2C478(EnSyatekiDekunuts *arg0) {
    arg0->actionFunc = func_80A2C48C;
}

void func_80A2C48C(EnSyatekiDekunuts *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk1DA;
    if ((s32) temp_v0 >= 0x15) {
        func_80A2BE54();
        this->unk1DA = 0;
        return;
    }
    this->unk1DA = temp_v0 + 1;
}

void func_80A2C4D0(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    void *temp_v0;

    temp_v0 = arg0->parent;
    if ((arg0->params & 0xF) == 1) {
        sp2C = temp_v0;
        EffectSsExtra_Spawn(arg1, arg0 + 0x24, &D_80A2CBA0, &D_80A2CBAC, 5, 2);
        temp_v0->unk280 = (s16) (temp_v0->unk280 + 0x64);
        temp_v0->unk26E = (s16) (temp_v0->unk26E + 1);
    } else {
        sp2C = temp_v0;
        EffectSsExtra_Spawn(arg1, arg0 + 0x24, &D_80A2CBA0, &D_80A2CBAC, 5, 0);
        temp_v0->unk280 = (s16) (temp_v0->unk280 + 0x1E);
        temp_v0->unk278 = (s16) (temp_v0->unk278 + 1);
    }
    Audio_PlayActorSound2(arg0, 0x3880U);
    arg0->unk1E2 = 0;
    func_800BDC5C((SkelAnime *) (arg0 + 0x144), (ActorAnimationEntry []) D_80A2CAE8, 4);
    arg0->unk1D8 = 0xA0;
    arg0->unk188 = func_80A2C5DC;
}

void func_80A2C5DC(EnSyatekiDekunuts *this, GlobalContext *globalCtx) {
    Actor *sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    SkelAnime *sp3C;
    SkelAnime *temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;

    temp_a0 = &this->unk144;
    sp4C = this->actor.parent;
    sp3C = temp_a0;
    if (func_801378B8(temp_a0, this->unk144.animFrameCount) != 0) {
        temp_v0 = this->unk1D8;
        if (temp_v0 == 0xA0) {
            func_800BDC5C(temp_a0, (ActorAnimationEntry []) D_80A2CAE8, 5);
            Audio_PlayActorSound2((Actor *) this, 0x3881U);
            this->unk1D8 += -1;
            return;
        }
        if ((s32) temp_v0 < 0xA0) {
            sp40 = this->actor.world.pos.x;
            sp44 = this->actor.world.pos.y + 18.0f;
            sp48 = this->actor.world.pos.z;
            EffectSsDeadDb_Spawn(globalCtx, (Vec3f *) &sp40, &D_801D15B0, &D_801D15B0, &D_80A2CBB8, &D_80A2CBBC, (s16) 0xC8, (s16) 0, 0xD);
            Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) &this->actor.world, 0x1E, 0x3878U);
            sp44 = this->actor.world.pos.y + 10.0f;
            EffectSsHahen_SpawnBurst(globalCtx, (Vec3f *) &sp40, 3.0f, 0, (s16) 0xC, (s16) 3, (s16) 0xF, (s16) -1, (s16) 0xA, NULL);
            if ((this->actor.params & 0xF) != 1) {
                sp4C->unk272 = (s16) (sp4C->unk272 & ~(1 << this->unk1E8));
            }
            func_80A2BE54(this);
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return;
    }
    temp_v0_2 = this->unk1D8;
    if ((s32) temp_v0_2 < 0xA0) {
        this->unk1D8 = temp_v0_2 - 1;
    }
}

void EnSyatekiDekunuts_Update(EnSyatekiDekunuts *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a2;
    s16 temp_v0;
    EnSyatekiDekunuts *this = (EnSyatekiDekunuts *) thisx;

    this->actionFunc(this, globalCtx);
    if ((func_80A2BF18 != this->actionFunc) && (temp_v0 = this->unk1D8, (((s32) temp_v0 < (s32) this->unk1EE) != 0)) && ((s32) temp_v0 >= 0xB)) {
        if (((this->unk18C.base.acFlags & 2) != 0) && (this->unk1E2 == 1)) {
            if ((this->actor.params & 0xF) == 1) {
                func_801A3098(0x922U);
            } else {
                play_sound(0x4807U);
            }
            this->unk18C.base.acFlags &= 0xFFFD;
            func_80A2C4D0((Actor *) this, globalCtx);
        }
        temp_a2 = &this->unk18C;
        sp24 = temp_a2;
        Collider_UpdateCylinder((Actor *) this, temp_a2);
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
    } else {
        this->unk18C.base.acFlags &= 0xFFFD;
    }
    SkelAnime_FrameUpdateMatrix(&this->unk144);
}

s32 func_80A2C8A0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if ((arg1 == 3) && (arg5->unk1F0 == 1)) {
        arg4->z += arg5->unk1F2;
    }
    return 0;
}

void EnSyatekiDekunuts_Draw(EnSyatekiDekunuts *this, GlobalContext *globalCtx) {
    EnSyatekiDekunuts *sp6C;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    s32 temp_s2;
    void *temp_v0;
    s32 phi_s3;
    s32 phi_s2;
    EnSyatekiDekunuts *this = (EnSyatekiDekunuts *) thisx;

    sp6C = this;
    if (func_80A2BF18 != this->actionFunc) {
        SkelAnime_Draw(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, func_80A2C8A0, NULL, (Actor *) this);
    }
    if (this->unk1EC == 1) {
        phi_s3 = 0;
        phi_s2 = 0;
        if ((s32) this->unk1EA > 0) {
            do {
                temp_v0 = this->unk1E4 + phi_s3;
                temp_f20 = (f32) temp_v0->unk0;
                temp_f22 = (f32) temp_v0->unk2;
                temp_f24 = (f32) temp_v0->unk4;
                temp_a0 = globalCtx->state.gfxCtx;
                temp_s0 = temp_a0;
                func_8012C28C(temp_a0);
                SysMatrix_InsertTranslation(temp_f20, temp_f22, temp_f24, 0);
                Matrix_Scale(0.02f, 0.02f, 0.02f, 1);
                temp_v0_2 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = temp_v0_2 + 8;
                temp_v0_2->words.w0 = 0xDA380003;
                temp_v0_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                temp_v0_3 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = temp_v0_3 + 8;
                temp_v0_3->words.w1 = (u32) &D_06001E50;
                temp_v0_3->words.w0 = 0xDE000000;
                temp_s2 = phi_s2 + 1;
                phi_s3 += 6;
                phi_s2 = temp_s2;
            } while (temp_s2 < (s32) sp6C->unk1EA);
        }
    }
}
