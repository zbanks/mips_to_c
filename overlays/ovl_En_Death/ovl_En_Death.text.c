? func_800BE568(Actor *, s32);                      /* extern */
? func_800DFD04(Camera *, ?, ?, ?);                 /* extern */
? func_80169940(GlobalContext *, s16, f32);         /* extern */
? func_801A479C(Vec3f *, ?, ?);                     /* extern */
? func_801A7328(Vec3f *, ?);                        /* extern */
void func_808C5310(GlobalContext *arg0);            /* static */
void func_808C5394(Actor *arg0);                    /* static */
s32 func_808C5428(Actor *arg0, GlobalContext *arg1); /* static */
void func_808C54F0(EnDeath *arg0);                  /* static */
void func_808C566C(EnDeath *arg0);                  /* static */
void func_808C571C(Actor *arg0, GlobalContext *arg1); /* static */
void func_808C597C(EnDeath *arg0, GlobalContext *arg1); /* static */
void func_808C5C0C(EnDeath *arg0);                  /* static */
void func_808C5D6C(f32 arg0, EnDeath *arg1, GlobalContext *); /* static */
void func_808C5F58(EnDeath *arg0, GlobalContext *arg1); /* static */
void func_808C645C(EnDeath *arg0);                  /* static */
void func_808C6620(EnDeath *arg0);                  /* static */
void func_808C67C8(EnDeath *arg0);                  /* static */
void func_808C68B8(EnDeath *arg0);                  /* static */
void func_808C6A08(EnDeath *arg0);                  /* static */
void func_808C6C5C(Actor *arg0, s32);               /* static */
void func_808C6D40(Actor *arg0, GlobalContext *arg1); /* static */
void func_808C70D8(EnDeath *arg0, GlobalContext *arg1); /* static */
void func_808C74A4(EnDeath *arg0);                  /* static */
void func_808C7800(EnDeath *arg0, s16, s32);        /* static */
void func_808C7A30(EnDeath *arg0, GlobalContext *arg1); /* static */
void func_808C7AEC(EnDeath *arg0);                  /* static */
void func_808C7C04(EnDeath *arg0);                  /* static */
void func_808C7CFC(EnDeath *arg0);                  /* static */
void func_808C7DB8(EnDeath *arg0);                  /* static */
void func_808C7E24(EnDeath *arg0, GlobalContext *arg1); /* static */
void func_808C7EDC(Actor *arg0, GlobalContext *arg1); /* static */
void func_808C84A4(Actor *arg0, GlobalContext *arg1); /* static */
void func_808C8690(Actor *arg0, GlobalContext *arg1); /* static */
void func_808C882C(EnDeath *arg0, GraphicsContext **arg1); /* static */
void func_808C8D18(EnDeath *arg0, GraphicsContext **arg1); /* static */
void func_808C9160(Actor *arg0, GraphicsContext **arg1); /* static */
s32 func_808C9220(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_808C9340(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06000E64;
extern AnimationHeader D_060015B4;
extern AnimationHeader D_06001834;
extern AnimationHeader D_06001F80;
extern AnimationHeader D_06002DE8;
extern AnimationHeader D_0600352C;
extern AnimationHeader D_06003CAC;
extern ? D_06006F88;
extern ? D_060073D0;
extern ? D_06009988;
extern ? D_06009BA0;
extern ? D_06009F10;
extern FlexSkeletonHeader D_0600AD08;
extern AnimationHeaderCommon D_0600B284;
extern AnimationHeader D_0600B508;
extern AnimationHeader D_0600CB2C;
extern void D_0600CB84;
extern void D_0600CBC0;
static ColliderSphereInit D_808C98E0 = {
    {3, 0, 8, 0, 0x10, 4},
    {0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 0},
    {1, {{0, 0, 0}, 0x16}, 0x64},
};
static ColliderCylinderInit D_808C990C = {
    {0xA, 0, 0, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0x23, 0x5A, 0x14, {0, 0, 0}},
};
static ColliderTrisElementInit D_808C9938 = {
    {
        {2, {0xF7CFFFFF, 4, 0x20}, {0xF7CFFFFF, 0, 0}, 1, 1, 0},
        {{{0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f}}},
    },
    {
        {2, {0xF7CFFFFF, 4, 0x20}, {0xF7CFFFFF, 0, 0}, 1, 1, 0},
        {{{0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f}}},
    },
};
static ColliderTrisInit D_808C99B0 = {{9, 0x11, 0xD, 0, 0x10, 2}, 2, &D_808C9938};
static ColliderQuadInit D_808C99C0 = {
    {0xA, 0x10, 0, 0, 0x20, 3},
    {0, {0xF7CFFFFF, 4, 0x20}, {0, 0, 0}, 0x81, 0, 0},
    {
        {
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
        },
    },
};
static DamageTable D_808C9A10 = {
    {
        0,
        1,
        0,
        0xF1,
        1,
        1,
        0,
        1,
        1,
        1,
        0,
        0x21,
        0x31,
        0x42,
        1,
        0,
        1,
        2,
        0,
        0,
        0,
        0,
        1,
        1,
        1,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF1,
    },
};
static CollisionCheckInfoInit2 D_808C9A30 = {0x14, 0x1C, 0x5A, 0x14, 0x64};
static void D_808C9A3C;                             /* unable to generate initializer */
static InitChainEntry D_808C9A60;                   /* unable to generate initializer */
static Vec3f D_808C9A70 = {0.0f, -1.5f, 0.0f};
static Vec3f D_808C9A7C = {0.0f, -0.2f, 0.0f};
static Color_RGBA8 D_808C9A88 = {0, 0, 0, 0};
static Color_RGBA8 D_808C9A8C = {0x28, 0x28, 0x28, 0};
static s16 D_808C9A90 = {
    0x1E,
    0x1E,
    0xA,
    2,
    0xC,
    0x11,
    0x11,
    0x11,
    0x11,
    0x11,
    0x11,
    0x11,
    0xE,
    0xA,
    0xC,
    9,
    9,
    0xC,
    9,
    9,
    0x1E,
    0x1E,
};
static Vec3f D_808C9ABC;                            /* type too large by 8; unable to generate initializer */
static f32 D_808C9AC0 = -1.0f;
static Color_RGBA8 D_808C9AC8 = {0, 0xC8, 0x64, 0};
static Color_RGBA8 D_808C9ACC = {0, 0x64, 0, 0};
static s32 D_808C9AD0 = {
    0x6009F88,
    0x600A088,
    0x600A188,
    0x600A288,
    0x600A388,
    0x600A488,
    0x600A588,
    0x600A688,
    0x600A788,
};
static Vec3f D_808C9AF4 = {-1000.0f, 12000.0f, 0.0f};
static Vec3f D_808C9B00 = {-2000.0f, -2500.0f, 0.0f};
static Vec3f D_808C9B0C = {
    {1000.0f, 2000.0f, 0.0f},
    {1500.0f, 1000.0f, 4000.0f},
    {1500.0f, 1000.0f, -4000.0f},
    {4000.0f, 4000.0f, 2000.0f},
    {4000.0f, 4000.0f, -2000.0f},
};
static ? D_808C9B48;                                /* unable to generate initializer */

typedef struct EnDeath {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ void (*actionFunc)(EnDeath *, GlobalContext *);
    /* 0x018C */ s8 unk18C;                         /* inferred */
    /* 0x018D */ u8 unk18D;                         /* inferred */
    /* 0x018E */ u8 unk18E;                         /* inferred */
    /* 0x018F */ u8 unk18F;                         /* inferred */
    /* 0x0190 */ s8 unk190;                         /* inferred */
    /* 0x0191 */ u8 unk191;                         /* inferred */
    /* 0x0192 */ u8 unk192;                         /* inferred */
    /* 0x0193 */ char pad193[0x12];                 /* maybe part of unk192[19]? */
    /* 0x01A5 */ s8 unk1A5;                         /* inferred */
    /* 0x01A6 */ char pad1A6[0x3];                  /* maybe part of unk1A5[4]? */
    /* 0x01A9 */ u8 unk1A9;                         /* inferred */
    /* 0x01AA */ s8 unk1AA;                         /* inferred */
    /* 0x01AB */ s8 unk1AB;                         /* inferred */
    /* 0x01AC */ s8 unk1AC;                         /* inferred */
    /* 0x01AD */ char pad1AD[0x35];                 /* maybe part of unk1AC[54]? */
    /* 0x01E2 */ Vec3s unk1E2;                      /* inferred */
    /* 0x01E8 */ char pad1E8[0x7E];                 /* maybe part of unk1E2[22]? */
    /* 0x0266 */ Vec3s unk266;                      /* inferred */
    /* 0x026C */ char pad26C[0x80];
    /* 0x02EC */ s16 unk2EC;                        /* inferred */
    /* 0x02EE */ s16 unk2EE;                        /* inferred */
    /* 0x02F0 */ char pad2F0[0x2];                  /* maybe part of unk2EE[2]? */
    /* 0x02F2 */ s16 unk2F2;                        /* inferred */
    /* 0x02F4 */ s16 unk2F4;                        /* inferred */
    /* 0x02F6 */ s16 unk2F6;                        /* inferred */
    /* 0x02F8 */ char pad2F8[0x2];                  /* maybe part of unk2F6[2]? */
    /* 0x02FA */ s16 unk2FA;                        /* inferred */
    /* 0x02FC */ s16 unk2FC;                        /* inferred */
    /* 0x02FE */ char pad2FE[0x2];                  /* maybe part of unk2FC[2]? */
    /* 0x0300 */ s32 unk300;                        /* inferred */
    /* 0x0304 */ f32 unk304;                        /* inferred */
    /* 0x0308 */ f32 unk308;                        /* inferred */
    /* 0x030C */ f32 unk30C;                        /* inferred */
    /* 0x0310 */ f32 unk310;                        /* inferred */
    /* 0x0314 */ f32 unk314;                        /* inferred */
    /* 0x0318 */ f32 unk318;                        /* inferred */
    /* 0x031C */ f32 unk31C;                        /* inferred */
    /* 0x0320 */ f32 unk320;                        /* inferred */
    /* 0x0324 */ f32 unk324;                        /* inferred */
    /* 0x0328 */ f32 unk328;                        /* inferred */
    /* 0x032C */ Vec3f unk32C;                      /* inferred */
    /* 0x0338 */ Vec3f unk338;                      /* inferred */
    /* 0x0344 */ Vec3f unk344;                      /* inferred */
    /* 0x0350 */ Vec3f unk350;                      /* inferred */
    /* 0x035C */ Vec3f unk35C;                      /* inferred */
    /* 0x0368 */ char pad368[0x9C];                 /* maybe part of unk35C[14]? */
    /* 0x0404 */ ? unk404;                          /* inferred */
    /* 0x0405 */ char pad405[0x29F];
    /* 0x06A4 */ SkelAnime unk6A4;                  /* inferred */
    /* 0x06D8 */ f32 unk6D8;                        /* overlap; inferred */
    /* 0x06DC */ void *unk6DC;                      /* inferred */
    /* 0x06E0 */ void *unk6E0;                      /* inferred */
    /* 0x06E4 */ Actor *unk6E4;                     /* inferred */
    /* 0x06E8 */ Actor *unk6E8;                     /* inferred */
    /* 0x06EC */ Actor *unk6EC;                     /* inferred */
    /* 0x06F0 */ Actor *unk6F0;                     /* inferred */
    /* 0x06F4 */ char pad6F4[0x40];                 /* maybe part of unk6F0[17]? */
    /* 0x0734 */ void *unk734;                      /* inferred */
    /* 0x0738 */ void *unk738;                      /* inferred */
    /* 0x073C */ ColliderCylinder unk73C;           /* inferred */
    /* 0x0788 */ ColliderQuad unk788;               /* inferred */
    /* 0x0808 */ ColliderSphere unk808;             /* inferred */
    /* 0x0860 */ ColliderTris unk860;               /* inferred */
    /* 0x0880 */ ColliderTrisElement unk880;        /* inferred */
    /* 0x08DC */ char pad8DC[0x5C];                 /* maybe part of unk880[2]? */
} EnDeath;                                          /* size 0x938 */

void EnDeath_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnDeath *this = (EnDeath *) thisx;
    Actor *temp_v0;
    f32 *temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    f32 phi_f20;
    s32 phi_s3;
    s32 phi_s1;
    EnDeath *phi_s0;
    f32 *phi_s0_2;
    s32 phi_s1_2;

    Actor_ProcessInitChain(&this->actor, &D_808C9A60);
    ActorShape_Init(&this->actor.shape, 5500.0f, func_800B3FC0, 80.0f);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_0600AD08, &D_06003CAC, &this->unk1E2, &this->unk266, 0x16);
    Collider_InitAndSetSphere(globalCtx, &this->unk808, &this->actor, &D_808C98E0);
    Collider_InitAndSetCylinder(globalCtx, &this->unk73C, &this->actor, &D_808C990C);
    Collider_InitAndSetQuad(globalCtx, &this->unk788, &this->actor, &D_808C99C0);
    Collider_InitAndSetTris(globalCtx, &this->unk860, &this->actor, &D_808C99B0, &this->unk880);
    this->unk808.dim.worldSphere.radius = this->unk808.dim.modelSphere.radius;
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_808C9A10, &D_808C9A30);
    Effect_Add(globalCtx, &this->unk300, 2, 0U, (u8) 0, &D_808C9A3C);
    phi_f20 = 15.0f;
    phi_s3 = 0;
    phi_s1 = 0;
    phi_s0 = this;
    if ((gSaveContext.eventInf[6] & 8) == 0) {
        this->actor.world.pos.y += 400.0f;
    }
    do {
        temp_v0 = Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, 0x44, this->actor.world.pos.x, this->actor.world.pos.y + phi_f20, this->actor.world.pos.z, (s16) 0, (s16) phi_s3, (s16) 0, phi_s1);
        phi_s0->unk6E4 = temp_v0;
        if (temp_v0 == 0) {
            Actor_MarkForDeath(&this->actor);
        }
        temp_s1 = phi_s1 + 1;
        phi_f20 += 4.0f;
        phi_s3 = (s32) (s16) (phi_s3 + 0x3A00);
        phi_s1 = temp_s1;
        phi_s0 += 4;
    } while (temp_s1 < 0x14);
    this->unk6E4->child = this->unk6E8;
    this->unk6E8->child = this->unk6EC;
    this->unk6EC->child = this->unk6F0;
    phi_s0_2 = &this->actor.home.pos.y;
    phi_s1_2 = 3;
    do {
        temp_s1_2 = phi_s1_2 + 4;
        temp_s0 = phi_s0_2 + 0x10;
        phi_s0_2->unk6E4->unk124 = (s32) phi_s0_2->unk6E8;
        temp_s0->unk6D8->unk124 = (void *) temp_s0->unk6DC;
        temp_s0->unk6DC->unk124 = (void *) temp_s0->unk6E0;
        temp_s0->unk6E0->unk124 = (s32) temp_s0->unk6E4;
        phi_s0_2 = temp_s0;
        phi_s1_2 = temp_s1_2;
    } while (temp_s1_2 != 0x13);
    this->unk734 = Lib_SegmentedToVirtual(&D_0600CBC0);
    this->unk738 = Lib_SegmentedToVirtual(&D_0600CB84);
    if ((gSaveContext.eventInf[6] & 8) != 0) {
        this->unk18E = 1;
        Actor_SetScale(&this->actor, 0.01f);
        this->unk191 = 0x17;
        this->actor.params = 0x14;
        this->unk304 = 1.0f;
        func_808C7DB8(this);
        return;
    }
    this->unk192 = 1;
    this->actor.flags &= -2;
    func_808C7CFC(this);
}

void EnDeath_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnDeath *this = (EnDeath *) thisx;
    Collider_DestroySphere(globalCtx, &this->unk808);
    Collider_DestroyCylinder(globalCtx, &this->unk73C);
    Collider_DestroyQuad(globalCtx, &this->unk788);
    Collider_DestroyTris(globalCtx, &this->unk860);
    func_801A72CC(&this->unk338);
    Effect_Destroy(globalCtx, this->unk300);
}

void func_808C5310(GlobalContext *arg0) {
    s32 temp_v1;
    void *temp_a1;
    void *phi_a2;
    void *phi_a1;
    s32 phi_v1;

    arg0->envCtx.unk_C3 = 0x14;
    arg0->envCtx.unk_C1 = 0x14;
    arg0->envCtx.unk_C2 = 0x14;
    arg0->envCtx.unk_DC = 1.0f;
    phi_a2 = arg0 + 0x10000;
    phi_a1 = arg0->envCtx.lightSettingsList + 0x1B8;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 1;
        temp_a1 = phi_a1 + 1;
        temp_a1->unk2 = (s8) phi_a2->unk70CB;
        temp_a1->unk8 = (s8) phi_a2->unk70D1;
        phi_a2 += 1;
        phi_a1 = temp_a1;
        phi_v1 = temp_v1;
    } while (temp_v1 != 3);
}

void func_808C5394(Actor *arg0) {
    Actor *temp_a0;
    s16 temp_a0_2;

    temp_a0 = arg0;
    arg0 = arg0;
    func_800B9010(temp_a0, 0x3260U);
    if (arg0->unk2EA == 0) {
        arg0->unk2EA = 0x28;
    }
    arg0->unk2EA = (s16) (arg0->unk2EA - 1);
    temp_a0_2 = arg0->unk2EA;
    arg0 = arg0;
    arg0->world.pos.y = ((1.0f - Math_CosS((s16) (temp_a0_2 * 0x666))) * 7.5f) + arg0->home.pos.y;
}

s32 func_808C5428(Actor *arg0, GlobalContext *arg1) {
    Actor *sp1C;
    Actor *temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 phi_v0;
    s32 phi_v0_2;

    temp_v0 = func_800BC270(arg1, arg0, 80.0f, 0x138B0);
    if (temp_v0 != 0) {
        sp1C = temp_v0;
        temp_v1 = Actor_YawBetweenActors(arg0, temp_v0) - arg0->shape.rot.y;
        phi_v0 = (s32) temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_v0 = -(s32) temp_v1;
        }
        if (phi_v0 < 0x2000) {
            temp_v1_2 = Actor_PitchToPoint(sp1C, &arg0->focus.pos) - sp1C->world.rot.x;
            phi_v0_2 = (s32) temp_v1_2;
            if ((s32) temp_v1_2 < 0) {
                phi_v0_2 = -(s32) temp_v1_2;
            }
            if (phi_v0_2 < 0x3000) {
                return 1;
            }
            goto block_8;
        }
        goto block_8;
    }
block_8:
    return 0;
}

void func_808C54F0(EnDeath *arg0) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    ColliderTris *sp38;
    f32 sp28;
    ColliderTris *temp_a0;
    f32 *temp_a2;
    f32 *temp_a3;
    f32 *temp_a3_2;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f6;
    f32 temp_f8;

    sp64 = Math_SinS(arg0->actor.shape.rot.y);
    temp_f0 = Math_CosS(arg0->actor.shape.rot.y);
    temp_f12 = 70.0f * temp_f0;
    sp60 = temp_f0;
    temp_a0 = arg0 + 0x860;
    temp_f14 = 70.0f * sp64;
    temp_a2 = &sp3C;
    temp_a3 = &sp48;
    temp_f6 = (arg0->actor.world.pos.x - temp_f12) + (75.0f * sp64);
    sp3C = temp_f6;
    sp40 = arg0->actor.world.pos.y + -10.0f;
    temp_f8 = arg0->actor.world.pos.z + temp_f14 + (75.0f * temp_f0);
    sp44 = temp_f8;
    sp48 = arg0->actor.world.pos.x + temp_f12 + (65.0f * sp64);
    temp_f10 = sp40 + 150.0f;
    sp4C = temp_f10;
    sp28 = temp_f6;
    sp58 = temp_f10;
    sp38 = temp_a0;
    sp50 = (arg0->actor.world.pos.z - temp_f14) + (65.0f * temp_f0);
    sp54 = temp_f6 + (-10.0f * sp64);
    sp5C = temp_f8 + (-10.0f * temp_f0);
    Collider_SetTrisVertices(temp_a0, 0, (Vec3f *) temp_a2, (Vec3f *) temp_a3, (Vec3f *) &sp54);
    sp58 = sp40;
    temp_a3_2 = &sp54;
    sp54 = sp48 + (10.0f * sp64);
    sp5C = sp50 + (10.0f * sp60);
    Collider_SetTrisVertices(temp_a0, 1, (Vec3f *) &sp3C, (Vec3f *) temp_a3_2, (Vec3f *) &sp48);
}

void func_808C566C(EnDeath *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;

    temp_f0 = arg0->actor.world.pos.y;
    temp_f2 = arg0->actor.home.pos.y;
    arg0->unk308 = temp_f0 - temp_f2;
    if (temp_f0 < temp_f2) {
        arg0->unk308 = 0.0f;
    } else {
        arg0->unk308 = arg0->unk308;
    }
    arg0->unk308 *= 0.02f;
    temp_f0_2 = arg0->unk308;
    arg0->unk308 = (temp_f0_2 * temp_f0_2 * 3.0f) + 80.0f;
    arg0->unk2F6 += (s32) (65536.0f * (22.5f / (arg0->unk308 * 6.2831855f)));
}

void func_808C571C(Actor *arg0, GlobalContext *arg1) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    Actor *temp_s1;

    temp_s1 = arg1->actorCtx.actorList[2].first;
    arg0->shape.rot.y += -0x657A;
    arg0->unk2EE = 0x3C;
    sp30 = (Math_SinS((s16) (arg0->home.rot.y + 0x98)) * 542.0f) + arg0->world.pos.x;
    sp38 = (Math_CosS((s16) (arg0->home.rot.y + 0x98)) * 542.0f) + arg0->world.pos.z;
    sp34 = arg0->home.pos.y + 3.0f;
    sp24 = arg0->world.pos.x;
    sp2C = arg0->world.pos.z;
    sp28 = arg0->world.pos.y - 116.0f;
    temp_s1->world.pos.x = (Math_SinS((s16) (arg0->home.rot.y - 0x370)) * 463.0f) + arg0->world.pos.x;
    temp_s1->world.pos.z = (Math_CosS((s16) (arg0->home.rot.y - 0x370)) * 463.0f) + arg0->world.pos.z;
    temp_s1->shape.rot.y = Actor_YawBetweenActors(temp_s1, arg0);
    Play_CameraSetAtEye(arg1, arg0->unk2FA, (Vec3f *) &sp24, (Vec3f *) &sp30);
    func_80169940(arg1, arg0->unk2FA, 77.0f);
    func_800B724C(arg1, arg0, 0x15U);
    arg0->unk188 = func_808C589C;
}

void func_808C589C(EnDeath *this, GlobalContext *globalCtx) {
    Actor *temp_s1;

    temp_s1 = globalCtx->actorCtx.actorList[2].first;
    temp_s1->world.pos.x = (Math_SinS((s16) (this->actor.home.rot.y - 0x370)) * 463.0f) + this->actor.world.pos.x;
    temp_s1->world.pos.z = (Math_CosS((s16) (this->actor.home.rot.y - 0x370)) * 463.0f) + this->actor.world.pos.z;
    temp_s1->shape.rot.y = Actor_YawBetweenActors(temp_s1, &this->actor);
    if (this->unk2EE == 0x19) {
        func_800B724C(globalCtx, &this->actor, 0x51U);
    }
    if ((s32) this->unk2EE > 0) {
        this->unk2EE = (s32) this->unk2EE - 1;
    } else {
        func_808C597C(this, globalCtx);
    }
    func_808C566C(this);
}

void func_808C597C(EnDeath *arg0, GlobalContext *arg1) {
    Camera *sp24;
    EnDeath *temp_v1;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f2;
    s32 temp_a0;
    EnDeath *phi_v1;
    s32 phi_a0;

    sp24 = Play_GetCamera(arg1, arg0->unk2FA);
    func_808C5310(arg1);
    phi_v1 = arg0;
    phi_a0 = 0;
    do {
        temp_a0 = phi_a0 + 4;
        temp_v1 = phi_v1 + 0x10;
        phi_v1->unk6E4->unk1C = 7;
        temp_v1->unk6D8->unk1C = 7;
        temp_v1->unk6DC->unk1C = 7;
        temp_v1->unk6E0->unk1C = 7;
        phi_v1 = temp_v1;
        phi_a0 = temp_a0;
    } while (temp_a0 != 0x14);
    arg0->unk2EE = 0x32;
    arg0->unk344.x = (Math_SinS(arg0->actor.home.rot.y) * 140.0f) + arg0->actor.world.pos.x;
    temp_f18 = Math_CosS(arg0->actor.home.rot.y) * 140.0f;
    temp_f2 = arg0->actor.world.pos.z;
    temp_f12 = arg0->actor.home.pos.y;
    arg0->unk350.z = temp_f2;
    arg0->unk344.y = temp_f12 + 20.0f;
    arg0->unk350.x = arg0->actor.world.pos.x;
    arg0->unk344.z = temp_f18 + temp_f2;
    arg0->unk350.y = temp_f12 + 50.0f;
    arg0->unk30C = Math_Vec3f_DistXYZ(&sp24->eye, arg0 + 0x344) * 0.0225f;
    temp_f10 = Math_Vec3f_DistXYZ(&sp24->at, arg0 + 0x350) * 0.0225f;
    arg0->actionFunc = func_808C5AB8;
    arg0->unk310 = temp_f10;
}

void func_808C5AB8(EnDeath *this, GlobalContext *globalCtx) {
    Camera *sp2C;
    Vec3f *sp28;
    Vec3f *sp24;
    Vec3f *temp_a0;
    Vec3f *temp_a0_2;
    s16 temp_v1;

    sp2C = Play_GetCamera(globalCtx, this->unk2FA);
    temp_v1 = this->unk2EE;
    if (temp_v1 == 0x2A) {
        func_800B724C(globalCtx, &this->actor, 4U);
        goto block_4;
    }
    if (temp_v1 == 0x1B) {
        func_800B724C(globalCtx, &this->actor, 0x7BU);
block_4:
    }
    if ((s32) this->unk2EE <= 0) {
        if (this->actor.world.pos.y < ((this->actor.home.pos.y + 400.0f) - 225.0f)) {
            globalCtx->envCtx.unk_C3 = 0x1A;
        }
        temp_a0 = &sp2C->eye;
        sp28 = temp_a0;
        Math_Vec3f_StepTo(temp_a0, &this->unk344, this->unk30C);
        temp_a0_2 = &sp2C->at;
        sp24 = temp_a0_2;
        Math_Vec3f_StepTo(temp_a0_2, &this->unk350, this->unk310);
        Play_CameraSetAtEye(globalCtx, this->unk2FA, sp24, sp28);
        if (Math_StepToF(&this->actor.world.pos.y, this->actor.home.pos.y, 9.0f) != 0) {
            this->unk2EE += -1;
            if (this->unk2EE == -0x14) {
                func_808C5C0C(this);
            }
        }
    } else {
        this->unk2EE = (s32) this->unk2EE - 1;
    }
    func_808C566C(this);
}

void func_808C5C0C(Actor *arg0) {
    gSaveContext.eventInf[6] |= 8;
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) &D_0600B284, 0.0f, 0.0f, (f32) SkelAnime_GetFrameCount(&D_0600B284), (u8) 2, 0.0f);
    arg0->shape.rot.y += 0x777F;
    arg0->scale.y = 0.01f;
    Audio_PlayActorSound2(arg0, 0x3AB4U);
    arg0->unk188 = func_808C5CB4;
}

void func_808C5CB4(EnDeath *this, GlobalContext *globalCtx) {
    EnDeath *temp_a0_2;
    Vec3f *temp_a0;
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_v0;
    f32 phi_f2;

    temp_a0 = &this->actor.scale;
    this = this;
    temp_v0 = Math_StepToF(&temp_a0->x, 0.01f, 0.0005f);
    temp_f0 = this->actor.scale.x;
    temp_a0_2 = this;
    this->actor.scale.z = temp_f0;
    temp_f2 = 0.01f - temp_f0;
    phi_f2 = temp_f2;
    if (temp_f2 > 0.0025f) {
        phi_f2 = 0.0025f;
    }
    this->actor.shape.rot.y += (s32) (phi_f2 * 4505600.0f);
    if (temp_v0 != 0) {
        this->unk192 = 0;
        this = this;
        func_808C5D6C(0.0025f, temp_a0_2, globalCtx);
    }
    func_808C566C(this);
}

void func_808C5D6C(void *arg0, GlobalContext *arg1) {
    Camera *sp24;
    f32 sp20;
    f32 temp_f2;
    f32 temp_f8;
    f32 temp_f8_2;
    s16 temp_a0;

    sp24 = Play_GetCamera(arg1, arg0->unk2FA);
    sp20 = 1.0f / (f32) SkelAnime_GetFrameCount(&D_0600B284);
    temp_a0 = arg0->unk16;
    arg0->unk2EE = 0xA;
    arg0->unk160 = 1.0f;
    arg0->unkBE = temp_a0;
    arg0->unk344 = (f32) ((Math_SinS(temp_a0) * 50.0f) + arg0->unk24);
    temp_f2 = arg0->unk2C;
    temp_f8 = Math_CosS(arg0->unk16) * 50.0f;
    arg0->unk358 = temp_f2;
    arg0->unk350 = (f32) arg0->unk24;
    arg0->unk348 = (f32) (arg0->unkC + 95.0f);
    arg0->unk34C = (f32) (temp_f8 + temp_f2);
    arg0->unk354 = (f32) (arg0->unk28 + 100.0f);
    arg0->unk30C = (f32) (Math_Vec3f_DistXYZ(&sp24->eye, arg0 + 0x344) * sp20);
    temp_f8_2 = Math_Vec3f_DistXYZ(&sp24->at, arg0 + 0x350) * sp20;
    arg0->unk188 = func_808C5E90;
    arg0->unk310 = temp_f8_2;
}

void func_808C5E90(EnDeath *this, GlobalContext *globalCtx) {
    Camera *sp2C;
    Vec3f *sp28;
    Vec3f *sp24;
    Camera *temp_v1;
    Vec3f *temp_a0_2;
    Vec3f *temp_a0_3;
    s16 temp_v0;
    u8 temp_a0;

    temp_a0 = this->unk191;
    temp_v1 = Play_GetCamera(globalCtx, this->unk2FA);
    if ((s32) temp_a0 < 0x17) {
        this->unk191 = temp_a0 + 1;
    }
    temp_a0_2 = temp_v1 + 0x5C;
    sp28 = temp_a0_2;
    sp2C = temp_v1;
    Math_Vec3f_StepTo(temp_a0_2, &this->unk344, this->unk30C);
    temp_a0_3 = &temp_v1->at;
    sp24 = temp_a0_3;
    Math_Vec3f_StepTo(temp_a0_3, &this->unk350, this->unk310);
    Play_CameraSetAtEye(globalCtx, this->unk2FA, sp24, sp28);
    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        temp_v0 = this->unk2EE;
        if ((s32) temp_v0 > 0) {
            this->unk2EE = temp_v0 - 1;
        } else {
            func_808C5F58(this, globalCtx);
        }
    }
    func_808C566C(this);
}

void func_808C5F58(EnDeath *arg0, GlobalContext *arg1) {
    Camera *sp24;
    f32 temp_f6;

    sp24 = Play_GetCamera(arg1, arg0->unk2FA);
    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_0600CB2C);
    arg0->unk191 = 0x17;
    func_801A2E54(0x38);
    arg0->unk344.x = (Math_SinS(arg0->actor.home.rot.y) * 230.0f) + arg0->actor.world.pos.x;
    temp_f6 = (Math_CosS(arg0->actor.home.rot.y) * 230.0f) + arg0->actor.world.pos.z;
    arg0->unk344.y = arg0->actor.home.pos.y + 40.0f;
    arg0->unk344.z = temp_f6;
    arg0->unk350.y = arg0->actor.world.pos.y + 85.0f;
    arg0->unk30C = Math_Vec3f_DistXYZ(&sp24->eye, arg0 + 0x344) * 0.14285715f;
    arg0->unk310 = Math_Vec3f_DistXYZ(&sp24->at, arg0 + 0x350) * 0.14285715f;
    func_8019F1C0(arg0 + 0x338, 0x3AB0U);
    arg0->actionFunc = func_808C6070;
}

void func_808C6070(EnDeath *this, GlobalContext *globalCtx) {
    Camera *sp44;
    SkelAnime *sp2C;
    Vec3f *sp28;
    Vec3f *sp24;
    Actor *temp_v0;
    Actor *temp_v0_4;
    EnDeath *temp_a0_3;
    EnDeath *temp_v1;
    SkelAnime *temp_a0;
    Vec3f *temp_a0_5;
    Vec3f *temp_a0_6;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f10_10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f10_4;
    f32 temp_f10_5;
    f32 temp_f10_6;
    f32 temp_f10_7;
    f32 temp_f10_8;
    f32 temp_f10_9;
    f32 temp_f12;
    f32 temp_f12_2;
    s32 temp_a0_2;
    s32 temp_a2;
    void *temp_a0_4;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    EnDeath *phi_v1;
    s32 phi_a0;
    f32 phi_f12;
    Actor *phi_v0;
    EnDeath *phi_a0_2;
    s32 phi_a2;
    f32 phi_f12_2;
    Actor *phi_v0_2;
    EnDeath *phi_a0_3;
    f32 phi_f2;
    f32 phi_f12_3;

    temp_a0 = &this->unk144;
    sp44 = Play_GetCamera(globalCtx, this->unk2FA);
    sp2C = temp_a0;
    if (func_801378B8(temp_a0, 12.0f) != 0) {
        globalCtx->envCtx.unk_C3 = 0x1B;
    } else if (func_801378B8(temp_a0, 25.0f) != 0) {
        globalCtx->envCtx.unk_C3 = 0x1A;
    } else if (func_801378B8(sp2C, 38.0f) != 0) {
        phi_v1 = this;
        phi_a0 = 0;
        do {
            temp_a0_2 = phi_a0 + 4;
            temp_v1 = phi_v1 + 0x10;
            phi_v1->unk6E4->unk1C = 9;
            temp_v1->unk6D8->unk1C = 9;
            temp_v1->unk6DC->unk1C = 9;
            temp_v1->unk6E0->unk1C = 9;
            phi_v1 = temp_v1;
            phi_a0 = temp_a0_2;
        } while (temp_a0_2 != 0x14);
    } else if (func_801378B8(sp2C, 14.0f) != 0) {
        this->unk6E4->params = 8;
        temp_v0 = this->unk6E4;
        temp_f12 = (temp_v0->world.pos.x - this->actor.world.pos.x) * 1.8f;
        phi_f12 = temp_f12;
        phi_v0 = temp_v0;
        phi_a0_2 = this;
        phi_a2 = 2;
        phi_f12_2 = temp_f12;
        phi_v0_2 = temp_v0;
        phi_a0_3 = this;
        if (2 != 0x14) {
            do {
                temp_a2 = phi_a2 + 2;
                temp_a0_3 = phi_a0_2 + 8;
                phi_v0->world.pos.x = phi_f12 + this->actor.world.pos.x;
                temp_v0_2 = temp_a0_3->unk6DC;
                temp_f10 = this->actor.world.pos.z;
                temp_v0_2->unk2C = (f32) (((temp_v0_2->unk2C - temp_f10) * 1.8f) + temp_f10);
                temp_v0_3 = temp_a0_3->unk6DC;
                temp_f10_2 = this->actor.world.pos.y;
                temp_v0_3->unk28 = (f32) (((temp_v0_3->unk28 - temp_f10_2) * 1.7f) + temp_f10_2);
                temp_a0_3->unk6E0->unk1C = 8;
                temp_v1_2 = temp_a0_3->unk6E0;
                temp_f10_3 = this->actor.world.pos.x;
                temp_v1_2->unk24 = (f32) (((temp_v1_2->unk24 - temp_f10_3) * 1.8f) + temp_f10_3);
                temp_v1_3 = temp_a0_3->unk6E0;
                temp_f10_4 = this->actor.world.pos.z;
                temp_v1_3->unk2C = (f32) (((temp_v1_3->unk2C - temp_f10_4) * 1.8f) + temp_f10_4);
                temp_v1_4 = temp_a0_3->unk6E0;
                temp_f10_5 = this->actor.world.pos.y;
                temp_v1_4->unk28 = (f32) (((temp_v1_4->unk28 - temp_f10_5) * 1.7f) + temp_f10_5);
                temp_a0_3->unk6E4->params = 8;
                temp_v0_4 = temp_a0_3->unk6E4;
                temp_f12_2 = (temp_v0_4->world.pos.x - this->actor.world.pos.x) * 1.8f;
                phi_f12 = temp_f12_2;
                phi_v0 = temp_v0_4;
                phi_a0_2 = temp_a0_3;
                phi_a2 = temp_a2;
                phi_f12_2 = temp_f12_2;
                phi_v0_2 = temp_v0_4;
                phi_a0_3 = temp_a0_3;
            } while (temp_a2 != 0x14);
        }
        temp_a0_4 = phi_a0_3 + 8;
        phi_v0_2->world.pos.x = phi_f12_2 + this->actor.world.pos.x;
        temp_v0_5 = temp_a0_4->unk6DC;
        temp_f10_6 = this->actor.world.pos.z;
        temp_v0_5->unk2C = (f32) (((temp_v0_5->unk2C - temp_f10_6) * 1.8f) + temp_f10_6);
        temp_v0_6 = temp_a0_4->unk6DC;
        temp_f10_7 = this->actor.world.pos.y;
        temp_v0_6->unk28 = (f32) (((temp_v0_6->unk28 - temp_f10_7) * 1.7f) + temp_f10_7);
        temp_a0_4->unk6E0->unk1C = 8;
        temp_v1_5 = temp_a0_4->unk6E0;
        temp_f10_8 = this->actor.world.pos.x;
        temp_v1_5->unk24 = (f32) (((temp_v1_5->unk24 - temp_f10_8) * 1.8f) + temp_f10_8);
        temp_v1_6 = temp_a0_4->unk6E0;
        temp_f10_9 = this->actor.world.pos.z;
        temp_v1_6->unk2C = (f32) (((temp_v1_6->unk2C - temp_f10_9) * 1.8f) + temp_f10_9);
        temp_v1_7 = temp_a0_4->unk6E0;
        temp_f10_10 = this->actor.world.pos.y;
        temp_v1_7->unk28 = (f32) (((temp_v1_7->unk28 - temp_f10_10) * 1.7f) + temp_f10_10);
        this->unk18E = 1;
        this->unk304 = 1.0f;
    }
    temp_a0_5 = &sp44->eye;
    sp28 = temp_a0_5;
    Math_Vec3f_StepTo(temp_a0_5, &this->unk344, this->unk30C);
    temp_a0_6 = &sp44->at;
    sp24 = temp_a0_6;
    Math_Vec3f_StepTo(temp_a0_6, &this->unk350, this->unk310);
    Math_StepToF(&sp44->fov, 60.0f, 2.4285715f);
    func_80169940(globalCtx, this->unk2FA, sp44->fov);
    Play_CameraSetAtEye(globalCtx, this->unk2FA, sp24, sp28);
    temp_f0 = this->unk144.animCurrentFrame;
    if (temp_f0 < 10.0f) {
        phi_f2 = 10.0f;
    } else {
        if (temp_f0 > 14.0f) {
            phi_f12_3 = 14.0f;
        } else {
            phi_f12_3 = temp_f0;
        }
        phi_f2 = phi_f12_3;
    }
    temp_f0_2 = phi_f2 - 10.0f;
    this->unk304 = temp_f0_2 * 0.25f;
    if (temp_f0_2 < 14.0f) {
        func_808C566C(this);
    }
    if (SkelAnime_FrameUpdateMatrix(sp2C) != 0) {
        ActorCutscene_Stop((s16) this->actor.cutscene);
        func_800B724C(globalCtx, &this->actor, 6U);
        this->actor.flags |= 1;
        this->unk808.base.acFlags |= 1;
        func_808C645C(this);
    }
}

void func_808C645C(EnDeath *arg0) {
    SkelAnime *temp_a0;
    void (*temp_v0)(EnDeath *, GlobalContext *);

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06003CAC, 10.0f);
    temp_v0 = arg0->actionFunc;
    arg0->actor.speedXZ = 1.5f;
    if ((func_808C682C == temp_v0) || (func_808C6AB0 == temp_v0)) {
        arg0->unk2EE = 0x8C;
    } else {
        arg0->unk2EE = 0x64;
    }
    arg0->actionFunc = func_808C64DC;
}

void func_808C64DC(EnDeath *this, GlobalContext *globalCtx) {
    s16 temp_v1;
    s16 temp_v1_2;

    if (globalCtx->envCtx.unk_C3 == 0x14) {
        globalCtx->envCtx.unk_C3 = 0x1A;
    }
    func_808C5394(&this->actor);
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 8, 0x1000, (s16) 0x100);
    temp_v1 = this->unk2EE;
    if ((s32) temp_v1 > 0) {
        this->unk2EE = temp_v1 - 1;
    }
    if (((s32) this->actor.params < 5) && (Rand_ZeroOne() < 0.4f) && (func_808C5428(&this->actor, globalCtx) != 0)) {
        func_808C68B8(this);
        return;
    }
    temp_v1_2 = this->unk2EE;
    if (((s32) temp_v1_2 < 0x64) && (this->actor.xzDistToPlayer < 200.0f)) {
        func_808C6620(this);
        return;
    }
    if (temp_v1_2 == 0) {
        if ((s32) this->actor.params >= 5) {
            func_808C7AEC(this);
            return;
        }
        func_808C6A08(this);
        // Duplicate return node #15. Try simplifying control flow for better match
    }
}

void func_808C6620(Actor *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_06000E64, 1.0f, 0.0f, 10.0f, (u8) 2, -3.0f);
    arg0->unk2EE = 0;
    arg0->unk2EA = 0;
    arg0->speedXZ = 8.0f;
    Audio_PlayActorSound2(arg0, 0x3AB3U);
    arg0->unk188 = func_808C66A8;
}

void func_808C66A8(EnDeath *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s16 temp_v1;

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 4, 0x1000, (s16) 0x200);
    Math_StepToF(&this->actor.world.pos.y, this->actor.home.pos.y, 3.0f);
    this->actor.shape.rot.x = (s16) (s32) ((100.0f - this->actor.xzDistToPlayer) * 0.01f * 1024.0f);
    temp_v1 = this->actor.shape.rot.x;
    if ((s32) temp_v1 < 0) {
        this->actor.shape.rot.x = 0;
    } else {
        this->actor.shape.rot.x = temp_v1;
    }
    temp_v0 = this->unk2EE;
    if ((s32) temp_v0 > 0) {
        this->unk2EE = temp_v0 + 1;
        if (this->unk2EE == 3) {
            func_808C67C8(this);
            return;
        }
        // Duplicate return node #9. Try simplifying control flow for better match
        return;
    }
    if ((SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) && (this->actor.xzDistToPlayer < 100.0f)) {
        func_8019F1C0(&this->unk338, 0x3AACU);
        this->unk2EE += 1;
        this->actor.speedXZ = 0.0f;
    }
}

void func_808C67C8(EnDeath *arg0) {
    f32 temp_f6;

    arg0 = arg0;
    temp_f6 = (f32) SkelAnime_GetFrameCount(&D_06000E64.common);
    arg0->unk2EE = 0;
    arg0->unk144.animFrameCount = temp_f6;
    arg0->unk2EC = -1;
    arg0->unk18C = 1;
    arg0->actionFunc = func_808C682C;
    arg0->actor.speedXZ = 0.0f;
}

void func_808C682C(EnDeath *this, GlobalContext *globalCtx) {
    ActorShape *temp_a0;

    temp_a0 = &this->actor.shape;
    this->unk2EE += 1;
    if (this->unk144.animCurrentFrame > 20.0f) {
        this->unk18C = 0;
        this->unk788.base.atFlags &= 0xFFFE;
        this = this;
        Math_ScaledStepToS(&temp_a0->rot.x, 0, 0x200);
    }
    this = this;
    if (SkelAnime_FrameUpdateMatrix(this + 0x144) != 0) {
        this->actor.shape.rot.x = 0;
        func_808C645C(this);
    }
}

void func_808C68B8(EnDeath *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_0600B508, -3.0f);
    arg0->unk2EC = 0x1F;
    arg0->unk2EE = 0x1E;
    arg0->actor.speedXZ = 0.0f;
    func_808C54F0(arg0);
    arg0->unk18C = 1;
    arg0->unk190 = -3;
    arg0->actionFunc = func_808C692C;
}

void func_808C692C(EnDeath *this, GlobalContext *globalCtx) {
    SkelAnime *sp2C;
    SkelAnime *temp_a0;
    s8 temp_v0;

    func_808C5394(&this->actor);
    temp_v0 = this->unk190;
    temp_a0 = &this->unk144;
    this->unk2EE += -1;
    if ((s32) temp_v0 < 7) {
        this->unk190 = temp_v0 + 1;
    }
    sp2C = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801378B8(temp_a0, 0.0f) != 0) {
        func_8019F1C0(&this->unk338, 0x3AADU);
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 8, 0x1000, (s16) 0x100);
    func_808C54F0(this);
    if (this->unk2EE == 0) {
        if (this->actor.xzDistToPlayer > 200.0f) {
            func_808C6A08(this);
            return;
        }
        func_808C645C(this);
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void func_808C6A08(EnDeath *arg0) {
    SkelAnime *temp_a0;

    if (func_808C692C != arg0->actionFunc) {
        temp_a0 = arg0 + 0x144;
        arg0 = arg0;
        SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_0600B508, -3.0f);
        arg0->unk190 = -3;
        arg0->unk2EE = 0;
        arg0->unk2EC = -1;
        arg0->unk18C = 1;
        arg0->actor.speedXZ = 0.0f;
    } else {
        arg0->unk2EE = 0xA;
        arg0->unk2EC = 9;
        arg0->actor.speedXZ = 10.0f;
    }
    arg0 = arg0;
    func_808C54F0(arg0);
    arg0->actionFunc = func_808C6AB0;
}

void func_808C6AB0(EnDeath *this, GlobalContext *globalCtx) {
    SkelAnime *sp28;
    SkelAnime *temp_a0;
    s16 temp_v0_2;
    s8 temp_v0;

    func_808C5394(&this->actor);
    temp_a0 = &this->unk144;
    sp28 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801378B8(temp_a0, 0.0f) != 0) {
        func_8019F1C0(&this->unk338, 0x3AADU);
    }
    temp_v0 = this->unk190;
    if ((s32) temp_v0 < 7) {
        this->unk190 = temp_v0 + 1;
    }
    this->unk2EE += 1;
    temp_v0_2 = this->unk2EE;
    if ((s32) temp_v0_2 < 0xA) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 8, 0x1000, (s16) 0x100);
    } else if (temp_v0_2 == 0xA) {
        this->actor.speedXZ = 10.0f;
    }
    func_808C54F0(this);
    Math_ScaledStepToS(&this->unk2F2, (s16) ((s32) (Math_SinS((s16) (this->unk2EE << 0xD)) * 2048.0f) + 0x3000), 0x1000);
    Math_ScaledStepToS(&this->unk2F4, (s16) (s32) (Math_SinS((s16) ((this->unk2EE << 0xD) - 0x8000)) * 2048.0f), 0x1000);
    if (((this->actor.bgCheckFlags & 8) != 0) || ((this->unk788.base.atFlags & 2) != 0) || ((this->unk860.base.atFlags & 2) != 0)) {
        this->unk18C = 0;
        this->unk788.base.atFlags &= 0xFFFC;
        this->unk860.base.atFlags &= 0xFFFD;
        func_808C645C(this);
    }
}

void func_808C6C5C(Actor *arg0) {
    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_06001F80);
    arg0->speedXZ = 10.0f;
    func_800BE568(arg0, arg0 + 0x808);
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0xF);
    Audio_PlayActorSound2(arg0, 0x3AB1U);
    arg0->unk188 = func_808C6CDC;
}

void func_808C6CDC(EnDeath *this, GlobalContext *globalCtx) {
    func_808C5394(&this->actor);
    Math_StepToF(&this->actor.speedXZ, 0.0f, 0.5f);
    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        this->unk808.base.acFlags |= 1;
        func_808C6A08(this);
    }
}

void func_808C6D40(Actor *arg0, GlobalContext *arg1) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    Actor *temp_v1;
    f32 temp_f10;
    f32 temp_f4;
    s32 temp_a0;
    Actor *phi_v1;
    s32 phi_a0;

    arg0->flags &= -0x1002;
    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_06002DE8);
    phi_v1 = arg0;
    phi_a0 = 0;
    do {
        temp_a0 = phi_a0 + 4;
        temp_v1 = phi_v1 + 0x10;
        phi_v1->unk6E4->unk1C = 6;
        temp_v1->unk6D8->unk1C = 6;
        temp_v1->unk6DC->unk1C = 6;
        temp_v1->unk6E0->unk1C = 6;
        phi_v1 = temp_v1;
        phi_a0 = temp_a0;
    } while (temp_a0 != 0x14);
    arg0->unk18D = 0;
    arg0->unk819 = (u8) (arg0->unk819 & 0xFFFE);
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x1E);
    arg0->unk2EE = 0x23;
    arg0->world.pos.y = arg0->home.pos.y;
    arg0->speedXZ = 0.0f;
    arg0->unk344 = (f32) ((Math_SinS((s16) (arg0->shape.rot.y + 0x900)) * 79.0f) + arg0->world.pos.x);
    temp_f10 = (Math_CosS((s16) (arg0->shape.rot.y + 0x900)) * 79.0f) + arg0->world.pos.z;
    arg0->unk348 = (f32) (arg0->home.pos.y + 63.0f);
    arg0->unk34C = temp_f10;
    sp30 = arg0->world.pos.x;
    sp34 = arg0->world.pos.y + 100.0f;
    sp38 = arg0->world.pos.z;
    sp3C = (Math_SinS((s16) (arg0->shape.rot.y + 0x900)) * 179.0f) + arg0->world.pos.x;
    sp44 = (Math_CosS((s16) (arg0->shape.rot.y + 0x900)) * 179.0f) + arg0->world.pos.z;
    sp40 = arg0->home.pos.y + 30.0f;
    Play_CameraSetAtEye(arg1, arg0->unk2FA, (Vec3f *) &sp30, (Vec3f *) &sp3C);
    temp_f4 = Math_Vec3f_DistXYZ((Vec3f *) &sp3C, arg0 + 0x344) * 0.05f;
    arg0->shape.rot.y += 0x2000;
    arg0->unk30C = temp_f4;
    func_800B724C(arg1, arg0, 7U);
    Audio_PlayActorSound2(arg0, 0x3AB2U);
    arg0->unk188 = func_808C6F6C;
}

void func_808C6F6C(EnDeath *this, GlobalContext *globalCtx) {
    Camera *sp2C;
    f32 sp28;
    SkelAnime *sp24;
    Camera *temp_v0;
    SkelAnime *temp_a0;
    SkelAnime *temp_a0_2;
    s32 phi_v0;

    temp_v0 = Play_GetCamera(globalCtx, this->unk2FA);
    sp2C = temp_v0;
    sp28 = Math_Vec3f_StepTo(&temp_v0->eye, &this->unk344, this->unk30C);
    Play_CameraSetAtEye(globalCtx, this->unk2FA, &sp2C->at, &sp2C->eye);
    temp_a0 = &this->unk144;
    sp24 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        this->actor.shape.rot.y += 0x2000;
        SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_0600352C);
    } else if (&D_06002DE8 == this->unk144.animCurrentSeg) {
        temp_a0_2 = &this->unk6A4;
        this->actor.shape.rot.y += 0x2000;
        if (this->unk144.animCurrentFrame > 3.0f) {
            sp24 = temp_a0_2;
            SysMatrix_SetCurrentState((MtxF *) temp_a0_2);
            SysMatrix_InsertXRotation_s(-0x1000, 1);
            SysMatrix_CopyCurrentState((MtxF *) temp_a0_2);
            this->unk18E = 0;
            this->unk6D8 += 18.0f;
            Audio_PlayActorSound2(&this->actor, 0x3AACU);
        }
    }
    if (sp28 < 0.1f) {
        if (this->unk2EE == 0x23) {
            func_801A479C(&this->unk338, 0x3AAE, 0x41);
        }
        phi_v0 = (s32) this->unk2EE;
        if ((s32) this->unk2EE > 0) {
            this->unk2EE = (s32) this->unk2EE - 1;
            phi_v0 = (s32) this->unk2EE;
        }
        if (phi_v0 == 0) {
            func_808C70D8(this, globalCtx);
        }
    }
}

void func_808C70D8(EnDeath *arg0, GlobalContext *arg1) {
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    Actor *temp_s0;
    LightSettings *temp_a2_2;
    LightSettings *temp_v1;
    f32 *temp_a2;
    f32 temp_f0;
    s32 temp_a1;
    LightSettings *phi_a0;
    LightSettings *phi_v1;
    s32 phi_a1;

    temp_s0 = arg1->actorCtx.actorList[2].first;
    SkelAnime_ChangeAnimDefaultRepeat(arg0 + 0x144, &D_0600352C);
    arg0->unk2EE = 0x1E;
    temp_s0->shape.rot.y = Actor_YawToPoint(temp_s0, arg0 + 8) + 0x1000;
    arg0->actor.shape.rot.y = temp_s0->shape.rot.y + 0x6000;
    sp30 = Math_SinS(temp_s0->shape.rot.y);
    temp_f0 = Math_CosS(temp_s0->shape.rot.y);
    sp2C = temp_f0;
    arg0->actor.world.pos.x = temp_s0->world.pos.x + (260.0f * sp30);
    arg0->actor.world.pos.y = arg0->actor.home.pos.y + 15.0f;
    arg0->actor.world.pos.z = temp_s0->world.pos.z + (260.0f * temp_f0);
    sp40 = (Math_SinS((s16) (temp_s0->shape.rot.y - 0x2500)) * 182.0f) + arg0->actor.world.pos.x;
    temp_a2 = &sp34;
    sp48 = (Math_CosS((s16) (temp_s0->shape.rot.y - 0x2500)) * 182.0f) + arg0->actor.world.pos.z;
    sp44 = arg0->actor.world.pos.y - 13.0f;
    sp34 = temp_s0->world.pos.x + (120.0f * sp30);
    sp38 = temp_s0->world.pos.y + 90.0f;
    sp3C = temp_s0->world.pos.z + (120.0f * sp2C);
    Play_CameraSetAtEye(arg1, arg0->unk2FA, (Vec3f *) temp_a2, (Vec3f *) &sp40);
    temp_a2_2 = arg1->envCtx.lightSettingsList;
    phi_a0 = temp_a2_2 + 0x1CE;
    phi_v1 = temp_a2_2 + 0x1B8;
    phi_a1 = 0;
    do {
        temp_a1 = phi_a1 + 1;
        temp_v1 = phi_v1 + 1;
        temp_v1->ambientColor[2] = phi_a0->diffuseDir1[0];
        temp_v1->diffuseColor1[2] = phi_a0->diffusePos2[0];
        phi_a0 += 1;
        phi_v1 = temp_v1;
        phi_a1 = temp_a1;
    } while (temp_a1 != 3);
    arg0->actionFunc = func_808C72AC;
}

void func_808C72AC(EnDeath *this, GlobalContext *globalCtx) {
    f32 sp2C;
    s16 sp26;
    Vec3f *sp20;
    Vec3f *temp_a0_2;
    f32 temp_f0;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_a0;

    SkelAnime_FrameUpdateMatrix(&this->unk144);
    this->unk2EE += -1;
    temp_v1 = this->unk2EE;
    if (((s32) temp_v1 >= 0) && ((s32) temp_v1 < 3)) {
        temp_v1_2 = func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x8000;
        temp_a0 = temp_v1_2 << 0x10;
        sp26 = temp_v1_2;
        sp2C = Math_SinS((s16) (temp_a0 >> 0x10));
        temp_f0 = Math_CosS(sp26);
        SysMatrix_InsertTranslation(this->actor.world.pos.x + (83.0f * sp2C) + (-38.0f * temp_f0), this->actor.world.pos.y + 53.0f + (15.0f * (f32) this->unk2EE), (this->actor.world.pos.z + (83.0f * temp_f0)) - (-38.0f * sp2C), 0);
        Matrix_RotateY((s16) (sp26 - 0x3300), 1U);
        SysMatrix_InsertXRotation_s((s16) (0x1100 - (this->unk2EE * 0x1800)), 1);
        SysMatrix_InsertZRotation_s(-0xA00, 1);
        Matrix_Scale(0.01f, 0.01f, 0.01f, 1);
        SysMatrix_CopyCurrentState((MtxF *) &this->unk6A4);
        if (this->unk2EE == 0) {
            func_800DFD04(globalCtx->cameraPtrs[globalCtx->activeCamera], 2, 4, 6);
            func_8013ECE0(this->actor.xyzDistToPlayerSq, 0xB4U, 0x14U, 0x64U);
            temp_a0_2 = &this->unk338;
            sp20 = temp_a0_2;
            func_801A7328(temp_a0_2, 0x3AAE);
            func_8019F1C0(temp_a0_2, 0x3AAFU);
        }
    }
    if ((s32) this->unk2EE < -0x19) {
        globalCtx->envCtx.unk_C3 = 0x14;
        func_808C74A4(this);
    }
}

void func_808C74A4(EnDeath *arg0) {
    EnDeath *temp_v1;
    s32 temp_v0;
    EnDeath *phi_v1;
    s32 phi_v0;

    phi_v1 = arg0;
    phi_v0 = 0;
    do {
        temp_v0 = phi_v0 + 4;
        temp_v1 = phi_v1 + 0x10;
        phi_v1->unk6E4->unk1C = 5;
        temp_v1->unk6D8->unk1C = 5;
        temp_v1->unk6DC->unk1C = 5;
        temp_v1->unk6E0->unk1C = 5;
        phi_v1 = temp_v1;
        phi_v0 = temp_v0;
    } while (temp_v0 != 0x14);
    arg0->unk2EE = 0;
    arg0->actionFunc = func_808C74F8;
}

void func_808C74F8(EnDeath *this, GlobalContext *globalCtx) {
    f32 sp7C;
    ? *temp_s1;
    Camera *temp_a0;
    Vec3f *temp_s1_2;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f24;
    f32 temp_f28;
    s16 temp_a1;
    s32 temp_hi;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s8 *temp_s2;
    s8 temp_s0;
    ? *phi_s1;
    u8 *phi_s2;
    s32 phi_v0;
    Vec3f *phi_s1_2;
    s8 phi_s0;
    s8 *phi_s2_2;
    s16 phi_a1;
    s16 *phi_v1;
    s32 phi_v0_2;
    s16 phi_a1_2;

    phi_s1 = &this->unk404;
    phi_s2 = &this->unk1A9;
    phi_v0 = 0;
    phi_v0_2 = 0;
    do {
        temp_v0 = phi_v0 + 1;
        temp_s1 = phi_s1 + 0xC;
        temp_s1->unk-8 = (f32) (phi_s1->unk4 + 1.7f);
        temp_v1 = *phi_s2 - 0x1E;
        phi_s1 = temp_s1;
        phi_v0 = temp_v0;
        if (temp_v1 < 0) {
            *phi_s2 = 0;
        } else {
            *phi_s2 = (u8) temp_v1;
        }
        phi_s2 += 1;
    } while (temp_v0 < 0x38);
    temp_v1_2 = ((s32) this->unk2EE * -0xE) + 0xFC;
    if (temp_v1_2 < 0) {
        this->actor.shape.shadowAlpha = 0;
    } else {
        this->actor.shape.shadowAlpha = (u8) temp_v1_2;
    }
    temp_a1 = this->unk2EE;
    if ((s32) temp_a1 < 0x12) {
        temp_hi = (s32) (temp_a1 * 7) % 0x38;
        temp_a0 = globalCtx->cameraPtrs[globalCtx->activeCamera];
        temp_s1_2 = this + (temp_hi * 0xC) + 0x404;
        temp_s2 = this + temp_hi + 0x1A9;
        globalCtx = globalCtx;
        sp7C = Math_SinS((s16) (func_800DFCDC(temp_a0) + 0x8000));
        temp_f0 = Math_CosS((s16) (func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x8000));
        temp_f28 = 30.0f * temp_f0;
        temp_f24 = temp_f0;
        phi_s1_2 = temp_s1_2;
        phi_s0 = 0xFF;
        phi_s2_2 = temp_s2;
        do {
            temp_f20 = randPlusMinusPoint5Scaled(100.0f) - 20.0f;
            phi_s1_2->x = this->actor.world.pos.x + (30.0f * sp7C) + (temp_f20 * temp_f24);
            phi_s1_2->y = (Rand_ZeroFloat(20.0f) + this->actor.world.pos.y + (4.0f * (f32) this->unk2EE)) - 30.0f;
            phi_s1_2->z = (this->actor.world.pos.z + temp_f28) - (temp_f20 * sp7C);
            *phi_s2_2 = phi_s0;
            EffectSsKiraKira_SpawnSmall(globalCtx, phi_s1_2, &D_808C9A70, &D_808C9A7C, &D_808C9A88, &D_808C9A8C);
            temp_s0 = phi_s0 - 4;
            phi_s1_2 += 0xC;
            phi_s0 = temp_s0;
            phi_s2_2 += 1;
        } while (temp_s0 != 0xE3);
        func_800B9010(&this->actor, 0x321FU);
    }
    this->unk2EE += 1;
    phi_a1 = this->unk2EE;
    phi_v1 = &D_808C9A90;
    do {
        phi_a1_2 = phi_a1;
        if (phi_a1 == *phi_v1) {
            (this + phi_v0_2)->unk193 = 1;
            phi_a1_2 = this->unk2EE;
        }
        temp_v0_2 = phi_v0_2 + 1;
        phi_a1 = phi_a1_2;
        phi_v1 += 2;
        phi_v0_2 = temp_v0_2;
    } while (temp_v0_2 != 0x16);
    if (phi_a1_2 == 0x1A) {
        func_808C7800(this, phi_a1_2, 0x16);
    }
}

void func_808C7800(EnDeath *arg0) {
    EnDeath *temp_v0;
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    s32 temp_v1;
    EnDeath *phi_v0;
    s32 phi_v1;

    phi_v0 = arg0;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 4;
        phi_v0->unk1AA = 0;
        phi_v0->unk1AB = 0;
        phi_v0->unk1AC = 0;
        temp_v0 = phi_v0 + 4;
        temp_v0->unk1A5 = 0;
        phi_v0 = temp_v0;
        phi_v1 = temp_v1;
    } while (temp_v1 != 0x38);
    temp_a0 = arg0 + 0x24;
    temp_a1 = arg0 + 0x3C;
    arg0 = arg0;
    Math_Vec3f_Copy(temp_a0, temp_a1);
    arg0->actor.bgCheckFlags &= 0xFFFE;
    arg0->unk2EE = 0;
    arg0->actionFunc = func_808C7888;
    arg0->actor.gravity = -1.0f;
    arg0->actor.shape.yOffset = 0.0f;
}

void func_808C7888(EnDeath *this, GlobalContext *globalCtx) {
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    PosRot *temp_s6;
    f32 *temp_s1;
    s16 temp_v0;
    s32 temp_s0;
    s32 phi_s0;

    temp_v0 = this->unk2EE;
    if (temp_v0 == 0) {
        if (((this->actor.bgCheckFlags & 1) != 0) || (this->actor.floorHeight == -32000.0f)) {
            Actor_SetScale(&this->actor, 0.0f);
            this->unk2EE += 1;
            temp_s6 = &this->actor.world;
            temp_s1 = &sp74;
            phi_s0 = 0;
            do {
                D_808C9AC0 = -0.2f;
                sp74 = randPlusMinusPoint5Scaled(4.0f);
                sp7C = randPlusMinusPoint5Scaled(4.0f);
                sp78 = Rand_ZeroFloat(2.0f) + 3.0f;
                EffectSsKiraKira_SpawnSmall(globalCtx, &temp_s6->pos, (Vec3f *) temp_s1, &D_808C9ABC, &D_808C9AC8, &D_808C9ACC);
                temp_s0 = phi_s0 + 1;
                phi_s0 = temp_s0;
            } while (temp_s0 != 0x28);
            Audio_PlayActorSound2(&this->actor, 0x3AB5U);
            return;
        }
        // Duplicate return node #8. Try simplifying control flow for better match
        return;
    }
    this->unk2EE = temp_v0 + 1;
    if (this->unk2EE == 0x14) {
        func_808C7A30(this, globalCtx);
    }
}

void func_808C7A30(Actor *arg0, GlobalContext *arg1) {
    ActorCutscene_Stop((s16) arg0->cutscene);
    func_800B724C(arg1, arg0, 6U);
    Actor_SetRoomClearedTemp(arg1, (u32) arg1->roomCtx.currRoom.num);
    arg0->unk2EE = 0xFF;
    arg1->envCtx.unk_C3 = 0xFF;
    arg0->unk188 = func_808C7AAC;
}

void func_808C7AAC(EnDeath *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk2EE;
    if ((s32) temp_v0 > 0) {
        this->unk2EE = temp_v0 - 5;
        if ((s32) this->unk2EE <= 0) {
            this->unk2EE = 0;
            Actor_MarkForDeath(&this->actor);
        }
    }
}

void func_808C7AEC(Actor *arg0) {
    Actor *temp_a0;
    Actor *temp_v1;
    s32 temp_a0_2;
    Actor *phi_v1;
    s32 phi_a0;

    temp_a0 = arg0;
    arg0 = arg0;
    Audio_PlayActorSound2(temp_a0, 0x3AB0U);
    SkelAnime_ChangeAnimTransitionStop((SkelAnime *) (arg0 + 0x144), &D_060015B4, 5.0f);
    arg0->speedXZ = 0.0f;
    phi_v1 = arg0;
    phi_a0 = 0;
    do {
        temp_a0_2 = phi_a0 + 4;
        temp_v1 = phi_v1 + 0x10;
        phi_v1->unk6E4->unk1C = 3;
        temp_v1->unk6D8->unk1C = 3;
        temp_v1->unk6DC->unk1C = 3;
        temp_v1->unk6E0->unk1C = 3;
        phi_v1 = temp_v1;
        phi_a0 = temp_a0_2;
    } while (temp_a0_2 != 0x14);
    arg0->unk2EA = 0;
    arg0->unk188 = func_808C7B88;
}

void func_808C7B88(EnDeath *this, GlobalContext *globalCtx) {
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 8, 0x1000, (s16) 0x100);
    Math_StepToF(&this->actor.world.pos.y, this->actor.home.pos.y, 5.0f);
    if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
        globalCtx->envCtx.unk_C3 = 0x1B;
        func_808C7C04(this);
    }
}

void func_808C7C04(EnDeath *arg0) {
    EnDeath *temp_v1;
    SkelAnime *temp_a0;
    s32 temp_a0_2;
    EnDeath *phi_v1;
    s32 phi_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultRepeat(temp_a0, &D_06001834);
    phi_v1 = arg0;
    phi_a0 = 0;
    do {
        temp_a0_2 = phi_a0 + 4;
        temp_v1 = phi_v1 + 0x10;
        phi_v1->unk6E4->unk1C = 4;
        temp_v1->unk6D8->unk1C = 4;
        temp_v1->unk6DC->unk1C = 4;
        temp_v1->unk6E0->unk1C = 4;
        phi_v1 = temp_v1;
        phi_a0 = temp_a0_2;
    } while (temp_a0_2 != 0x14);
    arg0->actionFunc = func_808C7C88;
    arg0->actor.speedXZ = 0.0f;
}

void func_808C7C88(EnDeath *this, GlobalContext *globalCtx) {
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 8, 0x1000, (s16) 0x100);
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    if ((s32) this->actor.params >= 5) {
        globalCtx->envCtx.unk_C3 = 0x1A;
        func_808C645C(this);
    }
}

void func_808C7CFC(EnDeath *arg0) {
    ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
    arg0->actionFunc = func_808C7D34;
}

void func_808C7D34(EnDeath *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCanPlayNext((s16) this->actor.cutscene) != 0) {
        ActorCutscene_Start((s16) this->actor.cutscene, &this->actor);
        this->unk2FA = ActorCutscene_GetCurrentCamera((s16) this->actor.cutscene);
        if (this->actor.colChkInfo.health == 0) {
            func_808C6D40(&this->actor, globalCtx);
            return;
        }
        func_808C571C(&this->actor, globalCtx);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
}

void func_808C7DB8(EnDeath *arg0) {
    arg0->actionFunc = func_808C7DCC;
}

void func_808C7DCC(EnDeath *this, GlobalContext *globalCtx) {
    if (func_801690CC(globalCtx) == 0) {
        func_808C5310(globalCtx);
        this->unk808.base.acFlags |= 1;
        func_801A2E54(0x38);
        func_808C645C(this);
    }
}

void func_808C7E24(EnDeath *arg0, GlobalContext *arg1) {
    Vec3f *sp30;
    Vec3f *temp_a1;
    f32 temp_f0;
    f32 temp_f2;

    if (arg0->unk18D != 0) {
        temp_f0 = arg0->unk308;
        temp_f2 = arg0->actor.floorHeight;
        arg0->unk324 += temp_f0;
        arg0->unk308 = temp_f0 - 1.0f;
        arg0->unk2F6 += 0x1800;
        temp_a1 = arg0 + 0x320;
        if (arg0->unk324 < temp_f2) {
            arg0->unk324 = temp_f2;
            sp30 = temp_a1;
            func_800B3030(arg1, temp_a1, &D_801D15B0, &D_801D15B0, (s16) 0x64, (s16) 0, 0);
            Audio_PlaySoundAtPosition(arg1, temp_a1, 0xB, 0x3878U);
            arg0->unk18D = 0;
        }
    }
}

void func_808C7EDC(Actor *arg0, GlobalContext *arg1) {
    Vec3f *sp38;
    Actor *temp_v0_4;
    Actor *temp_v0_6;
    Vec3f *temp_a0;
    s16 temp_v0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_5;
    Actor *phi_v0;
    s32 phi_a0;
    Actor *phi_v0_2;
    s32 phi_a0_2;

    temp_v0 = arg0->unk2F8;
    if ((s32) temp_v0 > 0) {
        arg0->unk2F8 = (s16) (temp_v0 - 1);
    }
    temp_v0_2 = arg0->unk819;
    if ((temp_v0_2 & 2) != 0) {
        arg0->unk819 = (u8) (temp_v0_2 & 0xFFFD);
        if ((s32) arg0->params >= 5) {
            arg0->unk18D = 1;
            temp_a0 = arg0 + 0x320;
            arg0->unk308 = -1.0f;
            arg0->unk2F6 = (s16) arg0->shape.rot.y;
            sp38 = temp_a0;
            Math_Vec3s_ToVec3f(temp_a0, arg0 + 0x850);
            Audio_PlaySoundAtPosition(arg1, sp38, 0x1E, 0x3842U);
            temp_v0_3 = arg0->colChkInfo.damageEffect;
            if ((temp_v0_3 == 4) && (phi_a0 = 0, (func_808C7B88 != arg0->unk188))) {
                phi_v0 = arg0;
                do {
                    temp_a0_2 = phi_a0 + 4;
                    temp_v0_4 = phi_v0 + 0x10;
                    phi_v0->unk6E4->unk1C = 1;
                    temp_v0_4->unk6D8->unk1C = 1;
                    temp_v0_4->unk6DC->unk1C = 1;
                    temp_v0_4->unk6E0->unk1C = 1;
                    phi_v0 = temp_v0_4;
                    phi_a0 = temp_a0_2;
                } while (temp_a0_2 != 0x14);
                arg1->envCtx.unk_C3 = 0x1C;
                arg0->unk2FC = 0x14;
                if (func_808C64DC == arg0->unk188) {
                    arg0->unk2EE = 0x64;
                    return;
                }
                // Duplicate return node #23. Try simplifying control flow for better match
                return;
            }
            if (temp_v0_3 == 0xF) {
                arg0->unk2F8 = 0xA;
                return;
            }
            // Duplicate return node #23. Try simplifying control flow for better match
            return;
        }
        temp_v0_5 = arg0->colChkInfo.damageEffect;
        if ((temp_v0_5 != 0xF) || (arg0->unk2F8 == 0)) {
            arg0->unk18C = 0;
            arg0->unk798 = (u8) (arg0->unk798 & 0xFFFE);
            arg0->unk819 = (u8) (arg0->unk819 & 0xFFFE);
            if (temp_v0_5 == 4) {
                arg0->unk31C = 3.0f;
                arg0->unk18F = 0x14;
                arg0->unk314 = 0.8f;
                Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) arg0->unk82E, (f32) arg0->unk830, (f32) arg0->unk832, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
            }
            if (arg1->envCtx.unk_C3 == 0x1B) {
                arg1->envCtx.unk_C3 = 0x1A;
            }
            arg0->shape.rot.x = 0;
            phi_a0_2 = 0;
            if (Actor_ApplyDamage(arg0) == 0) {
                Enemy_StartFinishingBlow(arg1, arg0);
                func_801A2ED8();
                func_808C7CFC((EnDeath *) arg0);
                return;
            }
            phi_v0_2 = arg0;
            do {
                temp_a0_3 = phi_a0_2 + 4;
                temp_v0_6 = phi_v0_2 + 0x10;
                phi_v0_2->unk6E4->unk1C = 2;
                temp_v0_6->unk6D8->unk1C = 2;
                temp_v0_6->unk6DC->unk1C = 2;
                temp_v0_6->unk6E0->unk1C = 2;
                phi_v0_2 = temp_v0_6;
                phi_a0_2 = temp_a0_3;
            } while (temp_a0_3 != 0x14);
            func_808C6C5C(arg0, 0x14);
            // Duplicate return node #23. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #23. Try simplifying control flow for better match
    }
}

void EnDeath_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnDeath *this = (EnDeath *) thisx;
    void (*sp2C)(EnDeath *, GlobalContext *);
    ColliderTris *sp28;
    Actor *temp_v0_2;
    ColliderTris *temp_a2;
    CollisionCheckContext *temp_a1;
    f32 temp_f0;
    s16 temp_v0;
    s32 temp_f16;
    void (*temp_v1)(EnDeath *, GlobalContext *);
    f32 phi_f0;

    temp_v0 = this->unk2FC;
    if ((s32) temp_v0 > 0) {
        this->unk2FC = temp_v0 - 1;
        temp_v0_2 = func_ActorCategoryIterateById(globalCtx, NULL, 7, 0x7F);
        if (temp_v0_2 != 0) {
            temp_v0_2->unk15C = -100.0f;
        }
        if (this->unk2FC == 0) {
            globalCtx->envCtx.unk_C3 = 0x1A;
        }
    }
    func_808C7EDC(&this->actor, globalCtx);
    func_808C7E24(this, globalCtx);
    sp2C = func_808C6AB0;
    if (func_808C6AB0 != this->actionFunc) {
        Math_ScaledStepToS(&this->unk2F2, 0, 0x800);
        Math_ScaledStepToS(&this->unk2F4, 0, 0x800);
    }
    this->actionFunc(this, globalCtx);
    if (func_808C6CDC != this->actionFunc) {
        this->actor.world.rot.y = this->actor.shape.rot.y;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    if (sp2C == this->actionFunc) {
        phi_f0 = 50.0f;
    } else {
        phi_f0 = 100.0f;
    }
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 40.0f, phi_f0, 40.0f, 7U);
    this->unk73C.dim.pos.x = (s16) (s32) ((Math_SinS(this->actor.shape.rot.y) * 3.0f) + this->actor.world.pos.x);
    temp_f16 = (s32) ((Math_CosS(this->actor.shape.rot.y) * 3.0f) + this->actor.world.pos.z);
    this->unk73C.dim.pos.y = (s16) (s32) this->actor.world.pos.y;
    this->unk73C.dim.pos.z = (s16) temp_f16;
    if ((s32) this->actor.params < 5) {
        this->unk808.dim.worldSphere.radius = this->unk808.dim.modelSphere.radius + 5;
    } else {
        this->unk808.dim.worldSphere.radius = this->unk808.dim.modelSphere.radius;
    }
    if (func_808C7AAC != this->actionFunc) {
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->unk73C.base);
    }
    if ((this->unk808.base.acFlags & 1) != 0) {
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->unk808.base);
    }
    if ((this->unk788.base.atFlags & 1) != 0) {
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &this->unk788.base);
    }
    temp_v1 = this->actionFunc;
    if ((func_808C692C == temp_v1) || (sp2C == temp_v1)) {
        temp_a1 = &globalCtx->colChkCtx;
        temp_a2 = &this->unk860;
        sp28 = temp_a2;
        sp2C = (void (*)(EnDeath *, GlobalContext *)) temp_a1;
        CollisionCheck_SetAT(globalCtx, temp_a1, &temp_a2->base);
        CollisionCheck_SetAC(globalCtx, temp_a1, &temp_a2->base);
    }
    if (this->unk31C > 0.0f) {
        if (this->unk18F != 0xA) {
            Math_StepToF(&this->unk31C, 0.0f, 0.05f);
            temp_f0 = (this->unk31C + 1.0f) * 0.4f;
            this->unk314 = temp_f0;
            if (temp_f0 > 0.8f) {
                this->unk314 = 0.8f;
                return;
            }
            this->unk314 = this->unk314;
            return;
        }
        if (Math_StepToF(&this->unk318, 0.8f, 0.02f) == 0) {
            func_800B9010(&this->actor, 0x20B2U);
        }
        // Duplicate return node #31. Try simplifying control flow for better match
    }
}

void func_808C84A4(Actor *arg0, GlobalContext *arg1) {
    GraphicsContext *sp88;
    MtxF *sp64;
    ? *sp5C;
    ? *sp58;
    Gfx *temp_s0;
    Gfx *temp_s0_7;
    GraphicsContext *temp_t6;
    s32 temp_s2;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    Gfx *phi_s0;
    s32 phi_s3;
    s16 phi_s4;
    s32 phi_s2;
    Gfx *phi_s0_2;

    func_800B8118(arg0, arg1, 0);
    Scene_SetRenderModeXlu(arg1, 1, 2U);
    temp_t6 = arg1->state.gfxCtx;
    sp88 = temp_t6;
    temp_s0 = temp_t6->polyXlu.p;
    phi_s0 = temp_s0;
    phi_s3 = 0xDC;
    phi_s4 = 0x2100;
    phi_s2 = 1;
    phi_s0_2 = temp_s0;
    if ((s32) arg0->unk190 >= 2) {
        sp5C = &D_06006F88;
        sp58 = &D_060073D0;
        sp64 = arg0 + 0x6A4;
        do {
            phi_s0->words.w0 = 0xE7000000;
            phi_s0->words.w1 = 0;
            temp_s0_2 = phi_s0 + 8;
            temp_s0_2->unk0 = 0xFB000000;
            temp_s0_2->unk4 = (s32) ((phi_s3 & 0xFF) | 0x1E1E0000);
            temp_s0_3 = temp_s0_2 + 8;
            SysMatrix_SetCurrentState(sp64);
            SysMatrix_InsertXRotation_s(phi_s4, 1);
            temp_s0_3->unk0 = 0xDA380003;
            temp_s0_4 = temp_s0_3 + 8;
            temp_s0_3->unk4 = Matrix_NewMtx(arg1->state.gfxCtx);
            temp_s0_4->unk0 = 0xDE000000;
            temp_s0_5 = temp_s0_4 + 8;
            temp_s0_4->unk4 = sp5C;
            SysMatrix_InsertTranslation(0.0f, -1084.0f, 7012.0f, 1);
            SysMatrix_InsertRotation(-0x4000, 0, -0x4000, 1);
            temp_s0_5->unk0 = 0xDA380003;
            temp_s0_6 = temp_s0_5 + 8;
            temp_s0_5->unk4 = Matrix_NewMtx(arg1->state.gfxCtx);
            temp_s0_6->unk0 = 0xDE000000;
            temp_s0_7 = temp_s0_6 + 8;
            temp_s0_6->unk4 = sp58;
            temp_s2 = phi_s2 + 1;
            phi_s0 = temp_s0_7;
            phi_s3 += -0x23;
            phi_s4 += 0x2100;
            phi_s2 = temp_s2;
            phi_s0_2 = temp_s0_7;
        } while (temp_s2 < (s32) arg0->unk190);
    }
    sp88->polyXlu.p = phi_s0_2;
}

void func_808C8690(Actor *arg0, GlobalContext *arg1) {
    GraphicsContext *sp44;
    void (*sp24)(EnDeath *, GlobalContext *);
    Gfx *temp_s0;
    Gfx *temp_s0_2;
    GraphicsContext *temp_v1;
    f32 temp_f12;
    Gfx *phi_s0;

    sp24 = func_808C7AAC;
    if (func_808C7AAC == arg0->unk188) {
        func_800B8118(arg0, arg1, 0);
        Scene_SetRenderModeXlu(arg1, 1, 2U);
    }
    temp_v1 = arg1->state.gfxCtx;
    if (sp24 == arg0->unk188) {
        temp_s0 = temp_v1->polyXlu.p;
        temp_s0->words.w0 = 0xE7000000;
        temp_s0->words.w1 = 0;
        temp_s0_2 = temp_s0 + 8;
        temp_s0_2->words.w0 = 0xFB000000;
        temp_s0_2->words.w1 = (arg0->unk2EE & 0xFF) | 0x1E1E0000;
        phi_s0 = temp_s0_2 + 8;
    } else {
        phi_s0 = temp_v1->polyOpa.p;
    }
    sp44 = temp_v1;
    SysMatrix_SetCurrentState(arg0 + 0x6A4);
    temp_f12 = arg0->unk304;
    Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
    phi_s0->words.w0 = 0xDA380003;
    phi_s0->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    phi_s0->unk8 = 0xDE000000;
    phi_s0->unkC = &D_06006F88;
    SysMatrix_InsertTranslation(0.0f, -1084.0f, 7012.0f, 1);
    SysMatrix_InsertRotation(-0x4000, 0, -0x4000, 1);
    phi_s0->unk10 = 0xDA380003;
    phi_s0->unk14 = Matrix_NewMtx(arg1->state.gfxCtx);
    phi_s0->unk18 = 0xDE000000;
    phi_s0->unk1C = &D_060073D0;
    SysMatrix_GetStateTranslation(arg0 + 0x32C);
    if (sp24 == arg0->unk188) {
        sp44->polyXlu.p = phi_s0 + 0x20;
        return;
    }
    sp44->polyOpa.p = phi_s0 + 0x20;
}

void func_808C882C(EnDeath *arg0, GraphicsContext **arg1) {
    Vec3f sp9C;
    GraphicsContext *sp98;
    void (*sp68)(EnDeath *, GlobalContext *);
    s32 sp64;
    EnDeath *sp60;
    void *sp5C;
    Gfx *temp_s3_6;
    GraphicsContext *temp_a2;
    MtxF *temp_s5;
    f32 temp_f24;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s2_3;
    s32 temp_t1;
    s32 temp_t3;
    void *temp_s0;
    void *temp_s3;
    void *temp_s3_2;
    void *temp_s3_3;
    void *temp_s3_4;
    void *temp_s3_5;
    void *temp_s3_7;
    void *temp_s4;
    void *temp_s4_2;
    EnDeath *phi_t0;
    EnDeath *phi_v0;
    s32 phi_t1;
    f32 phi_f24;
    void *phi_s0;
    Gfx *phi_s3;
    s32 phi_s2;
    void *phi_s0_2;
    f32 phi_f22;
    Gfx *phi_s3_2;
    s32 phi_s2_2;
    s32 phi_t1_2;
    EnDeath *phi_t0_2;
    void *phi_s0_3;
    Gfx *phi_s3_3;
    s32 phi_s2_3;
    EnDeath *phi_t0_3;
    Gfx *phi_s3_4;
    Gfx *phi_s3_5;
    EnDeath *phi_v0_2;
    Gfx *phi_s3_6;
    Gfx *phi_s3_7;
    Gfx *phi_s3_8;
    Gfx *phi_s3_9;

    temp_a2 = *arg1;
    temp_s3 = temp_a2->polyOpa.p;
    temp_s3->words.w0 = 0xDE000000;
    temp_s3->words.w1 = sSetupDL + 0x4B0;
    temp_s3_2 = temp_s3 + 8;
    temp_s3_2->unk4 = &D_06009F10;
    temp_s3_2->unk0 = 0xDE000000U;
    sp98 = temp_a2;
    temp_s5 = SysMatrix_GetCurrentState();
    phi_s3_6 = temp_s3_2 + 8;
    if (func_808C7AAC == arg0->actionFunc) {
        temp_f24 = (f32) arg0->unk2EE * 0.000035f;
        phi_f24 = temp_f24;
        phi_f22 = 0.007f;
        if (temp_f24 > 0.007f) {
            goto block_4;
        }
    } else {
block_4:
        phi_f24 = 0.007f;
        phi_f22 = 0.007f;
    }
    if ((arg0->actor.flags & 0x1000) != 0) {
        Math_Vec3f_Copy(&sp9C, arg1 + 0x2A0);
    } else {
        Math_Vec3f_Copy(&sp9C, &D_801D15B0);
    }
    sp68 = func_808C7DCC;
    phi_t0 = arg0;
    phi_v0 = arg0;
    phi_t1 = 0;
    do {
        phi_s3 = phi_s3_6;
        phi_t1_2 = phi_t1;
        phi_t0_2 = phi_t0;
        phi_v0_2 = phi_v0;
        phi_s3_9 = phi_s3_6;
        if ((sp68 == phi_t0->actionFunc) || ((phi_v0->unk6E4->unk4 & 0x40) == 0x40)) {
            temp_s4 = phi_v0->unk6E4;
            sp64 = phi_t1;
            sp60 = phi_v0;
            SysMatrix_InsertRotation(temp_s4->shape.rot.x, temp_s4->shape.rot.y, 0, 0);
            Matrix_Scale(phi_f24, phi_f24, phi_f24, 1);
            temp_s0 = temp_s4 + 0x160;
            sp5C = temp_s0;
            phi_s0 = temp_s0;
            phi_s2 = 0;
            phi_s2_2 = 0;
            do {
                phi_s3_7 = phi_s3;
                if (phi_s0->unk1 == 0) {
                    temp_s5->mf[3][0] = phi_s0->unk4 + sp9C.x;
                    temp_s5->mf[3][1] = phi_s0->unk8 + sp9C.y;
                    temp_s5->mf[3][2] = phi_s0->unkC + sp9C.z;
                    phi_s3->words.w0 = 0xDA380003;
                    temp_s3_3 = phi_s3 + 8;
                    phi_s3->words.w1 = Matrix_NewMtx(*arg1);
                    temp_s3_3->unk0 = 0xDE000000;
                    temp_s3_3->unk4 = (s32) *(&D_808C9AD0 + (phi_s0->unk0 * 4));
                    phi_s3_7 = temp_s3_3 + 8;
                }
                temp_s2 = phi_s2 + 1;
                phi_s0 += 0x24;
                phi_s3 = phi_s3_7;
                phi_s2 = temp_s2;
                phi_s3_2 = phi_s3_7;
            } while (temp_s2 < 3);
            phi_s0_2 = sp5C;
            do {
                phi_s3_8 = phi_s3_2;
                if (phi_s0_2->unk1 == 1) {
                    SysMatrix_InsertRotation(0x4000, phi_s0_2->unk1E, 0, 0);
                    Matrix_Scale(phi_f22, phi_f22, phi_f22, 1);
                    temp_s5->mf[3][0] = phi_s0_2->unk4 + sp9C.x;
                    temp_s5->mf[3][1] = phi_s0_2->unk8 + sp9C.y;
                    temp_s5->mf[3][2] = phi_s0_2->unkC + sp9C.z;
                    phi_s3_2->words.w0 = 0xDA380003;
                    temp_s3_4 = phi_s3_2 + 8;
                    phi_s3_2->words.w1 = Matrix_NewMtx(*arg1);
                    temp_s3_4->unk0 = 0xDE000000;
                    temp_s3_4->unk4 = (s32) *(&D_808C9AD0 + (phi_s0_2->unk0 * 4));
                    phi_s3_8 = temp_s3_4 + 8;
                }
                temp_s2_2 = phi_s2_2 + 1;
                phi_s0_2 += 0x24;
                phi_s3_2 = phi_s3_8;
                phi_s2_2 = temp_s2_2;
                phi_s3_9 = phi_s3_8;
            } while (temp_s2_2 != 3);
            phi_t1_2 = sp64;
            phi_t0_2 = arg0;
            phi_v0_2 = sp60;
        }
        temp_t1 = phi_t1_2 + 4;
        phi_t0 = phi_t0_2;
        phi_v0 = phi_v0_2 + 4;
        phi_t1 = temp_t1;
        phi_t0_3 = phi_t0_2;
        phi_s3_4 = phi_s3_9;
        phi_s3_6 = phi_s3_9;
        phi_s3_3 = phi_s3_9;
    } while (temp_t1 < 0x50);
    if (phi_t0_2->unk192 != 0) {
        sp64 = 0;
        sp60 = phi_t0_2;
        do {
            temp_s4_2 = sp60->unk6E4;
            SysMatrix_InsertRotation(temp_s4_2->shape.rot.x, temp_s4_2->shape.rot.y, 0, 0);
            Matrix_Scale(phi_f24, phi_f24, phi_f24, 1);
            phi_s0_3 = temp_s4_2 + 0x160;
            phi_s2_3 = 0;
loop_24:
            temp_s5->mf[3][0] = temp_s4_2->world.pos.x - phi_s0_3->unk10;
            temp_s5->mf[3][1] = temp_s4_2->world.pos.y + (20.0f - phi_s0_3->unk14);
            temp_s5->mf[3][2] = temp_s4_2->world.pos.z - phi_s0_3->unk18;
            phi_s3_3->words.w0 = 0xDA380003;
            temp_s3_5 = phi_s3_3 + 8;
            phi_s3_3->words.w1 = Matrix_NewMtx(*arg1);
            temp_s3_5->unk0 = 0xDE000000;
            temp_s2_3 = phi_s2_3 + 1;
            temp_s3_6 = temp_s3_5 + 8;
            temp_s3_5->unk4 = (s32) *(&D_808C9AD0 + (phi_s0_3->unk0 * 4));
            phi_s0_3 += 0x24;
            phi_s3_3 = temp_s3_6;
            phi_s2_3 = temp_s2_3;
            phi_s3_4 = temp_s3_6;
            phi_s3_3 = temp_s3_6;
            if (temp_s2_3 != 3) {
                goto loop_24;
            }
            temp_t3 = sp64 + 4;
            sp60 += 4;
            sp64 = temp_t3;
        } while (temp_t3 != 0x50);
        phi_t0_3 = arg0;
    }
    phi_s3_5 = phi_s3_4;
    if (phi_t0_3->unk18D != 0) {
        SysMatrix_InsertRotation(0x4000, phi_t0_3->unk2F6, 0, 0);
        Matrix_Scale(phi_f22, phi_f22, phi_f22, 1);
        temp_s5->mf[3][0] = arg0->unk320 + sp9C.x;
        temp_s5->mf[3][1] = arg0->unk324 + sp9C.y;
        temp_s5->mf[3][2] = arg0->unk328 + sp9C.z;
        phi_s3_4->words.w0 = 0xDA380003;
        temp_s3_7 = phi_s3_4 + 8;
        phi_s3_4->words.w1 = Matrix_NewMtx(*arg1);
        temp_s3_7->unk0 = 0xDE000000;
        temp_s3_7->unk4 = (s32) D_808C9AD0;
        phi_s3_5 = temp_s3_7 + 8;
    }
    sp98->polyOpa.p = phi_s3_5;
}

void func_808C8D18(EnDeath *arg0, GraphicsContext **arg1) {
    s32 spC0;
    u8 spAB;
    EnDeath *sp74;
    Gfx *sp70;
    MtxF *sp6C;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s2;
    MtxF *temp_a0;
    MtxF *temp_s5;
    s32 temp_s3;
    s32 temp_s7;
    s32 temp_t1;
    s32 temp_t7;
    void *temp_v0_6;
    s32 phi_s7;
    u8 *phi_s3;
    s32 phi_t1;
    void *phi_s1;
    void *phi_s1_2;
    s32 phi_s4;
    s32 phi_s3_2;

    temp_s7 = arg0->unk2EE * 7;
    phi_s7 = temp_s7;
    if (temp_s7 >= 0x39) {
        phi_s7 = 0x38;
    }
    temp_s2 = arg1->unk0;
    temp_v0 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w1 = 0xE6871900;
    temp_v0->words.w0 = 0xFB000000;
    temp_a0 = arg1 + 0x187FC;
    sp6C = temp_a0;
    SysMatrix_SetCurrentState(temp_a0);
    Matrix_Scale(0.00405f, 0.003f, 0.00405f, 1);
    temp_s5 = SysMatrix_GetCurrentState();
    phi_s3 = arg0 + 0x1A9;
    phi_t1 = 0;
    phi_s1 = arg0 + 0x404;
    if (phi_s7 > 0) {
        do {
            if ((s32) *phi_s3 > 0) {
                sp70 = D_0407D590;
                temp_v0_2 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w0 = 0xFA008080;
                temp_v0_2->words.w1 = *phi_s3 | 0xA5FFD700;
                temp_v0_3 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_3 + 8;
                temp_v0_3->words.w0 = 0xDB060020;
                spC0 = phi_t1;
                temp_v0_3->words.w1 = Gfx_TwoTexScroll(arg1->unk0, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((s32) (arg1->unk18840 + (phi_t1 * 0xA)) * -0x14) & 0x1FF, 0x20, 0x80);
                temp_s5->mf[3][0] = phi_s1->unk0;
                temp_s5->mf[3][1] = phi_s1->unk4;
                temp_s5->mf[3][2] = phi_s1->unk8;
                temp_v0_4 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_4 + 8;
                temp_v0_4->words.w0 = 0xDA380003;
                temp_v0_4->words.w1 = Matrix_NewMtx(arg1->unk0);
                temp_v0_5 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_5 + 8;
                temp_v0_5->words.w0 = 0xDE000000;
                temp_v0_5->words.w1 = (u32) sp70;
            }
            temp_t1 = phi_t1 + 1;
            phi_s3 += 1;
            phi_t1 = temp_t1;
            phi_s1 += 0xC;
        } while (temp_t1 != phi_s7);
    }
    spC0 = 0;
    SysMatrix_SetCurrentState(sp6C);
    Matrix_Scale(0.00405f, 0.003f, 0.00405f, 1);
    if (func_808C7AAC == arg0->actionFunc) {
        spAB = (u8) arg0->unk2EE;
    } else {
        spAB = 0xFF;
    }
    sp74 = arg0;
    do {
        temp_v0_6 = sp74->unk6E4;
        phi_s1_2 = temp_v0_6 + 0x160;
        phi_s3_2 = 0;
        if ((temp_v0_6->flags & 0x40) == 0x40) {
            sp70 = D_0407D590;
            phi_s4 = spC0 * 0xA;
            do {
                temp_s5->mf[3][0] = phi_s1_2->unk4;
                temp_s5->mf[3][1] = phi_s1_2->unk8 - 12.0f;
                temp_s5->mf[3][2] = phi_s1_2->unkC;
                temp_v0_7 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_7 + 8;
                temp_v0_7->words.w1 = spAB | 0xA5FFD700;
                temp_v0_7->words.w0 = 0xFA008080;
                temp_v0_8 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_8 + 8;
                temp_v0_8->words.w0 = 0xDB060020;
                temp_v0_8->words.w1 = Gfx_TwoTexScroll(arg1->unk0, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((s32) (arg1->unk18840 + phi_s4) * -0x14) & 0x1FF, 0x20, 0x80);
                temp_v0_9 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_9 + 8;
                temp_v0_9->words.w0 = 0xDA380003;
                temp_v0_9->words.w1 = Matrix_NewMtx(arg1->unk0);
                temp_v0_10 = temp_s2->polyXlu.p;
                temp_s3 = phi_s3_2 + 1;
                temp_s2->polyXlu.p = temp_v0_10 + 8;
                temp_v0_10->words.w0 = 0xDE000000;
                temp_v0_10->words.w1 = (u32) sp70;
                phi_s1_2 += 0x24;
                phi_s4 += 0xA;
                phi_s3_2 = temp_s3;
            } while (temp_s3 != 3);
        }
        temp_t7 = spC0 + 1;
        sp74 += 4;
        spC0 = temp_t7;
    } while (temp_t7 != 0x14);
}

void func_808C9160(Actor *arg0, GraphicsContext **arg1) {
    Gfx *sp20;
    GraphicsContext *sp1C;
    Gfx *temp_v1;
    GraphicsContext *temp_a2;

    temp_a2 = *arg1;
    temp_v1 = temp_a2->polyOpa.p;
    sp1C = temp_a2;
    sp20 = temp_v1;
    SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
    temp_v1->words.w0 = 0xDA380003;
    sp1C = temp_a2;
    sp20 = temp_v1;
    temp_v1->words.w1 = Matrix_NewMtx(*arg1);
    temp_v1->unkC = &D_06009988;
    temp_v1->unk8 = 0xDE000000;
    if ((s32) arg0->params >= 5) {
        temp_v1->unk10 = 0xDE000000;
        temp_v1->unk14 = &D_06009BA0;
        temp_a2->polyOpa.p = temp_v1 + 0x18;
        return;
    }
    temp_a2->polyOpa.p = temp_v1 + 0x10;
}

s32 func_808C9220(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    f32 temp_f12;
    s32 temp_v0;

    if ((arg5 + arg1)->unk193 == 1) {
        *arg2 = NULL;
    } else if ((arg1 == 0xD) && (func_808C74F8 == arg5->unk188)) {
        temp_v0 = arg5->unk2EE - 5;
        if (temp_v0 > 0) {
            temp_f12 = 1.0f - ((f32) temp_v0 * 0.1f);
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
        }
    }
    if ((arg1 == 0x14) || (arg1 == 0x15)) {
        if (arg5->unk18E == 0) {
            *arg2 = NULL;
        }
    } else if (arg1 == 0xC) {
        arg4->z += arg5->unk2F2;
    } else if (arg1 == 0xD) {
        arg4->z += arg5->unk2F4;
    }
    return 0;
}

void func_808C9340(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f sp6C;
    Vec3f sp60;
    Vec3f sp54;
    Vec3f sp48;
    s32 sp44;
    f32 temp_f0;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s8 temp_v1;
    s32 phi_v0;
    Vec3f *phi_s1;
    Vec3f *phi_s0;

    if (arg1 == 0x15) {
        SysMatrix_GetStateTranslation(arg4 + 0x32C);
        if (((arg4->unk798 & 1) != 0) && (arg4->unk2EE != arg4->unk2EC)) {
            Math_Vec3f_Copy(&sp6C, arg4 + 0x7C8);
            Math_Vec3f_Copy(&sp60, arg4 + 0x7D4);
            if (func_808C682C == arg4->unk188) {
                SysMatrix_GetStateTranslationAndScaledX(6000.0f, &sp54);
                SysMatrix_MultiplyVector3fByState(&D_808C9AF4, &sp48);
            } else {
                SysMatrix_GetStateTranslationAndScaledY(5000.0f, &sp48);
                SysMatrix_MultiplyVector3fByState(&D_808C9B00, &sp54);
            }
            Collider_SetQuadVertices(arg4 + 0x788, &sp48, &sp54, &sp6C, &sp60);
            func_800A81F0(Effect_GetParams(arg4->unk300), &sp54, &sp48);
            arg4->unk2EC = (s16) arg4->unk2EE;
        } else if (arg4->unk18C != 0) {
            if (func_808C682C == arg4->unk188) {
                SysMatrix_GetStateTranslationAndScaledX(6000.0f, arg4 + 0x7D4);
                SysMatrix_MultiplyVector3fByState(&D_808C9AF4, arg4 + 0x7C8);
            } else {
                SysMatrix_GetStateTranslationAndScaledY(5000.0f, arg4 + 0x7C8);
                SysMatrix_MultiplyVector3fByState(&D_808C9B00, arg4 + 0x7D4);
            }
            arg4->unk18C = 0U;
            arg4->unk798 = (u8) (arg4->unk798 | 1);
            arg4->unk2EC = (s16) arg4->unk2EE;
        }
    } else if ((arg1 == 2) && (func_808C7AAC != arg4->unk188)) {
        SysMatrix_StatePush();
        func_808C9160(arg4, arg0);
        SysMatrix_StatePop();
        SysMatrix_GetStateTranslation(arg4 + 0x3C);
        temp_f0 = arg4->focus.pos.y;
        arg4->unk850 = (s16) (s32) arg4->focus.pos.x;
        arg4->unk852 = (s16) (s32) temp_f0;
        arg4->unk854 = (s16) (s32) arg4->focus.pos.z;
        if ((s32) arg4->params < 5) {
            arg4->unk852 = (s16) (s32) (temp_f0 + 5.0f);
        }
    } else if ((arg1 == 0x14) && ((temp_v0 = arg4->unk188, (func_808C6AB0 == temp_v0)) || (func_808C692C == temp_v0) || (func_808C6070 == temp_v0) || ((func_808C6F6C == temp_v0) && (arg4->unk18E == 1)))) {
        SysMatrix_CopyCurrentState(arg4 + 0x6A4);
    }
    temp_v1 = *(&D_808C9B48 + arg1);
    if (temp_v1 != -1) {
        if ((s32) temp_v1 < 7) {
            SysMatrix_GetStateTranslation(arg4 + (temp_v1 * 0xC) + 0x35C);
            return;
        }
        if (temp_v1 == 7) {
            phi_v0 = 0;
            phi_s1 = &D_808C9B0C;
            phi_s0 = arg4 + (temp_v1 * 0xC) + 0x35C;
            do {
                sp44 = phi_v0;
                SysMatrix_MultiplyVector3fByState(phi_s1, phi_s0);
                temp_v0_2 = phi_v0 + 1;
                phi_v0 = temp_v0_2;
                phi_s1 += 0xC;
                phi_s0 += 0xC;
            } while (temp_v0_2 != 5);
            return;
        }
        if (temp_v1 == 0xC) {
            temp_s0 = arg4 + (temp_v1 * 0xC);
            SysMatrix_GetStateTranslation(temp_s0 + 0x35C);
            SysMatrix_GetStateTranslationAndScaledY(-2000.0f, temp_s0 + 0x368);
        }
        // Duplicate return node #32. Try simplifying control flow for better match
    }
}

void EnDeath_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnDeath *this = (EnDeath *) thisx;
    GraphicsContext *sp44;
    void (*sp38)(EnDeath *, GlobalContext *);
    void (*sp34)(EnDeath *, GlobalContext *);
    Gfx *temp_v1;
    GraphicsContext *temp_a0;
    void (*temp_v0)(EnDeath *, GlobalContext *);
    void (*temp_v0_2)(EnDeath *, GlobalContext *);
    void (*temp_v0_3)(EnDeath *, GlobalContext *);

    temp_a0 = globalCtx->state.gfxCtx;
    sp44 = temp_a0;
    func_8012C28C(temp_a0);
    func_800B8050(&this->actor, globalCtx, 0);
    AnimatedMat_DrawStepOpa(globalCtx, (AnimatedMaterial *) this->unk734, (u32) this->unk191);
    AnimatedMat_DrawOpa(globalCtx, (AnimatedMaterial *) this->unk738);
    Scene_SetRenderModeXlu(globalCtx, 0, 1U);
    temp_v1 = temp_a0->polyOpa.p;
    temp_a0->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xFB000000;
    temp_v1->words.w1 = 0x1E1E00FF;
    sp38 = func_808C7AAC;
    temp_v0 = this->actionFunc;
    if ((func_808C7AAC != temp_v0) && (func_808C7888 != temp_v0)) {
        SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_808C9220, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_808C9340, &this->actor);
    }
    sp34 = func_808C7888;
    if (func_808C7888 == this->actionFunc) {
        func_808C9160(&this->actor, &globalCtx->state.gfxCtx);
    }
    if (this->unk18E == 0) {
        func_808C8690(&this->actor, globalCtx);
    }
    if (this->actor.colorFilterTimer != 0) {
        func_800AE5A0(globalCtx);
    }
    func_800BE680(globalCtx, &this->actor, (Vec3f []) &this->unk35C, 0xE, this->unk314, this->unk318, this->unk31C, (u8) (s32) this->unk18F);
    temp_v0_2 = this->actionFunc;
    if ((func_808C6AB0 == temp_v0_2) || (func_808C692C == temp_v0_2)) {
        func_808C84A4(&this->actor, globalCtx);
    }
    func_808C882C(this, &globalCtx->state.gfxCtx);
    temp_v0_3 = this->actionFunc;
    if ((sp38 == temp_v0_3) || (sp34 == temp_v0_3) || ((func_808C74F8 == temp_v0_3) && ((s32) this->unk2EE > 0))) {
        func_808C8D18(this, &globalCtx->state.gfxCtx);
    }
    SkinMatrix_Vec3fMtxFMultXYZ(&globalCtx->projectionMatrix, &this->unk32C, &this->unk338);
}

